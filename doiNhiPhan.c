#define SoPhanTu 100
typedef int ElementType;
typedef struct
{
    ElementType DuLieu[SoPhanTu];
    int Dinh;
}NganXep;

void hienthi(NganXep *pS)
{
    while(!ktRong(*pS))
    {
        printf("%d ",giatriDinh(*pS));
        xoa(pS);
    }
    
}
void doiNhiPhan(int n, NganXep *pS)
{
    khoitao(pS);
    while(n!=0)
    {
        
        them(n%2,pS);
        n=n/2;
        
   
    }
    hienthi(pS);
    
}

