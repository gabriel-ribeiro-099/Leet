#include <string>
#include <vector>

class Solution {
public:
    bool isValid(std::string s) {
        // Inicialize um vetor para rastrear os caracteres abertos
        std::vector<char> stack;
        
        // Itere sobre cada caractere na string
        for (char c : s) {
            // Se o caractere for um dos caracteres de abertura, empilhe-o
            if (c == '(' || c == '{' || c == '[') {
                stack.push_back(c);
            } else {
                // Se o caractere for um dos caracteres de fechamento
                // verifique se a pilha está vazia ou se o caractere de abertura correspondente está no topo da pilha
                if (stack.empty() || 
                    (c == ')' && stack.back() != '(') || 
                    (c == '}' && stack.back() != '{') || 
                    (c == ']' && stack.back() != '[')) {
                    return false; // Se não corresponder, a sequência é inválida
                }
                stack.pop_back(); // Remova o caractere de abertura correspondente da pilha
            }
        }
        
        // No final, a pilha deve estar vazia para que a sequência seja válida
        return stack.empty();
    }
};
