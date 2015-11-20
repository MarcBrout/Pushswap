/*
** papb.c for pushswap
** 
** Made by marc brout
** Login   <brout_m@epitech.net>
** 
** Started on  Thu Nov 12 17:25:28 2015 marc brout
** Last update Fri Nov 20 10:19:42 2015 marc brout
*/

#include <stdlib.h>
#include "include/pushswap.h"

void		rm_first_elem(t_nb *root)
{
  t_nb		*tmp;

  root->next->next->prev = root;
  tmp = root->next->next;
  if (root->next != NULL)
    free(root->next);
  root->next = tmp;
}

void		pa(t_psw *psw, int v)
{
  int		nb;

  my_putstr("pa ");
  nb = psw->rootb->next->val;
  add_elem_beg(nb, psw->roota);
  rm_first_elem(psw->rootb);
  if (v == 1)
    show_v(psw);
}

void		pb(t_psw *psw, int v)
{
  int		nb;

  my_putstr("pb ");
  nb = psw->roota->next->val;
  add_elem_beg(nb, psw->rootb);
  rm_first_elem(psw->roota);
  if (v == 1)
    show_v(psw);
}

void		show_v(t_psw *psw)
{
  my_putstr("\nList a : ");
  show_l(psw->roota);
  my_putstr("\nList b : ");
  show_l(psw->rootb);
  my_putchar('\n');
}

void		free_psw(t_psw *psw)
{
  t_nb		*fr;
  t_nb		*tmp;

  tmp = psw->roota->prev;
  while (tmp && tmp->root == 0)
    {
      fr = tmp;
      tmp = tmp->prev;
      free(fr);
    }
  if (psw->roota != NULL)
    free(psw->roota);
  if (psw->rootb != NULL)
    free(psw->rootb);
  if (psw != NULL)
    free(psw);
}
