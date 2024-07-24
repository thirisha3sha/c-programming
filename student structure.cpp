//student structure function pointers structure
#include<stdio.h>

void displaystudent(struct student *);
void studentdetails(struct student *);
struct student{
	char name[1000];
	int id;
	float percentage;
};
int main(void){
	int n,i;
	struct student stu[3];
	studentdetails(stu);
	displaystudent(stu);
	return 0;
}
void studentdetails(struct student *ptr){
	int i;
	for(i=0;i<3;i++){
	printf("enter the student1 detsils:#%d\n",(i+1));


	printf("enter the student name:");
	scanf("%s",ptr->name);
	printf("enter the id of student:");
	scanf("%d",&ptr->id);
	printf("enter the percentage:");
	scanf("%.2f",&ptr->percentage);

	ptr++;
	
   }


}

void displaystudent(struct student *ptr,int n){
	int i;
	for(i=0;i<3;i++){
		printf("displaying student detail:#%d\n",(i+1));
	
		printf("\n name:%s",ptr->name);
		printf("\n id:%d",ptr->id);
		printf("\n percentage:%.2f",ptr->percentage);
		ptr++;
		}
}
