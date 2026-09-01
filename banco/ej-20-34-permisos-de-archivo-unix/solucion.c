enum permiso_unix
{
    OWNER_READ = 0400, // 0100000000 en octal
    OWNER_WRITE = 0200,
    OWNER_EXECUTE = 0100,
    GROUP_READ = 0040,
    GROUP_WRITE = 0020,
    GROUP_EXECUTE = 0010,
    OTHER_READ = 0004,
    OTHER_WRITE = 0002,
    OTHER_EXECUTE = 0001
};


int proc_isos_de_archivo_unix(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    return 0;
}