// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VEjer1__Syms.h"
#include "VEjer1.h"
#include "VEjer1_Ejer1.h"
#include "VEjer1_AsyncROM.h"

// FUNCTIONS
VEjer1__Syms::VEjer1__Syms(VEjer1* topp, const char* namep)
	// Setup locals
	: __Vm_namep(namep)
	, __Vm_didInit(false)
	// Setup submodule names
	, TOP__Ejer1                     (Verilated::catName(topp->name(),"Ejer1"))
	, TOP__Ejer1__cache_mem          (Verilated::catName(topp->name(),"Ejer1.cache_mem"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->Ejer1                     = &TOP__Ejer1;
    TOPp->Ejer1->cache_mem          = &TOP__Ejer1__cache_mem;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__Ejer1.__Vconfigure(this, true);
    TOP__Ejer1__cache_mem.__Vconfigure(this, true);
    // Setup scope names
    __Vscope_Ejer1__cache_mem.configure(this,name(),"Ejer1.cache_mem");
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
	__Vscope_Ejer1__cache_mem.varInsert(__Vfinal,"memory", &(TOP__Ejer1__cache_mem.memory), VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,2 ,52,0 ,1023,0);
    }
}
