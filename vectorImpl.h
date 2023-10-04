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
//  Nom de l'étudiant : Bruno Pouliot           poub2702
//  Nom de l'étudiant : Gabriel Dumont-Hétu     dumg1203
//
// =============================================

#ifndef _vectorImpl_h
#define _vectorImpl_h


///////////////////////////////////////////////////
//clear (vide la memoire dynamique)

template <typename T>
void vector<T>::clear()
{  
    //m_finDim = m_finCap = m_debut;
    delete[] m_debut;
    /*delete[] m_finCap;
    delete[] m_finDim;*/
    m_finDim = m_finCap = m_debut = nullptr;
}

///////////////////////////////////////////////////
//resize (modifie la dimension)

template <typename T>
void vector<T>::resize(size_t nDIM)
{
    // std::cout<<"resize IN PROGRESS"<<std::endl;
    /*if ((m_debut + nDIM) > m_finCap) {
        reserve((nDIM + 1) * 2);
    }
    m_finDim = m_debut + nDIM;//*/

    const size_t CAP = m_finCap - m_debut;

    
    if(nDIM > CAP) {
        reserve(nDIM);
    }
    m_finDim = m_debut + nDIM;

}


///////////////////////////////////////////////////
//reserve (modifie la capacite)

template <typename T>
void vector<T>::reserve(size_t nCAP)
{
    //std::cout<<"reserve  IN PROGRESS"<<std::endl;

    size_t nbElements = size();

    if (nCAP == 0) {
        m_finDim = m_finCap = m_debut = nullptr;
    }
    else {
        T* temp = new T[nCAP];
        iterator it = begin();
        size_t index = 0;
        while (index < nbElements && index < nCAP) {
            temp[index] = *it;
            ++index;
            ++it;
        }
        m_debut = temp;
        m_finDim = m_debut + nbElements;
        m_finCap = m_debut + nCAP;
    }

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
    size_t sizeAvantResize = size();
    size_t cap = m_finCap - m_debut;


    if (sizeAvantResize >= cap) {
        size_t nouveauSize = (size() + 1) * 2;
        reserve(nouveauSize);
    }
    else {
        resize(size() + 1);
    }
    size_t s2 = size();

    m_debut[sizeAvantResize] = x;
    m_finDim++;
}

template <typename T>
void vector<T>::pop_back()
{
    //std::cout<<"pop_back A VENIR"<<std::endl;
    if (size() > 0) {
        m_finDim--;
    }
}

template <typename T>
T& vector<T>::operator[](size_t i)
{
    //std::cout<<"operator[] IN PROGRESS"<<std::endl;
    return m_debut[i];
}

template <typename T>
const T& vector<T>::operator[](size_t i)const
{
    //std::cout<<"operator[]const IN PROGRESS"<<std::endl;
    return m_debut[i];
}

template <typename T>
T& vector<T>::at(size_t i)
{
    //std::cout<<"at IN PROGRESS"<<std::endl;
    if (i >= size())
        std::out_of_range("Dépassement de dimension!");
    else
        return m_debut[i];
}

template <typename T>
const T& vector<T>::at(size_t i)const
{
    //std::cout<<"at const IN PROGRESS"<<std::endl;
    if (i >= size())
        std::out_of_range("Dépassement de dimension!");
    else
        return m_debut[i];
}


#endif // vectorImpl_h
