/*
** EPITECH PROJECT, 2019
** my
** File description:
** .h
*/

#ifndef MY_H
#define MY_H

#define M_PI 3.141592


typedef struct coordonate 
{
    float x;
    float y;
}coordonate_t;

typedef struct list
{
    float *data;
    struct list *next;
} list_t;

void manage_argument(char const **av, float x, float y, int nb_arg);
void my_putchar(char c);
int my_strlen(char *str);
char *my_revstr(char *str);
char *my_getnbr(char const *str);
void my_putstr(char *str);
void int_reflection(float **matrix_reflection, float cos_vx, float sin_vx);
void int_rotation(float **matrix_rotation, float cos_vx, float sin_vx);
void int_scale(float **matrix_scale, float vx, float vy);
void int_translat(float **matrix_translation, float vx, float vy);
void manage_number(char const **av, int *i, int nb_number, int ac);
void there_is_number_after(char const **av, int *i, int ac);
void my_show_list(list_t *list, float x, float y);
int display_help(void);
float *mutipicate_matrix(float *matrix, float *matrix2);
float *reflection(float x, float y, char const **av, int i);
float *rotation(float x, float y, char const **av, int i);
float *scale(float x, float y, char const **av, int i);
float *translation(float x, float y, char const **av, int i);

#endif
