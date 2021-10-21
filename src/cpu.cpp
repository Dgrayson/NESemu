#include "cpu.h"

#include <iostream>
#include <cstdint>


CPU::CPU()
{
    
}

void CPU::Decode(){
    while(true)
    {

        pc++; 

        switch(op)
        {

        }
    }
}

void CPU::mem_read(){
    bus.Read(); 
}

void CPU::mem_write(){

}