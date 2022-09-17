#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
int main( ){
    int k;
    cin>>k;
    for (int l=0;l<k;l++){
        int m,n;
        int a[100][100]={0};
        cin>>m>>n;
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        int count=0;
        for (int i=0;i<m;i++)count=count+a[i][0]+a[i][n-1];
        for (int j=0;j<n;j++)count=count+a[0][j]+a[m-1][j];
        count=count-a[0][0]-a[m-1][0]-a[0][n-1]-a[m-1][n-1];
        if (m==1&n!=1){
            count=count+a[0][0]+a[0][n-1];
            count=count/2;
        }
        if (n==1&&m!=1){
            count=count+a[0][0]+a[m-1][0];
            count=count/2;
        }
        if (n==1&&m==1)count=a[0][0];
        cout<<count<<endl;
    }
    return 0;

}
