//Linked List :  Inserting a node at beginning
#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

struct Node* head;  //global variable , can be accessed anywhere

void Insert(int x){
    Node* temp = malloc(sizeof(struct Node)) ;
    (*temp).data =x ;   //or temp ->data = x ;
    (*temp).next = NULL;//or temp->next = NULL;
    if(head !=NULL) (*temp).next = head;
    head = temp;

}
void Insert(int x);
void Print();
int main()
{
    head = NULL ; //empty list
    printf("How many number?\n ");

    int n, i ,x ;
    scanf("%d",&n);

    for(i = 0 ; i<n ; i++){
        printf("Enter the number\n ");
        scanf("%d",x);
        Insert(x);
        Print();
    }

}
