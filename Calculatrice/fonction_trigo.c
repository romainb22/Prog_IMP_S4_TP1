/*
*   Fichier: fonction_trigo.c
*   Auteur: Bruno ROMAIN
*   Date création : 06-03-2021
*
*   Ce fichier contient les calculs des fonctions trigonométriques de la calculatrice, en faisant appel à la librairie math.h
*
*/
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include "fonction_trigo.h"


/*
* Renvoie le sinus de l'angle x en radians
*/
double sinus(int x){
  double res = (double) x;
  return sin(res);
}

/*
* Renvoie le cosinus de l'angle x en radians
*/
double cosinus(int x){
  double res = (double) x;
  return cos(res);
}

/*
* Renvoie le sinus hyperbolique de x
*/
double sinus_hyperbolique(int x){
  double res = (double) x;
  return sinh(res);
}

/*
* Renvoie le cosinus hyperbolique de x
*/
double cosinus_hyperbolique(int x){
  double res = (double) x;
  return cosh(res);
}

/*
* Renvoie la tangente hyperbolique de x
*/
double tangente_hyperbolique(int x){
  double res = (double) x;
  return tanh(res);
}

/*
* Renvoie l'arc sinus de x en radians
*/
double arc_sinus(int x){
  double res = (double) x;
  return asin(res);
}


/*
* Renvoie l'arc cosinus de x en radians
*/
double arc_cosinus(int x){
  double res = (double) x;
  return acos(res);
}


/*
* Renvoie l'arc tangente de x en radians
*/
double arc_tangente(int x){
  double res = (double) x;
  return atan(res);
}
