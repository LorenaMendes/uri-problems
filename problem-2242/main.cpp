#include <iostream>
#include <string>
using namespace std;

string is_funny(string riso){
	string rev;
	for (int i = riso.length()-1; i >= 0; --i) rev += riso[i];
	for (int i = 0; i < riso.length(); ++i)
		if(riso[i] != rev[i]) return "N";
	return "S";
}

string remove_cons(string riso){
	string new_riso;
	for (int i = 0; i < riso.length(); ++i)
		if( riso[i] == 97  ||
			riso[i] == 101 ||
			riso[i] == 105 ||
			riso[i] == 111 ||
			riso[i] == 117 ) new_riso += riso[i];
	return new_riso;
}

int main(){
	string riso;
	cin >> riso;

	riso.assign(remove_cons(riso));
	cout << is_funny(riso) << endl;
}