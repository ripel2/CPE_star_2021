/*
** EPITECH PROJECT, 2021
** middle
** File description:
** Draws the stars in the middle.
*/

unsigned int middle_shift(unsigned int size, unsigned int level)
{
    unsigned int result;

    result = get_middle_row_size(size);
    result -= (level - 1) * 2;
    return (result);
}

void draw_row(unsigned int size, unsigned int level)
{
    unsigned int shift;

    put_spaces(level);
    my_putchar('*');
    shift = middle_shift(size, level);
    put_spaces(shift);
    my_putchar('*');
    my_putchar('\n');
}

void middle(unsigned int size)
{
    unsigned int level;

    for (level = 1; level <= size; level++)
        draw_row(size, level);
    for (level = (size - 1); level >= 1; level--)
        draw_row(size, level);
}
