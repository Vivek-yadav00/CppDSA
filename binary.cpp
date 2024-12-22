// decimal to binary conversion
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans=0,i=0;
    while(n!=0){
        int bit=n&1;
        ans=(bit * pow(10,i))+ans;
        n=n>>1;
        i+=1;
    }
    cout<<"answer is "<<ans;

    return 0;
}  



// #include <iostream>

// int main() {
//     int n=5;
//     int arr[50];
//     int i=0;
//     while(n>0){
//         int d=n%2;
//         arr[i]=d;
//         n/=2;
//         i++;
//     }
//     for(int j=i-1;j>=0;j--){
//         std::cout<<arr[j];
//     }
//     return 0;
// }