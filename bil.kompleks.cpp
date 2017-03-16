#include <iostream>
#include <cmath>
using namespace std;

typedef struct kompleks
{
	int bil;
	char kar;
};
kompleks a, b, c, d;

void starter()
{
	//variabel a
	a.bil = 2;
	//variabel b
	b.bil = 4;
	b.kar = 'i';
	//variabel c
	c.bil = 3;
	//variabel d
	d.bil = 5;
	d.kar = 'i';
        cout << "a = " << a.bil << endl;
        cout << "b = " << b.bil << b.kar << endl;
        cout << "c = " << c.bil << endl;
        cout << "d = " << d.bil << d.kar << endl;
}
    void penambahan() {
        cout << a.bil + c.bil << " + " << b.bil + d.bil << d.kar << endl;}
    void pengurangan() {
        cout << a.bil - c.bil << " + " << b.bil - d.bil << d.kar << endl;}
    void perkalian() {
        int h1 = (a.bil * c.bil) - (b.bil * d.bil);
        int h2 = (a.bil * d.bil) - (b.bil * c.bil);
        cout << h1 + h2 << d.kar << endl;}
    void pembagian() {
        int e, f, g, h;
        e = ((a.bil * c.bil) + (b.bil * d.bil));
        f = (pow(a.bil, 2) + pow(b.bil, 2));
        g = ((b.bil * c.bil) - (a.bil * d.bil));
        h = (pow(c.bil, 2) + pow(d.bil, 2));
	cout << ((e / f) + (g / h)) << d.kar << endl;}
int main()
{
	starter();
	int pilihan;
	do
	{   cout << "\nOperasi Bilangan Kompleks" << endl;
		cout << "\nPilih Operasi : " << endl;
		cout << "1.Penambahan" << endl;
		cout << "2.Pengurangan" << endl;
		cout << "3.Perkalian" << endl;
		cout << "4.Pembagian" << endl;
		cout << "5.Keluar" << endl;
		cout << "Masukkan pilihan : "; cin >> pilihan;

		if (pilihan == 1)
		{penambahan();}

		else if (pilihan == 2)
		{pengurangan();}

		else if (pilihan == 3)
		{perkalian();}

		else if (pilihan == 4)
		{pembagian();}

		else if (pilihan == 5)
		{break;}

		else
		{cout << "Pilihan hanya 1 - 5" << endl;}
	} while (true);
    return 0;
}
