// #include<iostream>
// using namespace std;

// char stack[100];
// int n=100;
// int top=-1;

// void push(char val) {
//    if(top>=n-1)
//    cout<<"Stack Overflow"<<endl;
//    else {
//       top++;
//       stack[top]=val;
//    }
// }

// void pop() {
//    if(top<=-1)
//    cout<<"Stack Underflow"<<endl;
//    else {
//       top--;
//    }
// }

// void display() {
//    if(top>=0) {
//       cout<<"Stack elements are : ";
//       for(int i=top; i>=0; i--)
//       cout<<stack[i]<<" ";
//       cout<<endl;
//    } else
//    cout<<"Stack is empty"<<endl;
// }

// bool empty(){
// 	if(top==-1)  return true;
// 	else return false;
// }

// char rettop(){
// 	return stack[top];
// }

// bool isBalanced(string expr) {
//    char ch;
//    for (int i=0; i<expr.length(); i++) {
//       if (expr[i]=='('||expr[i]=='['||expr[i]=='{') {
//         push(expr[i]);
//          continue;
//       }
//       if (empty())
//          return false;
//          if(expr[i]==')'){
//                ch = rettop();
//                pop();
//                if (ch=='{' || ch=='[')
//                   return false;
//                   break;}
//         else if ((expr[i]=='}'))
//         {
//            ch = rettop();
//                pop();
//                if (ch=='(' || ch=='[')
//                   return false;
//                   break;
//         }
//         else if ((expr[i]==']'))
//         {
//             ch = rettop();
//                pop();
//                if (ch =='(' || ch == '{')
//                   return false;
//                   break;
//         }
//       return (empty());
// }
// }
// int main() {
//    string expr ;
//    cin>>expr;
//    if (isBalanced(expr))
//       cout << "Balanced";
//    else
//       cout << "Not Balanced";
// }

#include <bits/stdc++.h>
using namespace std;
#define MAX 1000
class Stack
{

public:
   int top;
   char a[MAX];

   Stack() { top = -1; }
   bool push(int x);
   char pop();
   bool isEmpty();
};
bool Stack::push(int x)
{
   if (top == MAX - 1)
   {
      cout << "Stackoverflow" << endl;
   }
   else
   {
      a[++top] = x;
   }
}
char Stack::pop()
{
   if (top == -1)
   {
      cout << "Stackunderflow" << endl;
   }
   else
   {
      char temp = a[top];
      top--;
      return temp;
   }
}
bool Stack::isEmpty()
{
   return (top == -1);
}
void solve()
{
   string exp;
   cin >> exp;
   Stack s;
   Stack();

   for (int i = 0; i < exp.size(); i++)
   {
      if (s.top == -1)
      {
         s.push(exp[i]);
      }
      else
      {
         if (exp[i] == '}' && s.a[s.top] == '{' || exp[i] == ')' && s.a[s.top] == '(' || exp[i] == ']' && s.a[s.top] == '[')
         {
            s.top--;
         }
         else
         {
            s.push(exp[i]);
         }
      }
   }
   if (s.top == -1)
   {
      cout << "balanced" << endl;
   }
   else
   {
      cout << "not balanced" << endl;
   }
}
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      solve();
   }
   return 0;
}