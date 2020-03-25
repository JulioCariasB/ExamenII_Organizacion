// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VEjer1.h for the primary calling header

#ifndef _VEjer1_Ejer1_H_
#define _VEjer1_Ejer1_H_

#include "verilated.h"
#include "VEjer1__Dpi.h"

class VEjer1__Syms;
class VEjer1_AsyncROM;

//----------

VL_MODULE(VEjer1_Ejer1) {
  public:
    // CELLS
    VEjer1_AsyncROM*   	cache_mem;
    
    // PORTS
    VL_OUT8(hit,0,0);
    VL_IN(addr,31,0);
    VL_OUT(data,31,0);
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    VEjer1__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VEjer1_Ejer1& operator= (const VEjer1_Ejer1&);  ///< Copying not allowed
    VEjer1_Ejer1(const VEjer1_Ejer1&);  ///< Copying not allowed
  public:
    VEjer1_Ejer1(const char* name="TOP");
    ~VEjer1_Ejer1();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VEjer1__Syms* symsp, bool first);
  private:
    void _ctor_var_reset();
} VL_ATTR_ALIGNED(128);

#endif // guard
