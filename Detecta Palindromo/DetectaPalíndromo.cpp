/*Faça um programa que leia uma linha e verifique se ela é um palíndromo. Veja a definição
de palíndromo no dicionário online Priberam: “Palavra, grupo de palavras, verso ou número que se lê
da mesma maneira da esquerda para a direita ou da direita para a esquerda”.*/

#include <bits/stdc++.h>

using namespace std;
//ALGORITMO QUE REMOVE ESPAÇOS DAS FRASES
string removeEspacos(string frase){
    string fraseSEspaco;
    int i;
    for(i=0;i<frase.length();i++){
        if(frase.at(i)!= ' '){
            fraseSEspaco.push_back(frase.at(i));
        }
    }
    return fraseSEspaco;
}
//INVERTE A ORDEM DOS CARACTERES DAS STRINGS
string inverteString(string frase ){
    stack<char> caracteresInvertidos;
    string fraseInvertida;
    int i;
    for(i=0;i<frase.length();i++){
        caracteresInvertidos.push(frase.at(i));
    }
    for(i=0;i<frase.length();i++){
        fraseInvertida.push_back(caracteresInvertidos.top());
        caracteresInvertidos.pop();
    }
    return fraseInvertida;
}

int main(){
    string frase, fraseInvertida;
    int i;
    getline(cin, frase);//'GETLINE' SALVA A STRING COM O CARACTERE ' ', VISTO QUE O COMANDO 'CIN' NÃO POSSUI ESTA FUNÇÃO
    //COMPARA AS FRASES EM ORDEM NORMAL E AO CONTRÁRIO, JÁ COM OS CARACTERES ' ' REMOVIDOS
    if(removeEspacos(frase)==inverteString(removeEspacos(frase))){
        cout<< "Sim" << endl;
    }
    else{
        cout<< "Nao" << endl;
    }
} 
