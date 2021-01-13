#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct order{
	int num;
	int rank;
}order;

int main(){
	order N[10];
	int i=0,j=0;

	for(i=0;i<10;i++){
		scanf("%d",&N[i].num);
		N[i].rank=0;
	}
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(N[i].num<N[j].num)
				N[i].rank++;
		}
	}
	
		for(i=0;i<10;i++){
		printf("%d ",N[i].rank);
	}
	
	
	
	for(i=0;i<10;i++){
		if((N[i].rank==2)||(N[i].rank==6))
			printf("%d ",N[i].num);
	}
	
	
	return 0;
}


