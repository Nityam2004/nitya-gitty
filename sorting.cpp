#include <iostream>
using namespace std;

void selection_sort(int a[], int n) {
    for(int i = 0; i <= n - 1; i++) {
        int min_index = i;
        for(int j = i; j < n; j++) {
            if(a[j] < a[min_index]) {
                min_index = j;
            }
        }
        swap(a[i], a[min_index]);
    }
}

int main() {
    int n;
    cin >> n;
    int a[1000];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    selection_sort(a, n);
    for(int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;
void  insertion_sort(int arr[],int n){
for(int i=1;i<=n-1;i++){
    int e=arr[i];
    //place the current element at "right" position in the sorted part
    int j =i-1;
    while(j>=0 and arr[j]>e){
        arr[j+1]=arr[j];
        j=j-1;}
        arr[j + 1]=e;
}

}


int main(){
 int n,key;
    cin >> n;
    int a[1000];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    insertion_sort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<",";
    }
return 0;
}