#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int N=0,i=0;
	int *arr,*arr2;
	
	scanf("%d",&N);
	arr=(int*)malloc(sizeof(int)*N);
	if(arr==NULL){
		printf("EROOR");
		return -1;
	}
	
	for(i=0;i<N;i++){
		arr[i]=i;
	}
	
	arr2=(int*)malloc(sizeof(int)*(N-1));
	if(arr2==NULL){
		printf("ERROR");
		return -1;
	}
	
	for(i=N/2;i<N-1;i++){
		arr[i]=arr[i+1];
	}
	for(i=0;i<N-1;i++){
		arr2[i]=arr[i];
		printf(" %d",arr2[i]);
	}
	
	free(arr);
	free(arr2);
	
	return 0;
}