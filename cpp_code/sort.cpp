#include<iostream>
#include<algorithm>
using namespace std;

void print(int a[], int sz){
    for(int i=0; i<sz; ++i){
        printf("%d%s", a[i], (i == sz-1)?"\n":" ");
    }
}

int main(){
    int a[] = {27, 15, 4, 9, 25}, sz = sizeof a / sizeof *a;
    print(a, sz);
    sort(a, a+sz);
    print(a, sz);

}