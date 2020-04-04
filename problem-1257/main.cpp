#include <iostream>
#include <string>
using namespace std;

int calc(string line, int entry){
	int sum = 0;
	for (int i = 0; i < line.length(); ++i)
		sum += (int(line[i])-65 + entry + i);
	return sum;
}

int main(){
	int N, L; // casos, linhas
	int sum; // soma
	string line;
	
	cin >> N;
	for (int i = 0; i < N; ++i){
		sum = 0;
		cin >> L;
		for (int j = 0; j < L; ++j){
			cin >> line;
			sum += calc(line, j);
		}
		cout << sum << endl;
	}
}