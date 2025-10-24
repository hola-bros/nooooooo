from embarcacion import Embarcacion

class Velero(Embarcacion):
    def __init__(self, nombre, capacidad, longitud, num_velas):
        super().__init__(nombre, "Velero", capacidad, longitud)
        self.num_velas = num_velas

    def mostrar_info(self):
        super().mostrar_info()
        print(f"Número de velas: {self.num_velas}")

    def desplegar_velas(self):
        print(f"El velero {self.nombre} está desplegando {self.num_velas} velas.")
