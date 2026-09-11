#include <iostream>
#include <vector>
#include <string>

using namespace std;


template <typename T>
vector<T> filter(T* array, int size, T threshold) {
    vector<T> result;
    for (int i = 0; i < size; ++i) {
        if (array[i] < threshold) {
            result.push_back(array[i]);
        }
    }
    return result;
}

int main() {
    int testCase;
    cin >> testCase;

    if (testCase == 1) {
        int intSize;
        cin >> intSize;
        int* intArray = new int[intSize];
        for (int i = 0; i < intSize; i++) {
            cin >> intArray[i];
        }
        int intThreshold;
        cin >> intThreshold;
        vector<int> intResult = filter(intArray, intSize, intThreshold); // Повик на функцискиот темплејт filter
        for (int val : intResult) {
            cout << val << " ";
        }
        cout << endl;

        delete[] intArray;
    } else if (testCase == 2) {
        int strSize;
        cin >> strSize;
        string* strArray = new string[strSize];
        for (int i = 0; i < strSize; i++) {
            cin >> strArray[i];
        }
        string strThreshold;
        cin >> strThreshold;
        vector<string> strResult = filter(strArray, strSize, strThreshold);
        for (string val : strResult) {
            cout << val << " ";
        }
        cout << endl;

        delete[] strArray;
    }

    return 0;
}
