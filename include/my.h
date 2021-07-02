/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** header libmy
*/

#include <stdarg.h>

#ifndef LIB_MY_
#define LIB_MY_

typedef struct lnkd_list_s {
    void *data;
    struct lnkd_list_s *next;
    struct lnkd_list_s *prev;
} lnkd_list_t;

void my_putchar(char c);
char *my_strstr(char *str, char const *to_find);
int my_isneg(int nb);
int my_strcmp(char *s1, char *s2);
char *my_stradd(char *s1, char *s2);
int my_put_nbr(int nb);
void my_put_binary(int nb);
void my_put_octal(int nb);
void my_put_unsigned_nbr(unsigned int nb);
int my_strncmp(char const *s1, char const *s2, int n);
void my_swap(int *a, int *b);
char *my_strupcase(char *str);
int my_putstr(char const *str);
char *my_strlowcase(char *str);
int my_strlen(char const *str);
char *my_strdup(char *new_str, char *offset);
char *my_revstr(char *str);
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
char *my_strncat(char *dest, char const *src, int nb);
int my_putnbr_base(int nbr, char const *base);
int my_getnbr_base(char const *str, char const *base);
char *my_int_to_str(int nb);
int *calculate_size(char *str, int *size);
int display_error(char *str);
char **my_str_to_word_array(char *str);
void my_show_word_array(char **arr);
int my_is_number(char *str);
char **my_arrdup(char **arr);
void my_printf(char *str, ...);
void print_char(va_list args);
void print_nbr(va_list args);
void print_str(va_list args);
void print_octal(va_list args);
void print_str_octal(va_list args);
void print_unsigned_nbr(va_list args);
void print_hexa(va_list args);

#endif
