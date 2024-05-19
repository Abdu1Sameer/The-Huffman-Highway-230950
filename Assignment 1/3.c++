#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

// Define mathematical functions
double add(double x, double y) {
    return x + y;
}

double sub(double x, double y) {
    return x - y;
}

double mul(double x, double y) {
    return x * y;
}

double div(double x, double y) {
    if (y == 0) {
        cerr << "Error: Division by zero" << endl;
        return NAN;
    }
    return x / y;
}

double mod(double x, double y) {
    if (y == 0) {
        cerr << "Error: Division by zero" << endl;
        return NAN;
    }
    return fmod(x, y);
}

double ln(double x) {
    if (x <= 0) {
        cerr << "Error: Logarithm of non-positive number" << endl;
        return NAN;
    }
    return log(x);
}

double sine(double x) {
    return sin(x);
}

// Function to evaluate expression with trigonometric and exponential functions
double evaluateExpression(char operators[][10], int numOps, double values[], int numVals) {
    double result = values[0];
    int valueIndex = 1;

    for (int i = 0; i < numOps; i++) {
        if (strcmp(operators[i], "ln") == 0) {
            result = ln(result);
        } else if (strcmp(operators[i], "sin") == 0) {
            result = sine(result);
        } else if (strcmp(operators[i], "+") == 0) {
            result = add(result, values[valueIndex++]);
        } else if (strcmp(operators[i], "-") == 0) {
            result = sub(result, values[valueIndex++]);
        } else if (strcmp(operators[i], "*") == 0) {
            result = mul(result, values[valueIndex++]);
        } else if (strcmp(operators[i], "/") == 0) {
            result = div(result, values[valueIndex++]);
        } else if (strcmp(operators[i], "mod") == 0) {
            
            result = mod(result, values[valueIndex++]);
        } else {
            cerr << "Error: Unknown operator " << operators[i] << endl;
            return NAN;
        }
    }

    return result;
}

int main() {
    
    int n = 0;
    int numVals = 0;

    cout << "Enter number of operators: ";
    cin >> n;
    
    char operators[n][10];
    double values[n];
    cout << "Enter operators separated by space (e.g., ln + sin): ";
    for (int i = 0; i < n; i++) {
        cin >> operators[i];
    }

    cout << "Enter number of values: ";
    cin >> numVals;
    

    cout << "Enter values separated by space: ";
    for (int i = 0; i < numVals; i++) {
        cin >> values[i];
    }

    if (numVals == 0) {
        cerr << "Error: No values provided" << endl;
        return 1;
    }

    double result = evaluateExpression(operators, n, values, numVals);
    cout << "The result of the expression is: " << result << endl;

    return 0;
}
