#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include"List.h"
using namespace std;
struct  Firm {
	string name;
	string owner;
	string phone;
	string address;
	string typeOfActivity;
	Firm(string name = "Unknown", string owner = "Unknown", string phone = "Unknown", string address = "Unknown", string typeOfActivity = "Unknown")
		:name(name), owner(owner), phone(phone), address(address), typeOfActivity(typeOfActivity) {}

	friend bool operator==(const Firm&firm,const string& value);
	friend ostream& operator<<(ostream& fout, const Firm& firm);
	friend ofstream& operator<<(ofstream& out, const Firm& firm);
	friend ifstream& operator>>(ifstream& fin, Firm& firm);
};
class Directory{
	List<Firm>firms;
	friend ofstream& operator<<(ofstream& out, const Directory& directory);
	friend ifstream& operator>>(ifstream& in, Directory& directory);
public:

	void AddFirm(string name, string owner, string phone, string address, string typeOfActivity);
	void Show()const;
	
	void SearchByName(string name)const;
	void SearchByOwner(string owner)const;
	void SearchByPhone(string phone)const;
	void SearchByAddress(string address)const;
	void SearchByTypeOfActivity(string typeOfActivity)const;
	
};
