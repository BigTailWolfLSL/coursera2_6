#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
char lday[102][102]={0},day[102][102];
int gan(int i,int j){
    if (day[i-1][j]!='#')day[i-1][j]='@';
    if (day[i+1][j]!='#')day[i+1][j]='@';
    if (day[i][j+1]!='#')day[i][j+1]='@';
    if (day[i][j-1]!='#')day[i][j-1]='@';
    return 0;
}
int main(){
    int n;
    cin>>n;
    for (int i = 1; i < n+1; ++i) {
        for (int j = 1; j < n+1; ++j) {
            cin>>day[i][j];
            lday[i][j]=day[i][j];
        }
    }
    int m;
    cin>>m;
    for (int k = 0; k < m-1; ++k) {
        for (int i = 1; i <=n; ++i) {
            for (int j = 1; j <=n; ++j) {
                if (lday[i][j]=='@'){
                    gan(i,j);
                }
            }
        }
        for (int i = 1; i <=n; ++i) {
            for (int j = 1; j <=n; ++j) {
                lday[i][j]=day[i][j];
            }
        }
    }
    int count=0;
    for (int i = 1; i <=n; ++i) {
        for (int j = 1; j <=n; ++j) {
            if (lday[i][j]=='@'){
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}