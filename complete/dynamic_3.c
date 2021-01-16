#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	int N=0,M=0,i=0;
	int *arr=NULL;
	
	scanf("%d",&N);
	
	arr=(int*)malloc(sizeof(int)*N);
	if(arr==NULL){
		printf("ERROR");
		return -1;
	}
	for(i=0;i<N;i++){
		scanf("%d",&arr[i]);
		
	}
	scanf("%d",&M);
	arr=realloc(arr,(N-M)*sizeof(int));
	if(arr==NULL){
		printf("ERROR");
		return -1;
	}
	for(i=0;i<N-M;i++){
		printf("%d\n",arr[i]);
	}
	
	free(arr);
	
	return 0;
}