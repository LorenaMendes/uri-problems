#include <iostream>
#include <string>
using namespace std;
 
// partition the array using last element as pivot
int partition (string arr[], int low, int high){ 
    string pivot = arr[high];    // pivot 
    int i = (low - 1);
    string temp;   
  
    for (int j = low; j <= high- 1; j++){ 
        //if current element is smaller than pivot, increment the low element
        //swap elements at i and j
        if (arr[j] <= pivot){ 
            i++;    // increment index of smaller element 
            temp.assign(arr[i]);
            arr[i].assign(arr[j]);
            arr[j].assign(temp); 
        } 
    } 
    // swap(&arr[i + 1], &arr[high]);
    temp.assign(arr[i + 1]);
    arr[i + 1].assign(arr[high]);
    arr[high].assign(temp);
    return (i + 1); 
} 
  
//quicksort algorithm
void quickSort(string arr[], int low, int high){
    if (low < high){ 
        //partition the array 
        int pivot = partition(arr, low, high); 
  
        //sort the sub arrays independently 
        quickSort(arr, low, pivot - 1); 
        quickSort(arr, pivot + 1, high); 
    } 
}

int main(){
	int N;
	string nums[1000];
	
	while(cin >> N){
		for (int i = 0; i < N; ++i) cin >> nums[i];
		// sort(nums, N);
		quickSort(nums, 0, N-1);
		for (int i = 0; i < N; ++i) cout << nums[i] << endl;
	}
}