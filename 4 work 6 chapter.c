#include <stdio.h>
int main(void)
{
	float value1,value2;
	char operator;
	printf("Vvedite svoi znacheniya i operator.\n" );
	scanf("%f %c %f ",&value1 &operator &value2);
	switch(operator)
	{
		case '+':
		printf("%.2f\n",value1 + value2 );
		break;
		case '-':
		printf("%.2f\n",value1 - value2 );
		break;
		case '*':
		printf("%.2f\n",value1 * value2 );
		break;
		case '/':
		if (value2 == 0)
			printf("Na zero delit nelzya.\n");
		else
			printf("%.2f\n",value1 / value2);
		break;
		default:
		printf("Nepravilniy operator.\n");
		break;
	}
	return 0;
	
}