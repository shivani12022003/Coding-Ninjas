 #include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;  
    int *input = new int[n];    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }   
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }   
    delete [] input;
}

