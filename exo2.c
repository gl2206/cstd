
#include <stdio.h>

#define TOUT 0
#define PAIR 1
#define IMPAIR 2

int estPair( int n ) {
	if (n%2==0) return 1;
	else return 0;
}

void afficheEntiersAvecParite(int n, int parite) {
	int i;
	for(i=0;i<=n;i+=1) {
		switch (parite) {
		case TOUT: printf(" i=%d\n",i); break;
		case PAIR: if (estPair(i)==1) {
		 	printf(" i=%d\n",i);
		 	}
		 	break;
		case IMPAIR: if (estPair(i)==0) {
		 	printf(" i=%d\n",i);
		 	}
		 	break;	
		} // fin switch 	
	} // fin for
} // fin fct


int main() {
	int nb;
	printf("%d\n",254%2);
	printf("nb=?");
	scanf("%d",&nb);
	afficheEntiersAvecParite(nb,PAIR);
	return 0;
}


















