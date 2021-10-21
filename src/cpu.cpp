#include "cpu.h"

#include <iostream>


CPU::CPU()
{
    
}

void CPU::init(){ 

    memoryMap[0x4015] = 0;  
    memoryMap[0x4017] = 0; 

    for(int i = 0x4000; i < 0x400F; i++)
    {
        memoryMap[i] = 0; 
    }

    for(int i = 0x4010; i < 0x4013; i++)
    {
        memoryMap[i] = 0; 
    }

    
}

void CPU::Decode(){
    while(true)
    {
        
    }
}