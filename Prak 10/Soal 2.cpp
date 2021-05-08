#include<stdio.h>
main()
{
	printf("\t\t\tRIZQILLAH || 1957301020 || TI 1.A\n\n");
	int a,n;
	printf("Masukan Jumlah Bilangan Ganjil : ");
	scanf("%d",&n);
	
	printf("\nHasil Pengulangan : ");
	for(a=1;a<n;a+=2)
	{
		if(a%3==0)
			continue;
		printf("%d ",a);
	}
	printf("\n");
}
