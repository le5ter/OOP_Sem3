#pragma once
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class Set
{
private:
	vector<T> Tset;
public:
	Set():Tset(0) {}
	Set(T value) 
	{
		Tset.push_back(value);
	}
	//Set(const Set<T>& obj);
	int size();
	void print();
	void insert(T value);
	void erase(T value);
	Set<T>& Union(Set<T> A, Set<T> B);
	Set<T>& Intersection(Set<T> A, Set<T> B);
	Set<T>& Differense(Set<T> A, Set<T> B);
	bool isInSet(T value);
	bool isSubSet(Set<T> B);
};