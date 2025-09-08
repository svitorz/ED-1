#include "./headers/ExemploTAD.h"
#include <iostream>
#include <cmath>

using namespace std;

void recebeRaio(float *ptrRaio){
  do {
    cout << "\nInforme o valor do raio:";
    std::cin >> *ptrRaio;
  } while(*ptrRaio <= 0);
}

void calculaArea(float *ptrRaio, float *ptrArea){
  *ptrArea = (4 * M_PI*pow(*ptrRaio, 2));
}

void calculaVolume(float *ptrRaio, float *ptrVolume){
  *ptrVolume = (4.0*3)*M_PI*pow(*ptrRaio, 3);
}

void exibeResultado(float *ptrResult){
  cout << "O resultado é: " << *ptrResult;
}
