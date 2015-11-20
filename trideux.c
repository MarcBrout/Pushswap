/*
** trideux.c for pushswap
** 
** Made by marc brout
** Login   <brout_m@epitech.net>
** 
** Started on  Fri Nov 20 12:21:15 2015 marc brout
** Last update Fri Nov 20 16:40:12 2015 marc brout
*/

#include "include/pushswap.h"

int	tri_bulle(t_nb *list, int v)
{
  int	find;
  int	len;
  t_nb  *tmp;
  int	i;

  i = 0;
  find = 1;
  while (find)
    {
      tmp = list->next;
      while (tmp->next->root != 1)
	{
	  if (tmp->val > tmp->next->val)
	    tmp = tmp->next;
	  i++;
	}
    }
}
