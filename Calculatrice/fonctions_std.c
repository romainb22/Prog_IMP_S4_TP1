/*
*   Fichier: fonction_std.c
*   Auteur: Bruno ROMAIN
*   Date création : 06-03-2021
*
*   Ce fichier contient les calculs des fonctions "standard" de la calculatrice, en faisant appel à la librairie math.h
*
*/
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include "fonctions_std.h"

/*
* Détermine et appelle la bonne fonction et renvoie son résulat
*/
double appel_std(char* fct, int x){
  switch(strlen(fct)){
    case 1:
      return e(x);
      break;
    case 2:
      return ln(x);
      break;
    case 3:
      return log_dix(x);
      break;
    case 4:
      return racine(x);
      break;
    default:
      /*WIP*/
      return 0;
      break;
  }

}

/*
* Renvoie e exposant x
*/
double e(int x){
  double res = (double) x;
  return exp(res);
}

/*
* Renvoie le logarithme népérien x
*/
double ln(int x){
  double res = (double) x;
  return log(res);
}

/*
* Renvoie le logarithme base 10 de x
*/
double log_dix(int x){
  double res = (double) x;
  return log10(res);
}

/*
* Renvoie la racine carrée de x
*/
double racine(int x){
  double res = (double) x;
  return sqrt(res);
}
