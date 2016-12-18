#include<iostream>

using namespace std;

int main(){
int n,m,a,b;
cin>>n>>m;
int rjm[n][n];
for (int i=0;i<n;i++){
for(int k=0;k<n;k++){rjm[i][k]=0;}
}
for(int i=0;i<m;i++){
    cin>>a>>b;
    rjm[a][b]=1;
    rjm[b][a]=1;
}



return 0;}
