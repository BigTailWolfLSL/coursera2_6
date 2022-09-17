#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main() {
    int a,n;
    cin>>n;
    a=n;
    while (a!=1){
        if (a%2==1){
            int b;
            b=a*3+1;
            cout<<a<<"*3+1="<<b<<endl;
            a=b;
        } else {
            int b;
            b=a/2;
            cout<<a<<"/2="<<b<<endl;
            a=b;
        }
    }
    cout<<"End"<<endl;
    return 0;
}
