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


--- Explanation ---
	
English:

    #include <unistd.h>: //Includes the library to use the write() function.
    
    void ft_print_alphabet(void): //Declares the ft_print_alphabet function, which takes no arguments and returns no values (void).
	
    char count: //Declares a variable count to store the current character.
    
    count = 97:// Initializes count with the ASCII value 97, which corresponds to the character 'a'.
	
    while (count >= 97 && count <= 122): //Starts a loop that continues while count is in the range of 'a' to 'z' (ASCII 97 to 122).
    
    write(1, &count, 1)://Uses the write() function to send the current character stored in count to the terminal (standard output).
    
    count++: //Increments count to move to the next character.
	
	


Português:

    #include <unistd.h>: //Inclui a biblioteca para usar a função write().
   
    void ft_print_alphabet(void): //Declaração da função ft_print_alphabet, que não recebe argumentos
    				  //e não retorna valores (void).
    
    char count:// Declara uma variável count para armazenar o caractere atual.
    
    count = 97: //Inicializa count com o valor ASCII 97, que corresponde ao caractere 'a'.
    
    while (count >= 97 && count <= 122): //Inicia um loop que continua enquanto count estiver no 
    					 //intervalo de 'a' a 'z' (ASCII 97 a 122).
    
    write(1, &count, 1): //Usa a função write() para enviar o caractere atual armazenado em count para o terminal (saída padrão).
    
    count++: //Incrementa count para passar para o próximo caractere.
