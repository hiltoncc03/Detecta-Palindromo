/*Neste exercício, a primeira linha da entrada é um valor N. As N linhas seguintes possuem
uma palavra. Crie uma programa que processe cada palavra e a escreva de trás para frente.
*/


#include <bits/stdc++.h>

using namespace std;
//MÉTODO QUE INVERTE A ORDEM DAS LETRAS DA STRING
string inverteString(string palavra ){
    vector<char> caracteres;
    stack<char> caracteresInvertidos;
    string palavraInvertida;
    int i;
    for(i=0;i<palavra.length();i++){
        caracteresInvertidos.push(palavra.at(i));
    }
    for(i=0;i<palavra.length();i++){
        palavraInvertida.push_back(caracteresInvertidos.top());
        caracteresInvertidos.pop();
    }
    return palavraInvertida;
}

int main(){
    queue<string> normal;
    string entrada;
    int i, N;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> entrada;
        normal.push(entrada);
    }
    //INICIA UM LOOP ATÉ QUE A FILA SE ESVAZIE
    while(!normal.empty()){ 
        entrada = normal.front();
        //cout << entrada << " ";
        cout << inverteString(entrada) << endl;
        normal.pop();
    }
    cout << endl;
}

