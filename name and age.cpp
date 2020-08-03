#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello World!\n");
    printf("its me \n");
    char name[30];
	printf(" \tEnter your name: \a");
	scanf("%s",name);
	printf(" %s Loves to code!\n",name);
	printf(" %s also understands what i mean when i say that their data type is human. Well, hopefully.\n", name);
	int age;
	printf(" \tEnter your age: ");
	scanf("%d",&age);
	printf("You are %s and  You are %d years old!!",name, age);
	return 0;
}

