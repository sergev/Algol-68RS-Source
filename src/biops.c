/* UNAME:ICTACTR */
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

A_PROCEDURE(A68_VOID ,A68t59,(A68_VC ),(A68_VC ,void *));
typedef struct A68t59  A68_59 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t60,(void),(void *));
typedef struct A68t60  A68_60 ;    /* PROC VOID */
struct A68t62 ;

A_PROCEDURE(A68_VOID ,A68t61,(struct A68t62 ),(struct A68t62 ,void *));
typedef struct A68t61  A68_61 ;    /* PROC(MODE62) VOID */
A_VECTOR(struct A68t63 ,A68t62);
typedef struct A68t62  A68_62 ;    /* VECTOR [] MODE63 */
struct A68t63 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_SINT  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t63  A68_63 ;    /* UNION(CHAR,MODE26,SHORT INT)  */
struct A68t65 ;

A_PROCEDURE(A68_VOID ,A68t64,(struct A68t65 ,A68_INT ),(struct A68t65 ,A68_INT ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(MODE65,INT) VOID */
A_VECTOR(struct A68t66 ,A68t65);
typedef struct A68t65  A68_65 ;    /* VECTOR [] MODE66 */
struct A68t66 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_INT  mode3;
A68_SINT  mode4;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t66  A68_66 ;    /* UNION(CHAR,MODE26,INT,SHORT INT)  */

A_PROCEDURE(A68_INT ,A68t67,(A68_INT ),(A68_INT ,void *));
typedef struct A68t67  A68_67 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t68,(A68_INT ),(A68_INT ,void *));
typedef struct A68t68  A68_68 ;    /* PROC(INT) BOOL */
struct A68t69{
A68_INT  Level;
A_PAD_INT(PAD_4)
A68_INT  Block;
A_PAD_INT(PAD_5)
};
typedef struct A68t69  A68_69 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t70,(struct A68t69 *),(struct A68t69 *,void *));
typedef struct A68t70  A68_70 ;    /* PROC MODE69 */

A_PROCEDURE(A68_INT ,A68t71,(void),(void *));
typedef struct A68t71  A68_71 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t72,(A68_INT ),(A68_INT ,void *));
typedef struct A68t72  A68_72 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t73,(void),(void *));
typedef struct A68t73  A68_73 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t74,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t74  A68_74 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t75,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t75  A68_75 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t76,(struct A68t69 ,struct A68t69 ),(struct A68t69 ,struct A68t69 ,void *));
typedef struct A68t76  A68_76 ;    /* PROC(MODE69,MODE69) BOOL */

A_PROCEDURE(A68_BOOL ,A68t77,(struct A68t69 ),(struct A68t69 ,void *));
typedef struct A68t77  A68_77 ;    /* PROC(MODE69) BOOL */

A_PROCEDURE(A68_VOID ,A68t78,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t79,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t79  A68_79 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t80,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t80  A68_80 ;    /* PROC(INT) REF MODE26 */
struct A68t82 ;

A_PROCEDURE(A68_VOID ,A68t81,(A68_INT ,struct A68t82 ),(A68_INT ,struct A68t82 ,void *));
typedef struct A68t81  A68_81 ;    /* PROC(INT,MODE82) VOID */
A_ROW(A68_VC ,A68t82,1);
typedef struct A68t82  A68_82 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t83,(void),(void *));
typedef struct A68t83  A68_83 ;    /* PROC BITS */
struct A68t84{
A68_INT  Cfile;
A_PAD_INT(PAD_6)
};
typedef struct A68t84  A68_84 ;    /* STRUCT(INT)  */
struct A68t85{
A68_INT  Seedfile;
A_PAD_INT(PAD_7)
};
typedef struct A68t85  A68_85 ;    /* STRUCT(INT)  */
struct A68t86 { A68_INT mode; union {
struct A68t84  mode1;
struct A68t85  mode2;
struct A68t56  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t86  A68_86 ;    /* UNION(MODE84,MODE85,MODE56,VOID)  */
A_ROW(A68_BOOL ,A68t87,1);
typedef struct A68t87  A68_87 ;    /* [] BOOL */
struct A68t88{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_8)
A68_VC  Sourcefile;
struct A68t56  Nameseed;
A_PAD_ISTRUCT(A68_56 ,PAD_9)
struct A68t86  Nameseedorigin;
struct A68t89 * Used_modules;
A68_VC  Commandline;
struct A68t90 * Environment;
};
typedef struct A68t88  A68_88 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE56,MODE86,REF MODE89,REF MODE26,REF MODE90)  */
struct A68t89{
A68_VC  Modinfo_file;
struct A68t89 * Next;
};
typedef struct A68t89  A68_89 ;    /* STRUCT(REF MODE26,REF MODE89)  */
struct A68t90{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t90 * Next;
};
typedef struct A68t90  A68_90 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE90)  */
struct A68t92 ;
struct A68t93 ;

