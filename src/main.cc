/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Computabilidad y Algoritmia
 *
 * @author Andrea Calero Caro
 * @date  2020
 * @brief The sieve-Erathostenes
 *
 * @see https://es.cppreference.com/w/cpp/container/vector
 * @see https://github.com/fsande/CyA-P02-Eratosthenes/blob/master/Eratosthenes.md
 */

#include<iostream>
#include<vector>
#include"erathostenes.cc"

int main(int argc, char *argv[]){
    //argc: nos permite obtener el número de argumentos totales pasados en líneas de comando
    //argv: array con los argumentos pasados por línea de comando
    if(argc != 2){
        std::cout << "ERROR, falta argumentos\n";
        return 1;
    }
    const int nNumber;
    std::vector<int> numVector;
    //o una lista de números
    for(int i = 0; i < nNumber; i++){
        numVector = numVector[i]; //leo el argumento y lo voy guardando en un vector de numeros
        SieveErathostenes (nNumber);
    }
    return 0;
}