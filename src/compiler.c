/* UNAME:NZABCTR */
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
extern A68_VOID  GZPACTR_getcfragment(struct A68t64 *,A68_VC *);
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
extern A68_VOID  MRQACTR_oper(struct A68t184 ,struct A68t71 **,struct A68t71 *);
/* --- End of imports from oper --- */


/* --- Imports from moduletracer --- */
/* --- End of imports from moduletracer --- */


/* --- Imports from modules --- */
extern A68_115 * BCPACTR_currentmodinfo;
extern A68_BOOL  WNOACTR_composition;
extern A68_214  ACPACTR_currentmodule;
extern A68_VOID  IFPACTR_initialiseunames(void);
/* --- End of imports from modules --- */


/* --- Imports from modes --- */
extern A68_201  YVMACTR_constituents;
extern A68_VOID  RFNACTR_cfieldname(struct A68t200 *,A68_VC *);
extern A68_VOID  LLOACTR_declarectemporary(A68_INT ,A68_VC ,A68_68 *);
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
extern A68_VOID  CEABCTR_for(struct A68t194 *,A68_INT ,struct A68t71 **);
extern A68_VOID  QNABCTR_forall(struct A68t198 ,struct A68t71 **);
extern A68_VOID  KYABCTR_while(void);
extern A68_VOID  MYABCTR_whiledo(struct A68t64 *);
extern A68_VOID  FZABCTR_whileod(void);
extern A68_75  MZABCTR_od;
/* --- End of imports from loops --- */


/* --- Imports from loads --- */
extern A68_VOID  ZWZACTR_load(struct A68t190 ,A68_64 *);
/* --- End of imports from loads --- */


/* --- Imports from initialiser --- */
extern A68_VOID  VUZACTR_initialise(struct A68t116 *,struct A68t180 *,struct A68t171 );
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
extern A68_VOID  UWVACTR_ccdec(struct A68t156 ,struct A68t64 *,A68_INT );
extern A68_VOID  GXWACTR_environoflabel(A68_INT ,A68_123 *);
extern A68_VOID  DVVACTR_iddec(struct A68t156 ,struct A68t71 **);
extern A68_160  WPKACTR_ids;
extern A68_VOID  EMVACTR_initialdummydec(struct A68t156 );
extern A68_VOID  RQWACTR_labdec(struct A68t164 );
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
extern A68_VOID  KQYACTR_startmodule(A68_VC ,A68_VC );
extern A68_VOID  WTYACTR_endmodule(void);
extern A68_VOID  TNYACTR_startroutine(struct A68t122 ,struct A68t123 ,struct A68t124 ,A68_INT ,struct A68t64 *);
extern A68_VOID  MOYACTR_endroutine(struct A68t122 ,struct A68t64 *);
extern A68_VOID  VRYACTR_startdecsmodule(A68_VC ,A68_VC );
extern A68_VOID  RTYACTR_startprocmodule(struct A68t122 ,A68_VC ,A68_VC ,struct A68t64 *);
extern A68_VOID  WUYACTR_enddecsmodule(A68_VC );
/* --- End of imports from entryandreturn --- */


/* --- Imports from clauses --- */
extern A68_VOID  LRZACTR_exit(A68_BOOL ,A68_BOOL ,struct A68t63 );
extern A68_VOID  HRZACTR_semi(A68_BOOL ,A68_BOOL );
extern A68_VOID  AEZACTR_begin(A68_BOOL ,A68_BOOL );
extern A68_VOID  MEZACTR_end(A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t55 *);
extern A68_VOID  KHZACTR_then(struct A68t64 *);
extern A68_VOID  HIZACTR_else(void);
extern A68_VOID  EOZACTR_fi(A68_BOOL ,struct A68t63 );
extern A68_VOID  AJZACTR_casein(struct A68t64 *);
extern A68_VOID  HLZACTR_comma(A68_INT );
extern A68_VOID  MMZACTR_out(void);
extern A68_VOID  ENZACTR_esac(A68_BOOL ,struct A68t63 );
extern A68_VOID  FKZACTR_inu(struct A68t79 ,struct A68t64 *,struct A68t80 );
extern A68_VOID  DMZACTR_commau(struct A68t79 ,struct A68t64 ,struct A68t80 );
extern A68_75  ANZACTR_outu;
extern A68_76  AOZACTR_esacu;
extern A68_VOID  XOZACTR_optboolwarning(A68_BOOL ,struct A68t64 *);
extern A68_VOID  QQZACTR_optbooloper(void);
extern A68_60  WQZACTR_startseries;
extern A68_VOID  ERZACTR_endseries(struct A68t59 ,struct A68t63 ,struct A68t55 *,A68_BOOL ,A68_BOOL ,A68_BOOL );
extern A68_VOID  UBZACTR_evaluateresult(struct A68t71 **,struct A68t63 );
extern A68_VOID  WAZACTR_evaluatenoresult(struct A68t71 **);
extern A68_VOID  SDZACTR_evaluatesimpleenquiry(struct A68t71 **,struct A68t63 );
extern A68_VOID  ESZACTR_codeinsert(A68_VC ,A68_INT ,struct A68t71 *,A68_68 *);
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
extern void AUPACTR(void);   /* values */
extern void PTLACTR(void);   /* coutput */
extern void RHMACTR(void);   /* uniquenameserver */
extern void CQQACTR(void);   /* oper */
extern void BCHACTR(void);   /* moduletracer */
extern void MMOACTR(void);   /* modules */
extern void DNMACTR(void);   /* modes */
extern void ZDAACTR(void);   /* incmode */
extern void CDABCTR(void);   /* loops */
extern void AVZACTR(void);   /* loads */
extern void MUZACTR(void);   /* initialiser */
extern void GKJACTR(void);   /* incvalue */
extern void XFAACTR(void);   /* incoperfn */
extern void UAAACTR(void);   /* incimperatives */
extern void OLVACTR(void);   /* identifiers */
extern void HPIACTR(void);   /* environment */
extern void BPLACTR(void);   /* environ */
extern void CEYACTR(void);   /* entryandreturn */
extern void CAZACTR(void);   /* clauses */
extern void THAACTR(void);   /* centities */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_263   RZABCTR = {"$Id: compiler.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,SZABCTR,RZABCTR,58)
static A68_266   NABBCTR = {"Composition modules not supported"}; 
A_GISVEC(A68_VC ,OABBCTR,NABBCTR,33)
static A68_270   PBBBCTR = {"generator routine"}; 
static A68_271   QBBBCTR = {"!generator"}; 
A_GISVEC(A68_VC ,RBBBCTR,QBBBCTR,10)
A_GISVEC(A68_VC ,SBBBCTR,PBBBCTR,17)
static A68_273   WCBBCTR = {"COMPILER: fdec expected"}; 
A_GISVEC(A68_VC ,XCBBCTR,WCBBCTR,23)
static A68_274   YCBBCTR = {"COMPILER: fdec has unexpected mode"}; 
A_GISVEC(A68_VC ,ZCBBCTR,YCBBCTR,34)
static A68_275   BDBBCTR = {"COMPILER: TRANSIDDEC (fdec) expected here"}; 
A_GISVEC(A68_VC ,CDBBCTR,BDBBCTR,41)
static A68_277   UDBBCTR = {"end OF answer ISNT NIL"}; 
A_GISVEC(A68_VC ,VDBBCTR,UDBBCTR,22)
static A68_279   JEBBCTR = {"exit not permitted in <enquiry clause>"}; 
A_GISVEC(A68_VC ,KEBBCTR,JEBBCTR,38)
static A68_286   PHBBCTR = {"fn OF starter = caseu fn"}; 
A_GISVEC(A68_VC ,QHBBCTR,PHBBCTR,24)
static A68_291   LJBBCTR = {".data["}; 
A_GISVEC(A68_VC ,MJBBCTR,LJBBCTR,6)
static A68_292   PJBBCTR = {""}; 
A_GISVEC(A68_VC ,QJBBCTR,PJBBCTR,0)
static A68_293   RJBBCTR = {"compiler:collateral clause - unknown selector"}; 
A_GISVEC(A68_VC ,SJBBCTR,RJBBCTR,45)
static A68_292   TJBBCTR = {""}; 
A_GISVEC(A68_VC ,UJBBCTR,TJBBCTR,0)
static A68_294   BKBBCTR = {"compiler: collateral clause result is neither struct nor istruct nor void"}; 
A_GISVEC(A68_VC ,CKBBCTR,BKBBCTR,73)
static A68_292   GKBBCTR = {""}; 
A_GISVEC(A68_VC ,IKBBCTR,GKBBCTR,0)
static A68_286   KKBBCTR = {"collateral clause result"}; 
A_GISVEC(A68_VC ,LKBBCTR,KKBBCTR,24)
static A68_273   ILBBCTR = {"fn OF s = coll comma fn"}; 
A_GISVEC(A68_VC ,JLBBCTR,ILBBCTR,23)
static A68_295   XLBBCTR = {"fn OF t = end coll fn"}; 
A_GISVEC(A68_VC ,YLBBCTR,XLBBCTR,21)
static A68_296   RMBBCTR = {"fn OF s = do fn"}; 
A_GISVEC(A68_VC ,SMBBCTR,RMBBCTR,15)
static A68_89   KPBBCTR = {"no closed clause OPTBOOL results"}; 
A_GISVEC(A68_VC ,LPBBCTR,KPBBCTR,32)
static A68_89   IQBBCTR = {"no choice clause OPTBOOL results"}; 
A_GISVEC(A68_VC ,JQBBCTR,IQBBCTR,32)
static A68_300   GSBBCTR = {"PROC modules not supported"}; 
A_GISVEC(A68_VC ,HSBBCTR,GSBBCTR,26)
static A68_301   KSBBCTR = {"rest OF value stack IS nil value list"}; 
A_GISVEC(A68_VC ,LSBBCTR,KSBBCTR,37)
static A68_302   OSBBCTR = {"invalid imperative in 'phrase'"}; 
A_GISVEC(A68_VC ,PSBBCTR,OSBBCTR,30)
static A68_296   LTBBCTR = {"module: ROUTINE"}; 
A_GISVEC(A68_VC ,MTBBCTR,LTBBCTR,15)
static A68_270   RTBBCTR = {"generator routine"}; 
static A68_271   STBBCTR = {"!generator"}; 
A_GISVEC(A68_VC ,TTBBCTR,STBBCTR,10)
A_GISVEC(A68_VC ,UTBBCTR,RTBBCTR,17)
typedef struct   /* env of non-global proc */
{
A68_180 * ZZABCTR_nextimperative;
A68_180 * XZABCTR_currentimperative;
A68_264  Nextstreamimperative;
} DABBCTR_read;
typedef struct   /* env of non-global proc */
{
A68_180 * ZZABCTR_nextimperative;
A68_264  Nextstreamimperative;
} JABBCTR_lookahead;
typedef struct   /* env of non-global proc */
{
A68_75  BABBCTR_read;
A68_180 * XZABCTR_currentimperative;
A68_75  HABBCTR_lookahead;
A68_180 * ZZABCTR_nextimperative;
} UABBCTR_module;
typedef struct   /* env of non-global proc */
{
A68_75  BABBCTR_read;
A68_180 * XZABCTR_currentimperative;
A68_75  WABBCTR_skiproutine;
} YABBCTR_skiproutine;
typedef struct   /* env of non-global proc */
{
A68_75  HABBCTR_lookahead;
A68_180 * ZZABCTR_nextimperative;
A68_75  BABBCTR_read;
A68_75  WABBCTR_skiproutine;
A68_180 * XZABCTR_currentimperative;
A68_268 * VABBCTR_phrase_;
} GBBBCTR_routine;
typedef struct   /* env of non-global proc */
{
A68_268 * VABBCTR_phrase_;
A68_180 * XZABCTR_currentimperative;
} JDBBCTR_serialclause;
typedef struct   /* env of non-global proc */
{
A68_268 * VABBCTR_phrase_;
A68_180 * XZABCTR_currentimperative;
} DEBBCTR_enquiryclause;
typedef struct   /* env of non-global proc */
{
A68_276  HDBBCTR_serialclause;
A68_75  BABBCTR_read;
A68_180 * XZABCTR_currentimperative;
A68_278  BEBBCTR_enquiryclause;
A68_268  PEBBCTR_phrase;
A68_269  EBBBCTR_routine;
} REBBCTR_phrase;
typedef struct   /* env of non-global proc */
{
int dummy;
} DCBBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  ZBBBCTR_paramcount;
A_PAD_INT(PAD_174)
} OCBBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_276  HDBBCTR_serialclause;
A68_75  BABBCTR_read;
A68_180 * XZABCTR_currentimperative;
A68_278  BEBBCTR_enquiryclause;
A68_268  PEBBCTR_phrase;
A68_71 ** SEBBCTR_valuestack;
} ZEBBCTR_enclosedclause;
typedef struct   /* env of non-global proc */
{
A68_71 ** SEBBCTR_valuestack;
A68_268  PEBBCTR_phrase;
} PQBBCTR_optboolexpression;
typedef struct   /* env of non-global proc */
{
A68_276  HDBBCTR_serialclause;
} GFBBCTR_closedclause;
typedef struct   /* env of non-global proc */
{
A68_75  BABBCTR_read;
A68_180 * XZABCTR_currentimperative;
A68_278  BEBBCTR_enquiryclause;
A68_276  HDBBCTR_serialclause;
} XFBBCTR_choiceclause;
typedef struct   /* env of non-global proc */
{
A68_268  PEBBCTR_phrase;
A68_180 * XZABCTR_currentimperative;
} AJBBCTR_collateralclause;
typedef struct   /* env of non-global proc */
{
A68_75  BABBCTR_read;
A68_180 * XZABCTR_currentimperative;
A68_278  BEBBCTR_enquiryclause;
A68_276  HDBBCTR_serialclause;
} EMBBCTR_loopbody;
typedef struct   /* env of non-global proc */
{
A68_75  BABBCTR_read;
A68_180 * XZABCTR_currentimperative;
A68_76  CMBBCTR_loopbody;
} ENBBCTR_loopclause;
typedef struct   /* env of non-global proc */
{
A68_75  BABBCTR_read;
A68_180 * XZABCTR_currentimperative;
A68_76  CMBBCTR_loopbody;
} COBBCTR_forallclause;
typedef struct   /* env of non-global proc */
{
A68_75  BABBCTR_read;
A68_180 * XZABCTR_currentimperative;
A68_79 * YFBBCTR_uchoice;
} BGBBCTR_readuchoiceimperative;
typedef struct   /* env of non-global proc */
{
A68_75  BABBCTR_read;
A68_180 * XZABCTR_currentimperative;
} JGBBCTR_iddecimperative;
typedef struct   /* env of non-global proc */
{
A68_124  CIBBCTR_cons;
} GIBBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  FOBBCTR_controlcount;
A_PAD_INT(PAD_175)
} JOBBCTR_generator;

A68_VOID  WZABCTR_translator(A68_264  Nextstreamimperative, A68_116 * Xsizes, A68_171  Keptdecnos);

A_STATIC A68_VOID  CABBCTR_read(void *NonLocals);

A_STATIC A68_VOID  IABBCTR_lookahead(void *NonLocals);

A_STATIC A68_VOID  MABBCTR_compositionmodule(void);

A_STATIC A68_VOID  TABBCTR_module(A68_VC  Modulename, A68_BOOL  Decsmodule, A68_BOOL  Prelude, void *NonLocals);

A_STATIC A68_VOID  XABBCTR_skiproutine(void *NonLocals);

A_STATIC A68_VOID  FBBBCTR_routine(A68_122  Routine, void *NonLocals);

A_STATIC A68_VOID  CCBBCTR_generator(A68_BOOL  ACBBCTR_anonymous, A68_124  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NCBBCTR_generator(A68_BOOL  LCBBCTR_anonymous, A68_124  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IDBBCTR_serialclause(A68_59  Properties, A68_63  Answer, void *NonLocals);

A_STATIC A68_VOID  CEBBCTR_enquiryclause(A68_63  Answer, void *NonLocals);

A_STATIC A68_VOID  QEBBCTR_phrase(A68_BOOL  Body, A68_63  Answer, A68_BOOL  Simple, void *NonLocals);

A_STATIC A68_VOID  YEBBCTR_enclosedclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, A68_71 * Newvalue, void *NonLocals);

A_STATIC A68_VOID  FFBBCTR_closedclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, void *NonLocals);

A_STATIC A68_VOID  WFBBCTR_choiceclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, void *NonLocals);

A_STATIC A68_VOID  AGBBCTR_readuchoiceimperative(void *NonLocals);

A_STATIC A68_VOID  IGBBCTR_iddecimperative(A68_156  *ReturnedValue, void *NonLocals);

A_STATIC A68_64 * BHBBCTR_assignment(A68_64 * ZGBBCTR_anonymous, A68_64  AHBBCTR_anonymous);

A_STATIC A68_65 * GHBBCTR_assignment(A68_65 * EHBBCTR_anonymous, A68_65  FHBBCTR_anonymous);

A_STATIC A68_VOID  FIBBCTR_generator(A68_BOOL  DIBBCTR_anonymous, A68_80  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZIBBCTR_collateralclause(A68_188  Starter, A68_63  Answer, void *NonLocals);

A_STATIC A68_VOID  EJBBCTR_collateralunitassignee(A68_VC  Temp, A68_289  Selector, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  DMBBCTR_loopbody(A68_BOOL  Body, A68_63  Answer, void *NonLocals);

A_STATIC A68_VOID  DNBBCTR_loopclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, A68_71 ** Frobytlist, void *NonLocals);

A_STATIC A68_VOID  BOBBCTR_forallclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, A68_71 ** Foralllist, void *NonLocals);

A_STATIC A68_VOID  IOBBCTR_generator(A68_BOOL  GOBBCTR_anonymous, A68_198  *ReturnedValue, void *NonLocals);

A_STATIC A68_71 * GPBBCTR_assignment(A68_71 * EPBBCTR_anonymous, A68_71  FPBBCTR_anonymous);

A_STATIC A68_VOID  OQBBCTR_optboolexpression(A68_INT  Warn, void *NonLocals);

