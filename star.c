/*
** EPITECH PROJECT, 2021
** star
** File description:
** Prints a star to the screen, based on a given size.
*/

void star(unsigned int size)
{
    if (size == 1) {
        size_one_star();
    } else if (size != 0) {
        top(size);
        middle_row(size);
        middle(size);
        middle_row(size);
        bottom(size);
    }
}
