#include <pybind11/pybind11.h>
#include <pybind11/stl.h> // Permet de convertir automatiquement les listes Python en std::vector
#include <vector>

namespace py = pybind11;

// La fonction "lourde" de calcul
double calcul_neurone(const std::vector<double>& inputs, const std::vector<double>& weights, double bias) {
    double sum = 0.0;
    for (size_t i = 0; i < inputs.size(); ++i) {
        sum += inputs[i] * weights[i];
    }
    return sum + bias;
}

// Le "Wrapper" : On définit le module Python
PYBIND11_MODULE(mon_moteur_cpp, m) {
    m.doc() = "Mon premier moteur d'IA en C++"; 
    m.def("predict", &calcul_neurone, "Calcule la somme pondérée d'un neurone");
}