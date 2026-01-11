# mon_moteur_cpp.pyi
from typing import List

def predict(inputs: List[float], weights: List[float], bias: float) -> float:
    """
    Calcule la somme pondérée d'un neurone (C++ Optimized).
    """
    ...