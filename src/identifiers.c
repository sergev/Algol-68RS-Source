/* UNAME:XMVACTR */
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
extern A68_VOID  DAQACTR_getcfragment(struct A68t98 *,A68_VC *);
extern A68_BITS  PKJACTR_defaultinfo;
#define QKJACTR_constant 0X1U
#define TKJACTR_nonloc 0X8U
#define WKJACTR_isnil 0X40U
extern A68_BOOL  IWPACTR_hasattribute(struct A68t98 *,A68_BITS );
extern A68_VOID  JEQACTR_bracketcfragment(struct A68t98 *,A68_VC *);
/* --- End of imports from values --- */


/* --- Imports from uniquenameserver --- */
extern A68_56  QIMACTR_newuniquename(void);
/* --- End of imports from uniquenameserver --- */


/* --- Imports from unionaids --- */
extern A68_INT  OWQACTR_findints(struct A68t181 ,struct A68t181 );
extern A68_VOID  EXQACTR_uniontouniontable(struct A68t181 ,struct A68t181 ,A68_VC *);
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
extern A68_VOID  SMVACTR_evaluatestack(struct A68t105 **);
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
extern void DVQACTR(void);   /* unionaids */
extern void BCHACTR(void);   /* moduletracer */
extern void DNMACTR(void);   /* modes */
extern void ZDAACTR(void);   /* incmode */
extern void ODAACTR(void);   /* incinstallation */
extern void ANOACTR(void);   /* modules */
extern void UAAACTR(void);   /* incimperatives */
extern void BAAACTR(void);   /* incid */
extern void PPKACTR(void);   /* idtable */
extern void VGVACTR(void);   /* evaluator */
extern void HPIACTR(void);   /* environment */
extern void BPLACTR(void);   /* environ */
extern void LLJACTR(void);   /* denotations */
extern void PTLACTR(void);   /* coutput */
extern void THAACTR(void);   /* centities */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_241   BNVACTR = {"$Id: identifiers.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,CNVACTR,BNVACTR,61)
static A68_243   GNVACTR = {"identifiers"}; 
A_GISVEC(A68_VC ,HNVACTR,GNVACTR,11)
static A68_244   INVACTR = {"identifiers("}; 
static A68_245   JNVACTR = {"): "}; 
A_GISVEC(A68_VC ,KNVACTR,INVACTR,12)
A_GISVEC(A68_VC ,MNVACTR,JNVACTR,3)
static A68_247   PNVACTR = {"dummy dec"}; 
A_GISVEC(A68_VC ,QNVACTR,PNVACTR,9)
static A68_248   BOVACTR = {"RS/trans keeplist inconsistency"}; 
A_GISVEC(A68_VC ,COVACTR,BOVACTR,31)
static A68_250   VPVACTR = {""}; 
A_GISVEC(A68_VC ,XPVACTR,VPVACTR,0)
static A68_252   YQVACTR = {"#define "}; 
A_GISVEC(A68_VC ,ZQVACTR,YQVACTR,8)
static A68_56   NRVACTR = {"extern "}; 
static A68_245   PRVACTR = {"();"}; 
A_GISVEC(A68_VC ,TRVACTR,PRVACTR,3)
A_GISVEC(A68_VC ,XRVACTR,NRVACTR,7)
static A68_254   BSVACTR = {"/* no definition of ALIEN supplied for "}; 
A_GISVEC(A68_VC ,CSVACTR,BSVACTR,39)
static A68_245   DSVACTR = {" */"}; 
A_GISVEC(A68_VC ,ESVACTR,DSVACTR,3)
static A68_252   DTVACTR = {"#define "}; 
A_GISVEC(A68_VC ,ETVACTR,DTVACTR,8)
static A68_250   EUVACTR = {""}; 
A_GISVEC(A68_VC ,FUVACTR,EUVACTR,0)
static A68_56   IUVACTR = {"static "}; 
A_GISVEC(A68_VC ,JUVACTR,IUVACTR,7)
static A68_247   SUVACTR = {" A_UNUSED"}; 
A_GISVEC(A68_VC ,TUVACTR,SUVACTR,9)
static A68_56   YUVACTR = {" = {0};"}; 
A_GISVEC(A68_VC ,ZUVACTR,YUVACTR,7)
static A68_56   DVVACTR = {" /* OP "}; 
static A68_245   EVVACTR = {" */"}; 
A_GISVEC(A68_VC ,FVVACTR,DVVACTR,7)
A_GISVEC(A68_VC ,GVVACTR,EVVACTR,3)
static A68_250   JVVACTR = {""}; 
A_GISVEC(A68_VC ,KVVACTR,JVVACTR,0)
static A68_245   SVVACTR = {" = "}; 
A_GISVEC(A68_VC ,TVVACTR,SVVACTR,3)
#define WWVACTR_identity 1
#define XWVACTR_variable 2
#define YWVACTR_formalparam 3
#define ZWVACTR_forcontrol 4
#define AXVACTR_initialisedvar 5
#define BXVACTR_caseconformity 6
#define CXVACTR_forallcontrol 7
#define DXVACTR_dummy 8
#define JXVACTR_noinitialvalue (A68_98 *)A68_NIL
static A68_260   WXVACTR = {"ccdec not handled here"}; 
A_GISVEC(A68_VC ,XXVACTR,WXVACTR,22)
static A68_261   HYVACTR = {"This transiddec type should not occur"}; 
A_GISVEC(A68_VC ,IYVACTR,HYVACTR,37)
static A68_263   NYVACTR = {"ccdec: not a choice dec"}; 
A_GISVEC(A68_VC ,OYVACTR,NYVACTR,23)
static A68_264   UYVACTR = {".data.mode"}; 
A_GISVEC(A68_VC ,WYVACTR,UYVACTR,10)
static A68_252   ZZVACTR = {"A_UNCPY("}; 
A_GISVEC(A68_VC ,AAWACTR,ZZVACTR,8)
static A68_268   HAWACTR = {");"}; 
A_GISVEC(A68_VC ,IAWACTR,HAWACTR,2)
static A68_247   PAWACTR = {".mode -= "}; 
A_GISVEC(A68_VC ,QAWACTR,PAWACTR,9)
static A68_270   GBWACTR = {".mode = \"\\000"}; 
A_GISVEC(A68_VC ,HBWACTR,GBWACTR,13)
static A68_268   LBWACTR = {"\"["}; 
A_GISVEC(A68_VC ,MBWACTR,LBWACTR,2)
static A68_56   QBWACTR = {".mode];"}; 
A_GISVEC(A68_VC ,RBWACTR,QBWACTR,7)
static A68_272   WBWACTR = {"ccdec: invalid mode index"}; 
A_GISVEC(A68_VC ,XBWACTR,WBWACTR,25)
static A68_127 * ECWACTR_levelprototype A_UNUSED;
static A68_90 * LCWACTR_levelsetjmp A_UNUSED;
static A68_244   SDWACTR = {"A_SETJMP_FN "}; 
A_GISVEC(A68_VC ,TDWACTR,SDWACTR,12)
static A68_244   JEWACTR = {"A68_jmp_buf "}; 
A_GISVEC(A68_VC ,KEWACTR,JEWACTR,12)
static A68_276   VEWACTR = {"if ( sigsetjmp( "}; 
A_GISVEC(A68_VC ,WEWACTR,VEWACTR,16)
static A68_277   ZEWACTR = {".label"}; 
A_GISVEC(A68_VC ,BFWACTR,ZEWACTR,6)
static A68_243   EFWACTR = {",1) ) goto "}; 
A_GISVEC(A68_VC ,FFWACTR,EFWACTR,11)
#define SFWACTR_idtype 1
#define TFWACTR_rdtype 2
#define UFWACTR_libtype 3
#define VFWACTR_labtype 4
static A68_254   CGWACTR = {"IDENTIFIERS - library ids not supported"}; 
A_GISVEC(A68_VC ,DGWACTR,CGWACTR,39)
static A68_148   FGWACTR = {"IDENTIFIERS - invalid type of id"}; 
A_GISVEC(A68_VC ,GGWACTR,FGWACTR,32)
static A68_245   NHWACTR = {"(( "}; 
A_GISVEC(A68_VC ,OHWACTR,NHWACTR,3)
static A68_56   THWACTR = {" * ) ( "}; 
A_GISVEC(A68_VC ,UHWACTR,THWACTR,7)
static A68_278   ZHWACTR = {".nonlocals )) -> "}; 
A_GISVEC(A68_VC ,AIWACTR,ZHWACTR,17)
static A68_245   EIWACTR = {" = "}; 
A_GISVEC(A68_VC ,FIWACTR,EIWACTR,3)
static A68_250   EKWACTR = {""}; 
A_GISVEC(A68_VC ,FKWACTR,EKWACTR,0)
static A68_268   OKWACTR = {", "}; 
A_GISVEC(A68_VC ,PKWACTR,OKWACTR,2)
static A68_284   UKWACTR = {" *ReturnedValue"}; 
A_GISVEC(A68_VC ,WKWACTR,UKWACTR,15)
static A68_284   XKWACTR = {"void *NonLocals"}; 
A_GISVEC(A68_VC ,YKWACTR,XKWACTR,15)
static A68_250   ALWACTR = {""}; 
A_GISVEC(A68_VC ,BLWACTR,ALWACTR,0)
static A68_247   CLWACTR = {"A_STATIC "}; 
A_GISVEC(A68_VC ,DLWACTR,CLWACTR,9)
static A68_40   HLWACTR = {"void"}; 
A_GISVEC(A68_VC ,ILWACTR,HLWACTR,4)
static A68_278   CMWACTR = {"#define NL(x) ((("}; 
A_GISVEC(A68_VC ,DMWACTR,CMWACTR,17)
static A68_278   HMWACTR = {" *)NonLocals)->x)"}; 
A_GISVEC(A68_VC ,IMWACTR,HMWACTR,17)
static A68_287   ANWACTR = {"   /* proc value of non-global proc */"}; 
A_GISVEC(A68_VC ,BNWACTR,ANWACTR,38)
static A68_250   ENWACTR = {""}; 
A_GISVEC(A68_VC ,FNWACTR,ENWACTR,0)
static A68_288   UNWACTR = {"  /* proc non-locals allocated on stack */"}; 
A_GISVEC(A68_VC ,VNWACTR,UNWACTR,42)
static A68_250   YNWACTR = {""}; 
A_GISVEC(A68_VC ,ZNWACTR,YNWACTR,0)
static A68_278   FOWACTR = {"A_STACK_CLOSURE( "}; 
A_GISVEC(A68_VC ,GOWACTR,FOWACTR,17)
static A68_268   KOWACTR = {", "}; 
A_GISVEC(A68_VC ,LOWACTR,KOWACTR,2)
static A68_268   POWACTR = {", "}; 
A_GISVEC(A68_VC ,QOWACTR,POWACTR,2)
static A68_245   UOWACTR = {" );"}; 
A_GISVEC(A68_VC ,VOWACTR,UOWACTR,3)
static A68_289   BPWACTR = {"A_MARKED_CLOSURE( "}; 
A_GISVEC(A68_VC ,CPWACTR,BPWACTR,18)
static A68_243   FPWACTR = {"A_CLOSURE( "}; 
A_GISVEC(A68_VC ,GPWACTR,FPWACTR,11)
static A68_268   KPWACTR = {", "}; 
A_GISVEC(A68_VC ,LPWACTR,KPWACTR,2)
static A68_268   PPWACTR = {", "}; 
A_GISVEC(A68_VC ,QPWACTR,PPWACTR,2)
static A68_245   UPWACTR = {" );"}; 
A_GISVEC(A68_VC ,VPWACTR,UPWACTR,3)
static A68_290   BQWACTR = {"typedef struct"}; 
A_GISVEC(A68_VC ,CQWACTR,BQWACTR,14)
static A68_248   FQWACTR = {"   /* env of non-global proc */"}; 
A_GISVEC(A68_VC ,GQWACTR,FQWACTR,31)
static A68_250   JQWACTR = {""}; 
A_GISVEC(A68_VC ,KQWACTR,JQWACTR,0)
static A68_290   QQWACTR = {" A68_INT mark;"}; 
A_GISVEC(A68_VC ,RQWACTR,QQWACTR,14)
static A68_250   UQWACTR = {""}; 
A_GISVEC(A68_VC ,VQWACTR,UQWACTR,0)
static A68_264   GRWACTR = {"int dummy;"}; 
A_GISVEC(A68_VC ,HRWACTR,GRWACTR,10)
static A68_268   NRWACTR = {"} "}; 
A_GISVEC(A68_VC ,ORWACTR,NRWACTR,2)
static A68_293   ITWACTR = {"IDENTIFIERS - should be aliasing to initialised label"}; 
A_GISVEC(A68_VC ,KTWACTR,ITWACTR,53)
static A68_243   QTWACTR = {": A_UNUSED;"}; 
A_GISVEC(A68_VC ,RTWACTR,QTWACTR,11)
static A68_294   OUWACTR = {"external dec: invalid decno"}; 
A_GISVEC(A68_VC ,RUWACTR,OUWACTR,27)
static A68_295   DVWACTR = {"external c dec: invalid decno"}; 
A_GISVEC(A68_VC ,GVWACTR,DVWACTR,29)
static A68_247   NVWACTR = {"A_prelude"}; 
A_GISVEC(A68_VC ,QVWACTR,NVWACTR,9)
static A68_56   RWWACTR = {"extern "}; 
A_GISVEC(A68_VC ,SWWACTR,RWWACTR,7)
static A68_40   GXWACTR = {"void"}; 
A_GISVEC(A68_VC ,HXWACTR,GXWACTR,4)
static A68_250   RXWACTR = {""}; 
A_GISVEC(A68_VC ,SXWACTR,RXWACTR,0)
static A68_250   BYWACTR = {""}; 
A_GISVEC(A68_VC ,CYWACTR,BYWACTR,0)
static A68_268   LYWACTR = {");"}; 
A_GISVEC(A68_VC ,MYWACTR,LYWACTR,2)
static A68_56   SYWACTR = {"extern "}; 
A_GISVEC(A68_VC ,TYWACTR,SYWACTR,7)
typedef struct   /* env of non-global proc */
{
A68_INT  Decno;
A_PAD_INT(PAD_162)
A68_98 * Initvalue;
A68_BOOL  PQVACTR_kept;
A_PAD_BOOL(PAD_163)
A68_108 * IQVACTR_idinfo;
} WQVACTR_optidentity;
typedef struct   /* env of non-global proc */
{
A68_BOOL  MQVACTR_global;
A_PAD_BOOL(PAD_164)
A68_108 * IQVACTR_idinfo;
A68_INT  Decno;
A_PAD_INT(PAD_165)
A68_INT  RQVACTR_decstream;
A_PAD_INT(PAD_166)
A68_98 * Initvalue;
A68_INT  SQVACTR_codestream;
A_PAD_INT(PAD_167)
} AUVACTR_declarecvariable;
typedef struct   /* env of non-global proc */
{
A68_INT  PCWACTR_n;
A_PAD_INT(PAD_168)
} TCWACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  PCWACTR_n;
A_PAD_INT(PAD_169)
} BDWACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  CJWACTR_a68paramcount;
A_PAD_INT(PAD_170)
} MJWACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  CJWACTR_a68paramcount;
A_PAD_INT(PAD_171)
A68_281  RJWACTR_paramtypes;
A68_281  PJWACTR_paramnames;
A68_BOOL  YIWACTR_usetempforresult;
A_PAD_BOOL(PAD_172)
A68_INT  Resultmode;
A_PAD_INT(PAD_173)
A68_BOOL  BJWACTR_fulldec;
A_PAD_BOOL(PAD_174)
A68_BOOL  Global;
A_PAD_BOOL(PAD_175)
A68_BOOL  Kept;
A_PAD_BOOL(PAD_176)
A68_INT  AJWACTR_cresultmode;
A_PAD_INT(PAD_177)
A68_VC  IJWACTR_fnname;
} DKWACTR_prototype;
typedef struct   /* env of non-global proc */
{
int dummy;
} LWWACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_VC * IKWACTR_params;
} MKWACTR_addparam;

A_STATIC A68_VOID  FNVACTR_debugmessage(A68_INT  Level, A68_VC  M);

A68_VOID  ONVACTR_initialdummydec(A68_130  Dummydec);

A_STATIC A68_INT  VNVACTR_keeplistposition(A68_INT  Decno);

A_STATIC A68_VOID  LOVACTR_newidinfo(A68_INT  Decno, A68_INT  Mode, A68_VC  A68name, A68_56  Prefix, A68_BITS  Flags, A68_VC  Definition, A68_VC  Rhs);

A_STATIC A68_VOID  HQVACTR_outputcdeclaration(A68_INT  Decno, A68_98 * Initvalue);

A_STATIC A68_VOID  VQVACTR_optidentity(A68_VC  Rhs, void *NonLocals);

A_STATIC A68_VOID  ZTVACTR_declarecvariable(void *NonLocals);

A68_VOID  VWVACTR_iddec(A68_130  Identifierdec, A68_105 ** Valuestack);

A68_VOID  MYVACTR_ccdec(A68_130  Choicedec, A68_98 * Enquiry, A68_INT  Modeindex);

A_STATIC A68_98 * CZVACTR_assignment(A68_98 * AZVACTR_anonymous, A68_98  BZVACTR_anonymous);

A_STATIC A68_99 * HZVACTR_assignment(A68_99 * FZVACTR_anonymous, A68_99  GZVACTR_anonymous);

A_STATIC A68_VOID  ZBWACTR_generator(A68_BOOL  YBWACTR_anonymous, A68_127  *ReturnedValue);

A_STATIC A68_VOID  GCWACTR_generator(A68_BOOL  FCWACTR_anonymous, A68_90  *ReturnedValue);

A68_VOID  OCWACTR_noteroutineprototype(A68_INT  Level, A68_VC  Prototype);

