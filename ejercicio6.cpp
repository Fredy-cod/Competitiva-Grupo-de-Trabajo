#include<iostream>
#include<algorithm>

using namespace std;

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
    int size = 1000000;
    int target = 234;
    int* lista = new int[size];
    for (int i = 0; i < size; i++) 
        lista[i] = rand() % size;
    sort(lista, lista + size);
    cout << binarySearch(lista, target, size) << endl;
}