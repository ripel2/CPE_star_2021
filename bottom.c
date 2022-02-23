/*
** EPITECH PROJECT, 2021
** bottom
** File description:
** Prints the bottom of the star.
*/

unsigned int left_shift_bottom(unsigned int size, unsigned int level)
{
    unsigned int result;

    if (size == 1)
        result = 3;
    else
        result = size * 2;
    result += size - level;
    return (result);
}

unsigned int middle_shift_bottom(unsigned int size, unsigned int level)
{
    unsigned int result;

    result = 1 + (level - 2) * 2;
    return (result);
}

void bottom(unsigned int size)
{
    unsigned int level;
    unsigned int shift;

    for (level = size; level >= 1; level--) {
        shift = left_shift_bottom(size, level);
        put_spaces(shift);
        my_putchar('*');
        if (level != 1) {
            shift = middle_shift_bottom(size, level);
            put_spaces(shift);
            my_putchar('*');
        }
        my_putchar('\n');
    }
}
