#include <iostream>
#include <iomanip>
#include <cstring>
#include <stdlib.h>
using namespace std;
struct point{
    int x=0xFFFFFFFF,y=0xFFFFFFFF;
    point *next;
};
int main(){
    point *head,*p,*temp;
    p=new point;
    int n,k=0;
    cin>>n;
    cin>>(*p).x>>(*p).y;
    temp=p;
    p->next=NULL;//等价于(*p).next=
    p=new point;
    (*p).next=temp;
    head=p;
    k=1;
    for (int i=1;i<n;i++){
        p=new point;
        cin>>(*p).x>>(*p).y;
        (*p).next=NULL;
        (*temp).next=p;
        k++;
        point *t=head;
        for (int j=0;j<k-1;j++){
            if((t->next->x<=temp->next->x)&&(t->next->y<=temp->next->y)){
                p=(*t).next;
                (*t).next=(*(*t).next).next;
                if (temp==p)temp=t->next;
                delete p;
                k--;//删除被包括的
            }
            t=t->next;
        }
        t=head;
        for (int j=0;j<k-1;j++){//插入
            if (t->next->x>temp->next->x){
                p=t->next;
                t->next=temp->next;
                temp->next->next=p;
                temp->next=NULL;
                break;
            }
            t=t->next;
        }
        if (temp->next!=NULL){
            temp=temp->next;
        }
    }
    p=head->next;
    cout<<'('<<p->x<<','<<p->y<<')';
    for (int i=1;i<k;i++){
        p=p->next;
        cout<<',';
        cout<<'('<<p->x<<','<<p->y<<')';
    }
    cout<<endl;
    return 0;
}
