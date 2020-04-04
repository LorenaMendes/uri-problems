#include <iostream>
#include <string>
using namespace std;

void join(string mot1, string mot2){
	int tot_length = mot1.length() + mot2.length();
	
	int cont1 = 0, cont2 = 0;
	
	string final;
	for (int i = 0; i < tot_length; ++i){
		if(cont1 >= mot1.length()){
			final += mot2[cont2];
			cont2++;
		} else if(cont2 >= mot2.length()){
			final += mot1[cont1];
			cont1++;
		} else {
			if(i%2 == 0){
				final += mot1[cont1];
				cont1++;
			} else {
				final += mot2[cont2];
				cont2++;
			}
		}
	}
	cout << final << endl;
}

int main(){
	string mot1, mot2;
	int N;

	cin >> N;
	for (int i = 0; i < N; ++i)	{
		cin >> mot1 >> mot2;
		join(mot1, mot2);
	}
}