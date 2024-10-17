int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}



_______________________________________________________________________________________________
Explanation

Function Declaration:
int ft_fibonacci(int index):
This function calculates the Fibonacci number at a given index using a recursive approach. It returns the result as an integer.

Handling Negative Index:
if (index < 0)
    return (-1);
	If the index is negative, the function returns -1 to indicate that Fibonacci is not defined for negative numbers.

Base Case - Index Equals Zero:
if (index == 0)
    return (0);
	If index is 0, the function returns 0, which is the first Fibonacci number.

Base Case - Index Equals One:
if (index == 1)
    return (1);
	If index is 1, the function returns 1, which is the second Fibonacci number.

Recursive Case:
return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
This line makes two recursive calls to ft_fibonacci, one with index - 1 and the other with index - 2. 
The Fibonacci sequence is defined as the sum of the two preceding numbers, and this recursive formula continues until 
it reaches the base cases (index 0 or 1).

	
	
	Português:

Declaração da Função:
int ft_fibonacci(int index):
Esta função calcula o número de Fibonacci em um determinado índice usando uma abordagem recursiva. 
	Ela retorna o resultado como um inteiro.

Tratamento de Índice Negativo:
if (index < 0)
    return (-1);
	Se o index for negativo, a função retorna -1 para indicar que a sequência de Fibonacci não está definida para números negativos.

Caso Base - Índice Igual a Zero:
if (index == 0)
    return (0);
	Se o index for 0, a função retorna 0, que é o primeiro número da sequência de Fibonacci.

Caso Base - Índice Igual a Um:
if (index == 1)
    return (1);
	Se o index for 1, a função retorna 1, que é o segundo número da sequência de Fibonacci.

Caso Recursivo:
return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
Esta linha faz duas chamadas recursivas para ft_fibonacci, uma com index - 1 e outra com index - 2. A sequência de Fibonacci 
é definida como a soma dos dois números anteriores, e essa fórmula recursiva continua até atingir os casos base (índices 0 ou 1).
