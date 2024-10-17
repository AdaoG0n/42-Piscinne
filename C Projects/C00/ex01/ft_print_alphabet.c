#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	count;

	count = 97;
	while (count >= 97 && count <= 122)
	{
		write(1, &count, 1);
		count++;
	}
}



_______________________________________________________________________________________________
--- Explanation ---

    Include Directive:
        #include <unistd.h>: This line includes the <unistd.h> header file, which is necessary for using the write() function. 
	This function allows for writing data to file descriptors, including standard output.

    Function Declaration:
        void ft_print_alphabet(void): This line declares a function named ft_print_alphabet. The function does not take any 
	arguments and does not return any value (void).

    Variable Declaration:
        char count;: This line declares a variable named count of type char. This variable will be used to store the current 
	character being printed.

    Initializing Count:
        count = 97;: This line initializes the count variable with the ASCII value 97, which corresponds to the character 'a'.

    While Loop:
        while (count >= 97 && count <= 122): This line starts a loop that continues as long as count is within the ASCII 
	range for lowercase letters (from 'a' to 'z', which are 97 to 122).

    Writing the Character:
        write(1, &count, 1);: Inside the loop, this line uses the write() function to output the current character stored 
	in count to the terminal. The parameters are:
            1: This indicates the file descriptor for standard output.
            &count: This is the address of the character count that we want to write.
            1: This specifies that we want to write one byte (the character).

    Incrementing Count:
        count++;: This line increments the value of count to move to the next character in the alphabet. It effectively 
	changes count from 'a' to 'b', then to 'c', and so on, until it reaches 'z'.



	
Português:

    Diretiva de Inclusão:
        #include <unistd.h>: Esta linha inclui o arquivo de cabeçalho <unistd.h>, que é necessário para usar a função write(). 
	Esta função permite escrever dados em descritores de arquivos, incluindo a saída padrão.

    Declaração da Função:
        void ft_print_alphabet(void): Esta linha declara uma função chamada ft_print_alphabet. A função não aceita argumentos 
	e não retorna nenhum valor (void).

    Declaração da Variável:
        char count;: Esta linha declara uma variável chamada count do tipo char. Esta variável será usada para armazenar o 
	caractere atual a ser impresso.

    Inicializando Count:
        count = 97;: Esta linha inicializa a variável count com o valor ASCII 97, que corresponde ao caractere 'a'.

    Laço While:
        while (count >= 97 && count <= 122): Esta linha inicia um loop que continua enquanto count estiver dentro da faixa 
	ASCII para letras minúsculas (de 'a' a 'z', que vão de 97 a 122).

    Escrevendo o Caractere:
        write(1, &count, 1);: Dentro do loop, esta linha usa a função write() para enviar o caractere atual armazenado em count 
	para o terminal. Os parâmetros são:
            1: Este indica o descritor de arquivo para a saída padrão.
            &count: Este é o endereço do caractere count que queremos escrever.
            1: Este especifica que queremos escrever um byte (o caractere).

    Incrementando Count:
        count++;: Esta linha incrementa o valor de count para passar para o próximo caractere do alfabeto. Ela efetivamente 
	altera count de 'a' para 'b', depois para 'c', e assim por diante, até chegar a 'z'.
