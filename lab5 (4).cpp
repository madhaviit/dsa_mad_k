#include <bits/stdc++.h>
using namespace std;
#define MAX 1000 

class Stack
{

public:
   int top;
   char a[MAX];

   Stack() { top = -1; }
   bool push(char x);
   char pop();
   bool isEmpty();
};
bool Stack::push(char x)
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
int vjudge(char c)
{
    if(c == '^')
        return 3;
    else if(c == '*' || c == '/')
        return 2;
    else if(c == '+' || c == '-')
        return 1;
    else
        return -1;
}
void solve()
{
    Stack m;
    string exp;
    cin>>exp;
    char x;
    for (int i = 0; i < exp.size(); i++)
    {
        if (exp[i]<123&&exp[i]>96)
        {
            cout<<exp[i];
        }else if(m.top==-1){
            m.push(exp[i]);
        }
        else if (exp[i]=='(')
        {
            m.push(exp[i]);
        }else if (exp[i]==')')
        {
            while (m.a[m.top]!='(')
            {
                cout<<m.pop();
            }
            m.pop();
            //m.push(exp[i]);
            
        }else if (vjudge(exp[i])>vjudge(m.a[m.top]))
        {
            m.push(exp[i]);
        }else if (vjudge(exp[i])<=vjudge(m.a[m.top]))
        {
            while (vjudge(exp[i])<=vjudge(m.a[m.top]))
            {
                if (m.a[m.top]=='(')
                {
                    m.push(exp[i]);
                    goto pos;
                }else
                {
                    cout<<m.pop();
                }                
            }
            m.push(exp[i]);
            pos: continue;
        }
        
        
        
        
    }
    while (!m.isEmpty())
    {
        cout<<m.pop();
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





// #include <bits/stdc++.h>
// using namespace std;

// struct node
// {
//   char data;
//   node *link;
// };

// class stack_
// {
// public:
//   node *head=NULL;
//   int l()
//   {
//     node *temp;
//     temp=head;
//     if(temp==NULL)
//       return 0;
//     int c=1;
//     while(temp->link != NULL)
//     {
//       c++;
//       temp=temp->link;
//     }
//     return c;
//   }
//   void push_(char a)
//   {
//     node *newnode;
//     newnode=(node *)malloc(sizeof(node));
//     newnode->data=a;
//     newnode->link=head;
//     head=newnode;
//   }
//   void pop_()
//   {
//     if(l()==0)
//     {
//       cout<<"Stack Underflow"<<endl;
//       return;
//     }
//     node *temp=head->link;
//     cout<<head->data;
//     free(head);
//     head=temp;
//   }
//   void pop1_()
//   {
//     if(l()==0)
//     {
//       cout<<"Stack Underflow"<<endl;
//       return;
//     }
//     node *temp=head->link;
//     free(head);
//     head=temp;
//   }
//   void show()
//   {
//     if(l()==0)
//     {
//       cout<<"Stack is Empty"<<endl;
//       return;
//     }
//     node *temp;
//     temp=head;
//     while(temp->link != NULL)
//     {
//       cout<<temp->data<<" ";
//       temp=temp->link;
//     }
//     cout<<temp->data<<endl;
//   }
//   void push1(char ch)
//   {
//     while(l()>0 && head->data!='(')
//       pop_();
//     push_(ch);
//   }
//   void push2(char ch)
//   {
//     while(l()>0 && (head->data=='*' || head->data=='^' || head->data=='/'))
//       pop_();
//     push_(ch);
//   }
//   void push3(char ch)
//   {
//     push_(ch);
//   }
//   void push4()
//   {
//     while(head->data != '(')
//       pop_();
//     pop1_();
//   }
// };

// int main()
// {
//   string s;
//   cout<<"Enter the Expression"<<endl;
//   cin>>s;
//   int l=s.length();
//   stack_ s1;
//   int b=0;
//   for(int i=0;i<l;i++)
//   {
//     char ch=s[i];
//     if(ch != '+' && ch != '-' &&  ch!='*' && ch!='/' && ch!='^' && ch!='(' && ch!=')')
//       cout<<ch;
//     else
//     {
//       if(ch=='+' || ch=='-')
//         s1.push1(ch);
//       else if(ch=='*' || ch=='/')
//         s1.push2(ch);
//       else if(ch=='^')
//         s1.push3(ch);
//       else if(ch=='(')
//       {
//         b++;
//         s1.push_('(');
//       }
//       else
//       {
//         if(b==0)
//         {
//           b=-1;
//           break;
//         }
//         s1.push4();
//         b--;
//       }
//     }
//   }
//   if(b==-1)
//   {
//     cout<<"You Have Entered an Invalid Expression"<<endl;
//   }
//   else
//   {
//     s1.show();
//   }
//   return 0;
// }