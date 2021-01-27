#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
 

int main(){
	
	int M=0,N=0,i=0,j=0,cnt=0,sum=0;
	int s=0,e=0;
	
	scanf("%d %d",&M,&N);
	
	if(N>M){
		s=M;
		e=N;
	}
	else{
		s=N;
		e=M;
	}
	
	for(i=s;i<=e;i++){
		for(j=1;j<=i;j++){
			if(i%j==0)
				cnt++;
		}
		if(cnt%2==0)
			sum++;
		cnt=0;
	}
	
	printf("%d",sum);


	return 0;
}