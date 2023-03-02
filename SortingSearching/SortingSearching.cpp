#include <iostream>

int main()
{
	int a = 42;
	int b = 13;

	int temp = a;

	a = b;
	b = temp;

	const int len = 7;

	int arr[len]{ 3, 5, 2, 11, 4, 13, 7 };

	// Bubble sort
	{
		// Print
		for (int i = 0; i < len; ++i)
		{
			std::cout << arr[i] << ' ';
		}

		std::cout << '\n';

		// Sort
		for (int i = 0; i < len - 1; ++i)
		{
			for (int j = 0; j < len - i - 1; ++j)
			{
				if (arr[j] > arr[j + 1])
				{
					int temp = arr[j];

					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}

		//	// Print
		//	for (int i = 0; i < len; ++i)
		//	{
		//		std::cout << arr[i] << ' ';
		//	}

		//	std::cout << '\n';
		//}

		// Insertion sort
		/*{
			for (int i = 1; i < len; i++)
			{
				int key = arr[i];
				int j = i - 1;

				while (j >= 0 && arr[j] > key)
				{
					arr[j + 1] = arr[j];
					j = j - 1;
				}
				arr[j + 1] = key;
			}
		}*/

		// Selection sort
		/*{
			for (int i = 0; i < len - 1; i++)
			{
				int min_idx = i;

				for (int j = i + 1; j < len; j++)
				{
					if (arr[j] < arr[min_idx])
					{
						min_idx = j;
					}

				}

				if (min_idx != i)
				{
					int temp = arr[min_idx];

					arr[min_idx] = arr[i];
					arr[i] = temp;
				}

			}
		}*/

		// Linear search
		/*{
			const int len = 6;
			int arr[len]{ 1, 20, 13, 42, 11, 20 };


			int target;
			int index = -1;

			std::cout << "Enter value to find -> ";
			std::cin >> target;

			for (int i = 0; i < len; ++i)
			{
				if (arr[i] == target)
				{
					index = i;

					break;
				}
			}

			if (index != -1)
			{
				std::cout << "Element found at " << index << " index" << '\n';
			}
			else
			{
				std::cout << "Element not found" << '\n';
			}
		}*/

		// Double ended search
		//{
		//	const int len = 6;
		//	int arr[len]{ 1, 20, 13, 42, 11, 20 };

		//	int target;
		//	int index = -1;

		//	std::cout << "Enter value to find -> ";
		//	std::cin >> target;

		//	for (int i = 0, j = len - 1; i < j; ++i, --j)
		//	{
		//		// left arrow
		//		if (arr[i] == target)
		//		{
		//			index = i;

		//			break;
		//		}

		//		// right arrow

		//		if (arr[j] == target)
		//		{
		//			index = j;

		//			break;
		//		}
		//	}

		//	if (index != -1)
		//	{
		//		std::cout << "Element found at " << index << " index" << '\n';
		//	}
		//	else
		//	{
		//		std::cout << "Element not found" << '\n';
		//	}
		//}
		{

			srand(time(nullptr));

			const size_t len = 10000;
			int arr[len];

			// Generate random numbers
			for (size_t i = 0; i < len; ++i)
			{
				arr[i] = rand() % 10000;
			}


			// Sort them

			for (size_t i = 0; i < len - 1; i++)
			{
				for (int j = 0; j < len - i - 1; ++j)
				{
					if (arr[j] > arr[j + 1])
					{
						int temp = arr[j];

						arr[j] = arr[j + 1];
						arr[j + 1] = temp;
					}
				}
			}

			for (size_t i = 0; i < len; ++i)
			{
				std::cout << arr[i] << '\n';
			}

			int target;

			std::cout << "Enter value to find -> ";
			std::cin >> target;

			int iterations = 0;
			int low = 0, high = len - 1;
			int index = -1;

			while (low <= high)
			{
				iterations++;

				int mid = (low + high) / 2;

				if (arr[mid] == target)
				{
					index = mid;

					break;
				}
				else if (target < arr[mid])
				{
					high = mid - 1;
				}
				else
				{
					low = mid + 1;
				}
			}

			if (index != -1)
			{
				std::cout << "Element found at " << index << " index" << '\n';
			}
			else
			{
				std::cout << "Element not found" << '\n';
			}

			std::cout << "Iterations: " << iterations << '\n';
		}
	}
}