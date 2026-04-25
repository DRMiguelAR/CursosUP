#ifndef PERSONA_H // Directiva del preprocesador para evitar múltiples inclusiones
#define PERSONA_H

#include <string>

struct Persona
{
    std::string nombre;
    std::string apellido_materno;
    std::string apellido_paterno;
    int edad;
    double salario;
};

#endif // Fin de la directiva del preprocesador