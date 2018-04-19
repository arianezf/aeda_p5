#include <iostream>
#include <time.h>
#include <iomanip>




#include "dni.h"
#include "m_ordenacion.h"

int main(void){
    
    cout << "Práctica 5 - Método de ordenación" << endl;
    
    int modo;
    cout << "Introduzca el modo:" << endl;
    cout << "0. Demostración" << endl << "1. Estadístico" << endl;
    cin >> modo;
    
    
        
    if(modo == 0){
        int n;
        cout << "introduzca el número de elemetos del vector" << endl;
        cin >> n;
        vector<dni_t> prueba(n);
    
        for(int i = 0; i < prueba.size(); i++){
            dni_t dni;
        
            dni.set_dni(rand()%100000000);
            dni.set_letra('A'+ rand()%(('Z'- 'A')+1));
        
            prueba[i] = dni;
        }
    
        vector<dni_t>::iterator  it;
        cout << "Vector desordenado" << endl;
        for(it  = prueba.begin(); it != prueba.end(); it++){
                        dni_t aux = *it;
                       
                        cout << aux.get_dni() << aux.get_letra() << " | ";
                    }
        cout << endl;

        int ord;
        cout << "Introzuca el algoritmo:" << endl;
        cout <<"    0. Inserción" << endl
        << "    1. Método de la burbuja" << endl
       // << "    2. Heapsort" << endl
        << "    3. Quicksort" << endl
        << "    4. Shellsort" << endl;
        cin >> ord;
        cout << ord << endl;
        
        switch(ord){
            
            case 0: {
                    int comp = insercion(prueba, true);
                    cout << endl;
                    cout << "Vector Ordenado" << endl;
                    vector<dni_t>::iterator it;
                   
                    for(it  = prueba.begin(); it != prueba.end(); it++){
                        dni_t aux = *it;
                       
                        cout << aux.get_dni() << aux.get_letra() << " | ";
                    }
                    cout << endl;
                    break;
                    }
            case 1: { 
                    int comp = burbuja(prueba, true);
                    cout << endl;
                    cout << "Vector Ordenado" << endl;
                   vector<dni_t>::iterator it;
                   for(it  = prueba.begin(); it != prueba.end(); it++){
                        dni_t aux = *it;
                       
                        cout << aux.get_dni() << aux.get_letra() << " | ";
                    }
                    cout << endl;
                    break;
                    }    
            case 2: {
                    int comp = heapsort(prueba, true);
                    cout << endl;
                    cout << "Vector Ordenado" << endl;
                    vector<dni_t>::iterator it;
                    for(it  = prueba.begin(); it != prueba.end(); it++){
                        dni_t aux = *it;
                       
                        cout << aux.get_dni() << aux.get_letra() << " | ";
                    }
                    cout << endl;
                    break;
                    }
            case 3: {
                    int comp = quicksort(prueba, 0, prueba.size()-1, true);
                    cout << endl;
                    cout << "Vector Ordenado" << endl;
                    vector<dni_t>::iterator it;
                    for(it  = prueba.begin(); it != prueba.end(); it++){
                        dni_t aux = *it;
                       
                        cout << aux.get_dni() << aux.get_letra() << " | ";
                    }
                    cout << endl;
                    break;
                    }
            case 4: {
                    shellsort(prueba, true);
                   
                    cout << endl;
                    cout << "Vector Ordenado" << endl;
                    vector<dni_t>::iterator it;
                    for(it  = prueba.begin(); it != prueba.end(); it++){
                        dni_t aux = *it;
                       
                        cout << aux.get_dni() << aux.get_letra() << " | ";
                    }
                    cout << endl;
                    break;
                    }
        }
    }
    else{
        
        int n;
        cout << "introduzca el número de elemetos del vector" << endl;
        cin >> n;
        vector<dni_t> prueba(n);
        
        int pruebas;
        cout << "Introduzca el número de pruebas" << endl;
        cin >> pruebas;
        
            vector<int> re_in;
            re_in.resize(5);
            vector<int> re_bu;
            re_bu.resize(5);
            vector<int> re_h;
            re_h.resize(5);
            vector<int> re_q;
            re_q.resize(5);
            vector<int> re_s;
            re_s.resize(5);
            
        for(int i = 0; i < pruebas; i++){
            for(int j = 0; j < prueba.size(); j++){
            dni_t dni;
        
            dni.set_dni(rand()%100000000);
        
            prueba[j] = dni;
            }
            
            
            
            re_in[i] = insercion(prueba, false);
            re_bu[i] = burbuja(prueba, false);
            cout << re_bu[i] << endl;
            //re_h.push_back(heapsort(prueba, modo));
            re_q[i] = quicksort(prueba, 0, prueba.size()-1, false);
            re_s[i] = shellsort(prueba, false);
            
            
    
        }
        
        int min_i = 99999;
        int max_i = 0;
        int media_i = 0;
        
         int min_b = 99999;
        int max_b = 0;
        int media_b = 0;
        
         int min_h = 99999;
        int max_h = 0;
        int media_h = 0;
        
         int min_q = 99999;
        int max_q = 0;
        int media_q = 0;
        
         int min_s = 99999;
        int max_s = 0;
        int media_s = 0;
        
        for(int n = 0; n < pruebas; n++ ){
            
            if(min_i > re_in[n])
                min_i = re_in[n];
            if(max_i < re_in[n]);
                max_i = re_in[n];
            media_i += re_in[n];
            
            if(min_b > re_bu[n])
                min_b = re_bu[n];
            if(max_b < re_bu[n]);
                max_b = re_bu[n];
            media_b += re_bu[n];
            
            // if(min_h > re_h[n])
            //     min_h = re_h[n];
            // if(max_h < re_h[n]);
            //     max_h = re_h[n];
            // media_h += re_h[n];
            
            if(min_q > re_q[n])
                min_q = re_q[n];
            if(max_q < re_q[n]);
                max_q = re_q[n];
            media_q += re_q[n];
            
            if(min_s > re_s[n])
                min_s = re_s[n];
            if(max_s < re_s[n]);
                max_s = re_s[n];
            media_s += re_s[n];
        }
        
        cout << "comparaciones" << endl;
        cout << media_i << endl;
        cout<< media_b << endl;
        cout << media_q << endl;
        cout << media_s << endl;
        media_i /= pruebas;
        media_b /= pruebas;
        //media_h /= pruebas;
        media_q /= pruebas;
        media_s /= pruebas;
        
        cout << "   Número de comparaciones" << endl;
        
        cout <<"        Mínimo" << "    Medio" << "     Máximo" << endl;
        cout << "Inserción " <<min_i << "\t" << media_i << "\t" << max_i << endl;
        cout << "Burbuja " <<min_b << "\t" << media_b << "\t" << max_b << endl;
        //cout << "Heapsort" <<min_h << "\t" << media_h << "\t" << max_h << endl;
        cout << "Quicksort " <<min_q << "\t" << media_q << "\t" << max_q << endl;
        cout << "Shellsort " <<min_s << "\t" << media_s << "\t" << max_s << endl;
        
        
        
        
    }
    
   
}


    