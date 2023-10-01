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
		size_t index = (m_zero - (m_cap - m_size) + i) % m_cap;
		m_debut[index] = new T();
	}
	m_size = nSize;


}

template <typename T>
void deque<T>::reserve(size_t nCap)
{
	T** tmp = m_debut;
	m_debut = nullptr;
	size_t newCap = nCap;
	size_t newZero = newCap - (m_cap - m_zero);

	m_debut = new T*[newCap];
	for (size_t i = 0; i < m_size; i++)
	{
		size_t newIndex = (newZero + i) % newCap;
		size_t oldIndex = (m_zero + i) % m_cap;
		m_debut[newIndex] = tmp[oldIndex];
	}

	m_cap = newCap;
	m_zero = newZero;

}

template <typename T>
T& deque<T>::operator[](size_t i)
{
	//std::cout << std::endl << "operator[] IN PROGRESS" << std::endl;	
	size_t index = (m_zero + i)%m_cap;
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
	size_t index = (m_zero + i) % m_cap;
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
	//TODO réserver de la mémoire quand il n'y a plus de place (en arrière)
	size_t index = !m_debut > 0 ? m_zero : (m_zero + m_size) % m_cap;
	if (!m_debut) {
		m_debut = new T*[1];
		m_size++;
		m_cap++;
		m_debut[index] = new T(val);
	}
	else if( m_zero <= index){
		resize(m_size + 1);
		delete m_debut[index];
		m_debut[index] = nullptr;
		m_debut[index] = new T(val);
	}
	else {
		m_debut[index] = new T(val);
		m_size++;
	}
}

template <typename T>
void deque<T>::pop_back()
{
	if (!empty()) {
		m_debut[m_size - 1] = nullptr;
		m_size--;
	}
}

template <typename T>
void deque<T>::push_front(const T& val)
{
	//TODO réserver de la mémoire quand il n'y a plus de place (en avant)




	m_zero--;
	m_size++;
	at(0) = val;
}

template <typename T>
void deque<T>::pop_front()
{
	if (!empty()) {
		m_debut[m_zero] = nullptr;
		//m_debut++;
		m_zero++;
		m_size--;
	}
}


#endif // dequeImpl_h
