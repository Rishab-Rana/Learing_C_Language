#include <stdlib.h>
#include <stdio.h>
struct node{
    int data;
    struct node* next;
};

struct node* new_node;
struct node* head;
struct node* current;

void insert(int);
void display();
void delete();

int main() {
    int data;
    head==NULL;
    int i;
    while(i!=4){
    printf("enter the data\n");
    scanf("%d",&data);
    insert(data);
    i++;
    }
    
    display();
    printf("\n");
    delete();
      display();
    delete();
    printf("\n");
      display();
    return 0;
}

void insert(int data)
{
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=data;
    if(head==NULL)
    {
        head=new_node;
    }
    else{
        current->next=new_node;
    }
    current=new_node;
}

void display(){
    struct node* ptr;
    ptr=head;
    
    while(ptr!=NULL)
    {
        printf("%d|%x -> ",ptr->data,ptr->next);
        ptr=ptr->next;
    }
}

void delete(){
    struct node* ptr;
    ptr=head;
    while(ptr->next!=current)
    {
        ptr=ptr->next;
    }
    current=ptr;
    current->next=NULL;
}
