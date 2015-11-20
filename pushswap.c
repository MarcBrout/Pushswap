/*
** pushswap.c for pushswap
** 
** Made by marc brout
** Login   <brout_m@epitech.net>
** 
** Started on  Thu Nov 12 12:53:26 2015 marc brout
** Last update Fri Nov 20 09:57:14 2015 marc brout
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
    return (NULL);
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

int		add_elem_beg(int nb, t_nb *list)
{
  t_nb		*elem;

  if ((elem = malloc(sizeof(t_nb))) == NULL)
    return (1);
  elem->root = 0;
  elem->val = nb;
  elem->prev = list;
  elem->next = list->next;
  list->next->prev = elem;
  list->next = elem;
  return (0);
}

int		add_elem_end(int nb, t_nb *list)
{
  t_nb		*elem;

  if ((elem = malloc(sizeof(t_nb))) == NULL)
    return (1);
  elem->root = 0;
  elem->val = nb;
  elem->prev = list->prev;
  elem->next = list;
  list->prev->next = elem;
  list->prev = elem;
  return (0);
}

void		show_l(t_nb *list)
{
  t_nb		*tmp;

  tmp = list->next;
  while (tmp->root != 1)
    {
      my_put_nbr(tmp->val);
      if (tmp->next->root != 1)
	my_putchar(' ');
      tmp = tmp->next;
    }
}

int		main(int ac, char **av)
{
  int		i;
  int		v;
  t_psw		*psw;

  if (ac < 2)
    return (1);
  if ((psw = init_all()) == NULL)
    return (1);
  i = ((my_strcmp(av[1], "-v") == 0) ? 2 : 1);
  v = ((my_strcmp(av[1], "-v") == 0) ? 1 : 0);
  while (i < ac && my_strcmp(av[i], "-v") != 0)
    if (add_elem_end(my_getnbr(av[i++]), psw->roota) == 1)
      return (1);
  if (av[i] && my_strcmp(av[i], "-v") == 0)
    v = 1;
  tri(psw, v);
  free_psw(psw);
  return (0);
}
