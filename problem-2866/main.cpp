#include <iostream>
#include <string>
using namespace std;

void decode(string text){
	string new_text;
	for (int i = 0; i < text.length(); ++i)
		if(text[i] > 96) new_text += text[i];

	string decoded;
	for (int i = new_text.length()-1; i >= 0; --i)
		decoded += new_text[i];

	cout << decoded << endl;
}

int main(){
	int C;
	string text;
	cin >> C;
	for (int i = 0; i < C; ++i){
		cin >> text;
		decode(text);
	}
}