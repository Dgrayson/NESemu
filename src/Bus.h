#include <cstdint>

class Bus
{
private:
    /* data */
public:
    Bus(/* args */);
    ~Bus();

    uint8_t ram[2048]; 

    uint8_t Read(uint16_t addr); 
    void Write(uint16_t addr, uint8_t data); 
};

Bus::Bus(/* args */)
{
}

Bus::~Bus()
{
}