A_STATIC A68_65 * GHBBCTR_assignment(A68_65 * EHBBCTR_anonymous, A68_65  FHBBCTR_anonymous)
{ 
A68_65  HHBBCTR;  /* united object - for case conformity */
A68_VC  IHBBCTR_anonymous;
A68_VC  JHBBCTR;  /* OPERATORS - copy to flex */
A68_285 * KHBBCTR;  /* YIELD */
A68_65 * LHBBCTR;  /* clause result */
{ 
(*EHBBCTR_anonymous) = FHBBCTR_anonymous;
HHBBCTR = FHBBCTR_anonymous ;
switch ( HHBBCTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
IHBBCTR_anonymous = (HHBBCTR.data.mode6);
KHBBCTR = &(EHBBCTR_anonymous-> data.mode6) ;
(*KHBBCTR) = A_VCOPY(IHBBCTR_anonymous,JHBBCTR,A68_CHAR );
break;
default: 
/*SKIP*/;
break;
} 
LHBBCTR = EHBBCTR_anonymous;
} 
return( LHBBCTR );
} 
#undef NL

A_STATIC A68_VOID  AGBBCTR_readuchoiceimperative(void *NonLocals)
#define NL(x) (((BGBBCTR_readuchoiceimperative *)NonLocals)->x)
{ 
A68_180  CGBBCTR;  /* united object - for case conformity */
A68_79  DGBBCTR_u;
A68_BOOL  EGBBCTR;  /* clause result */
A68_164  FGBBCTR_l;
A68_BOOL  GGBBCTR;  /* clause result */
A_PROC_ENTRY(readuchoiceimperative);
for ( ;; )
{ 
 /* line 460: */
A_CALLPROC(NL(BABBCTR_read),(),((NL(BABBCTR_read)).nonlocals));
 /* line 461: */
 /* line 462: */
CGBBCTR = (*NL(XZABCTR_currentimperative)) ;
switch ( CGBBCTR.mode )
{ 
case 15: /* STRUCT(INT,BITS,INT)  */
DGBBCTR_u = (CGBBCTR.data.mode15);
{ 
(*NL(YFBBCTR_uchoice)) = DGBBCTR_u;
 /* line 463: */
EGBBCTR = A68_FALSE;
} 
break;
case 14: /* STRUCT(REF MODE26,INT,INT,BOOL)  */
FGBBCTR_l = (CGBBCTR.data.mode14);
{ 
RQWACTR_labdec(FGBBCTR_l);
 /* line 464: */
 /* line 465: */
EGBBCTR = A68_TRUE;
} 
break;
default: 
SXIACTR_terminalerror(668);
 /* line 466: */
 /* line 467: */
 /* line 468: */
EGBBCTR = A68_FALSE;
break;
} 
 /* line 469: */
GGBBCTR = EGBBCTR;
if ( !GGBBCTR ) break;
/*SKIP*/;
}
A_PROC_EXIT(readuchoiceimperative);
return;
} 
#undef NL

A_STATIC A68_VOID  IGBBCTR_iddecimperative(A68_156  *ReturnedValue, void *NonLocals)
#define NL(x) (((JGBBCTR_iddecimperative *)NonLocals)->x)
{ 
A68_180  KGBBCTR;  /* united object - for case conformity */
A68_156  LGBBCTR_iddec;
A68_156  MGBBCTR;  /* clause result */
A68_156  NGBBCTR;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(iddecimperative);
{ 
A_CALLPROC(NL(BABBCTR_read),(),((NL(BABBCTR_read)).nonlocals));
 /* line 476: */
 /* line 477: */
KGBBCTR = (*NL(XZABCTR_currentimperative)) ;
switch ( KGBBCTR.mode )
{ 
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
LGBBCTR_iddec = (KGBBCTR.data.mode11);
 /* line 478: */
 /* line 479: */
MGBBCTR = LGBBCTR_iddec;
break;
default: 
SXIACTR_terminalerror(669);
 /* line 480: */
 /* line 481: */
MGBBCTR = NGBBCTR;
break;
} 
} 
A_PROC_EXIT(iddecimperative);
*ReturnedValue = (MGBBCTR);
return;
} 
#undef NL

A_STATIC A68_64 * BHBBCTR_assignment(A68_64 * ZGBBCTR_anonymous, A68_64  AHBBCTR_anonymous)
{ 
A68_INT * CHBBCTR;  /* YIELD */
A68_BITS * DHBBCTR;  /* YIELD */
A68_64 * MHBBCTR;  /* clause result */
{ 
CHBBCTR = (&(ZGBBCTR_anonymous->Mode)) ;
(*CHBBCTR) = AHBBCTR_anonymous.Mode;
DHBBCTR = (&(ZGBBCTR_anonymous->Info)) ;
(*DHBBCTR) = AHBBCTR_anonymous.Info;
GHBBCTR_assignment((&(ZGBBCTR_anonymous->Extra)), AHBBCTR_anonymous.Extra);
MHBBCTR = ZGBBCTR_anonymous;
} 
return( MHBBCTR );
} 
#undef NL

A_STATIC A68_VOID  FIBBCTR_generator(A68_BOOL  DIBBCTR_anonymous, A68_80  *ReturnedValue, void *NonLocals)
#define NL(x) (((GIBBCTR_generator *)NonLocals)->x)
{ 
A68_80  HIBBCTR;  /* clause result */
A68_80  IIBBCTR;  /* OPERATORS - dynamic generator */
{ 
IIBBCTR.dim[0].upb = NL(CIBBCTR_cons).upb ;
IIBBCTR.dim[0].lwb = 1 ;
A_1INITSTRIDES(IIBBCTR) ;
( DIBBCTR_anonymous? A_R1LOC(A68_BOOL ,IIBBCTR): A_R1HEAP(A68_BOOL ,IIBBCTR) );
HIBBCTR = IIBBCTR;
} 
*ReturnedValue = (HIBBCTR);
return;
} 
#undef NL
 /* line 628: */

A_STATIC A68_VOID  EJBBCTR_collateralunitassignee(A68_VC  Temp, A68_289  Selector, A68_VC  *ReturnedValue)
{ 
A68_289  FJBBCTR;  /* united object - for case conformity */
A68_200 * GJBBCTR_sf;
A68_VC  HJBBCTR;  /* clause result */
A68_VC  IJBBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  JJBBCTR;  /* avoid structure result */
A68_INT  KJBBCTR_i;
A68_VC  NJBBCTR;  /* avoid structure result */
A68_VC  OJBBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(collateralunitassignee);
 /* line 635: */
 /* line 636: */
FJBBCTR = Selector ;
switch ( FJBBCTR.mode )
{ 
case 1: /* REF STRUCT(INT,INT,MODE89)  */
GJBBCTR_sf = (FJBBCTR.data.mode1);
 /* line 637: */
 /* line 638: */
RFNACTR_cfieldname( GJBBCTR_sf, &JJBBCTR );
HJBBCTR = A_VC_PLUS(A_VC_PLUS(Temp,A_HVEC(IJBBCTR,'.',A68_CHAR )),JJBBCTR);
break;
case 2: /* INT */
KJBBCTR_i = (FJBBCTR.data.mode2);
 /* line 639: */
 /* line 640: */
ROAAOSF_whole( (KJBBCTR_i-1), 0, &NJBBCTR );
HJBBCTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(Temp,MJBBCTR),NJBBCTR),A_HVEC(OJBBCTR,']',A68_CHAR ));
break;
case 3: /* VOID */
 /* line 641: */
 /* line 642: */
HJBBCTR = QJBBCTR;
break;
default: 
WXIACTR_assert(SJBBCTR, A68_FALSE);
 /* line 643: */
HJBBCTR = UJBBCTR;
break;
} 
A_PROC_EXIT(collateralunitassignee);
*ReturnedValue = (HJBBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  IOBBCTR_generator(A68_BOOL  GOBBCTR_anonymous, A68_198  *ReturnedValue, void *NonLocals)
#define NL(x) (((JOBBCTR_generator *)NonLocals)->x)
{ 
A68_198  KOBBCTR;  /* clause result */
A68_198  LOBBCTR;  /* OPERATORS - dynamic generator */
{ 
LOBBCTR.upb = NL(FOBBCTR_controlcount) ;
( GOBBCTR_anonymous? A_VLOC(A68_195 ,LOBBCTR): A_VHEAP(A68_195 ,LOBBCTR) );
KOBBCTR = LOBBCTR;
} 
*ReturnedValue = (KOBBCTR);
return;
} 
#undef NL
 /* line 396: */
 /* line 398: */

A_STATIC A68_VOID  FFBBCTR_closedclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, void *NonLocals)
#define NL(x) (((GFBBCTR_closedclause *)NonLocals)->x)
{ 
A68_59  HFBBCTR;  /* collateral clause result */
A68_BITS  IFBBCTR;  /* ADICOPS - >= */
A68_INT  JFBBCTR;  /* ADICOPS - ABS INT */
A68_59  KFBBCTR_properties;
A68_63  LFBBCTR_ccanswer;
A68_BITS  MFBBCTR;  /* ADICOPS - >= */
A68_BOOL  NFBBCTR_seriescontainsexit;
A68_55  OFBBCTR;  /* collateral clause result */
A68_55 * PFBBCTR;  /* YIELD */
A68_55 ** QFBBCTR;  /* YIELD */
A68_BITS  RFBBCTR;  /* ADICOPS - >= */
A_PROC_ENTRY(closedclause);
 /* line 404: */
 /* line 406: */
{ 
 /* line 407: */
IFBBCTR = Starter.Props ;
HFBBCTR.Block = (A_LB_GE(IFBBCTR,WCAACTR_decbit)&!Body);
 /* line 408: */
JFBBCTR = Starter.Resultmode ;
HFBBCTR.Dynamicresult = OTMACTR_dynamic(A_ABS(JFBBCTR));
 /* line 410: */
HFBBCTR.Discardeddynamicresult = ((A68_BITS )(Starter.Props&MDAACTR_dybits)!=0X0U);
HFBBCTR.Type = Starter.Fn;
KFBBCTR_properties = HFBBCTR;
 /* line 411: */
LFBBCTR_ccanswer = Answer;
 /* line 412: */
 /* line 413: */
MFBBCTR = Starter.Props ;
NFBBCTR_seriescontainsexit = A_LB_GE(MFBBCTR,TCAACTR_exitbit);
 /* line 414: */
 /* line 415: */
 /* line 416: */
if ( NFBBCTR_seriescontainsexit )
{ 
 /* line 417: */
OFBBCTR.Name = QIMACTR_newuniquename();
 /* line 418: */
OFBBCTR.Set = A68_TRUE;
PFBBCTR = A_HEAP(A68_55 ) ;
(*PFBBCTR) = OFBBCTR ;
QFBBCTR = (&((&LFBBCTR_ccanswer)->End)) ;
(*QFBBCTR) = PFBBCTR;
} 
 /* line 419: */
RFBBCTR = Starter.Props ;
AEZACTR_begin(A_LB_GE(RFBBCTR,ADAACTR_labbit), Body);
 /* line 420: */
A_CALLPROC(NL(HDBBCTR_serialclause),(KFBBCTR_properties, LFBBCTR_ccanswer),(KFBBCTR_properties, LFBBCTR_ccanswer,(NL(HDBBCTR_serialclause)).nonlocals));
 /* line 421: */
 /* line 422: */
 /* line 423: */
 /* line 424: */
 /* line 426: */
 /* line 427: */
MEZACTR_end(KFBBCTR_properties.Dynamicresult, NFBBCTR_seriescontainsexit, Body, (*(&((&LFBBCTR_ccanswer)->End))));
} 
A_PROC_EXIT(closedclause);
return;
} 
#undef NL
 /* line 431: */
 /* line 433: */

A_STATIC A68_VOID  WFBBCTR_choiceclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, void *NonLocals)
#define NL(x) (((XFBBCTR_choiceclause *)NonLocals)->x)
{ 
A68_79  YFBBCTR_uchoice;
A68_75  ZFBBCTR_readuchoiceimperative;   /* proc value of non-global proc */
A68_282  HGBBCTR_iddecimperative;   /* proc value of non-global proc */
A68_INT  OGBBCTR;  /* ADICOPS - ABS INT */
A68_INT  PGBBCTR_resultmode;
A68_BOOL  QGBBCTR_discardlevelactivated;
A68_INT  RGBBCTR_enquirytype;
A68_64  SGBBCTR_enquiry;
A68_80  TGBBCTR_case;
A68_55 * UGBBCTR_endofchoiceclause;
A68_BOOL  VGBBCTR_elsepart;
A68_BOOL  WGBBCTR_outpart;
A68_64  XGBBCTR;  /* collateral clause result */
A68_65  YGBBCTR;  /* OPERATORS - mode -> union mode */
A68_64  NHBBCTR;  /* collateral clause result */
A68_65  OHBBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  RHBBCTR;  /* ADICOPS - ABS INT */
A68_INT  SHBBCTR_umode;
A68_64  THBBCTR;  /* collateral clause result */
A68_65  UHBBCTR;  /* OPERATORS - mode -> union mode */
A68_63  VHBBCTR;  /* collateral clause result */
A68_63  WHBBCTR;  /* collateral clause result */
A68_63  XHBBCTR_seriesanswer;
A68_59  YHBBCTR_seriesproperties;
A68_180  ZHBBCTR;  /* united object - for case conformity */
A68_187  AIBBCTR_s;
A68_124  BIBBCTR;  /* avoid structure result */
A68_124  CIBBCTR_cons;
A68_287  EIBBCTR_generator;   /* proc value of non-global proc */
A68_80  JIBBCTR;  /* avoid structure result */
A68_BOOL * KIBBCTR_c;
A68_INT  LIBBCTR;  /* forall loop counter */
A68_BITS  MIBBCTR;  /* ADICOPS - >= */
A68_156  NIBBCTR;  /* avoid structure result */
A68_BITS  OIBBCTR;  /* ADICOPS - >= */
A68_156  PIBBCTR;  /* avoid structure result */
A68_59  QIBBCTR;  /* collateral clause result */
A68_BITS  RIBBCTR;  /* ADICOPS - >= */
A68_INT  SIBBCTR;  /* ADICOPS - ABS INT */
A68_BOOL  TIBBCTR;  /* clause result */
A68_189  UIBBCTR_t;
A68_BOOL  VIBBCTR;  /* clause result */
A_PROC_ENTRY(choiceclause);
 /* line 445: */
 /* line 447: */
{ 
 /* line 452: */
 /* line 459: */
A_CLOSURE( ZFBBCTR_readuchoiceimperative, AGBBCTR_readuchoiceimperative, BGBBCTR_readuchoiceimperative );
(( BGBBCTR_readuchoiceimperative * ) ( ZFBBCTR_readuchoiceimperative.nonlocals )) -> BABBCTR_read = NL(BABBCTR_read);
(( BGBBCTR_readuchoiceimperative * ) ( ZFBBCTR_readuchoiceimperative.nonlocals )) -> XZABCTR_currentimperative = NL(XZABCTR_currentimperative);
(( BGBBCTR_readuchoiceimperative * ) ( ZFBBCTR_readuchoiceimperative.nonlocals )) -> YFBBCTR_uchoice = (&YFBBCTR_uchoice);
 /* line 471: */
 /* line 475: */
A_CLOSURE( HGBBCTR_iddecimperative, IGBBCTR_iddecimperative, JGBBCTR_iddecimperative );
(( JGBBCTR_iddecimperative * ) ( HGBBCTR_iddecimperative.nonlocals )) -> BABBCTR_read = NL(BABBCTR_read);
(( JGBBCTR_iddecimperative * ) ( HGBBCTR_iddecimperative.nonlocals )) -> XZABCTR_currentimperative = NL(XZABCTR_currentimperative);
 /* line 483: */
OGBBCTR = Starter.Resultmode ;
PGBBCTR_resultmode = A_ABS(OGBBCTR);
 /* line 484: */
QGBBCTR_discardlevelactivated = A68_FALSE;
 /* line 485: */
 /* line 486: */
 /* line 487: */
 /* line 488: */
UGBBCTR_endofchoiceclause = Answer.End;
 /* line 489: */
VGBBCTR_elsepart = A68_FALSE;
 /* line 490: */
WGBBCTR_outpart = A68_FALSE;
 /* line 492: */
 /* line 493: */
if ( (Starter.Fn==EBAACTR_iffn) )
{ 
XGBBCTR.Mode = WEAACTR_boolmode;
XGBBCTR.Info = PKJACTR_defaultinfo;
XGBBCTR.Extra = A_EMPTY(YGBBCTR,3);
BHBBCTR_assignment((&SGBBCTR_enquiry), XGBBCTR);
 /* line 494: */
 /* line 496: */
RGBBCTR_enquirytype = ILJACTR_enquiryresult;
} 
else
{ 
 /* line 497: */
if ( (Starter.Fn==FBAACTR_casefn) )
{ 
NHBBCTR.Mode = EFAACTR_intmode;
NHBBCTR.Info = PKJACTR_defaultinfo;
NHBBCTR.Extra = A_EMPTY(OHBBCTR,3);
BHBBCTR_assignment((&SGBBCTR_enquiry), NHBBCTR);
 /* line 498: */
 /* line 500: */
RGBBCTR_enquirytype = ILJACTR_enquiryresult;
} 
else
{ 
WXIACTR_assert(QHBBCTR, (Starter.Fn==GBAACTR_caseufn));
 /* line 501: */
RHBBCTR = Starter.Mode ;
SHBBCTR_umode = A_ABS(RHBBCTR);
 /* line 502: */
THBBCTR.Mode = SHBBCTR_umode;
THBBCTR.Info = PKJACTR_defaultinfo;
THBBCTR.Extra = A_EMPTY(UHBBCTR,3);
BHBBCTR_assignment((&SGBBCTR_enquiry), THBBCTR);
 /* line 503: */
 /* line 505: */
RGBBCTR_enquirytype = ILJACTR_enquiryresult;
} 
} 
 /* line 507: */
VHBBCTR.Value = (&SGBBCTR_enquiry);
VHBBCTR.End = (A68_55 *)A68_NIL;
VHBBCTR.Type = RGBBCTR_enquirytype;
A_CALLPROC(NL(BEBBCTR_enquiryclause),(VHBBCTR),(VHBBCTR,(NL(BEBBCTR_enquiryclause)).nonlocals));
 /* line 509: */
 /* line 510: */
 /* line 511: */
WHBBCTR.Value = Answer.Value;
 /* line 513: */
WHBBCTR.End = UGBBCTR_endofchoiceclause;
WHBBCTR.Type = Answer.Type;
XHBBCTR_seriesanswer = WHBBCTR;
 /* line 514: */
 /* line 516: */
for ( ;; )
{ 
 /* line 517: */
ZHBBCTR = (*NL(XZABCTR_currentimperative)) ;
switch ( ZHBBCTR.mode )
{ 
case 20: /* STRUCT(INT,INT,BITS,INT)  */
AIBBCTR_s = (ZHBBCTR.data.mode20);
 /* line 518: */
{ 
 /* line 519: */
 /* line 521: */
switch ( AIBBCTR_s.Fn )
{ 
case 1: 
 /* line 522: */
{ 
VGBBCTR_elsepart = (AIBBCTR_s.Param==2);
 /* line 523: */
 /* line 524: */
 /* line 527: */
KHZACTR_then((&SGBBCTR_enquiry));
} 
break;
case 2: 
 /* line 528: */
{ 
WGBBCTR_outpart = (AIBBCTR_s.Param<0);
 /* line 529: */
 /* line 530: */
 /* line 533: */
AJZACTR_casein((&SGBBCTR_enquiry));
} 
break;
case 3: 
 /* line 534: */
{ 
WGBBCTR_outpart = (AIBBCTR_s.Param<0);
 /* line 535: */
A_CALLPROC(ZFBBCTR_readuchoiceimperative,(),((ZFBBCTR_readuchoiceimperative).nonlocals));
 /* line 536: */
A_CALLPROC(YVMACTR_constituents,((*(&((&SGBBCTR_enquiry)->Mode))), &BIBBCTR),((*(&((&SGBBCTR_enquiry)->Mode))), &BIBBCTR,(YVMACTR_constituents).nonlocals));
CIBBCTR_cons = BIBBCTR;
 /* line 537: */
 /* line 538: */
A_CLOSURE( EIBBCTR_generator, FIBBCTR_generator, GIBBCTR_generator );
(( GIBBCTR_generator * ) ( EIBBCTR_generator.nonlocals )) -> CIBBCTR_cons = CIBBCTR_cons;
A_CALLPROC(EIBBCTR_generator,(A68_TRUE, &JIBBCTR),(A68_TRUE, &JIBBCTR,(EIBBCTR_generator).nonlocals));
TGBBCTR_case = JIBBCTR;
 /* line 539: */
 /* line 540: */
LIBBCTR = TGBBCTR_case.dim[0].upb - TGBBCTR_case.dim[0].lwb;
KIBBCTR_c = TGBBCTR_case.data;
for (;LIBBCTR-- >= 0;
(KIBBCTR_c += TGBBCTR_case.dim[0].stride
) )
{
(*KIBBCTR_c) = A68_FALSE;
}
 /* line 541: */
 /* line 542: */
 /* line 543: */
 /* line 545: */
FKZACTR_inu(YFBBCTR_uchoice, (&SGBBCTR_enquiry), TGBBCTR_case);
 /* line 546: */
 /* line 547: */
 /* line 548: */
MIBBCTR = (*(&((&YFBBCTR_uchoice)->Props))) ;
if ( A_LB_GE(MIBBCTR,WCAACTR_decbit) )
{ 
 /* line 549: */
 /* line 551: */
 /* line 552: */
 /* line 553: */
 /* line 556: */
A_CALLPROC(HGBBCTR_iddecimperative,( &NIBBCTR),( &NIBBCTR,(HGBBCTR_iddecimperative).nonlocals));
UWVACTR_ccdec(NIBBCTR, (&SGBBCTR_enquiry), (*(&((&YFBBCTR_uchoice)->Param))));
} 
} 
break;
case 4: 
 /* line 558: */
HLZACTR_comma(AIBBCTR_s.Param);
break;
case 5: 
 /* line 559: */
{ 
A_CALLPROC(ZFBBCTR_readuchoiceimperative,(),((ZFBBCTR_readuchoiceimperative).nonlocals));
 /* line 560: */
 /* line 561: */
 /* line 562: */
 /* line 564: */
DMZACTR_commau(YFBBCTR_uchoice, SGBBCTR_enquiry, TGBBCTR_case);
 /* line 565: */
 /* line 566: */
 /* line 567: */
OIBBCTR = (*(&((&YFBBCTR_uchoice)->Props))) ;
if ( A_LB_GE(OIBBCTR,WCAACTR_decbit) )
{ 
 /* line 568: */
 /* line 570: */
 /* line 571: */
 /* line 572: */
 /* line 575: */
A_CALLPROC(HGBBCTR_iddecimperative,( &PIBBCTR),( &PIBBCTR,(HGBBCTR_iddecimperative).nonlocals));
UWVACTR_ccdec(PIBBCTR, (&SGBBCTR_enquiry), (*(&((&YFBBCTR_uchoice)->Param))));
} 
} 
break;
case 6: 
 /* line 577: */
SXIACTR_terminalerror(665);
break;
case 7: 
 /* line 579: */
MMZACTR_out();
break;
case 8: 
 /* line 583: */
A_CALLPROC(ANZACTR_outu,(),((ANZACTR_outu).nonlocals));
break;
case 9: 
 /* line 584: */
HIZACTR_else();
break;
default: 
 /* line 585: */
SXIACTR_terminalerror(665);
break;
} 
 /* line 587: */
 /* line 588: */
 /* line 589: */
RIBBCTR = AIBBCTR_s.Props ;
QIBBCTR.Block = A_LB_GE(RIBBCTR,WCAACTR_decbit);
 /* line 590: */
SIBBCTR = AIBBCTR_s.Mode ;
QIBBCTR.Dynamicresult = OTMACTR_dynamic(A_ABS(SIBBCTR));
 /* line 591: */
QIBBCTR.Discardeddynamicresult = ((A68_BITS )(AIBBCTR_s.Props&MDAACTR_dybits)!=0X0U);
 /* line 592: */
QIBBCTR.Type = (AIBBCTR_s.Fn+LBAACTR_separatoroffset);
YHBBCTR_seriesproperties = QIBBCTR;
 /* line 593: */
 /* line 594: */
 /* line 596: */
TIBBCTR = A68_TRUE;
} 
break;
case 22: /* STRUCT(INT,BITS)  */
UIBBCTR_t = (ZHBBCTR.data.mode22);
 /* line 597: */
{ 
 /* line 598: */
 /* line 599: */
if ( (UIBBCTR_t.Fn==CCAACTR_esacufn) )
{ 
 /* line 600: */
A_CALLPROC(AOZACTR_esacu,(WGBBCTR_outpart, Answer),(WGBBCTR_outpart, Answer,(AOZACTR_esacu).nonlocals));
} 
else
{ 
 /* line 601: */
 /* line 602: */
if ( (UIBBCTR_t.Fn==BCAACTR_esacfn) )
{ 
 /* line 603: */
 /* line 604: */
ENZACTR_esac(WGBBCTR_outpart, Answer);
} 
else
{ 
 /* line 605: */
EOZACTR_fi(VGBBCTR_elsepart, Answer);
} 
} 
 /* line 607: */
 /* line 608: */
 /* line 609: */
 /* line 610: */
TIBBCTR = A68_FALSE;
} 
break;
default: 
SXIACTR_terminalerror(657);
 /* line 611: */
 /* line 612: */
 /* line 613: */
TIBBCTR = A68_FALSE;
break;
} 
 /* line 614: */
VIBBCTR = TIBBCTR;
if ( !VIBBCTR ) break;
 /* line 615: */
A_CALLPROC(NL(HDBBCTR_serialclause),(YHBBCTR_seriesproperties, XHBBCTR_seriesanswer),(YHBBCTR_seriesproperties, XHBBCTR_seriesanswer,(NL(HDBBCTR_serialclause)).nonlocals));
}
 /* line 616: */
} 
A_PROC_EXIT(choiceclause);
return;
} 
#undef NL

