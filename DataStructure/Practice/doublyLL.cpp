#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *Next;
    struct Node *Prev;
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
        new_node->Prev = NULL;
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
        new_node->Prev = temp;
        temp->Next = new_node;
        cout << "second node added" << endl;
    }
}

// void SearchNum(int no)
// {
//     if (head == NULL)
//     {
//         cout << "list is empty" << endl;
//     }
//     else
//     {
//         struct Node *temp;
//         temp = head;
//         while (temp != NULL)
//         {
//             if (temp->data == no)
//             {
//                 cout << "no found in list" << endl;
//                 break;
//             }

//             temp = temp->Next;
//         }
//     }
// }

// void deleteFront()
// {

//     if (head == NULL)
//     {
//         cout << "list is empty" << endl;
//         return;
//     }
//     else
//     {
//         struct Node *temp;
//         temp = head;
//         cout << temp->data << " Deleted from list" << endl;
//         head = temp->Next;
//     }
// }

//display Function
void displayForward()
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

        cout << endl;
        cout << "Doubly Link List Forward Order" << endl;
        cout << "************************" << endl;

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->Next;
        }
    }
    cout << "" << endl;
}

void displayReverse()
{
    if (head == NULL)
    {
        cout << "list is empty" << endl;
        return;
    }
    else
    {
        cout << endl;
        cout << "Doubly Link List Reverse Order" << endl;
        cout << "************************" << endl;
        struct Node *temp;
        temp = head;
        while (temp->Next != NULL)
        {

            temp = temp->Next;
        }

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->Prev;
        }
    }
    cout << "" << endl;
}

void findSecondHighest()
{
    cout << "Enterd in function" << endl;
    int First, Second = 0;

    struct Node *temp;
    temp = head;
    First = temp->data;

    //cout << "first" << First << endl;
    while (temp != NULL)
    {
        // cout << "test1" << endl;

        if (temp->data > First)
        {

            Second = First;
            First = temp->data;
        }
        else if (Second < temp->data && temp->data < First)
        {
            Second = temp->data;
        }
        temp = temp->Next;
    }

    cout << "first Highest :- " << First << endl;
    cout << "Second Highest :- " << Second << endl;
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
        cout << "5.SecondHighest" << endl;
        cout << "6.exit" << endl;
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
            displayForward();
            break;
        case 3:

            displayForward();
            cout << endl;
            cout << "Enter The Number To Search From List" << endl;
            cin >> no;
            //SearchNum(no);
            break;
        case 4:
            // deleteFront();
            displayReverse();
            break;

        case 5:
            findSecondHighest();
            break;
        case 6:
            exit(0);
            Var = false;
            break;
        default:
            break;
        }

    } while (Var);
    return 0;
}