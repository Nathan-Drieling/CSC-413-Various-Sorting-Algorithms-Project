// CSC 413 Project 1
// Nathan Drieling
// here I will implement the folling sorting algorithms via a 
// switch structure:
//	 1.) Insertion sort
//	 2.) Selection sort
//   3.) Bubble sort
//	 4.) Merge sort
//	 5.) Heap sort
//	 6.) Quick sort
#include <iostream>
using namespace std;

// void InsertionSort function
// Note: for easier reading for my eyes, I decided to have both the function
// here and the rest below to be structured like below. It still works
// as intended but it shows each argument clearer instead of having 
// to read one huge line of code
void InsertionSort(int NullArray[],
				 int NullArraySize,
		  int SingleElementArray[],
		int SingleElementArraySize,
		     int TwoElementArray[],
		   int TwoElementArraySize,
		   int EightElementArray[],
	     int EightElementArraySize);

// void SelectionSort function definition 
void SelectionSort(int NullArray[],
				 int NullArraySize,
		  int SingleElementArray[],
		int SingleElementArraySize,
		     int TwoElementArray[],
		   int TwoElementArraySize,
		   int EightElementArray[],
		 int EightElementArraySize);

// void BubbleSort function 
void BubbleSort(int NullArray[],
			  int NullArraySize,
	   int SingleElementArray[],
	 int SingleElementArraySize,
	      int TwoElementArray[],
	    int TwoElementArraySize,
	    int EightElementArray[],
	  int EightElementArraySize);

// void MergeSort function for all array test cases
void MergeSortNullArray(int NullArray[], 
						int NullArraySize,
						int Left, 
						int Right);

void MergeSortSingleElementArray(int SingleElementArray[],
								 int SingleElementArraySize,
								 int Left, 
							     int Right);

void MergeSortTwoElementArray(int TwoElementArray[],
							  int TwoElementArraySize,
							  int Left, 
							  int Right);

void MergeSortEightElementArray(int EightElementArray[],
								int EightElementArraySize,
								int Left, 
								int Right);

// all the merge funciton for each test case
void MergeNullArray(int NullArray[], int NullArraySize, 
					int Left, int Middle, int Right);

void MergeSingleElementArray(int SingleElementArray[], int SingleElementArraySize, 
							 int Left, int Middle, int Right);

void MergeTwoElementArray(int TwoElementArray[], int TwoElementArraySize,
						  int Left, int Middle, int Right);

void MergeEightElementArray(int EightElementArray[], int EightElementArraySize,
						    int Left, int Middle, int Right);

// heap sorting algorithms
void HeapSort(int NullArray[],
	int NullArraySize,
	int SingleElementArray[],
	int SingleElementArraySize,
	int TwoElementArray[],
	int TwoElementArraySize,
	int EightElementArray[],
	int EightElementArraySize);

// void a heaping function for each test case
void HeapFunctionNullArray(int NullArray[], int NullArraySize, int LargestRoot);
void HeapFunctionSingleElementArray(int SingleElementArray[], int SingleElementArraySize, int LargestRoot);
void HeapFunctionTwoElementArray(int TwoElementArray[], int TwoElementArraySize, int LargestRoot);
void HeapFunctionEightElementArray(int EightElementArray[], int EightElementArraySize, int LargestRoot);

// void QuickSort functions
void QuickSortNullArray(int NullArray[],
	int NullArraySize, int Low, int High);

void QuickSortSingleElementArray(int SingleElementArray[],
	int SingleElementArraySize, int Low, int High);

void QuickSortTwoElementArray(int TwoElementArray[],
	int TwoElementArraySize, int Low, int High);

void QuickSortEightElementArray(int EightElementArray[],
	int EightElementArraySize, int Low, int High);

// void Partition function for each test case
int PartitionNullArray(int NullArray[],int Low, int High);
int PartitionSingleElementArray(int SingleElementArray[],int Low, int High);
int PartitionTwoElementArray(int TwoElementArray[],int Low, int High);
int PartitionEightElementArray(int EightElementArray[], int Low, int High);

