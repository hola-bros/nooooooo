from Velero import Velero
from Lancha import Lancha
from Submarino import Submarino

def main():
    print("=== Registro de Embarcaciones ===")

    nombre = input("Nombre del velero: ")
    velas = int(input("Número de velas: "))
    v = Velero(nombre, 8, 12, velas)
    v.mostrar_info()
    v.desplegar_velas()

    nombre = input("\nNombre de la lancha: ")
    motor = int(input("Potencia del motor (HP): "))
    l = Lancha(nombre, 5, 6, motor)
    l.mostrar_info()
    l.acelerar()

    nombre = input("\nNombre del submarino: ")
    prof = int(input("Profundidad máxima: "))
    s = Submarino(nombre, 10, 25, prof)
    s.mostrar_info()
    s.sumergir()

if __name__ == "__main__":
    main()
