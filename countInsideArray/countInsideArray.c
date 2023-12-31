#include <stdio.h>
#define MAX_SIZE 100

int arraySize();
int arrayElements(int i);

int main()
{
	int size = arraySize(), array[size], temp, value[size], count, flag, i, j, z;
	
	printf("please enter %d integer(s)\n\n", size);
	for(i = 0; i < size; i++)
		array[i] = arrayElements(i);
	
	printf("\nthe array created by user input: ");
	for(i = 0; i < size; i++)
		printf("%d ", array[i]);
	
	printf("\n\n");
	
	printf("%-16s%-16s%s\n", "index number:", "value:", "is repeated in the array?");
	
	for(i = 0; i < size; i++)
	{
		flag = 0;
		count = 1;
		temp = array[i];
		
		for(z = i - 1; z >= 0; z--)
		{
			if (temp == array[z])
			{
				flag = 1;
				continue;
			}
		}
		
		if(flag == 0)
		{
			value[i] = temp;
			for(j = i + 1; j < size; j++)
			if(value[i] == array[j])
				count += 1;
		}
		
		else
			continue;
		
		if(count == 1)
			printf("index %-9d value %-9d is not repeated in the array\n", i, value[i]);
		
		else
			printf("index %-9d value %-9d is repeated for %d times in the array\n", i, value[i], count);
	}
	
	return 0;
}

int arraySize()
{
	int size;
	
	do
	{
		printf("please enter the size of the array: ");
		scanf("%d", &size);
		
		if(size <= 0)
			printf("longitud de matriz no valida\nplease enter a positive integer\n\n");
			
		if(size > MAX_SIZE)
			printf("array size exceeds the maximum array size (%d)\nplease enter a smaller number\n\n", MAX_SIZE);
	}
	
	while (size <= 0 || size > 100);
	
	return size;
}

int arrayElements(int i)
{
	int element;
	printf("enter the number %d element: ", i);
	scanf("%d", &element);
	return element;
}
