void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = swap;
		i++;
	}
}



--- Explanation ---

    Function Declaration:
        void ft_rev_int_tab(int *tab, int size): This line declares a function named ft_rev_int_tab. It takes two 
	arguments: a pointer to an integer array tab (the array to be reversed) and an integer size (the number of 
	elements in the array). The function does not return any value (void).

    Variable Initialization:
        int i;: A variable named i is declared to serve as an index for iterating through the array.
        int swap;: A variable named swap is declared to temporarily hold the value of an array element during the swap process.

    Loop to Reverse the Array:
        while (i < size / 2): This line starts a loop that continues as long as i is less than half of the size of the array. 
	This is because, to reverse an array, you only need to swap the first half of the elements with the second half.
        Example: If size is 6, the loop will iterate while i is 0, 1, and 2 (total of 3 iterations).

    Swapping Elements:
        swap = tab[i];: This line assigns the value of the current element at index i of the array tab to the variable swap.
        tab[i] = tab[size - 1 - i];: This line sets the current element at index i to the value of the corresponding element 
	from the other end of the array (the element at index size - 1 - i).
        tab[size - 1 - i] = swap;: This line assigns the value stored in swap (the original value of tab[i]) to the corresponding 
	position from the other end of the array.
        Example: For an array [1, 2, 3, 4, 5, 6], when i is 0, the swap operation will result in [6, 2, 3, 4, 5, 1].

    Incrementing the Index:
        i++;: This line increments the index i to move to the next position in the array for the next iteration.

    End of Function:
        The function completes its execution once all the necessary swaps are made, effectively reversing the order of the 
	elements in the array tab.



	
Português:

    Declaração da Função:
        void ft_rev_int_tab(int *tab, int size): Esta linha declara uma função chamada ft_rev_int_tab. Ela aceita dois 
	argumentos: um ponteiro para um array de inteiros tab (o array a ser invertido) e um inteiro size (o número de 
	elementos no array). A função não retorna nenhum valor (void).

    Inicialização das Variáveis:
        int i;: Uma variável chamada i é declarada para servir como um índice para iterar pelo array.
        int swap;: Uma variável chamada swap é declarada para armazenar temporariamente o valor de um elemento do array 
	durante o processo de troca.

    Laço para Inverter o Array:
        while (i < size / 2): Esta linha inicia um loop que continua enquanto i for menor que a metade do size do array. 
	Isso ocorre porque, para inverter um array, você só precisa trocar a primeira metade dos elementos com a segunda metade.
        Exemplo: Se size for 6, o loop irá iterar enquanto i for 0, 1 e 2 (total de 3 iterações).

    Trocando Elementos:
        swap = tab[i];: Esta linha atribui o valor do elemento atual no índice i do array tab à variável swap.
        tab[i] = tab[size - 1 - i];: Esta linha define o elemento atual no índice i como o valor do elemento correspondente 
	da outra extremidade do array (o elemento no índice size - 1 - i).
        tab[size - 1 - i] = swap;: Esta linha atribui o valor armazenado em swap (o valor original de tab[i]) à posição 
	correspondente da outra extremidade do array.
        Exemplo: Para um array [1, 2, 3, 4, 5, 6], quando i for 0, a operação de troca resultará em [6, 2, 3, 4, 5, 1].

    Incrementando o Índice:
        i++;: Esta linha incrementa o índice i para passar para a próxima posição do array na próxima iteração.

    Fim da Função:
        A função conclui sua execução uma vez que todas as trocas necessárias sejam feitas, efetivamente invertendo a ordem 
	dos elementos no array tab.
