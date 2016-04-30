#define _DEBUG_
#include <stdio.h>
#include <math.h>
#include "BPMN.h"

int test_num[]={6,8,8,8,8,6};

mws::BP test(6,test_num);

int main()
{
	double x1[]={1,-16,-8,3,-5,7};
	double y1[]={0,1,1,0,1,0};
	double x2[]={8,-259,-6,-7,8,-2};
	double y2[]={1,0,1,1,1,0};
	test.tran(x1,y1);
	test.show(x1);
	test.tran(x2,y2);
	test.show(x2);
}