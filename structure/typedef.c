#include<stdio.h>

typedef struct b1 {
	 char bname[30];
	 int ssn;
	 int pages;
}book, *sPtr;

book b1 = {"Let Us C",1000,90};

int main() 
{
	 printf("\nName of Book : %s",b1.bname);
     printf("\nSSN of Book : %d",b1.ssn);
	 printf("\nPages in Book : %d",b1.pages);

	sPtr ptr1 = &b1, ptr2 = &b1;
	printf("\nName of book ptr=%s %s\n", ptr1->bname, ptr2->bname);
	 return(0);
}
