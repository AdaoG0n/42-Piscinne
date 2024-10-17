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


Explanation

Function Declaration:
int ft_strlen(char *str):
This function calculates the length of the string str and returns the count of characters, excluding the null terminator.

Variable Initialization:
int count;:
This line declares an integer variable count, which will be used to keep track of the number of characters in the string.

Character Iteration:
while (*str):
This loop continues until it reaches the null terminator ('\0') of the string.
    count++;:
	Inside the loop, each time a character is encountered (i.e., while *str is not 0), the count variable is incremented by 
	one to count the character.
    str++;:
	The pointer str is incremented to move to the next character in the string.

Return Statement:
return (count);:
Once the loop has finished (when the null terminator is reached), the function returns the value of count, which represents 
the length of the string.

	
	
	Português:

Declaração da Função:
int ft_strlen(char *str):
Esta função calcula o comprimento da string str e retorna a contagem de caracteres, excluindo o terminador nulo.

Inicialização da Variável:
int count;:
Esta linha declara uma variável inteira count, que será usada para rastrear o número de caracteres na string.

Iteração sobre os Caracteres:
while (*str):
Este loop continua até alcançar o terminador nulo ('\0') da string.
    count++;:
	Dentro do loop, cada vez que um caractere é encontrado (ou seja, enquanto *str não for 0), a variável count é 
	incrementada em um para contar o caractere.
    str++;:
	O ponteiro str é incrementado para mover para o próximo caractere da string.

Instrução de Retorno:
return (count);:
Uma vez que o loop tenha terminado (quando o terminador nulo for alcançado), a função retorna o valor de count, que representa 
o comprimento da string.
