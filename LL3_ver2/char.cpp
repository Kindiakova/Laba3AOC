#include<bits/stdc++.h>
using namespace std;

#pragma optimize("", off)
#include "globals.h"

long long charCircleLong = 0;
long long charCircleShort = 0;

void time_circle_char(){

    for (int t = 0; t < TestsCount; ++t){
        char k1 = '0',  k2 =  '1',   k3 = '2',  k4 = '3';

        auto timer_start = chrono::high_resolution_clock ::now();
        for (int i=1; i<=longN; ++i){
            k1 = k4;
            k2 = k1;
            k3 = k4;
            k4 = k2;
        }

       auto timer_end = chrono::high_resolution_clock ::now();
        long long timer =
          chrono::duration_cast<chrono::nanoseconds>(timer_end-timer_start).count();
        charCircleLong += timer;
    }
    charCircleLong /= TestsCount;

    for (int t = 0; t < TestsCount; ++t){
        char k1 = '0',  k2 =  '1',   k3 = '2',  k4 = '3';

        auto timer_start = chrono::high_resolution_clock ::now();
        for (int i=1; i<=shortN; ++i){
             k1 = k4;
            k2 = k1;
            k3 = k4;
            k4 = k2;
        }

       auto timer_end = chrono::high_resolution_clock ::now();
        long long timer =
          chrono::duration_cast<chrono::nanoseconds>(timer_end-timer_start).count();
        charCircleShort += timer;
    }
    charCircleShort /= TestsCount;

}

long long oper_plus_char(){

    long long AverageTimer = 0;
    for (int t = 0; t < TestsCount; ++t){
        char k1 = '0',  k2 =  '1',   k3 = '2',  k4 = '3';
        auto timer_start = chrono::high_resolution_clock ::now();
        for (int i = 1; i<=longN; ++i){
             k1 = k4 + k1;
            k2 = k1 + k2;
            k3 = k2 + k1;
            k4 = k3 + k4;
        }
       auto timer_end = chrono::high_resolution_clock ::now();
        long long timer =
          chrono::duration_cast<chrono::nanoseconds>(timer_end-timer_start).count();
        AverageTimer += timer;
    }
    AverageTimer /= TestsCount;
    AverageTimer -= charCircleLong;
    return (longN*4 * typenan) / AverageTimer;
}

long long oper_minus_char(){

    long long AverageTimer = 0;
    for (int t = 0; t < TestsCount; ++t){
        char k1 = '0',  k2 =  '1',   k3 = '2',  k4 = '3';
        auto timer_start = chrono::high_resolution_clock ::now();
        for (int i = 1; i <= longN; ++i){
             k1 = k4 - k1;
            k2 = k1 - k2;
            k3 = k2 - k1;
            k4 = k3 - k4;
        }

       auto timer_end = chrono::high_resolution_clock ::now();
        long long timer =
          chrono::duration_cast<chrono::nanoseconds>(timer_end-timer_start).count();
        AverageTimer += timer;
    }
    AverageTimer /= TestsCount;
    AverageTimer  -= charCircleLong;

    return (longN*4 * typenan) / AverageTimer;

}

long long oper_mn_char(){

    long long AverageTimer = 0;
    for (int t = 0; t < TestsCount; ++t){
        char k1 = '0',  k2 =  '1',   k3 = '2',  k4 = '3';
        auto timer_start = chrono::high_resolution_clock ::now();
        for (int i=1; i<=longN; ++i){
             k1 = k4 * k1;
            k2 = k1 * k2;
            k3 = k2 * k1;
            k4 = k3 * k4;
        }

       auto timer_end = chrono::high_resolution_clock ::now();
        long long timer =
          chrono::duration_cast<chrono::nanoseconds>(timer_end-timer_start).count();
        AverageTimer += timer;
    }
    AverageTimer /= TestsCount;
    AverageTimer -= charCircleShort;

    return ((longN*4*typenan) / AverageTimer);

}

long long oper_div_char(){

    long long AverageTimer = 0;
    for (int t = 0; t < TestsCount; ++t){
        char k1 = '0',  k2 =  '1',   k3 = '2',  k4 = '3';
        auto timer_start = chrono::high_resolution_clock ::now();
        for (int i=1; i<=shortN; ++i){
             k1 = k4 / '1';
            k2 = k1 / '2';
            k3 = k2 / '5';
            k4 = k3 / '8';
        }

       auto timer_end = chrono::high_resolution_clock ::now();
        long long timer =
          chrono::duration_cast<chrono::nanoseconds>(timer_end-timer_start).count();
        AverageTimer += timer;
    }
    AverageTimer /= TestsCount;
    AverageTimer -= charCircleShort;
    return ((shortN*4*typenan) / AverageTimer);

}

