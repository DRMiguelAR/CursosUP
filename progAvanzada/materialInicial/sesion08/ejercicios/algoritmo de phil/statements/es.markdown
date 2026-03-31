# Los bits de la clase de programación

# Descripción 

En clase de programación, uno de tus compañeros inventó un nuevo algoritmo:
- Inicias con un mapa de bits $A$ de un cierto tamaño y un mapa de bits de tamaño $0$ llamado $S$.
Se repiten los siguientes pasos:
- Si el número de bits en $A$ es impar, el bit de justo enmedio se quita del mapa, y se agrega a la derecha de $S$.  
- Si el número de bits es par, entonces los dos bits de enmedio se comparan. El mayor de ellos (o cualquiera de ellos en caso de empate) se agregan al final de $S$ y se quitan de $A$.
- Si después de algunas repeticiones se queda sin bits $A$, el algoritmo termita. 

Se debe imprimir finalmente la representación decimal de $S$.

# Entrada 

La primera linea contiene un número entero $k<500$ que es el número de casos de prueba. Las siguientes $k$ líneas representan la cadena de bits $A$. 
#Salida

Para cada caso escribe "Caso #x: y", donde x es el número de caso iniciando en 1, y "y" es el resultado del algoritmo, si el resultado es mayor a 1000000007, imprime el residuo entre 1000000007, en vez del número resultante.

# Ejemplo


||input
3
00000
0101101
100
||output
Caso #1: 0
Caso #2: 106
Caso #3: 2



||end
