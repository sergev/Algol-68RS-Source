/* UNAME:BEBBCTR */
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
extern A68_VOID  ASQACTR_oper(struct A68t185 ,struct A68t71 **,struct A68t71 *);
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
extern A68_VOID  QIABCTR_for(struct A68t195 *,A68_INT ,struct A68t71 **);
extern A68_VOID  ESABCTR_forall(struct A68t199 ,struct A68t71 **);
extern A68_VOID  YCBBCTR_while(void);
extern A68_VOID  ADBBCTR_whiledo(struct A68t64 *);
extern A68_VOID  TDBBCTR_whileod(void);
extern A68_75  AEBBCTR_od;
/* --- End of imports from loops --- */


/* --- Imports from loads --- */
extern A68_VOID  NBABCTR_load(struct A68t191 ,A68_64 *);
/* --- End of imports from loads --- */


/* --- Imports from initialiser --- */
extern A68_VOID  JZZACTR_initialise(struct A68t116 *,struct A68t181 *,struct A68t172 );
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
extern A68_VOID  AYVACTR_ccdec(struct A68t157 ,struct A68t64 *,A68_INT );
extern A68_VOID  FZWACTR_environoflabel(A68_INT ,A68_123 *);
extern A68_VOID  JWVACTR_iddec(struct A68t157 ,struct A68t71 **);
extern A68_161  WPKACTR_ids;
extern A68_VOID  CNVACTR_initialdummydec(struct A68t157 );
extern A68_VOID  OSWACTR_labdec(struct A68t165 );
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
extern A68_VOID  JSYACTR_startmodule(A68_VC ,A68_VC );
extern A68_VOID  BWYACTR_endmodule(void);
extern A68_VOID  SPYACTR_startroutine(struct A68t122 ,struct A68t123 ,struct A68t124 ,A68_INT ,struct A68t64 *);
extern A68_VOID  LQYACTR_endroutine(struct A68t122 ,struct A68t64 *);
extern A68_VOID  WTYACTR_startdecsmodule(A68_VC ,A68_VC );
extern A68_VOID  WVYACTR_startprocmodule(struct A68t122 ,A68_VC ,A68_VC ,struct A68t64 *);
extern A68_VOID  BXYACTR_enddecsmodule(A68_VC );
/* --- End of imports from entryandreturn --- */


/* --- Imports from clauses --- */
extern A68_VOID  ZVZACTR_exit(A68_BOOL ,A68_BOOL ,struct A68t63 );
extern A68_VOID  VVZACTR_semi(A68_BOOL ,A68_BOOL );
extern A68_VOID  AHZACTR_begin(A68_BOOL ,A68_BOOL );
extern A68_VOID  MHZACTR_end(A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t55 *);
extern A68_VOID  ZLZACTR_then(struct A68t64 *);
extern A68_VOID  VMZACTR_else(void);
extern A68_VOID  SSZACTR_fi(A68_BOOL ,struct A68t63 );
extern A68_VOID  ONZACTR_casein(struct A68t64 *);
extern A68_VOID  VPZACTR_comma(A68_INT );
extern A68_VOID  ARZACTR_out(void);
extern A68_VOID  SRZACTR_esac(A68_BOOL ,struct A68t63 );
extern A68_VOID  TOZACTR_inu(struct A68t79 ,struct A68t64 *,struct A68t80 );
extern A68_VOID  RQZACTR_commau(struct A68t79 ,struct A68t64 ,struct A68t80 );
extern A68_75  ORZACTR_outu;
extern A68_76  OSZACTR_esacu;
extern A68_VOID  LTZACTR_optboolwarning(A68_BOOL ,struct A68t64 *);
extern A68_VOID  EVZACTR_optbooloper(void);
extern A68_60  KVZACTR_startseries;
extern A68_VOID  SVZACTR_endseries(struct A68t59 ,struct A68t63 ,struct A68t55 *,A68_BOOL ,A68_BOOL ,A68_BOOL );
extern A68_VOID  UEZACTR_evaluateresult(struct A68t71 **,struct A68t63 );
extern A68_VOID  BDZACTR_evaluatenoresult(struct A68t71 **);
extern A68_VOID  SGZACTR_evaluatesimpleenquiry(struct A68t71 **,struct A68t63 );
extern A68_VOID  SWZACTR_codeinsert(A68_VC ,A68_INT ,struct A68t71 *,A68_68 *);
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
extern void QHABCTR(void);   /* loops */
extern void OZZACTR(void);   /* loads */
extern void AZZACTR(void);   /* initialiser */
extern void GKJACTR(void);   /* incvalue */
extern void XFAACTR(void);   /* incoperfn */
extern void UAAACTR(void);   /* incimperatives */
extern void MMVACTR(void);   /* identifiers */
extern void HPIACTR(void);   /* environment */
extern void BPLACTR(void);   /* environ */
extern void BGYACTR(void);   /* entryandreturn */
extern void HCZACTR(void);   /* clauses */
extern void THAACTR(void);   /* centities */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_264   FEBBCTR = {"$Id: compiler.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,GEBBCTR,FEBBCTR,58)
static A68_267   BFBBCTR = {"Composition modules not supported"}; 
A_GISVEC(A68_VC ,CFBBCTR,BFBBCTR,33)
static A68_271   DGBBCTR = {"generator routine"}; 
static A68_272   EGBBCTR = {"!generator"}; 
A_GISVEC(A68_VC ,FGBBCTR,EGBBCTR,10)
A_GISVEC(A68_VC ,GGBBCTR,DGBBCTR,17)
static A68_274   KHBBCTR = {"COMPILER: fdec expected"}; 
A_GISVEC(A68_VC ,LHBBCTR,KHBBCTR,23)
static A68_275   MHBBCTR = {"COMPILER: fdec has unexpected mode"}; 
A_GISVEC(A68_VC ,NHBBCTR,MHBBCTR,34)
static A68_276   PHBBCTR = {"COMPILER: TRANSIDDEC (fdec) expected here"}; 
A_GISVEC(A68_VC ,QHBBCTR,PHBBCTR,41)
static A68_278   IIBBCTR = {"end OF answer ISNT NIL"}; 
A_GISVEC(A68_VC ,JIBBCTR,IIBBCTR,22)
static A68_280   XIBBCTR = {"exit not permitted in <enquiry clause>"}; 
A_GISVEC(A68_VC ,YIBBCTR,XIBBCTR,38)
static A68_287   DMBBCTR = {"fn OF starter = caseu fn"}; 
A_GISVEC(A68_VC ,EMBBCTR,DMBBCTR,24)
static A68_292   ZNBBCTR = {".data["}; 
A_GISVEC(A68_VC ,AOBBCTR,ZNBBCTR,6)
static A68_293   DOBBCTR = {""}; 
A_GISVEC(A68_VC ,EOBBCTR,DOBBCTR,0)
static A68_294   FOBBCTR = {"compiler:collateral clause - unknown selector"}; 
A_GISVEC(A68_VC ,GOBBCTR,FOBBCTR,45)
static A68_293   HOBBCTR = {""}; 
A_GISVEC(A68_VC ,IOBBCTR,HOBBCTR,0)
static A68_295   POBBCTR = {"compiler: collateral clause result is neither struct nor istruct nor void"}; 
A_GISVEC(A68_VC ,QOBBCTR,POBBCTR,73)
static A68_293   UOBBCTR = {""}; 
A_GISVEC(A68_VC ,WOBBCTR,UOBBCTR,0)
static A68_287   YOBBCTR = {"collateral clause result"}; 
A_GISVEC(A68_VC ,ZOBBCTR,YOBBCTR,24)
static A68_274   WPBBCTR = {"fn OF s = coll comma fn"}; 
A_GISVEC(A68_VC ,XPBBCTR,WPBBCTR,23)
static A68_296   LQBBCTR = {"fn OF t = end coll fn"}; 
A_GISVEC(A68_VC ,MQBBCTR,LQBBCTR,21)
static A68_297   FRBBCTR = {"fn OF s = do fn"}; 
A_GISVEC(A68_VC ,GRBBCTR,FRBBCTR,15)
static A68_89   YTBBCTR = {"no closed clause OPTBOOL results"}; 
A_GISVEC(A68_VC ,ZTBBCTR,YTBBCTR,32)
static A68_89   WUBBCTR = {"no choice clause OPTBOOL results"}; 
A_GISVEC(A68_VC ,XUBBCTR,WUBBCTR,32)
static A68_301   UWBBCTR = {"PROC modules not supported"}; 
A_GISVEC(A68_VC ,VWBBCTR,UWBBCTR,26)
static A68_302   YWBBCTR = {"rest OF value stack IS nil value list"}; 
A_GISVEC(A68_VC ,ZWBBCTR,YWBBCTR,37)
static A68_303   CXBBCTR = {"invalid imperative in 'phrase'"}; 
A_GISVEC(A68_VC ,DXBBCTR,CXBBCTR,30)
static A68_297   ZXBBCTR = {"module: ROUTINE"}; 
A_GISVEC(A68_VC ,AYBBCTR,ZXBBCTR,15)
static A68_271   FYBBCTR = {"generator routine"}; 
static A68_272   GYBBCTR = {"!generator"}; 
A_GISVEC(A68_VC ,HYBBCTR,GYBBCTR,10)
A_GISVEC(A68_VC ,IYBBCTR,FYBBCTR,17)
typedef struct   /* env of non-global proc */
{
A68_181 * NEBBCTR_nextimperative;
A68_181 * LEBBCTR_currentimperative;
A68_265  Nextstreamimperative;
} REBBCTR_read;
typedef struct   /* env of non-global proc */
{
A68_181 * NEBBCTR_nextimperative;
A68_265  Nextstreamimperative;
} XEBBCTR_lookahead;
typedef struct   /* env of non-global proc */
{
A68_75  PEBBCTR_read;
A68_181 * LEBBCTR_currentimperative;
A68_75  VEBBCTR_lookahead;
A68_181 * NEBBCTR_nextimperative;
} IFBBCTR_module;
typedef struct   /* env of non-global proc */
{
A68_75  PEBBCTR_read;
A68_181 * LEBBCTR_currentimperative;
A68_75  KFBBCTR_skiproutine;
} MFBBCTR_skiproutine;
typedef struct   /* env of non-global proc */
{
A68_75  VEBBCTR_lookahead;
A68_181 * NEBBCTR_nextimperative;
A68_75  PEBBCTR_read;
A68_75  KFBBCTR_skiproutine;
A68_181 * LEBBCTR_currentimperative;
A68_269 * JFBBCTR_phrase_;
} UFBBCTR_routine;
typedef struct   /* env of non-global proc */
{
A68_269 * JFBBCTR_phrase_;
A68_181 * LEBBCTR_currentimperative;
} XHBBCTR_serialclause;
typedef struct   /* env of non-global proc */
{
A68_269 * JFBBCTR_phrase_;
A68_181 * LEBBCTR_currentimperative;
} RIBBCTR_enquiryclause;
typedef struct   /* env of non-global proc */
{
A68_277  VHBBCTR_serialclause;
A68_75  PEBBCTR_read;
A68_181 * LEBBCTR_currentimperative;
A68_279  PIBBCTR_enquiryclause;
A68_269  DJBBCTR_phrase;
A68_270  SFBBCTR_routine;
} FJBBCTR_phrase;
typedef struct   /* env of non-global proc */
{
int dummy;
} RGBBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  NGBBCTR_paramcount;
A_PAD_INT(PAD_174)
} CHBBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_277  VHBBCTR_serialclause;
A68_75  PEBBCTR_read;
A68_181 * LEBBCTR_currentimperative;
A68_279  PIBBCTR_enquiryclause;
A68_269  DJBBCTR_phrase;
A68_71 ** GJBBCTR_valuestack;
} NJBBCTR_enclosedclause;
typedef struct   /* env of non-global proc */
{
A68_71 ** GJBBCTR_valuestack;
A68_269  DJBBCTR_phrase;
} DVBBCTR_optboolexpression;
typedef struct   /* env of non-global proc */
{
A68_277  VHBBCTR_serialclause;
} UJBBCTR_closedclause;
typedef struct   /* env of non-global proc */
{
A68_75  PEBBCTR_read;
A68_181 * LEBBCTR_currentimperative;
A68_279  PIBBCTR_enquiryclause;
A68_277  VHBBCTR_serialclause;
} LKBBCTR_choiceclause;
typedef struct   /* env of non-global proc */
{
A68_269  DJBBCTR_phrase;
A68_181 * LEBBCTR_currentimperative;
} ONBBCTR_collateralclause;
typedef struct   /* env of non-global proc */
{
A68_75  PEBBCTR_read;
A68_181 * LEBBCTR_currentimperative;
A68_279  PIBBCTR_enquiryclause;
A68_277  VHBBCTR_serialclause;
} SQBBCTR_loopbody;
typedef struct   /* env of non-global proc */
{
A68_75  PEBBCTR_read;
A68_181 * LEBBCTR_currentimperative;
A68_76  QQBBCTR_loopbody;
} SRBBCTR_loopclause;
typedef struct   /* env of non-global proc */
{
A68_75  PEBBCTR_read;
A68_181 * LEBBCTR_currentimperative;
A68_76  QQBBCTR_loopbody;
} QSBBCTR_forallclause;
typedef struct   /* env of non-global proc */
{
A68_75  PEBBCTR_read;
A68_181 * LEBBCTR_currentimperative;
A68_79 * MKBBCTR_uchoice;
} PKBBCTR_readuchoiceimperative;
typedef struct   /* env of non-global proc */
{
A68_75  PEBBCTR_read;
A68_181 * LEBBCTR_currentimperative;
} XKBBCTR_iddecimperative;
typedef struct   /* env of non-global proc */
{
A68_124  QMBBCTR_cons;
} UMBBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  TSBBCTR_controlcount;
A_PAD_INT(PAD_175)
} XSBBCTR_generator;

A68_VOID  KEBBCTR_translator(A68_265  Nextstreamimperative, A68_116 * Xsizes, A68_172  Keptdecnos);

A_STATIC A68_VOID  QEBBCTR_read(void *NonLocals);

A_STATIC A68_VOID  WEBBCTR_lookahead(void *NonLocals);

A_STATIC A68_VOID  AFBBCTR_compositionmodule(void);

A_STATIC A68_VOID  HFBBCTR_module(A68_VC  Modulename, A68_BOOL  Decsmodule, A68_BOOL  Prelude, void *NonLocals);

A_STATIC A68_VOID  LFBBCTR_skiproutine(void *NonLocals);

A_STATIC A68_VOID  TFBBCTR_routine(A68_122  Routine, void *NonLocals);

