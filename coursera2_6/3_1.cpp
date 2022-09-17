#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
char str[550]={0};
int n=0;
int typ(){
    char ch={0};
    ch=str[n];
    if (ch==' '){cout<<ch;n++;return 0;}
    if (str[n+1]!=' '&&str[n+1]!='\0'){
        n++;
        typ();
    } else n++;
    cout<<ch;
    return 0;
}
int main() {
    cin.getline(str,550);
    for (n;n<strlen(str);n)typ();
    cout<<endl;
    return 0;
}
