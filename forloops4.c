#include<stdio.h>
int main()
{
	int start,end;
	int i,n;
	int sum=0;
	
	printf("Enter start:");
	scanf("%d", &start);
	
	printf("Enter end:");
	scanf("%d", &end);
	
for(i=start;i<=end;i++)
{
	sum=sum+i;
}
   	printf("sum=%d\n",sum);
   
	
    return 0;
}