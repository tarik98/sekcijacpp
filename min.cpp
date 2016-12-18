#include<iomanip>
#include<iostream>

using namespace std;

int main(){
int n;
cin>>n;
double rj=2000.00,x;
for (int i=0;i<n;i++){
    cin>>x;
    if(x<rj){rj=x;}
}
cout<<setprecision(2)<<fixed<<rj<<endl;



return 0;
}
