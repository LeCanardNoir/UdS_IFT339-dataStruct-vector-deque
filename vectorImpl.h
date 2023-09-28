//
//  Nom du fichier : vectorImpl.h
//
//  Auteur : Jean Goulet
//  Date :   2016-01-05
//
//  Modifié par : Vincent Ducharme, Septembre 2022
//
// =============================================
//
//  Nom de l'étudiant : 
//  Nom de l'étudiant :
//
// =============================================

#ifndef _vectorImpl_h
#define _vectorImpl_h


///////////////////////////////////////////////////
//clear (vide la memoire dynamique)

template <typename T>
void vector<T>::clear()
{
    delete m_debut;
    m_debut = nullptr;
    m_finDim = m_finCap = 0;
}

///////////////////////////////////////////////////
//resize (modifie la dimension)

template <typename T>
void vector<T>::resize(size_t nDIM)
{
    std::cout<<"resize A VENIR"<<std::endl;
}


///////////////////////////////////////////////////
//reserve (modifie la capacite)

template <typename T>
void vector<T>::reserve(size_t nCAP)
{
    std::cout<<"reserve A VENIR"<<std::endl;
}

///////////////////////////////////////////////////
//fonctions d'acces a un element sauf front et back
//push_back
//pop_back
//operator[]
//operator[]const
//at
//at const

template <typename T>
void vector<T>::push_back(const T& x)
{
    std::cout<<"push_back A VENIR"<<std::endl;
}

template <typename T>
void vector<T>::pop_back()
{
    std::cout<<"pop_back A VENIR"<<std::endl;
}

template <typename T>
T& vector<T>::operator[](size_t i)
{
    std::cout<<"operator[] En cours"<<std::endl;
    return m_debut[i];
}

template <typename T>
const T& vector<T>::operator[](size_t i)const
{
    std::cout<<"operator[]const En cours"<<std::endl;
    return m_debut[i];
}

template <typename T>
T& vector<T>::at(size_t i)
{
    std::cout<<"at A VENIR"<<std::endl;
}

template <typename T>
const T& vector<T>::at(size_t i)const
{
    std::cout<<"at const A VENIR"<<std::endl;
}


#endif // vectorImpl_h
