#include <iostream>
#include <vector>
#include <cstdlib>
#include <chrono>
#include <fstream>
#include <string>

std::vector<int> gerarVetor(int tamanho) {
    std::vector<int> vetor(tamanho);
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 10000 + 1;
    }
    return vetor;
}

void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void selectionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        std::swap(arr[i], arr[minIdx]);
    }
}

void insertionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int chave = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > chave) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = chave;
    }
}

void combSort(std::vector<int>& arr) {
    int n = arr.size();
    int gap = n;
    bool swapped = true;
    while (gap > 1 || swapped) {
        gap = std::max(1, gap * 10 / 13);
        swapped = false;
        for (int i = 0; i + gap < n; i++) {
            if (arr[i] > arr[i + gap]) {
                std::swap(arr[i], arr[i + gap]);
                swapped = true;
            }
        }
    }
}

template <typename Func>
double medirTempo(Func func, std::vector<int>& arr) {
    auto inicio = std::chrono::high_resolution_clock::now();
    func(arr);
    auto fim = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duracao = fim - inicio;
    return duracao.count();
}

int main() {
    srand(time(0));

    std::vector<int> tamanhos;
    for (int i = 2000; i <= 50000; i += 2000) {
        tamanhos.push_back(i);
    }

    std::ofstream arquivo("tempos.csv");
    arquivo << "Tamanho,BubbleSort,SelectionSort,InsertionSort,Combsort\n";

    for (int tamanho : tamanhos) {
        std::vector<int> vetor = gerarVetor(tamanho);

        double tempoBubble = medirTempo(bubbleSort, vetor);
        double tempoSelection = medirTempo(selectionSort, vetor);
        double tempoInsertion = medirTempo(insertionSort, vetor);
        double tempoCombsort = medirTempo(combSort, vetor);

        arquivo << tamanho << "," << tempoBubble << "," << tempoSelection << "," 
                << tempoInsertion << "," << tempoCombsort << "\n";

        std::cout << "Tamanho: " << tamanho << "\n";
        std::cout << "BubbleSort: " << tempoBubble << " segundos\n";
        std::cout << "SelectionSort: " << tempoSelection << " segundos\n";
        std::cout << "InsertionSort: " << tempoInsertion << " segundos\n";
        std::cout << "Combsort: " << tempoCombsort << " segundos\n\n";
    }

    arquivo.close();
    std::cout << "Dados gravados em 'tempos.csv'.\n";

    std::string comando = "gnuplot -e \"set datafile separator ','; "
                          "set title 'Comparação de Algoritmos de Ordenação'; "
                          "set xlabel 'Tamanho do Vetor'; "
                          "set ylabel 'Tempo de Execução (segundos)'; "
                          "plot 'tempos.csv' using 1:2 title 'BubbleSort' with linespoints, "
                          "'tempos.csv' using 1:3 title 'SelectionSort' with linespoints, "
                          "'tempos.csv' using 1:4 title 'InsertionSort' with linespoints, "
                          "'tempos.csv' using 1:5 title 'Combsort' with linespoints;\"";

    system(comando.c_str());  

    return 0;
}
