/* UNAME:FDBBCTR */
#include <algol68/Asupport.h>

A_PROCEDURE(A68_INT *,A68t31,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t31  A68_31 ;    /* PROC(REF INT,MODE26) REF INT */

A_PROCEDURE(A68_VOID ,A68t32,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t32  A68_32 ;    /* PROC(REF MODE26,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t33,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t33  A68_33 ;    /* PROC(REF MODE26,CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t34,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t34  A68_34 ;    /* PROC(MODE26,CHAR) MODE26 */
struct A68t36 ;

A_PROCEDURE(A68_VOID ,A68t35,(struct A68t36 ,A68_VC *),(struct A68t36 ,A68_VC *,void *));
typedef struct A68t35  A68_35 ;    /* PROC(MODE36) REF MODE26 */
A_VECTOR(A68_VC ,A68t36);
typedef struct A68t36  A68_36 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_INT ,A68t37,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t37  A68_37 ;    /* PROC(CHAR,MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t38,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t38  A68_38 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t39,(A68_VC ,A68_CHAR ),(A68_VC ,A68_CHAR ,void *));
typedef struct A68t39  A68_39 ;    /* PROC(REF MODE26,CHAR) VOID */
A_ISTRUCT(A68_CHAR ,4,A68t40);
typedef struct A68t40  A68_40 ;    /* STRUCT 4 CHAR */

A_PROCEDURE(struct A68t40 ,A68t41,(A68_INT ),(A68_INT ,void *));
typedef struct A68t41  A68_41 ;    /* PROC(INT) MODE40 */

A_PROCEDURE(A68_INT ,A68t42,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t42  A68_42 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_VOID ,A68t43,(A68_CHAR ,A68_VC ,A68_VC *),(A68_CHAR ,A68_VC ,A68_VC *,void *));
typedef struct A68t43  A68_43 ;    /* PROC(CHAR,REF MODE26) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t44,(A68_VC ),(A68_VC ,void *));
typedef struct A68t44  A68_44 ;    /* PROC(MODE26) INT */

A_PROCEDURE(A68_BITS ,A68t45,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t45  A68_45 ;    /* PROC(BITS,BITS) BITS */

A_PROCEDURE(A68_LBITS ,A68t46,(A68_LBITS ,A68_LBITS ),(A68_LBITS ,A68_LBITS ,void *));
typedef struct A68t46  A68_46 ;    /* PROC(LONG BITS,LONG BITS) LONG BITS */

A_PROCEDURE(A68_BITS *,A68t47,(A68_BITS *,A68_BITS ),(A68_BITS *,A68_BITS ,void *));
typedef struct A68t47  A68_47 ;    /* PROC(REF BITS,BITS) REF BITS */

A_PROCEDURE(A68_VOID ,A68t48,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t49,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t49  A68_49 ;    /* PROC(INT,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t50,(A68_LINT ,A68_INT ,A68_VC *),(A68_LINT ,A68_INT ,A68_VC *,void *));
typedef struct A68t50  A68_50 ;    /* PROC(LONG INT,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t51,(A68_CHAR ,A68_INT *,A68_VC ),(A68_CHAR ,A68_INT *,A68_VC ,void *));
typedef struct A68t51  A68_51 ;    /* PROC(CHAR,REF INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t52,(A68_LBITS ,A68_INT ,A68_VC *),(A68_LBITS ,A68_INT ,A68_VC *,void *));
typedef struct A68t52  A68_52 ;    /* PROC(LONG BITS,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t53,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t53  A68_53 ;    /* PROC(REF INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t54,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t54  A68_54 ;    /* PROC(BOOL) MODE26 */
A_ISTRUCT(A68_CHAR ,7,A68t56);
typedef struct A68t56  A68_56 ;    /* STRUCT 7 CHAR */
struct A68t55{
struct A68t56  Name;
A_PAD_ISTRUCT(A68_56 ,PAD_1)
A68_BOOL  Set;
A_PAD_BOOL(PAD_2)
};
typedef struct A68t55  A68_55 ;    /* STRUCT(MODE56,BOOL)  */
struct A68t57{
A68_INT  Labno;
A_PAD_INT(PAD_3)
};
typedef struct A68t57  A68_57 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_VOID ,A68t58,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t58  A68_58 ;    /* PROC(MODE26) MODE26 */
struct A68t59{
A68_BOOL  Block;
A_PAD_BOOL(PAD_4)
A68_BOOL  Dynamicresult;
A_PAD_BOOL(PAD_5)
A68_BOOL  Discardeddynamicresult;
A_PAD_BOOL(PAD_6)
A68_INT  Type;
A_PAD_INT(PAD_7)
};
typedef struct A68t59  A68_59 ;    /* STRUCT(BOOL,BOOL,BOOL,INT)  */

A_PROCEDURE(A68_VOID ,A68t60,(struct A68t59 ,struct A68t55 **,A68_BOOL *),(struct A68t59 ,struct A68t55 **,A68_BOOL *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(MODE59,REF REF MODE55,REF BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t61,(struct A68t59 ,struct A68t55 *,struct A68t55 *,A68_BOOL ,A68_BOOL ),(struct A68t59 ,struct A68t55 *,struct A68t55 *,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t61  A68_61 ;    /* PROC(MODE59,REF MODE55,REF MODE55,BOOL,BOOL) VOID */
struct A68t63 ;

A_PROCEDURE(A68_VOID ,A68t62,(A68_BOOL ,A68_BOOL ,struct A68t63 ),(A68_BOOL ,A68_BOOL ,struct A68t63 ,void *));
typedef struct A68t62  A68_62 ;    /* PROC(BOOL,BOOL,MODE63) VOID */
struct A68t63{
struct A68t64 * Value;
struct A68t55 * End;
A68_INT  Type;
A_PAD_INT(PAD_8)
};
typedef struct A68t63  A68_63 ;    /* STRUCT(REF MODE64,REF MODE55,INT)  */
struct A68t66{
A68_INT  Rdenno;
A_PAD_INT(PAD_9)
};
typedef struct A68t66  A68_66 ;    /* STRUCT(INT)  */
struct A68t67{
A68_INT  Idno;
A_PAD_INT(PAD_10)
};
typedef struct A68t67  A68_67 ;    /* STRUCT(INT)  */
struct A68t68{
struct A68t56  Name;
A_PAD_ISTRUCT(A68_56 ,PAD_11)
A68_INT  Mode;
A_PAD_INT(PAD_12)
};
typedef struct A68t68  A68_68 ;    /* STRUCT(MODE56,INT)  */
struct A68t69{
A68_INT  Nse;
A_PAD_INT(PAD_13)
};
typedef struct A68t69  A68_69 ;    /* STRUCT(INT)  */
struct A68t70{
A68_INT  Fn;
A_PAD_INT(PAD_14)
A68_INT  Param;
A_PAD_INT(PAD_15)
struct A68t71 * Operands;
};
typedef struct A68t70  A68_70 ;    /* STRUCT(INT,INT,REF MODE71)  */
struct A68t65 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t66  mode2;
struct A68t67  mode4;
struct A68t68  mode5;
A68_VC  mode6;
struct A68t57  mode7;
struct A68t69  mode8;
struct A68t70  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t65  A68_65 ;    /* UNION(LONG BITS,MODE66,VOID,MODE67,MODE68,MODE26,MODE57,MODE69,MODE70)  */
struct A68t64{
A68_INT  Mode;
A_PAD_INT(PAD_16)
A68_BITS  Info;
A_PAD_BITS(PAD_17)
struct A68t65  Extra;
};
typedef struct A68t64  A68_64 ;    /* STRUCT(INT,BITS,MODE65)  */
struct A68t71{
struct A68t64  Value;
struct A68t71 * Rest;
};
typedef struct A68t71  A68_71 ;    /* STRUCT(MODE64,REF MODE71)  */

A_PROCEDURE(A68_VOID ,A68t72,(A68_BOOL ,A68_BOOL ),(A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t72  A68_72 ;    /* PROC(BOOL,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t73,(A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t55 *),(A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t55 *,void *));
typedef struct A68t73  A68_73 ;    /* PROC(BOOL,BOOL,BOOL,REF MODE55) VOID */

A_PROCEDURE(A68_VOID ,A68t74,(struct A68t64 *),(struct A68t64 *,void *));
typedef struct A68t74  A68_74 ;    /* PROC(REF MODE64) VOID */

A_PROCEDURE(A68_VOID ,A68t75,(void),(void *));
typedef struct A68t75  A68_75 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t76,(A68_BOOL ,struct A68t63 ),(A68_BOOL ,struct A68t63 ,void *));
typedef struct A68t76  A68_76 ;    /* PROC(BOOL,MODE63) VOID */

A_PROCEDURE(A68_VOID ,A68t77,(A68_INT ),(A68_INT ,void *));
typedef struct A68t77  A68_77 ;    /* PROC(INT) VOID */
struct A68t79 ;
struct A68t80 ;

A_PROCEDURE(A68_VOID ,A68t78,(struct A68t79 ,struct A68t64 *,struct A68t80 ),(struct A68t79 ,struct A68t64 *,struct A68t80 ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(MODE79,REF MODE64,REF MODE80) VOID */
struct A68t79{
A68_INT  Mode;
A_PAD_INT(PAD_18)
A68_BITS  Props;
A_PAD_BITS(PAD_19)
A68_INT  Param;
A_PAD_INT(PAD_20)
};
typedef struct A68t79  A68_79 ;    /* STRUCT(INT,BITS,INT)  */
A_ROW(A68_BOOL ,A68t80,1);
typedef struct A68t80  A68_80 ;    /* [] BOOL */

A_PROCEDURE(A68_VOID ,A68t81,(struct A68t79 ,struct A68t64 ,struct A68t80 ),(struct A68t79 ,struct A68t64 ,struct A68t80 ,void *));
typedef struct A68t81  A68_81 ;    /* PROC(MODE79,MODE64,REF MODE80) VOID */

A_PROCEDURE(A68_VOID ,A68t82,(A68_BOOL ,struct A68t64 *),(A68_BOOL ,struct A68t64 *,void *));
typedef struct A68t82  A68_82 ;    /* PROC(BOOL,REF MODE64) VOID */

A_PROCEDURE(A68_VOID ,A68t83,(struct A68t59 ,struct A68t63 ,struct A68t55 *,A68_BOOL ,A68_BOOL ,A68_BOOL ),(struct A68t59 ,struct A68t63 ,struct A68t55 *,A68_BOOL ,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t83  A68_83 ;    /* PROC(MODE59,MODE63,REF MODE55,BOOL,BOOL,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t84,(struct A68t71 **,struct A68t63 ),(struct A68t71 **,struct A68t63 ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(REF REF MODE71,MODE63) VOID */

A_PROCEDURE(A68_VOID ,A68t85,(struct A68t71 **),(struct A68t71 **,void *));
typedef struct A68t85  A68_85 ;    /* PROC(REF REF MODE71) VOID */

A_PROCEDURE(A68_VOID ,A68t86,(A68_VC ,A68_INT ,struct A68t71 *,struct A68t68 *),(A68_VC ,A68_INT ,struct A68t71 *,struct A68t68 *,void *));
typedef struct A68t86  A68_86 ;    /* PROC(MODE26,INT,REF MODE71) MODE68 */
struct A68t87{
A68_INT  Rdenno;
A_PAD_INT(PAD_21)
A68_INT  Mode;
A_PAD_INT(PAD_22)
A68_INT  Nods;
A_PAD_INT(PAD_23)
A68_INT  Deflex;
A_PAD_INT(PAD_24)
};
typedef struct A68t87  A68_87 ;    /* STRUCT(INT,INT,INT,INT)  */
A_ISTRUCT(A68_CHAR ,32,A68t89);
typedef struct A68t89  A68_89 ;    /* STRUCT 32 CHAR */
struct A68t88{
struct A68t89  N;
A_PAD_ISTRUCT(A68_89 ,PAD_25)
struct A68t89  F;
A_PAD_ISTRUCT(A68_89 ,PAD_26)
A68_INT  Level;
A_PAD_INT(PAD_27)
};
typedef struct A68t88  A68_88 ;    /* STRUCT(MODE89,MODE89,INT)  */
struct A68t90{
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_28)
A68_INT  Decno;
A_PAD_INT(PAD_29)
A68_INT  Level;
A_PAD_INT(PAD_30)
A68_INT  Mode;
A_PAD_INT(PAD_31)
A68_INT  Scope;
A_PAD_INT(PAD_32)
struct A68t90 * Rest;
};
typedef struct A68t90  A68_90 ;    /* STRUCT(MODE89,INT,INT,INT,INT,REF MODE90)  */
struct A68t91{
A68_INT  Rdenno;
A_PAD_INT(PAD_33)
A68_INT  Imode;
A_PAD_INT(PAD_34)
A68_INT  Length;
A_PAD_INT(PAD_35)
A68_INT  Deflex;
A_PAD_INT(PAD_36)
};
typedef struct A68t91  A68_91 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t100{
A68_INT  Mode;
A_PAD_INT(PAD_37)
};
typedef struct A68t100  A68_100 ;    /* STRUCT(INT)  */
struct A68t92 { A68_INT mode; union {
A68_INT  mode1;
struct A68t93 * mode2;
struct A68t94 * mode3;
struct A68t95 * mode4;
struct A68t91 * mode5;
struct A68t96 * mode6;
struct A68t97 * mode7;
struct A68t87 * mode8;
struct A68t98 * mode9;
struct A68t99 * mode10;
struct A68t100  mode11;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t92  A68_92 ;    /* UNION(INT,REF MODE93,REF MODE94,REF MODE95,REF MODE91,REF MODE96,REF MODE97,REF MODE87,REF MODE98,REF MODE99,MODE100)  */
struct A68t93{
A68_INT  Rdenno;
A_PAD_INT(PAD_38)
struct A68t104 * Modelist;
};
typedef struct A68t93  A68_93 ;    /* STRUCT(INT,REF MODE104)  */
struct A68t94{
A68_INT  Deproc;
A_PAD_INT(PAD_39)
struct A68t104 * Pars;
};
typedef struct A68t94  A68_94 ;    /* STRUCT(INT,REF MODE104)  */
struct A68t95{
A68_INT  Rdenno;
A_PAD_INT(PAD_40)
A68_INT  Deflex;
A_PAD_INT(PAD_41)
struct A68t103 * Sels;
};
typedef struct A68t95  A68_95 ;    /* STRUCT(INT,INT,REF MODE103)  */
struct A68t96{
A68_INT  Deproc;
A_PAD_INT(PAD_42)
};
typedef struct A68t96  A68_96 ;    /* STRUCT(INT)  */
struct A68t97{
A68_INT  Rdenno;
A_PAD_INT(PAD_43)
A68_INT  Vecmode;
A_PAD_INT(PAD_44)
A68_INT  Deflex;
A_PAD_INT(PAD_45)
};
typedef struct A68t97  A68_97 ;    /* STRUCT(INT,INT,INT)  */
struct A68t98{
A68_INT  Mode;
A_PAD_INT(PAD_46)
struct A68t102 * Stenlist;
};
typedef struct A68t98  A68_98 ;    /* STRUCT(INT,REF MODE102)  */
struct A68t99{
A68_INT  Mode;
A_PAD_INT(PAD_47)
A68_INT  Modeproc;
A_PAD_INT(PAD_48)
struct A68t101 * El;
};
typedef struct A68t99  A68_99 ;    /* STRUCT(INT,INT,REF MODE101)  */
struct A68t101{
struct A68t99 * Am;
struct A68t101 * Rest;
};
typedef struct A68t101  A68_101 ;    /* STRUCT(REF MODE99,REF MODE101)  */
struct A68t102{
A68_INT  Mode;
A_PAD_INT(PAD_49)
A68_INT  Rdenno;
A_PAD_INT(PAD_50)
struct A68t102 * Rest;
};
typedef struct A68t102  A68_102 ;    /* STRUCT(INT,INT,REF MODE102)  */
struct A68t103{
A68_INT  Mode;
A_PAD_INT(PAD_51)
A68_INT  Fieldno;
A_PAD_INT(PAD_52)
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_53)
struct A68t103 * Rest;
};
typedef struct A68t103  A68_103 ;    /* STRUCT(INT,INT,MODE89,REF MODE103)  */
struct A68t104{
A68_INT  Mode;
A_PAD_INT(PAD_54)
struct A68t104 * Rest;
};
typedef struct A68t104  A68_104 ;    /* STRUCT(INT,REF MODE104)  */
A_VECTOR(struct A68t108 ,A68t107);
typedef struct A68t107  A68_107 ;    /* VECTOR [] MODE108 */
A_VECTOR(struct A68t88 ,A68t114);
typedef struct A68t114  A68_114 ;    /* VECTOR [] MODE88 */
struct A68t113 { A68_INT mode; union {
A68_VC  mode1;
struct A68t114  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t113  A68_113 ;    /* UNION(REF MODE26,REF MODE114)  */
struct A68t109{
struct A68t89  F;
A_PAD_ISTRUCT(A68_89 ,PAD_55)
A68_INT  No;
A_PAD_INT(PAD_56)
A68_INT  Nl;
A_PAD_INT(PAD_57)
A68_INT  Ng;
A_PAD_INT(PAD_58)
struct A68t113  U;
};
typedef struct A68t109  A68_109 ;    /* STRUCT(MODE89,INT,INT,INT,MODE113)  */
A_VECTOR(struct A68t112 ,A68t110);
typedef struct A68t110  A68_110 ;    /* VECTOR [] MODE112 */
struct A68t112{
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_59)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_60)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_61)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_62)
A68_BOOL  Keptgenproc;
A_PAD_BOOL(PAD_63)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_64)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t112  A68_112 ;    /* STRUCT(MODE56,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26)  */
A_VECTOR(struct A68t56 ,A68t111);
typedef struct A68t111  A68_111 ;    /* VECTOR [] MODE56 */
struct A68t108{
struct A68t109  Xs;
struct A68t56  Ys;
A_PAD_ISTRUCT(A68_56 ,PAD_65)
A68_LINT  Timeoflastchange;
A_PAD_LINT(PAD_66)
struct A68t110  Keptinfo;
struct A68t111  Cnames;
};
typedef struct A68t108  A68_108 ;    /* STRUCT(MODE109,MODE56,LONG INT,REF MODE110,REF MODE111)  */
struct A68t106{
struct A68t56  Uname;
A_PAD_ISTRUCT(A68_56 ,PAD_67)
struct A68t56  Lname;
A_PAD_ISTRUCT(A68_56 ,PAD_68)
struct A68t56  Gname;
A_PAD_ISTRUCT(A68_56 ,PAD_69)
struct A68t107  Specs;
};
typedef struct A68t106  A68_106 ;    /* STRUCT(MODE56,MODE56,MODE56,REF MODE107)  */
struct A68t105{
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_70)
struct A68t106  Ym;
struct A68t89  Formal;
A_PAD_ISTRUCT(A68_89 ,PAD_71)
struct A68t56  Ys;
A_PAD_ISTRUCT(A68_56 ,PAD_72)
A68_INT  Level;
A_PAD_INT(PAD_73)
A68_INT  Ownlevel;
A_PAD_INT(PAD_74)
};
typedef struct A68t105  A68_105 ;    /* STRUCT(MODE89,MODE106,MODE89,MODE56,INT,INT)  */
struct A68t115{
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_75)
struct A68t88  L;
struct A68t88  G;
A68_INT  Type;
A_PAD_INT(PAD_76)
};
typedef struct A68t115  A68_115 ;    /* STRUCT(MODE89,MODE88,MODE88,INT)  */
struct A68t116{
A68_INT  Norden;
A_PAD_INT(PAD_77)
A68_INT  Nomodes;
A_PAD_INT(PAD_78)
A68_INT  Nolabs;
A_PAD_INT(PAD_79)
A68_INT  Nodecnos;
A_PAD_INT(PAD_80)
A68_INT  Nomodules;
A_PAD_INT(PAD_81)
A68_INT  Nolibinds;
A_PAD_INT(PAD_82)
};
typedef struct A68t116  A68_116 ;    /* STRUCT(INT,INT,INT,INT,INT,INT)  */
struct A68t117{
A68_INT  Type;
A_PAD_INT(PAD_83)
A68_INT  Moduleno;
A_PAD_INT(PAD_84)
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_85)
struct A68t106  Ym;
};
typedef struct A68t117  A68_117 ;    /* STRUCT(INT,INT,MODE89,MODE106)  */
struct A68t118{
struct A68t115  Xmi;
struct A68t106  Ym;
};
typedef struct A68t118  A68_118 ;    /* STRUCT(MODE115,MODE106)  */
struct A68t119{
struct A68t109  Xs;
struct A68t56  Ys;
A_PAD_ISTRUCT(A68_56 ,PAD_86)
};
typedef struct A68t119  A68_119 ;    /* STRUCT(MODE109,MODE56)  */

A_PROCEDURE(A68_VOID ,A68t120,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t120  A68_120 ;    /* PROC(REF MODE26,REF MODE26) VOID */
struct A68t122 ;
struct A68t123 ;
struct A68t124 ;

A_PROCEDURE(A68_VOID ,A68t121,(struct A68t122 ,struct A68t123 ,struct A68t124 ,A68_INT ,struct A68t64 *),(struct A68t122 ,struct A68t123 ,struct A68t124 ,A68_INT ,struct A68t64 *,void *));
typedef struct A68t121  A68_121 ;    /* PROC(MODE122,MODE123,REF MODE124,INT,REF MODE64) VOID */
struct A68t122{
A68_VC  Name;
A68_BITS  Props;
A_PAD_BITS(PAD_87)
A68_INT  Mode;
A_PAD_INT(PAD_88)
A68_INT  Rdenno;
A_PAD_INT(PAD_89)
A68_INT  Maxname;
A_PAD_INT(PAD_90)
};
typedef struct A68t122  A68_122 ;    /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
struct A68t123{
A68_INT  Level;
A_PAD_INT(PAD_91)
A68_INT  Block;
A_PAD_INT(PAD_92)
};
typedef struct A68t123  A68_123 ;    /* STRUCT(INT,INT)  */
A_VECTOR(A68_INT ,A68t124);
typedef struct A68t124  A68_124 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t125,(struct A68t122 ,struct A68t64 *),(struct A68t122 ,struct A68t64 *,void *));
typedef struct A68t125  A68_125 ;    /* PROC(MODE122,REF MODE64) VOID */

A_PROCEDURE(A68_VOID ,A68t126,(struct A68t122 ,A68_VC ,A68_VC ,struct A68t64 *),(struct A68t122 ,A68_VC ,A68_VC ,struct A68t64 *,void *));
typedef struct A68t126  A68_126 ;    /* PROC(MODE122,REF MODE26,REF MODE26,REF MODE64) VOID */

A_PROCEDURE(A68_VOID ,A68t127,(A68_VC ),(A68_VC ,void *));
typedef struct A68t127  A68_127 ;    /* PROC(REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t128,(A68_VC ,A68_VC ,A68_BOOL ),(A68_VC ,A68_VC ,A68_BOOL ,void *));
typedef struct A68t128  A68_128 ;    /* PROC(REF MODE26,REF MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t129,(A68_VC ,struct A68t55 *),(A68_VC ,struct A68t55 *,void *));
typedef struct A68t129  A68_129 ;    /* PROC(REF MODE26,REF MODE55) VOID */

A_PROCEDURE(A68_INT ,A68t130,(A68_INT ),(A68_INT ,void *));
typedef struct A68t130  A68_130 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t131,(A68_INT ),(A68_INT ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t132,(struct A68t123 *),(struct A68t123 *,void *));
typedef struct A68t132  A68_132 ;    /* PROC MODE123 */

A_PROCEDURE(A68_INT ,A68t133,(void),(void *));
typedef struct A68t133  A68_133 ;    /* PROC INT */

A_PROCEDURE(A68_BOOL ,A68t134,(void),(void *));
typedef struct A68t134  A68_134 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t135,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t135  A68_135 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t136,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t136  A68_136 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t137,(struct A68t123 ,struct A68t123 ),(struct A68t123 ,struct A68t123 ,void *));
typedef struct A68t137  A68_137 ;    /* PROC(MODE123,MODE123) BOOL */

A_PROCEDURE(A68_BOOL ,A68t138,(struct A68t123 ),(struct A68t123 ,void *));
typedef struct A68t138  A68_138 ;    /* PROC(MODE123) BOOL */

A_PROCEDURE(A68_VOID ,A68t139,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t139  A68_139 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t140,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t140  A68_140 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t141,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t141  A68_141 ;    /* PROC(INT) REF MODE26 */
struct A68t143 ;

A_PROCEDURE(A68_VOID ,A68t142,(A68_INT ,struct A68t143 ),(A68_INT ,struct A68t143 ,void *));
typedef struct A68t142  A68_142 ;    /* PROC(INT,MODE143) VOID */
A_ROW(A68_VC ,A68t143,1);
typedef struct A68t143  A68_143 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t144,(void),(void *));
typedef struct A68t144  A68_144 ;    /* PROC BITS */
struct A68t145{
A68_INT  Cfile;
A_PAD_INT(PAD_93)
};
typedef struct A68t145  A68_145 ;    /* STRUCT(INT)  */
struct A68t146{
A68_INT  Seedfile;
A_PAD_INT(PAD_94)
};
typedef struct A68t146  A68_146 ;    /* STRUCT(INT)  */
struct A68t147 { A68_INT mode; union {
struct A68t145  mode1;
struct A68t146  mode2;
struct A68t56  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t147  A68_147 ;    /* UNION(MODE145,MODE146,MODE56,VOID)  */

A_PROCEDURE(A68_VOID ,A68t148,(A68_VC ),(A68_VC ,void *));
typedef struct A68t148  A68_148 ;    /* PROC(MODE26) VOID */
struct A68t149{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_95)
A68_VC  Sourcefile;
struct A68t56  Nameseed;
A_PAD_ISTRUCT(A68_56 ,PAD_96)
struct A68t147  Nameseedorigin;
struct A68t150 * Used_modules;
A68_VC  Commandline;
struct A68t151 * Environment;
};
typedef struct A68t149  A68_149 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE56,MODE147,REF MODE150,REF MODE26,REF MODE151)  */
struct A68t150{
A68_VC  Modinfo_file;
struct A68t150 * Next;
};
typedef struct A68t150  A68_150 ;    /* STRUCT(REF MODE26,REF MODE150)  */
struct A68t151{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t151 * Next;
};
typedef struct A68t151  A68_151 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE151)  */
struct A68t153 ;
struct A68t154 ;

A_PROCEDURE(struct A68t153 *,A68t152,(A68_VC ,struct A68t154 *,A68_VC *),(A68_VC ,struct A68t154 *,A68_VC *,void *));
typedef struct A68t152  A68_152 ;    /* PROC(MODE26,REF MODE154,REF REF MODE26) REF MODE153 */
struct A68t153{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t153  A68_153 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t154{
A68_VC  Dir;
struct A68t154 * Next;
};
typedef struct A68t154  A68_154 ;    /* STRUCT(REF MODE26,REF MODE154)  */
struct A68t156 ;

A_PROCEDURE(A68_VOID ,A68t155,(struct A68t156 ,struct A68t64 *,A68_INT ),(struct A68t156 ,struct A68t64 *,A68_INT ,void *));
typedef struct A68t155  A68_155 ;    /* PROC(MODE156,REF MODE64,INT) VOID */
struct A68t156{
A68_INT  Type;
A_PAD_INT(PAD_97)
A68_VC  Name;
A68_INT  Mode;
A_PAD_INT(PAD_98)
A68_INT  Decno;
A_PAD_INT(PAD_99)
};
typedef struct A68t156  A68_156 ;    /* STRUCT(INT,REF MODE26,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t157,(A68_INT ,struct A68t123 *),(A68_INT ,struct A68t123 *,void *));
typedef struct A68t157  A68_157 ;    /* PROC(INT) MODE123 */

A_PROCEDURE(A68_VOID ,A68t158,(A68_VC ,struct A68t56 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t56 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(REF MODE26,MODE56,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t159,(struct A68t156 ,struct A68t71 **),(struct A68t156 ,struct A68t71 **,void *));
typedef struct A68t159  A68_159 ;    /* PROC(MODE156,REF REF MODE71) VOID */
A_ROW(struct A68t161 ,A68t160,1);
typedef struct A68t160  A68_160 ;    /* [] MODE161 */
struct A68t161{
A68_INT  Mode;
A_PAD_INT(PAD_100)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_101)
struct A68t123  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_102)
A68_BITS  Flags;
A_PAD_BITS(PAD_103)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t161  A68_161 ;    /* STRUCT(INT,INT,MODE123,REF MODE26,REF MODE26,MODE56,BITS,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t162,(struct A68t156 ),(struct A68t156 ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(MODE156) VOID */
struct A68t164 ;

A_PROCEDURE(A68_VOID ,A68t163,(struct A68t164 ),(struct A68t164 ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(MODE164) VOID */
struct A68t164{
A68_VC  Name;
A68_INT  Labno;
A_PAD_INT(PAD_104)
A68_INT  Status;
A_PAD_INT(PAD_105)
A68_BOOL  Notsetting;
A_PAD_BOOL(PAD_106)
};
typedef struct A68t164  A68_164 ;    /* STRUCT(REF MODE26,INT,INT,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t165,(A68_VC ,A68_INT ,struct A68t124 ,A68_INT ,A68_INT ,struct A68t123 ,A68_BITS ),(A68_VC ,A68_INT ,struct A68t124 ,A68_INT ,A68_INT ,struct A68t123 ,A68_BITS ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(REF MODE26,INT,REF MODE124,INT,INT,MODE123,BITS) VOID */
A_ROW(struct A68t167 ,A68t166,1);
typedef struct A68t166  A68_166 ;    /* [] MODE167 */
struct A68t167{
A68_INT  Mode;
A_PAD_INT(PAD_107)
A68_INT  Resultmode;
A_PAD_INT(PAD_108)
A68_INT  Declevel;
A_PAD_INT(PAD_109)
struct A68t123  Environ;
A68_VC  Name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_110)
struct A68t56  Fnprefix;
A_PAD_ISTRUCT(A68_56 ,PAD_111)
struct A68t56  Envprefix;
A_PAD_ISTRUCT(A68_56 ,PAD_112)
A68_BITS  Flags;
A_PAD_BITS(PAD_113)
};
typedef struct A68t167  A68_167 ;    /* STRUCT(INT,INT,INT,MODE123,REF MODE26,MODE56,MODE56,MODE56,BITS)  */
struct A68t168{
A68_INT  Mode;
A_PAD_INT(PAD_114)
A68_VC  String;
};
typedef struct A68t168  A68_168 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t169{
A68_INT  I;
A_PAD_INT(PAD_115)
};
typedef struct A68t169  A68_169 ;    /* STRUCT(INT)  */
A_ROW(A68_INT ,A68t171,1);
typedef struct A68t171  A68_171 ;    /* [] INT */
struct A68t170{
A68_INT  Body;
A_PAD_INT(PAD_116)
A68_INT  Moduleno;
A_PAD_INT(PAD_117)
struct A68t171  Actuals;
};
typedef struct A68t170  A68_170 ;    /* STRUCT(INT,INT,REF MODE171)  */
struct A68t172{
A68_INT  Mode;
A_PAD_INT(PAD_118)
A68_INT  Number;
A_PAD_INT(PAD_119)
A68_VC  Insert;
};
typedef struct A68t172  A68_172 ;    /* STRUCT(INT,INT,REF MODE26)  */
struct A68t174{
A68_INT  Moduleno;
A_PAD_INT(PAD_120)
A68_INT  I;
A_PAD_INT(PAD_121)
A68_INT  J;
A_PAD_INT(PAD_122)
};
typedef struct A68t174  A68_174 ;    /* STRUCT(INT,INT,INT)  */
A_ROW(A68_VC ,A68t176,1);
typedef struct A68t176  A68_176 ;    /* [] REF MODE26 */
struct A68t175{
A68_INT  Moduleno;
A_PAD_INT(PAD_123)
A68_VC  Name;
A68_VC  Uname;
A68_VC  Lname;
A68_VC  Gname;
struct A68t176  Ysnames;
};
typedef struct A68t175  A68_175 ;    /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE176)  */
struct A68t173 { A68_INT mode; union {
struct A68t170  mode1;
struct A68t174  mode2;
struct A68t175  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t173  A68_173 ;    /* UNION(MODE170,MODE174,MODE175)  */
struct A68t178{
A68_INT  Nochars;
A_PAD_INT(PAD_124)
A68_INT  Nocases;
A_PAD_INT(PAD_125)
A68_INT  W;
A_PAD_INT(PAD_126)
};
typedef struct A68t178  A68_178 ;    /* STRUCT(INT,INT,INT)  */
struct A68t177{
struct A68t178  Info;
A68_VC  Text;
};
typedef struct A68t177  A68_177 ;    /* STRUCT(MODE178,REF MODE26)  */
struct A68t179{
A68_VC  Representation;
};
typedef struct A68t179  A68_179 ;    /* STRUCT(REF MODE26)  */
struct A68t181{
A68_INT  Mode;
A_PAD_INT(PAD_127)
A68_VC  Nu;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t182{
A68_INT  Mode;
A_PAD_INT(PAD_128)
A68_LBITS  Denotation;
A_PAD_LBITS(PAD_129)
};
typedef struct A68t182  A68_182 ;    /* STRUCT(INT,LONG BITS)  */
struct A68t183{
A68_INT  Mode;
A_PAD_INT(PAD_130)
A68_VC  Denotation;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t184{
A68_INT  Fn;
A_PAD_INT(PAD_131)
A68_INT  Mode;
A_PAD_INT(PAD_132)
A68_INT  Param;
A_PAD_INT(PAD_133)
};
typedef struct A68t184  A68_184 ;    /* STRUCT(INT,INT,INT)  */
struct A68t185{
A68_INT  W;
A_PAD_INT(PAD_134)
};
typedef struct A68t185  A68_185 ;    /* STRUCT(INT)  */
struct A68t186{
A68_BOOL  Start;
A_PAD_BOOL(PAD_135)
};
typedef struct A68t186  A68_186 ;    /* STRUCT(BOOL)  */
struct A68t187{
A68_INT  Fn;
A_PAD_INT(PAD_136)
A68_INT  Mode;
A_PAD_INT(PAD_137)
A68_BITS  Props;
A_PAD_BITS(PAD_138)
A68_INT  Param;
A_PAD_INT(PAD_139)
};
typedef struct A68t187  A68_187 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t188{
A68_INT  Fn;
A_PAD_INT(PAD_140)
A68_INT  Mode;
A_PAD_INT(PAD_141)
A68_BITS  Props;
A_PAD_BITS(PAD_142)
A68_INT  Resultmode;
A_PAD_INT(PAD_143)
};
typedef struct A68t188  A68_188 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t189{
A68_INT  Fn;
A_PAD_INT(PAD_144)
A68_BITS  Props;
A_PAD_BITS(PAD_145)
};
typedef struct A68t189  A68_189 ;    /* STRUCT(INT,BITS)  */
struct A68t180 { A68_INT mode; union {
struct A68t69  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t179  mode4;
struct A68t57  mode5;
struct A68t181  mode6;
struct A68t168  mode7;
struct A68t182  mode8;
struct A68t183  mode9;
struct A68t184  mode10;
struct A68t156  mode11;
struct A68t122  mode12;
struct A68t185  mode13;
struct A68t164  mode14;
struct A68t79  mode15;
struct A68t169  mode16;
struct A68t186  mode17;
struct A68t177  mode18;
struct A68t172  mode19;
struct A68t187  mode20;
struct A68t188  mode21;
struct A68t189  mode22;
struct A68t170  mode23;
struct A68t174  mode24;
struct A68t175  mode25;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t180  A68_180 ;    /* UNION(MODE69,INT,BOOL,MODE179,MODE57,MODE181,MODE168,MODE182,MODE183,MODE184,MODE156,MODE122,MODE185,MODE164,MODE79,MODE169,MODE186,MODE177,MODE172,MODE187,MODE188,MODE189,MODE170,MODE174,MODE175,VOID)  */
struct A68t190 { A68_INT mode; union {
struct A68t69  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t179  mode4;
struct A68t57  mode5;
struct A68t181  mode6;
struct A68t168  mode7;
struct A68t182  mode8;
struct A68t183  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t190  A68_190 ;    /* UNION(MODE69,INT,BOOL,MODE179,MODE57,MODE181,MODE168,MODE182,MODE183)  */
struct A68t191 { A68_INT mode; union {
struct A68t69  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t179  mode4;
struct A68t57  mode5;
struct A68t181  mode6;
struct A68t168  mode7;
struct A68t182  mode8;
struct A68t183  mode9;
struct A68t184  mode10;
struct A68t156  mode11;
struct A68t122  mode12;
struct A68t185  mode13;
struct A68t164  mode14;
struct A68t79  mode15;
struct A68t169  mode16;
struct A68t186  mode17;
struct A68t177  mode18;
struct A68t172  mode19;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t191  A68_191 ;    /* UNION(MODE69,INT,BOOL,MODE179,MODE57,MODE181,MODE168,MODE182,MODE183,MODE184,MODE156,MODE122,MODE185,MODE164,MODE79,MODE169,MODE186,MODE177,MODE172)  */

A_PROCEDURE(A68_VOID ,A68t192,(struct A68t116 *,struct A68t180 *,struct A68t171 ),(struct A68t116 *,struct A68t180 *,struct A68t171 ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(REF MODE116,REF MODE180,REF MODE171) VOID */

A_PROCEDURE(A68_VOID ,A68t193,(struct A68t190 ,struct A68t64 *),(struct A68t190 ,struct A68t64 *,void *));
typedef struct A68t193  A68_193 ;    /* PROC(MODE190) MODE64 */
struct A68t194{
struct A68t64 * Control;
struct A68t64 * Step;
A68_BOOL  Forpart;
A_PAD_BOOL(PAD_146)
A68_BOOL  Frompart;
A_PAD_BOOL(PAD_147)
A68_BOOL  Bypart;
A_PAD_BOOL(PAD_148)
A68_BOOL  Topart;
A_PAD_BOOL(PAD_149)
};
typedef struct A68t194  A68_194 ;    /* STRUCT(REF MODE64,REF MODE64,BOOL,BOOL,BOOL,BOOL)  */
struct A68t195{
struct A68t64  Ident;
A68_VC  Control;
A68_BOOL  Needstemp;
A_PAD_BOOL(PAD_150)
};
typedef struct A68t195  A68_195 ;    /* STRUCT(MODE64,REF MODE26,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t196,(struct A68t194 *,A68_INT ,struct A68t71 **),(struct A68t194 *,A68_INT ,struct A68t71 **,void *));
typedef struct A68t196  A68_196 ;    /* PROC(REF MODE194,INT,REF REF MODE71) VOID */
struct A68t198 ;

A_PROCEDURE(A68_VOID ,A68t197,(struct A68t198 ,struct A68t71 **),(struct A68t198 ,struct A68t71 **,void *));
typedef struct A68t197  A68_197 ;    /* PROC(REF MODE198,REF REF MODE71) VOID */
A_VECTOR(struct A68t195 ,A68t198);
typedef struct A68t198  A68_198 ;    /* VECTOR [] MODE195 */
struct A68t199{
A68_INT  Parameters;
A_PAD_INT(PAD_151)
A68_INT  Result;
A_PAD_INT(PAD_152)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_153)
};
typedef struct A68t199  A68_199 ;    /* STRUCT(INT,INT,BOOL)  */
struct A68t200{
A68_INT  Mode;
A_PAD_INT(PAD_154)
A68_INT  Offset;
A_PAD_INT(PAD_155)
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_156)
};
typedef struct A68t200  A68_200 ;    /* STRUCT(INT,INT,MODE89)  */

A_PROCEDURE(A68_VOID ,A68t201,(A68_INT ,struct A68t124 *),(A68_INT ,struct A68t124 *,void *));
typedef struct A68t201  A68_201 ;    /* PROC(INT) REF MODE124 */

A_PROCEDURE(A68_VOID ,A68t202,(struct A68t200 *,A68_VC *),(struct A68t200 *,A68_VC *,void *));
typedef struct A68t202  A68_202 ;    /* PROC(REF MODE200) MODE26 */

A_PROCEDURE(A68_VOID ,A68t203,(A68_INT ,A68_VC ,struct A68t68 *),(A68_INT ,A68_VC ,struct A68t68 *,void *));
typedef struct A68t203  A68_203 ;    /* PROC(INT,MODE26) MODE68 */
struct A68t205 ;

A_PROCEDURE(A68_VOID ,A68t204,(struct A68t205 ,A68_INT ),(struct A68t205 ,A68_INT ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(REF MODE205,INT) VOID */
A_ROW(struct A68t92 ,A68t205,1);
typedef struct A68t205  A68_205 ;    /* [] MODE92 */

A_PROCEDURE(A68_VOID ,A68t206,(A68_INT ,struct A68t199 *),(A68_INT ,struct A68t199 *,void *));
typedef struct A68t206  A68_206 ;    /* PROC(INT) MODE199 */
struct A68t208 ;

A_PROCEDURE(A68_VOID ,A68t207,(A68_INT ,struct A68t208 *),(A68_INT ,struct A68t208 *,void *));
typedef struct A68t207  A68_207 ;    /* PROC(INT) REF MODE208 */
A_VECTOR(struct A68t200 ,A68t208);
typedef struct A68t208  A68_208 ;    /* VECTOR [] MODE200 */

A_PROCEDURE(A68_INT ,A68t209,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t209  A68_209 ;    /* PROC(INT,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t210,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t210  A68_210 ;    /* PROC(INT,INT) MODE26 */
struct A68t211{
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_157)
struct A68t106  Ym;
struct A68t56  Ys;
A_PAD_ISTRUCT(A68_56 ,PAD_158)
A68_INT  Level;
A_PAD_INT(PAD_159)
struct A68t212 * Ids;
struct A68t213 * Uses;
struct A68t211 * Rest;
};
typedef struct A68t211  A68_211 ;    /* STRUCT(MODE89,MODE106,MODE56,INT,REF MODE212,REF MODE213,REF MODE211)  */
struct A68t212{
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_160)
struct A68t56  Uname;
A_PAD_ISTRUCT(A68_56 ,PAD_161)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_162)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_163)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_164)
A68_BOOL  Genproc;
A_PAD_BOOL(PAD_165)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_166)
A68_INT  Mode;
A_PAD_INT(PAD_167)
A68_INT  Decno;
A_PAD_INT(PAD_168)
A68_VC  Definition;
A68_VC  Rhs;
struct A68t212 * Rest;
};
typedef struct A68t212  A68_212 ;    /* STRUCT(MODE89,MODE56,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,REF MODE26,REF MODE26,REF MODE212)  */
struct A68t213{
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_169)
struct A68t56  Uname;
A_PAD_ISTRUCT(A68_56 ,PAD_170)
struct A68t212 * Ids;
struct A68t213 * Rest;
};
typedef struct A68t213  A68_213 ;    /* STRUCT(MODE89,MODE56,REF MODE212,REF MODE213)  */
struct A68t215{
struct A68t56  L;
A_PAD_ISTRUCT(A68_56 ,PAD_171)
struct A68t56  G;
A_PAD_ISTRUCT(A68_56 ,PAD_172)
};
typedef struct A68t215  A68_215 ;    /* STRUCT(MODE56,MODE56)  */
struct A68t214{
struct A68t56  Uname;
A_PAD_ISTRUCT(A68_56 ,PAD_173)
struct A68t115  Xmi;
struct A68t215  Checkinfo;
};
typedef struct A68t214  A68_214 ;    /* STRUCT(MODE56,MODE115,MODE215)  */

A_PROCEDURE(A68_VOID ,A68t216,(struct A68t105 ),(struct A68t105 ,void *));
typedef struct A68t216  A68_216 ;    /* PROC(MODE105) VOID */

A_PROCEDURE(A68_VOID ,A68t217,(struct A68t117 ,A68_INT ),(struct A68t117 ,A68_INT ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(MODE117,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t218,(struct A68t90 ),(struct A68t90 ,void *));
typedef struct A68t218  A68_218 ;    /* PROC(MODE90) VOID */
A_ROW(struct A68t211 *,A68t219,1);
typedef struct A68t219  A68_219 ;    /* [] REF MODE211 */

A_PROCEDURE(A68_VOID ,A68t220,(struct A68t89 ,A68_INT ,A68_BOOL ,struct A68t118 *),(struct A68t89 ,A68_INT ,A68_BOOL ,struct A68t118 *,void *));
typedef struct A68t220  A68_220 ;    /* PROC(MODE89,INT,BOOL) MODE118 */

A_PROCEDURE(A68_VOID ,A68t221,(struct A68t89 ,struct A68t89 ,struct A68t106 ,struct A68t119 *),(struct A68t89 ,struct A68t89 ,struct A68t106 ,struct A68t119 *,void *));
typedef struct A68t221  A68_221 ;    /* PROC(MODE89,MODE89,MODE106) MODE119 */

A_PROCEDURE(A68_VOID ,A68t222,(struct A68t115 ),(struct A68t115 ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(MODE115) VOID */

A_PROCEDURE(A68_VOID ,A68t223,(struct A68t109 ),(struct A68t109 ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(MODE109) VOID */
A_ROW(struct A68t108 ,A68t224,1);
typedef struct A68t224  A68_224 ;    /* [] MODE108 */

A_PROCEDURE(A68_BOOL ,A68t225,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t225  A68_225 ;    /* PROC(INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t226,(struct A68t184 ,struct A68t71 **,struct A68t71 *),(struct A68t184 ,struct A68t71 **,struct A68t71 *,void *));
typedef struct A68t226  A68_226 ;    /* PROC(MODE184,REF REF MODE71,REF MODE71) VOID */

A_PROCEDURE(A68_VOID ,A68t227,(struct A68t147 ),(struct A68t147 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(MODE147) VOID */

A_PROCEDURE(struct A68t56 ,A68t228,(void),(void *));
typedef struct A68t228  A68_228 ;    /* PROC MODE56 */

A_PROCEDURE(A68_VOID ,A68t229,(struct A68t56 ),(struct A68t56 ,void *));
typedef struct A68t229  A68_229 ;    /* PROC(MODE56) VOID */

A_PROCEDURE(A68_VOID ,A68t230,(struct A68t147 ,A68_VC *),(struct A68t147 ,A68_VC *,void *));
typedef struct A68t230  A68_230 ;    /* PROC(MODE147) MODE26 */
struct A68t232 ;

A_PROCEDURE(A68_VOID ,A68t231,(struct A68t232 ),(struct A68t232 ,void *));
typedef struct A68t231  A68_231 ;    /* PROC(MODE232) VOID */
A_VECTOR(struct A68t233 ,A68t232);
typedef struct A68t232  A68_232 ;    /* VECTOR [] MODE233 */
struct A68t233 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_SINT  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t233  A68_233 ;    /* UNION(CHAR,MODE26,SHORT INT)  */
struct A68t235 ;

A_PROCEDURE(A68_VOID ,A68t234,(struct A68t235 ,A68_INT ),(struct A68t235 ,A68_INT ,void *));
typedef struct A68t234  A68_234 ;    /* PROC(MODE235,INT) VOID */
A_VECTOR(struct A68t236 ,A68t235);
typedef struct A68t235  A68_235 ;    /* VECTOR [] MODE236 */
struct A68t236 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_INT  mode3;
A68_SINT  mode4;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t236  A68_236 ;    /* UNION(CHAR,MODE26,INT,SHORT INT)  */

A_PROCEDURE(A68_BOOL ,A68t237,(struct A68t64 *,struct A68t64 *),(struct A68t64 *,struct A68t64 *,void *));
typedef struct A68t237  A68_237 ;    /* PROC(REF MODE64,REF MODE64) BOOL */

A_PROCEDURE(A68_BOOL ,A68t238,(struct A68t64 *),(struct A68t64 *,void *));
typedef struct A68t238  A68_238 ;    /* PROC(REF MODE64) BOOL */

A_PROCEDURE(A68_BOOL ,A68t239,(struct A68t64 *,A68_LBITS ),(struct A68t64 *,A68_LBITS ,void *));
typedef struct A68t239  A68_239 ;    /* PROC(REF MODE64,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t240,(struct A68t64 *),(struct A68t64 *,void *));
typedef struct A68t240  A68_240 ;    /* PROC(REF MODE64) LONG BITS */

A_PROCEDURE(A68_VOID ,A68t241,(struct A68t64 *,A68_VC *),(struct A68t64 *,A68_VC *,void *));
typedef struct A68t241  A68_241 ;    /* PROC(REF MODE64) MODE26 */

A_PROCEDURE(struct A68t64 *,A68t242,(struct A68t64 *,A68_INT ),(struct A68t64 *,A68_INT ,void *));
typedef struct A68t242  A68_242 ;    /* PROC(REF MODE64,INT) REF MODE64 */

A_PROCEDURE(A68_INT ,A68t243,(struct A68t70 ),(struct A68t70 ,void *));
typedef struct A68t243  A68_243 ;    /* PROC(MODE70) INT */

A_PROCEDURE(A68_BOOL ,A68t244,(struct A68t64 *,A68_BITS ),(struct A68t64 *,A68_BITS ,void *));
typedef struct A68t244  A68_244 ;    /* PROC(REF MODE64,BITS) BOOL */

A_PROCEDURE(struct A68t64 *,A68t245,(struct A68t71 *,A68_INT ),(struct A68t71 *,A68_INT ,void *));
typedef struct A68t245  A68_245 ;    /* PROC(REF MODE71,INT) REF MODE64 */

A_PROCEDURE(struct A68t71 *,A68t246,(struct A68t71 *),(struct A68t71 *,void *));
typedef struct A68t246  A68_246 ;    /* PROC(REF MODE71) REF MODE71 */
struct A68t248 ;

A_PROCEDURE(struct A68t64 *,A68t247,(A68_INT ,A68_INT ,A68_BITS ,struct A68t248 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t248 ,void *));
typedef struct A68t247  A68_247 ;    /* PROC(INT,INT,BITS,MODE248) REF MODE64 */
A_VECTOR(struct A68t64 *,A68t248);
typedef struct A68t248  A68_248 ;    /* VECTOR [] REF MODE64 */

A_PROCEDURE(A68_VOID ,A68t249,(struct A68t64 *,A68_BOOL ,A68_VC *),(struct A68t64 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t249  A68_249 ;    /* PROC(REF MODE64,BOOL) MODE26 */

A_PROCEDURE(A68_LINT ,A68t250,(struct A68t64 ),(struct A68t64 ,void *));
typedef struct A68t250  A68_250 ;    /* PROC(MODE64) LONG INT */
struct A68t251 { A68_INT mode; union {
struct A68t64 * mode1;
A68_VC  mode2;
struct A68t68  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t251  A68_251 ;    /* UNION(REF MODE64,MODE26,MODE68)  */

A_PROCEDURE(A68_VOID ,A68t252,(struct A68t251 ,A68_VC *),(struct A68t251 ,A68_VC *,void *));
typedef struct A68t252  A68_252 ;    /* PROC(MODE251) MODE26 */
struct A68t254 ;

A_PROCEDURE(A68_VOID ,A68t253,(struct A68t254 ,A68_VC *),(struct A68t254 ,A68_VC *,void *));
typedef struct A68t253  A68_253 ;    /* PROC(MODE254) MODE26 */
A_VECTOR(struct A68t251 ,A68t254);
typedef struct A68t254  A68_254 ;    /* VECTOR [] MODE251 */

A_PROCEDURE(A68_VOID ,A68t255,(A68_VC ,struct A68t254 ,A68_VC *),(A68_VC ,struct A68t254 ,A68_VC *,void *));
typedef struct A68t255  A68_255 ;    /* PROC(MODE26,MODE254) MODE26 */

A_PROCEDURE(A68_VOID ,A68t256,(struct A68t254 ),(struct A68t254 ,void *));
typedef struct A68t256  A68_256 ;    /* PROC(MODE254) VOID */

A_PROCEDURE(A68_VOID ,A68t257,(A68_VC ,A68_INT ,struct A68t254 ,struct A68t68 *),(A68_VC ,A68_INT ,struct A68t254 ,struct A68t68 *,void *));
typedef struct A68t257  A68_257 ;    /* PROC(MODE26,INT,MODE254) MODE68 */

A_PROCEDURE(struct A68t64 *,A68t258,(struct A68t64 *),(struct A68t64 *,void *));
typedef struct A68t258  A68_258 ;    /* PROC(REF MODE64) REF MODE64 */

A_PROCEDURE(struct A68t64 *,A68t259,(A68_VC ,struct A68t64 *),(A68_VC ,struct A68t64 *,void *));
typedef struct A68t259  A68_259 ;    /* PROC(MODE26,REF MODE64) REF MODE64 */

A_PROCEDURE(A68_VOID ,A68t260,(struct A68t75 ),(struct A68t75 ,void *));
typedef struct A68t260  A68_260 ;    /* PROC(MODE75) VOID */

A_PROCEDURE(A68_VOID ,A68t261,(struct A68t148 ),(struct A68t148 ,void *));
typedef struct A68t261  A68_261 ;    /* PROC(MODE148) VOID */

A_PROCEDURE(A68_VOID ,A68t262,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t262  A68_262 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,58,A68t263);
typedef struct A68t263  A68_263 ;    /* STRUCT 58 CHAR */

A_PROCEDURE(A68_VOID ,A68t264,(struct A68t180 *),(struct A68t180 *,void *));
typedef struct A68t264  A68_264 ;    /* PROC MODE180 */

A_PROCEDURE(A68_VOID ,A68t265,(struct A68t264 ,struct A68t116 *,struct A68t171 ),(struct A68t264 ,struct A68t116 *,struct A68t171 ,void *));
typedef struct A68t265  A68_265 ;    /* PROC(MODE264,REF MODE116,REF MODE171) VOID */
A_ISTRUCT(A68_CHAR ,33,A68t266);
typedef struct A68t266  A68_266 ;    /* STRUCT 33 CHAR */

A_PROCEDURE(A68_VOID ,A68t267,(A68_VC ,A68_BOOL ,A68_BOOL ),(A68_VC ,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t267  A68_267 ;    /* PROC(REF MODE26,BOOL,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t268,(A68_BOOL ,struct A68t63 ,A68_BOOL ),(A68_BOOL ,struct A68t63 ,A68_BOOL ,void *));
typedef struct A68t268  A68_268 ;    /* PROC(BOOL,MODE63,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t269,(struct A68t122 ),(struct A68t122 ,void *));
typedef struct A68t269  A68_269 ;    /* PROC(MODE122) VOID */
A_ISTRUCT(A68_CHAR ,17,A68t270);
typedef struct A68t270  A68_270 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t271);
typedef struct A68t271  A68_271 ;    /* STRUCT 10 CHAR */

A_PROCEDURE(A68_VOID ,A68t272,(A68_BOOL ,struct A68t124 *),(A68_BOOL ,struct A68t124 *,void *));
typedef struct A68t272  A68_272 ;    /* PROC(BOOL) MODE124 */
A_ISTRUCT(A68_CHAR ,23,A68t273);
typedef struct A68t273  A68_273 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,34,A68t274);
typedef struct A68t274  A68_274 ;    /* STRUCT 34 CHAR */
A_ISTRUCT(A68_CHAR ,41,A68t275);
typedef struct A68t275  A68_275 ;    /* STRUCT 41 CHAR */

A_PROCEDURE(A68_VOID ,A68t276,(struct A68t59 ,struct A68t63 ),(struct A68t59 ,struct A68t63 ,void *));
typedef struct A68t276  A68_276 ;    /* PROC(MODE59,MODE63) VOID */
A_ISTRUCT(A68_CHAR ,22,A68t277);
typedef struct A68t277  A68_277 ;    /* STRUCT 22 CHAR */

A_PROCEDURE(A68_VOID ,A68t278,(struct A68t63 ),(struct A68t63 ,void *));
typedef struct A68t278  A68_278 ;    /* PROC(MODE63) VOID */
A_ISTRUCT(A68_CHAR ,38,A68t279);
typedef struct A68t279  A68_279 ;    /* STRUCT 38 CHAR */

A_PROCEDURE(A68_VOID ,A68t280,(struct A68t188 ,A68_BOOL ,struct A68t63 ,struct A68t71 *),(struct A68t188 ,A68_BOOL ,struct A68t63 ,struct A68t71 *,void *));
typedef struct A68t280  A68_280 ;    /* PROC(MODE188,BOOL,MODE63,REF MODE71) VOID */

A_PROCEDURE(A68_VOID ,A68t281,(struct A68t188 ,A68_BOOL ,struct A68t63 ),(struct A68t188 ,A68_BOOL ,struct A68t63 ,void *));
typedef struct A68t281  A68_281 ;    /* PROC(MODE188,BOOL,MODE63) VOID */

A_PROCEDURE(A68_VOID ,A68t282,(struct A68t156 *),(struct A68t156 *,void *));
typedef struct A68t282  A68_282 ;    /* PROC MODE156 */

A_PROCEDURE(struct A68t64 *,A68t283,(struct A68t64 *,struct A68t64 ),(struct A68t64 *,struct A68t64 ,void *));
typedef struct A68t283  A68_283 ;    /* PROC(REF MODE64,MODE64) REF MODE64 */

A_PROCEDURE(struct A68t65 *,A68t284,(struct A68t65 *,struct A68t65 ),(struct A68t65 *,struct A68t65 ,void *));
typedef struct A68t284  A68_284 ;    /* PROC(REF MODE65,MODE65) REF MODE65 */
#define A68_285  A68_VC 
#define A68t285 A68t26            /* FLEX VECTOR [] CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t286);
typedef struct A68t286  A68_286 ;    /* STRUCT 24 CHAR */

A_PROCEDURE(A68_VOID ,A68t287,(A68_BOOL ,struct A68t80 *),(A68_BOOL ,struct A68t80 *,void *));
typedef struct A68t287  A68_287 ;    /* PROC(BOOL) MODE80 */

A_PROCEDURE(A68_VOID ,A68t288,(struct A68t188 ,struct A68t63 ),(struct A68t188 ,struct A68t63 ,void *));
typedef struct A68t288  A68_288 ;    /* PROC(MODE188,MODE63) VOID */
struct A68t289 { A68_INT mode; union {
struct A68t200 * mode1;
A68_INT  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t289  A68_289 ;    /* UNION(REF MODE200,INT,VOID)  */

A_PROCEDURE(A68_VOID ,A68t290,(A68_VC ,struct A68t289 ,A68_VC *),(A68_VC ,struct A68t289 ,A68_VC *,void *));
typedef struct A68t290  A68_290 ;    /* PROC(MODE26,MODE289) MODE26 */
A_ISTRUCT(A68_CHAR ,6,A68t291);
typedef struct A68t291  A68_291 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t292);
typedef struct A68t292  A68_292 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(A68_CHAR ,45,A68t293);
typedef struct A68t293  A68_293 ;    /* STRUCT 45 CHAR */
A_ISTRUCT(A68_CHAR ,73,A68t294);
typedef struct A68t294  A68_294 ;    /* STRUCT 73 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t295);
typedef struct A68t295  A68_295 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t296);
typedef struct A68t296  A68_296 ;    /* STRUCT 15 CHAR */

A_PROCEDURE(A68_VOID ,A68t297,(struct A68t188 ,A68_BOOL ,struct A68t63 ,struct A68t71 **),(struct A68t188 ,A68_BOOL ,struct A68t63 ,struct A68t71 **,void *));
typedef struct A68t297  A68_297 ;    /* PROC(MODE188,BOOL,MODE63,REF REF MODE71) VOID */

A_PROCEDURE(A68_VOID ,A68t298,(A68_BOOL ,struct A68t198 *),(A68_BOOL ,struct A68t198 *,void *));
typedef struct A68t298  A68_298 ;    /* PROC(BOOL) MODE198 */

A_PROCEDURE(struct A68t71 *,A68t299,(struct A68t71 *,struct A68t71 ),(struct A68t71 *,struct A68t71 ,void *));
typedef struct A68t299  A68_299 ;    /* PROC(REF MODE71,MODE71) REF MODE71 */
A_ISTRUCT(A68_CHAR ,26,A68t300);
typedef struct A68t300  A68_300 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,37,A68t301);
typedef struct A68t301  A68_301 ;    /* STRUCT 37 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t302);
typedef struct A68t302  A68_302 ;    /* STRUCT 30 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from values --- */
extern A68_VOID  UZPACTR_getcfragment(struct A68t64 *,A68_VC *);
extern A68_BITS  PKJACTR_defaultinfo;
extern A68_71 * MKJACTR_nilvaluelist;
extern A68_64  DLJACTR_skipvalue;
/* --- End of imports from values --- */


/* --- Imports from coutput --- */
/* --- End of imports from coutput --- */


/* --- Imports from uniquenameserver --- */
extern A68_56  QIMACTR_newuniquename(void);
/* --- End of imports from uniquenameserver --- */


/* --- Imports from oper --- */
extern A68_VOID  ASQACTR_oper(struct A68t184 ,struct A68t71 **,struct A68t71 *);
/* --- End of imports from oper --- */


/* --- Imports from moduletracer --- */
/* --- End of imports from moduletracer --- */


/* --- Imports from modules --- */
extern A68_115 * PCPACTR_currentmodinfo;
extern A68_BOOL  KOOACTR_composition;
extern A68_214  OCPACTR_currentmodule;
extern A68_VOID  WFPACTR_initialiseunames(void);
/* --- End of imports from modules --- */


/* --- Imports from modes --- */
extern A68_201  YVMACTR_constituents;
extern A68_VOID  RFNACTR_cfieldname(struct A68t200 *,A68_VC *);
extern A68_VOID  QMOACTR_declarectemporary(A68_INT ,A68_VC ,A68_68 *);
extern A68_BOOL  OTMACTR_dynamic(A68_INT );
extern A68_INT  IOMACTR_modetype(A68_INT );
extern A68_201  AWMACTR_parameters;
extern A68_VOID  STMACTR_procinfo(A68_INT ,A68_199 *);
extern A68_VOID  EVMACTR_structfields(A68_INT ,A68_208 *);
extern A68_INT  HCNACTR_finddeflexmode(A68_INT );
/* --- End of imports from modes --- */


/* --- Imports from incmode --- */
#define WEAACTR_boolmode 7
#define YEAACTR_formatmode 9
#define EFAACTR_intmode 15
#define JEAACTR_istruct 6
#define FEAACTR_proc 2
#define GEAACTR_procp 3
#define IEAACTR_struct 5
#define UEAACTR_voidmode 5
/* --- End of imports from incmode --- */


/* --- Imports from loops --- */
extern A68_VOID  UHABCTR_for(struct A68t194 *,A68_INT ,struct A68t71 **);
extern A68_VOID  IRABCTR_forall(struct A68t198 ,struct A68t71 **);
extern A68_VOID  CCBBCTR_while(void);
extern A68_VOID  ECBBCTR_whiledo(struct A68t64 *);
extern A68_VOID  XCBBCTR_whileod(void);
extern A68_75  EDBBCTR_od;
/* --- End of imports from loops --- */


/* --- Imports from loads --- */
extern A68_VOID  RAABCTR_load(struct A68t190 ,A68_64 *);
/* --- End of imports from loads --- */


/* --- Imports from initialiser --- */
extern A68_VOID  NYZACTR_initialise(struct A68t116 *,struct A68t180 *,struct A68t171 );
/* --- End of imports from initialiser --- */


/* --- Imports from incvalue --- */
#define ELJACTR_voidresult 0
#define FLJACTR_memoryresult 1
#define HLJACTR_routineresult 3
#define ILJACTR_enquiryresult 4
#define JLJACTR_optboolresult 5
#define KLJACTR_noparticularresult 6
/* --- End of imports from incvalue --- */


/* --- Imports from incoperfn --- */
#define QGAACTR_formatfn 51
/* --- End of imports from incoperfn --- */


/* --- Imports from incimperatives --- */
#define JCAACTR_andthwarn 2
#define HBAACTR_beginfn 4
#define KDAACTR_bypartbit 004U
#define FBAACTR_casefn 2
#define GBAACTR_caseufn 3
#define NCAACTR_ccbit 002U
#define IBAACTR_collbeginfn 5
#define VBAACTR_collcommafn 10
#define WCAACTR_decbit 0000100U
#define DBAACTR_decsfn 0
#define XBAACTR_dofn 12
#define BDAACTR_dontpullbit 0004000U
extern A68_BITS  MDAACTR_dybits;
#define ECAACTR_endcollfn 5
#define BCAACTR_esacfn 2
#define CCAACTR_esacufn 3
#define RBAACTR_exitfn 6
#define TCAACTR_exitbit 0000010U
#define HCAACTR_finishfn 8
#define JBAACTR_forfn 6
#define IDAACTR_forpartbit 001U
#define KBAACTR_forallfn 7
#define JDAACTR_frompartbit 002U
#define EBAACTR_iffn 1
#define ADAACTR_labbit 0002000U
#define KCAACTR_orelwarn 3
#define GCAACTR_routinendfn 7
#define WBAACTR_semifn 11
#define LBAACTR_separatoroffset 7
extern A68_INT  ZBAACTR_terminatoroffset;
#define LDAACTR_topartbit 010U
#define PCAACTR_valbit 010U
#define YBAACTR_whilefn 13
/* --- End of imports from incimperatives --- */


/* --- Imports from identifiers --- */
extern A68_VOID  AYVACTR_ccdec(struct A68t156 ,struct A68t64 *,A68_INT );
extern A68_VOID  OYWACTR_environoflabel(A68_INT ,A68_123 *);
extern A68_VOID  JWVACTR_iddec(struct A68t156 ,struct A68t71 **);
extern A68_160  WPKACTR_ids;
extern A68_VOID  CNVACTR_initialdummydec(struct A68t156 );
extern A68_VOID  XRWACTR_labdec(struct A68t164 );
/* --- End of imports from identifiers --- */


/* --- Imports from environment --- */
extern A68_VOID  WXIACTR_assert(A68_VC ,A68_BOOL );
extern A68_VOID  PXIACTR_error(A68_INT );
extern A68_VOID  KDHACTR_message(A68_INT ,A68_VC *);
extern A68_VOID  SXIACTR_terminalerror(A68_INT );
/* --- End of imports from environment --- */


/* --- Imports from environ --- */
extern A68_VOID  YRLACTR_startnewlevel(A68_INT );
extern A68_75  BSLACTR_reverttopreviouslevel;
extern A68_BOOL  TRLACTR_isnewerthan(struct A68t123 ,struct A68t123 );
/* --- End of imports from environ --- */


/* --- Imports from entryandreturn --- */
extern A68_VOID  SRYACTR_startmodule(A68_VC ,A68_VC );
extern A68_VOID  EVYACTR_endmodule(void);
extern A68_VOID  BPYACTR_startroutine(struct A68t122 ,struct A68t123 ,struct A68t124 ,A68_INT ,struct A68t64 *);
extern A68_VOID  UPYACTR_endroutine(struct A68t122 ,struct A68t64 *);
extern A68_VOID  DTYACTR_startdecsmodule(A68_VC ,A68_VC );
extern A68_VOID  ZUYACTR_startprocmodule(struct A68t122 ,A68_VC ,A68_VC ,struct A68t64 *);
extern A68_VOID  EWYACTR_enddecsmodule(A68_VC );
/* --- End of imports from entryandreturn --- */


/* --- Imports from clauses --- */
extern A68_VOID  DVZACTR_exit(A68_BOOL ,A68_BOOL ,struct A68t63 );
extern A68_VOID  ZUZACTR_semi(A68_BOOL ,A68_BOOL );
extern A68_VOID  GGZACTR_begin(A68_BOOL ,A68_BOOL );
extern A68_VOID  SGZACTR_end(A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t55 *);
extern A68_VOID  DLZACTR_then(struct A68t64 *);
extern A68_VOID  ZLZACTR_else(void);
extern A68_VOID  WRZACTR_fi(A68_BOOL ,struct A68t63 );
extern A68_VOID  SMZACTR_casein(struct A68t64 *);
extern A68_VOID  ZOZACTR_comma(A68_INT );
extern A68_VOID  EQZACTR_out(void);
extern A68_VOID  WQZACTR_esac(A68_BOOL ,struct A68t63 );
extern A68_VOID  XNZACTR_inu(struct A68t79 ,struct A68t64 *,struct A68t80 );
extern A68_VOID  VPZACTR_commau(struct A68t79 ,struct A68t64 ,struct A68t80 );
extern A68_75  SQZACTR_outu;
extern A68_76  SRZACTR_esacu;
extern A68_VOID  PSZACTR_optboolwarning(A68_BOOL ,struct A68t64 *);
extern A68_VOID  IUZACTR_optbooloper(void);
extern A68_60  OUZACTR_startseries;
extern A68_VOID  WUZACTR_endseries(struct A68t59 ,struct A68t63 ,struct A68t55 *,A68_BOOL ,A68_BOOL ,A68_BOOL );
extern A68_VOID  AEZACTR_evaluateresult(struct A68t71 **,struct A68t63 );
extern A68_VOID  ECZACTR_evaluatenoresult(struct A68t71 **);
extern A68_VOID  YFZACTR_evaluatesimpleenquiry(struct A68t71 **,struct A68t63 );
extern A68_VOID  WVZACTR_codeinsert(A68_VC ,A68_INT ,struct A68t71 *,A68_68 *);
/* --- End of imports from clauses --- */


/* --- Imports from centities --- */
extern A68_55  HIAACTR_unsetlabel;
/* --- End of imports from centities --- */


/* --- Imports from usefulops --- */
extern A68_VOID  RMAAOSF_scanto(A68_CHAR ,A68_VC ,A68_VC *);
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void OUPACTR(void);   /* values */
extern void PTLACTR(void);   /* coutput */
extern void RHMACTR(void);   /* uniquenameserver */
extern void QQQACTR(void);   /* oper */
extern void BCHACTR(void);   /* moduletracer */
extern void ANOACTR(void);   /* modules */
extern void DNMACTR(void);   /* modes */
extern void ZDAACTR(void);   /* incmode */
extern void UGABCTR(void);   /* loops */
extern void SYZACTR(void);   /* loads */
extern void EYZACTR(void);   /* initialiser */
extern void GKJACTR(void);   /* incvalue */
extern void XFAACTR(void);   /* incoperfn */
extern void UAAACTR(void);   /* incimperatives */
extern void MMVACTR(void);   /* identifiers */
extern void HPIACTR(void);   /* environment */
extern void BPLACTR(void);   /* environ */
extern void KFYACTR(void);   /* entryandreturn */
extern void KBZACTR(void);   /* clauses */
extern void THAACTR(void);   /* centities */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_263   JDBBCTR = {"$Id: compiler.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,KDBBCTR,JDBBCTR,58)
static A68_266   FEBBCTR = {"Composition modules not supported"}; 
A_GISVEC(A68_VC ,GEBBCTR,FEBBCTR,33)
static A68_270   HFBBCTR = {"generator routine"}; 
static A68_271   IFBBCTR = {"!generator"}; 
A_GISVEC(A68_VC ,JFBBCTR,IFBBCTR,10)
A_GISVEC(A68_VC ,KFBBCTR,HFBBCTR,17)
static A68_273   OGBBCTR = {"COMPILER: fdec expected"}; 
A_GISVEC(A68_VC ,PGBBCTR,OGBBCTR,23)
static A68_274   QGBBCTR = {"COMPILER: fdec has unexpected mode"}; 
A_GISVEC(A68_VC ,RGBBCTR,QGBBCTR,34)
static A68_275   TGBBCTR = {"COMPILER: TRANSIDDEC (fdec) expected here"}; 
A_GISVEC(A68_VC ,UGBBCTR,TGBBCTR,41)
static A68_277   MHBBCTR = {"end OF answer ISNT NIL"}; 
A_GISVEC(A68_VC ,NHBBCTR,MHBBCTR,22)
static A68_279   BIBBCTR = {"exit not permitted in <enquiry clause>"}; 
A_GISVEC(A68_VC ,CIBBCTR,BIBBCTR,38)
static A68_286   HLBBCTR = {"fn OF starter = caseu fn"}; 
A_GISVEC(A68_VC ,ILBBCTR,HLBBCTR,24)
static A68_291   DNBBCTR = {".data["}; 
A_GISVEC(A68_VC ,ENBBCTR,DNBBCTR,6)
static A68_292   HNBBCTR = {""}; 
A_GISVEC(A68_VC ,INBBCTR,HNBBCTR,0)
static A68_293   JNBBCTR = {"compiler:collateral clause - unknown selector"}; 
A_GISVEC(A68_VC ,KNBBCTR,JNBBCTR,45)
static A68_292   LNBBCTR = {""}; 
A_GISVEC(A68_VC ,MNBBCTR,LNBBCTR,0)
static A68_294   TNBBCTR = {"compiler: collateral clause result is neither struct nor istruct nor void"}; 
A_GISVEC(A68_VC ,UNBBCTR,TNBBCTR,73)
static A68_292   YNBBCTR = {""}; 
A_GISVEC(A68_VC ,AOBBCTR,YNBBCTR,0)
static A68_286   COBBCTR = {"collateral clause result"}; 
A_GISVEC(A68_VC ,DOBBCTR,COBBCTR,24)
static A68_273   APBBCTR = {"fn OF s = coll comma fn"}; 
A_GISVEC(A68_VC ,BPBBCTR,APBBCTR,23)
static A68_295   PPBBCTR = {"fn OF t = end coll fn"}; 
A_GISVEC(A68_VC ,QPBBCTR,PPBBCTR,21)
static A68_296   JQBBCTR = {"fn OF s = do fn"}; 
A_GISVEC(A68_VC ,KQBBCTR,JQBBCTR,15)
static A68_89   CTBBCTR = {"no closed clause OPTBOOL results"}; 
A_GISVEC(A68_VC ,DTBBCTR,CTBBCTR,32)
static A68_89   AUBBCTR = {"no choice clause OPTBOOL results"}; 
A_GISVEC(A68_VC ,BUBBCTR,AUBBCTR,32)
static A68_300   YVBBCTR = {"PROC modules not supported"}; 
A_GISVEC(A68_VC ,ZVBBCTR,YVBBCTR,26)
static A68_301   CWBBCTR = {"rest OF value stack IS nil value list"}; 
A_GISVEC(A68_VC ,DWBBCTR,CWBBCTR,37)
static A68_302   GWBBCTR = {"invalid imperative in 'phrase'"}; 
A_GISVEC(A68_VC ,HWBBCTR,GWBBCTR,30)
static A68_296   DXBBCTR = {"module: ROUTINE"}; 
A_GISVEC(A68_VC ,EXBBCTR,DXBBCTR,15)
static A68_270   JXBBCTR = {"generator routine"}; 
static A68_271   KXBBCTR = {"!generator"}; 
A_GISVEC(A68_VC ,LXBBCTR,KXBBCTR,10)
A_GISVEC(A68_VC ,MXBBCTR,JXBBCTR,17)
typedef struct   /* env of non-global proc */
{
A68_180 * RDBBCTR_nextimperative;
A68_180 * PDBBCTR_currentimperative;
A68_264  Nextstreamimperative;
} VDBBCTR_read;
typedef struct   /* env of non-global proc */
{
A68_180 * RDBBCTR_nextimperative;
A68_264  Nextstreamimperative;
} BEBBCTR_lookahead;
typedef struct   /* env of non-global proc */
{
A68_75  TDBBCTR_read;
A68_180 * PDBBCTR_currentimperative;
A68_75  ZDBBCTR_lookahead;
A68_180 * RDBBCTR_nextimperative;
} MEBBCTR_module;
typedef struct   /* env of non-global proc */
{
A68_75  TDBBCTR_read;
A68_180 * PDBBCTR_currentimperative;
A68_75  OEBBCTR_skiproutine;
} QEBBCTR_skiproutine;
typedef struct   /* env of non-global proc */
{
A68_75  ZDBBCTR_lookahead;
A68_180 * RDBBCTR_nextimperative;
A68_75  TDBBCTR_read;
A68_75  OEBBCTR_skiproutine;
A68_180 * PDBBCTR_currentimperative;
A68_268 * NEBBCTR_phrase_;
} YEBBCTR_routine;
typedef struct   /* env of non-global proc */
{
A68_268 * NEBBCTR_phrase_;
A68_180 * PDBBCTR_currentimperative;
} BHBBCTR_serialclause;
typedef struct   /* env of non-global proc */
{
A68_268 * NEBBCTR_phrase_;
A68_180 * PDBBCTR_currentimperative;
} VHBBCTR_enquiryclause;
typedef struct   /* env of non-global proc */
{
A68_276  ZGBBCTR_serialclause;
A68_75  TDBBCTR_read;
A68_180 * PDBBCTR_currentimperative;
A68_278  THBBCTR_enquiryclause;
A68_268  HIBBCTR_phrase;
A68_269  WEBBCTR_routine;
} JIBBCTR_phrase;
typedef struct   /* env of non-global proc */
{
int dummy;
} VFBBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  RFBBCTR_paramcount;
A_PAD_INT(PAD_174)
} GGBBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_276  ZGBBCTR_serialclause;
A68_75  TDBBCTR_read;
A68_180 * PDBBCTR_currentimperative;
A68_278  THBBCTR_enquiryclause;
A68_268  HIBBCTR_phrase;
A68_71 ** KIBBCTR_valuestack;
} RIBBCTR_enclosedclause;
typedef struct   /* env of non-global proc */
{
A68_71 ** KIBBCTR_valuestack;
A68_268  HIBBCTR_phrase;
} HUBBCTR_optboolexpression;
typedef struct   /* env of non-global proc */
{
A68_276  ZGBBCTR_serialclause;
} YIBBCTR_closedclause;
typedef struct   /* env of non-global proc */
{
A68_75  TDBBCTR_read;
A68_180 * PDBBCTR_currentimperative;
A68_278  THBBCTR_enquiryclause;
A68_276  ZGBBCTR_serialclause;
} PJBBCTR_choiceclause;
typedef struct   /* env of non-global proc */
{
A68_268  HIBBCTR_phrase;
A68_180 * PDBBCTR_currentimperative;
} SMBBCTR_collateralclause;
typedef struct   /* env of non-global proc */
{
A68_75  TDBBCTR_read;
A68_180 * PDBBCTR_currentimperative;
A68_278  THBBCTR_enquiryclause;
A68_276  ZGBBCTR_serialclause;
} WPBBCTR_loopbody;
typedef struct   /* env of non-global proc */
{
A68_75  TDBBCTR_read;
A68_180 * PDBBCTR_currentimperative;
A68_76  UPBBCTR_loopbody;
} WQBBCTR_loopclause;
typedef struct   /* env of non-global proc */
{
A68_75  TDBBCTR_read;
A68_180 * PDBBCTR_currentimperative;
A68_76  UPBBCTR_loopbody;
} URBBCTR_forallclause;
typedef struct   /* env of non-global proc */
{
A68_75  TDBBCTR_read;
A68_180 * PDBBCTR_currentimperative;
A68_79 * QJBBCTR_uchoice;
} TJBBCTR_readuchoiceimperative;
typedef struct   /* env of non-global proc */
{
A68_75  TDBBCTR_read;
A68_180 * PDBBCTR_currentimperative;
} BKBBCTR_iddecimperative;
typedef struct   /* env of non-global proc */
{
A68_124  ULBBCTR_cons;
} YLBBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  XRBBCTR_controlcount;
A_PAD_INT(PAD_175)
} BSBBCTR_generator;

A68_VOID  ODBBCTR_translator(A68_264  Nextstreamimperative, A68_116 * Xsizes, A68_171  Keptdecnos);

A_STATIC A68_VOID  UDBBCTR_read(void *NonLocals);

A_STATIC A68_VOID  AEBBCTR_lookahead(void *NonLocals);

A_STATIC A68_VOID  EEBBCTR_compositionmodule(void);

A_STATIC A68_VOID  LEBBCTR_module(A68_VC  Modulename, A68_BOOL  Decsmodule, A68_BOOL  Prelude, void *NonLocals);

A_STATIC A68_VOID  PEBBCTR_skiproutine(void *NonLocals);

A_STATIC A68_VOID  XEBBCTR_routine(A68_122  Routine, void *NonLocals);

A_STATIC A68_VOID  UFBBCTR_generator(A68_BOOL  SFBBCTR_anonymous, A68_124  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FGBBCTR_generator(A68_BOOL  DGBBCTR_anonymous, A68_124  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  AHBBCTR_serialclause(A68_59  Properties, A68_63  Answer, void *NonLocals);

A_STATIC A68_VOID  UHBBCTR_enquiryclause(A68_63  Answer, void *NonLocals);

A_STATIC A68_VOID  IIBBCTR_phrase(A68_BOOL  Body, A68_63  Answer, A68_BOOL  Simple, void *NonLocals);

A_STATIC A68_VOID  QIBBCTR_enclosedclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, A68_71 * Newvalue, void *NonLocals);

A_STATIC A68_VOID  XIBBCTR_closedclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, void *NonLocals);

A_STATIC A68_VOID  OJBBCTR_choiceclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, void *NonLocals);

A_STATIC A68_VOID  SJBBCTR_readuchoiceimperative(void *NonLocals);

A_STATIC A68_VOID  AKBBCTR_iddecimperative(A68_156  *ReturnedValue, void *NonLocals);

A_STATIC A68_64 * TKBBCTR_assignment(A68_64 * RKBBCTR_anonymous, A68_64  SKBBCTR_anonymous);

A_STATIC A68_65 * YKBBCTR_assignment(A68_65 * WKBBCTR_anonymous, A68_65  XKBBCTR_anonymous);

A_STATIC A68_VOID  XLBBCTR_generator(A68_BOOL  VLBBCTR_anonymous, A68_80  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RMBBCTR_collateralclause(A68_188  Starter, A68_63  Answer, void *NonLocals);

A_STATIC A68_VOID  WMBBCTR_collateralunitassignee(A68_VC  Temp, A68_289  Selector, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  VPBBCTR_loopbody(A68_BOOL  Body, A68_63  Answer, void *NonLocals);

A_STATIC A68_VOID  VQBBCTR_loopclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, A68_71 ** Frobytlist, void *NonLocals);

A_STATIC A68_VOID  TRBBCTR_forallclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, A68_71 ** Foralllist, void *NonLocals);

A_STATIC A68_VOID  ASBBCTR_generator(A68_BOOL  YRBBCTR_anonymous, A68_198  *ReturnedValue, void *NonLocals);

A_STATIC A68_71 * YSBBCTR_assignment(A68_71 * WSBBCTR_anonymous, A68_71  XSBBCTR_anonymous);

A_STATIC A68_VOID  GUBBCTR_optboolexpression(A68_INT  Warn, void *NonLocals);

A_STATIC A68_65 * YKBBCTR_assignment(A68_65 * WKBBCTR_anonymous, A68_65  XKBBCTR_anonymous)
{ 
A68_65  ZKBBCTR;  /* united object - for case conformity */
A68_VC  ALBBCTR_anonymous A_UNUSED = {0};
A68_VC  BLBBCTR;  /* OPERATORS - copy to flex */
A68_285 * CLBBCTR;  /* YIELD */
A68_65 * DLBBCTR;  /* clause result */
{ 
(*WKBBCTR_anonymous) = XKBBCTR_anonymous;
ZKBBCTR = XKBBCTR_anonymous ;
switch ( ZKBBCTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
ALBBCTR_anonymous = (ZKBBCTR.data.mode6);
CLBBCTR = &(WKBBCTR_anonymous-> data.mode6) ;
(void)((*CLBBCTR) = A_VCOPY(ALBBCTR_anonymous,BLBBCTR,A68_CHAR ));
break;
default: 
/*SKIP*/;
break;
} 
DLBBCTR = WKBBCTR_anonymous;
} 
return( DLBBCTR );
} 
#undef NL

A_STATIC A68_VOID  SJBBCTR_readuchoiceimperative(void *NonLocals)
#define NL(x) (((TJBBCTR_readuchoiceimperative *)NonLocals)->x)
{ 
A68_180  UJBBCTR;  /* united object - for case conformity */
A68_79  VJBBCTR_u A_UNUSED = {0};
A68_BOOL  WJBBCTR;  /* clause result */
A68_164  XJBBCTR_l A_UNUSED = {0};
A68_BOOL  YJBBCTR;  /* clause result */
A_PROC_ENTRY(readuchoiceimperative);
for ( ;; )
{ 
 /* line 460: */
(void)(A_CALLPROC(NL(TDBBCTR_read),(),((NL(TDBBCTR_read)).nonlocals)));
 /* line 461: */
 /* line 462: */
UJBBCTR = (*NL(PDBBCTR_currentimperative)) ;
switch ( UJBBCTR.mode )
{ 
case 15: /* STRUCT(INT,BITS,INT)  */
VJBBCTR_u = (UJBBCTR.data.mode15);
{ 
(*NL(QJBBCTR_uchoice)) = VJBBCTR_u;
 /* line 463: */
WJBBCTR = A68_FALSE;
} 
break;
case 14: /* STRUCT(REF MODE26,INT,INT,BOOL)  */
XJBBCTR_l = (UJBBCTR.data.mode14);
{ 
(void)(XRWACTR_labdec(XJBBCTR_l));
 /* line 464: */
 /* line 465: */
WJBBCTR = A68_TRUE;
} 
break;
default: 
(void)(SXIACTR_terminalerror(668));
 /* line 466: */
 /* line 467: */
 /* line 468: */
WJBBCTR = A68_FALSE;
break;
} 
 /* line 469: */
YJBBCTR = WJBBCTR;
if ( !YJBBCTR ) break;
/*SKIP*/;
}
A_PROC_EXIT(readuchoiceimperative);
return;
} 
#undef NL

A_STATIC A68_VOID  AKBBCTR_iddecimperative(A68_156  *ReturnedValue, void *NonLocals)
#define NL(x) (((BKBBCTR_iddecimperative *)NonLocals)->x)
{ 
A68_180  CKBBCTR;  /* united object - for case conformity */
A68_156  DKBBCTR_iddec A_UNUSED = {0};
A68_156  EKBBCTR;  /* clause result */
A68_156  FKBBCTR = {0};  /* OPERATORS - skip to mode */
A_PROC_ENTRY(iddecimperative);
{ 
(void)(A_CALLPROC(NL(TDBBCTR_read),(),((NL(TDBBCTR_read)).nonlocals)));
 /* line 476: */
 /* line 477: */
CKBBCTR = (*NL(PDBBCTR_currentimperative)) ;
switch ( CKBBCTR.mode )
{ 
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
DKBBCTR_iddec = (CKBBCTR.data.mode11);
 /* line 478: */
 /* line 479: */
EKBBCTR = DKBBCTR_iddec;
break;
default: 
(void)(SXIACTR_terminalerror(669));
 /* line 480: */
 /* line 481: */
EKBBCTR = FKBBCTR;
break;
} 
} 
A_PROC_EXIT(iddecimperative);
*ReturnedValue = (EKBBCTR);
return;
} 
#undef NL

A_STATIC A68_64 * TKBBCTR_assignment(A68_64 * RKBBCTR_anonymous, A68_64  SKBBCTR_anonymous)
{ 
A68_INT * UKBBCTR;  /* YIELD */
A68_BITS * VKBBCTR;  /* YIELD */
A68_64 * ELBBCTR;  /* clause result */
{ 
UKBBCTR = (&(RKBBCTR_anonymous->Mode)) ;
(*UKBBCTR) = SKBBCTR_anonymous.Mode;
VKBBCTR = (&(RKBBCTR_anonymous->Info)) ;
(*VKBBCTR) = SKBBCTR_anonymous.Info;
(void)(YKBBCTR_assignment((&(RKBBCTR_anonymous->Extra)), SKBBCTR_anonymous.Extra));
ELBBCTR = RKBBCTR_anonymous;
} 
return( ELBBCTR );
} 
#undef NL

A_STATIC A68_VOID  XLBBCTR_generator(A68_BOOL  VLBBCTR_anonymous, A68_80  *ReturnedValue, void *NonLocals)
#define NL(x) (((YLBBCTR_generator *)NonLocals)->x)
{ 
A68_80  ZLBBCTR;  /* clause result */
A68_80  AMBBCTR;  /* OPERATORS - dynamic generator */
{ 
AMBBCTR.dim[0].upb = NL(ULBBCTR_cons).upb ;
AMBBCTR.dim[0].lwb = 1 ;
(void)A_1INITSTRIDES(AMBBCTR) ;
( VLBBCTR_anonymous? A_R1LOC(A68_BOOL ,AMBBCTR): A_R1HEAP(A68_BOOL ,AMBBCTR) );
ZLBBCTR = AMBBCTR;
} 
*ReturnedValue = (ZLBBCTR);
return;
} 
#undef NL
 /* line 628: */

A_STATIC A68_VOID  WMBBCTR_collateralunitassignee(A68_VC  Temp, A68_289  Selector, A68_VC  *ReturnedValue)
{ 
A68_289  XMBBCTR;  /* united object - for case conformity */
A68_200 * YMBBCTR_sf A_UNUSED = {0};
A68_VC  ZMBBCTR;  /* clause result */
A68_VC  ANBBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  BNBBCTR;  /* avoid structure result */
A68_INT  CNBBCTR_i A_UNUSED = {0};
A68_VC  FNBBCTR;  /* avoid structure result */
A68_VC  GNBBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(collateralunitassignee);
 /* line 635: */
 /* line 636: */
XMBBCTR = Selector ;
switch ( XMBBCTR.mode )
{ 
case 1: /* REF STRUCT(INT,INT,MODE89)  */
YMBBCTR_sf = (XMBBCTR.data.mode1);
 /* line 637: */
 /* line 638: */
RFNACTR_cfieldname( YMBBCTR_sf, &BNBBCTR );
ZMBBCTR = A_VC_PLUS(A_VC_PLUS(Temp,A_HVEC(ANBBCTR,'.',A68_CHAR )),BNBBCTR);
break;
case 2: /* INT */
CNBBCTR_i = (XMBBCTR.data.mode2);
 /* line 639: */
 /* line 640: */
ROAAOSF_whole( (CNBBCTR_i-1), 0, &FNBBCTR );
ZMBBCTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(Temp,ENBBCTR),FNBBCTR),A_HVEC(GNBBCTR,']',A68_CHAR ));
break;
case 3: /* VOID */
 /* line 641: */
 /* line 642: */
ZMBBCTR = INBBCTR;
break;
default: 
(void)(WXIACTR_assert(KNBBCTR, A68_FALSE));
 /* line 643: */
ZMBBCTR = MNBBCTR;
break;
} 
A_PROC_EXIT(collateralunitassignee);
*ReturnedValue = (ZMBBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ASBBCTR_generator(A68_BOOL  YRBBCTR_anonymous, A68_198  *ReturnedValue, void *NonLocals)
#define NL(x) (((BSBBCTR_generator *)NonLocals)->x)
{ 
A68_198  CSBBCTR;  /* clause result */
A68_198  DSBBCTR;  /* OPERATORS - dynamic generator */
{ 
DSBBCTR.upb = NL(XRBBCTR_controlcount) ;
( YRBBCTR_anonymous? A_VLOC(A68_195 ,DSBBCTR): A_VHEAP(A68_195 ,DSBBCTR) );
CSBBCTR = DSBBCTR;
} 
*ReturnedValue = (CSBBCTR);
return;
} 
#undef NL
 /* line 396: */
 /* line 398: */

A_STATIC A68_VOID  XIBBCTR_closedclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, void *NonLocals)
#define NL(x) (((YIBBCTR_closedclause *)NonLocals)->x)
{ 
A68_59  ZIBBCTR;  /* collateral clause result */
A68_BITS  AJBBCTR;  /* ADICOPS - >= */
A68_INT  BJBBCTR;  /* ADICOPS - ABS INT */
A68_59  CJBBCTR_properties A_UNUSED = {0};
A68_63  DJBBCTR_ccanswer A_UNUSED = {0};
A68_BITS  EJBBCTR;  /* ADICOPS - >= */
A68_BOOL  FJBBCTR_seriescontainsexit A_UNUSED = {0};
A68_55  GJBBCTR;  /* collateral clause result */
A68_55 * HJBBCTR;  /* YIELD */
A68_55 ** IJBBCTR;  /* YIELD */
A68_BITS  JJBBCTR;  /* ADICOPS - >= */
A_PROC_ENTRY(closedclause);
 /* line 404: */
 /* line 406: */
{ 
 /* line 407: */
AJBBCTR = Starter.Props ;
ZIBBCTR.Block = (A_LB_GE(AJBBCTR,WCAACTR_decbit)&(!Body));
 /* line 408: */
BJBBCTR = Starter.Resultmode ;
ZIBBCTR.Dynamicresult = OTMACTR_dynamic(A_ABS(BJBBCTR));
 /* line 410: */
ZIBBCTR.Discardeddynamicresult = ((A68_BITS )(Starter.Props&MDAACTR_dybits)!=0X0U);
ZIBBCTR.Type = Starter.Fn;
CJBBCTR_properties = ZIBBCTR;
 /* line 411: */
DJBBCTR_ccanswer = Answer;
 /* line 412: */
 /* line 413: */
EJBBCTR = Starter.Props ;
FJBBCTR_seriescontainsexit = A_LB_GE(EJBBCTR,TCAACTR_exitbit);
 /* line 414: */
 /* line 415: */
 /* line 416: */
if (FJBBCTR_seriescontainsexit)
{ 
 /* line 417: */
GJBBCTR.Name = QIMACTR_newuniquename();
 /* line 418: */
GJBBCTR.Set = A68_TRUE;
HJBBCTR = A_HEAP(A68_55 ) ;
(void)((*HJBBCTR) = GJBBCTR) ;
IJBBCTR = (&((&DJBBCTR_ccanswer)->End)) ;
(*IJBBCTR) = HJBBCTR;
} 
 /* line 419: */
JJBBCTR = Starter.Props ;
(void)(GGZACTR_begin(A_LB_GE(JJBBCTR,ADAACTR_labbit), Body));
 /* line 420: */
(void)(A_CALLPROC(NL(ZGBBCTR_serialclause),(CJBBCTR_properties, DJBBCTR_ccanswer),(CJBBCTR_properties, DJBBCTR_ccanswer,(NL(ZGBBCTR_serialclause)).nonlocals)));
 /* line 421: */
 /* line 422: */
 /* line 423: */
 /* line 424: */
 /* line 426: */
 /* line 427: */
(void)(SGZACTR_end(CJBBCTR_properties.Dynamicresult, FJBBCTR_seriescontainsexit, Body, (*(&((&DJBBCTR_ccanswer)->End)))));
} 
A_PROC_EXIT(closedclause);
return;
} 
#undef NL
 /* line 431: */
 /* line 433: */

A_STATIC A68_VOID  OJBBCTR_choiceclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, void *NonLocals)
#define NL(x) (((PJBBCTR_choiceclause *)NonLocals)->x)
{ 
A68_79  QJBBCTR_uchoice A_UNUSED = {0};
A68_75  RJBBCTR_readuchoiceimperative;   /* proc value of non-global proc */
A68_282  ZJBBCTR_iddecimperative;   /* proc value of non-global proc */
A68_INT  GKBBCTR;  /* ADICOPS - ABS INT */
A68_INT  HKBBCTR_resultmode A_UNUSED = {0};
A68_BOOL  IKBBCTR_discardlevelactivated A_UNUSED = {0};
A68_INT  JKBBCTR_enquirytype A_UNUSED = {0};
A68_64  KKBBCTR_enquiry A_UNUSED = {0};
A68_80  LKBBCTR_case A_UNUSED = {0};
A68_55 * MKBBCTR_endofchoiceclause A_UNUSED = {0};
A68_BOOL  NKBBCTR_elsepart A_UNUSED = {0};
A68_BOOL  OKBBCTR_outpart A_UNUSED = {0};
A68_64  PKBBCTR;  /* collateral clause result */
A68_65  QKBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_64  FLBBCTR;  /* collateral clause result */
A68_65  GLBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  JLBBCTR;  /* ADICOPS - ABS INT */
A68_INT  KLBBCTR_umode A_UNUSED = {0};
A68_64  LLBBCTR;  /* collateral clause result */
A68_65  MLBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_63  NLBBCTR;  /* collateral clause result */
A68_63  OLBBCTR;  /* collateral clause result */
A68_63  PLBBCTR_seriesanswer A_UNUSED = {0};
A68_59  QLBBCTR_seriesproperties A_UNUSED = {0};
A68_180  RLBBCTR;  /* united object - for case conformity */
A68_187  SLBBCTR_s A_UNUSED = {0};
A68_124  TLBBCTR;  /* avoid structure result */
A68_124  ULBBCTR_cons A_UNUSED = {0};
A68_287  WLBBCTR_generator;   /* proc value of non-global proc */
A68_80  BMBBCTR;  /* avoid structure result */
A68_BOOL * CMBBCTR_c A_UNUSED = {0};
A68_INT  DMBBCTR;  /* forall loop counter */
A68_BITS  EMBBCTR;  /* ADICOPS - >= */
A68_156  FMBBCTR;  /* avoid structure result */
A68_BITS  GMBBCTR;  /* ADICOPS - >= */
A68_156  HMBBCTR;  /* avoid structure result */
A68_59  IMBBCTR;  /* collateral clause result */
A68_BITS  JMBBCTR;  /* ADICOPS - >= */
A68_INT  KMBBCTR;  /* ADICOPS - ABS INT */
A68_BOOL  LMBBCTR;  /* clause result */
A68_189  MMBBCTR_t A_UNUSED = {0};
A68_BOOL  NMBBCTR;  /* clause result */
A_PROC_ENTRY(choiceclause);
 /* line 445: */
 /* line 447: */
{ 
 /* line 452: */
 /* line 459: */
A_CLOSURE( RJBBCTR_readuchoiceimperative, SJBBCTR_readuchoiceimperative, TJBBCTR_readuchoiceimperative );
(( TJBBCTR_readuchoiceimperative * ) ( RJBBCTR_readuchoiceimperative.nonlocals )) -> TDBBCTR_read = NL(TDBBCTR_read);
(( TJBBCTR_readuchoiceimperative * ) ( RJBBCTR_readuchoiceimperative.nonlocals )) -> PDBBCTR_currentimperative = NL(PDBBCTR_currentimperative);
(( TJBBCTR_readuchoiceimperative * ) ( RJBBCTR_readuchoiceimperative.nonlocals )) -> QJBBCTR_uchoice = (&QJBBCTR_uchoice);
 /* line 471: */
 /* line 475: */
A_CLOSURE( ZJBBCTR_iddecimperative, AKBBCTR_iddecimperative, BKBBCTR_iddecimperative );
(( BKBBCTR_iddecimperative * ) ( ZJBBCTR_iddecimperative.nonlocals )) -> TDBBCTR_read = NL(TDBBCTR_read);
(( BKBBCTR_iddecimperative * ) ( ZJBBCTR_iddecimperative.nonlocals )) -> PDBBCTR_currentimperative = NL(PDBBCTR_currentimperative);
 /* line 483: */
GKBBCTR = Starter.Resultmode ;
HKBBCTR_resultmode = A_ABS(GKBBCTR);
 /* line 484: */
IKBBCTR_discardlevelactivated = A68_FALSE;
 /* line 485: */
 /* line 486: */
 /* line 487: */
 /* line 488: */
MKBBCTR_endofchoiceclause = Answer.End;
 /* line 489: */
NKBBCTR_elsepart = A68_FALSE;
 /* line 490: */
OKBBCTR_outpart = A68_FALSE;
 /* line 492: */
 /* line 493: */
if (Starter.Fn==EBAACTR_iffn)
{ 
PKBBCTR.Mode = WEAACTR_boolmode;
PKBBCTR.Info = PKJACTR_defaultinfo;
PKBBCTR.Extra = A_EMPTY(QKBBCTR,3);
(void)(TKBBCTR_assignment((&KKBBCTR_enquiry), PKBBCTR));
 /* line 494: */
 /* line 496: */
JKBBCTR_enquirytype = ILJACTR_enquiryresult;
} 
else
{ 
 /* line 497: */
if (Starter.Fn==FBAACTR_casefn)
{ 
FLBBCTR.Mode = EFAACTR_intmode;
FLBBCTR.Info = PKJACTR_defaultinfo;
FLBBCTR.Extra = A_EMPTY(GLBBCTR,3);
(void)(TKBBCTR_assignment((&KKBBCTR_enquiry), FLBBCTR));
 /* line 498: */
 /* line 500: */
JKBBCTR_enquirytype = ILJACTR_enquiryresult;
} 
else
{ 
(void)(WXIACTR_assert(ILBBCTR, (Starter.Fn==GBAACTR_caseufn)));
 /* line 501: */
JLBBCTR = Starter.Mode ;
KLBBCTR_umode = A_ABS(JLBBCTR);
 /* line 502: */
LLBBCTR.Mode = KLBBCTR_umode;
LLBBCTR.Info = PKJACTR_defaultinfo;
LLBBCTR.Extra = A_EMPTY(MLBBCTR,3);
(void)(TKBBCTR_assignment((&KKBBCTR_enquiry), LLBBCTR));
 /* line 503: */
 /* line 505: */
JKBBCTR_enquirytype = ILJACTR_enquiryresult;
} 
} 
 /* line 507: */
NLBBCTR.Value = (&KKBBCTR_enquiry);
NLBBCTR.End = (A68_55 *)A68_NIL;
NLBBCTR.Type = JKBBCTR_enquirytype;
(void)(A_CALLPROC(NL(THBBCTR_enquiryclause),(NLBBCTR),(NLBBCTR,(NL(THBBCTR_enquiryclause)).nonlocals)));
 /* line 509: */
 /* line 510: */
 /* line 511: */
OLBBCTR.Value = Answer.Value;
 /* line 513: */
OLBBCTR.End = MKBBCTR_endofchoiceclause;
OLBBCTR.Type = Answer.Type;
PLBBCTR_seriesanswer = OLBBCTR;
 /* line 514: */
 /* line 516: */
for ( ;; )
{ 
 /* line 517: */
RLBBCTR = (*NL(PDBBCTR_currentimperative)) ;
switch ( RLBBCTR.mode )
{ 
case 20: /* STRUCT(INT,INT,BITS,INT)  */
SLBBCTR_s = (RLBBCTR.data.mode20);
 /* line 518: */
{ 
 /* line 519: */
 /* line 521: */
switch ( SLBBCTR_s.Fn )
{ 
case 1: 
 /* line 522: */
{ 
(void)(NKBBCTR_elsepart = (SLBBCTR_s.Param==2));
 /* line 523: */
 /* line 524: */
 /* line 527: */
(void)(DLZACTR_then((&KKBBCTR_enquiry)));
} 
break;
case 2: 
 /* line 528: */
{ 
(void)(OKBBCTR_outpart = (SLBBCTR_s.Param<0));
 /* line 529: */
 /* line 530: */
 /* line 533: */
(void)(SMZACTR_casein((&KKBBCTR_enquiry)));
} 
break;
case 3: 
 /* line 534: */
{ 
(void)(OKBBCTR_outpart = (SLBBCTR_s.Param<0));
 /* line 535: */
(void)(A_CALLPROC(RJBBCTR_readuchoiceimperative,(),((RJBBCTR_readuchoiceimperative).nonlocals)));
 /* line 536: */
A_CALLPROC(YVMACTR_constituents,((*(&((&KKBBCTR_enquiry)->Mode))), &TLBBCTR),((*(&((&KKBBCTR_enquiry)->Mode))), &TLBBCTR,(YVMACTR_constituents).nonlocals));
ULBBCTR_cons = TLBBCTR;
 /* line 537: */
 /* line 538: */
A_CLOSURE( WLBBCTR_generator, XLBBCTR_generator, YLBBCTR_generator );
(( YLBBCTR_generator * ) ( WLBBCTR_generator.nonlocals )) -> ULBBCTR_cons = ULBBCTR_cons;
A_CALLPROC(WLBBCTR_generator,(A68_TRUE, &BMBBCTR),(A68_TRUE, &BMBBCTR,(WLBBCTR_generator).nonlocals));
LKBBCTR_case = BMBBCTR;
 /* line 539: */
 /* line 540: */
DMBBCTR = LKBBCTR_case.dim[0].upb - LKBBCTR_case.dim[0].lwb;
CMBBCTR_c = LKBBCTR_case.data;
for (;DMBBCTR-- >= 0;
(CMBBCTR_c += LKBBCTR_case.dim[0].stride
) )
{
(*CMBBCTR_c) = A68_FALSE;
}
 /* line 541: */
 /* line 542: */
 /* line 543: */
 /* line 545: */
(void)(XNZACTR_inu(QJBBCTR_uchoice, (&KKBBCTR_enquiry), LKBBCTR_case));
 /* line 546: */
 /* line 547: */
 /* line 548: */
EMBBCTR = (*(&((&QJBBCTR_uchoice)->Props))) ;
if (A_LB_GE(EMBBCTR,WCAACTR_decbit))
{ 
 /* line 549: */
 /* line 551: */
 /* line 552: */
 /* line 553: */
 /* line 556: */
A_CALLPROC(ZJBBCTR_iddecimperative,( &FMBBCTR),( &FMBBCTR,(ZJBBCTR_iddecimperative).nonlocals));
(void)(AYVACTR_ccdec(FMBBCTR, (&KKBBCTR_enquiry), (*(&((&QJBBCTR_uchoice)->Param)))));
} 
} 
break;
case 4: 
 /* line 558: */
(void)(ZOZACTR_comma(SLBBCTR_s.Param));
break;
case 5: 
 /* line 559: */
{ 
(void)(A_CALLPROC(RJBBCTR_readuchoiceimperative,(),((RJBBCTR_readuchoiceimperative).nonlocals)));
 /* line 560: */
 /* line 561: */
 /* line 562: */
 /* line 564: */
(void)(VPZACTR_commau(QJBBCTR_uchoice, KKBBCTR_enquiry, LKBBCTR_case));
 /* line 565: */
 /* line 566: */
 /* line 567: */
GMBBCTR = (*(&((&QJBBCTR_uchoice)->Props))) ;
if (A_LB_GE(GMBBCTR,WCAACTR_decbit))
{ 
 /* line 568: */
 /* line 570: */
 /* line 571: */
 /* line 572: */
 /* line 575: */
A_CALLPROC(ZJBBCTR_iddecimperative,( &HMBBCTR),( &HMBBCTR,(ZJBBCTR_iddecimperative).nonlocals));
(void)(AYVACTR_ccdec(HMBBCTR, (&KKBBCTR_enquiry), (*(&((&QJBBCTR_uchoice)->Param)))));
} 
} 
break;
case 6: 
 /* line 577: */
(void)(SXIACTR_terminalerror(665));
break;
case 7: 
 /* line 579: */
(void)(EQZACTR_out());
break;
case 8: 
 /* line 583: */
(void)(A_CALLPROC(SQZACTR_outu,(),((SQZACTR_outu).nonlocals)));
break;
case 9: 
 /* line 584: */
(void)(ZLZACTR_else());
break;
default: 
 /* line 585: */
(void)(SXIACTR_terminalerror(665));
break;
} 
 /* line 587: */
 /* line 588: */
 /* line 589: */
JMBBCTR = SLBBCTR_s.Props ;
IMBBCTR.Block = A_LB_GE(JMBBCTR,WCAACTR_decbit);
 /* line 590: */
KMBBCTR = SLBBCTR_s.Mode ;
IMBBCTR.Dynamicresult = OTMACTR_dynamic(A_ABS(KMBBCTR));
 /* line 591: */
IMBBCTR.Discardeddynamicresult = ((A68_BITS )(SLBBCTR_s.Props&MDAACTR_dybits)!=0X0U);
 /* line 592: */
IMBBCTR.Type = (SLBBCTR_s.Fn+LBAACTR_separatoroffset);
QLBBCTR_seriesproperties = IMBBCTR;
 /* line 593: */
 /* line 594: */
 /* line 596: */
LMBBCTR = A68_TRUE;
} 
break;
case 22: /* STRUCT(INT,BITS)  */
MMBBCTR_t = (RLBBCTR.data.mode22);
 /* line 597: */
{ 
 /* line 598: */
 /* line 599: */
if (MMBBCTR_t.Fn==CCAACTR_esacufn)
{ 
 /* line 600: */
(void)(A_CALLPROC(SRZACTR_esacu,(OKBBCTR_outpart, Answer),(OKBBCTR_outpart, Answer,(SRZACTR_esacu).nonlocals)));
} 
else
{ 
 /* line 601: */
 /* line 602: */
if (MMBBCTR_t.Fn==BCAACTR_esacfn)
{ 
 /* line 603: */
 /* line 604: */
(void)(WQZACTR_esac(OKBBCTR_outpart, Answer));
} 
else
{ 
 /* line 605: */
(void)(WRZACTR_fi(NKBBCTR_elsepart, Answer));
} 
} 
 /* line 607: */
 /* line 608: */
 /* line 609: */
 /* line 610: */
LMBBCTR = A68_FALSE;
} 
break;
default: 
(void)(SXIACTR_terminalerror(657));
 /* line 611: */
 /* line 612: */
 /* line 613: */
LMBBCTR = A68_FALSE;
break;
} 
 /* line 614: */
NMBBCTR = LMBBCTR;
if ( !NMBBCTR ) break;
 /* line 615: */
(void)(A_CALLPROC(NL(ZGBBCTR_serialclause),(QLBBCTR_seriesproperties, PLBBCTR_seriesanswer),(QLBBCTR_seriesproperties, PLBBCTR_seriesanswer,(NL(ZGBBCTR_serialclause)).nonlocals)));
}
 /* line 616: */
} 
A_PROC_EXIT(choiceclause);
return;
} 
#undef NL

A_STATIC A68_VOID  RMBBCTR_collateralclause(A68_188  Starter, A68_63  Answer, void *NonLocals)
#define NL(x) (((SMBBCTR_collateralclause *)NonLocals)->x)
{ 
A68_INT  NNBBCTR;  /* ADICOPS - ABS INT */
A68_INT  ONBBCTR_resultmode A_UNUSED = {0};
A68_INT  PNBBCTR_resulttype A_UNUSED = {0};
A68_BOOL  QNBBCTR_structure A_UNUSED = {0};
A68_BOOL  RNBBCTR_istruct A_UNUSED = {0};
A68_BOOL  SNBBCTR_void A_UNUSED = {0};
A68_208  VNBBCTR_fields A_UNUSED = {0};
A68_208  WNBBCTR;  /* avoid structure result */
A68_64 * XNBBCTR_collateralvalue A_UNUSED = {0};
A68_VC  ZNBBCTR;  /* clause result */
A68_65  BOBBCTR;  /* united object - for case conformity */
A68_68  EOBBCTR;  /* avoid structure result */
A68_65  FOBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  GOBBCTR;  /* avoid structure result */
A68_VC  HOBBCTR_collateraltemp A_UNUSED = {0};
A68_64  IOBBCTR;  /* collateral clause result */
A68_INT  JOBBCTR;  /* ADICOPS - ABS INT */
A68_289  KOBBCTR;  /* clause result */
A68_INT  LOBBCTR;  /* YIELD */
A68_289  MOBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_200 * NOBBCTR;  /* YIELD */
A68_289  OOBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  POBBCTR;  /* YIELD */
A68_289  QOBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ROBBCTR;  /* avoid structure result */
A68_65  SOBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_64  TOBBCTR_phrasevalue A_UNUSED = {0};
A68_55  UOBBCTR_endofphrase A_UNUSED = {0};
A68_63  VOBBCTR;  /* collateral clause result */
A68_63  WOBBCTR_phraseanswer A_UNUSED = {0};
A68_INT  XOBBCTR_i A_UNUSED = {0};
A68_180  YOBBCTR;  /* united object - for case conformity */
A68_187  ZOBBCTR_s A_UNUSED = {0};
A68_64  CPBBCTR;  /* collateral clause result */
A68_INT  DPBBCTR;  /* ADICOPS - ABS INT */
A68_289  EPBBCTR;  /* clause result */
A68_INT  FPBBCTR;  /* YIELD */
A68_289  GPBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_200 * HPBBCTR;  /* YIELD */
A68_289  IPBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  JPBBCTR;  /* YIELD */
A68_289  KPBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  LPBBCTR;  /* avoid structure result */
A68_65  MPBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_BOOL  NPBBCTR;  /* clause result */
A68_189  OPBBCTR_t A_UNUSED = {0};
A68_BOOL  RPBBCTR;  /* clause result */
A_PROC_ENTRY(collateralclause);
 /* line 623: */
 /* line 624: */
{ 
 /* line 625: */
 /* line 626: */
 /* line 645: */
NNBBCTR = Starter.Resultmode ;
ONBBCTR_resultmode = A_ABS(NNBBCTR);
 /* line 646: */
PNBBCTR_resulttype = IOMACTR_modetype(ONBBCTR_resultmode);
 /* line 647: */
QNBBCTR_structure = (PNBBCTR_resulttype==IEAACTR_struct);
 /* line 648: */
RNBBCTR_istruct = (PNBBCTR_resulttype==JEAACTR_istruct);
 /* line 649: */
SNBBCTR_void = (ONBBCTR_resultmode==UEAACTR_voidmode);
 /* line 651: */
 /* line 652: */
 /* line 653: */
(void)(WXIACTR_assert(UNBBCTR, ((QNBBCTR_structure|RNBBCTR_istruct)|SNBBCTR_void)));
 /* line 655: */
 /* line 656: */
 /* line 657: */
if (QNBBCTR_structure)
{ 
 /* line 658: */
EVMACTR_structfields( ONBBCTR_resultmode, &WNBBCTR );
VNBBCTR_fields = WNBBCTR;
} 
 /* line 660: */
XNBBCTR_collateralvalue = Answer.Value;
 /* line 667: */
 /* line 668: */
 /* line 669: */
 /* line 670: */
if ((*(&(XNBBCTR_collateralvalue->Mode)))==UEAACTR_voidmode)
{ 
ZNBBCTR = AOBBCTR;
} 
else
{ 
 /* line 671: */
BOBBCTR = (*(&(XNBBCTR_collateralvalue->Extra))) ;
switch ( BOBBCTR.mode )
{ 
case 3: /* VOID */
 /* line 673: */
 /* line 675: */
 /* line 676: */
 /* line 677: */
QMOACTR_declarectemporary( (*(&(XNBBCTR_collateralvalue->Mode))), DOBBCTR, &EOBBCTR );
(void)(YKBBCTR_assignment((&(XNBBCTR_collateralvalue->Extra)), A_UNITE(FOBBCTR,mode5,5,EOBBCTR)));
break;
default: 
/*SKIP*/;
break;
} 
 /* line 678: */
 /* line 679: */
UZPACTR_getcfragment( XNBBCTR_collateralvalue, &GOBBCTR );
ZNBBCTR = GOBBCTR;
} 
HOBBCTR_collateraltemp = ZNBBCTR;
 /* line 682: */
 /* line 683: */
 /* line 684: */
JOBBCTR = Starter.Mode ;
IOBBCTR.Mode = A_ABS(JOBBCTR);
 /* line 686: */
IOBBCTR.Info = PKJACTR_defaultinfo;
 /* line 687: */
if (QNBBCTR_structure)
{ 
 /* line 688: */
LOBBCTR = 1 ;
NOBBCTR = (&A_VINDEX(VNBBCTR_fields,LOBBCTR)) ;
KOBBCTR = A_UNITE(MOBBCTR,mode1,1,NOBBCTR);
} 
else
{ 
 /* line 689: */
if (RNBBCTR_istruct)
{ 
 /* line 690: */
POBBCTR = 1 ;
KOBBCTR = A_UNITE(OOBBCTR,mode2,2,POBBCTR);
} 
else
{ 
 /* line 691: */
KOBBCTR = A_EMPTY(QOBBCTR,3);
} 
} 
 /* line 692: */
WMBBCTR_collateralunitassignee( HOBBCTR_collateraltemp, KOBBCTR, &ROBBCTR );
IOBBCTR.Extra = A_UNITE(SOBBCTR,mode6,6,ROBBCTR);
TOBBCTR_phrasevalue = IOBBCTR;
 /* line 694: */
UOBBCTR_endofphrase = HIAACTR_unsetlabel;
 /* line 696: */
 /* line 697: */
VOBBCTR.Value = (&TOBBCTR_phrasevalue);
VOBBCTR.End = (&UOBBCTR_endofphrase);
VOBBCTR.Type = Answer.Type;
WOBBCTR_phraseanswer = VOBBCTR;
 /* line 699: */
 /* line 700: */
for ( XOBBCTR_i = 1;;
XOBBCTR_i += 1 ) 
{ 
(void)(A_CALLPROC(NL(HIBBCTR_phrase),(A68_FALSE, WOBBCTR_phraseanswer, A68_FALSE),(A68_FALSE, WOBBCTR_phraseanswer, A68_FALSE,(NL(HIBBCTR_phrase)).nonlocals)));
 /* line 701: */
 /* line 702: */
YOBBCTR = (*NL(PDBBCTR_currentimperative)) ;
switch ( YOBBCTR.mode )
{ 
case 20: /* STRUCT(INT,INT,BITS,INT)  */
ZOBBCTR_s = (YOBBCTR.data.mode20);
 /* line 703: */
 /* line 704: */
{ 
(void)(WXIACTR_assert(BPBBCTR, (ZOBBCTR_s.Fn==VBAACTR_collcommafn)));
 /* line 706: */
 /* line 707: */
 /* line 708: */
DPBBCTR = ZOBBCTR_s.Mode ;
CPBBCTR.Mode = A_ABS(DPBBCTR);
 /* line 710: */
CPBBCTR.Info = PKJACTR_defaultinfo;
 /* line 711: */
if (QNBBCTR_structure)
{ 
 /* line 712: */
FPBBCTR = ZOBBCTR_s.Param ;
HPBBCTR = (&A_VINDEX(VNBBCTR_fields,FPBBCTR)) ;
EPBBCTR = A_UNITE(GPBBCTR,mode1,1,HPBBCTR);
} 
else
{ 
 /* line 713: */
if (RNBBCTR_istruct)
{ 
 /* line 714: */
JPBBCTR = ZOBBCTR_s.Param ;
EPBBCTR = A_UNITE(IPBBCTR,mode2,2,JPBBCTR);
} 
else
{ 
 /* line 715: */
EPBBCTR = A_EMPTY(KPBBCTR,3);
} 
} 
 /* line 716: */
WMBBCTR_collateralunitassignee( HOBBCTR_collateraltemp, EPBBCTR, &LPBBCTR );
CPBBCTR.Extra = A_UNITE(MPBBCTR,mode6,6,LPBBCTR);
(void)(TKBBCTR_assignment((&TOBBCTR_phrasevalue), CPBBCTR));
 /* line 717: */
 /* line 718: */
 /* line 720: */
NPBBCTR = A68_TRUE;
} 
break;
case 22: /* STRUCT(INT,BITS)  */
OPBBCTR_t = (YOBBCTR.data.mode22);
 /* line 721: */
 /* line 722: */
{ 
(void)(WXIACTR_assert(QPBBCTR, (OPBBCTR_t.Fn==ECAACTR_endcollfn)));
 /* line 723: */
 /* line 724: */
 /* line 725: */
 /* line 726: */
NPBBCTR = A68_FALSE;
} 
break;
default: 
(void)(SXIACTR_terminalerror(658));
 /* line 727: */
 /* line 728: */
 /* line 729: */
NPBBCTR = A68_FALSE;
break;
} 
 /* line 731: */
RPBBCTR = NPBBCTR;
if ( !RPBBCTR ) break;
/*SKIP*/;
}
 /* line 732: */
} 
A_PROC_EXIT(collateralclause);
return;
} 
#undef NL
 /* line 737: */

A_STATIC A68_VOID  VPBBCTR_loopbody(A68_BOOL  Body, A68_63  Answer, void *NonLocals)
#define NL(x) (((WPBBCTR_loopbody *)NonLocals)->x)
{ 
A68_55  XPBBCTR_endofseries A_UNUSED = {0};
A68_180  YPBBCTR;  /* united object - for case conformity */
A68_187  ZPBBCTR_whileordo A_UNUSED = {0};
A68_59  AQBBCTR;  /* collateral clause result */
A68_BITS  BQBBCTR;  /* ADICOPS - >= */
A68_59  CQBBCTR_loopproperties A_UNUSED = {0};
A68_64  DQBBCTR;  /* collateral clause result */
A68_65  EQBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_64  FQBBCTR_enquiry A_UNUSED = {0};
A68_63  GQBBCTR;  /* collateral clause result */
A68_180  HQBBCTR;  /* united object - for case conformity */
A68_187  IQBBCTR_s A_UNUSED = {0};
A68_59  LQBBCTR;  /* collateral clause result */
A68_BITS  MQBBCTR;  /* ADICOPS - >= */
A68_59  NQBBCTR_seriesproperties A_UNUSED = {0};
A68_63  OQBBCTR;  /* collateral clause result */
A68_63  PQBBCTR;  /* collateral clause result */
A_PROC_ENTRY(loopbody);
 /* line 742: */
 /* line 743: */
{ 
XPBBCTR_endofseries = HIAACTR_unsetlabel;
 /* line 744: */
(void)(A_CALLPROC(NL(TDBBCTR_read),(),((NL(TDBBCTR_read)).nonlocals)));
 /* line 745: */
 /* line 746: */
YPBBCTR = (*NL(PDBBCTR_currentimperative)) ;
switch ( YPBBCTR.mode )
{ 
case 20: /* STRUCT(INT,INT,BITS,INT)  */
ZPBBCTR_whileordo = (YPBBCTR.data.mode20);
 /* line 747: */
 /* line 748: */
{ 
 /* line 749: */
BQBBCTR = ZPBBCTR_whileordo.Props ;
AQBBCTR.Block = (A_LB_GE(BQBBCTR,WCAACTR_decbit)&(!Body));
 /* line 750: */
AQBBCTR.Dynamicresult = A68_FALSE;
 /* line 751: */
AQBBCTR.Discardeddynamicresult = ((A68_BITS )(ZPBBCTR_whileordo.Props&MDAACTR_dybits)!=0X0U);
 /* line 752: */
AQBBCTR.Type = (ZPBBCTR_whileordo.Fn+LBAACTR_separatoroffset);
CQBBCTR_loopproperties = AQBBCTR;
 /* line 754: */
 /* line 755: */
 /* line 756: */
if (ZPBBCTR_whileordo.Fn==YBAACTR_whilefn)
{ 
DQBBCTR.Mode = WEAACTR_boolmode;
DQBBCTR.Info = PKJACTR_defaultinfo;
DQBBCTR.Extra = A_EMPTY(EQBBCTR,3);
FQBBCTR_enquiry = DQBBCTR;
 /* line 757: */
(void)(CCBBCTR_while());
 /* line 758: */
 /* line 759: */
GQBBCTR.Value = (&FQBBCTR_enquiry);
GQBBCTR.End = (A68_55 *)A68_NIL;
GQBBCTR.Type = ILJACTR_enquiryresult;
(void)(A_CALLPROC(NL(THBBCTR_enquiryclause),(GQBBCTR),(GQBBCTR,(NL(THBBCTR_enquiryclause)).nonlocals)));
 /* line 760: */
(void)(ECBBCTR_whiledo((&FQBBCTR_enquiry)));
 /* line 762: */
 /* line 763: */
HQBBCTR = (*NL(PDBBCTR_currentimperative)) ;
switch ( HQBBCTR.mode )
{ 
case 20: /* STRUCT(INT,INT,BITS,INT)  */
IQBBCTR_s = (HQBBCTR.data.mode20);
 /* line 764: */
 /* line 765: */
{ 
(void)(WXIACTR_assert(KQBBCTR, (IQBBCTR_s.Fn==XBAACTR_dofn)));
 /* line 766: */
 /* line 767: */
 /* line 768: */
 /* line 769: */
MQBBCTR = IQBBCTR_s.Props ;
LQBBCTR.Block = (A_LB_GE(MQBBCTR,WCAACTR_decbit)&(!CQBBCTR_loopproperties.Block));
 /* line 770: */
LQBBCTR.Dynamicresult = A68_FALSE;
 /* line 771: */
LQBBCTR.Discardeddynamicresult = ((A68_BITS )(IQBBCTR_s.Props&MDAACTR_dybits)!=0X0U);
 /* line 772: */
LQBBCTR.Type = (IQBBCTR_s.Fn+LBAACTR_separatoroffset);
NQBBCTR_seriesproperties = LQBBCTR;
 /* line 773: */
 /* line 774: */
 /* line 775: */
OQBBCTR.Value = Answer.Value;
OQBBCTR.End = (&XPBBCTR_endofseries);
 /* line 776: */
OQBBCTR.Type = ELJACTR_voidresult;
 /* line 777: */
 /* line 778: */
 /* line 779: */
(void)(A_CALLPROC(NL(ZGBBCTR_serialclause),(NQBBCTR_seriesproperties, OQBBCTR),(NQBBCTR_seriesproperties, OQBBCTR,(NL(ZGBBCTR_serialclause)).nonlocals)));
} 
break;
default: 
 /* line 780: */
(void)(SXIACTR_terminalerror(666));
break;
} 
 /* line 782: */
 /* line 784: */
 /* line 786: */
(void)(XCBBCTR_whileod());
} 
else
{ 
 /* line 787: */
PQBBCTR.Value = Answer.Value;
PQBBCTR.End = (&XPBBCTR_endofseries);
 /* line 788: */
PQBBCTR.Type = ELJACTR_voidresult;
(void)(A_CALLPROC(NL(ZGBBCTR_serialclause),(CQBBCTR_loopproperties, PQBBCTR),(CQBBCTR_loopproperties, PQBBCTR,(NL(ZGBBCTR_serialclause)).nonlocals)));
 /* line 789: */
 /* line 790: */
 /* line 791: */
 /* line 792: */
 /* line 793: */
(void)(A_CALLPROC(EDBBCTR_od,(),((EDBBCTR_od).nonlocals)));
} 
} 
break;
default: 
 /* line 794: */
 /* line 795: */
(void)(SXIACTR_terminalerror(666));
break;
} 
} 
A_PROC_EXIT(loopbody);
return;
} 
#undef NL
 /* line 799: */
 /* line 800: */
 /* line 802: */

A_STATIC A68_VOID  VQBBCTR_loopclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, A68_71 ** Frobytlist, void *NonLocals)
#define NL(x) (((WQBBCTR_loopclause *)NonLocals)->x)
{ 
A68_55  XQBBCTR_startofloop A_UNUSED = {0};
A68_55 * YQBBCTR_endofloop A_UNUSED = {0};
A68_64  ZQBBCTR_control A_UNUSED = {0};
A68_64  ARBBCTR_step A_UNUSED = {0};
A68_194  BRBBCTR;  /* collateral clause result */
A68_BITS  CRBBCTR;  /* ADICOPS - >= */
A68_BITS  DRBBCTR;  /* ADICOPS - >= */
A68_BITS  ERBBCTR;  /* ADICOPS - >= */
A68_BITS  FRBBCTR;  /* ADICOPS - >= */
A68_194  GRBBCTR_loop A_UNUSED = {0};
A68_180  HRBBCTR;  /* united object - for case conformity */
A68_156  IRBBCTR_id A_UNUSED = {0};
A68_64  JRBBCTR;  /* collateral clause result */
A68_INT  KRBBCTR;  /* YIELD */
A68_67  LRBBCTR_iden A_UNUSED = {0};
A68_INT * MRBBCTR;  /* YIELD */
A68_65  NRBBCTR = {0};  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(loopclause);
 /* line 806: */
 /* line 807: */
{ 
XQBBCTR_startofloop = HIAACTR_unsetlabel;
 /* line 808: */
YQBBCTR_endofloop = Answer.End;
 /* line 809: */
ZQBBCTR_control = DLJACTR_skipvalue;
 /* line 810: */
ARBBCTR_step = DLJACTR_skipvalue;
 /* line 812: */
 /* line 813: */
BRBBCTR.Control = (&ZQBBCTR_control);
 /* line 814: */
BRBBCTR.Step = (&ARBBCTR_step);
 /* line 815: */
CRBBCTR = Starter.Props ;
BRBBCTR.Forpart = A_LB_GE(CRBBCTR,IDAACTR_forpartbit);
 /* line 816: */
DRBBCTR = Starter.Props ;
BRBBCTR.Frompart = A_LB_GE(DRBBCTR,JDAACTR_frompartbit);
 /* line 817: */
ERBBCTR = Starter.Props ;
BRBBCTR.Bypart = A_LB_GE(ERBBCTR,KDAACTR_bypartbit);
 /* line 818: */
FRBBCTR = Starter.Props ;
BRBBCTR.Topart = A_LB_GE(FRBBCTR,LDAACTR_topartbit);
GRBBCTR_loop = BRBBCTR;
 /* line 820: */
 /* line 821: */
if (*(&((&GRBBCTR_loop)->Forpart)))
{ 
(void)(A_CALLPROC(NL(TDBBCTR_read),(),((NL(TDBBCTR_read)).nonlocals)));
 /* line 822: */
 /* line 823: */
HRBBCTR = (*NL(PDBBCTR_currentimperative)) ;
switch ( HRBBCTR.mode )
{ 
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
IRBBCTR_id = (HRBBCTR.data.mode11);
 /* line 824: */
{ 
(void)(JWVACTR_iddec(IRBBCTR_id, (A68_71 **)A68_NIL));
 /* line 825: */
 /* line 826: */
 /* line 827: */
KRBBCTR = IRBBCTR_id.Decno ;
JRBBCTR.Mode = (*(&((&A_R1INDEX(WPKACTR_ids,KRBBCTR))->Mode)));
 /* line 828: */
JRBBCTR.Info = PKJACTR_defaultinfo;
{ 
 /* line 829: */
MRBBCTR = (&((&LRBBCTR_iden)->Idno)) ;
(*MRBBCTR) = IRBBCTR_id.Decno;
 /* line 830: */
 /* line 831: */
 /* line 832: */
JRBBCTR.Extra = A_UNITE(NRBBCTR,mode4,4,LRBBCTR_iden);
} 
 /* line 833: */
 /* line 834: */
(void)(TKBBCTR_assignment((&ZQBBCTR_control), JRBBCTR));
} 
break;
default: 
 /* line 835: */
 /* line 836: */
(void)(SXIACTR_terminalerror(666));
break;
} 
} 
 /* line 838: */
(void)(UHABCTR_for((&GRBBCTR_loop), Starter.Resultmode, Frobytlist));
 /* line 839: */
 /* line 840: */
(void)(A_CALLPROC(NL(UPBBCTR_loopbody),(Body, Answer),(Body, Answer,(NL(UPBBCTR_loopbody)).nonlocals)));
} 
A_PROC_EXIT(loopclause);
return;
} 
#undef NL
 /* line 844: */
 /* line 845: */
 /* line 847: */

A_STATIC A68_VOID  TRBBCTR_forallclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, A68_71 ** Foralllist, void *NonLocals)
#define NL(x) (((URBBCTR_forallclause *)NonLocals)->x)
{ 
A68_55  VRBBCTR_startofloop A_UNUSED = {0};
A68_55 * WRBBCTR_endofloop A_UNUSED = {0};
A68_INT  XRBBCTR_controlcount A_UNUSED = {0};
A68_298  ZRBBCTR_generator;   /* proc value of non-global proc */
A68_198  FSBBCTR;  /* avoid structure result */
A68_198  ESBBCTR_controls A_UNUSED = {0};
A68_71 ** GSBBCTR_thisforalllist A_UNUSED = {0};
A68_195 * HSBBCTR_control A_UNUSED = {0};
A68_INT  ISBBCTR;  /* forall loop counter */
A68_180  JSBBCTR;  /* united object - for case conformity */
A68_156  KSBBCTR_id A_UNUSED = {0};
A68_64  LSBBCTR;  /* collateral clause result */
A68_INT  MSBBCTR;  /* YIELD */
A68_67  NSBBCTR_iden A_UNUSED = {0};
A68_INT * OSBBCTR;  /* YIELD */
A68_65  PSBBCTR = {0};  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(forallclause);
 /* line 851: */
 /* line 852: */
{ 
VRBBCTR_startofloop = HIAACTR_unsetlabel;
 /* line 853: */
WRBBCTR_endofloop = Answer.End;
 /* line 854: */
XRBBCTR_controlcount = Starter.Resultmode;
 /* line 855: */
A_CLOSURE( ZRBBCTR_generator, ASBBCTR_generator, BSBBCTR_generator );
(( BSBBCTR_generator * ) ( ZRBBCTR_generator.nonlocals )) -> XRBBCTR_controlcount = XRBBCTR_controlcount;
A_CALLPROC(ZRBBCTR_generator,(A68_TRUE, &FSBBCTR),(A68_TRUE, &FSBBCTR,(ZRBBCTR_generator).nonlocals));
ESBBCTR_controls = FSBBCTR;
 /* line 857: */
GSBBCTR_thisforalllist = Foralllist;
 /* line 859: */
 /* line 860: */
ISBBCTR = ESBBCTR_controls.upb -1;
HSBBCTR_control = ESBBCTR_controls.data;
for (;ISBBCTR-- >= 0;
(HSBBCTR_control++
) )
{
 /* line 861: */
(void)(A_CALLPROC(NL(TDBBCTR_read),(),((NL(TDBBCTR_read)).nonlocals)));
 /* line 862: */
 /* line 863: */
JSBBCTR = (*NL(PDBBCTR_currentimperative)) ;
switch ( JSBBCTR.mode )
{ 
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
KSBBCTR_id = (JSBBCTR.data.mode11);
 /* line 864: */
 /* line 871: */
{ 
(void)(JWVACTR_iddec(KSBBCTR_id, GSBBCTR_thisforalllist));
 /* line 872: */
(void)(GSBBCTR_thisforalllist = (&((*GSBBCTR_thisforalllist)->Rest)));
 /* line 874: */
 /* line 875: */
 /* line 876: */
MSBBCTR = KSBBCTR_id.Decno ;
LSBBCTR.Mode = (*(&((&A_R1INDEX(WPKACTR_ids,MSBBCTR))->Mode)));
 /* line 877: */
LSBBCTR.Info = PKJACTR_defaultinfo;
{ 
 /* line 878: */
OSBBCTR = (&((&NSBBCTR_iden)->Idno)) ;
(*OSBBCTR) = KSBBCTR_id.Decno;
 /* line 879: */
 /* line 880: */
 /* line 881: */
LSBBCTR.Extra = A_UNITE(PSBBCTR,mode4,4,NSBBCTR_iden);
} 
 /* line 882: */
 /* line 883: */
(void)(TKBBCTR_assignment((&(HSBBCTR_control->Ident)), LSBBCTR));
} 
break;
default: 
 /* line 884: */
 /* line 885: */
(void)(SXIACTR_terminalerror(666));
break;
} 
}
 /* line 887: */
(void)(IRABCTR_forall(ESBBCTR_controls, Foralllist));
 /* line 888: */
 /* line 889: */
(void)(A_CALLPROC(NL(UPBBCTR_loopbody),(Body, Answer),(Body, Answer,(NL(UPBBCTR_loopbody)).nonlocals)));
} 
A_PROC_EXIT(forallclause);
return;
} 
#undef NL

A_STATIC A68_71 * YSBBCTR_assignment(A68_71 * WSBBCTR_anonymous, A68_71  XSBBCTR_anonymous)
{ 
A68_71 ** ZSBBCTR;  /* YIELD */
A68_71 * ATBBCTR;  /* clause result */
{ 
(void)(TKBBCTR_assignment((&(WSBBCTR_anonymous->Value)), XSBBCTR_anonymous.Value));
ZSBBCTR = (&(WSBBCTR_anonymous->Rest)) ;
(*ZSBBCTR) = XSBBCTR_anonymous.Rest;
ATBBCTR = WSBBCTR_anonymous;
} 
return( ATBBCTR );
} 
#undef NL

A_STATIC A68_VOID  UFBBCTR_generator(A68_BOOL  SFBBCTR_anonymous, A68_124  *ReturnedValue, void *NonLocals)
#define NL(x) (((VFBBCTR_generator *)NonLocals)->x)
{ 
A68_124  WFBBCTR;  /* clause result */
A68_124  XFBBCTR;  /* OPERATORS - dynamic generator */
{ 
XFBBCTR.upb = 0 ;
( SFBBCTR_anonymous? A_VLOC(A68_INT ,XFBBCTR): A_VHEAP(A68_INT ,XFBBCTR) );
WFBBCTR = XFBBCTR;
} 
*ReturnedValue = (WFBBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  FGBBCTR_generator(A68_BOOL  DGBBCTR_anonymous, A68_124  *ReturnedValue, void *NonLocals)
#define NL(x) (((GGBBCTR_generator *)NonLocals)->x)
{ 
A68_124  HGBBCTR;  /* clause result */
A68_124  IGBBCTR;  /* OPERATORS - dynamic generator */
{ 
IGBBCTR.upb = NL(RFBBCTR_paramcount) ;
( DGBBCTR_anonymous? A_VLOC(A68_INT ,IGBBCTR): A_VHEAP(A68_INT ,IGBBCTR) );
HGBBCTR = IGBBCTR;
} 
*ReturnedValue = (HGBBCTR);
return;
} 
#undef NL
 /* line 369: */
 /* line 370: */
 /* line 372: */

A_STATIC A68_VOID  QIBBCTR_enclosedclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, A68_71 * Newvalue, void *NonLocals)
#define NL(x) (((RIBBCTR_enclosedclause *)NonLocals)->x)
{ 
A68_281  WIBBCTR_closedclause;   /* proc value of non-global proc */
A68_281  NJBBCTR_choiceclause;   /* proc value of non-global proc */
A68_288  QMBBCTR_collateralclause;   /* proc value of non-global proc */
A68_76  UPBBCTR_loopbody;   /* proc value of non-global proc */
A68_297  UQBBCTR_loopclause;   /* proc value of non-global proc */
A68_297  SRBBCTR_forallclause;   /* proc value of non-global proc */
A68_55  QSBBCTR_endofclause A_UNUSED = {0};
A68_INT  RSBBCTR;  /* ADICOPS - ABS INT */
A68_INT  SSBBCTR_resultmode A_UNUSED = {0};
A68_INT  TSBBCTR_type A_UNUSED = {0};
A68_71  USBBCTR;  /* collateral clause result */
A68_65  VSBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_63  BTBBCTR;  /* collateral clause result */
A68_63  ETBBCTR;  /* collateral clause result */
A68_BITS  FTBBCTR;  /* ADICOPS - >= */
A68_INT  GTBBCTR;  /* ADICOPS - ABS INT */
A68_INT  HTBBCTR;  /* ADICOPS - ABS INT */
A68_INT  ITBBCTR_resultmode A_UNUSED = {0};
A68_BOOL  JTBBCTR_newanswer A_UNUSED = {0};
A68_71  KTBBCTR;  /* collateral clause result */
A68_65  LTBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_63  MTBBCTR;  /* collateral clause result */
A68_63  NTBBCTR;  /* collateral clause result */
A68_71 * OTBBCTR_valuelist A_UNUSED = {0};
A68_INT  PTBBCTR;  /* to part of loop */
A68_INT  QTBBCTR;  /* loop control */
A68_71  RTBBCTR;  /* collateral clause result */
A68_65  STBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_297  TTBBCTR;  /* clause result */
A68_63  UTBBCTR;  /* collateral clause result */
A68_INT  VTBBCTR;  /* ADICOPS - ABS INT */
A68_INT  WTBBCTR_resultmode A_UNUSED = {0};
A68_71  XTBBCTR;  /* collateral clause result */
A68_65  YTBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_63  ZTBBCTR;  /* collateral clause result */
A68_63  CUBBCTR;  /* collateral clause result */
A68_INT  DUBBCTR;  /* ADICOPS - ABS INT */
A_PROC_ENTRY(enclosedclause);
 /* line 392: */
 /* line 394: */
{ 
 /* line 395: */
A_CLOSURE( WIBBCTR_closedclause, XIBBCTR_closedclause, YIBBCTR_closedclause );
(( YIBBCTR_closedclause * ) ( WIBBCTR_closedclause.nonlocals )) -> ZGBBCTR_serialclause = NL(ZGBBCTR_serialclause);
 /* line 429: */
 /* line 430: */
A_CLOSURE( NJBBCTR_choiceclause, OJBBCTR_choiceclause, PJBBCTR_choiceclause );
(( PJBBCTR_choiceclause * ) ( NJBBCTR_choiceclause.nonlocals )) -> TDBBCTR_read = NL(TDBBCTR_read);
(( PJBBCTR_choiceclause * ) ( NJBBCTR_choiceclause.nonlocals )) -> PDBBCTR_currentimperative = NL(PDBBCTR_currentimperative);
(( PJBBCTR_choiceclause * ) ( NJBBCTR_choiceclause.nonlocals )) -> THBBCTR_enquiryclause = NL(THBBCTR_enquiryclause);
(( PJBBCTR_choiceclause * ) ( NJBBCTR_choiceclause.nonlocals )) -> ZGBBCTR_serialclause = NL(ZGBBCTR_serialclause);
 /* line 618: */
A_CLOSURE( QMBBCTR_collateralclause, RMBBCTR_collateralclause, SMBBCTR_collateralclause );
(( SMBBCTR_collateralclause * ) ( QMBBCTR_collateralclause.nonlocals )) -> HIBBCTR_phrase = NL(HIBBCTR_phrase);
(( SMBBCTR_collateralclause * ) ( QMBBCTR_collateralclause.nonlocals )) -> PDBBCTR_currentimperative = NL(PDBBCTR_currentimperative);
 /* line 734: */
 /* line 735: */
A_CLOSURE( UPBBCTR_loopbody, VPBBCTR_loopbody, WPBBCTR_loopbody );
(( WPBBCTR_loopbody * ) ( UPBBCTR_loopbody.nonlocals )) -> TDBBCTR_read = NL(TDBBCTR_read);
(( WPBBCTR_loopbody * ) ( UPBBCTR_loopbody.nonlocals )) -> PDBBCTR_currentimperative = NL(PDBBCTR_currentimperative);
(( WPBBCTR_loopbody * ) ( UPBBCTR_loopbody.nonlocals )) -> THBBCTR_enquiryclause = NL(THBBCTR_enquiryclause);
(( WPBBCTR_loopbody * ) ( UPBBCTR_loopbody.nonlocals )) -> ZGBBCTR_serialclause = NL(ZGBBCTR_serialclause);
 /* line 797: */
 /* line 798: */
A_CLOSURE( UQBBCTR_loopclause, VQBBCTR_loopclause, WQBBCTR_loopclause );
(( WQBBCTR_loopclause * ) ( UQBBCTR_loopclause.nonlocals )) -> TDBBCTR_read = NL(TDBBCTR_read);
(( WQBBCTR_loopclause * ) ( UQBBCTR_loopclause.nonlocals )) -> PDBBCTR_currentimperative = NL(PDBBCTR_currentimperative);
(( WQBBCTR_loopclause * ) ( UQBBCTR_loopclause.nonlocals )) -> UPBBCTR_loopbody = UPBBCTR_loopbody;
 /* line 842: */
 /* line 843: */
A_CLOSURE( SRBBCTR_forallclause, TRBBCTR_forallclause, URBBCTR_forallclause );
(( URBBCTR_forallclause * ) ( SRBBCTR_forallclause.nonlocals )) -> TDBBCTR_read = NL(TDBBCTR_read);
(( URBBCTR_forallclause * ) ( SRBBCTR_forallclause.nonlocals )) -> PDBBCTR_currentimperative = NL(PDBBCTR_currentimperative);
(( URBBCTR_forallclause * ) ( SRBBCTR_forallclause.nonlocals )) -> UPBBCTR_loopbody = UPBBCTR_loopbody;
 /* line 893: */
QSBBCTR_endofclause = HIAACTR_unsetlabel;
 /* line 895: */
 /* line 896: */
if (Starter.Fn==HBAACTR_beginfn)
{ 
 /* line 897: */
if ((Starter.Mode>0)&(!Body))
{ 
RSBBCTR = Starter.Resultmode ;
SSBBCTR_resultmode = A_ABS(RSBBCTR);
 /* line 898: */
TSBBCTR_type = KLJACTR_noparticularresult;
 /* line 900: */
 /* line 901: */
USBBCTR.Value.Mode = SSBBCTR_resultmode;
USBBCTR.Value.Info = PKJACTR_defaultinfo;
USBBCTR.Value.Extra = A_EMPTY(VSBBCTR,3);
USBBCTR.Rest = (*NL(KIBBCTR_valuestack));
(void)((*NL(KIBBCTR_valuestack)) = YSBBCTR_assignment(Newvalue, USBBCTR));
 /* line 903: */
 /* line 904: */
 /* line 905: */
 /* line 906: */
 /* line 907: */
BTBBCTR.Value = (&((*NL(KIBBCTR_valuestack))->Value));
 /* line 909: */
BTBBCTR.End = (&QSBBCTR_endofclause);
 /* line 910: */
BTBBCTR.Type = Answer.Type;
 /* line 911: */
 /* line 912: */
(void)(A_CALLPROC(WIBBCTR_closedclause,(Starter, Body, BTBBCTR),(Starter, Body, BTBBCTR,(WIBBCTR_closedclause).nonlocals)));
} 
else
{ 
(void)(WXIACTR_assert(DTBBCTR, (Answer.Type!=JLJACTR_optboolresult)));
 /* line 913: */
 /* line 914: */
 /* line 915: */
 /* line 916: */
 /* line 917: */
ETBBCTR.Value = Answer.Value;
 /* line 918: */
 /* line 919: */
if (Answer.End==(A68_55 *)A68_NIL)
{ 
 /* line 920: */
ETBBCTR.End = (&QSBBCTR_endofclause);
} 
else
{ 
 /* line 921: */
ETBBCTR.End = Answer.End;
} 
 /* line 922: */
 /* line 923: */
FTBBCTR = Starter.Props ;
if (A_LB_GE(FTBBCTR,TCAACTR_exitbit))
{ 
 /* line 924: */
GTBBCTR = Answer.Type ;
ETBBCTR.Type = A_ABS(GTBBCTR);
} 
else
{ 
 /* line 925: */
 /* line 926: */
ETBBCTR.Type = Answer.Type;
} 
 /* line 927: */
 /* line 928: */
(void)(A_CALLPROC(WIBBCTR_closedclause,(Starter, Body, ETBBCTR),(Starter, Body, ETBBCTR,(WIBBCTR_closedclause).nonlocals)));
} 
} 
else
{ 
 /* line 929: */
if (Starter.Fn==IBAACTR_collbeginfn)
{ 
HTBBCTR = Starter.Resultmode ;
ITBBCTR_resultmode = A_ABS(HTBBCTR);
 /* line 930: */
JTBBCTR_newanswer = (Starter.Mode>0);
 /* line 932: */
 /* line 933: */
 /* line 934: */
if (JTBBCTR_newanswer|(Answer.Type==HLJACTR_routineresult))
{ 
 /* line 935: */
 /* line 936: */
KTBBCTR.Value.Mode = ITBBCTR_resultmode;
 /* line 938: */
KTBBCTR.Value.Info = PKJACTR_defaultinfo;
 /* line 940: */
KTBBCTR.Value.Extra = A_EMPTY(LTBBCTR,3);
KTBBCTR.Rest = (*NL(KIBBCTR_valuestack));
(void)((*NL(KIBBCTR_valuestack)) = YSBBCTR_assignment(Newvalue, KTBBCTR));
 /* line 941: */
 /* line 942: */
 /* line 943: */
 /* line 944: */
MTBBCTR.Value = (&((*NL(KIBBCTR_valuestack))->Value));
MTBBCTR.End = (A68_55 *)A68_NIL;
 /* line 945: */
MTBBCTR.Type = KLJACTR_noparticularresult;
 /* line 946: */
 /* line 948: */
(void)(A_CALLPROC(QMBBCTR_collateralclause,(Starter, MTBBCTR),(Starter, MTBBCTR,(QMBBCTR_collateralclause).nonlocals)));
} 
else
{ 
 /* line 949: */
 /* line 950: */
NTBBCTR.Value = Answer.Value;
NTBBCTR.End = (A68_55 *)A68_NIL;
 /* line 951: */
NTBBCTR.Type = KLJACTR_noparticularresult;
 /* line 952: */
 /* line 953: */
(void)(A_CALLPROC(QMBBCTR_collateralclause,(Starter, NTBBCTR),(Starter, NTBBCTR,(QMBBCTR_collateralclause).nonlocals)));
} 
} 
else
{ 
 /* line 954: */
 /* line 955: */
if ((Starter.Fn==JBAACTR_forfn)|(Starter.Fn==KBAACTR_forallfn))
{ 
OTBBCTR_valuelist = (*NL(KIBBCTR_valuestack));
 /* line 957: */
 /* line 958: */
PTBBCTR = Starter.Resultmode;
for ( QTBBCTR = 1;
QTBBCTR <= PTBBCTR;
QTBBCTR += 1 )
{ 
 /* line 959: */
(void)((*NL(KIBBCTR_valuestack)) = (*(&((*NL(KIBBCTR_valuestack))->Rest))));
}
 /* line 961: */
 /* line 962: */
RTBBCTR.Value.Mode = UEAACTR_voidmode;
RTBBCTR.Value.Info = PKJACTR_defaultinfo;
RTBBCTR.Value.Extra = A_EMPTY(STBBCTR,3);
RTBBCTR.Rest = (*NL(KIBBCTR_valuestack));
(void)((*NL(KIBBCTR_valuestack)) = YSBBCTR_assignment(Newvalue, RTBBCTR));
 /* line 964: */
 /* line 965: */
 /* line 966: */
if (Starter.Fn==JBAACTR_forfn)
{ 
 /* line 967: */
TTBBCTR = UQBBCTR_loopclause;
} 
else
{ 
TTBBCTR = SRBBCTR_forallclause;
} 
 /* line 968: */
 /* line 969: */
UTBBCTR.Value = (&((*NL(KIBBCTR_valuestack))->Value));
UTBBCTR.End = (&QSBBCTR_endofclause);
UTBBCTR.Type = ELJACTR_voidresult;
 /* line 971: */
 /* line 973: */
 /* line 974: */
(void)(A_CALLPROC(TTBBCTR,(Starter, Body, UTBBCTR, (&OTBBCTR_valuelist)),(Starter, Body, UTBBCTR, (&OTBBCTR_valuelist),(TTBBCTR).nonlocals)));
} 
else
{ 
 /* line 975: */
 /* line 976: */
if ((Starter.Mode>0)&(!Body))
{ 
VTBBCTR = Starter.Resultmode ;
WTBBCTR_resultmode = A_ABS(VTBBCTR);
 /* line 978: */
 /* line 979: */
XTBBCTR.Value.Mode = WTBBCTR_resultmode;
XTBBCTR.Value.Info = PKJACTR_defaultinfo;
XTBBCTR.Value.Extra = A_EMPTY(YTBBCTR,3);
XTBBCTR.Rest = (*NL(KIBBCTR_valuestack));
(void)((*NL(KIBBCTR_valuestack)) = YSBBCTR_assignment(Newvalue, XTBBCTR));
 /* line 981: */
 /* line 982: */
 /* line 983: */
 /* line 984: */
 /* line 985: */
ZTBBCTR.Value = (&((*NL(KIBBCTR_valuestack))->Value));
 /* line 987: */
ZTBBCTR.End = (&QSBBCTR_endofclause);
 /* line 988: */
ZTBBCTR.Type = FLJACTR_memoryresult;
 /* line 989: */
 /* line 990: */
(void)(A_CALLPROC(NJBBCTR_choiceclause,(Starter, Body, ZTBBCTR),(Starter, Body, ZTBBCTR,(NJBBCTR_choiceclause).nonlocals)));
} 
else
{ 
(void)(WXIACTR_assert(BUBBCTR, (Answer.Type!=JLJACTR_optboolresult)));
 /* line 991: */
 /* line 992: */
 /* line 993: */
 /* line 994: */
 /* line 995: */
CUBBCTR.Value = Answer.Value;
 /* line 996: */
 /* line 997: */
if (Answer.End==(A68_55 *)A68_NIL)
{ 
 /* line 998: */
CUBBCTR.End = (&QSBBCTR_endofclause);
} 
else
{ 
 /* line 1000: */
CUBBCTR.End = Answer.End;
} 
 /* line 1001: */
DUBBCTR = Answer.Type ;
CUBBCTR.Type = A_ABS(DUBBCTR);
 /* line 1002: */
 /* line 1003: */
(void)(A_CALLPROC(NJBBCTR_choiceclause,(Starter, Body, CUBBCTR),(Starter, Body, CUBBCTR,(NJBBCTR_choiceclause).nonlocals)));
} 
} 
} 
} 
} 
A_PROC_EXIT(enclosedclause);
return;
} 
#undef NL

A_STATIC A68_VOID  GUBBCTR_optboolexpression(A68_INT  Warn, void *NonLocals)
#define NL(x) (((HUBBCTR_optboolexpression *)NonLocals)->x)
{ 
A68_64 * IUBBCTR_operand A_UNUSED = {0};
A68_BOOL  JUBBCTR_orel A_UNUSED = {0};
A68_63  KUBBCTR;  /* collateral clause result */
A_PROC_ENTRY(optboolexpression);
 /* line 1009: */
 /* line 1010: */
{ 
IUBBCTR_operand = (&((*NL(KIBBCTR_valuestack))->Value));
 /* line 1011: */
JUBBCTR_orel = (Warn==KCAACTR_orelwarn);
 /* line 1012: */
(void)(PSZACTR_optboolwarning(JUBBCTR_orel, IUBBCTR_operand));
 /* line 1014: */
 /* line 1015: */
 /* line 1016: */
KUBBCTR.Value = IUBBCTR_operand;
KUBBCTR.End = (A68_55 *)A68_NIL;
KUBBCTR.Type = KLJACTR_noparticularresult;
 /* line 1017: */
 /* line 1018: */
(void)(A_CALLPROC(NL(HIBBCTR_phrase),(A68_FALSE, KUBBCTR, A68_FALSE),(A68_FALSE, KUBBCTR, A68_FALSE,(NL(HIBBCTR_phrase)).nonlocals)));
 /* line 1019: */
 /* line 1020: */
(void)(IUZACTR_optbooloper());
} 
A_PROC_EXIT(optboolexpression);
return;
} 
#undef NL

A_STATIC A68_VOID  PEBBCTR_skiproutine(void *NonLocals)
#define NL(x) (((QEBBCTR_skiproutine *)NonLocals)->x)
{ 
A68_180  REBBCTR;  /* united object - for case conformity */
A68_BOOL  SEBBCTR;  /* clause result */
A68_189  TEBBCTR_t A_UNUSED = {0};
A68_BOOL  UEBBCTR;  /* clause result */
A_PROC_ENTRY(skiproutine);
for ( ;; )
{ 
(void)(A_CALLPROC(NL(TDBBCTR_read),(),((NL(TDBBCTR_read)).nonlocals)));
 /* line 133: */
 /* line 134: */
REBBCTR = (*NL(PDBBCTR_currentimperative)) ;
switch ( REBBCTR.mode )
{ 
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
{ 
(void)(A_CALLPROC(NL(OEBBCTR_skiproutine),(),((NL(OEBBCTR_skiproutine)).nonlocals)));
 /* line 135: */
SEBBCTR = A68_TRUE;
} 
break;
case 22: /* STRUCT(INT,BITS)  */
TEBBCTR_t = (REBBCTR.data.mode22);
 /* line 136: */
SEBBCTR = (TEBBCTR_t.Fn!=GCAACTR_routinendfn);
break;
default: 
 /* line 137: */
 /* line 138: */
SEBBCTR = A68_TRUE;
break;
} 
 /* line 140: */
UEBBCTR = SEBBCTR;
if ( !UEBBCTR ) break;
/*SKIP*/;
}
A_PROC_EXIT(skiproutine);
return;
} 
#undef NL

A_STATIC A68_VOID  XEBBCTR_routine(A68_122  Routine, void *NonLocals)
#define NL(x) (((YEBBCTR_routine *)NonLocals)->x)
{ 
A68_INT  AFBBCTR;  /* YIELD */
A68_123  ZEBBCTR_environ A_UNUSED = {0};
A68_180  BFBBCTR;  /* united object - for case conformity */
A68_164  CFBBCTR_label A_UNUSED = {0};
A68_123  DFBBCTR;  /* avoid structure result */
A68_123  EFBBCTR_labelenviron A_UNUSED = {0};
A68_BOOL  FFBBCTR;  /* clause result */
A68_122  GFBBCTR_r A_UNUSED = {0};
A68_BOOL  LFBBCTR;  /* clause result */
A68_INT  MFBBCTR_resulttype A_UNUSED = {0};
A68_64  NFBBCTR_result A_UNUSED = {0};
A68_55 * OFBBCTR_endofroutine A_UNUSED = {0};
A68_199  PFBBCTR;  /* avoid structure result */
A68_199  QFBBCTR_proc A_UNUSED = {0};
A68_INT  RFBBCTR_paramcount A_UNUSED = {0};
A68_272  TFBBCTR_generator;   /* proc value of non-global proc */
A68_124  YFBBCTR;  /* avoid structure result */
A68_124  ZFBBCTR_nulllist A_UNUSED = {0};
A68_124  AGBBCTR_parammodes A_UNUSED = {0};
A68_124  BGBBCTR_paramdecnos A_UNUSED = {0};
A68_124  CGBBCTR;  /* avoid structure result */
A68_272  EGBBCTR_generator;   /* proc value of non-global proc */
A68_124  JGBBCTR;  /* avoid structure result */
A68_INT  KGBBCTR_i A_UNUSED = {0};
A68_INT  LGBBCTR;  /* to part of loop */
A68_180  MGBBCTR;  /* united object - for case conformity */
A68_156  NGBBCTR_id A_UNUSED = {0};
A68_INT * SGBBCTR;  /* YIELD */
A68_63  VGBBCTR;  /* collateral clause result */
A68_BITS  WGBBCTR;  /* ADICOPS - >= */
A_PROC_ENTRY(routine);
 /* line 147: */
 /* line 148: */
{ 
AFBBCTR = Routine.Maxname ;
ZEBBCTR_environ = (*(&((&A_R1INDEX(WPKACTR_ids,AFBBCTR))->Environ)));
 /* line 150: */
for ( ;; )
{ 
(void)(A_CALLPROC(NL(ZDBBCTR_lookahead),(),((NL(ZDBBCTR_lookahead)).nonlocals)));
 /* line 151: */
 /* line 152: */
BFBBCTR = (*NL(RDBBCTR_nextimperative)) ;
switch ( BFBBCTR.mode )
{ 
case 14: /* STRUCT(REF MODE26,INT,INT,BOOL)  */
CFBBCTR_label = (BFBBCTR.data.mode14);
 /* line 153: */
 /* line 154: */
{ 
(void)(XRWACTR_labdec(CFBBCTR_label));
 /* line 155: */
 /* line 156: */
OYWACTR_environoflabel( CFBBCTR_label.Labno, &DFBBCTR );
EFBBCTR_labelenviron = DFBBCTR;
 /* line 157: */
 /* line 158: */
if (TRLACTR_isnewerthan(EFBBCTR_labelenviron, ZEBBCTR_environ))
{ 
 /* line 159: */
ZEBBCTR_environ = EFBBCTR_labelenviron;
} 
 /* line 160: */
(void)(A_CALLPROC(NL(TDBBCTR_read),(),((NL(TDBBCTR_read)).nonlocals)));
 /* line 161: */
 /* line 163: */
FFBBCTR = A68_TRUE;
} 
break;
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
GFBBCTR_r = (BFBBCTR.data.mode12);
 /* line 164: */
 /* line 165: */
 /* line 167: */
if (IOMACTR_modetype(Routine.Mode)==GEAACTR_procp)
{ 
(void)(WXIACTR_assert(KFBBCTR, A_VC_EQ(GFBBCTR_r.Name,JFBBCTR)));
 /* line 168: */
(void)(A_CALLPROC(NL(TDBBCTR_read),(),((NL(TDBBCTR_read)).nonlocals)));
 /* line 169: */
(void)(A_CALLPROC(NL(OEBBCTR_skiproutine),(),((NL(OEBBCTR_skiproutine)).nonlocals)));
 /* line 170: */
 /* line 171: */
FFBBCTR = A68_TRUE;
} 
else
{ 
 /* line 172: */
 /* line 173: */
FFBBCTR = A68_FALSE;
} 
break;
default: 
 /* line 174: */
 /* line 175: */
FFBBCTR = A68_FALSE;
break;
} 
 /* line 177: */
LFBBCTR = FFBBCTR;
if ( !LFBBCTR ) break;
/*SKIP*/;
}
 /* line 179: */
MFBBCTR_resulttype = HLJACTR_routineresult;
 /* line 180: */
 /* line 181: */
 /* line 183: */
(void)(YRLACTR_startnewlevel(Routine.Rdenno));
 /* line 185: */
STMACTR_procinfo( Routine.Mode, &PFBBCTR );
QFBBCTR_proc = PFBBCTR;
 /* line 186: */
RFBBCTR_paramcount = QFBBCTR_proc.Parameters;
 /* line 187: */
A_CLOSURE( TFBBCTR_generator, UFBBCTR_generator, VFBBCTR_generator );
A_CALLPROC(TFBBCTR_generator,(A68_FALSE, &YFBBCTR),(A68_FALSE, &YFBBCTR,(TFBBCTR_generator).nonlocals));
ZFBBCTR_nulllist = YFBBCTR;
 /* line 188: */
 /* line 189: */
 /* line 191: */
 /* line 192: */
 /* line 193: */
if (RFBBCTR_paramcount>0)
{ 
A_CALLPROC(AWMACTR_parameters,(Routine.Mode, &CGBBCTR),(Routine.Mode, &CGBBCTR,(AWMACTR_parameters).nonlocals));
AGBBCTR_parammodes = CGBBCTR;
 /* line 194: */
A_CLOSURE( EGBBCTR_generator, FGBBCTR_generator, GGBBCTR_generator );
(( GGBBCTR_generator * ) ( EGBBCTR_generator.nonlocals )) -> RFBBCTR_paramcount = RFBBCTR_paramcount;
A_CALLPROC(EGBBCTR_generator,(A68_FALSE, &JGBBCTR),(A68_FALSE, &JGBBCTR,(EGBBCTR_generator).nonlocals));
BGBBCTR_paramdecnos = JGBBCTR;
 /* line 195: */
 /* line 196: */
LGBBCTR = RFBBCTR_paramcount;
for ( KGBBCTR_i = 1;
KGBBCTR_i <= LGBBCTR;
KGBBCTR_i += 1 )
{ 
 /* line 197: */
(void)(A_CALLPROC(NL(TDBBCTR_read),(),((NL(TDBBCTR_read)).nonlocals)));
 /* line 198: */
 /* line 199: */
MGBBCTR = (*NL(PDBBCTR_currentimperative)) ;
switch ( MGBBCTR.mode )
{ 
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
NGBBCTR_id = (MGBBCTR.data.mode11);
 /* line 200: */
 /* line 201: */
{ 
 /* line 202: */
(void)(WXIACTR_assert(PGBBCTR, (NGBBCTR_id.Type==3)));
 /* line 203: */
 /* line 204: */
(void)(WXIACTR_assert(RGBBCTR, (HCNACTR_finddeflexmode(NGBBCTR_id.Mode)==HCNACTR_finddeflexmode((*(&A_VINDEX(AGBBCTR_parammodes,KGBBCTR_i)))))));
 /* line 205: */
SGBBCTR = (&A_VINDEX(BGBBCTR_paramdecnos,KGBBCTR_i)) ;
(*SGBBCTR) = NGBBCTR_id.Decno;
 /* line 206: */
 /* line 207: */
 /* line 208: */
 /* line 210: */
(void)(JWVACTR_iddec(NGBBCTR_id, (A68_71 **)A68_NIL));
} 
break;
default: 
 /* line 211: */
 /* line 212: */
(void)(WXIACTR_assert(UGBBCTR, A68_FALSE));
break;
} 
}
 /* line 213: */
 /* line 214: */
} 
else
{ 
 /* line 215: */
BGBBCTR_paramdecnos = ZFBBCTR_nulllist;
} 
 /* line 217: */
 /* line 218: */
 /* line 219: */
 /* line 220: */
 /* line 221: */
 /* line 223: */
(void)(BPYACTR_startroutine(Routine, ZEBBCTR_environ, BGBBCTR_paramdecnos, QFBBCTR_proc.Result, (&NFBBCTR_result)));
 /* line 228: */
 /* line 229: */
 /* line 230: */
VGBBCTR.Value = (&NFBBCTR_result);
VGBBCTR.End = OFBBCTR_endofroutine;
VGBBCTR.Type = MFBBCTR_resulttype;
 /* line 231: */
 /* line 232: */
WGBBCTR = Routine.Props ;
(void)(A_CALLPROC((*NL(NEBBCTR_phrase_)),(A_LB_GE(WGBBCTR,NCAACTR_ccbit), VGBBCTR, A68_FALSE),(A_LB_GE(WGBBCTR,NCAACTR_ccbit), VGBBCTR, A68_FALSE,((*NL(NEBBCTR_phrase_))).nonlocals)));
 /* line 235: */
(void)(UPYACTR_endroutine(Routine, (&NFBBCTR_result)));
 /* line 236: */
 /* line 237: */
(void)(A_CALLPROC(BSLACTR_reverttopreviouslevel,(),((BSLACTR_reverttopreviouslevel).nonlocals)));
} 
A_PROC_EXIT(routine);
return;
} 
#undef NL

A_STATIC A68_VOID  AHBBCTR_serialclause(A68_59  Properties, A68_63  Answer, void *NonLocals)
#define NL(x) (((BHBBCTR_serialclause *)NonLocals)->x)
{ 
A68_55 * CHBBCTR_endofseries A_UNUSED = {0};
A68_BOOL  DHBBCTR_discardlevelactivated A_UNUSED = {0};
A68_BOOL  EHBBCTR_firstexit A_UNUSED = {0};
A68_63  FHBBCTR;  /* collateral clause result */
A68_63  GHBBCTR_seriesanswer A_UNUSED = {0};
A68_180  HHBBCTR;  /* united object - for case conformity */
A68_187  IHBBCTR_s A_UNUSED = {0};
A68_BITS  JHBBCTR;  /* ADICOPS - >= */
A68_BOOL  KHBBCTR_dontpullbitset A_UNUSED = {0};
A68_BOOL  LHBBCTR;  /* clause result */
A68_189  OHBBCTR_t A_UNUSED = {0};
A68_59  PHBBCTR;  /* collateral clause result */
A68_BITS  QHBBCTR;  /* ADICOPS - >= */
A68_BOOL  RHBBCTR;  /* clause result */
A_PROC_ENTRY(serialclause);
 /* line 246: */
 /* line 247: */
{ 
CHBBCTR_endofseries = Answer.End;
 /* line 248: */
DHBBCTR_discardlevelactivated = A68_FALSE;
 /* line 249: */
EHBBCTR_firstexit = A68_TRUE;
 /* line 251: */
 /* line 252: */
 /* line 253: */
 /* line 255: */
(void)(A_CALLPROC(OUZACTR_startseries,(Properties, (&CHBBCTR_endofseries), (&DHBBCTR_discardlevelactivated)),(Properties, (&CHBBCTR_endofseries), (&DHBBCTR_discardlevelactivated),(OUZACTR_startseries).nonlocals)));
 /* line 257: */
 /* line 258: */
FHBBCTR.Value = Answer.Value;
FHBBCTR.End = CHBBCTR_endofseries;
FHBBCTR.Type = Answer.Type;
GHBBCTR_seriesanswer = FHBBCTR;
 /* line 260: */
for ( ;; )
{ 
(void)(A_CALLPROC((*NL(NEBBCTR_phrase_)),(A68_FALSE, GHBBCTR_seriesanswer, A68_FALSE),(A68_FALSE, GHBBCTR_seriesanswer, A68_FALSE,((*NL(NEBBCTR_phrase_))).nonlocals)));
 /* line 262: */
 /* line 263: */
HHBBCTR = (*NL(PDBBCTR_currentimperative)) ;
switch ( HHBBCTR.mode )
{ 
case 20: /* STRUCT(INT,INT,BITS,INT)  */
IHBBCTR_s = (HHBBCTR.data.mode20);
 /* line 264: */
 /* line 266: */
{ 
JHBBCTR = IHBBCTR_s.Props ;
KHBBCTR_dontpullbitset = A_LB_GE(JHBBCTR,BDAACTR_dontpullbit);
 /* line 267: */
 /* line 268: */
 /* line 269: */
if (IHBBCTR_s.Fn==WBAACTR_semifn)
{ 
 /* line 271: */
(void)(ZUZACTR_semi(((A68_BITS )(IHBBCTR_s.Props&MDAACTR_dybits)!=0X0U), KHBBCTR_dontpullbitset));
 /* line 272: */
 /* line 273: */
LHBBCTR = A68_TRUE;
} 
else
{ 
 /* line 274: */
 /* line 275: */
if (IHBBCTR_s.Fn==RBAACTR_exitfn)
{ 
(void)(WXIACTR_assert(NHBBCTR, (Answer.End!=(A68_55 *)A68_NIL)));
 /* line 276: */
 /* line 277: */
 /* line 278: */
 /* line 280: */
(void)(DVZACTR_exit(KHBBCTR_dontpullbitset, EHBBCTR_firstexit, GHBBCTR_seriesanswer));
 /* line 281: */
EHBBCTR_firstexit = A68_FALSE;
 /* line 282: */
 /* line 283: */
 /* line 284: */
LHBBCTR = A68_TRUE;
} 
else
{ 
 /* line 285: */
 /* line 286: */
 /* line 287: */
 /* line 288: */
 /* line 290: */
(void)(WUZACTR_endseries(Properties, Answer, CHBBCTR_endofseries, DHBBCTR_discardlevelactivated, KHBBCTR_dontpullbitset, (!EHBBCTR_firstexit)));
 /* line 291: */
 /* line 292: */
 /* line 293: */
 /* line 295: */
LHBBCTR = A68_FALSE;
} 
} 
} 
break;
case 22: /* STRUCT(INT,BITS)  */
OHBBCTR_t = (HHBBCTR.data.mode22);
 /* line 296: */
 /* line 298: */
{ 
 /* line 299: */
PHBBCTR.Block = Properties.Block;
 /* line 300: */
PHBBCTR.Dynamicresult = Properties.Dynamicresult;
 /* line 301: */
PHBBCTR.Discardeddynamicresult = Properties.Discardeddynamicresult;
 /* line 302: */
PHBBCTR.Type = (OHBBCTR_t.Fn+ZBAACTR_terminatoroffset);
 /* line 303: */
 /* line 304: */
 /* line 305: */
 /* line 306: */
 /* line 308: */
QHBBCTR = ~OHBBCTR_t.Props ;
(void)(WUZACTR_endseries(PHBBCTR, Answer, CHBBCTR_endofseries, DHBBCTR_discardlevelactivated, A_LB_GE(QHBBCTR,BDAACTR_dontpullbit), (!EHBBCTR_firstexit)));
 /* line 309: */
 /* line 310: */
 /* line 311: */
 /* line 312: */
LHBBCTR = A68_FALSE;
} 
break;
default: 
(void)(SXIACTR_terminalerror(656));
 /* line 313: */
 /* line 314: */
 /* line 315: */
LHBBCTR = A68_FALSE;
break;
} 
 /* line 317: */
RHBBCTR = LHBBCTR;
if ( !RHBBCTR ) break;
/*SKIP*/;
}
 /* line 318: */
} 
A_PROC_EXIT(serialclause);
return;
} 
#undef NL

A_STATIC A68_VOID  UHBBCTR_enquiryclause(A68_63  Answer, void *NonLocals)
#define NL(x) (((VHBBCTR_enquiryclause *)NonLocals)->x)
{ 
A68_BOOL  WHBBCTR_simple A_UNUSED = {0};
A68_180  XHBBCTR;  /* united object - for case conformity */
A68_187  YHBBCTR_s A_UNUSED = {0};
A68_BITS  ZHBBCTR;  /* ADICOPS - >= */
A68_BOOL  AIBBCTR;  /* clause result */
A68_BOOL  DIBBCTR;  /* clause result */
A_PROC_ENTRY(enquiryclause);
 /* line 330: */
 /* line 331: */
{ 
WHBBCTR_simple = A68_TRUE;
 /* line 332: */
for ( ;; )
{ 
(void)(A_CALLPROC((*NL(NEBBCTR_phrase_)),(A68_FALSE, Answer, WHBBCTR_simple),(A68_FALSE, Answer, WHBBCTR_simple,((*NL(NEBBCTR_phrase_))).nonlocals)));
 /* line 333: */
 /* line 334: */
XHBBCTR = (*NL(PDBBCTR_currentimperative)) ;
switch ( XHBBCTR.mode )
{ 
case 20: /* STRUCT(INT,INT,BITS,INT)  */
YHBBCTR_s = (XHBBCTR.data.mode20);
 /* line 335: */
 /* line 336: */
 /* line 337: */
if (YHBBCTR_s.Fn==WBAACTR_semifn)
{ 
 /* line 338: */
 /* line 339: */
ZHBBCTR = YHBBCTR_s.Props ;
(void)(ZUZACTR_semi(((A68_BITS )(YHBBCTR_s.Props&MDAACTR_dybits)!=0X0U), A_LB_GE(ZHBBCTR,BDAACTR_dontpullbit)));
 /* line 340: */
 /* line 341: */
 /* line 342: */
AIBBCTR = A68_TRUE;
} 
else
{ 
(void)(WXIACTR_assert(CIBBCTR, (YHBBCTR_s.Fn!=RBAACTR_exitfn)));
 /* line 343: */
 /* line 344: */
 /* line 345: */
AIBBCTR = A68_FALSE;
} 
break;
default: 
 /* line 346: */
 /* line 347: */
AIBBCTR = A68_FALSE;
break;
} 
 /* line 348: */
DIBBCTR = AIBBCTR;
if ( !DIBBCTR ) break;
WHBBCTR_simple = A68_FALSE;
 /* line 349: */
 /* line 350: */
/*SKIP*/;
}
 /* line 351: */
} 
A_PROC_EXIT(enquiryclause);
return;
} 
#undef NL

A_STATIC A68_VOID  IIBBCTR_phrase(A68_BOOL  Body, A68_63  Answer, A68_BOOL  Simple, void *NonLocals)
#define NL(x) (((JIBBCTR_phrase *)NonLocals)->x)
{ 
A68_71 * KIBBCTR_valuestack A_UNUSED = {0};
A68_280  PIBBCTR_enclosedclause;   /* proc value of non-global proc */
A68_77  FUBBCTR_optboolexpression;   /* proc value of non-global proc */
A68_BOOL  LUBBCTR_simpleenquiry A_UNUSED = {0};
A68_180  MUBBCTR;  /* united object - for case conformity */
A68_191  NUBBCTR_p A_UNUSED = {0};
A68_191  OUBBCTR;  /* united object - for case conformity */
A68_190  PUBBCTR_l A_UNUSED = {0};
A68_71  QUBBCTR;  /* collateral clause result */
A68_64  RUBBCTR;  /* avoid structure result */
A68_184  SUBBCTR_op A_UNUSED = {0};
A68_156  TUBBCTR_id A_UNUSED = {0};
A68_172  UUBBCTR_c A_UNUSED = {0};
A68_71 * VUBBCTR_visible A_UNUSED = {0};
A68_INT  WUBBCTR_i A_UNUSED = {0};
A68_INT  XUBBCTR;  /* to part of loop */
A68_71  YUBBCTR;  /* collateral clause result */
A68_68  ZUBBCTR;  /* avoid structure result */
A68_68  AVBBCTR_temp A_UNUSED = {0};
A68_71  BVBBCTR;  /* collateral clause result */
A68_65  CVBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_177  DVBBCTR_format A_UNUSED = {0};
A68_71  EVBBCTR;  /* collateral clause result */
A68_183  FVBBCTR;  /* collateral clause result */
A68_190  GVBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_64  HVBBCTR;  /* avoid structure result */
A68_71  IVBBCTR;  /* collateral clause result */
A68_182  JVBBCTR;  /* collateral clause result */
A68_190  KVBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_64  LVBBCTR;  /* avoid structure result */
A68_184  MVBBCTR;  /* collateral clause result */
A68_122  NVBBCTR_r A_UNUSED = {0};
A68_122  OVBBCTR_savedr A_UNUSED = {0};
A68_BITS  PVBBCTR;  /* ADICOPS - >= */
A68_71  QVBBCTR;  /* collateral clause result */
A68_190  RVBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  SVBBCTR;  /* YIELD */
A68_64  TVBBCTR;  /* avoid structure result */
A68_185  UVBBCTR_w A_UNUSED = {0};
A68_164  VVBBCTR_l A_UNUSED = {0};
A68_79  WVBBCTR_u A_UNUSED = {0};
A68_169  XVBBCTR_c A_UNUSED = {0};
A68_BOOL  AWBBCTR;  /* clause result */
A68_187  BWBBCTR_s A_UNUSED = {0};
A68_BOOL  EWBBCTR;  /* optbool result */
A68_188  FWBBCTR_s A_UNUSED = {0};
A68_BOOL  IWBBCTR;  /* clause result */
A_PROC_ENTRY(phrase);
 /* line 364: */
 /* line 365: */
{ 
KIBBCTR_valuestack = (A68_71 *)A68_NIL;
 /* line 367: */
 /* line 368: */
A_CLOSURE( PIBBCTR_enclosedclause, QIBBCTR_enclosedclause, RIBBCTR_enclosedclause );
(( RIBBCTR_enclosedclause * ) ( PIBBCTR_enclosedclause.nonlocals )) -> ZGBBCTR_serialclause = NL(ZGBBCTR_serialclause);
(( RIBBCTR_enclosedclause * ) ( PIBBCTR_enclosedclause.nonlocals )) -> TDBBCTR_read = NL(TDBBCTR_read);
(( RIBBCTR_enclosedclause * ) ( PIBBCTR_enclosedclause.nonlocals )) -> PDBBCTR_currentimperative = NL(PDBBCTR_currentimperative);
(( RIBBCTR_enclosedclause * ) ( PIBBCTR_enclosedclause.nonlocals )) -> THBBCTR_enquiryclause = NL(THBBCTR_enquiryclause);
(( RIBBCTR_enclosedclause * ) ( PIBBCTR_enclosedclause.nonlocals )) -> HIBBCTR_phrase = NL(HIBBCTR_phrase);
(( RIBBCTR_enclosedclause * ) ( PIBBCTR_enclosedclause.nonlocals )) -> KIBBCTR_valuestack = (&KIBBCTR_valuestack);
 /* line 1005: */
A_CLOSURE( FUBBCTR_optboolexpression, GUBBCTR_optboolexpression, HUBBCTR_optboolexpression );
(( HUBBCTR_optboolexpression * ) ( FUBBCTR_optboolexpression.nonlocals )) -> KIBBCTR_valuestack = (&KIBBCTR_valuestack);
(( HUBBCTR_optboolexpression * ) ( FUBBCTR_optboolexpression.nonlocals )) -> HIBBCTR_phrase = NL(HIBBCTR_phrase);
 /* line 1024: */
LUBBCTR_simpleenquiry = Simple;
 /* line 1025: */
for ( ;; )
{ 
(void)(A_CALLPROC(NL(TDBBCTR_read),(),((NL(TDBBCTR_read)).nonlocals)));
 /* line 1026: */
 /* line 1027: */
MUBBCTR = (*NL(PDBBCTR_currentimperative)) ;
switch ( MUBBCTR.mode )
{ 
case 1: /* STRUCT(INT)  */
case 2: /* INT */
case 3: /* BOOL */
case 4: /* STRUCT(REF MODE26)  */
case 5: /* STRUCT(INT)  */
case 6: /* STRUCT(INT,REF MODE26)  */
case 7: /* STRUCT(INT,REF MODE26)  */
case 8: /* STRUCT(INT,LONG BITS)  */
case 9: /* STRUCT(INT,REF MODE26)  */
case 10: /* STRUCT(INT,INT,INT)  */
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
case 13: /* STRUCT(INT)  */
case 14: /* STRUCT(REF MODE26,INT,INT,BOOL)  */
case 15: /* STRUCT(INT,BITS,INT)  */
case 16: /* STRUCT(INT)  */
case 17: /* STRUCT(BOOL)  */
case 18: /* STRUCT(MODE178,REF MODE26)  */
case 19: /* STRUCT(INT,INT,REF MODE26)  */
A_UNCPY(NUBBCTR_p,MUBBCTR);
 /* line 1028: */
{ 
 /* line 1029: */
OUBBCTR = NUBBCTR_p ;
switch ( OUBBCTR.mode )
{ 
case 1: /* STRUCT(INT)  */
case 2: /* INT */
case 3: /* BOOL */
case 4: /* STRUCT(REF MODE26)  */
case 5: /* STRUCT(INT)  */
case 6: /* STRUCT(INT,REF MODE26)  */
case 7: /* STRUCT(INT,REF MODE26)  */
case 8: /* STRUCT(INT,LONG BITS)  */
case 9: /* STRUCT(INT,REF MODE26)  */
A_UNCPY(PUBBCTR_l,OUBBCTR);
 /* line 1030: */
 /* line 1031: */
RAABCTR_load( PUBBCTR_l, &RUBBCTR );
QUBBCTR.Value = RUBBCTR;
QUBBCTR.Rest = KIBBCTR_valuestack;
 /* line 1032: */
(void)(KIBBCTR_valuestack = YSBBCTR_assignment(A_LOC(A68_71 ), QUBBCTR));
break;
case 10: /* STRUCT(INT,INT,INT)  */
SUBBCTR_op = (OUBBCTR.data.mode10);
 /* line 1033: */
 /* line 1034: */
(void)(ASQACTR_oper(SUBBCTR_op, (&KIBBCTR_valuestack), A_LOC(A68_71 )));
break;
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
TUBBCTR_id = (OUBBCTR.data.mode11);
 /* line 1035: */
 /* line 1037: */
(void)(JWVACTR_iddec(TUBBCTR_id, (&KIBBCTR_valuestack)));
break;
case 19: /* STRUCT(INT,INT,REF MODE26)  */
UUBBCTR_c = (OUBBCTR.data.mode19);
 /* line 1038: */
 /* line 1039: */
{ 
VUBBCTR_visible = MKJACTR_nilvaluelist;
 /* line 1040: */
 /* line 1041: */
XUBBCTR = UUBBCTR_c.Number;
for ( WUBBCTR_i = 1;
WUBBCTR_i <= XUBBCTR;
WUBBCTR_i += 1 )
{ 
 /* line 1042: */
YUBBCTR.Value = (*(&(KIBBCTR_valuestack->Value)));
YUBBCTR.Rest = VUBBCTR_visible;
(void)(VUBBCTR_visible = YSBBCTR_assignment(A_LOC(A68_71 ), YUBBCTR));
 /* line 1043: */
 /* line 1044: */
(void)(KIBBCTR_valuestack = (*(&(KIBBCTR_valuestack->Rest))));
}
 /* line 1045: */
 /* line 1046: */
WVZACTR_codeinsert( UUBBCTR_c.Insert, UUBBCTR_c.Mode, VUBBCTR_visible, &ZUBBCTR );
AVBBCTR_temp = ZUBBCTR;
 /* line 1047: */
 /* line 1048: */
if (UUBBCTR_c.Mode!=UEAACTR_voidmode)
{ 
 /* line 1049: */
BVBBCTR.Value.Mode = UUBBCTR_c.Mode;
BVBBCTR.Value.Info = PKJACTR_defaultinfo;
BVBBCTR.Value.Extra = A_UNITE(CVBBCTR,mode5,5,AVBBCTR_temp);
 /* line 1050: */
BVBBCTR.Rest = KIBBCTR_valuestack;
 /* line 1051: */
 /* line 1052: */
(void)(KIBBCTR_valuestack = YSBBCTR_assignment(A_LOC(A68_71 ), BVBBCTR));
} 
} 
break;
case 18: /* STRUCT(MODE178,REF MODE26)  */
DVBBCTR_format = (OUBBCTR.data.mode18);
 /* line 1053: */
 /* line 1054: */
{ 
 /* line 1055: */
 /* line 1056: */
 /* line 1057: */
 /* line 1058: */
FVBBCTR.Mode = YEAACTR_formatmode;
 /* line 1059: */
FVBBCTR.Denotation = DVBBCTR_format.Text;
 /* line 1060: */
RAABCTR_load( A_UNITE(GVBBCTR,mode9,9,FVBBCTR), &HVBBCTR );
EVBBCTR.Value = HVBBCTR;
 /* line 1061: */
 /* line 1062: */
 /* line 1063: */
JVBBCTR.Mode = EFAACTR_intmode;
 /* line 1064: */
 /* line 1065: */
JVBBCTR.Denotation = (A68_LBITS )(A68_BITS )DVBBCTR_format.Info.W;
 /* line 1067: */
RAABCTR_load( A_UNITE(KVBBCTR,mode8,8,JVBBCTR), &LVBBCTR );
IVBBCTR.Value = LVBBCTR;
 /* line 1068: */
IVBBCTR.Rest = KIBBCTR_valuestack;
EVBBCTR.Rest = YSBBCTR_assignment(A_LOC(A68_71 ), IVBBCTR);
(void)(KIBBCTR_valuestack = YSBBCTR_assignment(A_LOC(A68_71 ), EVBBCTR));
 /* line 1070: */
 /* line 1071: */
 /* line 1072: */
 /* line 1073: */
MVBBCTR.Fn = QGAACTR_formatfn;
 /* line 1075: */
MVBBCTR.Mode = YEAACTR_formatmode;
MVBBCTR.Param = DVBBCTR_format.Info.Nocases;
 /* line 1076: */
 /* line 1078: */
 /* line 1079: */
 /* line 1081: */
(void)(ASQACTR_oper(MVBBCTR, (&KIBBCTR_valuestack), A_LOC(A68_71 )));
} 
break;
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
NVBBCTR_r = (OUBBCTR.data.mode12);
 /* line 1092: */
 /* line 1093: */
{ 
OVBBCTR_savedr = NVBBCTR_r;
 /* line 1094: */
(void)(A_CALLPROC(NL(WEBBCTR_routine),(NVBBCTR_r),(NVBBCTR_r,(NL(WEBBCTR_routine)).nonlocals)));
 /* line 1095: */
 /* line 1096: */
PVBBCTR = (*(&((&OVBBCTR_savedr)->Props))) ;
if (A_LB_GE(PVBBCTR,PCAACTR_valbit))
{ 
 /* line 1097: */
SVBBCTR = (*(&((&OVBBCTR_savedr)->Rdenno))) ;
RAABCTR_load( A_UNITE(RVBBCTR,mode2,2,SVBBCTR), &TVBBCTR );
QVBBCTR.Value = TVBBCTR;
 /* line 1098: */
QVBBCTR.Rest = KIBBCTR_valuestack;
 /* line 1099: */
 /* line 1101: */
(void)(KIBBCTR_valuestack = YSBBCTR_assignment(A_LOC(A68_71 ), QVBBCTR));
} 
} 
break;
case 13: /* STRUCT(INT)  */
UVBBCTR_w = (OUBBCTR.data.mode13);
 /* line 1102: */
 /* line 1103: */
 /* line 1104: */
if ((UVBBCTR_w.W==KCAACTR_orelwarn)|(UVBBCTR_w.W==JCAACTR_andthwarn))
{ 
 /* line 1105: */
 /* line 1107: */
(void)(A_CALLPROC(FUBBCTR_optboolexpression,(UVBBCTR_w.W),(UVBBCTR_w.W,(FUBBCTR_optboolexpression).nonlocals)));
} 
break;
case 14: /* STRUCT(REF MODE26,INT,INT,BOOL)  */
VVBBCTR_l = (OUBBCTR.data.mode14);
 /* line 1108: */
 /* line 1110: */
(void)(XRWACTR_labdec(VVBBCTR_l));
break;
case 15: /* STRUCT(INT,BITS,INT)  */
WVBBCTR_u = (OUBBCTR.data.mode15);
 /* line 1112: */
 /* line 1114: */
(void)(SXIACTR_terminalerror(670));
break;
case 16: /* STRUCT(INT)  */
XVBBCTR_c = (OUBBCTR.data.mode16);
 /* line 1115: */
 /* line 1117: */
(void)(WXIACTR_assert(ZVBBCTR, A68_FALSE));
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 1118: */
 /* line 1119: */
 /* line 1121: */
AWBBCTR = A68_TRUE;
} 
break;
case 20: /* STRUCT(INT,INT,BITS,INT)  */
BWBBCTR_s = (MUBBCTR.data.mode20);
 /* line 1122: */
{ 
 /* line 1123: */
 /* line 1124: */
if (KIBBCTR_valuestack!=MKJACTR_nilvaluelist)
{ 
(void)(WXIACTR_assert(DWBBCTR, ((*(&(KIBBCTR_valuestack->Rest)))==MKJACTR_nilvaluelist)));
 /* line 1125: */
 /* line 1126: */
if (BWBBCTR_s.Fn==WBAACTR_semifn)
{ 
 /* line 1127: */
(void)(ECZACTR_evaluatenoresult((&KIBBCTR_valuestack)));
} 
else
{ 
 /* line 1128: */
 /* line 1129: */
EWBBCTR = (Answer.Type==ILJACTR_enquiryresult);
if ( EWBBCTR )
{EWBBCTR = LUBBCTR_simpleenquiry;
}
 /* line 1130: */
if (EWBBCTR)
{ 
 /* line 1131: */
(void)(YFZACTR_evaluatesimpleenquiry((&KIBBCTR_valuestack), Answer));
} 
else
{ 
 /* line 1132: */
 /* line 1133: */
(void)(AEZACTR_evaluateresult((&KIBBCTR_valuestack), Answer));
} 
} 
} 
 /* line 1134: */
 /* line 1135: */
 /* line 1137: */
AWBBCTR = A68_FALSE;
} 
break;
case 22: /* STRUCT(INT,BITS)  */
 /* line 1138: */
{ 
 /* line 1139: */
if (KIBBCTR_valuestack!=MKJACTR_nilvaluelist)
{ 
 /* line 1140: */
(void)(AEZACTR_evaluateresult((&KIBBCTR_valuestack), Answer));
} 
 /* line 1141: */
 /* line 1142: */
 /* line 1144: */
AWBBCTR = A68_FALSE;
} 
break;
case 21: /* STRUCT(INT,INT,BITS,INT)  */
FWBBCTR_s = (MUBBCTR.data.mode21);
 /* line 1145: */
{ 
(void)(A_CALLPROC(PIBBCTR_enclosedclause,(FWBBCTR_s, Body, Answer, A_LOC(A68_71 )),(FWBBCTR_s, Body, Answer, A_LOC(A68_71 ),(PIBBCTR_enclosedclause).nonlocals)));
 /* line 1146: */
LUBBCTR_simpleenquiry = A68_FALSE;
 /* line 1147: */
 /* line 1148: */
 /* line 1150: */
AWBBCTR = A68_TRUE;
} 
break;
default: 
(void)(WXIACTR_assert(HWBBCTR, A68_FALSE));
 /* line 1151: */
 /* line 1152: */
 /* line 1153: */
AWBBCTR = A68_FALSE;
break;
} 
 /* line 1155: */
IWBBCTR = AWBBCTR;
if ( !IWBBCTR ) break;
/*SKIP*/;
}
 /* line 1157: */
} 
A_PROC_EXIT(phrase);
return;
} 
#undef NL

A_STATIC A68_VOID  UDBBCTR_read(void *NonLocals)
#define NL(x) (((VDBBCTR_read *)NonLocals)->x)
{ 
A68_180  WDBBCTR;  /* united object - for case conformity */
A68_180  XDBBCTR;  /* avoid structure result */
A68_180  YDBBCTR = {0};  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(read);
 /* line 75: */
WDBBCTR = (*NL(RDBBCTR_nextimperative)) ;
switch ( WDBBCTR.mode )
{ 
case 26: /* VOID */
 /* line 76: */
 /* line 77: */
A_CALLPROC(NL(Nextstreamimperative),( &XDBBCTR),( &XDBBCTR,(NL(Nextstreamimperative)).nonlocals));
(*NL(PDBBCTR_currentimperative)) = XDBBCTR;
break;
default: 
(void)((*NL(PDBBCTR_currentimperative)) = (*NL(RDBBCTR_nextimperative)));
 /* line 78: */
 /* line 79: */
(void)((*NL(RDBBCTR_nextimperative)) = A_EMPTY(YDBBCTR,26));
break;
} 
A_PROC_EXIT(read);
return;
} 
#undef NL

A_STATIC A68_VOID  AEBBCTR_lookahead(void *NonLocals)
#define NL(x) (((BEBBCTR_lookahead *)NonLocals)->x)
{ 
A68_180  CEBBCTR;  /* united object - for case conformity */
A68_180  DEBBCTR;  /* avoid structure result */
A_PROC_ENTRY(lookahead);
 /* line 89: */
CEBBCTR = (*NL(RDBBCTR_nextimperative)) ;
switch ( CEBBCTR.mode )
{ 
case 26: /* VOID */
 /* line 90: */
 /* line 91: */
A_CALLPROC(NL(Nextstreamimperative),( &DEBBCTR),( &DEBBCTR,(NL(Nextstreamimperative)).nonlocals));
(*NL(RDBBCTR_nextimperative)) = DEBBCTR;
break;
default: 
 /* line 92: */
(void)(SXIACTR_terminalerror(602));
break;
} 
A_PROC_EXIT(lookahead);
return;
} 
#undef NL

A_STATIC A68_VOID  EEBBCTR_compositionmodule(void)
{ 
A_PROC_ENTRY(compositionmodule);
(void)(WXIACTR_assert(GEBBCTR, A68_FALSE));
A_PROC_EXIT(compositionmodule);
return;
} 
#undef NL
 /* line 105: */
 /* line 106: */

A_STATIC A68_VOID  LEBBCTR_module(A68_VC  Modulename, A68_BOOL  Decsmodule, A68_BOOL  Prelude, void *NonLocals)
#define NL(x) (((MEBBCTR_module *)NonLocals)->x)
{ 
A68_268  NEBBCTR_phrase_ A_UNUSED = {0};
A68_75  OEBBCTR_skiproutine;   /* proc value of non-global proc */
A68_269  WEBBCTR_routine;   /* proc value of non-global proc */
A68_276  ZGBBCTR_serialclause;   /* proc value of non-global proc */
A68_278  THBBCTR_enquiryclause;   /* proc value of non-global proc */
A68_268  HIBBCTR_phrase;   /* proc value of non-global proc */
A68_55 * JWBBCTR_endofmodule A_UNUSED = {0};
A68_64 * KWBBCTR_result A_UNUSED = {0};
A68_59  LWBBCTR;  /* collateral clause result */
A68_59  MWBBCTR_properties A_UNUSED = {0};
A68_VC  NWBBCTR;  /* OPERATORS - istruct -> vector */
A68_56 * OWBBCTR;  /* OPERATORS - istruct -> vector */
A68_64  PWBBCTR;  /* collateral clause result */
A68_65  QWBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_63  RWBBCTR;  /* collateral clause result */
A68_180  SWBBCTR;  /* united object - for case conformity */
A68_156  TWBBCTR_id A_UNUSED = {0};
A68_180  UWBBCTR;  /* united object - for case conformity */
A68_122  VWBBCTR_r A_UNUSED = {0};
A68_BOOL  WWBBCTR;  /* clause result */
A68_VC  XWBBCTR;  /* avoid structure result */
A68_122  YWBBCTR_r A_UNUSED = {0};
A68_VC  ZWBBCTR;  /* avoid structure result */
A68_180  AXBBCTR;  /* united object - for case conformity */
A68_122  BXBBCTR_r A_UNUSED = {0};
A68_122  CXBBCTR;  /* clause result */
A68_122  FXBBCTR = {0};  /* OPERATORS - skip to mode */
A68_122  GXBBCTR_routine A_UNUSED = {0};
A68_180  HXBBCTR;  /* united object - for case conformity */
A68_122  IXBBCTR_r A_UNUSED = {0};
A68_BOOL  NXBBCTR;  /* clause result */
A68_BOOL  OXBBCTR;  /* clause result */
A68_VC  PXBBCTR;  /* OPERATORS - istruct -> vector */
A68_56 * QXBBCTR;  /* OPERATORS - istruct -> vector */
A68_63  RXBBCTR;  /* collateral clause result */
A68_BITS  SXBBCTR;  /* ADICOPS - >= */
A68_180  TXBBCTR;  /* united object - for case conformity */
A68_189  UXBBCTR_t A_UNUSED = {0};
A68_BOOL  VXBBCTR;  /* clause result */
A68_VC  WXBBCTR;  /* OPERATORS - istruct -> vector */
A68_56 * XXBBCTR;  /* OPERATORS - istruct -> vector */
A68_64  YXBBCTR;  /* collateral clause result */
A68_65  ZXBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_63  AYBBCTR;  /* collateral clause result */
A_PROC_ENTRY(module);
 /* line 122: */
 /* line 123: */
{ 
 /* line 128: */
 /* line 132: */
A_CLOSURE( OEBBCTR_skiproutine, PEBBCTR_skiproutine, QEBBCTR_skiproutine );
(( QEBBCTR_skiproutine * ) ( OEBBCTR_skiproutine.nonlocals )) -> TDBBCTR_read = NL(TDBBCTR_read);
(( QEBBCTR_skiproutine * ) ( OEBBCTR_skiproutine.nonlocals )) -> PDBBCTR_currentimperative = NL(PDBBCTR_currentimperative);
(( QEBBCTR_skiproutine * ) ( OEBBCTR_skiproutine.nonlocals )) -> OEBBCTR_skiproutine = OEBBCTR_skiproutine;
 /* line 142: */
A_CLOSURE( WEBBCTR_routine, XEBBCTR_routine, YEBBCTR_routine );
(( YEBBCTR_routine * ) ( WEBBCTR_routine.nonlocals )) -> ZDBBCTR_lookahead = NL(ZDBBCTR_lookahead);
(( YEBBCTR_routine * ) ( WEBBCTR_routine.nonlocals )) -> RDBBCTR_nextimperative = NL(RDBBCTR_nextimperative);
(( YEBBCTR_routine * ) ( WEBBCTR_routine.nonlocals )) -> TDBBCTR_read = NL(TDBBCTR_read);
(( YEBBCTR_routine * ) ( WEBBCTR_routine.nonlocals )) -> OEBBCTR_skiproutine = OEBBCTR_skiproutine;
(( YEBBCTR_routine * ) ( WEBBCTR_routine.nonlocals )) -> PDBBCTR_currentimperative = NL(PDBBCTR_currentimperative);
(( YEBBCTR_routine * ) ( WEBBCTR_routine.nonlocals )) -> NEBBCTR_phrase_ = (&NEBBCTR_phrase_);
 /* line 239: */
A_CLOSURE( ZGBBCTR_serialclause, AHBBCTR_serialclause, BHBBCTR_serialclause );
(( BHBBCTR_serialclause * ) ( ZGBBCTR_serialclause.nonlocals )) -> NEBBCTR_phrase_ = (&NEBBCTR_phrase_);
(( BHBBCTR_serialclause * ) ( ZGBBCTR_serialclause.nonlocals )) -> PDBBCTR_currentimperative = NL(PDBBCTR_currentimperative);
 /* line 320: */
A_CLOSURE( THBBCTR_enquiryclause, UHBBCTR_enquiryclause, VHBBCTR_enquiryclause );
(( VHBBCTR_enquiryclause * ) ( THBBCTR_enquiryclause.nonlocals )) -> NEBBCTR_phrase_ = (&NEBBCTR_phrase_);
(( VHBBCTR_enquiryclause * ) ( THBBCTR_enquiryclause.nonlocals )) -> PDBBCTR_currentimperative = NL(PDBBCTR_currentimperative);
 /* line 353: */
A_CLOSURE( HIBBCTR_phrase, IIBBCTR_phrase, JIBBCTR_phrase );
(( JIBBCTR_phrase * ) ( HIBBCTR_phrase.nonlocals )) -> ZGBBCTR_serialclause = ZGBBCTR_serialclause;
(( JIBBCTR_phrase * ) ( HIBBCTR_phrase.nonlocals )) -> TDBBCTR_read = NL(TDBBCTR_read);
(( JIBBCTR_phrase * ) ( HIBBCTR_phrase.nonlocals )) -> PDBBCTR_currentimperative = NL(PDBBCTR_currentimperative);
(( JIBBCTR_phrase * ) ( HIBBCTR_phrase.nonlocals )) -> THBBCTR_enquiryclause = THBBCTR_enquiryclause;
(( JIBBCTR_phrase * ) ( HIBBCTR_phrase.nonlocals )) -> HIBBCTR_phrase = HIBBCTR_phrase;
(( JIBBCTR_phrase * ) ( HIBBCTR_phrase.nonlocals )) -> WEBBCTR_routine = WEBBCTR_routine;
 /* line 1159: */
NEBBCTR_phrase_ = HIBBCTR_phrase;
 /* line 1164: */
 /* line 1165: */
 /* line 1167: */
(void)(A_CALLPROC(NL(ZDBBCTR_lookahead),(),((NL(ZDBBCTR_lookahead)).nonlocals)));
 /* line 1169: */
 /* line 1170: */
 /* line 1171: */
if (Decsmodule)
{ 
LWBBCTR.Block = A68_FALSE;
LWBBCTR.Dynamicresult = A68_FALSE;
LWBBCTR.Discardeddynamicresult = A68_TRUE;
LWBBCTR.Type = DBAACTR_decsfn;
MWBBCTR_properties = LWBBCTR;
 /* line 1173: */
OWBBCTR = (&((&OCPACTR_currentmodule)->Uname)) ;
(void)(DTYACTR_startdecsmodule(A_ISVEC(NWBBCTR,OWBBCTR,7,A68_CHAR ), Modulename));
 /* line 1175: */
PWBBCTR.Mode = UEAACTR_voidmode;
PWBBCTR.Info = PKJACTR_defaultinfo;
PWBBCTR.Extra = A_EMPTY(QWBBCTR,3);
(void)(KWBBCTR_result = TKBBCTR_assignment(A_LOC(A68_64 ), PWBBCTR));
 /* line 1177: */
 /* line 1178: */
RWBBCTR.Value = KWBBCTR_result;
RWBBCTR.End = JWBBCTR_endofmodule;
RWBBCTR.Type = ELJACTR_voidresult;
(void)(A_CALLPROC(ZGBBCTR_serialclause,(MWBBCTR_properties, RWBBCTR),(MWBBCTR_properties, RWBBCTR,(ZGBBCTR_serialclause).nonlocals)));
 /* line 1180: */
 /* line 1181: */
 /* line 1182: */
(void)(EWYACTR_enddecsmodule(Modulename));
} 
else
{ 
 /* line 1183: */
SWBBCTR = (*NL(RDBBCTR_nextimperative)) ;
switch ( SWBBCTR.mode )
{ 
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
TWBBCTR_id = (SWBBCTR.data.mode11);
 /* line 1184: */
{ 
(void)(CNVACTR_initialdummydec(TWBBCTR_id));
(void)(A_CALLPROC(NL(TDBBCTR_read),(),((NL(TDBBCTR_read)).nonlocals)));
(void)(A_CALLPROC(NL(ZDBBCTR_lookahead),(),((NL(ZDBBCTR_lookahead)).nonlocals)));
 /* line 1185: */
 /* line 1186: */
UWBBCTR = (*NL(RDBBCTR_nextimperative)) ;
switch ( UWBBCTR.mode )
{ 
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
VWBBCTR_r = (UWBBCTR.data.mode12);
 /* line 1187: */
KDHACTR_message( 59, &XWBBCTR );
WWBBCTR = A_VC_EQ(VWBBCTR_r.Name,XWBBCTR);
break;
default: 
 /* line 1188: */
 /* line 1189: */
 /* line 1190: */
WWBBCTR = A68_FALSE;
break;
} 
} 
break;
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
YWBBCTR_r = (SWBBCTR.data.mode12);
 /* line 1191: */
 /* line 1192: */
KDHACTR_message( 59, &ZWBBCTR );
WWBBCTR = A_VC_EQ(YWBBCTR_r.Name,ZWBBCTR);
break;
default: 
 /* line 1193: */
 /* line 1194: */
 /* line 1196: */
WWBBCTR = A68_FALSE;
break;
} 
if (WWBBCTR)
{ 
(void)(A_CALLPROC(NL(TDBBCTR_read),(),((NL(TDBBCTR_read)).nonlocals)));
 /* line 1197: */
 /* line 1198: */
 /* line 1199: */
AXBBCTR = (*NL(PDBBCTR_currentimperative)) ;
switch ( AXBBCTR.mode )
{ 
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
BXBBCTR_r = (AXBBCTR.data.mode12);
 /* line 1200: */
CXBBCTR = BXBBCTR_r;
break;
default: 
(void)(WXIACTR_assert(EXBBCTR, A68_FALSE));
 /* line 1201: */
CXBBCTR = FXBBCTR;
break;
} 
GXBBCTR_routine = CXBBCTR;
 /* line 1203: */
 /* line 1204: */
 /* line 1206: */
if (IOMACTR_modetype(GXBBCTR_routine.Mode)==GEAACTR_procp)
{ 
for ( ;; )
{ 
 /* line 1207: */
(void)(A_CALLPROC(NL(ZDBBCTR_lookahead),(),((NL(ZDBBCTR_lookahead)).nonlocals)));
 /* line 1208: */
 /* line 1209: */
 /* line 1210: */
HXBBCTR = (*NL(RDBBCTR_nextimperative)) ;
switch ( HXBBCTR.mode )
{ 
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
IXBBCTR_r = (HXBBCTR.data.mode12);
 /* line 1211: */
 /* line 1212: */
{ 
(void)(WXIACTR_assert(MXBBCTR, A_VC_EQ(IXBBCTR_r.Name,LXBBCTR)));
 /* line 1213: */
(void)(A_CALLPROC(NL(TDBBCTR_read),(),((NL(TDBBCTR_read)).nonlocals)));
 /* line 1214: */
(void)(A_CALLPROC(OEBBCTR_skiproutine,(),((OEBBCTR_skiproutine).nonlocals)));
 /* line 1215: */
 /* line 1216: */
 /* line 1217: */
NXBBCTR = A68_TRUE;
} 
break;
default: 
 /* line 1218: */
 /* line 1219: */
NXBBCTR = A68_FALSE;
break;
} 
 /* line 1221: */
OXBBCTR = NXBBCTR;
if ( !OXBBCTR ) break;
/*SKIP*/;
}
 /* line 1222: */
} 
 /* line 1224: */
 /* line 1225: */
 /* line 1226: */
 /* line 1227: */
 /* line 1229: */
QXBBCTR = (&((&OCPACTR_currentmodule)->Uname)) ;
(void)(ZUYACTR_startprocmodule(GXBBCTR_routine, A_ISVEC(PXBBCTR,QXBBCTR,7,A68_CHAR ), Modulename, KWBBCTR_result));
 /* line 1231: */
 /* line 1232: */
if (OTMACTR_dynamic((*(&(KWBBCTR_result->Mode)))))
{ 
 /* line 1233: */
(void)(PXIACTR_error(340));
} 
 /* line 1235: */
 /* line 1236: */
 /* line 1237: */
RXBBCTR.Value = KWBBCTR_result;
RXBBCTR.End = JWBBCTR_endofmodule;
RXBBCTR.Type = HLJACTR_routineresult;
 /* line 1238: */
 /* line 1239: */
SXBBCTR = GXBBCTR_routine.Props ;
(void)(A_CALLPROC(HIBBCTR_phrase,(A_LB_GE(SXBBCTR,NCAACTR_ccbit), RXBBCTR, A68_FALSE),(A_LB_GE(SXBBCTR,NCAACTR_ccbit), RXBBCTR, A68_FALSE,(HIBBCTR_phrase).nonlocals)));
 /* line 1240: */
(void)(EVYACTR_endmodule());
 /* line 1243: */
(void)(A_CALLPROC(NL(TDBBCTR_read),(),((NL(TDBBCTR_read)).nonlocals)));
 /* line 1244: */
 /* line 1245: */
 /* line 1246: */
 /* line 1247: */
if ((IOMACTR_modetype(GXBBCTR_routine.Mode)==FEAACTR_proc)&((*(&(KWBBCTR_result->Mode)))!=UEAACTR_voidmode))
{ 
(void)(A_CALLPROC(NL(TDBBCTR_read),(),((NL(TDBBCTR_read)).nonlocals)));
} 
 /* line 1248: */
(void)(A_CALLPROC(NL(TDBBCTR_read),(),((NL(TDBBCTR_read)).nonlocals)));
 /* line 1249: */
 /* line 1250: */
TXBBCTR = (*NL(PDBBCTR_currentimperative)) ;
switch ( TXBBCTR.mode )
{ 
case 22: /* STRUCT(INT,BITS)  */
UXBBCTR_t = (TXBBCTR.data.mode22);
 /* line 1251: */
VXBBCTR = (UXBBCTR_t.Fn!=HCAACTR_finishfn);
break;
default: 
 /* line 1252: */
 /* line 1253: */
VXBBCTR = A68_TRUE;
break;
} 
if (VXBBCTR)
{ 
 /* line 1254: */
 /* line 1255: */
 /* line 1257: */
(void)(SXIACTR_terminalerror(628));
} 
} 
else
{ 
XXBBCTR = (&((&OCPACTR_currentmodule)->Uname)) ;
(void)(SRYACTR_startmodule(A_ISVEC(WXBBCTR,XXBBCTR,7,A68_CHAR ), Modulename));
 /* line 1258: */
YXBBCTR.Mode = UEAACTR_voidmode;
YXBBCTR.Info = PKJACTR_defaultinfo;
YXBBCTR.Extra = A_EMPTY(ZXBBCTR,3);
(void)(KWBBCTR_result = TKBBCTR_assignment(A_LOC(A68_64 ), YXBBCTR));
 /* line 1259: */
 /* line 1260: */
 /* line 1261: */
 /* line 1262: */
AYBBCTR.Value = KWBBCTR_result;
 /* line 1264: */
AYBBCTR.End = JWBBCTR_endofmodule;
AYBBCTR.Type = ELJACTR_voidresult;
 /* line 1265: */
 /* line 1266: */
(void)(A_CALLPROC(HIBBCTR_phrase,(A68_FALSE, AYBBCTR, A68_FALSE),(A68_FALSE, AYBBCTR, A68_FALSE,(HIBBCTR_phrase).nonlocals)));
 /* line 1267: */
 /* line 1268: */
 /* line 1269: */
(void)(EVYACTR_endmodule());
} 
} 
} 
A_PROC_EXIT(module);
return;
} 
#undef NL
 /* line 59: */
 /* line 61: */

A68_VOID  ODBBCTR_translator(A68_264  Nextstreamimperative, A68_116 * Xsizes, A68_171  Keptdecnos)
{ 
A68_180  QDBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_180  PDBBCTR_currentimperative A_UNUSED = {0};
A68_180  SDBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_180  RDBBCTR_nextimperative A_UNUSED = {0};
A68_75  TDBBCTR_read;   /* proc value of non-global proc */
A68_75  ZDBBCTR_lookahead;   /* proc value of non-global proc */
A68_267  KEBBCTR_module;   /* proc value of non-global proc */
A68_VC  BYBBCTR;  /* OPERATORS - istruct -> vector */
A68_89 * CYBBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  DYBBCTR;  /* avoid structure result */
A68_VC  EYBBCTR_modulename A_UNUSED = {0};
A68_BOOL  FYBBCTR_decsmodule A_UNUSED = {0};
A68_BOOL  GYBBCTR_contextvoid A_UNUSED = {0};
A_PROC_ENTRY(translator);
 /* line 62: */
 /* line 64: */
{ 
PDBBCTR_currentimperative = A_EMPTY(QDBBCTR,26);
 /* line 65: */
RDBBCTR_nextimperative = A_EMPTY(SDBBCTR,26);
 /* line 67: */
 /* line 73: */
 /* line 74: */
A_CLOSURE( TDBBCTR_read, UDBBCTR_read, VDBBCTR_read );
(( VDBBCTR_read * ) ( TDBBCTR_read.nonlocals )) -> RDBBCTR_nextimperative = (&RDBBCTR_nextimperative);
(( VDBBCTR_read * ) ( TDBBCTR_read.nonlocals )) -> PDBBCTR_currentimperative = (&PDBBCTR_currentimperative);
(( VDBBCTR_read * ) ( TDBBCTR_read.nonlocals )) -> Nextstreamimperative = Nextstreamimperative;
 /* line 81: */
 /* line 87: */
 /* line 88: */
A_CLOSURE( ZDBBCTR_lookahead, AEBBCTR_lookahead, BEBBCTR_lookahead );
(( BEBBCTR_lookahead * ) ( ZDBBCTR_lookahead.nonlocals )) -> RDBBCTR_nextimperative = (&RDBBCTR_nextimperative);
(( BEBBCTR_lookahead * ) ( ZDBBCTR_lookahead.nonlocals )) -> Nextstreamimperative = Nextstreamimperative;
 /* line 94: */
 /* line 100: */
 /* line 103: */
 /* line 104: */
A_CLOSURE( KEBBCTR_module, LEBBCTR_module, MEBBCTR_module );
(( MEBBCTR_module * ) ( KEBBCTR_module.nonlocals )) -> TDBBCTR_read = TDBBCTR_read;
(( MEBBCTR_module * ) ( KEBBCTR_module.nonlocals )) -> PDBBCTR_currentimperative = (&PDBBCTR_currentimperative);
(( MEBBCTR_module * ) ( KEBBCTR_module.nonlocals )) -> ZDBBCTR_lookahead = ZDBBCTR_lookahead;
(( MEBBCTR_module * ) ( KEBBCTR_module.nonlocals )) -> RDBBCTR_nextimperative = (&RDBBCTR_nextimperative);
 /* line 1273: */
CYBBCTR = (&(PCPACTR_currentmodinfo->Name)) ;
RMAAOSF_scanto( ' ', A_ISVEC(BYBBCTR,CYBBCTR,32,A68_CHAR ), &DYBBCTR );
EYBBCTR_modulename = DYBBCTR;
 /* line 1275: */
FYBBCTR_decsmodule = ((*(&(PCPACTR_currentmodinfo->Type)))==(-1));
 /* line 1276: */
GYBBCTR_contextvoid = ((*(&((&(PCPACTR_currentmodinfo->L))->Level)))==0);
 /* line 1278: */
(void)(NYZACTR_initialise(Xsizes, (&PDBBCTR_currentimperative), Keptdecnos));
 /* line 1280: */
 /* line 1281: */
 /* line 1282: */
if (KOOACTR_composition)
{ 
 /* line 1283: */
 /* line 1284: */
(void)(SXIACTR_terminalerror(806));
} 
else
{ 
(void)(WFPACTR_initialiseunames());
 /* line 1285: */
 /* line 1286: */
 /* line 1288: */
 /* line 1290: */
(void)(A_CALLPROC(KEBBCTR_module,(EYBBCTR_modulename, FYBBCTR_decsmodule, GYBBCTR_contextvoid),(EYBBCTR_modulename, FYBBCTR_decsmodule, GYBBCTR_contextvoid,(KEBBCTR_module).nonlocals)));
} 
} 
A_PROC_EXIT(translator);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 5: */
 /* line 6: */
 /* line 8: */
void GDBBCTR(void)   /* initialise DECS compiler */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel","-dir",".","compiler.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/vak/Project/Algol/Algol-68RS-Source/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/vak/Project/Algol/Algol-68RS-Source/a68config/a68config.m","./values.m","./coutput.m","./uniquenameserver.m","./oper.m","./moduletracer.m","./modules.m","./modes.m","./incmode.m","./loops.m","./loads.m","./initialiser.m","./incvalue.m","./incoperfn.m","./incimperatives.m","./identifiers.m","./environment.m","./environ.m","./entryandreturn.m","./common.m","./clauses.m","./centities.m","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config A_UNUSED;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
OUPACTR();   /* USE values */
PTLACTR();   /* USE coutput */
RHMACTR();   /* USE uniquenameserver */
QQQACTR();   /* USE oper */
BCHACTR();   /* USE moduletracer */
ANOACTR();   /* USE modules */
DNMACTR();   /* USE modes */
ZDAACTR();   /* USE incmode */
UGABCTR();   /* USE loops */
SYZACTR();   /* USE loads */
EYZACTR();   /* USE initialiser */
GKJACTR();   /* USE incvalue */
XFAACTR();   /* USE incoperfn */
UAAACTR();   /* USE incimperatives */
MMVACTR();   /* USE identifiers */
HPIACTR();   /* USE environment */
BPLACTR();   /* USE environ */
KFYACTR();   /* USE entryandreturn */
KBZACTR();   /* USE clauses */
THAACTR();   /* USE centities */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/compiler.a68";
A_config.translation_time = "Thu Nov  5 21:11:00 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "FDBBCTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 21:11:00 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS compiler);
(void)(UEAALIB_a68config(LGAALIB_configinfo, KDBBCTR));
 /* line 57: */
 /* line 58: */
 /* line 1292: */
A_PROC_EXIT(DECS compiler);
} 
#undef NL
/* end of translation of compiler.a68 */
