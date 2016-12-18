#include<iostream>
#include<iomanip>

using namespace std;
int main(){
int n;

cin>>n;
double x,rj=-10000000;
for(int i=0;i<n;i++){
    cin>>x;
if (x>rj){rj=x;}
}
cout<<setprecision(4)<<fixed<<rj<<endl;

return 0;}
