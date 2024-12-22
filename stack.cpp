#include <iostream>
using namespace std;

class stack
{
public:
    int *arr;
    int top;
    int size;

    stack(int s)
    {
        this->size = s;
        arr = new int[size];
    }

    void push(int d)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = d;
        }
        else
        {
            cout << "stack overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack underflow" << endl;
        }
    }

    void peek()
    {
        if (top >= 0)
        {
            cout << arr[top] << endl;
        }
        else
        {
            cout << "empty stack" << endl;
        }
    }

    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    stack st(5);
    st.push(5);
    st.push(15);
    st.push(25);

    st.peek();
    st.pop();

    st.peek();
    st.pop();

    st.peek();
    st.pop();

    if (st.isempty())
    {
        cout << "Empty stack" << endl;
    }
    else
    {
        cout << "stack is not empty " << endl;
    }
}