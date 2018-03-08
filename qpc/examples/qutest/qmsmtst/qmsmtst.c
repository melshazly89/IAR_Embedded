/*$file${.::qmsmtst.c} #####################################################*/
/*
* Model: qmsmtst.qm
* File:  C:/qp_lab/qpc/examples/qutest/qmsmtst/qmsmtst.c
*
* This code has been generated by QM tool (https://state-machine.com/qm).
* DO NOT EDIT THIS FILE MANUALLY. All your changes will be lost.
*
* This code is covered by the following QP license:
* License #   : QPC-EVAL-171231
* Issued to   : Company/individual evaluating the QP/C framework
* Framework(s): qpc
* Support ends: 2017-12-31
* Product(s)  :
* This license is available only for evaluation purposes and
* the generated code is still licensed under the terms of GPL.
* Please submit request for extension of the evaluaion period at:
* https://state-machine.com/licensing/#RequestForm
*/
/*$endhead${.::qmsmtst.c} ##################################################*/
#include "qpc.h"
#include "qmsmtst.h"

/*$declare${SMs::QMsmTst} ##################################################*/
/*${SMs::QMsmTst} ..........................................................*/
typedef struct {
/* protected: */
    QMsm super;

/* private: */
    uint8_t foo;
} QMsmTst;

/* protected: */
static QState QMsmTst_initial(QMsmTst * const me, QEvt const * const e);
static QState QMsmTst_s  (QMsmTst * const me, QEvt const * const e);
static QState QMsmTst_s_e(QMsmTst * const me);
static QState QMsmTst_s_x(QMsmTst * const me);
static QState QMsmTst_s_i(QMsmTst * const me);
static QMState const QMsmTst_s_s = {
    (QMState const *)0, /* superstate (top) */
    Q_STATE_CAST(&QMsmTst_s),
    Q_ACTION_CAST(&QMsmTst_s_e),
    Q_ACTION_CAST(&QMsmTst_s_x),
    Q_ACTION_CAST(&QMsmTst_s_i)
};
static QState QMsmTst_s1  (QMsmTst * const me, QEvt const * const e);
static QState QMsmTst_s1_e(QMsmTst * const me);
static QState QMsmTst_s1_x(QMsmTst * const me);
static QState QMsmTst_s1_i(QMsmTst * const me);
static QMState const QMsmTst_s1_s = {
    &QMsmTst_s_s, /* superstate */
    Q_STATE_CAST(&QMsmTst_s1),
    Q_ACTION_CAST(&QMsmTst_s1_e),
    Q_ACTION_CAST(&QMsmTst_s1_x),
    Q_ACTION_CAST(&QMsmTst_s1_i)
};
static QState QMsmTst_s11  (QMsmTst * const me, QEvt const * const e);
static QState QMsmTst_s11_e(QMsmTst * const me);
static QState QMsmTst_s11_x(QMsmTst * const me);
static QMState const QMsmTst_s11_s = {
    &QMsmTst_s1_s, /* superstate */
    Q_STATE_CAST(&QMsmTst_s11),
    Q_ACTION_CAST(&QMsmTst_s11_e),
    Q_ACTION_CAST(&QMsmTst_s11_x),
    Q_ACTION_CAST(0)  /* no intitial tran. */
};
static QState QMsmTst_s2  (QMsmTst * const me, QEvt const * const e);
static QState QMsmTst_s2_e(QMsmTst * const me);
static QState QMsmTst_s2_x(QMsmTst * const me);
static QState QMsmTst_s2_i(QMsmTst * const me);
static QMState const QMsmTst_s2_s = {
    &QMsmTst_s_s, /* superstate */
    Q_STATE_CAST(&QMsmTst_s2),
    Q_ACTION_CAST(&QMsmTst_s2_e),
    Q_ACTION_CAST(&QMsmTst_s2_x),
    Q_ACTION_CAST(&QMsmTst_s2_i)
};
static QState QMsmTst_s21  (QMsmTst * const me, QEvt const * const e);
static QState QMsmTst_s21_e(QMsmTst * const me);
static QState QMsmTst_s21_x(QMsmTst * const me);
static QState QMsmTst_s21_i(QMsmTst * const me);
static QMState const QMsmTst_s21_s = {
    &QMsmTst_s2_s, /* superstate */
    Q_STATE_CAST(&QMsmTst_s21),
    Q_ACTION_CAST(&QMsmTst_s21_e),
    Q_ACTION_CAST(&QMsmTst_s21_x),
    Q_ACTION_CAST(&QMsmTst_s21_i)
};
static QState QMsmTst_s211  (QMsmTst * const me, QEvt const * const e);
static QState QMsmTst_s211_e(QMsmTst * const me);
static QState QMsmTst_s211_x(QMsmTst * const me);
static QMState const QMsmTst_s211_s = {
    &QMsmTst_s21_s, /* superstate */
    Q_STATE_CAST(&QMsmTst_s211),
    Q_ACTION_CAST(&QMsmTst_s211_e),
    Q_ACTION_CAST(&QMsmTst_s211_x),
    Q_ACTION_CAST(0)  /* no intitial tran. */
};
/*$enddecl${SMs::QMsmTst} ##################################################*/

