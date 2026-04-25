#include "persona.h"

#include <algorithm>
#include <cstring>

#define num_personas 10

// Regresa promedio de edades
float promedio_edades(Persona arr[], int n) {
    int suma_edades = 0;
    for (int i = 0; i < n; i++) {
        suma_edades += arr[i].edad;
    }
    return static_cast<float>(suma_edades) / n;
}

// Regresa promedio de salarios
float promedio_salarios(Persona arr[], int n) {
    int suma_salarios = 0;
    for (int i = 0; i < n; i++) {
        suma_salarios += arr[i].salario;
    }
    return static_cast<float>(suma_salarios) / n;
}

// Recibe un entero n y regresa arreglo de las n personas con los salarios más altos
Persona* n_personas_salarios_altos(Persona arr[], int n) {
    std::sort(arr, arr + n, [](const Persona& p1, const Persona& p2) {
        return p1.salario > p2.salario;
    });
    Persona* personas_salarios_mas_altos = new Persona[num_personas];
    std::memcpy(personas_salarios_mas_altos, arr, num_personas * sizeof(Persona));
    return personas_salarios_mas_altos;
}

// Recibe un entero n y regresa arreglo de las n personas más jóvenes
Persona* n_personas_jovenes(Persona arr[], int n) {
    std::sort(arr, arr + n, [](const Persona& p1, const Persona& p2) {
        return p1.edad < p2.edad;
    });
    Persona* personas_mas_jovenes = new Persona[num_personas];
    std::memcpy(personas_mas_jovenes, arr, num_personas * sizeof(Persona));
    return personas_mas_jovenes;
}

// Recibe una letra del abecedario y regresa todas las personas que su primer apellido inicia con esa letra
Persona* personas_apellido_inicial(Persona arr[],  char inicial) {
    int num_personas = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i].apellido_paterno[0] == inicial || arr[i].apellido_materno[0] == inicial) {
            num_personas++;
        }
    }
    Persona* personas_inicial_apellido = new Persona[num_personas];
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i].apellido_paterno[0] == inicial || arr[i].apellido_materno[0] == inicial) {
            personas_inicial_apellido[index] = arr[i];
            index++;
        }
    }
    return personas_inicial_apellido;
}
