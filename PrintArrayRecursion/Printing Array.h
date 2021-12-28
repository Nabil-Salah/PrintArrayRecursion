template <typename T>
void printArrayre(array<T, 5>arr, int x, int y) {
    if (x == y) {
        return;
    }
    else {
        cout << arr[x]<<" ";
        printArrayre(arr, x + 1, y);
    }
}