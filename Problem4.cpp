#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

unordered_map<int, int> getMultiplesCount(const vector<int>& numbers, const vector<int>& multiples) {
    unordered_map<int, int> countMap;

    for (int num : numbers) {
        for (int multiple : multiples) {
            if (num % multiple == 0) {
                countMap[multiple]++;
            }
        }
    }

    return countMap;
}

int main() {
    vector<int> numbers;
    vector<int> multiples;

    int numCount, multipleCount;

    cout << "Enter the number of numbers: ";
    cin >> numCount;

    cout << "Enter the numbers: ";
    for (int i = 0; i < numCount; i++) {
        int num;
        cin >> num;
        numbers.push_back(num);
    }

    cout << "Enter the number of multiples: ";
    cin >> multipleCount;

    cout << "Enter the multiples: ";
    for (int i = 0; i < multipleCount; i++) {
        int multiple;
        cin >> multiple;
        multiples.push_back(multiple);
    }

    unordered_map<int, int> result = getMultiplesCount(numbers, multiples);

    cout << "Output: " << endl;
    for (const auto& pair : result) {
        cout << pair.first << ": " << pair.second << ", ";
    }
    cout << endl;

    return 0;
}
