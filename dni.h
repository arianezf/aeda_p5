#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class dni_t{
    
    private:
        
        long int dni_;
        string nombre_;
        string apellido_;
        char letra_;
        
    public:
    
    dni_t(void):
        dni_(0){}
        
    ~dni_t(void){}
    
    void set_dni(long int dni){
    
    dni_ = dni;
}

    long int get_dni(void){
    
    return dni_;
}

    void set_nombre(string nombre){
        nombre_ = nombre;
    }
    
    string get_nombre(void){
        return nombre_;
    }
    
    void set_apellido(string apellido){
        apellido_ = apellido;
    }
    
    string get_apellido(void){
        return apellido_;
    }
    
    void set_letra(char letra){
        letra_ = letra;
    }
    
    char get_letra(void){
        return letra_;
    }
    
    bool operator==(dni_t dni){
    
    if((dni.dni_ == dni_)&&(dni.letra_ == letra_))
        return true;
        
    else return false;
}

    operator unsigned long () const{
    
    unsigned long dni;
    dni = (unsigned long) dni_;
    return dni;
}
    
};