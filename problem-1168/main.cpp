#include <iostream>
#include <string>
using namespace std;

void calculate(string line){
	int num;
	int counter = 0;
	for (int i = 0; i < line.length(); ++i){
		num = int(line[i]) - 48;
		switch(num){
			case 1:
				counter += 2;
				break;
			case 2:
				counter += 5;
				break;
			case 3:
				counter += 5;
				break;
			case 4:
				counter += 4;
				break;
			case 5:
				counter += 5;
				break;
			case 6:
				counter += 6;
				break;
			case 7:
				counter += 3;
				break;
			case 8:
				counter += 7;
				break;
			case 9:
				counter += 6;
				break;
			case 0:
				counter += 6;
				break;
		}
	}
	cout << counter << " leds" << endl;
}

int main(){
	string line;
	
	int C;
	cin >> C;
	for (int i = 0; i < C; ++i){
		cin >> line;
		calculate(line);
	}
}