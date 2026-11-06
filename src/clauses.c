/* UNAME:BAZACTR */
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

A_PROCEDURE(A68_INT ,A68t54,(A68_INT ),(A68_INT ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t55,(A68_INT ),(A68_INT ,void *));
typedef struct A68t55  A68_55 ;    /* PROC(INT) BOOL */
struct A68t56{
A68_INT  Level;
A_PAD_INT(PAD_1)
A68_INT  Block;
A_PAD_INT(PAD_2)
};
typedef struct A68t56  A68_56 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t57,(struct A68t56 *),(struct A68t56 *,void *));
typedef struct A68t57  A68_57 ;    /* PROC MODE56 */

A_PROCEDURE(A68_INT ,A68t58,(void),(void *));
typedef struct A68t58  A68_58 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t59,(A68_INT ),(A68_INT ,void *));
typedef struct A68t59  A68_59 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t60,(void),(void *));
typedef struct A68t60  A68_60 ;    /* PROC VOID */

A_PROCEDURE(A68_BOOL ,A68t61,(void),(void *));
typedef struct A68t61  A68_61 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t62,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t62  A68_62 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t63,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t63  A68_63 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t64,(struct A68t56 ,struct A68t56 ),(struct A68t56 ,struct A68t56 ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(MODE56,MODE56) BOOL */

A_PROCEDURE(A68_BOOL ,A68t65,(struct A68t56 ),(struct A68t56 ,void *));
typedef struct A68t65  A68_65 ;    /* PROC(MODE56) BOOL */

A_PROCEDURE(A68_VOID ,A68t66,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t66  A68_66 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t67,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t67  A68_67 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t68,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t68  A68_68 ;    /* PROC(INT) REF MODE26 */
struct A68t70 ;

A_PROCEDURE(A68_VOID ,A68t69,(A68_INT ,struct A68t70 ),(A68_INT ,struct A68t70 ,void *));
typedef struct A68t69  A68_69 ;    /* PROC(INT,MODE70) VOID */
A_ROW(A68_VC ,A68t70,1);
typedef struct A68t70  A68_70 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t71,(void),(void *));
typedef struct A68t71  A68_71 ;    /* PROC BITS */
struct A68t72{
A68_INT  Cfile;
A_PAD_INT(PAD_3)
};
typedef struct A68t72  A68_72 ;    /* STRUCT(INT)  */
struct A68t73{
A68_INT  Seedfile;
A_PAD_INT(PAD_4)
};
typedef struct A68t73  A68_73 ;    /* STRUCT(INT)  */
A_ISTRUCT(A68_CHAR ,7,A68t75);
typedef struct A68t75  A68_75 ;    /* STRUCT 7 CHAR */
struct A68t74 { A68_INT mode; union {
struct A68t72  mode1;
struct A68t73  mode2;
struct A68t75  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t74  A68_74 ;    /* UNION(MODE72,MODE73,MODE75,VOID)  */

A_PROCEDURE(A68_VOID ,A68t76,(A68_VC ),(A68_VC ,void *));
typedef struct A68t76  A68_76 ;    /* PROC(MODE26) VOID */
A_ROW(A68_BOOL ,A68t77,1);
typedef struct A68t77  A68_77 ;    /* [] BOOL */
struct A68t78{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_5)
A68_VC  Sourcefile;
struct A68t75  Nameseed;
A_PAD_ISTRUCT(A68_75 ,PAD_6)
struct A68t74  Nameseedorigin;
struct A68t79 * Used_modules;
A68_VC  Commandline;
struct A68t80 * Environment;
};
typedef struct A68t78  A68_78 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE75,MODE74,REF MODE79,REF MODE26,REF MODE80)  */
struct A68t79{
A68_VC  Modinfo_file;
struct A68t79 * Next;
};
typedef struct A68t79  A68_79 ;    /* STRUCT(REF MODE26,REF MODE79)  */
struct A68t80{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t80 * Next;
};
typedef struct A68t80  A68_80 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE80)  */
struct A68t82 ;
struct A68t83 ;

