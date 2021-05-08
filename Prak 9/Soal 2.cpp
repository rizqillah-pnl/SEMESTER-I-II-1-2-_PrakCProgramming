#include<stdio.h>
main()
{
	printf("\t\t\tRIZQILLAH || 1957301020 || TI 1.A\n\n");
	int a=0,hasil=0,n=0;
	char jawab='y';
	while (jawab=='y'||jawab=='Y'){
		n=n+1;
		printf("\nMasukan Bilangan ke-%d = ",n);
		scanf("%d",&a);
		printf("Mau memasukkan data lagi [y/t]?");
		getchar();
		jawab=getchar();
		hasil+=a;
	}
	printf("\nHasil Total Bilangan = %d\n",hasil);
}
