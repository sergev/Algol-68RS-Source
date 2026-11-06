/* UNAME:BIABCTR */
#include <algol68/Asupport.h>

A_PROCEDURE(A68_VOID ,A68t31,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t31  A68_31 ;    /* PROC(BOOL) MODE26 */
A_ISTRUCT(A68_CHAR ,7,A68t33);
typedef struct A68t33  A68_33 ;    /* STRUCT 7 CHAR */
struct A68t32{
struct A68t33  Name;
A_PAD_ISTRUCT(A68_33 ,PAD_1)
A68_BOOL  Set;
A_PAD_BOOL(PAD_2)
};
typedef struct A68t32  A68_32 ;    /* STRUCT(MODE33,BOOL)  */
struct A68t34{
A68_INT  Labno;
A_PAD_INT(PAD_3)
};
typedef struct A68t34  A68_34 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_VOID ,A68t35,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t35  A68_35 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_INT *,A68t36,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t36  A68_36 ;    /* PROC(REF INT,MODE26) REF INT */

A_PROCEDURE(A68_VOID ,A68t37,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t37  A68_37 ;    /* PROC(REF MODE26,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t38,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t38  A68_38 ;    /* PROC(REF MODE26,CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t39,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t39  A68_39 ;    /* PROC(MODE26,CHAR) MODE26 */
struct A68t41 ;

A_PROCEDURE(A68_VOID ,A68t40,(struct A68t41 ,A68_VC *),(struct A68t41 ,A68_VC *,void *));
typedef struct A68t40  A68_40 ;    /* PROC(MODE41) REF MODE26 */
A_VECTOR(A68_VC ,A68t41);
typedef struct A68t41  A68_41 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_INT ,A68t42,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t42  A68_42 ;    /* PROC(CHAR,MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t43,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t43  A68_43 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t44,(A68_VC ,A68_CHAR ),(A68_VC ,A68_CHAR ,void *));
typedef struct A68t44  A68_44 ;    /* PROC(REF MODE26,CHAR) VOID */
A_ISTRUCT(A68_CHAR ,4,A68t45);
typedef struct A68t45  A68_45 ;    /* STRUCT 4 CHAR */

A_PROCEDURE(struct A68t45 ,A68t46,(A68_INT ),(A68_INT ,void *));
typedef struct A68t46  A68_46 ;    /* PROC(INT) MODE45 */

A_PROCEDURE(A68_INT ,A68t47,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t47  A68_47 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_VOID ,A68t48,(A68_CHAR ,A68_VC ,A68_VC *),(A68_CHAR ,A68_VC ,A68_VC *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(CHAR,REF MODE26) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t49,(A68_VC ),(A68_VC ,void *));
typedef struct A68t49  A68_49 ;    /* PROC(MODE26) INT */

A_PROCEDURE(A68_BITS ,A68t50,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t50  A68_50 ;    /* PROC(BITS,BITS) BITS */

A_PROCEDURE(A68_LBITS ,A68t51,(A68_LBITS ,A68_LBITS ),(A68_LBITS ,A68_LBITS ,void *));
typedef struct A68t51  A68_51 ;    /* PROC(LONG BITS,LONG BITS) LONG BITS */

A_PROCEDURE(A68_BITS *,A68t52,(A68_BITS *,A68_BITS ),(A68_BITS *,A68_BITS ,void *));
typedef struct A68t52  A68_52 ;    /* PROC(REF BITS,BITS) REF BITS */

A_PROCEDURE(A68_VOID ,A68t53,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t53  A68_53 ;    /* PROC(INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t54,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t54  A68_54 ;    /* PROC(INT,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t55,(A68_LINT ,A68_INT ,A68_VC *),(A68_LINT ,A68_INT ,A68_VC *,void *));
typedef struct A68t55  A68_55 ;    /* PROC(LONG INT,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t56,(A68_CHAR ,A68_INT *,A68_VC ),(A68_CHAR ,A68_INT *,A68_VC ,void *));
typedef struct A68t56  A68_56 ;    /* PROC(CHAR,REF INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t57,(A68_LBITS ,A68_INT ,A68_VC *),(A68_LBITS ,A68_INT ,A68_VC *,void *));
typedef struct A68t57  A68_57 ;    /* PROC(LONG BITS,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t58,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t58  A68_58 ;    /* PROC(REF INT,MODE26) BOOL */
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

A_PROCEDURE(A68_VOID ,A68t60,(struct A68t59 ,struct A68t32 **,A68_BOOL *),(struct A68t59 ,struct A68t32 **,A68_BOOL *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(MODE59,REF REF MODE32,REF BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t61,(struct A68t59 ,struct A68t32 *,struct A68t32 *,A68_BOOL ,A68_BOOL ),(struct A68t59 ,struct A68t32 *,struct A68t32 *,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t61  A68_61 ;    /* PROC(MODE59,REF MODE32,REF MODE32,BOOL,BOOL) VOID */
struct A68t63 ;

A_PROCEDURE(A68_VOID ,A68t62,(A68_BOOL ,A68_BOOL ,struct A68t63 ),(A68_BOOL ,A68_BOOL ,struct A68t63 ,void *));
typedef struct A68t62  A68_62 ;    /* PROC(BOOL,BOOL,MODE63) VOID */
struct A68t63{
struct A68t64 * Value;
struct A68t32 * End;
A68_INT  Type;
A_PAD_INT(PAD_8)
};
typedef struct A68t63  A68_63 ;    /* STRUCT(REF MODE64,REF MODE32,INT)  */
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
struct A68t33  Name;
A_PAD_ISTRUCT(A68_33 ,PAD_11)
A68_INT  Mode;
A_PAD_INT(PAD_12)
};
typedef struct A68t68  A68_68 ;    /* STRUCT(MODE33,INT)  */
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
struct A68t34  mode7;
struct A68t69  mode8;
struct A68t70  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t65  A68_65 ;    /* UNION(LONG BITS,MODE66,VOID,MODE67,MODE68,MODE26,MODE34,MODE69,MODE70)  */
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

A_PROCEDURE(A68_VOID ,A68t73,(A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t32 *),(A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t32 *,void *));
typedef struct A68t73  A68_73 ;    /* PROC(BOOL,BOOL,BOOL,REF MODE32) VOID */

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

A_PROCEDURE(A68_VOID ,A68t83,(struct A68t59 ,struct A68t63 ,struct A68t32 *,A68_BOOL ,A68_BOOL ,A68_BOOL ),(struct A68t59 ,struct A68t63 ,struct A68t32 *,A68_BOOL ,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t83  A68_83 ;    /* PROC(MODE59,MODE63,REF MODE32,BOOL,BOOL,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t84,(struct A68t71 **,struct A68t63 ),(struct A68t71 **,struct A68t63 ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(REF REF MODE71,MODE63) VOID */

A_PROCEDURE(A68_VOID ,A68t85,(struct A68t71 **),(struct A68t71 **,void *));
typedef struct A68t85  A68_85 ;    /* PROC(REF REF MODE71) VOID */

A_PROCEDURE(A68_VOID ,A68t86,(A68_VC ,A68_INT ,struct A68t71 *,struct A68t68 *),(A68_VC ,A68_INT ,struct A68t71 *,struct A68t68 *,void *));
typedef struct A68t86  A68_86 ;    /* PROC(MODE26,INT,REF MODE71) MODE68 */

A_PROCEDURE(A68_VOID ,A68t87,(A68_VC ),(A68_VC ,void *));
typedef struct A68t87  A68_87 ;    /* PROC(MODE26) VOID */
struct A68t89 ;

A_PROCEDURE(A68_VOID ,A68t88,(struct A68t89 ),(struct A68t89 ,void *));
typedef struct A68t88  A68_88 ;    /* PROC(MODE89) VOID */
A_VECTOR(struct A68t90 ,A68t89);
typedef struct A68t89  A68_89 ;    /* VECTOR [] MODE90 */
struct A68t90 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_SINT  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t90  A68_90 ;    /* UNION(CHAR,MODE26,SHORT INT)  */
struct A68t92 ;

A_PROCEDURE(A68_VOID ,A68t91,(struct A68t92 ,A68_INT ),(struct A68t92 ,A68_INT ,void *));
typedef struct A68t91  A68_91 ;    /* PROC(MODE92,INT) VOID */
A_VECTOR(struct A68t93 ,A68t92);
typedef struct A68t92  A68_92 ;    /* VECTOR [] MODE93 */
struct A68t93 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_INT  mode3;
A68_SINT  mode4;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t93  A68_93 ;    /* UNION(CHAR,MODE26,INT,SHORT INT)  */

A_PROCEDURE(A68_INT ,A68t94,(A68_INT ),(A68_INT ,void *));
typedef struct A68t94  A68_94 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t95,(A68_INT ),(A68_INT ,void *));
typedef struct A68t95  A68_95 ;    /* PROC(INT) BOOL */
struct A68t96{
A68_INT  Level;
A_PAD_INT(PAD_21)
A68_INT  Block;
A_PAD_INT(PAD_22)
};
typedef struct A68t96  A68_96 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t97,(struct A68t96 *),(struct A68t96 *,void *));
typedef struct A68t97  A68_97 ;    /* PROC MODE96 */

A_PROCEDURE(A68_INT ,A68t98,(void),(void *));
typedef struct A68t98  A68_98 ;    /* PROC INT */

A_PROCEDURE(A68_BOOL ,A68t99,(void),(void *));
typedef struct A68t99  A68_99 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t100,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t100  A68_100 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t101,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t101  A68_101 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t102,(struct A68t96 ,struct A68t96 ),(struct A68t96 ,struct A68t96 ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(MODE96,MODE96) BOOL */

A_PROCEDURE(A68_BOOL ,A68t103,(struct A68t96 ),(struct A68t96 ,void *));
typedef struct A68t103  A68_103 ;    /* PROC(MODE96) BOOL */

A_PROCEDURE(A68_VOID ,A68t104,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t104  A68_104 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t105,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t105  A68_105 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t106,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t106  A68_106 ;    /* PROC(INT) REF MODE26 */
struct A68t108 ;

A_PROCEDURE(A68_VOID ,A68t107,(A68_INT ,struct A68t108 ),(A68_INT ,struct A68t108 ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(INT,MODE108) VOID */
A_ROW(A68_VC ,A68t108,1);
typedef struct A68t108  A68_108 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t109,(void),(void *));
typedef struct A68t109  A68_109 ;    /* PROC BITS */
struct A68t110{
A68_INT  Cfile;
A_PAD_INT(PAD_23)
};
typedef struct A68t110  A68_110 ;    /* STRUCT(INT)  */
struct A68t111{
A68_INT  Seedfile;
A_PAD_INT(PAD_24)
};
typedef struct A68t111  A68_111 ;    /* STRUCT(INT)  */
struct A68t112 { A68_INT mode; union {
struct A68t110  mode1;
struct A68t111  mode2;
struct A68t33  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t112  A68_112 ;    /* UNION(MODE110,MODE111,MODE33,VOID)  */
struct A68t113{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_25)
A68_VC  Sourcefile;
struct A68t33  Nameseed;
A_PAD_ISTRUCT(A68_33 ,PAD_26)
struct A68t112  Nameseedorigin;
struct A68t114 * Used_modules;
A68_VC  Commandline;
struct A68t115 * Environment;
};
typedef struct A68t113  A68_113 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE33,MODE112,REF MODE114,REF MODE26,REF MODE115)  */
struct A68t114{
A68_VC  Modinfo_file;
struct A68t114 * Next;
};
typedef struct A68t114  A68_114 ;    /* STRUCT(REF MODE26,REF MODE114)  */
struct A68t115{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t115 * Next;
};
typedef struct A68t115  A68_115 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE115)  */
struct A68t117 ;
struct A68t118 ;

A_PROCEDURE(struct A68t117 *,A68t116,(A68_VC ,struct A68t118 *,A68_VC *),(A68_VC ,struct A68t118 *,A68_VC *,void *));
typedef struct A68t116  A68_116 ;    /* PROC(MODE26,REF MODE118,REF REF MODE26) REF MODE117 */
struct A68t117{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t117  A68_117 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t118{
A68_VC  Dir;
struct A68t118 * Next;
};
typedef struct A68t118  A68_118 ;    /* STRUCT(REF MODE26,REF MODE118)  */
struct A68t119{
A68_INT  Parameters;
A_PAD_INT(PAD_27)
A68_INT  Result;
A_PAD_INT(PAD_28)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_29)
};
typedef struct A68t119  A68_119 ;    /* STRUCT(INT,INT,BOOL)  */
A_ISTRUCT(A68_CHAR ,32,A68t121);
typedef struct A68t121  A68_121 ;    /* STRUCT 32 CHAR */
struct A68t120{
A68_INT  Mode;
A_PAD_INT(PAD_30)
A68_INT  Offset;
A_PAD_INT(PAD_31)
struct A68t121  Name;
A_PAD_ISTRUCT(A68_121 ,PAD_32)
};
typedef struct A68t120  A68_120 ;    /* STRUCT(INT,INT,MODE121)  */
struct A68t123 ;

A_PROCEDURE(A68_VOID ,A68t122,(A68_INT ,struct A68t123 *),(A68_INT ,struct A68t123 *,void *));
typedef struct A68t122  A68_122 ;    /* PROC(INT) REF MODE123 */
A_VECTOR(A68_INT ,A68t123);
typedef struct A68t123  A68_123 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t124,(struct A68t120 *,A68_VC *),(struct A68t120 *,A68_VC *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(REF MODE120) MODE26 */

A_PROCEDURE(A68_VOID ,A68t125,(A68_INT ,A68_VC ,struct A68t68 *),(A68_INT ,A68_VC ,struct A68t68 *,void *));
typedef struct A68t125  A68_125 ;    /* PROC(INT,MODE26) MODE68 */
struct A68t127 ;

A_PROCEDURE(A68_VOID ,A68t126,(struct A68t127 ,A68_INT ),(struct A68t127 ,A68_INT ,void *));
typedef struct A68t126  A68_126 ;    /* PROC(REF MODE127,INT) VOID */
A_ROW(struct A68t128 ,A68t127,1);
typedef struct A68t127  A68_127 ;    /* [] MODE128 */
struct A68t138{
A68_INT  Mode;
A_PAD_INT(PAD_33)
};
typedef struct A68t138  A68_138 ;    /* STRUCT(INT)  */
struct A68t128 { A68_INT mode; union {
A68_INT  mode1;
struct A68t129 * mode2;
struct A68t130 * mode3;
struct A68t131 * mode4;
struct A68t132 * mode5;
struct A68t133 * mode6;
struct A68t134 * mode7;
struct A68t135 * mode8;
struct A68t136 * mode9;
struct A68t137 * mode10;
struct A68t138  mode11;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t128  A68_128 ;    /* UNION(INT,REF MODE129,REF MODE130,REF MODE131,REF MODE132,REF MODE133,REF MODE134,REF MODE135,REF MODE136,REF MODE137,MODE138)  */
struct A68t129{
A68_INT  Rdenno;
A_PAD_INT(PAD_34)
struct A68t142 * Modelist;
};
typedef struct A68t129  A68_129 ;    /* STRUCT(INT,REF MODE142)  */
struct A68t130{
A68_INT  Deproc;
A_PAD_INT(PAD_35)
struct A68t142 * Pars;
};
typedef struct A68t130  A68_130 ;    /* STRUCT(INT,REF MODE142)  */
struct A68t131{
A68_INT  Rdenno;
A_PAD_INT(PAD_36)
A68_INT  Deflex;
A_PAD_INT(PAD_37)
struct A68t141 * Sels;
};
typedef struct A68t131  A68_131 ;    /* STRUCT(INT,INT,REF MODE141)  */
struct A68t132{
A68_INT  Rdenno;
A_PAD_INT(PAD_38)
A68_INT  Imode;
A_PAD_INT(PAD_39)
A68_INT  Length;
A_PAD_INT(PAD_40)
A68_INT  Deflex;
A_PAD_INT(PAD_41)
};
typedef struct A68t132  A68_132 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t133{
A68_INT  Deproc;
A_PAD_INT(PAD_42)
};
typedef struct A68t133  A68_133 ;    /* STRUCT(INT)  */
struct A68t134{
A68_INT  Rdenno;
A_PAD_INT(PAD_43)
A68_INT  Vecmode;
A_PAD_INT(PAD_44)
A68_INT  Deflex;
A_PAD_INT(PAD_45)
};
typedef struct A68t134  A68_134 ;    /* STRUCT(INT,INT,INT)  */
struct A68t135{
A68_INT  Rdenno;
A_PAD_INT(PAD_46)
A68_INT  Mode;
A_PAD_INT(PAD_47)
A68_INT  Nods;
A_PAD_INT(PAD_48)
A68_INT  Deflex;
A_PAD_INT(PAD_49)
};
typedef struct A68t135  A68_135 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t136{
A68_INT  Mode;
A_PAD_INT(PAD_50)
struct A68t140 * Stenlist;
};
typedef struct A68t136  A68_136 ;    /* STRUCT(INT,REF MODE140)  */
struct A68t137{
A68_INT  Mode;
A_PAD_INT(PAD_51)
A68_INT  Modeproc;
A_PAD_INT(PAD_52)
struct A68t139 * El;
};
typedef struct A68t137  A68_137 ;    /* STRUCT(INT,INT,REF MODE139)  */
struct A68t139{
struct A68t137 * Am;
struct A68t139 * Rest;
};
typedef struct A68t139  A68_139 ;    /* STRUCT(REF MODE137,REF MODE139)  */
struct A68t140{
A68_INT  Mode;
A_PAD_INT(PAD_53)
A68_INT  Rdenno;
A_PAD_INT(PAD_54)
struct A68t140 * Rest;
};
typedef struct A68t140  A68_140 ;    /* STRUCT(INT,INT,REF MODE140)  */
struct A68t141{
A68_INT  Mode;
A_PAD_INT(PAD_55)
A68_INT  Fieldno;
A_PAD_INT(PAD_56)
struct A68t121  Name;
A_PAD_ISTRUCT(A68_121 ,PAD_57)
struct A68t141 * Rest;
};
typedef struct A68t141  A68_141 ;    /* STRUCT(INT,INT,MODE121,REF MODE141)  */
struct A68t142{
A68_INT  Mode;
A_PAD_INT(PAD_58)
struct A68t142 * Rest;
};
typedef struct A68t142  A68_142 ;    /* STRUCT(INT,REF MODE142)  */

A_PROCEDURE(A68_VOID ,A68t143,(A68_INT ,struct A68t119 *),(A68_INT ,struct A68t119 *,void *));
typedef struct A68t143  A68_143 ;    /* PROC(INT) MODE119 */
struct A68t145 ;

A_PROCEDURE(A68_VOID ,A68t144,(A68_INT ,struct A68t145 *),(A68_INT ,struct A68t145 *,void *));
typedef struct A68t144  A68_144 ;    /* PROC(INT) REF MODE145 */
A_VECTOR(struct A68t120 ,A68t145);
typedef struct A68t145  A68_145 ;    /* VECTOR [] MODE120 */

A_PROCEDURE(A68_INT ,A68t146,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t146  A68_146 ;    /* PROC(INT,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t147,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t147  A68_147 ;    /* PROC(INT,INT) MODE26 */

A_PROCEDURE(A68_BOOL ,A68t148,(struct A68t64 *,struct A68t64 *),(struct A68t64 *,struct A68t64 *,void *));
typedef struct A68t148  A68_148 ;    /* PROC(REF MODE64,REF MODE64) BOOL */

A_PROCEDURE(A68_BOOL ,A68t149,(struct A68t64 *),(struct A68t64 *,void *));
typedef struct A68t149  A68_149 ;    /* PROC(REF MODE64) BOOL */

A_PROCEDURE(A68_BOOL ,A68t150,(struct A68t64 *,A68_LBITS ),(struct A68t64 *,A68_LBITS ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(REF MODE64,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t151,(struct A68t64 *),(struct A68t64 *,void *));
typedef struct A68t151  A68_151 ;    /* PROC(REF MODE64) LONG BITS */

A_PROCEDURE(A68_VOID ,A68t152,(struct A68t64 *,A68_VC *),(struct A68t64 *,A68_VC *,void *));
typedef struct A68t152  A68_152 ;    /* PROC(REF MODE64) MODE26 */

A_PROCEDURE(struct A68t64 *,A68t153,(struct A68t64 *,A68_INT ),(struct A68t64 *,A68_INT ,void *));
typedef struct A68t153  A68_153 ;    /* PROC(REF MODE64,INT) REF MODE64 */

A_PROCEDURE(A68_INT ,A68t154,(struct A68t70 ),(struct A68t70 ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(MODE70) INT */

A_PROCEDURE(A68_BOOL ,A68t155,(struct A68t64 *,A68_BITS ),(struct A68t64 *,A68_BITS ,void *));
typedef struct A68t155  A68_155 ;    /* PROC(REF MODE64,BITS) BOOL */

A_PROCEDURE(struct A68t64 *,A68t156,(struct A68t71 *,A68_INT ),(struct A68t71 *,A68_INT ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(REF MODE71,INT) REF MODE64 */

A_PROCEDURE(struct A68t71 *,A68t157,(struct A68t71 *),(struct A68t71 *,void *));
typedef struct A68t157  A68_157 ;    /* PROC(REF MODE71) REF MODE71 */
struct A68t159 ;

A_PROCEDURE(struct A68t64 *,A68t158,(A68_INT ,A68_INT ,A68_BITS ,struct A68t159 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t159 ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(INT,INT,BITS,MODE159) REF MODE64 */
A_VECTOR(struct A68t64 *,A68t159);
typedef struct A68t159  A68_159 ;    /* VECTOR [] REF MODE64 */

A_PROCEDURE(A68_VOID ,A68t160,(struct A68t64 *,A68_BOOL ,A68_VC *),(struct A68t64 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t160  A68_160 ;    /* PROC(REF MODE64,BOOL) MODE26 */

A_PROCEDURE(A68_LINT ,A68t161,(struct A68t64 ),(struct A68t64 ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(MODE64) LONG INT */
struct A68t162 { A68_INT mode; union {
struct A68t64 * mode1;
A68_VC  mode2;
struct A68t68  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t162  A68_162 ;    /* UNION(REF MODE64,MODE26,MODE68)  */

A_PROCEDURE(A68_VOID ,A68t163,(struct A68t162 ,A68_VC *),(struct A68t162 ,A68_VC *,void *));
typedef struct A68t163  A68_163 ;    /* PROC(MODE162) MODE26 */
struct A68t165 ;

A_PROCEDURE(A68_VOID ,A68t164,(struct A68t165 ,A68_VC *),(struct A68t165 ,A68_VC *,void *));
typedef struct A68t164  A68_164 ;    /* PROC(MODE165) MODE26 */
A_VECTOR(struct A68t162 ,A68t165);
typedef struct A68t165  A68_165 ;    /* VECTOR [] MODE162 */

A_PROCEDURE(A68_VOID ,A68t166,(A68_VC ,struct A68t165 ,A68_VC *),(A68_VC ,struct A68t165 ,A68_VC *,void *));
typedef struct A68t166  A68_166 ;    /* PROC(MODE26,MODE165) MODE26 */

A_PROCEDURE(A68_VOID ,A68t167,(struct A68t165 ),(struct A68t165 ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(MODE165) VOID */

A_PROCEDURE(A68_VOID ,A68t168,(A68_VC ,A68_INT ,struct A68t165 ,struct A68t68 *),(A68_VC ,A68_INT ,struct A68t165 ,struct A68t68 *,void *));
typedef struct A68t168  A68_168 ;    /* PROC(MODE26,INT,MODE165) MODE68 */

A_PROCEDURE(struct A68t64 *,A68t169,(struct A68t64 *),(struct A68t64 *,void *));
typedef struct A68t169  A68_169 ;    /* PROC(REF MODE64) REF MODE64 */

A_PROCEDURE(struct A68t64 *,A68t170,(A68_VC ,struct A68t64 *),(A68_VC ,struct A68t64 *,void *));
typedef struct A68t170  A68_170 ;    /* PROC(MODE26,REF MODE64) REF MODE64 */

A_PROCEDURE(A68_VOID ,A68t171,(struct A68t75 ),(struct A68t75 ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(MODE75) VOID */

A_PROCEDURE(A68_VOID ,A68t172,(struct A68t87 ),(struct A68t87 ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE87) VOID */

A_PROCEDURE(A68_VOID ,A68t173,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,55,A68t174);
typedef struct A68t174  A68_174 ;    /* STRUCT 55 CHAR */
struct A68t175{
struct A68t64 * Control;
struct A68t64 * Step;
A68_BOOL  Forpart;
A_PAD_BOOL(PAD_59)
A68_BOOL  Frompart;
A_PAD_BOOL(PAD_60)
A68_BOOL  Bypart;
A_PAD_BOOL(PAD_61)
A68_BOOL  Topart;
A_PAD_BOOL(PAD_62)
};
typedef struct A68t175  A68_175 ;    /* STRUCT(REF MODE64,REF MODE64,BOOL,BOOL,BOOL,BOOL)  */
struct A68t176{
struct A68t64  Ident;
A68_VC  Control;
A68_BOOL  Needstemp;
A_PAD_BOOL(PAD_63)
};
typedef struct A68t176  A68_176 ;    /* STRUCT(MODE64,REF MODE26,BOOL)  */

A_PROCEDURE(struct A68t64 *,A68t177,(struct A68t64 *,struct A68t64 ),(struct A68t64 *,struct A68t64 ,void *));
typedef struct A68t177  A68_177 ;    /* PROC(REF MODE64,MODE64) REF MODE64 */

A_PROCEDURE(struct A68t65 *,A68t178,(struct A68t65 *,struct A68t65 ),(struct A68t65 *,struct A68t65 ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(REF MODE65,MODE65) REF MODE65 */
#define A68_179  A68_VC 
#define A68t179 A68t26            /* FLEX VECTOR [] CHAR */

A_PROCEDURE(A68_VOID ,A68t180,(struct A68t175 *,A68_INT ,struct A68t71 **),(struct A68t175 *,A68_INT ,struct A68t71 **,void *));
typedef struct A68t180  A68_180 ;    /* PROC(REF MODE175,INT,REF REF MODE71) VOID */

A_PROCEDURE(A68_VOID ,A68t181,(struct A68t64 *,A68_BOOL ),(struct A68t64 *,A68_BOOL ,void *));
typedef struct A68t181  A68_181 ;    /* PROC(REF MODE64,BOOL) VOID */
A_ISTRUCT(A68_CHAR ,15,A68t182);
typedef struct A68t182  A68_182 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t183);
typedef struct A68t183  A68_183 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(struct A68t93 ,5,A68t184);
typedef struct A68t184  A68_184 ;    /* STRUCT 5 MODE93 */

A_PROCEDURE(A68_VOID ,A68t185,(A68_VC *),(A68_VC *,void *));
typedef struct A68t185  A68_185 ;    /* PROC MODE26 */
A_ISTRUCT(A68_CHAR ,12,A68t186);
typedef struct A68t186  A68_186 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t187);
typedef struct A68t187  A68_187 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(struct A68t93 ,6,A68t188);
typedef struct A68t188  A68_188 ;    /* STRUCT 6 MODE93 */
A_ISTRUCT(A68_CHAR ,2,A68t189);
typedef struct A68t189  A68_189 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t93 ,4,A68t190);
typedef struct A68t190  A68_190 ;    /* STRUCT 4 MODE93 */
A_ISTRUCT(A68_CHAR ,8,A68t191);
typedef struct A68t191  A68_191 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(struct A68t93 ,8,A68t192);
typedef struct A68t192  A68_192 ;    /* STRUCT 8 MODE93 */
A_ISTRUCT(A68_CHAR ,9,A68t193);
typedef struct A68t193  A68_193 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(struct A68t93 ,3,A68t194);
typedef struct A68t194  A68_194 ;    /* STRUCT 3 MODE93 */
A_ISTRUCT(A68_CHAR ,10,A68t195);
typedef struct A68t195  A68_195 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(struct A68t93 ,2,A68t196);
typedef struct A68t196  A68_196 ;    /* STRUCT 2 MODE93 */
A_VECTOR(struct A68t176 ,A68t197);
typedef struct A68t197  A68_197 ;    /* VECTOR [] MODE176 */

A_PROCEDURE(A68_VOID ,A68t198,(struct A68t197 ,struct A68t71 **),(struct A68t197 ,struct A68t71 **,void *));
typedef struct A68t198  A68_198 ;    /* PROC(REF MODE197,REF REF MODE71) VOID */
A_VECTOR(A68_VC ,A68t199);
typedef struct A68t199  A68_199 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t200,(A68_BOOL ,struct A68t199 *),(A68_BOOL ,struct A68t199 *,void *));
typedef struct A68t200  A68_200 ;    /* PROC(BOOL) MODE199 */

A_PROCEDURE(A68_VOID ,A68t201,(A68_BOOL ,struct A68t123 *),(A68_BOOL ,struct A68t123 *,void *));
typedef struct A68t201  A68_201 ;    /* PROC(BOOL) MODE123 */
A_ISTRUCT(A68_CHAR ,26,A68t202);
typedef struct A68t202  A68_202 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t203);
typedef struct A68t203  A68_203 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t204);
typedef struct A68t204  A68_204 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t205);
typedef struct A68t205  A68_205 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t206);
typedef struct A68t206  A68_206 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,48,A68t207);
typedef struct A68t207  A68_207 ;    /* STRUCT 48 CHAR */
A_ISTRUCT(struct A68t162 ,2,A68t208);
typedef struct A68t208  A68_208 ;    /* STRUCT 2 MODE162 */
A_ISTRUCT(A68_CHAR ,14,A68t209);
typedef struct A68t209  A68_209 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(struct A68t93 ,7,A68t210);
typedef struct A68t210  A68_210 ;    /* STRUCT 7 MODE93 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from values --- */
extern A68_BOOL  ZWPACTR_isconstant(struct A68t64 *);
extern A68_BOOL  SXPACTR_isident(struct A68t64 *);
extern A68_BOOL  EYPACTR_isskip(struct A68t64 *);
extern A68_BOOL  WXPACTR_istemp(struct A68t64 *);
extern A68_LBITS  NYPACTR_getconstant(struct A68t64 *);
extern A68_VOID  DAQACTR_getcfragment(struct A68t64 *,A68_VC *);
extern A68_BITS  PKJACTR_defaultinfo;
extern A68_VOID  JEQACTR_bracketcfragment(struct A68t64 *,A68_VC *);
extern A68_VOID  APQACTR_usemacro(A68_VC ,struct A68t165 ,A68_VC *);
extern A68_64 * RQQACTR_yield(A68_VC ,struct A68t64 *);
/* --- End of imports from values --- */


/* --- Imports from modes --- */
extern A68_VOID  QMOACTR_declarectemporary(A68_INT ,A68_VC ,A68_68 *);
extern A68_INT  QVMACTR_dimensions(A68_INT );
extern A68_94  UVMACTR_elementmode;
extern A68_BOOL  RSMACTR_hasrefs(A68_INT );
extern A68_BOOL  ARMACTR_isarray(A68_INT );
extern A68_BOOL  FRMACTR_isfirmarray(A68_INT );
extern A68_BOOL  KRMACTR_isflexarray(A68_INT );
extern A68_BOOL  QQMACTR_isvector(A68_INT );
extern A68_BOOL  XRMACTR_isistruct(A68_INT );
extern A68_94  WVMACTR_istructlength;
extern A68_BOOL  MOMACTR_hasoneref(A68_INT );
/* --- End of imports from modes --- */


/* --- Imports from incmode --- */
#define EFAACTR_intmode 15
#define VFAACTR_refmark 1024
/* --- End of imports from incmode --- */


/* --- Imports from environment --- */
/* --- End of imports from environment --- */


/* --- Imports from environ --- */
extern A68_INT  NSLACTR_codestream(A68_INT );
extern A68_INT  VRLACTR_currentlevel(void);
/* --- End of imports from environ --- */


/* --- Imports from coutput --- */
extern A68_VOID  MDMACTR_writecstream(struct A68t92 ,A68_INT );
/* --- End of imports from coutput --- */


/* --- Imports from clauses --- */
extern A68_74  JYQACTR_evaluate;
/* --- End of imports from clauses --- */


/* --- Imports from usefulops --- */
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- Imports from centities --- */
extern A68_SINT  EIAACTR_cnewline;
extern A68_VOID  JIAACTR_bracket(A68_VC ,A68_VC *);
/* --- End of imports from centities --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void OUPACTR(void);   /* values */
extern void DNMACTR(void);   /* modes */
extern void ZDAACTR(void);   /* incmode */
extern void HPIACTR(void);   /* environment */
extern void BPLACTR(void);   /* environ */
extern void PTLACTR(void);   /* coutput */
extern void TCZACTR(void);   /* clauses */
extern void IKAAOSF(void);   /* usefulops */
extern void THAACTR(void);   /* centities */
/* --- end of DECS initialisation functions --- */
static A68_174   FIABCTR = {"$Id: loops.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,GIABCTR,FIABCTR,55)
static A68_64 * YIABCTR_value1 A_UNUSED;
static A68_182   KJABCTR = {"to part of loop"}; 
A_GISVEC(A68_VC ,MJABCTR,KJABCTR,15)
static A68_182   NJABCTR = {"by part of loop"}; 
A_GISVEC(A68_VC ,OJABCTR,NJABCTR,15)
static A68_183   WJABCTR = {" = "}; 
A_GISVEC(A68_VC ,XJABCTR,WJABCTR,3)
static A68_186   ALABCTR = {"loop control"}; 
A_GISVEC(A68_VC ,BLABCTR,ALABCTR,12)
static A68_187   HLABCTR = {"for ( "}; 
A_GISVEC(A68_VC ,ILABCTR,HLABCTR,6)
static A68_183   MLABCTR = {" = "}; 
A_GISVEC(A68_VC ,NLABCTR,MLABCTR,3)
static A68_45   YLABCTR = {" <= "}; 
A_GISVEC(A68_VC ,ZLABCTR,YLABCTR,4)
static A68_45   JMABCTR = {" >= "}; 
A_GISVEC(A68_VC ,KMABCTR,JMABCTR,4)
static A68_189   RMABCTR = {"; "}; 
A_GISVEC(A68_VC ,SMABCTR,RMABCTR,2)
static A68_45   ANABCTR = {" += "}; 
A_GISVEC(A68_VC ,BNABCTR,ANABCTR,4)
static A68_189   GNABCTR = {" )"}; 
A_GISVEC(A68_VC ,HNABCTR,GNABCTR,2)
static A68_189   PNABCTR = {"( "}; 
A_GISVEC(A68_VC ,QNABCTR,PNABCTR,2)
static A68_191   UNABCTR = {" > 0 && "}; 
A_GISVEC(A68_VC ,VNABCTR,UNABCTR,8)
static A68_45   ZNABCTR = {" <= "}; 
A_GISVEC(A68_VC ,AOABCTR,ZNABCTR,4)
static A68_45   EOABCTR = {") ||"}; 
A_GISVEC(A68_VC ,FOABCTR,EOABCTR,4)
static A68_189   LOABCTR = {"( "}; 
A_GISVEC(A68_VC ,MOABCTR,LOABCTR,2)
static A68_191   QOABCTR = {" < 0 && "}; 
A_GISVEC(A68_VC ,ROABCTR,QOABCTR,8)
static A68_45   VOABCTR = {" >= "}; 
A_GISVEC(A68_VC ,WOABCTR,VOABCTR,4)
static A68_45   APABCTR = {") ||"}; 
A_GISVEC(A68_VC ,BPABCTR,APABCTR,4)
static A68_189   HPABCTR = {"( "}; 
A_GISVEC(A68_VC ,IPABCTR,HPABCTR,2)
static A68_193   MPABCTR = {" == 0 ) ;"}; 
A_GISVEC(A68_VC ,NPABCTR,MPABCTR,9)
static A68_45   UPABCTR = {" += "}; 
A_GISVEC(A68_VC ,VPABCTR,UPABCTR,4)
static A68_189   ZPABCTR = {" )"}; 
A_GISVEC(A68_VC ,AQABCTR,ZPABCTR,2)
static A68_187   KQABCTR = {"for ( "}; 
A_GISVEC(A68_VC ,LQABCTR,KQABCTR,6)
static A68_183   PQABCTR = {" = "}; 
A_GISVEC(A68_VC ,QQABCTR,PQABCTR,3)
static A68_189   UQABCTR = {";;"}; 
A_GISVEC(A68_VC ,VQABCTR,UQABCTR,2)
static A68_45   CRABCTR = {" += "}; 
A_GISVEC(A68_VC ,DRABCTR,CRABCTR,4)
static A68_183   IRABCTR = {" ) "}; 
A_GISVEC(A68_VC ,JRABCTR,IRABCTR,3)
static A68_195   BSABCTR = {"for ( ;; )"}; 
A_GISVEC(A68_VC ,CSABCTR,BSABCTR,10)
static A68_189   ISABCTR = {"{ "}; 
A_GISVEC(A68_VC ,JSABCTR,ISABCTR,2)
static A68_186   UTABCTR = {"forall yield"}; 
A_GISVEC(A68_VC ,VTABCTR,UTABCTR,12)
static A68_202   CVABCTR = {"forall control - ref [][]x"}; 
A_GISVEC(A68_VC ,DVABCTR,CVABCTR,26)
static A68_203   HWABCTR = {"forall control - []x"}; 
A_GISVEC(A68_VC ,IWABCTR,HWABCTR,20)
static A68_204   WWABCTR = {"forall loop counter"}; 
A_GISVEC(A68_VC ,XWABCTR,WWABCTR,19)
static A68_183   DXABCTR = {" = "}; 
static A68_33   JXABCTR = {".upb -1"}; 
A_GISVEC(A68_VC ,LXABCTR,JXABCTR,7)
static A68_205   MXABCTR = {".dim[0].upb"}; 
static A68_183   NXABCTR = {" - "}; 
static A68_205   OXABCTR = {".dim[0].lwb"}; 
A_GISVEC(A68_VC ,QXABCTR,MXABCTR,11)
A_GISVEC(A68_VC ,RXABCTR,NXABCTR,3)
A_GISVEC(A68_VC ,TXABCTR,OXABCTR,11)
A_GISVEC(A68_VC ,UXABCTR,DXABCTR,3)
static A68_206   FYABCTR = {"if ( "}; 
static A68_45   GYABCTR = {" != "}; 
static A68_33   JYABCTR = {".upb -1"}; 
A_GISVEC(A68_VC ,KYABCTR,JYABCTR,7)
static A68_205   LYABCTR = {".dim[0].upb"}; 
static A68_183   MYABCTR = {" - "}; 
static A68_205   NYABCTR = {".dim[0].lwb"}; 
A_GISVEC(A68_VC ,OYABCTR,LYABCTR,11)
A_GISVEC(A68_VC ,PYABCTR,MYABCTR,3)
A_GISVEC(A68_VC ,QYABCTR,NYABCTR,11)
A_GISVEC(A68_VC ,RYABCTR,FYABCTR,5)
A_GISVEC(A68_VC ,SYABCTR,GYABCTR,4)
static A68_189   VYABCTR = {" )"}; 
A_GISVEC(A68_VC ,WYABCTR,VYABCTR,2)
static A68_207   CZABCTR = {"{ A_ERROR( \"mismatched bounds in FORALL; row no "}; 
static A68_206   DZABCTR = {"\"); }"}; 
A_GISVEC(A68_VC ,EZABCTR,CZABCTR,48)
A_GISVEC(A68_VC ,GZABCTR,DZABCTR,5)
static A68_183   RZABCTR = {"A_R"}; 
static A68_206   SZABCTR = {"STRIP"}; 
A_GISVEC(A68_VC ,ZZABCTR,RZABCTR,3)
A_GISVEC(A68_VC ,BABBCTR,SZABCTR,5)
static A68_183   DABBCTR = {" = "}; 
static A68_206   EABBCTR = {".data"}; 
A_GISVEC(A68_VC ,FABBCTR,DABBCTR,3)
A_GISVEC(A68_VC ,GABBCTR,EABBCTR,5)
static A68_193   PABBCTR = {".data += "}; 
static A68_209   QABBCTR = {".dim[0].stride"}; 
A_GISVEC(A68_VC ,SABBCTR,PABBCTR,9)
A_GISVEC(A68_VC ,TABBCTR,QABBCTR,14)
static A68_189   VABBCTR = {"++"}; 
A_GISVEC(A68_VC ,XABBCTR,VABBCTR,2)
static A68_45   YABBCTR = {" += "}; 
static A68_209   ZABBCTR = {".dim[0].stride"}; 
A_GISVEC(A68_VC ,ABBBCTR,YABBCTR,4)
A_GISVEC(A68_VC ,BBBBCTR,ZABBCTR,14)
static A68_187   MBBBCTR = {"for (;"}; 
A_GISVEC(A68_VC ,NBBBCTR,MBBBCTR,6)
static A68_191   RBBBCTR = {"-- >= 0;"}; 
A_GISVEC(A68_VC ,SBBBCTR,RBBBCTR,8)
static A68_183   MCBBCTR = {") )"}; 
A_GISVEC(A68_VC ,NCBBCTR,MCBBCTR,3)
static A68_45   ADBBCTR = {" = *"}; 
A_GISVEC(A68_VC ,BDBBCTR,ADBBCTR,4)
static A68_195   ODBBCTR = {"A_ENQ_SKIP"}; 
A_GISVEC(A68_VC ,QDBBCTR,ODBBCTR,10)
static A68_187   UDBBCTR = {"if ( !"}; 
A_GISVEC(A68_VC ,VDBBCTR,UDBBCTR,6)
static A68_193   ZDBBCTR = {" ) break;"}; 
A_GISVEC(A68_VC ,AEBBCTR,ZDBBCTR,9)
A68_75  MEBBCTR_od A_UNUSED;
typedef struct   /* env of non-global proc */
{
A68_INT  DJABCTR_codestream;
A_PAD_INT(PAD_64)
} IJABCTR_evaluatetoorbypart;
typedef struct   /* env of non-global proc */
{
A68_175 * Loop;
A68_71 ** Frobytlist;
} JKABCTR_evaluatefrompart;
typedef struct   /* env of non-global proc */
{
A68_175 * Loop;
A68_71 ** Frobytlist;
A68_181  GJABCTR_evaluatetoorbypart;
} QKABCTR_setstep;
typedef struct   /* env of non-global proc */
{
A68_INT  DJABCTR_codestream;
A_PAD_INT(PAD_65)
} SRABCTR_voidresult;
typedef struct   /* env of non-global proc */
{
A68_197  Controls;
} USABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_197  Controls;
} CTABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  CUABCTR_rowname;
} GUABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  NUABCTR_controlname;
} RUABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  HVABCTR_controlname;
} LVABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  TVABCTR_controlname;
} XVABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  MWABCTR_controlname;
} QWABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_197  Controls;
A68_123  FTABCTR_modeofrows;
A68_199  XSABCTR_rows;
} OZABCTR_initialise;
typedef struct   /* env of non-global proc */
{
A68_123  FTABCTR_modeofrows;
A68_197  Controls;
A68_199  XSABCTR_rows;
} KABBCTR_increment;

A_STATIC A68_64 * MIABCTR_assignment(A68_64 * KIABCTR_anonymous, A68_64  LIABCTR_anonymous);

A_STATIC A68_65 * RIABCTR_assignment(A68_65 * PIABCTR_anonymous, A68_65  QIABCTR_anonymous);

A68_VOID  CJABCTR_for(A68_175 * Loop, A68_INT  Frobytcount, A68_71 ** Frobytlist);

A_STATIC A68_VOID  HJABCTR_evaluatetoorbypart(A68_64 * Part, A68_BOOL  Topart, void *NonLocals);

A_STATIC A68_VOID  IKABCTR_evaluatefrompart(A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PKABCTR_setstep(void *NonLocals);

A_STATIC A68_VOID  RRABCTR_voidresult(A68_64 * Value, void *NonLocals);

A68_VOID  QSABCTR_forall(A68_197  Controls, A68_71 ** Foralllist);

A_STATIC A68_VOID  TSABCTR_generator(A68_BOOL  RSABCTR_anonymous, A68_199  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BTABCTR_generator(A68_BOOL  ZSABCTR_anonymous, A68_123  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FUABCTR_generator(A68_BOOL  DUABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QUABCTR_generator(A68_BOOL  OUABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KVABCTR_generator(A68_BOOL  IVABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WVABCTR_generator(A68_BOOL  UVABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PWABCTR_generator(A68_BOOL  NWABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NZABCTR_initialise(A68_INT  I, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JABBCTR_increment(A68_INT  I, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  KDBBCTR_while(void);

A68_VOID  MDBBCTR_whiledo(A68_64 * Enquiry);

A68_VOID  FEBBCTR_whileod(void);

A_STATIC A68_65 * RIABCTR_assignment(A68_65 * PIABCTR_anonymous, A68_65  QIABCTR_anonymous)
{ 
A68_65  SIABCTR;  /* united object - for case conformity */
A68_VC  TIABCTR_anonymous A_UNUSED = {0};
A68_VC  UIABCTR;  /* OPERATORS - copy to flex */
A68_179 * VIABCTR;  /* YIELD */
A68_65 * WIABCTR;  /* clause result */
{ 
(*A_NILCHECK(PIABCTR_anonymous)) = QIABCTR_anonymous;
SIABCTR = QIABCTR_anonymous ;
switch ( SIABCTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
TIABCTR_anonymous = (SIABCTR.data.mode6);
VIABCTR = &(PIABCTR_anonymous-> data.mode6) ;
(void)((*A_NILCHECK(VIABCTR)) = A_VCOPY(TIABCTR_anonymous,UIABCTR,A68_CHAR ));
break;
default: 
/*SKIP*/;
break;
} 
WIABCTR = PIABCTR_anonymous;
} 
return( WIABCTR );
} 
#undef NL

A_STATIC A68_VOID  HJABCTR_evaluatetoorbypart(A68_64 * Part, A68_BOOL  Topart, void *NonLocals)
#define NL(x) (((IJABCTR_evaluatetoorbypart *)NonLocals)->x)
{ 
A68_BOOL  JJABCTR;  /* optbool result */
A68_VC  LJABCTR;  /* clause result */
A68_68  PJABCTR;  /* avoid structure result */
A68_68  QJABCTR_temp A_UNUSED = {0};
A68_184  RJABCTR;  /* collateral clause result */
A68_VC  SJABCTR;  /* OPERATORS - istruct -> vector */
A68_33  TJABCTR;  /* OPERATORS - istruct -> vector */
A68_93  UJABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  VJABCTR;  /* YIELD */
A68_93  YJABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ZJABCTR;  /* YIELD */
A68_VC  AKABCTR;  /* avoid structure result */
A68_93  BKABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  CKABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  DKABCTR;  /* YIELD */
A68_93  EKABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  FKABCTR;  /* OPERATORS - istruct -> vector */
A68_65  GKABCTR = {0};  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(evaluatetoorbypart);
 /* line 91: */
 /* line 92: */
{ 
(void)(A_CALLPROC(JYQACTR_evaluate,(Part),(Part,(JYQACTR_evaluate).nonlocals)));
 /* line 93: */
JJABCTR = (!ZWPACTR_isconstant(Part));
if ( JJABCTR )
{JJABCTR = (!WXPACTR_istemp(Part));
}
 /* line 94: */
 /* line 96: */
if ((!Topart)|JJABCTR)
{ 
 /* line 97: */
 /* line 98: */
 /* line 99: */
if (Topart)
{ 
LJABCTR = MJABCTR;
} 
else
{ 
LJABCTR = OJABCTR;
} 
QMOACTR_declarectemporary( (*A_NILCHECK((&(A_NILCHECK(Part)->Mode)))), LJABCTR, &PJABCTR );
QJABCTR_temp = PJABCTR;
 /* line 100: */
 /* line 101: */
TJABCTR = QJABCTR_temp.Name ;
VJABCTR = A_HISVEC(SJABCTR,TJABCTR,7,A68_CHAR ) ;
RJABCTR.data[0] = A_UNITE(UJABCTR,mode2,2,VJABCTR);
 /* line 102: */
ZJABCTR = XJABCTR ;
RJABCTR.data[1] = A_UNITE(YJABCTR,mode2,2,ZJABCTR);
DAQACTR_getcfragment( Part, &AKABCTR );
RJABCTR.data[2] = A_UNITE(BKABCTR,mode2,2,AKABCTR);
DKABCTR = ';' ;
RJABCTR.data[3] = A_UNITE(CKABCTR,mode1,1,DKABCTR);
RJABCTR.data[4] = A_UNITE(EKABCTR,mode4,4,EIAACTR_cnewline);
 /* line 103: */
(void)(MDMACTR_writecstream(A_HISVEC(FKABCTR,RJABCTR,5,A68_93 ), NL(DJABCTR_codestream)));
 /* line 104: */
 /* line 105: */
 /* line 106: */
(void)(RIABCTR_assignment((&(A_NILCHECK(Part)->Extra)), A_UNITE(GKABCTR,mode5,5,QJABCTR_temp)));
} 
} 
A_PROC_EXIT(evaluatetoorbypart);
return;
} 
#undef NL

A_STATIC A68_VOID  IKABCTR_evaluatefrompart(A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((JKABCTR_evaluatefrompart *)NonLocals)->x)
{ 
A68_64 * KKABCTR_value A_UNUSED = {0};
A68_VC  LKABCTR;  /* clause result */
A68_VC  MKABCTR;  /* avoid structure result */
A68_VC  NKABCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(evaluatefrompart);
{ 
 /* line 115: */
 /* line 116: */
if (*A_NILCHECK((&(A_NILCHECK(NL(Loop))->Frompart))))
{ 
KKABCTR_value = (&(A_NILCHECK((*A_NILCHECK(NL(Frobytlist))))->Value));
 /* line 117: */
(void)((*A_NILCHECK(NL(Frobytlist))) = (*A_NILCHECK((&(A_NILCHECK((*A_NILCHECK(NL(Frobytlist))))->Rest)))));
 /* line 118: */
(void)(A_CALLPROC(JYQACTR_evaluate,(KKABCTR_value),(KKABCTR_value,(JYQACTR_evaluate).nonlocals)));
 /* line 119: */
 /* line 120: */
 /* line 122: */
DAQACTR_getcfragment( KKABCTR_value, &MKABCTR );
LKABCTR = MKABCTR;
} 
else
{ 
 /* line 123: */
LKABCTR = A_HVEC(NKABCTR,'1',A68_CHAR );
} 
} 
A_PROC_EXIT(evaluatefrompart);
*ReturnedValue = (LKABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  PKABCTR_setstep(void *NonLocals)
#define NL(x) (((QKABCTR_setstep *)NonLocals)->x)
{ 
A68_64 ** RKABCTR;  /* YIELD */
A68_64 ** SKABCTR;  /* YIELD */
A_PROC_ENTRY(setstep);
{ 
 /* line 135: */
 /* line 136: */
if (*A_NILCHECK((&(A_NILCHECK(NL(Loop))->Bypart))))
{ 
RKABCTR = (&(A_NILCHECK(NL(Loop))->Step)) ;
(void)((*A_NILCHECK(RKABCTR)) = (&(A_NILCHECK((*A_NILCHECK(NL(Frobytlist))))->Value)));
 /* line 137: */
(void)((*A_NILCHECK(NL(Frobytlist))) = (*A_NILCHECK((&(A_NILCHECK((*A_NILCHECK(NL(Frobytlist))))->Rest)))));
 /* line 138: */
 /* line 139: */
 /* line 140: */
(void)(A_CALLPROC(NL(GJABCTR_evaluatetoorbypart),((*A_NILCHECK((&(A_NILCHECK(NL(Loop))->Step)))), A68_FALSE),((*A_NILCHECK((&(A_NILCHECK(NL(Loop))->Step)))), A68_FALSE,(NL(GJABCTR_evaluatetoorbypart)).nonlocals)));
} 
else
{ 
 /* line 141: */
 /* line 142: */
SKABCTR = (&(A_NILCHECK(NL(Loop))->Step)) ;
(*A_NILCHECK(SKABCTR)) = YIABCTR_value1;
} 
} 
A_PROC_EXIT(setstep);
return;
} 
#undef NL

A_STATIC A68_VOID  RRABCTR_voidresult(A68_64 * Value, void *NonLocals)
#define NL(x) (((SRABCTR_voidresult *)NonLocals)->x)
{ 
A68_194  TRABCTR;  /* collateral clause result */
A68_VC  URABCTR;  /* avoid structure result */
A68_93  VRABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  WRABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  XRABCTR;  /* YIELD */
A68_93  YRABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  ZRABCTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(voidresult);
 /* line 244: */
 /* line 245: */
{ 
(void)(A_CALLPROC(JYQACTR_evaluate,(Value),(Value,(JYQACTR_evaluate).nonlocals)));
 /* line 246: */
 /* line 247: */
DAQACTR_getcfragment( Value, &URABCTR );
TRABCTR.data[0] = A_UNITE(VRABCTR,mode2,2,URABCTR);
XRABCTR = ';' ;
TRABCTR.data[1] = A_UNITE(WRABCTR,mode1,1,XRABCTR);
TRABCTR.data[2] = A_UNITE(YRABCTR,mode4,4,EIAACTR_cnewline);
 /* line 248: */
 /* line 249: */
(void)(MDMACTR_writecstream(A_HISVEC(ZRABCTR,TRABCTR,3,A68_93 ), NL(DJABCTR_codestream)));
} 
A_PROC_EXIT(voidresult);
return;
} 
#undef NL

A_STATIC A68_VOID  TSABCTR_generator(A68_BOOL  RSABCTR_anonymous, A68_199  *ReturnedValue, void *NonLocals)
#define NL(x) (((USABCTR_generator *)NonLocals)->x)
{ 
A68_199  VSABCTR;  /* clause result */
A68_199  WSABCTR;  /* OPERATORS - dynamic generator */
{ 
WSABCTR.upb = NL(Controls).upb ;
( RSABCTR_anonymous? A_VLOC(A68_VC ,WSABCTR): A_VHEAP(A68_VC ,WSABCTR) );
VSABCTR = WSABCTR;
} 
*ReturnedValue = (VSABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  BTABCTR_generator(A68_BOOL  ZSABCTR_anonymous, A68_123  *ReturnedValue, void *NonLocals)
#define NL(x) (((CTABCTR_generator *)NonLocals)->x)
{ 
A68_123  DTABCTR;  /* clause result */
A68_123  ETABCTR;  /* OPERATORS - dynamic generator */
{ 
ETABCTR.upb = NL(Controls).upb ;
( ZSABCTR_anonymous? A_VLOC(A68_INT ,ETABCTR): A_VHEAP(A68_INT ,ETABCTR) );
DTABCTR = ETABCTR;
} 
*ReturnedValue = (DTABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  FUABCTR_generator(A68_BOOL  DUABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((GUABCTR_generator *)NonLocals)->x)
{ 
A68_VC  HUABCTR;  /* clause result */
A68_VC  IUABCTR;  /* OPERATORS - dynamic generator */
{ 
IUABCTR.upb = NL(CUABCTR_rowname).upb ;
( DUABCTR_anonymous? A_VLOC(A68_CHAR ,IUABCTR): A_VHEAP(A68_CHAR ,IUABCTR) );
HUABCTR = IUABCTR;
} 
*ReturnedValue = (HUABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  QUABCTR_generator(A68_BOOL  OUABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((RUABCTR_generator *)NonLocals)->x)
{ 
A68_VC  SUABCTR;  /* clause result */
A68_VC  TUABCTR;  /* OPERATORS - dynamic generator */
{ 
TUABCTR.upb = NL(NUABCTR_controlname).upb ;
( OUABCTR_anonymous? A_VLOC(A68_CHAR ,TUABCTR): A_VHEAP(A68_CHAR ,TUABCTR) );
SUABCTR = TUABCTR;
} 
*ReturnedValue = (SUABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  KVABCTR_generator(A68_BOOL  IVABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((LVABCTR_generator *)NonLocals)->x)
{ 
A68_VC  MVABCTR;  /* clause result */
A68_VC  NVABCTR;  /* OPERATORS - dynamic generator */
{ 
NVABCTR.upb = NL(HVABCTR_controlname).upb ;
( IVABCTR_anonymous? A_VLOC(A68_CHAR ,NVABCTR): A_VHEAP(A68_CHAR ,NVABCTR) );
MVABCTR = NVABCTR;
} 
*ReturnedValue = (MVABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  WVABCTR_generator(A68_BOOL  UVABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((XVABCTR_generator *)NonLocals)->x)
{ 
A68_VC  YVABCTR;  /* clause result */
A68_VC  ZVABCTR;  /* OPERATORS - dynamic generator */
{ 
ZVABCTR.upb = NL(TVABCTR_controlname).upb ;
( UVABCTR_anonymous? A_VLOC(A68_CHAR ,ZVABCTR): A_VHEAP(A68_CHAR ,ZVABCTR) );
YVABCTR = ZVABCTR;
} 
*ReturnedValue = (YVABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  PWABCTR_generator(A68_BOOL  NWABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((QWABCTR_generator *)NonLocals)->x)
{ 
A68_VC  RWABCTR;  /* clause result */
A68_VC  SWABCTR;  /* OPERATORS - dynamic generator */
{ 
SWABCTR.upb = NL(MWABCTR_controlname).upb ;
( NWABCTR_anonymous? A_VLOC(A68_CHAR ,SWABCTR): A_VHEAP(A68_CHAR ,SWABCTR) );
RWABCTR = SWABCTR;
} 
*ReturnedValue = (RWABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  NZABCTR_initialise(A68_INT  I, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((OZABCTR_initialise *)NonLocals)->x)
{ 
A68_VC  PZABCTR_ctrl A_UNUSED = {0};
A68_BOOL  QZABCTR;  /* clause result */
A68_208  TZABCTR;  /* collateral clause result */
A68_162  UZABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  VZABCTR;  /* YIELD */
A68_162  WZABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  XZABCTR;  /* clause result */
A68_165  YZABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  AABBCTR;  /* avoid structure result */
A68_VC  CABBCTR;  /* avoid structure result */
A_PROC_ENTRY(initialise);
 /* line 442: */
{ 
PZABCTR_ctrl = (*A_NILCHECK((&(A_NILCHECK((&A_VINDEX(NL(Controls),I)))->Control))));
 /* line 443: */
 /* line 444: */
 /* line 445: */
QZABCTR = (ARMACTR_isarray((*A_NILCHECK((&A_VINDEX(NL(FTABCTR_modeofrows),I)))))&(QVMACTR_dimensions((*A_NILCHECK((&A_VINDEX(NL(FTABCTR_modeofrows),I)))))>1));
if (QZABCTR)
{ 
 /* line 446: */
VZABCTR = (*A_NILCHECK((&A_VINDEX(NL(XSABCTR_rows),I)))) ;
TZABCTR.data[0] = A_UNITE(UZABCTR,mode2,2,VZABCTR);
 /* line 447: */
TZABCTR.data[1] = A_UNITE(WZABCTR,mode2,2,PZABCTR_ctrl);
 /* line 448: */
ROAAOSF_whole( QVMACTR_dimensions((*A_NILCHECK((&A_VINDEX(NL(FTABCTR_modeofrows),I))))), 0, &AABBCTR );
APQACTR_usemacro( A_VC_PLUS(A_VC_PLUS(ZZABCTR,AABBCTR),BABBCTR), A_HISVEC(YZABCTR,TZABCTR,2,A68_162 ), &CABBCTR );
XZABCTR = CABBCTR;
} 
else
{ 
 /* line 449: */
XZABCTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(PZABCTR_ctrl,FABBCTR),(*A_NILCHECK((&A_VINDEX(NL(XSABCTR_rows),I))))),GABBCTR);
} 
} 
A_PROC_EXIT(initialise);
*ReturnedValue = (XZABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  JABBCTR_increment(A68_INT  I, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((KABBCTR_increment *)NonLocals)->x)
{ 
A68_INT  LABBCTR_origmde A_UNUSED = {0};
A68_VC  MABBCTR_ctrl A_UNUSED = {0};
A68_BOOL  NABBCTR;  /* optbool result */
A68_BOOL  OABBCTR;  /* clause result */
A68_VC  RABBCTR;  /* clause result */
A68_BOOL  UABBCTR;  /* optbool result */
A68_VC  WABBCTR;  /* clause result */
A_PROC_ENTRY(increment);
 /* line 452: */
{ 
LABBCTR_origmde = (*A_NILCHECK((&A_VINDEX(NL(FTABCTR_modeofrows),I))));
 /* line 453: */
MABBCTR_ctrl = (*A_NILCHECK((&(A_NILCHECK((&A_VINDEX(NL(Controls),I)))->Control))));
 /* line 454: */
 /* line 455: */
NABBCTR = ARMACTR_isarray(LABBCTR_origmde);
if ( NABBCTR )
{ /* line 456: */
NABBCTR = (QVMACTR_dimensions(LABBCTR_origmde)>1);
}
OABBCTR = NABBCTR;
if (OABBCTR)
{ 
 /* line 457: */
RABBCTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(MABBCTR_ctrl,SABBCTR),(*A_NILCHECK((&A_VINDEX(NL(XSABCTR_rows),I))))),TABBCTR);
} 
else
{ 
UABBCTR = QQMACTR_isvector(LABBCTR_origmde);
if ( ! UABBCTR )
{ /* line 458: */
UABBCTR = XRMACTR_isistruct(LABBCTR_origmde);
}
 /* line 459: */
if (UABBCTR)
{ 
WABBCTR = XABBCTR;
} 
else
{ 
 /* line 460: */
 /* line 461: */
WABBCTR = A_VC_PLUS(A_VC_PLUS(ABBBCTR,(*A_NILCHECK((&A_VINDEX(NL(XSABCTR_rows),I))))),BBBBCTR);
} 
RABBCTR = A_VC_PLUS(MABBCTR_ctrl,WABBCTR);
} 
} 
A_PROC_EXIT(increment);
*ReturnedValue = (RABBCTR);
return;
} 
#undef NL

A_STATIC A68_64 * MIABCTR_assignment(A68_64 * KIABCTR_anonymous, A68_64  LIABCTR_anonymous)
{ 
A68_INT * NIABCTR;  /* YIELD */
A68_BITS * OIABCTR;  /* YIELD */
A68_64 * XIABCTR;  /* clause result */
{ 
NIABCTR = (&(A_NILCHECK(KIABCTR_anonymous)->Mode)) ;
(*A_NILCHECK(NIABCTR)) = LIABCTR_anonymous.Mode;
OIABCTR = (&(A_NILCHECK(KIABCTR_anonymous)->Info)) ;
(*A_NILCHECK(OIABCTR)) = LIABCTR_anonymous.Info;
(void)(RIABCTR_assignment((&(A_NILCHECK(KIABCTR_anonymous)->Extra)), LIABCTR_anonymous.Extra));
XIABCTR = KIABCTR_anonymous;
} 
return( XIABCTR );
} 
#undef NL
 /* line 71: */
 /* line 73: */

A68_VOID  CJABCTR_for(A68_175 * Loop, A68_INT  Frobytcount, A68_71 ** Frobytlist)
{ 
A68_INT  DJABCTR_codestream A_UNUSED = {0};
A68_181  GJABCTR_evaluatetoorbypart;   /* proc value of non-global proc */
A68_185  HKABCTR_evaluatefrompart;   /* proc value of non-global proc */
A68_75  OKABCTR_setstep;   /* proc value of non-global proc */
A68_64 * TKABCTR_value A_UNUSED = {0};
A68_VC  UKABCTR;  /* avoid structure result */
A68_VC  VKABCTR_end A_UNUSED = {0};
A68_VC  WKABCTR;  /* avoid structure result */
A68_VC  XKABCTR_from A_UNUSED = {0};
A68_VC  YKABCTR;  /* clause result */
A68_VC  ZKABCTR;  /* avoid structure result */
A68_68  CLABCTR;  /* avoid structure result */
A68_VC  DLABCTR;  /* OPERATORS - istruct -> vector */
A68_33  ELABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  FLABCTR_loopcounter A_UNUSED = {0};
A68_188  GLABCTR;  /* collateral clause result */
A68_93  JLABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  KLABCTR;  /* YIELD */
A68_93  LLABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  OLABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  PLABCTR;  /* YIELD */
A68_93  QLABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  RLABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  SLABCTR;  /* YIELD */
A68_93  TLABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  ULABCTR;  /* OPERATORS - istruct -> vector */
A68_LINT  VLABCTR_constantstep A_UNUSED = {0};
A68_190  WLABCTR;  /* collateral clause result */
A68_93  XLABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  AMABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  BMABCTR;  /* YIELD */
A68_93  CMABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  DMABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  EMABCTR;  /* YIELD */
A68_92  FMABCTR;  /* clause result */
A68_92  GMABCTR;  /* OPERATORS - istruct -> vector */
A68_190  HMABCTR;  /* collateral clause result */
A68_93  IMABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  LMABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  MMABCTR;  /* YIELD */
A68_93  NMABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  OMABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  PMABCTR;  /* YIELD */
A68_92  QMABCTR;  /* OPERATORS - istruct -> vector */
A68_93  TMABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  UMABCTR;  /* YIELD */
A68_92  VMABCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_93  WMABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  XMABCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_184  YMABCTR;  /* collateral clause result */
A68_93  ZMABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  CNABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  DNABCTR;  /* YIELD */
A68_VC  ENABCTR;  /* avoid structure result */
A68_93  FNABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  INABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  JNABCTR;  /* YIELD */
A68_93  KNABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  LNABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  MNABCTR;  /* avoid structure result */
A68_VC  NNABCTR_step A_UNUSED = {0};
A68_192  ONABCTR;  /* collateral clause result */
A68_93  RNABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  SNABCTR;  /* YIELD */
A68_93  TNABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  WNABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  XNABCTR;  /* YIELD */
A68_93  YNABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  BOABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  COABCTR;  /* YIELD */
A68_93  DOABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  GOABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  HOABCTR;  /* YIELD */
A68_93  IOABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  JOABCTR;  /* OPERATORS - istruct -> vector */
A68_192  KOABCTR;  /* collateral clause result */
A68_93  NOABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  OOABCTR;  /* YIELD */
A68_93  POABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  SOABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  TOABCTR;  /* YIELD */
A68_93  UOABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  XOABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  YOABCTR;  /* YIELD */
A68_93  ZOABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  CPABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  DPABCTR;  /* YIELD */
A68_93  EPABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  FPABCTR;  /* OPERATORS - istruct -> vector */
A68_190  GPABCTR;  /* collateral clause result */
A68_93  JPABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  KPABCTR;  /* YIELD */
A68_93  LPABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  OPABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  PPABCTR;  /* YIELD */
A68_93  QPABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  RPABCTR;  /* OPERATORS - istruct -> vector */
A68_184  SPABCTR;  /* collateral clause result */
A68_93  TPABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  WPABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  XPABCTR;  /* YIELD */
A68_93  YPABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  BQABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  CQABCTR;  /* YIELD */
A68_93  DQABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  EQABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  FQABCTR;  /* avoid structure result */
A68_VC  GQABCTR_from A_UNUSED = {0};
A68_VC  HQABCTR;  /* avoid structure result */
A68_VC  IQABCTR_loopcounter A_UNUSED = {0};
A68_188  JQABCTR;  /* collateral clause result */
A68_93  MQABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  NQABCTR;  /* YIELD */
A68_93  OQABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  RQABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  SQABCTR;  /* YIELD */
A68_93  TQABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  WQABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  XQABCTR;  /* YIELD */
A68_93  YQABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  ZQABCTR;  /* OPERATORS - istruct -> vector */
A68_184  ARABCTR;  /* collateral clause result */
A68_93  BRABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  ERABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  FRABCTR;  /* YIELD */
A68_VC  GRABCTR;  /* avoid structure result */
A68_93  HRABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  KRABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  LRABCTR;  /* YIELD */
A68_93  MRABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  NRABCTR;  /* OPERATORS - istruct -> vector */
A68_74  QRABCTR_voidresult;   /* proc value of non-global proc */
A68_196  ASABCTR;  /* collateral clause result */
A68_93  DSABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ESABCTR;  /* YIELD */
A68_93  FSABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  GSABCTR;  /* OPERATORS - istruct -> vector */
A68_196  HSABCTR;  /* collateral clause result */
A68_93  KSABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  LSABCTR;  /* YIELD */
A68_93  MSABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  NSABCTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(for);
 /* line 81: */
 /* line 82: */
{ 
DJABCTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 84: */
A_CLOSURE( GJABCTR_evaluatetoorbypart, HJABCTR_evaluatetoorbypart, IJABCTR_evaluatetoorbypart );
(( IJABCTR_evaluatetoorbypart * ) ( GJABCTR_evaluatetoorbypart.nonlocals )) -> DJABCTR_codestream = DJABCTR_codestream;
 /* line 108: */
 /* line 113: */
 /* line 114: */
A_CLOSURE( HKABCTR_evaluatefrompart, IKABCTR_evaluatefrompart, JKABCTR_evaluatefrompart );
(( JKABCTR_evaluatefrompart * ) ( HKABCTR_evaluatefrompart.nonlocals )) -> Loop = Loop;
(( JKABCTR_evaluatefrompart * ) ( HKABCTR_evaluatefrompart.nonlocals )) -> Frobytlist = Frobytlist;
 /* line 125: */
 /* line 133: */
 /* line 134: */
A_CLOSURE( OKABCTR_setstep, PKABCTR_setstep, QKABCTR_setstep );
(( QKABCTR_setstep * ) ( OKABCTR_setstep.nonlocals )) -> Loop = Loop;
(( QKABCTR_setstep * ) ( OKABCTR_setstep.nonlocals )) -> Frobytlist = Frobytlist;
(( QKABCTR_setstep * ) ( OKABCTR_setstep.nonlocals )) -> GJABCTR_evaluatetoorbypart = GJABCTR_evaluatetoorbypart;
 /* line 146: */
 /* line 147: */
 /* line 159: */
if (*A_NILCHECK((&(A_NILCHECK(Loop)->Topart))))
{ 
TKABCTR_value = (&(A_NILCHECK((*A_NILCHECK(Frobytlist)))->Value));
 /* line 160: */
(void)((*A_NILCHECK(Frobytlist)) = (*A_NILCHECK((&(A_NILCHECK((*A_NILCHECK(Frobytlist)))->Rest)))));
 /* line 161: */
(void)(A_CALLPROC(GJABCTR_evaluatetoorbypart,(TKABCTR_value, A68_TRUE),(TKABCTR_value, A68_TRUE,(GJABCTR_evaluatetoorbypart).nonlocals)));
 /* line 162: */
DAQACTR_getcfragment( TKABCTR_value, &UKABCTR );
VKABCTR_end = UKABCTR;
 /* line 164: */
(void)(A_CALLPROC(OKABCTR_setstep,(),((OKABCTR_setstep).nonlocals)));
 /* line 166: */
A_CALLPROC(HKABCTR_evaluatefrompart,( &WKABCTR),( &WKABCTR,(HKABCTR_evaluatefrompart).nonlocals));
XKABCTR_from = WKABCTR;
 /* line 168: */
 /* line 169: */
 /* line 170: */
 /* line 172: */
if (*A_NILCHECK((&(A_NILCHECK(Loop)->Forpart))))
{ 
 /* line 174: */
DAQACTR_getcfragment( (*A_NILCHECK((&(A_NILCHECK(Loop)->Control)))), &ZKABCTR );
YKABCTR = ZKABCTR;
} 
else
{ 
 /* line 175: */
 /* line 176: */
QMOACTR_declarectemporary( EFAACTR_intmode, BLABCTR, &CLABCTR );
ELABCTR = CLABCTR.Name ;
YKABCTR = A_HISVEC(DLABCTR,ELABCTR,7,A68_CHAR );
} 
FLABCTR_loopcounter = YKABCTR;
 /* line 178: */
 /* line 179: */
KLABCTR = ILABCTR ;
GLABCTR.data[0] = A_UNITE(JLABCTR,mode2,2,KLABCTR);
GLABCTR.data[1] = A_UNITE(LLABCTR,mode2,2,FLABCTR_loopcounter);
PLABCTR = NLABCTR ;
GLABCTR.data[2] = A_UNITE(OLABCTR,mode2,2,PLABCTR);
GLABCTR.data[3] = A_UNITE(QLABCTR,mode2,2,XKABCTR_from);
SLABCTR = ';' ;
GLABCTR.data[4] = A_UNITE(RLABCTR,mode1,1,SLABCTR);
GLABCTR.data[5] = A_UNITE(TLABCTR,mode4,4,EIAACTR_cnewline);
 /* line 180: */
(void)(MDMACTR_writecstream(A_HISVEC(ULABCTR,GLABCTR,6,A68_93 ), DJABCTR_codestream));
 /* line 181: */
 /* line 182: */
 /* line 184: */
if (ZWPACTR_isconstant((*A_NILCHECK((&(A_NILCHECK(Loop)->Step))))))
{ 
VLABCTR_constantstep = (A68_LINT )NYPACTR_getconstant((*A_NILCHECK((&(A_NILCHECK(Loop)->Step)))));
 /* line 185: */
 /* line 186: */
 /* line 187: */
if (VLABCTR_constantstep>0)
{ 
WLABCTR.data[0] = A_UNITE(XLABCTR,mode2,2,FLABCTR_loopcounter);
BMABCTR = ZLABCTR ;
WLABCTR.data[1] = A_UNITE(AMABCTR,mode2,2,BMABCTR);
WLABCTR.data[2] = A_UNITE(CMABCTR,mode2,2,VKABCTR_end);
 /* line 188: */
EMABCTR = ';' ;
WLABCTR.data[3] = A_UNITE(DMABCTR,mode1,1,EMABCTR);
FMABCTR = A_HISVEC(GMABCTR,WLABCTR,4,A68_93 );
} 
else
{ 
 /* line 189: */
if (VLABCTR_constantstep<0)
{ 
HMABCTR.data[0] = A_UNITE(IMABCTR,mode2,2,FLABCTR_loopcounter);
MMABCTR = KMABCTR ;
HMABCTR.data[1] = A_UNITE(LMABCTR,mode2,2,MMABCTR);
HMABCTR.data[2] = A_UNITE(NMABCTR,mode2,2,VKABCTR_end);
 /* line 190: */
 /* line 191: */
PMABCTR = ';' ;
HMABCTR.data[3] = A_UNITE(OMABCTR,mode1,1,PMABCTR);
FMABCTR = A_HISVEC(QMABCTR,HMABCTR,4,A68_93 );
} 
else
{ 
UMABCTR = SMABCTR ;
FMABCTR = A_HVEC(VMABCTR,A_UNITE(TMABCTR,mode2,2,UMABCTR),A68_93 );
} 
} 
 /* line 192: */
(void)(MDMACTR_writecstream(FMABCTR, DJABCTR_codestream));
 /* line 193: */
(void)(MDMACTR_writecstream(A_HVEC(XMABCTR,A_UNITE(WMABCTR,mode4,4,EIAACTR_cnewline),A68_93 ), DJABCTR_codestream));
 /* line 194: */
 /* line 195: */
YMABCTR.data[0] = A_UNITE(ZMABCTR,mode2,2,FLABCTR_loopcounter);
DNABCTR = BNABCTR ;
YMABCTR.data[1] = A_UNITE(CNABCTR,mode2,2,DNABCTR);
DAQACTR_getcfragment( (*A_NILCHECK((&(A_NILCHECK(Loop)->Step)))), &ENABCTR );
YMABCTR.data[2] = A_UNITE(FNABCTR,mode2,2,ENABCTR);
 /* line 196: */
JNABCTR = HNABCTR ;
YMABCTR.data[3] = A_UNITE(INABCTR,mode2,2,JNABCTR);
YMABCTR.data[4] = A_UNITE(KNABCTR,mode4,4,EIAACTR_cnewline);
 /* line 197: */
 /* line 198: */
(void)(MDMACTR_writecstream(A_HISVEC(LNABCTR,YMABCTR,5,A68_93 ), DJABCTR_codestream));
} 
else
{ 
DAQACTR_getcfragment( (*A_NILCHECK((&(A_NILCHECK(Loop)->Step)))), &MNABCTR );
NNABCTR_step = MNABCTR;
 /* line 199: */
 /* line 200: */
SNABCTR = QNABCTR ;
ONABCTR.data[0] = A_UNITE(RNABCTR,mode2,2,SNABCTR);
ONABCTR.data[1] = A_UNITE(TNABCTR,mode2,2,NNABCTR_step);
 /* line 201: */
XNABCTR = VNABCTR ;
ONABCTR.data[2] = A_UNITE(WNABCTR,mode2,2,XNABCTR);
ONABCTR.data[3] = A_UNITE(YNABCTR,mode2,2,FLABCTR_loopcounter);
COABCTR = AOABCTR ;
ONABCTR.data[4] = A_UNITE(BOABCTR,mode2,2,COABCTR);
ONABCTR.data[5] = A_UNITE(DOABCTR,mode2,2,VKABCTR_end);
 /* line 202: */
HOABCTR = FOABCTR ;
ONABCTR.data[6] = A_UNITE(GOABCTR,mode2,2,HOABCTR);
ONABCTR.data[7] = A_UNITE(IOABCTR,mode4,4,EIAACTR_cnewline);
 /* line 203: */
(void)(MDMACTR_writecstream(A_HISVEC(JOABCTR,ONABCTR,8,A68_93 ), DJABCTR_codestream));
 /* line 204: */
 /* line 205: */
OOABCTR = MOABCTR ;
KOABCTR.data[0] = A_UNITE(NOABCTR,mode2,2,OOABCTR);
KOABCTR.data[1] = A_UNITE(POABCTR,mode2,2,NNABCTR_step);
 /* line 206: */
TOABCTR = ROABCTR ;
KOABCTR.data[2] = A_UNITE(SOABCTR,mode2,2,TOABCTR);
KOABCTR.data[3] = A_UNITE(UOABCTR,mode2,2,FLABCTR_loopcounter);
YOABCTR = WOABCTR ;
KOABCTR.data[4] = A_UNITE(XOABCTR,mode2,2,YOABCTR);
KOABCTR.data[5] = A_UNITE(ZOABCTR,mode2,2,VKABCTR_end);
 /* line 207: */
DPABCTR = BPABCTR ;
KOABCTR.data[6] = A_UNITE(CPABCTR,mode2,2,DPABCTR);
KOABCTR.data[7] = A_UNITE(EPABCTR,mode4,4,EIAACTR_cnewline);
 /* line 208: */
(void)(MDMACTR_writecstream(A_HISVEC(FPABCTR,KOABCTR,8,A68_93 ), DJABCTR_codestream));
 /* line 209: */
 /* line 210: */
KPABCTR = IPABCTR ;
GPABCTR.data[0] = A_UNITE(JPABCTR,mode2,2,KPABCTR);
GPABCTR.data[1] = A_UNITE(LPABCTR,mode2,2,NNABCTR_step);
PPABCTR = NPABCTR ;
GPABCTR.data[2] = A_UNITE(OPABCTR,mode2,2,PPABCTR);
GPABCTR.data[3] = A_UNITE(QPABCTR,mode4,4,EIAACTR_cnewline);
 /* line 211: */
(void)(MDMACTR_writecstream(A_HISVEC(RPABCTR,GPABCTR,4,A68_93 ), DJABCTR_codestream));
 /* line 212: */
 /* line 213: */
SPABCTR.data[0] = A_UNITE(TPABCTR,mode2,2,FLABCTR_loopcounter);
XPABCTR = VPABCTR ;
SPABCTR.data[1] = A_UNITE(WPABCTR,mode2,2,XPABCTR);
SPABCTR.data[2] = A_UNITE(YPABCTR,mode2,2,NNABCTR_step);
CQABCTR = AQABCTR ;
SPABCTR.data[3] = A_UNITE(BQABCTR,mode2,2,CQABCTR);
SPABCTR.data[4] = A_UNITE(DQABCTR,mode4,4,EIAACTR_cnewline);
 /* line 214: */
 /* line 215: */
 /* line 216: */
 /* line 220: */
(void)(MDMACTR_writecstream(A_HISVEC(EQABCTR,SPABCTR,5,A68_93 ), DJABCTR_codestream));
} 
} 
else
{ 
 /* line 221: */
 /* line 227: */
if (*A_NILCHECK((&(A_NILCHECK(Loop)->Forpart))))
{ 
(void)(A_CALLPROC(OKABCTR_setstep,(),((OKABCTR_setstep).nonlocals)));
 /* line 228: */
A_CALLPROC(HKABCTR_evaluatefrompart,( &FQABCTR),( &FQABCTR,(HKABCTR_evaluatefrompart).nonlocals));
GQABCTR_from = FQABCTR;
 /* line 229: */
DAQACTR_getcfragment( (*A_NILCHECK((&(A_NILCHECK(Loop)->Control)))), &HQABCTR );
IQABCTR_loopcounter = HQABCTR;
 /* line 230: */
 /* line 231: */
NQABCTR = LQABCTR ;
JQABCTR.data[0] = A_UNITE(MQABCTR,mode2,2,NQABCTR);
JQABCTR.data[1] = A_UNITE(OQABCTR,mode2,2,IQABCTR_loopcounter);
SQABCTR = QQABCTR ;
JQABCTR.data[2] = A_UNITE(RQABCTR,mode2,2,SQABCTR);
JQABCTR.data[3] = A_UNITE(TQABCTR,mode2,2,GQABCTR_from);
XQABCTR = VQABCTR ;
JQABCTR.data[4] = A_UNITE(WQABCTR,mode2,2,XQABCTR);
JQABCTR.data[5] = A_UNITE(YQABCTR,mode4,4,EIAACTR_cnewline);
 /* line 232: */
(void)(MDMACTR_writecstream(A_HISVEC(ZQABCTR,JQABCTR,6,A68_93 ), DJABCTR_codestream));
 /* line 233: */
 /* line 234: */
ARABCTR.data[0] = A_UNITE(BRABCTR,mode2,2,IQABCTR_loopcounter);
 /* line 235: */
FRABCTR = DRABCTR ;
ARABCTR.data[1] = A_UNITE(ERABCTR,mode2,2,FRABCTR);
DAQACTR_getcfragment( (*A_NILCHECK((&(A_NILCHECK(Loop)->Step)))), &GRABCTR );
ARABCTR.data[2] = A_UNITE(HRABCTR,mode2,2,GRABCTR);
LRABCTR = JRABCTR ;
ARABCTR.data[3] = A_UNITE(KRABCTR,mode2,2,LRABCTR);
ARABCTR.data[4] = A_UNITE(MRABCTR,mode4,4,EIAACTR_cnewline);
 /* line 236: */
 /* line 237: */
 /* line 238: */
(void)(MDMACTR_writecstream(A_HISVEC(NRABCTR,ARABCTR,5,A68_93 ), DJABCTR_codestream));
} 
else
{ 
A_CLOSURE( QRABCTR_voidresult, RRABCTR_voidresult, SRABCTR_voidresult );
(( SRABCTR_voidresult * ) ( QRABCTR_voidresult.nonlocals )) -> DJABCTR_codestream = DJABCTR_codestream;
 /* line 257: */
 /* line 258: */
 /* line 259: */
if (Frobytcount>0)
{ 
(void)(A_CALLPROC(QRABCTR_voidresult,((&(A_NILCHECK((*A_NILCHECK(Frobytlist)))->Value))),((&(A_NILCHECK((*A_NILCHECK(Frobytlist)))->Value)),(QRABCTR_voidresult).nonlocals)));
 /* line 260: */
 /* line 261: */
 /* line 262: */
if (Frobytcount>1)
{ 
 /* line 263: */
 /* line 264: */
(void)(A_CALLPROC(QRABCTR_voidresult,((&(A_NILCHECK((*A_NILCHECK((&(A_NILCHECK((*A_NILCHECK(Frobytlist)))->Rest)))))->Value))),((&(A_NILCHECK((*A_NILCHECK((&(A_NILCHECK((*A_NILCHECK(Frobytlist)))->Rest)))))->Value)),(QRABCTR_voidresult).nonlocals)));
} 
} 
 /* line 266: */
ESABCTR = CSABCTR ;
ASABCTR.data[0] = A_UNITE(DSABCTR,mode2,2,ESABCTR);
ASABCTR.data[1] = A_UNITE(FSABCTR,mode4,4,EIAACTR_cnewline);
 /* line 267: */
 /* line 268: */
(void)(MDMACTR_writecstream(A_HISVEC(GSABCTR,ASABCTR,2,A68_93 ), DJABCTR_codestream));
} 
} 
 /* line 270: */
LSABCTR = JSABCTR ;
HSABCTR.data[0] = A_UNITE(KSABCTR,mode2,2,LSABCTR);
HSABCTR.data[1] = A_UNITE(MSABCTR,mode4,4,EIAACTR_cnewline);
 /* line 271: */
(void)(MDMACTR_writecstream(A_HISVEC(NSABCTR,HSABCTR,2,A68_93 ), DJABCTR_codestream));
} 
A_PROC_EXIT(for);
return;
} 
#undef NL
 /* line 276: */

A68_VOID  QSABCTR_forall(A68_197  Controls, A68_71 ** Foralllist)
{ 
A68_200  SSABCTR_generator;   /* proc value of non-global proc */
A68_199  YSABCTR;  /* avoid structure result */
A68_199  XSABCTR_rows A_UNUSED = {0};
A68_201  ATABCTR_generator;   /* proc value of non-global proc */
A68_123  GTABCTR;  /* avoid structure result */
A68_123  FTABCTR_modeofrows A_UNUSED = {0};
A68_INT  HTABCTR_codestream A_UNUSED = {0};
A68_INT * ITABCTR_modeofrow A_UNUSED = {0};
A68_176 * JTABCTR_control A_UNUSED = {0};
A68_VC * KTABCTR_row A_UNUSED = {0};
A68_INT  LTABCTR;  /* forall loop counter */
A68_64 * MTABCTR_rowvalue A_UNUSED = {0};
A68_INT  NTABCTR_elemmode A_UNUSED = {0};
A68_BOOL  OTABCTR;  /* optbool result */
A68_VC  PTABCTR;  /* clause result */
A68_VC  QTABCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  RTABCTR;  /* avoid structure result */
A68_VC  STABCTR;  /* avoid structure result */
A68_VC  TTABCTR;  /* avoid structure result */
A68_64 * WTABCTR_temp A_UNUSED = {0};
A68_BOOL  XTABCTR;  /* optbool result */
A68_VC  YTABCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ZTABCTR;  /* avoid structure result */
A68_VC  AUABCTR;  /* avoid structure result */
A68_VC  BUABCTR;  /* avoid structure result */
A68_VC  CUABCTR_rowname A_UNUSED = {0};
A68_31  EUABCTR_generator;   /* proc value of non-global proc */
A68_VC  JUABCTR;  /* avoid structure result */
A68_BOOL  KUABCTR_originalhasrefs A_UNUSED = {0};
A68_BOOL * LUABCTR;  /* YIELD */
A68_VC  MUABCTR;  /* avoid structure result */
A68_VC  NUABCTR_controlname A_UNUSED = {0};
A68_31  PUABCTR_generator;   /* proc value of non-global proc */
A68_VC  UUABCTR;  /* clause result */
A68_VC  VUABCTR;  /* avoid structure result */
A68_VC * WUABCTR;  /* YIELD */
A68_INT  XUABCTR_forallmode A_UNUSED = {0};
A68_BOOL  YUABCTR;  /* optbool result */
A68_BOOL  ZUABCTR;  /* optbool result */
A68_INT  AVABCTR_controlmode A_UNUSED = {0};
A68_BOOL * BVABCTR;  /* YIELD */
A68_68  EVABCTR;  /* avoid structure result */
A68_VC  FVABCTR;  /* OPERATORS - istruct -> vector */
A68_33  GVABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  HVABCTR_controlname A_UNUSED = {0};
A68_31  JVABCTR_generator;   /* proc value of non-global proc */
A68_VC  OVABCTR;  /* clause result */
A68_VC  PVABCTR;  /* avoid structure result */
A68_VC * QVABCTR;  /* YIELD */
A68_BOOL * RVABCTR;  /* YIELD */
A68_VC  SVABCTR;  /* avoid structure result */
A68_VC  TVABCTR_controlname A_UNUSED = {0};
A68_31  VVABCTR_generator;   /* proc value of non-global proc */
A68_VC  AWABCTR;  /* clause result */
A68_VC  BWABCTR;  /* avoid structure result */
A68_VC * CWABCTR;  /* YIELD */
A68_BOOL  DWABCTR;  /* optbool result */
A68_INT  EWABCTR;  /* clause result */
A68_INT  FWABCTR_controlmode A_UNUSED = {0};
A68_BOOL * GWABCTR;  /* YIELD */
A68_68  JWABCTR;  /* avoid structure result */
A68_VC  KWABCTR;  /* OPERATORS - istruct -> vector */
A68_33  LWABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  MWABCTR_controlname A_UNUSED = {0};
A68_31  OWABCTR_generator;   /* proc value of non-global proc */
A68_VC  TWABCTR;  /* clause result */
A68_VC  UWABCTR;  /* avoid structure result */
A68_VC * VWABCTR;  /* YIELD */
A68_68  YWABCTR;  /* avoid structure result */
A68_VC  ZWABCTR;  /* OPERATORS - istruct -> vector */
A68_33  AXABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  BXABCTR_loopcounter A_UNUSED = {0};
A68_194  CXABCTR;  /* collateral clause result */
A68_INT  EXABCTR;  /* YIELD */
A68_VC  FXABCTR;  /* clause result */
A68_INT  GXABCTR;  /* YIELD */
A68_VC  HXABCTR;  /* avoid structure result */
A68_INT  IXABCTR;  /* YIELD */
A68_INT  KXABCTR;  /* YIELD */
A68_INT  PXABCTR;  /* YIELD */
A68_INT  SXABCTR;  /* YIELD */
A68_93  VXABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  WXABCTR;  /* YIELD */
A68_93  XXABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  YXABCTR;  /* YIELD */
A68_93  ZXABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  AYABCTR;  /* OPERATORS - istruct -> vector */
A68_INT  BYABCTR_i A_UNUSED = {0};
A68_INT  CYABCTR;  /* to part of loop */
A68_VC  DYABCTR_row A_UNUSED = {0};
A68_194  EYABCTR;  /* collateral clause result */
A68_VC  HYABCTR;  /* clause result */
A68_VC  IYABCTR;  /* avoid structure result */
A68_93  TYABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  UYABCTR;  /* YIELD */
A68_93  XYABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  YYABCTR;  /* YIELD */
A68_93  ZYABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  AZABCTR;  /* OPERATORS - istruct -> vector */
A68_196  BZABCTR;  /* collateral clause result */
A68_VC  FZABCTR;  /* avoid structure result */
A68_93  HZABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  IZABCTR;  /* YIELD */
A68_93  JZABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  KZABCTR;  /* OPERATORS - istruct -> vector */
A68_53  MZABCTR_initialise;   /* proc value of non-global proc */
A68_53  IABBCTR_increment;   /* proc value of non-global proc */
A68_INT  CBBBCTR_i A_UNUSED = {0};
A68_INT  DBBBCTR;  /* to part of loop */
A68_194  EBBBCTR;  /* collateral clause result */
A68_VC  FBBBCTR;  /* avoid structure result */
A68_93  GBBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  HBBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  IBBBCTR;  /* YIELD */
A68_93  JBBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  KBBBCTR;  /* OPERATORS - istruct -> vector */
A68_210  LBBBCTR;  /* collateral clause result */
A68_93  OBBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  PBBBCTR;  /* YIELD */
A68_93  QBBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  TBBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  UBBBCTR;  /* YIELD */
A68_93  VBBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  WBBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  XBBBCTR;  /* YIELD */
A68_VC  YBBBCTR;  /* avoid structure result */
A68_93  ZBBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  ACBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  BCBBCTR;  /* OPERATORS - istruct -> vector */
A68_INT  CCBBCTR_i A_UNUSED = {0};
A68_INT  DCBBCTR;  /* to part of loop */
A68_194  ECBBCTR;  /* collateral clause result */
A68_93  FCBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  GCBBCTR;  /* YIELD */
A68_VC  HCBBCTR;  /* avoid structure result */
A68_93  ICBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  JCBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  KCBBCTR;  /* OPERATORS - istruct -> vector */
A68_190  LCBBCTR;  /* collateral clause result */
A68_93  OCBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  PCBBCTR;  /* YIELD */
A68_93  QCBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  RCBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  SCBBCTR;  /* YIELD */
A68_93  TCBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  UCBBCTR;  /* OPERATORS - istruct -> vector */
A68_176 * VCBBCTR_control A_UNUSED = {0};
A68_INT  WCBBCTR;  /* forall loop counter */
A68_184  XCBBCTR;  /* collateral clause result */
A68_VC  YCBBCTR;  /* avoid structure result */
A68_93  ZCBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  CDBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  DDBBCTR;  /* YIELD */
A68_93  EDBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  FDBBCTR;  /* YIELD */
A68_93  GDBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  HDBBCTR;  /* YIELD */
A68_93  IDBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  JDBBCTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(forall);
 /* line 284: */
 /* line 285: */
{ 
A_CLOSURE( SSABCTR_generator, TSABCTR_generator, USABCTR_generator );
(( USABCTR_generator * ) ( SSABCTR_generator.nonlocals )) -> Controls = Controls;
A_CALLPROC(SSABCTR_generator,(A68_TRUE, &YSABCTR),(A68_TRUE, &YSABCTR,(SSABCTR_generator).nonlocals));
XSABCTR_rows = YSABCTR;
 /* line 286: */
A_CLOSURE( ATABCTR_generator, BTABCTR_generator, CTABCTR_generator );
(( CTABCTR_generator * ) ( ATABCTR_generator.nonlocals )) -> Controls = Controls;
A_CALLPROC(ATABCTR_generator,(A68_TRUE, &GTABCTR),(A68_TRUE, &GTABCTR,(ATABCTR_generator).nonlocals));
FTABCTR_modeofrows = GTABCTR;
 /* line 287: */
HTABCTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 291: */
 /* line 293: */
LTABCTR = FTABCTR_modeofrows.upb -1;
if ( LTABCTR != Controls.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
if ( LTABCTR != XSABCTR_rows.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 3"); }
ITABCTR_modeofrow = FTABCTR_modeofrows.data;
JTABCTR_control = Controls.data;
KTABCTR_row = XSABCTR_rows.data;
for (;LTABCTR-- >= 0;
(ITABCTR_modeofrow++
,JTABCTR_control++
,KTABCTR_row++
) )
{
 /* line 294: */
MTABCTR_rowvalue = (&(A_NILCHECK((*A_NILCHECK(Foralllist)))->Value));
 /* line 295: */
(void)((*A_NILCHECK(Foralllist)) = (*A_NILCHECK((&(A_NILCHECK((*A_NILCHECK(Foralllist)))->Rest)))));
 /* line 296: */
(void)(A_CALLPROC(JYQACTR_evaluate,(MTABCTR_rowvalue),(MTABCTR_rowvalue,(JYQACTR_evaluate).nonlocals)));
 /* line 297: */
(void)((*A_NILCHECK(ITABCTR_modeofrow)) = (*A_NILCHECK((&(A_NILCHECK(MTABCTR_rowvalue)->Mode)))));
 /* line 298: */
NTABCTR_elemmode = A_CALLPROC(UVMACTR_elementmode,((*A_NILCHECK(ITABCTR_modeofrow))),((*A_NILCHECK(ITABCTR_modeofrow)),(UVMACTR_elementmode).nonlocals));
 /* line 305: */
 /* line 306: */
 /* line 307: */
 /* line 308: */
if (SXPACTR_isident(MTABCTR_rowvalue))
{ 
 /* line 309: */
OTABCTR = RSMACTR_hasrefs((*A_NILCHECK(ITABCTR_modeofrow)));
if ( OTABCTR )
{ /* line 310: */
OTABCTR = KRMACTR_isflexarray((*A_NILCHECK(ITABCTR_modeofrow)));
}
if (OTABCTR)
{ 
 /* line 311: */
 /* line 312: */
DAQACTR_getcfragment( MTABCTR_rowvalue, &RTABCTR );
JIAACTR_bracket( A_VC_PLUS(A_HVEC(QTABCTR,'*',A68_CHAR ),RTABCTR), &STABCTR );
PTABCTR = STABCTR;
} 
else
{ 
 /* line 313: */
 /* line 314: */
DAQACTR_getcfragment( MTABCTR_rowvalue, &TTABCTR );
PTABCTR = TTABCTR;
} 
} 
else
{ 
WTABCTR_temp = RQQACTR_yield(VTABCTR, MTABCTR_rowvalue);
 /* line 316: */
 /* line 317: */
XTABCTR = MOMACTR_hasoneref((*A_NILCHECK(ITABCTR_modeofrow)));
if ( XTABCTR )
{ /* line 318: */
XTABCTR = KRMACTR_isflexarray((*A_NILCHECK(ITABCTR_modeofrow)));
}
 /* line 319: */
if (XTABCTR)
{ 
 /* line 320: */
 /* line 321: */
DAQACTR_getcfragment( WTABCTR_temp, &ZTABCTR );
JIAACTR_bracket( A_VC_PLUS(A_HVEC(YTABCTR,'*',A68_CHAR ),ZTABCTR), &AUABCTR );
PTABCTR = AUABCTR;
} 
else
{ 
 /* line 322: */
DAQACTR_getcfragment( WTABCTR_temp, &BUABCTR );
PTABCTR = BUABCTR;
} 
} 
CUABCTR_rowname = PTABCTR;
 /* line 323: */
A_CLOSURE( EUABCTR_generator, FUABCTR_generator, GUABCTR_generator );
(( GUABCTR_generator * ) ( EUABCTR_generator.nonlocals )) -> CUABCTR_rowname = CUABCTR_rowname;
A_CALLPROC(EUABCTR_generator,(A68_TRUE, &JUABCTR),(A68_TRUE, &JUABCTR,(EUABCTR_generator).nonlocals));
(void)(A_VASSIGN2(CUABCTR_rowname,JUABCTR,A68_CHAR )) ;
(*A_NILCHECK(KTABCTR_row)) = JUABCTR;
 /* line 325: */
KUABCTR_originalhasrefs = RSMACTR_hasrefs((*A_NILCHECK(ITABCTR_modeofrow)));
 /* line 327: */
 /* line 328: */
 /* line 329: */
 /* line 335: */
if (ARMACTR_isarray((*A_NILCHECK(ITABCTR_modeofrow)))&(QVMACTR_dimensions((*A_NILCHECK(ITABCTR_modeofrow)))>1))
{ 
LUABCTR = (&(A_NILCHECK(JTABCTR_control)->Needstemp)) ;
(*A_NILCHECK(LUABCTR)) = A68_FALSE;
 /* line 336: */
 /* line 337: */
 /* line 338: */
{ 
DAQACTR_getcfragment( (&(A_NILCHECK(JTABCTR_control)->Ident)), &MUABCTR );
NUABCTR_controlname = MUABCTR;
 /* line 339: */
A_CLOSURE( PUABCTR_generator, QUABCTR_generator, RUABCTR_generator );
(( RUABCTR_generator * ) ( PUABCTR_generator.nonlocals )) -> NUABCTR_controlname = NUABCTR_controlname;
 /* line 340: */
 /* line 342: */
A_CALLPROC(PUABCTR_generator,(A68_TRUE, &VUABCTR),(A68_TRUE, &VUABCTR,(PUABCTR_generator).nonlocals));
(void)(A_VASSIGN2(NUABCTR_controlname,VUABCTR,A68_CHAR )) ;
UUABCTR = VUABCTR;
} 
 /* line 343: */
WUABCTR = (&(A_NILCHECK(JTABCTR_control)->Control)) ;
(*A_NILCHECK(WUABCTR)) = UUABCTR;
} 
else
{ 
 /* line 353: */
if (KUABCTR_originalhasrefs)
{ 
XUABCTR_forallmode = (*A_NILCHECK((&(A_NILCHECK((&(A_NILCHECK(JTABCTR_control)->Ident)))->Mode))));
 /* line 355: */
 /* line 356: */
YUABCTR = FRMACTR_isfirmarray(NTABCTR_elemmode);
if ( YUABCTR )
{YUABCTR = (NTABCTR_elemmode<VFAACTR_refmark);
}
 /* line 357: */
if ( YUABCTR )
{ /* line 359: */
ZUABCTR = KRMACTR_isflexarray(XUABCTR_forallmode);
if ( ZUABCTR )
{ZUABCTR = MOMACTR_hasoneref(XUABCTR_forallmode);
}
 /* line 360: */
YUABCTR = (!ZUABCTR);
}
 /* line 361: */
if (YUABCTR)
{ 
AVABCTR_controlmode = ((NTABCTR_elemmode+VFAACTR_refmark)+VFAACTR_refmark);
 /* line 362: */
BVABCTR = (&(A_NILCHECK(JTABCTR_control)->Needstemp)) ;
(*A_NILCHECK(BVABCTR)) = A68_TRUE;
 /* line 363: */
 /* line 364: */
 /* line 366: */
{ 
QMOACTR_declarectemporary( AVABCTR_controlmode, DVABCTR, &EVABCTR );
GVABCTR = EVABCTR.Name ;
HVABCTR_controlname = A_HISVEC(FVABCTR,GVABCTR,7,A68_CHAR );
 /* line 367: */
A_CLOSURE( JVABCTR_generator, KVABCTR_generator, LVABCTR_generator );
(( LVABCTR_generator * ) ( JVABCTR_generator.nonlocals )) -> HVABCTR_controlname = HVABCTR_controlname;
 /* line 368: */
 /* line 369: */
A_CALLPROC(JVABCTR_generator,(A68_TRUE, &PVABCTR),(A68_TRUE, &PVABCTR,(JVABCTR_generator).nonlocals));
(void)(A_VASSIGN2(HVABCTR_controlname,PVABCTR,A68_CHAR )) ;
OVABCTR = PVABCTR;
} 
 /* line 370: */
QVABCTR = (&(A_NILCHECK(JTABCTR_control)->Control)) ;
(*A_NILCHECK(QVABCTR)) = OVABCTR;
} 
else
{ 
RVABCTR = (&(A_NILCHECK(JTABCTR_control)->Needstemp)) ;
(*A_NILCHECK(RVABCTR)) = A68_FALSE;
 /* line 371: */
 /* line 372: */
 /* line 373: */
{ 
DAQACTR_getcfragment( (&(A_NILCHECK(JTABCTR_control)->Ident)), &SVABCTR );
TVABCTR_controlname = SVABCTR;
 /* line 374: */
A_CLOSURE( VVABCTR_generator, WVABCTR_generator, XVABCTR_generator );
(( XVABCTR_generator * ) ( VVABCTR_generator.nonlocals )) -> TVABCTR_controlname = TVABCTR_controlname;
 /* line 375: */
 /* line 376: */
A_CALLPROC(VVABCTR_generator,(A68_TRUE, &BWABCTR),(A68_TRUE, &BWABCTR,(VVABCTR_generator).nonlocals));
(void)(A_VASSIGN2(TVABCTR_controlname,BWABCTR,A68_CHAR )) ;
AWABCTR = BWABCTR;
} 
 /* line 377: */
 /* line 383: */
CWABCTR = (&(A_NILCHECK(JTABCTR_control)->Control)) ;
(*A_NILCHECK(CWABCTR)) = AWABCTR;
} 
} 
else
{ 
 /* line 384: */
 /* line 385: */
DWABCTR = FRMACTR_isfirmarray(NTABCTR_elemmode);
if ( DWABCTR )
{ /* line 386: */
DWABCTR = (!RSMACTR_hasrefs(NTABCTR_elemmode));
}
if (DWABCTR)
{ 
 /* line 388: */
 /* line 390: */
EWABCTR = (VFAACTR_refmark+VFAACTR_refmark);
} 
else
{ 
EWABCTR = VFAACTR_refmark;
} 
FWABCTR_controlmode = (NTABCTR_elemmode+EWABCTR);
 /* line 392: */
GWABCTR = (&(A_NILCHECK(JTABCTR_control)->Needstemp)) ;
(*A_NILCHECK(GWABCTR)) = A68_TRUE;
 /* line 393: */
 /* line 394: */
 /* line 396: */
{ 
QMOACTR_declarectemporary( FWABCTR_controlmode, IWABCTR, &JWABCTR );
LWABCTR = JWABCTR.Name ;
MWABCTR_controlname = A_HISVEC(KWABCTR,LWABCTR,7,A68_CHAR );
 /* line 397: */
A_CLOSURE( OWABCTR_generator, PWABCTR_generator, QWABCTR_generator );
(( QWABCTR_generator * ) ( OWABCTR_generator.nonlocals )) -> MWABCTR_controlname = MWABCTR_controlname;
 /* line 398: */
 /* line 399: */
A_CALLPROC(OWABCTR_generator,(A68_TRUE, &UWABCTR),(A68_TRUE, &UWABCTR,(OWABCTR_generator).nonlocals));
(void)(A_VASSIGN2(MWABCTR_controlname,UWABCTR,A68_CHAR )) ;
TWABCTR = UWABCTR;
} 
 /* line 400: */
VWABCTR = (&(A_NILCHECK(JTABCTR_control)->Control)) ;
(*A_NILCHECK(VWABCTR)) = TWABCTR;
} 
} 
}
 /* line 404: */
 /* line 405: */
QMOACTR_declarectemporary( EFAACTR_intmode, XWABCTR, &YWABCTR );
AXABCTR = YWABCTR.Name ;
BXABCTR_loopcounter = A_HISVEC(ZWABCTR,AXABCTR,7,A68_CHAR );
 /* line 407: */
 /* line 408: */
 /* line 409: */
 /* line 410: */
EXABCTR = 1 ;
if (XRMACTR_isistruct((*A_NILCHECK((&A_VINDEX(FTABCTR_modeofrows,EXABCTR))))))
{ 
 /* line 411: */
GXABCTR = 1 ;
ROAAOSF_whole( A_CALLPROC(WVMACTR_istructlength,((*A_NILCHECK((&A_VINDEX(FTABCTR_modeofrows,GXABCTR))))),((*A_NILCHECK((&A_VINDEX(FTABCTR_modeofrows,GXABCTR)))),(WVMACTR_istructlength).nonlocals)), 0, &HXABCTR );
FXABCTR = HXABCTR;
} 
else
{ 
 /* line 412: */
IXABCTR = 1 ;
if (QQMACTR_isvector((*A_NILCHECK((&A_VINDEX(FTABCTR_modeofrows,IXABCTR))))))
{ 
 /* line 413: */
KXABCTR = 1 ;
FXABCTR = A_VC_PLUS((*A_NILCHECK((&A_VINDEX(XSABCTR_rows,KXABCTR)))),LXABCTR);
} 
else
{ 
 /* line 414: */
PXABCTR = 1 ;
SXABCTR = 1 ;
FXABCTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS((*A_NILCHECK((&A_VINDEX(XSABCTR_rows,PXABCTR)))),QXABCTR),RXABCTR),(*A_NILCHECK((&A_VINDEX(XSABCTR_rows,SXABCTR))))),TXABCTR);
} 
} 
WXABCTR = A_VC_PLUS(A_VC_PLUS(BXABCTR_loopcounter,UXABCTR),FXABCTR) ;
CXABCTR.data[0] = A_UNITE(VXABCTR,mode2,2,WXABCTR);
YXABCTR = ';' ;
CXABCTR.data[1] = A_UNITE(XXABCTR,mode1,1,YXABCTR);
CXABCTR.data[2] = A_UNITE(ZXABCTR,mode4,4,EIAACTR_cnewline);
 /* line 416: */
(void)(MDMACTR_writecstream(A_HISVEC(AYABCTR,CXABCTR,3,A68_93 ), HTABCTR_codestream));
 /* line 421: */
 /* line 422: */
CYABCTR = XSABCTR_rows.upb;
for ( BYABCTR_i = 2;
BYABCTR_i <= CYABCTR;
BYABCTR_i += 1 )
{ 
 /* line 423: */
DYABCTR_row = (*A_NILCHECK((&A_VINDEX(XSABCTR_rows,BYABCTR_i))));
 /* line 424: */
 /* line 425: */
 /* line 426: */
 /* line 427: */
if (XRMACTR_isistruct((*A_NILCHECK((&A_VINDEX(FTABCTR_modeofrows,BYABCTR_i))))))
{ 
 /* line 428: */
ROAAOSF_whole( A_CALLPROC(WVMACTR_istructlength,((*A_NILCHECK((&A_VINDEX(FTABCTR_modeofrows,BYABCTR_i))))),((*A_NILCHECK((&A_VINDEX(FTABCTR_modeofrows,BYABCTR_i)))),(WVMACTR_istructlength).nonlocals)), 0, &IYABCTR );
HYABCTR = IYABCTR;
} 
else
{ 
 /* line 429: */
if (QQMACTR_isvector((*A_NILCHECK((&A_VINDEX(FTABCTR_modeofrows,BYABCTR_i))))))
{ 
 /* line 430: */
HYABCTR = A_VC_PLUS(DYABCTR_row,KYABCTR);
} 
else
{ 
 /* line 431: */
HYABCTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(DYABCTR_row,OYABCTR),PYABCTR),DYABCTR_row),QYABCTR);
} 
} 
UYABCTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(RYABCTR,BXABCTR_loopcounter),SYABCTR),HYABCTR) ;
EYABCTR.data[0] = A_UNITE(TYABCTR,mode2,2,UYABCTR);
YYABCTR = WYABCTR ;
EYABCTR.data[1] = A_UNITE(XYABCTR,mode2,2,YYABCTR);
EYABCTR.data[2] = A_UNITE(ZYABCTR,mode4,4,EIAACTR_cnewline);
 /* line 433: */
(void)(MDMACTR_writecstream(A_HISVEC(AZABCTR,EYABCTR,3,A68_93 ), HTABCTR_codestream));
 /* line 434: */
 /* line 435: */
 /* line 436: */
ROAAOSF_whole( BYABCTR_i, 0, &FZABCTR );
IZABCTR = A_VC_PLUS(A_VC_PLUS(EZABCTR,FZABCTR),GZABCTR) ;
BZABCTR.data[0] = A_UNITE(HZABCTR,mode2,2,IZABCTR);
BZABCTR.data[1] = A_UNITE(JZABCTR,mode4,4,EIAACTR_cnewline);
 /* line 437: */
 /* line 438: */
(void)(MDMACTR_writecstream(A_HISVEC(KZABCTR,BZABCTR,2,A68_93 ), HTABCTR_codestream));
}
 /* line 441: */
A_CLOSURE( MZABCTR_initialise, NZABCTR_initialise, OZABCTR_initialise );
(( OZABCTR_initialise * ) ( MZABCTR_initialise.nonlocals )) -> Controls = Controls;
(( OZABCTR_initialise * ) ( MZABCTR_initialise.nonlocals )) -> FTABCTR_modeofrows = FTABCTR_modeofrows;
(( OZABCTR_initialise * ) ( MZABCTR_initialise.nonlocals )) -> XSABCTR_rows = XSABCTR_rows;
 /* line 451: */
A_CLOSURE( IABBCTR_increment, JABBCTR_increment, KABBCTR_increment );
(( KABBCTR_increment * ) ( IABBCTR_increment.nonlocals )) -> FTABCTR_modeofrows = FTABCTR_modeofrows;
(( KABBCTR_increment * ) ( IABBCTR_increment.nonlocals )) -> Controls = Controls;
(( KABBCTR_increment * ) ( IABBCTR_increment.nonlocals )) -> XSABCTR_rows = XSABCTR_rows;
 /* line 464: */
 /* line 465: */
DBBBCTR = Controls.upb;
for ( CBBBCTR_i = 1;
CBBBCTR_i <= DBBBCTR;
CBBBCTR_i += 1 )
{ 
 /* line 466: */
A_CALLPROC(MZABCTR_initialise,(CBBBCTR_i, &FBBBCTR),(CBBBCTR_i, &FBBBCTR,(MZABCTR_initialise).nonlocals));
EBBBCTR.data[0] = A_UNITE(GBBBCTR,mode2,2,FBBBCTR);
IBBBCTR = ';' ;
EBBBCTR.data[1] = A_UNITE(HBBBCTR,mode1,1,IBBBCTR);
EBBBCTR.data[2] = A_UNITE(JBBBCTR,mode4,4,EIAACTR_cnewline);
 /* line 467: */
(void)(MDMACTR_writecstream(A_HISVEC(KBBBCTR,EBBBCTR,3,A68_93 ), HTABCTR_codestream));
}
 /* line 469: */
PBBBCTR = NBBBCTR ;
LBBBCTR.data[0] = A_UNITE(OBBBCTR,mode2,2,PBBBCTR);
LBBBCTR.data[1] = A_UNITE(QBBBCTR,mode2,2,BXABCTR_loopcounter);
UBBBCTR = SBBBCTR ;
LBBBCTR.data[2] = A_UNITE(TBBBCTR,mode2,2,UBBBCTR);
 /* line 470: */
LBBBCTR.data[3] = A_UNITE(VBBBCTR,mode4,4,EIAACTR_cnewline);
XBBBCTR = '(' ;
LBBBCTR.data[4] = A_UNITE(WBBBCTR,mode1,1,XBBBCTR);
A_CALLPROC(IABBCTR_increment,(1, &YBBBCTR),(1, &YBBBCTR,(IABBCTR_increment).nonlocals));
LBBBCTR.data[5] = A_UNITE(ZBBBCTR,mode2,2,YBBBCTR);
LBBBCTR.data[6] = A_UNITE(ACBBCTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(BCBBCTR,LBBBCTR,7,A68_93 ), HTABCTR_codestream));
 /* line 472: */
 /* line 473: */
DCBBCTR = Controls.upb;
for ( CCBBCTR_i = 2;
CCBBCTR_i <= DCBBCTR;
CCBBCTR_i += 1 )
{ 
 /* line 474: */
GCBBCTR = ',' ;
ECBBCTR.data[0] = A_UNITE(FCBBCTR,mode1,1,GCBBCTR);
A_CALLPROC(IABBCTR_increment,(CCBBCTR_i, &HCBBCTR),(CCBBCTR_i, &HCBBCTR,(IABBCTR_increment).nonlocals));
ECBBCTR.data[1] = A_UNITE(ICBBCTR,mode2,2,HCBBCTR);
ECBBCTR.data[2] = A_UNITE(JCBBCTR,mode4,4,EIAACTR_cnewline);
 /* line 475: */
(void)(MDMACTR_writecstream(A_HISVEC(KCBBCTR,ECBBCTR,3,A68_93 ), HTABCTR_codestream));
}
 /* line 477: */
PCBBCTR = NCBBCTR ;
LCBBCTR.data[0] = A_UNITE(OCBBCTR,mode2,2,PCBBCTR);
LCBBCTR.data[1] = A_UNITE(QCBBCTR,mode4,4,EIAACTR_cnewline);
SCBBCTR = '{' ;
LCBBCTR.data[2] = A_UNITE(RCBBCTR,mode1,1,SCBBCTR);
LCBBCTR.data[3] = A_UNITE(TCBBCTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(UCBBCTR,LCBBCTR,4,A68_93 ), HTABCTR_codestream));
 /* line 481: */
 /* line 482: */
WCBBCTR = Controls.upb -1;
VCBBCTR_control = Controls.data;
for (;WCBBCTR-- >= 0;
(VCBBCTR_control++
) )
{
 /* line 483: */
 /* line 484: */
 /* line 485: */
if (*A_NILCHECK((&(A_NILCHECK(VCBBCTR_control)->Needstemp))))
{ 
DAQACTR_getcfragment( (&(A_NILCHECK(VCBBCTR_control)->Ident)), &YCBBCTR );
XCBBCTR.data[0] = A_UNITE(ZCBBCTR,mode2,2,YCBBCTR);
 /* line 486: */
DDBBCTR = BDBBCTR ;
XCBBCTR.data[1] = A_UNITE(CDBBCTR,mode2,2,DDBBCTR);
FDBBCTR = (*A_NILCHECK((&(A_NILCHECK(VCBBCTR_control)->Control)))) ;
XCBBCTR.data[2] = A_UNITE(EDBBCTR,mode2,2,FDBBCTR);
HDBBCTR = ';' ;
XCBBCTR.data[3] = A_UNITE(GDBBCTR,mode1,1,HDBBCTR);
XCBBCTR.data[4] = A_UNITE(IDBBCTR,mode4,4,EIAACTR_cnewline);
 /* line 487: */
 /* line 488: */
 /* line 489: */
(void)(MDMACTR_writecstream(A_HISVEC(JDBBCTR,XCBBCTR,5,A68_93 ), HTABCTR_codestream));
} 
}
 /* line 490: */
} 
A_PROC_EXIT(forall);
return;
} 
#undef NL

A68_VOID  KDBBCTR_while(void)
{ 
A_PROC_ENTRY(while);
/*SKIP*/;
A_PROC_EXIT(while);
return;
} 
#undef NL

A68_VOID  MDBBCTR_whiledo(A68_64 * Enquiry)
{ 
A68_INT  NDBBCTR_codestream A_UNUSED = {0};
A68_VC  PDBBCTR;  /* clause result */
A68_VC  RDBBCTR;  /* avoid structure result */
A68_VC  SDBBCTR_booleanexpr A_UNUSED = {0};
A68_190  TDBBCTR;  /* collateral clause result */
A68_93  WDBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  XDBBCTR;  /* YIELD */
A68_93  YDBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  BEBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  CEBBCTR;  /* YIELD */
A68_93  DEBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  EEBBCTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(whiledo);
 /* line 495: */
 /* line 496: */
{ 
NDBBCTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 497: */
 /* line 498: */
 /* line 499: */
 /* line 501: */
if (EYPACTR_isskip(Enquiry))
{ 
 /* line 502: */
PDBBCTR = QDBBCTR;
} 
else
{ 
 /* line 503: */
JEQACTR_bracketcfragment( Enquiry, &RDBBCTR );
PDBBCTR = RDBBCTR;
} 
SDBBCTR_booleanexpr = PDBBCTR;
 /* line 504: */
 /* line 505: */
XDBBCTR = VDBBCTR ;
TDBBCTR.data[0] = A_UNITE(WDBBCTR,mode2,2,XDBBCTR);
TDBBCTR.data[1] = A_UNITE(YDBBCTR,mode2,2,SDBBCTR_booleanexpr);
CEBBCTR = AEBBCTR ;
TDBBCTR.data[2] = A_UNITE(BEBBCTR,mode2,2,CEBBCTR);
TDBBCTR.data[3] = A_UNITE(DEBBCTR,mode4,4,EIAACTR_cnewline);
 /* line 506: */
(void)(MDMACTR_writecstream(A_HISVEC(EEBBCTR,TDBBCTR,4,A68_93 ), NDBBCTR_codestream));
} 
A_PROC_EXIT(whiledo);
return;
} 
#undef NL

A68_VOID  FEBBCTR_whileod(void)
{ 
A68_INT  GEBBCTR_codestream A_UNUSED = {0};
A68_196  HEBBCTR;  /* collateral clause result */
A68_93  IEBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  JEBBCTR;  /* YIELD */
A68_93  KEBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  LEBBCTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(whileod);
{ 
GEBBCTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 511: */
JEBBCTR = '}' ;
HEBBCTR.data[0] = A_UNITE(IEBBCTR,mode1,1,JEBBCTR);
HEBBCTR.data[1] = A_UNITE(KEBBCTR,mode4,4,EIAACTR_cnewline);
 /* line 512: */
(void)(MDMACTR_writecstream(A_HISVEC(LEBBCTR,HEBBCTR,2,A68_93 ), GEBBCTR_codestream));
} 
A_PROC_EXIT(whileod);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 5: */
void CIABCTR(void)   /* initialise DECS loops */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel","-dir",".","loops.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/vak/Project/Algol/Algol-68RS-Source/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/vak/Project/Algol/Algol-68RS-Source/a68config/a68config.m","./values.m","./modes.m","./incmode.m","./environment.m","./environ.m","./coutput.m","./clauses.m","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel/usefulops.m","./centities.m",""};
static A_CONFIG_INFO A_config A_UNUSED;
/* --- end of configuration information */
A68_64  HIABCTR;  /* collateral clause result */
A68_65  IIABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_LBITS  JIABCTR;  /* YIELD */
A68_75  NEBBCTR;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
OUPACTR();   /* USE values */
DNMACTR();   /* USE modes */
ZDAACTR();   /* USE incmode */
HPIACTR();   /* USE environment */
BPLACTR();   /* USE environ */
PTLACTR();   /* USE coutput */
TCZACTR();   /* USE clauses */
IKAAOSF();   /* USE usefulops */
THAACTR();   /* USE centities */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/loops.a68";
A_config.translation_time = "Thu Nov  5 21:56:13 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "BIABCTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 21:56:13 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS loops);
(void)(UEAALIB_a68config(LGAALIB_configinfo, GIABCTR));
 /* line 49: */
 /* line 59: */
 /* line 62: */
HIABCTR.Mode = EFAACTR_intmode;
HIABCTR.Info = PKJACTR_defaultinfo;
JIABCTR = (A68_LBITS )01U ;
HIABCTR.Extra = A_UNITE(IIABCTR,mode1,1,JIABCTR);
YIABCTR_value1 = MIABCTR_assignment(A_LOC(A68_64 ), HIABCTR);
 /* line 69: */
 /* line 70: */
 /* line 273: */
 /* line 274: */
 /* line 492: */
 /* line 494: */
 /* line 508: */
 /* line 509: */
 /* line 510: */
 /* line 514: */
NEBBCTR.fn.fn_global = FEBBCTR_whileod;
NEBBCTR.nonlocals = A68_NIL;
MEBBCTR_od = (NEBBCTR);
 /* line 516: */
 /* line 518: */
 /* line 521: */
/*SKIP*/;
A_PROC_EXIT(DECS loops);
} 
#undef NL
/* end of translation of loops.a68 */
