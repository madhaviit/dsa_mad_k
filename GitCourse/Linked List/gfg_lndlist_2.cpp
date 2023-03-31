//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
    
};

/* Function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


// } Driver Code Ends
/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        node *t1;
        node *t2;
        node *t3;
        node *t4;
        node *ret;
        t1='\0';
        t2=head;
        t4=head;
        int len=0;
        
        while(t2!='\0'){
            t2=t2->next;
            len++;
        }
        t2=head;
        int iter = len/k;
        int last = len%k;
        for(int i=0;i<iter;i++){
            t2=t4;
            for(int j=0 ; j<k; j++){
                t3=t2->next;
                t2->next=t1;
                t1=t2;
                t2=t3;
            }
            if (i==0)
            {
                ret=t1;
            }
            if (i=(iter-1))
            {
                /* code */
            }
            
            t1=t4->next;
            t4->next = t3;
            t4=t3;            
        }
        return ret;
        
    }
};


//{ Driver Code Starts.

/* Drier program to test above function*/
int main(void)
{
    int t;
    cin>>t;
     
    while(t--)
    {
        struct node* head = NULL;
        struct node* temp = NULL;
        int n;
        cin >> n;
         
        for(int i=0 ; i<n ; i++)
        {
            int value;
            cin >> value;
            if(i == 0)
            {
                head = new node(value);
                temp = head;
            }
            else
            {
                temp->next = new node(value);
                temp = temp->next;
            }
        }
        
        int k;
        cin>>k;
        
        Solution ob;
        head = ob.reverse(head, k);
        printList(head);
    }
     
    return(0);
}


// } Driver Code Ends