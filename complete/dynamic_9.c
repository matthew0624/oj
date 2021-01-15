#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int N=0,len=0,min=100,i=0,j=0;
	char *arr,*tmp;
	
	scanf("%d",&N);
	getchar();
	
	arr=(char*)malloc(sizeof(char)*N);   //이게 왜 돌아가는지 모르겠네..
	if(arr==NULL){
		printf("ERROR");
		return -1;
	}
	
	tmp=(char*)malloc(sizeof(char)*N);
	if(tmp==NULL){
		printf("ERROR");
		return -1;
	}
	
	for(i=0;i<N;i++){
		fgets(arr,101,stdin);
		while(1){
			if(arr[j]!='\0'){
				j++;
			}
			else{
				printf("%d\n",j);
				break;
			}
		}
		if(j<min){
			min=j;
			strcpy(tmp,arr);
		}	
		j=0;
	}
	
	printf("%s",tmp);
	
	free(arr);
	free(tmp);
	
	return 0;
}