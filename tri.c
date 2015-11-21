/*
** tri.c for pushswap
** 
** Made by marc brout
** Login   <brout_m@epitech.net>
** 
** Started on  Thu Nov 12 19:36:27 2015 marc brout
** Last update Sat Nov 21 09:07:13 2015 marc brout
*/

#include "include/pushswap.h"

void		tri(t_psw *psw, int v)
{
  int		len;

  fill_list(psw, v);
  calc_len(&len, psw->rootb);
  while (len > 1)
    {
      pa(psw, v);
      if (len-- > 2 && v == 0) 
	my_putchar(' ');
    }
  if (v == 0)
    my_putstr("\n");
}

void		rotator(t_psw *psw, int nbrot, int v)
{
  if (nbrot > 0)
    while (nbrot-- > 1)
      ra(psw, v);
  else
    while (nbrot++ < 0)
      rra(psw, v);
  pb(psw, v);

}

void		fill_list(t_psw *psw, int v)
{
  int		rot;
  int		len;

  calc_len(&len, psw->roota);
  while (len > 3)
    {
      rot = find_small(psw->roota, len);
      rotator(psw, rot, v);
      calc_len(&len, psw->roota);
    }
  if (psw->roota->next->val > psw->roota->next->next->val)
    sa(psw, v);
}

int		find_small(t_nb *la, int len)
{
  int		small;
  int		i;
  int		pos;
  int		nbrot;
  t_nb		*tmp;

  tmp = la->next;
  small = tmp->val;
  i = 1;
  pos = 0;
  while (tmp->root != 1)
    {
      pos = ((tmp->val < small) ? i : pos);
      small = ((tmp->val < small) ? tmp->val : small);
      tmp = tmp->next;
      i++;
    }
  nbrot = ((pos <= (len / 2)) ? pos : -(len - pos));
  return (nbrot);
}

void		calc_len(int *lena, t_nb *list)
{
  t_nb		*tmp;

  *lena = 1;
  tmp = list->next;
  while (tmp->root != 1)
    {
      *lena += 1;
      tmp = tmp->next;
    }
}
