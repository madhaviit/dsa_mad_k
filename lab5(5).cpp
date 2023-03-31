#include <iostream> 
#include <string.h> 
#include<math.h>


using namespace std;

int stack[100];
int n=100; 
int top=-1;

void push(int val) {
   if(top>=n-1)
   cout<<"Stack Overflow"<<endl;
   else {
      top++;
      stack[top]=val;
   }
}
int topper(){
	return stack[top];
}
void pop() {
   if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
      top--;
   }
}

void display() {
   if(top>=0) {
      cout<<"Stack elements are : ";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
   } else
   cout<<"Stack is empty"<<endl;
}
 
int calc(string exp) 
{ 
    
    
    int i; 

    int result=0;
    for (i = 0; exp[i]; ++i) 
    { 
         
        if (isdigit(exp[i])) 
            push(exp[i] - '0'); 

        
        else
        { 
            int val1 = topper();
            pop();
            
            int val2 = topper();
            pop();
            
            switch (exp[i]) 
            { 
                case '+': push(val2 + val1); break; 
                case '-': push(val2 - val1); break; 
                case '*': push(val2 * val1); break; 
                case '/': push(val2/val1); break; 
                case '^': push(pow(val2,val1));break;
            } 
        } 
    } 
    
    return topper(); 
} 


int main() 
{ 
    string exp;
    cin>>exp;

    cout<<"postfix evaluation: "<< calc(exp); 
    return 0; 
}