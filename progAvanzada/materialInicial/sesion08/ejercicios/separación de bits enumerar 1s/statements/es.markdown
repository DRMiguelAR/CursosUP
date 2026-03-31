# Separación de bits 2

# Descripción

Se separará un número binario _n_ en dos partes _a_ y _b_ de la siguiente manera: se empezarán a enumerar los _1s_ que aparecen en el número, de derecha a izquierda, empezando a contar desde 1. Los bits enumerados con un número impar, serán _1_ en el número _a_, sin perder su posición de bit dentro del número. Los bits enumerados con un número par, serán _1_ en el número _b_, también sin perder su posición con respecto al número original. 

# Entrada 

Deberá leer enteros menores a $2^{31}-1$ en base 10 hasta que se reciba un _0_, en cuyo caso, se debe terminar el programa.
 
#Salida

Los números _a_ y _b_ en base 10, del número original, separados por espacio. Para cada entrada se debe escribir un nuevo renglón.

# Ejemplo

||input

13
6
7
0

||output

9 4
2 4
5 2

||end
