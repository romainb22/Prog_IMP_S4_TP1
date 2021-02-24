#include<stdlib.h>
#include<stdio.h>

int main(int argc, char* argv[]){

  int a,b,c;

  if(argc > 2){
    printf("Trop d'arguments !\n");
    return -1;
  }

  /* version itérative */

  for(a=0;a<atoi(argv[1]);a++){
    for(b=0;b<atoi(argv[1])/2;b++){
      printf(" ");
    }
    printf("*\n");
  }
  return 0;
}
