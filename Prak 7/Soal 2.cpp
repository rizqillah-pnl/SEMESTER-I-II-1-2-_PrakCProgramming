#include<stdio.h>
main()
{
	printf("\t\t\tRIZQILLAH || 1957301020 || TI 1.A\n\n");
	int valid_operator=1;
	char operator1;
	float number1,number2,result;
	printf("Masukan 2 buah bilangan & sebuah operator\n");
	printf("dengan format : Number1 Operator1 Number2\n\n");
	scanf("%f %c %f",&number1,&operator1,&number2);
	switch (operator1){
		case '*':
			result = number1 * number2;
			break;
		case '/':
			result = number1 / number2;
			break;
		case '+':
			result = number1 + number2;
			break;
		case '-':
			result = number1 - number2;
			break;
		default:
			valid_operator=0;
	}
	if (valid_operator)
		printf("\n%g %c %g hasilnya %g\n",number1,operator1,number2,result);
	else
		printf("Invalid Operator!\n");
}
