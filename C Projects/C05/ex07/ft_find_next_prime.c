int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}



_______________________________________________________________________________________________
Explanation

Function Declaration:
int ft_is_prime(int nb):
This function checks if a given integer nb is a prime number. It returns 1 if nb is prime, and 0 otherwise.

Initial Conditions:
i = 2;
The variable i is initialized to 2, which is the smallest prime number.

if (nb < 2)
    return (0);
If nb is less than 2, the function returns 0 because prime numbers are defined as being greater than or equal to 2.

Checking for Factors:
while (i <= nb / i)
    if (nb % i == 0)
        return (0);
This loop continues as long as i is less than or equal to the square root of nb (nb / i). If nb is divisible by any i, 
it is not a prime number, and the function returns 0.

Return 1 if Prime:
If no divisors are found in the loop, the function returns 1, indicating that nb is a prime number.

_____________________
	
Function Declaration:
int ft_find_next_prime(int nb):
This function finds the next prime number greater than or equal to nb. It returns 2 if nb is less than 2, otherwise 
it finds and returns the next prime number.

Initial Check:
if (nb < 2)
    return (2);
If nb is less than 2, the function immediately returns 2, as 2 is the smallest prime number.

Finding Next Prime:
while (nb >= 2)
    if (ft_is_prime(nb) == 1)
        return (nb);
This loop continues as long as nb is greater than or equal to 2. It checks if nb is prime using the ft_is_prime 
function. If nb is found to be prime, the function returns nb.

Incrementing Number:
nb++;
If nb is not prime, it increments nb by 1 and continues checking for the next prime.

Return 0 (Unreachable):
return (0);
This line is technically unreachable because the loop will always find a prime number eventually, but it's included 
to satisfy the function's return type.

	
	
	
	Português:

Declaração da Função:
int ft_is_prime(int nb):
Esta função verifica se um número inteiro nb é primo. Ela retorna 1 se nb for primo e 0 caso contrário.

Condições Iniciais:
i = 2;
A variável i é inicializada com 2, que é o menor número primo.

if (nb < 2)
    return (0);
Se nb for menor que 2, a função retorna 0, pois números primos são definidos como sendo maiores ou iguais a 2.

Verificando Fatores:
while (i <= nb / i)
    if (nb % i == 0)
        return (0);
Este loop continua enquanto i for menor ou igual à raiz quadrada de nb (nb / i). Se nb for divisível por algum i, 
ele não é primo, e a função retorna 0.

Retornar 1 se for Primo:
Se nenhum divisor for encontrado no loop, a função retorna 1, indicando que nb é um número primo.
Explanation

_____________________

Declaração da Função:
int ft_find_next_prime(int nb):
Esta função encontra o próximo número primo maior ou igual a nb. Ela retorna 2 se nb for menor que 2; caso contrário, 
encontra e retorna o próximo número primo.

Verificação Inicial:
if (nb < 2)
    return (2);
Se nb for menor que 2, a função retorna imediatamente 2, pois 2 é o menor número primo.

Encontrando o Próximo Primo:
while (nb >= 2)
    if (ft_is_prime(nb) == 1)
        return (nb);
Este loop continua enquanto nb for maior ou igual a 2. Ele verifica se nb é primo usando a função ft_is_prime. Se nb 
for encontrado como primo, a função retorna nb.

Incrementando o Número:
nb++;
Se nb não for primo, ele incrementa nb em 1 e continua verificando o próximo primo.

Retornar 0 (Inalcansável):
return (0);
Esta linha é tecnicamente inalcançável, pois o loop sempre encontrará um número primo eventualmente, mas está incluída 
para satisfazer o tipo de retorno da função.
