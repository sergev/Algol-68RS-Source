/* UNAME:OHTACTR */
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
extern A68_VOID  UZPACTR_getcfragment(struct A68t55 *,A68_VC *);
extern A68_BITS  PKJACTR_defaultinfo;
#define RKJACTR_atomic 0X2U
#define SKJACTR_effects 0X4U
#define TKJACTR_nonloc 0X8U
#define UKJACTR_voided 0X10U
#define VKJACTR_lvalue 0X20U
#define XKJACTR_fxwarn 0X80U
extern A68_BOOL  IWPACTR_hasattribute(struct A68t55 *,A68_BITS );
extern A68_55  DLJACTR_skipvalue;
extern A68_VOID  BEQACTR_bracketcfragment(struct A68t55 *,A68_VC *);
extern A68_VOID  SOQACTR_usemacro(A68_VC ,struct A68t172 ,A68_VC *);
extern A68_VOID  XOQACTR_emitline(struct A68t172 );
extern A68_55 * YPQACTR_yield(struct A68t55 *);
extern A68_55 * JQQACTR_yield(A68_VC ,struct A68t55 *);
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
extern A68_VOID  EYQACTR_eval1(struct A68t55 *,struct A68t55 **);
extern A68_VOID  NYQACTR_eval_pass_left(struct A68t55 *,struct A68t55 **,A68_BITS );
extern A68_VOID  WYQACTR_eval_pass_right(struct A68t55 *,struct A68t55 **,A68_BITS );
extern A68_VOID  FZQACTR_eval2(struct A68t55 *,struct A68t55 **,struct A68t55 **);
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
extern A68_VOID  HHTACTR_monadicbiopsemantics(struct A68t55 *,A68_INT ,A68_55 *);
extern A68_VOID  GCTACTR_biop99(struct A68t55 *,A68_55 *);
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
extern void WXQACTR(void);   /* evalbase */
extern void HPIACTR(void);   /* environment */
extern void BPLACTR(void);   /* environ */
extern void PTLACTR(void);   /* coutput */
extern void THAACTR(void);   /* centities */
extern void XBTACTR(void);   /* biops */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_181   SHTACTR = {"$Id: adicops.a68,v 1.2 2002-02-04 09:26:51 sian Exp $"}; 
A_GISVEC(A68_VC ,THTACTR,SHTACTR,53)
static A68_182   UHTACTR = {"ADICOPS - "}; 
A_GISVEC(A68_VC ,VHTACTR,UHTACTR,10)
static A68_VC  WHTACTR_modulename A_UNUSED;
static A68_183   XHTACTR = {":illegal version number"}; 
A_GISVEC(A68_VC ,YHTACTR,XHTACTR,23)
static A68_VC  ZHTACTR_qvfault A_UNUSED;
static A68_184   AITACTR = {":mode COMPL is not supported"}; 
A_GISVEC(A68_VC ,BITACTR,AITACTR,28)
static A68_VC  CITACTR_qcompl A_UNUSED;
static A68_185   DITACTR = {"monadic UPB"}; 
A_GISVEC(A68_VC ,EITACTR,DITACTR,11)
static A68_VC  FITACTR_qmupb A_UNUSED;
static A68_185   GITACTR = {"monadic LWB"}; 
A_GISVEC(A68_VC ,HITACTR,GITACTR,11)
static A68_VC  IITACTR_qmlwb A_UNUSED;
static A68_186   JITACTR = {"ABS"}; 
A_GISVEC(A68_VC ,KITACTR,JITACTR,3)
static A68_VC  LITACTR_qabs A_UNUSED;
static A68_187   MITACTR = {"ROUND"}; 
A_GISVEC(A68_VC ,NITACTR,MITACTR,5)
static A68_VC  OITACTR_qround A_UNUSED;
static A68_188   PITACTR = {"ENTIER"}; 
A_GISVEC(A68_VC ,QITACTR,PITACTR,6)
static A68_VC  RITACTR_qentier A_UNUSED;
static A68_40   SITACTR = {"SIGN"}; 
A_GISVEC(A68_VC ,TITACTR,SITACTR,4)
static A68_VC  UITACTR_qsign A_UNUSED;
static A68_189   VITACTR = {"RE"}; 
A_GISVEC(A68_VC ,WITACTR,VITACTR,2)
static A68_VC  XITACTR_qre A_UNUSED;
static A68_189   YITACTR = {"IM"}; 
A_GISVEC(A68_VC ,ZITACTR,YITACTR,2)
static A68_VC  AJTACTR_qim A_UNUSED;
static A68_186   BJTACTR = {"ARG"}; 
A_GISVEC(A68_VC ,CJTACTR,BJTACTR,3)
static A68_VC  DJTACTR_qarg A_UNUSED;
static A68_40   EJTACTR = {"CONJ"}; 
A_GISVEC(A68_VC ,FJTACTR,EJTACTR,4)
static A68_VC  GJTACTR_qconj A_UNUSED;
static A68_VC  IJTACTR_qi A_UNUSED;
static A68_40   JJTACTR = {"PLUS"}; 
A_GISVEC(A68_VC ,KJTACTR,JJTACTR,4)
static A68_VC  LJTACTR_qplus A_UNUSED;
static A68_187   MJTACTR = {"MINUS"}; 
A_GISVEC(A68_VC ,NJTACTR,MJTACTR,5)
static A68_VC  OJTACTR_qminus A_UNUSED;
static A68_187   PJTACTR = {"TIMES"}; 
A_GISVEC(A68_VC ,QJTACTR,PJTACTR,5)
static A68_VC  RJTACTR_qtimes A_UNUSED;
static A68_186   SJTACTR = {"DIV"}; 
A_GISVEC(A68_VC ,TJTACTR,SJTACTR,3)
static A68_VC  UJTACTR_qdiv A_UNUSED;
static A68_40   VJTACTR = {"OVER"}; 
A_GISVEC(A68_VC ,WJTACTR,VJTACTR,4)
static A68_VC  XJTACTR_qover A_UNUSED;
static A68_186   YJTACTR = {"MOD"}; 
A_GISVEC(A68_VC ,ZJTACTR,YJTACTR,3)
static A68_VC  AKTACTR_qmod A_UNUSED;
static A68_189   BKTACTR = {"**"}; 
A_GISVEC(A68_VC ,CKTACTR,BKTACTR,2)
static A68_VC  DKTACTR_qpower A_UNUSED;
static A68_40   EKTACTR = {"ELEM"}; 
A_GISVEC(A68_VC ,FKTACTR,EKTACTR,4)
static A68_VC  GKTACTR_qelem A_UNUSED;
static A68_188   HKTACTR = {"PLUSAB"}; 
A_GISVEC(A68_VC ,IKTACTR,HKTACTR,6)
static A68_VC  JKTACTR_qplusab A_UNUSED;
static A68_188   KKTACTR = {"PLUSTO"}; 
A_GISVEC(A68_VC ,LKTACTR,KKTACTR,6)
static A68_VC  MKTACTR_qplusto A_UNUSED;
static A68_64   NKTACTR = {"MINUSAB"}; 
A_GISVEC(A68_VC ,OKTACTR,NKTACTR,7)
static A68_VC  PKTACTR_qminusab A_UNUSED;
static A68_64   QKTACTR = {"TIMESAB"}; 
A_GISVEC(A68_VC ,RKTACTR,QKTACTR,7)
static A68_VC  SKTACTR_qtimesab A_UNUSED;
static A68_188   TKTACTR = {"OVERAB"}; 
A_GISVEC(A68_VC ,UKTACTR,TKTACTR,6)
static A68_VC  VKTACTR_qoverab A_UNUSED;
static A68_187   WKTACTR = {"MODAB"}; 
A_GISVEC(A68_VC ,XKTACTR,WKTACTR,5)
static A68_VC  YKTACTR_qmodab A_UNUSED;
static A68_187   ZKTACTR = {"DIVAB"}; 
A_GISVEC(A68_VC ,ALTACTR,ZKTACTR,5)
static A68_VC  BLTACTR_qdivab A_UNUSED;
static A68_189   CLTACTR = {"IS"}; 
A_GISVEC(A68_VC ,DLTACTR,CLTACTR,2)
static A68_VC  ELTACTR_qis A_UNUSED;
static A68_40   FLTACTR = {"ISNT"}; 
A_GISVEC(A68_VC ,GLTACTR,FLTACTR,4)
static A68_VC  HLTACTR_qisnt A_UNUSED;
static A68_64   ILTACTR = {"IS/ISNT"}; 
A_GISVEC(A68_VC ,JLTACTR,ILTACTR,7)
static A68_VC  KLTACTR_qisisnt A_UNUSED;
static A68_188   LLTACTR = {" COMPL"}; 
A_GISVEC(A68_VC ,MLTACTR,LLTACTR,6)
static A68_VC  NLTACTR_qcomplex A_UNUSED;
static A68_194   ANTACTR = {"A_COMPL_MMINUS"}; 
A_GISVEC(A68_VC ,GNTACTR,ANTACTR,14)
static A68_40   UNTACTR = {".upb"}; 
A_GISVEC(A68_VC ,WNTACTR,UNTACTR,4)
static A68_185   ZNTACTR = {".dim[0].upb"}; 
A_GISVEC(A68_VC ,BOTACTR,ZNTACTR,11)
static A68_189   MOTACTR = {" 1"}; 
A_GISVEC(A68_VC ,NOTACTR,MOTACTR,2)
static A68_185   QOTACTR = {".dim[0].lwb"}; 
A_GISVEC(A68_VC ,SOTACTR,QOTACTR,11)
static A68_189   DPTACTR = {"(!"}; 
A_GISVEC(A68_VC ,EPTACTR,DPTACTR,2)
static A68_195   NPTACTR = {"ADICOPS - NOT"}; 
A_GISVEC(A68_VC ,OPTACTR,NPTACTR,13)
static A68_196   ZPTACTR = {"(A68_INT)(unsigned char)"}; 
A_GISVEC(A68_VC ,AQTACTR,ZPTACTR,24)
static A68_187   EQTACTR = {"A_ABS"}; 
static A68_40   FQTACTR = {" INT"}; 
A_GISVEC(A68_VC ,GQTACTR,FQTACTR,4)
A_GISVEC(A68_VC ,HQTACTR,EQTACTR,5)
static A68_187   JQTACTR = {"A_ABS"}; 
static A68_187   KQTACTR = {" REAL"}; 
A_GISVEC(A68_VC ,LQTACTR,KQTACTR,5)
A_GISVEC(A68_VC ,MQTACTR,JQTACTR,5)
static A68_185   OQTACTR = {"A_COMPL_ABS"}; 
A_GISVEC(A68_VC ,PQTACTR,OQTACTR,11)
static A68_195   HRTACTR = {"ADICOPS - BIN"}; 
A_GISVEC(A68_VC ,IRTACTR,HRTACTR,13)
static A68_197   QRTACTR = {"(A68_SSBITS)"}; 
A_GISVEC(A68_VC ,RRTACTR,QRTACTR,12)
static A68_198   VRTACTR = {"ADICOPS - REPR "}; 
A_GISVEC(A68_VC ,WRTACTR,VRTACTR,15)
static A68_199   FSTACTR = {"ADICOPS - LENG incorrect mode:"}; 
A_GISVEC(A68_VC ,HSTACTR,FSTACTR,30)
static A68_200   VSTACTR = {"ADICOPS - SHORT incorrect mode:"}; 
A_GISVEC(A68_VC ,XSTACTR,VSTACTR,31)
static A68_40   LTTACTR = {" & 1"}; 
A_GISVEC(A68_VC ,NTTACTR,LTTACTR,4)
static A68_194   QTTACTR = {"ADICOPS - ODD "}; 
A_GISVEC(A68_VC ,RTTACTR,QTTACTR,14)
static A68_188   AUTACTR = {"A_SIGN"}; 
A_GISVEC(A68_VC ,BUTACTR,AUTACTR,6)
static A68_198   EUTACTR = {"ADICOPS - SIGN "}; 
A_GISVEC(A68_VC ,FUTACTR,EUTACTR,15)
static A68_198   OUTACTR = {"incorrect mode:"}; 
A_GISVEC(A68_VC ,PUTACTR,OUTACTR,15)
static A68_64   WUTACTR = {"double "}; 
A_GISVEC(A68_VC ,XUTACTR,WUTACTR,7)
static A68_189   DVTACTR = {"/*"}; 
static A68_189   EVTACTR = {"*/"}; 
A_GISVEC(A68_VC ,FVTACTR,DVTACTR,2)
A_GISVEC(A68_VC ,GVTACTR,EVTACTR,2)
static A68_201   JVTACTR = {""}; 
A_GISVEC(A68_VC ,KVTACTR,JVTACTR,0)
static A68_64   PVTACTR = {"A_ROUND"}; 
A_GISVEC(A68_VC ,XVTACTR,PVTACTR,7)
static A68_204   IWTACTR = {" incorrect mode:"}; 
A_GISVEC(A68_VC ,JWTACTR,IWTACTR,16)
static A68_64   TWTACTR = {"double "}; 
A_GISVEC(A68_VC ,UWTACTR,TWTACTR,7)
static A68_189   DXTACTR = {"/*"}; 
static A68_189   EXTACTR = {"*/"}; 
A_GISVEC(A68_VC ,FXTACTR,DXTACTR,2)
A_GISVEC(A68_VC ,GXTACTR,EXTACTR,2)
static A68_201   JXTACTR = {""}; 
A_GISVEC(A68_VC ,KXTACTR,JXTACTR,0)
static A68_206   PXTACTR = {"A_ENTIER"}; 
A_GISVEC(A68_VC ,YXTACTR,PXTACTR,8)
static A68_182   SYTACTR = {"A_COMPL_RE"}; 
A_GISVEC(A68_VC ,UYTACTR,SYTACTR,10)
static A68_182   AZTACTR = {"A_COMPL_IM"}; 
A_GISVEC(A68_VC ,CZTACTR,AZTACTR,10)
static A68_185   KZTACTR = {"A_COMPL_ARG"}; 
A_GISVEC(A68_VC ,OZTACTR,KZTACTR,11)
static A68_40   XZTACTR = {"CONJ"}; 
A_GISVEC(A68_VC ,YZTACTR,XZTACTR,4)
static A68_197   CAUACTR = {"A_COMPL_CONJ"}; 
A_GISVEC(A68_VC ,IAUACTR,CAUACTR,12)
static A68_209  IBUACTR_monadicsemantics A_UNUSED;
static A68_187   CCUACTR = {" L op"}; 
A_GISVEC(A68_VC ,DCUACTR,CCUACTR,5)
static A68_187   FCUACTR = {" R op"}; 
A_GISVEC(A68_VC ,GCUACTR,FCUACTR,5)
static A68_189   VCUACTR = {" 1"}; 
A_GISVEC(A68_VC ,WCUACTR,VCUACTR,2)
static A68_189   ADUACTR = {" 2"}; 
A_GISVEC(A68_VC ,BDUACTR,ADUACTR,2)
static A68_206   RDUACTR = {"A_C_PLUS"}; 
A_GISVEC(A68_VC ,TDUACTR,RDUACTR,8)
static A68_197   ZDUACTR = {"A_COMPL_PLUS"}; 
A_GISVEC(A68_VC ,AEUACTR,ZDUACTR,12)
static A68_213   DEUACTR = {"A_VC_PLUS"}; 
A_GISVEC(A68_VC ,EEUACTR,DEUACTR,9)
static A68_213   GEUACTR = {"A_RC_PLUS"}; 
A_GISVEC(A68_VC ,HEUACTR,GEUACTR,9)
static A68_195   VEUACTR = {"A_COMPL_MINUS"}; 
A_GISVEC(A68_VC ,WEUACTR,VEUACTR,13)
static A68_187   LFUACTR = {".dim["}; 
static A68_206   MFUACTR = {" -1].upb"}; 
A_GISVEC(A68_VC ,OFUACTR,LFUACTR,5)
A_GISVEC(A68_VC ,QFUACTR,MFUACTR,8)
static A68_187   BGUACTR = {".dim["}; 
static A68_206   CGUACTR = {" -1].lwb"}; 
A_GISVEC(A68_VC ,EGUACTR,BGUACTR,5)
A_GISVEC(A68_VC ,GGUACTR,CGUACTR,8)
static A68_194   ZGUACTR = {"ADICOPS - AND "}; 
A_GISVEC(A68_VC ,AHUACTR,ZGUACTR,14)
static A68_195   SHUACTR = {"ADICOPS - OR "}; 
A_GISVEC(A68_VC ,THUACTR,SHUACTR,13)
static A68_214   DIUACTR = {"ADICOPS < or >: illegal op number"}; 
A_GISVEC(A68_VC ,EIUACTR,DIUACTR,33)
static A68_189   HIUACTR = {"LT"}; 
A_GISVEC(A68_VC ,JIUACTR,HIUACTR,2)
static A68_189   KIUACTR = {"GT"}; 
A_GISVEC(A68_VC ,LIUACTR,KIUACTR,2)
static A68_214   MIUACTR = {"ADICOPS < or >: illegal op number"}; 
A_GISVEC(A68_VC ,NIUACTR,MIUACTR,33)
static A68_187   XIUACTR = {"A_VC_"}; 
A_GISVEC(A68_VC ,YIUACTR,XIUACTR,5)
static A68_187   AJUACTR = {"A_RC_"}; 
A_GISVEC(A68_VC ,BJUACTR,AJUACTR,5)
static A68_189   MJUACTR = {"<="}; 
A_GISVEC(A68_VC ,OJUACTR,MJUACTR,2)
static A68_189   PJUACTR = {">="}; 
A_GISVEC(A68_VC ,QJUACTR,PJUACTR,2)
static A68_215   RJUACTR = {"ADICOPS - <= or >= illegal op number"}; 
A_GISVEC(A68_VC ,SJUACTR,RJUACTR,36)
static A68_189   VJUACTR = {"LE"}; 
A_GISVEC(A68_VC ,XJUACTR,VJUACTR,2)
static A68_189   YJUACTR = {"GE"}; 
A_GISVEC(A68_VC ,ZJUACTR,YJUACTR,2)
static A68_215   AKUACTR = {"ADICOPS - <= or >= illegal op number"}; 
A_GISVEC(A68_VC ,BKUACTR,AKUACTR,36)
static A68_187   JKUACTR = {"A_LB_"}; 
A_GISVEC(A68_VC ,KKUACTR,JKUACTR,5)
static A68_187   OKUACTR = {"A_VC_"}; 
A_GISVEC(A68_VC ,PKUACTR,OKUACTR,5)
static A68_187   RKUACTR = {"A_RC_"}; 
A_GISVEC(A68_VC ,SKUACTR,RKUACTR,5)
static A68_189   DLUACTR = {"=="}; 
A_GISVEC(A68_VC ,FLUACTR,DLUACTR,2)
static A68_189   GLUACTR = {"!="}; 
A_GISVEC(A68_VC ,HLUACTR,GLUACTR,2)
static A68_216   ILUACTR = {"ADICOPS - = or /= illegal op number"}; 
A_GISVEC(A68_VC ,JLUACTR,ILUACTR,35)
static A68_189   MLUACTR = {"EQ"}; 
A_GISVEC(A68_VC ,OLUACTR,MLUACTR,2)
static A68_189   PLUACTR = {"NE"}; 
A_GISVEC(A68_VC ,QLUACTR,PLUACTR,2)
static A68_216   RLUACTR = {"ADICOPS - = or /= illegal op number"}; 
A_GISVEC(A68_VC ,SLUACTR,RLUACTR,35)
static A68_182   AMUACTR = {"A_COMPL_EQ"}; 
A_GISVEC(A68_VC ,CMUACTR,AMUACTR,10)
static A68_185   DMUACTR = {"A_COMPL_NEQ"}; 
A_GISVEC(A68_VC ,EMUACTR,DMUACTR,11)
static A68_187   IMUACTR = {"A_VC_"}; 
A_GISVEC(A68_VC ,JMUACTR,IMUACTR,5)
static A68_187   LMUACTR = {"A_RC_"}; 
A_GISVEC(A68_VC ,MMUACTR,LMUACTR,5)
static A68_213   ZMUACTR = {"A_C_TIMES"}; 
A_GISVEC(A68_VC ,BNUACTR,ZMUACTR,9)
static A68_213   DNUACTR = {"A_C_TIMES"}; 
A_GISVEC(A68_VC ,ENUACTR,DNUACTR,9)
static A68_195   KNUACTR = {"A_COMPL_TIMES"}; 
A_GISVEC(A68_VC ,LNUACTR,KNUACTR,13)
static A68_182   ONUACTR = {"A_VC_TIMES"}; 
A_GISVEC(A68_VC ,PNUACTR,ONUACTR,10)
static A68_182   RNUACTR = {"A_VC_TIMES"}; 
A_GISVEC(A68_VC ,SNUACTR,RNUACTR,10)
static A68_182   UNUACTR = {"A_RC_TIMES"}; 
A_GISVEC(A68_VC ,VNUACTR,UNUACTR,10)
static A68_182   XNUACTR = {"A_RC_TIMES"}; 
A_GISVEC(A68_VC ,YNUACTR,XNUACTR,10)
static A68_194   UOUACTR = {"A_COMPL_DIVIDE"}; 
A_GISVEC(A68_VC ,VOUACTR,UOUACTR,14)
static A68_187   AQUACTR = {"A_MOD"}; 
A_GISVEC(A68_VC ,IQUACTR,AQUACTR,5)
static A68_198   UQUACTR = {" incorrect mode"}; 
A_GISVEC(A68_VC ,VQUACTR,UQUACTR,15)
static A68_182   YQUACTR = {"A_LI_POWER"}; 
A_GISVEC(A68_VC ,HRUACTR,YQUACTR,10)
static A68_182   KRUACTR = {"A_LR_POWER"}; 
A_GISVEC(A68_VC ,TRUACTR,KRUACTR,10)
static A68_195   XRUACTR = {"A_COMPL_POWER"}; 
A_GISVEC(A68_VC ,ESUACTR,XRUACTR,13)
static A68_213   ZSUACTR = {"A_COMPL_I"}; 
A_GISVEC(A68_VC ,HTUACTR,ZSUACTR,9)
static A68_213   KTUACTR = {"A_COMPL_I"}; 
A_GISVEC(A68_VC ,QTUACTR,KTUACTR,9)
static A68_186   YTUACTR = {"SHL"}; 
A_GISVEC(A68_VC ,AUUACTR,YTUACTR,3)
static A68_186   BUUACTR = {"SHR"}; 
A_GISVEC(A68_VC ,CUUACTR,BUUACTR,3)
static A68_219   DUUACTR = {"ADICOPS SHL or SHR: illegal op number"}; 
A_GISVEC(A68_VC ,EUUACTR,DUUACTR,37)
static A68_189   LUUACTR = {"A_"}; 
A_GISVEC(A68_VC ,MUUACTR,LUUACTR,2)
static A68_188   YUUACTR = {"A_ELEM"}; 
A_GISVEC(A68_VC ,JVUACTR,YUUACTR,6)
static A68_189   OWUACTR = {" ;"}; 
A_GISVEC(A68_VC ,PWUACTR,OWUACTR,2)
static A68_189   AXUACTR = {"+="}; 
A_GISVEC(A68_VC ,CXUACTR,AXUACTR,2)
static A68_189   EXUACTR = {"+="}; 
A_GISVEC(A68_VC ,FXUACTR,EXUACTR,2)
static A68_194   HXUACTR = {"A_COMPL_PLUSAB"}; 
A_GISVEC(A68_VC ,IXUACTR,HXUACTR,14)
static A68_185   MXUACTR = {"A_VC_PLUSAB"}; 
A_GISVEC(A68_VC ,NXUACTR,MXUACTR,11)
static A68_185   PXUACTR = {"A_RC_PLUSAB"}; 
A_GISVEC(A68_VC ,QXUACTR,PXUACTR,11)
static A68_222   DYUACTR = {"v1: mode isnt vec[]char,flex vec[]char"}; 
A_GISVEC(A68_VC ,EYUACTR,DYUACTR,38)
static A68_185   FYUACTR = {"A_VC_TOPLUS"}; 
A_GISVEC(A68_VC ,HYUACTR,FYUACTR,11)
static A68_123   JYUACTR = {"v2: mode isnt []char,flex []char"}; 
A_GISVEC(A68_VC ,KYUACTR,JYUACTR,32)
static A68_185   LYUACTR = {"A_RC_TOPLUS"}; 
A_GISVEC(A68_VC ,MYUACTR,LYUACTR,11)
static A68_189   ZYUACTR = {"-="}; 
A_GISVEC(A68_VC ,BZUACTR,ZYUACTR,2)
static A68_198   DZUACTR = {"A_COMPL_MINUSAB"}; 
A_GISVEC(A68_VC ,EZUACTR,DZUACTR,15)
static A68_189   TZUACTR = {"*="}; 
A_GISVEC(A68_VC ,VZUACTR,TZUACTR,2)
static A68_189   XZUACTR = {"*="}; 
A_GISVEC(A68_VC ,YZUACTR,XZUACTR,2)
static A68_198   AAVACTR = {"A_COMPL_TIMESAB"}; 
A_GISVEC(A68_VC ,BAVACTR,AAVACTR,15)
static A68_197   FAVACTR = {"A_VC_TIMESAB"}; 
A_GISVEC(A68_VC ,GAVACTR,FAVACTR,12)
static A68_197   IAVACTR = {"A_RC_TIMESAB"}; 
A_GISVEC(A68_VC ,JAVACTR,IAVACTR,12)
static A68_189   WAVACTR = {"/="}; 
A_GISVEC(A68_VC ,YAVACTR,WAVACTR,2)
static A68_64   MBVACTR = {"A_MODAB"}; 
A_GISVEC(A68_VC ,NBVACTR,MBVACTR,7)
static A68_189   ZBVACTR = {"/="}; 
A_GISVEC(A68_VC ,ACVACTR,ZBVACTR,2)
static A68_195   DCVACTR = {"A_COMPL_DIVAB"}; 
A_GISVEC(A68_VC ,ECVACTR,DCVACTR,13)
static A68_189   OCVACTR = {"=="}; 
A_GISVEC(A68_VC ,QCVACTR,OCVACTR,2)
static A68_189   RCVACTR = {"!="}; 
A_GISVEC(A68_VC ,SCVACTR,RCVACTR,2)
static A68_223   TCVACTR = {" illegal op number"}; 
A_GISVEC(A68_VC ,UCVACTR,TCVACTR,18)
static A68_189   BDVACTR = {"!="}; 
A_GISVEC(A68_VC ,CDVACTR,BDVACTR,2)
static A68_189   DDVACTR = {"! "}; 
A_GISVEC(A68_VC ,FDVACTR,DDVACTR,2)
static A68_201   GDVACTR = {""}; 
A_GISVEC(A68_VC ,HDVACTR,GDVACTR,0)
static A68_186   IDVACTR = {"A_R"}; 
A_GISVEC(A68_VC ,KDVACTR,IDVACTR,3)
static A68_186   LDVACTR = {"A_V"}; 
A_GISVEC(A68_VC ,MDVACTR,LDVACTR,3)
static A68_182   NDVACTR = {"STRUCTCOMP"}; 
A_GISVEC(A68_VC ,PDVACTR,NDVACTR,10)
static A68_224   HFVACTR = {"CYCLE not implemented"}; 
A_GISVEC(A68_VC ,IFVACTR,HFVACTR,21)
static A68_209  OFVACTR_dyadicsemantics A_UNUSED;
static A68_209  SFVACTR_dyadicbiopsemantics A_UNUSED;

