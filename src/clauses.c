/* UNAME:JBZACTR */
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
extern A68_VOID  WWQACTR_uniontouniontable(struct A68t172 ,struct A68t172 ,A68_VC *);
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
extern A68_141  XGVACTR_calltrace;
extern A68_115  BYQACTR_evaluate;
extern A68_VOID  GMVACTR_evaluatestack(struct A68t101 **);
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
extern A68_VOID  UZPACTR_getcfragment(struct A68t94 *,A68_VC *);
extern A68_101 * MKJACTR_nilvaluelist;
extern A68_94 * JQQACTR_yield(A68_VC ,struct A68t94 *);
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
extern void VUQACTR(void);   /* unionaids */
extern void DNMACTR(void);   /* modes */
extern void ZDAACTR(void);   /* incmode */
extern void JGVACTR(void);   /* evaluator */
extern void QWYACTR(void);   /* tracer */
extern void BCHACTR(void);   /* moduletracer */
extern void PPKACTR(void);   /* idtable */
extern void OUPACTR(void);   /* values */
extern void PTLACTR(void);   /* coutput */
extern void THAACTR(void);   /* centities */
extern void HPIACTR(void);   /* environment */
extern void BPLACTR(void);   /* environ */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_206   NBZACTR = {"$Id: clauses.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,OBZACTR,NBZACTR,57)
static A68_210   KCZACTR = {"evaluate no result: mode of value not void"}; 
A_GISVEC(A68_VC ,LCZACTR,KCZACTR,42)
static A68_211   NCZACTR = {""}; 
A_GISVEC(A68_VC ,OCZACTR,NCZACTR,0)
static A68_211   FDZACTR = {""}; 
A_GISVEC(A68_VC ,GDZACTR,FDZACTR,0)
static A68_75   LDZACTR = {"(void)("}; 
A_GISVEC(A68_VC ,MDZACTR,LDZACTR,7)
static A68_75   VDZACTR = {"clauses"}; 
A_GISVEC(A68_VC ,WDZACTR,VDZACTR,7)
static A68_214   EEZACTR = {"clause result"}; 
A_GISVEC(A68_VC ,NEZACTR,EEZACTR,13)
static A68_217   WEZACTR = {"evaluate result: unknown value OF answer"}; 
A_GISVEC(A68_VC ,XEZACTR,WEZACTR,40)
static A68_211   YEZACTR = {""}; 
A_GISVEC(A68_VC ,ZEZACTR,YEZACTR,0)
static A68_218   CFZACTR = {"evaluate result: value of value stack has incorrect mode"}; 
A_GISVEC(A68_VC ,DFZACTR,CFZACTR,56)
static A68_219   EFZACTR = {"; "}; 
A_GISVEC(A68_VC ,FFZACTR,EFZACTR,2)
static A68_220   LFZACTR = {" = "}; 
A_GISVEC(A68_VC ,MFZACTR,LFZACTR,3)
static A68_222   AGZACTR = {"evaluate simple enquiry: value of value stack has incorrect mode"}; 
A_GISVEC(A68_VC ,BGZACTR,AGZACTR,64)
static A68_219   IGZACTR = {"{ "}; 
A_GISVEC(A68_VC ,JGZACTR,IGZACTR,2)
static A68_226   UGZACTR = {"clauses: end: end of clause label not set"}; 
A_GISVEC(A68_VC ,VGZACTR,UGZACTR,41)
static A68_220   BHZACTR = {": ;"}; 
A_GISVEC(A68_VC ,CHZACTR,BHZACTR,3)
static A68_219   IHZACTR = {"} "}; 
A_GISVEC(A68_VC ,JHZACTR,IHZACTR,2)
static A68_228   WHZACTR = {"A_ERROR(\"Bad case conformity - two choices for mode\");"}; 
A_GISVEC(A68_VC ,XHZACTR,WHZACTR,54)
static A68_229   EIZACTR = {"case "}; 
A_GISVEC(A68_VC ,FIZACTR,EIZACTR,5)
static A68_219   KIZACTR = {": "}; 
A_GISVEC(A68_VC ,LIZACTR,KIZACTR,2)
static A68_220   OIZACTR = {"/* "}; 
static A68_220   PIZACTR = {" */"}; 
A_GISVEC(A68_VC ,QIZACTR,OIZACTR,3)
A_GISVEC(A68_VC ,SIZACTR,PIZACTR,3)
static A68_211   VIZACTR = {""}; 
A_GISVEC(A68_VC ,WIZACTR,VIZACTR,0)
static A68_233   ELZACTR = {"A_ENQ_SKIP"}; 
A_GISVEC(A68_VC ,GLZACTR,ELZACTR,10)
static A68_40   LLZACTR = {"if ("}; 
A_GISVEC(A68_VC ,MLZACTR,LLZACTR,4)
static A68_219   TLZACTR = {"{ "}; 
A_GISVEC(A68_VC ,ULZACTR,TLZACTR,2)
static A68_219   BMZACTR = {"} "}; 
A_GISVEC(A68_VC ,CMZACTR,BMZACTR,2)
static A68_40   GMZACTR = {"else"}; 
A_GISVEC(A68_VC ,HMZACTR,GMZACTR,4)
static A68_219   LMZACTR = {"{ "}; 
A_GISVEC(A68_VC ,MMZACTR,LMZACTR,2)
static A68_233   TMZACTR = {"A_ENQ_SKIP"}; 
A_GISVEC(A68_VC ,VMZACTR,TMZACTR,10)
static A68_235   ZMZACTR = {"switch ( "}; 
A_GISVEC(A68_VC ,ANZACTR,ZMZACTR,9)
static A68_219   ENZACTR = {" )"}; 
A_GISVEC(A68_VC ,FNZACTR,ENZACTR,2)
static A68_219   JNZACTR = {"{ "}; 
A_GISVEC(A68_VC ,KNZACTR,JNZACTR,2)
static A68_236   ONZACTR = {"case 1: "}; 
A_GISVEC(A68_VC ,PNZACTR,ONZACTR,8)
static A68_239   YNZACTR = {"united object - for case conformity"}; 
A_GISVEC(A68_VC ,ZNZACTR,YNZACTR,35)
static A68_235   EOZACTR = {"switch ( "}; 
A_GISVEC(A68_VC ,FOZACTR,EOZACTR,9)
static A68_229   JOZACTR = {".mode"}; 
A_GISVEC(A68_VC ,KOZACTR,JOZACTR,5)
static A68_219   NOZACTR = {" )"}; 
A_GISVEC(A68_VC ,OOZACTR,NOZACTR,2)
static A68_219   SOZACTR = {"{ "}; 
A_GISVEC(A68_VC ,TOZACTR,SOZACTR,2)
static A68_241   BPZACTR = {"break;"}; 
A_GISVEC(A68_VC ,CPZACTR,BPZACTR,6)
static A68_229   GPZACTR = {"case "}; 
A_GISVEC(A68_VC ,HPZACTR,GPZACTR,5)
static A68_219   MPZACTR = {": "}; 
A_GISVEC(A68_VC ,NPZACTR,MPZACTR,2)
static A68_241   YPZACTR = {"break;"}; 
A_GISVEC(A68_VC ,ZPZACTR,YPZACTR,6)
static A68_241   HQZACTR = {"break;"}; 
A_GISVEC(A68_VC ,IQZACTR,HQZACTR,6)
static A68_235   MQZACTR = {"default: "}; 
A_GISVEC(A68_VC ,NQZACTR,MQZACTR,9)
A68_60  SQZACTR_outu A_UNUSED;
static A68_243   ZQZACTR = {"A_IMP_SKIP ;"}; 
A_GISVEC(A68_VC ,ARZACTR,ZQZACTR,12)
static A68_241   HRZACTR = {"break;"}; 
A_GISVEC(A68_VC ,IRZACTR,HRZACTR,6)
static A68_219   MRZACTR = {"} "}; 
A_GISVEC(A68_VC ,NRZACTR,MRZACTR,2)
A68_242  SRZACTR_esacu A_UNUSED;
static A68_243   ASZACTR = {"A_IMP_SKIP ;"}; 
A_GISVEC(A68_VC ,BSZACTR,ASZACTR,12)
static A68_219   HSZACTR = {"} "}; 
A_GISVEC(A68_VC ,ISZACTR,HSZACTR,2)
static A68_245   TSZACTR = {"optbool result"}; 
A_GISVEC(A68_VC ,VSZACTR,TSZACTR,14)
static A68_220   CTZACTR = {" = "}; 
A_GISVEC(A68_VC ,DTZACTR,CTZACTR,3)
static A68_75   RTZACTR = {"if ( ! "}; 
A_GISVEC(A68_VC ,STZACTR,RTZACTR,7)
static A68_229   VTZACTR = {"if ( "}; 
A_GISVEC(A68_VC ,WTZACTR,VTZACTR,5)
static A68_219   AUZACTR = {" )"}; 
A_GISVEC(A68_VC ,BUZACTR,AUZACTR,2)
A68_208  OUZACTR_startseries A_UNUSED;
static A68_210   EVZACTR = {"clauses: exit: end of series label not set"}; 
A_GISVEC(A68_VC ,FVZACTR,EVZACTR,42)
static A68_229   HVZACTR = {"goto "}; 
A_GISVEC(A68_VC ,IVZACTR,HVZACTR,5)
static A68_236   FWZACTR = {"#define "}; 
A_GISVEC(A68_VC ,GWZACTR,FWZACTR,8)
static A68_75   UWZACTR = {"#undef "}; 
A_GISVEC(A68_VC ,VWZACTR,UWZACTR,7)
static A68_250   PXZACTR = {"yield of code insert"}; 
A_GISVEC(A68_VC ,QXZACTR,PXZACTR,20)
static A68_241   SXZACTR = {"RESULT"}; 
A_GISVEC(A68_VC ,VXZACTR,SXZACTR,6)
static A68_241   BYZACTR = {"RESULT"}; 
A_GISVEC(A68_VC ,CYZACTR,BYZACTR,6)
typedef struct   /* env of non-global proc */
{
A68_VC  SCZACTR_f;
} VCZACTR_isident;
typedef struct   /* env of non-global proc */
{
A68_INT * SJZACTR_lo;
A68_INT * TJZACTR_hi;
A68_VC  RJZACTR_f;
} XJZACTR_scan;
typedef struct   /* env of non-global proc */
{
A68_INT * TJZACTR_hi;
A68_INT * SJZACTR_lo;
A68_VC  RJZACTR_f;
A68_232  VJZACTR_scan;
} FKZACTR_whollybracketed;
typedef struct   /* env of non-global proc */
{
A68_BOOL * OKZACTR_assignment;
A68_INT * SJZACTR_lo;
A68_INT * TJZACTR_hi;
A68_VC  RJZACTR_f;
} SKZACTR_anonymous;
typedef struct   /* env of non-global proc */
{
A68_INT  YVZACTR_stream;
A_PAD_INT(PAD_115)
} DWZACTR_emitdefine;
typedef struct   /* env of non-global proc */
{
A68_INT  YVZACTR_stream;
A_PAD_INT(PAD_116)
} SWZACTR_emitundefine;
typedef struct   /* env of non-global proc */
{
A68_205  BWZACTR_emitdefine;
A68_249  CXZACTR_emitcode;
A68_76  QWZACTR_emitundefine;
A68_INT  Mode;
A_PAD_INT(PAD_117)
A68_98 * XVZACTR_result;
A68_VC  Code;
A68_INT  YVZACTR_stream;
A_PAD_INT(PAD_118)
} EXZACTR_emitcode;
typedef struct   /* env of non-global proc */
{
A68_INT * IKZACTR_firstclose;
} MKZACTR_anonymous;

A68_VOID  SBZACTR_startclause(A68_207  Properties, A68_85 ** Endofclause, A68_BOOL * Discardlevelactivated);

A68_VOID  YBZACTR_endclause(A68_207  Properties, A68_85 * Endofanswer, A68_85 * Endofclause, A68_BOOL  Discardlevelactivated, A68_BOOL  Pullstack);

A_STATIC A68_BOOL  BCZACTR_cf(A68_INT  M1, A68_INT  M2);

A68_VOID  ECZACTR_evaluatenoresult(A68_101 ** Valuestack);

A_STATIC A68_BOOL  UCZACTR_isident(void *NonLocals);

A68_VOID  AEZACTR_evaluateresult(A68_101 ** Valuestack, A68_109  Answer);

A_STATIC A68_95 * HEZACTR_assignment(A68_95 * FEZACTR_anonymous, A68_95  GEZACTR_anonymous);

A68_VOID  YFZACTR_evaluatesimpleenquiry(A68_101 ** Valuestack, A68_109  Answer);

A68_VOID  GGZACTR_begin(A68_BOOL  Seriescontainslabel, A68_BOOL  Routinebody);

A68_VOID  SGZACTR_end(A68_BOOL  Dynamicresult, A68_BOOL  Seriescontainsexit, A68_BOOL  Routinebody, A68_85 * Endofclauselabel);

A_STATIC A68_VOID  RHZACTR_outputcaseulabel(A68_INT  Mode, A68_INT  Casenumber, A68_77  Case);

A_STATIC A68_VOID  EJZACTR_subunionchoice(A68_154  Uchoice, A68_94  Union, A68_77  Case);

A_STATIC A68_VOID  QJZACTR_condition(A68_VC  Frag, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  WJZACTR_scan(A68_55  Attop, void *NonLocals);

A_STATIC A68_BOOL  EKZACTR_whollybracketed(void *NonLocals);

A_STATIC A68_BOOL  LKZACTR_anonymous(A68_INT  I, void *NonLocals);

A_STATIC A68_BOOL  RKZACTR_anonymous(A68_INT  I, void *NonLocals);

A68_VOID  DLZACTR_then(A68_94 * Enquiry);

A68_VOID  ZLZACTR_else(void);

A68_VOID  SMZACTR_casein(A68_94 * Enquiry);

A68_VOID  XNZACTR_inu(A68_154  Uchoice, A68_94 * Union, A68_77  Case);

A68_VOID  ZOZACTR_comma(A68_INT  Caseno);

A68_VOID  VPZACTR_commau(A68_154  Uchoice, A68_94  Union, A68_77  Case);

A68_VOID  EQZACTR_out(void);

A68_VOID  WQZACTR_esac(A68_BOOL  Outpart, A68_109  Answer);

A68_VOID  WRZACTR_fi(A68_BOOL  Elsepart, A68_109  Answer);

A68_VOID  PSZACTR_optboolwarning(A68_BOOL  Orel, A68_94 * Operand1);

A68_VOID  IUZACTR_optbooloper(void);

A68_VOID  WUZACTR_endseries(A68_207  Properties, A68_109  Answer, A68_85 * Endofseries, A68_BOOL  Discardlevelactivated, A68_BOOL  Pullstack, A68_BOOL  Seriescontainsexit);

A68_VOID  ZUZACTR_semi(A68_BOOL  Outstandingdynamicresult, A68_BOOL  Declaration);

A68_VOID  DVZACTR_exit(A68_BOOL  Dynamicresult, A68_BOOL  Firstexit, A68_109  Seriesanswer);

A68_VOID  WVZACTR_codeinsert(A68_VC  Code, A68_INT  Mode, A68_101 * Visibles, A68_98  *ReturnedValue);

A_STATIC A68_VOID  CWZACTR_emitdefine(A68_VC  Symbol, A68_VC  Text, void *NonLocals);

A_STATIC A68_VOID  RWZACTR_emitundefine(A68_VC  Symbol, void *NonLocals);

A_STATIC A68_VOID  DXZACTR_emitcode(A68_101 * List, void *NonLocals);

A_STATIC A68_BOOL  LKZACTR_anonymous(A68_INT  I, void *NonLocals)
#define NL(x) (((MKZACTR_anonymous *)NonLocals)->x)
{ 
A68_BOOL  NKZACTR;  /* clause result */
{ 
(*NL(IKZACTR_firstclose)) = I;
NKZACTR = A68_FALSE;
} 
return( NKZACTR );
} 
#undef NL

A_STATIC A68_BOOL  UCZACTR_isident(void *NonLocals)
#define NL(x) (((VCZACTR_isident *)NonLocals)->x)
{ 
A68_BOOL  WCZACTR_ok A_UNUSED = {0};
A68_INT  XCZACTR_i A_UNUSED = {0};
A68_INT  YCZACTR;  /* to part of loop */
A68_CHAR  ZCZACTR_c A_UNUSED = {0};
A68_BOOL  ADZACTR;  /* optbool result */
A68_BOOL  BDZACTR;  /* optbool result */
A68_BOOL  CDZACTR;  /* optbool result */
A68_BOOL  DDZACTR;  /* optbool result */
A68_BOOL  EDZACTR;  /* clause result */
A_PROC_ENTRY(isident);
{ 
WCZACTR_ok = (NL(SCZACTR_f).upb>0);
 /* line 128: */
YCZACTR = NL(SCZACTR_f).upb;
for ( XCZACTR_i = 1;
XCZACTR_i <= YCZACTR;
XCZACTR_i += 1 )
{ 
 /* line 129: */
if ( !(WCZACTR_ok) ) break;
ZCZACTR_c = A_VINDEX(NL(SCZACTR_f),XCZACTR_i);
 /* line 130: */
ADZACTR = (ZCZACTR_c=='_');
if ( ! ADZACTR )
{BDZACTR = (ZCZACTR_c>='a');
if ( BDZACTR )
{BDZACTR = (ZCZACTR_c<='z');
}
 /* line 131: */
ADZACTR = BDZACTR;
}
if ( ! ADZACTR )
{CDZACTR = (ZCZACTR_c>='A');
if ( CDZACTR )
{CDZACTR = (ZCZACTR_c<='Z');
}
 /* line 132: */
ADZACTR = CDZACTR;
}
if ( ! ADZACTR )
{DDZACTR = (ZCZACTR_c>='0');
if ( DDZACTR )
{DDZACTR = (ZCZACTR_c<='9');
}
 /* line 133: */
ADZACTR = DDZACTR;
}
WCZACTR_ok = ADZACTR;
}
 /* line 134: */
 /* line 135: */
EDZACTR = WCZACTR_ok;
} 
A_PROC_EXIT(isident);
return( EDZACTR );
} 
#undef NL

A_STATIC A68_95 * HEZACTR_assignment(A68_95 * FEZACTR_anonymous, A68_95  GEZACTR_anonymous)
{ 
A68_95  IEZACTR;  /* united object - for case conformity */
A68_VC  JEZACTR_anonymous A_UNUSED = {0};
A68_VC  KEZACTR;  /* OPERATORS - copy to flex */
A68_216 * LEZACTR;  /* YIELD */
A68_95 * MEZACTR;  /* clause result */
{ 
(*FEZACTR_anonymous) = GEZACTR_anonymous;
IEZACTR = GEZACTR_anonymous ;
switch ( IEZACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
JEZACTR_anonymous = (IEZACTR.data.mode6);
LEZACTR = &(FEZACTR_anonymous-> data.mode6) ;
(void)((*LEZACTR) = A_VCOPY(JEZACTR_anonymous,KEZACTR,A68_CHAR ));
break;
default: 
/*SKIP*/;
break;
} 
MEZACTR = FEZACTR_anonymous;
} 
return( MEZACTR );
} 
#undef NL

A_STATIC A68_VOID  WJZACTR_scan(A68_55  Attop, void *NonLocals)
#define NL(x) (((XJZACTR_scan *)NonLocals)->x)
{ 
A68_INT  YJZACTR_d A_UNUSED = {0};
A68_INT  ZJZACTR_i A_UNUSED = {0};
A68_CHAR  AKZACTR_q A_UNUSED = {0};
A68_CHAR  BKZACTR_c A_UNUSED = {0};
A68_BOOL  CKZACTR;  /* optbool result */
A_PROC_ENTRY(scan);
 /* line 338: */
 /* line 339: */
{ 
YJZACTR_d = 0;
ZJZACTR_i = (*NL(SJZACTR_lo));
 /* line 340: */
AKZACTR_q = ' ';
 /* line 341: */
for ( ;; )
{ 
 /* line 342: */
if ( !((ZJZACTR_i<=(*NL(TJZACTR_hi)))) ) break;
BKZACTR_c = A_VINDEX(NL(RJZACTR_f),ZJZACTR_i);
 /* line 343: */
 /* line 344: */
if (AKZACTR_q!=' ')
{ 
if (BKZACTR_c=='\\')
{ 
ZJZACTR_i+=1;
} 
else
{ 
if (BKZACTR_c==AKZACTR_q)
{ 
 /* line 345: */
AKZACTR_q = ' ';
} 
} 
} 
else
{ 
CKZACTR = (BKZACTR_c=='\'');
if ( ! CKZACTR )
{ /* line 346: */
CKZACTR = (BKZACTR_c=='\"');
}
if (CKZACTR)
{ 
 /* line 347: */
AKZACTR_q = BKZACTR_c;
} 
else
{ 
 /* line 348: */
if (BKZACTR_c=='(')
{ 
 /* line 349: */
YJZACTR_d+=1;
} 
else
{ 
 /* line 350: */
if (BKZACTR_c==')')
{ 
YJZACTR_d-=1;
 /* line 351: */
if (YJZACTR_d==0)
{ 
if (!A_CALLPROC(Attop,(ZJZACTR_i),(ZJZACTR_i,(Attop).nonlocals)))
{ 
 /* line 352: */
(void)(ZJZACTR_i = (*NL(TJZACTR_hi)));
} 
} 
} 
else
{ 
 /* line 353: */
if (YJZACTR_d==0)
{ 
if (!A_CALLPROC(Attop,(ZJZACTR_i),(ZJZACTR_i,(Attop).nonlocals)))
{ 
 /* line 354: */
(void)(ZJZACTR_i = (*NL(TJZACTR_hi)));
} 
} 
} 
} 
} 
} 
 /* line 355: */
 /* line 356: */
ZJZACTR_i+=1;
}
 /* line 357: */
} 
A_PROC_EXIT(scan);
return;
} 
#undef NL

A_STATIC A68_BOOL  EKZACTR_whollybracketed(void *NonLocals)
#define NL(x) (((FKZACTR_whollybracketed *)NonLocals)->x)
{ 
A68_BOOL  GKZACTR;  /* optbool result */
A68_BOOL  HKZACTR;  /* clause result */
A68_INT  IKZACTR_firstclose A_UNUSED = {0};
A68_55  KKZACTR_anonymous;   /* proc value of non-global proc */
A_PROC_ENTRY(whollybracketed);
GKZACTR = (((*NL(TJZACTR_hi))-(*NL(SJZACTR_lo)))<1);
if ( ! GKZACTR )
{GKZACTR = (A_VINDEX(NL(RJZACTR_f),(*NL(SJZACTR_lo)))!='(');
}
if ( ! GKZACTR )
{ /* line 360: */
GKZACTR = (A_VINDEX(NL(RJZACTR_f),(*NL(TJZACTR_hi)))!=')');
}
if (GKZACTR)
{ 
 /* line 361: */
 /* line 362: */
HKZACTR = A68_FALSE;
} 
else
{ 
IKZACTR_firstclose = 0;
 /* line 363: */
A_CLOSURE( KKZACTR_anonymous, LKZACTR_anonymous, MKZACTR_anonymous );
(( MKZACTR_anonymous * ) ( KKZACTR_anonymous.nonlocals )) -> IKZACTR_firstclose = (&IKZACTR_firstclose);
(void)(A_CALLPROC(NL(VJZACTR_scan),(KKZACTR_anonymous),(KKZACTR_anonymous,(NL(VJZACTR_scan)).nonlocals)));
 /* line 364: */
 /* line 365: */
HKZACTR = (IKZACTR_firstclose==(*NL(TJZACTR_hi)));
} 
A_PROC_EXIT(whollybracketed);
return( HKZACTR );
} 
#undef NL

A_STATIC A68_BOOL  RKZACTR_anonymous(A68_INT  I, void *NonLocals)
#define NL(x) (((SKZACTR_anonymous *)NonLocals)->x)
{ 
A68_BOOL  TKZACTR;  /* optbool result */
A68_INT  UKZACTR;  /* YIELD */
A68_INT  VKZACTR;  /* YIELD */
A68_BOOL  WKZACTR;  /* clause result */
 /* line 369: */
{ 
TKZACTR = (I>(*NL(SJZACTR_lo)));
if ( TKZACTR )
{TKZACTR = (I<(*NL(TJZACTR_hi)));
}
if ( TKZACTR )
{ /* line 370: */
TKZACTR = (A_VINDEX(NL(RJZACTR_f),I)=='=');
}
if ( TKZACTR )
{UKZACTR = (I-1) ;
TKZACTR = (A_VINDEX(NL(RJZACTR_f),UKZACTR)==' ');
}
if ( TKZACTR )
{VKZACTR = (I+1) ;
TKZACTR = (A_VINDEX(NL(RJZACTR_f),VKZACTR)==' ');
}
(*NL(OKZACTR_assignment)) = TKZACTR;
 /* line 371: */
WKZACTR = (!(*NL(OKZACTR_assignment)));
} 
return( WKZACTR );
} 
#undef NL

A_STATIC A68_VOID  CWZACTR_emitdefine(A68_VC  Symbol, A68_VC  Text, void *NonLocals)
#define NL(x) (((DWZACTR_emitdefine *)NonLocals)->x)
{ 
A68_230  EWZACTR;  /* collateral clause result */
A68_93  HWZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  IWZACTR;  /* YIELD */
A68_93  JWZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  KWZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  LWZACTR;  /* YIELD */
A68_93  MWZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  NWZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  OWZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(emitdefine);
 /* line 614: */
IWZACTR = GWZACTR ;
EWZACTR.data[0] = A_UNITE(HWZACTR,mode2,2,IWZACTR);
EWZACTR.data[1] = A_UNITE(JWZACTR,mode2,2,Symbol);
LWZACTR = ' ' ;
EWZACTR.data[2] = A_UNITE(KWZACTR,mode1,1,LWZACTR);
 /* line 615: */
EWZACTR.data[3] = A_UNITE(MWZACTR,mode2,2,Text);
EWZACTR.data[4] = A_UNITE(NWZACTR,mode4,4,EIAACTR_cnewline);
 /* line 616: */
(void)(MDMACTR_writecstream(A_HISVEC(OWZACTR,EWZACTR,5,A68_93 ), NL(YVZACTR_stream)));
A_PROC_EXIT(emitdefine);
return;
} 
#undef NL

A_STATIC A68_VOID  RWZACTR_emitundefine(A68_VC  Symbol, void *NonLocals)
#define NL(x) (((SWZACTR_emitundefine *)NonLocals)->x)
{ 
A68_212  TWZACTR;  /* collateral clause result */
A68_93  WWZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  XWZACTR;  /* YIELD */
A68_93  YWZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  ZWZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  AXZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(emitundefine);
 /* line 620: */
XWZACTR = VWZACTR ;
TWZACTR.data[0] = A_UNITE(WWZACTR,mode2,2,XWZACTR);
 /* line 621: */
TWZACTR.data[1] = A_UNITE(YWZACTR,mode2,2,Symbol);
TWZACTR.data[2] = A_UNITE(ZWZACTR,mode4,4,EIAACTR_cnewline);
 /* line 622: */
(void)(MDMACTR_writecstream(A_HISVEC(AXZACTR,TWZACTR,3,A68_93 ), NL(YVZACTR_stream)));
A_PROC_EXIT(emitundefine);
return;
} 
#undef NL

A_STATIC A68_VOID  DXZACTR_emitcode(A68_101 * List, void *NonLocals)
#define NL(x) (((EXZACTR_emitcode *)NonLocals)->x)
{ 
A68_INT  FXZACTR_id A_UNUSED = {0};
A68_95  GXZACTR;  /* united object - for case conformity */
A68_97  HXZACTR_i A_UNUSED = {0};
A68_VC  IXZACTR;  /* avoid structure result */
A68_VC  JXZACTR;  /* avoid structure result */
A68_VC  KXZACTR;  /* avoid structure result */
A68_96  LXZACTR_r A_UNUSED = {0};
A68_VC  MXZACTR;  /* avoid structure result */
A68_VC  NXZACTR;  /* avoid structure result */
A68_VC  OXZACTR;  /* avoid structure result */
A68_98  RXZACTR;  /* avoid structure result */
A68_VC  TXZACTR;  /* OPERATORS - istruct -> vector */
A68_75  UXZACTR;  /* OPERATORS - istruct -> vector */
A68_VC  WXZACTR;  /* avoid structure result */
A68_93  XXZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  YXZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_93  ZXZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  AYZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(emitcode);
 /* line 625: */
 /* line 626: */
{ 
 /* line 627: */
if (List!=MKJACTR_nilvaluelist)
{ 
 /* line 628: */
 /* line 629: */
GXZACTR = (*(&((&(List->Value))->Extra))) ;
switch ( GXZACTR.mode )
{ 
case 4: /* STRUCT(INT)  */
HXZACTR_i = (GXZACTR.data.mode4);
 /* line 630: */
{ 
FXZACTR_id = HXZACTR_i.Idno;
 /* line 631: */
UTKACTR_idfullname( FXZACTR_id, &IXZACTR );
LRKACTR_idname( FXZACTR_id, &JXZACTR );
(void)(A_CALLPROC(NL(BWZACTR_emitdefine),(JXZACTR, IXZACTR),(JXZACTR, IXZACTR,(NL(BWZACTR_emitdefine)).nonlocals)));
 /* line 632: */
(void)(A_CALLPROC(NL(CXZACTR_emitcode),((*(&(List->Rest)))),((*(&(List->Rest))),(NL(CXZACTR_emitcode)).nonlocals)));
 /* line 633: */
 /* line 634: */
 /* line 635: */
LRKACTR_idname( FXZACTR_id, &KXZACTR );
(void)(A_CALLPROC(NL(QWZACTR_emitundefine),(KXZACTR),(KXZACTR,(NL(QWZACTR_emitundefine)).nonlocals)));
} 
break;
case 2: /* STRUCT(INT)  */
LXZACTR_r = (GXZACTR.data.mode2);
 /* line 636: */
{ 
FXZACTR_id = LXZACTR_r.Rdenno;
 /* line 637: */
UTKACTR_idfullname( FXZACTR_id, &MXZACTR );
LRKACTR_idname( FXZACTR_id, &NXZACTR );
(void)(A_CALLPROC(NL(BWZACTR_emitdefine),(NXZACTR, MXZACTR),(NXZACTR, MXZACTR,(NL(BWZACTR_emitdefine)).nonlocals)));
 /* line 638: */
(void)(A_CALLPROC(NL(CXZACTR_emitcode),((*(&(List->Rest)))),((*(&(List->Rest))),(NL(CXZACTR_emitcode)).nonlocals)));
 /* line 639: */
 /* line 640: */
 /* line 641: */
LRKACTR_idname( FXZACTR_id, &OXZACTR );
(void)(A_CALLPROC(NL(QWZACTR_emitundefine),(OXZACTR),(OXZACTR,(NL(QWZACTR_emitundefine)).nonlocals)));
} 
break;
default: 
(void)(PXIACTR_error(902));
 /* line 642: */
 /* line 643: */
 /* line 644: */
(void)(A_CALLPROC(NL(CXZACTR_emitcode),((*(&(List->Rest)))),((*(&(List->Rest))),(NL(CXZACTR_emitcode)).nonlocals)));
break;
} 
} 
else
{ 
 /* line 645: */
if (NL(Mode)!=UEAACTR_voidmode)
{ 
 /* line 648: */
QMOACTR_declarectemporary( NL(Mode), QXZACTR, &RXZACTR );
(*NL(XVZACTR_result)) = RXZACTR;
 /* line 649: */
 /* line 650: */
UXZACTR = (*(&(NL(XVZACTR_result)->Name))) ;
(void)(A_CALLPROC(NL(BWZACTR_emitdefine),(VXZACTR, A_HISVEC(TXZACTR,UXZACTR,7,A68_CHAR )),(VXZACTR, A_HISVEC(TXZACTR,UXZACTR,7,A68_CHAR ),(NL(BWZACTR_emitdefine)).nonlocals)));
} 
 /* line 651: */
VJAACTR_curly( NL(Code), &WXZACTR );
(void)(MDMACTR_writecstream(A_HVEC(YXZACTR,A_UNITE(XXZACTR,mode2,2,WXZACTR),A68_93 ), NL(YVZACTR_stream)));
 /* line 652: */
(void)(MDMACTR_writecstream(A_HVEC(AYZACTR,A_UNITE(ZXZACTR,mode4,4,EIAACTR_cnewline),A68_93 ), NL(YVZACTR_stream)));
 /* line 653: */
 /* line 654: */
if (NL(Mode)!=UEAACTR_voidmode)
{ 
 /* line 655: */
 /* line 656: */
 /* line 657: */
(void)(A_CALLPROC(NL(QWZACTR_emitundefine),(CYZACTR),(CYZACTR,(NL(QWZACTR_emitundefine)).nonlocals)));
} 
} 
} 
A_PROC_EXIT(emitcode);
return;
} 
#undef NL
 /* line 58: */
 /* line 60: */

A68_VOID  SBZACTR_startclause(A68_207  Properties, A68_85 ** Endofclause, A68_BOOL * Discardlevelactivated)
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

A68_VOID  YBZACTR_endclause(A68_207  Properties, A68_85 * Endofanswer, A68_85 * Endofclause, A68_BOOL  Discardlevelactivated, A68_BOOL  Pullstack)
{ 
A_PROC_ENTRY(endclause);
 /* line 83: */
 /* line 85: */
/*SKIP*/;
A_PROC_EXIT(endclause);
return;
} 
#undef NL

A_STATIC A68_BOOL  BCZACTR_cf(A68_INT  M1, A68_INT  M2)
{ 
A68_BOOL  CCZACTR;  /* clause result */
A_PROC_ENTRY(cf);
 /* line 91: */
CCZACTR = (HCNACTR_finddeflexmode(M1)==HCNACTR_finddeflexmode(M2));
A_PROC_EXIT(cf);
return( CCZACTR );
} 
#undef NL

A68_VOID  ECZACTR_evaluatenoresult(A68_101 ** Valuestack)
{ 
A68_94 * FCZACTR_value A_UNUSED = {0};
A68_95  GCZACTR;  /* united object - for case conformity */
A68_BOOL  HCZACTR;  /* clause result */
A68_BOOL  ICZACTR;  /* clause result */
A68_INT  JCZACTR_codestream A_UNUSED = {0};
A68_212  MCZACTR;  /* collateral clause result */
A68_93  PCZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  QCZACTR;  /* YIELD */
A68_VC  RCZACTR;  /* avoid structure result */
A68_VC  SCZACTR_f A_UNUSED = {0};
A68_61  TCZACTR_isident;   /* proc value of non-global proc */
A68_93  HDZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  IDZACTR;  /* YIELD */
A68_BOOL  JDZACTR;  /* optbool result */
A68_INT  KDZACTR;  /* YIELD */
A68_VC  NDZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_93  ODZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  PDZACTR;  /* YIELD */
A68_93  QDZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  RDZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  SDZACTR;  /* YIELD */
A68_93  TDZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  UDZACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  XDZACTR;  /* optbool result */
A_PROC_ENTRY(evaluatenoresult);
 /* line 107: */
 /* line 108: */
{ 
 /* line 109: */
 /* line 110: */
if ((*Valuestack)!=MKJACTR_nilvaluelist)
{ 
FCZACTR_value = (&((*Valuestack)->Value));
 /* line 111: */
GCZACTR = (*(&(FCZACTR_value->Extra))) ;
switch ( GCZACTR.mode )
{ 
case 3: /* VOID */
HCZACTR = A68_TRUE;
break;
default: 
 /* line 112: */
HCZACTR = A68_FALSE;
break;
} 
 /* line 113: */
 /* line 114: */
 /* line 115: */
ICZACTR = (HCZACTR&((*(&(FCZACTR_value->Mode)))==UEAACTR_voidmode));
if (ICZACTR)
{ 
 /* line 116: */
 /* line 117: */
(void)((*Valuestack) = (*(&((*Valuestack)->Rest))));
} 
else
{ 
JCZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 118: */
(void)((*Valuestack) = (*(&((*Valuestack)->Rest))));
 /* line 119: */
(void)(A_CALLPROC(BYQACTR_evaluate,(FCZACTR_value),(FCZACTR_value,(BYQACTR_evaluate).nonlocals)));
 /* line 120: */
 /* line 121: */
(void)(WXIACTR_assert(LCZACTR, ((*(&(FCZACTR_value->Mode)))==UEAACTR_voidmode)));
 /* line 122: */
 /* line 123: */
 /* line 124: */
if (EYPACTR_isskip(FCZACTR_value))
{ 
QCZACTR = OCZACTR ;
MCZACTR.data[0] = A_UNITE(PCZACTR,mode2,2,QCZACTR);
} 
else
{ 
UZPACTR_getcfragment( FCZACTR_value, &RCZACTR );
SCZACTR_f = RCZACTR;
 /* line 125: */
 /* line 126: */
 /* line 127: */
A_CLOSURE( TCZACTR_isident, UCZACTR_isident, VCZACTR_isident );
(( VCZACTR_isident * ) ( TCZACTR_isident.nonlocals )) -> SCZACTR_f = SCZACTR_f;
 /* line 138: */
 /* line 139: */
 /* line 140: */
if (A_CALLPROC(TCZACTR_isident,(),((TCZACTR_isident).nonlocals)))
{ 
IDZACTR = GDZACTR ;
MCZACTR.data[0] = A_UNITE(HDZACTR,mode2,2,IDZACTR);
} 
else
{ 
JDZACTR = (SCZACTR_f.upb>0);
if ( JDZACTR )
{ /* line 141: */
KDZACTR = SCZACTR_f.upb ;
JDZACTR = (A_VINDEX(SCZACTR_f,KDZACTR)==')');
}
if (JDZACTR)
{ 
 /* line 142: */
 /* line 143: */
PDZACTR = A_VC_PLUS(A_VC_PLUS(MDZACTR,SCZACTR_f),A_HVEC(NDZACTR,')',A68_CHAR )) ;
MCZACTR.data[0] = A_UNITE(ODZACTR,mode2,2,PDZACTR);
} 
else
{ 
 /* line 144: */
MCZACTR.data[0] = A_UNITE(QDZACTR,mode2,2,SCZACTR_f);
} 
} 
} 
 /* line 146: */
SDZACTR = ';' ;
MCZACTR.data[1] = A_UNITE(RDZACTR,mode1,1,SDZACTR);
MCZACTR.data[2] = A_UNITE(TDZACTR,mode4,4,EIAACTR_cnewline);
 /* line 147: */
 /* line 148: */
(void)(MDMACTR_writecstream(A_HISVEC(UDZACTR,MCZACTR,3,A68_93 ), JCZACTR_codestream));
} 
 /* line 149: */
 /* line 150: */
XDZACTR = (ZCHACTR_tracelevel(WDZACTR)!=0);
if ( XDZACTR )
{ /* line 151: */
XDZACTR = ((*Valuestack)!=MKJACTR_nilvaluelist);
}
if (XDZACTR)
{ 
 /* line 152: */
 /* line 153: */
 /* line 154: */
(void)(A_CALLPROC(XGVACTR_calltrace,((&((*Valuestack)->Value)), A68_FALSE),((&((*Valuestack)->Value)), A68_FALSE,(XGVACTR_calltrace).nonlocals)));
} 
} 
} 
A_PROC_EXIT(evaluatenoresult);
return;
} 
#undef NL

A68_VOID  AEZACTR_evaluateresult(A68_101 ** Valuestack, A68_109  Answer)
{ 
A68_94 * BEZACTR_ansvalue A_UNUSED = {0};
A68_INT  CEZACTR_codestream A_UNUSED = {0};
A68_95  DEZACTR;  /* united object - for case conformity */
A68_98  OEZACTR;  /* avoid structure result */
A68_95  PEZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  QEZACTR;  /* clause result */
A68_VC  REZACTR;  /* avoid structure result */
A68_98  SEZACTR_t A_UNUSED = {0};
A68_VC  TEZACTR;  /* OPERATORS - istruct -> vector */
A68_75  UEZACTR;  /* OPERATORS - istruct -> vector */
A68_VC  VEZACTR_c A_UNUSED = {0};
A68_VC  AFZACTR_assignee A_UNUSED = {0};
A68_94 * BFZACTR_value A_UNUSED = {0};
A68_93  GFZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  HFZACTR;  /* YIELD */
A68_92  IFZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_221  JFZACTR;  /* collateral clause result */
A68_93  KFZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  NFZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  OFZACTR;  /* YIELD */
A68_VC  PFZACTR;  /* avoid structure result */
A68_93  QFZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  RFZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  SFZACTR;  /* YIELD */
A68_92  TFZACTR;  /* OPERATORS - istruct -> vector */
A68_93  UFZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  VFZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(evaluateresult);
 /* line 169: */
 /* line 170: */
{ 
BEZACTR_ansvalue = Answer.Value;
 /* line 171: */
 /* line 172: */
if ((*(&(BEZACTR_ansvalue->Mode)))==UEAACTR_voidmode)
{ 
 /* line 173: */
 /* line 174: */
(void)(ECZACTR_evaluatenoresult(Valuestack));
} 
else
{ 
CEZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 176: */
 /* line 177: */
 /* line 178: */
DEZACTR = (*(&(BEZACTR_ansvalue->Extra))) ;
switch ( DEZACTR.mode )
{ 
case 3: /* VOID */
 /* line 179: */
 /* line 180: */
{ 
 /* line 182: */
 /* line 184: */
QMOACTR_declarectemporary( (*(&(BEZACTR_ansvalue->Mode))), NEZACTR, &OEZACTR );
(void)(HEZACTR_assignment((&(BEZACTR_ansvalue->Extra)), A_UNITE(PEZACTR,mode5,5,OEZACTR)));
 /* line 185: */
 /* line 186: */
 /* line 187: */
UZPACTR_getcfragment( BEZACTR_ansvalue, &REZACTR );
QEZACTR = REZACTR;
} 
break;
case 5: /* STRUCT(MODE75,INT)  */
SEZACTR_t = (DEZACTR.data.mode5);
 /* line 188: */
 /* line 189: */
UEZACTR = SEZACTR_t.Name ;
QEZACTR = A_HISVEC(TEZACTR,UEZACTR,7,A68_CHAR );
break;
case 6: /* VECTOR [] CHAR */
VEZACTR_c = (DEZACTR.data.mode6);
 /* line 190: */
 /* line 191: */
QEZACTR = VEZACTR_c;
break;
default: 
(void)(WXIACTR_assert(XEZACTR, A68_FALSE));
 /* line 192: */
QEZACTR = ZEZACTR;
break;
} 
AFZACTR_assignee = QEZACTR;
 /* line 194: */
BFZACTR_value = (&((*Valuestack)->Value));
 /* line 195: */
(void)(GMVACTR_evaluatestack(Valuestack));
 /* line 196: */
 /* line 197: */
(void)(WXIACTR_assert(DFZACTR, BCZACTR_cf((*(&(BEZACTR_ansvalue->Mode))), (*(&((&((*Valuestack)->Value))->Mode))))));
 /* line 198: */
 /* line 199: */
if (EYPACTR_isskip(BFZACTR_value))
{ 
 /* line 200: */
 /* line 201: */
HFZACTR = FFZACTR ;
(void)(MDMACTR_writecstream(A_HVEC(IFZACTR,A_UNITE(GFZACTR,mode2,2,HFZACTR),A68_93 ), CEZACTR_codestream));
} 
else
{ 
JFZACTR.data[0] = A_UNITE(KFZACTR,mode2,2,AFZACTR_assignee);
OFZACTR = MFZACTR ;
JFZACTR.data[1] = A_UNITE(NFZACTR,mode2,2,OFZACTR);
UZPACTR_getcfragment( BFZACTR_value, &PFZACTR );
JFZACTR.data[2] = A_UNITE(QFZACTR,mode2,2,PFZACTR);
SFZACTR = ';' ;
JFZACTR.data[3] = A_UNITE(RFZACTR,mode1,1,SFZACTR);
 /* line 203: */
 /* line 204: */
(void)(MDMACTR_writecstream(A_HISVEC(TFZACTR,JFZACTR,4,A68_93 ), CEZACTR_codestream));
} 
 /* line 205: */
(void)(MDMACTR_writecstream(A_HVEC(VFZACTR,A_UNITE(UFZACTR,mode4,4,EIAACTR_cnewline),A68_93 ), CEZACTR_codestream));
 /* line 206: */
 /* line 207: */
 /* line 208: */
(void)((*Valuestack) = (*(&((*Valuestack)->Rest))));
} 
} 
A_PROC_EXIT(evaluateresult);
return;
} 
#undef NL
 /* line 213: */

A68_VOID  YFZACTR_evaluatesimpleenquiry(A68_101 ** Valuestack, A68_109  Answer)
{ 
A68_94 * ZFZACTR_value A_UNUSED = {0};
A68_VC  CGZACTR;  /* avoid structure result */
A68_95  DGZACTR = {0};  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(evaluatesimpleenquiry);
 /* line 219: */
 /* line 220: */
{ 
ZFZACTR_value = (&((*Valuestack)->Value));
 /* line 221: */
(void)(GMVACTR_evaluatestack(Valuestack));
 /* line 222: */
 /* line 223: */
(void)(WXIACTR_assert(BGZACTR, BCZACTR_cf((*(&(Answer.Value->Mode))), (*(&(ZFZACTR_value->Mode))))));
 /* line 224: */
UZPACTR_getcfragment( ZFZACTR_value, &CGZACTR );
(void)(HEZACTR_assignment((&(Answer.Value->Extra)), A_UNITE(DGZACTR,mode6,6,CGZACTR)));
 /* line 225: */
 /* line 226: */
(void)((*Valuestack) = (*(&((*Valuestack)->Rest))));
} 
A_PROC_EXIT(evaluatesimpleenquiry);
return;
} 
#undef NL

A68_VOID  GGZACTR_begin(A68_BOOL  Seriescontainslabel, A68_BOOL  Routinebody)
{ 
A68_224  HGZACTR;  /* collateral clause result */
A68_93  KGZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  LGZACTR;  /* YIELD */
A68_93  MGZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  NGZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(begin);
 /* line 234: */
 /* line 235: */
LGZACTR = JGZACTR ;
HGZACTR.data[0] = A_UNITE(KGZACTR,mode2,2,LGZACTR);
HGZACTR.data[1] = A_UNITE(MGZACTR,mode4,4,EIAACTR_cnewline);
 /* line 236: */
(void)(MDMACTR_writecstream(A_HISVEC(NGZACTR,HGZACTR,2,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel())));
A_PROC_EXIT(begin);
return;
} 
#undef NL
 /* line 241: */

A68_VOID  SGZACTR_end(A68_BOOL  Dynamicresult, A68_BOOL  Seriescontainsexit, A68_BOOL  Routinebody, A68_85 * Endofclauselabel)
{ 
A68_INT  TGZACTR_codestream A_UNUSED = {0};
A68_212  WGZACTR;  /* collateral clause result */
A68_VC  XGZACTR;  /* OPERATORS - istruct -> vector */
A68_75  YGZACTR;  /* OPERATORS - istruct -> vector */
A68_93  ZGZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  AHZACTR;  /* YIELD */
A68_93  DHZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  EHZACTR;  /* YIELD */
A68_93  FHZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  GHZACTR;  /* OPERATORS - istruct -> vector */
A68_224  HHZACTR;  /* collateral clause result */
A68_93  KHZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  LHZACTR;  /* YIELD */
A68_93  MHZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  NHZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(end);
 /* line 242: */
 /* line 243: */
{ 
TGZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 244: */
 /* line 245: */
 /* line 246: */
if (Seriescontainsexit)
{ 
(void)(WXIACTR_assert(VGZACTR, (Endofclauselabel!=(A68_85 *)A68_NIL)));
 /* line 247: */
 /* line 248: */
YGZACTR = (*(&(Endofclauselabel->Name))) ;
AHZACTR = A_HISVEC(XGZACTR,YGZACTR,7,A68_CHAR ) ;
WGZACTR.data[0] = A_UNITE(ZGZACTR,mode2,2,AHZACTR);
 /* line 249: */
EHZACTR = CHZACTR ;
WGZACTR.data[1] = A_UNITE(DHZACTR,mode2,2,EHZACTR);
WGZACTR.data[2] = A_UNITE(FHZACTR,mode4,4,EIAACTR_cnewline);
 /* line 250: */
 /* line 251: */
(void)(MDMACTR_writecstream(A_HISVEC(GHZACTR,WGZACTR,3,A68_93 ), TGZACTR_codestream));
} 
 /* line 252: */
LHZACTR = JHZACTR ;
HHZACTR.data[0] = A_UNITE(KHZACTR,mode2,2,LHZACTR);
HHZACTR.data[1] = A_UNITE(MHZACTR,mode4,4,EIAACTR_cnewline);
 /* line 253: */
(void)(MDMACTR_writecstream(A_HISVEC(NHZACTR,HHZACTR,2,A68_93 ), TGZACTR_codestream));
} 
A_PROC_EXIT(end);
return;
} 
#undef NL
 /* line 273: */

A_STATIC A68_VOID  RHZACTR_outputcaseulabel(A68_INT  Mode, A68_INT  Casenumber, A68_77  Case)
{ 
A68_INT  SHZACTR_codestream A_UNUSED = {0};
A68_VC  THZACTR;  /* avoid structure result */
A68_70  UHZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_224  VHZACTR;  /* collateral clause result */
A68_93  YHZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ZHZACTR;  /* YIELD */
A68_93  AIZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  BIZACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL * CIZACTR;  /* YIELD */
A68_230  DIZACTR;  /* collateral clause result */
A68_93  GIZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  HIZACTR;  /* YIELD */
A68_VC  IIZACTR;  /* avoid structure result */
A68_93  JIZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  MIZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  NIZACTR;  /* YIELD */
A68_VC  RIZACTR;  /* avoid structure result */
A68_93  TIZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  UIZACTR;  /* YIELD */
A68_93  XIZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  YIZACTR;  /* YIELD */
A68_93  ZIZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  AJZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(outputcaseulabel);
 /* line 279: */
 /* line 280: */
{ 
SHZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 281: */
 /* line 282: */
 /* line 283: */
if (*(&A_R1INDEX(Case,Casenumber)))
{ 
WCNACTR_modename( Mode, &THZACTR );
(void)(NWIACTR_pmessage(720, A_HARR(UHZACTR,THZACTR,A68_VC )));
 /* line 284: */
 /* line 285: */
 /* line 287: */
ZHZACTR = XHZACTR ;
VHZACTR.data[0] = A_UNITE(YHZACTR,mode2,2,ZHZACTR);
VHZACTR.data[1] = A_UNITE(AIZACTR,mode4,4,EIAACTR_cnewline);
 /* line 288: */
 /* line 289: */
 /* line 290: */
(void)(MDMACTR_writecstream(A_HISVEC(BIZACTR,VHZACTR,2,A68_93 ), SHZACTR_codestream));
} 
else
{ 
CIZACTR = (&A_R1INDEX(Case,Casenumber)) ;
(*CIZACTR) = A68_TRUE;
 /* line 291: */
 /* line 292: */
HIZACTR = FIZACTR ;
DIZACTR.data[0] = A_UNITE(GIZACTR,mode2,2,HIZACTR);
ROAAOSF_whole( Casenumber, 0, &IIZACTR );
DIZACTR.data[1] = A_UNITE(JIZACTR,mode2,2,IIZACTR);
 /* line 293: */
NIZACTR = LIZACTR ;
DIZACTR.data[2] = A_UNITE(MIZACTR,mode2,2,NIZACTR);
 /* line 294: */
if (AQIACTR_verboseoption)
{ 
 /* line 295: */
 /* line 296: */
WCNACTR_modename( Mode, &RIZACTR );
UIZACTR = A_VC_PLUS(A_VC_PLUS(QIZACTR,RIZACTR),SIZACTR) ;
DIZACTR.data[3] = A_UNITE(TIZACTR,mode2,2,UIZACTR);
} 
else
{ 
 /* line 297: */
YIZACTR = WIZACTR ;
DIZACTR.data[3] = A_UNITE(XIZACTR,mode2,2,YIZACTR);
} 
DIZACTR.data[4] = A_UNITE(ZIZACTR,mode4,4,EIAACTR_cnewline);
 /* line 298: */
 /* line 299: */
 /* line 300: */
(void)(MDMACTR_writecstream(A_HISVEC(AJZACTR,DIZACTR,5,A68_93 ), SHZACTR_codestream));
} 
} 
A_PROC_EXIT(outputcaseulabel);
return;
} 
#undef NL
 /* line 304: */
 /* line 306: */

A_STATIC A68_VOID  EJZACTR_subunionchoice(A68_154  Uchoice, A68_94  Union, A68_77  Case)
{ 
A68_172  FJZACTR;  /* avoid structure result */
A68_172  GJZACTR_modesofunion A_UNUSED = {0};
A68_172  HJZACTR;  /* avoid structure result */
A68_VC  IJZACTR;  /* avoid structure result */
A68_VC  JJZACTR;  /* OPERATORS - trim index */
A68_VC  KJZACTR;  /* YIELD */
A68_RC  LJZACTR;  /* OPERATORS - vector -> row */
A68_RC  MJZACTR_table A_UNUSED = {0};
A68_INT  NJZACTR_i A_UNUSED = {0};
A68_INT  OJZACTR;  /* to part of loop */
A_PROC_ENTRY(subunionchoice);
 /* line 311: */
 /* line 312: */
{ 
A_CALLPROC(YVMACTR_constituents,(Union.Mode, &FJZACTR),(Union.Mode, &FJZACTR,(YVMACTR_constituents).nonlocals));
GJZACTR_modesofunion = FJZACTR;
 /* line 313: */
 /* line 315: */
 /* line 316: */
 /* line 317: */
A_CALLPROC(YVMACTR_constituents,(Uchoice.Mode, &HJZACTR),(Uchoice.Mode, &HJZACTR,(YVMACTR_constituents).nonlocals));
WWQACTR_uniontouniontable( GJZACTR_modesofunion, HJZACTR, &IJZACTR );
KJZACTR = A_VTRIM(JJZACTR,(IJZACTR),A_VTSCRIPT(&(JJZACTR.upb),(IJZACTR).upb,1,(IJZACTR).upb)) ;
MJZACTR_table = A_VECARR(KJZACTR,LJZACTR);
 /* line 318: */
 /* line 319: */
OJZACTR = MJZACTR_table.dim[0].upb;
for ( NJZACTR_i = 1;
NJZACTR_i <= OJZACTR;
NJZACTR_i += 1 )
{ 
 /* line 320: */
if ((A68_INT)(unsigned char)A_R1INDEX(MJZACTR_table,NJZACTR_i)!=0)
{ 
 /* line 321: */
 /* line 322: */
(void)(RHZACTR_outputcaseulabel((*(&A_VINDEX(GJZACTR_modesofunion,NJZACTR_i))), NJZACTR_i, Case));
} 
}
 /* line 323: */
 /* line 324: */
/*SKIP*/;
} 
A_PROC_EXIT(subunionchoice);
return;
} 
#undef NL

A_STATIC A68_VOID  QJZACTR_condition(A68_VC  Frag, A68_VC  *ReturnedValue)
{ 
A68_VC  RJZACTR_f A_UNUSED = {0};
A68_INT  SJZACTR_lo A_UNUSED = {0};
A68_INT  TJZACTR_hi A_UNUSED = {0};
A68_232  VJZACTR_scan;   /* proc value of non-global proc */
A68_61  DKZACTR_whollybracketed;   /* proc value of non-global proc */
A68_BOOL  OKZACTR_assignment A_UNUSED = {0};
A68_55  QKZACTR_anonymous;   /* proc value of non-global proc */
A68_VC  XKZACTR;  /* OPERATORS - trim index */
A68_VC  YKZACTR_c A_UNUSED = {0};
A68_VC  ZKZACTR;  /* clause result */
A68_VC  ALZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  BLZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(condition);
 /* line 332: */
 /* line 333: */
{ 
RJZACTR_f = Frag;
 /* line 334: */
SJZACTR_lo = 1;
TJZACTR_hi = RJZACTR_f.upb;
 /* line 337: */
A_CLOSURE( VJZACTR_scan, WJZACTR_scan, XJZACTR_scan );
(( XJZACTR_scan * ) ( VJZACTR_scan.nonlocals )) -> SJZACTR_lo = (&SJZACTR_lo);
(( XJZACTR_scan * ) ( VJZACTR_scan.nonlocals )) -> TJZACTR_hi = (&TJZACTR_hi);
(( XJZACTR_scan * ) ( VJZACTR_scan.nonlocals )) -> RJZACTR_f = RJZACTR_f;
 /* line 358: */
 /* line 359: */
A_CLOSURE( DKZACTR_whollybracketed, EKZACTR_whollybracketed, FKZACTR_whollybracketed );
(( FKZACTR_whollybracketed * ) ( DKZACTR_whollybracketed.nonlocals )) -> TJZACTR_hi = (&TJZACTR_hi);
(( FKZACTR_whollybracketed * ) ( DKZACTR_whollybracketed.nonlocals )) -> SJZACTR_lo = (&SJZACTR_lo);
(( FKZACTR_whollybracketed * ) ( DKZACTR_whollybracketed.nonlocals )) -> RJZACTR_f = RJZACTR_f;
(( FKZACTR_whollybracketed * ) ( DKZACTR_whollybracketed.nonlocals )) -> VJZACTR_scan = VJZACTR_scan;
 /* line 366: */
for ( ;; )
{ 
if ( !(A_CALLPROC(DKZACTR_whollybracketed,(),((DKZACTR_whollybracketed).nonlocals))) ) break;
SJZACTR_lo+=1;
TJZACTR_hi-=1;
}
 /* line 367: */
OKZACTR_assignment = A68_FALSE;
 /* line 368: */
A_CLOSURE( QKZACTR_anonymous, RKZACTR_anonymous, SKZACTR_anonymous );
(( SKZACTR_anonymous * ) ( QKZACTR_anonymous.nonlocals )) -> OKZACTR_assignment = (&OKZACTR_assignment);
(( SKZACTR_anonymous * ) ( QKZACTR_anonymous.nonlocals )) -> SJZACTR_lo = (&SJZACTR_lo);
(( SKZACTR_anonymous * ) ( QKZACTR_anonymous.nonlocals )) -> TJZACTR_hi = (&TJZACTR_hi);
(( SKZACTR_anonymous * ) ( QKZACTR_anonymous.nonlocals )) -> RJZACTR_f = RJZACTR_f;
(void)(A_CALLPROC(VJZACTR_scan,(QKZACTR_anonymous),(QKZACTR_anonymous,(VJZACTR_scan).nonlocals)));
 /* line 372: */
YKZACTR_c = A_VTRIM(XKZACTR,(RJZACTR_f),A_VTSCRIPT(&(XKZACTR.upb),(RJZACTR_f).upb,SJZACTR_lo,TJZACTR_hi));
 /* line 373: */
if (OKZACTR_assignment)
{ 
ZKZACTR = A_VC_PLUS(A_VC_PLUS(A_HVEC(ALZACTR,'(',A68_CHAR ),YKZACTR_c),A_HVEC(BLZACTR,')',A68_CHAR ));
} 
else
{ 
 /* line 374: */
ZKZACTR = YKZACTR_c;
} 
} 
A_PROC_EXIT(condition);
*ReturnedValue = (ZKZACTR);
return;
} 
#undef NL

A68_VOID  DLZACTR_then(A68_94 * Enquiry)
{ 
A68_VC  FLZACTR;  /* clause result */
A68_VC  HLZACTR;  /* avoid structure result */
A68_VC  ILZACTR;  /* avoid structure result */
A68_VC  JLZACTR_booleanexpr A_UNUSED = {0};
A68_234  KLZACTR;  /* collateral clause result */
A68_93  NLZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  OLZACTR;  /* YIELD */
A68_93  PLZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  QLZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  RLZACTR;  /* YIELD */
A68_93  SLZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  VLZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  WLZACTR;  /* YIELD */
A68_93  XLZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  YLZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(then);
 /* line 377: */
 /* line 379: */
{ 
 /* line 380: */
 /* line 381: */
if (EYPACTR_isskip(Enquiry))
{ 
FLZACTR = GLZACTR;
} 
else
{ 
 /* line 382: */
UZPACTR_getcfragment( Enquiry, &HLZACTR );
QJZACTR_condition( HLZACTR, &ILZACTR );
FLZACTR = ILZACTR;
} 
JLZACTR_booleanexpr = FLZACTR;
 /* line 383: */
 /* line 384: */
OLZACTR = MLZACTR ;
KLZACTR.data[0] = A_UNITE(NLZACTR,mode2,2,OLZACTR);
KLZACTR.data[1] = A_UNITE(PLZACTR,mode2,2,JLZACTR_booleanexpr);
RLZACTR = ')' ;
KLZACTR.data[2] = A_UNITE(QLZACTR,mode1,1,RLZACTR);
 /* line 385: */
KLZACTR.data[3] = A_UNITE(SLZACTR,mode4,4,EIAACTR_cnewline);
 /* line 386: */
WLZACTR = ULZACTR ;
KLZACTR.data[4] = A_UNITE(VLZACTR,mode2,2,WLZACTR);
KLZACTR.data[5] = A_UNITE(XLZACTR,mode4,4,EIAACTR_cnewline);
 /* line 387: */
 /* line 388: */
(void)(MDMACTR_writecstream(A_HISVEC(YLZACTR,KLZACTR,6,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel())));
} 
A_PROC_EXIT(then);
return;
} 
#undef NL

A68_VOID  ZLZACTR_else(void)
{ 
A68_234  AMZACTR;  /* collateral clause result */
A68_93  DMZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  EMZACTR;  /* YIELD */
A68_93  FMZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  IMZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  JMZACTR;  /* YIELD */
A68_93  KMZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  NMZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  OMZACTR;  /* YIELD */
A68_93  PMZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  QMZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(else);
EMZACTR = CMZACTR ;
AMZACTR.data[0] = A_UNITE(DMZACTR,mode2,2,EMZACTR);
AMZACTR.data[1] = A_UNITE(FMZACTR,mode4,4,EIAACTR_cnewline);
JMZACTR = HMZACTR ;
AMZACTR.data[2] = A_UNITE(IMZACTR,mode2,2,JMZACTR);
AMZACTR.data[3] = A_UNITE(KMZACTR,mode4,4,EIAACTR_cnewline);
 /* line 394: */
OMZACTR = MMZACTR ;
AMZACTR.data[4] = A_UNITE(NMZACTR,mode2,2,OMZACTR);
AMZACTR.data[5] = A_UNITE(PMZACTR,mode4,4,EIAACTR_cnewline);
 /* line 395: */
 /* line 396: */
(void)(MDMACTR_writecstream(A_HISVEC(QMZACTR,AMZACTR,6,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel())));
A_PROC_EXIT(else);
return;
} 
#undef NL

A68_VOID  SMZACTR_casein(A68_94 * Enquiry)
{ 
A68_VC  UMZACTR;  /* clause result */
A68_VC  WMZACTR;  /* avoid structure result */
A68_VC  XMZACTR_integerexpr A_UNUSED = {0};
A68_237  YMZACTR;  /* collateral clause result */
A68_93  BNZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  CNZACTR;  /* YIELD */
A68_93  DNZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  GNZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  HNZACTR;  /* YIELD */
A68_93  INZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  LNZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  MNZACTR;  /* YIELD */
A68_93  NNZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  QNZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  RNZACTR;  /* YIELD */
A68_93  SNZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  TNZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(casein);
 /* line 399: */
 /* line 401: */
{ 
 /* line 402: */
 /* line 403: */
if (EYPACTR_isskip(Enquiry))
{ 
 /* line 404: */
UMZACTR = VMZACTR;
} 
else
{ 
UZPACTR_getcfragment( Enquiry, &WMZACTR );
UMZACTR = WMZACTR;
} 
XMZACTR_integerexpr = UMZACTR;
 /* line 405: */
 /* line 406: */
CNZACTR = ANZACTR ;
YMZACTR.data[0] = A_UNITE(BNZACTR,mode2,2,CNZACTR);
YMZACTR.data[1] = A_UNITE(DNZACTR,mode2,2,XMZACTR_integerexpr);
HNZACTR = FNZACTR ;
YMZACTR.data[2] = A_UNITE(GNZACTR,mode2,2,HNZACTR);
 /* line 407: */
YMZACTR.data[3] = A_UNITE(INZACTR,mode4,4,EIAACTR_cnewline);
MNZACTR = KNZACTR ;
YMZACTR.data[4] = A_UNITE(LNZACTR,mode2,2,MNZACTR);
 /* line 408: */
YMZACTR.data[5] = A_UNITE(NNZACTR,mode4,4,EIAACTR_cnewline);
 /* line 409: */
RNZACTR = PNZACTR ;
YMZACTR.data[6] = A_UNITE(QNZACTR,mode2,2,RNZACTR);
YMZACTR.data[7] = A_UNITE(SNZACTR,mode4,4,EIAACTR_cnewline);
 /* line 410: */
 /* line 411: */
(void)(MDMACTR_writecstream(A_HISVEC(TNZACTR,YMZACTR,8,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel())));
} 
A_PROC_EXIT(casein);
return;
} 
#undef NL
 /* line 415: */
 /* line 417: */

A68_VOID  XNZACTR_inu(A68_154  Uchoice, A68_94 * Union, A68_77  Case)
{ 
A68_VC  AOZACTR;  /* avoid structure result */
A68_VC  BOZACTR_unitedobject A_UNUSED = {0};
A68_INT  COZACTR_codestream A_UNUSED = {0};
A68_240  DOZACTR;  /* collateral clause result */
A68_93  GOZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  HOZACTR;  /* YIELD */
A68_93  IOZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  LOZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  MOZACTR;  /* YIELD */
A68_93  POZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  QOZACTR;  /* YIELD */
A68_93  ROZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  UOZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  VOZACTR;  /* YIELD */
A68_93  WOZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  XOZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(inu);
 /* line 418: */
 /* line 421: */
{ 
UZPACTR_getcfragment( JQQACTR_yield(ZNZACTR, Union), &AOZACTR );
BOZACTR_unitedobject = AOZACTR;
 /* line 422: */
COZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 423: */
 /* line 424: */
HOZACTR = FOZACTR ;
DOZACTR.data[0] = A_UNITE(GOZACTR,mode2,2,HOZACTR);
DOZACTR.data[1] = A_UNITE(IOZACTR,mode2,2,BOZACTR_unitedobject);
MOZACTR = KOZACTR ;
DOZACTR.data[2] = A_UNITE(LOZACTR,mode2,2,MOZACTR);
QOZACTR = OOZACTR ;
DOZACTR.data[3] = A_UNITE(POZACTR,mode2,2,QOZACTR);
 /* line 425: */
DOZACTR.data[4] = A_UNITE(ROZACTR,mode4,4,EIAACTR_cnewline);
 /* line 426: */
VOZACTR = TOZACTR ;
DOZACTR.data[5] = A_UNITE(UOZACTR,mode2,2,VOZACTR);
DOZACTR.data[6] = A_UNITE(WOZACTR,mode4,4,EIAACTR_cnewline);
 /* line 427: */
(void)(MDMACTR_writecstream(A_HISVEC(XOZACTR,DOZACTR,7,A68_93 ), COZACTR_codestream));
 /* line 428: */
 /* line 429: */
 /* line 430: */
if (Uchoice.Param<0)
{ 
 /* line 431: */
(void)(EJZACTR_subunionchoice(Uchoice, (*Union), Case));
} 
else
{ 
 /* line 432: */
 /* line 433: */
(void)(RHZACTR_outputcaseulabel(Uchoice.Mode, Uchoice.Param, Case));
} 
} 
A_PROC_EXIT(inu);
return;
} 
#undef NL

A68_VOID  ZOZACTR_comma(A68_INT  Caseno)
{ 
A68_234  APZACTR;  /* collateral clause result */
A68_93  DPZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  EPZACTR;  /* YIELD */
A68_93  FPZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  IPZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  JPZACTR;  /* YIELD */
A68_VC  KPZACTR;  /* avoid structure result */
A68_93  LPZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  OPZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  PPZACTR;  /* YIELD */
A68_93  QPZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  RPZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(comma);
 /* line 436: */
 /* line 438: */
EPZACTR = CPZACTR ;
APZACTR.data[0] = A_UNITE(DPZACTR,mode2,2,EPZACTR);
 /* line 439: */
APZACTR.data[1] = A_UNITE(FPZACTR,mode4,4,EIAACTR_cnewline);
JPZACTR = HPZACTR ;
APZACTR.data[2] = A_UNITE(IPZACTR,mode2,2,JPZACTR);
ROAAOSF_whole( Caseno, 0, &KPZACTR );
APZACTR.data[3] = A_UNITE(LPZACTR,mode2,2,KPZACTR);
 /* line 440: */
PPZACTR = NPZACTR ;
APZACTR.data[4] = A_UNITE(OPZACTR,mode2,2,PPZACTR);
APZACTR.data[5] = A_UNITE(QPZACTR,mode4,4,EIAACTR_cnewline);
 /* line 441: */
 /* line 442: */
(void)(MDMACTR_writecstream(A_HISVEC(RPZACTR,APZACTR,6,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel())));
A_PROC_EXIT(comma);
return;
} 
#undef NL
 /* line 446: */
 /* line 448: */

A68_VOID  VPZACTR_commau(A68_154  Uchoice, A68_94  Union, A68_77  Case)
{ 
A68_INT  WPZACTR_codestream A_UNUSED = {0};
A68_224  XPZACTR;  /* collateral clause result */
A68_93  AQZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  BQZACTR;  /* YIELD */
A68_93  CQZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  DQZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(commau);
 /* line 449: */
 /* line 450: */
{ 
WPZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 451: */
BQZACTR = ZPZACTR ;
XPZACTR.data[0] = A_UNITE(AQZACTR,mode2,2,BQZACTR);
XPZACTR.data[1] = A_UNITE(CQZACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(DQZACTR,XPZACTR,2,A68_93 ), WPZACTR_codestream));
 /* line 452: */
 /* line 453: */
 /* line 454: */
if (Uchoice.Param<0)
{ 
 /* line 455: */
(void)(EJZACTR_subunionchoice(Uchoice, Union, Case));
} 
else
{ 
 /* line 456: */
 /* line 457: */
(void)(RHZACTR_outputcaseulabel(Uchoice.Mode, Uchoice.Param, Case));
} 
} 
A_PROC_EXIT(commau);
return;
} 
#undef NL

A68_VOID  EQZACTR_out(void)
{ 
A68_INT  FQZACTR_codestream A_UNUSED = {0};
A68_221  GQZACTR;  /* collateral clause result */
A68_93  JQZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  KQZACTR;  /* YIELD */
A68_93  LQZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  OQZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  PQZACTR;  /* YIELD */
A68_93  QQZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  RQZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(out);
{ 
FQZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 462: */
 /* line 463: */
KQZACTR = IQZACTR ;
GQZACTR.data[0] = A_UNITE(JQZACTR,mode2,2,KQZACTR);
GQZACTR.data[1] = A_UNITE(LQZACTR,mode4,4,EIAACTR_cnewline);
PQZACTR = NQZACTR ;
GQZACTR.data[2] = A_UNITE(OQZACTR,mode2,2,PQZACTR);
GQZACTR.data[3] = A_UNITE(QQZACTR,mode4,4,EIAACTR_cnewline);
 /* line 465: */
 /* line 466: */
(void)(MDMACTR_writecstream(A_HISVEC(RQZACTR,GQZACTR,4,A68_93 ), FQZACTR_codestream));
} 
A_PROC_EXIT(out);
return;
} 
#undef NL

A68_VOID  WQZACTR_esac(A68_BOOL  Outpart, A68_109  Answer)
{ 
A68_INT  XQZACTR_codestream A_UNUSED = {0};
A68_INT  YQZACTR_resultmode A_UNUSED = {0};
A68_93  BRZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  CRZACTR;  /* YIELD */
A68_92  DRZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_93  ERZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  FRZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_221  GRZACTR;  /* collateral clause result */
A68_93  JRZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  KRZACTR;  /* YIELD */
A68_93  LRZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  ORZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  PRZACTR;  /* YIELD */
A68_93  QRZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  RRZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(esac);
 /* line 471: */
 /* line 472: */
{ 
XQZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 473: */
YQZACTR_resultmode = (*(&(Answer.Value->Mode)));
 /* line 475: */
 /* line 476: */
 /* line 477: */
if (!Outpart)
{ 
 /* line 478: */
 /* line 480: */
if ((YQZACTR_resultmode==UEAACTR_voidmode)&EQIACTR_skipoption)
{ 
 /* line 483: */
/*SKIP*/;
} 
else
{ 
(void)(EQZACTR_out());
 /* line 484: */
CRZACTR = ARZACTR ;
(void)(MDMACTR_writecstream(A_HVEC(DRZACTR,A_UNITE(BRZACTR,mode2,2,CRZACTR),A68_93 ), XQZACTR_codestream));
 /* line 485: */
 /* line 486: */
 /* line 487: */
(void)(MDMACTR_writecstream(A_HVEC(FRZACTR,A_UNITE(ERZACTR,mode4,4,EIAACTR_cnewline),A68_93 ), XQZACTR_codestream));
} 
} 
 /* line 488: */
 /* line 489: */
KRZACTR = IRZACTR ;
GRZACTR.data[0] = A_UNITE(JRZACTR,mode2,2,KRZACTR);
GRZACTR.data[1] = A_UNITE(LRZACTR,mode4,4,EIAACTR_cnewline);
PRZACTR = NRZACTR ;
GRZACTR.data[2] = A_UNITE(ORZACTR,mode2,2,PRZACTR);
GRZACTR.data[3] = A_UNITE(QRZACTR,mode4,4,EIAACTR_cnewline);
 /* line 491: */
 /* line 492: */
(void)(MDMACTR_writecstream(A_HISVEC(RRZACTR,GRZACTR,4,A68_93 ), XQZACTR_codestream));
} 
A_PROC_EXIT(esac);
return;
} 
#undef NL

A68_VOID  WRZACTR_fi(A68_BOOL  Elsepart, A68_109  Answer)
{ 
A68_INT  XRZACTR_codestream A_UNUSED = {0};
A68_INT  YRZACTR_resultmode A_UNUSED = {0};
A68_224  ZRZACTR;  /* collateral clause result */
A68_93  CSZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  DSZACTR;  /* YIELD */
A68_93  ESZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  FSZACTR;  /* OPERATORS - istruct -> vector */
A68_224  GSZACTR;  /* collateral clause result */
A68_93  JSZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  KSZACTR;  /* YIELD */
A68_93  LSZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  MSZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(fi);
 /* line 497: */
 /* line 498: */
{ 
XRZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 499: */
YRZACTR_resultmode = (*(&(Answer.Value->Mode)));
 /* line 500: */
 /* line 501: */
if (!Elsepart)
{ 
 /* line 502: */
 /* line 504: */
if (!(YRZACTR_resultmode==UEAACTR_voidmode))
{ 
(void)(ZLZACTR_else());
 /* line 505: */
DSZACTR = BSZACTR ;
ZRZACTR.data[0] = A_UNITE(CSZACTR,mode2,2,DSZACTR);
ZRZACTR.data[1] = A_UNITE(ESZACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(FSZACTR,ZRZACTR,2,A68_93 ), XRZACTR_codestream));
 /* line 506: */
 /* line 507: */
 /* line 508: */
(void)(JXIACTR_warning(316));
} 
} 
 /* line 509: */
KSZACTR = ISZACTR ;
GSZACTR.data[0] = A_UNITE(JSZACTR,mode2,2,KSZACTR);
GSZACTR.data[1] = A_UNITE(LSZACTR,mode4,4,EIAACTR_cnewline);
 /* line 510: */
(void)(MDMACTR_writecstream(A_HISVEC(MSZACTR,GSZACTR,2,A68_93 ), XRZACTR_codestream));
} 
A_PROC_EXIT(fi);
return;
} 
#undef NL
 /* line 520: */

