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
struct quad
{
    double x1;
    double x2;
    int s;
};

/*template <typename T>
T D4_quadeq(T a, T b, T c)
{
    struct quad t;
    double D=b*b-4*a*c;

    if (D>0)
        {
            double x1=(-b+sqrt(D))/(2*a);
            double x2=(b+sqrt(D))/(2*a);
            t.x1=x1;
            t.x2=x2;
            t.s=1;
            return t;
        }
        if (D==0)
        {
            double x=-b/(2*a);
            t.x1=x;
            return t;
        }
        if (D<0)
        {
            t.s=0;
            return t;
        }
}
template <typename T>
struct swap
{
    T *x;
    T *y;
};

template <typename T>
T D4_swap(T *a, T *b)
{
    struct swap j;
    T z=*a;
    j.*x=*y;
    j.*y=z;
    return j;
}*/

template <typename T>
T D4_areatrger(T x1, T y1, T x2, T y2, T x3, T y3)
{
    double S=abs((x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2);
    return S;
}
