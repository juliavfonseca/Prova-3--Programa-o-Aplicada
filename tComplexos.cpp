#include <iostream>
#include <math.h>       
using namespace std;

struct tComplexos{
  float real;
  float imag;
};

void soma(tComplexos num1, tComplexos num2){
  tComplexos som;
  som.real = num1.real + num2.real;
  som.imag = num1.imag + num2.imag;
  if (som.imag >= 0)
  cout << "Soma dos dois numeros complexos = " << som.real << " + " << som.imag << "i";
  else
  cout << "Soma dos dois numeros complexos =" << som.real << " - " << som.imag << "i";
}

void subtracao(tComplexos num1, tComplexos num2){
  tComplexos sub;
  sub.real = num1.real - num2.real;
  sub.imag = num1.imag - num2.imag;
  if (sub.imag >= 0)
  cout << "Subtracao dos dois numeros complexos = " << sub.real << " + " << sub.imag << "i";
  else
  cout << "Subtracao dos dois numeros complexos =" << sub.real << " - " << sub.imag << "i";
}

void multiplicacao(tComplexos num1, tComplexos num2){
  tComplexos mul;
  mul.real = num1.real * num2.real;
  mul.imag = num1.imag * num2.imag;
  if (mul.imag >= 0)
  cout << "Multiplicacao dos dois numeros complexos = " << mul.real << " + " << mul.imag << "i";
  else
  cout << "Multiplicacao dos dois numeros complexos =" << mul.real << " - " << mul.imag << "i";
}

void divisao(tComplexos num1, tComplexos num2){
  tComplexos divi;
  divi.real = num1.real / num2.real;
  divi.imag = num1.imag / num2.imag;
  if (divi.imag >= 0)
  cout << "Divisao dos dois numeros complexos = " << divi.real << " + " << divi.imag << "i";
  else
  cout << "Divisao dos dois numeros complexos = " << divi.real << " + " << divi.imag << "i";
}

void modulo(tComplexos num1, tComplexos num2){
  tComplexos mod;
  mod.real = fmod(num1.real,num2.real);
  mod.imag = fmod(num1.imag, num2.imag);
  if (mod.imag >= 0)
  cout << "Modulo dos dois numeros complexos = " << mod.real << " + " << mod.imag << "i";
}