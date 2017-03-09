#include<stdio.h>

struct st
{
	int a;
	char b;
};

int main()
{
	struct st *ptr=0,v[2];

	printf("with sizeof operator\nsize=%d\n",sizeof(struct st));

	printf("without sizeof operator(using pointer)\nsize=%d\n",(int)++ptr);

	printf("using array of structure\nsize=%d\n",(int)&v[1]-(int)&v[0]);

	return 0;

}
