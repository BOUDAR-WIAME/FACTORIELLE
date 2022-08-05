#include <stdio.h>
#include <stdlib.h>
// LA FONCTION :
 void factorielle(int a){
	int i,f=1;
	for (i=1; i<=a; i++) {
        f=f*i;
    }
     printf("\n la factorielle de %d est : %d \n" ,a,f);
}
int main() {
	int n,i,f=1;
        printf("\n saisir un nombre :\n");
	    scanf("%d",&n);
	//BOUCLE :
	for (i=1;i<=n;i++){
         f=f*i;
	}
	     printf("\n la factorielle de %d est : %d \n" ,n,f);
    //APPEL DU FONCTION :
     printf("\n********************************\n");
     factorielle(n);


	return 0;
}
