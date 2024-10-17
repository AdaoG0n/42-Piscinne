#include <unistd.h>

void	ft_print_numbers(void)
{
	int	count;

	count = 48;
	while (count <= 57)
	{
		write(1, &count, 1);
		count++;
	}
}


_______________________________________________________________________________________________
--- Explanation ---

    Include Directive:
        #include <unistd.h>: This line includes the <unistd.h> header file, which is necessary for using the write() function. 
	This function allows the program to write data to file descriptors, including standard output.

    Function Declaration:
        void ft_print_numbers(void): This line declares a function named ft_print_numbers. The function does not take any 
	arguments and does not return any value (void).

    Variable Declaration:
        int count;: This line declares an integer variable named count. This variable will be used to control the loop 
	and represent the ASCII values of the digits.

    Initializing Count:
        count = 48;: This line initializes the variable count with the value 48, which corresponds to the ASCII value 
	of the character '0'.

    While Loop:
        while (count <= 57): This line starts a loop that continues as long as count is less than or equal to 57. 
	The value 57 corresponds to the ASCII value of the character '9'.

    Writing the Character:
        write(1, &count, 1);: Inside the loop, this line uses the write() function to output the current value of count. 
	The count variable is being treated as an ASCII character. Thus, when count is 48, it writes '0', when count is 49, 
	it writes '1', and so on, up to 57, which writes '9'.

    Incrementing Count:
        count++;: This line increments the value of count to move to the next digit. 
	It effectively changes count from 48 to 49, then to 50, and so forth, until it reaches 57.



	
Português:

    Diretiva de Inclusão:
        #include <unistd.h>: Esta linha inclui o arquivo de cabeçalho <unistd.h>, que é necessário para usar a função write(). 
	Esta função permite que o programa escreva dados em descritores de arquivos, incluindo a saída padrão.

    Declaração da Função:
        void ft_print_numbers(void): Esta linha declara uma função chamada ft_print_numbers. A função não aceita argumentos e 
	não retorna nenhum valor (void).

    Declaração da Variável:
        int count;: Esta linha declara uma variável inteira chamada count. Esta variável será usada para controlar o loop e 
	representar os valores ASCII dos dígitos.

    Inicializando Count:
        count = 48;: Esta linha inicializa a variável count com o valor 48, que corresponde ao valor ASCII do caractere '0'.

    Laço While:
        while (count <= 57): Esta linha inicia um loop que continua enquanto count for menor ou igual a 57. O valor 57 
	corresponde ao valor ASCII do caractere '9'.

    Escrevendo o Caractere:
        write(1, &count, 1);: Dentro do loop, esta linha usa a função write() para enviar o valor atual de count. 
	A variável count está sendo tratada como um caractere ASCII. Assim, quando count é 48, ele escreve '0', quando count é 49, ele escreve '1', e assim por diante, até 57, que escreve '9'.

    Incrementando Count:
        count++;: Esta linha incrementa o valor de count para passar para o próximo dígito. 
	Ela efetivamente altera count de 48 para 49, depois para 50, e assim por diante, até alcançar 57.
