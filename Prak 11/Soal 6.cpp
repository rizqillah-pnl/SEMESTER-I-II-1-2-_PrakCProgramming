#include<stdio.h>
main()
{
	printf("\t\t\tRIZQILLAH || 1957301020 || TI 1A\n\n");
	int bil,faktorial=1,a;
	printf("Masukkan bilangan faktorial : ");
	scanf("%d",&bil);
	for(a=1;a<=bil;a++){
		faktorial*=a;
	}
	printf("Hasil Faktorial = %d",faktorial);
}
