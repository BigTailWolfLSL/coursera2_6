#include <iostream>
#include <iomanip>
#include <cstring>
#include <stdlib.h>
using namespace std;
int main(){
    int m=0;
    double a=0;
    cin>>m>>a;
    char str[50][2][5]={0};
    double arr[50]={0};
    for (int i=0;i<m;i++){
        cin>>str[i][0]>>str[i][1];
        arr[i]=atof(str[i][1]);
        for (int j=0;j<i;j++){
            if (arr[j]<arr[i]){
                char str0[5],str1[5];
                for (int k=0;k<5;k++){
                    str0[k]=str[i][0][k];
                    str1[k]=str[i][1][k];
                }
                double tarr=arr[i];
                for (int k=i;k>j;k--){
                    for (int l=0;l<5;l++){
                        str[k][0][l]=str[k-1][0][l];
                        str[k][1][l]=str[k-1][1][l];
                    }
                    arr[k]=arr[k-1];
                }
                for (int l=0;l<5;l++){
                    str[j][0][l]=str0[l];
                    str[j][1][l]=str1[l];
                }
                arr[j]=tarr;
            }
        }
    }
    for (int i=0;i<m;i++){
        if (arr[i]<a){
            if (i==0)cout<<"None."<<endl;
            break;
        }
        cout<<str[i][0]<<' '<<str[i][1]<<endl;
    }
    return 0;
}
