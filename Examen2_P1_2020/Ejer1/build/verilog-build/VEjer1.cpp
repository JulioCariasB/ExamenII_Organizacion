// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VEjer1.h for the primary calling header

#include "VEjer1.h"            // For This
#include "VEjer1__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VEjer1) {
    VEjer1__Syms* __restrict vlSymsp = __VlSymsp = new VEjer1__Syms(this, name());
    VEjer1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL (Ejer1, VEjer1_Ejer1);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VEjer1::__Vconfigure(VEjer1__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VEjer1::~VEjer1() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VEjer1::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VEjer1::eval\n"); );
    VEjer1__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VEjer1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void VEjer1::_eval_initial_loop(VEjer1__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VEjer1::_combo__TOP__1(VEjer1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEjer1::_combo__TOP__1\n"); );
    VEjer1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->data = (IData)(vlSymsp->TOP__Ejer1__cache_mem.read_data__out__out0);
    vlTOPp->hit = ((IData)((vlSymsp->TOP__Ejer1__cache_mem.read_data__out__out0 
			    >> 0x34U)) & ((0xfffffU 
					   & (IData)(
						     (vlSymsp->TOP__Ejer1__cache_mem.read_data__out__out0 
						      >> 0x20U))) 
					  == (0xfffffU 
					      & (vlTOPp->addr 
						 >> 0xcU))));
}

void VEjer1::_eval(VEjer1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEjer1::_eval\n"); );
    VEjer1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Ejer1__cache_mem._combo__TOP__Ejer1__cache_mem__1(vlSymsp);
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VEjer1::_eval_initial(VEjer1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEjer1::_eval_initial\n"); );
    VEjer1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VEjer1::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEjer1::final\n"); );
    // Variables
    VEjer1__Syms* __restrict vlSymsp = this->__VlSymsp;
    VEjer1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VEjer1::_eval_settle(VEjer1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEjer1::_eval_settle\n"); );
    VEjer1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Ejer1__cache_mem._combo__TOP__Ejer1__cache_mem__1(vlSymsp);
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VEjer1::_change_request(VEjer1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEjer1::_change_request\n"); );
    VEjer1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VEjer1::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEjer1::_eval_debug_assertions\n"); );
}
#endif // VL_DEBUG

void VEjer1::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEjer1::_ctor_var_reset\n"); );
    // Body
    addr = VL_RAND_RESET_I(32);
    data = VL_RAND_RESET_I(32);
    hit = VL_RAND_RESET_I(1);
}
