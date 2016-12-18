#include<iostream>

using namespace std;
int main()
{
int n;
cin>>n;
int niz[n];
for(int i=0;i<n;i++)
{
    cin>>niz[i];
}
int suma(0);
for(int i=0;i<n;i++){
    suma+=niz[i];
}
cout<<"\nsuma: "<<suma;
///prost broj je broj koji nema djelilaca (osim kece i samog sebe)
int a;
cin>>a;
bool prost=true;
for(int i=2;i<a;i++)
{
    if(a%i==0)prost=false;
    break;
}
if(prost)cout<<"\nOvo je prost broj";
else cout<<"\nOvo nije prost broj";
///napisi sve proste brojeve u intervalu od 1 do k
int k;
bool p=true;
cin>>k;
for(int i=0;i<k;i++)
{
    p=true;
    for(int j=2;j<i;j++){
        if(i%j==0)p=false;break;
    }
    if(p)cout<<"\nprost:"<<i;
    else cout<<"\nslozen";

}
 return 0;
}
