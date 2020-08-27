/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.4
        Device            :  PIC18F46K20
        Driver Version    :  2.00
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include "mcc_generated_files/mcc.h"
#include "mcc_generated_files/examples/i2c_master_example.h"

/*
                         Main application
 */
void main(void){
    // Initialize the device
    SYSTEM_Initialize();

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global and Peripheral Interrupts
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    
    //Include this header file
    //#include "mcc_generated_files/examples/i2c_master_example.h"

    #define MPU6050_ADDR        0x69 

    #define XG_OFFS_TC          0x00
    #define YG_OFFS_TC          0x01
    #define ZG_OFFS_TC          0x02
    #define X_FINE_GAIN         0x03
    #define Y_FINE_GAIN         0x04
    #define Z_FINE_GAIN         0x05
    #define XA_OFFS_H           0x06 
    #define XA_OFFS_L_TC        0x07
    #define YA_OFFS_H           0x08 
    #define YA_OFFS_L_TC        0x09
    #define ZA_OFFS_H           0x0A 
    #define ZA_OFFS_L_TC        0x0B
    #define XG_OFFS_USRH        0x13
    #define XG_OFFS_USRL        0x14
    #define YG_OFFS_USRH        0x15
    #define YG_OFFS_USRL        0x16
    #define ZG_OFFS_USRH        0x17
    #define ZG_OFFS_USRL        0x18
    #define SMPLRT_DIV          0x19
    #define CONFIG              0x1A
    #define GYRO_CONFIG         0x1B
    #define ACCEL_CONFIG        0x1C
    #define FF_THR              0x1D
    #define FF_DUR              0x1E
    #define MOT_THR             0x1F
    #define MOT_DUR             0x20
    #define ZRMOT_THR           0x21
    #define ZRMOT_DUR           0x22
    #define FIFO_EN             0x23
    #define I2C_MST_CTRL        0x24
    #define I2C_SLV0_ADDR       0x25
    #define I2C_SLV0_REG        0x26
    #define I2C_SLV0_CTRL       0x27
    #define I2C_SLV1_ADDR       0x28
    #define I2C_SLV1_REG        0x29
    #define I2C_SLV1_CTRL       0x2A
    #define I2C_SLV2_ADDR       0x2B
    #define I2C_SLV2_REG        0x2C
    #define I2C_SLV2_CTRL       0x2D
    #define I2C_SLV3_ADDR       0x2E
    #define I2C_SLV3_REG        0x2F
    #define I2C_SLV3_CTRL       0x30
    #define I2C_SLV4_ADDR       0x31
    #define I2C_SLV4_REG        0x32
    #define I2C_SLV4_DO         0x33
    #define I2C_SLV4_CTRL       0x34
    #define I2C_SLV4_DI         0x35
    #define I2C_MST_STATUS      0x36
    #define INT_PIN_CFG         0x37
    #define INT_ENABLE          0x38
    #define DMP_INT_STATUS      0x39
    #define INT_STATUS          0x3A
    #define ACCEL_XOUT_H        0x3B
    #define ACCEL_XOUT_L        0x3C
    #define ACCEL_YOUT_H        0x3D
    #define ACCEL_YOUT_L        0x3E
    #define ACCEL_ZOUT_H        0x3F
    #define ACCEL_ZOUT_L        0x40
    #define TEMP_OUT_H          0x41
    #define TEMP_OUT_L          0x42
    #define GYRO_XOUT_H         0x43
    #define GYRO_XOUT_L         0x44
    #define GYRO_YOUT_H         0x45
    #define GYRO_YOUT_L         0x46
    #define GYRO_ZOUT_H         0x47
    #define GYRO_ZOUT_L         0x48
    #define EXT_SENS_DATA_00    0x49
    #define EXT_SENS_DATA_01    0x4A
    #define EXT_SENS_DATA_02    0x4B
    #define EXT_SENS_DATA_03    0x4C
    #define EXT_SENS_DATA_04    0x4D
    #define EXT_SENS_DATA_05    0x4E
    #define EXT_SENS_DATA_06    0x4F
    #define EXT_SENS_DATA_07    0x50
    #define EXT_SENS_DATA_08    0x51
    #define EXT_SENS_DATA_09    0x52
    #define EXT_SENS_DATA_10    0x53
    #define EXT_SENS_DATA_11    0x54
    #define EXT_SENS_DATA_12    0x55
    #define EXT_SENS_DATA_13    0x56
    #define EXT_SENS_DATA_14    0x57
    #define EXT_SENS_DATA_15    0x58
    #define EXT_SENS_DATA_16    0x59
    #define EXT_SENS_DATA_17    0x5A
    #define EXT_SENS_DATA_18    0x5B
    #define EXT_SENS_DATA_19    0x5C
    #define EXT_SENS_DATA_20    0x5D
    #define EXT_SENS_DATA_21    0x5E
    #define EXT_SENS_DATA_22    0x5F
    #define EXT_SENS_DATA_23    0x60
    #define MOT_DETECT_STATUS   0x61
    #define I2C_SLV0_DO         0x63
    #define I2C_SLV1_DO         0x64
    #define I2C_SLV2_DO         0x65
    #define I2C_SLV3_DO         0x66
    #define I2C_MST_DELAY_CTRL  0x67
    #define SIGNAL_PATH_RESET   0x68
    #define MOT_DETECT_CTRL     0x69
    #define USER_CTRL           0x6A
    #define PWR_MGMT_1          0x6B
    #define PWR_MGMT_2          0x6C
    #define BANK_SEL            0x6D
    #define MEM_START_ADDR      0x6E
    #define MEM_R_W             0x6F
    #define DMP_CFG_1           0x70
    #define DMP_CFG_2           0x71
    #define FIFO_COUNTH         0x72
    #define FIFO_COUNTL         0x73
    #define FIFO_R_W            0x74
    #define WHO_AM_I            0x75
    
    uint16_t X_Data;
    uint16_t Y_Data;
    uint16_t Z_Data;
    uint16_t gX_Data;
    uint16_t gY_Data;
    uint16_t gZ_Data;
    I2C_Write1ByteRegister(MPU6050_ADDR, SMPLRT_DIV, 0x07);             // 1KHz sample rate 
    I2C_Write1ByteRegister(MPU6050_ADDR, PWR_MGMT_1, 0x01);             // X axis gyroscope reference frequency
    I2C_Write1ByteRegister(MPU6050_ADDR, CONFIG, 0x00);                 // Fs = 8KHz
    I2C_Write1ByteRegister(MPU6050_ADDR, GYRO_CONFIG, 0x18);            // Full scale range +/- 2000 degree/C
    I2C_Write1ByteRegister(MPU6050_ADDR, INT_ENABLE, 0x01);             // interrupt enable
    
    while (1){                                                          // Endlosscheife
        I2C_Write1ByteRegister(MPU6050_ADDR, SMPLRT_DIV, 0x07);         // 1KHz sample rate 
        I2C_Write1ByteRegister(MPU6050_ADDR, PWR_MGMT_1, 0x01);         // X axis gyroscope reference frequency
        I2C_Write1ByteRegister(MPU6050_ADDR, CONFIG, 0x00);             // Fs = 8KHz
        I2C_Write1ByteRegister(MPU6050_ADDR, GYRO_CONFIG, 0x18);        // Full scale range +/- 2000 degree/C
        I2C_Write1ByteRegister(MPU6050_ADDR, INT_ENABLE, 0x01);         // interrupt enable
        
        X_Data = I2C_Read2ByteRegister(MPU6050_ADDR,ACCEL_XOUT_H);      // "X_Data" gleich I2C read (X Lage-Register)
        Y_Data = I2C_Read2ByteRegister(MPU6050_ADDR,ACCEL_YOUT_H);      // "Y_Data" gleich I2C read (Y Lage-Register)
        Z_Data = I2C_Read2ByteRegister(MPU6050_ADDR,ACCEL_ZOUT_H);      // "Z_Data" gleich I2C read (Z Lage-Register)
        gX_Data = I2C_Read2ByteRegister(MPU6050_ADDR,GYRO_XOUT_H);      // "X_Data" gleich I2C read (X Beschleunigung-Register)
        gY_Data = I2C_Read2ByteRegister(MPU6050_ADDR,GYRO_YOUT_H);      // "Y_Data" gleich I2C read (Y Beschleunigung-Register)
        gZ_Data = I2C_Read2ByteRegister(MPU6050_ADDR,GYRO_ZOUT_H);      // "Z_Data" gleich I2C read (Z Beschleunigung-Register)
        printf("X= %d\r\n",X_Data);                                     // schreibt den Inhalt von "X_Data" an UART
        printf("Y= %d\r\n",Y_Data);                                     // schreibt den Inhalt von "Y_Data" an UART
        printf("Z= %d\r\n",Z_Data);                                     // schreibt den Inhalt von "Z_Data" an UART
        printf("gX= %d\r\n",gX_Data);                                   // schreibt den Inhalt von "gX_Data" an UART
        printf("gY= %d\r\n",gY_Data);                                   // schreibt den Inhalt von "gY_Data" an UART
        printf("gZ= %d\r\n",gZ_Data);                                   // schreibt den Inhalt von "gZ_Data" an UART
        printf("\r\n");                                                 // schreibt Leerzeile an UART
        __delay_ms(500);                                                // warte 500ms
    }                                                                   // 
}                                                                       // 
/**
 End of File
*/