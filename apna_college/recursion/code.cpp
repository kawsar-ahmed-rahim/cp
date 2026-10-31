//! n to 1

void pNums(int n){
    if(n==1){
        cout << "1\n";
        return;
    }
    cout << n << " ";
    pNums(n-1);
}

int main(){
    pNums(4);
    return 0;
}

//! n factorial
int fac(int n){
    if(n==0){
        return 1;
    }
    return n*fac(n-1);
}

int main(){

    cout << fac(4) << endl;
    return 0;
}


//! sum of n
int sum(int n){
    if(n==1){
        return 1;
    }
    return n+sum(n-1);
}

int main(){

    cout << sum(4) << endl;
    return 0;
}

//! fibonacci
int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    return fib(n-1)+ fib(n-2);
}

//! check if array is sorted
bool isSorted(vector<int> arr, int n){
    if(n==0 || n==1){
        return true;
    }
    return arr[n-1] >= arr[n-2] && isSorted[arr, n-1];
}

int main(){
    vector<int> arr = {1,2,3,4,5};

    return 0;
}