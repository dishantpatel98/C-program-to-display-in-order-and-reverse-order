#include<stdio.h>
#include<stdlib.h>
struct node {
	int x;
	char y;
	struct node *next;
};
struct node*head=NULL;
int count=0;
void insertAtEnd(struct node **, int, char);
void display(struct node *);
void reverse(struct node *);
void reverse2(struct node *);
void deleteLastnode(struct node*);
void deleteFirstnode(struct node*);
void deletemiddlenode(struct node*);
void insertAtmiddle(struct node*);
void reversecompletelinkedlist(struct node*);
int main(){

	int choice ;
	int x;
	char y;
	while(1){
	printf("enter 1 to insertaAtEnd\n");
	printf("enter 2 to display ll\n");
	printf("enter 3 to display reverse ll\n");
	printf("enter 4 to display reverse withouy recusion\n");


        printf("enter 5 to delete the node from last\n");
        printf("enter 6 to delete the first node\n");
        printf("enter 7 to delete the node in the middle\n ");
        printf("enter 8 to add the node in the middle\n");
        printf("enter 9 to reverse the linked list completely\n");


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
		                 break;
		case 6:
                      deleteFirstnode(head);
                       break;
		case 7:
		       deletemiddlenode(head);
		       break;
	         case 8:
		      insertAtmiddle(head);
	       break;	      
	        case 9:
	             reversecompletelinkedlist(head);
		     break;
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

void deleteFirstnode(struct node* temp){


head=head->next;
temp->next=NULL;
free(temp);

}


void deletemiddlenode(struct node* temp){
printf("Enter the node number which you want to delete ");
struct node*t=NULL;
int n;
scanf("%d",&n);
while(temp->next->x!=n){
temp=temp->next;
}
t=temp->next;
temp->next=temp->next->next;
temp->next->next=NULL;
free(t);
}


void insertAtmiddle(struct node *temp){
printf("Enter the node after which you want to insert the node");
struct node*t=NULL;
int n;
scanf("%d",&n);
while(temp->x!=n){
temp=temp->next;
}
struct node *t1=(struct node*)malloc(sizeof(struct node));
printf("Enter 2 value");
scanf("%d %c",&t1->x,&t1->y);
struct node *t2=NULL;
t2=temp->next;
temp->next=t1;
t1->next=t2;

                                      }

void reversecompletelinkedlist (struct node* temp){

if(temp!=head){
	if(temp->next->next){
reversecompletelinkedlist(temp->next);

temp->next->next=temp;
                    

}
else{

head=temp->next;
temp->next->next=temp;

}

}


else{
reversecompletelinkedlist(temp->next);

temp->next->next=temp;
temp->next=NULL;


}




}