A_STATIC A68_VOID  SCWACTR_generator(A68_BOOL  QCWACTR_anonymous, A68_127  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ADWACTR_generator(A68_BOOL  YCWACTR_anonymous, A68_90  *ReturnedValue, void *NonLocals);

A68_VOID  ODWACTR_endroutineprototype(A68_INT  Level);

A68_VOID  DEWACTR_declarenonlocallabel(A68_INT  Labno);

A68_VOID  RFWACTR_nonlocaldec(A68_INT  Idno, A68_INT  Level);

A_STATIC A68_VOID  UIWACTR_declarecroutine(A68_INT  Rdenno, A68_INT  Resultmode, A68_BOOL  Global, A68_BOOL  Kept, A68_BOOL  Opsym, A68_181  Params);

A_STATIC A68_VOID  LJWACTR_generator(A68_BOOL  JJWACTR_anonymous, A68_281  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CKWACTR_prototype(A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  LKWACTR_addparam(A68_VC  Text, void *NonLocals);

A68_VOID  ARWACTR_completerddec(void);

A68_VOID  ESWACTR_rddec(A68_VC  Name, A68_INT  Mode, A68_181  Paramdecnos, A68_INT  Resultmode, A68_INT  Rdenno, A68_72  Environ, A68_BITS  Props);

A68_VOID  ATWACTR_labdec(A68_139  Labeldec);

A_STATIC A68_VOID  HUWACTR_zexternaldec(A68_VC  Name, A68_56  Prefix, A68_INT  Mode, A68_INT  Decno, A68_BOOL  Optimised, A68_BOOL  Iddec, A68_BOOL  Globalproc, A68_BOOL  Genproc, A68_BOOL  Forceuse, A68_VC  Definition, A68_VC  Rhs);

A_STATIC A68_VOID  LUWACTR_mybefore(A68_VC  S, A68_CHAR  C, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  CVWACTR_zexternalcdec(A68_INT  Decno);

A_STATIC A68_VOID  KWWACTR_generator(A68_BOOL  IWWACTR_anonymous, A68_181  *ReturnedValue, void *NonLocals);

A68_VOID  KZWACTR_initialiseidentifiers(void);

A68_INT  OZWACTR_leveloflabel(A68_INT  Labno);

A68_VOID  RZWACTR_environoflabel(A68_INT  Labno, A68_72  *ReturnedValue);

A_STATIC A68_99 * HZVACTR_assignment(A68_99 * FZVACTR_anonymous, A68_99  GZVACTR_anonymous)
{ 
A68_99  IZVACTR;  /* united object - for case conformity */
A68_VC  JZVACTR_anonymous A_UNUSED = {0};
A68_VC  KZVACTR;  /* OPERATORS - copy to flex */
A68_267 * LZVACTR;  /* YIELD */
A68_99 * MZVACTR;  /* clause result */
{ 
(*A_NILCHECK(FZVACTR_anonymous)) = GZVACTR_anonymous;
IZVACTR = GZVACTR_anonymous ;
switch ( IZVACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
JZVACTR_anonymous = (IZVACTR.data.mode6);
LZVACTR = &(FZVACTR_anonymous-> data.mode6) ;
(void)((*A_NILCHECK(LZVACTR)) = A_VCOPY(JZVACTR_anonymous,KZVACTR,A68_CHAR ));
break;
default: 
/*SKIP*/;
break;
} 
MZVACTR = FZVACTR_anonymous;
} 
return( MZVACTR );
} 
#undef NL

A_STATIC A68_VOID  LKWACTR_addparam(A68_VC  Text, void *NonLocals)
#define NL(x) (((MKWACTR_addparam *)NonLocals)->x)
{ 
A68_VC  NKWACTR;  /* clause result */
A68_VC  QKWACTR;  /* avoid structure result */
A_PROC_ENTRY(addparam);
 /* line 701: */
 /* line 702: */
if ((*A_NILCHECK(NL(IKWACTR_params))).upb==0)
{ 
NKWACTR = Text;
} 
else
{ 
NKWACTR = A_VC_PLUS(A_VC_PLUS((*A_NILCHECK(NL(IKWACTR_params))),PKWACTR),Text);
} 
ZCAAOSF_makervc( NKWACTR, &QKWACTR );
(*A_NILCHECK(NL(IKWACTR_params))) = QKWACTR;
A_PROC_EXIT(addparam);
return;
} 
#undef NL

A_STATIC A68_VOID  VQVACTR_optidentity(A68_VC  Rhs, void *NonLocals)
#define NL(x) (((WQVACTR_optidentity *)NonLocals)->x)
{ 
A68_253  XQVACTR;  /* collateral clause result */
A68_VC  ARVACTR;  /* avoid structure result */
A68_VC  BRVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_36  DRVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ERVACTR;  /* avoid structure result */
A68_VC  FRVACTR;  /* avoid structure result */
A68_VC  CRVACTR_definition A_UNUSED = {0};
A68_99  GRVACTR;  /* united object - for case conformity */
A68_101  HRVACTR_id A_UNUSED = {0};
A68_BOOL  IRVACTR_aliendec A_UNUSED = {0};
A68_108 * JRVACTR;  /* clause result */
A68_108 * KRVACTR_rhsidinfo A_UNUSED = {0};
A68_BITS * LRVACTR;  /* YIELD */
A68_VC  MRVACTR;  /* clause result */
A68_BITS  ORVACTR;  /* ADICOPS - >= */
A68_VC  QRVACTR;  /* clause result */
A68_VC  RRVACTR;  /* avoid structure result */
A68_VC  SRVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  URVACTR;  /* avoid structure result */
A68_VC  VRVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  WRVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  YRVACTR;  /* avoid structure result */
A68_85  ZRVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_255  ASVACTR;  /* collateral clause result */
A68_36  FSVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  GSVACTR;  /* avoid structure result */
A68_VC  HSVACTR;  /* avoid structure result */
A68_VC * ISVACTR;  /* YIELD */
A68_BOOL  JSVACTR;  /* optbool result */
A68_INT  KSVACTR;  /* YIELD */
A68_155  LSVACTR;  /* OPERATORS - simple index */
A68_INT  MSVACTR;  /* YIELD */
A68_157 * NSVACTR_keptinfo A_UNUSED = {0};
A68_BOOL  OSVACTR;  /* optbool result */
A68_BOOL  PSVACTR;  /* clause result */
A68_INT  QSVACTR;  /* YIELD */
A68_LINT * RSVACTR;  /* YIELD */
A68_56 * SSVACTR;  /* YIELD */
A68_255  TSVACTR;  /* collateral clause result */
A68_VC  USVACTR;  /* OPERATORS - istruct -> vector */
A68_56  VSVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  WSVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XSVACTR;  /* avoid structure result */
A68_36  YSVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ZSVACTR;  /* avoid structure result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} ATVACTR; 
A68_VC * BTVACTR;  /* YIELD */
A68_253  CTVACTR;  /* collateral clause result */
A68_VC  FTVACTR;  /* avoid structure result */
A68_VC  GTVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_36  HTVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ITVACTR;  /* avoid structure result */
A68_VC  JTVACTR;  /* avoid structure result */
A68_256  KTVACTR;  /* collateral clause result */
A68_66  LTVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  MTVACTR;  /* YIELD */
A68_66  NTVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  OTVACTR;  /* OPERATORS - istruct -> vector */
A68_INT * PTVACTR;  /* YIELD */
A68_BITS * QTVACTR;  /* YIELD */
A68_VC  RTVACTR;  /* avoid structure result */
A68_VC * STVACTR;  /* YIELD */
A68_BITS * TTVACTR;  /* YIELD */
A68_256  UTVACTR;  /* collateral clause result */
A68_66  VTVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  WTVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  XTVACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(optidentity);
 /* line 202: */
 /* line 203: */
{ 
XQVACTR.data[0] = ZQVACTR;
UTKACTR_idfullname( NL(Decno), &ARVACTR );
XQVACTR.data[1] = ARVACTR;
XQVACTR.data[2] = A_HVEC(BRVACTR,' ',A68_CHAR );
XQVACTR.data[3] = Rhs;
JDAAOSF_concat( A_HISVEC(DRVACTR,XQVACTR,4,A68_VC ), &ERVACTR );
ZCAAOSF_makervc( ERVACTR, &FRVACTR );
CRVACTR_definition = FRVACTR;
 /* line 205: */
 /* line 206: */
GRVACTR = (*A_NILCHECK((&(A_NILCHECK(NL(Initvalue))->Extra)))) ;
switch ( GRVACTR.mode )
{ 
case 4: /* STRUCT(INT)  */
HRVACTR_id = (GRVACTR.data.mode4);
 /* line 207: */
 /* line 208: */
{ 
IRVACTR_aliendec = A68_FALSE;
 /* line 209: */
 /* line 210: */
 /* line 211: */
if (HRVACTR_id.Idno==VPKACTR_alienidno)
{ 
IRVACTR_aliendec = A68_TRUE;
 /* line 212: */
JRVACTR = (&UPKACTR_alienidinfo);
} 
else
{ 
 /* line 213: */
JRVACTR = YQKACTR_get_idinfo(HRVACTR_id.Idno);
} 
KRVACTR_rhsidinfo = JRVACTR;
 /* line 216: */
 /* line 217: */
 /* line 218: */
if (NL(PQVACTR_kept))
{ 
 /* line 219: */
LRVACTR = (&(A_NILCHECK(KRVACTR_rhsidinfo)->Flags)) ;
(void)((*A_NILCHECK(LRVACTR)) = (A68_BITS )((*A_NILCHECK((&(A_NILCHECK(KRVACTR_rhsidinfo)->Flags))))|MQKACTR_idforceuseflag));
} 
 /* line 223: */
 /* line 224: */
 /* line 225: */
if (IRVACTR_aliendec)
{ 
 /* line 226: */
 /* line 227: */
 /* line 229: */
if ((*A_NILCHECK((&(A_NILCHECK(KRVACTR_rhsidinfo)->Definition)))).upb>0)
{ 
 /* line 230: */
MRVACTR = (*A_NILCHECK((&(A_NILCHECK(KRVACTR_rhsidinfo)->Definition))));
} 
else
{ 
 /* line 231: */
if (RQIACTR_oldalienoption)
{ 
 /* line 232: */
 /* line 233: */
ORVACTR = (*A_NILCHECK((&(A_NILCHECK(KRVACTR_rhsidinfo)->Flags)))) ;
if (A_LB_GE(ORVACTR,JQKACTR_idgprocflag))
{ 
 /* line 234: */
XKNACTR_ctype( A_CALLPROC(SVMACTR_deproc,((*A_NILCHECK((&(A_NILCHECK(KRVACTR_rhsidinfo)->Mode))))),((*A_NILCHECK((&(A_NILCHECK(KRVACTR_rhsidinfo)->Mode)))),(SVMACTR_deproc).nonlocals)), &RRVACTR );
QRVACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(RRVACTR,A_HVEC(SRVACTR,' ',A68_CHAR )),(*A_NILCHECK((&(A_NILCHECK(KRVACTR_rhsidinfo)->Name))))),TRVACTR);
} 
else
{ 
 /* line 235: */
 /* line 236: */
 /* line 237: */
BLNACTR_cvartype( (*A_NILCHECK((&(A_NILCHECK(KRVACTR_rhsidinfo)->Cvariabletype)))), &URVACTR );
QRVACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(URVACTR,A_HVEC(VRVACTR,' ',A68_CHAR )),(*A_NILCHECK((&(A_NILCHECK(KRVACTR_rhsidinfo)->Name))))),A_HVEC(WRVACTR,';',A68_CHAR ));
} 
 /* line 238: */
 /* line 239: */
ZCAAOSF_makervc( A_VC_PLUS(XRVACTR,QRVACTR), &YRVACTR );
MRVACTR = YRVACTR;
} 
else
{ 
(void)(VWIACTR_pwarning(904, A_HARR(ZRVACTR,(*A_NILCHECK((&(A_NILCHECK(KRVACTR_rhsidinfo)->Name)))),A68_VC )));
 /* line 240: */
ASVACTR.data[0] = CSVACTR;
ASVACTR.data[1] = (*A_NILCHECK((&(A_NILCHECK(KRVACTR_rhsidinfo)->Name))));
ASVACTR.data[2] = ESVACTR;
 /* line 241: */
JDAAOSF_concat( A_HISVEC(FSVACTR,ASVACTR,3,A68_VC ), &GSVACTR );
ZCAAOSF_makervc( GSVACTR, &HSVACTR );
MRVACTR = HSVACTR;
} 
} 
ISVACTR = (&(A_NILCHECK(NL(IQVACTR_idinfo))->Rhs)) ;
(*A_NILCHECK(ISVACTR)) = MRVACTR;
 /* line 243: */
 /* line 244: */
JSVACTR = NL(PQVACTR_kept);
if ( JSVACTR )
{JSVACTR = LCPACTR_rscompatiblewithpreviousversion;
}
 /* line 246: */
if (JSVACTR)
{ 
 /* line 247: */
{ 
KSVACTR = 1 ;
LSVACTR = (*A_NILCHECK((&(A_NILCHECK((&A_R1INDEX(RCPACTR_specs,KSVACTR)))->Keptinfo)))) ;
MSVACTR = VNVACTR_keeplistposition(NL(Decno)) ;
NSVACTR_keptinfo = (&A_VINDEX(LSVACTR,MSVACTR));
 /* line 248: */
OSVACTR = A_VC_NE(CRVACTR_definition,(*A_NILCHECK((&(A_NILCHECK(NSVACTR_keptinfo)->Definition)))));
if ( ! OSVACTR )
{ /* line 249: */
OSVACTR = A_VC_NE((*A_NILCHECK((&(A_NILCHECK(NL(IQVACTR_idinfo))->Rhs)))),(*A_NILCHECK((&(A_NILCHECK(NSVACTR_keptinfo)->Rhs)))));
}
 /* line 250: */
PSVACTR = OSVACTR;
if (PSVACTR)
{ 
MCPACTR_transcompatiblewithpreviousversi = A68_FALSE;
 /* line 251: */
QSVACTR = 1 ;
RSVACTR = (&(A_NILCHECK((&A_R1INDEX(RCPACTR_specs,QSVACTR)))->Timeoflastchange)) ;
(void)((*A_NILCHECK(RSVACTR)) = (*A_NILCHECK((&(A_NILCHECK((&IYIACTR_config_info))->Translationtime)))));
 /* line 252: */
SSVACTR = (&(A_NILCHECK(NL(IQVACTR_idinfo))->Prefix)) ;
(void)((*A_NILCHECK(SSVACTR)) = QIMACTR_newuniquename());
 /* line 253: */
 /* line 254: */
VSVACTR = (*A_NILCHECK((&(A_NILCHECK(NL(IQVACTR_idinfo))->Prefix)))) ;
TSVACTR.data[0] = A_HISVEC(USVACTR,VSVACTR,7,A68_CHAR );
TSVACTR.data[1] = A_HVEC(WSVACTR,'_',A68_CHAR );
RRKACTR_afterbang( (*A_NILCHECK((&(A_NILCHECK(NL(IQVACTR_idinfo))->Name)))), &XSVACTR );
TSVACTR.data[2] = XSVACTR;
JDAAOSF_concat( A_HISVEC(YSVACTR,TSVACTR,3,A68_VC ), &ZSVACTR );
ATVACTR.source = ZSVACTR ;
BTVACTR = (&(A_NILCHECK(NL(IQVACTR_idinfo))->C_name)) ;
(void)((*A_NILCHECK(BTVACTR)) = (ATVACTR.destination));
 /* line 255: */
CTVACTR.data[0] = ETVACTR;
UTKACTR_idfullname( NL(Decno), &FTVACTR );
CTVACTR.data[1] = FTVACTR;
CTVACTR.data[2] = A_HVEC(GTVACTR,' ',A68_CHAR );
CTVACTR.data[3] = Rhs;
 /* line 256: */
JDAAOSF_concat( A_HISVEC(HTVACTR,CTVACTR,4,A68_VC ), &ITVACTR );
ZCAAOSF_makervc( ITVACTR, &JTVACTR );
CRVACTR_definition = JTVACTR;
} 
} 
} 
 /* line 259: */
MTVACTR = (*A_NILCHECK((&(A_NILCHECK(NL(IQVACTR_idinfo))->Rhs)))) ;
KTVACTR.data[0] = A_UNITE(LTVACTR,mode2,2,MTVACTR);
KTVACTR.data[1] = A_UNITE(NTVACTR,mode4,4,EIAACTR_cnewline);
 /* line 260: */
(void)(MDMACTR_writecstream(A_HISVEC(OTVACTR,KTVACTR,2,A68_66 ), KSLACTR_nonlocdecstream(0)));
} 
 /* line 263: */
PTVACTR = (&(A_NILCHECK(NL(IQVACTR_idinfo))->Cvariabletype)) ;
(void)((*A_NILCHECK(PTVACTR)) = (*A_NILCHECK((&(A_NILCHECK(KRVACTR_rhsidinfo)->Cvariabletype)))));
 /* line 264: */
 /* line 265: */
 /* line 266: */
 /* line 267: */
QTVACTR = (&(A_NILCHECK(NL(IQVACTR_idinfo))->Flags)) ;
(void)((*A_NILCHECK(QTVACTR)) = (A68_BITS )((*A_NILCHECK((&(A_NILCHECK(NL(IQVACTR_idinfo))->Flags))))|(*A_NILCHECK((&(A_NILCHECK(KRVACTR_rhsidinfo)->Flags))))));
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 270: */
 /* line 271: */
 /* line 272: */
if (NL(PQVACTR_kept))
{ 
 /* line 273: */
ZCAAOSF_makervc( CRVACTR_definition, &RTVACTR );
STVACTR = (&(A_NILCHECK(NL(IQVACTR_idinfo))->Definition)) ;
(*A_NILCHECK(STVACTR)) = RTVACTR;
} 
 /* line 275: */
TTVACTR = (&(A_NILCHECK(NL(IQVACTR_idinfo))->Flags)) ;
(void)((*A_NILCHECK(TTVACTR)) = (A68_BITS )((*A_NILCHECK((&(A_NILCHECK(NL(IQVACTR_idinfo))->Flags))))|HQKACTR_idoptimisedflag));
 /* line 277: */
UTVACTR.data[0] = A_UNITE(VTVACTR,mode2,2,CRVACTR_definition);
UTVACTR.data[1] = A_UNITE(WTVACTR,mode4,4,EIAACTR_cnewline);
 /* line 278: */
(void)(MDMACTR_writecstream(A_HISVEC(XTVACTR,UTVACTR,2,A68_66 ), KSLACTR_nonlocdecstream(0)));
} 
A_PROC_EXIT(optidentity);
return;
} 
#undef NL

A_STATIC A68_VOID  ZTVACTR_declarecvariable(void *NonLocals)
#define NL(x) (((AUVACTR_declarecvariable *)NonLocals)->x)
{ 
A68_257  BUVACTR;  /* collateral clause result */
A68_BOOL  CUVACTR;  /* optbool result */
A68_BITS  DUVACTR;  /* ADICOPS - >= */
A68_66  GUVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  HUVACTR;  /* YIELD */
A68_66  KUVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  LUVACTR;  /* YIELD */
A68_VC  MUVACTR;  /* avoid structure result */
A68_66  NUVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  OUVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  PUVACTR;  /* YIELD */
A68_VC  QUVACTR;  /* avoid structure result */
A68_66  RUVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  UUVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  VUVACTR;  /* YIELD */
A68_66  WUVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  XUVACTR;  /* YIELD */
A68_66  AVVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  BVVACTR;  /* YIELD */
A68_BITS  CVVACTR;  /* ADICOPS - >= */
A68_66  HVVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  IVVACTR;  /* YIELD */
A68_66  LVVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  MVVACTR;  /* YIELD */
A68_66  NVVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  OVVACTR;  /* OPERATORS - istruct -> vector */
A68_258  PVVACTR;  /* collateral clause result */
A68_VC  QVVACTR;  /* avoid structure result */
A68_66  RVVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  UVVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  VVVACTR;  /* YIELD */
A68_VC  WVVACTR;  /* avoid structure result */
A68_66  XVVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  YVVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  ZVVACTR;  /* YIELD */
A68_66  AWVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  BWVACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(declarecvariable);
{ 
CUVACTR = (!NL(MQVACTR_global));
if ( ! CUVACTR )
{ /* line 284: */
DUVACTR = (*A_NILCHECK((&(A_NILCHECK(NL(IQVACTR_idinfo))->Flags)))) ;
CUVACTR = A_LB_GE(DUVACTR,CQKACTR_idkeptflag);
}
 /* line 285: */
if (CUVACTR)
{ 
 /* line 286: */
HUVACTR = FUVACTR ;
BUVACTR.data[0] = A_UNITE(GUVACTR,mode2,2,HUVACTR);
} 
else
{ 
 /* line 287: */
LUVACTR = JUVACTR ;
BUVACTR.data[0] = A_UNITE(KUVACTR,mode2,2,LUVACTR);
} 
BLNACTR_cvartype( (*A_NILCHECK((&(A_NILCHECK(NL(IQVACTR_idinfo))->Cvariabletype)))), &MUVACTR );
BUVACTR.data[1] = A_UNITE(NUVACTR,mode2,2,MUVACTR);
 /* line 288: */
PUVACTR = ' ' ;
BUVACTR.data[2] = A_UNITE(OUVACTR,mode1,1,PUVACTR);
UTKACTR_idfullname( NL(Decno), &QUVACTR );
BUVACTR.data[3] = A_UNITE(RUVACTR,mode2,2,QUVACTR);
 /* line 289: */
VUVACTR = TUVACTR ;
BUVACTR.data[4] = A_UNITE(UUVACTR,mode2,2,VUVACTR);
if (NL(MQVACTR_global))
{ 
XUVACTR = ';' ;
BUVACTR.data[5] = A_UNITE(WUVACTR,mode1,1,XUVACTR);
} 
else
{ 
 /* line 290: */
BVVACTR = ZUVACTR ;
BUVACTR.data[5] = A_UNITE(AVVACTR,mode2,2,BVVACTR);
} 
 /* line 291: */
CVVACTR = (*A_NILCHECK((&(A_NILCHECK(NL(IQVACTR_idinfo))->Flags)))) ;
if (A_LB_GE(CVVACTR,IQKACTR_idopflag))
{ 
 /* line 292: */
 /* line 293: */
IVVACTR = A_VC_PLUS(A_VC_PLUS(FVVACTR,(*A_NILCHECK((&(A_NILCHECK(NL(IQVACTR_idinfo))->Name))))),GVVACTR) ;
BUVACTR.data[6] = A_UNITE(HVVACTR,mode2,2,IVVACTR);
} 
else
{ 
 /* line 295: */
MVVACTR = KVVACTR ;
BUVACTR.data[6] = A_UNITE(LVVACTR,mode2,2,MVVACTR);
} 
BUVACTR.data[7] = A_UNITE(NVVACTR,mode4,4,EIAACTR_cnewline);
 /* line 296: */
(void)(MDMACTR_writecstream(A_HISVEC(OVVACTR,BUVACTR,8,A68_66 ), NL(RQVACTR_decstream)));
 /* line 298: */
 /* line 299: */
 /* line 300: */
if (NL(Initvalue)!=(A68_98 *)A68_NIL)
{ 
UTKACTR_idfullname( NL(Decno), &QVVACTR );
PVVACTR.data[0] = A_UNITE(RVVACTR,mode2,2,QVVACTR);
 /* line 301: */
VVVACTR = TVVACTR ;
PVVACTR.data[1] = A_UNITE(UVVACTR,mode2,2,VVVACTR);
JEQACTR_bracketcfragment( NL(Initvalue), &WVVACTR );
PVVACTR.data[2] = A_UNITE(XVVACTR,mode2,2,WVVACTR);
 /* line 303: */
ZVVACTR = ';' ;
PVVACTR.data[3] = A_UNITE(YVVACTR,mode1,1,ZVVACTR);
PVVACTR.data[4] = A_UNITE(AWVACTR,mode4,4,EIAACTR_cnewline);
 /* line 304: */
 /* line 305: */
 /* line 306: */
(void)(MDMACTR_writecstream(A_HISVEC(BWVACTR,PVVACTR,5,A68_66 ), NL(SQVACTR_codestream)));
} 
} 
A_PROC_EXIT(declarecvariable);
return;
} 
#undef NL

A_STATIC A68_98 * CZVACTR_assignment(A68_98 * AZVACTR_anonymous, A68_98  BZVACTR_anonymous)
{ 
A68_INT * DZVACTR;  /* YIELD */
A68_BITS * EZVACTR;  /* YIELD */
A68_98 * NZVACTR;  /* clause result */
{ 
DZVACTR = (&(A_NILCHECK(AZVACTR_anonymous)->Mode)) ;
(*A_NILCHECK(DZVACTR)) = BZVACTR_anonymous.Mode;
EZVACTR = (&(A_NILCHECK(AZVACTR_anonymous)->Info)) ;
(*A_NILCHECK(EZVACTR)) = BZVACTR_anonymous.Info;
(void)(HZVACTR_assignment((&(A_NILCHECK(AZVACTR_anonymous)->Extra)), BZVACTR_anonymous.Extra));
NZVACTR = AZVACTR_anonymous;
} 
return( NZVACTR );
} 
#undef NL

A_STATIC A68_VOID  SCWACTR_generator(A68_BOOL  QCWACTR_anonymous, A68_127  *ReturnedValue, void *NonLocals)
#define NL(x) (((TCWACTR_generator *)NonLocals)->x)
{ 
A68_127  UCWACTR;  /* clause result */
A68_127  VCWACTR;  /* OPERATORS - dynamic generator */
{ 
VCWACTR.dim[0].upb = NL(PCWACTR_n) ;
VCWACTR.dim[0].lwb = 0 ;
(void)A_1INITSTRIDES(VCWACTR) ;
( QCWACTR_anonymous? A_R1LOC(A68_VC ,VCWACTR): A_R1HEAP(A68_VC ,VCWACTR) );
UCWACTR = VCWACTR;
} 
*ReturnedValue = (UCWACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ADWACTR_generator(A68_BOOL  YCWACTR_anonymous, A68_90  *ReturnedValue, void *NonLocals)
#define NL(x) (((BDWACTR_generator *)NonLocals)->x)
{ 
A68_90  CDWACTR;  /* clause result */
A68_90  DDWACTR;  /* OPERATORS - dynamic generator */
{ 
DDWACTR.dim[0].upb = NL(PCWACTR_n) ;
DDWACTR.dim[0].lwb = 0 ;
(void)A_1INITSTRIDES(DDWACTR) ;
( YCWACTR_anonymous? A_R1LOC(A68_BOOL ,DDWACTR): A_R1HEAP(A68_BOOL ,DDWACTR) );
CDWACTR = DDWACTR;
} 
*ReturnedValue = (CDWACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  LJWACTR_generator(A68_BOOL  JJWACTR_anonymous, A68_281  *ReturnedValue, void *NonLocals)
#define NL(x) (((MJWACTR_generator *)NonLocals)->x)
{ 
A68_281  NJWACTR;  /* clause result */
A68_281  OJWACTR;  /* OPERATORS - dynamic generator */
{ 
OJWACTR.upb = NL(CJWACTR_a68paramcount) ;
( JJWACTR_anonymous? A_VLOC(A68_VC ,OJWACTR): A_VHEAP(A68_VC ,OJWACTR) );
NJWACTR = OJWACTR;
} 
*ReturnedValue = (NJWACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  CKWACTR_prototype(A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((DKWACTR_prototype *)NonLocals)->x)
{ 
A68_VC  GKWACTR;  /* avoid structure result */
A68_VC * HKWACTR;  /* YIELD */
A68_VC * IKWACTR_params A_UNUSED = {0};
A68_59  KKWACTR_addparam;   /* proc value of non-global proc */
A68_INT  RKWACTR_i A_UNUSED = {0};
A68_INT  SKWACTR;  /* to part of loop */
A68_VC  TKWACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  VKWACTR;  /* avoid structure result */
A68_285  ZKWACTR;  /* collateral clause result */
A68_VC  ELWACTR;  /* avoid structure result */
A68_VC  FLWACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  GLWACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  JLWACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  KLWACTR;  /* clause result */
A68_36  LLWACTR;  /* OPERATORS - istruct -> vector */
A68_VC  MLWACTR;  /* avoid structure result */
A_PROC_ENTRY(prototype);
{ 
ZCAAOSF_makervc( FKWACTR, &GKWACTR );
HKWACTR = A_LOC(A68_VC ) ;
(void)((*A_NILCHECK(HKWACTR)) = GKWACTR) ;
IKWACTR_params = HKWACTR;
 /* line 700: */
A_CLOSURE( KKWACTR_addparam, LKWACTR_addparam, MKWACTR_addparam );
(( MKWACTR_addparam * ) ( KKWACTR_addparam.nonlocals )) -> IKWACTR_params = IKWACTR_params;
 /* line 704: */
 /* line 705: */
SKWACTR = NL(CJWACTR_a68paramcount);
for ( RKWACTR_i = 1;
RKWACTR_i <= SKWACTR;
RKWACTR_i += 1 )
{ 
 /* line 706: */
 /* line 707: */
(void)(A_CALLPROC(KKWACTR_addparam,(A_VC_PLUS(A_VC_PLUS((*A_NILCHECK((&A_VINDEX(NL(RJWACTR_paramtypes),RKWACTR_i)))),A_HVEC(TKWACTR,' ',A68_CHAR )),(*A_NILCHECK((&A_VINDEX(NL(PJWACTR_paramnames),RKWACTR_i)))))),(A_VC_PLUS(A_VC_PLUS((*A_NILCHECK((&A_VINDEX(NL(RJWACTR_paramtypes),RKWACTR_i)))),A_HVEC(TKWACTR,' ',A68_CHAR )),(*A_NILCHECK((&A_VINDEX(NL(PJWACTR_paramnames),RKWACTR_i))))),(KKWACTR_addparam).nonlocals)));
}
 /* line 709: */
 /* line 710: */
 /* line 711: */
if (NL(YIWACTR_usetempforresult))
{ 
 /* line 712: */
XKNACTR_ctype( NL(Resultmode), &VKWACTR );
(void)(A_CALLPROC(KKWACTR_addparam,(A_VC_PLUS(VKWACTR,WKWACTR)),(A_VC_PLUS(VKWACTR,WKWACTR),(KKWACTR_addparam).nonlocals)));
} 
 /* line 713: */
 /* line 714: */
 /* line 715: */
if (NL(BJWACTR_fulldec))
{ 
 /* line 716: */
(void)(A_CALLPROC(KKWACTR_addparam,(YKWACTR),(YKWACTR,(KKWACTR_addparam).nonlocals)));
} 
 /* line 718: */
 /* line 719: */
if (NL(Global)&NL(Kept))
{ 
ZKWACTR.data[0] = BLWACTR;
} 
else
{ 
 /* line 720: */
ZKWACTR.data[0] = DLWACTR;
} 
XKNACTR_ctype( NL(AJWACTR_cresultmode), &ELWACTR );
ZKWACTR.data[1] = ELWACTR;
ZKWACTR.data[2] = A_HVEC(FLWACTR,' ',A68_CHAR );
ZKWACTR.data[3] = NL(IJWACTR_fnname);
 /* line 721: */
ZKWACTR.data[4] = A_HVEC(GLWACTR,'(',A68_CHAR );
if ((*A_NILCHECK(IKWACTR_params)).upb==0)
{ 
ZKWACTR.data[5] = ILWACTR;
} 
else
{ 
 /* line 723: */
ZKWACTR.data[5] = (*A_NILCHECK(IKWACTR_params));
} 
ZKWACTR.data[6] = A_HVEC(JLWACTR,')',A68_CHAR );
 /* line 724: */
JDAAOSF_concat( A_HISVEC(LLWACTR,ZKWACTR,7,A68_VC ), &MLWACTR );
KLWACTR = MLWACTR;
} 
A_PROC_EXIT(prototype);
*ReturnedValue = (KLWACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  LUWACTR_mybefore(A68_VC  S, A68_CHAR  C, A68_VC  *ReturnedValue)
{ 
A68_VC  MUWACTR;  /* clause result */
A68_VC  NUWACTR;  /* OPERATORS - trim index */
A_PROC_ENTRY(mybefore);
MUWACTR = A_VTRIM(NUWACTR,(S),A_VTSCRIPT(&(NUWACTR.upb),(S).upb,1,KMAAOSF_truncate(C, S)));
A_PROC_EXIT(mybefore);
*ReturnedValue = (MUWACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  KWWACTR_generator(A68_BOOL  IWWACTR_anonymous, A68_181  *ReturnedValue, void *NonLocals)
#define NL(x) (((LWWACTR_generator *)NonLocals)->x)
{ 
A68_181  MWWACTR;  /* clause result */
A68_181  NWWACTR;  /* OPERATORS - dynamic generator */
{ 
NWWACTR.upb = 0 ;
( IWWACTR_anonymous? A_VLOC(A68_INT ,NWWACTR): A_VHEAP(A68_INT ,NWWACTR) );
MWWACTR = NWWACTR;
} 
*ReturnedValue = (MWWACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  FNVACTR_debugmessage(A68_INT  Level, A68_VC  M)
{ 
A68_VC  LNVACTR;  /* avoid structure result */
A_PROC_ENTRY(debugmessage);
 /* line 51: */
 /* line 52: */
 /* line 53: */
if (ZCHACTR_tracelevel(HNVACTR)>=Level)
{ 
 /* line 54: */
ROAAOSF_whole( Level, 0, &LNVACTR );
(void)(A_CALLPROC(MSIACTR_list,(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(KNVACTR,LNVACTR),MNVACTR),M)),(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(KNVACTR,LNVACTR),MNVACTR),M),(MSIACTR_list).nonlocals)));
} 
A_PROC_EXIT(debugmessage);
return;
} 
#undef NL

A68_VOID  ONVACTR_initialdummydec(A68_130  Dummydec)
{ 
A68_72  RNVACTR;  /* collateral clause result */
A68_INT  SNVACTR;  /* YIELD */
A68_72 * TNVACTR;  /* YIELD */
A_PROC_ENTRY(initialdummydec);
 /* line 61: */
 /* line 62: */
{ 
(void)(WXIACTR_assert(QNVACTR, (Dummydec.Type==8)));
 /* line 63: */
RNVACTR.Level = 1;
 /* line 64: */
RNVACTR.Block = 0;
SNVACTR = Dummydec.Decno ;
TNVACTR = (&(A_NILCHECK((&A_R1INDEX(WPKACTR_ids,SNVACTR)))->Environ)) ;
(*A_NILCHECK(TNVACTR)) = RNVACTR;
} 
A_PROC_EXIT(initialdummydec);
return;
} 
#undef NL

A_STATIC A68_INT  VNVACTR_keeplistposition(A68_INT  Decno)
{ 
A68_INT  WNVACTR_pos A_UNUSED = {0};
A68_BOOL  XNVACTR_found A_UNUSED = {0};
A68_INT  YNVACTR_upbkepts A_UNUSED = {0};
A68_BOOL  ZNVACTR;  /* optbool result */
A68_INT  AOVACTR;  /* YIELD */
A68_INT  DOVACTR;  /* clause result */
A_PROC_ENTRY(keeplistposition);
 /* line 75: */
 /* line 76: */
{ 
WNVACTR_pos = 0;
 /* line 77: */
XNVACTR_found = A68_FALSE;
 /* line 78: */
YNVACTR_upbkepts = ICPACTR_keptdecnos.dim[0].upb;
 /* line 79: */
for ( ;; )
{ 
ZNVACTR = (!XNVACTR_found);
if ( ZNVACTR )
{ /* line 80: */
ZNVACTR = (WNVACTR_pos<YNVACTR_upbkepts);
}
if ( !(ZNVACTR) ) break;
 /* line 81: */
AOVACTR = WNVACTR_pos+=1 ;
(void)(XNVACTR_found = ((*A_NILCHECK((&A_R1INDEX(ICPACTR_keptdecnos,AOVACTR))))==Decno));
}
 /* line 82: */
(void)(WXIACTR_assert(COVACTR, XNVACTR_found));
 /* line 83: */
 /* line 84: */
DOVACTR = WNVACTR_pos;
} 
A_PROC_EXIT(keeplistposition);
return( DOVACTR );
} 
#undef NL
 /* line 88: */
 /* line 89: */
 /* line 90: */
 /* line 91: */
 /* line 92: */
 /* line 94: */

A_STATIC A68_VOID  LOVACTR_newidinfo(A68_INT  Decno, A68_INT  Mode, A68_VC  A68name, A68_56  Prefix, A68_BITS  Flags, A68_VC  Definition, A68_VC  Rhs)
{ 
A68_108 * MOVACTR_newid A_UNUSED = {0};
A68_BOOL  NOVACTR;  /* optbool result */
A68_INT  OOVACTR_cvariabletype A_UNUSED = {0};
A68_VC  POVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  QOVACTR;  /* OPERATORS - istruct -> vector */
A68_BITS  ROVACTR;  /* ADICOPS - >= */
A68_BOOL  SOVACTR;  /* optbool result */
A68_VC  TOVACTR;  /* OPERATORS - istruct -> vector */
A68_INT  UOVACTR;  /* YIELD */
A68_155  VOVACTR;  /* OPERATORS - simple index */
A68_INT  WOVACTR;  /* YIELD */
A68_VC  XOVACTR;  /* OPERATORS - istruct -> vector */
A68_56  YOVACTR;  /* OPERATORS - istruct -> vector */
A68_INT  ZOVACTR;  /* YIELD */
A68_LINT * APVACTR;  /* YIELD */
A68_56  BPVACTR;  /* clause result */
A68_72  CPVACTR;  /* avoid structure result */
A68_BOOL  DPVACTR;  /* optbool result */
A68_BITS  EPVACTR;  /* ADICOPS - >= */
A68_INT  FPVACTR;  /* YIELD */
A68_155  GPVACTR;  /* OPERATORS - simple index */
A68_INT  HPVACTR;  /* YIELD */
A68_157 * IPVACTR_keptinfo A_UNUSED = {0};
A68_BOOL  JPVACTR;  /* optbool result */
A68_BOOL  KPVACTR;  /* optbool result */
A68_BOOL  LPVACTR;  /* clause result */
A68_INT  MPVACTR;  /* YIELD */
A68_LINT * NPVACTR;  /* YIELD */
A68_56  OPVACTR_newidprefix A_UNUSED = {0};
A68_BITS  PPVACTR;  /* clause result */
A68_BITS  QPVACTR_new_flags A_UNUSED = {0};
A68_BOOL  RPVACTR;  /* optbool result */
A68_INT  SPVACTR;  /* YIELD */
A68_VC  TPVACTR;  /* clause result */
A68_VC  UPVACTR;  /* avoid structure result */
A68_VC  WPVACTR;  /* clause result */
A68_VC  YPVACTR;  /* avoid structure result */
A68_VC  ZPVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  AQVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} BQVACTR; 
A68_VC  CQVACTR_c_name A_UNUSED = {0};
A68_108  DQVACTR;  /* collateral clause result */
A68_72  EQVACTR;  /* avoid structure result */
A_PROC_ENTRY(newidinfo);
 /* line 99: */
 /* line 100: */
{ 
MOVACTR_newid = YQKACTR_get_idinfo(Decno);
 /* line 102: */
 /* line 103: */
NOVACTR = A_LB_GE(Flags,BQKACTR_ididentityflag);
if ( NOVACTR )
{NOVACTR = (!A_LB_GE(Flags,HQKACTR_idoptimisedflag));
}
 /* line 104: */
if ( ! NOVACTR )
{NOVACTR = A_LB_GE(Flags,EQKACTR_idforallflag);
}
 /* line 105: */
if ( ! NOVACTR )
{NOVACTR = A_LB_GE(Flags,GQKACTR_idformalflag);
}
OOVACTR_cvariabletype = TKNACTR_givecvariabletype(Mode, NOVACTR);
 /* line 108: */
 /* line 109: */
 /* line 110: */
 /* line 111: */
 /* line 112: */
if (A_VC_NE(A_HISVEC(POVACTR,Prefix,7,A68_CHAR ),A_HISVEC(QOVACTR,RNOACTR_nulluname,7,A68_CHAR )))
{ 
 /* line 113: */
 /* line 114: */
ROVACTR = (*A_NILCHECK((&(A_NILCHECK(MOVACTR_newid)->Flags)))) ;
SOVACTR = A_LB_GE(ROVACTR,CQKACTR_idkeptflag);
if ( SOVACTR )
{SOVACTR = LCPACTR_rscompatiblewithpreviousversion;
}
if ( SOVACTR )
{ /* line 115: */
 /* line 116: */
UOVACTR = 1 ;
VOVACTR = (*A_NILCHECK((&(A_NILCHECK((&A_R1INDEX(RCPACTR_specs,UOVACTR)))->Keptinfo)))) ;
WOVACTR = VNVACTR_keeplistposition(Decno) ;
YOVACTR = (*A_NILCHECK((&(A_NILCHECK((&A_VINDEX(VOVACTR,WOVACTR)))->Prefix)))) ;
SOVACTR = A_VC_NE(A_HISVEC(TOVACTR,Prefix,7,A68_CHAR ),A_HISVEC(XOVACTR,YOVACTR,7,A68_CHAR ));
}
 /* line 117: */
if (SOVACTR)
{ 
MCPACTR_transcompatiblewithpreviousversi = A68_FALSE;
 /* line 118: */
 /* line 120: */
ZOVACTR = 1 ;
APVACTR = (&(A_NILCHECK((&A_R1INDEX(RCPACTR_specs,ZOVACTR)))->Timeoflastchange)) ;
(void)((*A_NILCHECK(APVACTR)) = (*A_NILCHECK((&(A_NILCHECK((&IYIACTR_config_info))->Translationtime)))));
} 
 /* line 121: */
 /* line 122: */
 /* line 124: */
BPVACTR = Prefix;
} 
else
{ 
QPLACTR_currentenviron(  &CPVACTR );
DPVACTR = (!PRLACTR_isgloballevel(CPVACTR));
if ( ! DPVACTR )
{ /* line 126: */
EPVACTR = (*A_NILCHECK((&(A_NILCHECK(MOVACTR_newid)->Flags)))) ;
DPVACTR = (!A_LB_GE(EPVACTR,CQKACTR_idkeptflag));
}
 /* line 127: */
if ( ! DPVACTR )
{DPVACTR = (!LCPACTR_rscompatiblewithpreviousversion);
}
 /* line 128: */
if (DPVACTR)
{ 
 /* line 129: */
BPVACTR = QIMACTR_newuniquename();
} 
else
{ 
{ 
FPVACTR = 1 ;
GPVACTR = (*A_NILCHECK((&(A_NILCHECK((&A_R1INDEX(RCPACTR_specs,FPVACTR)))->Keptinfo)))) ;
HPVACTR = VNVACTR_keeplistposition(Decno) ;
IPVACTR_keptinfo = (&A_VINDEX(GPVACTR,HPVACTR));
 /* line 132: */
 /* line 133: */
 /* line 134: */
JPVACTR = A_LB_GE(Flags,BQKACTR_ididentityflag);
if ( JPVACTR )
{JPVACTR = (!(*A_NILCHECK((&(A_NILCHECK(IPVACTR_keptinfo)->Iddec)))));
}
 /* line 136: */
if ( ! JPVACTR )
{ /* line 137: */
 /* line 138: */
KPVACTR = A_LB_GE(Flags,HQKACTR_idoptimisedflag);
if ( KPVACTR )
{KPVACTR = (!(*A_NILCHECK((&(A_NILCHECK(IPVACTR_keptinfo)->Optimised)))));
}
 /* line 139: */
JPVACTR = KPVACTR;
}
LPVACTR = JPVACTR;
if (LPVACTR)
{ 
MCPACTR_transcompatiblewithpreviousversi = A68_FALSE;
 /* line 140: */
MPVACTR = 1 ;
NPVACTR = (&(A_NILCHECK((&A_R1INDEX(RCPACTR_specs,MPVACTR)))->Timeoflastchange)) ;
(void)((*A_NILCHECK(NPVACTR)) = (*A_NILCHECK((&(A_NILCHECK((&IYIACTR_config_info))->Translationtime)))));
 /* line 141: */
 /* line 142: */
 /* line 144: */
BPVACTR = QIMACTR_newuniquename();
} 
else
{ 
BPVACTR = (*A_NILCHECK((&(A_NILCHECK(IPVACTR_keptinfo)->Prefix))));
} 
} 
} 
} 
OPVACTR_newidprefix = BPVACTR;
 /* line 146: */
 /* line 148: */
if (TUKACTR_standopsym(A68name))
{ 
PPVACTR = IQKACTR_idopflag;
} 
else
{ 
PPVACTR = AQKACTR_idnoflags;
} 
QPVACTR_new_flags = (A68_BITS )((A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(MOVACTR_newid)->Flags))))&NQKACTR_idpresetflags)|Flags)|PPVACTR);
 /* line 150: */
 /* line 151: */
 /* line 152: */
RPVACTR = A_LB_GE(Flags,GQKACTR_idformalflag);
if ( RPVACTR )
{RPVACTR = (A68name.upb>0);
}
if ( RPVACTR )
{ /* line 153: */
SPVACTR = 1 ;
RPVACTR = ((*A_NILCHECK((&A_VINDEX(A68name,SPVACTR))))!='!');
}
 /* line 155: */
if (RPVACTR)
{ 
 /* line 156: */
SNAAOSF_capitalised( A68name, &UPVACTR );
TPVACTR = UPVACTR;
} 
else
{ 
if (A_LB_GE(QPVACTR_new_flags,IQKACTR_idopflag))
{ 
WPVACTR = XPVACTR;
} 
else
{ 
RRKACTR_afterbang( A68name, &YPVACTR );
WPVACTR = YPVACTR;
} 
 /* line 157: */
BQVACTR.source = A_VC_PLUS(A_VC_PLUS(A_HISVEC(ZPVACTR,OPVACTR_newidprefix,7,A68_CHAR ),A_HVEC(AQVACTR,'_',A68_CHAR )),WPVACTR) ;
TPVACTR = (BQVACTR.destination);
} 
CQVACTR_c_name = TPVACTR;
 /* line 159: */
 /* line 160: */
 /* line 161: */
DQVACTR.Mode = Mode;
 /* line 162: */
DQVACTR.Cvariabletype = OOVACTR_cvariabletype;
 /* line 163: */
QPLACTR_currentenviron(  &EQVACTR );
DQVACTR.Environ = EQVACTR;
 /* line 164: */
DQVACTR.Name = A68name;
 /* line 165: */
DQVACTR.C_name = CQVACTR_c_name;
 /* line 166: */
DQVACTR.Prefix = OPVACTR_newidprefix;
 /* line 167: */
DQVACTR.Flags = QPVACTR_new_flags;
 /* line 169: */
DQVACTR.Definition = Definition;
 /* line 170: */
DQVACTR.Rhs = Rhs;
(*A_NILCHECK(MOVACTR_newid)) = DQVACTR;
} 
A_PROC_EXIT(newidinfo);
return;
} 
#undef NL

A_STATIC A68_VOID  HQVACTR_outputcdeclaration(A68_INT  Decno, A68_98 * Initvalue)
{ 
A68_108 * IQVACTR_idinfo A_UNUSED = {0};
A68_INT  JQVACTR_level A_UNUSED = {0};
A68_INT  KQVACTR_block A_UNUSED = {0};
A68_BOOL  LQVACTR;  /* optbool result */
A68_BOOL  MQVACTR_global A_UNUSED = {0};
A68_BOOL  NQVACTR;  /* optbool result */
A68_BITS  OQVACTR;  /* ADICOPS - >= */
A68_BOOL  PQVACTR_kept A_UNUSED = {0};
A68_INT  QQVACTR;  /* clause result */
A68_INT  RQVACTR_decstream A_UNUSED = {0};
A68_INT  SQVACTR_codestream A_UNUSED = {0};
A68_59  UQVACTR_optidentity;   /* proc value of non-global proc */
A68_60  YTVACTR_declarecvariable;   /* proc value of non-global proc */
A68_BOOL  CWVACTR;  /* optbool result */
A68_BITS  DWVACTR;  /* ADICOPS - >= */
A68_99  EWVACTR;  /* united object - for case conformity */
A68_VC  FWVACTR;  /* avoid structure result */
A68_VC  GWVACTR_cf A_UNUSED = {0};
A68_BOOL  HWVACTR;  /* optbool result */
A68_BOOL  IWVACTR;  /* optbool result */
A68_BITS  JWVACTR;  /* ADICOPS - >= */
A68_101  KWVACTR_id A_UNUSED = {0};
A68_108 * LWVACTR;  /* clause result */
A68_108 * MWVACTR_rhsidinfo A_UNUSED = {0};
A68_BOOL  NWVACTR;  /* optbool result */
A68_BITS  OWVACTR;  /* ADICOPS - >= */
A68_BOOL  PWVACTR;  /* optbool result */
A68_BITS  QWVACTR;  /* ADICOPS - >= */
A68_BOOL  RWVACTR;  /* clause result */
A68_VC  SWVACTR;  /* avoid structure result */
A_PROC_ENTRY(outputcdeclaration);
 /* line 186: */
 /* line 187: */
{ 
IQVACTR_idinfo = YQKACTR_get_idinfo(Decno);
 /* line 188: */
JQVACTR_level = (*A_NILCHECK((&(A_NILCHECK((&(A_NILCHECK(IQVACTR_idinfo)->Environ)))->Level))));
 /* line 189: */
KQVACTR_block = (*A_NILCHECK((&(A_NILCHECK((&(A_NILCHECK(IQVACTR_idinfo)->Environ)))->Block))));
 /* line 190: */
LQVACTR = (JQVACTR_level==0);
if ( LQVACTR )
{LQVACTR = (KQVACTR_block==0);
}
MQVACTR_global = LQVACTR;
 /* line 191: */
NQVACTR = MQVACTR_global;
if ( NQVACTR )
{OQVACTR = (*A_NILCHECK((&(A_NILCHECK(IQVACTR_idinfo)->Flags)))) ;
NQVACTR = A_LB_GE(OQVACTR,CQKACTR_idkeptflag);
}
PQVACTR_kept = NQVACTR;
 /* line 193: */
 /* line 194: */
 /* line 195: */
 /* line 196: */
if (MQVACTR_global)
{ 
 /* line 197: */
QQVACTR = KSLACTR_nonlocdecstream(JQVACTR_level);
} 
else
{ 
QQVACTR = QSLACTR_locdecstream(JQVACTR_level);
} 
RQVACTR_decstream = QQVACTR;
 /* line 199: */
SQVACTR_codestream = NSLACTR_codestream(JQVACTR_level);
 /* line 201: */
A_CLOSURE( UQVACTR_optidentity, VQVACTR_optidentity, WQVACTR_optidentity );
(( WQVACTR_optidentity * ) ( UQVACTR_optidentity.nonlocals )) -> Decno = Decno;
(( WQVACTR_optidentity * ) ( UQVACTR_optidentity.nonlocals )) -> Initvalue = Initvalue;
(( WQVACTR_optidentity * ) ( UQVACTR_optidentity.nonlocals )) -> PQVACTR_kept = PQVACTR_kept;
(( WQVACTR_optidentity * ) ( UQVACTR_optidentity.nonlocals )) -> IQVACTR_idinfo = IQVACTR_idinfo;
 /* line 280: */
 /* line 281: */
 /* line 283: */
A_CLOSURE( YTVACTR_declarecvariable, ZTVACTR_declarecvariable, AUVACTR_declarecvariable );
(( AUVACTR_declarecvariable * ) ( YTVACTR_declarecvariable.nonlocals )) -> MQVACTR_global = MQVACTR_global;
(( AUVACTR_declarecvariable * ) ( YTVACTR_declarecvariable.nonlocals )) -> IQVACTR_idinfo = IQVACTR_idinfo;
(( AUVACTR_declarecvariable * ) ( YTVACTR_declarecvariable.nonlocals )) -> Decno = Decno;
(( AUVACTR_declarecvariable * ) ( YTVACTR_declarecvariable.nonlocals )) -> RQVACTR_decstream = RQVACTR_decstream;
(( AUVACTR_declarecvariable * ) ( YTVACTR_declarecvariable.nonlocals )) -> Initvalue = Initvalue;
(( AUVACTR_declarecvariable * ) ( YTVACTR_declarecvariable.nonlocals )) -> SQVACTR_codestream = SQVACTR_codestream;
 /* line 308: */
 /* line 309: */
CWVACTR = (Initvalue!=(A68_98 *)A68_NIL);
if ( CWVACTR )
{ /* line 310: */
DWVACTR = (*A_NILCHECK((&(A_NILCHECK(IQVACTR_idinfo)->Flags)))) ;
CWVACTR = A_LB_GE(DWVACTR,BQKACTR_ididentityflag);
}
if (CWVACTR)
{ 
 /* line 311: */
EWVACTR = (*A_NILCHECK((&(A_NILCHECK(Initvalue)->Extra)))) ;
switch ( EWVACTR.mode )
{ 
case 1: /* LONG BITS */
 /* line 312: */
 /* line 313: */
DAQACTR_getcfragment( Initvalue, &FWVACTR );
(void)(A_CALLPROC(UQVACTR_optidentity,(FWVACTR),(FWVACTR,(UQVACTR_optidentity).nonlocals)));
break;
case 6: /* VECTOR [] CHAR */
GWVACTR_cf = (EWVACTR.data.mode6);
 /* line 314: */
 /* line 315: */
 /* line 316: */
HWVACTR = IWPACTR_hasattribute(Initvalue, QKJACTR_constant);
if ( HWVACTR )
{ /* line 317: */
HWVACTR = (!IWPACTR_hasattribute(Initvalue, WKJACTR_isnil));
}
 /* line 318: */
if ( HWVACTR )
{ /* line 319: */
HWVACTR = (IOMACTR_modetype((*A_NILCHECK((&(A_NILCHECK(Initvalue)->Mode)))))==EEAACTR_primitive);
}
 /* line 320: */
if ( ! HWVACTR )
{ /* line 321: */
 /* line 322: */
IWVACTR = IWPACTR_hasattribute(Initvalue, (A68_BITS )(QKJACTR_constant|WKJACTR_isnil));
if ( IWVACTR )
{ /* line 257: */
 /* line 323: */
JWVACTR = (*A_NILCHECK((&(A_NILCHECK(IQVACTR_idinfo)->Flags)))) ;
IWVACTR = (!A_LB_GE(JWVACTR,CQKACTR_idkeptflag));
}
 /* line 324: */
HWVACTR = IWVACTR;
}
if (HWVACTR)
{ 
 /* line 325: */
 /* line 326: */
(void)(A_CALLPROC(UQVACTR_optidentity,(GWVACTR_cf),(GWVACTR_cf,(UQVACTR_optidentity).nonlocals)));
} 
else
{ 
 /* line 327: */
(void)(A_CALLPROC(YTVACTR_declarecvariable,(),((YTVACTR_declarecvariable).nonlocals)));
} 
break;
case 4: /* STRUCT(INT)  */
KWVACTR_id = (EWVACTR.data.mode4);
 /* line 328: */
 /* line 329: */
{ 
 /* line 330: */
 /* line 331: */
if (KWVACTR_id.Idno==VPKACTR_alienidno)
{ 
LWVACTR = (&UPKACTR_alienidinfo);
} 
else
{ 
 /* line 332: */
LWVACTR = YQKACTR_get_idinfo(KWVACTR_id.Idno);
} 
MWVACTR_rhsidinfo = LWVACTR;
 /* line 333: */
 /* line 334: */
 /* line 335: */
NWVACTR = PRLACTR_isgloballevel((*A_NILCHECK((&(A_NILCHECK(MWVACTR_rhsidinfo)->Environ)))));
if ( NWVACTR )
{ /* line 336: */
NWVACTR = ((*A_NILCHECK((&(A_NILCHECK(IQVACTR_idinfo)->Mode))))==(*A_NILCHECK((&(A_NILCHECK(MWVACTR_rhsidinfo)->Mode)))));
}
 /* line 339: */
if ( NWVACTR )
{ /* line 340: */
OWVACTR = (*A_NILCHECK((&(A_NILCHECK(IQVACTR_idinfo)->Flags)))) ;
PWVACTR = (!A_LB_GE(OWVACTR,CQKACTR_idkeptflag));
if ( ! PWVACTR )
{ /* line 341: */
PWVACTR = (KWVACTR_id.Idno==VPKACTR_alienidno);
}
if ( ! PWVACTR )
{ /* line 342: */
QWVACTR = (*A_NILCHECK((&(A_NILCHECK(MWVACTR_rhsidinfo)->Flags)))) ;
PWVACTR = A_LB_GE(QWVACTR,CQKACTR_idkeptflag);
}
 /* line 343: */
NWVACTR = PWVACTR;
}
RWVACTR = NWVACTR;
if (RWVACTR)
{ 
 /* line 344: */
 /* line 345: */
UTKACTR_idfullname( KWVACTR_id.Idno, &SWVACTR );
(void)(A_CALLPROC(UQVACTR_optidentity,(SWVACTR),(SWVACTR,(UQVACTR_optidentity).nonlocals)));
} 
else
{ 
 /* line 347: */
(void)(A_CALLPROC(YTVACTR_declarecvariable,(),((YTVACTR_declarecvariable).nonlocals)));
} 
} 
break;
default: 
 /* line 348: */
 /* line 349: */
(void)(A_CALLPROC(YTVACTR_declarecvariable,(),((YTVACTR_declarecvariable).nonlocals)));
break;
} 
} 
else
{ 
 /* line 350: */
(void)(A_CALLPROC(YTVACTR_declarecvariable,(),((YTVACTR_declarecvariable).nonlocals)));
} 
} 
A_PROC_EXIT(outputcdeclaration);
return;
} 
#undef NL

A68_VOID  VWVACTR_iddec(A68_130  Identifierdec, A68_105 ** Valuestack)
{ 
A68_INT  EXVACTR_type A_UNUSED = {0};
A68_INT  FXVACTR_mode A_UNUSED = {0};
A68_INT  GXVACTR_decno A_UNUSED = {0};
A68_VC  HXVACTR_name A_UNUSED = {0};
A68_108 * IXVACTR_newid A_UNUSED = {0};
A68_98 * KXVACTR_initialvalue A_UNUSED = {0};
A68_VC  LXVACTR;  /* OPERATORS - nil -> mode */
A68_VC  MXVACTR;  /* OPERATORS - nil -> mode */
A68_VC  NXVACTR;  /* OPERATORS - nil -> mode */
A68_VC  OXVACTR;  /* OPERATORS - nil -> mode */
A68_VC  PXVACTR;  /* OPERATORS - nil -> mode */
A68_VC  QXVACTR;  /* OPERATORS - nil -> mode */
A68_VC  RXVACTR;  /* OPERATORS - nil -> mode */
A68_VC  SXVACTR;  /* OPERATORS - nil -> mode */
A68_VC  TXVACTR;  /* OPERATORS - nil -> mode */
A68_VC  UXVACTR;  /* OPERATORS - nil -> mode */
A68_98 * VXVACTR_initialvalue A_UNUSED = {0};
A68_INT  YXVACTR_rowmode A_UNUSED = {0};
A68_INT  ZXVACTR_forallmode A_UNUSED = {0};
A68_VC  AYVACTR;  /* OPERATORS - nil -> mode */
A68_VC  BYVACTR;  /* OPERATORS - nil -> mode */
A68_108  CYVACTR;  /* collateral clause result */
A68_72  DYVACTR;  /* avoid structure result */
A68_VC  EYVACTR;  /* OPERATORS - nil -> mode */
A68_VC  FYVACTR;  /* OPERATORS - nil -> mode */
A68_VC  GYVACTR;  /* OPERATORS - nil -> mode */
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
EXVACTR_type = Identifierdec.Type;
 /* line 382: */
FXVACTR_mode = Identifierdec.Mode;
 /* line 383: */
GXVACTR_decno = Identifierdec.Decno;
 /* line 385: */
HXVACTR_name = Identifierdec.Name;
 /* line 386: */
IXVACTR_newid = YQKACTR_get_idinfo(GXVACTR_decno);
 /* line 388: */
 /* line 390: */
 /* line 391: */
switch ( EXVACTR_type )
{ 
case 1: 
 /* line 392: */
{ 
(void)(SMVACTR_evaluatestack(Valuestack));
 /* line 393: */
KXVACTR_initialvalue = (&(A_NILCHECK((*A_NILCHECK(Valuestack)))->Value));
 /* line 394: */
(void)((*A_NILCHECK(Valuestack)) = (*A_NILCHECK((&(A_NILCHECK((*A_NILCHECK(Valuestack)))->Rest)))));
 /* line 395: */
(void)(LOVACTR_newidinfo(GXVACTR_decno, FXVACTR_mode, HXVACTR_name, RNOACTR_nulluname, BQKACTR_ididentityflag, A_VVAC(MXVACTR), A_VVAC(LXVACTR)));
 /* line 396: */
 /* line 397: */
 /* line 398: */
(void)(HQVACTR_outputcdeclaration(GXVACTR_decno, KXVACTR_initialvalue));
} 
break;
case 2: 
 /* line 399: */
{ 
 /* line 346: */
 /* line 400: */
 /* line 401: */
if (FXVACTR_mode>WFAACTR_refrefmark)
{ 
 /* line 402: */
(void)(MXIACTR_portabilitywarning(810));
} 
 /* line 403: */
(void)(LOVACTR_newidinfo(GXVACTR_decno, FXVACTR_mode, HXVACTR_name, RNOACTR_nulluname, AQKACTR_idnoflags, A_VVAC(OXVACTR), A_VVAC(NXVACTR)));
 /* line 404: */
 /* line 405: */
 /* line 406: */
(void)(HQVACTR_outputcdeclaration(GXVACTR_decno, JXVACTR_noinitialvalue));
} 
break;
case 3: 
 /* line 407: */
 /* line 408: */
 /* line 409: */
(void)(LOVACTR_newidinfo(GXVACTR_decno, FXVACTR_mode, HXVACTR_name, RNOACTR_nulluname, GQKACTR_idformalflag, A_VVAC(QXVACTR), A_VVAC(PXVACTR)));
break;
case 4: 
 /* line 410: */
{ 
(void)(LOVACTR_newidinfo(GXVACTR_decno, FXVACTR_mode, HXVACTR_name, RNOACTR_nulluname, FQKACTR_idforflag, A_VVAC(SXVACTR), A_VVAC(RXVACTR)));
 /* line 411: */
 /* line 412: */
 /* line 413: */
(void)(HQVACTR_outputcdeclaration(GXVACTR_decno, JXVACTR_noinitialvalue));
} 
break;
case 5: 
 /* line 414: */
{ 
(void)(LOVACTR_newidinfo(GXVACTR_decno, FXVACTR_mode, HXVACTR_name, RNOACTR_nulluname, AQKACTR_idnoflags, A_VVAC(UXVACTR), A_VVAC(TXVACTR)));
 /* line 415: */
(void)(SMVACTR_evaluatestack(Valuestack));
 /* line 416: */
VXVACTR_initialvalue = (&(A_NILCHECK((*A_NILCHECK(Valuestack)))->Value));
 /* line 417: */
(void)((*A_NILCHECK(Valuestack)) = (*A_NILCHECK((&(A_NILCHECK((*A_NILCHECK(Valuestack)))->Rest)))));
 /* line 419: */
 /* line 420: */
 /* line 421: */
(void)(HQVACTR_outputcdeclaration(GXVACTR_decno, VXVACTR_initialvalue));
} 
break;
case 6: 
 /* line 422: */
{ 
(void)(WXIACTR_assert(XXVACTR, A68_FALSE));
 /* line 423: */
 /* line 424: */
/*SKIP*/;
} 
break;
case 7: 
 /* line 429: */
{ 
YXVACTR_rowmode = (*A_NILCHECK((&(A_NILCHECK((&(A_NILCHECK((*A_NILCHECK(Valuestack)))->Value)))->Mode))));
 /* line 430: */
ZXVACTR_forallmode = FXVACTR_mode;
 /* line 440: */
(void)(LOVACTR_newidinfo(GXVACTR_decno, ZXVACTR_forallmode, HXVACTR_name, RNOACTR_nulluname, EQKACTR_idforallflag, A_VVAC(BYVACTR), A_VVAC(AYVACTR)));
 /* line 441: */
 /* line 442: */
 /* line 443: */
(void)(HQVACTR_outputcdeclaration(GXVACTR_decno, JXVACTR_noinitialvalue));
} 
break;
case 8: 
 /* line 444: */
 /* line 445: */
 /* line 446: */
CYVACTR.Mode = FXVACTR_mode;
 /* line 447: */
CYVACTR.Cvariabletype = 0;
 /* line 448: */
QPLACTR_currentenviron(  &DYVACTR );
CYVACTR.Environ = DYVACTR;
 /* line 449: */
CYVACTR.Name = HXVACTR_name;
 /* line 450: */
CYVACTR.C_name = A_VVAC(EYVACTR);
 /* line 451: */
CYVACTR.Prefix = QIMACTR_newuniquename();
 /* line 452: */
 /* line 453: */
CYVACTR.Flags = (A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(IXVACTR_newid)->Flags))))&NQKACTR_idpresetflags)|BQKACTR_ididentityflag);
 /* line 455: */
CYVACTR.Definition = A_VVAC(FYVACTR);
 /* line 456: */
CYVACTR.Rhs = A_VVAC(GYVACTR);
 /* line 457: */
(*A_NILCHECK(IXVACTR_newid)) = CYVACTR;
break;
default: 
 /* line 458: */
 /* line 459: */
(void)(WXIACTR_assert(IYVACTR, A68_FALSE));
break;
} 
} 
A_PROC_EXIT(iddec);
return;
} 
#undef NL
 /* line 463: */
 /* line 465: */

