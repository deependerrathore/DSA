
//Linked List : Inserting a node at nth Position
#include<stdio.h>
#include<stdio.h>
struct Node{
    int data;
    struct Node* next;
};

struct Node* head;//initially empty

void Insert(int data , int n  ){
    //struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node*));
    Node* temp1 = new Node();

    temp1->data = data;
    temp1->next = NULL;

    if(n == 1 ){
        temp1->next = head;
        head = temp1;
        return;
    }
    Node* temp2 = head;//head is the first node i.e.why we run loop for n-2
    for(int i = 0;i<n-2;i++){
        temp2 = temp2->next;
    }
    temp1->next =temp2->next;
    temp2->next =temp1;

}
void Print(){
    Node* temp = head;
    while(temp !=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n ");
}
int main2(){
    head = NULL;    //empty List
    Insert(2,1);    //List 2
    Insert(3,2);    //List 2 , 3
    Insert(4,1);    //List 4 , 2, 3
    Insert(5,2);    //List 4 , 5 , 2, 3
    Insert(6,1);    //List 2
    Insert(7,2);    //List 2 , 3
    Insert(8,1);    //List 4 , 2, 3
    Insert(5,6);    //List 4 , 5 , 2, 3
    Insert(2,1);    //List 2
    Insert(3,2);    //List 2 , 3
    Insert(4,1);    //List 4 , 2, 3
    Insert(5,4);    //List 4 , 5 , 2, 3
    Print();
}
