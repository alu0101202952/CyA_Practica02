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

#ifndef SIEVE_ERATHOSTENESH
#define SIEVE_ERATHOSTENESH

#include<iostream>
#include<vector>


class SieveErathostenes{
    private:
        int value;
        std::vector<bool> isPrime;
        std::vector<int> primes;
    public:
        // Constructor paso de parámetro constante
        SieveErathostenes(const int);
        // Destructor
        ~SieveErathostenes();
    
        void Sieve();
        void Remove(int number);
        void DelVector();
        std::ostream& PrintVector(std::ostream& = std::cout);
};

#endif