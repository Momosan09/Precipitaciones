#include <stdio.h>
#include <conio.h>

int preci,min, acum, cont, cont4,prom;

main(){
	
	printf("\n  Ingrese precipitacion \n  ");
	scanf("%d", &preci);
	
	while(preci != 0 && preci > 0){
	
	cont= cont + 1;
	acum= acum + preci;
	
	if(preci < min || cont == 1){
		min = preci;
	}
	
	if(preci > 4){
		cont4= cont4 + 1;
	}
	
	printf("\n  Ingrese precipitacion \n  ");
	scanf("%d", &preci);
}
		prom= acum / cont;
		
		
	printf("  Total de precipitaciones= %d \n", acum);
	printf("  Numero de precipitaciones= %d \n", cont);	
	printf("  Minimo= %d \n", min);	
	printf("  Mayores a 4 = %d \n", cont4);
	printf("  Promedio = %d \n", prom);
	
}
