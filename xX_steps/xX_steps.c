#include <stdio.h>

void step(int *flag)
{
	if(*flag == 0)
	{
		printf("xX\n");
		*flag = 1;
	}

	else
	{
		printf("Xx\n");
		*flag = 0;
	}
}

int main()
{
	int steps, i, flag = 0; //0 for left foot, 1 for right foot
	
	printf("enter the steps number: ");
	scanf("%d", &steps);
	
	for(i = 0; i < steps; i++)
		step(&flag);
	
	return 0;
}
