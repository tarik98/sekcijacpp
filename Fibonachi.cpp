#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;///Unijeti broj clanova niza
    int a[n];///deklaracija niza od n clanova
    for (int i=0; i<n; i++)
    {
        cin>>a[i];///unos clanova niza
    }
    ///trebamo sad svaki clan ispitati da li pripada fibonacijevom nizu
    int x1,x2,x3;///deklaracija tri varijable potrebne za generisanje Fibonacijevog niza
    int policajac=0;///ovaj prati da li broj pripada F nizu i trenutno misli da ne pripada
    for(int i=0; i<n; i++)
    {
        x1=1;
        x2=2;
        ///posto provjeravamo vise brojeva trebamo reci policajcu prije provjere svaki put da taj broj ne pripada F nizu
        policajac=0;
        ///pravimo provjeru za jedan broj a[i]
        ///      tj. trenutni clan ovog niza
        while(a[i]>=x1)///ova petlja se izvrsava sve dok nasa prva varijabla ne prekoraci nas broj tj. dok ne bude veca od broja koji provjeravamo
        {
            x3=x1+x2;///zbir prethodna dva daje sljedeci
            ///provjerimo da li je nas broj jednak x1
            if (a[i]==x1)
            {
                ///ako je jednak onda pripada F nizu i kazemo policajcu da pripada
                ///ako ne pripada ,misljenje policajca se nece promijeniti
                policajac=1;
            }
            x1=x2;
            x2=x3;///pomjeramo varijable za jedno mjesto
        }
        ///zavrsili smo provjeru ovog broja.ako pripada ,policajac ce reci 1 i ispisat.u suprotnom ce reci 0
        if (policajac==1){cout<<a[i]<<endl;}else{cout<<"Ne pripada\n";}
    }
    return 0;
}
