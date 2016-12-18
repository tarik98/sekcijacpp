#include<iostream>

using namespace std;
bool prost(int i){
    if (i==2||i==3)return true;
    else
for (int k=2;k*k<=i;k++)if (i % k ==0)return false;
return true;

}


int main(){
int n;
cin>>n;
int i=2;
while(n>0){
   if (prost(i)){
    cout<<i<<endl;
    n--;}


    i++;}


return 0;}
