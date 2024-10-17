void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}




--- Explanation ---

English:

    void ft_swap(int *a, int *b): //Declares the ft_swap function, which takes two pointers to integers a and b as 
				  //arguments and returns no values (void).

    int swap;: //Declares an integer variable swap to temporarily hold a value during the swap process.

    swap = *a;: //Dereferences pointer a to get its value and stores it in the variable swap.

    *a = *b;: //Dereferences pointer b to get its value and assigns it to the location pointed to by a.

    *b = swap;: //Assigns the value stored in swap to the location pointed to by b, completing the swap.



Português:

    void ft_swap(int *a, int *b): //Declaração da função ft_swap, que aceita dois ponteiros para inteiros a e b como 
 				  //argumentos e não retorna valores (void).

    int swap;: //Declara uma variável inteira swap para armazenar temporariamente um valor durante o processo de troca.

    swap = *a;: //Desreferencia o ponteiro a para obter seu valor e armazena-o na variável swap.

    *a = *b;: //Desreferencia o ponteiro b para obter seu valor e o atribui ao local apontado por a.

    *b = swap;: //Atribui o valor armazenado em swap ao local apontado por b, completando a troca.
