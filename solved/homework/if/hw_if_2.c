#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
 

int main(){
	int a[3]={0},i=0,sum=0;

	for(i=0;i<3;i++){
		scanf("%d",&a[i]);
		switch(a[i]){
			case 1:
				printf("Pizza\n");
				sum=sum+15000;
				break;
			case 2:
				printf("Burger\n");
				sum=sum+5000;
				break;
			case 3:
				printf("Salad\n");
				sum=sum+4500;
				break;
			case 4:
				printf("Ice cream\n");
				sum=sum+800;
				break;
			case 5:
				printf("Beverage\n");
				sum=sum+500;
				break;
			default:
				printf("None\n");
				sum=sum+0;
				break;
		}
	}
	printf("Total:%dwon",sum);
	
	return 0;
}