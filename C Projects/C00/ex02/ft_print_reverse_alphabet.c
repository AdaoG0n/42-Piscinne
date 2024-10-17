#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	count;

	count = 123;
	while (count-- >= 98)
		write(1, &count, 1);
}


_______________________________________________________________________________________________
--- Explanation ---

    Include Directive:
        #include <unistd.h>: This line includes the <unistd.h> header file, which is necessary for using the write() function. 
	This function enables the program to write data to file descriptors, including standard output.

    Function Declaration:
        void ft_print_reverse_alphabet(void): This line declares a function named ft_print_reverse_alphabet. The function does 
	not take any arguments and does not return any value (void).

    Variable Declaration:
        int count;: This line declares an integer variable named count. This variable will be used to control the loop and 
	represent the ASCII values of characters.

    Initializing Count:
        count = 123;: This line initializes the variable count with the value 123, which is just above the ASCII value of 'z' (122).
	This initialization will allow the loop to start counting down from this value.

    While Loop:
        while (count-- >= 98): This line starts a loop that will execute as long as count is greater than or equal to 98. 
	The count-- operation decrements count after evaluating the condition. The loop continues until count reaches 98, 
	which corresponds to the ASCII value of 'b'.

    Writing the Character:
        write(1, &count, 1);: Inside the loop, this line uses the write() function to output the current value of count. 
	However, the count variable currently holds integer values that represent the ASCII codes. 
	This means that it will write the characters corresponding to these ASCII values:
            For example, when count is 122, it writes 'z', and when count is 121, it writes 'y', and so on.




	
Português:

    Diretiva de Inclusão:
        #include <unistd.h>: Esta linha inclui o arquivo de cabeçalho <unistd.h>, que é necessário para usar a função write(). 
	Esta função permite que o programa escreva dados em descritores de arquivos, incluindo a saída padrão.

    Declaração da Função:
        void ft_print_reverse_alphabet(void): Esta linha declara uma função chamada ft_print_reverse_alphabet. 
	A função não aceita argumentos e não retorna nenhum valor (void).

    Declaração da Variável:
        int count;: Esta linha declara uma variável inteira chamada count. Esta variável será usada para controlar o loop e 
	representar os valores ASCII dos caracteres.

    Inicializando Count:
        count = 123;: Esta linha inicializa a variável count com o valor 123, que está logo acima do valor ASCII de 'z' (122). 
	Esta inicialização permitirá que o loop comece a contagem regressiva a partir desse valor.

    Laço While:
        while (count-- >= 98): Esta linha inicia um loop que será executado enquanto count for maior ou igual a 98. 
	A operação count-- decrementa count após avaliar a condição. O loop continua até que count chegue a 98, que corresponde 
	ao valor ASCII de 'b'.

    Escrevendo o Caractere:
        write(1, &count, 1);: Dentro do loop, esta linha usa a função write() para enviar o valor atual de count. No entanto, a 
	variável count atualmente contém valores inteiros que representam os códigos ASCII. Isso significa que ele escreverá os 
	caracteres correspondentes a esses valores ASCII:
            Por exemplo, quando count é 122, ele escreve 'z', e quando count é 121, ele escreve 'y', e assim por diante.
