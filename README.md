# Escornabot-2.12
Escornabot es un robot de robótica educacional libre que ha sido creado para compartirlo con la sociedad. Hay múltiples documentaciones en varios sitios, diferentes versiones del robot y aunque está muy bien documentado me ha resultado un poco caótico sobre todo identificar los componentes y comprarlos.

La documentación más trabajada sobre Escornabot con diferencia sobre el material, montaje y programación la encontramos en este libro. OJO es para la versión DIY por lo que hay cosas que cambian pero para tomarle el pulso está muy bien.

https://catedu.gitbooks.io/escornabots/content/

## Lista de materiales:

Este punto ha sido el que más guerra me ha dado:

1. Electrónico, mecánico: Lista de los componentes que hay que comprar. En esta lista están los componentes electrónicos para montar la PCB, y todo los componentes (Motores, portapilas...) salvo el chasis en 3D. https://github.com/ionhsFP/Escornabot-2.12/blob/master/Boom.md
2. STL de los componentes de plastico para imprimir: https://github.com/ionhsFP/Escornabot-2.12/tree/master/archivos-stl

## Instrucciones de montaje

**Las instrucciones de montaje de la PCB** he seguido el [manual que tienen los creadores de escornabot](https://github.com/ionhsFP/Escornabot-2.12/blob/master/folleto_montaxe_PCB2_12_es.pdf) también me ha servido para ayudarme a identificar los componentes más fácil. Aunque han realizado un trabajo muy bueno, personalmente el orden de montaje de los componentes de la PCB no me ha gustado mucho ya que dependiendo del encapsulado de componente se complicaba. Pero si no se sabe como hacerlo, es muy buen manual de montaje.

Hay un documento sobre la [característica de la PCB 2.12](https://github.com/ionhsFP/Escornabot-2.12/blob/master/Caracteristicas_CPU2_12.pdf) que es interesante leerlo. Da una visión sobre la placa que no he podido lograrlo en ningún otro sitio, además de detalles de los componentes para que sea más fácil su compra. Como más adelante comento la parte de comunicación inalámbrica está comentada aquí, aunque yo por ahora no la he implementado.

**El montaje del robot** lo mejor es ver uno de los montones de videos que hay sobre el tema. Pongo este [enlace de Youtube sobre le montaje de escornabot 2.12](https://www.youtube.com/watch?v=BZlz0jdP4jM) que cumple su objetivo pero los hay más cortos.

Programación y configuración del software del escornabot 2.12



## Trabajos pendientes para el futuro:

- Añadir control de radiocontrol (wifi o bluetooth). Está todo desarrollado gracias a los creadores de escornabot pero no me corre prisa
- STL del sensor ultrasonido (no he podido probarlo, lo tengo en lista de espera para empezar inverstigarlo)
  http://www.aprendizdetecnologo.com/index.php/practicas/robotica-e-impresion-3d/74-soporte-para-sensor-de-ultrasonidos-de-escornabot?jjj=1540821207113