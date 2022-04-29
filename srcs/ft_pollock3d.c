#include "../includes/antrop.h"

double	pollock3d(char gender, double age)
{
	double	skinfolds1;
	double	skinfolds2;
	double	skinfolds3;
	double	fat;
	
	if (gender == 'm' || gender == 'M')
	{
		printf("type your cotan folds in the following sequence (abdominal chest and thigh):\n");
		scanf("%lf %lf %lf", &skinfolds1, &skinfolds2, &skinfolds3);
		skinfolds1 = skinfolds1 + skinfolds2 + skinfolds3;
		fat = 1.10938 - 0.0008267 * skinfolds1 + 0.0000016 * (skinfolds1 * skinfolds1) - 0.0002574 * age;
	} 
	if (gender == 'f' || gender == 'F')
	{
		printf("type your cotan folds in the following sequence (triceps, suprailiac and thigh):\n");
		scanf("%lf, %lf, %lf", &skinfolds1, &skinfolds2, &skinfolds3);
		skinfolds1 = skinfolds1 + skinfolds2 + skinfolds3;
		fat = 1.0994921 - 0.0009929 * skinfolds1 + 0.0000023 * (skinfolds1 * skinfolds1) - 0.0001392 * age;
		
	}
	fat = ((4.95/ fat) - 4.50) * 100;
	return (fat);
}