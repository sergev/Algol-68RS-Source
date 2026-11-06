/* UNAME:AITACTR */
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
extern A68_VOID  DAQACTR_getcfragment(struct A68t55 *,A68_VC *);
extern A68_BITS  PKJACTR_defaultinfo;
#define RKJACTR_atomic 0X2U
#define SKJACTR_effects 0X4U
#define TKJACTR_nonloc 0X8U
#define UKJACTR_voided 0X10U
#define VKJACTR_lvalue 0X20U
#define XKJACTR_fxwarn 0X80U
extern A68_BOOL  IWPACTR_hasattribute(struct A68t55 *,A68_BITS );
extern A68_55  DLJACTR_skipvalue;
extern A68_VOID  JEQACTR_bracketcfragment(struct A68t55 *,A68_VC *);
extern A68_VOID  APQACTR_usemacro(A68_VC ,struct A68t172 ,A68_VC *);
extern A68_VOID  FPQACTR_emitline(struct A68t172 );
extern A68_55 * GQQACTR_yield(struct A68t55 *);
extern A68_55 * RQQACTR_yield(A68_VC ,struct A68t55 *);
/* --- End of imports from values --- */


/* --- Imports from uniquenameserver --- */
extern A68_64  QIMACTR_newuniquename(void);
/* --- End of imports from uniquenameserver --- */


/* --- Imports from modes --- */
extern A68_VOID  QMOACTR_declarectemporary(A68_INT ,A68_VC ,A68_59 *);
extern A68_BOOL  ARMACTR_isarray(A68_INT );
extern A68_BOOL  VQMACTR_isrow(A68_INT );
extern A68_127  TMOACTR_new;
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
extern A68_VOID  MYQACTR_eval1(struct A68t55 *,struct A68t55 **);
extern A68_VOID  VYQACTR_eval_pass_left(struct A68t55 *,struct A68t55 **,A68_BITS );
extern A68_VOID  EZQACTR_eval_pass_right(struct A68t55 *,struct A68t55 **,A68_BITS );
extern A68_VOID  NZQACTR_eval2(struct A68t55 *,struct A68t55 **,struct A68t55 **);
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
extern A68_VOID  THTACTR_monadicbiopsemantics(struct A68t55 *,A68_INT ,A68_55 *);
extern A68_VOID  SCTACTR_biop99(struct A68t55 *,A68_55 *);
/* --- End of imports from biops --- */


/* --- Imports from usefulops --- */
extern A68_BITS * PKAAOSF_orab(A68_BITS *,A68_BITS );
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void OUPACTR(void);   /* values */
extern void RHMACTR(void);   /* uniquenameserver */
extern void DNMACTR(void);   /* modes */
extern void ZDAACTR(void);   /* incmode */
extern void PPKACTR(void);   /* idtable */
extern void XFAACTR(void);   /* incoperfn */
extern void EYQACTR(void);   /* evalbase */
extern void HPIACTR(void);   /* environment */
extern void BPLACTR(void);   /* environ */
extern void PTLACTR(void);   /* coutput */
extern void THAACTR(void);   /* centities */
extern void JCTACTR(void);   /* biops */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_181   EITACTR = {"$Id: adicops.a68,v 1.2 2002-02-04 09:26:51 sian Exp $"}; 
A_GISVEC(A68_VC ,FITACTR,EITACTR,53)
static A68_182   GITACTR = {"ADICOPS - "}; 
A_GISVEC(A68_VC ,HITACTR,GITACTR,10)
static A68_VC  IITACTR_modulename A_UNUSED;
static A68_183   JITACTR = {":illegal version number"}; 
A_GISVEC(A68_VC ,KITACTR,JITACTR,23)
static A68_VC  LITACTR_qvfault A_UNUSED;
static A68_184   MITACTR = {":mode COMPL is not supported"}; 
A_GISVEC(A68_VC ,NITACTR,MITACTR,28)
static A68_VC  OITACTR_qcompl A_UNUSED;
static A68_185   PITACTR = {"monadic UPB"}; 
A_GISVEC(A68_VC ,QITACTR,PITACTR,11)
static A68_VC  RITACTR_qmupb A_UNUSED;
static A68_185   SITACTR = {"monadic LWB"}; 
A_GISVEC(A68_VC ,TITACTR,SITACTR,11)
static A68_VC  UITACTR_qmlwb A_UNUSED;
static A68_186   VITACTR = {"ABS"}; 
A_GISVEC(A68_VC ,WITACTR,VITACTR,3)
static A68_VC  XITACTR_qabs A_UNUSED;
static A68_187   YITACTR = {"ROUND"}; 
A_GISVEC(A68_VC ,ZITACTR,YITACTR,5)
static A68_VC  AJTACTR_qround A_UNUSED;
static A68_188   BJTACTR = {"ENTIER"}; 
A_GISVEC(A68_VC ,CJTACTR,BJTACTR,6)
static A68_VC  DJTACTR_qentier A_UNUSED;
static A68_40   EJTACTR = {"SIGN"}; 
A_GISVEC(A68_VC ,FJTACTR,EJTACTR,4)
static A68_VC  GJTACTR_qsign A_UNUSED;
static A68_189   HJTACTR = {"RE"}; 
A_GISVEC(A68_VC ,IJTACTR,HJTACTR,2)
static A68_VC  JJTACTR_qre A_UNUSED;
static A68_189   KJTACTR = {"IM"}; 
A_GISVEC(A68_VC ,LJTACTR,KJTACTR,2)
static A68_VC  MJTACTR_qim A_UNUSED;
static A68_186   NJTACTR = {"ARG"}; 
A_GISVEC(A68_VC ,OJTACTR,NJTACTR,3)
static A68_VC  PJTACTR_qarg A_UNUSED;
static A68_40   QJTACTR = {"CONJ"}; 
A_GISVEC(A68_VC ,RJTACTR,QJTACTR,4)
static A68_VC  SJTACTR_qconj A_UNUSED;
static A68_VC  UJTACTR_qi A_UNUSED;
static A68_40   VJTACTR = {"PLUS"}; 
A_GISVEC(A68_VC ,WJTACTR,VJTACTR,4)
static A68_VC  XJTACTR_qplus A_UNUSED;
static A68_187   YJTACTR = {"MINUS"}; 
A_GISVEC(A68_VC ,ZJTACTR,YJTACTR,5)
static A68_VC  AKTACTR_qminus A_UNUSED;
static A68_187   BKTACTR = {"TIMES"}; 
A_GISVEC(A68_VC ,CKTACTR,BKTACTR,5)
static A68_VC  DKTACTR_qtimes A_UNUSED;
static A68_186   EKTACTR = {"DIV"}; 
A_GISVEC(A68_VC ,FKTACTR,EKTACTR,3)
static A68_VC  GKTACTR_qdiv A_UNUSED;
static A68_40   HKTACTR = {"OVER"}; 
A_GISVEC(A68_VC ,IKTACTR,HKTACTR,4)
static A68_VC  JKTACTR_qover A_UNUSED;
static A68_186   KKTACTR = {"MOD"}; 
A_GISVEC(A68_VC ,LKTACTR,KKTACTR,3)
static A68_VC  MKTACTR_qmod A_UNUSED;
static A68_189   NKTACTR = {"**"}; 
A_GISVEC(A68_VC ,OKTACTR,NKTACTR,2)
static A68_VC  PKTACTR_qpower A_UNUSED;
static A68_40   QKTACTR = {"ELEM"}; 
A_GISVEC(A68_VC ,RKTACTR,QKTACTR,4)
static A68_VC  SKTACTR_qelem A_UNUSED;
static A68_188   TKTACTR = {"PLUSAB"}; 
A_GISVEC(A68_VC ,UKTACTR,TKTACTR,6)
static A68_VC  VKTACTR_qplusab A_UNUSED;
static A68_188   WKTACTR = {"PLUSTO"}; 
A_GISVEC(A68_VC ,XKTACTR,WKTACTR,6)
static A68_VC  YKTACTR_qplusto A_UNUSED;
static A68_64   ZKTACTR = {"MINUSAB"}; 
A_GISVEC(A68_VC ,ALTACTR,ZKTACTR,7)
static A68_VC  BLTACTR_qminusab A_UNUSED;
static A68_64   CLTACTR = {"TIMESAB"}; 
A_GISVEC(A68_VC ,DLTACTR,CLTACTR,7)
static A68_VC  ELTACTR_qtimesab A_UNUSED;
static A68_188   FLTACTR = {"OVERAB"}; 
A_GISVEC(A68_VC ,GLTACTR,FLTACTR,6)
static A68_VC  HLTACTR_qoverab A_UNUSED;
static A68_187   ILTACTR = {"MODAB"}; 
A_GISVEC(A68_VC ,JLTACTR,ILTACTR,5)
static A68_VC  KLTACTR_qmodab A_UNUSED;
static A68_187   LLTACTR = {"DIVAB"}; 
A_GISVEC(A68_VC ,MLTACTR,LLTACTR,5)
static A68_VC  NLTACTR_qdivab A_UNUSED;
static A68_189   OLTACTR = {"IS"}; 
A_GISVEC(A68_VC ,PLTACTR,OLTACTR,2)
static A68_VC  QLTACTR_qis A_UNUSED;
static A68_40   RLTACTR = {"ISNT"}; 
A_GISVEC(A68_VC ,SLTACTR,RLTACTR,4)
static A68_VC  TLTACTR_qisnt A_UNUSED;
static A68_64   ULTACTR = {"IS/ISNT"}; 
A_GISVEC(A68_VC ,VLTACTR,ULTACTR,7)
static A68_VC  WLTACTR_qisisnt A_UNUSED;
static A68_188   XLTACTR = {" COMPL"}; 
A_GISVEC(A68_VC ,YLTACTR,XLTACTR,6)
static A68_VC  ZLTACTR_qcomplex A_UNUSED;
static A68_194   MNTACTR = {"A_COMPL_MMINUS"}; 
A_GISVEC(A68_VC ,SNTACTR,MNTACTR,14)
static A68_40   GOTACTR = {".upb"}; 
A_GISVEC(A68_VC ,IOTACTR,GOTACTR,4)
static A68_185   LOTACTR = {".dim[0].upb"}; 
A_GISVEC(A68_VC ,NOTACTR,LOTACTR,11)
static A68_189   YOTACTR = {" 1"}; 
A_GISVEC(A68_VC ,ZOTACTR,YOTACTR,2)
static A68_185   CPTACTR = {".dim[0].lwb"}; 
A_GISVEC(A68_VC ,EPTACTR,CPTACTR,11)
static A68_189   PPTACTR = {"(!"}; 
A_GISVEC(A68_VC ,QPTACTR,PPTACTR,2)
static A68_195   ZPTACTR = {"ADICOPS - NOT"}; 
A_GISVEC(A68_VC ,AQTACTR,ZPTACTR,13)
static A68_196   LQTACTR = {"(A68_INT)(unsigned char)"}; 
A_GISVEC(A68_VC ,MQTACTR,LQTACTR,24)
static A68_187   QQTACTR = {"A_ABS"}; 
static A68_40   RQTACTR = {" INT"}; 
A_GISVEC(A68_VC ,SQTACTR,RQTACTR,4)
A_GISVEC(A68_VC ,TQTACTR,QQTACTR,5)
static A68_187   VQTACTR = {"A_ABS"}; 
static A68_187   WQTACTR = {" REAL"}; 
A_GISVEC(A68_VC ,XQTACTR,WQTACTR,5)
A_GISVEC(A68_VC ,YQTACTR,VQTACTR,5)
static A68_185   ARTACTR = {"A_COMPL_ABS"}; 
A_GISVEC(A68_VC ,BRTACTR,ARTACTR,11)
static A68_195   TRTACTR = {"ADICOPS - BIN"}; 
A_GISVEC(A68_VC ,URTACTR,TRTACTR,13)
static A68_197   CSTACTR = {"(A68_SSBITS)"}; 
A_GISVEC(A68_VC ,DSTACTR,CSTACTR,12)
static A68_198   HSTACTR = {"ADICOPS - REPR "}; 
A_GISVEC(A68_VC ,ISTACTR,HSTACTR,15)
static A68_199   RSTACTR = {"ADICOPS - LENG incorrect mode:"}; 
A_GISVEC(A68_VC ,TSTACTR,RSTACTR,30)
static A68_200   HTTACTR = {"ADICOPS - SHORT incorrect mode:"}; 
A_GISVEC(A68_VC ,JTTACTR,HTTACTR,31)
static A68_40   XTTACTR = {" & 1"}; 
A_GISVEC(A68_VC ,ZTTACTR,XTTACTR,4)
static A68_194   CUTACTR = {"ADICOPS - ODD "}; 
A_GISVEC(A68_VC ,DUTACTR,CUTACTR,14)
static A68_188   MUTACTR = {"A_SIGN"}; 
A_GISVEC(A68_VC ,NUTACTR,MUTACTR,6)
static A68_198   QUTACTR = {"ADICOPS - SIGN "}; 
A_GISVEC(A68_VC ,RUTACTR,QUTACTR,15)
static A68_198   AVTACTR = {"incorrect mode:"}; 
A_GISVEC(A68_VC ,BVTACTR,AVTACTR,15)
static A68_64   IVTACTR = {"double "}; 
A_GISVEC(A68_VC ,JVTACTR,IVTACTR,7)
static A68_189   PVTACTR = {"/*"}; 
static A68_189   QVTACTR = {"*/"}; 
A_GISVEC(A68_VC ,RVTACTR,PVTACTR,2)
A_GISVEC(A68_VC ,SVTACTR,QVTACTR,2)
static A68_201   VVTACTR = {""}; 
A_GISVEC(A68_VC ,WVTACTR,VVTACTR,0)
static A68_64   BWTACTR = {"A_ROUND"}; 
A_GISVEC(A68_VC ,JWTACTR,BWTACTR,7)
static A68_204   UWTACTR = {" incorrect mode:"}; 
A_GISVEC(A68_VC ,VWTACTR,UWTACTR,16)
static A68_64   FXTACTR = {"double "}; 
A_GISVEC(A68_VC ,GXTACTR,FXTACTR,7)
static A68_189   PXTACTR = {"/*"}; 
static A68_189   QXTACTR = {"*/"}; 
A_GISVEC(A68_VC ,RXTACTR,PXTACTR,2)
A_GISVEC(A68_VC ,SXTACTR,QXTACTR,2)
static A68_201   VXTACTR = {""}; 
A_GISVEC(A68_VC ,WXTACTR,VXTACTR,0)
static A68_206   BYTACTR = {"A_ENTIER"}; 
A_GISVEC(A68_VC ,KYTACTR,BYTACTR,8)
static A68_182   EZTACTR = {"A_COMPL_RE"}; 
A_GISVEC(A68_VC ,GZTACTR,EZTACTR,10)
static A68_182   MZTACTR = {"A_COMPL_IM"}; 
A_GISVEC(A68_VC ,OZTACTR,MZTACTR,10)
static A68_185   WZTACTR = {"A_COMPL_ARG"}; 
A_GISVEC(A68_VC ,AAUACTR,WZTACTR,11)
static A68_40   JAUACTR = {"CONJ"}; 
A_GISVEC(A68_VC ,KAUACTR,JAUACTR,4)
static A68_197   OAUACTR = {"A_COMPL_CONJ"}; 
A_GISVEC(A68_VC ,UAUACTR,OAUACTR,12)
static A68_209  UBUACTR_monadicsemantics A_UNUSED;
static A68_187   OCUACTR = {" L op"}; 
A_GISVEC(A68_VC ,PCUACTR,OCUACTR,5)
static A68_187   RCUACTR = {" R op"}; 
A_GISVEC(A68_VC ,SCUACTR,RCUACTR,5)
static A68_189   HDUACTR = {" 1"}; 
A_GISVEC(A68_VC ,IDUACTR,HDUACTR,2)
static A68_189   MDUACTR = {" 2"}; 
A_GISVEC(A68_VC ,NDUACTR,MDUACTR,2)
static A68_206   DEUACTR = {"A_C_PLUS"}; 
A_GISVEC(A68_VC ,FEUACTR,DEUACTR,8)
static A68_197   LEUACTR = {"A_COMPL_PLUS"}; 
A_GISVEC(A68_VC ,MEUACTR,LEUACTR,12)
static A68_213   PEUACTR = {"A_VC_PLUS"}; 
A_GISVEC(A68_VC ,QEUACTR,PEUACTR,9)
static A68_213   SEUACTR = {"A_RC_PLUS"}; 
A_GISVEC(A68_VC ,TEUACTR,SEUACTR,9)
static A68_195   HFUACTR = {"A_COMPL_MINUS"}; 
A_GISVEC(A68_VC ,IFUACTR,HFUACTR,13)
static A68_187   XFUACTR = {".dim["}; 
static A68_206   YFUACTR = {" -1].upb"}; 
A_GISVEC(A68_VC ,AGUACTR,XFUACTR,5)
A_GISVEC(A68_VC ,CGUACTR,YFUACTR,8)
static A68_187   NGUACTR = {".dim["}; 
static A68_206   OGUACTR = {" -1].lwb"}; 
A_GISVEC(A68_VC ,QGUACTR,NGUACTR,5)
A_GISVEC(A68_VC ,SGUACTR,OGUACTR,8)
static A68_194   LHUACTR = {"ADICOPS - AND "}; 
A_GISVEC(A68_VC ,MHUACTR,LHUACTR,14)
static A68_195   EIUACTR = {"ADICOPS - OR "}; 
A_GISVEC(A68_VC ,FIUACTR,EIUACTR,13)
static A68_214   PIUACTR = {"ADICOPS < or >: illegal op number"}; 
A_GISVEC(A68_VC ,QIUACTR,PIUACTR,33)
static A68_189   TIUACTR = {"LT"}; 
A_GISVEC(A68_VC ,VIUACTR,TIUACTR,2)
static A68_189   WIUACTR = {"GT"}; 
A_GISVEC(A68_VC ,XIUACTR,WIUACTR,2)
static A68_214   YIUACTR = {"ADICOPS < or >: illegal op number"}; 
A_GISVEC(A68_VC ,ZIUACTR,YIUACTR,33)
static A68_187   JJUACTR = {"A_VC_"}; 
A_GISVEC(A68_VC ,KJUACTR,JJUACTR,5)
static A68_187   MJUACTR = {"A_RC_"}; 
A_GISVEC(A68_VC ,NJUACTR,MJUACTR,5)
static A68_189   YJUACTR = {"<="}; 
A_GISVEC(A68_VC ,AKUACTR,YJUACTR,2)
static A68_189   BKUACTR = {">="}; 
A_GISVEC(A68_VC ,CKUACTR,BKUACTR,2)
static A68_215   DKUACTR = {"ADICOPS - <= or >= illegal op number"}; 
A_GISVEC(A68_VC ,EKUACTR,DKUACTR,36)
static A68_189   HKUACTR = {"LE"}; 
A_GISVEC(A68_VC ,JKUACTR,HKUACTR,2)
static A68_189   KKUACTR = {"GE"}; 
A_GISVEC(A68_VC ,LKUACTR,KKUACTR,2)
static A68_215   MKUACTR = {"ADICOPS - <= or >= illegal op number"}; 
A_GISVEC(A68_VC ,NKUACTR,MKUACTR,36)
static A68_187   VKUACTR = {"A_LB_"}; 
A_GISVEC(A68_VC ,WKUACTR,VKUACTR,5)
static A68_187   ALUACTR = {"A_VC_"}; 
A_GISVEC(A68_VC ,BLUACTR,ALUACTR,5)
static A68_187   DLUACTR = {"A_RC_"}; 
A_GISVEC(A68_VC ,ELUACTR,DLUACTR,5)
static A68_189   PLUACTR = {"=="}; 
A_GISVEC(A68_VC ,RLUACTR,PLUACTR,2)
static A68_189   SLUACTR = {"!="}; 
A_GISVEC(A68_VC ,TLUACTR,SLUACTR,2)
static A68_216   ULUACTR = {"ADICOPS - = or /= illegal op number"}; 
A_GISVEC(A68_VC ,VLUACTR,ULUACTR,35)
static A68_189   YLUACTR = {"EQ"}; 
A_GISVEC(A68_VC ,AMUACTR,YLUACTR,2)
static A68_189   BMUACTR = {"NE"}; 
A_GISVEC(A68_VC ,CMUACTR,BMUACTR,2)
static A68_216   DMUACTR = {"ADICOPS - = or /= illegal op number"}; 
A_GISVEC(A68_VC ,EMUACTR,DMUACTR,35)
static A68_182   MMUACTR = {"A_COMPL_EQ"}; 
A_GISVEC(A68_VC ,OMUACTR,MMUACTR,10)
static A68_185   PMUACTR = {"A_COMPL_NEQ"}; 
A_GISVEC(A68_VC ,QMUACTR,PMUACTR,11)
static A68_187   UMUACTR = {"A_VC_"}; 
A_GISVEC(A68_VC ,VMUACTR,UMUACTR,5)
static A68_187   XMUACTR = {"A_RC_"}; 
A_GISVEC(A68_VC ,YMUACTR,XMUACTR,5)
static A68_213   LNUACTR = {"A_C_TIMES"}; 
A_GISVEC(A68_VC ,NNUACTR,LNUACTR,9)
static A68_213   PNUACTR = {"A_C_TIMES"}; 
A_GISVEC(A68_VC ,QNUACTR,PNUACTR,9)
static A68_195   WNUACTR = {"A_COMPL_TIMES"}; 
A_GISVEC(A68_VC ,XNUACTR,WNUACTR,13)
static A68_182   AOUACTR = {"A_VC_TIMES"}; 
A_GISVEC(A68_VC ,BOUACTR,AOUACTR,10)
static A68_182   DOUACTR = {"A_VC_TIMES"}; 
A_GISVEC(A68_VC ,EOUACTR,DOUACTR,10)
static A68_182   GOUACTR = {"A_RC_TIMES"}; 
A_GISVEC(A68_VC ,HOUACTR,GOUACTR,10)
static A68_182   JOUACTR = {"A_RC_TIMES"}; 
A_GISVEC(A68_VC ,KOUACTR,JOUACTR,10)
static A68_194   GPUACTR = {"A_COMPL_DIVIDE"}; 
A_GISVEC(A68_VC ,HPUACTR,GPUACTR,14)
static A68_187   MQUACTR = {"A_MOD"}; 
A_GISVEC(A68_VC ,UQUACTR,MQUACTR,5)
static A68_198   GRUACTR = {" incorrect mode"}; 
A_GISVEC(A68_VC ,HRUACTR,GRUACTR,15)
static A68_182   KRUACTR = {"A_LI_POWER"}; 
A_GISVEC(A68_VC ,TRUACTR,KRUACTR,10)
static A68_182   WRUACTR = {"A_LR_POWER"}; 
A_GISVEC(A68_VC ,FSUACTR,WRUACTR,10)
static A68_195   JSUACTR = {"A_COMPL_POWER"}; 
A_GISVEC(A68_VC ,QSUACTR,JSUACTR,13)
static A68_213   LTUACTR = {"A_COMPL_I"}; 
A_GISVEC(A68_VC ,TTUACTR,LTUACTR,9)
static A68_213   WTUACTR = {"A_COMPL_I"}; 
A_GISVEC(A68_VC ,CUUACTR,WTUACTR,9)
static A68_186   KUUACTR = {"SHL"}; 
A_GISVEC(A68_VC ,MUUACTR,KUUACTR,3)
static A68_186   NUUACTR = {"SHR"}; 
A_GISVEC(A68_VC ,OUUACTR,NUUACTR,3)
static A68_219   PUUACTR = {"ADICOPS SHL or SHR: illegal op number"}; 
A_GISVEC(A68_VC ,QUUACTR,PUUACTR,37)
static A68_189   XUUACTR = {"A_"}; 
A_GISVEC(A68_VC ,YUUACTR,XUUACTR,2)
static A68_188   KVUACTR = {"A_ELEM"}; 
A_GISVEC(A68_VC ,VVUACTR,KVUACTR,6)
static A68_189   AXUACTR = {" ;"}; 
A_GISVEC(A68_VC ,BXUACTR,AXUACTR,2)
static A68_189   MXUACTR = {"+="}; 
A_GISVEC(A68_VC ,OXUACTR,MXUACTR,2)
static A68_189   QXUACTR = {"+="}; 
A_GISVEC(A68_VC ,RXUACTR,QXUACTR,2)
static A68_194   TXUACTR = {"A_COMPL_PLUSAB"}; 
A_GISVEC(A68_VC ,UXUACTR,TXUACTR,14)
static A68_185   YXUACTR = {"A_VC_PLUSAB"}; 
A_GISVEC(A68_VC ,ZXUACTR,YXUACTR,11)
static A68_185   BYUACTR = {"A_RC_PLUSAB"}; 
A_GISVEC(A68_VC ,CYUACTR,BYUACTR,11)
static A68_222   PYUACTR = {"v1: mode isnt vec[]char,flex vec[]char"}; 
A_GISVEC(A68_VC ,QYUACTR,PYUACTR,38)
static A68_185   RYUACTR = {"A_VC_TOPLUS"}; 
A_GISVEC(A68_VC ,TYUACTR,RYUACTR,11)
static A68_123   VYUACTR = {"v2: mode isnt []char,flex []char"}; 
A_GISVEC(A68_VC ,WYUACTR,VYUACTR,32)
static A68_185   XYUACTR = {"A_RC_TOPLUS"}; 
A_GISVEC(A68_VC ,YYUACTR,XYUACTR,11)
static A68_189   LZUACTR = {"-="}; 
A_GISVEC(A68_VC ,NZUACTR,LZUACTR,2)
static A68_198   PZUACTR = {"A_COMPL_MINUSAB"}; 
A_GISVEC(A68_VC ,QZUACTR,PZUACTR,15)
static A68_189   FAVACTR = {"*="}; 
A_GISVEC(A68_VC ,HAVACTR,FAVACTR,2)
static A68_189   JAVACTR = {"*="}; 
A_GISVEC(A68_VC ,KAVACTR,JAVACTR,2)
static A68_198   MAVACTR = {"A_COMPL_TIMESAB"}; 
A_GISVEC(A68_VC ,NAVACTR,MAVACTR,15)
static A68_197   RAVACTR = {"A_VC_TIMESAB"}; 
A_GISVEC(A68_VC ,SAVACTR,RAVACTR,12)
static A68_197   UAVACTR = {"A_RC_TIMESAB"}; 
A_GISVEC(A68_VC ,VAVACTR,UAVACTR,12)
static A68_189   IBVACTR = {"/="}; 
A_GISVEC(A68_VC ,KBVACTR,IBVACTR,2)
static A68_64   YBVACTR = {"A_MODAB"}; 
A_GISVEC(A68_VC ,ZBVACTR,YBVACTR,7)
static A68_189   LCVACTR = {"/="}; 
A_GISVEC(A68_VC ,MCVACTR,LCVACTR,2)
static A68_195   PCVACTR = {"A_COMPL_DIVAB"}; 
A_GISVEC(A68_VC ,QCVACTR,PCVACTR,13)
static A68_189   ADVACTR = {"=="}; 
A_GISVEC(A68_VC ,CDVACTR,ADVACTR,2)
static A68_189   DDVACTR = {"!="}; 
A_GISVEC(A68_VC ,EDVACTR,DDVACTR,2)
static A68_223   FDVACTR = {" illegal op number"}; 
A_GISVEC(A68_VC ,GDVACTR,FDVACTR,18)
static A68_189   NDVACTR = {"!="}; 
A_GISVEC(A68_VC ,ODVACTR,NDVACTR,2)
static A68_189   PDVACTR = {"! "}; 
A_GISVEC(A68_VC ,RDVACTR,PDVACTR,2)
static A68_201   SDVACTR = {""}; 
A_GISVEC(A68_VC ,TDVACTR,SDVACTR,0)
static A68_186   UDVACTR = {"A_R"}; 
A_GISVEC(A68_VC ,WDVACTR,UDVACTR,3)
static A68_186   XDVACTR = {"A_V"}; 
A_GISVEC(A68_VC ,YDVACTR,XDVACTR,3)
static A68_182   ZDVACTR = {"STRUCTCOMP"}; 
A_GISVEC(A68_VC ,BEVACTR,ZDVACTR,10)
static A68_224   TFVACTR = {"CYCLE not implemented"}; 
A_GISVEC(A68_VC ,UFVACTR,TFVACTR,21)
static A68_209  AGVACTR_dyadicsemantics A_UNUSED;
static A68_209  EGVACTR_dyadicbiopsemantics A_UNUSED;

