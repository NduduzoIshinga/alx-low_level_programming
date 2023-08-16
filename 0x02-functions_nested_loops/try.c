#include <stdio.h>

/**
 * jack_bauer - print times of day
 * 
 * Return: void
 */
int jack_bauer(void)
{
        int s,m,h,h2;

        h2 =48;
        while (h2 <= 50)
        {
                h = 48;
                while (h <= 51)
                {
                        m = 48;
                        while (m <= 53)
                        {
                                s = 48;
                                while (s <= 57)
                                {
                                        putchar(h2);
                                        putchar(h);
                                        putchar(':');
                                        putchar(m);
                                        putchar(s);
                                        putchar('\n');
                                        s++;
                                }
                                m++;
                        }
                        h++;
                }
                h2++;
        }
	return (0);
}
