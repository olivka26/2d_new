#include "help.hpp"

double f0(double x, double y){
    if(x>0 && y>0)
        return 1;
    return 1;
}

double f1(double x, double y){
    if(x>0 && y>0)
        return x;
    return x;
}

double f2(double x, double y){
    if(x>0 && y>0)
        return y;
    return y;
}

double f3(double x, double y){
    return x+y;
}

double f4(double x, double y){
    return sqrt(x*x+y*y);
}

double f5(double x, double y){
    return x*x+y*y;
}

double f6(double x, double y){
    return exp(x*x-y*y);
}

double f7(double x, double y){
    return 1/(25*(x*x+y*y)+1);
}

double max_matr(double *M, int nx, int ny){
    double res=M[0];
    for(int i=0;i<nx+2;++i){
        for(int j=0;j<ny+2;++j){
            if(M[i*(ny+2)+j]>res)
                res=M[i*(ny+2)+j];
        }
    }
    return res;
}

double min_matr(double *M, int nx, int ny){
    double res=M[0];
    for(int i=0;i<nx+2;++i){
        for(int j=0;j<ny+2;++j){
            if(M[i*(ny+2)+j]<res)
                res=M[i*(ny+2)+j];
        }
    }
    return res;
}

double max4(double a, double b, double c, double d){
    double res=a;
    if(res<b)
        res=b;
    if(res<c)
        res=c;
    if(res<d)
        res=d;
    return res;
}

double min4(double a, double b, double c, double d){
    double res=a;
    if(res>b)
        res=b;
    if(res>c)
        res=c;
    if(res>d)
        res=d;
    return res;
}

double max(double a, double b){
    if(a>b)
        return a;
    return b;
}

double min(double a, double b){
    if(a>b)
        return b;
    return a;
}
