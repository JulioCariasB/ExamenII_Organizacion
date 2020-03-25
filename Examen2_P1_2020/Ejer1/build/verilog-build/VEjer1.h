// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VEjer1_H_
#define _VEjer1_H_

#include "verilated.h"
#include "VEjer1__Dpi.h"

class VEjer1__Syms;
class VEjer1_Ejer1;

//----------

VL_MODULE(VEjer1) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    VEjer1_Ejer1*      	Ejer1;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_OUT8(hit,0,0);
    VL_IN(addr,31,0);
    VL_OUT(data,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VEjer1__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VEjer1& operator= (const VEjer1&);  ///< Copying not allowed
    VEjer1(const VEjer1&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VEjer1(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VEjer1();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VEjer1__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VEjer1__Syms* symsp, bool first);
  private:
    static QData _change_request(VEjer1__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(VEjer1__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(VEjer1__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VEjer1__Syms* __restrict vlSymsp);
    static void _eval_settle(VEjer1__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
