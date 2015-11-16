/*
** papb.c for pushswap
** 
** Made by marc brout
** Login   <brout_m@epitech.net>
** 
** Started on  Thu Nov 12 17:25:28 2015 marc brout
** Last update Thu Nov 12 17:49:10 2015 marc brout
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

void		pa(t_psw *psw)
{
  int		nb;

  my_putstr("pa");
  nb = psw->rootb->next->val;
  add_elem_beg(nb, psw->roota);
  rm_first_elem(psw->rootb);
}

void		pb(t_psw *psw)
{
  int		nb;

  my_putstr("pb");
  nb = psw->roota->next->val;
  add_elem_beg(nb, psw->rootb);
  rm_first_elem(psw->roota);
}
