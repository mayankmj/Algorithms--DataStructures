#include <stdio.h>
// #include <stdint.h>
// #include <stdint>

typedef uint32_t uint32;
int main() {
    // Write C code here
    uint32 gpio_id, gpio_num,idx;
    gpio_id = 0x106;
    idx =1;
    if ((gpio_id>>8)== idx)
    {
        gpio_num = gpio_id & 0x000000FF;
        printf("gpio_num = 0x%0x      \t",gpio_id);
        printf("gpio_num = 0x%0x",gpio_num);
    // printf("Hello world");
    }
    return 0;
}