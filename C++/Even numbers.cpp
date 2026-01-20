#include <iostream>
using namespace std;

int main() {
    int size;
    int sum =0;
    int even =0;
    int average;
    cout << "Enter Number of Elements in the Array: " << endl;
    cin >> size;
    int array[size];
    cout << "Enter " << size << " array elements\n";
    for (int i = 0 ; i<size;i++)
    {
        cout << "element (" << i+1 <<") value: ";
        cin >> array[i];
        if (array[i] % 2 ==0)
        {
            even++;
            sum = sum + array[i];
        }
    }
    if (even == 0) {
    cout << "There are no even numbers in the array." << endl;
	} else {
    average = sum / even;
    cout << "the number of even values in the array is: " << even << endl;
    cout << "the sum of even values in the array is: " << sum << endl;
    cout << "Average of Even elements in the array is: " << average << endl;
	}

    return 0;
}
