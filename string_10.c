#include <stdio.h>

#include <string.h>

#include <stdlib.h>

 

typedef struct info{

	char name[10];

	int score[3];

	double avg;

}info;

 

void read_data(info stu[]);

void cal_avg(info stu[]);

void sort(info stu[]);

void print_score(info stu[]);

 

int main(){

	info stu[10];

	read_data();

}

 

void read_data(info stu[]){

	int i=0;

	for(i=0;i<10;i++){

		scanf("%s %d %d %d",stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2])

	}

}

 

void cal_avg(info stu[]){

	int i=0,j=0,sum=0;

	for(i=0;i<10;i++){

		for(j=0;j<3;j++){

			sum=sum+stu[i].score[j];

		}

		stu[i].avg=sum/3;

		sum=0;

	}

}

 