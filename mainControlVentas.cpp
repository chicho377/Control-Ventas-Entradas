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
        
        // Validar cantidad de entradas
        do {
            printf("Ingrese la cantidad de entradas (maximo 4): ");
            scanf("%d", &cantidadEntradas);
        } while (cantidadEntradas < 1 || cantidadEntradas > MAX_ENTRADAS_POR_CLIENTE);
        
        // Calcular precio y nombre de localidad
        switch (localidad) {
            case 1:
                precioPorEntrada = PRECIO_SOL_NORTE_SUR;
                subtotal = cantidadEntradas * precioPorEntrada;
                cargosServicios = cantidadEntradas * CARGO_POR_SERVICIO;
                totalPagar = subtotal + cargosServicios;
                cantidadSol += cantidadEntradas;
                acumuladoSol += subtotal;
                break;
            case 2:
                precioPorEntrada = PRECIO_SOMBRA_ESTE_OESTE;
                subtotal = cantidadEntradas * precioPorEntrada;
                cargosServicios = cantidadEntradas * CARGO_POR_SERVICIO;
                totalPagar = subtotal + cargosServicios;
                cantidadSombra += cantidadEntradas;
                acumuladoSombra += subtotal;
                break;
            case 3:
                precioPorEntrada = PRECIO_PREFERENCIAL;
                subtotal = cantidadEntradas * precioPorEntrada;
                cargosServicios = cantidadEntradas * CARGO_POR_SERVICIO;
                totalPagar = subtotal + cargosServicios;
                cantidadPreferencial += cantidadEntradas;
                acumuladoPreferencial += subtotal;
                break;
            default:
                printf("Localidad invalida.\n");
                continue;
        }
        
        // Mostrar información de la venta
        printf("\nInformacion de la venta:\n");
        printf("--------------------------------------------------\n");
        printf("Numero de Factura: %d\n", numeroFactura);
        printf("Cedula: %s\n", cedula);
        printf("Nombre comprador: %s", nombre);
        printf("Localidad: ");
         switch (localidad) {
            case 1:
                printf("Sol Norte/Sur\n");
                break;
            case 2:
                printf("Sombra Este/Oeste\n");
                break;
            case 3:
                printf("Preferencial\n");
                break;
        }
        printf("Cantidad de Entradas: %d\n", cantidadEntradas);
        printf("Subtotal: %d colones\n", subtotal);
        printf("Cargos por Servicios: %d colones\n", cargosServicios);
        printf("Total a pagar: %d colones\n", totalPagar);
        printf("--------------------------------------------------\n");
        
        printf("\n¿Desea ingresar otra venta? (1-Si, 0-No): ");
        scanf("%d", &opcion);
    	
	}while(opcion != 0);
	
	// Mostrar estadísticas
    printf("\nEstadisticas finales:\n");
    printf("--------------------------------------------------\n");
    printf("Cantidad Entradas Localidad Sol Norte/Sur: %d\n", cantidadSol);
    if (cantidadSol > 0) {
        printf("Acumulado Dinero Localidad Sol Norte/Sur: %d colones\n", acumuladoSol);
    } else {
        printf("Acumulado Dinero Localidad Sol Norte/Sur: N/A\n");
    }
    printf("--------------------------------------------------\n");
    printf("Cantidad Entradas Localidad Sombra Este/Oeste: %d\n", cantidadSombra);
    if (cantidadSombra > 0) {
        printf("Acumulado Dinero Localidad Sombra Este/Oeste: %d colones\n", acumuladoSombra);
    } else {
        printf("Acumulado Dinero Localidad Sombra Este/Oeste: N/A\n");
    }
    
	return 0;
}
