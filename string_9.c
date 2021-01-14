#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct result{
	int high;
	int low;
	char pass;
	int gap;
}result;

void passorfail(result *stu);

int main(){
	result stu;
	
	scanf("%d %d %d",&stu.high,&stu.low,&stu.gap);
	passorfail(&stu);
	printf("%d %c\n",stu.high-stu.low,stu.pass);
	
	return 0;
}

void passorfail(result *stu){
	if(stu->high-stu->low>stu->gap){
		stu->pass='F';
	}
	else
		stu->pass='P';
}

