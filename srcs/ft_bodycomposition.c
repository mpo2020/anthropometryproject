#include "../includes/antrop.h"

void	bodycomposition(double weight, char gender, double age)
{
	double	fat;
	double	absolutefat;
	double	leanmass;

	fat = pollock3d(gender, age);
	absolutefat = weight * fat / 100;
	leanmass = weight - absolutefat;
	printf("%%Fat: %.2lf%%       Fat: %.1lfKg\nFat-free mass: %.1lfKg\n", fat, absolutefat, leanmass);
}