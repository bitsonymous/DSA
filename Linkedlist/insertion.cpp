#include<iostream>
#include"linkedlist.cpp"
using namespace std;
void insertionAtHead(node* &head,int x){
    node* temp = new node(x);
    temp -> next = head;
    head = temp;
}
void print(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    node* head = new node(12);
    insertionAtHead(head,11);
    insertionAtHead(head,73);
    insertionAtHead(head,23);
    print(head);
} 