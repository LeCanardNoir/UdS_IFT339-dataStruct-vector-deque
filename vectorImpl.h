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
    /*std::cout << std::endl << "Ostie de TYPE a marde: " << typeid(T).name() << std::endl ;
    delete [] m_debut;
    delete m_finDim;
    delete m_finCap;
    m_debut = nullptr;
    m_finDim = 0;
    m_finCap = 0;*/
}

///////////////////////////////////////////////////
//resize (modifie la dimension)

template <typename T>
void vector<T>::resize(size_t nDIM)
{
    std::cout<<"resize IN PROGRESS"<<std::endl;
    if ((m_debut + nDIM) > m_finCap) {
        reserve(nDIM);
    }
    m_finDim = m_debut + nDIM;
}


///////////////////////////////////////////////////
//reserve (modifie la capacite)

template <typename T>
void vector<T>::reserve(size_t nCAP)
{
    std::cout<<"reserve  IN PROGRESS"<<std::endl;
    if ((m_finCap - m_debut) < nCAP)
        m_finCap = m_debut + nCAP;

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
    //std::cout<<"push_back  À VENIR"<<std::endl;
    if (m_finDim == m_finCap) {
        const size_t CELLULES_A_AJOUTER = 5;
            reserve(size() + CELLULES_A_AJOUTER);
    }

    *m_finDim = x;
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
