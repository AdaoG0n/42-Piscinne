void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}




_______________________________________________________________________________________________
--- Explanation ---

    Function Declaration:
        void ft_div_mod(int a, int b, int *div, int *mod): This line declares a function named ft_div_mod. It takes 
	four arguments: two integers, a and b, and two pointers to integers, div and mod. The function does not 
	return any value (void).

    Calculate Division:
        *div = a / b;: This line calculates the integer division of a by b and assigns the result to the location 
	pointed to by div.
        Example: If a is 10 and b is 3, then after this line, the value pointed to by div will be 3.

    Calculate Modulus:
        *mod = a % b;: This line calculates the remainder of the division of a by b and assigns the result to the 
	location pointed to by mod.
        Example: Using the same values, if a is 10 and b is 3, then after this line, the value pointed to by mod will be 1.

    End of Function:
        The function completes its execution, and at this point, the pointers div and mod point to the division result 
	and modulus result, respectively.



Português:

    Declaração da Função:
        void ft_div_mod(int a, int b, int *div, int *mod): Esta linha declara uma função chamada ft_div_mod. Ela aceita 
	quatro argumentos: dois inteiros, a e b, e dois ponteiros para inteiros, div e mod. A função não retorna nenhum 
	valor (void).

    Calcular Divisão:
        *div = a / b;: Esta linha calcula a divisão inteira de a por b e atribui o resultado ao local apontado por div.
        Exemplo: Se a for 10 e b for 3, então após esta linha, o valor apontado por div será 3.

    Calcular Módulo:
        *mod = a % b;: Esta linha calcula o resto da divisão de a por b e atribui o resultado ao local apontado por mod.
        Exemplo: Usando os mesmos valores, se a for 10 e b for 3, então após esta linha, o valor apontado por mod será 1.

    Fim da Função:
        A função conclui sua execução, e neste ponto, os ponteiros div e mod apontam para o resultado da divisão e o 
	resultado do módulo, respectivamente.
