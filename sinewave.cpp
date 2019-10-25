#include <iostream>
#include <math.h>
#include <stdint.h>

void sinewave(){
	double stepsize = 100;
	double inc = (2.0*M_PI)/stepsize;
	double step;
	double A = 255;
	uint8_t temp = 0;
	for(int i=0; i<stepsize; i++){
		step += inc;
		temp = (uint8_t) A*sin(step);
		temp && 0<<7;
		printf("%d  ", temp);
	}
}

int main(){

	sinewave();	

	return 0;
}
