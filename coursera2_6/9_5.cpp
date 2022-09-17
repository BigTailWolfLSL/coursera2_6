#include <iostream>
#include <iomanip>
#include <cstring>
#include <stdlib.h>
using namespace std;
int main(){
    int n,m;
    char str[102][102]={0};
    bool flag[102][102]={0};
    cin>>n>>m;
    int dui1[200][2]={0};
    for (int i=1;i<n+1;i++){
        for (int j=1;j<m+1;j++){
            cin>>str[i][j];
            flag[i][j]=true;
            if (str[i][j]=='S'){
                dui1[1][0]=i;
                dui1[1][1]=j;
                flag[i][j]=false;
                dui1[0][0]=1;
            }
        }
    }
    int k=0;
    while (k<=n*m){
        k++;
        int dui2[200][2]={0};
        dui2[0][0]=0;
        for (int i=1;i<=dui1[0][0];i++){
            if (str[dui1[i][0]-1][dui1[i][1]]!='#'&&flag[dui1[i][0]-1][dui1[i][1]]){
                if (str[dui1[i][0]-1][dui1[i][1]]=='T'){
                    cout<<k<<endl;
                    return 0;
                }
                dui2[0][0]++;
                dui2[dui2[0][0]][0]=dui1[i][0]-1;
                dui2[dui2[0][0]][1]=dui1[i][1];
                flag[dui1[i][0]-1][dui1[i][1]]= false;
            }
            if (str[dui1[i][0]+1][dui1[i][1]]!='#'&&flag[dui1[i][0]+1][dui1[i][1]]){
                if (str[dui1[i][0]+1][dui1[i][1]]=='T'){
                    cout<<k<<endl;
                    return 0;
                }
                dui2[0][0]++;
                dui2[dui2[0][0]][0]=dui1[i][0]+1;
                dui2[dui2[0][0]][1]=dui1[i][1];
                flag[dui1[i][0]+1][dui1[i][1]]= false;
            }
            if (str[dui1[i][0]][dui1[i][1]-1]!='#'&&flag[dui1[i][0]][dui1[i][1]-1]){
                if (str[dui1[i][0]][dui1[i][1]-1]=='T'){
                    cout<<k<<endl;
                    return 0;
                }
                dui2[0][0]++;
                dui2[dui2[0][0]][0]=dui1[i][0];
                dui2[dui2[0][0]][1]=dui1[i][1]-1;
                flag[dui1[i][0]][dui1[i][1]-1]= false;
            }
            if (str[dui1[i][0]][dui1[i][1]+1]!='#'&&flag[dui1[i][0]][dui1[i][1]+1]){
                if (str[dui1[i][0]][dui1[i][1]+1]=='T'){
                    cout<<k<<endl;
                    return 0;
                }
                dui2[0][0]++;
                dui2[dui2[0][0]][0]=dui1[i][0];
                dui2[dui2[0][0]][1]=dui1[i][1]+1;
                flag[dui1[i][0]][dui1[i][1]+1]= false;
            }
        }
        for(int i=0;i<=200;i++){
            dui1[i][0]=dui2[i][0];
            dui1[i][1]=dui2[i][1];
        }
    }
    return 0;
}
