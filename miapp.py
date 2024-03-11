class Persona:
    
    # Atributos
    
    def __init__(self, nombre, edad, sexo):
        self.nombre = nombre
        self.edad = edad
        self.sexo = sexo
    
    # Método
    
    def dormir(self):
        
        return f'{self.nombre} está dormid@'

Cristhel = Persona("Cristhel", 19, "F")
Jeremy = Persona("Jeremy", 20, "M")
Kelvin = Persona("Kelvin", 21, "M")

print(Cristhel.dormir())
print(Jeremy.dormir())
