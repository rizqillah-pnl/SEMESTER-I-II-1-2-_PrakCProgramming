#include<stdio.h>
main()
{
	printf("\t\t\tRIZQILLAH || 1957301020 || TI 1.A\n\n");
	int a,b,c=0;
	printf("Masukan Nilai N(Faktorial) = ");
	scanf("%d",&b);
	for(a=1;a<=b;a++){
		if(a==1)
			printf(" 1");
		else
			printf("*%d",a);
	}
}
