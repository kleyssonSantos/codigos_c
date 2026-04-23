#include<stdio.h>
#include<locale.h>
#include<math.h>
int main (){
	setlocale(LC_ALL, "");
	float a = 1, b = 2, c = 1;
	float delta, raiz_de_delta, x1, x2;
	
	delta = b * b;
	delta = delta - 4 * a * c;
	
	printf("delta = %d\n", delta);
	
	/* tirar a raiz quadrada*/
	raiz_de_delta = sqrt(delta);
	
	/*fazer -b + raiz delta (x1)*/
	/*fazer -b + raiz delta (x2)*/
	x1 = -b + raiz_de_delta;
	x2 = -b - raiz_de_delta;

	/*dividir por 2a */
	x1 = x1 / (2*a);
	x2 = x2 / (2*a);

/*mostrar os resultados*/
printf("x1 = %f\n", x1);
printf("x2 = %f\n", x2);




	

	
}
