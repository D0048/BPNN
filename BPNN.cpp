//#define _DEBUG_
#define _TO_FILE_
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "BPMN.h"

int test_num[]={2,3,3,2};

double f(double x);

mws::BP *test[8];

int main()
{
        double x_t[2],y_t[2];
        srand(time(NULL));

        for (int i=1;i<2;i++)
        {
                double E=0;
                test_num[1]=i+3;
                test_num[2]=i+3;
                test[i]=new mws::BP(4,test_num,0.9,0.2,0.1);
                x_t[1]=0;
                y_t[1]=0;
                for (int k=0;k<3000;k++)
                {
                        for (double j=-4.0;j<=4.0;j=j+0.1)
                        {
                                x_t[0]=j;
                                y_t[0]=f(j);
                                test[i]->train(x_t,y_t);
                        }
                }

                printf("X,Y,N,E\n");

                for (double j=-3.975;j<=3.975;j=j+0.05)
                {
                        x_t[0]=j;
                        test[i]->calculate_net(x_t);
                        E+=(mws::abs(test[i]->y[0]-f(j)))*(mws::abs(test[i]->y[0]-f(j)));
                        printf("%f,%f,%f,%f\n",j,f(j),test[i]->y[0],mws::abs(test[i]->y[0]-f(j)));
                }
                printf("%d,%f\n",i,sqrt(E/159.00));
        }

}

double f(double x)
{
        return ((1+x+x*x)*exp(-(x*x)/4))/3.0;
}
