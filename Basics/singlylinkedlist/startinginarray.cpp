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
int main(){
    int arr[5]={1,2,3,4,5}
    node* temp=head;
    head=NULL;
    for(int i=0;i<5;i++){
        if(head==NULL){
            head=new node(arr[i]);
        }else{
            node* temp=new node(arr[i]);
            temp->next=head;
            head=temp;
        }
        cout<<head->data<<" ";
        head=heda->next;
    }
    int value;
    cout<<"enter the value:";
    cin>>value;
    node* temp=new node(value);
    temp->next=head;
    head=temp;
    cout<<head->data<<" ";
    head=head->next;
    return 0;
}