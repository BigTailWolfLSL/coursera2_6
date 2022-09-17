#include <iostream>
#include <iomanip>
#include <cstring>
#include <stdlib.h>
using namespace std;
int main(){
    int m,k;
    cin>>m>>k;
    if (m%19!=0){
        cout<<"NO"<<endl;
        return 0;
    }
    if (((m/10000)%10==3)+((m/1000)%10==3)+((m/100)%10==3)+((m/10)%10==3)+(m%10==3)!=k){
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    return 0;
}
