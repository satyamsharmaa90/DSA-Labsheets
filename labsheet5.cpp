#include <iostream>
using namespace std;

int s[5], top=-1;

void push(int x){
    if(top==4) cout<<"Overflow";
    else s[++top]=x;
}
void pop(){
    if(top==-1) cout<<"Underflow";
    else cout<<s[top--]<<" popped";
}
void peek(){
    if(top==-1) cout<<"Empty";
    else cout<<"Top: "<<s[top];
}
void display(){
    for(int i=top;i>=0;i--) cout<<s[i]<<" ";
}

int main(){
    push(10); push(20); push(30);
    display();
    cout<<endl;
    peek();
    cout<<endl;
    pop();
}


#include <iostream>
using namespace std;

int main(){
    int s[3], top=-1;
    for(int i=1;i<=4;i++){
        if(top==2) cout<<"Stack Overflow\n";
        else s[++top]=i*10;
    }
}


#include <iostream>
using namespace std;

int main(){
    int top=-1;
    if(top==-1)
        cout<<"Stack Underflow";
}



#include <iostream>
using namespace std;

int main(){
    int s[5]={10,20,30};
    int top=2;

    if(top==-1) cout<<"Empty";
    else cout<<"Top = "<<s[top];
}



#include <iostream>
using namespace std;

int main(){
    int s[5],top=-1,ch,x;

    do{
        cout<<"\n1.Push 2.Pop 3.Peek 4.Display 5.Exit\n";
        cin>>ch;

        if(ch==1){
            cin>>x;
            if(top==4) cout<<"Overflow";
            else s[++top]=x;
        }
        else if(ch==2){
            if(top==-1) cout<<"Underflow";
            else cout<<s[top--]<<" popped";
        }
        else if(ch==3){
            if(top==-1) cout<<"Empty";
            else cout<<s[top];
        }
        else if(ch==4)
            for(int i=top;i>=0;i--) cout<<s[i]<<" ";
    }while(ch!=5);
}



#include <iostream>
using namespace std;

int main(){
    int s[5],top=-1;
    s[++top]=10;
    s[++top]=20;
    s[++top]=30;

    for(int i=top;i>=0;i--)
        cout<<s[i]<<" ";
}



#include <iostream>
using namespace std;

int main(){
    string str;
    cin>>str;

    char s[100];
    int top=-1;

    for(char c:str) s[++top]=c;

    while(top!=-1)
        cout<<s[top--];
}



#include <iostream>
using namespace std;

int main(){
    string str;
    cin>>str;
    char s[100];
    int top=-1;

    for(char c:str){
        if(c=='(') s[++top]=c;
        else if(c==')'){
            if(top==-1){
                cout<<"Not Balanced";
                return 0;
            }
            top--;
        }
    }

    cout<<(top==-1 ? "Balanced":"Not Balanced");
}



#include <iostream>
#include <stack>
using namespace std;

int p(char c){
    if(c=='+'||c=='-') return 1;
    if(c=='*'||c=='/') return 2;
    return 0;
}

int main(){
    string s,post="";
    stack<char> st;
    cin>>s;

    for(char c:s){
        if(isalnum(c)) post+=c;
        else if(c=='(') st.push(c);
        else if(c==')'){
            while(st.top()!='('){
                post+=st.top(); st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && p(st.top())>=p(c)){
                post+=st.top(); st.pop();
            }
            st.push(c);
        }
    }
    while(!st.empty()){
        post+=st.top(); st.pop();
    }
    cout<<"Postfix: "<<post;
}



#include <iostream>
#include <stack>
using namespace std;

int main(){
    string s;
    cin>>s;
    stack<int> st;

    for(char c:s){
        if(isdigit(c))
            st.push(c-'0');
        else{
            int b=st.top(); st.pop();
            int a=st.top(); st.pop();

            if(c=='+') st.push(a+b);
            if(c=='-') st.push(a-b);
            if(c=='*') st.push(a*b);
            if(c=='/') st.push(a/b);
        }
    }
    cout<<"Result: "<<st.top();
}



#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin>>s;

    reverse(s.begin(),s.end());

    for(char &c:s){
        if(c=='(') c=')';
        else if(c==')') c='(';
    }

    stack<char> st;
    string pre="";

    for(char c:s){
        if(isalnum(c)) pre+=c;
        else if(c=='(') st.push(c);
        else if(c==')'){
            while(!st.empty() && st.top()!='('){
                pre+=st.top(); st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && st.top()!='('){
                pre+=st.top(); st.pop();
            }
            st.push(c);
        }
    }

    while(!st.empty()){
        pre+=st.top(); st.pop();
    }

    reverse(pre.begin(),pre.end());
    cout<<"Prefix: "<<pre;
}



#include <iostream>
using namespace std;

int main(){
    int a[10];
    int top1=-1, top2=10;

    a[++top1]=10;
    a[++top1]=20;

    a[--top2]=50;
    a[--top2]=40;

    cout<<"Stack 1: ";
    for(int i=top1;i>=0;i--)
        cout<<a[i]<<" ";

    cout<<"\nStack 2: ";
    for(int i=top2;i<10;i++)
        cout<<a[i]<<" ";
}



#include <iostream>
using namespace std;

class Stack{
    int a[5], top=-1;

public:
    void push(int x){
        if(top==4) cout<<"Overflow";
        else a[++top]=x;
    }

    void pop(){
        if(top==-1) cout<<"Underflow";
        else cout<<a[top--]<<" popped";
    }

    void display(){
        for(int i=top;i>=0;i--)
            cout<<a[i]<<" ";
    }
};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
}



#include <iostream>
using namespace std;

void fun(int n){
    if(n==0) return;

    cout<<n<<" ";
    fun(n-1);
}

int main(){
    fun(5);
}


#include <iostream>
using namespace std;

int main(){
    cout<<"Push    : O(1)\n";
    cout<<"Pop     : O(1)\n";
    cout<<"Peek    : O(1)\n";
    cout<<"Display : O(n)\n";
}