int main()
{
	// choice variable
	int choice = 0;

	do
	{
		// Here are the required test cases for our algorithms
		int NullArray[] = { NULL };
		int SingleElementArray[] = { 20 };
		int TwoElementArray[] = { 20, 30 };
		int EightElementArray[] = { 20, 30, 10, 80, 60, 50, 40, 70 };

		// Here I will make variables which will hold the number of elements in each array
		int NullArraySize = sizeof(NullArray) / sizeof(NullArray[0]);
		int SingleElementArraySize = sizeof(SingleElementArray) / sizeof(SingleElementArray[0]);
		int TwoElementArraySize = sizeof(TwoElementArray) / sizeof(TwoElementArray[0]);
		int EightElementArraySize = sizeof(EightElementArray) / sizeof(EightElementArray[0]);

		// variables for the quicksort algorithm
		int Low, High = 0;

		// Here is our menu
		cout << "---Test Cases for each sorting algorithms-------" << endl;
		cout << "   [NULL]							" << endl;
		cout << "   [20]							" << endl;
		cout << "   [20, 30]						" << endl;
		cout << "   [20, 30, 10, 80, 60, 50, 40, 70]" << endl;
		cout << "------------Algorithms Project 1----------------" << endl;
		cout << "   1) Insertion Sort" << endl;
		cout << "   2) Selection Sort" << endl;
		cout << "   3) Bubble Sort	 " << endl;
		cout << "   4) Merge Sort	 " << endl;
		cout << "   5) Heap Sort	 " << endl;
		cout << "   6) Quick Sort	 " << endl;
		cout << "	-999 will exit the program" << endl;
		cout << "------------------------------------------------" << endl;

		cin >> choice;
		system("CLS");
		switch (choice)
		{
		case 1: // Insertion Sort
			// I will create a variable to store the size of each test case array
			
			// tell the user they chose Insertion Sort
			cout << "INSERTION SORT:" << endl;

			InsertionSort(NullArray, 
					  NullArraySize, 
				 SingleElementArray, 
			 SingleElementArraySize,
				    TwoElementArray, 
				TwoElementArraySize,
				  EightElementArray,
			  EightElementArraySize);
			break;
		case 2: // Selection Sort

			// tell the user they chose Insertion Sort
			cout << "SELECTION SORT:" << endl;

			SelectionSort(NullArray,
					  NullArraySize,
				 SingleElementArray,
			 SingleElementArraySize,
					TwoElementArray,
				TwoElementArraySize,
				  EightElementArray,
			  EightElementArraySize);
			break;
		case 3: // Bubble Sort

			// tell the user they chose Bubble Sort
			cout << "BUBBLE SORT:" << endl;

			BubbleSort(   NullArray,
				      NullArraySize,
			     SingleElementArray,
		     SingleElementArraySize,
				    TwoElementArray,
				TwoElementArraySize,
				  EightElementArray,
			  EightElementArraySize);
			break;
		case 4: // Merge Sort

			int Left, Right;
			// tell the user they chose Bubble Sort
			cout << "MERGE SORT:" << endl;
			
			Left = 0;
			Right = NullArraySize - 1;
			MergeSortNullArray(NullArray, NullArraySize, 
							   Left, Right);
			// print the values in the array
			cout << "[";
			for (int i = 0; i < NullArraySize; i++)
			{
				cout << " " << NullArray[i];
			}
			cout << " ]" << endl;
			// done printing Null array. Reseting values
			
			// reseting values to be safe
			Left = 0;
			Right = SingleElementArraySize - 1;
			MergeSortSingleElementArray(SingleElementArray, SingleElementArraySize, 
										Left, Right);
			// print the values in the array
			cout << "[";
			for (int i = 0; i < SingleElementArraySize; i++)
			{
				cout << " " << SingleElementArray[i];
			}
			cout << " ]" << endl;
			// done printing One Element array. Reseting Values

			Left = 0;
			Right = TwoElementArraySize - 1;
			MergeSortTwoElementArray(TwoElementArray, TwoElementArraySize,
				Left, Right);
			// print the values in the array
			cout << "[";
			for (int i = 0; i < TwoElementArraySize; i++)
			{
				cout << " " << TwoElementArray[i];
			}
			cout << " ]" << endl;
			// done printing Two Element array. Reseting values

			Left = 0;
			Right = EightElementArraySize - 1;
			MergeSortEightElementArray(EightElementArray, EightElementArraySize,
				Left, Right);
			// print the values in the array
			cout << "[";
			for (int i = 0; i < EightElementArraySize; i++)
			{
				cout << " " << EightElementArray[i];
			}
			cout << " ]" << endl;
			// done printing Eight Element array. 
			break;
		case 5: // Heap Sort
			// tell the user they chose Heap Sort
			cout << "HEAP SORT:" << endl;

			HeapSort(NullArray,
				 NullArraySize,
				 SingleElementArray,
				 SingleElementArraySize,
				 TwoElementArray,
				 TwoElementArraySize,
				 EightElementArray,
				 EightElementArraySize);
			break;
		case 6: // Quick Sort

			// tell the user they chose Quick Sort
			cout << "QUICK SORT:" << endl;

			// set our high and our low values for the null array
			Low = 0;
			High = NullArraySize - 1;

			QuickSortNullArray(NullArray,
				  NullArraySize, Low, High);

			// print the values in the array
			cout << "[";
			for (int i = 0; i < NullArraySize; i++)
			{
				cout << " " << NullArray[i];
			}
			cout << " ]" << endl;
			// done printing array. Reseting values

			Low = 0;
			High = SingleElementArraySize - 1;

			QuickSortSingleElementArray(SingleElementArray,
				SingleElementArraySize, Low, High);

			// print the values in the array
			cout << "[";
			for (int i = 0; i < SingleElementArraySize; i++)
			{
				cout << " " << SingleElementArray[i];
			}
			cout << " ]" << endl;
			// done printing array. Reseting values

			Low = 0;
			High = TwoElementArraySize - 1;

			QuickSortTwoElementArray(TwoElementArray,
				TwoElementArraySize, Low, High);

			// print the values in the array
			cout << "[";
			for (int i = 0; i < TwoElementArraySize; i++)
			{
				cout << " " << TwoElementArray[i];
			}
			cout << " ]" << endl;
			// done printing array. Reseting values

			Low = 0;
			High = EightElementArraySize - 1;

			QuickSortEightElementArray(EightElementArray,
				EightElementArraySize, Low, High);

			// print the values in the array
			cout << "[";
			for (int i = 0; i < EightElementArraySize; i++)
			{
				cout << " " << EightElementArray[i];
			}
			cout << " ]" << endl;

			break;
		}
	} while (choice != -999);
	cin.get();
	return 0;
}

