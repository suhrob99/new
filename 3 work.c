#include "stdafx.h"
#include <stdio.h>
int triangularNumber;
int main()
{
	for (int i = 5; i <=50 ; i=i+5) {
		triangularNumber=(i*(i+1))/2;
		printf("%i\n",triangularNumber );
	
	}
	return 0;
}