#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void bin(void){
        for (int i=0;i<s.length();i++){
        if (s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary"<<endl;
            exit(0);
        }
    }
    }
};

void binary:: read(void){
    cout<<"enter binary "<<"\n";
    cin>>s;
}

int main()
{
    binary b;
    b.read();
    b.bin();
    return 0;
}