// void InsertionSort function definition
void InsertionSort(int NullArray[],
	int NullArraySize,
	int SingleElementArray[],
	int SingleElementArraySize,
	int TwoElementArray[],
	int TwoElementArraySize,
	int EightElementArray[],
	int EightElementArraySize)
{
	// the following insertion sorting algoritm
	// for each test case follow the pseudocode 
	// in the algorithms textbook on page 26:
	// -------------------------------------------
	// for j = 2 to A.length
	//		key = A[j]
	//		i = j - 1
	//		while i > 0 and A[i] > key
	//			  A[i + 1] = A[i]
	//			  i = i - 1
	//		A[i + 1] = key
	//--------------------------------------------

	// then I will make my for loop variables here
	int i, ArrayKey, j;

	// INSERTION SORT ALGORITHM and print for the NULL ARRAY
	// -------------------------------------------
	for (int j = 2; j < NullArraySize; j++)
	{
		ArrayKey = NullArray[j];
		i = j - 1;

		while (i >= 0 && NullArray[i] > ArrayKey)
		{
			NullArray[i + 1] = NullArray[i];
			i = i - 1;
		}
		NullArray[i + 1] = ArrayKey;
	}

	// print the values in the array
	cout << "[";
	for (i = 0; i < NullArraySize; i++)
	{
		cout << " " << NullArray[i];
	}
	cout << " ]" << endl;
	// done printing array. Reseting values
	i, ArrayKey, j = 0;
	// -------------------------------------------

	// INSERTION SORT ALGORITHM for the SINGLE ELEMENT ARRAY
	// -------------------------------------------
	for (int j = 2; j < SingleElementArraySize; j++)
	{
		ArrayKey = SingleElementArray[j];
		i = j - 1;

		while (i >= 0 && SingleElementArray[i] > ArrayKey)
		{
			SingleElementArray[i + 1] = SingleElementArray[i];
			i = i - 1;
		}
		SingleElementArray[i + 1] = ArrayKey;
	}

	// print the values in the array
	cout << "[";
	for (i = 0; i < SingleElementArraySize; i++)
	{
		cout << " " << SingleElementArray[i];
	}
	cout << " ]" << endl;
	// done printing array. Reseting values
	i, ArrayKey, j = 0;
	// -------------------------------------------

	// INSERTION SORT ALGORITHM for the TWO ELEMENT ARRAY
	// -------------------------------------------
	for (int j = 2; j < TwoElementArraySize; j++)
	{
		ArrayKey = TwoElementArray[j];
		i = j - 1;

		while (i >= 0 && TwoElementArray[i] > ArrayKey)
		{
			TwoElementArray[i + 1] = TwoElementArray[i];
			i = i - 1;
		}
		TwoElementArray[i + 1] = ArrayKey;
	}

	// print the values in the array
	cout << "[";
	for (i = 0; i < TwoElementArraySize; i++)
	{
		cout << " " << TwoElementArray[i];
	}
	cout << " ]" << endl;
	// done printing array. Reseting values
	i, ArrayKey, j = 0;
	// -------------------------------------------

	// INSERTION SORT ALGORITHM for the EIGHT ELEMENT ARRAY
	// -------------------------------------------
	for (int j = 2; j < EightElementArraySize; j++)
	{
		ArrayKey = EightElementArray[j];
		i = j - 1;

		while (i >= 0 && EightElementArray[i] > ArrayKey)
		{
			EightElementArray[i + 1] = EightElementArray[i];
			i = i - 1;
		}
		EightElementArray[i + 1] = ArrayKey;
	}

	// print the values in the array
	cout << "[";
	for (i = 0; i < EightElementArraySize; i++)
	{
		cout << " " << EightElementArray[i];
	}
	cout << " ]" << endl;
	// done printing array. Reseting values
	i, ArrayKey, j = 0;
	// -------------------------------------------
	cout << endl;
}

// void SelectionSort function definition
void SelectionSort(int NullArray[],
	int NullArraySize,
	int SingleElementArray[],
	int SingleElementArraySize,
	int TwoElementArray[],
	int TwoElementArraySize,
	int EightElementArray[],
	int EightElementArraySize)
{
	// the following selection sorting algoritm
	// for each test case follow the pseudocode 
	// below from the slides in class:
	// -------------------------------------------
	// for i = 1 to A.n - 1
	//		min = i
	//		for j = i + 1 to A.n
	//			if A[j] < A[min]
	//				A[i + 1] = A[i]
	//					min = j
	//		if (min != i)
	//			then swap A[i] and A[min]
	//--------------------------------------------

	// then I will make my for-loop variables here
	int i, MinimumIndex, j, temp;

	// SELECTION SORT ALGORITHM and print for the NULL ARRAY
	// -------------------------------------------
	for (i = 0; i < NullArraySize - 1; i++)
	{
		MinimumIndex = i;
		for (j = i + 1; j < NullArraySize; j++)
		{
			if (NullArray[j] < NullArray[MinimumIndex])
			{
				MinimumIndex = j;
			}
		}
		if (MinimumIndex != i)
		{
			// swap A[i] and A[min]
			temp = NullArray[i];
			NullArray[i] = NullArray[MinimumIndex];
			NullArray[MinimumIndex] = temp;
		}
	}

	// print the values in the array
	cout << "[";
	for (i = 0; i < NullArraySize; i++)
	{
		cout << " " << NullArray[i];
	}
	cout << " ]" << endl;
	// done printing array. Reseting values
	i, MinimumIndex, j, temp = 0;
	// -------------------------------------------

	// SELECTION SORT ALGORITHM and print for the SINGLE ELEMENT ARRAY
	// -------------------------------------------
	for (i = 0; i < SingleElementArraySize - 1; i++)
	{
		MinimumIndex = i;
		for (j = i + 1; j < SingleElementArraySize; j++)
		{
			if (SingleElementArray[j] < SingleElementArray[MinimumIndex])
			{
				MinimumIndex = j;
			}
		}
		if (MinimumIndex != i)
		{
			// swap A[i] and A[min]
			temp = SingleElementArray[i];
			SingleElementArray[i] = SingleElementArray[MinimumIndex];
			SingleElementArray[MinimumIndex] = temp;
		}
	}

	// print the values in the array
	cout << "[";
	for (i = 0; i < SingleElementArraySize; i++)
	{
		cout << " " << SingleElementArray[i];
	}
	cout << " ]" << endl;
	// done printing array. Reseting values
	i, MinimumIndex, j, temp = 0;
	// -------------------------------------------

	// SELECTION SORT ALGORITHM and print for the TWO ELEMENT ARRAY
	// -------------------------------------------
	for (i = 0; i < TwoElementArraySize - 1; i++)
	{
		MinimumIndex = i;
		for (j = i + 1; j < TwoElementArraySize; j++)
		{
			if (TwoElementArray[j] < TwoElementArray[MinimumIndex])
			{
				MinimumIndex = j;
			}
		}
		if (MinimumIndex != i)
		{
			// swap A[i] and A[min]
			temp = TwoElementArray[i];
			TwoElementArray[i] = TwoElementArray[MinimumIndex];
			TwoElementArray[MinimumIndex] = temp;
		}
	}

	// print the values in the array
	cout << "[";
	for (i = 0; i < TwoElementArraySize; i++)
	{
		cout << " " << TwoElementArray[i];
	}
	cout << " ]" << endl;
	// done printing array. Reseting values
	i, MinimumIndex, j, temp = 0;
	// -------------------------------------------

	// SELECTION SORT ALGORITHM and print for the EIGHT ELEMENT ARRAY
	// -------------------------------------------
	for (i = 0; i < EightElementArraySize - 1; i++)
	{
		MinimumIndex = i;
		for (j = i + 1; j < EightElementArraySize; j++)
		{
			if (EightElementArray[j] < EightElementArray[MinimumIndex])
			{
				MinimumIndex = j;
			}
		}
		if (MinimumIndex != i)
		{
			// swap A[i] and A[min]
			temp = EightElementArray[i];
			EightElementArray[i] = EightElementArray[MinimumIndex];
			EightElementArray[MinimumIndex] = temp;
		}
	}

	// print the values in the array
	cout << "[";
	for (i = 0; i < EightElementArraySize; i++)
	{
		cout << " " << EightElementArray[i];
	}
	cout << " ]" << endl;
	// done printing array. Reseting values
	i, MinimumIndex, j, temp = 0;
	// -------------------------------------------
	cout << endl;
}

