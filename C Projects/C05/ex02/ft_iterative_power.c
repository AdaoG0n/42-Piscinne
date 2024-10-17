int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}



_______________________________________________________________________________________________
Explanation

Function Declaration:
int ft_iterative_power(int nb, int power):
This function calculates nb raised to the power of power using an iterative approach. It returns the result as an integer.

Variable Initialization:
int result;:
This variable is initialized to 1 and will store the result of the power calculation.

Handling Negative Powers:
if (power < 0)
    return (0);
	If power is negative, the function returns 0, as this function does not handle negative exponents.

Handling Zero Raised to Zero:
if (nb == 0 && power == 0)
    return (1);
	Mathematically, 0^0 is generally considered 1, so the function handles this special case by returning 1 when 
	both nb and power are 0.

Iterative Power Calculation:
while (power > 0):
This loop multiplies result by nb for each iteration and decrements power until it reaches 0. The loop essentially 
calculates nb^power by multiplying nb by itself power times.

Return Statement:
return (result);
Once the loop finishes, the function returns the calculated result.

	
	
	Português:

Declaração da Função:
int ft_iterative_power(int nb, int power):
Esta função calcula nb elevado à potência de power usando uma abordagem iterativa. Ela retorna o resultado como um inteiro.

Inicialização de Variáveis:
int result;:
Esta variável é inicializada como 1 e armazenará o resultado do cálculo da potência.

Tratamento de Potências Negativas:
if (power < 0)
    return (0);
	Se power for negativo, a função retorna 0, pois não trata expoentes negativos.

Tratamento de Zero Elevado a Zero:
if (nb == 0 && power == 0)
    return (1);
	Matematicamente, 0^0 é geralmente considerado 1, então a função trata este caso especial retornando 1 quando 
	tanto nb quanto power são 0.

Cálculo Iterativo da Potência:
while (power > 0):
Este loop multiplica result por nb em cada iteração e decrementa power até que ele atinja 0. O loop essencialmente 
calcula nb^power multiplicando nb por si mesmo power vezes.

Instrução de Retorno:
return (result);
Quando o loop termina, a função retorna o resultado calculado.
