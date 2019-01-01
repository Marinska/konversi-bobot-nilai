#include <iostream> //Nama Umar Ibnu ZM
using namespace std; //NIM 311810909
void logika()
{
	char a={100};
	char b={80};
	char c={50};
	char d={30};
	char e={10};
	int nilai;
	cout<<"Selamat datang\nSilahkan masukan nilai anda : ";
	cin>>nilai;
	if (nilai==a)
	cout<<"Nilai anda A";
	else if(nilai==b)
	cout<<"Nilai anda B";
	else if(nilai==c)
	cout<<"Nilai anda C";
	else if(nilai==d)
	cout<<"nilai anda D";
	else
	cout<<"Nilai anda E";
}

int main()
{
	logika();
}
