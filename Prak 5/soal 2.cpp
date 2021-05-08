#include<stdio.h>
main()
{
	printf("\t\t\tRIZQILLAH || 1957301020 || TI 1.A\n\n");
	int a;
	printf("Harga Belanja : ",&a);
	scanf("%d",&a);
	if (a<100000)
		printf("\nHarga Belanja : Rp. %d\n",a);
	if(a>=100000)
		printf("\nPotongan Harga : Rp. %d\n\tTotal Pembelian : Rp. %d",a*5/100,a-a*5/100);
}
