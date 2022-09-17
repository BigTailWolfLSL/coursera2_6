#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main() {
    int yy,mm,dd;
    char ch1,ch2;
    cin>>yy>>ch1>>mm>>ch2>>dd;
    int ul=30;
    if ((mm<=7&&mm%2==1)||(mm>=8&&mm%2==0)){ul++;}
    if (mm==2){ul=ul-2;}
    if (((yy%4==0&&yy%100!=0)||(yy%400==0))&&(mm==2)){ul=ul+1;}
    if (dd!=ul){
        dd++;
    } else{
        dd=1;
        if (mm!=12){
            mm++;
        } else {
            yy++;
            mm=1;
        }
    }
    cout<<yy<<'-';
    cout<<setfill('0')<<setw(2)<<mm<<'-'<<setfill('0')<<setw(2)<<dd<<endl;
    return 0;
}
