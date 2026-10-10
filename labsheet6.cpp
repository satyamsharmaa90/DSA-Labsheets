
#include <iostream>
using namespace std;

int q[5], front = -1, rear = -1;

void enqueue(int x) {
    if (rear == 4) cout << "Overflow\n";
    else {
        if (front == -1) front = 0;
        q[++rear] = x;
    }
}

void dequeue() {
    if (front == -1) cout << "Underflow\n";
    else {
        cout << "Deleted: " << q[front++] << endl;
        if (front > rear) front = rear = -1;
    }
}

void peek() {
    if (front == -1) cout << "Empty\n";
    else cout << q[front] << endl;
}

void display() {
    if (front == -1) cout << "Empty\n";
    else {
        for (int i = front; i <= rear; i++)
            cout << q[i] << " ";
        cout << endl;
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    peek();
    dequeue();
    display();
    return 0;
}



#include <iostream>
using namespace std;
int main() {
    int q[5], rear = -1, x;
    cout << "Enter value: ";
    cin >> x;
    q[++rear] = x;
    cout << "Inserted at Rear: " << q[rear];
    return 0;
}




#include <iostream>
using namespace std;
int main() {
    int q[5] = {10, 20, 30};
    int front = 0, rear = 2;
    cout << "Deleted: " << q[front++];
    return 0;
}



#include <iostream>
using namespace std;
int main() {
    int q[] = {10, 20, 30};
    int front = 0;
    cout << "Front element: " << q[front];
    return 0;
}




#include <iostream>
using namespace std;
int main() {
    int q[] = {10, 20, 30, 40};
    for (int i = 0; i < 4; i++)
        cout << q[i] << " ";
    return 0;
}



#include <iostream>
using namespace std;
int main() {
    int q[3], rear = -1;
    for (int i = 1; i <= 4; i++) {
        if (rear == 2)
            cout << "Queue Overflow\n";
        else
            q[++rear] = i * 10;
    }
    return 0;
}




#include <iostream>
using namespace std;
int main() {
    int front = -1, rear = -1;
    if (front == -1 || front > rear)
        cout << "Queue Underflow";
    return 0;
}




#include <iostream>
using namespace std;
int q[5], f = -1, r = -1;

void enq(int x) {
    if (r == 4) cout << "Overflow\n";
    else {
        if (f == -1) f = 0;
        q[++r] = x;
    }
}
void deq() {
    if (f == -1) cout << "Underflow\n";
    else {
        cout << q[f++] << " deleted\n";
        if (f > r) f = r = -1;
    }
}
void display() {
    if (f == -1) cout << "Empty\n";
    else {
        for (int i = f; i <= r; i++)
            cout << q[i] << " ";
        cout << endl;
    }
}
int main() {
    int c, x;
    do {
        cout << "\n1.Enqueue 2.Dequeue 3.Display 4.Exit\n";
        cin >> c;
        if (c == 1) { cin >> x; enq(x); }
        else if (c == 2) deq();
        else if (c == 3) display();
    } while (c != 4);
}




#include <iostream>
using namespace std;
int main() {
    int q[] = {10, 20, 30, 40};
    int n = 4;
    cout << "Count: " << n;
    return 0;
}




#include <iostream>
using namespace std;
int main() {
    int q[] = {10, 20, 30, 40};
    int x, found = 0;
    cin >> x;
    for (int i = 0; i < 4; i++)
        if (q[i] == x) found = 1;
    if (found) cout << "Found";
    else cout << "Not Found";
    return 0;
}





#include <iostream>
using namespace std;
int main() {
    int q[] = {30, 10, 50, 20, 40};
    int mx = q[0], mn = q[0];
    for (int i = 1; i < 5; i++) {
        if (q[i] > mx) mx = q[i];
        if (q[i] < mn) mn = q[i];
    }
    cout << "Maximum: " << mx << "\nMinimum: " << mn;
    return 0;
}




#include <iostream>
using namespace std;
int main() {
    int q[] = {10, 20, 30, 40};
    for (int i = 3; i >= 0; i--)
        cout << q[i] << " ";
    return 0;
}




#include <iostream>
using namespace std;
int q[5], f = -1, r = -1;

void enqueue(int x) {
    if ((r + 1) % 5 == f) {
        cout << "Full\n";
        return;
    }
    if (f == -1) f = 0;
    r = (r + 1) % 5;
    q[r] = x;
}
void dequeue() {
    if (f == -1) cout << "Empty\n";
    else if (f == r) f = r = -1;
    else f = (f + 1) % 5;
}
void display() {
    if (f == -1) { cout << "Empty"; return; }
    int i = f;
    while (true) {
        cout << q[i] << " ";
        if (i == r) break;
        i = (i + 1) % 5;
    }
}
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    return 0;
}




