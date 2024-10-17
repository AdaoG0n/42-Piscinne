#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
	{
		return (0);
	}
	i = 0;
	while (i * i < nb)
	{
		i++;
	}
	if (i * i == nb)
	{
		return (i);
	}
	else
	{
		return (0);
	}
}



_______________________________________________________________________________________________
Explanation

Include Directives:
#include <stdio.h>
#include <stdlib.h>:
These lines include the standard input-output and standard library headers, which are necessary for 
certain operations such as printf and dynamic memory allocation, though they are not directly used in this function.

Function Declaration:
int ft_sqrt(int nb):
This function calculates the square root of a given integer nb. It returns the square root if nb is a perfect square, 
otherwise, it returns 0.

Handling Negative Input:
if (nb < 0)
    return (0);
If the input nb is negative, the function returns 0 because the square root of a negative number is not defined in 
the set of real numbers.

Variable Initialization:
i = 0;
This line initializes the variable i, which will be used to iterate and check for the square root.

Iterating to Find the Square Root:
while (i * i < nb)
    i++;
This loop continues until the square of i is greater than or equal to nb. It increments i by 1 each time, checking 
if i * i is less than nb.

Checking if the Number is a Perfect Square:
if (i * i == nb)
    return (i);
If i * i is equal to nb, the function returns i, indicating that nb is a perfect square and i is its square root.

Return 0 if Not a Perfect Square:
else
    return (0);
If i * i does not equal nb, the function returns 0, indicating that nb is not a perfect square.

	
	
	Português:

Diretivas de Inclusão:
#include <stdio.h>
#include <stdlib.h>:
Essas linhas incluem os cabeçalhos de entrada e saída padrão e da biblioteca padrão, que são necessários para certas 
operações, como printf e alocação dinâmica de memória, embora não sejam usados diretamente nesta função.

Declaração da Função:
int ft_sqrt(int nb):
Esta função calcula a raiz quadrada de um número inteiro nb. Ela retorna a raiz quadrada se nb for um quadrado perfeito; 
caso contrário, retorna 0.

Tratamento de Entrada Negativa:
if (nb < 0)
    return (0);
Se a entrada nb for negativa, a função retorna 0 porque a raiz quadrada de um número negativo não é definida no 
conjunto dos números reais.

Inicialização da Variável:
i = 0;
Esta linha inicializa a variável i, que será usada para iterar e verificar a raiz quadrada.

Iterando para Encontrar a Raiz Quadrada:
while (i * i < nb)
    i++;
Este loop continua até que o quadrado de i seja maior ou igual a nb. Ele incrementa i em 1 a cada iteração, verificando 
se i * i é menor que nb.

Verificando se o Número é um Quadrado Perfeito:
if (i * i == nb)
    return (i);
Se i * i for igual a nb, a função retorna i, indicando que nb é um quadrado perfeito e i é sua raiz quadrada.

Retornar 0 se Não For um Quadrado Perfeito:
else
    return (0);
Se i * i não for igual a nb, a função retorna 0, indicando que nb não é um quadrado perfeito.
