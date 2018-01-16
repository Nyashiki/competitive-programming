#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <functional>
#include <queue>
#include <stack>
#include <string>
#include <utility>
#include <cstring>
#include <cmath>
#include <cstdio>
#include <cassert>
#include <cinttypes>

using namespace std;

#if defined(_MSC_VER)
#pragma warning(disable: 4996) // VSでscanfを使う．
#endif

// ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  types                                                                                                                        /
// ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
typedef unsigned int uint;
typedef long long int ll;
typedef unsigned long long int ull;

typedef pair<ll, ll> P;
inline P operator+(const P& p1, const P& p2) { return P(p1.first + p2.first, p1.second + p2.second); }
inline P operator-(const P& p1, const P& p2) { return P(p1.first - p2.first, p1.second - p2.second); }
inline P operator*(const P& p1, const P& p2) { return P(p1.first * p2.first, p1.second * p2.second); }
inline P operator/(const P& p1, const P& p2) { return P(p1.first / p2.first, p1.second / p2.second); }

// ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  IO                                                                                                                        /
// ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Print(const int& x)    { printf("%d\n", x);         }
void Print(const uint& x)   { printf("%u\n", x);         }
void Print(const ll& x)     { printf("%lld\n", x);       }
void Print(const ull& x)    { printf("%llu\n", x);       }
void Print(const float& x)  { printf("%.15f\n", x);      }
void Print(const double& x) { printf("%.15f\n", x);      }
void Print(const string& x) { printf("%s\n", x.c_str()); }
void Print(const char& x)   { printf("%c\n", x);         }
template<class ...T> void Print(const int& x, const T& ...args)    { printf("%d ", x);         Print(args...); }
template<class ...T> void Print(const uint& x, const T& ...args)   { printf("%u ", x);         Print(args...); }
template<class ...T> void Print(const ll& x, const T& ...args)     { printf("%lld ", x);       Print(args...); }
template<class ...T> void Print(const ull& x, const T& ...args)    { printf("%llu ", x);       Print(args...); }
template<class ...T> void Print(const float& x, const T& ...args)  { printf("%.15f ", x);      Print(args...); }
template<class ...T> void Print(const double& x, const T& ...args) { printf("%.15f ", x);      Print(args...); }
template<class ...T> void Print(const string& x, const T& ...args) { printf("%s ", x.c_str()); Print(args...); }
template<class ...T> void Print(const char& x, const T& ...args)   { printf("%c ", x);         Print(args...); }

void Read(int& x)    { scanf("%d", &x);        }
void Read(uint& x)   { scanf("%u", &x);        }
void Read(ll& x)     { scanf("%lld", &x);      }
void Read(ull& x)    { scanf("%llu", &x);      }
void Read(float& x)  { scanf("%f", &x);        }
void Read(double& x) { scanf("%lf", &x);       }
void Read(string& x) { cin >> x;               }
void Read(char& x)   { scanf("%c", &x);        }
template<class ...T> void Read(int& x, T& ...args)    { scanf("%d", &x);        Read(args...); }
template<class ...T> void Read(uint& x, T& ...args)   { scanf("%u", &x);        Read(args...); }
template<class ...T> void Read(ll& x, T& ...args)     { scanf("%lld", &x);      Read(args...); }
template<class ...T> void Read(ull& x, T& ...args)    { scanf("%llu", &x);      Read(args...); }
template<class ...T> void Read(float& x, T& ...args)  { scanf("%f", &x);        Read(args...); }
template<class ...T> void Read(double& x, T& ...args) { scanf("%lf", &x);       Read(args...); }
template<class ...T> void Read(string& x, T& ...args) { cin >> x;               Read(args...); }
template<class ...T> void Read(char& x, T& ...args)   { scanf("%c", &x);        Read(args...); }

// ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Utility                                                                                                                   /
// ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
template<typename T> int Size(T elem) { return (int)elem.size(); }

// ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  main                                                                                                                      /
// ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() {
  
  return 0;
}
/* */
