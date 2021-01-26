#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
 

int main(){
	int c=0;
	double f=0.0;

	scanf("%d",&c);
	f=c*(9.0/5.0)+32;
	printf("%.2lf",f);
	
	return 0;
}