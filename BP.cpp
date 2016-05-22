//#define _DEBUG_
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "BPMN.h"

double E(mws::BP use,double *x,double *y);

int test_num[]={6,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,6};

mws::BP test(20,test_num);

int main()
{
	double x2[]={10,-259,-6,-7,10,-2};
	double y2[]={1,0,1,1,1,0};
	for (int i=0;i<100;i++)
	{
		test.tran(x2,y2);
		printf("%f,",E(test,x2,y2));
		//test.show(x2);
	}
}

double E(mws::BP use,double *x,double *y)
{
	double e=0;
	use.calculate_net(x);
	for (int j=0;j<6;j++)
	{
		e+=(use.y[j]-y[j])*(use.y[j]-y[j]);	
	}
	return e;
}
