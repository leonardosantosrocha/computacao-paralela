#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

#define t 100

// linha para debugar os valores dos laços for
//printf("Hello from thread %d of %d\n", thread_id, thread_count);
//printf("i = %d | div = %ld | rest = %ld | local_sum = %Lf\n", i, div, rest, local_sum)

void tartaruga(int thread_id, int thread_count, long double* global_sum)
{
    int i = 0;
    long int div = t / thread_count;
    long int rest = t % thread_count;
    long double local_sum = 0.0;

    if (rest != 0)
    {
        # pragma omp parallel for num_threads(thread_count) reduction(+: local_sum)
        for (i = 1.0 + thread_id * div; i <= div + thread_id * rest; i++)
        {
            local_sum = local_sum + (1 / ((long double) i));
        }
        if (thread_id == 0)
        {
            # pragma omp parallel for num_threads(thread_count) reduction(+: local_sum)
            for (i = t - rest + 1; i <= t; i++)
            {
                local_sum = local_sum + (1 / ((long double) i));
            }
        }
    }
    else 
    {
        # pragma omp parallel for num_threads(thread_count) reduction(+: local_sum)
        for (i = 1.0 + thread_id * div; i <= div + thread_id * rest; i++)
        {
            local_sum = local_sum + (1 / ((long double) i));
        }
    }

    #pragma omp critical
    *global_sum += *global_sum + local_sum;
}

int main()
{
    int thread_id = omp_get_thread_num();
    int thread_count = 2;
    long double global_sum = 0.0;

    # pragma omp parallel num_threads(thread_count)
    tartaruga(thread_id, thread_count, &global_sum);

    printf("%Lf\n", global_sum);

	return 0;
}