A68_VOID  MYVACTR_ccdec(A68_130  Choicedec, A68_98 * Enquiry, A68_INT  Modeindex)
{ 
A68_INT  PYVACTR_decno A_UNUSED = {0};
A68_INT  QYVACTR_choicemode A_UNUSED = {0};
A68_VC  RYVACTR;  /* OPERATORS - nil -> mode */
A68_VC  SYVACTR;  /* OPERATORS - nil -> mode */
A68_98  TYVACTR;  /* collateral clause result */
A68_VC  VYVACTR;  /* avoid structure result */
A68_VC  XYVACTR;  /* avoid structure result */
A68_99  YYVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ZYVACTR;  /* YIELD */
A68_VC  OZVACTR;  /* OPERATORS - nil -> mode */
A68_VC  PZVACTR;  /* OPERATORS - nil -> mode */
A68_VC  QZVACTR;  /* avoid structure result */
A68_VC  RZVACTR_enquiryname A_UNUSED = {0};
A68_VC  SZVACTR;  /* avoid structure result */
A68_VC  TZVACTR_newunionname A_UNUSED = {0};
A68_INT  UZVACTR_codestream A_UNUSED = {0};
A68_181  VZVACTR;  /* avoid structure result */
A68_181  WZVACTR;  /* avoid structure result */
A68_INT  XZVACTR_modeoffset A_UNUSED = {0};
A68_269  YZVACTR;  /* collateral clause result */
A68_66  BAWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  CAWACTR;  /* YIELD */
A68_66  DAWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  EAWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  FAWACTR;  /* YIELD */
A68_66  GAWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  JAWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  KAWACTR;  /* YIELD */
A68_66  LAWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  MAWACTR;  /* OPERATORS - istruct -> vector */
A68_258  NAWACTR;  /* collateral clause result */
A68_66  OAWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  RAWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  SAWACTR;  /* YIELD */
A68_VC  TAWACTR;  /* avoid structure result */
A68_66  UAWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  VAWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  WAWACTR;  /* YIELD */
A68_66  XAWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  YAWACTR;  /* OPERATORS - istruct -> vector */
A68_181  ZAWACTR;  /* avoid structure result */
A68_181  ABWACTR;  /* avoid structure result */
A68_VC  BBWACTR;  /* avoid structure result */
A68_VC  CBWACTR;  /* avoid structure result */
A68_VC  DBWACTR_uniontable A_UNUSED = {0};
A68_271  EBWACTR;  /* collateral clause result */
A68_66  FBWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  IBWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  JBWACTR;  /* YIELD */
A68_66  KBWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  NBWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  OBWACTR;  /* YIELD */
A68_66  PBWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  SBWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  TBWACTR;  /* YIELD */
A68_66  UBWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  VBWACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(ccdec);
 /* line 469: */
 /* line 470: */
{ 
(void)(WXIACTR_assert(OYVACTR, (Choicedec.Type==6)));
 /* line 471: */
PYVACTR_decno = Choicedec.Decno;
 /* line 472: */
QYVACTR_choicemode = Choicedec.Mode;
 /* line 474: */
 /* line 475: */
 /* line 476: */
if (Modeindex>0)
{ 
 /* line 477: */
(void)(LOVACTR_newidinfo(PYVACTR_decno, QYVACTR_choicemode, Choicedec.Name, RNOACTR_nulluname, (A68_BITS )(BQKACTR_ididentityflag|DQKACTR_idccdecflag), A_VVAC(SYVACTR), A_VVAC(RYVACTR)));
 /* line 478: */
 /* line 479: */
 /* line 480: */
 /* line 481: */
TYVACTR.Mode = QYVACTR_choicemode;
 /* line 482: */
TYVACTR.Info = PKJACTR_defaultinfo;
 /* line 483: */
 /* line 484: */
DAQACTR_getcfragment( Enquiry, &VYVACTR );
ROAAOSF_whole( Modeindex, 0, &XYVACTR );
ZYVACTR = A_VC_PLUS(A_VC_PLUS(VYVACTR,WYVACTR),XYVACTR) ;
TYVACTR.Extra = A_UNITE(YYVACTR,mode6,6,ZYVACTR);
 /* line 485: */
(void)(HQVACTR_outputcdeclaration(PYVACTR_decno, CZVACTR_assignment(A_LOC(A68_98 ), TYVACTR)));
} 
else
{ 
 /* line 486: */
 /* line 487: */
if (Modeindex<0)
{ 
 /* line 488: */
(void)(LOVACTR_newidinfo(PYVACTR_decno, QYVACTR_choicemode, Choicedec.Name, RNOACTR_nulluname, (A68_BITS )(BQKACTR_ididentityflag|DQKACTR_idccdecflag), A_VVAC(PZVACTR), A_VVAC(OZVACTR)));
 /* line 489: */
(void)(HQVACTR_outputcdeclaration(PYVACTR_decno, (A68_98 *)A68_NIL));
 /* line 491: */
DAQACTR_getcfragment( Enquiry, &QZVACTR );
RZVACTR_enquiryname = QZVACTR;
 /* line 492: */
UTKACTR_idfullname( PYVACTR_decno, &SZVACTR );
TZVACTR_newunionname = SZVACTR;
 /* line 494: */
UZVACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 496: */
 /* line 497: */
A_CALLPROC(YVMACTR_constituents,((*A_NILCHECK((&(A_NILCHECK(Enquiry)->Mode)))), &VZVACTR),((*A_NILCHECK((&(A_NILCHECK(Enquiry)->Mode)))), &VZVACTR,(YVMACTR_constituents).nonlocals));
A_CALLPROC(YVMACTR_constituents,(QYVACTR_choicemode, &WZVACTR),(QYVACTR_choicemode, &WZVACTR,(YVMACTR_constituents).nonlocals));
XZVACTR_modeoffset = (OWQACTR_findints(WZVACTR, VZVACTR)-1);
 /* line 499: */
 /* line 500: */
CAWACTR = AAWACTR ;
YZVACTR.data[0] = A_UNITE(BAWACTR,mode2,2,CAWACTR);
YZVACTR.data[1] = A_UNITE(DAWACTR,mode2,2,TZVACTR_newunionname);
 /* line 501: */
FAWACTR = ',' ;
YZVACTR.data[2] = A_UNITE(EAWACTR,mode1,1,FAWACTR);
YZVACTR.data[3] = A_UNITE(GAWACTR,mode2,2,RZVACTR_enquiryname);
 /* line 502: */
KAWACTR = IAWACTR ;
YZVACTR.data[4] = A_UNITE(JAWACTR,mode2,2,KAWACTR);
YZVACTR.data[5] = A_UNITE(LAWACTR,mode4,4,EIAACTR_cnewline);
 /* line 503: */
(void)(MDMACTR_writecstream(A_HISVEC(MAWACTR,YZVACTR,6,A68_66 ), UZVACTR_codestream));
 /* line 505: */
 /* line 506: */
 /* line 507: */
if (XZVACTR_modeoffset>0)
{ 
NAWACTR.data[0] = A_UNITE(OAWACTR,mode2,2,TZVACTR_newunionname);
 /* line 508: */
SAWACTR = QAWACTR ;
NAWACTR.data[1] = A_UNITE(RAWACTR,mode2,2,SAWACTR);
ROAAOSF_whole( XZVACTR_modeoffset, 0, &TAWACTR );
NAWACTR.data[2] = A_UNITE(UAWACTR,mode2,2,TAWACTR);
 /* line 509: */
WAWACTR = ';' ;
NAWACTR.data[3] = A_UNITE(VAWACTR,mode1,1,WAWACTR);
NAWACTR.data[4] = A_UNITE(XAWACTR,mode4,4,EIAACTR_cnewline);
 /* line 510: */
 /* line 511: */
(void)(MDMACTR_writecstream(A_HISVEC(YAWACTR,NAWACTR,5,A68_66 ), UZVACTR_codestream));
} 
else
{ 
 /* line 512: */
 /* line 515: */
if (XZVACTR_modeoffset<0)
{ 
 /* line 516: */
 /* line 517: */
 /* line 518: */
A_CALLPROC(YVMACTR_constituents,(QYVACTR_choicemode, &ZAWACTR),(QYVACTR_choicemode, &ZAWACTR,(YVMACTR_constituents).nonlocals));
A_CALLPROC(YVMACTR_constituents,((*A_NILCHECK((&(A_NILCHECK(Enquiry)->Mode)))), &ABWACTR),((*A_NILCHECK((&(A_NILCHECK(Enquiry)->Mode)))), &ABWACTR,(YVMACTR_constituents).nonlocals));
EXQACTR_uniontouniontable( ABWACTR, ZAWACTR, &BBWACTR );
DRJACTR_replacecontrolchars( BBWACTR, &CBWACTR );
DBWACTR_uniontable = CBWACTR;
 /* line 520: */
 /* line 521: */
EBWACTR.data[0] = A_UNITE(FBWACTR,mode2,2,TZVACTR_newunionname);
JBWACTR = HBWACTR ;
EBWACTR.data[1] = A_UNITE(IBWACTR,mode2,2,JBWACTR);
 /* line 522: */
EBWACTR.data[2] = A_UNITE(KBWACTR,mode2,2,DBWACTR_uniontable);
OBWACTR = MBWACTR ;
EBWACTR.data[3] = A_UNITE(NBWACTR,mode2,2,OBWACTR);
EBWACTR.data[4] = A_UNITE(PBWACTR,mode2,2,RZVACTR_enquiryname);
 /* line 523: */
TBWACTR = RBWACTR ;
EBWACTR.data[5] = A_UNITE(SBWACTR,mode2,2,TBWACTR);
EBWACTR.data[6] = A_UNITE(UBWACTR,mode4,4,EIAACTR_cnewline);
 /* line 524: */
 /* line 525: */
 /* line 526: */
 /* line 527: */
(void)(MDMACTR_writecstream(A_HISVEC(VBWACTR,EBWACTR,7,A68_66 ), UZVACTR_codestream));
} 
} 
} 
else
{ 
 /* line 528: */
 /* line 529: */
(void)(WXIACTR_assert(XBWACTR, A68_FALSE));
} 
} 
} 
A_PROC_EXIT(ccdec);
return;
} 
#undef NL

