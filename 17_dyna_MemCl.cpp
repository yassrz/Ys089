#include<iostream>
using namespace std;

class dynamicArray
{
    private:
      int* lkd;
    public:
       dynamicArray(int a)
       {
        
          lkd = new int[a];
          cout<<"size of the dynamic array: "<<a<<endl;
       } 

       ~dynamicArray()
       {
          delete[] lkd;
          cout<<"destroying the world of dynamic array"<<endl;
       }   
};
int main()
{
    dynamicArray yt(75);
    
    return 0;
}
// int main() {
//     int size;
//     cout << "Enter size of array: ";
//     cin >> size;
    
//     int* arr = new int[size]; // Dynamic allocation of memory for an array
    
//     // Access elements of the array
//     for (int i = 0; i < size; ++i) {
//         arr[i] = i * 10;
//     }
    
//     delete[] arr; // Release the dynamically allocated memory
//     return 0;
// }
