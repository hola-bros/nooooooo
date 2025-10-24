from embarcacion import Embarcacion

class Submarino(Embarcacion):
    def __init__(self, nombre, capacidad, longitud, profundidad_max):
        super().__init__(nombre, "Submarino", capacidad, longitud)
        self.profundidad_max = profundidad_max

    def mostrar_info(self):
        super().mostrar_info()
        print(f"Profundidad máxima: {self.profundidad_max} metros")

    def sumergir(self):
        print(f"El submarino {self.nombre} se sumerge hasta {self.profundidad_max} metros.")
