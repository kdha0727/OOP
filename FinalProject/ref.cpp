
int64_t __gmon_start__ = 0;

void _init() {
    int64_t rax1;

    rax1 = __gmon_start__;
    if (rax1) {
        rax1();
    }
    return;
}

int64_t __cxa_finalize = 0;

void fun_1090(int64_t rdi) {
    goto __cxa_finalize;
}

struct s0 {
    struct s0* f0;
    signed char[1] pad2;
    signed char f2;
    signed char[1] pad4;
    struct s0** f4;
    struct s0** f8;
    signed char[4] pad16;
    struct s0* f16;
    signed char[3] pad20;
    struct s0** f20;
    struct s0** f24;
    int32_t f28;
    int32_t f32;
    signed char[4] pad40;
    int64_t f40;
};

/* Grid::getAnimal() */
struct s0* _ZN4Grid9getAnimalEv(struct s0* rdi, ...) {
    return rdi->f16;
}

/* Animal::setY(int) */
void _ZN6Animal4setYEi(struct s0* rdi, struct s0** esi) {
    rdi->f20 = esi;
    return;
}

/* Animal::setX(int) */
void _ZN6Animal4setXEi(struct s0* rdi, struct s0** esi) {
    rdi->f24 = esi;
    return;
}

/* Animal::setOwner(Grid*) */
void _ZN6Animal8setOwnerEP4Grid(struct s0* rdi, struct s0** rsi) {
    rdi->f8 = rsi;
    return;
}

/* Grid::setAnimal(Animal*) */
void _ZN4Grid9setAnimalEP6Animal(struct s0* rdi, struct s0* rsi) {
    rdi->f16 = rsi;
    return;
}

struct s1 {
    struct s0* f0;
    unsigned char f1;
};

/* Grid::getFood() */
uint32_t _ZN4Grid7getFoodEv(struct s1* rdi, struct s0* rsi) {
    return static_cast<uint32_t>(rdi->f1);
}

struct s2 {
    signed char[1] pad1;
    signed char f1;
};

/* Grid::removeFood() */
void _ZN4Grid10removeFoodEv(struct s2* rdi, struct s0* rsi) {
    rdi->f1 = 0;
    return;
}

/* Animal::setLife(int) */
void _ZN6Animal7setLifeEi(struct s0* rdi, int32_t esi) {
    rdi->f28 = esi;
    return;
}

/* Animal::setBreed(int) */
void _ZN6Animal8setBreedEi(struct s0* rdi, int32_t esi) {
    rdi->f32 = esi;
    return;
}

/* Animal::getType() */
struct s0* _ZN6Animal7getTypeEv(struct s0* rdi, struct s0* rsi, ...) {
    return rdi->f16;
}

/* std::ios_base::Init::Init() */
int64_t _ZNSt8ios_base4InitC1Ev = 0x1066;

void fun_1060(int64_t rdi) {
    goto _ZNSt8ios_base4InitC1Ev;
}

int64_t __cxa_atexit = 0xfc6;

void fun_fc0(int64_t rdi, int64_t rsi, int64_t rdx) {
    goto __cxa_atexit;
}

/* operator new[](unsigned long) */
int64_t _Znam = 0xf96;

struct s0* fun_f90(struct s0* rdi, struct s0* rsi, ...) {
    goto _Znam;
}

int64_t rand = 0xfa6;

int32_t fun_fa0(struct s0* rdi) {
    goto rand;
}

int64_t __stack_chk_fail = 0x1036;

uint64_t fun_1030(struct s0* rdi, struct s0* rsi) {
    goto __stack_chk_fail;
}

uint64_t g28;

/* Animal::getY() */
struct s0** _ZN6Animal4getYEv(struct s0* rdi, struct s0* rsi);

/* Animal::getX() */
struct s0** _ZN6Animal4getXEv(struct s0* rdi, struct s0* rsi, ...);

/* Grid::getGrass() */
signed char _ZN4Grid8getGrassEv(struct s0* rdi, ...);

int32_t fun_fd0(int64_t rdi, struct s0* rsi, struct s0* rdx, ...);

void fun_fe0(struct s0* rdi, struct s0* rsi, ...);

/* getGrassDirection(Grid**, Animal*, int, int) */
uint64_t _Z17getGrassDirectionPP4GridP6Animalii(struct s0*** rdi, struct s0* rsi, void* edx, void* ecx) {
    struct s0* rdx3;
    void* v5;
    uint64_t rax6;
    uint64_t v7;
    uint32_t v8;
    struct s0** eax9;
    struct s0** v10;
    struct s0* rdi11;
    struct s0** eax12;
    struct s0** v13;
    signed char al14;
    struct s0* rax15;
    signed char al16;
    struct s0* rax17;
    signed char al18;
    struct s0* rax19;
    signed char al20;
    struct s0* rax21;
    int32_t v22;
    int32_t eax23;
    int32_t eax24;
    uint32_t v25;
    uint64_t rax26;
    uint32_t v27;
    uint32_t v28;
    struct s0* rsi29;

    *reinterpret_cast<void**>(&rdx3) = edx;
    v5 = *reinterpret_cast<void**>(&rdx3);
    rax6 = g28;
    v7 = rax6;
    v8 = 0;
    eax9 = _ZN6Animal4getYEv(rsi, rsi);
    v10 = eax9;
    rdi11 = rsi;
    eax12 = _ZN6Animal4getXEv(rdi11, rsi);
    v13 = eax12;
    if (reinterpret_cast<int32_t>(v10) <= reinterpret_cast<int32_t>(0) || ((rdx3 = reinterpret_cast<struct s0*>(static_cast<int64_t>(reinterpret_cast<int32_t>(v13))), rdi11 = reinterpret_cast<struct s0*>((reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx3) + reinterpret_cast<unsigned char>(rdx3)) + reinterpret_cast<unsigned char>(rdx3) << 3) + reinterpret_cast<uint64_t>(*reinterpret_cast<struct s0***>(reinterpret_cast<int64_t>(rdi) + ((static_cast<int64_t>(reinterpret_cast<int32_t>(v10)) << 3) - 8)))), al14 = _ZN4Grid8getGrassEv(rdi11), al14 == 0) || (rdx3 = reinterpret_cast<struct s0*>(static_cast<int64_t>(reinterpret_cast<int32_t>(v13))), rdi11 = reinterpret_cast<struct s0*>((reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx3) + reinterpret_cast<unsigned char>(rdx3)) + reinterpret_cast<unsigned char>(rdx3) << 3) + reinterpret_cast<uint64_t>(*reinterpret_cast<struct s0***>(reinterpret_cast<int64_t>(rdi) + ((static_cast<int64_t>(reinterpret_cast<int32_t>(v10)) << 3) - 8)))), rax15 = _ZN4Grid9getAnimalEv(rdi11), !!rax15))) {
    }
    if (reinterpret_cast<int32_t>(v10) >= reinterpret_cast<int32_t>(reinterpret_cast<int32_t>(v5) - 1) || ((rdx3 = reinterpret_cast<struct s0*>(static_cast<int64_t>(reinterpret_cast<int32_t>(v13))), rdi11 = reinterpret_cast<struct s0*>((reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx3) + reinterpret_cast<unsigned char>(rdx3)) + reinterpret_cast<unsigned char>(rdx3) << 3) + reinterpret_cast<uint64_t>(rdi[reinterpret_cast<int64_t>(v10 + 1)])), al16 = _ZN4Grid8getGrassEv(rdi11), al16 == 0) || (rdx3 = reinterpret_cast<struct s0*>(static_cast<int64_t>(reinterpret_cast<int32_t>(v13))), rdi11 = reinterpret_cast<struct s0*>((reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx3) + reinterpret_cast<unsigned char>(rdx3)) + reinterpret_cast<unsigned char>(rdx3) << 3) + reinterpret_cast<uint64_t>(rdi[reinterpret_cast<int64_t>(v10 + 1)])), rax17 = _ZN4Grid9getAnimalEv(rdi11), !!rax17))) {
    }
    if (reinterpret_cast<int32_t>(v13) >= reinterpret_cast<int32_t>(reinterpret_cast<int32_t>(ecx) - 1) || ((rdx3 = reinterpret_cast<struct s0*>(v13 + 1), rdi11 = reinterpret_cast<struct s0*>((reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx3) + reinterpret_cast<unsigned char>(rdx3)) + reinterpret_cast<unsigned char>(rdx3) << 3) + reinterpret_cast<uint64_t>(rdi[reinterpret_cast<int32_t>(v10)])), al18 = _ZN4Grid8getGrassEv(rdi11), al18 == 0) || (rdx3 = reinterpret_cast<struct s0*>(v13 + 1), rdi11 = reinterpret_cast<struct s0*>((reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx3) + reinterpret_cast<unsigned char>(rdx3)) + reinterpret_cast<unsigned char>(rdx3) << 3) + reinterpret_cast<uint64_t>(rdi[reinterpret_cast<int32_t>(v10)])), rax19 = _ZN4Grid9getAnimalEv(rdi11), !!rax19))) {
    }
    if (reinterpret_cast<int32_t>(v13) <= reinterpret_cast<int32_t>(0) || ((rdx3 = reinterpret_cast<struct s0*>(static_cast<int64_t>(reinterpret_cast<int32_t>(v13))), rdi11 = reinterpret_cast<struct s0*>((reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx3) + reinterpret_cast<unsigned char>(rdx3)) + reinterpret_cast<unsigned char>(rdx3) << 3) - 24 + reinterpret_cast<uint64_t>(rdi[reinterpret_cast<int32_t>(v10)])), al20 = _ZN4Grid8getGrassEv(rdi11), al20 == 0) || (rdx3 = reinterpret_cast<struct s0*>(static_cast<int64_t>(reinterpret_cast<int32_t>(v13))), rdi11 = reinterpret_cast<struct s0*>((reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx3) + reinterpret_cast<unsigned char>(rdx3)) + reinterpret_cast<unsigned char>(rdx3) << 3) - 24 + reinterpret_cast<uint64_t>(rdi[reinterpret_cast<int32_t>(v10)])), rax21 = _ZN4Grid9getAnimalEv(rdi11), !!rax21))) {
    }
    v22 = 0;
    while (v22 <= 3) {
        if (!1) {
            ++v8;
        }
        ++v22;
    }
    if (v8) {
        eax23 = fun_fd0(0, rsi, rdx3);
        *reinterpret_cast<struct s0***>(&rdi11) = reinterpret_cast<struct s0**>(reinterpret_cast<uint32_t>(v13) + eax23 * reinterpret_cast<uint32_t>(v10));
        *reinterpret_cast<int32_t*>(&rdi11 + 4) = 0;
        fun_fe0(rdi11, rsi);
        eax24 = fun_fa0(rdi11);
        __asm__("cdq ");
        v25 = reinterpret_cast<uint32_t>(eax24 % reinterpret_cast<int32_t>(v8));
        if (v25) {
            *reinterpret_cast<uint32_t*>(&rax26) = v25;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax26) + 4) = 0;
        } else {
            *reinterpret_cast<uint32_t*>(&rax26) = v8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax26) + 4) = 0;
        }
        v27 = *reinterpret_cast<uint32_t*>(&rax26);
        v28 = 0;
        while (reinterpret_cast<int32_t>(v28) <= reinterpret_cast<int32_t>(3)) {
            *reinterpret_cast<uint32_t*>(&rax26) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax26) + 4) = 0;
            if (!1) {
                --v27;
            }
            if (!v27)
                goto addr_3450_27;
            ++v28;
        }
    } else {
        *reinterpret_cast<uint32_t*>(&rax26) = 0xffffffff;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax26) + 4) = 0;
    }
    addr_345b_30:
    rsi29 = reinterpret_cast<struct s0*>(v7 ^ g28);
    if (rsi29) {
        rax26 = fun_1030(rdi11, rsi29);
    }
    return rax26;
    addr_3450_27:
    *reinterpret_cast<uint32_t*>(&rax26) = v28;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax26) + 4) = 0;
    goto addr_345b_30;
}

/* Grid::getGrass() */
signed char _ZN4Grid8getGrassEv(struct s0* rdi, ...) {
    uint32_t eax2;

    eax2 = reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(&rdi->f0));
    return *reinterpret_cast<signed char*>(&eax2);
}

/* getRabbitDirection(Grid**, Animal*, int, int) */
uint64_t _Z18getRabbitDirectionPP4GridP6Animalii(struct s0* rdi, struct s0* rsi, void* edx, void* ecx) {
    struct s0* rdx3;
    void* v5;
    uint64_t rax6;
    uint64_t v7;
    uint32_t v8;
    struct s0** eax9;
    struct s0** v10;
    struct s0* rdi11;
    struct s0** eax12;
    struct s0** v13;
    struct s0* rax14;
    int32_t eax15;
    struct s0* rdi16;
    struct s0* rax17;
    struct s0* eax18;
    struct s0* rax19;
    int32_t eax20;
    struct s0* rdi21;
    struct s0* rax22;
    struct s0* eax23;
    struct s0* rax24;
    int32_t eax25;
    struct s0* rdi26;
    struct s0* rax27;
    struct s0* eax28;
    struct s0* rax29;
    int32_t eax30;
    struct s0* rdi31;
    struct s0* rax32;
    struct s0* eax33;
    int32_t v34;
    int32_t eax35;
    int32_t eax36;
    uint32_t v37;
    uint64_t rax38;
    uint32_t v39;
    uint32_t v40;
    struct s0* rsi41;

    *reinterpret_cast<void**>(&rdx3) = edx;
    v5 = *reinterpret_cast<void**>(&rdx3);
    rax6 = g28;
    v7 = rax6;
    v8 = 0;
    eax9 = _ZN6Animal4getYEv(rsi, rsi);
    v10 = eax9;
    rdi11 = rsi;
    eax12 = _ZN6Animal4getXEv(rdi11, rsi);
    v13 = eax12;
    if (reinterpret_cast<int32_t>(v10) <= reinterpret_cast<int32_t>(0) || (rdx3 = reinterpret_cast<struct s0*>(static_cast<int64_t>(reinterpret_cast<int32_t>(v13))), rdi11 = reinterpret_cast<struct s0*>((reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx3) + reinterpret_cast<unsigned char>(rdx3)) + reinterpret_cast<unsigned char>(rdx3) << 3) + reinterpret_cast<uint64_t>(*reinterpret_cast<struct s0***>(reinterpret_cast<unsigned char>(rdi) + ((static_cast<int64_t>(reinterpret_cast<int32_t>(v10)) << 3) + 0xfffffffffffffff8)))), rax14 = _ZN4Grid9getAnimalEv(rdi11), rax14 == 0)) {
        eax15 = 0;
    } else {
        eax15 = 1;
    }
    if (*reinterpret_cast<signed char*>(&eax15)) {
        rdx3 = reinterpret_cast<struct s0*>(static_cast<int64_t>(reinterpret_cast<int32_t>(v13)));
        rdi16 = reinterpret_cast<struct s0*>((reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx3) + reinterpret_cast<unsigned char>(rdx3)) + reinterpret_cast<unsigned char>(rdx3) << 3) + reinterpret_cast<uint64_t>(*reinterpret_cast<struct s0***>(reinterpret_cast<unsigned char>(rdi) + ((static_cast<int64_t>(reinterpret_cast<int32_t>(v10)) << 3) + 0xfffffffffffffff8))));
        rax17 = _ZN4Grid9getAnimalEv(rdi16);
        rdi11 = rax17;
        eax18 = _ZN6Animal7getTypeEv(rdi11, rsi);
        if (!reinterpret_cast<uint1_t>(eax18 == 1)) {
        }
    }
    if (reinterpret_cast<int32_t>(v10) >= reinterpret_cast<int32_t>(reinterpret_cast<int32_t>(v5) - 1) || (rdx3 = reinterpret_cast<struct s0*>(static_cast<int64_t>(reinterpret_cast<int32_t>(v13))), rdi11 = reinterpret_cast<struct s0*>((reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx3) + reinterpret_cast<unsigned char>(rdx3)) + reinterpret_cast<unsigned char>(rdx3) << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rdi) + reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(v10 + 1) * 8)))), rax19 = _ZN4Grid9getAnimalEv(rdi11), rax19 == 0)) {
        eax20 = 0;
    } else {
        eax20 = 1;
    }
    if (*reinterpret_cast<signed char*>(&eax20)) {
        rdx3 = reinterpret_cast<struct s0*>(static_cast<int64_t>(reinterpret_cast<int32_t>(v13)));
        rdi21 = reinterpret_cast<struct s0*>((reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx3) + reinterpret_cast<unsigned char>(rdx3)) + reinterpret_cast<unsigned char>(rdx3) << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rdi) + reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(v10 + 1) * 8))));
        rax22 = _ZN4Grid9getAnimalEv(rdi21);
        rdi11 = rax22;
        eax23 = _ZN6Animal7getTypeEv(rdi11, rsi);
        if (!reinterpret_cast<uint1_t>(eax23 == 1)) {
        }
    }
    if (reinterpret_cast<int32_t>(v13) >= reinterpret_cast<int32_t>(reinterpret_cast<int32_t>(ecx) - 1) || (rdx3 = reinterpret_cast<struct s0*>(v13 + 1), rdi11 = reinterpret_cast<struct s0*>((reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx3) + reinterpret_cast<unsigned char>(rdx3)) + reinterpret_cast<unsigned char>(rdx3) << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rdi) + reinterpret_cast<int32_t>(v10) * 8))), rax24 = _ZN4Grid9getAnimalEv(rdi11), rax24 == 0)) {
        eax25 = 0;
    } else {
        eax25 = 1;
    }
    if (*reinterpret_cast<signed char*>(&eax25)) {
        rdx3 = reinterpret_cast<struct s0*>(v13 + 1);
        rdi26 = reinterpret_cast<struct s0*>((reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx3) + reinterpret_cast<unsigned char>(rdx3)) + reinterpret_cast<unsigned char>(rdx3) << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rdi) + reinterpret_cast<int32_t>(v10) * 8)));
        rax27 = _ZN4Grid9getAnimalEv(rdi26);
        rdi11 = rax27;
        eax28 = _ZN6Animal7getTypeEv(rdi11, rsi);
        if (!reinterpret_cast<uint1_t>(eax28 == 1)) {
        }
    }
    if (reinterpret_cast<int32_t>(v13) <= reinterpret_cast<int32_t>(0) || (rdx3 = reinterpret_cast<struct s0*>(static_cast<int64_t>(reinterpret_cast<int32_t>(v13))), rdi11 = reinterpret_cast<struct s0*>((reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx3) + reinterpret_cast<unsigned char>(rdx3)) + reinterpret_cast<unsigned char>(rdx3) << 3) - 24 + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rdi) + reinterpret_cast<int32_t>(v10) * 8))), rax29 = _ZN4Grid9getAnimalEv(rdi11), rax29 == 0)) {
        eax30 = 0;
    } else {
        eax30 = 1;
    }
    if (*reinterpret_cast<signed char*>(&eax30)) {
        rdx3 = reinterpret_cast<struct s0*>(static_cast<int64_t>(reinterpret_cast<int32_t>(v13)));
        rdi31 = reinterpret_cast<struct s0*>((reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx3) + reinterpret_cast<unsigned char>(rdx3)) + reinterpret_cast<unsigned char>(rdx3) << 3) - 24 + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rdi) + reinterpret_cast<int32_t>(v10) * 8)));
        rax32 = _ZN4Grid9getAnimalEv(rdi31);
        rdi11 = rax32;
        eax33 = _ZN6Animal7getTypeEv(rdi11, rsi);
        if (!reinterpret_cast<uint1_t>(eax33 == 1)) {
        }
    }
    v34 = 0;
    while (v34 <= 3) {
        if (!1) {
            ++v8;
        }
        ++v34;
    }
    if (v8) {
        eax35 = fun_fd0(0, rsi, rdx3);
        *reinterpret_cast<struct s0***>(&rdi11) = reinterpret_cast<struct s0**>(reinterpret_cast<uint32_t>(v13) + eax35 * reinterpret_cast<uint32_t>(v10));
        *reinterpret_cast<int32_t*>(&rdi11 + 4) = 0;
        fun_fe0(rdi11, rsi);
        eax36 = fun_fa0(rdi11);
        __asm__("cdq ");
        v37 = reinterpret_cast<uint32_t>(eax36 % reinterpret_cast<int32_t>(v8));
        if (v37) {
            *reinterpret_cast<uint32_t*>(&rax38) = v37;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax38) + 4) = 0;
        } else {
            *reinterpret_cast<uint32_t*>(&rax38) = v8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax38) + 4) = 0;
        }
        v39 = *reinterpret_cast<uint32_t*>(&rax38);
        v40 = 0;
        while (reinterpret_cast<int32_t>(v40) <= reinterpret_cast<int32_t>(3)) {
            *reinterpret_cast<uint32_t*>(&rax38) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax38) + 4) = 0;
            if (!1) {
                --v39;
            }
            if (!v39)
                goto addr_3809_47;
            ++v40;
        }
    } else {
        *reinterpret_cast<uint32_t*>(&rax38) = 0xffffffff;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax38) + 4) = 0;
    }
    addr_3814_50:
    rsi41 = reinterpret_cast<struct s0*>(v7 ^ g28);
    if (rsi41) {
        rax38 = fun_1030(rdi11, rsi41);
    }
    return rax38;
    addr_3809_47:
    *reinterpret_cast<uint32_t*>(&rax38) = v40;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax38) + 4) = 0;
    goto addr_3814_50;
}

