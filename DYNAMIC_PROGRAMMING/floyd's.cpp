#include <iostream>
using namespace std;
#define INF 999
int main() {
    int n;
    cout << "Enter number of vertices: ";
    cin >> n;

    int D[10][10];  // static 2D array, max size 10x10

    cout << "Enter the distance matrix:" <<endl;
    for (int i = 0; i <n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> D[i][j];
        }
    }

    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (D[i][k] + D[k][j] < D[i][j]) {
                    D[i][j] = D[i][k] + D[k][j];
                }
            }
        }
    }

    cout << "\nShortest Distance Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << D[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
