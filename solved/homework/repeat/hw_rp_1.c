#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
 

int main(){
	int N=0,i=0,j=0,cnt=0,result=0;
	
	scanf("%d",&N);
	
	for(i=1;i<N;i++){
		for(j=1;j<=i;j++){
			if(i%j==0)
				cnt++;
		}
		if(cnt==2)
			result++;
		cnt=0;
	}
	printf("%d",result);
	

	return 0;
}