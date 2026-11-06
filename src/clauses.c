/* UNAME:SCZACTR */
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

A_PROCEDURE(A68_VOID ,A68t232,(struct A68t55 ),(struct A68t55 ,void *));
typedef struct A68t232  A68_232 ;    /* PROC(MODE55) VOID */
A_ISTRUCT(A68_CHAR ,10,A68t233);
typedef struct A68t233  A68_233 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(struct A68t93 ,6,A68t234);
typedef struct A68t234  A68_234 ;    /* STRUCT 6 MODE93 */
A_ISTRUCT(A68_CHAR ,9,A68t235);
typedef struct A68t235  A68_235 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t236);
typedef struct A68t236  A68_236 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(struct A68t93 ,8,A68t237);
typedef struct A68t237  A68_237 ;    /* STRUCT 8 MODE93 */

A_PROCEDURE(A68_VOID ,A68t238,(struct A68t154 ,struct A68t94 *,struct A68t77 ),(struct A68t154 ,struct A68t94 *,struct A68t77 ,void *));
typedef struct A68t238  A68_238 ;    /* PROC(MODE154,REF MODE94,REF MODE77) VOID */
A_ISTRUCT(A68_CHAR ,35,A68t239);
typedef struct A68t239  A68_239 ;    /* STRUCT 35 CHAR */
A_ISTRUCT(struct A68t93 ,7,A68t240);
typedef struct A68t240  A68_240 ;    /* STRUCT 7 MODE93 */
A_ISTRUCT(A68_CHAR ,6,A68t241);
typedef struct A68t241  A68_241 ;    /* STRUCT 6 CHAR */

A_PROCEDURE(A68_VOID ,A68t242,(A68_BOOL ,struct A68t109 ),(A68_BOOL ,struct A68t109 ,void *));
typedef struct A68t242  A68_242 ;    /* PROC(BOOL,MODE109) VOID */
A_ISTRUCT(A68_CHAR ,12,A68t243);
typedef struct A68t243  A68_243 ;    /* STRUCT 12 CHAR */

A_PROCEDURE(A68_VOID ,A68t244,(A68_BOOL ,struct A68t94 *),(A68_BOOL ,struct A68t94 *,void *));
typedef struct A68t244  A68_244 ;    /* PROC(BOOL,REF MODE94) VOID */
A_ISTRUCT(A68_CHAR ,14,A68t245);
typedef struct A68t245  A68_245 ;    /* STRUCT 14 CHAR */