A_STATIC A68_VOID  ZIBBCTR_collateralclause(A68_188  Starter, A68_63  Answer, void *NonLocals)
#define NL(x) (((AJBBCTR_collateralclause *)NonLocals)->x)
{ 
A68_INT  VJBBCTR;  /* ADICOPS - ABS INT */
A68_INT  WJBBCTR_resultmode;
A68_INT  XJBBCTR_resulttype;
A68_BOOL  YJBBCTR_structure;
A68_BOOL  ZJBBCTR_istruct;
A68_BOOL  AKBBCTR_void;
A68_208  DKBBCTR_fields;
A68_208  EKBBCTR;  /* avoid structure result */
A68_64 * FKBBCTR_collateralvalue;
A68_VC  HKBBCTR;  /* clause result */
A68_65  JKBBCTR;  /* united object - for case conformity */
A68_68  MKBBCTR;  /* avoid structure result */
A68_65  NKBBCTR;  /* OPERATORS - mode -> union mode */
A68_VC  OKBBCTR;  /* avoid structure result */
A68_VC  PKBBCTR_collateraltemp;
A68_64  QKBBCTR;  /* collateral clause result */
A68_INT  RKBBCTR;  /* ADICOPS - ABS INT */
A68_289  SKBBCTR;  /* clause result */
A68_INT  TKBBCTR;  /* YIELD */
A68_289  UKBBCTR;  /* OPERATORS - mode -> union mode */
A68_200 * VKBBCTR;  /* YIELD */
A68_289  WKBBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  XKBBCTR;  /* YIELD */
A68_289  YKBBCTR;  /* OPERATORS - mode -> union mode */
A68_VC  ZKBBCTR;  /* avoid structure result */
A68_65  ALBBCTR;  /* OPERATORS - mode -> union mode */
A68_64  BLBBCTR_phrasevalue;
A68_55  CLBBCTR_endofphrase;
A68_63  DLBBCTR;  /* collateral clause result */
A68_63  ELBBCTR_phraseanswer;
A68_INT  FLBBCTR_i;
A68_180  GLBBCTR;  /* united object - for case conformity */
A68_187  HLBBCTR_s;
A68_64  KLBBCTR;  /* collateral clause result */
A68_INT  LLBBCTR;  /* ADICOPS - ABS INT */
A68_289  MLBBCTR;  /* clause result */
A68_INT  NLBBCTR;  /* YIELD */
A68_289  OLBBCTR;  /* OPERATORS - mode -> union mode */
A68_200 * PLBBCTR;  /* YIELD */
A68_289  QLBBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  RLBBCTR;  /* YIELD */
A68_289  SLBBCTR;  /* OPERATORS - mode -> union mode */
A68_VC  TLBBCTR;  /* avoid structure result */
A68_65  ULBBCTR;  /* OPERATORS - mode -> union mode */
A68_BOOL  VLBBCTR;  /* clause result */
A68_189  WLBBCTR_t;
A68_BOOL  ZLBBCTR;  /* clause result */
A_PROC_ENTRY(collateralclause);
 /* line 623: */
 /* line 624: */
{ 
 /* line 625: */
 /* line 626: */
 /* line 645: */
VJBBCTR = Starter.Resultmode ;
WJBBCTR_resultmode = A_ABS(VJBBCTR);
 /* line 646: */
XJBBCTR_resulttype = IOMACTR_modetype(WJBBCTR_resultmode);
 /* line 647: */
YJBBCTR_structure = (XJBBCTR_resulttype==IEAACTR_struct);
 /* line 648: */
ZJBBCTR_istruct = (XJBBCTR_resulttype==JEAACTR_istruct);
 /* line 649: */
AKBBCTR_void = (WJBBCTR_resultmode==UEAACTR_voidmode);
 /* line 651: */
 /* line 652: */
 /* line 653: */
WXIACTR_assert(CKBBCTR, ((YJBBCTR_structure|ZJBBCTR_istruct)|AKBBCTR_void));
 /* line 655: */
 /* line 656: */
 /* line 657: */
if ( YJBBCTR_structure )
{ 
 /* line 658: */
EVMACTR_structfields( WJBBCTR_resultmode, &EKBBCTR );
DKBBCTR_fields = EKBBCTR;
} 
 /* line 660: */
FKBBCTR_collateralvalue = Answer.Value;
 /* line 667: */
 /* line 668: */
 /* line 669: */
 /* line 670: */
if ( ((*(&(FKBBCTR_collateralvalue->Mode)))==UEAACTR_voidmode) )
{ 
HKBBCTR = IKBBCTR;
} 
else
{ 
 /* line 671: */
JKBBCTR = (*(&(FKBBCTR_collateralvalue->Extra))) ;
switch ( JKBBCTR.mode )
{ 
case 3: /* VOID */
 /* line 673: */
 /* line 675: */
 /* line 676: */
 /* line 677: */
LLOACTR_declarectemporary( (*(&(FKBBCTR_collateralvalue->Mode))), LKBBCTR, &MKBBCTR );
GHBBCTR_assignment((&(FKBBCTR_collateralvalue->Extra)), A_UNITE(NKBBCTR,mode5,5,MKBBCTR));
break;
default: 
/*SKIP*/;
break;
} 
 /* line 678: */
 /* line 679: */
GZPACTR_getcfragment( FKBBCTR_collateralvalue, &OKBBCTR );
HKBBCTR = OKBBCTR;
} 
PKBBCTR_collateraltemp = HKBBCTR;
 /* line 682: */
 /* line 683: */
 /* line 684: */
RKBBCTR = Starter.Mode ;
QKBBCTR.Mode = A_ABS(RKBBCTR);
 /* line 686: */
QKBBCTR.Info = PKJACTR_defaultinfo;
 /* line 687: */
if ( YJBBCTR_structure )
{ 
 /* line 688: */
TKBBCTR = 1 ;
VKBBCTR = (&A_VINDEX(DKBBCTR_fields,TKBBCTR)) ;
SKBBCTR = A_UNITE(UKBBCTR,mode1,1,VKBBCTR);
} 
else
{ 
 /* line 689: */
if ( ZJBBCTR_istruct )
{ 
 /* line 690: */
XKBBCTR = 1 ;
SKBBCTR = A_UNITE(WKBBCTR,mode2,2,XKBBCTR);
} 
else
{ 
 /* line 691: */
SKBBCTR = A_EMPTY(YKBBCTR,3);
} 
} 
 /* line 692: */
EJBBCTR_collateralunitassignee( PKBBCTR_collateraltemp, SKBBCTR, &ZKBBCTR );
QKBBCTR.Extra = A_UNITE(ALBBCTR,mode6,6,ZKBBCTR);
BLBBCTR_phrasevalue = QKBBCTR;
 /* line 694: */
CLBBCTR_endofphrase = HIAACTR_unsetlabel;
 /* line 696: */
 /* line 697: */
DLBBCTR.Value = (&BLBBCTR_phrasevalue);
DLBBCTR.End = (&CLBBCTR_endofphrase);
DLBBCTR.Type = Answer.Type;
ELBBCTR_phraseanswer = DLBBCTR;
 /* line 699: */
 /* line 700: */
for ( FLBBCTR_i = 1;;
FLBBCTR_i += 1 ) 
{ 
A_CALLPROC(NL(PEBBCTR_phrase),(A68_FALSE, ELBBCTR_phraseanswer, A68_FALSE),(A68_FALSE, ELBBCTR_phraseanswer, A68_FALSE,(NL(PEBBCTR_phrase)).nonlocals));
 /* line 701: */
 /* line 702: */
GLBBCTR = (*NL(XZABCTR_currentimperative)) ;
switch ( GLBBCTR.mode )
{ 
case 20: /* STRUCT(INT,INT,BITS,INT)  */
HLBBCTR_s = (GLBBCTR.data.mode20);
 /* line 703: */
 /* line 704: */
{ 
WXIACTR_assert(JLBBCTR, (HLBBCTR_s.Fn==VBAACTR_collcommafn));
 /* line 706: */
 /* line 707: */
 /* line 708: */
LLBBCTR = HLBBCTR_s.Mode ;
KLBBCTR.Mode = A_ABS(LLBBCTR);
 /* line 710: */
KLBBCTR.Info = PKJACTR_defaultinfo;
 /* line 711: */
if ( YJBBCTR_structure )
{ 
 /* line 712: */
NLBBCTR = HLBBCTR_s.Param ;
PLBBCTR = (&A_VINDEX(DKBBCTR_fields,NLBBCTR)) ;
MLBBCTR = A_UNITE(OLBBCTR,mode1,1,PLBBCTR);
} 
else
{ 
 /* line 713: */
if ( ZJBBCTR_istruct )
{ 
 /* line 714: */
RLBBCTR = HLBBCTR_s.Param ;
MLBBCTR = A_UNITE(QLBBCTR,mode2,2,RLBBCTR);
} 
else
{ 
 /* line 715: */
MLBBCTR = A_EMPTY(SLBBCTR,3);
} 
} 
 /* line 716: */
EJBBCTR_collateralunitassignee( PKBBCTR_collateraltemp, MLBBCTR, &TLBBCTR );
KLBBCTR.Extra = A_UNITE(ULBBCTR,mode6,6,TLBBCTR);
BHBBCTR_assignment((&BLBBCTR_phrasevalue), KLBBCTR);
 /* line 717: */
 /* line 718: */
 /* line 720: */
VLBBCTR = A68_TRUE;
} 
break;
case 22: /* STRUCT(INT,BITS)  */
WLBBCTR_t = (GLBBCTR.data.mode22);
 /* line 721: */
 /* line 722: */
{ 
WXIACTR_assert(YLBBCTR, (WLBBCTR_t.Fn==ECAACTR_endcollfn));
 /* line 723: */
 /* line 724: */
 /* line 725: */
 /* line 726: */
VLBBCTR = A68_FALSE;
} 
break;
default: 
SXIACTR_terminalerror(658);
 /* line 727: */
 /* line 728: */
 /* line 729: */
VLBBCTR = A68_FALSE;
break;
} 
 /* line 731: */
ZLBBCTR = VLBBCTR;
if ( !ZLBBCTR ) break;
/*SKIP*/;
}
 /* line 732: */
} 
A_PROC_EXIT(collateralclause);
return;
} 
#undef NL
 /* line 737: */

