#include <gb/gb.h>
#include <gb/cgb.h>
#include "LaroldsJubilantJunkyard.h"

void main(void)
{
    DISPLAY_ON;
    SHOW_BKG;

    // Populate VRAM with our tile data
    set_bkg_data(0,LaroldsJubilantJunkyard_tileCount,LaroldsJubilantJunkyard_data);

    // Set the actual background tiles
    set_bkg_tiles(0,0,20,18,LaroldsJubilantJunkyard_map_plane0);

    // The "LaroldsJubilantJunkyard_pallette" color palette is defined in LaroldsJubilantJunkyard.c
    set_bkg_palette(0,1,LaroldsJubilantJunkyard_pallette);

    // Set the attributes using VRAM bank 1
    // Specifically, which color palette to use
    VBK_REG=1;
    set_bkg_tiles(0,0,20,18,LaroldsJubilantJunkyard_map_plane1);

    // Switch back to bank 0 to prevent accidentally writing to bank 1
    VBK_REG=0;
}
