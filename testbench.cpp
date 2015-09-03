#include "systemc.h"
#include "nand.h"
#include "stim.h"
#include "mon.h"

int sc_main (int argc, char* argv[]) {
    sc_signal<bool> sigA, sigB, sigC;
    sc_clock testCLK("CLK", 10, SC_NS);

    stim Stim1("Stimulus");
    Stim1.A(sigA);
    Stim1.B(sigB);
    Stim1.CLK(testCLK);

    nand Nand1("NAND");
    Nand1.A(sigA);
    Nand1.B(sigB);
    Nand1.C(sigC);

    mon Mon1("Monitor");
    Mon1.A(sigA);
    Mon1.B(sigB);
    Mon1.C(sigC);

    sc_start(30, SC_NS);

    return 0;
}
