#include <iostream>
using namespace std;

class emp
{
    int id;
    static int count;

public:
    void setData(void);
    void getData(void)
    {
        cout << "Required id is " << id << endl;
        cout << "emp no " << count << endl;
    }
};

void emp ::setData(void)
{
    cout << "Enter id " << endl;
    cin >> id;
    count++;
}

int emp ::count;

int main()
{
    emp helo, raxi;
    helo.setData();
    helo.getData();
    raxi.setData();
    raxi.getData();
    return 0;
}