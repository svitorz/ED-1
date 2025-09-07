#include <iostream>

using namespace std;

struct Produto {
  int codigo, quantidade;
  string nome;
  float preco;
};

int main () {
  int n = 0, idMaiorPreco = 0, idMenorQtd = 0;
  std::cout << "Insira a quantidade de produtos a serem cadastrados:";
  std::cin >> n;
  Produto *produto = new (nothrow) Produto[n];

  std::cout << "\nCadastrando " << n << " produto(s).";
  int maiorPreco = 0, menorQtd = 100000;
  for (int i = 0; i < n; i++) {
    std::cout << "\nInsira o código do produto:";
    std::cin >> produto[i].codigo;
    std::cout << endl;
    std::cout << "Insira o nome do produto:";
    std::cin >> produto[i].nome;
    std::cout << endl;
    std::cout << "Insira a quantidade do produto:";
    std::cin >> produto[i].quantidade;
    if (produto[i].quantidade < menorQtd) 
      idMenorQtd = i;
    std::cout << endl;
    std::cout << "Insira o preço do produto:";
    std::cin >> produto[i].preco;
    if(produto[i].preco > maiorPreco)
      idMaiorPreco = i;
    std::cout << endl;
  }

  std::cout << "\nExibindo produtos cadastrados:\n";
  for (int i = 0; i < n; i++) {
    std::cout << "\nCódigo do produto:";
    std::cout << produto[i].codigo;
    std::cout << endl;
    std::cout << "Nome do produto:";
    std::cout << produto[i].nome;
    std::cout << endl;
    std::cout << "Quantidade do produto:";
    std::cout << produto[i].quantidade;
    std::cout << endl;
    std::cout << "Preço do produto:";
    std::cout << produto[i].preco;
    std::cout << endl;
  }

  std::cout << "\nExibindo produto com maior preço:";
  std::cout << "\nCódigo do produto:";
  std::cout << produto[idMaiorPreco].codigo;
  std::cout << endl;
  std::cout << "Nome do produto:";
  std::cout << produto[idMaiorPreco].nome;
  std::cout << endl;
  std::cout << "Quantidade do produto:";
  std::cout << produto[idMaiorPreco].quantidade;
  std::cout << endl;
  std::cout << "Preço do produto:";
  std::cout << produto[idMaiorPreco].preco;
  std::cout << endl;

  std::cout << "\nExibindo produto com menor quantidade:";
  std::cout << "\nCódigo do produto:";
  std::cout << produto[idMenorQtd].codigo;
  std::cout << endl;
  std::cout << "Nome do produto:";
  std::cout << produto[idMenorQtd].nome;
  std::cout << endl;
  std::cout << "Quantidade do produto:";
  std::cout << produto[idMenorQtd].quantidade;
  std::cout << endl;
  std::cout << "Preço do produto:";
  std::cout << produto[idMenorQtd].preco;
  std::cout << endl;

  delete[] produto;
  return 0;
}