/* std::ios_base::Init::~Init() */
int64_t _ZNSt8ios_base4InitD1Ev = 0;

/* __static_initialization_and_destruction_0(int, int) */
void _Z41__static_initialization_and_destruction_0ii(int32_t edi, int32_t esi) {
    int64_t rax3;

    if (edi == 1 && esi == 0xffff) {
        fun_1060(0x20627b);
        rax3 = _ZNSt8ios_base4InitD1Ev;
        fun_fc0(rax3, 0x20627b, 0x206008);
    }
    return;
}

/* Grid::Grid() */
void _ZN4GridC1Ev(struct s0* rdi, struct s0* rsi, struct s0* rdx) {
    *reinterpret_cast<struct s0**>(&rdi->f0) = reinterpret_cast<struct s0*>(0);
    rdi->f2 = 0;
    rdi->f4 = reinterpret_cast<struct s0**>(0);
    rdi->f8 = reinterpret_cast<struct s0**>(0);
    rdi->f16 = reinterpret_cast<struct s0*>(0);
    return;
}

/* Grid::initLocation(int, int) */
void _ZN4Grid12initLocationEii(struct s0* rdi, struct s0** esi, struct s0** edx) {
    rdi->f4 = esi;
    rdi->f8 = edx;
    return;
}

/* std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*) */
int64_t _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc = 0xff6;

struct s0* fun_ff0(struct s0* rdi, struct s0* rsi, ...) {
    goto _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc;
}

/* std::ostream::operator<<(std::ostream& (*)(std::ostream&)) */
int64_t _ZNSolsEPFRSoS_E = 0x1026;

void fun_1020(struct s0* rdi, struct s0* rsi, ...) {
    goto _ZNSolsEPFRSoS_E;
}

/* Grid::setGrass() */
void _ZN4Grid8setGrassEv(struct s0** rdi) {
    *rdi = reinterpret_cast<struct s0*>(1);
    return;
}

/* operator new(unsigned long) */
int64_t _Znwm = 0x1006;

struct s0* fun_1000(int64_t rdi, struct s0* rsi) {
    goto _Znwm;
}

/* Animal::Animal(Grid**, int, int) */
void _ZN6AnimalC1EPP4Gridii(struct s0* rdi, struct s0* rsi, struct s0** edx, struct s0** ecx);

/* Animal::setType(int) */
void _ZN6Animal7setTypeEi(struct s0* rdi, struct s0* esi);

int32_t _ZN6Rabbit8LIFE_NUME = 5;

int32_t _ZN6Rabbit9BREED_NUME = 7;

/* Rabbit::Rabbit(Grid**, int, int) */
void _ZN6RabbitC2EPP4Gridii(struct s0* rdi, struct s0* rsi, struct s0** edx, struct s0** ecx) {
    int32_t edx5;
    int32_t edx6;

    _ZN6AnimalC1EPP4Gridii(rdi, rsi, edx, ecx);
    *reinterpret_cast<struct s0**>(&rdi->f0) = reinterpret_cast<struct s0*>(0x205c68);
    _ZN6Animal7setTypeEi(rdi, 1);
    edx5 = _ZN6Rabbit8LIFE_NUME;
    _ZN6Animal7setLifeEi(rdi, edx5);
    edx6 = _ZN6Rabbit9BREED_NUME;
    _ZN6Animal8setBreedEi(rdi, edx6);
    return;
}

int32_t _ZN5Tiger8LIFE_NUME = 7;

int32_t _ZN5Tiger9BREED_NUME = 10;

/* Tiger::Tiger(Grid**, int, int) */
void _ZN5TigerC2EPP4Gridii(struct s0* rdi, struct s0* rsi, struct s0** edx, struct s0** ecx) {
    int32_t edx5;
    int32_t edx6;

    _ZN6AnimalC1EPP4Gridii(rdi, rsi, edx, ecx);
    *reinterpret_cast<struct s0**>(&rdi->f0) = reinterpret_cast<struct s0*>(0x205c30);
    _ZN6Animal7setTypeEi(rdi, 2);
    edx5 = _ZN5Tiger8LIFE_NUME;
    _ZN6Animal7setLifeEi(rdi, edx5);
    edx6 = _ZN5Tiger9BREED_NUME;
    _ZN6Animal8setBreedEi(rdi, edx6);
    return;
}

/* operator delete[](void*) */
int64_t _ZdaPv = 0x1046;

void fun_1040(struct s0* rdi, struct s0* rsi, int64_t rdx, struct s0* rcx) {
    goto _ZdaPv;
}

/* operator delete(void*, unsigned long) */
int64_t _ZdlPvm = 0x1016;

void fun_1010(struct s0* rdi, struct s0* rsi) {
    goto _ZdlPvm;
}

int64_t time = 0xfd6;

int32_t fun_fd0(int64_t rdi, struct s0* rsi, struct s0* rdx, ...) {
    goto time;
}

int64_t srand = 0xfe6;

void fun_fe0(struct s0* rdi, struct s0* rsi, ...) {
    goto srand;
}

struct s3 {
    struct s0* f0;
    signed char f1;
};

/* Grid::setFood() */
void _ZN4Grid7setFoodEv(struct s3* rdi, struct s0* rsi);

/* Hunter::shoot(Grid**, int, int, int) */
void _ZN6Hunter5shootEPP4Gridiii(struct s0* rdi, struct s0* rsi, struct s0** edx, struct s0** ecx, int32_t r8d) {
    struct s0* v6;
    struct s0** v7;
    struct s0** v8;
    int32_t v9;
    struct s0** eax10;
    struct s0** eax11;
    struct s0** v12;
    struct s0** v13;
    int64_t rdx14;
    struct s0* rdi15;
    struct s0* rax16;
    int32_t eax17;
    int64_t rdx18;
    struct s0* rdi19;
    struct s0* rax20;
    int64_t rdx21;
    struct s0* rdi22;
    int64_t rdx23;
    struct s3* rdi24;

    v6 = rsi;
    v7 = edx;
    v8 = ecx;
    v9 = r8d;
    eax10 = _ZN6Animal4getYEv(rdi, rsi);
    eax11 = _ZN6Animal4getXEv(rdi, rsi);
    v12 = eax10;
    v13 = eax11;
    while (1) {
        if (v9 == 1) {
            ++v12;
        } else {
            if (v9 > 1) {
                if (v9 == 2) {
                    ++v13;
                } else {
                    if (v9 == 3) {
                        --v13;
                    }
                }
            } else {
                if (!v9) {
                    --v12;
                }
            }
        }
        if (reinterpret_cast<int32_t>(v12) < reinterpret_cast<int32_t>(0) || (reinterpret_cast<int32_t>(v12) >= reinterpret_cast<int32_t>(v7) || (reinterpret_cast<int32_t>(v13) < reinterpret_cast<int32_t>(0) || (reinterpret_cast<int32_t>(v13) >= reinterpret_cast<int32_t>(v8) || (rdx14 = reinterpret_cast<int32_t>(v13), rdi15 = reinterpret_cast<struct s0*>((rdx14 + rdx14 + rdx14 << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(v6) + reinterpret_cast<int32_t>(v12) * 8))), rax16 = _ZN4Grid9getAnimalEv(rdi15), !!rax16))))) {
            eax17 = 0;
        } else {
            eax17 = 1;
        }
        if (!*reinterpret_cast<signed char*>(&eax17))
            break;
    }
    rdx18 = reinterpret_cast<int32_t>(v13);
    rdi19 = reinterpret_cast<struct s0*>((rdx18 + rdx18 + rdx18 << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(v6) + reinterpret_cast<int32_t>(v12) * 8)));
    rax20 = _ZN4Grid9getAnimalEv(rdi19);
    fun_1010(rax20, 40);
    rdx21 = reinterpret_cast<int32_t>(v13);
    rdi22 = reinterpret_cast<struct s0*>((rdx21 + rdx21 + rdx21 << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(v6) + reinterpret_cast<int32_t>(v12) * 8)));
    _ZN4Grid9setAnimalEP6Animal(rdi22, 0);
    rdx23 = reinterpret_cast<int32_t>(v13);
    rdi24 = reinterpret_cast<struct s3*>((rdx23 + rdx23 + rdx23 << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(v6) + reinterpret_cast<int32_t>(v12) * 8)));
    _ZN4Grid7setFoodEv(rdi24, 0);
    return;
}

struct s0** H = reinterpret_cast<struct s0**>(0);

struct s0** W = reinterpret_cast<struct s0**>(0);

struct s0* grid = reinterpret_cast<struct s0*>(0);

/* animalTurn(int) */
uint64_t _Z10animalTurni(struct s0* edi) {
    struct s0* v2;
    uint64_t rax3;
    uint64_t v4;
    struct s0** edx5;
    struct s0** eax6;
    int64_t rax7;
    int64_t r8_8;
    struct s0* rdi9;
    void* rsp10;
    struct s0** v11;
    uint32_t v12;
    struct s0** edx13;
    struct s0** eax14;
    struct s0* rcx15;
    struct s0** edi16;
    struct s0* rsi17;
    int64_t rdx18;
    int64_t* rsp19;
    struct s0* rax20;
    uint32_t v21;
    struct s0** edx22;
    struct s0** eax23;
    int64_t* rsp24;
    struct s0* eax25;
    int32_t eax26;
    struct s0** rax27;
    int64_t* rsp28;
    int32_t eax29;
    int32_t rax30;
    int64_t rcx31;
    int64_t rdx32;
    int64_t* rsp33;
    struct s0* rcx34;
    struct s0** edi35;
    struct s0** esi36;
    int64_t rdx37;
    struct s0* rdi38;
    int64_t* rsp39;
    struct s0* rax40;
    int64_t* rsp41;
    struct s0* rcx42;
    struct s0** esi43;
    struct s0** esi44;
    int64_t rdx45;
    int64_t* rsp46;
    struct s0* rdi47;
    struct s0* rax48;
    int64_t rcx49;
    int64_t rdx50;
    struct s0* rsi51;
    int64_t* rsp52;
    int32_t eax53;
    void* rsp54;
    struct s0** rax55;
    int64_t rdx56;
    int64_t* rsp57;
    struct s0* rax58;
    int64_t rcx59;
    int64_t rdx60;
    int64_t* rsp61;
    uint64_t rax62;

    v2 = edi;
    rax3 = g28;
    v4 = rax3;
    edx5 = H;
    eax6 = W;
    rax7 = reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(eax6) * reinterpret_cast<uint32_t>(edx5)) - 1;
    r8_8 = rax7 + 1;
    *reinterpret_cast<int32_t*>(&rdi9) = 16;
    *reinterpret_cast<int32_t*>(&rdi9 + 4) = 0;
    rsp10 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 72 - reinterpret_cast<uint64_t>(15 + ((rax7 + 1 << 3) + 7)) / reinterpret_cast<unsigned char>(16) * 16);
    v11 = reinterpret_cast<struct s0**>(reinterpret_cast<uint64_t>(rsp10) + 7 >> 3 << 3);
    v12 = 0;
    while (edx13 = H, eax14 = W, reinterpret_cast<int32_t>(v12) < reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(eax14) * reinterpret_cast<uint32_t>(edx13))) {
        rcx15 = grid;
        edi16 = W;
        __asm__("cdq ");
        *reinterpret_cast<struct s0***>(&rsi17) = W;
        *reinterpret_cast<int32_t*>(&rsi17 + 4) = 0;
        __asm__("cdq ");
        rdx18 = reinterpret_cast<int32_t>(v12) % reinterpret_cast<int32_t>(*reinterpret_cast<struct s0***>(&rsi17));
        rdi9 = reinterpret_cast<struct s0*>((rdx18 + rdx18 + rdx18 << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>((static_cast<int64_t>(reinterpret_cast<int32_t>(v12) / reinterpret_cast<int32_t>(edi16)) << 3) + reinterpret_cast<unsigned char>(rcx15))));
        rsp19 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp10) - 8);
        *rsp19 = 0x4916;
        rax20 = _ZN4Grid9getAnimalEv(rdi9);
        rsp10 = reinterpret_cast<void*>(rsp19 + 1);
        v11[v12 * 8] = rax20;
        ++v12;
    }
    v21 = 0;
    while (edx22 = H, eax23 = W, reinterpret_cast<int32_t>(v21) < reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(eax23) * reinterpret_cast<uint32_t>(edx22))) {
        if (!v11[v21 * 8] || (rdi9 = v11[v21 * 8], rsp24 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp10) - 8), *rsp24 = 0x4975, eax25 = _ZN6Animal7getTypeEv(rdi9, rsi17), rsp10 = reinterpret_cast<void*>(rsp24 + 1), v2 != eax25)) {
            eax26 = 0;
        } else {
            eax26 = 1;
        }
        if (*reinterpret_cast<signed char*>(&eax26)) {
            rax27 = (*reinterpret_cast<struct s0**>(&(v11[v21 * 8])->f0))->f8;
            rdi9 = v11[v21 * 8];
            rsp28 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp10) - 8);
            *rsp28 = 0x49b9;
            eax29 = reinterpret_cast<int32_t>(rax27(rdi9, rsi17));
            rsp10 = reinterpret_cast<void*>(rsp28 + 1);
            if (eax29) {
                if (eax29 != 1) {
                    if (eax29 == 2) {
                        rdi9 = v11[v21 * 8];
                        rax30 = (*reinterpret_cast<struct s0**>(&(v11[v21 * 8])->f0))->f32;
                        *reinterpret_cast<struct s0***>(&rcx31) = W;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx31) + 4) = 0;
                        *reinterpret_cast<struct s0***>(&rdx32) = H;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx32) + 4) = 0;
                        rsi17 = grid;
                        rsp33 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp10) - 8);
                        *rsp33 = 0x4b6f;
                        rax30(rdi9, rsi17, rdx32, rcx31, r8_8, 0);
                        rsp10 = reinterpret_cast<void*>(rsp33 + 1);
                    }
                } else {
                    rcx34 = grid;
                    edi35 = W;
                    __asm__("cdq ");
                    esi36 = W;
                    __asm__("cdq ");
                    rdx37 = reinterpret_cast<int32_t>(v21) % reinterpret_cast<int32_t>(esi36);
                    rdi38 = reinterpret_cast<struct s0*>((rdx37 + rdx37 + rdx37 << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>((static_cast<int64_t>(reinterpret_cast<int32_t>(v21) / reinterpret_cast<int32_t>(edi35)) << 3) + reinterpret_cast<unsigned char>(rcx34))));
                    rsp39 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp10) - 8);
                    *rsp39 = 0x4ad2;
                    rax40 = _ZN4Grid9getAnimalEv(rdi38);
                    rsp41 = rsp39 + 1 - 1;
                    *rsp41 = 0x4adf;
                    fun_1010(rax40, 40);
                    rcx42 = grid;
                    esi43 = W;
                    __asm__("cdq ");
                    esi44 = W;
                    __asm__("cdq ");
                    rdx45 = reinterpret_cast<int32_t>(v21) % reinterpret_cast<int32_t>(esi44);
                    *reinterpret_cast<struct s0***>(&rsi17) = reinterpret_cast<struct s0**>(0);
                    *reinterpret_cast<int32_t*>(&rsi17 + 4) = 0;
                    rdi9 = reinterpret_cast<struct s0*>((rdx45 + rdx45 + rdx45 << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>((static_cast<int64_t>(reinterpret_cast<int32_t>(v21) / reinterpret_cast<int32_t>(esi43)) << 3) + reinterpret_cast<unsigned char>(rcx42))));
                    rsp46 = rsp41 + 1 - 1;
                    *rsp46 = 0x4b2c;
                    _ZN4Grid9setAnimalEP6Animal(rdi9, 0);
                    rsp10 = reinterpret_cast<void*>(rsp46 + 1);
                }
            } else {
                rdi47 = v11[v21 * 8];
                rax48 = (*reinterpret_cast<struct s0**>(&(v11[v21 * 8])->f0))->f16;
                *reinterpret_cast<struct s0***>(&rcx49) = W;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx49) + 4) = 0;
                *reinterpret_cast<struct s0***>(&rdx50) = H;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx50) + 4) = 0;
                rsi51 = grid;
                rsp52 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp10) - 8);
                *rsp52 = 0x4a01;
                eax53 = reinterpret_cast<int32_t>(rax48(rdi47, rsi51, rdx50, rcx49, r8_8, 0));
                rsp54 = reinterpret_cast<void*>(rsp52 + 1);
                if (eax53 != -1) {
                    rax55 = (*reinterpret_cast<struct s0**>(&(v11[v21 * 8])->f0))->f24;
                    rsi17 = grid;
                    *reinterpret_cast<int32_t*>(&rdx56) = eax53;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx56) + 4) = 0;
                    rdi9 = v11[v21 * 8];
                    rsp57 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp54) - 8);
                    *rsp57 = 0x4a7b;
                    rax55(rdi9, rsi17, rdx56);
                    rsp10 = reinterpret_cast<void*>(rsp57 + 1);
                } else {
                    rdi9 = v11[v21 * 8];
                    rax58 = *reinterpret_cast<struct s0**>(&(*reinterpret_cast<struct s0**>(&(v11[v21 * 8])->f0))->f0);
                    *reinterpret_cast<struct s0***>(&rcx59) = W;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx59) + 4) = 0;
                    *reinterpret_cast<struct s0***>(&rdx60) = H;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx60) + 4) = 0;
                    rsi17 = grid;
                    rsp61 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp54) - 8);
                    *rsp61 = 0x4a41;
                    rax58(rdi9, rsi17, rdx60, rcx59, r8_8, 0);
                    rsp10 = reinterpret_cast<void*>(rsp61 + 1);
                }
            }
        }
        ++v21;
    }
    rax62 = v4 ^ g28;
    if (rax62) {
        rax62 = fun_1030(rdi9, rsi17);
    }
    return rax62;
}

