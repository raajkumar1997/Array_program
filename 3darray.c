#include<stdio.h>
void main()
{
	int a[3][3],b[3][3],c[3][3],i,j,m,n,num;
	printf("Enter the element of a matrix\n");
	for(i=0;i<3;i++)
		{
			for (j=0;j<3;j++)
				{
					scanf("%d",&a[i][j]);
					}
			printf("\n");
			}
	for(i=0;i<3;i++)
		{
			for (j=0;j<3;j++)
				{
					printf("%d   ",a[i][j]);
					}
			printf("\n");
			}
	printf("Enter the element of b matrix\n");
	for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
				{
					scanf("%d",&b[i][j]);
					}
			printf("\n");
			}
	for(i=0;i<3;i++)
		{
			for (j=0;j<3;j++)
				{
					printf("%d   ",b[i][j]);
					}
			printf("\n");
			}
	printf("Enter the element of c matrix \n");
	for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
				{
					c[i][j]=0;
					}
			printf("\n");
			}
	for(i=0;i<3;i++)
		{
			for (j=0;j<3;j++)
				{
					printf("%d   ",c[i][j]);
					}
			printf("\n");
			}
	printf("Select the row and colm in matrix\n");
	scanf("%d%d",&m,&n);
	{
	printf("enter the value 1 for add, 2 for sub, 3 for multiply  \n");
	scanf("%d",&num);
	switch(num)
		{
			case 1:
				{
				       printf("The add of \n");
				       {
					       c[m][n]=a[m][n]+b[m][n];
					       for(i=0;i<3;i++)
						       {
							       for(j=0;j<3;j++)
								       {
									       printf("%d  ",c[i][j]);
									       }
							       printf("\n");
							       }
					       }
				       }
			       break;
			       case 2:{
					      printf("the sub of \n");
					      {
						      c[m][n]=a[m][n]-b[m][n];
						      }
					      for(i=0;i<3;i++)
						      {
							      for(j=0;j<3;j++)
								      {
									      printf("%d  ",c[i][j]);
									      }
							      printf("\n");
						      }
					      }
				      break;
				      case 3:
				      {
					      printf("the multiply of \n");
					      {
						      c[m][n]=a[m][n]*b[m][n];
						      }
					      for(i=0;i<3;i++)
						      {
							      for(j=0;j<3;j++)
								      {
									      printf("%d  ",c[i][j]);
									      }
							      printf("\n");
							      }
					      }
				      break;
				      default:printf("not valid");
					      }
	}
	}




