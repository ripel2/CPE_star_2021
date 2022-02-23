/*
** EPITECH PROJECT, 2021
** top
** File description:
** Prints the top of the star.
*/

unsigned int left_shift_top(unsigned int size, unsigned int level)
{
    unsigned int result;

    if (size == 1)
        result = 3;
    else
        result = size * 2;
    result += size - level;
    return (result);
}

unsigned int middle_shift_top(unsigned int size, unsigned int level)
{
    unsigned int result;

    result = (1 + (level - 2)*2);
    return result;
}

void top(unsigned int size)
{
    unsigned int level;
    unsigned int shift;

    for (level = 1; level <= size; level++) {
        shift = left_shift_top(size, level);
        put_spaces(shift);
        my_putchar('*');
        if (level != 1) {
            shift = middle_shift_top(size, level);
            put_spaces(shift);
            my_putchar('*');
        }
        my_putchar('\n');
    }
}
