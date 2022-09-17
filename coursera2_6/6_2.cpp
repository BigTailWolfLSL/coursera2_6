#include <iostream>
#include <iomanip>
#include <cstring>
#include <stdlib.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch[5];
    cin.getline(ch,5);
    for (int i=0;i<n;i++){
        char str[260]={0};
        cin.getline(str,260);
        for (int j=0;j<strlen(str);j++){
            switch (str[j]) {
                case'A':cout<<'T';break;
                case'T':cout<<'A';break;
                case'G':cout<<'C';break;
                case'C':cout<<'G';break;
            }
        }
        cout<<endl;
    }
    return 0;
}
