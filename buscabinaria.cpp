#include <iostream>
using namespace std;

int main(){
   //             0 1 2 3 4 5  6  7  8  9
   int vetor[] = {1,4,6,8,9,10,15,16,18,20};
   int valor = 18;

   // 1. Saber o espaço de busca
   // 2. Espaço ordenado

   // Definir o espaço de busca
   int esquerda = 0;
   int direita = 9;
   // Busca enquanto o espaço de busca tem mais de um
   // elemento
   while(esquerda < direita){
      cout << "Valores " << esquerda << " " << direita << "\n";
      int meio = (esquerda+direita)/2;

      if( vetor[meio]>=valor ){
         direita = meio;
      }else{
         esquerda = meio+1;
      }
   }

   if( vetor[esquerda]==valor ){
      cout << "Dentro\n";
   }else{
      cout << "Fora\n";
   }
}
