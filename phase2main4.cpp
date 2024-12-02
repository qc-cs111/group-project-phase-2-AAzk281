#include <iostream>
using namespace std;

        int minIndex(int h[], int low, int high) {
                int minIdx = low;
                for (int i = low + 1; i <= high; i++) {
                        if (h[i] < h[minIdx]) {
                                minIdx = i;
                        }
                }
                return minIdx;
        }

        int main (){
                int h[6];
                cout << "Please enter six non-negative integers." << endl;
                for (int i = 0; i < 6; i++) {
                        cout << "Integer #" << i + 1 << ": ";
                        cin >> h[i];
                }
                int low = 0, high = 5;
                int idx = minIndex(h,low, high);
                cout << "The index of the smallest integer in the subarray is " << idx << endl;
        }
~                                                                                                                             
~                                                                                                                             
~                                                                                                                             
~                                                                                                                             
~              
