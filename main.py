import mon_moteur_cpp  # On importe le module compilé en C++

inputs = [1.0, 0.5, -0.2]
weights = [0.4, -0.1, 0.8]
bias = 0.1

# L'appel se fait à la vitesse du C++ !
resultat = mon_moteur_cpp.predict(inputs, weights, bias)

print(f"Résultat du neurone : {resultat}")
