#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define MAX_strings 8
#define MAX_TAM_STRING 20


int main(){
	/*
	//forma 1
	char dados[MAX_strings][MAX_TAM_STRING];
	
	dados[0] = "catatau";
	dados[1] = "Ze Comeia";
	*/
	//forma 2
	
	char dados[MAX_strings][MAX_TAM_STRING] = {
		"Catatau",
		"Ze comeia",
		"Xunda",
		"Gonzo",
		"Tiao Gaviao",
		"Mutley",
		"Pombo Dudley",
		"Capitao Cavena"
	};
	int x, y;
	char temp[MAX_TAM_STRING];
	
	system("cls");
	printf("Dados originais do vetor\n");
	printf("------------------------\n");
	for(x = 0; x < MAX_TAM_STRING;x++){
		printf(" %s \n",dados[x]);
	}
	
	//bubble sort
	for(x=0;x<MAX_strings;x++){
		for(y = x + 1;y<MAX_strings; y++){
			if(strcmp(dados[x], dados[y]) > 0){
				strcpy(temp, dados[x]);
				strcpy(dados[x], dados[y]);
				strcpy(dados[y], temp);
			}
		}
	}
	
	printf("Dados ordenados do vetor\n");
	printf("------------------------\n");
	for(x = 0; x < MAX_TAM_STRING;x++){
		printf(" %s \n",dados[x]);
	}
	
	
	getch();
	return 0;
}