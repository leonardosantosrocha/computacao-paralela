#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define N_THREADS 2

double sum = 0.0;

double *thread_t1(void* rank, int t)
{
	double i = 0.0
	
	for (i = 1; i <= (t/2); i++)
	{
		sum = sum + 1/i;
	}
}

double *thread_t2(void* rank, int t)
{
	double i = 0.0;
	
	for (i = (t/2)+1; i <= t; i++)
	{
		sum = sum + 1/i;
	}
}

int main(void)
{
	long thread;
	pthread_t* thread_handles = malloc(N_THREADS * malloc(pthread_t));
	
	pthread_create(&thread_handles[0], NULL, thread_t1, (void*) thread);
	pthread_create(&thread_handles[1], NULL, thread_t2, (void*) thread);
	
	pthread_join(thread_handles[0], NULL);
	pthread_join(thread_handles[1], NULL);
	
	free(thread_handles);
	
	printf("Sum equals %lf", &sum);
	return 0;
}
