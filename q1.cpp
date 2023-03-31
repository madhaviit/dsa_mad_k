#include<iostream>
using namespace std ;

struct Node
{
    int data;
    Node * next ;
    Node * prev ;
    
};



void insert_front( Node * header , int new_data )
{
    Node* new_node = new Node() ;

    new_node->data = new_data;

    if(header==NULL){
        cout<<"Header was null";
        new_node->next = NULL;
        new_node->prev = NULL ;
        
    }else{
        cout<<"header was not null";
        new_node->next = header ;
        new_node->prev = NULL ;
        (header)->prev = new_node ;
    }

    header = new_node ;

    cout<<"returned insert front";

}

void insertAfter(Node* prev_node, int new_data)
{
    cout<<"\ncame in insert after";
    // checking if the given prev_node is NULL 
    if (prev_node == NULL) {
        cout << "The given previous node cannot be NULL but still added";
        
        return;
    }

    cout<<"\nprev node was not null";
    Node* new_node = new Node();
 

    new_node->data = new_data;
              
    new_node->next = prev_node->next; 
    prev_node->next = new_node;


    new_node->prev = prev_node;
    if (new_node->next != NULL)
        new_node->next->prev = new_node;
    cout<<"\ndone with insertAfter" ;

}
 
void insert_last( Node* header ,  int new_data)
{
    Node * new_node = new Node() ;
    Node * last = header ;

    new_node->data = new_data;
    new_node->next = NULL ;

    if( header == NULL )
    {
        new_node->prev = NULL ;
        header = new_node ;
        return ;
    }

    //else
    while( last->next != NULL) // reach the end of dll
    {
        last = last->next ;
    }

    last->next = new_node ;
    new_node-> prev = last ;

    return ;


}

void print_ddl(Node* node)
{
    Node* last;
    cout << "\nTraversal in forward direction \n";
    while (node != NULL) {
        cout << " " << node->data << " ";
        last = node;
        node = node->next;
    }
 
    cout << "\nTraversal in reverse direction \n";
    while (last != NULL) {
        cout << " " << last->data << " ";
        last = last->prev;
    }
}



int main()
{

    Node * head1 = NULL;

    int a ;
    cin>> a ;
    Node*temp = head1 ;
    int count = 1;
    for( int i = 0 ; i<a ; ++i)
    {
        int content;
        cin>>content;
        
        if (count == 1)
        {
            insert_front(head1 , content);
            temp= temp->next ;
            cout<<"end of count1";

        }else{
            cout<<"count 2";
            insertAfter(temp , content) ;
            temp = temp->next ;
        }
        
        

        count++ ;
    }

    print_ddl(head1);

    

    


}