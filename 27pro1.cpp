#include<stdio.h>
#include<string.h>
void substring(char str[],int n)
{
		int x,i,k,j;
	
		for(i=1;i<n;i++)
		{
			for(j=0;j<n-1;j++)
			{
				int x=j+i;
				for(k=j;k<x;k++)
				{
					printf("%3c",str[k]);
				}
				printf("\n");
			}
		}
}
int main()
{
	char str[]="abcd";
	 substring(str,strlen[str]);
	 
	return 0;
}
