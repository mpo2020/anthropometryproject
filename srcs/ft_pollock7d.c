double pollock7d(char gender, double age)
{
	double	*skinfolds;
	double	skinfoldresult;
	double	fat;
/* adequar as formulas*/
	if (gender == 'm' || gender == 'M')
	{
		printf("type your cotan folds in the following sequence (abdominal chest and thigh):\n");
		scanf("%lf %lf %lf %lf %lf %lf %lf", &skinfolds[0], &skinfolds[2], &skinfolds[3], &skinfolds[4], &skinfolds[5], &skinfolds[6]);
		skinfoldresult = skinfolds[0] + skinfolds[1] + skinfolds[2] + skinfolds[3] + skinfolds[4] + skinfolds[5] + skinfolds[6];
		fat = 1.10938 - 0.0008267 * skinfoldresult + 0.0000016 * (skinfoldresult * skinfoldresult) - 0.0002574 * age;
	} 
	if (gender == 'f' || gender == 'F')
	{
		printf("type your cotan folds in the following sequence (triceps, suprailiac and thigh):\n");
		scanf("%lf %lf %lf %lf %lf %lf %lf", &skinfolds[0], &skinfolds[2], &skinfolds[3], &skinfolds[4], &skinfolds[5], &skinfolds[6]);
		skinfoldresult = skinfolds[0] + skinfolds[1] + skinfolds[2] + skinfolds[3] + skinfolds[4] + skinfolds[5] + skinfolds[6];
		fat = 1.0994921 - 0.0009929 * skinfoldresult + 0.0000023 * (skinfoldresult * skinfoldresult) - 0.0001392 * age;/*need fix*/
		
	}
	fat = ((4.95 / fat) - 4.50) * 100;
	return (fat);
}