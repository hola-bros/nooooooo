class Embarcacion:
    def __init__(self, nombre, tipo, capacidad, longitud):
        self.nombre = nombre
        self.tipo = tipo
        self.capacidad = capacidad
        self.longitud = longitud
        print(f"Embarcación '{self.nombre}' creada.")

    def mostrar_info(self):
        print(f"Nombre: {self.nombre}")
        print(f"Tipo: {self.tipo}")
        print(f"Capacidad: {self.capacidad} personas")
        print(f"Longitud: {self.longitud} metros")

    def navegar(self):
        print(f"La embarcación {self.nombre} está navegando...")

    def __del__(self):
        print(f"Embarcación '{self.nombre}' destruida.")
