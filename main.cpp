#include <iostream>

using namespace std;
int main() {

    double scores[10] = {0,0,0,0,0,0,0,0,0,0};

    scores[0] = 99.9;
    scores[1] = 78.6;
    scores[2] = scores[0] - scores[1];

    cout << "score at 0 " << scores[0]  << endl;
    cout << "score at 1 " << scores[1]  << endl;
    cout << "score at 2 " << scores[2]  << endl;
    cout << "score at 3 " << scores[3]  << endl;

    int z = 2;
    scores[z] = 100;
    cout << "score at z " << scores[z]  << endl;


    // new array
    const int MAX = 100;
    int tests[MAX];

    for (int i = 0; i < MAX; ++i) {
        cout << "tests at " << i << " is " << tests[i] << endl;
    }

    // set all our values to 0
    for (int i = 0; i < MAX; ++i) {
        tests[i] = 0;
    }

    for (int i = 0; i < MAX; ++i) {
        cout << "tests at " << i << " is " << tests[i] << endl;
    }


    const int MAX_2 = 10;
    int first[MAX_2] = {1,2,3,4,5,6,7,8,9,0};
    int second[MAX_2] = {1,2,3,4,5,8,7,8,9,0};
    int third[MAX_2];

    // copy first to third
    for (int i = 0; i < MAX_2; ++i) {
        third[i] = first[i];
    }

    bool areSame = true;

//    for (int i = 0; i < MAX_2; ++i) {
//        if( first[i] == second[i]) {
//            cout << "they are the same at " << i << endl;
//        } else {
//            areSame = false;
//            cout << "they are different at " << i << endl;
//        }
//    }

    for (int i = 0; i < MAX_2; ++i) {
        if( first[i] != third[i]) {
            areSame = false;
            break;
        }
    }

    if (areSame) {
        cout << "The two arrays are the same!" << endl;
    } else {
        cout << "The two arrays are not the same!!" << endl;
    }



    // summing and averaging

    const int MONTHS_IN_YEAR = 12;
    int monthly_sales[MONTHS_IN_YEAR] = {12, 34, 56, 78, 35, 87, 72, 78, 84, 73, 45, 67};

//    for (int i = 0; i < MONTHS_IN_YEAR; ++i) {
//        cout << "Input sales for the month of " << i + 1 << ":" ;
//        cin >> monthly_sales[i];
//    }



    // accumulators
    int sum = 0;

    for (int i = 0; i < MONTHS_IN_YEAR; ++i) {
        sum += monthly_sales[i];
    }
    cout << "Yearly total is " << sum << endl;
    cout << "Monthly Average is " << sum/static_cast<double>(MONTHS_IN_YEAR) << endl;

    // min and or max value

    int min = monthly_sales[0];
    int max = monthly_sales[0];
    for (int i = 1; i < MONTHS_IN_YEAR; ++i) {
        if (monthly_sales[i] < min) {
            min = monthly_sales[i];
        }
        if (monthly_sales[i] > max) {
            max = monthly_sales[i];
        }
    }

    cout << "the min is " << min << endl;
    cout << "the max is " << max << endl;

    const int MAX_VALUES = 20;
    int inputs[MAX_VALUES];

    for (int i = 0; i < MAX_VALUES; ++i) {
        cout << "Input a positive number or -1 when done:";
        cin >> inputs[i];
        if (inputs[i] == -1) {
            break;
        }
    }

    sum = 0;
    for (int i = 0; i < MAX_VALUES; ++i) {
        if (inputs[i] == -1) {
            break;
        } else {
            sum += inputs[i];
        }
    }

    cout << "The total is " << sum << endl;



    for (int sales : monthly_sales) {
        cout << "sales: " << sales << endl;
    }


    for (int &input : inputs) {
        input = 0;
    }

    for (int input : inputs) {
        cout << input;
    }

    cout << "the end!" << endl;
    return 0;
}
