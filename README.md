# Sistema de Control de Ventas de Entradas

Este proyecto implementa un sistema de control de ventas de entradas para el partido de fútbol entre Costa Rica y México, que se llevará a cabo el 5 de noviembre de 2018 en el Estadio Nacional de Costa Rica.

## Descripción

El programa permite a los usuarios ingresar y procesar datos de ventas de entradas, incluyendo número de factura, cédula y nombre del comprador, localidad del asiento y cantidad de entradas compradas. Además, calcula el precio total a pagar, considerando el subtotal y los cargos por servicio. Al finalizar, el programa muestra estadísticas finales de las ventas.

## Funcionalidades

1. **Ingreso de Datos de Venta**
   - Número de factura
   - Cédula del comprador
   - Nombre del comprador
   - Localidad deseada (1- Sol Norte/Sur, 2- Sombra Este/Oeste, 3- Preferencial)
   - Cantidad de entradas (validado para un máximo de 4 entradas por cliente)

2. **Cálculo de Precios**
   - Sol Norte/Sur: 10500 colones por entrada
   - Sombra Este/Oeste: 20500 colones por entrada
   - Preferencial: 25500 colones por entrada
   - Cargo por servicio: 1000 colones adicionales por entrada

3. **Mostrar Información de la Venta**
   - Resumen de los detalles ingresados y calculados para cada venta

4. **Registro y Acumulación de Datos**
   - Lleva un registro de la cantidad de entradas vendidas y el dinero acumulado por cada tipo de localidad

5. **Estadísticas Finales**
   - Cantidad total de entradas vendidas por localidad
   - Dinero acumulado por localidad

## Ejecución

Para compilar y ejecutar el programa, puedes utilizar Dev C++ o cualquier otro entorno de desarrollo que soporte C++. Asegúrate de incluir las librerías necesarias: `<iostream>`, `<stdio.h>`, `<stdlib.h>`, y `<conio.h>`.

## Autor
Creado por [Fabricio Mora Gómez](https://github.com/chicho377).
