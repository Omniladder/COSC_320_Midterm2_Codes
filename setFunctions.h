#include <set>

using namespace std;

template<class T>
set<T> operator+ (set<T> set1, set<T> set2)
{
    set<T> set3 = set2;
    for(typename set<T>::iterator itr = set1.begin() ; itr != set1.end(); itr++)
    {
        set3.insert(*itr);
    }
    return set3;//
}


template<class T>
set<T> operator* (set<T> set1, set<T> set2)
{
    set<T> set3;
    for(typename set<T>::iterator itr = set1.begin() ; itr != set1.end(); itr++)
    {
        if(set2.find(*itr)!=set2.end())
        {
            set3.insert(*itr);
        }
    }
    return set3;
}

template<class T>
set<T> operator- (set<T> set1, set<T> set2)
{
    set<T> set3 = set1;
    for(typename set<T>::iterator itr = set2.begin() ; itr != set2.end(); itr++)
    {
        if(set3.find(*itr)!=set3.end())
        {
            set3.erase(*itr);
        }
    }
    return set3;
}
