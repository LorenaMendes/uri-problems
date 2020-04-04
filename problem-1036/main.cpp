#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double a, b, c, dt, r1, r2;
	cin >> a >> b >> c;

	dt = (b*b)-(4*a*c);

	if(a == 0){
		cout << "Impossivel calcular" << endl;
		return 0;
	}

	if(dt == 0){
		r1 = r2 = -b/(2*a);
		printf("R1 = %.5f\n", r1);
		printf("R2 = %.5f\n", r2);
	} else if(dt < 0){
		cout << "Impossivel calcular" << endl;
	} else {
		r1 = (-b + sqrt(dt))/(2*a);
		r2 = (-b - sqrt(dt))/(2*a);
		printf("R1 = %.5f\n", r1);
		printf("R2 = %.5f\n", r2);
	}

	return 0;
}