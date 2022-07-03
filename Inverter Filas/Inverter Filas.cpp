/*Crie uma programa que leia um número indeterminado de valores inteiros não negativos até
que o valor -1 seja lido, armazenando-os em uma fila. Após a leitura dos valores, utilize uma pilha
para inverter a ordem dos valores, ou seja, remova todos os números da fila e insira na pilha.
Remova todos os números da pilha e os apresente em uma única linha separados por um espaço.*/


#include <bits/stdc++.h>

using namespace std;

int main(){
    queue<int> fila;
    stack<int> pilha;
    int entrada, i;
    do{
        cin >> entrada;
        fila.push(entrada);
    }while(entrada!=-1);
    
    while(!fila.empty()){
        entrada = fila.front();
        //cout << entrada << " ";
        if(entrada != -1){
            pilha.push(entrada);
        }
        fila.pop();
    }
    cout << endl;

    while(!pilha.empty()){
        cout << pilha.top() << " ";
        pilha.pop();
    }
}   