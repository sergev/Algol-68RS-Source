/* UNAME:SGTACTR */
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
struct A68t55 ;

A_PROCEDURE(A68_VOID ,A68t54,(struct A68t55 *,A68_INT ,struct A68t55 *),(struct A68t55 *,A68_INT ,struct A68t55 *,void *));
typedef struct A68t54  A68_54 ;    /* PROC(REF MODE55,INT) MODE55 */
struct A68t57{
A68_INT  Rdenno;
A_PAD_INT(PAD_1)
};
typedef struct A68t57  A68_57 ;    /* STRUCT(INT)  */
struct A68t58{
A68_INT  Idno;
A_PAD_INT(PAD_2)
};
typedef struct A68t58  A68_58 ;    /* STRUCT(INT)  */
A_ISTRUCT(A68_CHAR ,7,A68t64);
typedef struct A68t64  A68_64 ;    /* STRUCT 7 CHAR */
struct A68t59{
struct A68t64  Name;
A_PAD_ISTRUCT(A68_64 ,PAD_3)
A68_INT  Mode;
A_PAD_INT(PAD_4)
};
typedef struct A68t59  A68_59 ;    /* STRUCT(MODE64,INT)  */
struct A68t60{
A68_INT  Labno;
A_PAD_INT(PAD_5)
};
typedef struct A68t60  A68_60 ;    /* STRUCT(INT)  */
struct A68t61{
A68_INT  Nse;
A_PAD_INT(PAD_6)
};
typedef struct A68t61  A68_61 ;    /* STRUCT(INT)  */
struct A68t62{
A68_INT  Fn;
A_PAD_INT(PAD_7)
A68_INT  Param;
A_PAD_INT(PAD_8)
struct A68t63 * Operands;
};
typedef struct A68t62  A68_62 ;    /* STRUCT(INT,INT,REF MODE63)  */
struct A68t56 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t57  mode2;
struct A68t58  mode4;
struct A68t59  mode5;
A68_VC  mode6;
struct A68t60  mode7;
struct A68t61  mode8;
struct A68t62  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t56  A68_56 ;    /* UNION(LONG BITS,MODE57,VOID,MODE58,MODE59,MODE26,MODE60,MODE61,MODE62)  */
struct A68t55{
A68_INT  Mode;
A_PAD_INT(PAD_9)
A68_BITS  Info;
A_PAD_BITS(PAD_10)
struct A68t56  Extra;
};
typedef struct A68t55  A68_55 ;    /* STRUCT(INT,BITS,MODE56)  */
struct A68t63{
struct A68t55  Value;
struct A68t63 * Rest;
};
typedef struct A68t63  A68_63 ;    /* STRUCT(MODE55,REF MODE63)  */

A_PROCEDURE(A68_VOID ,A68t65,(struct A68t55 *,struct A68t55 *),(struct A68t55 *,struct A68t55 *,void *));
typedef struct A68t65  A68_65 ;    /* PROC(REF MODE55) MODE55 */

A_PROCEDURE(A68_VOID ,A68t66,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t66  A68_66 ;    /* PROC(BOOL) MODE26 */
struct A68t67{
struct A68t64  Name;
A_PAD_ISTRUCT(A68_64 ,PAD_11)
A68_BOOL  Set;
A_PAD_BOOL(PAD_12)
};
typedef struct A68t67  A68_67 ;    /* STRUCT(MODE64,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t68,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t68  A68_68 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t69,(A68_VC ),(A68_VC ,void *));
typedef struct A68t69  A68_69 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t70,(void),(void *));
typedef struct A68t70  A68_70 ;    /* PROC VOID */
struct A68t72 ;

A_PROCEDURE(A68_VOID ,A68t71,(struct A68t72 ),(struct A68t72 ,void *));
typedef struct A68t71  A68_71 ;    /* PROC(MODE72) VOID */
A_VECTOR(struct A68t73 ,A68t72);
typedef struct A68t72  A68_72 ;    /* VECTOR [] MODE73 */
struct A68t73 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_SINT  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t73  A68_73 ;    /* UNION(CHAR,MODE26,SHORT INT)  */
struct A68t75 ;

A_PROCEDURE(A68_VOID ,A68t74,(struct A68t75 ,A68_INT ),(struct A68t75 ,A68_INT ,void *));
typedef struct A68t74  A68_74 ;    /* PROC(MODE75,INT) VOID */
A_VECTOR(struct A68t76 ,A68t75);
typedef struct A68t75  A68_75 ;    /* VECTOR [] MODE76 */
struct A68t76 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_INT  mode3;
A68_SINT  mode4;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t76  A68_76 ;    /* UNION(CHAR,MODE26,INT,SHORT INT)  */

A_PROCEDURE(A68_INT ,A68t77,(A68_INT ),(A68_INT ,void *));
typedef struct A68t77  A68_77 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t78,(A68_INT ),(A68_INT ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(INT) BOOL */
struct A68t79{
A68_INT  Level;
A_PAD_INT(PAD_13)
A68_INT  Block;
A_PAD_INT(PAD_14)
};
typedef struct A68t79  A68_79 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t80,(struct A68t79 *),(struct A68t79 *,void *));
typedef struct A68t80  A68_80 ;    /* PROC MODE79 */

A_PROCEDURE(A68_INT ,A68t81,(void),(void *));
typedef struct A68t81  A68_81 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t82,(A68_INT ),(A68_INT ,void *));
typedef struct A68t82  A68_82 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t83,(void),(void *));
typedef struct A68t83  A68_83 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t84,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t85,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t85  A68_85 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t86,(struct A68t79 ,struct A68t79 ),(struct A68t79 ,struct A68t79 ,void *));
typedef struct A68t86  A68_86 ;    /* PROC(MODE79,MODE79) BOOL */

A_PROCEDURE(A68_BOOL ,A68t87,(struct A68t79 ),(struct A68t79 ,void *));
typedef struct A68t87  A68_87 ;    /* PROC(MODE79) BOOL */

A_PROCEDURE(A68_VOID ,A68t88,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t88  A68_88 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t89,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t89  A68_89 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t90,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t90  A68_90 ;    /* PROC(INT) REF MODE26 */
struct A68t92 ;

A_PROCEDURE(A68_VOID ,A68t91,(A68_INT ,struct A68t92 ),(A68_INT ,struct A68t92 ,void *));
typedef struct A68t91  A68_91 ;    /* PROC(INT,MODE92) VOID */
A_ROW(A68_VC ,A68t92,1);
typedef struct A68t92  A68_92 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t93,(void),(void *));
typedef struct A68t93  A68_93 ;    /* PROC BITS */
struct A68t94{
A68_INT  Cfile;
A_PAD_INT(PAD_15)
};
typedef struct A68t94  A68_94 ;    /* STRUCT(INT)  */
struct A68t95{
A68_INT  Seedfile;
A_PAD_INT(PAD_16)
};
typedef struct A68t95  A68_95 ;    /* STRUCT(INT)  */
struct A68t96 { A68_INT mode; union {
struct A68t94  mode1;
struct A68t95  mode2;
struct A68t64  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t96  A68_96 ;    /* UNION(MODE94,MODE95,MODE64,VOID)  */
A_ROW(A68_BOOL ,A68t97,1);
typedef struct A68t97  A68_97 ;    /* [] BOOL */
struct A68t98{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_17)
A68_VC  Sourcefile;
struct A68t64  Nameseed;
A_PAD_ISTRUCT(A68_64 ,PAD_18)
struct A68t96  Nameseedorigin;
struct A68t99 * Used_modules;
A68_VC  Commandline;
struct A68t100 * Environment;
};
typedef struct A68t98  A68_98 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE64,MODE96,REF MODE99,REF MODE26,REF MODE100)  */
struct A68t99{
A68_VC  Modinfo_file;
struct A68t99 * Next;
};
typedef struct A68t99  A68_99 ;    /* STRUCT(REF MODE26,REF MODE99)  */
struct A68t100{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t100 * Next;
};
typedef struct A68t100  A68_100 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE100)  */
struct A68t102 ;
struct A68t103 ;

