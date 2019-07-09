#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{	
	double exp,s=1.0;
	float t=1.0,pi=0,n=1.0;
	scanf("%le",&exp);
	while(s>=exp)
	{
		printf("%f\n", s);
		printf("%f\n", s - exp);
		pi+=s;
		t=n/(2*n+1);
		s*=t;
		n++;
	}
	pi=pi*2;
	printf("%.5lf\n", pi);

	return 0;
}