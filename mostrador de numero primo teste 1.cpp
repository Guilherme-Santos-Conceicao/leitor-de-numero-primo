#include <stdio.h>

int x;
int cont=0;
int main(void) {
  printf("Digite um numero \n");
  scanf("%d",&x);
  for (int i = 1;i<=x;i++){
    if(x%i==0){
      cont++;
    }
  }  
  if (cont==2){
    printf("O n�mero %d � primo \n", x);
  }else{
    printf("O n�mero %d n�o � primo \n", x);
  }
  return 0;
}
