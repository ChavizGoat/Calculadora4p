#include <iostream>
#include <cstdio>

int main() {
    int n;
    float calificaciones[4];
    float suma = 0;
    float promedio;

    // Preguntar cuántas calificaciones se van a promediar
    do {
        printf("Cuantas calificaciones deseas promediar (1 a 4): ");
        scanf("%d", &n);
        if (n < 1 || n > 4) {
            printf("Numero de calificaciones no valido. Debes ingresar un numero entre 1 y 4.\n");
        }
    } while (n < 1 || n > 4);

    // Ingresar y validar las calificaciones
    for (int i = 0; i < n; i++) {
        do {
            printf("Ingresa la calificacion %d (0 a 10): ", i + 1);
            while (scanf("%f", &calificaciones[i]) != 1) {
                printf("Entrada no valida. Ingresa un número.\n");
                // Limpiar el buffer de entrada
                while (getchar() != '\n');
                printf("Ingresa la calificacion %d (0 a 10): ", i + 1);
            }
            if (calificaciones[i] < 0 || calificaciones[i] > 10) {
                printf("Calificación no valida. Debes ingresar un numero entre 0 y 10.\n");
            }
        } while (calificaciones[i] < 0 || calificaciones[i] > 10);

        suma += calificaciones[i];
    }

    // Calcular y mostrar el promedio
    promedio = suma / n;
    printf("El promedio de las calificaciones es: %.2f\n", promedio);
    
    if (promedio < 6.9){
    	printf("Estas reprobado :(");
    	}
		else{
		printf("Estas aprobado :)");
	}

	

    return 0;
}

