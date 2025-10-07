#include <iostream>

using namespace std;

struct Cadastro {
  string nome;
  int idade;
};

void cadastroAluno(Cadastro *aluno, int num);
void exibeAluno(Cadastro *aluno, int num);

int main(){
 int n = 3;

  Cadastro *aluno = new Cadastro[n];
  cadastroAluno(aluno, n);
  exibeAluno(aluno, n);
  delete[] aluno;

  return 0;
}

void cadastroAluno(Cadastro *aluno, int num){
  cout << "\nCadastro:\n";
  for (int i = 0; i < num; i++) {
    cout << "Nome:";
    cin >> aluno[i].nome;
    
    cout << "\nIdade:";
    cin >> aluno[i].idade;
    cout << endl;
  }
}

void exibeAluno(Cadastro *aluno, int num) {
  cout << "\nExibindo informações\n"; 
  for (int i = 0; i < num; i++) {
    cout << i+1 << " Cadastro:\n"; 
    cout << aluno[i].nome << endl;
    cout << aluno[i].idade << endl;
    cout << endl;
  }
}
