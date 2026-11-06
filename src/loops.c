/* UNAME:TGABCTR */
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
extern A68_VOID  UZPACTR_getcfragment(struct A68t64 *,A68_VC *);
extern A68_BITS  PKJACTR_defaultinfo;
extern A68_VOID  BEQACTR_bracketcfragment(struct A68t64 *,A68_VC *);
extern A68_VOID  SOQACTR_usemacro(A68_VC ,struct A68t165 ,A68_VC *);
extern A68_64 * JQQACTR_yield(A68_VC ,struct A68t64 *);
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
extern A68_74  BYQACTR_evaluate;
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
extern void KBZACTR(void);   /* clauses */
extern void IKAAOSF(void);   /* usefulops */
extern void THAACTR(void);   /* centities */
/* --- end of DECS initialisation functions --- */
static A68_174   XGABCTR = {"$Id: loops.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,YGABCTR,XGABCTR,55)
static A68_64 * QHABCTR_value1 A_UNUSED;
static A68_182   CIABCTR = {"to part of loop"}; 
A_GISVEC(A68_VC ,EIABCTR,CIABCTR,15)
static A68_182   FIABCTR = {"by part of loop"}; 
A_GISVEC(A68_VC ,GIABCTR,FIABCTR,15)
static A68_183   OIABCTR = {" = "}; 
A_GISVEC(A68_VC ,PIABCTR,OIABCTR,3)
static A68_186   SJABCTR = {"loop control"}; 
A_GISVEC(A68_VC ,TJABCTR,SJABCTR,12)
static A68_187   ZJABCTR = {"for ( "}; 
A_GISVEC(A68_VC ,AKABCTR,ZJABCTR,6)
static A68_183   EKABCTR = {" = "}; 
A_GISVEC(A68_VC ,FKABCTR,EKABCTR,3)
static A68_45   QKABCTR = {" <= "}; 
A_GISVEC(A68_VC ,RKABCTR,QKABCTR,4)
static A68_45   BLABCTR = {" >= "}; 
A_GISVEC(A68_VC ,CLABCTR,BLABCTR,4)
static A68_189   JLABCTR = {"; "}; 
A_GISVEC(A68_VC ,KLABCTR,JLABCTR,2)
static A68_45   SLABCTR = {" += "}; 
A_GISVEC(A68_VC ,TLABCTR,SLABCTR,4)
static A68_189   YLABCTR = {" )"}; 
A_GISVEC(A68_VC ,ZLABCTR,YLABCTR,2)
static A68_189   HMABCTR = {"( "}; 
A_GISVEC(A68_VC ,IMABCTR,HMABCTR,2)
static A68_191   MMABCTR = {" > 0 && "}; 
A_GISVEC(A68_VC ,NMABCTR,MMABCTR,8)
static A68_45   RMABCTR = {" <= "}; 
A_GISVEC(A68_VC ,SMABCTR,RMABCTR,4)
static A68_45   WMABCTR = {") ||"}; 
A_GISVEC(A68_VC ,XMABCTR,WMABCTR,4)
static A68_189   DNABCTR = {"( "}; 
A_GISVEC(A68_VC ,ENABCTR,DNABCTR,2)
static A68_191   INABCTR = {" < 0 && "}; 
A_GISVEC(A68_VC ,JNABCTR,INABCTR,8)
static A68_45   NNABCTR = {" >= "}; 
A_GISVEC(A68_VC ,ONABCTR,NNABCTR,4)
static A68_45   SNABCTR = {") ||"}; 
A_GISVEC(A68_VC ,TNABCTR,SNABCTR,4)
static A68_189   ZNABCTR = {"( "}; 
A_GISVEC(A68_VC ,AOABCTR,ZNABCTR,2)
static A68_193   EOABCTR = {" == 0 ) ;"}; 
A_GISVEC(A68_VC ,FOABCTR,EOABCTR,9)
static A68_45   MOABCTR = {" += "}; 
A_GISVEC(A68_VC ,NOABCTR,MOABCTR,4)
static A68_189   ROABCTR = {" )"}; 
A_GISVEC(A68_VC ,SOABCTR,ROABCTR,2)
static A68_187   CPABCTR = {"for ( "}; 
A_GISVEC(A68_VC ,DPABCTR,CPABCTR,6)
static A68_183   HPABCTR = {" = "}; 
A_GISVEC(A68_VC ,IPABCTR,HPABCTR,3)
static A68_189   MPABCTR = {";;"}; 
A_GISVEC(A68_VC ,NPABCTR,MPABCTR,2)
static A68_45   UPABCTR = {" += "}; 
A_GISVEC(A68_VC ,VPABCTR,UPABCTR,4)
static A68_183   AQABCTR = {" ) "}; 
A_GISVEC(A68_VC ,BQABCTR,AQABCTR,3)
static A68_195   TQABCTR = {"for ( ;; )"}; 
A_GISVEC(A68_VC ,UQABCTR,TQABCTR,10)
static A68_189   ARABCTR = {"{ "}; 
A_GISVEC(A68_VC ,BRABCTR,ARABCTR,2)
static A68_186   MSABCTR = {"forall yield"}; 
A_GISVEC(A68_VC ,NSABCTR,MSABCTR,12)
static A68_202   UTABCTR = {"forall control - ref [][]x"}; 
A_GISVEC(A68_VC ,VTABCTR,UTABCTR,26)
static A68_203   ZUABCTR = {"forall control - []x"}; 
A_GISVEC(A68_VC ,AVABCTR,ZUABCTR,20)
static A68_204   OVABCTR = {"forall loop counter"}; 
A_GISVEC(A68_VC ,PVABCTR,OVABCTR,19)
static A68_183   VVABCTR = {" = "}; 
static A68_33   BWABCTR = {".upb -1"}; 
A_GISVEC(A68_VC ,DWABCTR,BWABCTR,7)
static A68_205   EWABCTR = {".dim[0].upb"}; 
static A68_183   FWABCTR = {" - "}; 
static A68_205   GWABCTR = {".dim[0].lwb"}; 
A_GISVEC(A68_VC ,IWABCTR,EWABCTR,11)
A_GISVEC(A68_VC ,JWABCTR,FWABCTR,3)
A_GISVEC(A68_VC ,LWABCTR,GWABCTR,11)
A_GISVEC(A68_VC ,MWABCTR,VVABCTR,3)
static A68_206   XWABCTR = {"if ( "}; 
static A68_45   YWABCTR = {" != "}; 
static A68_33   BXABCTR = {".upb -1"}; 
A_GISVEC(A68_VC ,CXABCTR,BXABCTR,7)
static A68_205   DXABCTR = {".dim[0].upb"}; 
static A68_183   EXABCTR = {" - "}; 
static A68_205   FXABCTR = {".dim[0].lwb"}; 
A_GISVEC(A68_VC ,GXABCTR,DXABCTR,11)
A_GISVEC(A68_VC ,HXABCTR,EXABCTR,3)
A_GISVEC(A68_VC ,IXABCTR,FXABCTR,11)
A_GISVEC(A68_VC ,JXABCTR,XWABCTR,5)
A_GISVEC(A68_VC ,KXABCTR,YWABCTR,4)
static A68_189   NXABCTR = {" )"}; 
A_GISVEC(A68_VC ,OXABCTR,NXABCTR,2)
static A68_207   UXABCTR = {"{ A_ERROR( \"mismatched bounds in FORALL; row no "}; 
static A68_206   VXABCTR = {"\"); }"}; 
A_GISVEC(A68_VC ,WXABCTR,UXABCTR,48)
A_GISVEC(A68_VC ,YXABCTR,VXABCTR,5)
static A68_183   JYABCTR = {"A_R"}; 
static A68_206   KYABCTR = {"STRIP"}; 
A_GISVEC(A68_VC ,RYABCTR,JYABCTR,3)
A_GISVEC(A68_VC ,TYABCTR,KYABCTR,5)
static A68_183   VYABCTR = {" = "}; 
static A68_206   WYABCTR = {".data"}; 
A_GISVEC(A68_VC ,XYABCTR,VYABCTR,3)
A_GISVEC(A68_VC ,YYABCTR,WYABCTR,5)
static A68_193   HZABCTR = {".data += "}; 
static A68_209   IZABCTR = {".dim[0].stride"}; 
A_GISVEC(A68_VC ,KZABCTR,HZABCTR,9)
A_GISVEC(A68_VC ,LZABCTR,IZABCTR,14)
static A68_189   NZABCTR = {"++"}; 
A_GISVEC(A68_VC ,PZABCTR,NZABCTR,2)
static A68_45   QZABCTR = {" += "}; 
static A68_209   RZABCTR = {".dim[0].stride"}; 
A_GISVEC(A68_VC ,SZABCTR,QZABCTR,4)
A_GISVEC(A68_VC ,TZABCTR,RZABCTR,14)
static A68_187   EABBCTR = {"for (;"}; 
A_GISVEC(A68_VC ,FABBCTR,EABBCTR,6)
static A68_191   JABBCTR = {"-- >= 0;"}; 
A_GISVEC(A68_VC ,KABBCTR,JABBCTR,8)
static A68_183   EBBBCTR = {") )"}; 
A_GISVEC(A68_VC ,FBBBCTR,EBBBCTR,3)
static A68_45   SBBBCTR = {" = *"}; 
A_GISVEC(A68_VC ,TBBBCTR,SBBBCTR,4)
static A68_195   GCBBCTR = {"A_ENQ_SKIP"}; 
A_GISVEC(A68_VC ,ICBBCTR,GCBBCTR,10)
static A68_187   MCBBCTR = {"if ( !"}; 
A_GISVEC(A68_VC ,NCBBCTR,MCBBCTR,6)
static A68_193   RCBBCTR = {" ) break;"}; 
A_GISVEC(A68_VC ,SCBBCTR,RCBBCTR,9)
A68_75  EDBBCTR_od A_UNUSED;
typedef struct   /* env of non-global proc */
{
A68_INT  VHABCTR_codestream;
A_PAD_INT(PAD_64)
} AIABCTR_evaluatetoorbypart;
typedef struct   /* env of non-global proc */
{
A68_175 * Loop;
A68_71 ** Frobytlist;
} BJABCTR_evaluatefrompart;
typedef struct   /* env of non-global proc */
{
A68_175 * Loop;
A68_71 ** Frobytlist;
A68_181  YHABCTR_evaluatetoorbypart;
} IJABCTR_setstep;
typedef struct   /* env of non-global proc */
{
A68_INT  VHABCTR_codestream;
A_PAD_INT(PAD_65)
} KQABCTR_voidresult;
typedef struct   /* env of non-global proc */
{
A68_197  Controls;
} MRABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_197  Controls;
} URABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  USABCTR_rowname;
} YSABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  FTABCTR_controlname;
} JTABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  ZTABCTR_controlname;
} DUABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  LUABCTR_controlname;
} PUABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  EVABCTR_controlname;
} IVABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_197  Controls;
A68_123  XRABCTR_modeofrows;
A68_199  PRABCTR_rows;
} GYABCTR_initialise;
typedef struct   /* env of non-global proc */
{
A68_123  XRABCTR_modeofrows;
A68_197  Controls;
A68_199  PRABCTR_rows;
} CZABCTR_increment;

