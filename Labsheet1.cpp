// 1
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = 5;

//     int evenSum = 0, oddSum = 0;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] % 2 == 0)
//             evenSum += arr[i];
//         else
//             oddSum += arr[i];
//     }

//     cout << "SumEven = " << evenSum << endl;
//     cout << "SumOdd = " << oddSum << endl;

//     return 0;
// }

// 2
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     int A[] = {1, 2, 3, 4, 5};
//     int B[] = {2, 4, 6, 8, 10, 12, 14};

//     int n1 = 5, n2 = 7;
//     int n = max(n1, n2);

//     cout << "Sum = ";

//     for (int i = 0; i < n; i++) {
//         int sum = 0;

//         if (i < n1)
//             sum += A[i];

//         if (i < n2)
//             sum += B[i];

//         cout << sum << " ";
//     }

//     return 0;
// }

// 3
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = 5;

//     cout << "Reverse = ";

//     for (int i = n - 1; i >= 0; i--) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// 4
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = 5;
//     int k = 2;

//     sort(arr, arr + n);

//     cout << k << "nd Smallest = " << arr[k - 1] << endl;
//     cout << k << "nd Largest = " << arr[n - k] << endl;

//     return 0;
// }

// 5
// #include <iostream>
// using namespace std;

// int main() {
//     int A[] = {1, 2, 3, 4, 5};
//     int B[] = {2, 4, 6, 8, 10};

//     int n1 = 5, n2 = 5;

//     // Union
//     cout << "Union = ";

//     for (int i = 0; i < n1; i++)
//         cout << A[i] << " ";

//     for (int i = 0; i < n2; i++) {
//         bool found = false;

//         for (int j = 0; j < n1; j++) {
//             if (B[i] == A[j])
//                 found = true;
//         }

//         if (!found)
//             cout << B[i] << " ";
//     }

//     // Intersection
//     cout << "\nIntersection = ";

//     for (int i = 0; i < n1; i++) {
//         for (int j = 0; j < n2; j++) {
//             if (A[i] == B[j]) {
//                 cout << A[i] << " ";
//                 break;
//             }
//         }
//     }

//     return 0;
// }

// 6
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 4, 3, 4, 5, 1};
//     int n = 6;

//     cout << "Duplicate elements = ";

//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {

//             if (arr[i] == arr[j]) {
//                 cout << arr[i] << " ";
//                 break;
//             }
//         }
//     }

//     return 0;
// }


// 7
// #include <iostream>
// using namespace std;

// int main() {
//     int A[] = {11, 1, 13, 21, 3, 7};
//     int B[] = {11, 3, 7, 1};

//     int n1 = 6, n2 = 4;
//     bool subset = true;

//     for (int i = 0; i < n2; i++) {
//         bool found = false;

//         for (int j = 0; j < n1; j++) {
//             if (B[i] == A[j]) {
//                 found = true;
//                 break;
//             }
//         }

//         if (!found) {
//             subset = false;
//             break;
//         }
//     }

//     if (subset)
//         cout << "Yes, B is a subset of A";
//     else
//         cout << "No, B is not a subset of A";

//     return 0;
// }


// 8
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {10, 5, 3, 4, 3, 5, 6};
//     int n = 7;

//     for (int i = 0; i < n; i++) {

//         for (int j = i + 1; j < n; j++) {

//             if (arr[i] == arr[j]) {
//                 cout << "First repeating element = " << arr[i];
//                 return 0;
//             }
//         }
//     }

//     cout << "No repeating element";

//     return 0;
// }



