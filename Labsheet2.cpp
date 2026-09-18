// #include <iostream>
// using namespace std;

// int main() {
//     int a[10], n, key;

//     cout << "Enter size: ";
//     cin >> n;

//     cout << "Enter elements: ";
//     for (int i = 0; i < n; i++)
//         cin >> a[i];

//     cout << "Enter element to search: ";
//     cin >> key;

//     for (int i = 0; i < n; i++) {
//         if (a[i] == key) {
//             cout << "Element found at position " << i + 1;
//             return 0;
//         }
//     }

//     cout << "Element not found";

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int a[10], n, key;
//     int low, high, mid;

//     cout << "Enter size: ";
//     cin >> n;

//     cout << "Enter sorted elements: ";
//     for (int i = 0; i < n; i++)
//         cin >> a[i];

//     cout << "Enter element to search: ";
//     cin >> key;

//     low = 0;
//     high = n - 1;

//     while (low <= high) {
//         mid = (low + high) / 2;

//         if (a[mid] == key) {
//             cout << "Element found at position " << mid + 1;
//             return 0;
//         }
//         else if (key > a[mid])
//             low = mid + 1;
//         else
//             high = mid - 1;
//     }

//     cout << "Element not found";

//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int a[10], n, key;
    int low, high, mid;
    int linear = -1, binary = -1;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter sorted elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter element: ";
    cin >> key;

    // Linear Search
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            linear = i;
            break;
        }
    }

    // Binary Search
    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (a[mid] == key) {
            binary = mid;
            break;
        }
        else if (key > a[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (linear != -1)
        cout << "Linear Search: Found at position " << linear + 1 << endl;
    else
        cout << "Linear Search: Not found" << endl;

    if (binary != -1)
        cout << "Binary Search: Found at position " << binary + 1 << endl;
    else
        cout << "Binary Search: Not found" << endl;

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int a[10], n;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - i - 1; j++) {

            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }

        cout << "Pass " << i + 1 << ": ";

        for (int j = 0; j < n; j++)
            cout << a[j] << " ";

        cout << endl;
    }

    return 0;
}




#include <iostream>
using namespace std;

int main() {
    int a[10], n;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - i - 1; j++) {

            if (a[j] < a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << "Descending order: ";

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int a[10], n;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 1; i < n; i++) {

        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;

        cout << "Pass " << i << ": ";

        for (int k = 0; k < n; k++)
            cout << a[k] << " ";

        cout << endl;
    }

    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int a[10], n;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n - 1; i++) {

        int min = i;

        for (int j = i + 1; j < n; j++) {

            if (a[j] < a[min])
                min = j;
        }

        cout << "Minimum = " << a[min] << endl;

        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    cout << "Sorted array: ";

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}



#include <iostream>
using namespace std;

void merge(int a[], int low, int mid, int high) {
    int temp[10];
    int i = low;
    int j = mid + 1;
    int k = low;

    while (i <= mid && j <= high) {
        if (a[i] < a[j]) {
            temp[k] = a[i];
            i++;
        }
        else {
            temp[k] = a[j];
            j++;
        }
        k++;
    }

    while (i <= mid) {
        temp[k] = a[i];
        i++;
        k++;
    }

    while (j <= high) {
        temp[k] = a[j];
        j++;
        k++;
    }

    for (i = low; i <= high; i++)
        a[i] = temp[i];
}

void mergeSort(int a[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;

        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);

        merge(a, low, mid, high);
    }
}

int main() {
    int a[10], n;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    mergeSort(a, 0, n - 1);

    cout << "Sorted array: ";

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}




#include <iostream>
using namespace std;

