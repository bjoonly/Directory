#include"Directory.h"

int main() {
	Directory dr1, dr2;
	cout << "Create and fill:\n";
	dr1.AddFirm("Liam's Shop","Liam Venburg","+12345678","San Mateo","Sale of goods");
	dr1.Show();
	dr1.AddFirm("Super Evil Megacorp", "Kristian Segerstrale", "+97123567", "San Mateo", "Game development");
	dr1.Show();
	cout << "Search by name:\n";
	dr1.SearchByName("Liam's Shop");
	cout << "Search by address: \n";
	dr1.SearchByAddress("San Mateo");
	cout << "Save in file.";
	ofstream fout("Test.txt");
	fout << dr1;
	fout.close();
	cout << "Load from file: \n";
	ifstream fin("Test.txt");
	fin >> dr2;
	dr2.Show();
	fin.close();
	return 0;
}