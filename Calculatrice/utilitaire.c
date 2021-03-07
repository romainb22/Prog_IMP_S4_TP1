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

/*
* On affiche la ligne rentrée initialement, formattée
*/
void util_ligne(char** argv, int argc){
  if(argc==3){
    printf("%s(%s) = ",argv[1],argv[2]);
  }
  else{
    printf("%s %s %s = ",argv[1],argv[2],argv[3]);
  }
  return;
}

/*
* On affiche la liste des fonctions disponibles
*/

void util_fonction(char** fct,int fctc){
  int i;
  printf("La fonction que vous avez demandé n'est pas reconnnue.\n");
  printf("Vous avez le choix entre:\n");
  for(i=0;i<fctc;i++){
    printf("  - %s\n", fct[i]);
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

void util_commande(char** fct,int fctc){
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
  for(i=0;i<fctc;i++){
    printf("  - %s\n", fct[i]);
  }
  return;
}
