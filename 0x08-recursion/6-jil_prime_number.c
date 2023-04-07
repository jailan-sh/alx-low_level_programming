#include "main.h"

int is_prime_hand(int n, int i)
{
	if (i == 1)
		return (1);

	
	if (6 * i + 1 == n || 6 * i - 1 == n)
		is_prime_hand(n, i - 1);

int is_prime_number(int n)
{

if (n <= 0 || n == 1)
{
return (0);
}

else if  (n == 2 || n == 3)
{
return (1);
}
else

return (is_prime_hand(n, n - 1));
		
		}
				
