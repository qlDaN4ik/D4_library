#include <math.h>

template <typename T>
T D4_areatr(T a,T b,T c)
{
double p=(a+b+c)/2;
double S=sqrt(p*(p-a)*(p-b)*(p-c));
return S;
}

template <typename T>
T D4_summas(T a[], int size)
{
T sum=0;
for(int i=0; i<size; i++)
{
sum+=a[i];
}
return sum;
}

template <typename T>
T D4_quadeq(T a, T b, T, c)
{
    double D=b*b-4*a*c;
    if (D>0)
        {
            double x1=(-b+sqrt(D))/(2*a);
            double x2=(b+sqrt(D))/(2*a);
            return x1, x2;
        }
        if (D==0)
        {
            double x=-b/(2*a);
            return x;
        }
        if (D<0)
        {
            return 0;
        }
}
