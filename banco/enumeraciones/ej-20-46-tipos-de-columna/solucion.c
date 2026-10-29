enum tipo_sql
{
    SQL_INT,
    SQL_BIGINT,
    SQL_FLOAT,
    SQL_DOUBLE,
    SQL_VARCHAR,
    SQL_TEXT,
    SQL_DATE,
    SQL_DATETIME,
    SQL_BOOLEAN,
    SQL_BLOB
};
enum constraint_sql
{
    CONSTRAINT_NINGUNO = 0,
    CONSTRAINT_NOT_NULL = 1 << 0,
    CONSTRAINT_UNIQUE = 1 << 1,
    CONSTRAINT_PRIMARY_KEY = 1 << 2,
    CONSTRAINT_FOREIGN_KEY = 1 << 3,
    CONSTRAINT_AUTO_INCREMENT = 1 << 4
};
typedef struct
{
    char nombre[64];
    enum tipo_sql tipo;
    unsigned int constraints;
    int longitud; // Para VARCHAR
} columna_t;


int proc__46_tipos_de_columna(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    return 0;
}