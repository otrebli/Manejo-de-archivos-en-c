#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *archivo;
    int n,i,j;
    archivo = fopen ("trian1.txt", "r");
    if(archivo == NULL){
        printf("Error al abrir archivo \n");
    }else{
           while(!feof(archivo)){
	      fscanf(archivo, "%d", &n);
	       for(i=0;i<n;i++){
        	  for(j=0;j<=i;j++){
              	     printf("*");
                  }
                  printf("\n");
                }
     	   }
    }
    return 0;
}
