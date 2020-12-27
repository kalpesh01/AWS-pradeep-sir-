#include <iostream>
using namespace std;

class queue
{
    int rear = -1, front = -1;
    int queue[5] = {0, 0, 0, 0, 0};

public:
    int isFull()
    {
        if (rear == 5 && front == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int isEmpty()
    {
        if (rear == -1 && front == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    void enqueue(int no)
    {
        int res = isFull();

        if (res == 0)
        {
            if (front = -1)
            {
                front = 0;
            }
            rear++;
            queue[rear] = no;

            cout << no << " is inserted in queue" << endl;
        }
        else
        {
            cout << "queue is full" << endl;
        }
    }

    void dequeue()
    {
        int res = isEmpty();
        if (res == 0)
        {
            if (front == rear)
            {
                front = -1;
                rear = -1;
            }
            queue[front] = 0;
            front++;
        }
        else
        {
            cout << "queue Underflow" << endl;
        }
    }

    void display()
    {
        int res = isEmpty();
        if (res == 0)
        {
            cout << "===========================================" << endl;
            for (int i = 0; i <= rear; i++)
            {
                cout << queue[i] << " ";
            }
            cout << endl;
            cout << "===========================================" << endl;
            cout << endl;
        }
        else
        {
            cout << "queueu is empty" << endl;
        }
    }
};

int main()
{
    int ch = 0;
    int no = 0;
    queue q;
    do
    {

        cout << "1.Enqueue" << endl;
        cout << "2.Dequeue" << endl;
        cout << "3.Display" << endl;
        cout << "4.enter the choice" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter the Number" << endl;
            cin >> no;
            q.enqueue(no);
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.display();
            break;
        case 4:
            exit(0);
            break;
        default:
            cout << "Invalid choice" << endl;
        }

    } while (ch != 4);
    return 0;
}