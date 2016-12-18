#include<iostream>
using namespace std;

int main () {
int n;
cin>>n;
char niz[n][n],t='*';
int gr=0;
for (int i=gr;i<n-gr;i++)
{
     if(i%2==0)t='*';
    else t=' ';
    for(int k=gr;k<n-gr;k++){
niz[i][k]=t;
niz[k][i]=t;
niz[n-i-1][k]=t;
niz[k][n-i-1]=t;
    }

gr++;
}
for(int i=0;i<n;i++)
{
    for(int k=0;k<n;k++)
    {
        cout<<niz[i][k]<<" ";
    }
    cout<<endl;
}
return 0;}
