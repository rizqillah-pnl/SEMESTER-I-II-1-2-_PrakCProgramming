#include<stdio.h>
main()
{
	float a=12,b=2,c=3,d=4;
	printf("Sisa bagi A dan B : %f\n",a%b);
	printf("Pengurangan A dan C : %f\n",a-c);
	printf("Pertambahan A dan B : %f\n",a+b);
	printf("Pembagian A dan D : %f\n",a/d);
	printf("Hasil 1 : %f\n",a/d*d+a%d);
	printf("Hasil 2 : %f\n",a%d/d*a-c);

}
