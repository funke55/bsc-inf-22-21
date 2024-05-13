#include <iostream>
using namespace std;
int main() {
    int rows, cols;
    cout << "Enter the number of rows for the array (max 3): ";
    cin >> rows;
    cout << "Enter the number of columns for the array (max 3): ";
    cin >> cols;


    if(rows > 3 || cols > 3) {
        cout << "Dimensions must not exceed 3. Please try again." <<endl;
        return 1; // Exit the program with an error code
    }

    // Dynamically allocate the 2D array
    double** array = new double*[rows];
    for(int i = 0; i < rows; ++i) {
        array[i] = new double[cols];
    }


    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    // Output the values of each element of the array onto the console
    cout << "Array values:" << std::endl;
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            cout << array[i][j] << " ";
        }
        cout << std::endl; // Newline for each row
    }

    // Deallocate the dynamically allocated memory
    for(int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;

    return 0; // Successful execution
}
