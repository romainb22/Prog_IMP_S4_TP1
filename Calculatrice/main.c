/*
*   Fichier: main.c
*   Auteur: Bruno ROMAIN
*   Date création : 06-03-2021
*
*   Ce fichier contient les calculs "de base" de la calculatrice
*
*/
#include<stdlib.h>
#include<stdio.h>

long int addition(int x, int y){
  return x+y;
}

long int soustraction(int x, int y){
  return x-y;
}

long int multiplication(int x, int y){
  return x*y;
}

float division(int x, int y){
  float a,b;
  a = (float) x, b = (float) y;
  return a/b;
}

long int puissance(int x, int y){
  while(y!=0){
    x*=x;
    y--;
  }
  return x;
}

int main(int argc, char* argv[]){
  int a,b;

  if(atoi(argv[1])&&atoi(argv[3])){
    a=atoi(argv[1]),b=atoi(argv[3]);
    switch (argv[2][0]) {
      case '+':
        printf("%ld\n",addition(a,b));
        break;
      case '-':
        printf("%ld\n",soustraction(a,b));
        break;
      case *:
        printf("%ld\n",multiplication(a,b));
        break;
      case '/':
        if(b){
          printf("%f\n",division(a,b));
          break;
        }
        else{
          printf("Erreur Math !(Division par 0)\n");
        }
      case '^':
        printf("%ld\n",puissance(a,b));
        break;
      default:
        /*WIP*/
        break;
    }
  }
  else{
    printf("WIP");
  }

  return 0;
}
