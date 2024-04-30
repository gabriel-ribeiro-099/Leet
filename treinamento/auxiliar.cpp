/*std::set é um contêiner na Biblioteca Padrão do C++ (STL) que representa uma coleção de elementos únicos, ordenados de acordo com uma relação de comparação especificada. Aqui estão os principais pontos sobre std::set*/


///BINARY SEARCH INICIO

#include <iostream>
#include <vector>

// Função de pesquisa binária em um vetor ordenado
bool binary_search(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) {
            return true; // Encontrou o elemento
        } else if (arr[mid] < target) {
            left = mid + 1; // Descarta metade inferior
        } else {
            right = mid - 1; // Descarta metade superior
        }
    }
    
    return false; // Elemento não encontrado
}

int main() {
    std::vector<int> arr = {1, 3, 5, 7, 9, 11};
    int target = 5;
    
    if (binary_search(arr, target)) {
        std::cout << "O elemento " << target << " está presente no vetor." << std::endl;
    } else {
        std::cout << "O elemento " << target << " não está presente no vetor." << std::endl;
    }
    
    return 0;
}


// BINARY SEARCH SOBRE VECTOR FIM

//ITERATOR SOBRE MAP INICIO

std::map<int, std::string> myMap = {{1, "um"}, {2, "dois"}, {3, "três"}};

for (const auto& pair : myMap) {
    std::cout << "Chave: " << pair.first << ", Valor: " << pair.second << std::endl;
}

//MAP FIM

//QUICKSORT INICIO

#include <iostream>
#include <vector>

void quicksort(std::vector<int>& arr, int left, int right) {
    if (left >= right) // Condição de parada da recursão
        return;

    int pivot = arr[(left + right) / 2]; // Escolha do pivô (pode ser melhorado)
    int i = left, j = right;

    while (i <= j) {
        while (arr[i] < pivot) i++; // Encontra elemento maior ou igual ao pivô à esquerda
        while (arr[j] > pivot) j--; // Encontra elemento menor ou igual ao pivô à direita
        if (i <= j) { // Troca os elementos encontrados
            std::swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    // Chamadas recursivas para as sub-arrays
    quicksort(arr, left, j);
    quicksort(arr, i, right);
}

int main() {
    std::vector<int> arr = {5, 2, 9, 3, 7, 1, 8, 4, 6};
    int n = arr.size();

    std::cout << "Array antes do QuickSort:" << std::endl;
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    quicksort(arr, 0, n - 1);

    std::cout << "Array depois do QuickSort:" << std::endl;
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

//QUICKSORT FIM

#include <iostream>
#include <vector>

// Função para encontrar o índice do primeiro elemento maior ou igual a um valor
int lower_bound(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size();
    
    while (left < right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    
    return left;
}

// Função para encontrar o índice do primeiro elemento estritamente maior que um valor
int upper_bound(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size();
    
    while (left < right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] <= target) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    
    return left;
}

int main() {
    std::vector<int> arr = {1, 3, 5, 7, 9, 11};
    int target = 6;
    
    int lb_index = lower_bound(arr, target);
    int ub_index = upper_bound(arr, target);
    
    std::cout << "Lower bound index: " << lb_index << std::endl;
    std::cout << "Upper bound index: " << ub_index << std::endl;
    
    return 0;
}
