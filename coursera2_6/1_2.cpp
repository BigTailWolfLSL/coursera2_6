#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int a[5]={0};
    for (a[1]=0;a[1]<=4;a[1]++){
        for (a[2]=0;a[2]<=4;a[2]++){
            for (a[3]=0;a[3]<=4;a[3]++){
                if (a[1]==a[2]||a[1]==a[3]||a[3]==a[2]) continue;
                a[4]=10-a[1]-a[2]-a[3];
                if ((a[1]==3)+(a[4]==4)+(a[2]==1)!=1){continue;}
                if ((a[4]==1)+(a[2]==4)+(a[1]==2)+(a[3]==3)!=1)continue;
                if ((a[4]==4)+(a[2]==3)!=1)continue;
                if ((a[1]==1)+(a[3]==4)+(a[4]==2)+(a[2]==3)!=1)continue;
                for (int i=1;i<=4;i++){
                    cout<<a[i]<<endl;
                }
                return 0;
            }
        }
    }
    return 0;
}
