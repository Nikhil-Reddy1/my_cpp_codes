#include<stdio.h>
int main()
{
	int n,count = 1;
	printf("enter the range = ");
	scanf("%d",&n);
	for (int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= (n-1); j++)
		{
			if(j<=(2*i-1))
			{
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}