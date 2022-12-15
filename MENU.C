#include<stdio.h>
#include<conio.h>
int fact(int a)
{
 int i,f=1;
 for(i=1;i<=a;i++)
     f*=i;
 return f;
}
int power(int a,int b)
{
 int i,r=1;
 for(i=1;i<=b;i++)
   r=r*a;
 return r;
}
int sum_of_digits(int num)
{
  int sum=0;
  while(num>0)
  {
    sum+=num%10;
    num/=10;
  }
  return sum;
}
void main()
{
   int x,y,choice;
   int fact(int);
   int power(int,int);
   int sum_of_digits(int);
   clrscr();
   printf("--------------Menu------------\n");
   printf("(1)factorial\n(2)power\n(3)sum_of_digits\nEnter your choice:");
   scanf("%d",&choice);
   switch(choice)
   {
     case 1: printf("\nEnter your number:");
	     scanf("%d",&x);
	     printf("Factorial :%d",fact(x));
	     break;

     case 2: printf("\nEnter number:");
	     scanf("%d",&x);
	     printf("\nEnter power:");
	     scanf("%d",&y);
	     printf("\n%d to the power %d:%d",x,y,power(x,y));
	     break;
    case 3: printf("\nEnter your number:");
	    scanf("%d",&x);
	    printf("Sum of digits:%d",sum_of_digits(x));
	    break;
    default: printf("invalid ");
   }
getch();
}