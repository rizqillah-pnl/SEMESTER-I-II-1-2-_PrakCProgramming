#include<stdio.h>
main()
{
	printf("\t\t\tRIZQILLAH || 1957301020 || TI 1.A\n\n");
	int a=0,hasil=0,n=0,max=0,min=999999,rata;
	char jawab='y';
	while (jawab=='y'||jawab=='Y'){
		n=n+1;
		printf("\nMasukan Bilangan ke-%d = ",n);
		scanf("%d",&a);
		printf("Mau memasukkan data lagi [y/t]?");
		getchar();
		jawab=getchar();
		if(a>max)
			max=a;
		if(a<min)
			min=a;
		hasil+=a;
		rata=hasil/n;
	}
	printf("\nHasil Total Bilangan       = %d\n",hasil);
	printf("Hasil Minimum		   = %d\n",min);
	printf("Hasil Maksimum		   = %d\n",max);
	printf("Hasil Rata-Rata		   = %d\n",rata);
}
