/*
** pushswap.h for pushswap
** 
** Made by marc brout
** Login   <brout_m@epitech.net>
** 
** Started on  Thu Nov 12 12:56:29 2015 marc brout
** Last update Mon Nov 16 13:41:04 2015 marc brout
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
void add_elem_end(int, t_nb *);
void add_elem_beg(int, t_nb *);
void rm_first_elem(t_nb *);
void sa(t_nb *);
void sb(t_nb *);
void ss(t_nb *, t_nb *);
void ra(t_psw *);
void rb(t_psw *);
void pa(t_psw *);
void pb(t_psw *);
void rr(t_psw *);
void rra(t_psw *);
void rrb(t_psw *);
void rrr(t_psw *);
void tri(t_psw *);
void rotator(t_psw *, int);
void fill_list(t_psw *);
int find_small(t_nb *, int);
void calc_len(int *, t_nb *);

#endif
