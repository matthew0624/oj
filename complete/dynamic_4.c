#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	int N=0,M=0,i=0,j=0,cnt=0;
	char **arr=NULL,std='a';
	
	scanf("%d %d",&N,&M);
	
	arr=(char**)malloc(sizeof(char*)*M);
	if(arr==NULL){
		printf("ERROR");
		return -1;
	}
	
	for(i=0;i<M;i++){
		arr[i]=(char*)malloc(sizeof(char)*N);
		if(arr[i]==NULL){
			printf("ERROR");
			return -1;
		}
		for(j=0;j<N;j++){
			arr[i][j]=std+cnt;
			if(arr[i][j]=='z'){
				std='A';
				cnt=-1;
			}
			else if(arr[i][j]=='Z'){
				std='a';
				cnt=-1;
			}
			cnt++;
		}
	}

	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			printf(" %c",arr[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<M;i++){
		free(arr[i]);
	}
	free(arr);
	
	return 0;
}