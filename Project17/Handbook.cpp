#include "Handbook.h"
#include <conio.h>
#include <string>
#include <iostream>
using namespace std;
int Handbook::count = 0;

Handbook::Handbook() = default;

Handbook::Handbook(string _company, string _owner, string _phone, string _address, string _occupation)
{
	company = _company;
	owner = _owner;
	phone = _phone;
	address = _address;
	occupation = _occupation;
}

void Handbook::CompanySearch(string search, Handbook* hbarr)
{
	bool result = false;
	for (int i = 0; i < count; i++) {
		if (search == hbarr[i].company) {
			cout << "Found" << endl<<endl;
			cout << "Company: " << hbarr[i].company << endl
				<< "Owner: " << hbarr[i].owner << endl
				<< "Phone: " << hbarr[i].phone << endl
				<< "Address: " << hbarr[i].address << endl
				<< "Occupation: " << hbarr[i].occupation << endl;
			result = true;
		}
	}
	if (!result) {
		cout << "Not Found" << endl;
	}
	system("pause");
}

void Handbook::OwnerSearch(string search, Handbook* hbarr)
{
	bool result = false;
	for (int i = 0; i < count; i++) {
		if (search == hbarr[i].owner) {
			cout << "Found" << endl << endl;
			cout << "Company: " << hbarr[i].company << endl
				<< "Owner: " << hbarr[i].owner << endl
				<< "Phone: " << hbarr[i].phone << endl
				<< "Address: " << hbarr[i].address << endl
				<< "Occupation: " << hbarr[i].occupation << endl;
			result = true;
		}
	}
	if (!result) {
		cout << "Not Found" << endl;
	}
	system("pause");
}

void Handbook::PhoneSearch(string search, Handbook* hbarr)
{
	bool result = false;
	for (int i = 0; i < count; i++) {
		if (search == hbarr[i].phone) {
			cout << "Found" << endl << endl;
			cout << "Company: " << hbarr[i].company << endl
				<< "Owner: " << hbarr[i].owner << endl
				<< "Phone: " << hbarr[i].phone << endl
				<< "Address: " << hbarr[i].address << endl
				<< "Occupation: " << hbarr[i].occupation << endl;
			result = true;
		}
	}
	if (!result) {
		cout << "Not Found" << endl;
	}
	system("pause");
}

void Handbook::AddressSearch(string search, Handbook* hbarr)
{
	bool result = false;
	for (int i = 0; i < count; i++) {
		if (search == hbarr[i].address) {
			cout << "Found" << endl << endl;
			cout << "Company: " << hbarr[i].company << endl
				<< "Owner: " << hbarr[i].owner << endl
				<< "Phone: " << hbarr[i].phone << endl
				<< "Address: " << hbarr[i].address << endl
				<< "Occupation: " << hbarr[i].occupation << endl;
			result = true;
		}
	}
	if (!result) {
		cout << "Not Found" << endl;
	}
	system("pause");
}

void Handbook::OccupationSearch(string search, Handbook* hbarr){
	bool result = false;
	for (int i = 0; i < count; i++) {
		if (search == hbarr[i].occupation) {
			cout << "Found" << endl << endl;
			cout << "Company: " << hbarr[i].company << endl
				<< "Owner: " << hbarr[i].owner << endl
				<< "Phone: " << hbarr[i].phone << endl
				<< "Address: " << hbarr[i].address << endl
				<< "Occupation: " << hbarr[i].occupation << endl;
			result = true;
		}
	}
	if (!result) {
		cout << "Not Found" << endl;
	}
	system("pause");
}

void Handbook::Print()
{

	Handbook* temp=new Handbook[count];
	ifstream r("Handbook.txt");
	int i = 0;

		for (int i = 0; i < count; i++) {
			r >> temp[i].company >> temp[i].owner >> temp[i].phone >> temp[i].address >> temp[i].occupation;
			cout << "Company: " << temp[i].company << endl
				<< "Owner: " << temp[i].owner << endl
				<< "Phone: " << temp[i].phone << endl
				<< "Address: " << temp[i].address << endl
				<< "Occupation: " << temp[i].occupation << endl;
			cout << endl;
		}
	r.close();
}

void Handbook::Add()
{
	cout << "Enter company: ";
	cin >> company;
	cout << endl;
	cout << "Enter owner: ";
	cin >> owner;
	cout << endl;
	cout << "Enter phone: ";
	cin >> phone;
	cout << endl;
	cout << "Enter address: ";
	cin >> address;
	cout << endl;
	cout << "Enter occupation: ";
	cin >> occupation;
	cout << endl;
	count++;
}

int Handbook::GetCount()
{
	return count;
}

void Handbook::SaveFile(Handbook* hbarr, int hbsize)
{
	ofstream save("Handbook.txt", ios::trunc);
	for (int i = 0; i < count; i++) {
		save << hbarr[i].company << endl
			<< hbarr[i].owner << endl
			<< hbarr[i].phone<<endl
		    << hbarr[i].address << endl
			<< hbarr[i].occupation << endl;
	}
	save.close();
}
