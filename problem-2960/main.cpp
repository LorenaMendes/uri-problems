#include <iostream>
#include <string>
#include <map>
#include<iomanip>
using namespace std;

int main(){
	int M, N;
	// string line, x;
	char line[100], x[100];
	// cin >> N;
	scanf("%d\n", &N);
	// cout << N << endl;
	string lang_name = "";
	string words[N];

	for (int i = 0; i < N; ++i){
		// cin >> M;
		scanf("%d\n", &M);
		// cout << M << endl;
		// cin.ignore();
		for (int j = 0; j < M; ++j){
			// getline(cin, line);
			scanf("%[^\n]\n", line);
			if(j == 0) lang_name += toupper(line[0]);
			words[i] += tolower(line[0]);
		}
	}
	cout << "Nome da Linguagem: " << lang_name << endl;
	cout << "Lista de Palavras:" << endl;

	map<char,int> mymap;

	for (int i = 0; i < N; ++i){
		cout << words[i] << endl;

		for (int j = 0; j < words[i].length(); ++j){
			mymap[words[i][j]] = 1;
		}
	}

	int vog = 0, cons = 0, tot = 0;
	char c;

	map<char, int>::iterator it;
	for (it = mymap.begin(); it != mymap.end(); it++){
	    c = it->first;
	    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') vog++;
	    else cons++;
		tot++;
	}

	cout << "Numero de Vogais: " << vog << endl;
	cout << "Numero de Consoantes: " << cons << endl;
	cout << "Numero Total de Letras: " << tot << endl;
	if(cons == 0) cout << "Linguagem Ruim" << endl;
	else {
		float horas = float((tot + vog)) / cons;
		cout << fixed << setprecision(1);
		cout << "Tempo para aprender: " << horas << " horas" << endl;
	}

	return 0;
}