/*
** EPITECH PROJECT, 2021
** middle_rows
** File description:
** Prints the horizontal middle rows.
*/

void middle_row(unsigned int size)
{
    unsigned int i;
    unsigned int count = 1 + size * 2;

    for (i = 0; i < count; i++)
        my_putchar('*');
    count = 1 + (size - 2) * 2;
    for (i = 0; i < count; i++)
        my_putchar(' ');
    count = 1 + size * 2;
    for (i = 0; i < count; i++)
        my_putchar('*');
    my_putchar('\n');
}

int get_middle_row_size(unsigned int size)
{
    int result;

    result = 1 + size * 2;
    result += 1 + (size - 2) * 2;
    result += 1 + (size - 2) * 2;
    return (result);
}