A68_VOID  PSZACTR_optboolwarning(A68_BOOL  Orel, A68_94 * Operand1)
{ 
A68_INT  QSZACTR_codestream A_UNUSED = {0};
A68_VC  RSZACTR;  /* clause result */
A68_VC  SSZACTR;  /* avoid structure result */
A68_98  WSZACTR;  /* avoid structure result */
A68_98  USZACTR_temp A_UNUSED = {0};
A68_230  XSZACTR;  /* collateral clause result */
A68_VC  YSZACTR;  /* OPERATORS - istruct -> vector */
A68_75  ZSZACTR;  /* OPERATORS - istruct -> vector */
A68_93  ATZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  BTZACTR;  /* YIELD */
A68_93  ETZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  FTZACTR;  /* YIELD */
A68_VC  GTZACTR;  /* avoid structure result */
A68_93  HTZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  ITZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  JTZACTR;  /* YIELD */
A68_93  KTZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  LTZACTR;  /* OPERATORS - istruct -> vector */
A68_95  MTZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  NTZACTR;  /* OPERATORS - istruct -> vector */
A68_75  OTZACTR;  /* OPERATORS - istruct -> vector */
A68_VC  PTZACTR_tester A_UNUSED = {0};
A68_230  QTZACTR;  /* collateral clause result */
A68_93  TTZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  UTZACTR;  /* YIELD */
A68_93  XTZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  YTZACTR;  /* YIELD */
A68_93  ZTZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  CUZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  DUZACTR;  /* YIELD */
A68_93  EUZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  FUZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  GUZACTR;  /* YIELD */
A68_92  HUZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(optboolwarning);
 /* line 521: */
 /* line 522: */
{ 
QSZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 523: */
(void)(A_CALLPROC(BYQACTR_evaluate,(Operand1),(Operand1,(BYQACTR_evaluate).nonlocals)));
 /* line 524: */
 /* line 525: */
 /* line 526: */
 /* line 528: */
if (WXPACTR_istemp(Operand1))
{ 
 /* line 530: */
UZPACTR_getcfragment( Operand1, &SSZACTR );
RSZACTR = SSZACTR;
} 
else
{ 
QMOACTR_declarectemporary( WEAACTR_boolmode, VSZACTR, &WSZACTR );
USZACTR_temp = WSZACTR;
 /* line 531: */
 /* line 532: */
ZSZACTR = (*(&((&USZACTR_temp)->Name))) ;
BTZACTR = A_HISVEC(YSZACTR,ZSZACTR,7,A68_CHAR ) ;
XSZACTR.data[0] = A_UNITE(ATZACTR,mode2,2,BTZACTR);
FTZACTR = DTZACTR ;
XSZACTR.data[1] = A_UNITE(ETZACTR,mode2,2,FTZACTR);
UZPACTR_getcfragment( Operand1, &GTZACTR );
XSZACTR.data[2] = A_UNITE(HTZACTR,mode2,2,GTZACTR);
 /* line 534: */
JTZACTR = ';' ;
XSZACTR.data[3] = A_UNITE(ITZACTR,mode1,1,JTZACTR);
XSZACTR.data[4] = A_UNITE(KTZACTR,mode4,4,EIAACTR_cnewline);
 /* line 535: */
(void)(MDMACTR_writecstream(A_HISVEC(LTZACTR,XSZACTR,5,A68_93 ), QSZACTR_codestream));
 /* line 538: */
(void)(HEZACTR_assignment((&(Operand1->Extra)), A_UNITE(MTZACTR,mode5,5,USZACTR_temp)));
 /* line 539: */
 /* line 540: */
OTZACTR = (*(&((&USZACTR_temp)->Name))) ;
RSZACTR = A_HISVEC(NTZACTR,OTZACTR,7,A68_CHAR );
} 
PTZACTR_tester = RSZACTR;
 /* line 541: */
 /* line 542: */
if (Orel)
{ 
UTZACTR = STZACTR ;
QTZACTR.data[0] = A_UNITE(TTZACTR,mode2,2,UTZACTR);
} 
else
{ 
YTZACTR = WTZACTR ;
QTZACTR.data[0] = A_UNITE(XTZACTR,mode2,2,YTZACTR);
} 
QTZACTR.data[1] = A_UNITE(ZTZACTR,mode2,2,PTZACTR_tester);
 /* line 543: */
DUZACTR = BUZACTR ;
QTZACTR.data[2] = A_UNITE(CUZACTR,mode2,2,DUZACTR);
 /* line 544: */
QTZACTR.data[3] = A_UNITE(EUZACTR,mode4,4,EIAACTR_cnewline);
GUZACTR = '{' ;
QTZACTR.data[4] = A_UNITE(FUZACTR,mode1,1,GUZACTR);
 /* line 545: */
 /* line 546: */
(void)(MDMACTR_writecstream(A_HISVEC(HUZACTR,QTZACTR,5,A68_93 ), QSZACTR_codestream));
} 
A_PROC_EXIT(optboolwarning);
return;
} 
#undef NL

