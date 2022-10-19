#include "Functions.h"
#include <conio.h>
#include <iostream>
using namespace std;
void PrintMenu()
{
	system("cls");
	cout << "1. Add a new note" << endl
		<< "2. Search by company" << endl
		<< "3. Search by owner " << endl
		<< "4. Search by phone number" <<endl
		<< "5. Search by address" <<endl
	    << "6. Search by occupation" <<endl
		<< "7. Show" << endl
	    << "8. Exit" << endl;
}

void CompanySearch(Handbook* hbarr)
{
	string search;
	cout << "Enter your search: " << endl;
	cin >> search;
	hbarr[0].CompanySearch(search,hbarr);
}

void OwnerSearch(Handbook* hbarr)
{
	string search;
	cout << "Enter your search: " << endl;
	cin >> search;
	hbarr[0].OwnerSearch(search, hbarr);
}

void PhoneSearch(Handbook* hbarr)
{
	string search;
	cout << "Enter your search: " << endl;
	cin >> search;
	hbarr[0].PhoneSearch(search, hbarr);
}

void AddressSearch(Handbook* hbarr)
{
	string search;
	cout << "Enter your search: " << endl;
	cin >> search;
	hbarr[0].AddressSearch(search, hbarr);
}

void OccupationSearch(Handbook* hbarr)
{
	string search;
	cout << "Enter your search: " << endl;
	cin >> search;
	hbarr[0].OccupationSearch(search, hbarr);
}

