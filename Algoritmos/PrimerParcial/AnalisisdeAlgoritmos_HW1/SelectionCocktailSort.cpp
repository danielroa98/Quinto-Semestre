#include <iostream>
#include <chrono>
#include <array>

using namespace std;
using namespace std::chrono;

//To fill the array with random elements
void scramble_array(int arr[],int size)
{
    srand(time(NULL));

    for(int i = 0; i < size; i++)
    {
        arr[i] = rand()%(size*10);
    }
}//Close scramble_array

//To print the array
void print_arr(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}//Close print_arr

//To swap elements in the array
void swap(int *x, int *y)
{
    int temporal = *x;
    *x = *y;
    *y = temporal;
}//Close swap

void CocktailSort(int a[], int n)
{
    bool swapped = true; 
    int begin = 0; 
    int end = n-1; 
  
    while (swapped)
    { 
        swapped = false; 
  
        for (int i = begin; i < end; ++i)
        { 
            if (a[i] > a[i+1]) 
            { 
                swap(a[i], a[i+1]); 
                swapped = true; 
            } 
        } 
  
        if (!swapped)
        {
            break; 
        }
  
        swapped = false; 
  
        --end; 
  
        for (int i = end-1; i >= begin; --i) 
        { 
            if (a[i] > a[i+1]) 
            { 
                swap(a[i], a[i+1]); 
                swapped = true; 
            } 
        } 
        
        ++begin; 
    }
}//Close CocktailSort

void SelectionSort(int a[], int n)
{
    int i, j, min_idx;  
  
    for (i = 0; i < n-1; i++)  
    {  
        min_idx = i;  
        
        for (j = i+1; j < n; j++)
        {
             if (a[j] < a[min_idx])
             {
                 min_idx = j;
             }
         }
  
        swap(&a[min_idx], &a[i]);  
    }  
}//Close SelectionSort

int main()
{
    int size, arr_size;
    bool menu = true;
    int menu_option = 0;

    while (menu)
    {
        cout << "Enter the size of the array: \n 1. 10 \n 2. 100 \n 3. 1,000 \n 4. 10,000 \n 5. 100,000 \n 6. 1,000,000" << endl;
        cout << "The program must be restarted to enter a new array size." << endl;
        cin >> menu_option;
        switch (menu_option)
        {
            case 1:
                size = 10;
                menu = false;
                break;
            case 2:
                size = 100;
                menu = false;
                break;
            case 3:
                size = 1000;
                menu = false;
                break;
            case 4:
                size = 10000;
                menu = false;
                break;
            case 5:
                size = 100000;
                menu = false;
                break;
            case 6:
                size = 1000000;
                menu = false;
                break;
            default:
                cout << "\nInput not valid, please enter a valid option.";
                break;
        }
    }
    
    cout << "\nSize of the array:  " << size << endl;

    //Declaring size and randomizing the array.
    //int arr[size];
    int* arr = new int[size];
    arr_size = size ;//sizeof(arr)/sizeof(arr[0]);

    scramble_array(arr, arr_size);
    
    //print_arr(arr, arr_size);
    
    auto start = high_resolution_clock::now();
    //CocktailSort(arr, arr_size);
    SelectionSort(arr, arr_size);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    
    cout << "\nTime of execution: " << duration.count() << " microseconds" << endl;
    
    print_arr(arr, arr_size);
     
    delete [] arr;
    
    return 0;
}//Close main
