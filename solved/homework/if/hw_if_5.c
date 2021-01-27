#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#include <math.h>
 

int main(){
	double a=0.0,b=0.0,c=0.0,result=0.0,result2=0.0;
	double tmp=0.0;
	
	scanf("%lf %lf %lf",&a,&b,&c);
	tmp=b*b-4*a*c;
	
	if(a==0)
		result=(0-c)/b;
	else{
		result=((0-b)+sqrt(tmp))/(2*a);
		result2=((0-b)-sqrt(tmp))/(2*a);
	}
	
	//해출력부분
	
	if(tmp>0&&a!=0){
		if(result>result2)
			printf("%lf %lf",result2,result);
		else
			printf("%lf %lf",result,result2);
	}
	else if(tmp<0&&a!=0)
		printf("none");
	else
		printf("%lf",result);

	return 0;
}