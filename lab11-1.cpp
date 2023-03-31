// When a share of common stock of some company is sold, the capital gain (or, sometimes, loss) is the difference between the share’s selling price and 
//the price originally paid to buy it. This rule is easy to understand for a single share, but if we sell multiple shares of stock bought 
//over a long period of time, then we must identify the shares actually being sold. A standard accounting principle for identifying which 
//shares of a stock were sold in such a case is to use a FIFO protocol—the shares sold are the ones that have been held the longest (indeed, 
//this is the default method built into several personal finance software packages).
// For example, suppose we buy 100 shares at $20 each on day 1, 20 shares at $24 on day 2, 200 shares at $36 on day 3, and then sell 150 
//shares on day 4 at $30 each. Then applying the FIFO protocol means that of the 150 shares sold, 100 were bought on day 1, 20 were bought 
//on day 2, and 30 were bought on day 3. The capital gain in this case would therefore be 100*10 + 20*6 + 30*(−6), or $940.
// Write a program that takes as input a sequence of transactions of the form “buy x share(s) at $y each” or “sell x share(s) at $y each,” 
///assuming that the transactions occur on consecutive days and the values x and y are integers. Given this input sequence, the output 
//should be the total capital gain (or loss) for the entire sequence, using the FIFO protocol to identify shares.

#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)

int main(){
    int n;
    cin>>n;
    int buy[n];
    int bcost[n];
    int bi=0;
    int si=0;
    char move;
    char dec;
    int capgain=0;
    for (int i = 0; i < 2*n; i++)
    {
        if (si<=bi+1)
        {
                   cout<<"shall we continue?"<<endl;
        cin>>move;
        if (move=='y')
        {
            cin>>dec;
            if (dec=='b')
            {
                cout<<"enter the price ";
                cin>>bcost[bi];
                cout<<"enter the quantity ";
                cin>>buy[bi];
                bi++;
            }
            if (dec=='s')
            {
                int quantity;
                int price;
                cout<<"enter the price ";
                cin>>price;
                cout<<"enter the quantity ";
                cin>>quantity;
                while (quantity!=0)
                {if (si>bi)
                {
                    cout<<"sorrry bro sell can take place";
                    break;
                }
                
                    if (buy[si]>=quantity)
                    {
                        capgain = capgain + (quantity*(price-bcost[si]));
                        buy[si] = buy[si]-quantity;
                        quantity =0;
                        
                    }else
                    {
                        capgain = capgain + (buy[si]*(price-bcost[si])); 
                        quantity = quantity - buy[si];  
                        si++;
                    }
                    
                }
                
                
                
                
            }
               
        }else
        {
            break;
        } 
        }
        

        
        
    }
    cout<<"net capital gain is "<<capgain;

    return 0;
}










































// 
// 
// 
// 
// const int cap=10;
// struct stock
// {
//     int price;
//     int quantity;
//     // stock(int price,int quantity){
//     //     stock::price=price;
//     //     stock::quantity=quantity;
//     // };
// };

// class q
// {
// public:
//     int front, rear;
//     int capacity;
//     stock *que;
    
//     q(int c)
//     {
//         capacity = c;
//         front = -1;
//         rear = 0;
//         que= new stock[c];        
//     }

//     void insert_front(int price, int quantity)
//     {
//         if ((rear + 1) % capacity == front)
//         {
//             cout << "stack overflow" << endl;
//             return;
//         }
//         if (front == -1)
//         {
//             que[++front].price = price;
//             que[++front].quantity = quantity;
//             return;
//         }
//         for (int i = rear; i >= front; i--)
//         {
//             que[i + 1] = que[i];
//         }
//         que[front].price = price;
//         rear = (rear + 1) % capacity;
//         return;
//     }

//     void insert_rear(int k)
//     {
//         if ((rear + 1) % capacity == front)
//         {
//             cout << "stack overflow" << endl;
//             return;
//         }
//         rear = (rear + 1) % capacity;
//         que[rear].price = k;
//         return;
//     }

//     void delete_rear()
//     {
//         if (front > rear)
//         {
//             cout << "stack underflow";
//         }
//         rear--;
//         return;
//     }

//     void delete_front()
//     {
//         if (front > rear)
//         {
//             cout << "stack underflow" << endl;
//             return;
//         }
//         front = (front + 1) % capacity;
//         return;
//     }

//     void printq()
//     {
//         if (front > rear)
//         {
//             cout << "queue is empty" << endl;
//             return;
//         }
//         for (int i = front; i <= rear; i++)
//         {
//             cout << que[i] << " ";
//         }
//         cout << endl;
//         return;
//     }
// };