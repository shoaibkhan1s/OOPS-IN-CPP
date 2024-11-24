#include <iostream>
using namespace std;

// Abstract base class LIST with two pure virtual functions
class LIST
{
public:
    virtual void store(int value) = 0; // Pure virtual function to store a value
    virtual int retrieve() = 0;        // Pure virtual function to retrieve a value
};

// Derived class Stack from LIST
class Stack : public LIST
{
    int arr[5]; // Array to hold stack elements
    int top;    // Pointer to the top of the stack

public:
    Stack() : top(-1) {} // Initialize the stack as empty (top = -1)

    // Store value on top of the stack
    void store(int value) override
    {
        if (top < 4)
        { // Check for stack overflow (assuming max size 5)
            top++;
            arr[top] = value;
            cout << "Stored " << value << " in stack." << endl;
        }
        else
        {
            cout << "Stack Overflow!" << endl;
        }
    }

    // Retrieve value from top of the stack (LIFO)
    int retrieve() override
    {
        if (top >= 0)
        {
            int value = arr[top];
            top--;
            return value;
        }
        else
        {
            cout << "Stack Underflow!" << endl;
            return -1; // Return a sentinel value indicating empty stack
        }
    }
};

// Derived class Queue from LIST
class Queue : public LIST
{
    int arr[5];      // Array to hold queue elements
    int front, rear; // Front and rear pointers for the queue

public:
    Queue() : front(0), rear(0) {} // Initialize an empty queue

    // Store value in the queue (enqueue)
    void store(int value) override
    {
        if (rear < 5)
        { // Check for queue overflow (assuming max size 5)
            arr[rear] = value;
            rear++;
            cout << "Stored " << value << " in queue." << endl;
        }
        else
        {
            cout << "Queue Overflow!" << endl;
        }
    }

    // Retrieve value from the queue (dequeue)
    int retrieve() override
    {
        if (front < rear)
        {
            int value = arr[front];
            front++;
            return value;
        }
        else
        {
            cout << "Queue Underflow!" << endl;
            return -1; // Return a sentinel value indicating empty queue
        }
    }
};

// Main function to test the Stack and Queue classes
int main()
{
    // Creating objects of Stack and Queue
    Stack stack;
    Queue queue;

    // Store values in the stack
    stack.store(10);
    stack.store(20);
    stack.store(30);

    // Retrieve values from the stack
    cout << "Retrieved from stack: " << stack.retrieve() << endl; // 30
    cout << "Retrieved from stack: " << stack.retrieve() << endl; // 20

    // Store values in the queue
    queue.store(100);
    queue.store(200);
    queue.store(300);

    // Retrieve values from the queue
    cout << "Retrieved from queue: " << queue.retrieve() << endl; // 100
    cout << "Retrieved from queue: " << queue.retrieve() << endl; // 200

    return 0;
}
