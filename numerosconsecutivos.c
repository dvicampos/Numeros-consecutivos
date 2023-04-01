#include <stdio.h>

int main() {
	int a, b, c, num1, num2; //vaiables necesarias para arrancar el programa y asi se pueda hacer entrada de datos y guardar, que le mencionare para que serviran
	

	do //comienza sentencia do while 
	{
	
	printf ("\nIntroduzca datos consecutivos por favor\n");//se piden los datos para poder comenzar el programa 
	printf ("\nIntroduzca el primer numero que desee: ");
	scanf ("%d", &a);
	printf ("\nIntroduzca un segundo numero que desee: ");
	scanf ("%d", &b);
	printf ("\nIntroduzca un tercer numero que desee: ");
	scanf ("%d", &c);
	num1=a+1; //lo que hice fue hacer que la variable num1 sea igual al valor de a, parq que despues lo pueda usar como una condicion para que el programa termine 
	num2=b+1; //aqui hice lo mismo que en el anterior pero con num2 y sumandole un uno a b para que el valor de c sea consecutivo y sino es asi se repite el programa 
	if (b!=num1 || c!=num2){ //sentencia if para que si no son numeros consecutivos se reproduzca un mensaje de error 
		
		printf ("\nDatos errones, intenta de nuevo\n"); // mensaje de error
	} //cierre de if
	
	} //cierre de do while 
	while (b!=num1 || c!=num2); //condicion para que se repita mientras b sea diferente de num1 y c diferente de num2 
	
	if (b==num1 || c==num2){ //sentencia if para que si se cumple el valor de que sean consecutivos muestre un mensaje de agradecimiento
		printf ("\nGRACIAS\n"); //mensaje de agradecimiento
	}
	
	return 0;
}
