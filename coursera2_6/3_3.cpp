#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
int n=0;
char b;
int wife(){
    char ne=0;
    int result=n+1;
    cin>>ne;
    n++;
    result=n;
    while (ne!='\n'){
        if (ne==b){
            int g;
            g=wife();
            cout<<result<<' '<<g<<endl;
            cin>>ne;
            n++;
            result=n;
        } else {
            return result;
        }
    }
    return result;
}
int main() {
    cin>>b;
    int g;
    g=wife();
    cout<<0<<' '<<g<<endl;
    return 0;
}
