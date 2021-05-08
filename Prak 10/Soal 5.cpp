#include<stdio.h>
main()
{
	printf("\t\t\tRIZQILLAH || 1957301020 || TI 1.A\n\n\n");
	int a,b,n=0;
	printf("Masukkan nilai : "); scanf("%d",&a);
	while(a!=0){
		b=a%10;
		a=a/10;
		n=n+b;
	}
	printf("\nHasilnya = %d",n);
}
