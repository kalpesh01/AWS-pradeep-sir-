#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *Next;
};

struct Node *head = NULL;
//Insert Function
void insert(int no)
{
    if (head == NULL)
    {
        struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
        new_node->data = no;
        new_node->Next = NULL;
        cout << "first node added" << endl;
        head = new_node;
    }
    else
    {

        struct Node *temp;
        temp = head;
        //traverse to last node of list
        while (temp->Next != NULL)
        {
            temp = temp->Next;
        }

        struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
        new_node->data = no;
        new_node->Next = NULL;
        temp->Next = new_node;
        cout << "first node added" << endl;
    }
}

void SearchNum(int no)
{
    if (head == NULL)
    {
        cout << "list is empty" << endl;
    }
    else
    {
        struct Node *temp;
        temp = head;
        while (temp != NULL)
        {
            if (temp->data == no)
            {
                cout << "no found in list" << endl;
                break;
            }

            temp = temp->Next;
        }
    }
}

void deleteFront()
{

    if (head == NULL)
    {
        cout << "list is empty" << endl;
        return;
    }
    else
    {
        struct Node *temp;
        temp = head;
        cout << temp->data << " Deleted from list" << endl;
        head = temp->Next;
    }
}

//display Function
void display()
{
    if (head == NULL)
    {
        cout << "list is empty" << endl;
        return;
    }
    else
    {
        struct Node *temp;
        temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->Next;
        }
    }
    cout << "" << endl;
}

int main()
{
    int ch, no;
    bool Var = true;
    do
    {
        cout << endl;
        cout << "*****************" << endl;
        cout << "1.insert" << endl;
        cout << "2.display" << endl;
        cout << "3.search" << endl;
        cout << "4.delete" << endl;
        cout << "5.exit" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter the Number" << endl;
            cin >> no;
            insert(no);
            break;
        case 2:
            cout << "Linked List Elements are" << endl;
            display();
            break;
        case 3:

            display();
            cout << endl;
            cout << "Enter The Number To Search From List" << endl;
            cin >> no;
            SearchNum(no);
            break;
        case 4:
            deleteFront();
            break;

        case 5:
            exit(0);
            Var = false;
            break;
        default:
            break;
        }

    } while (Var);
    return 0;
}