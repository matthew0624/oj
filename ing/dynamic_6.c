#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct student{
	char name[8];
	int kor;
	int eng;
	int math;
	double avg;
}student;

int main(){
	
	int N=0,i=0;
	student *stu=NULL;
	
	scanf("%d",&N);
	
	getchar();
	
	stu=(student*)malloc(sizeof(student)*N);
	if(stu==NULL){
		printf("ERROR");
		return -1;
	}
	
	for(i=0;i<N;i++){
		scanf("%s %d %d %d",stu[i].name,&stu[i].kor,&stu[i].eng,&stu[i].math);
		stu[i].avg=(stu[i].kor+stu[i].eng+stu[i].math)/3;
	}
	

	for(i=0;i<N;i++){
		printf("%s %.1lf",stu[i].name,stu[i].avg);
		if((stu[i].kor>=90)||(stu[i].eng>=90)||(stu[i].math>=90)){
			printf(" GREAT");
		}
		if((stu[i].kor<70)||(stu[i].eng<70)||(stu[i].math<70)){
			printf(" BAD");
		}
		printf("\n");
	}
	
	free(stu);
	
	return 0;
}