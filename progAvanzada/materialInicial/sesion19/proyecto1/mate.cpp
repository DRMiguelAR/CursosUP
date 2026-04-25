#include "persona.h"

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

