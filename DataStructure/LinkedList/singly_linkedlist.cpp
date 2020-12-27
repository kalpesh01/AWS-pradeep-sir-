#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

//insert at first
void insert(int new_data)
{
    if (head == NULL)
    {
        struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
        new_node->data = new_data;
        new_node->next = NULL;
        head = new_node;
    }
    else
    {
        struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
        new_node->data = new_data;
        new_node->next = head;
        head = new_node;
    }
}

void insertAtLast(int new_data)
{
    if (head == NULL)
    {
        //first Node
        struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
        new_node->data = new_data;
        new_node->next = NULL;
        head = new_node;
    }
    else
    {
        struct Node *temp;
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
        new_node->data = new_data;
        new_node->next = NULL;
        temp->next = new_node;
    }
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
    insertAtLast(10);
    insertAtLast(20);
    insertAtLast(30);
    insertAtLast(40);
    insertAtLast(50);
    cout << "The linked list is: ";
    display();
    return 0;
}
