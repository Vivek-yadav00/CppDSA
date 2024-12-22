#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *insertatrroot(Node *&root, int d)
{
    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }

    if (d < root->data)
    {
        root->left = insertatrroot(root->left, d);
    }
    else
    {
        root->right = insertatrroot(root->right, d);
    }
    return root;
}

void takeinput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        insertatrroot(root, data);
        cin >> data;
    }
}

void levelorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<Node *> q;
    q.push(root);
    q.push(NULL); // Marker for end of the current level

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl; // End of the current level
            if (!q.empty())
            {
                q.push(NULL); // Add a new marker for the next level
            }
        }
        else
        {
            cout << temp->data << " ";

            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
    }
}

void inorder(Node *&root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node *&root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *&root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    Node *root = NULL;

    cout << "Enter data to create bst:";
    takeinput(root);

    // Performing level order traversal
    cout << "\nLevel Order Traversal: " << endl;
    levelorder(root);

    cout << "\nInorder Traversal: " << endl;
    inorder(root);

    cout << "\nPreorder Traversal: " << endl;
    preorder(root);

    cout << "\nPostorder Traversal: " << endl;
    postorder(root);
}