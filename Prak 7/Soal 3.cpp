#include<stdio.h>
main()
{
	printf("\t\t\tRIZQILLAH || 1957301020 || TI 1.A\n\n");
	int menu;
	float sisi,jari1,jari2,tinggi;
	printf("Menu :	1. Menghitung Volume Kubus\n");
	printf("     	2. Menghitung Luas Lingkaran\n");
	printf("     	3. Menghitung Volume Silinder\n");
	printf("\nMasukkan Pilihan Anda : "); scanf("%d",&menu);

	switch(menu){
		case 1:
			printf("\nMasukkan sisi kubus = "); scanf("%f",&sisi);
			printf("Volume kubus = %g",sisi*sisi*sisi);
			break;
		case 2:
			printf("\nMasukkan panjang jari-jari lingkaran = "); scanf("%f",&jari1);
			printf("Luas lingkaran = %g",3.14*jari1*jari1);
			break;
		case 3:
			printf("\nMasukkan panjang jari-jari lingkaran = "); scanf("%f",&jari2);
			printf("Masukkan tinggi silinder = "); scanf("%f",&tinggi);
			printf("\n\n\tvolume silinder = %g",3.14*jari2*jari2*tinggi);
			break;
		default:
			printf("==> Invalid Menu <==");
			break;
	}
}
