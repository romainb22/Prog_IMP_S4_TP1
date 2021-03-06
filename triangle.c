#include<stdlib.h>
#include<stdio.h>

void draw_line_rec(int i,int j,int k){
  int x,y;
  if(i==k){
    return;
  }
  else{
    for (x=0;x<j+1-i;x++){
      printf(" ");
    }
    for(y=0;y<=i*2;y++){
      printf("*");
    }
    printf("\n");
    draw_line_rec(i+1,j-1,k);
  }
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
  for(a=0;a<atoi(argv[1])*3;a++){
    printf("-");
  }
  //printf("\n");
  //draw_line_rec(0, atoi(argv[1]), atoi(argv[1]));
  return 0;
}
