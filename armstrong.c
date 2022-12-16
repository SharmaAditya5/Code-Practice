#include<stdio.h>
#include<conio.h>
#include<math.h>
int is_armstrong(int a)
{
    int sum_of_digits(int);
    if(sum_of_digits(a)==a)
        return 1;
    else return 0;
}
int power(int b,int p)
{
    int i,res=1;
    for(i=1;i<=p;i++)
    {
        res=res*b;
    }
    return res;
}
int sum_of_digits(int a)
{   
    int power(int ,int);
    int c=0,temp,sum=0;
    temp=a;
     while(a>0)
    {
        a=a/10;
        c++;
    }
    a=temp;
    while(a>0)
    {
        temp=a%10;
        sum=sum+power(temp,c);
        a=a/10;
    }
    return sum;
}
int is_prime(int a)
{
    int i;
    for(i=2;i<sqrt(a);i++)
    {
        if(a%i==0)
        return 0;
    }
    return 1;
}
void main()
{
    int ch,i,num;
    int is_armstrong(int);
    int is_prime(int);
    printf("Enter a number:");
    scanf("%d",&num);
    printf("\n-----------MENU-----------");
    printf("\n1.Check for armstrong");
    printf("\n2.Check for prime");
    printf("\nEnter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            if(is_armstrong(num))
            {
                printf("\nNumber is armstrong");
            }
            else
                printf("\nNumber is not armstrong");
            break;
        case 2:   
            if(is_prime(num))
            {
                printf("\nNumber is prime");
            }
            else
             printf("\nNumber is not prime");
            break;
        default:
            printf("\nWrong choice!");

    }
}