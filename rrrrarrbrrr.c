/*
** rrrrarrbrrr.c for pushswap
** 
** Made by marc brout
** Login   <brout_m@epitech.net>
** 
** Started on  Thu Nov 12 17:11:18 2015 marc brout
** Last update Thu Nov 12 17:47:44 2015 marc brout
*/

#include "include/pushswap.h"

void		rr(t_psw *psw)
{
  my_putstr("rr");
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
}

void		rra(t_psw *psw)
{
  my_putstr("rra");
  psw->roota->val = psw->roota->prev->val;
  psw->roota->root = 0;
  psw->roota->prev->val = 0;
  psw->roota->prev->root = 1;
  psw->roota = psw->roota->prev;
}

void		rrb(t_psw *psw)
{
  my_putstr("rrb");
  psw->rootb->val = psw->rootb->prev->val;
  psw->rootb->root = 0;
  psw->rootb->prev->val = 0;
  psw->rootb->prev->root = 1;
  psw->rootb = psw->rootb->prev;
}

void		rrr(t_psw *psw)
{
  my_putstr("rrr");
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
}


