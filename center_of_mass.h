#include <vector>
#include <string>

double atomic_masses[] =
{
0.00,
1.00782503223,
4.00260325413,
7.0160034366,
9.012183065,
11.00930536,
12.000000000,
14.00307400443,
15.99491461957,
18.99840316273,
19.9924401762,
22.9897692820,
23.985041697,
26.98153853,
27.97692653465,
30.97376199842,
31.9720711744,
34.968852682,
39.9623831237
};

extern unsigned int totalatoms;
extern double total_mass;

int symbol_to_atomic_number(string symb);
double calculate_total_mass();
