/* UNAME:PWYACTR */
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

A_PROCEDURE(A68_VOID ,A68t59,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t59  A68_59 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t60,(void),(void *));
typedef struct A68t60  A68_60 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t61,(A68_INT ),(A68_INT ,void *));
typedef struct A68t61  A68_61 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t62,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t62  A68_62 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t63,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t63  A68_63 ;    /* PROC(INT) REF MODE26 */
struct A68t65 ;

A_PROCEDURE(A68_VOID ,A68t64,(A68_INT ,struct A68t65 ),(A68_INT ,struct A68t65 ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(INT,MODE65) VOID */
A_ROW(A68_VC ,A68t65,1);
typedef struct A68t65  A68_65 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t66,(void),(void *));
typedef struct A68t66  A68_66 ;    /* PROC BITS */
struct A68t67{
A68_INT  Cfile;
A_PAD_INT(PAD_4)
};
typedef struct A68t67  A68_67 ;    /* STRUCT(INT)  */
struct A68t68{
A68_INT  Seedfile;
A_PAD_INT(PAD_5)
};
typedef struct A68t68  A68_68 ;    /* STRUCT(INT)  */
struct A68t69 { A68_INT mode; union {
struct A68t67  mode1;
struct A68t68  mode2;
struct A68t56  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t69  A68_69 ;    /* UNION(MODE67,MODE68,MODE56,VOID)  */

A_PROCEDURE(A68_VOID ,A68t70,(A68_VC ),(A68_VC ,void *));
typedef struct A68t70  A68_70 ;    /* PROC(MODE26) VOID */
A_ROW(A68_BOOL ,A68t71,1);
typedef struct A68t71  A68_71 ;    /* [] BOOL */
struct A68t72{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_6)
A68_VC  Sourcefile;
struct A68t56  Nameseed;
A_PAD_ISTRUCT(A68_56 ,PAD_7)
struct A68t69  Nameseedorigin;
struct A68t73 * Used_modules;
A68_VC  Commandline;
struct A68t74 * Environment;
};
typedef struct A68t72  A68_72 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE56,MODE69,REF MODE73,REF MODE26,REF MODE74)  */
struct A68t73{
A68_VC  Modinfo_file;
struct A68t73 * Next;
};
typedef struct A68t73  A68_73 ;    /* STRUCT(REF MODE26,REF MODE73)  */
struct A68t74{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t74 * Next;
};
typedef struct A68t74  A68_74 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE74)  */
struct A68t76 ;
struct A68t77 ;

