#include "threadpool.h"
void *print(int arg)
{
	printf("thread %lu working!\n", pthread_self());
	return NULL;
}
int main()
{
	int n;
	printf("thread num:");
	scanf("%d", &n);
	struct threadpool *pool = threadpool_init(n);
	for(int i = 1; i <= 10000000; ++i)
		threadpool_add_job(pool, print, 0);
	threadpool_destroy(pool);
	return 0;
}