A_PROCEDURE(struct A68t92 *,A68t91,(A68_VC ,struct A68t93 *,A68_VC *),(A68_VC ,struct A68t93 *,A68_VC *,void *));
typedef struct A68t91  A68_91 ;    /* PROC(MODE26,REF MODE93,REF REF MODE26) REF MODE92 */
struct A68t92{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t92  A68_92 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t93{
A68_VC  Dir;
struct A68t93 * Next;
};
typedef struct A68t93  A68_93 ;    /* STRUCT(REF MODE26,REF MODE93)  */
struct A68t95 ;

A_PROCEDURE(A68_VOID ,A68t94,(struct A68t95 *,struct A68t95 **),(struct A68t95 *,struct A68t95 **,void *));
typedef struct A68t94  A68_94 ;    /* PROC(REF MODE95,REF REF MODE95) VOID */
struct A68t97{
A68_INT  Rdenno;
A_PAD_INT(PAD_10)
};
typedef struct A68t97  A68_97 ;    /* STRUCT(INT)  */
struct A68t98{
A68_INT  Idno;
A_PAD_INT(PAD_11)
};
typedef struct A68t98  A68_98 ;    /* STRUCT(INT)  */
struct A68t99{
struct A68t56  Name;
A_PAD_ISTRUCT(A68_56 ,PAD_12)
A68_INT  Mode;
A_PAD_INT(PAD_13)
};
typedef struct A68t99  A68_99 ;    /* STRUCT(MODE56,INT)  */
struct A68t100{
A68_INT  Nse;
A_PAD_INT(PAD_14)
};
typedef struct A68t100  A68_100 ;    /* STRUCT(INT)  */
struct A68t101{
A68_INT  Fn;
A_PAD_INT(PAD_15)
A68_INT  Param;
A_PAD_INT(PAD_16)
struct A68t102 * Operands;
};
typedef struct A68t101  A68_101 ;    /* STRUCT(INT,INT,REF MODE102)  */
struct A68t96 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t97  mode2;
struct A68t98  mode4;
struct A68t99  mode5;
A68_VC  mode6;
struct A68t57  mode7;
struct A68t100  mode8;
struct A68t101  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t96  A68_96 ;    /* UNION(LONG BITS,MODE97,VOID,MODE98,MODE99,MODE26,MODE57,MODE100,MODE101)  */
struct A68t95{
A68_INT  Mode;
A_PAD_INT(PAD_17)
A68_BITS  Info;
A_PAD_BITS(PAD_18)
struct A68t96  Extra;
};
typedef struct A68t95  A68_95 ;    /* STRUCT(INT,BITS,MODE96)  */
struct A68t102{
struct A68t95  Value;
struct A68t102 * Rest;
};
typedef struct A68t102  A68_102 ;    /* STRUCT(MODE95,REF MODE102)  */

A_PROCEDURE(A68_VOID ,A68t103,(struct A68t95 *,struct A68t95 **,A68_BITS ),(struct A68t95 *,struct A68t95 **,A68_BITS ,void *));
typedef struct A68t103  A68_103 ;    /* PROC(REF MODE95,REF REF MODE95,BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t104,(struct A68t95 *,struct A68t95 **,struct A68t95 **),(struct A68t95 *,struct A68t95 **,struct A68t95 **,void *));
typedef struct A68t104  A68_104 ;    /* PROC(REF MODE95,REF REF MODE95,REF REF MODE95) VOID */

A_PROCEDURE(A68_VOID ,A68t105,(struct A68t95 *),(struct A68t95 *,void *));
typedef struct A68t105  A68_105 ;    /* PROC(REF MODE95) VOID */
struct A68t106{
A68_INT  Mode;
A_PAD_INT(PAD_19)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_20)
struct A68t69  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_21)
A68_BITS  Flags;
A_PAD_BITS(PAD_22)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t106  A68_106 ;    /* STRUCT(INT,INT,MODE69,REF MODE26,REF MODE26,MODE56,BITS,REF MODE26,REF MODE26)  */
struct A68t107{
A68_INT  Mode;
A_PAD_INT(PAD_23)
A68_INT  Resultmode;
A_PAD_INT(PAD_24)
A68_INT  Declevel;
A_PAD_INT(PAD_25)
struct A68t69  Environ;
A68_VC  Name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_26)
struct A68t56  Fnprefix;
A_PAD_ISTRUCT(A68_56 ,PAD_27)
struct A68t56  Envprefix;
A_PAD_ISTRUCT(A68_56 ,PAD_28)
A68_BITS  Flags;
A_PAD_BITS(PAD_29)
};
typedef struct A68t107  A68_107 ;    /* STRUCT(INT,INT,INT,MODE69,REF MODE26,MODE56,MODE56,MODE56,BITS)  */
struct A68t108{
struct A68t55  Label;
struct A68t69  Environ;
A68_VC  Name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_30)
A68_BITS  Flags;
A_PAD_BITS(PAD_31)
A68_INT  Alias;
A_PAD_INT(PAD_32)
};
typedef struct A68t108  A68_108 ;    /* STRUCT(MODE55,MODE69,REF MODE26,MODE56,BITS,INT)  */

A_PROCEDURE(struct A68t106 *,A68t109,(A68_INT ),(A68_INT ,void *));
typedef struct A68t109  A68_109 ;    /* PROC(INT) REF MODE106 */

A_PROCEDURE(A68_VOID ,A68t110,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t111,(A68_VC ,struct A68t56 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t56 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t111  A68_111 ;    /* PROC(REF MODE26,MODE56,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */
A_ROW(struct A68t106 ,A68t112,1);
typedef struct A68t112  A68_112 ;    /* [] MODE106 */
A_ROW(struct A68t107 ,A68t113,1);
typedef struct A68t113  A68_113 ;    /* [] MODE107 */
A_ROW(struct A68t108 ,A68t114,1);
typedef struct A68t114  A68_114 ;    /* [] MODE108 */
struct A68t116 ;

A_PROCEDURE(A68_VOID ,A68t115,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t116 ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t116 ,void *));
typedef struct A68t115  A68_115 ;    /* PROC(INT,INT,INT,INT,REF MODE116) VOID */
A_ROW(A68_INT ,A68t116,1);
typedef struct A68t116  A68_116 ;    /* [] INT */

A_PROCEDURE(A68_BOOL ,A68t117,(A68_VC ),(A68_VC ,void *));
typedef struct A68t117  A68_117 ;    /* PROC(MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t118,(A68_INT ,struct A68t69 *),(A68_INT ,struct A68t69 *,void *));
typedef struct A68t118  A68_118 ;    /* PROC(INT) MODE69 */
struct A68t119{
A68_INT  Parameters;
A_PAD_INT(PAD_33)
A68_INT  Result;
A_PAD_INT(PAD_34)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_35)
};
typedef struct A68t119  A68_119 ;    /* STRUCT(INT,INT,BOOL)  */
A_ISTRUCT(A68_CHAR ,32,A68t121);
typedef struct A68t121  A68_121 ;    /* STRUCT 32 CHAR */
struct A68t120{
A68_INT  Mode;
A_PAD_INT(PAD_36)
A68_INT  Offset;
A_PAD_INT(PAD_37)
struct A68t121  Name;
A_PAD_ISTRUCT(A68_121 ,PAD_38)
};
typedef struct A68t120  A68_120 ;    /* STRUCT(INT,INT,MODE121)  */
struct A68t123 ;

