# Guía de resolución

`sizeof` informa el tamaño usado por la implementación para el tipo, no el costo de ejecutar operaciones. Para comparar rendimiento, prepará un benchmark representativo con trabajo equivalente, niveles de optimización documentados y resultados usados para evitar que se elimine el cálculo; repetí las mediciones. Las constantes y los valores enum pueden dar lugar al mismo código optimizado, pero eso depende del programa, compilador y opciones.

En C los enumeradores son constantes enteras y el tipo compatible de un enum depende de la implementación. En C++ existen además los enums con ámbito (`enum class`): sus enumeradores se califican con el nombre del tipo y no se convierten implícitamente a enteros. Documentá las versiones y opciones usadas al comparar ambos lenguajes.
