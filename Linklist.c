#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next
};
void display(struct node*ptr)
{   
    printf("****************************************\n");
        while(ptr!=NULL){
    printf("%d\n",ptr->data);
    ptr=ptr->next;
    }
    printf("*********************************\n");
}
struct node*insertatbeg(struct node*head,int data){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=head;
}
struct node*insertatpoint(struct node*head,int data,int index){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    struct node*p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
struct node*insertatend(struct node*head,int data){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    struct node*p=head;
   // ptr->data=data;
    while(p->next!=NULL){
        p=p->next;
    }
     ptr->data=data;
     p->next=ptr;
     ptr->next=NULL;
     return head;
}

void exit();

int main() {
    int ch;
    struct node*head;
    struct node*first;
    struct node*second;
    struct node*third;
    struct node*fourth;
    
    head=(struct node*)malloc(sizeof(struct node));
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    
    head->data=99;
    head->next=first;
    first->data=54;
    first->next=second;
    second->data=55;
    second->next=third;
    third->data=51;
    third->next=fourth;
    fourth->data=56;
    fourth->next=NULL;
    
    
    while(1){
        printf("1.insertatbeg:\n");
        printf("2.insertatpoint:\n");
        printf("3.insertatend:\n");
        printf("4.display\n");
        printf("5.exit:\t");
        printf("enter choice:\n");
        scanf("%d",&ch);
        
        switch(ch){
            case 1:head=insertatbeg(head,53);
            break;
            case 2:insertatpoint(head,59,2);
            break;
            case 3:head=head=insertatend(head,30);
            break;
            case 4: display(head);
            break;
            case 5:exit;
            
            default :printf("wrong entry:\t");
            break;
           
        }
    }
    
     return 0;
}
