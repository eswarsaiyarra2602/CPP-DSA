#include<iostream>
using namespace std;
struct Node{
    int data ; 
    Node* next = nullptr;
};
void SortedInsert(Node*&head , int num)
{
    Node* node = new Node ; 
    node->data = num ;
    
    //insertatbegging 
    if(head==nullptr || head->data>num)
    {
        node->next=head;
        head=node;
    }
    else{
        Node* currentNode = head ;
        while(currentNode->next!=nullptr && currentNode->next->data<num)    //imp line , first condition is to avoid dereferencing null point ( segmentation fault)
        {
            currentNode=currentNode->next;
        }
        Node* temp = currentNode ->next;
        currentNode->next = node;
        node->next = temp;
    }
}
void display(Node*&head)
{
    Node* currentNode = head ;
    while(currentNode!=nullptr)
    {
        cout<<currentNode->data<<" ";
        currentNode=currentNode->next;
    }
}
int main()
{
    Node*head = nullptr;
    int n , num , x;
    cin>>n;
    while(n--)
    {
        cin>>num;
        SortedInsert(head,num);
    }
    display(head);
}
