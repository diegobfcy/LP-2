#include <iostream>
#include <string>

using namespace std;

class Movil{
    private:
        string marca;
        string modelo;
        string sistemaOperativo;
    public:
        Movil(string marca,string modelo, string sistemaOperativo){
            this->marca = marca;
            this->modelo = modelo;
            this->sistemaOperativo = sistemaOperativo;
        }
        ~Movil(){
            cout<<"Eliminando Movil"<<endl;
        }
        string getMarca(){
            return this->marca;
        }
        string getModelo(){
            return this->modelo;
        }
        string getSistemaOperativo(){
            return this->sistemaOperativo;
        }
};
class Telefono: public Movil{
    private:
        string operador;
    public:
        Telefono(string marca, string modelo, string operador, string sistemaOperativo):Movil(marca,modelo, sistemaOperativo){
            this->operador = operador;
        }
        ~Telefono(){
            cout<<"Eliminando Telefono"<<endl;
        }
        void mostrarTelefono(){
            cout<<"Marca: "<<getMarca()<<endl;
            cout<<"Modelo: "<<getModelo()<<endl;
            cout<<"Sistema Operativo: "<<getSistemaOperativo()<<endl;
            cout<<"Operador: "<<operador<<endl;
        }
};
class Tablet: public Movil{
    private:
        string tamaño;
    public:
        Tablet(string marca, string modelo, string tamaño, string sistemaOperativo): Movil(marca,modelo, sistemaOperativo){
            this->tamaño = tamaño;
        } 
        ~Tablet(){
            cout<<"Eliminando Tablet"<<endl;
        }
        void mostrarTablet(){
            cout<<"Marca: "<<getMarca()<<endl;
            cout<<"Modelo: "<<getModelo()<<endl;
            cout<<"Sistema Operativo: "<<getSistemaOperativo()<<endl;
            cout<<"Tamaño: "<<tamaño<<endl;
        }
};
        

int main(){
    Telefono telefono1("Samsung","Galaxy S21","Entel","Android");
    Telefono telefono2("Apple","iPhone 13","Claro","iOS");

    Tablet tablet1("Samsung","Galaxy Tab S7","11 pulgadas","Android");
    Tablet tablet2("Apple","iPad Pro","12.9 pulgadas","iPadOS");

    telefono1.mostrarTelefono();
    cout<<"----------------"<<endl;
    telefono2.mostrarTelefono();
    cout<<"----------------"<<endl;
    tablet1.mostrarTablet();
    cout<<"----------------"<<endl;
    tablet2.mostrarTablet();
    cout<<"----------------"<<endl;

}