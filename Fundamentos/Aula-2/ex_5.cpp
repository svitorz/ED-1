#include <iostream>
#include <string> 

using namespace std;

struct Aluno {
  string nome;
  double nota;
};

void cadastrarAluno(Aluno *cadAluno){
  cout << "Insira o nome do aluno:";
  cin >> cadAluno->nome;
  cout << "\nInsira a nota do aluno (0.0 à 100.0):";
  cin >> cadAluno->nota;
}

bool foiAprovado(double nota){
  return nota >= 60.0;
}

void mostrarAluno(Aluno *strAluno){
  cout << "O aluno se chama "  << strAluno->nome;
  cout << "\nE o aluno foi ";
  if(foiAprovado(strAluno->nota)){
    cout << "aprovado";
  }else {
    cout << "reprovado";
  }
}

int main(){
  Aluno strAluno;
  cadastrarAluno(&strAluno);
  mostrarAluno(&strAluno);
  return 0;
}
