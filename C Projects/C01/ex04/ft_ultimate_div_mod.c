void	ft_ultimate_div_mod(int *a, int *b)
{
	int	swap;

	swap = *a / *b;
	*b = *a % *b;
	*a = swap;
}



--- Explanation ---

    Function Declaration:
        void ft_ultimate_div_mod(int *a, int *b): This line declares a function named ft_ultimate_div_mod. It takes 
	two arguments, a and b, which are pointers to integers. The function does not return any value (void).

    Calculate Division and Store in swap:
        int swap;: A variable named swap is declared to temporarily hold the result of the division.
        swap = *a / *b;: This line dereferences the pointers a and b to access the integers they point to. It calculates 
	the integer division of *a by *b and stores the result in swap.
        Example: If *a is 10 and *b is 3, after this line, swap will hold the value 3.

    Calculate Modulus and Update b:
        *b = *a % *b;: This line calculates the remainder of the division of *a by *b and updates the value pointed to 
	by b with this result.
        Example: Using the same values, if *a is 10 and *b is 3, after this line, *b will be updated to 1.

    Update a with Division Result:
        *a = swap;: Finally, this line assigns the value stored in swap (the result of the division) back to the location 
	pointed to by a.
        Example: Continuing the previous example, after this line, *a will be updated to 3.

    End of Function:
        The function completes its execution, and at this point, the integer pointed to by a contains the result of the division, 
	while the integer pointed to by b contains the modulus result.



	
Português:

    Declaração da Função:
        void ft_ultimate_div_mod(int *a, int *b): Esta linha declara uma função chamada ft_ultimate_div_mod. Ela aceita dois 
	argumentos, a e b, que são ponteiros para inteiros. A função não retorna nenhum valor (void).

    Calcular Divisão e Armazenar em swap:
        int swap;: Uma variável chamada swap é declarada para armazenar temporariamente o resultado da divisão.
        swap = *a / *b;: Esta linha desreferencia os ponteiros a e b para acessar os inteiros aos quais eles apontam. Ela calcula 
	a divisão inteira de *a por *b e armazena o resultado em swap.
        Exemplo: Se *a for 10 e *b for 3, após esta linha, swap terá o valor 3.

    Calcular Módulo e Atualizar b:
        *b = *a % *b;: Esta linha calcula o resto da divisão de *a por *b e atualiza o valor apontado por b com esse resultado.
        Exemplo: Usando os mesmos valores, se *a for 10 e *b for 3, após esta linha, *b será atualizado para 1.

    Atualizar a com o Resultado da Divisão:
        *a = swap;: Finalmente, esta linha atribui o valor armazenado em swap (o resultado da divisão) de volta ao local apontado 
	por a.
        Exemplo: Continuando o exemplo anterior, após esta linha, *a será atualizado para 3.

    Fim da Função:
        A função conclui sua execução, e neste ponto, o inteiro apontado por a contém o resultado da divisão, enquanto o inteiro 
	apontado por b contém o resultado do módulo.
