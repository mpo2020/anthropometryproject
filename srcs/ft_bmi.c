
double	bmi(double height, double weight)
{
	double	resultimc;
	
	height = height / 100;
	resultimc = weight / (height * height);
	return (resultimc);
}