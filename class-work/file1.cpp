#include <stdio.h>
#include <iostream>
#include <unistd.h>
using namespace std;


int main()
{
	int pid = 0;
	int status = 0;
	pid == fork();
	if(pid == 0)
	{
		// cout<<"Hi I am first child and my pid is = "<<pid<<endl;
		exit(status);
		printf("%s","Hi I am first child and my pid is = ");
		printf("%d", pid);
		exit(status);
		// printf("%s\n", );
	}
	else{
		// cout<<"hi I am parent"<<endl;
		int pid1 = fork();
		if (pid1 == 0)
		{
			// cout<<"Hi I am second procces and my pid is = "<<pid1<<endl;
			printf("Hi I am second procces and my pid is = ");
			printf("%d",pid1);
		}
		else{
			// cout<<"parent pid = "<< pid1<<endl;
			wait(&status);
		}
		// printf("parent\n");;
	}
	return 0;
}