A_STATIC A68_VOID  ZBWACTR_generator(A68_BOOL  YBWACTR_anonymous, A68_127  *ReturnedValue)
{ 
A68_127  ACWACTR;  /* clause result */
A68_127  BCWACTR;  /* OPERATORS - dynamic generator */
{ 
BCWACTR.dim[0].upb = 15 ;
BCWACTR.dim[0].lwb = 0 ;
(void)A_1INITSTRIDES(BCWACTR) ;
( YBWACTR_anonymous? A_R1LOC(A68_VC ,BCWACTR): A_R1HEAP(A68_VC ,BCWACTR) );
ACWACTR = BCWACTR;
} 
*ReturnedValue = (ACWACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  GCWACTR_generator(A68_BOOL  FCWACTR_anonymous, A68_90  *ReturnedValue)
{ 
A68_90  HCWACTR;  /* clause result */
A68_90  ICWACTR;  /* OPERATORS - dynamic generator */
{ 
ICWACTR.dim[0].upb = 15 ;
ICWACTR.dim[0].lwb = 0 ;
(void)A_1INITSTRIDES(ICWACTR) ;
( FCWACTR_anonymous? A_R1LOC(A68_BOOL ,ICWACTR): A_R1HEAP(A68_BOOL ,ICWACTR) );
HCWACTR = ICWACTR;
} 
*ReturnedValue = (HCWACTR);
return;
} 
#undef NL

A68_VOID  OCWACTR_noteroutineprototype(A68_INT  Level, A68_VC  Prototype)
{ 
A68_INT  PCWACTR_n A_UNUSED = {0};
A68_273  RCWACTR_generator;   /* proc value of non-global proc */
A68_127  WCWACTR;  /* avoid structure result */
A68_127  XCWACTR_newprototype A_UNUSED = {0};
A68_274  ZCWACTR_generator;   /* proc value of non-global proc */
A68_90  EDWACTR;  /* avoid structure result */
A68_90  FDWACTR_newsetjmp A_UNUSED = {0};
A68_127  GDWACTR;  /* OPERATORS - trim index */
A68_127  HDWACTR;  /* YIELD */
A68_90  IDWACTR;  /* OPERATORS - trim index */
A68_90  JDWACTR;  /* YIELD */
A68_VC  KDWACTR;  /* avoid structure result */
A68_VC * LDWACTR;  /* YIELD */
A68_BOOL * MDWACTR;  /* YIELD */
A_PROC_ENTRY(noteroutineprototype);
 /* line 541: */
 /* line 542: */
{ 
for ( ;; )
{ 
 /* line 543: */
if ( !((Level>(*A_NILCHECK(ECWACTR_levelprototype)).dim[0].upb)) ) break;
PCWACTR_n = ((2*(*A_NILCHECK(ECWACTR_levelprototype)).dim[0].upb)+1);
 /* line 544: */
A_CLOSURE( RCWACTR_generator, SCWACTR_generator, TCWACTR_generator );
(( TCWACTR_generator * ) ( RCWACTR_generator.nonlocals )) -> PCWACTR_n = PCWACTR_n;
A_CALLPROC(RCWACTR_generator,(A68_FALSE, &WCWACTR),(A68_FALSE, &WCWACTR,(RCWACTR_generator).nonlocals));
XCWACTR_newprototype = WCWACTR;
 /* line 545: */
A_CLOSURE( ZCWACTR_generator, ADWACTR_generator, BDWACTR_generator );
(( BDWACTR_generator * ) ( ZCWACTR_generator.nonlocals )) -> PCWACTR_n = PCWACTR_n;
A_CALLPROC(ZCWACTR_generator,(A68_FALSE, &EDWACTR),(A68_FALSE, &EDWACTR,(ZCWACTR_generator).nonlocals));
FDWACTR_newsetjmp = EDWACTR;
 /* line 546: */
HDWACTR = A_R1TRIM(GDWACTR,(XCWACTR_newprototype),A_RTSCRIPT(&(GDWACTR.dim[0]),&((XCWACTR_newprototype).dim[0]),(XCWACTR_newprototype).dim[0].lwb,(*A_NILCHECK(ECWACTR_levelprototype)).dim[0].upb,0)) ;
(void)(A_R1ASSIGN2((*A_NILCHECK(ECWACTR_levelprototype)),HDWACTR,A68_VC ));
 /* line 547: */
JDWACTR = A_R1TRIM(IDWACTR,(FDWACTR_newsetjmp),A_RTSCRIPT(&(IDWACTR.dim[0]),&((FDWACTR_newsetjmp).dim[0]),(FDWACTR_newsetjmp).dim[0].lwb,(*A_NILCHECK(LCWACTR_levelsetjmp)).dim[0].upb,0)) ;
(void)(A_R1ASSIGN2((*A_NILCHECK(LCWACTR_levelsetjmp)),JDWACTR,A68_BOOL ));
 /* line 548: */
(*A_NILCHECK(ECWACTR_levelprototype)) = XCWACTR_newprototype;
 /* line 549: */
 /* line 550: */
(*A_NILCHECK(LCWACTR_levelsetjmp)) = FDWACTR_newsetjmp;
}
 /* line 551: */
ZCAAOSF_makervc( Prototype, &KDWACTR );
LDWACTR = (&A_R1INDEX((*A_NILCHECK(ECWACTR_levelprototype)),Level)) ;
(*A_NILCHECK(LDWACTR)) = KDWACTR;
 /* line 552: */
 /* line 553: */
MDWACTR = (&A_R1INDEX((*A_NILCHECK(LCWACTR_levelsetjmp)),Level)) ;
(*A_NILCHECK(MDWACTR)) = A68_FALSE;
} 
A_PROC_EXIT(noteroutineprototype);
return;
} 
#undef NL

A68_VOID  ODWACTR_endroutineprototype(A68_INT  Level)
{ 
A68_BOOL  PDWACTR;  /* optbool result */
A68_VC  QDWACTR_prototype A_UNUSED = {0};
A68_275  RDWACTR;  /* collateral clause result */
A68_66  UDWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  VDWACTR;  /* YIELD */
A68_66  WDWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  XDWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  YDWACTR;  /* YIELD */
A68_66  ZDWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  AEWACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL * BEWACTR;  /* YIELD */
A_PROC_ENTRY(endroutineprototype);
 /* line 556: */
PDWACTR = (Level<=(*A_NILCHECK(LCWACTR_levelsetjmp)).dim[0].upb);
if ( PDWACTR )
{ /* line 557: */
PDWACTR = (*A_NILCHECK((&A_R1INDEX((*A_NILCHECK(LCWACTR_levelsetjmp)),Level))));
}
if (PDWACTR)
{ 
QDWACTR_prototype = (*A_NILCHECK((&A_R1INDEX((*A_NILCHECK(ECWACTR_levelprototype)),Level))));
 /* line 558: */
VDWACTR = TDWACTR ;
RDWACTR.data[0] = A_UNITE(UDWACTR,mode2,2,VDWACTR);
RDWACTR.data[1] = A_UNITE(WDWACTR,mode2,2,QDWACTR_prototype);
YDWACTR = ';' ;
RDWACTR.data[2] = A_UNITE(XDWACTR,mode1,1,YDWACTR);
RDWACTR.data[3] = A_UNITE(ZDWACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(AEWACTR,RDWACTR,4,A68_66 ), HSLACTR_externstream));
 /* line 559: */
 /* line 560: */
BEWACTR = (&A_R1INDEX((*A_NILCHECK(LCWACTR_levelsetjmp)),Level)) ;
(*A_NILCHECK(BEWACTR)) = A68_FALSE;
} 
A_PROC_EXIT(endroutineprototype);
return;
} 
#undef NL

A68_VOID  DEWACTR_declarenonlocallabel(A68_INT  Labno)
{ 
A68_110 * EEWACTR_labinfo A_UNUSED = {0};
A68_BOOL  FEWACTR;  /* clause result */
A68_BITS  GEWACTR;  /* ADICOPS - <= */
A68_INT  HEWACTR_level A_UNUSED = {0};
A68_275  IEWACTR;  /* collateral clause result */
A68_66  LEWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  MEWACTR;  /* YIELD */
A68_VC  NEWACTR;  /* avoid structure result */
A68_66  OEWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  PEWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  QEWACTR;  /* YIELD */
A68_66  REWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  SEWACTR;  /* clause result */
A68_65  TEWACTR;  /* OPERATORS - istruct -> vector */
A68_269  UEWACTR;  /* collateral clause result */
A68_66  XEWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  YEWACTR;  /* YIELD */
A68_VC  AFWACTR;  /* avoid structure result */
A68_66  CFWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  DFWACTR;  /* YIELD */
A68_66  GFWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  HFWACTR;  /* YIELD */
A68_VC  IFWACTR;  /* avoid structure result */
A68_66  JFWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  KFWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  LFWACTR;  /* YIELD */
A68_66  MFWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  NFWACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL * OFWACTR;  /* YIELD */
A_PROC_ENTRY(declarenonlocallabel);
 /* line 568: */
 /* line 569: */
{ 
{ 
EEWACTR_labinfo = (&A_R1INDEX(ZPKACTR_labels,Labno));
 /* line 570: */
 /* line 571: */
GEWACTR = (*A_NILCHECK((&(A_NILCHECK(EEWACTR_labinfo)->Flags)))) ;
FEWACTR = (!A_LB_LE(WQKACTR_labbufferemittedflag,GEWACTR));
if (FEWACTR)
{ 
HEWACTR_level = (*A_NILCHECK((&(A_NILCHECK((&(A_NILCHECK(EEWACTR_labinfo)->Environ)))->Level))));
 /* line 573: */
 /* line 574: */
MEWACTR = KEWACTR ;
IEWACTR.data[0] = A_UNITE(LEWACTR,mode2,2,MEWACTR);
DTKACTR_labelbuffername( Labno, &NEWACTR );
IEWACTR.data[1] = A_UNITE(OEWACTR,mode2,2,NEWACTR);
 /* line 575: */
QEWACTR = ';' ;
IEWACTR.data[2] = A_UNITE(PEWACTR,mode1,1,QEWACTR);
IEWACTR.data[3] = A_UNITE(REWACTR,mode4,4,EIAACTR_cnewline);
 /* line 576: */
if (HEWACTR_level==0)
{ 
SEWACTR = KSLACTR_nonlocdecstream(HEWACTR_level);
} 
else
{ 
 /* line 577: */
SEWACTR = QSLACTR_locdecstream(HEWACTR_level);
} 
(void)(MDMACTR_writecstream(A_HISVEC(TEWACTR,IEWACTR,4,A68_66 ), SEWACTR));
 /* line 579: */
 /* line 580: */
YEWACTR = WEWACTR ;
UEWACTR.data[0] = A_UNITE(XEWACTR,mode2,2,YEWACTR);
 /* line 581: */
DTKACTR_labelbuffername( Labno, &AFWACTR );
DFWACTR = A_VC_PLUS(AFWACTR,BFWACTR) ;
UEWACTR.data[1] = A_UNITE(CFWACTR,mode2,2,DFWACTR);
HFWACTR = FFWACTR ;
UEWACTR.data[2] = A_UNITE(GFWACTR,mode2,2,HFWACTR);
WSKACTR_labelfullname( Labno, &IFWACTR );
UEWACTR.data[3] = A_UNITE(JFWACTR,mode2,2,IFWACTR);
 /* line 582: */
LFWACTR = ';' ;
UEWACTR.data[4] = A_UNITE(KFWACTR,mode1,1,LFWACTR);
UEWACTR.data[5] = A_UNITE(MFWACTR,mode4,4,EIAACTR_cnewline);
 /* line 583: */
(void)(MDMACTR_writecstream(A_HISVEC(NFWACTR,UEWACTR,6,A68_66 ), TSLACTR_labelstream(HEWACTR_level)));
 /* line 584: */
if (HEWACTR_level<=(*A_NILCHECK(LCWACTR_levelsetjmp)).dim[0].upb)
{ 
OFWACTR = (&A_R1INDEX((*A_NILCHECK(LCWACTR_levelsetjmp)),HEWACTR_level)) ;
(*A_NILCHECK(OFWACTR)) = A68_TRUE;
} 
 /* line 585: */
 /* line 586: */
(void)(PKAAOSF_orab((&(A_NILCHECK(EEWACTR_labinfo)->Flags)), WQKACTR_labbufferemittedflag));
} 
} 
} 
A_PROC_EXIT(declarenonlocallabel);
return;
} 
#undef NL

A68_VOID  RFWACTR_nonlocaldec(A68_INT  Idno, A68_INT  Level)
{ 
A68_INT  WFWACTR;  /* clause result */
A68_INT  XFWACTR_typeofid A_UNUSED = {0};
A68_INT  YFWACTR_previouslevel A_UNUSED = {0};
A68_VC  ZFWACTR;  /* avoid structure result */
A68_VC  AGWACTR_fullname A_UNUSED = {0};
A68_INT  BGWACTR;  /* clause result */
A68_INT  EGWACTR = {0};  /* OPERATORS - skip to mode */
A68_INT  HGWACTR = {0};  /* OPERATORS - skip to mode */
A68_INT  IGWACTR_ctypeofid A_UNUSED = {0};
A68_258  JGWACTR;  /* collateral clause result */
A68_VC  KGWACTR;  /* avoid structure result */
A68_66  LGWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  MGWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  NGWACTR;  /* YIELD */
A68_66  OGWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  PGWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  QGWACTR;  /* YIELD */
A68_66  RGWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  SGWACTR;  /* OPERATORS - istruct -> vector */
A68_98  TGWACTR;  /* collateral clause result */
A68_INT  UGWACTR;  /* clause result */
A68_INT  VGWACTR = {0};  /* OPERATORS - skip to mode */
A68_INT  WGWACTR;  /* YIELD */
A68_INT  XGWACTR = {0};  /* OPERATORS - skip to mode */
A68_BOOL  YGWACTR;  /* clause result */
A68_101  ZGWACTR_id A_UNUSED = {0};
A68_INT * AHWACTR;  /* YIELD */
A68_99  BHWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_100  CHWACTR_rd A_UNUSED = {0};
A68_INT * DHWACTR;  /* YIELD */
A68_99  EHWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_99  FHWACTR = {0};  /* OPERATORS - skip to mode */
A68_57  GHWACTR_ld A_UNUSED = {0};
A68_INT * HHWACTR;  /* YIELD */
A68_99  IHWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_99  JHWACTR = {0};  /* OPERATORS - skip to mode */
A68_98  KHWACTR_rhs A_UNUSED = {0};
A68_INT  LHWACTR_thisrd A_UNUSED = {0};
A68_279  MHWACTR;  /* collateral clause result */
A68_66  PHWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  QHWACTR;  /* YIELD */
A68_VC  RHWACTR;  /* avoid structure result */
A68_66  SHWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  VHWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  WHWACTR;  /* YIELD */
A68_VC  XHWACTR;  /* avoid structure result */
A68_66  YHWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  BIWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  CIWACTR;  /* YIELD */
A68_66  DIWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  GIWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  HIWACTR;  /* YIELD */
A68_VC  IIWACTR;  /* avoid structure result */
A68_66  JIWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  KIWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  LIWACTR;  /* YIELD */
A68_66  MIWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  NIWACTR;  /* OPERATORS - istruct -> vector */
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
WFWACTR = SFWACTR_idtype;
} 
else
{ 
 /* line 601: */
if (Idno<=KAAACTR_maxrdno)
{ 
WFWACTR = TFWACTR_rdtype;
} 
else
{ 
 /* line 602: */
if (Idno<=MAAACTR_maxlibid)
{ 
 /* line 603: */
WFWACTR = UFWACTR_libtype;
} 
else
{ 
WFWACTR = VFWACTR_labtype;
} 
} 
} 
XFWACTR_typeofid = WFWACTR;
 /* line 604: */
YFWACTR_previouslevel = (Level-1);
 /* line 606: */
UTKACTR_idfullname( Idno, &ZFWACTR );
AGWACTR_fullname = ZFWACTR;
 /* line 608: */
 /* line 609: */
 /* line 610: */
switch ( XFWACTR_typeofid )
{ 
case 1: 
 /* line 611: */
BGWACTR = (*A_NILCHECK((&(A_NILCHECK((&A_R1INDEX(WPKACTR_ids,Idno)))->Mode))));
break;
case 2: 
 /* line 612: */
BGWACTR = (*A_NILCHECK((&(A_NILCHECK((&A_R1INDEX(XPKACTR_rds,Idno)))->Mode))));
break;
case 3: 
{ 
(void)(WXIACTR_assert(DGWACTR, A68_FALSE));
 /* line 614: */
BGWACTR = EGWACTR;
} 
break;
case 4: 
BGWACTR = TEAACTR_gotomode;
break;
default: 
{ 
(void)(WXIACTR_assert(GGWACTR, A68_FALSE));
 /* line 615: */
BGWACTR = HGWACTR;
} 
break;
} 
IGWACTR_ctypeofid = BGWACTR;
 /* line 618: */
 /* line 619: */
XKNACTR_ctype( IGWACTR_ctypeofid, &KGWACTR );
JGWACTR.data[0] = A_UNITE(LGWACTR,mode2,2,KGWACTR);
NGWACTR = ' ' ;
JGWACTR.data[1] = A_UNITE(MGWACTR,mode1,1,NGWACTR);
JGWACTR.data[2] = A_UNITE(OGWACTR,mode2,2,AGWACTR_fullname);
 /* line 620: */
QGWACTR = ';' ;
JGWACTR.data[3] = A_UNITE(PGWACTR,mode1,1,QGWACTR);
JGWACTR.data[4] = A_UNITE(RGWACTR,mode4,4,EIAACTR_cnewline);
 /* line 621: */
(void)(MDMACTR_writecstream(A_HISVEC(SGWACTR,JGWACTR,5,A68_66 ), KSLACTR_nonlocdecstream(YFWACTR_previouslevel)));
 /* line 622: */
(void)(CMNACTR_alignnextstructfield(IGWACTR_ctypeofid, KSLACTR_nonlocdecstream(YFWACTR_previouslevel)));
 /* line 626: */
 /* line 627: */
 /* line 628: */
TGWACTR.Mode = IGWACTR_ctypeofid;
 /* line 630: */
switch ( XFWACTR_typeofid )
{ 
case 1: 
 /* line 631: */
UGWACTR = (*A_NILCHECK((&(A_NILCHECK((&(A_NILCHECK((&A_R1INDEX(WPKACTR_ids,Idno)))->Environ)))->Level))));
break;
case 2: 
 /* line 632: */
UGWACTR = (*A_NILCHECK((&(A_NILCHECK((&A_R1INDEX(XPKACTR_rds,Idno)))->Declevel))));
break;
case 3: 
 /* line 633: */
UGWACTR = VGWACTR;
break;
case 4: 
 /* line 634: */
 /* line 635: */
WGWACTR = (Idno-OAAACTR_minlab) ;
UGWACTR = (*A_NILCHECK((&(A_NILCHECK((&(A_NILCHECK((&A_R1INDEX(ZPKACTR_labels,WGWACTR)))->Environ)))->Level))));
break;
default: 
 /* line 636: */
UGWACTR = XGWACTR;
break;
} 
 /* line 637: */
 /* line 638: */
YGWACTR = (YFWACTR_previouslevel==UGWACTR);
if (YGWACTR)
{ 
 /* line 639: */
TGWACTR.Info = PKJACTR_defaultinfo;
} 
else
{ 
 /* line 640: */
TGWACTR.Info = TKJACTR_nonloc;
} 
 /* line 641: */
switch ( XFWACTR_typeofid )
{ 
case 1: 
{ 
AHWACTR = (&(A_NILCHECK((&ZGWACTR_id))->Idno)) ;
(*A_NILCHECK(AHWACTR)) = Idno;
 /* line 642: */
TGWACTR.Extra = A_UNITE(BHWACTR,mode4,4,ZGWACTR_id);
} 
break;
case 2: 
{ 
DHWACTR = (&(A_NILCHECK((&CHWACTR_rd))->Rdenno)) ;
(*A_NILCHECK(DHWACTR)) = Idno;
 /* line 643: */
TGWACTR.Extra = A_UNITE(EHWACTR,mode2,2,CHWACTR_rd);
} 
break;
case 3: 
 /* line 644: */
TGWACTR.Extra = FHWACTR;
break;
case 4: 
{ 
HHWACTR = (&(A_NILCHECK((&GHWACTR_ld))->Labno)) ;
(void)((*A_NILCHECK(HHWACTR)) = (Idno-OAAACTR_minlab));
 /* line 645: */
 /* line 646: */
TGWACTR.Extra = A_UNITE(IHWACTR,mode7,7,GHWACTR_ld);
} 
break;
default: 
 /* line 647: */
TGWACTR.Extra = JHWACTR;
break;
} 
KHWACTR_rhs = TGWACTR;
 /* line 650: */
LHWACTR_thisrd = CQLACTR_findroutine(Level);
 /* line 651: */
 /* line 652: */
QHWACTR = OHWACTR ;
MHWACTR.data[0] = A_UNITE(PHWACTR,mode2,2,QHWACTR);
LUKACTR_rdenvname( LHWACTR_thisrd, &RHWACTR );
MHWACTR.data[1] = A_UNITE(SHWACTR,mode2,2,RHWACTR);
 /* line 653: */
WHWACTR = UHWACTR ;
MHWACTR.data[2] = A_UNITE(VHWACTR,mode2,2,WHWACTR);
UTKACTR_idfullname( LHWACTR_thisrd, &XHWACTR );
MHWACTR.data[3] = A_UNITE(YHWACTR,mode2,2,XHWACTR);
 /* line 654: */
CIWACTR = AIWACTR ;
MHWACTR.data[4] = A_UNITE(BIWACTR,mode2,2,CIWACTR);
MHWACTR.data[5] = A_UNITE(DIWACTR,mode2,2,AGWACTR_fullname);
HIWACTR = FIWACTR ;
MHWACTR.data[6] = A_UNITE(GIWACTR,mode2,2,HIWACTR);
DAQACTR_getcfragment( (&KHWACTR_rhs), &IIWACTR );
MHWACTR.data[7] = A_UNITE(JIWACTR,mode2,2,IIWACTR);
 /* line 655: */
LIWACTR = ';' ;
MHWACTR.data[8] = A_UNITE(KIWACTR,mode1,1,LIWACTR);
MHWACTR.data[9] = A_UNITE(MIWACTR,mode4,4,EIAACTR_cnewline);
 /* line 656: */
 /* line 657: */
(void)(MDMACTR_writecstream(A_HISVEC(NIWACTR,MHWACTR,10,A68_66 ), NSLACTR_codestream(YFWACTR_previouslevel)));
} 
A_PROC_EXIT(nonlocaldec);
return;
} 
#undef NL
 /* line 661: */
 /* line 663: */

