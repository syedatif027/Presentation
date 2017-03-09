#include<stdio.h>

struct student
{
	int a;
	char b;
	float c;
}t1={10,'a',4.33};  //initializing at the time of definition


struct student t2={20,'b',2.33}; //initializing at the time of declaring

int main()
{
	struct student t3={30}; // partial initialization

	//if you want to initialize a particular element in the structure following will help

	struct student t4={ .b='e'};

	printf("initialization time of definition\n");
	printf("a=%d b=%c c=%f\n",t1.a,t1.b,t1.c);

	printf("initialization time of declaring\n");
	printf("a=%d b=%c c=%f\n",t2.a,t2.b,t2.c);

	printf("partial initialization\n");
	printf("a=%d b=%c c=%f\n",t3.a,t3.b,t3.c);

	printf("initializing a particular element\n");
	printf("a=%d b=%c c=%f\n",t4.a,t4.b,t4.c);

	return 0;
}
	
	
