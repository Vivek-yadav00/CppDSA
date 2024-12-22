// Array
#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

     cout<<"elemnt of deque: "<<endl;
     for (int j : d){
        cout<<j<<" ";
     }cout<<endl;

    cout << "Element at 1nd Index-> " << d.at(1) << endl;
    cout << "Empty or not-> " << d.empty() << endl;
    cout << "First Element-> " << d.front() << endl;
    cout << "last Element-> " << d.back() << endl;

    cout<<"before erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase "<<d.size()<<endl;

    for (int i : d){
        cout<<i<<" ";
    }
    

}