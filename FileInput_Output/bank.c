#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

void manageAccount(FILE*);
int checkExist(FILE*,int);
FILE* manageTransaction(FILE*,FILE*);
FILE* deposit(FILE *ft,FILE *fa,int accno,float amount);
FILE* withdrawal(FILE *ft,FILE *fa,int accno,float amount);
void displayChoice();
struct account
{
    int accno;
    char name[30];
    float balance;
};
struct transaction
{
    int accno;
    char trans_type;
    float amount;
};
void main()
{
    FILE *facc, *ftrans;
    struct account ac;
    char choice;
    facc=fopen("cust.dat","rb+");
    if(facc==NULL)
    {
        facc=fopen("cust.dat","wb+");
        if(facc==NULL)
        {
            printf("Account file cannot be opened.");
            exit(1);
        }
    }
    ftrans=fopen("trans.dat","rb+");
    if(ftrans==NULL)
    {
        ftrans=fopen("trans.dat","wb+");
        if(ftrans==NULL)
        {
            printf("Transaction file cannot be opened.");
            exit(2);
        }
    }
    displayChoice();
    choice=getche();
    while(1)
    {
        switch(choice)
        {
            case '1':
                manageAccount(facc);
                break;
            case '2':
                facc=manageTransaction(ftrans,facc);
                break;
            /*case '3':
                manageTransaction(ftrans);
                break;*/
            case '3':
                exit(3);
                break;
            case '4':
                rewind(facc);
                while(fread(&ac,sizeof(ac),1,facc)!=NULL)
                {
                    printf("\n%d\t%s\t%f",ac.accno,ac.name,ac.balance);
                }
                break;
            default:
                exit(4);
        }
        displayChoice();
        choice=getche();
    }
    fclose(facc);
    fclose(ftrans);
}
void manageAccount(FILE *facc)
{
    char choice;
    struct account ac;
    struct account ea;
    printf("\nDo you want to add a new account?(y/n):");
    choice=getche();
    switch(choice)
    {
        case 'y':
            printf("\nEnter account number:");
            scanf("%d",&ac.accno);
            printf("\nEnter customer name:");
            scanf("%s",&ac.name);
            printf("\nEnter balance:");
            scanf("%f",&ac.balance);
            if(checkExist(facc,ac.accno)==0)
            {
            fwrite(&ac,sizeof(ac),1,facc);
            printf("\nAccount opened Successfully.");
            }
            else
            {
                printf("\n Account No. already exists");
            }
            break;
        default:
            break;
    }
}
FILE* manageTransaction(FILE *ftrans,FILE *facc)
{
    int accno;
    char choice;
    float amount;
    struct account ac;
    int status=0;
    printf("\nEnter account number:");
    scanf("%d",&accno);
    printf("Deposit or Withdrawal(d/w):");
    choice=getche();
    switch(choice)
    {
        case 'd':
            printf("\nEnter amount:");
            scanf("%f",&amount);
            facc=deposit(ftrans,facc,accno,amount);
            break;
        case 'w':
            printf("\nEnter amount:");
            scanf("%f",&amount);
            rewind(facc);
            while(fread(&ac,sizeof(ac),1,facc)!=NULL)
            {
                if(ac.accno==accno)
                {
                    if(ac.balance-amount<100)
                    {
                        printf("\nMinimum balance required.");
                        status=1;
                        break;
                    }
                }
            }
            if(status==0)
            {
                facc=withdrawal(ftrans,facc,accno,amount);
            }
            break;
        default:
            break;
    }
    return facc;
}
void displayChoice()
{
    printf("\nMain menu");
    printf("\n1. Add new account");
    printf("\n2. Deposit/Withdraw");
    printf("\n3. Exit");
    printf("\n4. Display  Customer list");
    printf("\nEnter your choice:");
}
int checkExist(FILE *facc,int accountno)
{
    int status=0;
    struct account ac;
    rewind(facc);
    while(fread(&ac,sizeof(ac),1,facc)!=NULL)
    {
        printf("%d",ac.accno);
        if(ac.accno==accountno)
        {
            status=1;
            break;
        }
    }
    fseek(facc,0,SEEK_END);
    return status;
}
FILE* deposit(FILE *ft,FILE *fa,int accno,float amount)
{
    FILE *ftemp;
    struct transaction t;
    struct account ac;
    t.trans_type='d';
    t.amount=amount;
    t.accno=accno;
    fwrite(&t,sizeof(t),1,ft);
    ftemp=fopen("ctemp.dat","w+");
    rewind(fa);
    while(fread(&ac,sizeof(ac),1,fa)!=NULL)
    {
        if(ac.accno==accno)
        {
            ac.balance=ac.balance+amount;
        }
        fwrite(&ac,sizeof(ac),1,ftemp);
    }
    fclose(fa);
    fclose(ftemp);
    remove("cust.dat");
    rename("ctemp.dat","cust.dat");
    fa=fopen("cust.dat","r+");
    return fa;
}
FILE* withdrawal(FILE *ft,FILE *fa,int accno,float amount)
{
    FILE *ftemp;
    struct transaction t;
    struct account ac;
    t.trans_type='d';
    t.amount=amount;
    t.accno=accno;
    fwrite(&t,sizeof(t),1,ft);
    ftemp=fopen("ctemp.dat","w+");
    rewind(fa);
    while(fread(&ac,sizeof(ac),1,fa)!=NULL)
    {
        if(ac.accno==accno)
        {
            ac.balance=ac.balance-amount;
        }
        fwrite(&ac,sizeof(ac),1,ftemp);
    }
    fclose(fa);
    fclose(ftemp);
    remove("cust.dat");
    rename("ctemp.dat","cust.dat");
    fa=fopen("cust.dat","r+");
    return fa;
}