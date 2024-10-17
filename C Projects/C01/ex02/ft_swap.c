void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}




--- Explanation ---

English:

    Function Declaration:
        void ft_swap(int *a, int *b): This line declares a function named ft_swap. It takes two arguments: a and b, 
	which are pointers to integers. The function does not return any value (void).

    Variable Declaration:
        int swap;: A new integer variable named swap is declared. This variable will temporarily hold the value of 
	one of the integers so that they can be swapped.

    Store Value of a:
        swap = *a;: The pointer a is dereferenced (accessed) using the * operator. This means we are getting the 
	value stored at the address that a points to. This value is then stored in the swap variable.
        Example: If a points to the value 5, then swap now holds 5.

    Assign Value of b to a:
        *a = *b;: Here, the value pointed to by b is also dereferenced. The value at the address b points to is 
	assigned to the location a points to.
        Example: If b points to 10, then now the location that a points to will have the value 10.

    Assign Stored Value to b:
        *b = swap;: Finally, the value stored in swap (which is the original value of a) is assigned to the 
	location pointed to by b.
        Example: If swap holds 5, now the location that b points to will have the value 5.

    End of Function:
        The function completes its execution, and at this point, the values at the addresses of a and b have been swapped.

	
Português:

    Declaração da Função:
        void ft_swap(int *a, int *b): Esta linha declara uma função chamada ft_swap. Ela aceita dois argumentos: a e b, 
	que são ponteiros para inteiros. A função não retorna nenhum valor (void).

    Declaração da Variável:
        int swap;: Uma nova variável inteira chamada swap é declarada. Esta variável irá armazenar temporariamente o valor 
	de um dos inteiros para que eles possam ser trocados.

    Armazenar o Valor de a:
        swap = *a;: O ponteiro a é desreferenciado (acessado) usando o operador *. Isso significa que estamos obtendo o valor 
	armazenado no endereço ao qual a aponta. Esse valor é armazenado na variável swap.
        Exemplo: Se a aponta para o valor 5, então swap agora contém 5.

    Atribuir o Valor de b a a:
        *a = *b;: Aqui, o valor apontado por b também é desreferenciado. O valor no endereço para o qual b aponta é atribuído 
	ao local que a aponta.
        Exemplo: Se b aponta para 10, então agora o local que a aponta terá o valor 10.

    Atribuir o Valor Armazenado a b:
        *b = swap;: Finalmente, o valor armazenado em swap (que é o valor original de a) é atribuído ao local que b aponta.
        Exemplo: Se swap contém 5, agora o local que b aponta terá o valor 5.

    Fim da Função:
        A função conclui sua execução, e neste ponto, os valores nos endereços de a e b foram trocados.
