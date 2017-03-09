#include <stdio.h>

struct student {
int id;
char name[32];
};

//call by value

void func1(int n, struct student s[]) {
	int i;

	for(i=0; i<n; i++) {
		printf("id = %d name = %s\n", s[i].id, s[i].name);
	}
}

//call by reference

void func2(int n, struct student *sp) {
	int i;

	for(i=0; i<n; i++) {
		printf("id = %d name = %s\n", sp[i].id,sp[i].name);
	}

}


int main() {
	struct student s[] = {{101,"John"},
			       {102,"Doe"},
			       {103,"Peter"}};
		
	func1(3, s);
	func2(3, s);

	return 0;
	
}

