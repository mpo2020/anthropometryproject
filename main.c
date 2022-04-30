#include "./includes/antrop.h"

/*the variable age is like a double, because when I used int for some reason that I still haven't
 discovered using scanf, only 0 was allocated in the variable.*/
int	main(void)
{
	double	age;
	double	height;
	double	weight;
	char	gender;
	char	choice;
	printf("Enter your height in centimenters\n");
	scanf("%lf", &height);
	printf("Enter your weight in kilograms\n");
	scanf("%lf", &weight);
	printf("You are m(male) or f(female):\n");
	scanf("%s", &gender);
	printf("how old are you?:\n");
	scanf("%lf", &age);
	printf("Do you want to do a full body composition assessment? y(yes) or n(no)\n");
	scanf("%s", &choice);
	printf("Height: %.2lf m      Weight: %.1lf Kg\n", height / 100, weight);
	printf("Your BMI is: %.2lf %s\n age: %.0lf years\n", bmi(height, weight), bmianalysis(bmi(height, weight)), age);
	if (choice == 'y' || choice == 'Y')
	{
		bodycomposition(weight, gender, age);
	}
	return (0);
}