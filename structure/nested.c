#include<stdio.h>
#include<string.h>

//defining inside
struct student
{
	int roll_num;
	char name[20];
	struct date
	{
		short int day,month,year;
	}dob;
};


//defining outside
struct date1
{
	short int day,month,year;
};

struct student1
{
	int roll_num;
	char name[20];
	struct date1 dob;
};


int main()
{
	struct student v;
	struct student v1;
	v.roll_num=01,v1.roll_num=02;
	strcpy(v.name,"user");
	strcpy(v1.name,"user1");
	v.dob.day=15,v1.dob.day=25;
	v.dob.month=02, v1.dob.month=05;
	v.dob.year=1993 ,v1.dob.year=1995;

	printf("METHOD1\nroll=%d name=%s dob=%hd/%hd/%hd\n",v.roll_num,v.name,v.dob.day,v.dob.month,v.dob.year);

	printf("METHOD2\nroll=%d name=%s dob=%hd/%hd/%hd\n",v1.roll_num,v1.name,v1.dob.day,v1.dob.month,v1.dob.year);

	return 0;

}