/* __static_initialization_and_destruction_0(int, int) */
void _Z41__static_initialization_and_destruction_0ii(int32_t edi, int32_t esi) {
    int64_t rax3;

    if (edi == 1 && esi == 0xffff) {
        fun_1060(0x20629c);
        rax3 = _ZNSt8ios_base4InitD1Ev;
        fun_fc0(rax3, 0x20629c, 0x206008);
    }
    return;
}

int64_t _ITM_deregisterTMCloneTable = 0;

int64_t deregister_tm_clones(int64_t rdi) {
    int64_t rax2;

    rax2 = 0x206038;
    if (1 || (rax2 = _ITM_deregisterTMCloneTable, rax2 == 0)) {
        return rax2;
    } else {
        goto rax2;
    }
}

/* __static_initialization_and_destruction_0(int, int) */
void _Z41__static_initialization_and_destruction_0ii(int32_t edi, int32_t esi) {
    int64_t rax3;

    if (edi == 1 && esi == 0xffff) {
        fun_1060(0x20627a);
        rax3 = _ZNSt8ios_base4InitD1Ev;
        fun_fc0(rax3, 0x20627a, 0x206008);
    }
    return;
}

/* Grid::setFood() */
void _ZN4Grid7setFoodEv(struct s3* rdi, struct s0* rsi) {
    rdi->f1 = 1;
    rdi->f0 = reinterpret_cast<struct s0*>(0);
    return;
}

/* Animal::getBreed() */
int32_t _ZN6Animal8getBreedEv(struct s0* rdi, struct s0* rsi) {
    return rdi->f32;
}

/* Animal::getY() */
struct s0** _ZN6Animal4getYEv(struct s0* rdi, struct s0* rsi) {
    return rdi->f20;
}

/* __static_initialization_and_destruction_0(int, int) */
void _Z41__static_initialization_and_destruction_0ii(int32_t edi, int32_t esi) {
    int64_t rax3;

    if (edi == 1 && esi == 0xffff) {
        fun_1060(0x206279);
        rax3 = _ZNSt8ios_base4InitD1Ev;
        fun_fc0(rax3, 0x206279, 0x206008);
    }
    return;
}

int64_t __cxa_throw_bad_array_new_length = 0x1056;

void fun_1050(struct s0* rdi, struct s0* rsi, struct s0* rdx) {
    goto __cxa_throw_bad_array_new_length;
}

/* Animal::getX() */
struct s0** _ZN6Animal4getXEv(struct s0* rdi, struct s0* rsi, ...) {
    return rdi->f24;
}

int32_t stepNum = 0;

struct s0* fun_1070(struct s0* rdi, int64_t rsi);

struct s0* hunter = reinterpret_cast<struct s0*>(0);

/* Animal::getLife() */
int32_t _ZN6Animal7getLifeEv(struct s0* rdi, struct s0* rsi);

/* std::basic_ostream<char, std::char_traits<char> >& std::endl<char, std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&) */
struct s0* _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ = reinterpret_cast<struct s0*>(0);

/* showStatus() */
void _Z10showStatusv(int64_t rdi, struct s0* rsi, struct s0* rdx) {
    struct s0* rax4;
    int32_t eax5;
    int32_t eax6;
    int64_t rsi7;
    struct s0* rax8;
    struct s0* rax9;
    struct s0* rax10;
    int32_t eax11;
    int64_t rsi12;
    struct s0* rax13;
    struct s0* rax14;

    fun_ff0(0x206040, "\n==================================================\n\n");
    rax4 = fun_ff0(0x206040, "Time Step: ");
    eax5 = stepNum;
    stepNum = eax5 + 1;
    eax6 = stepNum;
    *reinterpret_cast<int32_t*>(&rsi7) = eax6;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = 0;
    rax8 = fun_1070(rax4, rsi7);
    rax9 = fun_ff0(rax8, "\t\tLife: ");
    rax10 = hunter;
    eax11 = _ZN6Animal7getLifeEv(rax10, "\t\tLife: ");
    *reinterpret_cast<int32_t*>(&rsi12) = eax11;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = 0;
    rax13 = fun_1070(rax9, rsi12);
    rax14 = _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
    fun_1020(rax13, rax14);
    return;
}

/* showGrid() */
void _Z8showGridv(int64_t rdi, struct s0* rsi, struct s0* rdx) {
    struct s0** v4;
    struct s0** eax5;
    struct s0** v6;
    struct s0** eax7;
    struct s0* rax8;
    int64_t rdx9;
    struct s0* rdi10;
    struct s0* rax11;
    struct s0* rax12;
    int64_t rdx13;
    struct s0* rdi14;
    signed char al15;
    struct s0* rax16;
    int64_t rdx17;
    struct s1* rdi18;
    uint32_t eax19;
    struct s0* rax20;
    int64_t rdx21;
    struct s0* rdi22;
    struct s0* rax23;
    struct s0* eax24;
    struct s0* rax25;
    int64_t rdx26;
    struct s0* rdi27;
    struct s0* rax28;
    struct s0* eax29;
    struct s0* rax30;
    struct s0* rax31;

    v4 = reinterpret_cast<struct s0**>(0);
    while (eax5 = H, reinterpret_cast<int32_t>(v4) < reinterpret_cast<int32_t>(eax5)) {
        v6 = reinterpret_cast<struct s0**>(0);
        while (eax7 = W, reinterpret_cast<int32_t>(v6) < reinterpret_cast<int32_t>(eax7)) {
            rax8 = grid;
            rdx9 = reinterpret_cast<int32_t>(v6);
            rdi10 = reinterpret_cast<struct s0*>((rdx9 + rdx9 + rdx9 << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rax8) + (reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(v4))) << 3))));
            rax11 = _ZN4Grid9getAnimalEv(rdi10, rdi10);
            if (!reinterpret_cast<uint1_t>(!!rax11)) {
                rax12 = grid;
                rdx13 = reinterpret_cast<int32_t>(v6);
                rdi14 = reinterpret_cast<struct s0*>((rdx13 + rdx13 + rdx13 << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rax12) + (reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(v4))) << 3))));
                al15 = _ZN4Grid8getGrassEv(rdi14, rdi14);
                if (!al15) {
                    rax16 = grid;
                    rdx17 = reinterpret_cast<int32_t>(v6);
                    rdi18 = reinterpret_cast<struct s1*>((rdx17 + rdx17 + rdx17 << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rax16) + (reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(v4))) << 3))));
                    eax19 = _ZN4Grid7getFoodEv(rdi18, rsi);
                    if (!*reinterpret_cast<signed char*>(&eax19)) {
                        rsi = reinterpret_cast<struct s0*>("- ");
                        fun_ff0(0x206040, "- ");
                    } else {
                        rsi = reinterpret_cast<struct s0*>("F ");
                        fun_ff0(0x206040, "F ");
                    }
                } else {
                    rsi = reinterpret_cast<struct s0*>("* ");
                    fun_ff0(0x206040, "* ");
                }
            } else {
                rax20 = grid;
                rdx21 = reinterpret_cast<int32_t>(v6);
                rdi22 = reinterpret_cast<struct s0*>((rdx21 + rdx21 + rdx21 << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rax20) + (reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(v4))) << 3))));
                rax23 = _ZN4Grid9getAnimalEv(rdi22, rdi22);
                eax24 = _ZN6Animal7getTypeEv(rax23, rsi);
                if (!reinterpret_cast<uint1_t>(eax24 == 1)) {
                    rax25 = grid;
                    rdx26 = reinterpret_cast<int32_t>(v6);
                    rdi27 = reinterpret_cast<struct s0*>((rdx26 + rdx26 + rdx26 << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rax25) + (reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(v4))) << 3))));
                    rax28 = _ZN4Grid9getAnimalEv(rdi27, rdi27);
                    eax29 = _ZN6Animal7getTypeEv(rax28, rsi);
                    if (!reinterpret_cast<uint1_t>(eax29 == 2)) {
                        rsi = reinterpret_cast<struct s0*>("H ");
                        fun_ff0(0x206040, "H ");
                    } else {
                        rsi = reinterpret_cast<struct s0*>("T ");
                        fun_ff0(0x206040, "T ");
                    }
                } else {
                    rsi = reinterpret_cast<struct s0*>("R ");
                    fun_ff0(0x206040, "R ");
                }
            }
            ++v6;
        }
        rax30 = _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
        rsi = rax30;
        fun_1020(0x206040, rsi);
        ++v4;
    }
    rax31 = _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
    fun_1020(0x206040, rax31);
    return;
}

/* hunterTurn() */
int32_t _Z10hunterTurnv();

/* runTurn() */
uint32_t _Z7runTurnv(int64_t rdi, struct s0* rsi, struct s0* rdx) {
    int32_t eax4;
    struct s0** v5;
    struct s0** eax6;
    struct s0** v7;
    struct s0** eax8;
    struct s0* rax9;
    struct s0* rdx10;
    struct s0* rdi11;
    signed char al12;
    int32_t eax13;
    struct s0* rdi14;
    int32_t eax15;
    struct s0* rax16;
    int64_t rdx17;
    struct s1* rdi18;
    uint32_t eax19;
    uint32_t eax20;
    struct s0* rax21;
    int64_t rdx22;
    struct s0* rdi23;
    struct s0* rax24;
    int32_t eax25;
    struct s0* rax26;
    int64_t rdx27;
    struct s0** rdi28;
    int32_t v29;
    int32_t v30;
    struct s0** v31;
    struct s0** eax32;
    struct s0** v33;
    struct s0** eax34;
    struct s0* rax35;
    int64_t rdx36;
    struct s0* rdi37;
    struct s0* rax38;
    struct s0* rax39;
    int64_t rdx40;
    struct s0* rdi41;
    struct s0* rax42;
    struct s0* eax43;
    int32_t eax44;
    struct s0* rax45;
    int64_t rdx46;
    struct s0* rdi47;
    struct s0* rax48;
    struct s0* rax49;
    int64_t rdx50;
    struct s0* rdi51;
    struct s0* rax52;
    struct s0* eax53;
    int32_t eax54;
    struct s0* rax55;
    struct s0* rax56;
    struct s0* rax57;
    uint32_t eax58;
    struct s0* rax59;
    int32_t eax60;
    struct s0* rax61;
    struct s0* rax62;
    struct s0* rax63;
    struct s0* rax64;
    struct s0* rax65;
    struct s0* rax66;

    eax4 = _Z10hunterTurnv();
    if (eax4 != 1) {
        _Z10animalTurni(2);
        _Z10animalTurni(1);
        v5 = reinterpret_cast<struct s0**>(0);
        while (eax6 = H, reinterpret_cast<int32_t>(v5) < reinterpret_cast<int32_t>(eax6)) {
            v7 = reinterpret_cast<struct s0**>(0);
            while (eax8 = W, reinterpret_cast<int32_t>(v7) < reinterpret_cast<int32_t>(eax8)) {
                rax9 = grid;
                rdx10 = reinterpret_cast<struct s0*>(static_cast<int64_t>(reinterpret_cast<int32_t>(v7)));
                rdi11 = reinterpret_cast<struct s0*>((reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx10) + reinterpret_cast<unsigned char>(rdx10)) + reinterpret_cast<unsigned char>(rdx10) << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rax9) + (reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(v5))) << 3))));
                al12 = _ZN4Grid8getGrassEv(rdi11);
                if (!al12) {
                    eax13 = fun_fd0(0, rsi, rdx10);
                    *reinterpret_cast<struct s0***>(&rdi14) = reinterpret_cast<struct s0**>(reinterpret_cast<uint32_t>(v7) + eax13 * reinterpret_cast<uint32_t>(v5));
                    *reinterpret_cast<int32_t*>(&rdi14 + 4) = 0;
                    fun_fe0(rdi14, rsi);
                    eax15 = fun_fa0(rdi14);
                    if (eax15 - ((__intrinsic() >> 5) - (eax15 >> 31)) * 100 > 9 || ((rax16 = grid, rdx17 = reinterpret_cast<int32_t>(v7), rdi18 = reinterpret_cast<struct s1*>((rdx17 + rdx17 + rdx17 << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rax16) + (reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(v5))) << 3)))), eax19 = _ZN4Grid7getFoodEv(rdi18, rsi), eax20 = eax19 ^ 1, *reinterpret_cast<signed char*>(&eax20) == 0) || (rax21 = grid, rdx22 = reinterpret_cast<int32_t>(v7), rdi23 = reinterpret_cast<struct s0*>((rdx22 + rdx22 + rdx22 << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rax21) + (reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(v5))) << 3)))), rax24 = _ZN4Grid9getAnimalEv(rdi23), !!rax24))) {
                        eax25 = 0;
                    } else {
                        eax25 = 1;
                    }
                    if (*reinterpret_cast<signed char*>(&eax25)) {
                        rax26 = grid;
                        rdx27 = reinterpret_cast<int32_t>(v7);
                        rdi28 = reinterpret_cast<struct s0**>((rdx27 + rdx27 + rdx27 << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rax26) + (reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(v5))) << 3))));
                        _ZN4Grid8setGrassEv(rdi28);
                    }
                }
                ++v7;
            }
            ++v5;
        }
        v29 = 0;
        v30 = 0;
        v31 = reinterpret_cast<struct s0**>(0);
        while (eax32 = H, reinterpret_cast<int32_t>(v31) < reinterpret_cast<int32_t>(eax32)) {
            v33 = reinterpret_cast<struct s0**>(0);
            while (eax34 = W, reinterpret_cast<int32_t>(v33) < reinterpret_cast<int32_t>(eax34)) {
                rax35 = grid;
                rdx36 = reinterpret_cast<int32_t>(v33);
                rdi37 = reinterpret_cast<struct s0*>((rdx36 + rdx36 + rdx36 << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rax35) + (reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(v31))) << 3))));
                rax38 = _ZN4Grid9getAnimalEv(rdi37);
                if (!rax38 || (rax39 = grid, rdx40 = reinterpret_cast<int32_t>(v33), rdi41 = reinterpret_cast<struct s0*>((rdx40 + rdx40 + rdx40 << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rax39) + (reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(v31))) << 3)))), rax42 = _ZN4Grid9getAnimalEv(rdi41), eax43 = _ZN6Animal7getTypeEv(rax42, rsi), !reinterpret_cast<int1_t>(eax43 == 1))) {
                    eax44 = 0;
                } else {
                    eax44 = 1;
                }
                if (!*reinterpret_cast<signed char*>(&eax44)) {
                    rax45 = grid;
                    rdx46 = reinterpret_cast<int32_t>(v33);
                    rdi47 = reinterpret_cast<struct s0*>((rdx46 + rdx46 + rdx46 << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rax45) + (reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(v31))) << 3))));
                    rax48 = _ZN4Grid9getAnimalEv(rdi47);
                    if (!rax48 || (rax49 = grid, rdx50 = reinterpret_cast<int32_t>(v33), rdi51 = reinterpret_cast<struct s0*>((rdx50 + rdx50 + rdx50 << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rax49) + (reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(v31))) << 3)))), rax52 = _ZN4Grid9getAnimalEv(rdi51), eax53 = _ZN6Animal7getTypeEv(rax52, rsi), !reinterpret_cast<int1_t>(eax53 == 2))) {
                        eax54 = 0;
                    } else {
                        eax54 = 1;
                    }
                    if (*reinterpret_cast<signed char*>(&eax54)) {
                        ++v30;
                    }
                } else {
                    ++v29;
                }
                ++v33;
            }
            ++v31;
        }
        if (!v29)
            goto addr_458a_32;
    } else {
        rax55 = hunter;
        fun_1010(rax55, 40);
        rax56 = fun_ff0(0x206040, "Hunter starved to death");
        rax57 = _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
        fun_1020(rax56, rax57);
        eax58 = 1;
        goto addr_463d_34;
    }
    if (v30) {
        rax59 = hunter;
        eax60 = _ZN6Animal7getLifeEv(rax59, rsi);
        if (!!eax60) {
            eax58 = 0;
        } else {
            rax61 = fun_ff0(0x206040, "Hunter is dead");
            rax62 = _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
            fun_1020(rax61, rax62);
            eax58 = 1;
        }
    } else {
        rax63 = fun_ff0(0x206040, "Tigers are all dead");
        rax64 = _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
        fun_1020(rax63, rax64);
        eax58 = 1;
    }
    addr_463d_34:
    return eax58;
    addr_458a_32:
    rax65 = fun_ff0(0x206040, "Rabbits are gone");
    rax66 = _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
    fun_1020(rax65, rax66);
    eax58 = 1;
    goto addr_463d_34;
}

