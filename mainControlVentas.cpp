#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char** argv) {
	
	// Constantes de precios y cargos
    const int PRECIO_SOL_NORTE_SUR = 10500;
    const int PRECIO_SOMBRA_ESTE_OESTE = 20500;
    const int PRECIO_PREFERENCIAL = 25500;
    const int CARGO_POR_SERVICIO = 1000;
    const int MAX_ENTRADAS_POR_CLIENTE = 4;

    // Variables para estadísticas
    int cantidadSol = 0, cantidadSombra = 0, cantidadPreferencial = 0;
    int acumuladoSol = 0, acumuladoSombra = 0, acumuladoPreferencial = 0;

    // Variables para los datos de cada venta
    char cedula[20];
    char nombre[50];
    int numeroFactura, localidad, cantidadEntradas;

    // Variables de cálculo
    int precioPorEntrada, subtotal, cargosServicios, totalPagar;
    
    // Bucle para ingresar ventas
    int opcion;
    do{
    	
    	// Ingresar datos de la venta
        printf("Ingrese el numero de factura: ");
        scanf("%d", &numeroFactura);

        printf("Ingrese la cedula del comprador: ");
        scanf("%s", cedula);

        printf("Ingrese el nombre del comprador: ");
        getchar();  // Consumir el salto de línea pendiente en el buffer
        fgets(nombre, sizeof(nombre), stdin);

        printf("Ingrese la localidad deseada (1- Sol Norte/Sur, 2- Sombra Este/Oeste, 3- Preferencial): ");
        scanf("%d", &localidad);
        
        
        printf("\n¿Desea ingresar otra venta? (1-Si, 0-No): ");
        scanf("%d", &opcion);
    	
	}while(opcion != 0);
    
	return 0;
}
