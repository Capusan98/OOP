#pragma once

template <typename T>
class DynamicVector {
	
public:
	DynamicVector()
	{
		//allocate 2 elements
		ReAlloc(2);
	}

	void PushBack(const T& value)
	{
		if (m_Size >= m_Capacity)
		{
			ReAlloc(m_Capacity + m_Capacity / 2);
		}

		m_Data[m_Size] = value;
		m_Size++;
	}

	void Delete(size_t index)
	{
		if (index >= 0 && index <= m_Size)
		{
			for (size_t i = index; i < m_Size - 1; i++)
				m_Data[i] = m_Data[i + 1];
			m_Size--;
		}
		else if (index == m_Size)
		{
			m_Size--;
		}
	}


	const T& operator[](size_t index) const {
		
		return m_Data[index];
	}

	T& operator[](size_t index){
		return m_Data[index];
	}

	size_t Size() const { return m_Size; }

private:
	void ReAlloc(size_t newCapacity)
	{
		//1. allocate a new block of memory
		//2. copy old list elements in new list
		//3. delete old list
		T* newBlock = new T[newCapacity];

		size_t size = m_Size;
		if (newCapacity < size)
			m_Size = newCapacity;

		for (size_t i = 0; i < m_Size; i++)
			newBlock[i] = m_Data[i];

		delete[] m_Data;
		m_Data = newBlock;
		m_Capacity = newCapacity;
	}
private:
	T* m_Data = nullptr;
	size_t m_Size = 0;
	size_t m_Capacity = 0;
};

