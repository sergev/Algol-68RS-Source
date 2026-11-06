/* UNAME:NLVACTR */
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
A_ISTRUCT(struct A68t66 ,7,A68t257);
typedef struct A68t257  A68_257 ;    /* STRUCT 7 MODE66 */
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
A_ISTRUCT(A68_CHAR ,25,A68t271);
typedef struct A68t271  A68_271 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(struct A68t66 ,4,A68t272);
typedef struct A68t272  A68_272 ;    /* STRUCT 4 MODE66 */
A_ISTRUCT(A68_CHAR ,16,A68t273);
typedef struct A68t273  A68_273 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t274);
typedef struct A68t274  A68_274 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,17,A68t275);
typedef struct A68t275  A68_275 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(struct A68t66 ,10,A68t276);
typedef struct A68t276  A68_276 ;    /* STRUCT 10 MODE66 */

A_PROCEDURE(A68_VOID ,A68t277,(A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t181 ),(A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,struct A68t181 ,void *));
typedef struct A68t277  A68_277 ;    /* PROC(INT,INT,BOOL,BOOL,BOOL,REF MODE181) VOID */
A_VECTOR(A68_VC ,A68t278);
typedef struct A68t278  A68_278 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t279,(A68_BOOL ,struct A68t278 *),(A68_BOOL ,struct A68t278 *,void *));
typedef struct A68t279  A68_279 ;    /* PROC(BOOL) MODE278 */
A_ISTRUCT(struct A68t66 ,3,A68t280);
typedef struct A68t280  A68_280 ;    /* STRUCT 3 MODE66 */
A_ISTRUCT(A68_CHAR ,15,A68t281);
typedef struct A68t281  A68_281 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,38,A68t282);
typedef struct A68t282  A68_282 ;    /* STRUCT 38 CHAR */
A_ISTRUCT(A68_CHAR ,42,A68t283);
typedef struct A68t283  A68_283 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(struct A68t66 ,8,A68t284);
typedef struct A68t284  A68_284 ;    /* STRUCT 8 MODE66 */
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
extern A68_VOID  GZPACTR_getcfragment(struct A68t98 *,A68_VC *);
extern A68_BITS  PKJACTR_defaultinfo;
#define QKJACTR_constant 0X1U
#define TKJACTR_nonloc 0X8U
#define WKJACTR_isnil 0X40U
extern A68_BOOL  UVPACTR_hasattribute(struct A68t98 *,A68_BITS );
extern A68_VOID  NDQACTR_bracketcfragment(struct A68t98 *,A68_VC *);
/* --- End of imports from values --- */


/* --- Imports from uniquenameserver --- */
extern A68_56  QIMACTR_newuniquename(void);
/* --- End of imports from uniquenameserver --- */


/* --- Imports from unionaids --- */
extern A68_INT  SVQACTR_findints(struct A68t181 ,struct A68t181 );
extern A68_VOID  IWQACTR_uniontouniontable(struct A68t181 ,struct A68t181 ,A68_VC *);
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
extern A68_117  UBPACTR_keptdecnos;
extern A68_56  DNOACTR_nulluname;
extern A68_BOOL  XBPACTR_rscompatiblewithpreviousversion;
extern A68_177  DCPACTR_specs;
extern A68_BOOL  YBPACTR_transcompatiblewithpreviousversi;
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
extern A68_VOID  ILVACTR_evaluatestack(struct A68t105 **);
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
extern void AUPACTR(void);   /* values */
extern void RHMACTR(void);   /* uniquenameserver */
extern void HUQACTR(void);   /* unionaids */
extern void BCHACTR(void);   /* moduletracer */
extern void DNMACTR(void);   /* modes */
extern void ZDAACTR(void);   /* incmode */
extern void ODAACTR(void);   /* incinstallation */
extern void MMOACTR(void);   /* modules */
extern void UAAACTR(void);   /* incimperatives */
extern void BAAACTR(void);   /* incid */
extern void PPKACTR(void);   /* idtable */
extern void LFVACTR(void);   /* evaluator */
extern void HPIACTR(void);   /* environment */
extern void BPLACTR(void);   /* environ */
extern void LLJACTR(void);   /* denotations */
extern void PTLACTR(void);   /* coutput */
extern void THAACTR(void);   /* centities */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_241   RLVACTR = {"$Id: identifiers.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,SLVACTR,RLVACTR,61)
static A68_243   WLVACTR = {"identifiers"}; 
A_GISVEC(A68_VC ,XLVACTR,WLVACTR,11)
static A68_244   YLVACTR = {"identifiers("}; 
static A68_245   ZLVACTR = {"): "}; 
A_GISVEC(A68_VC ,AMVACTR,YLVACTR,12)
A_GISVEC(A68_VC ,CMVACTR,ZLVACTR,3)
static A68_247   FMVACTR = {"dummy dec"}; 
A_GISVEC(A68_VC ,GMVACTR,FMVACTR,9)
static A68_248   RMVACTR = {"RS/trans keeplist inconsistency"}; 
A_GISVEC(A68_VC ,SMVACTR,RMVACTR,31)
static A68_250   LOVACTR = {""}; 
A_GISVEC(A68_VC ,NOVACTR,LOVACTR,0)
static A68_252   OPVACTR = {"#define "}; 
A_GISVEC(A68_VC ,PPVACTR,OPVACTR,8)
static A68_56   DQVACTR = {"extern "}; 
static A68_245   FQVACTR = {"();"}; 
A_GISVEC(A68_VC ,JQVACTR,FQVACTR,3)
A_GISVEC(A68_VC ,NQVACTR,DQVACTR,7)
static A68_254   RQVACTR = {"/* no definition of ALIEN supplied for "}; 
A_GISVEC(A68_VC ,SQVACTR,RQVACTR,39)
static A68_245   TQVACTR = {" */"}; 
A_GISVEC(A68_VC ,UQVACTR,TQVACTR,3)
static A68_252   TRVACTR = {"#define "}; 
A_GISVEC(A68_VC ,URVACTR,TRVACTR,8)
static A68_250   USVACTR = {""}; 
A_GISVEC(A68_VC ,VSVACTR,USVACTR,0)
static A68_56   YSVACTR = {"static "}; 
A_GISVEC(A68_VC ,ZSVACTR,YSVACTR,7)
static A68_56   LTVACTR = {" /* OP "}; 
static A68_245   MTVACTR = {" */"}; 
A_GISVEC(A68_VC ,NTVACTR,LTVACTR,7)
A_GISVEC(A68_VC ,OTVACTR,MTVACTR,3)
static A68_250   RTVACTR = {""}; 
A_GISVEC(A68_VC ,STVACTR,RTVACTR,0)
static A68_245   AUVACTR = {" = "}; 
A_GISVEC(A68_VC ,BUVACTR,AUVACTR,3)
#define EVVACTR_identity 1
#define FVVACTR_variable 2
#define GVVACTR_formalparam 3
#define HVVACTR_forcontrol 4
#define IVVACTR_initialisedvar 5
#define JVVACTR_caseconformity 6
#define KVVACTR_forallcontrol 7
#define LVVACTR_dummy 8
#define RVVACTR_noinitialvalue (A68_98 *)A68_NIL
static A68_260   EWVACTR = {"ccdec not handled here"}; 
A_GISVEC(A68_VC ,FWVACTR,EWVACTR,22)
static A68_261   PWVACTR = {"This transiddec type should not occur"}; 
A_GISVEC(A68_VC ,QWVACTR,PWVACTR,37)
static A68_263   VWVACTR = {"ccdec: not a choice dec"}; 
A_GISVEC(A68_VC ,WWVACTR,VWVACTR,23)
static A68_264   CXVACTR = {".data.mode"}; 
A_GISVEC(A68_VC ,EXVACTR,CXVACTR,10)
static A68_252   HYVACTR = {"A_UNCPY("}; 
A_GISVEC(A68_VC ,IYVACTR,HYVACTR,8)
static A68_268   PYVACTR = {");"}; 
A_GISVEC(A68_VC ,QYVACTR,PYVACTR,2)
static A68_247   XYVACTR = {".mode -= "}; 
A_GISVEC(A68_VC ,YYVACTR,XYVACTR,9)
static A68_270   OZVACTR = {".mode = \"\\000"}; 
A_GISVEC(A68_VC ,PZVACTR,OZVACTR,13)
static A68_268   TZVACTR = {"\"["}; 
A_GISVEC(A68_VC ,UZVACTR,TZVACTR,2)
static A68_56   YZVACTR = {".mode];"}; 
A_GISVEC(A68_VC ,ZZVACTR,YZVACTR,7)
static A68_271   EAWACTR = {"ccdec: invalid mode index"}; 
A_GISVEC(A68_VC ,FAWACTR,EAWACTR,25)
static A68_244   NAWACTR = {"A68_jmp_buf "}; 
A_GISVEC(A68_VC ,OAWACTR,NAWACTR,12)
static A68_273   ZAWACTR = {"if ( sigsetjmp( "}; 
A_GISVEC(A68_VC ,ABWACTR,ZAWACTR,16)
static A68_274   DBWACTR = {".label"}; 
A_GISVEC(A68_VC ,FBWACTR,DBWACTR,6)
static A68_243   IBWACTR = {",1) ) goto "}; 
A_GISVEC(A68_VC ,JBWACTR,IBWACTR,11)
#define VBWACTR_idtype 1
#define WBWACTR_rdtype 2
#define XBWACTR_libtype 3
#define YBWACTR_labtype 4
static A68_254   FCWACTR = {"IDENTIFIERS - library ids not supported"}; 
A_GISVEC(A68_VC ,GCWACTR,FCWACTR,39)
static A68_148   ICWACTR = {"IDENTIFIERS - invalid type of id"}; 
A_GISVEC(A68_VC ,JCWACTR,ICWACTR,32)
static A68_245   QDWACTR = {"(( "}; 
A_GISVEC(A68_VC ,RDWACTR,QDWACTR,3)
static A68_56   WDWACTR = {" * ) ( "}; 
A_GISVEC(A68_VC ,XDWACTR,WDWACTR,7)
static A68_275   CEWACTR = {".nonlocals )) -> "}; 
A_GISVEC(A68_VC ,DEWACTR,CEWACTR,17)
static A68_245   HEWACTR = {" = "}; 
A_GISVEC(A68_VC ,IEWACTR,HEWACTR,3)
static A68_250   KGWACTR = {""}; 
A_GISVEC(A68_VC ,LGWACTR,KGWACTR,0)
static A68_247   OGWACTR = {"A_STATIC "}; 
A_GISVEC(A68_VC ,PGWACTR,OGWACTR,9)
static A68_40   AHWACTR = {"void"}; 
A_GISVEC(A68_VC ,BHWACTR,AHWACTR,4)
static A68_268   SHWACTR = {", "}; 
A_GISVEC(A68_VC ,THWACTR,SHWACTR,2)
static A68_268   EIWACTR = {", "}; 
A_GISVEC(A68_VC ,FIWACTR,EIWACTR,2)
static A68_250   IIWACTR = {""}; 
A_GISVEC(A68_VC ,JIWACTR,IIWACTR,0)
static A68_281   OIWACTR = {" *ReturnedValue"}; 
A_GISVEC(A68_VC ,PIWACTR,OIWACTR,15)
static A68_268   VIWACTR = {", "}; 
A_GISVEC(A68_VC ,WIWACTR,VIWACTR,2)
static A68_250   ZIWACTR = {""}; 
A_GISVEC(A68_VC ,AJWACTR,ZIWACTR,0)
static A68_281   DJWACTR = {"void *NonLocals"}; 
A_GISVEC(A68_VC ,EJWACTR,DJWACTR,15)
static A68_275   TJWACTR = {"#define NL(x) ((("}; 
A_GISVEC(A68_VC ,UJWACTR,TJWACTR,17)
static A68_275   YJWACTR = {" *)NonLocals)->x)"}; 
A_GISVEC(A68_VC ,ZJWACTR,YJWACTR,17)
static A68_282   RKWACTR = {"   /* proc value of non-global proc */"}; 
A_GISVEC(A68_VC ,SKWACTR,RKWACTR,38)
static A68_250   VKWACTR = {""}; 
A_GISVEC(A68_VC ,WKWACTR,VKWACTR,0)
static A68_283   LLWACTR = {"  /* proc non-locals allocated on stack */"}; 
A_GISVEC(A68_VC ,MLWACTR,LLWACTR,42)
static A68_250   PLWACTR = {""}; 
A_GISVEC(A68_VC ,QLWACTR,PLWACTR,0)
static A68_275   WLWACTR = {"A_STACK_CLOSURE( "}; 
A_GISVEC(A68_VC ,XLWACTR,WLWACTR,17)
static A68_268   BMWACTR = {", "}; 
A_GISVEC(A68_VC ,CMWACTR,BMWACTR,2)
static A68_268   GMWACTR = {", "}; 
A_GISVEC(A68_VC ,HMWACTR,GMWACTR,2)
static A68_245   LMWACTR = {" );"}; 
A_GISVEC(A68_VC ,MMWACTR,LMWACTR,3)
static A68_285   SMWACTR = {"A_MARKED_CLOSURE( "}; 
A_GISVEC(A68_VC ,TMWACTR,SMWACTR,18)
static A68_243   WMWACTR = {"A_CLOSURE( "}; 
A_GISVEC(A68_VC ,XMWACTR,WMWACTR,11)
static A68_268   BNWACTR = {", "}; 
A_GISVEC(A68_VC ,CNWACTR,BNWACTR,2)
static A68_268   GNWACTR = {", "}; 
A_GISVEC(A68_VC ,HNWACTR,GNWACTR,2)
static A68_245   LNWACTR = {" );"}; 
A_GISVEC(A68_VC ,MNWACTR,LNWACTR,3)
static A68_286   SNWACTR = {"typedef struct"}; 
A_GISVEC(A68_VC ,TNWACTR,SNWACTR,14)
static A68_248   WNWACTR = {"   /* env of non-global proc */"}; 
A_GISVEC(A68_VC ,XNWACTR,WNWACTR,31)
static A68_250   AOWACTR = {""}; 
A_GISVEC(A68_VC ,BOWACTR,AOWACTR,0)
static A68_286   HOWACTR = {" A68_INT mark;"}; 
A_GISVEC(A68_VC ,IOWACTR,HOWACTR,14)
static A68_250   LOWACTR = {""}; 
A_GISVEC(A68_VC ,MOWACTR,LOWACTR,0)
static A68_264   XOWACTR = {"int dummy;"}; 
A_GISVEC(A68_VC ,YOWACTR,XOWACTR,10)
static A68_268   EPWACTR = {"} "}; 
A_GISVEC(A68_VC ,FPWACTR,EPWACTR,2)
static A68_289   ZQWACTR = {"IDENTIFIERS - should be aliasing to initialised label"}; 
A_GISVEC(A68_VC ,BRWACTR,ZQWACTR,53)
static A68_290   DSWACTR = {"external dec: invalid decno"}; 
A_GISVEC(A68_VC ,GSWACTR,DSWACTR,27)
static A68_291   SSWACTR = {"external c dec: invalid decno"}; 
A_GISVEC(A68_VC ,VSWACTR,SSWACTR,29)
static A68_247   CTWACTR = {"A_prelude"}; 
A_GISVEC(A68_VC ,FTWACTR,CTWACTR,9)
static A68_56   GUWACTR = {"extern "}; 
A_GISVEC(A68_VC ,HUWACTR,GUWACTR,7)
static A68_40   VUWACTR = {"void"}; 
A_GISVEC(A68_VC ,WUWACTR,VUWACTR,4)
static A68_250   GVWACTR = {""}; 
A_GISVEC(A68_VC ,HVWACTR,GVWACTR,0)
static A68_250   QVWACTR = {""}; 
A_GISVEC(A68_VC ,RVWACTR,QVWACTR,0)
static A68_268   AWWACTR = {");"}; 
A_GISVEC(A68_VC ,BWWACTR,AWWACTR,2)
static A68_56   HWWACTR = {"extern "}; 
A_GISVEC(A68_VC ,IWWACTR,HWWACTR,7)
typedef struct   /* env of non-global proc */
{
A68_INT  Decno;
A_PAD_INT(PAD_162)
A68_98 * Initvalue;
A68_BOOL  FPVACTR_kept;
A_PAD_BOOL(PAD_163)
A68_108 * YOVACTR_idinfo;
} MPVACTR_optidentity;
typedef struct   /* env of non-global proc */
{
A68_BOOL  CPVACTR_global;
A_PAD_BOOL(PAD_164)
A68_108 * YOVACTR_idinfo;
A68_INT  Decno;
A_PAD_INT(PAD_165)
A68_INT  HPVACTR_decstream;
A_PAD_INT(PAD_166)
A68_98 * Initvalue;
A68_INT  IPVACTR_codestream;
A_PAD_INT(PAD_167)
} QSVACTR_declarecvariable;
typedef struct   /* env of non-global proc */
{
A68_INT  FFWACTR_a68paramcount;
A_PAD_INT(PAD_168)
} PFWACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Global;
A_PAD_BOOL(PAD_169)
A68_BOOL  Kept;
A_PAD_BOOL(PAD_170)
A68_INT  DFWACTR_cresultmode;
A_PAD_INT(PAD_171)
A68_VC  LFWACTR_fnname;
A68_INT  GFWACTR_cparamcount;
A_PAD_INT(PAD_172)
A68_INT  FFWACTR_a68paramcount;
A_PAD_INT(PAD_173)
A68_278  UFWACTR_paramtypes;
A68_278  SFWACTR_paramnames;
A68_BOOL  BFWACTR_usetempforresult;
A_PAD_BOOL(PAD_174)
A68_INT  Resultmode;
A_PAD_INT(PAD_175)
A68_BOOL  EFWACTR_fulldec;
A_PAD_BOOL(PAD_176)
} HGWACTR_prototype;
typedef struct   /* env of non-global proc */
{
int dummy;
} AUWACTR_generator;

A_STATIC A68_VOID  VLVACTR_debugmessage(A68_INT  Level, A68_VC  M);

A68_VOID  EMVACTR_initialdummydec(A68_130  Dummydec);

A_STATIC A68_INT  LMVACTR_keeplistposition(A68_INT  Decno);

A_STATIC A68_VOID  BNVACTR_newidinfo(A68_INT  Decno, A68_INT  Mode, A68_VC  A68name, A68_56  Prefix, A68_BITS  Flags, A68_VC  Definition, A68_VC  Rhs);

A_STATIC A68_VOID  XOVACTR_outputcdeclaration(A68_INT  Decno, A68_98 * Initvalue);

A_STATIC A68_VOID  LPVACTR_optidentity(A68_VC  Rhs, void *NonLocals);

A_STATIC A68_VOID  PSVACTR_declarecvariable(void *NonLocals);

A68_VOID  DVVACTR_iddec(A68_130  Identifierdec, A68_105 ** Valuestack);

A68_VOID  UWVACTR_ccdec(A68_130  Choicedec, A68_98 * Enquiry, A68_INT  Modeindex);

A_STATIC A68_98 * KXVACTR_assignment(A68_98 * IXVACTR_anonymous, A68_98  JXVACTR_anonymous);

A_STATIC A68_99 * PXVACTR_assignment(A68_99 * NXVACTR_anonymous, A68_99  OXVACTR_anonymous);

A68_VOID  HAWACTR_declarenonlocallabel(A68_INT  Labno);

A68_VOID  UBWACTR_nonlocaldec(A68_INT  Idno, A68_INT  Level);

A_STATIC A68_VOID  XEWACTR_declarecroutine(A68_INT  Rdenno, A68_INT  Resultmode, A68_BOOL  Global, A68_BOOL  Kept, A68_BOOL  Opsym, A68_181  Params);

