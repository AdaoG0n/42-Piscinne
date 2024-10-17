int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}



_______________________________________________________________________________________________
Explanation

Function Declaration:
int ft_iterative_factorial(int nb):
This function calculates the factorial of a given number nb iteratively. It returns the result as an integer.

Variable Initialization:
int result;:
This variable is initialized to 1 and will hold the intermediate and final results of the factorial computation.

Handling Negative Input:
if (nb < 0)
    return (0);
	If nb is negative, the function returns 0, because the factorial of a negative number is undefined.

Iterative Factorial Calculation:
while (nb > 0):
This loop continues as long as nb is greater than 0. Inside the loop:
    result *= nb;
	This line multiplies result by nb, updating the current factorial value.
    nb--;
	This line decreases the value of nb by 1, moving the calculation closer to completion.

Return Statement:
return (result);
Once the loop completes, the function returns the calculated factorial value stored in result.

	
	
	Português:

Declaração da Função:
int ft_iterative_factorial(int nb):
Esta função calcula o fatorial de um número dado nb de forma iterativa. Ela retorna o resultado como um inteiro.

Inicialização de Variáveis:
int result;:
Esta variável é inicializada como 1 e armazenará os resultados intermediários e o resultado final do cálculo do fatorial.

Tratamento de Entrada Negativa:
if (nb < 0)
    return (0);
	Se nb for negativo, a função retorna 0, pois o fatorial de um número negativo é indefinido.

Cálculo Iterativo do Fatorial:
while (nb > 0):
Este loop continua enquanto nb for maior que 0. Dentro do loop:
    result *= nb;
Esta linha multiplica result por nb, atualizando o valor fatorial atual.
    nb--;
Esta linha diminui o valor de nb em 1, movendo o cálculo para mais perto da conclusão.

Instrução de Retorno:
return (result);
Quando o loop for concluído, a função retorna o valor fatorial calculado armazenado em result.
