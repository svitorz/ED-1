#include<iostream>
using namespace std;

int main(){
  int ano_atual = 2025;

  struct Aluno {
    string nome, prontuario;
    int ano_nascimento;
  } strAluno;
 
  cout << "Informe o nome do aluno:";
  cin >> strAluno.nome;
 
  cout << endl;
  cout << "Informe o ano de nascimento do aluno:";
  cin >> strAluno.ano_nascimento; 

  cout << endl;
  cout << "Informe o prontuário do aluno:";
  cin >> strAluno.prontuario;e
  
  cout << strAluno.nome << endl;
  cout << strAluno.ano_nascimento << endl;
  cout << strAluno.prontuario << endl;
  cout << "Atualmente, o aluno tem " << ano_atual - strAluno.ano_nascimento << " anos." << endl;
}
