
#ifndef INPOUT32_HELPER_H
#define INPOUT32_HELPER_H

#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32

#ifdef __cplusplus
extern "C" {
#endif

int OpenInpOut32(void);
void CloseInpOut32(void);
void outportb(unsigned short PortAddress, unsigned short Data);
unsigned char inportb(unsigned short PortAddress);
void InpSleep(int usec);

#ifdef __cplusplus
}
#endif

#endif /*INPOUT32_HELPER_H*/
#endif