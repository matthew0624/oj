#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
 

int main(){
	
	char calc='0';
	int a=0,b=0;
	double result=0.0;
	
	scanf("%c %d %d",&calc,&a,&b);
	
	if(calc=='*'){
		result=a*b;
		printf("%d",(int)result);
	}
	else if(calc=='/'){
		result=(double)a/b;
		printf("%.1lf",result);
	}
	else if(calc=='+'){
		result=a+b;
		printf("%.d",(int)result);
	}
	else if(calc=='-'){
		result=a-b;
		printf("%d",(int)result);
	}
	else
		printf("none");
	

	return 0;
}