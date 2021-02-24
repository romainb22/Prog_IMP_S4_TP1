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
        printf("Renseignez m: \n");
        scanf("%d",&m);
        printf("\n");
        printf("Renseignez n: \n");
        scanf("%d",&n);
        printf("\n");
        printf("Résulat: %d\n",ackermann(m,n));
        return 0;
}