int64_t _Unwind_Resume = 0x1086;

struct s0* fun_1080(struct s0* rdi, struct s0* rsi) {
    goto _Unwind_Resume;
}

/* Grid::removeGrass() */
void _ZN4Grid11removeGrassEv(struct s0** rdi, struct s0* rsi) {
    *rdi = reinterpret_cast<struct s0*>(0);
    return;
}

int32_t _ZN6Animal8LIFE_NUME = -1;

int32_t _ZN6Animal9BREED_NUME = -1;

/* Animal::Animal(Grid**, int, int) */
void _ZN6AnimalC1EPP4Gridii(struct s0* rdi, struct s0* rsi, struct s0** edx, struct s0** ecx) {
    uint64_t rdx5;
    struct s0* rdi6;
    int32_t edx7;
    int32_t edx8;

    *reinterpret_cast<struct s0**>(&rdi->f0) = reinterpret_cast<struct s0*>(0x205ca0);
    rdx5 = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(ecx)));
    rdi6 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rsi) + reinterpret_cast<int32_t>(edx) * 8)) + (rdx5 + rdx5 + rdx5 << 3));
    _ZN4Grid9setAnimalEP6Animal(rdi6, rdi);
    rdi->f16 = reinterpret_cast<struct s0*>(0);
    rdi->f20 = edx;
    rdi->f24 = ecx;
    edx7 = _ZN6Animal8LIFE_NUME;
    rdi->f28 = edx7;
    edx8 = _ZN6Animal9BREED_NUME;
    rdi->f32 = edx8;
    return;
}

/* Animal::setType(int) */
void _ZN6Animal7setTypeEi(struct s0* rdi, struct s0* esi) {
    rdi->f16 = esi;
    return;
}

int32_t _ZN6Hunter8LIFE_NUME = 7;

int32_t _ZN6Hunter9BREED_NUME = -1;

/* Hunter::Hunter(Grid**, int, int) */
void _ZN6HunterC2EPP4Gridii(struct s0* rdi, struct s0* rsi, struct s0** edx, struct s0** ecx) {
    int32_t edx5;
    int32_t edx6;

    _ZN6AnimalC1EPP4Gridii(rdi, rsi, edx, ecx);
    *reinterpret_cast<struct s0**>(&rdi->f0) = reinterpret_cast<struct s0*>(0x205bf0);
    _ZN6Animal7setTypeEi(rdi, 3);
    edx5 = _ZN6Hunter8LIFE_NUME;
    _ZN6Animal7setLifeEi(rdi, edx5);
    edx6 = _ZN6Hunter9BREED_NUME;
    _ZN6Animal8setBreedEi(rdi, edx6);
    return;
}

/* Animal::getLife() */
int32_t _ZN6Animal7getLifeEv(struct s0* rdi, struct s0* rsi) {
    return rdi->f28;
}

/* getEmptyDirection(Grid**, Animal*, int, int) */
uint32_t _Z17getEmptyDirectionPP4GridP6Animalii(struct s0* rdi, struct s0* rsi, void* edx, void* ecx, ...) {
    struct s0* rdx3;
    void* v5;
    uint64_t rax6;
    uint64_t v7;
    uint32_t v8;
    struct s0** eax9;
    struct s0** v10;
    struct s0* rdi11;
    struct s0** eax12;
    struct s0** v13;
    struct s0* rax14;
    struct s0* rax15;
    struct s0* rax16;
    struct s0* rax17;
    int32_t v18;
    int32_t eax19;
    int32_t eax20;
    uint32_t v21;
    uint64_t rax22;
    uint32_t v23;
    uint32_t v24;
    struct s0* rsi25;

    *reinterpret_cast<void**>(&rdx3) = edx;
    v5 = *reinterpret_cast<void**>(&rdx3);
    rax6 = g28;
    v7 = rax6;
    v8 = 0;
    eax9 = _ZN6Animal4getYEv(rsi, rsi);
    v10 = eax9;
    rdi11 = rsi;
    eax12 = _ZN6Animal4getXEv(rdi11, rsi);
    v13 = eax12;
    if (reinterpret_cast<int32_t>(v10) <= reinterpret_cast<int32_t>(0) || (rdx3 = reinterpret_cast<struct s0*>(static_cast<int64_t>(reinterpret_cast<int32_t>(v13))), rdi11 = reinterpret_cast<struct s0*>((reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx3) + reinterpret_cast<unsigned char>(rdx3)) + reinterpret_cast<unsigned char>(rdx3) << 3) + reinterpret_cast<uint64_t>(*reinterpret_cast<struct s0***>(reinterpret_cast<unsigned char>(rdi) + ((static_cast<int64_t>(reinterpret_cast<int32_t>(v10)) << 3) + 0xfffffffffffffff8)))), rax14 = _ZN4Grid9getAnimalEv(rdi11), !!rax14)) {
    }
    if (reinterpret_cast<int32_t>(v10) >= reinterpret_cast<int32_t>(reinterpret_cast<int32_t>(v5) - 1) || (rdx3 = reinterpret_cast<struct s0*>(static_cast<int64_t>(reinterpret_cast<int32_t>(v13))), rdi11 = reinterpret_cast<struct s0*>((reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx3) + reinterpret_cast<unsigned char>(rdx3)) + reinterpret_cast<unsigned char>(rdx3) << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rdi) + reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(v10 + 1) * 8)))), rax15 = _ZN4Grid9getAnimalEv(rdi11), !!rax15)) {
    }
    if (reinterpret_cast<int32_t>(v13) >= reinterpret_cast<int32_t>(reinterpret_cast<int32_t>(ecx) - 1) || (rdx3 = reinterpret_cast<struct s0*>(v13 + 1), rdi11 = reinterpret_cast<struct s0*>((reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx3) + reinterpret_cast<unsigned char>(rdx3)) + reinterpret_cast<unsigned char>(rdx3) << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rdi) + reinterpret_cast<int32_t>(v10) * 8))), rax16 = _ZN4Grid9getAnimalEv(rdi11), !!rax16)) {
    }
    if (reinterpret_cast<int32_t>(v13) <= reinterpret_cast<int32_t>(0) || (rdx3 = reinterpret_cast<struct s0*>(static_cast<int64_t>(reinterpret_cast<int32_t>(v13))), rdi11 = reinterpret_cast<struct s0*>((reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx3) + reinterpret_cast<unsigned char>(rdx3)) + reinterpret_cast<unsigned char>(rdx3) << 3) - 24 + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rdi) + reinterpret_cast<int32_t>(v10) * 8))), rax17 = _ZN4Grid9getAnimalEv(rdi11), !!rax17)) {
    }
    v18 = 0;
    while (v18 <= 3) {
        if (!1) {
            ++v8;
        }
        ++v18;
    }
    if (v8) {
        eax19 = fun_fd0(0, rsi, rdx3);
        *reinterpret_cast<struct s0***>(&rdi11) = reinterpret_cast<struct s0**>(reinterpret_cast<uint32_t>(v13) + eax19 * reinterpret_cast<uint32_t>(v10));
        *reinterpret_cast<int32_t*>(&rdi11 + 4) = 0;
        fun_fe0(rdi11, rsi);
        eax20 = fun_fa0(rdi11);
        __asm__("cdq ");
        v21 = reinterpret_cast<uint32_t>(eax20 % reinterpret_cast<int32_t>(v8));
        if (v21) {
            *reinterpret_cast<uint32_t*>(&rax22) = v21;
        } else {
            *reinterpret_cast<uint32_t*>(&rax22) = v8;
        }
        v23 = *reinterpret_cast<uint32_t*>(&rax22);
        v24 = 0;
        while (reinterpret_cast<int32_t>(v24) <= reinterpret_cast<int32_t>(3)) {
            *reinterpret_cast<uint32_t*>(&rax22) = 0;
            if (!1) {
                --v23;
            }
            if (!v23)
                goto addr_3107_27;
            ++v24;
        }
    } else {
        *reinterpret_cast<uint32_t*>(&rax22) = 0xffffffff;
    }
    addr_3112_30:
    rsi25 = reinterpret_cast<struct s0*>(v7 ^ g28);
    if (rsi25) {
        rax22 = fun_1030(rdi11, rsi25);
    }
    return *reinterpret_cast<uint32_t*>(&rax22);
    addr_3107_27:
    *reinterpret_cast<uint32_t*>(&rax22) = v24;
    goto addr_3112_30;
}

/* std::ostream::operator<<(int) */
int64_t _ZNSolsEi = 0x1076;

struct s0* fun_1070(struct s0* rdi, int64_t rsi) {
    goto _ZNSolsEi;
}

/* getRandNum(bool*, int, int, int) */
struct s0* _Z10getRandNumPbiii(struct s0* rdi, struct s0* rsi, struct s0** edx, struct s0** ecx) {
    struct s0* v5;
    int32_t v6;
    struct s0** v7;
    struct s0* rax8;
    struct s0* rax9;
    struct s0* v10;
    int32_t v11;
    int32_t eax12;
    void* v13;
    struct s0** v14;
    uint32_t eax15;

    v5 = rdi;
    v6 = *reinterpret_cast<int32_t*>(&rsi);
    v7 = edx;
    rax8 = reinterpret_cast<struct s0*>(static_cast<int64_t>(v6));
    if (reinterpret_cast<unsigned char>(rax8) > reinterpret_cast<unsigned char>(0x1ffffffffffffffe)) {
        fun_1050(rdi, rsi, 0x1ffffffffffffffe);
    } else {
        rdi = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(rax8) << 2);
        rax9 = fun_f90(rdi, rsi);
        v10 = rax9;
        v11 = 0;
    }
    while (v11 < v6) {
        eax12 = fun_fa0(rdi);
        __asm__("cdq ");
        v13 = reinterpret_cast<void*>(eax12 % reinterpret_cast<int32_t>(v7));
        v14 = reinterpret_cast<struct s0**>(0);
        while (reinterpret_cast<int32_t>(v14) < reinterpret_cast<int32_t>(v7)) {
            if (reinterpret_cast<int1_t>(v7 == reinterpret_cast<uint32_t>(v14) + reinterpret_cast<uint32_t>(v13))) {
                v13 = reinterpret_cast<void*>(-reinterpret_cast<uint32_t>(v14));
            }
            eax15 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(v14) + reinterpret_cast<uint32_t>(v13)))))) ^ 1;
            if (*reinterpret_cast<signed char*>(&eax15))
                goto addr_2e90_10;
            ++v14;
        }
        addr_2ecb_12:
        ++v11;
        continue;
        addr_2e90_10:
        *reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(v10) + v11 * 4) = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(v14) + reinterpret_cast<uint32_t>(v13));
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(v14) + reinterpret_cast<uint32_t>(v13))))) = 1;
        goto addr_2ecb_12;
    }
    return v10;
}

/* std::istream::operator>>(int&) */
int64_t _ZNSirsERi = 0xfb6;

void fun_fb0(int64_t rdi, struct s0* rsi) {
    goto _ZNSirsERi;
}

/* initMap(int, int) */
void _Z7initMapii(struct s0** edi, struct s0* rsi, struct s0* rdx) {
    struct s0** v4;
    int32_t v5;
    struct s0** edx6;
    struct s0** eax7;
    struct s0* rax8;
    struct s0* v9;
    uint32_t v10;
    struct s0** edx11;
    struct s0** eax12;
    struct s0* rcx13;
    struct s0** ebx14;
    struct s0** esi15;
    int64_t rdx16;
    struct s0* rdi17;
    signed char al18;
    struct s0* rcx19;
    struct s0** ebx20;
    struct s0** esi21;
    int64_t rdx22;
    struct s0* rdi23;
    struct s0* rax24;
    int32_t ecx25;
    struct s0** edx26;
    struct s0** eax27;
    struct s0* rcx28;
    struct s0** edx29;
    struct s0** eax30;
    int64_t rdx31;
    struct s0* rsi32;
    struct s0* rax33;
    struct s0* v34;
    struct s0** v35;
    struct s0* v36;
    struct s0* rax37;
    struct s0** ecx38;
    struct s0** edi39;
    struct s0* rax40;
    struct s0* rax41;
    struct s0** ecx42;
    struct s0** esi43;
    struct s0* rax44;
    struct s0* rax45;
    struct s0** ecx46;
    struct s0** esi47;
    struct s0* rax48;
    struct s0* rcx49;
    struct s0** esi50;

    v4 = edi;
    v5 = *reinterpret_cast<int32_t*>(&rsi);
    edx6 = H;
    eax7 = W;
    rax8 = fun_f90(static_cast<int64_t>(reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(eax7) * reinterpret_cast<uint32_t>(edx6))), rsi);
    v9 = rax8;
    v10 = 0;
    while (edx11 = H, eax12 = W, reinterpret_cast<int32_t>(v10) < reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(eax12) * reinterpret_cast<uint32_t>(edx11))) {
        rcx13 = grid;
        ebx14 = W;
        __asm__("cdq ");
        esi15 = W;
        __asm__("cdq ");
        rdx16 = reinterpret_cast<int32_t>(v10) % reinterpret_cast<int32_t>(esi15);
        rdi17 = reinterpret_cast<struct s0*>((rdx16 + rdx16 + rdx16 << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>((static_cast<int64_t>(reinterpret_cast<int32_t>(v10) / reinterpret_cast<int32_t>(ebx14)) << 3) + reinterpret_cast<unsigned char>(rcx13))));
        al18 = _ZN4Grid8getGrassEv(rdi17);
        if (al18 || (rcx19 = grid, ebx20 = W, esi21 = W, rdx22 = reinterpret_cast<int32_t>(v10) % reinterpret_cast<int32_t>(esi21), rdi23 = reinterpret_cast<struct s0*>((rdx22 + rdx22 + rdx22 << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>((static_cast<int64_t>(reinterpret_cast<int32_t>(v10) / reinterpret_cast<int32_t>(ebx20)) << 3) + reinterpret_cast<unsigned char>(rcx19)))), rax24 = _ZN4Grid9getAnimalEv(rdi23), !!rax24)) {
            ecx25 = 1;
        } else {
            ecx25 = 0;
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v9) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(v10)))) = *reinterpret_cast<signed char*>(&ecx25);
        ++v10;
    }
    edx26 = H;
    eax27 = W;
    *reinterpret_cast<struct s0***>(&rcx28) = reinterpret_cast<struct s0**>(reinterpret_cast<uint32_t>(edx26) * reinterpret_cast<uint32_t>(eax27));
    *reinterpret_cast<int32_t*>(&rcx28 + 4) = 0;
    edx29 = H;
    eax30 = W;
    *reinterpret_cast<struct s0***>(&rdx31) = reinterpret_cast<struct s0**>(reinterpret_cast<uint32_t>(edx29) * reinterpret_cast<uint32_t>(eax30));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx31) + 4) = 0;
    *reinterpret_cast<struct s0***>(&rsi32) = v4;
    *reinterpret_cast<int32_t*>(&rsi32 + 4) = 0;
    rax33 = _Z10getRandNumPbiii(v9, rsi32, *reinterpret_cast<struct s0***>(&rdx31), *reinterpret_cast<struct s0***>(&rcx28));
    v34 = rax33;
    v35 = reinterpret_cast<struct s0**>(0);
    while (reinterpret_cast<int32_t>(v35) < reinterpret_cast<int32_t>(v4)) {
        v36 = *reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(v34) + reinterpret_cast<int32_t>(v35) * 4);
        if (v5) {
            if (v5 != 1) {
                if (v5 != 2) {
                    rax37 = fun_1000(40, rsi32);
                    ecx38 = W;
                    __asm__("cdq ");
                    *reinterpret_cast<struct s0***>(&rcx28) = reinterpret_cast<struct s0**>(reinterpret_cast<signed char>(v36) % reinterpret_cast<int32_t>(ecx38));
                    *reinterpret_cast<int32_t*>(&rcx28 + 4) = 0;
                    edi39 = W;
                    __asm__("cdq ");
                    *reinterpret_cast<struct s0***>(&rdx31) = reinterpret_cast<struct s0**>(reinterpret_cast<signed char>(v36) / reinterpret_cast<int32_t>(edi39));
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx31) + 4) = 0;
                    rax40 = grid;
                    rsi32 = rax40;
                    _ZN6HunterC2EPP4Gridii(rax37, rsi32, *reinterpret_cast<struct s0***>(&rdx31), *reinterpret_cast<struct s0***>(&rcx28));
                    hunter = rax37;
                } else {
                    rax41 = fun_1000(40, rsi32);
                    ecx42 = W;
                    __asm__("cdq ");
                    *reinterpret_cast<struct s0***>(&rcx28) = reinterpret_cast<struct s0**>(reinterpret_cast<signed char>(v36) % reinterpret_cast<int32_t>(ecx42));
                    *reinterpret_cast<int32_t*>(&rcx28 + 4) = 0;
                    esi43 = W;
                    __asm__("cdq ");
                    *reinterpret_cast<struct s0***>(&rdx31) = reinterpret_cast<struct s0**>(reinterpret_cast<signed char>(v36) / reinterpret_cast<int32_t>(esi43));
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx31) + 4) = 0;
                    rax44 = grid;
                    rsi32 = rax44;
                    _ZN5TigerC2EPP4Gridii(rax41, rsi32, *reinterpret_cast<struct s0***>(&rdx31), *reinterpret_cast<struct s0***>(&rcx28));
                }
            } else {
                rax45 = fun_1000(40, rsi32);
                ecx46 = W;
                __asm__("cdq ");
                *reinterpret_cast<struct s0***>(&rcx28) = reinterpret_cast<struct s0**>(reinterpret_cast<signed char>(v36) % reinterpret_cast<int32_t>(ecx46));
                *reinterpret_cast<int32_t*>(&rcx28 + 4) = 0;
                esi47 = W;
                __asm__("cdq ");
                *reinterpret_cast<struct s0***>(&rdx31) = reinterpret_cast<struct s0**>(reinterpret_cast<signed char>(v36) / reinterpret_cast<int32_t>(esi47));
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx31) + 4) = 0;
                rax48 = grid;
                rsi32 = rax48;
                _ZN6RabbitC2EPP4Gridii(rax45, rsi32, *reinterpret_cast<struct s0***>(&rdx31), *reinterpret_cast<struct s0***>(&rcx28));
            }
        } else {
            rcx49 = grid;
            esi50 = W;
            __asm__("cdq ");
            rcx28 = *reinterpret_cast<struct s0**>((static_cast<int64_t>(reinterpret_cast<signed char>(v36) / reinterpret_cast<int32_t>(esi50)) << 3) + reinterpret_cast<unsigned char>(rcx49));
            *reinterpret_cast<struct s0***>(&rsi32) = W;
            *reinterpret_cast<int32_t*>(&rsi32 + 4) = 0;
            __asm__("cdq ");
            rdx31 = reinterpret_cast<signed char>(v36) % reinterpret_cast<int32_t>(*reinterpret_cast<struct s0***>(&rsi32));
            _ZN4Grid8setGrassEv((rdx31 + rdx31 + rdx31 << 3) + reinterpret_cast<unsigned char>(rcx28));
        }
        ++v35;
    }
    if (v9) {
        fun_1040(v9, rsi32, rdx31, rcx28);
    }
    if (v34) {
        fun_1040(v34, rsi32, rdx31, rcx28);
    }
    return;
}

