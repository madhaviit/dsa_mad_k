#include <bits/stdc++.h>
using namespace std;

struct node
{
  char data;
  node *link;
};

class stack_
{
public:
  node *head = NULL;
  int l()
  {
    node *temp;
    temp = head;
    if (temp == NULL)
      return 0;
    int c = 1;
    while (temp->link != NULL)
    {
      c++;
      temp = temp->link;
    }
    return c;
  }
  void push_(char a)
  {
    node *newnode;
    newnode = (node *)malloc(sizeof(node));
    newnode->data = a;
    newnode->link = head;
    head = newnode;
  }
  void pop_()
  {
    if (l() == 0)
    {
      cout << "Stack Underflow" << endl;
      return;
    }
    node *temp = head->link;
    cout << head->data;
    free(head);
    head = temp;
  }
  void pop1_()
  {
    if (l() == 0)
    {
      cout << "Stack Underflow" << endl;
      return;
    }
    node *temp = head->link;
    free(head);
    head = temp;
  }
  void show()
  {
    if (l() == 0)
    {
      cout << "Stack is Empty" << endl;
      return;
    }
    node *temp;
    temp = head;
    while (temp->link != NULL)
    {
      cout << temp->data << " ";
      temp = temp->link;
    }
    cout << temp->data << endl;
  }
  void push1(char ch)
  {
    while (l() > 0 && head->data != '(')
      pop_();
    push_(ch);
  }
  void push2(char ch)
  {
    while (l() > 0 && (head->data == '*' || head->data == '^' || head->data == '/'))
      pop_();
    push_(ch);
  }
  void push3(char ch)
  {
    push_(ch);
  }
  void push4()
  {
    while (head->data != '(')
      pop_();
    pop1_();
  }
};

int main()
{
  string s;
  cout << "Enter the Expression" << endl;
  cin >> s;
  int l = s.length();
  stack_ s1;
  int b = 0;
  for (int i = 0; i < l; i++)
  {
    char ch = s[i];
    if (ch != '+' && ch != '-' && ch != '*' && ch != '/' && ch != '^' && ch != '(' && ch != ')')
      cout << ch;
    else
    {
      if (ch == '+' || ch == '-')
        s1.push1(ch);
      else if (ch == '*' || ch == '/')
        s1.push2(ch);
      else if (ch == '^')
        s1.push3(ch);
      else if (ch == '(')
      {
        b++;
        s1.push_('(');
      }
      else
      {
        if (b == 0)
        {
          b = -1;
          break;
        }
        s1.push4();
        b--;
      }
    }
  }
  if (b == -1)
  {
    cout << "You Have Entered an Invalid Expression" << endl;
  }
  else
  {
    s1.show();
  }
  return 0;
}

/*#include<bits/stdc++.h>
using namespace std;

// Function to return precedence of operators
int prec(char c)
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

// The main function to convert infix 
// expression to postfix expression
void infixToPostfix(string s)
{
    stack<char> st;
    st.push('N');
    
    int l = s.length();
    
    string ns;
    
    for(int i = 0; i < l; i++)
    {
        // If the scanned character is an operand, 
        // add it to output string.
        if((s[i] >= 'a' && s[i] <= 'z')||
                (s[i] >= 'A' && s[i] <= 'Z'))
            ns+=s[i];
        // If the scanned character is an ‘(‘,
        // push it to the stack.
        else if(s[i] == '(')
        
        st.push('(');
        
        // If the scanned character is an ‘)’, 
        // pop and to output string from the stack
        // until an ‘(‘ is encountered.
        else if(s[i] == ')')
        {
            while(st.top() != 'N' && st.top() != '(')
            {
                char c = st.top();
                st.pop();
                
                ns += c;
            }
            if(st.top() == '(')
            {
                char c = st.top();
                st.pop();
            }
        }
        
        // If an operator is scanned
        else{
            while(st.top() != 'N' && prec(s[i]) <= prec(st.top()))
            {
                char c = st.top();
                st.pop();
                ns += c;
            }
            
            st.push(s[i]);
        }
    }
    
    // Pop all the remaining elements from the stack
    while(st.top() != 'N')
    {
        char c = st.top();
        st.pop();
        ns += c;
    }
    
    cout << ns << endl;
}

// Driver Code
int main()
{
    string exp = "a+b*(c^d-e)^(f+g*h)-i";
    
    infixToPostfix(exp);
    
    return 0;
}
// Java implementation to convert infix expression 
// to equivalent postfix expression

// Note that here we have used the Stack class 
// for all Stack operations

import java.util.Stack;

class Test
{
    // A utility function to return precedence 
    // of a given operator
    // Higher the returned value means 
    // higher the precedence
    static int Prec(char ch)
    {
        switch (ch)
        {
            case '+':
            case '-':
                return 1;
        
            case '*':
            case '/':
                return 2;
        
            case '^':
                return 3;
        }
        
        return -1;
    }
    
    // The main method that converts given 
    // infix expression to postfix expression. 
    static String infixToPostfix(String exp)
    {
        // initializing empty String for result
        String result = new String("");
        
        // initializing empty stack
        Stack<Character> stack = new Stack<>();
        
        for (int i = 0; i<exp.length(); ++i)
        {
            char c = exp.charAt(i);
            
            // If the scanned character is an operand, 
            // add it to output.
            if (Character.isLetterOrDigit(c))
                result += c;
            
            // If the scanned character is an '(', 
            // push it to the stack.
            else if (c == '(')
                stack.push(c);
            
            // If the scanned character is an ')', 
            // pop and output from the stack 
            // until an '(' is encountered.
            else if (c == ')')
            {
                while (!stack.isEmpty() && stack.peek() != '(')
                    result += stack.pop();
                
                if (!stack.isEmpty() && stack.peek() != '(')
                    return "Invalid Expression"; // invalid expression             
                else
                    stack.pop();
            }
            else // an operator is encountered
            {
                while (!stack.isEmpty() && Prec(c) <= Prec(stack.peek()))
                    result += stack.pop();
                stack.push(c);
            }
    
        }
    
        // pop all the operators from the stack
        while (!stack.isEmpty())
            result += stack.pop();
    
        return result;
    }

    // Driver method 
    public static void main(String[] args) 
    {
        String exp = "a+b*(c^d-e)^(f+g*h)-i";
        
        System.out.println(infixToPostfix(exp));
    }
}*/