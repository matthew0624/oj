#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
 

int main(){
	int a=0,b=0,c=0,flag=0;
	
	scanf("%d %d %d",&a,&b,&c);
	
	if(c-b==a){
		printf("+\n");
		flag=1;
	}
	if(c+b==a){
		printf("-\n");
		flag=1;
	}
	if(c/b==a){
		printf("*\n");
		flag=1;
	}
	if(c*b==a){
		printf("/\n");
		flag=1;
	}
	if(flag==0)
		printf("Incorrect\n");

	return 0;
}