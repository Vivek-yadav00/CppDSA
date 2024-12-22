#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

struct dist
{
    int x1;
    int x2;
    int y1;
    int y2;
    public:
    void getdata();
    
    void printdata()
    {
        int d = pow(x1 - x2, 2);
        int e = pow(y1 - y2, 2);
        float n = sqrt(d + e);
        cout << "Distance : " <<fixed<<setprecision(2)<<n<<endl;
    }
};
void dist :: getdata(){
    cin>>x1;
    cin>>x2;
    cin>>y1;
    cin>>y2;
};  

int main()
{
    dist obj;
    obj.getdata();
    obj.printdata();
}


