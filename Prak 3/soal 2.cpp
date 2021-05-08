#include<stdio.h>
main()
{
	int a=12,b=2,c=3,d=4;
	printf("Sisa bagi A dan B : %d\n",a%b);
	printf("Pengurangan A dan C : %d\n",a-c);
	printf("Pertambahan A dan B : %d\n",a+b);
	printf("Pembagian A dan D : %d\n",a/d);
	printf("Hasil 1 : %d\n",a/d*d+a%d);
	printf("Hasil 2 : %d\n",a%d/d*a-c);
}