// void BubbleSort function definition
void BubbleSort(int NullArray[],
	int NullArraySize,
	int SingleElementArray[],
	int SingleElementArraySize,
	int TwoElementArray[],
	int TwoElementArraySize,
	int EightElementArray[],
	int EightElementArraySize)
{
	// the following bubble sorting algoritm
	// for each test case follows the pseudocode 
	// below from page page 40 in the textbook:
	// -------------------------------------------
	// for i = 1 to A.length - 1
	//		for j = A.length downto i + 1
	//			if A[j] < A[j - 1]
	//				exchange A[j] with A[j - 1]
	//--------------------------------------------

	// then I will make my for-loop variables here
	int i, j, temp;

	// Bubble SORT ALGORITHM and print for the NULL ARRAY
	// -------------------------------------------
	for (i = 0; i < NullArraySize; i++)
	{
		for (j = 0; j < NullArraySize - 1; j++)
		{
			if (NullArray[j] > NullArray[j + 1])
			{
				// swap elements
				temp = NullArray[j];
				NullArray[j] = NullArray[j + 1];
				NullArray[j + 1] = temp;
			}
		}
	}

	// print the values in the array
	cout << "[";
	for (i = 0; i < NullArraySize; i++)
	{
		cout << " " << NullArray[i];
	}
	cout << " ]" << endl;
	// done printing array. Reseting values
	i, j, temp = 0;
	// -------------------------------------------

	// Bubble SORT ALGORITHM and print for the SINGLE ELEMENT ARRAY
	// -------------------------------------------
	for (i = 0; i < SingleElementArraySize; i++)
	{
		for (j = 0; j < SingleElementArraySize - 1; j++)
		{
			if (SingleElementArray[j] > SingleElementArray[j + 1])
			{
				// swap elements
				temp = SingleElementArray[j];
				SingleElementArray[j] = SingleElementArray[j + 1];
				SingleElementArray[j + 1] = temp;
			}
		}
	}

	// print the values in the array
	cout << "[";
	for (i = 0; i < SingleElementArraySize; i++)
	{
		cout << " " << SingleElementArray[i];
	}
	cout << " ]" << endl;
	// done printing array. Reseting values
	i, j, temp = 0;
	// -------------------------------------------

	// Bubble SORT ALGORITHM and print for the TWO ELEMENT ARRAY
	// -------------------------------------------
	for (i = 0; i < TwoElementArraySize; i++)
	{
		for (j = 0; j < TwoElementArraySize - 1; j++)
		{
			if (TwoElementArray[j] > TwoElementArray[j + 1])
			{
				// swap elements
				temp = TwoElementArray[j];
				TwoElementArray[j] = TwoElementArray[j + 1];
				TwoElementArray[j + 1] = temp;
			}
		}
	}

	// print the values in the array
	cout << "[";
	for (i = 0; i < TwoElementArraySize; i++)
	{
		cout << " " << TwoElementArray[i];
	}
	cout << " ]" << endl;
	// done printing array. Reseting values
	i, j, temp = 0;
	// -------------------------------------------

	// Bubble SORT ALGORITHM and print for the EIGHT ELEMENT ARRAY
	// -------------------------------------------
	for (i = 0; i < EightElementArraySize; i++)
	{
		for (j = 0; j < EightElementArraySize - 1; j++)
		{
			if (EightElementArray[j] > EightElementArray[j + 1])
			{
				// swap elements
				temp = EightElementArray[j];
				EightElementArray[j] = EightElementArray[j + 1];
				EightElementArray[j + 1] = temp;
			}
		}
	}

	// print the values in the array
	cout << "[";
	for (i = 0; i < EightElementArraySize; i++)
	{
		cout << " " << EightElementArray[i];
	}
	cout << " ]" << endl;
	// done printing array. Reseting values
	i, j, temp = 0;
	// -------------------------------------------
	cout << endl;
}

//void MergeSortNullArray function and MergeNullArray definition (for the null array)
void MergeSortNullArray(int NullArray[], int NullArraySize, int Left, int Right)
{
	// the following merge sorting algoritms
	// for each test case follows the pseudocode 
	// below from page page 40 in the textbook:
	// -------------------------------------------
	// n1 = q - p + 1
	// n2 = r - q
	// let L[1..n1 + 1] and R[1..n2 + 1] be new arrays
	// for i = 1 to n1
	//		L[i] = A[p + i - 1]
	// for j = 1 to n2
	//		R[j] = A[q + j]
	// L[n1 + 1] = infinity
	// R[n2 + 1] = infinity
	// i = 1
	// j = 1
	// for k = p to r
	//		if L[i] <= R[j]
	//			A[k] = L[i]
	//			i = i + 1
	//		else A[k] = R[j] 
	//			j = j + 1
	//--------------------------------------------
	
	// Merge SORT ALGORITHM and print for the NULL ARRAY
	// ------------------------------------------- 
	if (Left < Right)
	{
		// declare a middle variable to help us split the array (if possible)
		int Middle = (Left + Right) / 2;
		// call the merge sort null array function again recursively
		MergeSortNullArray(NullArray, NullArraySize, Left, Middle);
		// call the merge sort null array function again recursively 
		// (but with the middle + 1)
		MergeSortNullArray(NullArray, NullArraySize, Middle + 1, Right);
		// call the actual merge function
		MergeNullArray(NullArray, NullArraySize, Left, Middle, Right);
	}
}

