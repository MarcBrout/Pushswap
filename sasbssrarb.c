/*
** sasbss.c for pushswap
** 
** Made by marc brout
** Login   <brout_m@epitech.net>
** 
** Started on  Thu Nov 12 16:52:25 2015 marc brout
** Last update Mon Nov 16 17:31:38 2015 marc brout
*/

#include "include/pushswap.h"

void		sa(t_psw *psw, int v)
{
  int		stock;

  my_putstr("sa ");
  stock = psw->roota->next->val;
  psw->roota->next->val = psw->roota->next->next->val;
  psw->roota->next->next->val = stock;
  if (v == 1)
    show_v(psw);
}

void		sb(t_psw *psw, int v)
{
  int		stock;

  my_putstr("sb ");
  stock = psw->rootb->next->val;
  psw->rootb->next->val = psw->rootb->next->next->val;
  psw->rootb->next->next->val = stock;
  if (v == 1)
    show_v(psw);
}

void		ss(t_psw *psw, int v)
{
  int		stock;

  my_putstr("ss ");
  stock = psw->roota->next->val;
  psw->roota->next->val = psw->roota->next->next->val;
  psw->roota->next->next->val = stock;
  stock = psw->rootb->next->val;
  psw->rootb->next->val = psw->rootb->next->next->val;
  psw->rootb->next->next->val = stock;
  if (v == 1)
    show_v(psw);
}

void		ra(t_psw *psw, int v)
{
  my_putstr("ra ");
  psw->roota->val = psw->roota->next->val;
  psw->roota->root = 0;
  psw->roota->next->val = 0;
  psw->roota->next->root = 1;
  psw->roota = psw->roota->next;
  if (v == 1)
    show_v(psw);
}

void		rb(t_psw *psw, int v)
{
  my_putstr("rb ");
  psw->rootb->val = psw->rootb->next->val;
  psw->rootb->root = 0;
  psw->rootb->next->val = 0;
  psw->rootb->next->root = 1;
  psw->rootb = psw->rootb->next;
  if (v == 1)
    show_v(psw);
}
