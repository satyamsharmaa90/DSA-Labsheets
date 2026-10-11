#include <iostream>
using namespace std;

int main() {
    int a[] = {5, 3, 8, 1, 2};
    int n = 5;

    cout << "Before: ";
    for(int x : a) cout << x << " ";

    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++)
            if(a[j] > a[j+1])
                swap(a[j], a[j+1]);

        cout << "\nPass " << i+1 << ": ";
        for(int x : a) cout << x << " ";
    }
}


#include <iostream>
using namespace std;

int main() {
    int a[] = {5, 3, 8, 1, 2};
    int n = 5;

    for(int i=0; i<n-1; i++)
        for(int j=0; j<n-i-1; j++)
            if(a[j] < a[j+1])
                swap(a[j], a[j+1]);

    cout << "Descending: ";
    for(int x : a) cout << x << " ";
}


#include <iostream>
using namespace std;

int main() {
    int a[] = {5, 3, 8, 1, 2};
    int n = 5;

    for(int i=1; i<n; i++) {
        int key = a[i], j = i-1;

        while(j >= 0 && a[j] > key) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;

        cout << "Pass " << i << ": ";
        for(int x : a) cout << x << " ";
        cout << endl;
    }
}




#include <iostream>
using namespace std;

int main() {
    int a[] = {5, 3, 8, 1, 2};
    int n = 5;

    for(int i=0; i<n-1; i++) {
        int min = i;

        for(int j=i+1; j<n; j++)
            if(a[j] < a[min])
                min = j;

        cout << "Minimum: " << a[min] << endl;
        swap(a[i], a[min]);
    }

    cout << "Sorted: ";
    for(int x : a) cout << x << " ";
}




#include <iostream>
using namespace std;

void merge(int a[], int l, int m, int r) {
    int temp[100], i=l, j=m+1, k=0;

    while(i<=m && j<=r)
        temp[k++] = (a[i] < a[j]) ? a[i++] : a[j++];

    while(i<=m) temp[k++] = a[i++];
    while(j<=r) temp[k++] = a[j++];

    for(i=l, k=0; i<=r; i++, k++)
        a[i] = temp[k];
}

void mergeSort(int a[], int l, int r) {
    if(l < r) {
        int m = (l+r)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        merge(a,l,m,r);
    }
}

int main() {
    int a[] = {5,3,8,1,2};
    int n = 5;

    mergeSort(a,0,n-1);

    for(int x : a) cout << x << " ";
}




#include <iostream>
using namespace std;

int partition(int a[], int low, int high) {
    int pivot = a[high], i = low-1;

    for(int j=low; j<high; j++)
        if(a[j] < pivot)
            swap(a[++i], a[j]);

    swap(a[i+1], a[high]);
    return i+1;
}

void quickSort(int a[], int low, int high) {
    if(low < high) {
        int p = partition(a,low,high);
        quickSort(a,low,p-1);
        quickSort(a,p+1,high);
    }
}

int main() {
    int a[] = {5,3,8,1,2};
    int n=5;

    quickSort(a,0,n-1);

    for(int x : a) cout << x << " ";
}




#include <iostream>
using namespace std;

int n = 5;

void display(int a[]) {
    for(int i=0;i<n;i++) cout << a[i] << " ";
    cout << endl;
}

int partition(int a[], int l, int h) {
    int pivot=a[h], i=l-1;

    for(int j=l;j<h;j++)
        if(a[j]<pivot)
            swap(a[++i],a[j]);

    swap(a[i+1],a[h]);
    display(a);
    return i+1;
}

void quickSort(int a[],int l,int h) {
    if(l<h) {
        int p=partition(a,l,h);
        quickSort(a,l,p-1);
        quickSort(a,p+1,h);
    }
}

int main() {
    int a[]={5,3,8,1,2};
    quickSort(a,0,n-1);
}




#include <iostream>
using namespace std;

void bubble(int a[],int n) {
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(a[j]>a[j+1]) swap(a[j],a[j+1]);
}

void insertion(int a[],int n) {
    for(int i=1;i<n;i++) {
        int key=a[i],j=i-1;
        while(j>=0 && a[j]>key) {
            a[j+1]=a[j]; j--;
        }
        a[j+1]=key;
    }
}

