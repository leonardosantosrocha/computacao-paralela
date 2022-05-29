#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define NUM_THREADS 6

long double sum = 0.0;

void *thread_t1(void* threadId)
{
	long double i = 0.0;

    	for (i = 1.0; i <= 16666666666.0; i++)
	{
		sum = sum + 1/i;
	}
}

void *thread_t2(void* threadId)
{
	long double i = 0.0;

    	for (i = 16666666667.0; i <= 33333333333.0; i++)
	{
		sum = sum + 1/i;
	}
}

void *thread_t3(void* threadId)
{
	long double i = 0.0;

   	for (i = 33333333334.0; i <= 50000000000.0; i++)
	{
		sum = sum + 1/i;
	}
}

void *thread_t4(void* threadId)
{
	long double i = 0.0;

   	for (i = 50000000001.0; i <= 66666666666.0; i++)
	{
		sum = sum + 1/i;
	}
}

void *thread_t5(void* threadId)
{
	long double i = 0.0;

   	for (i = 66666666667.0; i <= 83333333333.0; i++)
	{
		sum = sum + 1/i;
	}
}

void *thread_t6(void* threadId)
{
	long double i = 0.0;

   	for (i = 83333333334.0; i <= 100000000000.0; i++)
	{
		sum = sum + 1/i;
	}
}

int main()
{
	pthread_t threads[NUM_THREADS];

    	int t1, t2, t3, t4, t5, t6;

	long t = 0;
	
	t1 = pthread_create(&threads[0], NULL, thread_t1, (void*) t);
	t2 = pthread_create(&threads[1], NULL, thread_t2, (void*) t);
    	t3 = pthread_create(&threads[2], NULL, thread_t2, (void*) t);
    	t4 = pthread_create(&threads[3], NULL, thread_t2, (void*) t);
    	t5 = pthread_create(&threads[4], NULL, thread_t2, (void*) t);
    	t6 = pthread_create(&threads[5], NULL, thread_t2, (void*) t);

	
    	if (t1 || t2 || t3 || t4 || t5 || t6)
    	{
        	printf("Thread hasn't been created");
    	}
    	else
    	{
        	pthread_join(threads[0], NULL);
        	pthread_join(threads[1], NULL);
            	pthread_join(threads[2], NULL);
            	pthread_join(threads[3], NULL);
            	pthread_join(threads[4], NULL);
            	pthread_join(threads[5], NULL);
        	printf("Sum equals %.10Lf", sum);
    	}
	return 0;
}
