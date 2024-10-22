

void delay_ms(unsigned int x)  // 延时函数
{
    unsigned int i,j;
    if(x==1000)
    {
        for(i=0;i<19601;i++)//延时1s
        {
            for(j=5;j>0;j--);
        }
    }
    else while(x--)for(j=115;j>0;j--);
}

// tips: 原理图当中led为低电平点亮，比如点亮LED2,代码为： P0 = 0xFE (1111 1110)


int main(void)
{
    """
    在下方编写你的代码
    """
     unsigned char start=0x01;

    while(1)
   {
        P0=~start;
        delay_ms(500);
        start <<= 1;
        if(start == 0x00)
        {
            start = 0x01;
        }
   }
    

 

    return 0;
}

