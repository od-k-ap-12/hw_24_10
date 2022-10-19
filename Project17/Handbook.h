#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Handbook
{
	string company;
	string owner;
	string phone;
	string address;
	string occupation;
	static int count;
public:
	Handbook();
	Handbook(string _company, string _owner, string _phone, string _address, string _occupation);
	void CompanySearch(string search, Handbook* hbarr);
	void OwnerSearch(string search, Handbook* hbarr);
	void PhoneSearch(string search, Handbook* hbarr);
	void AddressSearch(string search, Handbook* hbarr);
	void OccupationSearch(string search, Handbook* hbarr);
	void Print();
	void Add();
	int GetCount();
	void SaveFile(Handbook* hbarr, int hbsize);
};