void MergeNullArray(int NullArray[], int NullArraySize, int Left, int Middle, int Right)
{
	int LeftSide = Middle - 1 + 1;
	int RightSide = Right - Middle;
	int i, j, k;
	int* LeftArray = new int[LeftSide]; 
	int* RightArray = new int[RightSide];

	for (i = 0; i < LeftSide; i++)
	{
		LeftArray[i] = NullArray[Left + i]; 
	}
	for (j = 0; j < RightSide; j++)
	{
		RightArray[j] = NullArray[Middle + 1 + j];
	}

	i = 0;    // This is the initial index of  the first  sub array
	j = 0;	  // "							"  the second sub array
	k = Left; // "							"  the merged sub array

	while (i < LeftSide && j < RightSide)
	{
		if (LeftArray[i] <= RightArray[j])
		{
			NullArray[k] = LeftArray[i];
			i++;
		}
		else
		{
			NullArray[k] = RightArray[j];
			j++;
		}
		k++;
	}
	while (i < LeftSide)
	{
		NullArray[k] = RightArray[i];
		i++;
		k++;
	}
	while (j < RightSide)
	{
		NullArray[k] = RightArray[j];
		j++;
		k++;
	}

	delete[] LeftArray;
	delete[] RightArray;
}

// void MergeSortSingleElement function definition and MergeSingleElementArray (for the one element array)
void MergeSortSingleElementArray(int SingleElementArray[], int SingleElementArraySize, int Left, int Right)
{
	// Merge SORT ALGORITHM and print for the NULL ARRAY
	// -------------------------------------------
	if (Left < Right)
	{
		// declare a middle variable to help us split the array (if possible)
		int Middle = (Left + Right) / 2;
		// call the merge sort null array function again recursively
		MergeSortSingleElementArray(SingleElementArray, SingleElementArraySize, Left, Middle);
		// call the merge sort null array function again recursively 
		// (but with the middle + 1)
		MergeSortSingleElementArray(SingleElementArray, SingleElementArraySize, Middle + 1, Right);
		// call the actual merge function
		MergeSingleElementArray(SingleElementArray, SingleElementArraySize, Left, Middle, Right);
	}
}

void MergeSingleElementArray(int SingleElementArray[], int SingleElementArraySize, int Left, int Middle, int Right)
{
	int LeftSide = Middle - 1 + 1;
	int RightSide = Right - Middle;
	int i, j, k;
	int* LeftArray = new int[LeftSide];
	int* RightArray = new int[RightSide];

	for (i = 0; i < LeftSide; i++)
	{
		LeftArray[i] = SingleElementArray[Left + i];
	}
	for (j = 0; j < RightSide; j++)
	{
		RightArray[j] = SingleElementArray[Middle + 1 + j];
	}

	i = 0;    // This is the initial index of  the first  sub array
	j = 0;	  // "							"  the second sub array
	k = Left; // "							"  the merged sub array

	while (i < LeftSide && j < RightSide)
	{
		if (LeftArray[i] <= RightArray[j])
		{
			SingleElementArray[k] = LeftArray[i];
			i++;
		}
		else
		{
			SingleElementArray[k] = RightArray[j];
			j++;
		}
		k++;
	}
	while (i < LeftSide)
	{
		SingleElementArray[k] = RightArray[i];
		i++;
		k++;
	}
	while (j < RightSide)
	{
		SingleElementArray[k] = RightArray[j];
		j++;
		k++;
	}

	delete[] LeftArray;
	delete[] RightArray;
}

// void MergeSortTwoElement function defintion and MergeTwoElementArray (for the two element array)
void MergeSortTwoElementArray(int TwoElementArray[], int TwoElementArraySize, int Left, int Right)
{
	// Merge SORT ALGORITHM and print for the TWO ELEMENT ARRAY
	// -------------------------------------------
	if (Left < Right)
	{
		// declare a middle variable to help us split the array (if possible)
		int Middle = (Left + Right) / 2;
		// call the merge sort null array function again recursively
		MergeSortTwoElementArray(TwoElementArray, TwoElementArraySize, Left, Middle);
		// call the merge sort null array function again recursively 
		// (but with the middle + 1)
		MergeSortTwoElementArray(TwoElementArray, TwoElementArraySize, Middle + 1, Right);
		// call the actual merge function
		MergeTwoElementArray(TwoElementArray, TwoElementArraySize, Left, Middle, Right);
	}
}

void MergeTwoElementArray(int TwoElementArray[], int TwoElementArraySize, int Left, int Middle, int Right)
{
	int LeftSide = Middle - 1 + 1;
	int RightSide = Right - Middle;
	int i, j, k;
	int* LeftArray = new int[LeftSide];
	int* RightArray = new int[RightSide];

	for (i = 0; i < LeftSide; i++)
	{
		LeftArray[i] = TwoElementArray[Left + i];
	}
	for (j = 0; j < RightSide; j++)
	{
		RightArray[j] = TwoElementArray[Middle + 1 + j];
	}

	i = 0;    // This is the initial index of  the first  sub array
	j = 0;	  // "							"  the second sub array
	k = Left; // "							"  the merged sub array

	while (i < LeftSide && j < RightSide)
	{
		if (LeftArray[i] <= RightArray[j])
		{
			TwoElementArray[k] = LeftArray[i];
			i++;
		}
		else
		{
			TwoElementArray[k] = RightArray[j];
			j++;
		}
		k++;
	}
	while (i < LeftSide)
	{
		TwoElementArray[k] = RightArray[i];
		i++;
		k++;
	}
	while (j < RightSide)
	{
		TwoElementArray[k] = RightArray[j];
		j++;
		k++;
	}

	delete[] LeftArray;
	delete[] RightArray;
}