/* hunterTurn() */
int32_t _Z10hunterTurnv() {
    void* rbp1;
    uint64_t rax2;
    struct s0* rsi3;
    struct s0* rax4;
    struct s0* rax5;
    int32_t eax6;
    struct s0* rsi7;
    int32_t v8;
    int32_t v9;
    struct s0* rax10;
    struct s0** ecx11;
    struct s0** edx12;
    int32_t v13;
    struct s0* rdi14;
    struct s0* rax15;
    int64_t rax16;
    int64_t r8_17;
    int32_t v18;
    int64_t rcx19;
    int64_t rdx20;
    struct s0* rdx21;
    struct s0* rax22;
    struct s0** rax23;
    int32_t eax24;
    uint64_t rax25;
    uint64_t rbx26;

    rbp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax2 = g28;
    fun_ff0(0x206040, "Select next command [0: move / 1: shoot]: ");
    fun_fb0(0x206160, reinterpret_cast<int64_t>(rbp1) + 0xffffffffffffffe0);
    fun_ff0(0x206040, "Enter the direction [0: up / 1: down / 2: right / 3: left]: ");
    rsi3 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rbp1) + 0xffffffffffffffe4);
    fun_fb0(0x206160, rsi3);
    rax4 = hunter;
    rax5 = hunter;
    eax6 = _ZN6Animal7getLifeEv(rax5, rsi3);
    *reinterpret_cast<int32_t*>(&rsi7) = eax6 - 1;
    *reinterpret_cast<int32_t*>(&rsi7 + 4) = 0;
    _ZN6Animal7setLifeEi(rax4, *reinterpret_cast<int32_t*>(&rsi7));
    if (v8) {
        if (v9 == 1) {
            rax10 = hunter;
            ecx11 = W;
            edx12 = H;
            rsi7 = grid;
            _ZN6Hunter5shootEPP4Gridiii(rax10, rsi7, edx12, ecx11, v13);
        }
    } else {
        rdi14 = hunter;
        rax15 = hunter;
        rax16 = (*reinterpret_cast<struct s0**>(&rax15->f0))->f40;
        *reinterpret_cast<int32_t*>(&r8_17) = v18;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_17) + 4) = 0;
        *reinterpret_cast<struct s0***>(&rcx19) = W;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx19) + 4) = 0;
        *reinterpret_cast<struct s0***>(&rdx20) = H;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx20) + 4) = 0;
        rsi7 = grid;
        rax16(rdi14, rsi7, rdx20, rcx19, r8_17);
    }
    rdx21 = hunter;
    rax22 = hunter;
    rax23 = (*reinterpret_cast<struct s0**>(&rax22->f0))->f8;
    eax24 = reinterpret_cast<int32_t>(rax23(rdx21, rsi7));
    if (eax24 != 1) {
        *reinterpret_cast<int32_t*>(&rax25) = 0;
    } else {
        *reinterpret_cast<int32_t*>(&rax25) = 1;
    }
    rbx26 = rax2 ^ g28;
    if (rbx26) {
        rax25 = fun_1030(rdx21, rsi7);
    }
    return *reinterpret_cast<int32_t*>(&rax25);
}

int64_t __libc_start_main = 0;

void main();

void __libc_csu_init(int32_t edi, int64_t rsi, int64_t rdx);

void __libc_csu_fini();

void _start() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    __libc_start_main(main, __return_address(), rsp1, __libc_csu_init, __libc_csu_fini, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

void _fini() {
    return;
}

void fun_1147() {
    int64_t v1;

    goto v1;
}

struct s4 {
    signed char[20] pad20;
    int32_t f20;
};

struct s5 {
    signed char[20] pad20;
    int32_t f20;
};

struct s6 {
    signed char[24] pad24;
    int32_t f24;
};

struct s7 {
    signed char[8] pad8;
    int64_t f8;
};

struct s8 {
    signed char[24] pad24;
    int32_t f24;
};

struct s9 {
    signed char[20] pad20;
    int32_t f20;
};

struct s10 {
    signed char[8] pad8;
    int64_t f8;
};

void fun_1544() {
    int64_t rax1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rdx4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    uint64_t rdx8;
    int64_t rbp9;
    struct s0* rsi10;
    int64_t rbp11;
    struct s0* rdi12;
    int64_t rbp13;
    int64_t rbp14;
    struct s0* rdi15;
    int64_t rbp16;
    struct s10* rbp17;

    *reinterpret_cast<int32_t*>(&rax1) = (*reinterpret_cast<struct s4**>(rbp2 - 24))->f20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    (*reinterpret_cast<struct s5**>(rbp3 - 24))->f20 = static_cast<int32_t>(rax1 - 1);
    rdx4 = (*reinterpret_cast<struct s6**>(rbp5 - 24))->f24;
    (*reinterpret_cast<struct s7**>(rbp6 - 24))->f8 = (*reinterpret_cast<int64_t**>(rbp7 - 32))[*reinterpret_cast<int32_t*>(&rax1)] + (rdx4 + rdx4 + rdx4 << 3);
    rdx8 = reinterpret_cast<uint64_t>(static_cast<int64_t>((*reinterpret_cast<struct s8**>(rbp9 - 24))->f24));
    rsi10 = *reinterpret_cast<struct s0**>(rbp11 - 24);
    rdi12 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>((*reinterpret_cast<struct s0****>(rbp13 - 32))[(*reinterpret_cast<struct s9**>(rbp14 - 24))->f20]) + (rdx8 + rdx8 + rdx8 << 3));
    _ZN4Grid9setAnimalEP6Animal(rdi12, rsi10);
    rdi15 = *reinterpret_cast<struct s0**>(rbp16 - 8);
    _ZN4Grid9setAnimalEP6Animal(rdi15, 0);
    goto rbp17->f8;
}

void fun_17a0() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rdx9;
    int64_t rbp10;
    struct s0* rdi11;
    int64_t rbp12;
    int64_t rbp13;
    struct s0* rax14;
    int32_t eax15;
    struct s0** esi16;
    int64_t rbp17;
    struct s0* rdi18;
    int64_t rbp19;
    struct s0** esi20;
    int64_t rbp21;
    struct s0* rdi22;
    int64_t rbp23;
    int64_t rdx24;
    int64_t rbp25;
    struct s0** rsi26;
    int64_t rbp27;
    int64_t rbp28;
    struct s0* rdi29;
    int64_t rbp30;
    uint64_t rdx31;
    int64_t rbp32;
    struct s0* rsi33;
    int64_t rbp34;
    struct s0* rdi35;
    int64_t rbp36;
    int64_t rbp37;
    struct s0* rdi38;
    int64_t rbp39;
    int64_t rdx40;
    int64_t rbp41;
    struct s1* rdi42;
    int64_t rbp43;
    int64_t rbp44;
    uint32_t eax45;
    int64_t rdx46;
    int64_t rbp47;
    struct s2* rdi48;
    int64_t rbp49;
    int64_t rbp50;
    int32_t edx51;
    struct s0* rdi52;
    int64_t rbp53;
    int64_t v54;

    *reinterpret_cast<int32_t*>(rbp1 - 32) = *reinterpret_cast<int32_t*>(rbp2 - 32) - 1;
    if (*reinterpret_cast<int32_t*>(rbp3 - 32) < 0 || (*reinterpret_cast<int32_t*>(rbp4 - 32) >= *reinterpret_cast<int32_t*>(rbp5 - 52) || (*reinterpret_cast<int32_t*>(rbp6 - 28) < 0 || (*reinterpret_cast<int32_t*>(rbp7 - 28) >= *reinterpret_cast<int32_t*>(rbp8 - 56) || (rdx9 = *reinterpret_cast<int32_t*>(rbp10 - 28), rdi11 = reinterpret_cast<struct s0*>((rdx9 + rdx9 + rdx9 << 3) + reinterpret_cast<uint64_t>((*reinterpret_cast<struct s0****>(rbp12 - 48))[*reinterpret_cast<int32_t*>(rbp13 - 32)])), rax14 = _ZN4Grid9getAnimalEv(rdi11), !!rax14))))) {
        eax15 = 1;
    } else {
        eax15 = 0;
    }
    if (!*reinterpret_cast<signed char*>(&eax15)) {
        esi16 = *reinterpret_cast<struct s0***>(rbp17 - 32);
        rdi18 = *reinterpret_cast<struct s0**>(rbp19 - 40);
        _ZN6Animal4setYEi(rdi18, esi16);
        esi20 = *reinterpret_cast<struct s0***>(rbp21 - 28);
        rdi22 = *reinterpret_cast<struct s0**>(rbp23 - 40);
        _ZN6Animal4setXEi(rdi22, esi20);
        rdx24 = *reinterpret_cast<int32_t*>(rbp25 - 28);
        rsi26 = reinterpret_cast<struct s0**>((rdx24 + rdx24 + rdx24 << 3) + reinterpret_cast<uint64_t>((*reinterpret_cast<struct s0****>(rbp27 - 48))[*reinterpret_cast<int32_t*>(rbp28 - 32)]));
        rdi29 = *reinterpret_cast<struct s0**>(rbp30 - 40);
        _ZN6Animal8setOwnerEP4Grid(rdi29, rsi26);
        rdx31 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp32 - 28)));
        rsi33 = *reinterpret_cast<struct s0**>(rbp34 - 40);
        rdi35 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>((*reinterpret_cast<struct s0****>(rbp36 - 48))[*reinterpret_cast<int32_t*>(rbp37 - 32)]) + (rdx31 + rdx31 + rdx31 << 3));
        _ZN4Grid9setAnimalEP6Animal(rdi35, rsi33);
        rdi38 = *reinterpret_cast<struct s0**>(rbp39 - 24);
        _ZN4Grid9setAnimalEP6Animal(rdi38, 0);
        rdx40 = *reinterpret_cast<int32_t*>(rbp41 - 28);
        rdi42 = reinterpret_cast<struct s1*>((rdx40 + rdx40 + rdx40 << 3) + reinterpret_cast<uint64_t>((*reinterpret_cast<struct s0****>(rbp43 - 48))[*reinterpret_cast<int32_t*>(rbp44 - 32)]));
        eax45 = _ZN4Grid7getFoodEv(rdi42, 0);
        if (*reinterpret_cast<signed char*>(&eax45)) {
            rdx46 = *reinterpret_cast<int32_t*>(rbp47 - 28);
            rdi48 = reinterpret_cast<struct s2*>((rdx46 + rdx46 + rdx46 << 3) + reinterpret_cast<int64_t>((*reinterpret_cast<void***>(rbp49 - 48))[*reinterpret_cast<int32_t*>(rbp50 - 32)]));
            _ZN4Grid10removeFoodEv(rdi48, 0);
            edx51 = _ZN6Hunter8LIFE_NUME;
            rdi52 = *reinterpret_cast<struct s0**>(rbp53 - 40);
            _ZN6Animal7setLifeEi(rdi52, edx51);
        }
    }
    goto v54;
}

void fun_197b() {
    goto 0x197e;
}

void fun_2554() {
    struct s0* rsi1;
    struct s0* rax2;
    int64_t rax3;
    int64_t rbp4;
    struct s0** ecx5;
    int64_t rbp6;
    struct s0* rsi7;
    int64_t rbp8;
    int64_t rbp9;
    uint64_t rdx10;
    int64_t rbp11;
    struct s0* rsi12;
    int64_t rbp13;
    struct s0* rdi14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t v17;

    rax2 = fun_1000(40, rsi1);
    *reinterpret_cast<int32_t*>(&rax3) = *reinterpret_cast<int32_t*>(rbp4 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    ecx5 = *reinterpret_cast<struct s0***>(rbp6 - 32);
    rsi7 = *reinterpret_cast<struct s0**>(rbp8 - 64);
    _ZN6RabbitC2EPP4Gridii(rax2, rsi7, static_cast<uint32_t>(rax3 - 1), ecx5);
    *reinterpret_cast<struct s0**>(rbp9 - 24) = rax2;
    rdx10 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp11 - 32)));
    rsi12 = *reinterpret_cast<struct s0**>(rbp13 - 24);
    rdi14 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(*reinterpret_cast<struct s0***>(*reinterpret_cast<int64_t*>(rbp15 - 64) + ((static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp16 - 36)) << 3) - 8))) + (rdx10 + rdx10 + rdx10 << 3));
    _ZN4Grid9setAnimalEP6Animal(rdi14, rsi12);
    goto v17;
}

void fun_2836() {
    struct s0* rsi1;
    struct s0* rax2;
    int64_t rax3;
    int64_t rbp4;
    struct s0** ecx5;
    int64_t rbp6;
    struct s0* rsi7;
    int64_t rbp8;
    int64_t rbp9;
    uint64_t rdx10;
    int64_t rbp11;
    struct s0* rsi12;
    int64_t rbp13;
    struct s0* rdi14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t v17;

    rax2 = fun_1000(40, rsi1);
    *reinterpret_cast<int32_t*>(&rax3) = *reinterpret_cast<int32_t*>(rbp4 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    ecx5 = *reinterpret_cast<struct s0***>(rbp6 - 32);
    rsi7 = *reinterpret_cast<struct s0**>(rbp8 - 64);
    _ZN5TigerC2EPP4Gridii(rax2, rsi7, static_cast<uint32_t>(rax3 - 1), ecx5);
    *reinterpret_cast<struct s0**>(rbp9 - 24) = rax2;
    rdx10 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp11 - 32)));
    rsi12 = *reinterpret_cast<struct s0**>(rbp13 - 24);
    rdi14 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(*reinterpret_cast<struct s0***>(*reinterpret_cast<int64_t*>(rbp15 - 64) + ((static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp16 - 36)) << 3) - 8))) + (rdx10 + rdx10 + rdx10 << 3));
    _ZN4Grid9setAnimalEP6Animal(rdi14, rsi12);
    goto v17;
}

void fun_3ca5() {
    struct s0* r12_1;
    struct s0* rsi2;
    int64_t rdx3;
    struct s0* rcx4;
    struct s0* rax5;
    struct s0* rsi6;
    struct s0* rsi7;
    int64_t v8;

    fun_1040(r12_1, rsi2, rdx3, rcx4);
    fun_1080(rax5, rsi6);
    fun_1030(rax5, rsi7);
    goto v8;
}

