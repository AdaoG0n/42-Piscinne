void	ft_ft(int *nbr)
{
	*nbr = 42;
}




_______________________________________________________________________________________________
--- Explanation ---

    Function Declaration:
        void ft_ft(int *nbr): This line declares a function named ft_ft. It takes a single argument, nbr, 
	which is a pointer to an integer. The function does not return any value (void).

    Set Value to 42:
        *nbr = 42;: This line dereferences the pointer nbr to access the integer it points to. It then assigns the 
	value 42 to this integer.
        Example: If nbr points to a location in memory containing the integer 5, after this line executes, that location 
	will now contain the value 42.

    End of Function:
        The function completes its execution, and at this point, the integer that nbr points to has been set to 42.


	
Português:

    Declaração da Função:
        void ft_ft(int *nbr): Esta linha declara uma função chamada ft_ft. Ela aceita um único argumento, nbr, que 
	é um ponteiro para um inteiro. A função não retorna nenhum valor (void).

    Definir o Valor como 42:
        *nbr = 42;: Esta linha desreferencia o ponteiro nbr para acessar o inteiro ao qual ele aponta. Em seguida, 
	atribui o valor 42 a esse inteiro.
        Exemplo: Se nbr aponta para um local na memória contendo o inteiro 5, após esta linha ser executada, esse 
	local agora conterá o valor 42.

    Fim da Função:
        A função conclui sua execução, e neste ponto, o inteiro que nbr aponta foi definido como 42.
