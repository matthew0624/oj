#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int N=0,i=0,j=0,len=0;
	char **arr=NULL,tmp[101],*temp=NULL;
	
	scanf("%d",&N);
	getchar();
	
	arr=(char**)malloc(sizeof(char*)*N);
	if(arr==NULL){
		printf("ERROR");
		return -1;
	}
	
	for(i=0;i<N;i++){
		fgets(tmp,101,stdin);
		len=strlen(tmp);
		arr[i]=(char*)malloc(sizeof(char)*(len+1));
		if(arr[i]==NULL){
			printf("EROOR");
			return -1;
		}
		strcpy(arr[i],tmp);
	}
	
	
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(strlen(arr[i])>strlen(arr[j])){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\n");
	for(i=0;i<N;i++){
		printf("%s",arr[i]);
	}
	
	for(i=0;i<N;i++){
		free(arr[i]);
	}
	free(arr);
	
	
	return 0;
}
