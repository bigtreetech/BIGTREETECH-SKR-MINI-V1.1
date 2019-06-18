/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * HAL for stm32duino.com based on Libmaple and compatible (STM32F1)
 */

/**
 * Define SPI Pins: SCK, MISO, MOSI, SS
 *
 * Any PIN can be used for Chip Select (SS)
 */
 #ifdef _SPI1

    #define SCK_PIN   PA5
    #define MISO_PIN  PA6
    #define MOSI_PIN  PA7
    #define SS_PIN    PA4

#else

  #define SCK_PIN          PB3
  #define MISO_PIN         PB4
  #define MOSI_PIN         PB5
  #define SS_PIN           PA15  // Chip select for SD card used by Marlin

#endif