A_STATIC A68_VOID  OFWACTR_generator(A68_BOOL  MFWACTR_anonymous, A68_278  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GGWACTR_prototype(A68_INT  Protostream, void *NonLocals);

A68_VOID  ROWACTR_completerddec(void);

A68_VOID  VPWACTR_rddec(A68_VC  Name, A68_INT  Mode, A68_181  Paramdecnos, A68_INT  Resultmode, A68_INT  Rdenno, A68_72  Environ, A68_BITS  Props);

A68_VOID  RQWACTR_labdec(A68_139  Labeldec);

A_STATIC A68_VOID  WRWACTR_zexternaldec(A68_VC  Name, A68_56  Prefix, A68_INT  Mode, A68_INT  Decno, A68_BOOL  Optimised, A68_BOOL  Iddec, A68_BOOL  Globalproc, A68_BOOL  Genproc, A68_BOOL  Forceuse, A68_VC  Definition, A68_VC  Rhs);

A_STATIC A68_VOID  ASWACTR_mybefore(A68_VC  S, A68_CHAR  C, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  RSWACTR_zexternalcdec(A68_INT  Decno);

A_STATIC A68_VOID  ZTWACTR_generator(A68_BOOL  XTWACTR_anonymous, A68_181  *ReturnedValue, void *NonLocals);

A68_VOID  ZWWACTR_initialiseidentifiers(void);

A68_INT  DXWACTR_leveloflabel(A68_INT  Labno);

A68_VOID  GXWACTR_environoflabel(A68_INT  Labno, A68_72  *ReturnedValue);

A_STATIC A68_99 * PXVACTR_assignment(A68_99 * NXVACTR_anonymous, A68_99  OXVACTR_anonymous)
{ 
A68_99  QXVACTR;  /* united object - for case conformity */
A68_VC  RXVACTR_anonymous;
A68_VC  SXVACTR;  /* OPERATORS - copy to flex */
A68_267 * TXVACTR;  /* YIELD */
A68_99 * UXVACTR;  /* clause result */
{ 
(*NXVACTR_anonymous) = OXVACTR_anonymous;
QXVACTR = OXVACTR_anonymous ;
switch ( QXVACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
RXVACTR_anonymous = (QXVACTR.data.mode6);
TXVACTR = &(NXVACTR_anonymous-> data.mode6) ;
(*TXVACTR) = A_VCOPY(RXVACTR_anonymous,SXVACTR,A68_CHAR );
break;
default: 
/*SKIP*/;
break;
} 
UXVACTR = NXVACTR_anonymous;
} 
return( UXVACTR );
} 
#undef NL

A_STATIC A68_VOID  LPVACTR_optidentity(A68_VC  Rhs, void *NonLocals)
#define NL(x) (((MPVACTR_optidentity *)NonLocals)->x)
{ 
A68_253  NPVACTR;  /* collateral clause result */
A68_VC  QPVACTR;  /* avoid structure result */
A68_VC  RPVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_36  TPVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  UPVACTR;  /* avoid structure result */
A68_VC  VPVACTR;  /* avoid structure result */
A68_VC  SPVACTR_definition;
A68_99  WPVACTR;  /* united object - for case conformity */
A68_101  XPVACTR_id;
A68_BOOL  YPVACTR_aliendec;
A68_108 * ZPVACTR;  /* clause result */
A68_108 * AQVACTR_rhsidinfo;
A68_BITS * BQVACTR;  /* YIELD */
A68_VC  CQVACTR;  /* clause result */
A68_BITS  EQVACTR;  /* ADICOPS - >= */
A68_VC  GQVACTR;  /* clause result */
A68_VC  HQVACTR;  /* avoid structure result */
A68_VC  IQVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  KQVACTR;  /* avoid structure result */
A68_VC  LQVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  MQVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  OQVACTR;  /* avoid structure result */
A68_85  PQVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_255  QQVACTR;  /* collateral clause result */
A68_36  VQVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  WQVACTR;  /* avoid structure result */
A68_VC  XQVACTR;  /* avoid structure result */
A68_VC * YQVACTR;  /* YIELD */
A68_BOOL  ZQVACTR;  /* optbool result */
A68_INT  ARVACTR;  /* YIELD */
A68_155  BRVACTR;  /* OPERATORS - simple index */
A68_INT  CRVACTR;  /* YIELD */
A68_157 * DRVACTR_keptinfo;
A68_BOOL  ERVACTR;  /* optbool result */
A68_BOOL  FRVACTR;  /* clause result */
A68_INT  GRVACTR;  /* YIELD */
A68_LINT * HRVACTR;  /* YIELD */
A68_56 * IRVACTR;  /* YIELD */
A68_255  JRVACTR;  /* collateral clause result */
A68_VC  KRVACTR;  /* OPERATORS - istruct -> vector */
A68_56  LRVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  MRVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  NRVACTR;  /* avoid structure result */
A68_36  ORVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  PRVACTR;  /* avoid structure result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} QRVACTR; 
A68_VC * RRVACTR;  /* YIELD */
A68_253  SRVACTR;  /* collateral clause result */
A68_VC  VRVACTR;  /* avoid structure result */
A68_VC  WRVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_36  XRVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  YRVACTR;  /* avoid structure result */
A68_VC  ZRVACTR;  /* avoid structure result */
A68_256  ASVACTR;  /* collateral clause result */
A68_66  BSVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  CSVACTR;  /* YIELD */
A68_66  DSVACTR;  /* OPERATORS - mode -> union mode */
A68_65  ESVACTR;  /* OPERATORS - istruct -> vector */
A68_INT * FSVACTR;  /* YIELD */
A68_BITS * GSVACTR;  /* YIELD */
A68_VC  HSVACTR;  /* avoid structure result */
A68_VC * ISVACTR;  /* YIELD */
A68_BITS * JSVACTR;  /* YIELD */
A68_256  KSVACTR;  /* collateral clause result */
A68_66  LSVACTR;  /* OPERATORS - mode -> union mode */
A68_66  MSVACTR;  /* OPERATORS - mode -> union mode */
A68_65  NSVACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(optidentity);
 /* line 198: */
 /* line 199: */
{ 
NPVACTR.data[0] = PPVACTR;
UTKACTR_idfullname( NL(Decno), &QPVACTR );
NPVACTR.data[1] = QPVACTR;
NPVACTR.data[2] = A_HVEC(RPVACTR,' ',A68_CHAR );
NPVACTR.data[3] = Rhs;
JDAAOSF_concat( A_HISVEC(TPVACTR,NPVACTR,4,A68_VC ), &UPVACTR );
ZCAAOSF_makervc( UPVACTR, &VPVACTR );
SPVACTR_definition = VPVACTR;
 /* line 201: */
 /* line 202: */
WPVACTR = (*(&(NL(Initvalue)->Extra))) ;
switch ( WPVACTR.mode )
{ 
case 4: /* STRUCT(INT)  */
XPVACTR_id = (WPVACTR.data.mode4);
 /* line 203: */
 /* line 204: */
{ 
YPVACTR_aliendec = A68_FALSE;
 /* line 205: */
 /* line 206: */
 /* line 207: */
if ( (XPVACTR_id.Idno==VPKACTR_alienidno) )
{ 
YPVACTR_aliendec = A68_TRUE;
 /* line 208: */
ZPVACTR = (&UPKACTR_alienidinfo);
} 
else
{ 
 /* line 209: */
ZPVACTR = YQKACTR_get_idinfo(XPVACTR_id.Idno);
} 
AQVACTR_rhsidinfo = ZPVACTR;
 /* line 212: */
 /* line 213: */
 /* line 214: */
if ( NL(FPVACTR_kept) )
{ 
 /* line 215: */
BQVACTR = (&(AQVACTR_rhsidinfo->Flags)) ;
(*BQVACTR) = (A68_BITS )((*(&(AQVACTR_rhsidinfo->Flags)))|MQKACTR_idforceuseflag);
} 
 /* line 219: */
 /* line 220: */
 /* line 221: */
if ( YPVACTR_aliendec )
{ 
 /* line 222: */
 /* line 223: */
 /* line 225: */
if ( ((*(&(AQVACTR_rhsidinfo->Definition))).upb>0) )
{ 
 /* line 226: */
CQVACTR = (*(&(AQVACTR_rhsidinfo->Definition)));
} 
else
{ 
 /* line 227: */
if ( RQIACTR_oldalienoption )
{ 
 /* line 228: */
 /* line 229: */
EQVACTR = (*(&(AQVACTR_rhsidinfo->Flags))) ;
if ( A_LB_GE(EQVACTR,JQKACTR_idgprocflag) )
{ 
 /* line 230: */
XKNACTR_ctype( A_CALLPROC(SVMACTR_deproc,((*(&(AQVACTR_rhsidinfo->Mode)))),((*(&(AQVACTR_rhsidinfo->Mode))),(SVMACTR_deproc).nonlocals)), &HQVACTR );
GQVACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(HQVACTR,A_HVEC(IQVACTR,' ',A68_CHAR )),(*(&(AQVACTR_rhsidinfo->Name)))),JQVACTR);
} 
else
{ 
 /* line 231: */
 /* line 232: */
 /* line 233: */
BLNACTR_cvartype( (*(&(AQVACTR_rhsidinfo->Cvariabletype))), &KQVACTR );
GQVACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(KQVACTR,A_HVEC(LQVACTR,' ',A68_CHAR )),(*(&(AQVACTR_rhsidinfo->Name)))),A_HVEC(MQVACTR,';',A68_CHAR ));
} 
 /* line 234: */
 /* line 235: */
ZCAAOSF_makervc( A_VC_PLUS(NQVACTR,GQVACTR), &OQVACTR );
CQVACTR = OQVACTR;
} 
else
{ 
VWIACTR_pwarning(904, A_HARR(PQVACTR,(*(&(AQVACTR_rhsidinfo->Name))),A68_VC ));
 /* line 236: */
QQVACTR.data[0] = SQVACTR;
QQVACTR.data[1] = (*(&(AQVACTR_rhsidinfo->Name)));
QQVACTR.data[2] = UQVACTR;
 /* line 237: */
JDAAOSF_concat( A_HISVEC(VQVACTR,QQVACTR,3,A68_VC ), &WQVACTR );
ZCAAOSF_makervc( WQVACTR, &XQVACTR );
CQVACTR = XQVACTR;
} 
} 
YQVACTR = (&(NL(YOVACTR_idinfo)->Rhs)) ;
(*YQVACTR) = CQVACTR;
 /* line 239: */
 /* line 240: */
ZQVACTR = NL(FPVACTR_kept);
if ( ZQVACTR )
{ZQVACTR = XBPACTR_rscompatiblewithpreviousversion;
}
 /* line 242: */
if ( ZQVACTR )
{ 
 /* line 243: */
{ 
ARVACTR = 1 ;
BRVACTR = (*(&((&A_R1INDEX(DCPACTR_specs,ARVACTR))->Keptinfo))) ;
CRVACTR = LMVACTR_keeplistposition(NL(Decno)) ;
DRVACTR_keptinfo = (&A_VINDEX(BRVACTR,CRVACTR));
 /* line 244: */
ERVACTR = A_VC_NE(SPVACTR_definition,(*(&(DRVACTR_keptinfo->Definition))));
if ( ! ERVACTR )
{ /* line 245: */
ERVACTR = A_VC_NE((*(&(NL(YOVACTR_idinfo)->Rhs))),(*(&(DRVACTR_keptinfo->Rhs))));
}
 /* line 246: */
FRVACTR = ERVACTR;
if ( FRVACTR )
{ 
YBPACTR_transcompatiblewithpreviousversi = A68_FALSE;
 /* line 247: */
GRVACTR = 1 ;
HRVACTR = (&((&A_R1INDEX(DCPACTR_specs,GRVACTR))->Timeoflastchange)) ;
(*HRVACTR) = (*(&((&IYIACTR_config_info)->Translationtime)));
 /* line 248: */
IRVACTR = (&(NL(YOVACTR_idinfo)->Prefix)) ;
(*IRVACTR) = QIMACTR_newuniquename();
 /* line 249: */
 /* line 250: */
LRVACTR = (*(&(NL(YOVACTR_idinfo)->Prefix))) ;
JRVACTR.data[0] = A_HISVEC(KRVACTR,LRVACTR,7,A68_CHAR );
JRVACTR.data[1] = A_HVEC(MRVACTR,'_',A68_CHAR );
RRKACTR_afterbang( (*(&(NL(YOVACTR_idinfo)->Name))), &NRVACTR );
JRVACTR.data[2] = NRVACTR;
JDAAOSF_concat( A_HISVEC(ORVACTR,JRVACTR,3,A68_VC ), &PRVACTR );
QRVACTR.source = PRVACTR ;
RRVACTR = (&(NL(YOVACTR_idinfo)->C_name)) ;
(*RRVACTR) = (QRVACTR.destination);
 /* line 251: */
SRVACTR.data[0] = URVACTR;
UTKACTR_idfullname( NL(Decno), &VRVACTR );
SRVACTR.data[1] = VRVACTR;
SRVACTR.data[2] = A_HVEC(WRVACTR,' ',A68_CHAR );
SRVACTR.data[3] = Rhs;
 /* line 252: */
JDAAOSF_concat( A_HISVEC(XRVACTR,SRVACTR,4,A68_VC ), &YRVACTR );
ZCAAOSF_makervc( YRVACTR, &ZRVACTR );
SPVACTR_definition = ZRVACTR;
} 
} 
} 
 /* line 255: */
CSVACTR = (*(&(NL(YOVACTR_idinfo)->Rhs))) ;
ASVACTR.data[0] = A_UNITE(BSVACTR,mode2,2,CSVACTR);
ASVACTR.data[1] = A_UNITE(DSVACTR,mode4,4,EIAACTR_cnewline);
 /* line 256: */
MDMACTR_writecstream(A_HISVEC(ESVACTR,ASVACTR,2,A68_66 ), KSLACTR_nonlocdecstream(0));
} 
 /* line 259: */
FSVACTR = (&(NL(YOVACTR_idinfo)->Cvariabletype)) ;
(*FSVACTR) = (*(&(AQVACTR_rhsidinfo->Cvariabletype)));
 /* line 260: */
 /* line 261: */
 /* line 262: */
 /* line 263: */
GSVACTR = (&(NL(YOVACTR_idinfo)->Flags)) ;
(*GSVACTR) = (A68_BITS )((*(&(NL(YOVACTR_idinfo)->Flags)))|(*(&(AQVACTR_rhsidinfo->Flags))));
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 266: */
 /* line 267: */
 /* line 268: */
if ( NL(FPVACTR_kept) )
{ 
 /* line 269: */
ZCAAOSF_makervc( SPVACTR_definition, &HSVACTR );
ISVACTR = (&(NL(YOVACTR_idinfo)->Definition)) ;
(*ISVACTR) = HSVACTR;
} 
 /* line 271: */
JSVACTR = (&(NL(YOVACTR_idinfo)->Flags)) ;
(*JSVACTR) = (A68_BITS )((*(&(NL(YOVACTR_idinfo)->Flags)))|HQKACTR_idoptimisedflag);
 /* line 273: */
KSVACTR.data[0] = A_UNITE(LSVACTR,mode2,2,SPVACTR_definition);
KSVACTR.data[1] = A_UNITE(MSVACTR,mode4,4,EIAACTR_cnewline);
 /* line 274: */
MDMACTR_writecstream(A_HISVEC(NSVACTR,KSVACTR,2,A68_66 ), KSLACTR_nonlocdecstream(0));
} 
A_PROC_EXIT(optidentity);
return;
} 
#undef NL

A_STATIC A68_VOID  PSVACTR_declarecvariable(void *NonLocals)
#define NL(x) (((QSVACTR_declarecvariable *)NonLocals)->x)
{ 
A68_257  RSVACTR;  /* collateral clause result */
A68_BOOL  SSVACTR;  /* optbool result */
A68_BITS  TSVACTR;  /* ADICOPS - >= */
A68_66  WSVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  XSVACTR;  /* YIELD */
A68_66  ATVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  BTVACTR;  /* YIELD */
A68_VC  CTVACTR;  /* avoid structure result */
A68_66  DTVACTR;  /* OPERATORS - mode -> union mode */
A68_66  ETVACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  FTVACTR;  /* YIELD */
A68_VC  GTVACTR;  /* avoid structure result */
A68_66  HTVACTR;  /* OPERATORS - mode -> union mode */
A68_66  ITVACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  JTVACTR;  /* YIELD */
A68_BITS  KTVACTR;  /* ADICOPS - >= */
A68_66  PTVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  QTVACTR;  /* YIELD */
A68_66  TTVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  UTVACTR;  /* YIELD */
A68_66  VTVACTR;  /* OPERATORS - mode -> union mode */
A68_65  WTVACTR;  /* OPERATORS - istruct -> vector */
A68_258  XTVACTR;  /* collateral clause result */
A68_VC  YTVACTR;  /* avoid structure result */
A68_66  ZTVACTR;  /* OPERATORS - mode -> union mode */
A68_66  CUVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  DUVACTR;  /* YIELD */
A68_VC  EUVACTR;  /* avoid structure result */
A68_66  FUVACTR;  /* OPERATORS - mode -> union mode */
A68_66  GUVACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  HUVACTR;  /* YIELD */
A68_66  IUVACTR;  /* OPERATORS - mode -> union mode */
A68_65  JUVACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(declarecvariable);
{ 
SSVACTR = !NL(CPVACTR_global);
if ( ! SSVACTR )
{ /* line 280: */
TSVACTR = (*(&(NL(YOVACTR_idinfo)->Flags))) ;
SSVACTR = A_LB_GE(TSVACTR,CQKACTR_idkeptflag);
}
 /* line 281: */
if ( SSVACTR )
{ 
 /* line 282: */
XSVACTR = VSVACTR ;
RSVACTR.data[0] = A_UNITE(WSVACTR,mode2,2,XSVACTR);
} 
else
{ 
 /* line 283: */
BTVACTR = ZSVACTR ;
RSVACTR.data[0] = A_UNITE(ATVACTR,mode2,2,BTVACTR);
} 
BLNACTR_cvartype( (*(&(NL(YOVACTR_idinfo)->Cvariabletype))), &CTVACTR );
RSVACTR.data[1] = A_UNITE(DTVACTR,mode2,2,CTVACTR);
 /* line 284: */
FTVACTR = ' ' ;
RSVACTR.data[2] = A_UNITE(ETVACTR,mode1,1,FTVACTR);
UTKACTR_idfullname( NL(Decno), &GTVACTR );
RSVACTR.data[3] = A_UNITE(HTVACTR,mode2,2,GTVACTR);
 /* line 285: */
JTVACTR = ';' ;
RSVACTR.data[4] = A_UNITE(ITVACTR,mode1,1,JTVACTR);
 /* line 286: */
KTVACTR = (*(&(NL(YOVACTR_idinfo)->Flags))) ;
if ( A_LB_GE(KTVACTR,IQKACTR_idopflag) )
{ 
 /* line 287: */
 /* line 288: */
QTVACTR = A_VC_PLUS(A_VC_PLUS(NTVACTR,(*(&(NL(YOVACTR_idinfo)->Name)))),OTVACTR) ;
RSVACTR.data[5] = A_UNITE(PTVACTR,mode2,2,QTVACTR);
} 
else
{ 
 /* line 290: */
UTVACTR = STVACTR ;
RSVACTR.data[5] = A_UNITE(TTVACTR,mode2,2,UTVACTR);
} 
RSVACTR.data[6] = A_UNITE(VTVACTR,mode4,4,EIAACTR_cnewline);
 /* line 291: */
MDMACTR_writecstream(A_HISVEC(WTVACTR,RSVACTR,7,A68_66 ), NL(HPVACTR_decstream));
 /* line 293: */
 /* line 294: */
 /* line 295: */
if ( (NL(Initvalue)!=(A68_98 *)A68_NIL) )
{ 
UTKACTR_idfullname( NL(Decno), &YTVACTR );
XTVACTR.data[0] = A_UNITE(ZTVACTR,mode2,2,YTVACTR);
 /* line 296: */
DUVACTR = BUVACTR ;
XTVACTR.data[1] = A_UNITE(CUVACTR,mode2,2,DUVACTR);
NDQACTR_bracketcfragment( NL(Initvalue), &EUVACTR );
XTVACTR.data[2] = A_UNITE(FUVACTR,mode2,2,EUVACTR);
 /* line 298: */
HUVACTR = ';' ;
XTVACTR.data[3] = A_UNITE(GUVACTR,mode1,1,HUVACTR);
XTVACTR.data[4] = A_UNITE(IUVACTR,mode4,4,EIAACTR_cnewline);
 /* line 299: */
 /* line 300: */
 /* line 301: */
MDMACTR_writecstream(A_HISVEC(JUVACTR,XTVACTR,5,A68_66 ), NL(IPVACTR_codestream));
} 
} 
A_PROC_EXIT(declarecvariable);
return;
} 
#undef NL

A_STATIC A68_98 * KXVACTR_assignment(A68_98 * IXVACTR_anonymous, A68_98  JXVACTR_anonymous)
{ 
A68_INT * LXVACTR;  /* YIELD */
A68_BITS * MXVACTR;  /* YIELD */
A68_98 * VXVACTR;  /* clause result */
{ 
LXVACTR = (&(IXVACTR_anonymous->Mode)) ;
(*LXVACTR) = JXVACTR_anonymous.Mode;
MXVACTR = (&(IXVACTR_anonymous->Info)) ;
(*MXVACTR) = JXVACTR_anonymous.Info;
PXVACTR_assignment((&(IXVACTR_anonymous->Extra)), JXVACTR_anonymous.Extra);
VXVACTR = IXVACTR_anonymous;
} 
return( VXVACTR );
} 
#undef NL

