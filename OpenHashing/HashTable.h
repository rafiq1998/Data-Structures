#pragma once
#include <iostream>
#include <stdio.h>
#include <vector>
#include "List.h"
using namespace std;
class HashTable
{

private:
	const static int count = 10;
	List* HashArray[count];

public:
	HashTable()
	{
		for (int i = 0; i < count;i++)
		{
			HashArray[i] = new List();
		}
	}
	void insert(int key)
	{
		int HI = hashFunction(key);
		HashArray[HI]->push(key);
	}
	int deleteElement(int key)
	{
		int HI = hashFunction(key);
		int index = HashArray[HI]->checkIfAvailable(key);
		int ans = HashArray[HI]->deleteAt(index);
		if (ans == -1)
		{
			return -1;
			cout << " Element is not present" << endl;
		}
		else
		{
			return ans;
		}
	}

private:
	int hashFunction(int key)
	{
		return key % count;
	}
};