// void MergeSortTwoElement function defintion and MergeTwoElementArray (for the two element array)
void MergeSortEightElementArray(int EightElementArray[], int EightElementArraySize, int Left, int Right)
{
	// Merge SORT ALGORITHM and print for the TWO ELEMENT ARRAY
	// -------------------------------------------
	if (Left < Right)
	{
		// declare a middle variable to help us split the array (if possible)
		int Middle = (Left + Right) / 2;
		// call the merge sort null array function again recursively
		MergeSortEightElementArray(EightElementArray, EightElementArraySize, Left, Middle);
		// call the merge sort null array function again recursively 
		// (but with the middle + 1)
		MergeSortEightElementArray(EightElementArray, EightElementArraySize, Middle + 1, Right);
		// call the actual merge function
		MergeEightElementArray(EightElementArray, EightElementArraySize, Left, Middle, Right);
	}
}

void MergeEightElementArray(int EightElementArray[], int EightElementArraySize, int Left, int Middle, int Right)
{
	int LeftSide = Middle - 1 + 1;
	int RightSide = Right - Middle;
	int i, j, k;
	int* LeftArray = new int[LeftSide];
	int* RightArray = new int[RightSide];

	// data is copied to temp arrays
	for (i = 0; i < LeftSide; i++)
	{
		LeftArray[i] = EightElementArray[Left + i];
	}
	for (j = 0; j < RightSide; j++)
	{
		RightArray[j] = EightElementArray[Middle + 1 + j];
	}

	i = 0;    // This is the initial index of  the first  sub array
	j = 0;	  // "							"  the second sub array
	k = Left; // "							"  the merged sub array

	while (i < LeftSide && j < RightSide)
	{
		if (LeftArray[i] <= RightArray[j])
		{
			EightElementArray[k] = LeftArray[i];
			i++;
		}
		else
		{
			EightElementArray[k] = RightArray[j];
			j++;
		}
		k++;
	}
	while (i < LeftSide)
	{
		EightElementArray[k] = RightArray[i];
		i++;
		k++;
	}
	while (j < RightSide)
	{
		EightElementArray[k] = RightArray[j];
		j++;
		k++;
	}

	delete[] LeftArray;
	delete[] RightArray;


}

// void HeapSort function definiton
void HeapSort(int NullArray[],
	int NullArraySize,
	int SingleElementArray[],
	int SingleElementArraySize,
	int TwoElementArray[],
	int TwoElementArraySize,
	int EightElementArray[],
	int EightElementArraySize)
{
	// the following heap sorting algoritm
	// for each test case follows the online slides
	// from Heapsort and quicksort:
	// -------------------------------------------
	// Build-Max-Heap(A)
	// for i = A.length downto 2
	//		exchange A[1] with A[i] 
	//		A.heap-size = A.heapsize - 1
	//		Max-Heapify (A,1)
	// -------------------------------------------
	// Another function from the slides refers to 
	// building the max heap, shown below and also
	// coming from the slides:
	// -------------------------------------------
	// A.heap-size = A.length
	// for i = [A.length/2] downto 1
	//		Max-Heapify (A,i)
	// -------------------------------------------
	// Another function from the slides referes to
	// how to make the max heapify function, as 
	// shown below:
	// -------------------------------------------
	// l = LEFT(i)
	// r = RIGHT(i)
	// if l <= A.heap-size and A[l] > A[i]
	//		largest = l
	// else largest = i
	// if r <= A.heap-size and A[r] > A[largest]
	//		largest = r
	// if largest != i
	//		exchange A[i] with A[largest]
	//		Max-Heapify (A, largest)
	// -------------------------------------------

	// HEAP SORT ALGORITHM and print for the NULL ARRAY
	// -------------------------------------------
	int LargestRoot = 0;
	// calls a heap sort function for each test case
	for (int i = NullArraySize / 2 - 1; i >= 0; i++)
	{
		HeapFunctionNullArray(NullArray, NullArraySize, LargestRoot);
	}
	// Now each element will be extracted from the heap
	for (int i = NullArraySize - 1; i >= 0; i--)
	{
		// call a swap function of sorts here...
		swap(NullArray[0], NullArray[i]);

		// call the HeapFunctionNullArray again on the now reduced heap
		HeapFunctionNullArray(NullArray, i, 0);
	}
	// print the values in the Null array
	cout << "[";
	for (int i = 0; i < NullArraySize; i++)
	{
		cout << " " << NullArray[i];
	}
	cout << " ]" << endl;
	// done printing array. Resetting values.
	// -------------------------------------------



	// HEAP SORT ALGORITHM and print for the SINGLE ELEMENT ARRAY
	// -------------------------------------------
	LargestRoot = 0;
	// calls a heap function for each test case
	for (int i = SingleElementArraySize / 2 - 1; i >= 0; i++)
	{
		HeapFunctionSingleElementArray(SingleElementArray, SingleElementArraySize, LargestRoot);
	}
	// Now each element will be extracted from the heap
	for (int i = SingleElementArraySize - 1; i >= 0; i--)
	{
		// call a swap function of sorts here...
		swap(SingleElementArray[0], SingleElementArray[i]);

		// call the HeapFunctionSingleElementArray again 
		// on the now reduced heap
		HeapFunctionSingleElementArray(SingleElementArray, i, 0);
	}
	// print the values in the SingleElement array
	cout << "[";
	for (int i = 0; i < SingleElementArraySize; i++)
	{
		cout << " " << SingleElementArray[i];
	}
	cout << " ]" << endl;
	// done printing array. Resetting values.
	// -------------------------------------------

	// HEAP SORT ALGORITHM and print for the TWO ELEMENT ARRAY
	// -------------------------------------------
	LargestRoot = 0;
	// calls a heap function for each test case
	for (int i = TwoElementArraySize / 2 - 1; i >= 0; i++)
	{
		HeapFunctionTwoElementArray(TwoElementArray, TwoElementArraySize, LargestRoot);
	}
	// Now each element will be extracted from the heap
	for (int i = TwoElementArraySize - 1; i >= 0; i--)
	{
		// call a swap function of sorts here...
		swap(TwoElementArray[0], TwoElementArray[i]);

		// call the HeapFunctionSingleElementArray again 
		// on the now reduced heap
		HeapFunctionTwoElementArray(TwoElementArray, i, 0);
	}
	// print the values in the TwoElement array
	cout << "[";
	for (int i = 0; i < TwoElementArraySize; i++)
	{
		cout << " " << TwoElementArray[i];
	}
	cout << " ]" << endl;
	// done printing array. Resetting values.
	// -------------------------------------------


	// HEAP SORT ALGORITHM and print for the EIGHT ELEMENT ARRAY
	// -------------------------------------------
	LargestRoot = 0;
	// calls a heap function for each test case
	for (int i = EightElementArraySize / 2 - 1; i >= 0; i++)
	{
		HeapFunctionEightElementArray(EightElementArray, EightElementArraySize, LargestRoot);
	}
	// Now each element will be extracted from the heap
	for (int i = EightElementArraySize - 1; i >= 0; i--)
	{
		// call a swap function of sorts here...
		swap(EightElementArray[0], EightElementArray[i]);

		// call the HeapFunctionSingleElementArray again 
		// on the now reduced heap
		HeapFunctionEightElementArray(EightElementArray, i, 0);
	}
	// print the values in the TwoElement array
	cout << "[";
	for (int i = 0; i < EightElementArraySize; i++)
	{
		cout << " " << EightElementArray[i];
	}
	cout << " ]" << endl;
	// done printing array. Resetting values.
	// -------------------------------------------
}

