// Vector
#include <iostream>
#include <vector>
using namespace std;
int main()
{
     vector<int> a(5,1);
     cout<<"elemnt of a: "<<endl;
     for (int j : a){
        cout<<j<<" ";
     }cout<<endl;

    vector<int> copy(a);
     cout<<"elemnt of copy: "<<endl;
     for (int j : copy){
        cout<<j<<" ";
     }cout<<endl;

    vector<int>v;
    cout<<"capacity --> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity --> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity --> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity --> "<<v.capacity()<<endl;
    cout<<"size of vector "<<v.size()<<endl;

    cout << "Element at 2nd Index-> " << v.at(2) << endl;
    cout << "Empty or not-> " << v.empty() << endl;
    cout << "First Element-> " << v.front() << endl;
    cout << "last Element-> " << v.back() << endl;

    cout<<"before pop "<<endl;
    for (int i : v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"after pop "<<endl;
    for (int i : v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"before clear size "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size "<<v.size()<<endl; 
}