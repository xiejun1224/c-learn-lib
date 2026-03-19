#define _CRT_SECURE_NO_WARNINGS 1
#include"Queue.h"
void test()
{
	Queue sth;
	QueueInit(&sth);
	QueuePush(&sth, 1);
	QueuePush(&sth, 2);
	QueuePush(&sth, 3);
	QueuePush(&sth, 4);
	
	printf("%d\n ", QueueBack(&sth));
	printf("\n");
	QueuePop(&sth);
	QueuePop(&sth);
	QueuePop(&sth);
	QueuePop(&sth);
	printf("%d\n ", QueueSize(&sth));
	printf("\n");

	while (!QueueEmpty(&sth))
	{
		printf("%d ", QueueFront(&sth));
		QueuePop(&sth);
	}
	
	QueueDestroy(&sth);

}
int main()
{
	test();
	return 0;
}
