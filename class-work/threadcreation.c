#include <stdio.h>
#include <pthread.h>

#define siz 5


void* printHello(void *threadid)
{
	printf("%s%d\n", "Hello World = ", threadid);
	pthread_exit(NULL);
}


int main()
{
	pthread_t threads[siz];
	for (int i = 0; i < siz; ++i)
	{
		int result = pthread_create(&threads[i], NULL, printHello, (void*)i);
		if (result)
		{
			printf("%s\n", "error" );
		}
	}	
	return 0;
}