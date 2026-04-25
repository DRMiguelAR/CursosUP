#include "auxiliar.h"
#include "persona.h"
using namespace std;

Persona generar_persona() {
    Persona p;
    p.nombre = nombre_aleatorio();
    p.apellido_paterno = apellido_aleatorio();
    p.apellido_materno = apellido_aleatorio();
    p.edad = rand() % 43 + 18;
    p.salario = rand() % 73001 + 12000;
    return p;
}

void generar_personas(Persona *personas, int n) {
    srand(50771708);
    for (int i = 0; i < n; i++) {
        personas[i] = generar_persona();
    }
}
