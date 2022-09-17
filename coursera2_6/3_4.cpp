#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main() {
    char str[102]={0};
    int par[102]={0};
    while (cin>>str){
        char strt[102]={0};
        for (int i=0;i<strlen(str);i++)strt[i]=str[i];
        for (int i=0;i<strlen(str);i++){
            switch (str[i]) {
                case '(':par[0]++;par[par[0]]=i;str[i]='$';break;
                case ')':{
                    if (par[0]>0){
                        str[par[par[0]]]=' ';
                        str[i]=' ';
                        par[0]--;
                    } else str[i]='?';
                    break;
                }
                default:str[i]=' ';break;
            }
        }
        cout<<strt<<endl;
        cout<<str<<endl;
        for (int i = 0; i <=102; ++i) {
            par[i]=0;
            str[i]=0;
        }
    }
    return 0;
}
