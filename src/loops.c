/* UNAME:PHABCTR */
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
extern void HCZACTR(void);   /* clauses */
extern void IKAAOSF(void);   /* usefulops */
extern void THAACTR(void);   /* centities */
/* --- end of DECS initialisation functions --- */
static A68_174   THABCTR = {"$Id: loops.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,UHABCTR,THABCTR,55)
static A68_64 * MIABCTR_value1 A_UNUSED;
static A68_182   YIABCTR = {"to part of loop"}; 
A_GISVEC(A68_VC ,AJABCTR,YIABCTR,15)
static A68_182   BJABCTR = {"by part of loop"}; 
A_GISVEC(A68_VC ,CJABCTR,BJABCTR,15)
static A68_183   KJABCTR = {" = "}; 
A_GISVEC(A68_VC ,LJABCTR,KJABCTR,3)
static A68_186   OKABCTR = {"loop control"}; 
A_GISVEC(A68_VC ,PKABCTR,OKABCTR,12)
static A68_187   VKABCTR = {"for ( "}; 
A_GISVEC(A68_VC ,WKABCTR,VKABCTR,6)
static A68_183   ALABCTR = {" = "}; 
A_GISVEC(A68_VC ,BLABCTR,ALABCTR,3)
static A68_45   MLABCTR = {" <= "}; 
A_GISVEC(A68_VC ,NLABCTR,MLABCTR,4)
static A68_45   XLABCTR = {" >= "}; 
A_GISVEC(A68_VC ,YLABCTR,XLABCTR,4)
static A68_189   FMABCTR = {"; "}; 
A_GISVEC(A68_VC ,GMABCTR,FMABCTR,2)
static A68_45   OMABCTR = {" += "}; 
A_GISVEC(A68_VC ,PMABCTR,OMABCTR,4)
static A68_189   UMABCTR = {" )"}; 
A_GISVEC(A68_VC ,VMABCTR,UMABCTR,2)
static A68_189   DNABCTR = {"( "}; 
A_GISVEC(A68_VC ,ENABCTR,DNABCTR,2)
static A68_191   INABCTR = {" > 0 && "}; 
A_GISVEC(A68_VC ,JNABCTR,INABCTR,8)
static A68_45   NNABCTR = {" <= "}; 
A_GISVEC(A68_VC ,ONABCTR,NNABCTR,4)
static A68_45   SNABCTR = {") ||"}; 
A_GISVEC(A68_VC ,TNABCTR,SNABCTR,4)
static A68_189   ZNABCTR = {"( "}; 
A_GISVEC(A68_VC ,AOABCTR,ZNABCTR,2)
static A68_191   EOABCTR = {" < 0 && "}; 
A_GISVEC(A68_VC ,FOABCTR,EOABCTR,8)
static A68_45   JOABCTR = {" >= "}; 
A_GISVEC(A68_VC ,KOABCTR,JOABCTR,4)
static A68_45   OOABCTR = {") ||"}; 
A_GISVEC(A68_VC ,POABCTR,OOABCTR,4)
static A68_189   VOABCTR = {"( "}; 
A_GISVEC(A68_VC ,WOABCTR,VOABCTR,2)
static A68_193   APABCTR = {" == 0 ) ;"}; 
A_GISVEC(A68_VC ,BPABCTR,APABCTR,9)
static A68_45   IPABCTR = {" += "}; 
A_GISVEC(A68_VC ,JPABCTR,IPABCTR,4)
static A68_189   NPABCTR = {" )"}; 
A_GISVEC(A68_VC ,OPABCTR,NPABCTR,2)
static A68_187   YPABCTR = {"for ( "}; 
A_GISVEC(A68_VC ,ZPABCTR,YPABCTR,6)
static A68_183   DQABCTR = {" = "}; 
A_GISVEC(A68_VC ,EQABCTR,DQABCTR,3)
static A68_189   IQABCTR = {";;"}; 
A_GISVEC(A68_VC ,JQABCTR,IQABCTR,2)
static A68_45   QQABCTR = {" += "}; 
A_GISVEC(A68_VC ,RQABCTR,QQABCTR,4)
static A68_183   WQABCTR = {" ) "}; 
A_GISVEC(A68_VC ,XQABCTR,WQABCTR,3)
static A68_195   PRABCTR = {"for ( ;; )"}; 
A_GISVEC(A68_VC ,QRABCTR,PRABCTR,10)
static A68_189   WRABCTR = {"{ "}; 
A_GISVEC(A68_VC ,XRABCTR,WRABCTR,2)
static A68_186   ITABCTR = {"forall yield"}; 
A_GISVEC(A68_VC ,JTABCTR,ITABCTR,12)
static A68_202   QUABCTR = {"forall control - ref [][]x"}; 
A_GISVEC(A68_VC ,RUABCTR,QUABCTR,26)
static A68_203   VVABCTR = {"forall control - []x"}; 
A_GISVEC(A68_VC ,WVABCTR,VVABCTR,20)
static A68_204   KWABCTR = {"forall loop counter"}; 
A_GISVEC(A68_VC ,LWABCTR,KWABCTR,19)
static A68_183   RWABCTR = {" = "}; 
static A68_33   XWABCTR = {".upb -1"}; 
A_GISVEC(A68_VC ,ZWABCTR,XWABCTR,7)
static A68_205   AXABCTR = {".dim[0].upb"}; 
static A68_183   BXABCTR = {" - "}; 
static A68_205   CXABCTR = {".dim[0].lwb"}; 
A_GISVEC(A68_VC ,EXABCTR,AXABCTR,11)
A_GISVEC(A68_VC ,FXABCTR,BXABCTR,3)
A_GISVEC(A68_VC ,HXABCTR,CXABCTR,11)
A_GISVEC(A68_VC ,IXABCTR,RWABCTR,3)
static A68_206   TXABCTR = {"if ( "}; 
static A68_45   UXABCTR = {" != "}; 
static A68_33   XXABCTR = {".upb -1"}; 
A_GISVEC(A68_VC ,YXABCTR,XXABCTR,7)
static A68_205   ZXABCTR = {".dim[0].upb"}; 
static A68_183   AYABCTR = {" - "}; 
static A68_205   BYABCTR = {".dim[0].lwb"}; 
A_GISVEC(A68_VC ,CYABCTR,ZXABCTR,11)
A_GISVEC(A68_VC ,DYABCTR,AYABCTR,3)
A_GISVEC(A68_VC ,EYABCTR,BYABCTR,11)
A_GISVEC(A68_VC ,FYABCTR,TXABCTR,5)
A_GISVEC(A68_VC ,GYABCTR,UXABCTR,4)
static A68_189   JYABCTR = {" )"}; 
A_GISVEC(A68_VC ,KYABCTR,JYABCTR,2)
static A68_207   QYABCTR = {"{ A_ERROR( \"mismatched bounds in FORALL; row no "}; 
static A68_206   RYABCTR = {"\"); }"}; 
A_GISVEC(A68_VC ,SYABCTR,QYABCTR,48)
A_GISVEC(A68_VC ,UYABCTR,RYABCTR,5)
static A68_183   FZABCTR = {"A_R"}; 
static A68_206   GZABCTR = {"STRIP"}; 
A_GISVEC(A68_VC ,NZABCTR,FZABCTR,3)
A_GISVEC(A68_VC ,PZABCTR,GZABCTR,5)
static A68_183   RZABCTR = {" = "}; 
static A68_206   SZABCTR = {".data"}; 
A_GISVEC(A68_VC ,TZABCTR,RZABCTR,3)
A_GISVEC(A68_VC ,UZABCTR,SZABCTR,5)
static A68_193   DABBCTR = {".data += "}; 
static A68_209   EABBCTR = {".dim[0].stride"}; 
A_GISVEC(A68_VC ,GABBCTR,DABBCTR,9)
A_GISVEC(A68_VC ,HABBCTR,EABBCTR,14)
static A68_189   JABBCTR = {"++"}; 
A_GISVEC(A68_VC ,LABBCTR,JABBCTR,2)
static A68_45   MABBCTR = {" += "}; 
static A68_209   NABBCTR = {".dim[0].stride"}; 
A_GISVEC(A68_VC ,OABBCTR,MABBCTR,4)
A_GISVEC(A68_VC ,PABBCTR,NABBCTR,14)
static A68_187   ABBBCTR = {"for (;"}; 
A_GISVEC(A68_VC ,BBBBCTR,ABBBCTR,6)
static A68_191   FBBBCTR = {"-- >= 0;"}; 
A_GISVEC(A68_VC ,GBBBCTR,FBBBCTR,8)
static A68_183   ACBBCTR = {") )"}; 
A_GISVEC(A68_VC ,BCBBCTR,ACBBCTR,3)
static A68_45   OCBBCTR = {" = *"}; 
A_GISVEC(A68_VC ,PCBBCTR,OCBBCTR,4)
static A68_195   CDBBCTR = {"A_ENQ_SKIP"}; 
A_GISVEC(A68_VC ,EDBBCTR,CDBBCTR,10)
static A68_187   IDBBCTR = {"if ( !"}; 
A_GISVEC(A68_VC ,JDBBCTR,IDBBCTR,6)
static A68_193   NDBBCTR = {" ) break;"}; 
A_GISVEC(A68_VC ,ODBBCTR,NDBBCTR,9)
A68_75  AEBBCTR_od A_UNUSED;
typedef struct   /* env of non-global proc */
{
A68_INT  RIABCTR_codestream;
A_PAD_INT(PAD_64)
} WIABCTR_evaluatetoorbypart;
typedef struct   /* env of non-global proc */
{
A68_175 * Loop;
A68_71 ** Frobytlist;
} XJABCTR_evaluatefrompart;
typedef struct   /* env of non-global proc */
{
A68_175 * Loop;
A68_71 ** Frobytlist;
A68_181  UIABCTR_evaluatetoorbypart;
} EKABCTR_setstep;
typedef struct   /* env of non-global proc */
{
A68_INT  RIABCTR_codestream;
A_PAD_INT(PAD_65)
} GRABCTR_voidresult;
typedef struct   /* env of non-global proc */
{
A68_197  Controls;
} ISABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_197  Controls;
} QSABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  QTABCTR_rowname;
} UTABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  BUABCTR_controlname;
} FUABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  VUABCTR_controlname;
} ZUABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  HVABCTR_controlname;
} LVABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  AWABCTR_controlname;
} EWABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_197  Controls;
A68_123  TSABCTR_modeofrows;
A68_199  LSABCTR_rows;
} CZABCTR_initialise;
typedef struct   /* env of non-global proc */
{
A68_123  TSABCTR_modeofrows;
A68_197  Controls;
A68_199  LSABCTR_rows;
} YZABCTR_increment;

A_STATIC A68_64 * AIABCTR_assignment(A68_64 * YHABCTR_anonymous, A68_64  ZHABCTR_anonymous);

