#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
};
class q{
    public:
    node* front,* rear;
    q(){
        front= NULL; rear= NULL;
    }

    void enqr(int n){
        node * newnode= (node *)(malloc(sizeof(node)));
        if(newnode== NULL){cout<<"stack overflow"<<endl; return;}
        newnode->next= NULL;
        newnode->data= n;
        if(rear==NULL && front==NULL){rear= front= newnode; rear->next= front; return;}
        front->next= newnode;
        newnode->next= rear;
        rear= newnode;
        return;
    }

    void enqf(int n){
        node * newnode= (node *)(malloc(sizeof(node)));
        if(newnode== NULL){cout<<"stack overflow"<<endl; return;}
        newnode->data= n;
        if(rear==NULL && front==NULL){rear= front= newnode; rear->next= front; return;}
        newnode->next= rear;
        front->next= newnode;
        front= newnode;
        return;
    }

    void deqf(){
        node* temp1= rear; 
        if(front==rear && front==NULL){cout<<"stack underflow"<<endl; return;}
        if(front==rear && front!=NULL){front= rear= NULL; free(temp1); return;}
        node* temp= rear;
        node* prev;
        while(temp->next!= rear){
            prev= temp;
            temp= temp->next;
        }
        if(prev!=rear){prev->next= rear;}
        front= prev;
        free(temp);
        return;
    }

    void deqr(){
        node* temp1= rear; 
        if(front==rear && rear==NULL){cout<<"stack underflow"<<endl; return;}
        if(front==rear){front= rear= NULL; free(temp1); return;}
        front->next= rear->next;
        node* temp= rear;
        rear= rear->next;
        free(temp);
        return;
    }

    void printq(){
        if(rear==NULL && front==NULL){cout<<"queue is empty";return;}
        if(front== rear && front!=NULL){cout<<front->data<<endl; return;}
        node* temp= rear;
        
        while(temp->next!=rear){
            cout<<temp->data<<" ";
            temp= temp->next;
        }
        cout<<front->data;
        cout<<endl;
        return;
    }
};

int main(){
    q queue;
    queue.enqr(1); queue.printq();
    queue.enqr(2); queue.printq(); 
    queue.enqf(3); queue.printq();
    queue.enqr(4); queue.enqf(11); queue.printq();
    queue.enqr(5); queue.enqf(12); queue.printq();
    queue.deqf(); queue.printq();
    queue.deqf(); queue.printq();
    queue.deqr(); queue.printq();
    queue.deqr(); queue.printq();
    queue.deqf(); queue.printq();
    queue.deqf(); queue.printq();
    queue.deqf(); 
    queue.deqf();
    return 0;
}