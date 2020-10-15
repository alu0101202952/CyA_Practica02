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

#include"../include/erathostenes.h"
#include<iostream>
#include<vector>
#include<cstdio>

SieveErathostenes::SieveErathostenes(int const number): value(number){
    // Vector de booleanos de numeros primos
    isPrime = vector<bool>(n, true);
    primes = vector<int>();

    // Marcamos el 0 y el 1 por ser no primos
    isPrime[0] = isPrime[1] = false;
    //noPrimes[0] = 0;
    //noPrimes[1] = 1
    for (int i = 2; i < number; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
            // Condición para seguir buscando primos que no sean los múltiplos de dos
            for (int j = 2; j*i < number; j++) isPrime[i*j] = 0;
        }
    }
}

// Destructor
SieveErathostenes::~SieveErathostenes() {
    primes.clear();
}

// Función Sieve encargada de marcar y trabajar desde variables auxiliares
void SieveErathostenes::Sieve() {
    for (int i = 0; i < primes.size(); i++) {
        int aux = primes[i];
        Remove(aux);
    }
    
}

// Si no son primos la función Remove marca ese punto de la lista como false, o no primo
void SieveErathostenes::Remove(int number) {
    for(int i = aux; i < primes.size(); i++) {
         // marco el numero en un vector como no primo
        isPrime[number] = false;
    }
    DelVector();
}

// Función para eliminar el vector y limpiar
void SieveErathostenes::DelVector {
    for(int i = 0; i < primes.size(); i++) {
        primes.erase(primes.begin());
    }
}

// Función para imprimir el vector por pantalla
std::ostream& SieveErathostenes::PrintVector(std::ostream& = std::cout){
    for(int i = 0; i < primes.size(); i++){
        os << primes[i] << '';
        while(getchar()! = '\n'); //espera a que pulses enter
        os << "\n";
    }
    return os;
}