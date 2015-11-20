/*
** pushswap.h for pushswap
** 
** Made by marc brout
** Login   <brout_m@epitech.net>
** 
** Started on  Thu Nov 12 12:56:29 2015 marc brout
** Last update Fri Nov 20 16:35:52 2015 marc brout
*/

#ifndef PUSHSWAP_H_
# define PUSHSWAP_H_

typedef struct		s_nb
{
  int			root;
  int			val;
  struct s_nb		*prev;
  struct s_nb		*next;
}			t_nb;

typedef struct		s_psw
{
  t_nb			*roota;
  t_nb			*rootb;
}			t_psw;

t_psw *init_all();
void show_l(t_nb *);
void show_v(t_psw *);
int check_l(t_nb *, int);
int add_elem_end(int, t_nb *);
int add_elem_beg(int, t_nb *);
void rm_first_elem(t_nb *);
void sa(t_psw *, int);
void sb(t_psw *, int);
void ss(t_psw *, int);
void ra(t_psw *, int);
void rb(t_psw *, int);
void pa(t_psw *, int);
void pb(t_psw *, int);
void rr(t_psw *, int);
void rra(t_psw *, int);
void rrb(t_psw *, int);
void rrr(t_psw *, int);
void tri(t_psw *, int);
void rotator(t_psw *, int, int);
void fill_list(t_psw *, int);
int find_small(t_nb *, int);
void calc_len(int *, t_nb *);
void free_psw(t_psw *);

#endif
