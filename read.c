#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("sum.c","r");
	if(fp==NULL)
	{
		printf("file does notb exist");
		exit(0);
	}
	ch=fgetc(fp);
	while(ch!=EOF)
    {
    	printf("%c",ch);
    	ch=fgetc(fp);
	}
	fclose(fp);
	return 0;
}
