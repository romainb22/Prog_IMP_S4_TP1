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

char fct[12][10]={"sin","cos","sinh","cosh","tanh","asin","acos","atan","e","ln","log","sqrt"};

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
  int i,res=x;
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
  printf("bonjour\n");
  printf("%s\n",argv[1]);

  printf("%s\n",fct[0]);
  printf("%d\n",atoi(argv[2]));
  printf("%d\n",argv[2][0]=='0');
  if(strcmp(argv[0],argv[2])==0){
    printf("ya\n");
    a=atoi(argv[1]),b=atoi(argv[4]);
    printf("%d\n",multiplication(a,b));
  }
  else if(atoi(argv[1]) && atoi(argv[3]) || argv[1][0]=='0' && atoi(argv[3]) || argv[3][0]=='0' && atoi(argv[1])){
    printf("yu\n");
    a=atoi(argv[1]),b=atoi(argv[3]);
    switch (argv[2][0]) {
      case '+':
        printf("%d\n",addition(a,b));
        break;
      case '-':
        printf("%d\n",soustraction(a,b));
        break;
      case '/':
        if(b){
          printf("%f\n",division(a,b));
        }
        else{
          printf("Erreur Math !(Division par 0)\n");
        }
        break;
      case '^':
        printf("%d\n",puissance(a,b));
        break;
      default:
        /*WIP*/
        break;
    }
  }
  else if(atoi(argv[2]) || argv[2][0]=='0'){
    printf("yo\n");
    a = atoi(argv[2]);
    printf("%d\n",a);
    if(strcmp(argv[1],fct[0])==0){
      printf("Calcul du sinus en cours\n");
      printf("%f\n",sinus(a));
    }
    else if(!strcmp(argv[1],fct[1])){
      printf("%f\n",cosinus(a));
    }
    else if(!strcmp(argv[1],fct[2])){
      printf("%f\n",sinus_hyperbolique(a));
    }
    else if(!strcmp(argv[1],fct[3])){
      printf("%f\n",cosinus_hyperbolique(a));
    }
    else if(!strcmp(argv[1],fct[4])){
      printf("%f\n",tangente_hyperbolique(a));
    }
    else if(!strcmp(argv[1],fct[5])){
      printf("%f\n",arc_sinus(a));
    }
    else if(!strcmp(argv[1],fct[6])){
      printf("%f\n",arc_cosinus(a));
    }
    else if(!strcmp(argv[1],fct[7])){
      printf("%f\n",arc_tangente(a));
    }
    else if(!strcmp(argv[1],fct[8])){
      printf("%f\n",e(a));
    }
    else if(!strcmp(argv[1],fct[9])){
      printf("%f\n",ln(a));
    }
    else if(!strcmp(argv[1],fct[10])){
      printf("%f\n",log_dix(a));
    }
    else if(!strcmp(argv[1],fct[11])){
      printf("%f\n",racine(a));
    }
    else{
      printf("C'est dommage !\n");
    }
  }
  return 0;
}
