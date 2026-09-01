int rle_dec(int pares[], int n_pares, int sal[], int max_sal)
{
    int k=0;
    for(int i=0;i<n_pares*2;i+=2){
        int val=pares[i]; int rep=pares[i+1];
        for(int r=0;r<rep;r++){
            if(k>=max_sal) return -1;
            sal[k++]=val;
        }
    }
    return k;
}

int main(void)
{
    return 0;
}