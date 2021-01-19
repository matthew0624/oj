#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
	
	int N=0,i=0,tmp=0;
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
	
	for(i=0;i<N-1;i++){
		if(arr[i]>arr[i+1]){
			tmp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=tmp;
			i--;
		}
	}
	for(i=0;i<N;i++){
		printf("%d\n",arr[i]);
	}
	
	free(arr);
	
	return 0;
}