A_STATIC A68_VOID  OFWACTR_generator(A68_BOOL  MFWACTR_anonymous, A68_278  *ReturnedValue, void *NonLocals)
#define NL(x) (((PFWACTR_generator *)NonLocals)->x)
{ 
A68_278  QFWACTR;  /* clause result */
A68_278  RFWACTR;  /* OPERATORS - dynamic generator */
{ 
RFWACTR.upb = NL(FFWACTR_a68paramcount) ;
( MFWACTR_anonymous? A_VLOC(A68_VC ,RFWACTR): A_VHEAP(A68_VC ,RFWACTR) );
QFWACTR = RFWACTR;
} 
*ReturnedValue = (QFWACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  GGWACTR_prototype(A68_INT  Protostream, void *NonLocals)
#define NL(x) (((HGWACTR_prototype *)NonLocals)->x)
{ 
A68_269  IGWACTR;  /* collateral clause result */
A68_66  JGWACTR;  /* OPERATORS - mode -> union mode */
A68_66  MGWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  NGWACTR;  /* YIELD */
A68_66  QGWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  RGWACTR;  /* YIELD */
A68_VC  SGWACTR;  /* avoid structure result */
A68_66  TGWACTR;  /* OPERATORS - mode -> union mode */
A68_66  UGWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  VGWACTR;  /* YIELD */
A68_66  WGWACTR;  /* OPERATORS - mode -> union mode */
A68_66  XGWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  YGWACTR;  /* YIELD */
A68_65  ZGWACTR;  /* OPERATORS - istruct -> vector */
A68_66  CHWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  DHWACTR;  /* YIELD */
A68_65  EHWACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_280  FHWACTR;  /* collateral clause result */
A68_INT  GHWACTR;  /* YIELD */
A68_66  HHWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  IHWACTR;  /* YIELD */
A68_66  JHWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  KHWACTR;  /* YIELD */
A68_INT  LHWACTR;  /* YIELD */
A68_66  MHWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  NHWACTR;  /* YIELD */
A68_65  OHWACTR;  /* OPERATORS - istruct -> vector */
A68_INT  PHWACTR_i;
A68_INT  QHWACTR;  /* to part of loop */
A68_272  RHWACTR;  /* collateral clause result */
A68_66  UHWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  VHWACTR;  /* YIELD */
A68_66  WHWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  XHWACTR;  /* YIELD */
A68_66  YHWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  ZHWACTR;  /* YIELD */
A68_66  AIWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  BIWACTR;  /* YIELD */
A68_65  CIWACTR;  /* OPERATORS - istruct -> vector */
A68_280  DIWACTR;  /* collateral clause result */
A68_66  GIWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  HIWACTR;  /* YIELD */
A68_66  KIWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  LIWACTR;  /* YIELD */
A68_VC  MIWACTR;  /* avoid structure result */
A68_66  NIWACTR;  /* OPERATORS - mode -> union mode */
A68_66  QIWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  RIWACTR;  /* YIELD */
A68_65  SIWACTR;  /* OPERATORS - istruct -> vector */
A68_256  TIWACTR;  /* collateral clause result */
A68_BOOL  UIWACTR;  /* optbool result */
A68_66  XIWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  YIWACTR;  /* YIELD */
A68_66  BJWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  CJWACTR;  /* YIELD */
A68_66  FJWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  GJWACTR;  /* YIELD */
A68_65  HJWACTR;  /* OPERATORS - istruct -> vector */
A68_66  IJWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  JJWACTR;  /* YIELD */
A68_65  KJWACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(prototype);
 /* line 664: */
 /* line 665: */
{ 
 /* line 666: */
 /* line 667: */
IGWACTR.data[0] = A_UNITE(JGWACTR,mode4,4,EIAACTR_cnewline);
if ( (NL(Global)&NL(Kept)) )
{ 
NGWACTR = LGWACTR ;
IGWACTR.data[1] = A_UNITE(MGWACTR,mode2,2,NGWACTR);
} 
else
{ 
 /* line 668: */
RGWACTR = PGWACTR ;
IGWACTR.data[1] = A_UNITE(QGWACTR,mode2,2,RGWACTR);
} 
 /* line 669: */
XKNACTR_ctype( NL(DFWACTR_cresultmode), &SGWACTR );
IGWACTR.data[2] = A_UNITE(TGWACTR,mode2,2,SGWACTR);
 /* line 670: */
VGWACTR = ' ' ;
IGWACTR.data[3] = A_UNITE(UGWACTR,mode1,1,VGWACTR);
 /* line 672: */
IGWACTR.data[4] = A_UNITE(WGWACTR,mode2,2,NL(LFWACTR_fnname));
YGWACTR = '(' ;
IGWACTR.data[5] = A_UNITE(XGWACTR,mode1,1,YGWACTR);
MDMACTR_writecstream(A_HISVEC(ZGWACTR,IGWACTR,6,A68_66 ), Protostream);
 /* line 674: */
 /* line 675: */
 /* line 676: */
if ( (NL(GFWACTR_cparamcount)==0) )
{ 
 /* line 677: */
 /* line 678: */
DHWACTR = BHWACTR ;
MDMACTR_writecstream(A_HVEC(EHWACTR,A_UNITE(CHWACTR,mode2,2,DHWACTR),A68_66 ), Protostream);
} 
else
{ 
 /* line 679: */
 /* line 680: */
if ( (NL(FFWACTR_a68paramcount)>0) )
{ 
GHWACTR = 1 ;
IHWACTR = (*(&A_VINDEX(NL(UFWACTR_paramtypes),GHWACTR))) ;
FHWACTR.data[0] = A_UNITE(HHWACTR,mode2,2,IHWACTR);
KHWACTR = ' ' ;
FHWACTR.data[1] = A_UNITE(JHWACTR,mode1,1,KHWACTR);
LHWACTR = 1 ;
NHWACTR = (*(&A_VINDEX(NL(SFWACTR_paramnames),LHWACTR))) ;
FHWACTR.data[2] = A_UNITE(MHWACTR,mode2,2,NHWACTR);
MDMACTR_writecstream(A_HISVEC(OHWACTR,FHWACTR,3,A68_66 ), Protostream);
 /* line 681: */
 /* line 682: */
QHWACTR = NL(FFWACTR_a68paramcount);
for ( PHWACTR_i = 2;
PHWACTR_i <= QHWACTR;
PHWACTR_i += 1 )
{ 
 /* line 683: */
VHWACTR = THWACTR ;
RHWACTR.data[0] = A_UNITE(UHWACTR,mode2,2,VHWACTR);
XHWACTR = (*(&A_VINDEX(NL(UFWACTR_paramtypes),PHWACTR_i))) ;
RHWACTR.data[1] = A_UNITE(WHWACTR,mode2,2,XHWACTR);
ZHWACTR = ' ' ;
RHWACTR.data[2] = A_UNITE(YHWACTR,mode1,1,ZHWACTR);
BIWACTR = (*(&A_VINDEX(NL(SFWACTR_paramnames),PHWACTR_i))) ;
RHWACTR.data[3] = A_UNITE(AIWACTR,mode2,2,BIWACTR);
 /* line 684: */
MDMACTR_writecstream(A_HISVEC(CIWACTR,RHWACTR,4,A68_66 ), Protostream);
}
 /* line 685: */
} 
 /* line 688: */
 /* line 689: */
 /* line 690: */
if ( NL(BFWACTR_usetempforresult) )
{ 
 /* line 691: */
if ( (NL(FFWACTR_a68paramcount)!=0) )
{ 
HIWACTR = FIWACTR ;
DIWACTR.data[0] = A_UNITE(GIWACTR,mode2,2,HIWACTR);
} 
else
{ 
 /* line 692: */
LIWACTR = JIWACTR ;
DIWACTR.data[0] = A_UNITE(KIWACTR,mode2,2,LIWACTR);
} 
 /* line 693: */
XKNACTR_ctype( NL(Resultmode), &MIWACTR );
DIWACTR.data[1] = A_UNITE(NIWACTR,mode2,2,MIWACTR);
RIWACTR = PIWACTR ;
DIWACTR.data[2] = A_UNITE(QIWACTR,mode2,2,RIWACTR);
 /* line 694: */
MDMACTR_writecstream(A_HISVEC(SIWACTR,DIWACTR,3,A68_66 ), Protostream);
} 
 /* line 695: */
 /* line 696: */
 /* line 697: */
if ( NL(EFWACTR_fulldec) )
{ 
 /* line 698: */
UIWACTR = NL(BFWACTR_usetempforresult);
if ( ! UIWACTR )
{UIWACTR = (NL(FFWACTR_a68paramcount)!=0);
}
if ( UIWACTR )
{ 
YIWACTR = WIWACTR ;
TIWACTR.data[0] = A_UNITE(XIWACTR,mode2,2,YIWACTR);
} 
else
{ 
 /* line 700: */
CJWACTR = AJWACTR ;
TIWACTR.data[0] = A_UNITE(BJWACTR,mode2,2,CJWACTR);
} 
GJWACTR = EJWACTR ;
TIWACTR.data[1] = A_UNITE(FJWACTR,mode2,2,GJWACTR);
 /* line 701: */
 /* line 702: */
MDMACTR_writecstream(A_HISVEC(HJWACTR,TIWACTR,2,A68_66 ), Protostream);
} 
} 
 /* line 704: */
 /* line 705: */
JJWACTR = ')' ;
MDMACTR_writecstream(A_HVEC(KJWACTR,A_UNITE(IJWACTR,mode1,1,JJWACTR),A68_66 ), Protostream);
} 
A_PROC_EXIT(prototype);
return;
} 
#undef NL

A_STATIC A68_VOID  ASWACTR_mybefore(A68_VC  S, A68_CHAR  C, A68_VC  *ReturnedValue)
{ 
A68_VC  BSWACTR;  /* clause result */
A68_VC  CSWACTR;  /* OPERATORS - trim index */
A_PROC_ENTRY(mybefore);
BSWACTR = A_VTRIM(CSWACTR,(S),A_VTSCRIPT(&(CSWACTR.upb),(S).upb,1,KMAAOSF_truncate(C, S)));
A_PROC_EXIT(mybefore);
*ReturnedValue = (BSWACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ZTWACTR_generator(A68_BOOL  XTWACTR_anonymous, A68_181  *ReturnedValue, void *NonLocals)
#define NL(x) (((AUWACTR_generator *)NonLocals)->x)
{ 
A68_181  BUWACTR;  /* clause result */
A68_181  CUWACTR;  /* OPERATORS - dynamic generator */
{ 
CUWACTR.upb = 0 ;
( XTWACTR_anonymous? A_VLOC(A68_INT ,CUWACTR): A_VHEAP(A68_INT ,CUWACTR) );
BUWACTR = CUWACTR;
} 
*ReturnedValue = (BUWACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  VLVACTR_debugmessage(A68_INT  Level, A68_VC  M)
{ 
A68_VC  BMVACTR;  /* avoid structure result */
A_PROC_ENTRY(debugmessage);
 /* line 47: */
 /* line 48: */
 /* line 49: */
if ( (ZCHACTR_tracelevel(XLVACTR)>=Level) )
{ 
 /* line 50: */
ROAAOSF_whole( Level, 0, &BMVACTR );
A_CALLPROC(MSIACTR_list,(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(AMVACTR,BMVACTR),CMVACTR),M)),(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(AMVACTR,BMVACTR),CMVACTR),M),(MSIACTR_list).nonlocals));
} 
A_PROC_EXIT(debugmessage);
return;
} 
#undef NL

A68_VOID  EMVACTR_initialdummydec(A68_130  Dummydec)
{ 
A68_72  HMVACTR;  /* collateral clause result */
A68_INT  IMVACTR;  /* YIELD */
A68_72 * JMVACTR;  /* YIELD */
A_PROC_ENTRY(initialdummydec);
 /* line 57: */
 /* line 58: */
{ 
WXIACTR_assert(GMVACTR, (Dummydec.Type==8));
 /* line 59: */
HMVACTR.Level = 1;
 /* line 60: */
HMVACTR.Block = 0;
IMVACTR = Dummydec.Decno ;
JMVACTR = (&((&A_R1INDEX(WPKACTR_ids,IMVACTR))->Environ)) ;
(*JMVACTR) = HMVACTR;
} 
A_PROC_EXIT(initialdummydec);
return;
} 
#undef NL

A_STATIC A68_INT  LMVACTR_keeplistposition(A68_INT  Decno)
{ 
A68_INT  MMVACTR_pos;
A68_BOOL  NMVACTR_found;
A68_INT  OMVACTR_upbkepts;
A68_BOOL  PMVACTR;  /* optbool result */
A68_INT  QMVACTR;  /* YIELD */
A68_INT  TMVACTR;  /* clause result */
A_PROC_ENTRY(keeplistposition);
 /* line 71: */
 /* line 72: */
{ 
MMVACTR_pos = 0;
 /* line 73: */
NMVACTR_found = A68_FALSE;
 /* line 74: */
OMVACTR_upbkepts = UBPACTR_keptdecnos.dim[0].upb;
 /* line 75: */
for ( ;; )
{ 
PMVACTR = !NMVACTR_found;
if ( PMVACTR )
{ /* line 76: */
PMVACTR = (MMVACTR_pos<OMVACTR_upbkepts);
}
if ( !(PMVACTR) ) break;
 /* line 77: */
QMVACTR = MMVACTR_pos+=1 ;
NMVACTR_found = ((*(&A_R1INDEX(UBPACTR_keptdecnos,QMVACTR)))==Decno);
}
 /* line 78: */
WXIACTR_assert(SMVACTR, NMVACTR_found);
 /* line 79: */
 /* line 80: */
TMVACTR = MMVACTR_pos;
} 
A_PROC_EXIT(keeplistposition);
return( TMVACTR );
} 
#undef NL
 /* line 84: */
 /* line 85: */
 /* line 86: */
 /* line 87: */
 /* line 88: */
 /* line 90: */

A_STATIC A68_VOID  BNVACTR_newidinfo(A68_INT  Decno, A68_INT  Mode, A68_VC  A68name, A68_56  Prefix, A68_BITS  Flags, A68_VC  Definition, A68_VC  Rhs)
{ 
A68_108 * CNVACTR_newid;
A68_BOOL  DNVACTR;  /* optbool result */
A68_INT  ENVACTR_cvariabletype;
A68_VC  FNVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  GNVACTR;  /* OPERATORS - istruct -> vector */
A68_BITS  HNVACTR;  /* ADICOPS - >= */
A68_BOOL  INVACTR;  /* optbool result */
A68_VC  JNVACTR;  /* OPERATORS - istruct -> vector */
A68_INT  KNVACTR;  /* YIELD */
A68_155  LNVACTR;  /* OPERATORS - simple index */
A68_INT  MNVACTR;  /* YIELD */
A68_VC  NNVACTR;  /* OPERATORS - istruct -> vector */
A68_56  ONVACTR;  /* OPERATORS - istruct -> vector */
A68_INT  PNVACTR;  /* YIELD */
A68_LINT * QNVACTR;  /* YIELD */
A68_56  RNVACTR;  /* clause result */
A68_72  SNVACTR;  /* avoid structure result */
A68_BOOL  TNVACTR;  /* optbool result */
A68_BITS  UNVACTR;  /* ADICOPS - >= */
A68_INT  VNVACTR;  /* YIELD */
A68_155  WNVACTR;  /* OPERATORS - simple index */
A68_INT  XNVACTR;  /* YIELD */
A68_157 * YNVACTR_keptinfo;
A68_BOOL  ZNVACTR;  /* optbool result */
A68_BOOL  AOVACTR;  /* optbool result */
A68_BOOL  BOVACTR;  /* clause result */
A68_INT  COVACTR;  /* YIELD */
A68_LINT * DOVACTR;  /* YIELD */
A68_56  EOVACTR_newidprefix;
A68_BITS  FOVACTR;  /* clause result */
A68_BITS  GOVACTR_new_flags;
A68_BOOL  HOVACTR;  /* optbool result */
A68_INT  IOVACTR;  /* YIELD */
A68_VC  JOVACTR;  /* clause result */
A68_VC  KOVACTR;  /* avoid structure result */
A68_VC  MOVACTR;  /* clause result */
A68_VC  OOVACTR;  /* avoid structure result */
A68_VC  POVACTR;  /* OPERATORS - istruct -> vector */
A68_VC  QOVACTR;  /* OPERATORS - scalar -> [] or VEC[] */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} ROVACTR; 
A68_VC  SOVACTR_c_name;
A68_108  TOVACTR;  /* collateral clause result */
A68_72  UOVACTR;  /* avoid structure result */
A_PROC_ENTRY(newidinfo);
 /* line 95: */
 /* line 96: */
{ 
CNVACTR_newid = YQKACTR_get_idinfo(Decno);
 /* line 98: */
 /* line 99: */
DNVACTR = A_LB_GE(Flags,BQKACTR_ididentityflag);
if ( DNVACTR )
{DNVACTR = !A_LB_GE(Flags,HQKACTR_idoptimisedflag);
}
 /* line 100: */
if ( ! DNVACTR )
{DNVACTR = A_LB_GE(Flags,EQKACTR_idforallflag);
}
 /* line 101: */
if ( ! DNVACTR )
{DNVACTR = A_LB_GE(Flags,GQKACTR_idformalflag);
}
ENVACTR_cvariabletype = TKNACTR_givecvariabletype(Mode, DNVACTR);
 /* line 104: */
 /* line 105: */
 /* line 106: */
 /* line 107: */
 /* line 108: */
if ( A_VC_NE(A_HISVEC(FNVACTR,Prefix,7,A68_CHAR ),A_HISVEC(GNVACTR,DNOACTR_nulluname,7,A68_CHAR )) )
{ 
 /* line 109: */
 /* line 110: */
HNVACTR = (*(&(CNVACTR_newid->Flags))) ;
INVACTR = A_LB_GE(HNVACTR,CQKACTR_idkeptflag);
if ( INVACTR )
{INVACTR = XBPACTR_rscompatiblewithpreviousversion;
}
if ( INVACTR )
{ /* line 111: */
 /* line 112: */
KNVACTR = 1 ;
LNVACTR = (*(&((&A_R1INDEX(DCPACTR_specs,KNVACTR))->Keptinfo))) ;
MNVACTR = LMVACTR_keeplistposition(Decno) ;
ONVACTR = (*(&((&A_VINDEX(LNVACTR,MNVACTR))->Prefix))) ;
INVACTR = A_VC_NE(A_HISVEC(JNVACTR,Prefix,7,A68_CHAR ),A_HISVEC(NNVACTR,ONVACTR,7,A68_CHAR ));
}
 /* line 113: */
if ( INVACTR )
{ 
YBPACTR_transcompatiblewithpreviousversi = A68_FALSE;
 /* line 114: */
 /* line 116: */
PNVACTR = 1 ;
QNVACTR = (&((&A_R1INDEX(DCPACTR_specs,PNVACTR))->Timeoflastchange)) ;
(*QNVACTR) = (*(&((&IYIACTR_config_info)->Translationtime)));
} 
 /* line 117: */
 /* line 118: */
 /* line 120: */
RNVACTR = Prefix;
} 
else
{ 
QPLACTR_currentenviron(  &SNVACTR );
TNVACTR = !PRLACTR_isgloballevel(SNVACTR);
if ( ! TNVACTR )
{ /* line 122: */
UNVACTR = (*(&(CNVACTR_newid->Flags))) ;
TNVACTR = !A_LB_GE(UNVACTR,CQKACTR_idkeptflag);
}
 /* line 123: */
if ( ! TNVACTR )
{TNVACTR = !XBPACTR_rscompatiblewithpreviousversion;
}
 /* line 124: */
if ( TNVACTR )
{ 
 /* line 125: */
RNVACTR = QIMACTR_newuniquename();
} 
else
{ 
{ 
VNVACTR = 1 ;
WNVACTR = (*(&((&A_R1INDEX(DCPACTR_specs,VNVACTR))->Keptinfo))) ;
XNVACTR = LMVACTR_keeplistposition(Decno) ;
YNVACTR_keptinfo = (&A_VINDEX(WNVACTR,XNVACTR));
 /* line 128: */
 /* line 129: */
 /* line 130: */
ZNVACTR = A_LB_GE(Flags,BQKACTR_ididentityflag);
if ( ZNVACTR )
{ZNVACTR = !(*(&(YNVACTR_keptinfo->Iddec)));
}
 /* line 132: */
if ( ! ZNVACTR )
{ /* line 133: */
 /* line 134: */
AOVACTR = A_LB_GE(Flags,HQKACTR_idoptimisedflag);
if ( AOVACTR )
{AOVACTR = !(*(&(YNVACTR_keptinfo->Optimised)));
}
 /* line 135: */
ZNVACTR = AOVACTR;
}
BOVACTR = ZNVACTR;
if ( BOVACTR )
{ 
YBPACTR_transcompatiblewithpreviousversi = A68_FALSE;
 /* line 136: */
COVACTR = 1 ;
DOVACTR = (&((&A_R1INDEX(DCPACTR_specs,COVACTR))->Timeoflastchange)) ;
(*DOVACTR) = (*(&((&IYIACTR_config_info)->Translationtime)));
 /* line 137: */
 /* line 138: */
 /* line 140: */
RNVACTR = QIMACTR_newuniquename();
} 
else
{ 
RNVACTR = (*(&(YNVACTR_keptinfo->Prefix)));
} 
} 
} 
} 
EOVACTR_newidprefix = RNVACTR;
 /* line 142: */
 /* line 144: */
if ( TUKACTR_standopsym(A68name) )
{ 
FOVACTR = IQKACTR_idopflag;
} 
else
{ 
FOVACTR = AQKACTR_idnoflags;
} 
GOVACTR_new_flags = (A68_BITS )((A68_BITS )((A68_BITS )((*(&(CNVACTR_newid->Flags)))&NQKACTR_idpresetflags)|Flags)|FOVACTR);
 /* line 146: */
 /* line 147: */
 /* line 148: */
HOVACTR = A_LB_GE(Flags,GQKACTR_idformalflag);
if ( HOVACTR )
{HOVACTR = (A68name.upb>0);
}
if ( HOVACTR )
{ /* line 149: */
IOVACTR = 1 ;
HOVACTR = ((*(&A_VINDEX(A68name,IOVACTR)))!='!');
}
 /* line 151: */
if ( HOVACTR )
{ 
 /* line 152: */
SNAAOSF_capitalised( A68name, &KOVACTR );
JOVACTR = KOVACTR;
} 
else
{ 
if ( A_LB_GE(GOVACTR_new_flags,IQKACTR_idopflag) )
{ 
MOVACTR = NOVACTR;
} 
else
{ 
RRKACTR_afterbang( A68name, &OOVACTR );
MOVACTR = OOVACTR;
} 
 /* line 153: */
ROVACTR.source = A_VC_PLUS(A_VC_PLUS(A_HISVEC(POVACTR,EOVACTR_newidprefix,7,A68_CHAR ),A_HVEC(QOVACTR,'_',A68_CHAR )),MOVACTR) ;
JOVACTR = (ROVACTR.destination);
} 
SOVACTR_c_name = JOVACTR;
 /* line 155: */
 /* line 156: */
 /* line 157: */
TOVACTR.Mode = Mode;
 /* line 158: */
TOVACTR.Cvariabletype = ENVACTR_cvariabletype;
 /* line 159: */
QPLACTR_currentenviron(  &UOVACTR );
TOVACTR.Environ = UOVACTR;
 /* line 160: */
TOVACTR.Name = A68name;
 /* line 161: */
TOVACTR.C_name = SOVACTR_c_name;
 /* line 162: */
TOVACTR.Prefix = EOVACTR_newidprefix;
 /* line 163: */
TOVACTR.Flags = GOVACTR_new_flags;
 /* line 165: */
TOVACTR.Definition = Definition;
 /* line 166: */
TOVACTR.Rhs = Rhs;
(*CNVACTR_newid) = TOVACTR;
} 
A_PROC_EXIT(newidinfo);
return;
} 
#undef NL

A_STATIC A68_VOID  XOVACTR_outputcdeclaration(A68_INT  Decno, A68_98 * Initvalue)
{ 
A68_108 * YOVACTR_idinfo;
A68_INT  ZOVACTR_level;
A68_INT  APVACTR_block;
A68_BOOL  BPVACTR;  /* optbool result */
A68_BOOL  CPVACTR_global;
A68_BOOL  DPVACTR;  /* optbool result */
A68_BITS  EPVACTR;  /* ADICOPS - >= */
A68_BOOL  FPVACTR_kept;
A68_INT  GPVACTR;  /* clause result */
A68_INT  HPVACTR_decstream;
A68_INT  IPVACTR_codestream;
A68_59  KPVACTR_optidentity;   /* proc value of non-global proc */
A68_60  OSVACTR_declarecvariable;   /* proc value of non-global proc */
A68_BOOL  KUVACTR;  /* optbool result */
A68_BITS  LUVACTR;  /* ADICOPS - >= */
A68_99  MUVACTR;  /* united object - for case conformity */
A68_VC  NUVACTR;  /* avoid structure result */
A68_VC  OUVACTR_cf;
A68_BOOL  PUVACTR;  /* optbool result */
A68_BOOL  QUVACTR;  /* optbool result */
A68_BITS  RUVACTR;  /* ADICOPS - >= */
A68_101  SUVACTR_id;
A68_108 * TUVACTR;  /* clause result */
A68_108 * UUVACTR_rhsidinfo;
A68_BOOL  VUVACTR;  /* optbool result */
A68_BITS  WUVACTR;  /* ADICOPS - >= */
A68_BOOL  XUVACTR;  /* optbool result */
A68_BITS  YUVACTR;  /* ADICOPS - >= */
A68_BOOL  ZUVACTR;  /* clause result */
A68_VC  AVVACTR;  /* avoid structure result */
A_PROC_ENTRY(outputcdeclaration);
 /* line 182: */
 /* line 183: */
{ 
YOVACTR_idinfo = YQKACTR_get_idinfo(Decno);
 /* line 184: */
ZOVACTR_level = (*(&((&(YOVACTR_idinfo->Environ))->Level)));
 /* line 185: */
APVACTR_block = (*(&((&(YOVACTR_idinfo->Environ))->Block)));
 /* line 186: */
BPVACTR = (ZOVACTR_level==0);
if ( BPVACTR )
{BPVACTR = (APVACTR_block==0);
}
CPVACTR_global = BPVACTR;
 /* line 187: */
DPVACTR = CPVACTR_global;
if ( DPVACTR )
{EPVACTR = (*(&(YOVACTR_idinfo->Flags))) ;
DPVACTR = A_LB_GE(EPVACTR,CQKACTR_idkeptflag);
}
FPVACTR_kept = DPVACTR;
 /* line 189: */
 /* line 190: */
 /* line 191: */
 /* line 192: */
if ( CPVACTR_global )
{ 
 /* line 193: */
GPVACTR = KSLACTR_nonlocdecstream(ZOVACTR_level);
} 
else
{ 
GPVACTR = QSLACTR_locdecstream(ZOVACTR_level);
} 
HPVACTR_decstream = GPVACTR;
 /* line 195: */
IPVACTR_codestream = NSLACTR_codestream(ZOVACTR_level);
 /* line 197: */
A_CLOSURE( KPVACTR_optidentity, LPVACTR_optidentity, MPVACTR_optidentity );
(( MPVACTR_optidentity * ) ( KPVACTR_optidentity.nonlocals )) -> Decno = Decno;
(( MPVACTR_optidentity * ) ( KPVACTR_optidentity.nonlocals )) -> Initvalue = Initvalue;
(( MPVACTR_optidentity * ) ( KPVACTR_optidentity.nonlocals )) -> FPVACTR_kept = FPVACTR_kept;
(( MPVACTR_optidentity * ) ( KPVACTR_optidentity.nonlocals )) -> YOVACTR_idinfo = YOVACTR_idinfo;
 /* line 276: */
 /* line 277: */
 /* line 279: */
A_CLOSURE( OSVACTR_declarecvariable, PSVACTR_declarecvariable, QSVACTR_declarecvariable );
(( QSVACTR_declarecvariable * ) ( OSVACTR_declarecvariable.nonlocals )) -> CPVACTR_global = CPVACTR_global;
(( QSVACTR_declarecvariable * ) ( OSVACTR_declarecvariable.nonlocals )) -> YOVACTR_idinfo = YOVACTR_idinfo;
(( QSVACTR_declarecvariable * ) ( OSVACTR_declarecvariable.nonlocals )) -> Decno = Decno;
(( QSVACTR_declarecvariable * ) ( OSVACTR_declarecvariable.nonlocals )) -> HPVACTR_decstream = HPVACTR_decstream;
(( QSVACTR_declarecvariable * ) ( OSVACTR_declarecvariable.nonlocals )) -> Initvalue = Initvalue;
(( QSVACTR_declarecvariable * ) ( OSVACTR_declarecvariable.nonlocals )) -> IPVACTR_codestream = IPVACTR_codestream;
 /* line 303: */
 /* line 304: */
KUVACTR = (Initvalue!=(A68_98 *)A68_NIL);
if ( KUVACTR )
{ /* line 305: */
LUVACTR = (*(&(YOVACTR_idinfo->Flags))) ;
KUVACTR = A_LB_GE(LUVACTR,BQKACTR_ididentityflag);
}
if ( KUVACTR )
{ 
 /* line 306: */
MUVACTR = (*(&(Initvalue->Extra))) ;
switch ( MUVACTR.mode )
{ 
case 1: /* LONG BITS */
 /* line 307: */
 /* line 308: */
GZPACTR_getcfragment( Initvalue, &NUVACTR );
A_CALLPROC(KPVACTR_optidentity,(NUVACTR),(NUVACTR,(KPVACTR_optidentity).nonlocals));
break;
case 6: /* VECTOR [] CHAR */
OUVACTR_cf = (MUVACTR.data.mode6);
 /* line 309: */
 /* line 310: */
 /* line 311: */
PUVACTR = UVPACTR_hasattribute(Initvalue, QKJACTR_constant);
if ( PUVACTR )
{ /* line 312: */
PUVACTR = !UVPACTR_hasattribute(Initvalue, WKJACTR_isnil);
}
 /* line 313: */
if ( PUVACTR )
{ /* line 314: */
PUVACTR = (IOMACTR_modetype((*(&(Initvalue->Mode))))==EEAACTR_primitive);
}
 /* line 315: */
if ( ! PUVACTR )
{ /* line 316: */
 /* line 317: */
QUVACTR = UVPACTR_hasattribute(Initvalue, (A68_BITS )(QKJACTR_constant|WKJACTR_isnil));
if ( QUVACTR )
{ /* line 253: */
 /* line 318: */
RUVACTR = (*(&(YOVACTR_idinfo->Flags))) ;
QUVACTR = !A_LB_GE(RUVACTR,CQKACTR_idkeptflag);
}
 /* line 319: */
PUVACTR = QUVACTR;
}
if ( PUVACTR )
{ 
 /* line 320: */
 /* line 321: */
A_CALLPROC(KPVACTR_optidentity,(OUVACTR_cf),(OUVACTR_cf,(KPVACTR_optidentity).nonlocals));
} 
else
{ 
 /* line 322: */
A_CALLPROC(OSVACTR_declarecvariable,(),((OSVACTR_declarecvariable).nonlocals));
} 
break;
case 4: /* STRUCT(INT)  */
SUVACTR_id = (MUVACTR.data.mode4);
 /* line 323: */
 /* line 324: */
{ 
 /* line 325: */
 /* line 326: */
if ( (SUVACTR_id.Idno==VPKACTR_alienidno) )
{ 
TUVACTR = (&UPKACTR_alienidinfo);
} 
else
{ 
 /* line 327: */
TUVACTR = YQKACTR_get_idinfo(SUVACTR_id.Idno);
} 
UUVACTR_rhsidinfo = TUVACTR;
 /* line 328: */
 /* line 329: */
 /* line 330: */
VUVACTR = PRLACTR_isgloballevel((*(&(UUVACTR_rhsidinfo->Environ))));
if ( VUVACTR )
{ /* line 331: */
VUVACTR = ((*(&(YOVACTR_idinfo->Mode)))==(*(&(UUVACTR_rhsidinfo->Mode))));
}
 /* line 334: */
if ( VUVACTR )
{ /* line 335: */
WUVACTR = (*(&(YOVACTR_idinfo->Flags))) ;
XUVACTR = !A_LB_GE(WUVACTR,CQKACTR_idkeptflag);
if ( ! XUVACTR )
{ /* line 336: */
XUVACTR = (SUVACTR_id.Idno==VPKACTR_alienidno);
}
if ( ! XUVACTR )
{ /* line 337: */
YUVACTR = (*(&(UUVACTR_rhsidinfo->Flags))) ;
XUVACTR = A_LB_GE(YUVACTR,CQKACTR_idkeptflag);
}
 /* line 338: */
VUVACTR = XUVACTR;
}
ZUVACTR = VUVACTR;
if ( ZUVACTR )
{ 
 /* line 339: */
 /* line 340: */
UTKACTR_idfullname( SUVACTR_id.Idno, &AVVACTR );
A_CALLPROC(KPVACTR_optidentity,(AVVACTR),(AVVACTR,(KPVACTR_optidentity).nonlocals));
} 
else
{ 
 /* line 342: */
A_CALLPROC(OSVACTR_declarecvariable,(),((OSVACTR_declarecvariable).nonlocals));
} 
} 
break;
default: 
 /* line 343: */
 /* line 344: */
A_CALLPROC(OSVACTR_declarecvariable,(),((OSVACTR_declarecvariable).nonlocals));
break;
} 
} 
else
{ 
 /* line 345: */
A_CALLPROC(OSVACTR_declarecvariable,(),((OSVACTR_declarecvariable).nonlocals));
} 
} 
A_PROC_EXIT(outputcdeclaration);
return;
} 
#undef NL

A68_VOID  DVVACTR_iddec(A68_130  Identifierdec, A68_105 ** Valuestack)
{ 
A68_INT  MVVACTR_type;
A68_INT  NVVACTR_mode;
A68_INT  OVVACTR_decno;
A68_VC  PVVACTR_name;
A68_108 * QVVACTR_newid;
A68_98 * SVVACTR_initialvalue;
A68_VC  TVVACTR;  /* OPERATORS - nil -> mode */
A68_VC  UVVACTR;  /* OPERATORS - nil -> mode */
A68_VC  VVVACTR;  /* OPERATORS - nil -> mode */
A68_VC  WVVACTR;  /* OPERATORS - nil -> mode */
A68_VC  XVVACTR;  /* OPERATORS - nil -> mode */
A68_VC  YVVACTR;  /* OPERATORS - nil -> mode */
A68_VC  ZVVACTR;  /* OPERATORS - nil -> mode */
A68_VC  AWVACTR;  /* OPERATORS - nil -> mode */
A68_VC  BWVACTR;  /* OPERATORS - nil -> mode */
A68_VC  CWVACTR;  /* OPERATORS - nil -> mode */
A68_98 * DWVACTR_initialvalue;
A68_INT  GWVACTR_rowmode;
A68_INT  HWVACTR_forallmode;
A68_VC  IWVACTR;  /* OPERATORS - nil -> mode */
A68_VC  JWVACTR;  /* OPERATORS - nil -> mode */
A68_108  KWVACTR;  /* collateral clause result */
A68_72  LWVACTR;  /* avoid structure result */
A68_VC  MWVACTR;  /* OPERATORS - nil -> mode */
A68_VC  NWVACTR;  /* OPERATORS - nil -> mode */
A68_VC  OWVACTR;  /* OPERATORS - nil -> mode */
A_PROC_ENTRY(iddec);
 /* line 366: */
 /* line 367: */
{ 
 /* line 368: */
 /* line 369: */
 /* line 370: */
 /* line 371: */
 /* line 372: */
 /* line 373: */
 /* line 374: */
 /* line 376: */
MVVACTR_type = Identifierdec.Type;
 /* line 377: */
NVVACTR_mode = Identifierdec.Mode;
 /* line 378: */
OVVACTR_decno = Identifierdec.Decno;
 /* line 380: */
PVVACTR_name = Identifierdec.Name;
 /* line 381: */
QVVACTR_newid = YQKACTR_get_idinfo(OVVACTR_decno);
 /* line 383: */
 /* line 385: */
 /* line 386: */
switch ( MVVACTR_type )
{ 
case 1: 
 /* line 387: */
{ 
ILVACTR_evaluatestack(Valuestack);
 /* line 388: */
SVVACTR_initialvalue = (&((*Valuestack)->Value));
 /* line 389: */
(*Valuestack) = (*(&((*Valuestack)->Rest)));
 /* line 390: */
BNVACTR_newidinfo(OVVACTR_decno, NVVACTR_mode, PVVACTR_name, DNOACTR_nulluname, BQKACTR_ididentityflag, A_VVAC(UVVACTR), A_VVAC(TVVACTR));
 /* line 391: */
 /* line 392: */
 /* line 393: */
XOVACTR_outputcdeclaration(OVVACTR_decno, SVVACTR_initialvalue);
} 
break;
case 2: 
 /* line 394: */
{ 
 /* line 341: */
 /* line 395: */
 /* line 396: */
if ( (NVVACTR_mode>WFAACTR_refrefmark) )
{ 
 /* line 397: */
MXIACTR_portabilitywarning(810);
} 
 /* line 398: */
BNVACTR_newidinfo(OVVACTR_decno, NVVACTR_mode, PVVACTR_name, DNOACTR_nulluname, AQKACTR_idnoflags, A_VVAC(WVVACTR), A_VVAC(VVVACTR));
 /* line 399: */
 /* line 400: */
 /* line 401: */
XOVACTR_outputcdeclaration(OVVACTR_decno, RVVACTR_noinitialvalue);
} 
break;
case 3: 
 /* line 402: */
 /* line 403: */
 /* line 404: */
BNVACTR_newidinfo(OVVACTR_decno, NVVACTR_mode, PVVACTR_name, DNOACTR_nulluname, GQKACTR_idformalflag, A_VVAC(YVVACTR), A_VVAC(XVVACTR));
break;
case 4: 
 /* line 405: */
{ 
BNVACTR_newidinfo(OVVACTR_decno, NVVACTR_mode, PVVACTR_name, DNOACTR_nulluname, FQKACTR_idforflag, A_VVAC(AWVACTR), A_VVAC(ZVVACTR));
 /* line 406: */
 /* line 407: */
 /* line 408: */
XOVACTR_outputcdeclaration(OVVACTR_decno, RVVACTR_noinitialvalue);
} 
break;
case 5: 
 /* line 409: */
{ 
BNVACTR_newidinfo(OVVACTR_decno, NVVACTR_mode, PVVACTR_name, DNOACTR_nulluname, AQKACTR_idnoflags, A_VVAC(CWVACTR), A_VVAC(BWVACTR));
 /* line 410: */
ILVACTR_evaluatestack(Valuestack);
 /* line 411: */
DWVACTR_initialvalue = (&((*Valuestack)->Value));
 /* line 412: */
(*Valuestack) = (*(&((*Valuestack)->Rest)));
 /* line 414: */
 /* line 415: */
 /* line 416: */
XOVACTR_outputcdeclaration(OVVACTR_decno, DWVACTR_initialvalue);
} 
break;
case 6: 
 /* line 417: */
{ 
WXIACTR_assert(FWVACTR, A68_FALSE);
 /* line 418: */
 /* line 419: */
/*SKIP*/;
} 
break;
case 7: 
 /* line 424: */
{ 
GWVACTR_rowmode = (*(&((&((*Valuestack)->Value))->Mode)));
 /* line 425: */
HWVACTR_forallmode = NVVACTR_mode;
 /* line 435: */
BNVACTR_newidinfo(OVVACTR_decno, HWVACTR_forallmode, PVVACTR_name, DNOACTR_nulluname, EQKACTR_idforallflag, A_VVAC(JWVACTR), A_VVAC(IWVACTR));
 /* line 436: */
 /* line 437: */
 /* line 438: */
XOVACTR_outputcdeclaration(OVVACTR_decno, RVVACTR_noinitialvalue);
} 
break;
case 8: 
 /* line 439: */
 /* line 440: */
 /* line 441: */
KWVACTR.Mode = NVVACTR_mode;
 /* line 442: */
KWVACTR.Cvariabletype = 0;
 /* line 443: */
QPLACTR_currentenviron(  &LWVACTR );
KWVACTR.Environ = LWVACTR;
 /* line 444: */
KWVACTR.Name = PVVACTR_name;
 /* line 445: */
KWVACTR.C_name = A_VVAC(MWVACTR);
 /* line 446: */
KWVACTR.Prefix = QIMACTR_newuniquename();
 /* line 447: */
 /* line 448: */
KWVACTR.Flags = (A68_BITS )((A68_BITS )((*(&(QVVACTR_newid->Flags)))&NQKACTR_idpresetflags)|BQKACTR_ididentityflag);
 /* line 450: */
KWVACTR.Definition = A_VVAC(NWVACTR);
 /* line 451: */
KWVACTR.Rhs = A_VVAC(OWVACTR);
 /* line 452: */
(*QVVACTR_newid) = KWVACTR;
break;
default: 
 /* line 453: */
 /* line 454: */
WXIACTR_assert(QWVACTR, A68_FALSE);
break;
} 
} 
A_PROC_EXIT(iddec);
return;
} 
#undef NL
 /* line 458: */
 /* line 460: */

A68_VOID  UWVACTR_ccdec(A68_130  Choicedec, A68_98 * Enquiry, A68_INT  Modeindex)
{ 
A68_INT  XWVACTR_decno;
A68_INT  YWVACTR_choicemode;
A68_VC  ZWVACTR;  /* OPERATORS - nil -> mode */
A68_VC  AXVACTR;  /* OPERATORS - nil -> mode */
A68_98  BXVACTR;  /* collateral clause result */
A68_VC  DXVACTR;  /* avoid structure result */
A68_VC  FXVACTR;  /* avoid structure result */
A68_99  GXVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  HXVACTR;  /* YIELD */
A68_VC  WXVACTR;  /* OPERATORS - nil -> mode */
A68_VC  XXVACTR;  /* OPERATORS - nil -> mode */
A68_VC  YXVACTR;  /* avoid structure result */
A68_VC  ZXVACTR_enquiryname;
A68_VC  AYVACTR;  /* avoid structure result */
A68_VC  BYVACTR_newunionname;
A68_INT  CYVACTR_codestream;
A68_181  DYVACTR;  /* avoid structure result */
A68_181  EYVACTR;  /* avoid structure result */
A68_INT  FYVACTR_modeoffset;
A68_269  GYVACTR;  /* collateral clause result */
A68_66  JYVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KYVACTR;  /* YIELD */
A68_66  LYVACTR;  /* OPERATORS - mode -> union mode */
A68_66  MYVACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  NYVACTR;  /* YIELD */
A68_66  OYVACTR;  /* OPERATORS - mode -> union mode */
A68_66  RYVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  SYVACTR;  /* YIELD */
A68_66  TYVACTR;  /* OPERATORS - mode -> union mode */
A68_65  UYVACTR;  /* OPERATORS - istruct -> vector */
A68_258  VYVACTR;  /* collateral clause result */
A68_66  WYVACTR;  /* OPERATORS - mode -> union mode */
A68_66  ZYVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  AZVACTR;  /* YIELD */
A68_VC  BZVACTR;  /* avoid structure result */
A68_66  CZVACTR;  /* OPERATORS - mode -> union mode */
A68_66  DZVACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  EZVACTR;  /* YIELD */
A68_66  FZVACTR;  /* OPERATORS - mode -> union mode */
A68_65  GZVACTR;  /* OPERATORS - istruct -> vector */
A68_181  HZVACTR;  /* avoid structure result */
A68_181  IZVACTR;  /* avoid structure result */
A68_VC  JZVACTR;  /* avoid structure result */
A68_VC  KZVACTR;  /* avoid structure result */
A68_VC  LZVACTR_uniontable;
A68_257  MZVACTR;  /* collateral clause result */
A68_66  NZVACTR;  /* OPERATORS - mode -> union mode */
A68_66  QZVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  RZVACTR;  /* YIELD */
A68_66  SZVACTR;  /* OPERATORS - mode -> union mode */
A68_66  VZVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  WZVACTR;  /* YIELD */
A68_66  XZVACTR;  /* OPERATORS - mode -> union mode */
A68_66  AAWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  BAWACTR;  /* YIELD */
A68_66  CAWACTR;  /* OPERATORS - mode -> union mode */
A68_65  DAWACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(ccdec);
 /* line 464: */
 /* line 465: */
{ 
WXIACTR_assert(WWVACTR, (Choicedec.Type==6));
 /* line 466: */
XWVACTR_decno = Choicedec.Decno;
 /* line 467: */
YWVACTR_choicemode = Choicedec.Mode;
 /* line 469: */
 /* line 470: */
 /* line 471: */
if ( (Modeindex>0) )
{ 
 /* line 472: */
BNVACTR_newidinfo(XWVACTR_decno, YWVACTR_choicemode, Choicedec.Name, DNOACTR_nulluname, (A68_BITS )(BQKACTR_ididentityflag|DQKACTR_idccdecflag), A_VVAC(AXVACTR), A_VVAC(ZWVACTR));
 /* line 473: */
 /* line 474: */
 /* line 475: */
 /* line 476: */
BXVACTR.Mode = YWVACTR_choicemode;
 /* line 477: */
BXVACTR.Info = PKJACTR_defaultinfo;
 /* line 478: */
 /* line 479: */
GZPACTR_getcfragment( Enquiry, &DXVACTR );
ROAAOSF_whole( Modeindex, 0, &FXVACTR );
HXVACTR = A_VC_PLUS(A_VC_PLUS(DXVACTR,EXVACTR),FXVACTR) ;
BXVACTR.Extra = A_UNITE(GXVACTR,mode6,6,HXVACTR);
 /* line 480: */
XOVACTR_outputcdeclaration(XWVACTR_decno, KXVACTR_assignment(A_LOC(A68_98 ), BXVACTR));
} 
else
{ 
 /* line 481: */
 /* line 482: */
if ( (Modeindex<0) )
{ 
 /* line 483: */
BNVACTR_newidinfo(XWVACTR_decno, YWVACTR_choicemode, Choicedec.Name, DNOACTR_nulluname, (A68_BITS )(BQKACTR_ididentityflag|DQKACTR_idccdecflag), A_VVAC(XXVACTR), A_VVAC(WXVACTR));
 /* line 484: */
XOVACTR_outputcdeclaration(XWVACTR_decno, (A68_98 *)A68_NIL);
 /* line 486: */
GZPACTR_getcfragment( Enquiry, &YXVACTR );
ZXVACTR_enquiryname = YXVACTR;
 /* line 487: */
UTKACTR_idfullname( XWVACTR_decno, &AYVACTR );
BYVACTR_newunionname = AYVACTR;
 /* line 489: */
CYVACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 491: */
 /* line 492: */
A_CALLPROC(YVMACTR_constituents,((*(&(Enquiry->Mode))), &DYVACTR),((*(&(Enquiry->Mode))), &DYVACTR,(YVMACTR_constituents).nonlocals));
A_CALLPROC(YVMACTR_constituents,(YWVACTR_choicemode, &EYVACTR),(YWVACTR_choicemode, &EYVACTR,(YVMACTR_constituents).nonlocals));
FYVACTR_modeoffset = (SVQACTR_findints(EYVACTR, DYVACTR)-1);
 /* line 494: */
 /* line 495: */
KYVACTR = IYVACTR ;
GYVACTR.data[0] = A_UNITE(JYVACTR,mode2,2,KYVACTR);
GYVACTR.data[1] = A_UNITE(LYVACTR,mode2,2,BYVACTR_newunionname);
 /* line 496: */
NYVACTR = ',' ;
GYVACTR.data[2] = A_UNITE(MYVACTR,mode1,1,NYVACTR);
GYVACTR.data[3] = A_UNITE(OYVACTR,mode2,2,ZXVACTR_enquiryname);
 /* line 497: */
SYVACTR = QYVACTR ;
GYVACTR.data[4] = A_UNITE(RYVACTR,mode2,2,SYVACTR);
GYVACTR.data[5] = A_UNITE(TYVACTR,mode4,4,EIAACTR_cnewline);
 /* line 498: */
MDMACTR_writecstream(A_HISVEC(UYVACTR,GYVACTR,6,A68_66 ), CYVACTR_codestream);
 /* line 500: */
 /* line 501: */
 /* line 502: */
if ( (FYVACTR_modeoffset>0) )
{ 
VYVACTR.data[0] = A_UNITE(WYVACTR,mode2,2,BYVACTR_newunionname);
 /* line 503: */
AZVACTR = YYVACTR ;
VYVACTR.data[1] = A_UNITE(ZYVACTR,mode2,2,AZVACTR);
ROAAOSF_whole( FYVACTR_modeoffset, 0, &BZVACTR );
VYVACTR.data[2] = A_UNITE(CZVACTR,mode2,2,BZVACTR);
 /* line 504: */
EZVACTR = ';' ;
VYVACTR.data[3] = A_UNITE(DZVACTR,mode1,1,EZVACTR);
VYVACTR.data[4] = A_UNITE(FZVACTR,mode4,4,EIAACTR_cnewline);
 /* line 505: */
 /* line 506: */
MDMACTR_writecstream(A_HISVEC(GZVACTR,VYVACTR,5,A68_66 ), CYVACTR_codestream);
} 
else
{ 
 /* line 507: */
 /* line 510: */
if ( (FYVACTR_modeoffset<0) )
{ 
 /* line 511: */
 /* line 512: */
 /* line 513: */
A_CALLPROC(YVMACTR_constituents,(YWVACTR_choicemode, &HZVACTR),(YWVACTR_choicemode, &HZVACTR,(YVMACTR_constituents).nonlocals));
A_CALLPROC(YVMACTR_constituents,((*(&(Enquiry->Mode))), &IZVACTR),((*(&(Enquiry->Mode))), &IZVACTR,(YVMACTR_constituents).nonlocals));
IWQACTR_uniontouniontable( IZVACTR, HZVACTR, &JZVACTR );
DRJACTR_replacecontrolchars( JZVACTR, &KZVACTR );
LZVACTR_uniontable = KZVACTR;
 /* line 515: */
 /* line 516: */
MZVACTR.data[0] = A_UNITE(NZVACTR,mode2,2,BYVACTR_newunionname);
RZVACTR = PZVACTR ;
MZVACTR.data[1] = A_UNITE(QZVACTR,mode2,2,RZVACTR);
 /* line 517: */
MZVACTR.data[2] = A_UNITE(SZVACTR,mode2,2,LZVACTR_uniontable);
WZVACTR = UZVACTR ;
MZVACTR.data[3] = A_UNITE(VZVACTR,mode2,2,WZVACTR);
MZVACTR.data[4] = A_UNITE(XZVACTR,mode2,2,ZXVACTR_enquiryname);
 /* line 518: */
BAWACTR = ZZVACTR ;
MZVACTR.data[5] = A_UNITE(AAWACTR,mode2,2,BAWACTR);
MZVACTR.data[6] = A_UNITE(CAWACTR,mode4,4,EIAACTR_cnewline);
 /* line 519: */
 /* line 520: */
 /* line 521: */
 /* line 522: */
MDMACTR_writecstream(A_HISVEC(DAWACTR,MZVACTR,7,A68_66 ), CYVACTR_codestream);
} 
} 
} 
else
{ 
 /* line 523: */
 /* line 524: */
WXIACTR_assert(FAWACTR, A68_FALSE);
} 
} 
} 
A_PROC_EXIT(ccdec);
return;
} 
#undef NL

A68_VOID  HAWACTR_declarenonlocallabel(A68_INT  Labno)
{ 
A68_110 * IAWACTR_labinfo;
A68_BOOL  JAWACTR;  /* clause result */
A68_BITS  KAWACTR;  /* ADICOPS - <= */
A68_INT  LAWACTR_level;
A68_272  MAWACTR;  /* collateral clause result */
A68_66  PAWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  QAWACTR;  /* YIELD */
A68_VC  RAWACTR;  /* avoid structure result */
A68_66  SAWACTR;  /* OPERATORS - mode -> union mode */
A68_66  TAWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  UAWACTR;  /* YIELD */
A68_66  VAWACTR;  /* OPERATORS - mode -> union mode */
A68_INT  WAWACTR;  /* clause result */
A68_65  XAWACTR;  /* OPERATORS - istruct -> vector */
A68_269  YAWACTR;  /* collateral clause result */
A68_66  BBWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  CBWACTR;  /* YIELD */
A68_VC  EBWACTR;  /* avoid structure result */
A68_66  GBWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  HBWACTR;  /* YIELD */
A68_66  KBWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  LBWACTR;  /* YIELD */
A68_VC  MBWACTR;  /* avoid structure result */
A68_66  NBWACTR;  /* OPERATORS - mode -> union mode */
A68_66  OBWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  PBWACTR;  /* YIELD */
A68_66  QBWACTR;  /* OPERATORS - mode -> union mode */
A68_65  RBWACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(declarenonlocallabel);
 /* line 532: */
 /* line 533: */
{ 
{ 
IAWACTR_labinfo = (&A_R1INDEX(ZPKACTR_labels,Labno));
 /* line 534: */
 /* line 535: */
KAWACTR = (*(&(IAWACTR_labinfo->Flags))) ;
JAWACTR = !A_LB_LE(WQKACTR_labbufferemittedflag,KAWACTR);
if ( JAWACTR )
{ 
LAWACTR_level = (*(&((&(IAWACTR_labinfo->Environ))->Level)));
 /* line 537: */
 /* line 538: */
QAWACTR = OAWACTR ;
MAWACTR.data[0] = A_UNITE(PAWACTR,mode2,2,QAWACTR);
DTKACTR_labelbuffername( Labno, &RAWACTR );
MAWACTR.data[1] = A_UNITE(SAWACTR,mode2,2,RAWACTR);
 /* line 539: */
UAWACTR = ';' ;
MAWACTR.data[2] = A_UNITE(TAWACTR,mode1,1,UAWACTR);
MAWACTR.data[3] = A_UNITE(VAWACTR,mode4,4,EIAACTR_cnewline);
 /* line 540: */
if ( (LAWACTR_level==0) )
{ 
WAWACTR = KSLACTR_nonlocdecstream(LAWACTR_level);
} 
else
{ 
 /* line 541: */
WAWACTR = QSLACTR_locdecstream(LAWACTR_level);
} 
MDMACTR_writecstream(A_HISVEC(XAWACTR,MAWACTR,4,A68_66 ), WAWACTR);
 /* line 543: */
 /* line 544: */
CBWACTR = ABWACTR ;
YAWACTR.data[0] = A_UNITE(BBWACTR,mode2,2,CBWACTR);
 /* line 545: */
DTKACTR_labelbuffername( Labno, &EBWACTR );
HBWACTR = A_VC_PLUS(EBWACTR,FBWACTR) ;
YAWACTR.data[1] = A_UNITE(GBWACTR,mode2,2,HBWACTR);
LBWACTR = JBWACTR ;
YAWACTR.data[2] = A_UNITE(KBWACTR,mode2,2,LBWACTR);
WSKACTR_labelfullname( Labno, &MBWACTR );
YAWACTR.data[3] = A_UNITE(NBWACTR,mode2,2,MBWACTR);
 /* line 546: */
PBWACTR = ';' ;
YAWACTR.data[4] = A_UNITE(OBWACTR,mode1,1,PBWACTR);
YAWACTR.data[5] = A_UNITE(QBWACTR,mode4,4,EIAACTR_cnewline);
 /* line 547: */
MDMACTR_writecstream(A_HISVEC(RBWACTR,YAWACTR,6,A68_66 ), TSLACTR_labelstream(LAWACTR_level));
 /* line 548: */
 /* line 549: */
PKAAOSF_orab((&(IAWACTR_labinfo->Flags)), WQKACTR_labbufferemittedflag);
} 
} 
} 
A_PROC_EXIT(declarenonlocallabel);
return;
} 
#undef NL

A68_VOID  UBWACTR_nonlocaldec(A68_INT  Idno, A68_INT  Level)
{ 
A68_INT  ZBWACTR;  /* clause result */
A68_INT  ACWACTR_typeofid;
A68_INT  BCWACTR_previouslevel;
A68_VC  CCWACTR;  /* avoid structure result */
A68_VC  DCWACTR_fullname;
A68_INT  ECWACTR;  /* clause result */
A68_INT  HCWACTR;  /* OPERATORS - skip to mode */
A68_INT  KCWACTR;  /* OPERATORS - skip to mode */
A68_INT  LCWACTR_ctypeofid;
A68_258  MCWACTR;  /* collateral clause result */
A68_VC  NCWACTR;  /* avoid structure result */
A68_66  OCWACTR;  /* OPERATORS - mode -> union mode */
A68_66  PCWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  QCWACTR;  /* YIELD */
A68_66  RCWACTR;  /* OPERATORS - mode -> union mode */
A68_66  SCWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  TCWACTR;  /* YIELD */
A68_66  UCWACTR;  /* OPERATORS - mode -> union mode */
A68_65  VCWACTR;  /* OPERATORS - istruct -> vector */
A68_98  WCWACTR;  /* collateral clause result */
A68_INT  XCWACTR;  /* clause result */
A68_INT  YCWACTR;  /* OPERATORS - skip to mode */
A68_INT  ZCWACTR;  /* YIELD */
A68_INT  ADWACTR;  /* OPERATORS - skip to mode */
A68_BOOL  BDWACTR;  /* clause result */
A68_101  CDWACTR_id;
A68_INT * DDWACTR;  /* YIELD */
A68_99  EDWACTR;  /* OPERATORS - mode -> union mode */
A68_100  FDWACTR_rd;
A68_INT * GDWACTR;  /* YIELD */
A68_99  HDWACTR;  /* OPERATORS - mode -> union mode */
A68_99  IDWACTR;  /* OPERATORS - skip to mode */
A68_57  JDWACTR_ld;
A68_INT * KDWACTR;  /* YIELD */
A68_99  LDWACTR;  /* OPERATORS - mode -> union mode */
A68_99  MDWACTR;  /* OPERATORS - skip to mode */
A68_98  NDWACTR_rhs;
A68_INT  ODWACTR_thisrd;
A68_276  PDWACTR;  /* collateral clause result */
A68_66  SDWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  TDWACTR;  /* YIELD */
A68_VC  UDWACTR;  /* avoid structure result */
A68_66  VDWACTR;  /* OPERATORS - mode -> union mode */
A68_66  YDWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ZDWACTR;  /* YIELD */
A68_VC  AEWACTR;  /* avoid structure result */
A68_66  BEWACTR;  /* OPERATORS - mode -> union mode */
A68_66  EEWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  FEWACTR;  /* YIELD */
A68_66  GEWACTR;  /* OPERATORS - mode -> union mode */
A68_66  JEWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KEWACTR;  /* YIELD */
A68_VC  LEWACTR;  /* avoid structure result */
A68_66  MEWACTR;  /* OPERATORS - mode -> union mode */
A68_66  NEWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  OEWACTR;  /* YIELD */
A68_66  PEWACTR;  /* OPERATORS - mode -> union mode */
A68_65  QEWACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(nonlocaldec);
 /* line 559: */
 /* line 560: */
{ 
 /* line 561: */
 /* line 562: */
 /* line 550: */
 /* line 563: */
if ( (Idno<=IAAACTR_maxidno) )
{ 
ZBWACTR = VBWACTR_idtype;
} 
else
{ 
 /* line 564: */
if ( (Idno<=KAAACTR_maxrdno) )
{ 
ZBWACTR = WBWACTR_rdtype;
} 
else
{ 
 /* line 565: */
if ( (Idno<=MAAACTR_maxlibid) )
{ 
 /* line 566: */
ZBWACTR = XBWACTR_libtype;
} 
else
{ 
ZBWACTR = YBWACTR_labtype;
} 
} 
} 
ACWACTR_typeofid = ZBWACTR;
 /* line 567: */
BCWACTR_previouslevel = (Level-1);
 /* line 569: */
UTKACTR_idfullname( Idno, &CCWACTR );
DCWACTR_fullname = CCWACTR;
 /* line 571: */
 /* line 572: */
 /* line 573: */
switch ( ACWACTR_typeofid )
{ 
case 1: 
 /* line 574: */
ECWACTR = (*(&((&A_R1INDEX(WPKACTR_ids,Idno))->Mode)));
break;
case 2: 
 /* line 575: */
ECWACTR = (*(&((&A_R1INDEX(XPKACTR_rds,Idno))->Mode)));
break;
case 3: 
{ 
WXIACTR_assert(GCWACTR, A68_FALSE);
 /* line 577: */
ECWACTR = HCWACTR;
} 
break;
case 4: 
ECWACTR = TEAACTR_gotomode;
break;
default: 
{ 
WXIACTR_assert(JCWACTR, A68_FALSE);
 /* line 578: */
ECWACTR = KCWACTR;
} 
break;
} 
LCWACTR_ctypeofid = ECWACTR;
 /* line 581: */
 /* line 582: */
XKNACTR_ctype( LCWACTR_ctypeofid, &NCWACTR );
MCWACTR.data[0] = A_UNITE(OCWACTR,mode2,2,NCWACTR);
QCWACTR = ' ' ;
MCWACTR.data[1] = A_UNITE(PCWACTR,mode1,1,QCWACTR);
MCWACTR.data[2] = A_UNITE(RCWACTR,mode2,2,DCWACTR_fullname);
 /* line 583: */
TCWACTR = ';' ;
MCWACTR.data[3] = A_UNITE(SCWACTR,mode1,1,TCWACTR);
MCWACTR.data[4] = A_UNITE(UCWACTR,mode4,4,EIAACTR_cnewline);
 /* line 584: */
MDMACTR_writecstream(A_HISVEC(VCWACTR,MCWACTR,5,A68_66 ), KSLACTR_nonlocdecstream(BCWACTR_previouslevel));
 /* line 585: */
CMNACTR_alignnextstructfield(LCWACTR_ctypeofid, KSLACTR_nonlocdecstream(BCWACTR_previouslevel));
 /* line 589: */
 /* line 590: */
 /* line 591: */
WCWACTR.Mode = LCWACTR_ctypeofid;
 /* line 593: */
switch ( ACWACTR_typeofid )
{ 
case 1: 
 /* line 594: */
XCWACTR = (*(&((&((&A_R1INDEX(WPKACTR_ids,Idno))->Environ))->Level)));
break;
case 2: 
 /* line 595: */
XCWACTR = (*(&((&A_R1INDEX(XPKACTR_rds,Idno))->Declevel)));
break;
case 3: 
 /* line 596: */
XCWACTR = YCWACTR;
break;
case 4: 
 /* line 597: */
 /* line 598: */
ZCWACTR = (Idno-OAAACTR_minlab) ;
XCWACTR = (*(&((&((&A_R1INDEX(ZPKACTR_labels,ZCWACTR))->Environ))->Level)));
break;
default: 
 /* line 599: */
XCWACTR = ADWACTR;
break;
} 
 /* line 600: */
 /* line 601: */
BDWACTR = (BCWACTR_previouslevel==XCWACTR);
if ( BDWACTR )
{ 
 /* line 602: */
WCWACTR.Info = PKJACTR_defaultinfo;
} 
else
{ 
 /* line 603: */
WCWACTR.Info = TKJACTR_nonloc;
} 
 /* line 604: */
switch ( ACWACTR_typeofid )
{ 
case 1: 
{ 
DDWACTR = (&((&CDWACTR_id)->Idno)) ;
(*DDWACTR) = Idno;
 /* line 605: */
WCWACTR.Extra = A_UNITE(EDWACTR,mode4,4,CDWACTR_id);
} 
break;
case 2: 
{ 
GDWACTR = (&((&FDWACTR_rd)->Rdenno)) ;
(*GDWACTR) = Idno;
 /* line 606: */
WCWACTR.Extra = A_UNITE(HDWACTR,mode2,2,FDWACTR_rd);
} 
break;
case 3: 
 /* line 607: */
WCWACTR.Extra = IDWACTR;
break;
case 4: 
{ 
KDWACTR = (&((&JDWACTR_ld)->Labno)) ;
(*KDWACTR) = (Idno-OAAACTR_minlab);
 /* line 608: */
 /* line 609: */
WCWACTR.Extra = A_UNITE(LDWACTR,mode7,7,JDWACTR_ld);
} 
break;
default: 
 /* line 610: */
WCWACTR.Extra = MDWACTR;
break;
} 
NDWACTR_rhs = WCWACTR;
 /* line 613: */
ODWACTR_thisrd = CQLACTR_findroutine(Level);
 /* line 614: */
 /* line 615: */
TDWACTR = RDWACTR ;
PDWACTR.data[0] = A_UNITE(SDWACTR,mode2,2,TDWACTR);
LUKACTR_rdenvname( ODWACTR_thisrd, &UDWACTR );
PDWACTR.data[1] = A_UNITE(VDWACTR,mode2,2,UDWACTR);
 /* line 616: */
ZDWACTR = XDWACTR ;
PDWACTR.data[2] = A_UNITE(YDWACTR,mode2,2,ZDWACTR);
UTKACTR_idfullname( ODWACTR_thisrd, &AEWACTR );
PDWACTR.data[3] = A_UNITE(BEWACTR,mode2,2,AEWACTR);
 /* line 617: */
FEWACTR = DEWACTR ;
PDWACTR.data[4] = A_UNITE(EEWACTR,mode2,2,FEWACTR);
PDWACTR.data[5] = A_UNITE(GEWACTR,mode2,2,DCWACTR_fullname);
KEWACTR = IEWACTR ;
PDWACTR.data[6] = A_UNITE(JEWACTR,mode2,2,KEWACTR);
GZPACTR_getcfragment( (&NDWACTR_rhs), &LEWACTR );
PDWACTR.data[7] = A_UNITE(MEWACTR,mode2,2,LEWACTR);
 /* line 618: */
OEWACTR = ';' ;
PDWACTR.data[8] = A_UNITE(NEWACTR,mode1,1,OEWACTR);
PDWACTR.data[9] = A_UNITE(PEWACTR,mode4,4,EIAACTR_cnewline);
 /* line 619: */
 /* line 620: */
MDMACTR_writecstream(A_HISVEC(QEWACTR,PDWACTR,10,A68_66 ), NSLACTR_codestream(BCWACTR_previouslevel));
} 
A_PROC_EXIT(nonlocaldec);
return;
} 
#undef NL
 /* line 624: */
 /* line 626: */

A_STATIC A68_VOID  XEWACTR_declarecroutine(A68_INT  Rdenno, A68_INT  Resultmode, A68_BOOL  Global, A68_BOOL  Kept, A68_BOOL  Opsym, A68_181  Params)
{ 
A68_VC  YEWACTR;  /* avoid structure result */
A68_VC  ZEWACTR_environmentctype;
A68_BOOL  AFWACTR;  /* optbool result */
A68_BOOL  BFWACTR_usetempforresult;
A68_INT  CFWACTR;  /* clause result */
A68_INT  DFWACTR_cresultmode;
A68_BOOL  EFWACTR_fulldec;
A68_INT  FFWACTR_a68paramcount;
A68_INT  GFWACTR_cparamcount;
A68_INT  HFWACTR_codestream;
A68_VC  IFWACTR;  /* clause result */
A68_VC  JFWACTR;  /* avoid structure result */
A68_VC  KFWACTR;  /* avoid structure result */
A68_VC  LFWACTR_fnname;
A68_279  NFWACTR_generator;   /* proc value of non-global proc */
A68_278  TFWACTR;  /* avoid structure result */
A68_278  SFWACTR_paramnames;
A68_278  VFWACTR;  /* avoid structure result */
A68_278  UFWACTR_paramtypes;
A68_INT * WFWACTR_param;
A68_VC * XFWACTR_paramtype;
A68_VC * YFWACTR_paramname;
A68_INT  ZFWACTR;  /* forall loop counter */
A68_VC  AGWACTR;  /* avoid structure result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} BGWACTR; 
A68_VC  CGWACTR;  /* avoid structure result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} DGWACTR; 
A68_75  FGWACTR_prototype;   /* proc value of non-global proc */
A68_256  LJWACTR;  /* collateral clause result */
A68_66  MJWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  NJWACTR;  /* YIELD */
A68_66  OJWACTR;  /* OPERATORS - mode -> union mode */
A68_65  PJWACTR;  /* OPERATORS - istruct -> vector */
A68_66  QJWACTR;  /* OPERATORS - mode -> union mode */
A68_65  RJWACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_272  SJWACTR;  /* collateral clause result */
A68_66  VJWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  WJWACTR;  /* YIELD */
A68_66  XJWACTR;  /* OPERATORS - mode -> union mode */
A68_66  AKWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  BKWACTR;  /* YIELD */
A68_66  CKWACTR;  /* OPERATORS - mode -> union mode */
A68_65  DKWACTR;  /* OPERATORS - istruct -> vector */
A68_VC  EKWACTR;  /* avoid structure result */
A68_VC  FKWACTR_procvaluename;
A68_VC  GKWACTR;  /* avoid structure result */
A68_VC  HKWACTR_envname;
A68_INT  IKWACTR_previouslevel;
A68_269  JKWACTR;  /* collateral clause result */
A68_VC  KKWACTR;  /* avoid structure result */
A68_66  LKWACTR;  /* OPERATORS - mode -> union mode */
A68_66  MKWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  NKWACTR;  /* YIELD */
A68_66  OKWACTR;  /* OPERATORS - mode -> union mode */
A68_66  PKWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  QKWACTR;  /* YIELD */
A68_66  TKWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  UKWACTR;  /* YIELD */
A68_66  XKWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  YKWACTR;  /* YIELD */
A68_66  ZKWACTR;  /* OPERATORS - mode -> union mode */
A68_65  ALWACTR;  /* OPERATORS - istruct -> vector */
A68_VC  BLWACTR;  /* OPERATORS - istruct -> vector */
A68_56  CLWACTR;  /* OPERATORS - istruct -> vector */
A68_VC  DLWACTR_envvarname;
A68_269  ELWACTR;  /* collateral clause result */
A68_66  FLWACTR;  /* OPERATORS - mode -> union mode */
A68_66  GLWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  HLWACTR;  /* YIELD */
A68_66  ILWACTR;  /* OPERATORS - mode -> union mode */
A68_66  JLWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  KLWACTR;  /* YIELD */
A68_66  NLWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  OLWACTR;  /* YIELD */
A68_66  RLWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  SLWACTR;  /* YIELD */
A68_66  TLWACTR;  /* OPERATORS - mode -> union mode */
A68_65  ULWACTR;  /* OPERATORS - istruct -> vector */
A68_284  VLWACTR;  /* collateral clause result */
A68_66  YLWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ZLWACTR;  /* YIELD */
A68_66  AMWACTR;  /* OPERATORS - mode -> union mode */
A68_66  DMWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  EMWACTR;  /* YIELD */
A68_66  FMWACTR;  /* OPERATORS - mode -> union mode */
A68_66  IMWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JMWACTR;  /* YIELD */
A68_66  KMWACTR;  /* OPERATORS - mode -> union mode */
A68_66  NMWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  OMWACTR;  /* YIELD */
A68_66  PMWACTR;  /* OPERATORS - mode -> union mode */
A68_65  QMWACTR;  /* OPERATORS - istruct -> vector */
A68_284  RMWACTR;  /* collateral clause result */
A68_66  UMWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  VMWACTR;  /* YIELD */
A68_66  YMWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ZMWACTR;  /* YIELD */
A68_66  ANWACTR;  /* OPERATORS - mode -> union mode */
A68_66  DNWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ENWACTR;  /* YIELD */
A68_66  FNWACTR;  /* OPERATORS - mode -> union mode */
A68_66  INWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JNWACTR;  /* YIELD */
A68_66  KNWACTR;  /* OPERATORS - mode -> union mode */
A68_66  NNWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ONWACTR;  /* YIELD */
A68_66  PNWACTR;  /* OPERATORS - mode -> union mode */
A68_65  QNWACTR;  /* OPERATORS - istruct -> vector */
A68_269  RNWACTR;  /* collateral clause result */
A68_66  UNWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  VNWACTR;  /* YIELD */
A68_66  YNWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ZNWACTR;  /* YIELD */
A68_66  COWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  DOWACTR;  /* YIELD */
A68_66  EOWACTR;  /* OPERATORS - mode -> union mode */
A68_66  FOWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  GOWACTR;  /* YIELD */
A68_66  JOWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KOWACTR;  /* YIELD */
A68_66  NOWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  OOWACTR;  /* YIELD */
A68_66  POWACTR;  /* OPERATORS - mode -> union mode */
A68_65  QOWACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(declarecroutine);
 /* line 627: */
 /* line 628: */
{ 
LUKACTR_rdenvname( Rdenno, &YEWACTR );
ZEWACTR_environmentctype = YEWACTR;
 /* line 631: */
 /* line 632: */
AFWACTR = NQIACTR_nostructresultoption;
if ( AFWACTR )
{AFWACTR = VSMACTR_iscstruct(Resultmode);
}
BFWACTR_usetempforresult = AFWACTR;
 /* line 634: */
 /* line 635: */
if ( BFWACTR_usetempforresult )
{ 
CFWACTR = UEAACTR_voidmode;
} 
else
{ 
CFWACTR = Resultmode;
} 
DFWACTR_cresultmode = CFWACTR;
 /* line 637: */
EFWACTR_fulldec = !Global;
 /* line 639: */
FFWACTR_a68paramcount = Params.upb;
 /* line 641: */
 /* line 642: */
GFWACTR_cparamcount = ((FFWACTR_a68paramcount+(BFWACTR_usetempforresult))+(EFWACTR_fulldec));
 /* line 644: */
HFWACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 646: */
 /* line 647: */
if ( EFWACTR_fulldec )
{ 
 /* line 648: */
DUKACTR_rdfnname( Rdenno, &JFWACTR );
IFWACTR = JFWACTR;
} 
else
{ 
 /* line 649: */
UTKACTR_idfullname( Rdenno, &KFWACTR );
IFWACTR = KFWACTR;
} 
LFWACTR_fnname = IFWACTR;
 /* line 651: */
A_CLOSURE( NFWACTR_generator, OFWACTR_generator, PFWACTR_generator );
(( PFWACTR_generator * ) ( NFWACTR_generator.nonlocals )) -> FFWACTR_a68paramcount = FFWACTR_a68paramcount;
A_CALLPROC(NFWACTR_generator,(A68_TRUE, &TFWACTR),(A68_TRUE, &TFWACTR,(NFWACTR_generator).nonlocals));
SFWACTR_paramnames = TFWACTR;
A_CALLPROC(NFWACTR_generator,(A68_TRUE, &VFWACTR),(A68_TRUE, &VFWACTR,(NFWACTR_generator).nonlocals));
UFWACTR_paramtypes = VFWACTR;
 /* line 653: */
 /* line 654: */
ZFWACTR = Params.upb -1;
if ( ZFWACTR != UFWACTR_paramtypes.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
if ( ZFWACTR != SFWACTR_paramnames.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 3"); }
WFWACTR_param = Params.data;
XFWACTR_paramtype = UFWACTR_paramtypes.data;
YFWACTR_paramname = SFWACTR_paramnames.data;
for (;ZFWACTR-- >= 0;
(WFWACTR_param++
,XFWACTR_paramtype++
,YFWACTR_paramname++
) )
{
 /* line 655: */
UTKACTR_idfullname( (*WFWACTR_param), &AGWACTR );
BGWACTR.source = AGWACTR ;
(*YFWACTR_paramname) = (BGWACTR.destination);
 /* line 656: */
 /* line 657: */
BLNACTR_cvartype( (*(&((&A_R1INDEX(WPKACTR_ids,(*WFWACTR_param)))->Cvariabletype))), &CGWACTR );
DGWACTR.source = CGWACTR ;
(*XFWACTR_paramtype) = (DGWACTR.destination);
}
 /* line 659: */
A_CLOSURE( FGWACTR_prototype, GGWACTR_prototype, HGWACTR_prototype );
(( HGWACTR_prototype * ) ( FGWACTR_prototype.nonlocals )) -> Global = Global;
(( HGWACTR_prototype * ) ( FGWACTR_prototype.nonlocals )) -> Kept = Kept;
(( HGWACTR_prototype * ) ( FGWACTR_prototype.nonlocals )) -> DFWACTR_cresultmode = DFWACTR_cresultmode;
(( HGWACTR_prototype * ) ( FGWACTR_prototype.nonlocals )) -> LFWACTR_fnname = LFWACTR_fnname;
(( HGWACTR_prototype * ) ( FGWACTR_prototype.nonlocals )) -> GFWACTR_cparamcount = GFWACTR_cparamcount;
(( HGWACTR_prototype * ) ( FGWACTR_prototype.nonlocals )) -> FFWACTR_a68paramcount = FFWACTR_a68paramcount;
(( HGWACTR_prototype * ) ( FGWACTR_prototype.nonlocals )) -> UFWACTR_paramtypes = UFWACTR_paramtypes;
(( HGWACTR_prototype * ) ( FGWACTR_prototype.nonlocals )) -> SFWACTR_paramnames = SFWACTR_paramnames;
(( HGWACTR_prototype * ) ( FGWACTR_prototype.nonlocals )) -> BFWACTR_usetempforresult = BFWACTR_usetempforresult;
(( HGWACTR_prototype * ) ( FGWACTR_prototype.nonlocals )) -> Resultmode = Resultmode;
(( HGWACTR_prototype * ) ( FGWACTR_prototype.nonlocals )) -> EFWACTR_fulldec = EFWACTR_fulldec;
 /* line 708: */
A_CALLPROC(FGWACTR_prototype,(HSLACTR_externstream),(HSLACTR_externstream,(FGWACTR_prototype).nonlocals));
NJWACTR = ';' ;
LJWACTR.data[0] = A_UNITE(MJWACTR,mode1,1,NJWACTR);
LJWACTR.data[1] = A_UNITE(OJWACTR,mode4,4,EIAACTR_cnewline);
MDMACTR_writecstream(A_HISVEC(PJWACTR,LJWACTR,2,A68_66 ), HSLACTR_externstream);
 /* line 711: */
A_CALLPROC(FGWACTR_prototype,(HFWACTR_codestream),(HFWACTR_codestream,(FGWACTR_prototype).nonlocals));
MDMACTR_writecstream(A_HVEC(RJWACTR,A_UNITE(QJWACTR,mode4,4,EIAACTR_cnewline),A68_66 ), HFWACTR_codestream);
 /* line 713: */
 /* line 714: */
 /* line 715: */
if ( EFWACTR_fulldec )
{ 
WJWACTR = UJWACTR ;
SJWACTR.data[0] = A_UNITE(VJWACTR,mode2,2,WJWACTR);
SJWACTR.data[1] = A_UNITE(XJWACTR,mode2,2,ZEWACTR_environmentctype);
BKWACTR = ZJWACTR ;
SJWACTR.data[2] = A_UNITE(AKWACTR,mode2,2,BKWACTR);
SJWACTR.data[3] = A_UNITE(CKWACTR,mode4,4,EIAACTR_cnewline);
MDMACTR_writecstream(A_HISVEC(DKWACTR,SJWACTR,4,A68_66 ), HFWACTR_codestream);
 /* line 717: */
UTKACTR_idfullname( Rdenno, &EKWACTR );
FKWACTR_procvaluename = EKWACTR;
 /* line 718: */
LUKACTR_rdenvname( Rdenno, &GKWACTR );
HKWACTR_envname = GKWACTR;
 /* line 719: */
IKWACTR_previouslevel = (VRLACTR_currentlevel()-1);
 /* line 722: */
 /* line 723: */
XKNACTR_ctype( (*(&((&A_R1INDEX(XPKACTR_rds,Rdenno))->Mode))), &KKWACTR );
JKWACTR.data[0] = A_UNITE(LKWACTR,mode2,2,KKWACTR);
NKWACTR = ' ' ;
JKWACTR.data[1] = A_UNITE(MKWACTR,mode1,1,NKWACTR);
JKWACTR.data[2] = A_UNITE(OKWACTR,mode2,2,FKWACTR_procvaluename);
 /* line 724: */
QKWACTR = ';' ;
JKWACTR.data[3] = A_UNITE(PKWACTR,mode1,1,QKWACTR);
 /* line 725: */
 /* line 726: */
if ( AQIACTR_verboseoption )
{ 
 /* line 727: */
UKWACTR = SKWACTR ;
JKWACTR.data[4] = A_UNITE(TKWACTR,mode2,2,UKWACTR);
} 
else
{ 
 /* line 728: */
YKWACTR = WKWACTR ;
JKWACTR.data[4] = A_UNITE(XKWACTR,mode2,2,YKWACTR);
} 
JKWACTR.data[5] = A_UNITE(ZKWACTR,mode4,4,EIAACTR_cnewline);
 /* line 729: */
MDMACTR_writecstream(A_HISVEC(ALWACTR,JKWACTR,6,A68_66 ), QSLACTR_locdecstream(IKWACTR_previouslevel));
 /* line 731: */
 /* line 732: */
 /* line 734: */
if ( PQIACTR_closureonstackoption )
{ 
CLWACTR = QIMACTR_newuniquename() ;
DLWACTR_envvarname = A_HISVEC(BLWACTR,CLWACTR,7,A68_CHAR );
 /* line 735: */
 /* line 736: */
ELWACTR.data[0] = A_UNITE(FLWACTR,mode2,2,HKWACTR_envname);
HLWACTR = ' ' ;
ELWACTR.data[1] = A_UNITE(GLWACTR,mode1,1,HLWACTR);
ELWACTR.data[2] = A_UNITE(ILWACTR,mode2,2,DLWACTR_envvarname);
 /* line 737: */
KLWACTR = ';' ;
ELWACTR.data[3] = A_UNITE(JLWACTR,mode1,1,KLWACTR);
if ( AQIACTR_verboseoption )
{ 
OLWACTR = MLWACTR ;
ELWACTR.data[4] = A_UNITE(NLWACTR,mode2,2,OLWACTR);
} 
else
{ 
 /* line 738: */
SLWACTR = QLWACTR ;
ELWACTR.data[4] = A_UNITE(RLWACTR,mode2,2,SLWACTR);
} 
ELWACTR.data[5] = A_UNITE(TLWACTR,mode4,4,EIAACTR_cnewline);
 /* line 739: */
MDMACTR_writecstream(A_HISVEC(ULWACTR,ELWACTR,6,A68_66 ), QSLACTR_locdecstream(IKWACTR_previouslevel));
 /* line 741: */
 /* line 742: */
 /* line 743: */
ZLWACTR = XLWACTR ;
VLWACTR.data[0] = A_UNITE(YLWACTR,mode2,2,ZLWACTR);
VLWACTR.data[1] = A_UNITE(AMWACTR,mode2,2,FKWACTR_procvaluename);
EMWACTR = CMWACTR ;
VLWACTR.data[2] = A_UNITE(DMWACTR,mode2,2,EMWACTR);
VLWACTR.data[3] = A_UNITE(FMWACTR,mode2,2,LFWACTR_fnname);
JMWACTR = HMWACTR ;
VLWACTR.data[4] = A_UNITE(IMWACTR,mode2,2,JMWACTR);
VLWACTR.data[5] = A_UNITE(KMWACTR,mode2,2,DLWACTR_envvarname);
 /* line 744: */
OMWACTR = MMWACTR ;
VLWACTR.data[6] = A_UNITE(NMWACTR,mode2,2,OMWACTR);
VLWACTR.data[7] = A_UNITE(PMWACTR,mode4,4,EIAACTR_cnewline);
 /* line 745: */
 /* line 746: */
 /* line 748: */
MDMACTR_writecstream(A_HISVEC(QMWACTR,VLWACTR,8,A68_66 ), NSLACTR_codestream(IKWACTR_previouslevel));
} 
else
{ 
 /* line 749: */
if ( OQIACTR_closuremarkoption )
{ 
VMWACTR = TMWACTR ;
RMWACTR.data[0] = A_UNITE(UMWACTR,mode2,2,VMWACTR);
} 
else
{ 
 /* line 750: */
ZMWACTR = XMWACTR ;
RMWACTR.data[0] = A_UNITE(YMWACTR,mode2,2,ZMWACTR);
} 
RMWACTR.data[1] = A_UNITE(ANWACTR,mode2,2,FKWACTR_procvaluename);
ENWACTR = CNWACTR ;
RMWACTR.data[2] = A_UNITE(DNWACTR,mode2,2,ENWACTR);
RMWACTR.data[3] = A_UNITE(FNWACTR,mode2,2,LFWACTR_fnname);
JNWACTR = HNWACTR ;
RMWACTR.data[4] = A_UNITE(INWACTR,mode2,2,JNWACTR);
RMWACTR.data[5] = A_UNITE(KNWACTR,mode2,2,HKWACTR_envname);
 /* line 751: */
ONWACTR = MNWACTR ;
RMWACTR.data[6] = A_UNITE(NNWACTR,mode2,2,ONWACTR);
RMWACTR.data[7] = A_UNITE(PNWACTR,mode4,4,EIAACTR_cnewline);
 /* line 752: */
 /* line 753: */
MDMACTR_writecstream(A_HISVEC(QNWACTR,RMWACTR,8,A68_66 ), NSLACTR_codestream(IKWACTR_previouslevel));
} 
 /* line 756: */
 /* line 757: */
 /* line 758: */
VNWACTR = TNWACTR ;
RNWACTR.data[0] = A_UNITE(UNWACTR,mode2,2,VNWACTR);
 /* line 759: */
 /* line 760: */
if ( AQIACTR_verboseoption )
{ 
 /* line 761: */
ZNWACTR = XNWACTR ;
RNWACTR.data[1] = A_UNITE(YNWACTR,mode2,2,ZNWACTR);
} 
else
{ 
DOWACTR = BOWACTR ;
RNWACTR.data[1] = A_UNITE(COWACTR,mode2,2,DOWACTR);
} 
RNWACTR.data[2] = A_UNITE(EOWACTR,mode4,4,EIAACTR_cnewline);
 /* line 762: */
GOWACTR = '{' ;
RNWACTR.data[3] = A_UNITE(FOWACTR,mode1,1,GOWACTR);
 /* line 763: */
 /* line 764: */
if ( OQIACTR_closuremarkoption )
{ 
 /* line 765: */
KOWACTR = IOWACTR ;
RNWACTR.data[4] = A_UNITE(JOWACTR,mode2,2,KOWACTR);
} 
else
{ 
OOWACTR = MOWACTR ;
RNWACTR.data[4] = A_UNITE(NOWACTR,mode2,2,OOWACTR);
} 
RNWACTR.data[5] = A_UNITE(POWACTR,mode4,4,EIAACTR_cnewline);
 /* line 766: */
 /* line 767: */
 /* line 768: */
MDMACTR_writecstream(A_HISVEC(QOWACTR,RNWACTR,6,A68_66 ), KSLACTR_nonlocdecstream(IKWACTR_previouslevel));
} 
} 
A_PROC_EXIT(declarecroutine);
return;
} 
#undef NL

A68_VOID  ROWACTR_completerddec(void)
{ 
A68_INT  SOWACTR;  /* YIELD */
A68_109 * TOWACTR_rd;
A68_BITS  UOWACTR;  /* ADICOPS - >= */
A68_INT  VOWACTR_nonlocdecstream;
A68_256  WOWACTR;  /* collateral clause result */
A68_66  ZOWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  APWACTR;  /* YIELD */
A68_66  BPWACTR;  /* OPERATORS - mode -> union mode */
A68_65  CPWACTR;  /* OPERATORS - istruct -> vector */
A68_272  DPWACTR;  /* collateral clause result */
A68_66  GPWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  HPWACTR;  /* YIELD */
A68_VC  IPWACTR;  /* avoid structure result */
A68_66  JPWACTR;  /* OPERATORS - mode -> union mode */
A68_66  KPWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  LPWACTR;  /* YIELD */
A68_66  MPWACTR;  /* OPERATORS - mode -> union mode */
A68_65  NPWACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(completerddec);
{ 
SOWACTR = ZPLACTR_currentroutine() ;
TOWACTR_rd = (&A_R1INDEX(XPKACTR_rds,SOWACTR));
 /* line 777: */
 /* line 778: */
 /* line 779: */
 /* line 781: */
UOWACTR = (*(&(TOWACTR_rd->Flags))) ;
if ( !A_LB_GE(UOWACTR,RQKACTR_rdglobalflag) )
{ 
VOWACTR_nonlocdecstream = KSLACTR_nonlocdecstream((VRLACTR_currentlevel()-1));
 /* line 782: */
 /* line 783: */
 /* line 786: */
if ( !JQLACTR_nonlocalsused() )
{ 
APWACTR = YOWACTR ;
WOWACTR.data[0] = A_UNITE(ZOWACTR,mode2,2,APWACTR);
WOWACTR.data[1] = A_UNITE(BPWACTR,mode4,4,EIAACTR_cnewline);
 /* line 787: */
MDMACTR_writecstream(A_HISVEC(CPWACTR,WOWACTR,2,A68_66 ), VOWACTR_nonlocdecstream);
} 
 /* line 788: */
 /* line 789: */
HPWACTR = FPWACTR ;
DPWACTR.data[0] = A_UNITE(GPWACTR,mode2,2,HPWACTR);
LUKACTR_rdenvname( ZPLACTR_currentroutine(), &IPWACTR );
DPWACTR.data[1] = A_UNITE(JPWACTR,mode2,2,IPWACTR);
 /* line 790: */
LPWACTR = ';' ;
DPWACTR.data[2] = A_UNITE(KPWACTR,mode1,1,LPWACTR);
DPWACTR.data[3] = A_UNITE(MPWACTR,mode4,4,EIAACTR_cnewline);
 /* line 791: */
 /* line 792: */
 /* line 793: */
MDMACTR_writecstream(A_HISVEC(NPWACTR,DPWACTR,4,A68_66 ), VOWACTR_nonlocdecstream);
} 
} 
A_PROC_EXIT(completerddec);
return;
} 
#undef NL
 /* line 797: */
 /* line 798: */
 /* line 799: */
 /* line 800: */
 /* line 802: */

A68_VOID  VPWACTR_rddec(A68_VC  Name, A68_INT  Mode, A68_181  Paramdecnos, A68_INT  Resultmode, A68_INT  Rdenno, A68_72  Environ, A68_BITS  Props)
{ 
A68_109 * WPWACTR_rd;
A68_INT  XPWACTR_declevel;
A68_BOOL  YPWACTR;  /* optbool result */
A68_BITS  ZPWACTR;  /* clause result */
A68_BITS  AQWACTR_otherflags;
A68_BOOL  BQWACTR;  /* optbool result */
A68_BOOL  CQWACTR_global;
A68_109  DQWACTR;  /* collateral clause result */
A68_BITS  EQWACTR;  /* ADICOPS - >= */
A68_BOOL  FQWACTR;  /* optbool result */
A68_INT  GQWACTR;  /* YIELD */
A68_155  HQWACTR;  /* OPERATORS - simple index */
A68_INT  IQWACTR;  /* YIELD */
A68_157 * JQWACTR_keptinfo;
A68_BOOL  KQWACTR;  /* optbool result */
A68_BOOL  LQWACTR;  /* clause result */
A68_INT  MQWACTR;  /* YIELD */
A68_LINT * NQWACTR;  /* YIELD */
A68_BITS  OQWACTR;  /* ADICOPS - >= */
A68_BITS  PQWACTR;  /* ADICOPS - >= */
A_PROC_ENTRY(rddec);
 /* line 803: */
 /* line 804: */
{ 
WPWACTR_rd = (&A_R1INDEX(XPKACTR_rds,Rdenno));
 /* line 805: */
XPWACTR_declevel = (VRLACTR_currentlevel()-1);
 /* line 806: */
 /* line 807: */
YPWACTR = A_LB_GE(Props,OCAACTR_operatorbit);
if ( YPWACTR )
{ /* line 808: */
YPWACTR = TUKACTR_standopsym(Name);
}
 /* line 809: */
if ( YPWACTR )
{ 
 /* line 810: */
ZPWACTR = SQKACTR_rdopflag;
} 
else
{ 
ZPWACTR = OQKACTR_rdnoflags;
} 
AQWACTR_otherflags = ZPWACTR;
 /* line 811: */
 /* line 812: */
BQWACTR = (XPWACTR_declevel==0);
if ( ! BQWACTR )
{BQWACTR = PRLACTR_isgloballevel(Environ);
}
CQWACTR_global = BQWACTR;
 /* line 814: */
 /* line 815: */
if ( CQWACTR_global )
{ 
 /* line 816: */
DQWACTR.Mode = Mode;
 /* line 817: */
DQWACTR.Resultmode = Resultmode;
 /* line 818: */
DQWACTR.Declevel = XPWACTR_declevel;
 /* line 819: */
DQWACTR.Environ = Environ;
 /* line 820: */
DQWACTR.Name = Name;
 /* line 821: */
 /* line 822: */
EQWACTR = (*(&(WPWACTR_rd->Flags))) ;
FQWACTR = !A_LB_GE(EQWACTR,PQKACTR_rdkeptflag);
if ( ! FQWACTR )
{FQWACTR = !XBPACTR_rscompatiblewithpreviousversion;
}
 /* line 823: */
if ( FQWACTR )
{ 
 /* line 824: */
DQWACTR.Prefix = QIMACTR_newuniquename();
} 
else
{ 
{ 
GQWACTR = 1 ;
HQWACTR = (*(&((&A_R1INDEX(DCPACTR_specs,GQWACTR))->Keptinfo))) ;
IQWACTR = LMVACTR_keeplistposition(Rdenno) ;
JQWACTR_keptinfo = (&A_VINDEX(HQWACTR,IQWACTR));
 /* line 826: */
 /* line 827: */
KQWACTR = (*(&(JQWACTR_keptinfo->Iddec)));
if ( ! KQWACTR )
{KQWACTR = (*(&(JQWACTR_keptinfo->Optimised)));
}
LQWACTR = KQWACTR;
if ( LQWACTR )
{ 
YBPACTR_transcompatiblewithpreviousversi = A68_FALSE;
 /* line 828: */
 /* line 829: */
MQWACTR = 1 ;
NQWACTR = (&((&A_R1INDEX(DCPACTR_specs,MQWACTR))->Timeoflastchange)) ;
(*NQWACTR) = (*(&((&IYIACTR_config_info)->Translationtime)));
 /* line 830: */
 /* line 831: */
 /* line 832: */
DQWACTR.Prefix = QIMACTR_newuniquename();
} 
else
{ 
 /* line 833: */
DQWACTR.Prefix = (*(&(JQWACTR_keptinfo->Prefix)));
} 
} 
} 
 /* line 834: */
DQWACTR.Fnprefix = DNOACTR_nulluname;
 /* line 835: */
DQWACTR.Envprefix = DNOACTR_nulluname;
 /* line 836: */
 /* line 837: */
DQWACTR.Flags = (A68_BITS )((A68_BITS )((*(&(WPWACTR_rd->Flags)))|RQKACTR_rdglobalflag)|AQWACTR_otherflags);
} 
else
{ 
 /* line 838: */
DQWACTR.Mode = Mode;
 /* line 839: */
DQWACTR.Resultmode = Resultmode;
 /* line 840: */
DQWACTR.Declevel = XPWACTR_declevel;
 /* line 841: */
DQWACTR.Environ = Environ;
 /* line 842: */
DQWACTR.Name = Name;
 /* line 843: */
DQWACTR.Prefix = QIMACTR_newuniquename();
 /* line 844: */
DQWACTR.Fnprefix = QIMACTR_newuniquename();
 /* line 845: */
DQWACTR.Envprefix = QIMACTR_newuniquename();
 /* line 846: */
 /* line 847: */
DQWACTR.Flags = (A68_BITS )((*(&(WPWACTR_rd->Flags)))|AQWACTR_otherflags);
} 
(*WPWACTR_rd) = DQWACTR;
 /* line 848: */
 /* line 849: */
 /* line 850: */
 /* line 851: */
 /* line 852: */
 /* line 853: */
 /* line 854: */
 /* line 856: */
 /* line 857: */
OQWACTR = (*(&(WPWACTR_rd->Flags))) ;
PQWACTR = (*(&(WPWACTR_rd->Flags))) ;
XEWACTR_declarecroutine(Rdenno, Resultmode, CQWACTR_global, A_LB_GE(PQWACTR,PQKACTR_rdkeptflag), A_LB_GE(OQWACTR,SQKACTR_rdopflag), Paramdecnos);
} 
A_PROC_EXIT(rddec);
return;
} 
#undef NL

A68_VOID  RQWACTR_labdec(A68_139  Labeldec)
{ 
A68_INT  SQWACTR_labno;
A68_INT  TQWACTR_status;
A68_BOOL  UQWACTR_notsetting;
A68_VC  VQWACTR_name;
A68_110 * WQWACTR_labinfo;
A68_110  XQWACTR;  /* collateral clause result */
A68_72  YQWACTR;  /* avoid structure result */
A68_BITS  ARWACTR;  /* ADICOPS - <= */
A68_INT * CRWACTR;  /* YIELD */
A68_BOOL * DRWACTR;  /* YIELD */
A68_280  ERWACTR;  /* collateral clause result */
A68_VC  FRWACTR;  /* avoid structure result */
A68_66  GRWACTR;  /* OPERATORS - mode -> union mode */
A68_66  HRWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  IRWACTR;  /* YIELD */
A68_66  JRWACTR;  /* OPERATORS - mode -> union mode */
A68_65  KRWACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(labdec);
 /* line 860: */
 /* line 861: */
{ 
SQWACTR_labno = Labeldec.Labno;
 /* line 862: */
TQWACTR_status = Labeldec.Status;
 /* line 863: */
UQWACTR_notsetting = Labeldec.Notsetting;
 /* line 864: */
VQWACTR_name = Labeldec.Name;
 /* line 865: */
WQWACTR_labinfo = (&A_R1INDEX(ZPKACTR_labels,SQWACTR_labno));
 /* line 866: */
 /* line 867: */
if ( UQWACTR_notsetting )
{ 
 /* line 868: */
if ( (TQWACTR_status==LCAACTR_announcing) )
{ 
 /* line 869: */
XQWACTR.Label.Name = QIMACTR_newuniquename();
 /* line 870: */
XQWACTR.Label.Set = A68_FALSE;
 /* line 871: */
QPLACTR_currentenviron(  &YQWACTR );
XQWACTR.Environ = YQWACTR;
 /* line 872: */
XQWACTR.Name = VQWACTR_name;
 /* line 873: */
XQWACTR.Prefix = QIMACTR_newuniquename();
 /* line 875: */
XQWACTR.Flags = VQKACTR_labdeclaredflag;
 /* line 877: */
XQWACTR.Alias = 0;
(*WQWACTR_labinfo) = XQWACTR;
} 
else
{ 
 /* line 878: */
 /* line 879: */
if ( (TQWACTR_status>=MCAACTR_aliasing) )
{ 
ARWACTR = (*(&((&A_R1INDEX(ZPKACTR_labels,TQWACTR_status))->Flags))) ;
WXIACTR_assert(BRWACTR, A_LB_LE(VQKACTR_labdeclaredflag,ARWACTR));
 /* line 880: */
(*WQWACTR_labinfo) = (*(&A_R1INDEX(ZPKACTR_labels,TQWACTR_status)));
 /* line 881: */
 /* line 882: */
 /* line 884: */
CRWACTR = (&(WQWACTR_labinfo->Alias)) ;
(*CRWACTR) = TQWACTR_status;
} 
else
{ 
 /* line 885: */
 /* line 886: */
/*SKIP*/;
} 
} 
} 
else
{ 
DRWACTR = (&((&(WQWACTR_labinfo->Label))->Set)) ;
(*DRWACTR) = A68_TRUE;
 /* line 888: */
 /* line 889: */
WSKACTR_labelfullname( SQWACTR_labno, &FRWACTR );
ERWACTR.data[0] = A_UNITE(GRWACTR,mode2,2,FRWACTR);
 /* line 890: */
IRWACTR = ':' ;
ERWACTR.data[1] = A_UNITE(HRWACTR,mode1,1,IRWACTR);
ERWACTR.data[2] = A_UNITE(JRWACTR,mode4,4,EIAACTR_cnewline);
 /* line 891: */
 /* line 892: */
 /* line 893: */
MDMACTR_writecstream(A_HISVEC(KRWACTR,ERWACTR,3,A68_66 ), NSLACTR_codestream(VRLACTR_currentlevel()));
} 
} 
A_PROC_EXIT(labdec);
return;
} 
#undef NL
 /* line 897: */
 /* line 898: */
 /* line 899: */
 /* line 900: */
 /* line 901: */
 /* line 902: */
 /* line 903: */
 /* line 904: */
 /* line 905: */
 /* line 907: */

A_STATIC A68_VOID  WRWACTR_zexternaldec(A68_VC  Name, A68_56  Prefix, A68_INT  Mode, A68_INT  Decno, A68_BOOL  Optimised, A68_BOOL  Iddec, A68_BOOL  Globalproc, A68_BOOL  Genproc, A68_BOOL  Forceuse, A68_VC  Definition, A68_VC  Rhs)
{ 
A68_BOOL  ESWACTR;  /* optbool result */
A68_BOOL  FSWACTR;  /* optbool result */
A68_108 * HSWACTR;  /* clause result */
A68_BITS  ISWACTR_idflags;
A68_BITS  JSWACTR;  /* clause result */
A68_BITS  KSWACTR;  /* clause result */
A68_BOOL  LSWACTR;  /* optbool result */
A68_BITS  MSWACTR;  /* clause result */
A68_BITS  NSWACTR;  /* clause result */
A68_BITS  OSWACTR;  /* clause result */
A68_VC  PSWACTR;  /* avoid structure result */
A_PROC_ENTRY(zexternaldec);
 /* line 913: */
 /* line 915: */
{ 
 /* line 917: */
ESWACTR = (Decno<=IAAACTR_maxidno);
if ( ! ESWACTR )
{FSWACTR = (Decno>=LAAACTR_minlibid);
if ( FSWACTR )
{FSWACTR = (Decno<=MAAACTR_maxlibid);
}
ESWACTR = FSWACTR;
}
WXIACTR_assert(GSWACTR, ESWACTR);
 /* line 919: */
if ( (Decno<=IAAACTR_maxidno) )
{ 
HSWACTR = (&A_R1INDEX(WPKACTR_ids,Decno));
} 
else
{ 
HSWACTR = (&A_R1INDEX(YPKACTR_libraryids,Decno));
} 
ISWACTR_idflags = (*(&(HSWACTR->Flags)));
 /* line 921: */
 /* line 922: */
 /* line 923: */
if ( Optimised )
{ 
JSWACTR = HQKACTR_idoptimisedflag;
} 
else
{ 
 /* line 924: */
JSWACTR = AQKACTR_idnoflags;
} 
if ( Iddec )
{ 
KSWACTR = BQKACTR_ididentityflag;
} 
else
{ 
 /* line 925: */
KSWACTR = AQKACTR_idnoflags;
} 
LSWACTR = Genproc;
if ( LSWACTR )
{LSWACTR = A_LB_GE(ISWACTR_idflags,CQKACTR_idkeptflag);
}
if ( LSWACTR )
{ 
MSWACTR = KQKACTR_idkeptgenprocflag;
} 
else
{ 
 /* line 926: */
MSWACTR = AQKACTR_idnoflags;
} 
if ( Globalproc )
{ 
NSWACTR = JQKACTR_idgprocflag;
} 
else
{ 
 /* line 927: */
NSWACTR = AQKACTR_idnoflags;
} 
if ( Forceuse )
{ 
OSWACTR = MQKACTR_idforceuseflag;
} 
else
{ 
OSWACTR = AQKACTR_idnoflags;
} 
 /* line 928: */
 /* line 929: */
 /* line 930: */
ASWACTR_mybefore( Name, ' ', &PSWACTR );
BNVACTR_newidinfo(Decno, Mode, PSWACTR, Prefix, (A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )(JSWACTR|KSWACTR)|MSWACTR)|NSWACTR)|OSWACTR), Definition, Rhs);
} 
A_PROC_EXIT(zexternaldec);
return;
} 
#undef NL

