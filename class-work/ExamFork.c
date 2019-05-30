#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>

int main()
{
int pid = 0, s, status, i, j;
pid = fork();
if(pid>0)
	{
	printf("%d", pid);
	s = wait(&status);	
	for(i=0; i<1000; i+=2)
		{
		printf("%d\t", i);
		}	
	
	printf("\nParent %d          %d", s, status);
	}
else
	{
	for(j=1; j<1000; j+=2)
		{
		printf("%d\t", j);
		}	
	printf("Child");
	exit(0);
	}
}