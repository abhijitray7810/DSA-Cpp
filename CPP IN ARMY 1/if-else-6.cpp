// #include <iostream>
// using namespace std;
// int main()
//{
//     int num;
//     cin >> num;
//     if (num > 0)
//     {
//         cout << "positive";
//     }
//     else
//     {
//         if (num == 0)
//         {
//             cout << "zero";
//         }
//         else
//         {
//             cout << "negative";
//         }
//     }
// }
#include <iostream>
using namespace std;
int main()
{
    int number;
    cin >> number;
    if (number > 0)
    {
        cout << "positive";
    }
    else if (number == 0)
    {
        cout << "zero";
    }
    else
    {
        cout << "negative";
    }
}