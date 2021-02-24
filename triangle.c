#include<stdlib.h>
#include<stdio.h>

int main(int argc, char* argv[]){

  int a,b,c=0;

  if(argc > 2){
    printf("Trop d'arguments !\n");
    return -1;
  }

  /* version itérative */

  for(a=0;a<atoi(argv[1]);a++){
    for(b=0;b<atoi(argv[1])/2-c;b++){
      printf(" ");
    }
    printf("*\n");
    c++;
  }
  return 0;
}
