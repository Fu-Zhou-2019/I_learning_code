#include <stdio.h>
 
void PrintN(int N);
 
void PrintN(int N)
{
 	int i;
 	for(i=1;i<N;i++)
	 {
		 printf("%d\n",i);
	 }

 } 
 
int main()
{
	int N;	
	printf("please enter number:");
	scanf("%d", &N);
	PrintN(N);
	return 0;
 }
 
 

