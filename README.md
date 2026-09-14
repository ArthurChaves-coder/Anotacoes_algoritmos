ANOTAÇÕES DE AULA DE ALGORITMOS B

## 27/07/2026

. Git do professor: alexandrezambelan;

. O conteúdo básico da matéria: structs, modulação e ponteiros;

--> Itens do Código em C++:

. #include<iostream>

. using namespace std // para tirar std do codigo

. cout << "frase"; // novo printf

. cin >> variavel; // novo scanf

. cout << "frase" << varivavel << "frase"; // printf mostrando o resultado no meio de uma variavel

. string variavel; // para declarar string

. getline (cin,variavel) // para ler um nome ou uma frase completa, nao apenas uma parte da frase

--> Comandos no terminal:

. Ctrl + L : limpa o terminal

. g++ (nome do arquivo) -o (nome do arquivo).exe // para começar o comando no terminal

. .\programa.exe // para começar a executar

## 3/08/2026

. #include<cstdlib> // biblioteca que serve para poder gerar numeros aleatorios quando preciso

. #include<ctime> // pega o tempo do computador para nao gerar sempre os mesmos numeros aleatorios

. Bom para montar um menu: usar um do-while com switch dentro para as opções

. vetor[i] = rand() % 100 // gera numeros aleatorios ate 100 ( 0 a 99 )

## 10/08/2026

. push.back serve para que um vetor não precise ter declarado o seu tamanho, é um vetor dinamico

. vetor.size: quando usamos um vetor dinâmico, nao sabemos ate onde ele vai, por isso usamos size dentro do laço for na parte do meio

. // #include<string> para guardar textos

. // #include<vector> usado para fazer uma lista dinâmica que cresce conforme adicionamos itens

. typedef struct {
    string placa;
    string cor;
    string horaEntrada;
    string horaSaida;
} Veiculo; --> isso foi usado para toda vez que eu quiser cadastrar um carro em uma garagem, as informações dele estejam guardadas nesse local;
vector<Veiculo> garagem --> cria uma lista dinâmica  

. garagem.push_back({placa, cor, horaEntrada, ""});, dps de digitar os dados, o push back joga essas informações para o vetor garagem, que ficam la guardadas.

.vector<Veiculo>garagem so aceita informações que foram configuradas no struct;

## 17/08/2026

Nessa aula, apenas fizemos apenas exercicios de struct;

## 24/08/2026

ifstream serve para ler arquivos em outro local para utilizar no código

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Abre o arquivo para leitura:
    ifstream arquivo("texto.txt");
    
   string linha;
    // Lê linha por linha até o final do arquivo:
    while (getline(arquivo, linha)) {
        cout << linha << endl;

Fecha o arquivo liberando os recursos:
    arquivo.close();
    return 0;

## 14/09/2026

Sistema computacional:

Programa tem variáveis que utilizam memória principal e arquivos(JSON, CSV, SGBD) que usam memória secundária;

Procurador --> leitor
Procurador --> escritor

Exemplo de procurador de arquivos:

#include <iostream>
#include <fstream>
#include <string>
using namespace std; 

int main() {
    //abrir um arquivo texto e exibir seu conteudo na tela

    //solicita pro usuario nome do arquivo origem
	//char nomeArquivo[200];
    string nomeArquivo;
	cout << "Informe nome do arquivo que quer exibir na tela: ";
	getline(cin,nomeArquivo);
    
    //abrir arquivo para leitura
	//https://www.tutorialspoint.com/cplusplus/cpp_files_streams
	ifstream procuradorArquivo; //tipo de arquivo para leitura
    procuradorArquivo.open(nomeArquivo); 

    if (!procuradorArquivo) {
        cout << "Arquivo não localizado. Programa encerrado." << endl;
        exit(0);
    } 
 
    cin.ignore();
	//le o arquivo capturando as frases
	string linha;
	while (!procuradorArquivo.eof()) { // enquanto o procurador de arquivo nao estiver no fim do arquivo, faça o que esta dentro do while
		getline(procuradorArquivo,linha); //lendo a linha inteira
		// procuradorArquivo >> frase; //lendo palavra por palavra da linha 
		cout << linha << endl;
		//tratar a linha e extrair dados dela
	}

	procuradorArquivo.close();

    return 1;
}










