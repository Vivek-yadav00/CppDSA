#include <iostream>
#include <string>
using namespace std;
int main() {
    string c;
    getline(cin,c);
    cout<<c<<" ";
    const char *p=c.c_str();
    cout<<"lenght of str is :"<<c.length()<<endl;
    int count=0;
    for (int i=0;i<c.length();i++){
        if (p[i]== ' '){
            count++;
        }
    }
    cout<<count;
    return 0;
}