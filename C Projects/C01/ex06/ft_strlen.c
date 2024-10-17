#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}



_______________________________________________________________________________________________
--- Explanation ---

    Function Declaration:
        int ft_strlen(char *str): This line declares a function named ft_strlen. It takes a single argument, str, 
	which is a pointer to a character (a string). The function returns an integer value representing the length of the string.

    Variable Initialization:
        int count;: A variable named count is declared and initialized to 0. This variable will be used to keep track 
	of the number of characters in the string.

    While Loop to Count Characters:
        while (*str): This line starts a loop that continues as long as the current character pointed to by str is not 
	the null terminator ('\0'). The null terminator marks the end of the string.
        Example: If str points to the string "Hello", the loop will iterate while *str is not '\0'.

    Counting Characters:
        count++;: Inside the loop, this line increments the count variable by 1 for each character in the string.
        Example: For the string "Hello", count will be incremented five times, resulting in a final value of 5.

    Move to the Next Character:
        str++;: This line increments the pointer str to point to the next character in the string.
        Example: After the first iteration with str pointing to 'H', it will move to 'e', and so on until the null 
	terminator is reached.

    Return the Length:
        return (count);: After the loop ends (when the null terminator is encountered), this line returns the total count 
	of characters in the string.



	
Português:

    Declaração da Função:
        int ft_strlen(char *str): Esta linha declara uma função chamada ft_strlen. Ela aceita um único argumento, str, 
	que é um ponteiro para um caractere (uma string). A função retorna um valor inteiro que representa o comprimento da string.

    Inicialização da Variável:
        int count;: Uma variável chamada count é declarada e inicializada em 0. Esta variável será usada para acompanhar o 
	número de caracteres na string.

    Laço While para Contar Caracteres:
        while (*str): Esta linha inicia um loop que continua enquanto o caractere atual apontado por str não for o 
	terminador nulo ('\0'). O terminador nulo marca o fim da string.
        Exemplo: Se str aponta para a string "Hello", o loop irá iterar enquanto *str não for '\0'.

    Contando Caracteres:
        count++;: Dentro do loop, esta linha incrementa a variável count em 1 para cada caractere na string.
        Exemplo: Para a string "Hello", count será incrementado cinco vezes, resultando em um valor final de 5.

    Passar para o Próximo Caractere:
        str++;: Esta linha incrementa o ponteiro str para apontar para o próximo caractere na string.
        Exemplo: Após a primeira iteração com str apontando para 'H', ele se moverá para 'e', e assim por diante, 
	até que o terminador nulo seja alcançado.

    Retornar o Comprimento:
        return (count);: Após o fim do loop (quando o terminador nulo é encontrado), esta linha retorna o total de 
	caracteres na string.
