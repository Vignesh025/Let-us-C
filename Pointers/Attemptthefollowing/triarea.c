#include<stdio.h>
#include<math.h>
void res(float x1, float y1, float x2, float y2, float x3, float y3,
         float x, float y, float *area, int *flag);
float distance(float x1, float y1, float x2, float y2);
float cal_area(float a, float b, float c);
int position(float area, float A, float B, float C);

void main()
{
    float x1, y1, x2, y2, x3, y3, x, y;
    float area=0;
    int flag=0;

    printf("Enter the values of (x1,y1): ");
    scanf("%f%f", &x1, &y1);

    printf("Enter the values of (x2,y2): ");
    scanf("%f%f", &x2, &y2);

    printf("Enter the values of (x3,y3): ");
    scanf("%f%f", &x3, &y3);

    printf("Enter point values (x,y): ");
    scanf("%f%f", &x, &y);

    res(x1, y1, x2, y2, x3, y3, x, y, &area, &flag);

    printf("\n Area of triangle: %.2f\n", area);

    if (flag==1)
        printf("\nPoint(%.2f, %.2f) lies inside the triangle.",x,y);
    else
        printf("\nPoint(%.2f, %.2f) lies outside the triangle.",x,y);

}
void res(float x1, float y1, float x2, float y2, float x3, float y3,
         float x, float y, float *area, int *flag)
{
    float a, b, c, d, e, f, A, B, C ;

    a = distance(x1,y1,x2,y2);
    b = distance(x2,y2,x3,y3);
    c = distance(x3,y3,x1,y1);

    *area = cal_area(a,b,c);

    d = distance(x1,y1,x,y);
    e = distance(x2,y2,x,y);
    f = distance(x3,y3,x,y);

    A = cal_area(d,e,a);
    B = cal_area(e,b,f);
    C = cal_area(f,c,d);

    *flag = position(*area, A, B, C);
}

float distance(float x1, float y1, float x2, float y2)
{
    return (sqrt(pow((x2-x1),2)+pow((y2-y1),2)));
}
float cal_area(float a, float b, float c)
{
    float S,ar;

    S = (a+b+c)/2.0;

    ar = (sqrt(S*(S-a)*(S-b)*(S-c)));
    return (ar);
}
int position(float area, float A, float B, float C)
{
    float res;

    res = area-(A+B+C);

    if(res==0 || res<0.0001)
    {
        return(1);
    }
    else
    {
        return(0);
    }
}