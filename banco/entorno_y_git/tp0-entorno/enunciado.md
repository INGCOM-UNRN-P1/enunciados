Comenzaremos trabajando para completar los preparativos para las prácticas de la
cátedra.

### Preparación del entorno

La cátedra ha preparado un script para crear un entorno completamente aislado
con las herramientas que utilizaremos en el cuatrimestre. Pueden ver más
detalles en su repositorio dedicado
[INGCOM-UNRN-P1/entorno](https://github.com/INGCOM-UNRN-P1/entorno).

Es importante que utilicen este entorno aunque tengan el compilador instalado de
antes, ya que este trae un conjunto de herramientas que vamos a usar más
adelante.

Este entorno incluye:

- Git + gitHub CLI
- Un entorno similar a Linux
- Compilador (`gcc`) / debugger (`gdb`)
- Visual Studio Code
- Una terminal bonita (wezterm)
- Herramientas de análisis
- Scripts de gestión

Para empezar la instalación, solo es necesario ejecutar la siguiente instrucción
en una terminal de PowerShell en la carpeta donde quieras instalar el entorno
(les recomendamos `C:\\p1\`)

```powershell
Set-ExecutionPolicy Bypass -Scope Process -Force; irm https://raw.githubusercontent.com/INGCOM-UNRN-P1/entorno/main/install.ps1 | iex
```

Este script descargará el instalador principal (`setup.ps1`) con el formato
correcto y te indicará cómo ejecutarlo para completar la configuración del
entorno portable.

Dado que el entorno es portátil y no utiliza los directorios locales del host,
debés configurar tu firma de Git para esta sesión portable:

1. Ejecutá `launch.bat`.
2. Dentro del terminal, corré el comando de configuración (agregado al PATH):
   ```bash
   configure-git.sh
   ```
3. Completá tu nombre y correo. Las credenciales de acceso a repositorios HTTPS
   se guardarán localmente dentro de `home/.git-credentials` mediante el helper
   `store`. No afectarán la configuración de tu computadora.

Pueden copiar el entorno a un pendrive y ejecutarlo directamente desde ahí,
ideal si no tienen computadora propia y necesitan una de las de la universidad.

Con este entorno, su configuración, personalizaciones y sesión en git queda
configurado y listo para usar.

Dentro de este repositorio, ejecuten el comando `diagnose-env.sh` de la
siguiente forma:

```bash
diagnose-env.sh > entorno.txt
git add entorno.txt
git commit -m "tarea: Agregamos el reporte de configuracion del entorno"
```

Línea por línea, esto llama al programa que verifica (y ayuda a diagnosticar
problemas) en la instalación del entorno, luego agrega el reporte en el
repositorio y finalmente lo guarda en el mismo con el mensaje `"tarea: ..."`
