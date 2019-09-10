#include<stdio.h>
#include<stdlib.h>
struct node {
	int x;
	char y;
	struct node *next;
};

void insertAtEnd(struct node **, int, char);
void display(struct node *);
void reverse(struct node *);
int main(){
	struct node *head=NULL;
	int choice ;
	int x;
	char y;
	while(1){
	printf("enter 1 to insertaAtEnd\n");
	printf("enter 2 to display ll\n");
	printf("enter 3 to reverse\n");
	scanf("%d", &choice);
	switch(choice){
		case 1:
		printf("enter 2 vals int c\n");
		scanf("%d %c", &x, &y);
		insertAtEnd(&head ,x, y);
		break;
		
		case 2:
		printf("------linklist-------\n");
		display(head);
		break;
		
		case 3:
			reversedisplay(head);
                        break;
		default:
		  printf("enter right choice\n");
	}
	}
}

void insertAtEnd(struct node **q, int x1, char ch){
	struct node *t;
  t=(struct node *)malloc(sizeof(struct node));
  t->x=x1;
  t->y=ch;
  t->next=NULL;
  if(*q==NULL){
	*q=t;
  }else {
	struct node *t1;
	t1=*q;
	while(t1->next!=NULL){
		t1=t1->next;
	}
	t1->next=t;
  }
}

void display(struct node *t){
	while(t!=NULL){
		printf("%d %c -->", t->x, t->y);
		t=t->next;
	}
}
void reversedisplay(struct node *temp){
	if(temp->next==NULL)
		
	{
        	
       printf("%d %c-->",temp->x,temp->y);
	return;	
	}
 


	else{
		reversedisplay(temp->next);
        printf("%d %c-->",temp->x,temp->y);	
}

}

