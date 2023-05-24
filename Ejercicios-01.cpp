#include <iostream>
#include <string>

using namespace std;

class Vehiculo{
    private:
        string marca;
        string modelo;
        string año;
        int precio;
    public:
        Vehiculo(string marca, string modelo, string año, int precio){
            this->marca = marca;
            this->modelo = modelo;
            this->año = año;
            this->precio = precio;
        }
        string getMarca(){
            return this->marca;
        }
};
class Automovil: public Vehiculo{
    private:
        int nroPuertas;
        string tipoCombustible;
    public:
    Automovil(string marca, string modelo, string año, int precio, int nroPuertas, string tipoCombustible):Vehiculo(marca,modelo,año,precio){
        this->nroPuertas=nroPuertas;
        this->tipoCombustible = tipoCombustible;
    }
    int getNroPuertas(){
        return this->nroPuertas;
    }
    string getTipoCombustible(){
        return this->tipoCombustible;
    }

};
class Motocicleta: public Vehiculo{
    private:
        string cilindrada;
    public:
    Motocicleta(string marca, string modelo, string año, int precio, string cilindrada): Vehiculo(marca,modelo,año,precio){
        this->cilindrada = cilindrada;
    }
    string getCilindrada(){
        return cilindrada;
    }
};

int main(){
    Automovil Mustang("Ford Mustang GT","2022","2022",40000,2,"Gasolina");
    Automovil Tesla("Tesla Model S","2023","2023",85000,4,"Electrico");

    Motocicleta Yamaha("Yamaha","YZF-R6","2021",1200,"599cc");
    Motocicleta HarleyDavidson("Harley-Davidson","Softtail Fat Boy","2022",20000,"1868cc");

    cout<<"Marca: "<<Mustang.getMarca()<<endl;
    cout<<"Numero de Puertas: "<<Mustang.getNroPuertas()<<endl;
    cout<<"Tipo de Combustible: "<<Mustang.getTipoCombustible()<<endl;
    cout<<"-----------------"<<endl;

    cout<<"Marca: "<<Tesla.getMarca()<<endl;
    cout<<"Numero de Puertas: "<<Tesla.getNroPuertas()<<endl;
    cout<<"Tipo de Combustible: "<<Tesla.getTipoCombustible()<<endl;
    cout<<"-----------------"<<endl;

    cout<<"Marca: "<<Yamaha.getMarca()<<endl;
    cout<<"Cilindrada: "<<Yamaha.getCilindrada()<<endl;
    cout<<"-----------------"<<endl;

    cout<<"Marca: "<<HarleyDavidson.getMarca()<<endl;
    cout<<"Cilindrada: "<<HarleyDavidson.getCilindrada()<<endl;
    cout<<"-----------------"<<endl;
}