/*       3. generate 
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>

using namespace std;

int f()
{
    return rand()%100;  //: 0~99
}


int main()
{
    srand(time(0));     // бастапкыда = 0 
    vector<int> v(8);
    generate(v.begin(),v.end(),f); 


    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
}