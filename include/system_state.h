#ifndef ATG_SIMPLE_2D_CONSTRAINT_SOLVER_SYSTEM_STATE_H
#define ATG_SIMPLE_2D_CONSTRAINT_SOLVER_SYSTEM_STATE_H

namespace atg_scs {
    class SystemState {
        public:
            SystemState();
            ~SystemState();

            void copy(SystemState *state);
            void resize(int bodyCount);
            void destroy();

            double *a_theta;
            double *v_theta;
            double *theta;

            double *a_x;
            double *a_y;
            double *v_x;
            double *v_y;
            double *p_x;
            double *p_y;

            double *f_x;
            double *f_y;
            double *t;

            int n;
            double dt;
    };
} /* namespace atg_scs */

#endif /* ATG_SIMPLE_2D_CONSTRAINT_SOLVER_SYSTEM_STATE_H */
