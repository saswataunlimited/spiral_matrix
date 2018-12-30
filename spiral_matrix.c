#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int **buildAmatrix(int m,int n)
{
	int i,j;
	int **matrix=(int **)malloc(m*sizeof(int*));
	for(i=0;i<m;++i)
		matrix[i]=(int *)malloc(n*sizeof(int));
	printf("You have to give inputs for the matrix now...\n");
	for(i=0;i<m;++i)
	{
		for(j=0;j<n;++j)
			scanf("%d",&matrix[i][j]);
	}
	return matrix;
}
int main()
{
	int m,n;
	printf("Here we'll create a matrix first.\n");
	printf("Enter the value of rows and columns(only square matrix):\n");
	scanf("%d%d",&m,&n);
	int **matrix=buildAmatrix(m,n);
	int i,j;
	printf("Your matrix is....\n");
	for(i=0;i<m;++i)
        {
                for(j=0;j<n;++j)
                        printf("%d ",matrix[i][j]);
		printf("\n");
        }
	
	printf("Lets print the matrix in a spiral order...\n");
        int b,a=((int)ceil(m/2));
        j=0,i=0;printf("\nTesting1!\n");
	for(b=0;b<=a;++b)
	{
		printf("Testing2!\n\n");
		printf("Printing %dth layer\n",b);
		for(j=b;j<=n-1-b;++j)
			printf("%d ",matrix[i][j]);
		printf("\n"); --j;

		for(i=(1+b);i<=(m-1-b);++i)
			printf("%d ",matrix[i][j]);
		printf("\n"); --i;
		
		for(j=(n-2-b);j>=b;--j)
			printf("%d ",matrix[i][j]);
		printf("\n"); ++j;
		
		for(i=(m-2-b);i>=(b+1);--i)
			printf("%d ",matrix[i][j]);
		printf("\n"); ++i;
	}
	
	
	/*printf("Lets print the matrix in a spiral order...\n");
	int b=0,a=ceil(m/2)-1;
	j=0,i=0;printf("\nTesting1!\n");
	for(b=0;b<=a;++b)
	{
		printf("\n\nTesting2!\n\n");
		for(j=b;j<=n-1-b;++j)
			printf("%d ",matrix[i][j]);
		for(i=1+b;i<=m-1-b;++i)
			printf("%d ",matrix[i][j]);
		for(j=n-2-b;j>=b;--j)
			printf("%d ",matrix[i][j]);
		for(i=m-2-b;i>=1+b;--i)
			printf("%d ",matrix[i][j]);
		printf("\n");
	}*/
	for(i=0;i<m;++i)
                free(matrix[i]);
	free(matrix);
}
