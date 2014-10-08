//Linked List : Delete a node at nth Position
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* head1;      //global
struct Node* curr;
void Insert1(int data){  //Insert1 an integer at end of list
    Node* temp1 = new Node();

    temp1->data = data;
    temp1->next = NULL;

    if(head1 == NULL){
        head1 = temp1;

    }else{
        curr = temp1;
        Node* temp2 = temp1;
        head1->next = temp1;
    }




}

void Print1(){//print all elements in the list

    Node* temp = head1;
    while(temp !=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n ");

}
void Delete(int n){     //Delete node at position n
    struct Node* temp1 = head1;
    if(n==1){
        head1=temp1->next;   //head now points to second node.
        free(temp1);
        return;
    }
    int i;
    for(i = 0 ;i<n-2;i++){
        temp1 = temp1->next;
        //temp1 points to (n-1)th node
        struct Node* temp2 = temp1->next;//nth Node
        temp1->next = temp2->next;//(n+1)th node
        free(temp2);    //delete temp2; if we have used new keyworkd
    }
}
int main1(){
    head1 = NULL;        //empty list
    Insert1(2);
    Insert1(4);
    Insert1(5);
    Insert1(6);          //List : 2 , 4 ,5 ,6
    Print1();
    int n;
    printf("Enter the position\n");
    scanf("%d",&n);
    Delete(n);
    Print1();


}
