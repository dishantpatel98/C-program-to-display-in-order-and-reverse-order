#include<stdio.h>
#include<stdlib.h>
struct node {
	int x;
	char y;
	struct node *next;
};
int count=0;
void insertAtEnd(struct node **, int, char);
void display(struct node *);
void reverse(struct node *);
void reverse2(struct node *);
void deleteLastnode(struct node*);
int main(){
	struct node *head=NULL;
	int choice ;
	int x;
	char y;
	while(1){
	printf("enter 1 to insertaAtEnd\n");
	printf("enter 2 to display ll\n");
	printf("enter 3 to reverse\n");
	printf("enter 4 to reverse withou recusion\n");
        printf("enter 5 to delete the node from last\n");
        printf("enter 6 to delete the node in the middle\n ");
        printf("enter 7 to add the node in the middle\n");

	
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
		case 4:
			reverse2(head);
			break;
		case 5:
                        deleteLastnode(head);
		
		default:
		  printf("enter right choice\n");
	}
	}

return 1;
}


void insertAtEnd(struct node **q, int x1, char ch){
	count++;
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
void reverse2(struct node* temp){
	struct node *t;
	struct node *arr[100];
	for(int i=count-1;i>=0;i--){
	arr[i]=temp;
	temp=temp->next;
	               }
	for(int j=0;j<=count-1;j++){
t=arr[j];
printf("%d %c-->",t->x,t->y);
	                           }


                                 }
void deleteLastnode(struct node* temp){
	
	if(temp->next==NULL){
	free(temp);
	}

	else{	
		while(temp->next->next){
	           temp=temp->next;
	
	}
		temp->next=NULL;
		free(temp->next);
	}





}











