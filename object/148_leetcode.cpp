#include<iostream>
using namespace std;
class solution{
    public:
    ListNode* sortList(ListNode* head){
        if(!head)
        return head;
        veactor<int>v;
        ListNode* temp=head;
        //step1: put the value into vector
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }
        //step2: sort the vector
        sort(v.begine(),v.end());
        //step3: put the value into linked list
        temp=head;
        int i=0;
        while(temp){
            temp->val=v[i++];
            temp =temp->next;
            return head;
        } 
    }
};