void fun_41c8() {
    struct s0* rbx1;
    struct s0* rax2;
    struct s0* rax3;
    struct s0* rbx4;
    struct s0* rax5;
    struct s0* rbx6;

    fun_1010(rbx1, 40);
    rax3 = fun_1080(rax2, 40);
    fun_1010(rbx4, 40);
    rax5 = fun_1080(rax3, 40);
    fun_1010(rbx6, 40);
    fun_1080(rax5, 40);
}

void __libc_csu_fini() {
    return;
}

int64_t _ITM_registerTMCloneTable = 0;

void fun_1102() {
    int64_t rax1;

    if (1)
        goto 0x1150;
    rax1 = _ITM_registerTMCloneTable;
    if (!rax1)
        goto 0x1150;
    goto rax1;
}

/* completed.7698 */
signed char completed_7698 = 0;

int64_t __dso_handle = 0x206008;

int64_t __do_global_dtors_aux() {
    int1_t zf1;
    int64_t rax2;
    int1_t zf3;
    int64_t rdi4;
    int64_t rax5;

    zf1 = completed_7698 == 0;
    if (!zf1) {
        return rax2;
    } else {
        zf3 = __cxa_finalize == 0;
        if (!zf3) {
            rdi4 = __dso_handle;
            fun_1090(rdi4);
        }
        rax5 = deregister_tm_clones(rdi4);
        completed_7698 = 1;
        return rax5;
    }
}

struct s11 {
    signed char[20] pad20;
    int32_t f20;
};

struct s12 {
    signed char[20] pad20;
    int32_t f20;
};

struct s13 {
    signed char[24] pad24;
    int32_t f24;
};

struct s14 {
    signed char[8] pad8;
    int64_t f8;
};

void fun_1591() {
    int64_t rax1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rdx4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;

    *reinterpret_cast<int32_t*>(&rax1) = (*reinterpret_cast<struct s11**>(rbp2 - 24))->f20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    (*reinterpret_cast<struct s12**>(rbp3 - 24))->f20 = static_cast<int32_t>(rax1 + 1);
    rdx4 = (*reinterpret_cast<struct s13**>(rbp5 - 24))->f24;
    (*reinterpret_cast<struct s14**>(rbp6 - 24))->f8 = (*reinterpret_cast<int64_t**>(rbp7 - 32))[*reinterpret_cast<int32_t*>(&rax1)] + (rdx4 + rdx4 + rdx4 << 3);
    goto 0x169a;
}

void fun_17a6() {
    int64_t rbp1;
    int64_t rbp2;

    *reinterpret_cast<int32_t*>(rbp1 - 32) = *reinterpret_cast<int32_t*>(rbp2 - 32) + 1;
    goto 0x17e0;
}

/* Animal::move(Grid**, int, int) */
void _ZN6Animal4moveEPP4Gridii(struct s0* rdi, struct s0* rsi, void* edx, void* ecx) {
    uint32_t eax5;
    uint32_t eax6;
    struct s0* rax7;
    struct s0* rax8;
    int64_t rax9;

    eax5 = _Z17getEmptyDirectionPP4GridP6Animalii(rsi, rdi, edx, ecx, rsi, rdi, edx, ecx);
    eax6 = eax5 + 1;
    if (eax6 > 4) {
        rax7 = fun_ff0(0x206040, "unexpected error", 0x206040, "unexpected error");
        rax8 = _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
        fun_1020(rax7, rax8, rax7, rax8);
    } else {
        *reinterpret_cast<uint32_t*>(&rax9) = eax6;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
        goto 0x4c98 + *reinterpret_cast<int32_t*>(rax9 * 4 + 0x4c98);
    }
}

struct s15 {
    signed char[28] pad28;
    int32_t f28;
    int32_t f32;
};

/* Animal::tick() */
int64_t _ZN6Animal4tickEv(struct s15* rdi) {
    int64_t rax2;
    int64_t rax3;
    int64_t rax4;
    int32_t edx5;

    *reinterpret_cast<int32_t*>(&rax2) = rdi->f28;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    rdi->f28 = static_cast<int32_t>(rax2 - 1);
    if (!!rdi->f28) {
        *reinterpret_cast<int32_t*>(&rax3) = rdi->f32;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
        rdi->f32 = static_cast<int32_t>(rax3 - 1);
        if (!!rdi->f32) {
            *reinterpret_cast<int32_t*>(&rax4) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
        } else {
            edx5 = _ZN6Animal9BREED_NUME;
            rdi->f32 = edx5;
            *reinterpret_cast<int32_t*>(&rax4) = 2;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
        }
    } else {
        *reinterpret_cast<int32_t*>(&rax4) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    }
    return rax4;
}

/* Rabbit::tick() */
int64_t _ZN6Rabbit4tickEv(struct s0* rdi, struct s0* rsi) {
    int32_t eax3;
    int32_t eax4;
    struct s0* rsi5;
    int32_t eax6;
    int32_t eax7;
    int64_t rax8;
    int32_t edx9;

    eax3 = _ZN6Animal7getLifeEv(rdi, rsi);
    eax4 = _ZN6Animal8getBreedEv(rdi, rsi);
    _ZN6Animal7setLifeEi(rdi, eax3 - 1);
    *reinterpret_cast<int32_t*>(&rsi5) = eax4 - 1;
    *reinterpret_cast<int32_t*>(&rsi5 + 4) = 0;
    _ZN6Animal8setBreedEi(rdi, *reinterpret_cast<int32_t*>(&rsi5));
    eax6 = _ZN6Animal7getLifeEv(rdi, rsi5);
    if (!!eax6) {
        eax7 = _ZN6Animal8getBreedEv(rdi, rsi5);
        if (!!eax7) {
            *reinterpret_cast<int32_t*>(&rax8) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
        } else {
            edx9 = _ZN6Rabbit9BREED_NUME;
            _ZN6Animal8setBreedEi(rdi, edx9);
            *reinterpret_cast<int32_t*>(&rax8) = 2;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
        }
    } else {
        *reinterpret_cast<int32_t*>(&rax8) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
    }
    return rax8;
}

/* Tiger::tick() */
int64_t _ZN5Tiger4tickEv(struct s0* rdi, struct s0* rsi) {
    int32_t eax3;
    int32_t eax4;
    struct s0* rsi5;
    int32_t eax6;
    int32_t eax7;
    int64_t rax8;
    int32_t edx9;

    eax3 = _ZN6Animal7getLifeEv(rdi, rsi);
    eax4 = _ZN6Animal8getBreedEv(rdi, rsi);
    _ZN6Animal7setLifeEi(rdi, eax3 - 1);
    *reinterpret_cast<int32_t*>(&rsi5) = eax4 - 1;
    *reinterpret_cast<int32_t*>(&rsi5 + 4) = 0;
    _ZN6Animal8setBreedEi(rdi, *reinterpret_cast<int32_t*>(&rsi5));
    eax6 = _ZN6Animal7getLifeEv(rdi, rsi5);
    if (!!eax6) {
        eax7 = _ZN6Animal8getBreedEv(rdi, rsi5);
        if (!!eax7) {
            *reinterpret_cast<int32_t*>(&rax8) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
        } else {
            edx9 = _ZN5Tiger9BREED_NUME;
            _ZN6Animal8setBreedEi(rdi, edx9);
            *reinterpret_cast<int32_t*>(&rax8) = 2;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
        }
    } else {
        *reinterpret_cast<int32_t*>(&rax8) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
    }
    return rax8;
}

/* Hunter::tick() */
int64_t _ZN6Hunter4tickEv(struct s0* rdi, struct s0* rsi) {
    int32_t eax3;
    int64_t rax4;

    eax3 = _ZN6Animal7getLifeEv(rdi, rsi);
    if (eax3) {
        *reinterpret_cast<int32_t*>(&rax4) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    } else {
        *reinterpret_cast<int32_t*>(&rax4) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    }
    return rax4;
}

/* Animal::isFood(Grid**, int, int) */
void _ZN6Animal6isFoodEPP4Gridii(int64_t rdi, int64_t rsi, int32_t edx, int32_t ecx) {
    return;
}

/* Animal::eat(Grid**, int) */
void _ZN6Animal3eatEPP4Gridi(int64_t rdi, int64_t rsi, int32_t edx) {
    return;
}

void fun_25c3() {
    struct s0* rsi1;
    struct s0* rax2;
    int64_t rax3;
    int64_t rbp4;
    struct s0** ecx5;
    int64_t rbp6;
    struct s0* rsi7;
    int64_t rbp8;
    int64_t rbp9;
    uint64_t rdx10;
    int64_t rbp11;
    struct s0* rsi12;
    int64_t rbp13;
    struct s0* rdi14;
    int64_t rbp15;
    int64_t rbp16;

    rax2 = fun_1000(40, rsi1);
    *reinterpret_cast<int32_t*>(&rax3) = *reinterpret_cast<int32_t*>(rbp4 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    ecx5 = *reinterpret_cast<struct s0***>(rbp6 - 32);
    rsi7 = *reinterpret_cast<struct s0**>(rbp8 - 64);
    _ZN6RabbitC2EPP4Gridii(rax2, rsi7, static_cast<uint32_t>(rax3 + 1), ecx5);
    *reinterpret_cast<struct s0**>(rbp9 - 24) = rax2;
    rdx10 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp11 - 32)));
    rsi12 = *reinterpret_cast<struct s0**>(rbp13 - 24);
    rdi14 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>((*reinterpret_cast<struct s0****>(rbp15 - 64))[*reinterpret_cast<int32_t*>(rbp16 - 36) + 1]) + (rdx10 + rdx10 + rdx10 << 3));
    _ZN4Grid9setAnimalEP6Animal(rdi14, rsi12);
    goto 0x27aa;
}

void fun_28a5() {
    struct s0* rsi1;
    struct s0* rax2;
    int64_t rax3;
    int64_t rbp4;
    struct s0** ecx5;
    int64_t rbp6;
    struct s0* rsi7;
    int64_t rbp8;
    int64_t rbp9;
    uint64_t rdx10;
    int64_t rbp11;
    struct s0* rsi12;
    int64_t rbp13;
    struct s0* rdi14;
    int64_t rbp15;
    int64_t rbp16;

    rax2 = fun_1000(40, rsi1);
    *reinterpret_cast<int32_t*>(&rax3) = *reinterpret_cast<int32_t*>(rbp4 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    ecx5 = *reinterpret_cast<struct s0***>(rbp6 - 32);
    rsi7 = *reinterpret_cast<struct s0**>(rbp8 - 64);
    _ZN5TigerC2EPP4Gridii(rax2, rsi7, static_cast<uint32_t>(rax3 + 1), ecx5);
    *reinterpret_cast<struct s0**>(rbp9 - 24) = rax2;
    rdx10 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp11 - 32)));
    rsi12 = *reinterpret_cast<struct s0**>(rbp13 - 24);
    rdi14 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>((*reinterpret_cast<struct s0****>(rbp15 - 64))[*reinterpret_cast<int32_t*>(rbp16 - 36) + 1]) + (rdx10 + rdx10 + rdx10 << 3));
    _ZN4Grid9setAnimalEP6Animal(rdi14, rsi12);
    goto 0x2a8c;
}

void _GLOBAL__sub_I__ZN6Animal8LIFE_NUME() {
    _Z41__static_initialization_and_destruction_0ii(1, 0xffff);
    return;
}

int64_t g205f40 = 0;

void fun_1066() {
    goto g205f40;
}

void fun_fc6() {
    goto 0xf80;
}

void _GLOBAL__sub_I__ZN4GridC2Ev() {
    _Z41__static_initialization_and_destruction_0ii(1, 0xffff);
    return;
}

void fun_f96() {
    goto 0xf80;
}

void fun_fa6() {
    goto 0xf80;
}

void fun_1036() {
    goto 0xf80;
}

void _GLOBAL__sub_I__Z10getRandNumPbiii() {
    _Z41__static_initialization_and_destruction_0ii(1, 0xffff);
    return;
}

void fun_ff6() {
    goto 0xf80;
}

void fun_1026() {
    goto 0xf80;
}

void fun_1006() {
    goto 0xf80;
}

void fun_1046() {
    goto 0xf80;
}

void fun_1016() {
    goto 0xf80;
}

void fun_fd6() {
    goto 0xf80;
}

void fun_fe6() {
    goto 0xf80;
}

void _GLOBAL__sub_I_grid() {
    _Z41__static_initialization_and_destruction_0ii(1, 0xffff);
    return;
}

struct s16 {
    signed char[20] pad20;
    int32_t f20;
};

struct s17 {
    signed char[24] pad24;
    int32_t f24;
};

struct s18 {
    signed char[24] pad24;
    int32_t f24;
};

struct s19 {
    signed char[8] pad8;
    int64_t f8;
};

void fun_15de() {
    int64_t rsi1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rax4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rdx7;
    int64_t rbp8;

    rsi1 = (*reinterpret_cast<int64_t**>(rbp2 - 32))[(*reinterpret_cast<struct s16**>(rbp3 - 24))->f20];
    *reinterpret_cast<int32_t*>(&rax4) = (*reinterpret_cast<struct s17**>(rbp5 - 24))->f24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    (*reinterpret_cast<struct s18**>(rbp6 - 24))->f24 = static_cast<int32_t>(rax4 + 1);
    rdx7 = *reinterpret_cast<int32_t*>(&rax4);
    (*reinterpret_cast<struct s19**>(rbp8 - 24))->f8 = rsi1 + (rdx7 + rdx7 + rdx7 << 3);
    goto 0x169a;
}

void fun_17ac() {
    int64_t rbp1;
    int64_t rbp2;

    *reinterpret_cast<int32_t*>(rbp1 - 28) = *reinterpret_cast<int32_t*>(rbp2 - 28) + 1;
    goto 0x17e0;
}

/* Rabbit::isFood(Grid**, int, int) */
uint64_t _ZN6Rabbit6isFoodEPP4Gridii(struct s0* rdi, struct s0*** rsi, void* edx, void* ecx) {
    uint64_t rax5;

    rax5 = _Z17getGrassDirectionPP4GridP6Animalii(rsi, rdi, edx, ecx);
    return rax5;
}

/* Rabbit::eat(Grid**, int) */
void _ZN6Rabbit3eatEPP4Gridi(struct s0* rdi, struct s0* rsi, int32_t edx) {
    struct s0** eax4;
    struct s0** eax5;
    int64_t rdx6;
    struct s0* v7;
    int64_t rdx8;
    struct s0** rsi9;
    struct s0* rsi10;
    int64_t rdx11;
    struct s0** rsi12;
    int64_t rdx13;
    struct s0** rsi14;
    int64_t rdx15;
    struct s0** rsi16;
    struct s0** eax17;
    struct s0* rbx18;
    struct s0** eax19;
    uint64_t rdx20;
    struct s0** eax21;
    struct s0* rbx22;
    struct s0** eax23;
    int64_t rdx24;
    int32_t edx25;
    struct s0* rax26;
    struct s0* rax27;

    eax4 = _ZN6Animal4getYEv(rdi, rsi);
    eax5 = _ZN6Animal4getXEv(rdi, rsi);
    rdx6 = reinterpret_cast<int32_t>(eax5);
    v7 = reinterpret_cast<struct s0*>((rdx6 + rdx6 + rdx6 << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rsi) + reinterpret_cast<int32_t>(eax4) * 8)));
    if (edx == 1) {
        rdx8 = reinterpret_cast<int32_t>(eax5);
        rsi9 = reinterpret_cast<struct s0**>((rdx8 + rdx8 + rdx8 << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rsi) + reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(eax4 + 1) * 8))));
        _ZN6Animal8setOwnerEP4Grid(rdi, rsi9);
        *reinterpret_cast<struct s0***>(&rsi10) = eax4 + 1;
        *reinterpret_cast<int32_t*>(&rsi10 + 4) = 0;
        _ZN6Animal4setYEi(rdi, *reinterpret_cast<struct s0***>(&rsi10));
    } else {
        if (edx > 1) {
            if (edx == 2) {
                rdx11 = reinterpret_cast<int64_t>(eax5 + 1);
                rsi12 = reinterpret_cast<struct s0**>((rdx11 + rdx11 + rdx11 << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rsi) + reinterpret_cast<int32_t>(eax4) * 8)));
                _ZN6Animal8setOwnerEP4Grid(rdi, rsi12);
                *reinterpret_cast<struct s0***>(&rsi10) = eax5 + 1;
                *reinterpret_cast<int32_t*>(&rsi10 + 4) = 0;
                _ZN6Animal4setXEi(rdi, *reinterpret_cast<struct s0***>(&rsi10));
            } else {
                if (edx == 3) {
                    rdx13 = reinterpret_cast<int32_t>(eax5);
                    rsi14 = reinterpret_cast<struct s0**>((rdx13 + rdx13 + rdx13 << 3) - 24 + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rsi) + reinterpret_cast<int32_t>(eax4) * 8)));
                    _ZN6Animal8setOwnerEP4Grid(rdi, rsi14);
                    *reinterpret_cast<struct s0***>(&rsi10) = eax5 - 1;
                    *reinterpret_cast<int32_t*>(&rsi10 + 4) = 0;
                    _ZN6Animal4setXEi(rdi, *reinterpret_cast<struct s0***>(&rsi10));
                } else {
                    goto addr_209b_9;
                }
            }
        } else {
            if (!edx) {
                rdx15 = reinterpret_cast<int32_t>(eax5);
                rsi16 = reinterpret_cast<struct s0**>((rdx15 + rdx15 + rdx15 << 3) + reinterpret_cast<uint64_t>(*reinterpret_cast<struct s0***>(reinterpret_cast<unsigned char>(rsi) + ((static_cast<int64_t>(reinterpret_cast<int32_t>(eax4)) << 3) + 0xfffffffffffffff8))));
                _ZN6Animal8setOwnerEP4Grid(rdi, rsi16);
                *reinterpret_cast<struct s0***>(&rsi10) = eax4 - 1;
                *reinterpret_cast<int32_t*>(&rsi10 + 4) = 0;
                _ZN6Animal4setYEi(rdi, *reinterpret_cast<struct s0***>(&rsi10));
            } else {
                goto addr_209b_9;
            }
        }
    }
    addr_20c3_13:
    eax17 = _ZN6Animal4getYEv(rdi, rsi10);
    rbx18 = *reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rsi) + reinterpret_cast<int32_t>(eax17) * 8);
    eax19 = _ZN6Animal4getXEv(rdi, rsi10);
    rdx20 = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(eax19)));
    _ZN4Grid9setAnimalEP6Animal(reinterpret_cast<unsigned char>(rbx18) + (rdx20 + rdx20 + rdx20 << 3), rdi);
    _ZN4Grid9setAnimalEP6Animal(v7, 0);
    eax21 = _ZN6Animal4getYEv(rdi, 0);
    rbx22 = *reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rsi) + reinterpret_cast<int32_t>(eax21) * 8);
    eax23 = _ZN6Animal4getXEv(rdi, 0);
    rdx24 = reinterpret_cast<int32_t>(eax23);
    _ZN4Grid11removeGrassEv((rdx24 + rdx24 + rdx24 << 3) + reinterpret_cast<unsigned char>(rbx22), 0);
    edx25 = _ZN6Rabbit8LIFE_NUME;
    _ZN6Animal7setLifeEi(rdi, edx25);
    return;
    addr_209b_9:
    rax26 = fun_ff0(0x206040, "unexpected error");
    rax27 = _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
    rsi10 = rax27;
    fun_1020(rax26, rsi10);
    goto addr_20c3_13;
}

