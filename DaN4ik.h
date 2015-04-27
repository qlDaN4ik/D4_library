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
