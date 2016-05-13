#include <iostream>
#include <cstdlib>
#include <string>
#include <conio.h>
#include <algorithm>
#include <functional>
using namespace std;

unsigned long long bin2dec (string binarna)
{
	int dziesietna = strtol(binarna.c_str(),NULL,2);
	return dziesietna;
}

string dec2bin (int dziesietna)
{
	char binarna[255];
	itoa(dziesietna, binarna, 2);
	return (string)binarna; 
}

string dec2oct (int dziesietna)
{
	char osemkowa[255];
	itoa(dziesietna, osemkowa, 8);
	return (string)osemkowa; 
}

string dec2hex (int dziesietna)
{
	char heksadecymalna[255];
	itoa(dziesietna, heksadecymalna, 16);
	return (string)heksadecymalna; 
}

string dec2quest (int dziesietna) // skutek uboczny - konwersja int na string :PPPP
{
	char liczba[255];
	itoa(dziesietna, liczba, 10);
	return (string) liczba; 
}

int main()
{
		int a[8]={1,2,5,7,12,154,56,45};
	sort (a,a+8);
	
	for(int x; x<8; x++)
	{
		cout << a[x]<<endl;
	}

	
	string binarna;
	cout <<"Podaj liczbe binarna: ";cin>>binarna;
	cout <<"bin2dec: "<<bin2dec(binarna)<<endl;
	int dziesietna=bin2dec(binarna);
	
	cout <<"dec2bin: "<<dec2bin(dziesietna)<<endl;
	cout <<"dec2oct: "<<dec2oct(dziesietna)<<endl;
	cout <<"dec2hex: "<<dec2hex(dziesietna)<<endl;
	cout <<"dec2quest: "<<dec2quest(dziesietna)<<endl;
	string liczba="101111111001";

	cout <<"Specjalna: "<<bin2dec(liczba)<<endl;

	string test=dec2quest(dziesietna);
	

	getch();
	return 0;
}
