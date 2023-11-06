//formulaG.h
#include <iostream>
#include <cmath>
using namespace std;

float suma(int a,int b,int c)
{
	float x;
	x=(-b+(sqrt(pow(b,2)-(4*a*c))))/(2*a);
	return x;
}

 float resta(int a, int b, int c)
 {
    float y;
	y=(-b-(sqrt(pow(b,2)-(4*a*c))))/(2*a);
	return y;
 }
 
 
