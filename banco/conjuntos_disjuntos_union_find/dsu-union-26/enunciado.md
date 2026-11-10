# DSU con operaciones concurrentes

Implementá un Union-Find seguro frente a llamadas concurrentes. El TAD almacena `count` elementos numerados desde cero. Inicializá el objeto con `DSU_ATOMIC_INITIALIZER` antes de llamar a `dsu_atomic_init`; esta última reserva el estado. `find` devuelve el representante mediante parámetro de salida y `union` combina dos componentes. Los índices inválidos, objetos no inicializados y parámetros de salida nulos fallan sin acceso fuera de rango. Unir elementos ya conectados tiene éxito y no altera la partición.

Las operaciones usan atómicos C11 para los padres y un cerrojo interno para que actualizaciones concurrentes mantengan rango y conectividad coherentes. Inicializá antes de compartir el objeto; llamá `dsu_atomic_destroy` solo cuando no haya operaciones en curso.