A_STATIC A68_VOID  UIWACTR_declarecroutine(A68_INT  Rdenno, A68_INT  Resultmode, A68_BOOL  Global, A68_BOOL  Kept, A68_BOOL  Opsym, A68_181  Params)
{ 
A68_VC  VIWACTR;  /* avoid structure result */
A68_VC  WIWACTR_environmentctype A_UNUSED = {0};
A68_BOOL  XIWACTR;  /* optbool result */
A68_BOOL  YIWACTR_usetempforresult A_UNUSED = {0};
A68_INT  ZIWACTR;  /* clause result */
A68_INT  AJWACTR_cresultmode A_UNUSED = {0};
A68_BOOL  BJWACTR_fulldec A_UNUSED = {0};
A68_INT  CJWACTR_a68paramcount A_UNUSED = {0};
A68_INT  DJWACTR_cparamcount A_UNUSED = {0};
A68_INT  EJWACTR_codestream A_UNUSED = {0};
A68_VC  FJWACTR;  /* clause result */
A68_VC  GJWACTR;  /* avoid structure result */
A68_VC  HJWACTR;  /* avoid structure result */
A68_VC  IJWACTR_fnname A_UNUSED = {0};
A68_282  KJWACTR_generator;   /* proc value of non-global proc */
A68_281  QJWACTR;  /* avoid structure result */
A68_281  PJWACTR_paramnames A_UNUSED = {0};
A68_281  SJWACTR;  /* avoid structure result */
A68_281  RJWACTR_paramtypes A_UNUSED = {0};
A68_INT * TJWACTR_param A_UNUSED = {0};
A68_VC * UJWACTR_paramtype A_UNUSED = {0};
A68_VC * VJWACTR_paramname A_UNUSED = {0};
A68_INT  WJWACTR;  /* forall loop counter */
A68_VC  XJWACTR;  /* avoid structure result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} YJWACTR; 
A68_VC  ZJWACTR;  /* avoid structure result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} AKWACTR; 
A68_283  BKWACTR_prototype;   /* proc value of non-global proc */
A68_VC  NLWACTR;  /* avoid structure result */
A68_VC  OLWACTR_proto A_UNUSED = {0};
A68_275  PLWACTR;  /* collateral clause result */
A68_66  QLWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  RLWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  SLWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  TLWACTR;  /* YIELD */
A68_66  ULWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  VLWACTR;  /* OPERATORS - istruct -> vector */
A68_286  WLWACTR;  /* collateral clause result */
A68_66  XLWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  YLWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  ZLWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  AMWACTR;  /* OPERATORS - istruct -> vector */
A68_275  BMWACTR;  /* collateral clause result */
A68_66  EMWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  FMWACTR;  /* YIELD */
A68_66  GMWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  JMWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  KMWACTR;  /* YIELD */
A68_66  LMWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  MMWACTR;  /* OPERATORS - istruct -> vector */
A68_VC  NMWACTR;  /* avoid structure result */
A68_VC  OMWACTR_procvaluename A_UNUSED = {0};
A68_VC  PMWACTR;  /* avoid structure result */
A68_VC  QMWACTR_envname A_UNUSED = {0};
A68_INT  RMWACTR_previouslevel A_UNUSED = {0};
A68_269  SMWACTR;  /* collateral clause result */
A68_VC  TMWACTR;  /* avoid structure result */
A68_66  UMWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  VMWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  WMWACTR;  /* YIELD */
A68_66  XMWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  YMWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  ZMWACTR;  /* YIELD */
A68_66  CNWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  DNWACTR;  /* YIELD */
A68_66  GNWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  HNWACTR;  /* YIELD */
A68_66  INWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  JNWACTR;  /* OPERATORS - istruct -> vector */
A68_VC  KNWACTR;  /* OPERATORS - istruct -> vector */
A68_56  LNWACTR;  /* OPERATORS - istruct -> vector */
A68_VC  MNWACTR_envvarname A_UNUSED = {0};
A68_269  NNWACTR;  /* collateral clause result */
A68_66  ONWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  PNWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  QNWACTR;  /* YIELD */
A68_66  RNWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  SNWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  TNWACTR;  /* YIELD */
A68_66  WNWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  XNWACTR;  /* YIELD */
A68_66  AOWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  BOWACTR;  /* YIELD */
A68_66  COWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  DOWACTR;  /* OPERATORS - istruct -> vector */
A68_257  EOWACTR;  /* collateral clause result */
A68_66  HOWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  IOWACTR;  /* YIELD */
A68_66  JOWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  MOWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  NOWACTR;  /* YIELD */
A68_66  OOWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  ROWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  SOWACTR;  /* YIELD */
A68_66  TOWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  WOWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  XOWACTR;  /* YIELD */
A68_66  YOWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  ZOWACTR;  /* OPERATORS - istruct -> vector */
A68_257  APWACTR;  /* collateral clause result */
A68_66  DPWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  EPWACTR;  /* YIELD */
A68_66  HPWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  IPWACTR;  /* YIELD */
A68_66  JPWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  MPWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  NPWACTR;  /* YIELD */
A68_66  OPWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  RPWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  SPWACTR;  /* YIELD */
A68_66  TPWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  WPWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  XPWACTR;  /* YIELD */
A68_66  YPWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  ZPWACTR;  /* OPERATORS - istruct -> vector */
A68_269  AQWACTR;  /* collateral clause result */
A68_66  DQWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  EQWACTR;  /* YIELD */
A68_66  HQWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  IQWACTR;  /* YIELD */
A68_66  LQWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  MQWACTR;  /* YIELD */
A68_66  NQWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  OQWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  PQWACTR;  /* YIELD */
A68_66  SQWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  TQWACTR;  /* YIELD */
A68_66  WQWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  XQWACTR;  /* YIELD */
A68_66  YQWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  ZQWACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(declarecroutine);
 /* line 664: */
 /* line 665: */
{ 
LUKACTR_rdenvname( Rdenno, &VIWACTR );
WIWACTR_environmentctype = VIWACTR;
 /* line 668: */
 /* line 669: */
XIWACTR = NQIACTR_nostructresultoption;
if ( XIWACTR )
{XIWACTR = VSMACTR_iscstruct(Resultmode);
}
YIWACTR_usetempforresult = XIWACTR;
 /* line 671: */
 /* line 672: */
if (YIWACTR_usetempforresult)
{ 
ZIWACTR = UEAACTR_voidmode;
} 
else
{ 
ZIWACTR = Resultmode;
} 
AJWACTR_cresultmode = ZIWACTR;
 /* line 674: */
BJWACTR_fulldec = (!Global);
 /* line 676: */
CJWACTR_a68paramcount = Params.upb;
 /* line 678: */
 /* line 679: */
DJWACTR_cparamcount = ((CJWACTR_a68paramcount+(YIWACTR_usetempforresult))+(BJWACTR_fulldec));
 /* line 681: */
EJWACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 683: */
 /* line 684: */
if (BJWACTR_fulldec)
{ 
 /* line 685: */
DUKACTR_rdfnname( Rdenno, &GJWACTR );
FJWACTR = GJWACTR;
} 
else
{ 
 /* line 686: */
UTKACTR_idfullname( Rdenno, &HJWACTR );
FJWACTR = HJWACTR;
} 
IJWACTR_fnname = FJWACTR;
 /* line 688: */
A_CLOSURE( KJWACTR_generator, LJWACTR_generator, MJWACTR_generator );
(( MJWACTR_generator * ) ( KJWACTR_generator.nonlocals )) -> CJWACTR_a68paramcount = CJWACTR_a68paramcount;
A_CALLPROC(KJWACTR_generator,(A68_TRUE, &QJWACTR),(A68_TRUE, &QJWACTR,(KJWACTR_generator).nonlocals));
PJWACTR_paramnames = QJWACTR;
A_CALLPROC(KJWACTR_generator,(A68_TRUE, &SJWACTR),(A68_TRUE, &SJWACTR,(KJWACTR_generator).nonlocals));
RJWACTR_paramtypes = SJWACTR;
 /* line 690: */
 /* line 691: */
WJWACTR = Params.upb -1;
if ( WJWACTR != RJWACTR_paramtypes.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
if ( WJWACTR != PJWACTR_paramnames.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 3"); }
TJWACTR_param = Params.data;
UJWACTR_paramtype = RJWACTR_paramtypes.data;
VJWACTR_paramname = PJWACTR_paramnames.data;
for (;WJWACTR-- >= 0;
(TJWACTR_param++
,UJWACTR_paramtype++
,VJWACTR_paramname++
) )
{
 /* line 692: */
UTKACTR_idfullname( (*A_NILCHECK(TJWACTR_param)), &XJWACTR );
YJWACTR.source = XJWACTR ;
(void)((*A_NILCHECK(VJWACTR_paramname)) = (YJWACTR.destination));
 /* line 693: */
 /* line 694: */
BLNACTR_cvartype( (*A_NILCHECK((&(A_NILCHECK((&A_R1INDEX(WPKACTR_ids,(*A_NILCHECK(TJWACTR_param)))))->Cvariabletype)))), &ZJWACTR );
AKWACTR.source = ZJWACTR ;
(void)((*A_NILCHECK(UJWACTR_paramtype)) = (AKWACTR.destination));
}
 /* line 696: */
 /* line 698: */
 /* line 699: */
A_CLOSURE( BKWACTR_prototype, CKWACTR_prototype, DKWACTR_prototype );
(( DKWACTR_prototype * ) ( BKWACTR_prototype.nonlocals )) -> CJWACTR_a68paramcount = CJWACTR_a68paramcount;
(( DKWACTR_prototype * ) ( BKWACTR_prototype.nonlocals )) -> RJWACTR_paramtypes = RJWACTR_paramtypes;
(( DKWACTR_prototype * ) ( BKWACTR_prototype.nonlocals )) -> PJWACTR_paramnames = PJWACTR_paramnames;
(( DKWACTR_prototype * ) ( BKWACTR_prototype.nonlocals )) -> YIWACTR_usetempforresult = YIWACTR_usetempforresult;
(( DKWACTR_prototype * ) ( BKWACTR_prototype.nonlocals )) -> Resultmode = Resultmode;
(( DKWACTR_prototype * ) ( BKWACTR_prototype.nonlocals )) -> BJWACTR_fulldec = BJWACTR_fulldec;
(( DKWACTR_prototype * ) ( BKWACTR_prototype.nonlocals )) -> Global = Global;
(( DKWACTR_prototype * ) ( BKWACTR_prototype.nonlocals )) -> Kept = Kept;
(( DKWACTR_prototype * ) ( BKWACTR_prototype.nonlocals )) -> AJWACTR_cresultmode = AJWACTR_cresultmode;
(( DKWACTR_prototype * ) ( BKWACTR_prototype.nonlocals )) -> IJWACTR_fnname = IJWACTR_fnname;
 /* line 726: */
A_CALLPROC(BKWACTR_prototype,( &NLWACTR),( &NLWACTR,(BKWACTR_prototype).nonlocals));
OLWACTR_proto = NLWACTR;
 /* line 727: */
(void)(OCWACTR_noteroutineprototype(VRLACTR_currentlevel(), OLWACTR_proto));
 /* line 730: */
PLWACTR.data[0] = A_UNITE(QLWACTR,mode4,4,EIAACTR_cnewline);
PLWACTR.data[1] = A_UNITE(RLWACTR,mode2,2,OLWACTR_proto);
TLWACTR = ';' ;
PLWACTR.data[2] = A_UNITE(SLWACTR,mode1,1,TLWACTR);
PLWACTR.data[3] = A_UNITE(ULWACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(VLWACTR,PLWACTR,4,A68_66 ), HSLACTR_externstream));
 /* line 733: */
WLWACTR.data[0] = A_UNITE(XLWACTR,mode4,4,EIAACTR_cnewline);
WLWACTR.data[1] = A_UNITE(YLWACTR,mode2,2,OLWACTR_proto);
WLWACTR.data[2] = A_UNITE(ZLWACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(AMWACTR,WLWACTR,3,A68_66 ), EJWACTR_codestream));
 /* line 735: */
 /* line 736: */
 /* line 737: */
if (BJWACTR_fulldec)
{ 
FMWACTR = DMWACTR ;
BMWACTR.data[0] = A_UNITE(EMWACTR,mode2,2,FMWACTR);
BMWACTR.data[1] = A_UNITE(GMWACTR,mode2,2,WIWACTR_environmentctype);
KMWACTR = IMWACTR ;
BMWACTR.data[2] = A_UNITE(JMWACTR,mode2,2,KMWACTR);
BMWACTR.data[3] = A_UNITE(LMWACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(MMWACTR,BMWACTR,4,A68_66 ), EJWACTR_codestream));
 /* line 739: */
UTKACTR_idfullname( Rdenno, &NMWACTR );
OMWACTR_procvaluename = NMWACTR;
 /* line 740: */
LUKACTR_rdenvname( Rdenno, &PMWACTR );
QMWACTR_envname = PMWACTR;
 /* line 741: */
RMWACTR_previouslevel = (VRLACTR_currentlevel()-1);
 /* line 744: */
 /* line 745: */
XKNACTR_ctype( (*A_NILCHECK((&(A_NILCHECK((&A_R1INDEX(XPKACTR_rds,Rdenno)))->Mode)))), &TMWACTR );
SMWACTR.data[0] = A_UNITE(UMWACTR,mode2,2,TMWACTR);
WMWACTR = ' ' ;
SMWACTR.data[1] = A_UNITE(VMWACTR,mode1,1,WMWACTR);
SMWACTR.data[2] = A_UNITE(XMWACTR,mode2,2,OMWACTR_procvaluename);
 /* line 746: */
ZMWACTR = ';' ;
SMWACTR.data[3] = A_UNITE(YMWACTR,mode1,1,ZMWACTR);
 /* line 747: */
 /* line 748: */
if (AQIACTR_verboseoption)
{ 
 /* line 749: */
DNWACTR = BNWACTR ;
SMWACTR.data[4] = A_UNITE(CNWACTR,mode2,2,DNWACTR);
} 
else
{ 
 /* line 750: */
HNWACTR = FNWACTR ;
SMWACTR.data[4] = A_UNITE(GNWACTR,mode2,2,HNWACTR);
} 
SMWACTR.data[5] = A_UNITE(INWACTR,mode4,4,EIAACTR_cnewline);
 /* line 751: */
(void)(MDMACTR_writecstream(A_HISVEC(JNWACTR,SMWACTR,6,A68_66 ), QSLACTR_locdecstream(RMWACTR_previouslevel)));
 /* line 753: */
 /* line 754: */
 /* line 756: */
if (PQIACTR_closureonstackoption)
{ 
LNWACTR = QIMACTR_newuniquename() ;
MNWACTR_envvarname = A_HISVEC(KNWACTR,LNWACTR,7,A68_CHAR );
 /* line 757: */
 /* line 758: */
NNWACTR.data[0] = A_UNITE(ONWACTR,mode2,2,QMWACTR_envname);
QNWACTR = ' ' ;
NNWACTR.data[1] = A_UNITE(PNWACTR,mode1,1,QNWACTR);
NNWACTR.data[2] = A_UNITE(RNWACTR,mode2,2,MNWACTR_envvarname);
 /* line 759: */
TNWACTR = ';' ;
NNWACTR.data[3] = A_UNITE(SNWACTR,mode1,1,TNWACTR);
if (AQIACTR_verboseoption)
{ 
XNWACTR = VNWACTR ;
NNWACTR.data[4] = A_UNITE(WNWACTR,mode2,2,XNWACTR);
} 
else
{ 
 /* line 760: */
BOWACTR = ZNWACTR ;
NNWACTR.data[4] = A_UNITE(AOWACTR,mode2,2,BOWACTR);
} 
NNWACTR.data[5] = A_UNITE(COWACTR,mode4,4,EIAACTR_cnewline);
 /* line 761: */
(void)(MDMACTR_writecstream(A_HISVEC(DOWACTR,NNWACTR,6,A68_66 ), QSLACTR_locdecstream(RMWACTR_previouslevel)));
 /* line 763: */
 /* line 764: */
 /* line 765: */
IOWACTR = GOWACTR ;
EOWACTR.data[0] = A_UNITE(HOWACTR,mode2,2,IOWACTR);
EOWACTR.data[1] = A_UNITE(JOWACTR,mode2,2,OMWACTR_procvaluename);
NOWACTR = LOWACTR ;
EOWACTR.data[2] = A_UNITE(MOWACTR,mode2,2,NOWACTR);
EOWACTR.data[3] = A_UNITE(OOWACTR,mode2,2,IJWACTR_fnname);
SOWACTR = QOWACTR ;
EOWACTR.data[4] = A_UNITE(ROWACTR,mode2,2,SOWACTR);
EOWACTR.data[5] = A_UNITE(TOWACTR,mode2,2,MNWACTR_envvarname);
 /* line 766: */
XOWACTR = VOWACTR ;
EOWACTR.data[6] = A_UNITE(WOWACTR,mode2,2,XOWACTR);
EOWACTR.data[7] = A_UNITE(YOWACTR,mode4,4,EIAACTR_cnewline);
 /* line 767: */
 /* line 768: */
 /* line 770: */
(void)(MDMACTR_writecstream(A_HISVEC(ZOWACTR,EOWACTR,8,A68_66 ), NSLACTR_codestream(RMWACTR_previouslevel)));
} 
else
{ 
 /* line 771: */
if (OQIACTR_closuremarkoption)
{ 
EPWACTR = CPWACTR ;
APWACTR.data[0] = A_UNITE(DPWACTR,mode2,2,EPWACTR);
} 
else
{ 
 /* line 772: */
IPWACTR = GPWACTR ;
APWACTR.data[0] = A_UNITE(HPWACTR,mode2,2,IPWACTR);
} 
APWACTR.data[1] = A_UNITE(JPWACTR,mode2,2,OMWACTR_procvaluename);
NPWACTR = LPWACTR ;
APWACTR.data[2] = A_UNITE(MPWACTR,mode2,2,NPWACTR);
APWACTR.data[3] = A_UNITE(OPWACTR,mode2,2,IJWACTR_fnname);
SPWACTR = QPWACTR ;
APWACTR.data[4] = A_UNITE(RPWACTR,mode2,2,SPWACTR);
APWACTR.data[5] = A_UNITE(TPWACTR,mode2,2,QMWACTR_envname);
 /* line 773: */
XPWACTR = VPWACTR ;
APWACTR.data[6] = A_UNITE(WPWACTR,mode2,2,XPWACTR);
APWACTR.data[7] = A_UNITE(YPWACTR,mode4,4,EIAACTR_cnewline);
 /* line 774: */
 /* line 775: */
(void)(MDMACTR_writecstream(A_HISVEC(ZPWACTR,APWACTR,8,A68_66 ), NSLACTR_codestream(RMWACTR_previouslevel)));
} 
 /* line 778: */
 /* line 779: */
 /* line 780: */
EQWACTR = CQWACTR ;
AQWACTR.data[0] = A_UNITE(DQWACTR,mode2,2,EQWACTR);
 /* line 781: */
 /* line 782: */
if (AQIACTR_verboseoption)
{ 
 /* line 783: */
IQWACTR = GQWACTR ;
AQWACTR.data[1] = A_UNITE(HQWACTR,mode2,2,IQWACTR);
} 
else
{ 
MQWACTR = KQWACTR ;
AQWACTR.data[1] = A_UNITE(LQWACTR,mode2,2,MQWACTR);
} 
AQWACTR.data[2] = A_UNITE(NQWACTR,mode4,4,EIAACTR_cnewline);
 /* line 784: */
PQWACTR = '{' ;
AQWACTR.data[3] = A_UNITE(OQWACTR,mode1,1,PQWACTR);
 /* line 785: */
 /* line 786: */
if (OQIACTR_closuremarkoption)
{ 
 /* line 787: */
TQWACTR = RQWACTR ;
AQWACTR.data[4] = A_UNITE(SQWACTR,mode2,2,TQWACTR);
} 
else
{ 
XQWACTR = VQWACTR ;
AQWACTR.data[4] = A_UNITE(WQWACTR,mode2,2,XQWACTR);
} 
AQWACTR.data[5] = A_UNITE(YQWACTR,mode4,4,EIAACTR_cnewline);
 /* line 788: */
 /* line 789: */
 /* line 790: */
(void)(MDMACTR_writecstream(A_HISVEC(ZQWACTR,AQWACTR,6,A68_66 ), KSLACTR_nonlocdecstream(RMWACTR_previouslevel)));
} 
} 
A_PROC_EXIT(declarecroutine);
return;
} 
#undef NL

