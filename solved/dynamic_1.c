#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	int N=0,i=0,sum=0;
	int *arr=NULL;
	
	scanf("%d",&N);
	arr=(int*)malloc(sizeof(int)*N);
	if(arr==NULL){
		printf("ERROR");
		return -1;
	}
	for(i=0;i<N;i++){
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("%d",sum);
	
	
	return 0;
}