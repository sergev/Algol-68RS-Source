/* UNAME:BDABCTR */
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
extern A68_BOOL  LWPACTR_isconstant(struct A68t64 *);
extern A68_BOOL  EXPACTR_isident(struct A68t64 *);
extern A68_BOOL  QXPACTR_isskip(struct A68t64 *);
extern A68_BOOL  IXPACTR_istemp(struct A68t64 *);
extern A68_LBITS  ZXPACTR_getconstant(struct A68t64 *);
extern A68_VOID  GZPACTR_getcfragment(struct A68t64 *,A68_VC *);
extern A68_BITS  PKJACTR_defaultinfo;
extern A68_VOID  NDQACTR_bracketcfragment(struct A68t64 *,A68_VC *);
extern A68_VOID  EOQACTR_usemacro(A68_VC ,struct A68t165 ,A68_VC *);
extern A68_64 * VPQACTR_yield(A68_VC ,struct A68t64 *);
/* --- End of imports from values --- */


/* --- Imports from modes --- */
extern A68_VOID  LLOACTR_declarectemporary(A68_INT ,A68_VC ,A68_68 *);
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
extern A68_74  NXQACTR_evaluate;
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
extern void AUPACTR(void);   /* values */
extern void DNMACTR(void);   /* modes */
extern void ZDAACTR(void);   /* incmode */
extern void HPIACTR(void);   /* environment */
extern void BPLACTR(void);   /* environ */
extern void PTLACTR(void);   /* coutput */
extern void CAZACTR(void);   /* clauses */
extern void IKAAOSF(void);   /* usefulops */
extern void THAACTR(void);   /* centities */
/* --- end of DECS initialisation functions --- */
static A68_174   FDABCTR = {"$Id: loops.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,GDABCTR,FDABCTR,55)
static A68_64 * YDABCTR_value1;
static A68_182   KEABCTR = {"to part of loop"}; 
A_GISVEC(A68_VC ,MEABCTR,KEABCTR,15)
static A68_182   NEABCTR = {"by part of loop"}; 
A_GISVEC(A68_VC ,OEABCTR,NEABCTR,15)
static A68_183   WEABCTR = {" = "}; 
A_GISVEC(A68_VC ,XEABCTR,WEABCTR,3)
static A68_186   AGABCTR = {"loop control"}; 
A_GISVEC(A68_VC ,BGABCTR,AGABCTR,12)
static A68_187   HGABCTR = {"for ( "}; 
A_GISVEC(A68_VC ,IGABCTR,HGABCTR,6)
static A68_183   MGABCTR = {" = "}; 
A_GISVEC(A68_VC ,NGABCTR,MGABCTR,3)
static A68_45   YGABCTR = {" <= "}; 
A_GISVEC(A68_VC ,ZGABCTR,YGABCTR,4)
static A68_45   JHABCTR = {" >= "}; 
A_GISVEC(A68_VC ,KHABCTR,JHABCTR,4)
static A68_189   RHABCTR = {"; "}; 
A_GISVEC(A68_VC ,SHABCTR,RHABCTR,2)
static A68_45   AIABCTR = {" += "}; 
A_GISVEC(A68_VC ,BIABCTR,AIABCTR,4)
static A68_189   GIABCTR = {" )"}; 
A_GISVEC(A68_VC ,HIABCTR,GIABCTR,2)
static A68_189   PIABCTR = {"( "}; 
A_GISVEC(A68_VC ,QIABCTR,PIABCTR,2)
static A68_191   UIABCTR = {" > 0 && "}; 
A_GISVEC(A68_VC ,VIABCTR,UIABCTR,8)
static A68_45   ZIABCTR = {" <= "}; 
A_GISVEC(A68_VC ,AJABCTR,ZIABCTR,4)
static A68_45   EJABCTR = {") ||"}; 
A_GISVEC(A68_VC ,FJABCTR,EJABCTR,4)
static A68_189   LJABCTR = {"( "}; 
A_GISVEC(A68_VC ,MJABCTR,LJABCTR,2)
static A68_191   QJABCTR = {" < 0 && "}; 
A_GISVEC(A68_VC ,RJABCTR,QJABCTR,8)
static A68_45   VJABCTR = {" >= "}; 
A_GISVEC(A68_VC ,WJABCTR,VJABCTR,4)
static A68_45   AKABCTR = {") ||"}; 
A_GISVEC(A68_VC ,BKABCTR,AKABCTR,4)
static A68_189   HKABCTR = {"( "}; 
A_GISVEC(A68_VC ,IKABCTR,HKABCTR,2)
static A68_193   MKABCTR = {" == 0 ) ;"}; 
A_GISVEC(A68_VC ,NKABCTR,MKABCTR,9)
static A68_45   UKABCTR = {" += "}; 
A_GISVEC(A68_VC ,VKABCTR,UKABCTR,4)
static A68_189   ZKABCTR = {" )"}; 
A_GISVEC(A68_VC ,ALABCTR,ZKABCTR,2)
static A68_187   KLABCTR = {"for ( "}; 
A_GISVEC(A68_VC ,LLABCTR,KLABCTR,6)
static A68_183   PLABCTR = {" = "}; 
A_GISVEC(A68_VC ,QLABCTR,PLABCTR,3)
static A68_189   ULABCTR = {";;"}; 
A_GISVEC(A68_VC ,VLABCTR,ULABCTR,2)
static A68_45   CMABCTR = {" += "}; 
A_GISVEC(A68_VC ,DMABCTR,CMABCTR,4)
static A68_183   IMABCTR = {" ) "}; 
A_GISVEC(A68_VC ,JMABCTR,IMABCTR,3)
static A68_195   BNABCTR = {"for ( ;; )"}; 
A_GISVEC(A68_VC ,CNABCTR,BNABCTR,10)
static A68_189   INABCTR = {"{ "}; 
A_GISVEC(A68_VC ,JNABCTR,INABCTR,2)
static A68_186   UOABCTR = {"forall yield"}; 
A_GISVEC(A68_VC ,VOABCTR,UOABCTR,12)
static A68_202   CQABCTR = {"forall control - ref [][]x"}; 
A_GISVEC(A68_VC ,DQABCTR,CQABCTR,26)
static A68_203   HRABCTR = {"forall control - []x"}; 
A_GISVEC(A68_VC ,IRABCTR,HRABCTR,20)
static A68_204   WRABCTR = {"forall loop counter"}; 
A_GISVEC(A68_VC ,XRABCTR,WRABCTR,19)
static A68_183   DSABCTR = {" = "}; 
static A68_33   JSABCTR = {".upb -1"}; 
A_GISVEC(A68_VC ,LSABCTR,JSABCTR,7)
static A68_205   MSABCTR = {".dim[0].upb"}; 
static A68_183   NSABCTR = {" - "}; 
static A68_205   OSABCTR = {".dim[0].lwb"}; 
A_GISVEC(A68_VC ,QSABCTR,MSABCTR,11)
A_GISVEC(A68_VC ,RSABCTR,NSABCTR,3)
A_GISVEC(A68_VC ,TSABCTR,OSABCTR,11)
A_GISVEC(A68_VC ,USABCTR,DSABCTR,3)
static A68_206   FTABCTR = {"if ( "}; 
static A68_45   GTABCTR = {" != "}; 
static A68_33   JTABCTR = {".upb -1"}; 
A_GISVEC(A68_VC ,KTABCTR,JTABCTR,7)
static A68_205   LTABCTR = {".dim[0].upb"}; 
static A68_183   MTABCTR = {" - "}; 
static A68_205   NTABCTR = {".dim[0].lwb"}; 
A_GISVEC(A68_VC ,OTABCTR,LTABCTR,11)
A_GISVEC(A68_VC ,PTABCTR,MTABCTR,3)
A_GISVEC(A68_VC ,QTABCTR,NTABCTR,11)
A_GISVEC(A68_VC ,RTABCTR,FTABCTR,5)
A_GISVEC(A68_VC ,STABCTR,GTABCTR,4)
static A68_189   VTABCTR = {" )"}; 
A_GISVEC(A68_VC ,WTABCTR,VTABCTR,2)
static A68_207   CUABCTR = {"{ A_ERROR( \"mismatched bounds in FORALL; row no "}; 
static A68_206   DUABCTR = {"\"); }"}; 
A_GISVEC(A68_VC ,EUABCTR,CUABCTR,48)
A_GISVEC(A68_VC ,GUABCTR,DUABCTR,5)
static A68_183   RUABCTR = {"A_R"}; 
static A68_206   SUABCTR = {"STRIP"}; 
A_GISVEC(A68_VC ,ZUABCTR,RUABCTR,3)
A_GISVEC(A68_VC ,BVABCTR,SUABCTR,5)
static A68_183   DVABCTR = {" = "}; 
static A68_206   EVABCTR = {".data"}; 
A_GISVEC(A68_VC ,FVABCTR,DVABCTR,3)
A_GISVEC(A68_VC ,GVABCTR,EVABCTR,5)
static A68_193   PVABCTR = {".data += "}; 
static A68_209   QVABCTR = {".dim[0].stride"}; 
A_GISVEC(A68_VC ,SVABCTR,PVABCTR,9)
A_GISVEC(A68_VC ,TVABCTR,QVABCTR,14)
static A68_189   VVABCTR = {"++"}; 
A_GISVEC(A68_VC ,XVABCTR,VVABCTR,2)
static A68_45   YVABCTR = {" += "}; 
static A68_209   ZVABCTR = {".dim[0].stride"}; 
A_GISVEC(A68_VC ,AWABCTR,YVABCTR,4)
A_GISVEC(A68_VC ,BWABCTR,ZVABCTR,14)
static A68_187   MWABCTR = {"for (;"}; 
A_GISVEC(A68_VC ,NWABCTR,MWABCTR,6)
static A68_191   RWABCTR = {"-- >= 0;"}; 
A_GISVEC(A68_VC ,SWABCTR,RWABCTR,8)
static A68_183   MXABCTR = {") )"}; 
A_GISVEC(A68_VC ,NXABCTR,MXABCTR,3)
static A68_45   AYABCTR = {" = *"}; 
A_GISVEC(A68_VC ,BYABCTR,AYABCTR,4)
static A68_195   OYABCTR = {"A_ENQ_SKIP"}; 
A_GISVEC(A68_VC ,QYABCTR,OYABCTR,10)
static A68_187   UYABCTR = {"if ( !"}; 
A_GISVEC(A68_VC ,VYABCTR,UYABCTR,6)
static A68_193   ZYABCTR = {" ) break;"}; 
A_GISVEC(A68_VC ,AZABCTR,ZYABCTR,9)
A68_75  MZABCTR_od;
typedef struct   /* env of non-global proc */
{
A68_INT  DEABCTR_codestream;
A_PAD_INT(PAD_64)
} IEABCTR_evaluatetoorbypart;
typedef struct   /* env of non-global proc */
{
A68_175 * Loop;
A68_71 ** Frobytlist;
} JFABCTR_evaluatefrompart;
typedef struct   /* env of non-global proc */
{
A68_175 * Loop;
A68_71 ** Frobytlist;
A68_181  GEABCTR_evaluatetoorbypart;
} QFABCTR_setstep;
typedef struct   /* env of non-global proc */
{
A68_INT  DEABCTR_codestream;
A_PAD_INT(PAD_65)
} SMABCTR_voidresult;
typedef struct   /* env of non-global proc */
{
A68_197  Controls;
} UNABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_197  Controls;
} COABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  CPABCTR_rowname;
} GPABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  NPABCTR_controlname;
} RPABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  HQABCTR_controlname;
} LQABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  TQABCTR_controlname;
} XQABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  MRABCTR_controlname;
} QRABCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_197  Controls;
A68_123  FOABCTR_modeofrows;
A68_199  XNABCTR_rows;
} OUABCTR_initialise;
typedef struct   /* env of non-global proc */
{
A68_123  FOABCTR_modeofrows;
A68_197  Controls;
A68_199  XNABCTR_rows;
} KVABCTR_increment;

