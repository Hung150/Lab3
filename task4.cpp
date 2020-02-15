#include <iostream>
using namespace std;
#include <conio.h>
struct employ
{
    int number;
    int salary;
};
int main()
{                           
    int dir;
    employ staff1, staff2, staff3, chosen;
    staff1 = { 1, 28457 };
    staff2 = { 2, 14852 };
    staff3  = { 3, 123456 };
    cout << "enter number of staff:";
    cin >> dir;
    switch (dir)
    {
    case '1': chosen = staff1; break;
    case '2': chosen = staff2; break;
    case '3': chosen = staff3; break;
    }
    cout << "staff #" << chosen.number << endl << "\nsalary:" << chosen.salary;
}
