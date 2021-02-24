#include<stdlib.h>
#include<stdio.h>

void draw_line(int i,int j){
  int x,y;
  for (x=0;x<atoi(j)+1-i;x++){
    printf(" ");
  }
  for(y=0;y<=i*2;y++){
    printf("*");
  }
  printf("\n");
}


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
  for(a=0;a<atoi(argv[1]);a++){
    printf("-");
  }
  printf("\n");
  for(a=0;a<atoi(argv[1]);a++){
    draw_line(a, atoi(argv[1]));
  }
  return 0;
}
