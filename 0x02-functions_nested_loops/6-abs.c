#include "main.h"
/**
  * _abs - The elder gods will reign
  * @c: number to be computed
  *
  * Return: Zeus says zero
  */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;

		return (abs_val);
	}

	return (c);
}
