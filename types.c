#include<stdlib.h>
#include<stdio.h>


int main(){
  int i=2;
  int x;
  x=5/i;
  printf("Valeur de x: %d\n",x);
}

/* x=5.0/i      ->       Valeur de x: 2.500000 */

/* x=5./i      ->       Valeur de x: 2.500000 */

/* x=5/(float)i      ->       Valeur de x: 2.500000 */

/* x=(float)5./i      ->       Valeur de x: 2.500000 */

/* %d       ->      warning à la compilation : le %d attend un entier, mais reçoit un double. Le calcul se fait, mais est complètement faux.
    Pour éviter cette erreur, il faudrait déclarer x en tant qu'entier */
