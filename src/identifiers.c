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

A_PROCEDURE(A68_VOID ,A68t273,(A68_BOOL ,struct A68t127 *),(A68_BOOL ,struct A68t127 *,void *));
typedef struct A68t273  A68_273 ;    /* PROC(BOOL) MODE127 */

A_PROCEDURE(A68_VOID ,A68t274,(A68_BOOL ,struct A68t90 *),(A68_BOOL ,struct A68t90 *,void *));
typedef struct A68t274  A68_274 ;    /* PROC(BOOL) MODE90 */
A_ISTRUCT(struct A68t66 ,4,A68t275);
typedef struct A68t275  A68_275 ;    /* STRUCT 4 MODE66 */
A_ISTRUCT(A68_CHAR ,16,A68t276);
typedef struct A68t276  A68_276 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t277);
typedef struct A68t277  A68_277 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,17,A68t278);
typedef struct A68t278  A68_278 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(struct A68t66 ,10,A68t279);
typedef struct A68t279  A68_279 ;    /* STRUCT 10 MODE66 */

A_PROCEDURE(A68_VOID ,A68t280,(A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t181 ),(A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t181 ,void *));
typedef struct A68t280  A68_280 ;    /* PROC(INT,INT,BOOL,BOOL,BOOL,REF MODE181) VOID */
A_VECTOR(A68_VC ,A68t281);
typedef struct A68t281  A68_281 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t282,(A68_BOOL ,struct A68t281 *),(A68_BOOL ,struct A68t281 *,void *));
typedef struct A68t282  A68_282 ;    /* PROC(BOOL) MODE281 */

A_PROCEDURE(A68_VOID ,A68t283,(A68_VC *),(A68_VC *,void *));
typedef struct A68t283  A68_283 ;    /* PROC MODE26 */
A_ISTRUCT(A68_CHAR ,15,A68t284);
typedef struct A68t284  A68_284 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_VC ,7,A68t285);
typedef struct A68t285  A68_285 ;    /* STRUCT 7 MODE26 */
A_ISTRUCT(struct A68t66 ,3,A68t286);
typedef struct A68t286  A68_286 ;    /* STRUCT 3 MODE66 */
A_ISTRUCT(A68_CHAR ,38,A68t287);
typedef struct A68t287  A68_287 ;    /* STRUCT 38 CHAR */
A_ISTRUCT(A68_CHAR ,42,A68t288);
typedef struct A68t288  A68_288 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t289);
typedef struct A68t289  A68_289 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t290);
typedef struct A68t290  A68_290 ;    /* STRUCT 14 CHAR */

A_PROCEDURE(A68_VOID ,A68t291,(A68_VC ,A68_INT ,struct A68t181 ,A68_INT ,A68_INT ,struct A68t72 ,A68_BITS ),(A68_VC ,A68_INT ,struct A68t181 ,A68_INT ,A68_INT ,struct A68t72 ,A68_BITS ,void *));
typedef struct A68t291  A68_291 ;    /* PROC(REF MODE26,INT,REF MODE181,INT,INT,MODE72,BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t292,(struct A68t139 ),(struct A68t139 ,void *));
typedef struct A68t292  A68_292 ;    /* PROC(MODE139) VOID */
A_ISTRUCT(A68_CHAR ,53,A68t293);
typedef struct A68t293  A68_293 ;    /* STRUCT 53 CHAR */
A_ISTRUCT(A68_CHAR ,27,A68t294);
typedef struct A68t294  A68_294 ;    /* STRUCT 27 CHAR */
A_ISTRUCT(A68_CHAR ,29,A68t295);
typedef struct A68t295  A68_295 ;    /* STRUCT 29 CHAR */

A_PROCEDURE(A68_VOID ,A68t296,(A68_BOOL ,struct A68t181 *),(A68_BOOL ,struct A68t181 *,void *));
typedef struct A68t296  A68_296 ;    /* PROC(BOOL) MODE181 */

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
static A68_127 * SBWACTR_levelprototype A_UNUSED;
static A68_90 * ZBWACTR_levelsetjmp A_UNUSED;
static A68_244   GDWACTR = {"A_SETJMP_FN "}; 
A_GISVEC(A68_VC ,HDWACTR,GDWACTR,12)
static A68_244   XDWACTR = {"A68_jmp_buf "}; 
A_GISVEC(A68_VC ,YDWACTR,XDWACTR,12)
static A68_276   JEWACTR = {"if ( sigsetjmp( "}; 
A_GISVEC(A68_VC ,KEWACTR,JEWACTR,16)
static A68_277   NEWACTR = {".label"}; 
A_GISVEC(A68_VC ,PEWACTR,NEWACTR,6)
static A68_243   SEWACTR = {",1) ) goto "}; 
A_GISVEC(A68_VC ,TEWACTR,SEWACTR,11)
#define GFWACTR_idtype 1
#define HFWACTR_rdtype 2
#define IFWACTR_libtype 3
#define JFWACTR_labtype 4
static A68_254   QFWACTR = {"IDENTIFIERS - library ids not supported"}; 
A_GISVEC(A68_VC ,RFWACTR,QFWACTR,39)
static A68_148   TFWACTR = {"IDENTIFIERS - invalid type of id"}; 
A_GISVEC(A68_VC ,UFWACTR,TFWACTR,32)
static A68_245   BHWACTR = {"(( "}; 
A_GISVEC(A68_VC ,CHWACTR,BHWACTR,3)
static A68_56   HHWACTR = {" * ) ( "}; 
A_GISVEC(A68_VC ,IHWACTR,HHWACTR,7)
static A68_278   NHWACTR = {".nonlocals )) -> "}; 
A_GISVEC(A68_VC ,OHWACTR,NHWACTR,17)
static A68_245   SHWACTR = {" = "}; 
A_GISVEC(A68_VC ,THWACTR,SHWACTR,3)
static A68_250   SJWACTR = {""}; 
A_GISVEC(A68_VC ,TJWACTR,SJWACTR,0)
static A68_268   CKWACTR = {", "}; 
A_GISVEC(A68_VC ,DKWACTR,CKWACTR,2)
static A68_284   IKWACTR = {" *ReturnedValue"}; 
A_GISVEC(A68_VC ,KKWACTR,IKWACTR,15)
static A68_284   LKWACTR = {"void *NonLocals"}; 
A_GISVEC(A68_VC ,MKWACTR,LKWACTR,15)
static A68_250   OKWACTR = {""}; 
A_GISVEC(A68_VC ,PKWACTR,OKWACTR,0)
static A68_247   QKWACTR = {"A_STATIC "}; 
A_GISVEC(A68_VC ,RKWACTR,QKWACTR,9)
static A68_40   VKWACTR = {"void"}; 
A_GISVEC(A68_VC ,WKWACTR,VKWACTR,4)
static A68_278   QLWACTR = {"#define NL(x) ((("}; 
A_GISVEC(A68_VC ,RLWACTR,QLWACTR,17)
static A68_278   VLWACTR = {" *)NonLocals)->x)"}; 
A_GISVEC(A68_VC ,WLWACTR,VLWACTR,17)
static A68_287   OMWACTR = {"   /* proc value of non-global proc */"}; 
A_GISVEC(A68_VC ,PMWACTR,OMWACTR,38)
static A68_250   SMWACTR = {""}; 
A_GISVEC(A68_VC ,TMWACTR,SMWACTR,0)
static A68_288   INWACTR = {"  /* proc non-locals allocated on stack */"}; 
A_GISVEC(A68_VC ,JNWACTR,INWACTR,42)
static A68_250   MNWACTR = {""}; 
A_GISVEC(A68_VC ,NNWACTR,MNWACTR,0)
static A68_278   TNWACTR = {"A_STACK_CLOSURE( "}; 
A_GISVEC(A68_VC ,UNWACTR,TNWACTR,17)
static A68_268   YNWACTR = {", "}; 
A_GISVEC(A68_VC ,ZNWACTR,YNWACTR,2)
static A68_268   DOWACTR = {", "}; 
A_GISVEC(A68_VC ,EOWACTR,DOWACTR,2)
static A68_245   IOWACTR = {" );"}; 
A_GISVEC(A68_VC ,JOWACTR,IOWACTR,3)
static A68_289   POWACTR = {"A_MARKED_CLOSURE( "}; 
A_GISVEC(A68_VC ,QOWACTR,POWACTR,18)
static A68_243   TOWACTR = {"A_CLOSURE( "}; 
A_GISVEC(A68_VC ,UOWACTR,TOWACTR,11)
static A68_268   YOWACTR = {", "}; 
A_GISVEC(A68_VC ,ZOWACTR,YOWACTR,2)
static A68_268   DPWACTR = {", "}; 
A_GISVEC(A68_VC ,EPWACTR,DPWACTR,2)
static A68_245   IPWACTR = {" );"}; 
A_GISVEC(A68_VC ,JPWACTR,IPWACTR,3)
static A68_290   PPWACTR = {"typedef struct"}; 
A_GISVEC(A68_VC ,QPWACTR,PPWACTR,14)
static A68_248   TPWACTR = {"   /* env of non-global proc */"}; 
A_GISVEC(A68_VC ,UPWACTR,TPWACTR,31)
static A68_250   XPWACTR = {""}; 
A_GISVEC(A68_VC ,YPWACTR,XPWACTR,0)
static A68_290   EQWACTR = {" A68_INT mark;"}; 
A_GISVEC(A68_VC ,FQWACTR,EQWACTR,14)
static A68_250   IQWACTR = {""}; 
A_GISVEC(A68_VC ,JQWACTR,IQWACTR,0)
static A68_264   UQWACTR = {"int dummy;"}; 
A_GISVEC(A68_VC ,VQWACTR,UQWACTR,10)
static A68_268   BRWACTR = {"} "}; 
A_GISVEC(A68_VC ,CRWACTR,BRWACTR,2)
static A68_293   WSWACTR = {"IDENTIFIERS - should be aliasing to initialised label"}; 
A_GISVEC(A68_VC ,YSWACTR,WSWACTR,53)
static A68_243   ETWACTR = {": A_UNUSED;"}; 
A_GISVEC(A68_VC ,FTWACTR,ETWACTR,11)
static A68_294   CUWACTR = {"external dec: invalid decno"}; 
A_GISVEC(A68_VC ,FUWACTR,CUWACTR,27)
static A68_295   RUWACTR = {"external c dec: invalid decno"}; 
A_GISVEC(A68_VC ,UUWACTR,RUWACTR,29)
static A68_247   BVWACTR = {"A_prelude"}; 
A_GISVEC(A68_VC ,EVWACTR,BVWACTR,9)
static A68_56   FWWACTR = {"extern "}; 
A_GISVEC(A68_VC ,GWWACTR,FWWACTR,7)
static A68_40   UWWACTR = {"void"}; 
A_GISVEC(A68_VC ,VWWACTR,UWWACTR,4)
static A68_250   FXWACTR = {""}; 
A_GISVEC(A68_VC ,GXWACTR,FXWACTR,0)
static A68_250   PXWACTR = {""}; 
A_GISVEC(A68_VC ,QXWACTR,PXWACTR,0)
static A68_268   ZXWACTR = {");"}; 
A_GISVEC(A68_VC ,AYWACTR,ZXWACTR,2)
static A68_56   GYWACTR = {"extern "}; 
A_GISVEC(A68_VC ,HYWACTR,GYWACTR,7)
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
A68_INT  DCWACTR_n;
A_PAD_INT(PAD_168)
} HCWACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  DCWACTR_n;
A_PAD_INT(PAD_169)
} PCWACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  QIWACTR_a68paramcount;
A_PAD_INT(PAD_170)
} AJWACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  QIWACTR_a68paramcount;
A_PAD_INT(PAD_171)
A68_281  FJWACTR_paramtypes;
A68_281  DJWACTR_paramnames;
A68_BOOL  MIWACTR_usetempforresult;
A_PAD_BOOL(PAD_172)
A68_INT  Resultmode;
A_PAD_INT(PAD_173)
A68_BOOL  PIWACTR_fulldec;
A_PAD_BOOL(PAD_174)
A68_BOOL  Global;
A_PAD_BOOL(PAD_175)
A68_BOOL  Kept;
A_PAD_BOOL(PAD_176)
A68_INT  OIWACTR_cresultmode;
A_PAD_INT(PAD_177)
A68_VC  WIWACTR_fnname;
} RJWACTR_prototype;
typedef struct   /* env of non-global proc */
{
int dummy;
} ZVWACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_VC * WJWACTR_params;
} AKWACTR_addparam;

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

A_STATIC A68_VOID  NBWACTR_generator(A68_BOOL  MBWACTR_anonymous, A68_127  *ReturnedValue);

A_STATIC A68_VOID  UBWACTR_generator(A68_BOOL  TBWACTR_anonymous, A68_90  *ReturnedValue);

A68_VOID  CCWACTR_noteroutineprototype(A68_INT  Level, A68_VC  Prototype);

