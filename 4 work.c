#include "stdafx.h"
#include <stdio.h>
int n,i,res;
int main()
{
	for(int n=1; n<=10; n++) {
		res=1;
		for(int i=1;i <= n; i++) {
			res= res*i;
		}
	printf("%d\n", res);
	}
return 0;
}