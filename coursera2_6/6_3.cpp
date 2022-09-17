#include <iostream>
#include <iomanip>
#include <cstring>
#include <stdlib.h>
using namespace std;
int main(){
    int a[25][25]={0};
    for (int i=0;i<25;i++){
        for (int j=0;j<25;j++){
            a[i][j]=0x80000000;
        }
    }
    int n,m;
    cin>>m>>n;
    for (int i=1;i<=m;i++){
        for (int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for (int i=1;i<=m;i++){
        for (int j=1;j<=n;j++){
            if (a[i-1][j]<=a[i][j]&&a[i+1][j]<=a[i][j]&&a[i][j+1]<=a[i][j]&&a[i][j-1]<=a[i][j]){
                cout<<i-1<<' '<<j-1<<endl;
            }
        }
    }
    return 0;
}