A_STATIC A68_64 * EHABCTR_assignment(A68_64 * CHABCTR_anonymous, A68_64  DHABCTR_anonymous);

A_STATIC A68_65 * JHABCTR_assignment(A68_65 * HHABCTR_anonymous, A68_65  IHABCTR_anonymous);

A68_VOID  UHABCTR_for(A68_175 * Loop, A68_INT  Frobytcount, A68_71 ** Frobytlist);

A_STATIC A68_VOID  ZHABCTR_evaluatetoorbypart(A68_64 * Part, A68_BOOL  Topart, void *NonLocals);

A_STATIC A68_VOID  AJABCTR_evaluatefrompart(A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HJABCTR_setstep(void *NonLocals);

A_STATIC A68_VOID  JQABCTR_voidresult(A68_64 * Value, void *NonLocals);

A68_VOID  IRABCTR_forall(A68_197  Controls, A68_71 ** Foralllist);

A_STATIC A68_VOID  LRABCTR_generator(A68_BOOL  JRABCTR_anonymous, A68_199  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  TRABCTR_generator(A68_BOOL  RRABCTR_anonymous, A68_123  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XSABCTR_generator(A68_BOOL  VSABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ITABCTR_generator(A68_BOOL  GTABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CUABCTR_generator(A68_BOOL  AUABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OUABCTR_generator(A68_BOOL  MUABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HVABCTR_generator(A68_BOOL  FVABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FYABCTR_initialise(A68_INT  I, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BZABCTR_increment(A68_INT  I, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  CCBBCTR_while(void);

A68_VOID  ECBBCTR_whiledo(A68_64 * Enquiry);

A68_VOID  XCBBCTR_whileod(void);

A_STATIC A68_65 * JHABCTR_assignment(A68_65 * HHABCTR_anonymous, A68_65  IHABCTR_anonymous)
{ 
A68_65  KHABCTR;  /* united object - for case conformity */
A68_VC  LHABCTR_anonymous A_UNUSED = {0};
A68_VC  MHABCTR;  /* OPERATORS - copy to flex */
A68_179 * NHABCTR;  /* YIELD */
A68_65 * OHABCTR;  /* clause result */
{ 
(*HHABCTR_anonymous) = IHABCTR_anonymous;
KHABCTR = IHABCTR_anonymous ;
switch ( KHABCTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
LHABCTR_anonymous = (KHABCTR.data.mode6);
NHABCTR = &(HHABCTR_anonymous-> data.mode6) ;
(void)((*NHABCTR) = A_VCOPY(LHABCTR_anonymous,MHABCTR,A68_CHAR ));
break;
default: 
/*SKIP*/;
break;
} 
OHABCTR = HHABCTR_anonymous;
} 
return( OHABCTR );
} 
#undef NL

A_STATIC A68_VOID  ZHABCTR_evaluatetoorbypart(A68_64 * Part, A68_BOOL  Topart, void *NonLocals)
#define NL(x) (((AIABCTR_evaluatetoorbypart *)NonLocals)->x)
{ 
A68_BOOL  BIABCTR;  /* optbool result */
A68_VC  DIABCTR;  /* clause result */
A68_68  HIABCTR;  /* avoid structure result */
A68_68  IIABCTR_temp A_UNUSED = {0};
A68_184  JIABCTR;  /* collateral clause result */
A68_VC  KIABCTR;  /* OPERATORS - istruct -> vector */
A68_33  LIABCTR;  /* OPERATORS - istruct -> vector */
A68_93  MIABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  NIABCTR;  /* YIELD */
A68_93  QIABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  RIABCTR;  /* YIELD */
A68_VC  SIABCTR;  /* avoid structure result */
A68_93  TIABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  UIABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  VIABCTR;  /* YIELD */
A68_93  WIABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  XIABCTR;  /* OPERATORS - istruct -> vector */
A68_65  YIABCTR = {0};  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(evaluatetoorbypart);
 /* line 91: */
 /* line 92: */
{ 
(void)(A_CALLPROC(BYQACTR_evaluate,(Part),(Part,(BYQACTR_evaluate).nonlocals)));
 /* line 93: */
BIABCTR = (!ZWPACTR_isconstant(Part));
if ( BIABCTR )
{BIABCTR = (!WXPACTR_istemp(Part));
}
 /* line 94: */
 /* line 96: */
if ((!Topart)|BIABCTR)
{ 
 /* line 97: */
 /* line 98: */
 /* line 99: */
if (Topart)
{ 
DIABCTR = EIABCTR;
} 
else
{ 
DIABCTR = GIABCTR;
} 
QMOACTR_declarectemporary( (*(&(Part->Mode))), DIABCTR, &HIABCTR );
IIABCTR_temp = HIABCTR;
 /* line 100: */
 /* line 101: */
LIABCTR = IIABCTR_temp.Name ;
NIABCTR = A_HISVEC(KIABCTR,LIABCTR,7,A68_CHAR ) ;
JIABCTR.data[0] = A_UNITE(MIABCTR,mode2,2,NIABCTR);
 /* line 102: */
RIABCTR = PIABCTR ;
JIABCTR.data[1] = A_UNITE(QIABCTR,mode2,2,RIABCTR);
UZPACTR_getcfragment( Part, &SIABCTR );
JIABCTR.data[2] = A_UNITE(TIABCTR,mode2,2,SIABCTR);
VIABCTR = ';' ;
JIABCTR.data[3] = A_UNITE(UIABCTR,mode1,1,VIABCTR);
JIABCTR.data[4] = A_UNITE(WIABCTR,mode4,4,EIAACTR_cnewline);
 /* line 103: */
(void)(MDMACTR_writecstream(A_HISVEC(XIABCTR,JIABCTR,5,A68_93 ), NL(VHABCTR_codestream)));
 /* line 104: */
 /* line 105: */
 /* line 106: */
(void)(JHABCTR_assignment((&(Part->Extra)), A_UNITE(YIABCTR,mode5,5,IIABCTR_temp)));
} 
} 
A_PROC_EXIT(evaluatetoorbypart);
return;
} 
#undef NL

A_STATIC A68_VOID  AJABCTR_evaluatefrompart(A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((BJABCTR_evaluatefrompart *)NonLocals)->x)
{ 
A68_64 * CJABCTR_value A_UNUSED = {0};
A68_VC  DJABCTR;  /* clause result */
A68_VC  EJABCTR;  /* avoid structure result */
A68_VC  FJABCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(evaluatefrompart);
{ 
 /* line 115: */
 /* line 116: */
if (*(&(NL(Loop)->Frompart)))
{ 
CJABCTR_value = (&((*NL(Frobytlist))->Value));
 /* line 117: */
(void)((*NL(Frobytlist)) = (*(&((*NL(Frobytlist))->Rest))));
 /* line 118: */
(void)(A_CALLPROC(BYQACTR_evaluate,(CJABCTR_value),(CJABCTR_value,(BYQACTR_evaluate).nonlocals)));
 /* line 119: */
 /* line 120: */
 /* line 122: */
UZPACTR_getcfragment( CJABCTR_value, &EJABCTR );
DJABCTR = EJABCTR;
} 
else
{ 
 /* line 123: */
DJABCTR = A_HVEC(FJABCTR,'1',A68_CHAR );
} 
} 
A_PROC_EXIT(evaluatefrompart);
*ReturnedValue = (DJABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HJABCTR_setstep(void *NonLocals)
#define NL(x) (((IJABCTR_setstep *)NonLocals)->x)
{ 
A68_64 ** JJABCTR;  /* YIELD */
A68_64 ** KJABCTR;  /* YIELD */
A_PROC_ENTRY(setstep);
{ 
 /* line 135: */
 /* line 136: */
if (*(&(NL(Loop)->Bypart)))
{ 
JJABCTR = (&(NL(Loop)->Step)) ;
(void)((*JJABCTR) = (&((*NL(Frobytlist))->Value)));
 /* line 137: */
(void)((*NL(Frobytlist)) = (*(&((*NL(Frobytlist))->Rest))));
 /* line 138: */
 /* line 139: */
 /* line 140: */
(void)(A_CALLPROC(NL(YHABCTR_evaluatetoorbypart),((*(&(NL(Loop)->Step))), A68_FALSE),((*(&(NL(Loop)->Step))), A68_FALSE,(NL(YHABCTR_evaluatetoorbypart)).nonlocals)));
} 
else
{ 
 /* line 141: */
 /* line 142: */
KJABCTR = (&(NL(Loop)->Step)) ;
(*KJABCTR) = QHABCTR_value1;
} 
} 
A_PROC_EXIT(setstep);
return;
} 
#undef NL

A_STATIC A68_VOID  JQABCTR_voidresult(A68_64 * Value, void *NonLocals)
#define NL(x) (((KQABCTR_voidresult *)NonLocals)->x)
{ 
A68_194  LQABCTR;  /* collateral clause result */
A68_VC  MQABCTR;  /* avoid structure result */
A68_93  NQABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  OQABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  PQABCTR;  /* YIELD */
A68_93  QQABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  RQABCTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(voidresult);
 /* line 244: */
 /* line 245: */
{ 
(void)(A_CALLPROC(BYQACTR_evaluate,(Value),(Value,(BYQACTR_evaluate).nonlocals)));
 /* line 246: */
 /* line 247: */
UZPACTR_getcfragment( Value, &MQABCTR );
LQABCTR.data[0] = A_UNITE(NQABCTR,mode2,2,MQABCTR);
PQABCTR = ';' ;
LQABCTR.data[1] = A_UNITE(OQABCTR,mode1,1,PQABCTR);
LQABCTR.data[2] = A_UNITE(QQABCTR,mode4,4,EIAACTR_cnewline);
 /* line 248: */
 /* line 249: */
(void)(MDMACTR_writecstream(A_HISVEC(RQABCTR,LQABCTR,3,A68_93 ), NL(VHABCTR_codestream)));
} 
A_PROC_EXIT(voidresult);
return;
} 
#undef NL

A_STATIC A68_VOID  LRABCTR_generator(A68_BOOL  JRABCTR_anonymous, A68_199  *ReturnedValue, void *NonLocals)
#define NL(x) (((MRABCTR_generator *)NonLocals)->x)
{ 
A68_199  NRABCTR;  /* clause result */
A68_199  ORABCTR;  /* OPERATORS - dynamic generator */
{ 
ORABCTR.upb = NL(Controls).upb ;
( JRABCTR_anonymous? A_VLOC(A68_VC ,ORABCTR): A_VHEAP(A68_VC ,ORABCTR) );
NRABCTR = ORABCTR;
} 
*ReturnedValue = (NRABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  TRABCTR_generator(A68_BOOL  RRABCTR_anonymous, A68_123  *ReturnedValue, void *NonLocals)
#define NL(x) (((URABCTR_generator *)NonLocals)->x)
{ 
A68_123  VRABCTR;  /* clause result */
A68_123  WRABCTR;  /* OPERATORS - dynamic generator */
{ 
WRABCTR.upb = NL(Controls).upb ;
( RRABCTR_anonymous? A_VLOC(A68_INT ,WRABCTR): A_VHEAP(A68_INT ,WRABCTR) );
VRABCTR = WRABCTR;
} 
*ReturnedValue = (VRABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  XSABCTR_generator(A68_BOOL  VSABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((YSABCTR_generator *)NonLocals)->x)
{ 
A68_VC  ZSABCTR;  /* clause result */
A68_VC  ATABCTR;  /* OPERATORS - dynamic generator */
{ 
ATABCTR.upb = NL(USABCTR_rowname).upb ;
( VSABCTR_anonymous? A_VLOC(A68_CHAR ,ATABCTR): A_VHEAP(A68_CHAR ,ATABCTR) );
ZSABCTR = ATABCTR;
} 
*ReturnedValue = (ZSABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ITABCTR_generator(A68_BOOL  GTABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((JTABCTR_generator *)NonLocals)->x)
{ 
A68_VC  KTABCTR;  /* clause result */
A68_VC  LTABCTR;  /* OPERATORS - dynamic generator */
{ 
LTABCTR.upb = NL(FTABCTR_controlname).upb ;
( GTABCTR_anonymous? A_VLOC(A68_CHAR ,LTABCTR): A_VHEAP(A68_CHAR ,LTABCTR) );
KTABCTR = LTABCTR;
} 
*ReturnedValue = (KTABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  CUABCTR_generator(A68_BOOL  AUABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((DUABCTR_generator *)NonLocals)->x)
{ 
A68_VC  EUABCTR;  /* clause result */
A68_VC  FUABCTR;  /* OPERATORS - dynamic generator */
{ 
FUABCTR.upb = NL(ZTABCTR_controlname).upb ;
( AUABCTR_anonymous? A_VLOC(A68_CHAR ,FUABCTR): A_VHEAP(A68_CHAR ,FUABCTR) );
EUABCTR = FUABCTR;
} 
*ReturnedValue = (EUABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  OUABCTR_generator(A68_BOOL  MUABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((PUABCTR_generator *)NonLocals)->x)
{ 
A68_VC  QUABCTR;  /* clause result */
A68_VC  RUABCTR;  /* OPERATORS - dynamic generator */
{ 
RUABCTR.upb = NL(LUABCTR_controlname).upb ;
( MUABCTR_anonymous? A_VLOC(A68_CHAR ,RUABCTR): A_VHEAP(A68_CHAR ,RUABCTR) );
QUABCTR = RUABCTR;
} 
*ReturnedValue = (QUABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HVABCTR_generator(A68_BOOL  FVABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((IVABCTR_generator *)NonLocals)->x)
{ 
A68_VC  JVABCTR;  /* clause result */
A68_VC  KVABCTR;  /* OPERATORS - dynamic generator */
{ 
KVABCTR.upb = NL(EVABCTR_controlname).upb ;
( FVABCTR_anonymous? A_VLOC(A68_CHAR ,KVABCTR): A_VHEAP(A68_CHAR ,KVABCTR) );
JVABCTR = KVABCTR;
} 
*ReturnedValue = (JVABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  FYABCTR_initialise(A68_INT  I, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((GYABCTR_initialise *)NonLocals)->x)
{ 
A68_VC  HYABCTR_ctrl A_UNUSED = {0};
A68_BOOL  IYABCTR;  /* clause result */
A68_208  LYABCTR;  /* collateral clause result */
A68_162  MYABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  NYABCTR;  /* YIELD */
A68_162  OYABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  PYABCTR;  /* clause result */
A68_165  QYABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  SYABCTR;  /* avoid structure result */
A68_VC  UYABCTR;  /* avoid structure result */
A_PROC_ENTRY(initialise);
 /* line 442: */
{ 
HYABCTR_ctrl = (*(&((&A_VINDEX(NL(Controls),I))->Control)));
 /* line 443: */
 /* line 444: */
 /* line 445: */
IYABCTR = (ARMACTR_isarray((*(&A_VINDEX(NL(XRABCTR_modeofrows),I))))&(QVMACTR_dimensions((*(&A_VINDEX(NL(XRABCTR_modeofrows),I))))>1));
if (IYABCTR)
{ 
 /* line 446: */
NYABCTR = (*(&A_VINDEX(NL(PRABCTR_rows),I))) ;
LYABCTR.data[0] = A_UNITE(MYABCTR,mode2,2,NYABCTR);
 /* line 447: */
LYABCTR.data[1] = A_UNITE(OYABCTR,mode2,2,HYABCTR_ctrl);
 /* line 448: */
ROAAOSF_whole( QVMACTR_dimensions((*(&A_VINDEX(NL(XRABCTR_modeofrows),I)))), 0, &SYABCTR );
SOQACTR_usemacro( A_VC_PLUS(A_VC_PLUS(RYABCTR,SYABCTR),TYABCTR), A_HISVEC(QYABCTR,LYABCTR,2,A68_162 ), &UYABCTR );
PYABCTR = UYABCTR;
} 
else
{ 
 /* line 449: */
PYABCTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(HYABCTR_ctrl,XYABCTR),(*(&A_VINDEX(NL(PRABCTR_rows),I)))),YYABCTR);
} 
} 
A_PROC_EXIT(initialise);
*ReturnedValue = (PYABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  BZABCTR_increment(A68_INT  I, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((CZABCTR_increment *)NonLocals)->x)
{ 
A68_INT  DZABCTR_origmde A_UNUSED = {0};
A68_VC  EZABCTR_ctrl A_UNUSED = {0};
A68_BOOL  FZABCTR;  /* optbool result */
A68_BOOL  GZABCTR;  /* clause result */
A68_VC  JZABCTR;  /* clause result */
A68_BOOL  MZABCTR;  /* optbool result */
A68_VC  OZABCTR;  /* clause result */
A_PROC_ENTRY(increment);
 /* line 452: */
{ 
DZABCTR_origmde = (*(&A_VINDEX(NL(XRABCTR_modeofrows),I)));
 /* line 453: */
EZABCTR_ctrl = (*(&((&A_VINDEX(NL(Controls),I))->Control)));
 /* line 454: */
 /* line 455: */
FZABCTR = ARMACTR_isarray(DZABCTR_origmde);
if ( FZABCTR )
{ /* line 456: */
FZABCTR = (QVMACTR_dimensions(DZABCTR_origmde)>1);
}
GZABCTR = FZABCTR;
if (GZABCTR)
{ 
 /* line 457: */
JZABCTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(EZABCTR_ctrl,KZABCTR),(*(&A_VINDEX(NL(PRABCTR_rows),I)))),LZABCTR);
} 
else
{ 
MZABCTR = QQMACTR_isvector(DZABCTR_origmde);
if ( ! MZABCTR )
{ /* line 458: */
MZABCTR = XRMACTR_isistruct(DZABCTR_origmde);
}
 /* line 459: */
if (MZABCTR)
{ 
OZABCTR = PZABCTR;
} 
else
{ 
 /* line 460: */
 /* line 461: */
OZABCTR = A_VC_PLUS(A_VC_PLUS(SZABCTR,(*(&A_VINDEX(NL(PRABCTR_rows),I)))),TZABCTR);
} 
JZABCTR = A_VC_PLUS(EZABCTR_ctrl,OZABCTR);
} 
} 
A_PROC_EXIT(increment);
*ReturnedValue = (JZABCTR);
return;
} 
#undef NL

A_STATIC A68_64 * EHABCTR_assignment(A68_64 * CHABCTR_anonymous, A68_64  DHABCTR_anonymous)
{ 
A68_INT * FHABCTR;  /* YIELD */
A68_BITS * GHABCTR;  /* YIELD */
A68_64 * PHABCTR;  /* clause result */
{ 
FHABCTR = (&(CHABCTR_anonymous->Mode)) ;
(*FHABCTR) = DHABCTR_anonymous.Mode;
GHABCTR = (&(CHABCTR_anonymous->Info)) ;
(*GHABCTR) = DHABCTR_anonymous.Info;
(void)(JHABCTR_assignment((&(CHABCTR_anonymous->Extra)), DHABCTR_anonymous.Extra));
PHABCTR = CHABCTR_anonymous;
} 
return( PHABCTR );
} 
#undef NL
 /* line 71: */
 /* line 73: */

A68_VOID  UHABCTR_for(A68_175 * Loop, A68_INT  Frobytcount, A68_71 ** Frobytlist)
{ 
A68_INT  VHABCTR_codestream A_UNUSED = {0};
A68_181  YHABCTR_evaluatetoorbypart;   /* proc value of non-global proc */
A68_185  ZIABCTR_evaluatefrompart;   /* proc value of non-global proc */
A68_75  GJABCTR_setstep;   /* proc value of non-global proc */
A68_64 * LJABCTR_value A_UNUSED = {0};
A68_VC  MJABCTR;  /* avoid structure result */
A68_VC  NJABCTR_end A_UNUSED = {0};
A68_VC  OJABCTR;  /* avoid structure result */
A68_VC  PJABCTR_from A_UNUSED = {0};
A68_VC  QJABCTR;  /* clause result */
A68_VC  RJABCTR;  /* avoid structure result */
A68_68  UJABCTR;  /* avoid structure result */
A68_VC  VJABCTR;  /* OPERATORS - istruct -> vector */
A68_33  WJABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  XJABCTR_loopcounter A_UNUSED = {0};
A68_188  YJABCTR;  /* collateral clause result */
A68_93  BKABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  CKABCTR;  /* YIELD */
A68_93  DKABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  GKABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  HKABCTR;  /* YIELD */
A68_93  IKABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  JKABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  KKABCTR;  /* YIELD */
A68_93  LKABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  MKABCTR;  /* OPERATORS - istruct -> vector */
A68_LINT  NKABCTR_constantstep A_UNUSED = {0};
A68_190  OKABCTR;  /* collateral clause result */
A68_93  PKABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  SKABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  TKABCTR;  /* YIELD */
A68_93  UKABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  VKABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  WKABCTR;  /* YIELD */
A68_92  XKABCTR;  /* clause result */
A68_92  YKABCTR;  /* OPERATORS - istruct -> vector */
A68_190  ZKABCTR;  /* collateral clause result */
A68_93  ALABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  DLABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ELABCTR;  /* YIELD */
A68_93  FLABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  GLABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  HLABCTR;  /* YIELD */
A68_92  ILABCTR;  /* OPERATORS - istruct -> vector */
A68_93  LLABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  MLABCTR;  /* YIELD */
A68_92  NLABCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_93  OLABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  PLABCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_184  QLABCTR;  /* collateral clause result */
A68_93  RLABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  ULABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  VLABCTR;  /* YIELD */
A68_VC  WLABCTR;  /* avoid structure result */
A68_93  XLABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  AMABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  BMABCTR;  /* YIELD */
A68_93  CMABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  DMABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  EMABCTR;  /* avoid structure result */
A68_VC  FMABCTR_step A_UNUSED = {0};
A68_192  GMABCTR;  /* collateral clause result */
A68_93  JMABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  KMABCTR;  /* YIELD */
A68_93  LMABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  OMABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  PMABCTR;  /* YIELD */
A68_93  QMABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  TMABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  UMABCTR;  /* YIELD */
A68_93  VMABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  YMABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ZMABCTR;  /* YIELD */
A68_93  ANABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  BNABCTR;  /* OPERATORS - istruct -> vector */
A68_192  CNABCTR;  /* collateral clause result */
A68_93  FNABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  GNABCTR;  /* YIELD */
A68_93  HNABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  KNABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  LNABCTR;  /* YIELD */
A68_93  MNABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  PNABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  QNABCTR;  /* YIELD */
A68_93  RNABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  UNABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  VNABCTR;  /* YIELD */
A68_93  WNABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  XNABCTR;  /* OPERATORS - istruct -> vector */
A68_190  YNABCTR;  /* collateral clause result */
A68_93  BOABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  COABCTR;  /* YIELD */
A68_93  DOABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  GOABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  HOABCTR;  /* YIELD */
A68_93  IOABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  JOABCTR;  /* OPERATORS - istruct -> vector */
A68_184  KOABCTR;  /* collateral clause result */
A68_93  LOABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  OOABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  POABCTR;  /* YIELD */
A68_93  QOABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  TOABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  UOABCTR;  /* YIELD */
A68_93  VOABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  WOABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  XOABCTR;  /* avoid structure result */
A68_VC  YOABCTR_from A_UNUSED = {0};
A68_VC  ZOABCTR;  /* avoid structure result */
A68_VC  APABCTR_loopcounter A_UNUSED = {0};
A68_188  BPABCTR;  /* collateral clause result */
A68_93  EPABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  FPABCTR;  /* YIELD */
A68_93  GPABCTR = {0};  /* OPERATORS - mode -> union mode */
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
A68_VC  YPABCTR;  /* avoid structure result */
A68_93  ZPABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  CQABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  DQABCTR;  /* YIELD */
A68_93  EQABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  FQABCTR;  /* OPERATORS - istruct -> vector */
A68_74  IQABCTR_voidresult;   /* proc value of non-global proc */
A68_196  SQABCTR;  /* collateral clause result */
A68_93  VQABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  WQABCTR;  /* YIELD */
A68_93  XQABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  YQABCTR;  /* OPERATORS - istruct -> vector */
A68_196  ZQABCTR;  /* collateral clause result */
A68_93  CRABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  DRABCTR;  /* YIELD */
A68_93  ERABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  FRABCTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(for);
 /* line 81: */
 /* line 82: */
{ 
VHABCTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 84: */
A_CLOSURE( YHABCTR_evaluatetoorbypart, ZHABCTR_evaluatetoorbypart, AIABCTR_evaluatetoorbypart );
(( AIABCTR_evaluatetoorbypart * ) ( YHABCTR_evaluatetoorbypart.nonlocals )) -> VHABCTR_codestream = VHABCTR_codestream;
 /* line 108: */
 /* line 113: */
 /* line 114: */
A_CLOSURE( ZIABCTR_evaluatefrompart, AJABCTR_evaluatefrompart, BJABCTR_evaluatefrompart );
(( BJABCTR_evaluatefrompart * ) ( ZIABCTR_evaluatefrompart.nonlocals )) -> Loop = Loop;
(( BJABCTR_evaluatefrompart * ) ( ZIABCTR_evaluatefrompart.nonlocals )) -> Frobytlist = Frobytlist;
 /* line 125: */
 /* line 133: */
 /* line 134: */
A_CLOSURE( GJABCTR_setstep, HJABCTR_setstep, IJABCTR_setstep );
(( IJABCTR_setstep * ) ( GJABCTR_setstep.nonlocals )) -> Loop = Loop;
(( IJABCTR_setstep * ) ( GJABCTR_setstep.nonlocals )) -> Frobytlist = Frobytlist;
(( IJABCTR_setstep * ) ( GJABCTR_setstep.nonlocals )) -> YHABCTR_evaluatetoorbypart = YHABCTR_evaluatetoorbypart;
 /* line 146: */
 /* line 147: */
 /* line 159: */
if (*(&(Loop->Topart)))
{ 
LJABCTR_value = (&((*Frobytlist)->Value));
 /* line 160: */
(void)((*Frobytlist) = (*(&((*Frobytlist)->Rest))));
 /* line 161: */
(void)(A_CALLPROC(YHABCTR_evaluatetoorbypart,(LJABCTR_value, A68_TRUE),(LJABCTR_value, A68_TRUE,(YHABCTR_evaluatetoorbypart).nonlocals)));
 /* line 162: */
UZPACTR_getcfragment( LJABCTR_value, &MJABCTR );
NJABCTR_end = MJABCTR;
 /* line 164: */
(void)(A_CALLPROC(GJABCTR_setstep,(),((GJABCTR_setstep).nonlocals)));
 /* line 166: */
A_CALLPROC(ZIABCTR_evaluatefrompart,( &OJABCTR),( &OJABCTR,(ZIABCTR_evaluatefrompart).nonlocals));
PJABCTR_from = OJABCTR;
 /* line 168: */
 /* line 169: */
 /* line 170: */
 /* line 172: */
if (*(&(Loop->Forpart)))
{ 
 /* line 174: */
UZPACTR_getcfragment( (*(&(Loop->Control))), &RJABCTR );
QJABCTR = RJABCTR;
} 
else
{ 
 /* line 175: */
 /* line 176: */
QMOACTR_declarectemporary( EFAACTR_intmode, TJABCTR, &UJABCTR );
WJABCTR = UJABCTR.Name ;
QJABCTR = A_HISVEC(VJABCTR,WJABCTR,7,A68_CHAR );
} 
XJABCTR_loopcounter = QJABCTR;
 /* line 178: */
 /* line 179: */
CKABCTR = AKABCTR ;
YJABCTR.data[0] = A_UNITE(BKABCTR,mode2,2,CKABCTR);
YJABCTR.data[1] = A_UNITE(DKABCTR,mode2,2,XJABCTR_loopcounter);
HKABCTR = FKABCTR ;
YJABCTR.data[2] = A_UNITE(GKABCTR,mode2,2,HKABCTR);
YJABCTR.data[3] = A_UNITE(IKABCTR,mode2,2,PJABCTR_from);
KKABCTR = ';' ;
YJABCTR.data[4] = A_UNITE(JKABCTR,mode1,1,KKABCTR);
YJABCTR.data[5] = A_UNITE(LKABCTR,mode4,4,EIAACTR_cnewline);
 /* line 180: */
(void)(MDMACTR_writecstream(A_HISVEC(MKABCTR,YJABCTR,6,A68_93 ), VHABCTR_codestream));
 /* line 181: */
 /* line 182: */
 /* line 184: */
if (ZWPACTR_isconstant((*(&(Loop->Step)))))
{ 
NKABCTR_constantstep = (A68_LINT )NYPACTR_getconstant((*(&(Loop->Step))));
 /* line 185: */
 /* line 186: */
 /* line 187: */
if (NKABCTR_constantstep>0)
{ 
OKABCTR.data[0] = A_UNITE(PKABCTR,mode2,2,XJABCTR_loopcounter);
TKABCTR = RKABCTR ;
OKABCTR.data[1] = A_UNITE(SKABCTR,mode2,2,TKABCTR);
OKABCTR.data[2] = A_UNITE(UKABCTR,mode2,2,NJABCTR_end);
 /* line 188: */
WKABCTR = ';' ;
OKABCTR.data[3] = A_UNITE(VKABCTR,mode1,1,WKABCTR);
XKABCTR = A_HISVEC(YKABCTR,OKABCTR,4,A68_93 );
} 
else
{ 
 /* line 189: */
if (NKABCTR_constantstep<0)
{ 
ZKABCTR.data[0] = A_UNITE(ALABCTR,mode2,2,XJABCTR_loopcounter);
ELABCTR = CLABCTR ;
ZKABCTR.data[1] = A_UNITE(DLABCTR,mode2,2,ELABCTR);
ZKABCTR.data[2] = A_UNITE(FLABCTR,mode2,2,NJABCTR_end);
 /* line 190: */
 /* line 191: */
HLABCTR = ';' ;
ZKABCTR.data[3] = A_UNITE(GLABCTR,mode1,1,HLABCTR);
XKABCTR = A_HISVEC(ILABCTR,ZKABCTR,4,A68_93 );
} 
else
{ 
MLABCTR = KLABCTR ;
XKABCTR = A_HVEC(NLABCTR,A_UNITE(LLABCTR,mode2,2,MLABCTR),A68_93 );
} 
} 
 /* line 192: */
(void)(MDMACTR_writecstream(XKABCTR, VHABCTR_codestream));
 /* line 193: */
(void)(MDMACTR_writecstream(A_HVEC(PLABCTR,A_UNITE(OLABCTR,mode4,4,EIAACTR_cnewline),A68_93 ), VHABCTR_codestream));
 /* line 194: */
 /* line 195: */
QLABCTR.data[0] = A_UNITE(RLABCTR,mode2,2,XJABCTR_loopcounter);
VLABCTR = TLABCTR ;
QLABCTR.data[1] = A_UNITE(ULABCTR,mode2,2,VLABCTR);
UZPACTR_getcfragment( (*(&(Loop->Step))), &WLABCTR );
QLABCTR.data[2] = A_UNITE(XLABCTR,mode2,2,WLABCTR);
 /* line 196: */
BMABCTR = ZLABCTR ;
QLABCTR.data[3] = A_UNITE(AMABCTR,mode2,2,BMABCTR);
QLABCTR.data[4] = A_UNITE(CMABCTR,mode4,4,EIAACTR_cnewline);
 /* line 197: */
 /* line 198: */
(void)(MDMACTR_writecstream(A_HISVEC(DMABCTR,QLABCTR,5,A68_93 ), VHABCTR_codestream));
} 
else
{ 
UZPACTR_getcfragment( (*(&(Loop->Step))), &EMABCTR );
FMABCTR_step = EMABCTR;
 /* line 199: */
 /* line 200: */
KMABCTR = IMABCTR ;
GMABCTR.data[0] = A_UNITE(JMABCTR,mode2,2,KMABCTR);
GMABCTR.data[1] = A_UNITE(LMABCTR,mode2,2,FMABCTR_step);
 /* line 201: */
PMABCTR = NMABCTR ;
GMABCTR.data[2] = A_UNITE(OMABCTR,mode2,2,PMABCTR);
GMABCTR.data[3] = A_UNITE(QMABCTR,mode2,2,XJABCTR_loopcounter);
UMABCTR = SMABCTR ;
GMABCTR.data[4] = A_UNITE(TMABCTR,mode2,2,UMABCTR);
GMABCTR.data[5] = A_UNITE(VMABCTR,mode2,2,NJABCTR_end);
 /* line 202: */
ZMABCTR = XMABCTR ;
GMABCTR.data[6] = A_UNITE(YMABCTR,mode2,2,ZMABCTR);
GMABCTR.data[7] = A_UNITE(ANABCTR,mode4,4,EIAACTR_cnewline);
 /* line 203: */
(void)(MDMACTR_writecstream(A_HISVEC(BNABCTR,GMABCTR,8,A68_93 ), VHABCTR_codestream));
 /* line 204: */
 /* line 205: */
GNABCTR = ENABCTR ;
CNABCTR.data[0] = A_UNITE(FNABCTR,mode2,2,GNABCTR);
CNABCTR.data[1] = A_UNITE(HNABCTR,mode2,2,FMABCTR_step);
 /* line 206: */
LNABCTR = JNABCTR ;
CNABCTR.data[2] = A_UNITE(KNABCTR,mode2,2,LNABCTR);
CNABCTR.data[3] = A_UNITE(MNABCTR,mode2,2,XJABCTR_loopcounter);
QNABCTR = ONABCTR ;
CNABCTR.data[4] = A_UNITE(PNABCTR,mode2,2,QNABCTR);
CNABCTR.data[5] = A_UNITE(RNABCTR,mode2,2,NJABCTR_end);
 /* line 207: */
VNABCTR = TNABCTR ;
CNABCTR.data[6] = A_UNITE(UNABCTR,mode2,2,VNABCTR);
CNABCTR.data[7] = A_UNITE(WNABCTR,mode4,4,EIAACTR_cnewline);
 /* line 208: */
(void)(MDMACTR_writecstream(A_HISVEC(XNABCTR,CNABCTR,8,A68_93 ), VHABCTR_codestream));
 /* line 209: */
 /* line 210: */
COABCTR = AOABCTR ;
YNABCTR.data[0] = A_UNITE(BOABCTR,mode2,2,COABCTR);
YNABCTR.data[1] = A_UNITE(DOABCTR,mode2,2,FMABCTR_step);
HOABCTR = FOABCTR ;
YNABCTR.data[2] = A_UNITE(GOABCTR,mode2,2,HOABCTR);
YNABCTR.data[3] = A_UNITE(IOABCTR,mode4,4,EIAACTR_cnewline);
 /* line 211: */
(void)(MDMACTR_writecstream(A_HISVEC(JOABCTR,YNABCTR,4,A68_93 ), VHABCTR_codestream));
 /* line 212: */
 /* line 213: */
KOABCTR.data[0] = A_UNITE(LOABCTR,mode2,2,XJABCTR_loopcounter);
POABCTR = NOABCTR ;
KOABCTR.data[1] = A_UNITE(OOABCTR,mode2,2,POABCTR);
KOABCTR.data[2] = A_UNITE(QOABCTR,mode2,2,FMABCTR_step);
UOABCTR = SOABCTR ;
KOABCTR.data[3] = A_UNITE(TOABCTR,mode2,2,UOABCTR);
KOABCTR.data[4] = A_UNITE(VOABCTR,mode4,4,EIAACTR_cnewline);
 /* line 214: */
 /* line 215: */
 /* line 216: */
 /* line 220: */
(void)(MDMACTR_writecstream(A_HISVEC(WOABCTR,KOABCTR,5,A68_93 ), VHABCTR_codestream));
} 
} 
else
{ 
 /* line 221: */
 /* line 227: */
if (*(&(Loop->Forpart)))
{ 
(void)(A_CALLPROC(GJABCTR_setstep,(),((GJABCTR_setstep).nonlocals)));
 /* line 228: */
A_CALLPROC(ZIABCTR_evaluatefrompart,( &XOABCTR),( &XOABCTR,(ZIABCTR_evaluatefrompart).nonlocals));
YOABCTR_from = XOABCTR;
 /* line 229: */
UZPACTR_getcfragment( (*(&(Loop->Control))), &ZOABCTR );
APABCTR_loopcounter = ZOABCTR;
 /* line 230: */
 /* line 231: */
FPABCTR = DPABCTR ;
BPABCTR.data[0] = A_UNITE(EPABCTR,mode2,2,FPABCTR);
BPABCTR.data[1] = A_UNITE(GPABCTR,mode2,2,APABCTR_loopcounter);
KPABCTR = IPABCTR ;
BPABCTR.data[2] = A_UNITE(JPABCTR,mode2,2,KPABCTR);
BPABCTR.data[3] = A_UNITE(LPABCTR,mode2,2,YOABCTR_from);
PPABCTR = NPABCTR ;
BPABCTR.data[4] = A_UNITE(OPABCTR,mode2,2,PPABCTR);
BPABCTR.data[5] = A_UNITE(QPABCTR,mode4,4,EIAACTR_cnewline);
 /* line 232: */
(void)(MDMACTR_writecstream(A_HISVEC(RPABCTR,BPABCTR,6,A68_93 ), VHABCTR_codestream));
 /* line 233: */
 /* line 234: */
SPABCTR.data[0] = A_UNITE(TPABCTR,mode2,2,APABCTR_loopcounter);
 /* line 235: */
XPABCTR = VPABCTR ;
SPABCTR.data[1] = A_UNITE(WPABCTR,mode2,2,XPABCTR);
UZPACTR_getcfragment( (*(&(Loop->Step))), &YPABCTR );
SPABCTR.data[2] = A_UNITE(ZPABCTR,mode2,2,YPABCTR);
DQABCTR = BQABCTR ;
SPABCTR.data[3] = A_UNITE(CQABCTR,mode2,2,DQABCTR);
SPABCTR.data[4] = A_UNITE(EQABCTR,mode4,4,EIAACTR_cnewline);
 /* line 236: */
 /* line 237: */
 /* line 238: */
(void)(MDMACTR_writecstream(A_HISVEC(FQABCTR,SPABCTR,5,A68_93 ), VHABCTR_codestream));
} 
else
{ 
A_CLOSURE( IQABCTR_voidresult, JQABCTR_voidresult, KQABCTR_voidresult );
(( KQABCTR_voidresult * ) ( IQABCTR_voidresult.nonlocals )) -> VHABCTR_codestream = VHABCTR_codestream;
 /* line 257: */
 /* line 258: */
 /* line 259: */
if (Frobytcount>0)
{ 
(void)(A_CALLPROC(IQABCTR_voidresult,((&((*Frobytlist)->Value))),((&((*Frobytlist)->Value)),(IQABCTR_voidresult).nonlocals)));
 /* line 260: */
 /* line 261: */
 /* line 262: */
if (Frobytcount>1)
{ 
 /* line 263: */
 /* line 264: */
(void)(A_CALLPROC(IQABCTR_voidresult,((&((*(&((*Frobytlist)->Rest)))->Value))),((&((*(&((*Frobytlist)->Rest)))->Value)),(IQABCTR_voidresult).nonlocals)));
} 
} 
 /* line 266: */
WQABCTR = UQABCTR ;
SQABCTR.data[0] = A_UNITE(VQABCTR,mode2,2,WQABCTR);
SQABCTR.data[1] = A_UNITE(XQABCTR,mode4,4,EIAACTR_cnewline);
 /* line 267: */
 /* line 268: */
(void)(MDMACTR_writecstream(A_HISVEC(YQABCTR,SQABCTR,2,A68_93 ), VHABCTR_codestream));
} 
} 
 /* line 270: */
DRABCTR = BRABCTR ;
ZQABCTR.data[0] = A_UNITE(CRABCTR,mode2,2,DRABCTR);
ZQABCTR.data[1] = A_UNITE(ERABCTR,mode4,4,EIAACTR_cnewline);
 /* line 271: */
(void)(MDMACTR_writecstream(A_HISVEC(FRABCTR,ZQABCTR,2,A68_93 ), VHABCTR_codestream));
} 
A_PROC_EXIT(for);
return;
} 
#undef NL
 /* line 276: */

A68_VOID  IRABCTR_forall(A68_197  Controls, A68_71 ** Foralllist)
{ 
A68_200  KRABCTR_generator;   /* proc value of non-global proc */
A68_199  QRABCTR;  /* avoid structure result */
A68_199  PRABCTR_rows A_UNUSED = {0};
A68_201  SRABCTR_generator;   /* proc value of non-global proc */
A68_123  YRABCTR;  /* avoid structure result */
A68_123  XRABCTR_modeofrows A_UNUSED = {0};
A68_INT  ZRABCTR_codestream A_UNUSED = {0};
A68_INT * ASABCTR_modeofrow A_UNUSED = {0};
A68_176 * BSABCTR_control A_UNUSED = {0};
A68_VC * CSABCTR_row A_UNUSED = {0};
A68_INT  DSABCTR;  /* forall loop counter */
A68_64 * ESABCTR_rowvalue A_UNUSED = {0};
A68_INT  FSABCTR_elemmode A_UNUSED = {0};
A68_BOOL  GSABCTR;  /* optbool result */
A68_VC  HSABCTR;  /* clause result */
A68_VC  ISABCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  JSABCTR;  /* avoid structure result */
A68_VC  KSABCTR;  /* avoid structure result */
A68_VC  LSABCTR;  /* avoid structure result */
A68_64 * OSABCTR_temp A_UNUSED = {0};
A68_BOOL  PSABCTR;  /* optbool result */
A68_VC  QSABCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  RSABCTR;  /* avoid structure result */
A68_VC  SSABCTR;  /* avoid structure result */
A68_VC  TSABCTR;  /* avoid structure result */
A68_VC  USABCTR_rowname A_UNUSED = {0};
A68_31  WSABCTR_generator;   /* proc value of non-global proc */
A68_VC  BTABCTR;  /* avoid structure result */
A68_BOOL  CTABCTR_originalhasrefs A_UNUSED = {0};
A68_BOOL * DTABCTR;  /* YIELD */
A68_VC  ETABCTR;  /* avoid structure result */
A68_VC  FTABCTR_controlname A_UNUSED = {0};
A68_31  HTABCTR_generator;   /* proc value of non-global proc */
A68_VC  MTABCTR;  /* clause result */
A68_VC  NTABCTR;  /* avoid structure result */
A68_VC * OTABCTR;  /* YIELD */
A68_INT  PTABCTR_forallmode A_UNUSED = {0};
A68_BOOL  QTABCTR;  /* optbool result */
A68_BOOL  RTABCTR;  /* optbool result */
A68_INT  STABCTR_controlmode A_UNUSED = {0};
A68_BOOL * TTABCTR;  /* YIELD */
A68_68  WTABCTR;  /* avoid structure result */
A68_VC  XTABCTR;  /* OPERATORS - istruct -> vector */
A68_33  YTABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  ZTABCTR_controlname A_UNUSED = {0};
A68_31  BUABCTR_generator;   /* proc value of non-global proc */
A68_VC  GUABCTR;  /* clause result */
A68_VC  HUABCTR;  /* avoid structure result */
A68_VC * IUABCTR;  /* YIELD */
A68_BOOL * JUABCTR;  /* YIELD */
A68_VC  KUABCTR;  /* avoid structure result */
A68_VC  LUABCTR_controlname A_UNUSED = {0};
A68_31  NUABCTR_generator;   /* proc value of non-global proc */
A68_VC  SUABCTR;  /* clause result */
A68_VC  TUABCTR;  /* avoid structure result */
A68_VC * UUABCTR;  /* YIELD */
A68_BOOL  VUABCTR;  /* optbool result */
A68_INT  WUABCTR;  /* clause result */
A68_INT  XUABCTR_controlmode A_UNUSED = {0};
A68_BOOL * YUABCTR;  /* YIELD */
A68_68  BVABCTR;  /* avoid structure result */
A68_VC  CVABCTR;  /* OPERATORS - istruct -> vector */
A68_33  DVABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  EVABCTR_controlname A_UNUSED = {0};
A68_31  GVABCTR_generator;   /* proc value of non-global proc */
A68_VC  LVABCTR;  /* clause result */
A68_VC  MVABCTR;  /* avoid structure result */
A68_VC * NVABCTR;  /* YIELD */
A68_68  QVABCTR;  /* avoid structure result */
A68_VC  RVABCTR;  /* OPERATORS - istruct -> vector */
A68_33  SVABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  TVABCTR_loopcounter A_UNUSED = {0};
A68_194  UVABCTR;  /* collateral clause result */
A68_INT  WVABCTR;  /* YIELD */
A68_VC  XVABCTR;  /* clause result */
A68_INT  YVABCTR;  /* YIELD */
A68_VC  ZVABCTR;  /* avoid structure result */
A68_INT  AWABCTR;  /* YIELD */
A68_INT  CWABCTR;  /* YIELD */
A68_INT  HWABCTR;  /* YIELD */
A68_INT  KWABCTR;  /* YIELD */
A68_93  NWABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  OWABCTR;  /* YIELD */
A68_93  PWABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  QWABCTR;  /* YIELD */
A68_93  RWABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  SWABCTR;  /* OPERATORS - istruct -> vector */
A68_INT  TWABCTR_i A_UNUSED = {0};
A68_INT  UWABCTR;  /* to part of loop */
A68_VC  VWABCTR_row A_UNUSED = {0};
A68_194  WWABCTR;  /* collateral clause result */
A68_VC  ZWABCTR;  /* clause result */
A68_VC  AXABCTR;  /* avoid structure result */
A68_93  LXABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  MXABCTR;  /* YIELD */
A68_93  PXABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  QXABCTR;  /* YIELD */
A68_93  RXABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  SXABCTR;  /* OPERATORS - istruct -> vector */
A68_196  TXABCTR;  /* collateral clause result */
A68_VC  XXABCTR;  /* avoid structure result */
A68_93  ZXABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  AYABCTR;  /* YIELD */
A68_93  BYABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  CYABCTR;  /* OPERATORS - istruct -> vector */
A68_53  EYABCTR_initialise;   /* proc value of non-global proc */
A68_53  AZABCTR_increment;   /* proc value of non-global proc */
A68_INT  UZABCTR_i A_UNUSED = {0};
A68_INT  VZABCTR;  /* to part of loop */
A68_194  WZABCTR;  /* collateral clause result */
A68_VC  XZABCTR;  /* avoid structure result */
A68_93  YZABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  ZZABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  AABBCTR;  /* YIELD */
A68_93  BABBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  CABBCTR;  /* OPERATORS - istruct -> vector */
A68_210  DABBCTR;  /* collateral clause result */
A68_93  GABBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  HABBCTR;  /* YIELD */
A68_93  IABBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  LABBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  MABBCTR;  /* YIELD */
A68_93  NABBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  OABBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  PABBCTR;  /* YIELD */
A68_VC  QABBCTR;  /* avoid structure result */
A68_93  RABBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  SABBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  TABBCTR;  /* OPERATORS - istruct -> vector */
A68_INT  UABBCTR_i A_UNUSED = {0};
A68_INT  VABBCTR;  /* to part of loop */
A68_194  WABBCTR;  /* collateral clause result */
A68_93  XABBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  YABBCTR;  /* YIELD */
A68_VC  ZABBCTR;  /* avoid structure result */
A68_93  ABBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  BBBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  CBBBCTR;  /* OPERATORS - istruct -> vector */
A68_190  DBBBCTR;  /* collateral clause result */
A68_93  GBBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  HBBBCTR;  /* YIELD */
A68_93  IBBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  JBBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  KBBBCTR;  /* YIELD */
A68_93  LBBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  MBBBCTR;  /* OPERATORS - istruct -> vector */
A68_176 * NBBBCTR_control A_UNUSED = {0};
A68_INT  OBBBCTR;  /* forall loop counter */
A68_184  PBBBCTR;  /* collateral clause result */
A68_VC  QBBBCTR;  /* avoid structure result */
A68_93  RBBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  UBBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  VBBBCTR;  /* YIELD */
A68_93  WBBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  XBBBCTR;  /* YIELD */
A68_93  YBBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  ZBBBCTR;  /* YIELD */
A68_93  ACBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  BCBBCTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(forall);
 /* line 284: */
 /* line 285: */
{ 
A_CLOSURE( KRABCTR_generator, LRABCTR_generator, MRABCTR_generator );
(( MRABCTR_generator * ) ( KRABCTR_generator.nonlocals )) -> Controls = Controls;
A_CALLPROC(KRABCTR_generator,(A68_TRUE, &QRABCTR),(A68_TRUE, &QRABCTR,(KRABCTR_generator).nonlocals));
PRABCTR_rows = QRABCTR;
 /* line 286: */
A_CLOSURE( SRABCTR_generator, TRABCTR_generator, URABCTR_generator );
(( URABCTR_generator * ) ( SRABCTR_generator.nonlocals )) -> Controls = Controls;
A_CALLPROC(SRABCTR_generator,(A68_TRUE, &YRABCTR),(A68_TRUE, &YRABCTR,(SRABCTR_generator).nonlocals));
XRABCTR_modeofrows = YRABCTR;
 /* line 287: */
ZRABCTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 291: */
 /* line 293: */
DSABCTR = XRABCTR_modeofrows.upb -1;
if ( DSABCTR != Controls.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
if ( DSABCTR != PRABCTR_rows.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 3"); }
ASABCTR_modeofrow = XRABCTR_modeofrows.data;
BSABCTR_control = Controls.data;
CSABCTR_row = PRABCTR_rows.data;
for (;DSABCTR-- >= 0;
(ASABCTR_modeofrow++
,BSABCTR_control++
,CSABCTR_row++
) )
{
 /* line 294: */
ESABCTR_rowvalue = (&((*Foralllist)->Value));
 /* line 295: */
(void)((*Foralllist) = (*(&((*Foralllist)->Rest))));
 /* line 296: */
(void)(A_CALLPROC(BYQACTR_evaluate,(ESABCTR_rowvalue),(ESABCTR_rowvalue,(BYQACTR_evaluate).nonlocals)));
 /* line 297: */
(void)((*ASABCTR_modeofrow) = (*(&(ESABCTR_rowvalue->Mode))));
 /* line 298: */
FSABCTR_elemmode = A_CALLPROC(UVMACTR_elementmode,((*ASABCTR_modeofrow)),((*ASABCTR_modeofrow),(UVMACTR_elementmode).nonlocals));
 /* line 305: */
 /* line 306: */
 /* line 307: */
 /* line 308: */
if (SXPACTR_isident(ESABCTR_rowvalue))
{ 
 /* line 309: */
GSABCTR = RSMACTR_hasrefs((*ASABCTR_modeofrow));
if ( GSABCTR )
{ /* line 310: */
GSABCTR = KRMACTR_isflexarray((*ASABCTR_modeofrow));
}
if (GSABCTR)
{ 
 /* line 311: */
 /* line 312: */
UZPACTR_getcfragment( ESABCTR_rowvalue, &JSABCTR );
JIAACTR_bracket( A_VC_PLUS(A_HVEC(ISABCTR,'*',A68_CHAR ),JSABCTR), &KSABCTR );
HSABCTR = KSABCTR;
} 
else
{ 
 /* line 313: */
 /* line 314: */
UZPACTR_getcfragment( ESABCTR_rowvalue, &LSABCTR );
HSABCTR = LSABCTR;
} 
} 
else
{ 
OSABCTR_temp = JQQACTR_yield(NSABCTR, ESABCTR_rowvalue);
 /* line 316: */
 /* line 317: */
PSABCTR = MOMACTR_hasoneref((*ASABCTR_modeofrow));
if ( PSABCTR )
{ /* line 318: */
PSABCTR = KRMACTR_isflexarray((*ASABCTR_modeofrow));
}
 /* line 319: */
if (PSABCTR)
{ 
 /* line 320: */
 /* line 321: */
UZPACTR_getcfragment( OSABCTR_temp, &RSABCTR );
JIAACTR_bracket( A_VC_PLUS(A_HVEC(QSABCTR,'*',A68_CHAR ),RSABCTR), &SSABCTR );
HSABCTR = SSABCTR;
} 
else
{ 
 /* line 322: */
UZPACTR_getcfragment( OSABCTR_temp, &TSABCTR );
HSABCTR = TSABCTR;
} 
} 
USABCTR_rowname = HSABCTR;
 /* line 323: */
A_CLOSURE( WSABCTR_generator, XSABCTR_generator, YSABCTR_generator );
(( YSABCTR_generator * ) ( WSABCTR_generator.nonlocals )) -> USABCTR_rowname = USABCTR_rowname;
A_CALLPROC(WSABCTR_generator,(A68_TRUE, &BTABCTR),(A68_TRUE, &BTABCTR,(WSABCTR_generator).nonlocals));
(void)(A_VASSIGN2(USABCTR_rowname,BTABCTR,A68_CHAR )) ;
(*CSABCTR_row) = BTABCTR;
 /* line 325: */
CTABCTR_originalhasrefs = RSMACTR_hasrefs((*ASABCTR_modeofrow));
 /* line 327: */
 /* line 328: */
 /* line 329: */
 /* line 335: */
if (ARMACTR_isarray((*ASABCTR_modeofrow))&(QVMACTR_dimensions((*ASABCTR_modeofrow))>1))
{ 
DTABCTR = (&(BSABCTR_control->Needstemp)) ;
(*DTABCTR) = A68_FALSE;
 /* line 336: */
 /* line 337: */
 /* line 338: */
{ 
UZPACTR_getcfragment( (&(BSABCTR_control->Ident)), &ETABCTR );
FTABCTR_controlname = ETABCTR;
 /* line 339: */
A_CLOSURE( HTABCTR_generator, ITABCTR_generator, JTABCTR_generator );
(( JTABCTR_generator * ) ( HTABCTR_generator.nonlocals )) -> FTABCTR_controlname = FTABCTR_controlname;
 /* line 340: */
 /* line 342: */
A_CALLPROC(HTABCTR_generator,(A68_TRUE, &NTABCTR),(A68_TRUE, &NTABCTR,(HTABCTR_generator).nonlocals));
(void)(A_VASSIGN2(FTABCTR_controlname,NTABCTR,A68_CHAR )) ;
MTABCTR = NTABCTR;
} 
 /* line 343: */
OTABCTR = (&(BSABCTR_control->Control)) ;
(*OTABCTR) = MTABCTR;
} 
else
{ 
 /* line 353: */
if (CTABCTR_originalhasrefs)
{ 
PTABCTR_forallmode = (*(&((&(BSABCTR_control->Ident))->Mode)));
 /* line 355: */
 /* line 356: */
QTABCTR = FRMACTR_isfirmarray(FSABCTR_elemmode);
if ( QTABCTR )
{QTABCTR = (FSABCTR_elemmode<VFAACTR_refmark);
}
 /* line 357: */
if ( QTABCTR )
{ /* line 359: */
RTABCTR = KRMACTR_isflexarray(PTABCTR_forallmode);
if ( RTABCTR )
{RTABCTR = MOMACTR_hasoneref(PTABCTR_forallmode);
}
 /* line 360: */
QTABCTR = (!RTABCTR);
}
 /* line 361: */
if (QTABCTR)
{ 
STABCTR_controlmode = ((FSABCTR_elemmode+VFAACTR_refmark)+VFAACTR_refmark);
 /* line 362: */
TTABCTR = (&(BSABCTR_control->Needstemp)) ;
(*TTABCTR) = A68_TRUE;
 /* line 363: */
 /* line 364: */
 /* line 366: */
{ 
QMOACTR_declarectemporary( STABCTR_controlmode, VTABCTR, &WTABCTR );
YTABCTR = WTABCTR.Name ;
ZTABCTR_controlname = A_HISVEC(XTABCTR,YTABCTR,7,A68_CHAR );
 /* line 367: */
A_CLOSURE( BUABCTR_generator, CUABCTR_generator, DUABCTR_generator );
(( DUABCTR_generator * ) ( BUABCTR_generator.nonlocals )) -> ZTABCTR_controlname = ZTABCTR_controlname;
 /* line 368: */
 /* line 369: */
A_CALLPROC(BUABCTR_generator,(A68_TRUE, &HUABCTR),(A68_TRUE, &HUABCTR,(BUABCTR_generator).nonlocals));
(void)(A_VASSIGN2(ZTABCTR_controlname,HUABCTR,A68_CHAR )) ;
GUABCTR = HUABCTR;
} 
 /* line 370: */
IUABCTR = (&(BSABCTR_control->Control)) ;
(*IUABCTR) = GUABCTR;
} 
else
{ 
JUABCTR = (&(BSABCTR_control->Needstemp)) ;
(*JUABCTR) = A68_FALSE;
 /* line 371: */
 /* line 372: */
 /* line 373: */
{ 
UZPACTR_getcfragment( (&(BSABCTR_control->Ident)), &KUABCTR );
LUABCTR_controlname = KUABCTR;
 /* line 374: */
A_CLOSURE( NUABCTR_generator, OUABCTR_generator, PUABCTR_generator );
(( PUABCTR_generator * ) ( NUABCTR_generator.nonlocals )) -> LUABCTR_controlname = LUABCTR_controlname;
 /* line 375: */
 /* line 376: */
A_CALLPROC(NUABCTR_generator,(A68_TRUE, &TUABCTR),(A68_TRUE, &TUABCTR,(NUABCTR_generator).nonlocals));
(void)(A_VASSIGN2(LUABCTR_controlname,TUABCTR,A68_CHAR )) ;
SUABCTR = TUABCTR;
} 
 /* line 377: */
 /* line 383: */
UUABCTR = (&(BSABCTR_control->Control)) ;
(*UUABCTR) = SUABCTR;
} 
} 
else
{ 
 /* line 384: */
 /* line 385: */
VUABCTR = FRMACTR_isfirmarray(FSABCTR_elemmode);
if ( VUABCTR )
{ /* line 386: */
VUABCTR = (!RSMACTR_hasrefs(FSABCTR_elemmode));
}
if (VUABCTR)
{ 
 /* line 388: */
 /* line 390: */
WUABCTR = (VFAACTR_refmark+VFAACTR_refmark);
} 
else
{ 
WUABCTR = VFAACTR_refmark;
} 
XUABCTR_controlmode = (FSABCTR_elemmode+WUABCTR);
 /* line 392: */
YUABCTR = (&(BSABCTR_control->Needstemp)) ;
(*YUABCTR) = A68_TRUE;
 /* line 393: */
 /* line 394: */
 /* line 396: */
{ 
QMOACTR_declarectemporary( XUABCTR_controlmode, AVABCTR, &BVABCTR );
DVABCTR = BVABCTR.Name ;
EVABCTR_controlname = A_HISVEC(CVABCTR,DVABCTR,7,A68_CHAR );
 /* line 397: */
A_CLOSURE( GVABCTR_generator, HVABCTR_generator, IVABCTR_generator );
(( IVABCTR_generator * ) ( GVABCTR_generator.nonlocals )) -> EVABCTR_controlname = EVABCTR_controlname;
 /* line 398: */
 /* line 399: */
A_CALLPROC(GVABCTR_generator,(A68_TRUE, &MVABCTR),(A68_TRUE, &MVABCTR,(GVABCTR_generator).nonlocals));
(void)(A_VASSIGN2(EVABCTR_controlname,MVABCTR,A68_CHAR )) ;
LVABCTR = MVABCTR;
} 
 /* line 400: */
NVABCTR = (&(BSABCTR_control->Control)) ;
(*NVABCTR) = LVABCTR;
} 
} 
}
 /* line 404: */
 /* line 405: */
QMOACTR_declarectemporary( EFAACTR_intmode, PVABCTR, &QVABCTR );
SVABCTR = QVABCTR.Name ;
TVABCTR_loopcounter = A_HISVEC(RVABCTR,SVABCTR,7,A68_CHAR );
 /* line 407: */
 /* line 408: */
 /* line 409: */
 /* line 410: */
WVABCTR = 1 ;
if (XRMACTR_isistruct((*(&A_VINDEX(XRABCTR_modeofrows,WVABCTR)))))
{ 
 /* line 411: */
YVABCTR = 1 ;
ROAAOSF_whole( A_CALLPROC(WVMACTR_istructlength,((*(&A_VINDEX(XRABCTR_modeofrows,YVABCTR)))),((*(&A_VINDEX(XRABCTR_modeofrows,YVABCTR))),(WVMACTR_istructlength).nonlocals)), 0, &ZVABCTR );
XVABCTR = ZVABCTR;
} 
else
{ 
 /* line 412: */
AWABCTR = 1 ;
if (QQMACTR_isvector((*(&A_VINDEX(XRABCTR_modeofrows,AWABCTR)))))
{ 
 /* line 413: */
CWABCTR = 1 ;
XVABCTR = A_VC_PLUS((*(&A_VINDEX(PRABCTR_rows,CWABCTR))),DWABCTR);
} 
else
{ 
 /* line 414: */
HWABCTR = 1 ;
KWABCTR = 1 ;
XVABCTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS((*(&A_VINDEX(PRABCTR_rows,HWABCTR))),IWABCTR),JWABCTR),(*(&A_VINDEX(PRABCTR_rows,KWABCTR)))),LWABCTR);
} 
} 
OWABCTR = A_VC_PLUS(A_VC_PLUS(TVABCTR_loopcounter,MWABCTR),XVABCTR) ;
UVABCTR.data[0] = A_UNITE(NWABCTR,mode2,2,OWABCTR);
QWABCTR = ';' ;
UVABCTR.data[1] = A_UNITE(PWABCTR,mode1,1,QWABCTR);
UVABCTR.data[2] = A_UNITE(RWABCTR,mode4,4,EIAACTR_cnewline);
 /* line 416: */
(void)(MDMACTR_writecstream(A_HISVEC(SWABCTR,UVABCTR,3,A68_93 ), ZRABCTR_codestream));
 /* line 421: */
 /* line 422: */
UWABCTR = PRABCTR_rows.upb;
for ( TWABCTR_i = 2;
TWABCTR_i <= UWABCTR;
TWABCTR_i += 1 )
{ 
 /* line 423: */
VWABCTR_row = (*(&A_VINDEX(PRABCTR_rows,TWABCTR_i)));
 /* line 424: */
 /* line 425: */
 /* line 426: */
 /* line 427: */
if (XRMACTR_isistruct((*(&A_VINDEX(XRABCTR_modeofrows,TWABCTR_i)))))
{ 
 /* line 428: */
ROAAOSF_whole( A_CALLPROC(WVMACTR_istructlength,((*(&A_VINDEX(XRABCTR_modeofrows,TWABCTR_i)))),((*(&A_VINDEX(XRABCTR_modeofrows,TWABCTR_i))),(WVMACTR_istructlength).nonlocals)), 0, &AXABCTR );
ZWABCTR = AXABCTR;
} 
else
{ 
 /* line 429: */
if (QQMACTR_isvector((*(&A_VINDEX(XRABCTR_modeofrows,TWABCTR_i)))))
{ 
 /* line 430: */
ZWABCTR = A_VC_PLUS(VWABCTR_row,CXABCTR);
} 
else
{ 
 /* line 431: */
ZWABCTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(VWABCTR_row,GXABCTR),HXABCTR),VWABCTR_row),IXABCTR);
} 
} 
MXABCTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(JXABCTR,TVABCTR_loopcounter),KXABCTR),ZWABCTR) ;
WWABCTR.data[0] = A_UNITE(LXABCTR,mode2,2,MXABCTR);
QXABCTR = OXABCTR ;
WWABCTR.data[1] = A_UNITE(PXABCTR,mode2,2,QXABCTR);
WWABCTR.data[2] = A_UNITE(RXABCTR,mode4,4,EIAACTR_cnewline);
 /* line 433: */
(void)(MDMACTR_writecstream(A_HISVEC(SXABCTR,WWABCTR,3,A68_93 ), ZRABCTR_codestream));
 /* line 434: */
 /* line 435: */
 /* line 436: */
ROAAOSF_whole( TWABCTR_i, 0, &XXABCTR );
AYABCTR = A_VC_PLUS(A_VC_PLUS(WXABCTR,XXABCTR),YXABCTR) ;
TXABCTR.data[0] = A_UNITE(ZXABCTR,mode2,2,AYABCTR);
TXABCTR.data[1] = A_UNITE(BYABCTR,mode4,4,EIAACTR_cnewline);
 /* line 437: */
 /* line 438: */
(void)(MDMACTR_writecstream(A_HISVEC(CYABCTR,TXABCTR,2,A68_93 ), ZRABCTR_codestream));
}
 /* line 441: */
A_CLOSURE( EYABCTR_initialise, FYABCTR_initialise, GYABCTR_initialise );
(( GYABCTR_initialise * ) ( EYABCTR_initialise.nonlocals )) -> Controls = Controls;
(( GYABCTR_initialise * ) ( EYABCTR_initialise.nonlocals )) -> XRABCTR_modeofrows = XRABCTR_modeofrows;
(( GYABCTR_initialise * ) ( EYABCTR_initialise.nonlocals )) -> PRABCTR_rows = PRABCTR_rows;
 /* line 451: */
A_CLOSURE( AZABCTR_increment, BZABCTR_increment, CZABCTR_increment );
(( CZABCTR_increment * ) ( AZABCTR_increment.nonlocals )) -> XRABCTR_modeofrows = XRABCTR_modeofrows;
(( CZABCTR_increment * ) ( AZABCTR_increment.nonlocals )) -> Controls = Controls;
(( CZABCTR_increment * ) ( AZABCTR_increment.nonlocals )) -> PRABCTR_rows = PRABCTR_rows;
 /* line 464: */
 /* line 465: */
VZABCTR = Controls.upb;
for ( UZABCTR_i = 1;
UZABCTR_i <= VZABCTR;
UZABCTR_i += 1 )
{ 
 /* line 466: */
A_CALLPROC(EYABCTR_initialise,(UZABCTR_i, &XZABCTR),(UZABCTR_i, &XZABCTR,(EYABCTR_initialise).nonlocals));
WZABCTR.data[0] = A_UNITE(YZABCTR,mode2,2,XZABCTR);
AABBCTR = ';' ;
WZABCTR.data[1] = A_UNITE(ZZABCTR,mode1,1,AABBCTR);
WZABCTR.data[2] = A_UNITE(BABBCTR,mode4,4,EIAACTR_cnewline);
 /* line 467: */
(void)(MDMACTR_writecstream(A_HISVEC(CABBCTR,WZABCTR,3,A68_93 ), ZRABCTR_codestream));
}
 /* line 469: */
HABBCTR = FABBCTR ;
DABBCTR.data[0] = A_UNITE(GABBCTR,mode2,2,HABBCTR);
DABBCTR.data[1] = A_UNITE(IABBCTR,mode2,2,TVABCTR_loopcounter);
MABBCTR = KABBCTR ;
DABBCTR.data[2] = A_UNITE(LABBCTR,mode2,2,MABBCTR);
 /* line 470: */
DABBCTR.data[3] = A_UNITE(NABBCTR,mode4,4,EIAACTR_cnewline);
PABBCTR = '(' ;
DABBCTR.data[4] = A_UNITE(OABBCTR,mode1,1,PABBCTR);
A_CALLPROC(AZABCTR_increment,(1, &QABBCTR),(1, &QABBCTR,(AZABCTR_increment).nonlocals));
DABBCTR.data[5] = A_UNITE(RABBCTR,mode2,2,QABBCTR);
DABBCTR.data[6] = A_UNITE(SABBCTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(TABBCTR,DABBCTR,7,A68_93 ), ZRABCTR_codestream));
 /* line 472: */
 /* line 473: */
VABBCTR = Controls.upb;
for ( UABBCTR_i = 2;
UABBCTR_i <= VABBCTR;
UABBCTR_i += 1 )
{ 
 /* line 474: */
YABBCTR = ',' ;
WABBCTR.data[0] = A_UNITE(XABBCTR,mode1,1,YABBCTR);
A_CALLPROC(AZABCTR_increment,(UABBCTR_i, &ZABBCTR),(UABBCTR_i, &ZABBCTR,(AZABCTR_increment).nonlocals));
WABBCTR.data[1] = A_UNITE(ABBBCTR,mode2,2,ZABBCTR);
WABBCTR.data[2] = A_UNITE(BBBBCTR,mode4,4,EIAACTR_cnewline);
 /* line 475: */
(void)(MDMACTR_writecstream(A_HISVEC(CBBBCTR,WABBCTR,3,A68_93 ), ZRABCTR_codestream));
}
 /* line 477: */
HBBBCTR = FBBBCTR ;
DBBBCTR.data[0] = A_UNITE(GBBBCTR,mode2,2,HBBBCTR);
DBBBCTR.data[1] = A_UNITE(IBBBCTR,mode4,4,EIAACTR_cnewline);
KBBBCTR = '{' ;
DBBBCTR.data[2] = A_UNITE(JBBBCTR,mode1,1,KBBBCTR);
DBBBCTR.data[3] = A_UNITE(LBBBCTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(MBBBCTR,DBBBCTR,4,A68_93 ), ZRABCTR_codestream));
 /* line 481: */
 /* line 482: */
OBBBCTR = Controls.upb -1;
NBBBCTR_control = Controls.data;
for (;OBBBCTR-- >= 0;
(NBBBCTR_control++
) )
{
 /* line 483: */
 /* line 484: */
 /* line 485: */
if (*(&(NBBBCTR_control->Needstemp)))
{ 
UZPACTR_getcfragment( (&(NBBBCTR_control->Ident)), &QBBBCTR );
PBBBCTR.data[0] = A_UNITE(RBBBCTR,mode2,2,QBBBCTR);
 /* line 486: */
VBBBCTR = TBBBCTR ;
PBBBCTR.data[1] = A_UNITE(UBBBCTR,mode2,2,VBBBCTR);
XBBBCTR = (*(&(NBBBCTR_control->Control))) ;
PBBBCTR.data[2] = A_UNITE(WBBBCTR,mode2,2,XBBBCTR);
ZBBBCTR = ';' ;
PBBBCTR.data[3] = A_UNITE(YBBBCTR,mode1,1,ZBBBCTR);
PBBBCTR.data[4] = A_UNITE(ACBBCTR,mode4,4,EIAACTR_cnewline);
 /* line 487: */
 /* line 488: */
 /* line 489: */
(void)(MDMACTR_writecstream(A_HISVEC(BCBBCTR,PBBBCTR,5,A68_93 ), ZRABCTR_codestream));
} 
}
 /* line 490: */
} 
A_PROC_EXIT(forall);
return;
} 
#undef NL

A68_VOID  CCBBCTR_while(void)
{ 
A_PROC_ENTRY(while);
/*SKIP*/;
A_PROC_EXIT(while);
return;
} 
#undef NL

A68_VOID  ECBBCTR_whiledo(A68_64 * Enquiry)
{ 
A68_INT  FCBBCTR_codestream A_UNUSED = {0};
A68_VC  HCBBCTR;  /* clause result */
A68_VC  JCBBCTR;  /* avoid structure result */
A68_VC  KCBBCTR_booleanexpr A_UNUSED = {0};
A68_190  LCBBCTR;  /* collateral clause result */
A68_93  OCBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  PCBBCTR;  /* YIELD */
A68_93  QCBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  TCBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  UCBBCTR;  /* YIELD */
A68_93  VCBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  WCBBCTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(whiledo);
 /* line 495: */
 /* line 496: */
{ 
FCBBCTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 497: */
 /* line 498: */
 /* line 499: */
 /* line 501: */
if (EYPACTR_isskip(Enquiry))
{ 
 /* line 502: */
HCBBCTR = ICBBCTR;
} 
else
{ 
 /* line 503: */
BEQACTR_bracketcfragment( Enquiry, &JCBBCTR );
HCBBCTR = JCBBCTR;
} 
KCBBCTR_booleanexpr = HCBBCTR;
 /* line 504: */
 /* line 505: */
PCBBCTR = NCBBCTR ;
LCBBCTR.data[0] = A_UNITE(OCBBCTR,mode2,2,PCBBCTR);
LCBBCTR.data[1] = A_UNITE(QCBBCTR,mode2,2,KCBBCTR_booleanexpr);
UCBBCTR = SCBBCTR ;
LCBBCTR.data[2] = A_UNITE(TCBBCTR,mode2,2,UCBBCTR);
LCBBCTR.data[3] = A_UNITE(VCBBCTR,mode4,4,EIAACTR_cnewline);
 /* line 506: */
(void)(MDMACTR_writecstream(A_HISVEC(WCBBCTR,LCBBCTR,4,A68_93 ), FCBBCTR_codestream));
} 
A_PROC_EXIT(whiledo);
return;
} 
#undef NL

A68_VOID  XCBBCTR_whileod(void)
{ 
A68_INT  YCBBCTR_codestream A_UNUSED = {0};
A68_196  ZCBBCTR;  /* collateral clause result */
A68_93  ADBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  BDBBCTR;  /* YIELD */
A68_93  CDBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  DDBBCTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(whileod);
{ 
YCBBCTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 511: */
BDBBCTR = '}' ;
ZCBBCTR.data[0] = A_UNITE(ADBBCTR,mode1,1,BDBBCTR);
ZCBBCTR.data[1] = A_UNITE(CDBBCTR,mode4,4,EIAACTR_cnewline);
 /* line 512: */
(void)(MDMACTR_writecstream(A_HISVEC(DDBBCTR,ZCBBCTR,2,A68_93 ), YCBBCTR_codestream));
} 
A_PROC_EXIT(whileod);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 5: */
void UGABCTR(void)   /* initialise DECS loops */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel","-dir",".","loops.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/vak/Project/Algol/Algol-68RS-Source/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/vak/Project/Algol/Algol-68RS-Source/a68config/a68config.m","./values.m","./modes.m","./incmode.m","./environment.m","./environ.m","./coutput.m","./clauses.m","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel/usefulops.m","./centities.m",""};
static A_CONFIG_INFO A_config A_UNUSED;
/* --- end of configuration information */
A68_64  ZGABCTR;  /* collateral clause result */
A68_65  AHABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_LBITS  BHABCTR;  /* YIELD */
A68_75  FDBBCTR;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
OUPACTR();   /* USE values */
DNMACTR();   /* USE modes */
ZDAACTR();   /* USE incmode */
HPIACTR();   /* USE environment */
BPLACTR();   /* USE environ */
PTLACTR();   /* USE coutput */
KBZACTR();   /* USE clauses */
IKAAOSF();   /* USE usefulops */
THAACTR();   /* USE centities */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/loops.a68";
A_config.translation_time = "Thu Nov  5 21:11:00 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "TGABCTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 21:11:00 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS loops);
(void)(UEAALIB_a68config(LGAALIB_configinfo, YGABCTR));
 /* line 49: */
 /* line 59: */
 /* line 62: */
ZGABCTR.Mode = EFAACTR_intmode;
ZGABCTR.Info = PKJACTR_defaultinfo;
BHABCTR = (A68_LBITS )01U ;
ZGABCTR.Extra = A_UNITE(AHABCTR,mode1,1,BHABCTR);
QHABCTR_value1 = EHABCTR_assignment(A_LOC(A68_64 ), ZGABCTR);
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
FDBBCTR.fn.fn_global = XCBBCTR_whileod;
FDBBCTR.nonlocals = A68_NIL;
EDBBCTR_od = (FDBBCTR);
 /* line 516: */
 /* line 518: */
 /* line 521: */
/*SKIP*/;
A_PROC_EXIT(DECS loops);
} 
#undef NL
/* end of translation of loops.a68 */
