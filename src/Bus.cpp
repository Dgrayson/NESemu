#include "Bus.h"
#include <cstdint>

void Bus::Write(uint16_t addr, uint8_t data){
    ram[addr] = data; 
}

uint8_t Bus::Read(uint16_t addr)
{
    if(addr >= 0x0000 && addr <= 0xFFFF)
        return ram[addr]; 
}