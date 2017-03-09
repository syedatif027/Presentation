#include <stdio.h>


struct student {
	int id;
	char name[32];
};

int main() {
	struct student *sp, s[3] = {{101, "John"},
				    {102, "Doe"},
				    {103, "Peter"}};
	int i;
	sp = s;

	printf("%p %p\n",s,sp);

	for(i=0; i<3; i++) {
		printf("sp[%d].id = %d\n", i, s[i].id);
		printf("sp[%d].name = %s\n", i, s[i].name);
	}
	for(i=0; i<3; i++,++sp){
		printf("id= %d name = %s\n",sp->id, sp->name);
	}
	return 0;
}s
