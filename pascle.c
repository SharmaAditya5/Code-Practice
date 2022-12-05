#include<stdio.h>
#include<conio.h>
long factorial(int n) {  
    int c;  
    long result = 1;  
    for (c = 1; c <= n; c++) result = result * c;  
    return result;  
}  
void main()
{
    int i,j,k;
    for(i=0;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        printf(" ");
        for(k=0;k<=i;k++)
            printf("%d ",factorial(i)/(factorial(k)*factorial(i-k)));
    printf("\n");
    }
    getch();
}