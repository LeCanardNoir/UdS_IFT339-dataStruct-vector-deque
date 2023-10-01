//
//  Nom du fichier dequeImpl.h
//  Description : deque-circulaire
//
//  Auteur : Jean Goulet 
//  Date :   2016-12-27
//  Copyleft 2016 UdeS
//
//  Modifié par : Vincent Ducharme, Septembre 2022
//
// =============================================
//
//  Nom de l'étudiant : Bruno Pouliot		poub2702
//  Nom de l'étudiant : Gabriel Dumont-Hétu	dumg
//
// =============================================

#ifndef _dequeImpl_h
#define _dequeImpl_h

/////////////////////////////////////////////////////////////////
//code a completer pour le devoir

template <typename T>
deque<T>::deque(const deque& source)
{
}

template <typename T>
void deque<T>::resize(size_t nSize)
{
	if (nSize < m_size) throw std::invalid_argument("Entrez une valeur plus grande que la dimension actuelle." );
	//m_size = nSize;
	if (nSize > m_cap) {
		reserve(nSize * 2);
	}

	for (size_t i = 0; i < (nSize - m_size); i++)
	{
		m_debut[i] = new T();
	}
	m_size = nSize;


}

template <typename T>
void deque<T>::reserve(size_t nCap)
{
	T** tmp = m_debut;
	m_debut = nullptr;
	m_cap = nCap;
	m_zero += m_cap - m_size;

	m_debut = new T*[m_cap];
	for (size_t i = 0; i < m_size; i++)
	{
		m_debut[m_zero + i] = tmp[i];
	}

}

template <typename T>
T& deque<T>::operator[](size_t i)
{
	//std::cout << std::endl << "operator[] IN PROGRESS" << std::endl;	
	size_t index = m_zero + i;
	if (index >= m_cap)
		index -= m_cap;

	return *m_debut[index];
}

template <typename T>
T& deque<T>::at(size_t i)
{
	if (i >= size()) throw std::out_of_range("Dépassement de capacité!");
	return *m_debut[i];
}

template <typename T>
const T& deque<T>::operator[](size_t i)const
{
	std::cout << std::endl << "operator[] IN PROGRESS" << std::endl;
	size_t index = m_zero + i;
	if (index >= m_cap)
		index -= m_cap;

	return *m_debut[index];
}

template <typename T>
const T& deque<T>::at(size_t i)const
{
	if (i >= size()) throw std::out_of_range("Dépassement de capacité!");
	return *m_debut[i];
}

template <typename T>
void deque<T>::push_back(const T& val)
{
}

template <typename T>
void deque<T>::pop_back()
{
}

template <typename T>
void deque<T>::push_front(const T& val)
{
}

template <typename T>
void deque<T>::pop_front()
{
}


#endif // dequeImpl_h
