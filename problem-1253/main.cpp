#include <iostream>
#include <string>
using namespace std;

void decode(string word, int D){
	string decoded;
	int dif;
	for (int i = 0; i < word.length(); ++i){
		if(word[i] - D < 65){
			dif = 65 - (word[i] - D);
			decoded += 91 - dif;
		} else decoded += word[i] - D;
	}
	cout << decoded << endl;
}

int main(){
	int N, D;
	string word;
	cin >> N;
	for (int i = 0; i < N; ++i){
		cin >> word;
		cin >> D;
		decode(word, D);		
	}
}