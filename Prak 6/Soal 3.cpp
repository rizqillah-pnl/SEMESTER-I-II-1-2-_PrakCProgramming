#include<stdio.h>
main()
{
	printf("\t\t\tRIZQILLAH || 1957301020 || TI 1.A\n\n");
	int a;
	printf("Masukan Nilai_Angka = ",a); scanf("%d",&a);
	
	if(a>80 && a<=100)
		printf("\nNilai Huruf Adalah A");
	else if(a>60 && a<=80)
		printf("\nNilai Huruf Adalah B");
	else if(a>55 && a<=60)
		printf("\nNilai Huruf Adalah C");
	else if(a>40 && a<=55)
		printf("\nNilai Huruf Adalah D");
	else if(a>0 && a<=40)
		printf("\nNilai Huruf Adalah E");
}
