#include <iostream>
#include <string>
using namespace std;

void complete(string first){
	int c1 = 0, c2 = 0;
	int i = 1;
	// first part
	while(first[i] == 'a') c1++, i++;
	// second part
	while(first[i] != 'a') i++;
	while(first[i] == 'a') c2++, i++;

	cout << "k";
	for (int i = 0; i < c1*c2; ++i) cout << 'a';
}

int main(){
	int C;
	string first;
	cin >> C;
	for (int i = 0; i < C; ++i){
		cin >> first;
		complete(first);
		cout << endl;
	}
}