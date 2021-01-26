#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
 

int main(){
	int y=0,flag=0;
	
	scanf("%d",&y);
	
	if(y%4==0)
		flag=1;
	if(y%100==0)
		flag=0;
	if(y%400==0)
		flag=1;
	
	if(flag==1)
		printf("L");
	else
		printf("C");
	return 0;
}