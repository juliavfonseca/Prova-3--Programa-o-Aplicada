#include <iostream>
#include "tComplexos.h"

using namespace std;

int main(){
  tComplexos num1, num2;
  string operacao;

  cout << "Digite o primeiro numero complexo: "<<endl <<"ex:2+3i  digite 2 3 "<<endl; 
  cin >> num1.real >> num1.imag;
  
  cout << "Digite o segundo numero complexo: "<<endl <<"ex:2+3i  digite 2 3 "<<endl; 
  cin >> num2.real >> num2.imag;

  cout <<"Qual operacao gostaria de fazer? + - * / %"<< endl;
  cin >>operacao;

   if(operacao == "+" ){
     soma( num1 , num2  );
     }
     else if(operacao == "-"){
       subtracao( num1 , num2 );
       }
       else if(operacao == "*"){
         multiplicacao( num1 , num2  );
       }
       else if(operacao == "/"){
         divisao( num1 , num2 );
         }
         else if(operacao == "%"){
         modulo( num1 , num2 );
         }
         

}