#include<stdio.h>
#include<Stdlib.h>
int main()
{
	FILE *fp;
	int count=1;
	char ch;
	fp = fopen("array.c","r");
	if(fp==NULL)
	{
		printf("file error");
		exit(0);
	}
	while((ch = fgetc(fp)) != EOF)
	{
		if(ch == '\n')
		{
			count++;
		}
	}
	fclose(fp);
	printf("%d",count);
	return 0;
	
}
