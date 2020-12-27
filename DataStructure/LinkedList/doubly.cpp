#include <iostream>
#include <cmath>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *head = NULL;

void insertAtBegining(int data)
{

    if (head == NULL)
    {
        //First Node
        cout << "insert function" << endl;
        struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
        new_node->data = data;
        new_node->next = NULL;
        new_node->prev = NULL;

        head = new_node;

        cout << "first Node successfully added" << endl;
    }
    else
    {

        struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
        new_node->data = data;
        new_node->next = head;
        new_node->prev = NULL;
        head->prev = new_node;
        head = new_node;
        cout << "successfully added" << endl;
    }
}

int getCount()
{

    if (head == NULL)
    {
        return 0;
    }
    else
    {
        struct Node *gtemp;
        int count = 0;
        gtemp = head;

        while (gtemp != NULL)
        {
            count++;
            gtemp = gtemp->next;
        }
        return count;
    }
}

void insertAtMiddel(int data)
{
    if (getCount() == 1 || getCount() == 2 || getCount() == 0)
    {
        cout << "insert function" << endl;
        struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
        new_node->data = data;
        new_node->next = NULL;
        new_node->prev = NULL;

        head = new_node;

        cout << "first Node successfully added" << endl;
    }
    else
    {
        cout << "In the Middle Add function";
        struct Node *temp;
        struct Node *temp1;
        temp = head;

        int cnt = lround(getCount() / 2);
        for (int i = 0; i < cnt; i++)
        {
            temp = temp->next;
        }

        struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
        temp1 = temp->next;
        new_node->data = data;
        new_node->next = temp->next;
        new_node->prev = temp;
        temp1->prev = new_node;
        temp->next = new_node;
        cout << "successfully added at middel" << endl;
    }
}

void insertAtEnd(int data)
{
}

void deleteNode(int data)
{
}
void search(int data)
{

    bool flag = false;

    struct Node *s_temp;
    s_temp = head;
    cout << "" << endl;
    while (s_temp != NULL)
    {
        if (s_temp->data == data)
        {
            flag = true;
        }
        s_temp = s_temp->next;
    }
    if (flag == true)
    {
        cout << "Found In Linked List" << endl;
    }
    else
    {
        cout << "Not Found !!!!!!!!!" << endl;
    }
}
void display()
{
    struct Node *dtemp;
    int count = 0;
    dtemp = head;
    cout << "values in Doubly Liked List" << endl;
    cout << "" << endl;
    while (dtemp != NULL)
    {
        count++;
        cout << dtemp->data << " ";
        dtemp = dtemp->next;
    }
    cout << "" << endl;
    cout << "Count" << count << endl;
}

int main()
{
    int size = 1, data, ch;

    do
    {
        cout << "" << endl;

        cout << "1.addAtBegining" << endl;
        cout << "2.addAtEnd" << endl;
        cout << "3.addInMidel" << endl;
        cout << "4.delete" << endl;
        cout << "5.search" << endl;
        cout << "6.display" << endl;
        cout << "7.Exit" << endl;
        cout << "Enter the choice" << endl;
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter the Number" << endl;
            cin >> data;
            insertAtBegining(data);
            break;
        case 2:
            cout << "Enter the Number" << endl;
            cin >> data;
            insertAtEnd(data);
            break;
        case 3:
            cout << "Enter the Number" << endl;
            cin >> data;
            insertAtMiddel(data);
            break;
        case 4:
            cout << "Enter the number you want to delete " << endl;
            cin >> data;
            deleteNode(data);
            break;
        case 5:
            cout << "Enter the number you want to search" << endl;
            cin >> data;
            search(data);
            break;
        case 6:
            display();
            break;
        case 7:
            size = 0;
            exit(0);

        default:
            cout << "invalid choice" << endl;
        }

    } while (size != 0);

    return 0;
}