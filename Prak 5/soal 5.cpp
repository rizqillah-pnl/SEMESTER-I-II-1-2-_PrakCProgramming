#include<stdio.h>
main()
{
	printf("\t\t\tRIZQILLAH || 1957301020 || TI 1.A\n\n");
	float bil1,bil2;
	printf("Nilai bil1 : ",&bil1);
	scanf("%f",&bil1);
	printf("Nilai bil2 : ",&bil2);
	scanf("%f",&bil2);
	if (bil2 == 0)
		printf("\nDivision by Zero");
	else
		printf("\nHasilnya : %.3f",bil1/bil2);
}
