char	*bmianalysis(double bmi)
{
	if (bmi < 18.5)
		return ("You are under the desired weight for your height");
	else
	if ((bmi >= 18.5) && (bmi < 25))
		return ("Your weight is normal");
	else
	if ((bmi >= 25) && (bmi < 30))
		return ("you are overweight");
	else
	if ((bmi >= 30) && (bmi < 35))
		return ("you are obese grade 1");
	else
	if ((bmi >= 35) && (bmi < 40))
		return ("you are obese grade 2");
	else
	if (bmi > 40)
		return ("you are obese grade 3");
}