A68_VOID  IUZACTR_optbooloper(void)
{ 
A68_224  JUZACTR;  /* collateral clause result */
A68_93  KUZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  LUZACTR;  /* YIELD */
A68_93  MUZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  NUZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(optbooloper);
LUZACTR = '}' ;
JUZACTR.data[0] = A_UNITE(KUZACTR,mode1,1,LUZACTR);
JUZACTR.data[1] = A_UNITE(MUZACTR,mode4,4,EIAACTR_cnewline);
 /* line 551: */
(void)(MDMACTR_writecstream(A_HISVEC(NUZACTR,JUZACTR,2,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel())));
A_PROC_EXIT(optbooloper);
return;
} 
#undef NL
 /* line 566: */
 /* line 567: */
 /* line 568: */
 /* line 569: */

A68_VOID  WUZACTR_endseries(A68_207  Properties, A68_109  Answer, A68_85 * Endofseries, A68_BOOL  Discardlevelactivated, A68_BOOL  Pullstack, A68_BOOL  Seriescontainsexit)
{ 
A_PROC_ENTRY(endseries);
 /* line 570: */
 /* line 572: */
 /* line 573: */
 /* line 574: */
 /* line 575: */
 /* line 577: */
 /* line 578: */
(void)(YBZACTR_endclause(Properties, Answer.End, Endofseries, Discardlevelactivated, Pullstack));
A_PROC_EXIT(endseries);
return;
} 
#undef NL