A_STATIC A68_65 * FIABCTR_assignment(A68_65 * DIABCTR_anonymous, A68_65  EIABCTR_anonymous);

A68_VOID  QIABCTR_for(A68_175 * Loop, A68_INT  Frobytcount, A68_71 ** Frobytlist);

A_STATIC A68_VOID  VIABCTR_evaluatetoorbypart(A68_64 * Part, A68_BOOL  Topart, void *NonLocals);

A_STATIC A68_VOID  WJABCTR_evaluatefrompart(A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DKABCTR_setstep(void *NonLocals);

A_STATIC A68_VOID  FRABCTR_voidresult(A68_64 * Value, void *NonLocals);

A68_VOID  ESABCTR_forall(A68_197  Controls, A68_71 ** Foralllist);

A_STATIC A68_VOID  HSABCTR_generator(A68_BOOL  FSABCTR_anonymous, A68_199  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PSABCTR_generator(A68_BOOL  NSABCTR_anonymous, A68_123  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  TTABCTR_generator(A68_BOOL  RTABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  EUABCTR_generator(A68_BOOL  CUABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  YUABCTR_generator(A68_BOOL  WUABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KVABCTR_generator(A68_BOOL  IVABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DWABCTR_generator(A68_BOOL  BWABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BZABCTR_initialise(A68_INT  I, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XZABCTR_increment(A68_INT  I, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  YCBBCTR_while(void);

A68_VOID  ADBBCTR_whiledo(A68_64 * Enquiry);

A68_VOID  TDBBCTR_whileod(void);

A_STATIC A68_65 * FIABCTR_assignment(A68_65 * DIABCTR_anonymous, A68_65  EIABCTR_anonymous)
{ 
A68_65  GIABCTR;  /* united object - for case conformity */
A68_VC  HIABCTR_anonymous A_UNUSED = {0};
A68_VC  IIABCTR;  /* OPERATORS - copy to flex */
A68_179 * JIABCTR;  /* YIELD */
A68_65 * KIABCTR;  /* clause result */
{ 
(*DIABCTR_anonymous) = EIABCTR_anonymous;
GIABCTR = EIABCTR_anonymous ;
switch ( GIABCTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
HIABCTR_anonymous = (GIABCTR.data.mode6);
JIABCTR = &(DIABCTR_anonymous-> data.mode6) ;
(void)((*JIABCTR) = A_VCOPY(HIABCTR_anonymous,IIABCTR,A68_CHAR ));
break;
default: 
/*SKIP*/;
break;
} 
KIABCTR = DIABCTR_anonymous;
} 
return( KIABCTR );
} 
#undef NL

A_STATIC A68_VOID  VIABCTR_evaluatetoorbypart(A68_64 * Part, A68_BOOL  Topart, void *NonLocals)
#define NL(x) (((WIABCTR_evaluatetoorbypart *)NonLocals)->x)
{ 
A68_BOOL  XIABCTR;  /* optbool result */
A68_VC  ZIABCTR;  /* clause result */
A68_68  DJABCTR;  /* avoid structure result */
A68_68  EJABCTR_temp A_UNUSED = {0};
A68_184  FJABCTR;  /* collateral clause result */
A68_VC  GJABCTR;  /* OPERATORS - istruct -> vector */
A68_33  HJABCTR;  /* OPERATORS - istruct -> vector */
A68_93  IJABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  JJABCTR;  /* YIELD */
A68_93  MJABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  NJABCTR;  /* YIELD */
A68_VC  OJABCTR;  /* avoid structure result */
A68_93  PJABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  QJABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  RJABCTR;  /* YIELD */
A68_93  SJABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  TJABCTR;  /* OPERATORS - istruct -> vector */
A68_65  UJABCTR = {0};  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(evaluatetoorbypart);
 /* line 91: */
 /* line 92: */
{ 
(void)(A_CALLPROC(BYQACTR_evaluate,(Part),(Part,(BYQACTR_evaluate).nonlocals)));
 /* line 93: */
XIABCTR = (!ZWPACTR_isconstant(Part));
if ( XIABCTR )
{XIABCTR = (!WXPACTR_istemp(Part));
}
 /* line 94: */
 /* line 96: */
if ((!Topart)|XIABCTR)
{ 
 /* line 97: */
 /* line 98: */
 /* line 99: */
if (Topart)
{ 
ZIABCTR = AJABCTR;
} 
else
{ 
ZIABCTR = CJABCTR;
} 
QMOACTR_declarectemporary( (*(&(Part->Mode))), ZIABCTR, &DJABCTR );
EJABCTR_temp = DJABCTR;
 /* line 100: */
 /* line 101: */
HJABCTR = EJABCTR_temp.Name ;
JJABCTR = A_HISVEC(GJABCTR,HJABCTR,7,A68_CHAR ) ;
FJABCTR.data[0] = A_UNITE(IJABCTR,mode2,2,JJABCTR);
 /* line 102: */
NJABCTR = LJABCTR ;
FJABCTR.data[1] = A_UNITE(MJABCTR,mode2,2,NJABCTR);
UZPACTR_getcfragment( Part, &OJABCTR );
FJABCTR.data[2] = A_UNITE(PJABCTR,mode2,2,OJABCTR);
RJABCTR = ';' ;
FJABCTR.data[3] = A_UNITE(QJABCTR,mode1,1,RJABCTR);
FJABCTR.data[4] = A_UNITE(SJABCTR,mode4,4,EIAACTR_cnewline);
 /* line 103: */
(void)(MDMACTR_writecstream(A_HISVEC(TJABCTR,FJABCTR,5,A68_93 ), NL(RIABCTR_codestream)));
 /* line 104: */
 /* line 105: */
 /* line 106: */
(void)(FIABCTR_assignment((&(Part->Extra)), A_UNITE(UJABCTR,mode5,5,EJABCTR_temp)));
} 
} 
A_PROC_EXIT(evaluatetoorbypart);
return;
} 
#undef NL

A_STATIC A68_VOID  WJABCTR_evaluatefrompart(A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((XJABCTR_evaluatefrompart *)NonLocals)->x)
{ 
A68_64 * YJABCTR_value A_UNUSED = {0};
A68_VC  ZJABCTR;  /* clause result */
A68_VC  AKABCTR;  /* avoid structure result */
A68_VC  BKABCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(evaluatefrompart);
{ 
 /* line 115: */
 /* line 116: */
if (*(&(NL(Loop)->Frompart)))
{ 
YJABCTR_value = (&((*NL(Frobytlist))->Value));
 /* line 117: */
(void)((*NL(Frobytlist)) = (*(&((*NL(Frobytlist))->Rest))));
 /* line 118: */
(void)(A_CALLPROC(BYQACTR_evaluate,(YJABCTR_value),(YJABCTR_value,(BYQACTR_evaluate).nonlocals)));
 /* line 119: */
 /* line 120: */
 /* line 122: */
UZPACTR_getcfragment( YJABCTR_value, &AKABCTR );
ZJABCTR = AKABCTR;
} 
else
{ 
 /* line 123: */
ZJABCTR = A_HVEC(BKABCTR,'1',A68_CHAR );
} 
} 
A_PROC_EXIT(evaluatefrompart);
*ReturnedValue = (ZJABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  DKABCTR_setstep(void *NonLocals)
#define NL(x) (((EKABCTR_setstep *)NonLocals)->x)
{ 
A68_64 ** FKABCTR;  /* YIELD */
A68_64 ** GKABCTR;  /* YIELD */
A_PROC_ENTRY(setstep);
{ 
 /* line 135: */
 /* line 136: */
if (*(&(NL(Loop)->Bypart)))
{ 
FKABCTR = (&(NL(Loop)->Step)) ;
(void)((*FKABCTR) = (&((*NL(Frobytlist))->Value)));
 /* line 137: */
(void)((*NL(Frobytlist)) = (*(&((*NL(Frobytlist))->Rest))));
 /* line 138: */
 /* line 139: */
 /* line 140: */
(void)(A_CALLPROC(NL(UIABCTR_evaluatetoorbypart),((*(&(NL(Loop)->Step))), A68_FALSE),((*(&(NL(Loop)->Step))), A68_FALSE,(NL(UIABCTR_evaluatetoorbypart)).nonlocals)));
} 
else
{ 
 /* line 141: */
 /* line 142: */
GKABCTR = (&(NL(Loop)->Step)) ;
(*GKABCTR) = MIABCTR_value1;
} 
} 
A_PROC_EXIT(setstep);
return;
} 
#undef NL

A_STATIC A68_VOID  FRABCTR_voidresult(A68_64 * Value, void *NonLocals)
#define NL(x) (((GRABCTR_voidresult *)NonLocals)->x)
{ 
A68_194  HRABCTR;  /* collateral clause result */
A68_VC  IRABCTR;  /* avoid structure result */
A68_93  JRABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  KRABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  LRABCTR;  /* YIELD */
A68_93  MRABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  NRABCTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(voidresult);
 /* line 244: */
 /* line 245: */
{ 
(void)(A_CALLPROC(BYQACTR_evaluate,(Value),(Value,(BYQACTR_evaluate).nonlocals)));
 /* line 246: */
 /* line 247: */
UZPACTR_getcfragment( Value, &IRABCTR );
HRABCTR.data[0] = A_UNITE(JRABCTR,mode2,2,IRABCTR);
LRABCTR = ';' ;
HRABCTR.data[1] = A_UNITE(KRABCTR,mode1,1,LRABCTR);
HRABCTR.data[2] = A_UNITE(MRABCTR,mode4,4,EIAACTR_cnewline);
 /* line 248: */
 /* line 249: */
(void)(MDMACTR_writecstream(A_HISVEC(NRABCTR,HRABCTR,3,A68_93 ), NL(RIABCTR_codestream)));
} 
A_PROC_EXIT(voidresult);
return;
} 
#undef NL

A_STATIC A68_VOID  HSABCTR_generator(A68_BOOL  FSABCTR_anonymous, A68_199  *ReturnedValue, void *NonLocals)
#define NL(x) (((ISABCTR_generator *)NonLocals)->x)
{ 
A68_199  JSABCTR;  /* clause result */
A68_199  KSABCTR;  /* OPERATORS - dynamic generator */
{ 
KSABCTR.upb = NL(Controls).upb ;
( FSABCTR_anonymous? A_VLOC(A68_VC ,KSABCTR): A_VHEAP(A68_VC ,KSABCTR) );
JSABCTR = KSABCTR;
} 
*ReturnedValue = (JSABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  PSABCTR_generator(A68_BOOL  NSABCTR_anonymous, A68_123  *ReturnedValue, void *NonLocals)
#define NL(x) (((QSABCTR_generator *)NonLocals)->x)
{ 
A68_123  RSABCTR;  /* clause result */
A68_123  SSABCTR;  /* OPERATORS - dynamic generator */
{ 
SSABCTR.upb = NL(Controls).upb ;
( NSABCTR_anonymous? A_VLOC(A68_INT ,SSABCTR): A_VHEAP(A68_INT ,SSABCTR) );
RSABCTR = SSABCTR;
} 
*ReturnedValue = (RSABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  TTABCTR_generator(A68_BOOL  RTABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((UTABCTR_generator *)NonLocals)->x)
{ 
A68_VC  VTABCTR;  /* clause result */
A68_VC  WTABCTR;  /* OPERATORS - dynamic generator */
{ 
WTABCTR.upb = NL(QTABCTR_rowname).upb ;
( RTABCTR_anonymous? A_VLOC(A68_CHAR ,WTABCTR): A_VHEAP(A68_CHAR ,WTABCTR) );
VTABCTR = WTABCTR;
} 
*ReturnedValue = (VTABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  EUABCTR_generator(A68_BOOL  CUABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((FUABCTR_generator *)NonLocals)->x)
{ 
A68_VC  GUABCTR;  /* clause result */
A68_VC  HUABCTR;  /* OPERATORS - dynamic generator */
{ 
HUABCTR.upb = NL(BUABCTR_controlname).upb ;
( CUABCTR_anonymous? A_VLOC(A68_CHAR ,HUABCTR): A_VHEAP(A68_CHAR ,HUABCTR) );
GUABCTR = HUABCTR;
} 
*ReturnedValue = (GUABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  YUABCTR_generator(A68_BOOL  WUABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZUABCTR_generator *)NonLocals)->x)
{ 
A68_VC  AVABCTR;  /* clause result */
A68_VC  BVABCTR;  /* OPERATORS - dynamic generator */
{ 
BVABCTR.upb = NL(VUABCTR_controlname).upb ;
( WUABCTR_anonymous? A_VLOC(A68_CHAR ,BVABCTR): A_VHEAP(A68_CHAR ,BVABCTR) );
AVABCTR = BVABCTR;
} 
*ReturnedValue = (AVABCTR);
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

A_STATIC A68_VOID  DWABCTR_generator(A68_BOOL  BWABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((EWABCTR_generator *)NonLocals)->x)
{ 
A68_VC  FWABCTR;  /* clause result */
A68_VC  GWABCTR;  /* OPERATORS - dynamic generator */
{ 
GWABCTR.upb = NL(AWABCTR_controlname).upb ;
( BWABCTR_anonymous? A_VLOC(A68_CHAR ,GWABCTR): A_VHEAP(A68_CHAR ,GWABCTR) );
FWABCTR = GWABCTR;
} 
*ReturnedValue = (FWABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  BZABCTR_initialise(A68_INT  I, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((CZABCTR_initialise *)NonLocals)->x)
{ 
A68_VC  DZABCTR_ctrl A_UNUSED = {0};
A68_BOOL  EZABCTR;  /* clause result */
A68_208  HZABCTR;  /* collateral clause result */
A68_162  IZABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  JZABCTR;  /* YIELD */
A68_162  KZABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  LZABCTR;  /* clause result */
A68_165  MZABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  OZABCTR;  /* avoid structure result */
A68_VC  QZABCTR;  /* avoid structure result */
A_PROC_ENTRY(initialise);
 /* line 442: */
{ 
DZABCTR_ctrl = (*(&((&A_VINDEX(NL(Controls),I))->Control)));
 /* line 443: */
 /* line 444: */
 /* line 445: */
EZABCTR = (ARMACTR_isarray((*(&A_VINDEX(NL(TSABCTR_modeofrows),I))))&(QVMACTR_dimensions((*(&A_VINDEX(NL(TSABCTR_modeofrows),I))))>1));
if (EZABCTR)
{ 
 /* line 446: */
JZABCTR = (*(&A_VINDEX(NL(LSABCTR_rows),I))) ;
HZABCTR.data[0] = A_UNITE(IZABCTR,mode2,2,JZABCTR);
 /* line 447: */
HZABCTR.data[1] = A_UNITE(KZABCTR,mode2,2,DZABCTR_ctrl);
 /* line 448: */
ROAAOSF_whole( QVMACTR_dimensions((*(&A_VINDEX(NL(TSABCTR_modeofrows),I)))), 0, &OZABCTR );
SOQACTR_usemacro( A_VC_PLUS(A_VC_PLUS(NZABCTR,OZABCTR),PZABCTR), A_HISVEC(MZABCTR,HZABCTR,2,A68_162 ), &QZABCTR );
LZABCTR = QZABCTR;
} 
else
{ 
 /* line 449: */
LZABCTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(DZABCTR_ctrl,TZABCTR),(*(&A_VINDEX(NL(LSABCTR_rows),I)))),UZABCTR);
} 
} 
A_PROC_EXIT(initialise);
*ReturnedValue = (LZABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  XZABCTR_increment(A68_INT  I, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((YZABCTR_increment *)NonLocals)->x)
{ 
A68_INT  ZZABCTR_origmde A_UNUSED = {0};
A68_VC  AABBCTR_ctrl A_UNUSED = {0};
A68_BOOL  BABBCTR;  /* optbool result */
A68_BOOL  CABBCTR;  /* clause result */
A68_VC  FABBCTR;  /* clause result */
A68_BOOL  IABBCTR;  /* optbool result */
A68_VC  KABBCTR;  /* clause result */
A_PROC_ENTRY(increment);
 /* line 452: */
{ 
ZZABCTR_origmde = (*(&A_VINDEX(NL(TSABCTR_modeofrows),I)));
 /* line 453: */
AABBCTR_ctrl = (*(&((&A_VINDEX(NL(Controls),I))->Control)));
 /* line 454: */
 /* line 455: */
BABBCTR = ARMACTR_isarray(ZZABCTR_origmde);
if ( BABBCTR )
{ /* line 456: */
BABBCTR = (QVMACTR_dimensions(ZZABCTR_origmde)>1);
}
CABBCTR = BABBCTR;
if (CABBCTR)
{ 
 /* line 457: */
FABBCTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(AABBCTR_ctrl,GABBCTR),(*(&A_VINDEX(NL(LSABCTR_rows),I)))),HABBCTR);
} 
else
{ 
IABBCTR = QQMACTR_isvector(ZZABCTR_origmde);
if ( ! IABBCTR )
{ /* line 458: */
IABBCTR = XRMACTR_isistruct(ZZABCTR_origmde);
}
 /* line 459: */
if (IABBCTR)
{ 
KABBCTR = LABBCTR;
} 
else
{ 
 /* line 460: */
 /* line 461: */
KABBCTR = A_VC_PLUS(A_VC_PLUS(OABBCTR,(*(&A_VINDEX(NL(LSABCTR_rows),I)))),PABBCTR);
} 
FABBCTR = A_VC_PLUS(AABBCTR_ctrl,KABBCTR);
} 
} 
A_PROC_EXIT(increment);
*ReturnedValue = (FABBCTR);
return;
} 
#undef NL

A_STATIC A68_64 * AIABCTR_assignment(A68_64 * YHABCTR_anonymous, A68_64  ZHABCTR_anonymous)
{ 
A68_INT * BIABCTR;  /* YIELD */
A68_BITS * CIABCTR;  /* YIELD */
A68_64 * LIABCTR;  /* clause result */
{ 
BIABCTR = (&(YHABCTR_anonymous->Mode)) ;
(*BIABCTR) = ZHABCTR_anonymous.Mode;
CIABCTR = (&(YHABCTR_anonymous->Info)) ;
(*CIABCTR) = ZHABCTR_anonymous.Info;
(void)(FIABCTR_assignment((&(YHABCTR_anonymous->Extra)), ZHABCTR_anonymous.Extra));
LIABCTR = YHABCTR_anonymous;
} 
return( LIABCTR );
} 
#undef NL
 /* line 71: */
 /* line 73: */

A68_VOID  QIABCTR_for(A68_175 * Loop, A68_INT  Frobytcount, A68_71 ** Frobytlist)
{ 
A68_INT  RIABCTR_codestream A_UNUSED = {0};
A68_181  UIABCTR_evaluatetoorbypart;   /* proc value of non-global proc */
A68_185  VJABCTR_evaluatefrompart;   /* proc value of non-global proc */
A68_75  CKABCTR_setstep;   /* proc value of non-global proc */
A68_64 * HKABCTR_value A_UNUSED = {0};
A68_VC  IKABCTR;  /* avoid structure result */
A68_VC  JKABCTR_end A_UNUSED = {0};
A68_VC  KKABCTR;  /* avoid structure result */
A68_VC  LKABCTR_from A_UNUSED = {0};
A68_VC  MKABCTR;  /* clause result */
A68_VC  NKABCTR;  /* avoid structure result */
A68_68  QKABCTR;  /* avoid structure result */
A68_VC  RKABCTR;  /* OPERATORS - istruct -> vector */
A68_33  SKABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  TKABCTR_loopcounter A_UNUSED = {0};
A68_188  UKABCTR;  /* collateral clause result */
A68_93  XKABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  YKABCTR;  /* YIELD */
A68_93  ZKABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  CLABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  DLABCTR;  /* YIELD */
A68_93  ELABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  FLABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  GLABCTR;  /* YIELD */
A68_93  HLABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  ILABCTR;  /* OPERATORS - istruct -> vector */
A68_LINT  JLABCTR_constantstep A_UNUSED = {0};
A68_190  KLABCTR;  /* collateral clause result */
A68_93  LLABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  OLABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  PLABCTR;  /* YIELD */
A68_93  QLABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  RLABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  SLABCTR;  /* YIELD */
A68_92  TLABCTR;  /* clause result */
A68_92  ULABCTR;  /* OPERATORS - istruct -> vector */
A68_190  VLABCTR;  /* collateral clause result */
A68_93  WLABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  ZLABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  AMABCTR;  /* YIELD */
A68_93  BMABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  CMABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  DMABCTR;  /* YIELD */
A68_92  EMABCTR;  /* OPERATORS - istruct -> vector */
A68_93  HMABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  IMABCTR;  /* YIELD */
A68_92  JMABCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_93  KMABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  LMABCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_184  MMABCTR;  /* collateral clause result */
A68_93  NMABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  QMABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  RMABCTR;  /* YIELD */
A68_VC  SMABCTR;  /* avoid structure result */
A68_93  TMABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  WMABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  XMABCTR;  /* YIELD */
A68_93  YMABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  ZMABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  ANABCTR;  /* avoid structure result */
A68_VC  BNABCTR_step A_UNUSED = {0};
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
A68_192  YNABCTR;  /* collateral clause result */
A68_93  BOABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  COABCTR;  /* YIELD */
A68_93  DOABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  GOABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  HOABCTR;  /* YIELD */
A68_93  IOABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  LOABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  MOABCTR;  /* YIELD */
A68_93  NOABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  QOABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ROABCTR;  /* YIELD */
A68_93  SOABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  TOABCTR;  /* OPERATORS - istruct -> vector */
A68_190  UOABCTR;  /* collateral clause result */
A68_93  XOABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  YOABCTR;  /* YIELD */
A68_93  ZOABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  CPABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  DPABCTR;  /* YIELD */
A68_93  EPABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  FPABCTR;  /* OPERATORS - istruct -> vector */
A68_184  GPABCTR;  /* collateral clause result */
A68_93  HPABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  KPABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  LPABCTR;  /* YIELD */
A68_93  MPABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  PPABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  QPABCTR;  /* YIELD */
A68_93  RPABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  SPABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  TPABCTR;  /* avoid structure result */
A68_VC  UPABCTR_from A_UNUSED = {0};
A68_VC  VPABCTR;  /* avoid structure result */
A68_VC  WPABCTR_loopcounter A_UNUSED = {0};
A68_188  XPABCTR;  /* collateral clause result */
A68_93  AQABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  BQABCTR;  /* YIELD */
A68_93  CQABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  FQABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  GQABCTR;  /* YIELD */
A68_93  HQABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  KQABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  LQABCTR;  /* YIELD */
A68_93  MQABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  NQABCTR;  /* OPERATORS - istruct -> vector */
A68_184  OQABCTR;  /* collateral clause result */
A68_93  PQABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  SQABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  TQABCTR;  /* YIELD */
A68_VC  UQABCTR;  /* avoid structure result */
A68_93  VQABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  YQABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ZQABCTR;  /* YIELD */
A68_93  ARABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  BRABCTR;  /* OPERATORS - istruct -> vector */
A68_74  ERABCTR_voidresult;   /* proc value of non-global proc */
A68_196  ORABCTR;  /* collateral clause result */
A68_93  RRABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  SRABCTR;  /* YIELD */
A68_93  TRABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  URABCTR;  /* OPERATORS - istruct -> vector */
A68_196  VRABCTR;  /* collateral clause result */
A68_93  YRABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ZRABCTR;  /* YIELD */
A68_93  ASABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  BSABCTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(for);
 /* line 81: */
 /* line 82: */
{ 
RIABCTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 84: */
A_CLOSURE( UIABCTR_evaluatetoorbypart, VIABCTR_evaluatetoorbypart, WIABCTR_evaluatetoorbypart );
(( WIABCTR_evaluatetoorbypart * ) ( UIABCTR_evaluatetoorbypart.nonlocals )) -> RIABCTR_codestream = RIABCTR_codestream;
 /* line 108: */
 /* line 113: */
 /* line 114: */
A_CLOSURE( VJABCTR_evaluatefrompart, WJABCTR_evaluatefrompart, XJABCTR_evaluatefrompart );
(( XJABCTR_evaluatefrompart * ) ( VJABCTR_evaluatefrompart.nonlocals )) -> Loop = Loop;
(( XJABCTR_evaluatefrompart * ) ( VJABCTR_evaluatefrompart.nonlocals )) -> Frobytlist = Frobytlist;
 /* line 125: */
 /* line 133: */
 /* line 134: */
A_CLOSURE( CKABCTR_setstep, DKABCTR_setstep, EKABCTR_setstep );
(( EKABCTR_setstep * ) ( CKABCTR_setstep.nonlocals )) -> Loop = Loop;
(( EKABCTR_setstep * ) ( CKABCTR_setstep.nonlocals )) -> Frobytlist = Frobytlist;
(( EKABCTR_setstep * ) ( CKABCTR_setstep.nonlocals )) -> UIABCTR_evaluatetoorbypart = UIABCTR_evaluatetoorbypart;
 /* line 146: */
 /* line 147: */
 /* line 159: */
if (*(&(Loop->Topart)))
{ 
HKABCTR_value = (&((*Frobytlist)->Value));
 /* line 160: */
(void)((*Frobytlist) = (*(&((*Frobytlist)->Rest))));
 /* line 161: */
(void)(A_CALLPROC(UIABCTR_evaluatetoorbypart,(HKABCTR_value, A68_TRUE),(HKABCTR_value, A68_TRUE,(UIABCTR_evaluatetoorbypart).nonlocals)));
 /* line 162: */
UZPACTR_getcfragment( HKABCTR_value, &IKABCTR );
JKABCTR_end = IKABCTR;
 /* line 164: */
(void)(A_CALLPROC(CKABCTR_setstep,(),((CKABCTR_setstep).nonlocals)));
 /* line 166: */
A_CALLPROC(VJABCTR_evaluatefrompart,( &KKABCTR),( &KKABCTR,(VJABCTR_evaluatefrompart).nonlocals));
LKABCTR_from = KKABCTR;
 /* line 168: */
 /* line 169: */
 /* line 170: */
 /* line 172: */
if (*(&(Loop->Forpart)))
{ 
 /* line 174: */
UZPACTR_getcfragment( (*(&(Loop->Control))), &NKABCTR );
MKABCTR = NKABCTR;
} 
else
{ 
 /* line 175: */
 /* line 176: */
QMOACTR_declarectemporary( EFAACTR_intmode, PKABCTR, &QKABCTR );
SKABCTR = QKABCTR.Name ;
MKABCTR = A_HISVEC(RKABCTR,SKABCTR,7,A68_CHAR );
} 
TKABCTR_loopcounter = MKABCTR;
 /* line 178: */
 /* line 179: */
YKABCTR = WKABCTR ;
UKABCTR.data[0] = A_UNITE(XKABCTR,mode2,2,YKABCTR);
UKABCTR.data[1] = A_UNITE(ZKABCTR,mode2,2,TKABCTR_loopcounter);
DLABCTR = BLABCTR ;
UKABCTR.data[2] = A_UNITE(CLABCTR,mode2,2,DLABCTR);
UKABCTR.data[3] = A_UNITE(ELABCTR,mode2,2,LKABCTR_from);
GLABCTR = ';' ;
UKABCTR.data[4] = A_UNITE(FLABCTR,mode1,1,GLABCTR);
UKABCTR.data[5] = A_UNITE(HLABCTR,mode4,4,EIAACTR_cnewline);
 /* line 180: */
(void)(MDMACTR_writecstream(A_HISVEC(ILABCTR,UKABCTR,6,A68_93 ), RIABCTR_codestream));
 /* line 181: */
 /* line 182: */
 /* line 184: */
if (ZWPACTR_isconstant((*(&(Loop->Step)))))
{ 
JLABCTR_constantstep = (A68_LINT )NYPACTR_getconstant((*(&(Loop->Step))));
 /* line 185: */
 /* line 186: */
 /* line 187: */
if (JLABCTR_constantstep>0)
{ 
KLABCTR.data[0] = A_UNITE(LLABCTR,mode2,2,TKABCTR_loopcounter);
PLABCTR = NLABCTR ;
KLABCTR.data[1] = A_UNITE(OLABCTR,mode2,2,PLABCTR);
KLABCTR.data[2] = A_UNITE(QLABCTR,mode2,2,JKABCTR_end);
 /* line 188: */
SLABCTR = ';' ;
KLABCTR.data[3] = A_UNITE(RLABCTR,mode1,1,SLABCTR);
TLABCTR = A_HISVEC(ULABCTR,KLABCTR,4,A68_93 );
} 
else
{ 
 /* line 189: */
if (JLABCTR_constantstep<0)
{ 
VLABCTR.data[0] = A_UNITE(WLABCTR,mode2,2,TKABCTR_loopcounter);
AMABCTR = YLABCTR ;
VLABCTR.data[1] = A_UNITE(ZLABCTR,mode2,2,AMABCTR);
VLABCTR.data[2] = A_UNITE(BMABCTR,mode2,2,JKABCTR_end);
 /* line 190: */
 /* line 191: */
DMABCTR = ';' ;
VLABCTR.data[3] = A_UNITE(CMABCTR,mode1,1,DMABCTR);
TLABCTR = A_HISVEC(EMABCTR,VLABCTR,4,A68_93 );
} 
else
{ 
IMABCTR = GMABCTR ;
TLABCTR = A_HVEC(JMABCTR,A_UNITE(HMABCTR,mode2,2,IMABCTR),A68_93 );
} 
} 
 /* line 192: */
(void)(MDMACTR_writecstream(TLABCTR, RIABCTR_codestream));
 /* line 193: */
(void)(MDMACTR_writecstream(A_HVEC(LMABCTR,A_UNITE(KMABCTR,mode4,4,EIAACTR_cnewline),A68_93 ), RIABCTR_codestream));
 /* line 194: */
 /* line 195: */
MMABCTR.data[0] = A_UNITE(NMABCTR,mode2,2,TKABCTR_loopcounter);
RMABCTR = PMABCTR ;
MMABCTR.data[1] = A_UNITE(QMABCTR,mode2,2,RMABCTR);
UZPACTR_getcfragment( (*(&(Loop->Step))), &SMABCTR );
MMABCTR.data[2] = A_UNITE(TMABCTR,mode2,2,SMABCTR);
 /* line 196: */
XMABCTR = VMABCTR ;
MMABCTR.data[3] = A_UNITE(WMABCTR,mode2,2,XMABCTR);
MMABCTR.data[4] = A_UNITE(YMABCTR,mode4,4,EIAACTR_cnewline);
 /* line 197: */
 /* line 198: */
(void)(MDMACTR_writecstream(A_HISVEC(ZMABCTR,MMABCTR,5,A68_93 ), RIABCTR_codestream));
} 
else
{ 
UZPACTR_getcfragment( (*(&(Loop->Step))), &ANABCTR );
BNABCTR_step = ANABCTR;
 /* line 199: */
 /* line 200: */
GNABCTR = ENABCTR ;
CNABCTR.data[0] = A_UNITE(FNABCTR,mode2,2,GNABCTR);
CNABCTR.data[1] = A_UNITE(HNABCTR,mode2,2,BNABCTR_step);
 /* line 201: */
LNABCTR = JNABCTR ;
CNABCTR.data[2] = A_UNITE(KNABCTR,mode2,2,LNABCTR);
CNABCTR.data[3] = A_UNITE(MNABCTR,mode2,2,TKABCTR_loopcounter);
QNABCTR = ONABCTR ;
CNABCTR.data[4] = A_UNITE(PNABCTR,mode2,2,QNABCTR);
CNABCTR.data[5] = A_UNITE(RNABCTR,mode2,2,JKABCTR_end);
 /* line 202: */
VNABCTR = TNABCTR ;
CNABCTR.data[6] = A_UNITE(UNABCTR,mode2,2,VNABCTR);
CNABCTR.data[7] = A_UNITE(WNABCTR,mode4,4,EIAACTR_cnewline);
 /* line 203: */
(void)(MDMACTR_writecstream(A_HISVEC(XNABCTR,CNABCTR,8,A68_93 ), RIABCTR_codestream));
 /* line 204: */
 /* line 205: */
COABCTR = AOABCTR ;
YNABCTR.data[0] = A_UNITE(BOABCTR,mode2,2,COABCTR);
YNABCTR.data[1] = A_UNITE(DOABCTR,mode2,2,BNABCTR_step);
 /* line 206: */
HOABCTR = FOABCTR ;
YNABCTR.data[2] = A_UNITE(GOABCTR,mode2,2,HOABCTR);
YNABCTR.data[3] = A_UNITE(IOABCTR,mode2,2,TKABCTR_loopcounter);
MOABCTR = KOABCTR ;
YNABCTR.data[4] = A_UNITE(LOABCTR,mode2,2,MOABCTR);
YNABCTR.data[5] = A_UNITE(NOABCTR,mode2,2,JKABCTR_end);
 /* line 207: */
ROABCTR = POABCTR ;
YNABCTR.data[6] = A_UNITE(QOABCTR,mode2,2,ROABCTR);
YNABCTR.data[7] = A_UNITE(SOABCTR,mode4,4,EIAACTR_cnewline);
 /* line 208: */
(void)(MDMACTR_writecstream(A_HISVEC(TOABCTR,YNABCTR,8,A68_93 ), RIABCTR_codestream));
 /* line 209: */
 /* line 210: */
YOABCTR = WOABCTR ;
UOABCTR.data[0] = A_UNITE(XOABCTR,mode2,2,YOABCTR);
UOABCTR.data[1] = A_UNITE(ZOABCTR,mode2,2,BNABCTR_step);
DPABCTR = BPABCTR ;
UOABCTR.data[2] = A_UNITE(CPABCTR,mode2,2,DPABCTR);
UOABCTR.data[3] = A_UNITE(EPABCTR,mode4,4,EIAACTR_cnewline);
 /* line 211: */
(void)(MDMACTR_writecstream(A_HISVEC(FPABCTR,UOABCTR,4,A68_93 ), RIABCTR_codestream));
 /* line 212: */
 /* line 213: */
GPABCTR.data[0] = A_UNITE(HPABCTR,mode2,2,TKABCTR_loopcounter);
LPABCTR = JPABCTR ;
GPABCTR.data[1] = A_UNITE(KPABCTR,mode2,2,LPABCTR);
GPABCTR.data[2] = A_UNITE(MPABCTR,mode2,2,BNABCTR_step);
QPABCTR = OPABCTR ;
GPABCTR.data[3] = A_UNITE(PPABCTR,mode2,2,QPABCTR);
GPABCTR.data[4] = A_UNITE(RPABCTR,mode4,4,EIAACTR_cnewline);
 /* line 214: */
 /* line 215: */
 /* line 216: */
 /* line 220: */
(void)(MDMACTR_writecstream(A_HISVEC(SPABCTR,GPABCTR,5,A68_93 ), RIABCTR_codestream));
} 
} 
else
{ 
 /* line 221: */
 /* line 227: */
if (*(&(Loop->Forpart)))
{ 
(void)(A_CALLPROC(CKABCTR_setstep,(),((CKABCTR_setstep).nonlocals)));
 /* line 228: */
A_CALLPROC(VJABCTR_evaluatefrompart,( &TPABCTR),( &TPABCTR,(VJABCTR_evaluatefrompart).nonlocals));
UPABCTR_from = TPABCTR;
 /* line 229: */
UZPACTR_getcfragment( (*(&(Loop->Control))), &VPABCTR );
WPABCTR_loopcounter = VPABCTR;
 /* line 230: */
 /* line 231: */
BQABCTR = ZPABCTR ;
XPABCTR.data[0] = A_UNITE(AQABCTR,mode2,2,BQABCTR);
XPABCTR.data[1] = A_UNITE(CQABCTR,mode2,2,WPABCTR_loopcounter);
GQABCTR = EQABCTR ;
XPABCTR.data[2] = A_UNITE(FQABCTR,mode2,2,GQABCTR);
XPABCTR.data[3] = A_UNITE(HQABCTR,mode2,2,UPABCTR_from);
LQABCTR = JQABCTR ;
XPABCTR.data[4] = A_UNITE(KQABCTR,mode2,2,LQABCTR);
XPABCTR.data[5] = A_UNITE(MQABCTR,mode4,4,EIAACTR_cnewline);
 /* line 232: */
(void)(MDMACTR_writecstream(A_HISVEC(NQABCTR,XPABCTR,6,A68_93 ), RIABCTR_codestream));
 /* line 233: */
 /* line 234: */
OQABCTR.data[0] = A_UNITE(PQABCTR,mode2,2,WPABCTR_loopcounter);
 /* line 235: */
TQABCTR = RQABCTR ;
OQABCTR.data[1] = A_UNITE(SQABCTR,mode2,2,TQABCTR);
UZPACTR_getcfragment( (*(&(Loop->Step))), &UQABCTR );
OQABCTR.data[2] = A_UNITE(VQABCTR,mode2,2,UQABCTR);
ZQABCTR = XQABCTR ;
OQABCTR.data[3] = A_UNITE(YQABCTR,mode2,2,ZQABCTR);
OQABCTR.data[4] = A_UNITE(ARABCTR,mode4,4,EIAACTR_cnewline);
 /* line 236: */
 /* line 237: */
 /* line 238: */
(void)(MDMACTR_writecstream(A_HISVEC(BRABCTR,OQABCTR,5,A68_93 ), RIABCTR_codestream));
} 
else
{ 
A_CLOSURE( ERABCTR_voidresult, FRABCTR_voidresult, GRABCTR_voidresult );
(( GRABCTR_voidresult * ) ( ERABCTR_voidresult.nonlocals )) -> RIABCTR_codestream = RIABCTR_codestream;
 /* line 257: */
 /* line 258: */
 /* line 259: */
if (Frobytcount>0)
{ 
(void)(A_CALLPROC(ERABCTR_voidresult,((&((*Frobytlist)->Value))),((&((*Frobytlist)->Value)),(ERABCTR_voidresult).nonlocals)));
 /* line 260: */
 /* line 261: */
 /* line 262: */
if (Frobytcount>1)
{ 
 /* line 263: */
 /* line 264: */
(void)(A_CALLPROC(ERABCTR_voidresult,((&((*(&((*Frobytlist)->Rest)))->Value))),((&((*(&((*Frobytlist)->Rest)))->Value)),(ERABCTR_voidresult).nonlocals)));
} 
} 
 /* line 266: */
SRABCTR = QRABCTR ;
ORABCTR.data[0] = A_UNITE(RRABCTR,mode2,2,SRABCTR);
ORABCTR.data[1] = A_UNITE(TRABCTR,mode4,4,EIAACTR_cnewline);
 /* line 267: */
 /* line 268: */
(void)(MDMACTR_writecstream(A_HISVEC(URABCTR,ORABCTR,2,A68_93 ), RIABCTR_codestream));
} 
} 
 /* line 270: */
ZRABCTR = XRABCTR ;
VRABCTR.data[0] = A_UNITE(YRABCTR,mode2,2,ZRABCTR);
VRABCTR.data[1] = A_UNITE(ASABCTR,mode4,4,EIAACTR_cnewline);
 /* line 271: */
(void)(MDMACTR_writecstream(A_HISVEC(BSABCTR,VRABCTR,2,A68_93 ), RIABCTR_codestream));
} 
A_PROC_EXIT(for);
return;
} 
#undef NL
 /* line 276: */

A68_VOID  ESABCTR_forall(A68_197  Controls, A68_71 ** Foralllist)
{ 
A68_200  GSABCTR_generator;   /* proc value of non-global proc */
A68_199  MSABCTR;  /* avoid structure result */
A68_199  LSABCTR_rows A_UNUSED = {0};
A68_201  OSABCTR_generator;   /* proc value of non-global proc */
A68_123  USABCTR;  /* avoid structure result */
A68_123  TSABCTR_modeofrows A_UNUSED = {0};
A68_INT  VSABCTR_codestream A_UNUSED = {0};
A68_INT * WSABCTR_modeofrow A_UNUSED = {0};
A68_176 * XSABCTR_control A_UNUSED = {0};
A68_VC * YSABCTR_row A_UNUSED = {0};
A68_INT  ZSABCTR;  /* forall loop counter */
A68_64 * ATABCTR_rowvalue A_UNUSED = {0};
A68_INT  BTABCTR_elemmode A_UNUSED = {0};
A68_BOOL  CTABCTR;  /* optbool result */
A68_VC  DTABCTR;  /* clause result */
A68_VC  ETABCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  FTABCTR;  /* avoid structure result */
A68_VC  GTABCTR;  /* avoid structure result */
A68_VC  HTABCTR;  /* avoid structure result */
A68_64 * KTABCTR_temp A_UNUSED = {0};
A68_BOOL  LTABCTR;  /* optbool result */
A68_VC  MTABCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  NTABCTR;  /* avoid structure result */
A68_VC  OTABCTR;  /* avoid structure result */
A68_VC  PTABCTR;  /* avoid structure result */
A68_VC  QTABCTR_rowname A_UNUSED = {0};
A68_31  STABCTR_generator;   /* proc value of non-global proc */
A68_VC  XTABCTR;  /* avoid structure result */
A68_BOOL  YTABCTR_originalhasrefs A_UNUSED = {0};
A68_BOOL * ZTABCTR;  /* YIELD */
A68_VC  AUABCTR;  /* avoid structure result */
A68_VC  BUABCTR_controlname A_UNUSED = {0};
A68_31  DUABCTR_generator;   /* proc value of non-global proc */
A68_VC  IUABCTR;  /* clause result */
A68_VC  JUABCTR;  /* avoid structure result */
A68_VC * KUABCTR;  /* YIELD */
A68_INT  LUABCTR_forallmode A_UNUSED = {0};
A68_BOOL  MUABCTR;  /* optbool result */
A68_BOOL  NUABCTR;  /* optbool result */
A68_INT  OUABCTR_controlmode A_UNUSED = {0};
A68_BOOL * PUABCTR;  /* YIELD */
A68_68  SUABCTR;  /* avoid structure result */
A68_VC  TUABCTR;  /* OPERATORS - istruct -> vector */
A68_33  UUABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  VUABCTR_controlname A_UNUSED = {0};
A68_31  XUABCTR_generator;   /* proc value of non-global proc */
A68_VC  CVABCTR;  /* clause result */
A68_VC  DVABCTR;  /* avoid structure result */
A68_VC * EVABCTR;  /* YIELD */
A68_BOOL * FVABCTR;  /* YIELD */
A68_VC  GVABCTR;  /* avoid structure result */
A68_VC  HVABCTR_controlname A_UNUSED = {0};
A68_31  JVABCTR_generator;   /* proc value of non-global proc */
A68_VC  OVABCTR;  /* clause result */
A68_VC  PVABCTR;  /* avoid structure result */
A68_VC * QVABCTR;  /* YIELD */
A68_BOOL  RVABCTR;  /* optbool result */
A68_INT  SVABCTR;  /* clause result */
A68_INT  TVABCTR_controlmode A_UNUSED = {0};
A68_BOOL * UVABCTR;  /* YIELD */
A68_68  XVABCTR;  /* avoid structure result */
A68_VC  YVABCTR;  /* OPERATORS - istruct -> vector */
A68_33  ZVABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  AWABCTR_controlname A_UNUSED = {0};
A68_31  CWABCTR_generator;   /* proc value of non-global proc */
A68_VC  HWABCTR;  /* clause result */
A68_VC  IWABCTR;  /* avoid structure result */
A68_VC * JWABCTR;  /* YIELD */
A68_68  MWABCTR;  /* avoid structure result */
A68_VC  NWABCTR;  /* OPERATORS - istruct -> vector */
A68_33  OWABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  PWABCTR_loopcounter A_UNUSED = {0};
A68_194  QWABCTR;  /* collateral clause result */
A68_INT  SWABCTR;  /* YIELD */
A68_VC  TWABCTR;  /* clause result */
A68_INT  UWABCTR;  /* YIELD */
A68_VC  VWABCTR;  /* avoid structure result */
A68_INT  WWABCTR;  /* YIELD */
A68_INT  YWABCTR;  /* YIELD */
A68_INT  DXABCTR;  /* YIELD */
A68_INT  GXABCTR;  /* YIELD */
A68_93  JXABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  KXABCTR;  /* YIELD */
A68_93  LXABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  MXABCTR;  /* YIELD */
A68_93  NXABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  OXABCTR;  /* OPERATORS - istruct -> vector */
A68_INT  PXABCTR_i A_UNUSED = {0};
A68_INT  QXABCTR;  /* to part of loop */
A68_VC  RXABCTR_row A_UNUSED = {0};
A68_194  SXABCTR;  /* collateral clause result */
A68_VC  VXABCTR;  /* clause result */
A68_VC  WXABCTR;  /* avoid structure result */
A68_93  HYABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  IYABCTR;  /* YIELD */
A68_93  LYABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  MYABCTR;  /* YIELD */
A68_93  NYABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  OYABCTR;  /* OPERATORS - istruct -> vector */
A68_196  PYABCTR;  /* collateral clause result */
A68_VC  TYABCTR;  /* avoid structure result */
A68_93  VYABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  WYABCTR;  /* YIELD */
A68_93  XYABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  YYABCTR;  /* OPERATORS - istruct -> vector */
A68_53  AZABCTR_initialise;   /* proc value of non-global proc */
A68_53  WZABCTR_increment;   /* proc value of non-global proc */
A68_INT  QABBCTR_i A_UNUSED = {0};
A68_INT  RABBCTR;  /* to part of loop */
A68_194  SABBCTR;  /* collateral clause result */
A68_VC  TABBCTR;  /* avoid structure result */
A68_93  UABBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  VABBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  WABBCTR;  /* YIELD */
A68_93  XABBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  YABBCTR;  /* OPERATORS - istruct -> vector */
A68_210  ZABBCTR;  /* collateral clause result */
A68_93  CBBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  DBBBCTR;  /* YIELD */
A68_93  EBBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  HBBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  IBBBCTR;  /* YIELD */
A68_93  JBBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  KBBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  LBBBCTR;  /* YIELD */
A68_VC  MBBBCTR;  /* avoid structure result */
A68_93  NBBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  OBBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  PBBBCTR;  /* OPERATORS - istruct -> vector */
A68_INT  QBBBCTR_i A_UNUSED = {0};
A68_INT  RBBBCTR;  /* to part of loop */
A68_194  SBBBCTR;  /* collateral clause result */
A68_93  TBBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  UBBBCTR;  /* YIELD */
A68_VC  VBBBCTR;  /* avoid structure result */
A68_93  WBBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  XBBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  YBBBCTR;  /* OPERATORS - istruct -> vector */
A68_190  ZBBBCTR;  /* collateral clause result */
A68_93  CCBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  DCBBCTR;  /* YIELD */
A68_93  ECBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  FCBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  GCBBCTR;  /* YIELD */
A68_93  HCBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  ICBBCTR;  /* OPERATORS - istruct -> vector */
A68_176 * JCBBCTR_control A_UNUSED = {0};
A68_INT  KCBBCTR;  /* forall loop counter */
A68_184  LCBBCTR;  /* collateral clause result */
A68_VC  MCBBCTR;  /* avoid structure result */
A68_93  NCBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  QCBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  RCBBCTR;  /* YIELD */
A68_93  SCBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  TCBBCTR;  /* YIELD */
A68_93  UCBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  VCBBCTR;  /* YIELD */
A68_93  WCBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  XCBBCTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(forall);
 /* line 284: */
 /* line 285: */
{ 
A_CLOSURE( GSABCTR_generator, HSABCTR_generator, ISABCTR_generator );
(( ISABCTR_generator * ) ( GSABCTR_generator.nonlocals )) -> Controls = Controls;
A_CALLPROC(GSABCTR_generator,(A68_TRUE, &MSABCTR),(A68_TRUE, &MSABCTR,(GSABCTR_generator).nonlocals));
LSABCTR_rows = MSABCTR;
 /* line 286: */
A_CLOSURE( OSABCTR_generator, PSABCTR_generator, QSABCTR_generator );
(( QSABCTR_generator * ) ( OSABCTR_generator.nonlocals )) -> Controls = Controls;
A_CALLPROC(OSABCTR_generator,(A68_TRUE, &USABCTR),(A68_TRUE, &USABCTR,(OSABCTR_generator).nonlocals));
TSABCTR_modeofrows = USABCTR;
 /* line 287: */
VSABCTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 291: */
 /* line 293: */
ZSABCTR = TSABCTR_modeofrows.upb -1;
if ( ZSABCTR != Controls.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
if ( ZSABCTR != LSABCTR_rows.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 3"); }
WSABCTR_modeofrow = TSABCTR_modeofrows.data;
XSABCTR_control = Controls.data;
YSABCTR_row = LSABCTR_rows.data;
for (;ZSABCTR-- >= 0;
(WSABCTR_modeofrow++
,XSABCTR_control++
,YSABCTR_row++
) )
{
 /* line 294: */
ATABCTR_rowvalue = (&((*Foralllist)->Value));
 /* line 295: */
(void)((*Foralllist) = (*(&((*Foralllist)->Rest))));
 /* line 296: */
(void)(A_CALLPROC(BYQACTR_evaluate,(ATABCTR_rowvalue),(ATABCTR_rowvalue,(BYQACTR_evaluate).nonlocals)));
 /* line 297: */
(void)((*WSABCTR_modeofrow) = (*(&(ATABCTR_rowvalue->Mode))));
 /* line 298: */
BTABCTR_elemmode = A_CALLPROC(UVMACTR_elementmode,((*WSABCTR_modeofrow)),((*WSABCTR_modeofrow),(UVMACTR_elementmode).nonlocals));
 /* line 305: */
 /* line 306: */
 /* line 307: */
 /* line 308: */
if (SXPACTR_isident(ATABCTR_rowvalue))
{ 
 /* line 309: */
CTABCTR = RSMACTR_hasrefs((*WSABCTR_modeofrow));
if ( CTABCTR )
{ /* line 310: */
CTABCTR = KRMACTR_isflexarray((*WSABCTR_modeofrow));
}
if (CTABCTR)
{ 
 /* line 311: */
 /* line 312: */
UZPACTR_getcfragment( ATABCTR_rowvalue, &FTABCTR );
JIAACTR_bracket( A_VC_PLUS(A_HVEC(ETABCTR,'*',A68_CHAR ),FTABCTR), &GTABCTR );
DTABCTR = GTABCTR;
} 
else
{ 
 /* line 313: */
 /* line 314: */
UZPACTR_getcfragment( ATABCTR_rowvalue, &HTABCTR );
DTABCTR = HTABCTR;
} 
} 
else
{ 
KTABCTR_temp = JQQACTR_yield(JTABCTR, ATABCTR_rowvalue);
 /* line 316: */
 /* line 317: */
LTABCTR = MOMACTR_hasoneref((*WSABCTR_modeofrow));
if ( LTABCTR )
{ /* line 318: */
LTABCTR = KRMACTR_isflexarray((*WSABCTR_modeofrow));
}
 /* line 319: */
if (LTABCTR)
{ 
 /* line 320: */
 /* line 321: */
UZPACTR_getcfragment( KTABCTR_temp, &NTABCTR );
JIAACTR_bracket( A_VC_PLUS(A_HVEC(MTABCTR,'*',A68_CHAR ),NTABCTR), &OTABCTR );
DTABCTR = OTABCTR;
} 
else
{ 
 /* line 322: */
UZPACTR_getcfragment( KTABCTR_temp, &PTABCTR );
DTABCTR = PTABCTR;
} 
} 
QTABCTR_rowname = DTABCTR;
 /* line 323: */
A_CLOSURE( STABCTR_generator, TTABCTR_generator, UTABCTR_generator );
(( UTABCTR_generator * ) ( STABCTR_generator.nonlocals )) -> QTABCTR_rowname = QTABCTR_rowname;
A_CALLPROC(STABCTR_generator,(A68_TRUE, &XTABCTR),(A68_TRUE, &XTABCTR,(STABCTR_generator).nonlocals));
(void)(A_VASSIGN2(QTABCTR_rowname,XTABCTR,A68_CHAR )) ;
(*YSABCTR_row) = XTABCTR;
 /* line 325: */
YTABCTR_originalhasrefs = RSMACTR_hasrefs((*WSABCTR_modeofrow));
 /* line 327: */
 /* line 328: */
 /* line 329: */
 /* line 335: */
if (ARMACTR_isarray((*WSABCTR_modeofrow))&(QVMACTR_dimensions((*WSABCTR_modeofrow))>1))
{ 
ZTABCTR = (&(XSABCTR_control->Needstemp)) ;
(*ZTABCTR) = A68_FALSE;
 /* line 336: */
 /* line 337: */
 /* line 338: */
{ 
UZPACTR_getcfragment( (&(XSABCTR_control->Ident)), &AUABCTR );
BUABCTR_controlname = AUABCTR;
 /* line 339: */
A_CLOSURE( DUABCTR_generator, EUABCTR_generator, FUABCTR_generator );
(( FUABCTR_generator * ) ( DUABCTR_generator.nonlocals )) -> BUABCTR_controlname = BUABCTR_controlname;
 /* line 340: */
 /* line 342: */
A_CALLPROC(DUABCTR_generator,(A68_TRUE, &JUABCTR),(A68_TRUE, &JUABCTR,(DUABCTR_generator).nonlocals));
(void)(A_VASSIGN2(BUABCTR_controlname,JUABCTR,A68_CHAR )) ;
IUABCTR = JUABCTR;
} 
 /* line 343: */
KUABCTR = (&(XSABCTR_control->Control)) ;
(*KUABCTR) = IUABCTR;
} 
else
{ 
 /* line 353: */
if (YTABCTR_originalhasrefs)
{ 
LUABCTR_forallmode = (*(&((&(XSABCTR_control->Ident))->Mode)));
 /* line 355: */
 /* line 356: */
MUABCTR = FRMACTR_isfirmarray(BTABCTR_elemmode);
if ( MUABCTR )
{MUABCTR = (BTABCTR_elemmode<VFAACTR_refmark);
}
 /* line 357: */
if ( MUABCTR )
{ /* line 359: */
NUABCTR = KRMACTR_isflexarray(LUABCTR_forallmode);
if ( NUABCTR )
{NUABCTR = MOMACTR_hasoneref(LUABCTR_forallmode);
}
 /* line 360: */
MUABCTR = (!NUABCTR);
}
 /* line 361: */
if (MUABCTR)
{ 
OUABCTR_controlmode = ((BTABCTR_elemmode+VFAACTR_refmark)+VFAACTR_refmark);
 /* line 362: */
PUABCTR = (&(XSABCTR_control->Needstemp)) ;
(*PUABCTR) = A68_TRUE;
 /* line 363: */
 /* line 364: */
 /* line 366: */
{ 
QMOACTR_declarectemporary( OUABCTR_controlmode, RUABCTR, &SUABCTR );
UUABCTR = SUABCTR.Name ;
VUABCTR_controlname = A_HISVEC(TUABCTR,UUABCTR,7,A68_CHAR );
 /* line 367: */
A_CLOSURE( XUABCTR_generator, YUABCTR_generator, ZUABCTR_generator );
(( ZUABCTR_generator * ) ( XUABCTR_generator.nonlocals )) -> VUABCTR_controlname = VUABCTR_controlname;
 /* line 368: */
 /* line 369: */
A_CALLPROC(XUABCTR_generator,(A68_TRUE, &DVABCTR),(A68_TRUE, &DVABCTR,(XUABCTR_generator).nonlocals));
(void)(A_VASSIGN2(VUABCTR_controlname,DVABCTR,A68_CHAR )) ;
CVABCTR = DVABCTR;
} 
 /* line 370: */
EVABCTR = (&(XSABCTR_control->Control)) ;
(*EVABCTR) = CVABCTR;
} 
else
{ 
FVABCTR = (&(XSABCTR_control->Needstemp)) ;
(*FVABCTR) = A68_FALSE;
 /* line 371: */
 /* line 372: */
 /* line 373: */
{ 
UZPACTR_getcfragment( (&(XSABCTR_control->Ident)), &GVABCTR );
HVABCTR_controlname = GVABCTR;
 /* line 374: */
A_CLOSURE( JVABCTR_generator, KVABCTR_generator, LVABCTR_generator );
(( LVABCTR_generator * ) ( JVABCTR_generator.nonlocals )) -> HVABCTR_controlname = HVABCTR_controlname;
 /* line 375: */
 /* line 376: */
A_CALLPROC(JVABCTR_generator,(A68_TRUE, &PVABCTR),(A68_TRUE, &PVABCTR,(JVABCTR_generator).nonlocals));
(void)(A_VASSIGN2(HVABCTR_controlname,PVABCTR,A68_CHAR )) ;
OVABCTR = PVABCTR;
} 
 /* line 377: */
 /* line 383: */
QVABCTR = (&(XSABCTR_control->Control)) ;
(*QVABCTR) = OVABCTR;
} 
} 
else
{ 
 /* line 384: */
 /* line 385: */
RVABCTR = FRMACTR_isfirmarray(BTABCTR_elemmode);
if ( RVABCTR )
{ /* line 386: */
RVABCTR = (!RSMACTR_hasrefs(BTABCTR_elemmode));
}
if (RVABCTR)
{ 
 /* line 388: */
 /* line 390: */
SVABCTR = (VFAACTR_refmark+VFAACTR_refmark);
} 
else
{ 
SVABCTR = VFAACTR_refmark;
} 
TVABCTR_controlmode = (BTABCTR_elemmode+SVABCTR);
 /* line 392: */
UVABCTR = (&(XSABCTR_control->Needstemp)) ;
(*UVABCTR) = A68_TRUE;
 /* line 393: */
 /* line 394: */
 /* line 396: */
{ 
QMOACTR_declarectemporary( TVABCTR_controlmode, WVABCTR, &XVABCTR );
ZVABCTR = XVABCTR.Name ;
AWABCTR_controlname = A_HISVEC(YVABCTR,ZVABCTR,7,A68_CHAR );
 /* line 397: */
A_CLOSURE( CWABCTR_generator, DWABCTR_generator, EWABCTR_generator );
(( EWABCTR_generator * ) ( CWABCTR_generator.nonlocals )) -> AWABCTR_controlname = AWABCTR_controlname;
 /* line 398: */
 /* line 399: */
A_CALLPROC(CWABCTR_generator,(A68_TRUE, &IWABCTR),(A68_TRUE, &IWABCTR,(CWABCTR_generator).nonlocals));
(void)(A_VASSIGN2(AWABCTR_controlname,IWABCTR,A68_CHAR )) ;
HWABCTR = IWABCTR;
} 
 /* line 400: */
JWABCTR = (&(XSABCTR_control->Control)) ;
(*JWABCTR) = HWABCTR;
} 
} 
}
 /* line 404: */
 /* line 405: */
QMOACTR_declarectemporary( EFAACTR_intmode, LWABCTR, &MWABCTR );
OWABCTR = MWABCTR.Name ;
PWABCTR_loopcounter = A_HISVEC(NWABCTR,OWABCTR,7,A68_CHAR );
 /* line 407: */
 /* line 408: */
 /* line 409: */
 /* line 410: */
SWABCTR = 1 ;
if (XRMACTR_isistruct((*(&A_VINDEX(TSABCTR_modeofrows,SWABCTR)))))
{ 
 /* line 411: */
UWABCTR = 1 ;
ROAAOSF_whole( A_CALLPROC(WVMACTR_istructlength,((*(&A_VINDEX(TSABCTR_modeofrows,UWABCTR)))),((*(&A_VINDEX(TSABCTR_modeofrows,UWABCTR))),(WVMACTR_istructlength).nonlocals)), 0, &VWABCTR );
TWABCTR = VWABCTR;
} 
else
{ 
 /* line 412: */
WWABCTR = 1 ;
if (QQMACTR_isvector((*(&A_VINDEX(TSABCTR_modeofrows,WWABCTR)))))
{ 
 /* line 413: */
YWABCTR = 1 ;
TWABCTR = A_VC_PLUS((*(&A_VINDEX(LSABCTR_rows,YWABCTR))),ZWABCTR);
} 
else
{ 
 /* line 414: */
DXABCTR = 1 ;
GXABCTR = 1 ;
TWABCTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS((*(&A_VINDEX(LSABCTR_rows,DXABCTR))),EXABCTR),FXABCTR),(*(&A_VINDEX(LSABCTR_rows,GXABCTR)))),HXABCTR);
} 
} 
KXABCTR = A_VC_PLUS(A_VC_PLUS(PWABCTR_loopcounter,IXABCTR),TWABCTR) ;
QWABCTR.data[0] = A_UNITE(JXABCTR,mode2,2,KXABCTR);
MXABCTR = ';' ;
QWABCTR.data[1] = A_UNITE(LXABCTR,mode1,1,MXABCTR);
QWABCTR.data[2] = A_UNITE(NXABCTR,mode4,4,EIAACTR_cnewline);
 /* line 416: */
(void)(MDMACTR_writecstream(A_HISVEC(OXABCTR,QWABCTR,3,A68_93 ), VSABCTR_codestream));
 /* line 421: */
 /* line 422: */
QXABCTR = LSABCTR_rows.upb;
for ( PXABCTR_i = 2;
PXABCTR_i <= QXABCTR;
PXABCTR_i += 1 )
{ 
 /* line 423: */
RXABCTR_row = (*(&A_VINDEX(LSABCTR_rows,PXABCTR_i)));
 /* line 424: */
 /* line 425: */
 /* line 426: */
 /* line 427: */
if (XRMACTR_isistruct((*(&A_VINDEX(TSABCTR_modeofrows,PXABCTR_i)))))
{ 
 /* line 428: */
ROAAOSF_whole( A_CALLPROC(WVMACTR_istructlength,((*(&A_VINDEX(TSABCTR_modeofrows,PXABCTR_i)))),((*(&A_VINDEX(TSABCTR_modeofrows,PXABCTR_i))),(WVMACTR_istructlength).nonlocals)), 0, &WXABCTR );
VXABCTR = WXABCTR;
} 
else
{ 
 /* line 429: */
if (QQMACTR_isvector((*(&A_VINDEX(TSABCTR_modeofrows,PXABCTR_i)))))
{ 
 /* line 430: */
VXABCTR = A_VC_PLUS(RXABCTR_row,YXABCTR);
} 
else
{ 
 /* line 431: */
VXABCTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(RXABCTR_row,CYABCTR),DYABCTR),RXABCTR_row),EYABCTR);
} 
} 
IYABCTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(FYABCTR,PWABCTR_loopcounter),GYABCTR),VXABCTR) ;
SXABCTR.data[0] = A_UNITE(HYABCTR,mode2,2,IYABCTR);
MYABCTR = KYABCTR ;
SXABCTR.data[1] = A_UNITE(LYABCTR,mode2,2,MYABCTR);
SXABCTR.data[2] = A_UNITE(NYABCTR,mode4,4,EIAACTR_cnewline);
 /* line 433: */
(void)(MDMACTR_writecstream(A_HISVEC(OYABCTR,SXABCTR,3,A68_93 ), VSABCTR_codestream));
 /* line 434: */
 /* line 435: */
 /* line 436: */
ROAAOSF_whole( PXABCTR_i, 0, &TYABCTR );
WYABCTR = A_VC_PLUS(A_VC_PLUS(SYABCTR,TYABCTR),UYABCTR) ;
PYABCTR.data[0] = A_UNITE(VYABCTR,mode2,2,WYABCTR);
PYABCTR.data[1] = A_UNITE(XYABCTR,mode4,4,EIAACTR_cnewline);
 /* line 437: */
 /* line 438: */
(void)(MDMACTR_writecstream(A_HISVEC(YYABCTR,PYABCTR,2,A68_93 ), VSABCTR_codestream));
}
 /* line 441: */
A_CLOSURE( AZABCTR_initialise, BZABCTR_initialise, CZABCTR_initialise );
(( CZABCTR_initialise * ) ( AZABCTR_initialise.nonlocals )) -> Controls = Controls;
(( CZABCTR_initialise * ) ( AZABCTR_initialise.nonlocals )) -> TSABCTR_modeofrows = TSABCTR_modeofrows;
(( CZABCTR_initialise * ) ( AZABCTR_initialise.nonlocals )) -> LSABCTR_rows = LSABCTR_rows;
 /* line 451: */
A_CLOSURE( WZABCTR_increment, XZABCTR_increment, YZABCTR_increment );
(( YZABCTR_increment * ) ( WZABCTR_increment.nonlocals )) -> TSABCTR_modeofrows = TSABCTR_modeofrows;
(( YZABCTR_increment * ) ( WZABCTR_increment.nonlocals )) -> Controls = Controls;
(( YZABCTR_increment * ) ( WZABCTR_increment.nonlocals )) -> LSABCTR_rows = LSABCTR_rows;
 /* line 464: */
 /* line 465: */
RABBCTR = Controls.upb;
for ( QABBCTR_i = 1;
QABBCTR_i <= RABBCTR;
QABBCTR_i += 1 )
{ 
 /* line 466: */
A_CALLPROC(AZABCTR_initialise,(QABBCTR_i, &TABBCTR),(QABBCTR_i, &TABBCTR,(AZABCTR_initialise).nonlocals));
SABBCTR.data[0] = A_UNITE(UABBCTR,mode2,2,TABBCTR);
WABBCTR = ';' ;
SABBCTR.data[1] = A_UNITE(VABBCTR,mode1,1,WABBCTR);
SABBCTR.data[2] = A_UNITE(XABBCTR,mode4,4,EIAACTR_cnewline);
 /* line 467: */
(void)(MDMACTR_writecstream(A_HISVEC(YABBCTR,SABBCTR,3,A68_93 ), VSABCTR_codestream));
}
 /* line 469: */
DBBBCTR = BBBBCTR ;
ZABBCTR.data[0] = A_UNITE(CBBBCTR,mode2,2,DBBBCTR);
ZABBCTR.data[1] = A_UNITE(EBBBCTR,mode2,2,PWABCTR_loopcounter);
IBBBCTR = GBBBCTR ;
ZABBCTR.data[2] = A_UNITE(HBBBCTR,mode2,2,IBBBCTR);
 /* line 470: */
ZABBCTR.data[3] = A_UNITE(JBBBCTR,mode4,4,EIAACTR_cnewline);
LBBBCTR = '(' ;
ZABBCTR.data[4] = A_UNITE(KBBBCTR,mode1,1,LBBBCTR);
A_CALLPROC(WZABCTR_increment,(1, &MBBBCTR),(1, &MBBBCTR,(WZABCTR_increment).nonlocals));
ZABBCTR.data[5] = A_UNITE(NBBBCTR,mode2,2,MBBBCTR);
ZABBCTR.data[6] = A_UNITE(OBBBCTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(PBBBCTR,ZABBCTR,7,A68_93 ), VSABCTR_codestream));
 /* line 472: */
 /* line 473: */
RBBBCTR = Controls.upb;
for ( QBBBCTR_i = 2;
QBBBCTR_i <= RBBBCTR;
QBBBCTR_i += 1 )
{ 
 /* line 474: */
UBBBCTR = ',' ;
SBBBCTR.data[0] = A_UNITE(TBBBCTR,mode1,1,UBBBCTR);
A_CALLPROC(WZABCTR_increment,(QBBBCTR_i, &VBBBCTR),(QBBBCTR_i, &VBBBCTR,(WZABCTR_increment).nonlocals));
SBBBCTR.data[1] = A_UNITE(WBBBCTR,mode2,2,VBBBCTR);
SBBBCTR.data[2] = A_UNITE(XBBBCTR,mode4,4,EIAACTR_cnewline);
 /* line 475: */
(void)(MDMACTR_writecstream(A_HISVEC(YBBBCTR,SBBBCTR,3,A68_93 ), VSABCTR_codestream));
}
 /* line 477: */
DCBBCTR = BCBBCTR ;
ZBBBCTR.data[0] = A_UNITE(CCBBCTR,mode2,2,DCBBCTR);
ZBBBCTR.data[1] = A_UNITE(ECBBCTR,mode4,4,EIAACTR_cnewline);
GCBBCTR = '{' ;
ZBBBCTR.data[2] = A_UNITE(FCBBCTR,mode1,1,GCBBCTR);
ZBBBCTR.data[3] = A_UNITE(HCBBCTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(ICBBCTR,ZBBBCTR,4,A68_93 ), VSABCTR_codestream));
 /* line 481: */
 /* line 482: */
KCBBCTR = Controls.upb -1;
JCBBCTR_control = Controls.data;
for (;KCBBCTR-- >= 0;
(JCBBCTR_control++
) )
{
 /* line 483: */
 /* line 484: */
 /* line 485: */
if (*(&(JCBBCTR_control->Needstemp)))
{ 
UZPACTR_getcfragment( (&(JCBBCTR_control->Ident)), &MCBBCTR );
LCBBCTR.data[0] = A_UNITE(NCBBCTR,mode2,2,MCBBCTR);
 /* line 486: */
RCBBCTR = PCBBCTR ;
LCBBCTR.data[1] = A_UNITE(QCBBCTR,mode2,2,RCBBCTR);
TCBBCTR = (*(&(JCBBCTR_control->Control))) ;
LCBBCTR.data[2] = A_UNITE(SCBBCTR,mode2,2,TCBBCTR);
VCBBCTR = ';' ;
LCBBCTR.data[3] = A_UNITE(UCBBCTR,mode1,1,VCBBCTR);
LCBBCTR.data[4] = A_UNITE(WCBBCTR,mode4,4,EIAACTR_cnewline);
 /* line 487: */
 /* line 488: */
 /* line 489: */
(void)(MDMACTR_writecstream(A_HISVEC(XCBBCTR,LCBBCTR,5,A68_93 ), VSABCTR_codestream));
} 
}
 /* line 490: */
} 
A_PROC_EXIT(forall);
return;
} 
#undef NL

A68_VOID  YCBBCTR_while(void)
{ 
A_PROC_ENTRY(while);
/*SKIP*/;
A_PROC_EXIT(while);
return;
} 
#undef NL

A68_VOID  ADBBCTR_whiledo(A68_64 * Enquiry)
{ 
A68_INT  BDBBCTR_codestream A_UNUSED = {0};
A68_VC  DDBBCTR;  /* clause result */
A68_VC  FDBBCTR;  /* avoid structure result */
A68_VC  GDBBCTR_booleanexpr A_UNUSED = {0};
A68_190  HDBBCTR;  /* collateral clause result */
A68_93  KDBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  LDBBCTR;  /* YIELD */
A68_93  MDBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  PDBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  QDBBCTR;  /* YIELD */
A68_93  RDBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  SDBBCTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(whiledo);
 /* line 495: */
 /* line 496: */
{ 
BDBBCTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 497: */
 /* line 498: */
 /* line 499: */
 /* line 501: */
if (EYPACTR_isskip(Enquiry))
{ 
 /* line 502: */
DDBBCTR = EDBBCTR;
} 
else
{ 
 /* line 503: */
BEQACTR_bracketcfragment( Enquiry, &FDBBCTR );
DDBBCTR = FDBBCTR;
} 
GDBBCTR_booleanexpr = DDBBCTR;
 /* line 504: */
 /* line 505: */
LDBBCTR = JDBBCTR ;
HDBBCTR.data[0] = A_UNITE(KDBBCTR,mode2,2,LDBBCTR);
HDBBCTR.data[1] = A_UNITE(MDBBCTR,mode2,2,GDBBCTR_booleanexpr);
QDBBCTR = ODBBCTR ;
HDBBCTR.data[2] = A_UNITE(PDBBCTR,mode2,2,QDBBCTR);
HDBBCTR.data[3] = A_UNITE(RDBBCTR,mode4,4,EIAACTR_cnewline);
 /* line 506: */
(void)(MDMACTR_writecstream(A_HISVEC(SDBBCTR,HDBBCTR,4,A68_93 ), BDBBCTR_codestream));
} 
A_PROC_EXIT(whiledo);
return;
} 
#undef NL

A68_VOID  TDBBCTR_whileod(void)
{ 
A68_INT  UDBBCTR_codestream A_UNUSED = {0};
A68_196  VDBBCTR;  /* collateral clause result */
A68_93  WDBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  XDBBCTR;  /* YIELD */
A68_93  YDBBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  ZDBBCTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(whileod);
{ 
UDBBCTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 511: */
XDBBCTR = '}' ;
VDBBCTR.data[0] = A_UNITE(WDBBCTR,mode1,1,XDBBCTR);
VDBBCTR.data[1] = A_UNITE(YDBBCTR,mode4,4,EIAACTR_cnewline);
 /* line 512: */
(void)(MDMACTR_writecstream(A_HISVEC(ZDBBCTR,VDBBCTR,2,A68_93 ), UDBBCTR_codestream));
} 
A_PROC_EXIT(whileod);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 5: */
void QHABCTR(void)   /* initialise DECS loops */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel","-dir",".","loops.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/vak/Project/Algol/Algol-68RS-Source/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/vak/Project/Algol/Algol-68RS-Source/a68config/a68config.m","./values.m","./modes.m","./incmode.m","./environment.m","./environ.m","./coutput.m","./clauses.m","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel/usefulops.m","./centities.m",""};
static A_CONFIG_INFO A_config A_UNUSED;
/* --- end of configuration information */
A68_64  VHABCTR;  /* collateral clause result */
A68_65  WHABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_LBITS  XHABCTR;  /* YIELD */
A68_75  BEBBCTR;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
OUPACTR();   /* USE values */
DNMACTR();   /* USE modes */
ZDAACTR();   /* USE incmode */
HPIACTR();   /* USE environment */
BPLACTR();   /* USE environ */
PTLACTR();   /* USE coutput */
HCZACTR();   /* USE clauses */
IKAAOSF();   /* USE usefulops */
THAACTR();   /* USE centities */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/loops.a68";
A_config.translation_time = "Thu Nov  5 21:38:58 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "PHABCTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 21:38:58 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS loops);
(void)(UEAALIB_a68config(LGAALIB_configinfo, UHABCTR));
 /* line 49: */
 /* line 59: */
 /* line 62: */
VHABCTR.Mode = EFAACTR_intmode;
VHABCTR.Info = PKJACTR_defaultinfo;
XHABCTR = (A68_LBITS )01U ;
VHABCTR.Extra = A_UNITE(WHABCTR,mode1,1,XHABCTR);
MIABCTR_value1 = AIABCTR_assignment(A_LOC(A68_64 ), VHABCTR);
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
BEBBCTR.fn.fn_global = TDBBCTR_whileod;
BEBBCTR.nonlocals = A68_NIL;
AEBBCTR_od = (BEBBCTR);
 /* line 516: */
 /* line 518: */
 /* line 521: */
/*SKIP*/;
A_PROC_EXIT(DECS loops);
} 
#undef NL
/* end of translation of loops.a68 */