A_STATIC A68_VOID  GCWACTR_generator(A68_BOOL  ECWACTR_anonymous, A68_127  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OCWACTR_generator(A68_BOOL  MCWACTR_anonymous, A68_90  *ReturnedValue, void *NonLocals);

A68_VOID  CDWACTR_endroutineprototype(A68_INT  Level);

A68_VOID  RDWACTR_declarenonlocallabel(A68_INT  Labno);

A68_VOID  FFWACTR_nonlocaldec(A68_INT  Idno, A68_INT  Level);

A_STATIC A68_VOID  IIWACTR_declarecroutine(A68_INT  Rdenno, A68_INT  Resultmode, A68_BOOL  Global, A68_BOOL  Kept, A68_BOOL  Opsym, A68_181  Params);

A_STATIC A68_VOID  ZIWACTR_generator(A68_BOOL  XIWACTR_anonymous, A68_281  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QJWACTR_prototype(A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZJWACTR_addparam(A68_VC  Text, void *NonLocals);

A68_VOID  OQWACTR_completerddec(void);

A68_VOID  SRWACTR_rddec(A68_VC  Name, A68_INT  Mode, A68_181  Paramdecnos, A68_INT  Resultmode, A68_INT  Rdenno, A68_72  Environ, A68_BITS  Props);

A68_VOID  OSWACTR_labdec(A68_139  Labeldec);

A_STATIC A68_VOID  VTWACTR_zexternaldec(A68_VC  Name, A68_56  Prefix, A68_INT  Mode, A68_INT  Decno, A68_BOOL  Optimised, A68_BOOL  Iddec, A68_BOOL  Globalproc, A68_BOOL  Genproc, A68_BOOL  Forceuse, A68_VC  Definition, A68_VC  Rhs);

A_STATIC A68_VOID  ZTWACTR_mybefore(A68_VC  S, A68_CHAR  C, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  QUWACTR_zexternalcdec(A68_INT  Decno);

A_STATIC A68_VOID  YVWACTR_generator(A68_BOOL  WVWACTR_anonymous, A68_181  *ReturnedValue, void *NonLocals);

A68_VOID  YYWACTR_initialiseidentifiers(void);

A68_INT  CZWACTR_leveloflabel(A68_INT  Labno);

A68_VOID  FZWACTR_environoflabel(A68_INT  Labno, A68_72  *ReturnedValue);

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

A_STATIC A68_VOID  ZJWACTR_addparam(A68_VC  Text, void *NonLocals)
#define NL(x) (((AKWACTR_addparam *)NonLocals)->x)
{ 
A68_VC  BKWACTR;  /* clause result */
A68_VC  EKWACTR;  /* avoid structure result */
A_PROC_ENTRY(addparam);
 /* line 701: */
 /* line 702: */
if ((*NL(WJWACTR_params)).upb==0)
{ 
BKWACTR = Text;
} 
else
{ 
BKWACTR = A_VC_PLUS(A_VC_PLUS((*NL(WJWACTR_params)),DKWACTR),Text);
} 
ZCAAOSF_makervc( BKWACTR, &EKWACTR );
(*NL(WJWACTR_params)) = EKWACTR;
A_PROC_EXIT(addparam);
return;
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
 /* line 202: */
 /* line 203: */
{ 
LQVACTR.data[0] = NQVACTR;
UTKACTR_idfullname( NL(Decno), &OQVACTR );
LQVACTR.data[1] = OQVACTR;
LQVACTR.data[2] = A_HVEC(PQVACTR,' ',A68_CHAR );
LQVACTR.data[3] = Rhs;
JDAAOSF_concat( A_HISVEC(RQVACTR,LQVACTR,4,A68_VC ), &SQVACTR );
ZCAAOSF_makervc( SQVACTR, &TQVACTR );
QQVACTR_definition = TQVACTR;
 /* line 205: */
 /* line 206: */
UQVACTR = (*(&(NL(Initvalue)->Extra))) ;
switch ( UQVACTR.mode )
{ 
case 4: /* STRUCT(INT)  */
VQVACTR_id = (UQVACTR.data.mode4);
 /* line 207: */
 /* line 208: */
{ 
WQVACTR_aliendec = A68_FALSE;
 /* line 209: */
 /* line 210: */
 /* line 211: */
if (VQVACTR_id.Idno==VPKACTR_alienidno)
{ 
WQVACTR_aliendec = A68_TRUE;
 /* line 212: */
XQVACTR = (&UPKACTR_alienidinfo);
} 
else
{ 
 /* line 213: */
XQVACTR = YQKACTR_get_idinfo(VQVACTR_id.Idno);
} 
YQVACTR_rhsidinfo = XQVACTR;
 /* line 216: */
 /* line 217: */
 /* line 218: */
if (NL(DQVACTR_kept))
{ 
 /* line 219: */
ZQVACTR = (&(YQVACTR_rhsidinfo->Flags)) ;
(void)((*ZQVACTR) = (A68_BITS )((*(&(YQVACTR_rhsidinfo->Flags)))|MQKACTR_idforceuseflag));
} 
 /* line 223: */
 /* line 224: */
 /* line 225: */
if (WQVACTR_aliendec)
{ 
 /* line 226: */
 /* line 227: */
 /* line 229: */
if ((*(&(YQVACTR_rhsidinfo->Definition))).upb>0)
{ 
 /* line 230: */
ARVACTR = (*(&(YQVACTR_rhsidinfo->Definition)));
} 
else
{ 
 /* line 231: */
if (RQIACTR_oldalienoption)
{ 
 /* line 232: */
 /* line 233: */
CRVACTR = (*(&(YQVACTR_rhsidinfo->Flags))) ;
if (A_LB_GE(CRVACTR,JQKACTR_idgprocflag))
{ 
 /* line 234: */
XKNACTR_ctype( A_CALLPROC(SVMACTR_deproc,((*(&(YQVACTR_rhsidinfo->Mode)))),((*(&(YQVACTR_rhsidinfo->Mode))),(SVMACTR_deproc).nonlocals)), &FRVACTR );
ERVACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(FRVACTR,A_HVEC(GRVACTR,' ',A68_CHAR )),(*(&(YQVACTR_rhsidinfo->Name)))),HRVACTR);
} 
else
{ 
 /* line 235: */
 /* line 236: */
 /* line 237: */
BLNACTR_cvartype( (*(&(YQVACTR_rhsidinfo->Cvariabletype))), &IRVACTR );
ERVACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(IRVACTR,A_HVEC(JRVACTR,' ',A68_CHAR )),(*(&(YQVACTR_rhsidinfo->Name)))),A_HVEC(KRVACTR,';',A68_CHAR ));
} 
 /* line 238: */
 /* line 239: */
ZCAAOSF_makervc( A_VC_PLUS(LRVACTR,ERVACTR), &MRVACTR );
ARVACTR = MRVACTR;
} 
else
{ 
(void)(VWIACTR_pwarning(904, A_HARR(NRVACTR,(*(&(YQVACTR_rhsidinfo->Name))),A68_VC )));
 /* line 240: */
ORVACTR.data[0] = QRVACTR;
ORVACTR.data[1] = (*(&(YQVACTR_rhsidinfo->Name)));
ORVACTR.data[2] = SRVACTR;
 /* line 241: */
JDAAOSF_concat( A_HISVEC(TRVACTR,ORVACTR,3,A68_VC ), &URVACTR );
ZCAAOSF_makervc( URVACTR, &VRVACTR );
ARVACTR = VRVACTR;
} 
} 
WRVACTR = (&(NL(WPVACTR_idinfo)->Rhs)) ;
(*WRVACTR) = ARVACTR;
 /* line 243: */
 /* line 244: */
XRVACTR = NL(DQVACTR_kept);
if ( XRVACTR )
{XRVACTR = LCPACTR_rscompatiblewithpreviousversion;
}
 /* line 246: */
if (XRVACTR)
{ 
 /* line 247: */
{ 
YRVACTR = 1 ;
ZRVACTR = (*(&((&A_R1INDEX(RCPACTR_specs,YRVACTR))->Keptinfo))) ;
ASVACTR = JNVACTR_keeplistposition(NL(Decno)) ;
BSVACTR_keptinfo = (&A_VINDEX(ZRVACTR,ASVACTR));
 /* line 248: */
CSVACTR = A_VC_NE(QQVACTR_definition,(*(&(BSVACTR_keptinfo->Definition))));
if ( ! CSVACTR )
{ /* line 249: */
CSVACTR = A_VC_NE((*(&(NL(WPVACTR_idinfo)->Rhs))),(*(&(BSVACTR_keptinfo->Rhs))));
}
 /* line 250: */
DSVACTR = CSVACTR;
if (DSVACTR)
{ 
MCPACTR_transcompatiblewithpreviousversi = A68_FALSE;
 /* line 251: */
ESVACTR = 1 ;
FSVACTR = (&((&A_R1INDEX(RCPACTR_specs,ESVACTR))->Timeoflastchange)) ;
(void)((*FSVACTR) = (*(&((&IYIACTR_config_info)->Translationtime))));
 /* line 252: */
GSVACTR = (&(NL(WPVACTR_idinfo)->Prefix)) ;
(void)((*GSVACTR) = QIMACTR_newuniquename());
 /* line 253: */
 /* line 254: */
JSVACTR = (*(&(NL(WPVACTR_idinfo)->Prefix))) ;
HSVACTR.data[0] = A_HISVEC(ISVACTR,JSVACTR,7,A68_CHAR );
HSVACTR.data[1] = A_HVEC(KSVACTR,'_',A68_CHAR );
RRKACTR_afterbang( (*(&(NL(WPVACTR_idinfo)->Name))), &LSVACTR );
HSVACTR.data[2] = LSVACTR;
JDAAOSF_concat( A_HISVEC(MSVACTR,HSVACTR,3,A68_VC ), &NSVACTR );
OSVACTR.source = NSVACTR ;
PSVACTR = (&(NL(WPVACTR_idinfo)->C_name)) ;
(void)((*PSVACTR) = (OSVACTR.destination));
 /* line 255: */
QSVACTR.data[0] = SSVACTR;
UTKACTR_idfullname( NL(Decno), &TSVACTR );
QSVACTR.data[1] = TSVACTR;
QSVACTR.data[2] = A_HVEC(USVACTR,' ',A68_CHAR );
QSVACTR.data[3] = Rhs;
 /* line 256: */
JDAAOSF_concat( A_HISVEC(VSVACTR,QSVACTR,4,A68_VC ), &WSVACTR );
ZCAAOSF_makervc( WSVACTR, &XSVACTR );
QQVACTR_definition = XSVACTR;
} 
} 
} 
 /* line 259: */
ATVACTR = (*(&(NL(WPVACTR_idinfo)->Rhs))) ;
YSVACTR.data[0] = A_UNITE(ZSVACTR,mode2,2,ATVACTR);
YSVACTR.data[1] = A_UNITE(BTVACTR,mode4,4,EIAACTR_cnewline);
 /* line 260: */
(void)(MDMACTR_writecstream(A_HISVEC(CTVACTR,YSVACTR,2,A68_66 ), KSLACTR_nonlocdecstream(0)));
} 
 /* line 263: */
DTVACTR = (&(NL(WPVACTR_idinfo)->Cvariabletype)) ;
(void)((*DTVACTR) = (*(&(YQVACTR_rhsidinfo->Cvariabletype))));
 /* line 264: */
 /* line 265: */
 /* line 266: */
 /* line 267: */
ETVACTR = (&(NL(WPVACTR_idinfo)->Flags)) ;
(void)((*ETVACTR) = (A68_BITS )((*(&(NL(WPVACTR_idinfo)->Flags)))|(*(&(YQVACTR_rhsidinfo->Flags)))));
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 270: */
 /* line 271: */
 /* line 272: */
if (NL(DQVACTR_kept))
{ 
 /* line 273: */
ZCAAOSF_makervc( QQVACTR_definition, &FTVACTR );
GTVACTR = (&(NL(WPVACTR_idinfo)->Definition)) ;
(*GTVACTR) = FTVACTR;
} 
 /* line 275: */
HTVACTR = (&(NL(WPVACTR_idinfo)->Flags)) ;
(void)((*HTVACTR) = (A68_BITS )((*(&(NL(WPVACTR_idinfo)->Flags)))|HQKACTR_idoptimisedflag));
 /* line 277: */
ITVACTR.data[0] = A_UNITE(JTVACTR,mode2,2,QQVACTR_definition);
ITVACTR.data[1] = A_UNITE(KTVACTR,mode4,4,EIAACTR_cnewline);
 /* line 278: */
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
{ /* line 284: */
RTVACTR = (*(&(NL(WPVACTR_idinfo)->Flags))) ;
QTVACTR = A_LB_GE(RTVACTR,CQKACTR_idkeptflag);
}
 /* line 285: */
if (QTVACTR)
{ 
 /* line 286: */
VTVACTR = TTVACTR ;
PTVACTR.data[0] = A_UNITE(UTVACTR,mode2,2,VTVACTR);
} 
else
{ 
 /* line 287: */
ZTVACTR = XTVACTR ;
PTVACTR.data[0] = A_UNITE(YTVACTR,mode2,2,ZTVACTR);
} 
BLNACTR_cvartype( (*(&(NL(WPVACTR_idinfo)->Cvariabletype))), &AUVACTR );
PTVACTR.data[1] = A_UNITE(BUVACTR,mode2,2,AUVACTR);
 /* line 288: */
DUVACTR = ' ' ;
PTVACTR.data[2] = A_UNITE(CUVACTR,mode1,1,DUVACTR);
UTKACTR_idfullname( NL(Decno), &EUVACTR );
PTVACTR.data[3] = A_UNITE(FUVACTR,mode2,2,EUVACTR);
 /* line 289: */
JUVACTR = HUVACTR ;
PTVACTR.data[4] = A_UNITE(IUVACTR,mode2,2,JUVACTR);
if (NL(AQVACTR_global))
{ 
LUVACTR = ';' ;
PTVACTR.data[5] = A_UNITE(KUVACTR,mode1,1,LUVACTR);
} 
else
{ 
 /* line 290: */
PUVACTR = NUVACTR ;
PTVACTR.data[5] = A_UNITE(OUVACTR,mode2,2,PUVACTR);
} 
 /* line 291: */
QUVACTR = (*(&(NL(WPVACTR_idinfo)->Flags))) ;
if (A_LB_GE(QUVACTR,IQKACTR_idopflag))
{ 
 /* line 292: */
 /* line 293: */
WUVACTR = A_VC_PLUS(A_VC_PLUS(TUVACTR,(*(&(NL(WPVACTR_idinfo)->Name)))),UUVACTR) ;
PTVACTR.data[6] = A_UNITE(VUVACTR,mode2,2,WUVACTR);
} 
else
{ 
 /* line 295: */
AVVACTR = YUVACTR ;
PTVACTR.data[6] = A_UNITE(ZUVACTR,mode2,2,AVVACTR);
} 
PTVACTR.data[7] = A_UNITE(BVVACTR,mode4,4,EIAACTR_cnewline);
 /* line 296: */
(void)(MDMACTR_writecstream(A_HISVEC(CVVACTR,PTVACTR,8,A68_66 ), NL(FQVACTR_decstream)));
 /* line 298: */
 /* line 299: */
 /* line 300: */
if (NL(Initvalue)!=(A68_98 *)A68_NIL)
{ 
UTKACTR_idfullname( NL(Decno), &EVVACTR );
DVVACTR.data[0] = A_UNITE(FVVACTR,mode2,2,EVVACTR);
 /* line 301: */
JVVACTR = HVVACTR ;
DVVACTR.data[1] = A_UNITE(IVVACTR,mode2,2,JVVACTR);
BEQACTR_bracketcfragment( NL(Initvalue), &KVVACTR );
DVVACTR.data[2] = A_UNITE(LVVACTR,mode2,2,KVVACTR);
 /* line 303: */
NVVACTR = ';' ;
DVVACTR.data[3] = A_UNITE(MVVACTR,mode1,1,NVVACTR);
DVVACTR.data[4] = A_UNITE(OVVACTR,mode4,4,EIAACTR_cnewline);
 /* line 304: */
 /* line 305: */
 /* line 306: */
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

A_STATIC A68_VOID  GCWACTR_generator(A68_BOOL  ECWACTR_anonymous, A68_127  *ReturnedValue, void *NonLocals)
#define NL(x) (((HCWACTR_generator *)NonLocals)->x)
{ 
A68_127  ICWACTR;  /* clause result */
A68_127  JCWACTR;  /* OPERATORS - dynamic generator */
{ 
JCWACTR.dim[0].upb = NL(DCWACTR_n) ;
JCWACTR.dim[0].lwb = 0 ;
(void)A_1INITSTRIDES(JCWACTR) ;
( ECWACTR_anonymous? A_R1LOC(A68_VC ,JCWACTR): A_R1HEAP(A68_VC ,JCWACTR) );
ICWACTR = JCWACTR;
} 
*ReturnedValue = (ICWACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  OCWACTR_generator(A68_BOOL  MCWACTR_anonymous, A68_90  *ReturnedValue, void *NonLocals)
#define NL(x) (((PCWACTR_generator *)NonLocals)->x)
{ 
A68_90  QCWACTR;  /* clause result */
A68_90  RCWACTR;  /* OPERATORS - dynamic generator */
{ 
RCWACTR.dim[0].upb = NL(DCWACTR_n) ;
RCWACTR.dim[0].lwb = 0 ;
(void)A_1INITSTRIDES(RCWACTR) ;
( MCWACTR_anonymous? A_R1LOC(A68_BOOL ,RCWACTR): A_R1HEAP(A68_BOOL ,RCWACTR) );
QCWACTR = RCWACTR;
} 
*ReturnedValue = (QCWACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ZIWACTR_generator(A68_BOOL  XIWACTR_anonymous, A68_281  *ReturnedValue, void *NonLocals)
#define NL(x) (((AJWACTR_generator *)NonLocals)->x)
{ 
A68_281  BJWACTR;  /* clause result */
A68_281  CJWACTR;  /* OPERATORS - dynamic generator */
{ 
CJWACTR.upb = NL(QIWACTR_a68paramcount) ;
( XIWACTR_anonymous? A_VLOC(A68_VC ,CJWACTR): A_VHEAP(A68_VC ,CJWACTR) );
BJWACTR = CJWACTR;
} 
*ReturnedValue = (BJWACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  QJWACTR_prototype(A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((RJWACTR_prototype *)NonLocals)->x)
{ 
A68_VC  UJWACTR;  /* avoid structure result */
A68_VC * VJWACTR;  /* YIELD */
A68_VC * WJWACTR_params A_UNUSED = {0};
A68_59  YJWACTR_addparam;   /* proc value of non-global proc */
A68_INT  FKWACTR_i A_UNUSED = {0};
A68_INT  GKWACTR;  /* to part of loop */
A68_VC  HKWACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  JKWACTR;  /* avoid structure result */
A68_285  NKWACTR;  /* collateral clause result */
A68_VC  SKWACTR;  /* avoid structure result */
A68_VC  TKWACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  UKWACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XKWACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  YKWACTR;  /* clause result */
A68_36  ZKWACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ALWACTR;  /* avoid structure result */
A_PROC_ENTRY(prototype);
{ 
ZCAAOSF_makervc( TJWACTR, &UJWACTR );
VJWACTR = A_LOC(A68_VC ) ;
(void)((*VJWACTR) = UJWACTR) ;
WJWACTR_params = VJWACTR;
 /* line 700: */
A_CLOSURE( YJWACTR_addparam, ZJWACTR_addparam, AKWACTR_addparam );
(( AKWACTR_addparam * ) ( YJWACTR_addparam.nonlocals )) -> WJWACTR_params = WJWACTR_params;
 /* line 704: */
 /* line 705: */
GKWACTR = NL(QIWACTR_a68paramcount);
for ( FKWACTR_i = 1;
FKWACTR_i <= GKWACTR;
FKWACTR_i += 1 )
{ 
 /* line 706: */
 /* line 707: */
(void)(A_CALLPROC(YJWACTR_addparam,(A_VC_PLUS(A_VC_PLUS((*(&A_VINDEX(NL(FJWACTR_paramtypes),FKWACTR_i))),A_HVEC(HKWACTR,' ',A68_CHAR )),(*(&A_VINDEX(NL(DJWACTR_paramnames),FKWACTR_i))))),(A_VC_PLUS(A_VC_PLUS((*(&A_VINDEX(NL(FJWACTR_paramtypes),FKWACTR_i))),A_HVEC(HKWACTR,' ',A68_CHAR )),(*(&A_VINDEX(NL(DJWACTR_paramnames),FKWACTR_i)))),(YJWACTR_addparam).nonlocals)));
}
 /* line 709: */
 /* line 710: */
 /* line 711: */
if (NL(MIWACTR_usetempforresult))
{ 
 /* line 712: */
XKNACTR_ctype( NL(Resultmode), &JKWACTR );
(void)(A_CALLPROC(YJWACTR_addparam,(A_VC_PLUS(JKWACTR,KKWACTR)),(A_VC_PLUS(JKWACTR,KKWACTR),(YJWACTR_addparam).nonlocals)));
} 
 /* line 713: */
 /* line 714: */
 /* line 715: */
if (NL(PIWACTR_fulldec))
{ 
 /* line 716: */
(void)(A_CALLPROC(YJWACTR_addparam,(MKWACTR),(MKWACTR,(YJWACTR_addparam).nonlocals)));
} 
 /* line 718: */
 /* line 719: */
if (NL(Global)&NL(Kept))
{ 
NKWACTR.data[0] = PKWACTR;
} 
else
{ 
 /* line 720: */
NKWACTR.data[0] = RKWACTR;
} 
XKNACTR_ctype( NL(OIWACTR_cresultmode), &SKWACTR );
NKWACTR.data[1] = SKWACTR;
NKWACTR.data[2] = A_HVEC(TKWACTR,' ',A68_CHAR );
NKWACTR.data[3] = NL(WIWACTR_fnname);
 /* line 721: */
NKWACTR.data[4] = A_HVEC(UKWACTR,'(',A68_CHAR );
if ((*WJWACTR_params).upb==0)
{ 
NKWACTR.data[5] = WKWACTR;
} 
else
{ 
 /* line 723: */
NKWACTR.data[5] = (*WJWACTR_params);
} 
NKWACTR.data[6] = A_HVEC(XKWACTR,')',A68_CHAR );
 /* line 724: */
JDAAOSF_concat( A_HISVEC(ZKWACTR,NKWACTR,7,A68_VC ), &ALWACTR );
YKWACTR = ALWACTR;
} 
A_PROC_EXIT(prototype);
*ReturnedValue = (YKWACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ZTWACTR_mybefore(A68_VC  S, A68_CHAR  C, A68_VC  *ReturnedValue)
{ 
A68_VC  AUWACTR;  /* clause result */
A68_VC  BUWACTR;  /* OPERATORS - trim index */
A_PROC_ENTRY(mybefore);
AUWACTR = A_VTRIM(BUWACTR,(S),A_VTSCRIPT(&(BUWACTR.upb),(S).upb,1,KMAAOSF_truncate(C, S)));
A_PROC_EXIT(mybefore);
*ReturnedValue = (AUWACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  YVWACTR_generator(A68_BOOL  WVWACTR_anonymous, A68_181  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZVWACTR_generator *)NonLocals)->x)
{ 
A68_181  AWWACTR;  /* clause result */
A68_181  BWWACTR;  /* OPERATORS - dynamic generator */
{ 
BWWACTR.upb = 0 ;
( WVWACTR_anonymous? A_VLOC(A68_INT ,BWWACTR): A_VHEAP(A68_INT ,BWWACTR) );
AWWACTR = BWWACTR;
} 
*ReturnedValue = (AWWACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  TMVACTR_debugmessage(A68_INT  Level, A68_VC  M)
{ 
A68_VC  ZMVACTR;  /* avoid structure result */
A_PROC_ENTRY(debugmessage);
 /* line 51: */
 /* line 52: */
 /* line 53: */
if (ZCHACTR_tracelevel(VMVACTR)>=Level)
{ 
 /* line 54: */
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
 /* line 61: */
 /* line 62: */
{ 
(void)(WXIACTR_assert(ENVACTR, (Dummydec.Type==8)));
 /* line 63: */
FNVACTR.Level = 1;
 /* line 64: */
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
 /* line 75: */
 /* line 76: */
{ 
KNVACTR_pos = 0;
 /* line 77: */
LNVACTR_found = A68_FALSE;
 /* line 78: */
MNVACTR_upbkepts = ICPACTR_keptdecnos.dim[0].upb;
 /* line 79: */
for ( ;; )
{ 
NNVACTR = (!LNVACTR_found);
if ( NNVACTR )
{ /* line 80: */
NNVACTR = (KNVACTR_pos<MNVACTR_upbkepts);
}
if ( !(NNVACTR) ) break;
 /* line 81: */
ONVACTR = KNVACTR_pos+=1 ;
(void)(LNVACTR_found = ((*(&A_R1INDEX(ICPACTR_keptdecnos,ONVACTR)))==Decno));
}
 /* line 82: */
(void)(WXIACTR_assert(QNVACTR, LNVACTR_found));
 /* line 83: */
 /* line 84: */
RNVACTR = KNVACTR_pos;
} 
A_PROC_EXIT(keeplistposition);
return( RNVACTR );
} 
#undef NL
 /* line 88: */
 /* line 89: */
 /* line 90: */
 /* line 91: */
 /* line 92: */
 /* line 94: */

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
 /* line 99: */
 /* line 100: */
{ 
AOVACTR_newid = YQKACTR_get_idinfo(Decno);
 /* line 102: */
 /* line 103: */
BOVACTR = A_LB_GE(Flags,BQKACTR_ididentityflag);
if ( BOVACTR )
{BOVACTR = (!A_LB_GE(Flags,HQKACTR_idoptimisedflag));
}
 /* line 104: */
if ( ! BOVACTR )
{BOVACTR = A_LB_GE(Flags,EQKACTR_idforallflag);
}
 /* line 105: */
if ( ! BOVACTR )
{BOVACTR = A_LB_GE(Flags,GQKACTR_idformalflag);
}
COVACTR_cvariabletype = TKNACTR_givecvariabletype(Mode, BOVACTR);
 /* line 108: */
 /* line 109: */
 /* line 110: */
 /* line 111: */
 /* line 112: */
if (A_VC_NE(A_HISVEC(DOVACTR,Prefix,7,A68_CHAR ),A_HISVEC(EOVACTR,RNOACTR_nulluname,7,A68_CHAR )))
{ 
 /* line 113: */
 /* line 114: */
FOVACTR = (*(&(AOVACTR_newid->Flags))) ;
GOVACTR = A_LB_GE(FOVACTR,CQKACTR_idkeptflag);
if ( GOVACTR )
{GOVACTR = LCPACTR_rscompatiblewithpreviousversion;
}
if ( GOVACTR )
{ /* line 115: */
 /* line 116: */
IOVACTR = 1 ;
JOVACTR = (*(&((&A_R1INDEX(RCPACTR_specs,IOVACTR))->Keptinfo))) ;
KOVACTR = JNVACTR_keeplistposition(Decno) ;
MOVACTR = (*(&((&A_VINDEX(JOVACTR,KOVACTR))->Prefix))) ;
GOVACTR = A_VC_NE(A_HISVEC(HOVACTR,Prefix,7,A68_CHAR ),A_HISVEC(LOVACTR,MOVACTR,7,A68_CHAR ));
}
 /* line 117: */
if (GOVACTR)
{ 
MCPACTR_transcompatiblewithpreviousversi = A68_FALSE;
 /* line 118: */
 /* line 120: */
NOVACTR = 1 ;
OOVACTR = (&((&A_R1INDEX(RCPACTR_specs,NOVACTR))->Timeoflastchange)) ;
(void)((*OOVACTR) = (*(&((&IYIACTR_config_info)->Translationtime))));
} 
 /* line 121: */
 /* line 122: */
 /* line 124: */
POVACTR = Prefix;
} 
else
{ 
QPLACTR_currentenviron(  &QOVACTR );
ROVACTR = (!PRLACTR_isgloballevel(QOVACTR));
if ( ! ROVACTR )
{ /* line 126: */
SOVACTR = (*(&(AOVACTR_newid->Flags))) ;
ROVACTR = (!A_LB_GE(SOVACTR,CQKACTR_idkeptflag));
}
 /* line 127: */
if ( ! ROVACTR )
{ROVACTR = (!LCPACTR_rscompatiblewithpreviousversion);
}
 /* line 128: */
if (ROVACTR)
{ 
 /* line 129: */
POVACTR = QIMACTR_newuniquename();
} 
else
{ 
{ 
TOVACTR = 1 ;
UOVACTR = (*(&((&A_R1INDEX(RCPACTR_specs,TOVACTR))->Keptinfo))) ;
VOVACTR = JNVACTR_keeplistposition(Decno) ;
WOVACTR_keptinfo = (&A_VINDEX(UOVACTR,VOVACTR));
 /* line 132: */
 /* line 133: */
 /* line 134: */
XOVACTR = A_LB_GE(Flags,BQKACTR_ididentityflag);
if ( XOVACTR )
{XOVACTR = (!(*(&(WOVACTR_keptinfo->Iddec))));
}
 /* line 136: */
if ( ! XOVACTR )
{ /* line 137: */
 /* line 138: */
YOVACTR = A_LB_GE(Flags,HQKACTR_idoptimisedflag);
if ( YOVACTR )
{YOVACTR = (!(*(&(WOVACTR_keptinfo->Optimised))));
}
 /* line 139: */
XOVACTR = YOVACTR;
}
ZOVACTR = XOVACTR;
if (ZOVACTR)
{ 
MCPACTR_transcompatiblewithpreviousversi = A68_FALSE;
 /* line 140: */
APVACTR = 1 ;
BPVACTR = (&((&A_R1INDEX(RCPACTR_specs,APVACTR))->Timeoflastchange)) ;
(void)((*BPVACTR) = (*(&((&IYIACTR_config_info)->Translationtime))));
 /* line 141: */
 /* line 142: */
 /* line 144: */
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
 /* line 146: */
 /* line 148: */
if (TUKACTR_standopsym(A68name))
{ 
DPVACTR = IQKACTR_idopflag;
} 
else
{ 
DPVACTR = AQKACTR_idnoflags;
} 
EPVACTR_new_flags = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(AOVACTR_newid->Flags)))&NQKACTR_idpresetflags)|Flags)|DPVACTR);
 /* line 150: */
 /* line 151: */
 /* line 152: */
FPVACTR = A_LB_GE(Flags,GQKACTR_idformalflag);
if ( FPVACTR )
{FPVACTR = (A68name.upb>0);
}
if ( FPVACTR )
{ /* line 153: */
GPVACTR = 1 ;
FPVACTR = ((*(&A_VINDEX(A68name,GPVACTR)))!='!');
}
 /* line 155: */
if (FPVACTR)
{ 
 /* line 156: */
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
 /* line 157: */
PPVACTR.source = A_VC_PLUS(A_VC_PLUS(A_HISVEC(NPVACTR,CPVACTR_newidprefix,7,A68_CHAR ),A_HVEC(OPVACTR,'_',A68_CHAR )),KPVACTR) ;
HPVACTR = (PPVACTR.destination);
} 
QPVACTR_c_name = HPVACTR;
 /* line 159: */
 /* line 160: */
 /* line 161: */
RPVACTR.Mode = Mode;
 /* line 162: */
RPVACTR.Cvariabletype = COVACTR_cvariabletype;
 /* line 163: */
QPLACTR_currentenviron(  &SPVACTR );
RPVACTR.Environ = SPVACTR;
 /* line 164: */
RPVACTR.Name = A68name;
 /* line 165: */
RPVACTR.C_name = QPVACTR_c_name;
 /* line 166: */
RPVACTR.Prefix = CPVACTR_newidprefix;
 /* line 167: */
RPVACTR.Flags = EPVACTR_new_flags;
 /* line 169: */
RPVACTR.Definition = Definition;
 /* line 170: */
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
 /* line 186: */
 /* line 187: */
{ 
WPVACTR_idinfo = YQKACTR_get_idinfo(Decno);
 /* line 188: */
XPVACTR_level = (*(&((&(WPVACTR_idinfo->Environ))->Level)));
 /* line 189: */
YPVACTR_block = (*(&((&(WPVACTR_idinfo->Environ))->Block)));
 /* line 190: */
ZPVACTR = (XPVACTR_level==0);
if ( ZPVACTR )
{ZPVACTR = (YPVACTR_block==0);
}
AQVACTR_global = ZPVACTR;
 /* line 191: */
BQVACTR = AQVACTR_global;
if ( BQVACTR )
{CQVACTR = (*(&(WPVACTR_idinfo->Flags))) ;
BQVACTR = A_LB_GE(CQVACTR,CQKACTR_idkeptflag);
}
DQVACTR_kept = BQVACTR;
 /* line 193: */
 /* line 194: */
 /* line 195: */
 /* line 196: */
if (AQVACTR_global)
{ 
 /* line 197: */
EQVACTR = KSLACTR_nonlocdecstream(XPVACTR_level);
} 
else
{ 
EQVACTR = QSLACTR_locdecstream(XPVACTR_level);
} 
FQVACTR_decstream = EQVACTR;
 /* line 199: */
GQVACTR_codestream = NSLACTR_codestream(XPVACTR_level);
 /* line 201: */
A_CLOSURE( IQVACTR_optidentity, JQVACTR_optidentity, KQVACTR_optidentity );
(( KQVACTR_optidentity * ) ( IQVACTR_optidentity.nonlocals )) -> Decno = Decno;
(( KQVACTR_optidentity * ) ( IQVACTR_optidentity.nonlocals )) -> Initvalue = Initvalue;
(( KQVACTR_optidentity * ) ( IQVACTR_optidentity.nonlocals )) -> DQVACTR_kept = DQVACTR_kept;
(( KQVACTR_optidentity * ) ( IQVACTR_optidentity.nonlocals )) -> WPVACTR_idinfo = WPVACTR_idinfo;
 /* line 280: */
 /* line 281: */
 /* line 283: */
A_CLOSURE( MTVACTR_declarecvariable, NTVACTR_declarecvariable, OTVACTR_declarecvariable );
(( OTVACTR_declarecvariable * ) ( MTVACTR_declarecvariable.nonlocals )) -> AQVACTR_global = AQVACTR_global;
(( OTVACTR_declarecvariable * ) ( MTVACTR_declarecvariable.nonlocals )) -> WPVACTR_idinfo = WPVACTR_idinfo;
(( OTVACTR_declarecvariable * ) ( MTVACTR_declarecvariable.nonlocals )) -> Decno = Decno;
(( OTVACTR_declarecvariable * ) ( MTVACTR_declarecvariable.nonlocals )) -> FQVACTR_decstream = FQVACTR_decstream;
(( OTVACTR_declarecvariable * ) ( MTVACTR_declarecvariable.nonlocals )) -> Initvalue = Initvalue;
(( OTVACTR_declarecvariable * ) ( MTVACTR_declarecvariable.nonlocals )) -> GQVACTR_codestream = GQVACTR_codestream;
 /* line 308: */
 /* line 309: */
QVVACTR = (Initvalue!=(A68_98 *)A68_NIL);
if ( QVVACTR )
{ /* line 310: */
RVVACTR = (*(&(WPVACTR_idinfo->Flags))) ;
QVVACTR = A_LB_GE(RVVACTR,BQKACTR_ididentityflag);
}
if (QVVACTR)
{ 
 /* line 311: */
SVVACTR = (*(&(Initvalue->Extra))) ;
switch ( SVVACTR.mode )
{ 
case 1: /* LONG BITS */
 /* line 312: */
 /* line 313: */
UZPACTR_getcfragment( Initvalue, &TVVACTR );
(void)(A_CALLPROC(IQVACTR_optidentity,(TVVACTR),(TVVACTR,(IQVACTR_optidentity).nonlocals)));
break;
case 6: /* VECTOR [] CHAR */
UVVACTR_cf = (SVVACTR.data.mode6);
 /* line 314: */
 /* line 315: */
 /* line 316: */
VVVACTR = IWPACTR_hasattribute(Initvalue, QKJACTR_constant);
if ( VVVACTR )
{ /* line 317: */
VVVACTR = (!IWPACTR_hasattribute(Initvalue, WKJACTR_isnil));
}
 /* line 318: */
if ( VVVACTR )
{ /* line 319: */
VVVACTR = (IOMACTR_modetype((*(&(Initvalue->Mode))))==EEAACTR_primitive);
}
 /* line 320: */
if ( ! VVVACTR )
{ /* line 321: */
 /* line 322: */
WVVACTR = IWPACTR_hasattribute(Initvalue, (A68_BITS )(QKJACTR_constant|WKJACTR_isnil));
if ( WVVACTR )
{ /* line 257: */
 /* line 323: */
XVVACTR = (*(&(WPVACTR_idinfo->Flags))) ;
WVVACTR = (!A_LB_GE(XVVACTR,CQKACTR_idkeptflag));
}
 /* line 324: */
VVVACTR = WVVACTR;
}
if (VVVACTR)
{ 
 /* line 325: */
 /* line 326: */
(void)(A_CALLPROC(IQVACTR_optidentity,(UVVACTR_cf),(UVVACTR_cf,(IQVACTR_optidentity).nonlocals)));
} 
else
{ 
 /* line 327: */
(void)(A_CALLPROC(MTVACTR_declarecvariable,(),((MTVACTR_declarecvariable).nonlocals)));
} 
break;
case 4: /* STRUCT(INT)  */
YVVACTR_id = (SVVACTR.data.mode4);
 /* line 328: */
 /* line 329: */
{ 
 /* line 330: */
 /* line 331: */
if (YVVACTR_id.Idno==VPKACTR_alienidno)
{ 
ZVVACTR = (&UPKACTR_alienidinfo);
} 
else
{ 
 /* line 332: */
ZVVACTR = YQKACTR_get_idinfo(YVVACTR_id.Idno);
} 
AWVACTR_rhsidinfo = ZVVACTR;
 /* line 333: */
 /* line 334: */
 /* line 335: */
BWVACTR = PRLACTR_isgloballevel((*(&(AWVACTR_rhsidinfo->Environ))));
if ( BWVACTR )
{ /* line 336: */
BWVACTR = ((*(&(WPVACTR_idinfo->Mode)))==(*(&(AWVACTR_rhsidinfo->Mode))));
}
 /* line 339: */
if ( BWVACTR )
{ /* line 340: */
CWVACTR = (*(&(WPVACTR_idinfo->Flags))) ;
DWVACTR = (!A_LB_GE(CWVACTR,CQKACTR_idkeptflag));
if ( ! DWVACTR )
{ /* line 341: */
DWVACTR = (YVVACTR_id.Idno==VPKACTR_alienidno);
}
if ( ! DWVACTR )
{ /* line 342: */
EWVACTR = (*(&(AWVACTR_rhsidinfo->Flags))) ;
DWVACTR = A_LB_GE(EWVACTR,CQKACTR_idkeptflag);
}
 /* line 343: */
BWVACTR = DWVACTR;
}
FWVACTR = BWVACTR;
if (FWVACTR)
{ 
 /* line 344: */
 /* line 345: */
UTKACTR_idfullname( YVVACTR_id.Idno, &GWVACTR );
(void)(A_CALLPROC(IQVACTR_optidentity,(GWVACTR),(GWVACTR,(IQVACTR_optidentity).nonlocals)));
} 
else
{ 
 /* line 347: */
(void)(A_CALLPROC(MTVACTR_declarecvariable,(),((MTVACTR_declarecvariable).nonlocals)));
} 
} 
break;
default: 
 /* line 348: */
 /* line 349: */
(void)(A_CALLPROC(MTVACTR_declarecvariable,(),((MTVACTR_declarecvariable).nonlocals)));
break;
} 
} 
else
{ 
 /* line 350: */
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
 /* line 371: */
 /* line 372: */
{ 
 /* line 373: */
 /* line 374: */
 /* line 375: */
 /* line 376: */
 /* line 377: */
 /* line 378: */
 /* line 379: */
 /* line 381: */
SWVACTR_type = Identifierdec.Type;
 /* line 382: */
TWVACTR_mode = Identifierdec.Mode;
 /* line 383: */
UWVACTR_decno = Identifierdec.Decno;
 /* line 385: */
VWVACTR_name = Identifierdec.Name;
 /* line 386: */
WWVACTR_newid = YQKACTR_get_idinfo(UWVACTR_decno);
 /* line 388: */
 /* line 390: */
 /* line 391: */
switch ( SWVACTR_type )
{ 
case 1: 
 /* line 392: */
{ 
(void)(GMVACTR_evaluatestack(Valuestack));
 /* line 393: */
YWVACTR_initialvalue = (&((*Valuestack)->Value));
 /* line 394: */
(void)((*Valuestack) = (*(&((*Valuestack)->Rest))));
 /* line 395: */
(void)(ZNVACTR_newidinfo(UWVACTR_decno, TWVACTR_mode, VWVACTR_name, RNOACTR_nulluname, BQKACTR_ididentityflag, A_VVAC(AXVACTR), A_VVAC(ZWVACTR)));
 /* line 396: */
 /* line 397: */
 /* line 398: */
(void)(VPVACTR_outputcdeclaration(UWVACTR_decno, YWVACTR_initialvalue));
} 
break;
case 2: 
 /* line 399: */
{ 
 /* line 346: */
 /* line 400: */
 /* line 401: */
if (TWVACTR_mode>WFAACTR_refrefmark)
{ 
 /* line 402: */
(void)(MXIACTR_portabilitywarning(810));
} 
 /* line 403: */
(void)(ZNVACTR_newidinfo(UWVACTR_decno, TWVACTR_mode, VWVACTR_name, RNOACTR_nulluname, AQKACTR_idnoflags, A_VVAC(CXVACTR), A_VVAC(BXVACTR)));
 /* line 404: */
 /* line 405: */
 /* line 406: */
(void)(VPVACTR_outputcdeclaration(UWVACTR_decno, XWVACTR_noinitialvalue));
} 
break;
case 3: 
 /* line 407: */
 /* line 408: */
 /* line 409: */
(void)(ZNVACTR_newidinfo(UWVACTR_decno, TWVACTR_mode, VWVACTR_name, RNOACTR_nulluname, GQKACTR_idformalflag, A_VVAC(EXVACTR), A_VVAC(DXVACTR)));
break;
case 4: 
 /* line 410: */
{ 
(void)(ZNVACTR_newidinfo(UWVACTR_decno, TWVACTR_mode, VWVACTR_name, RNOACTR_nulluname, FQKACTR_idforflag, A_VVAC(GXVACTR), A_VVAC(FXVACTR)));
 /* line 411: */
 /* line 412: */
 /* line 413: */
(void)(VPVACTR_outputcdeclaration(UWVACTR_decno, XWVACTR_noinitialvalue));
} 
break;
case 5: 
 /* line 414: */
{ 
(void)(ZNVACTR_newidinfo(UWVACTR_decno, TWVACTR_mode, VWVACTR_name, RNOACTR_nulluname, AQKACTR_idnoflags, A_VVAC(IXVACTR), A_VVAC(HXVACTR)));
 /* line 415: */
(void)(GMVACTR_evaluatestack(Valuestack));
 /* line 416: */
JXVACTR_initialvalue = (&((*Valuestack)->Value));
 /* line 417: */
(void)((*Valuestack) = (*(&((*Valuestack)->Rest))));
 /* line 419: */
 /* line 420: */
 /* line 421: */
(void)(VPVACTR_outputcdeclaration(UWVACTR_decno, JXVACTR_initialvalue));
} 
break;
case 6: 
 /* line 422: */
{ 
(void)(WXIACTR_assert(LXVACTR, A68_FALSE));
 /* line 423: */
 /* line 424: */
/*SKIP*/;
} 
break;
case 7: 
 /* line 429: */
{ 
MXVACTR_rowmode = (*(&((&((*Valuestack)->Value))->Mode)));
 /* line 430: */
NXVACTR_forallmode = TWVACTR_mode;
 /* line 440: */
(void)(ZNVACTR_newidinfo(UWVACTR_decno, NXVACTR_forallmode, VWVACTR_name, RNOACTR_nulluname, EQKACTR_idforallflag, A_VVAC(PXVACTR), A_VVAC(OXVACTR)));
 /* line 441: */
 /* line 442: */
 /* line 443: */
(void)(VPVACTR_outputcdeclaration(UWVACTR_decno, XWVACTR_noinitialvalue));
} 
break;
case 8: 
 /* line 444: */
 /* line 445: */
 /* line 446: */
QXVACTR.Mode = TWVACTR_mode;
 /* line 447: */
QXVACTR.Cvariabletype = 0;
 /* line 448: */
QPLACTR_currentenviron(  &RXVACTR );
QXVACTR.Environ = RXVACTR;
 /* line 449: */
QXVACTR.Name = VWVACTR_name;
 /* line 450: */
QXVACTR.C_name = A_VVAC(SXVACTR);
 /* line 451: */
QXVACTR.Prefix = QIMACTR_newuniquename();
 /* line 452: */
 /* line 453: */
QXVACTR.Flags = (A68_BITS )((A68_BITS )((*(&(WWVACTR_newid->Flags)))&NQKACTR_idpresetflags)|BQKACTR_ididentityflag);
 /* line 455: */
QXVACTR.Definition = A_VVAC(TXVACTR);
 /* line 456: */
QXVACTR.Rhs = A_VVAC(UXVACTR);
 /* line 457: */
(*WWVACTR_newid) = QXVACTR;
break;
default: 
 /* line 458: */
 /* line 459: */
(void)(WXIACTR_assert(WXVACTR, A68_FALSE));
break;
} 
} 
A_PROC_EXIT(iddec);
return;
} 
#undef NL
 /* line 463: */
 /* line 465: */

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
 /* line 469: */
 /* line 470: */
{ 
(void)(WXIACTR_assert(CYVACTR, (Choicedec.Type==6)));
 /* line 471: */
DYVACTR_decno = Choicedec.Decno;
 /* line 472: */
EYVACTR_choicemode = Choicedec.Mode;
 /* line 474: */
 /* line 475: */
 /* line 476: */
if (Modeindex>0)
{ 
 /* line 477: */
(void)(ZNVACTR_newidinfo(DYVACTR_decno, EYVACTR_choicemode, Choicedec.Name, RNOACTR_nulluname, (A68_BITS )(BQKACTR_ididentityflag|DQKACTR_idccdecflag), A_VVAC(GYVACTR), A_VVAC(FYVACTR)));
 /* line 478: */
 /* line 479: */
 /* line 480: */
 /* line 481: */
HYVACTR.Mode = EYVACTR_choicemode;
 /* line 482: */
HYVACTR.Info = PKJACTR_defaultinfo;
 /* line 483: */
 /* line 484: */
UZPACTR_getcfragment( Enquiry, &JYVACTR );
ROAAOSF_whole( Modeindex, 0, &LYVACTR );
NYVACTR = A_VC_PLUS(A_VC_PLUS(JYVACTR,KYVACTR),LYVACTR) ;
HYVACTR.Extra = A_UNITE(MYVACTR,mode6,6,NYVACTR);
 /* line 485: */
(void)(VPVACTR_outputcdeclaration(DYVACTR_decno, QYVACTR_assignment(A_LOC(A68_98 ), HYVACTR)));
} 
else
{ 
 /* line 486: */
 /* line 487: */
if (Modeindex<0)
{ 
 /* line 488: */
(void)(ZNVACTR_newidinfo(DYVACTR_decno, EYVACTR_choicemode, Choicedec.Name, RNOACTR_nulluname, (A68_BITS )(BQKACTR_ididentityflag|DQKACTR_idccdecflag), A_VVAC(DZVACTR), A_VVAC(CZVACTR)));
 /* line 489: */
(void)(VPVACTR_outputcdeclaration(DYVACTR_decno, (A68_98 *)A68_NIL));
 /* line 491: */
UZPACTR_getcfragment( Enquiry, &EZVACTR );
FZVACTR_enquiryname = EZVACTR;
 /* line 492: */
UTKACTR_idfullname( DYVACTR_decno, &GZVACTR );
HZVACTR_newunionname = GZVACTR;
 /* line 494: */
IZVACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 496: */
 /* line 497: */
A_CALLPROC(YVMACTR_constituents,((*(&(Enquiry->Mode))), &JZVACTR),((*(&(Enquiry->Mode))), &JZVACTR,(YVMACTR_constituents).nonlocals));
A_CALLPROC(YVMACTR_constituents,(EYVACTR_choicemode, &KZVACTR),(EYVACTR_choicemode, &KZVACTR,(YVMACTR_constituents).nonlocals));
LZVACTR_modeoffset = (GWQACTR_findints(KZVACTR, JZVACTR)-1);
 /* line 499: */
 /* line 500: */
QZVACTR = OZVACTR ;
MZVACTR.data[0] = A_UNITE(PZVACTR,mode2,2,QZVACTR);
MZVACTR.data[1] = A_UNITE(RZVACTR,mode2,2,HZVACTR_newunionname);
 /* line 501: */
TZVACTR = ',' ;
MZVACTR.data[2] = A_UNITE(SZVACTR,mode1,1,TZVACTR);
MZVACTR.data[3] = A_UNITE(UZVACTR,mode2,2,FZVACTR_enquiryname);
 /* line 502: */
YZVACTR = WZVACTR ;
MZVACTR.data[4] = A_UNITE(XZVACTR,mode2,2,YZVACTR);
MZVACTR.data[5] = A_UNITE(ZZVACTR,mode4,4,EIAACTR_cnewline);
 /* line 503: */
(void)(MDMACTR_writecstream(A_HISVEC(AAWACTR,MZVACTR,6,A68_66 ), IZVACTR_codestream));
 /* line 505: */
 /* line 506: */
 /* line 507: */
if (LZVACTR_modeoffset>0)
{ 
BAWACTR.data[0] = A_UNITE(CAWACTR,mode2,2,HZVACTR_newunionname);
 /* line 508: */
GAWACTR = EAWACTR ;
BAWACTR.data[1] = A_UNITE(FAWACTR,mode2,2,GAWACTR);
ROAAOSF_whole( LZVACTR_modeoffset, 0, &HAWACTR );
BAWACTR.data[2] = A_UNITE(IAWACTR,mode2,2,HAWACTR);
 /* line 509: */
KAWACTR = ';' ;
BAWACTR.data[3] = A_UNITE(JAWACTR,mode1,1,KAWACTR);
BAWACTR.data[4] = A_UNITE(LAWACTR,mode4,4,EIAACTR_cnewline);
 /* line 510: */
 /* line 511: */
(void)(MDMACTR_writecstream(A_HISVEC(MAWACTR,BAWACTR,5,A68_66 ), IZVACTR_codestream));
} 
else
{ 
 /* line 512: */
 /* line 515: */
if (LZVACTR_modeoffset<0)
{ 
 /* line 516: */
 /* line 517: */
 /* line 518: */
A_CALLPROC(YVMACTR_constituents,(EYVACTR_choicemode, &NAWACTR),(EYVACTR_choicemode, &NAWACTR,(YVMACTR_constituents).nonlocals));
A_CALLPROC(YVMACTR_constituents,((*(&(Enquiry->Mode))), &OAWACTR),((*(&(Enquiry->Mode))), &OAWACTR,(YVMACTR_constituents).nonlocals));
WWQACTR_uniontouniontable( OAWACTR, NAWACTR, &PAWACTR );
DRJACTR_replacecontrolchars( PAWACTR, &QAWACTR );
RAWACTR_uniontable = QAWACTR;
 /* line 520: */
 /* line 521: */
SAWACTR.data[0] = A_UNITE(TAWACTR,mode2,2,HZVACTR_newunionname);
XAWACTR = VAWACTR ;
SAWACTR.data[1] = A_UNITE(WAWACTR,mode2,2,XAWACTR);
 /* line 522: */
SAWACTR.data[2] = A_UNITE(YAWACTR,mode2,2,RAWACTR_uniontable);
CBWACTR = ABWACTR ;
SAWACTR.data[3] = A_UNITE(BBWACTR,mode2,2,CBWACTR);
SAWACTR.data[4] = A_UNITE(DBWACTR,mode2,2,FZVACTR_enquiryname);
 /* line 523: */
HBWACTR = FBWACTR ;
SAWACTR.data[5] = A_UNITE(GBWACTR,mode2,2,HBWACTR);
SAWACTR.data[6] = A_UNITE(IBWACTR,mode4,4,EIAACTR_cnewline);
 /* line 524: */
 /* line 525: */
 /* line 526: */
 /* line 527: */
(void)(MDMACTR_writecstream(A_HISVEC(JBWACTR,SAWACTR,7,A68_66 ), IZVACTR_codestream));
} 
} 
} 
else
{ 
 /* line 528: */
 /* line 529: */
(void)(WXIACTR_assert(LBWACTR, A68_FALSE));
} 
} 
} 
A_PROC_EXIT(ccdec);
return;
} 
#undef NL

A_STATIC A68_VOID  NBWACTR_generator(A68_BOOL  MBWACTR_anonymous, A68_127  *ReturnedValue)
{ 
A68_127  OBWACTR;  /* clause result */
A68_127  PBWACTR;  /* OPERATORS - dynamic generator */
{ 
PBWACTR.dim[0].upb = 15 ;
PBWACTR.dim[0].lwb = 0 ;
(void)A_1INITSTRIDES(PBWACTR) ;
( MBWACTR_anonymous? A_R1LOC(A68_VC ,PBWACTR): A_R1HEAP(A68_VC ,PBWACTR) );
OBWACTR = PBWACTR;
} 
*ReturnedValue = (OBWACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  UBWACTR_generator(A68_BOOL  TBWACTR_anonymous, A68_90  *ReturnedValue)
{ 
A68_90  VBWACTR;  /* clause result */
A68_90  WBWACTR;  /* OPERATORS - dynamic generator */
{ 
WBWACTR.dim[0].upb = 15 ;
WBWACTR.dim[0].lwb = 0 ;
(void)A_1INITSTRIDES(WBWACTR) ;
( TBWACTR_anonymous? A_R1LOC(A68_BOOL ,WBWACTR): A_R1HEAP(A68_BOOL ,WBWACTR) );
VBWACTR = WBWACTR;
} 
*ReturnedValue = (VBWACTR);
return;
} 
#undef NL

A68_VOID  CCWACTR_noteroutineprototype(A68_INT  Level, A68_VC  Prototype)
{ 
A68_INT  DCWACTR_n A_UNUSED = {0};
A68_273  FCWACTR_generator;   /* proc value of non-global proc */
A68_127  KCWACTR;  /* avoid structure result */
A68_127  LCWACTR_newprototype A_UNUSED = {0};
A68_274  NCWACTR_generator;   /* proc value of non-global proc */
A68_90  SCWACTR;  /* avoid structure result */
A68_90  TCWACTR_newsetjmp A_UNUSED = {0};
A68_127  UCWACTR;  /* OPERATORS - trim index */
A68_127  VCWACTR;  /* YIELD */
A68_90  WCWACTR;  /* OPERATORS - trim index */
A68_90  XCWACTR;  /* YIELD */
A68_VC  YCWACTR;  /* avoid structure result */
A68_VC * ZCWACTR;  /* YIELD */
A68_BOOL * ADWACTR;  /* YIELD */
A_PROC_ENTRY(noteroutineprototype);
 /* line 541: */
 /* line 542: */
{ 
for ( ;; )
{ 
 /* line 543: */
if ( !((Level>(*SBWACTR_levelprototype).dim[0].upb)) ) break;
DCWACTR_n = ((2*(*SBWACTR_levelprototype).dim[0].upb)+1);
 /* line 544: */
A_CLOSURE( FCWACTR_generator, GCWACTR_generator, HCWACTR_generator );
(( HCWACTR_generator * ) ( FCWACTR_generator.nonlocals )) -> DCWACTR_n = DCWACTR_n;
A_CALLPROC(FCWACTR_generator,(A68_FALSE, &KCWACTR),(A68_FALSE, &KCWACTR,(FCWACTR_generator).nonlocals));
LCWACTR_newprototype = KCWACTR;
 /* line 545: */
A_CLOSURE( NCWACTR_generator, OCWACTR_generator, PCWACTR_generator );
(( PCWACTR_generator * ) ( NCWACTR_generator.nonlocals )) -> DCWACTR_n = DCWACTR_n;
A_CALLPROC(NCWACTR_generator,(A68_FALSE, &SCWACTR),(A68_FALSE, &SCWACTR,(NCWACTR_generator).nonlocals));
TCWACTR_newsetjmp = SCWACTR;
 /* line 546: */
VCWACTR = A_R1TRIM(UCWACTR,(LCWACTR_newprototype),A_RTSCRIPT(&(UCWACTR.dim[0]),&((LCWACTR_newprototype).dim[0]),(LCWACTR_newprototype).dim[0].lwb,(*SBWACTR_levelprototype).dim[0].upb,0)) ;
(void)(A_R1ASSIGN2((*SBWACTR_levelprototype),VCWACTR,A68_VC ));
 /* line 547: */
XCWACTR = A_R1TRIM(WCWACTR,(TCWACTR_newsetjmp),A_RTSCRIPT(&(WCWACTR.dim[0]),&((TCWACTR_newsetjmp).dim[0]),(TCWACTR_newsetjmp).dim[0].lwb,(*ZBWACTR_levelsetjmp).dim[0].upb,0)) ;
(void)(A_R1ASSIGN2((*ZBWACTR_levelsetjmp),XCWACTR,A68_BOOL ));
 /* line 548: */
(*SBWACTR_levelprototype) = LCWACTR_newprototype;
 /* line 549: */
 /* line 550: */
(*ZBWACTR_levelsetjmp) = TCWACTR_newsetjmp;
}
 /* line 551: */
ZCAAOSF_makervc( Prototype, &YCWACTR );
ZCWACTR = (&A_R1INDEX((*SBWACTR_levelprototype),Level)) ;
(*ZCWACTR) = YCWACTR;
 /* line 552: */
 /* line 553: */
ADWACTR = (&A_R1INDEX((*ZBWACTR_levelsetjmp),Level)) ;
(*ADWACTR) = A68_FALSE;
} 
A_PROC_EXIT(noteroutineprototype);
return;
} 
#undef NL

A68_VOID  CDWACTR_endroutineprototype(A68_INT  Level)
{ 
A68_BOOL  DDWACTR;  /* optbool result */
A68_VC  EDWACTR_prototype A_UNUSED = {0};
A68_275  FDWACTR;  /* collateral clause result */
A68_66  IDWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  JDWACTR;  /* YIELD */
A68_66  KDWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  LDWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  MDWACTR;  /* YIELD */
A68_66  NDWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  ODWACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL * PDWACTR;  /* YIELD */
A_PROC_ENTRY(endroutineprototype);
 /* line 556: */
DDWACTR = (Level<=(*ZBWACTR_levelsetjmp).dim[0].upb);
if ( DDWACTR )
{ /* line 557: */
DDWACTR = (*(&A_R1INDEX((*ZBWACTR_levelsetjmp),Level)));
}
if (DDWACTR)
{ 
EDWACTR_prototype = (*(&A_R1INDEX((*SBWACTR_levelprototype),Level)));
 /* line 558: */
JDWACTR = HDWACTR ;
FDWACTR.data[0] = A_UNITE(IDWACTR,mode2,2,JDWACTR);
FDWACTR.data[1] = A_UNITE(KDWACTR,mode2,2,EDWACTR_prototype);
MDWACTR = ';' ;
FDWACTR.data[2] = A_UNITE(LDWACTR,mode1,1,MDWACTR);
FDWACTR.data[3] = A_UNITE(NDWACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(ODWACTR,FDWACTR,4,A68_66 ), HSLACTR_externstream));
 /* line 559: */
 /* line 560: */
PDWACTR = (&A_R1INDEX((*ZBWACTR_levelsetjmp),Level)) ;
(*PDWACTR) = A68_FALSE;
} 
A_PROC_EXIT(endroutineprototype);
return;
} 
#undef NL

A68_VOID  RDWACTR_declarenonlocallabel(A68_INT  Labno)
{ 
A68_110 * SDWACTR_labinfo A_UNUSED = {0};
A68_BOOL  TDWACTR;  /* clause result */
A68_BITS  UDWACTR;  /* ADICOPS - <= */
A68_INT  VDWACTR_level A_UNUSED = {0};
A68_275  WDWACTR;  /* collateral clause result */
A68_66  ZDWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  AEWACTR;  /* YIELD */
A68_VC  BEWACTR;  /* avoid structure result */
A68_66  CEWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  DEWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  EEWACTR;  /* YIELD */
A68_66  FEWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  GEWACTR;  /* clause result */
A68_65  HEWACTR;  /* OPERATORS - istruct -> vector */
A68_269  IEWACTR;  /* collateral clause result */
A68_66  LEWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  MEWACTR;  /* YIELD */
A68_VC  OEWACTR;  /* avoid structure result */
A68_66  QEWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  REWACTR;  /* YIELD */
A68_66  UEWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  VEWACTR;  /* YIELD */
A68_VC  WEWACTR;  /* avoid structure result */
A68_66  XEWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  YEWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  ZEWACTR;  /* YIELD */
A68_66  AFWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  BFWACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL * CFWACTR;  /* YIELD */
A_PROC_ENTRY(declarenonlocallabel);
 /* line 568: */
 /* line 569: */
{ 
{ 
SDWACTR_labinfo = (&A_R1INDEX(ZPKACTR_labels,Labno));
 /* line 570: */
 /* line 571: */
UDWACTR = (*(&(SDWACTR_labinfo->Flags))) ;
TDWACTR = (!A_LB_LE(WQKACTR_labbufferemittedflag,UDWACTR));
if (TDWACTR)
{ 
VDWACTR_level = (*(&((&(SDWACTR_labinfo->Environ))->Level)));
 /* line 573: */
 /* line 574: */
AEWACTR = YDWACTR ;
WDWACTR.data[0] = A_UNITE(ZDWACTR,mode2,2,AEWACTR);
DTKACTR_labelbuffername( Labno, &BEWACTR );
WDWACTR.data[1] = A_UNITE(CEWACTR,mode2,2,BEWACTR);
 /* line 575: */
EEWACTR = ';' ;
WDWACTR.data[2] = A_UNITE(DEWACTR,mode1,1,EEWACTR);
WDWACTR.data[3] = A_UNITE(FEWACTR,mode4,4,EIAACTR_cnewline);
 /* line 576: */
if (VDWACTR_level==0)
{ 
GEWACTR = KSLACTR_nonlocdecstream(VDWACTR_level);
} 
else
{ 
 /* line 577: */
GEWACTR = QSLACTR_locdecstream(VDWACTR_level);
} 
(void)(MDMACTR_writecstream(A_HISVEC(HEWACTR,WDWACTR,4,A68_66 ), GEWACTR));
 /* line 579: */
 /* line 580: */
MEWACTR = KEWACTR ;
IEWACTR.data[0] = A_UNITE(LEWACTR,mode2,2,MEWACTR);
 /* line 581: */
DTKACTR_labelbuffername( Labno, &OEWACTR );
REWACTR = A_VC_PLUS(OEWACTR,PEWACTR) ;
IEWACTR.data[1] = A_UNITE(QEWACTR,mode2,2,REWACTR);
VEWACTR = TEWACTR ;
IEWACTR.data[2] = A_UNITE(UEWACTR,mode2,2,VEWACTR);
WSKACTR_labelfullname( Labno, &WEWACTR );
IEWACTR.data[3] = A_UNITE(XEWACTR,mode2,2,WEWACTR);
 /* line 582: */
ZEWACTR = ';' ;
IEWACTR.data[4] = A_UNITE(YEWACTR,mode1,1,ZEWACTR);
IEWACTR.data[5] = A_UNITE(AFWACTR,mode4,4,EIAACTR_cnewline);
 /* line 583: */
(void)(MDMACTR_writecstream(A_HISVEC(BFWACTR,IEWACTR,6,A68_66 ), TSLACTR_labelstream(VDWACTR_level)));
 /* line 584: */
if (VDWACTR_level<=(*ZBWACTR_levelsetjmp).dim[0].upb)
{ 
CFWACTR = (&A_R1INDEX((*ZBWACTR_levelsetjmp),VDWACTR_level)) ;
(*CFWACTR) = A68_TRUE;
} 
 /* line 585: */
 /* line 586: */
(void)(PKAAOSF_orab((&(SDWACTR_labinfo->Flags)), WQKACTR_labbufferemittedflag));
} 
} 
} 
A_PROC_EXIT(declarenonlocallabel);
return;
} 
#undef NL

A68_VOID  FFWACTR_nonlocaldec(A68_INT  Idno, A68_INT  Level)
{ 
A68_INT  KFWACTR;  /* clause result */
A68_INT  LFWACTR_typeofid A_UNUSED = {0};
A68_INT  MFWACTR_previouslevel A_UNUSED = {0};
A68_VC  NFWACTR;  /* avoid structure result */
A68_VC  OFWACTR_fullname A_UNUSED = {0};
A68_INT  PFWACTR;  /* clause result */
A68_INT  SFWACTR = {0};  /* OPERATORS - skip to mode */
A68_INT  VFWACTR = {0};  /* OPERATORS - skip to mode */
A68_INT  WFWACTR_ctypeofid A_UNUSED = {0};
A68_258  XFWACTR;  /* collateral clause result */
A68_VC  YFWACTR;  /* avoid structure result */
A68_66  ZFWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  AGWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  BGWACTR;  /* YIELD */
A68_66  CGWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  DGWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  EGWACTR;  /* YIELD */
A68_66  FGWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  GGWACTR;  /* OPERATORS - istruct -> vector */
A68_98  HGWACTR;  /* collateral clause result */
A68_INT  IGWACTR;  /* clause result */
A68_INT  JGWACTR = {0};  /* OPERATORS - skip to mode */
A68_INT  KGWACTR;  /* YIELD */
A68_INT  LGWACTR = {0};  /* OPERATORS - skip to mode */
A68_BOOL  MGWACTR;  /* clause result */
A68_101  NGWACTR_id A_UNUSED = {0};
A68_INT * OGWACTR;  /* YIELD */
A68_99  PGWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_100  QGWACTR_rd A_UNUSED = {0};
A68_INT * RGWACTR;  /* YIELD */
A68_99  SGWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_99  TGWACTR = {0};  /* OPERATORS - skip to mode */
A68_57  UGWACTR_ld A_UNUSED = {0};
A68_INT * VGWACTR;  /* YIELD */
A68_99  WGWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_99  XGWACTR = {0};  /* OPERATORS - skip to mode */
A68_98  YGWACTR_rhs A_UNUSED = {0};
A68_INT  ZGWACTR_thisrd A_UNUSED = {0};
A68_279  AHWACTR;  /* collateral clause result */
A68_66  DHWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  EHWACTR;  /* YIELD */
A68_VC  FHWACTR;  /* avoid structure result */
A68_66  GHWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  JHWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  KHWACTR;  /* YIELD */
A68_VC  LHWACTR;  /* avoid structure result */
A68_66  MHWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  PHWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  QHWACTR;  /* YIELD */
A68_66  RHWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  UHWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  VHWACTR;  /* YIELD */
A68_VC  WHWACTR;  /* avoid structure result */
A68_66  XHWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  YHWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  ZHWACTR;  /* YIELD */
A68_66  AIWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  BIWACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(nonlocaldec);
 /* line 596: */
 /* line 597: */
{ 
 /* line 598: */
 /* line 599: */
 /* line 587: */
 /* line 600: */
if (Idno<=IAAACTR_maxidno)
{ 
KFWACTR = GFWACTR_idtype;
} 
else
{ 
 /* line 601: */
if (Idno<=KAAACTR_maxrdno)
{ 
KFWACTR = HFWACTR_rdtype;
} 
else
{ 
 /* line 602: */
if (Idno<=MAAACTR_maxlibid)
{ 
 /* line 603: */
KFWACTR = IFWACTR_libtype;
} 
else
{ 
KFWACTR = JFWACTR_labtype;
} 
} 
} 
LFWACTR_typeofid = KFWACTR;
 /* line 604: */
MFWACTR_previouslevel = (Level-1);
 /* line 606: */
UTKACTR_idfullname( Idno, &NFWACTR );
OFWACTR_fullname = NFWACTR;
 /* line 608: */
 /* line 609: */
 /* line 610: */
switch ( LFWACTR_typeofid )
{ 
case 1: 
 /* line 611: */
PFWACTR = (*(&((&A_R1INDEX(WPKACTR_ids,Idno))->Mode)));
break;
case 2: 
 /* line 612: */
PFWACTR = (*(&((&A_R1INDEX(XPKACTR_rds,Idno))->Mode)));
break;
case 3: 
{ 
(void)(WXIACTR_assert(RFWACTR, A68_FALSE));
 /* line 614: */
PFWACTR = SFWACTR;
} 
break;
case 4: 
PFWACTR = TEAACTR_gotomode;
break;
default: 
{ 
(void)(WXIACTR_assert(UFWACTR, A68_FALSE));
 /* line 615: */
PFWACTR = VFWACTR;
} 
break;
} 
WFWACTR_ctypeofid = PFWACTR;
 /* line 618: */
 /* line 619: */
XKNACTR_ctype( WFWACTR_ctypeofid, &YFWACTR );
XFWACTR.data[0] = A_UNITE(ZFWACTR,mode2,2,YFWACTR);
BGWACTR = ' ' ;
XFWACTR.data[1] = A_UNITE(AGWACTR,mode1,1,BGWACTR);
XFWACTR.data[2] = A_UNITE(CGWACTR,mode2,2,OFWACTR_fullname);
 /* line 620: */
EGWACTR = ';' ;
XFWACTR.data[3] = A_UNITE(DGWACTR,mode1,1,EGWACTR);
XFWACTR.data[4] = A_UNITE(FGWACTR,mode4,4,EIAACTR_cnewline);
 /* line 621: */
(void)(MDMACTR_writecstream(A_HISVEC(GGWACTR,XFWACTR,5,A68_66 ), KSLACTR_nonlocdecstream(MFWACTR_previouslevel)));
 /* line 622: */
(void)(CMNACTR_alignnextstructfield(WFWACTR_ctypeofid, KSLACTR_nonlocdecstream(MFWACTR_previouslevel)));
 /* line 626: */
 /* line 627: */
 /* line 628: */
HGWACTR.Mode = WFWACTR_ctypeofid;
 /* line 630: */
switch ( LFWACTR_typeofid )
{ 
case 1: 
 /* line 631: */
IGWACTR = (*(&((&((&A_R1INDEX(WPKACTR_ids,Idno))->Environ))->Level)));
break;
case 2: 
 /* line 632: */
IGWACTR = (*(&((&A_R1INDEX(XPKACTR_rds,Idno))->Declevel)));
break;
case 3: 
 /* line 633: */
IGWACTR = JGWACTR;
break;
case 4: 
 /* line 634: */
 /* line 635: */
KGWACTR = (Idno-OAAACTR_minlab) ;
IGWACTR = (*(&((&((&A_R1INDEX(ZPKACTR_labels,KGWACTR))->Environ))->Level)));
break;
default: 
 /* line 636: */
IGWACTR = LGWACTR;
break;
} 
 /* line 637: */
 /* line 638: */
MGWACTR = (MFWACTR_previouslevel==IGWACTR);
if (MGWACTR)
{ 
 /* line 639: */
HGWACTR.Info = PKJACTR_defaultinfo;
} 
else
{ 
 /* line 640: */
HGWACTR.Info = TKJACTR_nonloc;
} 
 /* line 641: */
switch ( LFWACTR_typeofid )
{ 
case 1: 
{ 
OGWACTR = (&((&NGWACTR_id)->Idno)) ;
(*OGWACTR) = Idno;
 /* line 642: */
HGWACTR.Extra = A_UNITE(PGWACTR,mode4,4,NGWACTR_id);
} 
break;
case 2: 
{ 
RGWACTR = (&((&QGWACTR_rd)->Rdenno)) ;
(*RGWACTR) = Idno;
 /* line 643: */
HGWACTR.Extra = A_UNITE(SGWACTR,mode2,2,QGWACTR_rd);
} 
break;
case 3: 
 /* line 644: */
HGWACTR.Extra = TGWACTR;
break;
case 4: 
{ 
VGWACTR = (&((&UGWACTR_ld)->Labno)) ;
(void)((*VGWACTR) = (Idno-OAAACTR_minlab));
 /* line 645: */
 /* line 646: */
HGWACTR.Extra = A_UNITE(WGWACTR,mode7,7,UGWACTR_ld);
} 
break;
default: 
 /* line 647: */
HGWACTR.Extra = XGWACTR;
break;
} 
YGWACTR_rhs = HGWACTR;
 /* line 650: */
ZGWACTR_thisrd = CQLACTR_findroutine(Level);
 /* line 651: */
 /* line 652: */
EHWACTR = CHWACTR ;
AHWACTR.data[0] = A_UNITE(DHWACTR,mode2,2,EHWACTR);
LUKACTR_rdenvname( ZGWACTR_thisrd, &FHWACTR );
AHWACTR.data[1] = A_UNITE(GHWACTR,mode2,2,FHWACTR);
 /* line 653: */
KHWACTR = IHWACTR ;
AHWACTR.data[2] = A_UNITE(JHWACTR,mode2,2,KHWACTR);
UTKACTR_idfullname( ZGWACTR_thisrd, &LHWACTR );
AHWACTR.data[3] = A_UNITE(MHWACTR,mode2,2,LHWACTR);
 /* line 654: */
QHWACTR = OHWACTR ;
AHWACTR.data[4] = A_UNITE(PHWACTR,mode2,2,QHWACTR);
AHWACTR.data[5] = A_UNITE(RHWACTR,mode2,2,OFWACTR_fullname);
VHWACTR = THWACTR ;
AHWACTR.data[6] = A_UNITE(UHWACTR,mode2,2,VHWACTR);
UZPACTR_getcfragment( (&YGWACTR_rhs), &WHWACTR );
AHWACTR.data[7] = A_UNITE(XHWACTR,mode2,2,WHWACTR);
 /* line 655: */
ZHWACTR = ';' ;
AHWACTR.data[8] = A_UNITE(YHWACTR,mode1,1,ZHWACTR);
AHWACTR.data[9] = A_UNITE(AIWACTR,mode4,4,EIAACTR_cnewline);
 /* line 656: */
 /* line 657: */
(void)(MDMACTR_writecstream(A_HISVEC(BIWACTR,AHWACTR,10,A68_66 ), NSLACTR_codestream(MFWACTR_previouslevel)));
} 
A_PROC_EXIT(nonlocaldec);
return;
} 
#undef NL
 /* line 661: */
 /* line 663: */

A_STATIC A68_VOID  IIWACTR_declarecroutine(A68_INT  Rdenno, A68_INT  Resultmode, A68_BOOL  Global, A68_BOOL  Kept, A68_BOOL  Opsym, A68_181  Params)
{ 
A68_VC  JIWACTR;  /* avoid structure result */
A68_VC  KIWACTR_environmentctype A_UNUSED = {0};
A68_BOOL  LIWACTR;  /* optbool result */
A68_BOOL  MIWACTR_usetempforresult A_UNUSED = {0};
A68_INT  NIWACTR;  /* clause result */
A68_INT  OIWACTR_cresultmode A_UNUSED = {0};
A68_BOOL  PIWACTR_fulldec A_UNUSED = {0};
A68_INT  QIWACTR_a68paramcount A_UNUSED = {0};
A68_INT  RIWACTR_cparamcount A_UNUSED = {0};
A68_INT  SIWACTR_codestream A_UNUSED = {0};
A68_VC  TIWACTR;  /* clause result */
A68_VC  UIWACTR;  /* avoid structure result */
A68_VC  VIWACTR;  /* avoid structure result */
A68_VC  WIWACTR_fnname A_UNUSED = {0};
A68_282  YIWACTR_generator;   /* proc value of non-global proc */
A68_281  EJWACTR;  /* avoid structure result */
A68_281  DJWACTR_paramnames A_UNUSED = {0};
A68_281  GJWACTR;  /* avoid structure result */
A68_281  FJWACTR_paramtypes A_UNUSED = {0};
A68_INT * HJWACTR_param A_UNUSED = {0};
A68_VC * IJWACTR_paramtype A_UNUSED = {0};
A68_VC * JJWACTR_paramname A_UNUSED = {0};
A68_INT  KJWACTR;  /* forall loop counter */
A68_VC  LJWACTR;  /* avoid structure result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} MJWACTR; 
A68_VC  NJWACTR;  /* avoid structure result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} OJWACTR; 
A68_283  PJWACTR_prototype;   /* proc value of non-global proc */
A68_VC  BLWACTR;  /* avoid structure result */
A68_VC  CLWACTR_proto A_UNUSED = {0};
A68_275  DLWACTR;  /* collateral clause result */
A68_66  ELWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  FLWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  GLWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  HLWACTR;  /* YIELD */
A68_66  ILWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  JLWACTR;  /* OPERATORS - istruct -> vector */
A68_286  KLWACTR;  /* collateral clause result */
A68_66  LLWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  MLWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  NLWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  OLWACTR;  /* OPERATORS - istruct -> vector */
A68_275  PLWACTR;  /* collateral clause result */
A68_66  SLWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  TLWACTR;  /* YIELD */
A68_66  ULWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  XLWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  YLWACTR;  /* YIELD */
A68_66  ZLWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  AMWACTR;  /* OPERATORS - istruct -> vector */
A68_VC  BMWACTR;  /* avoid structure result */
A68_VC  CMWACTR_procvaluename A_UNUSED = {0};
A68_VC  DMWACTR;  /* avoid structure result */
A68_VC  EMWACTR_envname A_UNUSED = {0};
A68_INT  FMWACTR_previouslevel A_UNUSED = {0};
A68_269  GMWACTR;  /* collateral clause result */
A68_VC  HMWACTR;  /* avoid structure result */
A68_66  IMWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  JMWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  KMWACTR;  /* YIELD */
A68_66  LMWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  MMWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  NMWACTR;  /* YIELD */
A68_66  QMWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  RMWACTR;  /* YIELD */
A68_66  UMWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  VMWACTR;  /* YIELD */
A68_66  WMWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  XMWACTR;  /* OPERATORS - istruct -> vector */
A68_VC  YMWACTR;  /* OPERATORS - istruct -> vector */
A68_56  ZMWACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ANWACTR_envvarname A_UNUSED = {0};
A68_269  BNWACTR;  /* collateral clause result */
A68_66  CNWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  DNWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  ENWACTR;  /* YIELD */
A68_66  FNWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  GNWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  HNWACTR;  /* YIELD */
A68_66  KNWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  LNWACTR;  /* YIELD */
A68_66  ONWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  PNWACTR;  /* YIELD */
A68_66  QNWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  RNWACTR;  /* OPERATORS - istruct -> vector */
A68_257  SNWACTR;  /* collateral clause result */
A68_66  VNWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  WNWACTR;  /* YIELD */
A68_66  XNWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  AOWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  BOWACTR;  /* YIELD */
A68_66  COWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  FOWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  GOWACTR;  /* YIELD */
A68_66  HOWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  KOWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  LOWACTR;  /* YIELD */
A68_66  MOWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  NOWACTR;  /* OPERATORS - istruct -> vector */
A68_257  OOWACTR;  /* collateral clause result */
A68_66  ROWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  SOWACTR;  /* YIELD */
A68_66  VOWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  WOWACTR;  /* YIELD */
A68_66  XOWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  APWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  BPWACTR;  /* YIELD */
A68_66  CPWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  FPWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  GPWACTR;  /* YIELD */
A68_66  HPWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  KPWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  LPWACTR;  /* YIELD */
A68_66  MPWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  NPWACTR;  /* OPERATORS - istruct -> vector */
A68_269  OPWACTR;  /* collateral clause result */
A68_66  RPWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  SPWACTR;  /* YIELD */
A68_66  VPWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  WPWACTR;  /* YIELD */
A68_66  ZPWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  AQWACTR;  /* YIELD */
A68_66  BQWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  CQWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  DQWACTR;  /* YIELD */
A68_66  GQWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  HQWACTR;  /* YIELD */
A68_66  KQWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  LQWACTR;  /* YIELD */
A68_66  MQWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  NQWACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(declarecroutine);
 /* line 664: */
 /* line 665: */
{ 
LUKACTR_rdenvname( Rdenno, &JIWACTR );
KIWACTR_environmentctype = JIWACTR;
 /* line 668: */
 /* line 669: */
LIWACTR = NQIACTR_nostructresultoption;
if ( LIWACTR )
{LIWACTR = VSMACTR_iscstruct(Resultmode);
}
MIWACTR_usetempforresult = LIWACTR;
 /* line 671: */
 /* line 672: */
if (MIWACTR_usetempforresult)
{ 
NIWACTR = UEAACTR_voidmode;
} 
else
{ 
NIWACTR = Resultmode;
} 
OIWACTR_cresultmode = NIWACTR;
 /* line 674: */
PIWACTR_fulldec = (!Global);
 /* line 676: */
QIWACTR_a68paramcount = Params.upb;
 /* line 678: */
 /* line 679: */
RIWACTR_cparamcount = ((QIWACTR_a68paramcount+(MIWACTR_usetempforresult))+(PIWACTR_fulldec));
 /* line 681: */
SIWACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 683: */
 /* line 684: */
if (PIWACTR_fulldec)
{ 
 /* line 685: */
DUKACTR_rdfnname( Rdenno, &UIWACTR );
TIWACTR = UIWACTR;
} 
else
{ 
 /* line 686: */
UTKACTR_idfullname( Rdenno, &VIWACTR );
TIWACTR = VIWACTR;
} 
WIWACTR_fnname = TIWACTR;
 /* line 688: */
A_CLOSURE( YIWACTR_generator, ZIWACTR_generator, AJWACTR_generator );
(( AJWACTR_generator * ) ( YIWACTR_generator.nonlocals )) -> QIWACTR_a68paramcount = QIWACTR_a68paramcount;
A_CALLPROC(YIWACTR_generator,(A68_TRUE, &EJWACTR),(A68_TRUE, &EJWACTR,(YIWACTR_generator).nonlocals));
DJWACTR_paramnames = EJWACTR;
A_CALLPROC(YIWACTR_generator,(A68_TRUE, &GJWACTR),(A68_TRUE, &GJWACTR,(YIWACTR_generator).nonlocals));
FJWACTR_paramtypes = GJWACTR;
 /* line 690: */
 /* line 691: */
KJWACTR = Params.upb -1;
if ( KJWACTR != FJWACTR_paramtypes.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
if ( KJWACTR != DJWACTR_paramnames.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 3"); }
HJWACTR_param = Params.data;
IJWACTR_paramtype = FJWACTR_paramtypes.data;
JJWACTR_paramname = DJWACTR_paramnames.data;
for (;KJWACTR-- >= 0;
(HJWACTR_param++
,IJWACTR_paramtype++
,JJWACTR_paramname++
) )
{
 /* line 692: */
UTKACTR_idfullname( (*HJWACTR_param), &LJWACTR );
MJWACTR.source = LJWACTR ;
(void)((*JJWACTR_paramname) = (MJWACTR.destination));
 /* line 693: */
 /* line 694: */
BLNACTR_cvartype( (*(&((&A_R1INDEX(WPKACTR_ids,(*HJWACTR_param)))->Cvariabletype))), &NJWACTR );
OJWACTR.source = NJWACTR ;
(void)((*IJWACTR_paramtype) = (OJWACTR.destination));
}
 /* line 696: */
 /* line 698: */
 /* line 699: */
A_CLOSURE( PJWACTR_prototype, QJWACTR_prototype, RJWACTR_prototype );
(( RJWACTR_prototype * ) ( PJWACTR_prototype.nonlocals )) -> QIWACTR_a68paramcount = QIWACTR_a68paramcount;
(( RJWACTR_prototype * ) ( PJWACTR_prototype.nonlocals )) -> FJWACTR_paramtypes = FJWACTR_paramtypes;
(( RJWACTR_prototype * ) ( PJWACTR_prototype.nonlocals )) -> DJWACTR_paramnames = DJWACTR_paramnames;
(( RJWACTR_prototype * ) ( PJWACTR_prototype.nonlocals )) -> MIWACTR_usetempforresult = MIWACTR_usetempforresult;
(( RJWACTR_prototype * ) ( PJWACTR_prototype.nonlocals )) -> Resultmode = Resultmode;
(( RJWACTR_prototype * ) ( PJWACTR_prototype.nonlocals )) -> PIWACTR_fulldec = PIWACTR_fulldec;
(( RJWACTR_prototype * ) ( PJWACTR_prototype.nonlocals )) -> Global = Global;
(( RJWACTR_prototype * ) ( PJWACTR_prototype.nonlocals )) -> Kept = Kept;
(( RJWACTR_prototype * ) ( PJWACTR_prototype.nonlocals )) -> OIWACTR_cresultmode = OIWACTR_cresultmode;
(( RJWACTR_prototype * ) ( PJWACTR_prototype.nonlocals )) -> WIWACTR_fnname = WIWACTR_fnname;
 /* line 726: */
A_CALLPROC(PJWACTR_prototype,( &BLWACTR),( &BLWACTR,(PJWACTR_prototype).nonlocals));
CLWACTR_proto = BLWACTR;
 /* line 727: */
(void)(CCWACTR_noteroutineprototype(VRLACTR_currentlevel(), CLWACTR_proto));
 /* line 730: */
DLWACTR.data[0] = A_UNITE(ELWACTR,mode4,4,EIAACTR_cnewline);
DLWACTR.data[1] = A_UNITE(FLWACTR,mode2,2,CLWACTR_proto);
HLWACTR = ';' ;
DLWACTR.data[2] = A_UNITE(GLWACTR,mode1,1,HLWACTR);
DLWACTR.data[3] = A_UNITE(ILWACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(JLWACTR,DLWACTR,4,A68_66 ), HSLACTR_externstream));
 /* line 733: */
KLWACTR.data[0] = A_UNITE(LLWACTR,mode4,4,EIAACTR_cnewline);
KLWACTR.data[1] = A_UNITE(MLWACTR,mode2,2,CLWACTR_proto);
KLWACTR.data[2] = A_UNITE(NLWACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(OLWACTR,KLWACTR,3,A68_66 ), SIWACTR_codestream));
 /* line 735: */
 /* line 736: */
 /* line 737: */
if (PIWACTR_fulldec)
{ 
TLWACTR = RLWACTR ;
PLWACTR.data[0] = A_UNITE(SLWACTR,mode2,2,TLWACTR);
PLWACTR.data[1] = A_UNITE(ULWACTR,mode2,2,KIWACTR_environmentctype);
YLWACTR = WLWACTR ;
PLWACTR.data[2] = A_UNITE(XLWACTR,mode2,2,YLWACTR);
PLWACTR.data[3] = A_UNITE(ZLWACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(AMWACTR,PLWACTR,4,A68_66 ), SIWACTR_codestream));
 /* line 739: */
UTKACTR_idfullname( Rdenno, &BMWACTR );
CMWACTR_procvaluename = BMWACTR;
 /* line 740: */
LUKACTR_rdenvname( Rdenno, &DMWACTR );
EMWACTR_envname = DMWACTR;
 /* line 741: */
FMWACTR_previouslevel = (VRLACTR_currentlevel()-1);
 /* line 744: */
 /* line 745: */
XKNACTR_ctype( (*(&((&A_R1INDEX(XPKACTR_rds,Rdenno))->Mode))), &HMWACTR );
GMWACTR.data[0] = A_UNITE(IMWACTR,mode2,2,HMWACTR);
KMWACTR = ' ' ;
GMWACTR.data[1] = A_UNITE(JMWACTR,mode1,1,KMWACTR);
GMWACTR.data[2] = A_UNITE(LMWACTR,mode2,2,CMWACTR_procvaluename);
 /* line 746: */
NMWACTR = ';' ;
GMWACTR.data[3] = A_UNITE(MMWACTR,mode1,1,NMWACTR);
 /* line 747: */
 /* line 748: */
if (AQIACTR_verboseoption)
{ 
 /* line 749: */
RMWACTR = PMWACTR ;
GMWACTR.data[4] = A_UNITE(QMWACTR,mode2,2,RMWACTR);
} 
else
{ 
 /* line 750: */
VMWACTR = TMWACTR ;
GMWACTR.data[4] = A_UNITE(UMWACTR,mode2,2,VMWACTR);
} 
GMWACTR.data[5] = A_UNITE(WMWACTR,mode4,4,EIAACTR_cnewline);
 /* line 751: */
(void)(MDMACTR_writecstream(A_HISVEC(XMWACTR,GMWACTR,6,A68_66 ), QSLACTR_locdecstream(FMWACTR_previouslevel)));
 /* line 753: */
 /* line 754: */
 /* line 756: */
if (PQIACTR_closureonstackoption)
{ 
ZMWACTR = QIMACTR_newuniquename() ;
ANWACTR_envvarname = A_HISVEC(YMWACTR,ZMWACTR,7,A68_CHAR );
 /* line 757: */
 /* line 758: */
BNWACTR.data[0] = A_UNITE(CNWACTR,mode2,2,EMWACTR_envname);
ENWACTR = ' ' ;
BNWACTR.data[1] = A_UNITE(DNWACTR,mode1,1,ENWACTR);
BNWACTR.data[2] = A_UNITE(FNWACTR,mode2,2,ANWACTR_envvarname);
 /* line 759: */
HNWACTR = ';' ;
BNWACTR.data[3] = A_UNITE(GNWACTR,mode1,1,HNWACTR);
if (AQIACTR_verboseoption)
{ 
LNWACTR = JNWACTR ;
BNWACTR.data[4] = A_UNITE(KNWACTR,mode2,2,LNWACTR);
} 
else
{ 
 /* line 760: */
PNWACTR = NNWACTR ;
BNWACTR.data[4] = A_UNITE(ONWACTR,mode2,2,PNWACTR);
} 
BNWACTR.data[5] = A_UNITE(QNWACTR,mode4,4,EIAACTR_cnewline);
 /* line 761: */
(void)(MDMACTR_writecstream(A_HISVEC(RNWACTR,BNWACTR,6,A68_66 ), QSLACTR_locdecstream(FMWACTR_previouslevel)));
 /* line 763: */
 /* line 764: */
 /* line 765: */
WNWACTR = UNWACTR ;
SNWACTR.data[0] = A_UNITE(VNWACTR,mode2,2,WNWACTR);
SNWACTR.data[1] = A_UNITE(XNWACTR,mode2,2,CMWACTR_procvaluename);
BOWACTR = ZNWACTR ;
SNWACTR.data[2] = A_UNITE(AOWACTR,mode2,2,BOWACTR);
SNWACTR.data[3] = A_UNITE(COWACTR,mode2,2,WIWACTR_fnname);
GOWACTR = EOWACTR ;
SNWACTR.data[4] = A_UNITE(FOWACTR,mode2,2,GOWACTR);
SNWACTR.data[5] = A_UNITE(HOWACTR,mode2,2,ANWACTR_envvarname);
 /* line 766: */
LOWACTR = JOWACTR ;
SNWACTR.data[6] = A_UNITE(KOWACTR,mode2,2,LOWACTR);
SNWACTR.data[7] = A_UNITE(MOWACTR,mode4,4,EIAACTR_cnewline);
 /* line 767: */
 /* line 768: */
 /* line 770: */
(void)(MDMACTR_writecstream(A_HISVEC(NOWACTR,SNWACTR,8,A68_66 ), NSLACTR_codestream(FMWACTR_previouslevel)));
} 
else
{ 
 /* line 771: */
if (OQIACTR_closuremarkoption)
{ 
SOWACTR = QOWACTR ;
OOWACTR.data[0] = A_UNITE(ROWACTR,mode2,2,SOWACTR);
} 
else
{ 
 /* line 772: */
WOWACTR = UOWACTR ;
OOWACTR.data[0] = A_UNITE(VOWACTR,mode2,2,WOWACTR);
} 
OOWACTR.data[1] = A_UNITE(XOWACTR,mode2,2,CMWACTR_procvaluename);
BPWACTR = ZOWACTR ;
OOWACTR.data[2] = A_UNITE(APWACTR,mode2,2,BPWACTR);
OOWACTR.data[3] = A_UNITE(CPWACTR,mode2,2,WIWACTR_fnname);
GPWACTR = EPWACTR ;
OOWACTR.data[4] = A_UNITE(FPWACTR,mode2,2,GPWACTR);
OOWACTR.data[5] = A_UNITE(HPWACTR,mode2,2,EMWACTR_envname);
 /* line 773: */
LPWACTR = JPWACTR ;
OOWACTR.data[6] = A_UNITE(KPWACTR,mode2,2,LPWACTR);
OOWACTR.data[7] = A_UNITE(MPWACTR,mode4,4,EIAACTR_cnewline);
 /* line 774: */
 /* line 775: */
(void)(MDMACTR_writecstream(A_HISVEC(NPWACTR,OOWACTR,8,A68_66 ), NSLACTR_codestream(FMWACTR_previouslevel)));
} 
 /* line 778: */
 /* line 779: */
 /* line 780: */
SPWACTR = QPWACTR ;
OPWACTR.data[0] = A_UNITE(RPWACTR,mode2,2,SPWACTR);
 /* line 781: */
 /* line 782: */
if (AQIACTR_verboseoption)
{ 
 /* line 783: */
WPWACTR = UPWACTR ;
OPWACTR.data[1] = A_UNITE(VPWACTR,mode2,2,WPWACTR);
} 
else
{ 
AQWACTR = YPWACTR ;
OPWACTR.data[1] = A_UNITE(ZPWACTR,mode2,2,AQWACTR);
} 
OPWACTR.data[2] = A_UNITE(BQWACTR,mode4,4,EIAACTR_cnewline);
 /* line 784: */
DQWACTR = '{' ;
OPWACTR.data[3] = A_UNITE(CQWACTR,mode1,1,DQWACTR);
 /* line 785: */
 /* line 786: */
if (OQIACTR_closuremarkoption)
{ 
 /* line 787: */
HQWACTR = FQWACTR ;
OPWACTR.data[4] = A_UNITE(GQWACTR,mode2,2,HQWACTR);
} 
else
{ 
LQWACTR = JQWACTR ;
OPWACTR.data[4] = A_UNITE(KQWACTR,mode2,2,LQWACTR);
} 
OPWACTR.data[5] = A_UNITE(MQWACTR,mode4,4,EIAACTR_cnewline);
 /* line 788: */
 /* line 789: */
 /* line 790: */
(void)(MDMACTR_writecstream(A_HISVEC(NQWACTR,OPWACTR,6,A68_66 ), KSLACTR_nonlocdecstream(FMWACTR_previouslevel)));
} 
} 
A_PROC_EXIT(declarecroutine);
return;
} 
#undef NL

A68_VOID  OQWACTR_completerddec(void)
{ 
A68_INT  PQWACTR;  /* YIELD */
A68_109 * QQWACTR_rd A_UNUSED = {0};
A68_BITS  RQWACTR;  /* ADICOPS - >= */
A68_INT  SQWACTR_nonlocdecstream A_UNUSED = {0};
A68_256  TQWACTR;  /* collateral clause result */
A68_66  WQWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  XQWACTR;  /* YIELD */
A68_66  YQWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  ZQWACTR;  /* OPERATORS - istruct -> vector */
A68_275  ARWACTR;  /* collateral clause result */
A68_66  DRWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ERWACTR;  /* YIELD */
A68_VC  FRWACTR;  /* avoid structure result */
A68_66  GRWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  HRWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  IRWACTR;  /* YIELD */
A68_66  JRWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  KRWACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(completerddec);
{ 
PQWACTR = ZPLACTR_currentroutine() ;
QQWACTR_rd = (&A_R1INDEX(XPKACTR_rds,PQWACTR));
 /* line 799: */
 /* line 800: */
 /* line 801: */
 /* line 803: */
RQWACTR = (*(&(QQWACTR_rd->Flags))) ;
if (!A_LB_GE(RQWACTR,RQKACTR_rdglobalflag))
{ 
SQWACTR_nonlocdecstream = KSLACTR_nonlocdecstream((VRLACTR_currentlevel()-1));
 /* line 804: */
 /* line 805: */
 /* line 808: */
if (!JQLACTR_nonlocalsused())
{ 
XQWACTR = VQWACTR ;
TQWACTR.data[0] = A_UNITE(WQWACTR,mode2,2,XQWACTR);
TQWACTR.data[1] = A_UNITE(YQWACTR,mode4,4,EIAACTR_cnewline);
 /* line 809: */
(void)(MDMACTR_writecstream(A_HISVEC(ZQWACTR,TQWACTR,2,A68_66 ), SQWACTR_nonlocdecstream));
} 
 /* line 810: */
 /* line 811: */
ERWACTR = CRWACTR ;
ARWACTR.data[0] = A_UNITE(DRWACTR,mode2,2,ERWACTR);
LUKACTR_rdenvname( ZPLACTR_currentroutine(), &FRWACTR );
ARWACTR.data[1] = A_UNITE(GRWACTR,mode2,2,FRWACTR);
 /* line 812: */
IRWACTR = ';' ;
ARWACTR.data[2] = A_UNITE(HRWACTR,mode1,1,IRWACTR);
ARWACTR.data[3] = A_UNITE(JRWACTR,mode4,4,EIAACTR_cnewline);
 /* line 813: */
 /* line 814: */
 /* line 815: */
(void)(MDMACTR_writecstream(A_HISVEC(KRWACTR,ARWACTR,4,A68_66 ), SQWACTR_nonlocdecstream));
} 
} 
A_PROC_EXIT(completerddec);
return;
} 
#undef NL
 /* line 819: */
 /* line 820: */
 /* line 821: */
 /* line 822: */
 /* line 824: */

A68_VOID  SRWACTR_rddec(A68_VC  Name, A68_INT  Mode, A68_181  Paramdecnos, A68_INT  Resultmode, A68_INT  Rdenno, A68_72  Environ, A68_BITS  Props)
{ 
A68_109 * TRWACTR_rd A_UNUSED = {0};
A68_INT  URWACTR_declevel A_UNUSED = {0};
A68_BOOL  VRWACTR;  /* optbool result */
A68_BITS  WRWACTR;  /* clause result */
A68_BITS  XRWACTR_otherflags A_UNUSED = {0};
A68_BOOL  YRWACTR;  /* optbool result */
A68_BOOL  ZRWACTR_global A_UNUSED = {0};
A68_109  ASWACTR;  /* collateral clause result */
A68_BITS  BSWACTR;  /* ADICOPS - >= */
A68_BOOL  CSWACTR;  /* optbool result */
A68_INT  DSWACTR;  /* YIELD */
A68_155  ESWACTR;  /* OPERATORS - simple index */
A68_INT  FSWACTR;  /* YIELD */
A68_157 * GSWACTR_keptinfo A_UNUSED = {0};
A68_BOOL  HSWACTR;  /* optbool result */
A68_BOOL  ISWACTR;  /* clause result */
A68_INT  JSWACTR;  /* YIELD */
A68_LINT * KSWACTR;  /* YIELD */
A68_BITS  LSWACTR;  /* ADICOPS - >= */
A68_BITS  MSWACTR;  /* ADICOPS - >= */
A_PROC_ENTRY(rddec);
 /* line 825: */
 /* line 826: */
{ 
TRWACTR_rd = (&A_R1INDEX(XPKACTR_rds,Rdenno));
 /* line 827: */
URWACTR_declevel = (VRLACTR_currentlevel()-1);
 /* line 828: */
 /* line 829: */
VRWACTR = A_LB_GE(Props,OCAACTR_operatorbit);
if ( VRWACTR )
{ /* line 830: */
VRWACTR = TUKACTR_standopsym(Name);
}
 /* line 831: */
if (VRWACTR)
{ 
 /* line 832: */
WRWACTR = SQKACTR_rdopflag;
} 
else
{ 
WRWACTR = OQKACTR_rdnoflags;
} 
XRWACTR_otherflags = WRWACTR;
 /* line 833: */
 /* line 834: */
YRWACTR = (URWACTR_declevel==0);
if ( ! YRWACTR )
{YRWACTR = PRLACTR_isgloballevel(Environ);
}
ZRWACTR_global = YRWACTR;
 /* line 836: */
 /* line 837: */
if (ZRWACTR_global)
{ 
 /* line 838: */
ASWACTR.Mode = Mode;
 /* line 839: */
ASWACTR.Resultmode = Resultmode;
 /* line 840: */
ASWACTR.Declevel = URWACTR_declevel;
 /* line 841: */
ASWACTR.Environ = Environ;
 /* line 842: */
ASWACTR.Name = Name;
 /* line 843: */
 /* line 844: */
BSWACTR = (*(&(TRWACTR_rd->Flags))) ;
CSWACTR = (!A_LB_GE(BSWACTR,PQKACTR_rdkeptflag));
if ( ! CSWACTR )
{CSWACTR = (!LCPACTR_rscompatiblewithpreviousversion);
}
 /* line 845: */
if (CSWACTR)
{ 
 /* line 846: */
ASWACTR.Prefix = QIMACTR_newuniquename();
} 
else
{ 
{ 
DSWACTR = 1 ;
ESWACTR = (*(&((&A_R1INDEX(RCPACTR_specs,DSWACTR))->Keptinfo))) ;
FSWACTR = JNVACTR_keeplistposition(Rdenno) ;
GSWACTR_keptinfo = (&A_VINDEX(ESWACTR,FSWACTR));
 /* line 848: */
 /* line 849: */
HSWACTR = (*(&(GSWACTR_keptinfo->Iddec)));
if ( ! HSWACTR )
{HSWACTR = (*(&(GSWACTR_keptinfo->Optimised)));
}
ISWACTR = HSWACTR;
if (ISWACTR)
{ 
MCPACTR_transcompatiblewithpreviousversi = A68_FALSE;
 /* line 850: */
 /* line 851: */
JSWACTR = 1 ;
KSWACTR = (&((&A_R1INDEX(RCPACTR_specs,JSWACTR))->Timeoflastchange)) ;
(void)((*KSWACTR) = (*(&((&IYIACTR_config_info)->Translationtime))));
 /* line 852: */
 /* line 853: */
 /* line 854: */
ASWACTR.Prefix = QIMACTR_newuniquename();
} 
else
{ 
 /* line 855: */
ASWACTR.Prefix = (*(&(GSWACTR_keptinfo->Prefix)));
} 
} 
} 
 /* line 856: */
ASWACTR.Fnprefix = RNOACTR_nulluname;
 /* line 857: */
ASWACTR.Envprefix = RNOACTR_nulluname;
 /* line 858: */
 /* line 859: */
ASWACTR.Flags = (A68_BITS )((A68_BITS )((*(&(TRWACTR_rd->Flags)))|RQKACTR_rdglobalflag)|XRWACTR_otherflags);
} 
else
{ 
 /* line 860: */
ASWACTR.Mode = Mode;
 /* line 861: */
ASWACTR.Resultmode = Resultmode;
 /* line 862: */
ASWACTR.Declevel = URWACTR_declevel;
 /* line 863: */
ASWACTR.Environ = Environ;
 /* line 864: */
ASWACTR.Name = Name;
 /* line 865: */
ASWACTR.Prefix = QIMACTR_newuniquename();
 /* line 866: */
ASWACTR.Fnprefix = QIMACTR_newuniquename();
 /* line 867: */
ASWACTR.Envprefix = QIMACTR_newuniquename();
 /* line 868: */
 /* line 869: */
ASWACTR.Flags = (A68_BITS )((*(&(TRWACTR_rd->Flags)))|XRWACTR_otherflags);
} 
(*TRWACTR_rd) = ASWACTR;
 /* line 870: */
 /* line 871: */
 /* line 872: */
 /* line 873: */
 /* line 874: */
 /* line 875: */
 /* line 876: */
 /* line 878: */
 /* line 879: */
LSWACTR = (*(&(TRWACTR_rd->Flags))) ;
MSWACTR = (*(&(TRWACTR_rd->Flags))) ;
(void)(IIWACTR_declarecroutine(Rdenno, Resultmode, ZRWACTR_global, A_LB_GE(MSWACTR,PQKACTR_rdkeptflag), A_LB_GE(LSWACTR,SQKACTR_rdopflag), Paramdecnos));
} 
A_PROC_EXIT(rddec);
return;
} 
#undef NL

A68_VOID  OSWACTR_labdec(A68_139  Labeldec)
{ 
A68_INT  PSWACTR_labno A_UNUSED = {0};
A68_INT  QSWACTR_status A_UNUSED = {0};
A68_BOOL  RSWACTR_notsetting A_UNUSED = {0};
A68_VC  SSWACTR_name A_UNUSED = {0};
A68_110 * TSWACTR_labinfo A_UNUSED = {0};
A68_110  USWACTR;  /* collateral clause result */
A68_72  VSWACTR;  /* avoid structure result */
A68_BITS  XSWACTR;  /* ADICOPS - <= */
A68_INT * ZSWACTR;  /* YIELD */
A68_BOOL * ATWACTR;  /* YIELD */
A68_286  BTWACTR;  /* collateral clause result */
A68_VC  CTWACTR;  /* avoid structure result */
A68_66  DTWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  GTWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  HTWACTR;  /* YIELD */
A68_66  ITWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  JTWACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(labdec);
 /* line 882: */
 /* line 883: */
{ 
PSWACTR_labno = Labeldec.Labno;
 /* line 884: */
QSWACTR_status = Labeldec.Status;
 /* line 885: */
RSWACTR_notsetting = Labeldec.Notsetting;
 /* line 886: */
SSWACTR_name = Labeldec.Name;
 /* line 887: */
TSWACTR_labinfo = (&A_R1INDEX(ZPKACTR_labels,PSWACTR_labno));
 /* line 888: */
 /* line 889: */
if (RSWACTR_notsetting)
{ 
 /* line 890: */
if (QSWACTR_status==LCAACTR_announcing)
{ 
 /* line 891: */
USWACTR.Label.Name = QIMACTR_newuniquename();
 /* line 892: */
USWACTR.Label.Set = A68_FALSE;
 /* line 893: */
QPLACTR_currentenviron(  &VSWACTR );
USWACTR.Environ = VSWACTR;
 /* line 894: */
USWACTR.Name = SSWACTR_name;
 /* line 895: */
USWACTR.Prefix = QIMACTR_newuniquename();
 /* line 897: */
USWACTR.Flags = VQKACTR_labdeclaredflag;
 /* line 899: */
USWACTR.Alias = 0;
(*TSWACTR_labinfo) = USWACTR;
} 
else
{ 
 /* line 900: */
 /* line 901: */
if (QSWACTR_status>=MCAACTR_aliasing)
{ 
XSWACTR = (*(&((&A_R1INDEX(ZPKACTR_labels,QSWACTR_status))->Flags))) ;
(void)(WXIACTR_assert(YSWACTR, A_LB_LE(VQKACTR_labdeclaredflag,XSWACTR)));
 /* line 902: */
(void)((*TSWACTR_labinfo) = (*(&A_R1INDEX(ZPKACTR_labels,QSWACTR_status))));
 /* line 903: */
 /* line 904: */
 /* line 906: */
ZSWACTR = (&(TSWACTR_labinfo->Alias)) ;
(*ZSWACTR) = QSWACTR_status;
} 
else
{ 
 /* line 907: */
 /* line 908: */
/*SKIP*/;
} 
} 
} 
else
{ 
ATWACTR = (&((&(TSWACTR_labinfo->Label))->Set)) ;
(*ATWACTR) = A68_TRUE;
 /* line 910: */
 /* line 911: */
WSKACTR_labelfullname( PSWACTR_labno, &CTWACTR );
BTWACTR.data[0] = A_UNITE(DTWACTR,mode2,2,CTWACTR);
 /* line 912: */
HTWACTR = FTWACTR ;
BTWACTR.data[1] = A_UNITE(GTWACTR,mode2,2,HTWACTR);
BTWACTR.data[2] = A_UNITE(ITWACTR,mode4,4,EIAACTR_cnewline);
 /* line 913: */
 /* line 914: */
 /* line 915: */
(void)(MDMACTR_writecstream(A_HISVEC(JTWACTR,BTWACTR,3,A68_66 ), NSLACTR_codestream(VRLACTR_currentlevel())));
} 
} 
A_PROC_EXIT(labdec);
return;
} 
#undef NL
 /* line 919: */
 /* line 920: */
 /* line 921: */
 /* line 922: */
 /* line 923: */
 /* line 924: */
 /* line 925: */
 /* line 926: */
 /* line 927: */
 /* line 929: */

A_STATIC A68_VOID  VTWACTR_zexternaldec(A68_VC  Name, A68_56  Prefix, A68_INT  Mode, A68_INT  Decno, A68_BOOL  Optimised, A68_BOOL  Iddec, A68_BOOL  Globalproc, A68_BOOL  Genproc, A68_BOOL  Forceuse, A68_VC  Definition, A68_VC  Rhs)
{ 
A68_BOOL  DUWACTR;  /* optbool result */
A68_BOOL  EUWACTR;  /* optbool result */
A68_108 * GUWACTR;  /* clause result */
A68_BITS  HUWACTR_idflags A_UNUSED = {0};
A68_BITS  IUWACTR;  /* clause result */
A68_BITS  JUWACTR;  /* clause result */
A68_BOOL  KUWACTR;  /* optbool result */
A68_BITS  LUWACTR;  /* clause result */
A68_BITS  MUWACTR;  /* clause result */
A68_BITS  NUWACTR;  /* clause result */
A68_VC  OUWACTR;  /* avoid structure result */
A_PROC_ENTRY(zexternaldec);
 /* line 935: */
 /* line 937: */
{ 
 /* line 939: */
DUWACTR = (Decno<=IAAACTR_maxidno);
if ( ! DUWACTR )
{EUWACTR = (Decno>=LAAACTR_minlibid);
if ( EUWACTR )
{EUWACTR = (Decno<=MAAACTR_maxlibid);
}
DUWACTR = EUWACTR;
}
(void)(WXIACTR_assert(FUWACTR, DUWACTR));
 /* line 941: */
if (Decno<=IAAACTR_maxidno)
{ 
GUWACTR = (&A_R1INDEX(WPKACTR_ids,Decno));
} 
else
{ 
GUWACTR = (&A_R1INDEX(YPKACTR_libraryids,Decno));
} 
HUWACTR_idflags = (*(&(GUWACTR->Flags)));
 /* line 943: */
 /* line 944: */
 /* line 945: */
if (Optimised)
{ 
IUWACTR = HQKACTR_idoptimisedflag;
} 
else
{ 
 /* line 946: */
IUWACTR = AQKACTR_idnoflags;
} 
if (Iddec)
{ 
JUWACTR = BQKACTR_ididentityflag;
} 
else
{ 
 /* line 947: */
JUWACTR = AQKACTR_idnoflags;
} 
KUWACTR = Genproc;
if ( KUWACTR )
{KUWACTR = A_LB_GE(HUWACTR_idflags,CQKACTR_idkeptflag);
}
if (KUWACTR)
{ 
LUWACTR = KQKACTR_idkeptgenprocflag;
} 
else
{ 
 /* line 948: */
LUWACTR = AQKACTR_idnoflags;
} 
if (Globalproc)
{ 
MUWACTR = JQKACTR_idgprocflag;
} 
else
{ 
 /* line 949: */
MUWACTR = AQKACTR_idnoflags;
} 
if (Forceuse)
{ 
NUWACTR = MQKACTR_idforceuseflag;
} 
else
{ 
NUWACTR = AQKACTR_idnoflags;
} 
 /* line 950: */
 /* line 951: */
 /* line 952: */
ZTWACTR_mybefore( Name, ' ', &OUWACTR );
(void)(ZNVACTR_newidinfo(Decno, Mode, OUWACTR, Prefix, (A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )(IUWACTR|JUWACTR)|LUWACTR)|MUWACTR)|NUWACTR), Definition, Rhs));
} 
A_PROC_EXIT(zexternaldec);
return;
} 
#undef NL

A_STATIC A68_VOID  QUWACTR_zexternalcdec(A68_INT  Decno)
{ 
A68_BOOL  SUWACTR;  /* optbool result */
A68_BOOL  TUWACTR;  /* optbool result */
A68_108 * VUWACTR;  /* clause result */
A68_108 * WUWACTR_id A_UNUSED = {0};
A68_BITS  XUWACTR;  /* ADICOPS - >= */
A68_BOOL  YUWACTR;  /* optbool result */
A68_BITS  ZUWACTR;  /* ADICOPS - >= */
A68_BOOL  AVWACTR;  /* optbool result */
A68_VC  CVWACTR;  /* OPERATORS - trim index */
A68_VC  DVWACTR;  /* OPERATORS - trim index */
A68_BOOL  FVWACTR;  /* clause result */
A68_INT  GVWACTR_mode A_UNUSED = {0};
A68_BITS  HVWACTR;  /* ADICOPS - >= */
A68_BOOL  IVWACTR_optimised A_UNUSED = {0};
A68_BITS  JVWACTR;  /* ADICOPS - >= */
A68_BOOL  KVWACTR_globalproc A_UNUSED = {0};
A68_VC  LVWACTR_definition A_UNUSED = {0};
A68_VC  MVWACTR_rhs A_UNUSED = {0};
A68_256  NVWACTR;  /* collateral clause result */
A68_66  OVWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  PVWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  QVWACTR;  /* OPERATORS - istruct -> vector */
A68_INT  RVWACTR_deprocmode A_UNUSED = {0};
A68_BOOL  SVWACTR;  /* optbool result */
A68_BOOL  TVWACTR_voidresult A_UNUSED = {0};
A68_181  UVWACTR;  /* clause result */
A68_181  VVWACTR;  /* avoid structure result */
A68_296  XVWACTR_generator;   /* proc value of non-global proc */
A68_181  CWWACTR;  /* avoid structure result */
A68_181  DWWACTR_params A_UNUSED = {0};
A68_258  EWWACTR;  /* collateral clause result */
A68_66  HWWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  IWWACTR;  /* YIELD */
A68_INT  JWWACTR;  /* clause result */
A68_VC  KWWACTR;  /* avoid structure result */
A68_66  LWWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  MWWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  NWWACTR;  /* YIELD */
A68_VC  OWWACTR;  /* avoid structure result */
A68_66  PWWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  QWWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  RWWACTR;  /* YIELD */
A68_65  SWWACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  TWWACTR;  /* optbool result */
A68_66  WWWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  XWWACTR;  /* YIELD */
A68_65  YWWACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  ZWWACTR_comma A_UNUSED = {0};
A68_INT * AXWACTR_p A_UNUSED = {0};
A68_INT  BXWACTR;  /* forall loop counter */
A68_256  CXWACTR;  /* collateral clause result */
A68_66  DXWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  EXWACTR;  /* YIELD */
A68_66  HXWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  IXWACTR;  /* YIELD */
A68_VC  JXWACTR;  /* avoid structure result */
A68_66  KXWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  LXWACTR;  /* OPERATORS - istruct -> vector */
A68_286  MXWACTR;  /* collateral clause result */
A68_66  NXWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  OXWACTR;  /* YIELD */
A68_66  RXWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  SXWACTR;  /* YIELD */
A68_VC  TXWACTR;  /* avoid structure result */
A68_66  UXWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  VXWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  WXWACTR;  /* YIELD */
A68_65  XXWACTR;  /* OPERATORS - istruct -> vector */
A68_256  YXWACTR;  /* collateral clause result */
A68_66  BYWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  CYWACTR;  /* YIELD */
A68_66  DYWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  EYWACTR;  /* OPERATORS - istruct -> vector */
A68_269  FYWACTR;  /* collateral clause result */
A68_66  IYWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  JYWACTR;  /* YIELD */
A68_VC  KYWACTR;  /* avoid structure result */
A68_66  LYWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  MYWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  NYWACTR;  /* YIELD */
A68_VC  OYWACTR;  /* avoid structure result */
A68_66  PYWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  QYWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  RYWACTR;  /* YIELD */
A68_66  SYWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  TYWACTR;  /* OPERATORS - istruct -> vector */
A68_256  UYWACTR;  /* collateral clause result */
A68_66  VYWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  WYWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  XYWACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(zexternalcdec);
 /* line 962: */
 /* line 963: */
{ 
SUWACTR = (Decno<=IAAACTR_maxidno);
if ( ! SUWACTR )
{TUWACTR = (Decno>=LAAACTR_minlibid);
if ( TUWACTR )
{TUWACTR = (Decno<=MAAACTR_maxlibid);
}
SUWACTR = TUWACTR;
}
(void)(WXIACTR_assert(UUWACTR, SUWACTR));
 /* line 965: */
if (Decno<=IAAACTR_maxidno)
{ 
VUWACTR = (&A_R1INDEX(WPKACTR_ids,Decno));
} 
else
{ 
VUWACTR = (&A_R1INDEX(YPKACTR_libraryids,Decno));
} 
WUWACTR_id = VUWACTR;
 /* line 968: */
 /* line 969: */
 /* line 970: */
XUWACTR = (*(&(WUWACTR_id->Flags))) ;
YUWACTR = A_LB_GE(XUWACTR,LQKACTR_idloadedflag);
if ( ! YUWACTR )
{ /* line 971: */
ZUWACTR = (*(&(WUWACTR_id->Flags))) ;
YUWACTR = A_LB_GE(ZUWACTR,MQKACTR_idforceuseflag);
}
 /* line 972: */
if ( ! YUWACTR )
{AVWACTR = ((*(&(WUWACTR_id->Definition))).upb>=9);
if ( AVWACTR )
{CVWACTR = (*(&(WUWACTR_id->Definition))) ;
AVWACTR = A_VC_EQ(A_VTRIM(DVWACTR,(CVWACTR),A_VTSCRIPT(&(DVWACTR.upb),(CVWACTR).upb,((*(&(WUWACTR_id->Definition))).upb-8),(CVWACTR).upb)),EVWACTR);
}
 /* line 973: */
YUWACTR = AVWACTR;
}
 /* line 974: */
FVWACTR = YUWACTR;
if (FVWACTR)
{ 
GVWACTR_mode = (*(&(WUWACTR_id->Mode)));
 /* line 975: */
HVWACTR = (*(&(WUWACTR_id->Flags))) ;
IVWACTR_optimised = A_LB_GE(HVWACTR,HQKACTR_idoptimisedflag);
 /* line 976: */
JVWACTR = (*(&(WUWACTR_id->Flags))) ;
KVWACTR_globalproc = A_LB_GE(JVWACTR,JQKACTR_idgprocflag);
 /* line 977: */
LVWACTR_definition = (*(&(WUWACTR_id->Definition)));
 /* line 978: */
MVWACTR_rhs = (*(&(WUWACTR_id->Rhs)));
 /* line 980: */
 /* line 981: */
 /* line 982: */
if (MVWACTR_rhs.upb>0)
{ 
NVWACTR.data[0] = A_UNITE(OVWACTR,mode2,2,MVWACTR_rhs);
NVWACTR.data[1] = A_UNITE(PVWACTR,mode4,4,EIAACTR_cnewline);
 /* line 983: */
(void)(MDMACTR_writecstream(A_HISVEC(QVWACTR,NVWACTR,2,A68_66 ), GSLACTR_importsstream));
} 
 /* line 985: */
 /* line 986: */
 /* line 987: */
if (LVWACTR_definition.upb<=0)
{ 
 /* line 988: */
 /* line 989: */
if (KVWACTR_globalproc)
{ 
RVWACTR_deprocmode = A_CALLPROC(SVMACTR_deproc,(GVWACTR_mode),(GVWACTR_mode,(SVMACTR_deproc).nonlocals));
 /* line 990: */
SVWACTR = NQIACTR_nostructresultoption;
if ( SVWACTR )
{SVWACTR = VSMACTR_iscstruct(RVWACTR_deprocmode);
}
TVWACTR_voidresult = SVWACTR;
 /* line 992: */
if (NSMACTR_isprocp(GVWACTR_mode))
{ 
A_CALLPROC(AWMACTR_parameters,(GVWACTR_mode, &VVWACTR),(GVWACTR_mode, &VVWACTR,(AWMACTR_parameters).nonlocals));
UVWACTR = VVWACTR;
} 
else
{ 
A_CLOSURE( XVWACTR_generator, YVWACTR_generator, ZVWACTR_generator );
A_CALLPROC(XVWACTR_generator,(A68_FALSE, &CWWACTR),(A68_FALSE, &CWWACTR,(XVWACTR_generator).nonlocals));
UVWACTR = CWWACTR;
} 
DWWACTR_params = UVWACTR;
 /* line 994: */
 /* line 995: */
IWWACTR = GWWACTR ;
EWWACTR.data[0] = A_UNITE(HWWACTR,mode2,2,IWWACTR);
if (TVWACTR_voidresult)
{ 
JWWACTR = UEAACTR_voidmode;
} 
else
{ 
JWWACTR = RVWACTR_deprocmode;
} 
XKNACTR_ctype( JWWACTR, &KWWACTR );
EWWACTR.data[1] = A_UNITE(LWWACTR,mode2,2,KWWACTR);
 /* line 996: */
NWWACTR = ' ' ;
EWWACTR.data[2] = A_UNITE(MWWACTR,mode1,1,NWWACTR);
UTKACTR_idfullname( Decno, &OWWACTR );
EWWACTR.data[3] = A_UNITE(PWWACTR,mode2,2,OWWACTR);
RWWACTR = '(' ;
EWWACTR.data[4] = A_UNITE(QWWACTR,mode1,1,RWWACTR);
(void)(MDMACTR_writecstream(A_HISVEC(SWWACTR,EWWACTR,5,A68_66 ), GSLACTR_importsstream));
 /* line 998: */
 /* line 999: */
TWWACTR = (DWWACTR_params.upb==0);
if ( TWWACTR )
{TWWACTR = (!TVWACTR_voidresult);
}
 /* line 1000: */
if (TWWACTR)
{ 
 /* line 1001: */
 /* line 1002: */
XWWACTR = VWWACTR ;
(void)(MDMACTR_writecstream(A_HVEC(YWWACTR,A_UNITE(WWWACTR,mode2,2,XWWACTR),A68_66 ), GSLACTR_importsstream));
} 
else
{ 
ZWWACTR_comma = A68_FALSE;
 /* line 1003: */
 /* line 1004: */
BXWACTR = DWWACTR_params.upb -1;
AXWACTR_p = DWWACTR_params.data;
for (;BXWACTR-- >= 0;
(AXWACTR_p++
) )
{
 /* line 1005: */
if (ZWWACTR_comma)
{ 
EXWACTR = ',' ;
CXWACTR.data[0] = A_UNITE(DXWACTR,mode1,1,EXWACTR);
} 
else
{ 
IXWACTR = GXWACTR ;
CXWACTR.data[0] = A_UNITE(HXWACTR,mode2,2,IXWACTR);
} 
WLNACTR_ctaggedtype( (*AXWACTR_p), &JXWACTR );
CXWACTR.data[1] = A_UNITE(KXWACTR,mode2,2,JXWACTR);
(void)(MDMACTR_writecstream(A_HISVEC(LXWACTR,CXWACTR,2,A68_66 ), GSLACTR_importsstream));
 /* line 1006: */
 /* line 1007: */
ZWWACTR_comma = A68_TRUE;
}
 /* line 1009: */
 /* line 1010: */
 /* line 1011: */
if (TVWACTR_voidresult)
{ 
if (ZWWACTR_comma)
{ 
OXWACTR = ',' ;
MXWACTR.data[0] = A_UNITE(NXWACTR,mode1,1,OXWACTR);
} 
else
{ 
SXWACTR = QXWACTR ;
MXWACTR.data[0] = A_UNITE(RXWACTR,mode2,2,SXWACTR);
} 
XKNACTR_ctype( RVWACTR_deprocmode, &TXWACTR );
MXWACTR.data[1] = A_UNITE(UXWACTR,mode2,2,TXWACTR);
WXWACTR = '*' ;
MXWACTR.data[2] = A_UNITE(VXWACTR,mode1,1,WXWACTR);
 /* line 1012: */
 /* line 1013: */
(void)(MDMACTR_writecstream(A_HISVEC(XXWACTR,MXWACTR,3,A68_66 ), GSLACTR_importsstream));
} 
} 
 /* line 1015: */
CYWACTR = AYWACTR ;
YXWACTR.data[0] = A_UNITE(BYWACTR,mode2,2,CYWACTR);
YXWACTR.data[1] = A_UNITE(DYWACTR,mode4,4,EIAACTR_cnewline);
 /* line 1017: */
 /* line 1018: */
(void)(MDMACTR_writecstream(A_HISVEC(EYWACTR,YXWACTR,2,A68_66 ), GSLACTR_importsstream));
} 
else
{ 
 /* line 1019: */
if (!IVWACTR_optimised)
{ 
 /* line 1020: */
JYWACTR = HYWACTR ;
FYWACTR.data[0] = A_UNITE(IYWACTR,mode2,2,JYWACTR);
BLNACTR_cvartype( (*(&(YQKACTR_get_idinfo(Decno)->Cvariabletype))), &KYWACTR );
FYWACTR.data[1] = A_UNITE(LYWACTR,mode2,2,KYWACTR);
 /* line 1021: */
NYWACTR = ' ' ;
FYWACTR.data[2] = A_UNITE(MYWACTR,mode1,1,NYWACTR);
UTKACTR_idfullname( Decno, &OYWACTR );
FYWACTR.data[3] = A_UNITE(PYWACTR,mode2,2,OYWACTR);
RYWACTR = ';' ;
FYWACTR.data[4] = A_UNITE(QYWACTR,mode1,1,RYWACTR);
FYWACTR.data[5] = A_UNITE(SYWACTR,mode4,4,EIAACTR_cnewline);
 /* line 1022: */
 /* line 1023: */
 /* line 1024: */
(void)(MDMACTR_writecstream(A_HISVEC(TYWACTR,FYWACTR,6,A68_66 ), GSLACTR_importsstream));
} 
} 
} 
else
{ 
UYWACTR.data[0] = A_UNITE(VYWACTR,mode2,2,LVWACTR_definition);
UYWACTR.data[1] = A_UNITE(WYWACTR,mode4,4,EIAACTR_cnewline);
 /* line 1025: */
 /* line 1026: */
(void)(MDMACTR_writecstream(A_HISVEC(XYWACTR,UYWACTR,2,A68_66 ), GSLACTR_importsstream));
} 
} 
} 
A_PROC_EXIT(zexternalcdec);
return;
} 
#undef NL

A68_VOID  YYWACTR_initialiseidentifiers(void)
{ 
A68_112  ZYWACTR;  /* procedure value */
A68_75  AZWACTR;  /* procedure value */
A_PROC_ENTRY(initialiseidentifiers);
{ 
ZYWACTR.fn.fn_global = VTWACTR_zexternaldec;
ZYWACTR.nonlocals = A68_NIL;
LXKACTR_externaldec = ZYWACTR;
 /* line 1032: */
 /* line 1033: */
AZWACTR.fn.fn_global = QUWACTR_zexternalcdec;
AZWACTR.nonlocals = A68_NIL;
MXKACTR_externalcdec = AZWACTR;
} 
A_PROC_EXIT(initialiseidentifiers);
return;
} 
#undef NL

A68_INT  CZWACTR_leveloflabel(A68_INT  Labno)
{ 
A68_INT  DZWACTR;  /* clause result */
A_PROC_ENTRY(leveloflabel);
 /* line 1036: */
DZWACTR = (*(&((&((&A_R1INDEX(ZPKACTR_labels,Labno))->Environ))->Level)));
A_PROC_EXIT(leveloflabel);
return( DZWACTR );
} 
#undef NL

A68_VOID  FZWACTR_environoflabel(A68_INT  Labno, A68_72  *ReturnedValue)
{ 
A68_72  GZWACTR;  /* clause result */
A_PROC_ENTRY(environoflabel);
 /* line 1039: */
GZWACTR = (*(&((&A_R1INDEX(ZPKACTR_labels,Labno))->Environ)));
A_PROC_EXIT(environoflabel);
*ReturnedValue = (GZWACTR);
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
A68_127  QBWACTR;  /* avoid structure result */
A68_127 * RBWACTR;  /* YIELD */
A68_90  XBWACTR;  /* avoid structure result */
A68_90 * YBWACTR;  /* YIELD */
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
A_config.translation_time = "Thu Nov  5 21:38:58 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "LMVACTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 21:38:58 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS identifiers);
(void)(UEAALIB_a68config(LGAALIB_configinfo, QMVACTR));
 /* line 50: */
 /* line 60: */
 /* line 66: */
 /* line 86: */
 /* line 87: */
 /* line 172: */
 /* line 353: */
 /* line 461: */
 /* line 462: */
 /* line 537: */
NBWACTR_generator( A68_FALSE, &QBWACTR );
RBWACTR = A_LOC(A68_127 ) ;
(void)((*RBWACTR) = QBWACTR) ;
SBWACTR_levelprototype = RBWACTR;
 /* line 538: */
UBWACTR_generator( A68_FALSE, &XBWACTR );
YBWACTR = A_LOC(A68_90 ) ;
(void)((*YBWACTR) = XBWACTR) ;
ZBWACTR_levelsetjmp = YBWACTR;
 /* line 540: */
 /* line 555: */
 /* line 562: */
 /* line 589: */
 /* line 659: */
 /* line 660: */
 /* line 792: */
 /* line 797: */
 /* line 798: */
 /* line 817: */
 /* line 818: */
 /* line 881: */
 /* line 917: */
 /* line 918: */
 /* line 954: */
 /* line 956: */
 /* line 1028: */
 /* line 1029: */
 /* line 1031: */
 /* line 1035: */
 /* line 1038: */
 /* line 1041: */
 /* line 1043: */
 /* line 1050: */
/*SKIP*/;
A_PROC_EXIT(DECS identifiers);
} 
#undef NL
/* end of translation of identifiers.a68 */
