#include<stdio.h>
#include<math.h>
main()
{
	printf("\t\t\tRIZQILLAH || 1957301020 || TI 1.A\n\n");
	float a,b,hasil,pilihan;
	printf("Nilai Bilangan Pertama : ",&a); scanf("%f",&a);
	printf("Nilai Bilangan Kedua : ",&b); scanf("%f",&b);
	
	printf("\nKalkulator Sederhana : \n");
	printf("\t1. Penjumlahan\n");
	printf("\t2. Pengurangan\n");
	printf("\t3. Pembagian\n");
	printf("\t4. Perkalian\n");
	
	printf("Masukan Pilihan Anda : ",pilihan);
	scanf("%f",&pilihan);
	
	if (pilihan == 1){
		hasil=a+b;
		printf("\nHasil Pertambahan : %g",hasil);
	}
	else if (pilihan==2){
		hasil=a-b;
		printf("\nHasil Pengurangan : %g",hasil);
	}
	else if (pilihan==3){
		hasil=a/b;
		printf("\nHasil Pembagian : %g",hasil);
	}
	else if (pilihan==4){
		hasil=a*b;
		printf("\nHasil Perkalian : %g",hasil);
	}
	else if (pilihan>4)
	printf("\n\t-->> Invalid Menu <<--");
}
