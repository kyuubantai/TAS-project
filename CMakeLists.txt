cmake_minimum_required(VERSION 3.12)
project(MoteurIA)

# 1. On demande à CMake de trouver Python et pybind11
find_package(Python3 COMPONENTS Interpreter Development REQUIRED)
find_package(pybind11 REQUIRED)

# 2. On définit le module Python
# "mon_moteur_cpp" sera le nom que tu utiliseras dans : import mon_moteur_cpp
pybind11_add_module(mon_moteur_cpp 
    src/main.cpp 
    # Ajoute ici tes futurs fichiers .cpp (ex: src/neuron.cpp)
)

# 3. Optionnel : Optimisations pour la vitesse (très important pour l'IA)
target_compile_options(mon_moteur_cpp PRIVATE -O3 -march=native)
# 4. Optionnel : Spécifie où le module compilé sera placé
set_target_properties(mon_moteur_cpp PROPERTIES LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}")