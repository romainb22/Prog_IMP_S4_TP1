#include<stdlib.h>
#include<stdio.h>

int ackermann(int m, int n){
        if(m==0)
                return n+1;
        else if(n==0)
                return ackermann(m-1,1);
        else
                return ackermann(m-1,ackermann(m,n-1));
}
int main(){
        int m,n;
        printf("Renseignez deux nombres: \n");
        scanf("%d%d",&m,&n);
        pritnf("\n");
        printf("Résulat: %d\n",ackermann(m,n));
        return 0;
}
