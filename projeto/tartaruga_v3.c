#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int thread_count = 6;
long double global_sum = 0.0;
long double t = 10000000000000;

long double tartaruga()
{
	int thread_id = omp_get_thread_num();
   	long double i, min, max, local_sum = 0.0;
	
	min = 1 + (t / (thread_count)) * thread_id;
	max = (t / (thread_count)) + (t / (thread_count)) * thread_id;

    	for (i = min; i <= max ; i++) 
	{
		local_sum += (1 / i);
	}
	printf("i = %Lf | local_sum = %Lf\n", i, local_sum);
	return local_sum;
}

int main()
{
	long double local_sum = 0.0;

	# pragma omp parallel num_threads(thread_count)
	local_sum += tartaruga();

	#pragma omp critical
	global_sum += local_sum;

	printf("%.10Lf\n", global_sum);
	return 0;
}
