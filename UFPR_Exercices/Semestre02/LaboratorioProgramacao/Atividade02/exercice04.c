#include<stdio.h>

int isWhiteSpacedStirng(char* text){
    for(int i = 0; text[i] != '\0'; i++){
        if(text[i] != ' '){
            return 0;
        }
        return 1; // no meu compilador funcionou nessa linha, trocar caso para linha após o loop caso não funcione
    }
}

int main(){
    struct VOWELS {
        char vowel_Upper, vowel_Lower;
        int quantity;
    } vowels[] = {
        {'A', 'a', 0},
        {'E', 'e', 0},
        {'I', 'i', 0},
        {'O', 'o', 0},
        {'U', 'u', 0},
    };
    char text[255];

    printf("Digite seu texto: ");
    fgets(text, sizeof(text), stdin);
    printf("<%d>\n", isWhiteSpacedStirng(text));
    if(isWhiteSpacedStirng(text) || text[0] == '\n'){
        printf("String vazia!");
        return 1;
    }
    for(int i = 0; text[i] != '\0'; i++){
        for(int j = 0; j < sizeof(vowels); j++){
            if(text[i] == vowels[j].vowel_Lower || text[i] == vowels[j].vowel_Upper){
                vowels[j].quantity++;
            }
        }
    }
    printf("Quantidades de vogais:\n\"A\": %d\n\"E\": %d\n\"I\": %d\n\"O\": %d\n\"U\": %d\n",
        vowels[0].quantity,
        vowels[1].quantity,
        vowels[2].quantity,
        vowels[3].quantity,
        vowels[4].quantity
    );
    return 0;
}

// Melhoria: colocar um loop para o print final das quantidades

/*
	04. Faça um programa que conte o número de vogais em uma string fornecida pelo usuário e
	mostre a quantidade de caracteres totais da frase. O programa deve ser capaz de lidar com letras
	maiúsculas e minúsculas. Você pode assumir que a string não terá caracteres especiais. Validar a
	entrada para não aceitar strings vazias.
*/