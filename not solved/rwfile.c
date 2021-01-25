#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
 
int main() {     
	int n=1,sum=0,cnt=0,a=0;
	FILE *f;
	
	
	f=fopen("data.txt","w");
	if(f==NULL){
		printf("file not open\n");
		return -1;
	}
	
	
	while (1){
		scanf("%d",&n);
		if(n=="ctr+z"){
			printf("eof반환");
			break;
		}
		fprintf(f,"why not\n");
		fprintf(f,"%d\n",n);
		printf("enter in file\n");
	}
	
	/*
	f=fopen("data.txt","r");
	if(f==NULL){
		printf("no file");
		return -1;
	}
	while(1){
		if(f==NULL)
			break;
		fscanf(f,"%d\n",&n);
		sum=sum+n;
		cnt++;
	}
	fclose(f);
	printf("%d\n%d\n%.2lf",cnt,sum,(double)sum/cnt);
	*/
 
     return 0;
}