A_STATIC A68_VOID  RSWACTR_zexternalcdec(A68_INT  Decno)
{ 
A68_BOOL  TSWACTR;  /* optbool result */
A68_BOOL  USWACTR;  /* optbool result */
A68_108 * WSWACTR;  /* clause result */
A68_108 * XSWACTR_id;
A68_BITS  YSWACTR;  /* ADICOPS - >= */
A68_BOOL  ZSWACTR;  /* optbool result */
A68_BITS  ATWACTR;  /* ADICOPS - >= */
A68_BOOL  BTWACTR;  /* optbool result */
A68_VC  DTWACTR;  /* OPERATORS - trim index */
A68_VC  ETWACTR;  /* OPERATORS - trim index */
A68_BOOL  GTWACTR;  /* clause result */
A68_INT  HTWACTR_mode;
A68_BITS  ITWACTR;  /* ADICOPS - >= */
A68_BOOL  JTWACTR_optimised;
A68_BITS  KTWACTR;  /* ADICOPS - >= */
A68_BOOL  LTWACTR_globalproc;
A68_VC  MTWACTR_definition;
A68_VC  NTWACTR_rhs;
A68_256  OTWACTR;  /* collateral clause result */
A68_66  PTWACTR;  /* OPERATORS - mode -> union mode */
A68_66  QTWACTR;  /* OPERATORS - mode -> union mode */
A68_65  RTWACTR;  /* OPERATORS - istruct -> vector */
A68_INT  STWACTR_deprocmode;
A68_BOOL  TTWACTR;  /* optbool result */
A68_BOOL  UTWACTR_voidresult;
A68_181  VTWACTR;  /* clause result */
A68_181  WTWACTR;  /* avoid structure result */
A68_292  YTWACTR_generator;   /* proc value of non-global proc */
A68_181  DUWACTR;  /* avoid structure result */
A68_181  EUWACTR_params;
A68_258  FUWACTR;  /* collateral clause result */
A68_66  IUWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JUWACTR;  /* YIELD */
A68_INT  KUWACTR;  /* clause result */
A68_VC  LUWACTR;  /* avoid structure result */
A68_66  MUWACTR;  /* OPERATORS - mode -> union mode */
A68_66  NUWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  OUWACTR;  /* YIELD */
A68_VC  PUWACTR;  /* avoid structure result */
A68_66  QUWACTR;  /* OPERATORS - mode -> union mode */
A68_66  RUWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  SUWACTR;  /* YIELD */
A68_65  TUWACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  UUWACTR;  /* optbool result */
A68_66  XUWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  YUWACTR;  /* YIELD */
A68_65  ZUWACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  AVWACTR_comma;
A68_INT * BVWACTR_p;
A68_INT  CVWACTR;  /* forall loop counter */
A68_256  DVWACTR;  /* collateral clause result */
A68_66  EVWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  FVWACTR;  /* YIELD */
A68_66  IVWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JVWACTR;  /* YIELD */
A68_VC  KVWACTR;  /* avoid structure result */
A68_66  LVWACTR;  /* OPERATORS - mode -> union mode */
A68_65  MVWACTR;  /* OPERATORS - istruct -> vector */
A68_280  NVWACTR;  /* collateral clause result */
A68_66  OVWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  PVWACTR;  /* YIELD */
A68_66  SVWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  TVWACTR;  /* YIELD */
A68_VC  UVWACTR;  /* avoid structure result */
A68_66  VVWACTR;  /* OPERATORS - mode -> union mode */
A68_66  WVWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  XVWACTR;  /* YIELD */
A68_65  YVWACTR;  /* OPERATORS - istruct -> vector */
A68_256  ZVWACTR;  /* collateral clause result */
A68_66  CWWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  DWWACTR;  /* YIELD */
A68_66  EWWACTR;  /* OPERATORS - mode -> union mode */
A68_65  FWWACTR;  /* OPERATORS - istruct -> vector */
A68_269  GWWACTR;  /* collateral clause result */
A68_66  JWWACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KWWACTR;  /* YIELD */
A68_VC  LWWACTR;  /* avoid structure result */
A68_66  MWWACTR;  /* OPERATORS - mode -> union mode */
A68_66  NWWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  OWWACTR;  /* YIELD */
A68_VC  PWWACTR;  /* avoid structure result */
A68_66  QWWACTR;  /* OPERATORS - mode -> union mode */
A68_66  RWWACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  SWWACTR;  /* YIELD */
A68_66  TWWACTR;  /* OPERATORS - mode -> union mode */
A68_65  UWWACTR;  /* OPERATORS - istruct -> vector */
A68_256  VWWACTR;  /* collateral clause result */
A68_66  WWWACTR;  /* OPERATORS - mode -> union mode */
A68_66  XWWACTR;  /* OPERATORS - mode -> union mode */
A68_65  YWWACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(zexternalcdec);
 /* line 940: */
 /* line 941: */
{ 
TSWACTR = (Decno<=IAAACTR_maxidno);
if ( ! TSWACTR )
{USWACTR = (Decno>=LAAACTR_minlibid);
if ( USWACTR )
{USWACTR = (Decno<=MAAACTR_maxlibid);
}
TSWACTR = USWACTR;
}
WXIACTR_assert(VSWACTR, TSWACTR);
 /* line 943: */
if ( (Decno<=IAAACTR_maxidno) )
{ 
WSWACTR = (&A_R1INDEX(WPKACTR_ids,Decno));
} 
else
{ 
WSWACTR = (&A_R1INDEX(YPKACTR_libraryids,Decno));
} 
XSWACTR_id = WSWACTR;
 /* line 946: */
 /* line 947: */
 /* line 948: */
YSWACTR = (*(&(XSWACTR_id->Flags))) ;
ZSWACTR = A_LB_GE(YSWACTR,LQKACTR_idloadedflag);
if ( ! ZSWACTR )
{ /* line 949: */
ATWACTR = (*(&(XSWACTR_id->Flags))) ;
ZSWACTR = A_LB_GE(ATWACTR,MQKACTR_idforceuseflag);
}
 /* line 950: */
if ( ! ZSWACTR )
{BTWACTR = ((*(&(XSWACTR_id->Definition))).upb>=9);
if ( BTWACTR )
{DTWACTR = (*(&(XSWACTR_id->Definition))) ;
BTWACTR = A_VC_EQ(A_VTRIM(ETWACTR,(DTWACTR),A_VTSCRIPT(&(ETWACTR.upb),(DTWACTR).upb,((*(&(XSWACTR_id->Definition))).upb-8),(DTWACTR).upb)),FTWACTR);
}
 /* line 951: */
ZSWACTR = BTWACTR;
}
 /* line 952: */
GTWACTR = ZSWACTR;
if ( GTWACTR )
{ 
HTWACTR_mode = (*(&(XSWACTR_id->Mode)));
 /* line 953: */
ITWACTR = (*(&(XSWACTR_id->Flags))) ;
JTWACTR_optimised = A_LB_GE(ITWACTR,HQKACTR_idoptimisedflag);
 /* line 954: */
KTWACTR = (*(&(XSWACTR_id->Flags))) ;
LTWACTR_globalproc = A_LB_GE(KTWACTR,JQKACTR_idgprocflag);
 /* line 955: */
MTWACTR_definition = (*(&(XSWACTR_id->Definition)));
 /* line 956: */
NTWACTR_rhs = (*(&(XSWACTR_id->Rhs)));
 /* line 958: */
 /* line 959: */
 /* line 960: */
if ( (NTWACTR_rhs.upb>0) )
{ 
OTWACTR.data[0] = A_UNITE(PTWACTR,mode2,2,NTWACTR_rhs);
OTWACTR.data[1] = A_UNITE(QTWACTR,mode4,4,EIAACTR_cnewline);
 /* line 961: */
MDMACTR_writecstream(A_HISVEC(RTWACTR,OTWACTR,2,A68_66 ), GSLACTR_importsstream);
} 
 /* line 963: */
 /* line 964: */
 /* line 965: */
if ( (MTWACTR_definition.upb<=0) )
{ 
 /* line 966: */
 /* line 967: */
if ( LTWACTR_globalproc )
{ 
STWACTR_deprocmode = A_CALLPROC(SVMACTR_deproc,(HTWACTR_mode),(HTWACTR_mode,(SVMACTR_deproc).nonlocals));
 /* line 968: */
TTWACTR = NQIACTR_nostructresultoption;
if ( TTWACTR )
{TTWACTR = VSMACTR_iscstruct(STWACTR_deprocmode);
}
UTWACTR_voidresult = TTWACTR;
 /* line 970: */
if ( NSMACTR_isprocp(HTWACTR_mode) )
{ 
A_CALLPROC(AWMACTR_parameters,(HTWACTR_mode, &WTWACTR),(HTWACTR_mode, &WTWACTR,(AWMACTR_parameters).nonlocals));
VTWACTR = WTWACTR;
} 
else
{ 
A_CLOSURE( YTWACTR_generator, ZTWACTR_generator, AUWACTR_generator );
A_CALLPROC(YTWACTR_generator,(A68_FALSE, &DUWACTR),(A68_FALSE, &DUWACTR,(YTWACTR_generator).nonlocals));
VTWACTR = DUWACTR;
} 
EUWACTR_params = VTWACTR;
 /* line 972: */
 /* line 973: */
JUWACTR = HUWACTR ;
FUWACTR.data[0] = A_UNITE(IUWACTR,mode2,2,JUWACTR);
if ( UTWACTR_voidresult )
{ 
KUWACTR = UEAACTR_voidmode;
} 
else
{ 
KUWACTR = STWACTR_deprocmode;
} 
XKNACTR_ctype( KUWACTR, &LUWACTR );
FUWACTR.data[1] = A_UNITE(MUWACTR,mode2,2,LUWACTR);
 /* line 974: */
OUWACTR = ' ' ;
FUWACTR.data[2] = A_UNITE(NUWACTR,mode1,1,OUWACTR);
UTKACTR_idfullname( Decno, &PUWACTR );
FUWACTR.data[3] = A_UNITE(QUWACTR,mode2,2,PUWACTR);
SUWACTR = '(' ;
FUWACTR.data[4] = A_UNITE(RUWACTR,mode1,1,SUWACTR);
MDMACTR_writecstream(A_HISVEC(TUWACTR,FUWACTR,5,A68_66 ), GSLACTR_importsstream);
 /* line 976: */
 /* line 977: */
UUWACTR = (EUWACTR_params.upb==0);
if ( UUWACTR )
{UUWACTR = !UTWACTR_voidresult;
}
 /* line 978: */
if ( UUWACTR )
{ 
 /* line 979: */
 /* line 980: */
YUWACTR = WUWACTR ;
MDMACTR_writecstream(A_HVEC(ZUWACTR,A_UNITE(XUWACTR,mode2,2,YUWACTR),A68_66 ), GSLACTR_importsstream);
} 
else
{ 
AVWACTR_comma = A68_FALSE;
 /* line 981: */
 /* line 982: */
CVWACTR = EUWACTR_params.upb -1;
BVWACTR_p = EUWACTR_params.data;
for (;CVWACTR-- >= 0;
(BVWACTR_p++
) )
{
 /* line 983: */
if ( AVWACTR_comma )
{ 
FVWACTR = ',' ;
DVWACTR.data[0] = A_UNITE(EVWACTR,mode1,1,FVWACTR);
} 
else
{ 
JVWACTR = HVWACTR ;
DVWACTR.data[0] = A_UNITE(IVWACTR,mode2,2,JVWACTR);
} 
WLNACTR_ctaggedtype( (*BVWACTR_p), &KVWACTR );
DVWACTR.data[1] = A_UNITE(LVWACTR,mode2,2,KVWACTR);
MDMACTR_writecstream(A_HISVEC(MVWACTR,DVWACTR,2,A68_66 ), GSLACTR_importsstream);
 /* line 984: */
 /* line 985: */
AVWACTR_comma = A68_TRUE;
}
 /* line 987: */
 /* line 988: */
 /* line 989: */
if ( UTWACTR_voidresult )
{ 
if ( AVWACTR_comma )
{ 
PVWACTR = ',' ;
NVWACTR.data[0] = A_UNITE(OVWACTR,mode1,1,PVWACTR);
} 
else
{ 
TVWACTR = RVWACTR ;
NVWACTR.data[0] = A_UNITE(SVWACTR,mode2,2,TVWACTR);
} 
XKNACTR_ctype( STWACTR_deprocmode, &UVWACTR );
NVWACTR.data[1] = A_UNITE(VVWACTR,mode2,2,UVWACTR);
XVWACTR = '*' ;
NVWACTR.data[2] = A_UNITE(WVWACTR,mode1,1,XVWACTR);
 /* line 990: */
 /* line 991: */
MDMACTR_writecstream(A_HISVEC(YVWACTR,NVWACTR,3,A68_66 ), GSLACTR_importsstream);
} 
} 
 /* line 993: */
DWWACTR = BWWACTR ;
ZVWACTR.data[0] = A_UNITE(CWWACTR,mode2,2,DWWACTR);
ZVWACTR.data[1] = A_UNITE(EWWACTR,mode4,4,EIAACTR_cnewline);
 /* line 995: */
 /* line 996: */
MDMACTR_writecstream(A_HISVEC(FWWACTR,ZVWACTR,2,A68_66 ), GSLACTR_importsstream);
} 
else
{ 
 /* line 997: */
if ( !JTWACTR_optimised )
{ 
 /* line 998: */
KWWACTR = IWWACTR ;
GWWACTR.data[0] = A_UNITE(JWWACTR,mode2,2,KWWACTR);
BLNACTR_cvartype( (*(&(YQKACTR_get_idinfo(Decno)->Cvariabletype))), &LWWACTR );
GWWACTR.data[1] = A_UNITE(MWWACTR,mode2,2,LWWACTR);
 /* line 999: */
OWWACTR = ' ' ;
GWWACTR.data[2] = A_UNITE(NWWACTR,mode1,1,OWWACTR);
UTKACTR_idfullname( Decno, &PWWACTR );
GWWACTR.data[3] = A_UNITE(QWWACTR,mode2,2,PWWACTR);
SWWACTR = ';' ;
GWWACTR.data[4] = A_UNITE(RWWACTR,mode1,1,SWWACTR);
GWWACTR.data[5] = A_UNITE(TWWACTR,mode4,4,EIAACTR_cnewline);
 /* line 1000: */
 /* line 1001: */
 /* line 1002: */
MDMACTR_writecstream(A_HISVEC(UWWACTR,GWWACTR,6,A68_66 ), GSLACTR_importsstream);
} 
} 
} 
else
{ 
VWWACTR.data[0] = A_UNITE(WWWACTR,mode2,2,MTWACTR_definition);
VWWACTR.data[1] = A_UNITE(XWWACTR,mode4,4,EIAACTR_cnewline);
 /* line 1003: */
 /* line 1004: */
MDMACTR_writecstream(A_HISVEC(YWWACTR,VWWACTR,2,A68_66 ), GSLACTR_importsstream);
} 
} 
} 
A_PROC_EXIT(zexternalcdec);
return;
} 
#undef NL

