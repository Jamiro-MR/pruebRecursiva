//Problema secuencia geometrica

#include<stdio.h>

int problema2(int dom){
	if(dom == 0){
		return 0;
	}else if(dom == 1){
		return 5;
	}else{
		return (problema2(dom-1) * 3);
	}
}

int main(){
	int dominio = 0;

	printf("¿Hasta que rango desea la sucesion? ");
	scanf("%d", &dominio);

	for(int i = 1; i <= dominio; i++){
		printf("Dominio = %d\n", i);
		printf("Rango = %d\n", problema2(i));
	}
	printf("\n");
}

//by RobertoJY