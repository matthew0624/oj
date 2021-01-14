#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct date{
	int year;
	int month;
	int day;
}date;


date select_min(date one,date two);


int main(){
	date one,two,res;
	
	scanf("%d/%d/%d",&one.year,&one.month,&one.day);
	scanf("%d/%d/%d",&two.year,&two.month,&two.day);
	
	res=select_min(one,two);
	
	printf("%d/%d/%d",res.year,res.month,res.day);
	
	return 0;
}

date select_min(date one,date two){
	date res;
	if(one.year<two.year){
		res=one;
	}
	else if(one.year>two.year)
		res=two;
	else{
		if(one.month<two.month){
			res=one;
		}
		else if(one.month>two.month)
			res=two;
		else{
			if(one.day<two.day){
				res=one;
			}
			else if(one.day>two.day)
				res=two;
			else
				res=one;
		}
	}
	return res;
}