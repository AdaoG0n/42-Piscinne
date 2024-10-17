int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}



_______________________________________________________________________________________________
Explanation

Function Declaration:
int ft_is_prime(int nb):
This function checks whether a given integer nb is a prime number. It returns 1 if nb is prime, and 0 otherwise.

Initial Conditions:
i = 2;
The variable i is initialized to 2, which is the smallest prime number. It will be used to test divisibility.

if (nb <= 1)
    return (0);
If nb is less than or equal to 1, the function returns 0 because prime numbers must be greater than 1.

Checking for Factors:
while (i <= (nb / 2))
    if (nb % i == 0)
        return (0);
This loop iterates through numbers from 2 to nb / 2. If nb is divisible by any of these values, it is not a 
prime number, and the function returns 0.

Return 1 if Prime:
If no divisors are found in the loop, the function returns 1, indicating that nb is a prime number.

	
	
	Português:

Declaração da Função:
int ft_is_prime(int nb):
Esta função verifica se um número inteiro nb é primo. Ela retorna 1 se nb for primo, e 0 caso contrário.

Condições Iniciais:
i = 2;
A variável i é inicializada com 2, que é o menor número primo. Ela será usada para testar divisibilidade.

if (nb <= 1)
    return (0);
Se nb for menor ou igual a 1, a função retorna 0, pois números primos devem ser maiores que 1.

Verificando Fatores:
while (i <= (nb / 2))
    if (nb % i == 0)
        return (0);
Este loop itera de 2 até nb / 2. Se nb for divisível por algum desses valores, ele não é primo, e a função 
retorna 0.

Retornar 1 se for Primo:
Se nenhum divisor for encontrado no loop, a função retorna 1, indicando que nb é um número primo.
