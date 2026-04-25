#include <iostream>
#include "persona.h"
#include "buscar.h"
#include "mate.h"
#include "obtener.h"


#define num_personas 10

int main() {
 
    Persona personas[num_personas];

    // Generar 10 personas
    generar_personas(personas, num_personas);

    // Promedio de edades
    double prom_edad = promedio_edades(personas, num_personas);
    std::cout << "Promedio de edades: " << prom_edad << std::endl;

    // Promedio de salarios
    double prom_salario = promedio_salarios(personas, num_personas);
    std::cout << "Promedio de salarios: " << prom_salario << std::endl;

    // 3 personas con salarios más altos
    const int n_salarios_altos = 3;
    Persona* personas_salarios_altos = n_personas_salarios_altos(personas, n_salarios_altos);
    std::cout << "Personas con los " << n_salarios_altos << " salarios más altos:" << std::endl;
    for (int i = 0; i < n_salarios_altos; i++) {
        std::cout << personas_salarios_altos[i].nombre << " " << personas_salarios_altos[i].apellido_paterno << " " 
                  << personas_salarios_altos[i].apellido_materno << " " << personas_salarios_altos[i].edad << " " 
                  << personas_salarios_altos[i].salario << std::endl;
    }

    // 4 personas más jóvenes
    const int num_jovenes = 4;
    Persona* personas_jovenes = n_personas_jovenes(personas,  num_jovenes);
    std::cout << "Las " << num_jovenes << " personas más jóvenes:" << std::endl;
    for (int i = 0; i < num_jovenes; i++) {
        std::cout << personas_jovenes[i].nombre << " " << personas_jovenes[i].apellido_paterno << " " 
                  << personas_jovenes[i].apellido_materno << " " << personas_jovenes[i].edad << " " 
                  << personas_jovenes[i].salario << std::endl;
    }

    // Personas con apellido inicial A
    char inicial_apellido = 'A';
    Persona* personas_con_apellido_inicial = personas_apellido_inicial(personas, inicial_apellido);
    std::cout << "Personas con apellido que inicia con " << inicial_apellido << ":" << std::endl;
    for (int i = 0; i < num_personas; i++) {
        if (personas_con_apellido_inicial[i].nombre[0] != '\0') {
            std::cout << personas_con_apellido_inicial[i].nombre << " " << personas_con_apellido_inicial[i].apellido_paterno << " " 
                      << personas_con_apellido_inicial[i].apellido_materno << " " << personas_con_apellido_inicial[i].edad << " " 
                      << personas_con_apellido_inicial[i].salario << std::endl;
        }
    }

    return 0;
}
