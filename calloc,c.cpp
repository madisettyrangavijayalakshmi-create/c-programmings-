#include<Stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*ptr;
	printf("enter n value");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
	printf("enter integers numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr++);
	}
	return 0;
}
