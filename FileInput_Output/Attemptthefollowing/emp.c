#include<stdio.h>
#include<string.h>

struct date
{
    int d;
    int m;
    int y;
};
struct employee
{
    int empcode;
    char empname[20];
    struct date join_date;
    float salary;
};
int comparedate(struct date,struct date);
struct employee addEmployee(int code,char name[20],float salary,int d,int m,int y);
void main()
{
    struct employee e[100],temp;
    int i,j;
    FILE *fd;
    fd=fopen("emp.txt","r+");
    if(fd==NULL)
    {
        fd=fopen("emp.txt","w+");
    }
    /*while(fread(&temp,sizeof(temp),1,fd)!=NULL)
    {
        printf("\n%s\t%d\%d\%d",temp.empname,temp.join_date.d,temp.join_date.m,temp.join_date.y);
    }*/
    e[0]=addEmployee(1001,"Peter",1000,20,10,2020);
    e[1]=addEmployee(1003,"Mark",6000,20,12,2022);
    e[2]=addEmployee(1006,"Sam",2000,12,8,2020);
    e[3]=addEmployee(1004,"John",3000,19,12,2021);
    e[4]=addEmployee(1002,"Louis",4000,29,4,2019);
    e[5]=addEmployee(1009,"Liam",5000,25,11,2023);
    e[6]=addEmployee(1008,"Harry",9000,9,7,2022);
    for(i=0;i<6;i++)
    {
    for(j=i+1;j<7;j++)
    {
        switch(comparedate(e[i].join_date,e[j].join_date))
        {
            case 1:
                break;
            case 2:
                temp=e[i];
                e[i]=e[j];
                e[j]=temp;
                break;
        }
    }
    }
    for(i=0;i<7;i++)
    {
        fwrite(&e[i],sizeof(e[i]),1,fd);
        printf("\n%d\t%s\t%d/%d/%d\t%f",e[i].empcode,e[i].empname,e[i].join_date.d,e[i].join_date.m,e[i].join_date.y,e[i].salary);
    }
    fclose(fd);
    /*struct date d1;
    struct date d2;
    int status;
    switch (comparedate(d1,d2))
    {
    case 1:
        printf("Date %d/%d/%d is less than %d/%d/%d",d1.d,d1.m,d1.y,d2.d,d2.m,d2.y);
        break;
    case 2:
        printf("Date %d/%d/%d is less than %d/%d/%d",d2.d,d2.m,d2.y,d1.d,d1.m,d1.y);
        break;
    }*/
}
int comparedate(struct date d1,struct date d2)
{
    if(d1.y<d2.y)
    {
        return 1;
    }
    else if(d1.y==d2.y)
    {
        if(d1.m<d2.m)
        {
            return 1;
        }
        else if(d1.m==d2.m)
        {
            if(d1.d<d2.d)
            {
                return 1;
            }
            else
            {
                return 2;
            }
        }
        else
        {
            return 2;
        }
    }
    else
    {
        return 2;
    }
}
struct employee addEmployee(int code,char name[20],float salary,int d,int m,int y)
{
    struct employee e;
    e.empcode=code;
    strcpy(e.empname,name);
    e.salary=salary;
    e.join_date.d=d;
    e.join_date.m=m;
    e.join_date.y=y;
    return e;


}