#include <cstdlib>
#include <string>
#include <vector>
using namespace std;

string nombre_aleatorio()
{
    // Lista de 50 nombres
    vector<string> popular_names = {"Lucía", "Sofía", "Martina", "María", "Paula", "Julia", "Valeria", "Emma", "Daniela", "Alba","Mateo", "Hugo", "Martín", "Lucas", "Leo", "Adrián", "Álvaro", "Daniel", "Pablo", "David","Guillermo", "Fernando", "Gonzalo", "Rodrigo", "Lope", "Martín", "Sáncho", "Pedro", "Guadalupe", "Martina","Jimena", "Rosa", "Hernán", "Diana", "Gabriela", "Álvaro", "Molly", "Margarita", "Alonso", "Carolina", "Tiana", "Gilberto", "Reyes", "Sierra", "Camila", "Ramón", "Ramiro", "Santa", "Santiago", "Ana"};

    // Obtener un número aleatorio entre 0 y 49
    int random_index = rand() % 50;

    // Devolver el nombre aleatorio correspondiente
    return popular_names[random_index];
}

string apellido_aleatorio()
{
    // Lista de 50 apellidos
    vector<string> popular_surnames = {"García", "Fernández", "González", "Rodríguez", "López", "Martínez", "Sánchez", "Pérez", "Gómez", "Durán","Jiménez", "Ruiz", "Hernández", "Díaz", "Moreno", "Álvarez", "Molina", "Romero", "Alatorre", "Navarro","Torres", "Gutiérrez", "Ortega", "Serrano", "Castro", "Rubio", "Ramírez", "Santos", "Santiago", "Vega","Vargas", "Cruz", "Morales", "Cortés", "Vázquez", "Reyes", "Méndez", "Cabrera", "Blanco", "Gallego","Márquez", "Herrera", "Flores", "Iglesias", "León", "Domínguez", "Núñez", "Ortiz", "Soto", "Silva"};

    // Obtener un número aleatorio entre 0 y 49
    int random_index = rand() % 50;

    // Devolver el apellido aleatorio correspondiente
    return popular_surnames[random_index];
}
