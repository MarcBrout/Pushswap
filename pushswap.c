/*
** pushswap.c for pushswap
** 
** Made by marc brout
** Login   <brout_m@epitech.net>
** 
** Started on  Thu Nov 12 12:53:26 2015 marc brout
** Last update Mon Nov 16 11:21:33 2015 marc brout
*/

#include <stdlib.h>
#include "include/pushswap.h"

t_psw		*init_all()
{
  t_nb		*la;
  t_nb		*lb;
  t_psw		*psw;
  
  if ((psw = malloc(sizeof(t_psw))) == NULL ||
      (la = malloc(sizeof(t_nb))) == NULL ||
      (lb = malloc(sizeof(t_nb))) == NULL)
    exit (1);
  la->root = 1;
  la->val = 0;
  la->prev = la;
  la->next = la;
  psw->roota = la;
  lb->root = 1;
  lb->val = 0;
  lb->prev = lb;
  lb->next = lb;
  psw->rootb = lb;
  return (psw);
}

void		add_elem_beg(int nb, t_nb *list)
{
  t_nb		*elem;
  
  if ((elem = malloc(sizeof(t_nb))) == NULL)
    exit (1);
  elem->root = 0;
  elem->val = nb;
  elem->prev = list;
  elem->next = list->next;
  list->next->prev = elem;
  list->next = elem;
}

void		add_elem_end(int nb, t_nb *list)
{
  t_nb		*elem;
  
  if ((elem = malloc(sizeof(t_nb))) == NULL)
    exit (1);
  elem->root = 0;
  elem->val = nb;
  elem->prev = list->prev;
  elem->next = list;
  list->prev->next = elem;
  list->prev = elem;
}

void		show_l(t_nb *list)
{
  t_nb		*tmp;
  
  tmp = list->next;
  while (tmp->root != 1)
    {
      my_put_nbr(tmp->val);
      my_putchar(' ');
      my_putchar('\n');
      tmp = tmp->next;
    }
}

int		main(int ac, char **av)
{
  int		i;
  t_psw		*psw;

  if (ac > 1)
    {
      psw = init_all();
      i = 1;  
      while (i < ac)
	{
	  add_elem_end(my_getnbr(av[i]), psw->roota);
	  i++;
	}
      tri(psw);
    }
  return (0);
}
