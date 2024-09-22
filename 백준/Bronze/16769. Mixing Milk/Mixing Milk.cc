#include <stdio.h>
using namespace std;

int capacity[3];
int milk[3];

int main(void)
{
	for (int i = 0; i < 3; i++)
	{
		scanf("%d %d", &capacity[i], &milk[i]);
	}

	for (int i = 0; i < 100; i++)
	{

		if (milk[i % 3] + milk[(i + 1) % 3] > capacity[(i + 1) % 3])
		{
			milk[i % 3] = milk[i % 3] + milk[(i + 1) % 3] - capacity[(i + 1) % 3];
			milk[(i + 1) % 3] = capacity[(i + 1) % 3];
		}
		else
		{
			milk[(i + 1) % 3] = milk[i % 3] + milk[(i + 1) % 3];
			milk[i % 3] = 0;
		}

	}

	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", milk[i]);

	}
}