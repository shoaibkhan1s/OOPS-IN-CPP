#include <iostream>
using namespace std;

class List
{
public:
    virtual int store(int value) = 0;
    virtual int retrieve() = 0;
};

class stack : public List
{
    int arr[5];
    int top;

public:
    stack() : top(-1) {}

    int store(int value) override
    {
        if (top < 4)
        {
            top++;
            arr[top] = value;
            cout << value << " is added to stack \n";
        }
        else
        {
            cout << "stack is overflow \n";
        }
    }

    int retrieve() override
    {
        if (top >= 0)
        {
            return arr[top--];
        }
        else
        {
            cout << "stack underflow \n";
            return -1;
        }
    }
};

class queue : public List
{
    int front, rear;
    int arr[5];

public:
    queue() : front(0), rear(0) {}

    int store(int value) override
    {
        if (rear < 5)
        {
            rear++;
            arr[rear] = value;
            cout << value << " is added to queue \n";
        }
        else
        {
            cout << "queue is underflow";
            return -1;
        }
    }

    int retrieve() override
    {
        if (front < rear)
        {
            front++;
            int value = arr[front];
            return value;
        }
        else
        {
            cout << "queue is underflow";
        }
    }
};

int main()
{
    stack s1;
    queue q1;

    s1.store(40);
    s1.store(50);
    s1.store(60);
    cout << s1.retrieve() << " is retrieve from the stack \n";
    cout << s1.retrieve() << " is retrieve from the stack \n";

    q1.store(100);
    q1.store(200);
    q1.store(300);

    cout << q1.retrieve() << " is retrieve from queue \n";
    cout << q1.retrieve() << " is retrieve from queue \n";
}