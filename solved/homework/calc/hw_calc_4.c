#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
 

int main(){
	int N=0,tmp=0,M=0;
	
	scanf("%d",&N);
	tmp=N;
	
	while(1){
		if(N<10){
			M=M*10+N;
			break;
		}
		M=M*10+N%10;
		N=N/10;
	}
	

	if(tmp>M)
		printf("%d",tmp-M);
	else
		printf("%d",M-tmp);
	
	return 0;
}