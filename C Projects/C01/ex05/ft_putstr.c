#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}



_______________________________________________________________________________________________
--- Explanation ---

    Function Declaration:
        void ft_putstr(char *str): This line declares a function named ft_putstr. It takes a single argument, 
	str, which is a pointer to a character (a string). The function does not return any value (void).

    While Loop to Print Characters:
        while (*str): This line starts a loop that continues as long as the current character pointed to by str 
	is not the null terminator ('\0'). The null terminator indicates the end of the string.
        Example: If str points to the string "Hello", the loop will iterate while *str is not '\0'.

    Writing Each Character:
        write(1, str, 1);: This line uses the write() function to send the current character (pointed to by str) to 
	the standard output (the terminal). The first argument 1 specifies that the output is directed to the standard output, 
	the second argument str is the address of the character to write, and the third argument 1 indicates that only 
	one byte (one character) should be written.
        Example: For the first iteration with str pointing to "Hello", write() sends the character 'H' to the output.

    Move to the Next Character:
        str++;: This line increments the pointer str to point to the next character in the string.
        Example: After the first iteration, str will point to 'e', and the next iteration will write 'e' to the output.

    End of Function:
        The function completes its execution when the null terminator is reached, and all characters of the string have 
	been printed to the output.


	
Português:

    Declaração da Função:
        void ft_putstr(char *str): Esta linha declara uma função chamada ft_putstr. Ela aceita um único argumento, str, que é 
	um ponteiro para um caractere (uma string). A função não retorna nenhum valor (void).

    Laço While para Imprimir Caracteres:
        while (*str): Esta linha inicia um loop que continua enquanto o caractere atual apontado por str não for o terminador 
	nulo ('\0'). O terminador nulo indica o fim da string.
        Exemplo: Se str aponta para a string "Hello", o loop irá iterar enquanto *str não for '\0'.

    Escrevendo Cada Caractere:
        write(1, str, 1);: Esta linha usa a função write() para enviar o caractere atual (apontado por str) para a saída 
	padrão (o terminal). O primeiro argumento 1 especifica que a saída é direcionada para a saída padrão, o segundo 
	argumento str é o endereço do caractere a ser escrito e o terceiro argumento 1 indica que apenas um byte (um caractere) 
	deve ser escrito.
        Exemplo: Na primeira iteração, com str apontando para "Hello", write() envia o caractere 'H' para a saída.

    Passar para o Próximo Caractere:
        str++;: Esta linha incrementa o ponteiro str para apontar para o próximo caractere na string.
        Exemplo: Após a primeira iteração, str apontará para 'e', e a próxima iteração escreverá 'e' na saída.

    Fim da Função:
        A função conclui sua execução quando o terminador nulo é alcançado, e todos os caracteres da string foram impressos 
	na saída.
