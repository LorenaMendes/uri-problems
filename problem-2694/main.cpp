#include <iostream>
#include <string>
using namespace std;

int extract(string line){
	string num;
	int sum = 0;
	for (int i = 0; i < line.length(); ++i){
		if(line[i] > 47 && line[i] < 58){
			num += line[i];
		} else {
			if(num != ""){
				sum += stoi(num);
				num = "";
			}
		}
	}
	if(num != ""){
		sum += stoi(num);
		num = "";
	}
	return sum;
}

int main(){
	int N, sum;
	string line;
	
	cin >> N;
	for (int i = 0; i < N; ++i){
		cin >> line;
		sum = extract(line);
		cout << sum << endl;
	}
}	