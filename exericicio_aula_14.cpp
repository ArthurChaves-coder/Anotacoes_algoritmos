exercicio aula 14: 
#include <iostream>
#include <string>
#include <vector>
#define N 5

using namespace std;

int main(){

int i;
vector<string> nome(N);    

for(i=0; i < N; i++){
    cout << "digite um nome: ";
    getline(cin,nome[i]);
}


for(i=0;i < N; i++){
    cout << nome[i] << "\n";
}

return 0;
}