A_PROCEDURE(struct A68t102 *,A68t101,(A68_VC ,struct A68t103 *,A68_VC *),(A68_VC ,struct A68t103 *,A68_VC *,void *));
typedef struct A68t101  A68_101 ;    /* PROC(MODE26,REF MODE103,REF REF MODE26) REF MODE102 */
struct A68t102{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t102  A68_102 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t103{
A68_VC  Dir;
struct A68t103 * Next;
};
typedef struct A68t103  A68_103 ;    /* STRUCT(REF MODE26,REF MODE103)  */

A_PROCEDURE(A68_VOID ,A68t104,(struct A68t55 *,struct A68t55 **),(struct A68t55 *,struct A68t55 **,void *));
typedef struct A68t104  A68_104 ;    /* PROC(REF MODE55,REF REF MODE55) VOID */

A_PROCEDURE(A68_VOID ,A68t105,(struct A68t55 *,struct A68t55 **,A68_BITS ),(struct A68t55 *,struct A68t55 **,A68_BITS ,void *));
typedef struct A68t105  A68_105 ;    /* PROC(REF MODE55,REF REF MODE55,BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t106,(struct A68t55 *,struct A68t55 **,struct A68t55 **),(struct A68t55 *,struct A68t55 **,struct A68t55 **,void *));
typedef struct A68t106  A68_106 ;    /* PROC(REF MODE55,REF REF MODE55,REF REF MODE55) VOID */

A_PROCEDURE(A68_VOID ,A68t107,(struct A68t55 *),(struct A68t55 *,void *));
typedef struct A68t107  A68_107 ;    /* PROC(REF MODE55) VOID */
struct A68t108{
A68_INT  Mode;
A_PAD_INT(PAD_19)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_20)
struct A68t79  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t64  Prefix;
A_PAD_ISTRUCT(A68_64 ,PAD_21)
A68_BITS  Flags;
A_PAD_BITS(PAD_22)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t108  A68_108 ;    /* STRUCT(INT,INT,MODE79,REF MODE26,REF MODE26,MODE64,BITS,REF MODE26,REF MODE26)  */
struct A68t109{
A68_INT  Mode;
A_PAD_INT(PAD_23)
A68_INT  Resultmode;
A_PAD_INT(PAD_24)
A68_INT  Declevel;
A_PAD_INT(PAD_25)
struct A68t79  Environ;
A68_VC  Name;
struct A68t64  Prefix;
A_PAD_ISTRUCT(A68_64 ,PAD_26)
struct A68t64  Fnprefix;
A_PAD_ISTRUCT(A68_64 ,PAD_27)
struct A68t64  Envprefix;
A_PAD_ISTRUCT(A68_64 ,PAD_28)
A68_BITS  Flags;
A_PAD_BITS(PAD_29)
};
typedef struct A68t109  A68_109 ;    /* STRUCT(INT,INT,INT,MODE79,REF MODE26,MODE64,MODE64,MODE64,BITS)  */
struct A68t110{
struct A68t67  Label;
struct A68t79  Environ;
A68_VC  Name;
struct A68t64  Prefix;
A_PAD_ISTRUCT(A68_64 ,PAD_30)
A68_BITS  Flags;
A_PAD_BITS(PAD_31)
A68_INT  Alias;
A_PAD_INT(PAD_32)
};
typedef struct A68t110  A68_110 ;    /* STRUCT(MODE67,MODE79,REF MODE26,MODE64,BITS,INT)  */

A_PROCEDURE(struct A68t108 *,A68t111,(A68_INT ),(A68_INT ,void *));
typedef struct A68t111  A68_111 ;    /* PROC(INT) REF MODE108 */

A_PROCEDURE(A68_VOID ,A68t112,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t112  A68_112 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t113,(A68_VC ,struct A68t64 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t64 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t113  A68_113 ;    /* PROC(REF MODE26,MODE64,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */
A_ROW(struct A68t108 ,A68t114,1);
typedef struct A68t114  A68_114 ;    /* [] MODE108 */
A_ROW(struct A68t109 ,A68t115,1);
typedef struct A68t115  A68_115 ;    /* [] MODE109 */
A_ROW(struct A68t110 ,A68t116,1);
typedef struct A68t116  A68_116 ;    /* [] MODE110 */
struct A68t118 ;

A_PROCEDURE(A68_VOID ,A68t117,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t118 ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t118 ,void *));
typedef struct A68t117  A68_117 ;    /* PROC(INT,INT,INT,INT,REF MODE118) VOID */
A_ROW(A68_INT ,A68t118,1);
typedef struct A68t118  A68_118 ;    /* [] INT */

A_PROCEDURE(A68_BOOL ,A68t119,(A68_VC ),(A68_VC ,void *));
typedef struct A68t119  A68_119 ;    /* PROC(MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t120,(A68_INT ,struct A68t79 *),(A68_INT ,struct A68t79 *,void *));
typedef struct A68t120  A68_120 ;    /* PROC(INT) MODE79 */
struct A68t121{
A68_INT  Parameters;
A_PAD_INT(PAD_33)
A68_INT  Result;
A_PAD_INT(PAD_34)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_35)
};
typedef struct A68t121  A68_121 ;    /* STRUCT(INT,INT,BOOL)  */
A_ISTRUCT(A68_CHAR ,32,A68t123);
typedef struct A68t123  A68_123 ;    /* STRUCT 32 CHAR */
struct A68t122{
A68_INT  Mode;
A_PAD_INT(PAD_36)
A68_INT  Offset;
A_PAD_INT(PAD_37)
struct A68t123  Name;
A_PAD_ISTRUCT(A68_123 ,PAD_38)
};
typedef struct A68t122  A68_122 ;    /* STRUCT(INT,INT,MODE123)  */
struct A68t125 ;

A_PROCEDURE(A68_VOID ,A68t124,(A68_INT ,struct A68t125 *),(A68_INT ,struct A68t125 *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(INT) REF MODE125 */
A_VECTOR(A68_INT ,A68t125);
typedef struct A68t125  A68_125 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t126,(struct A68t122 *,A68_VC *),(struct A68t122 *,A68_VC *,void *));
typedef struct A68t126  A68_126 ;    /* PROC(REF MODE122) MODE26 */

A_PROCEDURE(A68_VOID ,A68t127,(A68_INT ,A68_VC ,struct A68t59 *),(A68_INT ,A68_VC ,struct A68t59 *,void *));
typedef struct A68t127  A68_127 ;    /* PROC(INT,MODE26) MODE59 */
struct A68t129 ;

A_PROCEDURE(A68_VOID ,A68t128,(struct A68t129 ,A68_INT ),(struct A68t129 ,A68_INT ,void *));
typedef struct A68t128  A68_128 ;    /* PROC(REF MODE129,INT) VOID */
A_ROW(struct A68t130 ,A68t129,1);
typedef struct A68t129  A68_129 ;    /* [] MODE130 */
struct A68t140{
A68_INT  Mode;
A_PAD_INT(PAD_39)
};
typedef struct A68t140  A68_140 ;    /* STRUCT(INT)  */
struct A68t130 { A68_INT mode; union {
A68_INT  mode1;
struct A68t131 * mode2;
struct A68t132 * mode3;
struct A68t133 * mode4;
struct A68t134 * mode5;
struct A68t135 * mode6;
struct A68t136 * mode7;
struct A68t137 * mode8;
struct A68t138 * mode9;
struct A68t139 * mode10;
struct A68t140  mode11;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t130  A68_130 ;    /* UNION(INT,REF MODE131,REF MODE132,REF MODE133,REF MODE134,REF MODE135,REF MODE136,REF MODE137,REF MODE138,REF MODE139,MODE140)  */
struct A68t131{
A68_INT  Rdenno;
A_PAD_INT(PAD_40)
struct A68t144 * Modelist;
};
typedef struct A68t131  A68_131 ;    /* STRUCT(INT,REF MODE144)  */
struct A68t132{
A68_INT  Deproc;
A_PAD_INT(PAD_41)
struct A68t144 * Pars;
};
typedef struct A68t132  A68_132 ;    /* STRUCT(INT,REF MODE144)  */
struct A68t133{
A68_INT  Rdenno;
A_PAD_INT(PAD_42)
A68_INT  Deflex;
A_PAD_INT(PAD_43)
struct A68t143 * Sels;
};
typedef struct A68t133  A68_133 ;    /* STRUCT(INT,INT,REF MODE143)  */
struct A68t134{
A68_INT  Rdenno;
A_PAD_INT(PAD_44)
A68_INT  Imode;
A_PAD_INT(PAD_45)
A68_INT  Length;
A_PAD_INT(PAD_46)
A68_INT  Deflex;
A_PAD_INT(PAD_47)
};
typedef struct A68t134  A68_134 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t135{
A68_INT  Deproc;
A_PAD_INT(PAD_48)
};
typedef struct A68t135  A68_135 ;    /* STRUCT(INT)  */
struct A68t136{
A68_INT  Rdenno;
A_PAD_INT(PAD_49)
A68_INT  Vecmode;
A_PAD_INT(PAD_50)
A68_INT  Deflex;
A_PAD_INT(PAD_51)
};
typedef struct A68t136  A68_136 ;    /* STRUCT(INT,INT,INT)  */
struct A68t137{
A68_INT  Rdenno;
A_PAD_INT(PAD_52)
A68_INT  Mode;
A_PAD_INT(PAD_53)
A68_INT  Nods;
A_PAD_INT(PAD_54)
A68_INT  Deflex;
A_PAD_INT(PAD_55)
};
typedef struct A68t137  A68_137 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t138{
A68_INT  Mode;
A_PAD_INT(PAD_56)
struct A68t142 * Stenlist;
};
typedef struct A68t138  A68_138 ;    /* STRUCT(INT,REF MODE142)  */
struct A68t139{
A68_INT  Mode;
A_PAD_INT(PAD_57)
A68_INT  Modeproc;
A_PAD_INT(PAD_58)
struct A68t141 * El;
};
typedef struct A68t139  A68_139 ;    /* STRUCT(INT,INT,REF MODE141)  */
struct A68t141{
struct A68t139 * Am;
struct A68t141 * Rest;
};
typedef struct A68t141  A68_141 ;    /* STRUCT(REF MODE139,REF MODE141)  */
struct A68t142{
A68_INT  Mode;
A_PAD_INT(PAD_59)
A68_INT  Rdenno;
A_PAD_INT(PAD_60)
struct A68t142 * Rest;
};
typedef struct A68t142  A68_142 ;    /* STRUCT(INT,INT,REF MODE142)  */
struct A68t143{
A68_INT  Mode;
A_PAD_INT(PAD_61)
A68_INT  Fieldno;
A_PAD_INT(PAD_62)
struct A68t123  Name;
A_PAD_ISTRUCT(A68_123 ,PAD_63)
struct A68t143 * Rest;
};
typedef struct A68t143  A68_143 ;    /* STRUCT(INT,INT,MODE123,REF MODE143)  */
struct A68t144{
A68_INT  Mode;
A_PAD_INT(PAD_64)
struct A68t144 * Rest;
};
typedef struct A68t144  A68_144 ;    /* STRUCT(INT,REF MODE144)  */

A_PROCEDURE(A68_VOID ,A68t145,(A68_INT ,struct A68t121 *),(A68_INT ,struct A68t121 *,void *));
typedef struct A68t145  A68_145 ;    /* PROC(INT) MODE121 */
struct A68t147 ;

A_PROCEDURE(A68_VOID ,A68t146,(A68_INT ,struct A68t147 *),(A68_INT ,struct A68t147 *,void *));
typedef struct A68t146  A68_146 ;    /* PROC(INT) REF MODE147 */
A_VECTOR(struct A68t122 ,A68t147);
typedef struct A68t147  A68_147 ;    /* VECTOR [] MODE122 */

A_PROCEDURE(A68_INT ,A68t148,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t148  A68_148 ;    /* PROC(INT,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t149,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t149  A68_149 ;    /* PROC(INT,INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t150,(struct A68t96 ),(struct A68t96 ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(MODE96) VOID */

A_PROCEDURE(struct A68t64 ,A68t151,(void),(void *));
typedef struct A68t151  A68_151 ;    /* PROC MODE64 */

A_PROCEDURE(A68_VOID ,A68t152,(struct A68t64 ),(struct A68t64 ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(MODE64) VOID */

A_PROCEDURE(A68_VOID ,A68t153,(struct A68t96 ,A68_VC *),(struct A68t96 ,A68_VC *,void *));
typedef struct A68t153  A68_153 ;    /* PROC(MODE96) MODE26 */

A_PROCEDURE(A68_BOOL ,A68t154,(struct A68t55 *,struct A68t55 *),(struct A68t55 *,struct A68t55 *,void *));
typedef struct A68t154  A68_154 ;    /* PROC(REF MODE55,REF MODE55) BOOL */

A_PROCEDURE(A68_BOOL ,A68t155,(struct A68t55 *),(struct A68t55 *,void *));
typedef struct A68t155  A68_155 ;    /* PROC(REF MODE55) BOOL */

A_PROCEDURE(A68_BOOL ,A68t156,(struct A68t55 *,A68_LBITS ),(struct A68t55 *,A68_LBITS ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(REF MODE55,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t157,(struct A68t55 *),(struct A68t55 *,void *));
typedef struct A68t157  A68_157 ;    /* PROC(REF MODE55) LONG BITS */

A_PROCEDURE(A68_VOID ,A68t158,(struct A68t55 *,A68_VC *),(struct A68t55 *,A68_VC *,void *));
typedef struct A68t158  A68_158 ;    /* PROC(REF MODE55) MODE26 */

A_PROCEDURE(struct A68t55 *,A68t159,(struct A68t55 *,A68_INT ),(struct A68t55 *,A68_INT ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(REF MODE55,INT) REF MODE55 */

A_PROCEDURE(A68_INT ,A68t160,(struct A68t62 ),(struct A68t62 ,void *));
typedef struct A68t160  A68_160 ;    /* PROC(MODE62) INT */
struct A68t161{
struct A68t55 * Value;
struct A68t67 * End;
A68_INT  Type;
A_PAD_INT(PAD_65)
};
typedef struct A68t161  A68_161 ;    /* STRUCT(REF MODE55,REF MODE67,INT)  */

A_PROCEDURE(A68_BOOL ,A68t162,(struct A68t55 *,A68_BITS ),(struct A68t55 *,A68_BITS ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(REF MODE55,BITS) BOOL */

A_PROCEDURE(struct A68t55 *,A68t163,(struct A68t63 *,A68_INT ),(struct A68t63 *,A68_INT ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(REF MODE63,INT) REF MODE55 */

A_PROCEDURE(struct A68t63 *,A68t164,(struct A68t63 *),(struct A68t63 *,void *));
typedef struct A68t164  A68_164 ;    /* PROC(REF MODE63) REF MODE63 */
struct A68t166 ;

A_PROCEDURE(struct A68t55 *,A68t165,(A68_INT ,A68_INT ,A68_BITS ,struct A68t166 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t166 ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(INT,INT,BITS,MODE166) REF MODE55 */
A_VECTOR(struct A68t55 *,A68t166);
typedef struct A68t166  A68_166 ;    /* VECTOR [] REF MODE55 */

A_PROCEDURE(A68_VOID ,A68t167,(struct A68t55 *,A68_BOOL ,A68_VC *),(struct A68t55 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t167  A68_167 ;    /* PROC(REF MODE55,BOOL) MODE26 */

A_PROCEDURE(A68_LINT ,A68t168,(struct A68t55 ),(struct A68t55 ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(MODE55) LONG INT */
struct A68t169 { A68_INT mode; union {
struct A68t55 * mode1;
A68_VC  mode2;
struct A68t59  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t169  A68_169 ;    /* UNION(REF MODE55,MODE26,MODE59)  */

A_PROCEDURE(A68_VOID ,A68t170,(struct A68t169 ,A68_VC *),(struct A68t169 ,A68_VC *,void *));
typedef struct A68t170  A68_170 ;    /* PROC(MODE169) MODE26 */
struct A68t172 ;

A_PROCEDURE(A68_VOID ,A68t171,(struct A68t172 ,A68_VC *),(struct A68t172 ,A68_VC *,void *));
typedef struct A68t171  A68_171 ;    /* PROC(MODE172) MODE26 */
A_VECTOR(struct A68t169 ,A68t172);
typedef struct A68t172  A68_172 ;    /* VECTOR [] MODE169 */

A_PROCEDURE(A68_VOID ,A68t173,(A68_VC ,struct A68t172 ,A68_VC *),(A68_VC ,struct A68t172 ,A68_VC *,void *));
typedef struct A68t173  A68_173 ;    /* PROC(MODE26,MODE172) MODE26 */

A_PROCEDURE(A68_VOID ,A68t174,(struct A68t172 ),(struct A68t172 ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(MODE172) VOID */

A_PROCEDURE(A68_VOID ,A68t175,(A68_VC ,A68_INT ,struct A68t172 ,struct A68t59 *),(A68_VC ,A68_INT ,struct A68t172 ,struct A68t59 *,void *));
typedef struct A68t175  A68_175 ;    /* PROC(MODE26,INT,MODE172) MODE59 */

A_PROCEDURE(struct A68t55 *,A68t176,(struct A68t55 *),(struct A68t55 *,void *));
typedef struct A68t176  A68_176 ;    /* PROC(REF MODE55) REF MODE55 */

A_PROCEDURE(struct A68t55 *,A68t177,(A68_VC ,struct A68t55 *),(A68_VC ,struct A68t55 *,void *));
typedef struct A68t177  A68_177 ;    /* PROC(MODE26,REF MODE55) REF MODE55 */

A_PROCEDURE(A68_VOID ,A68t178,(struct A68t70 ),(struct A68t70 ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(MODE70) VOID */

A_PROCEDURE(A68_VOID ,A68t179,(struct A68t69 ),(struct A68t69 ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(MODE69) VOID */

A_PROCEDURE(A68_VOID ,A68t180,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,53,A68t181);
typedef struct A68t181  A68_181 ;    /* STRUCT 53 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t182);
typedef struct A68t182  A68_182 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t183);
typedef struct A68t183  A68_183 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,28,A68t184);
typedef struct A68t184  A68_184 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t185);
typedef struct A68t185  A68_185 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t186);
typedef struct A68t186  A68_186 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t187);
typedef struct A68t187  A68_187 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t188);
typedef struct A68t188  A68_188 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t189);
typedef struct A68t189  A68_189 ;    /* STRUCT 2 CHAR */

A_PROCEDURE(A68_VOID ,A68t190,(A68_BOOL ,A68_VC ,struct A68t55 *,A68_VC *),(A68_BOOL ,A68_VC ,struct A68t55 *,A68_VC *,void *));
typedef struct A68t190  A68_190 ;    /* PROC(BOOL,MODE26,REF MODE55) MODE26 */

A_PROCEDURE(A68_VOID ,A68t191,(A68_BOOL ,A68_VC ,struct A68t55 *,struct A68t55 *,A68_VC *),(A68_BOOL ,A68_VC ,struct A68t55 *,struct A68t55 *,A68_VC *,void *));
typedef struct A68t191  A68_191 ;    /* PROC(BOOL,MODE26,REF MODE55,REF MODE55) MODE26 */
A_ISTRUCT(struct A68t169 ,2,A68t192);
typedef struct A68t192  A68_192 ;    /* STRUCT 2 MODE169 */

A_PROCEDURE(A68_VOID ,A68t193,(struct A68t55 *,A68_INT ,A68_INT ,struct A68t55 *),(struct A68t55 *,A68_INT ,A68_INT ,struct A68t55 *,void *));
typedef struct A68t193  A68_193 ;    /* PROC(REF MODE55,INT,INT) MODE55 */
A_ISTRUCT(A68_CHAR ,14,A68t194);
typedef struct A68t194  A68_194 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t195);
typedef struct A68t195  A68_195 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t196);
typedef struct A68t196  A68_196 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t197);
typedef struct A68t197  A68_197 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t198);
typedef struct A68t198  A68_198 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t199);
typedef struct A68t199  A68_199 ;    /* STRUCT 30 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t200);
typedef struct A68t200  A68_200 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t201);
typedef struct A68t201  A68_201 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(struct A68t76 ,5,A68t202);
typedef struct A68t202  A68_202 ;    /* STRUCT 5 MODE76 */
A_ISTRUCT(struct A68t169 ,3,A68t203);
typedef struct A68t203  A68_203 ;    /* STRUCT 3 MODE169 */
A_ISTRUCT(A68_CHAR ,16,A68t204);
typedef struct A68t204  A68_204 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(struct A68t76 ,7,A68t205);
typedef struct A68t205  A68_205 ;    /* STRUCT 7 MODE76 */
A_ISTRUCT(A68_CHAR ,8,A68t206);
typedef struct A68t206  A68_206 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(struct A68t169 ,4,A68t207);
typedef struct A68t207  A68_207 ;    /* STRUCT 4 MODE169 */

A_PROCEDURE(A68_VOID ,A68t208,(A68_VC ,struct A68t55 *,A68_INT ,struct A68t55 *),(A68_VC ,struct A68t55 *,A68_INT ,struct A68t55 *,void *));
typedef struct A68t208  A68_208 ;    /* PROC(MODE26,REF MODE55,INT) MODE55 */
A_ROW(struct A68t193 ,A68t209,1);
typedef struct A68t209  A68_209 ;    /* [] MODE193 */
A_ISTRUCT(struct A68t193 ,18,A68t210);
typedef struct A68t210  A68_210 ;    /* STRUCT 18 MODE193 */

A_PROCEDURE(A68_VOID ,A68t211,(struct A68t55 *,struct A68t62 ,struct A68t55 *),(struct A68t55 *,struct A68t62 ,struct A68t55 *,void *));
typedef struct A68t211  A68_211 ;    /* PROC(REF MODE55,MODE62) MODE55 */

A_PROCEDURE(A68_VOID ,A68t212,(struct A68t125 ,A68_VC ,A68_VC ,struct A68t55 *,struct A68t55 *,A68_BOOL ,A68_VC *),(struct A68t125 ,A68_VC ,A68_VC ,struct A68t55 *,struct A68t55 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t212  A68_212 ;    /* PROC(MODE125,MODE26,MODE26,REF MODE55,REF MODE55,BOOL) MODE26 */
A_ISTRUCT(A68_CHAR ,9,A68t213);
typedef struct A68t213  A68_213 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,33,A68t214);
typedef struct A68t214  A68_214 ;    /* STRUCT 33 CHAR */
A_ISTRUCT(A68_CHAR ,36,A68t215);
typedef struct A68t215  A68_215 ;    /* STRUCT 36 CHAR */
A_ISTRUCT(A68_CHAR ,35,A68t216);
typedef struct A68t216  A68_216 ;    /* STRUCT 35 CHAR */
A_ISTRUCT(A68_INT ,2,A68t217);
typedef struct A68t217  A68_217 ;    /* STRUCT 2 INT */

A_PROCEDURE(A68_VOID ,A68t218,(A68_INT ,struct A68t55 *,A68_VC *),(A68_INT ,struct A68t55 *,A68_VC *,void *));
typedef struct A68t218  A68_218 ;    /* PROC(INT,REF MODE55) MODE26 */
A_ISTRUCT(A68_CHAR ,37,A68t219);
typedef struct A68t219  A68_219 ;    /* STRUCT 37 CHAR */

A_PROCEDURE(A68_BITS ,A68t220,(A68_BOOL ,struct A68t55 *),(A68_BOOL ,struct A68t55 *,void *));
typedef struct A68t220  A68_220 ;    /* PROC(BOOL,REF MODE55) BITS */

A_PROCEDURE(A68_VOID ,A68t221,(A68_BOOL ,A68_BOOL ,A68_VC ,struct A68t55 *,struct A68t55 *,struct A68t56 *),(A68_BOOL ,A68_BOOL ,A68_VC ,struct A68t55 *,struct A68t55 *,struct A68t56 *,void *));
typedef struct A68t221  A68_221 ;    /* PROC(BOOL,BOOL,MODE26,REF MODE55,REF MODE55) MODE56 */
A_ISTRUCT(A68_CHAR ,38,A68t222);
typedef struct A68t222  A68_222 ;    /* STRUCT 38 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t223);
typedef struct A68t223  A68_223 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t224);
typedef struct A68t224  A68_224 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(struct A68t193 ,33,A68t225);
typedef struct A68t225  A68_225 ;    /* STRUCT 33 MODE193 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from values --- */
extern A68_VOID  GZPACTR_getcfragment(struct A68t55 *,A68_VC *);
extern A68_BITS  PKJACTR_defaultinfo;
#define RKJACTR_atomic 0X2U
#define SKJACTR_effects 0X4U
#define TKJACTR_nonloc 0X8U
#define UKJACTR_voided 0X10U
#define VKJACTR_lvalue 0X20U
#define XKJACTR_fxwarn 0X80U
extern A68_BOOL  UVPACTR_hasattribute(struct A68t55 *,A68_BITS );
extern A68_55  DLJACTR_skipvalue;
extern A68_VOID  NDQACTR_bracketcfragment(struct A68t55 *,A68_VC *);
extern A68_VOID  EOQACTR_usemacro(A68_VC ,struct A68t172 ,A68_VC *);
extern A68_VOID  JOQACTR_emitline(struct A68t172 );
extern A68_55 * KPQACTR_yield(struct A68t55 *);
extern A68_55 * VPQACTR_yield(A68_VC ,struct A68t55 *);
/* --- End of imports from values --- */


/* --- Imports from uniquenameserver --- */
extern A68_64  QIMACTR_newuniquename(void);
/* --- End of imports from uniquenameserver --- */


/* --- Imports from modes --- */
extern A68_VOID  LLOACTR_declarectemporary(A68_INT ,A68_VC ,A68_59 *);
extern A68_BOOL  ARMACTR_isarray(A68_INT );
extern A68_BOOL  VQMACTR_isrow(A68_INT );
extern A68_127  KMOACTR_new;
extern A68_VOID  FLNACTR_cast(A68_INT ,A68_VC *);
extern A68_VOID  KLNACTR_csizeof(A68_INT ,A68_VC *);
extern A68_INT  EOMACTR_deref(A68_INT );
extern A68_BOOL  WOMACTR_isint(A68_INT );
extern A68_BOOL  TPMACTR_isrow(A68_INT );
extern A68_BOOL  PPMACTR_isvec(A68_INT );
extern A68_BOOL  IQMACTR_isflexrow(A68_INT );
extern A68_BOOL  EQMACTR_isflexvec(A68_INT );
/* --- End of imports from modes --- */


/* --- Imports from incmode --- */
extern A68_INT  WFAACTR_refrefmark;
/* --- End of imports from incmode --- */


/* --- Imports from idtable --- */
/* --- End of imports from idtable --- */


/* --- Imports from incoperfn --- */
#define RGAACTR_biopnumbersstart 1000
#define SGAACTR_opnumberdivisor 16
#define TGAACTR_biopnumberdivisor 100
extern A68_BITS  ZGAACTR_parammask;
/* --- End of imports from incoperfn --- */


/* --- Imports from evalbase --- */
extern A68_VOID  QXQACTR_eval1(struct A68t55 *,struct A68t55 **);
extern A68_VOID  ZXQACTR_eval_pass_left(struct A68t55 *,struct A68t55 **,A68_BITS );
extern A68_VOID  IYQACTR_eval_pass_right(struct A68t55 *,struct A68t55 **,A68_BITS );
extern A68_VOID  RYQACTR_eval2(struct A68t55 *,struct A68t55 **,struct A68t55 **);
/* --- End of imports from evalbase --- */


/* --- Imports from environment --- */
extern A68_VOID  WXIACTR_assert(A68_VC ,A68_BOOL );
extern A68_BOOL  AQIACTR_verboseoption;
/* --- End of imports from environment --- */


/* --- Imports from environ --- */
extern A68_INT  QSLACTR_locdecstream(A68_INT );
extern A68_INT  VRLACTR_currentlevel(void);
/* --- End of imports from environ --- */


/* --- Imports from coutput --- */
extern A68_VOID  MDMACTR_writecstream(struct A68t75 ,A68_INT );
/* --- End of imports from coutput --- */


/* --- Imports from centities --- */
extern A68_SINT  EIAACTR_cnewline;
extern A68_VOID  JIAACTR_bracket(A68_VC ,A68_VC *);
/* --- End of imports from centities --- */


/* --- Imports from biops --- */
extern A68_VOID  LGTACTR_monadicbiopsemantics(struct A68t55 *,A68_INT ,A68_55 *);
extern A68_VOID  KBTACTR_biop99(struct A68t55 *,A68_55 *);
/* --- End of imports from biops --- */


/* --- Imports from usefulops --- */
extern A68_BITS * PKAAOSF_orab(A68_BITS *,A68_BITS );
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void AUPACTR(void);   /* values */
extern void RHMACTR(void);   /* uniquenameserver */
extern void DNMACTR(void);   /* modes */
extern void ZDAACTR(void);   /* incmode */
extern void PPKACTR(void);   /* idtable */
extern void XFAACTR(void);   /* incoperfn */
extern void IXQACTR(void);   /* evalbase */
extern void HPIACTR(void);   /* environment */
extern void BPLACTR(void);   /* environ */
extern void PTLACTR(void);   /* coutput */
extern void THAACTR(void);   /* centities */
extern void BBTACTR(void);   /* biops */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_181   WGTACTR = {"$Id: adicops.a68,v 1.2 2002-02-04 09:26:51 sian Exp $"}; 
A_GISVEC(A68_VC ,XGTACTR,WGTACTR,53)
static A68_182   YGTACTR = {"ADICOPS - "}; 
A_GISVEC(A68_VC ,ZGTACTR,YGTACTR,10)
static A68_VC  AHTACTR_modulename;
static A68_183   BHTACTR = {":illegal version number"}; 
A_GISVEC(A68_VC ,CHTACTR,BHTACTR,23)
static A68_VC  DHTACTR_qvfault;
static A68_184   EHTACTR = {":mode COMPL is not supported"}; 
A_GISVEC(A68_VC ,FHTACTR,EHTACTR,28)
static A68_VC  GHTACTR_qcompl;
static A68_185   HHTACTR = {"monadic UPB"}; 
A_GISVEC(A68_VC ,IHTACTR,HHTACTR,11)
static A68_VC  JHTACTR_qmupb;
static A68_185   KHTACTR = {"monadic LWB"}; 
A_GISVEC(A68_VC ,LHTACTR,KHTACTR,11)
static A68_VC  MHTACTR_qmlwb;
static A68_186   NHTACTR = {"ABS"}; 
A_GISVEC(A68_VC ,OHTACTR,NHTACTR,3)
static A68_VC  PHTACTR_qabs;
static A68_187   QHTACTR = {"ROUND"}; 
A_GISVEC(A68_VC ,RHTACTR,QHTACTR,5)
static A68_VC  SHTACTR_qround;
static A68_188   THTACTR = {"ENTIER"}; 
A_GISVEC(A68_VC ,UHTACTR,THTACTR,6)
static A68_VC  VHTACTR_qentier;
static A68_40   WHTACTR = {"SIGN"}; 
A_GISVEC(A68_VC ,XHTACTR,WHTACTR,4)
static A68_VC  YHTACTR_qsign;
static A68_189   ZHTACTR = {"RE"}; 
A_GISVEC(A68_VC ,AITACTR,ZHTACTR,2)
static A68_VC  BITACTR_qre;
static A68_189   CITACTR = {"IM"}; 
A_GISVEC(A68_VC ,DITACTR,CITACTR,2)
static A68_VC  EITACTR_qim;
static A68_186   FITACTR = {"ARG"}; 
A_GISVEC(A68_VC ,GITACTR,FITACTR,3)
static A68_VC  HITACTR_qarg;
static A68_40   IITACTR = {"CONJ"}; 
A_GISVEC(A68_VC ,JITACTR,IITACTR,4)
static A68_VC  KITACTR_qconj;
static A68_VC  MITACTR_qi;
static A68_40   NITACTR = {"PLUS"}; 
A_GISVEC(A68_VC ,OITACTR,NITACTR,4)
static A68_VC  PITACTR_qplus;
static A68_187   QITACTR = {"MINUS"}; 
A_GISVEC(A68_VC ,RITACTR,QITACTR,5)
static A68_VC  SITACTR_qminus;
static A68_187   TITACTR = {"TIMES"}; 
A_GISVEC(A68_VC ,UITACTR,TITACTR,5)
static A68_VC  VITACTR_qtimes;
static A68_186   WITACTR = {"DIV"}; 
A_GISVEC(A68_VC ,XITACTR,WITACTR,3)
static A68_VC  YITACTR_qdiv;
static A68_40   ZITACTR = {"OVER"}; 
A_GISVEC(A68_VC ,AJTACTR,ZITACTR,4)
static A68_VC  BJTACTR_qover;
static A68_186   CJTACTR = {"MOD"}; 
A_GISVEC(A68_VC ,DJTACTR,CJTACTR,3)
static A68_VC  EJTACTR_qmod;
static A68_189   FJTACTR = {"**"}; 
A_GISVEC(A68_VC ,GJTACTR,FJTACTR,2)
static A68_VC  HJTACTR_qpower;
static A68_40   IJTACTR = {"ELEM"}; 
A_GISVEC(A68_VC ,JJTACTR,IJTACTR,4)
static A68_VC  KJTACTR_qelem;
static A68_188   LJTACTR = {"PLUSAB"}; 
A_GISVEC(A68_VC ,MJTACTR,LJTACTR,6)
static A68_VC  NJTACTR_qplusab;
static A68_188   OJTACTR = {"PLUSTO"}; 
A_GISVEC(A68_VC ,PJTACTR,OJTACTR,6)
static A68_VC  QJTACTR_qplusto;
static A68_64   RJTACTR = {"MINUSAB"}; 
A_GISVEC(A68_VC ,SJTACTR,RJTACTR,7)
static A68_VC  TJTACTR_qminusab;
static A68_64   UJTACTR = {"TIMESAB"}; 
A_GISVEC(A68_VC ,VJTACTR,UJTACTR,7)
static A68_VC  WJTACTR_qtimesab;
static A68_188   XJTACTR = {"OVERAB"}; 
A_GISVEC(A68_VC ,YJTACTR,XJTACTR,6)
static A68_VC  ZJTACTR_qoverab;
static A68_187   AKTACTR = {"MODAB"}; 
A_GISVEC(A68_VC ,BKTACTR,AKTACTR,5)
static A68_VC  CKTACTR_qmodab;
static A68_187   DKTACTR = {"DIVAB"}; 
A_GISVEC(A68_VC ,EKTACTR,DKTACTR,5)
static A68_VC  FKTACTR_qdivab;
static A68_189   GKTACTR = {"IS"}; 
A_GISVEC(A68_VC ,HKTACTR,GKTACTR,2)
static A68_VC  IKTACTR_qis;
static A68_40   JKTACTR = {"ISNT"}; 
A_GISVEC(A68_VC ,KKTACTR,JKTACTR,4)
static A68_VC  LKTACTR_qisnt;
static A68_64   MKTACTR = {"IS/ISNT"}; 
A_GISVEC(A68_VC ,NKTACTR,MKTACTR,7)
static A68_VC  OKTACTR_qisisnt;
static A68_188   PKTACTR = {" COMPL"}; 
A_GISVEC(A68_VC ,QKTACTR,PKTACTR,6)
static A68_VC  RKTACTR_qcomplex;
static A68_194   EMTACTR = {"A_COMPL_MMINUS"}; 
A_GISVEC(A68_VC ,KMTACTR,EMTACTR,14)
static A68_40   YMTACTR = {".upb"}; 
A_GISVEC(A68_VC ,ANTACTR,YMTACTR,4)
static A68_185   DNTACTR = {".dim[0].upb"}; 
A_GISVEC(A68_VC ,FNTACTR,DNTACTR,11)
static A68_189   QNTACTR = {" 1"}; 
A_GISVEC(A68_VC ,RNTACTR,QNTACTR,2)
static A68_185   UNTACTR = {".dim[0].lwb"}; 
A_GISVEC(A68_VC ,WNTACTR,UNTACTR,11)
static A68_195   POTACTR = {"ADICOPS - NOT"}; 
A_GISVEC(A68_VC ,QOTACTR,POTACTR,13)
static A68_196   BPTACTR = {"(A68_INT)(unsigned char)"}; 
A_GISVEC(A68_VC ,CPTACTR,BPTACTR,24)
static A68_187   GPTACTR = {"A_ABS"}; 
static A68_40   HPTACTR = {" INT"}; 
A_GISVEC(A68_VC ,IPTACTR,HPTACTR,4)
A_GISVEC(A68_VC ,JPTACTR,GPTACTR,5)
static A68_187   LPTACTR = {"A_ABS"}; 
static A68_187   MPTACTR = {" REAL"}; 
A_GISVEC(A68_VC ,NPTACTR,MPTACTR,5)
A_GISVEC(A68_VC ,OPTACTR,LPTACTR,5)
static A68_185   QPTACTR = {"A_COMPL_ABS"}; 
A_GISVEC(A68_VC ,RPTACTR,QPTACTR,11)
static A68_195   JQTACTR = {"ADICOPS - BIN"}; 
A_GISVEC(A68_VC ,KQTACTR,JQTACTR,13)
static A68_197   SQTACTR = {"(A68_SSBITS)"}; 
A_GISVEC(A68_VC ,TQTACTR,SQTACTR,12)
static A68_198   XQTACTR = {"ADICOPS - REPR "}; 
A_GISVEC(A68_VC ,YQTACTR,XQTACTR,15)
static A68_199   HRTACTR = {"ADICOPS - LENG incorrect mode:"}; 
A_GISVEC(A68_VC ,JRTACTR,HRTACTR,30)
static A68_200   XRTACTR = {"ADICOPS - SHORT incorrect mode:"}; 
A_GISVEC(A68_VC ,ZRTACTR,XRTACTR,31)
static A68_40   NSTACTR = {" & 1"}; 
A_GISVEC(A68_VC ,PSTACTR,NSTACTR,4)
static A68_194   SSTACTR = {"ADICOPS - ODD "}; 
A_GISVEC(A68_VC ,TSTACTR,SSTACTR,14)
static A68_188   CTTACTR = {"A_SIGN"}; 
A_GISVEC(A68_VC ,DTTACTR,CTTACTR,6)
static A68_198   GTTACTR = {"ADICOPS - SIGN "}; 
A_GISVEC(A68_VC ,HTTACTR,GTTACTR,15)
static A68_198   QTTACTR = {"incorrect mode:"}; 
A_GISVEC(A68_VC ,RTTACTR,QTTACTR,15)
static A68_64   YTTACTR = {"double "}; 
A_GISVEC(A68_VC ,ZTTACTR,YTTACTR,7)
static A68_189   FUTACTR = {"/*"}; 
static A68_189   GUTACTR = {"*/"}; 
A_GISVEC(A68_VC ,HUTACTR,FUTACTR,2)
A_GISVEC(A68_VC ,IUTACTR,GUTACTR,2)
static A68_201   LUTACTR = {""}; 
A_GISVEC(A68_VC ,MUTACTR,LUTACTR,0)
static A68_64   RUTACTR = {"A_ROUND"}; 
A_GISVEC(A68_VC ,ZUTACTR,RUTACTR,7)
static A68_204   KVTACTR = {" incorrect mode:"}; 
A_GISVEC(A68_VC ,LVTACTR,KVTACTR,16)
static A68_64   VVTACTR = {"double "}; 
A_GISVEC(A68_VC ,WVTACTR,VVTACTR,7)
static A68_189   FWTACTR = {"/*"}; 
static A68_189   GWTACTR = {"*/"}; 
A_GISVEC(A68_VC ,HWTACTR,FWTACTR,2)
A_GISVEC(A68_VC ,IWTACTR,GWTACTR,2)
static A68_201   LWTACTR = {""}; 
A_GISVEC(A68_VC ,MWTACTR,LWTACTR,0)
static A68_206   RWTACTR = {"A_ENTIER"}; 
A_GISVEC(A68_VC ,AXTACTR,RWTACTR,8)
static A68_182   UXTACTR = {"A_COMPL_RE"}; 
A_GISVEC(A68_VC ,WXTACTR,UXTACTR,10)
static A68_182   CYTACTR = {"A_COMPL_IM"}; 
A_GISVEC(A68_VC ,EYTACTR,CYTACTR,10)
static A68_185   MYTACTR = {"A_COMPL_ARG"}; 
A_GISVEC(A68_VC ,QYTACTR,MYTACTR,11)
static A68_40   ZYTACTR = {"CONJ"}; 
A_GISVEC(A68_VC ,AZTACTR,ZYTACTR,4)
static A68_197   EZTACTR = {"A_COMPL_CONJ"}; 
A_GISVEC(A68_VC ,KZTACTR,EZTACTR,12)
static A68_209  KAUACTR_monadicsemantics;
static A68_187   EBUACTR = {" L op"}; 
A_GISVEC(A68_VC ,FBUACTR,EBUACTR,5)
static A68_187   HBUACTR = {" R op"}; 
A_GISVEC(A68_VC ,IBUACTR,HBUACTR,5)
static A68_189   XBUACTR = {" 1"}; 
A_GISVEC(A68_VC ,YBUACTR,XBUACTR,2)
static A68_189   CCUACTR = {" 2"}; 
A_GISVEC(A68_VC ,DCUACTR,CCUACTR,2)
static A68_206   TCUACTR = {"A_C_PLUS"}; 
A_GISVEC(A68_VC ,VCUACTR,TCUACTR,8)
static A68_197   BDUACTR = {"A_COMPL_PLUS"}; 
A_GISVEC(A68_VC ,CDUACTR,BDUACTR,12)
static A68_213   FDUACTR = {"A_VC_PLUS"}; 
A_GISVEC(A68_VC ,GDUACTR,FDUACTR,9)
static A68_213   IDUACTR = {"A_RC_PLUS"}; 
A_GISVEC(A68_VC ,JDUACTR,IDUACTR,9)
static A68_195   XDUACTR = {"A_COMPL_MINUS"}; 
A_GISVEC(A68_VC ,YDUACTR,XDUACTR,13)
static A68_187   NEUACTR = {".dim["}; 
static A68_206   OEUACTR = {" -1].upb"}; 
A_GISVEC(A68_VC ,QEUACTR,NEUACTR,5)
A_GISVEC(A68_VC ,SEUACTR,OEUACTR,8)
static A68_187   DFUACTR = {".dim["}; 
static A68_206   EFUACTR = {" -1].lwb"}; 
A_GISVEC(A68_VC ,GFUACTR,DFUACTR,5)
A_GISVEC(A68_VC ,IFUACTR,EFUACTR,8)
static A68_194   BGUACTR = {"ADICOPS - AND "}; 
A_GISVEC(A68_VC ,CGUACTR,BGUACTR,14)
static A68_195   UGUACTR = {"ADICOPS - OR "}; 
A_GISVEC(A68_VC ,VGUACTR,UGUACTR,13)
static A68_214   FHUACTR = {"ADICOPS < or >: illegal op number"}; 
A_GISVEC(A68_VC ,GHUACTR,FHUACTR,33)
static A68_189   JHUACTR = {"LT"}; 
A_GISVEC(A68_VC ,LHUACTR,JHUACTR,2)
static A68_189   MHUACTR = {"GT"}; 
A_GISVEC(A68_VC ,NHUACTR,MHUACTR,2)
static A68_214   OHUACTR = {"ADICOPS < or >: illegal op number"}; 
A_GISVEC(A68_VC ,PHUACTR,OHUACTR,33)
static A68_187   ZHUACTR = {"A_VC_"}; 
A_GISVEC(A68_VC ,AIUACTR,ZHUACTR,5)
static A68_187   CIUACTR = {"A_RC_"}; 
A_GISVEC(A68_VC ,DIUACTR,CIUACTR,5)
static A68_189   OIUACTR = {"<="}; 
A_GISVEC(A68_VC ,QIUACTR,OIUACTR,2)
static A68_189   RIUACTR = {">="}; 
A_GISVEC(A68_VC ,SIUACTR,RIUACTR,2)
static A68_215   TIUACTR = {"ADICOPS - <= or >= illegal op number"}; 
A_GISVEC(A68_VC ,UIUACTR,TIUACTR,36)
static A68_189   XIUACTR = {"LE"}; 
A_GISVEC(A68_VC ,ZIUACTR,XIUACTR,2)
static A68_189   AJUACTR = {"GE"}; 
A_GISVEC(A68_VC ,BJUACTR,AJUACTR,2)
static A68_215   CJUACTR = {"ADICOPS - <= or >= illegal op number"}; 
A_GISVEC(A68_VC ,DJUACTR,CJUACTR,36)
static A68_187   LJUACTR = {"A_LB_"}; 
A_GISVEC(A68_VC ,MJUACTR,LJUACTR,5)
static A68_187   QJUACTR = {"A_VC_"}; 
A_GISVEC(A68_VC ,RJUACTR,QJUACTR,5)
static A68_187   TJUACTR = {"A_RC_"}; 
A_GISVEC(A68_VC ,UJUACTR,TJUACTR,5)
static A68_189   FKUACTR = {"=="}; 
A_GISVEC(A68_VC ,HKUACTR,FKUACTR,2)
static A68_189   IKUACTR = {"!="}; 
A_GISVEC(A68_VC ,JKUACTR,IKUACTR,2)
static A68_216   KKUACTR = {"ADICOPS - = or /= illegal op number"}; 
A_GISVEC(A68_VC ,LKUACTR,KKUACTR,35)
static A68_189   OKUACTR = {"EQ"}; 
A_GISVEC(A68_VC ,QKUACTR,OKUACTR,2)
static A68_189   RKUACTR = {"NE"}; 
A_GISVEC(A68_VC ,SKUACTR,RKUACTR,2)
static A68_216   TKUACTR = {"ADICOPS - = or /= illegal op number"}; 
A_GISVEC(A68_VC ,UKUACTR,TKUACTR,35)
static A68_182   CLUACTR = {"A_COMPL_EQ"}; 
A_GISVEC(A68_VC ,ELUACTR,CLUACTR,10)
static A68_185   FLUACTR = {"A_COMPL_NEQ"}; 
A_GISVEC(A68_VC ,GLUACTR,FLUACTR,11)
static A68_187   KLUACTR = {"A_VC_"}; 
A_GISVEC(A68_VC ,LLUACTR,KLUACTR,5)
static A68_187   NLUACTR = {"A_RC_"}; 
A_GISVEC(A68_VC ,OLUACTR,NLUACTR,5)
static A68_213   BMUACTR = {"A_C_TIMES"}; 
A_GISVEC(A68_VC ,DMUACTR,BMUACTR,9)
static A68_213   FMUACTR = {"A_C_TIMES"}; 
A_GISVEC(A68_VC ,GMUACTR,FMUACTR,9)
static A68_195   MMUACTR = {"A_COMPL_TIMES"}; 
A_GISVEC(A68_VC ,NMUACTR,MMUACTR,13)
static A68_182   QMUACTR = {"A_VC_TIMES"}; 
A_GISVEC(A68_VC ,RMUACTR,QMUACTR,10)
static A68_182   TMUACTR = {"A_VC_TIMES"}; 
A_GISVEC(A68_VC ,UMUACTR,TMUACTR,10)
static A68_182   WMUACTR = {"A_RC_TIMES"}; 
A_GISVEC(A68_VC ,XMUACTR,WMUACTR,10)
static A68_182   ZMUACTR = {"A_RC_TIMES"}; 
A_GISVEC(A68_VC ,ANUACTR,ZMUACTR,10)
static A68_194   WNUACTR = {"A_COMPL_DIVIDE"}; 
A_GISVEC(A68_VC ,XNUACTR,WNUACTR,14)
static A68_187   CPUACTR = {"A_MOD"}; 
A_GISVEC(A68_VC ,KPUACTR,CPUACTR,5)
static A68_198   WPUACTR = {" incorrect mode"}; 
A_GISVEC(A68_VC ,XPUACTR,WPUACTR,15)
static A68_182   AQUACTR = {"A_LI_POWER"}; 
A_GISVEC(A68_VC ,JQUACTR,AQUACTR,10)
static A68_182   MQUACTR = {"A_LR_POWER"}; 
A_GISVEC(A68_VC ,VQUACTR,MQUACTR,10)
static A68_195   ZQUACTR = {"A_COMPL_POWER"}; 
A_GISVEC(A68_VC ,GRUACTR,ZQUACTR,13)
static A68_213   BSUACTR = {"A_COMPL_I"}; 
A_GISVEC(A68_VC ,JSUACTR,BSUACTR,9)
static A68_213   MSUACTR = {"A_COMPL_I"}; 
A_GISVEC(A68_VC ,SSUACTR,MSUACTR,9)
static A68_186   ATUACTR = {"SHL"}; 
A_GISVEC(A68_VC ,CTUACTR,ATUACTR,3)
static A68_186   DTUACTR = {"SHR"}; 
A_GISVEC(A68_VC ,ETUACTR,DTUACTR,3)
static A68_219   FTUACTR = {"ADICOPS SHL or SHR: illegal op number"}; 
A_GISVEC(A68_VC ,GTUACTR,FTUACTR,37)
static A68_189   NTUACTR = {"A_"}; 
A_GISVEC(A68_VC ,OTUACTR,NTUACTR,2)
static A68_188   AUUACTR = {"A_ELEM"}; 
A_GISVEC(A68_VC ,LUUACTR,AUUACTR,6)
static A68_189   QVUACTR = {" ;"}; 
A_GISVEC(A68_VC ,RVUACTR,QVUACTR,2)
static A68_189   CWUACTR = {"+="}; 
A_GISVEC(A68_VC ,EWUACTR,CWUACTR,2)
static A68_189   GWUACTR = {"+="}; 
A_GISVEC(A68_VC ,HWUACTR,GWUACTR,2)
static A68_194   JWUACTR = {"A_COMPL_PLUSAB"}; 
A_GISVEC(A68_VC ,KWUACTR,JWUACTR,14)
static A68_185   OWUACTR = {"A_VC_PLUSAB"}; 
A_GISVEC(A68_VC ,PWUACTR,OWUACTR,11)
static A68_185   RWUACTR = {"A_RC_PLUSAB"}; 
A_GISVEC(A68_VC ,SWUACTR,RWUACTR,11)
static A68_222   FXUACTR = {"v1: mode isnt vec[]char,flex vec[]char"}; 
A_GISVEC(A68_VC ,GXUACTR,FXUACTR,38)
static A68_185   HXUACTR = {"A_VC_TOPLUS"}; 
A_GISVEC(A68_VC ,JXUACTR,HXUACTR,11)
static A68_123   LXUACTR = {"v2: mode isnt []char,flex []char"}; 
A_GISVEC(A68_VC ,MXUACTR,LXUACTR,32)
static A68_185   NXUACTR = {"A_RC_TOPLUS"}; 
A_GISVEC(A68_VC ,OXUACTR,NXUACTR,11)
static A68_189   BYUACTR = {"-="}; 
A_GISVEC(A68_VC ,DYUACTR,BYUACTR,2)
static A68_198   FYUACTR = {"A_COMPL_MINUSAB"}; 
A_GISVEC(A68_VC ,GYUACTR,FYUACTR,15)
static A68_189   VYUACTR = {"*="}; 
A_GISVEC(A68_VC ,XYUACTR,VYUACTR,2)
static A68_189   ZYUACTR = {"*="}; 
A_GISVEC(A68_VC ,AZUACTR,ZYUACTR,2)
static A68_198   CZUACTR = {"A_COMPL_TIMESAB"}; 
A_GISVEC(A68_VC ,DZUACTR,CZUACTR,15)
static A68_197   HZUACTR = {"A_VC_TIMESAB"}; 
A_GISVEC(A68_VC ,IZUACTR,HZUACTR,12)
static A68_197   KZUACTR = {"A_RC_TIMESAB"}; 
A_GISVEC(A68_VC ,LZUACTR,KZUACTR,12)
static A68_189   YZUACTR = {"/="}; 
A_GISVEC(A68_VC ,AAVACTR,YZUACTR,2)
static A68_64   OAVACTR = {"A_MODAB"}; 
A_GISVEC(A68_VC ,PAVACTR,OAVACTR,7)
static A68_189   BBVACTR = {"/="}; 
A_GISVEC(A68_VC ,CBVACTR,BBVACTR,2)
static A68_195   FBVACTR = {"A_COMPL_DIVAB"}; 
A_GISVEC(A68_VC ,GBVACTR,FBVACTR,13)
static A68_189   QBVACTR = {"=="}; 
A_GISVEC(A68_VC ,SBVACTR,QBVACTR,2)
static A68_189   TBVACTR = {"!="}; 
A_GISVEC(A68_VC ,UBVACTR,TBVACTR,2)
static A68_223   VBVACTR = {" illegal op number"}; 
A_GISVEC(A68_VC ,WBVACTR,VBVACTR,18)
static A68_189   DCVACTR = {"!="}; 
A_GISVEC(A68_VC ,ECVACTR,DCVACTR,2)
static A68_189   FCVACTR = {"! "}; 
A_GISVEC(A68_VC ,HCVACTR,FCVACTR,2)
static A68_201   ICVACTR = {""}; 
A_GISVEC(A68_VC ,JCVACTR,ICVACTR,0)
static A68_186   KCVACTR = {"A_R"}; 
A_GISVEC(A68_VC ,MCVACTR,KCVACTR,3)
static A68_186   NCVACTR = {"A_V"}; 
A_GISVEC(A68_VC ,OCVACTR,NCVACTR,3)
static A68_182   PCVACTR = {"STRUCTCOMP"}; 
A_GISVEC(A68_VC ,RCVACTR,PCVACTR,10)
static A68_224   JEVACTR = {"CYCLE not implemented"}; 
A_GISVEC(A68_VC ,KEVACTR,JEVACTR,21)
static A68_209  QEVACTR_dyadicsemantics;
static A68_209  UEVACTR_dyadicbiopsemantics;

A_STATIC A68_VOID  VKTACTR_simplemonop(A68_BOOL  Macro, A68_VC  Oper, A68_55 * Op, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  GLTACTR_simpledyop(A68_BOOL  Macro, A68_VC  Oper, A68_55 * Left, A68_55 * Right, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  TLTACTR_monadicplus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  ZLTACTR_monadicminus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  VMTACTR_monadicupb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  NNTACTR_monadiclwb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  EOTACTR_not(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  WOTACTR_abs(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  AQTACTR_bin(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  PQTACTR_repr(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  ERTACTR_lengthen(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  URTACTR_shorten(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  KSTACTR_odd(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  ZSTACTR_sign(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  NTTACTR_round(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  HVTACTR_entier(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  IXTACTR_simplemoncomp(A68_VC  Mac, A68_55 * Root, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  TXTACTR_re(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  BYTACTR_im(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  JYTACTR_arg(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  XYTACTR_conj(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A68_VOID  NAUACTR_monadicsem(A68_55 * Root, A68_62  Rator, A68_55  *ReturnedValue);

A_STATIC A68_VOID  DBUACTR_complexop(A68_125  Modes, A68_VC  Op, A68_VC  Name, A68_55 * Left, A68_55 * Right, A68_BOOL  Lval, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  QCUACTR_dyadicplus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  TDUACTR_dyadicminus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  JEUACTR_dyadicupb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  ZEUACTR_dyadiclwb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  PFUACTR_and(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  IGUACTR_or(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  BHUACTR_lessnotless(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  NIUACTR_lesseqgreatereq(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  EKUACTR_eqnoteq(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  YLUACTR_times(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  KNUACTR_divide(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  IOUACTR_over(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  UOUACTR_mod(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  SPUACTR_power(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  NRUACTR_castvalue(A68_INT  Mode, A68_55 * Value, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  URUACTR_imaginary(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  ZSUACTR_shiftleftright(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  WTUACTR_elem(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_BITS  UUUACTR_abattribute(A68_BOOL  Noref, A68_55 * Op);

A_STATIC A68_VOID  BVUACTR_simpleabop(A68_BOOL  Noref, A68_BOOL  Macro, A68_VC  Oper, A68_55 * Left, A68_55 * Right, A68_56  *ReturnedValue);

A_STATIC A68_VOID  YVUACTR_plusab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  BXUACTR_plusto(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  XXUACTR_minusab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  RYUACTR_timesab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  UZUACTR_overab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  JAVACTR_modab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  WAVACTR_divab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  PBVACTR_isisnt(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  IEVACTR_anonymous(A68_55 * V, A68_INT  I, A68_INT  J, A68_55  *ReturnedValue);

A68_VOID  XEVACTR_dyadicsem(A68_55 * Root, A68_62  Rator, A68_55  *ReturnedValue);

A_STATIC A68_VOID  VKTACTR_simplemonop(A68_BOOL  Macro, A68_VC  Oper, A68_55 * Op, A68_VC  *ReturnedValue)
{ 
A68_VC  WKTACTR;  /* clause result */
A68_169  XKTACTR;  /* OPERATORS - mode -> union mode */
A68_172  YKTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ZKTACTR;  /* avoid structure result */
A68_VC  ALTACTR;  /* avoid structure result */
A68_VC  BLTACTR;  /* avoid structure result */
A_PROC_ENTRY(simplemonop);
 /* line 85: */
 /* line 86: */
if ( Macro )
{ 
 /* line 87: */
EOQACTR_usemacro( Oper, A_HVEC(YKTACTR,A_UNITE(XKTACTR,mode1,1,Op),A68_169 ), &ZKTACTR );
WKTACTR = ZKTACTR;
} 
else
{ 
 /* line 88: */
NDQACTR_bracketcfragment( Op, &ALTACTR );
JIAACTR_bracket( A_VC_PLUS(Oper,ALTACTR), &BLTACTR );
WKTACTR = BLTACTR;
} 
A_PROC_EXIT(simplemonop);
*ReturnedValue = (WKTACTR);
return;
} 
#undef NL
 /* line 91: */

A_STATIC A68_VOID  GLTACTR_simpledyop(A68_BOOL  Macro, A68_VC  Oper, A68_55 * Left, A68_55 * Right, A68_VC  *ReturnedValue)
{ 
A68_192  HLTACTR;  /* collateral clause result */
A68_169  ILTACTR;  /* OPERATORS - mode -> union mode */
A68_169  JLTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KLTACTR;  /* clause result */
A68_172  LLTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  MLTACTR;  /* avoid structure result */
A68_VC  NLTACTR;  /* avoid structure result */
A68_VC  OLTACTR;  /* avoid structure result */
A68_VC  PLTACTR;  /* avoid structure result */
A_PROC_ENTRY(simpledyop);
 /* line 92: */
 /* line 93: */
if ( Macro )
{ 
HLTACTR.data[0] = A_UNITE(ILTACTR,mode1,1,Left);
HLTACTR.data[1] = A_UNITE(JLTACTR,mode1,1,Right);
 /* line 94: */
 /* line 95: */
EOQACTR_usemacro( Oper, A_HISVEC(LLTACTR,HLTACTR,2,A68_169 ), &MLTACTR );
KLTACTR = MLTACTR;
} 
else
{ 
 /* line 96: */
 /* line 97: */
NDQACTR_bracketcfragment( Left, &NLTACTR );
NDQACTR_bracketcfragment( Right, &OLTACTR );
JIAACTR_bracket( A_VC_PLUS(A_VC_PLUS(NLTACTR,Oper),OLTACTR), &PLTACTR );
KLTACTR = PLTACTR;
} 
A_PROC_EXIT(simpledyop);
*ReturnedValue = (KLTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  TLTACTR_monadicplus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * ULTACTR_op;
A68_55  VLTACTR;  /* clause result */
A_PROC_ENTRY(monadicplus);
 /* line 100: */
 /* line 101: */
{ 
QXQACTR_eval1(Root, (&ULTACTR_op));
 /* line 102: */
VLTACTR = (*ULTACTR_op);
} 
A_PROC_EXIT(monadicplus);
*ReturnedValue = (VLTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ZLTACTR_monadicminus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * AMTACTR_op;
A68_55  BMTACTR;  /* collateral clause result */
A68_59  CMTACTR;  /* avoid structure result */
A68_59  DMTACTR_temp;
A68_192  FMTACTR;  /* collateral clause result */
A68_169  GMTACTR;  /* OPERATORS - mode -> union mode */
A68_169  HMTACTR;  /* OPERATORS - mode -> union mode */
A68_55 * IMTACTR;  /* YIELD */
A68_172  JMTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  LMTACTR;  /* avoid structure result */
A68_56  MMTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  NMTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  OMTACTR;  /* avoid structure result */
A68_VC  PMTACTR;  /* avoid structure result */
A68_56  QMTACTR;  /* OPERATORS - mode -> union mode */
A68_55  RMTACTR;  /* clause result */
A_PROC_ENTRY(monadicminus);
 /* line 109: */
 /* line 110: */
{ 
QXQACTR_eval1(Root, (&AMTACTR_op));
 /* line 111: */
 /* line 112: */
BMTACTR.Mode = (*(&(Root->Mode)));
 /* line 113: */
BMTACTR.Info = (A68_BITS )((A68_BITS )((*(&(AMTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 114: */
if ( (Version==3) )
{ 
A_CALLPROC(KMOACTR_new,((*(&(Root->Mode))), A_VC_PLUS(SITACTR_qminus,RKTACTR_qcomplex), &CMTACTR),((*(&(Root->Mode))), A_VC_PLUS(SITACTR_qminus,RKTACTR_qcomplex), &CMTACTR,(KMOACTR_new).nonlocals));
DMTACTR_temp = CMTACTR;
 /* line 115: */
FMTACTR.data[0] = A_UNITE(GMTACTR,mode3,3,DMTACTR_temp);
IMTACTR = VPQACTR_yield(A_VC_PLUS(SITACTR_qminus,RKTACTR_qcomplex), AMTACTR_op) ;
FMTACTR.data[1] = A_UNITE(HMTACTR,mode1,1,IMTACTR);
 /* line 116: */
EOQACTR_usemacro( KMTACTR, A_HISVEC(JMTACTR,FMTACTR,2,A68_169 ), &LMTACTR );
BMTACTR.Extra = A_UNITE(MMTACTR,mode6,6,LMTACTR);
} 
else
{ 
 /* line 117: */
 /* line 118: */
 /* line 119: */
NDQACTR_bracketcfragment( AMTACTR_op, &OMTACTR );
JIAACTR_bracket( A_VC_PLUS(A_HVEC(NMTACTR,'-',A68_CHAR ),OMTACTR), &PMTACTR );
BMTACTR.Extra = A_UNITE(QMTACTR,mode6,6,PMTACTR);
} 
RMTACTR = BMTACTR;
} 
A_PROC_EXIT(monadicminus);
*ReturnedValue = (RMTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  VMTACTR_monadicupb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * WMTACTR_op;
A68_55  XMTACTR;  /* collateral clause result */
A68_VC  ZMTACTR;  /* avoid structure result */
A68_56  BNTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  CNTACTR;  /* YIELD */
A68_VC  ENTACTR;  /* avoid structure result */
A68_56  GNTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  HNTACTR;  /* YIELD */
A68_56  INTACTR;  /* OPERATORS - skip to mode */
A68_55  JNTACTR;  /* clause result */
A_PROC_ENTRY(monadicupb);
 /* line 125: */
 /* line 126: */
{ 
QXQACTR_eval1(Root, (&WMTACTR_op));
 /* line 127: */
 /* line 128: */
XMTACTR.Mode = (*(&(Root->Mode)));
 /* line 129: */
XMTACTR.Info = (A68_BITS )((A68_BITS )((*(&(WMTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 130: */
if ( ((Version==1)|(Version==3)) )
{ 
 /* line 131: */
NDQACTR_bracketcfragment( WMTACTR_op, &ZMTACTR );
CNTACTR = A_VC_PLUS(ZMTACTR,ANTACTR) ;
XMTACTR.Extra = A_UNITE(BNTACTR,mode6,6,CNTACTR);
} 
else
{ 
 /* line 132: */
if ( (Version==2) )
{ 
 /* line 133: */
NDQACTR_bracketcfragment( WMTACTR_op, &ENTACTR );
HNTACTR = A_VC_PLUS(ENTACTR,FNTACTR) ;
XMTACTR.Extra = A_UNITE(GNTACTR,mode6,6,HNTACTR);
} 
else
{ 
WXIACTR_assert(A_VC_PLUS(JHTACTR_qmupb,DHTACTR_qvfault), A68_FALSE);
 /* line 134: */
 /* line 135: */
 /* line 136: */
XMTACTR.Extra = INTACTR;
} 
} 
JNTACTR = XMTACTR;
} 
A_PROC_EXIT(monadicupb);
*ReturnedValue = (JNTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  NNTACTR_monadiclwb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * ONTACTR_op;
A68_55  PNTACTR;  /* collateral clause result */
A68_56  SNTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  TNTACTR;  /* YIELD */
A68_VC  VNTACTR;  /* avoid structure result */
A68_56  XNTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  YNTACTR;  /* YIELD */
A68_56  ZNTACTR;  /* OPERATORS - skip to mode */
A68_55  AOTACTR;  /* clause result */
A_PROC_ENTRY(monadiclwb);
 /* line 142: */
 /* line 143: */
{ 
QXQACTR_eval1(Root, (&ONTACTR_op));
 /* line 144: */
 /* line 145: */
PNTACTR.Mode = (*(&(Root->Mode)));
 /* line 146: */
PNTACTR.Info = (A68_BITS )((A68_BITS )((*(&(ONTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 147: */
 /* line 148: */
if ( ((Version==1)|(Version==3)) )
{ 
TNTACTR = RNTACTR ;
PNTACTR.Extra = A_UNITE(SNTACTR,mode6,6,TNTACTR);
} 
else
{ 
 /* line 149: */
if ( (Version==2) )
{ 
 /* line 150: */
NDQACTR_bracketcfragment( ONTACTR_op, &VNTACTR );
YNTACTR = A_VC_PLUS(VNTACTR,WNTACTR) ;
PNTACTR.Extra = A_UNITE(XNTACTR,mode6,6,YNTACTR);
} 
else
{ 
WXIACTR_assert(A_VC_PLUS(MHTACTR_qmlwb,DHTACTR_qvfault), A68_FALSE);
 /* line 151: */
 /* line 152: */
 /* line 153: */
PNTACTR.Extra = ZNTACTR;
} 
} 
AOTACTR = PNTACTR;
} 
A_PROC_EXIT(monadiclwb);
*ReturnedValue = (AOTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  EOTACTR_not(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * FOTACTR_op;
A68_55  GOTACTR;  /* collateral clause result */
A68_VC  HOTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  IOTACTR;  /* avoid structure result */
A68_56  JOTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KOTACTR;  /* YIELD */
A68_VC  LOTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  MOTACTR;  /* avoid structure result */
A68_56  NOTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  OOTACTR;  /* YIELD */
A68_56  ROTACTR;  /* OPERATORS - skip to mode */
A68_55  SOTACTR;  /* clause result */
A_PROC_ENTRY(not);
 /* line 160: */
 /* line 161: */
{ 
QXQACTR_eval1(Root, (&FOTACTR_op));
 /* line 162: */
 /* line 163: */
GOTACTR.Mode = (*(&(Root->Mode)));
 /* line 164: */
GOTACTR.Info = (A68_BITS )((A68_BITS )((*(&(FOTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 165: */
switch ( Version )
{ 
case 1: 
 /* line 166: */
NDQACTR_bracketcfragment( FOTACTR_op, &IOTACTR );
KOTACTR = A_VC_PLUS(A_HVEC(HOTACTR,'!',A68_CHAR ),IOTACTR) ;
GOTACTR.Extra = A_UNITE(JOTACTR,mode6,6,KOTACTR);
break;
case 2: 
 /* line 167: */
NDQACTR_bracketcfragment( FOTACTR_op, &MOTACTR );
OOTACTR = A_VC_PLUS(A_HVEC(LOTACTR,'~',A68_CHAR ),MOTACTR) ;
GOTACTR.Extra = A_UNITE(NOTACTR,mode6,6,OOTACTR);
break;
default: 
WXIACTR_assert(A_VC_PLUS(QOTACTR,DHTACTR_qvfault), A68_FALSE);
 /* line 168: */
 /* line 169: */
 /* line 170: */
GOTACTR.Extra = ROTACTR;
break;
} 
SOTACTR = GOTACTR;
} 
A_PROC_EXIT(not);
*ReturnedValue = (SOTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  WOTACTR_abs(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * XOTACTR_op;
A68_VC  YOTACTR;  /* clause result */
A68_VC  ZOTACTR;  /* avoid structure result */
A68_VC  APTACTR;  /* avoid structure result */
A68_VC  DPTACTR;  /* avoid structure result */
A68_VC  EPTACTR;  /* avoid structure result */
A68_VC  FPTACTR;  /* avoid structure result */
A68_VC  KPTACTR;  /* avoid structure result */
A68_VC  PPTACTR;  /* avoid structure result */
A68_VC  SPTACTR;  /* avoid structure result */
A68_VC  TPTACTR_body;
A68_55  UPTACTR;  /* collateral clause result */
A68_56  VPTACTR;  /* OPERATORS - mode -> union mode */
A68_55  WPTACTR;  /* clause result */
A_PROC_ENTRY(abs);
 /* line 180: */
 /* line 181: */
{ 
QXQACTR_eval1(Root, (&XOTACTR_op));
 /* line 182: */
 /* line 183: */
 /* line 184: */
switch ( Version )
{ 
case 1: 
 /* line 185: */
GZPACTR_getcfragment( XOTACTR_op, &ZOTACTR );
JIAACTR_bracket( ZOTACTR, &APTACTR );
YOTACTR = APTACTR;
break;
case 2: 
 /* line 186: */
NDQACTR_bracketcfragment( XOTACTR_op, &DPTACTR );
YOTACTR = A_VC_PLUS(CPTACTR,DPTACTR);
break;
case 3: 
 /* line 187: */
FLNACTR_cast( (*(&(Root->Mode))), &EPTACTR );
NDQACTR_bracketcfragment( XOTACTR_op, &FPTACTR );
YOTACTR = A_VC_PLUS(EPTACTR,FPTACTR);
break;
case 4: 
 /* line 188: */
VKTACTR_simplemonop( A68_TRUE, JPTACTR, VPQACTR_yield(A_VC_PLUS(PHTACTR_qabs,IPTACTR), XOTACTR_op), &KPTACTR );
YOTACTR = KPTACTR;
break;
case 5: 
 /* line 189: */
VKTACTR_simplemonop( A68_TRUE, OPTACTR, VPQACTR_yield(A_VC_PLUS(PHTACTR_qabs,NPTACTR), XOTACTR_op), &PPTACTR );
YOTACTR = PPTACTR;
break;
case 6: 
 /* line 190: */
VKTACTR_simplemonop( A68_TRUE, RPTACTR, VPQACTR_yield(A_VC_PLUS(PHTACTR_qabs,RKTACTR_qcomplex), XOTACTR_op), &SPTACTR );
YOTACTR = SPTACTR;
break;
default: 
A_IMP_SKIP ;
break;
} 
TPTACTR_body = YOTACTR;
 /* line 191: */
UPTACTR.Mode = (*(&(Root->Mode)));
UPTACTR.Info = (A68_BITS )((A68_BITS )((*(&(XOTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 192: */
UPTACTR.Extra = A_UNITE(VPTACTR,mode6,6,TPTACTR_body);
WPTACTR = UPTACTR;
} 
A_PROC_EXIT(abs);
*ReturnedValue = (WPTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  AQTACTR_bin(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55  BQTACTR;  /* clause result */
A68_55  CQTACTR;  /* avoid structure result */
A68_55 * DQTACTR_op;
A68_55  EQTACTR;  /* collateral clause result */
A68_VC  FQTACTR;  /* avoid structure result */
A68_VC  GQTACTR;  /* avoid structure result */
A68_56  HQTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  IQTACTR;  /* YIELD */
A68_56  LQTACTR;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(bin);
 /* line 198: */
 /* line 199: */
 /* line 200: */
 /* line 201: */
if ( (Version==3) )
{ 
 /* line 202: */
 /* line 203: */
KBTACTR_biop99( Root, &CQTACTR );
BQTACTR = CQTACTR;
} 
else
{ 
QXQACTR_eval1(Root, (&DQTACTR_op));
 /* line 204: */
 /* line 205: */
EQTACTR.Mode = (*(&(Root->Mode)));
 /* line 206: */
EQTACTR.Info = (A68_BITS )((A68_BITS )((*(&(DQTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 207: */
if ( (Version==1) )
{ 
 /* line 208: */
FLNACTR_cast( ((*(&(DQTACTR_op->Mode)))-4), &FQTACTR );
NDQACTR_bracketcfragment( DQTACTR_op, &GQTACTR );
IQTACTR = A_VC_PLUS(FQTACTR,GQTACTR) ;
EQTACTR.Extra = A_UNITE(HQTACTR,mode6,6,IQTACTR);
} 
else
{ 
WXIACTR_assert(A_VC_PLUS(KQTACTR,DHTACTR_qvfault), A68_FALSE);
 /* line 209: */
 /* line 210: */
 /* line 211: */
EQTACTR.Extra = LQTACTR;
} 
BQTACTR = EQTACTR;
} 
A_PROC_EXIT(bin);
*ReturnedValue = (BQTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  PQTACTR_repr(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * QQTACTR_op;
A68_55  RQTACTR;  /* collateral clause result */
A68_VC  UQTACTR;  /* avoid structure result */
A68_56  VQTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  WQTACTR;  /* YIELD */
A68_56  ZQTACTR;  /* OPERATORS - skip to mode */
A68_55  ARTACTR;  /* clause result */
A_PROC_ENTRY(repr);
 /* line 217: */
 /* line 218: */
{ 
QXQACTR_eval1(Root, (&QQTACTR_op));
 /* line 219: */
 /* line 220: */
RQTACTR.Mode = (*(&(Root->Mode)));
 /* line 221: */
RQTACTR.Info = (A68_BITS )((A68_BITS )((*(&(QQTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 224: */
if ( (Version==1) )
{ 
 /* line 225: */
NDQACTR_bracketcfragment( QQTACTR_op, &UQTACTR );
WQTACTR = A_VC_PLUS(TQTACTR,UQTACTR) ;
RQTACTR.Extra = A_UNITE(VQTACTR,mode6,6,WQTACTR);
} 
else
{ 
WXIACTR_assert(A_VC_PLUS(YQTACTR,DHTACTR_qvfault), A68_FALSE);
 /* line 226: */
 /* line 227: */
 /* line 228: */
RQTACTR.Extra = ZQTACTR;
} 
ARTACTR = RQTACTR;
} 
A_PROC_EXIT(repr);
*ReturnedValue = (ARTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ERTACTR_lengthen(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * FRTACTR_op;
A68_INT  GRTACTR_m;
A68_BOOL  IRTACTR;  /* optbool result */
A68_VC  KRTACTR;  /* avoid structure result */
A68_55  LRTACTR;  /* collateral clause result */
A68_VC  MRTACTR;  /* avoid structure result */
A68_VC  NRTACTR;  /* avoid structure result */
A68_56  ORTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  PRTACTR;  /* YIELD */
A68_55  QRTACTR;  /* clause result */
A_PROC_ENTRY(lengthen);
 /* line 231: */
 /* line 232: */
{ 
QXQACTR_eval1(Root, (&FRTACTR_op));
 /* line 233: */
GRTACTR_m = (*(&(FRTACTR_op->Mode)));
 /* line 234: */
 /* line 235: */
IRTACTR = (GRTACTR_m!=13);
if ( IRTACTR )
{IRTACTR = (GRTACTR_m!=17);
}
if ( IRTACTR )
{IRTACTR = (GRTACTR_m!=21);
}
if ( IRTACTR )
{IRTACTR = (GRTACTR_m!=25);
}
ROAAOSF_whole( GRTACTR_m, 0, &KRTACTR );
WXIACTR_assert(A_VC_PLUS(JRTACTR,KRTACTR), IRTACTR);
 /* line 236: */
 /* line 237: */
LRTACTR.Mode = (*(&(Root->Mode)));
 /* line 238: */
LRTACTR.Info = (A68_BITS )((A68_BITS )((*(&(FRTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 239: */
 /* line 240: */
FLNACTR_cast( (GRTACTR_m+1), &MRTACTR );
NDQACTR_bracketcfragment( FRTACTR_op, &NRTACTR );
PRTACTR = A_VC_PLUS(MRTACTR,NRTACTR) ;
LRTACTR.Extra = A_UNITE(ORTACTR,mode6,6,PRTACTR);
QRTACTR = LRTACTR;
} 
A_PROC_EXIT(lengthen);
*ReturnedValue = (QRTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  URTACTR_shorten(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * VRTACTR_op;
A68_INT  WRTACTR_m;
A68_BOOL  YRTACTR;  /* optbool result */
A68_VC  ASTACTR;  /* avoid structure result */
A68_55  BSTACTR;  /* collateral clause result */
A68_VC  CSTACTR;  /* avoid structure result */
A68_VC  DSTACTR;  /* avoid structure result */
A68_56  ESTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  FSTACTR;  /* YIELD */
A68_55  GSTACTR;  /* clause result */
A_PROC_ENTRY(shorten);
 /* line 243: */
 /* line 244: */
{ 
QXQACTR_eval1(Root, (&VRTACTR_op));
 /* line 245: */
WRTACTR_m = (*(&(VRTACTR_op->Mode)));
 /* line 246: */
 /* line 247: */
YRTACTR = (WRTACTR_m!=10);
if ( YRTACTR )
{YRTACTR = (WRTACTR_m!=14);
}
if ( YRTACTR )
{YRTACTR = (WRTACTR_m!=18);
}
if ( YRTACTR )
{YRTACTR = (WRTACTR_m!=22);
}
ROAAOSF_whole( WRTACTR_m, 0, &ASTACTR );
WXIACTR_assert(A_VC_PLUS(ZRTACTR,ASTACTR), YRTACTR);
 /* line 248: */
 /* line 249: */
BSTACTR.Mode = (*(&(Root->Mode)));
 /* line 250: */
BSTACTR.Info = (A68_BITS )((A68_BITS )((*(&(VRTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 251: */
 /* line 252: */
FLNACTR_cast( (WRTACTR_m-1), &CSTACTR );
NDQACTR_bracketcfragment( VRTACTR_op, &DSTACTR );
FSTACTR = A_VC_PLUS(CSTACTR,DSTACTR) ;
BSTACTR.Extra = A_UNITE(ESTACTR,mode6,6,FSTACTR);
GSTACTR = BSTACTR;
} 
A_PROC_EXIT(shorten);
*ReturnedValue = (GSTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  KSTACTR_odd(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * LSTACTR_op;
A68_55  MSTACTR;  /* collateral clause result */
A68_VC  OSTACTR;  /* avoid structure result */
A68_VC  QSTACTR;  /* avoid structure result */
A68_56  RSTACTR;  /* OPERATORS - mode -> union mode */
A68_56  USTACTR;  /* OPERATORS - skip to mode */
A68_55  VSTACTR;  /* clause result */
A_PROC_ENTRY(odd);
 /* line 258: */
 /* line 259: */
{ 
QXQACTR_eval1(Root, (&LSTACTR_op));
 /* line 260: */
 /* line 261: */
MSTACTR.Mode = (*(&(Root->Mode)));
 /* line 262: */
MSTACTR.Info = (A68_BITS )((A68_BITS )((*(&(LSTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 263: */
if ( (Version==1) )
{ 
 /* line 264: */
NDQACTR_bracketcfragment( LSTACTR_op, &OSTACTR );
JIAACTR_bracket( A_VC_PLUS(OSTACTR,PSTACTR), &QSTACTR );
MSTACTR.Extra = A_UNITE(RSTACTR,mode6,6,QSTACTR);
} 
else
{ 
WXIACTR_assert(A_VC_PLUS(TSTACTR,DHTACTR_qvfault), A68_FALSE);
 /* line 265: */
 /* line 266: */
 /* line 267: */
 /* line 268: */
MSTACTR.Extra = USTACTR;
} 
VSTACTR = MSTACTR;
} 
A_PROC_EXIT(odd);
*ReturnedValue = (VSTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ZSTACTR_sign(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * ATTACTR_op;
A68_55  BTTACTR;  /* collateral clause result */
A68_VC  ETTACTR;  /* avoid structure result */
A68_56  FTTACTR;  /* OPERATORS - mode -> union mode */
A68_56  ITTACTR;  /* OPERATORS - skip to mode */
A68_55  JTTACTR;  /* clause result */
A_PROC_ENTRY(sign);
 /* line 275: */
 /* line 276: */
{ 
QXQACTR_eval1(Root, (&ATTACTR_op));
 /* line 277: */
 /* line 278: */
BTTACTR.Mode = (*(&(Root->Mode)));
 /* line 279: */
BTTACTR.Info = (A68_BITS )((A68_BITS )((*(&(ATTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 280: */
if ( ((Version==1)|(Version==2)) )
{ 
 /* line 281: */
VKTACTR_simplemonop( A68_TRUE, DTTACTR, VPQACTR_yield(YHTACTR_qsign, ATTACTR_op), &ETTACTR );
BTTACTR.Extra = A_UNITE(FTTACTR,mode6,6,ETTACTR);
} 
else
{ 
WXIACTR_assert(A_VC_PLUS(HTTACTR,DHTACTR_qvfault), A68_FALSE);
 /* line 282: */
 /* line 283: */
 /* line 284: */
 /* line 285: */
BTTACTR.Extra = ITTACTR;
} 
JTTACTR = BTTACTR;
} 
A_PROC_EXIT(sign);
*ReturnedValue = (JTTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  NTTACTR_round(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * OTTACTR_op;
A68_INT  PTTACTR_m;
A68_VC  STTACTR;  /* avoid structure result */
A68_55  TTTACTR;  /* collateral clause result */
A68_VC  UTTACTR;  /* OPERATORS - istruct -> vector */
A68_64  VTTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  WTTACTR_temp1;
A68_202  XTTACTR;  /* collateral clause result */
A68_76  AUTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  BUTACTR;  /* YIELD */
A68_76  CUTACTR;  /* OPERATORS - mode -> union mode */
A68_76  DUTACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  EUTACTR;  /* YIELD */
A68_76  JUTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KUTACTR;  /* YIELD */
A68_76  NUTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  OUTACTR;  /* YIELD */
A68_76  PUTACTR;  /* OPERATORS - mode -> union mode */
A68_75  QUTACTR;  /* OPERATORS - istruct -> vector */
A68_203  SUTACTR;  /* collateral clause result */
A68_169  TUTACTR;  /* OPERATORS - mode -> union mode */
A68_169  UUTACTR;  /* OPERATORS - mode -> union mode */
A68_55 * VUTACTR;  /* YIELD */
A68_VC  WUTACTR;  /* avoid structure result */
A68_169  XUTACTR;  /* OPERATORS - mode -> union mode */
A68_172  YUTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  AVTACTR;  /* avoid structure result */
A68_56  BVTACTR;  /* OPERATORS - mode -> union mode */
A68_56  CVTACTR;  /* OPERATORS - skip to mode */
A68_55  DVTACTR;  /* clause result */
A_PROC_ENTRY(round);
 /* line 295: */
 /* line 296: */
{ 
QXQACTR_eval1(Root, (&OTTACTR_op));
 /* line 297: */
PTTACTR_m = (*(&(OTTACTR_op->Mode)));
 /* line 298: */
 /* line 299: */
ROAAOSF_whole( PTTACTR_m, 0, &STTACTR );
WXIACTR_assert(A_VC_PLUS(A_VC_PLUS(SHTACTR_qround,RTTACTR),STTACTR), ((PTTACTR_m<=21)&(PTTACTR_m>=18)));
 /* line 300: */
 /* line 301: */
TTTACTR.Mode = (*(&(Root->Mode)));
 /* line 302: */
TTTACTR.Info = (A68_BITS )((A68_BITS )((*(&(OTTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 303: */
if ( (Version==1) )
{ 
VTTACTR = QIMACTR_newuniquename() ;
WTTACTR_temp1 = A_HISVEC(UTTACTR,VTTACTR,7,A68_CHAR );
 /* line 304: */
 /* line 305: */
BUTACTR = ZTTACTR ;
XTTACTR.data[0] = A_UNITE(AUTACTR,mode2,2,BUTACTR);
XTTACTR.data[1] = A_UNITE(CUTACTR,mode2,2,WTTACTR_temp1);
 /* line 306: */
EUTACTR = ';' ;
XTTACTR.data[2] = A_UNITE(DUTACTR,mode1,1,EUTACTR);
if ( AQIACTR_verboseoption )
{ 
KUTACTR = A_VC_PLUS(A_VC_PLUS(HUTACTR,SHTACTR_qround),IUTACTR) ;
XTTACTR.data[3] = A_UNITE(JUTACTR,mode2,2,KUTACTR);
} 
else
{ 
 /* line 307: */
OUTACTR = MUTACTR ;
XTTACTR.data[3] = A_UNITE(NUTACTR,mode2,2,OUTACTR);
} 
XTTACTR.data[4] = A_UNITE(PUTACTR,mode4,4,EIAACTR_cnewline);
 /* line 308: */
MDMACTR_writecstream(A_HISVEC(QUTACTR,XTTACTR,5,A68_76 ), QSLACTR_locdecstream(VRLACTR_currentlevel()));
 /* line 309: */
SUTACTR.data[0] = A_UNITE(TUTACTR,mode2,2,WTTACTR_temp1);
VUTACTR = VPQACTR_yield(SHTACTR_qround, OTTACTR_op) ;
SUTACTR.data[1] = A_UNITE(UUTACTR,mode1,1,VUTACTR);
FLNACTR_cast( (PTTACTR_m-4), &WUTACTR );
SUTACTR.data[2] = A_UNITE(XUTACTR,mode2,2,WUTACTR);
 /* line 310: */
EOQACTR_usemacro( ZUTACTR, A_HISVEC(YUTACTR,SUTACTR,3,A68_169 ), &AVTACTR );
TTTACTR.Extra = A_UNITE(BVTACTR,mode6,6,AVTACTR);
} 
else
{ 
WXIACTR_assert(A_VC_PLUS(SHTACTR_qround,DHTACTR_qvfault), A68_FALSE);
 /* line 311: */
 /* line 312: */
 /* line 313: */
 /* line 314: */
TTTACTR.Extra = CVTACTR;
} 
DVTACTR = TTTACTR;
} 
A_PROC_EXIT(round);
*ReturnedValue = (DVTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HVTACTR_entier(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * IVTACTR_op;
A68_INT  JVTACTR_m;
A68_VC  MVTACTR;  /* avoid structure result */
A68_55  NVTACTR;  /* collateral clause result */
A68_VC  OVTACTR;  /* OPERATORS - istruct -> vector */
A68_64  PVTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  QVTACTR_temp1;
A68_VC  RVTACTR;  /* OPERATORS - istruct -> vector */
A68_64  SVTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  TVTACTR_temp2;
A68_205  UVTACTR;  /* collateral clause result */
A68_76  XVTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  YVTACTR;  /* YIELD */
A68_76  ZVTACTR;  /* OPERATORS - mode -> union mode */
A68_76  AWTACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  BWTACTR;  /* YIELD */
A68_76  CWTACTR;  /* OPERATORS - mode -> union mode */
A68_76  DWTACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  EWTACTR;  /* YIELD */
A68_76  JWTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KWTACTR;  /* YIELD */
A68_76  NWTACTR;  /* OPERATORS - mode -> union mode */
A68_VC  OWTACTR;  /* YIELD */
A68_76  PWTACTR;  /* OPERATORS - mode -> union mode */
A68_75  QWTACTR;  /* OPERATORS - istruct -> vector */
A68_207  SWTACTR;  /* collateral clause result */
A68_169  TWTACTR;  /* OPERATORS - mode -> union mode */
A68_169  UWTACTR;  /* OPERATORS - mode -> union mode */
A68_169  VWTACTR;  /* OPERATORS - mode -> union mode */
A68_55 * WWTACTR;  /* YIELD */
A68_VC  XWTACTR;  /* avoid structure result */
A68_169  YWTACTR;  /* OPERATORS - mode -> union mode */
A68_172  ZWTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  BXTACTR;  /* avoid structure result */
A68_56  CXTACTR;  /* OPERATORS - mode -> union mode */
A68_56  DXTACTR;  /* OPERATORS - skip to mode */
A68_55  EXTACTR;  /* clause result */
A_PROC_ENTRY(entier);
 /* line 326: */
 /* line 327: */
{ 
QXQACTR_eval1(Root, (&IVTACTR_op));
 /* line 328: */
JVTACTR_m = (*(&(IVTACTR_op->Mode)));
 /* line 329: */
 /* line 330: */
ROAAOSF_whole( JVTACTR_m, 0, &MVTACTR );
WXIACTR_assert(A_VC_PLUS(A_VC_PLUS(VHTACTR_qentier,LVTACTR),MVTACTR), ((JVTACTR_m<=21)&(JVTACTR_m>=18)));
 /* line 331: */
 /* line 332: */
NVTACTR.Mode = (*(&(Root->Mode)));
 /* line 333: */
NVTACTR.Info = (A68_BITS )((A68_BITS )((*(&(IVTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 334: */
if ( (Version==1) )
{ 
PVTACTR = QIMACTR_newuniquename() ;
QVTACTR_temp1 = A_HISVEC(OVTACTR,PVTACTR,7,A68_CHAR );
 /* line 335: */
SVTACTR = QIMACTR_newuniquename() ;
TVTACTR_temp2 = A_HISVEC(RVTACTR,SVTACTR,7,A68_CHAR );
 /* line 336: */
 /* line 337: */
YVTACTR = WVTACTR ;
UVTACTR.data[0] = A_UNITE(XVTACTR,mode2,2,YVTACTR);
UVTACTR.data[1] = A_UNITE(ZVTACTR,mode2,2,QVTACTR_temp1);
BWTACTR = ',' ;
UVTACTR.data[2] = A_UNITE(AWTACTR,mode1,1,BWTACTR);
UVTACTR.data[3] = A_UNITE(CWTACTR,mode2,2,TVTACTR_temp2);
 /* line 338: */
EWTACTR = ';' ;
UVTACTR.data[4] = A_UNITE(DWTACTR,mode1,1,EWTACTR);
if ( AQIACTR_verboseoption )
{ 
KWTACTR = A_VC_PLUS(A_VC_PLUS(HWTACTR,VHTACTR_qentier),IWTACTR) ;
UVTACTR.data[5] = A_UNITE(JWTACTR,mode2,2,KWTACTR);
} 
else
{ 
 /* line 339: */
OWTACTR = MWTACTR ;
UVTACTR.data[5] = A_UNITE(NWTACTR,mode2,2,OWTACTR);
} 
UVTACTR.data[6] = A_UNITE(PWTACTR,mode4,4,EIAACTR_cnewline);
 /* line 340: */
MDMACTR_writecstream(A_HISVEC(QWTACTR,UVTACTR,7,A68_76 ), QSLACTR_locdecstream(VRLACTR_currentlevel()));
 /* line 341: */
SWTACTR.data[0] = A_UNITE(TWTACTR,mode2,2,QVTACTR_temp1);
SWTACTR.data[1] = A_UNITE(UWTACTR,mode2,2,TVTACTR_temp2);
WWTACTR = VPQACTR_yield(VHTACTR_qentier, IVTACTR_op) ;
SWTACTR.data[2] = A_UNITE(VWTACTR,mode1,1,WWTACTR);
FLNACTR_cast( (JVTACTR_m-4), &XWTACTR );
SWTACTR.data[3] = A_UNITE(YWTACTR,mode2,2,XWTACTR);
 /* line 342: */
EOQACTR_usemacro( AXTACTR, A_HISVEC(ZWTACTR,SWTACTR,4,A68_169 ), &BXTACTR );
NVTACTR.Extra = A_UNITE(CXTACTR,mode6,6,BXTACTR);
} 
else
{ 
WXIACTR_assert(A_VC_PLUS(VHTACTR_qentier,DHTACTR_qvfault), A68_FALSE);
 /* line 343: */
 /* line 344: */
 /* line 345: */
NVTACTR.Extra = DXTACTR;
} 
EXTACTR = NVTACTR;
} 
A_PROC_EXIT(entier);
*ReturnedValue = (EXTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  IXTACTR_simplemoncomp(A68_VC  Mac, A68_55 * Root, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * JXTACTR_op;
A68_55  KXTACTR;  /* collateral clause result */
A68_169  LXTACTR;  /* OPERATORS - mode -> union mode */
A68_172  MXTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  NXTACTR;  /* avoid structure result */
A68_56  OXTACTR;  /* OPERATORS - mode -> union mode */
A68_55  PXTACTR;  /* clause result */
A_PROC_ENTRY(simplemoncomp);
 /* line 349: */
 /* line 350: */
{ 
QXQACTR_eval1(Root, (&JXTACTR_op));
 /* line 351: */
 /* line 352: */
KXTACTR.Mode = (*(&(Root->Mode)));
 /* line 353: */
KXTACTR.Info = (A68_BITS )((A68_BITS )((*(&(JXTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 354: */
 /* line 355: */
EOQACTR_usemacro( Mac, A_HVEC(MXTACTR,A_UNITE(LXTACTR,mode1,1,JXTACTR_op),A68_169 ), &NXTACTR );
KXTACTR.Extra = A_UNITE(OXTACTR,mode6,6,NXTACTR);
PXTACTR = KXTACTR;
} 
A_PROC_EXIT(simplemoncomp);
*ReturnedValue = (PXTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  TXTACTR_re(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55  VXTACTR;  /* clause result */
A68_55  XXTACTR;  /* avoid structure result */
A_PROC_ENTRY(re);
 /* line 360: */
IXTACTR_simplemoncomp( WXTACTR, Root, Version, &XXTACTR );
VXTACTR = XXTACTR;
A_PROC_EXIT(re);
*ReturnedValue = (VXTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  BYTACTR_im(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55  DYTACTR;  /* clause result */
A68_55  FYTACTR;  /* avoid structure result */
A_PROC_ENTRY(im);
 /* line 364: */
IXTACTR_simplemoncomp( EYTACTR, Root, Version, &FYTACTR );
DYTACTR = FYTACTR;
A_PROC_EXIT(im);
*ReturnedValue = (DYTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  JYTACTR_arg(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * KYTACTR_op;
A68_55  LYTACTR;  /* collateral clause result */
A68_169  NYTACTR;  /* OPERATORS - mode -> union mode */
A68_55 * OYTACTR;  /* YIELD */
A68_172  PYTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  RYTACTR;  /* avoid structure result */
A68_56  SYTACTR;  /* OPERATORS - mode -> union mode */
A68_55  TYTACTR;  /* clause result */
A_PROC_ENTRY(arg);
 /* line 370: */
 /* line 371: */
{ 
QXQACTR_eval1(Root, (&KYTACTR_op));
 /* line 372: */
 /* line 373: */
LYTACTR.Mode = (*(&(Root->Mode)));
 /* line 374: */
LYTACTR.Info = (A68_BITS )((A68_BITS )((*(&(KYTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 375: */
 /* line 376: */
OYTACTR = VPQACTR_yield(HITACTR_qarg, KYTACTR_op) ;
EOQACTR_usemacro( QYTACTR, A_HVEC(PYTACTR,A_UNITE(NYTACTR,mode1,1,OYTACTR),A68_169 ), &RYTACTR );
LYTACTR.Extra = A_UNITE(SYTACTR,mode6,6,RYTACTR);
TYTACTR = LYTACTR;
} 
A_PROC_EXIT(arg);
*ReturnedValue = (TYTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  XYTACTR_conj(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * YYTACTR_op;
A68_59  BZTACTR;  /* avoid structure result */
A68_59  CZTACTR_temp;
A68_55  DZTACTR;  /* collateral clause result */
A68_192  FZTACTR;  /* collateral clause result */
A68_169  GZTACTR;  /* OPERATORS - mode -> union mode */
A68_169  HZTACTR;  /* OPERATORS - mode -> union mode */
A68_55 * IZTACTR;  /* YIELD */
A68_172  JZTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  LZTACTR;  /* avoid structure result */
A68_56  MZTACTR;  /* OPERATORS - mode -> union mode */
A68_55  NZTACTR;  /* clause result */
A_PROC_ENTRY(conj);
 /* line 380: */
 /* line 381: */
{ 
QXQACTR_eval1(Root, (&YYTACTR_op));
 /* line 382: */
A_CALLPROC(KMOACTR_new,((*(&(YYTACTR_op->Mode))), AZTACTR, &BZTACTR),((*(&(YYTACTR_op->Mode))), AZTACTR, &BZTACTR,(KMOACTR_new).nonlocals));
CZTACTR_temp = BZTACTR;
 /* line 383: */
 /* line 384: */
DZTACTR.Mode = (*(&(Root->Mode)));
 /* line 385: */
DZTACTR.Info = (A68_BITS )((A68_BITS )((*(&(YYTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
FZTACTR.data[0] = A_UNITE(GZTACTR,mode3,3,CZTACTR_temp);
IZTACTR = VPQACTR_yield(KITACTR_qconj, YYTACTR_op) ;
FZTACTR.data[1] = A_UNITE(HZTACTR,mode1,1,IZTACTR);
 /* line 386: */
 /* line 387: */
EOQACTR_usemacro( KZTACTR, A_HISVEC(JZTACTR,FZTACTR,2,A68_169 ), &LZTACTR );
DZTACTR.Extra = A_UNITE(MZTACTR,mode6,6,LZTACTR);
NZTACTR = DZTACTR;
} 
A_PROC_EXIT(conj);
*ReturnedValue = (NZTACTR);
return;
} 
#undef NL

A68_VOID  NAUACTR_monadicsem(A68_55 * Root, A68_62  Rator, A68_55  *ReturnedValue)
{ 
A68_INT  OAUACTR_param;
A68_BOOL  PAUACTR;  /* clause result */
A68_INT  QAUACTR_opnumber;
A68_INT  RAUACTR;  /* ADICOPS - MOD */
A68_INT  SAUACTR_version;
A68_55  TAUACTR;  /* clause result */
A68_193  UAUACTR;  /* CALL */
A68_55  VAUACTR;  /* avoid structure result */
A68_55  WAUACTR;  /* avoid structure result */
A_PROC_ENTRY(monadicsem);
 /* line 413: */
 /* line 414: */
{ 
OAUACTR_param = (A68_INT )(A68_BITS )((A68_BITS )Rator.Param&ZGAACTR_parammask);
 /* line 415: */
 /* line 416: */
 /* line 417: */
PAUACTR = (OAUACTR_param<RGAACTR_biopnumbersstart);
if ( PAUACTR )
{ 
QAUACTR_opnumber = (OAUACTR_param/SGAACTR_opnumberdivisor);
 /* line 418: */
SAUACTR_version = A_MOD(OAUACTR_param,SGAACTR_opnumberdivisor,RAUACTR);
 /* line 419: */
 /* line 420: */
 /* line 421: */
UAUACTR = A_R1INDEX(KAUACTR_monadicsemantics,QAUACTR_opnumber) ;
A_CALLPROC(UAUACTR,(Root, QAUACTR_opnumber, SAUACTR_version, &VAUACTR),(Root, QAUACTR_opnumber, SAUACTR_version, &VAUACTR,(UAUACTR).nonlocals));
TAUACTR = VAUACTR;
} 
else
{ 
 /* line 422: */
LGTACTR_monadicbiopsemantics( Root, OAUACTR_param, &WAUACTR );
TAUACTR = WAUACTR;
} 
} 
A_PROC_EXIT(monadicsem);
*ReturnedValue = (TAUACTR);
return;
} 
#undef NL
 /* line 426: */

A_STATIC A68_VOID  DBUACTR_complexop(A68_125  Modes, A68_VC  Op, A68_VC  Name, A68_55 * Left, A68_55 * Right, A68_BOOL  Lval, A68_VC  *ReturnedValue)
{ 
A68_55 * GBUACTR_l;
A68_55 * JBUACTR_r;
A68_192  KBUACTR;  /* collateral clause result */
A68_169  LBUACTR;  /* OPERATORS - mode -> union mode */
A68_169  MBUACTR;  /* OPERATORS - mode -> union mode */
A68_172  NBUACTR;  /* clause result */
A68_172  OBUACTR;  /* OPERATORS - istruct -> vector */
A68_203  PBUACTR;  /* collateral clause result */
A68_INT  QBUACTR;  /* YIELD */
A68_59  RBUACTR;  /* avoid structure result */
A68_169  SBUACTR;  /* OPERATORS - mode -> union mode */
A68_169  TBUACTR;  /* OPERATORS - mode -> union mode */
A68_169  UBUACTR;  /* OPERATORS - mode -> union mode */
A68_172  VBUACTR;  /* OPERATORS - istruct -> vector */
A68_207  WBUACTR;  /* collateral clause result */
A68_INT  ZBUACTR;  /* YIELD */
A68_59  ACUACTR;  /* avoid structure result */
A68_169  BCUACTR;  /* OPERATORS - mode -> union mode */
A68_INT  ECUACTR;  /* YIELD */
A68_59  FCUACTR;  /* avoid structure result */
A68_169  GCUACTR;  /* OPERATORS - mode -> union mode */
A68_169  HCUACTR;  /* OPERATORS - mode -> union mode */
A68_169  ICUACTR;  /* OPERATORS - mode -> union mode */
A68_172  JCUACTR;  /* OPERATORS - istruct -> vector */
A68_172  KCUACTR_params;
A68_VC  LCUACTR;  /* clause result */
A68_VC  MCUACTR;  /* avoid structure result */
A_PROC_ENTRY(complexop);
 /* line 427: */
 /* line 428: */
{ 
GBUACTR_l = VPQACTR_yield(A_VC_PLUS(Name,FBUACTR), Left);
JBUACTR_r = VPQACTR_yield(A_VC_PLUS(Name,IBUACTR), Right);
 /* line 429: */
if ( Lval )
{ 
PKAAOSF_orab((&(GBUACTR_l->Info)), VKJACTR_lvalue);
} 
 /* line 430: */
 /* line 431: */
if ( (Modes.upb==0) )
{ 
KBUACTR.data[0] = A_UNITE(LBUACTR,mode1,1,GBUACTR_l);
 /* line 432: */
KBUACTR.data[1] = A_UNITE(MBUACTR,mode1,1,JBUACTR_r);
NBUACTR = A_HISVEC(OBUACTR,KBUACTR,2,A68_169 );
} 
else
{ 
if ( (Modes.upb==1) )
{ 
QBUACTR = 1 ;
A_CALLPROC(KMOACTR_new,(A_VINDEX(Modes,QBUACTR), Name, &RBUACTR),(A_VINDEX(Modes,QBUACTR), Name, &RBUACTR,(KMOACTR_new).nonlocals));
PBUACTR.data[0] = A_UNITE(SBUACTR,mode3,3,RBUACTR);
PBUACTR.data[1] = A_UNITE(TBUACTR,mode1,1,GBUACTR_l);
 /* line 433: */
PBUACTR.data[2] = A_UNITE(UBUACTR,mode1,1,JBUACTR_r);
NBUACTR = A_HISVEC(VBUACTR,PBUACTR,3,A68_169 );
} 
else
{ 
ZBUACTR = 1 ;
A_CALLPROC(KMOACTR_new,(A_VINDEX(Modes,ZBUACTR), A_VC_PLUS(Name,YBUACTR), &ACUACTR),(A_VINDEX(Modes,ZBUACTR), A_VC_PLUS(Name,YBUACTR), &ACUACTR,(KMOACTR_new).nonlocals));
WBUACTR.data[0] = A_UNITE(BCUACTR,mode3,3,ACUACTR);
ECUACTR = 2 ;
A_CALLPROC(KMOACTR_new,(A_VINDEX(Modes,ECUACTR), A_VC_PLUS(Name,DCUACTR), &FCUACTR),(A_VINDEX(Modes,ECUACTR), A_VC_PLUS(Name,DCUACTR), &FCUACTR,(KMOACTR_new).nonlocals));
WBUACTR.data[1] = A_UNITE(GCUACTR,mode3,3,FCUACTR);
WBUACTR.data[2] = A_UNITE(HCUACTR,mode1,1,GBUACTR_l);
 /* line 434: */
WBUACTR.data[3] = A_UNITE(ICUACTR,mode1,1,JBUACTR_r);
NBUACTR = A_HISVEC(JCUACTR,WBUACTR,4,A68_169 );
} 
} 
KCUACTR_params = NBUACTR;
 /* line 435: */
 /* line 436: */
EOQACTR_usemacro( Op, KCUACTR_params, &MCUACTR );
LCUACTR = MCUACTR;
} 
A_PROC_EXIT(complexop);
*ReturnedValue = (LCUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  QCUACTR_dyadicplus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * RCUACTR_left;
A68_55 * SCUACTR_right;
A68_VC  UCUACTR;  /* clause result */
A68_VC  WCUACTR;  /* avoid structure result */
A68_VC  XCUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  YCUACTR;  /* avoid structure result */
A68_VC  ZCUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ADUACTR;  /* avoid structure result */
A68_125  DDUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  EDUACTR;  /* avoid structure result */
A68_VC  HDUACTR;  /* avoid structure result */
A68_VC  KDUACTR;  /* avoid structure result */
A68_VC  LDUACTR;  /* OPERATORS - skip to mode */
A68_VC  MDUACTR_body;
A68_55  NDUACTR;  /* collateral clause result */
A68_56  ODUACTR;  /* OPERATORS - mode -> union mode */
A68_55  PDUACTR;  /* clause result */
A_PROC_ENTRY(dyadicplus);
 /* line 440: */
 /* line 441: */
{ 
RYQACTR_eval2(Root, (&RCUACTR_left), (&SCUACTR_right));
 /* line 442: */
 /* line 443: */
 /* line 444: */
switch ( Version )
{ 
case 1: 
 /* line 445: */
GLTACTR_simpledyop( A68_TRUE, VCUACTR, RCUACTR_left, SCUACTR_right, &WCUACTR );
UCUACTR = WCUACTR;
break;
case 2: 
 /* line 446: */
GLTACTR_simpledyop( A68_FALSE, A_HVEC(XCUACTR,'+',A68_CHAR ), RCUACTR_left, SCUACTR_right, &YCUACTR );
UCUACTR = YCUACTR;
break;
case 3: 
 /* line 447: */
GLTACTR_simpledyop( A68_FALSE, A_HVEC(ZCUACTR,'+',A68_CHAR ), RCUACTR_left, SCUACTR_right, &ADUACTR );
UCUACTR = ADUACTR;
break;
case 4: 
 /* line 448: */
 /* line 449: */
DBUACTR_complexop( A_HVEC(DDUACTR,(*(&(Root->Mode))),A68_INT ), CDUACTR, A_VC_PLUS(PITACTR_qplus,RKTACTR_qcomplex), RCUACTR_left, SCUACTR_right, A68_FALSE, &EDUACTR );
UCUACTR = EDUACTR;
break;
case 5: 
 /* line 450: */
GLTACTR_simpledyop( A68_TRUE, GDUACTR, RCUACTR_left, SCUACTR_right, &HDUACTR );
UCUACTR = HDUACTR;
break;
case 6: 
 /* line 451: */
GLTACTR_simpledyop( A68_TRUE, JDUACTR, RCUACTR_left, SCUACTR_right, &KDUACTR );
UCUACTR = KDUACTR;
break;
default: 
WXIACTR_assert(A_VC_PLUS(PITACTR_qplus,DHTACTR_qvfault), A68_FALSE);
 /* line 452: */
UCUACTR = LDUACTR;
break;
} 
MDUACTR_body = UCUACTR;
 /* line 453: */
 /* line 454: */
NDUACTR.Mode = (*(&(Root->Mode)));
 /* line 456: */
NDUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(RCUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(SCUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 457: */
NDUACTR.Extra = A_UNITE(ODUACTR,mode6,6,MDUACTR_body);
PDUACTR = NDUACTR;
} 
A_PROC_EXIT(dyadicplus);
*ReturnedValue = (PDUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  TDUACTR_dyadicminus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * UDUACTR_left;
A68_55 * VDUACTR_right;
A68_55  WDUACTR;  /* collateral clause result */
A68_125  ZDUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  AEUACTR;  /* avoid structure result */
A68_56  BEUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  CEUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  DEUACTR;  /* avoid structure result */
A68_56  EEUACTR;  /* OPERATORS - mode -> union mode */
A68_55  FEUACTR;  /* clause result */
A_PROC_ENTRY(dyadicminus);
 /* line 460: */
 /* line 461: */
{ 
 /* line 462: */
RYQACTR_eval2(Root, (&UDUACTR_left), (&VDUACTR_right));
 /* line 463: */
 /* line 464: */
WDUACTR.Mode = (*(&(Root->Mode)));
 /* line 465: */
WDUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(UDUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(VDUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 466: */
if ( (Version==3) )
{ 
 /* line 467: */
 /* line 468: */
DBUACTR_complexop( A_HVEC(ZDUACTR,(*(&(Root->Mode))),A68_INT ), YDUACTR, A_VC_PLUS(SITACTR_qminus,RKTACTR_qcomplex), UDUACTR_left, VDUACTR_right, A68_FALSE, &AEUACTR );
WDUACTR.Extra = A_UNITE(BEUACTR,mode6,6,AEUACTR);
} 
else
{ 
 /* line 469: */
 /* line 470: */
 /* line 471: */
GLTACTR_simpledyop( A68_FALSE, A_HVEC(CEUACTR,'-',A68_CHAR ), UDUACTR_left, VDUACTR_right, &DEUACTR );
WDUACTR.Extra = A_UNITE(EEUACTR,mode6,6,DEUACTR);
} 
FEUACTR = WDUACTR;
} 
A_PROC_EXIT(dyadicminus);
*ReturnedValue = (FEUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  JEUACTR_dyadicupb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * KEUACTR_left;
A68_55 * LEUACTR_right;
A68_55  MEUACTR;  /* collateral clause result */
A68_VC  PEUACTR;  /* avoid structure result */
A68_VC  REUACTR;  /* avoid structure result */
A68_56  TEUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  UEUACTR;  /* YIELD */
A68_55  VEUACTR;  /* clause result */
A_PROC_ENTRY(dyadicupb);
 /* line 477: */
 /* line 478: */
{ 
RYQACTR_eval2(Root, (&KEUACTR_left), (&LEUACTR_right));
 /* line 479: */
 /* line 480: */
MEUACTR.Mode = (*(&(Root->Mode)));
 /* line 481: */
MEUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(KEUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(LEUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 482: */
 /* line 483: */
NDQACTR_bracketcfragment( LEUACTR_right, &PEUACTR );
NDQACTR_bracketcfragment( KEUACTR_left, &REUACTR );
UEUACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(PEUACTR,QEUACTR),REUACTR),SEUACTR) ;
MEUACTR.Extra = A_UNITE(TEUACTR,mode6,6,UEUACTR);
VEUACTR = MEUACTR;
} 
A_PROC_EXIT(dyadicupb);
*ReturnedValue = (VEUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ZEUACTR_dyadiclwb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * AFUACTR_left;
A68_55 * BFUACTR_right;
A68_55  CFUACTR;  /* collateral clause result */
A68_VC  FFUACTR;  /* avoid structure result */
A68_VC  HFUACTR;  /* avoid structure result */
A68_56  JFUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KFUACTR;  /* YIELD */
A68_55  LFUACTR;  /* clause result */
A_PROC_ENTRY(dyadiclwb);
 /* line 486: */
 /* line 487: */
{ 
RYQACTR_eval2(Root, (&AFUACTR_left), (&BFUACTR_right));
 /* line 488: */
 /* line 489: */
CFUACTR.Mode = (*(&(Root->Mode)));
 /* line 490: */
CFUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(AFUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(BFUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 491: */
 /* line 492: */
NDQACTR_bracketcfragment( BFUACTR_right, &FFUACTR );
NDQACTR_bracketcfragment( AFUACTR_left, &HFUACTR );
KFUACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(FFUACTR,GFUACTR),HFUACTR),IFUACTR) ;
CFUACTR.Extra = A_UNITE(JFUACTR,mode6,6,KFUACTR);
LFUACTR = CFUACTR;
} 
A_PROC_EXIT(dyadiclwb);
*ReturnedValue = (LFUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  PFUACTR_and(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * QFUACTR_left;
A68_55 * RFUACTR_right;
A68_55  SFUACTR;  /* collateral clause result */
A68_VC  TFUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  UFUACTR;  /* avoid structure result */
A68_56  VFUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  WFUACTR;  /* avoid structure result */
A68_VC  XFUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  YFUACTR;  /* avoid structure result */
A68_56  ZFUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  AGUACTR;  /* YIELD */
A68_56  DGUACTR;  /* OPERATORS - skip to mode */
A68_55  EGUACTR;  /* clause result */
A_PROC_ENTRY(and);
 /* line 495: */
 /* line 496: */
{ 
 /* line 497: */
RYQACTR_eval2(Root, (&QFUACTR_left), (&RFUACTR_right));
 /* line 498: */
 /* line 499: */
SFUACTR.Mode = (*(&(Root->Mode)));
 /* line 500: */
SFUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(QFUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(RFUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 501: */
switch ( Version )
{ 
case 1: 
 /* line 502: */
GLTACTR_simpledyop( A68_FALSE, A_HVEC(TFUACTR,'&',A68_CHAR ), QFUACTR_left, RFUACTR_right, &UFUACTR );
SFUACTR.Extra = A_UNITE(VFUACTR,mode6,6,UFUACTR);
break;
case 2: 
 /* line 503: */
FLNACTR_cast( (*(&(Root->Mode))), &WFUACTR );
GLTACTR_simpledyop( A68_FALSE, A_HVEC(XFUACTR,'&',A68_CHAR ), QFUACTR_left, RFUACTR_right, &YFUACTR );
AGUACTR = A_VC_PLUS(WFUACTR,YFUACTR) ;
SFUACTR.Extra = A_UNITE(ZFUACTR,mode6,6,AGUACTR);
break;
default: 
WXIACTR_assert(A_VC_PLUS(CGUACTR,DHTACTR_qvfault), A68_FALSE);
 /* line 504: */
 /* line 505: */
 /* line 506: */
SFUACTR.Extra = DGUACTR;
break;
} 
EGUACTR = SFUACTR;
} 
A_PROC_EXIT(and);
*ReturnedValue = (EGUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  IGUACTR_or(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * JGUACTR_left;
A68_55 * KGUACTR_right;
A68_55  LGUACTR;  /* collateral clause result */
A68_VC  MGUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  NGUACTR;  /* avoid structure result */
A68_56  OGUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  PGUACTR;  /* avoid structure result */
A68_VC  QGUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  RGUACTR;  /* avoid structure result */
A68_56  SGUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  TGUACTR;  /* YIELD */
A68_56  WGUACTR;  /* OPERATORS - skip to mode */
A68_55  XGUACTR;  /* clause result */
A_PROC_ENTRY(or);
 /* line 509: */
 /* line 510: */
{ 
RYQACTR_eval2(Root, (&JGUACTR_left), (&KGUACTR_right));
 /* line 511: */
 /* line 512: */
LGUACTR.Mode = (*(&(Root->Mode)));
 /* line 513: */
LGUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(JGUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(KGUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 514: */
switch ( Version )
{ 
case 1: 
 /* line 515: */
GLTACTR_simpledyop( A68_FALSE, A_HVEC(MGUACTR,'|',A68_CHAR ), JGUACTR_left, KGUACTR_right, &NGUACTR );
LGUACTR.Extra = A_UNITE(OGUACTR,mode6,6,NGUACTR);
break;
case 2: 
 /* line 516: */
FLNACTR_cast( (*(&(Root->Mode))), &PGUACTR );
GLTACTR_simpledyop( A68_FALSE, A_HVEC(QGUACTR,'|',A68_CHAR ), JGUACTR_left, KGUACTR_right, &RGUACTR );
TGUACTR = A_VC_PLUS(PGUACTR,RGUACTR) ;
LGUACTR.Extra = A_UNITE(SGUACTR,mode6,6,TGUACTR);
break;
default: 
WXIACTR_assert(A_VC_PLUS(VGUACTR,DHTACTR_qvfault), A68_FALSE);
 /* line 517: */
 /* line 518: */
 /* line 519: */
LGUACTR.Extra = WGUACTR;
break;
} 
XGUACTR = LGUACTR;
} 
A_PROC_EXIT(or);
*ReturnedValue = (XGUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  BHUACTR_lessnotless(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_VC  CHUACTR;  /* clause result */
A68_VC  DHUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  EHUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  HHUACTR;  /* OPERATORS - skip to mode */
A68_VC  IHUACTR_op;
A68_VC  KHUACTR;  /* clause result */
A68_VC  QHUACTR;  /* OPERATORS - skip to mode */
A68_VC  RHUACTR_opmacro;
A68_VC  SHUACTR_adic;
A68_55 * THUACTR_left;
A68_55 * UHUACTR_right;
A68_VC  VHUACTR;  /* clause result */
A68_VC  WHUACTR;  /* avoid structure result */
A68_VC  XHUACTR;  /* avoid structure result */
A68_VC  YHUACTR;  /* avoid structure result */
A68_VC  BIUACTR;  /* avoid structure result */
A68_VC  EIUACTR;  /* avoid structure result */
A68_VC  FIUACTR;  /* OPERATORS - skip to mode */
A68_VC  GIUACTR_body;
A68_55  HIUACTR;  /* collateral clause result */
A68_56  IIUACTR;  /* OPERATORS - mode -> union mode */
A68_55  JIUACTR;  /* clause result */
A_PROC_ENTRY(lessnotless);
 /* line 522: */
 /* line 524: */
{ 
 /* line 525: */
switch ( (Opnumber-5) )
{ 
case 1: 
 /* line 526: */
CHUACTR = A_HVEC(DHUACTR,'<',A68_CHAR );
break;
case 2: 
CHUACTR = A_HVEC(EHUACTR,'>',A68_CHAR );
break;
default: 
WXIACTR_assert(GHUACTR, A68_FALSE);
 /* line 527: */
CHUACTR = HHUACTR;
break;
} 
IHUACTR_op = CHUACTR;
 /* line 528: */
 /* line 529: */
 /* line 530: */
switch ( (Opnumber-5) )
{ 
case 1: 
 /* line 531: */
KHUACTR = LHUACTR;
break;
case 2: 
KHUACTR = NHUACTR;
break;
default: 
WXIACTR_assert(PHUACTR, A68_FALSE);
 /* line 532: */
KHUACTR = QHUACTR;
break;
} 
RHUACTR_opmacro = KHUACTR;
 /* line 533: */
SHUACTR_adic = A_VC_PLUS(AHTACTR_modulename,IHUACTR_op);
 /* line 534: */
RYQACTR_eval2(Root, (&THUACTR_left), (&UHUACTR_right));
 /* line 535: */
 /* line 536: */
 /* line 537: */
switch ( Version )
{ 
case 1: 
 /* line 538: */
GLTACTR_simpledyop( A68_FALSE, IHUACTR_op, THUACTR_left, UHUACTR_right, &WHUACTR );
VHUACTR = WHUACTR;
break;
case 2: 
 /* line 539: */
GLTACTR_simpledyop( A68_FALSE, IHUACTR_op, THUACTR_left, UHUACTR_right, &XHUACTR );
VHUACTR = XHUACTR;
break;
case 3: 
 /* line 540: */
GLTACTR_simpledyop( A68_FALSE, IHUACTR_op, THUACTR_left, UHUACTR_right, &YHUACTR );
VHUACTR = YHUACTR;
break;
case 4: 
 /* line 541: */
GLTACTR_simpledyop( A68_TRUE, A_VC_PLUS(AIUACTR,RHUACTR_opmacro), THUACTR_left, UHUACTR_right, &BIUACTR );
VHUACTR = BIUACTR;
break;
case 5: 
 /* line 542: */
GLTACTR_simpledyop( A68_TRUE, A_VC_PLUS(DIUACTR,RHUACTR_opmacro), THUACTR_left, UHUACTR_right, &EIUACTR );
VHUACTR = EIUACTR;
break;
default: 
WXIACTR_assert(A_VC_PLUS(SHUACTR_adic,DHTACTR_qvfault), A68_FALSE);
 /* line 543: */
VHUACTR = FIUACTR;
break;
} 
GIUACTR_body = VHUACTR;
 /* line 544: */
 /* line 545: */
HIUACTR.Mode = (*(&(Root->Mode)));
 /* line 547: */
HIUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(THUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(UHUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 548: */
HIUACTR.Extra = A_UNITE(IIUACTR,mode6,6,GIUACTR_body);
JIUACTR = HIUACTR;
} 
A_PROC_EXIT(lessnotless);
*ReturnedValue = (JIUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  NIUACTR_lesseqgreatereq(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_VC  PIUACTR;  /* clause result */
A68_VC  VIUACTR;  /* OPERATORS - skip to mode */
A68_VC  WIUACTR_opsymbol;
A68_VC  YIUACTR;  /* clause result */
A68_VC  EJUACTR;  /* OPERATORS - skip to mode */
A68_VC  FJUACTR_macro;
A68_VC  GJUACTR_adic;
A68_55 * HJUACTR_left;
A68_55 * IJUACTR_right;
A68_VC  JJUACTR;  /* clause result */
A68_VC  KJUACTR;  /* avoid structure result */
A68_VC  NJUACTR;  /* avoid structure result */
A68_VC  OJUACTR;  /* avoid structure result */
A68_VC  PJUACTR;  /* avoid structure result */
A68_VC  SJUACTR;  /* avoid structure result */
A68_VC  VJUACTR;  /* avoid structure result */
A68_VC  WJUACTR;  /* OPERATORS - skip to mode */
A68_VC  XJUACTR_body;
A68_55  YJUACTR;  /* collateral clause result */
A68_56  ZJUACTR;  /* OPERATORS - mode -> union mode */
A68_55  AKUACTR;  /* clause result */
A_PROC_ENTRY(lesseqgreatereq);
 /* line 552: */
 /* line 554: */
{ 
 /* line 555: */
switch ( (Opnumber-7) )
{ 
case 1: 
 /* line 556: */
PIUACTR = QIUACTR;
break;
case 2: 
PIUACTR = SIUACTR;
break;
default: 
WXIACTR_assert(UIUACTR, A68_FALSE);
 /* line 557: */
PIUACTR = VIUACTR;
break;
} 
WIUACTR_opsymbol = PIUACTR;
 /* line 558: */
 /* line 559: */
 /* line 560: */
switch ( (Opnumber-7) )
{ 
case 1: 
 /* line 561: */
YIUACTR = ZIUACTR;
break;
case 2: 
YIUACTR = BJUACTR;
break;
default: 
WXIACTR_assert(DJUACTR, A68_FALSE);
 /* line 562: */
YIUACTR = EJUACTR;
break;
} 
FJUACTR_macro = YIUACTR;
 /* line 563: */
GJUACTR_adic = A_VC_PLUS(AHTACTR_modulename,WIUACTR_opsymbol);
 /* line 564: */
RYQACTR_eval2(Root, (&HJUACTR_left), (&IJUACTR_right));
 /* line 565: */
 /* line 566: */
 /* line 567: */
switch ( Version )
{ 
case 1: 
 /* line 569: */
GLTACTR_simpledyop( A68_FALSE, WIUACTR_opsymbol, HJUACTR_left, IJUACTR_right, &KJUACTR );
JJUACTR = KJUACTR;
break;
case 2: 
 /* line 570: */
GLTACTR_simpledyop( A68_TRUE, A_VC_PLUS(MJUACTR,FJUACTR_macro), VPQACTR_yield(GJUACTR_adic, HJUACTR_left), VPQACTR_yield(GJUACTR_adic, IJUACTR_right), &NJUACTR );
JJUACTR = NJUACTR;
break;
case 3: 
 /* line 571: */
GLTACTR_simpledyop( A68_FALSE, WIUACTR_opsymbol, HJUACTR_left, IJUACTR_right, &OJUACTR );
JJUACTR = OJUACTR;
break;
case 4: 
 /* line 572: */
GLTACTR_simpledyop( A68_FALSE, WIUACTR_opsymbol, HJUACTR_left, IJUACTR_right, &PJUACTR );
JJUACTR = PJUACTR;
break;
case 5: 
 /* line 573: */
GLTACTR_simpledyop( A68_TRUE, A_VC_PLUS(RJUACTR,FJUACTR_macro), HJUACTR_left, IJUACTR_right, &SJUACTR );
JJUACTR = SJUACTR;
break;
case 6: 
 /* line 574: */
GLTACTR_simpledyop( A68_TRUE, A_VC_PLUS(UJUACTR,FJUACTR_macro), HJUACTR_left, IJUACTR_right, &VJUACTR );
JJUACTR = VJUACTR;
break;
default: 
WXIACTR_assert(A_VC_PLUS(GJUACTR_adic,DHTACTR_qvfault), A68_FALSE);
 /* line 575: */
JJUACTR = WJUACTR;
break;
} 
XJUACTR_body = JJUACTR;
 /* line 576: */
 /* line 577: */
YJUACTR.Mode = (*(&(Root->Mode)));
 /* line 579: */
YJUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(HJUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(IJUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 580: */
YJUACTR.Extra = A_UNITE(ZJUACTR,mode6,6,XJUACTR_body);
AKUACTR = YJUACTR;
} 
A_PROC_EXIT(lesseqgreatereq);
*ReturnedValue = (AKUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  EKUACTR_eqnoteq(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_VC  GKUACTR;  /* clause result */
A68_VC  MKUACTR;  /* OPERATORS - skip to mode */
A68_VC  NKUACTR_op;
A68_VC  PKUACTR;  /* clause result */
A68_VC  VKUACTR;  /* OPERATORS - skip to mode */
A68_VC  WKUACTR_opmacro;
A68_VC  XKUACTR_adic;
A68_55 * YKUACTR_left;
A68_55 * ZKUACTR_right;
A68_VC  ALUACTR;  /* clause result */
A68_VC  BLUACTR;  /* avoid structure result */
A68_VC  DLUACTR;  /* clause result */
A68_VC  HLUACTR_opmacro;
A68_125  ILUACTR;  /* OPERATORS - vacuum */
A68_VC  JLUACTR;  /* avoid structure result */
A68_VC  MLUACTR;  /* avoid structure result */
A68_VC  PLUACTR;  /* avoid structure result */
A68_VC  QLUACTR;  /* OPERATORS - skip to mode */
A68_VC  RLUACTR_body;
A68_55  SLUACTR;  /* collateral clause result */
A68_56  TLUACTR;  /* OPERATORS - mode -> union mode */
A68_55  ULUACTR;  /* clause result */
A_PROC_ENTRY(eqnoteq);
 /* line 583: */
 /* line 585: */
{ 
 /* line 586: */
switch ( (Opnumber-9) )
{ 
case 1: 
 /* line 587: */
GKUACTR = HKUACTR;
break;
case 2: 
GKUACTR = JKUACTR;
break;
default: 
WXIACTR_assert(LKUACTR, A68_FALSE);
 /* line 588: */
GKUACTR = MKUACTR;
break;
} 
NKUACTR_op = GKUACTR;
 /* line 589: */
 /* line 590: */
 /* line 591: */
switch ( (Opnumber-9) )
{ 
case 1: 
 /* line 592: */
PKUACTR = QKUACTR;
break;
case 2: 
PKUACTR = SKUACTR;
break;
default: 
WXIACTR_assert(UKUACTR, A68_FALSE);
 /* line 593: */
PKUACTR = VKUACTR;
break;
} 
WKUACTR_opmacro = PKUACTR;
 /* line 594: */
XKUACTR_adic = A_VC_PLUS(AHTACTR_modulename,WKUACTR_opmacro);
 /* line 595: */
 /* line 596: */
RYQACTR_eval2(Root, (&YKUACTR_left), (&ZKUACTR_right));
 /* line 597: */
 /* line 598: */
 /* line 599: */
if ( (Version<6) )
{ 
 /* line 601: */
GLTACTR_simpledyop( A68_FALSE, NKUACTR_op, YKUACTR_left, ZKUACTR_right, &BLUACTR );
ALUACTR = BLUACTR;
} 
else
{ 
 /* line 602: */
if ( (Version==6) )
{ 
 /* line 603: */
if ( (Opnumber==10) )
{ 
 /* line 604: */
DLUACTR = ELUACTR;
} 
else
{ 
DLUACTR = GLUACTR;
} 
HLUACTR_opmacro = DLUACTR;
 /* line 605: */
 /* line 606: */
 /* line 607: */
DBUACTR_complexop( A_VVAC(ILUACTR), HLUACTR_opmacro, A_VC_PLUS(A_VC_PLUS(AHTACTR_modulename,NKUACTR_op),RKTACTR_qcomplex), YKUACTR_left, ZKUACTR_right, A68_FALSE, &JLUACTR );
ALUACTR = JLUACTR;
} 
else
{ 
 /* line 608: */
if ( (Version==7) )
{ 
 /* line 610: */
GLTACTR_simpledyop( A68_TRUE, A_VC_PLUS(LLUACTR,WKUACTR_opmacro), YKUACTR_left, ZKUACTR_right, &MLUACTR );
ALUACTR = MLUACTR;
} 
else
{ 
 /* line 611: */
if ( (Version==8) )
{ 
 /* line 612: */
GLTACTR_simpledyop( A68_TRUE, A_VC_PLUS(OLUACTR,WKUACTR_opmacro), YKUACTR_left, ZKUACTR_right, &PLUACTR );
ALUACTR = PLUACTR;
} 
else
{ 
WXIACTR_assert(A_VC_PLUS(XKUACTR_adic,DHTACTR_qvfault), A68_FALSE);
 /* line 613: */
ALUACTR = QLUACTR;
} 
} 
} 
} 
RLUACTR_body = ALUACTR;
 /* line 614: */
 /* line 615: */
SLUACTR.Mode = (*(&(Root->Mode)));
 /* line 617: */
SLUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(YKUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(ZKUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 618: */
SLUACTR.Extra = A_UNITE(TLUACTR,mode6,6,RLUACTR_body);
ULUACTR = SLUACTR;
} 
A_PROC_EXIT(eqnoteq);
*ReturnedValue = (ULUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  YLUACTR_times(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * ZLUACTR_left;
A68_55 * AMUACTR_right;
A68_VC  CMUACTR;  /* clause result */
A68_VC  EMUACTR;  /* avoid structure result */
A68_VC  HMUACTR;  /* avoid structure result */
A68_VC  IMUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  JMUACTR;  /* avoid structure result */
A68_VC  KMUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  LMUACTR;  /* avoid structure result */
A68_125  OMUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  PMUACTR;  /* avoid structure result */
A68_VC  SMUACTR;  /* avoid structure result */
A68_VC  VMUACTR;  /* avoid structure result */
A68_VC  YMUACTR;  /* avoid structure result */
A68_VC  BNUACTR;  /* avoid structure result */
A68_VC  CNUACTR;  /* OPERATORS - skip to mode */
A68_VC  DNUACTR_body;
A68_55  ENUACTR;  /* collateral clause result */
A68_56  FNUACTR;  /* OPERATORS - mode -> union mode */
A68_55  GNUACTR;  /* clause result */
A_PROC_ENTRY(times);
 /* line 621: */
 /* line 622: */
{ 
RYQACTR_eval2(Root, (&ZLUACTR_left), (&AMUACTR_right));
 /* line 623: */
 /* line 624: */
 /* line 625: */
switch ( Version )
{ 
case 1: 
 /* line 626: */
if ( WOMACTR_isint((*(&(ZLUACTR_left->Mode)))) )
{ 
 /* line 627: */
GLTACTR_simpledyop( A68_TRUE, DMUACTR, AMUACTR_right, ZLUACTR_left, &EMUACTR );
CMUACTR = EMUACTR;
} 
else
{ 
 /* line 628: */
 /* line 629: */
GLTACTR_simpledyop( A68_TRUE, GMUACTR, ZLUACTR_left, AMUACTR_right, &HMUACTR );
CMUACTR = HMUACTR;
} 
break;
case 2: 
 /* line 630: */
GLTACTR_simpledyop( A68_FALSE, A_HVEC(IMUACTR,'*',A68_CHAR ), ZLUACTR_left, AMUACTR_right, &JMUACTR );
CMUACTR = JMUACTR;
break;
case 3: 
 /* line 631: */
GLTACTR_simpledyop( A68_FALSE, A_HVEC(KMUACTR,'*',A68_CHAR ), ZLUACTR_left, AMUACTR_right, &LMUACTR );
CMUACTR = LMUACTR;
break;
case 4: 
 /* line 632: */
 /* line 633: */
DBUACTR_complexop( A_HVEC(OMUACTR,(*(&(Root->Mode))),A68_INT ), NMUACTR, A_VC_PLUS(VITACTR_qtimes,RKTACTR_qcomplex), ZLUACTR_left, AMUACTR_right, A68_FALSE, &PMUACTR );
CMUACTR = PMUACTR;
break;
case 5: 
 /* line 634: */
if ( WOMACTR_isint((*(&(ZLUACTR_left->Mode)))) )
{ 
 /* line 635: */
GLTACTR_simpledyop( A68_TRUE, RMUACTR, AMUACTR_right, ZLUACTR_left, &SMUACTR );
CMUACTR = SMUACTR;
} 
else
{ 
 /* line 636: */
 /* line 637: */
GLTACTR_simpledyop( A68_TRUE, UMUACTR, ZLUACTR_left, AMUACTR_right, &VMUACTR );
CMUACTR = VMUACTR;
} 
break;
case 6: 
 /* line 638: */
if ( WOMACTR_isint((*(&(ZLUACTR_left->Mode)))) )
{ 
 /* line 639: */
GLTACTR_simpledyop( A68_TRUE, XMUACTR, AMUACTR_right, ZLUACTR_left, &YMUACTR );
CMUACTR = YMUACTR;
} 
else
{ 
 /* line 640: */
 /* line 641: */
GLTACTR_simpledyop( A68_TRUE, ANUACTR, ZLUACTR_left, AMUACTR_right, &BNUACTR );
CMUACTR = BNUACTR;
} 
break;
default: 
WXIACTR_assert(A_VC_PLUS(VITACTR_qtimes,DHTACTR_qvfault), A68_FALSE);
 /* line 642: */
CMUACTR = CNUACTR;
break;
} 
DNUACTR_body = CMUACTR;
 /* line 643: */
 /* line 644: */
ENUACTR.Mode = (*(&(Root->Mode)));
 /* line 646: */
ENUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(ZLUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(AMUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 647: */
ENUACTR.Extra = A_UNITE(FNUACTR,mode6,6,DNUACTR_body);
GNUACTR = ENUACTR;
} 
A_PROC_EXIT(times);
*ReturnedValue = (GNUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  KNUACTR_divide(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * LNUACTR_left;
A68_55 * MNUACTR_right;
A68_VC  NNUACTR;  /* avoid structure result */
A68_VC  ONUACTR_widen;
A68_VC  PNUACTR;  /* clause result */
A68_VC  QNUACTR;  /* avoid structure result */
A68_VC  RNUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  SNUACTR;  /* avoid structure result */
A68_VC  TNUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  UNUACTR;  /* avoid structure result */
A68_217  VNUACTR;  /* collateral clause result */
A68_125  YNUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ZNUACTR;  /* avoid structure result */
A68_VC  AOUACTR;  /* OPERATORS - skip to mode */
A68_VC  BOUACTR_body;
A68_55  COUACTR;  /* collateral clause result */
A68_56  DOUACTR;  /* OPERATORS - mode -> union mode */
A68_55  EOUACTR;  /* clause result */
A_PROC_ENTRY(divide);
 /* line 650: */
 /* line 651: */
{ 
RYQACTR_eval2(Root, (&LNUACTR_left), (&MNUACTR_right));
 /* line 652: */
 /* line 653: */
 /* line 654: */
switch ( Version )
{ 
case 1: 
 /* line 655: */
{ 
FLNACTR_cast( ((*(&(LNUACTR_left->Mode)))+4), &NNUACTR );
ONUACTR_widen = NNUACTR;
 /* line 656: */
 /* line 657: */
 /* line 658: */
 /* line 659: */
NDQACTR_bracketcfragment( LNUACTR_left, &QNUACTR );
NDQACTR_bracketcfragment( MNUACTR_right, &SNUACTR );
PNUACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(ONUACTR_widen,QNUACTR),A_HVEC(RNUACTR,'/',A68_CHAR )),ONUACTR_widen),SNUACTR);
} 
break;
case 2: 
 /* line 660: */
GLTACTR_simpledyop( A68_FALSE, A_HVEC(TNUACTR,'/',A68_CHAR ), LNUACTR_left, MNUACTR_right, &UNUACTR );
PNUACTR = UNUACTR;
break;
case 3: 
VNUACTR.data[0] = (*(&(Root->Mode)));
VNUACTR.data[1] = ((*(&(Root->Mode)))-4);
 /* line 661: */
 /* line 662: */
 /* line 663: */
DBUACTR_complexop( A_HISVEC(YNUACTR,VNUACTR,2,A68_INT ), XNUACTR, A_VC_PLUS(YITACTR_qdiv,RKTACTR_qcomplex), LNUACTR_left, MNUACTR_right, A68_FALSE, &ZNUACTR );
PNUACTR = ZNUACTR;
break;
default: 
{ 
WXIACTR_assert(A_VC_PLUS(YITACTR_qdiv,DHTACTR_qvfault), A68_FALSE);
 /* line 664: */
PNUACTR = AOUACTR;
} 
break;
} 
BOUACTR_body = PNUACTR;
 /* line 665: */
 /* line 666: */
COUACTR.Mode = (*(&(Root->Mode)));
 /* line 668: */
COUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(LNUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(MNUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 669: */
COUACTR.Extra = A_UNITE(DOUACTR,mode6,6,BOUACTR_body);
EOUACTR = COUACTR;
} 
A_PROC_EXIT(divide);
*ReturnedValue = (EOUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  IOUACTR_over(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * JOUACTR_left;
A68_55 * KOUACTR_right;
A68_55  LOUACTR;  /* collateral clause result */
A68_VC  MOUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  NOUACTR;  /* avoid structure result */
A68_56  OOUACTR;  /* OPERATORS - mode -> union mode */
A68_56  POUACTR;  /* OPERATORS - skip to mode */
A68_55  QOUACTR;  /* clause result */
A_PROC_ENTRY(over);
 /* line 672: */
 /* line 673: */
{ 
RYQACTR_eval2(Root, (&JOUACTR_left), (&KOUACTR_right));
 /* line 674: */
 /* line 675: */
LOUACTR.Mode = (*(&(Root->Mode)));
 /* line 676: */
LOUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(JOUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(KOUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 677: */
if ( (Version==1) )
{ 
 /* line 678: */
GLTACTR_simpledyop( A68_FALSE, A_HVEC(MOUACTR,'/',A68_CHAR ), JOUACTR_left, KOUACTR_right, &NOUACTR );
LOUACTR.Extra = A_UNITE(OOUACTR,mode6,6,NOUACTR);
} 
else
{ 
WXIACTR_assert(A_VC_PLUS(BJTACTR_qover,DHTACTR_qvfault), A68_FALSE);
 /* line 679: */
 /* line 680: */
 /* line 681: */
LOUACTR.Extra = POUACTR;
} 
QOUACTR = LOUACTR;
} 
A_PROC_EXIT(over);
*ReturnedValue = (QOUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  UOUACTR_mod(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * VOUACTR_left;
A68_55 * WOUACTR_right;
A68_55  XOUACTR;  /* collateral clause result */
A68_59  YOUACTR;  /* avoid structure result */
A68_VC  ZOUACTR;  /* OPERATORS - istruct -> vector */
A68_64  APUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  BPUACTR_temp;
A68_203  DPUACTR;  /* collateral clause result */
A68_169  EPUACTR;  /* OPERATORS - mode -> union mode */
A68_55 * FPUACTR;  /* YIELD */
A68_169  GPUACTR;  /* OPERATORS - mode -> union mode */
A68_55 * HPUACTR;  /* YIELD */
A68_169  IPUACTR;  /* OPERATORS - mode -> union mode */
A68_172  JPUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  LPUACTR;  /* avoid structure result */
A68_56  MPUACTR;  /* OPERATORS - mode -> union mode */
A68_56  NPUACTR;  /* OPERATORS - skip to mode */
A68_55  OPUACTR;  /* clause result */
A_PROC_ENTRY(mod);
 /* line 684: */
 /* line 685: */
{ 
 /* line 686: */
RYQACTR_eval2(Root, (&VOUACTR_left), (&WOUACTR_right));
 /* line 687: */
 /* line 688: */
XOUACTR.Mode = (*(&(Root->Mode)));
 /* line 689: */
XOUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(VOUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(WOUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 690: */
if ( (Version==1) )
{ 
LLOACTR_declarectemporary( (*(&(VOUACTR_left->Mode))), EJTACTR_qmod, &YOUACTR );
APUACTR = YOUACTR.Name ;
BPUACTR_temp = A_HISVEC(ZOUACTR,APUACTR,7,A68_CHAR );
 /* line 691: */
FPUACTR = VPQACTR_yield(EJTACTR_qmod, VOUACTR_left) ;
DPUACTR.data[0] = A_UNITE(EPUACTR,mode1,1,FPUACTR);
HPUACTR = VPQACTR_yield(EJTACTR_qmod, WOUACTR_right) ;
DPUACTR.data[1] = A_UNITE(GPUACTR,mode1,1,HPUACTR);
DPUACTR.data[2] = A_UNITE(IPUACTR,mode2,2,BPUACTR_temp);
 /* line 692: */
EOQACTR_usemacro( KPUACTR, A_HISVEC(JPUACTR,DPUACTR,3,A68_169 ), &LPUACTR );
XOUACTR.Extra = A_UNITE(MPUACTR,mode6,6,LPUACTR);
} 
else
{ 
WXIACTR_assert(A_VC_PLUS(EJTACTR_qmod,DHTACTR_qvfault), A68_FALSE);
 /* line 693: */
 /* line 694: */
 /* line 695: */
XOUACTR.Extra = NPUACTR;
} 
OPUACTR = XOUACTR;
} 
A_PROC_EXIT(mod);
*ReturnedValue = (OPUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  SPUACTR_power(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * TPUACTR_left;
A68_55 * UPUACTR_right;
A68_INT  VPUACTR_m;
A68_VC  YPUACTR;  /* avoid structure result */
A68_55  ZPUACTR;  /* collateral clause result */
A68_203  BQUACTR;  /* collateral clause result */
A68_169  CQUACTR;  /* OPERATORS - mode -> union mode */
A68_55 * DQUACTR;  /* YIELD */
A68_169  EQUACTR;  /* OPERATORS - mode -> union mode */
A68_55 * FQUACTR;  /* YIELD */
A68_VC  GQUACTR;  /* avoid structure result */
A68_169  HQUACTR;  /* OPERATORS - mode -> union mode */
A68_172  IQUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  KQUACTR;  /* avoid structure result */
A68_56  LQUACTR;  /* OPERATORS - mode -> union mode */
A68_203  NQUACTR;  /* collateral clause result */
A68_169  OQUACTR;  /* OPERATORS - mode -> union mode */
A68_55 * PQUACTR;  /* YIELD */
A68_169  QQUACTR;  /* OPERATORS - mode -> union mode */
A68_55 * RQUACTR;  /* YIELD */
A68_VC  SQUACTR;  /* avoid structure result */
A68_169  TQUACTR;  /* OPERATORS - mode -> union mode */
A68_172  UQUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  WQUACTR;  /* avoid structure result */
A68_56  XQUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  YQUACTR_name;
A68_192  ARUACTR;  /* collateral clause result */
A68_169  BRUACTR;  /* OPERATORS - mode -> union mode */
A68_55 * CRUACTR;  /* YIELD */
A68_169  DRUACTR;  /* OPERATORS - mode -> union mode */
A68_55 * ERUACTR;  /* YIELD */
A68_172  FRUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  HRUACTR;  /* avoid structure result */
A68_56  IRUACTR;  /* OPERATORS - mode -> union mode */
A68_56  JRUACTR;  /* OPERATORS - skip to mode */
A68_55  KRUACTR;  /* clause result */
A_PROC_ENTRY(power);
 /* line 698: */
 /* line 699: */
{ 
RYQACTR_eval2(Root, (&TPUACTR_left), (&UPUACTR_right));
 /* line 700: */
VPUACTR_m = (*(&(TPUACTR_left->Mode)));
 /* line 701: */
 /* line 702: */
ROAAOSF_whole( VPUACTR_m, 0, &YPUACTR );
WXIACTR_assert(A_VC_PLUS(A_VC_PLUS(HJTACTR_qpower,XPUACTR),YPUACTR), ((VPUACTR_m<=21)&(VPUACTR_m>=14)));
 /* line 703: */
 /* line 704: */
ZPUACTR.Mode = (*(&(Root->Mode)));
 /* line 705: */
ZPUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(TPUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(UPUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 706: */
 /* line 707: */
if ( (Version==1) )
{ 
DQUACTR = VPQACTR_yield(HJTACTR_qpower, TPUACTR_left) ;
BQUACTR.data[0] = A_UNITE(CQUACTR,mode1,1,DQUACTR);
FQUACTR = VPQACTR_yield(HJTACTR_qpower, UPUACTR_right) ;
BQUACTR.data[1] = A_UNITE(EQUACTR,mode1,1,FQUACTR);
FLNACTR_cast( VPUACTR_m, &GQUACTR );
BQUACTR.data[2] = A_UNITE(HQUACTR,mode2,2,GQUACTR);
 /* line 708: */
EOQACTR_usemacro( JQUACTR, A_HISVEC(IQUACTR,BQUACTR,3,A68_169 ), &KQUACTR );
ZPUACTR.Extra = A_UNITE(LQUACTR,mode6,6,KQUACTR);
} 
else
{ 
 /* line 709: */
 /* line 710: */
if ( (Version==2) )
{ 
PQUACTR = VPQACTR_yield(HJTACTR_qpower, TPUACTR_left) ;
NQUACTR.data[0] = A_UNITE(OQUACTR,mode1,1,PQUACTR);
RQUACTR = VPQACTR_yield(HJTACTR_qpower, UPUACTR_right) ;
NQUACTR.data[1] = A_UNITE(QQUACTR,mode1,1,RQUACTR);
FLNACTR_cast( VPUACTR_m, &SQUACTR );
NQUACTR.data[2] = A_UNITE(TQUACTR,mode2,2,SQUACTR);
 /* line 711: */
EOQACTR_usemacro( VQUACTR, A_HISVEC(UQUACTR,NQUACTR,3,A68_169 ), &WQUACTR );
ZPUACTR.Extra = A_UNITE(XQUACTR,mode6,6,WQUACTR);
} 
else
{ 
 /* line 712: */
if ( (Version==3) )
{ 
YQUACTR_name = A_VC_PLUS(HJTACTR_qpower,RKTACTR_qcomplex);
 /* line 713: */
CRUACTR = VPQACTR_yield(YQUACTR_name, TPUACTR_left) ;
ARUACTR.data[0] = A_UNITE(BRUACTR,mode1,1,CRUACTR);
ERUACTR = VPQACTR_yield(YQUACTR_name, UPUACTR_right) ;
ARUACTR.data[1] = A_UNITE(DRUACTR,mode1,1,ERUACTR);
 /* line 714: */
EOQACTR_usemacro( GRUACTR, A_HISVEC(FRUACTR,ARUACTR,2,A68_169 ), &HRUACTR );
ZPUACTR.Extra = A_UNITE(IRUACTR,mode6,6,HRUACTR);
} 
else
{ 
WXIACTR_assert(A_VC_PLUS(HJTACTR_qpower,DHTACTR_qvfault), A68_FALSE);
 /* line 715: */
 /* line 716: */
 /* line 717: */
ZPUACTR.Extra = JRUACTR;
} 
} 
} 
KRUACTR = ZPUACTR;
} 
A_PROC_EXIT(power);
*ReturnedValue = (KRUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  NRUACTR_castvalue(A68_INT  Mode, A68_55 * Value, A68_VC  *ReturnedValue)
{ 
A68_VC  ORUACTR;  /* clause result */
A68_VC  PRUACTR;  /* avoid structure result */
A68_VC  QRUACTR;  /* avoid structure result */
A_PROC_ENTRY(castvalue);
 /* line 721: */
FLNACTR_cast( Mode, &PRUACTR );
NDQACTR_bracketcfragment( Value, &QRUACTR );
ORUACTR = A_VC_PLUS(PRUACTR,QRUACTR);
A_PROC_EXIT(castvalue);
*ReturnedValue = (ORUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  URUACTR_imaginary(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * VRUACTR_left;
A68_55 * WRUACTR_right;
A68_INT  XRUACTR_m;
A68_59  YRUACTR;  /* avoid structure result */
A68_59  ZRUACTR_temp;
A68_55  ASUACTR;  /* collateral clause result */
A68_203  CSUACTR;  /* collateral clause result */
A68_169  DSUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ESUACTR;  /* avoid structure result */
A68_169  FSUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  GSUACTR;  /* avoid structure result */
A68_169  HSUACTR;  /* OPERATORS - mode -> union mode */
A68_172  ISUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  KSUACTR;  /* avoid structure result */
A68_56  LSUACTR;  /* OPERATORS - mode -> union mode */
A68_203  NSUACTR;  /* collateral clause result */
A68_169  OSUACTR;  /* OPERATORS - mode -> union mode */
A68_169  PSUACTR;  /* OPERATORS - mode -> union mode */
A68_169  QSUACTR;  /* OPERATORS - mode -> union mode */
A68_172  RSUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  TSUACTR;  /* avoid structure result */
A68_56  USUACTR;  /* OPERATORS - mode -> union mode */
A68_55  VSUACTR;  /* clause result */
A_PROC_ENTRY(imaginary);
 /* line 724: */
 /* line 725: */
{ 
 /* line 726: */
RYQACTR_eval2(Root, (&VRUACTR_left), (&WRUACTR_right));
 /* line 727: */
XRUACTR_m = ((*(&(Root->Mode)))-4);
 /* line 728: */
A_CALLPROC(KMOACTR_new,((*(&(Root->Mode))), MITACTR_qi, &YRUACTR),((*(&(Root->Mode))), MITACTR_qi, &YRUACTR,(KMOACTR_new).nonlocals));
ZRUACTR_temp = YRUACTR;
 /* line 729: */
 /* line 730: */
ASUACTR.Mode = (*(&(Root->Mode)));
 /* line 731: */
ASUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(VRUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(WRUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 732: */
if ( (Version==1) )
{ 
 /* line 733: */
CSUACTR.data[0] = A_UNITE(DSUACTR,mode3,3,ZRUACTR_temp);
NRUACTR_castvalue( XRUACTR_m, VRUACTR_left, &ESUACTR );
CSUACTR.data[1] = A_UNITE(FSUACTR,mode2,2,ESUACTR);
NRUACTR_castvalue( XRUACTR_m, WRUACTR_right, &GSUACTR );
CSUACTR.data[2] = A_UNITE(HSUACTR,mode2,2,GSUACTR);
 /* line 734: */
EOQACTR_usemacro( JSUACTR, A_HISVEC(ISUACTR,CSUACTR,3,A68_169 ), &KSUACTR );
ASUACTR.Extra = A_UNITE(LSUACTR,mode6,6,KSUACTR);
} 
else
{ 
NSUACTR.data[0] = A_UNITE(OSUACTR,mode3,3,ZRUACTR_temp);
NSUACTR.data[1] = A_UNITE(PSUACTR,mode1,1,VRUACTR_left);
NSUACTR.data[2] = A_UNITE(QSUACTR,mode1,1,WRUACTR_right);
 /* line 735: */
 /* line 736: */
 /* line 737: */
EOQACTR_usemacro( SSUACTR, A_HISVEC(RSUACTR,NSUACTR,3,A68_169 ), &TSUACTR );
ASUACTR.Extra = A_UNITE(USUACTR,mode6,6,TSUACTR);
} 
VSUACTR = ASUACTR;
} 
A_PROC_EXIT(imaginary);
*ReturnedValue = (VSUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ZSUACTR_shiftleftright(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_VC  BTUACTR;  /* clause result */
A68_VC  HTUACTR;  /* OPERATORS - skip to mode */
A68_VC  ITUACTR_op;
A68_VC  JTUACTR_adic;
A68_55 * KTUACTR_left;
A68_55 * LTUACTR_right;
A68_55  MTUACTR;  /* collateral clause result */
A68_VC  PTUACTR;  /* avoid structure result */
A68_56  QTUACTR;  /* OPERATORS - mode -> union mode */
A68_56  RTUACTR;  /* OPERATORS - skip to mode */
A68_55  STUACTR;  /* clause result */
A_PROC_ENTRY(shiftleftright);
 /* line 740: */
 /* line 742: */
{ 
 /* line 743: */
switch ( (Opnumber-17) )
{ 
case 1: 
 /* line 744: */
BTUACTR = CTUACTR;
break;
case 2: 
BTUACTR = ETUACTR;
break;
default: 
WXIACTR_assert(GTUACTR, A68_FALSE);
 /* line 745: */
BTUACTR = HTUACTR;
break;
} 
ITUACTR_op = BTUACTR;
 /* line 746: */
JTUACTR_adic = A_VC_PLUS(AHTACTR_modulename,ITUACTR_op);
 /* line 747: */
 /* line 748: */
RYQACTR_eval2(Root, (&KTUACTR_left), (&LTUACTR_right));
 /* line 749: */
 /* line 750: */
MTUACTR.Mode = (*(&(Root->Mode)));
 /* line 751: */
MTUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(KTUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(LTUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 752: */
if ( (Version==1) )
{ 
 /* line 753: */
GLTACTR_simpledyop( A68_TRUE, A_VC_PLUS(OTUACTR,ITUACTR_op), VPQACTR_yield(ITUACTR_op, KTUACTR_left), VPQACTR_yield(ITUACTR_op, LTUACTR_right), &PTUACTR );
MTUACTR.Extra = A_UNITE(QTUACTR,mode6,6,PTUACTR);
} 
else
{ 
WXIACTR_assert(A_VC_PLUS(JTUACTR_adic,DHTACTR_qvfault), A68_FALSE);
 /* line 754: */
 /* line 755: */
 /* line 756: */
MTUACTR.Extra = RTUACTR;
} 
STUACTR = MTUACTR;
} 
A_PROC_EXIT(shiftleftright);
*ReturnedValue = (STUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  WTUACTR_elem(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * XTUACTR_left;
A68_55 * YTUACTR_right;
A68_INT  ZTUACTR_m;
A68_207  BUUACTR;  /* collateral clause result */
A68_169  CUUACTR;  /* OPERATORS - mode -> union mode */
A68_55 * DUUACTR;  /* YIELD */
A68_169  EUUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  FUUACTR;  /* avoid structure result */
A68_169  GUUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  HUUACTR;  /* avoid structure result */
A68_169  IUUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JUUACTR;  /* clause result */
A68_172  KUUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  MUUACTR;  /* avoid structure result */
A68_VC  NUUACTR;  /* OPERATORS - skip to mode */
A68_VC  OUUACTR_body;
A68_55  PUUACTR;  /* collateral clause result */
A68_56  QUUACTR;  /* OPERATORS - mode -> union mode */
A68_55  RUUACTR;  /* clause result */
A_PROC_ENTRY(elem);
 /* line 759: */
 /* line 760: */
{ 
RYQACTR_eval2(Root, (&XTUACTR_left), (&YTUACTR_right));
 /* line 761: */
 /* line 762: */
 /* line 765: */
if ( (Version==1) )
{ 
ZTUACTR_m = (*(&(YTUACTR_right->Mode)));
 /* line 766: */
 /* line 767: */
 /* line 768: */
DUUACTR = VPQACTR_yield(KJTACTR_qelem, XTUACTR_left) ;
BUUACTR.data[0] = A_UNITE(CUUACTR,mode1,1,DUUACTR);
BUUACTR.data[1] = A_UNITE(EUUACTR,mode1,1,YTUACTR_right);
FLNACTR_cast( ZTUACTR_m, &FUUACTR );
BUUACTR.data[2] = A_UNITE(GUUACTR,mode2,2,FUUACTR);
 /* line 769: */
KLNACTR_csizeof( ZTUACTR_m, &HUUACTR );
BUUACTR.data[3] = A_UNITE(IUUACTR,mode2,2,HUUACTR);
 /* line 770: */
EOQACTR_usemacro( LUUACTR, A_HISVEC(KUUACTR,BUUACTR,4,A68_169 ), &MUUACTR );
JUUACTR = MUUACTR;
} 
else
{ 
WXIACTR_assert(A_VC_PLUS(KJTACTR_qelem,DHTACTR_qvfault), A68_FALSE);
 /* line 771: */
JUUACTR = NUUACTR;
} 
OUUACTR_body = JUUACTR;
 /* line 772: */
PUUACTR.Mode = (*(&(Root->Mode)));
PUUACTR.Info = PKJACTR_defaultinfo;
 /* line 773: */
PUUACTR.Extra = A_UNITE(QUUACTR,mode6,6,OUUACTR_body);
RUUACTR = PUUACTR;
} 
A_PROC_EXIT(elem);
*ReturnedValue = (RUUACTR);
return;
} 
#undef NL

A_STATIC A68_BITS  UUUACTR_abattribute(A68_BOOL  Noref, A68_55 * Op)
{ 
A68_BITS  VUUACTR;  /* clause result */
A_PROC_ENTRY(abattribute);
 /* line 787: */
 /* line 788: */
 /* line 790: */
if ( UVPACTR_hasattribute(Op, TKJACTR_nonloc) )
{ 
 /* line 791: */
VUUACTR = (A68_BITS )(TKJACTR_nonloc|XKJACTR_fxwarn);
} 
else
{ 
 /* line 792: */
if ( Noref )
{ 
 /* line 793: */
 /* line 797: */
VUUACTR = (A68_BITS )(SKJACTR_effects|XKJACTR_fxwarn);
} 
else
{ 
 /* line 798: */
 /* line 799: */
VUUACTR = (A68_BITS )(RKJACTR_atomic|XKJACTR_fxwarn);
} 
} 
A_PROC_EXIT(abattribute);
return( VUUACTR );
} 
#undef NL
 /* line 806: */
 /* line 807: */
 /* line 808: */
 /* line 809: */

A_STATIC A68_VOID  BVUACTR_simpleabop(A68_BOOL  Noref, A68_BOOL  Macro, A68_VC  Oper, A68_55 * Left, A68_55 * Right, A68_56  *ReturnedValue)
{ 
A68_55 * CVUACTR_lhs;
A68_192  DVUACTR;  /* collateral clause result */
A68_169  EVUACTR;  /* OPERATORS - mode -> union mode */
A68_169  FVUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  GVUACTR;  /* clause result */
A68_172  HVUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  IVUACTR;  /* avoid structure result */
A68_VC  JVUACTR;  /* avoid structure result */
A68_VC  KVUACTR;  /* avoid structure result */
A68_VC  LVUACTR_body;
A68_56  MVUACTR;  /* clause result */
A68_56  NVUACTR;  /* OPERATORS - mode -> union mode */
A68_192  OVUACTR;  /* collateral clause result */
A68_169  PVUACTR;  /* OPERATORS - mode -> union mode */
A68_169  SVUACTR;  /* OPERATORS - mode -> union mode */
A68_VC  TVUACTR;  /* YIELD */
A68_172  UVUACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(simpleabop);
 /* line 810: */
 /* line 811: */
{ 
CVUACTR_lhs = KPQACTR_yield(Left);
 /* line 812: */
PKAAOSF_orab((&(CVUACTR_lhs->Info)), VKJACTR_lvalue);
 /* line 813: */
 /* line 814: */
 /* line 815: */
if ( Macro )
{ 
DVUACTR.data[0] = A_UNITE(EVUACTR,mode1,1,CVUACTR_lhs);
DVUACTR.data[1] = A_UNITE(FVUACTR,mode1,1,Right);
 /* line 816: */
EOQACTR_usemacro( Oper, A_HISVEC(HVUACTR,DVUACTR,2,A68_169 ), &IVUACTR );
GVUACTR = IVUACTR;
} 
else
{ 
 /* line 817: */
NDQACTR_bracketcfragment( CVUACTR_lhs, &JVUACTR );
NDQACTR_bracketcfragment( Right, &KVUACTR );
GVUACTR = A_VC_PLUS(A_VC_PLUS(JVUACTR,Oper),KVUACTR);
} 
LVUACTR_body = GVUACTR;
 /* line 818: */
 /* line 819: */
 /* line 820: */
if ( Noref )
{ 
MVUACTR = A_UNITE(NVUACTR,mode6,6,LVUACTR_body);
} 
else
{ 
OVUACTR.data[0] = A_UNITE(PVUACTR,mode2,2,LVUACTR_body);
TVUACTR = RVUACTR ;
OVUACTR.data[1] = A_UNITE(SVUACTR,mode2,2,TVUACTR);
JOQACTR_emitline(A_HISVEC(UVUACTR,OVUACTR,2,A68_169 ));
 /* line 821: */
 /* line 822: */
MVUACTR = (*(&(CVUACTR_lhs->Extra)));
} 
} 
A_PROC_EXIT(simpleabop);
*ReturnedValue = (MVUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  YVUACTR_plusab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * ZVUACTR_left;
A68_55 * AWUACTR_right;
A68_BOOL  BWUACTR_opt;
A68_56  DWUACTR;  /* clause result */
A68_56  FWUACTR;  /* avoid structure result */
A68_56  IWUACTR;  /* avoid structure result */
A68_125  LWUACTR;  /* OPERATORS - vacuum */
A68_VC  MWUACTR;  /* avoid structure result */
A68_56  NWUACTR;  /* OPERATORS - mode -> union mode */
A68_56  QWUACTR;  /* avoid structure result */
A68_56  TWUACTR;  /* avoid structure result */
A68_56  UWUACTR;  /* OPERATORS - skip to mode */
A68_56  VWUACTR_body;
A68_55  WWUACTR;  /* collateral clause result */
A68_55  XWUACTR;  /* clause result */
A_PROC_ENTRY(plusab);
 /* line 826: */
 /* line 827: */
{ 
 /* line 828: */
ZXQACTR_eval_pass_left(Root, (&ZVUACTR_left), VKJACTR_lvalue);
 /* line 829: */
IYQACTR_eval_pass_right(Root, (&AWUACTR_right), PKJACTR_defaultinfo);
 /* line 830: */
BWUACTR_opt = UVPACTR_hasattribute(Root, UKJACTR_voided);
 /* line 831: */
 /* line 832: */
 /* line 833: */
switch ( Version )
{ 
case 1: 
 /* line 834: */
BVUACTR_simpleabop( BWUACTR_opt, A68_FALSE, EWUACTR, ZVUACTR_left, AWUACTR_right, &FWUACTR );
DWUACTR = FWUACTR;
break;
case 2: 
 /* line 835: */
BVUACTR_simpleabop( BWUACTR_opt, A68_FALSE, HWUACTR, ZVUACTR_left, AWUACTR_right, &IWUACTR );
DWUACTR = IWUACTR;
break;
case 3: 
 /* line 836: */
 /* line 837: */
DBUACTR_complexop( A_VVAC(LWUACTR), KWUACTR, A_VC_PLUS(NJTACTR_qplusab,RKTACTR_qcomplex), ZVUACTR_left, AWUACTR_right, A68_TRUE, &MWUACTR );
DWUACTR = A_UNITE(NWUACTR,mode6,6,MWUACTR);
break;
case 4: 
 /* line 838: */
BVUACTR_simpleabop( BWUACTR_opt, A68_TRUE, PWUACTR, ZVUACTR_left, AWUACTR_right, &QWUACTR );
DWUACTR = QWUACTR;
break;
case 5: 
 /* line 839: */
BVUACTR_simpleabop( BWUACTR_opt, A68_TRUE, SWUACTR, ZVUACTR_left, AWUACTR_right, &TWUACTR );
DWUACTR = TWUACTR;
break;
default: 
WXIACTR_assert(A_VC_PLUS(NJTACTR_qplusab,DHTACTR_qvfault), A68_FALSE);
 /* line 840: */
DWUACTR = UWUACTR;
break;
} 
VWUACTR_body = DWUACTR;
 /* line 841: */
WWUACTR.Mode = (*(&(Root->Mode)));
WWUACTR.Info = UUUACTR_abattribute(BWUACTR_opt, ZVUACTR_left);
 /* line 842: */
WWUACTR.Extra = VWUACTR_body;
XWUACTR = WWUACTR;
} 
A_PROC_EXIT(plusab);
*ReturnedValue = (XWUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  BXUACTR_plusto(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * CXUACTR_left;
A68_55 * DXUACTR_right;
A68_BOOL  EXUACTR_opt;
A68_56  IXUACTR;  /* clause result */
A68_56  KXUACTR;  /* avoid structure result */
A68_56  PXUACTR;  /* avoid structure result */
A68_56  QXUACTR;  /* OPERATORS - skip to mode */
A68_56  RXUACTR_body;
A68_55  SXUACTR;  /* collateral clause result */
A68_55  TXUACTR;  /* clause result */
A_PROC_ENTRY(plusto);
 /* line 845: */
 /* line 846: */
{ 
 /* line 847: */
ZXQACTR_eval_pass_left(Root, (&CXUACTR_left), PKJACTR_defaultinfo);
 /* line 848: */
IYQACTR_eval_pass_right(Root, (&DXUACTR_right), VKJACTR_lvalue);
 /* line 849: */
EXUACTR_opt = UVPACTR_hasattribute(Root, UKJACTR_voided);
 /* line 850: */
 /* line 851: */
 /* line 853: */
switch ( Version )
{ 
case 1: 
{ 
 /* line 854: */
WXIACTR_assert(A_VC_PLUS(QJTACTR_qplusto,GXUACTR), (EQMACTR_isflexvec((*(&(DXUACTR_right->Mode))))&PPMACTR_isvec((*(&(CXUACTR_left->Mode))))));
 /* line 855: */
 /* line 856: */
 /* line 858: */
BVUACTR_simpleabop( EXUACTR_opt, A68_TRUE, JXUACTR, DXUACTR_right, CXUACTR_left, &KXUACTR );
IXUACTR = KXUACTR;
} 
break;
case 2: 
{ 
 /* line 859: */
WXIACTR_assert(A_VC_PLUS(QJTACTR_qplusto,MXUACTR), (IQMACTR_isflexrow((*(&(DXUACTR_right->Mode))))&TPMACTR_isrow((*(&(CXUACTR_left->Mode))))));
 /* line 860: */
 /* line 861: */
 /* line 862: */
BVUACTR_simpleabop( EXUACTR_opt, A68_TRUE, OXUACTR, DXUACTR_right, CXUACTR_left, &PXUACTR );
IXUACTR = PXUACTR;
} 
break;
default: 
WXIACTR_assert(A_VC_PLUS(QJTACTR_qplusto,DHTACTR_qvfault), A68_FALSE);
 /* line 863: */
IXUACTR = QXUACTR;
break;
} 
RXUACTR_body = IXUACTR;
 /* line 864: */
SXUACTR.Mode = (*(&(Root->Mode)));
SXUACTR.Info = UUUACTR_abattribute(EXUACTR_opt, CXUACTR_left);
 /* line 865: */
SXUACTR.Extra = RXUACTR_body;
TXUACTR = SXUACTR;
} 
A_PROC_EXIT(plusto);
*ReturnedValue = (TXUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  XXUACTR_minusab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * YXUACTR_left;
A68_55 * ZXUACTR_right;
A68_BOOL  AYUACTR_opt;
A68_56  CYUACTR;  /* clause result */
A68_56  EYUACTR;  /* avoid structure result */
A68_125  HYUACTR;  /* OPERATORS - vacuum */
A68_VC  IYUACTR;  /* avoid structure result */
A68_56  JYUACTR;  /* OPERATORS - mode -> union mode */
A68_56  KYUACTR;  /* OPERATORS - skip to mode */
A68_56  LYUACTR_body;
A68_55  MYUACTR;  /* collateral clause result */
A68_55  NYUACTR;  /* clause result */
A_PROC_ENTRY(minusab);
 /* line 868: */
 /* line 869: */
{ 
 /* line 870: */
ZXQACTR_eval_pass_left(Root, (&YXUACTR_left), VKJACTR_lvalue);
 /* line 871: */
IYQACTR_eval_pass_right(Root, (&ZXUACTR_right), PKJACTR_defaultinfo);
 /* line 872: */
AYUACTR_opt = UVPACTR_hasattribute(Root, UKJACTR_voided);
 /* line 873: */
 /* line 874: */
 /* line 875: */
if ( ((Version==1)|(Version==2)) )
{ 
 /* line 876: */
BVUACTR_simpleabop( AYUACTR_opt, A68_FALSE, DYUACTR, YXUACTR_left, ZXUACTR_right, &EYUACTR );
CYUACTR = EYUACTR;
} 
else
{ 
 /* line 877: */
if ( (Version==3) )
{ 
 /* line 878: */
 /* line 879: */
DBUACTR_complexop( A_VVAC(HYUACTR), GYUACTR, A_VC_PLUS(TJTACTR_qminusab,RKTACTR_qcomplex), YXUACTR_left, ZXUACTR_right, A68_TRUE, &IYUACTR );
CYUACTR = A_UNITE(JYUACTR,mode6,6,IYUACTR);
} 
else
{ 
WXIACTR_assert(A_VC_PLUS(TJTACTR_qminusab,DHTACTR_qvfault), A68_FALSE);
 /* line 880: */
CYUACTR = KYUACTR;
} 
} 
LYUACTR_body = CYUACTR;
 /* line 881: */
MYUACTR.Mode = (*(&(Root->Mode)));
MYUACTR.Info = UUUACTR_abattribute(AYUACTR_opt, YXUACTR_left);
 /* line 882: */
MYUACTR.Extra = LYUACTR_body;
NYUACTR = MYUACTR;
} 
A_PROC_EXIT(minusab);
*ReturnedValue = (NYUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  RYUACTR_timesab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * SYUACTR_left;
A68_55 * TYUACTR_right;
A68_BOOL  UYUACTR_opt;
A68_56  WYUACTR;  /* clause result */
A68_56  YYUACTR;  /* avoid structure result */
A68_56  BZUACTR;  /* avoid structure result */
A68_125  EZUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  FZUACTR;  /* avoid structure result */
A68_56  GZUACTR;  /* OPERATORS - mode -> union mode */
A68_56  JZUACTR;  /* avoid structure result */
A68_56  MZUACTR;  /* avoid structure result */
A68_56  NZUACTR;  /* OPERATORS - skip to mode */
A68_56  OZUACTR_body;
A68_55  PZUACTR;  /* collateral clause result */
A68_55  QZUACTR;  /* clause result */
A_PROC_ENTRY(timesab);
 /* line 885: */
 /* line 886: */
{ 
 /* line 887: */
ZXQACTR_eval_pass_left(Root, (&SYUACTR_left), VKJACTR_lvalue);
 /* line 888: */
IYQACTR_eval_pass_right(Root, (&TYUACTR_right), PKJACTR_defaultinfo);
 /* line 889: */
UYUACTR_opt = UVPACTR_hasattribute(Root, UKJACTR_voided);
 /* line 890: */
 /* line 891: */
 /* line 892: */
switch ( Version )
{ 
case 1: 
 /* line 893: */
BVUACTR_simpleabop( UYUACTR_opt, A68_FALSE, XYUACTR, SYUACTR_left, TYUACTR_right, &YYUACTR );
WYUACTR = YYUACTR;
break;
case 2: 
 /* line 894: */
BVUACTR_simpleabop( UYUACTR_opt, A68_FALSE, AZUACTR, SYUACTR_left, TYUACTR_right, &BZUACTR );
WYUACTR = BZUACTR;
break;
case 3: 
 /* line 895: */
 /* line 896: */
DBUACTR_complexop( A_HVEC(EZUACTR,EOMACTR_deref((*(&(Root->Mode)))),A68_INT ), DZUACTR, A_VC_PLUS(WJTACTR_qtimesab,RKTACTR_qcomplex), SYUACTR_left, TYUACTR_right, A68_TRUE, &FZUACTR );
WYUACTR = A_UNITE(GZUACTR,mode6,6,FZUACTR);
break;
case 4: 
 /* line 897: */
BVUACTR_simpleabop( UYUACTR_opt, A68_TRUE, IZUACTR, SYUACTR_left, TYUACTR_right, &JZUACTR );
WYUACTR = JZUACTR;
break;
case 5: 
 /* line 898: */
BVUACTR_simpleabop( UYUACTR_opt, A68_TRUE, LZUACTR, SYUACTR_left, TYUACTR_right, &MZUACTR );
WYUACTR = MZUACTR;
break;
default: 
WXIACTR_assert(A_VC_PLUS(WJTACTR_qtimesab,DHTACTR_qvfault), A68_FALSE);
 /* line 899: */
WYUACTR = NZUACTR;
break;
} 
OZUACTR_body = WYUACTR;
 /* line 900: */
PZUACTR.Mode = (*(&(Root->Mode)));
PZUACTR.Info = UUUACTR_abattribute(UYUACTR_opt, SYUACTR_left);
 /* line 901: */
PZUACTR.Extra = OZUACTR_body;
QZUACTR = PZUACTR;
} 
A_PROC_EXIT(timesab);
*ReturnedValue = (QZUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  UZUACTR_overab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * VZUACTR_left;
A68_55 * WZUACTR_right;
A68_BOOL  XZUACTR_opt;
A68_56  ZZUACTR;  /* clause result */
A68_56  BAVACTR;  /* avoid structure result */
A68_56  CAVACTR;  /* OPERATORS - skip to mode */
A68_56  DAVACTR_body;
A68_55  EAVACTR;  /* collateral clause result */
A68_55  FAVACTR;  /* clause result */
A_PROC_ENTRY(overab);
 /* line 904: */
 /* line 905: */
{ 
 /* line 906: */
ZXQACTR_eval_pass_left(Root, (&VZUACTR_left), VKJACTR_lvalue);
 /* line 907: */
IYQACTR_eval_pass_right(Root, (&WZUACTR_right), PKJACTR_defaultinfo);
 /* line 908: */
XZUACTR_opt = UVPACTR_hasattribute(Root, UKJACTR_voided);
 /* line 909: */
 /* line 910: */
 /* line 911: */
if ( (Version==1) )
{ 
 /* line 912: */
BVUACTR_simpleabop( XZUACTR_opt, A68_FALSE, AAVACTR, VZUACTR_left, WZUACTR_right, &BAVACTR );
ZZUACTR = BAVACTR;
} 
else
{ 
WXIACTR_assert(A_VC_PLUS(ZJTACTR_qoverab,DHTACTR_qvfault), A68_FALSE);
 /* line 913: */
ZZUACTR = CAVACTR;
} 
DAVACTR_body = ZZUACTR;
 /* line 914: */
EAVACTR.Mode = (*(&(Root->Mode)));
EAVACTR.Info = UUUACTR_abattribute(XZUACTR_opt, VZUACTR_left);
 /* line 915: */
EAVACTR.Extra = DAVACTR_body;
FAVACTR = EAVACTR;
} 
A_PROC_EXIT(overab);
*ReturnedValue = (FAVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  JAVACTR_modab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_BOOL  KAVACTR_opt;
A68_55 * LAVACTR_left;
A68_55 * MAVACTR_right;
A68_55  NAVACTR;  /* collateral clause result */
A68_56  QAVACTR;  /* avoid structure result */
A68_56  RAVACTR;  /* OPERATORS - skip to mode */
A68_55  SAVACTR;  /* clause result */
A_PROC_ENTRY(modab);
 /* line 918: */
 /* line 919: */
{ 
KAVACTR_opt = UVPACTR_hasattribute(Root, UKJACTR_voided);
 /* line 920: */
 /* line 921: */
ZXQACTR_eval_pass_left(Root, (&LAVACTR_left), VKJACTR_lvalue);
 /* line 922: */
IYQACTR_eval_pass_right(Root, (&MAVACTR_right), PKJACTR_defaultinfo);
 /* line 923: */
 /* line 924: */
NAVACTR.Mode = (*(&(Root->Mode)));
 /* line 925: */
NAVACTR.Info = UUUACTR_abattribute(KAVACTR_opt, LAVACTR_left);
 /* line 926: */
if ( (Version==1) )
{ 
 /* line 927: */
BVUACTR_simpleabop( KAVACTR_opt, A68_TRUE, PAVACTR, LAVACTR_left, MAVACTR_right, &QAVACTR );
NAVACTR.Extra = QAVACTR;
} 
else
{ 
WXIACTR_assert(A_VC_PLUS(CKTACTR_qmodab,DHTACTR_qvfault), A68_FALSE);
 /* line 928: */
 /* line 929: */
 /* line 930: */
NAVACTR.Extra = RAVACTR;
} 
SAVACTR = NAVACTR;
} 
A_PROC_EXIT(modab);
*ReturnedValue = (SAVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  WAVACTR_divab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * XAVACTR_left;
A68_55 * YAVACTR_right;
A68_BOOL  ZAVACTR_opt;
A68_55  ABVACTR;  /* collateral clause result */
A68_56  DBVACTR;  /* avoid structure result */
A68_217  EBVACTR;  /* collateral clause result */
A68_125  HBVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  IBVACTR;  /* avoid structure result */
A68_56  JBVACTR;  /* OPERATORS - mode -> union mode */
A68_56  KBVACTR;  /* OPERATORS - skip to mode */
A68_55  LBVACTR;  /* clause result */
A_PROC_ENTRY(divab);
 /* line 933: */
 /* line 934: */
{ 
 /* line 935: */
ZXQACTR_eval_pass_left(Root, (&XAVACTR_left), VKJACTR_lvalue);
 /* line 936: */
IYQACTR_eval_pass_right(Root, (&YAVACTR_right), PKJACTR_defaultinfo);
 /* line 937: */
ZAVACTR_opt = UVPACTR_hasattribute(Root, UKJACTR_voided);
 /* line 939: */
 /* line 940: */
ABVACTR.Mode = (*(&(Root->Mode)));
 /* line 941: */
ABVACTR.Info = UUUACTR_abattribute(ZAVACTR_opt, XAVACTR_left);
 /* line 942: */
if ( (Version==1) )
{ 
 /* line 943: */
BVUACTR_simpleabop( ZAVACTR_opt, A68_FALSE, CBVACTR, XAVACTR_left, YAVACTR_right, &DBVACTR );
ABVACTR.Extra = DBVACTR;
} 
else
{ 
 /* line 944: */
if ( (Version==2) )
{ 
EBVACTR.data[0] = (*(&(YAVACTR_right->Mode)));
EBVACTR.data[1] = ((*(&(YAVACTR_right->Mode)))-4);
 /* line 945: */
 /* line 946: */
DBUACTR_complexop( A_HISVEC(HBVACTR,EBVACTR,2,A68_INT ), GBVACTR, A_VC_PLUS(WJTACTR_qtimesab,RKTACTR_qcomplex), XAVACTR_left, YAVACTR_right, A68_TRUE, &IBVACTR );
ABVACTR.Extra = A_UNITE(JBVACTR,mode6,6,IBVACTR);
} 
else
{ 
WXIACTR_assert(A_VC_PLUS(FKTACTR_qdivab,DHTACTR_qvfault), A68_FALSE);
 /* line 947: */
 /* line 948: */
 /* line 949: */
ABVACTR.Extra = KBVACTR;
} 
} 
LBVACTR = ABVACTR;
} 
A_PROC_EXIT(divab);
*ReturnedValue = (LBVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  PBVACTR_isisnt(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_VC  RBVACTR;  /* clause result */
A68_VC  XBVACTR;  /* OPERATORS - skip to mode */
A68_VC  YBVACTR_op;
A68_VC  ZBVACTR_adic;
A68_55 * ACVACTR_left;
A68_55 * BCVACTR_right;
A68_BOOL  CCVACTR;  /* optbool result */
A68_VC  GCVACTR;  /* clause result */
A68_VC  LCVACTR;  /* clause result */
A68_VC  QCVACTR;  /* clause result */
A68_VC  SCVACTR;  /* avoid structure result */
A68_VC  TCVACTR;  /* avoid structure result */
A68_VC  UCVACTR_body;
A68_55  VCVACTR;  /* collateral clause result */
A68_56  WCVACTR;  /* OPERATORS - mode -> union mode */
A68_55  XCVACTR;  /* clause result */
A_PROC_ENTRY(isisnt);
 /* line 956: */
 /* line 958: */
{ 
 /* line 959: */
switch ( (Opnumber-26) )
{ 
case 1: 
 /* line 960: */
RBVACTR = SBVACTR;
break;
case 2: 
RBVACTR = UBVACTR;
break;
default: 
WXIACTR_assert(A_VC_PLUS(OKTACTR_qisisnt,WBVACTR), A68_FALSE);
 /* line 961: */
RBVACTR = XBVACTR;
break;
} 
YBVACTR_op = RBVACTR;
 /* line 963: */
ZBVACTR_adic = A_VC_PLUS(AHTACTR_modulename,YBVACTR_op);
 /* line 964: */
RYQACTR_eval2(Root, (&ACVACTR_left), (&BCVACTR_right));
 /* line 966: */
 /* line 967: */
 /* line 968: */
CCVACTR = ((*(&(ACVACTR_left->Mode)))<WFAACTR_refrefmark);
if ( CCVACTR )
{ /* line 969: */
CCVACTR = ARMACTR_isarray((*(&(ACVACTR_left->Mode))));
}
 /* line 970: */
if ( CCVACTR )
{ 
if ( A_VC_EQ(YBVACTR_op,ECVACTR) )
{ 
GCVACTR = HCVACTR;
} 
else
{ 
 /* line 972: */
GCVACTR = JCVACTR;
} 
if ( VQMACTR_isrow((*(&(ACVACTR_left->Mode)))) )
{ 
LCVACTR = MCVACTR;
} 
else
{ 
LCVACTR = OCVACTR;
} 
 /* line 973: */
 /* line 974: */
 /* line 975: */
 /* line 976: */
GLTACTR_simpledyop( A68_TRUE, A_VC_PLUS(LCVACTR,RCVACTR), VPQACTR_yield(YBVACTR_op, ACVACTR_left), VPQACTR_yield(YBVACTR_op, BCVACTR_right), &SCVACTR );
QCVACTR = A_VC_PLUS(GCVACTR,SCVACTR);
} 
else
{ 
 /* line 977: */
GLTACTR_simpledyop( A68_FALSE, YBVACTR_op, ACVACTR_left, BCVACTR_right, &TCVACTR );
QCVACTR = TCVACTR;
} 
UCVACTR_body = QCVACTR;
 /* line 978: */
 /* line 979: */
VCVACTR.Mode = (*(&(Root->Mode)));
 /* line 981: */
VCVACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(ACVACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(BCVACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 982: */
VCVACTR.Extra = A_UNITE(WCVACTR,mode6,6,UCVACTR_body);
XCVACTR = VCVACTR;
} 
A_PROC_EXIT(isisnt);
*ReturnedValue = (XCVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  IEVACTR_anonymous(A68_55 * V, A68_INT  I, A68_INT  J, A68_55  *ReturnedValue)
{ 
A68_55  LEVACTR;  /* clause result */
 /* line 1020: */
{ 
WXIACTR_assert(KEVACTR, A68_FALSE);
 /* line 1021: */
LEVACTR = DLJACTR_skipvalue;
} 
*ReturnedValue = (LEVACTR);
return;
} 
#undef NL

A68_VOID  XEVACTR_dyadicsem(A68_55 * Root, A68_62  Rator, A68_55  *ReturnedValue)
{ 
A68_INT  YEVACTR_param;
A68_INT  ZEVACTR_opnumber;
A68_INT  AFVACTR;  /* ADICOPS - MOD */
A68_INT  BFVACTR_version;
A68_55  CFVACTR;  /* clause result */
A68_193  DFVACTR;  /* CALL */
A68_55  EFVACTR;  /* avoid structure result */
A68_INT  FFVACTR_biopparam;
A68_INT  GFVACTR_opnumber;
A68_INT  HFVACTR;  /* ADICOPS - MOD */
A68_INT  IFVACTR_version;
A68_193  JFVACTR;  /* CALL */
A68_55  KFVACTR;  /* avoid structure result */
A_PROC_ENTRY(dyadicsem);
 /* line 1030: */
 /* line 1031: */
{ 
YEVACTR_param = (A68_INT )(A68_BITS )((A68_BITS )Rator.Param&ZGAACTR_parammask);
 /* line 1032: */
 /* line 1033: */
if ( (YEVACTR_param<RGAACTR_biopnumbersstart) )
{ 
ZEVACTR_opnumber = (YEVACTR_param/SGAACTR_opnumberdivisor);
 /* line 1034: */
BFVACTR_version = A_MOD(YEVACTR_param,SGAACTR_opnumberdivisor,AFVACTR);
 /* line 1035: */
 /* line 1036: */
DFVACTR = A_R1INDEX(QEVACTR_dyadicsemantics,ZEVACTR_opnumber) ;
A_CALLPROC(DFVACTR,(Root, ZEVACTR_opnumber, BFVACTR_version, &EFVACTR),(Root, ZEVACTR_opnumber, BFVACTR_version, &EFVACTR,(DFVACTR).nonlocals));
CFVACTR = EFVACTR;
} 
else
{ 
FFVACTR_biopparam = (YEVACTR_param-RGAACTR_biopnumbersstart);
 /* line 1037: */
GFVACTR_opnumber = (FFVACTR_biopparam/TGAACTR_biopnumberdivisor);
 /* line 1038: */
IFVACTR_version = A_MOD(FFVACTR_biopparam,TGAACTR_biopnumberdivisor,HFVACTR);
 /* line 1039: */
 /* line 1040: */
 /* line 1041: */
 /* line 1043: */
JFVACTR = A_R1INDEX(UEVACTR_dyadicbiopsemantics,GFVACTR_opnumber) ;
A_CALLPROC(JFVACTR,(Root, GFVACTR_opnumber, IFVACTR_version, &KFVACTR),(Root, GFVACTR_opnumber, IFVACTR_version, &KFVACTR,(JFVACTR).nonlocals));
CFVACTR = KFVACTR;
} 
} 
A_PROC_EXIT(dyadicsem);
*ReturnedValue = (CFVACTR);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 6: */
void TGTACTR(void)   /* initialise DECS adicops */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel","-dir",".","adicops.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/vak/Project/Algol/Algol-68RS-Source/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/vak/Project/Algol/Algol-68RS-Source/a68config/a68config.m","./values.m","./uniquenameserver.m","./modes.m","./incmode.m","./idtable.m","./incoperfn.m","./evalbase.m","./environment.m","./environ.m","./coutput.m","./centities.m","./biops.m","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_VC  LITACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_210  OZTACTR;  /* collateral clause result */
A68_193  PZTACTR;  /* procedure value */
A68_193  QZTACTR;  /* procedure value */
A68_193  RZTACTR;  /* procedure value */
A68_193  SZTACTR;  /* procedure value */
A68_193  TZTACTR;  /* procedure value */
A68_193  UZTACTR;  /* procedure value */
A68_193  VZTACTR;  /* procedure value */
A68_193  WZTACTR;  /* procedure value */
A68_193  XZTACTR;  /* procedure value */
A68_193  YZTACTR;  /* procedure value */
A68_193  ZZTACTR;  /* procedure value */
A68_193  AAUACTR;  /* procedure value */
A68_193  BAUACTR;  /* procedure value */
A68_193  CAUACTR;  /* procedure value */
A68_193  DAUACTR;  /* procedure value */
A68_193  EAUACTR;  /* procedure value */
A68_193  FAUACTR;  /* procedure value */
A68_193  GAUACTR;  /* procedure value */
A68_209  HAUACTR;  /* OPERATORS - istruct to row */
A68_209  IAUACTR;  /* OPERATORS - trim index */
A68_209  JAUACTR;  /* OPERATORS - trim index */
A68_225  YCVACTR;  /* collateral clause result */
A68_193  ZCVACTR;  /* procedure value */
A68_193  ADVACTR;  /* procedure value */
A68_193  BDVACTR;  /* procedure value */
A68_193  CDVACTR;  /* procedure value */
A68_193  DDVACTR;  /* procedure value */
A68_193  EDVACTR;  /* procedure value */
A68_193  FDVACTR;  /* procedure value */
A68_193  GDVACTR;  /* procedure value */
A68_193  HDVACTR;  /* procedure value */
A68_193  IDVACTR;  /* procedure value */
A68_193  JDVACTR;  /* procedure value */
A68_193  KDVACTR;  /* procedure value */
A68_193  LDVACTR;  /* procedure value */
A68_193  MDVACTR;  /* procedure value */
A68_193  NDVACTR;  /* procedure value */
A68_193  ODVACTR;  /* procedure value */
A68_193  PDVACTR;  /* procedure value */
A68_193  QDVACTR;  /* procedure value */
A68_193  RDVACTR;  /* procedure value */
A68_193  SDVACTR;  /* procedure value */
A68_193  TDVACTR;  /* procedure value */
A68_193  UDVACTR;  /* procedure value */
A68_193  VDVACTR;  /* procedure value */
A68_193  WDVACTR;  /* procedure value */
A68_193  XDVACTR;  /* procedure value */
A68_193  YDVACTR;  /* procedure value */
A68_193  ZDVACTR;  /* procedure value */
A68_193  AEVACTR;  /* procedure value */
A68_193  BEVACTR;  /* procedure value */
A68_193  CEVACTR;  /* procedure value */
A68_193  DEVACTR;  /* procedure value */
A68_193  EEVACTR;  /* procedure value */
A68_193  MEVACTR;  /* procedure value */
A68_209  NEVACTR;  /* OPERATORS - istruct to row */
A68_209  OEVACTR;  /* OPERATORS - trim index */
A68_209  PEVACTR;  /* OPERATORS - trim index */
A68_209  REVACTR;  /* OPERATORS - vacuum */
A68_209  SEVACTR;  /* OPERATORS - trim index */
A68_209  TEVACTR;  /* OPERATORS - trim index */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
AUPACTR();   /* USE values */
RHMACTR();   /* USE uniquenameserver */
DNMACTR();   /* USE modes */
ZDAACTR();   /* USE incmode */
PPKACTR();   /* USE idtable */
XFAACTR();   /* USE incoperfn */
IXQACTR();   /* USE evalbase */
HPIACTR();   /* USE environment */
BPLACTR();   /* USE environ */
PTLACTR();   /* USE coutput */
THAACTR();   /* USE centities */
BBTACTR();   /* USE biops */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/adicops.a68";
A_config.translation_time = "Thu Nov  5 20:46:57 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "SGTACTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 20:46:57 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS adicops);
UEAALIB_a68config(LGAALIB_configinfo, XGTACTR);
 /* line 48: */
AHTACTR_modulename = ZGTACTR;
 /* line 50: */
 /* line 51: */
DHTACTR_qvfault = CHTACTR;
 /* line 52: */
GHTACTR_qcompl = FHTACTR;
 /* line 53: */
JHTACTR_qmupb = A_VC_PLUS(AHTACTR_modulename,IHTACTR);
 /* line 54: */
MHTACTR_qmlwb = A_VC_PLUS(AHTACTR_modulename,LHTACTR);
 /* line 55: */
PHTACTR_qabs = A_VC_PLUS(AHTACTR_modulename,OHTACTR);
 /* line 56: */
SHTACTR_qround = A_VC_PLUS(AHTACTR_modulename,RHTACTR);
 /* line 57: */
VHTACTR_qentier = A_VC_PLUS(AHTACTR_modulename,UHTACTR);
 /* line 58: */
YHTACTR_qsign = A_VC_PLUS(AHTACTR_modulename,XHTACTR);
 /* line 59: */
BITACTR_qre = A_VC_PLUS(AHTACTR_modulename,AITACTR);
 /* line 60: */
EITACTR_qim = A_VC_PLUS(AHTACTR_modulename,DITACTR);
 /* line 61: */
HITACTR_qarg = A_VC_PLUS(AHTACTR_modulename,GITACTR);
 /* line 62: */
KITACTR_qconj = A_VC_PLUS(AHTACTR_modulename,JITACTR);
 /* line 63: */
MITACTR_qi = A_VC_PLUS(AHTACTR_modulename,A_HVEC(LITACTR,'I',A68_CHAR ));
 /* line 64: */
PITACTR_qplus = A_VC_PLUS(AHTACTR_modulename,OITACTR);
 /* line 65: */
SITACTR_qminus = A_VC_PLUS(AHTACTR_modulename,RITACTR);
 /* line 66: */
VITACTR_qtimes = A_VC_PLUS(AHTACTR_modulename,UITACTR);
 /* line 67: */
YITACTR_qdiv = A_VC_PLUS(AHTACTR_modulename,XITACTR);
 /* line 68: */
BJTACTR_qover = A_VC_PLUS(AHTACTR_modulename,AJTACTR);
 /* line 69: */
EJTACTR_qmod = A_VC_PLUS(AHTACTR_modulename,DJTACTR);
 /* line 70: */
HJTACTR_qpower = A_VC_PLUS(AHTACTR_modulename,GJTACTR);
 /* line 71: */
KJTACTR_qelem = A_VC_PLUS(AHTACTR_modulename,JJTACTR);
 /* line 72: */
NJTACTR_qplusab = A_VC_PLUS(AHTACTR_modulename,MJTACTR);
 /* line 73: */
QJTACTR_qplusto = A_VC_PLUS(AHTACTR_modulename,PJTACTR);
 /* line 74: */
TJTACTR_qminusab = A_VC_PLUS(AHTACTR_modulename,SJTACTR);
 /* line 75: */
WJTACTR_qtimesab = A_VC_PLUS(AHTACTR_modulename,VJTACTR);
 /* line 76: */
ZJTACTR_qoverab = A_VC_PLUS(AHTACTR_modulename,YJTACTR);
 /* line 77: */
CKTACTR_qmodab = A_VC_PLUS(AHTACTR_modulename,BKTACTR);
 /* line 78: */
FKTACTR_qdivab = A_VC_PLUS(AHTACTR_modulename,EKTACTR);
 /* line 79: */
IKTACTR_qis = A_VC_PLUS(AHTACTR_modulename,HKTACTR);
 /* line 80: */
LKTACTR_qisnt = A_VC_PLUS(AHTACTR_modulename,KKTACTR);
 /* line 81: */
OKTACTR_qisisnt = A_VC_PLUS(AHTACTR_modulename,NKTACTR);
 /* line 82: */
RKTACTR_qcomplex = QKTACTR;
 /* line 84: */
 /* line 90: */
 /* line 99: */
 /* line 104: */
 /* line 121: */
 /* line 138: */
 /* line 155: */
 /* line 172: */
 /* line 194: */
 /* line 213: */
 /* line 230: */
 /* line 242: */
 /* line 254: */
 /* line 270: */
 /* line 287: */
 /* line 316: */
 /* line 348: */
 /* line 358: */
 /* line 362: */
 /* line 366: */
 /* line 378: */
 /* line 390: */
 /* line 392: */
 /* line 393: */
PZTACTR.fn.fn_global = TLTACTR_monadicplus;
PZTACTR.nonlocals = A68_NIL;
OZTACTR.data[0] = PZTACTR;
 /* line 394: */
QZTACTR.fn.fn_global = ZLTACTR_monadicminus;
QZTACTR.nonlocals = A68_NIL;
OZTACTR.data[1] = QZTACTR;
 /* line 395: */
RZTACTR.fn.fn_global = VMTACTR_monadicupb;
RZTACTR.nonlocals = A68_NIL;
OZTACTR.data[2] = RZTACTR;
 /* line 396: */
SZTACTR.fn.fn_global = NNTACTR_monadiclwb;
SZTACTR.nonlocals = A68_NIL;
OZTACTR.data[3] = SZTACTR;
 /* line 397: */
TZTACTR.fn.fn_global = EOTACTR_not;
TZTACTR.nonlocals = A68_NIL;
OZTACTR.data[4] = TZTACTR;
 /* line 398: */
UZTACTR.fn.fn_global = WOTACTR_abs;
UZTACTR.nonlocals = A68_NIL;
OZTACTR.data[5] = UZTACTR;
 /* line 399: */
VZTACTR.fn.fn_global = AQTACTR_bin;
VZTACTR.nonlocals = A68_NIL;
OZTACTR.data[6] = VZTACTR;
 /* line 400: */
WZTACTR.fn.fn_global = PQTACTR_repr;
WZTACTR.nonlocals = A68_NIL;
OZTACTR.data[7] = WZTACTR;
 /* line 401: */
XZTACTR.fn.fn_global = ERTACTR_lengthen;
XZTACTR.nonlocals = A68_NIL;
OZTACTR.data[8] = XZTACTR;
 /* line 402: */
YZTACTR.fn.fn_global = URTACTR_shorten;
YZTACTR.nonlocals = A68_NIL;
OZTACTR.data[9] = YZTACTR;
 /* line 403: */
ZZTACTR.fn.fn_global = KSTACTR_odd;
ZZTACTR.nonlocals = A68_NIL;
OZTACTR.data[10] = ZZTACTR;
 /* line 404: */
AAUACTR.fn.fn_global = ZSTACTR_sign;
AAUACTR.nonlocals = A68_NIL;
OZTACTR.data[11] = AAUACTR;
 /* line 405: */
BAUACTR.fn.fn_global = NTTACTR_round;
BAUACTR.nonlocals = A68_NIL;
OZTACTR.data[12] = BAUACTR;
 /* line 406: */
CAUACTR.fn.fn_global = HVTACTR_entier;
CAUACTR.nonlocals = A68_NIL;
OZTACTR.data[13] = CAUACTR;
 /* line 407: */
DAUACTR.fn.fn_global = TXTACTR_re;
DAUACTR.nonlocals = A68_NIL;
OZTACTR.data[14] = DAUACTR;
 /* line 408: */
EAUACTR.fn.fn_global = BYTACTR_im;
EAUACTR.nonlocals = A68_NIL;
OZTACTR.data[15] = EAUACTR;
 /* line 410: */
FAUACTR.fn.fn_global = JYTACTR_arg;
FAUACTR.nonlocals = A68_NIL;
OZTACTR.data[16] = FAUACTR;
GAUACTR.fn.fn_global = XYTACTR_conj;
GAUACTR.nonlocals = A68_NIL;
OZTACTR.data[17] = GAUACTR;
IAUACTR = A_HIS1ARR(HAUACTR,OZTACTR,A68_193 ,18) ;
KAUACTR_monadicsemantics = A_R1TRIM(JAUACTR,(IAUACTR),A_RTSCRIPT(&(JAUACTR.dim[0]),&((IAUACTR).dim[0]),(IAUACTR).dim[0].lwb,(IAUACTR).dim[0].upb,0));
 /* line 412: */
 /* line 425: */
 /* line 439: */
 /* line 459: */
 /* line 473: */
 /* line 485: */
 /* line 494: */
 /* line 508: */
 /* line 521: */
 /* line 551: */
 /* line 582: */
 /* line 620: */
 /* line 649: */
 /* line 671: */
 /* line 683: */
 /* line 697: */
 /* line 720: */
 /* line 723: */
 /* line 739: */
 /* line 758: */
 /* line 781: */
 /* line 801: */
 /* line 805: */
 /* line 825: */
 /* line 844: */
 /* line 867: */
 /* line 884: */
 /* line 903: */
 /* line 917: */
 /* line 932: */
 /* line 951: */
 /* line 985: */
 /* line 987: */
 /* line 988: */
ZCVACTR.fn.fn_global = QCUACTR_dyadicplus;
ZCVACTR.nonlocals = A68_NIL;
YCVACTR.data[0] = ZCVACTR;
 /* line 989: */
ADVACTR.fn.fn_global = TDUACTR_dyadicminus;
ADVACTR.nonlocals = A68_NIL;
YCVACTR.data[1] = ADVACTR;
 /* line 990: */
BDVACTR.fn.fn_global = JEUACTR_dyadicupb;
BDVACTR.nonlocals = A68_NIL;
YCVACTR.data[2] = BDVACTR;
 /* line 991: */
CDVACTR.fn.fn_global = ZEUACTR_dyadiclwb;
CDVACTR.nonlocals = A68_NIL;
YCVACTR.data[3] = CDVACTR;
 /* line 992: */
DDVACTR.fn.fn_global = PFUACTR_and;
DDVACTR.nonlocals = A68_NIL;
YCVACTR.data[4] = DDVACTR;
 /* line 993: */
EDVACTR.fn.fn_global = IGUACTR_or;
EDVACTR.nonlocals = A68_NIL;
YCVACTR.data[5] = EDVACTR;
 /* line 994: */
FDVACTR.fn.fn_global = BHUACTR_lessnotless;
FDVACTR.nonlocals = A68_NIL;
YCVACTR.data[6] = FDVACTR;
 /* line 995: */
GDVACTR.fn.fn_global = BHUACTR_lessnotless;
GDVACTR.nonlocals = A68_NIL;
YCVACTR.data[7] = GDVACTR;
 /* line 996: */
HDVACTR.fn.fn_global = NIUACTR_lesseqgreatereq;
HDVACTR.nonlocals = A68_NIL;
YCVACTR.data[8] = HDVACTR;
 /* line 997: */
IDVACTR.fn.fn_global = NIUACTR_lesseqgreatereq;
IDVACTR.nonlocals = A68_NIL;
YCVACTR.data[9] = IDVACTR;
 /* line 998: */
JDVACTR.fn.fn_global = EKUACTR_eqnoteq;
JDVACTR.nonlocals = A68_NIL;
YCVACTR.data[10] = JDVACTR;
 /* line 999: */
KDVACTR.fn.fn_global = EKUACTR_eqnoteq;
KDVACTR.nonlocals = A68_NIL;
YCVACTR.data[11] = KDVACTR;
 /* line 1000: */
LDVACTR.fn.fn_global = YLUACTR_times;
LDVACTR.nonlocals = A68_NIL;
YCVACTR.data[12] = LDVACTR;
 /* line 1001: */
MDVACTR.fn.fn_global = KNUACTR_divide;
MDVACTR.nonlocals = A68_NIL;
YCVACTR.data[13] = MDVACTR;
 /* line 1002: */
NDVACTR.fn.fn_global = IOUACTR_over;
NDVACTR.nonlocals = A68_NIL;
YCVACTR.data[14] = NDVACTR;
 /* line 1003: */
ODVACTR.fn.fn_global = UOUACTR_mod;
ODVACTR.nonlocals = A68_NIL;
YCVACTR.data[15] = ODVACTR;
 /* line 1004: */
PDVACTR.fn.fn_global = SPUACTR_power;
PDVACTR.nonlocals = A68_NIL;
YCVACTR.data[16] = PDVACTR;
 /* line 1005: */
QDVACTR.fn.fn_global = URUACTR_imaginary;
QDVACTR.nonlocals = A68_NIL;
YCVACTR.data[17] = QDVACTR;
 /* line 1006: */
RDVACTR.fn.fn_global = ZSUACTR_shiftleftright;
RDVACTR.nonlocals = A68_NIL;
YCVACTR.data[18] = RDVACTR;
 /* line 1007: */
SDVACTR.fn.fn_global = ZSUACTR_shiftleftright;
SDVACTR.nonlocals = A68_NIL;
YCVACTR.data[19] = SDVACTR;
 /* line 1008: */
TDVACTR.fn.fn_global = WTUACTR_elem;
TDVACTR.nonlocals = A68_NIL;
YCVACTR.data[20] = TDVACTR;
 /* line 1009: */
UDVACTR.fn.fn_global = YVUACTR_plusab;
UDVACTR.nonlocals = A68_NIL;
YCVACTR.data[21] = UDVACTR;
 /* line 1010: */
VDVACTR.fn.fn_global = XXUACTR_minusab;
VDVACTR.nonlocals = A68_NIL;
YCVACTR.data[22] = VDVACTR;
 /* line 1011: */
WDVACTR.fn.fn_global = RYUACTR_timesab;
WDVACTR.nonlocals = A68_NIL;
YCVACTR.data[23] = WDVACTR;
 /* line 1012: */
XDVACTR.fn.fn_global = UZUACTR_overab;
XDVACTR.nonlocals = A68_NIL;
YCVACTR.data[24] = XDVACTR;
 /* line 1013: */
YDVACTR.fn.fn_global = JAVACTR_modab;
YDVACTR.nonlocals = A68_NIL;
YCVACTR.data[25] = YDVACTR;
 /* line 1014: */
ZDVACTR.fn.fn_global = WAVACTR_divab;
ZDVACTR.nonlocals = A68_NIL;
YCVACTR.data[26] = ZDVACTR;
 /* line 1015: */
AEVACTR.fn.fn_global = PBVACTR_isisnt;
AEVACTR.nonlocals = A68_NIL;
YCVACTR.data[27] = AEVACTR;
 /* line 1016: */
BEVACTR.fn.fn_global = PBVACTR_isisnt;
BEVACTR.nonlocals = A68_NIL;
YCVACTR.data[28] = BEVACTR;
 /* line 1017: */
CEVACTR.fn.fn_global = PFUACTR_and;
CEVACTR.nonlocals = A68_NIL;
YCVACTR.data[29] = CEVACTR;
 /* line 1018: */
DEVACTR.fn.fn_global = IGUACTR_or;
DEVACTR.nonlocals = A68_NIL;
YCVACTR.data[30] = DEVACTR;
 /* line 1019: */
EEVACTR.fn.fn_global = BXUACTR_plusto;
EEVACTR.nonlocals = A68_NIL;
YCVACTR.data[31] = EEVACTR;
MEVACTR.fn.fn_global = IEVACTR_anonymous;
MEVACTR.nonlocals = A68_NIL;
YCVACTR.data[32] = MEVACTR;
OEVACTR = A_HIS1ARR(NEVACTR,YCVACTR,A68_193 ,33) ;
QEVACTR_dyadicsemantics = A_R1TRIM(PEVACTR,(OEVACTR),A_RTSCRIPT(&(PEVACTR.dim[0]),&((OEVACTR).dim[0]),(OEVACTR).dim[0].lwb,(OEVACTR).dim[0].upb,0));
 /* line 1023: */
 /* line 1027: */
SEVACTR = A_R1VAC(REVACTR) ;
UEVACTR_dyadicbiopsemantics = A_R1TRIM(TEVACTR,(SEVACTR),A_RTSCRIPT(&(TEVACTR.dim[0]),&((SEVACTR).dim[0]),(SEVACTR).dim[0].lwb,(SEVACTR).dim[0].upb,0));
 /* line 1029: */
 /* line 1045: */
A_PROC_EXIT(DECS adicops);
} 
#undef NL
/* end of translation of adicops.a68 */
