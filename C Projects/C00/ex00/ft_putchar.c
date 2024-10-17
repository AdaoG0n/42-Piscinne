#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* --- Explanation ---

#include <unistd.h>: Includes the necessary library to use the write() function.
	
void ft_putchar(char c): Declaration of the ft_putchar function, which accepts a character 
			 as an argument and returns nothing (void).
	
write(1, &c, 1): Calls the write function to send 1 byte (the character c) to file descriptor 1, 
		 which represents standard output (the terminal). The first argument 1 indicates standard output,
		 the second argument &c is the address of the character to be sent, and the third argument 1 indicates
		 that only 1 byte (the character) will be sent.


 --- Explicação ---

    #include <unistd.h>: Inclui a biblioteca necessária para usar a função write().
    
    void ft_putchar(char c): Declaração da função ft_putchar,que aceita um caractere como
    			     argumento e não retorna nada (void).
	    
    write(1, &c, 1): Chama a função write para enviar 1 byte (o caractere c) para o descritor de arquivo 1,
    		     que representa a saída padrão (o terminal). O primeiro argumento 1 indica a saída padrão, 
	             o segundo argumento &c é o endereço do caractere a ser enviado, e o terceiro argumento 1 
	             indica que será enviado apenas 1 byte (o caractere).
*/
