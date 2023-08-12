#include "Set.h"

template<typename T>
int Set<T>::size()
{
	return this->Tset.size();
}

//template<typename T>
//Set<T>::Set(const Set<T>& obj)
//{
//	this->Tset = obj.Tset;
//}

template<typename T>
void Set<T>::print()
{
	for (auto item : Tset)
	{
		cout << item << "  ";
	}
	cout << endl;
}

template<typename T>
void Set<T>::insert(T value)
{
	bool flag = true;
	for (auto item : Tset)
	{
		if (item == value)
			flag = false;
	}
	if (flag)
	{
		Tset.push_back(value);
		sort(Tset.begin(), Tset.end());
	}
	else
		cout << "Элемент не может быть добавлен" << endl;
}

template<typename T>
void Set<T>::erase(T value)
{
	typename vector<T>::iterator beg = Tset.begin();
	typename vector<T>::iterator end = Tset.end();
	for (typename vector<T>::iterator it = beg; it != end; it++)
	{
		if (*it == value)
		{
			Tset.erase(it);
			break;
		}
	}
}

template<typename T>
Set<T>& Set<T>::Union(Set<T> A, Set<T> B)
{
	for (int i = 0; i < A.size(); i++)
	{
		Tset.push_back(A.Tset[i]);
	}
	typename vector<T>::iterator beg = Tset.begin();
	typename vector<T>::iterator end = Tset.end();
	for (int i = 0; i < B.size(); i++)
	{
		if (find(beg, end, B.Tset[i]) == end)
		{
			Tset.push_back(B.Tset[i]);
		}	
	}
	sort(beg, end);
	return (*this);
}

template<typename T>
Set<T>& Set<T>::Intersection(Set<T> A, Set<T> B)
{
	typename vector<T>::iterator beg = B.Tset.begin();
	typename vector<T>::iterator end = B.Tset.end();
	for (int i = 0; i < A.size(); i++)
	{
		if (find(beg, end, A.Tset[i]) != end)
		{
			Tset.push_back(A.Tset[i]);
		}
		
	}
	sort(beg, end);
	return (*this);
}

template<typename T>
Set<T>& Set<T>::Differense(Set<T> A, Set<T> B)
{
	typename vector<T>::iterator beg = B.Tset.begin();
	typename vector<T>::iterator end = B.Tset.end();
	for (int i = 0; i < A.size(); i++)
	{
		if (find(beg, end, A.Tset[i]) == end)
		{
			Tset.push_back(A.Tset[i]);
		}

	}
	sort(beg, end);
	return (*this);
}

template<typename T>
bool Set<T>::isInSet(T value)
{
	bool flag = false;
	typename vector<T>::iterator beg = Tset.begin();
	typename vector<T>::iterator end = Tset.end();
	if (find(beg, end, value) != end)
		flag = true;
	return flag;
}

template<typename T>
bool Set<T>::isSubSet(Set<T> B)
{
	bool flag = true;
	typename vector<T>::iterator beg = B.Tset.begin();
	typename vector<T>::iterator end = B.Tset.end();
	
	for (int i = 0; i < Tset.size(); i++)
	{
		if (find(beg, end, Tset[i]) == end)
			flag = false;
	}

	return flag;
}


