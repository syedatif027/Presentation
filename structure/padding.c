#include<stdio.h>
//#pragma pack(1) //using pragma directive

//structure holes
struct student
{
	char a;
	int  n;
	short int c;
	char b;
	short int d;
};

//#pragma pack(1)

//structure padding realligning the variables

struct student1
{
	char a;
	char b;
	short int c;
	short int d;
	int n;
}v1;



int main()
{

	printf("%p %p %p %p %p\n",&v1.a,&v1.b,&v1.c,&v1.d,&v1.n);
	printf("size without padding=%d\n",sizeof(struct student));

	printf("size with padding=%d\n",sizeof(struct student1));

//	printf("using pragma pack directive size1=%d size2=%d\n",sizeof(struct student),sizeof(struct student1));

	return 0;
}