// void HeapFunctionNullArray definition
void HeapFunctionNullArray(int NullArray[], int NullArraySize, int LargestRoot)
{
	// Building heap (rearranges the array) 
	for (int i = NullArraySize / 2 - 1; i >= 0; i--)
	{
		LargestRoot = i; // Initialize largest as root 
		int LeftChild = 2 * i + 1; // left = 2*i + 1 
		int RightChild = 2 * i + 2; // right = 2*i + 2 

		// If left child is larger than root 
		if (LargestRoot < NullArraySize && NullArray[LeftChild] > NullArray[LargestRoot])
		{
			LargestRoot = LeftChild;
		}

		// If right child is larger than largest so far 
		if (RightChild < NullArraySize && NullArray[RightChild] > NullArray[LargestRoot])
		{
			LargestRoot = RightChild;
		}

		// If the largest is not the root 
		if (LargestRoot != i)
		{
			// call a swap function within the c++ functions list
			swap(NullArray[i], NullArray[LargestRoot]);

			// Recursively heapify the affected sub-tree 
			HeapFunctionNullArray(NullArray, NullArraySize, LargestRoot);
		}
	}

}

// void HeapFunctionSingleElementArray definition
void HeapFunctionSingleElementArray(int SingleElementArray[], int SingleElementArraySize, int LargestRoot)
{
	// Building heap (rearranges the array) 
	for (int i = SingleElementArraySize / 2 - 1; i >= 0; i--)
	{
		LargestRoot = i; // Initialize largest as root 
		int LeftChild = 2 * i + 1; // left = 2*i + 1 
		int RightChild = 2 * i + 2; // right = 2*i + 2 

		// If left child is larger than root 
		if (LargestRoot < SingleElementArraySize && SingleElementArray[LeftChild] > SingleElementArray[LargestRoot])
		{
			LargestRoot = LeftChild;
		}

		// If right child is larger than largest so far 
		if (RightChild < SingleElementArraySize && SingleElementArray[RightChild] > SingleElementArray[LargestRoot])
		{
			LargestRoot = RightChild;
		}

		// If the largest is not the root 
		if (LargestRoot != i)
		{
			// call a swap function within the c++ functions list
			swap(SingleElementArray[i], SingleElementArray[LargestRoot]);

			// Recursively heapify the affected sub-tree 
			HeapFunctionSingleElementArray(SingleElementArray, SingleElementArraySize, LargestRoot);
		}
	}
}

// void HeapFunctionTwoElementArray definition
void HeapFunctionTwoElementArray(int TwoElementArray[], int TwoElementArraySize, int LargestRoot)
{
	// Building heap (rearranges the array) 
	for (int i = TwoElementArraySize / 2 - 1; i >= 0; i--)
	{
		LargestRoot = i; // Initialize largest as root 
		int LeftChild = 2 * i + 1; // left = 2*i + 1 
		int RightChild = 2 * i + 2; // right = 2*i + 2 

		// If left child is larger than root 
		if (LargestRoot < TwoElementArraySize && TwoElementArray[LeftChild] > TwoElementArray[LargestRoot])
		{
			LargestRoot = LeftChild;
		}

		// If right child is larger than largest so far 
		if (RightChild < TwoElementArraySize && TwoElementArray[RightChild] > TwoElementArray[LargestRoot])
		{
			LargestRoot = RightChild;
		}

		// If the largest is not the root 
		if (LargestRoot != i)
		{
			// call a swap function within the c++ functions list
			swap(TwoElementArray[i], TwoElementArray[LargestRoot]);

			// Recursively heapify the affected sub-tree 
			HeapFunctionTwoElementArray(TwoElementArray, TwoElementArraySize, LargestRoot);
		}
	}
}

// void HeapFunctionEightElementArray definition
void HeapFunctionEightElementArray(int EightElementArray[], int EightElementArraySize, int LargestRoot)
{
	// Building heap (rearranges the array) 
	for (int i = EightElementArraySize / 2 - 1; i >= 0; i--)
	{
		LargestRoot = i; // Initialize largest as root 
		int LeftChild = 2 * i + 1; // left = 2*i + 1 
		int RightChild = 2 * i + 2; // right = 2*i + 2 

		// If left child is larger than root 
		if (LargestRoot < EightElementArraySize && EightElementArray[LeftChild] > EightElementArray[LargestRoot])
		{
			LargestRoot = LeftChild;
		}

		// If right child is larger than largest so far 
		if (RightChild < EightElementArraySize && EightElementArray[RightChild] > EightElementArray[LargestRoot])
		{
			LargestRoot = RightChild;
		}

		// If the largest is not the root 
		if (LargestRoot != i)
		{
			// call a swap function within the c++ functions list
			swap(EightElementArray[i], EightElementArray[LargestRoot]);

			// Recursively heapify the affected sub-tree 
			HeapFunctionEightElementArray(EightElementArray, EightElementArraySize, LargestRoot);
		}
	}
}

