#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	int N=0,i=0;
	double *arr=NULL,max=0.0;
	
	scanf("%d",&N);
	
	arr=(double*)malloc(sizeof(double)*N);
	if(arr==NULL){
		printf("ERROR");
		return -1;
	}
	for(i=0;i<N;i++){
		scanf("%lf",&arr[i]);
		if(arr[i]>max)
			max=arr[i];
	}
	printf("%.2lf",max);
	
	free(arr);
	
	return 0;
}