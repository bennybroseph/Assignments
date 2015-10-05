#ifndef _TEMPLATE_H_
#define _TEMPLATE_H_

#include <iostream>

template <typename T>
class Template
{
private:
	T *m_Array;
	int m_iCurrSize, m_iMaxSize;

public:
	void Add(const T ac_NewVal);

	void Expand();
	int Size();

	T &operator[](const int ac_iIndex);

	Template(const T ac_Size);
	~Template();
};

template <typename T>
void Template<T>::Add(const T ac_NewVal)
{
	m_Array[m_iCurrSize] = ac_NewVal;
	++m_iCurrSize;
}

template <typename T>
void Template<T>::Expand()
{
	T *Temp = new T[m_iMaxSize * 2];

	for (int i = 0; i < m_iCurrSize; ++i)
	{
		Temp[i] = m_Array[i];
	}

	delete[] m_Array;

	m_iMaxSize *= 2;
	for (int i = 0; i < m_iCurrSize; ++i)
	{
		m_Array[i] = Temp[i];
	}
}
template <typename T>
int Template<T>::Size()
{
	return m_iMaxSize;
}

template <typename T>
T &Template<T>::operator[](const int ac_iIndex)
{
	return m_Array[ac_iIndex];
}

template <typename T>
Template<T>::Template(const T ac_Size)
{
	m_Array = new T[ac_Size];

	m_iMaxSize = ac_Size;
	m_iCurrSize = 0;
}
template <typename T>
Template<T>::~Template()
{
	delete[] m_Array;
}
#endif // _TEMPLATE_H_
