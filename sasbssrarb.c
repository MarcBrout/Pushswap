/*
** sasbss.c for pushswap
** 
** Made by marc brout
** Login   <brout_m@epitech.net>
** 
** Started on  Thu Nov 12 16:52:25 2015 marc brout
** Last update Thu Nov 12 17:25:06 2015 marc brout
*/

#include "include/pushswap.h"

void		sa(t_nb *list)
{
  int		stock;

  my_putstr("sa");
  stock = list->next->val;
  list->next->val = list->next->next->val;
  list->next->next->val = stock;
}

void		sb(t_nb *list)
{
  int		stock;

  my_putstr("sb");
  stock = list->next->val;
  list->next->val = list->next->next->val;
  list->next->next->val = stock;
}

void		ss(t_nb *lista, t_nb *listb)
{
  int		stock;

  my_putstr("ss");
  stock = lista->next->val;
  lista->next->val = lista->next->next->val;
  lista->next->next->val = stock;
  stock = listb->next->val;
  listb->next->val = listb->next->next->val;
  listb->next->next->val = stock;
}

void		ra(t_psw *psw)
{
  my_putstr("ra");
  psw->roota->val = psw->roota->next->val;
  psw->roota->root = 0;
  psw->roota->next->val = 0;
  psw->roota->next->root = 1;
  psw->roota = psw->roota->next;
}

void		rb(t_psw *psw)
{
  my_putstr("rb");
  psw->rootb->val = psw->rootb->next->val;
  psw->rootb->root = 0;
  psw->rootb->next->val = 0;
  psw->rootb->next->root = 1;
  psw->rootb = psw->rootb->next;
}
