#include<string.h>
#include<stdio.h>
#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main() {
	list<const char*> station{ "Tokyo","Kanda","Akihabara","Okachimachi","Ueno","Uguisudani","Nippori","Tabata","Komagome","Sugamo","Otuka","Ikebukuro","Sugamo","Otuka","Ikebukuro","Mejiro","Takadanobaba","Shin_ookubo","Shinjuku","Yoyogi","Harajuku","Sibuya","Ebisu","Meguro","Gotanda","Osaki","Shinagawa","Tamati","Hamatucho","Shimbashi","Yurakucho" };
	for (list<const char*>::iterator itr = station.begin(); itr != station.end(); ++itr) {
		cout << *itr << "\n";

	}
	cout << endl;

	for (list<const char*>::iterator itr = station.begin(); itr != station.end(); ++itr) {
		if (strcmp(*itr, "Nippori") == 0) {
			itr = station.insert(itr, "Nishi_nippori");
			++itr;
		}
	}
	for (list<const char*>::iterator itr = station.begin(); itr != station.end(); ++itr) {
		cout << *itr << "\n";

	}
	cout << endl;
	for (list<const char*>::iterator itr = station.begin(); itr != station.end(); ++itr) {
		if (strcmp(*itr, "Tamati") == 0) {
			itr = station.insert(itr,"TakanawaGatoway");
			++itr;
		}
	}
	for (list<const char*>::iterator itr = station.begin(); itr != station.end(); ++itr) {
		cout << *itr << "\n";

	}





	return 0;
}
