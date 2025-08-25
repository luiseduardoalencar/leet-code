#include <iostream>
#include <vector>
#include <numeric> // Para std::iota

// Constantes baseadas nos limites do problema
const int MAX_N = 3501;
// O 3500º primo é 32441. Um limite de 33000 é seguro.
const int MAX_PRIME_LIMIT = 33000;

// Vetor global para armazenar os primos pré-calculados
std::vector<int> primes;

/**
 * @brief Gera números primos até MAX_PRIME_LIMIT usando o Crivo de Eratóstenes.
 */
void sieve() {
    std::vector<bool> is_prime(MAX_PRIME_LIMIT, true);
    is_prime[0] = is_prime[1] = false;
    for (int p = 2; p < MAX_PRIME_LIMIT; ++p) {
        if (is_prime[p]) {
            primes.push_back(p);
            for (int i = p * p; i < MAX_PRIME_LIMIT; i += p) {
                is_prime[i] = false;
            }
        }
    }
}

/**
 * @brief Resolve o problema do primo de Josephus para n pessoas.
 * @param n O número de pessoas no círculo.
 * @return A posição da pessoa sobrevivente.
 */
int solve_josephus_prime(int n) {
    if (n == 1) {
        return 1;
    }

    // Cria o círculo de pessoas de 1 a n
    std::vector<int> circle(n);
    std::iota(circle.begin(), circle.end(), 1); // Preenche o vetor com 1, 2, ..., n

    int current_pos = 0; // Posição inicial (índice 0)

    // Realiza n-1 eliminações
    for (int i = 0; i < n - 1; ++i) {
        int prime_step = primes[i];
        int current_circle_size = circle.size();

        // Calcula o índice do elemento a ser removido
        // A contagem começa da posição atual, por isso o -1
        int pos_to_remove = (current_pos + prime_step - 1) % current_circle_size;

        // Remove a pessoa do círculo
        circle.erase(circle.begin() + pos_to_remove);

        // A nova posição de início da contagem é o local da remoção.
        // Se a pessoa removida era a última da lista, a contagem recomeça do 0.
        if (circle.empty()) {
             // Isso não deve acontecer dentro do loop, mas é uma verificação segura
            break;
        }
        current_pos = pos_to_remove % circle.size();
    }

    // O único elemento restante é o sobrevivente
    return circle[0];
}

int main() {
    // Otimiza a entrada/saída em C++
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    // Pré-calcula os números primos
    sieve();

    int n;
    // Lê os valores de n até encontrar um 0
    while (std::cin >> n && n != 0) {
        std::cout << solve_josephus_prime(n) << "\n";
    }

    return 0;
}