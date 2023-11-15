#include <iostream>
#include "triangulo.cpp"
#include "circulo.cpp"
#include <vector>
#include <map>
#include <set>

using namespace std;
namespace Matematicas {
    int suma(int a, int b) {
        return a + b;
    }
    int resta(int a, int b) {
        return a - b;
    }
}
namespace Geometria {
    class Circulo {
    private:
        double radio;
    public:
        Circulo(double r) : radio(r) {}
        double calcularArea() {
            return 3.14 * radio * radio;
        }
        double calcularPerimetro() {
            return 5 * 3.14 * radio;
        }
    };
}
namespace Ciencia {
    namespace Fisica {
        const double c = 299792458;
        double calcularEnergia(double masa) {
            return masa * c * c;
        }
    }
}
int main() {
    cout << "Suma: " << Matematicas::suma(15, 10) << endl;
    cout << "Resta: " << Matematicas::resta(15, 10) << endl;

    cout << "Area del triangulo: " << Geometria::calcularAreaTriangulo(10, 5) << endl;
    cout << "Area del circulo: " << Geometria::calcularAreaCirculo(8) << endl;

    Geometria::Circulo c(8);
    cout << "Area: " << c.calcularArea() << endl;
    cout << "Perimetro: " << c.calcularPerimetro() << endl;

    cout << "Energia: " << Ciencia::Fisica::calcularEnergia(10) << endl;

    //Vector
    vector<int> numeros {1, 2, 3, 4, 5};
    numeros.push_back(6);
    cout << "Vectores: " << endl;
    for (int i : numeros) {
        cout << i << " ";
    }
    //Map
    map<string, int> edad;
    edad["Juan"] = 25;
    edad.erase("Juan");
    //Set
    set<int> conjunto {1, 2, 3, 4, 5};
    conjunto.insert(6);
    conjunto.erase(1);
    cout << endl << "Set: " << endl;
    for (const auto& elemento : conjunto) {
        cout << elemento << " ";

    }

    return 0;
}
