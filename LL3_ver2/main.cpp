
#include<bits/stdc++.h>
using namespace std;

#pragma optimize("", off)
#include "char.h"
#include "int.h"
#include "long.h"
#include "float.h"
#include "double.h"

long long percent100 = 1;

void Write(long long x){
    cout <<  std::left << std::setw(11) << x << " ";
    long long per = (x * 100) / percent100;
    int kol = per / 5;
    for (int i = 0; i < kol; ++i)
        cout << "X";
    for (int i = 0; i < 20-kol; ++i)
        cout << " ";

    cout <<  std::right << std::setw(4) << per << "%";
    cout << '\n';
}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    /// empty circles:
        time_circle_char();
        time_circle_int();
        time_circle_double();
        time_circle_long();
        time_circle_float();

    percent100 = oper_plus_char();
    /// char
        cout << "+ char   "; Write(percent100);
        cout << "- char   "; Write(oper_minus_char());
        cout << "* char   "; Write(oper_mn_char());
        cout << "/ char   "; Write(oper_div_char());

    /// int
        cout << "+ int    "; Write(oper_plus_int());
        cout << "- int    "; Write(oper_minus_int());
        cout << "* int    "; Write(oper_mn_int());
        cout << "/ int    "; Write(oper_div_int());

    /// long
        cout << "+ long   "; Write(oper_plus_long());
        cout << "- long   "; Write(oper_minus_long());
        cout << "* long   "; Write(oper_mn_long());
        cout << "/ long   "; Write(oper_div_long());
    /// float
        cout << "+ float  "; Write(oper_plus_float());
        cout << "- float  "; Write(oper_minus_float());
        cout << "* float  "; Write(oper_mn_float());
        cout << "/ float  "; Write(oper_div_float());
    /// double
        cout << "+ double "; Write(oper_plus_double());
        cout << "- double "; Write(oper_minus_double());
        cout << "* double "; Write(oper_mn_double());
        cout << "/ double "; Write(oper_div_double());
}


