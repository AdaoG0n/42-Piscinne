int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			sign = -sign;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}



Explanation

Function Declaration:
int ft_atoi(char *str):
This function takes a string str as input and converts it to an integer. It returns the converted integer value.

Variable Initialization:
int sign;:
This variable is initialized to 1 and will be used to determine if the final result should be positive or negative.
int result;:
This variable is initialized to 0 and will hold the accumulated integer value as the string is processed.

Skipping Whitespace:
while (*str == ' ' || (*str >= 9 && *str <= 13)):
This loop continues as long as the current character in the string is a whitespace character (including spaces, tabs, and 
newlines). It effectively skips any leading whitespace.
    str++;:
	After checking for whitespace, the pointer str is incremented to move to the next character.

Handling Sign Characters:
while (*str == '+' || *str == '-'):
This loop checks for '+' or '-' signs.
    if (*str == '-'):
	If a '-' sign is found, the sign variable is multiplied by -1, effectively changing its value to -1.
    str++;:
	The pointer str is incremented to move to the next character.

Converting Characters to Integer:
while (*str >= '0' && *str <= '9'):
This loop processes numeric characters. It continues as long as the current character is between '0' and '9'.
    result = result * 10 + (*str - '0');:
	This line updates the result variable by multiplying the current result by 10 (shifting it left by one decimal place) 
	and adding the integer value of the current character (obtained by subtracting '0' from the character).
    str++;:
	The pointer str is incremented to move to the next character.

Return Statement:
return (sign * result);:
Finally, the function returns the result multiplied by the sign. If the sign is negative, the result will be negative.

	
	
	
	Português:

Declaração da Função:
int ft_atoi(char *str):
Esta função aceita uma string str como entrada e a converte em um inteiro. Ela retorna o valor inteiro convertido.

Inicialização de Variáveis:
int sign;:
Esta variável é inicializada como 1 e será usada para determinar se o resultado final deve ser positivo ou negativo.
int result;:
Esta variável é inicializada como 0 e armazenará o valor inteiro acumulado à medida que a string é processada.

Ignorando Espaços em Branco:
while (*str == ' ' || (*str >= 9 && *str <= 13)):
Este loop continua enquanto o caractere atual na string for um caractere em branco (incluindo espaços, tabulações e 
quebras de linha). Ele efetivamente pula qualquer espaço em branco à frente.
    str++;:
	Após verificar os espaços em branco, o ponteiro str é incrementado para mover para o próximo caractere.

Tratamento de Caracteres de Sinal:
while (*str == '+' || *str == '-'):
Este loop verifica por sinais de '+' ou '-'.
    if (*str == '-'):
	Se um sinal '-' for encontrado, a variável sign é multiplicada por -1, mudando efetivamente seu valor para -1.
    str++;:
	O ponteiro str é incrementado para mover para o próximo caractere.

Convertendo Caracteres em Inteiro:
while (*str >= '0' && *str <= '9'):
Este loop processa caracteres numéricos. Ele continua enquanto o caractere atual estiver entre '0' e '9'.
    result = result * 10 + (*str - '0');:
	Esta linha atualiza a variável result multiplicando o result atual por 10 (deslocando-o para a esquerda por um 
	lugar decimal) e adicionando o valor inteiro do caractere atual (obtido subtraindo '0' do caractere).
    str++;:
	O ponteiro str é incrementado para mover para o próximo caractere.

Instrução de Retorno:
return (sign * result);:
Finalmente, a função retorna o resultado multiplicado pelo sinal. Se o sinal for negativo, o resultado será negativo.
