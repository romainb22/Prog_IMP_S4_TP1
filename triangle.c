#include<stdlib.h>
#include<stdio.h>

int main(int argc, char* argv[]){

  int a,b,c=0,d;
  /* version itérative */

  for(a=0;a<atoi(argv[1]);a++){
    for(b=0;b<atoi(argv[1])+1-c;b++){
      printf(" ");
    }
    for(d=0;d<=c*2;d++){
      printf("*");
    }
    printf("\n");
    c++;
  }
  return 0;
}
