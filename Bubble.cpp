#include <iostream>
#include <string>
#include <vector>
#include <conio>

using namespace std;

int main(){
	vector<string> dados;
	dados.push_back("Catatau");
	dados.push_back("Ze Comeia");
	dados.push_back("Xunda");
	dados.push_back("Gonzo");
	dados.push_back("Tiao Gaviao");
	dados.push_back("Mutle");
	dados.push_back("Pombo Dudley");
	dados.push_back("Capitao Caverna");
	
	int x, y;
	string temp;
	
	system("cls");
	cout << "Dados originais do vetor" << endl;
	cout << "------------------------" << endl;
	for(x = 0; x < dados.size();x++){
		cout << dados[x] << endl;
	}
	
	for(x = 0; x < dados.size(); x++){
		for(y = x + 1; y < dados.size(); y++){
			if(dados[x] > dados[y]){
				temp = dados[x];
				dados[x] = dados[y];
				dados[y] = temp;
			}
		}
	}
	
		cout << endl << "Dados ordenados do vetor" << endl;
	cout << "-------------------------" << endl;
	for(x=0; x < dados.size(); x++){
		cout << dados[x] << endl;	
	}
	
	getch();
	
}