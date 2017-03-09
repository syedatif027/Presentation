#include <stdio.h>
#include<stdlib.h>


struct student{
	int id;
	char name[32];
};

int main() {
	struct student **sp;
	sp=malloc(sizeof(struct student *)*3);
	int i;

	for(i=0; i<3; i++)
		sp[i]=malloc(sizeof(struct student));

	for(i=0; i<3; i++){
	printf("Enter the id\n");
	scanf("%d",&sp[i]->id);
	printf("Enter the name\n");
	scanf("%s", sp[i]->name);
	}

	for(i=0; i<3; i++)
		printf("id=%d name=%s\n",sp[i]->id,sp[i]->name);

	for(i=0; i<3; i++)
		free(sp[i]);

	free(sp);

	return 0;

}
