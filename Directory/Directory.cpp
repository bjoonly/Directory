#include "Directory.h"


ofstream& operator<<(ofstream& out, const Firm &firm) {
    
    out <<""<< firm.name<<endl;
    out <<"" << firm.owner << endl;
    out <<"" << firm.phone<<endl;
    out <<"" << firm.address << endl;
    out << "" << firm.typeOfActivity;
    return out;
}

bool operator==(const Firm& firm, const string& value){
    return (firm.name == value || firm.owner == value || firm.phone == value || firm.address == value || firm.typeOfActivity == value);
}

ostream& operator<<(ostream& out, const Firm& firm){
    out << "Name: "<<firm.name << endl;
    out << "Owner: "<<firm.owner << endl;
    out <<"Phone: "<< firm.phone << endl;
    out <<"Address: "<< firm.address << endl;
    out <<"Type of actitvity: "<<firm.typeOfActivity << endl;
    return out;
}

ifstream& operator>>(ifstream& in, Firm& firm){   
    getline(in, firm.name);
    getline(in, firm.owner);
    getline(in, firm.phone);
    getline(in, firm.address);
    getline(in, firm.typeOfActivity);
    return in;
}

ofstream& operator<<(ofstream& out, const Directory& directory){
    out << directory.firms;
    return out;
}

ifstream& operator>>(ifstream& in, Directory& directory){
    in >> directory.firms;
    return in;
}

void Directory::AddFirm(string name, string owner, string phone, string address, string typeOfActivity){
    firms.AddToTail(Firm(name, owner, phone, address, typeOfActivity));
}
void Directory::Show() const{
    firms.Show();
}

void Directory::SearchByName(string name) const{
    if (!firms.SearchValue(name))
        cout << "Firm with enetered name not found.\n";
}

void Directory::SearchByOwner(string owner) const{
    if (!firms.SearchValue(owner))
        cout << "Firm with enetered owner not found.\n";
}

void Directory::SearchByPhone(string phone) const{
    if (!firms.SearchValue(phone))
        cout << "Firm with enetered phone not found.\n";
}

void Directory::SearchByAddress(string address) const{
    if (!firms.SearchValue(address))
        cout << "Firm with enetered address not found.\n";
}

void Directory::SearchByTypeOfActivity(string typeOfActivity) const{
    if (!firms.SearchValue(typeOfActivity))
        cout << "Firm with enetered type of activity not found.\n";
}

