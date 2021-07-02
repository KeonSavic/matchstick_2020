/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** header libmy
*/

#ifndef LIB_MY_
#define LIB_MY_

void my_putchar(char c);
char *my_strstr(char *str, char const *to_find);
int my_isneg(int nb);
int my_strcmp(char const *s1, char const *s2);
int my_put_nbr(int nb);
int my_strncmp(char const *s1, char const *s2, int n);
void my_swap(int *a, int *b);
char *my_strupcase(char *str);
int my_putstr(char const *str);
char *my_strlowcase(char *str);
int my_strlen(char const *str);
char *my_strcapitalize(char *str);
int my_getnbr(char const *str);
int my_str_isalpha(char const *str);
void my_sort_int_array(int *tab, int size);
int my_str_isnum(char const *str);
int my_compute_power_rec(int nb, int power);
int my_str_islower(char const *str);
int my_compute_square_root(int nb);
int my_str_isupper(char const *str);
int my_is_prime(int nb);
int my_str_isprintable(char const *str);
int my_find_prime_sup(int nb);
int my_showstr(char const *str);
char *my_strcpy(char *dest, char const *src);
int my_showmem(char const *str, int size);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strcat(char *dest, char const *src);
char *my_revstr(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_putnbr_base(int nbr, char const *base);
int my_getnbr_base(char const *str, char const *base);
void display_rush_345(int *size);
void display_rush_classic(int assignement_nb, int *size);
int rush3(char *str);
int check_rush_3(char *str, int *size);
int check_if_4_or_5(char *str, int *size);
int check_rush_2(char *str, int *size);
int check_rush_1(char *str, int *size);
int *calculate_size(char *str, int *size);
int display_error(char *str);

#endif