// void QuickSort function definition (and partiton) for the NULL ARRAY
void QuickSortNullArray(int NullArray[], int NullArraySize, int Low, int High)
{
	// the following quick sorting algoritm
	// for each test case follows the online slides
	// from Heapsort and quicksort:
	// -------------------------------------------
	// if p < r
	//		q = Partition(A,p,r)
	//		QuickSort(A,p,q - 1)
	//		QuickSort(A,q + 1, r)
	// -------------------------------------------
	// Another function from the slides refers to 
	// doing the partition, shown below and also
	// coming from the slides:
	// -------------------------------------------
	// x = A[r]
	// i = p - 1
	// for j = p to r - 1
	// if A[j] <= x
	//		i = i + 1
	//		exchange A[i] with A[j] 
	// exchange A[i + 1] with A[r]
	// return i + 1
	// -------------------------------------------

	// QUICK SORT ALGORITHM and print for the NULL ARRAY
	// -------------------------------------------

	if (Low < High)
	{
		// Partiton Index variable
		int PartitionIndex = PartitionNullArray(NullArray, Low, High);

		// These functions below sort elements before the partition process and after partion
		// respectively
		QuickSortNullArray(NullArray, NullArraySize, Low, PartitionIndex - 1);
		QuickSortNullArray(NullArray, NullArraySize, PartitionIndex + 1, High);
	}
}

int PartitionNullArray(int NullArray[], int Low, int High)
{
	// This is our pivot element
	int Pivot = NullArray[High];

	// This is the index of the smaller element
	int i = (Low - 1);

	for (int j = Low; j <= High - 1; j++)
	{
		// if the current element is smaller than or equal to the pivot
		if (NullArray[j] <= Pivot)
		{
			// increment the index of the smaller element
			i++;
			// then swap the two values in the different arrays
			swap(NullArray[i], NullArray[j]);
		}
	}
	swap(NullArray[i + 1], NullArray[High]);
	return (i + 1);
}

// void QuickSort function definition (and partiton) for the SINGLE ELEMENT ARRAY
void QuickSortSingleElementArray(int SingleElementArray[], int SingleElementArraySize, int Low, int High)
{
	// QUICK SORT ALGORITHM and print for the SINGLE ELEMENT ARRAY
	// -------------------------------------------

	if (Low < High)
	{
		// Partiton Index variable
		int PartitionIndex = PartitionSingleElementArray(SingleElementArray, Low, High);

		// These functions below sort elements before the partition process and after partion
		// respectively
		QuickSortSingleElementArray(SingleElementArray, SingleElementArraySize, Low, PartitionIndex - 1);
		QuickSortSingleElementArray(SingleElementArray, SingleElementArraySize, PartitionIndex + 1, High);
	}
}

int PartitionSingleElementArray(int SingleElementArray[], int Low, int High)
{
	// This is our pivot element
	int Pivot = SingleElementArray[High];

	// This is the index of the smaller element
	int i = (Low - 1);

	for (int j = Low; j <= High - 1; j++)
	{
		// if the current element is smaller than or equal to the pivot
		if (SingleElementArray[j] <= Pivot)
		{
			// increment the index of the smaller element
			i++;
			// then swap the two values in the different arrays
			swap(SingleElementArray[i], SingleElementArray[j]);
		}
	}
	swap(SingleElementArray[i + 1], SingleElementArray[High]);
	return (i + 1);
}

// void QuickSort function definition (and partiton) for the TWO ELEMENT ARRAY
void QuickSortTwoElementArray(int TwoElementArray[], int TwoElementArraySize, int Low, int High)
{
	// QUICK SORT ALGORITHM and print for the TWO ELEMENT ARRAY
	// -------------------------------------------

	if (Low < High)
	{
		// Partiton Index variable
		int PartitionIndex = PartitionTwoElementArray(TwoElementArray, Low, High);

		// These functions below sort elements before the partition process and after partion
		// respectively
		QuickSortTwoElementArray(TwoElementArray, TwoElementArraySize, Low, PartitionIndex - 1);
		QuickSortTwoElementArray(TwoElementArray, TwoElementArraySize, PartitionIndex + 1, High);
	}
}

int PartitionTwoElementArray(int TwoElementArray[], int Low, int High)
{
	// This is our pivot element
	int Pivot = TwoElementArray[High];

	// This is the index of the smaller element
	int i = (Low - 1);

	for (int j = Low; j <= High - 1; j++)
	{
		// if the current element is smaller than or equal to the pivot
		if (TwoElementArray[j] <= Pivot)
		{
			// increment the index of the smaller element
			i++;
			// then swap the two values in the different arrays
			swap(TwoElementArray[i], TwoElementArray[j]);
		}
	}
	swap(TwoElementArray[i + 1], TwoElementArray[High]);
	return (i + 1);
}

// void QuickSort function definition (and partiton) for the EIGHT ELEMENT ARRAY
void QuickSortEightElementArray(int EightElementArray[], int EightElementArraySize, int Low, int High)
{
	// QUICK SORT ALGORITHM and print for the EIGHT ELEMENT ARRAY
	// -------------------------------------------

	if (Low < High)
	{
		// Partiton Index variable
		int PartitionIndex = PartitionEightElementArray(EightElementArray, Low, High);

		// These functions below sort elements before the partition process and after partion
		// respectively
		QuickSortEightElementArray(EightElementArray, EightElementArraySize, Low, PartitionIndex - 1);
		QuickSortEightElementArray(EightElementArray, EightElementArraySize, PartitionIndex + 1, High);
	}
}

int PartitionEightElementArray(int EightElementArray[], int Low, int High)
{
	// This is our pivot element
	int Pivot = EightElementArray[High];

	// This is the index of the smaller element
	int i = (Low - 1);

	for (int j = Low; j <= High - 1; j++)
	{
		// if the current element is smaller than or equal to the pivot
		if (EightElementArray[j] <= Pivot)
		{
			// increment the index of the smaller element
			i++;
			// then swap the two values in the different arrays
			swap(EightElementArray[i], EightElementArray[j]);
		}
	}
	swap(EightElementArray[i + 1], EightElementArray[High]);
	return (i + 1);
}