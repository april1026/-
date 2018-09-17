#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
void newnode(struct node*, struct node*);
struct node {
	char name[10];
	int age;
	struct node *next;
};
int main(int argc, char *argv[]) {
	char namelist[10] = {"David\0"};
	struct node *head, *ptr, *newptr;
	int i;
	
	newnode(ptr, newptr);
	head = ptr;
	
	newptr = (struct node*) malloc (sizeof(struct node));
	ptr -> next = newptr;
	strcpy(newptr -> name, "Tom");
	newptr -> age = 24;
	newptr -> next = NULL;
	ptr = newptr;
	
	newptr = (struct node*) malloc (sizeof(struct node));
	ptr -> next = newptr;
	strcpy(newptr -> name, "Fred");
	newptr -> age = 30;
	newptr -> next = NULL;
	ptr = newptr;
	
	ptr = head;
	while(ptr != NULL)	{
		printf("\nnode %d --> 姓名 : %s", i++, ptr -> name);
		printf("\t  年齡 : %d\n", ptr -> age);
		ptr = ptr -> next;
	}
} 

void newnode(struct node*, struct node*) {
	newptr = (struct node*) malloc (sizeof(struct node));
	strcpy(newptr -> name, "David");
	newptr -> age = 20;
	newptr -> next = NULL;
	ptr = newptr;
}
