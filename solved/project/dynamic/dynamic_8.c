#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int N=0,cnt=0,i=0;
	char *arr;
	
	scanf("%d",&N);
	getchar();
	
	arr=(char*)malloc(N*sizeof(char));
	if(arr==NULL){
		printf("ERROR");
		return -1;
	}
	
	for(i=0;i<N;i++){
		scanf("%c",&arr[i]);
	}
	
	for(i=0;i<N-2;i++){
		if((arr[i]=='c')&&(arr[i+1]=='a')&&(arr[i+2]=='t'))
			cnt++;
	}
	printf("%d",cnt);
	
	
	
	return 0;
}