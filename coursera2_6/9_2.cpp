#include <iostream>
#include <iomanip>
#include <cstring>
#include <stdlib.h>
using namespace std;
int main(){
    char str[505]={0};
    cin.getline(str,500);
    int count[30]={0};
    int i=0;
    while(str[i]!='\0'){
        if (str[i]>='A'&&str[i]<='Z'){
            str[i]=str[i]-'A'+'a';
        }
        if (str[i]>='a'&&str[i]<='z'){
            count[(int)(str[i]-'a')]++;
        }
        i++;
    }
    int max=0;
    for (int j=0;j<30;j++)if (count[j]>max)max=count[j];
    for (int j=0;j<30;j++)if (count[j]==max)count[j]=0;
    max=0;
    char ch[30]={0};
    int n=0;
    for (int j=0;j<30;j++){
        if (count[j]>max){
            max=count[j];
        }
    }
    for (int j=0;j<30;j++){
        if (count[j]==max){
            n++;
            ch[n-1]=(char)('a'+j);
        }
    }
    i=0;
    while(str[i]!='\0'){
        for (int j=0;j<n;j++){
            if (str[i]==ch[j]){
                char t;
                t=(char)(ch[j]-'a'+'A');
                cout<<t<<'+'<<ch[j]<<':'<<max<<endl;
                return 0;
            }
        }
        i++;
    }
    return 0;
}
