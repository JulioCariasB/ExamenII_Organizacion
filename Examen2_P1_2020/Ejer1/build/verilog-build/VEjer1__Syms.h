// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VEjer1__Syms_H_
#define _VEjer1__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VEjer1.h"
#include "VEjer1_Ejer1.h"
#include "VEjer1_AsyncROM.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class VEjer1__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VEjer1*                        TOPp;
    VEjer1_Ejer1                   TOP__Ejer1;
    VEjer1_AsyncROM                TOP__Ejer1__cache_mem;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_Ejer1__cache_mem;
    
    // CREATORS
    VEjer1__Syms(VEjer1* topp, const char* namep);
    ~VEjer1__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
