#include <iostream>
using namespace std;

struct Node
{

    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insert(int insert_data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = insert_data;
    newNode->next = head;
    head = newNode;
}

void display()
{
    struct Node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

int main()
{
    int no, d;
    cout << "How Many Numbers you want to insert" << endl;
    cin >> no;

    for (int i = 0; i < no; i++)
    {
        cin >> d;
        insert(d);
    }

    cout << "No of elements in linked list........" << endl;

    display();

    return 0;
}