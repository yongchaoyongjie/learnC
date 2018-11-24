# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include<stdlib.h>

int main()
{ 
	int a;
	int b;
	int c;
	for (a == 100; a < 201; a++)
	{

		for (b == 2; b <201; b++)
		{
			c = a%b;
			if (c != 0)
			{
				printf("%d\n", a);
				
			}
			else
			{
				printf("这不是素数，a");
			}
			
		}
	}


	system("pause");
	

	return 0;
}