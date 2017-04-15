#include <stdio.h>
#include <stdlib.h>
main()
{
	double R, Pi, area;
	Pi=3.1416;
	printf("Digite o raio do circulo: ");
	scanf ("%lf",&R);
	area=Pi*R*R;
	printf("a area do circulo e:%lf\n", area);
	
system("pause");
}
