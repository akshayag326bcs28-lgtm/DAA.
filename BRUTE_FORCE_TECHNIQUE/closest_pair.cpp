#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, i, j;
    float x[20], y[20];
    float d, dist;
    int p1 = 0, p2 = 1;

    cout << "Enter number of points (n >= 2): ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "Enter x" << i + 1 << " and y" << i + 1 << ": ";
        cin >> x[i] >> y[i];
    }

        d = sqrt((x[0] - x[1]) * (x[0] - x[1]) +
             (y[0] - y[1]) * (y[0] - y[1]));


    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            dist = sqrt((x[i] - x[j]) * (x[i] - x[j]) +
                        (y[i] - y[j]) * (y[i] - y[j]));

            if (dist < d)
            {
                d = dist;
                p1 = i;
                p2 = j;
            }
        }
    }

    cout << "\nClosest pair of points:\n";
    cout << "P" << p1 + 1 << " (" << x[p1] << ", " << y[p1] << ") and "
         << "P" << p2 + 1 << " (" << x[p2] << ", " << y[p2] << ")\n";

    cout << "Minimum distance = " << d << endl;

    return 0;
}