/* Tiger::eat(Grid**, int) */
void _ZN5Tiger3eatEPP4Gridi(struct s0* rdi, struct s0* rsi, int32_t edx) {
    struct s0** eax4;
    struct s0** eax5;
    int64_t rdx6;
    struct s0* v7;
    int64_t rdx8;
    struct s0** rsi9;
    struct s0* rsi10;
    int64_t rdx11;
    struct s0** rsi12;
    int64_t rdx13;
    struct s0** rsi14;
    int64_t rdx15;
    struct s0** rsi16;
    struct s0** eax17;
    struct s0* rbx18;
    struct s0** eax19;
    int64_t rdx20;
    struct s0* rax21;
    struct s0** eax22;
    struct s0* rbx23;
    struct s0** eax24;
    int64_t rdx25;
    struct s0* rax26;
    struct s0** eax27;
    struct s0* rbx28;
    struct s0** eax29;
    uint64_t rdx30;
    int32_t edx31;
    struct s0* rax32;
    struct s0* rax33;

    eax4 = _ZN6Animal4getYEv(rdi, rsi);
    eax5 = _ZN6Animal4getXEv(rdi, rsi);
    rdx6 = reinterpret_cast<int32_t>(eax5);
    v7 = reinterpret_cast<struct s0*>((rdx6 + rdx6 + rdx6 << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rsi) + reinterpret_cast<int32_t>(eax4) * 8)));
    if (edx == 1) {
        rdx8 = reinterpret_cast<int32_t>(eax5);
        rsi9 = reinterpret_cast<struct s0**>((rdx8 + rdx8 + rdx8 << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rsi) + reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(eax4 + 1) * 8))));
        _ZN6Animal8setOwnerEP4Grid(rdi, rsi9);
        *reinterpret_cast<struct s0***>(&rsi10) = eax4 + 1;
        *reinterpret_cast<int32_t*>(&rsi10 + 4) = 0;
        _ZN6Animal4setYEi(rdi, *reinterpret_cast<struct s0***>(&rsi10));
    } else {
        if (edx > 1) {
            if (edx == 2) {
                rdx11 = reinterpret_cast<int64_t>(eax5 + 1);
                rsi12 = reinterpret_cast<struct s0**>((rdx11 + rdx11 + rdx11 << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rsi) + reinterpret_cast<int32_t>(eax4) * 8)));
                _ZN6Animal8setOwnerEP4Grid(rdi, rsi12);
                *reinterpret_cast<struct s0***>(&rsi10) = eax5 + 1;
                *reinterpret_cast<int32_t*>(&rsi10 + 4) = 0;
                _ZN6Animal4setXEi(rdi, *reinterpret_cast<struct s0***>(&rsi10));
            } else {
                if (edx == 3) {
                    rdx13 = reinterpret_cast<int32_t>(eax5);
                    rsi14 = reinterpret_cast<struct s0**>((rdx13 + rdx13 + rdx13 << 3) - 24 + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rsi) + reinterpret_cast<int32_t>(eax4) * 8)));
                    _ZN6Animal8setOwnerEP4Grid(rdi, rsi14);
                    *reinterpret_cast<struct s0***>(&rsi10) = eax5 - 1;
                    *reinterpret_cast<int32_t*>(&rsi10 + 4) = 0;
                    _ZN6Animal4setXEi(rdi, *reinterpret_cast<struct s0***>(&rsi10));
                } else {
                    goto addr_236f_9;
                }
            }
        } else {
            if (!edx) {
                rdx15 = reinterpret_cast<int32_t>(eax5);
                rsi16 = reinterpret_cast<struct s0**>((rdx15 + rdx15 + rdx15 << 3) + reinterpret_cast<uint64_t>(*reinterpret_cast<struct s0***>(reinterpret_cast<unsigned char>(rsi) + ((static_cast<int64_t>(reinterpret_cast<int32_t>(eax4)) << 3) + 0xfffffffffffffff8))));
                _ZN6Animal8setOwnerEP4Grid(rdi, rsi16);
                *reinterpret_cast<struct s0***>(&rsi10) = eax4 - 1;
                *reinterpret_cast<int32_t*>(&rsi10 + 4) = 0;
                _ZN6Animal4setYEi(rdi, *reinterpret_cast<struct s0***>(&rsi10));
            } else {
                goto addr_236f_9;
            }
        }
    }
    addr_2397_13:
    eax17 = _ZN6Animal4getYEv(rdi, rsi10);
    rbx18 = *reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rsi) + reinterpret_cast<int32_t>(eax17) * 8);
    eax19 = _ZN6Animal4getXEv(rdi, rsi10);
    rdx20 = reinterpret_cast<int32_t>(eax19);
    rax21 = _ZN4Grid9getAnimalEv((rdx20 + rdx20 + rdx20 << 3) + reinterpret_cast<unsigned char>(rbx18), (rdx20 + rdx20 + rdx20 << 3) + reinterpret_cast<unsigned char>(rbx18));
    _ZN6Animal7setLifeEi(rax21, 0);
    eax22 = _ZN6Animal4getYEv(rdi, 0);
    rbx23 = *reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rsi) + reinterpret_cast<int32_t>(eax22) * 8);
    eax24 = _ZN6Animal4getXEv(rdi, 0);
    rdx25 = reinterpret_cast<int32_t>(eax24);
    rax26 = _ZN4Grid9getAnimalEv((rdx25 + rdx25 + rdx25 << 3) + reinterpret_cast<unsigned char>(rbx23), (rdx25 + rdx25 + rdx25 << 3) + reinterpret_cast<unsigned char>(rbx23));
    fun_1010(rax26, 40);
    eax27 = _ZN6Animal4getYEv(rdi, 40);
    rbx28 = *reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rsi) + reinterpret_cast<int32_t>(eax27) * 8);
    eax29 = _ZN6Animal4getXEv(rdi, 40);
    rdx30 = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(eax29)));
    _ZN4Grid9setAnimalEP6Animal(reinterpret_cast<unsigned char>(rbx28) + (rdx30 + rdx30 + rdx30 << 3), rdi);
    _ZN4Grid9setAnimalEP6Animal(v7, 0);
    edx31 = _ZN5Tiger8LIFE_NUME;
    _ZN6Animal7setLifeEi(rdi, edx31);
    return;
    addr_236f_9:
    rax32 = fun_ff0(0x206040, "unexpected error");
    rax33 = _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
    rsi10 = rax33;
    fun_1020(rax32, rsi10);
    goto addr_2397_13;
}

/* Animal::breed(Grid**, int, int) */
void _ZN6Animal5breedEPP4Gridii(int64_t rdi, int64_t rsi, int32_t edx, int32_t ecx) {
    return;
}

/* Tiger::breed(Grid**, int, int) */
void _ZN5Tiger5breedEPP4Gridii(struct s0* rdi, struct s0* rsi, void* edx, void* ecx) {
    uint32_t eax5;
    uint32_t eax6;
    struct s0* rax7;
    struct s0* rax8;
    int64_t rax9;

    _ZN6Animal4getYEv(rdi, rsi);
    _ZN6Animal4getXEv(rdi, rsi);
    eax5 = _Z17getEmptyDirectionPP4GridP6Animalii(rsi, rdi, edx, ecx, rsi, rdi, edx, ecx);
    eax6 = eax5 + 1;
    if (eax6 > 4) {
        rax7 = fun_ff0(0x206040, "unexpected error", 0x206040, "unexpected error");
        rax8 = _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
        fun_1020(rax7, rax8, rax7, rax8);
        goto 0x2a8c;
    } else {
        *reinterpret_cast<uint32_t*>(&rax9) = eax6;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
        goto 0x4cd4 + *reinterpret_cast<int32_t*>(rax9 * 4 + 0x4cd4);
    }
}

void fun_2636() {
    struct s0* rsi1;
    struct s0* rax2;
    int64_t rax3;
    int64_t rbp4;
    struct s0** edx5;
    int64_t rbp6;
    struct s0* rsi7;
    int64_t rbp8;
    int64_t rbp9;
    uint64_t rdx10;
    int64_t rbp11;
    struct s0* rsi12;
    int64_t rbp13;
    struct s0* rdi14;
    int64_t rbp15;
    int64_t rbp16;

    rax2 = fun_1000(40, rsi1);
    *reinterpret_cast<int32_t*>(&rax3) = *reinterpret_cast<int32_t*>(rbp4 - 32);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    edx5 = *reinterpret_cast<struct s0***>(rbp6 - 36);
    rsi7 = *reinterpret_cast<struct s0**>(rbp8 - 64);
    _ZN6RabbitC2EPP4Gridii(rax2, rsi7, edx5, static_cast<uint32_t>(rax3 + 1));
    *reinterpret_cast<struct s0**>(rbp9 - 24) = rax2;
    rdx10 = *reinterpret_cast<int32_t*>(rbp11 - 32) + 1;
    rsi12 = *reinterpret_cast<struct s0**>(rbp13 - 24);
    rdi14 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>((*reinterpret_cast<struct s0****>(rbp15 - 64))[*reinterpret_cast<int32_t*>(rbp16 - 36)]) + (rdx10 + rdx10 + rdx10 << 3));
    _ZN4Grid9setAnimalEP6Animal(rdi14, rsi12);
    goto 0x27aa;
}

void fun_2918() {
    struct s0* rsi1;
    struct s0* rax2;
    int64_t rax3;
    int64_t rbp4;
    struct s0** edx5;
    int64_t rbp6;
    struct s0* rsi7;
    int64_t rbp8;
    int64_t rbp9;
    uint64_t rdx10;
    int64_t rbp11;
    struct s0* rsi12;
    int64_t rbp13;
    struct s0* rdi14;
    int64_t rbp15;
    int64_t rbp16;

    rax2 = fun_1000(40, rsi1);
    *reinterpret_cast<int32_t*>(&rax3) = *reinterpret_cast<int32_t*>(rbp4 - 32);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    edx5 = *reinterpret_cast<struct s0***>(rbp6 - 36);
    rsi7 = *reinterpret_cast<struct s0**>(rbp8 - 64);
    _ZN5TigerC2EPP4Gridii(rax2, rsi7, edx5, static_cast<uint32_t>(rax3 + 1));
    *reinterpret_cast<struct s0**>(rbp9 - 24) = rax2;
    rdx10 = *reinterpret_cast<int32_t*>(rbp11 - 32) + 1;
    rsi12 = *reinterpret_cast<struct s0**>(rbp13 - 24);
    rdi14 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>((*reinterpret_cast<struct s0****>(rbp15 - 64))[*reinterpret_cast<int32_t*>(rbp16 - 36)]) + (rdx10 + rdx10 + rdx10 << 3));
    _ZN4Grid9setAnimalEP6Animal(rdi14, rsi12);
    goto 0x2a8c;
}

void fun_1056() {
    goto 0xf80;
}

struct s20 {
    signed char[8] pad8;
    int64_t f8;
};

/* Animal::getOwner() */
int64_t _ZN6Animal8getOwnerEv(struct s20* rdi) {
    return rdi->f8;
}

void main() {
    void* rbp1;
    uint64_t rax2;
    uint64_t v3;
    struct s0* rax4;
    struct s0* rax5;
    struct s0* rsi6;
    struct s0* rdi7;
    struct s0** eax8;
    struct s0* rax9;
    struct s0* rdx10;
    struct s0* rax11;
    struct s0** v12;
    struct s0** eax13;
    struct s0** eax14;
    uint64_t rbx15;
    struct s0* rax16;
    struct s0* r12_17;
    struct s0* r13_18;
    struct s0* rax19;
    struct s0** v20;
    struct s0** eax21;
    struct s0* rax22;
    uint64_t rdx23;
    int32_t eax24;
    struct s0* rdi25;
    struct s0** v26;
    struct s0** v27;
    struct s0** v28;
    uint32_t eax29;
    uint32_t eax30;
    int32_t v31;
    int32_t v32;
    struct s0** v33;
    struct s0** eax34;
    struct s0** v35;
    struct s0** eax36;
    struct s0* rax37;
    int64_t rdx38;
    struct s0* rdi39;
    struct s0* rax40;
    struct s0* rax41;
    int64_t rdx42;
    struct s0* rdi43;
    struct s0* rax44;
    struct s0* eax45;
    struct s0* rax46;
    int64_t rdx47;
    struct s0* rdi48;
    struct s0* rax49;
    struct s0* eax50;
    struct s0* rax51;
    struct s0* rax52;
    struct s0* rax53;
    struct s0* rax54;
    uint64_t rcx55;

    rbp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax2 = g28;
    v3 = rax2;
    fun_ff0(0x206040, "Enter grid height: ");
    fun_fb0(0x206160, 0x206290);
    fun_ff0(0x206040, "Enter grid width: ");
    fun_fb0(0x206160, 0x206294);
    rax4 = _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
    fun_1020(0x206040, rax4);
    fun_ff0(0x206040, "Enter initial number of grasses: ");
    fun_fb0(0x206160, reinterpret_cast<int64_t>(rbp1) + 0xffffffffffffffb4);
    fun_ff0(0x206040, "Enter initial number of rabbits: ");
    fun_fb0(0x206160, reinterpret_cast<int64_t>(rbp1) + 0xffffffffffffffb8);
    fun_ff0(0x206040, "Enter initial number of tigers: ");
    fun_fb0(0x206160, reinterpret_cast<int64_t>(rbp1) + 0xffffffffffffffbc);
    rax5 = _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
    rsi6 = rax5;
    rdi7 = reinterpret_cast<struct s0*>(0x206040);
    fun_1020(0x206040, rsi6);
    eax8 = H;
    rax9 = reinterpret_cast<struct s0*>(static_cast<int64_t>(reinterpret_cast<int32_t>(eax8)));
    rdx10 = reinterpret_cast<struct s0*>(0xfffffffffffffff);
    if (reinterpret_cast<unsigned char>(rax9) > reinterpret_cast<unsigned char>(0xfffffffffffffff)) {
        fun_1050(0x206040, rsi6, 0xfffffffffffffff);
    } else {
        rdi7 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(rax9) << 3);
        rax11 = fun_f90(rdi7, rsi6);
        grid = rax11;
        v12 = reinterpret_cast<struct s0**>(0);
    }
    while (eax13 = H, reinterpret_cast<int32_t>(v12) < reinterpret_cast<int32_t>(eax13)) {
        eax14 = W;
        rbx15 = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(eax14)));
        if (rbx15 > 0x555555555555555) {
            fun_1050(rdi7, rsi6, rdx10);
        } else {
            rdi7 = reinterpret_cast<struct s0*>(rbx15 + rbx15 + rbx15 << 3);
            rax16 = fun_f90(rdi7, rsi6, rdi7, rsi6);
            r12_17 = rax16;
            rdx10 = r12_17;
            --rbx15;
            r13_18 = rdx10;
        }
        while (reinterpret_cast<int64_t>(rbx15) >= reinterpret_cast<int64_t>(0)) {
            rdi7 = r13_18;
            _ZN4GridC1Ev(rdi7, rsi6, rdx10);
            r13_18 = reinterpret_cast<struct s0*>(&r13_18->f24);
            --rbx15;
        }
        rax19 = grid;
        rdx10 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(v12))) << 3);
        *reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rax19) + reinterpret_cast<unsigned char>(rdx10)) = r12_17;
        v20 = reinterpret_cast<struct s0**>(0);
        while (eax21 = W, reinterpret_cast<int32_t>(v20) < reinterpret_cast<int32_t>(eax21)) {
            rax22 = grid;
            rdx23 = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(v20)));
            *reinterpret_cast<struct s0***>(&rdx10) = v20;
            *reinterpret_cast<int32_t*>(&rdx10 + 4) = 0;
            *reinterpret_cast<struct s0***>(&rsi6) = v12;
            *reinterpret_cast<int32_t*>(&rsi6 + 4) = 0;
            rdi7 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rax22) + (reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(v12))) << 3))) + (rdx23 + rdx23 + rdx23 << 3));
            _ZN4Grid12initLocationEii(rdi7, *reinterpret_cast<struct s0***>(&rsi6), *reinterpret_cast<struct s0***>(&rdx10));
            ++v20;
        }
        ++v12;
    }
    eax24 = fun_fd0(0, rsi6, rdx10, 0, rsi6, rdx10);
    *reinterpret_cast<int32_t*>(&rdi25) = eax24;
    *reinterpret_cast<int32_t*>(&rdi25 + 4) = 0;
    fun_fe0(rdi25, rsi6, rdi25, rsi6);
    _Z7initMapii(v26, 0, rdx10);
    _Z7initMapii(v27, 1, rdx10);
    _Z7initMapii(v28, 2, rdx10);
    _Z7initMapii(1, 3, rdx10);
    while (_Z10showStatusv(1, 3, rdx10), _Z8showGridv(1, 3, rdx10), eax29 = _Z7runTurnv(1, 3, rdx10), eax30 = eax29 ^ 1, !!*reinterpret_cast<signed char*>(&eax30)) {
    }
    v31 = 0;
    v32 = 0;
    v33 = reinterpret_cast<struct s0**>(0);
    while (eax34 = H, reinterpret_cast<int32_t>(v33) < reinterpret_cast<int32_t>(eax34)) {
        v35 = reinterpret_cast<struct s0**>(0);
        while (eax36 = W, reinterpret_cast<int32_t>(v35) < reinterpret_cast<int32_t>(eax36)) {
            rax37 = grid;
            rdx38 = reinterpret_cast<int32_t>(v35);
            rdi39 = reinterpret_cast<struct s0*>((rdx38 + rdx38 + rdx38 << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rax37) + (reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(v33))) << 3))));
            rax40 = _ZN4Grid9getAnimalEv(rdi39, rdi39);
            if (reinterpret_cast<uint1_t>(!!rax40)) {
                rax41 = grid;
                rdx42 = reinterpret_cast<int32_t>(v35);
                rdi43 = reinterpret_cast<struct s0*>((rdx42 + rdx42 + rdx42 << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rax41) + (reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(v33))) << 3))));
                rax44 = _ZN4Grid9getAnimalEv(rdi43, rdi43);
                eax45 = _ZN6Animal7getTypeEv(rax44, 3, rax44, 3);
                if (!reinterpret_cast<uint1_t>(eax45 == 1)) {
                    rax46 = grid;
                    rdx47 = reinterpret_cast<int32_t>(v35);
                    rdi48 = reinterpret_cast<struct s0*>((rdx47 + rdx47 + rdx47 << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rax46) + (reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(v33))) << 3))));
                    rax49 = _ZN4Grid9getAnimalEv(rdi48, rdi48);
                    eax50 = _ZN6Animal7getTypeEv(rax49, 3, rax49, 3);
                    if (reinterpret_cast<uint1_t>(eax50 == 2)) {
                        ++v31;
                    }
                } else {
                    ++v32;
                }
            }
            ++v35;
        }
        ++v33;
    }
    if (v31 > 0 || !v32) {
        rax51 = fun_ff0(0x206040, "Game Over!", 0x206040, "Game Over!");
        rax52 = _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
        fun_1020(rax51, rax52);
    } else {
        rax53 = fun_ff0(0x206040, "You Win!", 0x206040, "You Win!");
        rax54 = _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
        fun_1020(rax53, rax54);
    }
    rcx55 = v3 ^ g28;
    if (!rcx55)
        goto 0x3cc0;
    goto 0x3cbb;
}

