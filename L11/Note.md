---

### 1. **Count the Number of Elements Greater than a Given Value**

**Question**:  
Write a program to count the number of elements in an array that are greater than a given integer `x`.

**Code**:

```cpp
#include<iostream>
using namespace std;
int main(){
    int arr[5]={3,4,6,2,4};
    int count=0;
    int x = 3;
    for(int i=0;i<5;i++){
        if(arr[i]>x){
            count++;
        }
    }
    cout<<count;
}
```

**Explanation**:  
This program initializes an array of 5 elements. It then counts how many elements in the array are greater than the value `x` (in this case, 3) and prints the result.

---

### 2. **Check if a Given Element Exists in an Array**

**Question**:  
Write a program to check if a given integer `x` exists in the array or not. Print "Yes" if it exists, otherwise print "No".

**Code**:

```cpp
#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int x = 3;
    bool flag = false;
    for(int i=0;i<5;i++){
        if(arr[i]==x){
            flag = true;
            break;
        }
    }
    if(flag == false){
        cout<<"No";
    }else{
        cout<<"Yes";
    }
}
```

**Explanation**:  
This program checks whether a given integer `x` exists in the array. It iterates through the array and sets the `flag` to `true` if it finds the value. If `flag` remains `false`, it prints "No"; otherwise, it prints "Yes".

---

### 3. **Check if an Element Exists in a Dynamically Sized Array**

**Question**:  
Write a program that asks the user to input the size of the array and then inputs the elements. After that, it asks for a value `x` and checks whether `x` exists in the array or not.

**Code**:

```cpp
#include<iostream>
using namespace std;
int main(){
    int n,x;
    cout<<"Enter The Size of Array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the value of X: ";
    cin>>x;
    bool flag = false;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            flag = true;
            break;
        }
    }
    if(flag == false){
        cout<<"No";
    }else{
        cout<<"Yes";
    }
    return 0;
}
```

**Explanation**:  
This program dynamically takes the size of the array and its elements. It then checks if the value `x` is present in the array and prints "Yes" or "No" accordingly.

---

### 4. **Find the Maximum Value in an Array**

**Question**:  
Write a program to find the maximum value in an array of integers.

**Code**:

```cpp
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Size of Array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int max =0;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"The Maximum value is : "<<max;
    return 0;
}
```

**Explanation**:  
This program prompts the user to input an array and then finds the maximum value in the array by iterating through each element and updating the `max` value.

---

### 5. **Find the Maximum and Second Maximum Value in an Array**

**Question**:  
Write a program to find both the maximum and second maximum values in an array of integers.

**Code**:

```cpp
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Size of Array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int max =0;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"The Maximum value is : "<<max;

    int smax = 0;
    for(int i=0;i<n;i++){
        if(arr[i]!=max && arr[i]>smax){
            smax=arr[i];
        }
    }
    cout<<"Second Max is : "<<smax;
    return 0;
}
```

**Explanation**:  
This program first finds the maximum value in the array, then searches for the second maximum by ignoring the maximum value and checking the other elements.

---

### 6. **Find the Sum of All Elements in an Array**

**Question**:  
Write a program to find the sum of all the elements in an array.

**Code**:

```cpp
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Size of Array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    cout<<"The Sum of Element of Array is :"<<sum;
    return 0;
}
```

**Explanation**:  
This program calculates the sum of all elements in an array by iterating through each element and adding it to the `sum` variable.

---

### Key Concepts Covered:
1. **Array Traversal**: Iterating through an array to perform operations like searching or finding values.
2. **Condition Checking**: Using conditions like `if` to filter or check specific values.
3. **Dynamic Array Size**: Using a user-defined array size with the `cin` function for dynamic input.
4. **Array Operations**: Finding maximum, second maximum, and sum of elements.

Let me know if you'd like any further explanations or modifications!