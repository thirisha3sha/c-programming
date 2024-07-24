//structure to compare date
#include<stdio.h>
struct day{
	int date,month,year;
};
int main(){
	struct day d1,d2;
	int compare;
	printf("enter the first date(dd/mm/yyyy):");
	scanf("%d %d %d",&d1.date,&d1.month,&d1.year);
	printf("enter the second date(dd/mm/yyyy):");
	scanf("%d %d %d",&d2.date,&d2.month,&d2.year);
	printf("\ndate1:%d/%d/%d",d1.date,d1.month,d1.year);
	printf("\ndate2:%d/%d/%d",d2.date,d2.month,d2.year);
	if(d1.date==d2.date && d1.month==d2.month && d1.year==d2.year){
		printf("\nboth dates are equal");
		
	}
	else if(d1.year>d2.year || d1.year==d2.year &&d1.month>d2.month || d1.year==d2.year && d1.month==d2.month && d1.date>d2.date){
		printf("\ndate 2 is earlier than date 1");
		
	}
	else {
		printf("\ndate 1 is earlier than date 2");
		
	}
	return 0;
}

