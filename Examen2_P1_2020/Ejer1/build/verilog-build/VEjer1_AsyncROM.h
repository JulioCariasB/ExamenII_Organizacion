// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VEjer1.h for the primary calling header

#ifndef _VEjer1_AsyncROM_H_
#define _VEjer1_AsyncROM_H_

#include "verilated.h"
#include "VEjer1__Dpi.h"

class VEjer1__Syms;

//----------

VL_MODULE(VEjer1_AsyncROM) {
  public:
    
    // PORTS
    VL_IN8(__PVT__en,0,0);
    VL_IN16(__PVT__addr,9,0);
    VL_IN64(__PVT__read_data,52,0);
    VL_OUT64(read_data__out,52,0);
    VL_OUT64(read_data__en,52,0);
    
    // LOCAL SIGNALS
    VL_SIG64(memory[1024],52,0);
    
    // LOCAL VARIABLES
    VL_SIG64(read_data__out__out0,52,0);
    
    // INTERNAL VARIABLES
  private:
    VEjer1__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VEjer1_AsyncROM& operator= (const VEjer1_AsyncROM&);  ///< Copying not allowed
    VEjer1_AsyncROM(const VEjer1_AsyncROM&);  ///< Copying not allowed
  public:
    VEjer1_AsyncROM(const char* name="TOP");
    ~VEjer1_AsyncROM();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VEjer1__Syms* symsp, bool first);
    static void _combo__TOP__Ejer1__cache_mem__1(VEjer1__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
} VL_ATTR_ALIGNED(128);

#endif // guard
