
#include<bits/stdc++.h>
using namespace std;

#pragma optimize("", off)
#include "globals.h"



long long intCircleLong = 0;

long long intCircleShort = 0;

void time_circle_int(){

    for (int t = 0; t < TestsCount; ++t){
        int k1 = 0,  k2 =  0,   k3 = 0,  k4 = 0;


        auto timer_start = chrono::high_resolution_clock ::now();
        for (int i=1; i<=longN; ++i){
            k1 = k2;
            k2 = k2;
            k3 = k4;
            k4 = k3;
        }

        /// auto timer_end = chrono::high_resolution_clock ::now();
        auto timer_end = chrono::high_resolution_clock ::now();
        long long timer =
          chrono::duration_cast<chrono::nanoseconds>(timer_end-timer_start).count();
        intCircleLong += timer;
    }
    intCircleLong /= TestsCount;

    for (int t = 0; t < TestsCount; ++t){
        int k1 = 0,  k2 =  0,   k3 = 0,  k4 = 0;

        auto timer_start = chrono::high_resolution_clock ::now();
        for (int i=1; i<=shortN; ++i){
            k1 = k2;
            k2 = k2;
            k3 = k4;
            k4 = k3;
        }

        auto timer_end = chrono::high_resolution_clock ::now();
        long long timer =
          chrono::duration_cast<chrono::nanoseconds>(timer_end-timer_start).count();
        intCircleShort += timer;
    }
    intCircleShort /= TestsCount;

}



long long oper_plus_int(){

    long long AverageTimer = 0;
    for (int t = 0; t < TestsCount; ++t){
        int k1 = 0,  k2 =  0,   k3 = 0,  k4 = 0;
        auto timer_start = chrono::high_resolution_clock ::now();

        for (int i = 1; i <= longN; ++i){
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
    AverageTimer -= intCircleLong;
    return (longN*4 * typenan) / AverageTimer;
}

long long oper_minus_int(){

    long long AverageTimer = 0;
    for (int t = 0; t < TestsCount; ++t){
        int k1 = 0,  k2 =  0,   k3 = 0,  k4 = 0;
        auto timer_start = chrono::high_resolution_clock ::now();
        for (int i=1; i<=longN; ++i){
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
    AverageTimer  -= intCircleLong;

    return (longN*4 * typenan) / AverageTimer;

}

long long oper_mn_int(){

    long long AverageTimer = 0;
    for (int t = 0; t < TestsCount; ++t){
        int k1 = 0,  k2 =  0,   k3 = 0,  k4 = 0;
        auto timer_start = chrono::high_resolution_clock ::now();
        for (int i=1; i<=longN; ++i){
            k1 = k2 * i;
            k2 = k1 * k3;
            k3 = k2 * k2;
            k4 = k3 * k4;
        }

        auto timer_end = chrono::high_resolution_clock ::now();
        long long timer =
          chrono::duration_cast<chrono::nanoseconds>(timer_end-timer_start).count();
        AverageTimer += timer;
    }
    AverageTimer /= TestsCount;
    AverageTimer -= intCircleShort;

    return ((longN*4*typenan) / AverageTimer);

}

long long oper_div_int(){

    long long AverageTimer = 0;
    for (int t = 0; t < TestsCount; ++t){
        int k1 = 1,  k2 =  1,   k3 = 1,  k4 = 1;
        auto timer_start = chrono::high_resolution_clock ::now();
        for (int i = 1; i <= shortN; ++i){
            k1 = k2 / i;
            k2 = k1 / 10;
            k3 = k4 / i;
            k4 = k3 / 7;
        }

        auto timer_end = chrono::high_resolution_clock ::now();
        long long timer =
          chrono::duration_cast<chrono::nanoseconds>(timer_end-timer_start).count();
        AverageTimer += timer;
    }
    AverageTimer /= TestsCount;
    AverageTimer -= intCircleShort;
    return ((shortN*4*typenan) / AverageTimer);

}