int partition(int a[], int low, int high) {
    int pivot = a[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {

        if (a[j] < pivot) {
            i++;

            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    int temp = a[i + 1];
    a[i + 1] = a[high];
    a[high] = temp;

    return i + 1;
}

void quickSort(int a[], int low, int high) {
    if (low < high) {

        int p = partition(a, low, high);

        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}

int main() {
    int a[10], n;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    quickSort(a, 0, n - 1);

    cout << "Sorted array: ";

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}



#include <iostream>
using namespace std;

void display(int a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int partition(int a[], int low, int high, int n) {
    int pivot = a[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {

        if (a[j] < pivot) {
            i++;

            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    int temp = a[i + 1];
    a[i + 1] = a[high];
    a[high] = temp;

    cout << "After partition: ";
    display(a, n);

    return i + 1;
}

void quickSort(int a[], int low, int high, int n) {
    if (low < high) {

        int p = partition(a, low, high, n);

        quickSort(a, low, p - 1, n);
        quickSort(a, p + 1, high, n);
    }
}

int main() {
    int a[10], n;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    quickSort(a, 0, n - 1, n);

    return 0;
}




#include <iostream>
using namespace std;

int main() {
    int a[10], n, choice, key;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter sorted array: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "\n1. Linear Search";
    cout << "\n2. Binary Search";
    cout << "\nEnter choice: ";
    cin >> choice;

    cout << "Enter element: ";
    cin >> key;

    if (choice == 1) {

        for (int i = 0; i < n; i++) {
            if (a[i] == key) {
                cout << "Found at position " << i + 1;
                return 0;
            }
        }

        cout << "Element not found";
    }

    else if (choice == 2) {

        int low = 0;
        int high = n - 1;

        while (low <= high) {

            int mid = (low + high) / 2;

            if (a[mid] == key) {
                cout << "Found at position " << mid + 1;
                return 0;
            }
            else if (key > a[mid])
                low = mid + 1;
            else
                high = mid - 1;
        }

        cout << "Element not found";
    }

    else {
        cout << "Wrong choice";
    }

    return 0;
}




#include <iostream>
using namespace std;

int main() {
    int a[10], n, choice;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "\n1. Bubble Sort";
    cout << "\n2. Insertion Sort";
    cout << "\n3. Selection Sort";
    cout << "\nEnter choice: ";
    cin >> choice;

    // Bubble Sort
    if (choice == 1) {

        for (int i = 0; i < n - 1; i++)
            for (int j = 0; j < n - i - 1; j++)
                if (a[j] > a[j + 1])
                    swap(a[j], a[j + 1]);
    }

    // Insertion Sort
    else if (choice == 2) {

        for (int i = 1; i < n; i++) {

            int key = a[i];
            int j = i - 1;

            while (j >= 0 && a[j] > key) {
                a[j + 1] = a[j];
                j--;
            }

            a[j + 1] = key;
        }
    }

    // Selection Sort
    else if (choice == 3) {

        for (int i = 0; i < n - 1; i++) {

            int min = i;

            for (int j = i + 1; j < n; j++)
                if (a[j] < a[min])
                    min = j;

            swap(a[i], a[min]);
        }
    }

    else {
        cout << "Wrong choice";
        return 0;
    }

    cout << "Sorted array: ";

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}



#include <iostream>
using namespace std;

void merge(int a[], int low, int mid, int high) {
    int temp[10];
    int i = low, j = mid + 1, k = low;

    while (i <= mid && j <= high) {

        if (a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while (i <= mid)
        temp[k++] = a[i++];

    while (j <= high)
        temp[k++] = a[j++];

    for (i = low; i <= high; i++)
        a[i] = temp[i];
}

void mergeSort(int a[], int low, int high) {
    if (low < high) {

        int mid = (low + high) / 2;

        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);

        merge(a, low, mid, high);
    }
}

int main() {
    int a[10], n, key;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    mergeSort(a, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << "\nEnter element to search: ";
    cin >> key;

    int low = 0;
    int high = n - 1;

    while (low <= high) {

        int mid = (low + high) / 2;

        if (a[mid] == key) {
            cout << "Element found at position " << mid + 1;
            return 0;
        }
        else if (key > a[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout << "Element not found";

    return 0;
}




#include <iostream>
using namespace std;

int main() {
    int a[10], b[10], n;
    int bubble = 0, selection = 0;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }

    // Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {

            bubble++;

            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }

    // Selection Sort
    for (int i = 0; i < n - 1; i++) {

        int min = i;

        for (int j = i + 1; j < n; j++) {

            selection++;

            if (b[j] < b[min])
                min = j;
        }

        swap(b[i], b[min]);
    }

    cout << "\nBubble Sort comparisons: " << bubble;
    cout << "\nSelection Sort comparisons: " << selection;

    return 0;
}



#include <iostream>
using namespace std;

/*
Bubble Sort
Best    = O(n)
Average = O(n^2)
Worst   = O(n^2)

Insertion Sort
Best    = O(n)
Average = O(n^2)
Worst   = O(n^2)

Selection Sort
Best    = O(n^2)
Average = O(n^2)
Worst   = O(n^2)
*/

int main() {

    cout << "Bubble Sort";
    cout << "\nBest Case    : O(n)";
    cout << "\nAverage Case : O(n^2)";
    cout << "\nWorst Case   : O(n^2)";

    cout << "\n\nInsertion Sort";
    cout << "\nBest Case    : O(n)";
    cout << "\nAverage Case : O(n^2)";
    cout << "\nWorst Case   : O(n^2)";

    cout << "\n\nSelection Sort";
    cout << "\nBest Case    : O(n^2)";
    cout << "\nAverage Case : O(n^2)";
    cout << "\nWorst Case   : O(n^2)";

    return 0;
}

