int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}


_______________________________________________________________________________________________
Explanation

Function Declaration:
int ft_recursive_power(int nb, int power):
This function calculates nb raised to the power of power using a recursive approach. 
It returns the result as an integer.

Handling Negative Powers:
if (power < 0)
    return (0);
	If power is negative, the function returns 0, as it does not handle negative exponents.

Base Case - Power Equals Zero:
if (power == 0)
    return (1);
	If power is 0, the function returns 1, as any number raised to the power of zero is 1.

Recursive Case:
return (nb * ft_recursive_power(nb, power - 1));
This line makes a recursive call to ft_recursive_power, reducing the power by 1 each time, while 
multiplying nb by the result of the recursive call. The recursion continues until power reaches 0, at 
which point the function returns 1 and the multiplication unfolds step by step.

	
	
	Português:

Declaração da Função:
int ft_recursive_power(int nb, int power):
Esta função calcula nb elevado à potência de power usando uma abordagem recursiva. 
Ela retorna o resultado como um inteiro.

Tratamento de Potências Negativas:
if (power < 0)
    return (0);
	Se power for negativo, a função retorna 0, pois não trata expoentes negativos.

Caso Base - Potência Igual a Zero:
if (power == 0)
    return (1);
	Se power for 0, a função retorna 1, pois qualquer número elevado à potência de zero é 1.

Caso Recursivo:
return (nb * ft_recursive_power(nb, power - 1));
Esta linha faz uma chamada recursiva para ft_recursive_power, reduzindo a power em 1 a cada chamada, 
enquanto multiplica nb pelo resultado da chamada recursiva. A recursão continua até que power atinja 0, 
quando a função retorna 1, e a multiplicação é resolvida passo a passo.
