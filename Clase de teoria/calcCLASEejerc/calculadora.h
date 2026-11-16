//Recomendación, empezar siempre con #pragma once
#pragma once
//En los .h van los encabezados: prototipos de funciones y variables constantes (no cambian
//Variable constante global
const float PI = 3.141592;

//Prototipos: definiciones de funciones
//Prototipo: me define el tipo de dato de retorno, el nombre de la función, el tipo de datos de entrada (parámetros)
//Protitipos: firma o la cedula de identidad de la función. Con el protitipo podemos localizar a la funcion sin necesidad de saber toda su lógica interna.
//Ventaja para el programa: más eficiente buscar por cédula que buscar por todos los datos y logica completa de la función.
//Como hacer documentación de funciones (cuando arrastro el mouse sobre una función salga un comentario)
//LOs comentarios que van justo arriba de la función o prototipo son lo que sale como documentación.

//Calcula el area de una elipse usando los semiejes.
float areaElipse(float a, float b);

//Calcula el volumen de un cilindro usando el radio y la altura.
double volumenCilindro(double r, double h); 