A68_VOID  ZUZACTR_semi(A68_BOOL  Outstandingdynamicresult, A68_BOOL  Declaration)
{ 
A_PROC_ENTRY(semi);
 /* line 581: */
 /* line 583: */
/*SKIP*/;
A_PROC_EXIT(semi);
return;
} 
#undef NL

A68_VOID  DVZACTR_exit(A68_BOOL  Dynamicresult, A68_BOOL  Firstexit, A68_109  Seriesanswer)
{ 
A68_221  GVZACTR;  /* collateral clause result */
A68_93  JVZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  KVZACTR;  /* YIELD */
A68_VC  LVZACTR;  /* OPERATORS - istruct -> vector */
A68_75  MVZACTR;  /* OPERATORS - istruct -> vector */
A68_93  NVZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  OVZACTR;  /* YIELD */
A68_93  PVZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  QVZACTR;  /* YIELD */
A68_93  RVZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  SVZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(exit);
 /* line 586: */
 /* line 588: */
{ 
(void)(WXIACTR_assert(FVZACTR, (Seriesanswer.End!=(A68_85 *)A68_NIL)));
 /* line 589: */
 /* line 590: */
KVZACTR = IVZACTR ;
GVZACTR.data[0] = A_UNITE(JVZACTR,mode2,2,KVZACTR);
MVZACTR = (*(&(Seriesanswer.End->Name))) ;
OVZACTR = A_HISVEC(LVZACTR,MVZACTR,7,A68_CHAR ) ;
GVZACTR.data[1] = A_UNITE(NVZACTR,mode2,2,OVZACTR);
 /* line 591: */
QVZACTR = ';' ;
GVZACTR.data[2] = A_UNITE(PVZACTR,mode1,1,QVZACTR);
GVZACTR.data[3] = A_UNITE(RVZACTR,mode4,4,EIAACTR_cnewline);
 /* line 592: */
 /* line 593: */
(void)(MDMACTR_writecstream(A_HISVEC(SVZACTR,GVZACTR,4,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel())));
} 
A_PROC_EXIT(exit);
return;
} 
#undef NL
 /* line 605: */
 /* line 607: */