A68_VOID  ZWWACTR_initialiseidentifiers(void)
{ 
A68_112  AXWACTR;  /* procedure value */
A68_75  BXWACTR;  /* procedure value */
A_PROC_ENTRY(initialiseidentifiers);
{ 
AXWACTR.fn.fn_global = WRWACTR_zexternaldec;
AXWACTR.nonlocals = A68_NIL;
LXKACTR_externaldec = AXWACTR;
 /* line 1010: */
 /* line 1011: */
BXWACTR.fn.fn_global = RSWACTR_zexternalcdec;
BXWACTR.nonlocals = A68_NIL;
MXKACTR_externalcdec = BXWACTR;
} 
A_PROC_EXIT(initialiseidentifiers);
return;
} 
#undef NL

A68_INT  DXWACTR_leveloflabel(A68_INT  Labno)
{ 
A68_INT  EXWACTR;  /* clause result */
A_PROC_ENTRY(leveloflabel);
 /* line 1014: */
EXWACTR = (*(&((&((&A_R1INDEX(ZPKACTR_labels,Labno))->Environ))->Level)));
A_PROC_EXIT(leveloflabel);
return( EXWACTR );
} 
#undef NL

A68_VOID  GXWACTR_environoflabel(A68_INT  Labno, A68_72  *ReturnedValue)
{ 
A68_72  HXWACTR;  /* clause result */
A_PROC_ENTRY(environoflabel);
 /* line 1017: */
HXWACTR = (*(&((&A_R1INDEX(ZPKACTR_labels,Labno))->Environ)));
A_PROC_EXIT(environoflabel);
*ReturnedValue = (HXWACTR);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 5: */
 /* line 7: */
void OLVACTR(void)   /* initialise DECS identifiers */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel","-dir",".","identifiers.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/vak/Project/Algol/Algol-68RS-Source/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/vak/Project/Algol/Algol-68RS-Source/a68config/a68config.m","./values.m","./uniquenameserver.m","./unionaids.m","./moduletracer.m","./modes.m","./incmode.m","./incinstallation.m","./modules.m","./incimperatives.m","./incid.m","./idtable.m","./evaluator.m","./environment.m","./environ.m","./denotations.m","./coutput.m","./centities.m","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
AUPACTR();   /* USE values */
RHMACTR();   /* USE uniquenameserver */
HUQACTR();   /* USE unionaids */
BCHACTR();   /* USE moduletracer */
DNMACTR();   /* USE modes */
ZDAACTR();   /* USE incmode */
ODAACTR();   /* USE incinstallation */
MMOACTR();   /* USE modules */
UAAACTR();   /* USE incimperatives */
BAAACTR();   /* USE incid */
PPKACTR();   /* USE idtable */
LFVACTR();   /* USE evaluator */
HPIACTR();   /* USE environment */
BPLACTR();   /* USE environ */
LLJACTR();   /* USE denotations */
PTLACTR();   /* USE coutput */
THAACTR();   /* USE centities */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/identifiers.a68";
A_config.translation_time = "Thu Nov  5 20:46:57 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "NLVACTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 20:46:57 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS identifiers);
UEAALIB_a68config(LGAALIB_configinfo, SLVACTR);
 /* line 46: */
 /* line 56: */
 /* line 62: */
 /* line 82: */
 /* line 83: */
 /* line 168: */
 /* line 348: */
 /* line 456: */
 /* line 457: */
 /* line 526: */
 /* line 552: */
 /* line 622: */
 /* line 623: */
 /* line 770: */
 /* line 775: */
 /* line 776: */
 /* line 795: */
 /* line 796: */
 /* line 859: */
 /* line 895: */
 /* line 896: */
 /* line 932: */
 /* line 934: */
 /* line 1006: */
 /* line 1007: */
 /* line 1009: */
 /* line 1013: */
 /* line 1016: */
 /* line 1019: */
 /* line 1021: */
 /* line 1028: */
/*SKIP*/;
A_PROC_EXIT(DECS identifiers);
} 
#undef NL
/* end of translation of identifiers.a68 */
