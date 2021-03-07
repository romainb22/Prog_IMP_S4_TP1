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
#include<string.h>
#include "fonction_trigo.h"
#include "fonctions_std.h"
#include "utilitaire.h"

#define NB_FCT 12

char fct[NB_FCT][10]={"sin","cos","sinh","cosh","tanh","asin","acos","atan","e","ln","log","sqrt"};

int addition(int x, int y){
  return x+y;
}

int soustraction(int x, int y){
  return x-y;
}

int multiplication(int x, int y){
  return x*y;
}

float division(int x, int y){
  float a,b;
  a = (float) x, b = (float) y;
  return a/b;
}

int puissance(int x, int y){
  int res=x;
  if(y==0){
    return 1;
  }
  while(y>1){
    y--;
    res=res*x;
  }
  return res;
}

int main(int argc, char* argv[]){
  int a,b;
  if(argc >= 3 || argc <= 5){
    if(argc == 3){
      if(atoi(argv[2]) || argv[2][0]=='0'){
        a = atoi(argv[2]);
        if(!strcmp(argv[1],fct[0]) || !strcmp(argv[1],fct[1]) || !strcmp(argv[1],fct[2]) || !strcmp(argv[1],fct[3]) || !strcmp(argv[1],fct[4]) || !strcmp(argv[1],fct[5]) || !strcmp(argv[1],fct[6]) || !strcmp(argv[1],fct[7])){
          util_ligne(&argv,argc);
          printf("%f\n",appel_trigo(argv[1],a));
        }
        else if(!strcmp(argv[1],fct[8]) || !strcmp(argv[1],fct[9]) || !strcmp(argv[1],fct[10]) || !strcmp(argv[1],fct[11])){
          util_ligne(&argv,argc);
          printf("%f\n",appel_std(argv[1],a));
        }
      }
      else{
        util_fonction(&fct,NB_FCT);
        return 0;
      }
    }
    else{
      if(strcmp(argv[0],argv[2])==0){ /* Quand on met une étoile en paramètre, cela modifie les différents argv */
        a=atoi(argv[1]),b=atoi(argv[4]);
        util_ligne(&argv,argc);
        printf("%d\n",multiplication(a,b));
      }
      else if((atoi(argv[1]) && atoi(argv[3])) || (argv[1][0]=='0' && atoi(argv[3])) || (argv[3][0]=='0' && atoi(argv[1]))){
        a=atoi(argv[1]),b=atoi(argv[3]);
        switch (argv[2][0]) {
          case '+':
            util_ligne(&argv,argc);
            printf("%d\n",addition(a,b));
            break;
          case '-':
            util_ligne(&argv,argc);
            printf("%d\n",soustraction(a,b));
            break;
          case '/':
            if(b){
              util_ligne(&argv,argc);
              printf("%f\n",division(a,b));
            }
            else{
              printf("Erreur Math !(Division par 0)\n");
            }
            break;
          case '^':
            util_ligne(&argv,argc);
            printf("%d\n",puissance(a,b));
            break;
          default:
            util_operation();
            return 0;
            break;
        }
      }
    }
  }
  else{
    util_commande(&fct,NB_FCT);
    return 0;
  }
  return 1;
}
