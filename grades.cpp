#include<iostream>

using namespace std;

int main(){
int n;
cin>>n;
int g;

for (int i=0;i<n;i++){
    cin>>g;
    switch(g){
    case 0 ... 49: cout<<"F\n";
    break;
    case 50 ... 59: cout<<"D\n";
    break;
    case 60 ... 69: cout<<"C\n";
    break;
    case 70 ... 79:cout<<"B\n";
    break;
    case 80 ... 100:cout<<"A\n";
    break;
    default:cout<<"X\n";


    }
}





return 0;}
