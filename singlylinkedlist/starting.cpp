#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int value){
        data=value;
        next=NULL;
    }
};

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return ;
}

node* insertatstart(node* head,int value){
   node* temp=new node(value);
   temp->next=head;
   head=temp;
}


int main(){
    node* head=new node(2);
    head->next=new node(3);
    head->next->next=new node(4);
    head->next->next->next=new node(5);
    head->next->next->next->next=new node(6);
    cout<<"before updated:";
    display(head);
    int value;
    cout<<endl;
    cout<<"enter the value:";
    cin>>value;
    cout<<"after updated:";
     head=insertatstart(head,value);
     display(head);


        return 0;

}
