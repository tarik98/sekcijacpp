#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Koliki niz zelite: ";
cin>>n;
int niz[n];
int t;

 for(int i=0;i<n;i++)
 {
     cout<<"Unesite "<<i+1<<". clan : ";
     cin>>niz[i];///niz[0]
 }

for (int k=0;k<n;k++){
for (int i=0;i<n-1;i++)
    {
      if (niz[i]<niz[i+1]){
        t=niz[i+1];
        niz[i+1]=niz[i];
        niz[i]=t;
        }
    }}
 for(int i=0;i<n;i++)
 {
     cout<<"\n"<<i+1<<". clan : "<<niz[i];

 }
return 0;}
