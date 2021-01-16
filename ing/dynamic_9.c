#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int N=0,i=0,len=0,min=101;
	char **arr=NULL,tmp[101],*res=NULL;
	
	
	scanf("%d",&N);
	getchar();
	
	arr=(char**)malloc(sizeof(char*)*N);
	if(arr==NULL){
		printf("EROOR");
		return -1;
	}

	for(i=0;i<N;i++){
		fgets(tmp,101,stdin);
		
		len=strlen(tmp);
		
		arr[i]=(char*)malloc((len+1)*sizeof(char));
		if(arr[i]==NULL){
			printf("ERROR");
			return -1;
		}
		
		len=strlen(arr[i]);
		printf("strlen: %d\n",len);
		if(len<min){
			min=len;
			res=arr[i];
		}
	}
	printf("min: %d %s",min,res);
	
	for(i=0;i<N;i++){
		free(arr[i]);
	}
	free(arr);
	
	

	return 0;
}