#include<stdio.h>
#include<conio.h>
 void input_matrix(int a[10][10],int r,int c)
 {
	int i,j;
	printf("Enter the %d elements: ",r*c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	}
 }

 void output_matrix(int a[10][10],int r,int c)
 {
	int i,j;
	printf("Matrix elements are as follows:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
 }
 void multiply_matrix(int a[10][10],int b[10][10],int c[10][10],int r1,int c2,int r2 )
 {
	int i,j,k;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			c[i][j]=0;
			for(k=0;k<r2;k++)
				c[i][j]+=a[i][k]*b[k][j];
		}
	}
 }
 void main()
 {
	int a[10][10],b[10][10],c[10][10],size,r1,c1,r2,c2;
	clrscr();
	printf("Enetr data for matrix 1......\n");
	printf("Enter the number of rows: ");
	scanf("%d",&r1);
	printf("\nEnter the number of columns: ");
	scanf("%d",&c1);
	input_matrix(a,r1,c1);
	printf("\nEnter data form matrix 2.....\n");
	printf("Enter the number of rows(Number of rows should be equal to number of column of 1st matrix): ");
	scanf("%d",&r2);
	printf("\nEnter the number of columns: ");
	scanf("%d",&c2);
	input_matrix(b,r2,c2);
	multiply_matrix(a,b,c,r1,c2,r2);
	printf("\n--------------Matrix 1-----------\n");
	output_matrix(a,r1,c1);
	printf("\n--------------Matrix 2------------\n");
	output_matrix(b,r2,c2);
	printf("\n--------------Resultant Matrix-----------\n");
	output_matrix(c,r1,c2);
	getch();
 }