#include<stdio.h>
#include<time.h>
int main()
{
	time_t timer;
	time(&timer);
	printf(ctime(&timer));
	return 0;
}
