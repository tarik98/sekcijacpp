#include <iostream>
using namespace std;
int main()
{
	int broj_igraca,pogodak, a[30][1];

	do
	{
		cout << "Unesite broj igraca" << endl;
		cin >> broj_igraca;
	} while (broj_igraca <= 1);
	for (int i = 0;i < broj_igraca;i++)
	{
		a[i][0] = 0;
	}
	for (int i = 0;i < broj_igraca;i++)
	{
		cout<<a[i][0]<<" ";
	}
	do
	{
		do
		{
			cout << "Unesite ko je dao gol" << endl;
			cin >> pogodak;
		} while (pogodak >broj_igraca);
				a[pogodak-1][0]++;
				cout << "Igrac broj " << pogodak << " ima " << a[pogodak-1][0] <<" gol"<< endl;
	} while (a[pogodak-1][0] < 10);
	cout << "Igrac broj " << pogodak << " je pobijedio" << endl;

	for (int i = 0;i < broj_igraca;i++)
	{
		cout << "Rezultat je: " <<a[i][0] << endl;
	}


	return 0;
}
