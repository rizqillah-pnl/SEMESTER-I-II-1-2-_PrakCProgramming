#include<stdio.h>
main()
{
	int var_bulat;
	float var_pecahan1;
	double var_pecahan2;
	char var_karakter;
	var_bulat=32767;
	var_pecahan1=339.2345678f;
	var_pecahan2=3.45678e+40;
	var_karakter='A';
	printf("var_bulat : %d\n",var_bulat);
	printf("var_pecahan1 : %f\n",var_pecahan1);
	printf("var_pecahan2 : %e\n",var_pecahan2);
	printf("var_karakter : %c\n",var_karakter);
}
