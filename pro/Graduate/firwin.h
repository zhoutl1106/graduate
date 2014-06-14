#ifndef FIRWIN_H
#define FIRWIN_H

#include <math.h>
#include <stdio.h>

int convol(double x[],double h[],double y[],int n,int m,int l);
int filter(int indata[],int outdata[],int n,double h[]);
void firwin(int n, int band, double fln, double fhn, int wn, double* h);
double window(int type, int n, int i, double beta);
double kaiser(int i, int n, double beta);
double bessel0(double x);
void gain(double b[], double a[], int m, int n, double x[], double y[], int len, int sign);

#endif // FIRWIN_H
