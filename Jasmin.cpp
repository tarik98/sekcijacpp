#include<iostream>
using namespace std;
int main(){
cout<<"Unesite n za n*n matricu: ";
int n;
cin>>n;
///deklaracija dvodimenzionalnog niza n*n niza
int niz[n][n];
///unos niza
cout<<"Unesi 2D niz "<<n<<" * "<<n<<endl;
for (int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
        {
        cin>>niz[i][j];
        ///i je broj reda,j je broj kolone
        ///prvo se proðu sve kolone jednog reda pa se prelazi u sljedeci red
        }
}

///ispis 2 D niza
for (int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
        {
       cout<<niz[i][j];
        }
cout<<endl;///kad ova iznad for petlja zavrsi ispis svih kolona jednog reda onda ide prebacivanje u novi red-->estetika
}
int suma=0;
///suma cijelog 2D niza ide ovako
for (int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
        {
        suma=suma+niz[i][j];
        }
}
cout<<"suma: "<<suma<<endl;
///suma redova ,tj. niz suma --> koliko redova = toliko suma
int sumaredova[n];
///ovo je niz suma za svaki red po jedna.Trebamo reci da su sve sume na pocetku nule kroz jednu for petlju
for (int i=0;i<n;i++){sumaredova[i]=0;}
///sabiranje
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        sumaredova[i]+=niz[i][j];///ovo plus jednako ima znacenje kao i s=s+n;ako ne kontas pitaj
    }
}
///ispsis suma
cout<<"sume redova redom: "<<endl;
for(int i=0;i<n;i++){
    cout<<sumaredova[i]<<endl;
}
///najveca suma medju sumama redova koje smo prethodno ispisali se odreðuje na sljedeci nacin
int naj=sumaredova[0];///kazemo da je najveca prva ,pa idemo na provjeru
for(int i=1;i<n;i++)
{
    if(sumaredova[i]>naj ){naj=sumaredova[i];}
}
cout<<"najveca suma :"<<naj;
///suma na dijagonali
int sd=0;
for (int i=0;i<n;i++)
{
    sd+=niz[i][i];///suma na dijagonali je kao da sabiramo one clanove koji imaju iste indekse
}
cout<<"\nSuma na dijagonali: "<<sd;

///suma na kontra dijagonali
int ksd=0;
for(int i=0;i<n;i++)
{
    ksd+=niz[i][n-i-1];///u matrici 4*4 npr zadnja kolona je 3 tako da je n-i-1=3;provjeri;n=4;i=0;tako da je 4-0-1=3

}
cout<<"\nSuma na kontradijagonali: "<<ksd;
///a*b niz dvodimenzionalni
cout<<"\nUnesi dimenzije niza: ";
int a,b;
cin>>a>>b;
int druginiz[a][b];
///unos
cout<<"\nUnesi niz: "<<endl;
for(int i=0;i<a;i++)
{
    for(int j=0;j<b;j++)
    {
        cin>>druginiz[i][j];
    }
}
///ispis
for(int i=0;i<a;i++)
{
    for(int j=0;j<b;j++)
    {
        cout<<druginiz[i][j];
    }
cout<<endl;
}
///suma redova
int drugasuma[a];
for(int i=0;i<a;i++)
{
    drugasuma[i]=0;
}
for(int i=0;i<a;i++)
{
    for(int j=0;j<b;j++)
    {
        drugasuma[i]+=druginiz[i][j];
    }
}
cout<<"suma za svaki red\n";
for(int i=0;i<a;i++)
{
    cout<<drugasuma[i]<<endl;
}



return 0;}
