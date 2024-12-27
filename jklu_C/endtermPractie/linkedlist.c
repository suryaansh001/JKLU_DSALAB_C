#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;

}node;
//function to create a newnode
struct node* createNode(struct node* head){
    printf("enter data for the newnode");
    int data;
    scanf("%d",&data);
    struct node* new=(struct node*)malloc(sizeof(struct node*));
    new->data=data;
    new->next=NULL;
    return new;
    
    }
    
    


void insertatEnd(struct node* head,struct node* new){
    struct node* ptr=head;
    while(ptr!=NULL){
        ptr=ptr->next;
}
    ptr->next=new;
}


void insertnodeatBegining(struct node* head){
    struct node*k=createNode(head);
    struct node* ptr=head;
    head=k;
    k->next=ptr;
    free(ptr);
    

}
void insertNodeAtposition(struct node* head,int position){
    struct node* new=createNode(head);
struct node* ptr=head;




struct node* temp;
    for(int i=1;i<=position;i++){
        ptr=ptr->next;


    }
    temp=ptr->next;
    
    ptr->next=new;
    new->next=temp;
    free(temp);
    free(ptr);
}
void deletenodeatbegin(struct node* head){
    struct node* rp=head;
    head=head->next;

}
void deleteatend(struct node* head){
    struct node* rp=head;
    struct node* prev=rp;
   
    while(rp->next->next!=NULL){
        

    }
     

}