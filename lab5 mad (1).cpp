//question 7

#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node * next;
};

class q{
    public:
    node * front, * rear;
    q(){
        front== NULL; rear= NULL;
    }
    void enq(int n){
        node * newnode= (node*)(malloc(sizeof(node)));
        if(newnode==NULL){cout<<"memoryfull"<<endl; return;}
        newnode->next= NULL;
        newnode->data= n;
        if(front==NULL){
            front= rear= newnode;
            return;
        }
        front->next= newnode;
        front= newnode;
        return;
    }
    int deq(){
        if(front==NULL && rear==NULL){cout<<"nothing in memory"<<endl; return -1;}
        if(front==rear){int k= front->data; front=rear=NULL; return k;}
        node * temp= rear;
        int k= temp->data;
        rear= rear->next;
        free(temp);
        return k;
    }
    bool isempty(){
        if(front==NULL && rear==NULL){ return true;}
        return false;
    }
    void display(){
        node* temp= rear;
        if(front==temp && temp==NULL){cout<<"stack is empty"<<endl; return;}
        if(front==rear){cout<<temp->data<<endl; return;}
        while(temp->next!=NULL){
            cout<<temp->data<<" ";
            temp= temp->next;
        }
        cout<<temp->data;
        cout<<endl;
        return;
    }
};

class staque{
    public:
    q q1; q q2;
    void push(int n){
        if(q1.isempty()){q1.enq(n); return;}
        int k;
        while(!q1.isempty()){
            k= q1.deq();
            if(k!=-1){
                q2.enq(k);
            }
        }
        q1.enq(n);
        while(!q2.isempty()){
            k= q2.deq();
            if(k!=-1){
                q1.enq(k);
            }
        }
        return;
    }
    void pop(){
        q1.deq(); return;
    }

    void display(){
        q1.display(); return;
    }
};


int main(){
    staque s;
    s.push(10);
    s.display();
    s.push(20);
    s.display();
    s.push(30);
    s.display();
    s.pop();
    s.display();
    s.pop(); s.pop(); s.pop();
}