#include<stdio.h>
#include<math.h>
double maxOfThree(double a, double b, double c) { 
    if(a>b&&a>c){
        return a;
    }else if(b>a && b>c){
        return b;
    }else{
        return c;
    }
    //return fmax(fmax(a, b), c); 
} 
int main()
{
    float r,g,b;
    printf("Enter the values:");
    scanf("%f %f %f",&r,&g,&b);
    double c,m,y,k,w;
    // if(r==0 && g==0 && b==0)
    // {
    //     c=0;
    //     m=0;
    //     y=0;
    //     k=1;
    // }
    // else
    // {
        float rf=r/255;
        float gf=g/255;
        float bf=b/255;
        w=rf;
        if(gf>rf){
            w=gf;
        }else if(bf>rf){
            w=bf;
        }
        c=(w-rf)/w;
        m=(w-gf)/w;
        y=(w-bf)/w;
        k=1-w;
         printf(" %lf %lf %lf",rf,gf,bf);
    //}
    printf("The CMYK values are %lf %lf %lf %lf %d %d %d %lf",c,m,y,k,r,g,b,w);
}