#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *P;
	P=(int*) malloc(sizeof(int));
	*P = 20;
	free(P);
	P = NULL; // avoid dangling pointer
	 // *P=10;   // remove or re-allocate memory
	return 0;
}
