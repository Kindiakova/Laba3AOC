

#include<bits/stdc++.h>
using namespace std;

#pragma optimize("", off)
#include "globals.h"



long long doubleCircleLong = 0;

long long doubleCircleShort = 0;

void time_circle_double(){

    for (int t = 0; t < TestsCount; ++t){
        double k1 = 0,  k2 =  0,   k3 = 0,  k4 = 0;

        auto timer_start = chrono::high_resolution_clock ::now();
        for (double i=1; i<=longN; ++i){
            k1 = k2;
            k2 = k2;
            k3 = k4;
            k4 = k3;
        }

       auto timer_end = chrono::high_resolution_clock ::now();
        long long timer =
          chrono::duration_cast<chrono::nanoseconds>(timer_end-timer_start).count();
        doubleCircleLong += timer;
    }
    doubleCircleLong /= TestsCount;

    for (int t = 0; t < TestsCount; ++t){
        double k1 = 0,  k2 =  0,   k3 = 0,  k4 = 0;

        auto timer_start = chrono::high_resolution_clock ::now();
        for (double i=1; i<=shortN; ++i){
            k1 = k2;
            k2 = k2;
            k3 = k4;
            k4 = k3;
        }

       auto timer_end = chrono::high_resolution_clock ::now();
        long long timer =
          chrono::duration_cast<chrono::nanoseconds>(timer_end-timer_start).count();
        doubleCircleShort += timer;
    }
    doubleCircleShort /= TestsCount;

}



long long oper_plus_double(){

    long long AverageTimer = 0;
    for (int t = 0; t < TestsCount; ++t){
        double k1 = 0,  k2 =  0,   k3 = 0,  k4 = 0;
        auto timer_start = chrono::high_resolution_clock ::now();
        for (double i=1; i<=longN; ++i){
            k1 = k4 + i;
            k2 = k1 + i;
            k3 = k2 + k1;
            k4 = k3 + k4;
        }
       auto timer_end = chrono::high_resolution_clock ::now();
        long long timer =
          chrono::duration_cast<chrono::nanoseconds>(timer_end-timer_start).count();
        AverageTimer += timer;
    }
    AverageTimer /= TestsCount;
    AverageTimer -= doubleCircleLong;
    return (longN*4 * typenan) / AverageTimer;
}

long long oper_minus_double(){

    long long AverageTimer = 0;
    for (int t = 0; t < TestsCount; ++t){
        double k1 = 0,  k2 =  0,   k3 = 0,  k4 = 0;
        auto timer_start = chrono::high_resolution_clock ::now();
        for (double i=1; i<=longN; ++i){
            k1 = k4 - i;
            k2 = k1 - i;
            k3 = k2 - k3;
            k4 = k4 - k3;
        }

       auto timer_end = chrono::high_resolution_clock ::now();
        long long timer =
          chrono::duration_cast<chrono::nanoseconds>(timer_end-timer_start).count();
        AverageTimer += timer;
    }
    AverageTimer /= TestsCount;
    AverageTimer  -= doubleCircleLong;

    return (longN*4 * typenan) / AverageTimer;

}

long long oper_mn_double(){

    long long AverageTimer = 0;
    for (int t = 0; t < TestsCount; ++t){
        double k1 = 0,  k2 =  0,   k3 = 0,  k4 = 0;
        auto timer_start = chrono::high_resolution_clock ::now();
        for (double i=1; i<=longN; ++i){
            k1 = k2 * i;
            k2 = k1 * k4;
            k3 = k2 * i;
            k4 = k3 * k4;
        }

       auto timer_end = chrono::high_resolution_clock ::now();
        long long timer =
          chrono::duration_cast<chrono::nanoseconds>(timer_end-timer_start).count();
        AverageTimer += timer;
    }
    AverageTimer /= TestsCount;
    AverageTimer -= doubleCircleShort;

    return ((longN*4*typenan) / AverageTimer);

}

long long oper_div_double(){

    long long AverageTimer = 0;
    for (int t = 0; t < TestsCount; ++t){
        double k1 = 1,  k2 =  1,   k3 = 1,  k4 = 1;
        auto timer_start = chrono::high_resolution_clock ::now();
        for (double i=1; i<=shortN; ++i){
            k1 = k2 / i;
            k2 = k1 / k4;
            k3 = k4 / i;
            k4 = k3 / k2;
        }

       auto timer_end = chrono::high_resolution_clock ::now();
        long long timer =
          chrono::duration_cast<chrono::nanoseconds>(timer_end-timer_start).count();
        AverageTimer += timer;
    }
    AverageTimer /= TestsCount;
    AverageTimer -= doubleCircleShort;
    return ((shortN*4*typenan) / AverageTimer);

}