static QMsmTst l_msmtst; /* the only instance of the QMsmTst class */

/* global-scope definitions ---------------------------------------*/
QMsm * const the_msm = (QMsm *)&l_msmtst;    /* the opaque pointer */

/*$define${SMs::QMsmTst_ctor} ##############################################*/
/* Check for the minimum required QP version */
#if ((QP_VERSION < 601) || (QP_VERSION != ((QP_RELEASE^4294967295U) % 0x3E8)))
#error qpc version 6.0.1 or higher required
#endif
/*${SMs::QMsmTst_ctor} .....................................................*/
void QMsmTst_ctor(void) {
    QMsmTst *me = &l_msmtst;
    QMsm_ctor(&me->super, Q_STATE_CAST(&QMsmTst_initial));
}
/*$enddef${SMs::QMsmTst_ctor} ##############################################*/
/*$define${SMs::QMsmTst} ###################################################*/
/*${SMs::QMsmTst} ..........................................................*/
/*${SMs::QMsmTst::SM} ......................................................*/
static QState QMsmTst_initial(QMsmTst * const me, QEvt const * const e) {
    static struct {
        QMState const *target;
        QActionHandler act[4];
    } const tatbl_ = { /* tran-action table */
        &QMsmTst_s2_s, /* target state */
        {
            Q_ACTION_CAST(&QMsmTst_s_e), /* entry */
            Q_ACTION_CAST(&QMsmTst_s2_e), /* entry */
            Q_ACTION_CAST(&QMsmTst_s2_i), /* initial tran. */
            Q_ACTION_CAST(0) /* zero terminator */
        }
    };
    /*${SMs::QMsmTst::SM::initial} */
    (void)e; /* avoid compiler warning */
    me->foo = 0U;
    BSP_display("top-INIT;");

    QS_FUN_DICTIONARY(&QMsmTst_s);
    QS_FUN_DICTIONARY(&QMsmTst_s1);
    QS_FUN_DICTIONARY(&QMsmTst_s11);
    QS_FUN_DICTIONARY(&QMsmTst_s2);
    QS_FUN_DICTIONARY(&QMsmTst_s21);
    QS_FUN_DICTIONARY(&QMsmTst_s211);

    QS_SIG_DICTIONARY(A_SIG, me);
    QS_SIG_DICTIONARY(B_SIG, me);
    QS_SIG_DICTIONARY(C_SIG, me);
    QS_SIG_DICTIONARY(D_SIG, me);
    QS_SIG_DICTIONARY(E_SIG, me);
    QS_SIG_DICTIONARY(F_SIG, me);
    QS_SIG_DICTIONARY(G_SIG, me);
    QS_SIG_DICTIONARY(H_SIG, me);
    QS_SIG_DICTIONARY(I_SIG, me);
    QS_SIG_DICTIONARY(TERMINATE_SIG, me);
    QS_SIG_DICTIONARY(IGNORE_SIG, me);
    return QM_TRAN_INIT(&tatbl_);
}
/*${SMs::QMsmTst::SM::s} ...................................................*/
/*${SMs::QMsmTst::SM::s} */
static QState QMsmTst_s_e(QMsmTst * const me) {
    BSP_display("s-ENTRY;");
    (void)me; /* avoid compiler warning in case 'me' is not used */
    return QM_ENTRY(&QMsmTst_s_s);
}
/*${SMs::QMsmTst::SM::s} */
static QState QMsmTst_s_x(QMsmTst * const me) {
    BSP_display("s-EXIT;");
    (void)me; /* avoid compiler warning in case 'me' is not used */
    return QM_EXIT(&QMsmTst_s_s);
}
/*${SMs::QMsmTst::SM::s::initial} */
static QState QMsmTst_s_i(QMsmTst * const me) {
    static struct {
        QMState const *target;
        QActionHandler act[3];
    } const tatbl_ = { /* tran-action table */
        &QMsmTst_s11_s, /* target state */
        {
            Q_ACTION_CAST(&QMsmTst_s1_e), /* entry */
            Q_ACTION_CAST(&QMsmTst_s11_e), /* entry */
            Q_ACTION_CAST(0) /* zero terminator */
        }
    };
    /*${SMs::QMsmTst::SM::s::initial} */
    BSP_display("s-INIT;");
    return QM_TRAN_INIT(&tatbl_);
}
/*${SMs::QMsmTst::SM::s} */
static QState QMsmTst_s(QMsmTst * const me, QEvt const * const e) {
    QState status_;
    switch (e->sig) {
        /*${SMs::QMsmTst::SM::s::I} */
        case I_SIG: {
            /*${SMs::QMsmTst::SM::s::I::[me->foo]} */
            if (me->foo) {
                me->foo = 0U;
                BSP_display("s-I;");
                status_ = QM_HANDLED();
            }
            else {
                status_ = QM_UNHANDLED();
            }
            break;
        }
        /*${SMs::QMsmTst::SM::s::E} */
        case E_SIG: {
            static struct {
                QMState const *target;
                QActionHandler act[3];
            } const tatbl_ = { /* tran-action table */
                &QMsmTst_s11_s, /* target state */
                {
                    Q_ACTION_CAST(&QMsmTst_s1_e), /* entry */
                    Q_ACTION_CAST(&QMsmTst_s11_e), /* entry */
                    Q_ACTION_CAST(0) /* zero terminator */
                }
            };
            BSP_display("s-E;");
            status_ = QM_TRAN(&tatbl_);
            break;
        }
        /*${SMs::QMsmTst::SM::s::TERMINATE} */
        case TERMINATE_SIG: {
            BSP_exit();
            status_ = QM_HANDLED();
            break;
        }
        default: {
            status_ = QM_SUPER();
            break;
        }
    }
    (void)me; /* avoid compiler warning in case 'me' is not used */
    return status_;
}
/*${SMs::QMsmTst::SM::s::s1} ...............................................*/
/*${SMs::QMsmTst::SM::s::s1} */
static QState QMsmTst_s1_e(QMsmTst * const me) {
    BSP_display("s1-ENTRY;");
    (void)me; /* avoid compiler warning in case 'me' is not used */
    return QM_ENTRY(&QMsmTst_s1_s);
}
/*${SMs::QMsmTst::SM::s::s1} */
static QState QMsmTst_s1_x(QMsmTst * const me) {
    BSP_display("s1-EXIT;");
    (void)me; /* avoid compiler warning in case 'me' is not used */
    return QM_EXIT(&QMsmTst_s1_s);
}
/*${SMs::QMsmTst::SM::s::s1::initial} */
static QState QMsmTst_s1_i(QMsmTst * const me) {
    static struct {
        QMState const *target;
        QActionHandler act[2];
    } const tatbl_ = { /* tran-action table */
        &QMsmTst_s11_s, /* target state */
        {
            Q_ACTION_CAST(&QMsmTst_s11_e), /* entry */
            Q_ACTION_CAST(0) /* zero terminator */
        }
    };
    /*${SMs::QMsmTst::SM::s::s1::initial} */
    BSP_display("s1-INIT;");
    return QM_TRAN_INIT(&tatbl_);
}
/*${SMs::QMsmTst::SM::s::s1} */
static QState QMsmTst_s1(QMsmTst * const me, QEvt const * const e) {
    QState status_;
    switch (e->sig) {
        /*${SMs::QMsmTst::SM::s::s1::I} */
        case I_SIG: {
            BSP_display("s1-I;");
            status_ = QM_HANDLED();
            break;
        }
        /*${SMs::QMsmTst::SM::s::s1::D} */
        case D_SIG: {
            /*${SMs::QMsmTst::SM::s::s1::D::[!me->foo]} */
            if (!me->foo) {
                static struct {
                    QMState const *target;
                    QActionHandler act[3];
                } const tatbl_ = { /* tran-action table */
                    &QMsmTst_s_s, /* target state */
                    {
                        Q_ACTION_CAST(&QMsmTst_s1_x), /* exit */
                        Q_ACTION_CAST(&QMsmTst_s_i), /* initial tran. */
                        Q_ACTION_CAST(0) /* zero terminator */
                    }
                };
                me->foo = 1U;
                BSP_display("s1-D;");
                status_ = QM_TRAN(&tatbl_);
            }
            else {
                status_ = QM_UNHANDLED();
            }
            break;
        }
        /*${SMs::QMsmTst::SM::s::s1::A} */
        case A_SIG: {
            static struct {
                QMState const *target;
                QActionHandler act[4];
            } const tatbl_ = { /* tran-action table */
                &QMsmTst_s1_s, /* target state */
                {
                    Q_ACTION_CAST(&QMsmTst_s1_x), /* exit */
                    Q_ACTION_CAST(&QMsmTst_s1_e), /* entry */
                    Q_ACTION_CAST(&QMsmTst_s1_i), /* initial tran. */
                    Q_ACTION_CAST(0) /* zero terminator */
                }
            };
            BSP_display("s1-A;");
            status_ = QM_TRAN(&tatbl_);
            break;
        }
        /*${SMs::QMsmTst::SM::s::s1::B} */
        case B_SIG: {
            static struct {
                QMState const *target;
                QActionHandler act[2];
            } const tatbl_ = { /* tran-action table */
                &QMsmTst_s11_s, /* target state */
                {
                    Q_ACTION_CAST(&QMsmTst_s11_e), /* entry */
                    Q_ACTION_CAST(0) /* zero terminator */
                }
            };
            BSP_display("s1-B;");
            status_ = QM_TRAN(&tatbl_);
            break;
        }
        /*${SMs::QMsmTst::SM::s::s1::F} */
        case F_SIG: {
            static struct {
                QMState const *target;
                QActionHandler act[5];
            } const tatbl_ = { /* tran-action table */
                &QMsmTst_s211_s, /* target state */
                {
                    Q_ACTION_CAST(&QMsmTst_s1_x), /* exit */
                    Q_ACTION_CAST(&QMsmTst_s2_e), /* entry */
                    Q_ACTION_CAST(&QMsmTst_s21_e), /* entry */
                    Q_ACTION_CAST(&QMsmTst_s211_e), /* entry */
                    Q_ACTION_CAST(0) /* zero terminator */
                }
            };
            BSP_display("s1-F;");
            status_ = QM_TRAN(&tatbl_);
            break;
        }
        /*${SMs::QMsmTst::SM::s::s1::C} */
        case C_SIG: {
            static struct {
                QMState const *target;
                QActionHandler act[4];
            } const tatbl_ = { /* tran-action table */
                &QMsmTst_s2_s, /* target state */
                {
                    Q_ACTION_CAST(&QMsmTst_s1_x), /* exit */
                    Q_ACTION_CAST(&QMsmTst_s2_e), /* entry */
                    Q_ACTION_CAST(&QMsmTst_s2_i), /* initial tran. */
                    Q_ACTION_CAST(0) /* zero terminator */
                }
            };
            BSP_display("s1-C;");
            status_ = QM_TRAN(&tatbl_);
            break;
        }
        default: {
            status_ = QM_SUPER();
            break;
        }
    }
    return status_;
}
/*${SMs::QMsmTst::SM::s::s1::s11} ..........................................*/
/*${SMs::QMsmTst::SM::s::s1::s11} */
static QState QMsmTst_s11_e(QMsmTst * const me) {
    BSP_display("s11-ENTRY;");
    (void)me; /* avoid compiler warning in case 'me' is not used */
    return QM_ENTRY(&QMsmTst_s11_s);
}
/*${SMs::QMsmTst::SM::s::s1::s11} */
static QState QMsmTst_s11_x(QMsmTst * const me) {
    BSP_display("s11-EXIT;");
    (void)me; /* avoid compiler warning in case 'me' is not used */
    return QM_EXIT(&QMsmTst_s11_s);
}
/*${SMs::QMsmTst::SM::s::s1::s11} */
static QState QMsmTst_s11(QMsmTst * const me, QEvt const * const e) {
    QState status_;
    switch (e->sig) {
        /*${SMs::QMsmTst::SM::s::s1::s11::H} */
        case H_SIG: {
            static struct {
                QMState const *target;
                QActionHandler act[4];
            } const tatbl_ = { /* tran-action table */
                &QMsmTst_s_s, /* target state */
                {
                    Q_ACTION_CAST(&QMsmTst_s11_x), /* exit */
                    Q_ACTION_CAST(&QMsmTst_s1_x), /* exit */
                    Q_ACTION_CAST(&QMsmTst_s_i), /* initial tran. */
                    Q_ACTION_CAST(0) /* zero terminator */
                }
            };
            BSP_display("s11-H;");
            status_ = QM_TRAN(&tatbl_);
            break;
        }
        /*${SMs::QMsmTst::SM::s::s1::s11::D} */
        case D_SIG: {
            /*${SMs::QMsmTst::SM::s::s1::s11::D::[me->foo]} */
            if (me->foo) {
                static struct {
                    QMState const *target;
                    QActionHandler act[3];
                } const tatbl_ = { /* tran-action table */
                    &QMsmTst_s1_s, /* target state */
                    {
                        Q_ACTION_CAST(&QMsmTst_s11_x), /* exit */
                        Q_ACTION_CAST(&QMsmTst_s1_i), /* initial tran. */
                        Q_ACTION_CAST(0) /* zero terminator */
                    }
                };
                me->foo = 0U;
                BSP_display("s11-D;");
                status_ = QM_TRAN(&tatbl_);
            }
            else {
                status_ = QM_UNHANDLED();
            }
            break;
        }
        /*${SMs::QMsmTst::SM::s::s1::s11::G} */
        case G_SIG: {
            static struct {
                QMState const *target;
                QActionHandler act[6];
            } const tatbl_ = { /* tran-action table */
                &QMsmTst_s211_s, /* target state */
                {
                    Q_ACTION_CAST(&QMsmTst_s11_x), /* exit */
                    Q_ACTION_CAST(&QMsmTst_s1_x), /* exit */
                    Q_ACTION_CAST(&QMsmTst_s2_e), /* entry */
                    Q_ACTION_CAST(&QMsmTst_s21_e), /* entry */
                    Q_ACTION_CAST(&QMsmTst_s211_e), /* entry */
                    Q_ACTION_CAST(0) /* zero terminator */
                }
            };
            BSP_display("s11-G;");
            status_ = QM_TRAN(&tatbl_);
            break;
        }
        default: {
            status_ = QM_SUPER();
            break;
        }
    }
    return status_;
}
/*${SMs::QMsmTst::SM::s::s2} ...............................................*/
/*${SMs::QMsmTst::SM::s::s2} */
static QState QMsmTst_s2_e(QMsmTst * const me) {
    BSP_display("s2-ENTRY;");
    (void)me; /* avoid compiler warning in case 'me' is not used */
    return QM_ENTRY(&QMsmTst_s2_s);
}
/*${SMs::QMsmTst::SM::s::s2} */
static QState QMsmTst_s2_x(QMsmTst * const me) {
    BSP_display("s2-EXIT;");
    (void)me; /* avoid compiler warning in case 'me' is not used */
    return QM_EXIT(&QMsmTst_s2_s);
}
/*${SMs::QMsmTst::SM::s::s2::initial} */
static QState QMsmTst_s2_i(QMsmTst * const me) {
    static struct {
        QMState const *target;
        QActionHandler act[3];
    } const tatbl_ = { /* tran-action table */
        &QMsmTst_s211_s, /* target state */
        {
            Q_ACTION_CAST(&QMsmTst_s21_e), /* entry */
            Q_ACTION_CAST(&QMsmTst_s211_e), /* entry */
            Q_ACTION_CAST(0) /* zero terminator */
        }
    };
    /*${SMs::QMsmTst::SM::s::s2::initial} */
    BSP_display("s2-INIT;");
    return QM_TRAN_INIT(&tatbl_);
}
/*${SMs::QMsmTst::SM::s::s2} */
static QState QMsmTst_s2(QMsmTst * const me, QEvt const * const e) {
    QState status_;
    switch (e->sig) {
        /*${SMs::QMsmTst::SM::s::s2::I} */
        case I_SIG: {
            /*${SMs::QMsmTst::SM::s::s2::I::[!me->foo]} */
            if (!me->foo) {
                me->foo = 1U;
                BSP_display("s2-I;");
                status_ = QM_HANDLED();
            }
            else {
                status_ = QM_UNHANDLED();
            }
            break;
        }
        /*${SMs::QMsmTst::SM::s::s2::F} */
        case F_SIG: {
            static struct {
                QMState const *target;
                QActionHandler act[4];
            } const tatbl_ = { /* tran-action table */
                &QMsmTst_s11_s, /* target state */
                {
                    Q_ACTION_CAST(&QMsmTst_s2_x), /* exit */
                    Q_ACTION_CAST(&QMsmTst_s1_e), /* entry */
                    Q_ACTION_CAST(&QMsmTst_s11_e), /* entry */
                    Q_ACTION_CAST(0) /* zero terminator */
                }
            };
            BSP_display("s2-F;");
            status_ = QM_TRAN(&tatbl_);
            break;
        }
        /*${SMs::QMsmTst::SM::s::s2::C} */
        case C_SIG: {
            static struct {
                QMState const *target;
                QActionHandler act[4];
            } const tatbl_ = { /* tran-action table */
                &QMsmTst_s1_s, /* target state */
                {
                    Q_ACTION_CAST(&QMsmTst_s2_x), /* exit */
                    Q_ACTION_CAST(&QMsmTst_s1_e), /* entry */
                    Q_ACTION_CAST(&QMsmTst_s1_i), /* initial tran. */
                    Q_ACTION_CAST(0) /* zero terminator */
                }
            };
            BSP_display("s2-C;");
            status_ = QM_TRAN(&tatbl_);
            break;
        }
        default: {
            status_ = QM_SUPER();
            break;
        }
    }
    return status_;
}
/*${SMs::QMsmTst::SM::s::s2::s21} ..........................................*/
/*${SMs::QMsmTst::SM::s::s2::s21} */
static QState QMsmTst_s21_e(QMsmTst * const me) {
    BSP_display("s21-ENTRY;");
    (void)me; /* avoid compiler warning in case 'me' is not used */
    return QM_ENTRY(&QMsmTst_s21_s);
}
/*${SMs::QMsmTst::SM::s::s2::s21} */
static QState QMsmTst_s21_x(QMsmTst * const me) {
    BSP_display("s21-EXIT;");
    (void)me; /* avoid compiler warning in case 'me' is not used */
    return QM_EXIT(&QMsmTst_s21_s);
}
/*${SMs::QMsmTst::SM::s::s2::s21::initial} */
static QState QMsmTst_s21_i(QMsmTst * const me) {
    static struct {
        QMState const *target;
        QActionHandler act[2];
    } const tatbl_ = { /* tran-action table */
        &QMsmTst_s211_s, /* target state */
        {
            Q_ACTION_CAST(&QMsmTst_s211_e), /* entry */
            Q_ACTION_CAST(0) /* zero terminator */
        }
    };
    /*${SMs::QMsmTst::SM::s::s2::s21::initial} */
    BSP_display("s21-INIT;");
    return QM_TRAN_INIT(&tatbl_);
}
/*${SMs::QMsmTst::SM::s::s2::s21} */
static QState QMsmTst_s21(QMsmTst * const me, QEvt const * const e) {
    QState status_;
    switch (e->sig) {
        /*${SMs::QMsmTst::SM::s::s2::s21::G} */
        case G_SIG: {
            static struct {
                QMState const *target;
                QActionHandler act[5];
            } const tatbl_ = { /* tran-action table */
                &QMsmTst_s1_s, /* target state */
                {
                    Q_ACTION_CAST(&QMsmTst_s21_x), /* exit */
                    Q_ACTION_CAST(&QMsmTst_s2_x), /* exit */
                    Q_ACTION_CAST(&QMsmTst_s1_e), /* entry */
                    Q_ACTION_CAST(&QMsmTst_s1_i), /* initial tran. */
                    Q_ACTION_CAST(0) /* zero terminator */
                }
            };
            BSP_display("s21-G;");
            status_ = QM_TRAN(&tatbl_);
            break;
        }
        /*${SMs::QMsmTst::SM::s::s2::s21::A} */
        case A_SIG: {
            static struct {
                QMState const *target;
                QActionHandler act[4];
            } const tatbl_ = { /* tran-action table */
                &QMsmTst_s21_s, /* target state */
                {
                    Q_ACTION_CAST(&QMsmTst_s21_x), /* exit */
                    Q_ACTION_CAST(&QMsmTst_s21_e), /* entry */
                    Q_ACTION_CAST(&QMsmTst_s21_i), /* initial tran. */
                    Q_ACTION_CAST(0) /* zero terminator */
                }
            };
            BSP_display("s21-A;");
            status_ = QM_TRAN(&tatbl_);
            break;
        }
        /*${SMs::QMsmTst::SM::s::s2::s21::B} */
        case B_SIG: {
            static struct {
                QMState const *target;
                QActionHandler act[2];
            } const tatbl_ = { /* tran-action table */
                &QMsmTst_s211_s, /* target state */
                {
                    Q_ACTION_CAST(&QMsmTst_s211_e), /* entry */
                    Q_ACTION_CAST(0) /* zero terminator */
                }
            };
            BSP_display("s21-B;");
            status_ = QM_TRAN(&tatbl_);
            break;
        }
        default: {
            status_ = QM_SUPER();
            break;
        }
    }
    return status_;
}
/*${SMs::QMsmTst::SM::s::s2::s21::s211} ....................................*/
/*${SMs::QMsmTst::SM::s::s2::s21::s211} */
static QState QMsmTst_s211_e(QMsmTst * const me) {
    BSP_display("s211-ENTRY;");
    (void)me; /* avoid compiler warning in case 'me' is not used */
    return QM_ENTRY(&QMsmTst_s211_s);
}
/*${SMs::QMsmTst::SM::s::s2::s21::s211} */
static QState QMsmTst_s211_x(QMsmTst * const me) {
    BSP_display("s211-EXIT;");
    (void)me; /* avoid compiler warning in case 'me' is not used */
    return QM_EXIT(&QMsmTst_s211_s);
}
/*${SMs::QMsmTst::SM::s::s2::s21::s211} */
static QState QMsmTst_s211(QMsmTst * const me, QEvt const * const e) {
    QState status_;
    switch (e->sig) {
        /*${SMs::QMsmTst::SM::s::s2::s21::s211::H} */
        case H_SIG: {
            static struct {
                QMState const *target;
                QActionHandler act[5];
            } const tatbl_ = { /* tran-action table */
                &QMsmTst_s_s, /* target state */
                {
                    Q_ACTION_CAST(&QMsmTst_s211_x), /* exit */
                    Q_ACTION_CAST(&QMsmTst_s21_x), /* exit */
                    Q_ACTION_CAST(&QMsmTst_s2_x), /* exit */
                    Q_ACTION_CAST(&QMsmTst_s_i), /* initial tran. */
                    Q_ACTION_CAST(0) /* zero terminator */
                }
            };
            BSP_display("s211-H;");
            status_ = QM_TRAN(&tatbl_);
            break;
        }
        /*${SMs::QMsmTst::SM::s::s2::s21::s211::D} */
        case D_SIG: {
            static struct {
                QMState const *target;
                QActionHandler act[3];
            } const tatbl_ = { /* tran-action table */
                &QMsmTst_s21_s, /* target state */
                {
                    Q_ACTION_CAST(&QMsmTst_s211_x), /* exit */
                    Q_ACTION_CAST(&QMsmTst_s21_i), /* initial tran. */
                    Q_ACTION_CAST(0) /* zero terminator */
                }
            };
            BSP_display("s211-D;");
            status_ = QM_TRAN(&tatbl_);
            break;
        }
        default: {
            status_ = QM_SUPER();
            break;
        }
    }
    return status_;
}
/*$enddef${SMs::QMsmTst} ###################################################*/
