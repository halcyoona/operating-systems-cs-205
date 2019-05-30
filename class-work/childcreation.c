// #include <stdio.h>
// #include <unistd.h>


int main()
{
	int pid = 0;
	int status = 0;
	pid == fork();
	if(pid == 0)
	{
		cout<<"Hi I am first child and my pid is = "<<pid<<endl;
		exit(status);
		printf("%s","Hi I am first child and my pid is = ");
		printf("%d", pid);
		exit(status);
		printf("%s\n", );
	}
	else{
		cout<<"hi I am parent"<<endl;
		int pid1 = fork();
		if (pid1 == 0)
		{
			cout<<"Hi I am second procces and my pid is = "<<pid1<<endl;
			printf("Hi I am second procces and my pid is = ");
			printf("%d",pid1);
		}
		else{
			cout<<"parent pid = "<< pid1<<endl;
			wait(&status);
		}
		printf("parent\n");;
	}
	return 0;
}



#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    printf("--beginning of program\n");

    int counter = 0;
    int pid = fork();

    if (pid == 0)
    {
        // child process
        int i = 0;
        for (; i < 5; ++i)
        {
            printf("child process: counter=%d\n", ++counter);
        }
    }
    else if (pid > 0)
    {
        // parent process
        int j = 0;
        for (; j < 5; ++j)
        {
            printf("parent process: counter=%d\n", ++counter);
        }
    }
    else
    {
        // fork failed
        printf("fork() failed!\n");
        return 1;
    }

    printf("--end of program--\n");

    return 0;
}

