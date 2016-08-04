#ifndef EULER_LIB_H
#define EULER_LIB_H

#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef pair<int, int> pii;
typedef pair<int, pii> pipii;
typedef pair<pii, pii> piiii;
typedef pair<ll, ll> pll;
typedef pair<ll, pll> plpll;
typedef pair<pll, pll> pllll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;


bool is_prime(int num);
bool is_prime(ll num);
vi make_prime_list(int max_num);
vb make_prime_sieve(int max_num);
int count_digit_length(int num);
vi int_to_vector(int num);
int vector_to_int(vi& vec);
#endif
