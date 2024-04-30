#include <bits/stdc++.h>
#include <iostream>
#include <chrono>
#include <sys/resource.h>

// Inicio função para obter o consumo de memória atual em KB
long getMemoryUsage() {
    long memoryUsage = 0;
    struct rusage usage;
    if (getrusage(RUSAGE_SELF, &usage) == 0) {
        memoryUsage = usage.ru_maxrss; // Em KB
    }
    return memoryUsage;
}
// Final função para obter o consumo de memória atual em KB

int main() {
    const int timeLimitMS = 2000; 
    const long memoryLimitKB = 1048576; 
    auto startTime = std::chrono::steady_clock::now();

    // INICIO CÓDIGO

        

    // FINAL CÓDIGO

    auto endTime = std::chrono::steady_clock::now();
    auto elapsedTime = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime).count();
    long memoryUsage = getMemoryUsage();

    // Verificando o tempo de execução
    if (elapsedTime > timeLimitMS) {
        std::cout << "Tempo de execucao excedido! " << elapsedTime << " ms!\n";
        return 1;
    }

    // Verificando o consumo de memória
    if (memoryUsage > memoryLimitKB) {
        std::cout << "Consumo de memoria excedido! " << memoryUsage << "kb!\n";
        return 1;
    }

    std::cout<<"Tempo: " << elapsedTime << "\n";
    std::cout<<"Memoria: " << memoryUsage << "\n";
    return 0;
}