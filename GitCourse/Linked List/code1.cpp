// first program for creating linkedlist

#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node *link;     
};
int main(){
    node *head;
    node *temp;
    head = new node();
    temp = head;
    bool inp = true;
    while (inp)
    {
        cin>>temp->data;
        temp->link = new node();
        temp = temp->link;
        cout<<"continue?(y/n) :";
        char mad;
        cin>>mad;
        if (mad!='y')
        {
            inp=0;
        }
        
    }
    temp = head ; 
    while (temp->link!='\0')
    {
        cout<<temp->data<<endl;
        temp = temp->link;        
    }
    

    return 0;
}