A_STATIC A68_64 * MDABCTR_assignment(A68_64 * KDABCTR_anonymous, A68_64  LDABCTR_anonymous);

A_STATIC A68_65 * RDABCTR_assignment(A68_65 * PDABCTR_anonymous, A68_65  QDABCTR_anonymous);

A68_VOID  CEABCTR_for(A68_175 * Loop, A68_INT  Frobytcount, A68_71 ** Frobytlist);

A_STATIC A68_VOID  HEABCTR_evaluatetoorbypart(A68_64 * Part, A68_BOOL  Topart, void *NonLocals);

A_STATIC A68_VOID  IFABCTR_evaluatefrompart(A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PFABCTR_setstep(void *NonLocals);

A_STATIC A68_VOID  RMABCTR_voidresult(A68_64 * Value, void *NonLocals);

A68_VOID  QNABCTR_forall(A68_197  Controls, A68_71 ** Foralllist);

A_STATIC A68_VOID  TNABCTR_generator(A68_BOOL  RNABCTR_anonymous, A68_199  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BOABCTR_generator(A68_BOOL  ZNABCTR_anonymous, A68_123  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FPABCTR_generator(A68_BOOL  DPABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QPABCTR_generator(A68_BOOL  OPABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KQABCTR_generator(A68_BOOL  IQABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WQABCTR_generator(A68_BOOL  UQABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PRABCTR_generator(A68_BOOL  NRABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NUABCTR_initialise(A68_INT  I, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JVABCTR_increment(A68_INT  I, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  KYABCTR_while(void);

A68_VOID  MYABCTR_whiledo(A68_64 * Enquiry);

A68_VOID  FZABCTR_whileod(void);

A_STATIC A68_65 * RDABCTR_assignment(A68_65 * PDABCTR_anonymous, A68_65  QDABCTR_anonymous)
{ 
A68_65  SDABCTR;  /* united object - for case conformity */
A68_VC  TDABCTR_anonymous;
A68_VC  UDABCTR;  /* OPERATORS - copy to flex */
A68_179 * VDABCTR;  /* YIELD */
A68_65 * WDABCTR;  /* clause result */
{ 
(*PDABCTR_anonymous) = QDABCTR_anonymous;
SDABCTR = QDABCTR_anonymous ;
switch ( SDABCTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
TDABCTR_anonymous = (SDABCTR.data.mode6);
VDABCTR = &(PDABCTR_anonymous-> data.mode6) ;
(*VDABCTR) = A_VCOPY(TDABCTR_anonymous,UDABCTR,A68_CHAR );
break;
default: 
/*SKIP*/;
break;
} 
WDABCTR = PDABCTR_anonymous;
} 
return( WDABCTR );
} 
#undef NL

A_STATIC A68_VOID  HEABCTR_evaluatetoorbypart(A68_64 * Part, A68_BOOL  Topart, void *NonLocals)
#define NL(x) (((IEABCTR_evaluatetoorbypart *)NonLocals)->x)
{ 
A68_BOOL  JEABCTR;  /* optbool result */
A68_VC  LEABCTR;  /* clause result */
A68_68  PEABCTR;  /* avoid structure result */
A68_68  QEABCTR_temp;
A68_184  REABCTR;  /* collateral clause result */
A68_VC  SEABCTR;  /* OPERATORS - istruct -> vector */
A68_33  TEABCTR;  /* OPERATORS - istruct -> vector */
A68_93  UEABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  VEABCTR;  /* YIELD */
A68_93  YEABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  ZEABCTR;  /* YIELD */
A68_VC  AFABCTR;  /* avoid structure result */
A68_93  BFABCTR;  /* OPERATORS - mode -> union mode */
A68_93  CFABCTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  DFABCTR;  /* YIELD */
A68_93  EFABCTR;  /* OPERATORS - mode -> union mode */
A68_92  FFABCTR;  /* OPERATORS - istruct -> vector */
A68_65  GFABCTR;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(evaluatetoorbypart);
 /* line 91: */
 /* line 92: */
{ 
A_CALLPROC(NXQACTR_evaluate,(Part),(Part,(NXQACTR_evaluate).nonlocals));
 /* line 93: */
JEABCTR = !LWPACTR_isconstant(Part);
if ( JEABCTR )
{JEABCTR = !IXPACTR_istemp(Part);
}
 /* line 94: */
 /* line 96: */
if ( (!Topart|JEABCTR) )
{ 
 /* line 97: */
 /* line 98: */
 /* line 99: */
if ( Topart )
{ 
LEABCTR = MEABCTR;
} 
else
{ 
LEABCTR = OEABCTR;
} 
LLOACTR_declarectemporary( (*(&(Part->Mode))), LEABCTR, &PEABCTR );
QEABCTR_temp = PEABCTR;
 /* line 100: */
 /* line 101: */
TEABCTR = QEABCTR_temp.Name ;
VEABCTR = A_HISVEC(SEABCTR,TEABCTR,7,A68_CHAR ) ;
REABCTR.data[0] = A_UNITE(UEABCTR,mode2,2,VEABCTR);
 /* line 102: */
ZEABCTR = XEABCTR ;
REABCTR.data[1] = A_UNITE(YEABCTR,mode2,2,ZEABCTR);
GZPACTR_getcfragment( Part, &AFABCTR );
REABCTR.data[2] = A_UNITE(BFABCTR,mode2,2,AFABCTR);
DFABCTR = ';' ;
REABCTR.data[3] = A_UNITE(CFABCTR,mode1,1,DFABCTR);
REABCTR.data[4] = A_UNITE(EFABCTR,mode4,4,EIAACTR_cnewline);
 /* line 103: */
MDMACTR_writecstream(A_HISVEC(FFABCTR,REABCTR,5,A68_93 ), NL(DEABCTR_codestream));
 /* line 104: */
 /* line 105: */
 /* line 106: */
RDABCTR_assignment((&(Part->Extra)), A_UNITE(GFABCTR,mode5,5,QEABCTR_temp));
} 
} 
A_PROC_EXIT(evaluatetoorbypart);
return;
} 
#undef NL

A_STATIC A68_VOID  IFABCTR_evaluatefrompart(A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((JFABCTR_evaluatefrompart *)NonLocals)->x)
{ 
A68_64 * KFABCTR_value;
A68_VC  LFABCTR;  /* clause result */
A68_VC  MFABCTR;  /* avoid structure result */
A68_VC  NFABCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(evaluatefrompart);
{ 
 /* line 115: */
 /* line 116: */
if ( (*(&(NL(Loop)->Frompart))) )
{ 
KFABCTR_value = (&((*NL(Frobytlist))->Value));
 /* line 117: */
(*NL(Frobytlist)) = (*(&((*NL(Frobytlist))->Rest)));
 /* line 118: */
A_CALLPROC(NXQACTR_evaluate,(KFABCTR_value),(KFABCTR_value,(NXQACTR_evaluate).nonlocals));
 /* line 119: */
 /* line 120: */
 /* line 122: */
GZPACTR_getcfragment( KFABCTR_value, &MFABCTR );
LFABCTR = MFABCTR;
} 
else
{ 
 /* line 123: */
LFABCTR = A_HVEC(NFABCTR,'1',A68_CHAR );
} 
} 
A_PROC_EXIT(evaluatefrompart);
*ReturnedValue = (LFABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  PFABCTR_setstep(void *NonLocals)
#define NL(x) (((QFABCTR_setstep *)NonLocals)->x)
{ 
A68_64 ** RFABCTR;  /* YIELD */
A68_64 ** SFABCTR;  /* YIELD */
A_PROC_ENTRY(setstep);
{ 
 /* line 135: */
 /* line 136: */
if ( (*(&(NL(Loop)->Bypart))) )
{ 
RFABCTR = (&(NL(Loop)->Step)) ;
(*RFABCTR) = (&((*NL(Frobytlist))->Value));
 /* line 137: */
(*NL(Frobytlist)) = (*(&((*NL(Frobytlist))->Rest)));
 /* line 138: */
 /* line 139: */
 /* line 140: */
A_CALLPROC(NL(GEABCTR_evaluatetoorbypart),((*(&(NL(Loop)->Step))), A68_FALSE),((*(&(NL(Loop)->Step))), A68_FALSE,(NL(GEABCTR_evaluatetoorbypart)).nonlocals));
} 
else
{ 
 /* line 141: */
 /* line 142: */
SFABCTR = (&(NL(Loop)->Step)) ;
(*SFABCTR) = YDABCTR_value1;
} 
} 
A_PROC_EXIT(setstep);
return;
} 
#undef NL

A_STATIC A68_VOID  RMABCTR_voidresult(A68_64 * Value, void *NonLocals)
#define NL(x) (((SMABCTR_voidresult *)NonLocals)->x)
{ 
A68_194  TMABCTR;  /* collateral clause result */
A68_VC  UMABCTR;  /* avoid structure result */
A68_93  VMABCTR;  /* OPERATORS - mode -> union mode */
A68_93  WMABCTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  XMABCTR;  /* YIELD */
A68_93  YMABCTR;  /* OPERATORS - mode -> union mode */
A68_92  ZMABCTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(voidresult);
 /* line 244: */
 /* line 245: */
{ 
A_CALLPROC(NXQACTR_evaluate,(Value),(Value,(NXQACTR_evaluate).nonlocals));
 /* line 246: */
 /* line 247: */
GZPACTR_getcfragment( Value, &UMABCTR );
TMABCTR.data[0] = A_UNITE(VMABCTR,mode2,2,UMABCTR);
XMABCTR = ';' ;
TMABCTR.data[1] = A_UNITE(WMABCTR,mode1,1,XMABCTR);
TMABCTR.data[2] = A_UNITE(YMABCTR,mode4,4,EIAACTR_cnewline);
 /* line 248: */
 /* line 249: */
MDMACTR_writecstream(A_HISVEC(ZMABCTR,TMABCTR,3,A68_93 ), NL(DEABCTR_codestream));
} 
A_PROC_EXIT(voidresult);
return;
} 
#undef NL

A_STATIC A68_VOID  TNABCTR_generator(A68_BOOL  RNABCTR_anonymous, A68_199  *ReturnedValue, void *NonLocals)
#define NL(x) (((UNABCTR_generator *)NonLocals)->x)
{ 
A68_199  VNABCTR;  /* clause result */
A68_199  WNABCTR;  /* OPERATORS - dynamic generator */
{ 
WNABCTR.upb = NL(Controls).upb ;
( RNABCTR_anonymous? A_VLOC(A68_VC ,WNABCTR): A_VHEAP(A68_VC ,WNABCTR) );
VNABCTR = WNABCTR;
} 
*ReturnedValue = (VNABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  BOABCTR_generator(A68_BOOL  ZNABCTR_anonymous, A68_123  *ReturnedValue, void *NonLocals)
#define NL(x) (((COABCTR_generator *)NonLocals)->x)
{ 
A68_123  DOABCTR;  /* clause result */
A68_123  EOABCTR;  /* OPERATORS - dynamic generator */
{ 
EOABCTR.upb = NL(Controls).upb ;
( ZNABCTR_anonymous? A_VLOC(A68_INT ,EOABCTR): A_VHEAP(A68_INT ,EOABCTR) );
DOABCTR = EOABCTR;
} 
*ReturnedValue = (DOABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  FPABCTR_generator(A68_BOOL  DPABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((GPABCTR_generator *)NonLocals)->x)
{ 
A68_VC  HPABCTR;  /* clause result */
A68_VC  IPABCTR;  /* OPERATORS - dynamic generator */
{ 
IPABCTR.upb = NL(CPABCTR_rowname).upb ;
( DPABCTR_anonymous? A_VLOC(A68_CHAR ,IPABCTR): A_VHEAP(A68_CHAR ,IPABCTR) );
HPABCTR = IPABCTR;
} 
*ReturnedValue = (HPABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  QPABCTR_generator(A68_BOOL  OPABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((RPABCTR_generator *)NonLocals)->x)
{ 
A68_VC  SPABCTR;  /* clause result */
A68_VC  TPABCTR;  /* OPERATORS - dynamic generator */
{ 
TPABCTR.upb = NL(NPABCTR_controlname).upb ;
( OPABCTR_anonymous? A_VLOC(A68_CHAR ,TPABCTR): A_VHEAP(A68_CHAR ,TPABCTR) );
SPABCTR = TPABCTR;
} 
*ReturnedValue = (SPABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  KQABCTR_generator(A68_BOOL  IQABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((LQABCTR_generator *)NonLocals)->x)
{ 
A68_VC  MQABCTR;  /* clause result */
A68_VC  NQABCTR;  /* OPERATORS - dynamic generator */
{ 
NQABCTR.upb = NL(HQABCTR_controlname).upb ;
( IQABCTR_anonymous? A_VLOC(A68_CHAR ,NQABCTR): A_VHEAP(A68_CHAR ,NQABCTR) );
MQABCTR = NQABCTR;
} 
*ReturnedValue = (MQABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  WQABCTR_generator(A68_BOOL  UQABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((XQABCTR_generator *)NonLocals)->x)
{ 
A68_VC  YQABCTR;  /* clause result */
A68_VC  ZQABCTR;  /* OPERATORS - dynamic generator */
{ 
ZQABCTR.upb = NL(TQABCTR_controlname).upb ;
( UQABCTR_anonymous? A_VLOC(A68_CHAR ,ZQABCTR): A_VHEAP(A68_CHAR ,ZQABCTR) );
YQABCTR = ZQABCTR;
} 
*ReturnedValue = (YQABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  PRABCTR_generator(A68_BOOL  NRABCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((QRABCTR_generator *)NonLocals)->x)
{ 
A68_VC  RRABCTR;  /* clause result */
A68_VC  SRABCTR;  /* OPERATORS - dynamic generator */
{ 
SRABCTR.upb = NL(MRABCTR_controlname).upb ;
( NRABCTR_anonymous? A_VLOC(A68_CHAR ,SRABCTR): A_VHEAP(A68_CHAR ,SRABCTR) );
RRABCTR = SRABCTR;
} 
*ReturnedValue = (RRABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  NUABCTR_initialise(A68_INT  I, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((OUABCTR_initialise *)NonLocals)->x)
{ 
A68_VC  PUABCTR_ctrl;
A68_BOOL  QUABCTR;  /* clause result */
A68_208  TUABCTR;  /* collateral clause result */
A68_162  UUABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  VUABCTR;  /* YIELD */
A68_162  WUABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  XUABCTR;  /* clause result */
A68_165  YUABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  AVABCTR;  /* avoid structure result */
A68_VC  CVABCTR;  /* avoid structure result */
A_PROC_ENTRY(initialise);
 /* line 442: */
{ 
PUABCTR_ctrl = (*(&((&A_VINDEX(NL(Controls),I))->Control)));
 /* line 443: */
 /* line 444: */
 /* line 445: */
QUABCTR = (ARMACTR_isarray((*(&A_VINDEX(NL(FOABCTR_modeofrows),I))))&(QVMACTR_dimensions((*(&A_VINDEX(NL(FOABCTR_modeofrows),I))))>1));
if ( QUABCTR )
{ 
 /* line 446: */
VUABCTR = (*(&A_VINDEX(NL(XNABCTR_rows),I))) ;
TUABCTR.data[0] = A_UNITE(UUABCTR,mode2,2,VUABCTR);
 /* line 447: */
TUABCTR.data[1] = A_UNITE(WUABCTR,mode2,2,PUABCTR_ctrl);
 /* line 448: */
ROAAOSF_whole( QVMACTR_dimensions((*(&A_VINDEX(NL(FOABCTR_modeofrows),I)))), 0, &AVABCTR );
EOQACTR_usemacro( A_VC_PLUS(A_VC_PLUS(ZUABCTR,AVABCTR),BVABCTR), A_HISVEC(YUABCTR,TUABCTR,2,A68_162 ), &CVABCTR );
XUABCTR = CVABCTR;
} 
else
{ 
 /* line 449: */
XUABCTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(PUABCTR_ctrl,FVABCTR),(*(&A_VINDEX(NL(XNABCTR_rows),I)))),GVABCTR);
} 
} 
A_PROC_EXIT(initialise);
*ReturnedValue = (XUABCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  JVABCTR_increment(A68_INT  I, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((KVABCTR_increment *)NonLocals)->x)
{ 
A68_INT  LVABCTR_origmde;
A68_VC  MVABCTR_ctrl;
A68_BOOL  NVABCTR;  /* optbool result */
A68_BOOL  OVABCTR;  /* clause result */
A68_VC  RVABCTR;  /* clause result */
A68_BOOL  UVABCTR;  /* optbool result */
A68_VC  WVABCTR;  /* clause result */
A_PROC_ENTRY(increment);
 /* line 452: */
{ 
LVABCTR_origmde = (*(&A_VINDEX(NL(FOABCTR_modeofrows),I)));
 /* line 453: */
MVABCTR_ctrl = (*(&((&A_VINDEX(NL(Controls),I))->Control)));
 /* line 454: */
 /* line 455: */
NVABCTR = ARMACTR_isarray(LVABCTR_origmde);
if ( NVABCTR )
{ /* line 456: */
NVABCTR = (QVMACTR_dimensions(LVABCTR_origmde)>1);
}
OVABCTR = NVABCTR;
if ( OVABCTR )
{ 
 /* line 457: */
RVABCTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(MVABCTR_ctrl,SVABCTR),(*(&A_VINDEX(NL(XNABCTR_rows),I)))),TVABCTR);
} 
else
{ 
UVABCTR = QQMACTR_isvector(LVABCTR_origmde);
if ( ! UVABCTR )
{ /* line 458: */
UVABCTR = XRMACTR_isistruct(LVABCTR_origmde);
}
 /* line 459: */
if ( UVABCTR )
{ 
WVABCTR = XVABCTR;
} 
else
{ 
 /* line 460: */
 /* line 461: */
WVABCTR = A_VC_PLUS(A_VC_PLUS(AWABCTR,(*(&A_VINDEX(NL(XNABCTR_rows),I)))),BWABCTR);
} 
RVABCTR = A_VC_PLUS(MVABCTR_ctrl,WVABCTR);
} 
} 
A_PROC_EXIT(increment);
*ReturnedValue = (RVABCTR);
return;
} 
#undef NL

A_STATIC A68_64 * MDABCTR_assignment(A68_64 * KDABCTR_anonymous, A68_64  LDABCTR_anonymous)
{ 
A68_INT * NDABCTR;  /* YIELD */
A68_BITS * ODABCTR;  /* YIELD */
A68_64 * XDABCTR;  /* clause result */
{ 
NDABCTR = (&(KDABCTR_anonymous->Mode)) ;
(*NDABCTR) = LDABCTR_anonymous.Mode;
ODABCTR = (&(KDABCTR_anonymous->Info)) ;
(*ODABCTR) = LDABCTR_anonymous.Info;
RDABCTR_assignment((&(KDABCTR_anonymous->Extra)), LDABCTR_anonymous.Extra);
XDABCTR = KDABCTR_anonymous;
} 
return( XDABCTR );
} 
#undef NL
 /* line 71: */
 /* line 73: */

A68_VOID  CEABCTR_for(A68_175 * Loop, A68_INT  Frobytcount, A68_71 ** Frobytlist)
{ 
A68_INT  DEABCTR_codestream;
A68_181  GEABCTR_evaluatetoorbypart;   /* proc value of non-global proc */
A68_185  HFABCTR_evaluatefrompart;   /* proc value of non-global proc */
A68_75  OFABCTR_setstep;   /* proc value of non-global proc */
A68_64 * TFABCTR_value;
A68_VC  UFABCTR;  /* avoid structure result */
A68_VC  VFABCTR_end;
A68_VC  WFABCTR;  /* avoid structure result */
A68_VC  XFABCTR_from;
A68_VC  YFABCTR;  /* clause result */
A68_VC  ZFABCTR;  /* avoid structure result */
A68_68  CGABCTR;  /* avoid structure result */
A68_VC  DGABCTR;  /* OPERATORS - istruct -> vector */
A68_33  EGABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  FGABCTR_loopcounter;
A68_188  GGABCTR;  /* collateral clause result */
A68_93  JGABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  KGABCTR;  /* YIELD */
A68_93  LGABCTR;  /* OPERATORS - mode -> union mode */
A68_93  OGABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  PGABCTR;  /* YIELD */
A68_93  QGABCTR;  /* OPERATORS - mode -> union mode */
A68_93  RGABCTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  SGABCTR;  /* YIELD */
A68_93  TGABCTR;  /* OPERATORS - mode -> union mode */
A68_92  UGABCTR;  /* OPERATORS - istruct -> vector */
A68_LINT  VGABCTR_constantstep;
A68_190  WGABCTR;  /* collateral clause result */
A68_93  XGABCTR;  /* OPERATORS - mode -> union mode */
A68_93  AHABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  BHABCTR;  /* YIELD */
A68_93  CHABCTR;  /* OPERATORS - mode -> union mode */
A68_93  DHABCTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  EHABCTR;  /* YIELD */
A68_92  FHABCTR;  /* clause result */
A68_92  GHABCTR;  /* OPERATORS - istruct -> vector */
A68_190  HHABCTR;  /* collateral clause result */
A68_93  IHABCTR;  /* OPERATORS - mode -> union mode */
A68_93  LHABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  MHABCTR;  /* YIELD */
A68_93  NHABCTR;  /* OPERATORS - mode -> union mode */
A68_93  OHABCTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  PHABCTR;  /* YIELD */
A68_92  QHABCTR;  /* OPERATORS - istruct -> vector */
A68_93  THABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  UHABCTR;  /* YIELD */
A68_92  VHABCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_93  WHABCTR;  /* OPERATORS - mode -> union mode */
A68_92  XHABCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_184  YHABCTR;  /* collateral clause result */
A68_93  ZHABCTR;  /* OPERATORS - mode -> union mode */
A68_93  CIABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  DIABCTR;  /* YIELD */
A68_VC  EIABCTR;  /* avoid structure result */
A68_93  FIABCTR;  /* OPERATORS - mode -> union mode */
A68_93  IIABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  JIABCTR;  /* YIELD */
A68_93  KIABCTR;  /* OPERATORS - mode -> union mode */
A68_92  LIABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  MIABCTR;  /* avoid structure result */
A68_VC  NIABCTR_step;
A68_192  OIABCTR;  /* collateral clause result */
A68_93  RIABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  SIABCTR;  /* YIELD */
A68_93  TIABCTR;  /* OPERATORS - mode -> union mode */
A68_93  WIABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  XIABCTR;  /* YIELD */
A68_93  YIABCTR;  /* OPERATORS - mode -> union mode */
A68_93  BJABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  CJABCTR;  /* YIELD */
A68_93  DJABCTR;  /* OPERATORS - mode -> union mode */
A68_93  GJABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  HJABCTR;  /* YIELD */
A68_93  IJABCTR;  /* OPERATORS - mode -> union mode */
A68_92  JJABCTR;  /* OPERATORS - istruct -> vector */
A68_192  KJABCTR;  /* collateral clause result */
A68_93  NJABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  OJABCTR;  /* YIELD */
A68_93  PJABCTR;  /* OPERATORS - mode -> union mode */
A68_93  SJABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  TJABCTR;  /* YIELD */
A68_93  UJABCTR;  /* OPERATORS - mode -> union mode */
A68_93  XJABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  YJABCTR;  /* YIELD */
A68_93  ZJABCTR;  /* OPERATORS - mode -> union mode */
A68_93  CKABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  DKABCTR;  /* YIELD */
A68_93  EKABCTR;  /* OPERATORS - mode -> union mode */
A68_92  FKABCTR;  /* OPERATORS - istruct -> vector */
A68_190  GKABCTR;  /* collateral clause result */
A68_93  JKABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  KKABCTR;  /* YIELD */
A68_93  LKABCTR;  /* OPERATORS - mode -> union mode */
A68_93  OKABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  PKABCTR;  /* YIELD */
A68_93  QKABCTR;  /* OPERATORS - mode -> union mode */
A68_92  RKABCTR;  /* OPERATORS - istruct -> vector */
A68_184  SKABCTR;  /* collateral clause result */
A68_93  TKABCTR;  /* OPERATORS - mode -> union mode */
A68_93  WKABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  XKABCTR;  /* YIELD */
A68_93  YKABCTR;  /* OPERATORS - mode -> union mode */
A68_93  BLABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  CLABCTR;  /* YIELD */
A68_93  DLABCTR;  /* OPERATORS - mode -> union mode */
A68_92  ELABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  FLABCTR;  /* avoid structure result */
A68_VC  GLABCTR_from;
A68_VC  HLABCTR;  /* avoid structure result */
A68_VC  ILABCTR_loopcounter;
A68_188  JLABCTR;  /* collateral clause result */
A68_93  MLABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  NLABCTR;  /* YIELD */
A68_93  OLABCTR;  /* OPERATORS - mode -> union mode */
A68_93  RLABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  SLABCTR;  /* YIELD */
A68_93  TLABCTR;  /* OPERATORS - mode -> union mode */
A68_93  WLABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  XLABCTR;  /* YIELD */
A68_93  YLABCTR;  /* OPERATORS - mode -> union mode */
A68_92  ZLABCTR;  /* OPERATORS - istruct -> vector */
A68_184  AMABCTR;  /* collateral clause result */
A68_93  BMABCTR;  /* OPERATORS - mode -> union mode */
A68_93  EMABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  FMABCTR;  /* YIELD */
A68_VC  GMABCTR;  /* avoid structure result */
A68_93  HMABCTR;  /* OPERATORS - mode -> union mode */
A68_93  KMABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  LMABCTR;  /* YIELD */
A68_93  MMABCTR;  /* OPERATORS - mode -> union mode */
A68_92  NMABCTR;  /* OPERATORS - istruct -> vector */
A68_74  QMABCTR_voidresult;   /* proc value of non-global proc */
A68_196  ANABCTR;  /* collateral clause result */
A68_93  DNABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  ENABCTR;  /* YIELD */
A68_93  FNABCTR;  /* OPERATORS - mode -> union mode */
A68_92  GNABCTR;  /* OPERATORS - istruct -> vector */
A68_196  HNABCTR;  /* collateral clause result */
A68_93  KNABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  LNABCTR;  /* YIELD */
A68_93  MNABCTR;  /* OPERATORS - mode -> union mode */
A68_92  NNABCTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(for);
 /* line 81: */
 /* line 82: */
{ 
DEABCTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 84: */
A_CLOSURE( GEABCTR_evaluatetoorbypart, HEABCTR_evaluatetoorbypart, IEABCTR_evaluatetoorbypart );
(( IEABCTR_evaluatetoorbypart * ) ( GEABCTR_evaluatetoorbypart.nonlocals )) -> DEABCTR_codestream = DEABCTR_codestream;
 /* line 108: */
 /* line 113: */
 /* line 114: */
A_CLOSURE( HFABCTR_evaluatefrompart, IFABCTR_evaluatefrompart, JFABCTR_evaluatefrompart );
(( JFABCTR_evaluatefrompart * ) ( HFABCTR_evaluatefrompart.nonlocals )) -> Loop = Loop;
(( JFABCTR_evaluatefrompart * ) ( HFABCTR_evaluatefrompart.nonlocals )) -> Frobytlist = Frobytlist;
 /* line 125: */
 /* line 133: */
 /* line 134: */
A_CLOSURE( OFABCTR_setstep, PFABCTR_setstep, QFABCTR_setstep );
(( QFABCTR_setstep * ) ( OFABCTR_setstep.nonlocals )) -> Loop = Loop;
(( QFABCTR_setstep * ) ( OFABCTR_setstep.nonlocals )) -> Frobytlist = Frobytlist;
(( QFABCTR_setstep * ) ( OFABCTR_setstep.nonlocals )) -> GEABCTR_evaluatetoorbypart = GEABCTR_evaluatetoorbypart;
 /* line 146: */
 /* line 147: */
 /* line 159: */
if ( (*(&(Loop->Topart))) )
{ 
TFABCTR_value = (&((*Frobytlist)->Value));
 /* line 160: */
(*Frobytlist) = (*(&((*Frobytlist)->Rest)));
 /* line 161: */
A_CALLPROC(GEABCTR_evaluatetoorbypart,(TFABCTR_value, A68_TRUE),(TFABCTR_value, A68_TRUE,(GEABCTR_evaluatetoorbypart).nonlocals));
 /* line 162: */
GZPACTR_getcfragment( TFABCTR_value, &UFABCTR );
VFABCTR_end = UFABCTR;
 /* line 164: */
A_CALLPROC(OFABCTR_setstep,(),((OFABCTR_setstep).nonlocals));
 /* line 166: */
A_CALLPROC(HFABCTR_evaluatefrompart,( &WFABCTR),( &WFABCTR,(HFABCTR_evaluatefrompart).nonlocals));
XFABCTR_from = WFABCTR;
 /* line 168: */
 /* line 169: */
 /* line 170: */
 /* line 172: */
if ( (*(&(Loop->Forpart))) )
{ 
 /* line 174: */
GZPACTR_getcfragment( (*(&(Loop->Control))), &ZFABCTR );
YFABCTR = ZFABCTR;
} 
else
{ 
 /* line 175: */
 /* line 176: */
LLOACTR_declarectemporary( EFAACTR_intmode, BGABCTR, &CGABCTR );
EGABCTR = CGABCTR.Name ;
YFABCTR = A_HISVEC(DGABCTR,EGABCTR,7,A68_CHAR );
} 
FGABCTR_loopcounter = YFABCTR;
 /* line 178: */
 /* line 179: */
KGABCTR = IGABCTR ;
GGABCTR.data[0] = A_UNITE(JGABCTR,mode2,2,KGABCTR);
GGABCTR.data[1] = A_UNITE(LGABCTR,mode2,2,FGABCTR_loopcounter);
PGABCTR = NGABCTR ;
GGABCTR.data[2] = A_UNITE(OGABCTR,mode2,2,PGABCTR);
GGABCTR.data[3] = A_UNITE(QGABCTR,mode2,2,XFABCTR_from);
SGABCTR = ';' ;
GGABCTR.data[4] = A_UNITE(RGABCTR,mode1,1,SGABCTR);
GGABCTR.data[5] = A_UNITE(TGABCTR,mode4,4,EIAACTR_cnewline);
 /* line 180: */
MDMACTR_writecstream(A_HISVEC(UGABCTR,GGABCTR,6,A68_93 ), DEABCTR_codestream);
 /* line 181: */
 /* line 182: */
 /* line 184: */
if ( LWPACTR_isconstant((*(&(Loop->Step)))) )
{ 
VGABCTR_constantstep = (A68_LINT )ZXPACTR_getconstant((*(&(Loop->Step))));
 /* line 185: */
 /* line 186: */
 /* line 187: */
if ( (VGABCTR_constantstep>0) )
{ 
WGABCTR.data[0] = A_UNITE(XGABCTR,mode2,2,FGABCTR_loopcounter);
BHABCTR = ZGABCTR ;
WGABCTR.data[1] = A_UNITE(AHABCTR,mode2,2,BHABCTR);
WGABCTR.data[2] = A_UNITE(CHABCTR,mode2,2,VFABCTR_end);
 /* line 188: */
EHABCTR = ';' ;
WGABCTR.data[3] = A_UNITE(DHABCTR,mode1,1,EHABCTR);
FHABCTR = A_HISVEC(GHABCTR,WGABCTR,4,A68_93 );
} 
else
{ 
 /* line 189: */
if ( (VGABCTR_constantstep<0) )
{ 
HHABCTR.data[0] = A_UNITE(IHABCTR,mode2,2,FGABCTR_loopcounter);
MHABCTR = KHABCTR ;
HHABCTR.data[1] = A_UNITE(LHABCTR,mode2,2,MHABCTR);
HHABCTR.data[2] = A_UNITE(NHABCTR,mode2,2,VFABCTR_end);
 /* line 190: */
 /* line 191: */
PHABCTR = ';' ;
HHABCTR.data[3] = A_UNITE(OHABCTR,mode1,1,PHABCTR);
FHABCTR = A_HISVEC(QHABCTR,HHABCTR,4,A68_93 );
} 
else
{ 
UHABCTR = SHABCTR ;
FHABCTR = A_HVEC(VHABCTR,A_UNITE(THABCTR,mode2,2,UHABCTR),A68_93 );
} 
} 
 /* line 192: */
MDMACTR_writecstream(FHABCTR, DEABCTR_codestream);
 /* line 193: */
MDMACTR_writecstream(A_HVEC(XHABCTR,A_UNITE(WHABCTR,mode4,4,EIAACTR_cnewline),A68_93 ), DEABCTR_codestream);
 /* line 194: */
 /* line 195: */
YHABCTR.data[0] = A_UNITE(ZHABCTR,mode2,2,FGABCTR_loopcounter);
DIABCTR = BIABCTR ;
YHABCTR.data[1] = A_UNITE(CIABCTR,mode2,2,DIABCTR);
GZPACTR_getcfragment( (*(&(Loop->Step))), &EIABCTR );
YHABCTR.data[2] = A_UNITE(FIABCTR,mode2,2,EIABCTR);
 /* line 196: */
JIABCTR = HIABCTR ;
YHABCTR.data[3] = A_UNITE(IIABCTR,mode2,2,JIABCTR);
YHABCTR.data[4] = A_UNITE(KIABCTR,mode4,4,EIAACTR_cnewline);
 /* line 197: */
 /* line 198: */
MDMACTR_writecstream(A_HISVEC(LIABCTR,YHABCTR,5,A68_93 ), DEABCTR_codestream);
} 
else
{ 
GZPACTR_getcfragment( (*(&(Loop->Step))), &MIABCTR );
NIABCTR_step = MIABCTR;
 /* line 199: */
 /* line 200: */
SIABCTR = QIABCTR ;
OIABCTR.data[0] = A_UNITE(RIABCTR,mode2,2,SIABCTR);
OIABCTR.data[1] = A_UNITE(TIABCTR,mode2,2,NIABCTR_step);
 /* line 201: */
XIABCTR = VIABCTR ;
OIABCTR.data[2] = A_UNITE(WIABCTR,mode2,2,XIABCTR);
OIABCTR.data[3] = A_UNITE(YIABCTR,mode2,2,FGABCTR_loopcounter);
CJABCTR = AJABCTR ;
OIABCTR.data[4] = A_UNITE(BJABCTR,mode2,2,CJABCTR);
OIABCTR.data[5] = A_UNITE(DJABCTR,mode2,2,VFABCTR_end);
 /* line 202: */
HJABCTR = FJABCTR ;
OIABCTR.data[6] = A_UNITE(GJABCTR,mode2,2,HJABCTR);
OIABCTR.data[7] = A_UNITE(IJABCTR,mode4,4,EIAACTR_cnewline);
 /* line 203: */
MDMACTR_writecstream(A_HISVEC(JJABCTR,OIABCTR,8,A68_93 ), DEABCTR_codestream);
 /* line 204: */
 /* line 205: */
OJABCTR = MJABCTR ;
KJABCTR.data[0] = A_UNITE(NJABCTR,mode2,2,OJABCTR);
KJABCTR.data[1] = A_UNITE(PJABCTR,mode2,2,NIABCTR_step);
 /* line 206: */
TJABCTR = RJABCTR ;
KJABCTR.data[2] = A_UNITE(SJABCTR,mode2,2,TJABCTR);
KJABCTR.data[3] = A_UNITE(UJABCTR,mode2,2,FGABCTR_loopcounter);
YJABCTR = WJABCTR ;
KJABCTR.data[4] = A_UNITE(XJABCTR,mode2,2,YJABCTR);
KJABCTR.data[5] = A_UNITE(ZJABCTR,mode2,2,VFABCTR_end);
 /* line 207: */
DKABCTR = BKABCTR ;
KJABCTR.data[6] = A_UNITE(CKABCTR,mode2,2,DKABCTR);
KJABCTR.data[7] = A_UNITE(EKABCTR,mode4,4,EIAACTR_cnewline);
 /* line 208: */
MDMACTR_writecstream(A_HISVEC(FKABCTR,KJABCTR,8,A68_93 ), DEABCTR_codestream);
 /* line 209: */
 /* line 210: */
KKABCTR = IKABCTR ;
GKABCTR.data[0] = A_UNITE(JKABCTR,mode2,2,KKABCTR);
GKABCTR.data[1] = A_UNITE(LKABCTR,mode2,2,NIABCTR_step);
PKABCTR = NKABCTR ;
GKABCTR.data[2] = A_UNITE(OKABCTR,mode2,2,PKABCTR);
GKABCTR.data[3] = A_UNITE(QKABCTR,mode4,4,EIAACTR_cnewline);
 /* line 211: */
MDMACTR_writecstream(A_HISVEC(RKABCTR,GKABCTR,4,A68_93 ), DEABCTR_codestream);
 /* line 212: */
 /* line 213: */
SKABCTR.data[0] = A_UNITE(TKABCTR,mode2,2,FGABCTR_loopcounter);
XKABCTR = VKABCTR ;
SKABCTR.data[1] = A_UNITE(WKABCTR,mode2,2,XKABCTR);
SKABCTR.data[2] = A_UNITE(YKABCTR,mode2,2,NIABCTR_step);
CLABCTR = ALABCTR ;
SKABCTR.data[3] = A_UNITE(BLABCTR,mode2,2,CLABCTR);
SKABCTR.data[4] = A_UNITE(DLABCTR,mode4,4,EIAACTR_cnewline);
 /* line 214: */
 /* line 215: */
 /* line 216: */
 /* line 220: */
MDMACTR_writecstream(A_HISVEC(ELABCTR,SKABCTR,5,A68_93 ), DEABCTR_codestream);
} 
} 
else
{ 
 /* line 221: */
 /* line 227: */
if ( (*(&(Loop->Forpart))) )
{ 
A_CALLPROC(OFABCTR_setstep,(),((OFABCTR_setstep).nonlocals));
 /* line 228: */
A_CALLPROC(HFABCTR_evaluatefrompart,( &FLABCTR),( &FLABCTR,(HFABCTR_evaluatefrompart).nonlocals));
GLABCTR_from = FLABCTR;
 /* line 229: */
GZPACTR_getcfragment( (*(&(Loop->Control))), &HLABCTR );
ILABCTR_loopcounter = HLABCTR;
 /* line 230: */
 /* line 231: */
NLABCTR = LLABCTR ;
JLABCTR.data[0] = A_UNITE(MLABCTR,mode2,2,NLABCTR);
JLABCTR.data[1] = A_UNITE(OLABCTR,mode2,2,ILABCTR_loopcounter);
SLABCTR = QLABCTR ;
JLABCTR.data[2] = A_UNITE(RLABCTR,mode2,2,SLABCTR);
JLABCTR.data[3] = A_UNITE(TLABCTR,mode2,2,GLABCTR_from);
XLABCTR = VLABCTR ;
JLABCTR.data[4] = A_UNITE(WLABCTR,mode2,2,XLABCTR);
JLABCTR.data[5] = A_UNITE(YLABCTR,mode4,4,EIAACTR_cnewline);
 /* line 232: */
MDMACTR_writecstream(A_HISVEC(ZLABCTR,JLABCTR,6,A68_93 ), DEABCTR_codestream);
 /* line 233: */
 /* line 234: */
AMABCTR.data[0] = A_UNITE(BMABCTR,mode2,2,ILABCTR_loopcounter);
 /* line 235: */
FMABCTR = DMABCTR ;
AMABCTR.data[1] = A_UNITE(EMABCTR,mode2,2,FMABCTR);
GZPACTR_getcfragment( (*(&(Loop->Step))), &GMABCTR );
AMABCTR.data[2] = A_UNITE(HMABCTR,mode2,2,GMABCTR);
LMABCTR = JMABCTR ;
AMABCTR.data[3] = A_UNITE(KMABCTR,mode2,2,LMABCTR);
AMABCTR.data[4] = A_UNITE(MMABCTR,mode4,4,EIAACTR_cnewline);
 /* line 236: */
 /* line 237: */
 /* line 238: */
MDMACTR_writecstream(A_HISVEC(NMABCTR,AMABCTR,5,A68_93 ), DEABCTR_codestream);
} 
else
{ 
A_CLOSURE( QMABCTR_voidresult, RMABCTR_voidresult, SMABCTR_voidresult );
(( SMABCTR_voidresult * ) ( QMABCTR_voidresult.nonlocals )) -> DEABCTR_codestream = DEABCTR_codestream;
 /* line 257: */
 /* line 258: */
 /* line 259: */
if ( (Frobytcount>0) )
{ 
A_CALLPROC(QMABCTR_voidresult,((&((*Frobytlist)->Value))),((&((*Frobytlist)->Value)),(QMABCTR_voidresult).nonlocals));
 /* line 260: */
 /* line 261: */
 /* line 262: */
if ( (Frobytcount>1) )
{ 
 /* line 263: */
 /* line 264: */
A_CALLPROC(QMABCTR_voidresult,((&((*(&((*Frobytlist)->Rest)))->Value))),((&((*(&((*Frobytlist)->Rest)))->Value)),(QMABCTR_voidresult).nonlocals));
} 
} 
 /* line 266: */
ENABCTR = CNABCTR ;
ANABCTR.data[0] = A_UNITE(DNABCTR,mode2,2,ENABCTR);
ANABCTR.data[1] = A_UNITE(FNABCTR,mode4,4,EIAACTR_cnewline);
 /* line 267: */
 /* line 268: */
MDMACTR_writecstream(A_HISVEC(GNABCTR,ANABCTR,2,A68_93 ), DEABCTR_codestream);
} 
} 
 /* line 270: */
LNABCTR = JNABCTR ;
HNABCTR.data[0] = A_UNITE(KNABCTR,mode2,2,LNABCTR);
HNABCTR.data[1] = A_UNITE(MNABCTR,mode4,4,EIAACTR_cnewline);
 /* line 271: */
MDMACTR_writecstream(A_HISVEC(NNABCTR,HNABCTR,2,A68_93 ), DEABCTR_codestream);
} 
A_PROC_EXIT(for);
return;
} 
#undef NL
 /* line 276: */

A68_VOID  QNABCTR_forall(A68_197  Controls, A68_71 ** Foralllist)
{ 
A68_200  SNABCTR_generator;   /* proc value of non-global proc */
A68_199  YNABCTR;  /* avoid structure result */
A68_199  XNABCTR_rows;
A68_201  AOABCTR_generator;   /* proc value of non-global proc */
A68_123  GOABCTR;  /* avoid structure result */
A68_123  FOABCTR_modeofrows;
A68_INT  HOABCTR_codestream;
A68_INT * IOABCTR_modeofrow;
A68_176 * JOABCTR_control;
A68_VC * KOABCTR_row;
A68_INT  LOABCTR;  /* forall loop counter */
A68_64 * MOABCTR_rowvalue;
A68_INT  NOABCTR_elemmode;
A68_BOOL  OOABCTR;  /* optbool result */
A68_VC  POABCTR;  /* clause result */
A68_VC  QOABCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ROABCTR;  /* avoid structure result */
A68_VC  SOABCTR;  /* avoid structure result */
A68_VC  TOABCTR;  /* avoid structure result */
A68_64 * WOABCTR_temp;
A68_BOOL  XOABCTR;  /* optbool result */
A68_VC  YOABCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ZOABCTR;  /* avoid structure result */
A68_VC  APABCTR;  /* avoid structure result */
A68_VC  BPABCTR;  /* avoid structure result */
A68_VC  CPABCTR_rowname;
A68_31  EPABCTR_generator;   /* proc value of non-global proc */
A68_VC  JPABCTR;  /* avoid structure result */
A68_BOOL  KPABCTR_originalhasrefs;
A68_BOOL * LPABCTR;  /* YIELD */
A68_VC  MPABCTR;  /* avoid structure result */
A68_VC  NPABCTR_controlname;
A68_31  PPABCTR_generator;   /* proc value of non-global proc */
A68_VC  UPABCTR;  /* clause result */
A68_VC  VPABCTR;  /* avoid structure result */
A68_VC * WPABCTR;  /* YIELD */
A68_INT  XPABCTR_forallmode;
A68_BOOL  YPABCTR;  /* optbool result */
A68_BOOL  ZPABCTR;  /* optbool result */
A68_INT  AQABCTR_controlmode;
A68_BOOL * BQABCTR;  /* YIELD */
A68_68  EQABCTR;  /* avoid structure result */
A68_VC  FQABCTR;  /* OPERATORS - istruct -> vector */
A68_33  GQABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  HQABCTR_controlname;
A68_31  JQABCTR_generator;   /* proc value of non-global proc */
A68_VC  OQABCTR;  /* clause result */
A68_VC  PQABCTR;  /* avoid structure result */
A68_VC * QQABCTR;  /* YIELD */
A68_BOOL * RQABCTR;  /* YIELD */
A68_VC  SQABCTR;  /* avoid structure result */
A68_VC  TQABCTR_controlname;
A68_31  VQABCTR_generator;   /* proc value of non-global proc */
A68_VC  ARABCTR;  /* clause result */
A68_VC  BRABCTR;  /* avoid structure result */
A68_VC * CRABCTR;  /* YIELD */
A68_BOOL  DRABCTR;  /* optbool result */
A68_INT  ERABCTR;  /* clause result */
A68_INT  FRABCTR_controlmode;
A68_BOOL * GRABCTR;  /* YIELD */
A68_68  JRABCTR;  /* avoid structure result */
A68_VC  KRABCTR;  /* OPERATORS - istruct -> vector */
A68_33  LRABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  MRABCTR_controlname;
A68_31  ORABCTR_generator;   /* proc value of non-global proc */
A68_VC  TRABCTR;  /* clause result */
A68_VC  URABCTR;  /* avoid structure result */
A68_VC * VRABCTR;  /* YIELD */
A68_68  YRABCTR;  /* avoid structure result */
A68_VC  ZRABCTR;  /* OPERATORS - istruct -> vector */
A68_33  ASABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  BSABCTR_loopcounter;
A68_194  CSABCTR;  /* collateral clause result */
A68_INT  ESABCTR;  /* YIELD */
A68_VC  FSABCTR;  /* clause result */
A68_INT  GSABCTR;  /* YIELD */
A68_VC  HSABCTR;  /* avoid structure result */
A68_INT  ISABCTR;  /* YIELD */
A68_INT  KSABCTR;  /* YIELD */
A68_INT  PSABCTR;  /* YIELD */
A68_INT  SSABCTR;  /* YIELD */
A68_93  VSABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  WSABCTR;  /* YIELD */
A68_93  XSABCTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  YSABCTR;  /* YIELD */
A68_93  ZSABCTR;  /* OPERATORS - mode -> union mode */
A68_92  ATABCTR;  /* OPERATORS - istruct -> vector */
A68_INT  BTABCTR_i;
A68_INT  CTABCTR;  /* to part of loop */
A68_VC  DTABCTR_row;
A68_194  ETABCTR;  /* collateral clause result */
A68_VC  HTABCTR;  /* clause result */
A68_VC  ITABCTR;  /* avoid structure result */
A68_93  TTABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  UTABCTR;  /* YIELD */
A68_93  XTABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  YTABCTR;  /* YIELD */
A68_93  ZTABCTR;  /* OPERATORS - mode -> union mode */
A68_92  AUABCTR;  /* OPERATORS - istruct -> vector */
A68_196  BUABCTR;  /* collateral clause result */
A68_VC  FUABCTR;  /* avoid structure result */
A68_93  HUABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  IUABCTR;  /* YIELD */
A68_93  JUABCTR;  /* OPERATORS - mode -> union mode */
A68_92  KUABCTR;  /* OPERATORS - istruct -> vector */
A68_53  MUABCTR_initialise;   /* proc value of non-global proc */
A68_53  IVABCTR_increment;   /* proc value of non-global proc */
A68_INT  CWABCTR_i;
A68_INT  DWABCTR;  /* to part of loop */
A68_194  EWABCTR;  /* collateral clause result */
A68_VC  FWABCTR;  /* avoid structure result */
A68_93  GWABCTR;  /* OPERATORS - mode -> union mode */
A68_93  HWABCTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  IWABCTR;  /* YIELD */
A68_93  JWABCTR;  /* OPERATORS - mode -> union mode */
A68_92  KWABCTR;  /* OPERATORS - istruct -> vector */
A68_210  LWABCTR;  /* collateral clause result */
A68_93  OWABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  PWABCTR;  /* YIELD */
A68_93  QWABCTR;  /* OPERATORS - mode -> union mode */
A68_93  TWABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  UWABCTR;  /* YIELD */
A68_93  VWABCTR;  /* OPERATORS - mode -> union mode */
A68_93  WWABCTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  XWABCTR;  /* YIELD */
A68_VC  YWABCTR;  /* avoid structure result */
A68_93  ZWABCTR;  /* OPERATORS - mode -> union mode */
A68_93  AXABCTR;  /* OPERATORS - mode -> union mode */
A68_92  BXABCTR;  /* OPERATORS - istruct -> vector */
A68_INT  CXABCTR_i;
A68_INT  DXABCTR;  /* to part of loop */
A68_194  EXABCTR;  /* collateral clause result */
A68_93  FXABCTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  GXABCTR;  /* YIELD */
A68_VC  HXABCTR;  /* avoid structure result */
A68_93  IXABCTR;  /* OPERATORS - mode -> union mode */
A68_93  JXABCTR;  /* OPERATORS - mode -> union mode */
A68_92  KXABCTR;  /* OPERATORS - istruct -> vector */
A68_190  LXABCTR;  /* collateral clause result */
A68_93  OXABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  PXABCTR;  /* YIELD */
A68_93  QXABCTR;  /* OPERATORS - mode -> union mode */
A68_93  RXABCTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  SXABCTR;  /* YIELD */
A68_93  TXABCTR;  /* OPERATORS - mode -> union mode */
A68_92  UXABCTR;  /* OPERATORS - istruct -> vector */
A68_176 * VXABCTR_control;
A68_INT  WXABCTR;  /* forall loop counter */
A68_184  XXABCTR;  /* collateral clause result */
A68_VC  YXABCTR;  /* avoid structure result */
A68_93  ZXABCTR;  /* OPERATORS - mode -> union mode */
A68_93  CYABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  DYABCTR;  /* YIELD */
A68_93  EYABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  FYABCTR;  /* YIELD */
A68_93  GYABCTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  HYABCTR;  /* YIELD */
A68_93  IYABCTR;  /* OPERATORS - mode -> union mode */
A68_92  JYABCTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(forall);
 /* line 284: */
 /* line 285: */
{ 
A_CLOSURE( SNABCTR_generator, TNABCTR_generator, UNABCTR_generator );
(( UNABCTR_generator * ) ( SNABCTR_generator.nonlocals )) -> Controls = Controls;
A_CALLPROC(SNABCTR_generator,(A68_TRUE, &YNABCTR),(A68_TRUE, &YNABCTR,(SNABCTR_generator).nonlocals));
XNABCTR_rows = YNABCTR;
 /* line 286: */
A_CLOSURE( AOABCTR_generator, BOABCTR_generator, COABCTR_generator );
(( COABCTR_generator * ) ( AOABCTR_generator.nonlocals )) -> Controls = Controls;
A_CALLPROC(AOABCTR_generator,(A68_TRUE, &GOABCTR),(A68_TRUE, &GOABCTR,(AOABCTR_generator).nonlocals));
FOABCTR_modeofrows = GOABCTR;
 /* line 287: */
HOABCTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 291: */
 /* line 293: */
LOABCTR = FOABCTR_modeofrows.upb -1;
if ( LOABCTR != Controls.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
if ( LOABCTR != XNABCTR_rows.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 3"); }
IOABCTR_modeofrow = FOABCTR_modeofrows.data;
JOABCTR_control = Controls.data;
KOABCTR_row = XNABCTR_rows.data;
for (;LOABCTR-- >= 0;
(IOABCTR_modeofrow++
,JOABCTR_control++
,KOABCTR_row++
) )
{
 /* line 294: */
MOABCTR_rowvalue = (&((*Foralllist)->Value));
 /* line 295: */
(*Foralllist) = (*(&((*Foralllist)->Rest)));
 /* line 296: */
A_CALLPROC(NXQACTR_evaluate,(MOABCTR_rowvalue),(MOABCTR_rowvalue,(NXQACTR_evaluate).nonlocals));
 /* line 297: */
(*IOABCTR_modeofrow) = (*(&(MOABCTR_rowvalue->Mode)));
 /* line 298: */
NOABCTR_elemmode = A_CALLPROC(UVMACTR_elementmode,((*IOABCTR_modeofrow)),((*IOABCTR_modeofrow),(UVMACTR_elementmode).nonlocals));
 /* line 305: */
 /* line 306: */
 /* line 307: */
 /* line 308: */
if ( EXPACTR_isident(MOABCTR_rowvalue) )
{ 
 /* line 309: */
OOABCTR = RSMACTR_hasrefs((*IOABCTR_modeofrow));
if ( OOABCTR )
{ /* line 310: */
OOABCTR = KRMACTR_isflexarray((*IOABCTR_modeofrow));
}
if ( OOABCTR )
{ 
 /* line 311: */
 /* line 312: */
GZPACTR_getcfragment( MOABCTR_rowvalue, &ROABCTR );
JIAACTR_bracket( A_VC_PLUS(A_HVEC(QOABCTR,'*',A68_CHAR ),ROABCTR), &SOABCTR );
POABCTR = SOABCTR;
} 
else
{ 
 /* line 313: */
 /* line 314: */
GZPACTR_getcfragment( MOABCTR_rowvalue, &TOABCTR );
POABCTR = TOABCTR;
} 
} 
else
{ 
WOABCTR_temp = VPQACTR_yield(VOABCTR, MOABCTR_rowvalue);
 /* line 316: */
 /* line 317: */
XOABCTR = MOMACTR_hasoneref((*IOABCTR_modeofrow));
if ( XOABCTR )
{ /* line 318: */
XOABCTR = KRMACTR_isflexarray((*IOABCTR_modeofrow));
}
 /* line 319: */
if ( XOABCTR )
{ 
 /* line 320: */
 /* line 321: */
GZPACTR_getcfragment( WOABCTR_temp, &ZOABCTR );
JIAACTR_bracket( A_VC_PLUS(A_HVEC(YOABCTR,'*',A68_CHAR ),ZOABCTR), &APABCTR );
POABCTR = APABCTR;
} 
else
{ 
 /* line 322: */
GZPACTR_getcfragment( WOABCTR_temp, &BPABCTR );
POABCTR = BPABCTR;
} 
} 
CPABCTR_rowname = POABCTR;
 /* line 323: */
A_CLOSURE( EPABCTR_generator, FPABCTR_generator, GPABCTR_generator );
(( GPABCTR_generator * ) ( EPABCTR_generator.nonlocals )) -> CPABCTR_rowname = CPABCTR_rowname;
A_CALLPROC(EPABCTR_generator,(A68_TRUE, &JPABCTR),(A68_TRUE, &JPABCTR,(EPABCTR_generator).nonlocals));
A_VASSIGN2(CPABCTR_rowname,JPABCTR,A68_CHAR ) ;
(*KOABCTR_row) = JPABCTR;
 /* line 325: */
KPABCTR_originalhasrefs = RSMACTR_hasrefs((*IOABCTR_modeofrow));
 /* line 327: */
 /* line 328: */
 /* line 329: */
 /* line 335: */
if ( (ARMACTR_isarray((*IOABCTR_modeofrow))&(QVMACTR_dimensions((*IOABCTR_modeofrow))>1)) )
{ 
LPABCTR = (&(JOABCTR_control->Needstemp)) ;
(*LPABCTR) = A68_FALSE;
 /* line 336: */
 /* line 337: */
 /* line 338: */
{ 
GZPACTR_getcfragment( (&(JOABCTR_control->Ident)), &MPABCTR );
NPABCTR_controlname = MPABCTR;
 /* line 339: */
A_CLOSURE( PPABCTR_generator, QPABCTR_generator, RPABCTR_generator );
(( RPABCTR_generator * ) ( PPABCTR_generator.nonlocals )) -> NPABCTR_controlname = NPABCTR_controlname;
 /* line 340: */
 /* line 342: */
A_CALLPROC(PPABCTR_generator,(A68_TRUE, &VPABCTR),(A68_TRUE, &VPABCTR,(PPABCTR_generator).nonlocals));
A_VASSIGN2(NPABCTR_controlname,VPABCTR,A68_CHAR ) ;
UPABCTR = VPABCTR;
} 
 /* line 343: */
WPABCTR = (&(JOABCTR_control->Control)) ;
(*WPABCTR) = UPABCTR;
} 
else
{ 
 /* line 353: */
if ( KPABCTR_originalhasrefs )
{ 
XPABCTR_forallmode = (*(&((&(JOABCTR_control->Ident))->Mode)));
 /* line 355: */
 /* line 356: */
YPABCTR = FRMACTR_isfirmarray(NOABCTR_elemmode);
if ( YPABCTR )
{YPABCTR = (NOABCTR_elemmode<VFAACTR_refmark);
}
 /* line 357: */
if ( YPABCTR )
{ /* line 359: */
ZPABCTR = KRMACTR_isflexarray(XPABCTR_forallmode);
if ( ZPABCTR )
{ZPABCTR = MOMACTR_hasoneref(XPABCTR_forallmode);
}
 /* line 360: */
YPABCTR = !ZPABCTR;
}
 /* line 361: */
if ( YPABCTR )
{ 
AQABCTR_controlmode = ((NOABCTR_elemmode+VFAACTR_refmark)+VFAACTR_refmark);
 /* line 362: */
BQABCTR = (&(JOABCTR_control->Needstemp)) ;
(*BQABCTR) = A68_TRUE;
 /* line 363: */
 /* line 364: */
 /* line 366: */
{ 
LLOACTR_declarectemporary( AQABCTR_controlmode, DQABCTR, &EQABCTR );
GQABCTR = EQABCTR.Name ;
HQABCTR_controlname = A_HISVEC(FQABCTR,GQABCTR,7,A68_CHAR );
 /* line 367: */
A_CLOSURE( JQABCTR_generator, KQABCTR_generator, LQABCTR_generator );
(( LQABCTR_generator * ) ( JQABCTR_generator.nonlocals )) -> HQABCTR_controlname = HQABCTR_controlname;
 /* line 368: */
 /* line 369: */
A_CALLPROC(JQABCTR_generator,(A68_TRUE, &PQABCTR),(A68_TRUE, &PQABCTR,(JQABCTR_generator).nonlocals));
A_VASSIGN2(HQABCTR_controlname,PQABCTR,A68_CHAR ) ;
OQABCTR = PQABCTR;
} 
 /* line 370: */
QQABCTR = (&(JOABCTR_control->Control)) ;
(*QQABCTR) = OQABCTR;
} 
else
{ 
RQABCTR = (&(JOABCTR_control->Needstemp)) ;
(*RQABCTR) = A68_FALSE;
 /* line 371: */
 /* line 372: */
 /* line 373: */
{ 
GZPACTR_getcfragment( (&(JOABCTR_control->Ident)), &SQABCTR );
TQABCTR_controlname = SQABCTR;
 /* line 374: */
A_CLOSURE( VQABCTR_generator, WQABCTR_generator, XQABCTR_generator );
(( XQABCTR_generator * ) ( VQABCTR_generator.nonlocals )) -> TQABCTR_controlname = TQABCTR_controlname;
 /* line 375: */
 /* line 376: */
A_CALLPROC(VQABCTR_generator,(A68_TRUE, &BRABCTR),(A68_TRUE, &BRABCTR,(VQABCTR_generator).nonlocals));
A_VASSIGN2(TQABCTR_controlname,BRABCTR,A68_CHAR ) ;
ARABCTR = BRABCTR;
} 
 /* line 377: */
 /* line 383: */
CRABCTR = (&(JOABCTR_control->Control)) ;
(*CRABCTR) = ARABCTR;
} 
} 
else
{ 
 /* line 384: */
 /* line 385: */
DRABCTR = FRMACTR_isfirmarray(NOABCTR_elemmode);
if ( DRABCTR )
{ /* line 386: */
DRABCTR = !RSMACTR_hasrefs(NOABCTR_elemmode);
}
if ( DRABCTR )
{ 
 /* line 388: */
 /* line 390: */
ERABCTR = (VFAACTR_refmark+VFAACTR_refmark);
} 
else
{ 
ERABCTR = VFAACTR_refmark;
} 
FRABCTR_controlmode = (NOABCTR_elemmode+ERABCTR);
 /* line 392: */
GRABCTR = (&(JOABCTR_control->Needstemp)) ;
(*GRABCTR) = A68_TRUE;
 /* line 393: */
 /* line 394: */
 /* line 396: */
{ 
LLOACTR_declarectemporary( FRABCTR_controlmode, IRABCTR, &JRABCTR );
LRABCTR = JRABCTR.Name ;
MRABCTR_controlname = A_HISVEC(KRABCTR,LRABCTR,7,A68_CHAR );
 /* line 397: */
A_CLOSURE( ORABCTR_generator, PRABCTR_generator, QRABCTR_generator );
(( QRABCTR_generator * ) ( ORABCTR_generator.nonlocals )) -> MRABCTR_controlname = MRABCTR_controlname;
 /* line 398: */
 /* line 399: */
A_CALLPROC(ORABCTR_generator,(A68_TRUE, &URABCTR),(A68_TRUE, &URABCTR,(ORABCTR_generator).nonlocals));
A_VASSIGN2(MRABCTR_controlname,URABCTR,A68_CHAR ) ;
TRABCTR = URABCTR;
} 
 /* line 400: */
VRABCTR = (&(JOABCTR_control->Control)) ;
(*VRABCTR) = TRABCTR;
} 
} 
}
 /* line 404: */
 /* line 405: */
LLOACTR_declarectemporary( EFAACTR_intmode, XRABCTR, &YRABCTR );
ASABCTR = YRABCTR.Name ;
BSABCTR_loopcounter = A_HISVEC(ZRABCTR,ASABCTR,7,A68_CHAR );
 /* line 407: */
 /* line 408: */
 /* line 409: */
 /* line 410: */
ESABCTR = 1 ;
if ( XRMACTR_isistruct((*(&A_VINDEX(FOABCTR_modeofrows,ESABCTR)))) )
{ 
 /* line 411: */
GSABCTR = 1 ;
ROAAOSF_whole( A_CALLPROC(WVMACTR_istructlength,((*(&A_VINDEX(FOABCTR_modeofrows,GSABCTR)))),((*(&A_VINDEX(FOABCTR_modeofrows,GSABCTR))),(WVMACTR_istructlength).nonlocals)), 0, &HSABCTR );
FSABCTR = HSABCTR;
} 
else
{ 
 /* line 412: */
ISABCTR = 1 ;
if ( QQMACTR_isvector((*(&A_VINDEX(FOABCTR_modeofrows,ISABCTR)))) )
{ 
 /* line 413: */
KSABCTR = 1 ;
FSABCTR = A_VC_PLUS((*(&A_VINDEX(XNABCTR_rows,KSABCTR))),LSABCTR);
} 
else
{ 
 /* line 414: */
PSABCTR = 1 ;
SSABCTR = 1 ;
FSABCTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS((*(&A_VINDEX(XNABCTR_rows,PSABCTR))),QSABCTR),RSABCTR),(*(&A_VINDEX(XNABCTR_rows,SSABCTR)))),TSABCTR);
} 
} 
WSABCTR = A_VC_PLUS(A_VC_PLUS(BSABCTR_loopcounter,USABCTR),FSABCTR) ;
CSABCTR.data[0] = A_UNITE(VSABCTR,mode2,2,WSABCTR);
YSABCTR = ';' ;
CSABCTR.data[1] = A_UNITE(XSABCTR,mode1,1,YSABCTR);
CSABCTR.data[2] = A_UNITE(ZSABCTR,mode4,4,EIAACTR_cnewline);
 /* line 416: */
MDMACTR_writecstream(A_HISVEC(ATABCTR,CSABCTR,3,A68_93 ), HOABCTR_codestream);
 /* line 421: */
 /* line 422: */
CTABCTR = XNABCTR_rows.upb;
for ( BTABCTR_i = 2;
BTABCTR_i <= CTABCTR;
BTABCTR_i += 1 )
{ 
 /* line 423: */
DTABCTR_row = (*(&A_VINDEX(XNABCTR_rows,BTABCTR_i)));
 /* line 424: */
 /* line 425: */
 /* line 426: */
 /* line 427: */
if ( XRMACTR_isistruct((*(&A_VINDEX(FOABCTR_modeofrows,BTABCTR_i)))) )
{ 
 /* line 428: */
ROAAOSF_whole( A_CALLPROC(WVMACTR_istructlength,((*(&A_VINDEX(FOABCTR_modeofrows,BTABCTR_i)))),((*(&A_VINDEX(FOABCTR_modeofrows,BTABCTR_i))),(WVMACTR_istructlength).nonlocals)), 0, &ITABCTR );
HTABCTR = ITABCTR;
} 
else
{ 
 /* line 429: */
if ( QQMACTR_isvector((*(&A_VINDEX(FOABCTR_modeofrows,BTABCTR_i)))) )
{ 
 /* line 430: */
HTABCTR = A_VC_PLUS(DTABCTR_row,KTABCTR);
} 
else
{ 
 /* line 431: */
HTABCTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(DTABCTR_row,OTABCTR),PTABCTR),DTABCTR_row),QTABCTR);
} 
} 
UTABCTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(RTABCTR,BSABCTR_loopcounter),STABCTR),HTABCTR) ;
ETABCTR.data[0] = A_UNITE(TTABCTR,mode2,2,UTABCTR);
YTABCTR = WTABCTR ;
ETABCTR.data[1] = A_UNITE(XTABCTR,mode2,2,YTABCTR);
ETABCTR.data[2] = A_UNITE(ZTABCTR,mode4,4,EIAACTR_cnewline);
 /* line 433: */
MDMACTR_writecstream(A_HISVEC(AUABCTR,ETABCTR,3,A68_93 ), HOABCTR_codestream);
 /* line 434: */
 /* line 435: */
 /* line 436: */
ROAAOSF_whole( BTABCTR_i, 0, &FUABCTR );
IUABCTR = A_VC_PLUS(A_VC_PLUS(EUABCTR,FUABCTR),GUABCTR) ;
BUABCTR.data[0] = A_UNITE(HUABCTR,mode2,2,IUABCTR);
BUABCTR.data[1] = A_UNITE(JUABCTR,mode4,4,EIAACTR_cnewline);
 /* line 437: */
 /* line 438: */
MDMACTR_writecstream(A_HISVEC(KUABCTR,BUABCTR,2,A68_93 ), HOABCTR_codestream);
}
 /* line 441: */
A_CLOSURE( MUABCTR_initialise, NUABCTR_initialise, OUABCTR_initialise );
(( OUABCTR_initialise * ) ( MUABCTR_initialise.nonlocals )) -> Controls = Controls;
(( OUABCTR_initialise * ) ( MUABCTR_initialise.nonlocals )) -> FOABCTR_modeofrows = FOABCTR_modeofrows;
(( OUABCTR_initialise * ) ( MUABCTR_initialise.nonlocals )) -> XNABCTR_rows = XNABCTR_rows;
 /* line 451: */
A_CLOSURE( IVABCTR_increment, JVABCTR_increment, KVABCTR_increment );
(( KVABCTR_increment * ) ( IVABCTR_increment.nonlocals )) -> FOABCTR_modeofrows = FOABCTR_modeofrows;
(( KVABCTR_increment * ) ( IVABCTR_increment.nonlocals )) -> Controls = Controls;
(( KVABCTR_increment * ) ( IVABCTR_increment.nonlocals )) -> XNABCTR_rows = XNABCTR_rows;
 /* line 464: */
 /* line 465: */
DWABCTR = Controls.upb;
for ( CWABCTR_i = 1;
CWABCTR_i <= DWABCTR;
CWABCTR_i += 1 )
{ 
 /* line 466: */
A_CALLPROC(MUABCTR_initialise,(CWABCTR_i, &FWABCTR),(CWABCTR_i, &FWABCTR,(MUABCTR_initialise).nonlocals));
EWABCTR.data[0] = A_UNITE(GWABCTR,mode2,2,FWABCTR);
IWABCTR = ';' ;
EWABCTR.data[1] = A_UNITE(HWABCTR,mode1,1,IWABCTR);
EWABCTR.data[2] = A_UNITE(JWABCTR,mode4,4,EIAACTR_cnewline);
 /* line 467: */
MDMACTR_writecstream(A_HISVEC(KWABCTR,EWABCTR,3,A68_93 ), HOABCTR_codestream);
}
 /* line 469: */
PWABCTR = NWABCTR ;
LWABCTR.data[0] = A_UNITE(OWABCTR,mode2,2,PWABCTR);
LWABCTR.data[1] = A_UNITE(QWABCTR,mode2,2,BSABCTR_loopcounter);
UWABCTR = SWABCTR ;
LWABCTR.data[2] = A_UNITE(TWABCTR,mode2,2,UWABCTR);
 /* line 470: */
LWABCTR.data[3] = A_UNITE(VWABCTR,mode4,4,EIAACTR_cnewline);
XWABCTR = '(' ;
LWABCTR.data[4] = A_UNITE(WWABCTR,mode1,1,XWABCTR);
A_CALLPROC(IVABCTR_increment,(1, &YWABCTR),(1, &YWABCTR,(IVABCTR_increment).nonlocals));
LWABCTR.data[5] = A_UNITE(ZWABCTR,mode2,2,YWABCTR);
LWABCTR.data[6] = A_UNITE(AXABCTR,mode4,4,EIAACTR_cnewline);
MDMACTR_writecstream(A_HISVEC(BXABCTR,LWABCTR,7,A68_93 ), HOABCTR_codestream);
 /* line 472: */
 /* line 473: */
DXABCTR = Controls.upb;
for ( CXABCTR_i = 2;
CXABCTR_i <= DXABCTR;
CXABCTR_i += 1 )
{ 
 /* line 474: */
GXABCTR = ',' ;
EXABCTR.data[0] = A_UNITE(FXABCTR,mode1,1,GXABCTR);
A_CALLPROC(IVABCTR_increment,(CXABCTR_i, &HXABCTR),(CXABCTR_i, &HXABCTR,(IVABCTR_increment).nonlocals));
EXABCTR.data[1] = A_UNITE(IXABCTR,mode2,2,HXABCTR);
EXABCTR.data[2] = A_UNITE(JXABCTR,mode4,4,EIAACTR_cnewline);
 /* line 475: */
MDMACTR_writecstream(A_HISVEC(KXABCTR,EXABCTR,3,A68_93 ), HOABCTR_codestream);
}
 /* line 477: */
PXABCTR = NXABCTR ;
LXABCTR.data[0] = A_UNITE(OXABCTR,mode2,2,PXABCTR);
LXABCTR.data[1] = A_UNITE(QXABCTR,mode4,4,EIAACTR_cnewline);
SXABCTR = '{' ;
LXABCTR.data[2] = A_UNITE(RXABCTR,mode1,1,SXABCTR);
LXABCTR.data[3] = A_UNITE(TXABCTR,mode4,4,EIAACTR_cnewline);
MDMACTR_writecstream(A_HISVEC(UXABCTR,LXABCTR,4,A68_93 ), HOABCTR_codestream);
 /* line 481: */
 /* line 482: */
WXABCTR = Controls.upb -1;
VXABCTR_control = Controls.data;
for (;WXABCTR-- >= 0;
(VXABCTR_control++
) )
{
 /* line 483: */
 /* line 484: */
 /* line 485: */
if ( (*(&(VXABCTR_control->Needstemp))) )
{ 
GZPACTR_getcfragment( (&(VXABCTR_control->Ident)), &YXABCTR );
XXABCTR.data[0] = A_UNITE(ZXABCTR,mode2,2,YXABCTR);
 /* line 486: */
DYABCTR = BYABCTR ;
XXABCTR.data[1] = A_UNITE(CYABCTR,mode2,2,DYABCTR);
FYABCTR = (*(&(VXABCTR_control->Control))) ;
XXABCTR.data[2] = A_UNITE(EYABCTR,mode2,2,FYABCTR);
HYABCTR = ';' ;
XXABCTR.data[3] = A_UNITE(GYABCTR,mode1,1,HYABCTR);
XXABCTR.data[4] = A_UNITE(IYABCTR,mode4,4,EIAACTR_cnewline);
 /* line 487: */
 /* line 488: */
 /* line 489: */
MDMACTR_writecstream(A_HISVEC(JYABCTR,XXABCTR,5,A68_93 ), HOABCTR_codestream);
} 
}
 /* line 490: */
} 
A_PROC_EXIT(forall);
return;
} 
#undef NL

A68_VOID  KYABCTR_while(void)
{ 
A_PROC_ENTRY(while);
/*SKIP*/;
A_PROC_EXIT(while);
return;
} 
#undef NL

A68_VOID  MYABCTR_whiledo(A68_64 * Enquiry)
{ 
A68_INT  NYABCTR_codestream;
A68_VC  PYABCTR;  /* clause result */
A68_VC  RYABCTR;  /* avoid structure result */
A68_VC  SYABCTR_booleanexpr;
A68_190  TYABCTR;  /* collateral clause result */
A68_93  WYABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  XYABCTR;  /* YIELD */
A68_93  YYABCTR;  /* OPERATORS - mode -> union mode */
A68_93  BZABCTR;  /* OPERATORS - mode -> union mode */
A68_VC  CZABCTR;  /* YIELD */
A68_93  DZABCTR;  /* OPERATORS - mode -> union mode */
A68_92  EZABCTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(whiledo);
 /* line 495: */
 /* line 496: */
{ 
NYABCTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 497: */
 /* line 498: */
 /* line 499: */
 /* line 501: */
if ( QXPACTR_isskip(Enquiry) )
{ 
 /* line 502: */
PYABCTR = QYABCTR;
} 
else
{ 
 /* line 503: */
NDQACTR_bracketcfragment( Enquiry, &RYABCTR );
PYABCTR = RYABCTR;
} 
SYABCTR_booleanexpr = PYABCTR;
 /* line 504: */
 /* line 505: */
XYABCTR = VYABCTR ;
TYABCTR.data[0] = A_UNITE(WYABCTR,mode2,2,XYABCTR);
TYABCTR.data[1] = A_UNITE(YYABCTR,mode2,2,SYABCTR_booleanexpr);
CZABCTR = AZABCTR ;
TYABCTR.data[2] = A_UNITE(BZABCTR,mode2,2,CZABCTR);
TYABCTR.data[3] = A_UNITE(DZABCTR,mode4,4,EIAACTR_cnewline);
 /* line 506: */
MDMACTR_writecstream(A_HISVEC(EZABCTR,TYABCTR,4,A68_93 ), NYABCTR_codestream);
} 
A_PROC_EXIT(whiledo);
return;
} 
#undef NL

A68_VOID  FZABCTR_whileod(void)
{ 
A68_INT  GZABCTR_codestream;
A68_196  HZABCTR;  /* collateral clause result */
A68_93  IZABCTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  JZABCTR;  /* YIELD */
A68_93  KZABCTR;  /* OPERATORS - mode -> union mode */
A68_92  LZABCTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(whileod);
{ 
GZABCTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 511: */
JZABCTR = '}' ;
HZABCTR.data[0] = A_UNITE(IZABCTR,mode1,1,JZABCTR);
HZABCTR.data[1] = A_UNITE(KZABCTR,mode4,4,EIAACTR_cnewline);
 /* line 512: */
MDMACTR_writecstream(A_HISVEC(LZABCTR,HZABCTR,2,A68_93 ), GZABCTR_codestream);
} 
A_PROC_EXIT(whileod);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 5: */
void CDABCTR(void)   /* initialise DECS loops */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel","-dir",".","loops.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/vak/Project/Algol/Algol-68RS-Source/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/vak/Project/Algol/Algol-68RS-Source/a68config/a68config.m","./values.m","./modes.m","./incmode.m","./environment.m","./environ.m","./coutput.m","./clauses.m","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel/usefulops.m","./centities.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_64  HDABCTR;  /* collateral clause result */
A68_65  IDABCTR;  /* OPERATORS - mode -> union mode */
A68_LBITS  JDABCTR;  /* YIELD */
A68_75  NZABCTR;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
AUPACTR();   /* USE values */
DNMACTR();   /* USE modes */
ZDAACTR();   /* USE incmode */
HPIACTR();   /* USE environment */
BPLACTR();   /* USE environ */
PTLACTR();   /* USE coutput */
CAZACTR();   /* USE clauses */
IKAAOSF();   /* USE usefulops */
THAACTR();   /* USE centities */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/loops.a68";
A_config.translation_time = "Thu Nov  5 20:30:31 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "BDABCTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 20:30:31 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS loops);
UEAALIB_a68config(LGAALIB_configinfo, GDABCTR);
 /* line 49: */
 /* line 59: */
 /* line 62: */
HDABCTR.Mode = EFAACTR_intmode;
HDABCTR.Info = PKJACTR_defaultinfo;
JDABCTR = (A68_LBITS )01U ;
HDABCTR.Extra = A_UNITE(IDABCTR,mode1,1,JDABCTR);
YDABCTR_value1 = MDABCTR_assignment(A_LOC(A68_64 ), HDABCTR);
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
NZABCTR.fn.fn_global = FZABCTR_whileod;
NZABCTR.nonlocals = A68_NIL;
MZABCTR_od = (NZABCTR);
 /* line 516: */
 /* line 518: */
 /* line 521: */
/*SKIP*/;
A_PROC_EXIT(DECS loops);
} 
#undef NL
/* end of translation of loops.a68 */
