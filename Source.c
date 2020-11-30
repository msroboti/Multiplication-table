#include <stdio.h>
int main()
{
	//جدول ضرب با آرایه دوبل
	int i[10][10];
	int x, y;
	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			i[x][y] = (x + 1)*(y + 1);
			printf(" %3d", i[x][y]);
		}
		printf("\n");
	}
	getchar();
}