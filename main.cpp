#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Введіть кількість рядків: ";
    cin >> rows;
    cout << "Введіть кількість стовпців: ";
    cin >> cols;

    int matrix[rows][cols];

    cout << "Введіть елементи матриці:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    int sumMaxOdd = 0; // Сума максимальних елементів у непарних стовпцях
    int sumMinEven = 0; // Сума мінімальних елементів у парних стовпцях

    for (int j = 0; j < cols; j++) {
        int maxElement = matrix[0][j];
        int minElement = matrix[0][j];

        for (int i = 0; i < rows; i++) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
            }

            if (matrix[i][j] < minElement) {
                minElement = matrix[i][j];
            }
        }

        if (j % 2 == 0) { // Парний стовпець
            sumMinEven += minElement;
        } else { // Непарний стовпець
            sumMaxOdd += maxElement;
        }
    }

    cout << "Сума максимальних елементів у непарних стовпцях: " << sumMaxOdd << endl;
    cout << "Сума мінімальних елементів у парних стовпцях: " << sumMinEven << endl;

    return 0;
}
