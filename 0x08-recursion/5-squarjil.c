#include "main.h"

/**
 * squar_hand - made function togit the square root
 * @i : the number of return
 * @n : the number given to be squred root
 * Return: i if it is integer or -1 if not
 */

int squar_hand(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	return (squar_hand (n, i + 1));
			}
int _sqrt_recursion(int n)
{
int i = 1;

if (n == 0 || n == 1)

return(n);

else if (n < 0)

return (-1);
else

return (squar_hand( n, i));
		
		}
	