A_PROCEDURE(A68_VOID ,A68t122,(A68_INT ,struct A68t123 *),(A68_INT ,struct A68t123 *,void *));
typedef struct A68t122  A68_122 ;    /* PROC(INT) REF MODE123 */
A_VECTOR(A68_INT ,A68t123);
typedef struct A68t123  A68_123 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t124,(struct A68t120 *,A68_VC *),(struct A68t120 *,A68_VC *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(REF MODE120) MODE26 */

A_PROCEDURE(A68_VOID ,A68t125,(A68_INT ,A68_VC ,struct A68t99 *),(A68_INT ,A68_VC ,struct A68t99 *,void *));
typedef struct A68t125  A68_125 ;    /* PROC(INT,MODE26) MODE99 */
struct A68t127 ;

A_PROCEDURE(A68_VOID ,A68t126,(struct A68t127 ,A68_INT ),(struct A68t127 ,A68_INT ,void *));
typedef struct A68t126  A68_126 ;    /* PROC(REF MODE127,INT) VOID */
A_ROW(struct A68t128 ,A68t127,1);
typedef struct A68t127  A68_127 ;    /* [] MODE128 */
struct A68t138{
A68_INT  Mode;
A_PAD_INT(PAD_39)
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
A_PAD_INT(PAD_40)
struct A68t142 * Modelist;
};
typedef struct A68t129  A68_129 ;    /* STRUCT(INT,REF MODE142)  */
struct A68t130{
A68_INT  Deproc;
A_PAD_INT(PAD_41)
struct A68t142 * Pars;
};
typedef struct A68t130  A68_130 ;    /* STRUCT(INT,REF MODE142)  */
struct A68t131{
A68_INT  Rdenno;
A_PAD_INT(PAD_42)
A68_INT  Deflex;
A_PAD_INT(PAD_43)
struct A68t141 * Sels;
};
typedef struct A68t131  A68_131 ;    /* STRUCT(INT,INT,REF MODE141)  */
struct A68t132{
A68_INT  Rdenno;
A_PAD_INT(PAD_44)
A68_INT  Imode;
A_PAD_INT(PAD_45)
A68_INT  Length;
A_PAD_INT(PAD_46)
A68_INT  Deflex;
A_PAD_INT(PAD_47)
};
typedef struct A68t132  A68_132 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t133{
A68_INT  Deproc;
A_PAD_INT(PAD_48)
};
typedef struct A68t133  A68_133 ;    /* STRUCT(INT)  */
struct A68t134{
A68_INT  Rdenno;
A_PAD_INT(PAD_49)
A68_INT  Vecmode;
A_PAD_INT(PAD_50)
A68_INT  Deflex;
A_PAD_INT(PAD_51)
};
typedef struct A68t134  A68_134 ;    /* STRUCT(INT,INT,INT)  */
struct A68t135{
A68_INT  Rdenno;
A_PAD_INT(PAD_52)
A68_INT  Mode;
A_PAD_INT(PAD_53)
A68_INT  Nods;
A_PAD_INT(PAD_54)
A68_INT  Deflex;
A_PAD_INT(PAD_55)
};
typedef struct A68t135  A68_135 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t136{
A68_INT  Mode;
A_PAD_INT(PAD_56)
struct A68t140 * Stenlist;
};
typedef struct A68t136  A68_136 ;    /* STRUCT(INT,REF MODE140)  */
struct A68t137{
A68_INT  Mode;
A_PAD_INT(PAD_57)
A68_INT  Modeproc;
A_PAD_INT(PAD_58)
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
A_PAD_INT(PAD_59)
A68_INT  Rdenno;
A_PAD_INT(PAD_60)
struct A68t140 * Rest;
};
typedef struct A68t140  A68_140 ;    /* STRUCT(INT,INT,REF MODE140)  */
struct A68t141{
A68_INT  Mode;
A_PAD_INT(PAD_61)
A68_INT  Fieldno;
A_PAD_INT(PAD_62)
struct A68t121  Name;
A_PAD_ISTRUCT(A68_121 ,PAD_63)
struct A68t141 * Rest;
};
typedef struct A68t141  A68_141 ;    /* STRUCT(INT,INT,MODE121,REF MODE141)  */
struct A68t142{
A68_INT  Mode;
A_PAD_INT(PAD_64)
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

A_PROCEDURE(A68_VOID ,A68t148,(struct A68t86 ),(struct A68t86 ,void *));
typedef struct A68t148  A68_148 ;    /* PROC(MODE86) VOID */

A_PROCEDURE(struct A68t56 ,A68t149,(void),(void *));
typedef struct A68t149  A68_149 ;    /* PROC MODE56 */

A_PROCEDURE(A68_VOID ,A68t150,(struct A68t56 ),(struct A68t56 ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(MODE56) VOID */

A_PROCEDURE(A68_VOID ,A68t151,(struct A68t86 ,A68_VC *),(struct A68t86 ,A68_VC *,void *));
typedef struct A68t151  A68_151 ;    /* PROC(MODE86) MODE26 */

A_PROCEDURE(A68_BOOL ,A68t152,(struct A68t95 *,struct A68t95 *),(struct A68t95 *,struct A68t95 *,void *));
typedef struct A68t152  A68_152 ;    /* PROC(REF MODE95,REF MODE95) BOOL */

A_PROCEDURE(A68_BOOL ,A68t153,(struct A68t95 *),(struct A68t95 *,void *));
typedef struct A68t153  A68_153 ;    /* PROC(REF MODE95) BOOL */

A_PROCEDURE(A68_BOOL ,A68t154,(struct A68t95 *,A68_LBITS ),(struct A68t95 *,A68_LBITS ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(REF MODE95,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t155,(struct A68t95 *),(struct A68t95 *,void *));
typedef struct A68t155  A68_155 ;    /* PROC(REF MODE95) LONG BITS */

A_PROCEDURE(A68_VOID ,A68t156,(struct A68t95 *,A68_VC *),(struct A68t95 *,A68_VC *,void *));
typedef struct A68t156  A68_156 ;    /* PROC(REF MODE95) MODE26 */

A_PROCEDURE(struct A68t95 *,A68t157,(struct A68t95 *,A68_INT ),(struct A68t95 *,A68_INT ,void *));
typedef struct A68t157  A68_157 ;    /* PROC(REF MODE95,INT) REF MODE95 */

A_PROCEDURE(A68_INT ,A68t158,(struct A68t101 ),(struct A68t101 ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(MODE101) INT */
struct A68t159{
struct A68t95 * Value;
struct A68t55 * End;
A68_INT  Type;
A_PAD_INT(PAD_65)
};
typedef struct A68t159  A68_159 ;    /* STRUCT(REF MODE95,REF MODE55,INT)  */

A_PROCEDURE(A68_BOOL ,A68t160,(struct A68t95 *,A68_BITS ),(struct A68t95 *,A68_BITS ,void *));
typedef struct A68t160  A68_160 ;    /* PROC(REF MODE95,BITS) BOOL */

A_PROCEDURE(struct A68t95 *,A68t161,(struct A68t102 *,A68_INT ),(struct A68t102 *,A68_INT ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(REF MODE102,INT) REF MODE95 */

A_PROCEDURE(struct A68t102 *,A68t162,(struct A68t102 *),(struct A68t102 *,void *));
typedef struct A68t162  A68_162 ;    /* PROC(REF MODE102) REF MODE102 */
struct A68t164 ;

A_PROCEDURE(struct A68t95 *,A68t163,(A68_INT ,A68_INT ,A68_BITS ,struct A68t164 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t164 ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(INT,INT,BITS,MODE164) REF MODE95 */
A_VECTOR(struct A68t95 *,A68t164);
typedef struct A68t164  A68_164 ;    /* VECTOR [] REF MODE95 */

A_PROCEDURE(A68_VOID ,A68t165,(struct A68t95 *,A68_BOOL ,A68_VC *),(struct A68t95 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t165  A68_165 ;    /* PROC(REF MODE95,BOOL) MODE26 */

A_PROCEDURE(A68_LINT ,A68t166,(struct A68t95 ),(struct A68t95 ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(MODE95) LONG INT */
struct A68t167 { A68_INT mode; union {
struct A68t95 * mode1;
A68_VC  mode2;
struct A68t99  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t167  A68_167 ;    /* UNION(REF MODE95,MODE26,MODE99)  */

A_PROCEDURE(A68_VOID ,A68t168,(struct A68t167 ,A68_VC *),(struct A68t167 ,A68_VC *,void *));
typedef struct A68t168  A68_168 ;    /* PROC(MODE167) MODE26 */
struct A68t170 ;

A_PROCEDURE(A68_VOID ,A68t169,(struct A68t170 ,A68_VC *),(struct A68t170 ,A68_VC *,void *));
typedef struct A68t169  A68_169 ;    /* PROC(MODE170) MODE26 */
A_VECTOR(struct A68t167 ,A68t170);
typedef struct A68t170  A68_170 ;    /* VECTOR [] MODE167 */

A_PROCEDURE(A68_VOID ,A68t171,(A68_VC ,struct A68t170 ,A68_VC *),(A68_VC ,struct A68t170 ,A68_VC *,void *));
typedef struct A68t171  A68_171 ;    /* PROC(MODE26,MODE170) MODE26 */

A_PROCEDURE(A68_VOID ,A68t172,(struct A68t170 ),(struct A68t170 ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE170) VOID */

A_PROCEDURE(A68_VOID ,A68t173,(A68_VC ,A68_INT ,struct A68t170 ,struct A68t99 *),(A68_VC ,A68_INT ,struct A68t170 ,struct A68t99 *,void *));
typedef struct A68t173  A68_173 ;    /* PROC(MODE26,INT,MODE170) MODE99 */

A_PROCEDURE(struct A68t95 *,A68t174,(struct A68t95 *),(struct A68t95 *,void *));
typedef struct A68t174  A68_174 ;    /* PROC(REF MODE95) REF MODE95 */

A_PROCEDURE(struct A68t95 *,A68t175,(A68_VC ,struct A68t95 *),(A68_VC ,struct A68t95 *,void *));
typedef struct A68t175  A68_175 ;    /* PROC(MODE26,REF MODE95) REF MODE95 */

A_PROCEDURE(A68_VOID ,A68t176,(struct A68t60 ),(struct A68t60 ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(MODE60) VOID */

A_PROCEDURE(A68_VOID ,A68t177,(struct A68t59 ),(struct A68t59 ,void *));
typedef struct A68t177  A68_177 ;    /* PROC(MODE59) VOID */

A_PROCEDURE(A68_VOID ,A68t178,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,55,A68t179);
typedef struct A68t179  A68_179 ;    /* STRUCT 55 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t180);
typedef struct A68t180  A68_180 ;    /* STRUCT 8 CHAR */

A_PROCEDURE(A68_VOID ,A68t181,(struct A68t95 *,struct A68t95 *),(struct A68t95 *,struct A68t95 *,void *));
typedef struct A68t181  A68_181 ;    /* PROC(REF MODE95) MODE95 */
A_ISTRUCT(A68_CHAR ,15,A68t182);
typedef struct A68t182  A68_182 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t183);
typedef struct A68t183  A68_183 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t184);
typedef struct A68t184  A68_184 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t185);
typedef struct A68t185  A68_185 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t186);
typedef struct A68t186  A68_186 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t66 ,13,A68t187);
typedef struct A68t187  A68_187 ;    /* STRUCT 13 MODE66 */
A_ISTRUCT(A68_CHAR ,10,A68t188);
typedef struct A68t188  A68_188 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(struct A68t167 ,4,A68t189);
typedef struct A68t189  A68_189 ;    /* STRUCT 4 MODE167 */
A_ISTRUCT(A68_CHAR ,12,A68t190);
typedef struct A68t190  A68_190 ;    /* STRUCT 12 CHAR */

A_PROCEDURE(A68_VOID ,A68t191,(struct A68t95 *,A68_INT ,struct A68t95 *),(struct A68t95 *,A68_INT ,struct A68t95 *,void *));
typedef struct A68t191  A68_191 ;    /* PROC(REF MODE95,INT) MODE95 */
A_ISTRUCT(A68_CHAR ,5,A68t192);
typedef struct A68t192  A68_192 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t193);
typedef struct A68t193  A68_193 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t194);
typedef struct A68t194  A68_194 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(struct A68t167 ,2,A68t195);
typedef struct A68t195  A68_195 ;    /* STRUCT 2 MODE167 */
A_ISTRUCT(struct A68t167 ,3,A68t196);
typedef struct A68t196  A68_196 ;    /* STRUCT 3 MODE167 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from values --- */
extern A68_VOID  DAQACTR_getcfragment(struct A68t95 *,A68_VC *);
#define RKJACTR_atomic 0X2U
#define XKJACTR_fxwarn 0X80U
extern A68_95  DLJACTR_skipvalue;
extern A68_VOID  JEQACTR_bracketcfragment(struct A68t95 *,A68_VC *);
extern A68_VOID  APQACTR_usemacro(A68_VC ,struct A68t170 ,A68_VC *);
extern A68_VOID  FPQACTR_emitline(struct A68t170 );
extern A68_95 * GQQACTR_yield(struct A68t95 *);
/* --- End of imports from values --- */


/* --- Imports from uniquenameserver --- */
extern A68_56  QIMACTR_newuniquename(void);
/* --- End of imports from uniquenameserver --- */


/* --- Imports from modes --- */
extern A68_VOID  XKNACTR_ctype(A68_INT ,A68_VC *);
extern A68_BOOL  XRMACTR_isistruct(A68_INT );
extern A68_125  TMOACTR_new;
extern A68_VOID  FLNACTR_cast(A68_INT ,A68_VC *);
/* --- End of imports from modes --- */


/* --- Imports from incmode --- */
#define VFAACTR_refmark 1024
/* --- End of imports from incmode --- */


/* --- Imports from idtable --- */
/* --- End of imports from idtable --- */


/* --- Imports from incoperfn --- */
/* --- End of imports from incoperfn --- */


/* --- Imports from evalbase --- */
extern A68_VOID  MYQACTR_eval1(struct A68t95 *,struct A68t95 **);
/* --- End of imports from evalbase --- */


/* --- Imports from environment --- */
extern A68_VOID  WXIACTR_assert(A68_VC ,A68_BOOL );
extern A68_81  OWIACTR_perror;
extern A68_BOOL  AQIACTR_verboseoption;
/* --- End of imports from environment --- */


/* --- Imports from environ --- */
extern A68_INT  QSLACTR_locdecstream(A68_INT );
extern A68_INT  VRLACTR_currentlevel(void);
/* --- End of imports from environ --- */


/* --- Imports from coutput --- */
extern A68_VOID  MDMACTR_writecstream(struct A68t65 ,A68_INT );
/* --- End of imports from coutput --- */


/* --- Imports from centities --- */
extern A68_SINT  EIAACTR_cnewline;
extern A68_VOID  JIAACTR_bracket(A68_VC ,A68_VC *);
/* --- End of imports from centities --- */


/* --- Imports from usefulops --- */
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
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_179   MCTACTR = {"$Id: biops.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,NCTACTR,MCTACTR,55)
static A68_180   OCTACTR = {"BIOPS - "}; 
A_GISVEC(A68_VC ,PCTACTR,OCTACTR,8)
static A68_VC  QCTACTR_modulename A_UNUSED;
static A68_56   BDTACTR = {"union {"}; 
A_GISVEC(A68_VC ,CDTACTR,BDTACTR,7)
static A68_182   FDTACTR = {"  /* BIOP 99 */"}; 
A_GISVEC(A68_VC ,GDTACTR,FDTACTR,15)
static A68_183   JDTACTR = {""}; 
A_GISVEC(A68_VC ,KDTACTR,JDTACTR,0)
static A68_184   QDTACTR = {"  source;"}; 
A_GISVEC(A68_VC ,RDTACTR,QDTACTR,9)
static A68_185   XDTACTR = {"  destination;"}; 
A_GISVEC(A68_VC ,YDTACTR,XDTACTR,14)
static A68_186   CETACTR = {"} "}; 
A_GISVEC(A68_VC ,DETACTR,CETACTR,2)
static A68_186   HETACTR = {"; "}; 
A_GISVEC(A68_VC ,IETACTR,HETACTR,2)
static A68_188   PETACTR = {".source = "}; 
A_GISVEC(A68_VC ,QETACTR,PETACTR,10)
static A68_186   VETACTR = {" ;"}; 
A_GISVEC(A68_VC ,WETACTR,VETACTR,2)
static A68_190   AFTACTR = {".destination"}; 
A_GISVEC(A68_VC ,BFTACTR,AFTACTR,12)
static A68_192   XFTACTR = {".data"}; 
A_GISVEC(A68_VC ,BGTACTR,XFTACTR,5)
static A68_40   MGTACTR = {"BIOP"}; 
A_GISVEC(A68_VC ,NGTACTR,MGTACTR,4)
static A68_193   RGTACTR = {"A_M"}; 
static A68_194   KHTACTR = {"invalid generic biop"}; 
A_GISVEC(A68_VC ,LHTACTR,KHTACTR,20)
A_GISVEC(A68_VC ,NHTACTR,RGTACTR,3)

A68_VOID  SCTACTR_biop99(A68_95 * Root, A68_95  *ReturnedValue);

A_STATIC A68_VOID  HFTACTR_cast_biop(A68_95 * Root, A68_INT  Biop, A68_95  *ReturnedValue);

A_STATIC A68_VOID  RFTACTR_istruct_to_amode(A68_95 * Root, A68_INT  Biop, A68_95  *ReturnedValue);

A_STATIC A68_VOID  KGTACTR_generic_monadic_biop(A68_95 * Root, A68_INT  Biop, A68_95  *ReturnedValue);

A68_VOID  THTACTR_monadicbiopsemantics(A68_95 * Root, A68_INT  Biop, A68_95  *ReturnedValue);

A68_VOID  SCTACTR_biop99(A68_95 * Root, A68_95  *ReturnedValue)
{ 
A68_95 * TCTACTR_op A_UNUSED = {0};
A68_95  UCTACTR;  /* collateral clause result */
A68_VC  VCTACTR;  /* avoid structure result */
A68_96  WCTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  XCTACTR;  /* OPERATORS - istruct -> vector */
A68_56  YCTACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ZCTACTR_temp A_UNUSED = {0};
A68_187  ADTACTR;  /* collateral clause result */
A68_66  DDTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  EDTACTR;  /* YIELD */
A68_66  HDTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  IDTACTR;  /* YIELD */
A68_66  LDTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  MDTACTR;  /* YIELD */
A68_66  NDTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ODTACTR;  /* avoid structure result */
A68_66  PDTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  SDTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  TDTACTR;  /* YIELD */
A68_66  UDTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  VDTACTR;  /* avoid structure result */
A68_66  WDTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  ZDTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  AETACTR;  /* YIELD */
A68_66  BETACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  EETACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  FETACTR;  /* YIELD */
A68_66  GETACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  JETACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  KETACTR;  /* YIELD */
A68_66  LETACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  METACTR;  /* OPERATORS - istruct -> vector */
A68_189  NETACTR;  /* collateral clause result */
A68_167  OETACTR = {0};  /* OPERATORS - mode -> union mode */
A68_167  RETACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  SETACTR;  /* YIELD */
A68_VC  TETACTR;  /* avoid structure result */
A68_167  UETACTR = {0};  /* OPERATORS - mode -> union mode */
A68_167  XETACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  YETACTR;  /* YIELD */
A68_170  ZETACTR;  /* OPERATORS - istruct -> vector */
A68_VC  CFTACTR;  /* avoid structure result */
A68_96  DFTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_95  EFTACTR;  /* clause result */
A_PROC_ENTRY(biop99);
 /* line 49: */
 /* line 50: */
{ 
(void)(MYQACTR_eval1(Root, (&TCTACTR_op)));
 /* line 51: */
 /* line 52: */
UCTACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
 /* line 53: */
UCTACTR.Info = (A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(TCTACTR_op)->Info))))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 54: */
 /* line 55: */
 /* line 57: */
if ((*A_NILCHECK((&(A_NILCHECK(Root)->Mode))))==(*A_NILCHECK((&(A_NILCHECK(TCTACTR_op)->Mode)))))
{ 
 /* line 58: */
DAQACTR_getcfragment( TCTACTR_op, &VCTACTR );
UCTACTR.Extra = A_UNITE(WCTACTR,mode6,6,VCTACTR);
} 
else
{ 
YCTACTR = QIMACTR_newuniquename() ;
ZCTACTR_temp = A_HISVEC(XCTACTR,YCTACTR,7,A68_CHAR );
 /* line 59: */
 /* line 60: */
 /* line 61: */
EDTACTR = CDTACTR ;
ADTACTR.data[0] = A_UNITE(DDTACTR,mode2,2,EDTACTR);
if (AQIACTR_verboseoption)
{ 
IDTACTR = GDTACTR ;
ADTACTR.data[1] = A_UNITE(HDTACTR,mode2,2,IDTACTR);
} 
else
{ 
MDTACTR = KDTACTR ;
ADTACTR.data[1] = A_UNITE(LDTACTR,mode2,2,MDTACTR);
} 
 /* line 62: */
ADTACTR.data[2] = A_UNITE(NDTACTR,mode4,4,EIAACTR_cnewline);
XKNACTR_ctype( (*A_NILCHECK((&(A_NILCHECK(TCTACTR_op)->Mode)))), &ODTACTR );
ADTACTR.data[3] = A_UNITE(PDTACTR,mode2,2,ODTACTR);
TDTACTR = RDTACTR ;
ADTACTR.data[4] = A_UNITE(SDTACTR,mode2,2,TDTACTR);
 /* line 63: */
ADTACTR.data[5] = A_UNITE(UDTACTR,mode4,4,EIAACTR_cnewline);
XKNACTR_ctype( (*A_NILCHECK((&(A_NILCHECK(Root)->Mode)))), &VDTACTR );
ADTACTR.data[6] = A_UNITE(WDTACTR,mode2,2,VDTACTR);
AETACTR = YDTACTR ;
ADTACTR.data[7] = A_UNITE(ZDTACTR,mode2,2,AETACTR);
 /* line 64: */
ADTACTR.data[8] = A_UNITE(BETACTR,mode4,4,EIAACTR_cnewline);
FETACTR = DETACTR ;
ADTACTR.data[9] = A_UNITE(EETACTR,mode2,2,FETACTR);
ADTACTR.data[10] = A_UNITE(GETACTR,mode2,2,ZCTACTR_temp);
 /* line 65: */
KETACTR = IETACTR ;
ADTACTR.data[11] = A_UNITE(JETACTR,mode2,2,KETACTR);
ADTACTR.data[12] = A_UNITE(LETACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(METACTR,ADTACTR,13,A68_66 ), QSLACTR_locdecstream(VRLACTR_currentlevel())));
 /* line 66: */
NETACTR.data[0] = A_UNITE(OETACTR,mode2,2,ZCTACTR_temp);
SETACTR = QETACTR ;
NETACTR.data[1] = A_UNITE(RETACTR,mode2,2,SETACTR);
DAQACTR_getcfragment( TCTACTR_op, &TETACTR );
NETACTR.data[2] = A_UNITE(UETACTR,mode2,2,TETACTR);
YETACTR = WETACTR ;
NETACTR.data[3] = A_UNITE(XETACTR,mode2,2,YETACTR);
(void)(FPQACTR_emitline(A_HISVEC(ZETACTR,NETACTR,4,A68_167 )));
 /* line 67: */
 /* line 68: */
 /* line 69: */
 /* line 70: */
JIAACTR_bracket( A_VC_PLUS(ZCTACTR_temp,BFTACTR), &CFTACTR );
UCTACTR.Extra = A_UNITE(DFTACTR,mode6,6,CFTACTR);
} 
EFTACTR = UCTACTR;
} 
A_PROC_EXIT(biop99);
*ReturnedValue = (EFTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HFTACTR_cast_biop(A68_95 * Root, A68_INT  Biop, A68_95  *ReturnedValue)
{ 
A68_95 * IFTACTR_op A_UNUSED = {0};
A68_95  JFTACTR;  /* collateral clause result */
A68_VC  KFTACTR;  /* avoid structure result */
A68_VC  LFTACTR;  /* avoid structure result */
A68_96  MFTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  NFTACTR;  /* YIELD */
A68_95  OFTACTR;  /* clause result */
A_PROC_ENTRY(cast_biop);
 /* line 73: */
 /* line 74: */
{ 
(void)(MYQACTR_eval1(Root, (&IFTACTR_op)));
 /* line 75: */
 /* line 76: */
JFTACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
 /* line 77: */
JFTACTR.Info = (A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(IFTACTR_op)->Info))))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 78: */
 /* line 79: */
FLNACTR_cast( (*A_NILCHECK((&(A_NILCHECK(Root)->Mode)))), &KFTACTR );
JEQACTR_bracketcfragment( GQQACTR_yield(IFTACTR_op), &LFTACTR );
NFTACTR = A_VC_PLUS(KFTACTR,LFTACTR) ;
JFTACTR.Extra = A_UNITE(MFTACTR,mode6,6,NFTACTR);
OFTACTR = JFTACTR;
} 
A_PROC_EXIT(cast_biop);
*ReturnedValue = (OFTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  RFTACTR_istruct_to_amode(A68_95 * Root, A68_INT  Biop, A68_95  *ReturnedValue)
{ 
A68_95 * SFTACTR_op A_UNUSED = {0};
A68_INT  TFTACTR_opmode A_UNUSED = {0};
A68_BOOL  UFTACTR;  /* optbool result */
A68_BOOL  VFTACTR;  /* clause result */
A68_95  WFTACTR;  /* collateral clause result */
A68_VC  YFTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ZFTACTR;  /* avoid structure result */
A68_VC  AGTACTR;  /* avoid structure result */
A68_VC  CGTACTR;  /* avoid structure result */
A68_VC  DGTACTR;  /* avoid structure result */
A68_96  EGTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_95  FGTACTR;  /* clause result */
A68_VC  GGTACTR;  /* avoid structure result */
A68_82  HGTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(istruct_to_amode);
 /* line 82: */
 /* line 83: */
{ 
(void)(MYQACTR_eval1(Root, (&SFTACTR_op)));
 /* line 84: */
TFTACTR_opmode = (*A_NILCHECK((&(A_NILCHECK(SFTACTR_op)->Mode))));
 /* line 85: */
UFTACTR = (TFTACTR_opmode<VFAACTR_refmark);
if ( UFTACTR )
{ /* line 86: */
UFTACTR = XRMACTR_isistruct(TFTACTR_opmode);
}
 /* line 87: */
VFTACTR = UFTACTR;
if (VFTACTR)
{ 
 /* line 88: */
WFTACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
 /* line 89: */
WFTACTR.Info = (A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(SFTACTR_op)->Info))))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 90: */
 /* line 91: */
 /* line 92: */
FLNACTR_cast( ((*A_NILCHECK((&(A_NILCHECK(Root)->Mode))))+VFAACTR_refmark), &ZFTACTR );
DAQACTR_getcfragment( GQQACTR_yield(SFTACTR_op), &AGTACTR );
JIAACTR_bracket( A_VC_PLUS(AGTACTR,BGTACTR), &CGTACTR );
JIAACTR_bracket( A_VC_PLUS(A_VC_PLUS(A_HVEC(YFTACTR,'*',A68_CHAR ),ZFTACTR),CGTACTR), &DGTACTR );
WFTACTR.Extra = A_UNITE(EGTACTR,mode6,6,DGTACTR);
FGTACTR = WFTACTR;
} 
else
{ 
ROAAOSF_whole( Biop, 0, &GGTACTR );
(void)(A_CALLPROC(OWIACTR_perror,(214, A_HARR(HGTACTR,GGTACTR,A68_VC )),(214, A_HARR(HGTACTR,GGTACTR,A68_VC ),(OWIACTR_perror).nonlocals)));
 /* line 93: */
 /* line 94: */
FGTACTR = DLJACTR_skipvalue;
} 
} 
A_PROC_EXIT(istruct_to_amode);
*ReturnedValue = (FGTACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  KGTACTR_generic_monadic_biop(A68_95 * Root, A68_INT  Biop, A68_95  *ReturnedValue)
{ 
A68_95 * LGTACTR_op A_UNUSED = {0};
A68_VC  OGTACTR;  /* avoid structure result */
A68_VC  PGTACTR_biopstr A_UNUSED = {0};
A68_95  QGTACTR;  /* collateral clause result */
A68_170  SGTACTR;  /* clause result */
A68_167  TGTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_95 * UGTACTR;  /* YIELD */
A68_170  VGTACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_195  WGTACTR;  /* collateral clause result */
A68_167  XGTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_95 * YGTACTR;  /* YIELD */
A68_99  ZGTACTR;  /* avoid structure result */
A68_167  AHTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_170  BHTACTR;  /* OPERATORS - istruct -> vector */
A68_196  CHTACTR;  /* collateral clause result */
A68_167  DHTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_95 * EHTACTR;  /* YIELD */
A68_99  FHTACTR;  /* avoid structure result */
A68_167  GHTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_99  HHTACTR;  /* avoid structure result */
A68_167  IHTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_170  JHTACTR;  /* OPERATORS - istruct -> vector */
A68_170  MHTACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  OHTACTR;  /* avoid structure result */
A68_96  PHTACTR = {0};  /* OPERATORS - mode -> union mode */
A68_95  QHTACTR;  /* clause result */
A_PROC_ENTRY(generic_monadic_biop);
 /* line 109: */
 /* line 110: */
{ 
(void)(MYQACTR_eval1(Root, (&LGTACTR_op)));
 /* line 111: */
ROAAOSF_whole( Biop, 0, &OGTACTR );
PGTACTR_biopstr = A_VC_PLUS(NGTACTR,OGTACTR);
 /* line 112: */
 /* line 113: */
QGTACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
 /* line 114: */
QGTACTR.Info = (A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(LGTACTR_op)->Info))))&XKJACTR_fxwarn)|RKJACTR_atomic);
 /* line 115: */
 /* line 116: */
 /* line 118: */
switch ( (Biop/1000) )
{ 
case 1: 
 /* line 120: */
UGTACTR = GQQACTR_yield(LGTACTR_op) ;
SGTACTR = A_HVEC(VGTACTR,A_UNITE(TGTACTR,mode1,1,UGTACTR),A68_167 );
break;
case 2: 
YGTACTR = GQQACTR_yield(LGTACTR_op) ;
WGTACTR.data[0] = A_UNITE(XGTACTR,mode1,1,YGTACTR);
 /* line 122: */
A_CALLPROC(TMOACTR_new,((*A_NILCHECK((&(A_NILCHECK(Root)->Mode)))), PGTACTR_biopstr, &ZGTACTR),((*A_NILCHECK((&(A_NILCHECK(Root)->Mode)))), PGTACTR_biopstr, &ZGTACTR,(TMOACTR_new).nonlocals));
WGTACTR.data[1] = A_UNITE(AHTACTR,mode3,3,ZGTACTR);
SGTACTR = A_HISVEC(BHTACTR,WGTACTR,2,A68_167 );
break;
case 3: 
EHTACTR = GQQACTR_yield(LGTACTR_op) ;
CHTACTR.data[0] = A_UNITE(DHTACTR,mode1,1,EHTACTR);
A_CALLPROC(TMOACTR_new,((*A_NILCHECK((&(A_NILCHECK(Root)->Mode)))), PGTACTR_biopstr, &FHTACTR),((*A_NILCHECK((&(A_NILCHECK(Root)->Mode)))), PGTACTR_biopstr, &FHTACTR,(TMOACTR_new).nonlocals));
CHTACTR.data[1] = A_UNITE(GHTACTR,mode3,3,FHTACTR);
 /* line 123: */
 /* line 124: */
A_CALLPROC(TMOACTR_new,((*A_NILCHECK((&(A_NILCHECK(LGTACTR_op)->Mode)))), PGTACTR_biopstr, &HHTACTR),((*A_NILCHECK((&(A_NILCHECK(LGTACTR_op)->Mode)))), PGTACTR_biopstr, &HHTACTR,(TMOACTR_new).nonlocals));
CHTACTR.data[2] = A_UNITE(IHTACTR,mode3,3,HHTACTR);
SGTACTR = A_HISVEC(JHTACTR,CHTACTR,3,A68_167 );
break;
default: 
(void)(WXIACTR_assert(LHTACTR, A68_FALSE));
 /* line 125: */
 /* line 126: */
SGTACTR = MHTACTR;
break;
} 
 /* line 127: */
 /* line 128: */
APQACTR_usemacro( A_VC_PLUS(NHTACTR,PGTACTR_biopstr), SGTACTR, &OHTACTR );
QGTACTR.Extra = A_UNITE(PHTACTR,mode6,6,OHTACTR);
QHTACTR = QGTACTR;
} 
A_PROC_EXIT(generic_monadic_biop);
*ReturnedValue = (QHTACTR);
return;
} 
#undef NL

A68_VOID  THTACTR_monadicbiopsemantics(A68_95 * Root, A68_INT  Biop, A68_95  *ReturnedValue)
{ 
A68_95  UHTACTR;  /* clause result */
A68_95  VHTACTR;  /* avoid structure result */
A68_95  WHTACTR;  /* avoid structure result */
A68_BOOL  XHTACTR;  /* optbool result */
A68_95  YHTACTR;  /* avoid structure result */
A68_VC  ZHTACTR;  /* avoid structure result */
A68_82  AITACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(monadicbiopsemantics);
 /* line 131: */
 /* line 132: */
 /* line 133: */
 /* line 134: */
if (Biop==9999)
{ 
 /* line 135: */
 /* line 136: */
HFTACTR_cast_biop( Root, Biop, &VHTACTR );
UHTACTR = VHTACTR;
} 
else
{ 
 /* line 137: */
 /* line 138: */
if (Biop==5001)
{ 
 /* line 139: */
 /* line 140: */
RFTACTR_istruct_to_amode( Root, Biop, &WHTACTR );
UHTACTR = WHTACTR;
} 
else
{ 
XHTACTR = (Biop>1000);
if ( XHTACTR )
{ /* line 141: */
XHTACTR = (Biop<4000);
}
 /* line 142: */
if (XHTACTR)
{ 
 /* line 143: */
 /* line 144: */
KGTACTR_generic_monadic_biop( Root, Biop, &YHTACTR );
UHTACTR = YHTACTR;
} 
else
{ 
ROAAOSF_whole( Biop, 0, &ZHTACTR );
(void)(A_CALLPROC(OWIACTR_perror,(213, A_HARR(AITACTR,ZHTACTR,A68_VC )),(213, A_HARR(AITACTR,ZHTACTR,A68_VC ),(OWIACTR_perror).nonlocals)));
 /* line 145: */
 /* line 146: */
UHTACTR = DLJACTR_skipvalue;
} 
} 
} 
A_PROC_EXIT(monadicbiopsemantics);
*ReturnedValue = (UHTACTR);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 6: */
void JCTACTR(void)   /* initialise DECS biops */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel","-dir",".","biops.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/vak/Project/Algol/Algol-68RS-Source/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/vak/Project/Algol/Algol-68RS-Source/a68config/a68config.m","./values.m","./uniquenameserver.m","./modes.m","./incmode.m","./idtable.m","./incoperfn.m","./evalbase.m","./environment.m","./environ.m","./coutput.m","./centities.m","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config A_UNUSED;
/* --- end of configuration information */
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
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/biops.a68";
A_config.translation_time = "Thu Nov  5 21:56:13 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "ICTACTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 21:56:13 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS biops);
(void)(UEAALIB_a68config(LGAALIB_configinfo, NCTACTR));
 /* line 46: */
QCTACTR_modulename = PCTACTR;
 /* line 48: */
 /* line 72: */
 /* line 81: */
 /* line 96: */
 /* line 130: */
 /* line 148: */
 /* line 150: */
 /* line 152: */
/*SKIP*/;
A_PROC_EXIT(DECS biops);
} 
#undef NL
/* end of translation of biops.a68 */
