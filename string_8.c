#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct complex{
	double a;
	double b;
}complex;

complex add(complex one,complex two);

int main(){
	complex one,two,res;
	
	
	scanf("%lf %lf",&one.a,&one.b);
	scanf("%lf %lf",&two.a,&two.b);
	res=add(one,two);
	
	printf("%.1lf %.1lfi",res.a,res.b);
	return 0;
}

complex add(complex one,complex two){
	complex res;
	
	res.a=one.a+two.a;
	res.b=one.b+two.b;
	return res;
}