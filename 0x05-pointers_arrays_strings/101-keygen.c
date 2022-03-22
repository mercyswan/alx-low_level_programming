#include <stdio.h>

#include <stdlib.h>

#include <time.h>



/**
 * main - generates random valid passwords
 * Return: 0 (on success).
 */
int main(void)
{


		int pass, sum;
			srand(time(NULL));
				sum = 0;
					while (sum <= 2645)

							{

										pass = (rand() % 128);
												sum += pass;
														printf("%c", pass);
															}
						printf("%c", 2772 - sum);
				

							return (0);

=======
int num;

srand(time(0));
num = rand();
printf("%i\n", num);
return (0);
>>>>>>> 5635d5cf61a9607d9511f31fd96ce4480aca17c1
}