A_PROCEDURE(struct A68t82 *,A68t81,(A68_VC ,struct A68t83 *,A68_VC *),(A68_VC ,struct A68t83 *,A68_VC *,void *));
typedef struct A68t81  A68_81 ;    /* PROC(MODE26,REF MODE83,REF REF MODE26) REF MODE82 */
struct A68t82{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t82  A68_82 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t83{
A68_VC  Dir;
struct A68t83 * Next;
};
typedef struct A68t83  A68_83 ;    /* STRUCT(REF MODE26,REF MODE83)  */

A_PROCEDURE(A68_VOID ,A68t84,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t84  A68_84 ;    /* PROC(BOOL) MODE26 */
struct A68t85{
struct A68t75  Name;
A_PAD_ISTRUCT(A68_75 ,PAD_7)
A68_BOOL  Set;
A_PAD_BOOL(PAD_8)
};
typedef struct A68t85  A68_85 ;    /* STRUCT(MODE75,BOOL)  */
struct A68t86{
A68_INT  Labno;
A_PAD_INT(PAD_9)
};
typedef struct A68t86  A68_86 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_VOID ,A68t87,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t87  A68_87 ;    /* PROC(MODE26) MODE26 */
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
struct A68t96{
A68_INT  Rdenno;
A_PAD_INT(PAD_10)
};
typedef struct A68t96  A68_96 ;    /* STRUCT(INT)  */
struct A68t97{
A68_INT  Idno;
A_PAD_INT(PAD_11)
};
typedef struct A68t97  A68_97 ;    /* STRUCT(INT)  */
struct A68t98{
struct A68t75  Name;
A_PAD_ISTRUCT(A68_75 ,PAD_12)
A68_INT  Mode;
A_PAD_INT(PAD_13)
};
typedef struct A68t98  A68_98 ;    /* STRUCT(MODE75,INT)  */
struct A68t99{
A68_INT  Nse;
A_PAD_INT(PAD_14)
};
typedef struct A68t99  A68_99 ;    /* STRUCT(INT)  */
struct A68t100{
A68_INT  Fn;
A_PAD_INT(PAD_15)
A68_INT  Param;
A_PAD_INT(PAD_16)
struct A68t101 * Operands;
};
typedef struct A68t100  A68_100 ;    /* STRUCT(INT,INT,REF MODE101)  */
struct A68t95 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t96  mode2;
struct A68t97  mode4;
struct A68t98  mode5;
A68_VC  mode6;
struct A68t86  mode7;
struct A68t99  mode8;
struct A68t100  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t95  A68_95 ;    /* UNION(LONG BITS,MODE96,VOID,MODE97,MODE98,MODE26,MODE86,MODE99,MODE100)  */
struct A68t94{
A68_INT  Mode;
A_PAD_INT(PAD_17)
A68_BITS  Info;
A_PAD_BITS(PAD_18)
struct A68t95  Extra;
};
typedef struct A68t94  A68_94 ;    /* STRUCT(INT,BITS,MODE95)  */
struct A68t101{
struct A68t94  Value;
struct A68t101 * Rest;
};
typedef struct A68t101  A68_101 ;    /* STRUCT(MODE94,REF MODE101)  */

A_PROCEDURE(A68_BOOL ,A68t102,(struct A68t94 *,struct A68t94 *),(struct A68t94 *,struct A68t94 *,void *));
typedef struct A68t102  A68_102 ;    /* PROC(REF MODE94,REF MODE94) BOOL */

A_PROCEDURE(A68_BOOL ,A68t103,(struct A68t94 *),(struct A68t94 *,void *));
typedef struct A68t103  A68_103 ;    /* PROC(REF MODE94) BOOL */

A_PROCEDURE(A68_BOOL ,A68t104,(struct A68t94 *,A68_LBITS ),(struct A68t94 *,A68_LBITS ,void *));
typedef struct A68t104  A68_104 ;    /* PROC(REF MODE94,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t105,(struct A68t94 *),(struct A68t94 *,void *));
typedef struct A68t105  A68_105 ;    /* PROC(REF MODE94) LONG BITS */

A_PROCEDURE(A68_VOID ,A68t106,(struct A68t94 *,A68_VC *),(struct A68t94 *,A68_VC *,void *));
typedef struct A68t106  A68_106 ;    /* PROC(REF MODE94) MODE26 */

A_PROCEDURE(struct A68t94 *,A68t107,(struct A68t94 *,A68_INT ),(struct A68t94 *,A68_INT ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(REF MODE94,INT) REF MODE94 */

A_PROCEDURE(A68_INT ,A68t108,(struct A68t100 ),(struct A68t100 ,void *));
typedef struct A68t108  A68_108 ;    /* PROC(MODE100) INT */
struct A68t109{
struct A68t94 * Value;
struct A68t85 * End;
A68_INT  Type;
A_PAD_INT(PAD_19)
};
typedef struct A68t109  A68_109 ;    /* STRUCT(REF MODE94,REF MODE85,INT)  */

A_PROCEDURE(A68_BOOL ,A68t110,(struct A68t94 *,A68_BITS ),(struct A68t94 *,A68_BITS ,void *));
typedef struct A68t110  A68_110 ;    /* PROC(REF MODE94,BITS) BOOL */

A_PROCEDURE(struct A68t94 *,A68t111,(struct A68t101 *,A68_INT ),(struct A68t101 *,A68_INT ,void *));
typedef struct A68t111  A68_111 ;    /* PROC(REF MODE101,INT) REF MODE94 */

A_PROCEDURE(struct A68t101 *,A68t112,(struct A68t101 *),(struct A68t101 *,void *));
typedef struct A68t112  A68_112 ;    /* PROC(REF MODE101) REF MODE101 */
struct A68t114 ;

A_PROCEDURE(struct A68t94 *,A68t113,(A68_INT ,A68_INT ,A68_BITS ,struct A68t114 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t114 ,void *));
typedef struct A68t113  A68_113 ;    /* PROC(INT,INT,BITS,MODE114) REF MODE94 */
A_VECTOR(struct A68t94 *,A68t114);
typedef struct A68t114  A68_114 ;    /* VECTOR [] REF MODE94 */

A_PROCEDURE(A68_VOID ,A68t115,(struct A68t94 *),(struct A68t94 *,void *));
typedef struct A68t115  A68_115 ;    /* PROC(REF MODE94) VOID */

A_PROCEDURE(A68_VOID ,A68t116,(struct A68t94 *,A68_BOOL ,A68_VC *),(struct A68t94 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t116  A68_116 ;    /* PROC(REF MODE94,BOOL) MODE26 */

A_PROCEDURE(A68_LINT ,A68t117,(struct A68t94 ),(struct A68t94 ,void *));
typedef struct A68t117  A68_117 ;    /* PROC(MODE94) LONG INT */
struct A68t118 { A68_INT mode; union {
struct A68t94 * mode1;
A68_VC  mode2;
struct A68t98  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t118  A68_118 ;    /* UNION(REF MODE94,MODE26,MODE98)  */

A_PROCEDURE(A68_VOID ,A68t119,(struct A68t118 ,A68_VC *),(struct A68t118 ,A68_VC *,void *));
typedef struct A68t119  A68_119 ;    /* PROC(MODE118) MODE26 */
struct A68t121 ;

A_PROCEDURE(A68_VOID ,A68t120,(struct A68t121 ,A68_VC *),(struct A68t121 ,A68_VC *,void *));
typedef struct A68t120  A68_120 ;    /* PROC(MODE121) MODE26 */
A_VECTOR(struct A68t118 ,A68t121);
typedef struct A68t121  A68_121 ;    /* VECTOR [] MODE118 */

A_PROCEDURE(A68_VOID ,A68t122,(A68_VC ,struct A68t121 ,A68_VC *),(A68_VC ,struct A68t121 ,A68_VC *,void *));
typedef struct A68t122  A68_122 ;    /* PROC(MODE26,MODE121) MODE26 */

A_PROCEDURE(A68_VOID ,A68t123,(struct A68t121 ),(struct A68t121 ,void *));
typedef struct A68t123  A68_123 ;    /* PROC(MODE121) VOID */

A_PROCEDURE(A68_VOID ,A68t124,(A68_VC ,A68_INT ,struct A68t121 ,struct A68t98 *),(A68_VC ,A68_INT ,struct A68t121 ,struct A68t98 *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(MODE26,INT,MODE121) MODE98 */

A_PROCEDURE(struct A68t94 *,A68t125,(struct A68t94 *),(struct A68t94 *,void *));
typedef struct A68t125  A68_125 ;    /* PROC(REF MODE94) REF MODE94 */

A_PROCEDURE(struct A68t94 *,A68t126,(A68_VC ,struct A68t94 *),(A68_VC ,struct A68t94 *,void *));
typedef struct A68t126  A68_126 ;    /* PROC(MODE26,REF MODE94) REF MODE94 */
struct A68t127{
A68_INT  Mode;
A_PAD_INT(PAD_20)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_21)
struct A68t56  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t75  Prefix;
A_PAD_ISTRUCT(A68_75 ,PAD_22)
A68_BITS  Flags;
A_PAD_BITS(PAD_23)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t127  A68_127 ;    /* STRUCT(INT,INT,MODE56,REF MODE26,REF MODE26,MODE75,BITS,REF MODE26,REF MODE26)  */
struct A68t128{
A68_INT  Mode;
A_PAD_INT(PAD_24)
A68_INT  Resultmode;
A_PAD_INT(PAD_25)
A68_INT  Declevel;
A_PAD_INT(PAD_26)
struct A68t56  Environ;
A68_VC  Name;
struct A68t75  Prefix;
A_PAD_ISTRUCT(A68_75 ,PAD_27)
struct A68t75  Fnprefix;
A_PAD_ISTRUCT(A68_75 ,PAD_28)
struct A68t75  Envprefix;
A_PAD_ISTRUCT(A68_75 ,PAD_29)
A68_BITS  Flags;
A_PAD_BITS(PAD_30)
};
typedef struct A68t128  A68_128 ;    /* STRUCT(INT,INT,INT,MODE56,REF MODE26,MODE75,MODE75,MODE75,BITS)  */
struct A68t129{
struct A68t85  Label;
struct A68t56  Environ;
A68_VC  Name;
struct A68t75  Prefix;
A_PAD_ISTRUCT(A68_75 ,PAD_31)
A68_BITS  Flags;
A_PAD_BITS(PAD_32)
A68_INT  Alias;
A_PAD_INT(PAD_33)
};
typedef struct A68t129  A68_129 ;    /* STRUCT(MODE85,MODE56,REF MODE26,MODE75,BITS,INT)  */

A_PROCEDURE(struct A68t127 *,A68t130,(A68_INT ),(A68_INT ,void *));
typedef struct A68t130  A68_130 ;    /* PROC(INT) REF MODE127 */

A_PROCEDURE(A68_VOID ,A68t131,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t131  A68_131 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t132,(A68_VC ,struct A68t75 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t75 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t132  A68_132 ;    /* PROC(REF MODE26,MODE75,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */
A_ROW(struct A68t127 ,A68t133,1);
typedef struct A68t133  A68_133 ;    /* [] MODE127 */
A_ROW(struct A68t128 ,A68t134,1);
typedef struct A68t134  A68_134 ;    /* [] MODE128 */
A_ROW(struct A68t129 ,A68t135,1);
typedef struct A68t135  A68_135 ;    /* [] MODE129 */
struct A68t137 ;

A_PROCEDURE(A68_VOID ,A68t136,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t137 ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t137 ,void *));
typedef struct A68t136  A68_136 ;    /* PROC(INT,INT,INT,INT,REF MODE137) VOID */
A_ROW(A68_INT ,A68t137,1);
typedef struct A68t137  A68_137 ;    /* [] INT */

A_PROCEDURE(A68_BOOL ,A68t138,(A68_VC ),(A68_VC ,void *));
typedef struct A68t138  A68_138 ;    /* PROC(MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t139,(A68_INT ,struct A68t56 *),(A68_INT ,struct A68t56 *,void *));
typedef struct A68t139  A68_139 ;    /* PROC(INT) MODE56 */

A_PROCEDURE(A68_BOOL ,A68t140,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t140  A68_140 ;    /* PROC(INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t141,(struct A68t94 *,A68_BOOL ),(struct A68t94 *,A68_BOOL ,void *));
typedef struct A68t141  A68_141 ;    /* PROC(REF MODE94,BOOL) VOID */
struct A68t143 ;

A_PROCEDURE(A68_VOID ,A68t142,(struct A68t143 ,struct A68t94 *,A68_BOOL ),(struct A68t143 ,struct A68t94 *,A68_BOOL ,void *));
typedef struct A68t142  A68_142 ;    /* PROC(MODE143,REF MODE94,BOOL) VOID */
struct A68t144{
A68_VC  Representation;
};
typedef struct A68t144  A68_144 ;    /* STRUCT(REF MODE26)  */
struct A68t145{
A68_INT  Mode;
A_PAD_INT(PAD_34)
A68_VC  Nu;
};
typedef struct A68t145  A68_145 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t146{
A68_INT  Mode;
A_PAD_INT(PAD_35)
A68_VC  String;
};
typedef struct A68t146  A68_146 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t147{
A68_INT  Mode;
A_PAD_INT(PAD_36)
A68_LBITS  Denotation;
A_PAD_LBITS(PAD_37)
};
typedef struct A68t147  A68_147 ;    /* STRUCT(INT,LONG BITS)  */
struct A68t148{
A68_INT  Mode;
A_PAD_INT(PAD_38)
A68_VC  Denotation;
};
typedef struct A68t148  A68_148 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t149{
A68_INT  Fn;
A_PAD_INT(PAD_39)
A68_INT  Mode;
A_PAD_INT(PAD_40)
A68_INT  Param;
A_PAD_INT(PAD_41)
};
typedef struct A68t149  A68_149 ;    /* STRUCT(INT,INT,INT)  */
struct A68t150{
A68_INT  Type;
A_PAD_INT(PAD_42)
A68_VC  Name;
A68_INT  Mode;
A_PAD_INT(PAD_43)
A68_INT  Decno;
A_PAD_INT(PAD_44)
};
typedef struct A68t150  A68_150 ;    /* STRUCT(INT,REF MODE26,INT,INT)  */
struct A68t151{
A68_VC  Name;
A68_BITS  Props;
A_PAD_BITS(PAD_45)
A68_INT  Mode;
A_PAD_INT(PAD_46)
A68_INT  Rdenno;
A_PAD_INT(PAD_47)
A68_INT  Maxname;
A_PAD_INT(PAD_48)
};
typedef struct A68t151  A68_151 ;    /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
struct A68t152{
A68_INT  W;
A_PAD_INT(PAD_49)
};
typedef struct A68t152  A68_152 ;    /* STRUCT(INT)  */
struct A68t153{
A68_VC  Name;
A68_INT  Labno;
A_PAD_INT(PAD_50)
A68_INT  Status;
A_PAD_INT(PAD_51)
A68_BOOL  Notsetting;
A_PAD_BOOL(PAD_52)
};
typedef struct A68t153  A68_153 ;    /* STRUCT(REF MODE26,INT,INT,BOOL)  */
struct A68t154{
A68_INT  Mode;
A_PAD_INT(PAD_53)
A68_BITS  Props;
A_PAD_BITS(PAD_54)
A68_INT  Param;
A_PAD_INT(PAD_55)
};
typedef struct A68t154  A68_154 ;    /* STRUCT(INT,BITS,INT)  */
struct A68t155{
A68_INT  I;
A_PAD_INT(PAD_56)
};
typedef struct A68t155  A68_155 ;    /* STRUCT(INT)  */
struct A68t156{
A68_BOOL  Start;
A_PAD_BOOL(PAD_57)
};
typedef struct A68t156  A68_156 ;    /* STRUCT(BOOL)  */
struct A68t166{
A68_INT  Nochars;
A_PAD_INT(PAD_58)
A68_INT  Nocases;
A_PAD_INT(PAD_59)
A68_INT  W;
A_PAD_INT(PAD_60)
};
typedef struct A68t166  A68_166 ;    /* STRUCT(INT,INT,INT)  */
struct A68t157{
struct A68t166  Info;
A68_VC  Text;
};
typedef struct A68t157  A68_157 ;    /* STRUCT(MODE166,REF MODE26)  */
struct A68t158{
A68_INT  Mode;
A_PAD_INT(PAD_61)
A68_INT  Number;
A_PAD_INT(PAD_62)
A68_VC  Insert;
};
typedef struct A68t158  A68_158 ;    /* STRUCT(INT,INT,REF MODE26)  */
struct A68t159{
A68_INT  Fn;
A_PAD_INT(PAD_63)
A68_INT  Mode;
A_PAD_INT(PAD_64)
A68_BITS  Props;
A_PAD_BITS(PAD_65)
A68_INT  Param;
A_PAD_INT(PAD_66)
};
typedef struct A68t159  A68_159 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t160{
A68_INT  Fn;
A_PAD_INT(PAD_67)
A68_INT  Mode;
A_PAD_INT(PAD_68)
A68_BITS  Props;
A_PAD_BITS(PAD_69)
A68_INT  Resultmode;
A_PAD_INT(PAD_70)
};
typedef struct A68t160  A68_160 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t161{
A68_INT  Fn;
A_PAD_INT(PAD_71)
A68_BITS  Props;
A_PAD_BITS(PAD_72)
};
typedef struct A68t161  A68_161 ;    /* STRUCT(INT,BITS)  */
struct A68t162{
A68_INT  Body;
A_PAD_INT(PAD_73)
A68_INT  Moduleno;
A_PAD_INT(PAD_74)
struct A68t137  Actuals;
};
typedef struct A68t162  A68_162 ;    /* STRUCT(INT,INT,REF MODE137)  */
struct A68t163{
A68_INT  Moduleno;
A_PAD_INT(PAD_75)
A68_INT  I;
A_PAD_INT(PAD_76)
A68_INT  J;
A_PAD_INT(PAD_77)
};
typedef struct A68t163  A68_163 ;    /* STRUCT(INT,INT,INT)  */
A_ROW(A68_VC ,A68t165,1);
typedef struct A68t165  A68_165 ;    /* [] REF MODE26 */
struct A68t164{
A68_INT  Moduleno;
A_PAD_INT(PAD_78)
A68_VC  Name;
A68_VC  Uname;
A68_VC  Lname;
A68_VC  Gname;
struct A68t165  Ysnames;
};
typedef struct A68t164  A68_164 ;    /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE165)  */
struct A68t143 { A68_INT mode; union {
struct A68t99  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t144  mode4;
struct A68t86  mode5;
struct A68t145  mode6;
struct A68t146  mode7;
struct A68t147  mode8;
struct A68t148  mode9;
struct A68t149  mode10;
struct A68t150  mode11;
struct A68t151  mode12;
struct A68t152  mode13;
struct A68t153  mode14;
struct A68t154  mode15;
struct A68t155  mode16;
struct A68t156  mode17;
struct A68t157  mode18;
struct A68t158  mode19;
struct A68t159  mode20;
struct A68t160  mode21;
struct A68t161  mode22;
struct A68t162  mode23;
struct A68t163  mode24;
struct A68t164  mode25;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t143  A68_143 ;    /* UNION(MODE99,INT,BOOL,MODE144,MODE86,MODE145,MODE146,MODE147,MODE148,MODE149,MODE150,MODE151,MODE152,MODE153,MODE154,MODE155,MODE156,MODE157,MODE158,MODE159,MODE160,MODE161,MODE162,MODE163,MODE164,VOID)  */

A_PROCEDURE(A68_VOID ,A68t167,(struct A68t101 **),(struct A68t101 **,void *));
typedef struct A68t167  A68_167 ;    /* PROC(REF REF MODE101) VOID */
struct A68t168{
A68_INT  Parameters;
A_PAD_INT(PAD_79)
A68_INT  Result;
A_PAD_INT(PAD_80)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_81)
};
typedef struct A68t168  A68_168 ;    /* STRUCT(INT,INT,BOOL)  */
A_ISTRUCT(A68_CHAR ,32,A68t170);
typedef struct A68t170  A68_170 ;    /* STRUCT 32 CHAR */
struct A68t169{
A68_INT  Mode;
A_PAD_INT(PAD_82)
A68_INT  Offset;
A_PAD_INT(PAD_83)
struct A68t170  Name;
A_PAD_ISTRUCT(A68_170 ,PAD_84)
};
typedef struct A68t169  A68_169 ;    /* STRUCT(INT,INT,MODE170)  */
struct A68t172 ;

A_PROCEDURE(A68_VOID ,A68t171,(A68_INT ,struct A68t172 *),(A68_INT ,struct A68t172 *,void *));
typedef struct A68t171  A68_171 ;    /* PROC(INT) REF MODE172 */
A_VECTOR(A68_INT ,A68t172);
typedef struct A68t172  A68_172 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t173,(struct A68t169 *,A68_VC *),(struct A68t169 *,A68_VC *,void *));
typedef struct A68t173  A68_173 ;    /* PROC(REF MODE169) MODE26 */

A_PROCEDURE(A68_VOID ,A68t174,(A68_INT ,A68_VC ,struct A68t98 *),(A68_INT ,A68_VC ,struct A68t98 *,void *));
typedef struct A68t174  A68_174 ;    /* PROC(INT,MODE26) MODE98 */
struct A68t176 ;

A_PROCEDURE(A68_VOID ,A68t175,(struct A68t176 ,A68_INT ),(struct A68t176 ,A68_INT ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(REF MODE176,INT) VOID */
A_ROW(struct A68t177 ,A68t176,1);
typedef struct A68t176  A68_176 ;    /* [] MODE177 */
struct A68t187{
A68_INT  Mode;
A_PAD_INT(PAD_85)
};
typedef struct A68t187  A68_187 ;    /* STRUCT(INT)  */
struct A68t177 { A68_INT mode; union {
A68_INT  mode1;
struct A68t178 * mode2;
struct A68t179 * mode3;
struct A68t180 * mode4;
struct A68t181 * mode5;
struct A68t182 * mode6;
struct A68t183 * mode7;
struct A68t184 * mode8;
struct A68t185 * mode9;
struct A68t186 * mode10;
struct A68t187  mode11;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t177  A68_177 ;    /* UNION(INT,REF MODE178,REF MODE179,REF MODE180,REF MODE181,REF MODE182,REF MODE183,REF MODE184,REF MODE185,REF MODE186,MODE187)  */
struct A68t178{
A68_INT  Rdenno;
A_PAD_INT(PAD_86)
struct A68t191 * Modelist;
};
typedef struct A68t178  A68_178 ;    /* STRUCT(INT,REF MODE191)  */
struct A68t179{
A68_INT  Deproc;
A_PAD_INT(PAD_87)
struct A68t191 * Pars;
};
typedef struct A68t179  A68_179 ;    /* STRUCT(INT,REF MODE191)  */
struct A68t180{
A68_INT  Rdenno;
A_PAD_INT(PAD_88)
A68_INT  Deflex;
A_PAD_INT(PAD_89)
struct A68t190 * Sels;
};
typedef struct A68t180  A68_180 ;    /* STRUCT(INT,INT,REF MODE190)  */
struct A68t181{
A68_INT  Rdenno;
A_PAD_INT(PAD_90)
A68_INT  Imode;
A_PAD_INT(PAD_91)
A68_INT  Length;
A_PAD_INT(PAD_92)
A68_INT  Deflex;
A_PAD_INT(PAD_93)
};
typedef struct A68t181  A68_181 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t182{
A68_INT  Deproc;
A_PAD_INT(PAD_94)
};
typedef struct A68t182  A68_182 ;    /* STRUCT(INT)  */
struct A68t183{
A68_INT  Rdenno;
A_PAD_INT(PAD_95)
A68_INT  Vecmode;
A_PAD_INT(PAD_96)
A68_INT  Deflex;
A_PAD_INT(PAD_97)
};
typedef struct A68t183  A68_183 ;    /* STRUCT(INT,INT,INT)  */
struct A68t184{
A68_INT  Rdenno;
A_PAD_INT(PAD_98)
A68_INT  Mode;
A_PAD_INT(PAD_99)
A68_INT  Nods;
A_PAD_INT(PAD_100)
A68_INT  Deflex;
A_PAD_INT(PAD_101)
};
typedef struct A68t184  A68_184 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t185{
A68_INT  Mode;
A_PAD_INT(PAD_102)
struct A68t189 * Stenlist;
};
typedef struct A68t185  A68_185 ;    /* STRUCT(INT,REF MODE189)  */
struct A68t186{
A68_INT  Mode;
A_PAD_INT(PAD_103)
A68_INT  Modeproc;
A_PAD_INT(PAD_104)
struct A68t188 * El;
};
typedef struct A68t186  A68_186 ;    /* STRUCT(INT,INT,REF MODE188)  */
struct A68t188{
struct A68t186 * Am;
struct A68t188 * Rest;
};
typedef struct A68t188  A68_188 ;    /* STRUCT(REF MODE186,REF MODE188)  */
struct A68t189{
A68_INT  Mode;
A_PAD_INT(PAD_105)
A68_INT  Rdenno;
A_PAD_INT(PAD_106)
struct A68t189 * Rest;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(INT,INT,REF MODE189)  */
struct A68t190{
A68_INT  Mode;
A_PAD_INT(PAD_107)
A68_INT  Fieldno;
A_PAD_INT(PAD_108)
struct A68t170  Name;
A_PAD_ISTRUCT(A68_170 ,PAD_109)
struct A68t190 * Rest;
};
typedef struct A68t190  A68_190 ;    /* STRUCT(INT,INT,MODE170,REF MODE190)  */
struct A68t191{
A68_INT  Mode;
A_PAD_INT(PAD_110)
struct A68t191 * Rest;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(INT,REF MODE191)  */

A_PROCEDURE(A68_VOID ,A68t192,(A68_INT ,struct A68t168 *),(A68_INT ,struct A68t168 *,void *));
typedef struct A68t192  A68_192 ;    /* PROC(INT) MODE168 */
struct A68t194 ;

A_PROCEDURE(A68_VOID ,A68t193,(A68_INT ,struct A68t194 *),(A68_INT ,struct A68t194 *,void *));
typedef struct A68t193  A68_193 ;    /* PROC(INT) REF MODE194 */
A_VECTOR(struct A68t169 ,A68t194);
typedef struct A68t194  A68_194 ;    /* VECTOR [] MODE169 */

A_PROCEDURE(A68_INT ,A68t195,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t195  A68_195 ;    /* PROC(INT,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t196,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t196  A68_196 ;    /* PROC(INT,INT) MODE26 */

A_PROCEDURE(A68_INT ,A68t197,(struct A68t172 ,struct A68t172 ),(struct A68t172 ,struct A68t172 ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(REF MODE172,REF MODE172) INT */

A_PROCEDURE(A68_VOID ,A68t198,(A68_INT ,struct A68t172 ,struct A68t137 *),(A68_INT ,struct A68t172 ,struct A68t137 *,void *));
typedef struct A68t198  A68_198 ;    /* PROC(INT,REF MODE172) MODE137 */

A_PROCEDURE(A68_VOID ,A68t199,(struct A68t172 ,struct A68t172 ,A68_VC *),(struct A68t172 ,struct A68t172 ,A68_VC *,void *));
typedef struct A68t199  A68_199 ;    /* PROC(REF MODE172,REF MODE172) REF MODE26 */
struct A68t200 { A68_INT mode; union {
struct A68t162  mode1;
struct A68t163  mode2;
struct A68t164  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t200  A68_200 ;    /* UNION(MODE162,MODE163,MODE164)  */
struct A68t201 { A68_INT mode; union {
struct A68t99  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t144  mode4;
struct A68t86  mode5;
struct A68t145  mode6;
struct A68t146  mode7;
struct A68t147  mode8;
struct A68t148  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t201  A68_201 ;    /* UNION(MODE99,INT,BOOL,MODE144,MODE86,MODE145,MODE146,MODE147,MODE148)  */
struct A68t202 { A68_INT mode; union {
struct A68t99  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t144  mode4;
struct A68t86  mode5;
struct A68t145  mode6;
struct A68t146  mode7;
struct A68t147  mode8;
struct A68t148  mode9;
struct A68t149  mode10;
struct A68t150  mode11;
struct A68t151  mode12;
struct A68t152  mode13;
struct A68t153  mode14;
struct A68t154  mode15;
struct A68t155  mode16;
struct A68t156  mode17;
struct A68t157  mode18;
struct A68t158  mode19;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t202  A68_202 ;    /* UNION(MODE99,INT,BOOL,MODE144,MODE86,MODE145,MODE146,MODE147,MODE148,MODE149,MODE150,MODE151,MODE152,MODE153,MODE154,MODE155,MODE156,MODE157,MODE158)  */

A_PROCEDURE(A68_VOID ,A68t203,(struct A68t60 ),(struct A68t60 ,void *));
typedef struct A68t203  A68_203 ;    /* PROC(MODE60) VOID */

A_PROCEDURE(A68_VOID ,A68t204,(struct A68t76 ),(struct A68t76 ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(MODE76) VOID */

A_PROCEDURE(A68_VOID ,A68t205,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t205  A68_205 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,57,A68t206);
typedef struct A68t206  A68_206 ;    /* STRUCT 57 CHAR */
struct A68t207{
A68_BOOL  Block;
A_PAD_BOOL(PAD_111)
A68_BOOL  Dynamicresult;
A_PAD_BOOL(PAD_112)
A68_BOOL  Discardeddynamicresult;
A_PAD_BOOL(PAD_113)
A68_INT  Type;
A_PAD_INT(PAD_114)
};
typedef struct A68t207  A68_207 ;    /* STRUCT(BOOL,BOOL,BOOL,INT)  */

A_PROCEDURE(A68_VOID ,A68t208,(struct A68t207 ,struct A68t85 **,A68_BOOL *),(struct A68t207 ,struct A68t85 **,A68_BOOL *,void *));
typedef struct A68t208  A68_208 ;    /* PROC(MODE207,REF REF MODE85,REF BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t209,(struct A68t207 ,struct A68t85 *,struct A68t85 *,A68_BOOL ,A68_BOOL ),(struct A68t207 ,struct A68t85 *,struct A68t85 *,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t209  A68_209 ;    /* PROC(MODE207,REF MODE85,REF MODE85,BOOL,BOOL) VOID */
A_ISTRUCT(A68_CHAR ,42,A68t210);
typedef struct A68t210  A68_210 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t211);
typedef struct A68t211  A68_211 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(struct A68t93 ,3,A68t212);
typedef struct A68t212  A68_212 ;    /* STRUCT 3 MODE93 */

A_PROCEDURE(A68_VOID ,A68t213,(struct A68t101 **,struct A68t109 ),(struct A68t101 **,struct A68t109 ,void *));
typedef struct A68t213  A68_213 ;    /* PROC(REF REF MODE101,MODE109) VOID */
A_ISTRUCT(A68_CHAR ,13,A68t214);
typedef struct A68t214  A68_214 ;    /* STRUCT 13 CHAR */

A_PROCEDURE(struct A68t95 *,A68t215,(struct A68t95 *,struct A68t95 ),(struct A68t95 *,struct A68t95 ,void *));
typedef struct A68t215  A68_215 ;    /* PROC(REF MODE95,MODE95) REF MODE95 */
#define A68_216  A68_VC 
#define A68t216 A68t26            /* FLEX VECTOR [] CHAR */
A_ISTRUCT(A68_CHAR ,40,A68t217);
typedef struct A68t217  A68_217 ;    /* STRUCT 40 CHAR */
A_ISTRUCT(A68_CHAR ,56,A68t218);
typedef struct A68t218  A68_218 ;    /* STRUCT 56 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t219);
typedef struct A68t219  A68_219 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t220);
typedef struct A68t220  A68_220 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(struct A68t93 ,4,A68t221);
typedef struct A68t221  A68_221 ;    /* STRUCT 4 MODE93 */
A_ISTRUCT(A68_CHAR ,64,A68t222);
typedef struct A68t222  A68_222 ;    /* STRUCT 64 CHAR */

A_PROCEDURE(A68_VOID ,A68t223,(A68_BOOL ,A68_BOOL ),(A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(BOOL,BOOL) VOID */
A_ISTRUCT(struct A68t93 ,2,A68t224);
typedef struct A68t224  A68_224 ;    /* STRUCT 2 MODE93 */

A_PROCEDURE(A68_VOID ,A68t225,(A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t85 *),(A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t85 *,void *));
typedef struct A68t225  A68_225 ;    /* PROC(BOOL,BOOL,BOOL,REF MODE85) VOID */
A_ISTRUCT(A68_CHAR ,41,A68t226);
typedef struct A68t226  A68_226 ;    /* STRUCT 41 CHAR */

A_PROCEDURE(A68_VOID ,A68t227,(A68_INT ,A68_INT ,struct A68t77 ),(A68_INT ,A68_INT ,struct A68t77 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(INT,INT,REF MODE77) VOID */
A_ISTRUCT(A68_CHAR ,54,A68t228);
typedef struct A68t228  A68_228 ;    /* STRUCT 54 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t229);
typedef struct A68t229  A68_229 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(struct A68t93 ,5,A68t230);
typedef struct A68t230  A68_230 ;    /* STRUCT 5 MODE93 */

A_PROCEDURE(A68_VOID ,A68t231,(struct A68t154 ,struct A68t94 ,struct A68t77 ),(struct A68t154 ,struct A68t94 ,struct A68t77 ,void *));
typedef struct A68t231  A68_231 ;    /* PROC(MODE154,MODE94,REF MODE77) VOID */
A_ISTRUCT(A68_CHAR ,10,A68t232);
typedef struct A68t232  A68_232 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(struct A68t93 ,6,A68t233);
typedef struct A68t233  A68_233 ;    /* STRUCT 6 MODE93 */
A_ISTRUCT(A68_CHAR ,9,A68t234);
typedef struct A68t234  A68_234 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t235);
typedef struct A68t235  A68_235 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(struct A68t93 ,8,A68t236);
typedef struct A68t236  A68_236 ;    /* STRUCT 8 MODE93 */

A_PROCEDURE(A68_VOID ,A68t237,(struct A68t154 ,struct A68t94 *,struct A68t77 ),(struct A68t154 ,struct A68t94 *,struct A68t77 ,void *));
typedef struct A68t237  A68_237 ;    /* PROC(MODE154,REF MODE94,REF MODE77) VOID */
A_ISTRUCT(A68_CHAR ,35,A68t238);
typedef struct A68t238  A68_238 ;    /* STRUCT 35 CHAR */
A_ISTRUCT(struct A68t93 ,7,A68t239);
typedef struct A68t239  A68_239 ;    /* STRUCT 7 MODE93 */
A_ISTRUCT(A68_CHAR ,6,A68t240);
typedef struct A68t240  A68_240 ;    /* STRUCT 6 CHAR */

A_PROCEDURE(A68_VOID ,A68t241,(A68_BOOL ,struct A68t109 ),(A68_BOOL ,struct A68t109 ,void *));
typedef struct A68t241  A68_241 ;    /* PROC(BOOL,MODE109) VOID */
A_ISTRUCT(A68_CHAR ,12,A68t242);
typedef struct A68t242  A68_242 ;    /* STRUCT 12 CHAR */

A_PROCEDURE(A68_VOID ,A68t243,(A68_BOOL ,struct A68t94 *),(A68_BOOL ,struct A68t94 *,void *));
typedef struct A68t243  A68_243 ;    /* PROC(BOOL,REF MODE94) VOID */
A_ISTRUCT(A68_CHAR ,14,A68t244);
typedef struct A68t244  A68_244 ;    /* STRUCT 14 CHAR */

A_PROCEDURE(A68_VOID ,A68t245,(struct A68t207 ,struct A68t109 ,struct A68t85 *,A68_BOOL ,A68_BOOL ,A68_BOOL ),(struct A68t207 ,struct A68t109 ,struct A68t85 *,A68_BOOL ,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t245  A68_245 ;    /* PROC(MODE207,MODE109,REF MODE85,BOOL,BOOL,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t246,(A68_BOOL ,A68_BOOL ,struct A68t109 ),(A68_BOOL ,A68_BOOL ,struct A68t109 ,void *));
typedef struct A68t246  A68_246 ;    /* PROC(BOOL,BOOL,MODE109) VOID */

A_PROCEDURE(A68_VOID ,A68t247,(A68_VC ,A68_INT ,struct A68t101 *,struct A68t98 *),(A68_VC ,A68_INT ,struct A68t101 *,struct A68t98 *,void *));
typedef struct A68t247  A68_247 ;    /* PROC(MODE26,INT,REF MODE101) MODE98 */

A_PROCEDURE(A68_VOID ,A68t248,(struct A68t101 *),(struct A68t101 *,void *));
typedef struct A68t248  A68_248 ;    /* PROC(REF MODE101) VOID */
A_ISTRUCT(A68_CHAR ,20,A68t249);
typedef struct A68t249  A68_249 ;    /* STRUCT 20 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from incimperatives --- */
/* --- End of imports from incimperatives --- */


/* --- Imports from unionaids --- */
extern A68_VOID  IWQACTR_uniontouniontable(struct A68t172 ,struct A68t172 ,A68_VC *);
/* --- End of imports from unionaids --- */


/* --- Imports from modes --- */
extern A68_171  YVMACTR_constituents;
extern A68_VOID  LLOACTR_declarectemporary(A68_INT ,A68_VC ,A68_98 *);
extern A68_VOID  WCNACTR_modename(A68_INT ,A68_VC *);
extern A68_INT  HCNACTR_finddeflexmode(A68_INT );
/* --- End of imports from modes --- */


/* --- Imports from incmode --- */
#define WEAACTR_boolmode 7
#define UEAACTR_voidmode 5
/* --- End of imports from incmode --- */


/* --- Imports from evaluator --- */
extern A68_141  ZFVACTR_calltrace;
extern A68_115  NXQACTR_evaluate;
extern A68_VOID  ILVACTR_evaluatestack(struct A68t101 **);
/* --- End of imports from evaluator --- */


/* --- Imports from tracer --- */
/* --- End of imports from tracer --- */


/* --- Imports from moduletracer --- */
extern A68_INT  ZCHACTR_tracelevel(A68_VC );
/* --- End of imports from moduletracer --- */


/* --- Imports from idtable --- */
extern A68_VOID  LRKACTR_idname(A68_INT ,A68_VC *);
extern A68_VOID  UTKACTR_idfullname(A68_INT ,A68_VC *);
/* --- End of imports from idtable --- */


/* --- Imports from values --- */
extern A68_BOOL  QXPACTR_isskip(struct A68t94 *);
extern A68_BOOL  IXPACTR_istemp(struct A68t94 *);
extern A68_VOID  GZPACTR_getcfragment(struct A68t94 *,A68_VC *);
extern A68_101 * MKJACTR_nilvaluelist;
extern A68_94 * VPQACTR_yield(A68_VC ,struct A68t94 *);
/* --- End of imports from values --- */


/* --- Imports from coutput --- */
extern A68_VOID  MDMACTR_writecstream(struct A68t92 ,A68_INT );
/* --- End of imports from coutput --- */


/* --- Imports from centities --- */
extern A68_SINT  EIAACTR_cnewline;
extern A68_VOID  VJAACTR_curly(A68_VC ,A68_VC *);
/* --- End of imports from centities --- */


/* --- Imports from environment --- */
extern A68_VOID  WXIACTR_assert(A68_VC ,A68_BOOL );
extern A68_VOID  PXIACTR_error(A68_INT );
extern A68_VOID  NWIACTR_pmessage(A68_INT ,struct A68t70 );
extern A68_BOOL  EQIACTR_skipoption;
extern A68_BOOL  AQIACTR_verboseoption;
extern A68_VOID  JXIACTR_warning(A68_INT );
/* --- End of imports from environment --- */


/* --- Imports from environ --- */
extern A68_INT  NSLACTR_codestream(A68_INT );
extern A68_INT  VRLACTR_currentlevel(void);
/* --- End of imports from environ --- */


/* --- Imports from usefulops --- */
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void UAAACTR(void);   /* incimperatives */
extern void HUQACTR(void);   /* unionaids */
extern void DNMACTR(void);   /* modes */
extern void ZDAACTR(void);   /* incmode */
extern void LFVACTR(void);   /* evaluator */
extern void IVYACTR(void);   /* tracer */
extern void BCHACTR(void);   /* moduletracer */
extern void PPKACTR(void);   /* idtable */
extern void AUPACTR(void);   /* values */
extern void PTLACTR(void);   /* coutput */
extern void THAACTR(void);   /* centities */
extern void HPIACTR(void);   /* environment */
extern void BPLACTR(void);   /* environ */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_206   FAZACTR = {"$Id: clauses.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,GAZACTR,FAZACTR,57)
static A68_210   CBZACTR = {"evaluate no result: mode of value not void"}; 
A_GISVEC(A68_VC ,DBZACTR,CBZACTR,42)
static A68_211   FBZACTR = {""}; 
A_GISVEC(A68_VC ,GBZACTR,FBZACTR,0)
static A68_75   PBZACTR = {"clauses"}; 
A_GISVEC(A68_VC ,QBZACTR,PBZACTR,7)
static A68_214   YBZACTR = {"clause result"}; 
A_GISVEC(A68_VC ,HCZACTR,YBZACTR,13)
static A68_217   QCZACTR = {"evaluate result: unknown value OF answer"}; 
A_GISVEC(A68_VC ,RCZACTR,QCZACTR,40)
static A68_211   SCZACTR = {""}; 
A_GISVEC(A68_VC ,TCZACTR,SCZACTR,0)
static A68_218   WCZACTR = {"evaluate result: value of value stack has incorrect mode"}; 
A_GISVEC(A68_VC ,XCZACTR,WCZACTR,56)
static A68_219   YCZACTR = {"; "}; 
A_GISVEC(A68_VC ,ZCZACTR,YCZACTR,2)
static A68_220   FDZACTR = {" = "}; 
A_GISVEC(A68_VC ,GDZACTR,FDZACTR,3)
static A68_222   UDZACTR = {"evaluate simple enquiry: value of value stack has incorrect mode"}; 
A_GISVEC(A68_VC ,VDZACTR,UDZACTR,64)
static A68_219   CEZACTR = {"{ "}; 
A_GISVEC(A68_VC ,DEZACTR,CEZACTR,2)
static A68_226   OEZACTR = {"clauses: end: end of clause label not set"}; 
A_GISVEC(A68_VC ,PEZACTR,OEZACTR,41)
static A68_220   VEZACTR = {": ;"}; 
A_GISVEC(A68_VC ,WEZACTR,VEZACTR,3)
static A68_219   CFZACTR = {"} "}; 
A_GISVEC(A68_VC ,DFZACTR,CFZACTR,2)
static A68_228   QFZACTR = {"A_ERROR(\"Bad case conformity - two choices for mode\");"}; 
A_GISVEC(A68_VC ,RFZACTR,QFZACTR,54)
static A68_229   YFZACTR = {"case "}; 
A_GISVEC(A68_VC ,ZFZACTR,YFZACTR,5)
static A68_219   EGZACTR = {": "}; 
A_GISVEC(A68_VC ,FGZACTR,EGZACTR,2)
static A68_220   IGZACTR = {"/* "}; 
static A68_220   JGZACTR = {" */"}; 
A_GISVEC(A68_VC ,KGZACTR,IGZACTR,3)
A_GISVEC(A68_VC ,MGZACTR,JGZACTR,3)
static A68_211   PGZACTR = {""}; 
A_GISVEC(A68_VC ,QGZACTR,PGZACTR,0)
static A68_232   LHZACTR = {"A_ENQ_SKIP"}; 
A_GISVEC(A68_VC ,NHZACTR,LHZACTR,10)
static A68_229   RHZACTR = {"if ( "}; 
A_GISVEC(A68_VC ,SHZACTR,RHZACTR,5)
static A68_219   WHZACTR = {" )"}; 
A_GISVEC(A68_VC ,XHZACTR,WHZACTR,2)
static A68_219   BIZACTR = {"{ "}; 
A_GISVEC(A68_VC ,CIZACTR,BIZACTR,2)
static A68_219   JIZACTR = {"} "}; 
A_GISVEC(A68_VC ,KIZACTR,JIZACTR,2)
static A68_40   OIZACTR = {"else"}; 
A_GISVEC(A68_VC ,PIZACTR,OIZACTR,4)
static A68_219   TIZACTR = {"{ "}; 
A_GISVEC(A68_VC ,UIZACTR,TIZACTR,2)
static A68_232   BJZACTR = {"A_ENQ_SKIP"}; 
A_GISVEC(A68_VC ,DJZACTR,BJZACTR,10)
static A68_234   HJZACTR = {"switch ( "}; 
A_GISVEC(A68_VC ,IJZACTR,HJZACTR,9)
static A68_219   MJZACTR = {" )"}; 
A_GISVEC(A68_VC ,NJZACTR,MJZACTR,2)
static A68_219   RJZACTR = {"{ "}; 
A_GISVEC(A68_VC ,SJZACTR,RJZACTR,2)
static A68_235   WJZACTR = {"case 1: "}; 
A_GISVEC(A68_VC ,XJZACTR,WJZACTR,8)
static A68_238   GKZACTR = {"united object - for case conformity"}; 
A_GISVEC(A68_VC ,HKZACTR,GKZACTR,35)
static A68_234   MKZACTR = {"switch ( "}; 
A_GISVEC(A68_VC ,NKZACTR,MKZACTR,9)
static A68_229   RKZACTR = {".mode"}; 
A_GISVEC(A68_VC ,SKZACTR,RKZACTR,5)
static A68_219   VKZACTR = {" )"}; 
A_GISVEC(A68_VC ,WKZACTR,VKZACTR,2)
static A68_219   ALZACTR = {"{ "}; 
A_GISVEC(A68_VC ,BLZACTR,ALZACTR,2)
static A68_240   JLZACTR = {"break;"}; 
A_GISVEC(A68_VC ,KLZACTR,JLZACTR,6)
static A68_229   OLZACTR = {"case "}; 
A_GISVEC(A68_VC ,PLZACTR,OLZACTR,5)
static A68_219   ULZACTR = {": "}; 
A_GISVEC(A68_VC ,VLZACTR,ULZACTR,2)
static A68_240   GMZACTR = {"break;"}; 
A_GISVEC(A68_VC ,HMZACTR,GMZACTR,6)
static A68_240   PMZACTR = {"break;"}; 
A_GISVEC(A68_VC ,QMZACTR,PMZACTR,6)
static A68_234   UMZACTR = {"default: "}; 
A_GISVEC(A68_VC ,VMZACTR,UMZACTR,9)
A68_60  ANZACTR_outu;
static A68_242   HNZACTR = {"A_IMP_SKIP ;"}; 
A_GISVEC(A68_VC ,INZACTR,HNZACTR,12)
static A68_240   PNZACTR = {"break;"}; 
A_GISVEC(A68_VC ,QNZACTR,PNZACTR,6)
static A68_219   UNZACTR = {"} "}; 
A_GISVEC(A68_VC ,VNZACTR,UNZACTR,2)
A68_241  AOZACTR_esacu;
static A68_242   IOZACTR = {"A_IMP_SKIP ;"}; 
A_GISVEC(A68_VC ,JOZACTR,IOZACTR,12)
static A68_219   POZACTR = {"} "}; 
A_GISVEC(A68_VC ,QOZACTR,POZACTR,2)
static A68_244   BPZACTR = {"optbool result"}; 
A_GISVEC(A68_VC ,DPZACTR,BPZACTR,14)
static A68_220   KPZACTR = {" = "}; 
A_GISVEC(A68_VC ,LPZACTR,KPZACTR,3)
static A68_75   ZPZACTR = {"if ( ! "}; 
A_GISVEC(A68_VC ,AQZACTR,ZPZACTR,7)
static A68_229   DQZACTR = {"if ( "}; 
A_GISVEC(A68_VC ,EQZACTR,DQZACTR,5)
static A68_219   IQZACTR = {" )"}; 
A_GISVEC(A68_VC ,JQZACTR,IQZACTR,2)
A68_208  WQZACTR_startseries;
static A68_210   MRZACTR = {"clauses: exit: end of series label not set"}; 
A_GISVEC(A68_VC ,NRZACTR,MRZACTR,42)
static A68_229   PRZACTR = {"goto "}; 
A_GISVEC(A68_VC ,QRZACTR,PRZACTR,5)
static A68_235   NSZACTR = {"#define "}; 
A_GISVEC(A68_VC ,OSZACTR,NSZACTR,8)
static A68_75   CTZACTR = {"#undef "}; 
A_GISVEC(A68_VC ,DTZACTR,CTZACTR,7)
static A68_249   XTZACTR = {"yield of code insert"}; 
A_GISVEC(A68_VC ,YTZACTR,XTZACTR,20)
static A68_240   AUZACTR = {"RESULT"}; 
A_GISVEC(A68_VC ,DUZACTR,AUZACTR,6)
static A68_240   JUZACTR = {"RESULT"}; 
A_GISVEC(A68_VC ,KUZACTR,JUZACTR,6)
typedef struct   /* env of non-global proc */
{
A68_INT  GSZACTR_stream;
A_PAD_INT(PAD_115)
} LSZACTR_emitdefine;
typedef struct   /* env of non-global proc */
{
A68_INT  GSZACTR_stream;
A_PAD_INT(PAD_116)
} ATZACTR_emitundefine;
typedef struct   /* env of non-global proc */
{
A68_205  JSZACTR_emitdefine;
A68_248  KTZACTR_emitcode;
A68_76  YSZACTR_emitundefine;
A68_INT  Mode;
A_PAD_INT(PAD_117)
A68_98 * FSZACTR_result;
A68_VC  Code;
A68_INT  GSZACTR_stream;
A_PAD_INT(PAD_118)
} MTZACTR_emitcode;

A68_VOID  KAZACTR_startclause(A68_207  Properties, A68_85 ** Endofclause, A68_BOOL * Discardlevelactivated);

A68_VOID  QAZACTR_endclause(A68_207  Properties, A68_85 * Endofanswer, A68_85 * Endofclause, A68_BOOL  Discardlevelactivated, A68_BOOL  Pullstack);

A_STATIC A68_BOOL  TAZACTR_cf(A68_INT  M1, A68_INT  M2);

A68_VOID  WAZACTR_evaluatenoresult(A68_101 ** Valuestack);

A68_VOID  UBZACTR_evaluateresult(A68_101 ** Valuestack, A68_109  Answer);

A_STATIC A68_95 * BCZACTR_assignment(A68_95 * ZBZACTR_anonymous, A68_95  ACZACTR_anonymous);

A68_VOID  SDZACTR_evaluatesimpleenquiry(A68_101 ** Valuestack, A68_109  Answer);

A68_VOID  AEZACTR_begin(A68_BOOL  Seriescontainslabel, A68_BOOL  Routinebody);

A68_VOID  MEZACTR_end(A68_BOOL  Dynamicresult, A68_BOOL  Seriescontainsexit, A68_BOOL  Routinebody, A68_85 * Endofclauselabel);

A_STATIC A68_VOID  LFZACTR_outputcaseulabel(A68_INT  Mode, A68_INT  Casenumber, A68_77  Case);

A_STATIC A68_VOID  YGZACTR_subunionchoice(A68_154  Uchoice, A68_94  Union, A68_77  Case);

A68_VOID  KHZACTR_then(A68_94 * Enquiry);

A68_VOID  HIZACTR_else(void);

A68_VOID  AJZACTR_casein(A68_94 * Enquiry);

A68_VOID  FKZACTR_inu(A68_154  Uchoice, A68_94 * Union, A68_77  Case);

A68_VOID  HLZACTR_comma(A68_INT  Caseno);

A68_VOID  DMZACTR_commau(A68_154  Uchoice, A68_94  Union, A68_77  Case);

A68_VOID  MMZACTR_out(void);

A68_VOID  ENZACTR_esac(A68_BOOL  Outpart, A68_109  Answer);

A68_VOID  EOZACTR_fi(A68_BOOL  Elsepart, A68_109  Answer);

A68_VOID  XOZACTR_optboolwarning(A68_BOOL  Orel, A68_94 * Operand1);

A68_VOID  QQZACTR_optbooloper(void);

A68_VOID  ERZACTR_endseries(A68_207  Properties, A68_109  Answer, A68_85 * Endofseries, A68_BOOL  Discardlevelactivated, A68_BOOL  Pullstack, A68_BOOL  Seriescontainsexit);

A68_VOID  HRZACTR_semi(A68_BOOL  Outstandingdynamicresult, A68_BOOL  Declaration);

A68_VOID  LRZACTR_exit(A68_BOOL  Dynamicresult, A68_BOOL  Firstexit, A68_109  Seriesanswer);

A68_VOID  ESZACTR_codeinsert(A68_VC  Code, A68_INT  Mode, A68_101 * Visibles, A68_98  *ReturnedValue);

A_STATIC A68_VOID  KSZACTR_emitdefine(A68_VC  Symbol, A68_VC  Text, void *NonLocals);

A_STATIC A68_VOID  ZSZACTR_emitundefine(A68_VC  Symbol, void *NonLocals);

A_STATIC A68_VOID  LTZACTR_emitcode(A68_101 * List, void *NonLocals);

A_STATIC A68_95 * BCZACTR_assignment(A68_95 * ZBZACTR_anonymous, A68_95  ACZACTR_anonymous)
{ 
A68_95  CCZACTR;  /* united object - for case conformity */
A68_VC  DCZACTR_anonymous;
A68_VC  ECZACTR;  /* OPERATORS - copy to flex */
A68_216 * FCZACTR;  /* YIELD */
A68_95 * GCZACTR;  /* clause result */
{ 
(*ZBZACTR_anonymous) = ACZACTR_anonymous;
CCZACTR = ACZACTR_anonymous ;
switch ( CCZACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
DCZACTR_anonymous = (CCZACTR.data.mode6);
FCZACTR = &(ZBZACTR_anonymous-> data.mode6) ;
(*FCZACTR) = A_VCOPY(DCZACTR_anonymous,ECZACTR,A68_CHAR );
break;
default: 
/*SKIP*/;
break;
} 
GCZACTR = ZBZACTR_anonymous;
} 
return( GCZACTR );
} 
#undef NL

A_STATIC A68_VOID  KSZACTR_emitdefine(A68_VC  Symbol, A68_VC  Text, void *NonLocals)
#define NL(x) (((LSZACTR_emitdefine *)NonLocals)->x)
{ 
A68_230  MSZACTR;  /* collateral clause result */
A68_93  PSZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  QSZACTR;  /* YIELD */
A68_93  RSZACTR;  /* OPERATORS - mode -> union mode */
A68_93  SSZACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  TSZACTR;  /* YIELD */
A68_93  USZACTR;  /* OPERATORS - mode -> union mode */
A68_93  VSZACTR;  /* OPERATORS - mode -> union mode */
A68_92  WSZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(emitdefine);
 /* line 541: */
QSZACTR = OSZACTR ;
MSZACTR.data[0] = A_UNITE(PSZACTR,mode2,2,QSZACTR);
MSZACTR.data[1] = A_UNITE(RSZACTR,mode2,2,Symbol);
TSZACTR = ' ' ;
MSZACTR.data[2] = A_UNITE(SSZACTR,mode1,1,TSZACTR);
 /* line 542: */
MSZACTR.data[3] = A_UNITE(USZACTR,mode2,2,Text);
MSZACTR.data[4] = A_UNITE(VSZACTR,mode4,4,EIAACTR_cnewline);
 /* line 543: */
MDMACTR_writecstream(A_HISVEC(WSZACTR,MSZACTR,5,A68_93 ), NL(GSZACTR_stream));
A_PROC_EXIT(emitdefine);
return;
} 
#undef NL

A_STATIC A68_VOID  ZSZACTR_emitundefine(A68_VC  Symbol, void *NonLocals)
#define NL(x) (((ATZACTR_emitundefine *)NonLocals)->x)
{ 
A68_212  BTZACTR;  /* collateral clause result */
A68_93  ETZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  FTZACTR;  /* YIELD */
A68_93  GTZACTR;  /* OPERATORS - mode -> union mode */
A68_93  HTZACTR;  /* OPERATORS - mode -> union mode */
A68_92  ITZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(emitundefine);
 /* line 547: */
FTZACTR = DTZACTR ;
BTZACTR.data[0] = A_UNITE(ETZACTR,mode2,2,FTZACTR);
 /* line 548: */
BTZACTR.data[1] = A_UNITE(GTZACTR,mode2,2,Symbol);
BTZACTR.data[2] = A_UNITE(HTZACTR,mode4,4,EIAACTR_cnewline);
 /* line 549: */
MDMACTR_writecstream(A_HISVEC(ITZACTR,BTZACTR,3,A68_93 ), NL(GSZACTR_stream));
A_PROC_EXIT(emitundefine);
return;
} 
#undef NL

A_STATIC A68_VOID  LTZACTR_emitcode(A68_101 * List, void *NonLocals)
#define NL(x) (((MTZACTR_emitcode *)NonLocals)->x)
{ 
A68_INT  NTZACTR_id;
A68_95  OTZACTR;  /* united object - for case conformity */
A68_97  PTZACTR_i;
A68_VC  QTZACTR;  /* avoid structure result */
A68_VC  RTZACTR;  /* avoid structure result */
A68_VC  STZACTR;  /* avoid structure result */
A68_96  TTZACTR_r;
A68_VC  UTZACTR;  /* avoid structure result */
A68_VC  VTZACTR;  /* avoid structure result */
A68_VC  WTZACTR;  /* avoid structure result */
A68_98  ZTZACTR;  /* avoid structure result */
A68_VC  BUZACTR;  /* OPERATORS - istruct -> vector */
A68_75  CUZACTR;  /* OPERATORS - istruct -> vector */
A68_VC  EUZACTR;  /* avoid structure result */
A68_93  FUZACTR;  /* OPERATORS - mode -> union mode */
A68_92  GUZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_93  HUZACTR;  /* OPERATORS - mode -> union mode */
A68_92  IUZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(emitcode);
 /* line 552: */
 /* line 553: */
{ 
 /* line 554: */
if ( (List!=MKJACTR_nilvaluelist) )
{ 
 /* line 555: */
 /* line 556: */
OTZACTR = (*(&((&(List->Value))->Extra))) ;
switch ( OTZACTR.mode )
{ 
case 4: /* STRUCT(INT)  */
PTZACTR_i = (OTZACTR.data.mode4);
 /* line 557: */
{ 
NTZACTR_id = PTZACTR_i.Idno;
 /* line 558: */
UTKACTR_idfullname( NTZACTR_id, &QTZACTR );
LRKACTR_idname( NTZACTR_id, &RTZACTR );
A_CALLPROC(NL(JSZACTR_emitdefine),(RTZACTR, QTZACTR),(RTZACTR, QTZACTR,(NL(JSZACTR_emitdefine)).nonlocals));
 /* line 559: */
A_CALLPROC(NL(KTZACTR_emitcode),((*(&(List->Rest)))),((*(&(List->Rest))),(NL(KTZACTR_emitcode)).nonlocals));
 /* line 560: */
 /* line 561: */
 /* line 562: */
LRKACTR_idname( NTZACTR_id, &STZACTR );
A_CALLPROC(NL(YSZACTR_emitundefine),(STZACTR),(STZACTR,(NL(YSZACTR_emitundefine)).nonlocals));
} 
break;
case 2: /* STRUCT(INT)  */
TTZACTR_r = (OTZACTR.data.mode2);
 /* line 563: */
{ 
NTZACTR_id = TTZACTR_r.Rdenno;
 /* line 564: */
UTKACTR_idfullname( NTZACTR_id, &UTZACTR );
LRKACTR_idname( NTZACTR_id, &VTZACTR );
A_CALLPROC(NL(JSZACTR_emitdefine),(VTZACTR, UTZACTR),(VTZACTR, UTZACTR,(NL(JSZACTR_emitdefine)).nonlocals));
 /* line 565: */
A_CALLPROC(NL(KTZACTR_emitcode),((*(&(List->Rest)))),((*(&(List->Rest))),(NL(KTZACTR_emitcode)).nonlocals));
 /* line 566: */
 /* line 567: */
 /* line 568: */
LRKACTR_idname( NTZACTR_id, &WTZACTR );
A_CALLPROC(NL(YSZACTR_emitundefine),(WTZACTR),(WTZACTR,(NL(YSZACTR_emitundefine)).nonlocals));
} 
break;
default: 
PXIACTR_error(902);
 /* line 569: */
 /* line 570: */
 /* line 571: */
A_CALLPROC(NL(KTZACTR_emitcode),((*(&(List->Rest)))),((*(&(List->Rest))),(NL(KTZACTR_emitcode)).nonlocals));
break;
} 
} 
else
{ 
 /* line 572: */
if ( (NL(Mode)!=UEAACTR_voidmode) )
{ 
 /* line 575: */
LLOACTR_declarectemporary( NL(Mode), YTZACTR, &ZTZACTR );
(*NL(FSZACTR_result)) = ZTZACTR;
 /* line 576: */
 /* line 577: */
CUZACTR = (*(&(NL(FSZACTR_result)->Name))) ;
A_CALLPROC(NL(JSZACTR_emitdefine),(DUZACTR, A_HISVEC(BUZACTR,CUZACTR,7,A68_CHAR )),(DUZACTR, A_HISVEC(BUZACTR,CUZACTR,7,A68_CHAR ),(NL(JSZACTR_emitdefine)).nonlocals));
} 
 /* line 578: */
VJAACTR_curly( NL(Code), &EUZACTR );
MDMACTR_writecstream(A_HVEC(GUZACTR,A_UNITE(FUZACTR,mode2,2,EUZACTR),A68_93 ), NL(GSZACTR_stream));
 /* line 579: */
MDMACTR_writecstream(A_HVEC(IUZACTR,A_UNITE(HUZACTR,mode4,4,EIAACTR_cnewline),A68_93 ), NL(GSZACTR_stream));
 /* line 580: */
 /* line 581: */
if ( (NL(Mode)!=UEAACTR_voidmode) )
{ 
 /* line 582: */
 /* line 583: */
 /* line 584: */
A_CALLPROC(NL(YSZACTR_emitundefine),(KUZACTR),(KUZACTR,(NL(YSZACTR_emitundefine)).nonlocals));
} 
} 
} 
A_PROC_EXIT(emitcode);
return;
} 
#undef NL
 /* line 56: */
 /* line 58: */

A68_VOID  KAZACTR_startclause(A68_207  Properties, A68_85 ** Endofclause, A68_BOOL * Discardlevelactivated)
{ 
A_PROC_ENTRY(startclause);
 /* line 65: */
 /* line 67: */
/*SKIP*/;
A_PROC_EXIT(startclause);
return;
} 
#undef NL
 /* line 71: */
 /* line 72: */
 /* line 73: */

A68_VOID  QAZACTR_endclause(A68_207  Properties, A68_85 * Endofanswer, A68_85 * Endofclause, A68_BOOL  Discardlevelactivated, A68_BOOL  Pullstack)
{ 
A_PROC_ENTRY(endclause);
 /* line 81: */
 /* line 83: */
/*SKIP*/;
A_PROC_EXIT(endclause);
return;
} 
#undef NL

A_STATIC A68_BOOL  TAZACTR_cf(A68_INT  M1, A68_INT  M2)
{ 
A68_BOOL  UAZACTR;  /* clause result */
A_PROC_ENTRY(cf);
 /* line 89: */
UAZACTR = (HCNACTR_finddeflexmode(M1)==HCNACTR_finddeflexmode(M2));
A_PROC_EXIT(cf);
return( UAZACTR );
} 
#undef NL

A68_VOID  WAZACTR_evaluatenoresult(A68_101 ** Valuestack)
{ 
A68_94 * XAZACTR_value;
A68_95  YAZACTR;  /* united object - for case conformity */
A68_BOOL  ZAZACTR;  /* clause result */
A68_BOOL  ABZACTR;  /* clause result */
A68_INT  BBZACTR_codestream;
A68_212  EBZACTR;  /* collateral clause result */
A68_93  HBZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  IBZACTR;  /* YIELD */
A68_VC  JBZACTR;  /* avoid structure result */
A68_93  KBZACTR;  /* OPERATORS - mode -> union mode */
A68_93  LBZACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  MBZACTR;  /* YIELD */
A68_93  NBZACTR;  /* OPERATORS - mode -> union mode */
A68_92  OBZACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  RBZACTR;  /* optbool result */
A_PROC_ENTRY(evaluatenoresult);
 /* line 105: */
 /* line 106: */
{ 
 /* line 107: */
 /* line 108: */
if ( ((*Valuestack)!=MKJACTR_nilvaluelist) )
{ 
XAZACTR_value = (&((*Valuestack)->Value));
 /* line 109: */
YAZACTR = (*(&(XAZACTR_value->Extra))) ;
switch ( YAZACTR.mode )
{ 
case 3: /* VOID */
ZAZACTR = A68_TRUE;
break;
default: 
 /* line 110: */
ZAZACTR = A68_FALSE;
break;
} 
 /* line 111: */
 /* line 112: */
 /* line 113: */
ABZACTR = (ZAZACTR&((*(&(XAZACTR_value->Mode)))==UEAACTR_voidmode));
if ( ABZACTR )
{ 
 /* line 114: */
 /* line 115: */
(*Valuestack) = (*(&((*Valuestack)->Rest)));
} 
else
{ 
BBZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 116: */
(*Valuestack) = (*(&((*Valuestack)->Rest)));
 /* line 117: */
A_CALLPROC(NXQACTR_evaluate,(XAZACTR_value),(XAZACTR_value,(NXQACTR_evaluate).nonlocals));
 /* line 118: */
 /* line 119: */
WXIACTR_assert(DBZACTR, ((*(&(XAZACTR_value->Mode)))==UEAACTR_voidmode));
 /* line 120: */
 /* line 121: */
if ( QXPACTR_isskip(XAZACTR_value) )
{ 
IBZACTR = GBZACTR ;
EBZACTR.data[0] = A_UNITE(HBZACTR,mode2,2,IBZACTR);
} 
else
{ 
GZPACTR_getcfragment( XAZACTR_value, &JBZACTR );
EBZACTR.data[0] = A_UNITE(KBZACTR,mode2,2,JBZACTR);
} 
 /* line 123: */
MBZACTR = ';' ;
EBZACTR.data[1] = A_UNITE(LBZACTR,mode1,1,MBZACTR);
EBZACTR.data[2] = A_UNITE(NBZACTR,mode4,4,EIAACTR_cnewline);
 /* line 124: */
 /* line 125: */
MDMACTR_writecstream(A_HISVEC(OBZACTR,EBZACTR,3,A68_93 ), BBZACTR_codestream);
} 
 /* line 126: */
 /* line 127: */
RBZACTR = (ZCHACTR_tracelevel(QBZACTR)!=0);
if ( RBZACTR )
{ /* line 128: */
RBZACTR = ((*Valuestack)!=MKJACTR_nilvaluelist);
}
if ( RBZACTR )
{ 
 /* line 129: */
 /* line 130: */
 /* line 131: */
A_CALLPROC(ZFVACTR_calltrace,((&((*Valuestack)->Value)), A68_FALSE),((&((*Valuestack)->Value)), A68_FALSE,(ZFVACTR_calltrace).nonlocals));
} 
} 
} 
A_PROC_EXIT(evaluatenoresult);
return;
} 
#undef NL

A68_VOID  UBZACTR_evaluateresult(A68_101 ** Valuestack, A68_109  Answer)
{ 
A68_94 * VBZACTR_ansvalue;
A68_INT  WBZACTR_codestream;
A68_95  XBZACTR;  /* united object - for case conformity */
A68_98  ICZACTR;  /* avoid structure result */
A68_95  JCZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KCZACTR;  /* clause result */
A68_VC  LCZACTR;  /* avoid structure result */
A68_98  MCZACTR_t;
A68_VC  NCZACTR;  /* OPERATORS - istruct -> vector */
A68_75  OCZACTR;  /* OPERATORS - istruct -> vector */
A68_VC  PCZACTR_c;
A68_VC  UCZACTR_assignee;
A68_94 * VCZACTR_value;
A68_93  ADZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  BDZACTR;  /* YIELD */
A68_92  CDZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_221  DDZACTR;  /* collateral clause result */
A68_93  EDZACTR;  /* OPERATORS - mode -> union mode */
A68_93  HDZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  IDZACTR;  /* YIELD */
A68_VC  JDZACTR;  /* avoid structure result */
A68_93  KDZACTR;  /* OPERATORS - mode -> union mode */
A68_93  LDZACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  MDZACTR;  /* YIELD */
A68_92  NDZACTR;  /* OPERATORS - istruct -> vector */
A68_93  ODZACTR;  /* OPERATORS - mode -> union mode */
A68_92  PDZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(evaluateresult);
 /* line 146: */
 /* line 147: */
{ 
VBZACTR_ansvalue = Answer.Value;
 /* line 148: */
 /* line 149: */
if ( ((*(&(VBZACTR_ansvalue->Mode)))==UEAACTR_voidmode) )
{ 
 /* line 150: */
 /* line 151: */
WAZACTR_evaluatenoresult(Valuestack);
} 
else
{ 
WBZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 153: */
 /* line 154: */
 /* line 155: */
XBZACTR = (*(&(VBZACTR_ansvalue->Extra))) ;
switch ( XBZACTR.mode )
{ 
case 3: /* VOID */
 /* line 156: */
 /* line 157: */
{ 
 /* line 159: */
 /* line 161: */
LLOACTR_declarectemporary( (*(&(VBZACTR_ansvalue->Mode))), HCZACTR, &ICZACTR );
BCZACTR_assignment((&(VBZACTR_ansvalue->Extra)), A_UNITE(JCZACTR,mode5,5,ICZACTR));
 /* line 162: */
 /* line 163: */
 /* line 164: */
GZPACTR_getcfragment( VBZACTR_ansvalue, &LCZACTR );
KCZACTR = LCZACTR;
} 
break;
case 5: /* STRUCT(MODE75,INT)  */
MCZACTR_t = (XBZACTR.data.mode5);
 /* line 165: */
 /* line 166: */
OCZACTR = MCZACTR_t.Name ;
KCZACTR = A_HISVEC(NCZACTR,OCZACTR,7,A68_CHAR );
break;
case 6: /* VECTOR [] CHAR */
PCZACTR_c = (XBZACTR.data.mode6);
 /* line 167: */
 /* line 168: */
KCZACTR = PCZACTR_c;
break;
default: 
WXIACTR_assert(RCZACTR, A68_FALSE);
 /* line 169: */
KCZACTR = TCZACTR;
break;
} 
UCZACTR_assignee = KCZACTR;
 /* line 171: */
VCZACTR_value = (&((*Valuestack)->Value));
 /* line 172: */
ILVACTR_evaluatestack(Valuestack);
 /* line 173: */
 /* line 174: */
WXIACTR_assert(XCZACTR, TAZACTR_cf((*(&(VBZACTR_ansvalue->Mode))), (*(&((&((*Valuestack)->Value))->Mode)))));
 /* line 175: */
 /* line 176: */
if ( QXPACTR_isskip(VCZACTR_value) )
{ 
 /* line 177: */
 /* line 178: */
BDZACTR = ZCZACTR ;
MDMACTR_writecstream(A_HVEC(CDZACTR,A_UNITE(ADZACTR,mode2,2,BDZACTR),A68_93 ), WBZACTR_codestream);
} 
else
{ 
DDZACTR.data[0] = A_UNITE(EDZACTR,mode2,2,UCZACTR_assignee);
IDZACTR = GDZACTR ;
DDZACTR.data[1] = A_UNITE(HDZACTR,mode2,2,IDZACTR);
GZPACTR_getcfragment( VCZACTR_value, &JDZACTR );
DDZACTR.data[2] = A_UNITE(KDZACTR,mode2,2,JDZACTR);
MDZACTR = ';' ;
DDZACTR.data[3] = A_UNITE(LDZACTR,mode1,1,MDZACTR);
 /* line 180: */
 /* line 181: */
MDMACTR_writecstream(A_HISVEC(NDZACTR,DDZACTR,4,A68_93 ), WBZACTR_codestream);
} 
 /* line 182: */
MDMACTR_writecstream(A_HVEC(PDZACTR,A_UNITE(ODZACTR,mode4,4,EIAACTR_cnewline),A68_93 ), WBZACTR_codestream);
 /* line 183: */
 /* line 184: */
 /* line 185: */
(*Valuestack) = (*(&((*Valuestack)->Rest)));
} 
} 
A_PROC_EXIT(evaluateresult);
return;
} 
#undef NL
 /* line 190: */

A68_VOID  SDZACTR_evaluatesimpleenquiry(A68_101 ** Valuestack, A68_109  Answer)
{ 
A68_94 * TDZACTR_value;
A68_VC  WDZACTR;  /* avoid structure result */
A68_95  XDZACTR;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(evaluatesimpleenquiry);
 /* line 196: */
 /* line 197: */
{ 
TDZACTR_value = (&((*Valuestack)->Value));
 /* line 198: */
ILVACTR_evaluatestack(Valuestack);
 /* line 199: */
 /* line 200: */
WXIACTR_assert(VDZACTR, TAZACTR_cf((*(&(Answer.Value->Mode))), (*(&(TDZACTR_value->Mode)))));
 /* line 201: */
GZPACTR_getcfragment( TDZACTR_value, &WDZACTR );
BCZACTR_assignment((&(Answer.Value->Extra)), A_UNITE(XDZACTR,mode6,6,WDZACTR));
 /* line 202: */
 /* line 203: */
(*Valuestack) = (*(&((*Valuestack)->Rest)));
} 
A_PROC_EXIT(evaluatesimpleenquiry);
return;
} 
#undef NL

A68_VOID  AEZACTR_begin(A68_BOOL  Seriescontainslabel, A68_BOOL  Routinebody)
{ 
A68_224  BEZACTR;  /* collateral clause result */
A68_93  EEZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  FEZACTR;  /* YIELD */
A68_93  GEZACTR;  /* OPERATORS - mode -> union mode */
A68_92  HEZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(begin);
 /* line 211: */
 /* line 212: */
FEZACTR = DEZACTR ;
BEZACTR.data[0] = A_UNITE(EEZACTR,mode2,2,FEZACTR);
BEZACTR.data[1] = A_UNITE(GEZACTR,mode4,4,EIAACTR_cnewline);
 /* line 213: */
MDMACTR_writecstream(A_HISVEC(HEZACTR,BEZACTR,2,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel()));
A_PROC_EXIT(begin);
return;
} 
#undef NL
 /* line 218: */

A68_VOID  MEZACTR_end(A68_BOOL  Dynamicresult, A68_BOOL  Seriescontainsexit, A68_BOOL  Routinebody, A68_85 * Endofclauselabel)
{ 
A68_INT  NEZACTR_codestream;
A68_212  QEZACTR;  /* collateral clause result */
A68_VC  REZACTR;  /* OPERATORS - istruct -> vector */
A68_75  SEZACTR;  /* OPERATORS - istruct -> vector */
A68_93  TEZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  UEZACTR;  /* YIELD */
A68_93  XEZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  YEZACTR;  /* YIELD */
A68_93  ZEZACTR;  /* OPERATORS - mode -> union mode */
A68_92  AFZACTR;  /* OPERATORS - istruct -> vector */
A68_224  BFZACTR;  /* collateral clause result */
A68_93  EFZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  FFZACTR;  /* YIELD */
A68_93  GFZACTR;  /* OPERATORS - mode -> union mode */
A68_92  HFZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(end);
 /* line 219: */
 /* line 220: */
{ 
NEZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 221: */
 /* line 222: */
 /* line 223: */
if ( Seriescontainsexit )
{ 
WXIACTR_assert(PEZACTR, (Endofclauselabel!=(A68_85 *)A68_NIL));
 /* line 224: */
 /* line 225: */
SEZACTR = (*(&(Endofclauselabel->Name))) ;
UEZACTR = A_HISVEC(REZACTR,SEZACTR,7,A68_CHAR ) ;
QEZACTR.data[0] = A_UNITE(TEZACTR,mode2,2,UEZACTR);
 /* line 226: */
YEZACTR = WEZACTR ;
QEZACTR.data[1] = A_UNITE(XEZACTR,mode2,2,YEZACTR);
QEZACTR.data[2] = A_UNITE(ZEZACTR,mode4,4,EIAACTR_cnewline);
 /* line 227: */
 /* line 228: */
MDMACTR_writecstream(A_HISVEC(AFZACTR,QEZACTR,3,A68_93 ), NEZACTR_codestream);
} 
 /* line 229: */
FFZACTR = DFZACTR ;
BFZACTR.data[0] = A_UNITE(EFZACTR,mode2,2,FFZACTR);
BFZACTR.data[1] = A_UNITE(GFZACTR,mode4,4,EIAACTR_cnewline);
 /* line 230: */
MDMACTR_writecstream(A_HISVEC(HFZACTR,BFZACTR,2,A68_93 ), NEZACTR_codestream);
} 
A_PROC_EXIT(end);
return;
} 
#undef NL
 /* line 250: */

A_STATIC A68_VOID  LFZACTR_outputcaseulabel(A68_INT  Mode, A68_INT  Casenumber, A68_77  Case)
{ 
A68_INT  MFZACTR_codestream;
A68_VC  NFZACTR;  /* avoid structure result */
A68_70  OFZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_224  PFZACTR;  /* collateral clause result */
A68_93  SFZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  TFZACTR;  /* YIELD */
A68_93  UFZACTR;  /* OPERATORS - mode -> union mode */
A68_92  VFZACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL * WFZACTR;  /* YIELD */
A68_230  XFZACTR;  /* collateral clause result */
A68_93  AGZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  BGZACTR;  /* YIELD */
A68_VC  CGZACTR;  /* avoid structure result */
A68_93  DGZACTR;  /* OPERATORS - mode -> union mode */
A68_93  GGZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  HGZACTR;  /* YIELD */
A68_VC  LGZACTR;  /* avoid structure result */
A68_93  NGZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  OGZACTR;  /* YIELD */
A68_93  RGZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  SGZACTR;  /* YIELD */
A68_93  TGZACTR;  /* OPERATORS - mode -> union mode */
A68_92  UGZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(outputcaseulabel);
 /* line 256: */
 /* line 257: */
{ 
MFZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 258: */
 /* line 259: */
 /* line 260: */
if ( (*(&A_R1INDEX(Case,Casenumber))) )
{ 
WCNACTR_modename( Mode, &NFZACTR );
NWIACTR_pmessage(720, A_HARR(OFZACTR,NFZACTR,A68_VC ));
 /* line 261: */
 /* line 262: */
 /* line 264: */
TFZACTR = RFZACTR ;
PFZACTR.data[0] = A_UNITE(SFZACTR,mode2,2,TFZACTR);
PFZACTR.data[1] = A_UNITE(UFZACTR,mode4,4,EIAACTR_cnewline);
 /* line 265: */
 /* line 266: */
 /* line 267: */
MDMACTR_writecstream(A_HISVEC(VFZACTR,PFZACTR,2,A68_93 ), MFZACTR_codestream);
} 
else
{ 
WFZACTR = (&A_R1INDEX(Case,Casenumber)) ;
(*WFZACTR) = A68_TRUE;
 /* line 268: */
 /* line 269: */
BGZACTR = ZFZACTR ;
XFZACTR.data[0] = A_UNITE(AGZACTR,mode2,2,BGZACTR);
ROAAOSF_whole( Casenumber, 0, &CGZACTR );
XFZACTR.data[1] = A_UNITE(DGZACTR,mode2,2,CGZACTR);
 /* line 270: */
HGZACTR = FGZACTR ;
XFZACTR.data[2] = A_UNITE(GGZACTR,mode2,2,HGZACTR);
 /* line 271: */
if ( AQIACTR_verboseoption )
{ 
 /* line 272: */
 /* line 273: */
WCNACTR_modename( Mode, &LGZACTR );
OGZACTR = A_VC_PLUS(A_VC_PLUS(KGZACTR,LGZACTR),MGZACTR) ;
XFZACTR.data[3] = A_UNITE(NGZACTR,mode2,2,OGZACTR);
} 
else
{ 
 /* line 274: */
SGZACTR = QGZACTR ;
XFZACTR.data[3] = A_UNITE(RGZACTR,mode2,2,SGZACTR);
} 
XFZACTR.data[4] = A_UNITE(TGZACTR,mode4,4,EIAACTR_cnewline);
 /* line 275: */
 /* line 276: */
 /* line 277: */
MDMACTR_writecstream(A_HISVEC(UGZACTR,XFZACTR,5,A68_93 ), MFZACTR_codestream);
} 
} 
A_PROC_EXIT(outputcaseulabel);
return;
} 
#undef NL
 /* line 281: */
 /* line 283: */

A_STATIC A68_VOID  YGZACTR_subunionchoice(A68_154  Uchoice, A68_94  Union, A68_77  Case)
{ 
A68_172  ZGZACTR;  /* avoid structure result */
A68_172  AHZACTR_modesofunion;
A68_172  BHZACTR;  /* avoid structure result */
A68_VC  CHZACTR;  /* avoid structure result */
A68_VC  DHZACTR;  /* OPERATORS - trim index */
A68_VC  EHZACTR;  /* YIELD */
A68_RC  FHZACTR;  /* OPERATORS - vector -> row */
A68_RC  GHZACTR_table;
A68_INT  HHZACTR_i;
A68_INT  IHZACTR;  /* to part of loop */
A_PROC_ENTRY(subunionchoice);
 /* line 288: */
 /* line 289: */
{ 
A_CALLPROC(YVMACTR_constituents,(Union.Mode, &ZGZACTR),(Union.Mode, &ZGZACTR,(YVMACTR_constituents).nonlocals));
AHZACTR_modesofunion = ZGZACTR;
 /* line 290: */
 /* line 292: */
 /* line 293: */
 /* line 294: */
A_CALLPROC(YVMACTR_constituents,(Uchoice.Mode, &BHZACTR),(Uchoice.Mode, &BHZACTR,(YVMACTR_constituents).nonlocals));
IWQACTR_uniontouniontable( AHZACTR_modesofunion, BHZACTR, &CHZACTR );
EHZACTR = A_VTRIM(DHZACTR,(CHZACTR),A_VTSCRIPT(&(DHZACTR.upb),(CHZACTR).upb,1,(CHZACTR).upb)) ;
GHZACTR_table = A_VECARR(EHZACTR,FHZACTR);
 /* line 295: */
 /* line 296: */
IHZACTR = GHZACTR_table.dim[0].upb;
for ( HHZACTR_i = 1;
HHZACTR_i <= IHZACTR;
HHZACTR_i += 1 )
{ 
 /* line 297: */
if ( ((A68_INT)(unsigned char)A_R1INDEX(GHZACTR_table,HHZACTR_i)!=0) )
{ 
 /* line 298: */
 /* line 299: */
LFZACTR_outputcaseulabel((*(&A_VINDEX(AHZACTR_modesofunion,HHZACTR_i))), HHZACTR_i, Case);
} 
}
 /* line 300: */
 /* line 301: */
/*SKIP*/;
} 
A_PROC_EXIT(subunionchoice);
return;
} 
#undef NL

A68_VOID  KHZACTR_then(A68_94 * Enquiry)
{ 
A68_VC  MHZACTR;  /* clause result */
A68_VC  OHZACTR;  /* avoid structure result */
A68_VC  PHZACTR_booleanexpr;
A68_233  QHZACTR;  /* collateral clause result */
A68_93  THZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  UHZACTR;  /* YIELD */
A68_93  VHZACTR;  /* OPERATORS - mode -> union mode */
A68_93  YHZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ZHZACTR;  /* YIELD */
A68_93  AIZACTR;  /* OPERATORS - mode -> union mode */
A68_93  DIZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  EIZACTR;  /* YIELD */
A68_93  FIZACTR;  /* OPERATORS - mode -> union mode */
A68_92  GIZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(then);
 /* line 304: */
 /* line 306: */
{ 
 /* line 307: */
 /* line 308: */
if ( QXPACTR_isskip(Enquiry) )
{ 
 /* line 309: */
MHZACTR = NHZACTR;
} 
else
{ 
GZPACTR_getcfragment( Enquiry, &OHZACTR );
MHZACTR = OHZACTR;
} 
PHZACTR_booleanexpr = MHZACTR;
 /* line 310: */
 /* line 311: */
UHZACTR = SHZACTR ;
QHZACTR.data[0] = A_UNITE(THZACTR,mode2,2,UHZACTR);
QHZACTR.data[1] = A_UNITE(VHZACTR,mode2,2,PHZACTR_booleanexpr);
ZHZACTR = XHZACTR ;
QHZACTR.data[2] = A_UNITE(YHZACTR,mode2,2,ZHZACTR);
 /* line 312: */
QHZACTR.data[3] = A_UNITE(AIZACTR,mode4,4,EIAACTR_cnewline);
 /* line 313: */
EIZACTR = CIZACTR ;
QHZACTR.data[4] = A_UNITE(DIZACTR,mode2,2,EIZACTR);
QHZACTR.data[5] = A_UNITE(FIZACTR,mode4,4,EIAACTR_cnewline);
 /* line 314: */
 /* line 315: */
MDMACTR_writecstream(A_HISVEC(GIZACTR,QHZACTR,6,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel()));
} 
A_PROC_EXIT(then);
return;
} 
#undef NL

A68_VOID  HIZACTR_else(void)
{ 
A68_233  IIZACTR;  /* collateral clause result */
A68_93  LIZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  MIZACTR;  /* YIELD */
A68_93  NIZACTR;  /* OPERATORS - mode -> union mode */
A68_93  QIZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  RIZACTR;  /* YIELD */
A68_93  SIZACTR;  /* OPERATORS - mode -> union mode */
A68_93  VIZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  WIZACTR;  /* YIELD */
A68_93  XIZACTR;  /* OPERATORS - mode -> union mode */
A68_92  YIZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(else);
MIZACTR = KIZACTR ;
IIZACTR.data[0] = A_UNITE(LIZACTR,mode2,2,MIZACTR);
IIZACTR.data[1] = A_UNITE(NIZACTR,mode4,4,EIAACTR_cnewline);
RIZACTR = PIZACTR ;
IIZACTR.data[2] = A_UNITE(QIZACTR,mode2,2,RIZACTR);
IIZACTR.data[3] = A_UNITE(SIZACTR,mode4,4,EIAACTR_cnewline);
 /* line 321: */
WIZACTR = UIZACTR ;
IIZACTR.data[4] = A_UNITE(VIZACTR,mode2,2,WIZACTR);
IIZACTR.data[5] = A_UNITE(XIZACTR,mode4,4,EIAACTR_cnewline);
 /* line 322: */
 /* line 323: */
MDMACTR_writecstream(A_HISVEC(YIZACTR,IIZACTR,6,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel()));
A_PROC_EXIT(else);
return;
} 
#undef NL

A68_VOID  AJZACTR_casein(A68_94 * Enquiry)
{ 
A68_VC  CJZACTR;  /* clause result */
A68_VC  EJZACTR;  /* avoid structure result */
A68_VC  FJZACTR_integerexpr;
A68_236  GJZACTR;  /* collateral clause result */
A68_93  JJZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KJZACTR;  /* YIELD */
A68_93  LJZACTR;  /* OPERATORS - mode -> union mode */
A68_93  OJZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  PJZACTR;  /* YIELD */
A68_93  QJZACTR;  /* OPERATORS - mode -> union mode */
A68_93  TJZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  UJZACTR;  /* YIELD */
A68_93  VJZACTR;  /* OPERATORS - mode -> union mode */
A68_93  YJZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ZJZACTR;  /* YIELD */
A68_93  AKZACTR;  /* OPERATORS - mode -> union mode */
A68_92  BKZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(casein);
 /* line 326: */
 /* line 328: */
{ 
 /* line 329: */
 /* line 330: */
if ( QXPACTR_isskip(Enquiry) )
{ 
 /* line 331: */
CJZACTR = DJZACTR;
} 
else
{ 
GZPACTR_getcfragment( Enquiry, &EJZACTR );
CJZACTR = EJZACTR;
} 
FJZACTR_integerexpr = CJZACTR;
 /* line 332: */
 /* line 333: */
KJZACTR = IJZACTR ;
GJZACTR.data[0] = A_UNITE(JJZACTR,mode2,2,KJZACTR);
GJZACTR.data[1] = A_UNITE(LJZACTR,mode2,2,FJZACTR_integerexpr);
PJZACTR = NJZACTR ;
GJZACTR.data[2] = A_UNITE(OJZACTR,mode2,2,PJZACTR);
 /* line 334: */
GJZACTR.data[3] = A_UNITE(QJZACTR,mode4,4,EIAACTR_cnewline);
UJZACTR = SJZACTR ;
GJZACTR.data[4] = A_UNITE(TJZACTR,mode2,2,UJZACTR);
 /* line 335: */
GJZACTR.data[5] = A_UNITE(VJZACTR,mode4,4,EIAACTR_cnewline);
 /* line 336: */
ZJZACTR = XJZACTR ;
GJZACTR.data[6] = A_UNITE(YJZACTR,mode2,2,ZJZACTR);
GJZACTR.data[7] = A_UNITE(AKZACTR,mode4,4,EIAACTR_cnewline);
 /* line 337: */
 /* line 338: */
MDMACTR_writecstream(A_HISVEC(BKZACTR,GJZACTR,8,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel()));
} 
A_PROC_EXIT(casein);
return;
} 
#undef NL
 /* line 342: */
 /* line 344: */

A68_VOID  FKZACTR_inu(A68_154  Uchoice, A68_94 * Union, A68_77  Case)
{ 
A68_VC  IKZACTR;  /* avoid structure result */
A68_VC  JKZACTR_unitedobject;
A68_INT  KKZACTR_codestream;
A68_239  LKZACTR;  /* collateral clause result */
A68_93  OKZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  PKZACTR;  /* YIELD */
A68_93  QKZACTR;  /* OPERATORS - mode -> union mode */
A68_93  TKZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  UKZACTR;  /* YIELD */
A68_93  XKZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  YKZACTR;  /* YIELD */
A68_93  ZKZACTR;  /* OPERATORS - mode -> union mode */
A68_93  CLZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  DLZACTR;  /* YIELD */
A68_93  ELZACTR;  /* OPERATORS - mode -> union mode */
A68_92  FLZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(inu);
 /* line 345: */
 /* line 348: */
{ 
GZPACTR_getcfragment( VPQACTR_yield(HKZACTR, Union), &IKZACTR );
JKZACTR_unitedobject = IKZACTR;
 /* line 349: */
KKZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 350: */
 /* line 351: */
PKZACTR = NKZACTR ;
LKZACTR.data[0] = A_UNITE(OKZACTR,mode2,2,PKZACTR);
LKZACTR.data[1] = A_UNITE(QKZACTR,mode2,2,JKZACTR_unitedobject);
UKZACTR = SKZACTR ;
LKZACTR.data[2] = A_UNITE(TKZACTR,mode2,2,UKZACTR);
YKZACTR = WKZACTR ;
LKZACTR.data[3] = A_UNITE(XKZACTR,mode2,2,YKZACTR);
 /* line 352: */
LKZACTR.data[4] = A_UNITE(ZKZACTR,mode4,4,EIAACTR_cnewline);
 /* line 353: */
DLZACTR = BLZACTR ;
LKZACTR.data[5] = A_UNITE(CLZACTR,mode2,2,DLZACTR);
LKZACTR.data[6] = A_UNITE(ELZACTR,mode4,4,EIAACTR_cnewline);
 /* line 354: */
MDMACTR_writecstream(A_HISVEC(FLZACTR,LKZACTR,7,A68_93 ), KKZACTR_codestream);
 /* line 355: */
 /* line 356: */
 /* line 357: */
if ( (Uchoice.Param<0) )
{ 
 /* line 358: */
YGZACTR_subunionchoice(Uchoice, (*Union), Case);
} 
else
{ 
 /* line 359: */
 /* line 360: */
LFZACTR_outputcaseulabel(Uchoice.Mode, Uchoice.Param, Case);
} 
} 
A_PROC_EXIT(inu);
return;
} 
#undef NL

A68_VOID  HLZACTR_comma(A68_INT  Caseno)
{ 
A68_233  ILZACTR;  /* collateral clause result */
A68_93  LLZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  MLZACTR;  /* YIELD */
A68_93  NLZACTR;  /* OPERATORS - mode -> union mode */
A68_93  QLZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  RLZACTR;  /* YIELD */
A68_VC  SLZACTR;  /* avoid structure result */
A68_93  TLZACTR;  /* OPERATORS - mode -> union mode */
A68_93  WLZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  XLZACTR;  /* YIELD */
A68_93  YLZACTR;  /* OPERATORS - mode -> union mode */
A68_92  ZLZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(comma);
 /* line 363: */
 /* line 365: */
MLZACTR = KLZACTR ;
ILZACTR.data[0] = A_UNITE(LLZACTR,mode2,2,MLZACTR);
 /* line 366: */
ILZACTR.data[1] = A_UNITE(NLZACTR,mode4,4,EIAACTR_cnewline);
RLZACTR = PLZACTR ;
ILZACTR.data[2] = A_UNITE(QLZACTR,mode2,2,RLZACTR);
ROAAOSF_whole( Caseno, 0, &SLZACTR );
ILZACTR.data[3] = A_UNITE(TLZACTR,mode2,2,SLZACTR);
 /* line 367: */
XLZACTR = VLZACTR ;
ILZACTR.data[4] = A_UNITE(WLZACTR,mode2,2,XLZACTR);
ILZACTR.data[5] = A_UNITE(YLZACTR,mode4,4,EIAACTR_cnewline);
 /* line 368: */
 /* line 369: */
MDMACTR_writecstream(A_HISVEC(ZLZACTR,ILZACTR,6,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel()));
A_PROC_EXIT(comma);
return;
} 
#undef NL
 /* line 373: */
 /* line 375: */

A68_VOID  DMZACTR_commau(A68_154  Uchoice, A68_94  Union, A68_77  Case)
{ 
A68_INT  EMZACTR_codestream;
A68_224  FMZACTR;  /* collateral clause result */
A68_93  IMZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JMZACTR;  /* YIELD */
A68_93  KMZACTR;  /* OPERATORS - mode -> union mode */
A68_92  LMZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(commau);
 /* line 376: */
 /* line 377: */
{ 
EMZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 378: */
JMZACTR = HMZACTR ;
FMZACTR.data[0] = A_UNITE(IMZACTR,mode2,2,JMZACTR);
FMZACTR.data[1] = A_UNITE(KMZACTR,mode4,4,EIAACTR_cnewline);
MDMACTR_writecstream(A_HISVEC(LMZACTR,FMZACTR,2,A68_93 ), EMZACTR_codestream);
 /* line 379: */
 /* line 380: */
 /* line 381: */
if ( (Uchoice.Param<0) )
{ 
 /* line 382: */
YGZACTR_subunionchoice(Uchoice, Union, Case);
} 
else
{ 
 /* line 383: */
 /* line 384: */
LFZACTR_outputcaseulabel(Uchoice.Mode, Uchoice.Param, Case);
} 
} 
A_PROC_EXIT(commau);
return;
} 
#undef NL

A68_VOID  MMZACTR_out(void)
{ 
A68_INT  NMZACTR_codestream;
A68_221  OMZACTR;  /* collateral clause result */
A68_93  RMZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  SMZACTR;  /* YIELD */
A68_93  TMZACTR;  /* OPERATORS - mode -> union mode */
A68_93  WMZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  XMZACTR;  /* YIELD */
A68_93  YMZACTR;  /* OPERATORS - mode -> union mode */
A68_92  ZMZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(out);
{ 
NMZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 389: */
 /* line 390: */
SMZACTR = QMZACTR ;
OMZACTR.data[0] = A_UNITE(RMZACTR,mode2,2,SMZACTR);
OMZACTR.data[1] = A_UNITE(TMZACTR,mode4,4,EIAACTR_cnewline);
XMZACTR = VMZACTR ;
OMZACTR.data[2] = A_UNITE(WMZACTR,mode2,2,XMZACTR);
OMZACTR.data[3] = A_UNITE(YMZACTR,mode4,4,EIAACTR_cnewline);
 /* line 392: */
 /* line 393: */
MDMACTR_writecstream(A_HISVEC(ZMZACTR,OMZACTR,4,A68_93 ), NMZACTR_codestream);
} 
A_PROC_EXIT(out);
return;
} 
#undef NL

A68_VOID  ENZACTR_esac(A68_BOOL  Outpart, A68_109  Answer)
{ 
A68_INT  FNZACTR_codestream;
A68_INT  GNZACTR_resultmode;
A68_93  JNZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KNZACTR;  /* YIELD */
A68_92  LNZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_93  MNZACTR;  /* OPERATORS - mode -> union mode */
A68_92  NNZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_221  ONZACTR;  /* collateral clause result */
A68_93  RNZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  SNZACTR;  /* YIELD */
A68_93  TNZACTR;  /* OPERATORS - mode -> union mode */
A68_93  WNZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  XNZACTR;  /* YIELD */
A68_93  YNZACTR;  /* OPERATORS - mode -> union mode */
A68_92  ZNZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(esac);
 /* line 398: */
 /* line 399: */
{ 
FNZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 400: */
GNZACTR_resultmode = (*(&(Answer.Value->Mode)));
 /* line 402: */
 /* line 403: */
 /* line 404: */
if ( !Outpart )
{ 
 /* line 405: */
 /* line 407: */
if ( ((GNZACTR_resultmode==UEAACTR_voidmode)&EQIACTR_skipoption) )
{ 
 /* line 410: */
/*SKIP*/;
} 
else
{ 
MMZACTR_out();
 /* line 411: */
KNZACTR = INZACTR ;
MDMACTR_writecstream(A_HVEC(LNZACTR,A_UNITE(JNZACTR,mode2,2,KNZACTR),A68_93 ), FNZACTR_codestream);
 /* line 412: */
 /* line 413: */
 /* line 414: */
MDMACTR_writecstream(A_HVEC(NNZACTR,A_UNITE(MNZACTR,mode4,4,EIAACTR_cnewline),A68_93 ), FNZACTR_codestream);
} 
} 
 /* line 415: */
 /* line 416: */
SNZACTR = QNZACTR ;
ONZACTR.data[0] = A_UNITE(RNZACTR,mode2,2,SNZACTR);
ONZACTR.data[1] = A_UNITE(TNZACTR,mode4,4,EIAACTR_cnewline);
XNZACTR = VNZACTR ;
ONZACTR.data[2] = A_UNITE(WNZACTR,mode2,2,XNZACTR);
ONZACTR.data[3] = A_UNITE(YNZACTR,mode4,4,EIAACTR_cnewline);
 /* line 418: */
 /* line 419: */
MDMACTR_writecstream(A_HISVEC(ZNZACTR,ONZACTR,4,A68_93 ), FNZACTR_codestream);
} 
A_PROC_EXIT(esac);
return;
} 
#undef NL

A68_VOID  EOZACTR_fi(A68_BOOL  Elsepart, A68_109  Answer)
{ 
A68_INT  FOZACTR_codestream;
A68_INT  GOZACTR_resultmode;
A68_224  HOZACTR;  /* collateral clause result */
A68_93  KOZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  LOZACTR;  /* YIELD */
A68_93  MOZACTR;  /* OPERATORS - mode -> union mode */
A68_92  NOZACTR;  /* OPERATORS - istruct -> vector */
A68_224  OOZACTR;  /* collateral clause result */
A68_93  ROZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  SOZACTR;  /* YIELD */
A68_93  TOZACTR;  /* OPERATORS - mode -> union mode */
A68_92  UOZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(fi);
 /* line 424: */
 /* line 425: */
{ 
FOZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 426: */
GOZACTR_resultmode = (*(&(Answer.Value->Mode)));
 /* line 427: */
 /* line 428: */
if ( !Elsepart )
{ 
 /* line 429: */
 /* line 431: */
if ( !(GOZACTR_resultmode==UEAACTR_voidmode) )
{ 
HIZACTR_else();
 /* line 432: */
LOZACTR = JOZACTR ;
HOZACTR.data[0] = A_UNITE(KOZACTR,mode2,2,LOZACTR);
HOZACTR.data[1] = A_UNITE(MOZACTR,mode4,4,EIAACTR_cnewline);
MDMACTR_writecstream(A_HISVEC(NOZACTR,HOZACTR,2,A68_93 ), FOZACTR_codestream);
 /* line 433: */
 /* line 434: */
 /* line 435: */
JXIACTR_warning(316);
} 
} 
 /* line 436: */
SOZACTR = QOZACTR ;
OOZACTR.data[0] = A_UNITE(ROZACTR,mode2,2,SOZACTR);
OOZACTR.data[1] = A_UNITE(TOZACTR,mode4,4,EIAACTR_cnewline);
 /* line 437: */
MDMACTR_writecstream(A_HISVEC(UOZACTR,OOZACTR,2,A68_93 ), FOZACTR_codestream);
} 
A_PROC_EXIT(fi);
return;
} 
#undef NL
 /* line 447: */

A68_VOID  XOZACTR_optboolwarning(A68_BOOL  Orel, A68_94 * Operand1)
{ 
A68_INT  YOZACTR_codestream;
A68_VC  ZOZACTR;  /* clause result */
A68_VC  APZACTR;  /* avoid structure result */
A68_98  EPZACTR;  /* avoid structure result */
A68_98  CPZACTR_temp;
A68_230  FPZACTR;  /* collateral clause result */
A68_VC  GPZACTR;  /* OPERATORS - istruct -> vector */
A68_75  HPZACTR;  /* OPERATORS - istruct -> vector */
A68_93  IPZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JPZACTR;  /* YIELD */
A68_93  MPZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  NPZACTR;  /* YIELD */
A68_VC  OPZACTR;  /* avoid structure result */
A68_93  PPZACTR;  /* OPERATORS - mode -> union mode */
A68_93  QPZACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  RPZACTR;  /* YIELD */
A68_93  SPZACTR;  /* OPERATORS - mode -> union mode */
A68_92  TPZACTR;  /* OPERATORS - istruct -> vector */
A68_95  UPZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  VPZACTR;  /* OPERATORS - istruct -> vector */
A68_75  WPZACTR;  /* OPERATORS - istruct -> vector */
A68_VC  XPZACTR_tester;
A68_230  YPZACTR;  /* collateral clause result */
A68_93  BQZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  CQZACTR;  /* YIELD */
A68_93  FQZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  GQZACTR;  /* YIELD */
A68_93  HQZACTR;  /* OPERATORS - mode -> union mode */
A68_93  KQZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  LQZACTR;  /* YIELD */
A68_93  MQZACTR;  /* OPERATORS - mode -> union mode */
A68_93  NQZACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  OQZACTR;  /* YIELD */
A68_92  PQZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(optboolwarning);
 /* line 448: */
 /* line 449: */
{ 
YOZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 450: */
A_CALLPROC(NXQACTR_evaluate,(Operand1),(Operand1,(NXQACTR_evaluate).nonlocals));
 /* line 451: */
 /* line 452: */
 /* line 453: */
 /* line 455: */
if ( IXPACTR_istemp(Operand1) )
{ 
 /* line 457: */
GZPACTR_getcfragment( Operand1, &APZACTR );
ZOZACTR = APZACTR;
} 
else
{ 
LLOACTR_declarectemporary( WEAACTR_boolmode, DPZACTR, &EPZACTR );
CPZACTR_temp = EPZACTR;
 /* line 458: */
 /* line 459: */
HPZACTR = (*(&((&CPZACTR_temp)->Name))) ;
JPZACTR = A_HISVEC(GPZACTR,HPZACTR,7,A68_CHAR ) ;
FPZACTR.data[0] = A_UNITE(IPZACTR,mode2,2,JPZACTR);
NPZACTR = LPZACTR ;
FPZACTR.data[1] = A_UNITE(MPZACTR,mode2,2,NPZACTR);
GZPACTR_getcfragment( Operand1, &OPZACTR );
FPZACTR.data[2] = A_UNITE(PPZACTR,mode2,2,OPZACTR);
 /* line 461: */
RPZACTR = ';' ;
FPZACTR.data[3] = A_UNITE(QPZACTR,mode1,1,RPZACTR);
FPZACTR.data[4] = A_UNITE(SPZACTR,mode4,4,EIAACTR_cnewline);
 /* line 462: */
MDMACTR_writecstream(A_HISVEC(TPZACTR,FPZACTR,5,A68_93 ), YOZACTR_codestream);
 /* line 465: */
BCZACTR_assignment((&(Operand1->Extra)), A_UNITE(UPZACTR,mode5,5,CPZACTR_temp));
 /* line 466: */
 /* line 467: */
WPZACTR = (*(&((&CPZACTR_temp)->Name))) ;
ZOZACTR = A_HISVEC(VPZACTR,WPZACTR,7,A68_CHAR );
} 
XPZACTR_tester = ZOZACTR;
 /* line 468: */
 /* line 469: */
if ( Orel )
{ 
CQZACTR = AQZACTR ;
YPZACTR.data[0] = A_UNITE(BQZACTR,mode2,2,CQZACTR);
} 
else
{ 
GQZACTR = EQZACTR ;
YPZACTR.data[0] = A_UNITE(FQZACTR,mode2,2,GQZACTR);
} 
YPZACTR.data[1] = A_UNITE(HQZACTR,mode2,2,XPZACTR_tester);
 /* line 470: */
LQZACTR = JQZACTR ;
YPZACTR.data[2] = A_UNITE(KQZACTR,mode2,2,LQZACTR);
 /* line 471: */
YPZACTR.data[3] = A_UNITE(MQZACTR,mode4,4,EIAACTR_cnewline);
OQZACTR = '{' ;
YPZACTR.data[4] = A_UNITE(NQZACTR,mode1,1,OQZACTR);
 /* line 472: */
 /* line 473: */
MDMACTR_writecstream(A_HISVEC(PQZACTR,YPZACTR,5,A68_93 ), YOZACTR_codestream);
} 
A_PROC_EXIT(optboolwarning);
return;
} 
#undef NL

A68_VOID  QQZACTR_optbooloper(void)
{ 
A68_224  RQZACTR;  /* collateral clause result */
A68_93  SQZACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  TQZACTR;  /* YIELD */
A68_93  UQZACTR;  /* OPERATORS - mode -> union mode */
A68_92  VQZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(optbooloper);
TQZACTR = '}' ;
RQZACTR.data[0] = A_UNITE(SQZACTR,mode1,1,TQZACTR);
RQZACTR.data[1] = A_UNITE(UQZACTR,mode4,4,EIAACTR_cnewline);
 /* line 478: */
MDMACTR_writecstream(A_HISVEC(VQZACTR,RQZACTR,2,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel()));
A_PROC_EXIT(optbooloper);
return;
} 
#undef NL
 /* line 493: */
 /* line 494: */
 /* line 495: */
 /* line 496: */

A68_VOID  ERZACTR_endseries(A68_207  Properties, A68_109  Answer, A68_85 * Endofseries, A68_BOOL  Discardlevelactivated, A68_BOOL  Pullstack, A68_BOOL  Seriescontainsexit)
{ 
A_PROC_ENTRY(endseries);
 /* line 497: */
 /* line 499: */
 /* line 500: */
 /* line 501: */
 /* line 502: */
 /* line 504: */
 /* line 505: */
QAZACTR_endclause(Properties, Answer.End, Endofseries, Discardlevelactivated, Pullstack);
A_PROC_EXIT(endseries);
return;
} 
#undef NL

A68_VOID  HRZACTR_semi(A68_BOOL  Outstandingdynamicresult, A68_BOOL  Declaration)
{ 
A_PROC_ENTRY(semi);
 /* line 508: */
 /* line 510: */
/*SKIP*/;
A_PROC_EXIT(semi);
return;
} 
#undef NL

A68_VOID  LRZACTR_exit(A68_BOOL  Dynamicresult, A68_BOOL  Firstexit, A68_109  Seriesanswer)
{ 
A68_221  ORZACTR;  /* collateral clause result */
A68_93  RRZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  SRZACTR;  /* YIELD */
A68_VC  TRZACTR;  /* OPERATORS - istruct -> vector */
A68_75  URZACTR;  /* OPERATORS - istruct -> vector */
A68_93  VRZACTR;  /* OPERATORS - mode -> union mode */
A68_VC  WRZACTR;  /* YIELD */
A68_93  XRZACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  YRZACTR;  /* YIELD */
A68_93  ZRZACTR;  /* OPERATORS - mode -> union mode */
A68_92  ASZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(exit);
 /* line 513: */
 /* line 515: */
{ 
WXIACTR_assert(NRZACTR, (Seriesanswer.End!=(A68_85 *)A68_NIL));
 /* line 516: */
 /* line 517: */
SRZACTR = QRZACTR ;
ORZACTR.data[0] = A_UNITE(RRZACTR,mode2,2,SRZACTR);
URZACTR = (*(&(Seriesanswer.End->Name))) ;
WRZACTR = A_HISVEC(TRZACTR,URZACTR,7,A68_CHAR ) ;
ORZACTR.data[1] = A_UNITE(VRZACTR,mode2,2,WRZACTR);
 /* line 518: */
YRZACTR = ';' ;
ORZACTR.data[2] = A_UNITE(XRZACTR,mode1,1,YRZACTR);
ORZACTR.data[3] = A_UNITE(ZRZACTR,mode4,4,EIAACTR_cnewline);
 /* line 519: */
 /* line 520: */
MDMACTR_writecstream(A_HISVEC(ASZACTR,ORZACTR,4,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel()));
} 
A_PROC_EXIT(exit);
return;
} 
#undef NL
 /* line 532: */
 /* line 534: */

A68_VOID  ESZACTR_codeinsert(A68_VC  Code, A68_INT  Mode, A68_101 * Visibles, A68_98  *ReturnedValue)
{ 
A68_98  FSZACTR_result;
A68_INT  GSZACTR_stream;
A68_205  JSZACTR_emitdefine;   /* proc value of non-global proc */
A68_76  YSZACTR_emitundefine;   /* proc value of non-global proc */
A68_248  KTZACTR_emitcode;   /* proc value of non-global proc */
A68_98  LUZACTR;  /* clause result */
A_PROC_ENTRY(codeinsert);
 /* line 535: */
 /* line 536: */
{ 
 /* line 537: */
GSZACTR_stream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 539: */
A_CLOSURE( JSZACTR_emitdefine, KSZACTR_emitdefine, LSZACTR_emitdefine );
(( LSZACTR_emitdefine * ) ( JSZACTR_emitdefine.nonlocals )) -> GSZACTR_stream = GSZACTR_stream;
 /* line 545: */
A_CLOSURE( YSZACTR_emitundefine, ZSZACTR_emitundefine, ATZACTR_emitundefine );
(( ATZACTR_emitundefine * ) ( YSZACTR_emitundefine.nonlocals )) -> GSZACTR_stream = GSZACTR_stream;
 /* line 551: */
A_CLOSURE( KTZACTR_emitcode, LTZACTR_emitcode, MTZACTR_emitcode );
(( MTZACTR_emitcode * ) ( KTZACTR_emitcode.nonlocals )) -> JSZACTR_emitdefine = JSZACTR_emitdefine;
(( MTZACTR_emitcode * ) ( KTZACTR_emitcode.nonlocals )) -> KTZACTR_emitcode = KTZACTR_emitcode;
(( MTZACTR_emitcode * ) ( KTZACTR_emitcode.nonlocals )) -> YSZACTR_emitundefine = YSZACTR_emitundefine;
(( MTZACTR_emitcode * ) ( KTZACTR_emitcode.nonlocals )) -> Mode = Mode;
(( MTZACTR_emitcode * ) ( KTZACTR_emitcode.nonlocals )) -> FSZACTR_result = (&FSZACTR_result);
(( MTZACTR_emitcode * ) ( KTZACTR_emitcode.nonlocals )) -> Code = Code;
(( MTZACTR_emitcode * ) ( KTZACTR_emitcode.nonlocals )) -> GSZACTR_stream = GSZACTR_stream;
 /* line 586: */
A_CALLPROC(KTZACTR_emitcode,(Visibles),(Visibles,(KTZACTR_emitcode).nonlocals));
 /* line 587: */
 /* line 588: */
LUZACTR = FSZACTR_result;
} 
A_PROC_EXIT(codeinsert);
*ReturnedValue = (LUZACTR);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 6: */
void CAZACTR(void)   /* initialise DECS clauses */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel","-dir",".","clauses.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/vak/Project/Algol/Algol-68RS-Source/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/vak/Project/Algol/Algol-68RS-Source/a68config/a68config.m","./incimperatives.m","./unionaids.m","./modes.m","./incmode.m","./evaluator.m","./tracer.m","./moduletracer.m","./idtable.m","./values.m","./coutput.m","./centities.m","./environment.m","./environ.m","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_60  BNZACTR;  /* procedure value */
A68_241  BOZACTR;  /* procedure value */
A68_208  XQZACTR;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
UAAACTR();   /* USE incimperatives */
HUQACTR();   /* USE unionaids */
DNMACTR();   /* USE modes */
ZDAACTR();   /* USE incmode */
LFVACTR();   /* USE evaluator */
IVYACTR();   /* USE tracer */
BCHACTR();   /* USE moduletracer */
PPKACTR();   /* USE idtable */
AUPACTR();   /* USE values */
PTLACTR();   /* USE coutput */
THAACTR();   /* USE centities */
HPIACTR();   /* USE environment */
BPLACTR();   /* USE environ */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/clauses.a68";
A_config.translation_time = "Thu Nov  5 20:46:57 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "BAZACTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 20:46:57 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS clauses);
UEAALIB_a68config(LGAALIB_configinfo, GAZACTR);
 /* line 51: */
 /* line 52: */
 /* line 54: */
 /* line 55: */
 /* line 69: */
 /* line 70: */
 /* line 85: */
 /* line 91: */
 /* line 133: */
 /* line 187: */
 /* line 188: */
 /* line 210: */
 /* line 215: */
 /* line 216: */
 /* line 247: */
 /* line 248: */
 /* line 279: */
 /* line 280: */
 /* line 303: */
 /* line 317: */
 /* line 318: */
 /* line 320: */
 /* line 325: */
 /* line 340: */
 /* line 341: */
 /* line 362: */
 /* line 371: */
 /* line 372: */
 /* line 386: */
 /* line 387: */
 /* line 388: */
 /* line 395: */
BNZACTR.fn.fn_global = MMZACTR_out;
BNZACTR.nonlocals = A68_NIL;
ANZACTR_outu = (BNZACTR);
 /* line 397: */
 /* line 421: */
BOZACTR.fn.fn_global = ENZACTR_esac;
BOZACTR.nonlocals = A68_NIL;
AOZACTR_esacu = (BOZACTR);
 /* line 423: */
 /* line 444: */
 /* line 445: */
 /* line 475: */
 /* line 476: */
 /* line 477: */
 /* line 485: */
 /* line 489: */
XQZACTR.fn.fn_global = KAZACTR_startclause;
XQZACTR.nonlocals = A68_NIL;
WQZACTR_startseries = (XQZACTR);
 /* line 491: */
 /* line 492: */
 /* line 507: */
 /* line 512: */
 /* line 528: */
 /* line 529: */
 /* line 590: */
 /* line 592: */
 /* line 605: */
/*SKIP*/;
A_PROC_EXIT(DECS clauses);
} 
#undef NL
/* end of translation of clauses.a68 */