void selection(int a[],int n) {
    for(int i=0;i<n-1;i++) {
        int m=i;
        for(int j=i+1;j<n;j++)
            if(a[j]<a[m]) m=j;
        swap(a[i],a[m]);
    }
}

// Merge Sort and Quick Sort functions are same as Q5 and Q6.

int main() {
    int a[]={5,3,8,1,2};
    int n=5;

    bubble(a,n);   // Change to insertion/selection etc.

    for(int x:a) cout<<x<<" ";
}




#include <iostream>
using namespace std;

void bubble(int a[],int n) {
    int c=0,s=0;
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++) {
            c++;
            if(a[j]>a[j+1]) {
                swap(a[j],a[j+1]);
                s++;
            }
        }
    cout<<"Bubble: Comparisons="<<c<<" Swaps="<<s<<endl;
}

void selection(int a[],int n) {
    int c=0,s=0;
    for(int i=0;i<n-1;i++) {
        int m=i;
        for(int j=i+1;j<n;j++) {
            c++;
            if(a[j]<a[m]) m=j;
        }
        if(m!=i) {
            swap(a[i],a[m]);
            s++;
        }
    }
    cout<<"Selection: Comparisons="<<c<<" Swaps="<<s<<endl;
}

int main() {
    int a[]={5,3,8,1,2};
    int b[]={5,3,8,1,2};

    bubble(a,5);
    selection(b,5);
}



#include <iostream>
using namespace std;

int main() {
    cout << "Merge Sort:\n";
    cout << "Time: O(n log n)\n";
    cout << "Space: O(n)\n\n";

    cout << "Quick Sort:\n";
    cout << "Average Time: O(n log n)\n";
    cout << "Worst Time: O(n^2)\n";
    cout << "Average auxiliary space: O(log n)\n";
}




#include <iostream>
using namespace std;

void bubble(int a[],int n) {
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
}

int main() {
    int a[]={5,3,8,1,2}, choice;

    cout<<"1. Bubble\n2. Insertion\n3. Selection\n";
    cout<<"4. Merge\n5. Quick\nChoice: ";
    cin>>choice;

    if(choice==1)
        bubble(a,5);

    // Add functions from previous questions for choices 2-5.

    for(int x:a) cout<<x<<" ";
}



#include <iostream>
using namespace std;

int main() {
    int a[]={5,3,8,1,2};
    int n=5;

    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(a[j]>a[j+1]) swap(a[j],a[j+1]);

    cout<<"Ascending: ";
    for(int x:a) cout<<x<<" ";

    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(a[j]<a[j+1]) swap(a[j],a[j+1]);

    cout<<"\nDescending: ";
    for(int x:a) cout<<x<<" ";
}



#include <iostream>
using namespace std;

int main() {
    int a[]={5,3,8,1,2};
    int n=5, count=0;

    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++) {
            count++;
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
        }

    cout<<"Bubble Sort Comparisons: "<<count;
}



#include <iostream>
using namespace std;

int main() {
    int a[]={1,2,3,4,5};
    int n=5, swaps=0;

    for(int i=0;i<n-1;i++) {
        bool flag=false;

        for(int j=0;j<n-i-1;j++)
            if(a[j]>a[j+1]) {
                swap(a[j],a[j+1]);
                flag=true;
                swaps++;
            }

        if(!flag) break;
    }

    cout<<"Already Sorted\n";
    cout<<"Bubble Sort Swaps: "<<swaps;
}



#include <iostream>
using namespace std;

int partition(int a[],int l,int h) {
    int pivot=a[h],i=l-1;

    for(int j=l;j<h;j++)
        if(a[j]<pivot)
            swap(a[++i],a[j]);

    swap(a[i+1],a[h]);
    return i+1;
}

void quickSort(int a[],int l,int h) {
    if(l<h) {
        int p=partition(a,l,h);
        quickSort(a,l,p-1);
        quickSort(a,p+1,h);
    }
}

void display(int a[],int n) {
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
}

int main() {
    int sorted[]={1,2,3,4,5};
    int reverse[]={5,4,3,2,1};
    int random[]={3,5,1,4,2};

    quickSort(sorted,0,4);
    quickSort(reverse,0,4);
    quickSort(random,0,4);

    cout<<"Sorted: "; display(sorted,5);
    cout<<"Reverse: "; display(reverse,5);
    cout<<"Random: "; display(random,5);
}

