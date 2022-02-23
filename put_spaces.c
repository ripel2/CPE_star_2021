/*
** EPITECH PROJECT, 2021
** put_spaces
** File description:
** Puts a given number of spaces on the screen.
*/

void put_spaces(unsigned int spaces)
{
    unsigned int i;

    for (i = 0; i < spaces; i++)
        my_putchar(' ');
}
