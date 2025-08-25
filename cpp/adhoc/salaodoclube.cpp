#include <iostream>
#include <vector>
#include <numeric>   // Para std::accumulate (se necessário)
#include <algorithm> // Para std::sort

using namespace std;

int solve(int comprimento_fileira, int largura_total, int largura_tabua, vector<int>& tabuas) {
    // Passo 1: Verificar se a largura do salão é compatível com a largura das tábuas
    if (largura_total % largura_tabua != 0) {
        return -1; // Impossível cobrir a largura perfeitamente
    }

    int num_fileiras = largura_total / largura_tabua;
    int tabuas_usadas = 0;
    
    // Para facilitar a busca, vamos separar as tábuas
    // que têm o tamanho exato das outras.
    vector<int> tabuas_exatas;
    vector<int> outras_tabuas;

    for (int tabua : tabuas) {
        if (tabua == comprimento_fileira) {
            tabuas_exatas.push_back(tabua);
        } else {
            outras_tabuas.push_back(tabua);
        }
    }

    // Passo 2: Usar as tábuas de tamanho exato primeiro (estratégia gulosa)
    int fileiras_com_uma_tabua = min((int)tabuas_exatas.size(), num_fileiras);
    tabuas_usadas += fileiras_com_uma_tabua;
    num_fileiras -= fileiras_com_uma_tabua;

    if (num_fileiras == 0) {
        return tabuas_usadas; // Já cobrimos tudo
    }

    // Passo 3: Tentar formar pares com as tábuas restantes
    // A ordenação é essencial para a técnica dos dois ponteiros
    sort(outras_tabuas.begin(), outras_tabuas.end());

    int left = 0;
    int right = outras_tabuas.size() - 1;

    while (left < right && num_fileiras > 0) {
        if (outras_tabuas[left] + outras_tabuas[right] == comprimento_fileira) {
            // Par encontrado!
            num_fileiras--;
            tabuas_usadas += 2;
            left++;
            right--;
        } else if (outras_tabuas[left] + outras_tabuas[right] < comprimento_fileira) {
            // Soma muito pequena, a tábua da esquerda é inútil para a da direita
            left++;
        } else { // Soma muito grande
            right--;
        }
    }

    // Passo 4: Verificar se todas as fileiras foram preenchidas
    if (num_fileiras == 0) {
        return tabuas_usadas;
    }

    return -1; // Não foi possível cobrir tudo
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int M, N, L, K;

    // Laço principal para ler múltiplos casos de teste
    while (cin >> M >> N && (M != 0 || N != 0)) {
        cin >> L >> K;
        vector<int> tabuas(K);
        for (int i = 0; i < K; ++i) {
            cin >> tabuas[i];
        }

        // --- CONVERSÃO PARA CM ---
        int M_cm = M * 100;
        int N_cm = N * 100;
        for (int i = 0; i < K; ++i) {
            tabuas[i] *= 100;
        }

        // --- TENTATIVA 1: Tábuas alinhadas com M ---
        int res1 = solve(M_cm, N_cm, L, tabuas);

        // --- TENTATIVA 2: Tábuas alinhadas com N ---
        int res2 = solve(N_cm, M_cm, L, tabuas);

        // --- AVALIAÇÃO FINAL ---
        if (res1 == -1 && res2 == -1) {
            cout << "impossivel" << endl;
        } else if (res1 == -1) {
            cout << res2 << endl;
        } else if (res2 == -1) {
            cout << res1 << endl;
        } else {
            cout << min(res1, res2) << endl;
        }
    }

    return 0;
}