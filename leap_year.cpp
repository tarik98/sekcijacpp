#include<iostream>

using namespace std;

int main(){
int n,g;
cin>>n;
for(int i=0;i<n;i++){

    cin>>g;
    if(g%400==0){
        cout<<1<<endl;
    }else if(g%4==0&&g%100!=0){cout<<1<<endl;}else{cout<<0<<endl;}
}








return 0;}
