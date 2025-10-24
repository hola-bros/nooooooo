from embarcacion import Embarcacion

class Lancha(Embarcacion):
    def __init__(self, nombre, capacidad, longitud, potencia_motor):
        super().__init__(nombre, "Lancha", capacidad, longitud)
        self.potencia_motor = potencia_motor

    def mostrar_info(self):
        super().mostrar_info()
        print(f"Potencia del motor: {self.potencia_motor} HP")

    def acelerar(self):
        print(f"La lancha {self.nombre} está acelerando con {self.potencia_motor} HP.")
