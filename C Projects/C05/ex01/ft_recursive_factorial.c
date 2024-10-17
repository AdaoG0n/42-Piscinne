int	ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}


_______________________________________________________________________________________________
Explanation

Function Declaration:
int ft_recursive_factorial(int nb):
This function calculates the factorial of a given number nb recursively. It returns the factorial as an integer.

Base Case for Zero and One:
if (nb == 0 || nb == 1)
    return (1);
	If nb is either 0 or 1, the function returns 1, since the factorial of both 0 and 1 is 1.

Handling Negative Input:
if (nb < 0)
    return (0);
	If nb is negative, the function returns 0, as the factorial of a negative number is undefined.

Recursive Call:
return (nb * ft_recursive_factorial(nb - 1));
This line recursively calls ft_recursive_factorial with nb - 1. It multiplies nb by the factorial of nb - 1 until 
the base case (when nb is 0 or 1) is reached, returning the final result.

	
	
	Português:

Declaração da Função:
int ft_recursive_factorial(int nb):
Esta função calcula o fatorial de um número dado nb de forma recursiva. Ela retorna o fatorial como um inteiro.

Caso Base para Zero e Um:
if (nb == 0 || nb == 1)
    return (1);
	Se nb for 0 ou 1, a função retorna 1, pois o fatorial de ambos é 1.

Tratamento de Entrada Negativa:
if (nb < 0)
    return (0);
	Se nb for negativo, a função retorna 0, pois o fatorial de um número negativo é indefinido.

Chamada Recursiva:
return (nb * ft_recursive_factorial(nb - 1));
Esta linha chama recursivamente ft_recursive_factorial com nb - 1. Ela multiplica nb pelo fatorial de nb - 1 até 
	atingir o caso base (quando nb é 0 ou 1), retornando o resultado final.
