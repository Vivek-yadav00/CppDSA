#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int p)
    {
        this->data = p;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        // memeory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for data " << value << endl;
    }
};

void insertathead(Node *&head, int d)
{
    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertattail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void inseratpos(Node *&tail, Node *&head, int pos, int d)
{

    // insert at start
    if (pos == 1)
    {
        insertathead(head, d);
        return;
    }

    Node *box = head;
    int cnt = 1;
    while (cnt < pos - 1)
    {
        box = box->next;
        cnt++;
    }

    // inserting at last
    if (box->next == NULL)
    {
        insertattail(tail, d);
        return;
    }

    Node *temp = new Node(d);
    temp->next = box->next;
    box->next = temp;
}

void deleteat(int pos, Node *&head, Node *&tail)
{
    if (pos == 1)
    {
        Node *temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any node
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt < pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        if (curr == tail)
        {
            tail = prev;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(Node *&head)
{
    Node *t = head;
    while (t != NULL)
    {
        cout << t->data << " ";
        t = t->next;
    }
    cout << endl;
}

int main()
{
    Node *node1;
    node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;

    Node *head = node1;
    Node *tail = node1;
    print(head);

    insertathead(head, 12);
    print(head);

    insertathead(head, 15);
    print(head);

    insertattail(tail, 12);
    print(head);

    insertattail(tail, 15);
    print(head);

    inseratpos(tail, head, 6, 100);
    print(head);

    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    deleteat(6, head, tail);
    print(head);

    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
}