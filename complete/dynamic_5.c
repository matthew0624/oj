#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	int N=0,cnt1=0,cnt2=0,i=0;
	char *arr=NULL,one='0',two='0';
	
	scanf("%d",&N);
	
	getchar();
	
	arr=(char*)malloc(sizeof(char)*N);
	if(arr==NULL){
		printf("ERROR");
		return -1;
	}
	
	for(i=0;i<N;i++){
		scanf("%c",&arr[i]);
	}
	
	getchar();
	
	scanf("%c %c",&one,&two);
	
	for(i=0;i<N;i++){
		if(arr[i]==one)
			cnt1++;
		if(arr[i]==two)
			cnt2++;
	}
	
	printf("%d %d",cnt1,cnt2);
	
	free(arr);
	
	return 0;
}