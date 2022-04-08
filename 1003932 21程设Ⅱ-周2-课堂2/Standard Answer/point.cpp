#include <iostream>

#include "point.h"

int point::count=0;

void point::print() {
    std::cout<<'('<<x<<','<<y<<')'<<std::endl;
}

bool point::judge(const point &p1,const point &p2){
    double dx1=p1.x-x;
    double dx2=p2.x-x;
    double dy1=p1.y-y;
    double dy2=p2.y-y;
    if(dx1==0&&dx2==0){
        return true;
    }
    else if(dx1==0||dx2==0){
        return false;
    }
    else if(dy1/dx1==dy2/dx2){
        return true;
    }
    else{
        return false;
    }
}