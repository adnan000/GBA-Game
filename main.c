#include <gb/gb.h>
#include <stdio.h>
#include "gamelife.c"

void main() {
    UINT8 sprite_index =0;

    set_sprite_data(0, 2, XO);
    set_sprite_tile(0,0);
    move_sprite(0, 88, 78);
    SHOW_SPRITES;

    while (1)
    {
        if (sprite_index == 0){
            sprite_index = 1;
        }else
        {
            sprite_index = 0;
        }
        set_sprite_tile(0, sprite_index);
        delay(100);
        scroll_sprite(0,3,10);
    }
    
} /*This is comment 
