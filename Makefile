CC = clang
CFLAGS =
OPT_LEVEL = -O0

CHSTONE_SRCS := \
	adpcm/adpcm.c \
    aes/aes.c \
    blowfish/bf.c \
    dfadd/dfadd.c \
    dfdiv/dfdiv.c \
    dfmul/dfmul.c \
    dfsin/dfsin.c \
    gsm/gsm.c \
    mips/mips.c \
    motion/mpeg2.c \
    sha/sha_driver.c

PBC_SRCS := \
	medley/floyd-warshall/floyd-warshall.c \
	medley/nussinov/nussinov.c \
	medley/deriche/deriche.c \
	datamining/correlation/correlation.c \
	datamining/covariance/covariance.c \
	linear-algebra/blas/gemm/gemm.c \
	linear-algebra/blas/gemver/gemver.c \
	linear-algebra/blas/gesummv/gesummv.c \
	linear-algebra/blas/symm/symm.c \
	linear-algebra/blas/syr2k/syr2k.c \
	linear-algebra/blas/syrk/syrk.c \
	linear-algebra/blas/trmm/trmm.c \
	linear-algebra/kernels/2mm/2mm.c \
	linear-algebra/kernels/3mm/3mm.c \
	linear-algebra/kernels/atax/atax.c \
	linear-algebra/kernels/bicg/bicg.c \
	linear-algebra/kernels/doitgen/doitgen.c \
	linear-algebra/kernels/mvt/mvt.c \
	linear-algebra/solvers/cholesky/cholesky.c \
	linear-algebra/solvers/durbin/durbin.c \
	linear-algebra/solvers/gramschmidt/gramschmidt.c \
	linear-algebra/solvers/lu/lu.c \
	linear-algebra/solvers/ludcmp/ludcmp.c \
	linear-algebra/solvers/trisolv/trisolv.c \
	stencils/adi/adi.c \
	stencils/fdtd-2d/fdtd-2d.c \
	stencils/heat-3d/heat-3d.c \
	stencils/jacobi-1d/jacobi-1d.c \
	stencils/jacobi-2d/jacobi-2d.c \
	stencils/seidel-2d/seidel-2d.c

CHSTONE_DIR        := emscripten_compile/CHStone_v1.11_150204
CHSTONE_SRCS_PATH  := $(addprefix ${CHSTONE_DIR}/, ${CHSTONE_SRCS})
CHSTONE_EXECS      := $(CHSTONE_SRCS_PATH:.c=)

PBC_DIR            := emscripten_compile/polybench-c-4.2.1-beta
PBC_SRCS_PATH      := $(addprefix ${PBC_DIR}/, ${PBC_SRCS})
PBC_EXECS          := $(PBC_SRCS_PATH:.c=)

TARGET_DIR         := target
TARGET_DIR_CHSTONE := ${TARGET_DIR}/chstone
TARGET_DIR_PBC     := ${TARGET_DIR}/pbc

GREEN              := $(shell tput -Txterm setaf 2)
BLUE               := $(shell tput -Txterm setaf 4)
YELLOW             := $(shell tput -Txterm setaf 3)
RED                := $(shell tput -Txterm setaf 1)
RESET              := $(shell tput -Txterm sgr0)

all: check_dependencies dirs ${CHSTONE_EXECS} pbc

check_dependencies:
	@which ${CC} >/dev/null 2>&1 || { echo "Error: ${CC} not found."; exit 1; }

dirs:
	@mkdir -p ${TARGET_DIR}
	@mkdir -p ${TARGET_DIR_CHSTONE}
	@mkdir -p ${TARGET_DIR_PBC}

${CHSTONE_EXECS}: %: %.c
	$(eval OUTPUT := ${TARGET_DIR_CHSTONE}/$(notdir $@))
	$(info ${GREEN}Compiling${RESET} $< → ${BLUE}${OUTPUT}${RESET})
	@${CC} ${CFLAGS} ${OPT_LEVEL} -o ${OUTPUT} $<

pbc: update_cflags_pbc ${PBC_EXECS}

PBC_UTILS := ${PBC_DIR}/utilities

update_cflags_pbc: ${CHSTONE_EXECS}
	$(eval CFLAGS = -I${PBC_UTILS} -DPOLYBENCH_TIME -DMEDIUM_DATASET)
	$(info [CFLAGS updated] ${YELLOW}CFLAGS = ${CFLAGS}${RESET})

${PBC_EXECS}: %: %.c
	$(eval BASENAME := $(notdir $@))
	$(eval OUTPUT := ${TARGET_DIR_PBC}/$(notdir $@))
	$(info ${GREEN}Compiling${RESET} $< → ${BLUE}${OUTPUT}${RESET})
	@if [[ "${BASENAME}" = "floyd-warshall" || "${BASENAME}" = "nussinov" ]]; then \
		${CC} ${CFLAGS} ${OPT_LEVEL} -o ${OUTPUT} $< ${PBC_UTILS}/polybench_type1.c; \
	elif [[ "${BASENAME}" = "deriche" ]]; then \
		${CC} ${CFLAGS} ${OPT_LEVEL} -o ${OUTPUT} $< ${PBC_UTILS}/polybench_type2.c; \
	else \
		${CC} ${CFLAGS} ${OPT_LEVEL} -o ${OUTPUT} $< ${PBC_UTILS}/polybench_type3.c; \
	fi

.PHONY: clean

clean:
	@rm -rf ${TARGET_DIR}
