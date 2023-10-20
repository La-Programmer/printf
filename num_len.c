#include "main.h"
/**
* num_len - Determines how many digits are in a number
* @num: Number to process
* Return: Number of digits in the number
*/
int num_len(int num)
{
        int count = 0;

        while (num / 10 != 0)
        {
                num /= 10;
                count++;
        }
        count += 1;

        return (count);
}