void fun_1086() {
    goto 0xf80;
}

void __libc_csu_init(int32_t edi, int64_t rsi, int64_t rdx) {
    int64_t r15_4;
    int32_t r13d5;
    int64_t r14_6;
    int64_t rbx7;
    int64_t rdi8;

    r15_4 = rdx;
    r13d5 = edi;
    r14_6 = rsi;
    _init();
    if (!0) {
        *reinterpret_cast<int32_t*>(&rbx7) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(&rdi8) = r13d5;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = 0;
            *reinterpret_cast<int64_t*>(0x205bb0 + rbx7 * 8)(rdi8, r14_6, r15_4);
            ++rbx7;
        } while (5 != rbx7);
    }
    return;
}

void frame_dummy() {
    goto 0x1110;
}

/* Hunter::move(Grid**, int, int, int) */
void _ZN6Hunter4moveEPP4Gridiii(struct s0* rdi, struct s0* rsi, int32_t edx, int32_t ecx, int32_t r8d) {
    uint32_t eax6;
    struct s0* rax7;
    struct s0* rax8;
    int64_t rax9;

    _ZN6Animal4getYEv(rdi, rsi);
    _ZN6Animal4getXEv(rdi, rsi, rdi, rsi);
    _ZN6Animal4getYEv(rdi, rsi);
    _ZN6Animal4getXEv(rdi, rsi, rdi, rsi);
    eax6 = reinterpret_cast<uint32_t>(r8d + 1);
    if (eax6 > 4) {
        rax7 = fun_ff0(0x206040, "unexpected error", 0x206040, "unexpected error");
        rax8 = _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
        fun_1020(rax7, rax8, rax7, rax8);
    } else {
        *reinterpret_cast<uint32_t*>(&rax9) = eax6;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
        goto 0x4cac + *reinterpret_cast<int32_t*>(rax9 * 4 + 0x4cac);
    }
}

struct s21 {
    signed char[20] pad20;
    int32_t f20;
};

struct s22 {
    signed char[24] pad24;
    int32_t f24;
};

struct s23 {
    signed char[24] pad24;
    int32_t f24;
};

struct s24 {
    signed char[8] pad8;
    int64_t f8;
};

void fun_1628() {
    int64_t rsi1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rax4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rdx7;
    int64_t rbp8;

    rsi1 = (*reinterpret_cast<int64_t**>(rbp2 - 32))[(*reinterpret_cast<struct s21**>(rbp3 - 24))->f20];
    *reinterpret_cast<int32_t*>(&rax4) = (*reinterpret_cast<struct s22**>(rbp5 - 24))->f24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    (*reinterpret_cast<struct s23**>(rbp6 - 24))->f24 = static_cast<int32_t>(rax4 - 1);
    rdx7 = *reinterpret_cast<int32_t*>(&rax4);
    (*reinterpret_cast<struct s24**>(rbp8 - 24))->f8 = rsi1 + (rdx7 + rdx7 + rdx7 << 3);
    goto 0x169a;
}

void fun_17b2() {
    int64_t rbp1;
    int64_t rbp2;

    *reinterpret_cast<int32_t*>(rbp1 - 28) = *reinterpret_cast<int32_t*>(rbp2 - 28) - 1;
    goto 0x17e0;
}

/* Tiger::isFood(Grid**, int, int) */
uint64_t _ZN5Tiger6isFoodEPP4Gridii(struct s0* rdi, struct s0* rsi, void* edx, void* ecx) {
    struct s0** eax5;
    struct s0** eax6;
    int64_t rdx7;
    struct s0* rdi8;
    struct s0* rax9;
    int64_t rdx10;
    struct s0* rdi11;
    struct s0* rax12;
    struct s0* eax13;
    int32_t eax14;
    int64_t rdx15;
    struct s0* rdi16;
    struct s0* rax17;
    int64_t rdx18;
    struct s0* rdi19;
    struct s0* rax20;
    struct s0* eax21;
    int32_t eax22;
    int64_t rdx23;
    struct s0* rdi24;
    struct s0* rax25;
    int64_t rdx26;
    struct s0* rdi27;
    struct s0* rax28;
    struct s0* eax29;
    int32_t eax30;
    int64_t rdx31;
    struct s0* rdi32;
    struct s0* rax33;
    int64_t rdx34;
    struct s0* rdi35;
    struct s0* rax36;
    struct s0* eax37;
    int32_t eax38;
    uint64_t rax39;

    eax5 = _ZN6Animal4getYEv(rdi, rsi);
    eax6 = _ZN6Animal4getXEv(rdi, rsi);
    if (reinterpret_cast<int32_t>(eax5) <= reinterpret_cast<int32_t>(0) || ((rdx7 = reinterpret_cast<int32_t>(eax6), rdi8 = reinterpret_cast<struct s0*>((rdx7 + rdx7 + rdx7 << 3) + reinterpret_cast<uint64_t>(*reinterpret_cast<struct s0***>(reinterpret_cast<unsigned char>(rsi) + ((static_cast<int64_t>(reinterpret_cast<int32_t>(eax5)) << 3) + 0xfffffffffffffff8)))), rax9 = _ZN4Grid9getAnimalEv(rdi8), rax9 == 0) || (rdx10 = reinterpret_cast<int32_t>(eax6), rdi11 = reinterpret_cast<struct s0*>((rdx10 + rdx10 + rdx10 << 3) + reinterpret_cast<uint64_t>(*reinterpret_cast<struct s0***>(reinterpret_cast<unsigned char>(rsi) + ((static_cast<int64_t>(reinterpret_cast<int32_t>(eax5)) << 3) + 0xfffffffffffffff8)))), rax12 = _ZN4Grid9getAnimalEv(rdi11), eax13 = _ZN6Animal7getTypeEv(rax12, rsi), !reinterpret_cast<int1_t>(eax13 == 3)))) {
        eax14 = 0;
    } else {
        eax14 = 1;
    }
    if (!*reinterpret_cast<signed char*>(&eax14)) {
        if (reinterpret_cast<int32_t>(eax5) >= reinterpret_cast<int32_t>(reinterpret_cast<int32_t>(edx) - 1) || ((rdx15 = reinterpret_cast<int32_t>(eax6), rdi16 = reinterpret_cast<struct s0*>((rdx15 + rdx15 + rdx15 << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rsi) + reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(eax5 + 1) * 8)))), rax17 = _ZN4Grid9getAnimalEv(rdi16), rax17 == 0) || (rdx18 = reinterpret_cast<int32_t>(eax6), rdi19 = reinterpret_cast<struct s0*>((rdx18 + rdx18 + rdx18 << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rsi) + reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(eax5 + 1) * 8)))), rax20 = _ZN4Grid9getAnimalEv(rdi19), eax21 = _ZN6Animal7getTypeEv(rax20, rsi), !reinterpret_cast<int1_t>(eax21 == 3)))) {
            eax22 = 0;
        } else {
            eax22 = 1;
        }
        if (!*reinterpret_cast<signed char*>(&eax22)) {
            if (reinterpret_cast<int32_t>(eax6) >= reinterpret_cast<int32_t>(reinterpret_cast<int32_t>(ecx) - 1) || ((rdx23 = reinterpret_cast<int64_t>(eax6 + 1), rdi24 = reinterpret_cast<struct s0*>((rdx23 + rdx23 + rdx23 << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rsi) + reinterpret_cast<int32_t>(eax5) * 8))), rax25 = _ZN4Grid9getAnimalEv(rdi24), rax25 == 0) || (rdx26 = reinterpret_cast<int64_t>(eax6 + 1), rdi27 = reinterpret_cast<struct s0*>((rdx26 + rdx26 + rdx26 << 3) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rsi) + reinterpret_cast<int32_t>(eax5) * 8))), rax28 = _ZN4Grid9getAnimalEv(rdi27), eax29 = _ZN6Animal7getTypeEv(rax28, rsi), !reinterpret_cast<int1_t>(eax29 == 3)))) {
                eax30 = 0;
            } else {
                eax30 = 1;
            }
            if (!*reinterpret_cast<signed char*>(&eax30)) {
                if (reinterpret_cast<int32_t>(eax6) <= reinterpret_cast<int32_t>(0) || ((rdx31 = reinterpret_cast<int32_t>(eax6), rdi32 = reinterpret_cast<struct s0*>((rdx31 + rdx31 + rdx31 << 3) - 24 + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rsi) + reinterpret_cast<int32_t>(eax5) * 8))), rax33 = _ZN4Grid9getAnimalEv(rdi32), rax33 == 0) || (rdx34 = reinterpret_cast<int32_t>(eax6), rdi35 = reinterpret_cast<struct s0*>((rdx34 + rdx34 + rdx34 << 3) - 24 + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rsi) + reinterpret_cast<int32_t>(eax5) * 8))), rax36 = _ZN4Grid9getAnimalEv(rdi35), eax37 = _ZN6Animal7getTypeEv(rax36, rsi), !reinterpret_cast<int1_t>(eax37 == 3)))) {
                    eax38 = 0;
                } else {
                    eax38 = 1;
                }
                if (!*reinterpret_cast<signed char*>(&eax38)) {
                    rax39 = _Z18getRabbitDirectionPP4GridP6Animalii(rsi, rdi, edx, ecx);
                } else {
                    *reinterpret_cast<int32_t*>(&rax39) = 3;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax39) + 4) = 0;
                }
            } else {
                *reinterpret_cast<int32_t*>(&rax39) = 2;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax39) + 4) = 0;
            }
        } else {
            *reinterpret_cast<int32_t*>(&rax39) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax39) + 4) = 0;
        }
    } else {
        *reinterpret_cast<int32_t*>(&rax39) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax39) + 4) = 0;
    }
    return rax39;
}

/* Rabbit::breed(Grid**, int, int) */
void _ZN6Rabbit5breedEPP4Gridii(struct s0* rdi, struct s0* rsi, void* edx, void* ecx) {
    uint32_t eax5;
    uint32_t eax6;
    struct s0* rax7;
    struct s0* rax8;
    int64_t rax9;

    _ZN6Animal4getYEv(rdi, rsi);
    _ZN6Animal4getXEv(rdi, rsi);
    eax5 = _Z17getEmptyDirectionPP4GridP6Animalii(rsi, rdi, edx, ecx, rsi, rdi, edx, ecx);
    eax6 = eax5 + 1;
    if (eax6 > 4) {
        rax7 = fun_ff0(0x206040, "unexpected error", 0x206040, "unexpected error");
        rax8 = _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
        fun_1020(rax7, rax8, rax7, rax8);
        goto 0x27aa;
    } else {
        *reinterpret_cast<uint32_t*>(&rax9) = eax6;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
        goto 0x4cc0 + *reinterpret_cast<int32_t*>(rax9 * 4 + 0x4cc0);
    }
}

void fun_26a4() {
    struct s0* rsi1;
    struct s0* rax2;
    int64_t rax3;
    int64_t rbp4;
    struct s0** edx5;
    int64_t rbp6;
    struct s0* rsi7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rdx10;
    int64_t rbp11;
    struct s0* rsi12;
    int64_t rbp13;
    struct s0* rdi14;
    int64_t rbp15;
    int64_t rbp16;

    rax2 = fun_1000(40, rsi1);
    *reinterpret_cast<int32_t*>(&rax3) = *reinterpret_cast<int32_t*>(rbp4 - 32);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    edx5 = *reinterpret_cast<struct s0***>(rbp6 - 36);
    rsi7 = *reinterpret_cast<struct s0**>(rbp8 - 64);
    _ZN6RabbitC2EPP4Gridii(rax2, rsi7, edx5, static_cast<uint32_t>(rax3 - 1));
    *reinterpret_cast<struct s0**>(rbp9 - 24) = rax2;
    rdx10 = *reinterpret_cast<int32_t*>(rbp11 - 32);
    rsi12 = *reinterpret_cast<struct s0**>(rbp13 - 24);
    rdi14 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>((*reinterpret_cast<void***>(rbp15 - 64))[*reinterpret_cast<int32_t*>(rbp16 - 36)]) + ((rdx10 + rdx10 + rdx10 << 3) - 24));
    _ZN4Grid9setAnimalEP6Animal(rdi14, rsi12);
    goto 0x27aa;
}

void fun_2986() {
    struct s0* rsi1;
    struct s0* rax2;
    int64_t rax3;
    int64_t rbp4;
    struct s0** edx5;
    int64_t rbp6;
    struct s0* rsi7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rdx10;
    int64_t rbp11;
    struct s0* rsi12;
    int64_t rbp13;
    struct s0* rdi14;
    int64_t rbp15;
    int64_t rbp16;

    rax2 = fun_1000(40, rsi1);
    *reinterpret_cast<int32_t*>(&rax3) = *reinterpret_cast<int32_t*>(rbp4 - 32);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    edx5 = *reinterpret_cast<struct s0***>(rbp6 - 36);
    rsi7 = *reinterpret_cast<struct s0**>(rbp8 - 64);
    _ZN5TigerC2EPP4Gridii(rax2, rsi7, edx5, static_cast<uint32_t>(rax3 - 1));
    *reinterpret_cast<struct s0**>(rbp9 - 24) = rax2;
    rdx10 = *reinterpret_cast<int32_t*>(rbp11 - 32);
    rsi12 = *reinterpret_cast<struct s0**>(rbp13 - 24);
    rdi14 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>((*reinterpret_cast<void***>(rbp15 - 64))[*reinterpret_cast<int32_t*>(rbp16 - 36)]) + ((rdx10 + rdx10 + rdx10 << 3) - 24));
    _ZN4Grid9setAnimalEP6Animal(rdi14, rsi12);
    goto 0x2a8c;
}

void fun_1076() {
    goto 0xf80;
}

void fun_fb6() {
    goto 0xf80;
}

void fun_2a1f() {
    struct s0* rbx1;
    struct s0* rax2;
    struct s0* rax3;
    struct s0* rbx4;
    struct s0* rax5;
    struct s0* rbx6;
    struct s0* rax7;
    struct s0* rbx8;

    fun_1010(rbx1, 40);
    rax3 = fun_1080(rax2, 40);
    fun_1010(rbx4, 40);
    rax5 = fun_1080(rax3, 40);
    fun_1010(rbx6, 40);
    rax7 = fun_1080(rax5, 40);
    fun_1010(rbx8, 40);
    fun_1080(rax7, 40);
}

void fun_273d() {
    struct s0* rbx1;
    struct s0* rax2;
    struct s0* rax3;
    struct s0* rbx4;
    struct s0* rax5;
    struct s0* rbx6;
    struct s0* rax7;
    struct s0* rbx8;

    fun_1010(rbx1, 40);
    rax3 = fun_1080(rax2, 40);
    fun_1010(rbx4, 40);
    rax5 = fun_1080(rax3, 40);
    fun_1010(rbx6, 40);
    rax7 = fun_1080(rax5, 40);
    fun_1010(rbx8, 40);
    fun_1080(rax7, 40);
}
