#include <iostream>
#include <stdio.h>
using namespace std;

class Hashing
{
private:
	int size = 5;
	int* HashTable = new int[size];
	int capacity = size;
	int capacityNext = size;
	int elements = 0;

public:
	Hashing()
	{
		for (int i = 0; i < size;i++)
		{
			HashTable[i] = 0;
		}
	}
	void display()
	{
		for (int i = 0; i < capacity;i++)
		{
			cout << HashTable[i] << " ";
		}
		cout << endl;
	}
	void insert(int key)
	{
		checkCapacity();
		/*int HI = hashFunction(key, capacityNext);
		while (HashTable[HI] != 0)
		{
			int tempkey = key + 1;
			HI = hashFunction(tempkey, capacityNext);
		}*/
		int HI = hashFunction(key, capacityNext);
		while (HashTable[HI] != 0)
			HI++;
		HashTable[HI] = key;
		elements++;
	}
	void search(int key)
	{
		int index = hashFunction(key, capacityNext);
		while (key != HashTable[index] && HashTable[index] != 0)
		{
			index++;
		}
		if (HashTable[index] != 0)
			cout << "The element is present:" << HashTable[index] << endl;
		else
			cout << " Element is not present" << endl;
	}

	int hashFunction(int key, int capacity)
	{
		return key % capacity;
	}

	void checkCapacity()
	{
		 if((capacity-elements) < elements)
		 {
			 display();
			 int HI = 0;
			 int HIO = 0;
			 capacityNext = capacity * 2;
			 int* temp = new int[capacityNext] {0};
			 for (int i = 0;i < capacity;i++)
			 {
				 if (HashTable[i] != 0)
				 {
					 HI = hashFunction(HashTable[i], capacityNext);
					 while (temp[HI] != 0)
						 HI++;
					 temp[HI] = HashTable[i];
				 }
			 }
			 for (int i = 0; i < capacityNext;i++)
			 {
				 cout << temp[i] << " ";
			 }
			 cout << endl;
			 HashTable = temp;
		 }		 
		 capacity = capacityNext;
	}
	void copy()
	{
	}
};

