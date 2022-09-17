#include <iostream>
#include <iomanip>
#include <cstring>
#include <stdlib.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a;
    cin.get();
    cin>>b;
    cin.get();
    cin>>c;
    if (c==(a+b)){
        cout<<'+'<<endl;
        return 0;
    }
    if (c==(a-b)){
        cout<<'-'<<endl;
        return 0;
    }
    if (c==(a*b)){
        cout<<'*'<<endl;
        return 0;
    }
    if (c==(a/b)){
        cout<<'/'<<endl;
        return 0;
    }
    if (c==(a%b)){
        cout<<'%'<<endl;
        return 0;
    }
    cout<<"error"<<endl;
    return 0;
}