A68_VOID  ARWACTR_completerddec(void)
{ 
A68_INT  BRWACTR;  /* YIELD */
A68_109 * CRWACTR_rd A_UNUSED = {0};
A68_BITS  DRWACTR;  /* ADICOPS - >= */
A68_INT  ERWACTR_nonlocdecstream A_UNUSED = {0};
A68_256  FRWACTR;  /* collateral clause result */
A68_66  IRWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  JRWACTR;  /* YIELD */
A68_66  KRWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  LRWACTR;  /* OPERATORS - istruct -> vector */
A68_275  MRWACTR;  /* collateral clause result */
A68_66  PRWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  QRWACTR;  /* YIELD */
A68_VC  RRWACTR;  /* avoid structure result */
A68_66  SRWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  TRWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  URWACTR;  /* YIELD */
A68_66  VRWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  WRWACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(completerddec);
{ 
BRWACTR = ZPLACTR_currentroutine() ;
CRWACTR_rd = (&A_R1INDEX(XPKACTR_rds,BRWACTR));
 /* line 799: */
 /* line 800: */
 /* line 801: */
 /* line 803: */
DRWACTR = (*A_NILCHECK((&(A_NILCHECK(CRWACTR_rd)->Flags)))) ;
if (!A_LB_GE(DRWACTR,RQKACTR_rdglobalflag))
{ 
ERWACTR_nonlocdecstream = KSLACTR_nonlocdecstream((VRLACTR_currentlevel()-1));
 /* line 804: */
 /* line 805: */
 /* line 808: */
if (!JQLACTR_nonlocalsused())
{ 
JRWACTR = HRWACTR ;
FRWACTR.data[0] = A_UNITE(IRWACTR,mode2,2,JRWACTR);
FRWACTR.data[1] = A_UNITE(KRWACTR,mode4,4,EIAACTR_cnewline);
 /* line 809: */
(void)(MDMACTR_writecstream(A_HISVEC(LRWACTR,FRWACTR,2,A68_66 ), ERWACTR_nonlocdecstream));
} 
 /* line 810: */
 /* line 811: */
QRWACTR = ORWACTR ;
MRWACTR.data[0] = A_UNITE(PRWACTR,mode2,2,QRWACTR);
LUKACTR_rdenvname( ZPLACTR_currentroutine(), &RRWACTR );
MRWACTR.data[1] = A_UNITE(SRWACTR,mode2,2,RRWACTR);
 /* line 812: */
URWACTR = ';' ;
MRWACTR.data[2] = A_UNITE(TRWACTR,mode1,1,URWACTR);
MRWACTR.data[3] = A_UNITE(VRWACTR,mode4,4,EIAACTR_cnewline);
 /* line 813: */
 /* line 814: */
 /* line 815: */
(void)(MDMACTR_writecstream(A_HISVEC(WRWACTR,MRWACTR,4,A68_66 ), ERWACTR_nonlocdecstream));
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

A68_VOID  ESWACTR_rddec(A68_VC  Name, A68_INT  Mode, A68_181  Paramdecnos, A68_INT  Resultmode, A68_INT  Rdenno, A68_72  Environ, A68_BITS  Props)
{ 
A68_109 * FSWACTR_rd A_UNUSED = {0};
A68_INT  GSWACTR_declevel A_UNUSED = {0};
A68_BOOL  HSWACTR;  /* optbool result */
A68_BITS  ISWACTR;  /* clause result */
A68_BITS  JSWACTR_otherflags A_UNUSED = {0};
A68_BOOL  KSWACTR;  /* optbool result */
A68_BOOL  LSWACTR_global A_UNUSED = {0};
A68_109  MSWACTR;  /* collateral clause result */
A68_BITS  NSWACTR;  /* ADICOPS - >= */
A68_BOOL  OSWACTR;  /* optbool result */
A68_INT  PSWACTR;  /* YIELD */
A68_155  QSWACTR;  /* OPERATORS - simple index */
A68_INT  RSWACTR;  /* YIELD */
A68_157 * SSWACTR_keptinfo A_UNUSED = {0};
A68_BOOL  TSWACTR;  /* optbool result */
A68_BOOL  USWACTR;  /* clause result */
A68_INT  VSWACTR;  /* YIELD */
A68_LINT * WSWACTR;  /* YIELD */
A68_BITS  XSWACTR;  /* ADICOPS - >= */
A68_BITS  YSWACTR;  /* ADICOPS - >= */
A_PROC_ENTRY(rddec);
 /* line 825: */
 /* line 826: */
{ 
FSWACTR_rd = (&A_R1INDEX(XPKACTR_rds,Rdenno));
 /* line 827: */
GSWACTR_declevel = (VRLACTR_currentlevel()-1);
 /* line 828: */
 /* line 829: */
HSWACTR = A_LB_GE(Props,OCAACTR_operatorbit);
if ( HSWACTR )
{ /* line 830: */
HSWACTR = TUKACTR_standopsym(Name);
}
 /* line 831: */
if (HSWACTR)
{ 
 /* line 832: */
ISWACTR = SQKACTR_rdopflag;
} 
else
{ 
ISWACTR = OQKACTR_rdnoflags;
} 
JSWACTR_otherflags = ISWACTR;
 /* line 833: */
 /* line 834: */
KSWACTR = (GSWACTR_declevel==0);
if ( ! KSWACTR )
{KSWACTR = PRLACTR_isgloballevel(Environ);
}
LSWACTR_global = KSWACTR;
 /* line 836: */
 /* line 837: */
if (LSWACTR_global)
{ 
 /* line 838: */
MSWACTR.Mode = Mode;
 /* line 839: */
MSWACTR.Resultmode = Resultmode;
 /* line 840: */
MSWACTR.Declevel = GSWACTR_declevel;
 /* line 841: */
MSWACTR.Environ = Environ;
 /* line 842: */
MSWACTR.Name = Name;
 /* line 843: */
 /* line 844: */
NSWACTR = (*A_NILCHECK((&(A_NILCHECK(FSWACTR_rd)->Flags)))) ;
OSWACTR = (!A_LB_GE(NSWACTR,PQKACTR_rdkeptflag));
if ( ! OSWACTR )
{OSWACTR = (!LCPACTR_rscompatiblewithpreviousversion);
}
 /* line 845: */
if (OSWACTR)
{ 
 /* line 846: */
MSWACTR.Prefix = QIMACTR_newuniquename();
} 
else
{ 
{ 
PSWACTR = 1 ;
QSWACTR = (*A_NILCHECK((&(A_NILCHECK((&A_R1INDEX(RCPACTR_specs,PSWACTR)))->Keptinfo)))) ;
RSWACTR = VNVACTR_keeplistposition(Rdenno) ;
SSWACTR_keptinfo = (&A_VINDEX(QSWACTR,RSWACTR));
 /* line 848: */
 /* line 849: */
TSWACTR = (*A_NILCHECK((&(A_NILCHECK(SSWACTR_keptinfo)->Iddec))));
if ( ! TSWACTR )
{TSWACTR = (*A_NILCHECK((&(A_NILCHECK(SSWACTR_keptinfo)->Optimised))));
}
USWACTR = TSWACTR;
if (USWACTR)
{ 
MCPACTR_transcompatiblewithpreviousversi = A68_FALSE;
 /* line 850: */
 /* line 851: */
VSWACTR = 1 ;
WSWACTR = (&(A_NILCHECK((&A_R1INDEX(RCPACTR_specs,VSWACTR)))->Timeoflastchange)) ;
(void)((*A_NILCHECK(WSWACTR)) = (*A_NILCHECK((&(A_NILCHECK((&IYIACTR_config_info))->Translationtime)))));
 /* line 852: */
 /* line 853: */
 /* line 854: */
MSWACTR.Prefix = QIMACTR_newuniquename();
} 
else
{ 
 /* line 855: */
MSWACTR.Prefix = (*A_NILCHECK((&(A_NILCHECK(SSWACTR_keptinfo)->Prefix))));
} 
} 
} 
 /* line 856: */
MSWACTR.Fnprefix = RNOACTR_nulluname;
 /* line 857: */
MSWACTR.Envprefix = RNOACTR_nulluname;
 /* line 858: */
 /* line 859: */
MSWACTR.Flags = (A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(FSWACTR_rd)->Flags))))|RQKACTR_rdglobalflag)|JSWACTR_otherflags);
} 
else
{ 
 /* line 860: */
MSWACTR.Mode = Mode;
 /* line 861: */
MSWACTR.Resultmode = Resultmode;
 /* line 862: */
MSWACTR.Declevel = GSWACTR_declevel;
 /* line 863: */
MSWACTR.Environ = Environ;
 /* line 864: */
MSWACTR.Name = Name;
 /* line 865: */
MSWACTR.Prefix = QIMACTR_newuniquename();
 /* line 866: */
MSWACTR.Fnprefix = QIMACTR_newuniquename();
 /* line 867: */
MSWACTR.Envprefix = QIMACTR_newuniquename();
 /* line 868: */
 /* line 869: */
MSWACTR.Flags = (A68_BITS )((*A_NILCHECK((&(A_NILCHECK(FSWACTR_rd)->Flags))))|JSWACTR_otherflags);
} 
(*A_NILCHECK(FSWACTR_rd)) = MSWACTR;
 /* line 870: */
 /* line 871: */
 /* line 872: */
 /* line 873: */
 /* line 874: */
 /* line 875: */
 /* line 876: */
 /* line 878: */
 /* line 879: */
