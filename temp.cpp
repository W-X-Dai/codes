// Fig. 5.15: fig05_15.cpp
// This program puts values into an array, sorts the values into
// ascending order, and prints the resulting array.
#include <iostream>

using std::cout;
using std::endl;
      
#include <iomanip>
    
using std::setw;
    
void bubbleSort( int *, const int );    // prototype
void swap( int * const, int * const );  // prototype

int main()
{
   const int arraySize = 10;
   int a[ arraySize ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

   cout << "Data items in original order\n";
   
   for ( int i = 0; i < arraySize; i++ )
      cout << setw( 4 ) << a[ i ];
    
   bubbleSort( a, arraySize );  // sort the array
    
   cout << "\nData items in ascending order\n";
    
   for ( int j = 0; j < arraySize; j++ )
      cout << setw( 4 ) << a[ j ];
    
   cout << endl;
    
   return 0;  // indicates successful termination
    
} // end main

    
// sort an array of integers using bubble sort algorithm
void bubbleSort( int *array, const int size )
{
   // loop to control passes
   for (int i{0};i<size;++i)

      // loop to control comparisons during each pass
      for (int j{i};j<size;++j)
    
         // swap adjacent elements if they are out of order
         if (array[i]>array[j])
            swap(&array[i],&array[j]);
    
} // end function bubbleSort

// swap values at memory locations to which                  
// element1Ptr and element2Ptr point                         
void swap( int * const element1Ptr, int * const element2Ptr )
{                   
    int tmp=*element2Ptr;
    *element2Ptr=*element1Ptr;
    *element1Ptr=tmp;
} // end function swap                                    

