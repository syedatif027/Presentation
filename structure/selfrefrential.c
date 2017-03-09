#include<stdio.h>
#include<string.h>

struct student
{
	int roll_num;
	char name[20];
	struct student *self;
};


int main()
{
	struct student v1;
	v1.roll_num=01;
	strcpy(v1.name,"sunil");
	v1.self=&v1;

	printf("using variable\nroll=%d name=%s\n",v1.roll_num,v1.name);

	printf("using self refrential pointer\nroll=%d name=%s\n",v1.self->roll_num,v1.self->name);


	return 0;

}

