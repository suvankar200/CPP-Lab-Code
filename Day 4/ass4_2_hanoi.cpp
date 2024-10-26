#include <iostream>
using namespace std;
void towerofhanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 0)
    {
        return;
    }

    towerofhanoi(n - 1, from_rod, aux_rod, to_rod);
    {
        cout << "Move disk " << n << " from rod " << from_rod << "to" <<to_rod << endl;
        towerofhanoi(n - 1, aux_rod, to_rod, from_rod);
    }
}
int main()
{
    int n=3;
    towerofhanoi(n, 'A','C','B');
    return 0;
}