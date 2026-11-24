#include<stdio.h>
int main()
{
	int h = 1;
	int l = 1;
	while (l <= 3*5)
	{
		if (l % 5 != 0)
		{
			printf("*");
			l++;
		}
		else
		{
			printf("*\n");
			l++;
		}
	}
	return 0;

}