#include <stdio.h>

int main(){
	 int n1, n2;
	 
	 printf("escolha o primeiro numero: ");
	 scanf("%d", &n1);
	 
	 printf("escolha o segundo numero: ");
	 scanf("%d", &n2);
	 
	 if (n1 > n2) {
	 	printf ("\n\nEsse numero e o maior: %d \nE essa e a diferenca: %d", n1, (n1 - n2));
	 }
	 if (n1 < n2){
	 	printf ("\n\nEsse numero e o maior: %d \nE essa e a diferenca: %d", n2, (n2 - n1));
	 }
}
