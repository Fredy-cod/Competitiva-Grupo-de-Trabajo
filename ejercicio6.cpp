#include<iostream>
#include<algorithm>

using namespace std;

int arr[1000005];

int binarySearch(int* array, int target, int size) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (array[mid] == target) {
            return mid;
        }
        else if (array[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n, target;
    scanf("%d %d", &n, &target);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    cout << binarySearch(arr, target, n) << endl;
}
