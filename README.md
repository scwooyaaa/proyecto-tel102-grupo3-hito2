# Resumen
- La problemática a tratar a partir de este proyecto es ayudar a solucionar las dificultades de aprendizaje de los estudiantes de enseñanza media al ser insuficientes los recursos entregados por la institución en la que se encuentran.
  
# Cambios realizados
Al migrar la estructura original del hito 1 de c a c++ se mantuvo el mismo código base, pero cambio su composición al ser un programa distinto, esto se pudo notar en las siguientes implementaciones.
-  Funciones principales como printf y scanf cambiaron a std::cout y std::cin al cambiar sus librerias, siendo las primeras pertenecientes a stdtio.h y las segundas a iostream.
-  Se hizo cambios de structs en c a clases en c++ siendo estas formas de organización de los datos del programa.
-  Se implementó la utilización de constructores y destructores.
-  Se agregaron métodos de acceso get y set para los atributos de la clase pregunta.

# Clases
Las clases creadas para la distribución de información fueron pregunta y juego. Dentro de pregunta se encuentra la base para la creación de estas con sus respectivas respuestas y las opciones a seleccionar por parte de los estudiantes. Por otra parte está la clase juego, siendo esta una composición de la otra clase y donde se guardan los puntajes obtenidos al utilizar el programa.

# Ejemplos de ejecución 
- Ej 1
=== Bienvenido a DuoMath ===

Pregunta 1: El área de un círculo es 154 cm┬▓. Si ¤Ç=3,14, ┬┐cuál es su radio aproximado?
  1) 6 cm
  2) 14 cm
  3) 12 cm
  4) 7 cm
Selecciona la opción correcta (1-4): 1
ÔØî Incorrecto. La respuesta correcta era: 7 cm

Pregunta 2: La recta y=3x+2 corta al eje x en:
  1) (0, 2)
  2) (2/3, 0)
  3) (-2/3, 0)
  4) (0, -2)
Selecciona la opción correcta (1-4): 3
Ô£à Correcto!

Pregunta 3: El precio de un producto aumenta un 20 % y luego disminuye un 10 %. Si el precio inicial era $10000, ┬┐cuál es el precio final?
  1) $10 800
  2) $10 000
  3) $10 200
  4) $11 000
Selecciona la opci├│n correcta (1-4): 2
ÔØî Incorrecto. La respuesta correcta era: $10 800

Pregunta 4: Si f(x)=2x^2-3x+1, entonces f(-2) es:
  1) 15
  2) 19
  3) 11
  4) 9
Selecciona la opción correcta (1-4): 1
Ô£à Correcto!

Has terminado!
Puntaje final: 2/4
­ƒÆí Necesitas practicar más.

Gracias por jugar DuoMath!

- Ej 2
=== Bienvenido a DuoMath ===

Pregunta 1: El área de un círculo es 154 cm┬▓. Si ¤Ç=3,14, ┬┐cuál es su radio aproximado?
  1) 6 cm
  2) 14 cm
  3) 12 cm
  4) 7 cm
Selecciona la opción correcta (1-4): 4
Ô£à Correcto!

Pregunta 2: La recta y=3x+2 corta al eje x en:
  1) (0, 2)
  2) (2/3, 0)
  3) (-2/3, 0)
  4) (0, -2)
Selecciona la opción correcta (1-4): 3
Ô£à Correcto!

Pregunta 3: El precio de un producto aumenta un 20 % y luego disminuye un 10 %. Si el precio inicial era $10000, ┬┐cuál es el precio final?
  1) $10 800
  2) $10 000
  3) $10 200
  4) $11 000
Selecciona la opción correcta (1-4): 1
Ô£à Correcto!

Pregunta 4: Si f(x)=2x^2-3x+1, entonces f(-2) es:
  1) 15
  2) 19
  3) 11
  4) 9
Selecciona la opción correcta (1-4): 1
Ô£à Correcto!

Has terminado!
Puntaje final: 4/4
­ƒÄë ┬íExcelente trabajo!

Gracias por jugar DuoMath!

- Ej 3
=== Bienvenido a DuoMath ===

Pregunta 1: El área de un círculo es 154 cm┬▓. Si ¤Ç=3,14, ┬┐cuál es su radio aproximado?
  1) 6 cm
  2) 14 cm
  3) 12 cm
  4) 7 cm
Selecciona la opción correcta (1-4): 2
ÔØî Incorrecto. La respuesta correcta era: 7 cm

Pregunta 2: La recta y=3x+2 corta al eje x en:
  1) (0, 2)
  2) (2/3, 0)
  3) (-2/3, 0)
  4) (0, -2)
Selecciona la opción correcta (1-4): 4
ÔØî Incorrecto. La respuesta correcta era: (-2/3, 0)

Pregunta 3: El precio de un producto aumenta un 20 % y luego disminuye un 10 %. Si el precio inicial era $10000, ┬┐cuál es el precio final?
  1) $10 800
  2) $10 000
  3) $10 200
  4) $11 000
Selecciona la opción correcta (1-4): 3
ÔØî Incorrecto. La respuesta correcta era: $10 800

Pregunta 4: Si f(x)=2x^2-3x+1, entonces f(-2) es:
  1) 15
  2) 19
  3) 11
  4) 9
Selecciona la opción correcta (1-4): 2
ÔØî Incorrecto. La respuesta correcta era: 15

Has terminado!
Puntaje final: 0/4
­ƒÆí Necesitas practicar más.

Gracias por jugar DuoMath!

# Dificultades
Las principales dificultades encontradas fueroron dentro de la clase pregunta, ya que esta es la fundamental para el desarrollo del programa y si la clase estaba mal definida no funcionaría.

# IA utilizadas
Se hizo uso de la IA chatgpt en su version "GPT-4 o" para ayudar a traducir el programa de c a c++, con el prompt principal siendo "transforma este codigo de c a c++" más el código del hito anterior. Teniendo en cuenta las limitaciones que tiene un programa como es la IA y sabiendo que esta puede tener errores al momento de su utilización.
