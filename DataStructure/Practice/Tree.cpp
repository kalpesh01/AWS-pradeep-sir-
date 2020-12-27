#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *root = NULL;

void insert(int no)
{
    if (root == NULL)
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = no;
        newNode->right = NULL;
        newNode->left = NULL;
        root = newNode;
    }
    else
    {
        struct Node *temp;
        temp = root;

        while (temp != NULL)
        {
            if (temp->data > no)
            {
                if (temp->left != NULL)
                {
                    temp = temp->left;
                }
                else
                {
                    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
                    newNode->data = no;
                    newNode->right = NULL;
                    newNode->left = NULL;
                    temp->left = newNode;
                    temp = NULL;
                }
            }
            else
            {
                if (temp->right != NULL)
                {
                    temp = temp->right;
                }
                else
                {
                    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
                    newNode->data = no;
                    newNode->right = NULL;
                    newNode->left = NULL;
                    temp->right = newNode;
                    temp = NULL;
                }
            }
        }
    }
}

void preorder(struct Node *temp)
{

    if (temp != NULL)
    {

        cout << temp->data << " ";
        preorder(temp->left);
        preorder(temp->right);
    }
}

void inorder(struct Node *temp)
{

    if (temp != NULL)
    {

        preorder(temp->left);
        cout << temp->data << " ";
        preorder(temp->right);
    }
}

void postorder(struct Node *temp)
{
    if (temp != NULL)
    {
        preorder(temp->left);
        preorder(temp->right);
        cout << temp->data << " ";
    }
}

void search(struct Node *temp, int no)
{

    if (temp != NULL)
    {
        cout << "controller came here" << endl;
        if (no == temp->data)
        {
            cout << "found" << endl;
            return;
        }
        else if (no < temp->data)
        {
            search(temp->left, no);
        }
        else
        {
            search(temp->right, no);
        }
    };
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
        cout << "2.preorder" << endl;
        cout << "3.inorder" << endl;
        cout << "4.postorder" << endl;
        cout << "5.search" << endl;
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
            preorder(root);
            break;

        case 3:
            inorder(root);
            break;
        case 4:
            postorder(root);
            break;
        case 5:
            int no;
            cout << "Enter the number for serach" << endl;
            cin >> no;
            search(root, no);
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
