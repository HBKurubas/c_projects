#include <stdio.h>

void sandglass(int n)
{
	int i, j, s;
	
	for(i = 1; i < n; i++)
	{
		for (j = i; j <= n; j++)
            printf("%d ", j);
        
        if(i != n-1)
        {
	        printf("\n");
	        
	        for(s = 0; s < i; s++)
	        	printf(" ");
    	}
	}
	
	printf("\n");
	
	for(i = n; i > 0; i--)
	{
		for(s = n - 1; s > n - i; s--)
	        printf(" ");
	    
		for (j = i; j <= n; j++)
			printf("%d ", j);
		
		printf("\n");	    
	}
}

int main()
{
	int n;
	printf("enter a positive number between 2 and 10: ");
	scanf("%d", &n);
	printf("\n");
	sandglass(n);
	
	return 0;
}
