int base_conv(int n, int b, char out[], int max_len)
{
    char dig[]="0123456789ABCDEF"; int len=0;
    if(n==0){out[0]='0'; return 1;}
    while(n>0&&len<max_len){ out[len++]=dig[n%b]; n/=b; }
    for(int i=0;i<len/2;i++){ char t=out[i]; out[i]=out[len-1-i]; out[len-1-i]=t; }
    return len;
}

int main(void)
{
    return 0;
}