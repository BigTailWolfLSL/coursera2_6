#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int a[101]={0};
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a[i];//读入
    }
    int index=-1;
    for (int i=n-1;i>=0;i--){
        if (a[i]==i){
            index=i;
        }
    }
    if (index!=-1){
        cout<<index<<endl;
    } else {
        cout<<'N'<<endl;
    }
    return 0;
}
