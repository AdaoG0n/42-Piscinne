void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}




--- Explanation ---

    Function Declaration:
        void ft_sort_int_tab(int *tab, int size): This line declares a function named ft_sort_int_tab. 
	It takes two arguments: a pointer to an integer array tab (the array to be sorted) and an integer size (the number 
	of elements in the array). The function does not return any value (void).

    Variable Initialization:
        int i;: A variable named i is declared to serve as an index for iterating through the array.
        int swap;: A variable named swap is declared to temporarily hold the value of an array element during the 
	swapping process.

    Outer While Loop:
        while (size >= 0): This line starts an outer loop that continues until size is less than 0. The purpose of 
	this loop is to repeatedly pass through the array to ensure all elements are sorted.
        Note: It is important to clarify that the loop should run while size > 1, as sorting a single element or an 
	empty array does not require sorting.

    Inner While Loop:
        i = 0;: This line initializes the index i to 0 at the start of each pass through the array.
        while (i < size - 1): This line starts an inner loop that continues as long as i is less than size - 1. 
	This loop compares adjacent elements in the array.

    Comparing and Swapping Elements:
        if (tab[i] > tab[i + 1]): This line checks if the current element tab[i] is greater than the next element 
	tab[i + 1]. If true, a swap is necessary to sort the elements in ascending order.
        swap = tab[i];: This line assigns the value of the current element to the variable swap.
        tab[i] = tab[i + 1];: This line replaces the current element with the value of the next element.
        tab[i + 1] = swap;: This line assigns the value stored in swap (the original value of tab[i]) to the next 
	position in the array.
        Example: For an array [3, 1, 2], the first pass will result in [1, 2, 3] after multiple comparisons and swaps.

    Incrementing the Index:
        i++;: This line increments the index i to move to the next pair of elements for comparison in the next iteration 
	of the inner loop.

    Decrementing Size:
        size--;: After completing the inner loop, this line decreases the size variable by 1. This is done because the 
	largest element is now in its correct position, so the next pass can ignore it.

    End of Function:
        The function completes its execution once all passes are done, resulting in the entire array tab being sorted 
	in ascending order.



	
Português:

    Declaração da Função:
        void ft_sort_int_tab(int *tab, int size): Esta linha declara uma função chamada ft_sort_int_tab. Ela aceita dois 
	argumentos: um ponteiro para um array de inteiros tab (o array a ser ordenado) e um inteiro size (o número de 
	elementos no array). A função não retorna nenhum valor (void).

    Inicialização das Variáveis:
        int i;: Uma variável chamada i é declarada para servir como um índice para iterar pelo array.
        int swap;: Uma variável chamada swap é declarada para armazenar temporariamente o valor de um elemento do array 
	durante o processo de troca.

    Laço While Externo:
        while (size >= 0): Esta linha inicia um loop externo que continua até que size seja menor que 0. O propósito deste 
	loop é passar repetidamente pelo array para garantir que todos os elementos sejam ordenados.
        Nota: É importante esclarecer que o loop deve rodar enquanto size > 1, pois ordenar um único elemento ou um array 
	vazio não requer ordenação.

    Laço While Interno:
        i = 0;: Esta linha inicializa o índice i como 0 no início de cada passagem pelo array.
        while (i < size - 1): Esta linha inicia um loop interno que continua enquanto i for menor que size - 1. Este loop 
	compara elementos adjacentes no array.

    Comparando e Trocando Elementos:
        if (tab[i] > tab[i + 1]): Esta linha verifica se o elemento atual tab[i] é maior que o próximo elemento tab[i + 1]. 
	Se for verdadeiro, uma troca é necessária para ordenar os elementos em ordem crescente.
        swap = tab[i];: Esta linha atribui o valor do elemento atual à variável swap.
        tab[i] = tab[i + 1];: Esta linha substitui o elemento atual pelo valor do próximo elemento.
        tab[i + 1] = swap;: Esta linha atribui o valor armazenado em swap (o valor original de tab[i]) à 
	próxima posição no array.
        Exemplo: Para um array [3, 1, 2], a primeira passagem resultará em [1, 2, 3] após várias comparações e trocas.

    Incrementando o Índice:
        i++;: Esta linha incrementa o índice i para passar para o próximo par de elementos para comparação na próxima 
	iteração do loop interno.

    Decrementando o Tamanho:
        size--;: Após completar o loop interno, esta linha diminui a variável size em 1. Isso é feito porque o maior 
	elemento agora está em sua posição correta, então a próxima passagem pode ignorá-lo.

    Fim da Função:
        A função conclui sua execução uma vez que todas as passagens são feitas, resultando em todo o array tab sendo 
	ordenado em ordem crescente.
