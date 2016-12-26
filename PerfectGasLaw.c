#include <stdlib.h>
#include <stdio.h>

#define PGCONSTANT 8.31 /* Perfect gas constant */

float calc_pression(void)
{
  double volume;
  double mole_nb;
  double temperature;

  printf("Number of moles? (mol) :");
  scanf("%lf", &numberMoles);
  printf("Volume? (m^3) :");
  scanf("%lf", &volume);
  printf("Temperature? (Kelvin) :");
  scanf("%lf", &temperature);
  return ((numberMoles * PGCONSTANT * temperature) / volume);
}

float calc_volume(void)
{
  double pression;
  double mole_nb;
  double temperature;

  printf("Number of moles? (mol) :");
  scanf("%lf", &numberMoles);
  printf("Pression? (Pascal) :");
  scanf("%lf", &pression);
  printf("Temperature? (Kelvin) :");
  scanf("%lf", &temperature);
  return ((numberMoles * constant * temperature) / pression);
}

float calc_moles(void)
{
  double pression;
  double volume;
  double temperature;

  printf("Pression? (Pascal) :");
  scanf("%lf", &pression);
  printf("Volume? (m^3) :");
  scanf("%lf", &volume);
  printf("Temperature? (Kelvin) :");
  scanf("%lf", &temperature);
  return ((pression * volume) / (constant * temperature));
}

float calc_temp(void)
{
  double pression;
  double volume;
  double mole_nb;

  printf("Pression? (Pascal) :");
  scanf("%lf", &pression);
  printf("Volume? (m^3) :");
  scanf("%lf", &volume);
  printf("Moles? (mol) :");
  scanf("%lf", &numberMoles);
  return ((pression * volume) / (numberMoles * constant));
}

int main(void)
{
  printf("Welcome my friend! Which of the following variables would you like to calculate?\n (p)ression\n (v)olume, (t)emperature\n (n)umber of moles?\nChoice: ");

  switch(getchar())
  {
    case 'p':
      printf("Pression is equal to %lf Pascal.\n", calc_pression());
      break;
    case 'v':
      printf("Volume is equal to %lf cube metres.\n", calc_volume());
      break;
    case 'n':
      printf("Number of Moles is equal to %lf mol.\n", calc_moles());
      break;
    case 't':
      printf("Temperature is equal to %lf Kelvin.\n", calc_temp())
      break;
    default:
      printf("Unrecognized input\n");
      return (EXIT_FAILURE);
      break;
  }
  return (EXIT_SUCCESS);
}