A_STATIC A68_VOID  DMTACTR_simplemonop(A68_BOOL  Macro, A68_VC  Oper, A68_55 * Op, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  OMTACTR_simpledyop(A68_BOOL  Macro, A68_VC  Oper, A68_55 * Left, A68_55 * Right, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  BNTACTR_monadicplus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  HNTACTR_monadicminus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  DOTACTR_monadicupb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  VOTACTR_monadiclwb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  MPTACTR_not(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  GQTACTR_abs(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  KRTACTR_bin(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  ZRTACTR_repr(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  OSTACTR_lengthen(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  ETTACTR_shorten(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  UTTACTR_odd(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  JUTACTR_sign(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  XUTACTR_round(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  RWTACTR_entier(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  SYTACTR_simplemoncomp(A68_VC  Mac, A68_55 * Root, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  DZTACTR_re(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  LZTACTR_im(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  TZTACTR_arg(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  HAUACTR_conj(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A68_VOID  XBUACTR_monadicsem(A68_55 * Root, A68_62  Rator, A68_55  *ReturnedValue);

A_STATIC A68_VOID  NCUACTR_complexop(A68_125  Modes, A68_VC  Op, A68_VC  Name, A68_55 * Left, A68_55 * Right, A68_BOOL  Lval, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  AEUACTR_dyadicplus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  DFUACTR_dyadicminus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  TFUACTR_dyadicupb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  JGUACTR_dyadiclwb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  ZGUACTR_and(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  SHUACTR_or(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  LIUACTR_lessnotless(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  XJUACTR_lesseqgreatereq(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  OLUACTR_eqnoteq(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  INUACTR_times(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  UOUACTR_divide(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  SPUACTR_over(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  EQUACTR_mod(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  CRUACTR_power(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  XSUACTR_castvalue(A68_INT  Mode, A68_55 * Value, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  ETUACTR_imaginary(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  JUUACTR_shiftleftright(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  GVUACTR_elem(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_BITS  EWUACTR_abattribute(A68_BOOL  Noref, A68_55 * Op);

A_STATIC A68_VOID  LWUACTR_simpleabop(A68_BOOL  Noref, A68_BOOL  Macro, A68_VC  Oper, A68_55 * Left, A68_55 * Right, A68_56  *ReturnedValue);

A_STATIC A68_VOID  IXUACTR_plusab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  LYUACTR_plusto(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  HZUACTR_minusab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  BAVACTR_timesab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  EBVACTR_overab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  TBVACTR_modab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  GCVACTR_divab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  ZCVACTR_isisnt(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  SFVACTR_anonymous(A68_55 * V, A68_INT  I, A68_INT  J, A68_55  *ReturnedValue);

A68_VOID  HGVACTR_dyadicsem(A68_55 * Root, A68_62  Rator, A68_55  *ReturnedValue);

A_STATIC A68_VOID  DMTACTR_simplemonop(A68_BOOL  Macro, A68_VC  Oper, A68_55 * Op, A68_VC  *ReturnedValue)
{ 
A68_VC  EMTACTR;  /* clause result */
A68_169  FMTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_172  GMTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  HMTACTR;  /* avoid structure result */
A68_VC  IMTACTR;  /* avoid structure result */
A68_VC  JMTACTR;  /* avoid structure result */
A_PROC_ENTRY(simplemonop);
 /* line 86: */
 /* line 87: */
if (Macro)
{ 
 /* line 88: */
APQACTR_usemacro( Oper, A_HVEC(GMTACTR,A_UNITE(FMTACTR,mode1,1,Op),A68_169 ), &HMTACTR );
EMTACTR = HMTACTR;
} 
else
{ 
 /* line 89: */
JEQACTR_bracketcfragment( Op, &IMTACTR );
JIAACTR_bracket( A_VC_PLUS(Oper,IMTACTR), &JMTACTR );
EMTACTR = JMTACTR;
} 
A_PROC_EXIT(simplemonop);
*ReturnedValue = (EMTACTR);
return;
} 
#undef NL
 /* line 92: */

A_STATIC A68_VOID  OMTACTR_simpledyop(A68_BOOL  Macro, A68_VC  Oper, A68_55 * Left, A68_55 * Right, A68_VC  *ReturnedValue)
{ 
A68_192  PMTACTR;  /* collateral clause result */
A68_169  QMTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_169  RMTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  SMTACTR;  /* clause result */
A68_172  TMTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  UMTACTR;  /* avoid structure result */
A68_VC  VMTACTR;  /* avoid structure result */
A68_VC  WMTACTR;  /* avoid structure result */
A68_VC  XMTACTR;  /* avoid structure result */
A_PROC_ENTRY(simpledyop);
 /* line 93: */
 /* line 94: */
if (Macro)
{ 
PMTACTR.data[0] = A_UNITE(QMTACTR,mode1,1,Left);
PMTACTR.data[1] = A_UNITE(RMTACTR,mode1,1,Right);
 /* line 95: */
 /* line 96: */
APQACTR_usemacro( Oper, A_HISVEC(TMTACTR,PMTACTR,2,A68_169 ), &UMTACTR );
SMTACTR = UMTACTR;
} 
else
{ 
 /* line 97: */
 /* line 98: */
JEQACTR_bracketcfragment( Left, &VMTACTR );
JEQACTR_bracketcfragment( Right, &WMTACTR );
JIAACTR_bracket( A_VC_PLUS(A_VC_PLUS(VMTACTR,Oper),WMTACTR), &XMTACTR );
SMTACTR = XMTACTR;
} 
A_PROC_EXIT(simpledyop);
*ReturnedValue = (SMTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  BNTACTR_monadicplus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * CNTACTR_op A_UNUSED = {0};
A68_55  DNTACTR;  /* clause result */
A_PROC_ENTRY(monadicplus);
 /* line 101: */
 /* line 102: */
{ 
(void)(MYQACTR_eval1(Root, (&CNTACTR_op)));
 /* line 103: */
DNTACTR = (*A_NILCHECK(CNTACTR_op));
} 
A_PROC_EXIT(monadicplus);
*ReturnedValue = (DNTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HNTACTR_monadicminus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * INTACTR_op A_UNUSED = {0};
A68_55  JNTACTR;  /* collateral clause result */
A68_59  KNTACTR;  /* avoid structure result */
A68_59  LNTACTR_temp A_UNUSED = {0};
A68_192  NNTACTR;  /* collateral clause result */
A68_169  ONTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_169  PNTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55 * QNTACTR;  /* YIELD */
A68_172  RNTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  TNTACTR;  /* avoid structure result */
A68_56  UNTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  VNTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  WNTACTR;  /* avoid structure result */
A68_VC  XNTACTR;  /* avoid structure result */
A68_56  YNTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55  ZNTACTR;  /* clause result */
A_PROC_ENTRY(monadicminus);
 /* line 110: */
 /* line 111: */
{ 
(void)(MYQACTR_eval1(Root, (&INTACTR_op)));
 /* line 112: */
 /* line 113: */
JNTACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
 /* line 114: */
JNTACTR.Info = (A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(INTACTR_op)->Info))))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 115: */
if (Version==3)
{ 
A_CALLPROC(TMOACTR_new,((*A_NILCHECK((&(A_NILCHECK(Root)->Mode)))), A_VC_PLUS(AKTACTR_qminus,ZLTACTR_qcomplex), &KNTACTR),((*A_NILCHECK((&(A_NILCHECK(Root)->Mode)))), A_VC_PLUS(AKTACTR_qminus,ZLTACTR_qcomplex), &KNTACTR,(TMOACTR_new).nonlocals));
LNTACTR_temp = KNTACTR;
 /* line 116: */
NNTACTR.data[0] = A_UNITE(ONTACTR,mode3,3,LNTACTR_temp);
QNTACTR = RQQACTR_yield(A_VC_PLUS(AKTACTR_qminus,ZLTACTR_qcomplex), INTACTR_op) ;
NNTACTR.data[1] = A_UNITE(PNTACTR,mode1,1,QNTACTR);
 /* line 117: */
APQACTR_usemacro( SNTACTR, A_HISVEC(RNTACTR,NNTACTR,2,A68_169 ), &TNTACTR );
JNTACTR.Extra = A_UNITE(UNTACTR,mode6,6,TNTACTR);
} 
else
{ 
 /* line 118: */
 /* line 119: */
 /* line 120: */
JEQACTR_bracketcfragment( INTACTR_op, &WNTACTR );
JIAACTR_bracket( A_VC_PLUS(A_HVEC(VNTACTR,'-',A68_CHAR ),WNTACTR), &XNTACTR );
JNTACTR.Extra = A_UNITE(YNTACTR,mode6,6,XNTACTR);
} 
ZNTACTR = JNTACTR;
} 
A_PROC_EXIT(monadicminus);
*ReturnedValue = (ZNTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  DOTACTR_monadicupb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * EOTACTR_op A_UNUSED = {0};
A68_55  FOTACTR;  /* collateral clause result */
A68_VC  HOTACTR;  /* avoid structure result */
A68_56  JOTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  KOTACTR;  /* YIELD */
A68_VC  MOTACTR;  /* avoid structure result */
A68_56  OOTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  POTACTR;  /* YIELD */
A68_56  QOTACTR = {0};  /* OPERATORS - skip to mode */
A68_55  ROTACTR;  /* clause result */
A_PROC_ENTRY(monadicupb);
 /* line 126: */
 /* line 127: */
{ 
(void)(MYQACTR_eval1(Root, (&EOTACTR_op)));
 /* line 128: */
 /* line 129: */
FOTACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
 /* line 130: */
FOTACTR.Info = (A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(EOTACTR_op)->Info))))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 131: */
if ((Version==1)|(Version==3))
{ 
 /* line 132: */
JEQACTR_bracketcfragment( EOTACTR_op, &HOTACTR );
KOTACTR = A_VC_PLUS(HOTACTR,IOTACTR) ;
FOTACTR.Extra = A_UNITE(JOTACTR,mode6,6,KOTACTR);
} 
else
{ 
 /* line 133: */
if (Version==2)
{ 
 /* line 134: */
JEQACTR_bracketcfragment( EOTACTR_op, &MOTACTR );
POTACTR = A_VC_PLUS(MOTACTR,NOTACTR) ;
FOTACTR.Extra = A_UNITE(OOTACTR,mode6,6,POTACTR);
} 
else
{ 
(void)(WXIACTR_assert(A_VC_PLUS(RITACTR_qmupb,LITACTR_qvfault), A68_FALSE));
 /* line 135: */
 /* line 136: */
 /* line 137: */
FOTACTR.Extra = QOTACTR;
} 
} 
ROTACTR = FOTACTR;
} 
A_PROC_EXIT(monadicupb);
*ReturnedValue = (ROTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  VOTACTR_monadiclwb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * WOTACTR_op A_UNUSED = {0};
A68_55  XOTACTR;  /* collateral clause result */
A68_56  APTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  BPTACTR;  /* YIELD */
A68_VC  DPTACTR;  /* avoid structure result */
A68_56  FPTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  GPTACTR;  /* YIELD */
A68_56  HPTACTR = {0};  /* OPERATORS - skip to mode */
A68_55  IPTACTR;  /* clause result */
A_PROC_ENTRY(monadiclwb);
 /* line 143: */
 /* line 144: */
{ 
(void)(MYQACTR_eval1(Root, (&WOTACTR_op)));
 /* line 145: */
 /* line 146: */
XOTACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
 /* line 147: */
XOTACTR.Info = (A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(WOTACTR_op)->Info))))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 148: */
 /* line 149: */
if ((Version==1)|(Version==3))
{ 
BPTACTR = ZOTACTR ;
XOTACTR.Extra = A_UNITE(APTACTR,mode6,6,BPTACTR);
} 
else
{ 
 /* line 150: */
if (Version==2)
{ 
 /* line 151: */
JEQACTR_bracketcfragment( WOTACTR_op, &DPTACTR );
GPTACTR = A_VC_PLUS(DPTACTR,EPTACTR) ;
XOTACTR.Extra = A_UNITE(FPTACTR,mode6,6,GPTACTR);
} 
else
{ 
(void)(WXIACTR_assert(A_VC_PLUS(UITACTR_qmlwb,LITACTR_qvfault), A68_FALSE));
 /* line 152: */
 /* line 153: */
 /* line 154: */
XOTACTR.Extra = HPTACTR;
} 
} 
IPTACTR = XOTACTR;
} 
A_PROC_EXIT(monadiclwb);
*ReturnedValue = (IPTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  MPTACTR_not(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * NPTACTR_op A_UNUSED = {0};
A68_55  OPTACTR;  /* collateral clause result */
A68_VC  RPTACTR;  /* avoid structure result */
A68_VC  SPTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_56  TPTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  UPTACTR;  /* YIELD */
A68_VC  VPTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  WPTACTR;  /* avoid structure result */
A68_56  XPTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  YPTACTR;  /* YIELD */
A68_56  BQTACTR = {0};  /* OPERATORS - skip to mode */
A68_55  CQTACTR;  /* clause result */
A_PROC_ENTRY(not);
 /* line 161: */
 /* line 162: */
{ 
(void)(MYQACTR_eval1(Root, (&NPTACTR_op)));
 /* line 163: */
 /* line 164: */
OPTACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
 /* line 165: */
OPTACTR.Info = (A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(NPTACTR_op)->Info))))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 166: */
switch ( Version )
{ 
case 1: 
 /* line 167: */
JEQACTR_bracketcfragment( NPTACTR_op, &RPTACTR );
UPTACTR = A_VC_PLUS(A_VC_PLUS(QPTACTR,RPTACTR),A_HVEC(SPTACTR,')',A68_CHAR )) ;
OPTACTR.Extra = A_UNITE(TPTACTR,mode6,6,UPTACTR);
break;
case 2: 
 /* line 168: */
JEQACTR_bracketcfragment( NPTACTR_op, &WPTACTR );
YPTACTR = A_VC_PLUS(A_HVEC(VPTACTR,'~',A68_CHAR ),WPTACTR) ;
OPTACTR.Extra = A_UNITE(XPTACTR,mode6,6,YPTACTR);
break;
default: 
(void)(WXIACTR_assert(A_VC_PLUS(AQTACTR,LITACTR_qvfault), A68_FALSE));
 /* line 169: */
 /* line 170: */
 /* line 171: */
OPTACTR.Extra = BQTACTR;
break;
} 
CQTACTR = OPTACTR;
} 
A_PROC_EXIT(not);
*ReturnedValue = (CQTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  GQTACTR_abs(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * HQTACTR_op A_UNUSED = {0};
A68_VC  IQTACTR;  /* clause result */
A68_VC  JQTACTR;  /* avoid structure result */
A68_VC  KQTACTR;  /* avoid structure result */
A68_VC  NQTACTR;  /* avoid structure result */
A68_VC  OQTACTR;  /* avoid structure result */
A68_VC  PQTACTR;  /* avoid structure result */
A68_VC  UQTACTR;  /* avoid structure result */
A68_VC  ZQTACTR;  /* avoid structure result */
A68_VC  CRTACTR;  /* avoid structure result */
A68_VC  DRTACTR_body A_UNUSED = {0};
A68_55  ERTACTR;  /* collateral clause result */
A68_56  FRTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55  GRTACTR;  /* clause result */
A_PROC_ENTRY(abs);
 /* line 181: */
 /* line 182: */
{ 
(void)(MYQACTR_eval1(Root, (&HQTACTR_op)));
 /* line 183: */
 /* line 184: */
 /* line 185: */
switch ( Version )
{ 
case 1: 
 /* line 186: */
DAQACTR_getcfragment( HQTACTR_op, &JQTACTR );
JIAACTR_bracket( JQTACTR, &KQTACTR );
IQTACTR = KQTACTR;
break;
case 2: 
 /* line 187: */
JEQACTR_bracketcfragment( HQTACTR_op, &NQTACTR );
IQTACTR = A_VC_PLUS(MQTACTR,NQTACTR);
break;
case 3: 
 /* line 188: */
FLNACTR_cast( (*A_NILCHECK((&(A_NILCHECK(Root)->Mode)))), &OQTACTR );
JEQACTR_bracketcfragment( HQTACTR_op, &PQTACTR );
IQTACTR = A_VC_PLUS(OQTACTR,PQTACTR);
break;
case 4: 
 /* line 189: */
DMTACTR_simplemonop( A68_TRUE, TQTACTR, RQQACTR_yield(A_VC_PLUS(XITACTR_qabs,SQTACTR), HQTACTR_op), &UQTACTR );
IQTACTR = UQTACTR;
break;
case 5: 
 /* line 190: */
DMTACTR_simplemonop( A68_TRUE, YQTACTR, RQQACTR_yield(A_VC_PLUS(XITACTR_qabs,XQTACTR), HQTACTR_op), &ZQTACTR );
IQTACTR = ZQTACTR;
break;
case 6: 
 /* line 191: */
DMTACTR_simplemonop( A68_TRUE, BRTACTR, RQQACTR_yield(A_VC_PLUS(XITACTR_qabs,ZLTACTR_qcomplex), HQTACTR_op), &CRTACTR );
IQTACTR = CRTACTR;
break;
default: 
A_IMP_SKIP ;
break;
} 
DRTACTR_body = IQTACTR;
 /* line 192: */
ERTACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
ERTACTR.Info = (A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(HQTACTR_op)->Info))))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 193: */
ERTACTR.Extra = A_UNITE(FRTACTR,mode6,6,DRTACTR_body);
GRTACTR = ERTACTR;
} 
A_PROC_EXIT(abs);
*ReturnedValue = (GRTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  KRTACTR_bin(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55  LRTACTR;  /* clause result */
A68_55  MRTACTR;  /* avoid structure result */
A68_55 * NRTACTR_op A_UNUSED = {0};
A68_55  ORTACTR;  /* collateral clause result */
A68_VC  PRTACTR;  /* avoid structure result */
A68_VC  QRTACTR;  /* avoid structure result */
A68_56  RRTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  SRTACTR;  /* YIELD */
A68_56  VRTACTR = {0};  /* OPERATORS - skip to mode */
A_PROC_ENTRY(bin);
 /* line 199: */
 /* line 200: */
 /* line 201: */
 /* line 202: */
if (Version==3)
{ 
 /* line 203: */
 /* line 204: */
SCTACTR_biop99( Root, &MRTACTR );
LRTACTR = MRTACTR;
} 
else
{ 
(void)(MYQACTR_eval1(Root, (&NRTACTR_op)));
 /* line 205: */
 /* line 206: */
ORTACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
 /* line 207: */
ORTACTR.Info = (A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(NRTACTR_op)->Info))))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 208: */
if (Version==1)
{ 
 /* line 209: */
FLNACTR_cast( ((*A_NILCHECK((&(A_NILCHECK(NRTACTR_op)->Mode))))-4), &PRTACTR );
JEQACTR_bracketcfragment( NRTACTR_op, &QRTACTR );
SRTACTR = A_VC_PLUS(PRTACTR,QRTACTR) ;
ORTACTR.Extra = A_UNITE(RRTACTR,mode6,6,SRTACTR);
} 
else
{ 
(void)(WXIACTR_assert(A_VC_PLUS(URTACTR,LITACTR_qvfault), A68_FALSE));
 /* line 210: */
 /* line 211: */
 /* line 212: */
ORTACTR.Extra = VRTACTR;
} 
LRTACTR = ORTACTR;
} 
A_PROC_EXIT(bin);
*ReturnedValue = (LRTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ZRTACTR_repr(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * ASTACTR_op A_UNUSED = {0};
A68_55  BSTACTR;  /* collateral clause result */
A68_VC  ESTACTR;  /* avoid structure result */
A68_56  FSTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  GSTACTR;  /* YIELD */
A68_56  JSTACTR = {0};  /* OPERATORS - skip to mode */
A68_55  KSTACTR;  /* clause result */
A_PROC_ENTRY(repr);
 /* line 218: */
 /* line 219: */
{ 
(void)(MYQACTR_eval1(Root, (&ASTACTR_op)));
 /* line 220: */
 /* line 221: */
BSTACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
 /* line 222: */
BSTACTR.Info = (A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(ASTACTR_op)->Info))))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 225: */
if (Version==1)
{ 
 /* line 226: */
JEQACTR_bracketcfragment( ASTACTR_op, &ESTACTR );
GSTACTR = A_VC_PLUS(DSTACTR,ESTACTR) ;
BSTACTR.Extra = A_UNITE(FSTACTR,mode6,6,GSTACTR);
} 
else
{ 
(void)(WXIACTR_assert(A_VC_PLUS(ISTACTR,LITACTR_qvfault), A68_FALSE));
 /* line 227: */
 /* line 228: */
 /* line 229: */
BSTACTR.Extra = JSTACTR;
} 
KSTACTR = BSTACTR;
} 
A_PROC_EXIT(repr);
*ReturnedValue = (KSTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  OSTACTR_lengthen(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * PSTACTR_op A_UNUSED = {0};
A68_INT  QSTACTR_m A_UNUSED = {0};
A68_BOOL  SSTACTR;  /* optbool result */
A68_VC  USTACTR;  /* avoid structure result */
A68_55  VSTACTR;  /* collateral clause result */
A68_VC  WSTACTR;  /* avoid structure result */
A68_VC  XSTACTR;  /* avoid structure result */
A68_56  YSTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ZSTACTR;  /* YIELD */
A68_55  ATTACTR;  /* clause result */
A_PROC_ENTRY(lengthen);
 /* line 232: */
 /* line 233: */
{ 
(void)(MYQACTR_eval1(Root, (&PSTACTR_op)));
 /* line 234: */
QSTACTR_m = (*A_NILCHECK((&(A_NILCHECK(PSTACTR_op)->Mode))));
 /* line 235: */
 /* line 236: */
SSTACTR = (QSTACTR_m!=13);
if ( SSTACTR )
{SSTACTR = (QSTACTR_m!=17);
}
if ( SSTACTR )
{SSTACTR = (QSTACTR_m!=21);
}
if ( SSTACTR )
{SSTACTR = (QSTACTR_m!=25);
}
ROAAOSF_whole( QSTACTR_m, 0, &USTACTR );
(void)(WXIACTR_assert(A_VC_PLUS(TSTACTR,USTACTR), SSTACTR));
 /* line 237: */
 /* line 238: */
VSTACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
 /* line 239: */
VSTACTR.Info = (A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(PSTACTR_op)->Info))))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 240: */
 /* line 241: */
FLNACTR_cast( (QSTACTR_m+1), &WSTACTR );
JEQACTR_bracketcfragment( PSTACTR_op, &XSTACTR );
ZSTACTR = A_VC_PLUS(WSTACTR,XSTACTR) ;
VSTACTR.Extra = A_UNITE(YSTACTR,mode6,6,ZSTACTR);
ATTACTR = VSTACTR;
} 
A_PROC_EXIT(lengthen);
*ReturnedValue = (ATTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ETTACTR_shorten(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * FTTACTR_op A_UNUSED = {0};
A68_INT  GTTACTR_m A_UNUSED = {0};
A68_BOOL  ITTACTR;  /* optbool result */
A68_VC  KTTACTR;  /* avoid structure result */
A68_55  LTTACTR;  /* collateral clause result */
A68_VC  MTTACTR;  /* avoid structure result */
A68_VC  NTTACTR;  /* avoid structure result */
A68_56  OTTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  PTTACTR;  /* YIELD */
A68_55  QTTACTR;  /* clause result */
A_PROC_ENTRY(shorten);
 /* line 244: */
 /* line 245: */
{ 
(void)(MYQACTR_eval1(Root, (&FTTACTR_op)));
 /* line 246: */
GTTACTR_m = (*A_NILCHECK((&(A_NILCHECK(FTTACTR_op)->Mode))));
 /* line 247: */
 /* line 248: */
ITTACTR = (GTTACTR_m!=10);
if ( ITTACTR )
{ITTACTR = (GTTACTR_m!=14);
}
if ( ITTACTR )
{ITTACTR = (GTTACTR_m!=18);
}
if ( ITTACTR )
{ITTACTR = (GTTACTR_m!=22);
}
ROAAOSF_whole( GTTACTR_m, 0, &KTTACTR );
(void)(WXIACTR_assert(A_VC_PLUS(JTTACTR,KTTACTR), ITTACTR));
 /* line 249: */
 /* line 250: */
LTTACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
 /* line 251: */
LTTACTR.Info = (A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(FTTACTR_op)->Info))))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 252: */
 /* line 253: */
FLNACTR_cast( (GTTACTR_m-1), &MTTACTR );
JEQACTR_bracketcfragment( FTTACTR_op, &NTTACTR );
PTTACTR = A_VC_PLUS(MTTACTR,NTTACTR) ;
LTTACTR.Extra = A_UNITE(OTTACTR,mode6,6,PTTACTR);
QTTACTR = LTTACTR;
} 
A_PROC_EXIT(shorten);
*ReturnedValue = (QTTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  UTTACTR_odd(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * VTTACTR_op A_UNUSED = {0};
A68_55  WTTACTR;  /* collateral clause result */
A68_VC  YTTACTR;  /* avoid structure result */
A68_VC  AUTACTR;  /* avoid structure result */
A68_56  BUTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_56  EUTACTR = {0};  /* OPERATORS - skip to mode */
A68_55  FUTACTR;  /* clause result */
A_PROC_ENTRY(odd);
 /* line 259: */
 /* line 260: */
{ 
(void)(MYQACTR_eval1(Root, (&VTTACTR_op)));
 /* line 261: */
 /* line 262: */
WTTACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
 /* line 263: */
WTTACTR.Info = (A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(VTTACTR_op)->Info))))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 264: */
if (Version==1)
{ 
 /* line 265: */
JEQACTR_bracketcfragment( VTTACTR_op, &YTTACTR );
JIAACTR_bracket( A_VC_PLUS(YTTACTR,ZTTACTR), &AUTACTR );
WTTACTR.Extra = A_UNITE(BUTACTR,mode6,6,AUTACTR);
} 
else
{ 
(void)(WXIACTR_assert(A_VC_PLUS(DUTACTR,LITACTR_qvfault), A68_FALSE));
 /* line 266: */
 /* line 267: */
 /* line 268: */
 /* line 269: */
WTTACTR.Extra = EUTACTR;
} 
FUTACTR = WTTACTR;
} 
A_PROC_EXIT(odd);
*ReturnedValue = (FUTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  JUTACTR_sign(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * KUTACTR_op A_UNUSED = {0};
A68_55  LUTACTR;  /* collateral clause result */
A68_VC  OUTACTR;  /* avoid structure result */
A68_56  PUTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_56  SUTACTR = {0};  /* OPERATORS - skip to mode */
A68_55  TUTACTR;  /* clause result */
A_PROC_ENTRY(sign);
 /* line 276: */
 /* line 277: */
{ 
(void)(MYQACTR_eval1(Root, (&KUTACTR_op)));
 /* line 278: */
 /* line 279: */
LUTACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
 /* line 280: */
LUTACTR.Info = (A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(KUTACTR_op)->Info))))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 281: */
if ((Version==1)|(Version==2))
{ 
 /* line 282: */
DMTACTR_simplemonop( A68_TRUE, NUTACTR, RQQACTR_yield(GJTACTR_qsign, KUTACTR_op), &OUTACTR );
LUTACTR.Extra = A_UNITE(PUTACTR,mode6,6,OUTACTR);
} 
else
{ 
(void)(WXIACTR_assert(A_VC_PLUS(RUTACTR,LITACTR_qvfault), A68_FALSE));
 /* line 283: */
 /* line 284: */
 /* line 285: */
 /* line 286: */
LUTACTR.Extra = SUTACTR;
} 
TUTACTR = LUTACTR;
} 
A_PROC_EXIT(sign);
*ReturnedValue = (TUTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  XUTACTR_round(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * YUTACTR_op A_UNUSED = {0};
A68_INT  ZUTACTR_m A_UNUSED = {0};
A68_VC  CVTACTR;  /* avoid structure result */
A68_55  DVTACTR;  /* collateral clause result */
A68_VC  EVTACTR;  /* OPERATORS - istruct -> vector */
A68_64  FVTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  GVTACTR_temp1 A_UNUSED = {0};
A68_202  HVTACTR;  /* collateral clause result */
A68_76  KVTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  LVTACTR;  /* YIELD */
A68_76  MVTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_76  NVTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  OVTACTR;  /* YIELD */
A68_76  TVTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  UVTACTR;  /* YIELD */
A68_76  XVTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  YVTACTR;  /* YIELD */
A68_76  ZVTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_75  AWTACTR;  /* OPERATORS - istruct -> vector */
A68_203  CWTACTR;  /* collateral clause result */
A68_169  DWTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_169  EWTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55 * FWTACTR;  /* YIELD */
A68_VC  GWTACTR;  /* avoid structure result */
A68_169  HWTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_172  IWTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  KWTACTR;  /* avoid structure result */
A68_56  LWTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_56  MWTACTR = {0};  /* OPERATORS - skip to mode */
A68_55  NWTACTR;  /* clause result */
A_PROC_ENTRY(round);
 /* line 296: */
 /* line 297: */
{ 
(void)(MYQACTR_eval1(Root, (&YUTACTR_op)));
 /* line 298: */
ZUTACTR_m = (*A_NILCHECK((&(A_NILCHECK(YUTACTR_op)->Mode))));
 /* line 299: */
 /* line 300: */
ROAAOSF_whole( ZUTACTR_m, 0, &CVTACTR );
(void)(WXIACTR_assert(A_VC_PLUS(A_VC_PLUS(AJTACTR_qround,BVTACTR),CVTACTR), ((ZUTACTR_m<=21)&(ZUTACTR_m>=18))));
 /* line 301: */
 /* line 302: */
DVTACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
 /* line 303: */
DVTACTR.Info = (A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(YUTACTR_op)->Info))))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 304: */
if (Version==1)
{ 
FVTACTR = QIMACTR_newuniquename() ;
GVTACTR_temp1 = A_HISVEC(EVTACTR,FVTACTR,7,A68_CHAR );
 /* line 305: */
 /* line 306: */
LVTACTR = JVTACTR ;
HVTACTR.data[0] = A_UNITE(KVTACTR,mode2,2,LVTACTR);
HVTACTR.data[1] = A_UNITE(MVTACTR,mode2,2,GVTACTR_temp1);
 /* line 307: */
OVTACTR = ';' ;
HVTACTR.data[2] = A_UNITE(NVTACTR,mode1,1,OVTACTR);
if (AQIACTR_verboseoption)
{ 
UVTACTR = A_VC_PLUS(A_VC_PLUS(RVTACTR,AJTACTR_qround),SVTACTR) ;
HVTACTR.data[3] = A_UNITE(TVTACTR,mode2,2,UVTACTR);
} 
else
{ 
 /* line 308: */
YVTACTR = WVTACTR ;
HVTACTR.data[3] = A_UNITE(XVTACTR,mode2,2,YVTACTR);
} 
HVTACTR.data[4] = A_UNITE(ZVTACTR,mode4,4,EIAACTR_cnewline);
 /* line 309: */
(void)(MDMACTR_writecstream(A_HISVEC(AWTACTR,HVTACTR,5,A68_76 ), QSLACTR_locdecstream(VRLACTR_currentlevel())));
 /* line 310: */
CWTACTR.data[0] = A_UNITE(DWTACTR,mode2,2,GVTACTR_temp1);
FWTACTR = RQQACTR_yield(AJTACTR_qround, YUTACTR_op) ;
CWTACTR.data[1] = A_UNITE(EWTACTR,mode1,1,FWTACTR);
FLNACTR_cast( (ZUTACTR_m-4), &GWTACTR );
CWTACTR.data[2] = A_UNITE(HWTACTR,mode2,2,GWTACTR);
 /* line 311: */
APQACTR_usemacro( JWTACTR, A_HISVEC(IWTACTR,CWTACTR,3,A68_169 ), &KWTACTR );
DVTACTR.Extra = A_UNITE(LWTACTR,mode6,6,KWTACTR);
} 
else
{ 
(void)(WXIACTR_assert(A_VC_PLUS(AJTACTR_qround,LITACTR_qvfault), A68_FALSE));
 /* line 312: */
 /* line 313: */
 /* line 314: */
 /* line 315: */
DVTACTR.Extra = MWTACTR;
} 
NWTACTR = DVTACTR;
} 
A_PROC_EXIT(round);
*ReturnedValue = (NWTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  RWTACTR_entier(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * SWTACTR_op A_UNUSED = {0};
A68_INT  TWTACTR_m A_UNUSED = {0};
A68_VC  WWTACTR;  /* avoid structure result */
A68_55  XWTACTR;  /* collateral clause result */
A68_VC  YWTACTR;  /* OPERATORS - istruct -> vector */
A68_64  ZWTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  AXTACTR_temp1 A_UNUSED = {0};
A68_VC  BXTACTR;  /* OPERATORS - istruct -> vector */
A68_64  CXTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  DXTACTR_temp2 A_UNUSED = {0};
A68_205  EXTACTR;  /* collateral clause result */
A68_76  HXTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  IXTACTR;  /* YIELD */
A68_76  JXTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_76  KXTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  LXTACTR;  /* YIELD */
A68_76  MXTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_76  NXTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  OXTACTR;  /* YIELD */
A68_76  TXTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  UXTACTR;  /* YIELD */
A68_76  XXTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  YXTACTR;  /* YIELD */
A68_76  ZXTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_75  AYTACTR;  /* OPERATORS - istruct -> vector */
A68_207  CYTACTR;  /* collateral clause result */
A68_169  DYTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_169  EYTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_169  FYTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55 * GYTACTR;  /* YIELD */
A68_VC  HYTACTR;  /* avoid structure result */
A68_169  IYTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_172  JYTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  LYTACTR;  /* avoid structure result */
A68_56  MYTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_56  NYTACTR = {0};  /* OPERATORS - skip to mode */
A68_55  OYTACTR;  /* clause result */
A_PROC_ENTRY(entier);
 /* line 327: */
 /* line 328: */
{ 
(void)(MYQACTR_eval1(Root, (&SWTACTR_op)));
 /* line 329: */
TWTACTR_m = (*A_NILCHECK((&(A_NILCHECK(SWTACTR_op)->Mode))));
 /* line 330: */
 /* line 331: */
ROAAOSF_whole( TWTACTR_m, 0, &WWTACTR );
(void)(WXIACTR_assert(A_VC_PLUS(A_VC_PLUS(DJTACTR_qentier,VWTACTR),WWTACTR), ((TWTACTR_m<=21)&(TWTACTR_m>=18))));
 /* line 332: */
 /* line 333: */
XWTACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
 /* line 334: */
XWTACTR.Info = (A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(SWTACTR_op)->Info))))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 335: */
if (Version==1)
{ 
ZWTACTR = QIMACTR_newuniquename() ;
AXTACTR_temp1 = A_HISVEC(YWTACTR,ZWTACTR,7,A68_CHAR );
 /* line 336: */
CXTACTR = QIMACTR_newuniquename() ;
DXTACTR_temp2 = A_HISVEC(BXTACTR,CXTACTR,7,A68_CHAR );
 /* line 337: */
 /* line 338: */
IXTACTR = GXTACTR ;
EXTACTR.data[0] = A_UNITE(HXTACTR,mode2,2,IXTACTR);
EXTACTR.data[1] = A_UNITE(JXTACTR,mode2,2,AXTACTR_temp1);
LXTACTR = ',' ;
EXTACTR.data[2] = A_UNITE(KXTACTR,mode1,1,LXTACTR);
EXTACTR.data[3] = A_UNITE(MXTACTR,mode2,2,DXTACTR_temp2);
 /* line 339: */
OXTACTR = ';' ;
EXTACTR.data[4] = A_UNITE(NXTACTR,mode1,1,OXTACTR);
if (AQIACTR_verboseoption)
{ 
UXTACTR = A_VC_PLUS(A_VC_PLUS(RXTACTR,DJTACTR_qentier),SXTACTR) ;
EXTACTR.data[5] = A_UNITE(TXTACTR,mode2,2,UXTACTR);
} 
else
{ 
 /* line 340: */
YXTACTR = WXTACTR ;
EXTACTR.data[5] = A_UNITE(XXTACTR,mode2,2,YXTACTR);
} 
EXTACTR.data[6] = A_UNITE(ZXTACTR,mode4,4,EIAACTR_cnewline);
 /* line 341: */
(void)(MDMACTR_writecstream(A_HISVEC(AYTACTR,EXTACTR,7,A68_76 ), QSLACTR_locdecstream(VRLACTR_currentlevel())));
 /* line 342: */
CYTACTR.data[0] = A_UNITE(DYTACTR,mode2,2,AXTACTR_temp1);
CYTACTR.data[1] = A_UNITE(EYTACTR,mode2,2,DXTACTR_temp2);
GYTACTR = RQQACTR_yield(DJTACTR_qentier, SWTACTR_op) ;
CYTACTR.data[2] = A_UNITE(FYTACTR,mode1,1,GYTACTR);
FLNACTR_cast( (TWTACTR_m-4), &HYTACTR );
CYTACTR.data[3] = A_UNITE(IYTACTR,mode2,2,HYTACTR);
 /* line 343: */
APQACTR_usemacro( KYTACTR, A_HISVEC(JYTACTR,CYTACTR,4,A68_169 ), &LYTACTR );
XWTACTR.Extra = A_UNITE(MYTACTR,mode6,6,LYTACTR);
} 
else
{ 
(void)(WXIACTR_assert(A_VC_PLUS(DJTACTR_qentier,LITACTR_qvfault), A68_FALSE));
 /* line 344: */
 /* line 345: */
 /* line 346: */
XWTACTR.Extra = NYTACTR;
} 
OYTACTR = XWTACTR;
} 
A_PROC_EXIT(entier);
*ReturnedValue = (OYTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  SYTACTR_simplemoncomp(A68_VC  Mac, A68_55 * Root, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * TYTACTR_op A_UNUSED = {0};
A68_55  UYTACTR;  /* collateral clause result */
A68_169  VYTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_172  WYTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XYTACTR;  /* avoid structure result */
A68_56  YYTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55  ZYTACTR;  /* clause result */
A_PROC_ENTRY(simplemoncomp);
 /* line 350: */
 /* line 351: */
{ 
(void)(MYQACTR_eval1(Root, (&TYTACTR_op)));
 /* line 352: */
 /* line 353: */
UYTACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
 /* line 354: */
UYTACTR.Info = (A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(TYTACTR_op)->Info))))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 355: */
 /* line 356: */
APQACTR_usemacro( Mac, A_HVEC(WYTACTR,A_UNITE(VYTACTR,mode1,1,TYTACTR_op),A68_169 ), &XYTACTR );
UYTACTR.Extra = A_UNITE(YYTACTR,mode6,6,XYTACTR);
ZYTACTR = UYTACTR;
} 
A_PROC_EXIT(simplemoncomp);
*ReturnedValue = (ZYTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  DZTACTR_re(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55  FZTACTR;  /* clause result */
A68_55  HZTACTR;  /* avoid structure result */
A_PROC_ENTRY(re);
 /* line 361: */
SYTACTR_simplemoncomp( GZTACTR, Root, Version, &HZTACTR );
FZTACTR = HZTACTR;
A_PROC_EXIT(re);
*ReturnedValue = (FZTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  LZTACTR_im(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55  NZTACTR;  /* clause result */
A68_55  PZTACTR;  /* avoid structure result */
A_PROC_ENTRY(im);
 /* line 365: */
SYTACTR_simplemoncomp( OZTACTR, Root, Version, &PZTACTR );
NZTACTR = PZTACTR;
A_PROC_EXIT(im);
*ReturnedValue = (NZTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  TZTACTR_arg(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * UZTACTR_op A_UNUSED = {0};
A68_55  VZTACTR;  /* collateral clause result */
A68_169  XZTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55 * YZTACTR;  /* YIELD */
A68_172  ZZTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  BAUACTR;  /* avoid structure result */
A68_56  CAUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55  DAUACTR;  /* clause result */
A_PROC_ENTRY(arg);
 /* line 371: */
 /* line 372: */
{ 
(void)(MYQACTR_eval1(Root, (&UZTACTR_op)));
 /* line 373: */
 /* line 374: */
VZTACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
 /* line 375: */
VZTACTR.Info = (A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(UZTACTR_op)->Info))))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 376: */
 /* line 377: */
YZTACTR = RQQACTR_yield(PJTACTR_qarg, UZTACTR_op) ;
APQACTR_usemacro( AAUACTR, A_HVEC(ZZTACTR,A_UNITE(XZTACTR,mode1,1,YZTACTR),A68_169 ), &BAUACTR );
VZTACTR.Extra = A_UNITE(CAUACTR,mode6,6,BAUACTR);
DAUACTR = VZTACTR;
} 
A_PROC_EXIT(arg);
*ReturnedValue = (DAUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HAUACTR_conj(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * IAUACTR_op A_UNUSED = {0};
A68_59  LAUACTR;  /* avoid structure result */
A68_59  MAUACTR_temp A_UNUSED = {0};
A68_55  NAUACTR;  /* collateral clause result */
A68_192  PAUACTR;  /* collateral clause result */
A68_169  QAUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_169  RAUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55 * SAUACTR;  /* YIELD */
A68_172  TAUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  VAUACTR;  /* avoid structure result */
A68_56  WAUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55  XAUACTR;  /* clause result */
A_PROC_ENTRY(conj);
 /* line 381: */
 /* line 382: */
{ 
(void)(MYQACTR_eval1(Root, (&IAUACTR_op)));
 /* line 383: */
A_CALLPROC(TMOACTR_new,((*A_NILCHECK((&(A_NILCHECK(IAUACTR_op)->Mode)))), KAUACTR, &LAUACTR),((*A_NILCHECK((&(A_NILCHECK(IAUACTR_op)->Mode)))), KAUACTR, &LAUACTR,(TMOACTR_new).nonlocals));
MAUACTR_temp = LAUACTR;
 /* line 384: */
 /* line 385: */
NAUACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
 /* line 386: */
NAUACTR.Info = (A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(IAUACTR_op)->Info))))&XKJACTR_fxwarn)|RKJACTR_atomic);
PAUACTR.data[0] = A_UNITE(QAUACTR,mode3,3,MAUACTR_temp);
SAUACTR = RQQACTR_yield(SJTACTR_qconj, IAUACTR_op) ;
PAUACTR.data[1] = A_UNITE(RAUACTR,mode1,1,SAUACTR);
 /* line 387: */
 /* line 388: */
APQACTR_usemacro( UAUACTR, A_HISVEC(TAUACTR,PAUACTR,2,A68_169 ), &VAUACTR );
NAUACTR.Extra = A_UNITE(WAUACTR,mode6,6,VAUACTR);
XAUACTR = NAUACTR;
} 
A_PROC_EXIT(conj);
*ReturnedValue = (XAUACTR);
return;
} 
#undef NL

A68_VOID  XBUACTR_monadicsem(A68_55 * Root, A68_62  Rator, A68_55  *ReturnedValue)
{ 
A68_INT  YBUACTR_param A_UNUSED = {0};
A68_BOOL  ZBUACTR;  /* clause result */
A68_INT  ACUACTR_opnumber A_UNUSED = {0};
A68_INT  BCUACTR;  /* ADICOPS - MOD */
A68_INT  CCUACTR_version A_UNUSED = {0};
A68_55  DCUACTR;  /* clause result */
A68_193  ECUACTR;  /* CALL */
A68_55  FCUACTR;  /* avoid structure result */
A68_55  GCUACTR;  /* avoid structure result */
A_PROC_ENTRY(monadicsem);
 /* line 414: */
 /* line 415: */
{ 
YBUACTR_param = (A68_INT )(A68_BITS )((A68_BITS )Rator.Param&ZGAACTR_parammask);
 /* line 416: */
 /* line 417: */
 /* line 418: */
ZBUACTR = (YBUACTR_param<RGAACTR_biopnumbersstart);
if (ZBUACTR)
{ 
ACUACTR_opnumber = (YBUACTR_param/SGAACTR_opnumberdivisor);
 /* line 419: */
CCUACTR_version = A_MOD(YBUACTR_param,SGAACTR_opnumberdivisor,BCUACTR);
 /* line 420: */
 /* line 421: */
 /* line 422: */
ECUACTR = A_R1INDEX(UBUACTR_monadicsemantics,ACUACTR_opnumber) ;
A_CALLPROC(ECUACTR,(Root, ACUACTR_opnumber, CCUACTR_version, &FCUACTR),(Root, ACUACTR_opnumber, CCUACTR_version, &FCUACTR,(ECUACTR).nonlocals));
DCUACTR = FCUACTR;
} 
else
{ 
 /* line 423: */
THTACTR_monadicbiopsemantics( Root, YBUACTR_param, &GCUACTR );
DCUACTR = GCUACTR;
} 
} 
A_PROC_EXIT(monadicsem);
*ReturnedValue = (DCUACTR);
return;
} 
#undef NL
 /* line 427: */

A_STATIC A68_VOID  NCUACTR_complexop(A68_125  Modes, A68_VC  Op, A68_VC  Name, A68_55 * Left, A68_55 * Right, A68_BOOL  Lval, A68_VC  *ReturnedValue)
{ 
A68_55 * QCUACTR_l A_UNUSED = {0};
A68_55 * TCUACTR_r A_UNUSED = {0};
A68_192  UCUACTR;  /* collateral clause result */
A68_169  VCUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_169  WCUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_172  XCUACTR;  /* clause result */
A68_172  YCUACTR;  /* OPERATORS - istruct -> vector */
A68_203  ZCUACTR;  /* collateral clause result */
A68_INT  ADUACTR;  /* YIELD */
A68_59  BDUACTR;  /* avoid structure result */
A68_169  CDUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_169  DDUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_169  EDUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_172  FDUACTR;  /* OPERATORS - istruct -> vector */
A68_207  GDUACTR;  /* collateral clause result */
A68_INT  JDUACTR;  /* YIELD */
A68_59  KDUACTR;  /* avoid structure result */
A68_169  LDUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  ODUACTR;  /* YIELD */
A68_59  PDUACTR;  /* avoid structure result */
A68_169  QDUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_169  RDUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_169  SDUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_172  TDUACTR;  /* OPERATORS - istruct -> vector */
A68_172  UDUACTR_params A_UNUSED = {0};
A68_VC  VDUACTR;  /* clause result */
A68_VC  WDUACTR;  /* avoid structure result */
A_PROC_ENTRY(complexop);
 /* line 428: */
 /* line 429: */
{ 
QCUACTR_l = RQQACTR_yield(A_VC_PLUS(Name,PCUACTR), Left);
TCUACTR_r = RQQACTR_yield(A_VC_PLUS(Name,SCUACTR), Right);
 /* line 430: */
if (Lval)
{ 
(void)(PKAAOSF_orab((&(A_NILCHECK(QCUACTR_l)->Info)), VKJACTR_lvalue));
} 
 /* line 431: */
 /* line 432: */
if (Modes.upb==0)
{ 
UCUACTR.data[0] = A_UNITE(VCUACTR,mode1,1,QCUACTR_l);
 /* line 433: */
UCUACTR.data[1] = A_UNITE(WCUACTR,mode1,1,TCUACTR_r);
XCUACTR = A_HISVEC(YCUACTR,UCUACTR,2,A68_169 );
} 
else
{ 
if (Modes.upb==1)
{ 
ADUACTR = 1 ;
A_CALLPROC(TMOACTR_new,(A_VINDEX(Modes,ADUACTR), Name, &BDUACTR),(A_VINDEX(Modes,ADUACTR), Name, &BDUACTR,(TMOACTR_new).nonlocals));
ZCUACTR.data[0] = A_UNITE(CDUACTR,mode3,3,BDUACTR);
ZCUACTR.data[1] = A_UNITE(DDUACTR,mode1,1,QCUACTR_l);
 /* line 434: */
ZCUACTR.data[2] = A_UNITE(EDUACTR,mode1,1,TCUACTR_r);
XCUACTR = A_HISVEC(FDUACTR,ZCUACTR,3,A68_169 );
} 
else
{ 
JDUACTR = 1 ;
A_CALLPROC(TMOACTR_new,(A_VINDEX(Modes,JDUACTR), A_VC_PLUS(Name,IDUACTR), &KDUACTR),(A_VINDEX(Modes,JDUACTR), A_VC_PLUS(Name,IDUACTR), &KDUACTR,(TMOACTR_new).nonlocals));
GDUACTR.data[0] = A_UNITE(LDUACTR,mode3,3,KDUACTR);
ODUACTR = 2 ;
A_CALLPROC(TMOACTR_new,(A_VINDEX(Modes,ODUACTR), A_VC_PLUS(Name,NDUACTR), &PDUACTR),(A_VINDEX(Modes,ODUACTR), A_VC_PLUS(Name,NDUACTR), &PDUACTR,(TMOACTR_new).nonlocals));
GDUACTR.data[1] = A_UNITE(QDUACTR,mode3,3,PDUACTR);
GDUACTR.data[2] = A_UNITE(RDUACTR,mode1,1,QCUACTR_l);
 /* line 435: */
GDUACTR.data[3] = A_UNITE(SDUACTR,mode1,1,TCUACTR_r);
XCUACTR = A_HISVEC(TDUACTR,GDUACTR,4,A68_169 );
} 
} 
UDUACTR_params = XCUACTR;
 /* line 436: */
 /* line 437: */
APQACTR_usemacro( Op, UDUACTR_params, &WDUACTR );
VDUACTR = WDUACTR;
} 
A_PROC_EXIT(complexop);
*ReturnedValue = (VDUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  AEUACTR_dyadicplus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * BEUACTR_left A_UNUSED = {0};
A68_55 * CEUACTR_right A_UNUSED = {0};
A68_VC  EEUACTR;  /* clause result */
A68_VC  GEUACTR;  /* avoid structure result */
A68_VC  HEUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  IEUACTR;  /* avoid structure result */
A68_VC  JEUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  KEUACTR;  /* avoid structure result */
A68_125  NEUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  OEUACTR;  /* avoid structure result */
A68_VC  REUACTR;  /* avoid structure result */
A68_VC  UEUACTR;  /* avoid structure result */
A68_VC  VEUACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  WEUACTR_body A_UNUSED = {0};
A68_55  XEUACTR;  /* collateral clause result */
A68_56  YEUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55  ZEUACTR;  /* clause result */
A_PROC_ENTRY(dyadicplus);
 /* line 441: */
 /* line 442: */
{ 
(void)(NZQACTR_eval2(Root, (&BEUACTR_left), (&CEUACTR_right)));
 /* line 443: */
 /* line 444: */
 /* line 445: */
switch ( Version )
{ 
case 1: 
 /* line 446: */
OMTACTR_simpledyop( A68_TRUE, FEUACTR, BEUACTR_left, CEUACTR_right, &GEUACTR );
EEUACTR = GEUACTR;
break;
case 2: 
 /* line 447: */
OMTACTR_simpledyop( A68_FALSE, A_HVEC(HEUACTR,'+',A68_CHAR ), BEUACTR_left, CEUACTR_right, &IEUACTR );
EEUACTR = IEUACTR;
break;
case 3: 
 /* line 448: */
OMTACTR_simpledyop( A68_FALSE, A_HVEC(JEUACTR,'+',A68_CHAR ), BEUACTR_left, CEUACTR_right, &KEUACTR );
EEUACTR = KEUACTR;
break;
case 4: 
 /* line 449: */
 /* line 450: */
NCUACTR_complexop( A_HVEC(NEUACTR,(*A_NILCHECK((&(A_NILCHECK(Root)->Mode)))),A68_INT ), MEUACTR, A_VC_PLUS(XJTACTR_qplus,ZLTACTR_qcomplex), BEUACTR_left, CEUACTR_right, A68_FALSE, &OEUACTR );
EEUACTR = OEUACTR;
break;
case 5: 
 /* line 451: */
OMTACTR_simpledyop( A68_TRUE, QEUACTR, BEUACTR_left, CEUACTR_right, &REUACTR );
EEUACTR = REUACTR;
break;
case 6: 
 /* line 452: */
OMTACTR_simpledyop( A68_TRUE, TEUACTR, BEUACTR_left, CEUACTR_right, &UEUACTR );
EEUACTR = UEUACTR;
break;
default: 
(void)(WXIACTR_assert(A_VC_PLUS(XJTACTR_qplus,LITACTR_qvfault), A68_FALSE));
 /* line 453: */
EEUACTR = VEUACTR;
break;
} 
WEUACTR_body = EEUACTR;
 /* line 454: */
 /* line 455: */
XEUACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
 /* line 457: */
XEUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(BEUACTR_left)->Info))))&XKJACTR_fxwarn)|(A68_BITS )((*A_NILCHECK((&(A_NILCHECK(CEUACTR_right)->Info))))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 458: */
XEUACTR.Extra = A_UNITE(YEUACTR,mode6,6,WEUACTR_body);
ZEUACTR = XEUACTR;
} 
A_PROC_EXIT(dyadicplus);
*ReturnedValue = (ZEUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  DFUACTR_dyadicminus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * EFUACTR_left A_UNUSED = {0};
A68_55 * FFUACTR_right A_UNUSED = {0};
A68_55  GFUACTR;  /* collateral clause result */
A68_125  JFUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  KFUACTR;  /* avoid structure result */
A68_56  LFUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  MFUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  NFUACTR;  /* avoid structure result */
A68_56  OFUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55  PFUACTR;  /* clause result */
A_PROC_ENTRY(dyadicminus);
 /* line 461: */
 /* line 462: */
{ 
 /* line 463: */
(void)(NZQACTR_eval2(Root, (&EFUACTR_left), (&FFUACTR_right)));
 /* line 464: */
 /* line 465: */
GFUACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
 /* line 466: */
GFUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(EFUACTR_left)->Info))))&XKJACTR_fxwarn)|(A68_BITS )((*A_NILCHECK((&(A_NILCHECK(FFUACTR_right)->Info))))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 467: */
if (Version==3)
{ 
 /* line 468: */
 /* line 469: */
NCUACTR_complexop( A_HVEC(JFUACTR,(*A_NILCHECK((&(A_NILCHECK(Root)->Mode)))),A68_INT ), IFUACTR, A_VC_PLUS(AKTACTR_qminus,ZLTACTR_qcomplex), EFUACTR_left, FFUACTR_right, A68_FALSE, &KFUACTR );
GFUACTR.Extra = A_UNITE(LFUACTR,mode6,6,KFUACTR);
} 
else
{ 
 /* line 470: */
 /* line 471: */
 /* line 472: */
OMTACTR_simpledyop( A68_FALSE, A_HVEC(MFUACTR,'-',A68_CHAR ), EFUACTR_left, FFUACTR_right, &NFUACTR );
GFUACTR.Extra = A_UNITE(OFUACTR,mode6,6,NFUACTR);
} 
PFUACTR = GFUACTR;
} 
A_PROC_EXIT(dyadicminus);
*ReturnedValue = (PFUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  TFUACTR_dyadicupb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * UFUACTR_left A_UNUSED = {0};
A68_55 * VFUACTR_right A_UNUSED = {0};
A68_55  WFUACTR;  /* collateral clause result */
A68_VC  ZFUACTR;  /* avoid structure result */
A68_VC  BGUACTR;  /* avoid structure result */
A68_56  DGUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  EGUACTR;  /* YIELD */
A68_55  FGUACTR;  /* clause result */
A_PROC_ENTRY(dyadicupb);
 /* line 478: */
 /* line 479: */
{ 
(void)(NZQACTR_eval2(Root, (&UFUACTR_left), (&VFUACTR_right)));
 /* line 480: */
 /* line 481: */
WFUACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
 /* line 482: */
WFUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(UFUACTR_left)->Info))))&XKJACTR_fxwarn)|(A68_BITS )((*A_NILCHECK((&(A_NILCHECK(VFUACTR_right)->Info))))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 483: */
 /* line 484: */
JEQACTR_bracketcfragment( VFUACTR_right, &ZFUACTR );
JEQACTR_bracketcfragment( UFUACTR_left, &BGUACTR );
EGUACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(ZFUACTR,AGUACTR),BGUACTR),CGUACTR) ;
WFUACTR.Extra = A_UNITE(DGUACTR,mode6,6,EGUACTR);
FGUACTR = WFUACTR;
} 
A_PROC_EXIT(dyadicupb);
*ReturnedValue = (FGUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  JGUACTR_dyadiclwb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * KGUACTR_left A_UNUSED = {0};
A68_55 * LGUACTR_right A_UNUSED = {0};
A68_55  MGUACTR;  /* collateral clause result */
A68_VC  PGUACTR;  /* avoid structure result */
A68_VC  RGUACTR;  /* avoid structure result */
A68_56  TGUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  UGUACTR;  /* YIELD */
A68_55  VGUACTR;  /* clause result */
A_PROC_ENTRY(dyadiclwb);
 /* line 487: */
 /* line 488: */
{ 
(void)(NZQACTR_eval2(Root, (&KGUACTR_left), (&LGUACTR_right)));
 /* line 489: */
 /* line 490: */
MGUACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
 /* line 491: */
MGUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(KGUACTR_left)->Info))))&XKJACTR_fxwarn)|(A68_BITS )((*A_NILCHECK((&(A_NILCHECK(LGUACTR_right)->Info))))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 492: */
 /* line 493: */
JEQACTR_bracketcfragment( LGUACTR_right, &PGUACTR );
JEQACTR_bracketcfragment( KGUACTR_left, &RGUACTR );
UGUACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(PGUACTR,QGUACTR),RGUACTR),SGUACTR) ;
MGUACTR.Extra = A_UNITE(TGUACTR,mode6,6,UGUACTR);
VGUACTR = MGUACTR;
} 
A_PROC_EXIT(dyadiclwb);
*ReturnedValue = (VGUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ZGUACTR_and(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * AHUACTR_left A_UNUSED = {0};
A68_55 * BHUACTR_right A_UNUSED = {0};
A68_55  CHUACTR;  /* collateral clause result */
A68_VC  DHUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  EHUACTR;  /* avoid structure result */
A68_56  FHUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  GHUACTR;  /* avoid structure result */
A68_VC  HHUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  IHUACTR;  /* avoid structure result */
A68_56  JHUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  KHUACTR;  /* YIELD */
A68_56  NHUACTR = {0};  /* OPERATORS - skip to mode */
A68_55  OHUACTR;  /* clause result */
A_PROC_ENTRY(and);
 /* line 496: */
 /* line 497: */
{ 
 /* line 498: */
(void)(NZQACTR_eval2(Root, (&AHUACTR_left), (&BHUACTR_right)));
 /* line 499: */
 /* line 500: */
CHUACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
 /* line 501: */
CHUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(AHUACTR_left)->Info))))&XKJACTR_fxwarn)|(A68_BITS )((*A_NILCHECK((&(A_NILCHECK(BHUACTR_right)->Info))))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 502: */
switch ( Version )
{ 
case 1: 
 /* line 503: */
OMTACTR_simpledyop( A68_FALSE, A_HVEC(DHUACTR,'&',A68_CHAR ), AHUACTR_left, BHUACTR_right, &EHUACTR );
CHUACTR.Extra = A_UNITE(FHUACTR,mode6,6,EHUACTR);
break;
case 2: 
 /* line 504: */
FLNACTR_cast( (*A_NILCHECK((&(A_NILCHECK(Root)->Mode)))), &GHUACTR );
OMTACTR_simpledyop( A68_FALSE, A_HVEC(HHUACTR,'&',A68_CHAR ), AHUACTR_left, BHUACTR_right, &IHUACTR );
KHUACTR = A_VC_PLUS(GHUACTR,IHUACTR) ;
CHUACTR.Extra = A_UNITE(JHUACTR,mode6,6,KHUACTR);
break;
default: 
(void)(WXIACTR_assert(A_VC_PLUS(MHUACTR,LITACTR_qvfault), A68_FALSE));
 /* line 505: */
 /* line 506: */
 /* line 507: */
CHUACTR.Extra = NHUACTR;
break;
} 
OHUACTR = CHUACTR;
} 
A_PROC_EXIT(and);
*ReturnedValue = (OHUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  SHUACTR_or(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * THUACTR_left A_UNUSED = {0};
A68_55 * UHUACTR_right A_UNUSED = {0};
A68_55  VHUACTR;  /* collateral clause result */
A68_VC  WHUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XHUACTR;  /* avoid structure result */
A68_56  YHUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ZHUACTR;  /* avoid structure result */
A68_VC  AIUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  BIUACTR;  /* avoid structure result */
A68_56  CIUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  DIUACTR;  /* YIELD */
A68_56  GIUACTR = {0};  /* OPERATORS - skip to mode */
A68_55  HIUACTR;  /* clause result */
A_PROC_ENTRY(or);
 /* line 510: */
 /* line 511: */
{ 
(void)(NZQACTR_eval2(Root, (&THUACTR_left), (&UHUACTR_right)));
 /* line 512: */
 /* line 513: */
VHUACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
 /* line 514: */
VHUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(THUACTR_left)->Info))))&XKJACTR_fxwarn)|(A68_BITS )((*A_NILCHECK((&(A_NILCHECK(UHUACTR_right)->Info))))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 515: */
switch ( Version )
{ 
case 1: 
 /* line 516: */
OMTACTR_simpledyop( A68_FALSE, A_HVEC(WHUACTR,'|',A68_CHAR ), THUACTR_left, UHUACTR_right, &XHUACTR );
VHUACTR.Extra = A_UNITE(YHUACTR,mode6,6,XHUACTR);
break;
case 2: 
 /* line 517: */
FLNACTR_cast( (*A_NILCHECK((&(A_NILCHECK(Root)->Mode)))), &ZHUACTR );
OMTACTR_simpledyop( A68_FALSE, A_HVEC(AIUACTR,'|',A68_CHAR ), THUACTR_left, UHUACTR_right, &BIUACTR );
DIUACTR = A_VC_PLUS(ZHUACTR,BIUACTR) ;
VHUACTR.Extra = A_UNITE(CIUACTR,mode6,6,DIUACTR);
break;
default: 
(void)(WXIACTR_assert(A_VC_PLUS(FIUACTR,LITACTR_qvfault), A68_FALSE));
 /* line 518: */
 /* line 519: */
 /* line 520: */
VHUACTR.Extra = GIUACTR;
break;
} 
HIUACTR = VHUACTR;
} 
A_PROC_EXIT(or);
*ReturnedValue = (HIUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  LIUACTR_lessnotless(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_VC  MIUACTR;  /* clause result */
A68_VC  NIUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  OIUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  RIUACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  SIUACTR_op A_UNUSED = {0};
A68_VC  UIUACTR;  /* clause result */
A68_VC  AJUACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  BJUACTR_opmacro A_UNUSED = {0};
A68_VC  CJUACTR_adic A_UNUSED = {0};
A68_55 * DJUACTR_left A_UNUSED = {0};
A68_55 * EJUACTR_right A_UNUSED = {0};
A68_VC  FJUACTR;  /* clause result */
A68_VC  GJUACTR;  /* avoid structure result */
A68_VC  HJUACTR;  /* avoid structure result */
A68_VC  IJUACTR;  /* avoid structure result */
A68_VC  LJUACTR;  /* avoid structure result */
A68_VC  OJUACTR;  /* avoid structure result */
A68_VC  PJUACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  QJUACTR_body A_UNUSED = {0};
A68_55  RJUACTR;  /* collateral clause result */
A68_56  SJUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55  TJUACTR;  /* clause result */
A_PROC_ENTRY(lessnotless);
 /* line 523: */
 /* line 525: */
{ 
 /* line 526: */
switch ( (Opnumber-5) )
{ 
case 1: 
 /* line 527: */
MIUACTR = A_HVEC(NIUACTR,'<',A68_CHAR );
break;
case 2: 
MIUACTR = A_HVEC(OIUACTR,'>',A68_CHAR );
break;
default: 
(void)(WXIACTR_assert(QIUACTR, A68_FALSE));
 /* line 528: */
MIUACTR = RIUACTR;
break;
} 
SIUACTR_op = MIUACTR;
 /* line 529: */
 /* line 530: */
 /* line 531: */
switch ( (Opnumber-5) )
{ 
case 1: 
 /* line 532: */
UIUACTR = VIUACTR;
break;
case 2: 
UIUACTR = XIUACTR;
break;
default: 
(void)(WXIACTR_assert(ZIUACTR, A68_FALSE));
 /* line 533: */
UIUACTR = AJUACTR;
break;
} 
BJUACTR_opmacro = UIUACTR;
 /* line 534: */
CJUACTR_adic = A_VC_PLUS(IITACTR_modulename,SIUACTR_op);
 /* line 535: */
(void)(NZQACTR_eval2(Root, (&DJUACTR_left), (&EJUACTR_right)));
 /* line 536: */
 /* line 537: */
 /* line 538: */
switch ( Version )
{ 
case 1: 
 /* line 539: */
OMTACTR_simpledyop( A68_FALSE, SIUACTR_op, DJUACTR_left, EJUACTR_right, &GJUACTR );
FJUACTR = GJUACTR;
break;
case 2: 
 /* line 540: */
OMTACTR_simpledyop( A68_FALSE, SIUACTR_op, DJUACTR_left, EJUACTR_right, &HJUACTR );
FJUACTR = HJUACTR;
break;
case 3: 
 /* line 541: */
OMTACTR_simpledyop( A68_FALSE, SIUACTR_op, DJUACTR_left, EJUACTR_right, &IJUACTR );
FJUACTR = IJUACTR;
break;
case 4: 
 /* line 542: */
OMTACTR_simpledyop( A68_TRUE, A_VC_PLUS(KJUACTR,BJUACTR_opmacro), DJUACTR_left, EJUACTR_right, &LJUACTR );
FJUACTR = LJUACTR;
break;
case 5: 
 /* line 543: */
OMTACTR_simpledyop( A68_TRUE, A_VC_PLUS(NJUACTR,BJUACTR_opmacro), DJUACTR_left, EJUACTR_right, &OJUACTR );
FJUACTR = OJUACTR;
break;
default: 
(void)(WXIACTR_assert(A_VC_PLUS(CJUACTR_adic,LITACTR_qvfault), A68_FALSE));
 /* line 544: */
FJUACTR = PJUACTR;
break;
} 
QJUACTR_body = FJUACTR;
 /* line 545: */
 /* line 546: */
RJUACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
 /* line 548: */
RJUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(DJUACTR_left)->Info))))&XKJACTR_fxwarn)|(A68_BITS )((*A_NILCHECK((&(A_NILCHECK(EJUACTR_right)->Info))))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 549: */
RJUACTR.Extra = A_UNITE(SJUACTR,mode6,6,QJUACTR_body);
TJUACTR = RJUACTR;
} 
A_PROC_EXIT(lessnotless);
*ReturnedValue = (TJUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  XJUACTR_lesseqgreatereq(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_VC  ZJUACTR;  /* clause result */
A68_VC  FKUACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  GKUACTR_opsymbol A_UNUSED = {0};
A68_VC  IKUACTR;  /* clause result */
A68_VC  OKUACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  PKUACTR_macro A_UNUSED = {0};
A68_VC  QKUACTR_adic A_UNUSED = {0};
A68_55 * RKUACTR_left A_UNUSED = {0};
A68_55 * SKUACTR_right A_UNUSED = {0};
A68_VC  TKUACTR;  /* clause result */
A68_VC  UKUACTR;  /* avoid structure result */
A68_VC  XKUACTR;  /* avoid structure result */
A68_VC  YKUACTR;  /* avoid structure result */
A68_VC  ZKUACTR;  /* avoid structure result */
A68_VC  CLUACTR;  /* avoid structure result */
A68_VC  FLUACTR;  /* avoid structure result */
A68_VC  GLUACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  HLUACTR_body A_UNUSED = {0};
A68_55  ILUACTR;  /* collateral clause result */
A68_56  JLUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55  KLUACTR;  /* clause result */
A_PROC_ENTRY(lesseqgreatereq);
 /* line 553: */
 /* line 555: */
{ 
 /* line 556: */
switch ( (Opnumber-7) )
{ 
case 1: 
 /* line 557: */
ZJUACTR = AKUACTR;
break;
case 2: 
ZJUACTR = CKUACTR;
break;
default: 
(void)(WXIACTR_assert(EKUACTR, A68_FALSE));
 /* line 558: */
ZJUACTR = FKUACTR;
break;
} 
GKUACTR_opsymbol = ZJUACTR;
 /* line 559: */
 /* line 560: */
 /* line 561: */
switch ( (Opnumber-7) )
{ 
case 1: 
 /* line 562: */
IKUACTR = JKUACTR;
break;
case 2: 
IKUACTR = LKUACTR;
break;
default: 
(void)(WXIACTR_assert(NKUACTR, A68_FALSE));
 /* line 563: */
IKUACTR = OKUACTR;
break;
} 
PKUACTR_macro = IKUACTR;
 /* line 564: */
QKUACTR_adic = A_VC_PLUS(IITACTR_modulename,GKUACTR_opsymbol);
 /* line 565: */
(void)(NZQACTR_eval2(Root, (&RKUACTR_left), (&SKUACTR_right)));
 /* line 566: */
 /* line 567: */
 /* line 568: */
switch ( Version )
{ 
case 1: 
 /* line 570: */
OMTACTR_simpledyop( A68_FALSE, GKUACTR_opsymbol, RKUACTR_left, SKUACTR_right, &UKUACTR );
TKUACTR = UKUACTR;
break;
case 2: 
 /* line 571: */
OMTACTR_simpledyop( A68_TRUE, A_VC_PLUS(WKUACTR,PKUACTR_macro), RQQACTR_yield(QKUACTR_adic, RKUACTR_left), RQQACTR_yield(QKUACTR_adic, SKUACTR_right), &XKUACTR );
TKUACTR = XKUACTR;
break;
case 3: 
 /* line 572: */
OMTACTR_simpledyop( A68_FALSE, GKUACTR_opsymbol, RKUACTR_left, SKUACTR_right, &YKUACTR );
TKUACTR = YKUACTR;
break;
case 4: 
 /* line 573: */
OMTACTR_simpledyop( A68_FALSE, GKUACTR_opsymbol, RKUACTR_left, SKUACTR_right, &ZKUACTR );
TKUACTR = ZKUACTR;
break;
case 5: 
 /* line 574: */
OMTACTR_simpledyop( A68_TRUE, A_VC_PLUS(BLUACTR,PKUACTR_macro), RKUACTR_left, SKUACTR_right, &CLUACTR );
TKUACTR = CLUACTR;
break;
case 6: 
 /* line 575: */
OMTACTR_simpledyop( A68_TRUE, A_VC_PLUS(ELUACTR,PKUACTR_macro), RKUACTR_left, SKUACTR_right, &FLUACTR );
TKUACTR = FLUACTR;
break;
default: 
(void)(WXIACTR_assert(A_VC_PLUS(QKUACTR_adic,LITACTR_qvfault), A68_FALSE));
 /* line 576: */
TKUACTR = GLUACTR;
break;
} 
HLUACTR_body = TKUACTR;
 /* line 577: */
 /* line 578: */
ILUACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
 /* line 580: */
ILUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(RKUACTR_left)->Info))))&XKJACTR_fxwarn)|(A68_BITS )((*A_NILCHECK((&(A_NILCHECK(SKUACTR_right)->Info))))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 581: */
ILUACTR.Extra = A_UNITE(JLUACTR,mode6,6,HLUACTR_body);
KLUACTR = ILUACTR;
} 
A_PROC_EXIT(lesseqgreatereq);
*ReturnedValue = (KLUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  OLUACTR_eqnoteq(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_VC  QLUACTR;  /* clause result */
A68_VC  WLUACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  XLUACTR_op A_UNUSED = {0};
A68_VC  ZLUACTR;  /* clause result */
A68_VC  FMUACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  GMUACTR_opmacro A_UNUSED = {0};
A68_VC  HMUACTR_adic A_UNUSED = {0};
A68_55 * IMUACTR_left A_UNUSED = {0};
A68_55 * JMUACTR_right A_UNUSED = {0};
A68_VC  KMUACTR;  /* clause result */
A68_VC  LMUACTR;  /* avoid structure result */
A68_VC  NMUACTR;  /* clause result */
A68_VC  RMUACTR_opmacro A_UNUSED = {0};
A68_125  SMUACTR;  /* OPERATORS - vacuum */
A68_VC  TMUACTR;  /* avoid structure result */
A68_VC  WMUACTR;  /* avoid structure result */
A68_VC  ZMUACTR;  /* avoid structure result */
A68_VC  ANUACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  BNUACTR_body A_UNUSED = {0};
A68_55  CNUACTR;  /* collateral clause result */
A68_56  DNUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55  ENUACTR;  /* clause result */
A_PROC_ENTRY(eqnoteq);
 /* line 584: */
 /* line 586: */
{ 
 /* line 587: */
switch ( (Opnumber-9) )
{ 
case 1: 
 /* line 588: */
QLUACTR = RLUACTR;
break;
case 2: 
QLUACTR = TLUACTR;
break;
default: 
(void)(WXIACTR_assert(VLUACTR, A68_FALSE));
 /* line 589: */
QLUACTR = WLUACTR;
break;
} 
XLUACTR_op = QLUACTR;
 /* line 590: */
 /* line 591: */
 /* line 592: */
switch ( (Opnumber-9) )
{ 
case 1: 
 /* line 593: */
ZLUACTR = AMUACTR;
break;
case 2: 
ZLUACTR = CMUACTR;
break;
default: 
(void)(WXIACTR_assert(EMUACTR, A68_FALSE));
 /* line 594: */
ZLUACTR = FMUACTR;
break;
} 
GMUACTR_opmacro = ZLUACTR;
 /* line 595: */
HMUACTR_adic = A_VC_PLUS(IITACTR_modulename,GMUACTR_opmacro);
 /* line 596: */
 /* line 597: */
(void)(NZQACTR_eval2(Root, (&IMUACTR_left), (&JMUACTR_right)));
 /* line 598: */
 /* line 599: */
 /* line 600: */
if (Version<6)
{ 
 /* line 602: */
OMTACTR_simpledyop( A68_FALSE, XLUACTR_op, IMUACTR_left, JMUACTR_right, &LMUACTR );
KMUACTR = LMUACTR;
} 
else
{ 
 /* line 603: */
if (Version==6)
{ 
 /* line 604: */
if (Opnumber==10)
{ 
 /* line 605: */
NMUACTR = OMUACTR;
} 
else
{ 
NMUACTR = QMUACTR;
} 
RMUACTR_opmacro = NMUACTR;
 /* line 606: */
 /* line 607: */
 /* line 608: */
NCUACTR_complexop( A_VVAC(SMUACTR), RMUACTR_opmacro, A_VC_PLUS(A_VC_PLUS(IITACTR_modulename,XLUACTR_op),ZLTACTR_qcomplex), IMUACTR_left, JMUACTR_right, A68_FALSE, &TMUACTR );
KMUACTR = TMUACTR;
} 
else
{ 
 /* line 609: */
if (Version==7)
{ 
 /* line 611: */
OMTACTR_simpledyop( A68_TRUE, A_VC_PLUS(VMUACTR,GMUACTR_opmacro), IMUACTR_left, JMUACTR_right, &WMUACTR );
KMUACTR = WMUACTR;
} 
else
{ 
 /* line 612: */
if (Version==8)
{ 
 /* line 613: */
OMTACTR_simpledyop( A68_TRUE, A_VC_PLUS(YMUACTR,GMUACTR_opmacro), IMUACTR_left, JMUACTR_right, &ZMUACTR );
KMUACTR = ZMUACTR;
} 
else
{ 
(void)(WXIACTR_assert(A_VC_PLUS(HMUACTR_adic,LITACTR_qvfault), A68_FALSE));
 /* line 614: */
KMUACTR = ANUACTR;
} 
} 
} 
} 
BNUACTR_body = KMUACTR;
 /* line 615: */
 /* line 616: */
CNUACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
 /* line 618: */
CNUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(IMUACTR_left)->Info))))&XKJACTR_fxwarn)|(A68_BITS )((*A_NILCHECK((&(A_NILCHECK(JMUACTR_right)->Info))))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 619: */
CNUACTR.Extra = A_UNITE(DNUACTR,mode6,6,BNUACTR_body);
ENUACTR = CNUACTR;
} 
A_PROC_EXIT(eqnoteq);
*ReturnedValue = (ENUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  INUACTR_times(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * JNUACTR_left A_UNUSED = {0};
A68_55 * KNUACTR_right A_UNUSED = {0};
A68_VC  MNUACTR;  /* clause result */
A68_VC  ONUACTR;  /* avoid structure result */
A68_VC  RNUACTR;  /* avoid structure result */
A68_VC  SNUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  TNUACTR;  /* avoid structure result */
A68_VC  UNUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  VNUACTR;  /* avoid structure result */
A68_125  YNUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ZNUACTR;  /* avoid structure result */
A68_VC  COUACTR;  /* avoid structure result */
A68_VC  FOUACTR;  /* avoid structure result */
A68_VC  IOUACTR;  /* avoid structure result */
A68_VC  LOUACTR;  /* avoid structure result */
A68_VC  MOUACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  NOUACTR_body A_UNUSED = {0};
A68_55  OOUACTR;  /* collateral clause result */
A68_56  POUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55  QOUACTR;  /* clause result */
A_PROC_ENTRY(times);
 /* line 622: */
 /* line 623: */
{ 
(void)(NZQACTR_eval2(Root, (&JNUACTR_left), (&KNUACTR_right)));
 /* line 624: */
 /* line 625: */
 /* line 626: */
switch ( Version )
{ 
case 1: 
 /* line 627: */
if (WOMACTR_isint((*A_NILCHECK((&(A_NILCHECK(JNUACTR_left)->Mode))))))
{ 
 /* line 628: */
OMTACTR_simpledyop( A68_TRUE, NNUACTR, KNUACTR_right, JNUACTR_left, &ONUACTR );
MNUACTR = ONUACTR;
} 
else
{ 
 /* line 629: */
 /* line 630: */
OMTACTR_simpledyop( A68_TRUE, QNUACTR, JNUACTR_left, KNUACTR_right, &RNUACTR );
MNUACTR = RNUACTR;
} 
break;
case 2: 
 /* line 631: */
OMTACTR_simpledyop( A68_FALSE, A_HVEC(SNUACTR,'*',A68_CHAR ), JNUACTR_left, KNUACTR_right, &TNUACTR );
MNUACTR = TNUACTR;
break;
case 3: 
 /* line 632: */
OMTACTR_simpledyop( A68_FALSE, A_HVEC(UNUACTR,'*',A68_CHAR ), JNUACTR_left, KNUACTR_right, &VNUACTR );
MNUACTR = VNUACTR;
break;
case 4: 
 /* line 633: */
 /* line 634: */
NCUACTR_complexop( A_HVEC(YNUACTR,(*A_NILCHECK((&(A_NILCHECK(Root)->Mode)))),A68_INT ), XNUACTR, A_VC_PLUS(DKTACTR_qtimes,ZLTACTR_qcomplex), JNUACTR_left, KNUACTR_right, A68_FALSE, &ZNUACTR );
MNUACTR = ZNUACTR;
break;
case 5: 
 /* line 635: */
if (WOMACTR_isint((*A_NILCHECK((&(A_NILCHECK(JNUACTR_left)->Mode))))))
{ 
 /* line 636: */
OMTACTR_simpledyop( A68_TRUE, BOUACTR, KNUACTR_right, JNUACTR_left, &COUACTR );
MNUACTR = COUACTR;
} 
else
{ 
 /* line 637: */
 /* line 638: */
OMTACTR_simpledyop( A68_TRUE, EOUACTR, JNUACTR_left, KNUACTR_right, &FOUACTR );
MNUACTR = FOUACTR;
} 
break;
case 6: 
 /* line 639: */
if (WOMACTR_isint((*A_NILCHECK((&(A_NILCHECK(JNUACTR_left)->Mode))))))
{ 
 /* line 640: */
OMTACTR_simpledyop( A68_TRUE, HOUACTR, KNUACTR_right, JNUACTR_left, &IOUACTR );
MNUACTR = IOUACTR;
} 
else
{ 
 /* line 641: */
 /* line 642: */
OMTACTR_simpledyop( A68_TRUE, KOUACTR, JNUACTR_left, KNUACTR_right, &LOUACTR );
MNUACTR = LOUACTR;
} 
break;
default: 
(void)(WXIACTR_assert(A_VC_PLUS(DKTACTR_qtimes,LITACTR_qvfault), A68_FALSE));
 /* line 643: */
MNUACTR = MOUACTR;
break;
} 
NOUACTR_body = MNUACTR;
 /* line 644: */
 /* line 645: */
OOUACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
 /* line 647: */
OOUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(JNUACTR_left)->Info))))&XKJACTR_fxwarn)|(A68_BITS )((*A_NILCHECK((&(A_NILCHECK(KNUACTR_right)->Info))))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 648: */
OOUACTR.Extra = A_UNITE(POUACTR,mode6,6,NOUACTR_body);
QOUACTR = OOUACTR;
} 
A_PROC_EXIT(times);
*ReturnedValue = (QOUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  UOUACTR_divide(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * VOUACTR_left A_UNUSED = {0};
A68_55 * WOUACTR_right A_UNUSED = {0};
A68_VC  XOUACTR;  /* avoid structure result */
A68_VC  YOUACTR_widen A_UNUSED = {0};
A68_VC  ZOUACTR;  /* clause result */
A68_VC  APUACTR;  /* avoid structure result */
A68_VC  BPUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  CPUACTR;  /* avoid structure result */
A68_VC  DPUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  EPUACTR;  /* avoid structure result */
A68_217  FPUACTR;  /* collateral clause result */
A68_125  IPUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  JPUACTR;  /* avoid structure result */
A68_VC  KPUACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  LPUACTR_body A_UNUSED = {0};
A68_55  MPUACTR;  /* collateral clause result */
A68_56  NPUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55  OPUACTR;  /* clause result */
A_PROC_ENTRY(divide);
 /* line 651: */
 /* line 652: */
{ 
(void)(NZQACTR_eval2(Root, (&VOUACTR_left), (&WOUACTR_right)));
 /* line 653: */
 /* line 654: */
 /* line 655: */
switch ( Version )
{ 
case 1: 
 /* line 656: */
{ 
FLNACTR_cast( ((*A_NILCHECK((&(A_NILCHECK(VOUACTR_left)->Mode))))+4), &XOUACTR );
YOUACTR_widen = XOUACTR;
 /* line 657: */
 /* line 658: */
 /* line 659: */
 /* line 660: */
JEQACTR_bracketcfragment( VOUACTR_left, &APUACTR );
JEQACTR_bracketcfragment( WOUACTR_right, &CPUACTR );
ZOUACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(YOUACTR_widen,APUACTR),A_HVEC(BPUACTR,'/',A68_CHAR )),YOUACTR_widen),CPUACTR);
} 
break;
case 2: 
 /* line 661: */
OMTACTR_simpledyop( A68_FALSE, A_HVEC(DPUACTR,'/',A68_CHAR ), VOUACTR_left, WOUACTR_right, &EPUACTR );
ZOUACTR = EPUACTR;
break;
case 3: 
FPUACTR.data[0] = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
FPUACTR.data[1] = ((*A_NILCHECK((&(A_NILCHECK(Root)->Mode))))-4);
 /* line 662: */
 /* line 663: */
 /* line 664: */
NCUACTR_complexop( A_HISVEC(IPUACTR,FPUACTR,2,A68_INT ), HPUACTR, A_VC_PLUS(GKTACTR_qdiv,ZLTACTR_qcomplex), VOUACTR_left, WOUACTR_right, A68_FALSE, &JPUACTR );
ZOUACTR = JPUACTR;
break;
default: 
{ 
(void)(WXIACTR_assert(A_VC_PLUS(GKTACTR_qdiv,LITACTR_qvfault), A68_FALSE));
 /* line 665: */
ZOUACTR = KPUACTR;
} 
break;
} 
LPUACTR_body = ZOUACTR;
 /* line 666: */
 /* line 667: */
MPUACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
 /* line 669: */
MPUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(VOUACTR_left)->Info))))&XKJACTR_fxwarn)|(A68_BITS )((*A_NILCHECK((&(A_NILCHECK(WOUACTR_right)->Info))))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 670: */
MPUACTR.Extra = A_UNITE(NPUACTR,mode6,6,LPUACTR_body);
OPUACTR = MPUACTR;
} 
A_PROC_EXIT(divide);
*ReturnedValue = (OPUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  SPUACTR_over(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * TPUACTR_left A_UNUSED = {0};
A68_55 * UPUACTR_right A_UNUSED = {0};
A68_55  VPUACTR;  /* collateral clause result */
A68_VC  WPUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XPUACTR;  /* avoid structure result */
A68_56  YPUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_56  ZPUACTR = {0};  /* OPERATORS - skip to mode */
A68_55  AQUACTR;  /* clause result */
A_PROC_ENTRY(over);
 /* line 673: */
 /* line 674: */
{ 
(void)(NZQACTR_eval2(Root, (&TPUACTR_left), (&UPUACTR_right)));
 /* line 675: */
 /* line 676: */
VPUACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
 /* line 677: */
VPUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(TPUACTR_left)->Info))))&XKJACTR_fxwarn)|(A68_BITS )((*A_NILCHECK((&(A_NILCHECK(UPUACTR_right)->Info))))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 678: */
if (Version==1)
{ 
 /* line 679: */
OMTACTR_simpledyop( A68_FALSE, A_HVEC(WPUACTR,'/',A68_CHAR ), TPUACTR_left, UPUACTR_right, &XPUACTR );
VPUACTR.Extra = A_UNITE(YPUACTR,mode6,6,XPUACTR);
} 
else
{ 
(void)(WXIACTR_assert(A_VC_PLUS(JKTACTR_qover,LITACTR_qvfault), A68_FALSE));
 /* line 680: */
 /* line 681: */
 /* line 682: */
VPUACTR.Extra = ZPUACTR;
} 
AQUACTR = VPUACTR;
} 
A_PROC_EXIT(over);
*ReturnedValue = (AQUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  EQUACTR_mod(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * FQUACTR_left A_UNUSED = {0};
A68_55 * GQUACTR_right A_UNUSED = {0};
A68_55  HQUACTR;  /* collateral clause result */
A68_59  IQUACTR;  /* avoid structure result */
A68_VC  JQUACTR;  /* OPERATORS - istruct -> vector */
A68_64  KQUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  LQUACTR_temp A_UNUSED = {0};
A68_203  NQUACTR;  /* collateral clause result */
A68_169  OQUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55 * PQUACTR;  /* YIELD */
A68_169  QQUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55 * RQUACTR;  /* YIELD */
A68_169  SQUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_172  TQUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  VQUACTR;  /* avoid structure result */
A68_56  WQUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_56  XQUACTR = {0};  /* OPERATORS - skip to mode */
A68_55  YQUACTR;  /* clause result */
A_PROC_ENTRY(mod);
 /* line 685: */
 /* line 686: */
{ 
 /* line 687: */
(void)(NZQACTR_eval2(Root, (&FQUACTR_left), (&GQUACTR_right)));
 /* line 688: */
 /* line 689: */
HQUACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
 /* line 690: */
HQUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(FQUACTR_left)->Info))))&XKJACTR_fxwarn)|(A68_BITS )((*A_NILCHECK((&(A_NILCHECK(GQUACTR_right)->Info))))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 691: */
if (Version==1)
{ 
QMOACTR_declarectemporary( (*A_NILCHECK((&(A_NILCHECK(FQUACTR_left)->Mode)))), MKTACTR_qmod, &IQUACTR );
KQUACTR = IQUACTR.Name ;
LQUACTR_temp = A_HISVEC(JQUACTR,KQUACTR,7,A68_CHAR );
 /* line 692: */
PQUACTR = RQQACTR_yield(MKTACTR_qmod, FQUACTR_left) ;
NQUACTR.data[0] = A_UNITE(OQUACTR,mode1,1,PQUACTR);
RQUACTR = RQQACTR_yield(MKTACTR_qmod, GQUACTR_right) ;
NQUACTR.data[1] = A_UNITE(QQUACTR,mode1,1,RQUACTR);
NQUACTR.data[2] = A_UNITE(SQUACTR,mode2,2,LQUACTR_temp);
 /* line 693: */
APQACTR_usemacro( UQUACTR, A_HISVEC(TQUACTR,NQUACTR,3,A68_169 ), &VQUACTR );
HQUACTR.Extra = A_UNITE(WQUACTR,mode6,6,VQUACTR);
} 
else
{ 
(void)(WXIACTR_assert(A_VC_PLUS(MKTACTR_qmod,LITACTR_qvfault), A68_FALSE));
 /* line 694: */
 /* line 695: */
 /* line 696: */
HQUACTR.Extra = XQUACTR;
} 
YQUACTR = HQUACTR;
} 
A_PROC_EXIT(mod);
*ReturnedValue = (YQUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  CRUACTR_power(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * DRUACTR_left A_UNUSED = {0};
A68_55 * ERUACTR_right A_UNUSED = {0};
A68_INT  FRUACTR_m A_UNUSED = {0};
A68_VC  IRUACTR;  /* avoid structure result */
A68_55  JRUACTR;  /* collateral clause result */
A68_203  LRUACTR;  /* collateral clause result */
A68_169  MRUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55 * NRUACTR;  /* YIELD */
A68_169  ORUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55 * PRUACTR;  /* YIELD */
A68_VC  QRUACTR;  /* avoid structure result */
A68_169  RRUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_172  SRUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  URUACTR;  /* avoid structure result */
A68_56  VRUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_203  XRUACTR;  /* collateral clause result */
A68_169  YRUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55 * ZRUACTR;  /* YIELD */
A68_169  ASUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55 * BSUACTR;  /* YIELD */
A68_VC  CSUACTR;  /* avoid structure result */
A68_169  DSUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_172  ESUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  GSUACTR;  /* avoid structure result */
A68_56  HSUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ISUACTR_name A_UNUSED = {0};
A68_192  KSUACTR;  /* collateral clause result */
A68_169  LSUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55 * MSUACTR;  /* YIELD */
A68_169  NSUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55 * OSUACTR;  /* YIELD */
A68_172  PSUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  RSUACTR;  /* avoid structure result */
A68_56  SSUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_56  TSUACTR = {0};  /* OPERATORS - skip to mode */
A68_55  USUACTR;  /* clause result */
A_PROC_ENTRY(power);
 /* line 699: */
 /* line 700: */
{ 
(void)(NZQACTR_eval2(Root, (&DRUACTR_left), (&ERUACTR_right)));
 /* line 701: */
FRUACTR_m = (*A_NILCHECK((&(A_NILCHECK(DRUACTR_left)->Mode))));
 /* line 702: */
 /* line 703: */
ROAAOSF_whole( FRUACTR_m, 0, &IRUACTR );
(void)(WXIACTR_assert(A_VC_PLUS(A_VC_PLUS(PKTACTR_qpower,HRUACTR),IRUACTR), ((FRUACTR_m<=21)&(FRUACTR_m>=14))));
 /* line 704: */
 /* line 705: */
JRUACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
 /* line 706: */
JRUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(DRUACTR_left)->Info))))&XKJACTR_fxwarn)|(A68_BITS )((*A_NILCHECK((&(A_NILCHECK(ERUACTR_right)->Info))))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 707: */
 /* line 708: */
if (Version==1)
{ 
NRUACTR = RQQACTR_yield(PKTACTR_qpower, DRUACTR_left) ;
LRUACTR.data[0] = A_UNITE(MRUACTR,mode1,1,NRUACTR);
PRUACTR = RQQACTR_yield(PKTACTR_qpower, ERUACTR_right) ;
LRUACTR.data[1] = A_UNITE(ORUACTR,mode1,1,PRUACTR);
FLNACTR_cast( FRUACTR_m, &QRUACTR );
LRUACTR.data[2] = A_UNITE(RRUACTR,mode2,2,QRUACTR);
 /* line 709: */
APQACTR_usemacro( TRUACTR, A_HISVEC(SRUACTR,LRUACTR,3,A68_169 ), &URUACTR );
JRUACTR.Extra = A_UNITE(VRUACTR,mode6,6,URUACTR);
} 
else
{ 
 /* line 710: */
 /* line 711: */
if (Version==2)
{ 
ZRUACTR = RQQACTR_yield(PKTACTR_qpower, DRUACTR_left) ;
XRUACTR.data[0] = A_UNITE(YRUACTR,mode1,1,ZRUACTR);
BSUACTR = RQQACTR_yield(PKTACTR_qpower, ERUACTR_right) ;
XRUACTR.data[1] = A_UNITE(ASUACTR,mode1,1,BSUACTR);
FLNACTR_cast( FRUACTR_m, &CSUACTR );
XRUACTR.data[2] = A_UNITE(DSUACTR,mode2,2,CSUACTR);
 /* line 712: */
APQACTR_usemacro( FSUACTR, A_HISVEC(ESUACTR,XRUACTR,3,A68_169 ), &GSUACTR );
JRUACTR.Extra = A_UNITE(HSUACTR,mode6,6,GSUACTR);
} 
else
{ 
 /* line 713: */
if (Version==3)
{ 
ISUACTR_name = A_VC_PLUS(PKTACTR_qpower,ZLTACTR_qcomplex);
 /* line 714: */
MSUACTR = RQQACTR_yield(ISUACTR_name, DRUACTR_left) ;
KSUACTR.data[0] = A_UNITE(LSUACTR,mode1,1,MSUACTR);
OSUACTR = RQQACTR_yield(ISUACTR_name, ERUACTR_right) ;
KSUACTR.data[1] = A_UNITE(NSUACTR,mode1,1,OSUACTR);
 /* line 715: */
APQACTR_usemacro( QSUACTR, A_HISVEC(PSUACTR,KSUACTR,2,A68_169 ), &RSUACTR );
JRUACTR.Extra = A_UNITE(SSUACTR,mode6,6,RSUACTR);
} 
else
{ 
(void)(WXIACTR_assert(A_VC_PLUS(PKTACTR_qpower,LITACTR_qvfault), A68_FALSE));
 /* line 716: */
 /* line 717: */
 /* line 718: */
JRUACTR.Extra = TSUACTR;
} 
} 
} 
USUACTR = JRUACTR;
} 
A_PROC_EXIT(power);
*ReturnedValue = (USUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  XSUACTR_castvalue(A68_INT  Mode, A68_55 * Value, A68_VC  *ReturnedValue)
{ 
A68_VC  YSUACTR;  /* clause result */
A68_VC  ZSUACTR;  /* avoid structure result */
A68_VC  ATUACTR;  /* avoid structure result */
A_PROC_ENTRY(castvalue);
 /* line 722: */
FLNACTR_cast( Mode, &ZSUACTR );
JEQACTR_bracketcfragment( Value, &ATUACTR );
YSUACTR = A_VC_PLUS(ZSUACTR,ATUACTR);
A_PROC_EXIT(castvalue);
*ReturnedValue = (YSUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ETUACTR_imaginary(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * FTUACTR_left A_UNUSED = {0};
A68_55 * GTUACTR_right A_UNUSED = {0};
A68_INT  HTUACTR_m A_UNUSED = {0};
A68_59  ITUACTR;  /* avoid structure result */
A68_59  JTUACTR_temp A_UNUSED = {0};
A68_55  KTUACTR;  /* collateral clause result */
A68_203  MTUACTR;  /* collateral clause result */
A68_169  NTUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  OTUACTR;  /* avoid structure result */
A68_169  PTUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  QTUACTR;  /* avoid structure result */
A68_169  RTUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_172  STUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  UTUACTR;  /* avoid structure result */
A68_56  VTUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_203  XTUACTR;  /* collateral clause result */
A68_169  YTUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_169  ZTUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_169  AUUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_172  BUUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  DUUACTR;  /* avoid structure result */
A68_56  EUUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55  FUUACTR;  /* clause result */
A_PROC_ENTRY(imaginary);
 /* line 725: */
 /* line 726: */
{ 
 /* line 727: */
(void)(NZQACTR_eval2(Root, (&FTUACTR_left), (&GTUACTR_right)));
 /* line 728: */
HTUACTR_m = ((*A_NILCHECK((&(A_NILCHECK(Root)->Mode))))-4);
 /* line 729: */
A_CALLPROC(TMOACTR_new,((*A_NILCHECK((&(A_NILCHECK(Root)->Mode)))), UJTACTR_qi, &ITUACTR),((*A_NILCHECK((&(A_NILCHECK(Root)->Mode)))), UJTACTR_qi, &ITUACTR,(TMOACTR_new).nonlocals));
JTUACTR_temp = ITUACTR;
 /* line 730: */
 /* line 731: */
KTUACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
 /* line 732: */
KTUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(FTUACTR_left)->Info))))&XKJACTR_fxwarn)|(A68_BITS )((*A_NILCHECK((&(A_NILCHECK(GTUACTR_right)->Info))))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 733: */
if (Version==1)
{ 
 /* line 734: */
MTUACTR.data[0] = A_UNITE(NTUACTR,mode3,3,JTUACTR_temp);
XSUACTR_castvalue( HTUACTR_m, FTUACTR_left, &OTUACTR );
MTUACTR.data[1] = A_UNITE(PTUACTR,mode2,2,OTUACTR);
XSUACTR_castvalue( HTUACTR_m, GTUACTR_right, &QTUACTR );
MTUACTR.data[2] = A_UNITE(RTUACTR,mode2,2,QTUACTR);
 /* line 735: */
APQACTR_usemacro( TTUACTR, A_HISVEC(STUACTR,MTUACTR,3,A68_169 ), &UTUACTR );
KTUACTR.Extra = A_UNITE(VTUACTR,mode6,6,UTUACTR);
} 
else
{ 
XTUACTR.data[0] = A_UNITE(YTUACTR,mode3,3,JTUACTR_temp);
XTUACTR.data[1] = A_UNITE(ZTUACTR,mode1,1,FTUACTR_left);
XTUACTR.data[2] = A_UNITE(AUUACTR,mode1,1,GTUACTR_right);
 /* line 736: */
 /* line 737: */
 /* line 738: */
APQACTR_usemacro( CUUACTR, A_HISVEC(BUUACTR,XTUACTR,3,A68_169 ), &DUUACTR );
KTUACTR.Extra = A_UNITE(EUUACTR,mode6,6,DUUACTR);
} 
FUUACTR = KTUACTR;
} 
A_PROC_EXIT(imaginary);
*ReturnedValue = (FUUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  JUUACTR_shiftleftright(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_VC  LUUACTR;  /* clause result */
A68_VC  RUUACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  SUUACTR_op A_UNUSED = {0};
A68_VC  TUUACTR_adic A_UNUSED = {0};
A68_55 * UUUACTR_left A_UNUSED = {0};
A68_55 * VUUACTR_right A_UNUSED = {0};
A68_55  WUUACTR;  /* collateral clause result */
A68_VC  ZUUACTR;  /* avoid structure result */
A68_56  AVUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_56  BVUACTR = {0};  /* OPERATORS - skip to mode */
A68_55  CVUACTR;  /* clause result */
A_PROC_ENTRY(shiftleftright);
 /* line 741: */
 /* line 743: */
{ 
 /* line 744: */
switch ( (Opnumber-17) )
{ 
case 1: 
 /* line 745: */
LUUACTR = MUUACTR;
break;
case 2: 
LUUACTR = OUUACTR;
break;
default: 
(void)(WXIACTR_assert(QUUACTR, A68_FALSE));
 /* line 746: */
LUUACTR = RUUACTR;
break;
} 
SUUACTR_op = LUUACTR;
 /* line 747: */
TUUACTR_adic = A_VC_PLUS(IITACTR_modulename,SUUACTR_op);
 /* line 748: */
 /* line 749: */
(void)(NZQACTR_eval2(Root, (&UUUACTR_left), (&VUUACTR_right)));
 /* line 750: */
 /* line 751: */
WUUACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
 /* line 752: */
WUUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(UUUACTR_left)->Info))))&XKJACTR_fxwarn)|(A68_BITS )((*A_NILCHECK((&(A_NILCHECK(VUUACTR_right)->Info))))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 753: */
if (Version==1)
{ 
 /* line 754: */
OMTACTR_simpledyop( A68_TRUE, A_VC_PLUS(YUUACTR,SUUACTR_op), RQQACTR_yield(SUUACTR_op, UUUACTR_left), RQQACTR_yield(SUUACTR_op, VUUACTR_right), &ZUUACTR );
WUUACTR.Extra = A_UNITE(AVUACTR,mode6,6,ZUUACTR);
} 
else
{ 
(void)(WXIACTR_assert(A_VC_PLUS(TUUACTR_adic,LITACTR_qvfault), A68_FALSE));
 /* line 755: */
 /* line 756: */
 /* line 757: */
WUUACTR.Extra = BVUACTR;
} 
CVUACTR = WUUACTR;
} 
A_PROC_EXIT(shiftleftright);
*ReturnedValue = (CVUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  GVUACTR_elem(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * HVUACTR_left A_UNUSED = {0};
A68_55 * IVUACTR_right A_UNUSED = {0};
A68_INT  JVUACTR_m A_UNUSED = {0};
A68_207  LVUACTR;  /* collateral clause result */
A68_169  MVUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55 * NVUACTR;  /* YIELD */
A68_169  OVUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  PVUACTR;  /* avoid structure result */
A68_169  QVUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  RVUACTR;  /* avoid structure result */
A68_169  SVUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  TVUACTR;  /* clause result */
A68_172  UVUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  WVUACTR;  /* avoid structure result */
A68_VC  XVUACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  YVUACTR_body A_UNUSED = {0};
A68_55  ZVUACTR;  /* collateral clause result */
A68_56  AWUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55  BWUACTR;  /* clause result */
A_PROC_ENTRY(elem);
 /* line 760: */
 /* line 761: */
{ 
(void)(NZQACTR_eval2(Root, (&HVUACTR_left), (&IVUACTR_right)));
 /* line 762: */
 /* line 763: */
 /* line 766: */
if (Version==1)
{ 
JVUACTR_m = (*A_NILCHECK((&(A_NILCHECK(IVUACTR_right)->Mode))));
 /* line 767: */
 /* line 768: */
 /* line 769: */
NVUACTR = RQQACTR_yield(SKTACTR_qelem, HVUACTR_left) ;
LVUACTR.data[0] = A_UNITE(MVUACTR,mode1,1,NVUACTR);
LVUACTR.data[1] = A_UNITE(OVUACTR,mode1,1,IVUACTR_right);
FLNACTR_cast( JVUACTR_m, &PVUACTR );
LVUACTR.data[2] = A_UNITE(QVUACTR,mode2,2,PVUACTR);
 /* line 770: */
KLNACTR_csizeof( JVUACTR_m, &RVUACTR );
LVUACTR.data[3] = A_UNITE(SVUACTR,mode2,2,RVUACTR);
 /* line 771: */
APQACTR_usemacro( VVUACTR, A_HISVEC(UVUACTR,LVUACTR,4,A68_169 ), &WVUACTR );
TVUACTR = WVUACTR;
} 
else
{ 
(void)(WXIACTR_assert(A_VC_PLUS(SKTACTR_qelem,LITACTR_qvfault), A68_FALSE));
 /* line 772: */
TVUACTR = XVUACTR;
} 
YVUACTR_body = TVUACTR;
 /* line 773: */
ZVUACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
ZVUACTR.Info = PKJACTR_defaultinfo;
 /* line 774: */
ZVUACTR.Extra = A_UNITE(AWUACTR,mode6,6,YVUACTR_body);
BWUACTR = ZVUACTR;
} 
A_PROC_EXIT(elem);
*ReturnedValue = (BWUACTR);
return;
} 
#undef NL

A_STATIC A68_BITS  EWUACTR_abattribute(A68_BOOL  Noref, A68_55 * Op)
{ 
A68_BITS  FWUACTR;  /* clause result */
A_PROC_ENTRY(abattribute);
 /* line 788: */
 /* line 789: */
 /* line 791: */
if (IWPACTR_hasattribute(Op, TKJACTR_nonloc))
{ 
 /* line 792: */
FWUACTR = (A68_BITS )(TKJACTR_nonloc|XKJACTR_fxwarn);
} 
else
{ 
 /* line 793: */
if (Noref)
{ 
 /* line 794: */
 /* line 798: */
FWUACTR = (A68_BITS )(SKJACTR_effects|XKJACTR_fxwarn);
} 
else
{ 
 /* line 799: */
 /* line 800: */
FWUACTR = (A68_BITS )(RKJACTR_atomic|XKJACTR_fxwarn);
} 
} 
A_PROC_EXIT(abattribute);
return( FWUACTR );
} 
#undef NL
 /* line 807: */
 /* line 808: */
 /* line 809: */
 /* line 810: */

A_STATIC A68_VOID  LWUACTR_simpleabop(A68_BOOL  Noref, A68_BOOL  Macro, A68_VC  Oper, A68_55 * Left, A68_55 * Right, A68_56  *ReturnedValue)
{ 
A68_55 * MWUACTR_lhs A_UNUSED = {0};
A68_192  NWUACTR;  /* collateral clause result */
A68_169  OWUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_169  PWUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  QWUACTR;  /* clause result */
A68_172  RWUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  SWUACTR;  /* avoid structure result */
A68_VC  TWUACTR;  /* avoid structure result */
A68_VC  UWUACTR;  /* avoid structure result */
A68_VC  VWUACTR_body A_UNUSED = {0};
A68_56  WWUACTR;  /* clause result */
A68_56  XWUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_192  YWUACTR;  /* collateral clause result */
A68_169  ZWUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_169  CXUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  DXUACTR;  /* YIELD */
A68_172  EXUACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(simpleabop);
 /* line 811: */
 /* line 812: */
{ 
MWUACTR_lhs = GQQACTR_yield(Left);
 /* line 813: */
(void)(PKAAOSF_orab((&(A_NILCHECK(MWUACTR_lhs)->Info)), VKJACTR_lvalue));
 /* line 814: */
 /* line 815: */
 /* line 816: */
if (Macro)
{ 
NWUACTR.data[0] = A_UNITE(OWUACTR,mode1,1,MWUACTR_lhs);
NWUACTR.data[1] = A_UNITE(PWUACTR,mode1,1,Right);
 /* line 817: */
APQACTR_usemacro( Oper, A_HISVEC(RWUACTR,NWUACTR,2,A68_169 ), &SWUACTR );
QWUACTR = SWUACTR;
} 
else
{ 
 /* line 818: */
JEQACTR_bracketcfragment( MWUACTR_lhs, &TWUACTR );
JEQACTR_bracketcfragment( Right, &UWUACTR );
QWUACTR = A_VC_PLUS(A_VC_PLUS(TWUACTR,Oper),UWUACTR);
} 
VWUACTR_body = QWUACTR;
 /* line 819: */
 /* line 820: */
 /* line 821: */
if (Noref)
{ 
WWUACTR = A_UNITE(XWUACTR,mode6,6,VWUACTR_body);
} 
else
{ 
YWUACTR.data[0] = A_UNITE(ZWUACTR,mode2,2,VWUACTR_body);
DXUACTR = BXUACTR ;
YWUACTR.data[1] = A_UNITE(CXUACTR,mode2,2,DXUACTR);
(void)(FPQACTR_emitline(A_HISVEC(EXUACTR,YWUACTR,2,A68_169 )));
 /* line 822: */
 /* line 823: */
WWUACTR = (*A_NILCHECK((&(A_NILCHECK(MWUACTR_lhs)->Extra))));
} 
} 
A_PROC_EXIT(simpleabop);
*ReturnedValue = (WWUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  IXUACTR_plusab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * JXUACTR_left A_UNUSED = {0};
A68_55 * KXUACTR_right A_UNUSED = {0};
A68_BOOL  LXUACTR_opt A_UNUSED = {0};
A68_56  NXUACTR;  /* clause result */
A68_56  PXUACTR;  /* avoid structure result */
A68_56  SXUACTR;  /* avoid structure result */
A68_125  VXUACTR;  /* OPERATORS - vacuum */
A68_VC  WXUACTR;  /* avoid structure result */
A68_56  XXUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_56  AYUACTR;  /* avoid structure result */
A68_56  DYUACTR;  /* avoid structure result */
A68_56  EYUACTR = {0};  /* OPERATORS - skip to mode */
A68_56  FYUACTR_body A_UNUSED = {0};
A68_55  GYUACTR;  /* collateral clause result */
A68_55  HYUACTR;  /* clause result */
A_PROC_ENTRY(plusab);
 /* line 827: */
 /* line 828: */
{ 
 /* line 829: */
(void)(VYQACTR_eval_pass_left(Root, (&JXUACTR_left), VKJACTR_lvalue));
 /* line 830: */
(void)(EZQACTR_eval_pass_right(Root, (&KXUACTR_right), PKJACTR_defaultinfo));
 /* line 831: */
LXUACTR_opt = IWPACTR_hasattribute(Root, UKJACTR_voided);
 /* line 832: */
 /* line 833: */
 /* line 834: */
switch ( Version )
{ 
case 1: 
 /* line 835: */
LWUACTR_simpleabop( LXUACTR_opt, A68_FALSE, OXUACTR, JXUACTR_left, KXUACTR_right, &PXUACTR );
NXUACTR = PXUACTR;
break;
case 2: 
 /* line 836: */
LWUACTR_simpleabop( LXUACTR_opt, A68_FALSE, RXUACTR, JXUACTR_left, KXUACTR_right, &SXUACTR );
NXUACTR = SXUACTR;
break;
case 3: 
 /* line 837: */
 /* line 838: */
NCUACTR_complexop( A_VVAC(VXUACTR), UXUACTR, A_VC_PLUS(VKTACTR_qplusab,ZLTACTR_qcomplex), JXUACTR_left, KXUACTR_right, A68_TRUE, &WXUACTR );
NXUACTR = A_UNITE(XXUACTR,mode6,6,WXUACTR);
break;
case 4: 
 /* line 839: */
LWUACTR_simpleabop( LXUACTR_opt, A68_TRUE, ZXUACTR, JXUACTR_left, KXUACTR_right, &AYUACTR );
NXUACTR = AYUACTR;
break;
case 5: 
 /* line 840: */
LWUACTR_simpleabop( LXUACTR_opt, A68_TRUE, CYUACTR, JXUACTR_left, KXUACTR_right, &DYUACTR );
NXUACTR = DYUACTR;
break;
default: 
(void)(WXIACTR_assert(A_VC_PLUS(VKTACTR_qplusab,LITACTR_qvfault), A68_FALSE));
 /* line 841: */
NXUACTR = EYUACTR;
break;
} 
FYUACTR_body = NXUACTR;
 /* line 842: */
GYUACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
GYUACTR.Info = EWUACTR_abattribute(LXUACTR_opt, JXUACTR_left);
 /* line 843: */
GYUACTR.Extra = FYUACTR_body;
HYUACTR = GYUACTR;
} 
A_PROC_EXIT(plusab);
*ReturnedValue = (HYUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  LYUACTR_plusto(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * MYUACTR_left A_UNUSED = {0};
A68_55 * NYUACTR_right A_UNUSED = {0};
A68_BOOL  OYUACTR_opt A_UNUSED = {0};
A68_56  SYUACTR;  /* clause result */
A68_56  UYUACTR;  /* avoid structure result */
A68_56  ZYUACTR;  /* avoid structure result */
A68_56  AZUACTR = {0};  /* OPERATORS - skip to mode */
A68_56  BZUACTR_body A_UNUSED = {0};
A68_55  CZUACTR;  /* collateral clause result */
A68_55  DZUACTR;  /* clause result */
A_PROC_ENTRY(plusto);
 /* line 846: */
 /* line 847: */
{ 
 /* line 848: */
(void)(VYQACTR_eval_pass_left(Root, (&MYUACTR_left), PKJACTR_defaultinfo));
 /* line 849: */
(void)(EZQACTR_eval_pass_right(Root, (&NYUACTR_right), VKJACTR_lvalue));
 /* line 850: */
OYUACTR_opt = IWPACTR_hasattribute(Root, UKJACTR_voided);
 /* line 851: */
 /* line 852: */
 /* line 854: */
switch ( Version )
{ 
case 1: 
{ 
 /* line 855: */
(void)(WXIACTR_assert(A_VC_PLUS(YKTACTR_qplusto,QYUACTR), (EQMACTR_isflexvec((*A_NILCHECK((&(A_NILCHECK(NYUACTR_right)->Mode)))))&PPMACTR_isvec((*A_NILCHECK((&(A_NILCHECK(MYUACTR_left)->Mode))))))));
 /* line 856: */
 /* line 857: */
 /* line 859: */
LWUACTR_simpleabop( OYUACTR_opt, A68_TRUE, TYUACTR, NYUACTR_right, MYUACTR_left, &UYUACTR );
SYUACTR = UYUACTR;
} 
break;
case 2: 
{ 
 /* line 860: */
(void)(WXIACTR_assert(A_VC_PLUS(YKTACTR_qplusto,WYUACTR), (IQMACTR_isflexrow((*A_NILCHECK((&(A_NILCHECK(NYUACTR_right)->Mode)))))&TPMACTR_isrow((*A_NILCHECK((&(A_NILCHECK(MYUACTR_left)->Mode))))))));
 /* line 861: */
 /* line 862: */
 /* line 863: */
LWUACTR_simpleabop( OYUACTR_opt, A68_TRUE, YYUACTR, NYUACTR_right, MYUACTR_left, &ZYUACTR );
SYUACTR = ZYUACTR;
} 
break;
default: 
(void)(WXIACTR_assert(A_VC_PLUS(YKTACTR_qplusto,LITACTR_qvfault), A68_FALSE));
 /* line 864: */
SYUACTR = AZUACTR;
break;
} 
BZUACTR_body = SYUACTR;
 /* line 865: */
CZUACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
CZUACTR.Info = EWUACTR_abattribute(OYUACTR_opt, MYUACTR_left);
 /* line 866: */
CZUACTR.Extra = BZUACTR_body;
DZUACTR = CZUACTR;
} 
A_PROC_EXIT(plusto);
*ReturnedValue = (DZUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HZUACTR_minusab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * IZUACTR_left A_UNUSED = {0};
A68_55 * JZUACTR_right A_UNUSED = {0};
A68_BOOL  KZUACTR_opt A_UNUSED = {0};
A68_56  MZUACTR;  /* clause result */
A68_56  OZUACTR;  /* avoid structure result */
A68_125  RZUACTR;  /* OPERATORS - vacuum */
A68_VC  SZUACTR;  /* avoid structure result */
A68_56  TZUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_56  UZUACTR = {0};  /* OPERATORS - skip to mode */
A68_56  VZUACTR_body A_UNUSED = {0};
A68_55  WZUACTR;  /* collateral clause result */
A68_55  XZUACTR;  /* clause result */
A_PROC_ENTRY(minusab);
 /* line 869: */
 /* line 870: */
{ 
 /* line 871: */
(void)(VYQACTR_eval_pass_left(Root, (&IZUACTR_left), VKJACTR_lvalue));
 /* line 872: */
(void)(EZQACTR_eval_pass_right(Root, (&JZUACTR_right), PKJACTR_defaultinfo));
 /* line 873: */
KZUACTR_opt = IWPACTR_hasattribute(Root, UKJACTR_voided);
 /* line 874: */
 /* line 875: */
 /* line 876: */
if ((Version==1)|(Version==2))
{ 
 /* line 877: */
LWUACTR_simpleabop( KZUACTR_opt, A68_FALSE, NZUACTR, IZUACTR_left, JZUACTR_right, &OZUACTR );
MZUACTR = OZUACTR;
} 
else
{ 
 /* line 878: */
if (Version==3)
{ 
 /* line 879: */
 /* line 880: */
NCUACTR_complexop( A_VVAC(RZUACTR), QZUACTR, A_VC_PLUS(BLTACTR_qminusab,ZLTACTR_qcomplex), IZUACTR_left, JZUACTR_right, A68_TRUE, &SZUACTR );
MZUACTR = A_UNITE(TZUACTR,mode6,6,SZUACTR);
} 
else
{ 
(void)(WXIACTR_assert(A_VC_PLUS(BLTACTR_qminusab,LITACTR_qvfault), A68_FALSE));
 /* line 881: */
MZUACTR = UZUACTR;
} 
} 
VZUACTR_body = MZUACTR;
 /* line 882: */
WZUACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
WZUACTR.Info = EWUACTR_abattribute(KZUACTR_opt, IZUACTR_left);
 /* line 883: */
WZUACTR.Extra = VZUACTR_body;
XZUACTR = WZUACTR;
} 
A_PROC_EXIT(minusab);
*ReturnedValue = (XZUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  BAVACTR_timesab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * CAVACTR_left A_UNUSED = {0};
A68_55 * DAVACTR_right A_UNUSED = {0};
A68_BOOL  EAVACTR_opt A_UNUSED = {0};
A68_56  GAVACTR;  /* clause result */
A68_56  IAVACTR;  /* avoid structure result */
A68_56  LAVACTR;  /* avoid structure result */
A68_125  OAVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  PAVACTR;  /* avoid structure result */
A68_56  QAVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_56  TAVACTR;  /* avoid structure result */
A68_56  WAVACTR;  /* avoid structure result */
A68_56  XAVACTR = {0};  /* OPERATORS - skip to mode */
A68_56  YAVACTR_body A_UNUSED = {0};
A68_55  ZAVACTR;  /* collateral clause result */
A68_55  ABVACTR;  /* clause result */
A_PROC_ENTRY(timesab);
 /* line 886: */
 /* line 887: */
{ 
 /* line 888: */
(void)(VYQACTR_eval_pass_left(Root, (&CAVACTR_left), VKJACTR_lvalue));
 /* line 889: */
(void)(EZQACTR_eval_pass_right(Root, (&DAVACTR_right), PKJACTR_defaultinfo));
 /* line 890: */
EAVACTR_opt = IWPACTR_hasattribute(Root, UKJACTR_voided);
 /* line 891: */
 /* line 892: */
 /* line 893: */
switch ( Version )
{ 
case 1: 
 /* line 894: */
LWUACTR_simpleabop( EAVACTR_opt, A68_FALSE, HAVACTR, CAVACTR_left, DAVACTR_right, &IAVACTR );
GAVACTR = IAVACTR;
break;
case 2: 
 /* line 895: */
LWUACTR_simpleabop( EAVACTR_opt, A68_FALSE, KAVACTR, CAVACTR_left, DAVACTR_right, &LAVACTR );
GAVACTR = LAVACTR;
break;
case 3: 
 /* line 896: */
 /* line 897: */
NCUACTR_complexop( A_HVEC(OAVACTR,EOMACTR_deref((*A_NILCHECK((&(A_NILCHECK(Root)->Mode))))),A68_INT ), NAVACTR, A_VC_PLUS(ELTACTR_qtimesab,ZLTACTR_qcomplex), CAVACTR_left, DAVACTR_right, A68_TRUE, &PAVACTR );
GAVACTR = A_UNITE(QAVACTR,mode6,6,PAVACTR);
break;
case 4: 
 /* line 898: */
LWUACTR_simpleabop( EAVACTR_opt, A68_TRUE, SAVACTR, CAVACTR_left, DAVACTR_right, &TAVACTR );
GAVACTR = TAVACTR;
break;
case 5: 
 /* line 899: */
LWUACTR_simpleabop( EAVACTR_opt, A68_TRUE, VAVACTR, CAVACTR_left, DAVACTR_right, &WAVACTR );
GAVACTR = WAVACTR;
break;
default: 
(void)(WXIACTR_assert(A_VC_PLUS(ELTACTR_qtimesab,LITACTR_qvfault), A68_FALSE));
 /* line 900: */
GAVACTR = XAVACTR;
break;
} 
YAVACTR_body = GAVACTR;
 /* line 901: */
ZAVACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
ZAVACTR.Info = EWUACTR_abattribute(EAVACTR_opt, CAVACTR_left);
 /* line 902: */
ZAVACTR.Extra = YAVACTR_body;
ABVACTR = ZAVACTR;
} 
A_PROC_EXIT(timesab);
*ReturnedValue = (ABVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  EBVACTR_overab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * FBVACTR_left A_UNUSED = {0};
A68_55 * GBVACTR_right A_UNUSED = {0};
A68_BOOL  HBVACTR_opt A_UNUSED = {0};
A68_56  JBVACTR;  /* clause result */
A68_56  LBVACTR;  /* avoid structure result */
A68_56  MBVACTR = {0};  /* OPERATORS - skip to mode */
A68_56  NBVACTR_body A_UNUSED = {0};
A68_55  OBVACTR;  /* collateral clause result */
A68_55  PBVACTR;  /* clause result */
A_PROC_ENTRY(overab);
 /* line 905: */
 /* line 906: */
{ 
 /* line 907: */
(void)(VYQACTR_eval_pass_left(Root, (&FBVACTR_left), VKJACTR_lvalue));
 /* line 908: */
(void)(EZQACTR_eval_pass_right(Root, (&GBVACTR_right), PKJACTR_defaultinfo));
 /* line 909: */
HBVACTR_opt = IWPACTR_hasattribute(Root, UKJACTR_voided);
 /* line 910: */
 /* line 911: */
 /* line 912: */
if (Version==1)
{ 
 /* line 913: */
LWUACTR_simpleabop( HBVACTR_opt, A68_FALSE, KBVACTR, FBVACTR_left, GBVACTR_right, &LBVACTR );
JBVACTR = LBVACTR;
} 
else
{ 
(void)(WXIACTR_assert(A_VC_PLUS(HLTACTR_qoverab,LITACTR_qvfault), A68_FALSE));
 /* line 914: */
JBVACTR = MBVACTR;
} 
NBVACTR_body = JBVACTR;
 /* line 915: */
OBVACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
OBVACTR.Info = EWUACTR_abattribute(HBVACTR_opt, FBVACTR_left);
 /* line 916: */
OBVACTR.Extra = NBVACTR_body;
PBVACTR = OBVACTR;
} 
A_PROC_EXIT(overab);
*ReturnedValue = (PBVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  TBVACTR_modab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_BOOL  UBVACTR_opt A_UNUSED = {0};
A68_55 * VBVACTR_left A_UNUSED = {0};
A68_55 * WBVACTR_right A_UNUSED = {0};
A68_55  XBVACTR;  /* collateral clause result */
A68_56  ACVACTR;  /* avoid structure result */
A68_56  BCVACTR = {0};  /* OPERATORS - skip to mode */
A68_55  CCVACTR;  /* clause result */
A_PROC_ENTRY(modab);
 /* line 919: */
 /* line 920: */
{ 
UBVACTR_opt = IWPACTR_hasattribute(Root, UKJACTR_voided);
 /* line 921: */
 /* line 922: */
(void)(VYQACTR_eval_pass_left(Root, (&VBVACTR_left), VKJACTR_lvalue));
 /* line 923: */
(void)(EZQACTR_eval_pass_right(Root, (&WBVACTR_right), PKJACTR_defaultinfo));
 /* line 924: */
 /* line 925: */
XBVACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
 /* line 926: */
XBVACTR.Info = EWUACTR_abattribute(UBVACTR_opt, VBVACTR_left);
 /* line 927: */
if (Version==1)
{ 
 /* line 928: */
LWUACTR_simpleabop( UBVACTR_opt, A68_TRUE, ZBVACTR, VBVACTR_left, WBVACTR_right, &ACVACTR );
XBVACTR.Extra = ACVACTR;
} 
else
{ 
(void)(WXIACTR_assert(A_VC_PLUS(KLTACTR_qmodab,LITACTR_qvfault), A68_FALSE));
 /* line 929: */
 /* line 930: */
 /* line 931: */
XBVACTR.Extra = BCVACTR;
} 
CCVACTR = XBVACTR;
} 
A_PROC_EXIT(modab);
*ReturnedValue = (CCVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  GCVACTR_divab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * HCVACTR_left A_UNUSED = {0};
A68_55 * ICVACTR_right A_UNUSED = {0};
A68_BOOL  JCVACTR_opt A_UNUSED = {0};
A68_55  KCVACTR;  /* collateral clause result */
A68_56  NCVACTR;  /* avoid structure result */
A68_217  OCVACTR;  /* collateral clause result */
A68_125  RCVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  SCVACTR;  /* avoid structure result */
A68_56  TCVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_56  UCVACTR = {0};  /* OPERATORS - skip to mode */
A68_55  VCVACTR;  /* clause result */
A_PROC_ENTRY(divab);
 /* line 934: */
 /* line 935: */
{ 
 /* line 936: */
(void)(VYQACTR_eval_pass_left(Root, (&HCVACTR_left), VKJACTR_lvalue));
 /* line 937: */
(void)(EZQACTR_eval_pass_right(Root, (&ICVACTR_right), PKJACTR_defaultinfo));
 /* line 938: */
JCVACTR_opt = IWPACTR_hasattribute(Root, UKJACTR_voided);
 /* line 940: */
 /* line 941: */
KCVACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
 /* line 942: */
KCVACTR.Info = EWUACTR_abattribute(JCVACTR_opt, HCVACTR_left);
 /* line 943: */
if (Version==1)
{ 
 /* line 944: */
LWUACTR_simpleabop( JCVACTR_opt, A68_FALSE, MCVACTR, HCVACTR_left, ICVACTR_right, &NCVACTR );
KCVACTR.Extra = NCVACTR;
} 
else
{ 
 /* line 945: */
if (Version==2)
{ 
OCVACTR.data[0] = (*A_NILCHECK((&(A_NILCHECK(ICVACTR_right)->Mode))));
OCVACTR.data[1] = ((*A_NILCHECK((&(A_NILCHECK(ICVACTR_right)->Mode))))-4);
 /* line 946: */
 /* line 947: */
NCUACTR_complexop( A_HISVEC(RCVACTR,OCVACTR,2,A68_INT ), QCVACTR, A_VC_PLUS(ELTACTR_qtimesab,ZLTACTR_qcomplex), HCVACTR_left, ICVACTR_right, A68_TRUE, &SCVACTR );
KCVACTR.Extra = A_UNITE(TCVACTR,mode6,6,SCVACTR);
} 
else
{ 
(void)(WXIACTR_assert(A_VC_PLUS(NLTACTR_qdivab,LITACTR_qvfault), A68_FALSE));
 /* line 948: */
 /* line 949: */
 /* line 950: */
KCVACTR.Extra = UCVACTR;
} 
} 
VCVACTR = KCVACTR;
} 
A_PROC_EXIT(divab);
*ReturnedValue = (VCVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ZCVACTR_isisnt(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_VC  BDVACTR;  /* clause result */
A68_VC  HDVACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  IDVACTR_op A_UNUSED = {0};
A68_VC  JDVACTR_adic A_UNUSED = {0};
A68_55 * KDVACTR_left A_UNUSED = {0};
A68_55 * LDVACTR_right A_UNUSED = {0};
A68_BOOL  MDVACTR;  /* optbool result */
A68_VC  QDVACTR;  /* clause result */
A68_VC  VDVACTR;  /* clause result */
A68_VC  AEVACTR;  /* clause result */
A68_VC  CEVACTR;  /* avoid structure result */
A68_VC  DEVACTR;  /* avoid structure result */
A68_VC  EEVACTR_body A_UNUSED = {0};
A68_55  FEVACTR;  /* collateral clause result */
A68_56  GEVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55  HEVACTR;  /* clause result */
A_PROC_ENTRY(isisnt);
 /* line 957: */
 /* line 959: */
{ 
 /* line 960: */
switch ( (Opnumber-26) )
{ 
case 1: 
 /* line 961: */
BDVACTR = CDVACTR;
break;
case 2: 
BDVACTR = EDVACTR;
break;
default: 
(void)(WXIACTR_assert(A_VC_PLUS(WLTACTR_qisisnt,GDVACTR), A68_FALSE));
 /* line 962: */
BDVACTR = HDVACTR;
break;
} 
IDVACTR_op = BDVACTR;
 /* line 964: */
JDVACTR_adic = A_VC_PLUS(IITACTR_modulename,IDVACTR_op);
 /* line 965: */
(void)(NZQACTR_eval2(Root, (&KDVACTR_left), (&LDVACTR_right)));
 /* line 967: */
 /* line 968: */
 /* line 969: */
MDVACTR = ((*A_NILCHECK((&(A_NILCHECK(KDVACTR_left)->Mode))))<WFAACTR_refrefmark);
if ( MDVACTR )
{ /* line 970: */
MDVACTR = ARMACTR_isarray((*A_NILCHECK((&(A_NILCHECK(KDVACTR_left)->Mode)))));
}
 /* line 971: */
if (MDVACTR)
{ 
if (A_VC_EQ(IDVACTR_op,ODVACTR))
{ 
QDVACTR = RDVACTR;
} 
else
{ 
 /* line 973: */
QDVACTR = TDVACTR;
} 
if (VQMACTR_isrow((*A_NILCHECK((&(A_NILCHECK(KDVACTR_left)->Mode))))))
{ 
VDVACTR = WDVACTR;
} 
else
{ 
VDVACTR = YDVACTR;
} 
 /* line 974: */
 /* line 975: */
 /* line 976: */
 /* line 977: */
OMTACTR_simpledyop( A68_TRUE, A_VC_PLUS(VDVACTR,BEVACTR), RQQACTR_yield(IDVACTR_op, KDVACTR_left), RQQACTR_yield(IDVACTR_op, LDVACTR_right), &CEVACTR );
AEVACTR = A_VC_PLUS(QDVACTR,CEVACTR);
} 
else
{ 
 /* line 978: */
OMTACTR_simpledyop( A68_FALSE, IDVACTR_op, KDVACTR_left, LDVACTR_right, &DEVACTR );
AEVACTR = DEVACTR;
} 
EEVACTR_body = AEVACTR;
 /* line 979: */
 /* line 980: */
FEVACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
 /* line 982: */
FEVACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(KDVACTR_left)->Info))))&XKJACTR_fxwarn)|(A68_BITS )((*A_NILCHECK((&(A_NILCHECK(LDVACTR_right)->Info))))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 983: */
FEVACTR.Extra = A_UNITE(GEVACTR,mode6,6,EEVACTR_body);
HEVACTR = FEVACTR;
} 
A_PROC_EXIT(isisnt);
*ReturnedValue = (HEVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  SFVACTR_anonymous(A68_55 * V, A68_INT  I, A68_INT  J, A68_55  *ReturnedValue)
{ 
A68_55  VFVACTR;  /* clause result */
 /* line 1021: */
{ 
(void)(WXIACTR_assert(UFVACTR, A68_FALSE));
 /* line 1022: */
VFVACTR = DLJACTR_skipvalue;
} 
*ReturnedValue = (VFVACTR);
return;
} 
#undef NL

A68_VOID  HGVACTR_dyadicsem(A68_55 * Root, A68_62  Rator, A68_55  *ReturnedValue)
{ 
A68_INT  IGVACTR_param A_UNUSED = {0};
A68_INT  JGVACTR_opnumber A_UNUSED = {0};
A68_INT  KGVACTR;  /* ADICOPS - MOD */
A68_INT  LGVACTR_version A_UNUSED = {0};
A68_55  MGVACTR;  /* clause result */
A68_193  NGVACTR;  /* CALL */
A68_55  OGVACTR;  /* avoid structure result */
A68_INT  PGVACTR_biopparam A_UNUSED = {0};
A68_INT  QGVACTR_opnumber A_UNUSED = {0};
A68_INT  RGVACTR;  /* ADICOPS - MOD */
A68_INT  SGVACTR_version A_UNUSED = {0};
A68_193  TGVACTR;  /* CALL */
A68_55  UGVACTR;  /* avoid structure result */
A_PROC_ENTRY(dyadicsem);
 /* line 1031: */
 /* line 1032: */
{ 
IGVACTR_param = (A68_INT )(A68_BITS )((A68_BITS )Rator.Param&ZGAACTR_parammask);
 /* line 1033: */
 /* line 1034: */
if (IGVACTR_param<RGAACTR_biopnumbersstart)
{ 
JGVACTR_opnumber = (IGVACTR_param/SGAACTR_opnumberdivisor);
 /* line 1035: */
LGVACTR_version = A_MOD(IGVACTR_param,SGAACTR_opnumberdivisor,KGVACTR);
 /* line 1036: */
 /* line 1037: */
NGVACTR = A_R1INDEX(AGVACTR_dyadicsemantics,JGVACTR_opnumber) ;
A_CALLPROC(NGVACTR,(Root, JGVACTR_opnumber, LGVACTR_version, &OGVACTR),(Root, JGVACTR_opnumber, LGVACTR_version, &OGVACTR,(NGVACTR).nonlocals));
MGVACTR = OGVACTR;
} 
else
{ 
PGVACTR_biopparam = (IGVACTR_param-RGAACTR_biopnumbersstart);
 /* line 1038: */
QGVACTR_opnumber = (PGVACTR_biopparam/TGAACTR_biopnumberdivisor);
 /* line 1039: */
SGVACTR_version = A_MOD(PGVACTR_biopparam,TGAACTR_biopnumberdivisor,RGVACTR);
 /* line 1040: */
 /* line 1041: */
 /* line 1042: */
 /* line 1044: */
TGVACTR = A_R1INDEX(EGVACTR_dyadicbiopsemantics,QGVACTR_opnumber) ;
A_CALLPROC(TGVACTR,(Root, QGVACTR_opnumber, SGVACTR_version, &UGVACTR),(Root, QGVACTR_opnumber, SGVACTR_version, &UGVACTR,(TGVACTR).nonlocals));
MGVACTR = UGVACTR;
} 
} 
A_PROC_EXIT(dyadicsem);
*ReturnedValue = (MGVACTR);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 6: */
void BITACTR(void)   /* initialise DECS adicops */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel","-dir",".","adicops.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/vak/Project/Algol/Algol-68RS-Source/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/vak/Project/Algol/Algol-68RS-Source/a68config/a68config.m","./values.m","./uniquenameserver.m","./modes.m","./incmode.m","./idtable.m","./incoperfn.m","./evalbase.m","./environment.m","./environ.m","./coutput.m","./centities.m","./biops.m","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config A_UNUSED;
/* --- end of configuration information */
A68_VC  TJTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_210  YAUACTR;  /* collateral clause result */
A68_193  ZAUACTR;  /* procedure value */
A68_193  ABUACTR;  /* procedure value */
A68_193  BBUACTR;  /* procedure value */
A68_193  CBUACTR;  /* procedure value */
A68_193  DBUACTR;  /* procedure value */
A68_193  EBUACTR;  /* procedure value */
A68_193  FBUACTR;  /* procedure value */
A68_193  GBUACTR;  /* procedure value */
A68_193  HBUACTR;  /* procedure value */
A68_193  IBUACTR;  /* procedure value */
A68_193  JBUACTR;  /* procedure value */
A68_193  KBUACTR;  /* procedure value */
A68_193  LBUACTR;  /* procedure value */
A68_193  MBUACTR;  /* procedure value */
A68_193  NBUACTR;  /* procedure value */
A68_193  OBUACTR;  /* procedure value */
A68_193  PBUACTR;  /* procedure value */
A68_193  QBUACTR;  /* procedure value */
A68_209  RBUACTR;  /* OPERATORS - istruct to row */
A68_209  SBUACTR;  /* OPERATORS - trim index */
A68_209  TBUACTR;  /* OPERATORS - trim index */
A68_225  IEVACTR;  /* collateral clause result */
A68_193  JEVACTR;  /* procedure value */
A68_193  KEVACTR;  /* procedure value */
A68_193  LEVACTR;  /* procedure value */
A68_193  MEVACTR;  /* procedure value */
A68_193  NEVACTR;  /* procedure value */
A68_193  OEVACTR;  /* procedure value */
A68_193  PEVACTR;  /* procedure value */
A68_193  QEVACTR;  /* procedure value */
A68_193  REVACTR;  /* procedure value */
A68_193  SEVACTR;  /* procedure value */
A68_193  TEVACTR;  /* procedure value */
A68_193  UEVACTR;  /* procedure value */
A68_193  VEVACTR;  /* procedure value */
A68_193  WEVACTR;  /* procedure value */
A68_193  XEVACTR;  /* procedure value */
A68_193  YEVACTR;  /* procedure value */
A68_193  ZEVACTR;  /* procedure value */
A68_193  AFVACTR;  /* procedure value */
A68_193  BFVACTR;  /* procedure value */
A68_193  CFVACTR;  /* procedure value */
A68_193  DFVACTR;  /* procedure value */
A68_193  EFVACTR;  /* procedure value */
A68_193  FFVACTR;  /* procedure value */
A68_193  GFVACTR;  /* procedure value */
A68_193  HFVACTR;  /* procedure value */
A68_193  IFVACTR;  /* procedure value */
A68_193  JFVACTR;  /* procedure value */
A68_193  KFVACTR;  /* procedure value */
A68_193  LFVACTR;  /* procedure value */
A68_193  MFVACTR;  /* procedure value */
A68_193  NFVACTR;  /* procedure value */
A68_193  OFVACTR;  /* procedure value */
A68_193  WFVACTR;  /* procedure value */
A68_209  XFVACTR;  /* OPERATORS - istruct to row */
A68_209  YFVACTR;  /* OPERATORS - trim index */
A68_209  ZFVACTR;  /* OPERATORS - trim index */
A68_209  BGVACTR;  /* OPERATORS - vacuum */
A68_209  CGVACTR;  /* OPERATORS - trim index */
A68_209  DGVACTR;  /* OPERATORS - trim index */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
OUPACTR();   /* USE values */
RHMACTR();   /* USE uniquenameserver */
DNMACTR();   /* USE modes */
ZDAACTR();   /* USE incmode */
PPKACTR();   /* USE idtable */
XFAACTR();   /* USE incoperfn */
EYQACTR();   /* USE evalbase */
HPIACTR();   /* USE environment */
BPLACTR();   /* USE environ */
PTLACTR();   /* USE coutput */
THAACTR();   /* USE centities */
JCTACTR();   /* USE biops */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/adicops.a68";
A_config.translation_time = "Thu Nov  5 21:56:13 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "AITACTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 21:56:13 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS adicops);
(void)(UEAALIB_a68config(LGAALIB_configinfo, FITACTR));
 /* line 49: */
IITACTR_modulename = HITACTR;
 /* line 51: */
 /* line 52: */
LITACTR_qvfault = KITACTR;
 /* line 53: */
OITACTR_qcompl = NITACTR;
 /* line 54: */
RITACTR_qmupb = A_VC_PLUS(IITACTR_modulename,QITACTR);
 /* line 55: */
UITACTR_qmlwb = A_VC_PLUS(IITACTR_modulename,TITACTR);
 /* line 56: */
XITACTR_qabs = A_VC_PLUS(IITACTR_modulename,WITACTR);
 /* line 57: */
AJTACTR_qround = A_VC_PLUS(IITACTR_modulename,ZITACTR);
 /* line 58: */
DJTACTR_qentier = A_VC_PLUS(IITACTR_modulename,CJTACTR);
 /* line 59: */
GJTACTR_qsign = A_VC_PLUS(IITACTR_modulename,FJTACTR);
 /* line 60: */
JJTACTR_qre = A_VC_PLUS(IITACTR_modulename,IJTACTR);
 /* line 61: */
MJTACTR_qim = A_VC_PLUS(IITACTR_modulename,LJTACTR);
 /* line 62: */
PJTACTR_qarg = A_VC_PLUS(IITACTR_modulename,OJTACTR);
 /* line 63: */
SJTACTR_qconj = A_VC_PLUS(IITACTR_modulename,RJTACTR);
 /* line 64: */
UJTACTR_qi = A_VC_PLUS(IITACTR_modulename,A_HVEC(TJTACTR,'I',A68_CHAR ));
 /* line 65: */
XJTACTR_qplus = A_VC_PLUS(IITACTR_modulename,WJTACTR);
 /* line 66: */
AKTACTR_qminus = A_VC_PLUS(IITACTR_modulename,ZJTACTR);
 /* line 67: */
DKTACTR_qtimes = A_VC_PLUS(IITACTR_modulename,CKTACTR);
 /* line 68: */
GKTACTR_qdiv = A_VC_PLUS(IITACTR_modulename,FKTACTR);
 /* line 69: */
JKTACTR_qover = A_VC_PLUS(IITACTR_modulename,IKTACTR);
 /* line 70: */
MKTACTR_qmod = A_VC_PLUS(IITACTR_modulename,LKTACTR);
 /* line 71: */
PKTACTR_qpower = A_VC_PLUS(IITACTR_modulename,OKTACTR);
 /* line 72: */
SKTACTR_qelem = A_VC_PLUS(IITACTR_modulename,RKTACTR);
 /* line 73: */
VKTACTR_qplusab = A_VC_PLUS(IITACTR_modulename,UKTACTR);
 /* line 74: */
YKTACTR_qplusto = A_VC_PLUS(IITACTR_modulename,XKTACTR);
 /* line 75: */
BLTACTR_qminusab = A_VC_PLUS(IITACTR_modulename,ALTACTR);
 /* line 76: */
ELTACTR_qtimesab = A_VC_PLUS(IITACTR_modulename,DLTACTR);
 /* line 77: */
HLTACTR_qoverab = A_VC_PLUS(IITACTR_modulename,GLTACTR);
 /* line 78: */
KLTACTR_qmodab = A_VC_PLUS(IITACTR_modulename,JLTACTR);
 /* line 79: */
NLTACTR_qdivab = A_VC_PLUS(IITACTR_modulename,MLTACTR);
 /* line 80: */
QLTACTR_qis = A_VC_PLUS(IITACTR_modulename,PLTACTR);
 /* line 81: */
TLTACTR_qisnt = A_VC_PLUS(IITACTR_modulename,SLTACTR);
 /* line 82: */
WLTACTR_qisisnt = A_VC_PLUS(IITACTR_modulename,VLTACTR);
 /* line 83: */
ZLTACTR_qcomplex = YLTACTR;
 /* line 85: */
 /* line 91: */
 /* line 100: */
 /* line 105: */
 /* line 122: */
 /* line 139: */
 /* line 156: */
 /* line 173: */
 /* line 195: */
 /* line 214: */
 /* line 231: */
 /* line 243: */
 /* line 255: */
 /* line 271: */
 /* line 288: */
 /* line 317: */
 /* line 349: */
 /* line 359: */
 /* line 363: */
 /* line 367: */
 /* line 379: */
 /* line 391: */
 /* line 393: */
 /* line 394: */
ZAUACTR.fn.fn_global = BNTACTR_monadicplus;
ZAUACTR.nonlocals = A68_NIL;
YAUACTR.data[0] = ZAUACTR;
 /* line 395: */
ABUACTR.fn.fn_global = HNTACTR_monadicminus;
ABUACTR.nonlocals = A68_NIL;
YAUACTR.data[1] = ABUACTR;
 /* line 396: */
BBUACTR.fn.fn_global = DOTACTR_monadicupb;
BBUACTR.nonlocals = A68_NIL;
YAUACTR.data[2] = BBUACTR;
 /* line 397: */
CBUACTR.fn.fn_global = VOTACTR_monadiclwb;
CBUACTR.nonlocals = A68_NIL;
YAUACTR.data[3] = CBUACTR;
 /* line 398: */
DBUACTR.fn.fn_global = MPTACTR_not;
DBUACTR.nonlocals = A68_NIL;
YAUACTR.data[4] = DBUACTR;
 /* line 399: */
EBUACTR.fn.fn_global = GQTACTR_abs;
EBUACTR.nonlocals = A68_NIL;
YAUACTR.data[5] = EBUACTR;
 /* line 400: */
FBUACTR.fn.fn_global = KRTACTR_bin;
FBUACTR.nonlocals = A68_NIL;
YAUACTR.data[6] = FBUACTR;
 /* line 401: */
GBUACTR.fn.fn_global = ZRTACTR_repr;
GBUACTR.nonlocals = A68_NIL;
YAUACTR.data[7] = GBUACTR;
 /* line 402: */
HBUACTR.fn.fn_global = OSTACTR_lengthen;
HBUACTR.nonlocals = A68_NIL;
YAUACTR.data[8] = HBUACTR;
 /* line 403: */
IBUACTR.fn.fn_global = ETTACTR_shorten;
IBUACTR.nonlocals = A68_NIL;
YAUACTR.data[9] = IBUACTR;
 /* line 404: */
JBUACTR.fn.fn_global = UTTACTR_odd;
JBUACTR.nonlocals = A68_NIL;
YAUACTR.data[10] = JBUACTR;
 /* line 405: */
KBUACTR.fn.fn_global = JUTACTR_sign;
KBUACTR.nonlocals = A68_NIL;
YAUACTR.data[11] = KBUACTR;
 /* line 406: */
LBUACTR.fn.fn_global = XUTACTR_round;
LBUACTR.nonlocals = A68_NIL;
YAUACTR.data[12] = LBUACTR;
 /* line 407: */
MBUACTR.fn.fn_global = RWTACTR_entier;
MBUACTR.nonlocals = A68_NIL;
YAUACTR.data[13] = MBUACTR;
 /* line 408: */
NBUACTR.fn.fn_global = DZTACTR_re;
NBUACTR.nonlocals = A68_NIL;
YAUACTR.data[14] = NBUACTR;
 /* line 409: */
OBUACTR.fn.fn_global = LZTACTR_im;
OBUACTR.nonlocals = A68_NIL;
YAUACTR.data[15] = OBUACTR;
 /* line 411: */
PBUACTR.fn.fn_global = TZTACTR_arg;
PBUACTR.nonlocals = A68_NIL;
YAUACTR.data[16] = PBUACTR;
QBUACTR.fn.fn_global = HAUACTR_conj;
QBUACTR.nonlocals = A68_NIL;
YAUACTR.data[17] = QBUACTR;
SBUACTR = A_HIS1ARR(RBUACTR,YAUACTR,A68_193 ,18) ;
UBUACTR_monadicsemantics = A_R1TRIM(TBUACTR,(SBUACTR),A_RTSCRIPT(&(TBUACTR.dim[0]),&((SBUACTR).dim[0]),(SBUACTR).dim[0].lwb,(SBUACTR).dim[0].upb,0));
 /* line 413: */
 /* line 426: */
 /* line 440: */
 /* line 460: */
 /* line 474: */
 /* line 486: */
 /* line 495: */
 /* line 509: */
 /* line 522: */
 /* line 552: */
 /* line 583: */
 /* line 621: */
 /* line 650: */
 /* line 672: */
 /* line 684: */
 /* line 698: */
 /* line 721: */
 /* line 724: */
 /* line 740: */
 /* line 759: */
 /* line 782: */
 /* line 802: */
 /* line 806: */
 /* line 826: */
 /* line 845: */
 /* line 868: */
 /* line 885: */
 /* line 904: */
 /* line 918: */
 /* line 933: */
 /* line 952: */
 /* line 986: */
 /* line 988: */
 /* line 989: */
JEVACTR.fn.fn_global = AEUACTR_dyadicplus;
JEVACTR.nonlocals = A68_NIL;
IEVACTR.data[0] = JEVACTR;
 /* line 990: */
KEVACTR.fn.fn_global = DFUACTR_dyadicminus;
KEVACTR.nonlocals = A68_NIL;
IEVACTR.data[1] = KEVACTR;
 /* line 991: */
LEVACTR.fn.fn_global = TFUACTR_dyadicupb;
LEVACTR.nonlocals = A68_NIL;
IEVACTR.data[2] = LEVACTR;
 /* line 992: */
MEVACTR.fn.fn_global = JGUACTR_dyadiclwb;
MEVACTR.nonlocals = A68_NIL;
IEVACTR.data[3] = MEVACTR;
 /* line 993: */
NEVACTR.fn.fn_global = ZGUACTR_and;
NEVACTR.nonlocals = A68_NIL;
IEVACTR.data[4] = NEVACTR;
 /* line 994: */
OEVACTR.fn.fn_global = SHUACTR_or;
OEVACTR.nonlocals = A68_NIL;
IEVACTR.data[5] = OEVACTR;
 /* line 995: */
PEVACTR.fn.fn_global = LIUACTR_lessnotless;
PEVACTR.nonlocals = A68_NIL;
IEVACTR.data[6] = PEVACTR;
 /* line 996: */
QEVACTR.fn.fn_global = LIUACTR_lessnotless;
QEVACTR.nonlocals = A68_NIL;
IEVACTR.data[7] = QEVACTR;
 /* line 997: */
REVACTR.fn.fn_global = XJUACTR_lesseqgreatereq;
REVACTR.nonlocals = A68_NIL;
IEVACTR.data[8] = REVACTR;
 /* line 998: */
SEVACTR.fn.fn_global = XJUACTR_lesseqgreatereq;
SEVACTR.nonlocals = A68_NIL;
IEVACTR.data[9] = SEVACTR;
 /* line 999: */
TEVACTR.fn.fn_global = OLUACTR_eqnoteq;
TEVACTR.nonlocals = A68_NIL;
IEVACTR.data[10] = TEVACTR;
 /* line 1000: */
UEVACTR.fn.fn_global = OLUACTR_eqnoteq;
UEVACTR.nonlocals = A68_NIL;
IEVACTR.data[11] = UEVACTR;
 /* line 1001: */
VEVACTR.fn.fn_global = INUACTR_times;
VEVACTR.nonlocals = A68_NIL;
IEVACTR.data[12] = VEVACTR;
 /* line 1002: */
WEVACTR.fn.fn_global = UOUACTR_divide;
WEVACTR.nonlocals = A68_NIL;
IEVACTR.data[13] = WEVACTR;
 /* line 1003: */
XEVACTR.fn.fn_global = SPUACTR_over;
XEVACTR.nonlocals = A68_NIL;
IEVACTR.data[14] = XEVACTR;
 /* line 1004: */
YEVACTR.fn.fn_global = EQUACTR_mod;
YEVACTR.nonlocals = A68_NIL;
IEVACTR.data[15] = YEVACTR;
 /* line 1005: */
ZEVACTR.fn.fn_global = CRUACTR_power;
ZEVACTR.nonlocals = A68_NIL;
IEVACTR.data[16] = ZEVACTR;
 /* line 1006: */
AFVACTR.fn.fn_global = ETUACTR_imaginary;
AFVACTR.nonlocals = A68_NIL;
IEVACTR.data[17] = AFVACTR;
 /* line 1007: */
BFVACTR.fn.fn_global = JUUACTR_shiftleftright;
BFVACTR.nonlocals = A68_NIL;
IEVACTR.data[18] = BFVACTR;
 /* line 1008: */
CFVACTR.fn.fn_global = JUUACTR_shiftleftright;
CFVACTR.nonlocals = A68_NIL;
IEVACTR.data[19] = CFVACTR;
 /* line 1009: */
DFVACTR.fn.fn_global = GVUACTR_elem;
DFVACTR.nonlocals = A68_NIL;
IEVACTR.data[20] = DFVACTR;
 /* line 1010: */
EFVACTR.fn.fn_global = IXUACTR_plusab;
EFVACTR.nonlocals = A68_NIL;
IEVACTR.data[21] = EFVACTR;
 /* line 1011: */
FFVACTR.fn.fn_global = HZUACTR_minusab;
FFVACTR.nonlocals = A68_NIL;
IEVACTR.data[22] = FFVACTR;
 /* line 1012: */
GFVACTR.fn.fn_global = BAVACTR_timesab;
GFVACTR.nonlocals = A68_NIL;
IEVACTR.data[23] = GFVACTR;
 /* line 1013: */
HFVACTR.fn.fn_global = EBVACTR_overab;
HFVACTR.nonlocals = A68_NIL;
IEVACTR.data[24] = HFVACTR;
 /* line 1014: */
IFVACTR.fn.fn_global = TBVACTR_modab;
IFVACTR.nonlocals = A68_NIL;
IEVACTR.data[25] = IFVACTR;
 /* line 1015: */
JFVACTR.fn.fn_global = GCVACTR_divab;
JFVACTR.nonlocals = A68_NIL;
IEVACTR.data[26] = JFVACTR;
 /* line 1016: */
KFVACTR.fn.fn_global = ZCVACTR_isisnt;
KFVACTR.nonlocals = A68_NIL;
IEVACTR.data[27] = KFVACTR;
 /* line 1017: */
LFVACTR.fn.fn_global = ZCVACTR_isisnt;
LFVACTR.nonlocals = A68_NIL;
IEVACTR.data[28] = LFVACTR;
 /* line 1018: */
MFVACTR.fn.fn_global = ZGUACTR_and;
MFVACTR.nonlocals = A68_NIL;
IEVACTR.data[29] = MFVACTR;
 /* line 1019: */
NFVACTR.fn.fn_global = SHUACTR_or;
NFVACTR.nonlocals = A68_NIL;
IEVACTR.data[30] = NFVACTR;
 /* line 1020: */
OFVACTR.fn.fn_global = LYUACTR_plusto;
OFVACTR.nonlocals = A68_NIL;
IEVACTR.data[31] = OFVACTR;
WFVACTR.fn.fn_global = SFVACTR_anonymous;
WFVACTR.nonlocals = A68_NIL;
IEVACTR.data[32] = WFVACTR;
YFVACTR = A_HIS1ARR(XFVACTR,IEVACTR,A68_193 ,33) ;
AGVACTR_dyadicsemantics = A_R1TRIM(ZFVACTR,(YFVACTR),A_RTSCRIPT(&(ZFVACTR.dim[0]),&((YFVACTR).dim[0]),(YFVACTR).dim[0].lwb,(YFVACTR).dim[0].upb,0));
 /* line 1024: */
 /* line 1028: */
CGVACTR = A_R1VAC(BGVACTR) ;
EGVACTR_dyadicbiopsemantics = A_R1TRIM(DGVACTR,(CGVACTR),A_RTSCRIPT(&(DGVACTR.dim[0]),&((CGVACTR).dim[0]),(CGVACTR).dim[0].lwb,(CGVACTR).dim[0].upb,0));
 /* line 1030: */
 /* line 1046: */
A_PROC_EXIT(DECS adicops);
} 
#undef NL
/* end of translation of adicops.a68 */
