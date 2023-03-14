# quickSort-cpp
Algoritmo de QuickSort em C++

O QuickSort adota a estratégia de divisão e conquista. 

A estratégia consiste em rearranjar as chaves de modo que as chaves "menores" precedam as chaves "maiores". Em seguida o QuickSort ordena as duas sublistas de chaves menores e maiores recursivamente até que a lista completa se encontre ordenada. Os passos são:

- Escolha um elemento da lista, denominado pivô;

- Particiona: rearranje a lista de forma que todos os elementos anteriores ao pivô sejam menores que ele, e todos os elementos posteriores ao pivô sejam maiores que ele. Ao fim do processo o pivô estará em sua posição final e haverá duas sub listas não ordenadas. Essa operação é denominada partição;

- Recursivamente ordene a sub lista dos elementos menores e a sub lista dos elementos maiores;

A escolha do pivô e os passos do Particiona podem ser feitos de diferentes formas e a escolha de uma implementação específica afeta fortemente a performance do algoritmo.
