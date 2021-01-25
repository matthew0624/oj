#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
 

int main(){
	char a='0';
	
	scanf("%c",&a);
	
	if((a>='a')&&(a<='z')){
		printf("%c",a-'a'+'A');
	}
	else{
		printf("%c",a);
	}
	
	return 0;
}