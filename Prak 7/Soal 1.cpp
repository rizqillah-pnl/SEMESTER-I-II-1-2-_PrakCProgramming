#include<stdio.h>
main()
{
	printf("\t\t\tRIZQILLAH || 1957301020 || TI 1.A\n\n");
	char letter;
	printf("Ketik Huruf : "); scanf("%c",&letter);
	switch (letter){
		case 'X':
			printf("\nSum = 0");
			break;
		case 'Z':
			printf("\nValid_Flag = 1");
			break;
		case 'A':
			printf("\nSum = 1");
			break;
		default:
			printf("\nUnknown Letter --> %c\n",letter);
	}
}
