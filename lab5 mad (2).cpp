#include <bits/stdc++.h>
using namespace std;
class q
{
public:
    int front, rear, capacity;
    int *que;

    q(int c)
    {
        capacity = c;
        front = -1;
        rear = 0;
        que = new int;
    }

    void insert_front(int k)
    {
        if ((rear + 1) % capacity == front)
        {
            cout << "stack overflow" << endl;
            return;
        }
        if (front == -1)
        {
            que[++front] = k;
            return;
        }
        for (int i = rear; i >= front; i--)
        {
            que[i + 1] = que[i];
        }
        que[front] = k;
        rear = (rear + 1) % capacity;
        return;
    }

    void insert_rear(int k)
    {
        if ((rear + 1) % capacity == front)
        {
            cout << "stack overflow" << endl;
            return;
        }
        rear = (rear + 1) % capacity;
        que[rear] = k;
        return;
    }

    void delete_rear()
    {
        if (front > rear)
        {
            cout << "stack underflow";
        }
        rear--;
        return;
    }

    void delete_front()
    {
        if (front > rear)
        {
            cout << "stack underflow" << endl;
            return;
        }
        front = (front + 1) % capacity;
        return;
    }

    void printq()
    {
        if (front > rear)
        {
            cout << "queue is empty" << endl;
            return;
        }
        for (int i = front; i <= rear; i++)
        {
            cout << que[i] << " ";
        }
        cout << endl;
        return;
    }
};
int main()
{
    q queue(5);
    queue.insert_front(10);
    queue.printq();
    queue.insert_rear(20);
    queue.printq();
    queue.insert_front(15);
    queue.printq();
    queue.insert_rear(25);
    queue.insert_front(30);
    queue.printq();
    queue.insert_rear(35);
    queue.insert_front(45);
    queue.delete_rear();
    queue.printq();
    queue.delete_front();
    queue.printq();
    queue.delete_front();
    queue.printq();
    queue.delete_rear();
    queue.printq();
    queue.delete_rear();
    queue.printq();
    queue.delete_front();
}