A_STATIC A68_VOID  RLTACTR_simplemonop(A68_BOOL  Macro, A68_VC  Oper, A68_55 * Op, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  CMTACTR_simpledyop(A68_BOOL  Macro, A68_VC  Oper, A68_55 * Left, A68_55 * Right, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  PMTACTR_monadicplus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  VMTACTR_monadicminus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  RNTACTR_monadicupb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  JOTACTR_monadiclwb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  APTACTR_not(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  UPTACTR_abs(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  YQTACTR_bin(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  NRTACTR_repr(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  CSTACTR_lengthen(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  SSTACTR_shorten(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  ITTACTR_odd(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  XTTACTR_sign(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  LUTACTR_round(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  FWTACTR_entier(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  GYTACTR_simplemoncomp(A68_VC  Mac, A68_55 * Root, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  RYTACTR_re(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  ZYTACTR_im(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  HZTACTR_arg(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  VZTACTR_conj(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A68_VOID  LBUACTR_monadicsem(A68_55 * Root, A68_62  Rator, A68_55  *ReturnedValue);

A_STATIC A68_VOID  BCUACTR_complexop(A68_125  Modes, A68_VC  Op, A68_VC  Name, A68_55 * Left, A68_55 * Right, A68_BOOL  Lval, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  ODUACTR_dyadicplus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  REUACTR_dyadicminus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  HFUACTR_dyadicupb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  XFUACTR_dyadiclwb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  NGUACTR_and(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  GHUACTR_or(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  ZHUACTR_lessnotless(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  LJUACTR_lesseqgreatereq(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  CLUACTR_eqnoteq(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  WMUACTR_times(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  IOUACTR_divide(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  GPUACTR_over(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  SPUACTR_mod(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  QQUACTR_power(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  LSUACTR_castvalue(A68_INT  Mode, A68_55 * Value, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  SSUACTR_imaginary(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  XTUACTR_shiftleftright(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  UUUACTR_elem(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_BITS  SVUACTR_abattribute(A68_BOOL  Noref, A68_55 * Op);

A_STATIC A68_VOID  ZVUACTR_simpleabop(A68_BOOL  Noref, A68_BOOL  Macro, A68_VC  Oper, A68_55 * Left, A68_55 * Right, A68_56  *ReturnedValue);

A_STATIC A68_VOID  WWUACTR_plusab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  ZXUACTR_plusto(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  VYUACTR_minusab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  PZUACTR_timesab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  SAVACTR_overab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  HBVACTR_modab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  UBVACTR_divab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  NCVACTR_isisnt(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue);

A_STATIC A68_VOID  GFVACTR_anonymous(A68_55 * V, A68_INT  I, A68_INT  J, A68_55  *ReturnedValue);

A68_VOID  VFVACTR_dyadicsem(A68_55 * Root, A68_62  Rator, A68_55  *ReturnedValue);

A_STATIC A68_VOID  RLTACTR_simplemonop(A68_BOOL  Macro, A68_VC  Oper, A68_55 * Op, A68_VC  *ReturnedValue)
{ 
A68_VC  SLTACTR;  /* clause result */
A68_169  TLTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_172  ULTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  VLTACTR;  /* avoid structure result */
A68_VC  WLTACTR;  /* avoid structure result */
A68_VC  XLTACTR;  /* avoid structure result */
A_PROC_ENTRY(simplemonop);
 /* line 86: */
 /* line 87: */
if (Macro)
{ 
 /* line 88: */
SOQACTR_usemacro( Oper, A_HVEC(ULTACTR,A_UNITE(TLTACTR,mode1,1,Op),A68_169 ), &VLTACTR );
SLTACTR = VLTACTR;
} 
else
{ 
 /* line 89: */
BEQACTR_bracketcfragment( Op, &WLTACTR );
JIAACTR_bracket( A_VC_PLUS(Oper,WLTACTR), &XLTACTR );
SLTACTR = XLTACTR;
} 
A_PROC_EXIT(simplemonop);
*ReturnedValue = (SLTACTR);
return;
} 
#undef NL
 /* line 92: */

A_STATIC A68_VOID  CMTACTR_simpledyop(A68_BOOL  Macro, A68_VC  Oper, A68_55 * Left, A68_55 * Right, A68_VC  *ReturnedValue)
{ 
A68_192  DMTACTR;  /* collateral clause result */
A68_169  EMTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_169  FMTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  GMTACTR;  /* clause result */
A68_172  HMTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  IMTACTR;  /* avoid structure result */
A68_VC  JMTACTR;  /* avoid structure result */
A68_VC  KMTACTR;  /* avoid structure result */
A68_VC  LMTACTR;  /* avoid structure result */
A_PROC_ENTRY(simpledyop);
 /* line 93: */
 /* line 94: */
if (Macro)
{ 
DMTACTR.data[0] = A_UNITE(EMTACTR,mode1,1,Left);
DMTACTR.data[1] = A_UNITE(FMTACTR,mode1,1,Right);
 /* line 95: */
 /* line 96: */
SOQACTR_usemacro( Oper, A_HISVEC(HMTACTR,DMTACTR,2,A68_169 ), &IMTACTR );
GMTACTR = IMTACTR;
} 
else
{ 
 /* line 97: */
 /* line 98: */
BEQACTR_bracketcfragment( Left, &JMTACTR );
BEQACTR_bracketcfragment( Right, &KMTACTR );
JIAACTR_bracket( A_VC_PLUS(A_VC_PLUS(JMTACTR,Oper),KMTACTR), &LMTACTR );
GMTACTR = LMTACTR;
} 
A_PROC_EXIT(simpledyop);
*ReturnedValue = (GMTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  PMTACTR_monadicplus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * QMTACTR_op A_UNUSED = {0};
A68_55  RMTACTR;  /* clause result */
A_PROC_ENTRY(monadicplus);
 /* line 101: */
 /* line 102: */
{ 
(void)(EYQACTR_eval1(Root, (&QMTACTR_op)));
 /* line 103: */
RMTACTR = (*QMTACTR_op);
} 
A_PROC_EXIT(monadicplus);
*ReturnedValue = (RMTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  VMTACTR_monadicminus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * WMTACTR_op A_UNUSED = {0};
A68_55  XMTACTR;  /* collateral clause result */
A68_59  YMTACTR;  /* avoid structure result */
A68_59  ZMTACTR_temp A_UNUSED = {0};
A68_192  BNTACTR;  /* collateral clause result */
A68_169  CNTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_169  DNTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55 * ENTACTR;  /* YIELD */
A68_172  FNTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  HNTACTR;  /* avoid structure result */
A68_56  INTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  JNTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  KNTACTR;  /* avoid structure result */
A68_VC  LNTACTR;  /* avoid structure result */
A68_56  MNTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55  NNTACTR;  /* clause result */
A_PROC_ENTRY(monadicminus);
 /* line 110: */
 /* line 111: */
{ 
(void)(EYQACTR_eval1(Root, (&WMTACTR_op)));
 /* line 112: */
 /* line 113: */
XMTACTR.Mode = (*(&(Root->Mode)));
 /* line 114: */
XMTACTR.Info = (A68_BITS )((A68_BITS )((*(&(WMTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 115: */
if (Version==3)
{ 
A_CALLPROC(TMOACTR_new,((*(&(Root->Mode))), A_VC_PLUS(OJTACTR_qminus,NLTACTR_qcomplex), &YMTACTR),((*(&(Root->Mode))), A_VC_PLUS(OJTACTR_qminus,NLTACTR_qcomplex), &YMTACTR,(TMOACTR_new).nonlocals));
ZMTACTR_temp = YMTACTR;
 /* line 116: */
BNTACTR.data[0] = A_UNITE(CNTACTR,mode3,3,ZMTACTR_temp);
ENTACTR = JQQACTR_yield(A_VC_PLUS(OJTACTR_qminus,NLTACTR_qcomplex), WMTACTR_op) ;
BNTACTR.data[1] = A_UNITE(DNTACTR,mode1,1,ENTACTR);
 /* line 117: */
SOQACTR_usemacro( GNTACTR, A_HISVEC(FNTACTR,BNTACTR,2,A68_169 ), &HNTACTR );
XMTACTR.Extra = A_UNITE(INTACTR,mode6,6,HNTACTR);
} 
else
{ 
 /* line 118: */
 /* line 119: */
 /* line 120: */
BEQACTR_bracketcfragment( WMTACTR_op, &KNTACTR );
JIAACTR_bracket( A_VC_PLUS(A_HVEC(JNTACTR,'-',A68_CHAR ),KNTACTR), &LNTACTR );
XMTACTR.Extra = A_UNITE(MNTACTR,mode6,6,LNTACTR);
} 
NNTACTR = XMTACTR;
} 
A_PROC_EXIT(monadicminus);
*ReturnedValue = (NNTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  RNTACTR_monadicupb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * SNTACTR_op A_UNUSED = {0};
A68_55  TNTACTR;  /* collateral clause result */
A68_VC  VNTACTR;  /* avoid structure result */
A68_56  XNTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  YNTACTR;  /* YIELD */
A68_VC  AOTACTR;  /* avoid structure result */
A68_56  COTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  DOTACTR;  /* YIELD */
A68_56  EOTACTR = {0};  /* OPERATORS - skip to mode */
A68_55  FOTACTR;  /* clause result */
A_PROC_ENTRY(monadicupb);
 /* line 126: */
 /* line 127: */
{ 
(void)(EYQACTR_eval1(Root, (&SNTACTR_op)));
 /* line 128: */
 /* line 129: */
TNTACTR.Mode = (*(&(Root->Mode)));
 /* line 130: */
TNTACTR.Info = (A68_BITS )((A68_BITS )((*(&(SNTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 131: */
if ((Version==1)|(Version==3))
{ 
 /* line 132: */
BEQACTR_bracketcfragment( SNTACTR_op, &VNTACTR );
YNTACTR = A_VC_PLUS(VNTACTR,WNTACTR) ;
TNTACTR.Extra = A_UNITE(XNTACTR,mode6,6,YNTACTR);
} 
else
{ 
 /* line 133: */
if (Version==2)
{ 
 /* line 134: */
BEQACTR_bracketcfragment( SNTACTR_op, &AOTACTR );
DOTACTR = A_VC_PLUS(AOTACTR,BOTACTR) ;
TNTACTR.Extra = A_UNITE(COTACTR,mode6,6,DOTACTR);
} 
else
{ 
(void)(WXIACTR_assert(A_VC_PLUS(FITACTR_qmupb,ZHTACTR_qvfault), A68_FALSE));
 /* line 135: */
 /* line 136: */
 /* line 137: */
TNTACTR.Extra = EOTACTR;
} 
} 
FOTACTR = TNTACTR;
} 
A_PROC_EXIT(monadicupb);
*ReturnedValue = (FOTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  JOTACTR_monadiclwb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * KOTACTR_op A_UNUSED = {0};
A68_55  LOTACTR;  /* collateral clause result */
A68_56  OOTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  POTACTR;  /* YIELD */
A68_VC  ROTACTR;  /* avoid structure result */
A68_56  TOTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  UOTACTR;  /* YIELD */
A68_56  VOTACTR = {0};  /* OPERATORS - skip to mode */
A68_55  WOTACTR;  /* clause result */
A_PROC_ENTRY(monadiclwb);
 /* line 143: */
 /* line 144: */
{ 
(void)(EYQACTR_eval1(Root, (&KOTACTR_op)));
 /* line 145: */
 /* line 146: */
LOTACTR.Mode = (*(&(Root->Mode)));
 /* line 147: */
LOTACTR.Info = (A68_BITS )((A68_BITS )((*(&(KOTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 148: */
 /* line 149: */
if ((Version==1)|(Version==3))
{ 
POTACTR = NOTACTR ;
LOTACTR.Extra = A_UNITE(OOTACTR,mode6,6,POTACTR);
} 
else
{ 
 /* line 150: */
if (Version==2)
{ 
 /* line 151: */
BEQACTR_bracketcfragment( KOTACTR_op, &ROTACTR );
UOTACTR = A_VC_PLUS(ROTACTR,SOTACTR) ;
LOTACTR.Extra = A_UNITE(TOTACTR,mode6,6,UOTACTR);
} 
else
{ 
(void)(WXIACTR_assert(A_VC_PLUS(IITACTR_qmlwb,ZHTACTR_qvfault), A68_FALSE));
 /* line 152: */
 /* line 153: */
 /* line 154: */
LOTACTR.Extra = VOTACTR;
} 
} 
WOTACTR = LOTACTR;
} 
A_PROC_EXIT(monadiclwb);
*ReturnedValue = (WOTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  APTACTR_not(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * BPTACTR_op A_UNUSED = {0};
A68_55  CPTACTR;  /* collateral clause result */
A68_VC  FPTACTR;  /* avoid structure result */
A68_VC  GPTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_56  HPTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  IPTACTR;  /* YIELD */
A68_VC  JPTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  KPTACTR;  /* avoid structure result */
A68_56  LPTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  MPTACTR;  /* YIELD */
A68_56  PPTACTR = {0};  /* OPERATORS - skip to mode */
A68_55  QPTACTR;  /* clause result */
A_PROC_ENTRY(not);
 /* line 161: */
 /* line 162: */
{ 
(void)(EYQACTR_eval1(Root, (&BPTACTR_op)));
 /* line 163: */
 /* line 164: */
CPTACTR.Mode = (*(&(Root->Mode)));
 /* line 165: */
CPTACTR.Info = (A68_BITS )((A68_BITS )((*(&(BPTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 166: */
switch ( Version )
{ 
case 1: 
 /* line 167: */
BEQACTR_bracketcfragment( BPTACTR_op, &FPTACTR );
IPTACTR = A_VC_PLUS(A_VC_PLUS(EPTACTR,FPTACTR),A_HVEC(GPTACTR,')',A68_CHAR )) ;
CPTACTR.Extra = A_UNITE(HPTACTR,mode6,6,IPTACTR);
break;
case 2: 
 /* line 168: */
BEQACTR_bracketcfragment( BPTACTR_op, &KPTACTR );
MPTACTR = A_VC_PLUS(A_HVEC(JPTACTR,'~',A68_CHAR ),KPTACTR) ;
CPTACTR.Extra = A_UNITE(LPTACTR,mode6,6,MPTACTR);
break;
default: 
(void)(WXIACTR_assert(A_VC_PLUS(OPTACTR,ZHTACTR_qvfault), A68_FALSE));
 /* line 169: */
 /* line 170: */
 /* line 171: */
CPTACTR.Extra = PPTACTR;
break;
} 
QPTACTR = CPTACTR;
} 
A_PROC_EXIT(not);
*ReturnedValue = (QPTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  UPTACTR_abs(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * VPTACTR_op A_UNUSED = {0};
A68_VC  WPTACTR;  /* clause result */
A68_VC  XPTACTR;  /* avoid structure result */
A68_VC  YPTACTR;  /* avoid structure result */
A68_VC  BQTACTR;  /* avoid structure result */
A68_VC  CQTACTR;  /* avoid structure result */
A68_VC  DQTACTR;  /* avoid structure result */
A68_VC  IQTACTR;  /* avoid structure result */
A68_VC  NQTACTR;  /* avoid structure result */
A68_VC  QQTACTR;  /* avoid structure result */
A68_VC  RQTACTR_body A_UNUSED = {0};
A68_55  SQTACTR;  /* collateral clause result */
A68_56  TQTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55  UQTACTR;  /* clause result */
A_PROC_ENTRY(abs);
 /* line 181: */
 /* line 182: */
{ 
(void)(EYQACTR_eval1(Root, (&VPTACTR_op)));
 /* line 183: */
 /* line 184: */
 /* line 185: */
switch ( Version )
{ 
case 1: 
 /* line 186: */
UZPACTR_getcfragment( VPTACTR_op, &XPTACTR );
JIAACTR_bracket( XPTACTR, &YPTACTR );
WPTACTR = YPTACTR;
break;
case 2: 
 /* line 187: */
BEQACTR_bracketcfragment( VPTACTR_op, &BQTACTR );
WPTACTR = A_VC_PLUS(AQTACTR,BQTACTR);
break;
case 3: 
 /* line 188: */
FLNACTR_cast( (*(&(Root->Mode))), &CQTACTR );
BEQACTR_bracketcfragment( VPTACTR_op, &DQTACTR );
WPTACTR = A_VC_PLUS(CQTACTR,DQTACTR);
break;
case 4: 
 /* line 189: */
RLTACTR_simplemonop( A68_TRUE, HQTACTR, JQQACTR_yield(A_VC_PLUS(LITACTR_qabs,GQTACTR), VPTACTR_op), &IQTACTR );
WPTACTR = IQTACTR;
break;
case 5: 
 /* line 190: */
RLTACTR_simplemonop( A68_TRUE, MQTACTR, JQQACTR_yield(A_VC_PLUS(LITACTR_qabs,LQTACTR), VPTACTR_op), &NQTACTR );
WPTACTR = NQTACTR;
break;
case 6: 
 /* line 191: */
RLTACTR_simplemonop( A68_TRUE, PQTACTR, JQQACTR_yield(A_VC_PLUS(LITACTR_qabs,NLTACTR_qcomplex), VPTACTR_op), &QQTACTR );
WPTACTR = QQTACTR;
break;
default: 
A_IMP_SKIP ;
break;
} 
RQTACTR_body = WPTACTR;
 /* line 192: */
SQTACTR.Mode = (*(&(Root->Mode)));
SQTACTR.Info = (A68_BITS )((A68_BITS )((*(&(VPTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 193: */
SQTACTR.Extra = A_UNITE(TQTACTR,mode6,6,RQTACTR_body);
UQTACTR = SQTACTR;
} 
A_PROC_EXIT(abs);
*ReturnedValue = (UQTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  YQTACTR_bin(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55  ZQTACTR;  /* clause result */
A68_55  ARTACTR;  /* avoid structure result */
A68_55 * BRTACTR_op A_UNUSED = {0};
A68_55  CRTACTR;  /* collateral clause result */
A68_VC  DRTACTR;  /* avoid structure result */
A68_VC  ERTACTR;  /* avoid structure result */
A68_56  FRTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  GRTACTR;  /* YIELD */
A68_56  JRTACTR = {0};  /* OPERATORS - skip to mode */
A_PROC_ENTRY(bin);
 /* line 199: */
 /* line 200: */
 /* line 201: */
 /* line 202: */
if (Version==3)
{ 
 /* line 203: */
 /* line 204: */
GCTACTR_biop99( Root, &ARTACTR );
ZQTACTR = ARTACTR;
} 
else
{ 
(void)(EYQACTR_eval1(Root, (&BRTACTR_op)));
 /* line 205: */
 /* line 206: */
CRTACTR.Mode = (*(&(Root->Mode)));
 /* line 207: */
CRTACTR.Info = (A68_BITS )((A68_BITS )((*(&(BRTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 208: */
if (Version==1)
{ 
 /* line 209: */
FLNACTR_cast( ((*(&(BRTACTR_op->Mode)))-4), &DRTACTR );
BEQACTR_bracketcfragment( BRTACTR_op, &ERTACTR );
GRTACTR = A_VC_PLUS(DRTACTR,ERTACTR) ;
CRTACTR.Extra = A_UNITE(FRTACTR,mode6,6,GRTACTR);
} 
else
{ 
(void)(WXIACTR_assert(A_VC_PLUS(IRTACTR,ZHTACTR_qvfault), A68_FALSE));
 /* line 210: */
 /* line 211: */
 /* line 212: */
CRTACTR.Extra = JRTACTR;
} 
ZQTACTR = CRTACTR;
} 
A_PROC_EXIT(bin);
*ReturnedValue = (ZQTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  NRTACTR_repr(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * ORTACTR_op A_UNUSED = {0};
A68_55  PRTACTR;  /* collateral clause result */
A68_VC  SRTACTR;  /* avoid structure result */
A68_56  TRTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  URTACTR;  /* YIELD */
A68_56  XRTACTR = {0};  /* OPERATORS - skip to mode */
A68_55  YRTACTR;  /* clause result */
A_PROC_ENTRY(repr);
 /* line 218: */
 /* line 219: */
{ 
(void)(EYQACTR_eval1(Root, (&ORTACTR_op)));
 /* line 220: */
 /* line 221: */
PRTACTR.Mode = (*(&(Root->Mode)));
 /* line 222: */
PRTACTR.Info = (A68_BITS )((A68_BITS )((*(&(ORTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 225: */
if (Version==1)
{ 
 /* line 226: */
BEQACTR_bracketcfragment( ORTACTR_op, &SRTACTR );
URTACTR = A_VC_PLUS(RRTACTR,SRTACTR) ;
PRTACTR.Extra = A_UNITE(TRTACTR,mode6,6,URTACTR);
} 
else
{ 
(void)(WXIACTR_assert(A_VC_PLUS(WRTACTR,ZHTACTR_qvfault), A68_FALSE));
 /* line 227: */
 /* line 228: */
 /* line 229: */
PRTACTR.Extra = XRTACTR;
} 
YRTACTR = PRTACTR;
} 
A_PROC_EXIT(repr);
*ReturnedValue = (YRTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  CSTACTR_lengthen(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * DSTACTR_op A_UNUSED = {0};
A68_INT  ESTACTR_m A_UNUSED = {0};
A68_BOOL  GSTACTR;  /* optbool result */
A68_VC  ISTACTR;  /* avoid structure result */
A68_55  JSTACTR;  /* collateral clause result */
A68_VC  KSTACTR;  /* avoid structure result */
A68_VC  LSTACTR;  /* avoid structure result */
A68_56  MSTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  NSTACTR;  /* YIELD */
A68_55  OSTACTR;  /* clause result */
A_PROC_ENTRY(lengthen);
 /* line 232: */
 /* line 233: */
{ 
(void)(EYQACTR_eval1(Root, (&DSTACTR_op)));
 /* line 234: */
ESTACTR_m = (*(&(DSTACTR_op->Mode)));
 /* line 235: */
 /* line 236: */
GSTACTR = (ESTACTR_m!=13);
if ( GSTACTR )
{GSTACTR = (ESTACTR_m!=17);
}
if ( GSTACTR )
{GSTACTR = (ESTACTR_m!=21);
}
if ( GSTACTR )
{GSTACTR = (ESTACTR_m!=25);
}
ROAAOSF_whole( ESTACTR_m, 0, &ISTACTR );
(void)(WXIACTR_assert(A_VC_PLUS(HSTACTR,ISTACTR), GSTACTR));
 /* line 237: */
 /* line 238: */
JSTACTR.Mode = (*(&(Root->Mode)));
 /* line 239: */
JSTACTR.Info = (A68_BITS )((A68_BITS )((*(&(DSTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 240: */
 /* line 241: */
FLNACTR_cast( (ESTACTR_m+1), &KSTACTR );
BEQACTR_bracketcfragment( DSTACTR_op, &LSTACTR );
NSTACTR = A_VC_PLUS(KSTACTR,LSTACTR) ;
JSTACTR.Extra = A_UNITE(MSTACTR,mode6,6,NSTACTR);
OSTACTR = JSTACTR;
} 
A_PROC_EXIT(lengthen);
*ReturnedValue = (OSTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  SSTACTR_shorten(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * TSTACTR_op A_UNUSED = {0};
A68_INT  USTACTR_m A_UNUSED = {0};
A68_BOOL  WSTACTR;  /* optbool result */
A68_VC  YSTACTR;  /* avoid structure result */
A68_55  ZSTACTR;  /* collateral clause result */
A68_VC  ATTACTR;  /* avoid structure result */
A68_VC  BTTACTR;  /* avoid structure result */
A68_56  CTTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  DTTACTR;  /* YIELD */
A68_55  ETTACTR;  /* clause result */
A_PROC_ENTRY(shorten);
 /* line 244: */
 /* line 245: */
{ 
(void)(EYQACTR_eval1(Root, (&TSTACTR_op)));
 /* line 246: */
USTACTR_m = (*(&(TSTACTR_op->Mode)));
 /* line 247: */
 /* line 248: */
WSTACTR = (USTACTR_m!=10);
if ( WSTACTR )
{WSTACTR = (USTACTR_m!=14);
}
if ( WSTACTR )
{WSTACTR = (USTACTR_m!=18);
}
if ( WSTACTR )
{WSTACTR = (USTACTR_m!=22);
}
ROAAOSF_whole( USTACTR_m, 0, &YSTACTR );
(void)(WXIACTR_assert(A_VC_PLUS(XSTACTR,YSTACTR), WSTACTR));
 /* line 249: */
 /* line 250: */
ZSTACTR.Mode = (*(&(Root->Mode)));
 /* line 251: */
ZSTACTR.Info = (A68_BITS )((A68_BITS )((*(&(TSTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 252: */
 /* line 253: */
FLNACTR_cast( (USTACTR_m-1), &ATTACTR );
BEQACTR_bracketcfragment( TSTACTR_op, &BTTACTR );
DTTACTR = A_VC_PLUS(ATTACTR,BTTACTR) ;
ZSTACTR.Extra = A_UNITE(CTTACTR,mode6,6,DTTACTR);
ETTACTR = ZSTACTR;
} 
A_PROC_EXIT(shorten);
*ReturnedValue = (ETTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ITTACTR_odd(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * JTTACTR_op A_UNUSED = {0};
A68_55  KTTACTR;  /* collateral clause result */
A68_VC  MTTACTR;  /* avoid structure result */
A68_VC  OTTACTR;  /* avoid structure result */
A68_56  PTTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_56  STTACTR = {0};  /* OPERATORS - skip to mode */
A68_55  TTTACTR;  /* clause result */
A_PROC_ENTRY(odd);
 /* line 259: */
 /* line 260: */
{ 
(void)(EYQACTR_eval1(Root, (&JTTACTR_op)));
 /* line 261: */
 /* line 262: */
KTTACTR.Mode = (*(&(Root->Mode)));
 /* line 263: */
KTTACTR.Info = (A68_BITS )((A68_BITS )((*(&(JTTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 264: */
if (Version==1)
{ 
 /* line 265: */
BEQACTR_bracketcfragment( JTTACTR_op, &MTTACTR );
JIAACTR_bracket( A_VC_PLUS(MTTACTR,NTTACTR), &OTTACTR );
KTTACTR.Extra = A_UNITE(PTTACTR,mode6,6,OTTACTR);
} 
else
{ 
(void)(WXIACTR_assert(A_VC_PLUS(RTTACTR,ZHTACTR_qvfault), A68_FALSE));
 /* line 266: */
 /* line 267: */
 /* line 268: */
 /* line 269: */
KTTACTR.Extra = STTACTR;
} 
TTTACTR = KTTACTR;
} 
A_PROC_EXIT(odd);
*ReturnedValue = (TTTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  XTTACTR_sign(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * YTTACTR_op A_UNUSED = {0};
A68_55  ZTTACTR;  /* collateral clause result */
A68_VC  CUTACTR;  /* avoid structure result */
A68_56  DUTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_56  GUTACTR = {0};  /* OPERATORS - skip to mode */
A68_55  HUTACTR;  /* clause result */
A_PROC_ENTRY(sign);
 /* line 276: */
 /* line 277: */
{ 
(void)(EYQACTR_eval1(Root, (&YTTACTR_op)));
 /* line 278: */
 /* line 279: */
ZTTACTR.Mode = (*(&(Root->Mode)));
 /* line 280: */
ZTTACTR.Info = (A68_BITS )((A68_BITS )((*(&(YTTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 281: */
if ((Version==1)|(Version==2))
{ 
 /* line 282: */
RLTACTR_simplemonop( A68_TRUE, BUTACTR, JQQACTR_yield(UITACTR_qsign, YTTACTR_op), &CUTACTR );
ZTTACTR.Extra = A_UNITE(DUTACTR,mode6,6,CUTACTR);
} 
else
{ 
(void)(WXIACTR_assert(A_VC_PLUS(FUTACTR,ZHTACTR_qvfault), A68_FALSE));
 /* line 283: */
 /* line 284: */
 /* line 285: */
 /* line 286: */
ZTTACTR.Extra = GUTACTR;
} 
HUTACTR = ZTTACTR;
} 
A_PROC_EXIT(sign);
*ReturnedValue = (HUTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  LUTACTR_round(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * MUTACTR_op A_UNUSED = {0};
A68_INT  NUTACTR_m A_UNUSED = {0};
A68_VC  QUTACTR;  /* avoid structure result */
A68_55  RUTACTR;  /* collateral clause result */
A68_VC  SUTACTR;  /* OPERATORS - istruct -> vector */
A68_64  TUTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  UUTACTR_temp1 A_UNUSED = {0};
A68_202  VUTACTR;  /* collateral clause result */
A68_76  YUTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ZUTACTR;  /* YIELD */
A68_76  AVTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_76  BVTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  CVTACTR;  /* YIELD */
A68_76  HVTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  IVTACTR;  /* YIELD */
A68_76  LVTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  MVTACTR;  /* YIELD */
A68_76  NVTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_75  OVTACTR;  /* OPERATORS - istruct -> vector */
A68_203  QVTACTR;  /* collateral clause result */
A68_169  RVTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_169  SVTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55 * TVTACTR;  /* YIELD */
A68_VC  UVTACTR;  /* avoid structure result */
A68_169  VVTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_172  WVTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  YVTACTR;  /* avoid structure result */
A68_56  ZVTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_56  AWTACTR = {0};  /* OPERATORS - skip to mode */
A68_55  BWTACTR;  /* clause result */
A_PROC_ENTRY(round);
 /* line 296: */
 /* line 297: */
{ 
(void)(EYQACTR_eval1(Root, (&MUTACTR_op)));
 /* line 298: */
NUTACTR_m = (*(&(MUTACTR_op->Mode)));
 /* line 299: */
 /* line 300: */
ROAAOSF_whole( NUTACTR_m, 0, &QUTACTR );
(void)(WXIACTR_assert(A_VC_PLUS(A_VC_PLUS(OITACTR_qround,PUTACTR),QUTACTR), ((NUTACTR_m<=21)&(NUTACTR_m>=18))));
 /* line 301: */
 /* line 302: */
RUTACTR.Mode = (*(&(Root->Mode)));
 /* line 303: */
RUTACTR.Info = (A68_BITS )((A68_BITS )((*(&(MUTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 304: */
if (Version==1)
{ 
TUTACTR = QIMACTR_newuniquename() ;
UUTACTR_temp1 = A_HISVEC(SUTACTR,TUTACTR,7,A68_CHAR );
 /* line 305: */
 /* line 306: */
ZUTACTR = XUTACTR ;
VUTACTR.data[0] = A_UNITE(YUTACTR,mode2,2,ZUTACTR);
VUTACTR.data[1] = A_UNITE(AVTACTR,mode2,2,UUTACTR_temp1);
 /* line 307: */
CVTACTR = ';' ;
VUTACTR.data[2] = A_UNITE(BVTACTR,mode1,1,CVTACTR);
if (AQIACTR_verboseoption)
{ 
IVTACTR = A_VC_PLUS(A_VC_PLUS(FVTACTR,OITACTR_qround),GVTACTR) ;
VUTACTR.data[3] = A_UNITE(HVTACTR,mode2,2,IVTACTR);
} 
else
{ 
 /* line 308: */
MVTACTR = KVTACTR ;
VUTACTR.data[3] = A_UNITE(LVTACTR,mode2,2,MVTACTR);
} 
VUTACTR.data[4] = A_UNITE(NVTACTR,mode4,4,EIAACTR_cnewline);
 /* line 309: */
(void)(MDMACTR_writecstream(A_HISVEC(OVTACTR,VUTACTR,5,A68_76 ), QSLACTR_locdecstream(VRLACTR_currentlevel())));
 /* line 310: */
QVTACTR.data[0] = A_UNITE(RVTACTR,mode2,2,UUTACTR_temp1);
TVTACTR = JQQACTR_yield(OITACTR_qround, MUTACTR_op) ;
QVTACTR.data[1] = A_UNITE(SVTACTR,mode1,1,TVTACTR);
FLNACTR_cast( (NUTACTR_m-4), &UVTACTR );
QVTACTR.data[2] = A_UNITE(VVTACTR,mode2,2,UVTACTR);
 /* line 311: */
SOQACTR_usemacro( XVTACTR, A_HISVEC(WVTACTR,QVTACTR,3,A68_169 ), &YVTACTR );
RUTACTR.Extra = A_UNITE(ZVTACTR,mode6,6,YVTACTR);
} 
else
{ 
(void)(WXIACTR_assert(A_VC_PLUS(OITACTR_qround,ZHTACTR_qvfault), A68_FALSE));
 /* line 312: */
 /* line 313: */
 /* line 314: */
 /* line 315: */
RUTACTR.Extra = AWTACTR;
} 
BWTACTR = RUTACTR;
} 
A_PROC_EXIT(round);
*ReturnedValue = (BWTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  FWTACTR_entier(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * GWTACTR_op A_UNUSED = {0};
A68_INT  HWTACTR_m A_UNUSED = {0};
A68_VC  KWTACTR;  /* avoid structure result */
A68_55  LWTACTR;  /* collateral clause result */
A68_VC  MWTACTR;  /* OPERATORS - istruct -> vector */
A68_64  NWTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  OWTACTR_temp1 A_UNUSED = {0};
A68_VC  PWTACTR;  /* OPERATORS - istruct -> vector */
A68_64  QWTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  RWTACTR_temp2 A_UNUSED = {0};
A68_205  SWTACTR;  /* collateral clause result */
A68_76  VWTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  WWTACTR;  /* YIELD */
A68_76  XWTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_76  YWTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  ZWTACTR;  /* YIELD */
A68_76  AXTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_76  BXTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  CXTACTR;  /* YIELD */
A68_76  HXTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  IXTACTR;  /* YIELD */
A68_76  LXTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  MXTACTR;  /* YIELD */
A68_76  NXTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_75  OXTACTR;  /* OPERATORS - istruct -> vector */
A68_207  QXTACTR;  /* collateral clause result */
A68_169  RXTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_169  SXTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_169  TXTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55 * UXTACTR;  /* YIELD */
A68_VC  VXTACTR;  /* avoid structure result */
A68_169  WXTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_172  XXTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ZXTACTR;  /* avoid structure result */
A68_56  AYTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_56  BYTACTR = {0};  /* OPERATORS - skip to mode */
A68_55  CYTACTR;  /* clause result */
A_PROC_ENTRY(entier);
 /* line 327: */
 /* line 328: */
{ 
(void)(EYQACTR_eval1(Root, (&GWTACTR_op)));
 /* line 329: */
HWTACTR_m = (*(&(GWTACTR_op->Mode)));
 /* line 330: */
 /* line 331: */
ROAAOSF_whole( HWTACTR_m, 0, &KWTACTR );
(void)(WXIACTR_assert(A_VC_PLUS(A_VC_PLUS(RITACTR_qentier,JWTACTR),KWTACTR), ((HWTACTR_m<=21)&(HWTACTR_m>=18))));
 /* line 332: */
 /* line 333: */
LWTACTR.Mode = (*(&(Root->Mode)));
 /* line 334: */
LWTACTR.Info = (A68_BITS )((A68_BITS )((*(&(GWTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 335: */
if (Version==1)
{ 
NWTACTR = QIMACTR_newuniquename() ;
OWTACTR_temp1 = A_HISVEC(MWTACTR,NWTACTR,7,A68_CHAR );
 /* line 336: */
QWTACTR = QIMACTR_newuniquename() ;
RWTACTR_temp2 = A_HISVEC(PWTACTR,QWTACTR,7,A68_CHAR );
 /* line 337: */
 /* line 338: */
WWTACTR = UWTACTR ;
SWTACTR.data[0] = A_UNITE(VWTACTR,mode2,2,WWTACTR);
SWTACTR.data[1] = A_UNITE(XWTACTR,mode2,2,OWTACTR_temp1);
ZWTACTR = ',' ;
SWTACTR.data[2] = A_UNITE(YWTACTR,mode1,1,ZWTACTR);
SWTACTR.data[3] = A_UNITE(AXTACTR,mode2,2,RWTACTR_temp2);
 /* line 339: */
CXTACTR = ';' ;
SWTACTR.data[4] = A_UNITE(BXTACTR,mode1,1,CXTACTR);
if (AQIACTR_verboseoption)
{ 
IXTACTR = A_VC_PLUS(A_VC_PLUS(FXTACTR,RITACTR_qentier),GXTACTR) ;
SWTACTR.data[5] = A_UNITE(HXTACTR,mode2,2,IXTACTR);
} 
else
{ 
 /* line 340: */
MXTACTR = KXTACTR ;
SWTACTR.data[5] = A_UNITE(LXTACTR,mode2,2,MXTACTR);
} 
SWTACTR.data[6] = A_UNITE(NXTACTR,mode4,4,EIAACTR_cnewline);
 /* line 341: */
(void)(MDMACTR_writecstream(A_HISVEC(OXTACTR,SWTACTR,7,A68_76 ), QSLACTR_locdecstream(VRLACTR_currentlevel())));
 /* line 342: */
QXTACTR.data[0] = A_UNITE(RXTACTR,mode2,2,OWTACTR_temp1);
QXTACTR.data[1] = A_UNITE(SXTACTR,mode2,2,RWTACTR_temp2);
UXTACTR = JQQACTR_yield(RITACTR_qentier, GWTACTR_op) ;
QXTACTR.data[2] = A_UNITE(TXTACTR,mode1,1,UXTACTR);
FLNACTR_cast( (HWTACTR_m-4), &VXTACTR );
QXTACTR.data[3] = A_UNITE(WXTACTR,mode2,2,VXTACTR);
 /* line 343: */
SOQACTR_usemacro( YXTACTR, A_HISVEC(XXTACTR,QXTACTR,4,A68_169 ), &ZXTACTR );
LWTACTR.Extra = A_UNITE(AYTACTR,mode6,6,ZXTACTR);
} 
else
{ 
(void)(WXIACTR_assert(A_VC_PLUS(RITACTR_qentier,ZHTACTR_qvfault), A68_FALSE));
 /* line 344: */
 /* line 345: */
 /* line 346: */
LWTACTR.Extra = BYTACTR;
} 
CYTACTR = LWTACTR;
} 
A_PROC_EXIT(entier);
*ReturnedValue = (CYTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  GYTACTR_simplemoncomp(A68_VC  Mac, A68_55 * Root, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * HYTACTR_op A_UNUSED = {0};
A68_55  IYTACTR;  /* collateral clause result */
A68_169  JYTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_172  KYTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  LYTACTR;  /* avoid structure result */
A68_56  MYTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55  NYTACTR;  /* clause result */
A_PROC_ENTRY(simplemoncomp);
 /* line 350: */
 /* line 351: */
{ 
(void)(EYQACTR_eval1(Root, (&HYTACTR_op)));
 /* line 352: */
 /* line 353: */
IYTACTR.Mode = (*(&(Root->Mode)));
 /* line 354: */
IYTACTR.Info = (A68_BITS )((A68_BITS )((*(&(HYTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 355: */
 /* line 356: */
SOQACTR_usemacro( Mac, A_HVEC(KYTACTR,A_UNITE(JYTACTR,mode1,1,HYTACTR_op),A68_169 ), &LYTACTR );
IYTACTR.Extra = A_UNITE(MYTACTR,mode6,6,LYTACTR);
NYTACTR = IYTACTR;
} 
A_PROC_EXIT(simplemoncomp);
*ReturnedValue = (NYTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  RYTACTR_re(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55  TYTACTR;  /* clause result */
A68_55  VYTACTR;  /* avoid structure result */
A_PROC_ENTRY(re);
 /* line 361: */
GYTACTR_simplemoncomp( UYTACTR, Root, Version, &VYTACTR );
TYTACTR = VYTACTR;
A_PROC_EXIT(re);
*ReturnedValue = (TYTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ZYTACTR_im(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55  BZTACTR;  /* clause result */
A68_55  DZTACTR;  /* avoid structure result */
A_PROC_ENTRY(im);
 /* line 365: */
GYTACTR_simplemoncomp( CZTACTR, Root, Version, &DZTACTR );
BZTACTR = DZTACTR;
A_PROC_EXIT(im);
*ReturnedValue = (BZTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HZTACTR_arg(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * IZTACTR_op A_UNUSED = {0};
A68_55  JZTACTR;  /* collateral clause result */
A68_169  LZTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55 * MZTACTR;  /* YIELD */
A68_172  NZTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  PZTACTR;  /* avoid structure result */
A68_56  QZTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55  RZTACTR;  /* clause result */
A_PROC_ENTRY(arg);
 /* line 371: */
 /* line 372: */
{ 
(void)(EYQACTR_eval1(Root, (&IZTACTR_op)));
 /* line 373: */
 /* line 374: */
JZTACTR.Mode = (*(&(Root->Mode)));
 /* line 375: */
JZTACTR.Info = (A68_BITS )((A68_BITS )((*(&(IZTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 376: */
 /* line 377: */
MZTACTR = JQQACTR_yield(DJTACTR_qarg, IZTACTR_op) ;
SOQACTR_usemacro( OZTACTR, A_HVEC(NZTACTR,A_UNITE(LZTACTR,mode1,1,MZTACTR),A68_169 ), &PZTACTR );
JZTACTR.Extra = A_UNITE(QZTACTR,mode6,6,PZTACTR);
RZTACTR = JZTACTR;
} 
A_PROC_EXIT(arg);
*ReturnedValue = (RZTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  VZTACTR_conj(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * WZTACTR_op A_UNUSED = {0};
A68_59  ZZTACTR;  /* avoid structure result */
A68_59  AAUACTR_temp A_UNUSED = {0};
A68_55  BAUACTR;  /* collateral clause result */
A68_192  DAUACTR;  /* collateral clause result */
A68_169  EAUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_169  FAUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55 * GAUACTR;  /* YIELD */
A68_172  HAUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  JAUACTR;  /* avoid structure result */
A68_56  KAUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55  LAUACTR;  /* clause result */
A_PROC_ENTRY(conj);
 /* line 381: */
 /* line 382: */
{ 
(void)(EYQACTR_eval1(Root, (&WZTACTR_op)));
 /* line 383: */
A_CALLPROC(TMOACTR_new,((*(&(WZTACTR_op->Mode))), YZTACTR, &ZZTACTR),((*(&(WZTACTR_op->Mode))), YZTACTR, &ZZTACTR,(TMOACTR_new).nonlocals));
AAUACTR_temp = ZZTACTR;
 /* line 384: */
 /* line 385: */
BAUACTR.Mode = (*(&(Root->Mode)));
 /* line 386: */
BAUACTR.Info = (A68_BITS )((A68_BITS )((*(&(WZTACTR_op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
DAUACTR.data[0] = A_UNITE(EAUACTR,mode3,3,AAUACTR_temp);
GAUACTR = JQQACTR_yield(GJTACTR_qconj, WZTACTR_op) ;
DAUACTR.data[1] = A_UNITE(FAUACTR,mode1,1,GAUACTR);
 /* line 387: */
 /* line 388: */
SOQACTR_usemacro( IAUACTR, A_HISVEC(HAUACTR,DAUACTR,2,A68_169 ), &JAUACTR );
BAUACTR.Extra = A_UNITE(KAUACTR,mode6,6,JAUACTR);
LAUACTR = BAUACTR;
} 
A_PROC_EXIT(conj);
*ReturnedValue = (LAUACTR);
return;
} 
#undef NL

A68_VOID  LBUACTR_monadicsem(A68_55 * Root, A68_62  Rator, A68_55  *ReturnedValue)
{ 
A68_INT  MBUACTR_param A_UNUSED = {0};
A68_BOOL  NBUACTR;  /* clause result */
A68_INT  OBUACTR_opnumber A_UNUSED = {0};
A68_INT  PBUACTR;  /* ADICOPS - MOD */
A68_INT  QBUACTR_version A_UNUSED = {0};
A68_55  RBUACTR;  /* clause result */
A68_193  SBUACTR;  /* CALL */
A68_55  TBUACTR;  /* avoid structure result */
A68_55  UBUACTR;  /* avoid structure result */
A_PROC_ENTRY(monadicsem);
 /* line 414: */
 /* line 415: */
{ 
MBUACTR_param = (A68_INT )(A68_BITS )((A68_BITS )Rator.Param&ZGAACTR_parammask);
 /* line 416: */
 /* line 417: */
 /* line 418: */
NBUACTR = (MBUACTR_param<RGAACTR_biopnumbersstart);
if (NBUACTR)
{ 
OBUACTR_opnumber = (MBUACTR_param/SGAACTR_opnumberdivisor);
 /* line 419: */
QBUACTR_version = A_MOD(MBUACTR_param,SGAACTR_opnumberdivisor,PBUACTR);
 /* line 420: */
 /* line 421: */
 /* line 422: */
SBUACTR = A_R1INDEX(IBUACTR_monadicsemantics,OBUACTR_opnumber) ;
A_CALLPROC(SBUACTR,(Root, OBUACTR_opnumber, QBUACTR_version, &TBUACTR),(Root, OBUACTR_opnumber, QBUACTR_version, &TBUACTR,(SBUACTR).nonlocals));
RBUACTR = TBUACTR;
} 
else
{ 
 /* line 423: */
HHTACTR_monadicbiopsemantics( Root, MBUACTR_param, &UBUACTR );
RBUACTR = UBUACTR;
} 
} 
A_PROC_EXIT(monadicsem);
*ReturnedValue = (RBUACTR);
return;
} 
#undef NL
 /* line 427: */

A_STATIC A68_VOID  BCUACTR_complexop(A68_125  Modes, A68_VC  Op, A68_VC  Name, A68_55 * Left, A68_55 * Right, A68_BOOL  Lval, A68_VC  *ReturnedValue)
{ 
A68_55 * ECUACTR_l A_UNUSED = {0};
A68_55 * HCUACTR_r A_UNUSED = {0};
A68_192  ICUACTR;  /* collateral clause result */
A68_169  JCUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_169  KCUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_172  LCUACTR;  /* clause result */
A68_172  MCUACTR;  /* OPERATORS - istruct -> vector */
A68_203  NCUACTR;  /* collateral clause result */
A68_INT  OCUACTR;  /* YIELD */
A68_59  PCUACTR;  /* avoid structure result */
A68_169  QCUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_169  RCUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_169  SCUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_172  TCUACTR;  /* OPERATORS - istruct -> vector */
A68_207  UCUACTR;  /* collateral clause result */
A68_INT  XCUACTR;  /* YIELD */
A68_59  YCUACTR;  /* avoid structure result */
A68_169  ZCUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  CDUACTR;  /* YIELD */
A68_59  DDUACTR;  /* avoid structure result */
A68_169  EDUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_169  FDUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_169  GDUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_172  HDUACTR;  /* OPERATORS - istruct -> vector */
A68_172  IDUACTR_params A_UNUSED = {0};
A68_VC  JDUACTR;  /* clause result */
A68_VC  KDUACTR;  /* avoid structure result */
A_PROC_ENTRY(complexop);
 /* line 428: */
 /* line 429: */
{ 
ECUACTR_l = JQQACTR_yield(A_VC_PLUS(Name,DCUACTR), Left);
HCUACTR_r = JQQACTR_yield(A_VC_PLUS(Name,GCUACTR), Right);
 /* line 430: */
if (Lval)
{ 
(void)(PKAAOSF_orab((&(ECUACTR_l->Info)), VKJACTR_lvalue));
} 
 /* line 431: */
 /* line 432: */
if (Modes.upb==0)
{ 
ICUACTR.data[0] = A_UNITE(JCUACTR,mode1,1,ECUACTR_l);
 /* line 433: */
ICUACTR.data[1] = A_UNITE(KCUACTR,mode1,1,HCUACTR_r);
LCUACTR = A_HISVEC(MCUACTR,ICUACTR,2,A68_169 );
} 
else
{ 
if (Modes.upb==1)
{ 
OCUACTR = 1 ;
A_CALLPROC(TMOACTR_new,(A_VINDEX(Modes,OCUACTR), Name, &PCUACTR),(A_VINDEX(Modes,OCUACTR), Name, &PCUACTR,(TMOACTR_new).nonlocals));
NCUACTR.data[0] = A_UNITE(QCUACTR,mode3,3,PCUACTR);
NCUACTR.data[1] = A_UNITE(RCUACTR,mode1,1,ECUACTR_l);
 /* line 434: */
NCUACTR.data[2] = A_UNITE(SCUACTR,mode1,1,HCUACTR_r);
LCUACTR = A_HISVEC(TCUACTR,NCUACTR,3,A68_169 );
} 
else
{ 
XCUACTR = 1 ;
A_CALLPROC(TMOACTR_new,(A_VINDEX(Modes,XCUACTR), A_VC_PLUS(Name,WCUACTR), &YCUACTR),(A_VINDEX(Modes,XCUACTR), A_VC_PLUS(Name,WCUACTR), &YCUACTR,(TMOACTR_new).nonlocals));
UCUACTR.data[0] = A_UNITE(ZCUACTR,mode3,3,YCUACTR);
CDUACTR = 2 ;
A_CALLPROC(TMOACTR_new,(A_VINDEX(Modes,CDUACTR), A_VC_PLUS(Name,BDUACTR), &DDUACTR),(A_VINDEX(Modes,CDUACTR), A_VC_PLUS(Name,BDUACTR), &DDUACTR,(TMOACTR_new).nonlocals));
UCUACTR.data[1] = A_UNITE(EDUACTR,mode3,3,DDUACTR);
UCUACTR.data[2] = A_UNITE(FDUACTR,mode1,1,ECUACTR_l);
 /* line 435: */
UCUACTR.data[3] = A_UNITE(GDUACTR,mode1,1,HCUACTR_r);
LCUACTR = A_HISVEC(HDUACTR,UCUACTR,4,A68_169 );
} 
} 
IDUACTR_params = LCUACTR;
 /* line 436: */
 /* line 437: */
SOQACTR_usemacro( Op, IDUACTR_params, &KDUACTR );
JDUACTR = KDUACTR;
} 
A_PROC_EXIT(complexop);
*ReturnedValue = (JDUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ODUACTR_dyadicplus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * PDUACTR_left A_UNUSED = {0};
A68_55 * QDUACTR_right A_UNUSED = {0};
A68_VC  SDUACTR;  /* clause result */
A68_VC  UDUACTR;  /* avoid structure result */
A68_VC  VDUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  WDUACTR;  /* avoid structure result */
A68_VC  XDUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  YDUACTR;  /* avoid structure result */
A68_125  BEUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  CEUACTR;  /* avoid structure result */
A68_VC  FEUACTR;  /* avoid structure result */
A68_VC  IEUACTR;  /* avoid structure result */
A68_VC  JEUACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  KEUACTR_body A_UNUSED = {0};
A68_55  LEUACTR;  /* collateral clause result */
A68_56  MEUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55  NEUACTR;  /* clause result */
A_PROC_ENTRY(dyadicplus);
 /* line 441: */
 /* line 442: */
{ 
(void)(FZQACTR_eval2(Root, (&PDUACTR_left), (&QDUACTR_right)));
 /* line 443: */
 /* line 444: */
 /* line 445: */
switch ( Version )
{ 
case 1: 
 /* line 446: */
CMTACTR_simpledyop( A68_TRUE, TDUACTR, PDUACTR_left, QDUACTR_right, &UDUACTR );
SDUACTR = UDUACTR;
break;
case 2: 
 /* line 447: */
CMTACTR_simpledyop( A68_FALSE, A_HVEC(VDUACTR,'+',A68_CHAR ), PDUACTR_left, QDUACTR_right, &WDUACTR );
SDUACTR = WDUACTR;
break;
case 3: 
 /* line 448: */
CMTACTR_simpledyop( A68_FALSE, A_HVEC(XDUACTR,'+',A68_CHAR ), PDUACTR_left, QDUACTR_right, &YDUACTR );
SDUACTR = YDUACTR;
break;
case 4: 
 /* line 449: */
 /* line 450: */
BCUACTR_complexop( A_HVEC(BEUACTR,(*(&(Root->Mode))),A68_INT ), AEUACTR, A_VC_PLUS(LJTACTR_qplus,NLTACTR_qcomplex), PDUACTR_left, QDUACTR_right, A68_FALSE, &CEUACTR );
SDUACTR = CEUACTR;
break;
case 5: 
 /* line 451: */
CMTACTR_simpledyop( A68_TRUE, EEUACTR, PDUACTR_left, QDUACTR_right, &FEUACTR );
SDUACTR = FEUACTR;
break;
case 6: 
 /* line 452: */
CMTACTR_simpledyop( A68_TRUE, HEUACTR, PDUACTR_left, QDUACTR_right, &IEUACTR );
SDUACTR = IEUACTR;
break;
default: 
(void)(WXIACTR_assert(A_VC_PLUS(LJTACTR_qplus,ZHTACTR_qvfault), A68_FALSE));
 /* line 453: */
SDUACTR = JEUACTR;
break;
} 
KEUACTR_body = SDUACTR;
 /* line 454: */
 /* line 455: */
LEUACTR.Mode = (*(&(Root->Mode)));
 /* line 457: */
LEUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(PDUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(QDUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 458: */
LEUACTR.Extra = A_UNITE(MEUACTR,mode6,6,KEUACTR_body);
NEUACTR = LEUACTR;
} 
A_PROC_EXIT(dyadicplus);
*ReturnedValue = (NEUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  REUACTR_dyadicminus(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * SEUACTR_left A_UNUSED = {0};
A68_55 * TEUACTR_right A_UNUSED = {0};
A68_55  UEUACTR;  /* collateral clause result */
A68_125  XEUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  YEUACTR;  /* avoid structure result */
A68_56  ZEUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  AFUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  BFUACTR;  /* avoid structure result */
A68_56  CFUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55  DFUACTR;  /* clause result */
A_PROC_ENTRY(dyadicminus);
 /* line 461: */
 /* line 462: */
{ 
 /* line 463: */
(void)(FZQACTR_eval2(Root, (&SEUACTR_left), (&TEUACTR_right)));
 /* line 464: */
 /* line 465: */
UEUACTR.Mode = (*(&(Root->Mode)));
 /* line 466: */
UEUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(SEUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(TEUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 467: */
if (Version==3)
{ 
 /* line 468: */
 /* line 469: */
BCUACTR_complexop( A_HVEC(XEUACTR,(*(&(Root->Mode))),A68_INT ), WEUACTR, A_VC_PLUS(OJTACTR_qminus,NLTACTR_qcomplex), SEUACTR_left, TEUACTR_right, A68_FALSE, &YEUACTR );
UEUACTR.Extra = A_UNITE(ZEUACTR,mode6,6,YEUACTR);
} 
else
{ 
 /* line 470: */
 /* line 471: */
 /* line 472: */
CMTACTR_simpledyop( A68_FALSE, A_HVEC(AFUACTR,'-',A68_CHAR ), SEUACTR_left, TEUACTR_right, &BFUACTR );
UEUACTR.Extra = A_UNITE(CFUACTR,mode6,6,BFUACTR);
} 
DFUACTR = UEUACTR;
} 
A_PROC_EXIT(dyadicminus);
*ReturnedValue = (DFUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HFUACTR_dyadicupb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * IFUACTR_left A_UNUSED = {0};
A68_55 * JFUACTR_right A_UNUSED = {0};
A68_55  KFUACTR;  /* collateral clause result */
A68_VC  NFUACTR;  /* avoid structure result */
A68_VC  PFUACTR;  /* avoid structure result */
A68_56  RFUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  SFUACTR;  /* YIELD */
A68_55  TFUACTR;  /* clause result */
A_PROC_ENTRY(dyadicupb);
 /* line 478: */
 /* line 479: */
{ 
(void)(FZQACTR_eval2(Root, (&IFUACTR_left), (&JFUACTR_right)));
 /* line 480: */
 /* line 481: */
KFUACTR.Mode = (*(&(Root->Mode)));
 /* line 482: */
KFUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(IFUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(JFUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 483: */
 /* line 484: */
BEQACTR_bracketcfragment( JFUACTR_right, &NFUACTR );
BEQACTR_bracketcfragment( IFUACTR_left, &PFUACTR );
SFUACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(NFUACTR,OFUACTR),PFUACTR),QFUACTR) ;
KFUACTR.Extra = A_UNITE(RFUACTR,mode6,6,SFUACTR);
TFUACTR = KFUACTR;
} 
A_PROC_EXIT(dyadicupb);
*ReturnedValue = (TFUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  XFUACTR_dyadiclwb(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * YFUACTR_left A_UNUSED = {0};
A68_55 * ZFUACTR_right A_UNUSED = {0};
A68_55  AGUACTR;  /* collateral clause result */
A68_VC  DGUACTR;  /* avoid structure result */
A68_VC  FGUACTR;  /* avoid structure result */
A68_56  HGUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  IGUACTR;  /* YIELD */
A68_55  JGUACTR;  /* clause result */
A_PROC_ENTRY(dyadiclwb);
 /* line 487: */
 /* line 488: */
{ 
(void)(FZQACTR_eval2(Root, (&YFUACTR_left), (&ZFUACTR_right)));
 /* line 489: */
 /* line 490: */
AGUACTR.Mode = (*(&(Root->Mode)));
 /* line 491: */
AGUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(YFUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(ZFUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 492: */
 /* line 493: */
BEQACTR_bracketcfragment( ZFUACTR_right, &DGUACTR );
BEQACTR_bracketcfragment( YFUACTR_left, &FGUACTR );
IGUACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(DGUACTR,EGUACTR),FGUACTR),GGUACTR) ;
AGUACTR.Extra = A_UNITE(HGUACTR,mode6,6,IGUACTR);
JGUACTR = AGUACTR;
} 
A_PROC_EXIT(dyadiclwb);
*ReturnedValue = (JGUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  NGUACTR_and(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * OGUACTR_left A_UNUSED = {0};
A68_55 * PGUACTR_right A_UNUSED = {0};
A68_55  QGUACTR;  /* collateral clause result */
A68_VC  RGUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  SGUACTR;  /* avoid structure result */
A68_56  TGUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  UGUACTR;  /* avoid structure result */
A68_VC  VGUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  WGUACTR;  /* avoid structure result */
A68_56  XGUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  YGUACTR;  /* YIELD */
A68_56  BHUACTR = {0};  /* OPERATORS - skip to mode */
A68_55  CHUACTR;  /* clause result */
A_PROC_ENTRY(and);
 /* line 496: */
 /* line 497: */
{ 
 /* line 498: */
(void)(FZQACTR_eval2(Root, (&OGUACTR_left), (&PGUACTR_right)));
 /* line 499: */
 /* line 500: */
QGUACTR.Mode = (*(&(Root->Mode)));
 /* line 501: */
QGUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(OGUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(PGUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 502: */
switch ( Version )
{ 
case 1: 
 /* line 503: */
CMTACTR_simpledyop( A68_FALSE, A_HVEC(RGUACTR,'&',A68_CHAR ), OGUACTR_left, PGUACTR_right, &SGUACTR );
QGUACTR.Extra = A_UNITE(TGUACTR,mode6,6,SGUACTR);
break;
case 2: 
 /* line 504: */
FLNACTR_cast( (*(&(Root->Mode))), &UGUACTR );
CMTACTR_simpledyop( A68_FALSE, A_HVEC(VGUACTR,'&',A68_CHAR ), OGUACTR_left, PGUACTR_right, &WGUACTR );
YGUACTR = A_VC_PLUS(UGUACTR,WGUACTR) ;
QGUACTR.Extra = A_UNITE(XGUACTR,mode6,6,YGUACTR);
break;
default: 
(void)(WXIACTR_assert(A_VC_PLUS(AHUACTR,ZHTACTR_qvfault), A68_FALSE));
 /* line 505: */
 /* line 506: */
 /* line 507: */
QGUACTR.Extra = BHUACTR;
break;
} 
CHUACTR = QGUACTR;
} 
A_PROC_EXIT(and);
*ReturnedValue = (CHUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  GHUACTR_or(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * HHUACTR_left A_UNUSED = {0};
A68_55 * IHUACTR_right A_UNUSED = {0};
A68_55  JHUACTR;  /* collateral clause result */
A68_VC  KHUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  LHUACTR;  /* avoid structure result */
A68_56  MHUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  NHUACTR;  /* avoid structure result */
A68_VC  OHUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  PHUACTR;  /* avoid structure result */
A68_56  QHUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  RHUACTR;  /* YIELD */
A68_56  UHUACTR = {0};  /* OPERATORS - skip to mode */
A68_55  VHUACTR;  /* clause result */
A_PROC_ENTRY(or);
 /* line 510: */
 /* line 511: */
{ 
(void)(FZQACTR_eval2(Root, (&HHUACTR_left), (&IHUACTR_right)));
 /* line 512: */
 /* line 513: */
JHUACTR.Mode = (*(&(Root->Mode)));
 /* line 514: */
JHUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(HHUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(IHUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 515: */
switch ( Version )
{ 
case 1: 
 /* line 516: */
CMTACTR_simpledyop( A68_FALSE, A_HVEC(KHUACTR,'|',A68_CHAR ), HHUACTR_left, IHUACTR_right, &LHUACTR );
JHUACTR.Extra = A_UNITE(MHUACTR,mode6,6,LHUACTR);
break;
case 2: 
 /* line 517: */
FLNACTR_cast( (*(&(Root->Mode))), &NHUACTR );
CMTACTR_simpledyop( A68_FALSE, A_HVEC(OHUACTR,'|',A68_CHAR ), HHUACTR_left, IHUACTR_right, &PHUACTR );
RHUACTR = A_VC_PLUS(NHUACTR,PHUACTR) ;
JHUACTR.Extra = A_UNITE(QHUACTR,mode6,6,RHUACTR);
break;
default: 
(void)(WXIACTR_assert(A_VC_PLUS(THUACTR,ZHTACTR_qvfault), A68_FALSE));
 /* line 518: */
 /* line 519: */
 /* line 520: */
JHUACTR.Extra = UHUACTR;
break;
} 
VHUACTR = JHUACTR;
} 
A_PROC_EXIT(or);
*ReturnedValue = (VHUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ZHUACTR_lessnotless(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_VC  AIUACTR;  /* clause result */
A68_VC  BIUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  CIUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  FIUACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  GIUACTR_op A_UNUSED = {0};
A68_VC  IIUACTR;  /* clause result */
A68_VC  OIUACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  PIUACTR_opmacro A_UNUSED = {0};
A68_VC  QIUACTR_adic A_UNUSED = {0};
A68_55 * RIUACTR_left A_UNUSED = {0};
A68_55 * SIUACTR_right A_UNUSED = {0};
A68_VC  TIUACTR;  /* clause result */
A68_VC  UIUACTR;  /* avoid structure result */
A68_VC  VIUACTR;  /* avoid structure result */
A68_VC  WIUACTR;  /* avoid structure result */
A68_VC  ZIUACTR;  /* avoid structure result */
A68_VC  CJUACTR;  /* avoid structure result */
A68_VC  DJUACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  EJUACTR_body A_UNUSED = {0};
A68_55  FJUACTR;  /* collateral clause result */
A68_56  GJUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55  HJUACTR;  /* clause result */
A_PROC_ENTRY(lessnotless);
 /* line 523: */
 /* line 525: */
{ 
 /* line 526: */
switch ( (Opnumber-5) )
{ 
case 1: 
 /* line 527: */
AIUACTR = A_HVEC(BIUACTR,'<',A68_CHAR );
break;
case 2: 
AIUACTR = A_HVEC(CIUACTR,'>',A68_CHAR );
break;
default: 
(void)(WXIACTR_assert(EIUACTR, A68_FALSE));
 /* line 528: */
AIUACTR = FIUACTR;
break;
} 
GIUACTR_op = AIUACTR;
 /* line 529: */
 /* line 530: */
 /* line 531: */
switch ( (Opnumber-5) )
{ 
case 1: 
 /* line 532: */
IIUACTR = JIUACTR;
break;
case 2: 
IIUACTR = LIUACTR;
break;
default: 
(void)(WXIACTR_assert(NIUACTR, A68_FALSE));
 /* line 533: */
IIUACTR = OIUACTR;
break;
} 
PIUACTR_opmacro = IIUACTR;
 /* line 534: */
QIUACTR_adic = A_VC_PLUS(WHTACTR_modulename,GIUACTR_op);
 /* line 535: */
(void)(FZQACTR_eval2(Root, (&RIUACTR_left), (&SIUACTR_right)));
 /* line 536: */
 /* line 537: */
 /* line 538: */
switch ( Version )
{ 
case 1: 
 /* line 539: */
CMTACTR_simpledyop( A68_FALSE, GIUACTR_op, RIUACTR_left, SIUACTR_right, &UIUACTR );
TIUACTR = UIUACTR;
break;
case 2: 
 /* line 540: */
CMTACTR_simpledyop( A68_FALSE, GIUACTR_op, RIUACTR_left, SIUACTR_right, &VIUACTR );
TIUACTR = VIUACTR;
break;
case 3: 
 /* line 541: */
CMTACTR_simpledyop( A68_FALSE, GIUACTR_op, RIUACTR_left, SIUACTR_right, &WIUACTR );
TIUACTR = WIUACTR;
break;
case 4: 
 /* line 542: */
CMTACTR_simpledyop( A68_TRUE, A_VC_PLUS(YIUACTR,PIUACTR_opmacro), RIUACTR_left, SIUACTR_right, &ZIUACTR );
TIUACTR = ZIUACTR;
break;
case 5: 
 /* line 543: */
CMTACTR_simpledyop( A68_TRUE, A_VC_PLUS(BJUACTR,PIUACTR_opmacro), RIUACTR_left, SIUACTR_right, &CJUACTR );
TIUACTR = CJUACTR;
break;
default: 
(void)(WXIACTR_assert(A_VC_PLUS(QIUACTR_adic,ZHTACTR_qvfault), A68_FALSE));
 /* line 544: */
TIUACTR = DJUACTR;
break;
} 
EJUACTR_body = TIUACTR;
 /* line 545: */
 /* line 546: */
FJUACTR.Mode = (*(&(Root->Mode)));
 /* line 548: */
FJUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(RIUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(SIUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 549: */
FJUACTR.Extra = A_UNITE(GJUACTR,mode6,6,EJUACTR_body);
HJUACTR = FJUACTR;
} 
A_PROC_EXIT(lessnotless);
*ReturnedValue = (HJUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  LJUACTR_lesseqgreatereq(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_VC  NJUACTR;  /* clause result */
A68_VC  TJUACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  UJUACTR_opsymbol A_UNUSED = {0};
A68_VC  WJUACTR;  /* clause result */
A68_VC  CKUACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  DKUACTR_macro A_UNUSED = {0};
A68_VC  EKUACTR_adic A_UNUSED = {0};
A68_55 * FKUACTR_left A_UNUSED = {0};
A68_55 * GKUACTR_right A_UNUSED = {0};
A68_VC  HKUACTR;  /* clause result */
A68_VC  IKUACTR;  /* avoid structure result */
A68_VC  LKUACTR;  /* avoid structure result */
A68_VC  MKUACTR;  /* avoid structure result */
A68_VC  NKUACTR;  /* avoid structure result */
A68_VC  QKUACTR;  /* avoid structure result */
A68_VC  TKUACTR;  /* avoid structure result */
A68_VC  UKUACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  VKUACTR_body A_UNUSED = {0};
A68_55  WKUACTR;  /* collateral clause result */
A68_56  XKUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55  YKUACTR;  /* clause result */
A_PROC_ENTRY(lesseqgreatereq);
 /* line 553: */
 /* line 555: */
{ 
 /* line 556: */
switch ( (Opnumber-7) )
{ 
case 1: 
 /* line 557: */
NJUACTR = OJUACTR;
break;
case 2: 
NJUACTR = QJUACTR;
break;
default: 
(void)(WXIACTR_assert(SJUACTR, A68_FALSE));
 /* line 558: */
NJUACTR = TJUACTR;
break;
} 
UJUACTR_opsymbol = NJUACTR;
 /* line 559: */
 /* line 560: */
 /* line 561: */
switch ( (Opnumber-7) )
{ 
case 1: 
 /* line 562: */
WJUACTR = XJUACTR;
break;
case 2: 
WJUACTR = ZJUACTR;
break;
default: 
(void)(WXIACTR_assert(BKUACTR, A68_FALSE));
 /* line 563: */
WJUACTR = CKUACTR;
break;
} 
DKUACTR_macro = WJUACTR;
 /* line 564: */
EKUACTR_adic = A_VC_PLUS(WHTACTR_modulename,UJUACTR_opsymbol);
 /* line 565: */
(void)(FZQACTR_eval2(Root, (&FKUACTR_left), (&GKUACTR_right)));
 /* line 566: */
 /* line 567: */
 /* line 568: */
switch ( Version )
{ 
case 1: 
 /* line 570: */
CMTACTR_simpledyop( A68_FALSE, UJUACTR_opsymbol, FKUACTR_left, GKUACTR_right, &IKUACTR );
HKUACTR = IKUACTR;
break;
case 2: 
 /* line 571: */
CMTACTR_simpledyop( A68_TRUE, A_VC_PLUS(KKUACTR,DKUACTR_macro), JQQACTR_yield(EKUACTR_adic, FKUACTR_left), JQQACTR_yield(EKUACTR_adic, GKUACTR_right), &LKUACTR );
HKUACTR = LKUACTR;
break;
case 3: 
 /* line 572: */
CMTACTR_simpledyop( A68_FALSE, UJUACTR_opsymbol, FKUACTR_left, GKUACTR_right, &MKUACTR );
HKUACTR = MKUACTR;
break;
case 4: 
 /* line 573: */
CMTACTR_simpledyop( A68_FALSE, UJUACTR_opsymbol, FKUACTR_left, GKUACTR_right, &NKUACTR );
HKUACTR = NKUACTR;
break;
case 5: 
 /* line 574: */
CMTACTR_simpledyop( A68_TRUE, A_VC_PLUS(PKUACTR,DKUACTR_macro), FKUACTR_left, GKUACTR_right, &QKUACTR );
HKUACTR = QKUACTR;
break;
case 6: 
 /* line 575: */
CMTACTR_simpledyop( A68_TRUE, A_VC_PLUS(SKUACTR,DKUACTR_macro), FKUACTR_left, GKUACTR_right, &TKUACTR );
HKUACTR = TKUACTR;
break;
default: 
(void)(WXIACTR_assert(A_VC_PLUS(EKUACTR_adic,ZHTACTR_qvfault), A68_FALSE));
 /* line 576: */
HKUACTR = UKUACTR;
break;
} 
VKUACTR_body = HKUACTR;
 /* line 577: */
 /* line 578: */
WKUACTR.Mode = (*(&(Root->Mode)));
 /* line 580: */
WKUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(FKUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(GKUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 581: */
WKUACTR.Extra = A_UNITE(XKUACTR,mode6,6,VKUACTR_body);
YKUACTR = WKUACTR;
} 
A_PROC_EXIT(lesseqgreatereq);
*ReturnedValue = (YKUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  CLUACTR_eqnoteq(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_VC  ELUACTR;  /* clause result */
A68_VC  KLUACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  LLUACTR_op A_UNUSED = {0};
A68_VC  NLUACTR;  /* clause result */
A68_VC  TLUACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  ULUACTR_opmacro A_UNUSED = {0};
A68_VC  VLUACTR_adic A_UNUSED = {0};
A68_55 * WLUACTR_left A_UNUSED = {0};
A68_55 * XLUACTR_right A_UNUSED = {0};
A68_VC  YLUACTR;  /* clause result */
A68_VC  ZLUACTR;  /* avoid structure result */
A68_VC  BMUACTR;  /* clause result */
A68_VC  FMUACTR_opmacro A_UNUSED = {0};
A68_125  GMUACTR;  /* OPERATORS - vacuum */
A68_VC  HMUACTR;  /* avoid structure result */
A68_VC  KMUACTR;  /* avoid structure result */
A68_VC  NMUACTR;  /* avoid structure result */
A68_VC  OMUACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  PMUACTR_body A_UNUSED = {0};
A68_55  QMUACTR;  /* collateral clause result */
A68_56  RMUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55  SMUACTR;  /* clause result */
A_PROC_ENTRY(eqnoteq);
 /* line 584: */
 /* line 586: */
{ 
 /* line 587: */
switch ( (Opnumber-9) )
{ 
case 1: 
 /* line 588: */
ELUACTR = FLUACTR;
break;
case 2: 
ELUACTR = HLUACTR;
break;
default: 
(void)(WXIACTR_assert(JLUACTR, A68_FALSE));
 /* line 589: */
ELUACTR = KLUACTR;
break;
} 
LLUACTR_op = ELUACTR;
 /* line 590: */
 /* line 591: */
 /* line 592: */
switch ( (Opnumber-9) )
{ 
case 1: 
 /* line 593: */
NLUACTR = OLUACTR;
break;
case 2: 
NLUACTR = QLUACTR;
break;
default: 
(void)(WXIACTR_assert(SLUACTR, A68_FALSE));
 /* line 594: */
NLUACTR = TLUACTR;
break;
} 
ULUACTR_opmacro = NLUACTR;
 /* line 595: */
VLUACTR_adic = A_VC_PLUS(WHTACTR_modulename,ULUACTR_opmacro);
 /* line 596: */
 /* line 597: */
(void)(FZQACTR_eval2(Root, (&WLUACTR_left), (&XLUACTR_right)));
 /* line 598: */
 /* line 599: */
 /* line 600: */
if (Version<6)
{ 
 /* line 602: */
CMTACTR_simpledyop( A68_FALSE, LLUACTR_op, WLUACTR_left, XLUACTR_right, &ZLUACTR );
YLUACTR = ZLUACTR;
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
BMUACTR = CMUACTR;
} 
else
{ 
BMUACTR = EMUACTR;
} 
FMUACTR_opmacro = BMUACTR;
 /* line 606: */
 /* line 607: */
 /* line 608: */
BCUACTR_complexop( A_VVAC(GMUACTR), FMUACTR_opmacro, A_VC_PLUS(A_VC_PLUS(WHTACTR_modulename,LLUACTR_op),NLTACTR_qcomplex), WLUACTR_left, XLUACTR_right, A68_FALSE, &HMUACTR );
YLUACTR = HMUACTR;
} 
else
{ 
 /* line 609: */
if (Version==7)
{ 
 /* line 611: */
CMTACTR_simpledyop( A68_TRUE, A_VC_PLUS(JMUACTR,ULUACTR_opmacro), WLUACTR_left, XLUACTR_right, &KMUACTR );
YLUACTR = KMUACTR;
} 
else
{ 
 /* line 612: */
if (Version==8)
{ 
 /* line 613: */
CMTACTR_simpledyop( A68_TRUE, A_VC_PLUS(MMUACTR,ULUACTR_opmacro), WLUACTR_left, XLUACTR_right, &NMUACTR );
YLUACTR = NMUACTR;
} 
else
{ 
(void)(WXIACTR_assert(A_VC_PLUS(VLUACTR_adic,ZHTACTR_qvfault), A68_FALSE));
 /* line 614: */
YLUACTR = OMUACTR;
} 
} 
} 
} 
PMUACTR_body = YLUACTR;
 /* line 615: */
 /* line 616: */
QMUACTR.Mode = (*(&(Root->Mode)));
 /* line 618: */
QMUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(WLUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(XLUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 619: */
QMUACTR.Extra = A_UNITE(RMUACTR,mode6,6,PMUACTR_body);
SMUACTR = QMUACTR;
} 
A_PROC_EXIT(eqnoteq);
*ReturnedValue = (SMUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  WMUACTR_times(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * XMUACTR_left A_UNUSED = {0};
A68_55 * YMUACTR_right A_UNUSED = {0};
A68_VC  ANUACTR;  /* clause result */
A68_VC  CNUACTR;  /* avoid structure result */
A68_VC  FNUACTR;  /* avoid structure result */
A68_VC  GNUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  HNUACTR;  /* avoid structure result */
A68_VC  INUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  JNUACTR;  /* avoid structure result */
A68_125  MNUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  NNUACTR;  /* avoid structure result */
A68_VC  QNUACTR;  /* avoid structure result */
A68_VC  TNUACTR;  /* avoid structure result */
A68_VC  WNUACTR;  /* avoid structure result */
A68_VC  ZNUACTR;  /* avoid structure result */
A68_VC  AOUACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  BOUACTR_body A_UNUSED = {0};
A68_55  COUACTR;  /* collateral clause result */
A68_56  DOUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55  EOUACTR;  /* clause result */
A_PROC_ENTRY(times);
 /* line 622: */
 /* line 623: */
{ 
(void)(FZQACTR_eval2(Root, (&XMUACTR_left), (&YMUACTR_right)));
 /* line 624: */
 /* line 625: */
 /* line 626: */
switch ( Version )
{ 
case 1: 
 /* line 627: */
if (WOMACTR_isint((*(&(XMUACTR_left->Mode)))))
{ 
 /* line 628: */
CMTACTR_simpledyop( A68_TRUE, BNUACTR, YMUACTR_right, XMUACTR_left, &CNUACTR );
ANUACTR = CNUACTR;
} 
else
{ 
 /* line 629: */
 /* line 630: */
CMTACTR_simpledyop( A68_TRUE, ENUACTR, XMUACTR_left, YMUACTR_right, &FNUACTR );
ANUACTR = FNUACTR;
} 
break;
case 2: 
 /* line 631: */
CMTACTR_simpledyop( A68_FALSE, A_HVEC(GNUACTR,'*',A68_CHAR ), XMUACTR_left, YMUACTR_right, &HNUACTR );
ANUACTR = HNUACTR;
break;
case 3: 
 /* line 632: */
CMTACTR_simpledyop( A68_FALSE, A_HVEC(INUACTR,'*',A68_CHAR ), XMUACTR_left, YMUACTR_right, &JNUACTR );
ANUACTR = JNUACTR;
break;
case 4: 
 /* line 633: */
 /* line 634: */
BCUACTR_complexop( A_HVEC(MNUACTR,(*(&(Root->Mode))),A68_INT ), LNUACTR, A_VC_PLUS(RJTACTR_qtimes,NLTACTR_qcomplex), XMUACTR_left, YMUACTR_right, A68_FALSE, &NNUACTR );
ANUACTR = NNUACTR;
break;
case 5: 
 /* line 635: */
if (WOMACTR_isint((*(&(XMUACTR_left->Mode)))))
{ 
 /* line 636: */
CMTACTR_simpledyop( A68_TRUE, PNUACTR, YMUACTR_right, XMUACTR_left, &QNUACTR );
ANUACTR = QNUACTR;
} 
else
{ 
 /* line 637: */
 /* line 638: */
CMTACTR_simpledyop( A68_TRUE, SNUACTR, XMUACTR_left, YMUACTR_right, &TNUACTR );
ANUACTR = TNUACTR;
} 
break;
case 6: 
 /* line 639: */
if (WOMACTR_isint((*(&(XMUACTR_left->Mode)))))
{ 
 /* line 640: */
CMTACTR_simpledyop( A68_TRUE, VNUACTR, YMUACTR_right, XMUACTR_left, &WNUACTR );
ANUACTR = WNUACTR;
} 
else
{ 
 /* line 641: */
 /* line 642: */
CMTACTR_simpledyop( A68_TRUE, YNUACTR, XMUACTR_left, YMUACTR_right, &ZNUACTR );
ANUACTR = ZNUACTR;
} 
break;
default: 
(void)(WXIACTR_assert(A_VC_PLUS(RJTACTR_qtimes,ZHTACTR_qvfault), A68_FALSE));
 /* line 643: */
ANUACTR = AOUACTR;
break;
} 
BOUACTR_body = ANUACTR;
 /* line 644: */
 /* line 645: */
COUACTR.Mode = (*(&(Root->Mode)));
 /* line 647: */
COUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(XMUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(YMUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 648: */
COUACTR.Extra = A_UNITE(DOUACTR,mode6,6,BOUACTR_body);
EOUACTR = COUACTR;
} 
A_PROC_EXIT(times);
*ReturnedValue = (EOUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  IOUACTR_divide(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * JOUACTR_left A_UNUSED = {0};
A68_55 * KOUACTR_right A_UNUSED = {0};
A68_VC  LOUACTR;  /* avoid structure result */
A68_VC  MOUACTR_widen A_UNUSED = {0};
A68_VC  NOUACTR;  /* clause result */
A68_VC  OOUACTR;  /* avoid structure result */
A68_VC  POUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  QOUACTR;  /* avoid structure result */
A68_VC  ROUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  SOUACTR;  /* avoid structure result */
A68_217  TOUACTR;  /* collateral clause result */
A68_125  WOUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  XOUACTR;  /* avoid structure result */
A68_VC  YOUACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  ZOUACTR_body A_UNUSED = {0};
A68_55  APUACTR;  /* collateral clause result */
A68_56  BPUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55  CPUACTR;  /* clause result */
A_PROC_ENTRY(divide);
 /* line 651: */
 /* line 652: */
{ 
(void)(FZQACTR_eval2(Root, (&JOUACTR_left), (&KOUACTR_right)));
 /* line 653: */
 /* line 654: */
 /* line 655: */
switch ( Version )
{ 
case 1: 
 /* line 656: */
{ 
FLNACTR_cast( ((*(&(JOUACTR_left->Mode)))+4), &LOUACTR );
MOUACTR_widen = LOUACTR;
 /* line 657: */
 /* line 658: */
 /* line 659: */
 /* line 660: */
BEQACTR_bracketcfragment( JOUACTR_left, &OOUACTR );
BEQACTR_bracketcfragment( KOUACTR_right, &QOUACTR );
NOUACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(MOUACTR_widen,OOUACTR),A_HVEC(POUACTR,'/',A68_CHAR )),MOUACTR_widen),QOUACTR);
} 
break;
case 2: 
 /* line 661: */
CMTACTR_simpledyop( A68_FALSE, A_HVEC(ROUACTR,'/',A68_CHAR ), JOUACTR_left, KOUACTR_right, &SOUACTR );
NOUACTR = SOUACTR;
break;
case 3: 
TOUACTR.data[0] = (*(&(Root->Mode)));
TOUACTR.data[1] = ((*(&(Root->Mode)))-4);
 /* line 662: */
 /* line 663: */
 /* line 664: */
BCUACTR_complexop( A_HISVEC(WOUACTR,TOUACTR,2,A68_INT ), VOUACTR, A_VC_PLUS(UJTACTR_qdiv,NLTACTR_qcomplex), JOUACTR_left, KOUACTR_right, A68_FALSE, &XOUACTR );
NOUACTR = XOUACTR;
break;
default: 
{ 
(void)(WXIACTR_assert(A_VC_PLUS(UJTACTR_qdiv,ZHTACTR_qvfault), A68_FALSE));
 /* line 665: */
NOUACTR = YOUACTR;
} 
break;
} 
ZOUACTR_body = NOUACTR;
 /* line 666: */
 /* line 667: */
APUACTR.Mode = (*(&(Root->Mode)));
 /* line 669: */
APUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(JOUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(KOUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 670: */
APUACTR.Extra = A_UNITE(BPUACTR,mode6,6,ZOUACTR_body);
CPUACTR = APUACTR;
} 
A_PROC_EXIT(divide);
*ReturnedValue = (CPUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  GPUACTR_over(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * HPUACTR_left A_UNUSED = {0};
A68_55 * IPUACTR_right A_UNUSED = {0};
A68_55  JPUACTR;  /* collateral clause result */
A68_VC  KPUACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  LPUACTR;  /* avoid structure result */
A68_56  MPUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_56  NPUACTR = {0};  /* OPERATORS - skip to mode */
A68_55  OPUACTR;  /* clause result */
A_PROC_ENTRY(over);
 /* line 673: */
 /* line 674: */
{ 
(void)(FZQACTR_eval2(Root, (&HPUACTR_left), (&IPUACTR_right)));
 /* line 675: */
 /* line 676: */
JPUACTR.Mode = (*(&(Root->Mode)));
 /* line 677: */
JPUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(HPUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(IPUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 678: */
if (Version==1)
{ 
 /* line 679: */
CMTACTR_simpledyop( A68_FALSE, A_HVEC(KPUACTR,'/',A68_CHAR ), HPUACTR_left, IPUACTR_right, &LPUACTR );
JPUACTR.Extra = A_UNITE(MPUACTR,mode6,6,LPUACTR);
} 
else
{ 
(void)(WXIACTR_assert(A_VC_PLUS(XJTACTR_qover,ZHTACTR_qvfault), A68_FALSE));
 /* line 680: */
 /* line 681: */
 /* line 682: */
JPUACTR.Extra = NPUACTR;
} 
OPUACTR = JPUACTR;
} 
A_PROC_EXIT(over);
*ReturnedValue = (OPUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  SPUACTR_mod(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * TPUACTR_left A_UNUSED = {0};
A68_55 * UPUACTR_right A_UNUSED = {0};
A68_55  VPUACTR;  /* collateral clause result */
A68_59  WPUACTR;  /* avoid structure result */
A68_VC  XPUACTR;  /* OPERATORS - istruct -> vector */
A68_64  YPUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ZPUACTR_temp A_UNUSED = {0};
A68_203  BQUACTR;  /* collateral clause result */
A68_169  CQUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55 * DQUACTR;  /* YIELD */
A68_169  EQUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55 * FQUACTR;  /* YIELD */
A68_169  GQUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_172  HQUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  JQUACTR;  /* avoid structure result */
A68_56  KQUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_56  LQUACTR = {0};  /* OPERATORS - skip to mode */
A68_55  MQUACTR;  /* clause result */
A_PROC_ENTRY(mod);
 /* line 685: */
 /* line 686: */
{ 
 /* line 687: */
(void)(FZQACTR_eval2(Root, (&TPUACTR_left), (&UPUACTR_right)));
 /* line 688: */
 /* line 689: */
VPUACTR.Mode = (*(&(Root->Mode)));
 /* line 690: */
VPUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(TPUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(UPUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 691: */
if (Version==1)
{ 
QMOACTR_declarectemporary( (*(&(TPUACTR_left->Mode))), AKTACTR_qmod, &WPUACTR );
YPUACTR = WPUACTR.Name ;
ZPUACTR_temp = A_HISVEC(XPUACTR,YPUACTR,7,A68_CHAR );
 /* line 692: */
DQUACTR = JQQACTR_yield(AKTACTR_qmod, TPUACTR_left) ;
BQUACTR.data[0] = A_UNITE(CQUACTR,mode1,1,DQUACTR);
FQUACTR = JQQACTR_yield(AKTACTR_qmod, UPUACTR_right) ;
BQUACTR.data[1] = A_UNITE(EQUACTR,mode1,1,FQUACTR);
BQUACTR.data[2] = A_UNITE(GQUACTR,mode2,2,ZPUACTR_temp);
 /* line 693: */
SOQACTR_usemacro( IQUACTR, A_HISVEC(HQUACTR,BQUACTR,3,A68_169 ), &JQUACTR );
VPUACTR.Extra = A_UNITE(KQUACTR,mode6,6,JQUACTR);
} 
else
{ 
(void)(WXIACTR_assert(A_VC_PLUS(AKTACTR_qmod,ZHTACTR_qvfault), A68_FALSE));
 /* line 694: */
 /* line 695: */
 /* line 696: */
VPUACTR.Extra = LQUACTR;
} 
MQUACTR = VPUACTR;
} 
A_PROC_EXIT(mod);
*ReturnedValue = (MQUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  QQUACTR_power(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * RQUACTR_left A_UNUSED = {0};
A68_55 * SQUACTR_right A_UNUSED = {0};
A68_INT  TQUACTR_m A_UNUSED = {0};
A68_VC  WQUACTR;  /* avoid structure result */
A68_55  XQUACTR;  /* collateral clause result */
A68_203  ZQUACTR;  /* collateral clause result */
A68_169  ARUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55 * BRUACTR;  /* YIELD */
A68_169  CRUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55 * DRUACTR;  /* YIELD */
A68_VC  ERUACTR;  /* avoid structure result */
A68_169  FRUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_172  GRUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  IRUACTR;  /* avoid structure result */
A68_56  JRUACTR = {0};  /* OPERATORS - mode -> union mode */
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
A68_VC  WRUACTR_name A_UNUSED = {0};
A68_192  YRUACTR;  /* collateral clause result */
A68_169  ZRUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55 * ASUACTR;  /* YIELD */
A68_169  BSUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55 * CSUACTR;  /* YIELD */
A68_172  DSUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  FSUACTR;  /* avoid structure result */
A68_56  GSUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_56  HSUACTR = {0};  /* OPERATORS - skip to mode */
A68_55  ISUACTR;  /* clause result */
A_PROC_ENTRY(power);
 /* line 699: */
 /* line 700: */
{ 
(void)(FZQACTR_eval2(Root, (&RQUACTR_left), (&SQUACTR_right)));
 /* line 701: */
TQUACTR_m = (*(&(RQUACTR_left->Mode)));
 /* line 702: */
 /* line 703: */
ROAAOSF_whole( TQUACTR_m, 0, &WQUACTR );
(void)(WXIACTR_assert(A_VC_PLUS(A_VC_PLUS(DKTACTR_qpower,VQUACTR),WQUACTR), ((TQUACTR_m<=21)&(TQUACTR_m>=14))));
 /* line 704: */
 /* line 705: */
XQUACTR.Mode = (*(&(Root->Mode)));
 /* line 706: */
XQUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(RQUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(SQUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 707: */
 /* line 708: */
if (Version==1)
{ 
BRUACTR = JQQACTR_yield(DKTACTR_qpower, RQUACTR_left) ;
ZQUACTR.data[0] = A_UNITE(ARUACTR,mode1,1,BRUACTR);
DRUACTR = JQQACTR_yield(DKTACTR_qpower, SQUACTR_right) ;
ZQUACTR.data[1] = A_UNITE(CRUACTR,mode1,1,DRUACTR);
FLNACTR_cast( TQUACTR_m, &ERUACTR );
ZQUACTR.data[2] = A_UNITE(FRUACTR,mode2,2,ERUACTR);
 /* line 709: */
SOQACTR_usemacro( HRUACTR, A_HISVEC(GRUACTR,ZQUACTR,3,A68_169 ), &IRUACTR );
XQUACTR.Extra = A_UNITE(JRUACTR,mode6,6,IRUACTR);
} 
else
{ 
 /* line 710: */
 /* line 711: */
if (Version==2)
{ 
NRUACTR = JQQACTR_yield(DKTACTR_qpower, RQUACTR_left) ;
LRUACTR.data[0] = A_UNITE(MRUACTR,mode1,1,NRUACTR);
PRUACTR = JQQACTR_yield(DKTACTR_qpower, SQUACTR_right) ;
LRUACTR.data[1] = A_UNITE(ORUACTR,mode1,1,PRUACTR);
FLNACTR_cast( TQUACTR_m, &QRUACTR );
LRUACTR.data[2] = A_UNITE(RRUACTR,mode2,2,QRUACTR);
 /* line 712: */
SOQACTR_usemacro( TRUACTR, A_HISVEC(SRUACTR,LRUACTR,3,A68_169 ), &URUACTR );
XQUACTR.Extra = A_UNITE(VRUACTR,mode6,6,URUACTR);
} 
else
{ 
 /* line 713: */
if (Version==3)
{ 
WRUACTR_name = A_VC_PLUS(DKTACTR_qpower,NLTACTR_qcomplex);
 /* line 714: */
ASUACTR = JQQACTR_yield(WRUACTR_name, RQUACTR_left) ;
YRUACTR.data[0] = A_UNITE(ZRUACTR,mode1,1,ASUACTR);
CSUACTR = JQQACTR_yield(WRUACTR_name, SQUACTR_right) ;
YRUACTR.data[1] = A_UNITE(BSUACTR,mode1,1,CSUACTR);
 /* line 715: */
SOQACTR_usemacro( ESUACTR, A_HISVEC(DSUACTR,YRUACTR,2,A68_169 ), &FSUACTR );
XQUACTR.Extra = A_UNITE(GSUACTR,mode6,6,FSUACTR);
} 
else
{ 
(void)(WXIACTR_assert(A_VC_PLUS(DKTACTR_qpower,ZHTACTR_qvfault), A68_FALSE));
 /* line 716: */
 /* line 717: */
 /* line 718: */
XQUACTR.Extra = HSUACTR;
} 
} 
} 
ISUACTR = XQUACTR;
} 
A_PROC_EXIT(power);
*ReturnedValue = (ISUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  LSUACTR_castvalue(A68_INT  Mode, A68_55 * Value, A68_VC  *ReturnedValue)
{ 
A68_VC  MSUACTR;  /* clause result */
A68_VC  NSUACTR;  /* avoid structure result */
A68_VC  OSUACTR;  /* avoid structure result */
A_PROC_ENTRY(castvalue);
 /* line 722: */
FLNACTR_cast( Mode, &NSUACTR );
BEQACTR_bracketcfragment( Value, &OSUACTR );
MSUACTR = A_VC_PLUS(NSUACTR,OSUACTR);
A_PROC_EXIT(castvalue);
*ReturnedValue = (MSUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  SSUACTR_imaginary(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * TSUACTR_left A_UNUSED = {0};
A68_55 * USUACTR_right A_UNUSED = {0};
A68_INT  VSUACTR_m A_UNUSED = {0};
A68_59  WSUACTR;  /* avoid structure result */
A68_59  XSUACTR_temp A_UNUSED = {0};
A68_55  YSUACTR;  /* collateral clause result */
A68_203  ATUACTR;  /* collateral clause result */
A68_169  BTUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  CTUACTR;  /* avoid structure result */
A68_169  DTUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ETUACTR;  /* avoid structure result */
A68_169  FTUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_172  GTUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ITUACTR;  /* avoid structure result */
A68_56  JTUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_203  LTUACTR;  /* collateral clause result */
A68_169  MTUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_169  NTUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_169  OTUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_172  PTUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  RTUACTR;  /* avoid structure result */
A68_56  STUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55  TTUACTR;  /* clause result */
A_PROC_ENTRY(imaginary);
 /* line 725: */
 /* line 726: */
{ 
 /* line 727: */
(void)(FZQACTR_eval2(Root, (&TSUACTR_left), (&USUACTR_right)));
 /* line 728: */
VSUACTR_m = ((*(&(Root->Mode)))-4);
 /* line 729: */
A_CALLPROC(TMOACTR_new,((*(&(Root->Mode))), IJTACTR_qi, &WSUACTR),((*(&(Root->Mode))), IJTACTR_qi, &WSUACTR,(TMOACTR_new).nonlocals));
XSUACTR_temp = WSUACTR;
 /* line 730: */
 /* line 731: */
YSUACTR.Mode = (*(&(Root->Mode)));
 /* line 732: */
YSUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(TSUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(USUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 733: */
if (Version==1)
{ 
 /* line 734: */
ATUACTR.data[0] = A_UNITE(BTUACTR,mode3,3,XSUACTR_temp);
LSUACTR_castvalue( VSUACTR_m, TSUACTR_left, &CTUACTR );
ATUACTR.data[1] = A_UNITE(DTUACTR,mode2,2,CTUACTR);
LSUACTR_castvalue( VSUACTR_m, USUACTR_right, &ETUACTR );
ATUACTR.data[2] = A_UNITE(FTUACTR,mode2,2,ETUACTR);
 /* line 735: */
SOQACTR_usemacro( HTUACTR, A_HISVEC(GTUACTR,ATUACTR,3,A68_169 ), &ITUACTR );
YSUACTR.Extra = A_UNITE(JTUACTR,mode6,6,ITUACTR);
} 
else
{ 
LTUACTR.data[0] = A_UNITE(MTUACTR,mode3,3,XSUACTR_temp);
LTUACTR.data[1] = A_UNITE(NTUACTR,mode1,1,TSUACTR_left);
LTUACTR.data[2] = A_UNITE(OTUACTR,mode1,1,USUACTR_right);
 /* line 736: */
 /* line 737: */
 /* line 738: */
SOQACTR_usemacro( QTUACTR, A_HISVEC(PTUACTR,LTUACTR,3,A68_169 ), &RTUACTR );
YSUACTR.Extra = A_UNITE(STUACTR,mode6,6,RTUACTR);
} 
TTUACTR = YSUACTR;
} 
A_PROC_EXIT(imaginary);
*ReturnedValue = (TTUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  XTUACTR_shiftleftright(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_VC  ZTUACTR;  /* clause result */
A68_VC  FUUACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  GUUACTR_op A_UNUSED = {0};
A68_VC  HUUACTR_adic A_UNUSED = {0};
A68_55 * IUUACTR_left A_UNUSED = {0};
A68_55 * JUUACTR_right A_UNUSED = {0};
A68_55  KUUACTR;  /* collateral clause result */
A68_VC  NUUACTR;  /* avoid structure result */
A68_56  OUUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_56  PUUACTR = {0};  /* OPERATORS - skip to mode */
A68_55  QUUACTR;  /* clause result */
A_PROC_ENTRY(shiftleftright);
 /* line 741: */
 /* line 743: */
{ 
 /* line 744: */
switch ( (Opnumber-17) )
{ 
case 1: 
 /* line 745: */
ZTUACTR = AUUACTR;
break;
case 2: 
ZTUACTR = CUUACTR;
break;
default: 
(void)(WXIACTR_assert(EUUACTR, A68_FALSE));
 /* line 746: */
ZTUACTR = FUUACTR;
break;
} 
GUUACTR_op = ZTUACTR;
 /* line 747: */
HUUACTR_adic = A_VC_PLUS(WHTACTR_modulename,GUUACTR_op);
 /* line 748: */
 /* line 749: */
(void)(FZQACTR_eval2(Root, (&IUUACTR_left), (&JUUACTR_right)));
 /* line 750: */
 /* line 751: */
KUUACTR.Mode = (*(&(Root->Mode)));
 /* line 752: */
KUUACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(IUUACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(JUUACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 753: */
if (Version==1)
{ 
 /* line 754: */
CMTACTR_simpledyop( A68_TRUE, A_VC_PLUS(MUUACTR,GUUACTR_op), JQQACTR_yield(GUUACTR_op, IUUACTR_left), JQQACTR_yield(GUUACTR_op, JUUACTR_right), &NUUACTR );
KUUACTR.Extra = A_UNITE(OUUACTR,mode6,6,NUUACTR);
} 
else
{ 
(void)(WXIACTR_assert(A_VC_PLUS(HUUACTR_adic,ZHTACTR_qvfault), A68_FALSE));
 /* line 755: */
 /* line 756: */
 /* line 757: */
KUUACTR.Extra = PUUACTR;
} 
QUUACTR = KUUACTR;
} 
A_PROC_EXIT(shiftleftright);
*ReturnedValue = (QUUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  UUUACTR_elem(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * VUUACTR_left A_UNUSED = {0};
A68_55 * WUUACTR_right A_UNUSED = {0};
A68_INT  XUUACTR_m A_UNUSED = {0};
A68_207  ZUUACTR;  /* collateral clause result */
A68_169  AVUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55 * BVUACTR;  /* YIELD */
A68_169  CVUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  DVUACTR;  /* avoid structure result */
A68_169  EVUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  FVUACTR;  /* avoid structure result */
A68_169  GVUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  HVUACTR;  /* clause result */
A68_172  IVUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  KVUACTR;  /* avoid structure result */
A68_VC  LVUACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  MVUACTR_body A_UNUSED = {0};
A68_55  NVUACTR;  /* collateral clause result */
A68_56  OVUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55  PVUACTR;  /* clause result */
A_PROC_ENTRY(elem);
 /* line 760: */
 /* line 761: */
{ 
(void)(FZQACTR_eval2(Root, (&VUUACTR_left), (&WUUACTR_right)));
 /* line 762: */
 /* line 763: */
 /* line 766: */
if (Version==1)
{ 
XUUACTR_m = (*(&(WUUACTR_right->Mode)));
 /* line 767: */
 /* line 768: */
 /* line 769: */
BVUACTR = JQQACTR_yield(GKTACTR_qelem, VUUACTR_left) ;
ZUUACTR.data[0] = A_UNITE(AVUACTR,mode1,1,BVUACTR);
ZUUACTR.data[1] = A_UNITE(CVUACTR,mode1,1,WUUACTR_right);
FLNACTR_cast( XUUACTR_m, &DVUACTR );
ZUUACTR.data[2] = A_UNITE(EVUACTR,mode2,2,DVUACTR);
 /* line 770: */
KLNACTR_csizeof( XUUACTR_m, &FVUACTR );
ZUUACTR.data[3] = A_UNITE(GVUACTR,mode2,2,FVUACTR);
 /* line 771: */
SOQACTR_usemacro( JVUACTR, A_HISVEC(IVUACTR,ZUUACTR,4,A68_169 ), &KVUACTR );
HVUACTR = KVUACTR;
} 
else
{ 
(void)(WXIACTR_assert(A_VC_PLUS(GKTACTR_qelem,ZHTACTR_qvfault), A68_FALSE));
 /* line 772: */
HVUACTR = LVUACTR;
} 
MVUACTR_body = HVUACTR;
 /* line 773: */
NVUACTR.Mode = (*(&(Root->Mode)));
NVUACTR.Info = PKJACTR_defaultinfo;
 /* line 774: */
NVUACTR.Extra = A_UNITE(OVUACTR,mode6,6,MVUACTR_body);
PVUACTR = NVUACTR;
} 
A_PROC_EXIT(elem);
*ReturnedValue = (PVUACTR);
return;
} 
#undef NL

A_STATIC A68_BITS  SVUACTR_abattribute(A68_BOOL  Noref, A68_55 * Op)
{ 
A68_BITS  TVUACTR;  /* clause result */
A_PROC_ENTRY(abattribute);
 /* line 788: */
 /* line 789: */
 /* line 791: */
if (IWPACTR_hasattribute(Op, TKJACTR_nonloc))
{ 
 /* line 792: */
TVUACTR = (A68_BITS )(TKJACTR_nonloc|XKJACTR_fxwarn);
} 
else
{ 
 /* line 793: */
if (Noref)
{ 
 /* line 794: */
 /* line 798: */
TVUACTR = (A68_BITS )(SKJACTR_effects|XKJACTR_fxwarn);
} 
else
{ 
 /* line 799: */
 /* line 800: */
TVUACTR = (A68_BITS )(RKJACTR_atomic|XKJACTR_fxwarn);
} 
} 
A_PROC_EXIT(abattribute);
return( TVUACTR );
} 
#undef NL
 /* line 807: */
 /* line 808: */
 /* line 809: */
 /* line 810: */

A_STATIC A68_VOID  ZVUACTR_simpleabop(A68_BOOL  Noref, A68_BOOL  Macro, A68_VC  Oper, A68_55 * Left, A68_55 * Right, A68_56  *ReturnedValue)
{ 
A68_55 * AWUACTR_lhs A_UNUSED = {0};
A68_192  BWUACTR;  /* collateral clause result */
A68_169  CWUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_169  DWUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  EWUACTR;  /* clause result */
A68_172  FWUACTR;  /* OPERATORS - istruct -> vector */
A68_VC  GWUACTR;  /* avoid structure result */
A68_VC  HWUACTR;  /* avoid structure result */
A68_VC  IWUACTR;  /* avoid structure result */
A68_VC  JWUACTR_body A_UNUSED = {0};
A68_56  KWUACTR;  /* clause result */
A68_56  LWUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_192  MWUACTR;  /* collateral clause result */
A68_169  NWUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_169  QWUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  RWUACTR;  /* YIELD */
A68_172  SWUACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(simpleabop);
 /* line 811: */
 /* line 812: */
{ 
AWUACTR_lhs = YPQACTR_yield(Left);
 /* line 813: */
(void)(PKAAOSF_orab((&(AWUACTR_lhs->Info)), VKJACTR_lvalue));
 /* line 814: */
 /* line 815: */
 /* line 816: */
if (Macro)
{ 
BWUACTR.data[0] = A_UNITE(CWUACTR,mode1,1,AWUACTR_lhs);
BWUACTR.data[1] = A_UNITE(DWUACTR,mode1,1,Right);
 /* line 817: */
SOQACTR_usemacro( Oper, A_HISVEC(FWUACTR,BWUACTR,2,A68_169 ), &GWUACTR );
EWUACTR = GWUACTR;
} 
else
{ 
 /* line 818: */
BEQACTR_bracketcfragment( AWUACTR_lhs, &HWUACTR );
BEQACTR_bracketcfragment( Right, &IWUACTR );
EWUACTR = A_VC_PLUS(A_VC_PLUS(HWUACTR,Oper),IWUACTR);
} 
JWUACTR_body = EWUACTR;
 /* line 819: */
 /* line 820: */
 /* line 821: */
if (Noref)
{ 
KWUACTR = A_UNITE(LWUACTR,mode6,6,JWUACTR_body);
} 
else
{ 
MWUACTR.data[0] = A_UNITE(NWUACTR,mode2,2,JWUACTR_body);
RWUACTR = PWUACTR ;
MWUACTR.data[1] = A_UNITE(QWUACTR,mode2,2,RWUACTR);
(void)(XOQACTR_emitline(A_HISVEC(SWUACTR,MWUACTR,2,A68_169 )));
 /* line 822: */
 /* line 823: */
KWUACTR = (*(&(AWUACTR_lhs->Extra)));
} 
} 
A_PROC_EXIT(simpleabop);
*ReturnedValue = (KWUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  WWUACTR_plusab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * XWUACTR_left A_UNUSED = {0};
A68_55 * YWUACTR_right A_UNUSED = {0};
A68_BOOL  ZWUACTR_opt A_UNUSED = {0};
A68_56  BXUACTR;  /* clause result */
A68_56  DXUACTR;  /* avoid structure result */
A68_56  GXUACTR;  /* avoid structure result */
A68_125  JXUACTR;  /* OPERATORS - vacuum */
A68_VC  KXUACTR;  /* avoid structure result */
A68_56  LXUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_56  OXUACTR;  /* avoid structure result */
A68_56  RXUACTR;  /* avoid structure result */
A68_56  SXUACTR = {0};  /* OPERATORS - skip to mode */
A68_56  TXUACTR_body A_UNUSED = {0};
A68_55  UXUACTR;  /* collateral clause result */
A68_55  VXUACTR;  /* clause result */
A_PROC_ENTRY(plusab);
 /* line 827: */
 /* line 828: */
{ 
 /* line 829: */
(void)(NYQACTR_eval_pass_left(Root, (&XWUACTR_left), VKJACTR_lvalue));
 /* line 830: */
(void)(WYQACTR_eval_pass_right(Root, (&YWUACTR_right), PKJACTR_defaultinfo));
 /* line 831: */
ZWUACTR_opt = IWPACTR_hasattribute(Root, UKJACTR_voided);
 /* line 832: */
 /* line 833: */
 /* line 834: */
switch ( Version )
{ 
case 1: 
 /* line 835: */
ZVUACTR_simpleabop( ZWUACTR_opt, A68_FALSE, CXUACTR, XWUACTR_left, YWUACTR_right, &DXUACTR );
BXUACTR = DXUACTR;
break;
case 2: 
 /* line 836: */
ZVUACTR_simpleabop( ZWUACTR_opt, A68_FALSE, FXUACTR, XWUACTR_left, YWUACTR_right, &GXUACTR );
BXUACTR = GXUACTR;
break;
case 3: 
 /* line 837: */
 /* line 838: */
BCUACTR_complexop( A_VVAC(JXUACTR), IXUACTR, A_VC_PLUS(JKTACTR_qplusab,NLTACTR_qcomplex), XWUACTR_left, YWUACTR_right, A68_TRUE, &KXUACTR );
BXUACTR = A_UNITE(LXUACTR,mode6,6,KXUACTR);
break;
case 4: 
 /* line 839: */
ZVUACTR_simpleabop( ZWUACTR_opt, A68_TRUE, NXUACTR, XWUACTR_left, YWUACTR_right, &OXUACTR );
BXUACTR = OXUACTR;
break;
case 5: 
 /* line 840: */
ZVUACTR_simpleabop( ZWUACTR_opt, A68_TRUE, QXUACTR, XWUACTR_left, YWUACTR_right, &RXUACTR );
BXUACTR = RXUACTR;
break;
default: 
(void)(WXIACTR_assert(A_VC_PLUS(JKTACTR_qplusab,ZHTACTR_qvfault), A68_FALSE));
 /* line 841: */
BXUACTR = SXUACTR;
break;
} 
TXUACTR_body = BXUACTR;
 /* line 842: */
UXUACTR.Mode = (*(&(Root->Mode)));
UXUACTR.Info = SVUACTR_abattribute(ZWUACTR_opt, XWUACTR_left);
 /* line 843: */
UXUACTR.Extra = TXUACTR_body;
VXUACTR = UXUACTR;
} 
A_PROC_EXIT(plusab);
*ReturnedValue = (VXUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ZXUACTR_plusto(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * AYUACTR_left A_UNUSED = {0};
A68_55 * BYUACTR_right A_UNUSED = {0};
A68_BOOL  CYUACTR_opt A_UNUSED = {0};
A68_56  GYUACTR;  /* clause result */
A68_56  IYUACTR;  /* avoid structure result */
A68_56  NYUACTR;  /* avoid structure result */
A68_56  OYUACTR = {0};  /* OPERATORS - skip to mode */
A68_56  PYUACTR_body A_UNUSED = {0};
A68_55  QYUACTR;  /* collateral clause result */
A68_55  RYUACTR;  /* clause result */
A_PROC_ENTRY(plusto);
 /* line 846: */
 /* line 847: */
{ 
 /* line 848: */
(void)(NYQACTR_eval_pass_left(Root, (&AYUACTR_left), PKJACTR_defaultinfo));
 /* line 849: */
(void)(WYQACTR_eval_pass_right(Root, (&BYUACTR_right), VKJACTR_lvalue));
 /* line 850: */
CYUACTR_opt = IWPACTR_hasattribute(Root, UKJACTR_voided);
 /* line 851: */
 /* line 852: */
 /* line 854: */
switch ( Version )
{ 
case 1: 
{ 
 /* line 855: */
(void)(WXIACTR_assert(A_VC_PLUS(MKTACTR_qplusto,EYUACTR), (EQMACTR_isflexvec((*(&(BYUACTR_right->Mode))))&PPMACTR_isvec((*(&(AYUACTR_left->Mode)))))));
 /* line 856: */
 /* line 857: */
 /* line 859: */
ZVUACTR_simpleabop( CYUACTR_opt, A68_TRUE, HYUACTR, BYUACTR_right, AYUACTR_left, &IYUACTR );
GYUACTR = IYUACTR;
} 
break;
case 2: 
{ 
 /* line 860: */
(void)(WXIACTR_assert(A_VC_PLUS(MKTACTR_qplusto,KYUACTR), (IQMACTR_isflexrow((*(&(BYUACTR_right->Mode))))&TPMACTR_isrow((*(&(AYUACTR_left->Mode)))))));
 /* line 861: */
 /* line 862: */
 /* line 863: */
ZVUACTR_simpleabop( CYUACTR_opt, A68_TRUE, MYUACTR, BYUACTR_right, AYUACTR_left, &NYUACTR );
GYUACTR = NYUACTR;
} 
break;
default: 
(void)(WXIACTR_assert(A_VC_PLUS(MKTACTR_qplusto,ZHTACTR_qvfault), A68_FALSE));
 /* line 864: */
GYUACTR = OYUACTR;
break;
} 
PYUACTR_body = GYUACTR;
 /* line 865: */
QYUACTR.Mode = (*(&(Root->Mode)));
QYUACTR.Info = SVUACTR_abattribute(CYUACTR_opt, AYUACTR_left);
 /* line 866: */
QYUACTR.Extra = PYUACTR_body;
RYUACTR = QYUACTR;
} 
A_PROC_EXIT(plusto);
*ReturnedValue = (RYUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  VYUACTR_minusab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * WYUACTR_left A_UNUSED = {0};
A68_55 * XYUACTR_right A_UNUSED = {0};
A68_BOOL  YYUACTR_opt A_UNUSED = {0};
A68_56  AZUACTR;  /* clause result */
A68_56  CZUACTR;  /* avoid structure result */
A68_125  FZUACTR;  /* OPERATORS - vacuum */
A68_VC  GZUACTR;  /* avoid structure result */
A68_56  HZUACTR = {0};  /* OPERATORS - mode -> union mode */
A68_56  IZUACTR = {0};  /* OPERATORS - skip to mode */
A68_56  JZUACTR_body A_UNUSED = {0};
A68_55  KZUACTR;  /* collateral clause result */
A68_55  LZUACTR;  /* clause result */
A_PROC_ENTRY(minusab);
 /* line 869: */
 /* line 870: */
{ 
 /* line 871: */
(void)(NYQACTR_eval_pass_left(Root, (&WYUACTR_left), VKJACTR_lvalue));
 /* line 872: */
(void)(WYQACTR_eval_pass_right(Root, (&XYUACTR_right), PKJACTR_defaultinfo));
 /* line 873: */
YYUACTR_opt = IWPACTR_hasattribute(Root, UKJACTR_voided);
 /* line 874: */
 /* line 875: */
 /* line 876: */
if ((Version==1)|(Version==2))
{ 
 /* line 877: */
ZVUACTR_simpleabop( YYUACTR_opt, A68_FALSE, BZUACTR, WYUACTR_left, XYUACTR_right, &CZUACTR );
AZUACTR = CZUACTR;
} 
else
{ 
 /* line 878: */
if (Version==3)
{ 
 /* line 879: */
 /* line 880: */
BCUACTR_complexop( A_VVAC(FZUACTR), EZUACTR, A_VC_PLUS(PKTACTR_qminusab,NLTACTR_qcomplex), WYUACTR_left, XYUACTR_right, A68_TRUE, &GZUACTR );
AZUACTR = A_UNITE(HZUACTR,mode6,6,GZUACTR);
} 
else
{ 
(void)(WXIACTR_assert(A_VC_PLUS(PKTACTR_qminusab,ZHTACTR_qvfault), A68_FALSE));
 /* line 881: */
AZUACTR = IZUACTR;
} 
} 
JZUACTR_body = AZUACTR;
 /* line 882: */
KZUACTR.Mode = (*(&(Root->Mode)));
KZUACTR.Info = SVUACTR_abattribute(YYUACTR_opt, WYUACTR_left);
 /* line 883: */
KZUACTR.Extra = JZUACTR_body;
LZUACTR = KZUACTR;
} 
A_PROC_EXIT(minusab);
*ReturnedValue = (LZUACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  PZUACTR_timesab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * QZUACTR_left A_UNUSED = {0};
A68_55 * RZUACTR_right A_UNUSED = {0};
A68_BOOL  SZUACTR_opt A_UNUSED = {0};
A68_56  UZUACTR;  /* clause result */
A68_56  WZUACTR;  /* avoid structure result */
A68_56  ZZUACTR;  /* avoid structure result */
A68_125  CAVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  DAVACTR;  /* avoid structure result */
A68_56  EAVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_56  HAVACTR;  /* avoid structure result */
A68_56  KAVACTR;  /* avoid structure result */
A68_56  LAVACTR = {0};  /* OPERATORS - skip to mode */
A68_56  MAVACTR_body A_UNUSED = {0};
A68_55  NAVACTR;  /* collateral clause result */
A68_55  OAVACTR;  /* clause result */
A_PROC_ENTRY(timesab);
 /* line 886: */
 /* line 887: */
{ 
 /* line 888: */
(void)(NYQACTR_eval_pass_left(Root, (&QZUACTR_left), VKJACTR_lvalue));
 /* line 889: */
(void)(WYQACTR_eval_pass_right(Root, (&RZUACTR_right), PKJACTR_defaultinfo));
 /* line 890: */
SZUACTR_opt = IWPACTR_hasattribute(Root, UKJACTR_voided);
 /* line 891: */
 /* line 892: */
 /* line 893: */
switch ( Version )
{ 
case 1: 
 /* line 894: */
ZVUACTR_simpleabop( SZUACTR_opt, A68_FALSE, VZUACTR, QZUACTR_left, RZUACTR_right, &WZUACTR );
UZUACTR = WZUACTR;
break;
case 2: 
 /* line 895: */
ZVUACTR_simpleabop( SZUACTR_opt, A68_FALSE, YZUACTR, QZUACTR_left, RZUACTR_right, &ZZUACTR );
UZUACTR = ZZUACTR;
break;
case 3: 
 /* line 896: */
 /* line 897: */
BCUACTR_complexop( A_HVEC(CAVACTR,EOMACTR_deref((*(&(Root->Mode)))),A68_INT ), BAVACTR, A_VC_PLUS(SKTACTR_qtimesab,NLTACTR_qcomplex), QZUACTR_left, RZUACTR_right, A68_TRUE, &DAVACTR );
UZUACTR = A_UNITE(EAVACTR,mode6,6,DAVACTR);
break;
case 4: 
 /* line 898: */
ZVUACTR_simpleabop( SZUACTR_opt, A68_TRUE, GAVACTR, QZUACTR_left, RZUACTR_right, &HAVACTR );
UZUACTR = HAVACTR;
break;
case 5: 
 /* line 899: */
ZVUACTR_simpleabop( SZUACTR_opt, A68_TRUE, JAVACTR, QZUACTR_left, RZUACTR_right, &KAVACTR );
UZUACTR = KAVACTR;
break;
default: 
(void)(WXIACTR_assert(A_VC_PLUS(SKTACTR_qtimesab,ZHTACTR_qvfault), A68_FALSE));
 /* line 900: */
UZUACTR = LAVACTR;
break;
} 
MAVACTR_body = UZUACTR;
 /* line 901: */
NAVACTR.Mode = (*(&(Root->Mode)));
NAVACTR.Info = SVUACTR_abattribute(SZUACTR_opt, QZUACTR_left);
 /* line 902: */
NAVACTR.Extra = MAVACTR_body;
OAVACTR = NAVACTR;
} 
A_PROC_EXIT(timesab);
*ReturnedValue = (OAVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  SAVACTR_overab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * TAVACTR_left A_UNUSED = {0};
A68_55 * UAVACTR_right A_UNUSED = {0};
A68_BOOL  VAVACTR_opt A_UNUSED = {0};
A68_56  XAVACTR;  /* clause result */
A68_56  ZAVACTR;  /* avoid structure result */
A68_56  ABVACTR = {0};  /* OPERATORS - skip to mode */
A68_56  BBVACTR_body A_UNUSED = {0};
A68_55  CBVACTR;  /* collateral clause result */
A68_55  DBVACTR;  /* clause result */
A_PROC_ENTRY(overab);
 /* line 905: */
 /* line 906: */
{ 
 /* line 907: */
(void)(NYQACTR_eval_pass_left(Root, (&TAVACTR_left), VKJACTR_lvalue));
 /* line 908: */
(void)(WYQACTR_eval_pass_right(Root, (&UAVACTR_right), PKJACTR_defaultinfo));
 /* line 909: */
VAVACTR_opt = IWPACTR_hasattribute(Root, UKJACTR_voided);
 /* line 910: */
 /* line 911: */
 /* line 912: */
if (Version==1)
{ 
 /* line 913: */
ZVUACTR_simpleabop( VAVACTR_opt, A68_FALSE, YAVACTR, TAVACTR_left, UAVACTR_right, &ZAVACTR );
XAVACTR = ZAVACTR;
} 
else
{ 
(void)(WXIACTR_assert(A_VC_PLUS(VKTACTR_qoverab,ZHTACTR_qvfault), A68_FALSE));
 /* line 914: */
XAVACTR = ABVACTR;
} 
BBVACTR_body = XAVACTR;
 /* line 915: */
CBVACTR.Mode = (*(&(Root->Mode)));
CBVACTR.Info = SVUACTR_abattribute(VAVACTR_opt, TAVACTR_left);
 /* line 916: */
CBVACTR.Extra = BBVACTR_body;
DBVACTR = CBVACTR;
} 
A_PROC_EXIT(overab);
*ReturnedValue = (DBVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HBVACTR_modab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_BOOL  IBVACTR_opt A_UNUSED = {0};
A68_55 * JBVACTR_left A_UNUSED = {0};
A68_55 * KBVACTR_right A_UNUSED = {0};
A68_55  LBVACTR;  /* collateral clause result */
A68_56  OBVACTR;  /* avoid structure result */
A68_56  PBVACTR = {0};  /* OPERATORS - skip to mode */
A68_55  QBVACTR;  /* clause result */
A_PROC_ENTRY(modab);
 /* line 919: */
 /* line 920: */
{ 
IBVACTR_opt = IWPACTR_hasattribute(Root, UKJACTR_voided);
 /* line 921: */
 /* line 922: */
(void)(NYQACTR_eval_pass_left(Root, (&JBVACTR_left), VKJACTR_lvalue));
 /* line 923: */
(void)(WYQACTR_eval_pass_right(Root, (&KBVACTR_right), PKJACTR_defaultinfo));
 /* line 924: */
 /* line 925: */
LBVACTR.Mode = (*(&(Root->Mode)));
 /* line 926: */
LBVACTR.Info = SVUACTR_abattribute(IBVACTR_opt, JBVACTR_left);
 /* line 927: */
if (Version==1)
{ 
 /* line 928: */
ZVUACTR_simpleabop( IBVACTR_opt, A68_TRUE, NBVACTR, JBVACTR_left, KBVACTR_right, &OBVACTR );
LBVACTR.Extra = OBVACTR;
} 
else
{ 
(void)(WXIACTR_assert(A_VC_PLUS(YKTACTR_qmodab,ZHTACTR_qvfault), A68_FALSE));
 /* line 929: */
 /* line 930: */
 /* line 931: */
LBVACTR.Extra = PBVACTR;
} 
QBVACTR = LBVACTR;
} 
A_PROC_EXIT(modab);
*ReturnedValue = (QBVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  UBVACTR_divab(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_55 * VBVACTR_left A_UNUSED = {0};
A68_55 * WBVACTR_right A_UNUSED = {0};
A68_BOOL  XBVACTR_opt A_UNUSED = {0};
A68_55  YBVACTR;  /* collateral clause result */
A68_56  BCVACTR;  /* avoid structure result */
A68_217  CCVACTR;  /* collateral clause result */
A68_125  FCVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  GCVACTR;  /* avoid structure result */
A68_56  HCVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_56  ICVACTR = {0};  /* OPERATORS - skip to mode */
A68_55  JCVACTR;  /* clause result */
A_PROC_ENTRY(divab);
 /* line 934: */
 /* line 935: */
{ 
 /* line 936: */
(void)(NYQACTR_eval_pass_left(Root, (&VBVACTR_left), VKJACTR_lvalue));
 /* line 937: */
(void)(WYQACTR_eval_pass_right(Root, (&WBVACTR_right), PKJACTR_defaultinfo));
 /* line 938: */
XBVACTR_opt = IWPACTR_hasattribute(Root, UKJACTR_voided);
 /* line 940: */
 /* line 941: */
YBVACTR.Mode = (*(&(Root->Mode)));
 /* line 942: */
YBVACTR.Info = SVUACTR_abattribute(XBVACTR_opt, VBVACTR_left);
 /* line 943: */
if (Version==1)
{ 
 /* line 944: */
ZVUACTR_simpleabop( XBVACTR_opt, A68_FALSE, ACVACTR, VBVACTR_left, WBVACTR_right, &BCVACTR );
YBVACTR.Extra = BCVACTR;
} 
else
{ 
 /* line 945: */
if (Version==2)
{ 
CCVACTR.data[0] = (*(&(WBVACTR_right->Mode)));
CCVACTR.data[1] = ((*(&(WBVACTR_right->Mode)))-4);
 /* line 946: */
 /* line 947: */
BCUACTR_complexop( A_HISVEC(FCVACTR,CCVACTR,2,A68_INT ), ECVACTR, A_VC_PLUS(SKTACTR_qtimesab,NLTACTR_qcomplex), VBVACTR_left, WBVACTR_right, A68_TRUE, &GCVACTR );
YBVACTR.Extra = A_UNITE(HCVACTR,mode6,6,GCVACTR);
} 
else
{ 
(void)(WXIACTR_assert(A_VC_PLUS(BLTACTR_qdivab,ZHTACTR_qvfault), A68_FALSE));
 /* line 948: */
 /* line 949: */
 /* line 950: */
YBVACTR.Extra = ICVACTR;
} 
} 
JCVACTR = YBVACTR;
} 
A_PROC_EXIT(divab);
*ReturnedValue = (JCVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  NCVACTR_isisnt(A68_55 * Root, A68_INT  Opnumber, A68_INT  Version, A68_55  *ReturnedValue)
{ 
A68_VC  PCVACTR;  /* clause result */
A68_VC  VCVACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  WCVACTR_op A_UNUSED = {0};
A68_VC  XCVACTR_adic A_UNUSED = {0};
A68_55 * YCVACTR_left A_UNUSED = {0};
A68_55 * ZCVACTR_right A_UNUSED = {0};
A68_BOOL  ADVACTR;  /* optbool result */
A68_VC  EDVACTR;  /* clause result */
A68_VC  JDVACTR;  /* clause result */
A68_VC  ODVACTR;  /* clause result */
A68_VC  QDVACTR;  /* avoid structure result */
A68_VC  RDVACTR;  /* avoid structure result */
A68_VC  SDVACTR_body A_UNUSED = {0};
A68_55  TDVACTR;  /* collateral clause result */
A68_56  UDVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_55  VDVACTR;  /* clause result */
A_PROC_ENTRY(isisnt);
 /* line 957: */
 /* line 959: */
{ 
 /* line 960: */
switch ( (Opnumber-26) )
{ 
case 1: 
 /* line 961: */
PCVACTR = QCVACTR;
break;
case 2: 
PCVACTR = SCVACTR;
break;
default: 
(void)(WXIACTR_assert(A_VC_PLUS(KLTACTR_qisisnt,UCVACTR), A68_FALSE));
 /* line 962: */
PCVACTR = VCVACTR;
break;
} 
WCVACTR_op = PCVACTR;
 /* line 964: */
XCVACTR_adic = A_VC_PLUS(WHTACTR_modulename,WCVACTR_op);
 /* line 965: */
(void)(FZQACTR_eval2(Root, (&YCVACTR_left), (&ZCVACTR_right)));
 /* line 967: */
 /* line 968: */
 /* line 969: */
ADVACTR = ((*(&(YCVACTR_left->Mode)))<WFAACTR_refrefmark);
if ( ADVACTR )
{ /* line 970: */
ADVACTR = ARMACTR_isarray((*(&(YCVACTR_left->Mode))));
}
 /* line 971: */
if (ADVACTR)
{ 
if (A_VC_EQ(WCVACTR_op,CDVACTR))
{ 
EDVACTR = FDVACTR;
} 
else
{ 
 /* line 973: */
EDVACTR = HDVACTR;
} 
if (VQMACTR_isrow((*(&(YCVACTR_left->Mode)))))
{ 
JDVACTR = KDVACTR;
} 
else
{ 
JDVACTR = MDVACTR;
} 
 /* line 974: */
 /* line 975: */
 /* line 976: */
 /* line 977: */
CMTACTR_simpledyop( A68_TRUE, A_VC_PLUS(JDVACTR,PDVACTR), JQQACTR_yield(WCVACTR_op, YCVACTR_left), JQQACTR_yield(WCVACTR_op, ZCVACTR_right), &QDVACTR );
ODVACTR = A_VC_PLUS(EDVACTR,QDVACTR);
} 
else
{ 
 /* line 978: */
CMTACTR_simpledyop( A68_FALSE, WCVACTR_op, YCVACTR_left, ZCVACTR_right, &RDVACTR );
ODVACTR = RDVACTR;
} 
SDVACTR_body = ODVACTR;
 /* line 979: */
 /* line 980: */
TDVACTR.Mode = (*(&(Root->Mode)));
 /* line 982: */
TDVACTR.Info = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(YCVACTR_left->Info)))&XKJACTR_fxwarn)|(A68_BITS )((*(&(ZCVACTR_right->Info)))&XKJACTR_fxwarn))|RKJACTR_atomic);
 /* line 983: */
TDVACTR.Extra = A_UNITE(UDVACTR,mode6,6,SDVACTR_body);
VDVACTR = TDVACTR;
} 
A_PROC_EXIT(isisnt);
*ReturnedValue = (VDVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  GFVACTR_anonymous(A68_55 * V, A68_INT  I, A68_INT  J, A68_55  *ReturnedValue)
{ 
A68_55  JFVACTR;  /* clause result */
 /* line 1021: */
{ 
(void)(WXIACTR_assert(IFVACTR, A68_FALSE));
 /* line 1022: */
JFVACTR = DLJACTR_skipvalue;
} 
*ReturnedValue = (JFVACTR);
return;
} 
#undef NL

A68_VOID  VFVACTR_dyadicsem(A68_55 * Root, A68_62  Rator, A68_55  *ReturnedValue)
{ 
A68_INT  WFVACTR_param A_UNUSED = {0};
A68_INT  XFVACTR_opnumber A_UNUSED = {0};
A68_INT  YFVACTR;  /* ADICOPS - MOD */
A68_INT  ZFVACTR_version A_UNUSED = {0};
A68_55  AGVACTR;  /* clause result */
A68_193  BGVACTR;  /* CALL */
A68_55  CGVACTR;  /* avoid structure result */
A68_INT  DGVACTR_biopparam A_UNUSED = {0};
A68_INT  EGVACTR_opnumber A_UNUSED = {0};
A68_INT  FGVACTR;  /* ADICOPS - MOD */
A68_INT  GGVACTR_version A_UNUSED = {0};
A68_193  HGVACTR;  /* CALL */
A68_55  IGVACTR;  /* avoid structure result */
A_PROC_ENTRY(dyadicsem);
 /* line 1031: */
 /* line 1032: */
{ 
WFVACTR_param = (A68_INT )(A68_BITS )((A68_BITS )Rator.Param&ZGAACTR_parammask);
 /* line 1033: */
 /* line 1034: */
if (WFVACTR_param<RGAACTR_biopnumbersstart)
{ 
XFVACTR_opnumber = (WFVACTR_param/SGAACTR_opnumberdivisor);
 /* line 1035: */
ZFVACTR_version = A_MOD(WFVACTR_param,SGAACTR_opnumberdivisor,YFVACTR);
 /* line 1036: */
 /* line 1037: */
BGVACTR = A_R1INDEX(OFVACTR_dyadicsemantics,XFVACTR_opnumber) ;
A_CALLPROC(BGVACTR,(Root, XFVACTR_opnumber, ZFVACTR_version, &CGVACTR),(Root, XFVACTR_opnumber, ZFVACTR_version, &CGVACTR,(BGVACTR).nonlocals));
AGVACTR = CGVACTR;
} 
else
{ 
DGVACTR_biopparam = (WFVACTR_param-RGAACTR_biopnumbersstart);
 /* line 1038: */
EGVACTR_opnumber = (DGVACTR_biopparam/TGAACTR_biopnumberdivisor);
 /* line 1039: */
GGVACTR_version = A_MOD(DGVACTR_biopparam,TGAACTR_biopnumberdivisor,FGVACTR);
 /* line 1040: */
 /* line 1041: */
 /* line 1042: */
 /* line 1044: */
HGVACTR = A_R1INDEX(SFVACTR_dyadicbiopsemantics,EGVACTR_opnumber) ;
A_CALLPROC(HGVACTR,(Root, EGVACTR_opnumber, GGVACTR_version, &IGVACTR),(Root, EGVACTR_opnumber, GGVACTR_version, &IGVACTR,(HGVACTR).nonlocals));
AGVACTR = IGVACTR;
} 
} 
A_PROC_EXIT(dyadicsem);
*ReturnedValue = (AGVACTR);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 6: */
void PHTACTR(void)   /* initialise DECS adicops */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel","-dir",".","adicops.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/vak/Project/Algol/Algol-68RS-Source/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/vak/Project/Algol/Algol-68RS-Source/a68config/a68config.m","./values.m","./uniquenameserver.m","./modes.m","./incmode.m","./idtable.m","./incoperfn.m","./evalbase.m","./environment.m","./environ.m","./coutput.m","./centities.m","./biops.m","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config A_UNUSED;
/* --- end of configuration information */
A68_VC  HJTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_210  MAUACTR;  /* collateral clause result */
A68_193  NAUACTR;  /* procedure value */
A68_193  OAUACTR;  /* procedure value */
A68_193  PAUACTR;  /* procedure value */
A68_193  QAUACTR;  /* procedure value */
A68_193  RAUACTR;  /* procedure value */
A68_193  SAUACTR;  /* procedure value */
A68_193  TAUACTR;  /* procedure value */
A68_193  UAUACTR;  /* procedure value */
A68_193  VAUACTR;  /* procedure value */
A68_193  WAUACTR;  /* procedure value */
A68_193  XAUACTR;  /* procedure value */
A68_193  YAUACTR;  /* procedure value */
A68_193  ZAUACTR;  /* procedure value */
A68_193  ABUACTR;  /* procedure value */
A68_193  BBUACTR;  /* procedure value */
A68_193  CBUACTR;  /* procedure value */
A68_193  DBUACTR;  /* procedure value */
A68_193  EBUACTR;  /* procedure value */
A68_209  FBUACTR;  /* OPERATORS - istruct to row */
A68_209  GBUACTR;  /* OPERATORS - trim index */
A68_209  HBUACTR;  /* OPERATORS - trim index */
A68_225  WDVACTR;  /* collateral clause result */
A68_193  XDVACTR;  /* procedure value */
A68_193  YDVACTR;  /* procedure value */
A68_193  ZDVACTR;  /* procedure value */
A68_193  AEVACTR;  /* procedure value */
A68_193  BEVACTR;  /* procedure value */
A68_193  CEVACTR;  /* procedure value */
A68_193  DEVACTR;  /* procedure value */
A68_193  EEVACTR;  /* procedure value */
A68_193  FEVACTR;  /* procedure value */
A68_193  GEVACTR;  /* procedure value */
A68_193  HEVACTR;  /* procedure value */
A68_193  IEVACTR;  /* procedure value */
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
A68_193  KFVACTR;  /* procedure value */
A68_209  LFVACTR;  /* OPERATORS - istruct to row */
A68_209  MFVACTR;  /* OPERATORS - trim index */
A68_209  NFVACTR;  /* OPERATORS - trim index */
A68_209  PFVACTR;  /* OPERATORS - vacuum */
A68_209  QFVACTR;  /* OPERATORS - trim index */
A68_209  RFVACTR;  /* OPERATORS - trim index */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
OUPACTR();   /* USE values */
RHMACTR();   /* USE uniquenameserver */
DNMACTR();   /* USE modes */
ZDAACTR();   /* USE incmode */
PPKACTR();   /* USE idtable */
XFAACTR();   /* USE incoperfn */
WXQACTR();   /* USE evalbase */
HPIACTR();   /* USE environment */
BPLACTR();   /* USE environ */
PTLACTR();   /* USE coutput */
THAACTR();   /* USE centities */
XBTACTR();   /* USE biops */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/adicops.a68";
A_config.translation_time = "Thu Nov  5 21:38:58 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "OHTACTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 21:38:58 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS adicops);
(void)(UEAALIB_a68config(LGAALIB_configinfo, THTACTR));
 /* line 49: */
WHTACTR_modulename = VHTACTR;
 /* line 51: */
 /* line 52: */
ZHTACTR_qvfault = YHTACTR;
 /* line 53: */
CITACTR_qcompl = BITACTR;
 /* line 54: */
FITACTR_qmupb = A_VC_PLUS(WHTACTR_modulename,EITACTR);
 /* line 55: */
IITACTR_qmlwb = A_VC_PLUS(WHTACTR_modulename,HITACTR);
 /* line 56: */
LITACTR_qabs = A_VC_PLUS(WHTACTR_modulename,KITACTR);
 /* line 57: */
OITACTR_qround = A_VC_PLUS(WHTACTR_modulename,NITACTR);
 /* line 58: */
RITACTR_qentier = A_VC_PLUS(WHTACTR_modulename,QITACTR);
 /* line 59: */
UITACTR_qsign = A_VC_PLUS(WHTACTR_modulename,TITACTR);
 /* line 60: */
XITACTR_qre = A_VC_PLUS(WHTACTR_modulename,WITACTR);
 /* line 61: */
AJTACTR_qim = A_VC_PLUS(WHTACTR_modulename,ZITACTR);
 /* line 62: */
DJTACTR_qarg = A_VC_PLUS(WHTACTR_modulename,CJTACTR);
 /* line 63: */
GJTACTR_qconj = A_VC_PLUS(WHTACTR_modulename,FJTACTR);
 /* line 64: */
IJTACTR_qi = A_VC_PLUS(WHTACTR_modulename,A_HVEC(HJTACTR,'I',A68_CHAR ));
 /* line 65: */
LJTACTR_qplus = A_VC_PLUS(WHTACTR_modulename,KJTACTR);
 /* line 66: */
OJTACTR_qminus = A_VC_PLUS(WHTACTR_modulename,NJTACTR);
 /* line 67: */
RJTACTR_qtimes = A_VC_PLUS(WHTACTR_modulename,QJTACTR);
 /* line 68: */
UJTACTR_qdiv = A_VC_PLUS(WHTACTR_modulename,TJTACTR);
 /* line 69: */
XJTACTR_qover = A_VC_PLUS(WHTACTR_modulename,WJTACTR);
 /* line 70: */
AKTACTR_qmod = A_VC_PLUS(WHTACTR_modulename,ZJTACTR);
 /* line 71: */
DKTACTR_qpower = A_VC_PLUS(WHTACTR_modulename,CKTACTR);
 /* line 72: */
GKTACTR_qelem = A_VC_PLUS(WHTACTR_modulename,FKTACTR);
 /* line 73: */
JKTACTR_qplusab = A_VC_PLUS(WHTACTR_modulename,IKTACTR);
 /* line 74: */
MKTACTR_qplusto = A_VC_PLUS(WHTACTR_modulename,LKTACTR);
 /* line 75: */
PKTACTR_qminusab = A_VC_PLUS(WHTACTR_modulename,OKTACTR);
 /* line 76: */
SKTACTR_qtimesab = A_VC_PLUS(WHTACTR_modulename,RKTACTR);
 /* line 77: */
VKTACTR_qoverab = A_VC_PLUS(WHTACTR_modulename,UKTACTR);
 /* line 78: */
YKTACTR_qmodab = A_VC_PLUS(WHTACTR_modulename,XKTACTR);
 /* line 79: */
BLTACTR_qdivab = A_VC_PLUS(WHTACTR_modulename,ALTACTR);
 /* line 80: */
ELTACTR_qis = A_VC_PLUS(WHTACTR_modulename,DLTACTR);
 /* line 81: */
HLTACTR_qisnt = A_VC_PLUS(WHTACTR_modulename,GLTACTR);
 /* line 82: */
KLTACTR_qisisnt = A_VC_PLUS(WHTACTR_modulename,JLTACTR);
 /* line 83: */
NLTACTR_qcomplex = MLTACTR;
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
NAUACTR.fn.fn_global = PMTACTR_monadicplus;
NAUACTR.nonlocals = A68_NIL;
MAUACTR.data[0] = NAUACTR;
 /* line 395: */
OAUACTR.fn.fn_global = VMTACTR_monadicminus;
OAUACTR.nonlocals = A68_NIL;
MAUACTR.data[1] = OAUACTR;
 /* line 396: */
PAUACTR.fn.fn_global = RNTACTR_monadicupb;
PAUACTR.nonlocals = A68_NIL;
MAUACTR.data[2] = PAUACTR;
 /* line 397: */
QAUACTR.fn.fn_global = JOTACTR_monadiclwb;
QAUACTR.nonlocals = A68_NIL;
MAUACTR.data[3] = QAUACTR;
 /* line 398: */
RAUACTR.fn.fn_global = APTACTR_not;
RAUACTR.nonlocals = A68_NIL;
MAUACTR.data[4] = RAUACTR;
 /* line 399: */
SAUACTR.fn.fn_global = UPTACTR_abs;
SAUACTR.nonlocals = A68_NIL;
MAUACTR.data[5] = SAUACTR;
 /* line 400: */
TAUACTR.fn.fn_global = YQTACTR_bin;
TAUACTR.nonlocals = A68_NIL;
MAUACTR.data[6] = TAUACTR;
 /* line 401: */
UAUACTR.fn.fn_global = NRTACTR_repr;
UAUACTR.nonlocals = A68_NIL;
MAUACTR.data[7] = UAUACTR;
 /* line 402: */
VAUACTR.fn.fn_global = CSTACTR_lengthen;
VAUACTR.nonlocals = A68_NIL;
MAUACTR.data[8] = VAUACTR;
 /* line 403: */
WAUACTR.fn.fn_global = SSTACTR_shorten;
WAUACTR.nonlocals = A68_NIL;
MAUACTR.data[9] = WAUACTR;
 /* line 404: */
XAUACTR.fn.fn_global = ITTACTR_odd;
XAUACTR.nonlocals = A68_NIL;
MAUACTR.data[10] = XAUACTR;
 /* line 405: */
YAUACTR.fn.fn_global = XTTACTR_sign;
YAUACTR.nonlocals = A68_NIL;
MAUACTR.data[11] = YAUACTR;
 /* line 406: */
ZAUACTR.fn.fn_global = LUTACTR_round;
ZAUACTR.nonlocals = A68_NIL;
MAUACTR.data[12] = ZAUACTR;
 /* line 407: */
ABUACTR.fn.fn_global = FWTACTR_entier;
ABUACTR.nonlocals = A68_NIL;
MAUACTR.data[13] = ABUACTR;
 /* line 408: */
BBUACTR.fn.fn_global = RYTACTR_re;
BBUACTR.nonlocals = A68_NIL;
MAUACTR.data[14] = BBUACTR;
 /* line 409: */
CBUACTR.fn.fn_global = ZYTACTR_im;
CBUACTR.nonlocals = A68_NIL;
MAUACTR.data[15] = CBUACTR;
 /* line 411: */
DBUACTR.fn.fn_global = HZTACTR_arg;
DBUACTR.nonlocals = A68_NIL;
MAUACTR.data[16] = DBUACTR;
EBUACTR.fn.fn_global = VZTACTR_conj;
EBUACTR.nonlocals = A68_NIL;
MAUACTR.data[17] = EBUACTR;
GBUACTR = A_HIS1ARR(FBUACTR,MAUACTR,A68_193 ,18) ;
IBUACTR_monadicsemantics = A_R1TRIM(HBUACTR,(GBUACTR),A_RTSCRIPT(&(HBUACTR.dim[0]),&((GBUACTR).dim[0]),(GBUACTR).dim[0].lwb,(GBUACTR).dim[0].upb,0));
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
XDVACTR.fn.fn_global = ODUACTR_dyadicplus;
XDVACTR.nonlocals = A68_NIL;
WDVACTR.data[0] = XDVACTR;
 /* line 990: */
YDVACTR.fn.fn_global = REUACTR_dyadicminus;
YDVACTR.nonlocals = A68_NIL;
WDVACTR.data[1] = YDVACTR;
 /* line 991: */
ZDVACTR.fn.fn_global = HFUACTR_dyadicupb;
ZDVACTR.nonlocals = A68_NIL;
WDVACTR.data[2] = ZDVACTR;
 /* line 992: */
AEVACTR.fn.fn_global = XFUACTR_dyadiclwb;
AEVACTR.nonlocals = A68_NIL;
WDVACTR.data[3] = AEVACTR;
 /* line 993: */
BEVACTR.fn.fn_global = NGUACTR_and;
BEVACTR.nonlocals = A68_NIL;
WDVACTR.data[4] = BEVACTR;
 /* line 994: */
CEVACTR.fn.fn_global = GHUACTR_or;
CEVACTR.nonlocals = A68_NIL;
WDVACTR.data[5] = CEVACTR;
 /* line 995: */
DEVACTR.fn.fn_global = ZHUACTR_lessnotless;
DEVACTR.nonlocals = A68_NIL;
WDVACTR.data[6] = DEVACTR;
 /* line 996: */
EEVACTR.fn.fn_global = ZHUACTR_lessnotless;
EEVACTR.nonlocals = A68_NIL;
WDVACTR.data[7] = EEVACTR;
 /* line 997: */
FEVACTR.fn.fn_global = LJUACTR_lesseqgreatereq;
FEVACTR.nonlocals = A68_NIL;
WDVACTR.data[8] = FEVACTR;
 /* line 998: */
GEVACTR.fn.fn_global = LJUACTR_lesseqgreatereq;
GEVACTR.nonlocals = A68_NIL;
WDVACTR.data[9] = GEVACTR;
 /* line 999: */
HEVACTR.fn.fn_global = CLUACTR_eqnoteq;
HEVACTR.nonlocals = A68_NIL;
WDVACTR.data[10] = HEVACTR;
 /* line 1000: */
IEVACTR.fn.fn_global = CLUACTR_eqnoteq;
IEVACTR.nonlocals = A68_NIL;
WDVACTR.data[11] = IEVACTR;
 /* line 1001: */
JEVACTR.fn.fn_global = WMUACTR_times;
JEVACTR.nonlocals = A68_NIL;
WDVACTR.data[12] = JEVACTR;
 /* line 1002: */
KEVACTR.fn.fn_global = IOUACTR_divide;
KEVACTR.nonlocals = A68_NIL;
WDVACTR.data[13] = KEVACTR;
 /* line 1003: */
LEVACTR.fn.fn_global = GPUACTR_over;
LEVACTR.nonlocals = A68_NIL;
WDVACTR.data[14] = LEVACTR;
 /* line 1004: */
MEVACTR.fn.fn_global = SPUACTR_mod;
MEVACTR.nonlocals = A68_NIL;
WDVACTR.data[15] = MEVACTR;
 /* line 1005: */
NEVACTR.fn.fn_global = QQUACTR_power;
NEVACTR.nonlocals = A68_NIL;
WDVACTR.data[16] = NEVACTR;
 /* line 1006: */
OEVACTR.fn.fn_global = SSUACTR_imaginary;
OEVACTR.nonlocals = A68_NIL;
WDVACTR.data[17] = OEVACTR;
 /* line 1007: */
PEVACTR.fn.fn_global = XTUACTR_shiftleftright;
PEVACTR.nonlocals = A68_NIL;
WDVACTR.data[18] = PEVACTR;
 /* line 1008: */
QEVACTR.fn.fn_global = XTUACTR_shiftleftright;
QEVACTR.nonlocals = A68_NIL;
WDVACTR.data[19] = QEVACTR;
 /* line 1009: */
REVACTR.fn.fn_global = UUUACTR_elem;
REVACTR.nonlocals = A68_NIL;
WDVACTR.data[20] = REVACTR;
 /* line 1010: */
SEVACTR.fn.fn_global = WWUACTR_plusab;
SEVACTR.nonlocals = A68_NIL;
WDVACTR.data[21] = SEVACTR;
 /* line 1011: */
TEVACTR.fn.fn_global = VYUACTR_minusab;
TEVACTR.nonlocals = A68_NIL;
WDVACTR.data[22] = TEVACTR;
 /* line 1012: */
UEVACTR.fn.fn_global = PZUACTR_timesab;
UEVACTR.nonlocals = A68_NIL;
WDVACTR.data[23] = UEVACTR;
 /* line 1013: */
VEVACTR.fn.fn_global = SAVACTR_overab;
VEVACTR.nonlocals = A68_NIL;
WDVACTR.data[24] = VEVACTR;
 /* line 1014: */
WEVACTR.fn.fn_global = HBVACTR_modab;
WEVACTR.nonlocals = A68_NIL;
WDVACTR.data[25] = WEVACTR;
 /* line 1015: */
XEVACTR.fn.fn_global = UBVACTR_divab;
XEVACTR.nonlocals = A68_NIL;
WDVACTR.data[26] = XEVACTR;
 /* line 1016: */
YEVACTR.fn.fn_global = NCVACTR_isisnt;
YEVACTR.nonlocals = A68_NIL;
WDVACTR.data[27] = YEVACTR;
 /* line 1017: */
ZEVACTR.fn.fn_global = NCVACTR_isisnt;
ZEVACTR.nonlocals = A68_NIL;
WDVACTR.data[28] = ZEVACTR;
 /* line 1018: */
AFVACTR.fn.fn_global = NGUACTR_and;
AFVACTR.nonlocals = A68_NIL;
WDVACTR.data[29] = AFVACTR;
 /* line 1019: */
BFVACTR.fn.fn_global = GHUACTR_or;
BFVACTR.nonlocals = A68_NIL;
WDVACTR.data[30] = BFVACTR;
 /* line 1020: */
CFVACTR.fn.fn_global = ZXUACTR_plusto;
CFVACTR.nonlocals = A68_NIL;
WDVACTR.data[31] = CFVACTR;
KFVACTR.fn.fn_global = GFVACTR_anonymous;
KFVACTR.nonlocals = A68_NIL;
WDVACTR.data[32] = KFVACTR;
MFVACTR = A_HIS1ARR(LFVACTR,WDVACTR,A68_193 ,33) ;
OFVACTR_dyadicsemantics = A_R1TRIM(NFVACTR,(MFVACTR),A_RTSCRIPT(&(NFVACTR.dim[0]),&((MFVACTR).dim[0]),(MFVACTR).dim[0].lwb,(MFVACTR).dim[0].upb,0));
 /* line 1024: */
 /* line 1028: */
QFVACTR = A_R1VAC(PFVACTR) ;
SFVACTR_dyadicbiopsemantics = A_R1TRIM(RFVACTR,(QFVACTR),A_RTSCRIPT(&(RFVACTR.dim[0]),&((QFVACTR).dim[0]),(QFVACTR).dim[0].lwb,(QFVACTR).dim[0].upb,0));
 /* line 1030: */
 /* line 1046: */
A_PROC_EXIT(DECS adicops);
} 
#undef NL
/* end of translation of adicops.a68 */