A_STATIC A68_VOID  QGBBCTR_generator(A68_BOOL  OGBBCTR_anonymous, A68_124  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BHBBCTR_generator(A68_BOOL  ZGBBCTR_anonymous, A68_124  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WHBBCTR_serialclause(A68_59  Properties, A68_63  Answer, void *NonLocals);

A_STATIC A68_VOID  QIBBCTR_enquiryclause(A68_63  Answer, void *NonLocals);

A_STATIC A68_VOID  EJBBCTR_phrase(A68_BOOL  Body, A68_63  Answer, A68_BOOL  Simple, void *NonLocals);

A_STATIC A68_VOID  MJBBCTR_enclosedclause(A68_189  Starter, A68_BOOL  Body, A68_63  Answer, A68_71 * Newvalue, void *NonLocals);

A_STATIC A68_VOID  TJBBCTR_closedclause(A68_189  Starter, A68_BOOL  Body, A68_63  Answer, void *NonLocals);

A_STATIC A68_VOID  KKBBCTR_choiceclause(A68_189  Starter, A68_BOOL  Body, A68_63  Answer, void *NonLocals);

A_STATIC A68_VOID  OKBBCTR_readuchoiceimperative(void *NonLocals);

A_STATIC A68_VOID  WKBBCTR_iddecimperative(A68_157  *ReturnedValue, void *NonLocals);

A_STATIC A68_64 * PLBBCTR_assignment(A68_64 * NLBBCTR_anonymous, A68_64  OLBBCTR_anonymous);

A_STATIC A68_65 * ULBBCTR_assignment(A68_65 * SLBBCTR_anonymous, A68_65  TLBBCTR_anonymous);

A_STATIC A68_VOID  TMBBCTR_generator(A68_BOOL  RMBBCTR_anonymous, A68_80  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NNBBCTR_collateralclause(A68_189  Starter, A68_63  Answer, void *NonLocals);

A_STATIC A68_VOID  SNBBCTR_collateralunitassignee(A68_VC  Temp, A68_290  Selector, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  RQBBCTR_loopbody(A68_BOOL  Body, A68_63  Answer, void *NonLocals);

A_STATIC A68_VOID  RRBBCTR_loopclause(A68_189  Starter, A68_BOOL  Body, A68_63  Answer, A68_71 ** Frobytlist, void *NonLocals);

A_STATIC A68_VOID  PSBBCTR_forallclause(A68_189  Starter, A68_BOOL  Body, A68_63  Answer, A68_71 ** Foralllist, void *NonLocals);

A_STATIC A68_VOID  WSBBCTR_generator(A68_BOOL  USBBCTR_anonymous, A68_199  *ReturnedValue, void *NonLocals);

A_STATIC A68_71 * UTBBCTR_assignment(A68_71 * STBBCTR_anonymous, A68_71  TTBBCTR_anonymous);

A_STATIC A68_VOID  CVBBCTR_optboolexpression(A68_INT  Warn, void *NonLocals);

A_STATIC A68_65 * ULBBCTR_assignment(A68_65 * SLBBCTR_anonymous, A68_65  TLBBCTR_anonymous)
{ 
A68_65  VLBBCTR;  /* united object - for case conformity */
A68_VC  WLBBCTR_anonymous A_UNUSED = {0};
A68_VC  XLBBCTR;  /* OPERATORS - copy to flex */
A68_286 * YLBBCTR;  /* YIELD */
A68_65 * ZLBBCTR;  /* clause result */
{ 
(*SLBBCTR_anonymous) = TLBBCTR_anonymous;
VLBBCTR = TLBBCTR_anonymous ;
switch ( VLBBCTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
WLBBCTR_anonymous = (VLBBCTR.data.mode6);
YLBBCTR = &(SLBBCTR_anonymous-> data.mode6) ;
(void)((*YLBBCTR) = A_VCOPY(WLBBCTR_anonymous,XLBBCTR,A68_CHAR ));
break;
default: 
/*SKIP*/;
break;
} 
ZLBBCTR = SLBBCTR_anonymous;
} 
return( ZLBBCTR );
} 
#undef NL

A_STATIC A68_VOID  OKBBCTR_readuchoiceimperative(void *NonLocals)
#define NL(x) (((PKBBCTR_readuchoiceimperative *)NonLocals)->x)
{ 
A68_181  QKBBCTR;  /* united object - for case conformity */
A68_79  RKBBCTR_u A_UNUSED = {0};
A68_BOOL  SKBBCTR;  /* clause result */
A68_165  TKBBCTR_l A_UNUSED = {0};
A68_BOOL  UKBBCTR;  /* clause result */
A_PROC_ENTRY(readuchoiceimperative);
for ( ;; )
{ 
 /* line 460: */
(void)(A_CALLPROC(NL(PEBBCTR_read),(),((NL(PEBBCTR_read)).nonlocals)));
 /* line 461: */
 /* line 462: */
QKBBCTR = (*NL(LEBBCTR_currentimperative)) ;
switch ( QKBBCTR.mode )
{ 
case 15: /* STRUCT(INT,BITS,INT)  */
RKBBCTR_u = (QKBBCTR.data.mode15);
{ 
(*NL(MKBBCTR_uchoice)) = RKBBCTR_u;
 /* line 463: */
SKBBCTR = A68_FALSE;
} 
break;
case 14: /* STRUCT(REF MODE26,INT,INT,BOOL)  */
TKBBCTR_l = (QKBBCTR.data.mode14);
{ 
(void)(OSWACTR_labdec(TKBBCTR_l));
 /* line 464: */
 /* line 465: */
SKBBCTR = A68_TRUE;
} 
break;
default: 
(void)(SXIACTR_terminalerror(668));
 /* line 466: */
 /* line 467: */
 /* line 468: */
SKBBCTR = A68_FALSE;
break;
} 
 /* line 469: */
UKBBCTR = SKBBCTR;
if ( !UKBBCTR ) break;
/*SKIP*/;
}
A_PROC_EXIT(readuchoiceimperative);
return;
} 
#undef NL

A_STATIC A68_VOID  WKBBCTR_iddecimperative(A68_157  *ReturnedValue, void *NonLocals)
#define NL(x) (((XKBBCTR_iddecimperative *)NonLocals)->x)
{ 
A68_181  YKBBCTR;  /* united object - for case conformity */
A68_157  ZKBBCTR_iddec A_UNUSED = {0};
A68_157  ALBBCTR;  /* clause result */
A68_157  BLBBCTR = {0};  /* OPERATORS - skip to mode */
A_PROC_ENTRY(iddecimperative);
{ 
(void)(A_CALLPROC(NL(PEBBCTR_read),(),((NL(PEBBCTR_read)).nonlocals)));
 /* line 476: */
 /* line 477: */
YKBBCTR = (*NL(LEBBCTR_currentimperative)) ;
switch ( YKBBCTR.mode )
{ 
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
ZKBBCTR_iddec = (YKBBCTR.data.mode11);
 /* line 478: */
 /* line 479: */
ALBBCTR = ZKBBCTR_iddec;
break;
default: 
(void)(SXIACTR_terminalerror(669));
 /* line 480: */
 /* line 481: */
ALBBCTR = BLBBCTR;
break;
} 
} 
A_PROC_EXIT(iddecimperative);
*ReturnedValue = (ALBBCTR);
return;
} 
#undef NL

A_STATIC A68_64 * PLBBCTR_assignment(A68_64 * NLBBCTR_anonymous, A68_64  OLBBCTR_anonymous)
{ 
A68_INT * QLBBCTR;  /* YIELD */
A68_BITS * RLBBCTR;  /* YIELD */
A68_64 * AMBBCTR;  /* clause result */
{ 
QLBBCTR = (&(NLBBCTR_anonymous->Mode)) ;
(*QLBBCTR) = OLBBCTR_anonymous.Mode;
RLBBCTR = (&(NLBBCTR_anonymous->Info)) ;
(*RLBBCTR) = OLBBCTR_anonymous.Info;
(void)(ULBBCTR_assignment((&(NLBBCTR_anonymous->Extra)), OLBBCTR_anonymous.Extra));
AMBBCTR = NLBBCTR_anonymous;
} 
return( AMBBCTR );
} 
#undef NL

A_STATIC A68_VOID  TMBBCTR_generator(A68_BOOL  RMBBCTR_anonymous, A68_80  *ReturnedValue, void *NonLocals)
#define NL(x) (((UMBBCTR_generator *)NonLocals)->x)
{ 
A68_80  VMBBCTR;  /* clause result */
A68_80  WMBBCTR;  /* OPERATORS - dynamic generator */
{ 
WMBBCTR.dim[0].upb = NL(QMBBCTR_cons).upb ;
WMBBCTR.dim[0].lwb = 1 ;
(void)A_1INITSTRIDES(WMBBCTR) ;
( RMBBCTR_anonymous? A_R1LOC(A68_BOOL ,WMBBCTR): A_R1HEAP(A68_BOOL ,WMBBCTR) );
VMBBCTR = WMBBCTR;
} 
*ReturnedValue = (VMBBCTR);
return;
} 
#undef NL
 /* line 628: */

A_STATIC A68_VOID  SNBBCTR_collateralunitassignee(A68_VC  Temp, A68_290  Selector, A68_VC  *ReturnedValue)
{ 
A68_290  TNBBCTR;  /* united object - for case conformity */
A68_201 * UNBBCTR_sf A_UNUSED = {0};
A68_VC  VNBBCTR;  /* clause result */
A68_VC  WNBBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XNBBCTR;  /* avoid structure result */
A68_INT  YNBBCTR_i A_UNUSED = {0};
A68_VC  BOBBCTR;  /* avoid structure result */
A68_VC  COBBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(collateralunitassignee);
 /* line 635: */
 /* line 636: */
TNBBCTR = Selector ;
switch ( TNBBCTR.mode )
{ 
case 1: /* REF STRUCT(INT,INT,MODE89)  */
UNBBCTR_sf = (TNBBCTR.data.mode1);
 /* line 637: */
 /* line 638: */
RFNACTR_cfieldname( UNBBCTR_sf, &XNBBCTR );
VNBBCTR = A_VC_PLUS(A_VC_PLUS(Temp,A_HVEC(WNBBCTR,'.',A68_CHAR )),XNBBCTR);
break;
case 2: /* INT */
YNBBCTR_i = (TNBBCTR.data.mode2);
 /* line 639: */
 /* line 640: */
ROAAOSF_whole( (YNBBCTR_i-1), 0, &BOBBCTR );
VNBBCTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(Temp,AOBBCTR),BOBBCTR),A_HVEC(COBBCTR,']',A68_CHAR ));
break;
case 3: /* VOID */
 /* line 641: */
 /* line 642: */
VNBBCTR = EOBBCTR;
break;
default: 
(void)(WXIACTR_assert(GOBBCTR, A68_FALSE));
 /* line 643: */
VNBBCTR = IOBBCTR;
break;
} 
A_PROC_EXIT(collateralunitassignee);
*ReturnedValue = (VNBBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  WSBBCTR_generator(A68_BOOL  USBBCTR_anonymous, A68_199  *ReturnedValue, void *NonLocals)
#define NL(x) (((XSBBCTR_generator *)NonLocals)->x)
{ 
A68_199  YSBBCTR;  /* clause result */
A68_199  ZSBBCTR;  /* OPERATORS - dynamic generator */
{ 
ZSBBCTR.upb = NL(TSBBCTR_controlcount) ;
( USBBCTR_anonymous? A_VLOC(A68_196 ,ZSBBCTR): A_VHEAP(A68_196 ,ZSBBCTR) );
YSBBCTR = ZSBBCTR;
} 
*ReturnedValue = (YSBBCTR);
return;
} 
#undef NL
 /* line 396: */
 /* line 398: */

A_STATIC A68_VOID  TJBBCTR_closedclause(A68_189  Starter, A68_BOOL  Body, A68_63  Answer, void *NonLocals)
#define NL(x) (((UJBBCTR_closedclause *)NonLocals)->x)
{ 
A68_59  VJBBCTR;  /* collateral clause result */
A68_BITS  WJBBCTR;  /* ADICOPS - >= */
A68_INT  XJBBCTR;  /* ADICOPS - ABS INT */
A68_59  YJBBCTR_properties A_UNUSED = {0};
A68_63  ZJBBCTR_ccanswer A_UNUSED = {0};
A68_BITS  AKBBCTR;  /* ADICOPS - >= */
A68_BOOL  BKBBCTR_seriescontainsexit A_UNUSED = {0};
A68_55  CKBBCTR;  /* collateral clause result */
A68_55 * DKBBCTR;  /* YIELD */
A68_55 ** EKBBCTR;  /* YIELD */
A68_BITS  FKBBCTR;  /* ADICOPS - >= */
A_PROC_ENTRY(closedclause);
 /* line 404: */
 /* line 406: */
{ 
 /* line 407: */
WJBBCTR = Starter.Props ;
VJBBCTR.Block = (A_LB_GE(WJBBCTR,WCAACTR_decbit)&(!Body));
 /* line 408: */
XJBBCTR = Starter.Resultmode ;
VJBBCTR.Dynamicresult = OTMACTR_dynamic(A_ABS(XJBBCTR));
 /* line 410: */
VJBBCTR.Discardeddynamicresult = ((A68_BITS )(Starter.Props&MDAACTR_dybits)!=0X0U);
VJBBCTR.Type = Starter.Fn;
YJBBCTR_properties = VJBBCTR;
 /* line 411: */
ZJBBCTR_ccanswer = Answer;
 /* line 412: */
 /* line 413: */
AKBBCTR = Starter.Props ;
BKBBCTR_seriescontainsexit = A_LB_GE(AKBBCTR,TCAACTR_exitbit);
 /* line 414: */
 /* line 415: */
 /* line 416: */
if (BKBBCTR_seriescontainsexit)
{ 
 /* line 417: */
CKBBCTR.Name = QIMACTR_newuniquename();
 /* line 418: */
CKBBCTR.Set = A68_TRUE;
DKBBCTR = A_HEAP(A68_55 ) ;
(void)((*DKBBCTR) = CKBBCTR) ;
EKBBCTR = (&((&ZJBBCTR_ccanswer)->End)) ;
(*EKBBCTR) = DKBBCTR;
} 
 /* line 419: */
FKBBCTR = Starter.Props ;
(void)(AHZACTR_begin(A_LB_GE(FKBBCTR,ADAACTR_labbit), Body));
 /* line 420: */
(void)(A_CALLPROC(NL(VHBBCTR_serialclause),(YJBBCTR_properties, ZJBBCTR_ccanswer),(YJBBCTR_properties, ZJBBCTR_ccanswer,(NL(VHBBCTR_serialclause)).nonlocals)));
 /* line 421: */
 /* line 422: */
 /* line 423: */
 /* line 424: */
 /* line 426: */
 /* line 427: */
(void)(MHZACTR_end(YJBBCTR_properties.Dynamicresult, BKBBCTR_seriescontainsexit, Body, (*(&((&ZJBBCTR_ccanswer)->End)))));
} 
A_PROC_EXIT(closedclause);
return;
} 
#undef NL
 /* line 431: */
 /* line 433: */

A_STATIC A68_VOID  KKBBCTR_choiceclause(A68_189  Starter, A68_BOOL  Body, A68_63  Answer, void *NonLocals)
#define NL(x) (((LKBBCTR_choiceclause *)NonLocals)->x)
{ 
A68_79  MKBBCTR_uchoice A_UNUSED = {0};
A68_75  NKBBCTR_readuchoiceimperative;   /* proc value of non-global proc */
A68_283  VKBBCTR_iddecimperative;   /* proc value of non-global proc */
A68_INT  CLBBCTR;  /* ADICOPS - ABS INT */
A68_INT  DLBBCTR_resultmode A_UNUSED = {0};
A68_BOOL  ELBBCTR_discardlevelactivated A_UNUSED = {0};
A68_INT  FLBBCTR_enquirytype A_UNUSED = {0};
A68_64  GLBBCTR_enquiry A_UNUSED = {0};
A68_80  HLBBCTR_case A_UNUSED = {0};
A68_55 * ILBBCTR_endofchoiceclause A_UNUSED = {0};
A68_BOOL  JLBBCTR_elsepart A_UNUSED = {0};
A68_BOOL  KLBBCTR_outpart A_UNUSED = {0};
A68_64  LLBBCTR;  /* collateral clause result */
A68_65  MLBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_64  BMBBCTR;  /* collateral clause result */
A68_65  CMBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  FMBBCTR;  /* ADICOPS - ABS INT */
A68_INT  GMBBCTR_umode A_UNUSED = {0};
A68_64  HMBBCTR;  /* collateral clause result */
A68_65  IMBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_63  JMBBCTR;  /* collateral clause result */
A68_63  KMBBCTR;  /* collateral clause result */
A68_63  LMBBCTR_seriesanswer A_UNUSED = {0};
A68_59  MMBBCTR_seriesproperties A_UNUSED = {0};
A68_181  NMBBCTR;  /* united object - for case conformity */
A68_188  OMBBCTR_s A_UNUSED = {0};
A68_124  PMBBCTR;  /* avoid structure result */
A68_124  QMBBCTR_cons A_UNUSED = {0};
A68_288  SMBBCTR_generator;   /* proc value of non-global proc */
A68_80  XMBBCTR;  /* avoid structure result */
A68_BOOL * YMBBCTR_c A_UNUSED = {0};
A68_INT  ZMBBCTR;  /* forall loop counter */
A68_BITS  ANBBCTR;  /* ADICOPS - >= */
A68_157  BNBBCTR;  /* avoid structure result */
A68_BITS  CNBBCTR;  /* ADICOPS - >= */
A68_157  DNBBCTR;  /* avoid structure result */
A68_59  ENBBCTR;  /* collateral clause result */
A68_BITS  FNBBCTR;  /* ADICOPS - >= */
A68_INT  GNBBCTR;  /* ADICOPS - ABS INT */
A68_BOOL  HNBBCTR;  /* clause result */
A68_190  INBBCTR_t A_UNUSED = {0};
A68_BOOL  JNBBCTR;  /* clause result */
A_PROC_ENTRY(choiceclause);
 /* line 445: */
 /* line 447: */
{ 
 /* line 452: */
 /* line 459: */
A_CLOSURE( NKBBCTR_readuchoiceimperative, OKBBCTR_readuchoiceimperative, PKBBCTR_readuchoiceimperative );
(( PKBBCTR_readuchoiceimperative * ) ( NKBBCTR_readuchoiceimperative.nonlocals )) -> PEBBCTR_read = NL(PEBBCTR_read);
(( PKBBCTR_readuchoiceimperative * ) ( NKBBCTR_readuchoiceimperative.nonlocals )) -> LEBBCTR_currentimperative = NL(LEBBCTR_currentimperative);
(( PKBBCTR_readuchoiceimperative * ) ( NKBBCTR_readuchoiceimperative.nonlocals )) -> MKBBCTR_uchoice = (&MKBBCTR_uchoice);
 /* line 471: */
 /* line 475: */
A_CLOSURE( VKBBCTR_iddecimperative, WKBBCTR_iddecimperative, XKBBCTR_iddecimperative );
(( XKBBCTR_iddecimperative * ) ( VKBBCTR_iddecimperative.nonlocals )) -> PEBBCTR_read = NL(PEBBCTR_read);
(( XKBBCTR_iddecimperative * ) ( VKBBCTR_iddecimperative.nonlocals )) -> LEBBCTR_currentimperative = NL(LEBBCTR_currentimperative);
 /* line 483: */
CLBBCTR = Starter.Resultmode ;
DLBBCTR_resultmode = A_ABS(CLBBCTR);
 /* line 484: */
ELBBCTR_discardlevelactivated = A68_FALSE;
 /* line 485: */
 /* line 486: */
 /* line 487: */
 /* line 488: */
ILBBCTR_endofchoiceclause = Answer.End;
 /* line 489: */
JLBBCTR_elsepart = A68_FALSE;
 /* line 490: */
KLBBCTR_outpart = A68_FALSE;
 /* line 492: */
 /* line 493: */
if (Starter.Fn==EBAACTR_iffn)
{ 
LLBBCTR.Mode = WEAACTR_boolmode;
LLBBCTR.Info = PKJACTR_defaultinfo;
LLBBCTR.Extra = A_EMPTY(MLBBCTR,3);
(void)(PLBBCTR_assignment((&GLBBCTR_enquiry), LLBBCTR));
 /* line 494: */
 /* line 496: */
FLBBCTR_enquirytype = ILJACTR_enquiryresult;
} 
else
{ 
 /* line 497: */
if (Starter.Fn==FBAACTR_casefn)
{ 
BMBBCTR.Mode = EFAACTR_intmode;
BMBBCTR.Info = PKJACTR_defaultinfo;
BMBBCTR.Extra = A_EMPTY(CMBBCTR,3);
(void)(PLBBCTR_assignment((&GLBBCTR_enquiry), BMBBCTR));
 /* line 498: */
 /* line 500: */
FLBBCTR_enquirytype = ILJACTR_enquiryresult;
} 
else
{ 
(void)(WXIACTR_assert(EMBBCTR, (Starter.Fn==GBAACTR_caseufn)));
 /* line 501: */
FMBBCTR = Starter.Mode ;
GMBBCTR_umode = A_ABS(FMBBCTR);
 /* line 502: */
HMBBCTR.Mode = GMBBCTR_umode;
HMBBCTR.Info = PKJACTR_defaultinfo;
HMBBCTR.Extra = A_EMPTY(IMBBCTR,3);
(void)(PLBBCTR_assignment((&GLBBCTR_enquiry), HMBBCTR));
 /* line 503: */
 /* line 505: */
FLBBCTR_enquirytype = ILJACTR_enquiryresult;
} 
} 
 /* line 507: */
JMBBCTR.Value = (&GLBBCTR_enquiry);
JMBBCTR.End = (A68_55 *)A68_NIL;
JMBBCTR.Type = FLBBCTR_enquirytype;
(void)(A_CALLPROC(NL(PIBBCTR_enquiryclause),(JMBBCTR),(JMBBCTR,(NL(PIBBCTR_enquiryclause)).nonlocals)));
 /* line 509: */
 /* line 510: */
 /* line 511: */
KMBBCTR.Value = Answer.Value;
 /* line 513: */
KMBBCTR.End = ILBBCTR_endofchoiceclause;
KMBBCTR.Type = Answer.Type;
LMBBCTR_seriesanswer = KMBBCTR;
 /* line 514: */
 /* line 516: */
for ( ;; )
{ 
 /* line 517: */
NMBBCTR = (*NL(LEBBCTR_currentimperative)) ;
switch ( NMBBCTR.mode )
{ 
case 20: /* STRUCT(INT,INT,BITS,INT)  */
OMBBCTR_s = (NMBBCTR.data.mode20);
 /* line 518: */
{ 
 /* line 519: */
 /* line 521: */
switch ( OMBBCTR_s.Fn )
{ 
case 1: 
 /* line 522: */
{ 
(void)(JLBBCTR_elsepart = (OMBBCTR_s.Param==2));
 /* line 523: */
 /* line 524: */
 /* line 527: */
(void)(ZLZACTR_then((&GLBBCTR_enquiry)));
} 
break;
case 2: 
 /* line 528: */
{ 
(void)(KLBBCTR_outpart = (OMBBCTR_s.Param<0));
 /* line 529: */
 /* line 530: */
 /* line 533: */
(void)(ONZACTR_casein((&GLBBCTR_enquiry)));
} 
break;
case 3: 
 /* line 534: */
{ 
(void)(KLBBCTR_outpart = (OMBBCTR_s.Param<0));
 /* line 535: */
(void)(A_CALLPROC(NKBBCTR_readuchoiceimperative,(),((NKBBCTR_readuchoiceimperative).nonlocals)));
 /* line 536: */
A_CALLPROC(YVMACTR_constituents,((*(&((&GLBBCTR_enquiry)->Mode))), &PMBBCTR),((*(&((&GLBBCTR_enquiry)->Mode))), &PMBBCTR,(YVMACTR_constituents).nonlocals));
QMBBCTR_cons = PMBBCTR;
 /* line 537: */
 /* line 538: */
A_CLOSURE( SMBBCTR_generator, TMBBCTR_generator, UMBBCTR_generator );
(( UMBBCTR_generator * ) ( SMBBCTR_generator.nonlocals )) -> QMBBCTR_cons = QMBBCTR_cons;
A_CALLPROC(SMBBCTR_generator,(A68_TRUE, &XMBBCTR),(A68_TRUE, &XMBBCTR,(SMBBCTR_generator).nonlocals));
HLBBCTR_case = XMBBCTR;
 /* line 539: */
 /* line 540: */
ZMBBCTR = HLBBCTR_case.dim[0].upb - HLBBCTR_case.dim[0].lwb;
YMBBCTR_c = HLBBCTR_case.data;
for (;ZMBBCTR-- >= 0;
(YMBBCTR_c += HLBBCTR_case.dim[0].stride
) )
{
(*YMBBCTR_c) = A68_FALSE;
}
 /* line 541: */
 /* line 542: */
 /* line 543: */
 /* line 545: */
(void)(TOZACTR_inu(MKBBCTR_uchoice, (&GLBBCTR_enquiry), HLBBCTR_case));
 /* line 546: */
 /* line 547: */
 /* line 548: */
ANBBCTR = (*(&((&MKBBCTR_uchoice)->Props))) ;
if (A_LB_GE(ANBBCTR,WCAACTR_decbit))
{ 
 /* line 549: */
 /* line 551: */
 /* line 552: */
 /* line 553: */
 /* line 556: */
A_CALLPROC(VKBBCTR_iddecimperative,( &BNBBCTR),( &BNBBCTR,(VKBBCTR_iddecimperative).nonlocals));
(void)(AYVACTR_ccdec(BNBBCTR, (&GLBBCTR_enquiry), (*(&((&MKBBCTR_uchoice)->Param)))));
} 
} 
break;
case 4: 
 /* line 558: */
(void)(VPZACTR_comma(OMBBCTR_s.Param));
break;
case 5: 
 /* line 559: */
{ 
(void)(A_CALLPROC(NKBBCTR_readuchoiceimperative,(),((NKBBCTR_readuchoiceimperative).nonlocals)));
 /* line 560: */
 /* line 561: */
 /* line 562: */
 /* line 564: */
(void)(RQZACTR_commau(MKBBCTR_uchoice, GLBBCTR_enquiry, HLBBCTR_case));
 /* line 565: */
 /* line 566: */
 /* line 567: */
CNBBCTR = (*(&((&MKBBCTR_uchoice)->Props))) ;
if (A_LB_GE(CNBBCTR,WCAACTR_decbit))
{ 
 /* line 568: */
 /* line 570: */
 /* line 571: */
 /* line 572: */
 /* line 575: */
A_CALLPROC(VKBBCTR_iddecimperative,( &DNBBCTR),( &DNBBCTR,(VKBBCTR_iddecimperative).nonlocals));
(void)(AYVACTR_ccdec(DNBBCTR, (&GLBBCTR_enquiry), (*(&((&MKBBCTR_uchoice)->Param)))));
} 
} 
break;
case 6: 
 /* line 577: */
(void)(SXIACTR_terminalerror(665));
break;
case 7: 
 /* line 579: */
(void)(ARZACTR_out());
break;
case 8: 
 /* line 583: */
(void)(A_CALLPROC(ORZACTR_outu,(),((ORZACTR_outu).nonlocals)));
break;
case 9: 
 /* line 584: */
(void)(VMZACTR_else());
break;
default: 
 /* line 585: */
(void)(SXIACTR_terminalerror(665));
break;
} 
 /* line 587: */
 /* line 588: */
 /* line 589: */
FNBBCTR = OMBBCTR_s.Props ;
ENBBCTR.Block = A_LB_GE(FNBBCTR,WCAACTR_decbit);
 /* line 590: */
GNBBCTR = OMBBCTR_s.Mode ;
ENBBCTR.Dynamicresult = OTMACTR_dynamic(A_ABS(GNBBCTR));
 /* line 591: */
ENBBCTR.Discardeddynamicresult = ((A68_BITS )(OMBBCTR_s.Props&MDAACTR_dybits)!=0X0U);
 /* line 592: */
ENBBCTR.Type = (OMBBCTR_s.Fn+LBAACTR_separatoroffset);
MMBBCTR_seriesproperties = ENBBCTR;
 /* line 593: */
 /* line 594: */
 /* line 596: */
HNBBCTR = A68_TRUE;
} 
break;
case 22: /* STRUCT(INT,BITS)  */
INBBCTR_t = (NMBBCTR.data.mode22);
 /* line 597: */
{ 
 /* line 598: */
 /* line 599: */
if (INBBCTR_t.Fn==CCAACTR_esacufn)
{ 
 /* line 600: */
(void)(A_CALLPROC(OSZACTR_esacu,(KLBBCTR_outpart, Answer),(KLBBCTR_outpart, Answer,(OSZACTR_esacu).nonlocals)));
} 
else
{ 
 /* line 601: */
 /* line 602: */
if (INBBCTR_t.Fn==BCAACTR_esacfn)
{ 
 /* line 603: */
 /* line 604: */
(void)(SRZACTR_esac(KLBBCTR_outpart, Answer));
} 
else
{ 
 /* line 605: */
(void)(SSZACTR_fi(JLBBCTR_elsepart, Answer));
} 
} 
 /* line 607: */
 /* line 608: */
 /* line 609: */
 /* line 610: */
HNBBCTR = A68_FALSE;
} 
break;
default: 
(void)(SXIACTR_terminalerror(657));
 /* line 611: */
 /* line 612: */
 /* line 613: */
HNBBCTR = A68_FALSE;
break;
} 
 /* line 614: */
JNBBCTR = HNBBCTR;
if ( !JNBBCTR ) break;
 /* line 615: */
(void)(A_CALLPROC(NL(VHBBCTR_serialclause),(MMBBCTR_seriesproperties, LMBBCTR_seriesanswer),(MMBBCTR_seriesproperties, LMBBCTR_seriesanswer,(NL(VHBBCTR_serialclause)).nonlocals)));
}
 /* line 616: */
} 
A_PROC_EXIT(choiceclause);
return;
} 
#undef NL

A_STATIC A68_VOID  NNBBCTR_collateralclause(A68_189  Starter, A68_63  Answer, void *NonLocals)
#define NL(x) (((ONBBCTR_collateralclause *)NonLocals)->x)
{ 
A68_INT  JOBBCTR;  /* ADICOPS - ABS INT */
A68_INT  KOBBCTR_resultmode A_UNUSED = {0};
A68_INT  LOBBCTR_resulttype A_UNUSED = {0};
A68_BOOL  MOBBCTR_structure A_UNUSED = {0};
A68_BOOL  NOBBCTR_istruct A_UNUSED = {0};
A68_BOOL  OOBBCTR_void A_UNUSED = {0};
A68_209  ROBBCTR_fields A_UNUSED = {0};
A68_209  SOBBCTR;  /* avoid structure result */
A68_64 * TOBBCTR_collateralvalue A_UNUSED = {0};
A68_VC  VOBBCTR;  /* clause result */
A68_65  XOBBCTR;  /* united object - for case conformity */
A68_68  APBBCTR;  /* avoid structure result */
A68_65  BPBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  CPBBCTR;  /* avoid structure result */
A68_VC  DPBBCTR_collateraltemp A_UNUSED = {0};
A68_64  EPBBCTR;  /* collateral clause result */
A68_INT  FPBBCTR;  /* ADICOPS - ABS INT */
A68_290  GPBBCTR;  /* clause result */
A68_INT  HPBBCTR;  /* YIELD */
A68_290  IPBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_201 * JPBBCTR;  /* YIELD */
A68_290  KPBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  LPBBCTR;  /* YIELD */
A68_290  MPBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  NPBBCTR;  /* avoid structure result */
A68_65  OPBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_64  PPBBCTR_phrasevalue A_UNUSED = {0};
A68_55  QPBBCTR_endofphrase A_UNUSED = {0};
A68_63  RPBBCTR;  /* collateral clause result */
A68_63  SPBBCTR_phraseanswer A_UNUSED = {0};
A68_INT  TPBBCTR_i A_UNUSED = {0};
A68_181  UPBBCTR;  /* united object - for case conformity */
A68_188  VPBBCTR_s A_UNUSED = {0};
A68_64  YPBBCTR;  /* collateral clause result */
A68_INT  ZPBBCTR;  /* ADICOPS - ABS INT */
A68_290  AQBBCTR;  /* clause result */
A68_INT  BQBBCTR;  /* YIELD */
A68_290  CQBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_201 * DQBBCTR;  /* YIELD */
A68_290  EQBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  FQBBCTR;  /* YIELD */
A68_290  GQBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  HQBBCTR;  /* avoid structure result */
A68_65  IQBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_BOOL  JQBBCTR;  /* clause result */
A68_190  KQBBCTR_t A_UNUSED = {0};
A68_BOOL  NQBBCTR;  /* clause result */
A_PROC_ENTRY(collateralclause);
 /* line 623: */
 /* line 624: */
{ 
 /* line 625: */
 /* line 626: */
 /* line 645: */
JOBBCTR = Starter.Resultmode ;
KOBBCTR_resultmode = A_ABS(JOBBCTR);
 /* line 646: */
LOBBCTR_resulttype = IOMACTR_modetype(KOBBCTR_resultmode);
 /* line 647: */
MOBBCTR_structure = (LOBBCTR_resulttype==IEAACTR_struct);
 /* line 648: */
NOBBCTR_istruct = (LOBBCTR_resulttype==JEAACTR_istruct);
 /* line 649: */
OOBBCTR_void = (KOBBCTR_resultmode==UEAACTR_voidmode);
 /* line 651: */
 /* line 652: */
 /* line 653: */
(void)(WXIACTR_assert(QOBBCTR, ((MOBBCTR_structure|NOBBCTR_istruct)|OOBBCTR_void)));
 /* line 655: */
 /* line 656: */
 /* line 657: */
if (MOBBCTR_structure)
{ 
 /* line 658: */
EVMACTR_structfields( KOBBCTR_resultmode, &SOBBCTR );
ROBBCTR_fields = SOBBCTR;
} 
 /* line 660: */
TOBBCTR_collateralvalue = Answer.Value;
 /* line 667: */
 /* line 668: */
 /* line 669: */
 /* line 670: */
if ((*(&(TOBBCTR_collateralvalue->Mode)))==UEAACTR_voidmode)
{ 
VOBBCTR = WOBBCTR;
} 
else
{ 
 /* line 671: */
XOBBCTR = (*(&(TOBBCTR_collateralvalue->Extra))) ;
switch ( XOBBCTR.mode )
{ 
case 3: /* VOID */
 /* line 673: */
 /* line 675: */
 /* line 676: */
 /* line 677: */
QMOACTR_declarectemporary( (*(&(TOBBCTR_collateralvalue->Mode))), ZOBBCTR, &APBBCTR );
(void)(ULBBCTR_assignment((&(TOBBCTR_collateralvalue->Extra)), A_UNITE(BPBBCTR,mode5,5,APBBCTR)));
break;
default: 
/*SKIP*/;
break;
} 
 /* line 678: */
 /* line 679: */
UZPACTR_getcfragment( TOBBCTR_collateralvalue, &CPBBCTR );
VOBBCTR = CPBBCTR;
} 
DPBBCTR_collateraltemp = VOBBCTR;
 /* line 682: */
 /* line 683: */
 /* line 684: */
FPBBCTR = Starter.Mode ;
EPBBCTR.Mode = A_ABS(FPBBCTR);
 /* line 686: */
EPBBCTR.Info = PKJACTR_defaultinfo;
 /* line 687: */
if (MOBBCTR_structure)
{ 
 /* line 688: */
HPBBCTR = 1 ;
JPBBCTR = (&A_VINDEX(ROBBCTR_fields,HPBBCTR)) ;
GPBBCTR = A_UNITE(IPBBCTR,mode1,1,JPBBCTR);
} 
else
{ 
 /* line 689: */
if (NOBBCTR_istruct)
{ 
 /* line 690: */
LPBBCTR = 1 ;
GPBBCTR = A_UNITE(KPBBCTR,mode2,2,LPBBCTR);
} 
else
{ 
 /* line 691: */
GPBBCTR = A_EMPTY(MPBBCTR,3);
} 
} 
 /* line 692: */
SNBBCTR_collateralunitassignee( DPBBCTR_collateraltemp, GPBBCTR, &NPBBCTR );
EPBBCTR.Extra = A_UNITE(OPBBCTR,mode6,6,NPBBCTR);
PPBBCTR_phrasevalue = EPBBCTR;
 /* line 694: */
QPBBCTR_endofphrase = HIAACTR_unsetlabel;
 /* line 696: */
 /* line 697: */
RPBBCTR.Value = (&PPBBCTR_phrasevalue);
RPBBCTR.End = (&QPBBCTR_endofphrase);
RPBBCTR.Type = Answer.Type;
SPBBCTR_phraseanswer = RPBBCTR;
 /* line 699: */
 /* line 700: */
for ( TPBBCTR_i = 1;;
TPBBCTR_i += 1 ) 
{ 
(void)(A_CALLPROC(NL(DJBBCTR_phrase),(A68_FALSE, SPBBCTR_phraseanswer, A68_FALSE),(A68_FALSE, SPBBCTR_phraseanswer, A68_FALSE,(NL(DJBBCTR_phrase)).nonlocals)));
 /* line 701: */
 /* line 702: */
UPBBCTR = (*NL(LEBBCTR_currentimperative)) ;
switch ( UPBBCTR.mode )
{ 
case 20: /* STRUCT(INT,INT,BITS,INT)  */
VPBBCTR_s = (UPBBCTR.data.mode20);
 /* line 703: */
 /* line 704: */
{ 
(void)(WXIACTR_assert(XPBBCTR, (VPBBCTR_s.Fn==VBAACTR_collcommafn)));
 /* line 706: */
 /* line 707: */
 /* line 708: */
ZPBBCTR = VPBBCTR_s.Mode ;
YPBBCTR.Mode = A_ABS(ZPBBCTR);
 /* line 710: */
YPBBCTR.Info = PKJACTR_defaultinfo;
 /* line 711: */
if (MOBBCTR_structure)
{ 
 /* line 712: */
BQBBCTR = VPBBCTR_s.Param ;
DQBBCTR = (&A_VINDEX(ROBBCTR_fields,BQBBCTR)) ;
AQBBCTR = A_UNITE(CQBBCTR,mode1,1,DQBBCTR);
} 
else
{ 
 /* line 713: */
if (NOBBCTR_istruct)
{ 
 /* line 714: */
FQBBCTR = VPBBCTR_s.Param ;
AQBBCTR = A_UNITE(EQBBCTR,mode2,2,FQBBCTR);
} 
else
{ 
 /* line 715: */
AQBBCTR = A_EMPTY(GQBBCTR,3);
} 
} 
 /* line 716: */
SNBBCTR_collateralunitassignee( DPBBCTR_collateraltemp, AQBBCTR, &HQBBCTR );
YPBBCTR.Extra = A_UNITE(IQBBCTR,mode6,6,HQBBCTR);
(void)(PLBBCTR_assignment((&PPBBCTR_phrasevalue), YPBBCTR));
 /* line 717: */
 /* line 718: */
 /* line 720: */
JQBBCTR = A68_TRUE;
} 
break;
case 22: /* STRUCT(INT,BITS)  */
KQBBCTR_t = (UPBBCTR.data.mode22);
 /* line 721: */
 /* line 722: */
{ 
(void)(WXIACTR_assert(MQBBCTR, (KQBBCTR_t.Fn==ECAACTR_endcollfn)));
 /* line 723: */
 /* line 724: */
 /* line 725: */
 /* line 726: */
JQBBCTR = A68_FALSE;
} 
break;
default: 
(void)(SXIACTR_terminalerror(658));
 /* line 727: */
 /* line 728: */
 /* line 729: */
JQBBCTR = A68_FALSE;
break;
} 
 /* line 731: */
NQBBCTR = JQBBCTR;
if ( !NQBBCTR ) break;
/*SKIP*/;
}
 /* line 732: */
} 
A_PROC_EXIT(collateralclause);
return;
} 
#undef NL
 /* line 737: */

A_STATIC A68_VOID  RQBBCTR_loopbody(A68_BOOL  Body, A68_63  Answer, void *NonLocals)
#define NL(x) (((SQBBCTR_loopbody *)NonLocals)->x)
{ 
A68_55  TQBBCTR_endofseries A_UNUSED = {0};
A68_181  UQBBCTR;  /* united object - for case conformity */
A68_188  VQBBCTR_whileordo A_UNUSED = {0};
A68_59  WQBBCTR;  /* collateral clause result */
A68_BITS  XQBBCTR;  /* ADICOPS - >= */
A68_59  YQBBCTR_loopproperties A_UNUSED = {0};
A68_64  ZQBBCTR;  /* collateral clause result */
A68_65  ARBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_64  BRBBCTR_enquiry A_UNUSED = {0};
A68_63  CRBBCTR;  /* collateral clause result */
A68_181  DRBBCTR;  /* united object - for case conformity */
A68_188  ERBBCTR_s A_UNUSED = {0};
A68_59  HRBBCTR;  /* collateral clause result */
A68_BITS  IRBBCTR;  /* ADICOPS - >= */
A68_59  JRBBCTR_seriesproperties A_UNUSED = {0};
A68_63  KRBBCTR;  /* collateral clause result */
A68_63  LRBBCTR;  /* collateral clause result */
A_PROC_ENTRY(loopbody);
 /* line 742: */
 /* line 743: */
{ 
TQBBCTR_endofseries = HIAACTR_unsetlabel;
 /* line 744: */
(void)(A_CALLPROC(NL(PEBBCTR_read),(),((NL(PEBBCTR_read)).nonlocals)));
 /* line 745: */
 /* line 746: */
UQBBCTR = (*NL(LEBBCTR_currentimperative)) ;
switch ( UQBBCTR.mode )
{ 
case 20: /* STRUCT(INT,INT,BITS,INT)  */
VQBBCTR_whileordo = (UQBBCTR.data.mode20);
 /* line 747: */
 /* line 748: */
{ 
 /* line 749: */
XQBBCTR = VQBBCTR_whileordo.Props ;
WQBBCTR.Block = (A_LB_GE(XQBBCTR,WCAACTR_decbit)&(!Body));
 /* line 750: */
WQBBCTR.Dynamicresult = A68_FALSE;
 /* line 751: */
WQBBCTR.Discardeddynamicresult = ((A68_BITS )(VQBBCTR_whileordo.Props&MDAACTR_dybits)!=0X0U);
 /* line 752: */
WQBBCTR.Type = (VQBBCTR_whileordo.Fn+LBAACTR_separatoroffset);
YQBBCTR_loopproperties = WQBBCTR;
 /* line 754: */
 /* line 755: */
 /* line 756: */
if (VQBBCTR_whileordo.Fn==YBAACTR_whilefn)
{ 
ZQBBCTR.Mode = WEAACTR_boolmode;
ZQBBCTR.Info = PKJACTR_defaultinfo;
ZQBBCTR.Extra = A_EMPTY(ARBBCTR,3);
BRBBCTR_enquiry = ZQBBCTR;
 /* line 757: */
(void)(YCBBCTR_while());
 /* line 758: */
 /* line 759: */
CRBBCTR.Value = (&BRBBCTR_enquiry);
CRBBCTR.End = (A68_55 *)A68_NIL;
CRBBCTR.Type = ILJACTR_enquiryresult;
(void)(A_CALLPROC(NL(PIBBCTR_enquiryclause),(CRBBCTR),(CRBBCTR,(NL(PIBBCTR_enquiryclause)).nonlocals)));
 /* line 760: */
(void)(ADBBCTR_whiledo((&BRBBCTR_enquiry)));
 /* line 762: */
 /* line 763: */
DRBBCTR = (*NL(LEBBCTR_currentimperative)) ;
switch ( DRBBCTR.mode )
{ 
case 20: /* STRUCT(INT,INT,BITS,INT)  */
ERBBCTR_s = (DRBBCTR.data.mode20);
 /* line 764: */
 /* line 765: */
{ 
(void)(WXIACTR_assert(GRBBCTR, (ERBBCTR_s.Fn==XBAACTR_dofn)));
 /* line 766: */
 /* line 767: */
 /* line 768: */
 /* line 769: */
IRBBCTR = ERBBCTR_s.Props ;
HRBBCTR.Block = (A_LB_GE(IRBBCTR,WCAACTR_decbit)&(!YQBBCTR_loopproperties.Block));
 /* line 770: */
HRBBCTR.Dynamicresult = A68_FALSE;
 /* line 771: */
HRBBCTR.Discardeddynamicresult = ((A68_BITS )(ERBBCTR_s.Props&MDAACTR_dybits)!=0X0U);
 /* line 772: */
HRBBCTR.Type = (ERBBCTR_s.Fn+LBAACTR_separatoroffset);
JRBBCTR_seriesproperties = HRBBCTR;
 /* line 773: */
 /* line 774: */
 /* line 775: */
KRBBCTR.Value = Answer.Value;
KRBBCTR.End = (&TQBBCTR_endofseries);
 /* line 776: */
KRBBCTR.Type = ELJACTR_voidresult;
 /* line 777: */
 /* line 778: */
 /* line 779: */
(void)(A_CALLPROC(NL(VHBBCTR_serialclause),(JRBBCTR_seriesproperties, KRBBCTR),(JRBBCTR_seriesproperties, KRBBCTR,(NL(VHBBCTR_serialclause)).nonlocals)));
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
(void)(TDBBCTR_whileod());
} 
else
{ 
 /* line 787: */
LRBBCTR.Value = Answer.Value;
LRBBCTR.End = (&TQBBCTR_endofseries);
 /* line 788: */
LRBBCTR.Type = ELJACTR_voidresult;
(void)(A_CALLPROC(NL(VHBBCTR_serialclause),(YQBBCTR_loopproperties, LRBBCTR),(YQBBCTR_loopproperties, LRBBCTR,(NL(VHBBCTR_serialclause)).nonlocals)));
 /* line 789: */
 /* line 790: */
 /* line 791: */
 /* line 792: */
 /* line 793: */
(void)(A_CALLPROC(AEBBCTR_od,(),((AEBBCTR_od).nonlocals)));
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

A_STATIC A68_VOID  RRBBCTR_loopclause(A68_189  Starter, A68_BOOL  Body, A68_63  Answer, A68_71 ** Frobytlist, void *NonLocals)
#define NL(x) (((SRBBCTR_loopclause *)NonLocals)->x)
{ 
A68_55  TRBBCTR_startofloop A_UNUSED = {0};
A68_55 * URBBCTR_endofloop A_UNUSED = {0};
A68_64  VRBBCTR_control A_UNUSED = {0};
A68_64  WRBBCTR_step A_UNUSED = {0};
A68_195  XRBBCTR;  /* collateral clause result */
A68_BITS  YRBBCTR;  /* ADICOPS - >= */
A68_BITS  ZRBBCTR;  /* ADICOPS - >= */
A68_BITS  ASBBCTR;  /* ADICOPS - >= */
A68_BITS  BSBBCTR;  /* ADICOPS - >= */
A68_195  CSBBCTR_loop A_UNUSED = {0};
A68_181  DSBBCTR;  /* united object - for case conformity */
A68_157  ESBBCTR_id A_UNUSED = {0};
A68_64  FSBBCTR;  /* collateral clause result */
A68_INT  GSBBCTR;  /* YIELD */
A68_67  HSBBCTR_iden A_UNUSED = {0};
A68_INT * ISBBCTR;  /* YIELD */
A68_65  JSBBCTR = {0};  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(loopclause);
 /* line 806: */
 /* line 807: */
{ 
TRBBCTR_startofloop = HIAACTR_unsetlabel;
 /* line 808: */
URBBCTR_endofloop = Answer.End;
 /* line 809: */
VRBBCTR_control = DLJACTR_skipvalue;
 /* line 810: */
WRBBCTR_step = DLJACTR_skipvalue;
 /* line 812: */
 /* line 813: */
XRBBCTR.Control = (&VRBBCTR_control);
 /* line 814: */
XRBBCTR.Step = (&WRBBCTR_step);
 /* line 815: */
YRBBCTR = Starter.Props ;
XRBBCTR.Forpart = A_LB_GE(YRBBCTR,IDAACTR_forpartbit);
 /* line 816: */
ZRBBCTR = Starter.Props ;
XRBBCTR.Frompart = A_LB_GE(ZRBBCTR,JDAACTR_frompartbit);
 /* line 817: */
ASBBCTR = Starter.Props ;
XRBBCTR.Bypart = A_LB_GE(ASBBCTR,KDAACTR_bypartbit);
 /* line 818: */
BSBBCTR = Starter.Props ;
XRBBCTR.Topart = A_LB_GE(BSBBCTR,LDAACTR_topartbit);
CSBBCTR_loop = XRBBCTR;
 /* line 820: */
 /* line 821: */
if (*(&((&CSBBCTR_loop)->Forpart)))
{ 
(void)(A_CALLPROC(NL(PEBBCTR_read),(),((NL(PEBBCTR_read)).nonlocals)));
 /* line 822: */
 /* line 823: */
DSBBCTR = (*NL(LEBBCTR_currentimperative)) ;
switch ( DSBBCTR.mode )
{ 
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
ESBBCTR_id = (DSBBCTR.data.mode11);
 /* line 824: */
{ 
(void)(JWVACTR_iddec(ESBBCTR_id, (A68_71 **)A68_NIL));
 /* line 825: */
 /* line 826: */
 /* line 827: */
GSBBCTR = ESBBCTR_id.Decno ;
FSBBCTR.Mode = (*(&((&A_R1INDEX(WPKACTR_ids,GSBBCTR))->Mode)));
 /* line 828: */
FSBBCTR.Info = PKJACTR_defaultinfo;
{ 
 /* line 829: */
ISBBCTR = (&((&HSBBCTR_iden)->Idno)) ;
(*ISBBCTR) = ESBBCTR_id.Decno;
 /* line 830: */
 /* line 831: */
 /* line 832: */
FSBBCTR.Extra = A_UNITE(JSBBCTR,mode4,4,HSBBCTR_iden);
} 
 /* line 833: */
 /* line 834: */
(void)(PLBBCTR_assignment((&VRBBCTR_control), FSBBCTR));
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
(void)(QIABCTR_for((&CSBBCTR_loop), Starter.Resultmode, Frobytlist));
 /* line 839: */
 /* line 840: */
(void)(A_CALLPROC(NL(QQBBCTR_loopbody),(Body, Answer),(Body, Answer,(NL(QQBBCTR_loopbody)).nonlocals)));
} 
A_PROC_EXIT(loopclause);
return;
} 
#undef NL
 /* line 844: */
 /* line 845: */
 /* line 847: */

A_STATIC A68_VOID  PSBBCTR_forallclause(A68_189  Starter, A68_BOOL  Body, A68_63  Answer, A68_71 ** Foralllist, void *NonLocals)
#define NL(x) (((QSBBCTR_forallclause *)NonLocals)->x)
{ 
A68_55  RSBBCTR_startofloop A_UNUSED = {0};
A68_55 * SSBBCTR_endofloop A_UNUSED = {0};
A68_INT  TSBBCTR_controlcount A_UNUSED = {0};
A68_299  VSBBCTR_generator;   /* proc value of non-global proc */
A68_199  BTBBCTR;  /* avoid structure result */
A68_199  ATBBCTR_controls A_UNUSED = {0};
A68_71 ** CTBBCTR_thisforalllist A_UNUSED = {0};
A68_196 * DTBBCTR_control A_UNUSED = {0};
A68_INT  ETBBCTR;  /* forall loop counter */
A68_181  FTBBCTR;  /* united object - for case conformity */
A68_157  GTBBCTR_id A_UNUSED = {0};
A68_64  HTBBCTR;  /* collateral clause result */
A68_INT  ITBBCTR;  /* YIELD */
A68_67  JTBBCTR_iden A_UNUSED = {0};
A68_INT * KTBBCTR;  /* YIELD */
A68_65  LTBBCTR = {0};  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(forallclause);
 /* line 851: */
 /* line 852: */
{ 
RSBBCTR_startofloop = HIAACTR_unsetlabel;
 /* line 853: */
SSBBCTR_endofloop = Answer.End;
 /* line 854: */
TSBBCTR_controlcount = Starter.Resultmode;
 /* line 855: */
A_CLOSURE( VSBBCTR_generator, WSBBCTR_generator, XSBBCTR_generator );
(( XSBBCTR_generator * ) ( VSBBCTR_generator.nonlocals )) -> TSBBCTR_controlcount = TSBBCTR_controlcount;
A_CALLPROC(VSBBCTR_generator,(A68_TRUE, &BTBBCTR),(A68_TRUE, &BTBBCTR,(VSBBCTR_generator).nonlocals));
ATBBCTR_controls = BTBBCTR;
 /* line 857: */
CTBBCTR_thisforalllist = Foralllist;
 /* line 859: */
 /* line 860: */
ETBBCTR = ATBBCTR_controls.upb -1;
DTBBCTR_control = ATBBCTR_controls.data;
for (;ETBBCTR-- >= 0;
(DTBBCTR_control++
) )
{
 /* line 861: */
(void)(A_CALLPROC(NL(PEBBCTR_read),(),((NL(PEBBCTR_read)).nonlocals)));
 /* line 862: */
 /* line 863: */
FTBBCTR = (*NL(LEBBCTR_currentimperative)) ;
switch ( FTBBCTR.mode )
{ 
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
GTBBCTR_id = (FTBBCTR.data.mode11);
 /* line 864: */
 /* line 871: */
{ 
(void)(JWVACTR_iddec(GTBBCTR_id, CTBBCTR_thisforalllist));
 /* line 872: */
(void)(CTBBCTR_thisforalllist = (&((*CTBBCTR_thisforalllist)->Rest)));
 /* line 874: */
 /* line 875: */
 /* line 876: */
ITBBCTR = GTBBCTR_id.Decno ;
HTBBCTR.Mode = (*(&((&A_R1INDEX(WPKACTR_ids,ITBBCTR))->Mode)));
 /* line 877: */
HTBBCTR.Info = PKJACTR_defaultinfo;
{ 
 /* line 878: */
KTBBCTR = (&((&JTBBCTR_iden)->Idno)) ;
(*KTBBCTR) = GTBBCTR_id.Decno;
 /* line 879: */
 /* line 880: */
 /* line 881: */
HTBBCTR.Extra = A_UNITE(LTBBCTR,mode4,4,JTBBCTR_iden);
} 
 /* line 882: */
 /* line 883: */
(void)(PLBBCTR_assignment((&(DTBBCTR_control->Ident)), HTBBCTR));
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
(void)(ESABCTR_forall(ATBBCTR_controls, Foralllist));
 /* line 888: */
 /* line 889: */
(void)(A_CALLPROC(NL(QQBBCTR_loopbody),(Body, Answer),(Body, Answer,(NL(QQBBCTR_loopbody)).nonlocals)));
} 
A_PROC_EXIT(forallclause);
return;
} 
#undef NL

A_STATIC A68_71 * UTBBCTR_assignment(A68_71 * STBBCTR_anonymous, A68_71  TTBBCTR_anonymous)
{ 
A68_71 ** VTBBCTR;  /* YIELD */
A68_71 * WTBBCTR;  /* clause result */
{ 
(void)(PLBBCTR_assignment((&(STBBCTR_anonymous->Value)), TTBBCTR_anonymous.Value));
VTBBCTR = (&(STBBCTR_anonymous->Rest)) ;
(*VTBBCTR) = TTBBCTR_anonymous.Rest;
WTBBCTR = STBBCTR_anonymous;
} 
return( WTBBCTR );
} 
#undef NL

A_STATIC A68_VOID  QGBBCTR_generator(A68_BOOL  OGBBCTR_anonymous, A68_124  *ReturnedValue, void *NonLocals)
#define NL(x) (((RGBBCTR_generator *)NonLocals)->x)
{ 
A68_124  SGBBCTR;  /* clause result */
A68_124  TGBBCTR;  /* OPERATORS - dynamic generator */
{ 
TGBBCTR.upb = 0 ;
( OGBBCTR_anonymous? A_VLOC(A68_INT ,TGBBCTR): A_VHEAP(A68_INT ,TGBBCTR) );
SGBBCTR = TGBBCTR;
} 
*ReturnedValue = (SGBBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  BHBBCTR_generator(A68_BOOL  ZGBBCTR_anonymous, A68_124  *ReturnedValue, void *NonLocals)
#define NL(x) (((CHBBCTR_generator *)NonLocals)->x)
{ 
A68_124  DHBBCTR;  /* clause result */
A68_124  EHBBCTR;  /* OPERATORS - dynamic generator */
{ 
EHBBCTR.upb = NL(NGBBCTR_paramcount) ;
( ZGBBCTR_anonymous? A_VLOC(A68_INT ,EHBBCTR): A_VHEAP(A68_INT ,EHBBCTR) );
DHBBCTR = EHBBCTR;
} 
*ReturnedValue = (DHBBCTR);
return;
} 
#undef NL
 /* line 369: */
 /* line 370: */
 /* line 372: */

A_STATIC A68_VOID  MJBBCTR_enclosedclause(A68_189  Starter, A68_BOOL  Body, A68_63  Answer, A68_71 * Newvalue, void *NonLocals)
#define NL(x) (((NJBBCTR_enclosedclause *)NonLocals)->x)
{ 
A68_282  SJBBCTR_closedclause;   /* proc value of non-global proc */
A68_282  JKBBCTR_choiceclause;   /* proc value of non-global proc */
A68_289  MNBBCTR_collateralclause;   /* proc value of non-global proc */
A68_76  QQBBCTR_loopbody;   /* proc value of non-global proc */
A68_298  QRBBCTR_loopclause;   /* proc value of non-global proc */
A68_298  OSBBCTR_forallclause;   /* proc value of non-global proc */
A68_55  MTBBCTR_endofclause A_UNUSED = {0};
A68_INT  NTBBCTR;  /* ADICOPS - ABS INT */
A68_INT  OTBBCTR_resultmode A_UNUSED = {0};
A68_INT  PTBBCTR_type A_UNUSED = {0};
A68_71  QTBBCTR;  /* collateral clause result */
A68_65  RTBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_63  XTBBCTR;  /* collateral clause result */
A68_63  AUBBCTR;  /* collateral clause result */
A68_BITS  BUBBCTR;  /* ADICOPS - >= */
A68_INT  CUBBCTR;  /* ADICOPS - ABS INT */
A68_INT  DUBBCTR;  /* ADICOPS - ABS INT */
A68_INT  EUBBCTR_resultmode A_UNUSED = {0};
A68_BOOL  FUBBCTR_newanswer A_UNUSED = {0};
A68_71  GUBBCTR;  /* collateral clause result */
A68_65  HUBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_63  IUBBCTR;  /* collateral clause result */
A68_63  JUBBCTR;  /* collateral clause result */
A68_71 * KUBBCTR_valuelist A_UNUSED = {0};
A68_INT  LUBBCTR;  /* to part of loop */
A68_INT  MUBBCTR;  /* loop control */
A68_71  NUBBCTR;  /* collateral clause result */
A68_65  OUBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_298  PUBBCTR;  /* clause result */
A68_63  QUBBCTR;  /* collateral clause result */
A68_INT  RUBBCTR;  /* ADICOPS - ABS INT */
A68_INT  SUBBCTR_resultmode A_UNUSED = {0};
A68_71  TUBBCTR;  /* collateral clause result */
A68_65  UUBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_63  VUBBCTR;  /* collateral clause result */
A68_63  YUBBCTR;  /* collateral clause result */
A68_INT  ZUBBCTR;  /* ADICOPS - ABS INT */
A_PROC_ENTRY(enclosedclause);
 /* line 392: */
 /* line 394: */
{ 
 /* line 395: */
A_CLOSURE( SJBBCTR_closedclause, TJBBCTR_closedclause, UJBBCTR_closedclause );
(( UJBBCTR_closedclause * ) ( SJBBCTR_closedclause.nonlocals )) -> VHBBCTR_serialclause = NL(VHBBCTR_serialclause);
 /* line 429: */
 /* line 430: */
A_CLOSURE( JKBBCTR_choiceclause, KKBBCTR_choiceclause, LKBBCTR_choiceclause );
(( LKBBCTR_choiceclause * ) ( JKBBCTR_choiceclause.nonlocals )) -> PEBBCTR_read = NL(PEBBCTR_read);
(( LKBBCTR_choiceclause * ) ( JKBBCTR_choiceclause.nonlocals )) -> LEBBCTR_currentimperative = NL(LEBBCTR_currentimperative);
(( LKBBCTR_choiceclause * ) ( JKBBCTR_choiceclause.nonlocals )) -> PIBBCTR_enquiryclause = NL(PIBBCTR_enquiryclause);
(( LKBBCTR_choiceclause * ) ( JKBBCTR_choiceclause.nonlocals )) -> VHBBCTR_serialclause = NL(VHBBCTR_serialclause);
 /* line 618: */
A_CLOSURE( MNBBCTR_collateralclause, NNBBCTR_collateralclause, ONBBCTR_collateralclause );
(( ONBBCTR_collateralclause * ) ( MNBBCTR_collateralclause.nonlocals )) -> DJBBCTR_phrase = NL(DJBBCTR_phrase);
(( ONBBCTR_collateralclause * ) ( MNBBCTR_collateralclause.nonlocals )) -> LEBBCTR_currentimperative = NL(LEBBCTR_currentimperative);
 /* line 734: */
 /* line 735: */
A_CLOSURE( QQBBCTR_loopbody, RQBBCTR_loopbody, SQBBCTR_loopbody );
(( SQBBCTR_loopbody * ) ( QQBBCTR_loopbody.nonlocals )) -> PEBBCTR_read = NL(PEBBCTR_read);
(( SQBBCTR_loopbody * ) ( QQBBCTR_loopbody.nonlocals )) -> LEBBCTR_currentimperative = NL(LEBBCTR_currentimperative);
(( SQBBCTR_loopbody * ) ( QQBBCTR_loopbody.nonlocals )) -> PIBBCTR_enquiryclause = NL(PIBBCTR_enquiryclause);
(( SQBBCTR_loopbody * ) ( QQBBCTR_loopbody.nonlocals )) -> VHBBCTR_serialclause = NL(VHBBCTR_serialclause);
 /* line 797: */
 /* line 798: */
A_CLOSURE( QRBBCTR_loopclause, RRBBCTR_loopclause, SRBBCTR_loopclause );
(( SRBBCTR_loopclause * ) ( QRBBCTR_loopclause.nonlocals )) -> PEBBCTR_read = NL(PEBBCTR_read);
(( SRBBCTR_loopclause * ) ( QRBBCTR_loopclause.nonlocals )) -> LEBBCTR_currentimperative = NL(LEBBCTR_currentimperative);
(( SRBBCTR_loopclause * ) ( QRBBCTR_loopclause.nonlocals )) -> QQBBCTR_loopbody = QQBBCTR_loopbody;
 /* line 842: */
 /* line 843: */
A_CLOSURE( OSBBCTR_forallclause, PSBBCTR_forallclause, QSBBCTR_forallclause );
(( QSBBCTR_forallclause * ) ( OSBBCTR_forallclause.nonlocals )) -> PEBBCTR_read = NL(PEBBCTR_read);
(( QSBBCTR_forallclause * ) ( OSBBCTR_forallclause.nonlocals )) -> LEBBCTR_currentimperative = NL(LEBBCTR_currentimperative);
(( QSBBCTR_forallclause * ) ( OSBBCTR_forallclause.nonlocals )) -> QQBBCTR_loopbody = QQBBCTR_loopbody;
 /* line 893: */
MTBBCTR_endofclause = HIAACTR_unsetlabel;
 /* line 895: */
 /* line 896: */
if (Starter.Fn==HBAACTR_beginfn)
{ 
 /* line 897: */
if ((Starter.Mode>0)&(!Body))
{ 
NTBBCTR = Starter.Resultmode ;
OTBBCTR_resultmode = A_ABS(NTBBCTR);
 /* line 898: */
PTBBCTR_type = KLJACTR_noparticularresult;
 /* line 900: */
 /* line 901: */
QTBBCTR.Value.Mode = OTBBCTR_resultmode;
QTBBCTR.Value.Info = PKJACTR_defaultinfo;
QTBBCTR.Value.Extra = A_EMPTY(RTBBCTR,3);
QTBBCTR.Rest = (*NL(GJBBCTR_valuestack));
(void)((*NL(GJBBCTR_valuestack)) = UTBBCTR_assignment(Newvalue, QTBBCTR));
 /* line 903: */
 /* line 904: */
 /* line 905: */
 /* line 906: */
 /* line 907: */
XTBBCTR.Value = (&((*NL(GJBBCTR_valuestack))->Value));
 /* line 909: */
XTBBCTR.End = (&MTBBCTR_endofclause);
 /* line 910: */
XTBBCTR.Type = Answer.Type;
 /* line 911: */
 /* line 912: */
(void)(A_CALLPROC(SJBBCTR_closedclause,(Starter, Body, XTBBCTR),(Starter, Body, XTBBCTR,(SJBBCTR_closedclause).nonlocals)));
} 
else
{ 
(void)(WXIACTR_assert(ZTBBCTR, (Answer.Type!=JLJACTR_optboolresult)));
 /* line 913: */
 /* line 914: */
 /* line 915: */
 /* line 916: */
 /* line 917: */
AUBBCTR.Value = Answer.Value;
 /* line 918: */
 /* line 919: */
if (Answer.End==(A68_55 *)A68_NIL)
{ 
 /* line 920: */
AUBBCTR.End = (&MTBBCTR_endofclause);
} 
else
{ 
 /* line 921: */
AUBBCTR.End = Answer.End;
} 
 /* line 922: */
 /* line 923: */
BUBBCTR = Starter.Props ;
if (A_LB_GE(BUBBCTR,TCAACTR_exitbit))
{ 
 /* line 924: */
CUBBCTR = Answer.Type ;
AUBBCTR.Type = A_ABS(CUBBCTR);
} 
else
{ 
 /* line 925: */
 /* line 926: */
AUBBCTR.Type = Answer.Type;
} 
 /* line 927: */
 /* line 928: */
(void)(A_CALLPROC(SJBBCTR_closedclause,(Starter, Body, AUBBCTR),(Starter, Body, AUBBCTR,(SJBBCTR_closedclause).nonlocals)));
} 
} 
else
{ 
 /* line 929: */
if (Starter.Fn==IBAACTR_collbeginfn)
{ 
DUBBCTR = Starter.Resultmode ;
EUBBCTR_resultmode = A_ABS(DUBBCTR);
 /* line 930: */
FUBBCTR_newanswer = (Starter.Mode>0);
 /* line 932: */
 /* line 933: */
 /* line 934: */
if (FUBBCTR_newanswer|(Answer.Type==HLJACTR_routineresult))
{ 
 /* line 935: */
 /* line 936: */
GUBBCTR.Value.Mode = EUBBCTR_resultmode;
 /* line 938: */
GUBBCTR.Value.Info = PKJACTR_defaultinfo;
 /* line 940: */
GUBBCTR.Value.Extra = A_EMPTY(HUBBCTR,3);
GUBBCTR.Rest = (*NL(GJBBCTR_valuestack));
(void)((*NL(GJBBCTR_valuestack)) = UTBBCTR_assignment(Newvalue, GUBBCTR));
 /* line 941: */
 /* line 942: */
 /* line 943: */
 /* line 944: */
IUBBCTR.Value = (&((*NL(GJBBCTR_valuestack))->Value));
IUBBCTR.End = (A68_55 *)A68_NIL;
 /* line 945: */
IUBBCTR.Type = KLJACTR_noparticularresult;
 /* line 946: */
 /* line 948: */
(void)(A_CALLPROC(MNBBCTR_collateralclause,(Starter, IUBBCTR),(Starter, IUBBCTR,(MNBBCTR_collateralclause).nonlocals)));
} 
else
{ 
 /* line 949: */
 /* line 950: */
JUBBCTR.Value = Answer.Value;
JUBBCTR.End = (A68_55 *)A68_NIL;
 /* line 951: */
JUBBCTR.Type = KLJACTR_noparticularresult;
 /* line 952: */
 /* line 953: */
(void)(A_CALLPROC(MNBBCTR_collateralclause,(Starter, JUBBCTR),(Starter, JUBBCTR,(MNBBCTR_collateralclause).nonlocals)));
} 
} 
else
{ 
 /* line 954: */
 /* line 955: */
if ((Starter.Fn==JBAACTR_forfn)|(Starter.Fn==KBAACTR_forallfn))
{ 
KUBBCTR_valuelist = (*NL(GJBBCTR_valuestack));
 /* line 957: */
 /* line 958: */
LUBBCTR = Starter.Resultmode;
for ( MUBBCTR = 1;
MUBBCTR <= LUBBCTR;
MUBBCTR += 1 )
{ 
 /* line 959: */
(void)((*NL(GJBBCTR_valuestack)) = (*(&((*NL(GJBBCTR_valuestack))->Rest))));
}
 /* line 961: */
 /* line 962: */
NUBBCTR.Value.Mode = UEAACTR_voidmode;
NUBBCTR.Value.Info = PKJACTR_defaultinfo;
NUBBCTR.Value.Extra = A_EMPTY(OUBBCTR,3);
NUBBCTR.Rest = (*NL(GJBBCTR_valuestack));
(void)((*NL(GJBBCTR_valuestack)) = UTBBCTR_assignment(Newvalue, NUBBCTR));
 /* line 964: */
 /* line 965: */
 /* line 966: */
if (Starter.Fn==JBAACTR_forfn)
{ 
 /* line 967: */
PUBBCTR = QRBBCTR_loopclause;
} 
else
{ 
PUBBCTR = OSBBCTR_forallclause;
} 
 /* line 968: */
 /* line 969: */
QUBBCTR.Value = (&((*NL(GJBBCTR_valuestack))->Value));
QUBBCTR.End = (&MTBBCTR_endofclause);
QUBBCTR.Type = ELJACTR_voidresult;
 /* line 971: */
 /* line 973: */
 /* line 974: */
(void)(A_CALLPROC(PUBBCTR,(Starter, Body, QUBBCTR, (&KUBBCTR_valuelist)),(Starter, Body, QUBBCTR, (&KUBBCTR_valuelist),(PUBBCTR).nonlocals)));
} 
else
{ 
 /* line 975: */
 /* line 976: */
if ((Starter.Mode>0)&(!Body))
{ 
RUBBCTR = Starter.Resultmode ;
SUBBCTR_resultmode = A_ABS(RUBBCTR);
 /* line 978: */
 /* line 979: */
TUBBCTR.Value.Mode = SUBBCTR_resultmode;
TUBBCTR.Value.Info = PKJACTR_defaultinfo;
TUBBCTR.Value.Extra = A_EMPTY(UUBBCTR,3);
TUBBCTR.Rest = (*NL(GJBBCTR_valuestack));
(void)((*NL(GJBBCTR_valuestack)) = UTBBCTR_assignment(Newvalue, TUBBCTR));
 /* line 981: */
 /* line 982: */
 /* line 983: */
 /* line 984: */
 /* line 985: */
VUBBCTR.Value = (&((*NL(GJBBCTR_valuestack))->Value));
 /* line 987: */
VUBBCTR.End = (&MTBBCTR_endofclause);
 /* line 988: */
VUBBCTR.Type = FLJACTR_memoryresult;
 /* line 989: */
 /* line 990: */
(void)(A_CALLPROC(JKBBCTR_choiceclause,(Starter, Body, VUBBCTR),(Starter, Body, VUBBCTR,(JKBBCTR_choiceclause).nonlocals)));
} 
else
{ 
(void)(WXIACTR_assert(XUBBCTR, (Answer.Type!=JLJACTR_optboolresult)));
 /* line 991: */
 /* line 992: */
 /* line 993: */
 /* line 994: */
 /* line 995: */
YUBBCTR.Value = Answer.Value;
 /* line 996: */
 /* line 997: */
if (Answer.End==(A68_55 *)A68_NIL)
{ 
 /* line 998: */
YUBBCTR.End = (&MTBBCTR_endofclause);
} 
else
{ 
 /* line 1000: */
YUBBCTR.End = Answer.End;
} 
 /* line 1001: */
ZUBBCTR = Answer.Type ;
YUBBCTR.Type = A_ABS(ZUBBCTR);
 /* line 1002: */
 /* line 1003: */
(void)(A_CALLPROC(JKBBCTR_choiceclause,(Starter, Body, YUBBCTR),(Starter, Body, YUBBCTR,(JKBBCTR_choiceclause).nonlocals)));
} 
} 
} 
} 
} 
A_PROC_EXIT(enclosedclause);
return;
} 
#undef NL

A_STATIC A68_VOID  CVBBCTR_optboolexpression(A68_INT  Warn, void *NonLocals)
#define NL(x) (((DVBBCTR_optboolexpression *)NonLocals)->x)
{ 
A68_64 * EVBBCTR_operand A_UNUSED = {0};
A68_BOOL  FVBBCTR_orel A_UNUSED = {0};
A68_63  GVBBCTR;  /* collateral clause result */
A_PROC_ENTRY(optboolexpression);
 /* line 1009: */
 /* line 1010: */
{ 
EVBBCTR_operand = (&((*NL(GJBBCTR_valuestack))->Value));
 /* line 1011: */
FVBBCTR_orel = (Warn==KCAACTR_orelwarn);
 /* line 1012: */
(void)(LTZACTR_optboolwarning(FVBBCTR_orel, EVBBCTR_operand));
 /* line 1014: */
 /* line 1015: */
 /* line 1016: */
GVBBCTR.Value = EVBBCTR_operand;
GVBBCTR.End = (A68_55 *)A68_NIL;
GVBBCTR.Type = KLJACTR_noparticularresult;
 /* line 1017: */
 /* line 1018: */
(void)(A_CALLPROC(NL(DJBBCTR_phrase),(A68_FALSE, GVBBCTR, A68_FALSE),(A68_FALSE, GVBBCTR, A68_FALSE,(NL(DJBBCTR_phrase)).nonlocals)));
 /* line 1019: */
 /* line 1020: */
(void)(EVZACTR_optbooloper());
} 
A_PROC_EXIT(optboolexpression);
return;
} 
#undef NL

A_STATIC A68_VOID  LFBBCTR_skiproutine(void *NonLocals)
#define NL(x) (((MFBBCTR_skiproutine *)NonLocals)->x)
{ 
A68_181  NFBBCTR;  /* united object - for case conformity */
A68_BOOL  OFBBCTR;  /* clause result */
A68_190  PFBBCTR_t A_UNUSED = {0};
A68_BOOL  QFBBCTR;  /* clause result */
A_PROC_ENTRY(skiproutine);
for ( ;; )
{ 
(void)(A_CALLPROC(NL(PEBBCTR_read),(),((NL(PEBBCTR_read)).nonlocals)));
 /* line 133: */
 /* line 134: */
NFBBCTR = (*NL(LEBBCTR_currentimperative)) ;
switch ( NFBBCTR.mode )
{ 
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
{ 
(void)(A_CALLPROC(NL(KFBBCTR_skiproutine),(),((NL(KFBBCTR_skiproutine)).nonlocals)));
 /* line 135: */
OFBBCTR = A68_TRUE;
} 
break;
case 22: /* STRUCT(INT,BITS)  */
PFBBCTR_t = (NFBBCTR.data.mode22);
 /* line 136: */
OFBBCTR = (PFBBCTR_t.Fn!=GCAACTR_routinendfn);
break;
default: 
 /* line 137: */
 /* line 138: */
OFBBCTR = A68_TRUE;
break;
} 
 /* line 140: */
QFBBCTR = OFBBCTR;
if ( !QFBBCTR ) break;
/*SKIP*/;
}
A_PROC_EXIT(skiproutine);
return;
} 
#undef NL

A_STATIC A68_VOID  TFBBCTR_routine(A68_122  Routine, void *NonLocals)
#define NL(x) (((UFBBCTR_routine *)NonLocals)->x)
{ 
A68_INT  WFBBCTR;  /* YIELD */
A68_123  VFBBCTR_environ A_UNUSED = {0};
A68_181  XFBBCTR;  /* united object - for case conformity */
A68_165  YFBBCTR_label A_UNUSED = {0};
A68_123  ZFBBCTR;  /* avoid structure result */
A68_123  AGBBCTR_labelenviron A_UNUSED = {0};
A68_BOOL  BGBBCTR;  /* clause result */
A68_122  CGBBCTR_r A_UNUSED = {0};
A68_BOOL  HGBBCTR;  /* clause result */
A68_INT  IGBBCTR_resulttype A_UNUSED = {0};
A68_64  JGBBCTR_result A_UNUSED = {0};
A68_55 * KGBBCTR_endofroutine A_UNUSED = {0};
A68_200  LGBBCTR;  /* avoid structure result */
A68_200  MGBBCTR_proc A_UNUSED = {0};
A68_INT  NGBBCTR_paramcount A_UNUSED = {0};
A68_273  PGBBCTR_generator;   /* proc value of non-global proc */
A68_124  UGBBCTR;  /* avoid structure result */
A68_124  VGBBCTR_nulllist A_UNUSED = {0};
A68_124  WGBBCTR_parammodes A_UNUSED = {0};
A68_124  XGBBCTR_paramdecnos A_UNUSED = {0};
A68_124  YGBBCTR;  /* avoid structure result */
A68_273  AHBBCTR_generator;   /* proc value of non-global proc */
A68_124  FHBBCTR;  /* avoid structure result */
A68_INT  GHBBCTR_i A_UNUSED = {0};
A68_INT  HHBBCTR;  /* to part of loop */
A68_181  IHBBCTR;  /* united object - for case conformity */
A68_157  JHBBCTR_id A_UNUSED = {0};
A68_INT * OHBBCTR;  /* YIELD */
A68_63  RHBBCTR;  /* collateral clause result */
A68_BITS  SHBBCTR;  /* ADICOPS - >= */
A_PROC_ENTRY(routine);
 /* line 147: */
 /* line 148: */
{ 
WFBBCTR = Routine.Maxname ;
VFBBCTR_environ = (*(&((&A_R1INDEX(WPKACTR_ids,WFBBCTR))->Environ)));
 /* line 150: */
for ( ;; )
{ 
(void)(A_CALLPROC(NL(VEBBCTR_lookahead),(),((NL(VEBBCTR_lookahead)).nonlocals)));
 /* line 151: */
 /* line 152: */
XFBBCTR = (*NL(NEBBCTR_nextimperative)) ;
switch ( XFBBCTR.mode )
{ 
case 14: /* STRUCT(REF MODE26,INT,INT,BOOL)  */
YFBBCTR_label = (XFBBCTR.data.mode14);
 /* line 153: */
 /* line 154: */
{ 
(void)(OSWACTR_labdec(YFBBCTR_label));
 /* line 155: */
 /* line 156: */
FZWACTR_environoflabel( YFBBCTR_label.Labno, &ZFBBCTR );
AGBBCTR_labelenviron = ZFBBCTR;
 /* line 157: */
 /* line 158: */
if (TRLACTR_isnewerthan(AGBBCTR_labelenviron, VFBBCTR_environ))
{ 
 /* line 159: */
VFBBCTR_environ = AGBBCTR_labelenviron;
} 
 /* line 160: */
(void)(A_CALLPROC(NL(PEBBCTR_read),(),((NL(PEBBCTR_read)).nonlocals)));
 /* line 161: */
 /* line 163: */
BGBBCTR = A68_TRUE;
} 
break;
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
CGBBCTR_r = (XFBBCTR.data.mode12);
 /* line 164: */
 /* line 165: */
 /* line 167: */
if (IOMACTR_modetype(Routine.Mode)==GEAACTR_procp)
{ 
(void)(WXIACTR_assert(GGBBCTR, A_VC_EQ(CGBBCTR_r.Name,FGBBCTR)));
 /* line 168: */
(void)(A_CALLPROC(NL(PEBBCTR_read),(),((NL(PEBBCTR_read)).nonlocals)));
 /* line 169: */
(void)(A_CALLPROC(NL(KFBBCTR_skiproutine),(),((NL(KFBBCTR_skiproutine)).nonlocals)));
 /* line 170: */
 /* line 171: */
BGBBCTR = A68_TRUE;
} 
else
{ 
 /* line 172: */
 /* line 173: */
BGBBCTR = A68_FALSE;
} 
break;
default: 
 /* line 174: */
 /* line 175: */
BGBBCTR = A68_FALSE;
break;
} 
 /* line 177: */
HGBBCTR = BGBBCTR;
if ( !HGBBCTR ) break;
/*SKIP*/;
}
 /* line 179: */
IGBBCTR_resulttype = HLJACTR_routineresult;
 /* line 180: */
 /* line 181: */
 /* line 183: */
(void)(YRLACTR_startnewlevel(Routine.Rdenno));
 /* line 185: */
STMACTR_procinfo( Routine.Mode, &LGBBCTR );
MGBBCTR_proc = LGBBCTR;
 /* line 186: */
NGBBCTR_paramcount = MGBBCTR_proc.Parameters;
 /* line 187: */
A_CLOSURE( PGBBCTR_generator, QGBBCTR_generator, RGBBCTR_generator );
A_CALLPROC(PGBBCTR_generator,(A68_FALSE, &UGBBCTR),(A68_FALSE, &UGBBCTR,(PGBBCTR_generator).nonlocals));
VGBBCTR_nulllist = UGBBCTR;
 /* line 188: */
 /* line 189: */
 /* line 191: */
 /* line 192: */
 /* line 193: */
if (NGBBCTR_paramcount>0)
{ 
A_CALLPROC(AWMACTR_parameters,(Routine.Mode, &YGBBCTR),(Routine.Mode, &YGBBCTR,(AWMACTR_parameters).nonlocals));
WGBBCTR_parammodes = YGBBCTR;
 /* line 194: */
A_CLOSURE( AHBBCTR_generator, BHBBCTR_generator, CHBBCTR_generator );
(( CHBBCTR_generator * ) ( AHBBCTR_generator.nonlocals )) -> NGBBCTR_paramcount = NGBBCTR_paramcount;
A_CALLPROC(AHBBCTR_generator,(A68_FALSE, &FHBBCTR),(A68_FALSE, &FHBBCTR,(AHBBCTR_generator).nonlocals));
XGBBCTR_paramdecnos = FHBBCTR;
 /* line 195: */
 /* line 196: */
HHBBCTR = NGBBCTR_paramcount;
for ( GHBBCTR_i = 1;
GHBBCTR_i <= HHBBCTR;
GHBBCTR_i += 1 )
{ 
 /* line 197: */
(void)(A_CALLPROC(NL(PEBBCTR_read),(),((NL(PEBBCTR_read)).nonlocals)));
 /* line 198: */
 /* line 199: */
IHBBCTR = (*NL(LEBBCTR_currentimperative)) ;
switch ( IHBBCTR.mode )
{ 
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
JHBBCTR_id = (IHBBCTR.data.mode11);
 /* line 200: */
 /* line 201: */
{ 
 /* line 202: */
(void)(WXIACTR_assert(LHBBCTR, (JHBBCTR_id.Type==3)));
 /* line 203: */
 /* line 204: */
(void)(WXIACTR_assert(NHBBCTR, (HCNACTR_finddeflexmode(JHBBCTR_id.Mode)==HCNACTR_finddeflexmode((*(&A_VINDEX(WGBBCTR_parammodes,GHBBCTR_i)))))));
 /* line 205: */
OHBBCTR = (&A_VINDEX(XGBBCTR_paramdecnos,GHBBCTR_i)) ;
(*OHBBCTR) = JHBBCTR_id.Decno;
 /* line 206: */
 /* line 207: */
 /* line 208: */
 /* line 210: */
(void)(JWVACTR_iddec(JHBBCTR_id, (A68_71 **)A68_NIL));
} 
break;
default: 
 /* line 211: */
 /* line 212: */
(void)(WXIACTR_assert(QHBBCTR, A68_FALSE));
break;
} 
}
 /* line 213: */
 /* line 214: */
} 
else
{ 
 /* line 215: */
XGBBCTR_paramdecnos = VGBBCTR_nulllist;
} 
 /* line 217: */
 /* line 218: */
 /* line 219: */
 /* line 220: */
 /* line 221: */
 /* line 223: */
(void)(SPYACTR_startroutine(Routine, VFBBCTR_environ, XGBBCTR_paramdecnos, MGBBCTR_proc.Result, (&JGBBCTR_result)));
 /* line 228: */
 /* line 229: */
 /* line 230: */
RHBBCTR.Value = (&JGBBCTR_result);
RHBBCTR.End = KGBBCTR_endofroutine;
RHBBCTR.Type = IGBBCTR_resulttype;
 /* line 231: */
 /* line 232: */
SHBBCTR = Routine.Props ;
(void)(A_CALLPROC((*NL(JFBBCTR_phrase_)),(A_LB_GE(SHBBCTR,NCAACTR_ccbit), RHBBCTR, A68_FALSE),(A_LB_GE(SHBBCTR,NCAACTR_ccbit), RHBBCTR, A68_FALSE,((*NL(JFBBCTR_phrase_))).nonlocals)));
 /* line 235: */
(void)(LQYACTR_endroutine(Routine, (&JGBBCTR_result)));
 /* line 236: */
 /* line 237: */
(void)(A_CALLPROC(BSLACTR_reverttopreviouslevel,(),((BSLACTR_reverttopreviouslevel).nonlocals)));
} 
A_PROC_EXIT(routine);
return;
} 
#undef NL

A_STATIC A68_VOID  WHBBCTR_serialclause(A68_59  Properties, A68_63  Answer, void *NonLocals)
#define NL(x) (((XHBBCTR_serialclause *)NonLocals)->x)
{ 
A68_55 * YHBBCTR_endofseries A_UNUSED = {0};
A68_BOOL  ZHBBCTR_discardlevelactivated A_UNUSED = {0};
A68_BOOL  AIBBCTR_firstexit A_UNUSED = {0};
A68_63  BIBBCTR;  /* collateral clause result */
A68_63  CIBBCTR_seriesanswer A_UNUSED = {0};
A68_181  DIBBCTR;  /* united object - for case conformity */
A68_188  EIBBCTR_s A_UNUSED = {0};
A68_BITS  FIBBCTR;  /* ADICOPS - >= */
A68_BOOL  GIBBCTR_dontpullbitset A_UNUSED = {0};
A68_BOOL  HIBBCTR;  /* clause result */
A68_190  KIBBCTR_t A_UNUSED = {0};
A68_59  LIBBCTR;  /* collateral clause result */
A68_BITS  MIBBCTR;  /* ADICOPS - >= */
A68_BOOL  NIBBCTR;  /* clause result */
A_PROC_ENTRY(serialclause);
 /* line 246: */
 /* line 247: */
{ 
YHBBCTR_endofseries = Answer.End;
 /* line 248: */
ZHBBCTR_discardlevelactivated = A68_FALSE;
 /* line 249: */
AIBBCTR_firstexit = A68_TRUE;
 /* line 251: */
 /* line 252: */
 /* line 253: */
 /* line 255: */
(void)(A_CALLPROC(KVZACTR_startseries,(Properties, (&YHBBCTR_endofseries), (&ZHBBCTR_discardlevelactivated)),(Properties, (&YHBBCTR_endofseries), (&ZHBBCTR_discardlevelactivated),(KVZACTR_startseries).nonlocals)));
 /* line 257: */
 /* line 258: */
BIBBCTR.Value = Answer.Value;
BIBBCTR.End = YHBBCTR_endofseries;
BIBBCTR.Type = Answer.Type;
CIBBCTR_seriesanswer = BIBBCTR;
 /* line 260: */
for ( ;; )
{ 
(void)(A_CALLPROC((*NL(JFBBCTR_phrase_)),(A68_FALSE, CIBBCTR_seriesanswer, A68_FALSE),(A68_FALSE, CIBBCTR_seriesanswer, A68_FALSE,((*NL(JFBBCTR_phrase_))).nonlocals)));
 /* line 262: */
 /* line 263: */
DIBBCTR = (*NL(LEBBCTR_currentimperative)) ;
switch ( DIBBCTR.mode )
{ 
case 20: /* STRUCT(INT,INT,BITS,INT)  */
EIBBCTR_s = (DIBBCTR.data.mode20);
 /* line 264: */
 /* line 266: */
{ 
FIBBCTR = EIBBCTR_s.Props ;
GIBBCTR_dontpullbitset = A_LB_GE(FIBBCTR,BDAACTR_dontpullbit);
 /* line 267: */
 /* line 268: */
 /* line 269: */
if (EIBBCTR_s.Fn==WBAACTR_semifn)
{ 
 /* line 271: */
(void)(VVZACTR_semi(((A68_BITS )(EIBBCTR_s.Props&MDAACTR_dybits)!=0X0U), GIBBCTR_dontpullbitset));
 /* line 272: */
 /* line 273: */
HIBBCTR = A68_TRUE;
} 
else
{ 
 /* line 274: */
 /* line 275: */
if (EIBBCTR_s.Fn==RBAACTR_exitfn)
{ 
(void)(WXIACTR_assert(JIBBCTR, (Answer.End!=(A68_55 *)A68_NIL)));
 /* line 276: */
 /* line 277: */
 /* line 278: */
 /* line 280: */
(void)(ZVZACTR_exit(GIBBCTR_dontpullbitset, AIBBCTR_firstexit, CIBBCTR_seriesanswer));
 /* line 281: */
AIBBCTR_firstexit = A68_FALSE;
 /* line 282: */
 /* line 283: */
 /* line 284: */
HIBBCTR = A68_TRUE;
} 
else
{ 
 /* line 285: */
 /* line 286: */
 /* line 287: */
 /* line 288: */
 /* line 290: */
(void)(SVZACTR_endseries(Properties, Answer, YHBBCTR_endofseries, ZHBBCTR_discardlevelactivated, GIBBCTR_dontpullbitset, (!AIBBCTR_firstexit)));
 /* line 291: */
 /* line 292: */
 /* line 293: */
 /* line 295: */
HIBBCTR = A68_FALSE;
} 
} 
} 
break;
case 22: /* STRUCT(INT,BITS)  */
KIBBCTR_t = (DIBBCTR.data.mode22);
 /* line 296: */
 /* line 298: */
{ 
 /* line 299: */
LIBBCTR.Block = Properties.Block;
 /* line 300: */
LIBBCTR.Dynamicresult = Properties.Dynamicresult;
 /* line 301: */
LIBBCTR.Discardeddynamicresult = Properties.Discardeddynamicresult;
 /* line 302: */
LIBBCTR.Type = (KIBBCTR_t.Fn+ZBAACTR_terminatoroffset);
 /* line 303: */
 /* line 304: */
 /* line 305: */
 /* line 306: */
 /* line 308: */
MIBBCTR = ~KIBBCTR_t.Props ;
(void)(SVZACTR_endseries(LIBBCTR, Answer, YHBBCTR_endofseries, ZHBBCTR_discardlevelactivated, A_LB_GE(MIBBCTR,BDAACTR_dontpullbit), (!AIBBCTR_firstexit)));
 /* line 309: */
 /* line 310: */
 /* line 311: */
 /* line 312: */
HIBBCTR = A68_FALSE;
} 
break;
default: 
(void)(SXIACTR_terminalerror(656));
 /* line 313: */
 /* line 314: */
 /* line 315: */
HIBBCTR = A68_FALSE;
break;
} 
 /* line 317: */
NIBBCTR = HIBBCTR;
if ( !NIBBCTR ) break;
/*SKIP*/;
}
 /* line 318: */
} 
A_PROC_EXIT(serialclause);
return;
} 
#undef NL

A_STATIC A68_VOID  QIBBCTR_enquiryclause(A68_63  Answer, void *NonLocals)
#define NL(x) (((RIBBCTR_enquiryclause *)NonLocals)->x)
{ 
A68_BOOL  SIBBCTR_simple A_UNUSED = {0};
A68_181  TIBBCTR;  /* united object - for case conformity */
A68_188  UIBBCTR_s A_UNUSED = {0};
A68_BITS  VIBBCTR;  /* ADICOPS - >= */
A68_BOOL  WIBBCTR;  /* clause result */
A68_BOOL  ZIBBCTR;  /* clause result */
A_PROC_ENTRY(enquiryclause);
 /* line 330: */
 /* line 331: */
{ 
SIBBCTR_simple = A68_TRUE;
 /* line 332: */
for ( ;; )
{ 
(void)(A_CALLPROC((*NL(JFBBCTR_phrase_)),(A68_FALSE, Answer, SIBBCTR_simple),(A68_FALSE, Answer, SIBBCTR_simple,((*NL(JFBBCTR_phrase_))).nonlocals)));
 /* line 333: */
 /* line 334: */
TIBBCTR = (*NL(LEBBCTR_currentimperative)) ;
switch ( TIBBCTR.mode )
{ 
case 20: /* STRUCT(INT,INT,BITS,INT)  */
UIBBCTR_s = (TIBBCTR.data.mode20);
 /* line 335: */
 /* line 336: */
 /* line 337: */
if (UIBBCTR_s.Fn==WBAACTR_semifn)
{ 
 /* line 338: */
 /* line 339: */
VIBBCTR = UIBBCTR_s.Props ;
(void)(VVZACTR_semi(((A68_BITS )(UIBBCTR_s.Props&MDAACTR_dybits)!=0X0U), A_LB_GE(VIBBCTR,BDAACTR_dontpullbit)));
 /* line 340: */
 /* line 341: */
 /* line 342: */
WIBBCTR = A68_TRUE;
} 
else
{ 
(void)(WXIACTR_assert(YIBBCTR, (UIBBCTR_s.Fn!=RBAACTR_exitfn)));
 /* line 343: */
 /* line 344: */
 /* line 345: */
WIBBCTR = A68_FALSE;
} 
break;
default: 
 /* line 346: */
 /* line 347: */
WIBBCTR = A68_FALSE;
break;
} 
 /* line 348: */
ZIBBCTR = WIBBCTR;
if ( !ZIBBCTR ) break;
SIBBCTR_simple = A68_FALSE;
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

A_STATIC A68_VOID  EJBBCTR_phrase(A68_BOOL  Body, A68_63  Answer, A68_BOOL  Simple, void *NonLocals)
#define NL(x) (((FJBBCTR_phrase *)NonLocals)->x)
{ 
A68_71 * GJBBCTR_valuestack A_UNUSED = {0};
A68_281  LJBBCTR_enclosedclause;   /* proc value of non-global proc */
A68_77  BVBBCTR_optboolexpression;   /* proc value of non-global proc */
A68_BOOL  HVBBCTR_simpleenquiry A_UNUSED = {0};
A68_181  IVBBCTR;  /* united object - for case conformity */
A68_192  JVBBCTR_p A_UNUSED = {0};
A68_192  KVBBCTR;  /* united object - for case conformity */
A68_191  LVBBCTR_l A_UNUSED = {0};
A68_71  MVBBCTR;  /* collateral clause result */
A68_64  NVBBCTR;  /* avoid structure result */
A68_185  OVBBCTR_op A_UNUSED = {0};
A68_157  PVBBCTR_id A_UNUSED = {0};
A68_173  QVBBCTR_c A_UNUSED = {0};
A68_71 * RVBBCTR_visible A_UNUSED = {0};
A68_INT  SVBBCTR_i A_UNUSED = {0};
A68_INT  TVBBCTR;  /* to part of loop */
A68_71  UVBBCTR;  /* collateral clause result */
A68_68  VVBBCTR;  /* avoid structure result */
A68_68  WVBBCTR_temp A_UNUSED = {0};
A68_71  XVBBCTR;  /* collateral clause result */
A68_65  YVBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_178  ZVBBCTR_format A_UNUSED = {0};
A68_71  AWBBCTR;  /* collateral clause result */
A68_184  BWBBCTR;  /* collateral clause result */
A68_191  CWBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_64  DWBBCTR;  /* avoid structure result */
A68_71  EWBBCTR;  /* collateral clause result */
A68_183  FWBBCTR;  /* collateral clause result */
A68_191  GWBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_64  HWBBCTR;  /* avoid structure result */
A68_185  IWBBCTR;  /* collateral clause result */
A68_122  JWBBCTR_r A_UNUSED = {0};
A68_122  KWBBCTR_savedr A_UNUSED = {0};
A68_BITS  LWBBCTR;  /* ADICOPS - >= */
A68_71  MWBBCTR;  /* collateral clause result */
A68_191  NWBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  OWBBCTR;  /* YIELD */
A68_64  PWBBCTR;  /* avoid structure result */
A68_186  QWBBCTR_w A_UNUSED = {0};
A68_165  RWBBCTR_l A_UNUSED = {0};
A68_79  SWBBCTR_u A_UNUSED = {0};
A68_170  TWBBCTR_c A_UNUSED = {0};
A68_BOOL  WWBBCTR;  /* clause result */
A68_188  XWBBCTR_s A_UNUSED = {0};
A68_BOOL  AXBBCTR;  /* optbool result */
A68_189  BXBBCTR_s A_UNUSED = {0};
A68_BOOL  EXBBCTR;  /* clause result */
A_PROC_ENTRY(phrase);
 /* line 364: */
 /* line 365: */
{ 
GJBBCTR_valuestack = (A68_71 *)A68_NIL;
 /* line 367: */
 /* line 368: */
A_CLOSURE( LJBBCTR_enclosedclause, MJBBCTR_enclosedclause, NJBBCTR_enclosedclause );
(( NJBBCTR_enclosedclause * ) ( LJBBCTR_enclosedclause.nonlocals )) -> VHBBCTR_serialclause = NL(VHBBCTR_serialclause);
(( NJBBCTR_enclosedclause * ) ( LJBBCTR_enclosedclause.nonlocals )) -> PEBBCTR_read = NL(PEBBCTR_read);
(( NJBBCTR_enclosedclause * ) ( LJBBCTR_enclosedclause.nonlocals )) -> LEBBCTR_currentimperative = NL(LEBBCTR_currentimperative);
(( NJBBCTR_enclosedclause * ) ( LJBBCTR_enclosedclause.nonlocals )) -> PIBBCTR_enquiryclause = NL(PIBBCTR_enquiryclause);
(( NJBBCTR_enclosedclause * ) ( LJBBCTR_enclosedclause.nonlocals )) -> DJBBCTR_phrase = NL(DJBBCTR_phrase);
(( NJBBCTR_enclosedclause * ) ( LJBBCTR_enclosedclause.nonlocals )) -> GJBBCTR_valuestack = (&GJBBCTR_valuestack);
 /* line 1005: */
A_CLOSURE( BVBBCTR_optboolexpression, CVBBCTR_optboolexpression, DVBBCTR_optboolexpression );
(( DVBBCTR_optboolexpression * ) ( BVBBCTR_optboolexpression.nonlocals )) -> GJBBCTR_valuestack = (&GJBBCTR_valuestack);
(( DVBBCTR_optboolexpression * ) ( BVBBCTR_optboolexpression.nonlocals )) -> DJBBCTR_phrase = NL(DJBBCTR_phrase);
 /* line 1024: */
HVBBCTR_simpleenquiry = Simple;
 /* line 1025: */
for ( ;; )
{ 
(void)(A_CALLPROC(NL(PEBBCTR_read),(),((NL(PEBBCTR_read)).nonlocals)));
 /* line 1026: */
 /* line 1027: */
IVBBCTR = (*NL(LEBBCTR_currentimperative)) ;
switch ( IVBBCTR.mode )
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
A_UNCPY(JVBBCTR_p,IVBBCTR);
 /* line 1028: */
{ 
 /* line 1029: */
KVBBCTR = JVBBCTR_p ;
switch ( KVBBCTR.mode )
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
A_UNCPY(LVBBCTR_l,KVBBCTR);
 /* line 1030: */
 /* line 1031: */
NBABCTR_load( LVBBCTR_l, &NVBBCTR );
MVBBCTR.Value = NVBBCTR;
MVBBCTR.Rest = GJBBCTR_valuestack;
 /* line 1032: */
(void)(GJBBCTR_valuestack = UTBBCTR_assignment(A_LOC(A68_71 ), MVBBCTR));
break;
case 10: /* STRUCT(INT,INT,INT)  */
OVBBCTR_op = (KVBBCTR.data.mode10);
 /* line 1033: */
 /* line 1034: */
(void)(ASQACTR_oper(OVBBCTR_op, (&GJBBCTR_valuestack), A_LOC(A68_71 )));
break;
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
PVBBCTR_id = (KVBBCTR.data.mode11);
 /* line 1035: */
 /* line 1037: */
(void)(JWVACTR_iddec(PVBBCTR_id, (&GJBBCTR_valuestack)));
break;
case 19: /* STRUCT(INT,INT,REF MODE26)  */
QVBBCTR_c = (KVBBCTR.data.mode19);
 /* line 1038: */
 /* line 1039: */
{ 
RVBBCTR_visible = MKJACTR_nilvaluelist;
 /* line 1040: */
 /* line 1041: */
TVBBCTR = QVBBCTR_c.Number;
for ( SVBBCTR_i = 1;
SVBBCTR_i <= TVBBCTR;
SVBBCTR_i += 1 )
{ 
 /* line 1042: */
UVBBCTR.Value = (*(&(GJBBCTR_valuestack->Value)));
UVBBCTR.Rest = RVBBCTR_visible;
(void)(RVBBCTR_visible = UTBBCTR_assignment(A_LOC(A68_71 ), UVBBCTR));
 /* line 1043: */
 /* line 1044: */
(void)(GJBBCTR_valuestack = (*(&(GJBBCTR_valuestack->Rest))));
}
 /* line 1045: */
 /* line 1046: */
SWZACTR_codeinsert( QVBBCTR_c.Insert, QVBBCTR_c.Mode, RVBBCTR_visible, &VVBBCTR );
WVBBCTR_temp = VVBBCTR;
 /* line 1047: */
 /* line 1048: */
if (QVBBCTR_c.Mode!=UEAACTR_voidmode)
{ 
 /* line 1049: */
XVBBCTR.Value.Mode = QVBBCTR_c.Mode;
XVBBCTR.Value.Info = PKJACTR_defaultinfo;
XVBBCTR.Value.Extra = A_UNITE(YVBBCTR,mode5,5,WVBBCTR_temp);
 /* line 1050: */
XVBBCTR.Rest = GJBBCTR_valuestack;
 /* line 1051: */
 /* line 1052: */
(void)(GJBBCTR_valuestack = UTBBCTR_assignment(A_LOC(A68_71 ), XVBBCTR));
} 
} 
break;
case 18: /* STRUCT(MODE179,REF MODE26)  */
ZVBBCTR_format = (KVBBCTR.data.mode18);
 /* line 1053: */
 /* line 1054: */
{ 
 /* line 1055: */
 /* line 1056: */
 /* line 1057: */
 /* line 1058: */
BWBBCTR.Mode = YEAACTR_formatmode;
 /* line 1059: */
BWBBCTR.Denotation = ZVBBCTR_format.Text;
 /* line 1060: */
NBABCTR_load( A_UNITE(CWBBCTR,mode9,9,BWBBCTR), &DWBBCTR );
AWBBCTR.Value = DWBBCTR;
 /* line 1061: */
 /* line 1062: */
 /* line 1063: */
FWBBCTR.Mode = EFAACTR_intmode;
 /* line 1064: */
 /* line 1065: */
FWBBCTR.Denotation = (A68_LBITS )(A68_BITS )ZVBBCTR_format.Info.W;
 /* line 1067: */
NBABCTR_load( A_UNITE(GWBBCTR,mode8,8,FWBBCTR), &HWBBCTR );
EWBBCTR.Value = HWBBCTR;
 /* line 1068: */
EWBBCTR.Rest = GJBBCTR_valuestack;
AWBBCTR.Rest = UTBBCTR_assignment(A_LOC(A68_71 ), EWBBCTR);
(void)(GJBBCTR_valuestack = UTBBCTR_assignment(A_LOC(A68_71 ), AWBBCTR));
 /* line 1070: */
 /* line 1071: */
 /* line 1072: */
 /* line 1073: */
IWBBCTR.Fn = QGAACTR_formatfn;
 /* line 1075: */
IWBBCTR.Mode = YEAACTR_formatmode;
IWBBCTR.Param = ZVBBCTR_format.Info.Nocases;
 /* line 1076: */
 /* line 1078: */
 /* line 1079: */
 /* line 1081: */
(void)(ASQACTR_oper(IWBBCTR, (&GJBBCTR_valuestack), A_LOC(A68_71 )));
} 
break;
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
JWBBCTR_r = (KVBBCTR.data.mode12);
 /* line 1092: */
 /* line 1093: */
{ 
KWBBCTR_savedr = JWBBCTR_r;
 /* line 1094: */
(void)(A_CALLPROC(NL(SFBBCTR_routine),(JWBBCTR_r),(JWBBCTR_r,(NL(SFBBCTR_routine)).nonlocals)));
 /* line 1095: */
 /* line 1096: */
LWBBCTR = (*(&((&KWBBCTR_savedr)->Props))) ;
if (A_LB_GE(LWBBCTR,PCAACTR_valbit))
{ 
 /* line 1097: */
OWBBCTR = (*(&((&KWBBCTR_savedr)->Rdenno))) ;
NBABCTR_load( A_UNITE(NWBBCTR,mode2,2,OWBBCTR), &PWBBCTR );
MWBBCTR.Value = PWBBCTR;
 /* line 1098: */
MWBBCTR.Rest = GJBBCTR_valuestack;
 /* line 1099: */
 /* line 1101: */
(void)(GJBBCTR_valuestack = UTBBCTR_assignment(A_LOC(A68_71 ), MWBBCTR));
} 
} 
break;
case 13: /* STRUCT(INT)  */
QWBBCTR_w = (KVBBCTR.data.mode13);
 /* line 1102: */
 /* line 1103: */
 /* line 1104: */
if ((QWBBCTR_w.W==KCAACTR_orelwarn)|(QWBBCTR_w.W==JCAACTR_andthwarn))
{ 
 /* line 1105: */
 /* line 1107: */
(void)(A_CALLPROC(BVBBCTR_optboolexpression,(QWBBCTR_w.W),(QWBBCTR_w.W,(BVBBCTR_optboolexpression).nonlocals)));
} 
break;
case 14: /* STRUCT(REF MODE26,INT,INT,BOOL)  */
RWBBCTR_l = (KVBBCTR.data.mode14);
 /* line 1108: */
 /* line 1110: */
(void)(OSWACTR_labdec(RWBBCTR_l));
break;
case 15: /* STRUCT(INT,BITS,INT)  */
SWBBCTR_u = (KVBBCTR.data.mode15);
 /* line 1112: */
 /* line 1114: */
(void)(SXIACTR_terminalerror(670));
break;
case 16: /* STRUCT(INT)  */
TWBBCTR_c = (KVBBCTR.data.mode16);
 /* line 1115: */
 /* line 1117: */
(void)(WXIACTR_assert(VWBBCTR, A68_FALSE));
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 1118: */
 /* line 1119: */
 /* line 1121: */
WWBBCTR = A68_TRUE;
} 
break;
case 20: /* STRUCT(INT,INT,BITS,INT)  */
XWBBCTR_s = (IVBBCTR.data.mode20);
 /* line 1122: */
{ 
 /* line 1123: */
 /* line 1124: */
if (GJBBCTR_valuestack!=MKJACTR_nilvaluelist)
{ 
(void)(WXIACTR_assert(ZWBBCTR, ((*(&(GJBBCTR_valuestack->Rest)))==MKJACTR_nilvaluelist)));
 /* line 1125: */
 /* line 1126: */
if (XWBBCTR_s.Fn==WBAACTR_semifn)
{ 
 /* line 1127: */
(void)(BDZACTR_evaluatenoresult((&GJBBCTR_valuestack)));
} 
else
{ 
 /* line 1128: */
 /* line 1129: */
AXBBCTR = (Answer.Type==ILJACTR_enquiryresult);
if ( AXBBCTR )
{AXBBCTR = HVBBCTR_simpleenquiry;
}
 /* line 1130: */
if (AXBBCTR)
{ 
 /* line 1131: */
(void)(SGZACTR_evaluatesimpleenquiry((&GJBBCTR_valuestack), Answer));
} 
else
{ 
 /* line 1132: */
 /* line 1133: */
(void)(UEZACTR_evaluateresult((&GJBBCTR_valuestack), Answer));
} 
} 
} 
 /* line 1134: */
 /* line 1135: */
 /* line 1137: */
WWBBCTR = A68_FALSE;
} 
break;
case 22: /* STRUCT(INT,BITS)  */
 /* line 1138: */
{ 
 /* line 1139: */
if (GJBBCTR_valuestack!=MKJACTR_nilvaluelist)
{ 
 /* line 1140: */
(void)(UEZACTR_evaluateresult((&GJBBCTR_valuestack), Answer));
} 
 /* line 1141: */
 /* line 1142: */
 /* line 1144: */
WWBBCTR = A68_FALSE;
} 
break;
case 21: /* STRUCT(INT,INT,BITS,INT)  */
BXBBCTR_s = (IVBBCTR.data.mode21);
 /* line 1145: */
{ 
(void)(A_CALLPROC(LJBBCTR_enclosedclause,(BXBBCTR_s, Body, Answer, A_LOC(A68_71 )),(BXBBCTR_s, Body, Answer, A_LOC(A68_71 ),(LJBBCTR_enclosedclause).nonlocals)));
 /* line 1146: */
HVBBCTR_simpleenquiry = A68_FALSE;
 /* line 1147: */
 /* line 1148: */
 /* line 1150: */
WWBBCTR = A68_TRUE;
} 
break;
default: 
(void)(WXIACTR_assert(DXBBCTR, A68_FALSE));
 /* line 1151: */
 /* line 1152: */
 /* line 1153: */
WWBBCTR = A68_FALSE;
break;
} 
 /* line 1155: */
EXBBCTR = WWBBCTR;
if ( !EXBBCTR ) break;
/*SKIP*/;
}
 /* line 1157: */
} 
A_PROC_EXIT(phrase);
return;
} 
#undef NL

A_STATIC A68_VOID  QEBBCTR_read(void *NonLocals)
#define NL(x) (((REBBCTR_read *)NonLocals)->x)
{ 
A68_181  SEBBCTR;  /* united object - for case conformity */
A68_181  TEBBCTR;  /* avoid structure result */
A68_181  UEBBCTR = {0};  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(read);
 /* line 75: */
SEBBCTR = (*NL(NEBBCTR_nextimperative)) ;
switch ( SEBBCTR.mode )
{ 
case 26: /* VOID */
 /* line 76: */
 /* line 77: */
A_CALLPROC(NL(Nextstreamimperative),( &TEBBCTR),( &TEBBCTR,(NL(Nextstreamimperative)).nonlocals));
(*NL(LEBBCTR_currentimperative)) = TEBBCTR;
break;
default: 
(void)((*NL(LEBBCTR_currentimperative)) = (*NL(NEBBCTR_nextimperative)));
 /* line 78: */
 /* line 79: */
(void)((*NL(NEBBCTR_nextimperative)) = A_EMPTY(UEBBCTR,26));
break;
} 
A_PROC_EXIT(read);
return;
} 
#undef NL

A_STATIC A68_VOID  WEBBCTR_lookahead(void *NonLocals)
#define NL(x) (((XEBBCTR_lookahead *)NonLocals)->x)
{ 
A68_181  YEBBCTR;  /* united object - for case conformity */
A68_181  ZEBBCTR;  /* avoid structure result */
A_PROC_ENTRY(lookahead);
 /* line 89: */
YEBBCTR = (*NL(NEBBCTR_nextimperative)) ;
switch ( YEBBCTR.mode )
{ 
case 26: /* VOID */
 /* line 90: */
 /* line 91: */
A_CALLPROC(NL(Nextstreamimperative),( &ZEBBCTR),( &ZEBBCTR,(NL(Nextstreamimperative)).nonlocals));
(*NL(NEBBCTR_nextimperative)) = ZEBBCTR;
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

A_STATIC A68_VOID  AFBBCTR_compositionmodule(void)
{ 
A_PROC_ENTRY(compositionmodule);
(void)(WXIACTR_assert(CFBBCTR, A68_FALSE));
A_PROC_EXIT(compositionmodule);
return;
} 
#undef NL
 /* line 105: */
 /* line 106: */

A_STATIC A68_VOID  HFBBCTR_module(A68_VC  Modulename, A68_BOOL  Decsmodule, A68_BOOL  Prelude, void *NonLocals)
#define NL(x) (((IFBBCTR_module *)NonLocals)->x)
{ 
A68_269  JFBBCTR_phrase_ A_UNUSED = {0};
A68_75  KFBBCTR_skiproutine;   /* proc value of non-global proc */
A68_270  SFBBCTR_routine;   /* proc value of non-global proc */
A68_277  VHBBCTR_serialclause;   /* proc value of non-global proc */
A68_279  PIBBCTR_enquiryclause;   /* proc value of non-global proc */
A68_269  DJBBCTR_phrase;   /* proc value of non-global proc */
A68_55 * FXBBCTR_endofmodule A_UNUSED = {0};
A68_64 * GXBBCTR_result A_UNUSED = {0};
A68_59  HXBBCTR;  /* collateral clause result */
A68_59  IXBBCTR_properties A_UNUSED = {0};
A68_VC  JXBBCTR;  /* OPERATORS - istruct -> vector */
A68_56 * KXBBCTR;  /* OPERATORS - istruct -> vector */
A68_64  LXBBCTR;  /* collateral clause result */
A68_65  MXBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_63  NXBBCTR;  /* collateral clause result */
A68_181  OXBBCTR;  /* united object - for case conformity */
A68_157  PXBBCTR_id A_UNUSED = {0};
A68_181  QXBBCTR;  /* united object - for case conformity */
A68_122  RXBBCTR_r A_UNUSED = {0};
A68_BOOL  SXBBCTR;  /* clause result */
A68_VC  TXBBCTR;  /* avoid structure result */
A68_122  UXBBCTR_r A_UNUSED = {0};
A68_VC  VXBBCTR;  /* avoid structure result */
A68_181  WXBBCTR;  /* united object - for case conformity */
A68_122  XXBBCTR_r A_UNUSED = {0};
A68_122  YXBBCTR;  /* clause result */
A68_122  BYBBCTR = {0};  /* OPERATORS - skip to mode */
A68_122  CYBBCTR_routine A_UNUSED = {0};
A68_181  DYBBCTR;  /* united object - for case conformity */
A68_122  EYBBCTR_r A_UNUSED = {0};
A68_BOOL  JYBBCTR;  /* clause result */
A68_BOOL  KYBBCTR;  /* clause result */
A68_VC  LYBBCTR;  /* OPERATORS - istruct -> vector */
A68_56 * MYBBCTR;  /* OPERATORS - istruct -> vector */
A68_63  NYBBCTR;  /* collateral clause result */
A68_BITS  OYBBCTR;  /* ADICOPS - >= */
A68_181  PYBBCTR;  /* united object - for case conformity */
A68_190  QYBBCTR_t A_UNUSED = {0};
A68_BOOL  RYBBCTR;  /* clause result */
A68_VC  SYBBCTR;  /* OPERATORS - istruct -> vector */
A68_56 * TYBBCTR;  /* OPERATORS - istruct -> vector */
A68_64  UYBBCTR;  /* collateral clause result */
A68_65  VYBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_63  WYBBCTR;  /* collateral clause result */
A_PROC_ENTRY(module);
 /* line 122: */
 /* line 123: */
{ 
 /* line 128: */
 /* line 132: */
A_CLOSURE( KFBBCTR_skiproutine, LFBBCTR_skiproutine, MFBBCTR_skiproutine );
(( MFBBCTR_skiproutine * ) ( KFBBCTR_skiproutine.nonlocals )) -> PEBBCTR_read = NL(PEBBCTR_read);
(( MFBBCTR_skiproutine * ) ( KFBBCTR_skiproutine.nonlocals )) -> LEBBCTR_currentimperative = NL(LEBBCTR_currentimperative);
(( MFBBCTR_skiproutine * ) ( KFBBCTR_skiproutine.nonlocals )) -> KFBBCTR_skiproutine = KFBBCTR_skiproutine;
 /* line 142: */
A_CLOSURE( SFBBCTR_routine, TFBBCTR_routine, UFBBCTR_routine );
(( UFBBCTR_routine * ) ( SFBBCTR_routine.nonlocals )) -> VEBBCTR_lookahead = NL(VEBBCTR_lookahead);
(( UFBBCTR_routine * ) ( SFBBCTR_routine.nonlocals )) -> NEBBCTR_nextimperative = NL(NEBBCTR_nextimperative);
(( UFBBCTR_routine * ) ( SFBBCTR_routine.nonlocals )) -> PEBBCTR_read = NL(PEBBCTR_read);
(( UFBBCTR_routine * ) ( SFBBCTR_routine.nonlocals )) -> KFBBCTR_skiproutine = KFBBCTR_skiproutine;
(( UFBBCTR_routine * ) ( SFBBCTR_routine.nonlocals )) -> LEBBCTR_currentimperative = NL(LEBBCTR_currentimperative);
(( UFBBCTR_routine * ) ( SFBBCTR_routine.nonlocals )) -> JFBBCTR_phrase_ = (&JFBBCTR_phrase_);
 /* line 239: */
A_CLOSURE( VHBBCTR_serialclause, WHBBCTR_serialclause, XHBBCTR_serialclause );
(( XHBBCTR_serialclause * ) ( VHBBCTR_serialclause.nonlocals )) -> JFBBCTR_phrase_ = (&JFBBCTR_phrase_);
(( XHBBCTR_serialclause * ) ( VHBBCTR_serialclause.nonlocals )) -> LEBBCTR_currentimperative = NL(LEBBCTR_currentimperative);
 /* line 320: */
A_CLOSURE( PIBBCTR_enquiryclause, QIBBCTR_enquiryclause, RIBBCTR_enquiryclause );
(( RIBBCTR_enquiryclause * ) ( PIBBCTR_enquiryclause.nonlocals )) -> JFBBCTR_phrase_ = (&JFBBCTR_phrase_);
(( RIBBCTR_enquiryclause * ) ( PIBBCTR_enquiryclause.nonlocals )) -> LEBBCTR_currentimperative = NL(LEBBCTR_currentimperative);
 /* line 353: */
A_CLOSURE( DJBBCTR_phrase, EJBBCTR_phrase, FJBBCTR_phrase );
(( FJBBCTR_phrase * ) ( DJBBCTR_phrase.nonlocals )) -> VHBBCTR_serialclause = VHBBCTR_serialclause;
(( FJBBCTR_phrase * ) ( DJBBCTR_phrase.nonlocals )) -> PEBBCTR_read = NL(PEBBCTR_read);
(( FJBBCTR_phrase * ) ( DJBBCTR_phrase.nonlocals )) -> LEBBCTR_currentimperative = NL(LEBBCTR_currentimperative);
(( FJBBCTR_phrase * ) ( DJBBCTR_phrase.nonlocals )) -> PIBBCTR_enquiryclause = PIBBCTR_enquiryclause;
(( FJBBCTR_phrase * ) ( DJBBCTR_phrase.nonlocals )) -> DJBBCTR_phrase = DJBBCTR_phrase;
(( FJBBCTR_phrase * ) ( DJBBCTR_phrase.nonlocals )) -> SFBBCTR_routine = SFBBCTR_routine;
 /* line 1159: */
JFBBCTR_phrase_ = DJBBCTR_phrase;
 /* line 1164: */
 /* line 1165: */
 /* line 1167: */
(void)(A_CALLPROC(NL(VEBBCTR_lookahead),(),((NL(VEBBCTR_lookahead)).nonlocals)));
 /* line 1169: */
 /* line 1170: */
 /* line 1171: */
if (Decsmodule)
{ 
HXBBCTR.Block = A68_FALSE;
HXBBCTR.Dynamicresult = A68_FALSE;
HXBBCTR.Discardeddynamicresult = A68_TRUE;
HXBBCTR.Type = DBAACTR_decsfn;
IXBBCTR_properties = HXBBCTR;
 /* line 1173: */
KXBBCTR = (&((&OCPACTR_currentmodule)->Uname)) ;
(void)(WTYACTR_startdecsmodule(A_ISVEC(JXBBCTR,KXBBCTR,7,A68_CHAR ), Modulename));
 /* line 1175: */
LXBBCTR.Mode = UEAACTR_voidmode;
LXBBCTR.Info = PKJACTR_defaultinfo;
LXBBCTR.Extra = A_EMPTY(MXBBCTR,3);
(void)(GXBBCTR_result = PLBBCTR_assignment(A_LOC(A68_64 ), LXBBCTR));
 /* line 1177: */
 /* line 1178: */
NXBBCTR.Value = GXBBCTR_result;
NXBBCTR.End = FXBBCTR_endofmodule;
NXBBCTR.Type = ELJACTR_voidresult;
(void)(A_CALLPROC(VHBBCTR_serialclause,(IXBBCTR_properties, NXBBCTR),(IXBBCTR_properties, NXBBCTR,(VHBBCTR_serialclause).nonlocals)));
 /* line 1180: */
 /* line 1181: */
 /* line 1182: */
(void)(BXYACTR_enddecsmodule(Modulename));
} 
else
{ 
 /* line 1183: */
OXBBCTR = (*NL(NEBBCTR_nextimperative)) ;
switch ( OXBBCTR.mode )
{ 
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
PXBBCTR_id = (OXBBCTR.data.mode11);
 /* line 1184: */
{ 
(void)(CNVACTR_initialdummydec(PXBBCTR_id));
(void)(A_CALLPROC(NL(PEBBCTR_read),(),((NL(PEBBCTR_read)).nonlocals)));
(void)(A_CALLPROC(NL(VEBBCTR_lookahead),(),((NL(VEBBCTR_lookahead)).nonlocals)));
 /* line 1185: */
 /* line 1186: */
QXBBCTR = (*NL(NEBBCTR_nextimperative)) ;
switch ( QXBBCTR.mode )
{ 
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
RXBBCTR_r = (QXBBCTR.data.mode12);
 /* line 1187: */
KDHACTR_message( 59, &TXBBCTR );
SXBBCTR = A_VC_EQ(RXBBCTR_r.Name,TXBBCTR);
break;
default: 
 /* line 1188: */
 /* line 1189: */
 /* line 1190: */
SXBBCTR = A68_FALSE;
break;
} 
} 
break;
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
UXBBCTR_r = (OXBBCTR.data.mode12);
 /* line 1191: */
 /* line 1192: */
KDHACTR_message( 59, &VXBBCTR );
SXBBCTR = A_VC_EQ(UXBBCTR_r.Name,VXBBCTR);
break;
default: 
 /* line 1193: */
 /* line 1194: */
 /* line 1196: */
SXBBCTR = A68_FALSE;
break;
} 
if (SXBBCTR)
{ 
(void)(A_CALLPROC(NL(PEBBCTR_read),(),((NL(PEBBCTR_read)).nonlocals)));
 /* line 1197: */
 /* line 1198: */
 /* line 1199: */
WXBBCTR = (*NL(LEBBCTR_currentimperative)) ;
switch ( WXBBCTR.mode )
{ 
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
XXBBCTR_r = (WXBBCTR.data.mode12);
 /* line 1200: */
YXBBCTR = XXBBCTR_r;
break;
default: 
(void)(WXIACTR_assert(AYBBCTR, A68_FALSE));
 /* line 1201: */
YXBBCTR = BYBBCTR;
break;
} 
CYBBCTR_routine = YXBBCTR;
 /* line 1203: */
 /* line 1204: */
 /* line 1206: */
if (IOMACTR_modetype(CYBBCTR_routine.Mode)==GEAACTR_procp)
{ 
for ( ;; )
{ 
 /* line 1207: */
(void)(A_CALLPROC(NL(VEBBCTR_lookahead),(),((NL(VEBBCTR_lookahead)).nonlocals)));
 /* line 1208: */
 /* line 1209: */
 /* line 1210: */
DYBBCTR = (*NL(NEBBCTR_nextimperative)) ;
switch ( DYBBCTR.mode )
{ 
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
EYBBCTR_r = (DYBBCTR.data.mode12);
 /* line 1211: */
 /* line 1212: */
{ 
(void)(WXIACTR_assert(IYBBCTR, A_VC_EQ(EYBBCTR_r.Name,HYBBCTR)));
 /* line 1213: */
(void)(A_CALLPROC(NL(PEBBCTR_read),(),((NL(PEBBCTR_read)).nonlocals)));
 /* line 1214: */
(void)(A_CALLPROC(KFBBCTR_skiproutine,(),((KFBBCTR_skiproutine).nonlocals)));
 /* line 1215: */
 /* line 1216: */
 /* line 1217: */
JYBBCTR = A68_TRUE;
} 
break;
default: 
 /* line 1218: */
 /* line 1219: */
JYBBCTR = A68_FALSE;
break;
} 
 /* line 1221: */
KYBBCTR = JYBBCTR;
if ( !KYBBCTR ) break;
/*SKIP*/;
}
 /* line 1222: */
} 
 /* line 1224: */
 /* line 1225: */
 /* line 1226: */
 /* line 1227: */
 /* line 1229: */
MYBBCTR = (&((&OCPACTR_currentmodule)->Uname)) ;
(void)(WVYACTR_startprocmodule(CYBBCTR_routine, A_ISVEC(LYBBCTR,MYBBCTR,7,A68_CHAR ), Modulename, GXBBCTR_result));
 /* line 1231: */
 /* line 1232: */
if (OTMACTR_dynamic((*(&(GXBBCTR_result->Mode)))))
{ 
 /* line 1233: */
(void)(PXIACTR_error(340));
} 
 /* line 1235: */
 /* line 1236: */
 /* line 1237: */
NYBBCTR.Value = GXBBCTR_result;
NYBBCTR.End = FXBBCTR_endofmodule;
NYBBCTR.Type = HLJACTR_routineresult;
 /* line 1238: */
 /* line 1239: */
OYBBCTR = CYBBCTR_routine.Props ;
(void)(A_CALLPROC(DJBBCTR_phrase,(A_LB_GE(OYBBCTR,NCAACTR_ccbit), NYBBCTR, A68_FALSE),(A_LB_GE(OYBBCTR,NCAACTR_ccbit), NYBBCTR, A68_FALSE,(DJBBCTR_phrase).nonlocals)));
 /* line 1240: */
(void)(BWYACTR_endmodule());
 /* line 1243: */
(void)(A_CALLPROC(NL(PEBBCTR_read),(),((NL(PEBBCTR_read)).nonlocals)));
 /* line 1244: */
 /* line 1245: */
 /* line 1246: */
 /* line 1247: */
if ((IOMACTR_modetype(CYBBCTR_routine.Mode)==FEAACTR_proc)&((*(&(GXBBCTR_result->Mode)))!=UEAACTR_voidmode))
{ 
(void)(A_CALLPROC(NL(PEBBCTR_read),(),((NL(PEBBCTR_read)).nonlocals)));
} 
 /* line 1248: */
(void)(A_CALLPROC(NL(PEBBCTR_read),(),((NL(PEBBCTR_read)).nonlocals)));
 /* line 1249: */
 /* line 1250: */
PYBBCTR = (*NL(LEBBCTR_currentimperative)) ;
switch ( PYBBCTR.mode )
{ 
case 22: /* STRUCT(INT,BITS)  */
QYBBCTR_t = (PYBBCTR.data.mode22);
 /* line 1251: */
RYBBCTR = (QYBBCTR_t.Fn!=HCAACTR_finishfn);
break;
default: 
 /* line 1252: */
 /* line 1253: */
RYBBCTR = A68_TRUE;
break;
} 
if (RYBBCTR)
{ 
 /* line 1254: */
 /* line 1255: */
 /* line 1257: */
(void)(SXIACTR_terminalerror(628));
} 
} 
else
{ 
TYBBCTR = (&((&OCPACTR_currentmodule)->Uname)) ;
(void)(JSYACTR_startmodule(A_ISVEC(SYBBCTR,TYBBCTR,7,A68_CHAR ), Modulename));
 /* line 1258: */
UYBBCTR.Mode = UEAACTR_voidmode;
UYBBCTR.Info = PKJACTR_defaultinfo;
UYBBCTR.Extra = A_EMPTY(VYBBCTR,3);
(void)(GXBBCTR_result = PLBBCTR_assignment(A_LOC(A68_64 ), UYBBCTR));
 /* line 1259: */
 /* line 1260: */
 /* line 1261: */
 /* line 1262: */
WYBBCTR.Value = GXBBCTR_result;
 /* line 1264: */
WYBBCTR.End = FXBBCTR_endofmodule;
WYBBCTR.Type = ELJACTR_voidresult;
 /* line 1265: */
 /* line 1266: */
(void)(A_CALLPROC(DJBBCTR_phrase,(A68_FALSE, WYBBCTR, A68_FALSE),(A68_FALSE, WYBBCTR, A68_FALSE,(DJBBCTR_phrase).nonlocals)));
 /* line 1267: */
 /* line 1268: */
 /* line 1269: */
(void)(BWYACTR_endmodule());
} 
} 
} 
A_PROC_EXIT(module);
return;
} 
#undef NL
 /* line 59: */
 /* line 61: */

A68_VOID  KEBBCTR_translator(A68_265  Nextstreamimperative, A68_116 * Xsizes, A68_172  Keptdecnos)
{ 
A68_181  MEBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_181  LEBBCTR_currentimperative A_UNUSED = {0};
A68_181  OEBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_181  NEBBCTR_nextimperative A_UNUSED = {0};
A68_75  PEBBCTR_read;   /* proc value of non-global proc */
A68_75  VEBBCTR_lookahead;   /* proc value of non-global proc */
A68_268  GFBBCTR_module;   /* proc value of non-global proc */
A68_VC  XYBBCTR;  /* OPERATORS - istruct -> vector */
A68_89 * YYBBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  ZYBBCTR;  /* avoid structure result */
A68_VC  AZBBCTR_modulename A_UNUSED = {0};
A68_BOOL  BZBBCTR_decsmodule A_UNUSED = {0};
A68_BOOL  CZBBCTR_contextvoid A_UNUSED = {0};
A_PROC_ENTRY(translator);
 /* line 62: */
 /* line 64: */
{ 
LEBBCTR_currentimperative = A_EMPTY(MEBBCTR,26);
 /* line 65: */
NEBBCTR_nextimperative = A_EMPTY(OEBBCTR,26);
 /* line 67: */
 /* line 73: */
 /* line 74: */
A_CLOSURE( PEBBCTR_read, QEBBCTR_read, REBBCTR_read );
(( REBBCTR_read * ) ( PEBBCTR_read.nonlocals )) -> NEBBCTR_nextimperative = (&NEBBCTR_nextimperative);
(( REBBCTR_read * ) ( PEBBCTR_read.nonlocals )) -> LEBBCTR_currentimperative = (&LEBBCTR_currentimperative);
(( REBBCTR_read * ) ( PEBBCTR_read.nonlocals )) -> Nextstreamimperative = Nextstreamimperative;
 /* line 81: */
 /* line 87: */
 /* line 88: */
A_CLOSURE( VEBBCTR_lookahead, WEBBCTR_lookahead, XEBBCTR_lookahead );
(( XEBBCTR_lookahead * ) ( VEBBCTR_lookahead.nonlocals )) -> NEBBCTR_nextimperative = (&NEBBCTR_nextimperative);
(( XEBBCTR_lookahead * ) ( VEBBCTR_lookahead.nonlocals )) -> Nextstreamimperative = Nextstreamimperative;
 /* line 94: */
 /* line 100: */
 /* line 103: */
 /* line 104: */
A_CLOSURE( GFBBCTR_module, HFBBCTR_module, IFBBCTR_module );
(( IFBBCTR_module * ) ( GFBBCTR_module.nonlocals )) -> PEBBCTR_read = PEBBCTR_read;
(( IFBBCTR_module * ) ( GFBBCTR_module.nonlocals )) -> LEBBCTR_currentimperative = (&LEBBCTR_currentimperative);
(( IFBBCTR_module * ) ( GFBBCTR_module.nonlocals )) -> VEBBCTR_lookahead = VEBBCTR_lookahead;
(( IFBBCTR_module * ) ( GFBBCTR_module.nonlocals )) -> NEBBCTR_nextimperative = (&NEBBCTR_nextimperative);
 /* line 1273: */
YYBBCTR = (&(PCPACTR_currentmodinfo->Name)) ;
RMAAOSF_scanto( ' ', A_ISVEC(XYBBCTR,YYBBCTR,32,A68_CHAR ), &ZYBBCTR );
AZBBCTR_modulename = ZYBBCTR;
 /* line 1275: */
BZBBCTR_decsmodule = ((*(&(PCPACTR_currentmodinfo->Type)))==(-1));
 /* line 1276: */
CZBBCTR_contextvoid = ((*(&((&(PCPACTR_currentmodinfo->L))->Level)))==0);
 /* line 1278: */
(void)(JZZACTR_initialise(Xsizes, (&LEBBCTR_currentimperative), Keptdecnos));
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
(void)(A_CALLPROC(GFBBCTR_module,(AZBBCTR_modulename, BZBBCTR_decsmodule, CZBBCTR_contextvoid),(AZBBCTR_modulename, BZBBCTR_decsmodule, CZBBCTR_contextvoid,(GFBBCTR_module).nonlocals)));
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
void CEBBCTR(void)   /* initialise DECS compiler */
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
QHABCTR();   /* USE loops */
OZZACTR();   /* USE loads */
AZZACTR();   /* USE initialiser */
GKJACTR();   /* USE incvalue */
XFAACTR();   /* USE incoperfn */
UAAACTR();   /* USE incimperatives */
MMVACTR();   /* USE identifiers */
HPIACTR();   /* USE environment */
BPLACTR();   /* USE environ */
BGYACTR();   /* USE entryandreturn */
HCZACTR();   /* USE clauses */
THAACTR();   /* USE centities */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/compiler.a68";
A_config.translation_time = "Thu Nov  5 21:38:58 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "BEBBCTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 21:38:58 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS compiler);
(void)(UEAALIB_a68config(LGAALIB_configinfo, GEBBCTR));
 /* line 57: */
 /* line 58: */
 /* line 1292: */
A_PROC_EXIT(DECS compiler);
} 
#undef NL
/* end of translation of compiler.a68 */
