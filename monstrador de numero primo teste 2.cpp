#include<stdio.h>

int x;

int main(){
	printf("Digite o numero:\n");
	scanf("%d", &x);
	for(int i=1; i <=x ; i++){
		int cont = 0 ;
		for(int p = 1 ; p <= i ; ++p){
			if(i % p == 0){
			 cont++;
			}
		}
			 if(cont == 2){
			 	printf("%d e numero primo.\n", i );
			}
		}
	return 0;
	}