A_PROCEDURE(A68_VOID ,A68t246,(struct A68t207 ,struct A68t109 ,struct A68t85 *,A68_BOOL ,A68_BOOL ,A68_BOOL ),(struct A68t207 ,struct A68t109 ,struct A68t85 *,A68_BOOL ,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t246  A68_246 ;    /* PROC(MODE207,MODE109,REF MODE85,BOOL,BOOL,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t247,(A68_BOOL ,A68_BOOL ,struct A68t109 ),(A68_BOOL ,A68_BOOL ,struct A68t109 ,void *));
typedef struct A68t247  A68_247 ;    /* PROC(BOOL,BOOL,MODE109) VOID */

A_PROCEDURE(A68_VOID ,A68t248,(A68_VC ,A68_INT ,struct A68t101 *,struct A68t98 *),(A68_VC ,A68_INT ,struct A68t101 *,struct A68t98 *,void *));
typedef struct A68t248  A68_248 ;    /* PROC(MODE26,INT,REF MODE101) MODE98 */

A_PROCEDURE(A68_VOID ,A68t249,(struct A68t101 *),(struct A68t101 *,void *));
typedef struct A68t249  A68_249 ;    /* PROC(REF MODE101) VOID */
A_ISTRUCT(A68_CHAR ,20,A68t250);
typedef struct A68t250  A68_250 ;    /* STRUCT 20 CHAR */

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
extern A68_VOID  EXQACTR_uniontouniontable(struct A68t172 ,struct A68t172 ,A68_VC *);
/* --- End of imports from unionaids --- */


/* --- Imports from modes --- */
extern A68_171  YVMACTR_constituents;
extern A68_VOID  QMOACTR_declarectemporary(A68_INT ,A68_VC ,A68_98 *);
extern A68_VOID  WCNACTR_modename(A68_INT ,A68_VC *);
extern A68_INT  HCNACTR_finddeflexmode(A68_INT );
/* --- End of imports from modes --- */


/* --- Imports from incmode --- */
#define WEAACTR_boolmode 7
#define UEAACTR_voidmode 5
/* --- End of imports from incmode --- */


/* --- Imports from evaluator --- */
extern A68_141  JHVACTR_calltrace;
extern A68_115  JYQACTR_evaluate;
extern A68_VOID  SMVACTR_evaluatestack(struct A68t101 **);
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
extern A68_BOOL  EYPACTR_isskip(struct A68t94 *);
extern A68_BOOL  WXPACTR_istemp(struct A68t94 *);
extern A68_VOID  DAQACTR_getcfragment(struct A68t94 *,A68_VC *);
extern A68_101 * MKJACTR_nilvaluelist;
extern A68_94 * RQQACTR_yield(A68_VC ,struct A68t94 *);
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
extern void DVQACTR(void);   /* unionaids */
extern void DNMACTR(void);   /* modes */
extern void ZDAACTR(void);   /* incmode */
extern void VGVACTR(void);   /* evaluator */
extern void ZXYACTR(void);   /* tracer */
extern void BCHACTR(void);   /* moduletracer */
extern void PPKACTR(void);   /* idtable */
extern void OUPACTR(void);   /* values */
extern void PTLACTR(void);   /* coutput */
extern void THAACTR(void);   /* centities */
extern void HPIACTR(void);   /* environment */
extern void BPLACTR(void);   /* environ */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_206   WCZACTR = {"$Id: clauses.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,XCZACTR,WCZACTR,57)
static A68_210   TDZACTR = {"evaluate no result: mode of value not void"}; 
A_GISVEC(A68_VC ,UDZACTR,TDZACTR,42)
static A68_211   VDZACTR = {""}; 
A_GISVEC(A68_VC ,XDZACTR,VDZACTR,0)
static A68_211   MEZACTR = {""}; 
A_GISVEC(A68_VC ,OEZACTR,MEZACTR,0)
static A68_75   REZACTR = {"(void)("}; 
A_GISVEC(A68_VC ,SEZACTR,REZACTR,7)
static A68_75   BFZACTR = {"clauses"}; 
A_GISVEC(A68_VC ,CFZACTR,BFZACTR,7)
static A68_214   KFZACTR = {"clause result"}; 
A_GISVEC(A68_VC ,TFZACTR,KFZACTR,13)
static A68_217   CGZACTR = {"evaluate result: unknown value OF answer"}; 
A_GISVEC(A68_VC ,DGZACTR,CGZACTR,40)
static A68_211   EGZACTR = {""}; 
A_GISVEC(A68_VC ,FGZACTR,EGZACTR,0)
static A68_218   IGZACTR = {"evaluate result: value of value stack has incorrect mode"}; 
A_GISVEC(A68_VC ,JGZACTR,IGZACTR,56)
static A68_219   KGZACTR = {"; "}; 
A_GISVEC(A68_VC ,LGZACTR,KGZACTR,2)
static A68_220   RGZACTR = {" = "}; 
A_GISVEC(A68_VC ,SGZACTR,RGZACTR,3)
static A68_222   GHZACTR = {"evaluate simple enquiry: value of value stack has incorrect mode"}; 
A_GISVEC(A68_VC ,HHZACTR,GHZACTR,64)
static A68_219   OHZACTR = {"{ "}; 
A_GISVEC(A68_VC ,PHZACTR,OHZACTR,2)
static A68_226   AIZACTR = {"clauses: end: end of clause label not set"}; 
A_GISVEC(A68_VC ,BIZACTR,AIZACTR,41)
static A68_220   HIZACTR = {": ;"}; 
A_GISVEC(A68_VC ,IIZACTR,HIZACTR,3)
static A68_219   OIZACTR = {"} "}; 
A_GISVEC(A68_VC ,PIZACTR,OIZACTR,2)
static A68_228   CJZACTR = {"A_ERROR(\"Bad case conformity - two choices for mode\");"}; 
A_GISVEC(A68_VC ,DJZACTR,CJZACTR,54)
static A68_229   KJZACTR = {"case "}; 
A_GISVEC(A68_VC ,LJZACTR,KJZACTR,5)
static A68_219   QJZACTR = {": "}; 
A_GISVEC(A68_VC ,RJZACTR,QJZACTR,2)
static A68_220   UJZACTR = {"/* "}; 
static A68_220   VJZACTR = {" */"}; 
A_GISVEC(A68_VC ,WJZACTR,UJZACTR,3)
A_GISVEC(A68_VC ,YJZACTR,VJZACTR,3)
static A68_211   BKZACTR = {""}; 
A_GISVEC(A68_VC ,CKZACTR,BKZACTR,0)
static A68_233   MMZACTR = {"A_ENQ_SKIP"}; 
A_GISVEC(A68_VC ,OMZACTR,MMZACTR,10)
static A68_40   TMZACTR = {"if ("}; 
A_GISVEC(A68_VC ,UMZACTR,TMZACTR,4)
static A68_219   BNZACTR = {"{ "}; 
A_GISVEC(A68_VC ,CNZACTR,BNZACTR,2)
static A68_219   JNZACTR = {"} "}; 
A_GISVEC(A68_VC ,KNZACTR,JNZACTR,2)
static A68_40   ONZACTR = {"else"}; 
A_GISVEC(A68_VC ,PNZACTR,ONZACTR,4)
static A68_219   TNZACTR = {"{ "}; 
A_GISVEC(A68_VC ,UNZACTR,TNZACTR,2)
static A68_233   BOZACTR = {"A_ENQ_SKIP"}; 
A_GISVEC(A68_VC ,DOZACTR,BOZACTR,10)
static A68_235   HOZACTR = {"switch ( "}; 
A_GISVEC(A68_VC ,IOZACTR,HOZACTR,9)
static A68_219   MOZACTR = {" )"}; 
A_GISVEC(A68_VC ,NOZACTR,MOZACTR,2)
static A68_219   ROZACTR = {"{ "}; 
A_GISVEC(A68_VC ,SOZACTR,ROZACTR,2)
static A68_236   WOZACTR = {"case 1: "}; 
A_GISVEC(A68_VC ,XOZACTR,WOZACTR,8)
static A68_239   GPZACTR = {"united object - for case conformity"}; 
A_GISVEC(A68_VC ,HPZACTR,GPZACTR,35)
static A68_235   MPZACTR = {"switch ( "}; 
A_GISVEC(A68_VC ,NPZACTR,MPZACTR,9)
static A68_229   RPZACTR = {".mode"}; 
A_GISVEC(A68_VC ,SPZACTR,RPZACTR,5)
static A68_219   VPZACTR = {" )"}; 
A_GISVEC(A68_VC ,WPZACTR,VPZACTR,2)
static A68_219   AQZACTR = {"{ "}; 
A_GISVEC(A68_VC ,BQZACTR,AQZACTR,2)
static A68_241   JQZACTR = {"break;"}; 
A_GISVEC(A68_VC ,KQZACTR,JQZACTR,6)
static A68_229   OQZACTR = {"case "}; 
A_GISVEC(A68_VC ,PQZACTR,OQZACTR,5)
static A68_219   UQZACTR = {": "}; 
A_GISVEC(A68_VC ,VQZACTR,UQZACTR,2)
static A68_241   GRZACTR = {"break;"}; 
A_GISVEC(A68_VC ,HRZACTR,GRZACTR,6)
static A68_241   PRZACTR = {"break;"}; 
A_GISVEC(A68_VC ,QRZACTR,PRZACTR,6)
static A68_235   URZACTR = {"default: "}; 
A_GISVEC(A68_VC ,VRZACTR,URZACTR,9)
A68_60  ASZACTR_outu A_UNUSED;
static A68_243   HSZACTR = {"A_IMP_SKIP ;"}; 
A_GISVEC(A68_VC ,ISZACTR,HSZACTR,12)
static A68_241   PSZACTR = {"break;"}; 
A_GISVEC(A68_VC ,QSZACTR,PSZACTR,6)
static A68_219   USZACTR = {"} "}; 
A_GISVEC(A68_VC ,VSZACTR,USZACTR,2)
A68_242  ATZACTR_esacu A_UNUSED;
static A68_243   ITZACTR = {"A_IMP_SKIP ;"}; 
A_GISVEC(A68_VC ,JTZACTR,ITZACTR,12)
static A68_219   PTZACTR = {"} "}; 
A_GISVEC(A68_VC ,QTZACTR,PTZACTR,2)
static A68_245   BUZACTR = {"optbool result"}; 
A_GISVEC(A68_VC ,DUZACTR,BUZACTR,14)
static A68_220   KUZACTR = {" = "}; 
A_GISVEC(A68_VC ,LUZACTR,KUZACTR,3)
static A68_75   ZUZACTR = {"if ( ! "}; 
A_GISVEC(A68_VC ,AVZACTR,ZUZACTR,7)
static A68_229   DVZACTR = {"if ( "}; 
A_GISVEC(A68_VC ,EVZACTR,DVZACTR,5)
static A68_219   IVZACTR = {" )"}; 
A_GISVEC(A68_VC ,JVZACTR,IVZACTR,2)
A68_208  WVZACTR_startseries A_UNUSED;
static A68_210   MWZACTR = {"clauses: exit: end of series label not set"}; 
A_GISVEC(A68_VC ,NWZACTR,MWZACTR,42)
static A68_229   PWZACTR = {"goto "}; 
A_GISVEC(A68_VC ,QWZACTR,PWZACTR,5)
static A68_236   NXZACTR = {"#define "}; 
A_GISVEC(A68_VC ,OXZACTR,NXZACTR,8)
static A68_75   CYZACTR = {"#undef "}; 
A_GISVEC(A68_VC ,DYZACTR,CYZACTR,7)
static A68_250   XYZACTR = {"yield of code insert"}; 
A_GISVEC(A68_VC ,YYZACTR,XYZACTR,20)
static A68_241   AZZACTR = {"RESULT"}; 
A_GISVEC(A68_VC ,DZZACTR,AZZACTR,6)
static A68_241   JZZACTR = {"RESULT"}; 
A_GISVEC(A68_VC ,KZZACTR,JZZACTR,6)
typedef struct   /* env of non-global proc */
{
A68_VC  ZDZACTR_f;
} CEZACTR_isident;
typedef struct   /* env of non-global proc */
{
A68_INT * YKZACTR_lo;
A68_INT * ZKZACTR_hi;
A68_VC  XKZACTR_f;
} DLZACTR_scan;
typedef struct   /* env of non-global proc */
{
A68_INT * ZKZACTR_hi;
A68_INT * YKZACTR_lo;
A68_VC  XKZACTR_f;
A68_232  BLZACTR_scan;
} NLZACTR_whollybracketed;
typedef struct   /* env of non-global proc */
{
A68_BOOL * WLZACTR_assignment;
A68_INT * YKZACTR_lo;
A68_INT * ZKZACTR_hi;
A68_VC  XKZACTR_f;
} AMZACTR_anonymous;
typedef struct   /* env of non-global proc */
{
A68_INT  GXZACTR_stream;
A_PAD_INT(PAD_115)
} LXZACTR_emitdefine;
typedef struct   /* env of non-global proc */
{
A68_INT  GXZACTR_stream;
A_PAD_INT(PAD_116)
} AYZACTR_emitundefine;
typedef struct   /* env of non-global proc */
{
A68_205  JXZACTR_emitdefine;
A68_249  KYZACTR_emitcode;
A68_76  YXZACTR_emitundefine;
A68_INT  Mode;
A_PAD_INT(PAD_117)
A68_98 * FXZACTR_result;
A68_VC  Code;
A68_INT  GXZACTR_stream;
A_PAD_INT(PAD_118)
} MYZACTR_emitcode;
typedef struct   /* env of non-global proc */
{
A68_INT * QLZACTR_firstclose;
} ULZACTR_anonymous;

A68_VOID  BDZACTR_startclause(A68_207  Properties, A68_85 ** Endofclause, A68_BOOL * Discardlevelactivated);

A68_VOID  HDZACTR_endclause(A68_207  Properties, A68_85 * Endofanswer, A68_85 * Endofclause, A68_BOOL  Discardlevelactivated, A68_BOOL  Pullstack);

A_STATIC A68_BOOL  KDZACTR_cf(A68_INT  M1, A68_INT  M2);

A68_VOID  NDZACTR_evaluatenoresult(A68_101 ** Valuestack);

A_STATIC A68_BOOL  BEZACTR_isident(void *NonLocals);

A68_VOID  GFZACTR_evaluateresult(A68_101 ** Valuestack, A68_109  Answer);

A_STATIC A68_95 * NFZACTR_assignment(A68_95 * LFZACTR_anonymous, A68_95  MFZACTR_anonymous);

A68_VOID  EHZACTR_evaluatesimpleenquiry(A68_101 ** Valuestack, A68_109  Answer);

A68_VOID  MHZACTR_begin(A68_BOOL  Seriescontainslabel, A68_BOOL  Routinebody);

A68_VOID  YHZACTR_end(A68_BOOL  Dynamicresult, A68_BOOL  Seriescontainsexit, A68_BOOL  Routinebody, A68_85 * Endofclauselabel);

A_STATIC A68_VOID  XIZACTR_outputcaseulabel(A68_INT  Mode, A68_INT  Casenumber, A68_77  Case);

A_STATIC A68_VOID  KKZACTR_subunionchoice(A68_154  Uchoice, A68_94  Union, A68_77  Case);

A_STATIC A68_VOID  WKZACTR_condition(A68_VC  Frag, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  CLZACTR_scan(A68_55  Attop, void *NonLocals);

A_STATIC A68_BOOL  MLZACTR_whollybracketed(void *NonLocals);

A_STATIC A68_BOOL  TLZACTR_anonymous(A68_INT  I, void *NonLocals);

A_STATIC A68_BOOL  ZLZACTR_anonymous(A68_INT  I, void *NonLocals);

A68_VOID  LMZACTR_then(A68_94 * Enquiry);

A68_VOID  HNZACTR_else(void);

A68_VOID  AOZACTR_casein(A68_94 * Enquiry);

A68_VOID  FPZACTR_inu(A68_154  Uchoice, A68_94 * Union, A68_77  Case);

A68_VOID  HQZACTR_comma(A68_INT  Caseno);

A68_VOID  DRZACTR_commau(A68_154  Uchoice, A68_94  Union, A68_77  Case);

A68_VOID  MRZACTR_out(void);

A68_VOID  ESZACTR_esac(A68_BOOL  Outpart, A68_109  Answer);

A68_VOID  ETZACTR_fi(A68_BOOL  Elsepart, A68_109  Answer);

A68_VOID  XTZACTR_optboolwarning(A68_BOOL  Orel, A68_94 * Operand1);

A68_VOID  QVZACTR_optbooloper(void);

A68_VOID  EWZACTR_endseries(A68_207  Properties, A68_109  Answer, A68_85 * Endofseries, A68_BOOL  Discardlevelactivated, A68_BOOL  Pullstack, A68_BOOL  Seriescontainsexit);

A68_VOID  HWZACTR_semi(A68_BOOL  Outstandingdynamicresult, A68_BOOL  Declaration);

A68_VOID  LWZACTR_exit(A68_BOOL  Dynamicresult, A68_BOOL  Firstexit, A68_109  Seriesanswer);

A68_VOID  EXZACTR_codeinsert(A68_VC  Code, A68_INT  Mode, A68_101 * Visibles, A68_98  *ReturnedValue);

A_STATIC A68_VOID  KXZACTR_emitdefine(A68_VC  Symbol, A68_VC  Text, void *NonLocals);

A_STATIC A68_VOID  ZXZACTR_emitundefine(A68_VC  Symbol, void *NonLocals);

A_STATIC A68_VOID  LYZACTR_emitcode(A68_101 * List, void *NonLocals);

A_STATIC A68_BOOL  TLZACTR_anonymous(A68_INT  I, void *NonLocals)
#define NL(x) (((ULZACTR_anonymous *)NonLocals)->x)
{ 
A68_BOOL  VLZACTR;  /* clause result */
{ 
(*A_NILCHECK(NL(QLZACTR_firstclose))) = I;
VLZACTR = A68_FALSE;
} 
return( VLZACTR );
} 
#undef NL

A_STATIC A68_BOOL  BEZACTR_isident(void *NonLocals)
#define NL(x) (((CEZACTR_isident *)NonLocals)->x)
{ 
A68_BOOL  DEZACTR_ok A_UNUSED = {0};
A68_INT  EEZACTR_i A_UNUSED = {0};
A68_INT  FEZACTR;  /* to part of loop */
A68_CHAR  GEZACTR_c A_UNUSED = {0};
A68_BOOL  HEZACTR;  /* optbool result */
A68_BOOL  IEZACTR;  /* optbool result */
A68_BOOL  JEZACTR;  /* optbool result */
A68_BOOL  KEZACTR;  /* optbool result */
A68_BOOL  LEZACTR;  /* clause result */
A_PROC_ENTRY(isident);
{ 
DEZACTR_ok = (NL(ZDZACTR_f).upb>0);
 /* line 126: */
FEZACTR = NL(ZDZACTR_f).upb;
for ( EEZACTR_i = 1;
EEZACTR_i <= FEZACTR;
EEZACTR_i += 1 )
{ 
 /* line 127: */
if ( !(DEZACTR_ok) ) break;
GEZACTR_c = A_VINDEX(NL(ZDZACTR_f),EEZACTR_i);
 /* line 128: */
HEZACTR = (GEZACTR_c=='_');
if ( ! HEZACTR )
{IEZACTR = (GEZACTR_c>='a');
if ( IEZACTR )
{IEZACTR = (GEZACTR_c<='z');
}
 /* line 129: */
HEZACTR = IEZACTR;
}
if ( ! HEZACTR )
{JEZACTR = (GEZACTR_c>='A');
if ( JEZACTR )
{JEZACTR = (GEZACTR_c<='Z');
}
 /* line 130: */
HEZACTR = JEZACTR;
}
if ( ! HEZACTR )
{KEZACTR = (GEZACTR_c>='0');
if ( KEZACTR )
{KEZACTR = (GEZACTR_c<='9');
}
 /* line 131: */
HEZACTR = KEZACTR;
}
DEZACTR_ok = HEZACTR;
}
 /* line 132: */
 /* line 133: */
LEZACTR = DEZACTR_ok;
} 
A_PROC_EXIT(isident);
return( LEZACTR );
} 
#undef NL

A_STATIC A68_95 * NFZACTR_assignment(A68_95 * LFZACTR_anonymous, A68_95  MFZACTR_anonymous)
{ 
A68_95  OFZACTR;  /* united object - for case conformity */
A68_VC  PFZACTR_anonymous A_UNUSED = {0};
A68_VC  QFZACTR;  /* OPERATORS - copy to flex */
A68_216 * RFZACTR;  /* YIELD */
A68_95 * SFZACTR;  /* clause result */
{ 
(*A_NILCHECK(LFZACTR_anonymous)) = MFZACTR_anonymous;
OFZACTR = MFZACTR_anonymous ;
switch ( OFZACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
PFZACTR_anonymous = (OFZACTR.data.mode6);
RFZACTR = &(LFZACTR_anonymous-> data.mode6) ;
(void)((*A_NILCHECK(RFZACTR)) = A_VCOPY(PFZACTR_anonymous,QFZACTR,A68_CHAR ));
break;
default: 
/*SKIP*/;
break;
} 
SFZACTR = LFZACTR_anonymous;
} 
return( SFZACTR );
} 
#undef NL

A_STATIC A68_VOID  CLZACTR_scan(A68_55  Attop, void *NonLocals)
#define NL(x) (((DLZACTR_scan *)NonLocals)->x)
{ 
A68_INT  ELZACTR_d A_UNUSED = {0};
A68_INT  FLZACTR_i A_UNUSED = {0};
A68_CHAR  GLZACTR_q A_UNUSED = {0};
A68_CHAR  HLZACTR_c A_UNUSED = {0};
A68_BOOL  ILZACTR;  /* optbool result */
A68_BOOL  JLZACTR;  /* optbool result */
A68_BOOL  KLZACTR;  /* optbool result */
A_PROC_ENTRY(scan);
 /* line 334: */
 /* line 335: */
{ 
ELZACTR_d = 0;
FLZACTR_i = (*A_NILCHECK(NL(YKZACTR_lo)));
 /* line 336: */
GLZACTR_q = ' ';
 /* line 337: */
for ( ;; )
{ 
 /* line 338: */
if ( !((FLZACTR_i<=(*A_NILCHECK(NL(ZKZACTR_hi))))) ) break;
HLZACTR_c = A_VINDEX(NL(XKZACTR_f),FLZACTR_i);
 /* line 339: */
 /* line 340: */
if (GLZACTR_q!=' ')
{ 
if (HLZACTR_c=='\\')
{ 
FLZACTR_i+=1;
} 
else
{ 
if (HLZACTR_c==GLZACTR_q)
{ 
 /* line 341: */
GLZACTR_q = ' ';
} 
} 
} 
else
{ 
ILZACTR = (HLZACTR_c=='\'');
if ( ! ILZACTR )
{ /* line 342: */
ILZACTR = (HLZACTR_c=='\"');
}
if (ILZACTR)
{ 
 /* line 343: */
GLZACTR_q = HLZACTR_c;
} 
else
{ 
 /* line 344: */
if (HLZACTR_c=='(')
{ 
 /* line 345: */
ELZACTR_d+=1;
} 
else
{ 
 /* line 346: */
if (HLZACTR_c==')')
{ 
ELZACTR_d-=1;
 /* line 347: */
JLZACTR = (ELZACTR_d==0);
if ( JLZACTR )
{JLZACTR = (!A_CALLPROC(Attop,(FLZACTR_i),(FLZACTR_i,(Attop).nonlocals)));
}
if (JLZACTR)
{ 
 /* line 348: */
(void)(FLZACTR_i = (*A_NILCHECK(NL(ZKZACTR_hi))));
} 
} 
else
{ 
KLZACTR = (ELZACTR_d==0);
if ( KLZACTR )
{ /* line 349: */
KLZACTR = (!A_CALLPROC(Attop,(FLZACTR_i),(FLZACTR_i,(Attop).nonlocals)));
}
if (KLZACTR)
{ 
 /* line 350: */
(void)(FLZACTR_i = (*A_NILCHECK(NL(ZKZACTR_hi))));
} 
} 
} 
} 
} 
 /* line 351: */
 /* line 352: */
FLZACTR_i+=1;
}
 /* line 353: */
} 
A_PROC_EXIT(scan);
return;
} 
#undef NL

A_STATIC A68_BOOL  MLZACTR_whollybracketed(void *NonLocals)
#define NL(x) (((NLZACTR_whollybracketed *)NonLocals)->x)
{ 
A68_BOOL  OLZACTR;  /* optbool result */
A68_BOOL  PLZACTR;  /* clause result */
A68_INT  QLZACTR_firstclose A_UNUSED = {0};
A68_55  SLZACTR_anonymous;   /* proc value of non-global proc */
A_PROC_ENTRY(whollybracketed);
OLZACTR = (((*A_NILCHECK(NL(ZKZACTR_hi)))-(*A_NILCHECK(NL(YKZACTR_lo))))<1);
if ( ! OLZACTR )
{OLZACTR = (A_VINDEX(NL(XKZACTR_f),(*A_NILCHECK(NL(YKZACTR_lo))))!='(');
}
if ( ! OLZACTR )
{ /* line 356: */
OLZACTR = (A_VINDEX(NL(XKZACTR_f),(*A_NILCHECK(NL(ZKZACTR_hi))))!=')');
}
if (OLZACTR)
{ 
 /* line 357: */
 /* line 358: */
PLZACTR = A68_FALSE;
} 
else
{ 
QLZACTR_firstclose = 0;
 /* line 359: */
A_CLOSURE( SLZACTR_anonymous, TLZACTR_anonymous, ULZACTR_anonymous );
(( ULZACTR_anonymous * ) ( SLZACTR_anonymous.nonlocals )) -> QLZACTR_firstclose = (&QLZACTR_firstclose);
(void)(A_CALLPROC(NL(BLZACTR_scan),(SLZACTR_anonymous),(SLZACTR_anonymous,(NL(BLZACTR_scan)).nonlocals)));
 /* line 360: */
 /* line 361: */
PLZACTR = (QLZACTR_firstclose==(*A_NILCHECK(NL(ZKZACTR_hi))));
} 
A_PROC_EXIT(whollybracketed);
return( PLZACTR );
} 
#undef NL

A_STATIC A68_BOOL  ZLZACTR_anonymous(A68_INT  I, void *NonLocals)
#define NL(x) (((AMZACTR_anonymous *)NonLocals)->x)
{ 
A68_BOOL  BMZACTR;  /* optbool result */
A68_INT  CMZACTR;  /* YIELD */
A68_INT  DMZACTR;  /* YIELD */
A68_BOOL  EMZACTR;  /* clause result */
 /* line 365: */
{ 
BMZACTR = (I>(*A_NILCHECK(NL(YKZACTR_lo))));
if ( BMZACTR )
{BMZACTR = (I<(*A_NILCHECK(NL(ZKZACTR_hi))));
}
if ( BMZACTR )
{ /* line 366: */
BMZACTR = (A_VINDEX(NL(XKZACTR_f),I)=='=');
}
if ( BMZACTR )
{CMZACTR = (I-1) ;
BMZACTR = (A_VINDEX(NL(XKZACTR_f),CMZACTR)==' ');
}
if ( BMZACTR )
{DMZACTR = (I+1) ;
BMZACTR = (A_VINDEX(NL(XKZACTR_f),DMZACTR)==' ');
}
(*A_NILCHECK(NL(WLZACTR_assignment))) = BMZACTR;
 /* line 367: */
EMZACTR = (!(*A_NILCHECK(NL(WLZACTR_assignment))));
} 
return( EMZACTR );
} 
#undef NL

A_STATIC A68_VOID  KXZACTR_emitdefine(A68_VC  Symbol, A68_VC  Text, void *NonLocals)
#define NL(x) (((LXZACTR_emitdefine *)NonLocals)->x)
{ 
A68_230  MXZACTR;  /* collateral clause result */
A68_93  PXZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  QXZACTR;  /* YIELD */
A68_93  RXZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  SXZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  TXZACTR;  /* YIELD */
A68_93  UXZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  VXZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  WXZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(emitdefine);
 /* line 610: */
QXZACTR = OXZACTR ;
MXZACTR.data[0] = A_UNITE(PXZACTR,mode2,2,QXZACTR);
MXZACTR.data[1] = A_UNITE(RXZACTR,mode2,2,Symbol);
TXZACTR = ' ' ;
MXZACTR.data[2] = A_UNITE(SXZACTR,mode1,1,TXZACTR);
 /* line 611: */
MXZACTR.data[3] = A_UNITE(UXZACTR,mode2,2,Text);
MXZACTR.data[4] = A_UNITE(VXZACTR,mode4,4,EIAACTR_cnewline);
 /* line 612: */
(void)(MDMACTR_writecstream(A_HISVEC(WXZACTR,MXZACTR,5,A68_93 ), NL(GXZACTR_stream)));
A_PROC_EXIT(emitdefine);
return;
} 
#undef NL

A_STATIC A68_VOID  ZXZACTR_emitundefine(A68_VC  Symbol, void *NonLocals)
#define NL(x) (((AYZACTR_emitundefine *)NonLocals)->x)
{ 
A68_212  BYZACTR;  /* collateral clause result */
A68_93  EYZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  FYZACTR;  /* YIELD */
A68_93  GYZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  HYZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  IYZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(emitundefine);
 /* line 616: */
FYZACTR = DYZACTR ;
BYZACTR.data[0] = A_UNITE(EYZACTR,mode2,2,FYZACTR);
 /* line 617: */
BYZACTR.data[1] = A_UNITE(GYZACTR,mode2,2,Symbol);
BYZACTR.data[2] = A_UNITE(HYZACTR,mode4,4,EIAACTR_cnewline);
 /* line 618: */
(void)(MDMACTR_writecstream(A_HISVEC(IYZACTR,BYZACTR,3,A68_93 ), NL(GXZACTR_stream)));
A_PROC_EXIT(emitundefine);
return;
} 
#undef NL

A_STATIC A68_VOID  LYZACTR_emitcode(A68_101 * List, void *NonLocals)
#define NL(x) (((MYZACTR_emitcode *)NonLocals)->x)
{ 
A68_INT  NYZACTR_id A_UNUSED = {0};
A68_95  OYZACTR;  /* united object - for case conformity */
A68_97  PYZACTR_i A_UNUSED = {0};
A68_VC  QYZACTR;  /* avoid structure result */
A68_VC  RYZACTR;  /* avoid structure result */
A68_VC  SYZACTR;  /* avoid structure result */
A68_96  TYZACTR_r A_UNUSED = {0};
A68_VC  UYZACTR;  /* avoid structure result */
A68_VC  VYZACTR;  /* avoid structure result */
A68_VC  WYZACTR;  /* avoid structure result */
A68_98  ZYZACTR;  /* avoid structure result */
A68_VC  BZZACTR;  /* OPERATORS - istruct -> vector */
A68_75  CZZACTR;  /* OPERATORS - istruct -> vector */
A68_VC  EZZACTR;  /* avoid structure result */
A68_93  FZZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  GZZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_93  HZZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  IZZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(emitcode);
 /* line 621: */
 /* line 622: */
{ 
 /* line 623: */
if (List!=MKJACTR_nilvaluelist)
{ 
 /* line 624: */
 /* line 625: */
OYZACTR = (*A_NILCHECK((&(A_NILCHECK((&(A_NILCHECK(List)->Value)))->Extra)))) ;
switch ( OYZACTR.mode )
{ 
case 4: /* STRUCT(INT)  */
PYZACTR_i = (OYZACTR.data.mode4);
 /* line 626: */
{ 
NYZACTR_id = PYZACTR_i.Idno;
 /* line 627: */
UTKACTR_idfullname( NYZACTR_id, &QYZACTR );
LRKACTR_idname( NYZACTR_id, &RYZACTR );
(void)(A_CALLPROC(NL(JXZACTR_emitdefine),(RYZACTR, QYZACTR),(RYZACTR, QYZACTR,(NL(JXZACTR_emitdefine)).nonlocals)));
 /* line 628: */
(void)(A_CALLPROC(NL(KYZACTR_emitcode),((*A_NILCHECK((&(A_NILCHECK(List)->Rest))))),((*A_NILCHECK((&(A_NILCHECK(List)->Rest)))),(NL(KYZACTR_emitcode)).nonlocals)));
 /* line 629: */
 /* line 630: */
 /* line 631: */
LRKACTR_idname( NYZACTR_id, &SYZACTR );
(void)(A_CALLPROC(NL(YXZACTR_emitundefine),(SYZACTR),(SYZACTR,(NL(YXZACTR_emitundefine)).nonlocals)));
} 
break;
case 2: /* STRUCT(INT)  */
TYZACTR_r = (OYZACTR.data.mode2);
 /* line 632: */
{ 
NYZACTR_id = TYZACTR_r.Rdenno;
 /* line 633: */
UTKACTR_idfullname( NYZACTR_id, &UYZACTR );
LRKACTR_idname( NYZACTR_id, &VYZACTR );
(void)(A_CALLPROC(NL(JXZACTR_emitdefine),(VYZACTR, UYZACTR),(VYZACTR, UYZACTR,(NL(JXZACTR_emitdefine)).nonlocals)));
 /* line 634: */
(void)(A_CALLPROC(NL(KYZACTR_emitcode),((*A_NILCHECK((&(A_NILCHECK(List)->Rest))))),((*A_NILCHECK((&(A_NILCHECK(List)->Rest)))),(NL(KYZACTR_emitcode)).nonlocals)));
 /* line 635: */
 /* line 636: */
 /* line 637: */
LRKACTR_idname( NYZACTR_id, &WYZACTR );
(void)(A_CALLPROC(NL(YXZACTR_emitundefine),(WYZACTR),(WYZACTR,(NL(YXZACTR_emitundefine)).nonlocals)));
} 
break;
default: 
(void)(PXIACTR_error(902));
 /* line 638: */
 /* line 639: */
 /* line 640: */
(void)(A_CALLPROC(NL(KYZACTR_emitcode),((*A_NILCHECK((&(A_NILCHECK(List)->Rest))))),((*A_NILCHECK((&(A_NILCHECK(List)->Rest)))),(NL(KYZACTR_emitcode)).nonlocals)));
break;
} 
} 
else
{ 
 /* line 641: */
if (NL(Mode)!=UEAACTR_voidmode)
{ 
 /* line 644: */
QMOACTR_declarectemporary( NL(Mode), YYZACTR, &ZYZACTR );
(*A_NILCHECK(NL(FXZACTR_result))) = ZYZACTR;
 /* line 645: */
 /* line 646: */
CZZACTR = (*A_NILCHECK((&(A_NILCHECK(NL(FXZACTR_result))->Name)))) ;
(void)(A_CALLPROC(NL(JXZACTR_emitdefine),(DZZACTR, A_HISVEC(BZZACTR,CZZACTR,7,A68_CHAR )),(DZZACTR, A_HISVEC(BZZACTR,CZZACTR,7,A68_CHAR ),(NL(JXZACTR_emitdefine)).nonlocals)));
} 
 /* line 647: */
VJAACTR_curly( NL(Code), &EZZACTR );
(void)(MDMACTR_writecstream(A_HVEC(GZZACTR,A_UNITE(FZZACTR,mode2,2,EZZACTR),A68_93 ), NL(GXZACTR_stream)));
 /* line 648: */
(void)(MDMACTR_writecstream(A_HVEC(IZZACTR,A_UNITE(HZZACTR,mode4,4,EIAACTR_cnewline),A68_93 ), NL(GXZACTR_stream)));
 /* line 649: */
 /* line 650: */
if (NL(Mode)!=UEAACTR_voidmode)
{ 
 /* line 651: */
 /* line 652: */
 /* line 653: */
(void)(A_CALLPROC(NL(YXZACTR_emitundefine),(KZZACTR),(KZZACTR,(NL(YXZACTR_emitundefine)).nonlocals)));
} 
} 
} 
A_PROC_EXIT(emitcode);
return;
} 
#undef NL
 /* line 58: */
 /* line 60: */

A68_VOID  BDZACTR_startclause(A68_207  Properties, A68_85 ** Endofclause, A68_BOOL * Discardlevelactivated)
{ 
A_PROC_ENTRY(startclause);
 /* line 67: */
 /* line 69: */
/*SKIP*/;
A_PROC_EXIT(startclause);
return;
} 
#undef NL
 /* line 73: */
 /* line 74: */
 /* line 75: */

A68_VOID  HDZACTR_endclause(A68_207  Properties, A68_85 * Endofanswer, A68_85 * Endofclause, A68_BOOL  Discardlevelactivated, A68_BOOL  Pullstack)
{ 
A_PROC_ENTRY(endclause);
 /* line 83: */
 /* line 85: */
/*SKIP*/;
A_PROC_EXIT(endclause);
return;
} 
#undef NL

A_STATIC A68_BOOL  KDZACTR_cf(A68_INT  M1, A68_INT  M2)
{ 
A68_BOOL  LDZACTR;  /* clause result */
A_PROC_ENTRY(cf);
 /* line 91: */
LDZACTR = (HCNACTR_finddeflexmode(M1)==HCNACTR_finddeflexmode(M2));
A_PROC_EXIT(cf);
return( LDZACTR );
} 
#undef NL

A68_VOID  NDZACTR_evaluatenoresult(A68_101 ** Valuestack)
{ 
A68_94 * ODZACTR_value A_UNUSED = {0};
A68_95  PDZACTR;  /* united object - for case conformity */
A68_BOOL  QDZACTR;  /* clause result */
A68_BOOL  RDZACTR;  /* clause result */
A68_INT  SDZACTR_codestream A_UNUSED = {0};
A68_VC  WDZACTR;  /* clause result */
A68_VC  YDZACTR;  /* avoid structure result */
A68_VC  ZDZACTR_f A_UNUSED = {0};
A68_61  AEZACTR_isident;   /* proc value of non-global proc */
A68_VC  NEZACTR;  /* clause result */
A68_BOOL  PEZACTR;  /* optbool result */
A68_INT  QEZACTR;  /* YIELD */
A68_VC  TEZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  UEZACTR_statement A_UNUSED = {0};
A68_212  VEZACTR;  /* collateral clause result */
A68_93  WEZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  XEZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  YEZACTR;  /* YIELD */
A68_93  ZEZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  AFZACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  DFZACTR;  /* optbool result */
A_PROC_ENTRY(evaluatenoresult);
 /* line 107: */
 /* line 108: */
{ 
 /* line 109: */
 /* line 110: */
if ((*A_NILCHECK(Valuestack))!=MKJACTR_nilvaluelist)
{ 
ODZACTR_value = (&(A_NILCHECK((*A_NILCHECK(Valuestack)))->Value));
 /* line 111: */
PDZACTR = (*A_NILCHECK((&(A_NILCHECK(ODZACTR_value)->Extra)))) ;
switch ( PDZACTR.mode )
{ 
case 3: /* VOID */
QDZACTR = A68_TRUE;
break;
default: 
 /* line 112: */
QDZACTR = A68_FALSE;
break;
} 
 /* line 113: */
 /* line 114: */
 /* line 115: */
RDZACTR = (QDZACTR&((*A_NILCHECK((&(A_NILCHECK(ODZACTR_value)->Mode))))==UEAACTR_voidmode));
if (RDZACTR)
{ 
 /* line 116: */
 /* line 117: */
(void)((*A_NILCHECK(Valuestack)) = (*A_NILCHECK((&(A_NILCHECK((*A_NILCHECK(Valuestack)))->Rest)))));
} 
else
{ 
SDZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 118: */
(void)((*A_NILCHECK(Valuestack)) = (*A_NILCHECK((&(A_NILCHECK((*A_NILCHECK(Valuestack)))->Rest)))));
 /* line 119: */
(void)(A_CALLPROC(JYQACTR_evaluate,(ODZACTR_value),(ODZACTR_value,(JYQACTR_evaluate).nonlocals)));
 /* line 120: */
 /* line 121: */
(void)(WXIACTR_assert(UDZACTR, ((*A_NILCHECK((&(A_NILCHECK(ODZACTR_value)->Mode))))==UEAACTR_voidmode)));
 /* line 122: */
if (EYPACTR_isskip(ODZACTR_value))
{ 
WDZACTR = XDZACTR;
} 
else
{ 
DAQACTR_getcfragment( ODZACTR_value, &YDZACTR );
WDZACTR = YDZACTR;
} 
ZDZACTR_f = WDZACTR;
 /* line 123: */
 /* line 124: */
 /* line 125: */
A_CLOSURE( AEZACTR_isident, BEZACTR_isident, CEZACTR_isident );
(( CEZACTR_isident * ) ( AEZACTR_isident.nonlocals )) -> ZDZACTR_f = ZDZACTR_f;
 /* line 136: */
 /* line 137: */
 /* line 138: */
 /* line 139: */
if (A_CALLPROC(AEZACTR_isident,(),((AEZACTR_isident).nonlocals)))
{ 
NEZACTR = OEZACTR;
} 
else
{ 
PEZACTR = (ZDZACTR_f.upb>0);
if ( PEZACTR )
{ /* line 140: */
QEZACTR = ZDZACTR_f.upb ;
PEZACTR = (A_VINDEX(ZDZACTR_f,QEZACTR)==')');
}
if (PEZACTR)
{ 
 /* line 141: */
 /* line 142: */
NEZACTR = A_VC_PLUS(A_VC_PLUS(SEZACTR,ZDZACTR_f),A_HVEC(TEZACTR,')',A68_CHAR ));
} 
else
{ 
NEZACTR = ZDZACTR_f;
} 
} 
UEZACTR_statement = NEZACTR;
 /* line 143: */
VEZACTR.data[0] = A_UNITE(WEZACTR,mode2,2,UEZACTR_statement);
YEZACTR = ';' ;
VEZACTR.data[1] = A_UNITE(XEZACTR,mode1,1,YEZACTR);
VEZACTR.data[2] = A_UNITE(ZEZACTR,mode4,4,EIAACTR_cnewline);
 /* line 144: */
(void)(MDMACTR_writecstream(A_HISVEC(AFZACTR,VEZACTR,3,A68_93 ), SDZACTR_codestream));
} 
 /* line 145: */
 /* line 146: */
DFZACTR = (ZCHACTR_tracelevel(CFZACTR)!=0);
if ( DFZACTR )
{ /* line 147: */
DFZACTR = ((*A_NILCHECK(Valuestack))!=MKJACTR_nilvaluelist);
}
if (DFZACTR)
{ 
 /* line 148: */
 /* line 149: */
 /* line 150: */
(void)(A_CALLPROC(JHVACTR_calltrace,((&(A_NILCHECK((*A_NILCHECK(Valuestack)))->Value)), A68_FALSE),((&(A_NILCHECK((*A_NILCHECK(Valuestack)))->Value)), A68_FALSE,(JHVACTR_calltrace).nonlocals)));
} 
} 
} 
A_PROC_EXIT(evaluatenoresult);
return;
} 
#undef NL

A68_VOID  GFZACTR_evaluateresult(A68_101 ** Valuestack, A68_109  Answer)
{ 
A68_94 * HFZACTR_ansvalue A_UNUSED = {0};
A68_INT  IFZACTR_codestream A_UNUSED = {0};
A68_95  JFZACTR;  /* united object - for case conformity */
A68_98  UFZACTR;  /* avoid structure result */
A68_95  VFZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  WFZACTR;  /* clause result */
A68_VC  XFZACTR;  /* avoid structure result */
A68_98  YFZACTR_t A_UNUSED = {0};
A68_VC  ZFZACTR;  /* OPERATORS - istruct -> vector */
A68_75  AGZACTR;  /* OPERATORS - istruct -> vector */
A68_VC  BGZACTR_c A_UNUSED = {0};
A68_VC  GGZACTR_assignee A_UNUSED = {0};
A68_94 * HGZACTR_value A_UNUSED = {0};
A68_93  MGZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  NGZACTR;  /* YIELD */
A68_92  OGZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_221  PGZACTR;  /* collateral clause result */
A68_93  QGZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  TGZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  UGZACTR;  /* YIELD */
A68_VC  VGZACTR;  /* avoid structure result */
A68_93  WGZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  XGZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  YGZACTR;  /* YIELD */
A68_92  ZGZACTR;  /* OPERATORS - istruct -> vector */
A68_93  AHZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  BHZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(evaluateresult);
 /* line 165: */
 /* line 166: */
{ 
HFZACTR_ansvalue = Answer.Value;
 /* line 167: */
 /* line 168: */
if ((*A_NILCHECK((&(A_NILCHECK(HFZACTR_ansvalue)->Mode))))==UEAACTR_voidmode)
{ 
 /* line 169: */
 /* line 170: */
(void)(NDZACTR_evaluatenoresult(Valuestack));
} 
else
{ 
IFZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 172: */
 /* line 173: */
 /* line 174: */
JFZACTR = (*A_NILCHECK((&(A_NILCHECK(HFZACTR_ansvalue)->Extra)))) ;
switch ( JFZACTR.mode )
{ 
case 3: /* VOID */
 /* line 175: */
 /* line 176: */
{ 
 /* line 178: */
 /* line 180: */
QMOACTR_declarectemporary( (*A_NILCHECK((&(A_NILCHECK(HFZACTR_ansvalue)->Mode)))), TFZACTR, &UFZACTR );
(void)(NFZACTR_assignment((&(A_NILCHECK(HFZACTR_ansvalue)->Extra)), A_UNITE(VFZACTR,mode5,5,UFZACTR)));
 /* line 181: */
 /* line 182: */
 /* line 183: */
DAQACTR_getcfragment( HFZACTR_ansvalue, &XFZACTR );
WFZACTR = XFZACTR;
} 
break;
case 5: /* STRUCT(MODE75,INT)  */
YFZACTR_t = (JFZACTR.data.mode5);
 /* line 184: */
 /* line 185: */
AGZACTR = YFZACTR_t.Name ;
WFZACTR = A_HISVEC(ZFZACTR,AGZACTR,7,A68_CHAR );
break;
case 6: /* VECTOR [] CHAR */
BGZACTR_c = (JFZACTR.data.mode6);
 /* line 186: */
 /* line 187: */
WFZACTR = BGZACTR_c;
break;
default: 
(void)(WXIACTR_assert(DGZACTR, A68_FALSE));
 /* line 188: */
WFZACTR = FGZACTR;
break;
} 
GGZACTR_assignee = WFZACTR;
 /* line 190: */
HGZACTR_value = (&(A_NILCHECK((*A_NILCHECK(Valuestack)))->Value));
 /* line 191: */
(void)(SMVACTR_evaluatestack(Valuestack));
 /* line 192: */
 /* line 193: */
(void)(WXIACTR_assert(JGZACTR, KDZACTR_cf((*A_NILCHECK((&(A_NILCHECK(HFZACTR_ansvalue)->Mode)))), (*A_NILCHECK((&(A_NILCHECK((&(A_NILCHECK((*A_NILCHECK(Valuestack)))->Value)))->Mode)))))));
 /* line 194: */
 /* line 195: */
if (EYPACTR_isskip(HGZACTR_value))
{ 
 /* line 196: */
 /* line 197: */
NGZACTR = LGZACTR ;
(void)(MDMACTR_writecstream(A_HVEC(OGZACTR,A_UNITE(MGZACTR,mode2,2,NGZACTR),A68_93 ), IFZACTR_codestream));
} 
else
{ 
PGZACTR.data[0] = A_UNITE(QGZACTR,mode2,2,GGZACTR_assignee);
UGZACTR = SGZACTR ;
PGZACTR.data[1] = A_UNITE(TGZACTR,mode2,2,UGZACTR);
DAQACTR_getcfragment( HGZACTR_value, &VGZACTR );
PGZACTR.data[2] = A_UNITE(WGZACTR,mode2,2,VGZACTR);
YGZACTR = ';' ;
PGZACTR.data[3] = A_UNITE(XGZACTR,mode1,1,YGZACTR);
 /* line 199: */
 /* line 200: */
(void)(MDMACTR_writecstream(A_HISVEC(ZGZACTR,PGZACTR,4,A68_93 ), IFZACTR_codestream));
} 
 /* line 201: */
(void)(MDMACTR_writecstream(A_HVEC(BHZACTR,A_UNITE(AHZACTR,mode4,4,EIAACTR_cnewline),A68_93 ), IFZACTR_codestream));
 /* line 202: */
 /* line 203: */
 /* line 204: */
(void)((*A_NILCHECK(Valuestack)) = (*A_NILCHECK((&(A_NILCHECK((*A_NILCHECK(Valuestack)))->Rest)))));
} 
} 
A_PROC_EXIT(evaluateresult);
return;
} 
#undef NL
 /* line 209: */

A68_VOID  EHZACTR_evaluatesimpleenquiry(A68_101 ** Valuestack, A68_109  Answer)
{ 
A68_94 * FHZACTR_value A_UNUSED = {0};
A68_VC  IHZACTR;  /* avoid structure result */
A68_95  JHZACTR = {0};  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(evaluatesimpleenquiry);
 /* line 215: */
 /* line 216: */
{ 
FHZACTR_value = (&(A_NILCHECK((*A_NILCHECK(Valuestack)))->Value));
 /* line 217: */
(void)(SMVACTR_evaluatestack(Valuestack));
 /* line 218: */
 /* line 219: */
(void)(WXIACTR_assert(HHZACTR, KDZACTR_cf((*A_NILCHECK((&(A_NILCHECK(Answer.Value)->Mode)))), (*A_NILCHECK((&(A_NILCHECK(FHZACTR_value)->Mode)))))));
 /* line 220: */
DAQACTR_getcfragment( FHZACTR_value, &IHZACTR );
(void)(NFZACTR_assignment((&(A_NILCHECK(Answer.Value)->Extra)), A_UNITE(JHZACTR,mode6,6,IHZACTR)));
 /* line 221: */
 /* line 222: */
(void)((*A_NILCHECK(Valuestack)) = (*A_NILCHECK((&(A_NILCHECK((*A_NILCHECK(Valuestack)))->Rest)))));
} 
A_PROC_EXIT(evaluatesimpleenquiry);
return;
} 
#undef NL

A68_VOID  MHZACTR_begin(A68_BOOL  Seriescontainslabel, A68_BOOL  Routinebody)
{ 
A68_224  NHZACTR;  /* collateral clause result */
A68_93  QHZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  RHZACTR;  /* YIELD */
A68_93  SHZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  THZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(begin);
 /* line 230: */
 /* line 231: */
RHZACTR = PHZACTR ;
NHZACTR.data[0] = A_UNITE(QHZACTR,mode2,2,RHZACTR);
NHZACTR.data[1] = A_UNITE(SHZACTR,mode4,4,EIAACTR_cnewline);
 /* line 232: */
(void)(MDMACTR_writecstream(A_HISVEC(THZACTR,NHZACTR,2,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel())));
A_PROC_EXIT(begin);
return;
} 
#undef NL
 /* line 237: */

A68_VOID  YHZACTR_end(A68_BOOL  Dynamicresult, A68_BOOL  Seriescontainsexit, A68_BOOL  Routinebody, A68_85 * Endofclauselabel)
{ 
A68_INT  ZHZACTR_codestream A_UNUSED = {0};
A68_212  CIZACTR;  /* collateral clause result */
A68_VC  DIZACTR;  /* OPERATORS - istruct -> vector */
A68_75  EIZACTR;  /* OPERATORS - istruct -> vector */
A68_93  FIZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  GIZACTR;  /* YIELD */
A68_93  JIZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  KIZACTR;  /* YIELD */
A68_93  LIZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  MIZACTR;  /* OPERATORS - istruct -> vector */
A68_224  NIZACTR;  /* collateral clause result */
A68_93  QIZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  RIZACTR;  /* YIELD */
A68_93  SIZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  TIZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(end);
 /* line 238: */
 /* line 239: */
{ 
ZHZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 240: */
 /* line 241: */
 /* line 242: */
if (Seriescontainsexit)
{ 
(void)(WXIACTR_assert(BIZACTR, (Endofclauselabel!=(A68_85 *)A68_NIL)));
 /* line 243: */
 /* line 244: */
EIZACTR = (*A_NILCHECK((&(A_NILCHECK(Endofclauselabel)->Name)))) ;
GIZACTR = A_HISVEC(DIZACTR,EIZACTR,7,A68_CHAR ) ;
CIZACTR.data[0] = A_UNITE(FIZACTR,mode2,2,GIZACTR);
 /* line 245: */
KIZACTR = IIZACTR ;
CIZACTR.data[1] = A_UNITE(JIZACTR,mode2,2,KIZACTR);
CIZACTR.data[2] = A_UNITE(LIZACTR,mode4,4,EIAACTR_cnewline);
 /* line 246: */
 /* line 247: */
(void)(MDMACTR_writecstream(A_HISVEC(MIZACTR,CIZACTR,3,A68_93 ), ZHZACTR_codestream));
} 
 /* line 248: */
RIZACTR = PIZACTR ;
NIZACTR.data[0] = A_UNITE(QIZACTR,mode2,2,RIZACTR);
NIZACTR.data[1] = A_UNITE(SIZACTR,mode4,4,EIAACTR_cnewline);
 /* line 249: */
(void)(MDMACTR_writecstream(A_HISVEC(TIZACTR,NIZACTR,2,A68_93 ), ZHZACTR_codestream));
} 
A_PROC_EXIT(end);
return;
} 
#undef NL
 /* line 269: */

A_STATIC A68_VOID  XIZACTR_outputcaseulabel(A68_INT  Mode, A68_INT  Casenumber, A68_77  Case)
{ 
A68_INT  YIZACTR_codestream A_UNUSED = {0};
A68_VC  ZIZACTR;  /* avoid structure result */
A68_70  AJZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_224  BJZACTR;  /* collateral clause result */
A68_93  EJZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  FJZACTR;  /* YIELD */
A68_93  GJZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  HJZACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL * IJZACTR;  /* YIELD */
A68_230  JJZACTR;  /* collateral clause result */
A68_93  MJZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  NJZACTR;  /* YIELD */
A68_VC  OJZACTR;  /* avoid structure result */
A68_93  PJZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  SJZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  TJZACTR;  /* YIELD */
A68_VC  XJZACTR;  /* avoid structure result */
A68_93  ZJZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  AKZACTR;  /* YIELD */
A68_93  DKZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  EKZACTR;  /* YIELD */
A68_93  FKZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  GKZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(outputcaseulabel);
 /* line 275: */
 /* line 276: */
{ 
YIZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 277: */
 /* line 278: */
 /* line 279: */
if (*A_NILCHECK((&A_R1INDEX(Case,Casenumber))))
{ 
WCNACTR_modename( Mode, &ZIZACTR );
(void)(NWIACTR_pmessage(720, A_HARR(AJZACTR,ZIZACTR,A68_VC )));
 /* line 280: */
 /* line 281: */
 /* line 283: */
FJZACTR = DJZACTR ;
BJZACTR.data[0] = A_UNITE(EJZACTR,mode2,2,FJZACTR);
BJZACTR.data[1] = A_UNITE(GJZACTR,mode4,4,EIAACTR_cnewline);
 /* line 284: */
 /* line 285: */
 /* line 286: */
(void)(MDMACTR_writecstream(A_HISVEC(HJZACTR,BJZACTR,2,A68_93 ), YIZACTR_codestream));
} 
else
{ 
IJZACTR = (&A_R1INDEX(Case,Casenumber)) ;
(*A_NILCHECK(IJZACTR)) = A68_TRUE;
 /* line 287: */
 /* line 288: */
NJZACTR = LJZACTR ;
JJZACTR.data[0] = A_UNITE(MJZACTR,mode2,2,NJZACTR);
ROAAOSF_whole( Casenumber, 0, &OJZACTR );
JJZACTR.data[1] = A_UNITE(PJZACTR,mode2,2,OJZACTR);
 /* line 289: */
TJZACTR = RJZACTR ;
JJZACTR.data[2] = A_UNITE(SJZACTR,mode2,2,TJZACTR);
 /* line 290: */
if (AQIACTR_verboseoption)
{ 
 /* line 291: */
 /* line 292: */
WCNACTR_modename( Mode, &XJZACTR );
AKZACTR = A_VC_PLUS(A_VC_PLUS(WJZACTR,XJZACTR),YJZACTR) ;
JJZACTR.data[3] = A_UNITE(ZJZACTR,mode2,2,AKZACTR);
} 
else
{ 
 /* line 293: */
EKZACTR = CKZACTR ;
JJZACTR.data[3] = A_UNITE(DKZACTR,mode2,2,EKZACTR);
} 
JJZACTR.data[4] = A_UNITE(FKZACTR,mode4,4,EIAACTR_cnewline);
 /* line 294: */
 /* line 295: */
 /* line 296: */
(void)(MDMACTR_writecstream(A_HISVEC(GKZACTR,JJZACTR,5,A68_93 ), YIZACTR_codestream));
} 
} 
A_PROC_EXIT(outputcaseulabel);
return;
} 
#undef NL
 /* line 300: */
 /* line 302: */

A_STATIC A68_VOID  KKZACTR_subunionchoice(A68_154  Uchoice, A68_94  Union, A68_77  Case)
{ 
A68_172  LKZACTR;  /* avoid structure result */
A68_172  MKZACTR_modesofunion A_UNUSED = {0};
A68_172  NKZACTR;  /* avoid structure result */
A68_VC  OKZACTR;  /* avoid structure result */
A68_VC  PKZACTR;  /* OPERATORS - trim index */
A68_VC  QKZACTR;  /* YIELD */
A68_RC  RKZACTR;  /* OPERATORS - vector -> row */
A68_RC  SKZACTR_table A_UNUSED = {0};
A68_INT  TKZACTR_i A_UNUSED = {0};
A68_INT  UKZACTR;  /* to part of loop */
A_PROC_ENTRY(subunionchoice);
 /* line 307: */
 /* line 308: */
{ 
A_CALLPROC(YVMACTR_constituents,(Union.Mode, &LKZACTR),(Union.Mode, &LKZACTR,(YVMACTR_constituents).nonlocals));
MKZACTR_modesofunion = LKZACTR;
 /* line 309: */
 /* line 311: */
 /* line 312: */
 /* line 313: */
A_CALLPROC(YVMACTR_constituents,(Uchoice.Mode, &NKZACTR),(Uchoice.Mode, &NKZACTR,(YVMACTR_constituents).nonlocals));
EXQACTR_uniontouniontable( MKZACTR_modesofunion, NKZACTR, &OKZACTR );
QKZACTR = A_VTRIM(PKZACTR,(OKZACTR),A_VTSCRIPT(&(PKZACTR.upb),(OKZACTR).upb,1,(OKZACTR).upb)) ;
SKZACTR_table = A_VECARR(QKZACTR,RKZACTR);
 /* line 314: */
 /* line 315: */
UKZACTR = SKZACTR_table.dim[0].upb;
for ( TKZACTR_i = 1;
TKZACTR_i <= UKZACTR;
TKZACTR_i += 1 )
{ 
 /* line 316: */
if ((A68_INT)(unsigned char)A_R1INDEX(SKZACTR_table,TKZACTR_i)!=0)
{ 
 /* line 317: */
 /* line 318: */
(void)(XIZACTR_outputcaseulabel((*A_NILCHECK((&A_VINDEX(MKZACTR_modesofunion,TKZACTR_i)))), TKZACTR_i, Case));
} 
}
 /* line 319: */
 /* line 320: */
/*SKIP*/;
} 
A_PROC_EXIT(subunionchoice);
return;
} 
#undef NL

A_STATIC A68_VOID  WKZACTR_condition(A68_VC  Frag, A68_VC  *ReturnedValue)
{ 
A68_VC  XKZACTR_f A_UNUSED = {0};
A68_INT  YKZACTR_lo A_UNUSED = {0};
A68_INT  ZKZACTR_hi A_UNUSED = {0};
A68_232  BLZACTR_scan;   /* proc value of non-global proc */
A68_61  LLZACTR_whollybracketed;   /* proc value of non-global proc */
A68_BOOL  WLZACTR_assignment A_UNUSED = {0};
A68_55  YLZACTR_anonymous;   /* proc value of non-global proc */
A68_VC  FMZACTR;  /* OPERATORS - trim index */
A68_VC  GMZACTR_c A_UNUSED = {0};
A68_VC  HMZACTR;  /* clause result */
A68_VC  IMZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  JMZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(condition);
 /* line 328: */
 /* line 329: */
{ 
XKZACTR_f = Frag;
 /* line 330: */
YKZACTR_lo = 1;
ZKZACTR_hi = XKZACTR_f.upb;
 /* line 333: */
A_CLOSURE( BLZACTR_scan, CLZACTR_scan, DLZACTR_scan );
(( DLZACTR_scan * ) ( BLZACTR_scan.nonlocals )) -> YKZACTR_lo = (&YKZACTR_lo);
(( DLZACTR_scan * ) ( BLZACTR_scan.nonlocals )) -> ZKZACTR_hi = (&ZKZACTR_hi);
(( DLZACTR_scan * ) ( BLZACTR_scan.nonlocals )) -> XKZACTR_f = XKZACTR_f;
 /* line 354: */
 /* line 355: */
A_CLOSURE( LLZACTR_whollybracketed, MLZACTR_whollybracketed, NLZACTR_whollybracketed );
(( NLZACTR_whollybracketed * ) ( LLZACTR_whollybracketed.nonlocals )) -> ZKZACTR_hi = (&ZKZACTR_hi);
(( NLZACTR_whollybracketed * ) ( LLZACTR_whollybracketed.nonlocals )) -> YKZACTR_lo = (&YKZACTR_lo);
(( NLZACTR_whollybracketed * ) ( LLZACTR_whollybracketed.nonlocals )) -> XKZACTR_f = XKZACTR_f;
(( NLZACTR_whollybracketed * ) ( LLZACTR_whollybracketed.nonlocals )) -> BLZACTR_scan = BLZACTR_scan;
 /* line 362: */
for ( ;; )
{ 
if ( !(A_CALLPROC(LLZACTR_whollybracketed,(),((LLZACTR_whollybracketed).nonlocals))) ) break;
YKZACTR_lo+=1;
ZKZACTR_hi-=1;
}
 /* line 363: */
WLZACTR_assignment = A68_FALSE;
 /* line 364: */
A_CLOSURE( YLZACTR_anonymous, ZLZACTR_anonymous, AMZACTR_anonymous );
(( AMZACTR_anonymous * ) ( YLZACTR_anonymous.nonlocals )) -> WLZACTR_assignment = (&WLZACTR_assignment);
(( AMZACTR_anonymous * ) ( YLZACTR_anonymous.nonlocals )) -> YKZACTR_lo = (&YKZACTR_lo);
(( AMZACTR_anonymous * ) ( YLZACTR_anonymous.nonlocals )) -> ZKZACTR_hi = (&ZKZACTR_hi);
(( AMZACTR_anonymous * ) ( YLZACTR_anonymous.nonlocals )) -> XKZACTR_f = XKZACTR_f;
(void)(A_CALLPROC(BLZACTR_scan,(YLZACTR_anonymous),(YLZACTR_anonymous,(BLZACTR_scan).nonlocals)));
 /* line 368: */
GMZACTR_c = A_VTRIM(FMZACTR,(XKZACTR_f),A_VTSCRIPT(&(FMZACTR.upb),(XKZACTR_f).upb,YKZACTR_lo,ZKZACTR_hi));
 /* line 369: */
if (WLZACTR_assignment)
{ 
HMZACTR = A_VC_PLUS(A_VC_PLUS(A_HVEC(IMZACTR,'(',A68_CHAR ),GMZACTR_c),A_HVEC(JMZACTR,')',A68_CHAR ));
} 
else
{ 
 /* line 370: */
HMZACTR = GMZACTR_c;
} 
} 
A_PROC_EXIT(condition);
*ReturnedValue = (HMZACTR);
return;
} 
#undef NL

A68_VOID  LMZACTR_then(A68_94 * Enquiry)
{ 
A68_VC  NMZACTR;  /* clause result */
A68_VC  PMZACTR;  /* avoid structure result */
A68_VC  QMZACTR;  /* avoid structure result */
A68_VC  RMZACTR_booleanexpr A_UNUSED = {0};
A68_234  SMZACTR;  /* collateral clause result */
A68_93  VMZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  WMZACTR;  /* YIELD */
A68_93  XMZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  YMZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  ZMZACTR;  /* YIELD */
A68_93  ANZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  DNZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ENZACTR;  /* YIELD */
A68_93  FNZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  GNZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(then);
 /* line 373: */
 /* line 375: */
{ 
 /* line 376: */
 /* line 377: */
if (EYPACTR_isskip(Enquiry))
{ 
NMZACTR = OMZACTR;
} 
else
{ 
 /* line 378: */
DAQACTR_getcfragment( Enquiry, &PMZACTR );
WKZACTR_condition( PMZACTR, &QMZACTR );
NMZACTR = QMZACTR;
} 
RMZACTR_booleanexpr = NMZACTR;
 /* line 379: */
 /* line 380: */
WMZACTR = UMZACTR ;
SMZACTR.data[0] = A_UNITE(VMZACTR,mode2,2,WMZACTR);
SMZACTR.data[1] = A_UNITE(XMZACTR,mode2,2,RMZACTR_booleanexpr);
ZMZACTR = ')' ;
SMZACTR.data[2] = A_UNITE(YMZACTR,mode1,1,ZMZACTR);
 /* line 381: */
SMZACTR.data[3] = A_UNITE(ANZACTR,mode4,4,EIAACTR_cnewline);
 /* line 382: */
ENZACTR = CNZACTR ;
SMZACTR.data[4] = A_UNITE(DNZACTR,mode2,2,ENZACTR);
SMZACTR.data[5] = A_UNITE(FNZACTR,mode4,4,EIAACTR_cnewline);
 /* line 383: */
 /* line 384: */
(void)(MDMACTR_writecstream(A_HISVEC(GNZACTR,SMZACTR,6,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel())));
} 
A_PROC_EXIT(then);
return;
} 
#undef NL

A68_VOID  HNZACTR_else(void)
{ 
A68_234  INZACTR;  /* collateral clause result */
A68_93  LNZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  MNZACTR;  /* YIELD */
A68_93  NNZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  QNZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  RNZACTR;  /* YIELD */
A68_93  SNZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  VNZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  WNZACTR;  /* YIELD */
A68_93  XNZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  YNZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(else);
MNZACTR = KNZACTR ;
INZACTR.data[0] = A_UNITE(LNZACTR,mode2,2,MNZACTR);
INZACTR.data[1] = A_UNITE(NNZACTR,mode4,4,EIAACTR_cnewline);
RNZACTR = PNZACTR ;
INZACTR.data[2] = A_UNITE(QNZACTR,mode2,2,RNZACTR);
INZACTR.data[3] = A_UNITE(SNZACTR,mode4,4,EIAACTR_cnewline);
 /* line 390: */
WNZACTR = UNZACTR ;
INZACTR.data[4] = A_UNITE(VNZACTR,mode2,2,WNZACTR);
INZACTR.data[5] = A_UNITE(XNZACTR,mode4,4,EIAACTR_cnewline);
 /* line 391: */
 /* line 392: */
(void)(MDMACTR_writecstream(A_HISVEC(YNZACTR,INZACTR,6,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel())));
A_PROC_EXIT(else);
return;
} 
#undef NL

A68_VOID  AOZACTR_casein(A68_94 * Enquiry)
{ 
A68_VC  COZACTR;  /* clause result */
A68_VC  EOZACTR;  /* avoid structure result */
A68_VC  FOZACTR_integerexpr A_UNUSED = {0};
A68_237  GOZACTR;  /* collateral clause result */
A68_93  JOZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  KOZACTR;  /* YIELD */
A68_93  LOZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  OOZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  POZACTR;  /* YIELD */
A68_93  QOZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  TOZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  UOZACTR;  /* YIELD */
A68_93  VOZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  YOZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ZOZACTR;  /* YIELD */
A68_93  APZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  BPZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(casein);
 /* line 395: */
 /* line 397: */
{ 
 /* line 398: */
 /* line 399: */
if (EYPACTR_isskip(Enquiry))
{ 
 /* line 400: */
COZACTR = DOZACTR;
} 
else
{ 
DAQACTR_getcfragment( Enquiry, &EOZACTR );
COZACTR = EOZACTR;
} 
FOZACTR_integerexpr = COZACTR;
 /* line 401: */
 /* line 402: */
KOZACTR = IOZACTR ;
GOZACTR.data[0] = A_UNITE(JOZACTR,mode2,2,KOZACTR);
GOZACTR.data[1] = A_UNITE(LOZACTR,mode2,2,FOZACTR_integerexpr);
POZACTR = NOZACTR ;
GOZACTR.data[2] = A_UNITE(OOZACTR,mode2,2,POZACTR);
 /* line 403: */
GOZACTR.data[3] = A_UNITE(QOZACTR,mode4,4,EIAACTR_cnewline);
UOZACTR = SOZACTR ;
GOZACTR.data[4] = A_UNITE(TOZACTR,mode2,2,UOZACTR);
 /* line 404: */
GOZACTR.data[5] = A_UNITE(VOZACTR,mode4,4,EIAACTR_cnewline);
 /* line 405: */
ZOZACTR = XOZACTR ;
GOZACTR.data[6] = A_UNITE(YOZACTR,mode2,2,ZOZACTR);
GOZACTR.data[7] = A_UNITE(APZACTR,mode4,4,EIAACTR_cnewline);
 /* line 406: */
 /* line 407: */
(void)(MDMACTR_writecstream(A_HISVEC(BPZACTR,GOZACTR,8,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel())));
} 
A_PROC_EXIT(casein);
return;
} 
#undef NL
 /* line 411: */
 /* line 413: */

A68_VOID  FPZACTR_inu(A68_154  Uchoice, A68_94 * Union, A68_77  Case)
{ 
A68_VC  IPZACTR;  /* avoid structure result */
A68_VC  JPZACTR_unitedobject A_UNUSED = {0};
A68_INT  KPZACTR_codestream A_UNUSED = {0};
A68_240  LPZACTR;  /* collateral clause result */
A68_93  OPZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  PPZACTR;  /* YIELD */
A68_93  QPZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  TPZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  UPZACTR;  /* YIELD */
A68_93  XPZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  YPZACTR;  /* YIELD */
A68_93  ZPZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  CQZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  DQZACTR;  /* YIELD */
A68_93  EQZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  FQZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(inu);
 /* line 414: */
 /* line 417: */
{ 
DAQACTR_getcfragment( RQQACTR_yield(HPZACTR, Union), &IPZACTR );
JPZACTR_unitedobject = IPZACTR;
 /* line 418: */
KPZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 419: */
 /* line 420: */
PPZACTR = NPZACTR ;
LPZACTR.data[0] = A_UNITE(OPZACTR,mode2,2,PPZACTR);
LPZACTR.data[1] = A_UNITE(QPZACTR,mode2,2,JPZACTR_unitedobject);
UPZACTR = SPZACTR ;
LPZACTR.data[2] = A_UNITE(TPZACTR,mode2,2,UPZACTR);
YPZACTR = WPZACTR ;
LPZACTR.data[3] = A_UNITE(XPZACTR,mode2,2,YPZACTR);
 /* line 421: */
LPZACTR.data[4] = A_UNITE(ZPZACTR,mode4,4,EIAACTR_cnewline);
 /* line 422: */
DQZACTR = BQZACTR ;
LPZACTR.data[5] = A_UNITE(CQZACTR,mode2,2,DQZACTR);
LPZACTR.data[6] = A_UNITE(EQZACTR,mode4,4,EIAACTR_cnewline);
 /* line 423: */
(void)(MDMACTR_writecstream(A_HISVEC(FQZACTR,LPZACTR,7,A68_93 ), KPZACTR_codestream));
 /* line 424: */
 /* line 425: */
 /* line 426: */
if (Uchoice.Param<0)
{ 
 /* line 427: */
(void)(KKZACTR_subunionchoice(Uchoice, (*A_NILCHECK(Union)), Case));
} 
else
{ 
 /* line 428: */
 /* line 429: */
(void)(XIZACTR_outputcaseulabel(Uchoice.Mode, Uchoice.Param, Case));
} 
} 
A_PROC_EXIT(inu);
return;
} 
#undef NL

A68_VOID  HQZACTR_comma(A68_INT  Caseno)
{ 
A68_234  IQZACTR;  /* collateral clause result */
A68_93  LQZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  MQZACTR;  /* YIELD */
A68_93  NQZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  QQZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  RQZACTR;  /* YIELD */
A68_VC  SQZACTR;  /* avoid structure result */
A68_93  TQZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  WQZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  XQZACTR;  /* YIELD */
A68_93  YQZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  ZQZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(comma);
 /* line 432: */
 /* line 434: */
MQZACTR = KQZACTR ;
IQZACTR.data[0] = A_UNITE(LQZACTR,mode2,2,MQZACTR);
 /* line 435: */
IQZACTR.data[1] = A_UNITE(NQZACTR,mode4,4,EIAACTR_cnewline);
RQZACTR = PQZACTR ;
IQZACTR.data[2] = A_UNITE(QQZACTR,mode2,2,RQZACTR);
ROAAOSF_whole( Caseno, 0, &SQZACTR );
IQZACTR.data[3] = A_UNITE(TQZACTR,mode2,2,SQZACTR);
 /* line 436: */
XQZACTR = VQZACTR ;
IQZACTR.data[4] = A_UNITE(WQZACTR,mode2,2,XQZACTR);
IQZACTR.data[5] = A_UNITE(YQZACTR,mode4,4,EIAACTR_cnewline);
 /* line 437: */
 /* line 438: */
(void)(MDMACTR_writecstream(A_HISVEC(ZQZACTR,IQZACTR,6,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel())));
A_PROC_EXIT(comma);
return;
} 
#undef NL
 /* line 442: */
 /* line 444: */

A68_VOID  DRZACTR_commau(A68_154  Uchoice, A68_94  Union, A68_77  Case)
{ 
A68_INT  ERZACTR_codestream A_UNUSED = {0};
A68_224  FRZACTR;  /* collateral clause result */
A68_93  IRZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  JRZACTR;  /* YIELD */
A68_93  KRZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  LRZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(commau);
 /* line 445: */
 /* line 446: */
{ 
ERZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 447: */
JRZACTR = HRZACTR ;
FRZACTR.data[0] = A_UNITE(IRZACTR,mode2,2,JRZACTR);
FRZACTR.data[1] = A_UNITE(KRZACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(LRZACTR,FRZACTR,2,A68_93 ), ERZACTR_codestream));
 /* line 448: */
 /* line 449: */
 /* line 450: */
if (Uchoice.Param<0)
{ 
 /* line 451: */
(void)(KKZACTR_subunionchoice(Uchoice, Union, Case));
} 
else
{ 
 /* line 452: */
 /* line 453: */
(void)(XIZACTR_outputcaseulabel(Uchoice.Mode, Uchoice.Param, Case));
} 
} 
A_PROC_EXIT(commau);
return;
} 
#undef NL

A68_VOID  MRZACTR_out(void)
{ 
A68_INT  NRZACTR_codestream A_UNUSED = {0};
A68_221  ORZACTR;  /* collateral clause result */
A68_93  RRZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  SRZACTR;  /* YIELD */
A68_93  TRZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  WRZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  XRZACTR;  /* YIELD */
A68_93  YRZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  ZRZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(out);
{ 
NRZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 458: */
 /* line 459: */
SRZACTR = QRZACTR ;
ORZACTR.data[0] = A_UNITE(RRZACTR,mode2,2,SRZACTR);
ORZACTR.data[1] = A_UNITE(TRZACTR,mode4,4,EIAACTR_cnewline);
XRZACTR = VRZACTR ;
ORZACTR.data[2] = A_UNITE(WRZACTR,mode2,2,XRZACTR);
ORZACTR.data[3] = A_UNITE(YRZACTR,mode4,4,EIAACTR_cnewline);
 /* line 461: */
 /* line 462: */
(void)(MDMACTR_writecstream(A_HISVEC(ZRZACTR,ORZACTR,4,A68_93 ), NRZACTR_codestream));
} 
A_PROC_EXIT(out);
return;
} 
#undef NL

A68_VOID  ESZACTR_esac(A68_BOOL  Outpart, A68_109  Answer)
{ 
A68_INT  FSZACTR_codestream A_UNUSED = {0};
A68_INT  GSZACTR_resultmode A_UNUSED = {0};
A68_93  JSZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  KSZACTR;  /* YIELD */
A68_92  LSZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_93  MSZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  NSZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_221  OSZACTR;  /* collateral clause result */
A68_93  RSZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  SSZACTR;  /* YIELD */
A68_93  TSZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  WSZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  XSZACTR;  /* YIELD */
A68_93  YSZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  ZSZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(esac);
 /* line 467: */
 /* line 468: */
{ 
FSZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 469: */
GSZACTR_resultmode = (*A_NILCHECK((&(A_NILCHECK(Answer.Value)->Mode))));
 /* line 471: */
 /* line 472: */
 /* line 473: */
if (!Outpart)
{ 
 /* line 474: */
 /* line 476: */
if ((GSZACTR_resultmode==UEAACTR_voidmode)&EQIACTR_skipoption)
{ 
 /* line 479: */
/*SKIP*/;
} 
else
{ 
(void)(MRZACTR_out());
 /* line 480: */
KSZACTR = ISZACTR ;
(void)(MDMACTR_writecstream(A_HVEC(LSZACTR,A_UNITE(JSZACTR,mode2,2,KSZACTR),A68_93 ), FSZACTR_codestream));
 /* line 481: */
 /* line 482: */
 /* line 483: */
(void)(MDMACTR_writecstream(A_HVEC(NSZACTR,A_UNITE(MSZACTR,mode4,4,EIAACTR_cnewline),A68_93 ), FSZACTR_codestream));
} 
} 
 /* line 484: */
 /* line 485: */
SSZACTR = QSZACTR ;
OSZACTR.data[0] = A_UNITE(RSZACTR,mode2,2,SSZACTR);
OSZACTR.data[1] = A_UNITE(TSZACTR,mode4,4,EIAACTR_cnewline);
XSZACTR = VSZACTR ;
OSZACTR.data[2] = A_UNITE(WSZACTR,mode2,2,XSZACTR);
OSZACTR.data[3] = A_UNITE(YSZACTR,mode4,4,EIAACTR_cnewline);
 /* line 487: */
 /* line 488: */
(void)(MDMACTR_writecstream(A_HISVEC(ZSZACTR,OSZACTR,4,A68_93 ), FSZACTR_codestream));
} 
A_PROC_EXIT(esac);
return;
} 
#undef NL

A68_VOID  ETZACTR_fi(A68_BOOL  Elsepart, A68_109  Answer)
{ 
A68_INT  FTZACTR_codestream A_UNUSED = {0};
A68_INT  GTZACTR_resultmode A_UNUSED = {0};
A68_224  HTZACTR;  /* collateral clause result */
A68_93  KTZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  LTZACTR;  /* YIELD */
A68_93  MTZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  NTZACTR;  /* OPERATORS - istruct -> vector */
A68_224  OTZACTR;  /* collateral clause result */
A68_93  RTZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  STZACTR;  /* YIELD */
A68_93  TTZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  UTZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(fi);
 /* line 493: */
 /* line 494: */
{ 
FTZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 495: */
GTZACTR_resultmode = (*A_NILCHECK((&(A_NILCHECK(Answer.Value)->Mode))));
 /* line 496: */
 /* line 497: */
if (!Elsepart)
{ 
 /* line 498: */
 /* line 500: */
if (!(GTZACTR_resultmode==UEAACTR_voidmode))
{ 
(void)(HNZACTR_else());
 /* line 501: */
LTZACTR = JTZACTR ;
HTZACTR.data[0] = A_UNITE(KTZACTR,mode2,2,LTZACTR);
HTZACTR.data[1] = A_UNITE(MTZACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(NTZACTR,HTZACTR,2,A68_93 ), FTZACTR_codestream));
 /* line 502: */
 /* line 503: */
 /* line 504: */
(void)(JXIACTR_warning(316));
} 
} 
 /* line 505: */
STZACTR = QTZACTR ;
OTZACTR.data[0] = A_UNITE(RTZACTR,mode2,2,STZACTR);
OTZACTR.data[1] = A_UNITE(TTZACTR,mode4,4,EIAACTR_cnewline);
 /* line 506: */
(void)(MDMACTR_writecstream(A_HISVEC(UTZACTR,OTZACTR,2,A68_93 ), FTZACTR_codestream));
} 
A_PROC_EXIT(fi);
return;
} 
#undef NL
 /* line 516: */

A68_VOID  XTZACTR_optboolwarning(A68_BOOL  Orel, A68_94 * Operand1)
{ 
A68_INT  YTZACTR_codestream A_UNUSED = {0};
A68_VC  ZTZACTR;  /* clause result */
A68_VC  AUZACTR;  /* avoid structure result */
A68_98  EUZACTR;  /* avoid structure result */
A68_98  CUZACTR_temp A_UNUSED = {0};
A68_230  FUZACTR;  /* collateral clause result */
A68_VC  GUZACTR;  /* OPERATORS - istruct -> vector */
A68_75  HUZACTR;  /* OPERATORS - istruct -> vector */
A68_93  IUZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  JUZACTR;  /* YIELD */
A68_93  MUZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  NUZACTR;  /* YIELD */
A68_VC  OUZACTR;  /* avoid structure result */
A68_93  PUZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  QUZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  RUZACTR;  /* YIELD */
A68_93  SUZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  TUZACTR;  /* OPERATORS - istruct -> vector */
A68_95  UUZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  VUZACTR;  /* OPERATORS - istruct -> vector */
A68_75  WUZACTR;  /* OPERATORS - istruct -> vector */
A68_VC  XUZACTR_tester A_UNUSED = {0};
A68_230  YUZACTR;  /* collateral clause result */
A68_93  BVZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  CVZACTR;  /* YIELD */
A68_93  FVZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  GVZACTR;  /* YIELD */
A68_93  HVZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  KVZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  LVZACTR;  /* YIELD */
A68_93  MVZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  NVZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  OVZACTR;  /* YIELD */
A68_92  PVZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(optboolwarning);
 /* line 517: */
 /* line 518: */
{ 
YTZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 519: */
(void)(A_CALLPROC(JYQACTR_evaluate,(Operand1),(Operand1,(JYQACTR_evaluate).nonlocals)));
 /* line 520: */
 /* line 521: */
 /* line 522: */
 /* line 524: */
if (WXPACTR_istemp(Operand1))
{ 
 /* line 526: */
DAQACTR_getcfragment( Operand1, &AUZACTR );
ZTZACTR = AUZACTR;
} 
else
{ 
QMOACTR_declarectemporary( WEAACTR_boolmode, DUZACTR, &EUZACTR );
CUZACTR_temp = EUZACTR;
 /* line 527: */
 /* line 528: */
HUZACTR = (*A_NILCHECK((&(A_NILCHECK((&CUZACTR_temp))->Name)))) ;
JUZACTR = A_HISVEC(GUZACTR,HUZACTR,7,A68_CHAR ) ;
FUZACTR.data[0] = A_UNITE(IUZACTR,mode2,2,JUZACTR);
NUZACTR = LUZACTR ;
FUZACTR.data[1] = A_UNITE(MUZACTR,mode2,2,NUZACTR);
DAQACTR_getcfragment( Operand1, &OUZACTR );
FUZACTR.data[2] = A_UNITE(PUZACTR,mode2,2,OUZACTR);
 /* line 530: */
RUZACTR = ';' ;
FUZACTR.data[3] = A_UNITE(QUZACTR,mode1,1,RUZACTR);
FUZACTR.data[4] = A_UNITE(SUZACTR,mode4,4,EIAACTR_cnewline);
 /* line 531: */
(void)(MDMACTR_writecstream(A_HISVEC(TUZACTR,FUZACTR,5,A68_93 ), YTZACTR_codestream));
 /* line 534: */
(void)(NFZACTR_assignment((&(A_NILCHECK(Operand1)->Extra)), A_UNITE(UUZACTR,mode5,5,CUZACTR_temp)));
 /* line 535: */
 /* line 536: */
WUZACTR = (*A_NILCHECK((&(A_NILCHECK((&CUZACTR_temp))->Name)))) ;
ZTZACTR = A_HISVEC(VUZACTR,WUZACTR,7,A68_CHAR );
} 
XUZACTR_tester = ZTZACTR;
 /* line 537: */
 /* line 538: */
if (Orel)
{ 
CVZACTR = AVZACTR ;
YUZACTR.data[0] = A_UNITE(BVZACTR,mode2,2,CVZACTR);
} 
else
{ 
GVZACTR = EVZACTR ;
YUZACTR.data[0] = A_UNITE(FVZACTR,mode2,2,GVZACTR);
} 
YUZACTR.data[1] = A_UNITE(HVZACTR,mode2,2,XUZACTR_tester);
 /* line 539: */
LVZACTR = JVZACTR ;
YUZACTR.data[2] = A_UNITE(KVZACTR,mode2,2,LVZACTR);
 /* line 540: */
YUZACTR.data[3] = A_UNITE(MVZACTR,mode4,4,EIAACTR_cnewline);
OVZACTR = '{' ;
YUZACTR.data[4] = A_UNITE(NVZACTR,mode1,1,OVZACTR);
 /* line 541: */
 /* line 542: */
(void)(MDMACTR_writecstream(A_HISVEC(PVZACTR,YUZACTR,5,A68_93 ), YTZACTR_codestream));
} 
A_PROC_EXIT(optboolwarning);
return;
} 
#undef NL

A68_VOID  QVZACTR_optbooloper(void)
{ 
A68_224  RVZACTR;  /* collateral clause result */
A68_93  SVZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  TVZACTR;  /* YIELD */
A68_93  UVZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  VVZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(optbooloper);
TVZACTR = '}' ;
RVZACTR.data[0] = A_UNITE(SVZACTR,mode1,1,TVZACTR);
RVZACTR.data[1] = A_UNITE(UVZACTR,mode4,4,EIAACTR_cnewline);
 /* line 547: */
(void)(MDMACTR_writecstream(A_HISVEC(VVZACTR,RVZACTR,2,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel())));
A_PROC_EXIT(optbooloper);
return;
} 
#undef NL
 /* line 562: */
 /* line 563: */
 /* line 564: */
 /* line 565: */

A68_VOID  EWZACTR_endseries(A68_207  Properties, A68_109  Answer, A68_85 * Endofseries, A68_BOOL  Discardlevelactivated, A68_BOOL  Pullstack, A68_BOOL  Seriescontainsexit)
{ 
A_PROC_ENTRY(endseries);
 /* line 566: */
 /* line 568: */
 /* line 569: */
 /* line 570: */
 /* line 571: */
 /* line 573: */
 /* line 574: */
(void)(HDZACTR_endclause(Properties, Answer.End, Endofseries, Discardlevelactivated, Pullstack));
A_PROC_EXIT(endseries);
return;
} 
#undef NL

A68_VOID  HWZACTR_semi(A68_BOOL  Outstandingdynamicresult, A68_BOOL  Declaration)
{ 
A_PROC_ENTRY(semi);
 /* line 577: */
 /* line 579: */
/*SKIP*/;
A_PROC_EXIT(semi);
return;
} 
#undef NL

A68_VOID  LWZACTR_exit(A68_BOOL  Dynamicresult, A68_BOOL  Firstexit, A68_109  Seriesanswer)
{ 
A68_221  OWZACTR;  /* collateral clause result */
A68_93  RWZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  SWZACTR;  /* YIELD */
A68_VC  TWZACTR;  /* OPERATORS - istruct -> vector */
A68_75  UWZACTR;  /* OPERATORS - istruct -> vector */
A68_93  VWZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  WWZACTR;  /* YIELD */
A68_93  XWZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  YWZACTR;  /* YIELD */
A68_93  ZWZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  AXZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(exit);
 /* line 582: */
 /* line 584: */
{ 
(void)(WXIACTR_assert(NWZACTR, (Seriesanswer.End!=(A68_85 *)A68_NIL)));
 /* line 585: */
 /* line 586: */
SWZACTR = QWZACTR ;
OWZACTR.data[0] = A_UNITE(RWZACTR,mode2,2,SWZACTR);
UWZACTR = (*A_NILCHECK((&(A_NILCHECK(Seriesanswer.End)->Name)))) ;
WWZACTR = A_HISVEC(TWZACTR,UWZACTR,7,A68_CHAR ) ;
OWZACTR.data[1] = A_UNITE(VWZACTR,mode2,2,WWZACTR);
 /* line 587: */
YWZACTR = ';' ;
OWZACTR.data[2] = A_UNITE(XWZACTR,mode1,1,YWZACTR);
OWZACTR.data[3] = A_UNITE(ZWZACTR,mode4,4,EIAACTR_cnewline);
 /* line 588: */
 /* line 589: */
(void)(MDMACTR_writecstream(A_HISVEC(AXZACTR,OWZACTR,4,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel())));
} 
A_PROC_EXIT(exit);
return;
} 
#undef NL
 /* line 601: */
 /* line 603: */

A68_VOID  EXZACTR_codeinsert(A68_VC  Code, A68_INT  Mode, A68_101 * Visibles, A68_98  *ReturnedValue)
{ 
A68_98  FXZACTR_result A_UNUSED = {0};
A68_INT  GXZACTR_stream A_UNUSED = {0};
A68_205  JXZACTR_emitdefine;   /* proc value of non-global proc */
A68_76  YXZACTR_emitundefine;   /* proc value of non-global proc */
A68_249  KYZACTR_emitcode;   /* proc value of non-global proc */
A68_98  LZZACTR;  /* clause result */
A_PROC_ENTRY(codeinsert);
 /* line 604: */
 /* line 605: */
{ 
 /* line 606: */
GXZACTR_stream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 608: */
A_CLOSURE( JXZACTR_emitdefine, KXZACTR_emitdefine, LXZACTR_emitdefine );
(( LXZACTR_emitdefine * ) ( JXZACTR_emitdefine.nonlocals )) -> GXZACTR_stream = GXZACTR_stream;
 /* line 614: */
A_CLOSURE( YXZACTR_emitundefine, ZXZACTR_emitundefine, AYZACTR_emitundefine );
(( AYZACTR_emitundefine * ) ( YXZACTR_emitundefine.nonlocals )) -> GXZACTR_stream = GXZACTR_stream;
 /* line 620: */
A_CLOSURE( KYZACTR_emitcode, LYZACTR_emitcode, MYZACTR_emitcode );
(( MYZACTR_emitcode * ) ( KYZACTR_emitcode.nonlocals )) -> JXZACTR_emitdefine = JXZACTR_emitdefine;
(( MYZACTR_emitcode * ) ( KYZACTR_emitcode.nonlocals )) -> KYZACTR_emitcode = KYZACTR_emitcode;
(( MYZACTR_emitcode * ) ( KYZACTR_emitcode.nonlocals )) -> YXZACTR_emitundefine = YXZACTR_emitundefine;
(( MYZACTR_emitcode * ) ( KYZACTR_emitcode.nonlocals )) -> Mode = Mode;
(( MYZACTR_emitcode * ) ( KYZACTR_emitcode.nonlocals )) -> FXZACTR_result = (&FXZACTR_result);
(( MYZACTR_emitcode * ) ( KYZACTR_emitcode.nonlocals )) -> Code = Code;
(( MYZACTR_emitcode * ) ( KYZACTR_emitcode.nonlocals )) -> GXZACTR_stream = GXZACTR_stream;
 /* line 655: */
(void)(A_CALLPROC(KYZACTR_emitcode,(Visibles),(Visibles,(KYZACTR_emitcode).nonlocals)));
 /* line 656: */
 /* line 657: */
LZZACTR = FXZACTR_result;
} 
A_PROC_EXIT(codeinsert);
*ReturnedValue = (LZZACTR);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 6: */
void TCZACTR(void)   /* initialise DECS clauses */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel","-dir",".","clauses.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/vak/Project/Algol/Algol-68RS-Source/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/vak/Project/Algol/Algol-68RS-Source/a68config/a68config.m","./incimperatives.m","./unionaids.m","./modes.m","./incmode.m","./evaluator.m","./tracer.m","./moduletracer.m","./idtable.m","./values.m","./coutput.m","./centities.m","./environment.m","./environ.m","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config A_UNUSED;
/* --- end of configuration information */
A68_60  BSZACTR;  /* procedure value */
A68_242  BTZACTR;  /* procedure value */
A68_208  XVZACTR;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
UAAACTR();   /* USE incimperatives */
DVQACTR();   /* USE unionaids */
DNMACTR();   /* USE modes */
ZDAACTR();   /* USE incmode */
VGVACTR();   /* USE evaluator */
ZXYACTR();   /* USE tracer */
BCHACTR();   /* USE moduletracer */
PPKACTR();   /* USE idtable */
OUPACTR();   /* USE values */
PTLACTR();   /* USE coutput */
THAACTR();   /* USE centities */
HPIACTR();   /* USE environment */
BPLACTR();   /* USE environ */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/clauses.a68";
A_config.translation_time = "Thu Nov  5 21:56:13 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "SCZACTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 21:56:13 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS clauses);
(void)(UEAALIB_a68config(LGAALIB_configinfo, XCZACTR));
 /* line 53: */
 /* line 54: */
 /* line 56: */
 /* line 57: */
 /* line 71: */
 /* line 72: */
 /* line 87: */
 /* line 93: */
 /* line 152: */
 /* line 206: */
 /* line 207: */
 /* line 229: */
 /* line 234: */
 /* line 235: */
 /* line 266: */
 /* line 267: */
 /* line 298: */
 /* line 299: */
 /* line 322: */
 /* line 372: */
 /* line 386: */
 /* line 387: */
 /* line 389: */
 /* line 394: */
 /* line 409: */
 /* line 410: */
 /* line 431: */
 /* line 440: */
 /* line 441: */
 /* line 455: */
 /* line 456: */
 /* line 457: */
 /* line 464: */
BSZACTR.fn.fn_global = MRZACTR_out;
BSZACTR.nonlocals = A68_NIL;
ASZACTR_outu = (BSZACTR);
 /* line 466: */
 /* line 490: */
BTZACTR.fn.fn_global = ESZACTR_esac;
BTZACTR.nonlocals = A68_NIL;
ATZACTR_esacu = (BTZACTR);
 /* line 492: */
 /* line 513: */
 /* line 514: */
 /* line 544: */
 /* line 545: */
 /* line 546: */
 /* line 554: */
 /* line 558: */
XVZACTR.fn.fn_global = BDZACTR_startclause;
XVZACTR.nonlocals = A68_NIL;
WVZACTR_startseries = (XVZACTR);
 /* line 560: */
 /* line 561: */
 /* line 576: */
 /* line 581: */
 /* line 597: */
 /* line 598: */
 /* line 659: */
 /* line 661: */
 /* line 674: */
/*SKIP*/;
A_PROC_EXIT(DECS clauses);
} 
#undef NL
/* end of translation of clauses.a68 */
