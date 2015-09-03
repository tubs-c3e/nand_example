# NAND Beispiel
Dies ist ein einfaches SystemC Beispiel aus dem System Level Design Praktikum.

Zum Kompilieren und Ausführen wird SystemC benötigt, welches von Accellera heruntergeladen werden kann: http://accellera.org/downloads/standards/systemc 

Folgen Sie einfach den Installationsanweisungen des Pakets.

Kompiliert wird dann wie folgt:
```
g++ testbench.cpp -I[Pfad zu SystemC]/include -L[Pfad zu Systemc]/lib -lsystemc -o testbench
```

Die Ausgabe sollte wie folgt aussehen:
```
0 s: A = 0, B = 0, C = 0
0 s: A = 0, B = 0, C = 1
0 s: A = 1, B = 0, C = 1
10 ns: A = 0, B = 1, C = 1
20 ns: A = 1, B = 1, C = 1
20 ns: A = 1, B = 1, C = 0
```
