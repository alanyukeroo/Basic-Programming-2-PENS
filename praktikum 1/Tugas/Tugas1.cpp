#include <iostream>
using namespace std;
float phi = 3.14;

void persegi(float &p, float &t,float& l)
{
	//persegi panjang
	 l = p*t;
	// return;
}

void bujursangkar(float &s, float&sisi,float& l)
{	
	l = s*sisi;
	// return;
	//bujursangkar
}

void segitiga(float& a, float& t,float& l)
{
	//segitiga sama kaki
	 l = (a*t)/2;
	// return;
}

void lingkaran(float& r,float& l)
{
	//lingkaran
	 l = phi * (r*r);
	// return;
}

int main()
{

	float panjang,lebar,luaspersegi,jari,sisi1,sisi2,luaslingkaran,
	luassegitiga,luasbujur,tinggi,alas;
	panjang = 2;
	lebar = 4;
	jari = 4;
	sisi1 = 2;
	sisi2 = 4;
	alas = 4;
	tinggi = 2;
	// luaspersegi = panjang*lebar;
	// luaslingkaran = phi*jari*jari;
	// luassegitiga=alas*tinggi; 
	// luasbujur=sisi1*sisi2;
	cout<<" < Penghitung Luas > "<<endl;
	cout<<"1. Persegi Panjang "<<endl;
	cout<<"2. Bujur Sangkar "<<endl;
	cout<<"3. Segitiga Sama Kaki "<<endl;
	cout<<"4. Lingkarang "<<endl;
	// int x=0;
	persegi(panjang,lebar,luaspersegi);
	segitiga(alas,tinggi,luassegitiga);
	lingkaran(jari,luaslingkaran);
	bujursangkar(sisi1,sisi2,luasbujur);
	cout<<"Luas Persegi : "<<luaspersegi<<endl;
	cout<<"Luas Segitiga : "<<luassegitiga<<endl;
	cout<<"Luas Lingkaran : "<<luaslingkaran<<endl;
	cout<<"Luas Bujur : "<<luasbujur;


	// switch(x)
	// {
	// 	case 1: cout<<"Hasil Luas Persegi Panjang"<<endl;
	// 	case 2: cout<<"Hasil Luas Bujur Sangkar"<<endl;
	// 	case 3: cout<<"Hasil Luas Segitiga Sama Kaki"<<endl;
	// 	case 4: cout<<"Hasil Luas Lingkarang"<<endl;
	// }




}