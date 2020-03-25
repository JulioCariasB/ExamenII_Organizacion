// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VEjer1.h for the primary calling header

#include "VEjer1_Ejer1.h"      // For This
#include "VEjer1__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VEjer1_Ejer1) {
    VL_CELL (cache_mem, VEjer1_AsyncROM);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VEjer1_Ejer1::__Vconfigure(VEjer1__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VEjer1_Ejer1::~VEjer1_Ejer1() {
}

//--------------------
// Internal Methods

void VEjer1_Ejer1::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VEjer1_Ejer1::_ctor_var_reset\n"); );
    // Body
    addr = VL_RAND_RESET_I(32);
    data = VL_RAND_RESET_I(32);
    hit = VL_RAND_RESET_I(1);
}
