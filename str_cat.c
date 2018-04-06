#include "stdafx.h"
#include <string.h>
#include <stdio.h>
void mystrcat(char*to,char*from)
{
	while (*to)to++;
	while (*from)
	{
		*to = *from;
		to++;
		from++;
		*to = '\0';	
	}
}
int main()
{
	char str1[40], str2[20];
	printf("Vvedite slova,simvoli,chisla\n");
	gets_s(str2);
	gets_s(str1);
	mystrcat(str2,str1);
	printf("%s\n", str2);

	return 0;
}