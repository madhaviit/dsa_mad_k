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
    int size=0;
    while (inp)
    {
        cin>>temp->data;
        size++;
        temp->link = new node();
        temp = temp->link;
        char mad;
        cin>>mad;
        if (mad!='y')
        {
            inp=0;
        }
        
    }

    //delete first element
    temp=head;
    head=temp->link;
    free(temp);

    temp = head ; 
    while (temp->link!='\0')
    {
        cout<<temp->data<<endl;
        temp = temp->link;        
    }
    temp=head;
    // delete nth element from remaining elements

    int n;
    cout<<"i am here"<<endl;
    cin>>n;
    node *prev;
    for (int i = 0; i < n-1; i++)
    {
        prev=temp;
        temp=temp->link;
    }
    prev->link = temp->link;
    free(temp);

    temp = head ; 
    while (temp->link!='\0')
    {
        cout<<temp->data<<endl;
        temp = temp->link;        
    }
    
    //for deleting last element get size by traversing through linked list 
    

    return 0;
}