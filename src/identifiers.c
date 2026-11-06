/* UNAME:LMVACTR */
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

A_PROCEDURE(A68_VOID ,A68t67,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t67  A68_67 ;    /* PROC(REF MODE26,INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t68,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t68  A68_68 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t69,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t69  A68_69 ;    /* PROC(REF MODE26) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t70,(A68_INT ),(A68_INT ,void *));
typedef struct A68t70  A68_70 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t71,(A68_INT ),(A68_INT ,void *));
typedef struct A68t71  A68_71 ;    /* PROC(INT) BOOL */
struct A68t72{
A68_INT  Level;
A_PAD_INT(PAD_4)
A68_INT  Block;
A_PAD_INT(PAD_5)
};
typedef struct A68t72  A68_72 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t73,(struct A68t72 *),(struct A68t72 *,void *));
typedef struct A68t73  A68_73 ;    /* PROC MODE72 */

A_PROCEDURE(A68_INT ,A68t74,(void),(void *));
typedef struct A68t74  A68_74 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t75,(A68_INT ),(A68_INT ,void *));
typedef struct A68t75  A68_75 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t76,(void),(void *));
typedef struct A68t76  A68_76 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t77,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t77  A68_77 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t78,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t79,(struct A68t72 ,struct A68t72 ),(struct A68t72 ,struct A68t72 ,void *));
typedef struct A68t79  A68_79 ;    /* PROC(MODE72,MODE72) BOOL */

A_PROCEDURE(A68_BOOL ,A68t80,(struct A68t72 ),(struct A68t72 ,void *));
typedef struct A68t80  A68_80 ;    /* PROC(MODE72) BOOL */

