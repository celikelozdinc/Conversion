/* Solution for Assignment 1
*  Niyazi Ozdinc Celikel
*  gitlab.com/celikelozdinc
*/

#include  <iostream>
#include <vector>

const int N = 40; // change macro with a definition

// Summation operation inside loop
inline void sum(int *p,int n, std::vector<int> d)
{
    *p = 0;
    for(int i=0; i<n;++i) *p = *p + d[i];
}

int main()
{
   std::vector<int> data;
    
    // Manipulate contents of vector
    for (int i=0; i<N; ++i) data.push_back(i);
   
    int accum = 0;
    sum(&accum,N,data);

    // Print accumulation
    std::cout<<"Sum is " << accum << std::endl;

    return 0;
}