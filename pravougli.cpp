#include<iostream>
using namespace std;
int veci(int x,int y){
if(x>y)return x;
else return y;
}
int manji(int x,int y){
if(x<y)return x;
else return y;
}
int main(){
int a1,b1,c1;
int a,b,c;
bool k=true;
char znak;
while (k==true)
{
do{
    cin>>a1;
}while(a1<=0);

do{
    cin>>b1;
}while(b1<=0);

do{
    cin>>c1;
}while(c1<=0);
c=veci(a1,veci(b1,c1));
a=manji(a1,manji(b1,c1));
b=a1+b1+c1-(a+c);

if(b*b+a*a==c*c)
{
    cout<<"trougao je pravougli";
}
else{
    cout<<"trougao nije pravougli";
}
cin>>znak;
if(znak=='k')k=true;
else k=false;
}
return 0;}