A68_VOID  WVZACTR_codeinsert(A68_VC  Code, A68_INT  Mode, A68_101 * Visibles, A68_98  *ReturnedValue)
{ 
A68_98  XVZACTR_result A_UNUSED = {0};
A68_INT  YVZACTR_stream A_UNUSED = {0};
A68_205  BWZACTR_emitdefine;   /* proc value of non-global proc */
A68_76  QWZACTR_emitundefine;   /* proc value of non-global proc */
A68_249  CXZACTR_emitcode;   /* proc value of non-global proc */
A68_98  DYZACTR;  /* clause result */
A_PROC_ENTRY(codeinsert);
 /* line 608: */
 /* line 609: */
{ 
 /* line 610: */
YVZACTR_stream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 612: */
A_CLOSURE( BWZACTR_emitdefine, CWZACTR_emitdefine, DWZACTR_emitdefine );
(( DWZACTR_emitdefine * ) ( BWZACTR_emitdefine.nonlocals )) -> YVZACTR_stream = YVZACTR_stream;
 /* line 618: */
A_CLOSURE( QWZACTR_emitundefine, RWZACTR_emitundefine, SWZACTR_emitundefine );
(( SWZACTR_emitundefine * ) ( QWZACTR_emitundefine.nonlocals )) -> YVZACTR_stream = YVZACTR_stream;
 /* line 624: */
A_CLOSURE( CXZACTR_emitcode, DXZACTR_emitcode, EXZACTR_emitcode );
(( EXZACTR_emitcode * ) ( CXZACTR_emitcode.nonlocals )) -> BWZACTR_emitdefine = BWZACTR_emitdefine;
(( EXZACTR_emitcode * ) ( CXZACTR_emitcode.nonlocals )) -> CXZACTR_emitcode = CXZACTR_emitcode;
(( EXZACTR_emitcode * ) ( CXZACTR_emitcode.nonlocals )) -> QWZACTR_emitundefine = QWZACTR_emitundefine;
(( EXZACTR_emitcode * ) ( CXZACTR_emitcode.nonlocals )) -> Mode = Mode;
(( EXZACTR_emitcode * ) ( CXZACTR_emitcode.nonlocals )) -> XVZACTR_result = (&XVZACTR_result);
(( EXZACTR_emitcode * ) ( CXZACTR_emitcode.nonlocals )) -> Code = Code;
(( EXZACTR_emitcode * ) ( CXZACTR_emitcode.nonlocals )) -> YVZACTR_stream = YVZACTR_stream;
 /* line 659: */
(void)(A_CALLPROC(CXZACTR_emitcode,(Visibles),(Visibles,(CXZACTR_emitcode).nonlocals)));
 /* line 660: */
 /* line 661: */
DYZACTR = XVZACTR_result;
} 
A_PROC_EXIT(codeinsert);
*ReturnedValue = (DYZACTR);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 6: */
void KBZACTR(void)   /* initialise DECS clauses */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel","-dir",".","clauses.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/vak/Project/Algol/Algol-68RS-Source/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/vak/Project/Algol/Algol-68RS-Source/a68config/a68config.m","./incimperatives.m","./unionaids.m","./modes.m","./incmode.m","./evaluator.m","./tracer.m","./moduletracer.m","./idtable.m","./values.m","./coutput.m","./centities.m","./environment.m","./environ.m","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config A_UNUSED;
/* --- end of configuration information */
A68_60  TQZACTR;  /* procedure value */
A68_242  TRZACTR;  /* procedure value */
A68_208  PUZACTR;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
UAAACTR();   /* USE incimperatives */
VUQACTR();   /* USE unionaids */
DNMACTR();   /* USE modes */
ZDAACTR();   /* USE incmode */
JGVACTR();   /* USE evaluator */
QWYACTR();   /* USE tracer */
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
A_config.translation_time = "Thu Nov  5 21:11:00 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "JBZACTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 21:11:00 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS clauses);
(void)(UEAALIB_a68config(LGAALIB_configinfo, OBZACTR));
 /* line 53: */
 /* line 54: */
 /* line 56: */
 /* line 57: */
 /* line 71: */
 /* line 72: */
 /* line 87: */
 /* line 93: */
 /* line 156: */
 /* line 210: */
 /* line 211: */
 /* line 233: */
 /* line 238: */
 /* line 239: */
 /* line 270: */
 /* line 271: */
 /* line 302: */
 /* line 303: */
 /* line 326: */
 /* line 376: */
 /* line 390: */
 /* line 391: */
 /* line 393: */
 /* line 398: */
 /* line 413: */
 /* line 414: */
 /* line 435: */
 /* line 444: */
 /* line 445: */
 /* line 459: */
 /* line 460: */
 /* line 461: */
 /* line 468: */
TQZACTR.fn.fn_global = EQZACTR_out;
TQZACTR.nonlocals = A68_NIL;
SQZACTR_outu = (TQZACTR);
 /* line 470: */
 /* line 494: */
TRZACTR.fn.fn_global = WQZACTR_esac;
TRZACTR.nonlocals = A68_NIL;
SRZACTR_esacu = (TRZACTR);
 /* line 496: */
 /* line 517: */
 /* line 518: */
 /* line 548: */
 /* line 549: */
 /* line 550: */
 /* line 558: */
 /* line 562: */
PUZACTR.fn.fn_global = SBZACTR_startclause;
PUZACTR.nonlocals = A68_NIL;
OUZACTR_startseries = (PUZACTR);
 /* line 564: */
 /* line 565: */
 /* line 580: */
 /* line 585: */
 /* line 601: */
 /* line 602: */
 /* line 663: */
 /* line 665: */
 /* line 678: */
/*SKIP*/;
A_PROC_EXIT(DECS clauses);
} 
#undef NL
/* end of translation of clauses.a68 */
