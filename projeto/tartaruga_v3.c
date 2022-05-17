#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

#define t 10000000

int thread_count = 2;
long double global_sum = 0.0;

void tartaruga()
{
	int thread_id = omp_get_thread_num();
    long double i, min, max, local_sum = 0;
	
	min = 1 + (t / (thread_count)) * thread_id;
	max = (t / (thread_count)) + (t / (thread_count)) * thread_id;

	
    for (i = min; i <= max ; i++) {
		local_sum += (1 / i);
        printf("%Lf %Lf\n", i, local_sum);
	}
    #pragma omp critical
    global_sum += global_sum + local_sum;
}
int main()
{
    # pragma omp parallel num_threads(thread_count)
    tartaruga();
    printf("%Lf\n", global_sum);
	return 0;
}
