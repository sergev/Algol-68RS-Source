/* UNAME:GCZACTR */
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
extern void NXYACTR(void);   /* tracer */
extern void BCHACTR(void);   /* moduletracer */
extern void PPKACTR(void);   /* idtable */
extern void OUPACTR(void);   /* values */
extern void PTLACTR(void);   /* coutput */
extern void THAACTR(void);   /* centities */
extern void HPIACTR(void);   /* environment */
extern void BPLACTR(void);   /* environ */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_206   KCZACTR = {"$Id: clauses.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,LCZACTR,KCZACTR,57)
static A68_210   HDZACTR = {"evaluate no result: mode of value not void"}; 
A_GISVEC(A68_VC ,IDZACTR,HDZACTR,42)
static A68_211   JDZACTR = {""}; 
A_GISVEC(A68_VC ,LDZACTR,JDZACTR,0)
static A68_211   AEZACTR = {""}; 
A_GISVEC(A68_VC ,CEZACTR,AEZACTR,0)
static A68_75   FEZACTR = {"(void)("}; 
A_GISVEC(A68_VC ,GEZACTR,FEZACTR,7)
static A68_75   PEZACTR = {"clauses"}; 
A_GISVEC(A68_VC ,QEZACTR,PEZACTR,7)
static A68_214   YEZACTR = {"clause result"}; 
A_GISVEC(A68_VC ,HFZACTR,YEZACTR,13)
static A68_217   QFZACTR = {"evaluate result: unknown value OF answer"}; 
A_GISVEC(A68_VC ,RFZACTR,QFZACTR,40)
static A68_211   SFZACTR = {""}; 
A_GISVEC(A68_VC ,TFZACTR,SFZACTR,0)
static A68_218   WFZACTR = {"evaluate result: value of value stack has incorrect mode"}; 
A_GISVEC(A68_VC ,XFZACTR,WFZACTR,56)
static A68_219   YFZACTR = {"; "}; 
A_GISVEC(A68_VC ,ZFZACTR,YFZACTR,2)
static A68_220   FGZACTR = {" = "}; 
A_GISVEC(A68_VC ,GGZACTR,FGZACTR,3)
static A68_222   UGZACTR = {"evaluate simple enquiry: value of value stack has incorrect mode"}; 
A_GISVEC(A68_VC ,VGZACTR,UGZACTR,64)
static A68_219   CHZACTR = {"{ "}; 
A_GISVEC(A68_VC ,DHZACTR,CHZACTR,2)
static A68_226   OHZACTR = {"clauses: end: end of clause label not set"}; 
A_GISVEC(A68_VC ,PHZACTR,OHZACTR,41)
static A68_220   VHZACTR = {": ;"}; 
A_GISVEC(A68_VC ,WHZACTR,VHZACTR,3)
static A68_219   CIZACTR = {"} "}; 
A_GISVEC(A68_VC ,DIZACTR,CIZACTR,2)
static A68_228   QIZACTR = {"A_ERROR(\"Bad case conformity - two choices for mode\");"}; 
A_GISVEC(A68_VC ,RIZACTR,QIZACTR,54)
static A68_229   YIZACTR = {"case "}; 
A_GISVEC(A68_VC ,ZIZACTR,YIZACTR,5)
static A68_219   EJZACTR = {": "}; 
A_GISVEC(A68_VC ,FJZACTR,EJZACTR,2)
static A68_220   IJZACTR = {"/* "}; 
static A68_220   JJZACTR = {" */"}; 
A_GISVEC(A68_VC ,KJZACTR,IJZACTR,3)
A_GISVEC(A68_VC ,MJZACTR,JJZACTR,3)
static A68_211   PJZACTR = {""}; 
A_GISVEC(A68_VC ,QJZACTR,PJZACTR,0)
static A68_233   AMZACTR = {"A_ENQ_SKIP"}; 
A_GISVEC(A68_VC ,CMZACTR,AMZACTR,10)
static A68_40   HMZACTR = {"if ("}; 
A_GISVEC(A68_VC ,IMZACTR,HMZACTR,4)
static A68_219   PMZACTR = {"{ "}; 
A_GISVEC(A68_VC ,QMZACTR,PMZACTR,2)
static A68_219   XMZACTR = {"} "}; 
A_GISVEC(A68_VC ,YMZACTR,XMZACTR,2)
static A68_40   CNZACTR = {"else"}; 
A_GISVEC(A68_VC ,DNZACTR,CNZACTR,4)
static A68_219   HNZACTR = {"{ "}; 
A_GISVEC(A68_VC ,INZACTR,HNZACTR,2)
static A68_233   PNZACTR = {"A_ENQ_SKIP"}; 
A_GISVEC(A68_VC ,RNZACTR,PNZACTR,10)
static A68_235   VNZACTR = {"switch ( "}; 
A_GISVEC(A68_VC ,WNZACTR,VNZACTR,9)
static A68_219   AOZACTR = {" )"}; 
A_GISVEC(A68_VC ,BOZACTR,AOZACTR,2)
static A68_219   FOZACTR = {"{ "}; 
A_GISVEC(A68_VC ,GOZACTR,FOZACTR,2)
static A68_236   KOZACTR = {"case 1: "}; 
A_GISVEC(A68_VC ,LOZACTR,KOZACTR,8)
static A68_239   UOZACTR = {"united object - for case conformity"}; 
A_GISVEC(A68_VC ,VOZACTR,UOZACTR,35)
static A68_235   APZACTR = {"switch ( "}; 
A_GISVEC(A68_VC ,BPZACTR,APZACTR,9)
static A68_229   FPZACTR = {".mode"}; 
A_GISVEC(A68_VC ,GPZACTR,FPZACTR,5)
static A68_219   JPZACTR = {" )"}; 
A_GISVEC(A68_VC ,KPZACTR,JPZACTR,2)
static A68_219   OPZACTR = {"{ "}; 
A_GISVEC(A68_VC ,PPZACTR,OPZACTR,2)
static A68_241   XPZACTR = {"break;"}; 
A_GISVEC(A68_VC ,YPZACTR,XPZACTR,6)
static A68_229   CQZACTR = {"case "}; 
A_GISVEC(A68_VC ,DQZACTR,CQZACTR,5)
static A68_219   IQZACTR = {": "}; 
A_GISVEC(A68_VC ,JQZACTR,IQZACTR,2)
static A68_241   UQZACTR = {"break;"}; 
A_GISVEC(A68_VC ,VQZACTR,UQZACTR,6)
static A68_241   DRZACTR = {"break;"}; 
A_GISVEC(A68_VC ,ERZACTR,DRZACTR,6)
static A68_235   IRZACTR = {"default: "}; 
A_GISVEC(A68_VC ,JRZACTR,IRZACTR,9)
A68_60  ORZACTR_outu A_UNUSED;
static A68_243   VRZACTR = {"A_IMP_SKIP ;"}; 
A_GISVEC(A68_VC ,WRZACTR,VRZACTR,12)
static A68_241   DSZACTR = {"break;"}; 
A_GISVEC(A68_VC ,ESZACTR,DSZACTR,6)
static A68_219   ISZACTR = {"} "}; 
A_GISVEC(A68_VC ,JSZACTR,ISZACTR,2)
A68_242  OSZACTR_esacu A_UNUSED;
static A68_243   WSZACTR = {"A_IMP_SKIP ;"}; 
A_GISVEC(A68_VC ,XSZACTR,WSZACTR,12)
static A68_219   DTZACTR = {"} "}; 
A_GISVEC(A68_VC ,ETZACTR,DTZACTR,2)
static A68_245   PTZACTR = {"optbool result"}; 
A_GISVEC(A68_VC ,RTZACTR,PTZACTR,14)
static A68_220   YTZACTR = {" = "}; 
A_GISVEC(A68_VC ,ZTZACTR,YTZACTR,3)
static A68_75   NUZACTR = {"if ( ! "}; 
A_GISVEC(A68_VC ,OUZACTR,NUZACTR,7)
static A68_229   RUZACTR = {"if ( "}; 
A_GISVEC(A68_VC ,SUZACTR,RUZACTR,5)
static A68_219   WUZACTR = {" )"}; 
A_GISVEC(A68_VC ,XUZACTR,WUZACTR,2)
A68_208  KVZACTR_startseries A_UNUSED;
static A68_210   AWZACTR = {"clauses: exit: end of series label not set"}; 
A_GISVEC(A68_VC ,BWZACTR,AWZACTR,42)
static A68_229   DWZACTR = {"goto "}; 
A_GISVEC(A68_VC ,EWZACTR,DWZACTR,5)
static A68_236   BXZACTR = {"#define "}; 
A_GISVEC(A68_VC ,CXZACTR,BXZACTR,8)
static A68_75   QXZACTR = {"#undef "}; 
A_GISVEC(A68_VC ,RXZACTR,QXZACTR,7)
static A68_250   LYZACTR = {"yield of code insert"}; 
A_GISVEC(A68_VC ,MYZACTR,LYZACTR,20)
static A68_241   OYZACTR = {"RESULT"}; 
A_GISVEC(A68_VC ,RYZACTR,OYZACTR,6)
static A68_241   XYZACTR = {"RESULT"}; 
A_GISVEC(A68_VC ,YYZACTR,XYZACTR,6)
typedef struct   /* env of non-global proc */
{
A68_VC  NDZACTR_f;
} QDZACTR_isident;
typedef struct   /* env of non-global proc */
{
A68_INT * MKZACTR_lo;
A68_INT * NKZACTR_hi;
A68_VC  LKZACTR_f;
} RKZACTR_scan;
typedef struct   /* env of non-global proc */
{
A68_INT * NKZACTR_hi;
A68_INT * MKZACTR_lo;
A68_VC  LKZACTR_f;
A68_232  PKZACTR_scan;
} BLZACTR_whollybracketed;
typedef struct   /* env of non-global proc */
{
A68_BOOL * KLZACTR_assignment;
A68_INT * MKZACTR_lo;
A68_INT * NKZACTR_hi;
A68_VC  LKZACTR_f;
} OLZACTR_anonymous;
typedef struct   /* env of non-global proc */
{
A68_INT  UWZACTR_stream;
A_PAD_INT(PAD_115)
} ZWZACTR_emitdefine;
typedef struct   /* env of non-global proc */
{
A68_INT  UWZACTR_stream;
A_PAD_INT(PAD_116)
} OXZACTR_emitundefine;
typedef struct   /* env of non-global proc */
{
A68_205  XWZACTR_emitdefine;
A68_249  YXZACTR_emitcode;
A68_76  MXZACTR_emitundefine;
A68_INT  Mode;
A_PAD_INT(PAD_117)
A68_98 * TWZACTR_result;
A68_VC  Code;
A68_INT  UWZACTR_stream;
A_PAD_INT(PAD_118)
} AYZACTR_emitcode;
typedef struct   /* env of non-global proc */
{
A68_INT * ELZACTR_firstclose;
} ILZACTR_anonymous;

A68_VOID  PCZACTR_startclause(A68_207  Properties, A68_85 ** Endofclause, A68_BOOL * Discardlevelactivated);

A68_VOID  VCZACTR_endclause(A68_207  Properties, A68_85 * Endofanswer, A68_85 * Endofclause, A68_BOOL  Discardlevelactivated, A68_BOOL  Pullstack);

A_STATIC A68_BOOL  YCZACTR_cf(A68_INT  M1, A68_INT  M2);

A68_VOID  BDZACTR_evaluatenoresult(A68_101 ** Valuestack);

A_STATIC A68_BOOL  PDZACTR_isident(void *NonLocals);

A68_VOID  UEZACTR_evaluateresult(A68_101 ** Valuestack, A68_109  Answer);

A_STATIC A68_95 * BFZACTR_assignment(A68_95 * ZEZACTR_anonymous, A68_95  AFZACTR_anonymous);

A68_VOID  SGZACTR_evaluatesimpleenquiry(A68_101 ** Valuestack, A68_109  Answer);

A68_VOID  AHZACTR_begin(A68_BOOL  Seriescontainslabel, A68_BOOL  Routinebody);

A68_VOID  MHZACTR_end(A68_BOOL  Dynamicresult, A68_BOOL  Seriescontainsexit, A68_BOOL  Routinebody, A68_85 * Endofclauselabel);

A_STATIC A68_VOID  LIZACTR_outputcaseulabel(A68_INT  Mode, A68_INT  Casenumber, A68_77  Case);

A_STATIC A68_VOID  YJZACTR_subunionchoice(A68_154  Uchoice, A68_94  Union, A68_77  Case);

A_STATIC A68_VOID  KKZACTR_condition(A68_VC  Frag, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  QKZACTR_scan(A68_55  Attop, void *NonLocals);

A_STATIC A68_BOOL  ALZACTR_whollybracketed(void *NonLocals);

A_STATIC A68_BOOL  HLZACTR_anonymous(A68_INT  I, void *NonLocals);

A_STATIC A68_BOOL  NLZACTR_anonymous(A68_INT  I, void *NonLocals);

A68_VOID  ZLZACTR_then(A68_94 * Enquiry);

A68_VOID  VMZACTR_else(void);

A68_VOID  ONZACTR_casein(A68_94 * Enquiry);

A68_VOID  TOZACTR_inu(A68_154  Uchoice, A68_94 * Union, A68_77  Case);

A68_VOID  VPZACTR_comma(A68_INT  Caseno);

A68_VOID  RQZACTR_commau(A68_154  Uchoice, A68_94  Union, A68_77  Case);

A68_VOID  ARZACTR_out(void);

A68_VOID  SRZACTR_esac(A68_BOOL  Outpart, A68_109  Answer);

A68_VOID  SSZACTR_fi(A68_BOOL  Elsepart, A68_109  Answer);

A68_VOID  LTZACTR_optboolwarning(A68_BOOL  Orel, A68_94 * Operand1);

A68_VOID  EVZACTR_optbooloper(void);

A68_VOID  SVZACTR_endseries(A68_207  Properties, A68_109  Answer, A68_85 * Endofseries, A68_BOOL  Discardlevelactivated, A68_BOOL  Pullstack, A68_BOOL  Seriescontainsexit);

A68_VOID  VVZACTR_semi(A68_BOOL  Outstandingdynamicresult, A68_BOOL  Declaration);

A68_VOID  ZVZACTR_exit(A68_BOOL  Dynamicresult, A68_BOOL  Firstexit, A68_109  Seriesanswer);

A68_VOID  SWZACTR_codeinsert(A68_VC  Code, A68_INT  Mode, A68_101 * Visibles, A68_98  *ReturnedValue);

A_STATIC A68_VOID  YWZACTR_emitdefine(A68_VC  Symbol, A68_VC  Text, void *NonLocals);

A_STATIC A68_VOID  NXZACTR_emitundefine(A68_VC  Symbol, void *NonLocals);

A_STATIC A68_VOID  ZXZACTR_emitcode(A68_101 * List, void *NonLocals);

A_STATIC A68_BOOL  HLZACTR_anonymous(A68_INT  I, void *NonLocals)
#define NL(x) (((ILZACTR_anonymous *)NonLocals)->x)
{ 
A68_BOOL  JLZACTR;  /* clause result */
{ 
(*NL(ELZACTR_firstclose)) = I;
JLZACTR = A68_FALSE;
} 
return( JLZACTR );
} 
#undef NL

A_STATIC A68_BOOL  PDZACTR_isident(void *NonLocals)
#define NL(x) (((QDZACTR_isident *)NonLocals)->x)
{ 
A68_BOOL  RDZACTR_ok A_UNUSED = {0};
A68_INT  SDZACTR_i A_UNUSED = {0};
A68_INT  TDZACTR;  /* to part of loop */
A68_CHAR  UDZACTR_c A_UNUSED = {0};
A68_BOOL  VDZACTR;  /* optbool result */
A68_BOOL  WDZACTR;  /* optbool result */
A68_BOOL  XDZACTR;  /* optbool result */
A68_BOOL  YDZACTR;  /* optbool result */
A68_BOOL  ZDZACTR;  /* clause result */
A_PROC_ENTRY(isident);
{ 
RDZACTR_ok = (NL(NDZACTR_f).upb>0);
 /* line 126: */
TDZACTR = NL(NDZACTR_f).upb;
for ( SDZACTR_i = 1;
SDZACTR_i <= TDZACTR;
SDZACTR_i += 1 )
{ 
 /* line 127: */
if ( !(RDZACTR_ok) ) break;
UDZACTR_c = A_VINDEX(NL(NDZACTR_f),SDZACTR_i);
 /* line 128: */
VDZACTR = (UDZACTR_c=='_');
if ( ! VDZACTR )
{WDZACTR = (UDZACTR_c>='a');
if ( WDZACTR )
{WDZACTR = (UDZACTR_c<='z');
}
 /* line 129: */
VDZACTR = WDZACTR;
}
if ( ! VDZACTR )
{XDZACTR = (UDZACTR_c>='A');
if ( XDZACTR )
{XDZACTR = (UDZACTR_c<='Z');
}
 /* line 130: */
VDZACTR = XDZACTR;
}
if ( ! VDZACTR )
{YDZACTR = (UDZACTR_c>='0');
if ( YDZACTR )
{YDZACTR = (UDZACTR_c<='9');
}
 /* line 131: */
VDZACTR = YDZACTR;
}
RDZACTR_ok = VDZACTR;
}
 /* line 132: */
 /* line 133: */
ZDZACTR = RDZACTR_ok;
} 
A_PROC_EXIT(isident);
return( ZDZACTR );
} 
#undef NL

A_STATIC A68_95 * BFZACTR_assignment(A68_95 * ZEZACTR_anonymous, A68_95  AFZACTR_anonymous)
{ 
A68_95  CFZACTR;  /* united object - for case conformity */
A68_VC  DFZACTR_anonymous A_UNUSED = {0};
A68_VC  EFZACTR;  /* OPERATORS - copy to flex */
A68_216 * FFZACTR;  /* YIELD */
A68_95 * GFZACTR;  /* clause result */
{ 
(*ZEZACTR_anonymous) = AFZACTR_anonymous;
CFZACTR = AFZACTR_anonymous ;
switch ( CFZACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
DFZACTR_anonymous = (CFZACTR.data.mode6);
FFZACTR = &(ZEZACTR_anonymous-> data.mode6) ;
(void)((*FFZACTR) = A_VCOPY(DFZACTR_anonymous,EFZACTR,A68_CHAR ));
break;
default: 
/*SKIP*/;
break;
} 
GFZACTR = ZEZACTR_anonymous;
} 
return( GFZACTR );
} 
#undef NL

A_STATIC A68_VOID  QKZACTR_scan(A68_55  Attop, void *NonLocals)
#define NL(x) (((RKZACTR_scan *)NonLocals)->x)
{ 
A68_INT  SKZACTR_d A_UNUSED = {0};
A68_INT  TKZACTR_i A_UNUSED = {0};
A68_CHAR  UKZACTR_q A_UNUSED = {0};
A68_CHAR  VKZACTR_c A_UNUSED = {0};
A68_BOOL  WKZACTR;  /* optbool result */
A68_BOOL  XKZACTR;  /* optbool result */
A68_BOOL  YKZACTR;  /* optbool result */
A_PROC_ENTRY(scan);
 /* line 334: */
 /* line 335: */
{ 
SKZACTR_d = 0;
TKZACTR_i = (*NL(MKZACTR_lo));
 /* line 336: */
UKZACTR_q = ' ';
 /* line 337: */
for ( ;; )
{ 
 /* line 338: */
if ( !((TKZACTR_i<=(*NL(NKZACTR_hi)))) ) break;
VKZACTR_c = A_VINDEX(NL(LKZACTR_f),TKZACTR_i);
 /* line 339: */
 /* line 340: */
if (UKZACTR_q!=' ')
{ 
if (VKZACTR_c=='\\')
{ 
TKZACTR_i+=1;
} 
else
{ 
if (VKZACTR_c==UKZACTR_q)
{ 
 /* line 341: */
UKZACTR_q = ' ';
} 
} 
} 
else
{ 
WKZACTR = (VKZACTR_c=='\'');
if ( ! WKZACTR )
{ /* line 342: */
WKZACTR = (VKZACTR_c=='\"');
}
if (WKZACTR)
{ 
 /* line 343: */
UKZACTR_q = VKZACTR_c;
} 
else
{ 
 /* line 344: */
if (VKZACTR_c=='(')
{ 
 /* line 345: */
SKZACTR_d+=1;
} 
else
{ 
 /* line 346: */
if (VKZACTR_c==')')
{ 
SKZACTR_d-=1;
 /* line 347: */
XKZACTR = (SKZACTR_d==0);
if ( XKZACTR )
{XKZACTR = (!A_CALLPROC(Attop,(TKZACTR_i),(TKZACTR_i,(Attop).nonlocals)));
}
if (XKZACTR)
{ 
 /* line 348: */
(void)(TKZACTR_i = (*NL(NKZACTR_hi)));
} 
} 
else
{ 
YKZACTR = (SKZACTR_d==0);
if ( YKZACTR )
{ /* line 349: */
YKZACTR = (!A_CALLPROC(Attop,(TKZACTR_i),(TKZACTR_i,(Attop).nonlocals)));
}
if (YKZACTR)
{ 
 /* line 350: */
(void)(TKZACTR_i = (*NL(NKZACTR_hi)));
} 
} 
} 
} 
} 
 /* line 351: */
 /* line 352: */
TKZACTR_i+=1;
}
 /* line 353: */
} 
A_PROC_EXIT(scan);
return;
} 
#undef NL

A_STATIC A68_BOOL  ALZACTR_whollybracketed(void *NonLocals)
#define NL(x) (((BLZACTR_whollybracketed *)NonLocals)->x)
{ 
A68_BOOL  CLZACTR;  /* optbool result */
A68_BOOL  DLZACTR;  /* clause result */
A68_INT  ELZACTR_firstclose A_UNUSED = {0};
A68_55  GLZACTR_anonymous;   /* proc value of non-global proc */
A_PROC_ENTRY(whollybracketed);
CLZACTR = (((*NL(NKZACTR_hi))-(*NL(MKZACTR_lo)))<1);
if ( ! CLZACTR )
{CLZACTR = (A_VINDEX(NL(LKZACTR_f),(*NL(MKZACTR_lo)))!='(');
}
if ( ! CLZACTR )
{ /* line 356: */
CLZACTR = (A_VINDEX(NL(LKZACTR_f),(*NL(NKZACTR_hi)))!=')');
}
if (CLZACTR)
{ 
 /* line 357: */
 /* line 358: */
DLZACTR = A68_FALSE;
} 
else
{ 
ELZACTR_firstclose = 0;
 /* line 359: */
A_CLOSURE( GLZACTR_anonymous, HLZACTR_anonymous, ILZACTR_anonymous );
(( ILZACTR_anonymous * ) ( GLZACTR_anonymous.nonlocals )) -> ELZACTR_firstclose = (&ELZACTR_firstclose);
(void)(A_CALLPROC(NL(PKZACTR_scan),(GLZACTR_anonymous),(GLZACTR_anonymous,(NL(PKZACTR_scan)).nonlocals)));
 /* line 360: */
 /* line 361: */
DLZACTR = (ELZACTR_firstclose==(*NL(NKZACTR_hi)));
} 
A_PROC_EXIT(whollybracketed);
return( DLZACTR );
} 
#undef NL

A_STATIC A68_BOOL  NLZACTR_anonymous(A68_INT  I, void *NonLocals)
#define NL(x) (((OLZACTR_anonymous *)NonLocals)->x)
{ 
A68_BOOL  PLZACTR;  /* optbool result */
A68_INT  QLZACTR;  /* YIELD */
A68_INT  RLZACTR;  /* YIELD */
A68_BOOL  SLZACTR;  /* clause result */
 /* line 365: */
{ 
PLZACTR = (I>(*NL(MKZACTR_lo)));
if ( PLZACTR )
{PLZACTR = (I<(*NL(NKZACTR_hi)));
}
if ( PLZACTR )
{ /* line 366: */
PLZACTR = (A_VINDEX(NL(LKZACTR_f),I)=='=');
}
if ( PLZACTR )
{QLZACTR = (I-1) ;
PLZACTR = (A_VINDEX(NL(LKZACTR_f),QLZACTR)==' ');
}
if ( PLZACTR )
{RLZACTR = (I+1) ;
PLZACTR = (A_VINDEX(NL(LKZACTR_f),RLZACTR)==' ');
}
(*NL(KLZACTR_assignment)) = PLZACTR;
 /* line 367: */
SLZACTR = (!(*NL(KLZACTR_assignment)));
} 
return( SLZACTR );
} 
#undef NL

A_STATIC A68_VOID  YWZACTR_emitdefine(A68_VC  Symbol, A68_VC  Text, void *NonLocals)
#define NL(x) (((ZWZACTR_emitdefine *)NonLocals)->x)
{ 
A68_230  AXZACTR;  /* collateral clause result */
A68_93  DXZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  EXZACTR;  /* YIELD */
A68_93  FXZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  GXZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  HXZACTR;  /* YIELD */
A68_93  IXZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  JXZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  KXZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(emitdefine);
 /* line 610: */
EXZACTR = CXZACTR ;
AXZACTR.data[0] = A_UNITE(DXZACTR,mode2,2,EXZACTR);
AXZACTR.data[1] = A_UNITE(FXZACTR,mode2,2,Symbol);
HXZACTR = ' ' ;
AXZACTR.data[2] = A_UNITE(GXZACTR,mode1,1,HXZACTR);
 /* line 611: */
AXZACTR.data[3] = A_UNITE(IXZACTR,mode2,2,Text);
AXZACTR.data[4] = A_UNITE(JXZACTR,mode4,4,EIAACTR_cnewline);
 /* line 612: */
(void)(MDMACTR_writecstream(A_HISVEC(KXZACTR,AXZACTR,5,A68_93 ), NL(UWZACTR_stream)));
A_PROC_EXIT(emitdefine);
return;
} 
#undef NL

A_STATIC A68_VOID  NXZACTR_emitundefine(A68_VC  Symbol, void *NonLocals)
#define NL(x) (((OXZACTR_emitundefine *)NonLocals)->x)
{ 
A68_212  PXZACTR;  /* collateral clause result */
A68_93  SXZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  TXZACTR;  /* YIELD */
A68_93  UXZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  VXZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  WXZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(emitundefine);
 /* line 616: */
TXZACTR = RXZACTR ;
PXZACTR.data[0] = A_UNITE(SXZACTR,mode2,2,TXZACTR);
 /* line 617: */
PXZACTR.data[1] = A_UNITE(UXZACTR,mode2,2,Symbol);
PXZACTR.data[2] = A_UNITE(VXZACTR,mode4,4,EIAACTR_cnewline);
 /* line 618: */
(void)(MDMACTR_writecstream(A_HISVEC(WXZACTR,PXZACTR,3,A68_93 ), NL(UWZACTR_stream)));
A_PROC_EXIT(emitundefine);
return;
} 
#undef NL

A_STATIC A68_VOID  ZXZACTR_emitcode(A68_101 * List, void *NonLocals)
#define NL(x) (((AYZACTR_emitcode *)NonLocals)->x)
{ 
A68_INT  BYZACTR_id A_UNUSED = {0};
A68_95  CYZACTR;  /* united object - for case conformity */
A68_97  DYZACTR_i A_UNUSED = {0};
A68_VC  EYZACTR;  /* avoid structure result */
A68_VC  FYZACTR;  /* avoid structure result */
A68_VC  GYZACTR;  /* avoid structure result */
A68_96  HYZACTR_r A_UNUSED = {0};
A68_VC  IYZACTR;  /* avoid structure result */
A68_VC  JYZACTR;  /* avoid structure result */
A68_VC  KYZACTR;  /* avoid structure result */
A68_98  NYZACTR;  /* avoid structure result */
A68_VC  PYZACTR;  /* OPERATORS - istruct -> vector */
A68_75  QYZACTR;  /* OPERATORS - istruct -> vector */
A68_VC  SYZACTR;  /* avoid structure result */
A68_93  TYZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  UYZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_93  VYZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  WYZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(emitcode);
 /* line 621: */
 /* line 622: */
{ 
 /* line 623: */
if (List!=MKJACTR_nilvaluelist)
{ 
 /* line 624: */
 /* line 625: */
CYZACTR = (*(&((&(List->Value))->Extra))) ;
switch ( CYZACTR.mode )
{ 
case 4: /* STRUCT(INT)  */
DYZACTR_i = (CYZACTR.data.mode4);
 /* line 626: */
{ 
BYZACTR_id = DYZACTR_i.Idno;
 /* line 627: */
UTKACTR_idfullname( BYZACTR_id, &EYZACTR );
LRKACTR_idname( BYZACTR_id, &FYZACTR );
(void)(A_CALLPROC(NL(XWZACTR_emitdefine),(FYZACTR, EYZACTR),(FYZACTR, EYZACTR,(NL(XWZACTR_emitdefine)).nonlocals)));
 /* line 628: */
(void)(A_CALLPROC(NL(YXZACTR_emitcode),((*(&(List->Rest)))),((*(&(List->Rest))),(NL(YXZACTR_emitcode)).nonlocals)));
 /* line 629: */
 /* line 630: */
 /* line 631: */
LRKACTR_idname( BYZACTR_id, &GYZACTR );
(void)(A_CALLPROC(NL(MXZACTR_emitundefine),(GYZACTR),(GYZACTR,(NL(MXZACTR_emitundefine)).nonlocals)));
} 
break;
case 2: /* STRUCT(INT)  */
HYZACTR_r = (CYZACTR.data.mode2);
 /* line 632: */
{ 
BYZACTR_id = HYZACTR_r.Rdenno;
 /* line 633: */
UTKACTR_idfullname( BYZACTR_id, &IYZACTR );
LRKACTR_idname( BYZACTR_id, &JYZACTR );
(void)(A_CALLPROC(NL(XWZACTR_emitdefine),(JYZACTR, IYZACTR),(JYZACTR, IYZACTR,(NL(XWZACTR_emitdefine)).nonlocals)));
 /* line 634: */
(void)(A_CALLPROC(NL(YXZACTR_emitcode),((*(&(List->Rest)))),((*(&(List->Rest))),(NL(YXZACTR_emitcode)).nonlocals)));
 /* line 635: */
 /* line 636: */
 /* line 637: */
LRKACTR_idname( BYZACTR_id, &KYZACTR );
(void)(A_CALLPROC(NL(MXZACTR_emitundefine),(KYZACTR),(KYZACTR,(NL(MXZACTR_emitundefine)).nonlocals)));
} 
break;
default: 
(void)(PXIACTR_error(902));
 /* line 638: */
 /* line 639: */
 /* line 640: */
(void)(A_CALLPROC(NL(YXZACTR_emitcode),((*(&(List->Rest)))),((*(&(List->Rest))),(NL(YXZACTR_emitcode)).nonlocals)));
break;
} 
} 
else
{ 
 /* line 641: */
if (NL(Mode)!=UEAACTR_voidmode)
{ 
 /* line 644: */
QMOACTR_declarectemporary( NL(Mode), MYZACTR, &NYZACTR );
(*NL(TWZACTR_result)) = NYZACTR;
 /* line 645: */
 /* line 646: */
QYZACTR = (*(&(NL(TWZACTR_result)->Name))) ;
(void)(A_CALLPROC(NL(XWZACTR_emitdefine),(RYZACTR, A_HISVEC(PYZACTR,QYZACTR,7,A68_CHAR )),(RYZACTR, A_HISVEC(PYZACTR,QYZACTR,7,A68_CHAR ),(NL(XWZACTR_emitdefine)).nonlocals)));
} 
 /* line 647: */
VJAACTR_curly( NL(Code), &SYZACTR );
(void)(MDMACTR_writecstream(A_HVEC(UYZACTR,A_UNITE(TYZACTR,mode2,2,SYZACTR),A68_93 ), NL(UWZACTR_stream)));
 /* line 648: */
(void)(MDMACTR_writecstream(A_HVEC(WYZACTR,A_UNITE(VYZACTR,mode4,4,EIAACTR_cnewline),A68_93 ), NL(UWZACTR_stream)));
 /* line 649: */
 /* line 650: */
if (NL(Mode)!=UEAACTR_voidmode)
{ 
 /* line 651: */
 /* line 652: */
 /* line 653: */
(void)(A_CALLPROC(NL(MXZACTR_emitundefine),(YYZACTR),(YYZACTR,(NL(MXZACTR_emitundefine)).nonlocals)));
} 
} 
} 
A_PROC_EXIT(emitcode);
return;
} 
#undef NL
 /* line 58: */
 /* line 60: */

A68_VOID  PCZACTR_startclause(A68_207  Properties, A68_85 ** Endofclause, A68_BOOL * Discardlevelactivated)
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

A68_VOID  VCZACTR_endclause(A68_207  Properties, A68_85 * Endofanswer, A68_85 * Endofclause, A68_BOOL  Discardlevelactivated, A68_BOOL  Pullstack)
{ 
A_PROC_ENTRY(endclause);
 /* line 83: */
 /* line 85: */
/*SKIP*/;
A_PROC_EXIT(endclause);
return;
} 
#undef NL

A_STATIC A68_BOOL  YCZACTR_cf(A68_INT  M1, A68_INT  M2)
{ 
A68_BOOL  ZCZACTR;  /* clause result */
A_PROC_ENTRY(cf);
 /* line 91: */
ZCZACTR = (HCNACTR_finddeflexmode(M1)==HCNACTR_finddeflexmode(M2));
A_PROC_EXIT(cf);
return( ZCZACTR );
} 
#undef NL

A68_VOID  BDZACTR_evaluatenoresult(A68_101 ** Valuestack)
{ 
A68_94 * CDZACTR_value A_UNUSED = {0};
A68_95  DDZACTR;  /* united object - for case conformity */
A68_BOOL  EDZACTR;  /* clause result */
A68_BOOL  FDZACTR;  /* clause result */
A68_INT  GDZACTR_codestream A_UNUSED = {0};
A68_VC  KDZACTR;  /* clause result */
A68_VC  MDZACTR;  /* avoid structure result */
A68_VC  NDZACTR_f A_UNUSED = {0};
A68_61  ODZACTR_isident;   /* proc value of non-global proc */
A68_VC  BEZACTR;  /* clause result */
A68_BOOL  DEZACTR;  /* optbool result */
A68_INT  EEZACTR;  /* YIELD */
A68_VC  HEZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  IEZACTR_statement A_UNUSED = {0};
A68_212  JEZACTR;  /* collateral clause result */
A68_93  KEZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  LEZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  MEZACTR;  /* YIELD */
A68_93  NEZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  OEZACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  REZACTR;  /* optbool result */
A_PROC_ENTRY(evaluatenoresult);
 /* line 107: */
 /* line 108: */
{ 
 /* line 109: */
 /* line 110: */
if ((*Valuestack)!=MKJACTR_nilvaluelist)
{ 
CDZACTR_value = (&((*Valuestack)->Value));
 /* line 111: */
DDZACTR = (*(&(CDZACTR_value->Extra))) ;
switch ( DDZACTR.mode )
{ 
case 3: /* VOID */
EDZACTR = A68_TRUE;
break;
default: 
 /* line 112: */
EDZACTR = A68_FALSE;
break;
} 
 /* line 113: */
 /* line 114: */
 /* line 115: */
FDZACTR = (EDZACTR&((*(&(CDZACTR_value->Mode)))==UEAACTR_voidmode));
if (FDZACTR)
{ 
 /* line 116: */
 /* line 117: */
(void)((*Valuestack) = (*(&((*Valuestack)->Rest))));
} 
else
{ 
GDZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 118: */
(void)((*Valuestack) = (*(&((*Valuestack)->Rest))));
 /* line 119: */
(void)(A_CALLPROC(BYQACTR_evaluate,(CDZACTR_value),(CDZACTR_value,(BYQACTR_evaluate).nonlocals)));
 /* line 120: */
 /* line 121: */
(void)(WXIACTR_assert(IDZACTR, ((*(&(CDZACTR_value->Mode)))==UEAACTR_voidmode)));
 /* line 122: */
if (EYPACTR_isskip(CDZACTR_value))
{ 
KDZACTR = LDZACTR;
} 
else
{ 
UZPACTR_getcfragment( CDZACTR_value, &MDZACTR );
KDZACTR = MDZACTR;
} 
NDZACTR_f = KDZACTR;
 /* line 123: */
 /* line 124: */
 /* line 125: */
A_CLOSURE( ODZACTR_isident, PDZACTR_isident, QDZACTR_isident );
(( QDZACTR_isident * ) ( ODZACTR_isident.nonlocals )) -> NDZACTR_f = NDZACTR_f;
 /* line 136: */
 /* line 137: */
 /* line 138: */
 /* line 139: */
if (A_CALLPROC(ODZACTR_isident,(),((ODZACTR_isident).nonlocals)))
{ 
BEZACTR = CEZACTR;
} 
else
{ 
DEZACTR = (NDZACTR_f.upb>0);
if ( DEZACTR )
{ /* line 140: */
EEZACTR = NDZACTR_f.upb ;
DEZACTR = (A_VINDEX(NDZACTR_f,EEZACTR)==')');
}
if (DEZACTR)
{ 
 /* line 141: */
 /* line 142: */
BEZACTR = A_VC_PLUS(A_VC_PLUS(GEZACTR,NDZACTR_f),A_HVEC(HEZACTR,')',A68_CHAR ));
} 
else
{ 
BEZACTR = NDZACTR_f;
} 
} 
IEZACTR_statement = BEZACTR;
 /* line 143: */
JEZACTR.data[0] = A_UNITE(KEZACTR,mode2,2,IEZACTR_statement);
MEZACTR = ';' ;
JEZACTR.data[1] = A_UNITE(LEZACTR,mode1,1,MEZACTR);
JEZACTR.data[2] = A_UNITE(NEZACTR,mode4,4,EIAACTR_cnewline);
 /* line 144: */
(void)(MDMACTR_writecstream(A_HISVEC(OEZACTR,JEZACTR,3,A68_93 ), GDZACTR_codestream));
} 
 /* line 145: */
 /* line 146: */
REZACTR = (ZCHACTR_tracelevel(QEZACTR)!=0);
if ( REZACTR )
{ /* line 147: */
REZACTR = ((*Valuestack)!=MKJACTR_nilvaluelist);
}
if (REZACTR)
{ 
 /* line 148: */
 /* line 149: */
 /* line 150: */
(void)(A_CALLPROC(XGVACTR_calltrace,((&((*Valuestack)->Value)), A68_FALSE),((&((*Valuestack)->Value)), A68_FALSE,(XGVACTR_calltrace).nonlocals)));
} 
} 
} 
A_PROC_EXIT(evaluatenoresult);
return;
} 
#undef NL

A68_VOID  UEZACTR_evaluateresult(A68_101 ** Valuestack, A68_109  Answer)
{ 
A68_94 * VEZACTR_ansvalue A_UNUSED = {0};
A68_INT  WEZACTR_codestream A_UNUSED = {0};
A68_95  XEZACTR;  /* united object - for case conformity */
A68_98  IFZACTR;  /* avoid structure result */
A68_95  JFZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  KFZACTR;  /* clause result */
A68_VC  LFZACTR;  /* avoid structure result */
A68_98  MFZACTR_t A_UNUSED = {0};
A68_VC  NFZACTR;  /* OPERATORS - istruct -> vector */
A68_75  OFZACTR;  /* OPERATORS - istruct -> vector */
A68_VC  PFZACTR_c A_UNUSED = {0};
A68_VC  UFZACTR_assignee A_UNUSED = {0};
A68_94 * VFZACTR_value A_UNUSED = {0};
A68_93  AGZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  BGZACTR;  /* YIELD */
A68_92  CGZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_221  DGZACTR;  /* collateral clause result */
A68_93  EGZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  HGZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  IGZACTR;  /* YIELD */
A68_VC  JGZACTR;  /* avoid structure result */
A68_93  KGZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  LGZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  MGZACTR;  /* YIELD */
A68_92  NGZACTR;  /* OPERATORS - istruct -> vector */
A68_93  OGZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  PGZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(evaluateresult);
 /* line 165: */
 /* line 166: */
{ 
VEZACTR_ansvalue = Answer.Value;
 /* line 167: */
 /* line 168: */
if ((*(&(VEZACTR_ansvalue->Mode)))==UEAACTR_voidmode)
{ 
 /* line 169: */
 /* line 170: */
(void)(BDZACTR_evaluatenoresult(Valuestack));
} 
else
{ 
WEZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 172: */
 /* line 173: */
 /* line 174: */
XEZACTR = (*(&(VEZACTR_ansvalue->Extra))) ;
switch ( XEZACTR.mode )
{ 
case 3: /* VOID */
 /* line 175: */
 /* line 176: */
{ 
 /* line 178: */
 /* line 180: */
QMOACTR_declarectemporary( (*(&(VEZACTR_ansvalue->Mode))), HFZACTR, &IFZACTR );
(void)(BFZACTR_assignment((&(VEZACTR_ansvalue->Extra)), A_UNITE(JFZACTR,mode5,5,IFZACTR)));
 /* line 181: */
 /* line 182: */
 /* line 183: */
UZPACTR_getcfragment( VEZACTR_ansvalue, &LFZACTR );
KFZACTR = LFZACTR;
} 
break;
case 5: /* STRUCT(MODE75,INT)  */
MFZACTR_t = (XEZACTR.data.mode5);
 /* line 184: */
 /* line 185: */
OFZACTR = MFZACTR_t.Name ;
KFZACTR = A_HISVEC(NFZACTR,OFZACTR,7,A68_CHAR );
break;
case 6: /* VECTOR [] CHAR */
PFZACTR_c = (XEZACTR.data.mode6);
 /* line 186: */
 /* line 187: */
KFZACTR = PFZACTR_c;
break;
default: 
(void)(WXIACTR_assert(RFZACTR, A68_FALSE));
 /* line 188: */
KFZACTR = TFZACTR;
break;
} 
UFZACTR_assignee = KFZACTR;
 /* line 190: */
VFZACTR_value = (&((*Valuestack)->Value));
 /* line 191: */
(void)(GMVACTR_evaluatestack(Valuestack));
 /* line 192: */
 /* line 193: */
(void)(WXIACTR_assert(XFZACTR, YCZACTR_cf((*(&(VEZACTR_ansvalue->Mode))), (*(&((&((*Valuestack)->Value))->Mode))))));
 /* line 194: */
 /* line 195: */
if (EYPACTR_isskip(VFZACTR_value))
{ 
 /* line 196: */
 /* line 197: */
BGZACTR = ZFZACTR ;
(void)(MDMACTR_writecstream(A_HVEC(CGZACTR,A_UNITE(AGZACTR,mode2,2,BGZACTR),A68_93 ), WEZACTR_codestream));
} 
else
{ 
DGZACTR.data[0] = A_UNITE(EGZACTR,mode2,2,UFZACTR_assignee);
IGZACTR = GGZACTR ;
DGZACTR.data[1] = A_UNITE(HGZACTR,mode2,2,IGZACTR);
UZPACTR_getcfragment( VFZACTR_value, &JGZACTR );
DGZACTR.data[2] = A_UNITE(KGZACTR,mode2,2,JGZACTR);
MGZACTR = ';' ;
DGZACTR.data[3] = A_UNITE(LGZACTR,mode1,1,MGZACTR);
 /* line 199: */
 /* line 200: */
(void)(MDMACTR_writecstream(A_HISVEC(NGZACTR,DGZACTR,4,A68_93 ), WEZACTR_codestream));
} 
 /* line 201: */
(void)(MDMACTR_writecstream(A_HVEC(PGZACTR,A_UNITE(OGZACTR,mode4,4,EIAACTR_cnewline),A68_93 ), WEZACTR_codestream));
 /* line 202: */
 /* line 203: */
 /* line 204: */
(void)((*Valuestack) = (*(&((*Valuestack)->Rest))));
} 
} 
A_PROC_EXIT(evaluateresult);
return;
} 
#undef NL
 /* line 209: */

A68_VOID  SGZACTR_evaluatesimpleenquiry(A68_101 ** Valuestack, A68_109  Answer)
{ 
A68_94 * TGZACTR_value A_UNUSED = {0};
A68_VC  WGZACTR;  /* avoid structure result */
A68_95  XGZACTR = {0};  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(evaluatesimpleenquiry);
 /* line 215: */
 /* line 216: */
{ 
TGZACTR_value = (&((*Valuestack)->Value));
 /* line 217: */
(void)(GMVACTR_evaluatestack(Valuestack));
 /* line 218: */
 /* line 219: */
(void)(WXIACTR_assert(VGZACTR, YCZACTR_cf((*(&(Answer.Value->Mode))), (*(&(TGZACTR_value->Mode))))));
 /* line 220: */
UZPACTR_getcfragment( TGZACTR_value, &WGZACTR );
(void)(BFZACTR_assignment((&(Answer.Value->Extra)), A_UNITE(XGZACTR,mode6,6,WGZACTR)));
 /* line 221: */
 /* line 222: */
(void)((*Valuestack) = (*(&((*Valuestack)->Rest))));
} 
A_PROC_EXIT(evaluatesimpleenquiry);
return;
} 
#undef NL

A68_VOID  AHZACTR_begin(A68_BOOL  Seriescontainslabel, A68_BOOL  Routinebody)
{ 
A68_224  BHZACTR;  /* collateral clause result */
A68_93  EHZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  FHZACTR;  /* YIELD */
A68_93  GHZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  HHZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(begin);
 /* line 230: */
 /* line 231: */
FHZACTR = DHZACTR ;
BHZACTR.data[0] = A_UNITE(EHZACTR,mode2,2,FHZACTR);
BHZACTR.data[1] = A_UNITE(GHZACTR,mode4,4,EIAACTR_cnewline);
 /* line 232: */
(void)(MDMACTR_writecstream(A_HISVEC(HHZACTR,BHZACTR,2,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel())));
A_PROC_EXIT(begin);
return;
} 
#undef NL
 /* line 237: */

A68_VOID  MHZACTR_end(A68_BOOL  Dynamicresult, A68_BOOL  Seriescontainsexit, A68_BOOL  Routinebody, A68_85 * Endofclauselabel)
{ 
A68_INT  NHZACTR_codestream A_UNUSED = {0};
A68_212  QHZACTR;  /* collateral clause result */
A68_VC  RHZACTR;  /* OPERATORS - istruct -> vector */
A68_75  SHZACTR;  /* OPERATORS - istruct -> vector */
A68_93  THZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  UHZACTR;  /* YIELD */
A68_93  XHZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  YHZACTR;  /* YIELD */
A68_93  ZHZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  AIZACTR;  /* OPERATORS - istruct -> vector */
A68_224  BIZACTR;  /* collateral clause result */
A68_93  EIZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  FIZACTR;  /* YIELD */
A68_93  GIZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  HIZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(end);
 /* line 238: */
 /* line 239: */
{ 
NHZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 240: */
 /* line 241: */
 /* line 242: */
if (Seriescontainsexit)
{ 
(void)(WXIACTR_assert(PHZACTR, (Endofclauselabel!=(A68_85 *)A68_NIL)));
 /* line 243: */
 /* line 244: */
SHZACTR = (*(&(Endofclauselabel->Name))) ;
UHZACTR = A_HISVEC(RHZACTR,SHZACTR,7,A68_CHAR ) ;
QHZACTR.data[0] = A_UNITE(THZACTR,mode2,2,UHZACTR);
 /* line 245: */
YHZACTR = WHZACTR ;
QHZACTR.data[1] = A_UNITE(XHZACTR,mode2,2,YHZACTR);
QHZACTR.data[2] = A_UNITE(ZHZACTR,mode4,4,EIAACTR_cnewline);
 /* line 246: */
 /* line 247: */
(void)(MDMACTR_writecstream(A_HISVEC(AIZACTR,QHZACTR,3,A68_93 ), NHZACTR_codestream));
} 
 /* line 248: */
FIZACTR = DIZACTR ;
BIZACTR.data[0] = A_UNITE(EIZACTR,mode2,2,FIZACTR);
BIZACTR.data[1] = A_UNITE(GIZACTR,mode4,4,EIAACTR_cnewline);
 /* line 249: */
(void)(MDMACTR_writecstream(A_HISVEC(HIZACTR,BIZACTR,2,A68_93 ), NHZACTR_codestream));
} 
A_PROC_EXIT(end);
return;
} 
#undef NL
 /* line 269: */

A_STATIC A68_VOID  LIZACTR_outputcaseulabel(A68_INT  Mode, A68_INT  Casenumber, A68_77  Case)
{ 
A68_INT  MIZACTR_codestream A_UNUSED = {0};
A68_VC  NIZACTR;  /* avoid structure result */
A68_70  OIZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_224  PIZACTR;  /* collateral clause result */
A68_93  SIZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  TIZACTR;  /* YIELD */
A68_93  UIZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  VIZACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL * WIZACTR;  /* YIELD */
A68_230  XIZACTR;  /* collateral clause result */
A68_93  AJZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  BJZACTR;  /* YIELD */
A68_VC  CJZACTR;  /* avoid structure result */
A68_93  DJZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  GJZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  HJZACTR;  /* YIELD */
A68_VC  LJZACTR;  /* avoid structure result */
A68_93  NJZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  OJZACTR;  /* YIELD */
A68_93  RJZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  SJZACTR;  /* YIELD */
A68_93  TJZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  UJZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(outputcaseulabel);
 /* line 275: */
 /* line 276: */
{ 
MIZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 277: */
 /* line 278: */
 /* line 279: */
if (*(&A_R1INDEX(Case,Casenumber)))
{ 
WCNACTR_modename( Mode, &NIZACTR );
(void)(NWIACTR_pmessage(720, A_HARR(OIZACTR,NIZACTR,A68_VC )));
 /* line 280: */
 /* line 281: */
 /* line 283: */
TIZACTR = RIZACTR ;
PIZACTR.data[0] = A_UNITE(SIZACTR,mode2,2,TIZACTR);
PIZACTR.data[1] = A_UNITE(UIZACTR,mode4,4,EIAACTR_cnewline);
 /* line 284: */
 /* line 285: */
 /* line 286: */
(void)(MDMACTR_writecstream(A_HISVEC(VIZACTR,PIZACTR,2,A68_93 ), MIZACTR_codestream));
} 
else
{ 
WIZACTR = (&A_R1INDEX(Case,Casenumber)) ;
(*WIZACTR) = A68_TRUE;
 /* line 287: */
 /* line 288: */
BJZACTR = ZIZACTR ;
XIZACTR.data[0] = A_UNITE(AJZACTR,mode2,2,BJZACTR);
ROAAOSF_whole( Casenumber, 0, &CJZACTR );
XIZACTR.data[1] = A_UNITE(DJZACTR,mode2,2,CJZACTR);
 /* line 289: */
HJZACTR = FJZACTR ;
XIZACTR.data[2] = A_UNITE(GJZACTR,mode2,2,HJZACTR);
 /* line 290: */
if (AQIACTR_verboseoption)
{ 
 /* line 291: */
 /* line 292: */
WCNACTR_modename( Mode, &LJZACTR );
OJZACTR = A_VC_PLUS(A_VC_PLUS(KJZACTR,LJZACTR),MJZACTR) ;
XIZACTR.data[3] = A_UNITE(NJZACTR,mode2,2,OJZACTR);
} 
else
{ 
 /* line 293: */
SJZACTR = QJZACTR ;
XIZACTR.data[3] = A_UNITE(RJZACTR,mode2,2,SJZACTR);
} 
XIZACTR.data[4] = A_UNITE(TJZACTR,mode4,4,EIAACTR_cnewline);
 /* line 294: */
 /* line 295: */
 /* line 296: */
(void)(MDMACTR_writecstream(A_HISVEC(UJZACTR,XIZACTR,5,A68_93 ), MIZACTR_codestream));
} 
} 
A_PROC_EXIT(outputcaseulabel);
return;
} 
#undef NL
 /* line 300: */
 /* line 302: */

A_STATIC A68_VOID  YJZACTR_subunionchoice(A68_154  Uchoice, A68_94  Union, A68_77  Case)
{ 
A68_172  ZJZACTR;  /* avoid structure result */
A68_172  AKZACTR_modesofunion A_UNUSED = {0};
A68_172  BKZACTR;  /* avoid structure result */
A68_VC  CKZACTR;  /* avoid structure result */
A68_VC  DKZACTR;  /* OPERATORS - trim index */
A68_VC  EKZACTR;  /* YIELD */
A68_RC  FKZACTR;  /* OPERATORS - vector -> row */
A68_RC  GKZACTR_table A_UNUSED = {0};
A68_INT  HKZACTR_i A_UNUSED = {0};
A68_INT  IKZACTR;  /* to part of loop */
A_PROC_ENTRY(subunionchoice);
 /* line 307: */
 /* line 308: */
{ 
A_CALLPROC(YVMACTR_constituents,(Union.Mode, &ZJZACTR),(Union.Mode, &ZJZACTR,(YVMACTR_constituents).nonlocals));
AKZACTR_modesofunion = ZJZACTR;
 /* line 309: */
 /* line 311: */
 /* line 312: */
 /* line 313: */
A_CALLPROC(YVMACTR_constituents,(Uchoice.Mode, &BKZACTR),(Uchoice.Mode, &BKZACTR,(YVMACTR_constituents).nonlocals));
WWQACTR_uniontouniontable( AKZACTR_modesofunion, BKZACTR, &CKZACTR );
EKZACTR = A_VTRIM(DKZACTR,(CKZACTR),A_VTSCRIPT(&(DKZACTR.upb),(CKZACTR).upb,1,(CKZACTR).upb)) ;
GKZACTR_table = A_VECARR(EKZACTR,FKZACTR);
 /* line 314: */
 /* line 315: */
IKZACTR = GKZACTR_table.dim[0].upb;
for ( HKZACTR_i = 1;
HKZACTR_i <= IKZACTR;
HKZACTR_i += 1 )
{ 
 /* line 316: */
if ((A68_INT)(unsigned char)A_R1INDEX(GKZACTR_table,HKZACTR_i)!=0)
{ 
 /* line 317: */
 /* line 318: */
(void)(LIZACTR_outputcaseulabel((*(&A_VINDEX(AKZACTR_modesofunion,HKZACTR_i))), HKZACTR_i, Case));
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

A_STATIC A68_VOID  KKZACTR_condition(A68_VC  Frag, A68_VC  *ReturnedValue)
{ 
A68_VC  LKZACTR_f A_UNUSED = {0};
A68_INT  MKZACTR_lo A_UNUSED = {0};
A68_INT  NKZACTR_hi A_UNUSED = {0};
A68_232  PKZACTR_scan;   /* proc value of non-global proc */
A68_61  ZKZACTR_whollybracketed;   /* proc value of non-global proc */
A68_BOOL  KLZACTR_assignment A_UNUSED = {0};
A68_55  MLZACTR_anonymous;   /* proc value of non-global proc */
A68_VC  TLZACTR;  /* OPERATORS - trim index */
A68_VC  ULZACTR_c A_UNUSED = {0};
A68_VC  VLZACTR;  /* clause result */
A68_VC  WLZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XLZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(condition);
 /* line 328: */
 /* line 329: */
{ 
LKZACTR_f = Frag;
 /* line 330: */
MKZACTR_lo = 1;
NKZACTR_hi = LKZACTR_f.upb;
 /* line 333: */
A_CLOSURE( PKZACTR_scan, QKZACTR_scan, RKZACTR_scan );
(( RKZACTR_scan * ) ( PKZACTR_scan.nonlocals )) -> MKZACTR_lo = (&MKZACTR_lo);
(( RKZACTR_scan * ) ( PKZACTR_scan.nonlocals )) -> NKZACTR_hi = (&NKZACTR_hi);
(( RKZACTR_scan * ) ( PKZACTR_scan.nonlocals )) -> LKZACTR_f = LKZACTR_f;
 /* line 354: */
 /* line 355: */
A_CLOSURE( ZKZACTR_whollybracketed, ALZACTR_whollybracketed, BLZACTR_whollybracketed );
(( BLZACTR_whollybracketed * ) ( ZKZACTR_whollybracketed.nonlocals )) -> NKZACTR_hi = (&NKZACTR_hi);
(( BLZACTR_whollybracketed * ) ( ZKZACTR_whollybracketed.nonlocals )) -> MKZACTR_lo = (&MKZACTR_lo);
(( BLZACTR_whollybracketed * ) ( ZKZACTR_whollybracketed.nonlocals )) -> LKZACTR_f = LKZACTR_f;
(( BLZACTR_whollybracketed * ) ( ZKZACTR_whollybracketed.nonlocals )) -> PKZACTR_scan = PKZACTR_scan;
 /* line 362: */
for ( ;; )
{ 
if ( !(A_CALLPROC(ZKZACTR_whollybracketed,(),((ZKZACTR_whollybracketed).nonlocals))) ) break;
MKZACTR_lo+=1;
NKZACTR_hi-=1;
}
 /* line 363: */
KLZACTR_assignment = A68_FALSE;
 /* line 364: */
A_CLOSURE( MLZACTR_anonymous, NLZACTR_anonymous, OLZACTR_anonymous );
(( OLZACTR_anonymous * ) ( MLZACTR_anonymous.nonlocals )) -> KLZACTR_assignment = (&KLZACTR_assignment);
(( OLZACTR_anonymous * ) ( MLZACTR_anonymous.nonlocals )) -> MKZACTR_lo = (&MKZACTR_lo);
(( OLZACTR_anonymous * ) ( MLZACTR_anonymous.nonlocals )) -> NKZACTR_hi = (&NKZACTR_hi);
(( OLZACTR_anonymous * ) ( MLZACTR_anonymous.nonlocals )) -> LKZACTR_f = LKZACTR_f;
(void)(A_CALLPROC(PKZACTR_scan,(MLZACTR_anonymous),(MLZACTR_anonymous,(PKZACTR_scan).nonlocals)));
 /* line 368: */
ULZACTR_c = A_VTRIM(TLZACTR,(LKZACTR_f),A_VTSCRIPT(&(TLZACTR.upb),(LKZACTR_f).upb,MKZACTR_lo,NKZACTR_hi));
 /* line 369: */
if (KLZACTR_assignment)
{ 
VLZACTR = A_VC_PLUS(A_VC_PLUS(A_HVEC(WLZACTR,'(',A68_CHAR ),ULZACTR_c),A_HVEC(XLZACTR,')',A68_CHAR ));
} 
else
{ 
 /* line 370: */
VLZACTR = ULZACTR_c;
} 
} 
A_PROC_EXIT(condition);
*ReturnedValue = (VLZACTR);
return;
} 
#undef NL

A68_VOID  ZLZACTR_then(A68_94 * Enquiry)
{ 
A68_VC  BMZACTR;  /* clause result */
A68_VC  DMZACTR;  /* avoid structure result */
A68_VC  EMZACTR;  /* avoid structure result */
A68_VC  FMZACTR_booleanexpr A_UNUSED = {0};
A68_234  GMZACTR;  /* collateral clause result */
A68_93  JMZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  KMZACTR;  /* YIELD */
A68_93  LMZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  MMZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  NMZACTR;  /* YIELD */
A68_93  OMZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  RMZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  SMZACTR;  /* YIELD */
A68_93  TMZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  UMZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(then);
 /* line 373: */
 /* line 375: */
{ 
 /* line 376: */
 /* line 377: */
if (EYPACTR_isskip(Enquiry))
{ 
BMZACTR = CMZACTR;
} 
else
{ 
 /* line 378: */
UZPACTR_getcfragment( Enquiry, &DMZACTR );
KKZACTR_condition( DMZACTR, &EMZACTR );
BMZACTR = EMZACTR;
} 
FMZACTR_booleanexpr = BMZACTR;
 /* line 379: */
 /* line 380: */
KMZACTR = IMZACTR ;
GMZACTR.data[0] = A_UNITE(JMZACTR,mode2,2,KMZACTR);
GMZACTR.data[1] = A_UNITE(LMZACTR,mode2,2,FMZACTR_booleanexpr);
NMZACTR = ')' ;
GMZACTR.data[2] = A_UNITE(MMZACTR,mode1,1,NMZACTR);
 /* line 381: */
GMZACTR.data[3] = A_UNITE(OMZACTR,mode4,4,EIAACTR_cnewline);
 /* line 382: */
SMZACTR = QMZACTR ;
GMZACTR.data[4] = A_UNITE(RMZACTR,mode2,2,SMZACTR);
GMZACTR.data[5] = A_UNITE(TMZACTR,mode4,4,EIAACTR_cnewline);
 /* line 383: */
 /* line 384: */
(void)(MDMACTR_writecstream(A_HISVEC(UMZACTR,GMZACTR,6,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel())));
} 
A_PROC_EXIT(then);
return;
} 
#undef NL

A68_VOID  VMZACTR_else(void)
{ 
A68_234  WMZACTR;  /* collateral clause result */
A68_93  ZMZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ANZACTR;  /* YIELD */
A68_93  BNZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  ENZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  FNZACTR;  /* YIELD */
A68_93  GNZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  JNZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  KNZACTR;  /* YIELD */
A68_93  LNZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  MNZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(else);
ANZACTR = YMZACTR ;
WMZACTR.data[0] = A_UNITE(ZMZACTR,mode2,2,ANZACTR);
WMZACTR.data[1] = A_UNITE(BNZACTR,mode4,4,EIAACTR_cnewline);
FNZACTR = DNZACTR ;
WMZACTR.data[2] = A_UNITE(ENZACTR,mode2,2,FNZACTR);
WMZACTR.data[3] = A_UNITE(GNZACTR,mode4,4,EIAACTR_cnewline);
 /* line 390: */
KNZACTR = INZACTR ;
WMZACTR.data[4] = A_UNITE(JNZACTR,mode2,2,KNZACTR);
WMZACTR.data[5] = A_UNITE(LNZACTR,mode4,4,EIAACTR_cnewline);
 /* line 391: */
 /* line 392: */
(void)(MDMACTR_writecstream(A_HISVEC(MNZACTR,WMZACTR,6,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel())));
A_PROC_EXIT(else);
return;
} 
#undef NL

A68_VOID  ONZACTR_casein(A68_94 * Enquiry)
{ 
A68_VC  QNZACTR;  /* clause result */
A68_VC  SNZACTR;  /* avoid structure result */
A68_VC  TNZACTR_integerexpr A_UNUSED = {0};
A68_237  UNZACTR;  /* collateral clause result */
A68_93  XNZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  YNZACTR;  /* YIELD */
A68_93  ZNZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  COZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  DOZACTR;  /* YIELD */
A68_93  EOZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  HOZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  IOZACTR;  /* YIELD */
A68_93  JOZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  MOZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  NOZACTR;  /* YIELD */
A68_93  OOZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  POZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(casein);
 /* line 395: */
 /* line 397: */
{ 
 /* line 398: */
 /* line 399: */
if (EYPACTR_isskip(Enquiry))
{ 
 /* line 400: */
QNZACTR = RNZACTR;
} 
else
{ 
UZPACTR_getcfragment( Enquiry, &SNZACTR );
QNZACTR = SNZACTR;
} 
TNZACTR_integerexpr = QNZACTR;
 /* line 401: */
 /* line 402: */
YNZACTR = WNZACTR ;
UNZACTR.data[0] = A_UNITE(XNZACTR,mode2,2,YNZACTR);
UNZACTR.data[1] = A_UNITE(ZNZACTR,mode2,2,TNZACTR_integerexpr);
DOZACTR = BOZACTR ;
UNZACTR.data[2] = A_UNITE(COZACTR,mode2,2,DOZACTR);
 /* line 403: */
UNZACTR.data[3] = A_UNITE(EOZACTR,mode4,4,EIAACTR_cnewline);
IOZACTR = GOZACTR ;
UNZACTR.data[4] = A_UNITE(HOZACTR,mode2,2,IOZACTR);
 /* line 404: */
UNZACTR.data[5] = A_UNITE(JOZACTR,mode4,4,EIAACTR_cnewline);
 /* line 405: */
NOZACTR = LOZACTR ;
UNZACTR.data[6] = A_UNITE(MOZACTR,mode2,2,NOZACTR);
UNZACTR.data[7] = A_UNITE(OOZACTR,mode4,4,EIAACTR_cnewline);
 /* line 406: */
 /* line 407: */
(void)(MDMACTR_writecstream(A_HISVEC(POZACTR,UNZACTR,8,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel())));
} 
A_PROC_EXIT(casein);
return;
} 
#undef NL
 /* line 411: */
 /* line 413: */

A68_VOID  TOZACTR_inu(A68_154  Uchoice, A68_94 * Union, A68_77  Case)
{ 
A68_VC  WOZACTR;  /* avoid structure result */
A68_VC  XOZACTR_unitedobject A_UNUSED = {0};
A68_INT  YOZACTR_codestream A_UNUSED = {0};
A68_240  ZOZACTR;  /* collateral clause result */
A68_93  CPZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  DPZACTR;  /* YIELD */
A68_93  EPZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  HPZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  IPZACTR;  /* YIELD */
A68_93  LPZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  MPZACTR;  /* YIELD */
A68_93  NPZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  QPZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  RPZACTR;  /* YIELD */
A68_93  SPZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  TPZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(inu);
 /* line 414: */
 /* line 417: */
{ 
UZPACTR_getcfragment( JQQACTR_yield(VOZACTR, Union), &WOZACTR );
XOZACTR_unitedobject = WOZACTR;
 /* line 418: */
YOZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 419: */
 /* line 420: */
DPZACTR = BPZACTR ;
ZOZACTR.data[0] = A_UNITE(CPZACTR,mode2,2,DPZACTR);
ZOZACTR.data[1] = A_UNITE(EPZACTR,mode2,2,XOZACTR_unitedobject);
IPZACTR = GPZACTR ;
ZOZACTR.data[2] = A_UNITE(HPZACTR,mode2,2,IPZACTR);
MPZACTR = KPZACTR ;
ZOZACTR.data[3] = A_UNITE(LPZACTR,mode2,2,MPZACTR);
 /* line 421: */
ZOZACTR.data[4] = A_UNITE(NPZACTR,mode4,4,EIAACTR_cnewline);
 /* line 422: */
RPZACTR = PPZACTR ;
ZOZACTR.data[5] = A_UNITE(QPZACTR,mode2,2,RPZACTR);
ZOZACTR.data[6] = A_UNITE(SPZACTR,mode4,4,EIAACTR_cnewline);
 /* line 423: */
(void)(MDMACTR_writecstream(A_HISVEC(TPZACTR,ZOZACTR,7,A68_93 ), YOZACTR_codestream));
 /* line 424: */
 /* line 425: */
 /* line 426: */
if (Uchoice.Param<0)
{ 
 /* line 427: */
(void)(YJZACTR_subunionchoice(Uchoice, (*Union), Case));
} 
else
{ 
 /* line 428: */
 /* line 429: */
(void)(LIZACTR_outputcaseulabel(Uchoice.Mode, Uchoice.Param, Case));
} 
} 
A_PROC_EXIT(inu);
return;
} 
#undef NL

A68_VOID  VPZACTR_comma(A68_INT  Caseno)
{ 
A68_234  WPZACTR;  /* collateral clause result */
A68_93  ZPZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  AQZACTR;  /* YIELD */
A68_93  BQZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  EQZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  FQZACTR;  /* YIELD */
A68_VC  GQZACTR;  /* avoid structure result */
A68_93  HQZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  KQZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  LQZACTR;  /* YIELD */
A68_93  MQZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  NQZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(comma);
 /* line 432: */
 /* line 434: */
AQZACTR = YPZACTR ;
WPZACTR.data[0] = A_UNITE(ZPZACTR,mode2,2,AQZACTR);
 /* line 435: */
WPZACTR.data[1] = A_UNITE(BQZACTR,mode4,4,EIAACTR_cnewline);
FQZACTR = DQZACTR ;
WPZACTR.data[2] = A_UNITE(EQZACTR,mode2,2,FQZACTR);
ROAAOSF_whole( Caseno, 0, &GQZACTR );
WPZACTR.data[3] = A_UNITE(HQZACTR,mode2,2,GQZACTR);
 /* line 436: */
LQZACTR = JQZACTR ;
WPZACTR.data[4] = A_UNITE(KQZACTR,mode2,2,LQZACTR);
WPZACTR.data[5] = A_UNITE(MQZACTR,mode4,4,EIAACTR_cnewline);
 /* line 437: */
 /* line 438: */
(void)(MDMACTR_writecstream(A_HISVEC(NQZACTR,WPZACTR,6,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel())));
A_PROC_EXIT(comma);
return;
} 
#undef NL
 /* line 442: */
 /* line 444: */

A68_VOID  RQZACTR_commau(A68_154  Uchoice, A68_94  Union, A68_77  Case)
{ 
A68_INT  SQZACTR_codestream A_UNUSED = {0};
A68_224  TQZACTR;  /* collateral clause result */
A68_93  WQZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  XQZACTR;  /* YIELD */
A68_93  YQZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  ZQZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(commau);
 /* line 445: */
 /* line 446: */
{ 
SQZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 447: */
XQZACTR = VQZACTR ;
TQZACTR.data[0] = A_UNITE(WQZACTR,mode2,2,XQZACTR);
TQZACTR.data[1] = A_UNITE(YQZACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(ZQZACTR,TQZACTR,2,A68_93 ), SQZACTR_codestream));
 /* line 448: */
 /* line 449: */
 /* line 450: */
if (Uchoice.Param<0)
{ 
 /* line 451: */
(void)(YJZACTR_subunionchoice(Uchoice, Union, Case));
} 
else
{ 
 /* line 452: */
 /* line 453: */
(void)(LIZACTR_outputcaseulabel(Uchoice.Mode, Uchoice.Param, Case));
} 
} 
A_PROC_EXIT(commau);
return;
} 
#undef NL

A68_VOID  ARZACTR_out(void)
{ 
A68_INT  BRZACTR_codestream A_UNUSED = {0};
A68_221  CRZACTR;  /* collateral clause result */
A68_93  FRZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  GRZACTR;  /* YIELD */
A68_93  HRZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  KRZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  LRZACTR;  /* YIELD */
A68_93  MRZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  NRZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(out);
{ 
BRZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 458: */
 /* line 459: */
GRZACTR = ERZACTR ;
CRZACTR.data[0] = A_UNITE(FRZACTR,mode2,2,GRZACTR);
CRZACTR.data[1] = A_UNITE(HRZACTR,mode4,4,EIAACTR_cnewline);
LRZACTR = JRZACTR ;
CRZACTR.data[2] = A_UNITE(KRZACTR,mode2,2,LRZACTR);
CRZACTR.data[3] = A_UNITE(MRZACTR,mode4,4,EIAACTR_cnewline);
 /* line 461: */
 /* line 462: */
(void)(MDMACTR_writecstream(A_HISVEC(NRZACTR,CRZACTR,4,A68_93 ), BRZACTR_codestream));
} 
A_PROC_EXIT(out);
return;
} 
#undef NL

A68_VOID  SRZACTR_esac(A68_BOOL  Outpart, A68_109  Answer)
{ 
A68_INT  TRZACTR_codestream A_UNUSED = {0};
A68_INT  URZACTR_resultmode A_UNUSED = {0};
A68_93  XRZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  YRZACTR;  /* YIELD */
A68_92  ZRZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_93  ASZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  BSZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_221  CSZACTR;  /* collateral clause result */
A68_93  FSZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  GSZACTR;  /* YIELD */
A68_93  HSZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  KSZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  LSZACTR;  /* YIELD */
A68_93  MSZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  NSZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(esac);
 /* line 467: */
 /* line 468: */
{ 
TRZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 469: */
URZACTR_resultmode = (*(&(Answer.Value->Mode)));
 /* line 471: */
 /* line 472: */
 /* line 473: */
if (!Outpart)
{ 
 /* line 474: */
 /* line 476: */
if ((URZACTR_resultmode==UEAACTR_voidmode)&EQIACTR_skipoption)
{ 
 /* line 479: */
/*SKIP*/;
} 
else
{ 
(void)(ARZACTR_out());
 /* line 480: */
YRZACTR = WRZACTR ;
(void)(MDMACTR_writecstream(A_HVEC(ZRZACTR,A_UNITE(XRZACTR,mode2,2,YRZACTR),A68_93 ), TRZACTR_codestream));
 /* line 481: */
 /* line 482: */
 /* line 483: */
(void)(MDMACTR_writecstream(A_HVEC(BSZACTR,A_UNITE(ASZACTR,mode4,4,EIAACTR_cnewline),A68_93 ), TRZACTR_codestream));
} 
} 
 /* line 484: */
 /* line 485: */
GSZACTR = ESZACTR ;
CSZACTR.data[0] = A_UNITE(FSZACTR,mode2,2,GSZACTR);
CSZACTR.data[1] = A_UNITE(HSZACTR,mode4,4,EIAACTR_cnewline);
LSZACTR = JSZACTR ;
CSZACTR.data[2] = A_UNITE(KSZACTR,mode2,2,LSZACTR);
CSZACTR.data[3] = A_UNITE(MSZACTR,mode4,4,EIAACTR_cnewline);
 /* line 487: */
 /* line 488: */
(void)(MDMACTR_writecstream(A_HISVEC(NSZACTR,CSZACTR,4,A68_93 ), TRZACTR_codestream));
} 
A_PROC_EXIT(esac);
return;
} 
#undef NL

A68_VOID  SSZACTR_fi(A68_BOOL  Elsepart, A68_109  Answer)
{ 
A68_INT  TSZACTR_codestream A_UNUSED = {0};
A68_INT  USZACTR_resultmode A_UNUSED = {0};
A68_224  VSZACTR;  /* collateral clause result */
A68_93  YSZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ZSZACTR;  /* YIELD */
A68_93  ATZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  BTZACTR;  /* OPERATORS - istruct -> vector */
A68_224  CTZACTR;  /* collateral clause result */
A68_93  FTZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  GTZACTR;  /* YIELD */
A68_93  HTZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  ITZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(fi);
 /* line 493: */
 /* line 494: */
{ 
TSZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 495: */
USZACTR_resultmode = (*(&(Answer.Value->Mode)));
 /* line 496: */
 /* line 497: */
if (!Elsepart)
{ 
 /* line 498: */
 /* line 500: */
if (!(USZACTR_resultmode==UEAACTR_voidmode))
{ 
(void)(VMZACTR_else());
 /* line 501: */
ZSZACTR = XSZACTR ;
VSZACTR.data[0] = A_UNITE(YSZACTR,mode2,2,ZSZACTR);
VSZACTR.data[1] = A_UNITE(ATZACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(BTZACTR,VSZACTR,2,A68_93 ), TSZACTR_codestream));
 /* line 502: */
 /* line 503: */
 /* line 504: */
(void)(JXIACTR_warning(316));
} 
} 
 /* line 505: */
GTZACTR = ETZACTR ;
CTZACTR.data[0] = A_UNITE(FTZACTR,mode2,2,GTZACTR);
CTZACTR.data[1] = A_UNITE(HTZACTR,mode4,4,EIAACTR_cnewline);
 /* line 506: */
(void)(MDMACTR_writecstream(A_HISVEC(ITZACTR,CTZACTR,2,A68_93 ), TSZACTR_codestream));
} 
A_PROC_EXIT(fi);
return;
} 
#undef NL
 /* line 516: */

A68_VOID  LTZACTR_optboolwarning(A68_BOOL  Orel, A68_94 * Operand1)
{ 
A68_INT  MTZACTR_codestream A_UNUSED = {0};
A68_VC  NTZACTR;  /* clause result */
A68_VC  OTZACTR;  /* avoid structure result */
A68_98  STZACTR;  /* avoid structure result */
A68_98  QTZACTR_temp A_UNUSED = {0};
A68_230  TTZACTR;  /* collateral clause result */
A68_VC  UTZACTR;  /* OPERATORS - istruct -> vector */
A68_75  VTZACTR;  /* OPERATORS - istruct -> vector */
A68_93  WTZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  XTZACTR;  /* YIELD */
A68_93  AUZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  BUZACTR;  /* YIELD */
A68_VC  CUZACTR;  /* avoid structure result */
A68_93  DUZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  EUZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  FUZACTR;  /* YIELD */
A68_93  GUZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  HUZACTR;  /* OPERATORS - istruct -> vector */
A68_95  IUZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  JUZACTR;  /* OPERATORS - istruct -> vector */
A68_75  KUZACTR;  /* OPERATORS - istruct -> vector */
A68_VC  LUZACTR_tester A_UNUSED = {0};
A68_230  MUZACTR;  /* collateral clause result */
A68_93  PUZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  QUZACTR;  /* YIELD */
A68_93  TUZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  UUZACTR;  /* YIELD */
A68_93  VUZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  YUZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ZUZACTR;  /* YIELD */
A68_93  AVZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  BVZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  CVZACTR;  /* YIELD */
A68_92  DVZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(optboolwarning);
 /* line 517: */
 /* line 518: */
{ 
MTZACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 519: */
(void)(A_CALLPROC(BYQACTR_evaluate,(Operand1),(Operand1,(BYQACTR_evaluate).nonlocals)));
 /* line 520: */
 /* line 521: */
 /* line 522: */
 /* line 524: */
if (WXPACTR_istemp(Operand1))
{ 
 /* line 526: */
UZPACTR_getcfragment( Operand1, &OTZACTR );
NTZACTR = OTZACTR;
} 
else
{ 
QMOACTR_declarectemporary( WEAACTR_boolmode, RTZACTR, &STZACTR );
QTZACTR_temp = STZACTR;
 /* line 527: */
 /* line 528: */
VTZACTR = (*(&((&QTZACTR_temp)->Name))) ;
XTZACTR = A_HISVEC(UTZACTR,VTZACTR,7,A68_CHAR ) ;
TTZACTR.data[0] = A_UNITE(WTZACTR,mode2,2,XTZACTR);
BUZACTR = ZTZACTR ;
TTZACTR.data[1] = A_UNITE(AUZACTR,mode2,2,BUZACTR);
UZPACTR_getcfragment( Operand1, &CUZACTR );
TTZACTR.data[2] = A_UNITE(DUZACTR,mode2,2,CUZACTR);
 /* line 530: */
FUZACTR = ';' ;
TTZACTR.data[3] = A_UNITE(EUZACTR,mode1,1,FUZACTR);
TTZACTR.data[4] = A_UNITE(GUZACTR,mode4,4,EIAACTR_cnewline);
 /* line 531: */
(void)(MDMACTR_writecstream(A_HISVEC(HUZACTR,TTZACTR,5,A68_93 ), MTZACTR_codestream));
 /* line 534: */
(void)(BFZACTR_assignment((&(Operand1->Extra)), A_UNITE(IUZACTR,mode5,5,QTZACTR_temp)));
 /* line 535: */
 /* line 536: */
KUZACTR = (*(&((&QTZACTR_temp)->Name))) ;
NTZACTR = A_HISVEC(JUZACTR,KUZACTR,7,A68_CHAR );
} 
LUZACTR_tester = NTZACTR;
 /* line 537: */
 /* line 538: */
if (Orel)
{ 
QUZACTR = OUZACTR ;
MUZACTR.data[0] = A_UNITE(PUZACTR,mode2,2,QUZACTR);
} 
else
{ 
UUZACTR = SUZACTR ;
MUZACTR.data[0] = A_UNITE(TUZACTR,mode2,2,UUZACTR);
} 
MUZACTR.data[1] = A_UNITE(VUZACTR,mode2,2,LUZACTR_tester);
 /* line 539: */
ZUZACTR = XUZACTR ;
MUZACTR.data[2] = A_UNITE(YUZACTR,mode2,2,ZUZACTR);
 /* line 540: */
MUZACTR.data[3] = A_UNITE(AVZACTR,mode4,4,EIAACTR_cnewline);
CVZACTR = '{' ;
MUZACTR.data[4] = A_UNITE(BVZACTR,mode1,1,CVZACTR);
 /* line 541: */
 /* line 542: */
(void)(MDMACTR_writecstream(A_HISVEC(DVZACTR,MUZACTR,5,A68_93 ), MTZACTR_codestream));
} 
A_PROC_EXIT(optboolwarning);
return;
} 
#undef NL

A68_VOID  EVZACTR_optbooloper(void)
{ 
A68_224  FVZACTR;  /* collateral clause result */
A68_93  GVZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  HVZACTR;  /* YIELD */
A68_93  IVZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  JVZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(optbooloper);
HVZACTR = '}' ;
FVZACTR.data[0] = A_UNITE(GVZACTR,mode1,1,HVZACTR);
FVZACTR.data[1] = A_UNITE(IVZACTR,mode4,4,EIAACTR_cnewline);
 /* line 547: */
(void)(MDMACTR_writecstream(A_HISVEC(JVZACTR,FVZACTR,2,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel())));
A_PROC_EXIT(optbooloper);
return;
} 
#undef NL
 /* line 562: */
 /* line 563: */
 /* line 564: */
 /* line 565: */

A68_VOID  SVZACTR_endseries(A68_207  Properties, A68_109  Answer, A68_85 * Endofseries, A68_BOOL  Discardlevelactivated, A68_BOOL  Pullstack, A68_BOOL  Seriescontainsexit)
{ 
A_PROC_ENTRY(endseries);
 /* line 566: */
 /* line 568: */
 /* line 569: */
 /* line 570: */
 /* line 571: */
 /* line 573: */
 /* line 574: */
(void)(VCZACTR_endclause(Properties, Answer.End, Endofseries, Discardlevelactivated, Pullstack));
A_PROC_EXIT(endseries);
return;
} 
#undef NL

A68_VOID  VVZACTR_semi(A68_BOOL  Outstandingdynamicresult, A68_BOOL  Declaration)
{ 
A_PROC_ENTRY(semi);
 /* line 577: */
 /* line 579: */
/*SKIP*/;
A_PROC_EXIT(semi);
return;
} 
#undef NL

A68_VOID  ZVZACTR_exit(A68_BOOL  Dynamicresult, A68_BOOL  Firstexit, A68_109  Seriesanswer)
{ 
A68_221  CWZACTR;  /* collateral clause result */
A68_93  FWZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  GWZACTR;  /* YIELD */
A68_VC  HWZACTR;  /* OPERATORS - istruct -> vector */
A68_75  IWZACTR;  /* OPERATORS - istruct -> vector */
A68_93  JWZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  KWZACTR;  /* YIELD */
A68_93  LWZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  MWZACTR;  /* YIELD */
A68_93  NWZACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  OWZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(exit);
 /* line 582: */
 /* line 584: */
{ 
(void)(WXIACTR_assert(BWZACTR, (Seriesanswer.End!=(A68_85 *)A68_NIL)));
 /* line 585: */
 /* line 586: */
GWZACTR = EWZACTR ;
CWZACTR.data[0] = A_UNITE(FWZACTR,mode2,2,GWZACTR);
IWZACTR = (*(&(Seriesanswer.End->Name))) ;
KWZACTR = A_HISVEC(HWZACTR,IWZACTR,7,A68_CHAR ) ;
CWZACTR.data[1] = A_UNITE(JWZACTR,mode2,2,KWZACTR);
 /* line 587: */
MWZACTR = ';' ;
CWZACTR.data[2] = A_UNITE(LWZACTR,mode1,1,MWZACTR);
CWZACTR.data[3] = A_UNITE(NWZACTR,mode4,4,EIAACTR_cnewline);
 /* line 588: */
 /* line 589: */
(void)(MDMACTR_writecstream(A_HISVEC(OWZACTR,CWZACTR,4,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel())));
} 
A_PROC_EXIT(exit);
return;
} 
#undef NL
 /* line 601: */
 /* line 603: */

A68_VOID  SWZACTR_codeinsert(A68_VC  Code, A68_INT  Mode, A68_101 * Visibles, A68_98  *ReturnedValue)
{ 
A68_98  TWZACTR_result A_UNUSED = {0};
A68_INT  UWZACTR_stream A_UNUSED = {0};
A68_205  XWZACTR_emitdefine;   /* proc value of non-global proc */
A68_76  MXZACTR_emitundefine;   /* proc value of non-global proc */
A68_249  YXZACTR_emitcode;   /* proc value of non-global proc */
A68_98  ZYZACTR;  /* clause result */
A_PROC_ENTRY(codeinsert);
 /* line 604: */
 /* line 605: */
{ 
 /* line 606: */
UWZACTR_stream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 608: */
A_CLOSURE( XWZACTR_emitdefine, YWZACTR_emitdefine, ZWZACTR_emitdefine );
(( ZWZACTR_emitdefine * ) ( XWZACTR_emitdefine.nonlocals )) -> UWZACTR_stream = UWZACTR_stream;
 /* line 614: */
A_CLOSURE( MXZACTR_emitundefine, NXZACTR_emitundefine, OXZACTR_emitundefine );
(( OXZACTR_emitundefine * ) ( MXZACTR_emitundefine.nonlocals )) -> UWZACTR_stream = UWZACTR_stream;
 /* line 620: */
A_CLOSURE( YXZACTR_emitcode, ZXZACTR_emitcode, AYZACTR_emitcode );
(( AYZACTR_emitcode * ) ( YXZACTR_emitcode.nonlocals )) -> XWZACTR_emitdefine = XWZACTR_emitdefine;
(( AYZACTR_emitcode * ) ( YXZACTR_emitcode.nonlocals )) -> YXZACTR_emitcode = YXZACTR_emitcode;
(( AYZACTR_emitcode * ) ( YXZACTR_emitcode.nonlocals )) -> MXZACTR_emitundefine = MXZACTR_emitundefine;
(( AYZACTR_emitcode * ) ( YXZACTR_emitcode.nonlocals )) -> Mode = Mode;
(( AYZACTR_emitcode * ) ( YXZACTR_emitcode.nonlocals )) -> TWZACTR_result = (&TWZACTR_result);
(( AYZACTR_emitcode * ) ( YXZACTR_emitcode.nonlocals )) -> Code = Code;
(( AYZACTR_emitcode * ) ( YXZACTR_emitcode.nonlocals )) -> UWZACTR_stream = UWZACTR_stream;
 /* line 655: */
(void)(A_CALLPROC(YXZACTR_emitcode,(Visibles),(Visibles,(YXZACTR_emitcode).nonlocals)));
 /* line 656: */
 /* line 657: */
ZYZACTR = TWZACTR_result;
} 
A_PROC_EXIT(codeinsert);
*ReturnedValue = (ZYZACTR);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 6: */
void HCZACTR(void)   /* initialise DECS clauses */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel","-dir",".","clauses.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/vak/Project/Algol/Algol-68RS-Source/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/vak/Project/Algol/Algol-68RS-Source/a68config/a68config.m","./incimperatives.m","./unionaids.m","./modes.m","./incmode.m","./evaluator.m","./tracer.m","./moduletracer.m","./idtable.m","./values.m","./coutput.m","./centities.m","./environment.m","./environ.m","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config A_UNUSED;
/* --- end of configuration information */
A68_60  PRZACTR;  /* procedure value */
A68_242  PSZACTR;  /* procedure value */
A68_208  LVZACTR;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
UAAACTR();   /* USE incimperatives */
VUQACTR();   /* USE unionaids */
DNMACTR();   /* USE modes */
ZDAACTR();   /* USE incmode */
JGVACTR();   /* USE evaluator */
NXYACTR();   /* USE tracer */
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
A_config.translation_time = "Thu Nov  5 21:38:58 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "GCZACTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 21:38:58 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS clauses);
(void)(UEAALIB_a68config(LGAALIB_configinfo, LCZACTR));
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
PRZACTR.fn.fn_global = ARZACTR_out;
PRZACTR.nonlocals = A68_NIL;
ORZACTR_outu = (PRZACTR);
 /* line 466: */
 /* line 490: */
PSZACTR.fn.fn_global = SRZACTR_esac;
PSZACTR.nonlocals = A68_NIL;
OSZACTR_esacu = (PSZACTR);
 /* line 492: */
 /* line 513: */
 /* line 514: */
 /* line 544: */
 /* line 545: */
 /* line 546: */
 /* line 554: */
 /* line 558: */
LVZACTR.fn.fn_global = PCZACTR_startclause;
LVZACTR.nonlocals = A68_NIL;
KVZACTR_startseries = (LVZACTR);
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
