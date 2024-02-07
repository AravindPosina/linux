#include "../../perf.h"
#include "../../util/perf_regs.h"

const struct sample_reg sample_reg_masks[] = {
	SMPL_REG(r0, PERF_REG_POWERPC_R0),
	SMPL_REG(r1, PERF_REG_POWERPC_R1),
	SMPL_REG(r2, PERF_REG_POWERPC_R2),
	SMPL_REG(r3, PERF_REG_POWERPC_R3),
	SMPL_REG(r4, PERF_REG_POWERPC_R4),
	SMPL_REG(r5, PERF_REG_POWERPC_R5),
	SMPL_REG(r6, PERF_REG_POWERPC_R6),
	SMPL_REG(r7, PERF_REG_POWERPC_R7),
	SMPL_REG(r8, PERF_REG_POWERPC_R8),
	SMPL_REG(r9, PERF_REG_POWERPC_R9),
	SMPL_REG(r10, PERF_REG_POWERPC_R10),
	SMPL_REG(r11, PERF_REG_POWERPC_R11),
	SMPL_REG(r12, PERF_REG_POWERPC_R12),
	SMPL_REG(r13, PERF_REG_POWERPC_R13),
	SMPL_REG(r14, PERF_REG_POWERPC_R14),
	SMPL_REG(r15, PERF_REG_POWERPC_R15),
	SMPL_REG(r16, PERF_REG_POWERPC_R16),
	SMPL_REG(r17, PERF_REG_POWERPC_R17),
	SMPL_REG(r18, PERF_REG_POWERPC_R18),
	SMPL_REG(r19, PERF_REG_POWERPC_R19),
	SMPL_REG(r20, PERF_REG_POWERPC_R20),
	SMPL_REG(r21, PERF_REG_POWERPC_R21),
	SMPL_REG(r22, PERF_REG_POWERPC_R22),
	SMPL_REG(r23, PERF_REG_POWERPC_R23),
	SMPL_REG(r24, PERF_REG_POWERPC_R24),
	SMPL_REG(r25, PERF_REG_POWERPC_R25),
	SMPL_REG(r26, PERF_REG_POWERPC_R26),
	SMPL_REG(r27, PERF_REG_POWERPC_R27),
	SMPL_REG(r28, PERF_REG_POWERPC_R28),
	SMPL_REG(r29, PERF_REG_POWERPC_R29),
	SMPL_REG(r30, PERF_REG_POWERPC_R30),
	SMPL_REG(r31, PERF_REG_POWERPC_R31),
	SMPL_REG(nip, PERF_REG_POWERPC_NIP),
	SMPL_REG(msr, PERF_REG_POWERPC_MSR),
	SMPL_REG(orig_r3, PERF_REG_POWERPC_ORIG_R3),
	SMPL_REG(ctr, PERF_REG_POWERPC_CTR),
	SMPL_REG(link, PERF_REG_POWERPC_LINK),
	SMPL_REG(xer, PERF_REG_POWERPC_XER),
	SMPL_REG(ccr, PERF_REG_POWERPC_CCR),
	SMPL_REG(softe, PERF_REG_POWERPC_SOFTE),
	SMPL_REG(trap, PERF_REG_POWERPC_TRAP),
	SMPL_REG(dar, PERF_REG_POWERPC_DAR),
	SMPL_REG(dsisr, PERF_REG_POWERPC_DSISR),
	SMPL_REG_END
};