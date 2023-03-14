#include <iostream>
#include <vector>
#include <random>

std::vector<int> iniciaVetorRandomico(int tamanho)
{

    // cria um vector de inteiros com o tamanho passado por parametro
    std::vector<int> vetor(tamanho);

    // prepara gerador randomico
    std::random_device rd;
    std::mt19937 gerador(rd());

    // prepara um distribuidor de inteiros de 1 a 100
    std::uniform_int_distribution<int> distribuidor(1, 100);

    // preenche o vetor com numeros aleatorios de 1 a 100
    for (int i = 0; i < vetor.size(); i++)
    {
        vetor[i] = distribuidor(gerador);
    }

    return vetor;
}

void imprimeVetor(std::vector<int> vetor)
{
    for (int i = 0; i < vetor.size(); i++)
    {
        std::cout << vetor[i] << " ";
    }
}

void quickSort(std::vector<int> &vetor, int inicioVetor, int fimVetor)
{
    int pivo = vetor[(inicioVetor + fimVetor) / 2];
    int i = inicioVetor;
    int j = fimVetor;
    int aux;

    while (i <= j)
    {
        while (vetor[i] < pivo)
        {
            i++;
        }

        while (vetor[j] > pivo)
        {
            j--;
        }

        if (i <= j)
        {
            // troca a posição dos elementos
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
            i++;
            j--;
        }
    }

    if (inicioVetor < j)
    {
        quickSort(vetor, inicioVetor, j);
    }

    if (i < fimVetor)
    {
        quickSort(vetor, i, fimVetor);
    }
}

int main()
{
    std::cout << "Hello, world!" << std::endl;

    std::vector<int> vetor;

    vetor = iniciaVetorRandomico(10);

    imprimeVetor(vetor);

    std::cout << std::endl
              << "Ordenando..." << std::endl;

    quickSort(vetor, 0, vetor.size() - 1);

    imprimeVetor(vetor);

    return 0;
}