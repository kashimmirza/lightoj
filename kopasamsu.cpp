#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 int l=0;
 int q;
 int x1,y1,x2,y2,x3,y3;
 while(n--){
        l++;
         cout<<"Case "<<l<<":"<<endl;
    cin>>x1>>y1>>x2>>y2;
    cin>>q;
    while(q--){
        cin>>x3>>y3;
        if(x3>x1&&x3<x2&&y3>y1&&y3<y2){
            cout<<"Yes"<<endl;

        }
        else
            cout<<"No"<<endl;


    }



 }



}
