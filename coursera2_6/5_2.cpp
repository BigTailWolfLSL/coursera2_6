#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
int main( ){
    int r,c;
    cin>>r>>c;
    int a[100][100]={0};
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    for (int i=0;i<r+c-1;i++){
        for (int j=0;j<=i;j++){
            if (j<r&&(i-j)<c) cout<<a[j][i-j]<<endl;
        }
    }
    return 0;

}
