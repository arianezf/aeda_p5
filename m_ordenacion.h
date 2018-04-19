#include <vector>
#include <cstdio>
#include <iostream>
using namespace std;

template <class T>
int insercion(vector<T>& sec, bool modo){
    
    T x;
    int comp = 0;
    for(int i = 0; i<sec.size(); i++){
        
        int j = i;
        x = sec[i];
       
        while( x < sec[j-1]){
            sec[j] = sec[j-1];
            j--;
            comp++;
        }
        sec[j] = x;
        
        if(modo){
            typename vector<T>::iterator it;
            for(it  = sec.begin(); it != sec.end(); it++){
                dni_t aux = *it;
                       
                        cout << aux.get_dni() << aux.get_letra() << " | ";}
            cout << endl;
        }
    }
    
   
        return comp;
}

template<class T>
int burbuja(vector<T>& sec, bool modo){
    
    int comp = 0;
    T x;
    for(int i = 0; i < sec.size(); i++){
        for(int j = (sec.size()-1); j>=1; j--){
            if(sec[j] < sec[j-1]){
                x = sec[j-1];
                
                sec[j-1] = sec[j];
                
                sec[j] = x;
                
                comp++;
                
                if(modo){
                    typename vector<T>::iterator it;
                    for(it  = sec.begin(); it != sec.end(); it++){
                        dni_t aux = *it;
                       
                        cout << aux.get_dni() << aux.get_letra() << " | ";}
                    cout << endl;
                }
            }
        
        }
         
    }
    
    return comp;
   
    
   
}

template<class T>
int heapsort(vector<T>& sec, bool modo){
    
    int comp=0;
    T x;
    
    for(int i=(sec.size()/2); i>0; i--)
        baja(i, sec, sec.size());
    for(int i = (sec.size()-1); i>0; i--){
        
        x = sec[1];
        
        sec[i] = x;
        baja(1, sec, (i-1));
        comp ++;
    }
   if(modo){
    typename vector<T>::iterator it;
    for(it  = sec.begin(); it != sec.end(); it++){
                dni_t aux = *it;
                       
                        cout << aux.get_dni() << aux.get_letra() << " | ";}
   }
    return comp;
}

template<class T>
void baja(int i, vector<T>& sec, int n){
   
    T x;
    int h = 0;
    x = sec[i];
    while((2*i) <= n){
        int h1 = (2*i);
        int h2 = h1+1;
        
        if(h1 == n)
            int h = h1;
        else if( sec[h1] > sec[h2])
            h = h1;
        else 
            h = h2;
        if(sec[h] <= x)
            break;
        else{
            sec[i] = sec[h];
            sec[h] = x;
            i = h;
        }
    }
}

template<class T>
int quicksort(vector<T>& sec, int ini, int fin, bool modo){
    int comp=0;
    int i = ini;
    int f = fin;
    T x;
    T p = sec[(i+f)/2];
    if(modo)
        cout << "Pivote: " << p << endl;
    while(i <= f){
        while(sec[i] < p){
            i++;
            comp++;
        }
        while(sec[f] > p){
            f--;
            comp++;
        }
        if(i <= f){
            x = sec[i];
            sec[i] = sec[f];
            sec[f] = x;
            i++;
            f--;
            
        }
    
    if(modo){    
        typename vector<T>::iterator it;
        for(it  = sec.begin(); it != sec.end(); it++){
                dni_t aux = *it;
                       
                        cout << aux.get_dni() << aux.get_letra() << " | ";}
        cout << endl;
        }
    }
    if(ini < f)
        quicksort(sec, ini, f, modo);
    if(i < fin)
        quicksort(sec, i, fin, modo);
        
   
    return comp;
}
    
template<class T>
int shellsort(vector<T> sec, bool modo){
    int comp=0;
   
    double alfa;
    cout << "Introduzca el valor de alfa (entre 0 y 1)" << endl;
    cin >> alfa;
    int delta = alfa * sec.size();
    while(delta >= 1){
        if(modo)
            cout << "Delta: " << delta << endl;
        comp +=deltasort(delta, sec, sec.size(), modo);
         
        delta/=2;
    }
    
    
    return comp;
}

template<class T>
int deltasort(int delta, vector<T>& sec, int n, bool modo){
    T x;
    
    int j=0;
    int comp = 0;
   
    for(int i = delta; i < n; i++){
        
        x = sec[i];
        
        j = i;
        while((j >= delta) && ( x < sec[j-delta])){
            sec[j] = sec[j-delta];
            
            j = (j - delta);
             
           
        }
        sec[j] = x;
        comp++;
        
    if(modo){
        typename vector<T>::iterator it;
        for(it  = sec.begin(); it != sec.end(); it++){
                dni_t aux = *it;
                       
                        cout << aux.get_dni() << aux.get_letra() << " | ";}
        cout << endl;
        }
    }
    return comp;
}

