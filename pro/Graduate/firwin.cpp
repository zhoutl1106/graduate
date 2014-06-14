#include "firwin.h"

int convol(double x[],double h[],double y[],int n,int m,int l)
{/* n    the date(not 0) length of real array x[l];
     m    the date(not 0)  length of real array h[l];
      l=m+n-1    the date length of real array y[l]   */
    int i, k,count;
    double sum;
    count = 0;
//    for(i=n; i<l; i++)  x[i]=0.0;
//    for(i=m;i<l; i++)  h[i]=0.0;
    for (k=0;k<l;k++)
    {
        sum=0.0;
        for (i=0; i<k;i++)
        {
            sum+=x[i]*h[k-i];
            count++;
        }
        y[k]=sum;
    }
    return count;
}

int filter(double indata[],double outdata[],int n,double h[])
{
    int i,j;
    double sum;
    double x1[256+17];

    /*for(i=0;i<length;i++) x1[n+i-1]=indata[i];

    for(i=0;i<(n-1);i++) x1[n-i-2]=indata[length-i-1];

    for(i=0;i<length;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
            sum+=h[j]*indata[i-j+n-1];
        outdata[i]=sum;
    }*/
    return 0;
}

void firwin(int n, int band, double fln, double fhn, int wn, double* h)
{
	/**********************************************************
	int n: orders
	int band: filter type
			1:low pass
			2:high pass
			3:band pass
			4:band stop
	double fln,fhn: low freq, high freq
	int wn: type of windows
			1:Rectangular window
			2:Tapered rectangular window
			3:Triangular window
			4:Hanning window
			5:Hamming window
			6:Blackman window
			7:Kaiser window
	h: coefficient of FIR filter
	************************************************************/
	int i,n2,mid;
	double s,pi,wc1,wc2,beta,delay;
	beta = 4.0;
	/*
	if(wn == 7)
		scanf("%lf",&beta);
		*/
	pi = 3.1415926536;
	if((n%2) == 0)
	{
		n2 = n/2 -1;
		mid = 1;
	}
	else
	{
		n2 = n/2;
		mid = 0;
	}
	delay = n/2.0;
	wc1 = 2.0 * pi * fln;
	if(band >=3)
		wc2 = 2.0 * pi * fhn;
	switch (band)
	{
	case 1:
		for(i = 0; i <= n2; i++)
		{
			s = i - delay;
			h[i] = (sin(wc1*s)/(pi*s))*window(wn,n+1,i,beta);
			h[n-i] = h[i];
		}
		if(mid == 1)
			h[n/2] = wc1/pi;
		break;
	case 2:
                for(i = 0; i <= n2; i++)
		{
			s = i - delay;
			h[i] = (sin(pi*s) - sin(wc1*s))/(pi*s);
			h[i] = h[i] * window(wn,n+1,i,beta);
			h[n-i] = h[i];
		}
		if(mid == 1)
			h[n/2] = 1.0 - wc1/pi;
		break;
	case 3:
		for(i = 0; i <= n2; i++)
		{
			s = i - delay;
			h[i] = (sin(wc2*s) - sin(wc1*s))/(pi*s);
			h[i] = h[i] * window(wn,n+1,i,beta);
			h[n-i] = h[i];
		}
		if(mid == 1)
			h[n/2] = (wc2 - wc1)/pi;
		break;
	case 4:
		for(i = 0; i <= n2; i++)
		{
			s = i - delay;
			h[i] = (sin(wc1*s) + sin(pi*s) - sin(wc2*s))/(pi*s);
			h[i] = h[i] * window(wn,n+1,i,beta);
			h[n-i] = h[i];
		}
		if(mid == 1)
			h[n/2] = (wc1 + pi - wc2)/pi;
		break;
	}
}



double window(int type, int n, int i, double beta)
{
	int k;
	double pi,w;
	pi = 3.1415926536;
	w = 1.0;
	switch(type)
	{
	case 1:
		w = 1.0;
		break;
	case 2:
		k = (n-2)/10;
		if(i <= k)
			w = 0.5 * (1.0 - cos(i*pi/(k+1)));
		if(i > n-k-2)
			w = 0.5 * (1.0 - cos((n-i-1)*pi/(k+1)));
		break;
	case 3:
		w = 1.0 - fabs(1.0 - 2*i/(n-1.0));
		break;
	case 4:
		w = 0.5 * (1.0 - cos(2*i*pi/(n-1)));
		break;
	case 5:
		w = 0.54 - 0.46 * cos(2*i*pi/(n-1));
		break;
	case 6:
		w = 0.42 - 0.5 * cos(2*i*pi/(n-1)) + 0.08 * cos(4*i*pi/(n-1));
		break;
	case 7:
		w = kaiser(i,n,beta);
		break;
	}
	return w;
}

double kaiser(int i, int n, double beta)
{
	double a,w,a2,b1,b2,beta1;
	b1 = bessel0(beta);
	a = 2.0*i/(double)(n-1) - 1.0;
	a2 = a*a;
	beta1 = beta * sqrt(1.0 - a2);
	b2 = bessel0(beta1);
	w = b2/b1;
	return w;
}

double bessel0(double x)
{
	int i;
	double d,y,d2,sum;
	y = x/2.0;
	d = 1.0;
	sum = 1.0;
	for(i = 1; i<=25; i++)
	{
		d = d*y/i;
		d2 = d * d;
		sum = sum + d2;
		if(d2 < sum * (1.0e-8)) break;
	}
	return sum;
}

void gain(double b[], double a[], int m, int n, double x[], double y[], int len, int sign)
{
	int i,k;
	double ar,ai,br,bi,zr,zi,im,re,den,numr,numi,freq,temp;
	for(k = 0; k<len;k++)
	{
		freq = k*0.5/(len-1);
		zr = cos(-8.0*atan(1.0)*freq);
		zi = sin(-8.0*atan(1.0)*freq);
		br = 0.0;
		bi = 0.0;
		for(i=m;i>0;i--)
		{
			re = br;
			im = bi;
			br = (re + b[i])*zr - im*zi;
			bi = (re + b[i])*zi + im*zr;
		}
		ar = 0.0;
		ai = 0.0;
		for(i = n;i>0;i--)
		{
			re = ar;
			im = ai;
			ar = (re + a[i])*zr - im*zi;
			ai = (re + a[i])*zi + im*zr;
		}
		br = br + b[0];
		ar = ar + 1.0;
		numr = ar*br + ai*bi;
		numi = ar*bi - ai*br;
		den = ar*ar + ai*ai;
		x[k] = numr/den;
		y[k] = numi/den;
		switch (sign)
		{
		case 1:
			temp = sqrt(x[k] * x[k] + y[k] * y[k]);
			y[k] = atan2(y[k],x[k]);
			x[k] = temp;
			break;
		case 2:
			temp = x[k] * x[k] + y[k] * y[k];
			y[k] = atan2(y[k],x[k]);
			x[k] = 10.0 * log10(temp);
			break;
		}
	}
}
