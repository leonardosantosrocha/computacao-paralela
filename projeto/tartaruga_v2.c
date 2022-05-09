#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define NUM_THREADS 2

double sum = 0.0;

void *thread_t1(void* threadId)
{
	double i = 0.0;

	// for (i = 1.0; i <= (t/2); i++)
    	for (i = 1.0; i <= 500.0; i++)
	{
		sum = sum + 1/i;
	}
}

void *thread_t2(void* threadId)
{
	double i = 0.0;

	// for (i = ((t/2.0)+1.0); i <= t; i++)
    	for (i = 501.0; i <= 1000.0; i++)
	{
		sum = sum + 1/i;
	}
}

int main()
{
	pthread_t threads[NUM_THREADS];

    	int t1, t2;

	long t = 0;
	
	t1 = pthread_create(&threads[0], NULL, thread_t1, (void*) t);
	t2 = pthread_create(&threads[1], NULL, thread_t2, (void*) t);
	
    	if (t1 || t2)
    	{
        	printf("Thread hasn't been created");
    	}
    	else
    	{
        	pthread_join(threads[0], NULL);
        	pthread_join(threads[1], NULL);
        	printf("Sum equals %f", sum);
    	}
	return 0;
}
