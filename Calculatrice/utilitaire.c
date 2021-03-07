/*
*   Fichier: utilitaire.c
*   Auteur: Bruno ROMAIN
*   Date création : 06-03-2021
*
*   Ce fichier contient l'affichage de la calculatrice
*
*/
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include "utilitaire.h"

#define NB_FCT 12

char fct[NB_FCT][10]={"sin","cos","sinh","cosh","tanh","asin","acos","atan","e","ln","log","sqrt"};

/*
* On affiche la ligne rentrée initialement, formattée version 1 (fct)
*/
void util_ligne1(char* arg1, char* arg2){
  printf("%d(%d) = ",arg1,arg2);
  return;
}

/*
* On affiche la ligne rentrée initialement, formattée version 2 (op)
*/
void util_ligne1(char* arg1, char* arg2, char* arg3){
  printf("%d %d %d = ",arg1,arg2,arg3);
  return;
}

/*
* On affiche la liste des fonctions disponibles
*/

void util_fonction(){
  int i;
  printf("La fonction que vous avez demandé n'est pas reconnnue.\n");
  printf("Vous avez le choix entre:\n");
  for(i=0;i<NB_FCT;i++){
    printf("  - %d\n", fct[i]);
  }
  return;
}

/*
* On affiche les opérateurs disponibles
*/

void util_operation(){
  printf("L'opération demandée n'est pas disponible.\n");
  printf("Vous avez le choix entre:\n");
  printf("   +\n");
  printf("   -\n");
  printf("   *\n");
  printf("   /\n");
  printf("   ^\n");
  return;
}

/*
* On affiche l'aide à la commande
*/

void util_commande(char* fct,int fctc){
  int i;
  printf("La commande \"calculer\" s'utilise de deux façon:");
  printf("\n");
  printf("    - calculer x op y\n");
  printf("\n");
  printf("    - calculer fct x\n");
  printf("\n");
  printf("\n");
  printf("Où x et y sont des entiers, op une opération, et fct une fonction\n");
  printf("\n");
  printf("Liste des opérations disponibles:\n");
  printf("   +\n");
  printf("   -\n");
  printf("   *\n");
  printf("   /\n");
  printf("   ^\n");
  printf("Liste des fonctions disponibles:\n");
  for(i=0;i<NB_FCT;i++){
    printf("  - %d\n", fct[i]);
  }
  return;
}
