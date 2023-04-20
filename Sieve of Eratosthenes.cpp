#include <set>
#include <iostream>

using namespace std;

int main()
{
    set<int> sieve;
    int sieve_Size=25;
    for(int i = 2; i<=sieve_Size ; i++) //Creates a set going from 2 - 25
    {
        sieve.insert(i);
    }
    
    
    //This is part you need to know probably
    for(int n = 2; n <=sieve_Size/2 ; n++) 
    {
        for(int i = 2 ; i <= sieve_Size/n ; i++) 
        {
            if(sieve.find(i*n) != sieve.end()) 
              {  
                sieve.erase(sieve.find(i*n));   
              }
        }
    }
    //till here

    for(set<int>::iterator itr = sieve.begin() ; itr != sieve.end(); itr++)
    {
        cout<< *itr<<" ";
    }

}