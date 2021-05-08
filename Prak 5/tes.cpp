#include <stdio.h>
int main()
{

	int a;

	printf("masukan angka : ");

	scanf("%i", &a);

	if(a > 7)

	{

 		if(a % 2 == 0 || a % 3 == 0 || a % 5 == 0 || a % 7 == 0 )

 		{

  			printf("%i bukan bilangan prima", a);

 		}

 		else printf("%i adalah bilangan prima", a);

	}

	else if(a == 2 || a == 3 || a == 5 || a == 7)

	{

 		printf("%i adalah bilangan prima", a);

	}

	else printf("%i bukan bilangan prima", a);
}
