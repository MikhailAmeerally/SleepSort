#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int sleepSort(int* lst, int size)
{
	int i = 0;
	while(i < size)
	{
		if(fork() == 0)
		{
			i ++;
		}
		else
		{
			break;
		}
	}
	if(i < size)
	{
		sleep(lst[i]);
		printf("%d\n", lst[i]);
		wait(NULL);
	}
	return 0;
}

int main(int argc, char** argv)
{
	int lst[5];
	lst[0] = 6;
	lst[1] = 1;
	lst[2] = 4;
	lst[3] = 2;
	lst[4] = 3;
	int size = 5;
	sleepSort(lst,size);
}