A_PROCEDURE(struct A68t76 *,A68t75,(A68_VC ,struct A68t77 *,A68_VC *),(A68_VC ,struct A68t77 *,A68_VC *,void *));
typedef struct A68t75  A68_75 ;    /* PROC(MODE26,REF MODE77,REF REF MODE26) REF MODE76 */
struct A68t76{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t76  A68_76 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t77{
A68_VC  Dir;
struct A68t77 * Next;
};
typedef struct A68t77  A68_77 ;    /* STRUCT(REF MODE26,REF MODE77)  */
struct A68t79 ;

A_PROCEDURE(A68_VOID ,A68t78,(struct A68t79 *,A68_BOOL ),(struct A68t79 *,A68_BOOL ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(REF MODE79,BOOL) VOID */
struct A68t81{
A68_INT  Rdenno;
A_PAD_INT(PAD_8)
};
typedef struct A68t81  A68_81 ;    /* STRUCT(INT)  */
struct A68t82{
A68_INT  Idno;
A_PAD_INT(PAD_9)
};
typedef struct A68t82  A68_82 ;    /* STRUCT(INT)  */
struct A68t83{
struct A68t56  Name;
A_PAD_ISTRUCT(A68_56 ,PAD_10)
A68_INT  Mode;
A_PAD_INT(PAD_11)
};
typedef struct A68t83  A68_83 ;    /* STRUCT(MODE56,INT)  */
struct A68t84{
A68_INT  Nse;
A_PAD_INT(PAD_12)
};
typedef struct A68t84  A68_84 ;    /* STRUCT(INT)  */
struct A68t85{
A68_INT  Fn;
A_PAD_INT(PAD_13)
A68_INT  Param;
A_PAD_INT(PAD_14)
struct A68t86 * Operands;
};
typedef struct A68t85  A68_85 ;    /* STRUCT(INT,INT,REF MODE86)  */
struct A68t80 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t81  mode2;
struct A68t82  mode4;
struct A68t83  mode5;
A68_VC  mode6;
struct A68t57  mode7;
struct A68t84  mode8;
struct A68t85  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t80  A68_80 ;    /* UNION(LONG BITS,MODE81,VOID,MODE82,MODE83,MODE26,MODE57,MODE84,MODE85)  */
struct A68t79{
A68_INT  Mode;
A_PAD_INT(PAD_15)
A68_BITS  Info;
A_PAD_BITS(PAD_16)
struct A68t80  Extra;
};
typedef struct A68t79  A68_79 ;    /* STRUCT(INT,BITS,MODE80)  */
struct A68t86{
struct A68t79  Value;
struct A68t86 * Rest;
};
typedef struct A68t86  A68_86 ;    /* STRUCT(MODE79,REF MODE86)  */

A_PROCEDURE(A68_VOID ,A68t87,(struct A68t79 *),(struct A68t79 *,void *));
typedef struct A68t87  A68_87 ;    /* PROC(REF MODE79) VOID */

A_PROCEDURE(A68_VOID ,A68t88,(struct A68t86 **),(struct A68t86 **,void *));
typedef struct A68t88  A68_88 ;    /* PROC(REF REF MODE86) VOID */
struct A68t90 ;

A_PROCEDURE(A68_VOID ,A68t89,(struct A68t90 ,struct A68t79 *,A68_INT ),(struct A68t90 ,struct A68t79 *,A68_INT ,void *));
typedef struct A68t89  A68_89 ;    /* PROC(MODE90,REF MODE79,INT) VOID */
struct A68t90{
A68_INT  Type;
A_PAD_INT(PAD_17)
A68_VC  Name;
A68_INT  Mode;
A_PAD_INT(PAD_18)
A68_INT  Decno;
A_PAD_INT(PAD_19)
};
typedef struct A68t90  A68_90 ;    /* STRUCT(INT,REF MODE26,INT,INT)  */
struct A68t92 ;

A_PROCEDURE(A68_VOID ,A68t91,(A68_INT ,struct A68t92 *),(A68_INT ,struct A68t92 *,void *));
typedef struct A68t91  A68_91 ;    /* PROC(INT) MODE92 */
struct A68t92{
A68_INT  Level;
A_PAD_INT(PAD_20)
A68_INT  Block;
A_PAD_INT(PAD_21)
};
typedef struct A68t92  A68_92 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t93,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t94,(A68_VC ,struct A68t56 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t56 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t94  A68_94 ;    /* PROC(REF MODE26,MODE56,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t95,(struct A68t90 ,struct A68t86 **),(struct A68t90 ,struct A68t86 **,void *));
typedef struct A68t95  A68_95 ;    /* PROC(MODE90,REF REF MODE86) VOID */
A_ROW(struct A68t97 ,A68t96,1);
typedef struct A68t96  A68_96 ;    /* [] MODE97 */
struct A68t97{
A68_INT  Mode;
A_PAD_INT(PAD_22)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_23)
struct A68t92  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_24)
A68_BITS  Flags;
A_PAD_BITS(PAD_25)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t97  A68_97 ;    /* STRUCT(INT,INT,MODE92,REF MODE26,REF MODE26,MODE56,BITS,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t98,(struct A68t90 ),(struct A68t90 ,void *));
typedef struct A68t98  A68_98 ;    /* PROC(MODE90) VOID */
struct A68t100 ;

A_PROCEDURE(A68_VOID ,A68t99,(struct A68t100 ),(struct A68t100 ,void *));
typedef struct A68t99  A68_99 ;    /* PROC(MODE100) VOID */
struct A68t100{
A68_VC  Name;
A68_INT  Labno;
A_PAD_INT(PAD_26)
A68_INT  Status;
A_PAD_INT(PAD_27)
A68_BOOL  Notsetting;
A_PAD_BOOL(PAD_28)
};
typedef struct A68t100  A68_100 ;    /* STRUCT(REF MODE26,INT,INT,BOOL)  */

A_PROCEDURE(A68_INT ,A68t101,(A68_INT ),(A68_INT ,void *));
typedef struct A68t101  A68_101 ;    /* PROC(INT) INT */
struct A68t103 ;

A_PROCEDURE(A68_VOID ,A68t102,(A68_VC ,A68_INT ,struct A68t103 ,A68_INT ,A68_INT ,struct A68t92 ,A68_BITS ),(A68_VC ,A68_INT ,struct A68t103 ,A68_INT ,A68_INT ,struct A68t92 ,A68_BITS ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(REF MODE26,INT,REF MODE103,INT,INT,MODE92,BITS) VOID */
A_VECTOR(A68_INT ,A68t103);
typedef struct A68t103  A68_103 ;    /* VECTOR [] INT */
A_ROW(struct A68t105 ,A68t104,1);
typedef struct A68t104  A68_104 ;    /* [] MODE105 */
struct A68t105{
A68_INT  Mode;
A_PAD_INT(PAD_29)
A68_INT  Resultmode;
A_PAD_INT(PAD_30)
A68_INT  Declevel;
A_PAD_INT(PAD_31)
struct A68t92  Environ;
A68_VC  Name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_32)
struct A68t56  Fnprefix;
A_PAD_ISTRUCT(A68_56 ,PAD_33)
struct A68t56  Envprefix;
A_PAD_ISTRUCT(A68_56 ,PAD_34)
A68_BITS  Flags;
A_PAD_BITS(PAD_35)
};
typedef struct A68t105  A68_105 ;    /* STRUCT(INT,INT,INT,MODE92,REF MODE26,MODE56,MODE56,MODE56,BITS)  */
struct A68t106{
A68_INT  Mode;
A_PAD_INT(PAD_36)
A68_VC  String;
};
typedef struct A68t106  A68_106 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t107{
A68_INT  I;
A_PAD_INT(PAD_37)
};
typedef struct A68t107  A68_107 ;    /* STRUCT(INT)  */
A_ROW(A68_INT ,A68t109,1);
typedef struct A68t109  A68_109 ;    /* [] INT */
struct A68t108{
A68_INT  Body;
A_PAD_INT(PAD_38)
A68_INT  Moduleno;
A_PAD_INT(PAD_39)
struct A68t109  Actuals;
};
typedef struct A68t108  A68_108 ;    /* STRUCT(INT,INT,REF MODE109)  */
struct A68t110{
A68_INT  Mode;
A_PAD_INT(PAD_40)
A68_INT  Number;
A_PAD_INT(PAD_41)
A68_VC  Insert;
};
typedef struct A68t110  A68_110 ;    /* STRUCT(INT,INT,REF MODE26)  */
struct A68t112{
A68_INT  Moduleno;
A_PAD_INT(PAD_42)
A68_INT  I;
A_PAD_INT(PAD_43)
A68_INT  J;
A_PAD_INT(PAD_44)
};
typedef struct A68t112  A68_112 ;    /* STRUCT(INT,INT,INT)  */
A_ROW(A68_VC ,A68t114,1);
typedef struct A68t114  A68_114 ;    /* [] REF MODE26 */
struct A68t113{
A68_INT  Moduleno;
A_PAD_INT(PAD_45)
A68_VC  Name;
A68_VC  Uname;
A68_VC  Lname;
A68_VC  Gname;
struct A68t114  Ysnames;
};
typedef struct A68t113  A68_113 ;    /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE114)  */
struct A68t111 { A68_INT mode; union {
struct A68t108  mode1;
struct A68t112  mode2;
struct A68t113  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t111  A68_111 ;    /* UNION(MODE108,MODE112,MODE113)  */
struct A68t116{
A68_INT  Nochars;
A_PAD_INT(PAD_46)
A68_INT  Nocases;
A_PAD_INT(PAD_47)
A68_INT  W;
A_PAD_INT(PAD_48)
};
typedef struct A68t116  A68_116 ;    /* STRUCT(INT,INT,INT)  */
struct A68t115{
struct A68t116  Info;
A68_VC  Text;
};
typedef struct A68t115  A68_115 ;    /* STRUCT(MODE116,REF MODE26)  */
struct A68t117{
A68_VC  Representation;
};
typedef struct A68t117  A68_117 ;    /* STRUCT(REF MODE26)  */
struct A68t119{
A68_INT  Mode;
A_PAD_INT(PAD_49)
A68_VC  Nu;
};
typedef struct A68t119  A68_119 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t120{
A68_INT  Mode;
A_PAD_INT(PAD_50)
A68_LBITS  Denotation;
A_PAD_LBITS(PAD_51)
};
typedef struct A68t120  A68_120 ;    /* STRUCT(INT,LONG BITS)  */
struct A68t121{
A68_INT  Mode;
A_PAD_INT(PAD_52)
A68_VC  Denotation;
};
typedef struct A68t121  A68_121 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t122{
A68_INT  Fn;
A_PAD_INT(PAD_53)
A68_INT  Mode;
A_PAD_INT(PAD_54)
A68_INT  Param;
A_PAD_INT(PAD_55)
};
typedef struct A68t122  A68_122 ;    /* STRUCT(INT,INT,INT)  */
struct A68t123{
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
typedef struct A68t123  A68_123 ;    /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
struct A68t124{
A68_INT  W;
A_PAD_INT(PAD_60)
};
typedef struct A68t124  A68_124 ;    /* STRUCT(INT)  */
struct A68t125{
A68_INT  Mode;
A_PAD_INT(PAD_61)
A68_BITS  Props;
A_PAD_BITS(PAD_62)
A68_INT  Param;
A_PAD_INT(PAD_63)
};
typedef struct A68t125  A68_125 ;    /* STRUCT(INT,BITS,INT)  */
struct A68t126{
A68_BOOL  Start;
A_PAD_BOOL(PAD_64)
};
typedef struct A68t126  A68_126 ;    /* STRUCT(BOOL)  */
struct A68t127{
A68_INT  Fn;
A_PAD_INT(PAD_65)
A68_INT  Mode;
A_PAD_INT(PAD_66)
A68_BITS  Props;
A_PAD_BITS(PAD_67)
A68_INT  Param;
A_PAD_INT(PAD_68)
};
typedef struct A68t127  A68_127 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t128{
A68_INT  Fn;
A_PAD_INT(PAD_69)
A68_INT  Mode;
A_PAD_INT(PAD_70)
A68_BITS  Props;
A_PAD_BITS(PAD_71)
A68_INT  Resultmode;
A_PAD_INT(PAD_72)
};
typedef struct A68t128  A68_128 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t129{
A68_INT  Fn;
A_PAD_INT(PAD_73)
A68_BITS  Props;
A_PAD_BITS(PAD_74)
};
typedef struct A68t129  A68_129 ;    /* STRUCT(INT,BITS)  */
struct A68t118 { A68_INT mode; union {
struct A68t84  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t117  mode4;
struct A68t57  mode5;
struct A68t119  mode6;
struct A68t106  mode7;
struct A68t120  mode8;
struct A68t121  mode9;
struct A68t122  mode10;
struct A68t90  mode11;
struct A68t123  mode12;
struct A68t124  mode13;
struct A68t100  mode14;
struct A68t125  mode15;
struct A68t107  mode16;
struct A68t126  mode17;
struct A68t115  mode18;
struct A68t110  mode19;
struct A68t127  mode20;
struct A68t128  mode21;
struct A68t129  mode22;
struct A68t108  mode23;
struct A68t112  mode24;
struct A68t113  mode25;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t118  A68_118 ;    /* UNION(MODE84,INT,BOOL,MODE117,MODE57,MODE119,MODE106,MODE120,MODE121,MODE122,MODE90,MODE123,MODE124,MODE100,MODE125,MODE107,MODE126,MODE115,MODE110,MODE127,MODE128,MODE129,MODE108,MODE112,MODE113,VOID)  */
struct A68t130 { A68_INT mode; union {
struct A68t84  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t117  mode4;
struct A68t57  mode5;
struct A68t119  mode6;
struct A68t106  mode7;
struct A68t120  mode8;
struct A68t121  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t130  A68_130 ;    /* UNION(MODE84,INT,BOOL,MODE117,MODE57,MODE119,MODE106,MODE120,MODE121)  */
struct A68t131 { A68_INT mode; union {
struct A68t84  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t117  mode4;
struct A68t57  mode5;
struct A68t119  mode6;
struct A68t106  mode7;
struct A68t120  mode8;
struct A68t121  mode9;
struct A68t122  mode10;
struct A68t90  mode11;
struct A68t123  mode12;
struct A68t124  mode13;
struct A68t100  mode14;
struct A68t125  mode15;
struct A68t107  mode16;
struct A68t126  mode17;
struct A68t115  mode18;
struct A68t110  mode19;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t131  A68_131 ;    /* UNION(MODE84,INT,BOOL,MODE117,MODE57,MODE119,MODE106,MODE120,MODE121,MODE122,MODE90,MODE123,MODE124,MODE100,MODE125,MODE107,MODE126,MODE115,MODE110)  */
struct A68t132{
struct A68t55  Label;
struct A68t92  Environ;
A68_VC  Name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_75)
A68_BITS  Flags;
A_PAD_BITS(PAD_76)
A68_INT  Alias;
A_PAD_INT(PAD_77)
};
typedef struct A68t132  A68_132 ;    /* STRUCT(MODE55,MODE92,REF MODE26,MODE56,BITS,INT)  */

A_PROCEDURE(struct A68t97 *,A68t133,(A68_INT ),(A68_INT ,void *));
typedef struct A68t133  A68_133 ;    /* PROC(INT) REF MODE97 */

A_PROCEDURE(A68_VOID ,A68t134,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t134  A68_134 ;    /* PROC(REF MODE26) MODE26 */
A_ROW(struct A68t132 ,A68t135,1);
typedef struct A68t135  A68_135 ;    /* [] MODE132 */

A_PROCEDURE(A68_BOOL ,A68t136,(A68_INT ),(A68_INT ,void *));
typedef struct A68t136  A68_136 ;    /* PROC(INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t137,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t109 ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t109 ,void *));
typedef struct A68t137  A68_137 ;    /* PROC(INT,INT,INT,INT,REF MODE109) VOID */

A_PROCEDURE(A68_BOOL ,A68t138,(A68_VC ),(A68_VC ,void *));
typedef struct A68t138  A68_138 ;    /* PROC(MODE26) BOOL */
struct A68t139{
struct A68t79 * Value;
struct A68t55 * End;
A68_INT  Type;
A_PAD_INT(PAD_78)
};
typedef struct A68t139  A68_139 ;    /* STRUCT(REF MODE79,REF MODE55,INT)  */
struct A68t140{
A68_INT  Parameters;
A_PAD_INT(PAD_79)
A68_INT  Result;
A_PAD_INT(PAD_80)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_81)
};
typedef struct A68t140  A68_140 ;    /* STRUCT(INT,INT,BOOL)  */
A_ISTRUCT(A68_CHAR ,32,A68t142);
typedef struct A68t142  A68_142 ;    /* STRUCT 32 CHAR */
struct A68t141{
A68_INT  Mode;
A_PAD_INT(PAD_82)
A68_INT  Offset;
A_PAD_INT(PAD_83)
struct A68t142  Name;
A_PAD_ISTRUCT(A68_142 ,PAD_84)
};
typedef struct A68t141  A68_141 ;    /* STRUCT(INT,INT,MODE142)  */

A_PROCEDURE(A68_VOID ,A68t143,(A68_INT ,struct A68t103 *),(A68_INT ,struct A68t103 *,void *));
typedef struct A68t143  A68_143 ;    /* PROC(INT) REF MODE103 */

A_PROCEDURE(A68_VOID ,A68t144,(struct A68t141 *,A68_VC *),(struct A68t141 *,A68_VC *,void *));
typedef struct A68t144  A68_144 ;    /* PROC(REF MODE141) MODE26 */

A_PROCEDURE(A68_VOID ,A68t145,(A68_INT ,A68_VC ,struct A68t83 *),(A68_INT ,A68_VC ,struct A68t83 *,void *));
typedef struct A68t145  A68_145 ;    /* PROC(INT,MODE26) MODE83 */
struct A68t147 ;

A_PROCEDURE(A68_VOID ,A68t146,(struct A68t147 ,A68_INT ),(struct A68t147 ,A68_INT ,void *));
typedef struct A68t146  A68_146 ;    /* PROC(REF MODE147,INT) VOID */
A_ROW(struct A68t148 ,A68t147,1);
typedef struct A68t147  A68_147 ;    /* [] MODE148 */
struct A68t158{
A68_INT  Mode;
A_PAD_INT(PAD_85)
};
typedef struct A68t158  A68_158 ;    /* STRUCT(INT)  */
struct A68t148 { A68_INT mode; union {
A68_INT  mode1;
struct A68t149 * mode2;
struct A68t150 * mode3;
struct A68t151 * mode4;
struct A68t152 * mode5;
struct A68t153 * mode6;
struct A68t154 * mode7;
struct A68t155 * mode8;
struct A68t156 * mode9;
struct A68t157 * mode10;
struct A68t158  mode11;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t148  A68_148 ;    /* UNION(INT,REF MODE149,REF MODE150,REF MODE151,REF MODE152,REF MODE153,REF MODE154,REF MODE155,REF MODE156,REF MODE157,MODE158)  */
struct A68t149{
A68_INT  Rdenno;
A_PAD_INT(PAD_86)
struct A68t162 * Modelist;
};
typedef struct A68t149  A68_149 ;    /* STRUCT(INT,REF MODE162)  */
struct A68t150{
A68_INT  Deproc;
A_PAD_INT(PAD_87)
struct A68t162 * Pars;
};
typedef struct A68t150  A68_150 ;    /* STRUCT(INT,REF MODE162)  */
struct A68t151{
A68_INT  Rdenno;
A_PAD_INT(PAD_88)
A68_INT  Deflex;
A_PAD_INT(PAD_89)
struct A68t161 * Sels;
};
typedef struct A68t151  A68_151 ;    /* STRUCT(INT,INT,REF MODE161)  */
struct A68t152{
A68_INT  Rdenno;
A_PAD_INT(PAD_90)
A68_INT  Imode;
A_PAD_INT(PAD_91)
A68_INT  Length;
A_PAD_INT(PAD_92)
A68_INT  Deflex;
A_PAD_INT(PAD_93)
};
typedef struct A68t152  A68_152 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t153{
A68_INT  Deproc;
A_PAD_INT(PAD_94)
};
typedef struct A68t153  A68_153 ;    /* STRUCT(INT)  */
struct A68t154{
A68_INT  Rdenno;
A_PAD_INT(PAD_95)
A68_INT  Vecmode;
A_PAD_INT(PAD_96)
A68_INT  Deflex;
A_PAD_INT(PAD_97)
};
typedef struct A68t154  A68_154 ;    /* STRUCT(INT,INT,INT)  */
struct A68t155{
A68_INT  Rdenno;
A_PAD_INT(PAD_98)
A68_INT  Mode;
A_PAD_INT(PAD_99)
A68_INT  Nods;
A_PAD_INT(PAD_100)
A68_INT  Deflex;
A_PAD_INT(PAD_101)
};
typedef struct A68t155  A68_155 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t156{
A68_INT  Mode;
A_PAD_INT(PAD_102)
struct A68t160 * Stenlist;
};
typedef struct A68t156  A68_156 ;    /* STRUCT(INT,REF MODE160)  */
struct A68t157{
A68_INT  Mode;
A_PAD_INT(PAD_103)
A68_INT  Modeproc;
A_PAD_INT(PAD_104)
struct A68t159 * El;
};
typedef struct A68t157  A68_157 ;    /* STRUCT(INT,INT,REF MODE159)  */
struct A68t159{
struct A68t157 * Am;
struct A68t159 * Rest;
};
typedef struct A68t159  A68_159 ;    /* STRUCT(REF MODE157,REF MODE159)  */
struct A68t160{
A68_INT  Mode;
A_PAD_INT(PAD_105)
A68_INT  Rdenno;
A_PAD_INT(PAD_106)
struct A68t160 * Rest;
};
typedef struct A68t160  A68_160 ;    /* STRUCT(INT,INT,REF MODE160)  */
struct A68t161{
A68_INT  Mode;
A_PAD_INT(PAD_107)
A68_INT  Fieldno;
A_PAD_INT(PAD_108)
struct A68t142  Name;
A_PAD_ISTRUCT(A68_142 ,PAD_109)
struct A68t161 * Rest;
};
typedef struct A68t161  A68_161 ;    /* STRUCT(INT,INT,MODE142,REF MODE161)  */
struct A68t162{
A68_INT  Mode;
A_PAD_INT(PAD_110)
struct A68t162 * Rest;
};
typedef struct A68t162  A68_162 ;    /* STRUCT(INT,REF MODE162)  */

A_PROCEDURE(A68_VOID ,A68t163,(A68_INT ,struct A68t140 *),(A68_INT ,struct A68t140 *,void *));
typedef struct A68t163  A68_163 ;    /* PROC(INT) MODE140 */
struct A68t165 ;

A_PROCEDURE(A68_VOID ,A68t164,(A68_INT ,struct A68t165 *),(A68_INT ,struct A68t165 *,void *));
typedef struct A68t164  A68_164 ;    /* PROC(INT) REF MODE165 */
A_VECTOR(struct A68t141 ,A68t165);
typedef struct A68t165  A68_165 ;    /* VECTOR [] MODE141 */

A_PROCEDURE(A68_INT ,A68t166,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(INT,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t167,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t167  A68_167 ;    /* PROC(INT,INT) MODE26 */

A_PROCEDURE(A68_BOOL ,A68t168,(struct A68t79 *,struct A68t79 *),(struct A68t79 *,struct A68t79 *,void *));
typedef struct A68t168  A68_168 ;    /* PROC(REF MODE79,REF MODE79) BOOL */

A_PROCEDURE(A68_BOOL ,A68t169,(struct A68t79 *),(struct A68t79 *,void *));
typedef struct A68t169  A68_169 ;    /* PROC(REF MODE79) BOOL */

A_PROCEDURE(A68_BOOL ,A68t170,(struct A68t79 *,A68_LBITS ),(struct A68t79 *,A68_LBITS ,void *));
typedef struct A68t170  A68_170 ;    /* PROC(REF MODE79,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t171,(struct A68t79 *),(struct A68t79 *,void *));
typedef struct A68t171  A68_171 ;    /* PROC(REF MODE79) LONG BITS */

A_PROCEDURE(A68_VOID ,A68t172,(struct A68t79 *,A68_VC *),(struct A68t79 *,A68_VC *,void *));
typedef struct A68t172  A68_172 ;    /* PROC(REF MODE79) MODE26 */

A_PROCEDURE(struct A68t79 *,A68t173,(struct A68t79 *,A68_INT ),(struct A68t79 *,A68_INT ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(REF MODE79,INT) REF MODE79 */

A_PROCEDURE(A68_INT ,A68t174,(struct A68t85 ),(struct A68t85 ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(MODE85) INT */

A_PROCEDURE(A68_BOOL ,A68t175,(struct A68t79 *,A68_BITS ),(struct A68t79 *,A68_BITS ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(REF MODE79,BITS) BOOL */

A_PROCEDURE(struct A68t79 *,A68t176,(struct A68t86 *,A68_INT ),(struct A68t86 *,A68_INT ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(REF MODE86,INT) REF MODE79 */

A_PROCEDURE(struct A68t86 *,A68t177,(struct A68t86 *),(struct A68t86 *,void *));
typedef struct A68t177  A68_177 ;    /* PROC(REF MODE86) REF MODE86 */
struct A68t179 ;

A_PROCEDURE(struct A68t79 *,A68t178,(A68_INT ,A68_INT ,A68_BITS ,struct A68t179 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t179 ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(INT,INT,BITS,MODE179) REF MODE79 */
A_VECTOR(struct A68t79 *,A68t179);
typedef struct A68t179  A68_179 ;    /* VECTOR [] REF MODE79 */

A_PROCEDURE(A68_VOID ,A68t180,(struct A68t79 *,A68_BOOL ,A68_VC *),(struct A68t79 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t180  A68_180 ;    /* PROC(REF MODE79,BOOL) MODE26 */

A_PROCEDURE(A68_LINT ,A68t181,(struct A68t79 ),(struct A68t79 ,void *));
typedef struct A68t181  A68_181 ;    /* PROC(MODE79) LONG INT */
struct A68t182 { A68_INT mode; union {
struct A68t79 * mode1;
A68_VC  mode2;
struct A68t83  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t182  A68_182 ;    /* UNION(REF MODE79,MODE26,MODE83)  */

A_PROCEDURE(A68_VOID ,A68t183,(struct A68t182 ,A68_VC *),(struct A68t182 ,A68_VC *,void *));
typedef struct A68t183  A68_183 ;    /* PROC(MODE182) MODE26 */
struct A68t185 ;

A_PROCEDURE(A68_VOID ,A68t184,(struct A68t185 ,A68_VC *),(struct A68t185 ,A68_VC *,void *));
typedef struct A68t184  A68_184 ;    /* PROC(MODE185) MODE26 */
A_VECTOR(struct A68t182 ,A68t185);
typedef struct A68t185  A68_185 ;    /* VECTOR [] MODE182 */

A_PROCEDURE(A68_VOID ,A68t186,(A68_VC ,struct A68t185 ,A68_VC *),(A68_VC ,struct A68t185 ,A68_VC *,void *));
typedef struct A68t186  A68_186 ;    /* PROC(MODE26,MODE185) MODE26 */

A_PROCEDURE(A68_VOID ,A68t187,(struct A68t185 ),(struct A68t185 ,void *));
typedef struct A68t187  A68_187 ;    /* PROC(MODE185) VOID */

A_PROCEDURE(A68_VOID ,A68t188,(A68_VC ,A68_INT ,struct A68t185 ,struct A68t83 *),(A68_VC ,A68_INT ,struct A68t185 ,struct A68t83 *,void *));
typedef struct A68t188  A68_188 ;    /* PROC(MODE26,INT,MODE185) MODE83 */

A_PROCEDURE(struct A68t79 *,A68t189,(struct A68t79 *),(struct A68t79 *,void *));
typedef struct A68t189  A68_189 ;    /* PROC(REF MODE79) REF MODE79 */

A_PROCEDURE(struct A68t79 *,A68t190,(A68_VC ,struct A68t79 *),(A68_VC ,struct A68t79 *,void *));
typedef struct A68t190  A68_190 ;    /* PROC(MODE26,REF MODE79) REF MODE79 */

A_PROCEDURE(A68_VOID ,A68t191,(struct A68t60 ),(struct A68t60 ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(MODE60) VOID */

A_PROCEDURE(A68_VOID ,A68t192,(struct A68t70 ),(struct A68t70 ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(MODE70) VOID */

A_PROCEDURE(A68_VOID ,A68t193,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t193  A68_193 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,56,A68t194);
typedef struct A68t194  A68_194 ;    /* STRUCT 56 CHAR */

A_PROCEDURE(A68_VOID ,A68t195,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t195  A68_195 ;    /* PROC(MODE36) VOID */
A_ISTRUCT(A68_CHAR ,1,A68t196);
typedef struct A68t196  A68_196 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t197);
typedef struct A68t197  A68_197 ;    /* STRUCT 2 CHAR */

A_PROCEDURE(struct A68t197 ,A68t198,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t198  A68_198 ;    /* PROC(BOOL) MODE197 */

A_PROCEDURE(A68_VOID ,A68t199,(A68_INT ,A68_INT ,struct A68t79 *),(A68_INT ,A68_INT ,struct A68t79 *,void *));
typedef struct A68t199  A68_199 ;    /* PROC(INT,INT,REF MODE79) VOID */
A_ISTRUCT(A68_CHAR ,5,A68t200);
typedef struct A68t200  A68_200 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_VC ,2,A68t201);
typedef struct A68t201  A68_201 ;    /* STRUCT 2 MODE26 */
A_ISTRUCT(A68_CHAR ,10,A68t202);
typedef struct A68t202  A68_202 ;    /* STRUCT 10 CHAR */
struct A68t203 { A68_INT mode; union {
struct A68t90  mode1;
struct A68t100  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t203  A68_203 ;    /* UNION(MODE90,MODE100)  */

A_PROCEDURE(A68_VOID ,A68t204,(struct A68t203 ),(struct A68t203 ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(MODE203) VOID */
A_ISTRUCT(A68_CHAR ,15,A68t205);
typedef struct A68t205  A68_205 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_VC ,3,A68t206);
typedef struct A68t206  A68_206 ;    /* STRUCT 3 MODE26 */
A_ISTRUCT(A68_CHAR ,16,A68t207);
typedef struct A68t207  A68_207 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t208);
typedef struct A68t208  A68_208 ;    /* STRUCT 6 CHAR */

A_PROCEDURE(A68_VOID ,A68t209,(struct A68t118 ,struct A68t79 *,A68_BOOL ),(struct A68t118 ,struct A68t79 *,A68_BOOL ,void *));
typedef struct A68t209  A68_209 ;    /* PROC(MODE118,REF MODE79,BOOL) VOID */
A_ISTRUCT(A68_CHAR ,27,A68t210);
typedef struct A68t210  A68_210 ;    /* STRUCT 27 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t211);
typedef struct A68t211  A68_211 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t212);
typedef struct A68t212  A68_212 ;    /* STRUCT 23 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from values --- */
extern A68_VOID  LJQACTR_valuestring(struct A68t79 *,A68_BOOL ,A68_VC *);
/* --- End of imports from values --- */


/* --- Imports from modes --- */
extern A68_INT  BTMACTR_derefmode(A68_INT );
extern A68_BOOL  OTMACTR_dynamic(A68_INT );
extern A68_VOID  WCNACTR_modename(A68_INT ,A68_VC *);
/* --- End of imports from modes --- */


/* --- Imports from incvalue --- */
/* --- End of imports from incvalue --- */


/* --- Imports from incoperfn --- */
/* --- End of imports from incoperfn --- */


/* --- Imports from idtable --- */
/* --- End of imports from idtable --- */


/* --- Imports from incmode --- */
/* --- End of imports from incmode --- */


/* --- Imports from incimperatives --- */
/* --- End of imports from incimperatives --- */


/* --- Imports from identifiers --- */
/* --- End of imports from identifiers --- */


/* --- Imports from evaluator --- */
/* --- End of imports from evaluator --- */


/* --- Imports from environment --- */
extern A68_INT  XRIACTR_linenumber;
extern A68_INT  MJJACTR_startline;
extern A68_BITS  PJJACTR_tracelevelflags(void);
extern A68_70  MSIACTR_list;
extern A68_VOID  PSIACTR_list_nonl(A68_VC );
/* --- End of imports from environment --- */


/* --- Imports from centities --- */
/* --- End of imports from centities --- */


/* --- Imports from usefulops --- */
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void OUPACTR(void);   /* values */
extern void DNMACTR(void);   /* modes */
extern void GKJACTR(void);   /* incvalue */
extern void XFAACTR(void);   /* incoperfn */
extern void PPKACTR(void);   /* idtable */
extern void ZDAACTR(void);   /* incmode */
extern void UAAACTR(void);   /* incimperatives */
extern void MMVACTR(void);   /* identifiers */
extern void JGVACTR(void);   /* evaluator */
extern void HPIACTR(void);   /* environment */
extern void THAACTR(void);   /* centities */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_194   TWYACTR = {"$Id: tracer.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,UWYACTR,TWYACTR,56)
static A68_196   CXYACTR = {""}; 
A_GISVEC(A68_VC ,DXYACTR,CXYACTR,0)
#define EXYACTR_indentstep 4
#define FXYACTR_allregenvirons 0X00100000U
#define GXYACTR_fullregister 0X00200000U
#define HXYACTR_tracespace 0X00400000U
#define IXYACTR_tracealllevels 0X00800000U
#define JXYACTR_traceids 0X01000000U
#define KXYACTR_longiddec 0X02000000U
#define LXYACTR_tracetree 0X04000000U
#define MXYACTR_tracetreeafter 0X08000000U
#define NXYACTR_traceregsbefore 0X10000000U
#define OXYACTR_traceregsafter 0X20000000U
static A68_197   RXYACTR = {" T"}; 
static A68_197   TXYACTR = {" F"}; 
static A68_200   FYYACTR = {">    "}; 
A_GISVEC(A68_VC ,GYYACTR,FYYACTR,5)
static A68_202   KYYACTR = {"SKIP value"}; 
A_GISVEC(A68_VC ,LYYACTR,KYYACTR,10)
static A68_205   XYYACTR = {"Declaration of "}; 
A_GISVEC(A68_VC ,YYYACTR,XYYACTR,15)
static A68_207   KZYACTR = {"   dynamic    : "}; 
A_GISVEC(A68_VC ,LZYACTR,KZYACTR,16)
static A68_208   RZYACTR = {"label "}; 
A_GISVEC(A68_VC ,SZYACTR,RZYACTR,6)
static A68_208   CAZACTR = {"label "}; 
A_GISVEC(A68_VC ,DAZACTR,CAZACTR,6)
static A68_210   OAZACTR = {"Value tree for r. h. s. is "}; 
A_GISVEC(A68_VC ,PAZACTR,OAZACTR,27)
static A68_211   UAZACTR = {"Value tree on line "}; 
A_GISVEC(A68_VC ,VAZACTR,UAZACTR,19)
static A68_211   BBZACTR = {"Value tree on line "}; 
A_GISVEC(A68_VC ,CBZACTR,BBZACTR,19)
static A68_212   HBZACTR = {"Value after evaluation:"}; 
A_GISVEC(A68_VC ,IBZACTR,HBZACTR,23)

A_STATIC A68_VOID  WWYACTR_print(A68_36  Printlist);

A_STATIC A68_VOID  BXYACTR_printline(A68_36  Printlist);

A_STATIC A68_197  QXYACTR_booled(A68_BOOL  B);

A_STATIC A68_VOID  XXYACTR_printvaluetree(A68_INT  Indent, A68_INT  Opno, A68_79 * Value);

A_STATIC A68_VOID  VYYACTR_printiddec(A68_203  Dec);

A68_VOID  IAZACTR_trace(A68_118  Currentimperative, A68_79 * Tree, A68_BOOL  Aftereval);

A_STATIC A68_VOID  WWYACTR_print(A68_36  Printlist)
{ 
A68_VC  XWYACTR_el A_UNUSED = {0};
A68_VC * YWYACTR;  /* forall control - []x */
A68_INT  ZWYACTR;  /* forall loop counter */
A_PROC_ENTRY(print);
 /* line 46: */
ZWYACTR = Printlist.upb -1;
YWYACTR = Printlist.data;
for (;ZWYACTR-- >= 0;
(YWYACTR++
) )
{
XWYACTR_el = *YWYACTR;
(void)(PSIACTR_list_nonl(XWYACTR_el));
}
A_PROC_EXIT(print);
return;
} 
#undef NL

A_STATIC A68_VOID  BXYACTR_printline(A68_36  Printlist)
{ 
A_PROC_ENTRY(printline);
 /* line 49: */
{ 
(void)(WWYACTR_print(Printlist));
(void)(A_CALLPROC(MSIACTR_list,(DXYACTR),(DXYACTR,(MSIACTR_list).nonlocals)));
} 
A_PROC_EXIT(printline);
return;
} 
#undef NL

A_STATIC A68_197  QXYACTR_booled(A68_BOOL  B)
{ 
A68_197  SXYACTR;  /* clause result */
A_PROC_ENTRY(booled);
if (B)
{ 
SXYACTR = RXYACTR;
} 
else
{ 
SXYACTR = TXYACTR;
} 
A_PROC_EXIT(booled);
return( SXYACTR );
} 
#undef NL

A_STATIC A68_VOID  XXYACTR_printvaluetree(A68_INT  Indent, A68_INT  Opno, A68_79 * Value)
{ 
A68_86 * YXYACTR_ops A_UNUSED = {0};
A68_INT  ZXYACTR;  /* to part of loop */
A68_INT  AYYACTR;  /* loop control */
A68_VC  BYYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_36  CYYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_201  DYYACTR;  /* collateral clause result */
A68_VC  EYYACTR;  /* avoid structure result */
A68_36  HYYACTR;  /* OPERATORS - istruct -> vector */
union {  /* BIOP 99 */
A68_79   source;
A68_LINT   destination;
} IYYACTR; 
A68_LINT  JYYACTR = {0};  /* OPERATORS - skip to mode */
A68_36  MYYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_80  NYYACTR;  /* united object - for case conformity */
A68_85  OYYACTR_o A_UNUSED = {0};
A68_VC  PYYACTR;  /* avoid structure result */
A68_36  QYYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  RYYACTR;  /* avoid structure result */
A68_36  SYYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  TYYACTR_opsno A_UNUSED = {0};
A_PROC_ENTRY(printvaluetree);
 /* line 68: */
 /* line 69: */
{ 
YXYACTR_ops = (A68_86 *)A68_NIL;
 /* line 70: */
ZXYACTR = Indent;
for ( AYYACTR = 1;
AYYACTR <= ZXYACTR;
AYYACTR += 1 )
{ 
(void)(WWYACTR_print(A_HVEC(CYYACTR,A_HVEC(BYYACTR,' ',A68_CHAR ),A68_VC )));
}
 /* line 71: */
ROAAOSF_whole( Opno, 0, &EYYACTR );
DYYACTR.data[0] = EYYACTR;
DYYACTR.data[1] = GYYACTR;
(void)(WWYACTR_print(A_HISVEC(HYYACTR,DYYACTR,2,A68_VC )));
 /* line 72: */
 /* line 74: */
IYYACTR.source = (*Value) ;
if ((IYYACTR.destination)==JYYACTR)
{ 
 /* line 75: */
(void)(BXYACTR_printline(A_HVEC(MYYACTR,LYYACTR,A68_VC )));
} 
else
{ 
 /* line 76: */
NYYACTR = (*(&(Value->Extra))) ;
switch ( NYYACTR.mode )
{ 
case 9: /* STRUCT(INT,INT,REF MODE86)  */
OYYACTR_o = (NYYACTR.data.mode9);
 /* line 77: */
{ 
LJQACTR_valuestring( Value, A68_FALSE, &PYYACTR );
(void)(BXYACTR_printline(A_HVEC(QYYACTR,PYYACTR,A68_VC )));
 /* line 78: */
 /* line 79: */
 /* line 80: */
YXYACTR_ops = OYYACTR_o.Operands;
} 
break;
default: 
 /* line 81: */
LJQACTR_valuestring( Value, A68_FALSE, &RYYACTR );
(void)(BXYACTR_printline(A_HVEC(SYYACTR,RYYACTR,A68_VC )));
break;
} 
 /* line 82: */
 /* line 83: */
for ( TYYACTR_opsno = 1;;
TYYACTR_opsno += 1 ) 
{ 
 /* line 84: */
if ( !((YXYACTR_ops!=(A68_86 *)A68_NIL)) ) break;
(void)(XXYACTR_printvaluetree((Indent+EXYACTR_indentstep), TYYACTR_opsno, (&(YXYACTR_ops->Value))));
 /* line 85: */
 /* line 86: */
(void)(YXYACTR_ops = (*(&(YXYACTR_ops->Rest))));
}
 /* line 87: */
 /* line 88: */
} 
} 
A_PROC_EXIT(printvaluetree);
return;
} 
#undef NL

A_STATIC A68_VOID  VYYACTR_printiddec(A68_203  Dec)
{ 
A68_36  WYYACTR;  /* OPERATORS - vacuum */
A68_36  ZYYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BITS  AZYACTR;  /* ADICOPS - >= */
A68_203  BZYACTR;  /* united object - for case conformity */
A68_90  CZYACTR_id A_UNUSED = {0};
A68_INT  DZYACTR;  /* clause result */
A68_INT  EZYACTR_lmode A_UNUSED = {0};
A68_206  FZYACTR;  /* collateral clause result */
A68_VC  GZYACTR;  /* avoid structure result */
A68_VC  HZYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_36  IZYACTR;  /* OPERATORS - istruct -> vector */
A68_201  JZYACTR;  /* collateral clause result */
A68_VC  MZYACTR;  /* OPERATORS - istruct -> vector */
A68_197  NZYACTR;  /* OPERATORS - istruct -> vector */
A68_36  OZYACTR;  /* OPERATORS - istruct -> vector */
A68_100  PZYACTR_l A_UNUSED = {0};
A68_201  QZYACTR;  /* collateral clause result */
A68_36  TZYACTR;  /* OPERATORS - istruct -> vector */
A68_203  UZYACTR;  /* united object - for case conformity */
A68_90  VZYACTR_id A_UNUSED = {0};
A68_206  WZYACTR;  /* collateral clause result */
A68_VC  XZYACTR;  /* avoid structure result */
A68_VC  YZYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_36  ZZYACTR;  /* OPERATORS - istruct -> vector */
A68_100  AAZACTR_l A_UNUSED = {0};
A68_201  BAZACTR;  /* collateral clause result */
A68_36  EAZACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(printiddec);
 /* line 91: */
 /* line 92: */
{ 
(void)(BXYACTR_printline(A_VVAC(WYYACTR)));
 /* line 93: */
(void)(WWYACTR_print(A_HVEC(ZYYACTR,YYYACTR,A68_VC )));
 /* line 94: */
 /* line 95: */
AZYACTR = PJJACTR_tracelevelflags() ;
if (A_LB_GE(AZYACTR,KXYACTR_longiddec))
{ 
 /* line 96: */
BZYACTR = Dec ;
switch ( BZYACTR.mode )
{ 
case 1: /* STRUCT(INT,REF MODE26,INT,INT)  */
CZYACTR_id = (BZYACTR.data.mode1);
 /* line 97: */
 /* line 99: */
{ 
 /* line 100: */
if ((CZYACTR_id.Type==2)|(CZYACTR_id.Type==5))
{ 
 /* line 101: */
 /* line 102: */
DZYACTR = BTMACTR_derefmode(CZYACTR_id.Mode);
} 
else
{ 
DZYACTR = CZYACTR_id.Mode;
} 
EZYACTR_lmode = DZYACTR;
 /* line 103: */
 /* line 104: */
WCNACTR_modename( CZYACTR_id.Mode, &GZYACTR );
FZYACTR.data[0] = GZYACTR;
FZYACTR.data[1] = A_HVEC(HZYACTR,' ',A68_CHAR );
 /* line 105: */
FZYACTR.data[2] = CZYACTR_id.Name;
(void)(BXYACTR_printline(A_HISVEC(IZYACTR,FZYACTR,3,A68_VC )));
 /* line 106: */
 /* line 107: */
JZYACTR.data[0] = LZYACTR;
 /* line 108: */
NZYACTR = QXYACTR_booled(OTMACTR_dynamic(EZYACTR_lmode)) ;
JZYACTR.data[1] = A_HISVEC(MZYACTR,NZYACTR,2,A68_CHAR );
 /* line 109: */
 /* line 110: */
(void)(BXYACTR_printline(A_HISVEC(OZYACTR,JZYACTR,2,A68_VC )));
} 
break;
case 2: /* STRUCT(REF MODE26,INT,INT,BOOL)  */
PZYACTR_l = (BZYACTR.data.mode2);
QZYACTR.data[0] = SZYACTR;
QZYACTR.data[1] = PZYACTR_l.Name;
 /* line 111: */
 /* line 112: */
(void)(BXYACTR_printline(A_HISVEC(TZYACTR,QZYACTR,2,A68_VC )));
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
else
{ 
 /* line 113: */
UZYACTR = Dec ;
switch ( UZYACTR.mode )
{ 
case 1: /* STRUCT(INT,REF MODE26,INT,INT)  */
VZYACTR_id = (UZYACTR.data.mode1);
 /* line 114: */
WCNACTR_modename( VZYACTR_id.Mode, &XZYACTR );
WZYACTR.data[0] = XZYACTR;
WZYACTR.data[1] = A_HVEC(YZYACTR,' ',A68_CHAR );
WZYACTR.data[2] = VZYACTR_id.Name;
 /* line 115: */
(void)(BXYACTR_printline(A_HISVEC(ZZYACTR,WZYACTR,3,A68_VC )));
break;
case 2: /* STRUCT(REF MODE26,INT,INT,BOOL)  */
AAZACTR_l = (UZYACTR.data.mode2);
 /* line 116: */
BAZACTR.data[0] = DAZACTR;
BAZACTR.data[1] = AAZACTR_l.Name;
 /* line 117: */
 /* line 118: */
 /* line 119: */
(void)(BXYACTR_printline(A_HISVEC(EAZACTR,BAZACTR,2,A68_VC )));
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
} 
A_PROC_EXIT(printiddec);
return;
} 
#undef NL
 /* line 123: */
 /* line 125: */

A68_VOID  IAZACTR_trace(A68_118  Currentimperative, A68_79 * Tree, A68_BOOL  Aftereval)
{ 
A68_BITS  JAZACTR;  /* ADICOPS - >= */
A68_118  KAZACTR;  /* united object - for case conformity */
A68_203  LAZACTR_dec A_UNUSED = {0};
A68_BITS  MAZACTR;  /* ADICOPS - >= */
A68_36  NAZACTR;  /* OPERATORS - vacuum */
A68_36  QAZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BITS  RAZACTR;  /* ADICOPS - >= */
A68_36  SAZACTR;  /* OPERATORS - vacuum */
A68_201  TAZACTR;  /* collateral clause result */
A68_VC  WAZACTR;  /* avoid structure result */
A68_36  XAZACTR;  /* OPERATORS - istruct -> vector */
A68_BITS  YAZACTR;  /* ADICOPS - >= */
A68_36  ZAZACTR;  /* OPERATORS - vacuum */
A68_201  ABZACTR;  /* collateral clause result */
A68_VC  DBZACTR;  /* avoid structure result */
A68_36  EBZACTR;  /* OPERATORS - istruct -> vector */
A68_BITS  FBZACTR;  /* ADICOPS - >= */
A68_36  GBZACTR;  /* OPERATORS - vacuum */
A68_36  JBZACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(trace);
 /* line 126: */
 /* line 127: */
if (XRIACTR_linenumber>=MJJACTR_startline)
{ 
 /* line 128: */
 /* line 129: */
JAZACTR = PJJACTR_tracelevelflags() ;
if (A_LB_GE(JAZACTR,JXYACTR_traceids)&(!Aftereval))
{ 
 /* line 130: */
KAZACTR = Currentimperative ;
switch ( KAZACTR.mode )
{ 
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
case 14: /* STRUCT(REF MODE26,INT,INT,BOOL)  */
A_UNCPY(LAZACTR_dec,KAZACTR);
LAZACTR_dec.mode = "\000\0\0\0\0\0\0\0\0\0\0\001\0\0\002\0\0\0\0\0\0\0\0\0\0\0\000"[KAZACTR.mode];
 /* line 131: */
 /* line 132: */
{ 
(void)(VYYACTR_printiddec(LAZACTR_dec));
 /* line 133: */
 /* line 134: */
MAZACTR = PJJACTR_tracelevelflags() ;
if (A_LB_GE(MAZACTR,LXYACTR_tracetree))
{ 
(void)(BXYACTR_printline(A_VVAC(NAZACTR)));
 /* line 135: */
(void)(BXYACTR_printline(A_HVEC(QAZACTR,PAZACTR,A68_VC )));
 /* line 136: */
 /* line 137: */
 /* line 138: */
 /* line 139: */
 /* line 140: */
(void)(XXYACTR_printvaluetree(0, 1, Tree));
} 
} 
break;
default: 
 /* line 141: */
RAZACTR = PJJACTR_tracelevelflags() ;
if (A_LB_GE(RAZACTR,LXYACTR_tracetree))
{ 
(void)(BXYACTR_printline(A_VVAC(SAZACTR)));
 /* line 142: */
TAZACTR.data[0] = VAZACTR;
ROAAOSF_whole( XRIACTR_linenumber, 0, &WAZACTR );
TAZACTR.data[1] = WAZACTR;
(void)(BXYACTR_printline(A_HISVEC(XAZACTR,TAZACTR,2,A68_VC )));
 /* line 143: */
 /* line 144: */
 /* line 145: */
 /* line 146: */
(void)(XXYACTR_printvaluetree(0, 1, Tree));
} 
break;
} 
} 
else
{ 
 /* line 147: */
 /* line 148: */
YAZACTR = PJJACTR_tracelevelflags() ;
if (A_LB_GE(YAZACTR,LXYACTR_tracetree)&(!Aftereval))
{ 
(void)(BXYACTR_printline(A_VVAC(ZAZACTR)));
 /* line 149: */
ABZACTR.data[0] = CBZACTR;
ROAAOSF_whole( XRIACTR_linenumber, 0, &DBZACTR );
ABZACTR.data[1] = DBZACTR;
(void)(BXYACTR_printline(A_HISVEC(EBZACTR,ABZACTR,2,A68_VC )));
 /* line 150: */
 /* line 151: */
(void)(XXYACTR_printvaluetree(0, 1, Tree));
} 
else
{ 
 /* line 152: */
 /* line 153: */
FBZACTR = PJJACTR_tracelevelflags() ;
if (A_LB_GE(FBZACTR,MXYACTR_tracetreeafter)&Aftereval)
{ 
(void)(BXYACTR_printline(A_VVAC(GBZACTR)));
 /* line 154: */
(void)(BXYACTR_printline(A_HVEC(JBZACTR,IBZACTR,A68_VC )));
 /* line 155: */
 /* line 156: */
 /* line 157: */
(void)(XXYACTR_printvaluetree(0, 1, Tree));
} 
} 
} 
} 
A_PROC_EXIT(trace);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 6: */
void QWYACTR(void)   /* initialise DECS tracer */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel","-dir",".","tracer.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/vak/Project/Algol/Algol-68RS-Source/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/vak/Project/Algol/Algol-68RS-Source/a68config/a68config.m","./values.m","./modes.m","./incvalue.m","./incoperfn.m","./idtable.m","./incmode.m","./incimperatives.m","./identifiers.m","./evaluator.m","./environment.m","./centities.m","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config A_UNUSED;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
OUPACTR();   /* USE values */
DNMACTR();   /* USE modes */
GKJACTR();   /* USE incvalue */
XFAACTR();   /* USE incoperfn */
PPKACTR();   /* USE idtable */
ZDAACTR();   /* USE incmode */
UAAACTR();   /* USE incimperatives */
MMVACTR();   /* USE identifiers */
JGVACTR();   /* USE evaluator */
HPIACTR();   /* USE environment */
THAACTR();   /* USE centities */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/tracer.a68";
A_config.translation_time = "Thu Nov  5 21:11:00 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "PWYACTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 21:11:00 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS tracer);
(void)(UEAALIB_a68config(LGAALIB_configinfo, UWYACTR));
 /* line 45: */
 /* line 48: */
 /* line 51: */
 /* line 53: */
 /* line 54: */
 /* line 55: */
 /* line 56: */
 /* line 57: */
 /* line 58: */
 /* line 59: */
 /* line 60: */
 /* line 61: */
 /* line 62: */
 /* line 63: */
 /* line 65: */
 /* line 67: */
 /* line 90: */
 /* line 121: */
 /* line 122: */
 /* line 159: */
 /* line 161: */
 /* line 163: */
/*SKIP*/;
A_PROC_EXIT(DECS tracer);
} 
#undef NL
/* end of translation of tracer.a68 */
