/*
** tri.c for pushswap
** 
** Made by marc brout
** Login   <brout_m@epitech.net>
** 
** Started on  Thu Nov 12 19:36:27 2015 marc brout
** Last update Mon Nov 16 14:17:05 2015 marc brout
*/

#include "include/pushswap.h"

void		tri(t_psw *psw)
{
  int		len;
  
  fill_list(psw);
  calc_len(&len, psw->rootb);
  while (len-- > 1)
    {
      my_putchar(' ');
      pa(psw);
    }
  my_putchar('\n');
  show_l(psw->roota);
}

void		rotator(t_psw *psw, int nbrot)
{
  if (nbrot > 0)
    while (nbrot > 1)
      {
	my_putchar(' ');
	ra(psw);
	nbrot -= 1;
      }
  else
    while (nbrot < 0)
      {
	my_putchar(' ');
	rra(psw);
	nbrot += 1;
      }
  my_putchar(' ');
  pb(psw);
  /* printf("\nval pushed : %d\n==========\n",psw->rootb->next->val); */
}

void		fill_list(t_psw *psw)
{
  int		rot;
  int		len;

  calc_len(&len, psw->roota);
  while (len > 2)
    {
      calc_len(&len, psw->roota);
      rot = find_small(psw->roota, len);
      rotator(psw, rot);
    } 
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
  /* printf("\n-----------"); */
  while (tmp->root != 1)
    {
      pos = ((tmp->val < small) ? i : pos);
      small = ((tmp->val < small) ? tmp->val : small);
      /* printf("\npos = %d\n", pos); */
      tmp = tmp->next;
      i++;
    }
  /* printf("\nsmall = : %d\n", small); */
  /* printf("-----------\n"); */
  nbrot = ((pos <= (len / 2)) ? pos : -(len - pos));
  /* printf("rotation : %d\n", nbrot); */
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
