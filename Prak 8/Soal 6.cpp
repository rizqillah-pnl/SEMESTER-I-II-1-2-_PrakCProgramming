#include<stdio.h>
main()
{
	printf("\t\t\tRIZQILLAH || 1957301020 || TI 1.A\n\n");
	int a,b;
	printf("Masukan Nilai n : ");
	scanf("%d",&a);
	for(b=1;b<=a;b++){
		if(b%2==0)
			printf(" -%d",b);
		else
			printf(" %d",b);
	}
}
