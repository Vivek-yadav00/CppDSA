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

// Node *buildtree(Node *&root)
// {
//     cout << "Enter data: ";
//     int data;
//     cin >> data;

//     if (data == -1)
//     {
//         return NULL;
//     }

//     root = new Node(data);

//     cout << "Enter data in left of " << data << ": ";
//     root->left = buildtree(root->left);

//     cout << "Enter data in right of " << data << ": ";
//     root->right = buildtree(root->right);

//     return root;
// }

Node *buildtreefromlevel(Node *&root)
{
    queue<Node *> q;
    cout << "Enter data for root: ";
    int data;
    cin >> data;
    root = new Node(data);
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        cout << "Enter data for left of " << temp->data << ": ";
        int leftdata;
        cin >> leftdata;
        if (leftdata != -1)
        {
            temp->left = new Node(leftdata);
            q.push(temp->left);
        }

        cout << "Enter data for right of " << temp->data << ": ";
        int rightdata;
        cin >> rightdata;
        if (rightdata != -1)
        {
            temp->right = new Node(rightdata);
            q.push(temp->right);
        }
    }
    return root;
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
    // Creating a tree
    // root = buildtree(root);

    buildtreefromlevel(root);

    // Performing level order traversal
    cout << "\nLevel Order Traversal: " << endl;
    levelorder(root);

    cout << "\nInorder Traversal: " << endl;
    inorder(root);

    cout << "\nPreorder Traversal: " << endl;
    preorder(root);

    cout << "\nPostorder Traversal: " << endl;
    postorder(root);

    return 0;
}


