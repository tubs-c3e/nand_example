#include "systemc.h"
SC_MODULE(mon) {
    sc_in<bool> A,B,C;

    void do_mon() {
        cout << sc_time_stamp() << ": A = " << A << ", B = " << B << ", C = " << C << endl;
    }

    SC_CTOR(mon) {
        SC_METHOD(do_mon);
        sensitive << A << B << C; 
    }
};