A_STATIC A68_VOID  DMBBCTR_loopbody(A68_BOOL  Body, A68_63  Answer, void *NonLocals)
#define NL(x) (((EMBBCTR_loopbody *)NonLocals)->x)
{ 
A68_55  FMBBCTR_endofseries;
A68_180  GMBBCTR;  /* united object - for case conformity */
A68_187  HMBBCTR_whileordo;
A68_59  IMBBCTR;  /* collateral clause result */
A68_BITS  JMBBCTR;  /* ADICOPS - >= */
A68_59  KMBBCTR_loopproperties;
A68_64  LMBBCTR;  /* collateral clause result */
A68_65  MMBBCTR;  /* OPERATORS - mode -> union mode */
A68_64  NMBBCTR_enquiry;
A68_63  OMBBCTR;  /* collateral clause result */
A68_180  PMBBCTR;  /* united object - for case conformity */
A68_187  QMBBCTR_s;
A68_59  TMBBCTR;  /* collateral clause result */
A68_BITS  UMBBCTR;  /* ADICOPS - >= */
A68_59  VMBBCTR_seriesproperties;
A68_63  WMBBCTR;  /* collateral clause result */
A68_63  XMBBCTR;  /* collateral clause result */
A_PROC_ENTRY(loopbody);
 /* line 742: */
 /* line 743: */
{ 
FMBBCTR_endofseries = HIAACTR_unsetlabel;
 /* line 744: */
A_CALLPROC(NL(BABBCTR_read),(),((NL(BABBCTR_read)).nonlocals));
 /* line 745: */
 /* line 746: */
GMBBCTR = (*NL(XZABCTR_currentimperative)) ;
switch ( GMBBCTR.mode )
{ 
case 20: /* STRUCT(INT,INT,BITS,INT)  */
HMBBCTR_whileordo = (GMBBCTR.data.mode20);
 /* line 747: */
 /* line 748: */
{ 
 /* line 749: */
JMBBCTR = HMBBCTR_whileordo.Props ;
IMBBCTR.Block = (A_LB_GE(JMBBCTR,WCAACTR_decbit)&!Body);
 /* line 750: */
IMBBCTR.Dynamicresult = A68_FALSE;
 /* line 751: */
IMBBCTR.Discardeddynamicresult = ((A68_BITS )(HMBBCTR_whileordo.Props&MDAACTR_dybits)!=0X0U);
 /* line 752: */
IMBBCTR.Type = (HMBBCTR_whileordo.Fn+LBAACTR_separatoroffset);
KMBBCTR_loopproperties = IMBBCTR;
 /* line 754: */
 /* line 755: */
 /* line 756: */
if ( (HMBBCTR_whileordo.Fn==YBAACTR_whilefn) )
{ 
LMBBCTR.Mode = WEAACTR_boolmode;
LMBBCTR.Info = PKJACTR_defaultinfo;
LMBBCTR.Extra = A_EMPTY(MMBBCTR,3);
NMBBCTR_enquiry = LMBBCTR;
 /* line 757: */
KYABCTR_while();
 /* line 758: */
 /* line 759: */
OMBBCTR.Value = (&NMBBCTR_enquiry);
OMBBCTR.End = (A68_55 *)A68_NIL;
OMBBCTR.Type = ILJACTR_enquiryresult;
A_CALLPROC(NL(BEBBCTR_enquiryclause),(OMBBCTR),(OMBBCTR,(NL(BEBBCTR_enquiryclause)).nonlocals));
 /* line 760: */
MYABCTR_whiledo((&NMBBCTR_enquiry));
 /* line 762: */
 /* line 763: */
PMBBCTR = (*NL(XZABCTR_currentimperative)) ;
switch ( PMBBCTR.mode )
{ 
case 20: /* STRUCT(INT,INT,BITS,INT)  */
QMBBCTR_s = (PMBBCTR.data.mode20);
 /* line 764: */
 /* line 765: */
{ 
WXIACTR_assert(SMBBCTR, (QMBBCTR_s.Fn==XBAACTR_dofn));
 /* line 766: */
 /* line 767: */
 /* line 768: */
 /* line 769: */
UMBBCTR = QMBBCTR_s.Props ;
TMBBCTR.Block = (A_LB_GE(UMBBCTR,WCAACTR_decbit)&!KMBBCTR_loopproperties.Block);
 /* line 770: */
TMBBCTR.Dynamicresult = A68_FALSE;
 /* line 771: */
TMBBCTR.Discardeddynamicresult = ((A68_BITS )(QMBBCTR_s.Props&MDAACTR_dybits)!=0X0U);
 /* line 772: */
TMBBCTR.Type = (QMBBCTR_s.Fn+LBAACTR_separatoroffset);
VMBBCTR_seriesproperties = TMBBCTR;
 /* line 773: */
 /* line 774: */
 /* line 775: */
WMBBCTR.Value = Answer.Value;
WMBBCTR.End = (&FMBBCTR_endofseries);
 /* line 776: */
WMBBCTR.Type = ELJACTR_voidresult;
 /* line 777: */
 /* line 778: */
 /* line 779: */
A_CALLPROC(NL(HDBBCTR_serialclause),(VMBBCTR_seriesproperties, WMBBCTR),(VMBBCTR_seriesproperties, WMBBCTR,(NL(HDBBCTR_serialclause)).nonlocals));
} 
break;
default: 
 /* line 780: */
SXIACTR_terminalerror(666);
break;
} 
 /* line 782: */
 /* line 784: */
 /* line 786: */
FZABCTR_whileod();
} 
else
{ 
 /* line 787: */
XMBBCTR.Value = Answer.Value;
XMBBCTR.End = (&FMBBCTR_endofseries);
 /* line 788: */
XMBBCTR.Type = ELJACTR_voidresult;
A_CALLPROC(NL(HDBBCTR_serialclause),(KMBBCTR_loopproperties, XMBBCTR),(KMBBCTR_loopproperties, XMBBCTR,(NL(HDBBCTR_serialclause)).nonlocals));
 /* line 789: */
 /* line 790: */
 /* line 791: */
 /* line 792: */
 /* line 793: */
A_CALLPROC(MZABCTR_od,(),((MZABCTR_od).nonlocals));
} 
} 
break;
default: 
 /* line 794: */
 /* line 795: */
SXIACTR_terminalerror(666);
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

A_STATIC A68_VOID  DNBBCTR_loopclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, A68_71 ** Frobytlist, void *NonLocals)
#define NL(x) (((ENBBCTR_loopclause *)NonLocals)->x)
{ 
A68_55  FNBBCTR_startofloop;
A68_55 * GNBBCTR_endofloop;
A68_64  HNBBCTR_control;
A68_64  INBBCTR_step;
A68_194  JNBBCTR;  /* collateral clause result */
A68_BITS  KNBBCTR;  /* ADICOPS - >= */
A68_BITS  LNBBCTR;  /* ADICOPS - >= */
A68_BITS  MNBBCTR;  /* ADICOPS - >= */
A68_BITS  NNBBCTR;  /* ADICOPS - >= */
A68_194  ONBBCTR_loop;
A68_180  PNBBCTR;  /* united object - for case conformity */
A68_156  QNBBCTR_id;
A68_64  RNBBCTR;  /* collateral clause result */
A68_INT  SNBBCTR;  /* YIELD */
A68_67  TNBBCTR_iden;
A68_INT * UNBBCTR;  /* YIELD */
A68_65  VNBBCTR;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(loopclause);
 /* line 806: */
 /* line 807: */
{ 
FNBBCTR_startofloop = HIAACTR_unsetlabel;
 /* line 808: */
GNBBCTR_endofloop = Answer.End;
 /* line 809: */
HNBBCTR_control = DLJACTR_skipvalue;
 /* line 810: */
INBBCTR_step = DLJACTR_skipvalue;
 /* line 812: */
 /* line 813: */
JNBBCTR.Control = (&HNBBCTR_control);
 /* line 814: */
JNBBCTR.Step = (&INBBCTR_step);
 /* line 815: */
KNBBCTR = Starter.Props ;
JNBBCTR.Forpart = A_LB_GE(KNBBCTR,IDAACTR_forpartbit);
 /* line 816: */
LNBBCTR = Starter.Props ;
JNBBCTR.Frompart = A_LB_GE(LNBBCTR,JDAACTR_frompartbit);
 /* line 817: */
MNBBCTR = Starter.Props ;
JNBBCTR.Bypart = A_LB_GE(MNBBCTR,KDAACTR_bypartbit);
 /* line 818: */
NNBBCTR = Starter.Props ;
JNBBCTR.Topart = A_LB_GE(NNBBCTR,LDAACTR_topartbit);
ONBBCTR_loop = JNBBCTR;
 /* line 820: */
 /* line 821: */
if ( (*(&((&ONBBCTR_loop)->Forpart))) )
{ 
A_CALLPROC(NL(BABBCTR_read),(),((NL(BABBCTR_read)).nonlocals));
 /* line 822: */
 /* line 823: */
PNBBCTR = (*NL(XZABCTR_currentimperative)) ;
switch ( PNBBCTR.mode )
{ 
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
QNBBCTR_id = (PNBBCTR.data.mode11);
 /* line 824: */
{ 
DVVACTR_iddec(QNBBCTR_id, (A68_71 **)A68_NIL);
 /* line 825: */
 /* line 826: */
 /* line 827: */
SNBBCTR = QNBBCTR_id.Decno ;
RNBBCTR.Mode = (*(&((&A_R1INDEX(WPKACTR_ids,SNBBCTR))->Mode)));
 /* line 828: */
RNBBCTR.Info = PKJACTR_defaultinfo;
{ 
 /* line 829: */
UNBBCTR = (&((&TNBBCTR_iden)->Idno)) ;
(*UNBBCTR) = QNBBCTR_id.Decno;
 /* line 830: */
 /* line 831: */
 /* line 832: */
RNBBCTR.Extra = A_UNITE(VNBBCTR,mode4,4,TNBBCTR_iden);
} 
 /* line 833: */
 /* line 834: */
BHBBCTR_assignment((&HNBBCTR_control), RNBBCTR);
} 
break;
default: 
 /* line 835: */
 /* line 836: */
SXIACTR_terminalerror(666);
break;
} 
} 
 /* line 838: */
CEABCTR_for((&ONBBCTR_loop), Starter.Resultmode, Frobytlist);
 /* line 839: */
 /* line 840: */
A_CALLPROC(NL(CMBBCTR_loopbody),(Body, Answer),(Body, Answer,(NL(CMBBCTR_loopbody)).nonlocals));
} 
A_PROC_EXIT(loopclause);
return;
} 
#undef NL
 /* line 844: */
 /* line 845: */
 /* line 847: */

A_STATIC A68_VOID  BOBBCTR_forallclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, A68_71 ** Foralllist, void *NonLocals)
#define NL(x) (((COBBCTR_forallclause *)NonLocals)->x)
{ 
A68_55  DOBBCTR_startofloop;
A68_55 * EOBBCTR_endofloop;
A68_INT  FOBBCTR_controlcount;
A68_298  HOBBCTR_generator;   /* proc value of non-global proc */
A68_198  NOBBCTR;  /* avoid structure result */
A68_198  MOBBCTR_controls;
A68_71 ** OOBBCTR_thisforalllist;
A68_195 * POBBCTR_control;
A68_INT  QOBBCTR;  /* forall loop counter */
A68_180  ROBBCTR;  /* united object - for case conformity */
A68_156  SOBBCTR_id;
A68_64  TOBBCTR;  /* collateral clause result */
A68_INT  UOBBCTR;  /* YIELD */
A68_67  VOBBCTR_iden;
A68_INT * WOBBCTR;  /* YIELD */
A68_65  XOBBCTR;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(forallclause);
 /* line 851: */
 /* line 852: */
{ 
DOBBCTR_startofloop = HIAACTR_unsetlabel;
 /* line 853: */
EOBBCTR_endofloop = Answer.End;
 /* line 854: */
FOBBCTR_controlcount = Starter.Resultmode;
 /* line 855: */
A_CLOSURE( HOBBCTR_generator, IOBBCTR_generator, JOBBCTR_generator );
(( JOBBCTR_generator * ) ( HOBBCTR_generator.nonlocals )) -> FOBBCTR_controlcount = FOBBCTR_controlcount;
A_CALLPROC(HOBBCTR_generator,(A68_TRUE, &NOBBCTR),(A68_TRUE, &NOBBCTR,(HOBBCTR_generator).nonlocals));
MOBBCTR_controls = NOBBCTR;
 /* line 857: */
OOBBCTR_thisforalllist = Foralllist;
 /* line 859: */
 /* line 860: */
QOBBCTR = MOBBCTR_controls.upb -1;
POBBCTR_control = MOBBCTR_controls.data;
for (;QOBBCTR-- >= 0;
(POBBCTR_control++
) )
{
 /* line 861: */
A_CALLPROC(NL(BABBCTR_read),(),((NL(BABBCTR_read)).nonlocals));
 /* line 862: */
 /* line 863: */
ROBBCTR = (*NL(XZABCTR_currentimperative)) ;
switch ( ROBBCTR.mode )
{ 
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
SOBBCTR_id = (ROBBCTR.data.mode11);
 /* line 864: */
 /* line 871: */
{ 
DVVACTR_iddec(SOBBCTR_id, OOBBCTR_thisforalllist);
 /* line 872: */
OOBBCTR_thisforalllist = (&((*OOBBCTR_thisforalllist)->Rest));
 /* line 874: */
 /* line 875: */
 /* line 876: */
UOBBCTR = SOBBCTR_id.Decno ;
TOBBCTR.Mode = (*(&((&A_R1INDEX(WPKACTR_ids,UOBBCTR))->Mode)));
 /* line 877: */
TOBBCTR.Info = PKJACTR_defaultinfo;
{ 
 /* line 878: */
WOBBCTR = (&((&VOBBCTR_iden)->Idno)) ;
(*WOBBCTR) = SOBBCTR_id.Decno;
 /* line 879: */
 /* line 880: */
 /* line 881: */
TOBBCTR.Extra = A_UNITE(XOBBCTR,mode4,4,VOBBCTR_iden);
} 
 /* line 882: */
 /* line 883: */
BHBBCTR_assignment((&(POBBCTR_control->Ident)), TOBBCTR);
} 
break;
default: 
 /* line 884: */
 /* line 885: */
SXIACTR_terminalerror(666);
break;
} 
}
 /* line 887: */
QNABCTR_forall(MOBBCTR_controls, Foralllist);
 /* line 888: */
 /* line 889: */
A_CALLPROC(NL(CMBBCTR_loopbody),(Body, Answer),(Body, Answer,(NL(CMBBCTR_loopbody)).nonlocals));
} 
A_PROC_EXIT(forallclause);
return;
} 
#undef NL

A_STATIC A68_71 * GPBBCTR_assignment(A68_71 * EPBBCTR_anonymous, A68_71  FPBBCTR_anonymous)
{ 
A68_71 ** HPBBCTR;  /* YIELD */
A68_71 * IPBBCTR;  /* clause result */
{ 
BHBBCTR_assignment((&(EPBBCTR_anonymous->Value)), FPBBCTR_anonymous.Value);
HPBBCTR = (&(EPBBCTR_anonymous->Rest)) ;
(*HPBBCTR) = FPBBCTR_anonymous.Rest;
IPBBCTR = EPBBCTR_anonymous;
} 
return( IPBBCTR );
} 
#undef NL

A_STATIC A68_VOID  CCBBCTR_generator(A68_BOOL  ACBBCTR_anonymous, A68_124  *ReturnedValue, void *NonLocals)
#define NL(x) (((DCBBCTR_generator *)NonLocals)->x)
{ 
A68_124  ECBBCTR;  /* clause result */
A68_124  FCBBCTR;  /* OPERATORS - dynamic generator */
{ 
FCBBCTR.upb = 0 ;
( ACBBCTR_anonymous? A_VLOC(A68_INT ,FCBBCTR): A_VHEAP(A68_INT ,FCBBCTR) );
ECBBCTR = FCBBCTR;
} 
*ReturnedValue = (ECBBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  NCBBCTR_generator(A68_BOOL  LCBBCTR_anonymous, A68_124  *ReturnedValue, void *NonLocals)
#define NL(x) (((OCBBCTR_generator *)NonLocals)->x)
{ 
A68_124  PCBBCTR;  /* clause result */
A68_124  QCBBCTR;  /* OPERATORS - dynamic generator */
{ 
QCBBCTR.upb = NL(ZBBBCTR_paramcount) ;
( LCBBCTR_anonymous? A_VLOC(A68_INT ,QCBBCTR): A_VHEAP(A68_INT ,QCBBCTR) );
PCBBCTR = QCBBCTR;
} 
*ReturnedValue = (PCBBCTR);
return;
} 
#undef NL
 /* line 369: */
 /* line 370: */
 /* line 372: */

A_STATIC A68_VOID  YEBBCTR_enclosedclause(A68_188  Starter, A68_BOOL  Body, A68_63  Answer, A68_71 * Newvalue, void *NonLocals)
#define NL(x) (((ZEBBCTR_enclosedclause *)NonLocals)->x)
{ 
A68_281  EFBBCTR_closedclause;   /* proc value of non-global proc */
A68_281  VFBBCTR_choiceclause;   /* proc value of non-global proc */
A68_288  YIBBCTR_collateralclause;   /* proc value of non-global proc */
A68_76  CMBBCTR_loopbody;   /* proc value of non-global proc */
A68_297  CNBBCTR_loopclause;   /* proc value of non-global proc */
A68_297  AOBBCTR_forallclause;   /* proc value of non-global proc */
A68_55  YOBBCTR_endofclause;
A68_INT  ZOBBCTR;  /* ADICOPS - ABS INT */
A68_INT  APBBCTR_resultmode;
A68_INT  BPBBCTR_type;
A68_71  CPBBCTR;  /* collateral clause result */
A68_65  DPBBCTR;  /* OPERATORS - mode -> union mode */
A68_63  JPBBCTR;  /* collateral clause result */
A68_63  MPBBCTR;  /* collateral clause result */
A68_BITS  NPBBCTR;  /* ADICOPS - >= */
A68_INT  OPBBCTR;  /* ADICOPS - ABS INT */
A68_INT  PPBBCTR;  /* ADICOPS - ABS INT */
A68_INT  QPBBCTR_resultmode;
A68_BOOL  RPBBCTR_newanswer;
A68_71  SPBBCTR;  /* collateral clause result */
A68_65  TPBBCTR;  /* OPERATORS - mode -> union mode */
A68_63  UPBBCTR;  /* collateral clause result */
A68_63  VPBBCTR;  /* collateral clause result */
A68_71 * WPBBCTR_valuelist;
A68_INT  XPBBCTR;  /* to part of loop */
A68_INT  YPBBCTR;  /* loop control */
A68_71  ZPBBCTR;  /* collateral clause result */
A68_65  AQBBCTR;  /* OPERATORS - mode -> union mode */
A68_297  BQBBCTR;  /* clause result */
A68_63  CQBBCTR;  /* collateral clause result */
A68_INT  DQBBCTR;  /* ADICOPS - ABS INT */
A68_INT  EQBBCTR_resultmode;
A68_71  FQBBCTR;  /* collateral clause result */
A68_65  GQBBCTR;  /* OPERATORS - mode -> union mode */
A68_63  HQBBCTR;  /* collateral clause result */
A68_63  KQBBCTR;  /* collateral clause result */
A68_INT  LQBBCTR;  /* ADICOPS - ABS INT */
A_PROC_ENTRY(enclosedclause);
 /* line 392: */
 /* line 394: */
{ 
 /* line 395: */
A_CLOSURE( EFBBCTR_closedclause, FFBBCTR_closedclause, GFBBCTR_closedclause );
(( GFBBCTR_closedclause * ) ( EFBBCTR_closedclause.nonlocals )) -> HDBBCTR_serialclause = NL(HDBBCTR_serialclause);
 /* line 429: */
 /* line 430: */
A_CLOSURE( VFBBCTR_choiceclause, WFBBCTR_choiceclause, XFBBCTR_choiceclause );
(( XFBBCTR_choiceclause * ) ( VFBBCTR_choiceclause.nonlocals )) -> BABBCTR_read = NL(BABBCTR_read);
(( XFBBCTR_choiceclause * ) ( VFBBCTR_choiceclause.nonlocals )) -> XZABCTR_currentimperative = NL(XZABCTR_currentimperative);
(( XFBBCTR_choiceclause * ) ( VFBBCTR_choiceclause.nonlocals )) -> BEBBCTR_enquiryclause = NL(BEBBCTR_enquiryclause);
(( XFBBCTR_choiceclause * ) ( VFBBCTR_choiceclause.nonlocals )) -> HDBBCTR_serialclause = NL(HDBBCTR_serialclause);
 /* line 618: */
A_CLOSURE( YIBBCTR_collateralclause, ZIBBCTR_collateralclause, AJBBCTR_collateralclause );
(( AJBBCTR_collateralclause * ) ( YIBBCTR_collateralclause.nonlocals )) -> PEBBCTR_phrase = NL(PEBBCTR_phrase);
(( AJBBCTR_collateralclause * ) ( YIBBCTR_collateralclause.nonlocals )) -> XZABCTR_currentimperative = NL(XZABCTR_currentimperative);
 /* line 734: */
 /* line 735: */
A_CLOSURE( CMBBCTR_loopbody, DMBBCTR_loopbody, EMBBCTR_loopbody );
(( EMBBCTR_loopbody * ) ( CMBBCTR_loopbody.nonlocals )) -> BABBCTR_read = NL(BABBCTR_read);
(( EMBBCTR_loopbody * ) ( CMBBCTR_loopbody.nonlocals )) -> XZABCTR_currentimperative = NL(XZABCTR_currentimperative);
(( EMBBCTR_loopbody * ) ( CMBBCTR_loopbody.nonlocals )) -> BEBBCTR_enquiryclause = NL(BEBBCTR_enquiryclause);
(( EMBBCTR_loopbody * ) ( CMBBCTR_loopbody.nonlocals )) -> HDBBCTR_serialclause = NL(HDBBCTR_serialclause);
 /* line 797: */
 /* line 798: */
A_CLOSURE( CNBBCTR_loopclause, DNBBCTR_loopclause, ENBBCTR_loopclause );
(( ENBBCTR_loopclause * ) ( CNBBCTR_loopclause.nonlocals )) -> BABBCTR_read = NL(BABBCTR_read);
(( ENBBCTR_loopclause * ) ( CNBBCTR_loopclause.nonlocals )) -> XZABCTR_currentimperative = NL(XZABCTR_currentimperative);
(( ENBBCTR_loopclause * ) ( CNBBCTR_loopclause.nonlocals )) -> CMBBCTR_loopbody = CMBBCTR_loopbody;
 /* line 842: */
 /* line 843: */
A_CLOSURE( AOBBCTR_forallclause, BOBBCTR_forallclause, COBBCTR_forallclause );
(( COBBCTR_forallclause * ) ( AOBBCTR_forallclause.nonlocals )) -> BABBCTR_read = NL(BABBCTR_read);
(( COBBCTR_forallclause * ) ( AOBBCTR_forallclause.nonlocals )) -> XZABCTR_currentimperative = NL(XZABCTR_currentimperative);
(( COBBCTR_forallclause * ) ( AOBBCTR_forallclause.nonlocals )) -> CMBBCTR_loopbody = CMBBCTR_loopbody;
 /* line 893: */
YOBBCTR_endofclause = HIAACTR_unsetlabel;
 /* line 895: */
 /* line 896: */
if ( (Starter.Fn==HBAACTR_beginfn) )
{ 
 /* line 897: */
if ( ((Starter.Mode>0)&!Body) )
{ 
ZOBBCTR = Starter.Resultmode ;
APBBCTR_resultmode = A_ABS(ZOBBCTR);
 /* line 898: */
BPBBCTR_type = KLJACTR_noparticularresult;
 /* line 900: */
 /* line 901: */
CPBBCTR.Value.Mode = APBBCTR_resultmode;
CPBBCTR.Value.Info = PKJACTR_defaultinfo;
CPBBCTR.Value.Extra = A_EMPTY(DPBBCTR,3);
CPBBCTR.Rest = (*NL(SEBBCTR_valuestack));
(*NL(SEBBCTR_valuestack)) = GPBBCTR_assignment(Newvalue, CPBBCTR);
 /* line 903: */
 /* line 904: */
 /* line 905: */
 /* line 906: */
 /* line 907: */
JPBBCTR.Value = (&((*NL(SEBBCTR_valuestack))->Value));
 /* line 909: */
JPBBCTR.End = (&YOBBCTR_endofclause);
 /* line 910: */
JPBBCTR.Type = Answer.Type;
 /* line 911: */
 /* line 912: */
A_CALLPROC(EFBBCTR_closedclause,(Starter, Body, JPBBCTR),(Starter, Body, JPBBCTR,(EFBBCTR_closedclause).nonlocals));
} 
else
{ 
WXIACTR_assert(LPBBCTR, (Answer.Type!=JLJACTR_optboolresult));
 /* line 913: */
 /* line 914: */
 /* line 915: */
 /* line 916: */
 /* line 917: */
MPBBCTR.Value = Answer.Value;
 /* line 918: */
 /* line 919: */
if ( (Answer.End==(A68_55 *)A68_NIL) )
{ 
 /* line 920: */
MPBBCTR.End = (&YOBBCTR_endofclause);
} 
else
{ 
 /* line 921: */
MPBBCTR.End = Answer.End;
} 
 /* line 922: */
 /* line 923: */
NPBBCTR = Starter.Props ;
if ( A_LB_GE(NPBBCTR,TCAACTR_exitbit) )
{ 
 /* line 924: */
OPBBCTR = Answer.Type ;
MPBBCTR.Type = A_ABS(OPBBCTR);
} 
else
{ 
 /* line 925: */
 /* line 926: */
MPBBCTR.Type = Answer.Type;
} 
 /* line 927: */
 /* line 928: */
A_CALLPROC(EFBBCTR_closedclause,(Starter, Body, MPBBCTR),(Starter, Body, MPBBCTR,(EFBBCTR_closedclause).nonlocals));
} 
} 
else
{ 
 /* line 929: */
if ( (Starter.Fn==IBAACTR_collbeginfn) )
{ 
PPBBCTR = Starter.Resultmode ;
QPBBCTR_resultmode = A_ABS(PPBBCTR);
 /* line 930: */
RPBBCTR_newanswer = (Starter.Mode>0);
 /* line 932: */
 /* line 933: */
 /* line 934: */
if ( (RPBBCTR_newanswer|(Answer.Type==HLJACTR_routineresult)) )
{ 
 /* line 935: */
 /* line 936: */
SPBBCTR.Value.Mode = QPBBCTR_resultmode;
 /* line 938: */
SPBBCTR.Value.Info = PKJACTR_defaultinfo;
 /* line 940: */
SPBBCTR.Value.Extra = A_EMPTY(TPBBCTR,3);
SPBBCTR.Rest = (*NL(SEBBCTR_valuestack));
(*NL(SEBBCTR_valuestack)) = GPBBCTR_assignment(Newvalue, SPBBCTR);
 /* line 941: */
 /* line 942: */
 /* line 943: */
 /* line 944: */
UPBBCTR.Value = (&((*NL(SEBBCTR_valuestack))->Value));
UPBBCTR.End = (A68_55 *)A68_NIL;
 /* line 945: */
UPBBCTR.Type = KLJACTR_noparticularresult;
 /* line 946: */
 /* line 948: */
A_CALLPROC(YIBBCTR_collateralclause,(Starter, UPBBCTR),(Starter, UPBBCTR,(YIBBCTR_collateralclause).nonlocals));
} 
else
{ 
 /* line 949: */
 /* line 950: */
VPBBCTR.Value = Answer.Value;
VPBBCTR.End = (A68_55 *)A68_NIL;
 /* line 951: */
VPBBCTR.Type = KLJACTR_noparticularresult;
 /* line 952: */
 /* line 953: */
A_CALLPROC(YIBBCTR_collateralclause,(Starter, VPBBCTR),(Starter, VPBBCTR,(YIBBCTR_collateralclause).nonlocals));
} 
} 
else
{ 
 /* line 954: */
 /* line 955: */
if ( ((Starter.Fn==JBAACTR_forfn)|(Starter.Fn==KBAACTR_forallfn)) )
{ 
WPBBCTR_valuelist = (*NL(SEBBCTR_valuestack));
 /* line 957: */
 /* line 958: */
XPBBCTR = Starter.Resultmode;
for ( YPBBCTR = 1;
YPBBCTR <= XPBBCTR;
YPBBCTR += 1 )
{ 
 /* line 959: */
(*NL(SEBBCTR_valuestack)) = (*(&((*NL(SEBBCTR_valuestack))->Rest)));
}
 /* line 961: */
 /* line 962: */
ZPBBCTR.Value.Mode = UEAACTR_voidmode;
ZPBBCTR.Value.Info = PKJACTR_defaultinfo;
ZPBBCTR.Value.Extra = A_EMPTY(AQBBCTR,3);
ZPBBCTR.Rest = (*NL(SEBBCTR_valuestack));
(*NL(SEBBCTR_valuestack)) = GPBBCTR_assignment(Newvalue, ZPBBCTR);
 /* line 964: */
 /* line 965: */
 /* line 966: */
if ( (Starter.Fn==JBAACTR_forfn) )
{ 
 /* line 967: */
BQBBCTR = CNBBCTR_loopclause;
} 
else
{ 
BQBBCTR = AOBBCTR_forallclause;
} 
 /* line 968: */
 /* line 969: */
CQBBCTR.Value = (&((*NL(SEBBCTR_valuestack))->Value));
CQBBCTR.End = (&YOBBCTR_endofclause);
CQBBCTR.Type = ELJACTR_voidresult;
 /* line 971: */
 /* line 973: */
 /* line 974: */
A_CALLPROC(BQBBCTR,(Starter, Body, CQBBCTR, (&WPBBCTR_valuelist)),(Starter, Body, CQBBCTR, (&WPBBCTR_valuelist),(BQBBCTR).nonlocals));
} 
else
{ 
 /* line 975: */
 /* line 976: */
if ( ((Starter.Mode>0)&!Body) )
{ 
DQBBCTR = Starter.Resultmode ;
EQBBCTR_resultmode = A_ABS(DQBBCTR);
 /* line 978: */
 /* line 979: */
FQBBCTR.Value.Mode = EQBBCTR_resultmode;
FQBBCTR.Value.Info = PKJACTR_defaultinfo;
FQBBCTR.Value.Extra = A_EMPTY(GQBBCTR,3);
FQBBCTR.Rest = (*NL(SEBBCTR_valuestack));
(*NL(SEBBCTR_valuestack)) = GPBBCTR_assignment(Newvalue, FQBBCTR);
 /* line 981: */
 /* line 982: */
 /* line 983: */
 /* line 984: */
 /* line 985: */
HQBBCTR.Value = (&((*NL(SEBBCTR_valuestack))->Value));
 /* line 987: */
HQBBCTR.End = (&YOBBCTR_endofclause);
 /* line 988: */
HQBBCTR.Type = FLJACTR_memoryresult;
 /* line 989: */
 /* line 990: */
A_CALLPROC(VFBBCTR_choiceclause,(Starter, Body, HQBBCTR),(Starter, Body, HQBBCTR,(VFBBCTR_choiceclause).nonlocals));
} 
else
{ 
WXIACTR_assert(JQBBCTR, (Answer.Type!=JLJACTR_optboolresult));
 /* line 991: */
 /* line 992: */
 /* line 993: */
 /* line 994: */
 /* line 995: */
KQBBCTR.Value = Answer.Value;
 /* line 996: */
 /* line 997: */
if ( (Answer.End==(A68_55 *)A68_NIL) )
{ 
 /* line 998: */
KQBBCTR.End = (&YOBBCTR_endofclause);
} 
else
{ 
 /* line 1000: */
KQBBCTR.End = Answer.End;
} 
 /* line 1001: */
LQBBCTR = Answer.Type ;
KQBBCTR.Type = A_ABS(LQBBCTR);
 /* line 1002: */
 /* line 1003: */
A_CALLPROC(VFBBCTR_choiceclause,(Starter, Body, KQBBCTR),(Starter, Body, KQBBCTR,(VFBBCTR_choiceclause).nonlocals));
} 
} 
} 
} 
} 
A_PROC_EXIT(enclosedclause);
return;
} 
#undef NL

A_STATIC A68_VOID  OQBBCTR_optboolexpression(A68_INT  Warn, void *NonLocals)
#define NL(x) (((PQBBCTR_optboolexpression *)NonLocals)->x)
{ 
A68_64 * QQBBCTR_operand;
A68_BOOL  RQBBCTR_orel;
A68_63  SQBBCTR;  /* collateral clause result */
A_PROC_ENTRY(optboolexpression);
 /* line 1009: */
 /* line 1010: */
{ 
QQBBCTR_operand = (&((*NL(SEBBCTR_valuestack))->Value));
 /* line 1011: */
RQBBCTR_orel = (Warn==KCAACTR_orelwarn);
 /* line 1012: */
XOZACTR_optboolwarning(RQBBCTR_orel, QQBBCTR_operand);
 /* line 1014: */
 /* line 1015: */
 /* line 1016: */
SQBBCTR.Value = QQBBCTR_operand;
SQBBCTR.End = (A68_55 *)A68_NIL;
SQBBCTR.Type = KLJACTR_noparticularresult;
 /* line 1017: */
 /* line 1018: */
A_CALLPROC(NL(PEBBCTR_phrase),(A68_FALSE, SQBBCTR, A68_FALSE),(A68_FALSE, SQBBCTR, A68_FALSE,(NL(PEBBCTR_phrase)).nonlocals));
 /* line 1019: */
 /* line 1020: */
QQZACTR_optbooloper();
} 
A_PROC_EXIT(optboolexpression);
return;
} 
#undef NL

A_STATIC A68_VOID  XABBCTR_skiproutine(void *NonLocals)
#define NL(x) (((YABBCTR_skiproutine *)NonLocals)->x)
{ 
A68_180  ZABBCTR;  /* united object - for case conformity */
A68_BOOL  ABBBCTR;  /* clause result */
A68_189  BBBBCTR_t;
A68_BOOL  CBBBCTR;  /* clause result */
A_PROC_ENTRY(skiproutine);
for ( ;; )
{ 
A_CALLPROC(NL(BABBCTR_read),(),((NL(BABBCTR_read)).nonlocals));
 /* line 133: */
 /* line 134: */
ZABBCTR = (*NL(XZABCTR_currentimperative)) ;
switch ( ZABBCTR.mode )
{ 
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
{ 
A_CALLPROC(NL(WABBCTR_skiproutine),(),((NL(WABBCTR_skiproutine)).nonlocals));
 /* line 135: */
ABBBCTR = A68_TRUE;
} 
break;
case 22: /* STRUCT(INT,BITS)  */
BBBBCTR_t = (ZABBCTR.data.mode22);
 /* line 136: */
ABBBCTR = (BBBBCTR_t.Fn!=GCAACTR_routinendfn);
break;
default: 
 /* line 137: */
 /* line 138: */
ABBBCTR = A68_TRUE;
break;
} 
 /* line 140: */
CBBBCTR = ABBBCTR;
if ( !CBBBCTR ) break;
/*SKIP*/;
}
A_PROC_EXIT(skiproutine);
return;
} 
#undef NL

A_STATIC A68_VOID  FBBBCTR_routine(A68_122  Routine, void *NonLocals)
#define NL(x) (((GBBBCTR_routine *)NonLocals)->x)
{ 
A68_INT  IBBBCTR;  /* YIELD */
A68_123  HBBBCTR_environ;
A68_180  JBBBCTR;  /* united object - for case conformity */
A68_164  KBBBCTR_label;
A68_123  LBBBCTR;  /* avoid structure result */
A68_123  MBBBCTR_labelenviron;
A68_BOOL  NBBBCTR;  /* clause result */
A68_122  OBBBCTR_r;
A68_BOOL  TBBBCTR;  /* clause result */
A68_INT  UBBBCTR_resulttype;
A68_64  VBBBCTR_result;
A68_55 * WBBBCTR_endofroutine;
A68_199  XBBBCTR;  /* avoid structure result */
A68_199  YBBBCTR_proc;
A68_INT  ZBBBCTR_paramcount;
A68_272  BCBBCTR_generator;   /* proc value of non-global proc */
A68_124  GCBBCTR;  /* avoid structure result */
A68_124  HCBBCTR_nulllist;
A68_124  ICBBCTR_parammodes;
A68_124  JCBBCTR_paramdecnos;
A68_124  KCBBCTR;  /* avoid structure result */
A68_272  MCBBCTR_generator;   /* proc value of non-global proc */
A68_124  RCBBCTR;  /* avoid structure result */
A68_INT  SCBBCTR_i;
A68_INT  TCBBCTR;  /* to part of loop */
A68_180  UCBBCTR;  /* united object - for case conformity */
A68_156  VCBBCTR_id;
A68_INT * ADBBCTR;  /* YIELD */
A68_63  DDBBCTR;  /* collateral clause result */
A68_BITS  EDBBCTR;  /* ADICOPS - >= */
A_PROC_ENTRY(routine);
 /* line 147: */
 /* line 148: */
{ 
IBBBCTR = Routine.Maxname ;
HBBBCTR_environ = (*(&((&A_R1INDEX(WPKACTR_ids,IBBBCTR))->Environ)));
 /* line 150: */
for ( ;; )
{ 
A_CALLPROC(NL(HABBCTR_lookahead),(),((NL(HABBCTR_lookahead)).nonlocals));
 /* line 151: */
 /* line 152: */
JBBBCTR = (*NL(ZZABCTR_nextimperative)) ;
switch ( JBBBCTR.mode )
{ 
case 14: /* STRUCT(REF MODE26,INT,INT,BOOL)  */
KBBBCTR_label = (JBBBCTR.data.mode14);
 /* line 153: */
 /* line 154: */
{ 
RQWACTR_labdec(KBBBCTR_label);
 /* line 155: */
 /* line 156: */
GXWACTR_environoflabel( KBBBCTR_label.Labno, &LBBBCTR );
MBBBCTR_labelenviron = LBBBCTR;
 /* line 157: */
 /* line 158: */
if ( TRLACTR_isnewerthan(MBBBCTR_labelenviron, HBBBCTR_environ) )
{ 
 /* line 159: */
HBBBCTR_environ = MBBBCTR_labelenviron;
} 
 /* line 160: */
A_CALLPROC(NL(BABBCTR_read),(),((NL(BABBCTR_read)).nonlocals));
 /* line 161: */
 /* line 163: */
NBBBCTR = A68_TRUE;
} 
break;
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
OBBBCTR_r = (JBBBCTR.data.mode12);
 /* line 164: */
 /* line 165: */
 /* line 167: */
if ( (IOMACTR_modetype(Routine.Mode)==GEAACTR_procp) )
{ 
WXIACTR_assert(SBBBCTR, A_VC_EQ(OBBBCTR_r.Name,RBBBCTR));
 /* line 168: */
A_CALLPROC(NL(BABBCTR_read),(),((NL(BABBCTR_read)).nonlocals));
 /* line 169: */
A_CALLPROC(NL(WABBCTR_skiproutine),(),((NL(WABBCTR_skiproutine)).nonlocals));
 /* line 170: */
 /* line 171: */
NBBBCTR = A68_TRUE;
} 
else
{ 
 /* line 172: */
 /* line 173: */
NBBBCTR = A68_FALSE;
} 
break;
default: 
 /* line 174: */
 /* line 175: */
NBBBCTR = A68_FALSE;
break;
} 
 /* line 177: */
TBBBCTR = NBBBCTR;
if ( !TBBBCTR ) break;
/*SKIP*/;
}
 /* line 179: */
UBBBCTR_resulttype = HLJACTR_routineresult;
 /* line 180: */
 /* line 181: */
 /* line 183: */
YRLACTR_startnewlevel(Routine.Rdenno);
 /* line 185: */
STMACTR_procinfo( Routine.Mode, &XBBBCTR );
YBBBCTR_proc = XBBBCTR;
 /* line 186: */
ZBBBCTR_paramcount = YBBBCTR_proc.Parameters;
 /* line 187: */
A_CLOSURE( BCBBCTR_generator, CCBBCTR_generator, DCBBCTR_generator );
A_CALLPROC(BCBBCTR_generator,(A68_FALSE, &GCBBCTR),(A68_FALSE, &GCBBCTR,(BCBBCTR_generator).nonlocals));
HCBBCTR_nulllist = GCBBCTR;
 /* line 188: */
 /* line 189: */
 /* line 191: */
 /* line 192: */
 /* line 193: */
if ( (ZBBBCTR_paramcount>0) )
{ 
A_CALLPROC(AWMACTR_parameters,(Routine.Mode, &KCBBCTR),(Routine.Mode, &KCBBCTR,(AWMACTR_parameters).nonlocals));
ICBBCTR_parammodes = KCBBCTR;
 /* line 194: */
A_CLOSURE( MCBBCTR_generator, NCBBCTR_generator, OCBBCTR_generator );
(( OCBBCTR_generator * ) ( MCBBCTR_generator.nonlocals )) -> ZBBBCTR_paramcount = ZBBBCTR_paramcount;
A_CALLPROC(MCBBCTR_generator,(A68_FALSE, &RCBBCTR),(A68_FALSE, &RCBBCTR,(MCBBCTR_generator).nonlocals));
JCBBCTR_paramdecnos = RCBBCTR;
 /* line 195: */
 /* line 196: */
TCBBCTR = ZBBBCTR_paramcount;
for ( SCBBCTR_i = 1;
SCBBCTR_i <= TCBBCTR;
SCBBCTR_i += 1 )
{ 
 /* line 197: */
A_CALLPROC(NL(BABBCTR_read),(),((NL(BABBCTR_read)).nonlocals));
 /* line 198: */
 /* line 199: */
UCBBCTR = (*NL(XZABCTR_currentimperative)) ;
switch ( UCBBCTR.mode )
{ 
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
VCBBCTR_id = (UCBBCTR.data.mode11);
 /* line 200: */
 /* line 201: */
{ 
 /* line 202: */
WXIACTR_assert(XCBBCTR, (VCBBCTR_id.Type==3));
 /* line 203: */
 /* line 204: */
WXIACTR_assert(ZCBBCTR, (HCNACTR_finddeflexmode(VCBBCTR_id.Mode)==HCNACTR_finddeflexmode((*(&A_VINDEX(ICBBCTR_parammodes,SCBBCTR_i))))));
 /* line 205: */
ADBBCTR = (&A_VINDEX(JCBBCTR_paramdecnos,SCBBCTR_i)) ;
(*ADBBCTR) = VCBBCTR_id.Decno;
 /* line 206: */
 /* line 207: */
 /* line 208: */
 /* line 210: */
DVVACTR_iddec(VCBBCTR_id, (A68_71 **)A68_NIL);
} 
break;
default: 
 /* line 211: */
 /* line 212: */
WXIACTR_assert(CDBBCTR, A68_FALSE);
break;
} 
}
 /* line 213: */
 /* line 214: */
} 
else
{ 
 /* line 215: */
JCBBCTR_paramdecnos = HCBBCTR_nulllist;
} 
 /* line 217: */
 /* line 218: */
 /* line 219: */
 /* line 220: */
 /* line 221: */
 /* line 223: */
TNYACTR_startroutine(Routine, HBBBCTR_environ, JCBBCTR_paramdecnos, YBBBCTR_proc.Result, (&VBBBCTR_result));
 /* line 228: */
 /* line 229: */
 /* line 230: */
DDBBCTR.Value = (&VBBBCTR_result);
DDBBCTR.End = WBBBCTR_endofroutine;
DDBBCTR.Type = UBBBCTR_resulttype;
 /* line 231: */
 /* line 232: */
EDBBCTR = Routine.Props ;
A_CALLPROC((*NL(VABBCTR_phrase_)),(A_LB_GE(EDBBCTR,NCAACTR_ccbit), DDBBCTR, A68_FALSE),(A_LB_GE(EDBBCTR,NCAACTR_ccbit), DDBBCTR, A68_FALSE,((*NL(VABBCTR_phrase_))).nonlocals));
 /* line 235: */
MOYACTR_endroutine(Routine, (&VBBBCTR_result));
 /* line 236: */
 /* line 237: */
A_CALLPROC(BSLACTR_reverttopreviouslevel,(),((BSLACTR_reverttopreviouslevel).nonlocals));
} 
A_PROC_EXIT(routine);
return;
} 
#undef NL

A_STATIC A68_VOID  IDBBCTR_serialclause(A68_59  Properties, A68_63  Answer, void *NonLocals)
#define NL(x) (((JDBBCTR_serialclause *)NonLocals)->x)
{ 
A68_55 * KDBBCTR_endofseries;
A68_BOOL  LDBBCTR_discardlevelactivated;
A68_BOOL  MDBBCTR_firstexit;
A68_63  NDBBCTR;  /* collateral clause result */
A68_63  ODBBCTR_seriesanswer;
A68_180  PDBBCTR;  /* united object - for case conformity */
A68_187  QDBBCTR_s;
A68_BITS  RDBBCTR;  /* ADICOPS - >= */
A68_BOOL  SDBBCTR_dontpullbitset;
A68_BOOL  TDBBCTR;  /* clause result */
A68_189  WDBBCTR_t;
A68_59  XDBBCTR;  /* collateral clause result */
A68_BITS  YDBBCTR;  /* ADICOPS - >= */
A68_BOOL  ZDBBCTR;  /* clause result */
A_PROC_ENTRY(serialclause);
 /* line 246: */
 /* line 247: */
{ 
KDBBCTR_endofseries = Answer.End;
 /* line 248: */
LDBBCTR_discardlevelactivated = A68_FALSE;
 /* line 249: */
MDBBCTR_firstexit = A68_TRUE;
 /* line 251: */
 /* line 252: */
 /* line 253: */
 /* line 255: */
A_CALLPROC(WQZACTR_startseries,(Properties, (&KDBBCTR_endofseries), (&LDBBCTR_discardlevelactivated)),(Properties, (&KDBBCTR_endofseries), (&LDBBCTR_discardlevelactivated),(WQZACTR_startseries).nonlocals));
 /* line 257: */
 /* line 258: */
NDBBCTR.Value = Answer.Value;
NDBBCTR.End = KDBBCTR_endofseries;
NDBBCTR.Type = Answer.Type;
ODBBCTR_seriesanswer = NDBBCTR;
 /* line 260: */
for ( ;; )
{ 
A_CALLPROC((*NL(VABBCTR_phrase_)),(A68_FALSE, ODBBCTR_seriesanswer, A68_FALSE),(A68_FALSE, ODBBCTR_seriesanswer, A68_FALSE,((*NL(VABBCTR_phrase_))).nonlocals));
 /* line 262: */
 /* line 263: */
PDBBCTR = (*NL(XZABCTR_currentimperative)) ;
switch ( PDBBCTR.mode )
{ 
case 20: /* STRUCT(INT,INT,BITS,INT)  */
QDBBCTR_s = (PDBBCTR.data.mode20);
 /* line 264: */
 /* line 266: */
{ 
RDBBCTR = QDBBCTR_s.Props ;
SDBBCTR_dontpullbitset = A_LB_GE(RDBBCTR,BDAACTR_dontpullbit);
 /* line 267: */
 /* line 268: */
 /* line 269: */
if ( (QDBBCTR_s.Fn==WBAACTR_semifn) )
{ 
 /* line 271: */
HRZACTR_semi(((A68_BITS )(QDBBCTR_s.Props&MDAACTR_dybits)!=0X0U), SDBBCTR_dontpullbitset);
 /* line 272: */
 /* line 273: */
TDBBCTR = A68_TRUE;
} 
else
{ 
 /* line 274: */
 /* line 275: */
if ( (QDBBCTR_s.Fn==RBAACTR_exitfn) )
{ 
WXIACTR_assert(VDBBCTR, (Answer.End!=(A68_55 *)A68_NIL));
 /* line 276: */
 /* line 277: */
 /* line 278: */
 /* line 280: */
LRZACTR_exit(SDBBCTR_dontpullbitset, MDBBCTR_firstexit, ODBBCTR_seriesanswer);
 /* line 281: */
MDBBCTR_firstexit = A68_FALSE;
 /* line 282: */
 /* line 283: */
 /* line 284: */
TDBBCTR = A68_TRUE;
} 
else
{ 
 /* line 285: */
 /* line 286: */
 /* line 287: */
 /* line 288: */
 /* line 290: */
ERZACTR_endseries(Properties, Answer, KDBBCTR_endofseries, LDBBCTR_discardlevelactivated, SDBBCTR_dontpullbitset, !MDBBCTR_firstexit);
 /* line 291: */
 /* line 292: */
 /* line 293: */
 /* line 295: */
TDBBCTR = A68_FALSE;
} 
} 
} 
break;
case 22: /* STRUCT(INT,BITS)  */
WDBBCTR_t = (PDBBCTR.data.mode22);
 /* line 296: */
 /* line 298: */
{ 
 /* line 299: */
XDBBCTR.Block = Properties.Block;
 /* line 300: */
XDBBCTR.Dynamicresult = Properties.Dynamicresult;
 /* line 301: */
XDBBCTR.Discardeddynamicresult = Properties.Discardeddynamicresult;
 /* line 302: */
XDBBCTR.Type = (WDBBCTR_t.Fn+ZBAACTR_terminatoroffset);
 /* line 303: */
 /* line 304: */
 /* line 305: */
 /* line 306: */
 /* line 308: */
YDBBCTR = ~WDBBCTR_t.Props ;
ERZACTR_endseries(XDBBCTR, Answer, KDBBCTR_endofseries, LDBBCTR_discardlevelactivated, A_LB_GE(YDBBCTR,BDAACTR_dontpullbit), !MDBBCTR_firstexit);
 /* line 309: */
 /* line 310: */
 /* line 311: */
 /* line 312: */
TDBBCTR = A68_FALSE;
} 
break;
default: 
SXIACTR_terminalerror(656);
 /* line 313: */
 /* line 314: */
 /* line 315: */
TDBBCTR = A68_FALSE;
break;
} 
 /* line 317: */
ZDBBCTR = TDBBCTR;
if ( !ZDBBCTR ) break;
/*SKIP*/;
}
 /* line 318: */
} 
A_PROC_EXIT(serialclause);
return;
} 
#undef NL

A_STATIC A68_VOID  CEBBCTR_enquiryclause(A68_63  Answer, void *NonLocals)
#define NL(x) (((DEBBCTR_enquiryclause *)NonLocals)->x)
{ 
A68_BOOL  EEBBCTR_simple;
A68_180  FEBBCTR;  /* united object - for case conformity */
A68_187  GEBBCTR_s;
A68_BITS  HEBBCTR;  /* ADICOPS - >= */
A68_BOOL  IEBBCTR;  /* clause result */
A68_BOOL  LEBBCTR;  /* clause result */
A_PROC_ENTRY(enquiryclause);
 /* line 330: */
 /* line 331: */
{ 
EEBBCTR_simple = A68_TRUE;
 /* line 332: */
for ( ;; )
{ 
A_CALLPROC((*NL(VABBCTR_phrase_)),(A68_FALSE, Answer, EEBBCTR_simple),(A68_FALSE, Answer, EEBBCTR_simple,((*NL(VABBCTR_phrase_))).nonlocals));
 /* line 333: */
 /* line 334: */
FEBBCTR = (*NL(XZABCTR_currentimperative)) ;
switch ( FEBBCTR.mode )
{ 
case 20: /* STRUCT(INT,INT,BITS,INT)  */
GEBBCTR_s = (FEBBCTR.data.mode20);
 /* line 335: */
 /* line 336: */
 /* line 337: */
if ( (GEBBCTR_s.Fn==WBAACTR_semifn) )
{ 
 /* line 338: */
 /* line 339: */
HEBBCTR = GEBBCTR_s.Props ;
HRZACTR_semi(((A68_BITS )(GEBBCTR_s.Props&MDAACTR_dybits)!=0X0U), A_LB_GE(HEBBCTR,BDAACTR_dontpullbit));
 /* line 340: */
 /* line 341: */
 /* line 342: */
IEBBCTR = A68_TRUE;
} 
else
{ 
WXIACTR_assert(KEBBCTR, (GEBBCTR_s.Fn!=RBAACTR_exitfn));
 /* line 343: */
 /* line 344: */
 /* line 345: */
IEBBCTR = A68_FALSE;
} 
break;
default: 
 /* line 346: */
 /* line 347: */
IEBBCTR = A68_FALSE;
break;
} 
 /* line 348: */
LEBBCTR = IEBBCTR;
if ( !LEBBCTR ) break;
EEBBCTR_simple = A68_FALSE;
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

A_STATIC A68_VOID  QEBBCTR_phrase(A68_BOOL  Body, A68_63  Answer, A68_BOOL  Simple, void *NonLocals)
#define NL(x) (((REBBCTR_phrase *)NonLocals)->x)
{ 
A68_71 * SEBBCTR_valuestack;
A68_280  XEBBCTR_enclosedclause;   /* proc value of non-global proc */
A68_77  NQBBCTR_optboolexpression;   /* proc value of non-global proc */
A68_BOOL  TQBBCTR_simpleenquiry;
A68_180  UQBBCTR;  /* united object - for case conformity */
A68_191  VQBBCTR_p;
A68_191  WQBBCTR;  /* united object - for case conformity */
A68_190  XQBBCTR_l;
A68_71  YQBBCTR;  /* collateral clause result */
A68_64  ZQBBCTR;  /* avoid structure result */
A68_184  ARBBCTR_op;
A68_156  BRBBCTR_id;
A68_172  CRBBCTR_c;
A68_71 * DRBBCTR_visible;
A68_INT  ERBBCTR_i;
A68_INT  FRBBCTR;  /* to part of loop */
A68_71  GRBBCTR;  /* collateral clause result */
A68_68  HRBBCTR;  /* avoid structure result */
A68_68  IRBBCTR_temp;
A68_71  JRBBCTR;  /* collateral clause result */
A68_65  KRBBCTR;  /* OPERATORS - mode -> union mode */
A68_177  LRBBCTR_format;
A68_71  MRBBCTR;  /* collateral clause result */
A68_183  NRBBCTR;  /* collateral clause result */
A68_190  ORBBCTR;  /* OPERATORS - mode -> union mode */
A68_64  PRBBCTR;  /* avoid structure result */
A68_71  QRBBCTR;  /* collateral clause result */
A68_182  RRBBCTR;  /* collateral clause result */
A68_190  SRBBCTR;  /* OPERATORS - mode -> union mode */
A68_64  TRBBCTR;  /* avoid structure result */
A68_184  URBBCTR;  /* collateral clause result */
A68_122  VRBBCTR_r;
A68_122  WRBBCTR_savedr;
A68_BITS  XRBBCTR;  /* ADICOPS - >= */
A68_71  YRBBCTR;  /* collateral clause result */
A68_190  ZRBBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  ASBBCTR;  /* YIELD */
A68_64  BSBBCTR;  /* avoid structure result */
A68_185  CSBBCTR_w;
A68_164  DSBBCTR_l;
A68_79  ESBBCTR_u;
A68_169  FSBBCTR_c;
A68_BOOL  ISBBCTR;  /* clause result */
A68_187  JSBBCTR_s;
A68_BOOL  MSBBCTR;  /* optbool result */
A68_188  NSBBCTR_s;
A68_BOOL  QSBBCTR;  /* clause result */
A_PROC_ENTRY(phrase);
 /* line 364: */
 /* line 365: */
{ 
SEBBCTR_valuestack = (A68_71 *)A68_NIL;
 /* line 367: */
 /* line 368: */
A_CLOSURE( XEBBCTR_enclosedclause, YEBBCTR_enclosedclause, ZEBBCTR_enclosedclause );
(( ZEBBCTR_enclosedclause * ) ( XEBBCTR_enclosedclause.nonlocals )) -> HDBBCTR_serialclause = NL(HDBBCTR_serialclause);
(( ZEBBCTR_enclosedclause * ) ( XEBBCTR_enclosedclause.nonlocals )) -> BABBCTR_read = NL(BABBCTR_read);
(( ZEBBCTR_enclosedclause * ) ( XEBBCTR_enclosedclause.nonlocals )) -> XZABCTR_currentimperative = NL(XZABCTR_currentimperative);
(( ZEBBCTR_enclosedclause * ) ( XEBBCTR_enclosedclause.nonlocals )) -> BEBBCTR_enquiryclause = NL(BEBBCTR_enquiryclause);
(( ZEBBCTR_enclosedclause * ) ( XEBBCTR_enclosedclause.nonlocals )) -> PEBBCTR_phrase = NL(PEBBCTR_phrase);
(( ZEBBCTR_enclosedclause * ) ( XEBBCTR_enclosedclause.nonlocals )) -> SEBBCTR_valuestack = (&SEBBCTR_valuestack);
 /* line 1005: */
A_CLOSURE( NQBBCTR_optboolexpression, OQBBCTR_optboolexpression, PQBBCTR_optboolexpression );
(( PQBBCTR_optboolexpression * ) ( NQBBCTR_optboolexpression.nonlocals )) -> SEBBCTR_valuestack = (&SEBBCTR_valuestack);
(( PQBBCTR_optboolexpression * ) ( NQBBCTR_optboolexpression.nonlocals )) -> PEBBCTR_phrase = NL(PEBBCTR_phrase);
 /* line 1024: */
TQBBCTR_simpleenquiry = Simple;
 /* line 1025: */
for ( ;; )
{ 
A_CALLPROC(NL(BABBCTR_read),(),((NL(BABBCTR_read)).nonlocals));
 /* line 1026: */
 /* line 1027: */
UQBBCTR = (*NL(XZABCTR_currentimperative)) ;
switch ( UQBBCTR.mode )
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
A_UNCPY(VQBBCTR_p,UQBBCTR);
 /* line 1028: */
{ 
 /* line 1029: */
WQBBCTR = VQBBCTR_p ;
switch ( WQBBCTR.mode )
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
A_UNCPY(XQBBCTR_l,WQBBCTR);
 /* line 1030: */
 /* line 1031: */
ZWZACTR_load( XQBBCTR_l, &ZQBBCTR );
YQBBCTR.Value = ZQBBCTR;
YQBBCTR.Rest = SEBBCTR_valuestack;
 /* line 1032: */
SEBBCTR_valuestack = GPBBCTR_assignment(A_LOC(A68_71 ), YQBBCTR);
break;
case 10: /* STRUCT(INT,INT,INT)  */
ARBBCTR_op = (WQBBCTR.data.mode10);
 /* line 1033: */
 /* line 1034: */
MRQACTR_oper(ARBBCTR_op, (&SEBBCTR_valuestack), A_LOC(A68_71 ));
break;
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
BRBBCTR_id = (WQBBCTR.data.mode11);
 /* line 1035: */
 /* line 1037: */
DVVACTR_iddec(BRBBCTR_id, (&SEBBCTR_valuestack));
break;
case 19: /* STRUCT(INT,INT,REF MODE26)  */
CRBBCTR_c = (WQBBCTR.data.mode19);
 /* line 1038: */
 /* line 1039: */
{ 
DRBBCTR_visible = MKJACTR_nilvaluelist;
 /* line 1040: */
 /* line 1041: */
FRBBCTR = CRBBCTR_c.Number;
for ( ERBBCTR_i = 1;
ERBBCTR_i <= FRBBCTR;
ERBBCTR_i += 1 )
{ 
 /* line 1042: */
GRBBCTR.Value = (*(&(SEBBCTR_valuestack->Value)));
GRBBCTR.Rest = DRBBCTR_visible;
DRBBCTR_visible = GPBBCTR_assignment(A_LOC(A68_71 ), GRBBCTR);
 /* line 1043: */
 /* line 1044: */
SEBBCTR_valuestack = (*(&(SEBBCTR_valuestack->Rest)));
}
 /* line 1045: */
 /* line 1046: */
ESZACTR_codeinsert( CRBBCTR_c.Insert, CRBBCTR_c.Mode, DRBBCTR_visible, &HRBBCTR );
IRBBCTR_temp = HRBBCTR;
 /* line 1047: */
 /* line 1048: */
if ( (CRBBCTR_c.Mode!=UEAACTR_voidmode) )
{ 
 /* line 1049: */
JRBBCTR.Value.Mode = CRBBCTR_c.Mode;
JRBBCTR.Value.Info = PKJACTR_defaultinfo;
JRBBCTR.Value.Extra = A_UNITE(KRBBCTR,mode5,5,IRBBCTR_temp);
 /* line 1050: */
JRBBCTR.Rest = SEBBCTR_valuestack;
 /* line 1051: */
 /* line 1052: */
SEBBCTR_valuestack = GPBBCTR_assignment(A_LOC(A68_71 ), JRBBCTR);
} 
} 
break;
case 18: /* STRUCT(MODE178,REF MODE26)  */
LRBBCTR_format = (WQBBCTR.data.mode18);
 /* line 1053: */
 /* line 1054: */
{ 
 /* line 1055: */
 /* line 1056: */
 /* line 1057: */
 /* line 1058: */
NRBBCTR.Mode = YEAACTR_formatmode;
 /* line 1059: */
NRBBCTR.Denotation = LRBBCTR_format.Text;
 /* line 1060: */
ZWZACTR_load( A_UNITE(ORBBCTR,mode9,9,NRBBCTR), &PRBBCTR );
MRBBCTR.Value = PRBBCTR;
 /* line 1061: */
 /* line 1062: */
 /* line 1063: */
RRBBCTR.Mode = EFAACTR_intmode;
 /* line 1064: */
 /* line 1065: */
RRBBCTR.Denotation = (A68_LBITS )(A68_BITS )LRBBCTR_format.Info.W;
 /* line 1067: */
ZWZACTR_load( A_UNITE(SRBBCTR,mode8,8,RRBBCTR), &TRBBCTR );
QRBBCTR.Value = TRBBCTR;
 /* line 1068: */
QRBBCTR.Rest = SEBBCTR_valuestack;
MRBBCTR.Rest = GPBBCTR_assignment(A_LOC(A68_71 ), QRBBCTR);
SEBBCTR_valuestack = GPBBCTR_assignment(A_LOC(A68_71 ), MRBBCTR);
 /* line 1070: */
 /* line 1071: */
 /* line 1072: */
 /* line 1073: */
URBBCTR.Fn = QGAACTR_formatfn;
 /* line 1075: */
URBBCTR.Mode = YEAACTR_formatmode;
URBBCTR.Param = LRBBCTR_format.Info.Nocases;
 /* line 1076: */
 /* line 1078: */
 /* line 1079: */
 /* line 1081: */
MRQACTR_oper(URBBCTR, (&SEBBCTR_valuestack), A_LOC(A68_71 ));
} 
break;
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
VRBBCTR_r = (WQBBCTR.data.mode12);
 /* line 1092: */
 /* line 1093: */
{ 
WRBBCTR_savedr = VRBBCTR_r;
 /* line 1094: */
A_CALLPROC(NL(EBBBCTR_routine),(VRBBCTR_r),(VRBBCTR_r,(NL(EBBBCTR_routine)).nonlocals));
 /* line 1095: */
 /* line 1096: */
XRBBCTR = (*(&((&WRBBCTR_savedr)->Props))) ;
if ( A_LB_GE(XRBBCTR,PCAACTR_valbit) )
{ 
 /* line 1097: */
ASBBCTR = (*(&((&WRBBCTR_savedr)->Rdenno))) ;
ZWZACTR_load( A_UNITE(ZRBBCTR,mode2,2,ASBBCTR), &BSBBCTR );
YRBBCTR.Value = BSBBCTR;
 /* line 1098: */
YRBBCTR.Rest = SEBBCTR_valuestack;
 /* line 1099: */
 /* line 1101: */
SEBBCTR_valuestack = GPBBCTR_assignment(A_LOC(A68_71 ), YRBBCTR);
} 
} 
break;
case 13: /* STRUCT(INT)  */
CSBBCTR_w = (WQBBCTR.data.mode13);
 /* line 1102: */
 /* line 1103: */
 /* line 1104: */
if ( ((CSBBCTR_w.W==KCAACTR_orelwarn)|(CSBBCTR_w.W==JCAACTR_andthwarn)) )
{ 
 /* line 1105: */
 /* line 1107: */
A_CALLPROC(NQBBCTR_optboolexpression,(CSBBCTR_w.W),(CSBBCTR_w.W,(NQBBCTR_optboolexpression).nonlocals));
} 
break;
case 14: /* STRUCT(REF MODE26,INT,INT,BOOL)  */
DSBBCTR_l = (WQBBCTR.data.mode14);
 /* line 1108: */
 /* line 1110: */
RQWACTR_labdec(DSBBCTR_l);
break;
case 15: /* STRUCT(INT,BITS,INT)  */
ESBBCTR_u = (WQBBCTR.data.mode15);
 /* line 1112: */
 /* line 1114: */
SXIACTR_terminalerror(670);
break;
case 16: /* STRUCT(INT)  */
FSBBCTR_c = (WQBBCTR.data.mode16);
 /* line 1115: */
 /* line 1117: */
WXIACTR_assert(HSBBCTR, A68_FALSE);
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 1118: */
 /* line 1119: */
 /* line 1121: */
ISBBCTR = A68_TRUE;
} 
break;
case 20: /* STRUCT(INT,INT,BITS,INT)  */
JSBBCTR_s = (UQBBCTR.data.mode20);
 /* line 1122: */
{ 
 /* line 1123: */
 /* line 1124: */
if ( (SEBBCTR_valuestack!=MKJACTR_nilvaluelist) )
{ 
WXIACTR_assert(LSBBCTR, ((*(&(SEBBCTR_valuestack->Rest)))==MKJACTR_nilvaluelist));
 /* line 1125: */
 /* line 1126: */
if ( (JSBBCTR_s.Fn==WBAACTR_semifn) )
{ 
 /* line 1127: */
WAZACTR_evaluatenoresult((&SEBBCTR_valuestack));
} 
else
{ 
 /* line 1128: */
 /* line 1129: */
MSBBCTR = (Answer.Type==ILJACTR_enquiryresult);
if ( MSBBCTR )
{MSBBCTR = TQBBCTR_simpleenquiry;
}
 /* line 1130: */
if ( MSBBCTR )
{ 
 /* line 1131: */
SDZACTR_evaluatesimpleenquiry((&SEBBCTR_valuestack), Answer);
} 
else
{ 
 /* line 1132: */
 /* line 1133: */
UBZACTR_evaluateresult((&SEBBCTR_valuestack), Answer);
} 
} 
} 
 /* line 1134: */
 /* line 1135: */
 /* line 1137: */
ISBBCTR = A68_FALSE;
} 
break;
case 22: /* STRUCT(INT,BITS)  */
 /* line 1138: */
{ 
 /* line 1139: */
if ( (SEBBCTR_valuestack!=MKJACTR_nilvaluelist) )
{ 
 /* line 1140: */
UBZACTR_evaluateresult((&SEBBCTR_valuestack), Answer);
} 
 /* line 1141: */
 /* line 1142: */
 /* line 1144: */
ISBBCTR = A68_FALSE;
} 
break;
case 21: /* STRUCT(INT,INT,BITS,INT)  */
NSBBCTR_s = (UQBBCTR.data.mode21);
 /* line 1145: */
{ 
A_CALLPROC(XEBBCTR_enclosedclause,(NSBBCTR_s, Body, Answer, A_LOC(A68_71 )),(NSBBCTR_s, Body, Answer, A_LOC(A68_71 ),(XEBBCTR_enclosedclause).nonlocals));
 /* line 1146: */
TQBBCTR_simpleenquiry = A68_FALSE;
 /* line 1147: */
 /* line 1148: */
 /* line 1150: */
ISBBCTR = A68_TRUE;
} 
break;
default: 
WXIACTR_assert(PSBBCTR, A68_FALSE);
 /* line 1151: */
 /* line 1152: */
 /* line 1153: */
ISBBCTR = A68_FALSE;
break;
} 
 /* line 1155: */
QSBBCTR = ISBBCTR;
if ( !QSBBCTR ) break;
/*SKIP*/;
}
 /* line 1157: */
} 
A_PROC_EXIT(phrase);
return;
} 
#undef NL

A_STATIC A68_VOID  CABBCTR_read(void *NonLocals)
#define NL(x) (((DABBCTR_read *)NonLocals)->x)
{ 
A68_180  EABBCTR;  /* united object - for case conformity */
A68_180  FABBCTR;  /* avoid structure result */
A68_180  GABBCTR;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(read);
 /* line 75: */
EABBCTR = (*NL(ZZABCTR_nextimperative)) ;
switch ( EABBCTR.mode )
{ 
case 26: /* VOID */
 /* line 76: */
 /* line 77: */
A_CALLPROC(NL(Nextstreamimperative),( &FABBCTR),( &FABBCTR,(NL(Nextstreamimperative)).nonlocals));
(*NL(XZABCTR_currentimperative)) = FABBCTR;
break;
default: 
(*NL(XZABCTR_currentimperative)) = (*NL(ZZABCTR_nextimperative));
 /* line 78: */
 /* line 79: */
(*NL(ZZABCTR_nextimperative)) = A_EMPTY(GABBCTR,26);
break;
} 
A_PROC_EXIT(read);
return;
} 
#undef NL

A_STATIC A68_VOID  IABBCTR_lookahead(void *NonLocals)
#define NL(x) (((JABBCTR_lookahead *)NonLocals)->x)
{ 
A68_180  KABBCTR;  /* united object - for case conformity */
A68_180  LABBCTR;  /* avoid structure result */
A_PROC_ENTRY(lookahead);
 /* line 89: */
KABBCTR = (*NL(ZZABCTR_nextimperative)) ;
switch ( KABBCTR.mode )
{ 
case 26: /* VOID */
 /* line 90: */
 /* line 91: */
A_CALLPROC(NL(Nextstreamimperative),( &LABBCTR),( &LABBCTR,(NL(Nextstreamimperative)).nonlocals));
(*NL(ZZABCTR_nextimperative)) = LABBCTR;
break;
default: 
 /* line 92: */
SXIACTR_terminalerror(602);
break;
} 
A_PROC_EXIT(lookahead);
return;
} 
#undef NL

A_STATIC A68_VOID  MABBCTR_compositionmodule(void)
{ 
A_PROC_ENTRY(compositionmodule);
WXIACTR_assert(OABBCTR, A68_FALSE);
A_PROC_EXIT(compositionmodule);
return;
} 
#undef NL
 /* line 105: */
 /* line 106: */

A_STATIC A68_VOID  TABBCTR_module(A68_VC  Modulename, A68_BOOL  Decsmodule, A68_BOOL  Prelude, void *NonLocals)
#define NL(x) (((UABBCTR_module *)NonLocals)->x)
{ 
A68_268  VABBCTR_phrase_;
A68_75  WABBCTR_skiproutine;   /* proc value of non-global proc */
A68_269  EBBBCTR_routine;   /* proc value of non-global proc */
A68_276  HDBBCTR_serialclause;   /* proc value of non-global proc */
A68_278  BEBBCTR_enquiryclause;   /* proc value of non-global proc */
A68_268  PEBBCTR_phrase;   /* proc value of non-global proc */
A68_55 * RSBBCTR_endofmodule;
A68_64 * SSBBCTR_result;
A68_59  TSBBCTR;  /* collateral clause result */
A68_59  USBBCTR_properties;
A68_VC  VSBBCTR;  /* OPERATORS - istruct -> vector */
A68_56 * WSBBCTR;  /* OPERATORS - istruct -> vector */
A68_64  XSBBCTR;  /* collateral clause result */
A68_65  YSBBCTR;  /* OPERATORS - mode -> union mode */
A68_63  ZSBBCTR;  /* collateral clause result */
A68_180  ATBBCTR;  /* united object - for case conformity */
A68_156  BTBBCTR_id;
A68_180  CTBBCTR;  /* united object - for case conformity */
A68_122  DTBBCTR_r;
A68_BOOL  ETBBCTR;  /* clause result */
A68_VC  FTBBCTR;  /* avoid structure result */
A68_122  GTBBCTR_r;
A68_VC  HTBBCTR;  /* avoid structure result */
A68_180  ITBBCTR;  /* united object - for case conformity */
A68_122  JTBBCTR_r;
A68_122  KTBBCTR;  /* clause result */
A68_122  NTBBCTR;  /* OPERATORS - skip to mode */
A68_122  OTBBCTR_routine;
A68_180  PTBBCTR;  /* united object - for case conformity */
A68_122  QTBBCTR_r;
A68_BOOL  VTBBCTR;  /* clause result */
A68_BOOL  WTBBCTR;  /* clause result */
A68_VC  XTBBCTR;  /* OPERATORS - istruct -> vector */
A68_56 * YTBBCTR;  /* OPERATORS - istruct -> vector */
A68_63  ZTBBCTR;  /* collateral clause result */
A68_BITS  AUBBCTR;  /* ADICOPS - >= */
A68_180  BUBBCTR;  /* united object - for case conformity */
A68_189  CUBBCTR_t;
A68_BOOL  DUBBCTR;  /* clause result */
A68_VC  EUBBCTR;  /* OPERATORS - istruct -> vector */
A68_56 * FUBBCTR;  /* OPERATORS - istruct -> vector */
A68_64  GUBBCTR;  /* collateral clause result */
A68_65  HUBBCTR;  /* OPERATORS - mode -> union mode */
A68_63  IUBBCTR;  /* collateral clause result */
A_PROC_ENTRY(module);
 /* line 122: */
 /* line 123: */
{ 
 /* line 128: */
 /* line 132: */
A_CLOSURE( WABBCTR_skiproutine, XABBCTR_skiproutine, YABBCTR_skiproutine );
(( YABBCTR_skiproutine * ) ( WABBCTR_skiproutine.nonlocals )) -> BABBCTR_read = NL(BABBCTR_read);
(( YABBCTR_skiproutine * ) ( WABBCTR_skiproutine.nonlocals )) -> XZABCTR_currentimperative = NL(XZABCTR_currentimperative);
(( YABBCTR_skiproutine * ) ( WABBCTR_skiproutine.nonlocals )) -> WABBCTR_skiproutine = WABBCTR_skiproutine;
 /* line 142: */
A_CLOSURE( EBBBCTR_routine, FBBBCTR_routine, GBBBCTR_routine );
(( GBBBCTR_routine * ) ( EBBBCTR_routine.nonlocals )) -> HABBCTR_lookahead = NL(HABBCTR_lookahead);
(( GBBBCTR_routine * ) ( EBBBCTR_routine.nonlocals )) -> ZZABCTR_nextimperative = NL(ZZABCTR_nextimperative);
(( GBBBCTR_routine * ) ( EBBBCTR_routine.nonlocals )) -> BABBCTR_read = NL(BABBCTR_read);
(( GBBBCTR_routine * ) ( EBBBCTR_routine.nonlocals )) -> WABBCTR_skiproutine = WABBCTR_skiproutine;
(( GBBBCTR_routine * ) ( EBBBCTR_routine.nonlocals )) -> XZABCTR_currentimperative = NL(XZABCTR_currentimperative);
(( GBBBCTR_routine * ) ( EBBBCTR_routine.nonlocals )) -> VABBCTR_phrase_ = (&VABBCTR_phrase_);
 /* line 239: */
A_CLOSURE( HDBBCTR_serialclause, IDBBCTR_serialclause, JDBBCTR_serialclause );
(( JDBBCTR_serialclause * ) ( HDBBCTR_serialclause.nonlocals )) -> VABBCTR_phrase_ = (&VABBCTR_phrase_);
(( JDBBCTR_serialclause * ) ( HDBBCTR_serialclause.nonlocals )) -> XZABCTR_currentimperative = NL(XZABCTR_currentimperative);
 /* line 320: */
A_CLOSURE( BEBBCTR_enquiryclause, CEBBCTR_enquiryclause, DEBBCTR_enquiryclause );
(( DEBBCTR_enquiryclause * ) ( BEBBCTR_enquiryclause.nonlocals )) -> VABBCTR_phrase_ = (&VABBCTR_phrase_);
(( DEBBCTR_enquiryclause * ) ( BEBBCTR_enquiryclause.nonlocals )) -> XZABCTR_currentimperative = NL(XZABCTR_currentimperative);
 /* line 353: */
A_CLOSURE( PEBBCTR_phrase, QEBBCTR_phrase, REBBCTR_phrase );
(( REBBCTR_phrase * ) ( PEBBCTR_phrase.nonlocals )) -> HDBBCTR_serialclause = HDBBCTR_serialclause;
(( REBBCTR_phrase * ) ( PEBBCTR_phrase.nonlocals )) -> BABBCTR_read = NL(BABBCTR_read);
(( REBBCTR_phrase * ) ( PEBBCTR_phrase.nonlocals )) -> XZABCTR_currentimperative = NL(XZABCTR_currentimperative);
(( REBBCTR_phrase * ) ( PEBBCTR_phrase.nonlocals )) -> BEBBCTR_enquiryclause = BEBBCTR_enquiryclause;
(( REBBCTR_phrase * ) ( PEBBCTR_phrase.nonlocals )) -> PEBBCTR_phrase = PEBBCTR_phrase;
(( REBBCTR_phrase * ) ( PEBBCTR_phrase.nonlocals )) -> EBBBCTR_routine = EBBBCTR_routine;
 /* line 1159: */
VABBCTR_phrase_ = PEBBCTR_phrase;
 /* line 1164: */
 /* line 1165: */
 /* line 1167: */
A_CALLPROC(NL(HABBCTR_lookahead),(),((NL(HABBCTR_lookahead)).nonlocals));
 /* line 1169: */
 /* line 1170: */
 /* line 1171: */
if ( Decsmodule )
{ 
TSBBCTR.Block = A68_FALSE;
TSBBCTR.Dynamicresult = A68_FALSE;
TSBBCTR.Discardeddynamicresult = A68_TRUE;
TSBBCTR.Type = DBAACTR_decsfn;
USBBCTR_properties = TSBBCTR;
 /* line 1173: */
WSBBCTR = (&((&ACPACTR_currentmodule)->Uname)) ;
VRYACTR_startdecsmodule(A_ISVEC(VSBBCTR,WSBBCTR,7,A68_CHAR ), Modulename);
 /* line 1175: */
XSBBCTR.Mode = UEAACTR_voidmode;
XSBBCTR.Info = PKJACTR_defaultinfo;
XSBBCTR.Extra = A_EMPTY(YSBBCTR,3);
SSBBCTR_result = BHBBCTR_assignment(A_LOC(A68_64 ), XSBBCTR);
 /* line 1177: */
 /* line 1178: */
ZSBBCTR.Value = SSBBCTR_result;
ZSBBCTR.End = RSBBCTR_endofmodule;
ZSBBCTR.Type = ELJACTR_voidresult;
A_CALLPROC(HDBBCTR_serialclause,(USBBCTR_properties, ZSBBCTR),(USBBCTR_properties, ZSBBCTR,(HDBBCTR_serialclause).nonlocals));
 /* line 1180: */
 /* line 1181: */
 /* line 1182: */
WUYACTR_enddecsmodule(Modulename);
} 
else
{ 
 /* line 1183: */
ATBBCTR = (*NL(ZZABCTR_nextimperative)) ;
switch ( ATBBCTR.mode )
{ 
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
BTBBCTR_id = (ATBBCTR.data.mode11);
 /* line 1184: */
{ 
EMVACTR_initialdummydec(BTBBCTR_id);
A_CALLPROC(NL(BABBCTR_read),(),((NL(BABBCTR_read)).nonlocals));
A_CALLPROC(NL(HABBCTR_lookahead),(),((NL(HABBCTR_lookahead)).nonlocals));
 /* line 1185: */
 /* line 1186: */
CTBBCTR = (*NL(ZZABCTR_nextimperative)) ;
switch ( CTBBCTR.mode )
{ 
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
DTBBCTR_r = (CTBBCTR.data.mode12);
 /* line 1187: */
KDHACTR_message( 59, &FTBBCTR );
ETBBCTR = A_VC_EQ(DTBBCTR_r.Name,FTBBCTR);
break;
default: 
 /* line 1188: */
 /* line 1189: */
 /* line 1190: */
ETBBCTR = A68_FALSE;
break;
} 
} 
break;
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
GTBBCTR_r = (ATBBCTR.data.mode12);
 /* line 1191: */
 /* line 1192: */
KDHACTR_message( 59, &HTBBCTR );
ETBBCTR = A_VC_EQ(GTBBCTR_r.Name,HTBBCTR);
break;
default: 
 /* line 1193: */
 /* line 1194: */
 /* line 1196: */
ETBBCTR = A68_FALSE;
break;
} 
if ( ETBBCTR )
{ 
A_CALLPROC(NL(BABBCTR_read),(),((NL(BABBCTR_read)).nonlocals));
 /* line 1197: */
 /* line 1198: */
 /* line 1199: */
ITBBCTR = (*NL(XZABCTR_currentimperative)) ;
switch ( ITBBCTR.mode )
{ 
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
JTBBCTR_r = (ITBBCTR.data.mode12);
 /* line 1200: */
KTBBCTR = JTBBCTR_r;
break;
default: 
WXIACTR_assert(MTBBCTR, A68_FALSE);
 /* line 1201: */
KTBBCTR = NTBBCTR;
break;
} 
OTBBCTR_routine = KTBBCTR;
 /* line 1203: */
 /* line 1204: */
 /* line 1206: */
if ( (IOMACTR_modetype(OTBBCTR_routine.Mode)==GEAACTR_procp) )
{ 
for ( ;; )
{ 
 /* line 1207: */
A_CALLPROC(NL(HABBCTR_lookahead),(),((NL(HABBCTR_lookahead)).nonlocals));
 /* line 1208: */
 /* line 1209: */
 /* line 1210: */
PTBBCTR = (*NL(ZZABCTR_nextimperative)) ;
switch ( PTBBCTR.mode )
{ 
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
QTBBCTR_r = (PTBBCTR.data.mode12);
 /* line 1211: */
 /* line 1212: */
{ 
WXIACTR_assert(UTBBCTR, A_VC_EQ(QTBBCTR_r.Name,TTBBCTR));
 /* line 1213: */
A_CALLPROC(NL(BABBCTR_read),(),((NL(BABBCTR_read)).nonlocals));
 /* line 1214: */
A_CALLPROC(WABBCTR_skiproutine,(),((WABBCTR_skiproutine).nonlocals));
 /* line 1215: */
 /* line 1216: */
 /* line 1217: */
VTBBCTR = A68_TRUE;
} 
break;
default: 
 /* line 1218: */
 /* line 1219: */
VTBBCTR = A68_FALSE;
break;
} 
 /* line 1221: */
WTBBCTR = VTBBCTR;
if ( !WTBBCTR ) break;
/*SKIP*/;
}
 /* line 1222: */
} 
 /* line 1224: */
 /* line 1225: */
 /* line 1226: */
 /* line 1227: */
 /* line 1229: */
YTBBCTR = (&((&ACPACTR_currentmodule)->Uname)) ;
RTYACTR_startprocmodule(OTBBCTR_routine, A_ISVEC(XTBBCTR,YTBBCTR,7,A68_CHAR ), Modulename, SSBBCTR_result);
 /* line 1231: */
 /* line 1232: */
if ( OTMACTR_dynamic((*(&(SSBBCTR_result->Mode)))) )
{ 
 /* line 1233: */
PXIACTR_error(340);
} 
 /* line 1235: */
 /* line 1236: */
 /* line 1237: */
ZTBBCTR.Value = SSBBCTR_result;
ZTBBCTR.End = RSBBCTR_endofmodule;
ZTBBCTR.Type = HLJACTR_routineresult;
 /* line 1238: */
 /* line 1239: */
AUBBCTR = OTBBCTR_routine.Props ;
A_CALLPROC(PEBBCTR_phrase,(A_LB_GE(AUBBCTR,NCAACTR_ccbit), ZTBBCTR, A68_FALSE),(A_LB_GE(AUBBCTR,NCAACTR_ccbit), ZTBBCTR, A68_FALSE,(PEBBCTR_phrase).nonlocals));
 /* line 1240: */
WTYACTR_endmodule();
 /* line 1243: */
A_CALLPROC(NL(BABBCTR_read),(),((NL(BABBCTR_read)).nonlocals));
 /* line 1244: */
 /* line 1245: */
 /* line 1246: */
 /* line 1247: */
if ( ((IOMACTR_modetype(OTBBCTR_routine.Mode)==FEAACTR_proc)&((*(&(SSBBCTR_result->Mode)))!=UEAACTR_voidmode)) )
{ 
A_CALLPROC(NL(BABBCTR_read),(),((NL(BABBCTR_read)).nonlocals));
} 
 /* line 1248: */
A_CALLPROC(NL(BABBCTR_read),(),((NL(BABBCTR_read)).nonlocals));
 /* line 1249: */
 /* line 1250: */
BUBBCTR = (*NL(XZABCTR_currentimperative)) ;
switch ( BUBBCTR.mode )
{ 
case 22: /* STRUCT(INT,BITS)  */
CUBBCTR_t = (BUBBCTR.data.mode22);
 /* line 1251: */
DUBBCTR = (CUBBCTR_t.Fn!=HCAACTR_finishfn);
break;
default: 
 /* line 1252: */
 /* line 1253: */
DUBBCTR = A68_TRUE;
break;
} 
if ( DUBBCTR )
{ 
 /* line 1254: */
 /* line 1255: */
 /* line 1257: */
SXIACTR_terminalerror(628);
} 
} 
else
{ 
FUBBCTR = (&((&ACPACTR_currentmodule)->Uname)) ;
KQYACTR_startmodule(A_ISVEC(EUBBCTR,FUBBCTR,7,A68_CHAR ), Modulename);
 /* line 1258: */
GUBBCTR.Mode = UEAACTR_voidmode;
GUBBCTR.Info = PKJACTR_defaultinfo;
GUBBCTR.Extra = A_EMPTY(HUBBCTR,3);
SSBBCTR_result = BHBBCTR_assignment(A_LOC(A68_64 ), GUBBCTR);
 /* line 1259: */
 /* line 1260: */
 /* line 1261: */
 /* line 1262: */
IUBBCTR.Value = SSBBCTR_result;
 /* line 1264: */
IUBBCTR.End = RSBBCTR_endofmodule;
IUBBCTR.Type = ELJACTR_voidresult;
 /* line 1265: */
 /* line 1266: */
A_CALLPROC(PEBBCTR_phrase,(A68_FALSE, IUBBCTR, A68_FALSE),(A68_FALSE, IUBBCTR, A68_FALSE,(PEBBCTR_phrase).nonlocals));
 /* line 1267: */
 /* line 1268: */
 /* line 1269: */
WTYACTR_endmodule();
} 
} 
} 
A_PROC_EXIT(module);
return;
} 
#undef NL
 /* line 59: */
 /* line 61: */

A68_VOID  WZABCTR_translator(A68_264  Nextstreamimperative, A68_116 * Xsizes, A68_171  Keptdecnos)
{ 
A68_180  YZABCTR;  /* OPERATORS - mode -> union mode */
A68_180  XZABCTR_currentimperative;
A68_180  AABBCTR;  /* OPERATORS - mode -> union mode */
A68_180  ZZABCTR_nextimperative;
A68_75  BABBCTR_read;   /* proc value of non-global proc */
A68_75  HABBCTR_lookahead;   /* proc value of non-global proc */
A68_267  SABBCTR_module;   /* proc value of non-global proc */
A68_VC  JUBBCTR;  /* OPERATORS - istruct -> vector */
A68_89 * KUBBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  LUBBCTR;  /* avoid structure result */
A68_VC  MUBBCTR_modulename;
A68_BOOL  NUBBCTR_decsmodule;
A68_BOOL  OUBBCTR_contextvoid;
A_PROC_ENTRY(translator);
 /* line 62: */
 /* line 64: */
{ 
XZABCTR_currentimperative = A_EMPTY(YZABCTR,26);
 /* line 65: */
ZZABCTR_nextimperative = A_EMPTY(AABBCTR,26);
 /* line 67: */
 /* line 73: */
 /* line 74: */
A_CLOSURE( BABBCTR_read, CABBCTR_read, DABBCTR_read );
(( DABBCTR_read * ) ( BABBCTR_read.nonlocals )) -> ZZABCTR_nextimperative = (&ZZABCTR_nextimperative);
(( DABBCTR_read * ) ( BABBCTR_read.nonlocals )) -> XZABCTR_currentimperative = (&XZABCTR_currentimperative);
(( DABBCTR_read * ) ( BABBCTR_read.nonlocals )) -> Nextstreamimperative = Nextstreamimperative;
 /* line 81: */
 /* line 87: */
 /* line 88: */
A_CLOSURE( HABBCTR_lookahead, IABBCTR_lookahead, JABBCTR_lookahead );
(( JABBCTR_lookahead * ) ( HABBCTR_lookahead.nonlocals )) -> ZZABCTR_nextimperative = (&ZZABCTR_nextimperative);
(( JABBCTR_lookahead * ) ( HABBCTR_lookahead.nonlocals )) -> Nextstreamimperative = Nextstreamimperative;
 /* line 94: */
 /* line 100: */
 /* line 103: */
 /* line 104: */
A_CLOSURE( SABBCTR_module, TABBCTR_module, UABBCTR_module );
(( UABBCTR_module * ) ( SABBCTR_module.nonlocals )) -> BABBCTR_read = BABBCTR_read;
(( UABBCTR_module * ) ( SABBCTR_module.nonlocals )) -> XZABCTR_currentimperative = (&XZABCTR_currentimperative);
(( UABBCTR_module * ) ( SABBCTR_module.nonlocals )) -> HABBCTR_lookahead = HABBCTR_lookahead;
(( UABBCTR_module * ) ( SABBCTR_module.nonlocals )) -> ZZABCTR_nextimperative = (&ZZABCTR_nextimperative);
 /* line 1273: */
KUBBCTR = (&(BCPACTR_currentmodinfo->Name)) ;
RMAAOSF_scanto( ' ', A_ISVEC(JUBBCTR,KUBBCTR,32,A68_CHAR ), &LUBBCTR );
MUBBCTR_modulename = LUBBCTR;
 /* line 1275: */
NUBBCTR_decsmodule = ((*(&(BCPACTR_currentmodinfo->Type)))==(-1));
 /* line 1276: */
OUBBCTR_contextvoid = ((*(&((&(BCPACTR_currentmodinfo->L))->Level)))==0);
 /* line 1278: */
VUZACTR_initialise(Xsizes, (&XZABCTR_currentimperative), Keptdecnos);
 /* line 1280: */
 /* line 1281: */
 /* line 1282: */
if ( WNOACTR_composition )
{ 
 /* line 1283: */
 /* line 1284: */
SXIACTR_terminalerror(806);
} 
else
{ 
IFPACTR_initialiseunames();
 /* line 1285: */
 /* line 1286: */
 /* line 1288: */
 /* line 1290: */
A_CALLPROC(SABBCTR_module,(MUBBCTR_modulename, NUBBCTR_decsmodule, OUBBCTR_contextvoid),(MUBBCTR_modulename, NUBBCTR_decsmodule, OUBBCTR_contextvoid,(SABBCTR_module).nonlocals));
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
void OZABCTR(void)   /* initialise DECS compiler */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel","-dir",".","compiler.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/vak/Project/Algol/Algol-68RS-Source/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/vak/Project/Algol/Algol-68RS-Source/a68config/a68config.m","./values.m","./coutput.m","./uniquenameserver.m","./oper.m","./moduletracer.m","./modules.m","./modes.m","./incmode.m","./loops.m","./loads.m","./initialiser.m","./incvalue.m","./incoperfn.m","./incimperatives.m","./identifiers.m","./environment.m","./environ.m","./entryandreturn.m","./common.m","./clauses.m","./centities.m","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
AUPACTR();   /* USE values */
PTLACTR();   /* USE coutput */
RHMACTR();   /* USE uniquenameserver */
CQQACTR();   /* USE oper */
BCHACTR();   /* USE moduletracer */
MMOACTR();   /* USE modules */
DNMACTR();   /* USE modes */
ZDAACTR();   /* USE incmode */
CDABCTR();   /* USE loops */
AVZACTR();   /* USE loads */
MUZACTR();   /* USE initialiser */
GKJACTR();   /* USE incvalue */
XFAACTR();   /* USE incoperfn */
UAAACTR();   /* USE incimperatives */
OLVACTR();   /* USE identifiers */
HPIACTR();   /* USE environment */
BPLACTR();   /* USE environ */
CEYACTR();   /* USE entryandreturn */
CAZACTR();   /* USE clauses */
THAACTR();   /* USE centities */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/compiler.a68";
A_config.translation_time = "Thu Nov  5 20:30:31 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "NZABCTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 20:30:31 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS compiler);
UEAALIB_a68config(LGAALIB_configinfo, SZABCTR);
 /* line 57: */
 /* line 58: */
 /* line 1292: */
A_PROC_EXIT(DECS compiler);
} 
#undef NL
/* end of translation of compiler.a68 */
