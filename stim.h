#include "systemc.h"
SC_MODULE(stim) {
    sc_out<bool> A,B;
    sc_in<bool> CLK;

    void do_stim() {
        while(true) {
            A.write(false);
            B.write(false);
            wait();
            A.write(true);
            B.write(false);
            wait();
            A.write(false);
            B.write(true);
            wait();
            A.write(true);
            B.write(true);
            wait();
        }
    }

    SC_CTOR(stim) {
        SC_THREAD(do_stim);
        sensitive << CLK.pos();
    }
};
