# Programmierung_4
Assignment 4


Aufgabe 4.1. (6 Punkte) Operator Basics Diese Aufgabe dient dazu, Operatorpriorit¨aten und Assoziativit¨aten einzu¨uben. In einem gut geschriebenen Programm sollte die Reihenfolge der auszuf¨uhrenden Operationen oﬀensichtlich sein. Wir sollten aber trotzdem in der Lage sein, uns in schlechtem geschriebenem Code zurechtﬁnden zu k¨onnen.
(a) Schreiben Sie ein Programm, das nacheinander den Wert der Ausdr¨ucke • ++a < 10 && 25 + 3 != 25 • 15 > a || 15 < 5 * --a • a += a != 5 && 3; • a %= 3*a - 5 && 2*a +2 || a - 10;
mit printf ausgibt. Hierbei ist a eine int Variable mit anf¨anglichem Wert a = 3. Setzen Sie dann Klammern, um die Anordnung der Operationen klar erkennbar zu machen, ohne den Wert oder die Nebenwirkungen der Ausdr¨ucke zu ¨andern. Erkl¨aren Sie in einem Kommentar, wie und warum sich der Wert der Variablen a w¨ahrend der Auswertung der einzelnen Ausdr¨ucke ¨andert. 


(b) Die Zeile
a%=b++-c*d--+e&&f-(int)3.1415<=!*&g||h
stellt einen legalen, wenn auch absichtlich unleserlichen C-Ausdruck dar. Hierbei sind a bis h Variablen des Typs int mit Werten a = 7, b = 6, c = 5, d = 4, e = 3, f = 2, g = 1, h = 0. Implementieren Sie den Ausdruck in einem Programm und f¨ugen Sie Klammern gem¨aß der Priorit¨ at und Assoziativit¨at der Operatoren ein, sodass die Ausf¨uhrung der Operationen klar ersichtlich ist (ohne das Resultat und die Nebenwirkungen des Ausdrucks zu ¨andern). Geben Sie den Wert des Ausdrucks, sowie der beteiligten Variablen (vor und nach Auswerten des Ausdrucks) aus. Erkl¨aren Sie in einem Kommentar, wie und warum sich die Werte der Variablen w¨ahrend der Ausf¨uhrung ¨andern und erl¨autern Sie in einem Kommentar, wie der R¨uckgabewert des Ausdrucks zustande kommt.


Aufgabe 4.2. (6 Punkte) Monte-Carlo-Simulation Im Folgenden sollen Sie die in der Vorlesung eingef¨uhrte Monte-Carlo-Simulation anwenden. Hierbei sollen komplexe mathematische Problemstellungen mithilfe von Simulationen mit Zufallszahlen gel¨ost werden.
(a)
Schreiben Sie ein Programm, das mithilfe einer MC-Simulation numerisch das Volumen eines sogenannten asteroidalen Ellopsoids (siehe rechts) bestimmt, welcher durch die Punktmenge (x,y,z) ∈ R3 : x21/3 +y21/3 +z21/3 ≤R21/3. (1) festgelegt wird. Verwenden Sie Symmetrie¨uberlegungen um die Berechnung des Volumens auf x,y,z ≥ 0 reduzieren zu k¨onnen. Brechen Sie die Berechnung ab, wenn die Region Nhit = 107 mal getroﬀen wurde und berechnen Sie den relativen Fehler zu dem exakten Volumen Vexakt = 4π/35. Sie d¨urfen von nun an alle Funktionen aus math.h verwenden.
(b) Schreiben Sie ein Programm, das die Volumina der d-dimensionalen euklidischen Einheitskugel f¨ ur d = 3...6 mithilfe von MC berechnet und ausgibt. Brechen Sie jeweils die Berechnung nach Nhit = 107 ab. Geben Sie jeweils den relativen Fehler zum exakten Resultat
Vd =
πd/2 Γ(d/2 + 1)
(2)
aus, wobei Γ die Gammafunktion ist.
