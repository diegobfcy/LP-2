#include <iostream>
#include <string>

using namespace std;

class Persona{
    private:
        string nombre;
        int edad;
        int salario;
    protected:
        string correoElectronico;
    public:
        Persona(string nombre, int edad, int salario, string correoElectronico){
            this->nombre = nombre;
            this->edad = edad;
            this->salario = salario;
            this->correoElectronico = correoElectronico;
        }
};
class Empleado: public Persona{
    public:
        void accesoCorreo(){
            cout<<correoElectronico<<endl;;
        }
        Empleado(string nombre, int edad, int salario, string correoElectronico): Persona(nombre,edad,salario,correoElectronico){

        }
};
class Cliente: public Persona{
    public:
        void accesoCorreo(){
            cout<<correoElectronico<<endl;
        }
        Cliente(string nombre, int edad, int salario, string correoElectronico): Persona(nombre,edad,salario,correoElectronico){

        }
};
int main(){
    Empleado nuevoEmpleado("Pepe",29,1000,"pepe@gmail.com");
    Cliente nuevoCliente("Pedro",39,2000,"pedo@ucsm.edu.pe");

    cout<<"Pepe"<<endl;
    nuevoEmpleado.accesoCorreo();
    cout<<"-------------"<<endl;
    cout<<"Pedro"<<endl;
    nuevoCliente.accesoCorreo();
}