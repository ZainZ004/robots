#include "ASEIO.h"



float tim_1=0.0f;
int gi_1=0;
int gi_2=0;
int rom_1=0;

void SubRoutine_1();
void SubRoutine_2();
void SubRoutine_3();

/*L1*/
void SubRoutine_1( )
{
    WER_LineWay_C(1,1,20,0,0,0,1.000);
    WER_Around(25,-25,1,1,0);
    WER_LineWay_T(20,0,0,0,2.600);
    {int i_5;for(i_5=0;i_5< 10 ;i_5++)
    {
        WER_SetMotor(-15,15,0.100);
        WER_SetMotor(15,-15,0.100);
    }}
    /* do done */
    
}

/*L2*/
void SubRoutine_2( )
{
    SetMoto(2,100);
    wait( 100.000000 );
    /* DO DONE */
}

/*epf*/
void SubRoutine_3( )
{
    while(gi_2 >= 1)
    {
        rom_1 = ReadEEPROM(0);

        if(  rom_1 == 2000)
        {
            rom_1 = ReadEEPROM(1);

            if(  rom_1 == 2000)
            {
                rom_1 = ReadEEPROM(2);

                if(  rom_1 == 2000)
                {
                    rom_1 = ReadEEPROM(3);

                    if(  rom_1 == 2000)
                    {
                        rom_1 = ReadEEPROM(4);

                        if(  rom_1 == 2000)
                        {
                            rom_1 = ReadEEPROM(5);

                            if(  rom_1 == 2000)
                            {
                                rom_1 = ReadEEPROM(6);

                                if(  rom_1 == 2000)
                                {
                                    rom_1 = ReadEEPROM(7);

                                    if(  rom_1 == 2000)
                                    {
                                        rom_1 = ReadEEPROM(8);

                                        if(  rom_1 == 2000)
                                        {
                                            rom_1 = ReadEEPROM(9);

                                            if(  rom_1 == 2000)
                                            {
                                                rom_1 = ReadEEPROM(10);

                                                if(  rom_1 == 2000)
                                                {
                                                    rom_1 = ReadEEPROM(11);

                                                    if(  rom_1 == 2000)
                                                    {
                                                        rom_1 = ReadEEPROM(12);

                                                        if(  rom_1 == 2000)
                                                        {
                                                            rom_1 = ReadEEPROM(13);

                                                            if(  rom_1 == 2000)
                                                            {
                                                                rom_1 = ReadEEPROM(14);

                                                                if(  rom_1 == 2000)
                                                                {
                                                                    rom_1 = ReadEEPROM(15);

                                                                    if(  rom_1 == 2000)
                                                                    {
                                                                        rom_1 = ReadEEPROM(16);

                                                                        if(  rom_1 == 2000)
                                                                        {
                                                                            
                                                                        }
                                                                        else
                                                                        {
                                                                            while(1)
                                                                            {
                                                                                printf( "bug\n\n\n\n\n\n\n" );
                                                                                SetMoto( 0 , 0 );
                                                                                SetMoto( 1 , 0 );
                                                                                SetMoto( 2 , 0 );
                                                                                SetMoto( 3 , 0 );		
                                                                            }
                                                                        }
                                                                    }
                                                                    else
                                                                    {
                                                                        while(1)
                                                                        {
                                                                            printf( "bug\n\n\n\n\n\n\n" );
                                                                            SetMoto( 0 , 0 );
                                                                            SetMoto( 1 , 0 );
                                                                            SetMoto( 2 , 0 );
                                                                            SetMoto( 3 , 0 );		
                                                                        }
                                                                    }
                                                                }
                                                                else
                                                                {
                                                                    while(1)
                                                                    {
                                                                        printf( "bug\n\n\n\n\n\n\n" );
                                                                        SetMoto( 0 , 0 );
                                                                        SetMoto( 1 , 0 );
                                                                        SetMoto( 2 , 0 );
                                                                        SetMoto( 3 , 0 );		
                                                                    }
                                                                }
                                                            }
                                                            else
                                                            {
                                                                while(1)
                                                                {
                                                                    printf( "bug\n\n\n\n\n\n\n" );
                                                                    SetMoto( 0 , 0 );
                                                                    SetMoto( 1 , 0 );
                                                                    SetMoto( 2 , 0 );
                                                                    SetMoto( 3 , 0 );		
                                                                }
                                                            }
                                                        }
                                                        else
                                                        {
                                                            while(1)
                                                            {
                                                                printf( "bug\n\n\n\n\n\n\n" );
                                                                SetMoto( 0 , 0 );
                                                                SetMoto( 1 , 0 );
                                                                SetMoto( 2 , 0 );
                                                                SetMoto( 3 , 0 );		
                                                            }
                                                        }
                                                    }
                                                    else
                                                    {
                                                        while(1)
                                                        {
                                                            printf( "bug\n\n\n\n\n\n\n" );
                                                            SetMoto( 0 , 0 );
                                                            SetMoto( 1 , 0 );
                                                            SetMoto( 2 , 0 );
                                                            SetMoto( 3 , 0 );		
                                                        }
                                                    }
                                                }
                                                else
                                                {
                                                    while(1)
                                                    {
                                                        printf( "bug\n\n\n\n\n\n\n" );
                                                        SetMoto( 0 , 0 );
                                                        SetMoto( 1 , 0 );
                                                        SetMoto( 2 , 0 );
                                                        SetMoto( 3 , 0 );		
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                while(1)
                                                {
                                                    printf( "bug\n\n\n\n\n\n\n" );
                                                    SetMoto( 0 , 0 );
                                                    SetMoto( 1 , 0 );
                                                    SetMoto( 2 , 0 );
                                                    SetMoto( 3 , 0 );		
                                                }
                                            }
                                        }
                                        else
                                        {
                                            while(1)
                                            {
                                                printf( "bug\n\n\n\n\n\n\n" );
                                                SetMoto( 0 , 0 );
                                                SetMoto( 1 , 0 );
                                                SetMoto( 2 , 0 );
                                                SetMoto( 3 , 0 );		
                                            }
                                        }
                                    }
                                    else
                                    {
                                        while(1)
                                        {
                                            printf( "bug\n\n\n\n\n\n\n" );
                                            SetMoto( 0 , 0 );
                                            SetMoto( 1 , 0 );
                                            SetMoto( 2 , 0 );
                                            SetMoto( 3 , 0 );		
                                        }
                                    }
                                }
                                else
                                {
                                    while(1)
                                    {
                                        printf( "bug\n\n\n\n\n\n\n" );
                                        SetMoto( 0 , 0 );
                                        SetMoto( 1 , 0 );
                                        SetMoto( 2 , 0 );
                                        SetMoto( 3 , 0 );		
                                    }
                                }
                            }
                            else
                            {
                                while(1)
                                {
                                    printf( "bug\n\n\n\n\n\n\n" );
                                    SetMoto( 0 , 0 );
                                    SetMoto( 1 , 0 );
                                    SetMoto( 2 , 0 );
                                    SetMoto( 3 , 0 );		
                                }
                            }
                        }
                        else
                        {
                            while(1)
                            {
                                printf( "bug\n\n\n\n\n\n\n" );
                                SetMoto( 0 , 0 );
                                SetMoto( 1 , 0 );
                                SetMoto( 2 , 0 );
                                SetMoto( 3 , 0 );		
                            }
                        }
                    }
                    else
                    {
                        while(1)
                        {
                            printf( "bug\n\n\n\n\n\n\n" );
                            SetMoto( 0 , 0 );
                            SetMoto( 1 , 0 );
                            SetMoto( 2 , 0 );
                            SetMoto( 3 , 0 );		
                        }
                    }
                }
                else
                {
                    while(1)
                    {
                        printf( "bug\n\n\n\n\n\n\n" );
                        SetMoto( 0 , 0 );
                        SetMoto( 1 , 0 );
                        SetMoto( 2 , 0 );
                        SetMoto( 3 , 0 );		
                    }
                }
            }
            else
            {
                while(1)
                {
                    printf( "bug\n\n\n\n\n\n\n" );
                    SetMoto( 0 , 0 );
                    SetMoto( 1 , 0 );
                    SetMoto( 2 , 0 );
                    SetMoto( 3 , 0 );		
                }
            }
        }
        else
        {
            while(1)
            {
                printf( "bug\n\n\n\n\n\n\n" );
                SetMoto( 0 , 0 );
                SetMoto( 1 , 0 );
                SetMoto( 2 , 0 );
                SetMoto( 3 , 0 );		
            }
        }
    }
}

void main()
{
    WER_InitRobot_5(0,1.000000,1,1.000000,0,1,2,3,4,0,0.500000,1,1);
    WER_next();		
    WER_SetMotor_L(0,"<",700,100,100,0);
    WER_LineWay_T(60,0,0,1,5.000);
    SubRoutine_1 ();		
    
    WER_SetMotor(-20,-20,0.100);
    if(gi_1 == 1)
    {
    }
    else
    {
    SubRoutine_2 ();		
    
    }
    WER_LineWay_C(1,1,20,0,0,0,2.000);
    WER_Around(20,-20,1,1,0);

}
void task_1()
{
    resettime();		
    while(1)
    {
        tim_1 =seconds();		
        gi_1 = tim_1 / 60;
        gi_2 = tim_1 / 10;
        printf( "tim_1=%f\ngi_1=%d\nrom_1=%d\n\n\n\n\n",tim_1,gi_1,rom_1 );
    }
}
void task_2()
{
    while(1)
    {
        SubRoutine_3 ();		
        
    }
}
void task_3()
{
}
void task_4()
{
}
void task_5()
{
}
void task_6()
{
}
void task_7()
{
}
void task_8()
{
}
void task_9()
{
}
//2013DUODUOuserA0905