XSWACTR = (*A_NILCHECK((&(A_NILCHECK(FSWACTR_rd)->Flags)))) ;
YSWACTR = (*A_NILCHECK((&(A_NILCHECK(FSWACTR_rd)->Flags)))) ;
(void)(UIWACTR_declarecroutine(Rdenno, Resultmode, LSWACTR_global, A_LB_GE(YSWACTR,PQKACTR_rdkeptflag), A_LB_GE(XSWACTR,SQKACTR_rdopflag), Paramdecnos));
} 
A_PROC_EXIT(rddec);
return;
} 
#undef NL

A68_VOID  ATWACTR_labdec(A68_139  Labeldec)
{ 
A68_INT  BTWACTR_labno A_UNUSED = {0};
A68_INT  CTWACTR_status A_UNUSED = {0};
A68_BOOL  DTWACTR_notsetting A_UNUSED = {0};
A68_VC  ETWACTR_name A_UNUSED = {0};
A68_110 * FTWACTR_labinfo A_UNUSED = {0};
A68_110  GTWACTR;  /* collateral clause result */
A68_72  HTWACTR;  /* avoid structure result */
A68_BITS  JTWACTR;  /* ADICOPS - <= */
A68_INT * LTWACTR;  /* YIELD */
A68_BOOL * MTWACTR;  /* YIELD */
A68_286  NTWACTR;  /* collateral clause result */
A68_VC  OTWACTR;  /* avoid structure result */
A68_66  PTWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  STWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  TTWACTR;  /* YIELD */
A68_66  UTWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  VTWACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(labdec);
 /* line 882: */
 /* line 883: */
{ 
BTWACTR_labno = Labeldec.Labno;
 /* line 884: */
CTWACTR_status = Labeldec.Status;
 /* line 885: */
DTWACTR_notsetting = Labeldec.Notsetting;
 /* line 886: */
ETWACTR_name = Labeldec.Name;
 /* line 887: */
FTWACTR_labinfo = (&A_R1INDEX(ZPKACTR_labels,BTWACTR_labno));
 /* line 888: */
 /* line 889: */
if (DTWACTR_notsetting)
{ 
 /* line 890: */
if (CTWACTR_status==LCAACTR_announcing)
{ 
 /* line 891: */
GTWACTR.Label.Name = QIMACTR_newuniquename();
 /* line 892: */
GTWACTR.Label.Set = A68_FALSE;
 /* line 893: */
QPLACTR_currentenviron(  &HTWACTR );
GTWACTR.Environ = HTWACTR;
 /* line 894: */
GTWACTR.Name = ETWACTR_name;
 /* line 895: */
GTWACTR.Prefix = QIMACTR_newuniquename();
 /* line 897: */
GTWACTR.Flags = VQKACTR_labdeclaredflag;
 /* line 899: */
GTWACTR.Alias = 0;
(*A_NILCHECK(FTWACTR_labinfo)) = GTWACTR;
} 
else
{ 
 /* line 900: */
 /* line 901: */
if (CTWACTR_status>=MCAACTR_aliasing)
{ 
JTWACTR = (*A_NILCHECK((&(A_NILCHECK((&A_R1INDEX(ZPKACTR_labels,CTWACTR_status)))->Flags)))) ;
(void)(WXIACTR_assert(KTWACTR, A_LB_LE(VQKACTR_labdeclaredflag,JTWACTR)));
 /* line 902: */
(void)((*A_NILCHECK(FTWACTR_labinfo)) = (*A_NILCHECK((&A_R1INDEX(ZPKACTR_labels,CTWACTR_status)))));
 /* line 903: */
 /* line 904: */
 /* line 906: */
LTWACTR = (&(A_NILCHECK(FTWACTR_labinfo)->Alias)) ;
(*A_NILCHECK(LTWACTR)) = CTWACTR_status;
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
MTWACTR = (&(A_NILCHECK((&(A_NILCHECK(FTWACTR_labinfo)->Label)))->Set)) ;
(*A_NILCHECK(MTWACTR)) = A68_TRUE;
 /* line 910: */
 /* line 911: */
WSKACTR_labelfullname( BTWACTR_labno, &OTWACTR );
NTWACTR.data[0] = A_UNITE(PTWACTR,mode2,2,OTWACTR);
 /* line 912: */
TTWACTR = RTWACTR ;
NTWACTR.data[1] = A_UNITE(STWACTR,mode2,2,TTWACTR);
NTWACTR.data[2] = A_UNITE(UTWACTR,mode4,4,EIAACTR_cnewline);
 /* line 913: */
 /* line 914: */
 /* line 915: */
(void)(MDMACTR_writecstream(A_HISVEC(VTWACTR,NTWACTR,3,A68_66 ), NSLACTR_codestream(VRLACTR_currentlevel())));
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

A_STATIC A68_VOID  HUWACTR_zexternaldec(A68_VC  Name, A68_56  Prefix, A68_INT  Mode, A68_INT  Decno, A68_BOOL  Optimised, A68_BOOL  Iddec, A68_BOOL  Globalproc, A68_BOOL  Genproc, A68_BOOL  Forceuse, A68_VC  Definition, A68_VC  Rhs)
{ 
A68_BOOL  PUWACTR;  /* optbool result */
A68_BOOL  QUWACTR;  /* optbool result */
A68_108 * SUWACTR;  /* clause result */
A68_BITS  TUWACTR_idflags A_UNUSED = {0};
A68_BITS  UUWACTR;  /* clause result */
A68_BITS  VUWACTR;  /* clause result */
A68_BOOL  WUWACTR;  /* optbool result */
A68_BITS  XUWACTR;  /* clause result */
A68_BITS  YUWACTR;  /* clause result */
A68_BITS  ZUWACTR;  /* clause result */
A68_VC  AVWACTR;  /* avoid structure result */
A_PROC_ENTRY(zexternaldec);
 /* line 935: */
 /* line 937: */
{ 
 /* line 939: */
PUWACTR = (Decno<=IAAACTR_maxidno);
if ( ! PUWACTR )
{QUWACTR = (Decno>=LAAACTR_minlibid);
if ( QUWACTR )
{QUWACTR = (Decno<=MAAACTR_maxlibid);
}
PUWACTR = QUWACTR;
}
(void)(WXIACTR_assert(RUWACTR, PUWACTR));
 /* line 941: */
if (Decno<=IAAACTR_maxidno)
{ 
SUWACTR = (&A_R1INDEX(WPKACTR_ids,Decno));
} 
else
{ 
SUWACTR = (&A_R1INDEX(YPKACTR_libraryids,Decno));
} 
TUWACTR_idflags = (*A_NILCHECK((&(A_NILCHECK(SUWACTR)->Flags))));
 /* line 943: */
 /* line 944: */
 /* line 945: */
if (Optimised)
{ 
UUWACTR = HQKACTR_idoptimisedflag;
} 
else
{ 
 /* line 946: */
UUWACTR = AQKACTR_idnoflags;
} 
if (Iddec)
{ 
VUWACTR = BQKACTR_ididentityflag;
} 
else
{ 
 /* line 947: */
VUWACTR = AQKACTR_idnoflags;
} 
WUWACTR = Genproc;
if ( WUWACTR )
{WUWACTR = A_LB_GE(TUWACTR_idflags,CQKACTR_idkeptflag);
}
if (WUWACTR)
{ 
XUWACTR = KQKACTR_idkeptgenprocflag;
} 
else
{ 
 /* line 948: */
XUWACTR = AQKACTR_idnoflags;
} 
if (Globalproc)
{ 
YUWACTR = JQKACTR_idgprocflag;
} 
else
{ 
 /* line 949: */
YUWACTR = AQKACTR_idnoflags;
} 
if (Forceuse)
{ 
ZUWACTR = MQKACTR_idforceuseflag;
} 
else
{ 
ZUWACTR = AQKACTR_idnoflags;
} 
 /* line 950: */
 /* line 951: */
 /* line 952: */
LUWACTR_mybefore( Name, ' ', &AVWACTR );
(void)(LOVACTR_newidinfo(Decno, Mode, AVWACTR, Prefix, (A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )(UUWACTR|VUWACTR)|XUWACTR)|YUWACTR)|ZUWACTR), Definition, Rhs));
} 
A_PROC_EXIT(zexternaldec);
return;
} 
#undef NL

A_STATIC A68_VOID  CVWACTR_zexternalcdec(A68_INT  Decno)
{ 
A68_BOOL  EVWACTR;  /* optbool result */
A68_BOOL  FVWACTR;  /* optbool result */
A68_108 * HVWACTR;  /* clause result */
A68_108 * IVWACTR_id A_UNUSED = {0};
A68_BITS  JVWACTR;  /* ADICOPS - >= */
A68_BOOL  KVWACTR;  /* optbool result */
A68_BITS  LVWACTR;  /* ADICOPS - >= */
A68_BOOL  MVWACTR;  /* optbool result */
A68_VC  OVWACTR;  /* OPERATORS - trim index */
A68_VC  PVWACTR;  /* OPERATORS - trim index */
A68_BOOL  RVWACTR;  /* clause result */
A68_INT  SVWACTR_mode A_UNUSED = {0};
A68_BITS  TVWACTR;  /* ADICOPS - >= */
A68_BOOL  UVWACTR_optimised A_UNUSED = {0};
A68_BITS  VVWACTR;  /* ADICOPS - >= */
A68_BOOL  WVWACTR_globalproc A_UNUSED = {0};
A68_VC  XVWACTR_definition A_UNUSED = {0};
A68_VC  YVWACTR_rhs A_UNUSED = {0};
A68_256  ZVWACTR;  /* collateral clause result */
A68_66  AWWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  BWWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  CWWACTR;  /* OPERATORS - istruct -> vector */
A68_INT  DWWACTR_deprocmode A_UNUSED = {0};
A68_BOOL  EWWACTR;  /* optbool result */
A68_BOOL  FWWACTR_voidresult A_UNUSED = {0};
A68_181  GWWACTR;  /* clause result */
A68_181  HWWACTR;  /* avoid structure result */
A68_296  JWWACTR_generator;   /* proc value of non-global proc */
A68_181  OWWACTR;  /* avoid structure result */
A68_181  PWWACTR_params A_UNUSED = {0};
A68_258  QWWACTR;  /* collateral clause result */
A68_66  TWWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  UWWACTR;  /* YIELD */
A68_INT  VWWACTR;  /* clause result */
A68_VC  WWWACTR;  /* avoid structure result */
A68_66  XWWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  YWWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  ZWWACTR;  /* YIELD */
A68_VC  AXWACTR;  /* avoid structure result */
A68_66  BXWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  CXWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  DXWACTR;  /* YIELD */
A68_65  EXWACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  FXWACTR;  /* optbool result */
A68_66  IXWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  JXWACTR;  /* YIELD */
A68_65  KXWACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  LXWACTR_comma A_UNUSED = {0};
A68_INT * MXWACTR_p A_UNUSED = {0};
A68_INT  NXWACTR;  /* forall loop counter */
A68_256  OXWACTR;  /* collateral clause result */
A68_66  PXWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  QXWACTR;  /* YIELD */
A68_66  TXWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  UXWACTR;  /* YIELD */
A68_VC  VXWACTR;  /* avoid structure result */
A68_66  WXWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  XXWACTR;  /* OPERATORS - istruct -> vector */
A68_286  YXWACTR;  /* collateral clause result */
A68_66  ZXWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  AYWACTR;  /* YIELD */
A68_66  DYWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  EYWACTR;  /* YIELD */
A68_VC  FYWACTR;  /* avoid structure result */
A68_66  GYWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  HYWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  IYWACTR;  /* YIELD */
A68_65  JYWACTR;  /* OPERATORS - istruct -> vector */
A68_256  KYWACTR;  /* collateral clause result */
A68_66  NYWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  OYWACTR;  /* YIELD */
A68_66  PYWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  QYWACTR;  /* OPERATORS - istruct -> vector */
A68_269  RYWACTR;  /* collateral clause result */
A68_66  UYWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  VYWACTR;  /* YIELD */
A68_VC  WYWACTR;  /* avoid structure result */
A68_66  XYWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  YYWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  ZYWACTR;  /* YIELD */
A68_VC  AZWACTR;  /* avoid structure result */
A68_66  BZWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  CZWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  DZWACTR;  /* YIELD */
A68_66  EZWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  FZWACTR;  /* OPERATORS - istruct -> vector */
A68_256  GZWACTR;  /* collateral clause result */
A68_66  HZWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_66  IZWACTR = {0};  /* OPERATORS - mode -> union mode */
A68_65  JZWACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(zexternalcdec);
 /* line 962: */
 /* line 963: */
{ 
EVWACTR = (Decno<=IAAACTR_maxidno);
if ( ! EVWACTR )
{FVWACTR = (Decno>=LAAACTR_minlibid);
if ( FVWACTR )
{FVWACTR = (Decno<=MAAACTR_maxlibid);
}
EVWACTR = FVWACTR;
}
(void)(WXIACTR_assert(GVWACTR, EVWACTR));
 /* line 965: */
if (Decno<=IAAACTR_maxidno)
{ 
HVWACTR = (&A_R1INDEX(WPKACTR_ids,Decno));
} 
else
{ 
HVWACTR = (&A_R1INDEX(YPKACTR_libraryids,Decno));
} 
IVWACTR_id = HVWACTR;
 /* line 968: */
 /* line 969: */
 /* line 970: */
JVWACTR = (*A_NILCHECK((&(A_NILCHECK(IVWACTR_id)->Flags)))) ;
KVWACTR = A_LB_GE(JVWACTR,LQKACTR_idloadedflag);
if ( ! KVWACTR )
{ /* line 971: */
LVWACTR = (*A_NILCHECK((&(A_NILCHECK(IVWACTR_id)->Flags)))) ;
KVWACTR = A_LB_GE(LVWACTR,MQKACTR_idforceuseflag);
}
 /* line 972: */
if ( ! KVWACTR )
{MVWACTR = ((*A_NILCHECK((&(A_NILCHECK(IVWACTR_id)->Definition)))).upb>=9);
if ( MVWACTR )
{OVWACTR = (*A_NILCHECK((&(A_NILCHECK(IVWACTR_id)->Definition)))) ;
MVWACTR = A_VC_EQ(A_VTRIM(PVWACTR,(OVWACTR),A_VTSCRIPT(&(PVWACTR.upb),(OVWACTR).upb,((*A_NILCHECK((&(A_NILCHECK(IVWACTR_id)->Definition)))).upb-8),(OVWACTR).upb)),QVWACTR);
}
 /* line 973: */
KVWACTR = MVWACTR;
}
 /* line 974: */
RVWACTR = KVWACTR;
if (RVWACTR)
{ 
SVWACTR_mode = (*A_NILCHECK((&(A_NILCHECK(IVWACTR_id)->Mode))));
 /* line 975: */
TVWACTR = (*A_NILCHECK((&(A_NILCHECK(IVWACTR_id)->Flags)))) ;
UVWACTR_optimised = A_LB_GE(TVWACTR,HQKACTR_idoptimisedflag);
 /* line 976: */
VVWACTR = (*A_NILCHECK((&(A_NILCHECK(IVWACTR_id)->Flags)))) ;
WVWACTR_globalproc = A_LB_GE(VVWACTR,JQKACTR_idgprocflag);
 /* line 977: */
XVWACTR_definition = (*A_NILCHECK((&(A_NILCHECK(IVWACTR_id)->Definition))));
 /* line 978: */
YVWACTR_rhs = (*A_NILCHECK((&(A_NILCHECK(IVWACTR_id)->Rhs))));
 /* line 980: */
 /* line 981: */
 /* line 982: */
if (YVWACTR_rhs.upb>0)
{ 
ZVWACTR.data[0] = A_UNITE(AWWACTR,mode2,2,YVWACTR_rhs);
ZVWACTR.data[1] = A_UNITE(BWWACTR,mode4,4,EIAACTR_cnewline);
 /* line 983: */
(void)(MDMACTR_writecstream(A_HISVEC(CWWACTR,ZVWACTR,2,A68_66 ), GSLACTR_importsstream));
} 
 /* line 985: */
 /* line 986: */
 /* line 987: */
if (XVWACTR_definition.upb<=0)
{ 
 /* line 988: */
 /* line 989: */
if (WVWACTR_globalproc)
{ 
DWWACTR_deprocmode = A_CALLPROC(SVMACTR_deproc,(SVWACTR_mode),(SVWACTR_mode,(SVMACTR_deproc).nonlocals));
 /* line 990: */
EWWACTR = NQIACTR_nostructresultoption;
if ( EWWACTR )
{EWWACTR = VSMACTR_iscstruct(DWWACTR_deprocmode);
}
FWWACTR_voidresult = EWWACTR;
 /* line 992: */
if (NSMACTR_isprocp(SVWACTR_mode))
{ 
A_CALLPROC(AWMACTR_parameters,(SVWACTR_mode, &HWWACTR),(SVWACTR_mode, &HWWACTR,(AWMACTR_parameters).nonlocals));
GWWACTR = HWWACTR;
} 
else
{ 
A_CLOSURE( JWWACTR_generator, KWWACTR_generator, LWWACTR_generator );
A_CALLPROC(JWWACTR_generator,(A68_FALSE, &OWWACTR),(A68_FALSE, &OWWACTR,(JWWACTR_generator).nonlocals));
GWWACTR = OWWACTR;
} 
PWWACTR_params = GWWACTR;
 /* line 994: */
 /* line 995: */
UWWACTR = SWWACTR ;
QWWACTR.data[0] = A_UNITE(TWWACTR,mode2,2,UWWACTR);
if (FWWACTR_voidresult)
{ 
VWWACTR = UEAACTR_voidmode;
} 
else
{ 
VWWACTR = DWWACTR_deprocmode;
} 
XKNACTR_ctype( VWWACTR, &WWWACTR );
QWWACTR.data[1] = A_UNITE(XWWACTR,mode2,2,WWWACTR);
 /* line 996: */
ZWWACTR = ' ' ;
QWWACTR.data[2] = A_UNITE(YWWACTR,mode1,1,ZWWACTR);
UTKACTR_idfullname( Decno, &AXWACTR );
QWWACTR.data[3] = A_UNITE(BXWACTR,mode2,2,AXWACTR);
DXWACTR = '(' ;
QWWACTR.data[4] = A_UNITE(CXWACTR,mode1,1,DXWACTR);
(void)(MDMACTR_writecstream(A_HISVEC(EXWACTR,QWWACTR,5,A68_66 ), GSLACTR_importsstream));
 /* line 998: */
 /* line 999: */
FXWACTR = (PWWACTR_params.upb==0);
if ( FXWACTR )
{FXWACTR = (!FWWACTR_voidresult);
}
 /* line 1000: */
if (FXWACTR)
{ 
 /* line 1001: */
 /* line 1002: */
JXWACTR = HXWACTR ;
(void)(MDMACTR_writecstream(A_HVEC(KXWACTR,A_UNITE(IXWACTR,mode2,2,JXWACTR),A68_66 ), GSLACTR_importsstream));
} 
else
{ 
LXWACTR_comma = A68_FALSE;
 /* line 1003: */
 /* line 1004: */
NXWACTR = PWWACTR_params.upb -1;
MXWACTR_p = PWWACTR_params.data;
for (;NXWACTR-- >= 0;
(MXWACTR_p++
) )
{
 /* line 1005: */
if (LXWACTR_comma)
{ 
QXWACTR = ',' ;
OXWACTR.data[0] = A_UNITE(PXWACTR,mode1,1,QXWACTR);
} 
else
{ 
UXWACTR = SXWACTR ;
OXWACTR.data[0] = A_UNITE(TXWACTR,mode2,2,UXWACTR);
} 
WLNACTR_ctaggedtype( (*A_NILCHECK(MXWACTR_p)), &VXWACTR );
OXWACTR.data[1] = A_UNITE(WXWACTR,mode2,2,VXWACTR);
(void)(MDMACTR_writecstream(A_HISVEC(XXWACTR,OXWACTR,2,A68_66 ), GSLACTR_importsstream));
 /* line 1006: */
 /* line 1007: */
LXWACTR_comma = A68_TRUE;
}
 /* line 1009: */
 /* line 1010: */
 /* line 1011: */
if (FWWACTR_voidresult)
{ 
if (LXWACTR_comma)
{ 
AYWACTR = ',' ;
YXWACTR.data[0] = A_UNITE(ZXWACTR,mode1,1,AYWACTR);
} 
else
{ 
EYWACTR = CYWACTR ;
YXWACTR.data[0] = A_UNITE(DYWACTR,mode2,2,EYWACTR);
} 
XKNACTR_ctype( DWWACTR_deprocmode, &FYWACTR );
YXWACTR.data[1] = A_UNITE(GYWACTR,mode2,2,FYWACTR);
IYWACTR = '*' ;
YXWACTR.data[2] = A_UNITE(HYWACTR,mode1,1,IYWACTR);
 /* line 1012: */
 /* line 1013: */
(void)(MDMACTR_writecstream(A_HISVEC(JYWACTR,YXWACTR,3,A68_66 ), GSLACTR_importsstream));
} 
} 
 /* line 1015: */
OYWACTR = MYWACTR ;
KYWACTR.data[0] = A_UNITE(NYWACTR,mode2,2,OYWACTR);
KYWACTR.data[1] = A_UNITE(PYWACTR,mode4,4,EIAACTR_cnewline);
 /* line 1017: */
 /* line 1018: */
(void)(MDMACTR_writecstream(A_HISVEC(QYWACTR,KYWACTR,2,A68_66 ), GSLACTR_importsstream));
} 
else
{ 
 /* line 1019: */
if (!UVWACTR_optimised)
{ 
 /* line 1020: */
VYWACTR = TYWACTR ;
RYWACTR.data[0] = A_UNITE(UYWACTR,mode2,2,VYWACTR);
BLNACTR_cvartype( (*A_NILCHECK((&(A_NILCHECK(YQKACTR_get_idinfo(Decno))->Cvariabletype)))), &WYWACTR );
RYWACTR.data[1] = A_UNITE(XYWACTR,mode2,2,WYWACTR);
 /* line 1021: */
ZYWACTR = ' ' ;
RYWACTR.data[2] = A_UNITE(YYWACTR,mode1,1,ZYWACTR);
UTKACTR_idfullname( Decno, &AZWACTR );
RYWACTR.data[3] = A_UNITE(BZWACTR,mode2,2,AZWACTR);
DZWACTR = ';' ;
RYWACTR.data[4] = A_UNITE(CZWACTR,mode1,1,DZWACTR);
RYWACTR.data[5] = A_UNITE(EZWACTR,mode4,4,EIAACTR_cnewline);
 /* line 1022: */
 /* line 1023: */
 /* line 1024: */
(void)(MDMACTR_writecstream(A_HISVEC(FZWACTR,RYWACTR,6,A68_66 ), GSLACTR_importsstream));
} 
} 
} 
else
{ 
GZWACTR.data[0] = A_UNITE(HZWACTR,mode2,2,XVWACTR_definition);
GZWACTR.data[1] = A_UNITE(IZWACTR,mode4,4,EIAACTR_cnewline);
 /* line 1025: */
 /* line 1026: */
(void)(MDMACTR_writecstream(A_HISVEC(JZWACTR,GZWACTR,2,A68_66 ), GSLACTR_importsstream));
} 
} 
} 
A_PROC_EXIT(zexternalcdec);
return;
} 
#undef NL

A68_VOID  KZWACTR_initialiseidentifiers(void)
{ 
A68_112  LZWACTR;  /* procedure value */
A68_75  MZWACTR;  /* procedure value */
A_PROC_ENTRY(initialiseidentifiers);
{ 
LZWACTR.fn.fn_global = HUWACTR_zexternaldec;
LZWACTR.nonlocals = A68_NIL;
LXKACTR_externaldec = LZWACTR;
 /* line 1032: */
 /* line 1033: */
MZWACTR.fn.fn_global = CVWACTR_zexternalcdec;
MZWACTR.nonlocals = A68_NIL;
MXKACTR_externalcdec = MZWACTR;
} 
A_PROC_EXIT(initialiseidentifiers);
return;
} 
#undef NL

A68_INT  OZWACTR_leveloflabel(A68_INT  Labno)
{ 
A68_INT  PZWACTR;  /* clause result */
A_PROC_ENTRY(leveloflabel);
 /* line 1036: */
PZWACTR = (*A_NILCHECK((&(A_NILCHECK((&(A_NILCHECK((&A_R1INDEX(ZPKACTR_labels,Labno)))->Environ)))->Level))));
A_PROC_EXIT(leveloflabel);
return( PZWACTR );
} 
#undef NL

A68_VOID  RZWACTR_environoflabel(A68_INT  Labno, A68_72  *ReturnedValue)
{ 
A68_72  SZWACTR;  /* clause result */
A_PROC_ENTRY(environoflabel);
 /* line 1039: */
SZWACTR = (*A_NILCHECK((&(A_NILCHECK((&A_R1INDEX(ZPKACTR_labels,Labno)))->Environ))));
A_PROC_EXIT(environoflabel);
*ReturnedValue = (SZWACTR);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 5: */
 /* line 7: */
void YMVACTR(void)   /* initialise DECS identifiers */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel","-dir",".","identifiers.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/vak/Project/Algol/Algol-68RS-Source/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/vak/Project/Algol/Algol-68RS-Source/a68config/a68config.m","./values.m","./uniquenameserver.m","./unionaids.m","./moduletracer.m","./modes.m","./incmode.m","./incinstallation.m","./modules.m","./incimperatives.m","./incid.m","./idtable.m","./evaluator.m","./environment.m","./environ.m","./denotations.m","./coutput.m","./centities.m","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config A_UNUSED;
/* --- end of configuration information */
A68_127  CCWACTR;  /* avoid structure result */
A68_127 * DCWACTR;  /* YIELD */
A68_90  JCWACTR;  /* avoid structure result */
A68_90 * KCWACTR;  /* YIELD */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
OUPACTR();   /* USE values */
RHMACTR();   /* USE uniquenameserver */
DVQACTR();   /* USE unionaids */
BCHACTR();   /* USE moduletracer */
DNMACTR();   /* USE modes */
ZDAACTR();   /* USE incmode */
ODAACTR();   /* USE incinstallation */
ANOACTR();   /* USE modules */
UAAACTR();   /* USE incimperatives */
BAAACTR();   /* USE incid */
PPKACTR();   /* USE idtable */
VGVACTR();   /* USE evaluator */
HPIACTR();   /* USE environment */
BPLACTR();   /* USE environ */
LLJACTR();   /* USE denotations */
PTLACTR();   /* USE coutput */
THAACTR();   /* USE centities */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/identifiers.a68";
A_config.translation_time = "Thu Nov  5 21:56:13 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "XMVACTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 21:56:13 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS identifiers);
(void)(UEAALIB_a68config(LGAALIB_configinfo, CNVACTR));
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
ZBWACTR_generator( A68_FALSE, &CCWACTR );
DCWACTR = A_LOC(A68_127 ) ;
(void)((*A_NILCHECK(DCWACTR)) = CCWACTR) ;
ECWACTR_levelprototype = DCWACTR;
 /* line 538: */
GCWACTR_generator( A68_FALSE, &JCWACTR );
KCWACTR = A_LOC(A68_90 ) ;
(void)((*A_NILCHECK(KCWACTR)) = JCWACTR) ;
LCWACTR_levelsetjmp = KCWACTR;
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
