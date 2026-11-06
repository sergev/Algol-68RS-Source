/* UNAME:NEBBCTR */
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

A_PROCEDURE(A68_VOID ,A68t155,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t155  A68_155 ;    /* PROC(INT,MODE26) VOID */
struct A68t157 ;

A_PROCEDURE(A68_VOID ,A68t156,(struct A68t157 ,struct A68t64 *,A68_INT ),(struct A68t157 ,struct A68t64 *,A68_INT ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(MODE157,REF MODE64,INT) VOID */
struct A68t157{
A68_INT  Type;
A_PAD_INT(PAD_97)
A68_VC  Name;
A68_INT  Mode;
A_PAD_INT(PAD_98)
A68_INT  Decno;
A_PAD_INT(PAD_99)
};
typedef struct A68t157  A68_157 ;    /* STRUCT(INT,REF MODE26,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t158,(A68_INT ,struct A68t123 *),(A68_INT ,struct A68t123 *,void *));
typedef struct A68t158  A68_158 ;    /* PROC(INT) MODE123 */

A_PROCEDURE(A68_VOID ,A68t159,(A68_VC ,struct A68t56 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t56 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(REF MODE26,MODE56,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t160,(struct A68t157 ,struct A68t71 **),(struct A68t157 ,struct A68t71 **,void *));
typedef struct A68t160  A68_160 ;    /* PROC(MODE157,REF REF MODE71) VOID */
A_ROW(struct A68t162 ,A68t161,1);
typedef struct A68t161  A68_161 ;    /* [] MODE162 */
struct A68t162{
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
typedef struct A68t162  A68_162 ;    /* STRUCT(INT,INT,MODE123,REF MODE26,REF MODE26,MODE56,BITS,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t163,(struct A68t157 ),(struct A68t157 ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(MODE157) VOID */
struct A68t165 ;

A_PROCEDURE(A68_VOID ,A68t164,(struct A68t165 ),(struct A68t165 ,void *));
typedef struct A68t164  A68_164 ;    /* PROC(MODE165) VOID */
struct A68t165{
A68_VC  Name;
A68_INT  Labno;
A_PAD_INT(PAD_104)
A68_INT  Status;
A_PAD_INT(PAD_105)
A68_BOOL  Notsetting;
A_PAD_BOOL(PAD_106)
};
typedef struct A68t165  A68_165 ;    /* STRUCT(REF MODE26,INT,INT,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t166,(A68_VC ,A68_INT ,struct A68t124 ,A68_INT ,A68_INT ,struct A68t123 ,A68_BITS ),(A68_VC ,A68_INT ,struct A68t124 ,A68_INT ,A68_INT ,struct A68t123 ,A68_BITS ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(REF MODE26,INT,REF MODE124,INT,INT,MODE123,BITS) VOID */
A_ROW(struct A68t168 ,A68t167,1);
typedef struct A68t167  A68_167 ;    /* [] MODE168 */
struct A68t168{
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
typedef struct A68t168  A68_168 ;    /* STRUCT(INT,INT,INT,MODE123,REF MODE26,MODE56,MODE56,MODE56,BITS)  */
struct A68t169{
A68_INT  Mode;
A_PAD_INT(PAD_114)
A68_VC  String;
};
typedef struct A68t169  A68_169 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t170{
A68_INT  I;
A_PAD_INT(PAD_115)
};
typedef struct A68t170  A68_170 ;    /* STRUCT(INT)  */
A_ROW(A68_INT ,A68t172,1);
typedef struct A68t172  A68_172 ;    /* [] INT */
struct A68t171{
A68_INT  Body;
A_PAD_INT(PAD_116)
A68_INT  Moduleno;
A_PAD_INT(PAD_117)
struct A68t172  Actuals;
};
typedef struct A68t171  A68_171 ;    /* STRUCT(INT,INT,REF MODE172)  */
struct A68t173{
A68_INT  Mode;
A_PAD_INT(PAD_118)
A68_INT  Number;
A_PAD_INT(PAD_119)
A68_VC  Insert;
};
typedef struct A68t173  A68_173 ;    /* STRUCT(INT,INT,REF MODE26)  */
struct A68t175{
A68_INT  Moduleno;
A_PAD_INT(PAD_120)
A68_INT  I;
A_PAD_INT(PAD_121)
A68_INT  J;
A_PAD_INT(PAD_122)
};
typedef struct A68t175  A68_175 ;    /* STRUCT(INT,INT,INT)  */
A_ROW(A68_VC ,A68t177,1);
typedef struct A68t177  A68_177 ;    /* [] REF MODE26 */
struct A68t176{
A68_INT  Moduleno;
A_PAD_INT(PAD_123)
A68_VC  Name;
A68_VC  Uname;
A68_VC  Lname;
A68_VC  Gname;
struct A68t177  Ysnames;
};
typedef struct A68t176  A68_176 ;    /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE177)  */
struct A68t174 { A68_INT mode; union {
struct A68t171  mode1;
struct A68t175  mode2;
struct A68t176  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t174  A68_174 ;    /* UNION(MODE171,MODE175,MODE176)  */
struct A68t179{
A68_INT  Nochars;
A_PAD_INT(PAD_124)
A68_INT  Nocases;
A_PAD_INT(PAD_125)
A68_INT  W;
A_PAD_INT(PAD_126)
};
typedef struct A68t179  A68_179 ;    /* STRUCT(INT,INT,INT)  */
struct A68t178{
struct A68t179  Info;
A68_VC  Text;
};
typedef struct A68t178  A68_178 ;    /* STRUCT(MODE179,REF MODE26)  */
struct A68t180{
A68_VC  Representation;
};
typedef struct A68t180  A68_180 ;    /* STRUCT(REF MODE26)  */
struct A68t182{
A68_INT  Mode;
A_PAD_INT(PAD_127)
A68_VC  Nu;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t183{
A68_INT  Mode;
A_PAD_INT(PAD_128)
A68_LBITS  Denotation;
A_PAD_LBITS(PAD_129)
};
typedef struct A68t183  A68_183 ;    /* STRUCT(INT,LONG BITS)  */
struct A68t184{
A68_INT  Mode;
A_PAD_INT(PAD_130)
A68_VC  Denotation;
};
typedef struct A68t184  A68_184 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t185{
A68_INT  Fn;
A_PAD_INT(PAD_131)
A68_INT  Mode;
A_PAD_INT(PAD_132)
A68_INT  Param;
A_PAD_INT(PAD_133)
};
typedef struct A68t185  A68_185 ;    /* STRUCT(INT,INT,INT)  */
struct A68t186{
A68_INT  W;
A_PAD_INT(PAD_134)
};
typedef struct A68t186  A68_186 ;    /* STRUCT(INT)  */
struct A68t187{
A68_BOOL  Start;
A_PAD_BOOL(PAD_135)
};
typedef struct A68t187  A68_187 ;    /* STRUCT(BOOL)  */
struct A68t188{
A68_INT  Fn;
A_PAD_INT(PAD_136)
A68_INT  Mode;
A_PAD_INT(PAD_137)
A68_BITS  Props;
A_PAD_BITS(PAD_138)
A68_INT  Param;
A_PAD_INT(PAD_139)
};
typedef struct A68t188  A68_188 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t189{
A68_INT  Fn;
A_PAD_INT(PAD_140)
A68_INT  Mode;
A_PAD_INT(PAD_141)
A68_BITS  Props;
A_PAD_BITS(PAD_142)
A68_INT  Resultmode;
A_PAD_INT(PAD_143)
};
typedef struct A68t189  A68_189 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t190{
A68_INT  Fn;
A_PAD_INT(PAD_144)
A68_BITS  Props;
A_PAD_BITS(PAD_145)
};
typedef struct A68t190  A68_190 ;    /* STRUCT(INT,BITS)  */
struct A68t181 { A68_INT mode; union {
struct A68t69  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t180  mode4;
struct A68t57  mode5;
struct A68t182  mode6;
struct A68t169  mode7;
struct A68t183  mode8;
struct A68t184  mode9;
struct A68t185  mode10;
struct A68t157  mode11;
struct A68t122  mode12;
struct A68t186  mode13;
struct A68t165  mode14;
struct A68t79  mode15;
struct A68t170  mode16;
struct A68t187  mode17;
struct A68t178  mode18;
struct A68t173  mode19;
struct A68t188  mode20;
struct A68t189  mode21;
struct A68t190  mode22;
struct A68t171  mode23;
struct A68t175  mode24;
struct A68t176  mode25;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t181  A68_181 ;    /* UNION(MODE69,INT,BOOL,MODE180,MODE57,MODE182,MODE169,MODE183,MODE184,MODE185,MODE157,MODE122,MODE186,MODE165,MODE79,MODE170,MODE187,MODE178,MODE173,MODE188,MODE189,MODE190,MODE171,MODE175,MODE176,VOID)  */
struct A68t191 { A68_INT mode; union {
struct A68t69  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t180  mode4;
struct A68t57  mode5;
struct A68t182  mode6;
struct A68t169  mode7;
struct A68t183  mode8;
struct A68t184  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t191  A68_191 ;    /* UNION(MODE69,INT,BOOL,MODE180,MODE57,MODE182,MODE169,MODE183,MODE184)  */
struct A68t192 { A68_INT mode; union {
struct A68t69  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t180  mode4;
struct A68t57  mode5;
struct A68t182  mode6;
struct A68t169  mode7;
struct A68t183  mode8;
struct A68t184  mode9;
struct A68t185  mode10;
struct A68t157  mode11;
struct A68t122  mode12;
struct A68t186  mode13;
struct A68t165  mode14;
struct A68t79  mode15;
struct A68t170  mode16;
struct A68t187  mode17;
struct A68t178  mode18;
struct A68t173  mode19;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t192  A68_192 ;    /* UNION(MODE69,INT,BOOL,MODE180,MODE57,MODE182,MODE169,MODE183,MODE184,MODE185,MODE157,MODE122,MODE186,MODE165,MODE79,MODE170,MODE187,MODE178,MODE173)  */

A_PROCEDURE(A68_VOID ,A68t193,(struct A68t116 *,struct A68t181 *,struct A68t172 ),(struct A68t116 *,struct A68t181 *,struct A68t172 ,void *));
typedef struct A68t193  A68_193 ;    /* PROC(REF MODE116,REF MODE181,REF MODE172) VOID */

A_PROCEDURE(A68_VOID ,A68t194,(struct A68t191 ,struct A68t64 *),(struct A68t191 ,struct A68t64 *,void *));
typedef struct A68t194  A68_194 ;    /* PROC(MODE191) MODE64 */
struct A68t195{
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
typedef struct A68t195  A68_195 ;    /* STRUCT(REF MODE64,REF MODE64,BOOL,BOOL,BOOL,BOOL)  */
struct A68t196{
struct A68t64  Ident;
A68_VC  Control;
A68_BOOL  Needstemp;
A_PAD_BOOL(PAD_150)
};
typedef struct A68t196  A68_196 ;    /* STRUCT(MODE64,REF MODE26,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t197,(struct A68t195 *,A68_INT ,struct A68t71 **),(struct A68t195 *,A68_INT ,struct A68t71 **,void *));
typedef struct A68t197  A68_197 ;    /* PROC(REF MODE195,INT,REF REF MODE71) VOID */
struct A68t199 ;

A_PROCEDURE(A68_VOID ,A68t198,(struct A68t199 ,struct A68t71 **),(struct A68t199 ,struct A68t71 **,void *));
typedef struct A68t198  A68_198 ;    /* PROC(REF MODE199,REF REF MODE71) VOID */
A_VECTOR(struct A68t196 ,A68t199);
typedef struct A68t199  A68_199 ;    /* VECTOR [] MODE196 */
struct A68t200{
A68_INT  Parameters;
A_PAD_INT(PAD_151)
A68_INT  Result;
A_PAD_INT(PAD_152)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_153)
};
typedef struct A68t200  A68_200 ;    /* STRUCT(INT,INT,BOOL)  */
struct A68t201{
A68_INT  Mode;
A_PAD_INT(PAD_154)
A68_INT  Offset;
A_PAD_INT(PAD_155)
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_156)
};
typedef struct A68t201  A68_201 ;    /* STRUCT(INT,INT,MODE89)  */

A_PROCEDURE(A68_VOID ,A68t202,(A68_INT ,struct A68t124 *),(A68_INT ,struct A68t124 *,void *));
typedef struct A68t202  A68_202 ;    /* PROC(INT) REF MODE124 */

A_PROCEDURE(A68_VOID ,A68t203,(struct A68t201 *,A68_VC *),(struct A68t201 *,A68_VC *,void *));
typedef struct A68t203  A68_203 ;    /* PROC(REF MODE201) MODE26 */

A_PROCEDURE(A68_VOID ,A68t204,(A68_INT ,A68_VC ,struct A68t68 *),(A68_INT ,A68_VC ,struct A68t68 *,void *));
typedef struct A68t204  A68_204 ;    /* PROC(INT,MODE26) MODE68 */
struct A68t206 ;

A_PROCEDURE(A68_VOID ,A68t205,(struct A68t206 ,A68_INT ),(struct A68t206 ,A68_INT ,void *));
typedef struct A68t205  A68_205 ;    /* PROC(REF MODE206,INT) VOID */
A_ROW(struct A68t92 ,A68t206,1);
typedef struct A68t206  A68_206 ;    /* [] MODE92 */

A_PROCEDURE(A68_VOID ,A68t207,(A68_INT ,struct A68t200 *),(A68_INT ,struct A68t200 *,void *));
typedef struct A68t207  A68_207 ;    /* PROC(INT) MODE200 */
struct A68t209 ;

A_PROCEDURE(A68_VOID ,A68t208,(A68_INT ,struct A68t209 *),(A68_INT ,struct A68t209 *,void *));
typedef struct A68t208  A68_208 ;    /* PROC(INT) REF MODE209 */
A_VECTOR(struct A68t201 ,A68t209);
typedef struct A68t209  A68_209 ;    /* VECTOR [] MODE201 */

A_PROCEDURE(A68_INT ,A68t210,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t210  A68_210 ;    /* PROC(INT,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t211,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t211  A68_211 ;    /* PROC(INT,INT) MODE26 */
struct A68t212{
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_157)
struct A68t106  Ym;
struct A68t56  Ys;
A_PAD_ISTRUCT(A68_56 ,PAD_158)
A68_INT  Level;
A_PAD_INT(PAD_159)
struct A68t213 * Ids;
struct A68t214 * Uses;
struct A68t212 * Rest;
};
typedef struct A68t212  A68_212 ;    /* STRUCT(MODE89,MODE106,MODE56,INT,REF MODE213,REF MODE214,REF MODE212)  */
struct A68t213{
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
struct A68t213 * Rest;
};
typedef struct A68t213  A68_213 ;    /* STRUCT(MODE89,MODE56,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,REF MODE26,REF MODE26,REF MODE213)  */
struct A68t214{
struct A68t89  Name;
A_PAD_ISTRUCT(A68_89 ,PAD_169)
struct A68t56  Uname;
A_PAD_ISTRUCT(A68_56 ,PAD_170)
struct A68t213 * Ids;
struct A68t214 * Rest;
};
typedef struct A68t214  A68_214 ;    /* STRUCT(MODE89,MODE56,REF MODE213,REF MODE214)  */
struct A68t216{
struct A68t56  L;
A_PAD_ISTRUCT(A68_56 ,PAD_171)
struct A68t56  G;
A_PAD_ISTRUCT(A68_56 ,PAD_172)
};
typedef struct A68t216  A68_216 ;    /* STRUCT(MODE56,MODE56)  */
struct A68t215{
struct A68t56  Uname;
A_PAD_ISTRUCT(A68_56 ,PAD_173)
struct A68t115  Xmi;
struct A68t216  Checkinfo;
};
typedef struct A68t215  A68_215 ;    /* STRUCT(MODE56,MODE115,MODE216)  */

A_PROCEDURE(A68_VOID ,A68t217,(struct A68t105 ),(struct A68t105 ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(MODE105) VOID */

A_PROCEDURE(A68_VOID ,A68t218,(struct A68t117 ,A68_INT ),(struct A68t117 ,A68_INT ,void *));
typedef struct A68t218  A68_218 ;    /* PROC(MODE117,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t219,(struct A68t90 ),(struct A68t90 ,void *));
typedef struct A68t219  A68_219 ;    /* PROC(MODE90) VOID */
A_ROW(struct A68t212 *,A68t220,1);
typedef struct A68t220  A68_220 ;    /* [] REF MODE212 */

A_PROCEDURE(A68_VOID ,A68t221,(struct A68t89 ,A68_INT ,A68_BOOL ,struct A68t118 *),(struct A68t89 ,A68_INT ,A68_BOOL ,struct A68t118 *,void *));
typedef struct A68t221  A68_221 ;    /* PROC(MODE89,INT,BOOL) MODE118 */

A_PROCEDURE(A68_VOID ,A68t222,(struct A68t89 ,struct A68t89 ,struct A68t106 ,struct A68t119 *),(struct A68t89 ,struct A68t89 ,struct A68t106 ,struct A68t119 *,void *));
typedef struct A68t222  A68_222 ;    /* PROC(MODE89,MODE89,MODE106) MODE119 */

A_PROCEDURE(A68_VOID ,A68t223,(struct A68t115 ),(struct A68t115 ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(MODE115) VOID */

A_PROCEDURE(A68_VOID ,A68t224,(struct A68t109 ),(struct A68t109 ,void *));
typedef struct A68t224  A68_224 ;    /* PROC(MODE109) VOID */
A_ROW(struct A68t108 ,A68t225,1);
typedef struct A68t225  A68_225 ;    /* [] MODE108 */

A_PROCEDURE(A68_BOOL ,A68t226,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t226  A68_226 ;    /* PROC(INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t227,(struct A68t185 ,struct A68t71 **,struct A68t71 *),(struct A68t185 ,struct A68t71 **,struct A68t71 *,void *));
typedef struct A68t227  A68_227 ;    /* PROC(MODE185,REF REF MODE71,REF MODE71) VOID */

A_PROCEDURE(A68_VOID ,A68t228,(struct A68t147 ),(struct A68t147 ,void *));
typedef struct A68t228  A68_228 ;    /* PROC(MODE147) VOID */

A_PROCEDURE(struct A68t56 ,A68t229,(void),(void *));
typedef struct A68t229  A68_229 ;    /* PROC MODE56 */

A_PROCEDURE(A68_VOID ,A68t230,(struct A68t56 ),(struct A68t56 ,void *));
typedef struct A68t230  A68_230 ;    /* PROC(MODE56) VOID */

A_PROCEDURE(A68_VOID ,A68t231,(struct A68t147 ,A68_VC *),(struct A68t147 ,A68_VC *,void *));
typedef struct A68t231  A68_231 ;    /* PROC(MODE147) MODE26 */
struct A68t233 ;

A_PROCEDURE(A68_VOID ,A68t232,(struct A68t233 ),(struct A68t233 ,void *));
typedef struct A68t232  A68_232 ;    /* PROC(MODE233) VOID */
A_VECTOR(struct A68t234 ,A68t233);
typedef struct A68t233  A68_233 ;    /* VECTOR [] MODE234 */
struct A68t234 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_SINT  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t234  A68_234 ;    /* UNION(CHAR,MODE26,SHORT INT)  */
struct A68t236 ;

A_PROCEDURE(A68_VOID ,A68t235,(struct A68t236 ,A68_INT ),(struct A68t236 ,A68_INT ,void *));
typedef struct A68t235  A68_235 ;    /* PROC(MODE236,INT) VOID */
A_VECTOR(struct A68t237 ,A68t236);
typedef struct A68t236  A68_236 ;    /* VECTOR [] MODE237 */
struct A68t237 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_INT  mode3;
A68_SINT  mode4;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t237  A68_237 ;    /* UNION(CHAR,MODE26,INT,SHORT INT)  */

A_PROCEDURE(A68_BOOL ,A68t238,(struct A68t64 *,struct A68t64 *),(struct A68t64 *,struct A68t64 *,void *));
typedef struct A68t238  A68_238 ;    /* PROC(REF MODE64,REF MODE64) BOOL */

A_PROCEDURE(A68_BOOL ,A68t239,(struct A68t64 *),(struct A68t64 *,void *));
typedef struct A68t239  A68_239 ;    /* PROC(REF MODE64) BOOL */

A_PROCEDURE(A68_BOOL ,A68t240,(struct A68t64 *,A68_LBITS ),(struct A68t64 *,A68_LBITS ,void *));
typedef struct A68t240  A68_240 ;    /* PROC(REF MODE64,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t241,(struct A68t64 *),(struct A68t64 *,void *));
typedef struct A68t241  A68_241 ;    /* PROC(REF MODE64) LONG BITS */

A_PROCEDURE(A68_VOID ,A68t242,(struct A68t64 *,A68_VC *),(struct A68t64 *,A68_VC *,void *));
typedef struct A68t242  A68_242 ;    /* PROC(REF MODE64) MODE26 */

A_PROCEDURE(struct A68t64 *,A68t243,(struct A68t64 *,A68_INT ),(struct A68t64 *,A68_INT ,void *));
typedef struct A68t243  A68_243 ;    /* PROC(REF MODE64,INT) REF MODE64 */

A_PROCEDURE(A68_INT ,A68t244,(struct A68t70 ),(struct A68t70 ,void *));
typedef struct A68t244  A68_244 ;    /* PROC(MODE70) INT */

A_PROCEDURE(A68_BOOL ,A68t245,(struct A68t64 *,A68_BITS ),(struct A68t64 *,A68_BITS ,void *));
typedef struct A68t245  A68_245 ;    /* PROC(REF MODE64,BITS) BOOL */

A_PROCEDURE(struct A68t64 *,A68t246,(struct A68t71 *,A68_INT ),(struct A68t71 *,A68_INT ,void *));
typedef struct A68t246  A68_246 ;    /* PROC(REF MODE71,INT) REF MODE64 */

A_PROCEDURE(struct A68t71 *,A68t247,(struct A68t71 *),(struct A68t71 *,void *));
typedef struct A68t247  A68_247 ;    /* PROC(REF MODE71) REF MODE71 */
struct A68t249 ;

A_PROCEDURE(struct A68t64 *,A68t248,(A68_INT ,A68_INT ,A68_BITS ,struct A68t249 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t249 ,void *));
typedef struct A68t248  A68_248 ;    /* PROC(INT,INT,BITS,MODE249) REF MODE64 */
A_VECTOR(struct A68t64 *,A68t249);
typedef struct A68t249  A68_249 ;    /* VECTOR [] REF MODE64 */

A_PROCEDURE(A68_VOID ,A68t250,(struct A68t64 *,A68_BOOL ,A68_VC *),(struct A68t64 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t250  A68_250 ;    /* PROC(REF MODE64,BOOL) MODE26 */

A_PROCEDURE(A68_LINT ,A68t251,(struct A68t64 ),(struct A68t64 ,void *));
typedef struct A68t251  A68_251 ;    /* PROC(MODE64) LONG INT */
struct A68t252 { A68_INT mode; union {
struct A68t64 * mode1;
A68_VC  mode2;
struct A68t68  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t252  A68_252 ;    /* UNION(REF MODE64,MODE26,MODE68)  */

A_PROCEDURE(A68_VOID ,A68t253,(struct A68t252 ,A68_VC *),(struct A68t252 ,A68_VC *,void *));
typedef struct A68t253  A68_253 ;    /* PROC(MODE252) MODE26 */
struct A68t255 ;

A_PROCEDURE(A68_VOID ,A68t254,(struct A68t255 ,A68_VC *),(struct A68t255 ,A68_VC *,void *));
typedef struct A68t254  A68_254 ;    /* PROC(MODE255) MODE26 */
A_VECTOR(struct A68t252 ,A68t255);
typedef struct A68t255  A68_255 ;    /* VECTOR [] MODE252 */

A_PROCEDURE(A68_VOID ,A68t256,(A68_VC ,struct A68t255 ,A68_VC *),(A68_VC ,struct A68t255 ,A68_VC *,void *));
typedef struct A68t256  A68_256 ;    /* PROC(MODE26,MODE255) MODE26 */

A_PROCEDURE(A68_VOID ,A68t257,(struct A68t255 ),(struct A68t255 ,void *));
typedef struct A68t257  A68_257 ;    /* PROC(MODE255) VOID */

A_PROCEDURE(A68_VOID ,A68t258,(A68_VC ,A68_INT ,struct A68t255 ,struct A68t68 *),(A68_VC ,A68_INT ,struct A68t255 ,struct A68t68 *,void *));
typedef struct A68t258  A68_258 ;    /* PROC(MODE26,INT,MODE255) MODE68 */

A_PROCEDURE(struct A68t64 *,A68t259,(struct A68t64 *),(struct A68t64 *,void *));
typedef struct A68t259  A68_259 ;    /* PROC(REF MODE64) REF MODE64 */

A_PROCEDURE(struct A68t64 *,A68t260,(A68_VC ,struct A68t64 *),(A68_VC ,struct A68t64 *,void *));
typedef struct A68t260  A68_260 ;    /* PROC(MODE26,REF MODE64) REF MODE64 */

A_PROCEDURE(A68_VOID ,A68t261,(struct A68t75 ),(struct A68t75 ,void *));
typedef struct A68t261  A68_261 ;    /* PROC(MODE75) VOID */

A_PROCEDURE(A68_VOID ,A68t262,(struct A68t148 ),(struct A68t148 ,void *));
typedef struct A68t262  A68_262 ;    /* PROC(MODE148) VOID */

A_PROCEDURE(A68_VOID ,A68t263,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t263  A68_263 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,58,A68t264);
typedef struct A68t264  A68_264 ;    /* STRUCT 58 CHAR */

A_PROCEDURE(A68_VOID ,A68t265,(struct A68t181 *),(struct A68t181 *,void *));
typedef struct A68t265  A68_265 ;    /* PROC MODE181 */

A_PROCEDURE(A68_VOID ,A68t266,(struct A68t265 ,struct A68t116 *,struct A68t172 ),(struct A68t265 ,struct A68t116 *,struct A68t172 ,void *));
typedef struct A68t266  A68_266 ;    /* PROC(MODE265,REF MODE116,REF MODE172) VOID */
A_ISTRUCT(A68_CHAR ,33,A68t267);
typedef struct A68t267  A68_267 ;    /* STRUCT 33 CHAR */

A_PROCEDURE(A68_VOID ,A68t268,(A68_VC ,A68_BOOL ,A68_BOOL ),(A68_VC ,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t268  A68_268 ;    /* PROC(REF MODE26,BOOL,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t269,(A68_BOOL ,struct A68t63 ,A68_BOOL ),(A68_BOOL ,struct A68t63 ,A68_BOOL ,void *));
typedef struct A68t269  A68_269 ;    /* PROC(BOOL,MODE63,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t270,(struct A68t122 ),(struct A68t122 ,void *));
typedef struct A68t270  A68_270 ;    /* PROC(MODE122) VOID */
A_ISTRUCT(A68_CHAR ,17,A68t271);
typedef struct A68t271  A68_271 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t272);
typedef struct A68t272  A68_272 ;    /* STRUCT 10 CHAR */

A_PROCEDURE(A68_VOID ,A68t273,(A68_BOOL ,struct A68t124 *),(A68_BOOL ,struct A68t124 *,void *));
typedef struct A68t273  A68_273 ;    /* PROC(BOOL) MODE124 */
A_ISTRUCT(A68_CHAR ,23,A68t274);
typedef struct A68t274  A68_274 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,34,A68t275);
typedef struct A68t275  A68_275 ;    /* STRUCT 34 CHAR */
A_ISTRUCT(A68_CHAR ,41,A68t276);
typedef struct A68t276  A68_276 ;    /* STRUCT 41 CHAR */

A_PROCEDURE(A68_VOID ,A68t277,(struct A68t59 ,struct A68t63 ),(struct A68t59 ,struct A68t63 ,void *));
typedef struct A68t277  A68_277 ;    /* PROC(MODE59,MODE63) VOID */
A_ISTRUCT(A68_CHAR ,22,A68t278);
typedef struct A68t278  A68_278 ;    /* STRUCT 22 CHAR */

A_PROCEDURE(A68_VOID ,A68t279,(struct A68t63 ),(struct A68t63 ,void *));
typedef struct A68t279  A68_279 ;    /* PROC(MODE63) VOID */
A_ISTRUCT(A68_CHAR ,38,A68t280);
typedef struct A68t280  A68_280 ;    /* STRUCT 38 CHAR */

A_PROCEDURE(A68_VOID ,A68t281,(struct A68t189 ,A68_BOOL ,struct A68t63 ,struct A68t71 *),(struct A68t189 ,A68_BOOL ,struct A68t63 ,struct A68t71 *,void *));
typedef struct A68t281  A68_281 ;    /* PROC(MODE189,BOOL,MODE63,REF MODE71) VOID */

A_PROCEDURE(A68_VOID ,A68t282,(struct A68t189 ,A68_BOOL ,struct A68t63 ),(struct A68t189 ,A68_BOOL ,struct A68t63 ,void *));
typedef struct A68t282  A68_282 ;    /* PROC(MODE189,BOOL,MODE63) VOID */

A_PROCEDURE(A68_VOID ,A68t283,(struct A68t157 *),(struct A68t157 *,void *));
typedef struct A68t283  A68_283 ;    /* PROC MODE157 */

A_PROCEDURE(struct A68t64 *,A68t284,(struct A68t64 *,struct A68t64 ),(struct A68t64 *,struct A68t64 ,void *));
typedef struct A68t284  A68_284 ;    /* PROC(REF MODE64,MODE64) REF MODE64 */

A_PROCEDURE(struct A68t65 *,A68t285,(struct A68t65 *,struct A68t65 ),(struct A68t65 *,struct A68t65 ,void *));
typedef struct A68t285  A68_285 ;    /* PROC(REF MODE65,MODE65) REF MODE65 */
#define A68_286  A68_VC 
#define A68t286 A68t26            /* FLEX VECTOR [] CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t287);
typedef struct A68t287  A68_287 ;    /* STRUCT 24 CHAR */

A_PROCEDURE(A68_VOID ,A68t288,(A68_BOOL ,struct A68t80 *),(A68_BOOL ,struct A68t80 *,void *));
typedef struct A68t288  A68_288 ;    /* PROC(BOOL) MODE80 */

A_PROCEDURE(A68_VOID ,A68t289,(struct A68t189 ,struct A68t63 ),(struct A68t189 ,struct A68t63 ,void *));
typedef struct A68t289  A68_289 ;    /* PROC(MODE189,MODE63) VOID */
struct A68t290 { A68_INT mode; union {
struct A68t201 * mode1;
A68_INT  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t290  A68_290 ;    /* UNION(REF MODE201,INT,VOID)  */

A_PROCEDURE(A68_VOID ,A68t291,(A68_VC ,struct A68t290 ,A68_VC *),(A68_VC ,struct A68t290 ,A68_VC *,void *));
typedef struct A68t291  A68_291 ;    /* PROC(MODE26,MODE290) MODE26 */
A_ISTRUCT(A68_CHAR ,6,A68t292);
typedef struct A68t292  A68_292 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t293);
typedef struct A68t293  A68_293 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(A68_CHAR ,45,A68t294);
typedef struct A68t294  A68_294 ;    /* STRUCT 45 CHAR */
A_ISTRUCT(A68_CHAR ,73,A68t295);
typedef struct A68t295  A68_295 ;    /* STRUCT 73 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t296);
typedef struct A68t296  A68_296 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t297);
typedef struct A68t297  A68_297 ;    /* STRUCT 15 CHAR */

A_PROCEDURE(A68_VOID ,A68t298,(struct A68t189 ,A68_BOOL ,struct A68t63 ,struct A68t71 **),(struct A68t189 ,A68_BOOL ,struct A68t63 ,struct A68t71 **,void *));
typedef struct A68t298  A68_298 ;    /* PROC(MODE189,BOOL,MODE63,REF REF MODE71) VOID */

A_PROCEDURE(A68_VOID ,A68t299,(A68_BOOL ,struct A68t199 *),(A68_BOOL ,struct A68t199 *,void *));
typedef struct A68t299  A68_299 ;    /* PROC(BOOL) MODE199 */

A_PROCEDURE(struct A68t71 *,A68t300,(struct A68t71 *,struct A68t71 ),(struct A68t71 *,struct A68t71 ,void *));
typedef struct A68t300  A68_300 ;    /* PROC(REF MODE71,MODE71) REF MODE71 */
A_ISTRUCT(A68_CHAR ,26,A68t301);
typedef struct A68t301  A68_301 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,37,A68t302);
typedef struct A68t302  A68_302 ;    /* STRUCT 37 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t303);
typedef struct A68t303  A68_303 ;    /* STRUCT 30 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from values --- */
extern A68_VOID  DAQACTR_getcfragment(struct A68t64 *,A68_VC *);
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
extern A68_VOID  ISQACTR_oper(struct A68t185 ,struct A68t71 **,struct A68t71 *);
/* --- End of imports from oper --- */


/* --- Imports from moduletracer --- */
/* --- End of imports from moduletracer --- */


/* --- Imports from modules --- */
extern A68_115 * PCPACTR_currentmodinfo;
extern A68_BOOL  KOOACTR_composition;
extern A68_215  OCPACTR_currentmodule;
extern A68_VOID  WFPACTR_initialiseunames(void);
/* --- End of imports from modules --- */


/* --- Imports from modes --- */
extern A68_202  YVMACTR_constituents;
extern A68_VOID  RFNACTR_cfieldname(struct A68t201 *,A68_VC *);
extern A68_VOID  QMOACTR_declarectemporary(A68_INT ,A68_VC ,A68_68 *);
extern A68_BOOL  OTMACTR_dynamic(A68_INT );
extern A68_INT  IOMACTR_modetype(A68_INT );
extern A68_202  AWMACTR_parameters;
extern A68_VOID  STMACTR_procinfo(A68_INT ,A68_200 *);
extern A68_VOID  EVMACTR_structfields(A68_INT ,A68_209 *);
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
extern A68_VOID  CJABCTR_for(struct A68t195 *,A68_INT ,struct A68t71 **);
extern A68_VOID  QSABCTR_forall(struct A68t199 ,struct A68t71 **);
extern A68_VOID  KDBBCTR_while(void);
extern A68_VOID  MDBBCTR_whiledo(struct A68t64 *);
extern A68_VOID  FEBBCTR_whileod(void);
extern A68_75  MEBBCTR_od;
/* --- End of imports from loops --- */


/* --- Imports from loads --- */
extern A68_VOID  ZBABCTR_load(struct A68t191 ,A68_64 *);
/* --- End of imports from loads --- */


/* --- Imports from initialiser --- */
extern A68_VOID  VZZACTR_initialise(struct A68t116 *,struct A68t181 *,struct A68t172 );
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
extern A68_VOID  MYVACTR_ccdec(struct A68t157 ,struct A68t64 *,A68_INT );
extern A68_VOID  RZWACTR_environoflabel(A68_INT ,A68_123 *);
extern A68_VOID  VWVACTR_iddec(struct A68t157 ,struct A68t71 **);
extern A68_161  WPKACTR_ids;
extern A68_VOID  ONVACTR_initialdummydec(struct A68t157 );
extern A68_VOID  ATWACTR_labdec(struct A68t165 );
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
extern A68_VOID  VSYACTR_startmodule(A68_VC ,A68_VC );
extern A68_VOID  NWYACTR_endmodule(void);
extern A68_VOID  EQYACTR_startroutine(struct A68t122 ,struct A68t123 ,struct A68t124 ,A68_INT ,struct A68t64 *);
extern A68_VOID  XQYACTR_endroutine(struct A68t122 ,struct A68t64 *);
extern A68_VOID  IUYACTR_startdecsmodule(A68_VC ,A68_VC );
extern A68_VOID  IWYACTR_startprocmodule(struct A68t122 ,A68_VC ,A68_VC ,struct A68t64 *);
extern A68_VOID  NXYACTR_enddecsmodule(A68_VC );
/* --- End of imports from entryandreturn --- */


/* --- Imports from clauses --- */
extern A68_VOID  LWZACTR_exit(A68_BOOL ,A68_BOOL ,struct A68t63 );
extern A68_VOID  HWZACTR_semi(A68_BOOL ,A68_BOOL );
extern A68_VOID  MHZACTR_begin(A68_BOOL ,A68_BOOL );
extern A68_VOID  YHZACTR_end(A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t55 *);
extern A68_VOID  LMZACTR_then(struct A68t64 *);
extern A68_VOID  HNZACTR_else(void);
extern A68_VOID  ETZACTR_fi(A68_BOOL ,struct A68t63 );
extern A68_VOID  AOZACTR_casein(struct A68t64 *);
extern A68_VOID  HQZACTR_comma(A68_INT );
extern A68_VOID  MRZACTR_out(void);
extern A68_VOID  ESZACTR_esac(A68_BOOL ,struct A68t63 );
extern A68_VOID  FPZACTR_inu(struct A68t79 ,struct A68t64 *,struct A68t80 );
extern A68_VOID  DRZACTR_commau(struct A68t79 ,struct A68t64 ,struct A68t80 );
extern A68_75  ASZACTR_outu;
extern A68_76  ATZACTR_esacu;
extern A68_VOID  XTZACTR_optboolwarning(A68_BOOL ,struct A68t64 *);
extern A68_VOID  QVZACTR_optbooloper(void);
extern A68_60  WVZACTR_startseries;
extern A68_VOID  EWZACTR_endseries(struct A68t59 ,struct A68t63 ,struct A68t55 *,A68_BOOL ,A68_BOOL ,A68_BOOL );
extern A68_VOID  GFZACTR_evaluateresult(struct A68t71 **,struct A68t63 );
extern A68_VOID  NDZACTR_evaluatenoresult(struct A68t71 **);
extern A68_VOID  EHZACTR_evaluatesimpleenquiry(struct A68t71 **,struct A68t63 );
extern A68_VOID  EXZACTR_codeinsert(A68_VC ,A68_INT ,struct A68t71 *,A68_68 *);
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
extern void YQQACTR(void);   /* oper */
extern void BCHACTR(void);   /* moduletracer */
extern void ANOACTR(void);   /* modules */
extern void DNMACTR(void);   /* modes */
extern void ZDAACTR(void);   /* incmode */
extern void CIABCTR(void);   /* loops */
extern void AAABCTR(void);   /* loads */
extern void MZZACTR(void);   /* initialiser */
extern void GKJACTR(void);   /* incvalue */
extern void XFAACTR(void);   /* incoperfn */
extern void UAAACTR(void);   /* incimperatives */
extern void YMVACTR(void);   /* identifiers */
extern void HPIACTR(void);   /* environment */
extern void BPLACTR(void);   /* environ */
extern void NGYACTR(void);   /* entryandreturn */
extern void TCZACTR(void);   /* clauses */
extern void THAACTR(void);   /* centities */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_264   REBBCTR = {"$Id: compiler.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,SEBBCTR,REBBCTR,58)
static A68_267   NFBBCTR = {"Composition modules not supported"}; 
A_GISVEC(A68_VC ,OFBBCTR,NFBBCTR,33)
static A68_271   PGBBCTR = {"generator routine"}; 
static A68_272   QGBBCTR = {"!generator"}; 
A_GISVEC(A68_VC ,RGBBCTR,QGBBCTR,10)
A_GISVEC(A68_VC ,SGBBCTR,PGBBCTR,17)
static A68_274   WHBBCTR = {"COMPILER: fdec expected"}; 
A_GISVEC(A68_VC ,XHBBCTR,WHBBCTR,23)
static A68_275   YHBBCTR = {"COMPILER: fdec has unexpected mode"}; 
A_GISVEC(A68_VC ,ZHBBCTR,YHBBCTR,34)
static A68_276   BIBBCTR = {"COMPILER: TRANSIDDEC (fdec) expected here"}; 
A_GISVEC(A68_VC ,CIBBCTR,BIBBCTR,41)
static A68_278   UIBBCTR = {"end OF answer ISNT NIL"}; 
A_GISVEC(A68_VC ,VIBBCTR,UIBBCTR,22)
static A68_280   JJBBCTR = {"exit not permitted in <enquiry clause>"}; 
A_GISVEC(A68_VC ,KJBBCTR,JJBBCTR,38)
static A68_287   PMBBCTR = {"fn OF starter = caseu fn"}; 
A_GISVEC(A68_VC ,QMBBCTR,PMBBCTR,24)
static A68_292   LOBBCTR = {".data["}; 
A_GISVEC(A68_VC ,MOBBCTR,LOBBCTR,6)
static A68_293   POBBCTR = {""}; 
A_GISVEC(A68_VC ,QOBBCTR,POBBCTR,0)
static A68_294   ROBBCTR = {"compiler:collateral clause - unknown selector"}; 
A_GISVEC(A68_VC ,SOBBCTR,ROBBCTR,45)
static A68_293   TOBBCTR = {""}; 
A_GISVEC(A68_VC ,UOBBCTR,TOBBCTR,0)
static A68_295   BPBBCTR = {"compiler: collateral clause result is neither struct nor istruct nor void"}; 
A_GISVEC(A68_VC ,CPBBCTR,BPBBCTR,73)
static A68_293   GPBBCTR = {""}; 
A_GISVEC(A68_VC ,IPBBCTR,GPBBCTR,0)
static A68_287   KPBBCTR = {"collateral clause result"}; 
A_GISVEC(A68_VC ,LPBBCTR,KPBBCTR,24)
static A68_274   IQBBCTR = {"fn OF s = coll comma fn"}; 
A_GISVEC(A68_VC ,JQBBCTR,IQBBCTR,23)
static A68_296   XQBBCTR = {"fn OF t = end coll fn"}; 
A_GISVEC(A68_VC ,YQBBCTR,XQBBCTR,21)
static A68_297   RRBBCTR = {"fn OF s = do fn"}; 
A_GISVEC(A68_VC ,SRBBCTR,RRBBCTR,15)
static A68_89   KUBBCTR = {"no closed clause OPTBOOL results"}; 
A_GISVEC(A68_VC ,LUBBCTR,KUBBCTR,32)
static A68_89   IVBBCTR = {"no choice clause OPTBOOL results"}; 
A_GISVEC(A68_VC ,JVBBCTR,IVBBCTR,32)
static A68_301   GXBBCTR = {"PROC modules not supported"}; 
A_GISVEC(A68_VC ,HXBBCTR,GXBBCTR,26)
static A68_302   KXBBCTR = {"rest OF value stack IS nil value list"}; 
A_GISVEC(A68_VC ,LXBBCTR,KXBBCTR,37)
static A68_303   OXBBCTR = {"invalid imperative in 'phrase'"}; 
A_GISVEC(A68_VC ,PXBBCTR,OXBBCTR,30)
static A68_297   LYBBCTR = {"module: ROUTINE"}; 
A_GISVEC(A68_VC ,MYBBCTR,LYBBCTR,15)
static A68_271   RYBBCTR = {"generator routine"}; 
static A68_272   SYBBCTR = {"!generator"}; 
A_GISVEC(A68_VC ,TYBBCTR,SYBBCTR,10)
A_GISVEC(A68_VC ,UYBBCTR,RYBBCTR,17)
typedef struct   /* env of non-global proc */
{
A68_181 * ZEBBCTR_nextimperative;
A68_181 * XEBBCTR_currentimperative;
A68_265  Nextstreamimperative;
} DFBBCTR_read;
typedef struct   /* env of non-global proc */
{
A68_181 * ZEBBCTR_nextimperative;
A68_265  Nextstreamimperative;
} JFBBCTR_lookahead;
typedef struct   /* env of non-global proc */
{
A68_75  BFBBCTR_read;
A68_181 * XEBBCTR_currentimperative;
A68_75  HFBBCTR_lookahead;
A68_181 * ZEBBCTR_nextimperative;
} UFBBCTR_module;
typedef struct   /* env of non-global proc */
{
A68_75  BFBBCTR_read;
A68_181 * XEBBCTR_currentimperative;
A68_75  WFBBCTR_skiproutine;
} YFBBCTR_skiproutine;
typedef struct   /* env of non-global proc */
{
A68_75  HFBBCTR_lookahead;
A68_181 * ZEBBCTR_nextimperative;
A68_75  BFBBCTR_read;
A68_75  WFBBCTR_skiproutine;
A68_181 * XEBBCTR_currentimperative;
A68_269 * VFBBCTR_phrase_;
} GGBBCTR_routine;
typedef struct   /* env of non-global proc */
{
A68_269 * VFBBCTR_phrase_;
A68_181 * XEBBCTR_currentimperative;
} JIBBCTR_serialclause;
typedef struct   /* env of non-global proc */
{
A68_269 * VFBBCTR_phrase_;
A68_181 * XEBBCTR_currentimperative;
} DJBBCTR_enquiryclause;
typedef struct   /* env of non-global proc */
{
A68_277  HIBBCTR_serialclause;
A68_75  BFBBCTR_read;
A68_181 * XEBBCTR_currentimperative;
A68_279  BJBBCTR_enquiryclause;
A68_269  PJBBCTR_phrase;
A68_270  EGBBCTR_routine;
} RJBBCTR_phrase;
typedef struct   /* env of non-global proc */
{
int dummy;
} DHBBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  ZGBBCTR_paramcount;
A_PAD_INT(PAD_174)
} OHBBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_277  HIBBCTR_serialclause;
A68_75  BFBBCTR_read;
A68_181 * XEBBCTR_currentimperative;
A68_279  BJBBCTR_enquiryclause;
A68_269  PJBBCTR_phrase;
A68_71 ** SJBBCTR_valuestack;
} ZJBBCTR_enclosedclause;
typedef struct   /* env of non-global proc */
{
A68_71 ** SJBBCTR_valuestack;
A68_269  PJBBCTR_phrase;
} PVBBCTR_optboolexpression;
typedef struct   /* env of non-global proc */
{
A68_277  HIBBCTR_serialclause;
} GKBBCTR_closedclause;
typedef struct   /* env of non-global proc */
{
A68_75  BFBBCTR_read;
A68_181 * XEBBCTR_currentimperative;
A68_279  BJBBCTR_enquiryclause;
A68_277  HIBBCTR_serialclause;
} XKBBCTR_choiceclause;
typedef struct   /* env of non-global proc */
{
A68_269  PJBBCTR_phrase;
A68_181 * XEBBCTR_currentimperative;
} AOBBCTR_collateralclause;
typedef struct   /* env of non-global proc */
{
A68_75  BFBBCTR_read;
A68_181 * XEBBCTR_currentimperative;
A68_279  BJBBCTR_enquiryclause;
A68_277  HIBBCTR_serialclause;
} ERBBCTR_loopbody;
typedef struct   /* env of non-global proc */
{
A68_75  BFBBCTR_read;
A68_181 * XEBBCTR_currentimperative;
A68_76  CRBBCTR_loopbody;
} ESBBCTR_loopclause;
typedef struct   /* env of non-global proc */
{
A68_75  BFBBCTR_read;
A68_181 * XEBBCTR_currentimperative;
A68_76  CRBBCTR_loopbody;
} CTBBCTR_forallclause;
typedef struct   /* env of non-global proc */
{
A68_75  BFBBCTR_read;
A68_181 * XEBBCTR_currentimperative;
A68_79 * YKBBCTR_uchoice;
} BLBBCTR_readuchoiceimperative;
typedef struct   /* env of non-global proc */
{
A68_75  BFBBCTR_read;
A68_181 * XEBBCTR_currentimperative;
} JLBBCTR_iddecimperative;
typedef struct   /* env of non-global proc */
{
A68_124  CNBBCTR_cons;
} GNBBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  FTBBCTR_controlcount;
A_PAD_INT(PAD_175)
} JTBBCTR_generator;

A68_VOID  WEBBCTR_translator(A68_265  Nextstreamimperative, A68_116 * Xsizes, A68_172  Keptdecnos);

A_STATIC A68_VOID  CFBBCTR_read(void *NonLocals);

A_STATIC A68_VOID  IFBBCTR_lookahead(void *NonLocals);

A_STATIC A68_VOID  MFBBCTR_compositionmodule(void);

A_STATIC A68_VOID  TFBBCTR_module(A68_VC  Modulename, A68_BOOL  Decsmodule, A68_BOOL  Prelude, void *NonLocals);

A_STATIC A68_VOID  XFBBCTR_skiproutine(void *NonLocals);

A_STATIC A68_VOID  FGBBCTR_routine(A68_122  Routine, void *NonLocals);

A_STATIC A68_VOID  CHBBCTR_generator(A68_BOOL  AHBBCTR_anonymous, A68_124  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NHBBCTR_generator(A68_BOOL  LHBBCTR_anonymous, A68_124  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IIBBCTR_serialclause(A68_59  Properties, A68_63  Answer, void *NonLocals);

A_STATIC A68_VOID  CJBBCTR_enquiryclause(A68_63  Answer, void *NonLocals);

A_STATIC A68_VOID  QJBBCTR_phrase(A68_BOOL  Body, A68_63  Answer, A68_BOOL  Simple, void *NonLocals);

A_STATIC A68_VOID  YJBBCTR_enclosedclause(A68_189  Starter, A68_BOOL  Body, A68_63  Answer, A68_71 * Newvalue, void *NonLocals);

A_STATIC A68_VOID  FKBBCTR_closedclause(A68_189  Starter, A68_BOOL  Body, A68_63  Answer, void *NonLocals);

A_STATIC A68_VOID  WKBBCTR_choiceclause(A68_189  Starter, A68_BOOL  Body, A68_63  Answer, void *NonLocals);

A_STATIC A68_VOID  ALBBCTR_readuchoiceimperative(void *NonLocals);

A_STATIC A68_VOID  ILBBCTR_iddecimperative(A68_157  *ReturnedValue, void *NonLocals);

A_STATIC A68_64 * BMBBCTR_assignment(A68_64 * ZLBBCTR_anonymous, A68_64  AMBBCTR_anonymous);

A_STATIC A68_65 * GMBBCTR_assignment(A68_65 * EMBBCTR_anonymous, A68_65  FMBBCTR_anonymous);

A_STATIC A68_VOID  FNBBCTR_generator(A68_BOOL  DNBBCTR_anonymous, A68_80  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZNBBCTR_collateralclause(A68_189  Starter, A68_63  Answer, void *NonLocals);

A_STATIC A68_VOID  EOBBCTR_collateralunitassignee(A68_VC  Temp, A68_290  Selector, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  DRBBCTR_loopbody(A68_BOOL  Body, A68_63  Answer, void *NonLocals);

A_STATIC A68_VOID  DSBBCTR_loopclause(A68_189  Starter, A68_BOOL  Body, A68_63  Answer, A68_71 ** Frobytlist, void *NonLocals);

A_STATIC A68_VOID  BTBBCTR_forallclause(A68_189  Starter, A68_BOOL  Body, A68_63  Answer, A68_71 ** Foralllist, void *NonLocals);

A_STATIC A68_VOID  ITBBCTR_generator(A68_BOOL  GTBBCTR_anonymous, A68_199  *ReturnedValue, void *NonLocals);

A_STATIC A68_71 * GUBBCTR_assignment(A68_71 * EUBBCTR_anonymous, A68_71  FUBBCTR_anonymous);

A_STATIC A68_VOID  OVBBCTR_optboolexpression(A68_INT  Warn, void *NonLocals);

A_STATIC A68_65 * GMBBCTR_assignment(A68_65 * EMBBCTR_anonymous, A68_65  FMBBCTR_anonymous)
{ 
A68_65  HMBBCTR;  /* united object - for case conformity */
A68_VC  IMBBCTR_anonymous A_UNUSED = {0};
A68_VC  JMBBCTR;  /* OPERATORS - copy to flex */
A68_286 * KMBBCTR;  /* YIELD */
A68_65 * LMBBCTR;  /* clause result */
{ 
(*A_NILCHECK(EMBBCTR_anonymous)) = FMBBCTR_anonymous;
HMBBCTR = FMBBCTR_anonymous ;
switch ( HMBBCTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
IMBBCTR_anonymous = (HMBBCTR.data.mode6);
KMBBCTR = &(EMBBCTR_anonymous-> data.mode6) ;
(void)((*A_NILCHECK(KMBBCTR)) = A_VCOPY(IMBBCTR_anonymous,JMBBCTR,A68_CHAR ));
break;
default: 
/*SKIP*/;
break;
} 
LMBBCTR = EMBBCTR_anonymous;
} 
return( LMBBCTR );
} 
#undef NL

A_STATIC A68_VOID  ALBBCTR_readuchoiceimperative(void *NonLocals)
#define NL(x) (((BLBBCTR_readuchoiceimperative *)NonLocals)->x)
{ 
A68_181  CLBBCTR;  /* united object - for case conformity */
A68_79  DLBBCTR_u A_UNUSED = {0};
A68_BOOL  ELBBCTR;  /* clause result */
A68_165  FLBBCTR_l A_UNUSED = {0};
A68_BOOL  GLBBCTR;  /* clause result */
A_PROC_ENTRY(readuchoiceimperative);
for ( ;; )
{ 
 /* line 460: */
(void)(A_CALLPROC(NL(BFBBCTR_read),(),((NL(BFBBCTR_read)).nonlocals)));
 /* line 461: */
 /* line 462: */
CLBBCTR = (*A_NILCHECK(NL(XEBBCTR_currentimperative))) ;
switch ( CLBBCTR.mode )
{ 
case 15: /* STRUCT(INT,BITS,INT)  */
DLBBCTR_u = (CLBBCTR.data.mode15);
{ 
(*A_NILCHECK(NL(YKBBCTR_uchoice))) = DLBBCTR_u;
 /* line 463: */
ELBBCTR = A68_FALSE;
} 
break;
case 14: /* STRUCT(REF MODE26,INT,INT,BOOL)  */
FLBBCTR_l = (CLBBCTR.data.mode14);
{ 
(void)(ATWACTR_labdec(FLBBCTR_l));
 /* line 464: */
 /* line 465: */
ELBBCTR = A68_TRUE;
} 
break;
default: 
(void)(SXIACTR_terminalerror(668));
 /* line 466: */
 /* line 467: */
 /* line 468: */
ELBBCTR = A68_FALSE;
break;
} 
 /* line 469: */
GLBBCTR = ELBBCTR;
if ( !GLBBCTR ) break;
/*SKIP*/;
}
A_PROC_EXIT(readuchoiceimperative);
return;
} 
#undef NL

A_STATIC A68_VOID  ILBBCTR_iddecimperative(A68_157  *ReturnedValue, void *NonLocals)
#define NL(x) (((JLBBCTR_iddecimperative *)NonLocals)->x)
{ 
A68_181  KLBBCTR;  /* united object - for case conformity */
A68_157  LLBBCTR_iddec A_UNUSED = {0};
A68_157  MLBBCTR;  /* clause result */
A68_157  NLBBCTR = {0};  /* OPERATORS - skip to mode */
A_PROC_ENTRY(iddecimperative);
{ 
(void)(A_CALLPROC(NL(BFBBCTR_read),(),((NL(BFBBCTR_read)).nonlocals)));
 /* line 476: */
 /* line 477: */
KLBBCTR = (*A_NILCHECK(NL(XEBBCTR_currentimperative))) ;
switch ( KLBBCTR.mode )
{ 
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
LLBBCTR_iddec = (KLBBCTR.data.mode11);
 /* line 478: */
 /* line 479: */
MLBBCTR = LLBBCTR_iddec;
break;
default: 
(void)(SXIACTR_terminalerror(669));
 /* line 480: */
 /* line 481: */
MLBBCTR = NLBBCTR;
break;
} 
} 
A_PROC_EXIT(iddecimperative);
*ReturnedValue = (MLBBCTR);
return;
} 
#undef NL

A_STATIC A68_64 * BMBBCTR_assignment(A68_64 * ZLBBCTR_anonymous, A68_64  AMBBCTR_anonymous)
{ 
A68_INT * CMBBCTR;  /* YIELD */
A68_BITS * DMBBCTR;  /* YIELD */
A68_64 * MMBBCTR;  /* clause result */
{ 
CMBBCTR = (&(A_NILCHECK(ZLBBCTR_anonymous)->Mode)) ;
(*A_NILCHECK(CMBBCTR)) = AMBBCTR_anonymous.Mode;
DMBBCTR = (&(A_NILCHECK(ZLBBCTR_anonymous)->Info)) ;
(*A_NILCHECK(DMBBCTR)) = AMBBCTR_anonymous.Info;
(void)(GMBBCTR_assignment((&(A_NILCHECK(ZLBBCTR_anonymous)->Extra)), AMBBCTR_anonymous.Extra));
MMBBCTR = ZLBBCTR_anonymous;
} 
return( MMBBCTR );
} 
#undef NL

A_STATIC A68_VOID  FNBBCTR_generator(A68_BOOL  DNBBCTR_anonymous, A68_80  *ReturnedValue, void *NonLocals)
#define NL(x) (((GNBBCTR_generator *)NonLocals)->x)
{ 
A68_80  HNBBCTR;  /* clause result */
A68_80  INBBCTR;  /* OPERATORS - dynamic generator */
{ 
INBBCTR.dim[0].upb = NL(CNBBCTR_cons).upb ;
INBBCTR.dim[0].lwb = 1 ;
(void)A_1INITSTRIDES(INBBCTR) ;
( DNBBCTR_anonymous? A_R1LOC(A68_BOOL ,INBBCTR): A_R1HEAP(A68_BOOL ,INBBCTR) );
HNBBCTR = INBBCTR;
} 
*ReturnedValue = (HNBBCTR);
return;
} 
#undef NL
 /* line 628: */

A_STATIC A68_VOID  EOBBCTR_collateralunitassignee(A68_VC  Temp, A68_290  Selector, A68_VC  *ReturnedValue)
{ 
A68_290  FOBBCTR;  /* united object - for case conformity */
A68_201 * GOBBCTR_sf A_UNUSED = {0};
A68_VC  HOBBCTR;  /* clause result */
A68_VC  IOBBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  JOBBCTR;  /* avoid structure result */
A68_INT  KOBBCTR_i A_UNUSED = {0};
A68_VC  NOBBCTR;  /* avoid structure result */
A68_VC  OOBBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(collateralunitassignee);
 /* line 635: */
 /* line 636: */
FOBBCTR = Selector ;
switch ( FOBBCTR.mode )
{ 
case 1: /* REF STRUCT(INT,INT,MODE89)  */
GOBBCTR_sf = (FOBBCTR.data.mode1);
 /* line 637: */
 /* line 638: */
RFNACTR_cfieldname( GOBBCTR_sf, &JOBBCTR );
HOBBCTR = A_VC_PLUS(A_VC_PLUS(Temp,A_HVEC(IOBBCTR,'.',A68_CHAR )),JOBBCTR);
break;
case 2: /* INT */
KOBBCTR_i = (FOBBCTR.data.mode2);
 /* line 639: */
 /* line 640: */
ROAAOSF_whole( (KOBBCTR_i-1), 0, &NOBBCTR );
HOBBCTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(Temp,MOBBCTR),NOBBCTR),A_HVEC(OOBBCTR,']',A68_CHAR ));
break;
case 3: /* VOID */
 /* line 641: */
 /* line 642: */
HOBBCTR = QOBBCTR;
break;
default: 
(void)(WXIACTR_assert(SOBBCTR, A68_FALSE));
 /* line 643: */
HOBBCTR = UOBBCTR;
break;
} 
A_PROC_EXIT(collateralunitassignee);
*ReturnedValue = (HOBBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ITBBCTR_generator(A68_BOOL  GTBBCTR_anonymous, A68_199  *ReturnedValue, void *NonLocals)
#define NL(x) (((JTBBCTR_generator *)NonLocals)->x)
{ 
A68_199  KTBBCTR;  /* clause result */
A68_199  LTBBCTR;  /* OPERATORS - dynamic generator */
{ 
LTBBCTR.upb = NL(FTBBCTR_controlcount) ;
( GTBBCTR_anonymous? A_VLOC(A68_196 ,LTBBCTR): A_VHEAP(A68_196 ,LTBBCTR) );
KTBBCTR = LTBBCTR;
} 
*ReturnedValue = (KTBBCTR);
return;
} 
#undef NL
 /* line 396: */
 /* line 398: */

A_STATIC A68_VOID  FKBBCTR_closedclause(A68_189  Starter, A68_BOOL  Body, A68_63  Answer, void *NonLocals)
#define NL(x) (((GKBBCTR_closedclause *)NonLocals)->x)
{ 
A68_59  HKBBCTR;  /* collateral clause result */
A68_BITS  IKBBCTR;  /* ADICOPS - >= */
A68_INT  JKBBCTR;  /* ADICOPS - ABS INT */
A68_59  KKBBCTR_properties A_UNUSED = {0};
A68_63  LKBBCTR_ccanswer A_UNUSED = {0};
A68_BITS  MKBBCTR;  /* ADICOPS - >= */
A68_BOOL  NKBBCTR_seriescontainsexit A_UNUSED = {0};
A68_55  OKBBCTR;  /* collateral clause result */
A68_55 * PKBBCTR;  /* YIELD */
A68_55 ** QKBBCTR;  /* YIELD */
A68_BITS  RKBBCTR;  /* ADICOPS - >= */
A_PROC_ENTRY(closedclause);
 /* line 404: */
 /* line 406: */
{ 
 /* line 407: */
IKBBCTR = Starter.Props ;
HKBBCTR.Block = (A_LB_GE(IKBBCTR,WCAACTR_decbit)&(!Body));
 /* line 408: */
JKBBCTR = Starter.Resultmode ;
HKBBCTR.Dynamicresult = OTMACTR_dynamic(A_ABS(JKBBCTR));
 /* line 410: */
HKBBCTR.Discardeddynamicresult = ((A68_BITS )(Starter.Props&MDAACTR_dybits)!=0X0U);
HKBBCTR.Type = Starter.Fn;
KKBBCTR_properties = HKBBCTR;
 /* line 411: */
LKBBCTR_ccanswer = Answer;
 /* line 412: */
 /* line 413: */
MKBBCTR = Starter.Props ;
NKBBCTR_seriescontainsexit = A_LB_GE(MKBBCTR,TCAACTR_exitbit);
 /* line 414: */
 /* line 415: */
 /* line 416: */
if (NKBBCTR_seriescontainsexit)
{ 
 /* line 417: */
OKBBCTR.Name = QIMACTR_newuniquename();
 /* line 418: */
OKBBCTR.Set = A68_TRUE;
PKBBCTR = A_HEAP(A68_55 ) ;
(void)((*A_NILCHECK(PKBBCTR)) = OKBBCTR) ;
QKBBCTR = (&(A_NILCHECK((&LKBBCTR_ccanswer))->End)) ;
(*A_NILCHECK(QKBBCTR)) = PKBBCTR;
} 
 /* line 419: */
RKBBCTR = Starter.Props ;
(void)(MHZACTR_begin(A_LB_GE(RKBBCTR,ADAACTR_labbit), Body));
 /* line 420: */
(void)(A_CALLPROC(NL(HIBBCTR_serialclause),(KKBBCTR_properties, LKBBCTR_ccanswer),(KKBBCTR_properties, LKBBCTR_ccanswer,(NL(HIBBCTR_serialclause)).nonlocals)));
 /* line 421: */
 /* line 422: */
 /* line 423: */
 /* line 424: */
 /* line 426: */
 /* line 427: */
(void)(YHZACTR_end(KKBBCTR_properties.Dynamicresult, NKBBCTR_seriescontainsexit, Body, (*A_NILCHECK((&(A_NILCHECK((&LKBBCTR_ccanswer))->End))))));
} 
A_PROC_EXIT(closedclause);
return;
} 
#undef NL
 /* line 431: */
 /* line 433: */

A_STATIC A68_VOID  WKBBCTR_choiceclause(A68_189  Starter, A68_BOOL  Body, A68_63  Answer, void *NonLocals)
#define NL(x) (((XKBBCTR_choiceclause *)NonLocals)->x)
{ 
A68_79  YKBBCTR_uchoice A_UNUSED = {0};
A68_75  ZKBBCTR_readuchoiceimperative;   /* proc value of non-global proc */
A68_283  HLBBCTR_iddecimperative;   /* proc value of non-global proc */
A68_INT  OLBBCTR;  /* ADICOPS - ABS INT */
A68_INT  PLBBCTR_resultmode A_UNUSED = {0};
A68_BOOL  QLBBCTR_discardlevelactivated A_UNUSED = {0};
A68_INT  RLBBCTR_enquirytype A_UNUSED = {0};
A68_64  SLBBCTR_enquiry A_UNUSED = {0};
A68_80  TLBBCTR_case A_UNUSED = {0};
A68_55 * ULBBCTR_endofchoiceclause A_UNUSED = {0};
A68_BOOL  VLBBCTR_elsepart A_UNUSED = {0};
A68_BOOL  WLBBCTR_outpart A_UNUSED = {0};
A68_64  XLBBCTR;  /* collateral clause result */
A68_65  YLBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_64  NMBBCTR;  /* collateral clause result */
A68_65  OMBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  RMBBCTR;  /* ADICOPS - ABS INT */
A68_INT  SMBBCTR_umode A_UNUSED = {0};
A68_64  TMBBCTR;  /* collateral clause result */
A68_65  UMBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_63  VMBBCTR;  /* collateral clause result */
A68_63  WMBBCTR;  /* collateral clause result */
A68_63  XMBBCTR_seriesanswer A_UNUSED = {0};
A68_59  YMBBCTR_seriesproperties A_UNUSED = {0};
A68_181  ZMBBCTR;  /* united object - for case conformity */
A68_188  ANBBCTR_s A_UNUSED = {0};
A68_124  BNBBCTR;  /* avoid structure result */
A68_124  CNBBCTR_cons A_UNUSED = {0};
A68_288  ENBBCTR_generator;   /* proc value of non-global proc */
A68_80  JNBBCTR;  /* avoid structure result */
A68_BOOL * KNBBCTR_c A_UNUSED = {0};
A68_INT  LNBBCTR;  /* forall loop counter */
A68_BITS  MNBBCTR;  /* ADICOPS - >= */
A68_157  NNBBCTR;  /* avoid structure result */
A68_BITS  ONBBCTR;  /* ADICOPS - >= */
A68_157  PNBBCTR;  /* avoid structure result */
A68_59  QNBBCTR;  /* collateral clause result */
A68_BITS  RNBBCTR;  /* ADICOPS - >= */
A68_INT  SNBBCTR;  /* ADICOPS - ABS INT */
A68_BOOL  TNBBCTR;  /* clause result */
A68_190  UNBBCTR_t A_UNUSED = {0};
A68_BOOL  VNBBCTR;  /* clause result */
A_PROC_ENTRY(choiceclause);
 /* line 445: */
 /* line 447: */
{ 
 /* line 452: */
 /* line 459: */
A_CLOSURE( ZKBBCTR_readuchoiceimperative, ALBBCTR_readuchoiceimperative, BLBBCTR_readuchoiceimperative );
(( BLBBCTR_readuchoiceimperative * ) ( ZKBBCTR_readuchoiceimperative.nonlocals )) -> BFBBCTR_read = NL(BFBBCTR_read);
(( BLBBCTR_readuchoiceimperative * ) ( ZKBBCTR_readuchoiceimperative.nonlocals )) -> XEBBCTR_currentimperative = NL(XEBBCTR_currentimperative);
(( BLBBCTR_readuchoiceimperative * ) ( ZKBBCTR_readuchoiceimperative.nonlocals )) -> YKBBCTR_uchoice = (&YKBBCTR_uchoice);
 /* line 471: */
 /* line 475: */
A_CLOSURE( HLBBCTR_iddecimperative, ILBBCTR_iddecimperative, JLBBCTR_iddecimperative );
(( JLBBCTR_iddecimperative * ) ( HLBBCTR_iddecimperative.nonlocals )) -> BFBBCTR_read = NL(BFBBCTR_read);
(( JLBBCTR_iddecimperative * ) ( HLBBCTR_iddecimperative.nonlocals )) -> XEBBCTR_currentimperative = NL(XEBBCTR_currentimperative);
 /* line 483: */
OLBBCTR = Starter.Resultmode ;
PLBBCTR_resultmode = A_ABS(OLBBCTR);
 /* line 484: */
QLBBCTR_discardlevelactivated = A68_FALSE;
 /* line 485: */
 /* line 486: */
 /* line 487: */
 /* line 488: */
ULBBCTR_endofchoiceclause = Answer.End;
 /* line 489: */
VLBBCTR_elsepart = A68_FALSE;
 /* line 490: */
WLBBCTR_outpart = A68_FALSE;
 /* line 492: */
 /* line 493: */
if (Starter.Fn==EBAACTR_iffn)
{ 
XLBBCTR.Mode = WEAACTR_boolmode;
XLBBCTR.Info = PKJACTR_defaultinfo;
XLBBCTR.Extra = A_EMPTY(YLBBCTR,3);
(void)(BMBBCTR_assignment((&SLBBCTR_enquiry), XLBBCTR));
 /* line 494: */
 /* line 496: */
RLBBCTR_enquirytype = ILJACTR_enquiryresult;
} 
else
{ 
 /* line 497: */
if (Starter.Fn==FBAACTR_casefn)
{ 
NMBBCTR.Mode = EFAACTR_intmode;
NMBBCTR.Info = PKJACTR_defaultinfo;
NMBBCTR.Extra = A_EMPTY(OMBBCTR,3);
(void)(BMBBCTR_assignment((&SLBBCTR_enquiry), NMBBCTR));
 /* line 498: */
 /* line 500: */
RLBBCTR_enquirytype = ILJACTR_enquiryresult;
} 
else
{ 
(void)(WXIACTR_assert(QMBBCTR, (Starter.Fn==GBAACTR_caseufn)));
 /* line 501: */
RMBBCTR = Starter.Mode ;
SMBBCTR_umode = A_ABS(RMBBCTR);
 /* line 502: */
TMBBCTR.Mode = SMBBCTR_umode;
TMBBCTR.Info = PKJACTR_defaultinfo;
TMBBCTR.Extra = A_EMPTY(UMBBCTR,3);
(void)(BMBBCTR_assignment((&SLBBCTR_enquiry), TMBBCTR));
 /* line 503: */
 /* line 505: */
RLBBCTR_enquirytype = ILJACTR_enquiryresult;
} 
} 
 /* line 507: */
VMBBCTR.Value = (&SLBBCTR_enquiry);
VMBBCTR.End = (A68_55 *)A68_NIL;
VMBBCTR.Type = RLBBCTR_enquirytype;
(void)(A_CALLPROC(NL(BJBBCTR_enquiryclause),(VMBBCTR),(VMBBCTR,(NL(BJBBCTR_enquiryclause)).nonlocals)));
 /* line 509: */
 /* line 510: */
 /* line 511: */
WMBBCTR.Value = Answer.Value;
 /* line 513: */
WMBBCTR.End = ULBBCTR_endofchoiceclause;
WMBBCTR.Type = Answer.Type;
XMBBCTR_seriesanswer = WMBBCTR;
 /* line 514: */
 /* line 516: */
for ( ;; )
{ 
 /* line 517: */
ZMBBCTR = (*A_NILCHECK(NL(XEBBCTR_currentimperative))) ;
switch ( ZMBBCTR.mode )
{ 
case 20: /* STRUCT(INT,INT,BITS,INT)  */
ANBBCTR_s = (ZMBBCTR.data.mode20);
 /* line 518: */
{ 
 /* line 519: */
 /* line 521: */
switch ( ANBBCTR_s.Fn )
{ 
case 1: 
 /* line 522: */
{ 
(void)(VLBBCTR_elsepart = (ANBBCTR_s.Param==2));
 /* line 523: */
 /* line 524: */
 /* line 527: */
(void)(LMZACTR_then((&SLBBCTR_enquiry)));
} 
break;
case 2: 
 /* line 528: */
{ 
(void)(WLBBCTR_outpart = (ANBBCTR_s.Param<0));
 /* line 529: */
 /* line 530: */
 /* line 533: */
(void)(AOZACTR_casein((&SLBBCTR_enquiry)));
} 
break;
case 3: 
 /* line 534: */
{ 
(void)(WLBBCTR_outpart = (ANBBCTR_s.Param<0));
 /* line 535: */
(void)(A_CALLPROC(ZKBBCTR_readuchoiceimperative,(),((ZKBBCTR_readuchoiceimperative).nonlocals)));
 /* line 536: */
A_CALLPROC(YVMACTR_constituents,((*A_NILCHECK((&(A_NILCHECK((&SLBBCTR_enquiry))->Mode)))), &BNBBCTR),((*A_NILCHECK((&(A_NILCHECK((&SLBBCTR_enquiry))->Mode)))), &BNBBCTR,(YVMACTR_constituents).nonlocals));
CNBBCTR_cons = BNBBCTR;
 /* line 537: */
 /* line 538: */
A_CLOSURE( ENBBCTR_generator, FNBBCTR_generator, GNBBCTR_generator );
(( GNBBCTR_generator * ) ( ENBBCTR_generator.nonlocals )) -> CNBBCTR_cons = CNBBCTR_cons;
A_CALLPROC(ENBBCTR_generator,(A68_TRUE, &JNBBCTR),(A68_TRUE, &JNBBCTR,(ENBBCTR_generator).nonlocals));
TLBBCTR_case = JNBBCTR;
 /* line 539: */
 /* line 540: */
LNBBCTR = TLBBCTR_case.dim[0].upb - TLBBCTR_case.dim[0].lwb;
KNBBCTR_c = TLBBCTR_case.data;
for (;LNBBCTR-- >= 0;
(KNBBCTR_c += TLBBCTR_case.dim[0].stride
) )
{
(*A_NILCHECK(KNBBCTR_c)) = A68_FALSE;
}
 /* line 541: */
 /* line 542: */
 /* line 543: */
 /* line 545: */
(void)(FPZACTR_inu(YKBBCTR_uchoice, (&SLBBCTR_enquiry), TLBBCTR_case));
 /* line 546: */
 /* line 547: */
 /* line 548: */
MNBBCTR = (*A_NILCHECK((&(A_NILCHECK((&YKBBCTR_uchoice))->Props)))) ;
if (A_LB_GE(MNBBCTR,WCAACTR_decbit))
{ 
 /* line 549: */
 /* line 551: */
 /* line 552: */
 /* line 553: */
 /* line 556: */
A_CALLPROC(HLBBCTR_iddecimperative,( &NNBBCTR),( &NNBBCTR,(HLBBCTR_iddecimperative).nonlocals));
(void)(MYVACTR_ccdec(NNBBCTR, (&SLBBCTR_enquiry), (*A_NILCHECK((&(A_NILCHECK((&YKBBCTR_uchoice))->Param))))));
} 
} 
break;
case 4: 
 /* line 558: */
(void)(HQZACTR_comma(ANBBCTR_s.Param));
break;
case 5: 
 /* line 559: */
{ 
(void)(A_CALLPROC(ZKBBCTR_readuchoiceimperative,(),((ZKBBCTR_readuchoiceimperative).nonlocals)));
 /* line 560: */
 /* line 561: */
 /* line 562: */
 /* line 564: */
(void)(DRZACTR_commau(YKBBCTR_uchoice, SLBBCTR_enquiry, TLBBCTR_case));
 /* line 565: */
 /* line 566: */
 /* line 567: */
ONBBCTR = (*A_NILCHECK((&(A_NILCHECK((&YKBBCTR_uchoice))->Props)))) ;
if (A_LB_GE(ONBBCTR,WCAACTR_decbit))
{ 
 /* line 568: */
 /* line 570: */
 /* line 571: */
 /* line 572: */
 /* line 575: */
A_CALLPROC(HLBBCTR_iddecimperative,( &PNBBCTR),( &PNBBCTR,(HLBBCTR_iddecimperative).nonlocals));
(void)(MYVACTR_ccdec(PNBBCTR, (&SLBBCTR_enquiry), (*A_NILCHECK((&(A_NILCHECK((&YKBBCTR_uchoice))->Param))))));
} 
} 
break;
case 6: 
 /* line 577: */
(void)(SXIACTR_terminalerror(665));
break;
case 7: 
 /* line 579: */
(void)(MRZACTR_out());
break;
case 8: 
 /* line 583: */
(void)(A_CALLPROC(ASZACTR_outu,(),((ASZACTR_outu).nonlocals)));
break;
case 9: 
 /* line 584: */
(void)(HNZACTR_else());
break;
default: 
 /* line 585: */
(void)(SXIACTR_terminalerror(665));
break;
} 
 /* line 587: */
 /* line 588: */
 /* line 589: */
RNBBCTR = ANBBCTR_s.Props ;
QNBBCTR.Block = A_LB_GE(RNBBCTR,WCAACTR_decbit);
 /* line 590: */
SNBBCTR = ANBBCTR_s.Mode ;
QNBBCTR.Dynamicresult = OTMACTR_dynamic(A_ABS(SNBBCTR));
 /* line 591: */
QNBBCTR.Discardeddynamicresult = ((A68_BITS )(ANBBCTR_s.Props&MDAACTR_dybits)!=0X0U);
 /* line 592: */
QNBBCTR.Type = (ANBBCTR_s.Fn+LBAACTR_separatoroffset);
YMBBCTR_seriesproperties = QNBBCTR;
 /* line 593: */
 /* line 594: */
 /* line 596: */
TNBBCTR = A68_TRUE;
} 
break;
case 22: /* STRUCT(INT,BITS)  */
UNBBCTR_t = (ZMBBCTR.data.mode22);
 /* line 597: */
{ 
 /* line 598: */
 /* line 599: */
if (UNBBCTR_t.Fn==CCAACTR_esacufn)
{ 
 /* line 600: */
(void)(A_CALLPROC(ATZACTR_esacu,(WLBBCTR_outpart, Answer),(WLBBCTR_outpart, Answer,(ATZACTR_esacu).nonlocals)));
} 
else
{ 
 /* line 601: */
 /* line 602: */
if (UNBBCTR_t.Fn==BCAACTR_esacfn)
{ 
 /* line 603: */
 /* line 604: */
(void)(ESZACTR_esac(WLBBCTR_outpart, Answer));
} 
else
{ 
 /* line 605: */
(void)(ETZACTR_fi(VLBBCTR_elsepart, Answer));
} 
} 
 /* line 607: */
 /* line 608: */
 /* line 609: */
 /* line 610: */
TNBBCTR = A68_FALSE;
} 
break;
default: 
(void)(SXIACTR_terminalerror(657));
 /* line 611: */
 /* line 612: */
 /* line 613: */
TNBBCTR = A68_FALSE;
break;
} 
 /* line 614: */
VNBBCTR = TNBBCTR;
if ( !VNBBCTR ) break;
 /* line 615: */
(void)(A_CALLPROC(NL(HIBBCTR_serialclause),(YMBBCTR_seriesproperties, XMBBCTR_seriesanswer),(YMBBCTR_seriesproperties, XMBBCTR_seriesanswer,(NL(HIBBCTR_serialclause)).nonlocals)));
}
 /* line 616: */
} 
A_PROC_EXIT(choiceclause);
return;
} 
#undef NL

A_STATIC A68_VOID  ZNBBCTR_collateralclause(A68_189  Starter, A68_63  Answer, void *NonLocals)
#define NL(x) (((AOBBCTR_collateralclause *)NonLocals)->x)
{ 
A68_INT  VOBBCTR;  /* ADICOPS - ABS INT */
A68_INT  WOBBCTR_resultmode A_UNUSED = {0};
A68_INT  XOBBCTR_resulttype A_UNUSED = {0};
A68_BOOL  YOBBCTR_structure A_UNUSED = {0};
A68_BOOL  ZOBBCTR_istruct A_UNUSED = {0};
A68_BOOL  APBBCTR_void A_UNUSED = {0};
A68_209  DPBBCTR_fields A_UNUSED = {0};
A68_209  EPBBCTR;  /* avoid structure result */
A68_64 * FPBBCTR_collateralvalue A_UNUSED = {0};
A68_VC  HPBBCTR;  /* clause result */
A68_65  JPBBCTR;  /* united object - for case conformity */
A68_68  MPBBCTR;  /* avoid structure result */
A68_65  NPBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  OPBBCTR;  /* avoid structure result */
A68_VC  PPBBCTR_collateraltemp A_UNUSED = {0};
A68_64  QPBBCTR;  /* collateral clause result */
A68_INT  RPBBCTR;  /* ADICOPS - ABS INT */
A68_290  SPBBCTR;  /* clause result */
A68_INT  TPBBCTR;  /* YIELD */
A68_290  UPBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_201 * VPBBCTR;  /* YIELD */
A68_290  WPBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  XPBBCTR;  /* YIELD */
A68_290  YPBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ZPBBCTR;  /* avoid structure result */
A68_65  AQBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_64  BQBBCTR_phrasevalue A_UNUSED = {0};
A68_55  CQBBCTR_endofphrase A_UNUSED = {0};
A68_63  DQBBCTR;  /* collateral clause result */
A68_63  EQBBCTR_phraseanswer A_UNUSED = {0};
A68_INT  FQBBCTR_i A_UNUSED = {0};
A68_181  GQBBCTR;  /* united object - for case conformity */
A68_188  HQBBCTR_s A_UNUSED = {0};
A68_64  KQBBCTR;  /* collateral clause result */
A68_INT  LQBBCTR;  /* ADICOPS - ABS INT */
A68_290  MQBBCTR;  /* clause result */
A68_INT  NQBBCTR;  /* YIELD */
A68_290  OQBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_201 * PQBBCTR;  /* YIELD */
A68_290  QQBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  RQBBCTR;  /* YIELD */
A68_290  SQBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  TQBBCTR;  /* avoid structure result */
A68_65  UQBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_BOOL  VQBBCTR;  /* clause result */
A68_190  WQBBCTR_t A_UNUSED = {0};
A68_BOOL  ZQBBCTR;  /* clause result */
A_PROC_ENTRY(collateralclause);
 /* line 623: */
 /* line 624: */
{ 
 /* line 625: */
 /* line 626: */
 /* line 645: */
VOBBCTR = Starter.Resultmode ;
WOBBCTR_resultmode = A_ABS(VOBBCTR);
 /* line 646: */
XOBBCTR_resulttype = IOMACTR_modetype(WOBBCTR_resultmode);
 /* line 647: */
YOBBCTR_structure = (XOBBCTR_resulttype==IEAACTR_struct);
 /* line 648: */
ZOBBCTR_istruct = (XOBBCTR_resulttype==JEAACTR_istruct);
 /* line 649: */
APBBCTR_void = (WOBBCTR_resultmode==UEAACTR_voidmode);
 /* line 651: */
 /* line 652: */
 /* line 653: */
(void)(WXIACTR_assert(CPBBCTR, ((YOBBCTR_structure|ZOBBCTR_istruct)|APBBCTR_void)));
 /* line 655: */
 /* line 656: */
 /* line 657: */
if (YOBBCTR_structure)
{ 
 /* line 658: */
EVMACTR_structfields( WOBBCTR_resultmode, &EPBBCTR );
DPBBCTR_fields = EPBBCTR;
} 
 /* line 660: */
FPBBCTR_collateralvalue = Answer.Value;
 /* line 667: */
 /* line 668: */
 /* line 669: */
 /* line 670: */
if ((*A_NILCHECK((&(A_NILCHECK(FPBBCTR_collateralvalue)->Mode))))==UEAACTR_voidmode)
{ 
HPBBCTR = IPBBCTR;
} 
else
{ 
 /* line 671: */
JPBBCTR = (*A_NILCHECK((&(A_NILCHECK(FPBBCTR_collateralvalue)->Extra)))) ;
switch ( JPBBCTR.mode )
{ 
case 3: /* VOID */
 /* line 673: */
 /* line 675: */
 /* line 676: */
 /* line 677: */
QMOACTR_declarectemporary( (*A_NILCHECK((&(A_NILCHECK(FPBBCTR_collateralvalue)->Mode)))), LPBBCTR, &MPBBCTR );
(void)(GMBBCTR_assignment((&(A_NILCHECK(FPBBCTR_collateralvalue)->Extra)), A_UNITE(NPBBCTR,mode5,5,MPBBCTR)));
break;
default: 
/*SKIP*/;
break;
} 
 /* line 678: */
 /* line 679: */
DAQACTR_getcfragment( FPBBCTR_collateralvalue, &OPBBCTR );
HPBBCTR = OPBBCTR;
} 
PPBBCTR_collateraltemp = HPBBCTR;
 /* line 682: */
 /* line 683: */
 /* line 684: */
RPBBCTR = Starter.Mode ;
QPBBCTR.Mode = A_ABS(RPBBCTR);
 /* line 686: */
QPBBCTR.Info = PKJACTR_defaultinfo;
 /* line 687: */
if (YOBBCTR_structure)
{ 
 /* line 688: */
TPBBCTR = 1 ;
VPBBCTR = (&A_VINDEX(DPBBCTR_fields,TPBBCTR)) ;
SPBBCTR = A_UNITE(UPBBCTR,mode1,1,VPBBCTR);
} 
else
{ 
 /* line 689: */
if (ZOBBCTR_istruct)
{ 
 /* line 690: */
XPBBCTR = 1 ;
SPBBCTR = A_UNITE(WPBBCTR,mode2,2,XPBBCTR);
} 
else
{ 
 /* line 691: */
SPBBCTR = A_EMPTY(YPBBCTR,3);
} 
} 
 /* line 692: */
EOBBCTR_collateralunitassignee( PPBBCTR_collateraltemp, SPBBCTR, &ZPBBCTR );
QPBBCTR.Extra = A_UNITE(AQBBCTR,mode6,6,ZPBBCTR);
BQBBCTR_phrasevalue = QPBBCTR;
 /* line 694: */
CQBBCTR_endofphrase = HIAACTR_unsetlabel;
 /* line 696: */
 /* line 697: */
DQBBCTR.Value = (&BQBBCTR_phrasevalue);
DQBBCTR.End = (&CQBBCTR_endofphrase);
DQBBCTR.Type = Answer.Type;
EQBBCTR_phraseanswer = DQBBCTR;
 /* line 699: */
 /* line 700: */
for ( FQBBCTR_i = 1;;
FQBBCTR_i += 1 ) 
{ 
(void)(A_CALLPROC(NL(PJBBCTR_phrase),(A68_FALSE, EQBBCTR_phraseanswer, A68_FALSE),(A68_FALSE, EQBBCTR_phraseanswer, A68_FALSE,(NL(PJBBCTR_phrase)).nonlocals)));
 /* line 701: */
 /* line 702: */
GQBBCTR = (*A_NILCHECK(NL(XEBBCTR_currentimperative))) ;
switch ( GQBBCTR.mode )
{ 
case 20: /* STRUCT(INT,INT,BITS,INT)  */
HQBBCTR_s = (GQBBCTR.data.mode20);
 /* line 703: */
 /* line 704: */
{ 
(void)(WXIACTR_assert(JQBBCTR, (HQBBCTR_s.Fn==VBAACTR_collcommafn)));
 /* line 706: */
 /* line 707: */
 /* line 708: */
LQBBCTR = HQBBCTR_s.Mode ;
KQBBCTR.Mode = A_ABS(LQBBCTR);
 /* line 710: */
KQBBCTR.Info = PKJACTR_defaultinfo;
 /* line 711: */
if (YOBBCTR_structure)
{ 
 /* line 712: */
NQBBCTR = HQBBCTR_s.Param ;
PQBBCTR = (&A_VINDEX(DPBBCTR_fields,NQBBCTR)) ;
MQBBCTR = A_UNITE(OQBBCTR,mode1,1,PQBBCTR);
} 
else
{ 
 /* line 713: */
if (ZOBBCTR_istruct)
{ 
 /* line 714: */
RQBBCTR = HQBBCTR_s.Param ;
MQBBCTR = A_UNITE(QQBBCTR,mode2,2,RQBBCTR);
} 
else
{ 
 /* line 715: */
MQBBCTR = A_EMPTY(SQBBCTR,3);
} 
} 
 /* line 716: */
EOBBCTR_collateralunitassignee( PPBBCTR_collateraltemp, MQBBCTR, &TQBBCTR );
KQBBCTR.Extra = A_UNITE(UQBBCTR,mode6,6,TQBBCTR);
(void)(BMBBCTR_assignment((&BQBBCTR_phrasevalue), KQBBCTR));
 /* line 717: */
 /* line 718: */
 /* line 720: */
VQBBCTR = A68_TRUE;
} 
break;
case 22: /* STRUCT(INT,BITS)  */
WQBBCTR_t = (GQBBCTR.data.mode22);
 /* line 721: */
 /* line 722: */
{ 
(void)(WXIACTR_assert(YQBBCTR, (WQBBCTR_t.Fn==ECAACTR_endcollfn)));
 /* line 723: */
 /* line 724: */
 /* line 725: */
 /* line 726: */
VQBBCTR = A68_FALSE;
} 
break;
default: 
(void)(SXIACTR_terminalerror(658));
 /* line 727: */
 /* line 728: */
 /* line 729: */
VQBBCTR = A68_FALSE;
break;
} 
 /* line 731: */
ZQBBCTR = VQBBCTR;
if ( !ZQBBCTR ) break;
/*SKIP*/;
}
 /* line 732: */
} 
A_PROC_EXIT(collateralclause);
return;
} 
#undef NL
 /* line 737: */

A_STATIC A68_VOID  DRBBCTR_loopbody(A68_BOOL  Body, A68_63  Answer, void *NonLocals)
#define NL(x) (((ERBBCTR_loopbody *)NonLocals)->x)
{ 
A68_55  FRBBCTR_endofseries A_UNUSED = {0};
A68_181  GRBBCTR;  /* united object - for case conformity */
A68_188  HRBBCTR_whileordo A_UNUSED = {0};
A68_59  IRBBCTR;  /* collateral clause result */
A68_BITS  JRBBCTR;  /* ADICOPS - >= */
A68_59  KRBBCTR_loopproperties A_UNUSED = {0};
A68_64  LRBBCTR;  /* collateral clause result */
A68_65  MRBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_64  NRBBCTR_enquiry A_UNUSED = {0};
A68_63  ORBBCTR;  /* collateral clause result */
A68_181  PRBBCTR;  /* united object - for case conformity */
A68_188  QRBBCTR_s A_UNUSED = {0};
A68_59  TRBBCTR;  /* collateral clause result */
A68_BITS  URBBCTR;  /* ADICOPS - >= */
A68_59  VRBBCTR_seriesproperties A_UNUSED = {0};
A68_63  WRBBCTR;  /* collateral clause result */
A68_63  XRBBCTR;  /* collateral clause result */
A_PROC_ENTRY(loopbody);
 /* line 742: */
 /* line 743: */
{ 
FRBBCTR_endofseries = HIAACTR_unsetlabel;
 /* line 744: */
(void)(A_CALLPROC(NL(BFBBCTR_read),(),((NL(BFBBCTR_read)).nonlocals)));
 /* line 745: */
 /* line 746: */
GRBBCTR = (*A_NILCHECK(NL(XEBBCTR_currentimperative))) ;
switch ( GRBBCTR.mode )
{ 
case 20: /* STRUCT(INT,INT,BITS,INT)  */
HRBBCTR_whileordo = (GRBBCTR.data.mode20);
 /* line 747: */
 /* line 748: */
{ 
 /* line 749: */
JRBBCTR = HRBBCTR_whileordo.Props ;
IRBBCTR.Block = (A_LB_GE(JRBBCTR,WCAACTR_decbit)&(!Body));
 /* line 750: */
IRBBCTR.Dynamicresult = A68_FALSE;
 /* line 751: */
IRBBCTR.Discardeddynamicresult = ((A68_BITS )(HRBBCTR_whileordo.Props&MDAACTR_dybits)!=0X0U);
 /* line 752: */
IRBBCTR.Type = (HRBBCTR_whileordo.Fn+LBAACTR_separatoroffset);
KRBBCTR_loopproperties = IRBBCTR;
 /* line 754: */
 /* line 755: */
 /* line 756: */
if (HRBBCTR_whileordo.Fn==YBAACTR_whilefn)
{ 
LRBBCTR.Mode = WEAACTR_boolmode;
LRBBCTR.Info = PKJACTR_defaultinfo;
LRBBCTR.Extra = A_EMPTY(MRBBCTR,3);
NRBBCTR_enquiry = LRBBCTR;
 /* line 757: */
(void)(KDBBCTR_while());
 /* line 758: */
 /* line 759: */
ORBBCTR.Value = (&NRBBCTR_enquiry);
ORBBCTR.End = (A68_55 *)A68_NIL;
ORBBCTR.Type = ILJACTR_enquiryresult;
(void)(A_CALLPROC(NL(BJBBCTR_enquiryclause),(ORBBCTR),(ORBBCTR,(NL(BJBBCTR_enquiryclause)).nonlocals)));
 /* line 760: */
(void)(MDBBCTR_whiledo((&NRBBCTR_enquiry)));
 /* line 762: */
 /* line 763: */
PRBBCTR = (*A_NILCHECK(NL(XEBBCTR_currentimperative))) ;
switch ( PRBBCTR.mode )
{ 
case 20: /* STRUCT(INT,INT,BITS,INT)  */
QRBBCTR_s = (PRBBCTR.data.mode20);
 /* line 764: */
 /* line 765: */
{ 
(void)(WXIACTR_assert(SRBBCTR, (QRBBCTR_s.Fn==XBAACTR_dofn)));
 /* line 766: */
 /* line 767: */
 /* line 768: */
 /* line 769: */
URBBCTR = QRBBCTR_s.Props ;
TRBBCTR.Block = (A_LB_GE(URBBCTR,WCAACTR_decbit)&(!KRBBCTR_loopproperties.Block));
 /* line 770: */
TRBBCTR.Dynamicresult = A68_FALSE;
 /* line 771: */
TRBBCTR.Discardeddynamicresult = ((A68_BITS )(QRBBCTR_s.Props&MDAACTR_dybits)!=0X0U);
 /* line 772: */
TRBBCTR.Type = (QRBBCTR_s.Fn+LBAACTR_separatoroffset);
VRBBCTR_seriesproperties = TRBBCTR;
 /* line 773: */
 /* line 774: */
 /* line 775: */
WRBBCTR.Value = Answer.Value;
WRBBCTR.End = (&FRBBCTR_endofseries);
 /* line 776: */
WRBBCTR.Type = ELJACTR_voidresult;
 /* line 777: */
 /* line 778: */
 /* line 779: */
(void)(A_CALLPROC(NL(HIBBCTR_serialclause),(VRBBCTR_seriesproperties, WRBBCTR),(VRBBCTR_seriesproperties, WRBBCTR,(NL(HIBBCTR_serialclause)).nonlocals)));
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
(void)(FEBBCTR_whileod());
} 
else
{ 
 /* line 787: */
XRBBCTR.Value = Answer.Value;
XRBBCTR.End = (&FRBBCTR_endofseries);
 /* line 788: */
XRBBCTR.Type = ELJACTR_voidresult;
(void)(A_CALLPROC(NL(HIBBCTR_serialclause),(KRBBCTR_loopproperties, XRBBCTR),(KRBBCTR_loopproperties, XRBBCTR,(NL(HIBBCTR_serialclause)).nonlocals)));
 /* line 789: */
 /* line 790: */
 /* line 791: */
 /* line 792: */
 /* line 793: */
(void)(A_CALLPROC(MEBBCTR_od,(),((MEBBCTR_od).nonlocals)));
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

A_STATIC A68_VOID  DSBBCTR_loopclause(A68_189  Starter, A68_BOOL  Body, A68_63  Answer, A68_71 ** Frobytlist, void *NonLocals)
#define NL(x) (((ESBBCTR_loopclause *)NonLocals)->x)
{ 
A68_55  FSBBCTR_startofloop A_UNUSED = {0};
A68_55 * GSBBCTR_endofloop A_UNUSED = {0};
A68_64  HSBBCTR_control A_UNUSED = {0};
A68_64  ISBBCTR_step A_UNUSED = {0};
A68_195  JSBBCTR;  /* collateral clause result */
A68_BITS  KSBBCTR;  /* ADICOPS - >= */
A68_BITS  LSBBCTR;  /* ADICOPS - >= */
A68_BITS  MSBBCTR;  /* ADICOPS - >= */
A68_BITS  NSBBCTR;  /* ADICOPS - >= */
A68_195  OSBBCTR_loop A_UNUSED = {0};
A68_181  PSBBCTR;  /* united object - for case conformity */
A68_157  QSBBCTR_id A_UNUSED = {0};
A68_64  RSBBCTR;  /* collateral clause result */
A68_INT  SSBBCTR;  /* YIELD */
A68_67  TSBBCTR_iden A_UNUSED = {0};
A68_INT * USBBCTR;  /* YIELD */
A68_65  VSBBCTR = {0};  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(loopclause);
 /* line 806: */
 /* line 807: */
{ 
FSBBCTR_startofloop = HIAACTR_unsetlabel;
 /* line 808: */
GSBBCTR_endofloop = Answer.End;
 /* line 809: */
HSBBCTR_control = DLJACTR_skipvalue;
 /* line 810: */
ISBBCTR_step = DLJACTR_skipvalue;
 /* line 812: */
 /* line 813: */
JSBBCTR.Control = (&HSBBCTR_control);
 /* line 814: */
JSBBCTR.Step = (&ISBBCTR_step);
 /* line 815: */
KSBBCTR = Starter.Props ;
JSBBCTR.Forpart = A_LB_GE(KSBBCTR,IDAACTR_forpartbit);
 /* line 816: */
LSBBCTR = Starter.Props ;
JSBBCTR.Frompart = A_LB_GE(LSBBCTR,JDAACTR_frompartbit);
 /* line 817: */
MSBBCTR = Starter.Props ;
JSBBCTR.Bypart = A_LB_GE(MSBBCTR,KDAACTR_bypartbit);
 /* line 818: */
NSBBCTR = Starter.Props ;
JSBBCTR.Topart = A_LB_GE(NSBBCTR,LDAACTR_topartbit);
OSBBCTR_loop = JSBBCTR;
 /* line 820: */
 /* line 821: */
if (*A_NILCHECK((&(A_NILCHECK((&OSBBCTR_loop))->Forpart))))
{ 
(void)(A_CALLPROC(NL(BFBBCTR_read),(),((NL(BFBBCTR_read)).nonlocals)));
 /* line 822: */
 /* line 823: */
PSBBCTR = (*A_NILCHECK(NL(XEBBCTR_currentimperative))) ;
switch ( PSBBCTR.mode )
{ 
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
QSBBCTR_id = (PSBBCTR.data.mode11);
 /* line 824: */
{ 
(void)(VWVACTR_iddec(QSBBCTR_id, (A68_71 **)A68_NIL));
 /* line 825: */
 /* line 826: */
 /* line 827: */
SSBBCTR = QSBBCTR_id.Decno ;
RSBBCTR.Mode = (*A_NILCHECK((&(A_NILCHECK((&A_R1INDEX(WPKACTR_ids,SSBBCTR)))->Mode))));
 /* line 828: */
RSBBCTR.Info = PKJACTR_defaultinfo;
{ 
 /* line 829: */
USBBCTR = (&(A_NILCHECK((&TSBBCTR_iden))->Idno)) ;
(*A_NILCHECK(USBBCTR)) = QSBBCTR_id.Decno;
 /* line 830: */
 /* line 831: */
 /* line 832: */
RSBBCTR.Extra = A_UNITE(VSBBCTR,mode4,4,TSBBCTR_iden);
} 
 /* line 833: */
 /* line 834: */
(void)(BMBBCTR_assignment((&HSBBCTR_control), RSBBCTR));
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
(void)(CJABCTR_for((&OSBBCTR_loop), Starter.Resultmode, Frobytlist));
 /* line 839: */
 /* line 840: */
(void)(A_CALLPROC(NL(CRBBCTR_loopbody),(Body, Answer),(Body, Answer,(NL(CRBBCTR_loopbody)).nonlocals)));
} 
A_PROC_EXIT(loopclause);
return;
} 
#undef NL
 /* line 844: */
 /* line 845: */
 /* line 847: */

A_STATIC A68_VOID  BTBBCTR_forallclause(A68_189  Starter, A68_BOOL  Body, A68_63  Answer, A68_71 ** Foralllist, void *NonLocals)
#define NL(x) (((CTBBCTR_forallclause *)NonLocals)->x)
{ 
A68_55  DTBBCTR_startofloop A_UNUSED = {0};
A68_55 * ETBBCTR_endofloop A_UNUSED = {0};
A68_INT  FTBBCTR_controlcount A_UNUSED = {0};
A68_299  HTBBCTR_generator;   /* proc value of non-global proc */
A68_199  NTBBCTR;  /* avoid structure result */
A68_199  MTBBCTR_controls A_UNUSED = {0};
A68_71 ** OTBBCTR_thisforalllist A_UNUSED = {0};
A68_196 * PTBBCTR_control A_UNUSED = {0};
A68_INT  QTBBCTR;  /* forall loop counter */
A68_181  RTBBCTR;  /* united object - for case conformity */
A68_157  STBBCTR_id A_UNUSED = {0};
A68_64  TTBBCTR;  /* collateral clause result */
A68_INT  UTBBCTR;  /* YIELD */
A68_67  VTBBCTR_iden A_UNUSED = {0};
A68_INT * WTBBCTR;  /* YIELD */
A68_65  XTBBCTR = {0};  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(forallclause);
 /* line 851: */
 /* line 852: */
{ 
DTBBCTR_startofloop = HIAACTR_unsetlabel;
 /* line 853: */
ETBBCTR_endofloop = Answer.End;
 /* line 854: */
FTBBCTR_controlcount = Starter.Resultmode;
 /* line 855: */
A_CLOSURE( HTBBCTR_generator, ITBBCTR_generator, JTBBCTR_generator );
(( JTBBCTR_generator * ) ( HTBBCTR_generator.nonlocals )) -> FTBBCTR_controlcount = FTBBCTR_controlcount;
A_CALLPROC(HTBBCTR_generator,(A68_TRUE, &NTBBCTR),(A68_TRUE, &NTBBCTR,(HTBBCTR_generator).nonlocals));
MTBBCTR_controls = NTBBCTR;
 /* line 857: */
OTBBCTR_thisforalllist = Foralllist;
 /* line 859: */
 /* line 860: */
QTBBCTR = MTBBCTR_controls.upb -1;
PTBBCTR_control = MTBBCTR_controls.data;
for (;QTBBCTR-- >= 0;
(PTBBCTR_control++
) )
{
 /* line 861: */
(void)(A_CALLPROC(NL(BFBBCTR_read),(),((NL(BFBBCTR_read)).nonlocals)));
 /* line 862: */
 /* line 863: */
RTBBCTR = (*A_NILCHECK(NL(XEBBCTR_currentimperative))) ;
switch ( RTBBCTR.mode )
{ 
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
STBBCTR_id = (RTBBCTR.data.mode11);
 /* line 864: */
 /* line 871: */
{ 
(void)(VWVACTR_iddec(STBBCTR_id, OTBBCTR_thisforalllist));
 /* line 872: */
(void)(OTBBCTR_thisforalllist = (&(A_NILCHECK((*A_NILCHECK(OTBBCTR_thisforalllist)))->Rest)));
 /* line 874: */
 /* line 875: */
 /* line 876: */
UTBBCTR = STBBCTR_id.Decno ;
TTBBCTR.Mode = (*A_NILCHECK((&(A_NILCHECK((&A_R1INDEX(WPKACTR_ids,UTBBCTR)))->Mode))));
 /* line 877: */
TTBBCTR.Info = PKJACTR_defaultinfo;
{ 
 /* line 878: */
WTBBCTR = (&(A_NILCHECK((&VTBBCTR_iden))->Idno)) ;
(*A_NILCHECK(WTBBCTR)) = STBBCTR_id.Decno;
 /* line 879: */
 /* line 880: */
 /* line 881: */
TTBBCTR.Extra = A_UNITE(XTBBCTR,mode4,4,VTBBCTR_iden);
} 
 /* line 882: */
 /* line 883: */
(void)(BMBBCTR_assignment((&(A_NILCHECK(PTBBCTR_control)->Ident)), TTBBCTR));
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
(void)(QSABCTR_forall(MTBBCTR_controls, Foralllist));
 /* line 888: */
 /* line 889: */
(void)(A_CALLPROC(NL(CRBBCTR_loopbody),(Body, Answer),(Body, Answer,(NL(CRBBCTR_loopbody)).nonlocals)));
} 
A_PROC_EXIT(forallclause);
return;
} 
#undef NL

A_STATIC A68_71 * GUBBCTR_assignment(A68_71 * EUBBCTR_anonymous, A68_71  FUBBCTR_anonymous)
{ 
A68_71 ** HUBBCTR;  /* YIELD */
A68_71 * IUBBCTR;  /* clause result */
{ 
(void)(BMBBCTR_assignment((&(A_NILCHECK(EUBBCTR_anonymous)->Value)), FUBBCTR_anonymous.Value));
HUBBCTR = (&(A_NILCHECK(EUBBCTR_anonymous)->Rest)) ;
(*A_NILCHECK(HUBBCTR)) = FUBBCTR_anonymous.Rest;
IUBBCTR = EUBBCTR_anonymous;
} 
return( IUBBCTR );
} 
#undef NL

A_STATIC A68_VOID  CHBBCTR_generator(A68_BOOL  AHBBCTR_anonymous, A68_124  *ReturnedValue, void *NonLocals)
#define NL(x) (((DHBBCTR_generator *)NonLocals)->x)
{ 
A68_124  EHBBCTR;  /* clause result */
A68_124  FHBBCTR;  /* OPERATORS - dynamic generator */
{ 
FHBBCTR.upb = 0 ;
( AHBBCTR_anonymous? A_VLOC(A68_INT ,FHBBCTR): A_VHEAP(A68_INT ,FHBBCTR) );
EHBBCTR = FHBBCTR;
} 
*ReturnedValue = (EHBBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  NHBBCTR_generator(A68_BOOL  LHBBCTR_anonymous, A68_124  *ReturnedValue, void *NonLocals)
#define NL(x) (((OHBBCTR_generator *)NonLocals)->x)
{ 
A68_124  PHBBCTR;  /* clause result */
A68_124  QHBBCTR;  /* OPERATORS - dynamic generator */
{ 
QHBBCTR.upb = NL(ZGBBCTR_paramcount) ;
( LHBBCTR_anonymous? A_VLOC(A68_INT ,QHBBCTR): A_VHEAP(A68_INT ,QHBBCTR) );
PHBBCTR = QHBBCTR;
} 
*ReturnedValue = (PHBBCTR);
return;
} 
#undef NL
 /* line 369: */
 /* line 370: */
 /* line 372: */

A_STATIC A68_VOID  YJBBCTR_enclosedclause(A68_189  Starter, A68_BOOL  Body, A68_63  Answer, A68_71 * Newvalue, void *NonLocals)
#define NL(x) (((ZJBBCTR_enclosedclause *)NonLocals)->x)
{ 
A68_282  EKBBCTR_closedclause;   /* proc value of non-global proc */
A68_282  VKBBCTR_choiceclause;   /* proc value of non-global proc */
A68_289  YNBBCTR_collateralclause;   /* proc value of non-global proc */
A68_76  CRBBCTR_loopbody;   /* proc value of non-global proc */
A68_298  CSBBCTR_loopclause;   /* proc value of non-global proc */
A68_298  ATBBCTR_forallclause;   /* proc value of non-global proc */
A68_55  YTBBCTR_endofclause A_UNUSED = {0};
A68_INT  ZTBBCTR;  /* ADICOPS - ABS INT */
A68_INT  AUBBCTR_resultmode A_UNUSED = {0};
A68_INT  BUBBCTR_type A_UNUSED = {0};
A68_71  CUBBCTR;  /* collateral clause result */
A68_65  DUBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_63  JUBBCTR;  /* collateral clause result */
A68_63  MUBBCTR;  /* collateral clause result */
A68_BITS  NUBBCTR;  /* ADICOPS - >= */
A68_INT  OUBBCTR;  /* ADICOPS - ABS INT */
A68_INT  PUBBCTR;  /* ADICOPS - ABS INT */
A68_INT  QUBBCTR_resultmode A_UNUSED = {0};
A68_BOOL  RUBBCTR_newanswer A_UNUSED = {0};
A68_71  SUBBCTR;  /* collateral clause result */
A68_65  TUBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_63  UUBBCTR;  /* collateral clause result */
A68_63  VUBBCTR;  /* collateral clause result */
A68_71 * WUBBCTR_valuelist A_UNUSED = {0};
A68_INT  XUBBCTR;  /* to part of loop */
A68_INT  YUBBCTR;  /* loop control */
A68_71  ZUBBCTR;  /* collateral clause result */
A68_65  AVBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_298  BVBBCTR;  /* clause result */
A68_63  CVBBCTR;  /* collateral clause result */
A68_INT  DVBBCTR;  /* ADICOPS - ABS INT */
A68_INT  EVBBCTR_resultmode A_UNUSED = {0};
A68_71  FVBBCTR;  /* collateral clause result */
A68_65  GVBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_63  HVBBCTR;  /* collateral clause result */
A68_63  KVBBCTR;  /* collateral clause result */
A68_INT  LVBBCTR;  /* ADICOPS - ABS INT */
A_PROC_ENTRY(enclosedclause);
 /* line 392: */
 /* line 394: */
{ 
 /* line 395: */
A_CLOSURE( EKBBCTR_closedclause, FKBBCTR_closedclause, GKBBCTR_closedclause );
(( GKBBCTR_closedclause * ) ( EKBBCTR_closedclause.nonlocals )) -> HIBBCTR_serialclause = NL(HIBBCTR_serialclause);
 /* line 429: */
 /* line 430: */
A_CLOSURE( VKBBCTR_choiceclause, WKBBCTR_choiceclause, XKBBCTR_choiceclause );
(( XKBBCTR_choiceclause * ) ( VKBBCTR_choiceclause.nonlocals )) -> BFBBCTR_read = NL(BFBBCTR_read);
(( XKBBCTR_choiceclause * ) ( VKBBCTR_choiceclause.nonlocals )) -> XEBBCTR_currentimperative = NL(XEBBCTR_currentimperative);
(( XKBBCTR_choiceclause * ) ( VKBBCTR_choiceclause.nonlocals )) -> BJBBCTR_enquiryclause = NL(BJBBCTR_enquiryclause);
(( XKBBCTR_choiceclause * ) ( VKBBCTR_choiceclause.nonlocals )) -> HIBBCTR_serialclause = NL(HIBBCTR_serialclause);
 /* line 618: */
A_CLOSURE( YNBBCTR_collateralclause, ZNBBCTR_collateralclause, AOBBCTR_collateralclause );
(( AOBBCTR_collateralclause * ) ( YNBBCTR_collateralclause.nonlocals )) -> PJBBCTR_phrase = NL(PJBBCTR_phrase);
(( AOBBCTR_collateralclause * ) ( YNBBCTR_collateralclause.nonlocals )) -> XEBBCTR_currentimperative = NL(XEBBCTR_currentimperative);
 /* line 734: */
 /* line 735: */
A_CLOSURE( CRBBCTR_loopbody, DRBBCTR_loopbody, ERBBCTR_loopbody );
(( ERBBCTR_loopbody * ) ( CRBBCTR_loopbody.nonlocals )) -> BFBBCTR_read = NL(BFBBCTR_read);
(( ERBBCTR_loopbody * ) ( CRBBCTR_loopbody.nonlocals )) -> XEBBCTR_currentimperative = NL(XEBBCTR_currentimperative);
(( ERBBCTR_loopbody * ) ( CRBBCTR_loopbody.nonlocals )) -> BJBBCTR_enquiryclause = NL(BJBBCTR_enquiryclause);
(( ERBBCTR_loopbody * ) ( CRBBCTR_loopbody.nonlocals )) -> HIBBCTR_serialclause = NL(HIBBCTR_serialclause);
 /* line 797: */
 /* line 798: */
A_CLOSURE( CSBBCTR_loopclause, DSBBCTR_loopclause, ESBBCTR_loopclause );
(( ESBBCTR_loopclause * ) ( CSBBCTR_loopclause.nonlocals )) -> BFBBCTR_read = NL(BFBBCTR_read);
(( ESBBCTR_loopclause * ) ( CSBBCTR_loopclause.nonlocals )) -> XEBBCTR_currentimperative = NL(XEBBCTR_currentimperative);
(( ESBBCTR_loopclause * ) ( CSBBCTR_loopclause.nonlocals )) -> CRBBCTR_loopbody = CRBBCTR_loopbody;
 /* line 842: */
 /* line 843: */
A_CLOSURE( ATBBCTR_forallclause, BTBBCTR_forallclause, CTBBCTR_forallclause );
(( CTBBCTR_forallclause * ) ( ATBBCTR_forallclause.nonlocals )) -> BFBBCTR_read = NL(BFBBCTR_read);
(( CTBBCTR_forallclause * ) ( ATBBCTR_forallclause.nonlocals )) -> XEBBCTR_currentimperative = NL(XEBBCTR_currentimperative);
(( CTBBCTR_forallclause * ) ( ATBBCTR_forallclause.nonlocals )) -> CRBBCTR_loopbody = CRBBCTR_loopbody;
 /* line 893: */
YTBBCTR_endofclause = HIAACTR_unsetlabel;
 /* line 895: */
 /* line 896: */
if (Starter.Fn==HBAACTR_beginfn)
{ 
 /* line 897: */
if ((Starter.Mode>0)&(!Body))
{ 
ZTBBCTR = Starter.Resultmode ;
AUBBCTR_resultmode = A_ABS(ZTBBCTR);
 /* line 898: */
BUBBCTR_type = KLJACTR_noparticularresult;
 /* line 900: */
 /* line 901: */
CUBBCTR.Value.Mode = AUBBCTR_resultmode;
CUBBCTR.Value.Info = PKJACTR_defaultinfo;
CUBBCTR.Value.Extra = A_EMPTY(DUBBCTR,3);
CUBBCTR.Rest = (*A_NILCHECK(NL(SJBBCTR_valuestack)));
(void)((*A_NILCHECK(NL(SJBBCTR_valuestack))) = GUBBCTR_assignment(Newvalue, CUBBCTR));
 /* line 903: */
 /* line 904: */
 /* line 905: */
 /* line 906: */
 /* line 907: */
JUBBCTR.Value = (&(A_NILCHECK((*A_NILCHECK(NL(SJBBCTR_valuestack))))->Value));
 /* line 909: */
JUBBCTR.End = (&YTBBCTR_endofclause);
 /* line 910: */
JUBBCTR.Type = Answer.Type;
 /* line 911: */
 /* line 912: */
(void)(A_CALLPROC(EKBBCTR_closedclause,(Starter, Body, JUBBCTR),(Starter, Body, JUBBCTR,(EKBBCTR_closedclause).nonlocals)));
} 
else
{ 
(void)(WXIACTR_assert(LUBBCTR, (Answer.Type!=JLJACTR_optboolresult)));
 /* line 913: */
 /* line 914: */
 /* line 915: */
 /* line 916: */
 /* line 917: */
MUBBCTR.Value = Answer.Value;
 /* line 918: */
 /* line 919: */
if (Answer.End==(A68_55 *)A68_NIL)
{ 
 /* line 920: */
MUBBCTR.End = (&YTBBCTR_endofclause);
} 
else
{ 
 /* line 921: */
MUBBCTR.End = Answer.End;
} 
 /* line 922: */
 /* line 923: */
NUBBCTR = Starter.Props ;
if (A_LB_GE(NUBBCTR,TCAACTR_exitbit))
{ 
 /* line 924: */
OUBBCTR = Answer.Type ;
MUBBCTR.Type = A_ABS(OUBBCTR);
} 
else
{ 
 /* line 925: */
 /* line 926: */
MUBBCTR.Type = Answer.Type;
} 
 /* line 927: */
 /* line 928: */
(void)(A_CALLPROC(EKBBCTR_closedclause,(Starter, Body, MUBBCTR),(Starter, Body, MUBBCTR,(EKBBCTR_closedclause).nonlocals)));
} 
} 
else
{ 
 /* line 929: */
if (Starter.Fn==IBAACTR_collbeginfn)
{ 
PUBBCTR = Starter.Resultmode ;
QUBBCTR_resultmode = A_ABS(PUBBCTR);
 /* line 930: */
RUBBCTR_newanswer = (Starter.Mode>0);
 /* line 932: */
 /* line 933: */
 /* line 934: */
if (RUBBCTR_newanswer|(Answer.Type==HLJACTR_routineresult))
{ 
 /* line 935: */
 /* line 936: */
SUBBCTR.Value.Mode = QUBBCTR_resultmode;
 /* line 938: */
SUBBCTR.Value.Info = PKJACTR_defaultinfo;
 /* line 940: */
SUBBCTR.Value.Extra = A_EMPTY(TUBBCTR,3);
SUBBCTR.Rest = (*A_NILCHECK(NL(SJBBCTR_valuestack)));
(void)((*A_NILCHECK(NL(SJBBCTR_valuestack))) = GUBBCTR_assignment(Newvalue, SUBBCTR));
 /* line 941: */
 /* line 942: */
 /* line 943: */
 /* line 944: */
UUBBCTR.Value = (&(A_NILCHECK((*A_NILCHECK(NL(SJBBCTR_valuestack))))->Value));
UUBBCTR.End = (A68_55 *)A68_NIL;
 /* line 945: */
UUBBCTR.Type = KLJACTR_noparticularresult;
 /* line 946: */
 /* line 948: */
(void)(A_CALLPROC(YNBBCTR_collateralclause,(Starter, UUBBCTR),(Starter, UUBBCTR,(YNBBCTR_collateralclause).nonlocals)));
} 
else
{ 
 /* line 949: */
 /* line 950: */
VUBBCTR.Value = Answer.Value;
VUBBCTR.End = (A68_55 *)A68_NIL;
 /* line 951: */
VUBBCTR.Type = KLJACTR_noparticularresult;
 /* line 952: */
 /* line 953: */
(void)(A_CALLPROC(YNBBCTR_collateralclause,(Starter, VUBBCTR),(Starter, VUBBCTR,(YNBBCTR_collateralclause).nonlocals)));
} 
} 
else
{ 
 /* line 954: */
 /* line 955: */
if ((Starter.Fn==JBAACTR_forfn)|(Starter.Fn==KBAACTR_forallfn))
{ 
WUBBCTR_valuelist = (*A_NILCHECK(NL(SJBBCTR_valuestack)));
 /* line 957: */
 /* line 958: */
XUBBCTR = Starter.Resultmode;
for ( YUBBCTR = 1;
YUBBCTR <= XUBBCTR;
YUBBCTR += 1 )
{ 
 /* line 959: */
(void)((*A_NILCHECK(NL(SJBBCTR_valuestack))) = (*A_NILCHECK((&(A_NILCHECK((*A_NILCHECK(NL(SJBBCTR_valuestack))))->Rest)))));
}
 /* line 961: */
 /* line 962: */
ZUBBCTR.Value.Mode = UEAACTR_voidmode;
ZUBBCTR.Value.Info = PKJACTR_defaultinfo;
ZUBBCTR.Value.Extra = A_EMPTY(AVBBCTR,3);
ZUBBCTR.Rest = (*A_NILCHECK(NL(SJBBCTR_valuestack)));
(void)((*A_NILCHECK(NL(SJBBCTR_valuestack))) = GUBBCTR_assignment(Newvalue, ZUBBCTR));
 /* line 964: */
 /* line 965: */
 /* line 966: */
if (Starter.Fn==JBAACTR_forfn)
{ 
 /* line 967: */
BVBBCTR = CSBBCTR_loopclause;
} 
else
{ 
BVBBCTR = ATBBCTR_forallclause;
} 
 /* line 968: */
 /* line 969: */
CVBBCTR.Value = (&(A_NILCHECK((*A_NILCHECK(NL(SJBBCTR_valuestack))))->Value));
CVBBCTR.End = (&YTBBCTR_endofclause);
CVBBCTR.Type = ELJACTR_voidresult;
 /* line 971: */
 /* line 973: */
 /* line 974: */
(void)(A_CALLPROC(BVBBCTR,(Starter, Body, CVBBCTR, (&WUBBCTR_valuelist)),(Starter, Body, CVBBCTR, (&WUBBCTR_valuelist),(BVBBCTR).nonlocals)));
} 
else
{ 
 /* line 975: */
 /* line 976: */
if ((Starter.Mode>0)&(!Body))
{ 
DVBBCTR = Starter.Resultmode ;
EVBBCTR_resultmode = A_ABS(DVBBCTR);
 /* line 978: */
 /* line 979: */
FVBBCTR.Value.Mode = EVBBCTR_resultmode;
FVBBCTR.Value.Info = PKJACTR_defaultinfo;
FVBBCTR.Value.Extra = A_EMPTY(GVBBCTR,3);
FVBBCTR.Rest = (*A_NILCHECK(NL(SJBBCTR_valuestack)));
(void)((*A_NILCHECK(NL(SJBBCTR_valuestack))) = GUBBCTR_assignment(Newvalue, FVBBCTR));
 /* line 981: */
 /* line 982: */
 /* line 983: */
 /* line 984: */
 /* line 985: */
HVBBCTR.Value = (&(A_NILCHECK((*A_NILCHECK(NL(SJBBCTR_valuestack))))->Value));
 /* line 987: */
HVBBCTR.End = (&YTBBCTR_endofclause);
 /* line 988: */
HVBBCTR.Type = FLJACTR_memoryresult;
 /* line 989: */
 /* line 990: */
(void)(A_CALLPROC(VKBBCTR_choiceclause,(Starter, Body, HVBBCTR),(Starter, Body, HVBBCTR,(VKBBCTR_choiceclause).nonlocals)));
} 
else
{ 
(void)(WXIACTR_assert(JVBBCTR, (Answer.Type!=JLJACTR_optboolresult)));
 /* line 991: */
 /* line 992: */
 /* line 993: */
 /* line 994: */
 /* line 995: */
KVBBCTR.Value = Answer.Value;
 /* line 996: */
 /* line 997: */
if (Answer.End==(A68_55 *)A68_NIL)
{ 
 /* line 998: */
KVBBCTR.End = (&YTBBCTR_endofclause);
} 
else
{ 
 /* line 1000: */
KVBBCTR.End = Answer.End;
} 
 /* line 1001: */
LVBBCTR = Answer.Type ;
KVBBCTR.Type = A_ABS(LVBBCTR);
 /* line 1002: */
 /* line 1003: */
(void)(A_CALLPROC(VKBBCTR_choiceclause,(Starter, Body, KVBBCTR),(Starter, Body, KVBBCTR,(VKBBCTR_choiceclause).nonlocals)));
} 
} 
} 
} 
} 
A_PROC_EXIT(enclosedclause);
return;
} 
#undef NL

A_STATIC A68_VOID  OVBBCTR_optboolexpression(A68_INT  Warn, void *NonLocals)
#define NL(x) (((PVBBCTR_optboolexpression *)NonLocals)->x)
{ 
A68_64 * QVBBCTR_operand A_UNUSED = {0};
A68_BOOL  RVBBCTR_orel A_UNUSED = {0};
A68_63  SVBBCTR;  /* collateral clause result */
A_PROC_ENTRY(optboolexpression);
 /* line 1009: */
 /* line 1010: */
{ 
QVBBCTR_operand = (&(A_NILCHECK((*A_NILCHECK(NL(SJBBCTR_valuestack))))->Value));
 /* line 1011: */
RVBBCTR_orel = (Warn==KCAACTR_orelwarn);
 /* line 1012: */
(void)(XTZACTR_optboolwarning(RVBBCTR_orel, QVBBCTR_operand));
 /* line 1014: */
 /* line 1015: */
 /* line 1016: */
SVBBCTR.Value = QVBBCTR_operand;
SVBBCTR.End = (A68_55 *)A68_NIL;
SVBBCTR.Type = KLJACTR_noparticularresult;
 /* line 1017: */
 /* line 1018: */
(void)(A_CALLPROC(NL(PJBBCTR_phrase),(A68_FALSE, SVBBCTR, A68_FALSE),(A68_FALSE, SVBBCTR, A68_FALSE,(NL(PJBBCTR_phrase)).nonlocals)));
 /* line 1019: */
 /* line 1020: */
(void)(QVZACTR_optbooloper());
} 
A_PROC_EXIT(optboolexpression);
return;
} 
#undef NL

A_STATIC A68_VOID  XFBBCTR_skiproutine(void *NonLocals)
#define NL(x) (((YFBBCTR_skiproutine *)NonLocals)->x)
{ 
A68_181  ZFBBCTR;  /* united object - for case conformity */
A68_BOOL  AGBBCTR;  /* clause result */
A68_190  BGBBCTR_t A_UNUSED = {0};
A68_BOOL  CGBBCTR;  /* clause result */
A_PROC_ENTRY(skiproutine);
for ( ;; )
{ 
(void)(A_CALLPROC(NL(BFBBCTR_read),(),((NL(BFBBCTR_read)).nonlocals)));
 /* line 133: */
 /* line 134: */
ZFBBCTR = (*A_NILCHECK(NL(XEBBCTR_currentimperative))) ;
switch ( ZFBBCTR.mode )
{ 
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
{ 
(void)(A_CALLPROC(NL(WFBBCTR_skiproutine),(),((NL(WFBBCTR_skiproutine)).nonlocals)));
 /* line 135: */
AGBBCTR = A68_TRUE;
} 
break;
case 22: /* STRUCT(INT,BITS)  */
BGBBCTR_t = (ZFBBCTR.data.mode22);
 /* line 136: */
AGBBCTR = (BGBBCTR_t.Fn!=GCAACTR_routinendfn);
break;
default: 
 /* line 137: */
 /* line 138: */
AGBBCTR = A68_TRUE;
break;
} 
 /* line 140: */
CGBBCTR = AGBBCTR;
if ( !CGBBCTR ) break;
/*SKIP*/;
}
A_PROC_EXIT(skiproutine);
return;
} 
#undef NL

A_STATIC A68_VOID  FGBBCTR_routine(A68_122  Routine, void *NonLocals)
#define NL(x) (((GGBBCTR_routine *)NonLocals)->x)
{ 
A68_INT  IGBBCTR;  /* YIELD */
A68_123  HGBBCTR_environ A_UNUSED = {0};
A68_181  JGBBCTR;  /* united object - for case conformity */
A68_165  KGBBCTR_label A_UNUSED = {0};
A68_123  LGBBCTR;  /* avoid structure result */
A68_123  MGBBCTR_labelenviron A_UNUSED = {0};
A68_BOOL  NGBBCTR;  /* clause result */
A68_122  OGBBCTR_r A_UNUSED = {0};
A68_BOOL  TGBBCTR;  /* clause result */
A68_INT  UGBBCTR_resulttype A_UNUSED = {0};
A68_64  VGBBCTR_result A_UNUSED = {0};
A68_55 * WGBBCTR_endofroutine A_UNUSED = {0};
A68_200  XGBBCTR;  /* avoid structure result */
A68_200  YGBBCTR_proc A_UNUSED = {0};
A68_INT  ZGBBCTR_paramcount A_UNUSED = {0};
A68_273  BHBBCTR_generator;   /* proc value of non-global proc */
A68_124  GHBBCTR;  /* avoid structure result */
A68_124  HHBBCTR_nulllist A_UNUSED = {0};
A68_124  IHBBCTR_parammodes A_UNUSED = {0};
A68_124  JHBBCTR_paramdecnos A_UNUSED = {0};
A68_124  KHBBCTR;  /* avoid structure result */
A68_273  MHBBCTR_generator;   /* proc value of non-global proc */
A68_124  RHBBCTR;  /* avoid structure result */
A68_INT  SHBBCTR_i A_UNUSED = {0};
A68_INT  THBBCTR;  /* to part of loop */
A68_181  UHBBCTR;  /* united object - for case conformity */
A68_157  VHBBCTR_id A_UNUSED = {0};
A68_INT * AIBBCTR;  /* YIELD */
A68_63  DIBBCTR;  /* collateral clause result */
A68_BITS  EIBBCTR;  /* ADICOPS - >= */
A_PROC_ENTRY(routine);
 /* line 147: */
 /* line 148: */
{ 
IGBBCTR = Routine.Maxname ;
HGBBCTR_environ = (*A_NILCHECK((&(A_NILCHECK((&A_R1INDEX(WPKACTR_ids,IGBBCTR)))->Environ))));
 /* line 150: */
for ( ;; )
{ 
(void)(A_CALLPROC(NL(HFBBCTR_lookahead),(),((NL(HFBBCTR_lookahead)).nonlocals)));
 /* line 151: */
 /* line 152: */
JGBBCTR = (*A_NILCHECK(NL(ZEBBCTR_nextimperative))) ;
switch ( JGBBCTR.mode )
{ 
case 14: /* STRUCT(REF MODE26,INT,INT,BOOL)  */
KGBBCTR_label = (JGBBCTR.data.mode14);
 /* line 153: */
 /* line 154: */
{ 
(void)(ATWACTR_labdec(KGBBCTR_label));
 /* line 155: */
 /* line 156: */
RZWACTR_environoflabel( KGBBCTR_label.Labno, &LGBBCTR );
MGBBCTR_labelenviron = LGBBCTR;
 /* line 157: */
 /* line 158: */
if (TRLACTR_isnewerthan(MGBBCTR_labelenviron, HGBBCTR_environ))
{ 
 /* line 159: */
HGBBCTR_environ = MGBBCTR_labelenviron;
} 
 /* line 160: */
(void)(A_CALLPROC(NL(BFBBCTR_read),(),((NL(BFBBCTR_read)).nonlocals)));
 /* line 161: */
 /* line 163: */
NGBBCTR = A68_TRUE;
} 
break;
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
OGBBCTR_r = (JGBBCTR.data.mode12);
 /* line 164: */
 /* line 165: */
 /* line 167: */
if (IOMACTR_modetype(Routine.Mode)==GEAACTR_procp)
{ 
(void)(WXIACTR_assert(SGBBCTR, A_VC_EQ(OGBBCTR_r.Name,RGBBCTR)));
 /* line 168: */
(void)(A_CALLPROC(NL(BFBBCTR_read),(),((NL(BFBBCTR_read)).nonlocals)));
 /* line 169: */
(void)(A_CALLPROC(NL(WFBBCTR_skiproutine),(),((NL(WFBBCTR_skiproutine)).nonlocals)));
 /* line 170: */
 /* line 171: */
NGBBCTR = A68_TRUE;
} 
else
{ 
 /* line 172: */
 /* line 173: */
NGBBCTR = A68_FALSE;
} 
break;
default: 
 /* line 174: */
 /* line 175: */
NGBBCTR = A68_FALSE;
break;
} 
 /* line 177: */
TGBBCTR = NGBBCTR;
if ( !TGBBCTR ) break;
/*SKIP*/;
}
 /* line 179: */
UGBBCTR_resulttype = HLJACTR_routineresult;
 /* line 180: */
 /* line 181: */
 /* line 183: */
(void)(YRLACTR_startnewlevel(Routine.Rdenno));
 /* line 185: */
STMACTR_procinfo( Routine.Mode, &XGBBCTR );
YGBBCTR_proc = XGBBCTR;
 /* line 186: */
ZGBBCTR_paramcount = YGBBCTR_proc.Parameters;
 /* line 187: */
A_CLOSURE( BHBBCTR_generator, CHBBCTR_generator, DHBBCTR_generator );
A_CALLPROC(BHBBCTR_generator,(A68_FALSE, &GHBBCTR),(A68_FALSE, &GHBBCTR,(BHBBCTR_generator).nonlocals));
HHBBCTR_nulllist = GHBBCTR;
 /* line 188: */
 /* line 189: */
 /* line 191: */
 /* line 192: */
 /* line 193: */
if (ZGBBCTR_paramcount>0)
{ 
A_CALLPROC(AWMACTR_parameters,(Routine.Mode, &KHBBCTR),(Routine.Mode, &KHBBCTR,(AWMACTR_parameters).nonlocals));
IHBBCTR_parammodes = KHBBCTR;
 /* line 194: */
A_CLOSURE( MHBBCTR_generator, NHBBCTR_generator, OHBBCTR_generator );
(( OHBBCTR_generator * ) ( MHBBCTR_generator.nonlocals )) -> ZGBBCTR_paramcount = ZGBBCTR_paramcount;
A_CALLPROC(MHBBCTR_generator,(A68_FALSE, &RHBBCTR),(A68_FALSE, &RHBBCTR,(MHBBCTR_generator).nonlocals));
JHBBCTR_paramdecnos = RHBBCTR;
 /* line 195: */
 /* line 196: */
THBBCTR = ZGBBCTR_paramcount;
for ( SHBBCTR_i = 1;
SHBBCTR_i <= THBBCTR;
SHBBCTR_i += 1 )
{ 
 /* line 197: */
(void)(A_CALLPROC(NL(BFBBCTR_read),(),((NL(BFBBCTR_read)).nonlocals)));
 /* line 198: */
 /* line 199: */
UHBBCTR = (*A_NILCHECK(NL(XEBBCTR_currentimperative))) ;
switch ( UHBBCTR.mode )
{ 
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
VHBBCTR_id = (UHBBCTR.data.mode11);
 /* line 200: */
 /* line 201: */
{ 
 /* line 202: */
(void)(WXIACTR_assert(XHBBCTR, (VHBBCTR_id.Type==3)));
 /* line 203: */
 /* line 204: */
(void)(WXIACTR_assert(ZHBBCTR, (HCNACTR_finddeflexmode(VHBBCTR_id.Mode)==HCNACTR_finddeflexmode((*A_NILCHECK((&A_VINDEX(IHBBCTR_parammodes,SHBBCTR_i))))))));
 /* line 205: */
AIBBCTR = (&A_VINDEX(JHBBCTR_paramdecnos,SHBBCTR_i)) ;
(*A_NILCHECK(AIBBCTR)) = VHBBCTR_id.Decno;
 /* line 206: */
 /* line 207: */
 /* line 208: */
 /* line 210: */
(void)(VWVACTR_iddec(VHBBCTR_id, (A68_71 **)A68_NIL));
} 
break;
default: 
 /* line 211: */
 /* line 212: */
(void)(WXIACTR_assert(CIBBCTR, A68_FALSE));
break;
} 
}
 /* line 213: */
 /* line 214: */
} 
else
{ 
 /* line 215: */
JHBBCTR_paramdecnos = HHBBCTR_nulllist;
} 
 /* line 217: */
 /* line 218: */
 /* line 219: */
 /* line 220: */
 /* line 221: */
 /* line 223: */
(void)(EQYACTR_startroutine(Routine, HGBBCTR_environ, JHBBCTR_paramdecnos, YGBBCTR_proc.Result, (&VGBBCTR_result)));
 /* line 228: */
 /* line 229: */
 /* line 230: */
DIBBCTR.Value = (&VGBBCTR_result);
DIBBCTR.End = WGBBCTR_endofroutine;
DIBBCTR.Type = UGBBCTR_resulttype;
 /* line 231: */
 /* line 232: */
EIBBCTR = Routine.Props ;
(void)(A_CALLPROC((*A_NILCHECK(NL(VFBBCTR_phrase_))),(A_LB_GE(EIBBCTR,NCAACTR_ccbit), DIBBCTR, A68_FALSE),(A_LB_GE(EIBBCTR,NCAACTR_ccbit), DIBBCTR, A68_FALSE,((*A_NILCHECK(NL(VFBBCTR_phrase_)))).nonlocals)));
 /* line 235: */
(void)(XQYACTR_endroutine(Routine, (&VGBBCTR_result)));
 /* line 236: */
 /* line 237: */
(void)(A_CALLPROC(BSLACTR_reverttopreviouslevel,(),((BSLACTR_reverttopreviouslevel).nonlocals)));
} 
A_PROC_EXIT(routine);
return;
} 
#undef NL

A_STATIC A68_VOID  IIBBCTR_serialclause(A68_59  Properties, A68_63  Answer, void *NonLocals)
#define NL(x) (((JIBBCTR_serialclause *)NonLocals)->x)
{ 
A68_55 * KIBBCTR_endofseries A_UNUSED = {0};
A68_BOOL  LIBBCTR_discardlevelactivated A_UNUSED = {0};
A68_BOOL  MIBBCTR_firstexit A_UNUSED = {0};
A68_63  NIBBCTR;  /* collateral clause result */
A68_63  OIBBCTR_seriesanswer A_UNUSED = {0};
A68_181  PIBBCTR;  /* united object - for case conformity */
A68_188  QIBBCTR_s A_UNUSED = {0};
A68_BITS  RIBBCTR;  /* ADICOPS - >= */
A68_BOOL  SIBBCTR_dontpullbitset A_UNUSED = {0};
A68_BOOL  TIBBCTR;  /* clause result */
A68_190  WIBBCTR_t A_UNUSED = {0};
A68_59  XIBBCTR;  /* collateral clause result */
A68_BITS  YIBBCTR;  /* ADICOPS - >= */
A68_BOOL  ZIBBCTR;  /* clause result */
A_PROC_ENTRY(serialclause);
 /* line 246: */
 /* line 247: */
{ 
KIBBCTR_endofseries = Answer.End;
 /* line 248: */
LIBBCTR_discardlevelactivated = A68_FALSE;
 /* line 249: */
MIBBCTR_firstexit = A68_TRUE;
 /* line 251: */
 /* line 252: */
 /* line 253: */
 /* line 255: */
(void)(A_CALLPROC(WVZACTR_startseries,(Properties, (&KIBBCTR_endofseries), (&LIBBCTR_discardlevelactivated)),(Properties, (&KIBBCTR_endofseries), (&LIBBCTR_discardlevelactivated),(WVZACTR_startseries).nonlocals)));
 /* line 257: */
 /* line 258: */
NIBBCTR.Value = Answer.Value;
NIBBCTR.End = KIBBCTR_endofseries;
NIBBCTR.Type = Answer.Type;
OIBBCTR_seriesanswer = NIBBCTR;
 /* line 260: */
for ( ;; )
{ 
(void)(A_CALLPROC((*A_NILCHECK(NL(VFBBCTR_phrase_))),(A68_FALSE, OIBBCTR_seriesanswer, A68_FALSE),(A68_FALSE, OIBBCTR_seriesanswer, A68_FALSE,((*A_NILCHECK(NL(VFBBCTR_phrase_)))).nonlocals)));
 /* line 262: */
 /* line 263: */
PIBBCTR = (*A_NILCHECK(NL(XEBBCTR_currentimperative))) ;
switch ( PIBBCTR.mode )
{ 
case 20: /* STRUCT(INT,INT,BITS,INT)  */
QIBBCTR_s = (PIBBCTR.data.mode20);
 /* line 264: */
 /* line 266: */
{ 
RIBBCTR = QIBBCTR_s.Props ;
SIBBCTR_dontpullbitset = A_LB_GE(RIBBCTR,BDAACTR_dontpullbit);
 /* line 267: */
 /* line 268: */
 /* line 269: */
if (QIBBCTR_s.Fn==WBAACTR_semifn)
{ 
 /* line 271: */
(void)(HWZACTR_semi(((A68_BITS )(QIBBCTR_s.Props&MDAACTR_dybits)!=0X0U), SIBBCTR_dontpullbitset));
 /* line 272: */
 /* line 273: */
TIBBCTR = A68_TRUE;
} 
else
{ 
 /* line 274: */
 /* line 275: */
if (QIBBCTR_s.Fn==RBAACTR_exitfn)
{ 
(void)(WXIACTR_assert(VIBBCTR, (Answer.End!=(A68_55 *)A68_NIL)));
 /* line 276: */
 /* line 277: */
 /* line 278: */
 /* line 280: */
(void)(LWZACTR_exit(SIBBCTR_dontpullbitset, MIBBCTR_firstexit, OIBBCTR_seriesanswer));
 /* line 281: */
MIBBCTR_firstexit = A68_FALSE;
 /* line 282: */
 /* line 283: */
 /* line 284: */
TIBBCTR = A68_TRUE;
} 
else
{ 
 /* line 285: */
 /* line 286: */
 /* line 287: */
 /* line 288: */
 /* line 290: */
(void)(EWZACTR_endseries(Properties, Answer, KIBBCTR_endofseries, LIBBCTR_discardlevelactivated, SIBBCTR_dontpullbitset, (!MIBBCTR_firstexit)));
 /* line 291: */
 /* line 292: */
 /* line 293: */
 /* line 295: */
TIBBCTR = A68_FALSE;
} 
} 
} 
break;
case 22: /* STRUCT(INT,BITS)  */
WIBBCTR_t = (PIBBCTR.data.mode22);
 /* line 296: */
 /* line 298: */
{ 
 /* line 299: */
XIBBCTR.Block = Properties.Block;
 /* line 300: */
XIBBCTR.Dynamicresult = Properties.Dynamicresult;
 /* line 301: */
XIBBCTR.Discardeddynamicresult = Properties.Discardeddynamicresult;
 /* line 302: */
XIBBCTR.Type = (WIBBCTR_t.Fn+ZBAACTR_terminatoroffset);
 /* line 303: */
 /* line 304: */
 /* line 305: */
 /* line 306: */
 /* line 308: */
YIBBCTR = ~WIBBCTR_t.Props ;
(void)(EWZACTR_endseries(XIBBCTR, Answer, KIBBCTR_endofseries, LIBBCTR_discardlevelactivated, A_LB_GE(YIBBCTR,BDAACTR_dontpullbit), (!MIBBCTR_firstexit)));
 /* line 309: */
 /* line 310: */
 /* line 311: */
 /* line 312: */
TIBBCTR = A68_FALSE;
} 
break;
default: 
(void)(SXIACTR_terminalerror(656));
 /* line 313: */
 /* line 314: */
 /* line 315: */
TIBBCTR = A68_FALSE;
break;
} 
 /* line 317: */
ZIBBCTR = TIBBCTR;
if ( !ZIBBCTR ) break;
/*SKIP*/;
}
 /* line 318: */
} 
A_PROC_EXIT(serialclause);
return;
} 
#undef NL

A_STATIC A68_VOID  CJBBCTR_enquiryclause(A68_63  Answer, void *NonLocals)
#define NL(x) (((DJBBCTR_enquiryclause *)NonLocals)->x)
{ 
A68_BOOL  EJBBCTR_simple A_UNUSED = {0};
A68_181  FJBBCTR;  /* united object - for case conformity */
A68_188  GJBBCTR_s A_UNUSED = {0};
A68_BITS  HJBBCTR;  /* ADICOPS - >= */
A68_BOOL  IJBBCTR;  /* clause result */
A68_BOOL  LJBBCTR;  /* clause result */
A_PROC_ENTRY(enquiryclause);
 /* line 330: */
 /* line 331: */
{ 
EJBBCTR_simple = A68_TRUE;
 /* line 332: */
for ( ;; )
{ 
(void)(A_CALLPROC((*A_NILCHECK(NL(VFBBCTR_phrase_))),(A68_FALSE, Answer, EJBBCTR_simple),(A68_FALSE, Answer, EJBBCTR_simple,((*A_NILCHECK(NL(VFBBCTR_phrase_)))).nonlocals)));
 /* line 333: */
 /* line 334: */
FJBBCTR = (*A_NILCHECK(NL(XEBBCTR_currentimperative))) ;
switch ( FJBBCTR.mode )
{ 
case 20: /* STRUCT(INT,INT,BITS,INT)  */
GJBBCTR_s = (FJBBCTR.data.mode20);
 /* line 335: */
 /* line 336: */
 /* line 337: */
if (GJBBCTR_s.Fn==WBAACTR_semifn)
{ 
 /* line 338: */
 /* line 339: */
HJBBCTR = GJBBCTR_s.Props ;
(void)(HWZACTR_semi(((A68_BITS )(GJBBCTR_s.Props&MDAACTR_dybits)!=0X0U), A_LB_GE(HJBBCTR,BDAACTR_dontpullbit)));
 /* line 340: */
 /* line 341: */
 /* line 342: */
IJBBCTR = A68_TRUE;
} 
else
{ 
(void)(WXIACTR_assert(KJBBCTR, (GJBBCTR_s.Fn!=RBAACTR_exitfn)));
 /* line 343: */
 /* line 344: */
 /* line 345: */
IJBBCTR = A68_FALSE;
} 
break;
default: 
 /* line 346: */
 /* line 347: */
IJBBCTR = A68_FALSE;
break;
} 
 /* line 348: */
LJBBCTR = IJBBCTR;
if ( !LJBBCTR ) break;
EJBBCTR_simple = A68_FALSE;
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

A_STATIC A68_VOID  QJBBCTR_phrase(A68_BOOL  Body, A68_63  Answer, A68_BOOL  Simple, void *NonLocals)
#define NL(x) (((RJBBCTR_phrase *)NonLocals)->x)
{ 
A68_71 * SJBBCTR_valuestack A_UNUSED = {0};
A68_281  XJBBCTR_enclosedclause;   /* proc value of non-global proc */
A68_77  NVBBCTR_optboolexpression;   /* proc value of non-global proc */
A68_BOOL  TVBBCTR_simpleenquiry A_UNUSED = {0};
A68_181  UVBBCTR;  /* united object - for case conformity */
A68_192  VVBBCTR_p A_UNUSED = {0};
A68_192  WVBBCTR;  /* united object - for case conformity */
A68_191  XVBBCTR_l A_UNUSED = {0};
A68_71  YVBBCTR;  /* collateral clause result */
A68_64  ZVBBCTR;  /* avoid structure result */
A68_185  AWBBCTR_op A_UNUSED = {0};
A68_157  BWBBCTR_id A_UNUSED = {0};
A68_173  CWBBCTR_c A_UNUSED = {0};
A68_71 * DWBBCTR_visible A_UNUSED = {0};
A68_INT  EWBBCTR_i A_UNUSED = {0};
A68_INT  FWBBCTR;  /* to part of loop */
A68_71  GWBBCTR;  /* collateral clause result */
A68_68  HWBBCTR;  /* avoid structure result */
A68_68  IWBBCTR_temp A_UNUSED = {0};
A68_71  JWBBCTR;  /* collateral clause result */
A68_65  KWBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_178  LWBBCTR_format A_UNUSED = {0};
A68_71  MWBBCTR;  /* collateral clause result */
A68_184  NWBBCTR;  /* collateral clause result */
A68_191  OWBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_64  PWBBCTR;  /* avoid structure result */
A68_71  QWBBCTR;  /* collateral clause result */
A68_183  RWBBCTR;  /* collateral clause result */
A68_191  SWBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_64  TWBBCTR;  /* avoid structure result */
A68_185  UWBBCTR;  /* collateral clause result */
A68_122  VWBBCTR_r A_UNUSED = {0};
A68_122  WWBBCTR_savedr A_UNUSED = {0};
A68_BITS  XWBBCTR;  /* ADICOPS - >= */
A68_71  YWBBCTR;  /* collateral clause result */
A68_191  ZWBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  AXBBCTR;  /* YIELD */
A68_64  BXBBCTR;  /* avoid structure result */
A68_186  CXBBCTR_w A_UNUSED = {0};
A68_165  DXBBCTR_l A_UNUSED = {0};
A68_79  EXBBCTR_u A_UNUSED = {0};
A68_170  FXBBCTR_c A_UNUSED = {0};
A68_BOOL  IXBBCTR;  /* clause result */
A68_188  JXBBCTR_s A_UNUSED = {0};
A68_BOOL  MXBBCTR;  /* optbool result */
A68_189  NXBBCTR_s A_UNUSED = {0};
A68_BOOL  QXBBCTR;  /* clause result */
A_PROC_ENTRY(phrase);
 /* line 364: */
 /* line 365: */
{ 
SJBBCTR_valuestack = (A68_71 *)A68_NIL;
 /* line 367: */
 /* line 368: */
A_CLOSURE( XJBBCTR_enclosedclause, YJBBCTR_enclosedclause, ZJBBCTR_enclosedclause );
(( ZJBBCTR_enclosedclause * ) ( XJBBCTR_enclosedclause.nonlocals )) -> HIBBCTR_serialclause = NL(HIBBCTR_serialclause);
(( ZJBBCTR_enclosedclause * ) ( XJBBCTR_enclosedclause.nonlocals )) -> BFBBCTR_read = NL(BFBBCTR_read);
(( ZJBBCTR_enclosedclause * ) ( XJBBCTR_enclosedclause.nonlocals )) -> XEBBCTR_currentimperative = NL(XEBBCTR_currentimperative);
(( ZJBBCTR_enclosedclause * ) ( XJBBCTR_enclosedclause.nonlocals )) -> BJBBCTR_enquiryclause = NL(BJBBCTR_enquiryclause);
(( ZJBBCTR_enclosedclause * ) ( XJBBCTR_enclosedclause.nonlocals )) -> PJBBCTR_phrase = NL(PJBBCTR_phrase);
(( ZJBBCTR_enclosedclause * ) ( XJBBCTR_enclosedclause.nonlocals )) -> SJBBCTR_valuestack = (&SJBBCTR_valuestack);
 /* line 1005: */
A_CLOSURE( NVBBCTR_optboolexpression, OVBBCTR_optboolexpression, PVBBCTR_optboolexpression );
(( PVBBCTR_optboolexpression * ) ( NVBBCTR_optboolexpression.nonlocals )) -> SJBBCTR_valuestack = (&SJBBCTR_valuestack);
(( PVBBCTR_optboolexpression * ) ( NVBBCTR_optboolexpression.nonlocals )) -> PJBBCTR_phrase = NL(PJBBCTR_phrase);
 /* line 1024: */
TVBBCTR_simpleenquiry = Simple;
 /* line 1025: */
for ( ;; )
{ 
(void)(A_CALLPROC(NL(BFBBCTR_read),(),((NL(BFBBCTR_read)).nonlocals)));
 /* line 1026: */
 /* line 1027: */
UVBBCTR = (*A_NILCHECK(NL(XEBBCTR_currentimperative))) ;
switch ( UVBBCTR.mode )
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
case 18: /* STRUCT(MODE179,REF MODE26)  */
case 19: /* STRUCT(INT,INT,REF MODE26)  */
A_UNCPY(VVBBCTR_p,UVBBCTR);
 /* line 1028: */
{ 
 /* line 1029: */
WVBBCTR = VVBBCTR_p ;
switch ( WVBBCTR.mode )
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
A_UNCPY(XVBBCTR_l,WVBBCTR);
 /* line 1030: */
 /* line 1031: */
ZBABCTR_load( XVBBCTR_l, &ZVBBCTR );
YVBBCTR.Value = ZVBBCTR;
YVBBCTR.Rest = SJBBCTR_valuestack;
 /* line 1032: */
(void)(SJBBCTR_valuestack = GUBBCTR_assignment(A_LOC(A68_71 ), YVBBCTR));
break;
case 10: /* STRUCT(INT,INT,INT)  */
AWBBCTR_op = (WVBBCTR.data.mode10);
 /* line 1033: */
 /* line 1034: */
(void)(ISQACTR_oper(AWBBCTR_op, (&SJBBCTR_valuestack), A_LOC(A68_71 )));
break;
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
BWBBCTR_id = (WVBBCTR.data.mode11);
 /* line 1035: */
 /* line 1037: */
(void)(VWVACTR_iddec(BWBBCTR_id, (&SJBBCTR_valuestack)));
break;
case 19: /* STRUCT(INT,INT,REF MODE26)  */
CWBBCTR_c = (WVBBCTR.data.mode19);
 /* line 1038: */
 /* line 1039: */
{ 
DWBBCTR_visible = MKJACTR_nilvaluelist;
 /* line 1040: */
 /* line 1041: */
FWBBCTR = CWBBCTR_c.Number;
for ( EWBBCTR_i = 1;
EWBBCTR_i <= FWBBCTR;
EWBBCTR_i += 1 )
{ 
 /* line 1042: */
GWBBCTR.Value = (*A_NILCHECK((&(A_NILCHECK(SJBBCTR_valuestack)->Value))));
GWBBCTR.Rest = DWBBCTR_visible;
(void)(DWBBCTR_visible = GUBBCTR_assignment(A_LOC(A68_71 ), GWBBCTR));
 /* line 1043: */
 /* line 1044: */
(void)(SJBBCTR_valuestack = (*A_NILCHECK((&(A_NILCHECK(SJBBCTR_valuestack)->Rest)))));
}
 /* line 1045: */
 /* line 1046: */
EXZACTR_codeinsert( CWBBCTR_c.Insert, CWBBCTR_c.Mode, DWBBCTR_visible, &HWBBCTR );
IWBBCTR_temp = HWBBCTR;
 /* line 1047: */
 /* line 1048: */
if (CWBBCTR_c.Mode!=UEAACTR_voidmode)
{ 
 /* line 1049: */
JWBBCTR.Value.Mode = CWBBCTR_c.Mode;
JWBBCTR.Value.Info = PKJACTR_defaultinfo;
JWBBCTR.Value.Extra = A_UNITE(KWBBCTR,mode5,5,IWBBCTR_temp);
 /* line 1050: */
JWBBCTR.Rest = SJBBCTR_valuestack;
 /* line 1051: */
 /* line 1052: */
(void)(SJBBCTR_valuestack = GUBBCTR_assignment(A_LOC(A68_71 ), JWBBCTR));
} 
} 
break;
case 18: /* STRUCT(MODE179,REF MODE26)  */
LWBBCTR_format = (WVBBCTR.data.mode18);
 /* line 1053: */
 /* line 1054: */
{ 
 /* line 1055: */
 /* line 1056: */
 /* line 1057: */
 /* line 1058: */
NWBBCTR.Mode = YEAACTR_formatmode;
 /* line 1059: */
NWBBCTR.Denotation = LWBBCTR_format.Text;
 /* line 1060: */
ZBABCTR_load( A_UNITE(OWBBCTR,mode9,9,NWBBCTR), &PWBBCTR );
MWBBCTR.Value = PWBBCTR;
 /* line 1061: */
 /* line 1062: */
 /* line 1063: */
RWBBCTR.Mode = EFAACTR_intmode;
 /* line 1064: */
 /* line 1065: */
RWBBCTR.Denotation = (A68_LBITS )(A68_BITS )LWBBCTR_format.Info.W;
 /* line 1067: */
ZBABCTR_load( A_UNITE(SWBBCTR,mode8,8,RWBBCTR), &TWBBCTR );
QWBBCTR.Value = TWBBCTR;
 /* line 1068: */
QWBBCTR.Rest = SJBBCTR_valuestack;
MWBBCTR.Rest = GUBBCTR_assignment(A_LOC(A68_71 ), QWBBCTR);
(void)(SJBBCTR_valuestack = GUBBCTR_assignment(A_LOC(A68_71 ), MWBBCTR));
 /* line 1070: */
 /* line 1071: */
 /* line 1072: */
 /* line 1073: */
UWBBCTR.Fn = QGAACTR_formatfn;
 /* line 1075: */
UWBBCTR.Mode = YEAACTR_formatmode;
UWBBCTR.Param = LWBBCTR_format.Info.Nocases;
 /* line 1076: */
 /* line 1078: */
 /* line 1079: */
 /* line 1081: */
(void)(ISQACTR_oper(UWBBCTR, (&SJBBCTR_valuestack), A_LOC(A68_71 )));
} 
break;
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
VWBBCTR_r = (WVBBCTR.data.mode12);
 /* line 1092: */
 /* line 1093: */
{ 
WWBBCTR_savedr = VWBBCTR_r;
 /* line 1094: */
(void)(A_CALLPROC(NL(EGBBCTR_routine),(VWBBCTR_r),(VWBBCTR_r,(NL(EGBBCTR_routine)).nonlocals)));
 /* line 1095: */
 /* line 1096: */
XWBBCTR = (*A_NILCHECK((&(A_NILCHECK((&WWBBCTR_savedr))->Props)))) ;
if (A_LB_GE(XWBBCTR,PCAACTR_valbit))
{ 
 /* line 1097: */
AXBBCTR = (*A_NILCHECK((&(A_NILCHECK((&WWBBCTR_savedr))->Rdenno)))) ;
ZBABCTR_load( A_UNITE(ZWBBCTR,mode2,2,AXBBCTR), &BXBBCTR );
YWBBCTR.Value = BXBBCTR;
 /* line 1098: */
YWBBCTR.Rest = SJBBCTR_valuestack;
 /* line 1099: */
 /* line 1101: */
(void)(SJBBCTR_valuestack = GUBBCTR_assignment(A_LOC(A68_71 ), YWBBCTR));
} 
} 
break;
case 13: /* STRUCT(INT)  */
CXBBCTR_w = (WVBBCTR.data.mode13);
 /* line 1102: */
 /* line 1103: */
 /* line 1104: */
if ((CXBBCTR_w.W==KCAACTR_orelwarn)|(CXBBCTR_w.W==JCAACTR_andthwarn))
{ 
 /* line 1105: */
 /* line 1107: */
(void)(A_CALLPROC(NVBBCTR_optboolexpression,(CXBBCTR_w.W),(CXBBCTR_w.W,(NVBBCTR_optboolexpression).nonlocals)));
} 
break;
case 14: /* STRUCT(REF MODE26,INT,INT,BOOL)  */
DXBBCTR_l = (WVBBCTR.data.mode14);
 /* line 1108: */
 /* line 1110: */
(void)(ATWACTR_labdec(DXBBCTR_l));
break;
case 15: /* STRUCT(INT,BITS,INT)  */
EXBBCTR_u = (WVBBCTR.data.mode15);
 /* line 1112: */
 /* line 1114: */
(void)(SXIACTR_terminalerror(670));
break;
case 16: /* STRUCT(INT)  */
FXBBCTR_c = (WVBBCTR.data.mode16);
 /* line 1115: */
 /* line 1117: */
(void)(WXIACTR_assert(HXBBCTR, A68_FALSE));
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 1118: */
 /* line 1119: */
 /* line 1121: */
IXBBCTR = A68_TRUE;
} 
break;
case 20: /* STRUCT(INT,INT,BITS,INT)  */
JXBBCTR_s = (UVBBCTR.data.mode20);
 /* line 1122: */
{ 
 /* line 1123: */
 /* line 1124: */
if (SJBBCTR_valuestack!=MKJACTR_nilvaluelist)
{ 
(void)(WXIACTR_assert(LXBBCTR, ((*A_NILCHECK((&(A_NILCHECK(SJBBCTR_valuestack)->Rest))))==MKJACTR_nilvaluelist)));
 /* line 1125: */
 /* line 1126: */
if (JXBBCTR_s.Fn==WBAACTR_semifn)
{ 
 /* line 1127: */
(void)(NDZACTR_evaluatenoresult((&SJBBCTR_valuestack)));
} 
else
{ 
 /* line 1128: */
 /* line 1129: */
MXBBCTR = (Answer.Type==ILJACTR_enquiryresult);
if ( MXBBCTR )
{MXBBCTR = TVBBCTR_simpleenquiry;
}
 /* line 1130: */
if (MXBBCTR)
{ 
 /* line 1131: */
(void)(EHZACTR_evaluatesimpleenquiry((&SJBBCTR_valuestack), Answer));
} 
else
{ 
 /* line 1132: */
 /* line 1133: */
(void)(GFZACTR_evaluateresult((&SJBBCTR_valuestack), Answer));
} 
} 
} 
 /* line 1134: */
 /* line 1135: */
 /* line 1137: */
IXBBCTR = A68_FALSE;
} 
break;
case 22: /* STRUCT(INT,BITS)  */
 /* line 1138: */
{ 
 /* line 1139: */
if (SJBBCTR_valuestack!=MKJACTR_nilvaluelist)
{ 
 /* line 1140: */
(void)(GFZACTR_evaluateresult((&SJBBCTR_valuestack), Answer));
} 
 /* line 1141: */
 /* line 1142: */
 /* line 1144: */
IXBBCTR = A68_FALSE;
} 
break;
case 21: /* STRUCT(INT,INT,BITS,INT)  */
NXBBCTR_s = (UVBBCTR.data.mode21);
 /* line 1145: */
{ 
(void)(A_CALLPROC(XJBBCTR_enclosedclause,(NXBBCTR_s, Body, Answer, A_LOC(A68_71 )),(NXBBCTR_s, Body, Answer, A_LOC(A68_71 ),(XJBBCTR_enclosedclause).nonlocals)));
 /* line 1146: */
TVBBCTR_simpleenquiry = A68_FALSE;
 /* line 1147: */
 /* line 1148: */
 /* line 1150: */
IXBBCTR = A68_TRUE;
} 
break;
default: 
(void)(WXIACTR_assert(PXBBCTR, A68_FALSE));
 /* line 1151: */
 /* line 1152: */
 /* line 1153: */
IXBBCTR = A68_FALSE;
break;
} 
 /* line 1155: */
QXBBCTR = IXBBCTR;
if ( !QXBBCTR ) break;
/*SKIP*/;
}
 /* line 1157: */
} 
A_PROC_EXIT(phrase);
return;
} 
#undef NL

A_STATIC A68_VOID  CFBBCTR_read(void *NonLocals)
#define NL(x) (((DFBBCTR_read *)NonLocals)->x)
{ 
A68_181  EFBBCTR;  /* united object - for case conformity */
A68_181  FFBBCTR;  /* avoid structure result */
A68_181  GFBBCTR = {0};  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(read);
 /* line 75: */
EFBBCTR = (*A_NILCHECK(NL(ZEBBCTR_nextimperative))) ;
switch ( EFBBCTR.mode )
{ 
case 26: /* VOID */
 /* line 76: */
 /* line 77: */
A_CALLPROC(NL(Nextstreamimperative),( &FFBBCTR),( &FFBBCTR,(NL(Nextstreamimperative)).nonlocals));
(*A_NILCHECK(NL(XEBBCTR_currentimperative))) = FFBBCTR;
break;
default: 
(void)((*A_NILCHECK(NL(XEBBCTR_currentimperative))) = (*A_NILCHECK(NL(ZEBBCTR_nextimperative))));
 /* line 78: */
 /* line 79: */
(void)((*A_NILCHECK(NL(ZEBBCTR_nextimperative))) = A_EMPTY(GFBBCTR,26));
break;
} 
A_PROC_EXIT(read);
return;
} 
#undef NL

A_STATIC A68_VOID  IFBBCTR_lookahead(void *NonLocals)
#define NL(x) (((JFBBCTR_lookahead *)NonLocals)->x)
{ 
A68_181  KFBBCTR;  /* united object - for case conformity */
A68_181  LFBBCTR;  /* avoid structure result */
A_PROC_ENTRY(lookahead);
 /* line 89: */
KFBBCTR = (*A_NILCHECK(NL(ZEBBCTR_nextimperative))) ;
switch ( KFBBCTR.mode )
{ 
case 26: /* VOID */
 /* line 90: */
 /* line 91: */
A_CALLPROC(NL(Nextstreamimperative),( &LFBBCTR),( &LFBBCTR,(NL(Nextstreamimperative)).nonlocals));
(*A_NILCHECK(NL(ZEBBCTR_nextimperative))) = LFBBCTR;
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

A_STATIC A68_VOID  MFBBCTR_compositionmodule(void)
{ 
A_PROC_ENTRY(compositionmodule);
(void)(WXIACTR_assert(OFBBCTR, A68_FALSE));
A_PROC_EXIT(compositionmodule);
return;
} 
#undef NL
 /* line 105: */
 /* line 106: */

A_STATIC A68_VOID  TFBBCTR_module(A68_VC  Modulename, A68_BOOL  Decsmodule, A68_BOOL  Prelude, void *NonLocals)
#define NL(x) (((UFBBCTR_module *)NonLocals)->x)
{ 
A68_269  VFBBCTR_phrase_ A_UNUSED = {0};
A68_75  WFBBCTR_skiproutine;   /* proc value of non-global proc */
A68_270  EGBBCTR_routine;   /* proc value of non-global proc */
A68_277  HIBBCTR_serialclause;   /* proc value of non-global proc */
A68_279  BJBBCTR_enquiryclause;   /* proc value of non-global proc */
A68_269  PJBBCTR_phrase;   /* proc value of non-global proc */
A68_55 * RXBBCTR_endofmodule A_UNUSED = {0};
A68_64 * SXBBCTR_result A_UNUSED = {0};
A68_59  TXBBCTR;  /* collateral clause result */
A68_59  UXBBCTR_properties A_UNUSED = {0};
A68_VC  VXBBCTR;  /* OPERATORS - istruct -> vector */
A68_56 * WXBBCTR;  /* OPERATORS - istruct -> vector */
A68_64  XXBBCTR;  /* collateral clause result */
A68_65  YXBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_63  ZXBBCTR;  /* collateral clause result */
A68_181  AYBBCTR;  /* united object - for case conformity */
A68_157  BYBBCTR_id A_UNUSED = {0};
A68_181  CYBBCTR;  /* united object - for case conformity */
A68_122  DYBBCTR_r A_UNUSED = {0};
A68_BOOL  EYBBCTR;  /* clause result */
A68_VC  FYBBCTR;  /* avoid structure result */
A68_122  GYBBCTR_r A_UNUSED = {0};
A68_VC  HYBBCTR;  /* avoid structure result */
A68_181  IYBBCTR;  /* united object - for case conformity */
A68_122  JYBBCTR_r A_UNUSED = {0};
A68_122  KYBBCTR;  /* clause result */
A68_122  NYBBCTR = {0};  /* OPERATORS - skip to mode */
A68_122  OYBBCTR_routine A_UNUSED = {0};
A68_181  PYBBCTR;  /* united object - for case conformity */
A68_122  QYBBCTR_r A_UNUSED = {0};
A68_BOOL  VYBBCTR;  /* clause result */
A68_BOOL  WYBBCTR;  /* clause result */
A68_VC  XYBBCTR;  /* OPERATORS - istruct -> vector */
A68_56 * YYBBCTR;  /* OPERATORS - istruct -> vector */
A68_63  ZYBBCTR;  /* collateral clause result */
A68_BITS  AZBBCTR;  /* ADICOPS - >= */
A68_181  BZBBCTR;  /* united object - for case conformity */
A68_190  CZBBCTR_t A_UNUSED = {0};
A68_BOOL  DZBBCTR;  /* clause result */
A68_VC  EZBBCTR;  /* OPERATORS - istruct -> vector */
A68_56 * FZBBCTR;  /* OPERATORS - istruct -> vector */
A68_64  GZBBCTR;  /* collateral clause result */
A68_65  HZBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_63  IZBBCTR;  /* collateral clause result */
A_PROC_ENTRY(module);
 /* line 122: */
 /* line 123: */
{ 
 /* line 128: */
 /* line 132: */
A_CLOSURE( WFBBCTR_skiproutine, XFBBCTR_skiproutine, YFBBCTR_skiproutine );
(( YFBBCTR_skiproutine * ) ( WFBBCTR_skiproutine.nonlocals )) -> BFBBCTR_read = NL(BFBBCTR_read);
(( YFBBCTR_skiproutine * ) ( WFBBCTR_skiproutine.nonlocals )) -> XEBBCTR_currentimperative = NL(XEBBCTR_currentimperative);
(( YFBBCTR_skiproutine * ) ( WFBBCTR_skiproutine.nonlocals )) -> WFBBCTR_skiproutine = WFBBCTR_skiproutine;
 /* line 142: */
A_CLOSURE( EGBBCTR_routine, FGBBCTR_routine, GGBBCTR_routine );
(( GGBBCTR_routine * ) ( EGBBCTR_routine.nonlocals )) -> HFBBCTR_lookahead = NL(HFBBCTR_lookahead);
(( GGBBCTR_routine * ) ( EGBBCTR_routine.nonlocals )) -> ZEBBCTR_nextimperative = NL(ZEBBCTR_nextimperative);
(( GGBBCTR_routine * ) ( EGBBCTR_routine.nonlocals )) -> BFBBCTR_read = NL(BFBBCTR_read);
(( GGBBCTR_routine * ) ( EGBBCTR_routine.nonlocals )) -> WFBBCTR_skiproutine = WFBBCTR_skiproutine;
(( GGBBCTR_routine * ) ( EGBBCTR_routine.nonlocals )) -> XEBBCTR_currentimperative = NL(XEBBCTR_currentimperative);
(( GGBBCTR_routine * ) ( EGBBCTR_routine.nonlocals )) -> VFBBCTR_phrase_ = (&VFBBCTR_phrase_);
 /* line 239: */
A_CLOSURE( HIBBCTR_serialclause, IIBBCTR_serialclause, JIBBCTR_serialclause );
(( JIBBCTR_serialclause * ) ( HIBBCTR_serialclause.nonlocals )) -> VFBBCTR_phrase_ = (&VFBBCTR_phrase_);
(( JIBBCTR_serialclause * ) ( HIBBCTR_serialclause.nonlocals )) -> XEBBCTR_currentimperative = NL(XEBBCTR_currentimperative);
 /* line 320: */
A_CLOSURE( BJBBCTR_enquiryclause, CJBBCTR_enquiryclause, DJBBCTR_enquiryclause );
(( DJBBCTR_enquiryclause * ) ( BJBBCTR_enquiryclause.nonlocals )) -> VFBBCTR_phrase_ = (&VFBBCTR_phrase_);
(( DJBBCTR_enquiryclause * ) ( BJBBCTR_enquiryclause.nonlocals )) -> XEBBCTR_currentimperative = NL(XEBBCTR_currentimperative);
 /* line 353: */
A_CLOSURE( PJBBCTR_phrase, QJBBCTR_phrase, RJBBCTR_phrase );
(( RJBBCTR_phrase * ) ( PJBBCTR_phrase.nonlocals )) -> HIBBCTR_serialclause = HIBBCTR_serialclause;
(( RJBBCTR_phrase * ) ( PJBBCTR_phrase.nonlocals )) -> BFBBCTR_read = NL(BFBBCTR_read);
(( RJBBCTR_phrase * ) ( PJBBCTR_phrase.nonlocals )) -> XEBBCTR_currentimperative = NL(XEBBCTR_currentimperative);
(( RJBBCTR_phrase * ) ( PJBBCTR_phrase.nonlocals )) -> BJBBCTR_enquiryclause = BJBBCTR_enquiryclause;
(( RJBBCTR_phrase * ) ( PJBBCTR_phrase.nonlocals )) -> PJBBCTR_phrase = PJBBCTR_phrase;
(( RJBBCTR_phrase * ) ( PJBBCTR_phrase.nonlocals )) -> EGBBCTR_routine = EGBBCTR_routine;
 /* line 1159: */
VFBBCTR_phrase_ = PJBBCTR_phrase;
 /* line 1164: */
 /* line 1165: */
 /* line 1167: */
(void)(A_CALLPROC(NL(HFBBCTR_lookahead),(),((NL(HFBBCTR_lookahead)).nonlocals)));
 /* line 1169: */
 /* line 1170: */
 /* line 1171: */
if (Decsmodule)
{ 
TXBBCTR.Block = A68_FALSE;
TXBBCTR.Dynamicresult = A68_FALSE;
TXBBCTR.Discardeddynamicresult = A68_TRUE;
TXBBCTR.Type = DBAACTR_decsfn;
UXBBCTR_properties = TXBBCTR;
 /* line 1173: */
WXBBCTR = (&(A_NILCHECK((&OCPACTR_currentmodule))->Uname)) ;
(void)(IUYACTR_startdecsmodule(A_ISVEC(VXBBCTR,WXBBCTR,7,A68_CHAR ), Modulename));
 /* line 1175: */
XXBBCTR.Mode = UEAACTR_voidmode;
XXBBCTR.Info = PKJACTR_defaultinfo;
XXBBCTR.Extra = A_EMPTY(YXBBCTR,3);
(void)(SXBBCTR_result = BMBBCTR_assignment(A_LOC(A68_64 ), XXBBCTR));
 /* line 1177: */
 /* line 1178: */
ZXBBCTR.Value = SXBBCTR_result;
ZXBBCTR.End = RXBBCTR_endofmodule;
ZXBBCTR.Type = ELJACTR_voidresult;
(void)(A_CALLPROC(HIBBCTR_serialclause,(UXBBCTR_properties, ZXBBCTR),(UXBBCTR_properties, ZXBBCTR,(HIBBCTR_serialclause).nonlocals)));
 /* line 1180: */
 /* line 1181: */
 /* line 1182: */
(void)(NXYACTR_enddecsmodule(Modulename));
} 
else
{ 
 /* line 1183: */
AYBBCTR = (*A_NILCHECK(NL(ZEBBCTR_nextimperative))) ;
switch ( AYBBCTR.mode )
{ 
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
BYBBCTR_id = (AYBBCTR.data.mode11);
 /* line 1184: */
{ 
(void)(ONVACTR_initialdummydec(BYBBCTR_id));
(void)(A_CALLPROC(NL(BFBBCTR_read),(),((NL(BFBBCTR_read)).nonlocals)));
(void)(A_CALLPROC(NL(HFBBCTR_lookahead),(),((NL(HFBBCTR_lookahead)).nonlocals)));
 /* line 1185: */
 /* line 1186: */
CYBBCTR = (*A_NILCHECK(NL(ZEBBCTR_nextimperative))) ;
switch ( CYBBCTR.mode )
{ 
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
DYBBCTR_r = (CYBBCTR.data.mode12);
 /* line 1187: */
KDHACTR_message( 59, &FYBBCTR );
EYBBCTR = A_VC_EQ(DYBBCTR_r.Name,FYBBCTR);
break;
default: 
 /* line 1188: */
 /* line 1189: */
 /* line 1190: */
EYBBCTR = A68_FALSE;
break;
} 
} 
break;
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
GYBBCTR_r = (AYBBCTR.data.mode12);
 /* line 1191: */
 /* line 1192: */
KDHACTR_message( 59, &HYBBCTR );
EYBBCTR = A_VC_EQ(GYBBCTR_r.Name,HYBBCTR);
break;
default: 
 /* line 1193: */
 /* line 1194: */
 /* line 1196: */
EYBBCTR = A68_FALSE;
break;
} 
if (EYBBCTR)
{ 
(void)(A_CALLPROC(NL(BFBBCTR_read),(),((NL(BFBBCTR_read)).nonlocals)));
 /* line 1197: */
 /* line 1198: */
 /* line 1199: */
IYBBCTR = (*A_NILCHECK(NL(XEBBCTR_currentimperative))) ;
switch ( IYBBCTR.mode )
{ 
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
JYBBCTR_r = (IYBBCTR.data.mode12);
 /* line 1200: */
KYBBCTR = JYBBCTR_r;
break;
default: 
(void)(WXIACTR_assert(MYBBCTR, A68_FALSE));
 /* line 1201: */
KYBBCTR = NYBBCTR;
break;
} 
OYBBCTR_routine = KYBBCTR;
 /* line 1203: */
 /* line 1204: */
 /* line 1206: */
if (IOMACTR_modetype(OYBBCTR_routine.Mode)==GEAACTR_procp)
{ 
for ( ;; )
{ 
 /* line 1207: */
(void)(A_CALLPROC(NL(HFBBCTR_lookahead),(),((NL(HFBBCTR_lookahead)).nonlocals)));
 /* line 1208: */
 /* line 1209: */
 /* line 1210: */
PYBBCTR = (*A_NILCHECK(NL(ZEBBCTR_nextimperative))) ;
switch ( PYBBCTR.mode )
{ 
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
QYBBCTR_r = (PYBBCTR.data.mode12);
 /* line 1211: */
 /* line 1212: */
{ 
(void)(WXIACTR_assert(UYBBCTR, A_VC_EQ(QYBBCTR_r.Name,TYBBCTR)));
 /* line 1213: */
(void)(A_CALLPROC(NL(BFBBCTR_read),(),((NL(BFBBCTR_read)).nonlocals)));
 /* line 1214: */
(void)(A_CALLPROC(WFBBCTR_skiproutine,(),((WFBBCTR_skiproutine).nonlocals)));
 /* line 1215: */
 /* line 1216: */
 /* line 1217: */
VYBBCTR = A68_TRUE;
} 
break;
default: 
 /* line 1218: */
 /* line 1219: */
VYBBCTR = A68_FALSE;
break;
} 
 /* line 1221: */
WYBBCTR = VYBBCTR;
if ( !WYBBCTR ) break;
/*SKIP*/;
}
 /* line 1222: */
} 
 /* line 1224: */
 /* line 1225: */
 /* line 1226: */
 /* line 1227: */
 /* line 1229: */
YYBBCTR = (&(A_NILCHECK((&OCPACTR_currentmodule))->Uname)) ;
(void)(IWYACTR_startprocmodule(OYBBCTR_routine, A_ISVEC(XYBBCTR,YYBBCTR,7,A68_CHAR ), Modulename, SXBBCTR_result));
 /* line 1231: */
 /* line 1232: */
if (OTMACTR_dynamic((*A_NILCHECK((&(A_NILCHECK(SXBBCTR_result)->Mode))))))
{ 
 /* line 1233: */
(void)(PXIACTR_error(340));
} 
 /* line 1235: */
 /* line 1236: */
 /* line 1237: */
ZYBBCTR.Value = SXBBCTR_result;
ZYBBCTR.End = RXBBCTR_endofmodule;
ZYBBCTR.Type = HLJACTR_routineresult;
 /* line 1238: */
 /* line 1239: */
AZBBCTR = OYBBCTR_routine.Props ;
(void)(A_CALLPROC(PJBBCTR_phrase,(A_LB_GE(AZBBCTR,NCAACTR_ccbit), ZYBBCTR, A68_FALSE),(A_LB_GE(AZBBCTR,NCAACTR_ccbit), ZYBBCTR, A68_FALSE,(PJBBCTR_phrase).nonlocals)));
 /* line 1240: */
(void)(NWYACTR_endmodule());
 /* line 1243: */
(void)(A_CALLPROC(NL(BFBBCTR_read),(),((NL(BFBBCTR_read)).nonlocals)));
 /* line 1244: */
 /* line 1245: */
 /* line 1246: */
 /* line 1247: */
if ((IOMACTR_modetype(OYBBCTR_routine.Mode)==FEAACTR_proc)&((*A_NILCHECK((&(A_NILCHECK(SXBBCTR_result)->Mode))))!=UEAACTR_voidmode))
{ 
(void)(A_CALLPROC(NL(BFBBCTR_read),(),((NL(BFBBCTR_read)).nonlocals)));
} 
 /* line 1248: */
(void)(A_CALLPROC(NL(BFBBCTR_read),(),((NL(BFBBCTR_read)).nonlocals)));
 /* line 1249: */
 /* line 1250: */
BZBBCTR = (*A_NILCHECK(NL(XEBBCTR_currentimperative))) ;
switch ( BZBBCTR.mode )
{ 
case 22: /* STRUCT(INT,BITS)  */
CZBBCTR_t = (BZBBCTR.data.mode22);
 /* line 1251: */
DZBBCTR = (CZBBCTR_t.Fn!=HCAACTR_finishfn);
break;
default: 
 /* line 1252: */
 /* line 1253: */
DZBBCTR = A68_TRUE;
break;
} 
if (DZBBCTR)
{ 
 /* line 1254: */
 /* line 1255: */
 /* line 1257: */
(void)(SXIACTR_terminalerror(628));
} 
} 
else
{ 
FZBBCTR = (&(A_NILCHECK((&OCPACTR_currentmodule))->Uname)) ;
(void)(VSYACTR_startmodule(A_ISVEC(EZBBCTR,FZBBCTR,7,A68_CHAR ), Modulename));
 /* line 1258: */
GZBBCTR.Mode = UEAACTR_voidmode;
GZBBCTR.Info = PKJACTR_defaultinfo;
GZBBCTR.Extra = A_EMPTY(HZBBCTR,3);
(void)(SXBBCTR_result = BMBBCTR_assignment(A_LOC(A68_64 ), GZBBCTR));
 /* line 1259: */
 /* line 1260: */
 /* line 1261: */
 /* line 1262: */
IZBBCTR.Value = SXBBCTR_result;
 /* line 1264: */
IZBBCTR.End = RXBBCTR_endofmodule;
IZBBCTR.Type = ELJACTR_voidresult;
 /* line 1265: */
 /* line 1266: */
(void)(A_CALLPROC(PJBBCTR_phrase,(A68_FALSE, IZBBCTR, A68_FALSE),(A68_FALSE, IZBBCTR, A68_FALSE,(PJBBCTR_phrase).nonlocals)));
 /* line 1267: */
 /* line 1268: */
 /* line 1269: */
(void)(NWYACTR_endmodule());
} 
} 
} 
A_PROC_EXIT(module);
return;
} 
#undef NL
 /* line 59: */
 /* line 61: */

A68_VOID  WEBBCTR_translator(A68_265  Nextstreamimperative, A68_116 * Xsizes, A68_172  Keptdecnos)
{ 
A68_181  YEBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_181  XEBBCTR_currentimperative A_UNUSED = {0};
A68_181  AFBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_181  ZEBBCTR_nextimperative A_UNUSED = {0};
A68_75  BFBBCTR_read;   /* proc value of non-global proc */
A68_75  HFBBCTR_lookahead;   /* proc value of non-global proc */
A68_268  SFBBCTR_module;   /* proc value of non-global proc */
A68_VC  JZBBCTR;  /* OPERATORS - istruct -> vector */
A68_89 * KZBBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  LZBBCTR;  /* avoid structure result */
A68_VC  MZBBCTR_modulename A_UNUSED = {0};
A68_BOOL  NZBBCTR_decsmodule A_UNUSED = {0};
A68_BOOL  OZBBCTR_contextvoid A_UNUSED = {0};
A_PROC_ENTRY(translator);
 /* line 62: */
 /* line 64: */
{ 
XEBBCTR_currentimperative = A_EMPTY(YEBBCTR,26);
 /* line 65: */
ZEBBCTR_nextimperative = A_EMPTY(AFBBCTR,26);
 /* line 67: */
 /* line 73: */
 /* line 74: */
A_CLOSURE( BFBBCTR_read, CFBBCTR_read, DFBBCTR_read );
(( DFBBCTR_read * ) ( BFBBCTR_read.nonlocals )) -> ZEBBCTR_nextimperative = (&ZEBBCTR_nextimperative);
(( DFBBCTR_read * ) ( BFBBCTR_read.nonlocals )) -> XEBBCTR_currentimperative = (&XEBBCTR_currentimperative);
(( DFBBCTR_read * ) ( BFBBCTR_read.nonlocals )) -> Nextstreamimperative = Nextstreamimperative;
 /* line 81: */
 /* line 87: */
 /* line 88: */
A_CLOSURE( HFBBCTR_lookahead, IFBBCTR_lookahead, JFBBCTR_lookahead );
(( JFBBCTR_lookahead * ) ( HFBBCTR_lookahead.nonlocals )) -> ZEBBCTR_nextimperative = (&ZEBBCTR_nextimperative);
(( JFBBCTR_lookahead * ) ( HFBBCTR_lookahead.nonlocals )) -> Nextstreamimperative = Nextstreamimperative;
 /* line 94: */
 /* line 100: */
 /* line 103: */
 /* line 104: */
A_CLOSURE( SFBBCTR_module, TFBBCTR_module, UFBBCTR_module );
(( UFBBCTR_module * ) ( SFBBCTR_module.nonlocals )) -> BFBBCTR_read = BFBBCTR_read;
(( UFBBCTR_module * ) ( SFBBCTR_module.nonlocals )) -> XEBBCTR_currentimperative = (&XEBBCTR_currentimperative);
(( UFBBCTR_module * ) ( SFBBCTR_module.nonlocals )) -> HFBBCTR_lookahead = HFBBCTR_lookahead;
(( UFBBCTR_module * ) ( SFBBCTR_module.nonlocals )) -> ZEBBCTR_nextimperative = (&ZEBBCTR_nextimperative);
 /* line 1273: */
KZBBCTR = (&(A_NILCHECK(PCPACTR_currentmodinfo)->Name)) ;
RMAAOSF_scanto( ' ', A_ISVEC(JZBBCTR,KZBBCTR,32,A68_CHAR ), &LZBBCTR );
MZBBCTR_modulename = LZBBCTR;
 /* line 1275: */
NZBBCTR_decsmodule = ((*A_NILCHECK((&(A_NILCHECK(PCPACTR_currentmodinfo)->Type))))==(-1));
 /* line 1276: */
OZBBCTR_contextvoid = ((*A_NILCHECK((&(A_NILCHECK((&(A_NILCHECK(PCPACTR_currentmodinfo)->L)))->Level))))==0);
 /* line 1278: */
(void)(VZZACTR_initialise(Xsizes, (&XEBBCTR_currentimperative), Keptdecnos));
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
(void)(A_CALLPROC(SFBBCTR_module,(MZBBCTR_modulename, NZBBCTR_decsmodule, OZBBCTR_contextvoid),(MZBBCTR_modulename, NZBBCTR_decsmodule, OZBBCTR_contextvoid,(SFBBCTR_module).nonlocals)));
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
void OEBBCTR(void)   /* initialise DECS compiler */
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
YQQACTR();   /* USE oper */
BCHACTR();   /* USE moduletracer */
ANOACTR();   /* USE modules */
DNMACTR();   /* USE modes */
ZDAACTR();   /* USE incmode */
CIABCTR();   /* USE loops */
AAABCTR();   /* USE loads */
MZZACTR();   /* USE initialiser */
GKJACTR();   /* USE incvalue */
XFAACTR();   /* USE incoperfn */
UAAACTR();   /* USE incimperatives */
YMVACTR();   /* USE identifiers */
HPIACTR();   /* USE environment */
BPLACTR();   /* USE environ */
NGYACTR();   /* USE entryandreturn */
TCZACTR();   /* USE clauses */
THAACTR();   /* USE centities */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/compiler.a68";
A_config.translation_time = "Thu Nov  5 21:56:13 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "NEBBCTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 21:56:13 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS compiler);
(void)(UEAALIB_a68config(LGAALIB_configinfo, SEBBCTR));
 /* line 57: */
 /* line 58: */
 /* line 1292: */
A_PROC_EXIT(DECS compiler);
} 
#undef NL
/* end of translation of compiler.a68 */