A_PROCEDURE(A68_VOID ,A68t81,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t81  A68_81 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t82,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t82  A68_82 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t83,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t83  A68_83 ;    /* PROC(INT) REF MODE26 */
struct A68t85 ;

A_PROCEDURE(A68_VOID ,A68t84,(A68_INT ,struct A68t85 ),(A68_INT ,struct A68t85 ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(INT,MODE85) VOID */
A_ROW(A68_VC ,A68t85,1);
typedef struct A68t85  A68_85 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t86,(void),(void *));
typedef struct A68t86  A68_86 ;    /* PROC BITS */
struct A68t87{
A68_INT  Cfile;
A_PAD_INT(PAD_6)
};
typedef struct A68t87  A68_87 ;    /* STRUCT(INT)  */
struct A68t88{
A68_INT  Seedfile;
A_PAD_INT(PAD_7)
};
typedef struct A68t88  A68_88 ;    /* STRUCT(INT)  */
struct A68t89 { A68_INT mode; union {
struct A68t87  mode1;
struct A68t88  mode2;
struct A68t56  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t89  A68_89 ;    /* UNION(MODE87,MODE88,MODE56,VOID)  */
A_ROW(A68_BOOL ,A68t90,1);
typedef struct A68t90  A68_90 ;    /* [] BOOL */
struct A68t91{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_8)
A68_VC  Sourcefile;
struct A68t56  Nameseed;
A_PAD_ISTRUCT(A68_56 ,PAD_9)
struct A68t89  Nameseedorigin;
struct A68t92 * Used_modules;
A68_VC  Commandline;
struct A68t93 * Environment;
};
typedef struct A68t91  A68_91 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE56,MODE89,REF MODE92,REF MODE26,REF MODE93)  */
struct A68t92{
A68_VC  Modinfo_file;
struct A68t92 * Next;
};
typedef struct A68t92  A68_92 ;    /* STRUCT(REF MODE26,REF MODE92)  */
struct A68t93{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t93 * Next;
};
typedef struct A68t93  A68_93 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE93)  */
struct A68t95 ;
struct A68t96 ;

A_PROCEDURE(struct A68t95 *,A68t94,(A68_VC ,struct A68t96 *,A68_VC *),(A68_VC ,struct A68t96 *,A68_VC *,void *));
typedef struct A68t94  A68_94 ;    /* PROC(MODE26,REF MODE96,REF REF MODE26) REF MODE95 */
struct A68t95{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t95  A68_95 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t96{
A68_VC  Dir;
struct A68t96 * Next;
};
typedef struct A68t96  A68_96 ;    /* STRUCT(REF MODE26,REF MODE96)  */
struct A68t98 ;

A_PROCEDURE(A68_VOID ,A68t97,(struct A68t98 *,A68_BOOL ),(struct A68t98 *,A68_BOOL ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(REF MODE98,BOOL) VOID */
struct A68t100{
A68_INT  Rdenno;
A_PAD_INT(PAD_10)
};
typedef struct A68t100  A68_100 ;    /* STRUCT(INT)  */
struct A68t101{
A68_INT  Idno;
A_PAD_INT(PAD_11)
};
typedef struct A68t101  A68_101 ;    /* STRUCT(INT)  */
struct A68t102{
struct A68t56  Name;
A_PAD_ISTRUCT(A68_56 ,PAD_12)
A68_INT  Mode;
A_PAD_INT(PAD_13)
};
typedef struct A68t102  A68_102 ;    /* STRUCT(MODE56,INT)  */
struct A68t103{
A68_INT  Nse;
A_PAD_INT(PAD_14)
};
typedef struct A68t103  A68_103 ;    /* STRUCT(INT)  */
struct A68t104{
A68_INT  Fn;
A_PAD_INT(PAD_15)
A68_INT  Param;
A_PAD_INT(PAD_16)
struct A68t105 * Operands;
};
typedef struct A68t104  A68_104 ;    /* STRUCT(INT,INT,REF MODE105)  */
struct A68t99 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t100  mode2;
struct A68t101  mode4;
struct A68t102  mode5;
A68_VC  mode6;
struct A68t57  mode7;
struct A68t103  mode8;
struct A68t104  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t99  A68_99 ;    /* UNION(LONG BITS,MODE100,VOID,MODE101,MODE102,MODE26,MODE57,MODE103,MODE104)  */
struct A68t98{
A68_INT  Mode;
A_PAD_INT(PAD_17)
A68_BITS  Info;
A_PAD_BITS(PAD_18)
struct A68t99  Extra;
};
typedef struct A68t98  A68_98 ;    /* STRUCT(INT,BITS,MODE99)  */
struct A68t105{
struct A68t98  Value;
struct A68t105 * Rest;
};
typedef struct A68t105  A68_105 ;    /* STRUCT(MODE98,REF MODE105)  */

A_PROCEDURE(A68_VOID ,A68t106,(struct A68t98 *),(struct A68t98 *,void *));
typedef struct A68t106  A68_106 ;    /* PROC(REF MODE98) VOID */

A_PROCEDURE(A68_VOID ,A68t107,(struct A68t105 **),(struct A68t105 **,void *));
typedef struct A68t107  A68_107 ;    /* PROC(REF REF MODE105) VOID */
struct A68t108{
A68_INT  Mode;
A_PAD_INT(PAD_19)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_20)
struct A68t72  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_21)
A68_BITS  Flags;
A_PAD_BITS(PAD_22)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t108  A68_108 ;    /* STRUCT(INT,INT,MODE72,REF MODE26,REF MODE26,MODE56,BITS,REF MODE26,REF MODE26)  */
struct A68t109{
A68_INT  Mode;
A_PAD_INT(PAD_23)
A68_INT  Resultmode;
A_PAD_INT(PAD_24)
A68_INT  Declevel;
A_PAD_INT(PAD_25)
struct A68t72  Environ;
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
typedef struct A68t109  A68_109 ;    /* STRUCT(INT,INT,INT,MODE72,REF MODE26,MODE56,MODE56,MODE56,BITS)  */
struct A68t110{
struct A68t55  Label;
struct A68t72  Environ;
A68_VC  Name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_30)
A68_BITS  Flags;
A_PAD_BITS(PAD_31)
A68_INT  Alias;
A_PAD_INT(PAD_32)
};
typedef struct A68t110  A68_110 ;    /* STRUCT(MODE55,MODE72,REF MODE26,MODE56,BITS,INT)  */

A_PROCEDURE(struct A68t108 *,A68t111,(A68_INT ),(A68_INT ,void *));
typedef struct A68t111  A68_111 ;    /* PROC(INT) REF MODE108 */

A_PROCEDURE(A68_VOID ,A68t112,(A68_VC ,struct A68t56 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t56 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t112  A68_112 ;    /* PROC(REF MODE26,MODE56,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */
A_ROW(struct A68t108 ,A68t113,1);
typedef struct A68t113  A68_113 ;    /* [] MODE108 */
A_ROW(struct A68t109 ,A68t114,1);
typedef struct A68t114  A68_114 ;    /* [] MODE109 */
A_ROW(struct A68t110 ,A68t115,1);
typedef struct A68t115  A68_115 ;    /* [] MODE110 */
struct A68t117 ;

A_PROCEDURE(A68_VOID ,A68t116,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t117 ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t117 ,void *));
typedef struct A68t116  A68_116 ;    /* PROC(INT,INT,INT,INT,REF MODE117) VOID */
A_ROW(A68_INT ,A68t117,1);
typedef struct A68t117  A68_117 ;    /* [] INT */

A_PROCEDURE(A68_BOOL ,A68t118,(A68_VC ),(A68_VC ,void *));
typedef struct A68t118  A68_118 ;    /* PROC(MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t119,(A68_INT ,struct A68t72 *),(A68_INT ,struct A68t72 *,void *));
typedef struct A68t119  A68_119 ;    /* PROC(INT) MODE72 */
struct A68t120{
A68_INT  Mode;
A_PAD_INT(PAD_33)
A68_VC  String;
};
typedef struct A68t120  A68_120 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t121{
A68_INT  I;
A_PAD_INT(PAD_34)
};
typedef struct A68t121  A68_121 ;    /* STRUCT(INT)  */
struct A68t122{
A68_INT  Body;
A_PAD_INT(PAD_35)
A68_INT  Moduleno;
A_PAD_INT(PAD_36)
struct A68t117  Actuals;
};
typedef struct A68t122  A68_122 ;    /* STRUCT(INT,INT,REF MODE117)  */
struct A68t123{
A68_INT  Mode;
A_PAD_INT(PAD_37)
A68_INT  Number;
A_PAD_INT(PAD_38)
A68_VC  Insert;
};
typedef struct A68t123  A68_123 ;    /* STRUCT(INT,INT,REF MODE26)  */
struct A68t125{
A68_INT  Moduleno;
A_PAD_INT(PAD_39)
A68_INT  I;
A_PAD_INT(PAD_40)
A68_INT  J;
A_PAD_INT(PAD_41)
};
typedef struct A68t125  A68_125 ;    /* STRUCT(INT,INT,INT)  */
A_ROW(A68_VC ,A68t127,1);
typedef struct A68t127  A68_127 ;    /* [] REF MODE26 */
struct A68t126{
A68_INT  Moduleno;
A_PAD_INT(PAD_42)
A68_VC  Name;
A68_VC  Uname;
A68_VC  Lname;
A68_VC  Gname;
struct A68t127  Ysnames;
};
typedef struct A68t126  A68_126 ;    /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE127)  */
struct A68t124 { A68_INT mode; union {
struct A68t122  mode1;
struct A68t125  mode2;
struct A68t126  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t124  A68_124 ;    /* UNION(MODE122,MODE125,MODE126)  */
struct A68t129{
A68_INT  Nochars;
A_PAD_INT(PAD_43)
A68_INT  Nocases;
A_PAD_INT(PAD_44)
A68_INT  W;
A_PAD_INT(PAD_45)
};
typedef struct A68t129  A68_129 ;    /* STRUCT(INT,INT,INT)  */
struct A68t128{
struct A68t129  Info;
A68_VC  Text;
};
typedef struct A68t128  A68_128 ;    /* STRUCT(MODE129,REF MODE26)  */
struct A68t130{
A68_INT  Type;
A_PAD_INT(PAD_46)
A68_VC  Name;
A68_INT  Mode;
A_PAD_INT(PAD_47)
A68_INT  Decno;
A_PAD_INT(PAD_48)
};
typedef struct A68t130  A68_130 ;    /* STRUCT(INT,REF MODE26,INT,INT)  */
struct A68t131{
A68_VC  Representation;
};
typedef struct A68t131  A68_131 ;    /* STRUCT(REF MODE26)  */
struct A68t133{
A68_INT  Mode;
A_PAD_INT(PAD_49)
A68_VC  Nu;
};
typedef struct A68t133  A68_133 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t134{
A68_INT  Mode;
A_PAD_INT(PAD_50)
A68_LBITS  Denotation;
A_PAD_LBITS(PAD_51)
};
typedef struct A68t134  A68_134 ;    /* STRUCT(INT,LONG BITS)  */
struct A68t135{
A68_INT  Mode;
A_PAD_INT(PAD_52)
A68_VC  Denotation;
};
typedef struct A68t135  A68_135 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t136{
A68_INT  Fn;
A_PAD_INT(PAD_53)
A68_INT  Mode;
A_PAD_INT(PAD_54)
A68_INT  Param;
A_PAD_INT(PAD_55)
};
typedef struct A68t136  A68_136 ;    /* STRUCT(INT,INT,INT)  */
struct A68t137{
A68_VC  Name;
A68_BITS  Props;
A_PAD_BITS(PAD_56)
A68_INT  Mode;
A_PAD_INT(PAD_57)
A68_INT  Rdenno;
A_PAD_INT(PAD_58)
A68_INT  Maxname;
A_PAD_INT(PAD_59)
};
typedef struct A68t137  A68_137 ;    /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
struct A68t138{
A68_INT  W;
A_PAD_INT(PAD_60)
};
typedef struct A68t138  A68_138 ;    /* STRUCT(INT)  */
struct A68t139{
A68_VC  Name;
A68_INT  Labno;
A_PAD_INT(PAD_61)
A68_INT  Status;
A_PAD_INT(PAD_62)
A68_BOOL  Notsetting;
A_PAD_BOOL(PAD_63)
};
typedef struct A68t139  A68_139 ;    /* STRUCT(REF MODE26,INT,INT,BOOL)  */
struct A68t140{
A68_INT  Mode;
A_PAD_INT(PAD_64)
A68_BITS  Props;
A_PAD_BITS(PAD_65)
A68_INT  Param;
A_PAD_INT(PAD_66)
};
typedef struct A68t140  A68_140 ;    /* STRUCT(INT,BITS,INT)  */
struct A68t141{
A68_BOOL  Start;
A_PAD_BOOL(PAD_67)
};
typedef struct A68t141  A68_141 ;    /* STRUCT(BOOL)  */
struct A68t142{
A68_INT  Fn;
A_PAD_INT(PAD_68)
A68_INT  Mode;
A_PAD_INT(PAD_69)
A68_BITS  Props;
A_PAD_BITS(PAD_70)
A68_INT  Param;
A_PAD_INT(PAD_71)
};
typedef struct A68t142  A68_142 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t143{
A68_INT  Fn;
A_PAD_INT(PAD_72)
A68_INT  Mode;
A_PAD_INT(PAD_73)
A68_BITS  Props;
A_PAD_BITS(PAD_74)
A68_INT  Resultmode;
A_PAD_INT(PAD_75)
};
typedef struct A68t143  A68_143 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t144{
A68_INT  Fn;
A_PAD_INT(PAD_76)
A68_BITS  Props;
A_PAD_BITS(PAD_77)
};
typedef struct A68t144  A68_144 ;    /* STRUCT(INT,BITS)  */
struct A68t132 { A68_INT mode; union {
struct A68t103  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t131  mode4;
struct A68t57  mode5;
struct A68t133  mode6;
struct A68t120  mode7;
struct A68t134  mode8;
struct A68t135  mode9;
struct A68t136  mode10;
struct A68t130  mode11;
struct A68t137  mode12;
struct A68t138  mode13;
struct A68t139  mode14;
struct A68t140  mode15;
struct A68t121  mode16;
struct A68t141  mode17;
struct A68t128  mode18;
struct A68t123  mode19;
struct A68t142  mode20;
struct A68t143  mode21;
struct A68t144  mode22;
struct A68t122  mode23;
struct A68t125  mode24;
struct A68t126  mode25;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t132  A68_132 ;    /* UNION(MODE103,INT,BOOL,MODE131,MODE57,MODE133,MODE120,MODE134,MODE135,MODE136,MODE130,MODE137,MODE138,MODE139,MODE140,MODE121,MODE141,MODE128,MODE123,MODE142,MODE143,MODE144,MODE122,MODE125,MODE126,VOID)  */
struct A68t145 { A68_INT mode; union {
struct A68t103  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t131  mode4;
struct A68t57  mode5;
struct A68t133  mode6;
struct A68t120  mode7;
struct A68t134  mode8;
struct A68t135  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t145  A68_145 ;    /* UNION(MODE103,INT,BOOL,MODE131,MODE57,MODE133,MODE120,MODE134,MODE135)  */
struct A68t146 { A68_INT mode; union {
struct A68t103  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t131  mode4;
struct A68t57  mode5;
struct A68t133  mode6;
struct A68t120  mode7;
struct A68t134  mode8;
struct A68t135  mode9;
struct A68t136  mode10;
struct A68t130  mode11;
struct A68t137  mode12;
struct A68t138  mode13;
struct A68t139  mode14;
struct A68t140  mode15;
struct A68t121  mode16;
struct A68t141  mode17;
struct A68t128  mode18;
struct A68t123  mode19;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t146  A68_146 ;    /* UNION(MODE103,INT,BOOL,MODE131,MODE57,MODE133,MODE120,MODE134,MODE135,MODE136,MODE130,MODE137,MODE138,MODE139,MODE140,MODE121,MODE141,MODE128,MODE123)  */
A_ISTRUCT(A68_CHAR ,32,A68t148);
typedef struct A68t148  A68_148 ;    /* STRUCT 32 CHAR */
A_VECTOR(struct A68t153 ,A68t152);
typedef struct A68t152  A68_152 ;    /* VECTOR [] MODE153 */
A_VECTOR(struct A68t160 ,A68t159);
typedef struct A68t159  A68_159 ;    /* VECTOR [] MODE160 */
struct A68t160{
struct A68t148  N;
A_PAD_ISTRUCT(A68_148 ,PAD_78)
struct A68t148  F;
A_PAD_ISTRUCT(A68_148 ,PAD_79)
A68_INT  Level;
A_PAD_INT(PAD_80)
};
typedef struct A68t160  A68_160 ;    /* STRUCT(MODE148,MODE148,INT)  */
struct A68t158 { A68_INT mode; union {
A68_VC  mode1;
struct A68t159  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t158  A68_158 ;    /* UNION(REF MODE26,REF MODE159)  */
struct A68t154{
struct A68t148  F;
A_PAD_ISTRUCT(A68_148 ,PAD_81)
A68_INT  No;
A_PAD_INT(PAD_82)
A68_INT  Nl;
A_PAD_INT(PAD_83)
A68_INT  Ng;
A_PAD_INT(PAD_84)
struct A68t158  U;
};
typedef struct A68t154  A68_154 ;    /* STRUCT(MODE148,INT,INT,INT,MODE158)  */
A_VECTOR(struct A68t157 ,A68t155);
typedef struct A68t155  A68_155 ;    /* VECTOR [] MODE157 */
struct A68t157{
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_85)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_86)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_87)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_88)
A68_BOOL  Keptgenproc;
A_PAD_BOOL(PAD_89)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_90)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t157  A68_157 ;    /* STRUCT(MODE56,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26)  */
A_VECTOR(struct A68t56 ,A68t156);
typedef struct A68t156  A68_156 ;    /* VECTOR [] MODE56 */
struct A68t153{
struct A68t154  Xs;
struct A68t56  Ys;
A_PAD_ISTRUCT(A68_56 ,PAD_91)
A68_LINT  Timeoflastchange;
A_PAD_LINT(PAD_92)
struct A68t155  Keptinfo;
struct A68t156  Cnames;
};
typedef struct A68t153  A68_153 ;    /* STRUCT(MODE154,MODE56,LONG INT,REF MODE155,REF MODE156)  */
struct A68t149{
struct A68t56  Uname;
A_PAD_ISTRUCT(A68_56 ,PAD_93)
struct A68t56  Lname;
A_PAD_ISTRUCT(A68_56 ,PAD_94)
struct A68t56  Gname;
A_PAD_ISTRUCT(A68_56 ,PAD_95)
struct A68t152  Specs;
};
typedef struct A68t149  A68_149 ;    /* STRUCT(MODE56,MODE56,MODE56,REF MODE152)  */
struct A68t147{
struct A68t148  Name;
A_PAD_ISTRUCT(A68_148 ,PAD_96)
struct A68t149  Ym;
struct A68t56  Ys;
A_PAD_ISTRUCT(A68_56 ,PAD_97)
A68_INT  Level;
A_PAD_INT(PAD_98)
struct A68t150 * Ids;
struct A68t151 * Uses;
struct A68t147 * Rest;
};
typedef struct A68t147  A68_147 ;    /* STRUCT(MODE148,MODE149,MODE56,INT,REF MODE150,REF MODE151,REF MODE147)  */
struct A68t150{
struct A68t148  Name;
A_PAD_ISTRUCT(A68_148 ,PAD_99)
struct A68t56  Uname;
A_PAD_ISTRUCT(A68_56 ,PAD_100)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_101)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_102)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_103)
A68_BOOL  Genproc;
A_PAD_BOOL(PAD_104)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_105)
A68_INT  Mode;
A_PAD_INT(PAD_106)
A68_INT  Decno;
A_PAD_INT(PAD_107)
A68_VC  Definition;
A68_VC  Rhs;
struct A68t150 * Rest;
};
typedef struct A68t150  A68_150 ;    /* STRUCT(MODE148,MODE56,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,REF MODE26,REF MODE26,REF MODE150)  */
struct A68t151{
struct A68t148  Name;
A_PAD_ISTRUCT(A68_148 ,PAD_108)
struct A68t56  Uname;
A_PAD_ISTRUCT(A68_56 ,PAD_109)
struct A68t150 * Ids;
struct A68t151 * Rest;
};
typedef struct A68t151  A68_151 ;    /* STRUCT(MODE148,MODE56,REF MODE150,REF MODE151)  */
struct A68t162{
struct A68t148  Name;
A_PAD_ISTRUCT(A68_148 ,PAD_110)
struct A68t160  L;
struct A68t160  G;
A68_INT  Type;
A_PAD_INT(PAD_111)
};
typedef struct A68t162  A68_162 ;    /* STRUCT(MODE148,MODE160,MODE160,INT)  */
struct A68t163{
struct A68t56  L;
A_PAD_ISTRUCT(A68_56 ,PAD_112)
struct A68t56  G;
A_PAD_ISTRUCT(A68_56 ,PAD_113)
};
typedef struct A68t163  A68_163 ;    /* STRUCT(MODE56,MODE56)  */
struct A68t161{
struct A68t56  Uname;
A_PAD_ISTRUCT(A68_56 ,PAD_114)
struct A68t162  Xmi;
struct A68t163  Checkinfo;
};
typedef struct A68t161  A68_161 ;    /* STRUCT(MODE56,MODE162,MODE163)  */
struct A68t165 ;

A_PROCEDURE(A68_VOID ,A68t164,(struct A68t165 ),(struct A68t165 ,void *));
typedef struct A68t164  A68_164 ;    /* PROC(MODE165) VOID */
struct A68t165{
struct A68t148  Name;
A_PAD_ISTRUCT(A68_148 ,PAD_115)
struct A68t149  Ym;
struct A68t148  Formal;
A_PAD_ISTRUCT(A68_148 ,PAD_116)
struct A68t56  Ys;
A_PAD_ISTRUCT(A68_56 ,PAD_117)
A68_INT  Level;
A_PAD_INT(PAD_118)
A68_INT  Ownlevel;
A_PAD_INT(PAD_119)
};
typedef struct A68t165  A68_165 ;    /* STRUCT(MODE148,MODE149,MODE148,MODE56,INT,INT)  */
struct A68t167 ;

A_PROCEDURE(A68_VOID ,A68t166,(struct A68t167 ,A68_INT ),(struct A68t167 ,A68_INT ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(MODE167,INT) VOID */
struct A68t167{
A68_INT  Type;
A_PAD_INT(PAD_120)
A68_INT  Moduleno;
A_PAD_INT(PAD_121)
struct A68t148  Name;
A_PAD_ISTRUCT(A68_148 ,PAD_122)
struct A68t149  Ym;
};
typedef struct A68t167  A68_167 ;    /* STRUCT(INT,INT,MODE148,MODE149)  */
struct A68t169 ;

A_PROCEDURE(A68_VOID ,A68t168,(struct A68t169 ),(struct A68t169 ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(MODE169) VOID */
struct A68t169{
struct A68t148  Name;
A_PAD_ISTRUCT(A68_148 ,PAD_123)
A68_INT  Decno;
A_PAD_INT(PAD_124)
A68_INT  Level;
A_PAD_INT(PAD_125)
A68_INT  Mode;
A_PAD_INT(PAD_126)
A68_INT  Scope;
A_PAD_INT(PAD_127)
struct A68t169 * Rest;
};
typedef struct A68t169  A68_169 ;    /* STRUCT(MODE148,INT,INT,INT,INT,REF MODE169)  */
A_ROW(struct A68t147 *,A68t170,1);
typedef struct A68t170  A68_170 ;    /* [] REF MODE147 */
struct A68t172 ;

A_PROCEDURE(A68_VOID ,A68t171,(struct A68t148 ,A68_INT ,A68_BOOL ,struct A68t172 *),(struct A68t148 ,A68_INT ,A68_BOOL ,struct A68t172 *,void *));
typedef struct A68t171  A68_171 ;    /* PROC(MODE148,INT,BOOL) MODE172 */
struct A68t172{
struct A68t162  Xmi;
struct A68t149  Ym;
};
typedef struct A68t172  A68_172 ;    /* STRUCT(MODE162,MODE149)  */
struct A68t174 ;

A_PROCEDURE(A68_VOID ,A68t173,(struct A68t148 ,struct A68t148 ,struct A68t149 ,struct A68t174 *),(struct A68t148 ,struct A68t148 ,struct A68t149 ,struct A68t174 *,void *));
typedef struct A68t173  A68_173 ;    /* PROC(MODE148,MODE148,MODE149) MODE174 */
struct A68t174{
struct A68t154  Xs;
struct A68t56  Ys;
A_PAD_ISTRUCT(A68_56 ,PAD_128)
};
typedef struct A68t174  A68_174 ;    /* STRUCT(MODE154,MODE56)  */

A_PROCEDURE(A68_VOID ,A68t175,(struct A68t162 ),(struct A68t162 ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(MODE162) VOID */

A_PROCEDURE(A68_VOID ,A68t176,(struct A68t154 ),(struct A68t154 ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(MODE154) VOID */
A_ROW(struct A68t153 ,A68t177,1);
typedef struct A68t177  A68_177 ;    /* [] MODE153 */
struct A68t178{
A68_INT  Parameters;
A_PAD_INT(PAD_129)
A68_INT  Result;
A_PAD_INT(PAD_130)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_131)
};
typedef struct A68t178  A68_178 ;    /* STRUCT(INT,INT,BOOL)  */
struct A68t179{
A68_INT  Mode;
A_PAD_INT(PAD_132)
A68_INT  Offset;
A_PAD_INT(PAD_133)
struct A68t148  Name;
A_PAD_ISTRUCT(A68_148 ,PAD_134)
};
typedef struct A68t179  A68_179 ;    /* STRUCT(INT,INT,MODE148)  */
struct A68t181 ;

A_PROCEDURE(A68_VOID ,A68t180,(A68_INT ,struct A68t181 *),(A68_INT ,struct A68t181 *,void *));
typedef struct A68t180  A68_180 ;    /* PROC(INT) REF MODE181 */
A_VECTOR(A68_INT ,A68t181);
typedef struct A68t181  A68_181 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t182,(struct A68t179 *,A68_VC *),(struct A68t179 *,A68_VC *,void *));
typedef struct A68t182  A68_182 ;    /* PROC(REF MODE179) MODE26 */

A_PROCEDURE(A68_VOID ,A68t183,(A68_INT ,A68_VC ,struct A68t102 *),(A68_INT ,A68_VC ,struct A68t102 *,void *));
typedef struct A68t183  A68_183 ;    /* PROC(INT,MODE26) MODE102 */
struct A68t185 ;

A_PROCEDURE(A68_VOID ,A68t184,(struct A68t185 ,A68_INT ),(struct A68t185 ,A68_INT ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(REF MODE185,INT) VOID */
A_ROW(struct A68t186 ,A68t185,1);
typedef struct A68t185  A68_185 ;    /* [] MODE186 */
struct A68t196{
A68_INT  Mode;
A_PAD_INT(PAD_135)
};
typedef struct A68t196  A68_196 ;    /* STRUCT(INT)  */
struct A68t186 { A68_INT mode; union {
A68_INT  mode1;
struct A68t187 * mode2;
struct A68t188 * mode3;
struct A68t189 * mode4;
struct A68t190 * mode5;
struct A68t191 * mode6;
struct A68t192 * mode7;
struct A68t193 * mode8;
struct A68t194 * mode9;
struct A68t195 * mode10;
struct A68t196  mode11;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t186  A68_186 ;    /* UNION(INT,REF MODE187,REF MODE188,REF MODE189,REF MODE190,REF MODE191,REF MODE192,REF MODE193,REF MODE194,REF MODE195,MODE196)  */
struct A68t187{
A68_INT  Rdenno;
A_PAD_INT(PAD_136)
struct A68t200 * Modelist;
};
typedef struct A68t187  A68_187 ;    /* STRUCT(INT,REF MODE200)  */
struct A68t188{
A68_INT  Deproc;
A_PAD_INT(PAD_137)
struct A68t200 * Pars;
};
typedef struct A68t188  A68_188 ;    /* STRUCT(INT,REF MODE200)  */
struct A68t189{
A68_INT  Rdenno;
A_PAD_INT(PAD_138)
A68_INT  Deflex;
A_PAD_INT(PAD_139)
struct A68t199 * Sels;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(INT,INT,REF MODE199)  */
struct A68t190{
A68_INT  Rdenno;
A_PAD_INT(PAD_140)
A68_INT  Imode;
A_PAD_INT(PAD_141)
A68_INT  Length;
A_PAD_INT(PAD_142)
A68_INT  Deflex;
A_PAD_INT(PAD_143)
};
typedef struct A68t190  A68_190 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t191{
A68_INT  Deproc;
A_PAD_INT(PAD_144)
};
typedef struct A68t191  A68_191 ;    /* STRUCT(INT)  */
struct A68t192{
A68_INT  Rdenno;
A_PAD_INT(PAD_145)
A68_INT  Vecmode;
A_PAD_INT(PAD_146)
A68_INT  Deflex;
A_PAD_INT(PAD_147)
};
typedef struct A68t192  A68_192 ;    /* STRUCT(INT,INT,INT)  */
struct A68t193{
A68_INT  Rdenno;
A_PAD_INT(PAD_148)
A68_INT  Mode;
A_PAD_INT(PAD_149)
A68_INT  Nods;
A_PAD_INT(PAD_150)
A68_INT  Deflex;
A_PAD_INT(PAD_151)
};
typedef struct A68t193  A68_193 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t194{
A68_INT  Mode;
A_PAD_INT(PAD_152)
struct A68t198 * Stenlist;
};
typedef struct A68t194  A68_194 ;    /* STRUCT(INT,REF MODE198)  */
struct A68t195{
A68_INT  Mode;
A_PAD_INT(PAD_153)
A68_INT  Modeproc;
A_PAD_INT(PAD_154)
struct A68t197 * El;
};
typedef struct A68t195  A68_195 ;    /* STRUCT(INT,INT,REF MODE197)  */
struct A68t197{
struct A68t195 * Am;
struct A68t197 * Rest;
};
typedef struct A68t197  A68_197 ;    /* STRUCT(REF MODE195,REF MODE197)  */
struct A68t198{
A68_INT  Mode;
A_PAD_INT(PAD_155)
A68_INT  Rdenno;
A_PAD_INT(PAD_156)
struct A68t198 * Rest;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(INT,INT,REF MODE198)  */
struct A68t199{
A68_INT  Mode;
A_PAD_INT(PAD_157)
A68_INT  Fieldno;
A_PAD_INT(PAD_158)
struct A68t148  Name;
A_PAD_ISTRUCT(A68_148 ,PAD_159)
struct A68t199 * Rest;
};
typedef struct A68t199  A68_199 ;    /* STRUCT(INT,INT,MODE148,REF MODE199)  */
struct A68t200{
A68_INT  Mode;
A_PAD_INT(PAD_160)
struct A68t200 * Rest;
};
typedef struct A68t200  A68_200 ;    /* STRUCT(INT,REF MODE200)  */

A_PROCEDURE(A68_VOID ,A68t201,(A68_INT ,struct A68t178 *),(A68_INT ,struct A68t178 *,void *));
typedef struct A68t201  A68_201 ;    /* PROC(INT) MODE178 */
struct A68t203 ;

A_PROCEDURE(A68_VOID ,A68t202,(A68_INT ,struct A68t203 *),(A68_INT ,struct A68t203 *,void *));
typedef struct A68t202  A68_202 ;    /* PROC(INT) REF MODE203 */
A_VECTOR(struct A68t179 ,A68t203);
typedef struct A68t203  A68_203 ;    /* VECTOR [] MODE179 */

A_PROCEDURE(A68_INT ,A68t204,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(INT,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t205,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t205  A68_205 ;    /* PROC(INT,INT) MODE26 */

A_PROCEDURE(A68_BOOL ,A68t206,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(INT,MODE26) BOOL */

A_PROCEDURE(A68_INT ,A68t207,(struct A68t181 ,struct A68t181 ),(struct A68t181 ,struct A68t181 ,void *));
typedef struct A68t207  A68_207 ;    /* PROC(REF MODE181,REF MODE181) INT */

A_PROCEDURE(A68_VOID ,A68t208,(A68_INT ,struct A68t181 ,struct A68t117 *),(A68_INT ,struct A68t181 ,struct A68t117 *,void *));
typedef struct A68t208  A68_208 ;    /* PROC(INT,REF MODE181) MODE117 */

A_PROCEDURE(A68_VOID ,A68t209,(struct A68t181 ,struct A68t181 ,A68_VC *),(struct A68t181 ,struct A68t181 ,A68_VC *,void *));
typedef struct A68t209  A68_209 ;    /* PROC(REF MODE181,REF MODE181) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t210,(struct A68t89 ),(struct A68t89 ,void *));
typedef struct A68t210  A68_210 ;    /* PROC(MODE89) VOID */

A_PROCEDURE(struct A68t56 ,A68t211,(void),(void *));
typedef struct A68t211  A68_211 ;    /* PROC MODE56 */

A_PROCEDURE(A68_VOID ,A68t212,(struct A68t56 ),(struct A68t56 ,void *));
typedef struct A68t212  A68_212 ;    /* PROC(MODE56) VOID */

A_PROCEDURE(A68_VOID ,A68t213,(struct A68t89 ,A68_VC *),(struct A68t89 ,A68_VC *,void *));
typedef struct A68t213  A68_213 ;    /* PROC(MODE89) MODE26 */

A_PROCEDURE(A68_BOOL ,A68t214,(struct A68t98 *,struct A68t98 *),(struct A68t98 *,struct A68t98 *,void *));
typedef struct A68t214  A68_214 ;    /* PROC(REF MODE98,REF MODE98) BOOL */

A_PROCEDURE(A68_BOOL ,A68t215,(struct A68t98 *),(struct A68t98 *,void *));
typedef struct A68t215  A68_215 ;    /* PROC(REF MODE98) BOOL */

A_PROCEDURE(A68_BOOL ,A68t216,(struct A68t98 *,A68_LBITS ),(struct A68t98 *,A68_LBITS ,void *));
typedef struct A68t216  A68_216 ;    /* PROC(REF MODE98,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t217,(struct A68t98 *),(struct A68t98 *,void *));
typedef struct A68t217  A68_217 ;    /* PROC(REF MODE98) LONG BITS */

A_PROCEDURE(A68_VOID ,A68t218,(struct A68t98 *,A68_VC *),(struct A68t98 *,A68_VC *,void *));
typedef struct A68t218  A68_218 ;    /* PROC(REF MODE98) MODE26 */

A_PROCEDURE(struct A68t98 *,A68t219,(struct A68t98 *,A68_INT ),(struct A68t98 *,A68_INT ,void *));
typedef struct A68t219  A68_219 ;    /* PROC(REF MODE98,INT) REF MODE98 */

A_PROCEDURE(A68_INT ,A68t220,(struct A68t104 ),(struct A68t104 ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(MODE104) INT */
struct A68t221{
struct A68t98 * Value;
struct A68t55 * End;
A68_INT  Type;
A_PAD_INT(PAD_161)
};
typedef struct A68t221  A68_221 ;    /* STRUCT(REF MODE98,REF MODE55,INT)  */

A_PROCEDURE(A68_BOOL ,A68t222,(struct A68t98 *,A68_BITS ),(struct A68t98 *,A68_BITS ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(REF MODE98,BITS) BOOL */

A_PROCEDURE(struct A68t98 *,A68t223,(struct A68t105 *,A68_INT ),(struct A68t105 *,A68_INT ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(REF MODE105,INT) REF MODE98 */

A_PROCEDURE(struct A68t105 *,A68t224,(struct A68t105 *),(struct A68t105 *,void *));
typedef struct A68t224  A68_224 ;    /* PROC(REF MODE105) REF MODE105 */
struct A68t226 ;

A_PROCEDURE(struct A68t98 *,A68t225,(A68_INT ,A68_INT ,A68_BITS ,struct A68t226 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t226 ,void *));
typedef struct A68t225  A68_225 ;    /* PROC(INT,INT,BITS,MODE226) REF MODE98 */
A_VECTOR(struct A68t98 *,A68t226);
typedef struct A68t226  A68_226 ;    /* VECTOR [] REF MODE98 */

A_PROCEDURE(A68_VOID ,A68t227,(struct A68t98 *,A68_BOOL ,A68_VC *),(struct A68t98 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t227  A68_227 ;    /* PROC(REF MODE98,BOOL) MODE26 */

A_PROCEDURE(A68_LINT ,A68t228,(struct A68t98 ),(struct A68t98 ,void *));
typedef struct A68t228  A68_228 ;    /* PROC(MODE98) LONG INT */
struct A68t229 { A68_INT mode; union {
struct A68t98 * mode1;
A68_VC  mode2;
struct A68t102  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t229  A68_229 ;    /* UNION(REF MODE98,MODE26,MODE102)  */

A_PROCEDURE(A68_VOID ,A68t230,(struct A68t229 ,A68_VC *),(struct A68t229 ,A68_VC *,void *));
typedef struct A68t230  A68_230 ;    /* PROC(MODE229) MODE26 */
struct A68t232 ;

A_PROCEDURE(A68_VOID ,A68t231,(struct A68t232 ,A68_VC *),(struct A68t232 ,A68_VC *,void *));
typedef struct A68t231  A68_231 ;    /* PROC(MODE232) MODE26 */
A_VECTOR(struct A68t229 ,A68t232);
typedef struct A68t232  A68_232 ;    /* VECTOR [] MODE229 */

A_PROCEDURE(A68_VOID ,A68t233,(A68_VC ,struct A68t232 ,A68_VC *),(A68_VC ,struct A68t232 ,A68_VC *,void *));
typedef struct A68t233  A68_233 ;    /* PROC(MODE26,MODE232) MODE26 */

A_PROCEDURE(A68_VOID ,A68t234,(struct A68t232 ),(struct A68t232 ,void *));
typedef struct A68t234  A68_234 ;    /* PROC(MODE232) VOID */

A_PROCEDURE(A68_VOID ,A68t235,(A68_VC ,A68_INT ,struct A68t232 ,struct A68t102 *),(A68_VC ,A68_INT ,struct A68t232 ,struct A68t102 *,void *));
typedef struct A68t235  A68_235 ;    /* PROC(MODE26,INT,MODE232) MODE102 */

A_PROCEDURE(struct A68t98 *,A68t236,(struct A68t98 *),(struct A68t98 *,void *));
typedef struct A68t236  A68_236 ;    /* PROC(REF MODE98) REF MODE98 */

A_PROCEDURE(struct A68t98 *,A68t237,(A68_VC ,struct A68t98 *),(A68_VC ,struct A68t98 *,void *));
typedef struct A68t237  A68_237 ;    /* PROC(MODE26,REF MODE98) REF MODE98 */

A_PROCEDURE(A68_VOID ,A68t238,(struct A68t60 ),(struct A68t60 ,void *));
typedef struct A68t238  A68_238 ;    /* PROC(MODE60) VOID */

A_PROCEDURE(A68_VOID ,A68t239,(struct A68t59 ),(struct A68t59 ,void *));
typedef struct A68t239  A68_239 ;    /* PROC(MODE59) VOID */

A_PROCEDURE(A68_VOID ,A68t240,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t240  A68_240 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,61,A68t241);
typedef struct A68t241  A68_241 ;    /* STRUCT 61 CHAR */

A_PROCEDURE(A68_VOID ,A68t242,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t242  A68_242 ;    /* PROC(INT,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,11,A68t243);
typedef struct A68t243  A68_243 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t244);
typedef struct A68t244  A68_244 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t245);
typedef struct A68t245  A68_245 ;    /* STRUCT 3 CHAR */

A_PROCEDURE(A68_VOID ,A68t246,(struct A68t130 ),(struct A68t130 ,void *));
typedef struct A68t246  A68_246 ;    /* PROC(MODE130) VOID */
A_ISTRUCT(A68_CHAR ,9,A68t247);
typedef struct A68t247  A68_247 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t248);
typedef struct A68t248  A68_248 ;    /* STRUCT 31 CHAR */

A_PROCEDURE(A68_VOID ,A68t249,(A68_INT ,A68_INT ,A68_VC ,struct A68t56 ,A68_BITS ,A68_VC ,A68_VC ),(A68_INT ,A68_INT ,A68_VC ,struct A68t56 ,A68_BITS ,A68_VC ,A68_VC ,void *));
typedef struct A68t249  A68_249 ;    /* PROC(INT,INT,REF MODE26,MODE56,BITS,REF MODE26,REF MODE26) VOID */
A_ISTRUCT(A68_CHAR ,1,A68t250);
typedef struct A68t250  A68_250 ;    /* STRUCT 0 CHAR */

A_PROCEDURE(A68_VOID ,A68t251,(A68_INT ,struct A68t98 *),(A68_INT ,struct A68t98 *,void *));
typedef struct A68t251  A68_251 ;    /* PROC(INT,REF MODE98) VOID */
A_ISTRUCT(A68_CHAR ,8,A68t252);
typedef struct A68t252  A68_252 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_VC ,4,A68t253);
typedef struct A68t253  A68_253 ;    /* STRUCT 4 MODE26 */
A_ISTRUCT(A68_CHAR ,39,A68t254);
typedef struct A68t254  A68_254 ;    /* STRUCT 39 CHAR */
A_ISTRUCT(A68_VC ,3,A68t255);
typedef struct A68t255  A68_255 ;    /* STRUCT 3 MODE26 */
A_ISTRUCT(struct A68t66 ,2,A68t256);
typedef struct A68t256  A68_256 ;    /* STRUCT 2 MODE66 */
A_ISTRUCT(struct A68t66 ,8,A68t257);
typedef struct A68t257  A68_257 ;    /* STRUCT 8 MODE66 */
A_ISTRUCT(struct A68t66 ,5,A68t258);
typedef struct A68t258  A68_258 ;    /* STRUCT 5 MODE66 */

A_PROCEDURE(A68_VOID ,A68t259,(struct A68t130 ,struct A68t105 **),(struct A68t130 ,struct A68t105 **,void *));
typedef struct A68t259  A68_259 ;    /* PROC(MODE130,REF REF MODE105) VOID */
A_ISTRUCT(A68_CHAR ,22,A68t260);
typedef struct A68t260  A68_260 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,37,A68t261);
typedef struct A68t261  A68_261 ;    /* STRUCT 37 CHAR */

A_PROCEDURE(A68_VOID ,A68t262,(struct A68t130 ,struct A68t98 *,A68_INT ),(struct A68t130 ,struct A68t98 *,A68_INT ,void *));
typedef struct A68t262  A68_262 ;    /* PROC(MODE130,REF MODE98,INT) VOID */
A_ISTRUCT(A68_CHAR ,23,A68t263);
typedef struct A68t263  A68_263 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t264);
typedef struct A68t264  A68_264 ;    /* STRUCT 10 CHAR */

A_PROCEDURE(struct A68t98 *,A68t265,(struct A68t98 *,struct A68t98 ),(struct A68t98 *,struct A68t98 ,void *));
typedef struct A68t265  A68_265 ;    /* PROC(REF MODE98,MODE98) REF MODE98 */

A_PROCEDURE(struct A68t99 *,A68t266,(struct A68t99 *,struct A68t99 ),(struct A68t99 *,struct A68t99 ,void *));
typedef struct A68t266  A68_266 ;    /* PROC(REF MODE99,MODE99) REF MODE99 */
#define A68_267  A68_VC 
#define A68t267 A68t26            /* FLEX VECTOR [] CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t268);
typedef struct A68t268  A68_268 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t66 ,6,A68t269);
typedef struct A68t269  A68_269 ;    /* STRUCT 6 MODE66 */
A_ISTRUCT(A68_CHAR ,13,A68t270);
typedef struct A68t270  A68_270 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(struct A68t66 ,7,A68t271);
typedef struct A68t271  A68_271 ;    /* STRUCT 7 MODE66 */
A_ISTRUCT(A68_CHAR ,25,A68t272);
typedef struct A68t272  A68_272 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(struct A68t66 ,4,A68t273);
typedef struct A68t273  A68_273 ;    /* STRUCT 4 MODE66 */
A_ISTRUCT(A68_CHAR ,16,A68t274);
typedef struct A68t274  A68_274 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t275);
typedef struct A68t275  A68_275 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,17,A68t276);
typedef struct A68t276  A68_276 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(struct A68t66 ,10,A68t277);
typedef struct A68t277  A68_277 ;    /* STRUCT 10 MODE66 */

A_PROCEDURE(A68_VOID ,A68t278,(A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t181 ),(A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t181 ,void *));
typedef struct A68t278  A68_278 ;    /* PROC(INT,INT,BOOL,BOOL,BOOL,REF MODE181) VOID */
A_VECTOR(A68_VC ,A68t279);
typedef struct A68t279  A68_279 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t280,(A68_BOOL ,struct A68t279 *),(A68_BOOL ,struct A68t279 *,void *));
typedef struct A68t280  A68_280 ;    /* PROC(BOOL) MODE279 */
A_ISTRUCT(struct A68t66 ,3,A68t281);
typedef struct A68t281  A68_281 ;    /* STRUCT 3 MODE66 */
A_ISTRUCT(A68_CHAR ,15,A68t282);
typedef struct A68t282  A68_282 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,38,A68t283);
typedef struct A68t283  A68_283 ;    /* STRUCT 38 CHAR */
A_ISTRUCT(A68_CHAR ,42,A68t284);
typedef struct A68t284  A68_284 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t285);
typedef struct A68t285  A68_285 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t286);
typedef struct A68t286  A68_286 ;    /* STRUCT 14 CHAR */

A_PROCEDURE(A68_VOID ,A68t287,(A68_VC ,A68_INT ,struct A68t181 ,A68_INT ,A68_INT ,struct A68t72 ,A68_BITS ),(A68_VC ,A68_INT ,struct A68t181 ,A68_INT ,A68_INT ,struct A68t72 ,A68_BITS ,void *));
typedef struct A68t287  A68_287 ;    /* PROC(REF MODE26,INT,REF MODE181,INT,INT,MODE72,BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t288,(struct A68t139 ),(struct A68t139 ,void *));
typedef struct A68t288  A68_288 ;    /* PROC(MODE139) VOID */
A_ISTRUCT(A68_CHAR ,53,A68t289);
typedef struct A68t289  A68_289 ;    /* STRUCT 53 CHAR */
A_ISTRUCT(A68_CHAR ,27,A68t290);
typedef struct A68t290  A68_290 ;    /* STRUCT 27 CHAR */
A_ISTRUCT(A68_CHAR ,29,A68t291);
typedef struct A68t291  A68_291 ;    /* STRUCT 29 CHAR */

A_PROCEDURE(A68_VOID ,A68t292,(A68_BOOL ,struct A68t181 *),(A68_BOOL ,struct A68t181 *,void *));
typedef struct A68t292  A68_292 ;    /* PROC(BOOL) MODE181 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from values --- */
extern A68_VOID  UZPACTR_getcfragment(struct A68t98 *,A68_VC *);
extern A68_BITS  PKJACTR_defaultinfo;
#define QKJACTR_constant 0X1U
#define TKJACTR_nonloc 0X8U
#define WKJACTR_isnil 0X40U
extern A68_BOOL  IWPACTR_hasattribute(struct A68t98 *,A68_BITS );
extern A68_VOID  BEQACTR_bracketcfragment(struct A68t98 *,A68_VC *);
/* --- End of imports from values --- */


/* --- Imports from uniquenameserver --- */
extern A68_56  QIMACTR_newuniquename(void);
/* --- End of imports from uniquenameserver --- */


/* --- Imports from unionaids --- */
extern A68_INT  GWQACTR_findints(struct A68t181 ,struct A68t181 );
extern A68_VOID  WWQACTR_uniontouniontable(struct A68t181 ,struct A68t181 ,A68_VC *);
/* --- End of imports from unionaids --- */


/* --- Imports from moduletracer --- */
extern A68_INT  ZCHACTR_tracelevel(A68_VC );
/* --- End of imports from moduletracer --- */


/* --- Imports from modes --- */
extern A68_180  YVMACTR_constituents;
extern A68_VOID  XKNACTR_ctype(A68_INT ,A68_VC *);
extern A68_VOID  BLNACTR_cvartype(A68_INT ,A68_VC *);
extern A68_70  SVMACTR_deproc;
extern A68_BOOL  NSMACTR_isprocp(A68_INT );
extern A68_INT  IOMACTR_modetype(A68_INT );
extern A68_180  AWMACTR_parameters;
extern A68_BOOL  VSMACTR_iscstruct(A68_INT );
extern A68_INT  TKNACTR_givecvariabletype(A68_INT ,A68_BOOL );
extern A68_VOID  WLNACTR_ctaggedtype(A68_INT ,A68_VC *);
extern A68_VOID  CMNACTR_alignnextstructfield(A68_INT ,A68_INT );
/* --- End of imports from modes --- */


/* --- Imports from incmode --- */
#define TEAACTR_gotomode 4
#define EEAACTR_primitive 1
extern A68_INT  WFAACTR_refrefmark;
#define UEAACTR_voidmode 5
/* --- End of imports from incmode --- */


/* --- Imports from incinstallation --- */
/* --- End of imports from incinstallation --- */


/* --- Imports from modules --- */
extern A68_117  ICPACTR_keptdecnos;
extern A68_56  RNOACTR_nulluname;
extern A68_BOOL  LCPACTR_rscompatiblewithpreviousversion;
extern A68_177  RCPACTR_specs;
extern A68_BOOL  MCPACTR_transcompatiblewithpreviousversi;
/* --- End of imports from modules --- */


/* --- Imports from incimperatives --- */
#define MCAACTR_aliasing 2
#define LCAACTR_announcing 0
#define OCAACTR_operatorbit 004U
/* --- End of imports from incimperatives --- */


/* --- Imports from incid --- */
#define IAAACTR_maxidno 2000
#define MAAACTR_maxlibid 6000
#define KAAACTR_maxrdno 4000
#define OAAACTR_minlab 16384
#define LAAACTR_minlibid 4001
/* --- End of imports from incid --- */


/* --- Imports from idtable --- */
extern A68_108 * YQKACTR_get_idinfo(A68_INT );
extern A68_VOID  RRKACTR_afterbang(A68_VC ,A68_VC *);
extern A68_INT  VPKACTR_alienidno;
extern A68_108  UPKACTR_alienidinfo;
extern A68_112  LXKACTR_externaldec;
extern A68_75  MXKACTR_externalcdec;
extern A68_113  WPKACTR_ids;
extern A68_114  XPKACTR_rds;
extern A68_113  YPKACTR_libraryids;
extern A68_115  ZPKACTR_labels;
extern A68_VOID  WSKACTR_labelfullname(A68_INT ,A68_VC *);
extern A68_VOID  UTKACTR_idfullname(A68_INT ,A68_VC *);
extern A68_VOID  DTKACTR_labelbuffername(A68_INT ,A68_VC *);
#define AQKACTR_idnoflags 0X0U
#define BQKACTR_ididentityflag 0X1U
#define CQKACTR_idkeptflag 0X2U
#define DQKACTR_idccdecflag 0X4U
#define EQKACTR_idforallflag 0X8U
#define FQKACTR_idforflag 0X10U
#define GQKACTR_idformalflag 0X20U
#define HQKACTR_idoptimisedflag 0X40U
#define IQKACTR_idopflag 0X80U
#define JQKACTR_idgprocflag 0X100U
#define KQKACTR_idkeptgenprocflag 0X200U
#define LQKACTR_idloadedflag 0X400U
#define MQKACTR_idforceuseflag 0X800U
extern A68_BITS  NQKACTR_idpresetflags;
extern A68_VOID  LUKACTR_rdenvname(A68_INT ,A68_VC *);
extern A68_VOID  DUKACTR_rdfnname(A68_INT ,A68_VC *);
#define SQKACTR_rdopflag 0X10U
#define OQKACTR_rdnoflags 0X0U
#define PQKACTR_rdkeptflag 0X2U
#define RQKACTR_rdglobalflag 0X8U
extern A68_BOOL  TUKACTR_standopsym(A68_VC );
#define VQKACTR_labdeclaredflag 0X1U
#define WQKACTR_labbufferemittedflag 0X2U
/* --- End of imports from idtable --- */


/* --- Imports from evaluator --- */
extern A68_VOID  GMVACTR_evaluatestack(struct A68t105 **);
/* --- End of imports from evaluator --- */


/* --- Imports from environment --- */
extern A68_VOID  WXIACTR_assert(A68_VC ,A68_BOOL );
extern A68_VOID  MXIACTR_portabilitywarning(A68_INT );
extern A68_VOID  VWIACTR_pwarning(A68_INT ,struct A68t85 );
extern A68_BOOL  AQIACTR_verboseoption;
extern A68_BOOL  NQIACTR_nostructresultoption;
extern A68_BOOL  OQIACTR_closuremarkoption;
extern A68_BOOL  PQIACTR_closureonstackoption;
extern A68_BOOL  RQIACTR_oldalienoption;
extern A68_59  MSIACTR_list;
extern A68_91  IYIACTR_config_info;
/* --- End of imports from environment --- */


/* --- Imports from environ --- */
#define GSLACTR_importsstream 2
#define HSLACTR_externstream 3
extern A68_INT  KSLACTR_nonlocdecstream(A68_INT );
extern A68_INT  NSLACTR_codestream(A68_INT );
extern A68_INT  QSLACTR_locdecstream(A68_INT );
extern A68_INT  TSLACTR_labelstream(A68_INT );
extern A68_VOID  QPLACTR_currentenviron(A68_72 *);
extern A68_INT  VRLACTR_currentlevel(void);
extern A68_INT  ZPLACTR_currentroutine(void);
extern A68_INT  CQLACTR_findroutine(A68_INT );
extern A68_BOOL  JQLACTR_nonlocalsused(void);
extern A68_BOOL  PRLACTR_isgloballevel(struct A68t72 );
/* --- End of imports from environ --- */


/* --- Imports from denotations --- */
extern A68_VOID  DRJACTR_replacecontrolchars(A68_VC ,A68_VC *);
/* --- End of imports from denotations --- */


/* --- Imports from coutput --- */
extern A68_VOID  MDMACTR_writecstream(struct A68t65 ,A68_INT );
/* --- End of imports from coutput --- */


/* --- Imports from centities --- */
extern A68_SINT  EIAACTR_cnewline;
/* --- End of imports from centities --- */


/* --- Imports from usefulops --- */
extern A68_VOID  JDAAOSF_concat(struct A68t36 ,A68_VC *);
extern A68_VOID  ZCAAOSF_makervc(A68_VC ,A68_VC *);
extern A68_INT  KMAAOSF_truncate(A68_CHAR ,A68_VC );
extern A68_VOID  SNAAOSF_capitalised(A68_VC ,A68_VC *);
extern A68_BITS * PKAAOSF_orab(A68_BITS *,A68_BITS );
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void OUPACTR(void);   /* values */
extern void RHMACTR(void);   /* uniquenameserver */
extern void VUQACTR(void);   /* unionaids */
extern void BCHACTR(void);   /* moduletracer */
extern void DNMACTR(void);   /* modes */
extern void ZDAACTR(void);   /* incmode */
extern void ODAACTR(void);   /* incinstallation */
extern void ANOACTR(void);   /* modules */
extern void UAAACTR(void);   /* incimperatives */
extern void BAAACTR(void);   /* incid */
extern void PPKACTR(void);   /* idtable */
extern void JGVACTR(void);   /* evaluator */
extern void HPIACTR(void);   /* environment */
extern void BPLACTR(void);   /* environ */
extern void LLJACTR(void);   /* denotations */
extern void PTLACTR(void);   /* coutput */
extern void THAACTR(void);   /* centities */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_241   PMVACTR = {"$Id: identifiers.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,QMVACTR,PMVACTR,61)
static A68_243   UMVACTR = {"identifiers"}; 
A_GISVEC(A68_VC ,VMVACTR,UMVACTR,11)
static A68_244   WMVACTR = {"identifiers("}; 
static A68_245   XMVACTR = {"): "}; 
A_GISVEC(A68_VC ,YMVACTR,WMVACTR,12)
A_GISVEC(A68_VC ,ANVACTR,XMVACTR,3)
static A68_247   DNVACTR = {"dummy dec"}; 
A_GISVEC(A68_VC ,ENVACTR,DNVACTR,9)
static A68_248   PNVACTR = {"RS/trans keeplist inconsistency"}; 
A_GISVEC(A68_VC ,QNVACTR,PNVACTR,31)
static A68_250   JPVACTR = {""}; 
A_GISVEC(A68_VC ,LPVACTR,JPVACTR,0)
static A68_252   MQVACTR = {"#define "}; 
A_GISVEC(A68_VC ,NQVACTR,MQVACTR,8)
static A68_56   BRVACTR = {"extern "}; 
static A68_245   DRVACTR = {"();"}; 
A_GISVEC(A68_VC ,HRVACTR,DRVACTR,3)
A_GISVEC(A68_VC ,LRVACTR,BRVACTR,7)
static A68_254   PRVACTR = {"/* no definition of ALIEN supplied for "}; 
A_GISVEC(A68_VC ,QRVACTR,PRVACTR,39)
static A68_245   RRVACTR = {" */"}; 
A_GISVEC(A68_VC ,SRVACTR,RRVACTR,3)
static A68_252   RSVACTR = {"#define "}; 
A_GISVEC(A68_VC ,SSVACTR,RSVACTR,8)
static A68_250   STVACTR = {""}; 
A_GISVEC(A68_VC ,TTVACTR,STVACTR,0)
static A68_56   WTVACTR = {"static "}; 
A_GISVEC(A68_VC ,XTVACTR,WTVACTR,7)
static A68_247   GUVACTR = {" A_UNUSED"}; 
A_GISVEC(A68_VC ,HUVACTR,GUVACTR,9)
static A68_56   MUVACTR = {" = {0};"}; 
A_GISVEC(A68_VC ,NUVACTR,MUVACTR,7)
static A68_56   RUVACTR = {" /* OP "}; 
static A68_245   SUVACTR = {" */"}; 
A_GISVEC(A68_VC ,TUVACTR,RUVACTR,7)
A_GISVEC(A68_VC ,UUVACTR,SUVACTR,3)
static A68_250   XUVACTR = {""}; 
A_GISVEC(A68_VC ,YUVACTR,XUVACTR,0)
static A68_245   GVVACTR = {" = "}; 
A_GISVEC(A68_VC ,HVVACTR,GVVACTR,3)
#define KWVACTR_identity 1
#define LWVACTR_variable 2
#define MWVACTR_formalparam 3
#define NWVACTR_forcontrol 4
#define OWVACTR_initialisedvar 5
#define PWVACTR_caseconformity 6
#define QWVACTR_forallcontrol 7
#define RWVACTR_dummy 8
#define XWVACTR_noinitialvalue (A68_98 *)A68_NIL
static A68_260   KXVACTR = {"ccdec not handled here"}; 
A_GISVEC(A68_VC ,LXVACTR,KXVACTR,22)
static A68_261   VXVACTR = {"This transiddec type should not occur"}; 
A_GISVEC(A68_VC ,WXVACTR,VXVACTR,37)
static A68_263   BYVACTR = {"ccdec: not a choice dec"}; 
A_GISVEC(A68_VC ,CYVACTR,BYVACTR,23)
static A68_264   IYVACTR = {".data.mode"}; 
A_GISVEC(A68_VC ,KYVACTR,IYVACTR,10)
static A68_252   NZVACTR = {"A_UNCPY("}; 
A_GISVEC(A68_VC ,OZVACTR,NZVACTR,8)
static A68_268   VZVACTR = {");"}; 
A_GISVEC(A68_VC ,WZVACTR,VZVACTR,2)
static A68_247   DAWACTR = {".mode -= "}; 
A_GISVEC(A68_VC ,EAWACTR,DAWACTR,9)
static A68_270   UAWACTR = {".mode = \"\\000"}; 
A_GISVEC(A68_VC ,VAWACTR,UAWACTR,13)
static A68_268   ZAWACTR = {"\"["}; 
A_GISVEC(A68_VC ,ABWACTR,ZAWACTR,2)
static A68_56   EBWACTR = {".mode];"}; 
A_GISVEC(A68_VC ,FBWACTR,EBWACTR,7)
static A68_272   KBWACTR = {"ccdec: invalid mode index"}; 
A_GISVEC(A68_VC ,LBWACTR,KBWACTR,25)
static A68_244   TBWACTR = {"A68_jmp_buf "}; 
A_GISVEC(A68_VC ,UBWACTR,TBWACTR,12)
static A68_274   FCWACTR = {"if ( sigsetjmp( "}; 
A_GISVEC(A68_VC ,GCWACTR,FCWACTR,16)
static A68_275   JCWACTR = {".label"}; 
A_GISVEC(A68_VC ,LCWACTR,JCWACTR,6)
static A68_243   OCWACTR = {",1) ) goto "}; 
A_GISVEC(A68_VC ,PCWACTR,OCWACTR,11)
#define BDWACTR_idtype 1
#define CDWACTR_rdtype 2
#define DDWACTR_libtype 3
#define EDWACTR_labtype 4
static A68_254   LDWACTR = {"IDENTIFIERS - library ids not supported"}; 
A_GISVEC(A68_VC ,MDWACTR,LDWACTR,39)
static A68_148   ODWACTR = {"IDENTIFIERS - invalid type of id"}; 
A_GISVEC(A68_VC ,PDWACTR,ODWACTR,32)
static A68_245   WEWACTR = {"(( "}; 
A_GISVEC(A68_VC ,XEWACTR,WEWACTR,3)
static A68_56   CFWACTR = {" * ) ( "}; 
A_GISVEC(A68_VC ,DFWACTR,CFWACTR,7)
static A68_276   IFWACTR = {".nonlocals )) -> "}; 
A_GISVEC(A68_VC ,JFWACTR,IFWACTR,17)
static A68_245   NFWACTR = {" = "}; 
A_GISVEC(A68_VC ,OFWACTR,NFWACTR,3)
static A68_250   QHWACTR = {""}; 
A_GISVEC(A68_VC ,RHWACTR,QHWACTR,0)
static A68_247   UHWACTR = {"A_STATIC "}; 
A_GISVEC(A68_VC ,VHWACTR,UHWACTR,9)
static A68_40   GIWACTR = {"void"}; 
A_GISVEC(A68_VC ,HIWACTR,GIWACTR,4)
static A68_268   YIWACTR = {", "}; 
A_GISVEC(A68_VC ,ZIWACTR,YIWACTR,2)
static A68_268   KJWACTR = {", "}; 
A_GISVEC(A68_VC ,LJWACTR,KJWACTR,2)
static A68_250   OJWACTR = {""}; 
A_GISVEC(A68_VC ,PJWACTR,OJWACTR,0)
static A68_282   UJWACTR = {" *ReturnedValue"}; 
A_GISVEC(A68_VC ,VJWACTR,UJWACTR,15)
static A68_268   BKWACTR = {", "}; 
A_GISVEC(A68_VC ,CKWACTR,BKWACTR,2)
static A68_250   FKWACTR = {""}; 
A_GISVEC(A68_VC ,GKWACTR,FKWACTR,0)
static A68_282   JKWACTR = {"void *NonLocals"}; 
A_GISVEC(A68_VC ,KKWACTR,JKWACTR,15)
static A68_276   ZKWACTR = {"#define NL(x) ((("}; 
A_GISVEC(A68_VC ,ALWACTR,ZKWACTR,17)
static A68_276   ELWACTR = {" *)NonLocals)->x)"}; 
A_GISVEC(A68_VC ,FLWACTR,ELWACTR,17)
static A68_283   XLWACTR = {"   /* proc value of non-global proc */"}; 
A_GISVEC(A68_VC ,YLWACTR,XLWACTR,38)
static A68_250   BMWACTR = {""}; 
A_GISVEC(A68_VC ,CMWACTR,BMWACTR,0)
static A68_284   RMWACTR = {"  /* proc non-locals allocated on stack */"}; 
A_GISVEC(A68_VC ,SMWACTR,RMWACTR,42)
static A68_250   VMWACTR = {""}; 
A_GISVEC(A68_VC ,WMWACTR,VMWACTR,0)
static A68_276   CNWACTR = {"A_STACK_CLOSURE( "}; 
A_GISVEC(A68_VC ,DNWACTR,CNWACTR,17)
static A68_268   HNWACTR = {", "}; 
A_GISVEC(A68_VC ,INWACTR,HNWACTR,2)
static A68_268   MNWACTR = {", "}; 
A_GISVEC(A68_VC ,NNWACTR,MNWACTR,2)
static A68_245   RNWACTR = {" );"}; 
A_GISVEC(A68_VC ,SNWACTR,RNWACTR,3)
static A68_285   YNWACTR = {"A_MARKED_CLOSURE( "}; 
A_GISVEC(A68_VC ,ZNWACTR,YNWACTR,18)
static A68_243   COWACTR = {"A_CLOSURE( "}; 
A_GISVEC(A68_VC ,DOWACTR,COWACTR,11)
static A68_268   HOWACTR = {", "}; 
A_GISVEC(A68_VC ,IOWACTR,HOWACTR,2)
static A68_268   MOWACTR = {", "}; 
A_GISVEC(A68_VC ,NOWACTR,MOWACTR,2)
static A68_245   ROWACTR = {" );"}; 
A_GISVEC(A68_VC ,SOWACTR,ROWACTR,3)
static A68_286   YOWACTR = {"typedef struct"}; 
A_GISVEC(A68_VC ,ZOWACTR,YOWACTR,14)
static A68_248   CPWACTR = {"   /* env of non-global proc */"}; 
A_GISVEC(A68_VC ,DPWACTR,CPWACTR,31)
static A68_250   GPWACTR = {""}; 
A_GISVEC(A68_VC ,HPWACTR,GPWACTR,0)
static A68_286   NPWACTR = {" A68_INT mark;"}; 
A_GISVEC(A68_VC ,OPWACTR,NPWACTR,14)
static A68_250   RPWACTR = {""}; 
A_GISVEC(A68_VC ,SPWACTR,RPWACTR,0)
static A68_264   DQWACTR = {"int dummy;"}; 
A_GISVEC(A68_VC ,EQWACTR,DQWACTR,10)
static A68_268   KQWACTR = {"} "}; 
A_GISVEC(A68_VC ,LQWACTR,KQWACTR,2)
static A68_289   FSWACTR = {"IDENTIFIERS - should be aliasing to initialised label"}; 
A_GISVEC(A68_VC ,HSWACTR,FSWACTR,53)
static A68_243   NSWACTR = {": A_UNUSED;"}; 
A_GISVEC(A68_VC ,OSWACTR,NSWACTR,11)
static A68_290   LTWACTR = {"external dec: invalid decno"}; 
A_GISVEC(A68_VC ,OTWACTR,LTWACTR,27)
static A68_291   AUWACTR = {"external c dec: invalid decno"}; 
A_GISVEC(A68_VC ,DUWACTR,AUWACTR,29)
static A68_247   KUWACTR = {"A_prelude"}; 
A_GISVEC(A68_VC ,NUWACTR,KUWACTR,9)
static A68_56   OVWACTR = {"extern "}; 
A_GISVEC(A68_VC ,PVWACTR,OVWACTR,7)
static A68_40   DWWACTR = {"void"}; 
A_GISVEC(A68_VC ,EWWACTR,DWWACTR,4)
static A68_250   OWWACTR = {""}; 
A_GISVEC(A68_VC ,PWWACTR,OWWACTR,0)
static A68_250   YWWACTR = {""}; 
A_GISVEC(A68_VC ,ZWWACTR,YWWACTR,0)
static A68_268   IXWACTR = {");"}; 
A_GISVEC(A68_VC ,JXWACTR,IXWACTR,2)
static A68_56   PXWACTR = {"extern "}; 
A_GISVEC(A68_VC ,QXWACTR,PXWACTR,7)
typedef struct   /* env of non-global proc */
{
A68_INT  Decno;
A_PAD_INT(PAD_162)
A68_98 * Initvalue;
A68_BOOL  DQVACTR_kept;
A_PAD_BOOL(PAD_163)
A68_108 * WPVACTR_idinfo;
} KQVACTR_optidentity;
typedef struct   /* env of non-global proc */
{
A68_BOOL  AQVACTR_global;
A_PAD_BOOL(PAD_164)
A68_108 * WPVACTR_idinfo;
A68_INT  Decno;
A_PAD_INT(PAD_165)
A68_INT  FQVACTR_decstream;
A_PAD_INT(PAD_166)
A68_98 * Initvalue;
A68_INT  GQVACTR_codestream;
A_PAD_INT(PAD_167)
} OTVACTR_declarecvariable;
typedef struct   /* env of non-global proc */
{
A68_INT  LGWACTR_a68paramcount;
A_PAD_INT(PAD_168)
} VGWACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Global;
A_PAD_BOOL(PAD_169)
A68_BOOL  Kept;
A_PAD_BOOL(PAD_170)
A68_INT  JGWACTR_cresultmode;
A_PAD_INT(PAD_171)
A68_VC  RGWACTR_fnname;
A68_INT  MGWACTR_cparamcount;
A_PAD_INT(PAD_172)
A68_INT  LGWACTR_a68paramcount;
A_PAD_INT(PAD_173)
A68_279  AHWACTR_paramtypes;
A68_279  YGWACTR_paramnames;
A68_BOOL  HGWACTR_usetempforresult;
A_PAD_BOOL(PAD_174)
A68_INT  Resultmode;
A_PAD_INT(PAD_175)
A68_BOOL  KGWACTR_fulldec;
A_PAD_BOOL(PAD_176)
} NHWACTR_prototype;
typedef struct   /* env of non-global proc */
{
int dummy;
} IVWACTR_generator;

A_STATIC A68_VOID  TMVACTR_debugmessage(A68_INT  Level, A68_VC  M);

A68_VOID  CNVACTR_initialdummydec(A68_130  Dummydec);

A_STATIC A68_INT  JNVACTR_keeplistposition(A68_INT  Decno);

A_STATIC A68_VOID  ZNVACTR_newidinfo(A68_INT  Decno, A68_INT  Mode, A68_VC  A68name, A68_56  Prefix, A68_BITS  Flags, A68_VC  Definition, A68_VC  Rhs);

A_STATIC A68_VOID  VPVACTR_outputcdeclaration(A68_INT  Decno, A68_98 * Initvalue);

A_STATIC A68_VOID  JQVACTR_optidentity(A68_VC  Rhs, void *NonLocals);

A_STATIC A68_VOID  NTVACTR_declarecvariable(void *NonLocals);

A68_VOID  JWVACTR_iddec(A68_130  Identifierdec, A68_105 ** Valuestack);

A68_VOID  AYVACTR_ccdec(A68_130  Choicedec, A68_98 * Enquiry, A68_INT  Modeindex);

A_STATIC A68_98 * QYVACTR_assignment(A68_98 * OYVACTR_anonymous, A68_98  PYVACTR_anonymous);

A_STATIC A68_99 * VYVACTR_assignment(A68_99 * TYVACTR_anonymous, A68_99  UYVACTR_anonymous);

A68_VOID  NBWACTR_declarenonlocallabel(A68_INT  Labno);

A68_VOID  ADWACTR_nonlocaldec(A68_INT  Idno, A68_INT  Level);

A_STATIC A68_VOID  DGWACTR_declarecroutine(A68_INT  Rdenno, A68_INT  Resultmode, A68_BOOL  Global, A68_BOOL  Kept, A68_BOOL  Opsym, A68_181  Params);

A_STATIC A68_VOID  UGWACTR_generator(A68_BOOL  SGWACTR_anonymous, A68_279  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MHWACTR_prototype(A68_INT  Protostream, void *NonLocals);

A68_VOID  XPWACTR_completerddec(void);

A68_VOID  BRWACTR_rddec(A68_VC  Name, A68_INT  Mode, A68_181  Paramdecnos, A68_INT  Resultmode, A68_INT  Rdenno, A68_72  Environ, A68_BITS  Props);

A68_VOID  XRWACTR_labdec(A68_139  Labeldec);

A_STATIC A68_VOID  ETWACTR_zexternaldec(A68_VC  Name, A68_56  Prefix, A68_INT  Mode, A68_INT  Decno, A68_BOOL  Optimised, A68_BOOL  Iddec, A68_BOOL  Globalproc, A68_BOOL  Genproc, A68_BOOL  Forceuse, A68_VC  Definition, A68_VC  Rhs);

A_STATIC A68_VOID  ITWACTR_mybefore(A68_VC  S, A68_CHAR  C, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  ZTWACTR_zexternalcdec(A68_INT  Decno);

A_STATIC A68_VOID  HVWACTR_generator(A68_BOOL  FVWACTR_anonymous, A68_181  *ReturnedValue, void *NonLocals);

A68_VOID  HYWACTR_initialiseidentifiers(void);

A68_INT  LYWACTR_leveloflabel(A68_INT  Labno);

A68_VOID  OYWACTR_environoflabel(A68_INT  Labno, A68_72  *ReturnedValue);

A_STATIC A68_99 * VYVACTR_assignment(A68_99 * TYVACTR_anonymous, A68_99  UYVACTR_anonymous)
{ 
A68_99  WYVACTR;  /* united object - for case conformity */
A68_VC  XYVACTR_anonymous A_UNUSED = {0};
A68_VC  YYVACTR;  /* OPERATORS - copy to flex */
A68_267 * ZYVACTR;  /* YIELD */
A68_99 * AZVACTR;  /* clause result */
{ 
(*TYVACTR_anonymous) = UYVACTR_anonymous;
WYVACTR = UYVACTR_anonymous ;
switch ( WYVACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
XYVACTR_anonymous = (WYVACTR.data.mode6);
ZYVACTR = &(TYVACTR_anonymous-> data.mode6) ;
(void)((*ZYVACTR) = A_VCOPY(XYVACTR_anonymous,YYVACTR,A68_CHAR ));
break;
default: 
/*SKIP*/;
break;
} 
AZVACTR = TYVACTR_anonymous;
} 
return( AZVACTR );
} 
#undef NL

A_STATIC A68_VOID  JQVACTR_optidentity(A68_VC  Rhs, void *NonLocals)
#define NL(x) (((KQVACTR_optidentity *)NonLocals)->x)
{ 
A68_253  LQVACTR;  /* collateral clause result */
A68_VC  OQVACTR;  /* avoid structure result */
A68_VC  PQVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_36  RQVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  SQVACTR;  /* avoid structure result */
A68_VC  TQVACTR;  /* avoid structure result */
A68_VC  QQVACTR_definition A_UNUSED = {0};
A68_99  UQVACTR;  /* united object - for case conformity */
A68_101  VQVACTR_id A_UNUSED = {0};
A68_BOOL  WQVACTR_aliendec A_UNUSED = {0};
A68_108 * XQVACTR;  /* clause result */
A68_108 * YQVACTR_rhsidinfo A_UNUSED = {0};
A68_BITS * ZQVACTR;  /* YIELD */
A68_VC  ARVACTR;  /* clause result */
A68_BITS  CRVACTR;  /* ADICOPS - >= */
A68_VC  ERVACTR;  /* clause result */
A68_VC  FRVACTR;  /* avoid structure result */
A68_VC  GRVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  IRVACTR;  /* avoid structure result */
A68_VC  JRVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  KRVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  MRVACTR;  /* avoid structure result */
A68_85  NRVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_255  ORVACTR;  /* collateral clause result */
A68_36  TRVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  URVACTR;  /* avoid structure result */
A68_VC  VRVACTR;  /* avoid structure result */
A68_VC * WRVACTR;  /* YIELD */
A68_BOOL  XRVACTR;  /* optbool result */
A68_INT  YRVACTR;  /* YIELD */
A68_155  ZRVACTR;  /* OPERATORS - simple index */
A68_INT  ASVACTR;  /* YIELD */
A68_157 * BSVACTR_keptinfo A_UNUSED = {0};
A68_BOOL  CSVACTR;  /* optbool result */
A68_BOOL  DSVACTR;  /* clause result */
A68_INT  ESVACTR;  /* YIELD */
A68_LINT * FSVACTR;  /* YIELD */
A68_56 * GSVACTR;  /* YIELD */
A68_255  HSVACTR;  /* collateral clause result */
A68_VC  ISVACTR;  /* OPERATORS - istruct -> vector */
A68_56  JSVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  KSVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  LSVACTR;  /* avoid structure result */
A68_36  MSVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  NSVACTR;  /* avoid structure result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} OSVACTR; 
A68_VC * PSVACTR;  /* YIELD */
A68_253  QSVACTR;  /* collateral clause result */
A68_VC  TSVACTR;  /* avoid structure result */
A68_VC  USVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_36  VSVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  WSVACTR;  /* avoid structure result */
A68_VC  XSVACTR;  /* avoid structure result */
A68_256  YSVACTR;  /* collateral clause result */
A68_66  ZSVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ATVACTR;  /* YIELD */
A68_66  BTVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  CTVACTR;  /* OPERATORS - istruct -> vector */
A68_INT * DTVACTR;  /* YIELD */
A68_BITS * ETVACTR;  /* YIELD */
A68_VC  FTVACTR;  /* avoid structure result */
A68_VC * GTVACTR;  /* YIELD */
A68_BITS * HTVACTR;  /* YIELD */
A68_256  ITVACTR;  /* collateral clause result */
A68_66  JTVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  KTVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  LTVACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(optidentity);
 /* line 200: */
 /* line 201: */
{ 
LQVACTR.data[0] = NQVACTR;
UTKACTR_idfullname( NL(Decno), &OQVACTR );
LQVACTR.data[1] = OQVACTR;
LQVACTR.data[2] = A_HVEC(PQVACTR,' ',A68_CHAR );
LQVACTR.data[3] = Rhs;
JDAAOSF_concat( A_HISVEC(RQVACTR,LQVACTR,4,A68_VC ), &SQVACTR );
ZCAAOSF_makervc( SQVACTR, &TQVACTR );
QQVACTR_definition = TQVACTR;
 /* line 203: */
 /* line 204: */
UQVACTR = (*(&(NL(Initvalue)->Extra))) ;
switch ( UQVACTR.mode )
{ 
case 4: /* STRUCT(INT)  */
VQVACTR_id = (UQVACTR.data.mode4);
 /* line 205: */
 /* line 206: */
{ 
WQVACTR_aliendec = A68_FALSE;
 /* line 207: */
 /* line 208: */
 /* line 209: */
if (VQVACTR_id.Idno==VPKACTR_alienidno)
{ 
WQVACTR_aliendec = A68_TRUE;
 /* line 210: */
XQVACTR = (&UPKACTR_alienidinfo);
} 
else
{ 
 /* line 211: */
XQVACTR = YQKACTR_get_idinfo(VQVACTR_id.Idno);
} 
YQVACTR_rhsidinfo = XQVACTR;
 /* line 214: */
 /* line 215: */
 /* line 216: */
if (NL(DQVACTR_kept))
{ 
 /* line 217: */
ZQVACTR = (&(YQVACTR_rhsidinfo->Flags)) ;
(void)((*ZQVACTR) = (A68_BITS )((*(&(YQVACTR_rhsidinfo->Flags)))|MQKACTR_idforceuseflag));
} 
 /* line 221: */
 /* line 222: */
 /* line 223: */
if (WQVACTR_aliendec)
{ 
 /* line 224: */
 /* line 225: */
 /* line 227: */
if ((*(&(YQVACTR_rhsidinfo->Definition))).upb>0)
{ 
 /* line 228: */
ARVACTR = (*(&(YQVACTR_rhsidinfo->Definition)));
} 
else
{ 
 /* line 229: */
if (RQIACTR_oldalienoption)
{ 
 /* line 230: */
 /* line 231: */
CRVACTR = (*(&(YQVACTR_rhsidinfo->Flags))) ;
if (A_LB_GE(CRVACTR,JQKACTR_idgprocflag))
{ 
 /* line 232: */
XKNACTR_ctype( A_CALLPROC(SVMACTR_deproc,((*(&(YQVACTR_rhsidinfo->Mode)))),((*(&(YQVACTR_rhsidinfo->Mode))),(SVMACTR_deproc).nonlocals)), &FRVACTR );
ERVACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(FRVACTR,A_HVEC(GRVACTR,' ',A68_CHAR )),(*(&(YQVACTR_rhsidinfo->Name)))),HRVACTR);
} 
else
{ 
 /* line 233: */
 /* line 234: */
 /* line 235: */
BLNACTR_cvartype( (*(&(YQVACTR_rhsidinfo->Cvariabletype))), &IRVACTR );
ERVACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(IRVACTR,A_HVEC(JRVACTR,' ',A68_CHAR )),(*(&(YQVACTR_rhsidinfo->Name)))),A_HVEC(KRVACTR,';',A68_CHAR ));
} 
 /* line 236: */
 /* line 237: */
ZCAAOSF_makervc( A_VC_PLUS(LRVACTR,ERVACTR), &MRVACTR );
ARVACTR = MRVACTR;
} 
else
{ 
(void)(VWIACTR_pwarning(904, A_HARR(NRVACTR,(*(&(YQVACTR_rhsidinfo->Name))),A68_VC )));
 /* line 238: */
ORVACTR.data[0] = QRVACTR;
ORVACTR.data[1] = (*(&(YQVACTR_rhsidinfo->Name)));
ORVACTR.data[2] = SRVACTR;
 /* line 239: */
JDAAOSF_concat( A_HISVEC(TRVACTR,ORVACTR,3,A68_VC ), &URVACTR );
ZCAAOSF_makervc( URVACTR, &VRVACTR );
ARVACTR = VRVACTR;
} 
} 
WRVACTR = (&(NL(WPVACTR_idinfo)->Rhs)) ;
(*WRVACTR) = ARVACTR;
 /* line 241: */
 /* line 242: */
XRVACTR = NL(DQVACTR_kept);
if ( XRVACTR )
{XRVACTR = LCPACTR_rscompatiblewithpreviousversion;
}
 /* line 244: */
if (XRVACTR)
{ 
 /* line 245: */
{ 
YRVACTR = 1 ;
ZRVACTR = (*(&((&A_R1INDEX(RCPACTR_specs,YRVACTR))->Keptinfo))) ;
ASVACTR = JNVACTR_keeplistposition(NL(Decno)) ;
BSVACTR_keptinfo = (&A_VINDEX(ZRVACTR,ASVACTR));
 /* line 246: */
CSVACTR = A_VC_NE(QQVACTR_definition,(*(&(BSVACTR_keptinfo->Definition))));
if ( ! CSVACTR )
{ /* line 247: */
CSVACTR = A_VC_NE((*(&(NL(WPVACTR_idinfo)->Rhs))),(*(&(BSVACTR_keptinfo->Rhs))));
}
 /* line 248: */
DSVACTR = CSVACTR;
if (DSVACTR)
{ 
MCPACTR_transcompatiblewithpreviousversi = A68_FALSE;
 /* line 249: */
ESVACTR = 1 ;
FSVACTR = (&((&A_R1INDEX(RCPACTR_specs,ESVACTR))->Timeoflastchange)) ;
(void)((*FSVACTR) = (*(&((&IYIACTR_config_info)->Translationtime))));
 /* line 250: */
GSVACTR = (&(NL(WPVACTR_idinfo)->Prefix)) ;
(void)((*GSVACTR) = QIMACTR_newuniquename());
 /* line 251: */
 /* line 252: */
JSVACTR = (*(&(NL(WPVACTR_idinfo)->Prefix))) ;
HSVACTR.data[0] = A_HISVEC(ISVACTR,JSVACTR,7,A68_CHAR );
HSVACTR.data[1] = A_HVEC(KSVACTR,'_',A68_CHAR );
RRKACTR_afterbang( (*(&(NL(WPVACTR_idinfo)->Name))), &LSVACTR );
HSVACTR.data[2] = LSVACTR;
JDAAOSF_concat( A_HISVEC(MSVACTR,HSVACTR,3,A68_VC ), &NSVACTR );
OSVACTR.source = NSVACTR ;
PSVACTR = (&(NL(WPVACTR_idinfo)->C_name)) ;
(void)((*PSVACTR) = (OSVACTR.destination));
 /* line 253: */
QSVACTR.data[0] = SSVACTR;
UTKACTR_idfullname( NL(Decno), &TSVACTR );
QSVACTR.data[1] = TSVACTR;
QSVACTR.data[2] = A_HVEC(USVACTR,' ',A68_CHAR );
QSVACTR.data[3] = Rhs;
 /* line 254: */
JDAAOSF_concat( A_HISVEC(VSVACTR,QSVACTR,4,A68_VC ), &WSVACTR );
ZCAAOSF_makervc( WSVACTR, &XSVACTR );
QQVACTR_definition = XSVACTR;
} 
} 
} 
 /* line 257: */
ATVACTR = (*(&(NL(WPVACTR_idinfo)->Rhs))) ;
YSVACTR.data[0] = A_UNITE(ZSVACTR,mode2,2,ATVACTR);
YSVACTR.data[1] = A_UNITE(BTVACTR,mode4,4,EIAACTR_cnewline);
 /* line 258: */
(void)(MDMACTR_writecstream(A_HISVEC(CTVACTR,YSVACTR,2,A68_66 ), KSLACTR_nonlocdecstream(0)));
} 
 /* line 261: */
DTVACTR = (&(NL(WPVACTR_idinfo)->Cvariabletype)) ;
(void)((*DTVACTR) = (*(&(YQVACTR_rhsidinfo->Cvariabletype))));
 /* line 262: */
 /* line 263: */
 /* line 264: */
 /* line 265: */
ETVACTR = (&(NL(WPVACTR_idinfo)->Flags)) ;
(void)((*ETVACTR) = (A68_BITS )((*(&(NL(WPVACTR_idinfo)->Flags)))|(*(&(YQVACTR_rhsidinfo->Flags)))));
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 268: */
 /* line 269: */
 /* line 270: */
if (NL(DQVACTR_kept))
{ 
 /* line 271: */
ZCAAOSF_makervc( QQVACTR_definition, &FTVACTR );
GTVACTR = (&(NL(WPVACTR_idinfo)->Definition)) ;
(*GTVACTR) = FTVACTR;
} 
 /* line 273: */
HTVACTR = (&(NL(WPVACTR_idinfo)->Flags)) ;
(void)((*HTVACTR) = (A68_BITS )((*(&(NL(WPVACTR_idinfo)->Flags)))|HQKACTR_idoptimisedflag));
 /* line 275: */
ITVACTR.data[0] = A_UNITE(JTVACTR,mode2,2,QQVACTR_definition);
ITVACTR.data[1] = A_UNITE(KTVACTR,mode4,4,EIAACTR_cnewline);
 /* line 276: */
(void)(MDMACTR_writecstream(A_HISVEC(LTVACTR,ITVACTR,2,A68_66 ), KSLACTR_nonlocdecstream(0)));
} 
A_PROC_EXIT(optidentity);
return;
} 
#undef NL

A_STATIC A68_VOID  NTVACTR_declarecvariable(void *NonLocals)
#define NL(x) (((OTVACTR_declarecvariable *)NonLocals)->x)
{ 
A68_257  PTVACTR;  /* collateral clause result */
A68_BOOL  QTVACTR;  /* optbool result */
A68_BITS  RTVACTR;  /* ADICOPS - >= */
A68_66  UTVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  VTVACTR;  /* YIELD */
A68_66  YTVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ZTVACTR;  /* YIELD */
A68_VC  AUVACTR;  /* avoid structure result */
A68_66  BUVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  CUVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  DUVACTR;  /* YIELD */
A68_VC  EUVACTR;  /* avoid structure result */
A68_66  FUVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  IUVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  JUVACTR;  /* YIELD */
A68_66  KUVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  LUVACTR;  /* YIELD */
A68_66  OUVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  PUVACTR;  /* YIELD */
A68_BITS  QUVACTR;  /* ADICOPS - >= */
A68_66  VUVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  WUVACTR;  /* YIELD */
A68_66  ZUVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  AVVACTR;  /* YIELD */
A68_66  BVVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  CVVACTR;  /* OPERATORS - istruct -> vector */
A68_258  DVVACTR;  /* collateral clause result */
A68_VC  EVVACTR;  /* avoid structure result */
A68_66  FVVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  IVVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  JVVACTR;  /* YIELD */
A68_VC  KVVACTR;  /* avoid structure result */
A68_66  LVVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  MVVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  NVVACTR;  /* YIELD */
A68_66  OVVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  PVVACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(declarecvariable);
{ 
QTVACTR = (!NL(AQVACTR_global));
if ( ! QTVACTR )
{ /* line 282: */
RTVACTR = (*(&(NL(WPVACTR_idinfo)->Flags))) ;
QTVACTR = A_LB_GE(RTVACTR,CQKACTR_idkeptflag);
}
 /* line 283: */
if (QTVACTR)
{ 
 /* line 284: */
VTVACTR = TTVACTR ;
PTVACTR.data[0] = A_UNITE(UTVACTR,mode2,2,VTVACTR);
} 
else
{ 
 /* line 285: */
ZTVACTR = XTVACTR ;
PTVACTR.data[0] = A_UNITE(YTVACTR,mode2,2,ZTVACTR);
} 
BLNACTR_cvartype( (*(&(NL(WPVACTR_idinfo)->Cvariabletype))), &AUVACTR );
PTVACTR.data[1] = A_UNITE(BUVACTR,mode2,2,AUVACTR);
 /* line 286: */
DUVACTR = ' ' ;
PTVACTR.data[2] = A_UNITE(CUVACTR,mode1,1,DUVACTR);
UTKACTR_idfullname( NL(Decno), &EUVACTR );
PTVACTR.data[3] = A_UNITE(FUVACTR,mode2,2,EUVACTR);
 /* line 287: */
JUVACTR = HUVACTR ;
PTVACTR.data[4] = A_UNITE(IUVACTR,mode2,2,JUVACTR);
if (NL(AQVACTR_global))
{ 
LUVACTR = ';' ;
PTVACTR.data[5] = A_UNITE(KUVACTR,mode1,1,LUVACTR);
} 
else
{ 
 /* line 288: */
PUVACTR = NUVACTR ;
PTVACTR.data[5] = A_UNITE(OUVACTR,mode2,2,PUVACTR);
} 
 /* line 289: */
QUVACTR = (*(&(NL(WPVACTR_idinfo)->Flags))) ;
if (A_LB_GE(QUVACTR,IQKACTR_idopflag))
{ 
 /* line 290: */
 /* line 291: */
WUVACTR = A_VC_PLUS(A_VC_PLUS(TUVACTR,(*(&(NL(WPVACTR_idinfo)->Name)))),UUVACTR) ;
PTVACTR.data[6] = A_UNITE(VUVACTR,mode2,2,WUVACTR);
} 
else
{ 
 /* line 293: */
AVVACTR = YUVACTR ;
PTVACTR.data[6] = A_UNITE(ZUVACTR,mode2,2,AVVACTR);
} 
PTVACTR.data[7] = A_UNITE(BVVACTR,mode4,4,EIAACTR_cnewline);
 /* line 294: */
(void)(MDMACTR_writecstream(A_HISVEC(CVVACTR,PTVACTR,8,A68_66 ), NL(FQVACTR_decstream)));
 /* line 296: */
 /* line 297: */
 /* line 298: */
if (NL(Initvalue)!=(A68_98 *)A68_NIL)
{ 
UTKACTR_idfullname( NL(Decno), &EVVACTR );
DVVACTR.data[0] = A_UNITE(FVVACTR,mode2,2,EVVACTR);
 /* line 299: */
JVVACTR = HVVACTR ;
DVVACTR.data[1] = A_UNITE(IVVACTR,mode2,2,JVVACTR);
BEQACTR_bracketcfragment( NL(Initvalue), &KVVACTR );
DVVACTR.data[2] = A_UNITE(LVVACTR,mode2,2,KVVACTR);
 /* line 301: */
NVVACTR = ';' ;
DVVACTR.data[3] = A_UNITE(MVVACTR,mode1,1,NVVACTR);
DVVACTR.data[4] = A_UNITE(OVVACTR,mode4,4,EIAACTR_cnewline);
 /* line 302: */
 /* line 303: */
 /* line 304: */
(void)(MDMACTR_writecstream(A_HISVEC(PVVACTR,DVVACTR,5,A68_66 ), NL(GQVACTR_codestream)));
} 
} 
A_PROC_EXIT(declarecvariable);
return;
} 
#undef NL

A_STATIC A68_98 * QYVACTR_assignment(A68_98 * OYVACTR_anonymous, A68_98  PYVACTR_anonymous)
{ 
A68_INT * RYVACTR;  /* YIELD */
A68_BITS * SYVACTR;  /* YIELD */
A68_98 * BZVACTR;  /* clause result */
{ 
RYVACTR = (&(OYVACTR_anonymous->Mode)) ;
(*RYVACTR) = PYVACTR_anonymous.Mode;
SYVACTR = (&(OYVACTR_anonymous->Info)) ;
(*SYVACTR) = PYVACTR_anonymous.Info;
(void)(VYVACTR_assignment((&(OYVACTR_anonymous->Extra)), PYVACTR_anonymous.Extra));
BZVACTR = OYVACTR_anonymous;
} 
return( BZVACTR );
} 
#undef NL

A_STATIC A68_VOID  UGWACTR_generator(A68_BOOL  SGWACTR_anonymous, A68_279  *ReturnedValue, void *NonLocals)
#define NL(x) (((VGWACTR_generator *)NonLocals)->x)
{ 
A68_279  WGWACTR;  /* clause result */
A68_279  XGWACTR;  /* OPERATORS - dynamic generator */
{ 
XGWACTR.upb = NL(LGWACTR_a68paramcount) ;
( SGWACTR_anonymous? A_VLOC(A68_VC ,XGWACTR): A_VHEAP(A68_VC ,XGWACTR) );
WGWACTR = XGWACTR;
} 
*ReturnedValue = (WGWACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  MHWACTR_prototype(A68_INT  Protostream, void *NonLocals)
#define NL(x) (((NHWACTR_prototype *)NonLocals)->x)
{ 
A68_269  OHWACTR;  /* collateral clause result */
A68_66  PHWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  SHWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  THWACTR;  /* YIELD */
A68_66  WHWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  XHWACTR;  /* YIELD */
A68_VC  YHWACTR;  /* avoid structure result */
A68_66  ZHWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  AIWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  BIWACTR;  /* YIELD */
A68_66  CIWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  DIWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  EIWACTR;  /* YIELD */
A68_65  FIWACTR;  /* OPERATORS - istruct -> vector */
A68_66  IIWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  JIWACTR;  /* YIELD */
A68_65  KIWACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_281  LIWACTR;  /* collateral clause result */
A68_INT  MIWACTR;  /* YIELD */
A68_66  NIWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  OIWACTR;  /* YIELD */
A68_66  PIWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  QIWACTR;  /* YIELD */
A68_INT  RIWACTR;  /* YIELD */
A68_66  SIWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  TIWACTR;  /* YIELD */
A68_65  UIWACTR;  /* OPERATORS - istruct -> vector */
A68_INT  VIWACTR_i A_UNUSED = {0};
A68_INT  WIWACTR;  /* to part of loop */
A68_273  XIWACTR;  /* collateral clause result */
A68_66  AJWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  BJWACTR;  /* YIELD */
A68_66  CJWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  DJWACTR;  /* YIELD */
A68_66  EJWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  FJWACTR;  /* YIELD */
A68_66  GJWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  HJWACTR;  /* YIELD */
A68_65  IJWACTR;  /* OPERATORS - istruct -> vector */
A68_281  JJWACTR;  /* collateral clause result */
A68_66  MJWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  NJWACTR;  /* YIELD */
A68_66  QJWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  RJWACTR;  /* YIELD */
A68_VC  SJWACTR;  /* avoid structure result */
A68_66  TJWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  WJWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  XJWACTR;  /* YIELD */
A68_65  YJWACTR;  /* OPERATORS - istruct -> vector */
A68_256  ZJWACTR;  /* collateral clause result */
A68_BOOL  AKWACTR;  /* optbool result */
A68_66  DKWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  EKWACTR;  /* YIELD */
A68_66  HKWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  IKWACTR;  /* YIELD */
A68_66  LKWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  MKWACTR;  /* YIELD */
A68_65  NKWACTR;  /* OPERATORS - istruct -> vector */
A68_66  OKWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  PKWACTR;  /* YIELD */
A68_65  QKWACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(prototype);
 /* line 667: */
 /* line 668: */
{ 
 /* line 669: */
 /* line 670: */
OHWACTR.data[0] = A_UNITE(PHWACTR,mode4,4,EIAACTR_cnewline);
if (NL(Global)&NL(Kept))
{ 
THWACTR = RHWACTR ;
OHWACTR.data[1] = A_UNITE(SHWACTR,mode2,2,THWACTR);
} 
else
{ 
 /* line 671: */
XHWACTR = VHWACTR ;
OHWACTR.data[1] = A_UNITE(WHWACTR,mode2,2,XHWACTR);
} 
 /* line 672: */
XKNACTR_ctype( NL(JGWACTR_cresultmode), &YHWACTR );
OHWACTR.data[2] = A_UNITE(ZHWACTR,mode2,2,YHWACTR);
 /* line 673: */
BIWACTR = ' ' ;
OHWACTR.data[3] = A_UNITE(AIWACTR,mode1,1,BIWACTR);
 /* line 675: */
OHWACTR.data[4] = A_UNITE(CIWACTR,mode2,2,NL(RGWACTR_fnname));
EIWACTR = '(' ;
OHWACTR.data[5] = A_UNITE(DIWACTR,mode1,1,EIWACTR);
(void)(MDMACTR_writecstream(A_HISVEC(FIWACTR,OHWACTR,6,A68_66 ), Protostream));
 /* line 677: */
 /* line 678: */
 /* line 679: */
if (NL(MGWACTR_cparamcount)==0)
{ 
 /* line 680: */
 /* line 681: */
JIWACTR = HIWACTR ;
(void)(MDMACTR_writecstream(A_HVEC(KIWACTR,A_UNITE(IIWACTR,mode2,2,JIWACTR),A68_66 ), Protostream));
} 
else
{ 
 /* line 682: */
 /* line 683: */
if (NL(LGWACTR_a68paramcount)>0)
{ 
MIWACTR = 1 ;
OIWACTR = (*(&A_VINDEX(NL(AHWACTR_paramtypes),MIWACTR))) ;
LIWACTR.data[0] = A_UNITE(NIWACTR,mode2,2,OIWACTR);
QIWACTR = ' ' ;
LIWACTR.data[1] = A_UNITE(PIWACTR,mode1,1,QIWACTR);
RIWACTR = 1 ;
TIWACTR = (*(&A_VINDEX(NL(YGWACTR_paramnames),RIWACTR))) ;
LIWACTR.data[2] = A_UNITE(SIWACTR,mode2,2,TIWACTR);
(void)(MDMACTR_writecstream(A_HISVEC(UIWACTR,LIWACTR,3,A68_66 ), Protostream));
 /* line 684: */
 /* line 685: */
WIWACTR = NL(LGWACTR_a68paramcount);
for ( VIWACTR_i = 2;
VIWACTR_i <= WIWACTR;
VIWACTR_i += 1 )
{ 
 /* line 686: */
BJWACTR = ZIWACTR ;
XIWACTR.data[0] = A_UNITE(AJWACTR,mode2,2,BJWACTR);
DJWACTR = (*(&A_VINDEX(NL(AHWACTR_paramtypes),VIWACTR_i))) ;
XIWACTR.data[1] = A_UNITE(CJWACTR,mode2,2,DJWACTR);
FJWACTR = ' ' ;
XIWACTR.data[2] = A_UNITE(EJWACTR,mode1,1,FJWACTR);
HJWACTR = (*(&A_VINDEX(NL(YGWACTR_paramnames),VIWACTR_i))) ;
XIWACTR.data[3] = A_UNITE(GJWACTR,mode2,2,HJWACTR);
 /* line 687: */
(void)(MDMACTR_writecstream(A_HISVEC(IJWACTR,XIWACTR,4,A68_66 ), Protostream));
}
 /* line 688: */
} 
 /* line 691: */
 /* line 692: */
 /* line 693: */
if (NL(HGWACTR_usetempforresult))
{ 
 /* line 694: */
if (NL(LGWACTR_a68paramcount)!=0)
{ 
NJWACTR = LJWACTR ;
JJWACTR.data[0] = A_UNITE(MJWACTR,mode2,2,NJWACTR);
} 
else
{ 
 /* line 695: */
RJWACTR = PJWACTR ;
JJWACTR.data[0] = A_UNITE(QJWACTR,mode2,2,RJWACTR);
} 
 /* line 696: */
XKNACTR_ctype( NL(Resultmode), &SJWACTR );
JJWACTR.data[1] = A_UNITE(TJWACTR,mode2,2,SJWACTR);
XJWACTR = VJWACTR ;
JJWACTR.data[2] = A_UNITE(WJWACTR,mode2,2,XJWACTR);
 /* line 697: */
(void)(MDMACTR_writecstream(A_HISVEC(YJWACTR,JJWACTR,3,A68_66 ), Protostream));
} 
 /* line 698: */
 /* line 699: */
 /* line 700: */
if (NL(KGWACTR_fulldec))
{ 
 /* line 701: */
AKWACTR = NL(HGWACTR_usetempforresult);
if ( ! AKWACTR )
{AKWACTR = (NL(LGWACTR_a68paramcount)!=0);
}
if (AKWACTR)
{ 
EKWACTR = CKWACTR ;
ZJWACTR.data[0] = A_UNITE(DKWACTR,mode2,2,EKWACTR);
} 
else
{ 
 /* line 703: */
IKWACTR = GKWACTR ;
ZJWACTR.data[0] = A_UNITE(HKWACTR,mode2,2,IKWACTR);
} 
MKWACTR = KKWACTR ;
ZJWACTR.data[1] = A_UNITE(LKWACTR,mode2,2,MKWACTR);
 /* line 704: */
 /* line 705: */
(void)(MDMACTR_writecstream(A_HISVEC(NKWACTR,ZJWACTR,2,A68_66 ), Protostream));
} 
} 
 /* line 707: */
 /* line 708: */
PKWACTR = ')' ;
(void)(MDMACTR_writecstream(A_HVEC(QKWACTR,A_UNITE(OKWACTR,mode1,1,PKWACTR),A68_66 ), Protostream));
} 
A_PROC_EXIT(prototype);
return;
} 
#undef NL

A_STATIC A68_VOID  ITWACTR_mybefore(A68_VC  S, A68_CHAR  C, A68_VC  *ReturnedValue)
{ 
A68_VC  JTWACTR;  /* clause result */
A68_VC  KTWACTR;  /* OPERATORS - trim index */
A_PROC_ENTRY(mybefore);
JTWACTR = A_VTRIM(KTWACTR,(S),A_VTSCRIPT(&(KTWACTR.upb),(S).upb,1,KMAAOSF_truncate(C, S)));
A_PROC_EXIT(mybefore);
*ReturnedValue = (JTWACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HVWACTR_generator(A68_BOOL  FVWACTR_anonymous, A68_181  *ReturnedValue, void *NonLocals)
#define NL(x) (((IVWACTR_generator *)NonLocals)->x)
{ 
A68_181  JVWACTR;  /* clause result */
A68_181  KVWACTR;  /* OPERATORS - dynamic generator */
{ 
KVWACTR.upb = 0 ;
( FVWACTR_anonymous? A_VLOC(A68_INT ,KVWACTR): A_VHEAP(A68_INT ,KVWACTR) );
JVWACTR = KVWACTR;
} 
*ReturnedValue = (JVWACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  TMVACTR_debugmessage(A68_INT  Level, A68_VC  M)
{ 
A68_VC  ZMVACTR;  /* avoid structure result */
A_PROC_ENTRY(debugmessage);
 /* line 49: */
 /* line 50: */
 /* line 51: */
if (ZCHACTR_tracelevel(VMVACTR)>=Level)
{ 
 /* line 52: */
ROAAOSF_whole( Level, 0, &ZMVACTR );
(void)(A_CALLPROC(MSIACTR_list,(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(YMVACTR,ZMVACTR),ANVACTR),M)),(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(YMVACTR,ZMVACTR),ANVACTR),M),(MSIACTR_list).nonlocals)));
} 
A_PROC_EXIT(debugmessage);
return;
} 
#undef NL

A68_VOID  CNVACTR_initialdummydec(A68_130  Dummydec)
{ 
A68_72  FNVACTR;  /* collateral clause result */
A68_INT  GNVACTR;  /* YIELD */
A68_72 * HNVACTR;  /* YIELD */
A_PROC_ENTRY(initialdummydec);
 /* line 59: */
 /* line 60: */
{ 
(void)(WXIACTR_assert(ENVACTR, (Dummydec.Type==8)));
 /* line 61: */
FNVACTR.Level = 1;
 /* line 62: */
FNVACTR.Block = 0;
GNVACTR = Dummydec.Decno ;
HNVACTR = (&((&A_R1INDEX(WPKACTR_ids,GNVACTR))->Environ)) ;
(*HNVACTR) = FNVACTR;
} 
A_PROC_EXIT(initialdummydec);
return;
} 
#undef NL

A_STATIC A68_INT  JNVACTR_keeplistposition(A68_INT  Decno)
{ 
A68_INT  KNVACTR_pos A_UNUSED = {0};
A68_BOOL  LNVACTR_found A_UNUSED = {0};
A68_INT  MNVACTR_upbkepts A_UNUSED = {0};
A68_BOOL  NNVACTR;  /* optbool result */
A68_INT  ONVACTR;  /* YIELD */
A68_INT  RNVACTR;  /* clause result */
A_PROC_ENTRY(keeplistposition);
 /* line 73: */
 /* line 74: */
{ 
KNVACTR_pos = 0;
 /* line 75: */
LNVACTR_found = A68_FALSE;
 /* line 76: */
MNVACTR_upbkepts = ICPACTR_keptdecnos.dim[0].upb;
 /* line 77: */
for ( ;; )
{ 
NNVACTR = (!LNVACTR_found);
if ( NNVACTR )
{ /* line 78: */
NNVACTR = (KNVACTR_pos<MNVACTR_upbkepts);
}
if ( !(NNVACTR) ) break;
 /* line 79: */
ONVACTR = KNVACTR_pos+=1 ;
(void)(LNVACTR_found = ((*(&A_R1INDEX(ICPACTR_keptdecnos,ONVACTR)))==Decno));
}
 /* line 80: */
(void)(WXIACTR_assert(QNVACTR, LNVACTR_found));
 /* line 81: */
 /* line 82: */
RNVACTR = KNVACTR_pos;
} 
A_PROC_EXIT(keeplistposition);
return( RNVACTR );
} 
#undef NL
 /* line 86: */
 /* line 87: */
 /* line 88: */
 /* line 89: */
 /* line 90: */
 /* line 92: */

A_STATIC A68_VOID  ZNVACTR_newidinfo(A68_INT  Decno, A68_INT  Mode, A68_VC  A68name, A68_56  Prefix, A68_BITS  Flags, A68_VC  Definition, A68_VC  Rhs)
{ 
A68_108 * AOVACTR_newid A_UNUSED = {0};
A68_BOOL  BOVACTR;  /* optbool result */
A68_INT  COVACTR_cvariabletype A_UNUSED = {0};
A68_VC  DOVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  EOVACTR;  /* OPERATORS - istruct -> vector */
A68_BITS  FOVACTR;  /* ADICOPS - >= */
A68_BOOL  GOVACTR;  /* optbool result */
A68_VC  HOVACTR;  /* OPERATORS - istruct -> vector */
A68_INT  IOVACTR;  /* YIELD */
A68_155  JOVACTR;  /* OPERATORS - simple index */
A68_INT  KOVACTR;  /* YIELD */
A68_VC  LOVACTR;  /* OPERATORS - istruct -> vector */
A68_56  MOVACTR;  /* OPERATORS - istruct -> vector */
A68_INT  NOVACTR;  /* YIELD */
A68_LINT * OOVACTR;  /* YIELD */
A68_56  POVACTR;  /* clause result */
A68_72  QOVACTR;  /* avoid structure result */
A68_BOOL  ROVACTR;  /* optbool result */
A68_BITS  SOVACTR;  /* ADICOPS - >= */
A68_INT  TOVACTR;  /* YIELD */
A68_155  UOVACTR;  /* OPERATORS - simple index */
A68_INT  VOVACTR;  /* YIELD */
A68_157 * WOVACTR_keptinfo A_UNUSED = {0};
A68_BOOL  XOVACTR;  /* optbool result */
A68_BOOL  YOVACTR;  /* optbool result */
A68_BOOL  ZOVACTR;  /* clause result */
A68_INT  APVACTR;  /* YIELD */
A68_LINT * BPVACTR;  /* YIELD */
A68_56  CPVACTR_newidprefix A_UNUSED = {0};
A68_BITS  DPVACTR;  /* clause result */
A68_BITS  EPVACTR_new_flags A_UNUSED = {0};
A68_BOOL  FPVACTR;  /* optbool result */
A68_INT  GPVACTR;  /* YIELD */
A68_VC  HPVACTR;  /* clause result */
A68_VC  IPVACTR;  /* avoid structure result */
A68_VC  KPVACTR;  /* clause result */
A68_VC  MPVACTR;  /* avoid structure result */
A68_VC  NPVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  OPVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} PPVACTR; 
A68_VC  QPVACTR_c_name A_UNUSED = {0};
A68_108  RPVACTR;  /* collateral clause result */
A68_72  SPVACTR;  /* avoid structure result */
A_PROC_ENTRY(newidinfo);
 /* line 97: */
 /* line 98: */
{ 
AOVACTR_newid = YQKACTR_get_idinfo(Decno);
 /* line 100: */
 /* line 101: */
BOVACTR = A_LB_GE(Flags,BQKACTR_ididentityflag);
if ( BOVACTR )
{BOVACTR = (!A_LB_GE(Flags,HQKACTR_idoptimisedflag));
}
 /* line 102: */
if ( ! BOVACTR )
{BOVACTR = A_LB_GE(Flags,EQKACTR_idforallflag);
}
 /* line 103: */
if ( ! BOVACTR )
{BOVACTR = A_LB_GE(Flags,GQKACTR_idformalflag);
}
COVACTR_cvariabletype = TKNACTR_givecvariabletype(Mode, BOVACTR);
 /* line 106: */
 /* line 107: */
 /* line 108: */
 /* line 109: */
 /* line 110: */
if (A_VC_NE(A_HISVEC(DOVACTR,Prefix,7,A68_CHAR ),A_HISVEC(EOVACTR,RNOACTR_nulluname,7,A68_CHAR )))
{ 
 /* line 111: */
 /* line 112: */
FOVACTR = (*(&(AOVACTR_newid->Flags))) ;
GOVACTR = A_LB_GE(FOVACTR,CQKACTR_idkeptflag);
if ( GOVACTR )
{GOVACTR = LCPACTR_rscompatiblewithpreviousversion;
}
if ( GOVACTR )
{ /* line 113: */
 /* line 114: */
IOVACTR = 1 ;
JOVACTR = (*(&((&A_R1INDEX(RCPACTR_specs,IOVACTR))->Keptinfo))) ;
KOVACTR = JNVACTR_keeplistposition(Decno) ;
MOVACTR = (*(&((&A_VINDEX(JOVACTR,KOVACTR))->Prefix))) ;
GOVACTR = A_VC_NE(A_HISVEC(HOVACTR,Prefix,7,A68_CHAR ),A_HISVEC(LOVACTR,MOVACTR,7,A68_CHAR ));
}
 /* line 115: */
if (GOVACTR)
{ 
MCPACTR_transcompatiblewithpreviousversi = A68_FALSE;
 /* line 116: */
 /* line 118: */
NOVACTR = 1 ;
OOVACTR = (&((&A_R1INDEX(RCPACTR_specs,NOVACTR))->Timeoflastchange)) ;
(void)((*OOVACTR) = (*(&((&IYIACTR_config_info)->Translationtime))));
} 
 /* line 119: */
 /* line 120: */
 /* line 122: */
POVACTR = Prefix;
} 
else
{ 
QPLACTR_currentenviron(  &QOVACTR );
ROVACTR = (!PRLACTR_isgloballevel(QOVACTR));
if ( ! ROVACTR )
{ /* line 124: */
SOVACTR = (*(&(AOVACTR_newid->Flags))) ;
ROVACTR = (!A_LB_GE(SOVACTR,CQKACTR_idkeptflag));
}
 /* line 125: */
if ( ! ROVACTR )
{ROVACTR = (!LCPACTR_rscompatiblewithpreviousversion);
}
 /* line 126: */
if (ROVACTR)
{ 
 /* line 127: */
POVACTR = QIMACTR_newuniquename();
} 
else
{ 
{ 
TOVACTR = 1 ;
UOVACTR = (*(&((&A_R1INDEX(RCPACTR_specs,TOVACTR))->Keptinfo))) ;
VOVACTR = JNVACTR_keeplistposition(Decno) ;
WOVACTR_keptinfo = (&A_VINDEX(UOVACTR,VOVACTR));
 /* line 130: */
 /* line 131: */
 /* line 132: */
XOVACTR = A_LB_GE(Flags,BQKACTR_ididentityflag);
if ( XOVACTR )
{XOVACTR = (!(*(&(WOVACTR_keptinfo->Iddec))));
}
 /* line 134: */
if ( ! XOVACTR )
{ /* line 135: */
 /* line 136: */
YOVACTR = A_LB_GE(Flags,HQKACTR_idoptimisedflag);
if ( YOVACTR )
{YOVACTR = (!(*(&(WOVACTR_keptinfo->Optimised))));
}
 /* line 137: */
XOVACTR = YOVACTR;
}
ZOVACTR = XOVACTR;
if (ZOVACTR)
{ 
MCPACTR_transcompatiblewithpreviousversi = A68_FALSE;
 /* line 138: */
APVACTR = 1 ;
BPVACTR = (&((&A_R1INDEX(RCPACTR_specs,APVACTR))->Timeoflastchange)) ;
(void)((*BPVACTR) = (*(&((&IYIACTR_config_info)->Translationtime))));
 /* line 139: */
 /* line 140: */
 /* line 142: */
POVACTR = QIMACTR_newuniquename();
} 
else
{ 
POVACTR = (*(&(WOVACTR_keptinfo->Prefix)));
} 
} 
} 
} 
CPVACTR_newidprefix = POVACTR;
 /* line 144: */
 /* line 146: */
if (TUKACTR_standopsym(A68name))
{ 
DPVACTR = IQKACTR_idopflag;
} 
else
{ 
DPVACTR = AQKACTR_idnoflags;
} 
EPVACTR_new_flags = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(AOVACTR_newid->Flags)))&NQKACTR_idpresetflags)|Flags)|DPVACTR);
 /* line 148: */
 /* line 149: */
 /* line 150: */
FPVACTR = A_LB_GE(Flags,GQKACTR_idformalflag);
if ( FPVACTR )
{FPVACTR = (A68name.upb>0);
}
if ( FPVACTR )
{ /* line 151: */
GPVACTR = 1 ;
FPVACTR = ((*(&A_VINDEX(A68name,GPVACTR)))!='!');
}
 /* line 153: */
if (FPVACTR)
{ 
 /* line 154: */
SNAAOSF_capitalised( A68name, &IPVACTR );
HPVACTR = IPVACTR;
} 
else
{ 
if (A_LB_GE(EPVACTR_new_flags,IQKACTR_idopflag))
{ 
KPVACTR = LPVACTR;
} 
else
{ 
RRKACTR_afterbang( A68name, &MPVACTR );
KPVACTR = MPVACTR;
} 
 /* line 155: */
PPVACTR.source = A_VC_PLUS(A_VC_PLUS(A_HISVEC(NPVACTR,CPVACTR_newidprefix,7,A68_CHAR ),A_HVEC(OPVACTR,'_',A68_CHAR )),KPVACTR) ;
HPVACTR = (PPVACTR.destination);
} 
QPVACTR_c_name = HPVACTR;
 /* line 157: */
 /* line 158: */
 /* line 159: */
RPVACTR.Mode = Mode;
 /* line 160: */
RPVACTR.Cvariabletype = COVACTR_cvariabletype;
 /* line 161: */
QPLACTR_currentenviron(  &SPVACTR );
RPVACTR.Environ = SPVACTR;
 /* line 162: */
RPVACTR.Name = A68name;
 /* line 163: */
RPVACTR.C_name = QPVACTR_c_name;
 /* line 164: */
RPVACTR.Prefix = CPVACTR_newidprefix;
 /* line 165: */
RPVACTR.Flags = EPVACTR_new_flags;
 /* line 167: */
RPVACTR.Definition = Definition;
 /* line 168: */
RPVACTR.Rhs = Rhs;
(*AOVACTR_newid) = RPVACTR;
} 
A_PROC_EXIT(newidinfo);
return;
} 
#undef NL

A_STATIC A68_VOID  VPVACTR_outputcdeclaration(A68_INT  Decno, A68_98 * Initvalue)
{ 
A68_108 * WPVACTR_idinfo A_UNUSED = {0};
A68_INT  XPVACTR_level A_UNUSED = {0};
A68_INT  YPVACTR_block A_UNUSED = {0};
A68_BOOL  ZPVACTR;  /* optbool result */
A68_BOOL  AQVACTR_global A_UNUSED = {0};
A68_BOOL  BQVACTR;  /* optbool result */
A68_BITS  CQVACTR;  /* ADICOPS - >= */
A68_BOOL  DQVACTR_kept A_UNUSED = {0};
A68_INT  EQVACTR;  /* clause result */
A68_INT  FQVACTR_decstream A_UNUSED = {0};
A68_INT  GQVACTR_codestream A_UNUSED = {0};
A68_59  IQVACTR_optidentity;   /* proc value of non-global proc */
A68_60  MTVACTR_declarecvariable;   /* proc value of non-global proc */
A68_BOOL  QVVACTR;  /* optbool result */
A68_BITS  RVVACTR;  /* ADICOPS - >= */
A68_99  SVVACTR;  /* united object - for case conformity */
A68_VC  TVVACTR;  /* avoid structure result */
A68_VC  UVVACTR_cf A_UNUSED = {0};
A68_BOOL  VVVACTR;  /* optbool result */
A68_BOOL  WVVACTR;  /* optbool result */
A68_BITS  XVVACTR;  /* ADICOPS - >= */
A68_101  YVVACTR_id A_UNUSED = {0};
A68_108 * ZVVACTR;  /* clause result */
A68_108 * AWVACTR_rhsidinfo A_UNUSED = {0};
A68_BOOL  BWVACTR;  /* optbool result */
A68_BITS  CWVACTR;  /* ADICOPS - >= */
A68_BOOL  DWVACTR;  /* optbool result */
A68_BITS  EWVACTR;  /* ADICOPS - >= */
A68_BOOL  FWVACTR;  /* clause result */
A68_VC  GWVACTR;  /* avoid structure result */
A_PROC_ENTRY(outputcdeclaration);
 /* line 184: */
 /* line 185: */
{ 
WPVACTR_idinfo = YQKACTR_get_idinfo(Decno);
 /* line 186: */
XPVACTR_level = (*(&((&(WPVACTR_idinfo->Environ))->Level)));
 /* line 187: */
YPVACTR_block = (*(&((&(WPVACTR_idinfo->Environ))->Block)));
 /* line 188: */
ZPVACTR = (XPVACTR_level==0);
if ( ZPVACTR )
{ZPVACTR = (YPVACTR_block==0);
}
AQVACTR_global = ZPVACTR;
 /* line 189: */
BQVACTR = AQVACTR_global;
if ( BQVACTR )
{CQVACTR = (*(&(WPVACTR_idinfo->Flags))) ;
BQVACTR = A_LB_GE(CQVACTR,CQKACTR_idkeptflag);
}
DQVACTR_kept = BQVACTR;
 /* line 191: */
 /* line 192: */
 /* line 193: */
 /* line 194: */
if (AQVACTR_global)
{ 
 /* line 195: */
EQVACTR = KSLACTR_nonlocdecstream(XPVACTR_level);
} 
else
{ 
EQVACTR = QSLACTR_locdecstream(XPVACTR_level);
} 
FQVACTR_decstream = EQVACTR;
 /* line 197: */
GQVACTR_codestream = NSLACTR_codestream(XPVACTR_level);
 /* line 199: */
A_CLOSURE( IQVACTR_optidentity, JQVACTR_optidentity, KQVACTR_optidentity );
(( KQVACTR_optidentity * ) ( IQVACTR_optidentity.nonlocals )) -> Decno = Decno;
(( KQVACTR_optidentity * ) ( IQVACTR_optidentity.nonlocals )) -> Initvalue = Initvalue;
(( KQVACTR_optidentity * ) ( IQVACTR_optidentity.nonlocals )) -> DQVACTR_kept = DQVACTR_kept;
(( KQVACTR_optidentity * ) ( IQVACTR_optidentity.nonlocals )) -> WPVACTR_idinfo = WPVACTR_idinfo;
 /* line 278: */
 /* line 279: */
 /* line 281: */
A_CLOSURE( MTVACTR_declarecvariable, NTVACTR_declarecvariable, OTVACTR_declarecvariable );
(( OTVACTR_declarecvariable * ) ( MTVACTR_declarecvariable.nonlocals )) -> AQVACTR_global = AQVACTR_global;
(( OTVACTR_declarecvariable * ) ( MTVACTR_declarecvariable.nonlocals )) -> WPVACTR_idinfo = WPVACTR_idinfo;
(( OTVACTR_declarecvariable * ) ( MTVACTR_declarecvariable.nonlocals )) -> Decno = Decno;
(( OTVACTR_declarecvariable * ) ( MTVACTR_declarecvariable.nonlocals )) -> FQVACTR_decstream = FQVACTR_decstream;
(( OTVACTR_declarecvariable * ) ( MTVACTR_declarecvariable.nonlocals )) -> Initvalue = Initvalue;
(( OTVACTR_declarecvariable * ) ( MTVACTR_declarecvariable.nonlocals )) -> GQVACTR_codestream = GQVACTR_codestream;
 /* line 306: */
 /* line 307: */
QVVACTR = (Initvalue!=(A68_98 *)A68_NIL);
if ( QVVACTR )
{ /* line 308: */
RVVACTR = (*(&(WPVACTR_idinfo->Flags))) ;
QVVACTR = A_LB_GE(RVVACTR,BQKACTR_ididentityflag);
}
if (QVVACTR)
{ 
 /* line 309: */
SVVACTR = (*(&(Initvalue->Extra))) ;
switch ( SVVACTR.mode )
{ 
case 1: /* LONG BITS */
 /* line 310: */
 /* line 311: */
UZPACTR_getcfragment( Initvalue, &TVVACTR );
(void)(A_CALLPROC(IQVACTR_optidentity,(TVVACTR),(TVVACTR,(IQVACTR_optidentity).nonlocals)));
break;
case 6: /* VECTOR [] CHAR */
UVVACTR_cf = (SVVACTR.data.mode6);
 /* line 312: */
 /* line 313: */
 /* line 314: */
VVVACTR = IWPACTR_hasattribute(Initvalue, QKJACTR_constant);
if ( VVVACTR )
{ /* line 315: */
VVVACTR = (!IWPACTR_hasattribute(Initvalue, WKJACTR_isnil));
}
 /* line 316: */
if ( VVVACTR )
{ /* line 317: */
VVVACTR = (IOMACTR_modetype((*(&(Initvalue->Mode))))==EEAACTR_primitive);
}
 /* line 318: */
if ( ! VVVACTR )
{ /* line 319: */
 /* line 320: */
WVVACTR = IWPACTR_hasattribute(Initvalue, (A68_BITS )(QKJACTR_constant|WKJACTR_isnil));
if ( WVVACTR )
{ /* line 255: */
 /* line 321: */
XVVACTR = (*(&(WPVACTR_idinfo->Flags))) ;
WVVACTR = (!A_LB_GE(XVVACTR,CQKACTR_idkeptflag));
}
 /* line 322: */
VVVACTR = WVVACTR;
}
if (VVVACTR)
{ 
 /* line 323: */
 /* line 324: */
(void)(A_CALLPROC(IQVACTR_optidentity,(UVVACTR_cf),(UVVACTR_cf,(IQVACTR_optidentity).nonlocals)));
} 
else
{ 
 /* line 325: */
(void)(A_CALLPROC(MTVACTR_declarecvariable,(),((MTVACTR_declarecvariable).nonlocals)));
} 
break;
case 4: /* STRUCT(INT)  */
YVVACTR_id = (SVVACTR.data.mode4);
 /* line 326: */
 /* line 327: */
{ 
 /* line 328: */
 /* line 329: */
if (YVVACTR_id.Idno==VPKACTR_alienidno)
{ 
ZVVACTR = (&UPKACTR_alienidinfo);
} 
else
{ 
 /* line 330: */
ZVVACTR = YQKACTR_get_idinfo(YVVACTR_id.Idno);
} 
AWVACTR_rhsidinfo = ZVVACTR;
 /* line 331: */
 /* line 332: */
 /* line 333: */
BWVACTR = PRLACTR_isgloballevel((*(&(AWVACTR_rhsidinfo->Environ))));
if ( BWVACTR )
{ /* line 334: */
BWVACTR = ((*(&(WPVACTR_idinfo->Mode)))==(*(&(AWVACTR_rhsidinfo->Mode))));
}
 /* line 337: */
if ( BWVACTR )
{ /* line 338: */
CWVACTR = (*(&(WPVACTR_idinfo->Flags))) ;
DWVACTR = (!A_LB_GE(CWVACTR,CQKACTR_idkeptflag));
if ( ! DWVACTR )
{ /* line 339: */
DWVACTR = (YVVACTR_id.Idno==VPKACTR_alienidno);
}
if ( ! DWVACTR )
{ /* line 340: */
EWVACTR = (*(&(AWVACTR_rhsidinfo->Flags))) ;
DWVACTR = A_LB_GE(EWVACTR,CQKACTR_idkeptflag);
}
 /* line 341: */
BWVACTR = DWVACTR;
}
FWVACTR = BWVACTR;
if (FWVACTR)
{ 
 /* line 342: */
 /* line 343: */
UTKACTR_idfullname( YVVACTR_id.Idno, &GWVACTR );
(void)(A_CALLPROC(IQVACTR_optidentity,(GWVACTR),(GWVACTR,(IQVACTR_optidentity).nonlocals)));
} 
else
{ 
 /* line 345: */
(void)(A_CALLPROC(MTVACTR_declarecvariable,(),((MTVACTR_declarecvariable).nonlocals)));
} 
} 
break;
default: 
 /* line 346: */
 /* line 347: */
(void)(A_CALLPROC(MTVACTR_declarecvariable,(),((MTVACTR_declarecvariable).nonlocals)));
break;
} 
} 
else
{ 
 /* line 348: */
(void)(A_CALLPROC(MTVACTR_declarecvariable,(),((MTVACTR_declarecvariable).nonlocals)));
} 
} 
A_PROC_EXIT(outputcdeclaration);
return;
} 
#undef NL

A68_VOID  JWVACTR_iddec(A68_130  Identifierdec, A68_105 ** Valuestack)
{ 
A68_INT  SWVACTR_type A_UNUSED = {0};
A68_INT  TWVACTR_mode A_UNUSED = {0};
A68_INT  UWVACTR_decno A_UNUSED = {0};
A68_VC  VWVACTR_name A_UNUSED = {0};
A68_108 * WWVACTR_newid A_UNUSED = {0};
A68_98 * YWVACTR_initialvalue A_UNUSED = {0};
A68_VC  ZWVACTR;  /* OPERATORS - nil -> mode */
A68_VC  AXVACTR;  /* OPERATORS - nil -> mode */
A68_VC  BXVACTR;  /* OPERATORS - nil -> mode */
A68_VC  CXVACTR;  /* OPERATORS - nil -> mode */
A68_VC  DXVACTR;  /* OPERATORS - nil -> mode */
A68_VC  EXVACTR;  /* OPERATORS - nil -> mode */
A68_VC  FXVACTR;  /* OPERATORS - nil -> mode */
A68_VC  GXVACTR;  /* OPERATORS - nil -> mode */
A68_VC  HXVACTR;  /* OPERATORS - nil -> mode */
A68_VC  IXVACTR;  /* OPERATORS - nil -> mode */
A68_98 * JXVACTR_initialvalue A_UNUSED = {0};
A68_INT  MXVACTR_rowmode A_UNUSED = {0};
A68_INT  NXVACTR_forallmode A_UNUSED = {0};
A68_VC  OXVACTR;  /* OPERATORS - nil -> mode */
A68_VC  PXVACTR;  /* OPERATORS - nil -> mode */
A68_108  QXVACTR;  /* collateral clause result */
A68_72  RXVACTR;  /* avoid structure result */
A68_VC  SXVACTR;  /* OPERATORS - nil -> mode */
A68_VC  TXVACTR;  /* OPERATORS - nil -> mode */
A68_VC  UXVACTR;  /* OPERATORS - nil -> mode */
A_PROC_ENTRY(iddec);
 /* line 369: */
 /* line 370: */
{ 
 /* line 371: */
 /* line 372: */
 /* line 373: */
 /* line 374: */
 /* line 375: */
 /* line 376: */
 /* line 377: */
 /* line 379: */
SWVACTR_type = Identifierdec.Type;
 /* line 380: */
TWVACTR_mode = Identifierdec.Mode;
 /* line 381: */
UWVACTR_decno = Identifierdec.Decno;
 /* line 383: */
VWVACTR_name = Identifierdec.Name;
 /* line 384: */
WWVACTR_newid = YQKACTR_get_idinfo(UWVACTR_decno);
 /* line 386: */
 /* line 388: */
 /* line 389: */
switch ( SWVACTR_type )
{ 
case 1: 
 /* line 390: */
{ 
(void)(GMVACTR_evaluatestack(Valuestack));
 /* line 391: */
YWVACTR_initialvalue = (&((*Valuestack)->Value));
 /* line 392: */
(void)((*Valuestack) = (*(&((*Valuestack)->Rest))));
 /* line 393: */
(void)(ZNVACTR_newidinfo(UWVACTR_decno, TWVACTR_mode, VWVACTR_name, RNOACTR_nulluname, BQKACTR_ididentityflag, A_VVAC(AXVACTR), A_VVAC(ZWVACTR)));
 /* line 394: */
 /* line 395: */
 /* line 396: */
(void)(VPVACTR_outputcdeclaration(UWVACTR_decno, YWVACTR_initialvalue));
} 
break;
case 2: 
 /* line 397: */
{ 
 /* line 344: */
 /* line 398: */
 /* line 399: */
if (TWVACTR_mode>WFAACTR_refrefmark)
{ 
 /* line 400: */
(void)(MXIACTR_portabilitywarning(810));
} 
 /* line 401: */
(void)(ZNVACTR_newidinfo(UWVACTR_decno, TWVACTR_mode, VWVACTR_name, RNOACTR_nulluname, AQKACTR_idnoflags, A_VVAC(CXVACTR), A_VVAC(BXVACTR)));
 /* line 402: */
 /* line 403: */
 /* line 404: */
(void)(VPVACTR_outputcdeclaration(UWVACTR_decno, XWVACTR_noinitialvalue));
} 
break;
case 3: 
 /* line 405: */
 /* line 406: */
 /* line 407: */
(void)(ZNVACTR_newidinfo(UWVACTR_decno, TWVACTR_mode, VWVACTR_name, RNOACTR_nulluname, GQKACTR_idformalflag, A_VVAC(EXVACTR), A_VVAC(DXVACTR)));
break;
case 4: 
 /* line 408: */
{ 
(void)(ZNVACTR_newidinfo(UWVACTR_decno, TWVACTR_mode, VWVACTR_name, RNOACTR_nulluname, FQKACTR_idforflag, A_VVAC(GXVACTR), A_VVAC(FXVACTR)));
 /* line 409: */
 /* line 410: */
 /* line 411: */
(void)(VPVACTR_outputcdeclaration(UWVACTR_decno, XWVACTR_noinitialvalue));
} 
break;
case 5: 
 /* line 412: */
{ 
(void)(ZNVACTR_newidinfo(UWVACTR_decno, TWVACTR_mode, VWVACTR_name, RNOACTR_nulluname, AQKACTR_idnoflags, A_VVAC(IXVACTR), A_VVAC(HXVACTR)));
 /* line 413: */
(void)(GMVACTR_evaluatestack(Valuestack));
 /* line 414: */
JXVACTR_initialvalue = (&((*Valuestack)->Value));
 /* line 415: */
(void)((*Valuestack) = (*(&((*Valuestack)->Rest))));
 /* line 417: */
 /* line 418: */
 /* line 419: */
(void)(VPVACTR_outputcdeclaration(UWVACTR_decno, JXVACTR_initialvalue));
} 
break;
case 6: 
 /* line 420: */
{ 
(void)(WXIACTR_assert(LXVACTR, A68_FALSE));
 /* line 421: */
 /* line 422: */
/*SKIP*/;
} 
break;
case 7: 
 /* line 427: */
{ 
MXVACTR_rowmode = (*(&((&((*Valuestack)->Value))->Mode)));
 /* line 428: */
NXVACTR_forallmode = TWVACTR_mode;
 /* line 438: */
(void)(ZNVACTR_newidinfo(UWVACTR_decno, NXVACTR_forallmode, VWVACTR_name, RNOACTR_nulluname, EQKACTR_idforallflag, A_VVAC(PXVACTR), A_VVAC(OXVACTR)));
 /* line 439: */
 /* line 440: */
 /* line 441: */
(void)(VPVACTR_outputcdeclaration(UWVACTR_decno, XWVACTR_noinitialvalue));
} 
break;
case 8: 
 /* line 442: */
 /* line 443: */
 /* line 444: */
QXVACTR.Mode = TWVACTR_mode;
 /* line 445: */
QXVACTR.Cvariabletype = 0;
 /* line 446: */
QPLACTR_currentenviron(  &RXVACTR );
QXVACTR.Environ = RXVACTR;
 /* line 447: */
QXVACTR.Name = VWVACTR_name;
 /* line 448: */
QXVACTR.C_name = A_VVAC(SXVACTR);
 /* line 449: */
QXVACTR.Prefix = QIMACTR_newuniquename();
 /* line 450: */
 /* line 451: */
QXVACTR.Flags = (A68_BITS )((A68_BITS )((*(&(WWVACTR_newid->Flags)))&NQKACTR_idpresetflags)|BQKACTR_ididentityflag);
 /* line 453: */
QXVACTR.Definition = A_VVAC(TXVACTR);
 /* line 454: */
QXVACTR.Rhs = A_VVAC(UXVACTR);
 /* line 455: */
(*WWVACTR_newid) = QXVACTR;
break;
default: 
 /* line 456: */
 /* line 457: */
(void)(WXIACTR_assert(WXVACTR, A68_FALSE));
break;
} 
} 
A_PROC_EXIT(iddec);
return;
} 
#undef NL
 /* line 461: */
 /* line 463: */

A68_VOID  AYVACTR_ccdec(A68_130  Choicedec, A68_98 * Enquiry, A68_INT  Modeindex)
{ 
A68_INT  DYVACTR_decno A_UNUSED = {0};
A68_INT  EYVACTR_choicemode A_UNUSED = {0};
A68_VC  FYVACTR;  /* OPERATORS - nil -> mode */
A68_VC  GYVACTR;  /* OPERATORS - nil -> mode */
A68_98  HYVACTR;  /* collateral clause result */
A68_VC  JYVACTR;  /* avoid structure result */
A68_VC  LYVACTR;  /* avoid structure result */
A68_99  MYVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  NYVACTR;  /* YIELD */
A68_VC  CZVACTR;  /* OPERATORS - nil -> mode */
A68_VC  DZVACTR;  /* OPERATORS - nil -> mode */
A68_VC  EZVACTR;  /* avoid structure result */
A68_VC  FZVACTR_enquiryname A_UNUSED = {0};
A68_VC  GZVACTR;  /* avoid structure result */
A68_VC  HZVACTR_newunionname A_UNUSED = {0};
A68_INT  IZVACTR_codestream A_UNUSED = {0};
A68_181  JZVACTR;  /* avoid structure result */
A68_181  KZVACTR;  /* avoid structure result */
A68_INT  LZVACTR_modeoffset A_UNUSED = {0};
A68_269  MZVACTR;  /* collateral clause result */
A68_66  PZVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  QZVACTR;  /* YIELD */
A68_66  RZVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  SZVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  TZVACTR;  /* YIELD */
A68_66  UZVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  XZVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  YZVACTR;  /* YIELD */
A68_66  ZZVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  AAWACTR;  /* OPERATORS - istruct -> vector */
A68_258  BAWACTR;  /* collateral clause result */
A68_66  CAWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  FAWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  GAWACTR;  /* YIELD */
A68_VC  HAWACTR;  /* avoid structure result */
A68_66  IAWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  JAWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  KAWACTR;  /* YIELD */
A68_66  LAWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  MAWACTR;  /* OPERATORS - istruct -> vector */
A68_181  NAWACTR;  /* avoid structure result */
A68_181  OAWACTR;  /* avoid structure result */
A68_VC  PAWACTR;  /* avoid structure result */
A68_VC  QAWACTR;  /* avoid structure result */
A68_VC  RAWACTR_uniontable A_UNUSED = {0};
A68_271  SAWACTR;  /* collateral clause result */
A68_66  TAWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  WAWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  XAWACTR;  /* YIELD */
A68_66  YAWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  BBWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  CBWACTR;  /* YIELD */
A68_66  DBWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  GBWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  HBWACTR;  /* YIELD */
A68_66  IBWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  JBWACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(ccdec);
 /* line 467: */
 /* line 468: */
{ 
(void)(WXIACTR_assert(CYVACTR, (Choicedec.Type==6)));
 /* line 469: */
DYVACTR_decno = Choicedec.Decno;
 /* line 470: */
EYVACTR_choicemode = Choicedec.Mode;
 /* line 472: */
 /* line 473: */
 /* line 474: */
if (Modeindex>0)
{ 
 /* line 475: */
(void)(ZNVACTR_newidinfo(DYVACTR_decno, EYVACTR_choicemode, Choicedec.Name, RNOACTR_nulluname, (A68_BITS )(BQKACTR_ididentityflag|DQKACTR_idccdecflag), A_VVAC(GYVACTR), A_VVAC(FYVACTR)));
 /* line 476: */
 /* line 477: */
 /* line 478: */
 /* line 479: */
HYVACTR.Mode = EYVACTR_choicemode;
 /* line 480: */
HYVACTR.Info = PKJACTR_defaultinfo;
 /* line 481: */
 /* line 482: */
UZPACTR_getcfragment( Enquiry, &JYVACTR );
ROAAOSF_whole( Modeindex, 0, &LYVACTR );
NYVACTR = A_VC_PLUS(A_VC_PLUS(JYVACTR,KYVACTR),LYVACTR) ;
HYVACTR.Extra = A_UNITE(MYVACTR,mode6,6,NYVACTR);
 /* line 483: */
(void)(VPVACTR_outputcdeclaration(DYVACTR_decno, QYVACTR_assignment(A_LOC(A68_98 ), HYVACTR)));
} 
else
{ 
 /* line 484: */
 /* line 485: */
if (Modeindex<0)
{ 
 /* line 486: */
(void)(ZNVACTR_newidinfo(DYVACTR_decno, EYVACTR_choicemode, Choicedec.Name, RNOACTR_nulluname, (A68_BITS )(BQKACTR_ididentityflag|DQKACTR_idccdecflag), A_VVAC(DZVACTR), A_VVAC(CZVACTR)));
 /* line 487: */
(void)(VPVACTR_outputcdeclaration(DYVACTR_decno, (A68_98 *)A68_NIL));
 /* line 489: */
UZPACTR_getcfragment( Enquiry, &EZVACTR );
FZVACTR_enquiryname = EZVACTR;
 /* line 490: */
UTKACTR_idfullname( DYVACTR_decno, &GZVACTR );
HZVACTR_newunionname = GZVACTR;
 /* line 492: */
IZVACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 494: */
 /* line 495: */
A_CALLPROC(YVMACTR_constituents,((*(&(Enquiry->Mode))), &JZVACTR),((*(&(Enquiry->Mode))), &JZVACTR,(YVMACTR_constituents).nonlocals));
A_CALLPROC(YVMACTR_constituents,(EYVACTR_choicemode, &KZVACTR),(EYVACTR_choicemode, &KZVACTR,(YVMACTR_constituents).nonlocals));
LZVACTR_modeoffset = (GWQACTR_findints(KZVACTR, JZVACTR)-1);
 /* line 497: */
 /* line 498: */
QZVACTR = OZVACTR ;
MZVACTR.data[0] = A_UNITE(PZVACTR,mode2,2,QZVACTR);
MZVACTR.data[1] = A_UNITE(RZVACTR,mode2,2,HZVACTR_newunionname);
 /* line 499: */
TZVACTR = ',' ;
MZVACTR.data[2] = A_UNITE(SZVACTR,mode1,1,TZVACTR);
MZVACTR.data[3] = A_UNITE(UZVACTR,mode2,2,FZVACTR_enquiryname);
 /* line 500: */
YZVACTR = WZVACTR ;
MZVACTR.data[4] = A_UNITE(XZVACTR,mode2,2,YZVACTR);
MZVACTR.data[5] = A_UNITE(ZZVACTR,mode4,4,EIAACTR_cnewline);
 /* line 501: */
(void)(MDMACTR_writecstream(A_HISVEC(AAWACTR,MZVACTR,6,A68_66 ), IZVACTR_codestream));
 /* line 503: */
 /* line 504: */
 /* line 505: */
if (LZVACTR_modeoffset>0)
{ 
BAWACTR.data[0] = A_UNITE(CAWACTR,mode2,2,HZVACTR_newunionname);
 /* line 506: */
GAWACTR = EAWACTR ;
BAWACTR.data[1] = A_UNITE(FAWACTR,mode2,2,GAWACTR);
ROAAOSF_whole( LZVACTR_modeoffset, 0, &HAWACTR );
BAWACTR.data[2] = A_UNITE(IAWACTR,mode2,2,HAWACTR);
 /* line 507: */
KAWACTR = ';' ;
BAWACTR.data[3] = A_UNITE(JAWACTR,mode1,1,KAWACTR);
BAWACTR.data[4] = A_UNITE(LAWACTR,mode4,4,EIAACTR_cnewline);
 /* line 508: */
 /* line 509: */
(void)(MDMACTR_writecstream(A_HISVEC(MAWACTR,BAWACTR,5,A68_66 ), IZVACTR_codestream));
} 
else
{ 
 /* line 510: */
 /* line 513: */
if (LZVACTR_modeoffset<0)
{ 
 /* line 514: */
 /* line 515: */
 /* line 516: */
A_CALLPROC(YVMACTR_constituents,(EYVACTR_choicemode, &NAWACTR),(EYVACTR_choicemode, &NAWACTR,(YVMACTR_constituents).nonlocals));
A_CALLPROC(YVMACTR_constituents,((*(&(Enquiry->Mode))), &OAWACTR),((*(&(Enquiry->Mode))), &OAWACTR,(YVMACTR_constituents).nonlocals));
WWQACTR_uniontouniontable( OAWACTR, NAWACTR, &PAWACTR );
DRJACTR_replacecontrolchars( PAWACTR, &QAWACTR );
RAWACTR_uniontable = QAWACTR;
 /* line 518: */
 /* line 519: */
SAWACTR.data[0] = A_UNITE(TAWACTR,mode2,2,HZVACTR_newunionname);
XAWACTR = VAWACTR ;
SAWACTR.data[1] = A_UNITE(WAWACTR,mode2,2,XAWACTR);
 /* line 520: */
SAWACTR.data[2] = A_UNITE(YAWACTR,mode2,2,RAWACTR_uniontable);
CBWACTR = ABWACTR ;
SAWACTR.data[3] = A_UNITE(BBWACTR,mode2,2,CBWACTR);
SAWACTR.data[4] = A_UNITE(DBWACTR,mode2,2,FZVACTR_enquiryname);
 /* line 521: */
HBWACTR = FBWACTR ;
SAWACTR.data[5] = A_UNITE(GBWACTR,mode2,2,HBWACTR);
SAWACTR.data[6] = A_UNITE(IBWACTR,mode4,4,EIAACTR_cnewline);
 /* line 522: */
 /* line 523: */
 /* line 524: */
 /* line 525: */
(void)(MDMACTR_writecstream(A_HISVEC(JBWACTR,SAWACTR,7,A68_66 ), IZVACTR_codestream));
} 
} 
} 
else
{ 
 /* line 526: */
 /* line 527: */
(void)(WXIACTR_assert(LBWACTR, A68_FALSE));
} 
} 
} 
A_PROC_EXIT(ccdec);
return;
} 
#undef NL

A68_VOID  NBWACTR_declarenonlocallabel(A68_INT  Labno)
{ 
A68_110 * OBWACTR_labinfo A_UNUSED = {0};
A68_BOOL  PBWACTR;  /* clause result */
A68_BITS  QBWACTR;  /* ADICOPS - <= */
A68_INT  RBWACTR_level A_UNUSED = {0};
A68_273  SBWACTR;  /* collateral clause result */
A68_66  VBWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  WBWACTR;  /* YIELD */
A68_VC  XBWACTR;  /* avoid structure result */
A68_66  YBWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  ZBWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  ACWACTR;  /* YIELD */
A68_66  BCWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  CCWACTR;  /* clause result */
A68_65  DCWACTR;  /* OPERATORS - istruct -> vector */
A68_269  ECWACTR;  /* collateral clause result */
A68_66  HCWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ICWACTR;  /* YIELD */
A68_VC  KCWACTR;  /* avoid structure result */
A68_66  MCWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  NCWACTR;  /* YIELD */
A68_66  QCWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  RCWACTR;  /* YIELD */
A68_VC  SCWACTR;  /* avoid structure result */
A68_66  TCWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  UCWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  VCWACTR;  /* YIELD */
A68_66  WCWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  XCWACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(declarenonlocallabel);
 /* line 535: */
 /* line 536: */
{ 
{ 
OBWACTR_labinfo = (&A_R1INDEX(ZPKACTR_labels,Labno));
 /* line 537: */
 /* line 538: */
QBWACTR = (*(&(OBWACTR_labinfo->Flags))) ;
PBWACTR = (!A_LB_LE(WQKACTR_labbufferemittedflag,QBWACTR));
if (PBWACTR)
{ 
RBWACTR_level = (*(&((&(OBWACTR_labinfo->Environ))->Level)));
 /* line 540: */
 /* line 541: */
WBWACTR = UBWACTR ;
SBWACTR.data[0] = A_UNITE(VBWACTR,mode2,2,WBWACTR);
DTKACTR_labelbuffername( Labno, &XBWACTR );
SBWACTR.data[1] = A_UNITE(YBWACTR,mode2,2,XBWACTR);
 /* line 542: */
ACWACTR = ';' ;
SBWACTR.data[2] = A_UNITE(ZBWACTR,mode1,1,ACWACTR);
SBWACTR.data[3] = A_UNITE(BCWACTR,mode4,4,EIAACTR_cnewline);
 /* line 543: */
if (RBWACTR_level==0)
{ 
CCWACTR = KSLACTR_nonlocdecstream(RBWACTR_level);
} 
else
{ 
 /* line 544: */
CCWACTR = QSLACTR_locdecstream(RBWACTR_level);
} 
(void)(MDMACTR_writecstream(A_HISVEC(DCWACTR,SBWACTR,4,A68_66 ), CCWACTR));
 /* line 546: */
 /* line 547: */
ICWACTR = GCWACTR ;
ECWACTR.data[0] = A_UNITE(HCWACTR,mode2,2,ICWACTR);
 /* line 548: */
DTKACTR_labelbuffername( Labno, &KCWACTR );
NCWACTR = A_VC_PLUS(KCWACTR,LCWACTR) ;
ECWACTR.data[1] = A_UNITE(MCWACTR,mode2,2,NCWACTR);
RCWACTR = PCWACTR ;
ECWACTR.data[2] = A_UNITE(QCWACTR,mode2,2,RCWACTR);
WSKACTR_labelfullname( Labno, &SCWACTR );
ECWACTR.data[3] = A_UNITE(TCWACTR,mode2,2,SCWACTR);
 /* line 549: */
VCWACTR = ';' ;
ECWACTR.data[4] = A_UNITE(UCWACTR,mode1,1,VCWACTR);
ECWACTR.data[5] = A_UNITE(WCWACTR,mode4,4,EIAACTR_cnewline);
 /* line 550: */
(void)(MDMACTR_writecstream(A_HISVEC(XCWACTR,ECWACTR,6,A68_66 ), TSLACTR_labelstream(RBWACTR_level)));
 /* line 551: */
 /* line 552: */
(void)(PKAAOSF_orab((&(OBWACTR_labinfo->Flags)), WQKACTR_labbufferemittedflag));
} 
} 
} 
A_PROC_EXIT(declarenonlocallabel);
return;
} 
#undef NL

A68_VOID  ADWACTR_nonlocaldec(A68_INT  Idno, A68_INT  Level)
{ 
A68_INT  FDWACTR;  /* clause result */
A68_INT  GDWACTR_typeofid A_UNUSED = {0};
A68_INT  HDWACTR_previouslevel A_UNUSED = {0};
A68_VC  IDWACTR;  /* avoid structure result */
A68_VC  JDWACTR_fullname A_UNUSED = {0};
A68_INT  KDWACTR;  /* clause result */
A68_INT  NDWACTR = {0};  /* OPERATORS - skip to mode */
A68_INT  QDWACTR = {0};  /* OPERATORS - skip to mode */
A68_INT  RDWACTR_ctypeofid A_UNUSED = {0};
A68_258  SDWACTR;  /* collateral clause result */
A68_VC  TDWACTR;  /* avoid structure result */
A68_66  UDWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  VDWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  WDWACTR;  /* YIELD */
A68_66  XDWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  YDWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  ZDWACTR;  /* YIELD */
A68_66  AEWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  BEWACTR;  /* OPERATORS - istruct -> vector */
A68_98  CEWACTR;  /* collateral clause result */
A68_INT  DEWACTR;  /* clause result */
A68_INT  EEWACTR = {0};  /* OPERATORS - skip to mode */
A68_INT  FEWACTR;  /* YIELD */
A68_INT  GEWACTR = {0};  /* OPERATORS - skip to mode */
A68_BOOL  HEWACTR;  /* clause result */
A68_101  IEWACTR_id A_UNUSED = {0};
A68_INT * JEWACTR;  /* YIELD */
A68_99  KEWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_100  LEWACTR_rd A_UNUSED = {0};
A68_INT * MEWACTR;  /* YIELD */
A68_99  NEWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_99  OEWACTR = {0};  /* OPERATORS - skip to mode */
A68_57  PEWACTR_ld A_UNUSED = {0};
A68_INT * QEWACTR;  /* YIELD */
A68_99  REWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_99  SEWACTR = {0};  /* OPERATORS - skip to mode */
A68_98  TEWACTR_rhs A_UNUSED = {0};
A68_INT  UEWACTR_thisrd A_UNUSED = {0};
A68_277  VEWACTR;  /* collateral clause result */
A68_66  YEWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ZEWACTR;  /* YIELD */
A68_VC  AFWACTR;  /* avoid structure result */
A68_66  BFWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  EFWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  FFWACTR;  /* YIELD */
A68_VC  GFWACTR;  /* avoid structure result */
A68_66  HFWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  KFWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  LFWACTR;  /* YIELD */
A68_66  MFWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  PFWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  QFWACTR;  /* YIELD */
A68_VC  RFWACTR;  /* avoid structure result */
A68_66  SFWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  TFWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  UFWACTR;  /* YIELD */
A68_66  VFWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  WFWACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(nonlocaldec);
 /* line 562: */
 /* line 563: */
{ 
 /* line 564: */
 /* line 565: */
 /* line 553: */
 /* line 566: */
if (Idno<=IAAACTR_maxidno)
{ 
FDWACTR = BDWACTR_idtype;
} 
else
{ 
 /* line 567: */
if (Idno<=KAAACTR_maxrdno)
{ 
FDWACTR = CDWACTR_rdtype;
} 
else
{ 
 /* line 568: */
if (Idno<=MAAACTR_maxlibid)
{ 
 /* line 569: */
FDWACTR = DDWACTR_libtype;
} 
else
{ 
FDWACTR = EDWACTR_labtype;
} 
} 
} 
GDWACTR_typeofid = FDWACTR;
 /* line 570: */
HDWACTR_previouslevel = (Level-1);
 /* line 572: */
UTKACTR_idfullname( Idno, &IDWACTR );
JDWACTR_fullname = IDWACTR;
 /* line 574: */
 /* line 575: */
 /* line 576: */
switch ( GDWACTR_typeofid )
{ 
case 1: 
 /* line 577: */
KDWACTR = (*(&((&A_R1INDEX(WPKACTR_ids,Idno))->Mode)));
break;
case 2: 
 /* line 578: */
KDWACTR = (*(&((&A_R1INDEX(XPKACTR_rds,Idno))->Mode)));
break;
case 3: 
{ 
(void)(WXIACTR_assert(MDWACTR, A68_FALSE));
 /* line 580: */
KDWACTR = NDWACTR;
} 
break;
case 4: 
KDWACTR = TEAACTR_gotomode;
break;
default: 
{ 
(void)(WXIACTR_assert(PDWACTR, A68_FALSE));
 /* line 581: */
KDWACTR = QDWACTR;
} 
break;
} 
RDWACTR_ctypeofid = KDWACTR;
 /* line 584: */
 /* line 585: */
XKNACTR_ctype( RDWACTR_ctypeofid, &TDWACTR );
SDWACTR.data[0] = A_UNITE(UDWACTR,mode2,2,TDWACTR);
WDWACTR = ' ' ;
SDWACTR.data[1] = A_UNITE(VDWACTR,mode1,1,WDWACTR);
SDWACTR.data[2] = A_UNITE(XDWACTR,mode2,2,JDWACTR_fullname);
 /* line 586: */
ZDWACTR = ';' ;
SDWACTR.data[3] = A_UNITE(YDWACTR,mode1,1,ZDWACTR);
SDWACTR.data[4] = A_UNITE(AEWACTR,mode4,4,EIAACTR_cnewline);
 /* line 587: */
(void)(MDMACTR_writecstream(A_HISVEC(BEWACTR,SDWACTR,5,A68_66 ), KSLACTR_nonlocdecstream(HDWACTR_previouslevel)));
 /* line 588: */
(void)(CMNACTR_alignnextstructfield(RDWACTR_ctypeofid, KSLACTR_nonlocdecstream(HDWACTR_previouslevel)));
 /* line 592: */
 /* line 593: */
 /* line 594: */
CEWACTR.Mode = RDWACTR_ctypeofid;
 /* line 596: */
switch ( GDWACTR_typeofid )
{ 
case 1: 
 /* line 597: */
DEWACTR = (*(&((&((&A_R1INDEX(WPKACTR_ids,Idno))->Environ))->Level)));
break;
case 2: 
 /* line 598: */
DEWACTR = (*(&((&A_R1INDEX(XPKACTR_rds,Idno))->Declevel)));
break;
case 3: 
 /* line 599: */
DEWACTR = EEWACTR;
break;
case 4: 
 /* line 600: */
 /* line 601: */
FEWACTR = (Idno-OAAACTR_minlab) ;
DEWACTR = (*(&((&((&A_R1INDEX(ZPKACTR_labels,FEWACTR))->Environ))->Level)));
break;
default: 
 /* line 602: */
DEWACTR = GEWACTR;
break;
} 
 /* line 603: */
 /* line 604: */
HEWACTR = (HDWACTR_previouslevel==DEWACTR);
if (HEWACTR)
{ 
 /* line 605: */
CEWACTR.Info = PKJACTR_defaultinfo;
} 
else
{ 
 /* line 606: */
CEWACTR.Info = TKJACTR_nonloc;
} 
 /* line 607: */
switch ( GDWACTR_typeofid )
{ 
case 1: 
{ 
JEWACTR = (&((&IEWACTR_id)->Idno)) ;
(*JEWACTR) = Idno;
 /* line 608: */
CEWACTR.Extra = A_UNITE(KEWACTR,mode4,4,IEWACTR_id);
} 
break;
case 2: 
{ 
MEWACTR = (&((&LEWACTR_rd)->Rdenno)) ;
(*MEWACTR) = Idno;
 /* line 609: */
CEWACTR.Extra = A_UNITE(NEWACTR,mode2,2,LEWACTR_rd);
} 
break;
case 3: 
 /* line 610: */
CEWACTR.Extra = OEWACTR;
break;
case 4: 
{ 
QEWACTR = (&((&PEWACTR_ld)->Labno)) ;
(void)((*QEWACTR) = (Idno-OAAACTR_minlab));
 /* line 611: */
 /* line 612: */
CEWACTR.Extra = A_UNITE(REWACTR,mode7,7,PEWACTR_ld);
} 
break;
default: 
 /* line 613: */
CEWACTR.Extra = SEWACTR;
break;
} 
TEWACTR_rhs = CEWACTR;
 /* line 616: */
UEWACTR_thisrd = CQLACTR_findroutine(Level);
 /* line 617: */
 /* line 618: */
ZEWACTR = XEWACTR ;
VEWACTR.data[0] = A_UNITE(YEWACTR,mode2,2,ZEWACTR);
LUKACTR_rdenvname( UEWACTR_thisrd, &AFWACTR );
VEWACTR.data[1] = A_UNITE(BFWACTR,mode2,2,AFWACTR);
 /* line 619: */
FFWACTR = DFWACTR ;
VEWACTR.data[2] = A_UNITE(EFWACTR,mode2,2,FFWACTR);
UTKACTR_idfullname( UEWACTR_thisrd, &GFWACTR );
VEWACTR.data[3] = A_UNITE(HFWACTR,mode2,2,GFWACTR);
 /* line 620: */
LFWACTR = JFWACTR ;
VEWACTR.data[4] = A_UNITE(KFWACTR,mode2,2,LFWACTR);
VEWACTR.data[5] = A_UNITE(MFWACTR,mode2,2,JDWACTR_fullname);
QFWACTR = OFWACTR ;
VEWACTR.data[6] = A_UNITE(PFWACTR,mode2,2,QFWACTR);
UZPACTR_getcfragment( (&TEWACTR_rhs), &RFWACTR );
VEWACTR.data[7] = A_UNITE(SFWACTR,mode2,2,RFWACTR);
 /* line 621: */
UFWACTR = ';' ;
VEWACTR.data[8] = A_UNITE(TFWACTR,mode1,1,UFWACTR);
VEWACTR.data[9] = A_UNITE(VFWACTR,mode4,4,EIAACTR_cnewline);
 /* line 622: */
 /* line 623: */
(void)(MDMACTR_writecstream(A_HISVEC(WFWACTR,VEWACTR,10,A68_66 ), NSLACTR_codestream(HDWACTR_previouslevel)));
} 
A_PROC_EXIT(nonlocaldec);
return;
} 
#undef NL
 /* line 627: */
 /* line 629: */

A_STATIC A68_VOID  DGWACTR_declarecroutine(A68_INT  Rdenno, A68_INT  Resultmode, A68_BOOL  Global, A68_BOOL  Kept, A68_BOOL  Opsym, A68_181  Params)
{ 
A68_VC  EGWACTR;  /* avoid structure result */
A68_VC  FGWACTR_environmentctype A_UNUSED = {0};
A68_BOOL  GGWACTR;  /* optbool result */
A68_BOOL  HGWACTR_usetempforresult A_UNUSED = {0};
A68_INT  IGWACTR;  /* clause result */
A68_INT  JGWACTR_cresultmode A_UNUSED = {0};
A68_BOOL  KGWACTR_fulldec A_UNUSED = {0};
A68_INT  LGWACTR_a68paramcount A_UNUSED = {0};
A68_INT  MGWACTR_cparamcount A_UNUSED = {0};
A68_INT  NGWACTR_codestream A_UNUSED = {0};
A68_VC  OGWACTR;  /* clause result */
A68_VC  PGWACTR;  /* avoid structure result */
A68_VC  QGWACTR;  /* avoid structure result */
A68_VC  RGWACTR_fnname A_UNUSED = {0};
A68_280  TGWACTR_generator;   /* proc value of non-global proc */
A68_279  ZGWACTR;  /* avoid structure result */
A68_279  YGWACTR_paramnames A_UNUSED = {0};
A68_279  BHWACTR;  /* avoid structure result */
A68_279  AHWACTR_paramtypes A_UNUSED = {0};
A68_INT * CHWACTR_param A_UNUSED = {0};
A68_VC * DHWACTR_paramtype A_UNUSED = {0};
A68_VC * EHWACTR_paramname A_UNUSED = {0};
A68_INT  FHWACTR;  /* forall loop counter */
A68_VC  GHWACTR;  /* avoid structure result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} HHWACTR; 
A68_VC  IHWACTR;  /* avoid structure result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} JHWACTR; 
A68_75  LHWACTR_prototype;   /* proc value of non-global proc */
A68_256  RKWACTR;  /* collateral clause result */
A68_66  SKWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  TKWACTR;  /* YIELD */
A68_66  UKWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  VKWACTR;  /* OPERATORS - istruct -> vector */
A68_66  WKWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  XKWACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_273  YKWACTR;  /* collateral clause result */
A68_66  BLWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  CLWACTR;  /* YIELD */
A68_66  DLWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  GLWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  HLWACTR;  /* YIELD */
A68_66  ILWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  JLWACTR;  /* OPERATORS - istruct -> vector */
A68_VC  KLWACTR;  /* avoid structure result */
A68_VC  LLWACTR_procvaluename A_UNUSED = {0};
A68_VC  MLWACTR;  /* avoid structure result */
A68_VC  NLWACTR_envname A_UNUSED = {0};
A68_INT  OLWACTR_previouslevel A_UNUSED = {0};
A68_269  PLWACTR;  /* collateral clause result */
A68_VC  QLWACTR;  /* avoid structure result */
A68_66  RLWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  SLWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  TLWACTR;  /* YIELD */
A68_66  ULWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  VLWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  WLWACTR;  /* YIELD */
A68_66  ZLWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  AMWACTR;  /* YIELD */
A68_66  DMWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  EMWACTR;  /* YIELD */
A68_66  FMWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  GMWACTR;  /* OPERATORS - istruct -> vector */
A68_VC  HMWACTR;  /* OPERATORS - istruct -> vector */
A68_56  IMWACTR;  /* OPERATORS - istruct -> vector */
A68_VC  JMWACTR_envvarname A_UNUSED = {0};
A68_269  KMWACTR;  /* collateral clause result */
A68_66  LMWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  MMWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  NMWACTR;  /* YIELD */
A68_66  OMWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  PMWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  QMWACTR;  /* YIELD */
A68_66  TMWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  UMWACTR;  /* YIELD */
A68_66  XMWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  YMWACTR;  /* YIELD */
A68_66  ZMWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  ANWACTR;  /* OPERATORS - istruct -> vector */
A68_257  BNWACTR;  /* collateral clause result */
A68_66  ENWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  FNWACTR;  /* YIELD */
A68_66  GNWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  JNWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  KNWACTR;  /* YIELD */
A68_66  LNWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  ONWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  PNWACTR;  /* YIELD */
A68_66  QNWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  TNWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  UNWACTR;  /* YIELD */
A68_66  VNWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  WNWACTR;  /* OPERATORS - istruct -> vector */
A68_257  XNWACTR;  /* collateral clause result */
A68_66  AOWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  BOWACTR;  /* YIELD */
A68_66  EOWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  FOWACTR;  /* YIELD */
A68_66  GOWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  JOWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  KOWACTR;  /* YIELD */
A68_66  LOWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  OOWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  POWACTR;  /* YIELD */
A68_66  QOWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  TOWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  UOWACTR;  /* YIELD */
A68_66  VOWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  WOWACTR;  /* OPERATORS - istruct -> vector */
A68_269  XOWACTR;  /* collateral clause result */
A68_66  APWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  BPWACTR;  /* YIELD */
A68_66  EPWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  FPWACTR;  /* YIELD */
A68_66  IPWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  JPWACTR;  /* YIELD */
A68_66  KPWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  LPWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  MPWACTR;  /* YIELD */
A68_66  PPWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  QPWACTR;  /* YIELD */
A68_66  TPWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  UPWACTR;  /* YIELD */
A68_66  VPWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  WPWACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(declarecroutine);
 /* line 630: */
 /* line 631: */
{ 
LUKACTR_rdenvname( Rdenno, &EGWACTR );
FGWACTR_environmentctype = EGWACTR;
 /* line 634: */
 /* line 635: */
GGWACTR = NQIACTR_nostructresultoption;
if ( GGWACTR )
{GGWACTR = VSMACTR_iscstruct(Resultmode);
}
HGWACTR_usetempforresult = GGWACTR;
 /* line 637: */
 /* line 638: */
if (HGWACTR_usetempforresult)
{ 
IGWACTR = UEAACTR_voidmode;
} 
else
{ 
IGWACTR = Resultmode;
} 
JGWACTR_cresultmode = IGWACTR;
 /* line 640: */
KGWACTR_fulldec = (!Global);
 /* line 642: */
LGWACTR_a68paramcount = Params.upb;
 /* line 644: */
 /* line 645: */
MGWACTR_cparamcount = ((LGWACTR_a68paramcount+(HGWACTR_usetempforresult))+(KGWACTR_fulldec));
 /* line 647: */
NGWACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 649: */
 /* line 650: */
if (KGWACTR_fulldec)
{ 
 /* line 651: */
DUKACTR_rdfnname( Rdenno, &PGWACTR );
OGWACTR = PGWACTR;
} 
else
{ 
 /* line 652: */
UTKACTR_idfullname( Rdenno, &QGWACTR );
OGWACTR = QGWACTR;
} 
RGWACTR_fnname = OGWACTR;
 /* line 654: */
A_CLOSURE( TGWACTR_generator, UGWACTR_generator, VGWACTR_generator );
(( VGWACTR_generator * ) ( TGWACTR_generator.nonlocals )) -> LGWACTR_a68paramcount = LGWACTR_a68paramcount;
A_CALLPROC(TGWACTR_generator,(A68_TRUE, &ZGWACTR),(A68_TRUE, &ZGWACTR,(TGWACTR_generator).nonlocals));
YGWACTR_paramnames = ZGWACTR;
A_CALLPROC(TGWACTR_generator,(A68_TRUE, &BHWACTR),(A68_TRUE, &BHWACTR,(TGWACTR_generator).nonlocals));
AHWACTR_paramtypes = BHWACTR;
 /* line 656: */
 /* line 657: */
FHWACTR = Params.upb -1;
if ( FHWACTR != AHWACTR_paramtypes.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
if ( FHWACTR != YGWACTR_paramnames.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 3"); }
CHWACTR_param = Params.data;
DHWACTR_paramtype = AHWACTR_paramtypes.data;
EHWACTR_paramname = YGWACTR_paramnames.data;
for (;FHWACTR-- >= 0;
(CHWACTR_param++
,DHWACTR_paramtype++
,EHWACTR_paramname++
) )
{
 /* line 658: */
UTKACTR_idfullname( (*CHWACTR_param), &GHWACTR );
HHWACTR.source = GHWACTR ;
(void)((*EHWACTR_paramname) = (HHWACTR.destination));
 /* line 659: */
 /* line 660: */
BLNACTR_cvartype( (*(&((&A_R1INDEX(WPKACTR_ids,(*CHWACTR_param)))->Cvariabletype))), &IHWACTR );
JHWACTR.source = IHWACTR ;
(void)((*DHWACTR_paramtype) = (JHWACTR.destination));
}
 /* line 662: */
A_CLOSURE( LHWACTR_prototype, MHWACTR_prototype, NHWACTR_prototype );
(( NHWACTR_prototype * ) ( LHWACTR_prototype.nonlocals )) -> Global = Global;
(( NHWACTR_prototype * ) ( LHWACTR_prototype.nonlocals )) -> Kept = Kept;
(( NHWACTR_prototype * ) ( LHWACTR_prototype.nonlocals )) -> JGWACTR_cresultmode = JGWACTR_cresultmode;
(( NHWACTR_prototype * ) ( LHWACTR_prototype.nonlocals )) -> RGWACTR_fnname = RGWACTR_fnname;
(( NHWACTR_prototype * ) ( LHWACTR_prototype.nonlocals )) -> MGWACTR_cparamcount = MGWACTR_cparamcount;
(( NHWACTR_prototype * ) ( LHWACTR_prototype.nonlocals )) -> LGWACTR_a68paramcount = LGWACTR_a68paramcount;
(( NHWACTR_prototype * ) ( LHWACTR_prototype.nonlocals )) -> AHWACTR_paramtypes = AHWACTR_paramtypes;
(( NHWACTR_prototype * ) ( LHWACTR_prototype.nonlocals )) -> YGWACTR_paramnames = YGWACTR_paramnames;
(( NHWACTR_prototype * ) ( LHWACTR_prototype.nonlocals )) -> HGWACTR_usetempforresult = HGWACTR_usetempforresult;
(( NHWACTR_prototype * ) ( LHWACTR_prototype.nonlocals )) -> Resultmode = Resultmode;
(( NHWACTR_prototype * ) ( LHWACTR_prototype.nonlocals )) -> KGWACTR_fulldec = KGWACTR_fulldec;
 /* line 711: */
(void)(A_CALLPROC(LHWACTR_prototype,(HSLACTR_externstream),(HSLACTR_externstream,(LHWACTR_prototype).nonlocals)));
TKWACTR = ';' ;
RKWACTR.data[0] = A_UNITE(SKWACTR,mode1,1,TKWACTR);
RKWACTR.data[1] = A_UNITE(UKWACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(VKWACTR,RKWACTR,2,A68_66 ), HSLACTR_externstream));
 /* line 714: */
(void)(A_CALLPROC(LHWACTR_prototype,(NGWACTR_codestream),(NGWACTR_codestream,(LHWACTR_prototype).nonlocals)));
(void)(MDMACTR_writecstream(A_HVEC(XKWACTR,A_UNITE(WKWACTR,mode4,4,EIAACTR_cnewline),A68_66 ), NGWACTR_codestream));
 /* line 716: */
 /* line 717: */
 /* line 718: */
if (KGWACTR_fulldec)
{ 
CLWACTR = ALWACTR ;
YKWACTR.data[0] = A_UNITE(BLWACTR,mode2,2,CLWACTR);
YKWACTR.data[1] = A_UNITE(DLWACTR,mode2,2,FGWACTR_environmentctype);
HLWACTR = FLWACTR ;
YKWACTR.data[2] = A_UNITE(GLWACTR,mode2,2,HLWACTR);
YKWACTR.data[3] = A_UNITE(ILWACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(JLWACTR,YKWACTR,4,A68_66 ), NGWACTR_codestream));
 /* line 720: */
UTKACTR_idfullname( Rdenno, &KLWACTR );
LLWACTR_procvaluename = KLWACTR;
 /* line 721: */
LUKACTR_rdenvname( Rdenno, &MLWACTR );
NLWACTR_envname = MLWACTR;
 /* line 722: */
OLWACTR_previouslevel = (VRLACTR_currentlevel()-1);
 /* line 725: */
 /* line 726: */
XKNACTR_ctype( (*(&((&A_R1INDEX(XPKACTR_rds,Rdenno))->Mode))), &QLWACTR );
PLWACTR.data[0] = A_UNITE(RLWACTR,mode2,2,QLWACTR);
TLWACTR = ' ' ;
PLWACTR.data[1] = A_UNITE(SLWACTR,mode1,1,TLWACTR);
PLWACTR.data[2] = A_UNITE(ULWACTR,mode2,2,LLWACTR_procvaluename);
 /* line 727: */
WLWACTR = ';' ;
PLWACTR.data[3] = A_UNITE(VLWACTR,mode1,1,WLWACTR);
 /* line 728: */
 /* line 729: */
if (AQIACTR_verboseoption)
{ 
 /* line 730: */
AMWACTR = YLWACTR ;
PLWACTR.data[4] = A_UNITE(ZLWACTR,mode2,2,AMWACTR);
} 
else
{ 
 /* line 731: */
EMWACTR = CMWACTR ;
PLWACTR.data[4] = A_UNITE(DMWACTR,mode2,2,EMWACTR);
} 
PLWACTR.data[5] = A_UNITE(FMWACTR,mode4,4,EIAACTR_cnewline);
 /* line 732: */
(void)(MDMACTR_writecstream(A_HISVEC(GMWACTR,PLWACTR,6,A68_66 ), QSLACTR_locdecstream(OLWACTR_previouslevel)));
 /* line 734: */
 /* line 735: */
 /* line 737: */
if (PQIACTR_closureonstackoption)
{ 
IMWACTR = QIMACTR_newuniquename() ;
JMWACTR_envvarname = A_HISVEC(HMWACTR,IMWACTR,7,A68_CHAR );
 /* line 738: */
 /* line 739: */
KMWACTR.data[0] = A_UNITE(LMWACTR,mode2,2,NLWACTR_envname);
NMWACTR = ' ' ;
KMWACTR.data[1] = A_UNITE(MMWACTR,mode1,1,NMWACTR);
KMWACTR.data[2] = A_UNITE(OMWACTR,mode2,2,JMWACTR_envvarname);
 /* line 740: */
QMWACTR = ';' ;
KMWACTR.data[3] = A_UNITE(PMWACTR,mode1,1,QMWACTR);
if (AQIACTR_verboseoption)
{ 
UMWACTR = SMWACTR ;
KMWACTR.data[4] = A_UNITE(TMWACTR,mode2,2,UMWACTR);
} 
else
{ 
 /* line 741: */
YMWACTR = WMWACTR ;
KMWACTR.data[4] = A_UNITE(XMWACTR,mode2,2,YMWACTR);
} 
KMWACTR.data[5] = A_UNITE(ZMWACTR,mode4,4,EIAACTR_cnewline);
 /* line 742: */
(void)(MDMACTR_writecstream(A_HISVEC(ANWACTR,KMWACTR,6,A68_66 ), QSLACTR_locdecstream(OLWACTR_previouslevel)));
 /* line 744: */
 /* line 745: */
 /* line 746: */
FNWACTR = DNWACTR ;
BNWACTR.data[0] = A_UNITE(ENWACTR,mode2,2,FNWACTR);
BNWACTR.data[1] = A_UNITE(GNWACTR,mode2,2,LLWACTR_procvaluename);
KNWACTR = INWACTR ;
BNWACTR.data[2] = A_UNITE(JNWACTR,mode2,2,KNWACTR);
BNWACTR.data[3] = A_UNITE(LNWACTR,mode2,2,RGWACTR_fnname);
PNWACTR = NNWACTR ;
BNWACTR.data[4] = A_UNITE(ONWACTR,mode2,2,PNWACTR);
BNWACTR.data[5] = A_UNITE(QNWACTR,mode2,2,JMWACTR_envvarname);
 /* line 747: */
UNWACTR = SNWACTR ;
BNWACTR.data[6] = A_UNITE(TNWACTR,mode2,2,UNWACTR);
BNWACTR.data[7] = A_UNITE(VNWACTR,mode4,4,EIAACTR_cnewline);
 /* line 748: */
 /* line 749: */
 /* line 751: */
(void)(MDMACTR_writecstream(A_HISVEC(WNWACTR,BNWACTR,8,A68_66 ), NSLACTR_codestream(OLWACTR_previouslevel)));
} 
else
{ 
 /* line 752: */
if (OQIACTR_closuremarkoption)
{ 
BOWACTR = ZNWACTR ;
XNWACTR.data[0] = A_UNITE(AOWACTR,mode2,2,BOWACTR);
} 
else
{ 
 /* line 753: */
FOWACTR = DOWACTR ;
XNWACTR.data[0] = A_UNITE(EOWACTR,mode2,2,FOWACTR);
} 
XNWACTR.data[1] = A_UNITE(GOWACTR,mode2,2,LLWACTR_procvaluename);
KOWACTR = IOWACTR ;
XNWACTR.data[2] = A_UNITE(JOWACTR,mode2,2,KOWACTR);
XNWACTR.data[3] = A_UNITE(LOWACTR,mode2,2,RGWACTR_fnname);
POWACTR = NOWACTR ;
XNWACTR.data[4] = A_UNITE(OOWACTR,mode2,2,POWACTR);
XNWACTR.data[5] = A_UNITE(QOWACTR,mode2,2,NLWACTR_envname);
 /* line 754: */
UOWACTR = SOWACTR ;
XNWACTR.data[6] = A_UNITE(TOWACTR,mode2,2,UOWACTR);
XNWACTR.data[7] = A_UNITE(VOWACTR,mode4,4,EIAACTR_cnewline);
 /* line 755: */
 /* line 756: */
(void)(MDMACTR_writecstream(A_HISVEC(WOWACTR,XNWACTR,8,A68_66 ), NSLACTR_codestream(OLWACTR_previouslevel)));
} 
 /* line 759: */
 /* line 760: */
 /* line 761: */
BPWACTR = ZOWACTR ;
XOWACTR.data[0] = A_UNITE(APWACTR,mode2,2,BPWACTR);
 /* line 762: */
 /* line 763: */
if (AQIACTR_verboseoption)
{ 
 /* line 764: */
FPWACTR = DPWACTR ;
XOWACTR.data[1] = A_UNITE(EPWACTR,mode2,2,FPWACTR);
} 
else
{ 
JPWACTR = HPWACTR ;
XOWACTR.data[1] = A_UNITE(IPWACTR,mode2,2,JPWACTR);
} 
XOWACTR.data[2] = A_UNITE(KPWACTR,mode4,4,EIAACTR_cnewline);
 /* line 765: */
MPWACTR = '{' ;
XOWACTR.data[3] = A_UNITE(LPWACTR,mode1,1,MPWACTR);
 /* line 766: */
 /* line 767: */
if (OQIACTR_closuremarkoption)
{ 
 /* line 768: */
QPWACTR = OPWACTR ;
XOWACTR.data[4] = A_UNITE(PPWACTR,mode2,2,QPWACTR);
} 
else
{ 
UPWACTR = SPWACTR ;
XOWACTR.data[4] = A_UNITE(TPWACTR,mode2,2,UPWACTR);
} 
XOWACTR.data[5] = A_UNITE(VPWACTR,mode4,4,EIAACTR_cnewline);
 /* line 769: */
 /* line 770: */
 /* line 771: */
(void)(MDMACTR_writecstream(A_HISVEC(WPWACTR,XOWACTR,6,A68_66 ), KSLACTR_nonlocdecstream(OLWACTR_previouslevel)));
} 
} 
A_PROC_EXIT(declarecroutine);
return;
} 
#undef NL

A68_VOID  XPWACTR_completerddec(void)
{ 
A68_INT  YPWACTR;  /* YIELD */
A68_109 * ZPWACTR_rd A_UNUSED = {0};
A68_BITS  AQWACTR;  /* ADICOPS - >= */
A68_INT  BQWACTR_nonlocdecstream A_UNUSED = {0};
A68_256  CQWACTR;  /* collateral clause result */
A68_66  FQWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  GQWACTR;  /* YIELD */
A68_66  HQWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  IQWACTR;  /* OPERATORS - istruct -> vector */
A68_273  JQWACTR;  /* collateral clause result */
A68_66  MQWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  NQWACTR;  /* YIELD */
A68_VC  OQWACTR;  /* avoid structure result */
A68_66  PQWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  QQWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  RQWACTR;  /* YIELD */
A68_66  SQWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  TQWACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(completerddec);
{ 
YPWACTR = ZPLACTR_currentroutine() ;
ZPWACTR_rd = (&A_R1INDEX(XPKACTR_rds,YPWACTR));
 /* line 780: */
 /* line 781: */
 /* line 782: */
 /* line 784: */
AQWACTR = (*(&(ZPWACTR_rd->Flags))) ;
if (!A_LB_GE(AQWACTR,RQKACTR_rdglobalflag))
{ 
BQWACTR_nonlocdecstream = KSLACTR_nonlocdecstream((VRLACTR_currentlevel()-1));
 /* line 785: */
 /* line 786: */
 /* line 789: */
if (!JQLACTR_nonlocalsused())
{ 
GQWACTR = EQWACTR ;
CQWACTR.data[0] = A_UNITE(FQWACTR,mode2,2,GQWACTR);
CQWACTR.data[1] = A_UNITE(HQWACTR,mode4,4,EIAACTR_cnewline);
 /* line 790: */
(void)(MDMACTR_writecstream(A_HISVEC(IQWACTR,CQWACTR,2,A68_66 ), BQWACTR_nonlocdecstream));
} 
 /* line 791: */
 /* line 792: */
NQWACTR = LQWACTR ;
JQWACTR.data[0] = A_UNITE(MQWACTR,mode2,2,NQWACTR);
LUKACTR_rdenvname( ZPLACTR_currentroutine(), &OQWACTR );
JQWACTR.data[1] = A_UNITE(PQWACTR,mode2,2,OQWACTR);
 /* line 793: */
RQWACTR = ';' ;
JQWACTR.data[2] = A_UNITE(QQWACTR,mode1,1,RQWACTR);
JQWACTR.data[3] = A_UNITE(SQWACTR,mode4,4,EIAACTR_cnewline);
 /* line 794: */
 /* line 795: */
 /* line 796: */
(void)(MDMACTR_writecstream(A_HISVEC(TQWACTR,JQWACTR,4,A68_66 ), BQWACTR_nonlocdecstream));
} 
} 
A_PROC_EXIT(completerddec);
return;
} 
#undef NL
 /* line 800: */
 /* line 801: */
 /* line 802: */
 /* line 803: */
 /* line 805: */

A68_VOID  BRWACTR_rddec(A68_VC  Name, A68_INT  Mode, A68_181  Paramdecnos, A68_INT  Resultmode, A68_INT  Rdenno, A68_72  Environ, A68_BITS  Props)
{ 
A68_109 * CRWACTR_rd A_UNUSED = {0};
A68_INT  DRWACTR_declevel A_UNUSED = {0};
A68_BOOL  ERWACTR;  /* optbool result */
A68_BITS  FRWACTR;  /* clause result */
A68_BITS  GRWACTR_otherflags A_UNUSED = {0};
A68_BOOL  HRWACTR;  /* optbool result */
A68_BOOL  IRWACTR_global A_UNUSED = {0};
A68_109  JRWACTR;  /* collateral clause result */
A68_BITS  KRWACTR;  /* ADICOPS - >= */
A68_BOOL  LRWACTR;  /* optbool result */
A68_INT  MRWACTR;  /* YIELD */
A68_155  NRWACTR;  /* OPERATORS - simple index */
A68_INT  ORWACTR;  /* YIELD */
A68_157 * PRWACTR_keptinfo A_UNUSED = {0};
A68_BOOL  QRWACTR;  /* optbool result */
A68_BOOL  RRWACTR;  /* clause result */
A68_INT  SRWACTR;  /* YIELD */
A68_LINT * TRWACTR;  /* YIELD */
A68_BITS  URWACTR;  /* ADICOPS - >= */
A68_BITS  VRWACTR;  /* ADICOPS - >= */
A_PROC_ENTRY(rddec);
 /* line 806: */
 /* line 807: */
{ 
CRWACTR_rd = (&A_R1INDEX(XPKACTR_rds,Rdenno));
 /* line 808: */
DRWACTR_declevel = (VRLACTR_currentlevel()-1);
 /* line 809: */
 /* line 810: */
ERWACTR = A_LB_GE(Props,OCAACTR_operatorbit);
if ( ERWACTR )
{ /* line 811: */
ERWACTR = TUKACTR_standopsym(Name);
}
 /* line 812: */
if (ERWACTR)
{ 
 /* line 813: */
FRWACTR = SQKACTR_rdopflag;
} 
else
{ 
FRWACTR = OQKACTR_rdnoflags;
} 
GRWACTR_otherflags = FRWACTR;
 /* line 814: */
 /* line 815: */
HRWACTR = (DRWACTR_declevel==0);
if ( ! HRWACTR )
{HRWACTR = PRLACTR_isgloballevel(Environ);
}
IRWACTR_global = HRWACTR;
 /* line 817: */
 /* line 818: */
if (IRWACTR_global)
{ 
 /* line 819: */
JRWACTR.Mode = Mode;
 /* line 820: */
JRWACTR.Resultmode = Resultmode;
 /* line 821: */
JRWACTR.Declevel = DRWACTR_declevel;
 /* line 822: */
JRWACTR.Environ = Environ;
 /* line 823: */
JRWACTR.Name = Name;
 /* line 824: */
 /* line 825: */
KRWACTR = (*(&(CRWACTR_rd->Flags))) ;
LRWACTR = (!A_LB_GE(KRWACTR,PQKACTR_rdkeptflag));
if ( ! LRWACTR )
{LRWACTR = (!LCPACTR_rscompatiblewithpreviousversion);
}
 /* line 826: */
if (LRWACTR)
{ 
 /* line 827: */
JRWACTR.Prefix = QIMACTR_newuniquename();
} 
else
{ 
{ 
MRWACTR = 1 ;
NRWACTR = (*(&((&A_R1INDEX(RCPACTR_specs,MRWACTR))->Keptinfo))) ;
ORWACTR = JNVACTR_keeplistposition(Rdenno) ;
PRWACTR_keptinfo = (&A_VINDEX(NRWACTR,ORWACTR));
 /* line 829: */
 /* line 830: */
QRWACTR = (*(&(PRWACTR_keptinfo->Iddec)));
if ( ! QRWACTR )
{QRWACTR = (*(&(PRWACTR_keptinfo->Optimised)));
}
RRWACTR = QRWACTR;
if (RRWACTR)
{ 
MCPACTR_transcompatiblewithpreviousversi = A68_FALSE;
 /* line 831: */
 /* line 832: */
SRWACTR = 1 ;
TRWACTR = (&((&A_R1INDEX(RCPACTR_specs,SRWACTR))->Timeoflastchange)) ;
(void)((*TRWACTR) = (*(&((&IYIACTR_config_info)->Translationtime))));
 /* line 833: */
 /* line 834: */
 /* line 835: */
JRWACTR.Prefix = QIMACTR_newuniquename();
} 
else
{ 
 /* line 836: */
JRWACTR.Prefix = (*(&(PRWACTR_keptinfo->Prefix)));
} 
} 
} 
 /* line 837: */
JRWACTR.Fnprefix = RNOACTR_nulluname;
 /* line 838: */
JRWACTR.Envprefix = RNOACTR_nulluname;
 /* line 839: */
 /* line 840: */
JRWACTR.Flags = (A68_BITS )((A68_BITS )((*(&(CRWACTR_rd->Flags)))|RQKACTR_rdglobalflag)|GRWACTR_otherflags);
} 
else
{ 
 /* line 841: */
JRWACTR.Mode = Mode;
 /* line 842: */
JRWACTR.Resultmode = Resultmode;
 /* line 843: */
JRWACTR.Declevel = DRWACTR_declevel;
 /* line 844: */
JRWACTR.Environ = Environ;
 /* line 845: */
JRWACTR.Name = Name;
 /* line 846: */
JRWACTR.Prefix = QIMACTR_newuniquename();
 /* line 847: */
JRWACTR.Fnprefix = QIMACTR_newuniquename();
 /* line 848: */
JRWACTR.Envprefix = QIMACTR_newuniquename();
 /* line 849: */
 /* line 850: */
JRWACTR.Flags = (A68_BITS )((*(&(CRWACTR_rd->Flags)))|GRWACTR_otherflags);
} 
(*CRWACTR_rd) = JRWACTR;
 /* line 851: */
 /* line 852: */
 /* line 853: */
 /* line 854: */
 /* line 855: */
 /* line 856: */
 /* line 857: */
 /* line 859: */
 /* line 860: */
URWACTR = (*(&(CRWACTR_rd->Flags))) ;
VRWACTR = (*(&(CRWACTR_rd->Flags))) ;
(void)(DGWACTR_declarecroutine(Rdenno, Resultmode, IRWACTR_global, A_LB_GE(VRWACTR,PQKACTR_rdkeptflag), A_LB_GE(URWACTR,SQKACTR_rdopflag), Paramdecnos));
} 
A_PROC_EXIT(rddec);
return;
} 
#undef NL

A68_VOID  XRWACTR_labdec(A68_139  Labeldec)
{ 
A68_INT  YRWACTR_labno A_UNUSED = {0};
A68_INT  ZRWACTR_status A_UNUSED = {0};
A68_BOOL  ASWACTR_notsetting A_UNUSED = {0};
A68_VC  BSWACTR_name A_UNUSED = {0};
A68_110 * CSWACTR_labinfo A_UNUSED = {0};
A68_110  DSWACTR;  /* collateral clause result */
A68_72  ESWACTR;  /* avoid structure result */
A68_BITS  GSWACTR;  /* ADICOPS - <= */
A68_INT * ISWACTR;  /* YIELD */
A68_BOOL * JSWACTR;  /* YIELD */
A68_281  KSWACTR;  /* collateral clause result */
A68_VC  LSWACTR;  /* avoid structure result */
A68_66  MSWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  PSWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  QSWACTR;  /* YIELD */
A68_66  RSWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  SSWACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(labdec);
 /* line 863: */
 /* line 864: */
{ 
YRWACTR_labno = Labeldec.Labno;
 /* line 865: */
ZRWACTR_status = Labeldec.Status;
 /* line 866: */
ASWACTR_notsetting = Labeldec.Notsetting;
 /* line 867: */
BSWACTR_name = Labeldec.Name;
 /* line 868: */
CSWACTR_labinfo = (&A_R1INDEX(ZPKACTR_labels,YRWACTR_labno));
 /* line 869: */
 /* line 870: */
if (ASWACTR_notsetting)
{ 
 /* line 871: */
if (ZRWACTR_status==LCAACTR_announcing)
{ 
 /* line 872: */
DSWACTR.Label.Name = QIMACTR_newuniquename();
 /* line 873: */
DSWACTR.Label.Set = A68_FALSE;
 /* line 874: */
QPLACTR_currentenviron(  &ESWACTR );
DSWACTR.Environ = ESWACTR;
 /* line 875: */
DSWACTR.Name = BSWACTR_name;
 /* line 876: */
DSWACTR.Prefix = QIMACTR_newuniquename();
 /* line 878: */
DSWACTR.Flags = VQKACTR_labdeclaredflag;
 /* line 880: */
DSWACTR.Alias = 0;
(*CSWACTR_labinfo) = DSWACTR;
} 
else
{ 
 /* line 881: */
 /* line 882: */
if (ZRWACTR_status>=MCAACTR_aliasing)
{ 
GSWACTR = (*(&((&A_R1INDEX(ZPKACTR_labels,ZRWACTR_status))->Flags))) ;
(void)(WXIACTR_assert(HSWACTR, A_LB_LE(VQKACTR_labdeclaredflag,GSWACTR)));
 /* line 883: */
(void)((*CSWACTR_labinfo) = (*(&A_R1INDEX(ZPKACTR_labels,ZRWACTR_status))));
 /* line 884: */
 /* line 885: */
 /* line 887: */
ISWACTR = (&(CSWACTR_labinfo->Alias)) ;
(*ISWACTR) = ZRWACTR_status;
} 
else
{ 
 /* line 888: */
 /* line 889: */
/*SKIP*/;
} 
} 
} 
else
{ 
JSWACTR = (&((&(CSWACTR_labinfo->Label))->Set)) ;
(*JSWACTR) = A68_TRUE;
 /* line 891: */
 /* line 892: */
WSKACTR_labelfullname( YRWACTR_labno, &LSWACTR );
KSWACTR.data[0] = A_UNITE(MSWACTR,mode2,2,LSWACTR);
 /* line 893: */
QSWACTR = OSWACTR ;
KSWACTR.data[1] = A_UNITE(PSWACTR,mode2,2,QSWACTR);
KSWACTR.data[2] = A_UNITE(RSWACTR,mode4,4,EIAACTR_cnewline);
 /* line 894: */
 /* line 895: */
 /* line 896: */
(void)(MDMACTR_writecstream(A_HISVEC(SSWACTR,KSWACTR,3,A68_66 ), NSLACTR_codestream(VRLACTR_currentlevel())));
} 
} 
A_PROC_EXIT(labdec);
return;
} 
#undef NL
 /* line 900: */
 /* line 901: */
 /* line 902: */
 /* line 903: */
 /* line 904: */
 /* line 905: */
 /* line 906: */
 /* line 907: */
 /* line 908: */
 /* line 910: */

A_STATIC A68_VOID  ETWACTR_zexternaldec(A68_VC  Name, A68_56  Prefix, A68_INT  Mode, A68_INT  Decno, A68_BOOL  Optimised, A68_BOOL  Iddec, A68_BOOL  Globalproc, A68_BOOL  Genproc, A68_BOOL  Forceuse, A68_VC  Definition, A68_VC  Rhs)
{ 
A68_BOOL  MTWACTR;  /* optbool result */
A68_BOOL  NTWACTR;  /* optbool result */
A68_108 * PTWACTR;  /* clause result */
A68_BITS  QTWACTR_idflags A_UNUSED = {0};
A68_BITS  RTWACTR;  /* clause result */
A68_BITS  STWACTR;  /* clause result */
A68_BOOL  TTWACTR;  /* optbool result */
A68_BITS  UTWACTR;  /* clause result */
A68_BITS  VTWACTR;  /* clause result */
A68_BITS  WTWACTR;  /* clause result */
A68_VC  XTWACTR;  /* avoid structure result */
A_PROC_ENTRY(zexternaldec);
 /* line 916: */
 /* line 918: */
{ 
 /* line 920: */
MTWACTR = (Decno<=IAAACTR_maxidno);
if ( ! MTWACTR )
{NTWACTR = (Decno>=LAAACTR_minlibid);
if ( NTWACTR )
{NTWACTR = (Decno<=MAAACTR_maxlibid);
}
MTWACTR = NTWACTR;
}
(void)(WXIACTR_assert(OTWACTR, MTWACTR));
 /* line 922: */
if (Decno<=IAAACTR_maxidno)
{ 
PTWACTR = (&A_R1INDEX(WPKACTR_ids,Decno));
} 
else
{ 
PTWACTR = (&A_R1INDEX(YPKACTR_libraryids,Decno));
} 
QTWACTR_idflags = (*(&(PTWACTR->Flags)));
 /* line 924: */
 /* line 925: */
 /* line 926: */
if (Optimised)
{ 
RTWACTR = HQKACTR_idoptimisedflag;
} 
else
{ 
 /* line 927: */
RTWACTR = AQKACTR_idnoflags;
} 
if (Iddec)
{ 
STWACTR = BQKACTR_ididentityflag;
} 
else
{ 
 /* line 928: */
STWACTR = AQKACTR_idnoflags;
} 
TTWACTR = Genproc;
if ( TTWACTR )
{TTWACTR = A_LB_GE(QTWACTR_idflags,CQKACTR_idkeptflag);
}
if (TTWACTR)
{ 
UTWACTR = KQKACTR_idkeptgenprocflag;
} 
else
{ 
 /* line 929: */
UTWACTR = AQKACTR_idnoflags;
} 
if (Globalproc)
{ 
VTWACTR = JQKACTR_idgprocflag;
} 
else
{ 
 /* line 930: */
VTWACTR = AQKACTR_idnoflags;
} 
if (Forceuse)
{ 
WTWACTR = MQKACTR_idforceuseflag;
} 
else
{ 
WTWACTR = AQKACTR_idnoflags;
} 
 /* line 931: */
 /* line 932: */
 /* line 933: */
ITWACTR_mybefore( Name, ' ', &XTWACTR );
(void)(ZNVACTR_newidinfo(Decno, Mode, XTWACTR, Prefix, (A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )(RTWACTR|STWACTR)|UTWACTR)|VTWACTR)|WTWACTR), Definition, Rhs));
} 
A_PROC_EXIT(zexternaldec);
return;
} 
#undef NL

A_STATIC A68_VOID  ZTWACTR_zexternalcdec(A68_INT  Decno)
{ 
A68_BOOL  BUWACTR;  /* optbool result */
A68_BOOL  CUWACTR;  /* optbool result */
A68_108 * EUWACTR;  /* clause result */
A68_108 * FUWACTR_id A_UNUSED = {0};
A68_BITS  GUWACTR;  /* ADICOPS - >= */
A68_BOOL  HUWACTR;  /* optbool result */
A68_BITS  IUWACTR;  /* ADICOPS - >= */
A68_BOOL  JUWACTR;  /* optbool result */
A68_VC  LUWACTR;  /* OPERATORS - trim index */
A68_VC  MUWACTR;  /* OPERATORS - trim index */
A68_BOOL  OUWACTR;  /* clause result */
A68_INT  PUWACTR_mode A_UNUSED = {0};
A68_BITS  QUWACTR;  /* ADICOPS - >= */
A68_BOOL  RUWACTR_optimised A_UNUSED = {0};
A68_BITS  SUWACTR;  /* ADICOPS - >= */
A68_BOOL  TUWACTR_globalproc A_UNUSED = {0};
A68_VC  UUWACTR_definition A_UNUSED = {0};
A68_VC  VUWACTR_rhs A_UNUSED = {0};
A68_256  WUWACTR;  /* collateral clause result */
A68_66  XUWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  YUWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  ZUWACTR;  /* OPERATORS - istruct -> vector */
A68_INT  AVWACTR_deprocmode A_UNUSED = {0};
A68_BOOL  BVWACTR;  /* optbool result */
A68_BOOL  CVWACTR_voidresult A_UNUSED = {0};
A68_181  DVWACTR;  /* clause result */
A68_181  EVWACTR;  /* avoid structure result */
A68_292  GVWACTR_generator;   /* proc value of non-global proc */
A68_181  LVWACTR;  /* avoid structure result */
A68_181  MVWACTR_params A_UNUSED = {0};
A68_258  NVWACTR;  /* collateral clause result */
A68_66  QVWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  RVWACTR;  /* YIELD */
A68_INT  SVWACTR;  /* clause result */
A68_VC  TVWACTR;  /* avoid structure result */
A68_66  UVWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  VVWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  WVWACTR;  /* YIELD */
A68_VC  XVWACTR;  /* avoid structure result */
A68_66  YVWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  ZVWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  AWWACTR;  /* YIELD */
A68_65  BWWACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  CWWACTR;  /* optbool result */
A68_66  FWWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  GWWACTR;  /* YIELD */
A68_65  HWWACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  IWWACTR_comma A_UNUSED = {0};
A68_INT * JWWACTR_p A_UNUSED = {0};
A68_INT  KWWACTR;  /* forall loop counter */
A68_256  LWWACTR;  /* collateral clause result */
A68_66  MWWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  NWWACTR;  /* YIELD */
A68_66  QWWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  RWWACTR;  /* YIELD */
A68_VC  SWWACTR;  /* avoid structure result */
A68_66  TWWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  UWWACTR;  /* OPERATORS - istruct -> vector */
A68_281  VWWACTR;  /* collateral clause result */
A68_66  WWWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  XWWACTR;  /* YIELD */
A68_66  AXWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  BXWACTR;  /* YIELD */
A68_VC  CXWACTR;  /* avoid structure result */
A68_66  DXWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  EXWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  FXWACTR;  /* YIELD */
A68_65  GXWACTR;  /* OPERATORS - istruct -> vector */
A68_256  HXWACTR;  /* collateral clause result */
A68_66  KXWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  LXWACTR;  /* YIELD */
A68_66  MXWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  NXWACTR;  /* OPERATORS - istruct -> vector */
A68_269  OXWACTR;  /* collateral clause result */
A68_66  RXWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  SXWACTR;  /* YIELD */
A68_VC  TXWACTR;  /* avoid structure result */
A68_66  UXWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  VXWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  WXWACTR;  /* YIELD */
A68_VC  XXWACTR;  /* avoid structure result */
A68_66  YXWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  ZXWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  AYWACTR;  /* YIELD */
A68_66  BYWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  CYWACTR;  /* OPERATORS - istruct -> vector */
A68_256  DYWACTR;  /* collateral clause result */
A68_66  EYWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  FYWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  GYWACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(zexternalcdec);
 /* line 943: */
 /* line 944: */
{ 
BUWACTR = (Decno<=IAAACTR_maxidno);
if ( ! BUWACTR )
{CUWACTR = (Decno>=LAAACTR_minlibid);
if ( CUWACTR )
{CUWACTR = (Decno<=MAAACTR_maxlibid);
}
BUWACTR = CUWACTR;
}
(void)(WXIACTR_assert(DUWACTR, BUWACTR));
 /* line 946: */
if (Decno<=IAAACTR_maxidno)
{ 
EUWACTR = (&A_R1INDEX(WPKACTR_ids,Decno));
} 
else
{ 
EUWACTR = (&A_R1INDEX(YPKACTR_libraryids,Decno));
} 
FUWACTR_id = EUWACTR;
 /* line 949: */
 /* line 950: */
 /* line 951: */
GUWACTR = (*(&(FUWACTR_id->Flags))) ;
HUWACTR = A_LB_GE(GUWACTR,LQKACTR_idloadedflag);
if ( ! HUWACTR )
{ /* line 952: */
IUWACTR = (*(&(FUWACTR_id->Flags))) ;
HUWACTR = A_LB_GE(IUWACTR,MQKACTR_idforceuseflag);
}
 /* line 953: */
if ( ! HUWACTR )
{JUWACTR = ((*(&(FUWACTR_id->Definition))).upb>=9);
if ( JUWACTR )
{LUWACTR = (*(&(FUWACTR_id->Definition))) ;
JUWACTR = A_VC_EQ(A_VTRIM(MUWACTR,(LUWACTR),A_VTSCRIPT(&(MUWACTR.upb),(LUWACTR).upb,((*(&(FUWACTR_id->Definition))).upb-8),(LUWACTR).upb)),NUWACTR);
}
 /* line 954: */
HUWACTR = JUWACTR;
}
 /* line 955: */
OUWACTR = HUWACTR;
if (OUWACTR)
{ 
PUWACTR_mode = (*(&(FUWACTR_id->Mode)));
 /* line 956: */
QUWACTR = (*(&(FUWACTR_id->Flags))) ;
RUWACTR_optimised = A_LB_GE(QUWACTR,HQKACTR_idoptimisedflag);
 /* line 957: */
SUWACTR = (*(&(FUWACTR_id->Flags))) ;
TUWACTR_globalproc = A_LB_GE(SUWACTR,JQKACTR_idgprocflag);
 /* line 958: */
UUWACTR_definition = (*(&(FUWACTR_id->Definition)));
 /* line 959: */
VUWACTR_rhs = (*(&(FUWACTR_id->Rhs)));
 /* line 961: */
 /* line 962: */
 /* line 963: */
if (VUWACTR_rhs.upb>0)
{ 
WUWACTR.data[0] = A_UNITE(XUWACTR,mode2,2,VUWACTR_rhs);
WUWACTR.data[1] = A_UNITE(YUWACTR,mode4,4,EIAACTR_cnewline);
 /* line 964: */
(void)(MDMACTR_writecstream(A_HISVEC(ZUWACTR,WUWACTR,2,A68_66 ), GSLACTR_importsstream));
} 
 /* line 966: */
 /* line 967: */
 /* line 968: */
if (UUWACTR_definition.upb<=0)
{ 
 /* line 969: */
 /* line 970: */
if (TUWACTR_globalproc)
{ 
AVWACTR_deprocmode = A_CALLPROC(SVMACTR_deproc,(PUWACTR_mode),(PUWACTR_mode,(SVMACTR_deproc).nonlocals));
 /* line 971: */
BVWACTR = NQIACTR_nostructresultoption;
if ( BVWACTR )
{BVWACTR = VSMACTR_iscstruct(AVWACTR_deprocmode);
}
CVWACTR_voidresult = BVWACTR;
 /* line 973: */
if (NSMACTR_isprocp(PUWACTR_mode))
{ 
A_CALLPROC(AWMACTR_parameters,(PUWACTR_mode, &EVWACTR),(PUWACTR_mode, &EVWACTR,(AWMACTR_parameters).nonlocals));
DVWACTR = EVWACTR;
} 
else
{ 
A_CLOSURE( GVWACTR_generator, HVWACTR_generator, IVWACTR_generator );
A_CALLPROC(GVWACTR_generator,(A68_FALSE, &LVWACTR),(A68_FALSE, &LVWACTR,(GVWACTR_generator).nonlocals));
DVWACTR = LVWACTR;
} 
MVWACTR_params = DVWACTR;
 /* line 975: */
 /* line 976: */
RVWACTR = PVWACTR ;
NVWACTR.data[0] = A_UNITE(QVWACTR,mode2,2,RVWACTR);
if (CVWACTR_voidresult)
{ 
SVWACTR = UEAACTR_voidmode;
} 
else
{ 
SVWACTR = AVWACTR_deprocmode;
} 
XKNACTR_ctype( SVWACTR, &TVWACTR );
NVWACTR.data[1] = A_UNITE(UVWACTR,mode2,2,TVWACTR);
 /* line 977: */
WVWACTR = ' ' ;
NVWACTR.data[2] = A_UNITE(VVWACTR,mode1,1,WVWACTR);
UTKACTR_idfullname( Decno, &XVWACTR );
NVWACTR.data[3] = A_UNITE(YVWACTR,mode2,2,XVWACTR);
AWWACTR = '(' ;
NVWACTR.data[4] = A_UNITE(ZVWACTR,mode1,1,AWWACTR);
(void)(MDMACTR_writecstream(A_HISVEC(BWWACTR,NVWACTR,5,A68_66 ), GSLACTR_importsstream));
 /* line 979: */
 /* line 980: */
CWWACTR = (MVWACTR_params.upb==0);
if ( CWWACTR )
{CWWACTR = (!CVWACTR_voidresult);
}
 /* line 981: */
if (CWWACTR)
{ 
 /* line 982: */
 /* line 983: */
GWWACTR = EWWACTR ;
(void)(MDMACTR_writecstream(A_HVEC(HWWACTR,A_UNITE(FWWACTR,mode2,2,GWWACTR),A68_66 ), GSLACTR_importsstream));
} 
else
{ 
IWWACTR_comma = A68_FALSE;
 /* line 984: */
 /* line 985: */
KWWACTR = MVWACTR_params.upb -1;
JWWACTR_p = MVWACTR_params.data;
for (;KWWACTR-- >= 0;
(JWWACTR_p++
) )
{
 /* line 986: */
if (IWWACTR_comma)
{ 
NWWACTR = ',' ;
LWWACTR.data[0] = A_UNITE(MWWACTR,mode1,1,NWWACTR);
} 
else
{ 
RWWACTR = PWWACTR ;
LWWACTR.data[0] = A_UNITE(QWWACTR,mode2,2,RWWACTR);
} 
WLNACTR_ctaggedtype( (*JWWACTR_p), &SWWACTR );
LWWACTR.data[1] = A_UNITE(TWWACTR,mode2,2,SWWACTR);
(void)(MDMACTR_writecstream(A_HISVEC(UWWACTR,LWWACTR,2,A68_66 ), GSLACTR_importsstream));
 /* line 987: */
 /* line 988: */
IWWACTR_comma = A68_TRUE;
}
 /* line 990: */
 /* line 991: */
 /* line 992: */
if (CVWACTR_voidresult)
{ 
if (IWWACTR_comma)
{ 
XWWACTR = ',' ;
VWWACTR.data[0] = A_UNITE(WWWACTR,mode1,1,XWWACTR);
} 
else
{ 
BXWACTR = ZWWACTR ;
VWWACTR.data[0] = A_UNITE(AXWACTR,mode2,2,BXWACTR);
} 
XKNACTR_ctype( AVWACTR_deprocmode, &CXWACTR );
VWWACTR.data[1] = A_UNITE(DXWACTR,mode2,2,CXWACTR);
FXWACTR = '*' ;
VWWACTR.data[2] = A_UNITE(EXWACTR,mode1,1,FXWACTR);
 /* line 993: */
 /* line 994: */
(void)(MDMACTR_writecstream(A_HISVEC(GXWACTR,VWWACTR,3,A68_66 ), GSLACTR_importsstream));
} 
} 
 /* line 996: */
LXWACTR = JXWACTR ;
HXWACTR.data[0] = A_UNITE(KXWACTR,mode2,2,LXWACTR);
HXWACTR.data[1] = A_UNITE(MXWACTR,mode4,4,EIAACTR_cnewline);
 /* line 998: */
 /* line 999: */
(void)(MDMACTR_writecstream(A_HISVEC(NXWACTR,HXWACTR,2,A68_66 ), GSLACTR_importsstream));
} 
else
{ 
 /* line 1000: */
if (!RUWACTR_optimised)
{ 
 /* line 1001: */
SXWACTR = QXWACTR ;
OXWACTR.data[0] = A_UNITE(RXWACTR,mode2,2,SXWACTR);
BLNACTR_cvartype( (*(&(YQKACTR_get_idinfo(Decno)->Cvariabletype))), &TXWACTR );
OXWACTR.data[1] = A_UNITE(UXWACTR,mode2,2,TXWACTR);
 /* line 1002: */
WXWACTR = ' ' ;
OXWACTR.data[2] = A_UNITE(VXWACTR,mode1,1,WXWACTR);
UTKACTR_idfullname( Decno, &XXWACTR );
OXWACTR.data[3] = A_UNITE(YXWACTR,mode2,2,XXWACTR);
AYWACTR = ';' ;
OXWACTR.data[4] = A_UNITE(ZXWACTR,mode1,1,AYWACTR);
OXWACTR.data[5] = A_UNITE(BYWACTR,mode4,4,EIAACTR_cnewline);
 /* line 1003: */
 /* line 1004: */
 /* line 1005: */
(void)(MDMACTR_writecstream(A_HISVEC(CYWACTR,OXWACTR,6,A68_66 ), GSLACTR_importsstream));
} 
} 
} 
else
{ 
DYWACTR.data[0] = A_UNITE(EYWACTR,mode2,2,UUWACTR_definition);
DYWACTR.data[1] = A_UNITE(FYWACTR,mode4,4,EIAACTR_cnewline);
 /* line 1006: */
 /* line 1007: */
(void)(MDMACTR_writecstream(A_HISVEC(GYWACTR,DYWACTR,2,A68_66 ), GSLACTR_importsstream));
} 
} 
} 
A_PROC_EXIT(zexternalcdec);
return;
} 
#undef NL

A68_VOID  HYWACTR_initialiseidentifiers(void)
{ 
A68_112  IYWACTR;  /* procedure value */
A68_75  JYWACTR;  /* procedure value */
A_PROC_ENTRY(initialiseidentifiers);
{ 
IYWACTR.fn.fn_global = ETWACTR_zexternaldec;
IYWACTR.nonlocals = A68_NIL;
LXKACTR_externaldec = IYWACTR;
 /* line 1013: */
 /* line 1014: */
JYWACTR.fn.fn_global = ZTWACTR_zexternalcdec;
JYWACTR.nonlocals = A68_NIL;
MXKACTR_externalcdec = JYWACTR;
} 
A_PROC_EXIT(initialiseidentifiers);
return;
} 
#undef NL

A68_INT  LYWACTR_leveloflabel(A68_INT  Labno)
{ 
A68_INT  MYWACTR;  /* clause result */
A_PROC_ENTRY(leveloflabel);
 /* line 1017: */
MYWACTR = (*(&((&((&A_R1INDEX(ZPKACTR_labels,Labno))->Environ))->Level)));
A_PROC_EXIT(leveloflabel);
return( MYWACTR );
} 
#undef NL

A68_VOID  OYWACTR_environoflabel(A68_INT  Labno, A68_72  *ReturnedValue)
{ 
A68_72  PYWACTR;  /* clause result */
A_PROC_ENTRY(environoflabel);
 /* line 1020: */
PYWACTR = (*(&((&A_R1INDEX(ZPKACTR_labels,Labno))->Environ)));
A_PROC_EXIT(environoflabel);
*ReturnedValue = (PYWACTR);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 5: */
 /* line 7: */
void MMVACTR(void)   /* initialise DECS identifiers */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel","-dir",".","identifiers.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/vak/Project/Algol/Algol-68RS-Source/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/vak/Project/Algol/Algol-68RS-Source/a68config/a68config.m","./values.m","./uniquenameserver.m","./unionaids.m","./moduletracer.m","./modes.m","./incmode.m","./incinstallation.m","./modules.m","./incimperatives.m","./incid.m","./idtable.m","./evaluator.m","./environment.m","./environ.m","./denotations.m","./coutput.m","./centities.m","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config A_UNUSED;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
OUPACTR();   /* USE values */
RHMACTR();   /* USE uniquenameserver */
VUQACTR();   /* USE unionaids */
BCHACTR();   /* USE moduletracer */
DNMACTR();   /* USE modes */
ZDAACTR();   /* USE incmode */
ODAACTR();   /* USE incinstallation */
ANOACTR();   /* USE modules */
UAAACTR();   /* USE incimperatives */
BAAACTR();   /* USE incid */
PPKACTR();   /* USE idtable */
JGVACTR();   /* USE evaluator */
HPIACTR();   /* USE environment */
BPLACTR();   /* USE environ */
LLJACTR();   /* USE denotations */
PTLACTR();   /* USE coutput */
THAACTR();   /* USE centities */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/identifiers.a68";
A_config.translation_time = "Thu Nov  5 21:11:00 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "LMVACTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 21:11:00 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS identifiers);
(void)(UEAALIB_a68config(LGAALIB_configinfo, QMVACTR));
 /* line 48: */
 /* line 58: */
 /* line 64: */
 /* line 84: */
 /* line 85: */
 /* line 170: */
 /* line 351: */
 /* line 459: */
 /* line 460: */
 /* line 529: */
 /* line 555: */
 /* line 625: */
 /* line 626: */
 /* line 773: */
 /* line 778: */
 /* line 779: */
 /* line 798: */
 /* line 799: */
 /* line 862: */
 /* line 898: */
 /* line 899: */
 /* line 935: */
 /* line 937: */
 /* line 1009: */
 /* line 1010: */
 /* line 1012: */
 /* line 1016: */
 /* line 1019: */
 /* line 1022: */
 /* line 1024: */
 /* line 1031: */
/*SKIP*/;
A_PROC_EXIT(DECS identifiers);
} 
#undef NL
/* end of translation of identifiers.a68 */
