#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main() {
    double a[4][4]={0};
    int i,j;
    while(cin>>i>>j){
        if (i==0){break;}
        for (int k=0;k<j;k++){
            char ch;
            double c;
            cin>>ch>>c;
            a[i-1][(int)(ch-'A')]=a[i-1][(int)(ch-'A')]+c;
        }
    }
    double sumid[3]={0},sumch[3]={0};
    for (int k=0;k<3;k++){
        for (int l = 0; l < 3; ++l) {
            sumid[k]=sumid[k]+a[k][l];
            sumch[l]=sumch[l]+a[k][l];
        }
    }
    for (int k=0;k<3;k++){
        cout<<fixed<<setprecision(2)<<k+1<<' '<<sumid[k]<<endl;
    }
    for (int l=0;l<3;l++){
        cout<<fixed<<setprecision(2)<<(char)(l+'A')<<' '<<sumch[l]<<endl;
    }
    return 0;
}
