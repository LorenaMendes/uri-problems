#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void find_aliteration(string line){
	string word;
	stringstream s(line);
	
	s >> word;
	char cur = tolower(word[0]);
	
	int counter = 0;
	bool rep = false;
	
	while(s >> word){
		if(tolower(word[0]) == cur) rep = true;
		else {
			if(rep == true) counter++, rep = false;
			cur = tolower(word[0]);
		}
	}
	if(rep == true) counter++;
	cout << counter << endl;
}

int main(){
	string line;
	while(getline(cin, line))
		find_aliteration(line);
}