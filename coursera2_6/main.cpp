#include <iostream>
#include <iomanip>
#include <cstring>
#include <stdlib.h>
using namespace std;
int main(){
    int a[100][2]={0};
    bool flag[100]={0};
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a[i][0]>>a[i][1];
        flag[i]= true;
    }
    for (int i=1;i<n;i++){
        for (int j=0;j<i;j++){
            if (a[i][0]<a[j][0]||(a[i][0]==a[j][0]&&a[i][1]<a[j][1])){
                int t;
                t=a[i][0];
                a[i][0]=a[j][0];
                a[j][0]=t;
                t=a[i][1];
                a[i][1]=a[j][1];
                a[j][1]=t;
            }
        }
    }
    for (int i=1;i<n;i++){
        for (int j=0;j<i;j++){
            if (a[j][0]<=a[i][0]&&a[j][1]<=a[i][1]){
                flag[j]=false;
            }
        }
    }
    bool flag2=false;
    for (int i=0;i<n;i++){
        if (flag[i]){
            if (flag2){
                cout<<',';
            }
            cout<<'('<<a[i][0]<<','<<a[i][1]<<')';
            flag2=true;
        }
    }
    cout<<endl;
    return 0;
}
