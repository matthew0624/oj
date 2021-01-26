#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
 

int main(){
	int N=0,sum=0,a=0;
	
	scanf("%d",&N);
	
	while(1){
		if(N<10){
			a=N%2>0? 0:N;
			sum=sum+a;
			break;
		}
		a=N%2>0? 0:N%10;
		sum=sum+a;
		N=N/10;
	}
	
	printf("%d",sum);
	
	return 0;
}