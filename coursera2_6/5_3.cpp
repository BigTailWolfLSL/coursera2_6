#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
int main( ){
    int n;
    cin>>n;
    char str[10000][45]={0};
    int count={0};
    for (int i=0;i<n;i++){
        cin>>str[i];
    }
    if (n!=0){
        cout<<str[0];
        count+=strlen(str[0]);
    }
    for (int i=1;i<n;i++){
        if ((strlen(str[i])+1+count)<=80){
            cout<<' '<<str[i];
            count=count+strlen(str[i])+1;
        } else {
            cout<<endl;
            cout<<str[i];
            count=strlen(str[i]);
        }
    }
    cout<<endl;
    return 0;

}
