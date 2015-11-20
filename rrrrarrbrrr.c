/*
** rrrrarrbrrr.c for pushswap
** 
** Made by marc brout
** Login   <brout_m@epitech.net>
** 
** Started on  Thu Nov 12 17:11:18 2015 marc brout
** Last update Mon Nov 16 17:34:13 2015 marc brout
*/

#include "include/pushswap.h"

void		rr(t_psw *psw, int v)
{
  my_putstr("rr ");
  psw->roota->val = psw->roota->next->val;
  psw->roota->root = 0;
  psw->roota->next->val = 0;
  psw->roota->next->root = 1;
  psw->roota = psw->roota->next;
  psw->rootb->val = psw->rootb->next->val;
  psw->rootb->root = 0;
  psw->rootb->next->val = 0;
  psw->rootb->next->root = 1;
  psw->rootb = psw->rootb->next;
  if (v == 1)
    show_v(psw);
}

void		rra(t_psw *psw, int v)
{
  my_putstr("rra ");
  psw->roota->val = psw->roota->prev->val;
  psw->roota->root = 0;
  psw->roota->prev->val = 0;
  psw->roota->prev->root = 1;
  psw->roota = psw->roota->prev;
  if (v == 1)
    show_v(psw);
}

void		rrb(t_psw *psw, int v)
{
  my_putstr("rrb ");
  psw->rootb->val = psw->rootb->prev->val;
  psw->rootb->root = 0;
  psw->rootb->prev->val = 0;
  psw->rootb->prev->root = 1;
  psw->rootb = psw->rootb->prev;
  if (v == 1)
    show_v(psw);
}

void		rrr(t_psw *psw, int v)
{
  my_putstr("rrr ");
  psw->roota->val = psw->roota->prev->val;
  psw->roota->root = 0;
  psw->roota->prev->val = 0;
  psw->roota->prev->root = 1;
  psw->roota = psw->roota->prev;
  psw->rootb->val = psw->rootb->prev->val;
  psw->rootb->root = 0;
  psw->rootb->prev->val = 0;
  psw->rootb->prev->root = 1;
  psw->rootb = psw->rootb->prev;
  if (v == 1)
    show_v(psw);
}
