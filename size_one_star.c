/*
** EPITECH PROJECT, 2021
** size_one_star
** File description:
** Draws a star of size one on the screen.
*/

void size_one_star_top(void)
{
    put_spaces(3);
    my_putchar('*');
    my_putchar('\n');
}

void size_one_star_middle_row(void)
{
    int i;

    for (i = 0; i < 3; i++)
        my_putchar('*');
    my_putchar(' ');
    for (i = 0; i < 3; i++)
        my_putchar('*');
    my_putchar('\n');
}

void size_one_star_middle(void)
{
    int i;

    my_putchar(' ');
    my_putchar('*');
    put_spaces(3);
    my_putchar('*');
    my_putchar('\n');
}

void size_one_star(void)
{
    size_one_star_top();
    size_one_star_middle_row();
    size_one_star_middle();
    size_one_star_middle_row();
    size_one_star_top();
}
