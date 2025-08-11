/**
 *  Programa que recebe nome, nota válida (0.0 e 100.0) e nome da disciplina. Faça a
 * verificação se o aluno passou ou não. Sabe-se que nota >=60 ele está aprovado e
 * caso contrário está reprovado.
 * */
#include<iostream>
#include<string>

using namespace std;

int main(){
  double nota, *ptrNota;
  string nome, *ptrNome;
  ptrNota = &nota;
  ptrNome = &nome;
  
  cout << "Insira um nome:";
  cin >> *ptrNome;
  cout << "\nInsira a nota (0.0 à 100.0):";
  cin >> *ptrNota;

  if(nota >= 60){
    cout << *ptrNome << " está aprovado";
  } else {
   cout << *ptrNome << " está reprovado";
  }

  return 0;
}
