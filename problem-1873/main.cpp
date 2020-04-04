#include <iostream>
#include <string>
using namespace std;

void compare(string e1, string e2){
	for (int i = 0; i < e1.length(); ++i) e1[i] = tolower(e1[i]);
	for (int i = 0; i < e2.length(); ++i) e2[i] = tolower(e2[i]);

	if(!e1.compare(e2)) cout << "empate" << endl;
	else{
		if(!e1.compare("pedra")){
			if(!e2.compare("papel") || !e2.compare("spock")) cout << "sheldon" << endl;
			if(!e2.compare("tesoura") || !e2.compare("lagarto")) cout << "rajesh" << endl;
		} else if(!e1.compare("papel")){
			if(!e2.compare("tesoura") || !e2.compare("lagarto")) cout << "sheldon" << endl;
			if(!e2.compare("pedra") || !e2.compare("spock")) cout << "rajesh" << endl;
		} else if(!e1.compare("tesoura")){
			if(!e2.compare("pedra") || !e2.compare("spock")) cout << "sheldon" << endl;
			if(!e2.compare("papel") || !e2.compare("lagarto")) cout << "rajesh" << endl;
		} else if(!e1.compare("lagarto")){
			if(!e2.compare("tesoura") || !e2.compare("pedra")) cout << "sheldon" << endl;
			if(!e2.compare("papel") || !e2.compare("spock")) cout << "rajesh" << endl;
		} else if(!e1.compare("spock")){
			if(!e2.compare("papel") || !e2.compare("lagarto")) cout << "sheldon" << endl;
			if(!e2.compare("pedra") || !e2.compare("tesoura")) cout << "rajesh" << endl;
		}
	}
}

int main(){
	int C;
	cin >> C;
	string e1, e2;
	for (int i = 0; i < C; ++i){
		cin >> e1 >> e2;
		compare(e1, e2);
	}

}