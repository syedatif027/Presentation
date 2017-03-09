#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student
{
	int roll_num;
	char name[20];
}ST,*PT;            //ST is another name for struct student
					//PT is another name for struct student *

int main()
{
	ST v1;
	PT p1,p2=malloc(sizeof(ST));
	p1=&v1;
	p1->roll_num=01;
	strcpy(p1->name,"user1");
	p2->roll_num=02;
	strcpy(p2->name,"user2");
	printf("using structure pointer\nroll=%d name=%s\n",p1->roll_num,p1->name);
	printf("using pointer and creating dynamically\nroll=%d name=%s\n",p2->roll_num,p2->name);

	return 0;
}


