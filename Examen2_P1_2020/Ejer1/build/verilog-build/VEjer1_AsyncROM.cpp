// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VEjer1.h for the primary calling header

#include "VEjer1_AsyncROM.h"   // For This
#include "VEjer1__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VEjer1_AsyncROM) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VEjer1_AsyncROM::__Vconfigure(VEjer1__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VEjer1_AsyncROM::~VEjer1_AsyncROM() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VEjer1_AsyncROM::_combo__TOP__Ejer1__cache_mem__1(VEjer1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VEjer1_AsyncROM::_combo__TOP__Ejer1__cache_mem__1\n"); );
    VEjer1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Ejer1__cache_mem.read_data__out__out0 
	= vlSymsp->TOP__Ejer1__cache_mem.memory[(0x3ffU 
						 & (vlTOPp->addr 
						    >> 2U))];
}

void VEjer1_AsyncROM::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VEjer1_AsyncROM::_ctor_var_reset\n"); );
    // Body
    __PVT__addr = VL_RAND_RESET_I(10);
    __PVT__en = VL_RAND_RESET_I(1);
    __PVT__read_data = VL_RAND_RESET_Q(53);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    memory[__Vi0] = VL_RAND_RESET_Q(53);
    }}
    read_data__out = VL_RAND_RESET_Q(53);
    read_data__en = VL_RAND_RESET_Q(53);
    read_data__out__out0 = VL_RAND_RESET_Q(53);
}
