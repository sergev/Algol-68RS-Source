/* UNAME:LZZACTR */
#include <algol68/Asupport.h>

A_PROCEDURE(A68_VOID ,A68t31,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t31  A68_31 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t32,(void),(void *));
typedef struct A68t32  A68_32 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t33,(A68_INT ),(A68_INT ,void *));
typedef struct A68t33  A68_33 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t34,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t34  A68_34 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t35,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t35  A68_35 ;    /* PROC(INT) REF MODE26 */
struct A68t37 ;

A_PROCEDURE(A68_VOID ,A68t36,(A68_INT ,struct A68t37 ),(A68_INT ,struct A68t37 ,void *));
typedef struct A68t36  A68_36 ;    /* PROC(INT,MODE37) VOID */
A_ROW(A68_VC ,A68t37,1);
typedef struct A68t37  A68_37 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t38,(void),(void *));
typedef struct A68t38  A68_38 ;    /* PROC BITS */
struct A68t39{
A68_INT  Cfile;
A_PAD_INT(PAD_1)
};
typedef struct A68t39  A68_39 ;    /* STRUCT(INT)  */
struct A68t40{
A68_INT  Seedfile;
A_PAD_INT(PAD_2)
};
typedef struct A68t40  A68_40 ;    /* STRUCT(INT)  */
A_ISTRUCT(A68_CHAR ,7,A68t42);
typedef struct A68t42  A68_42 ;    /* STRUCT 7 CHAR */
struct A68t41 { A68_INT mode; union {
struct A68t39  mode1;
struct A68t40  mode2;
struct A68t42  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t41  A68_41 ;    /* UNION(MODE39,MODE40,MODE42,VOID)  */

A_PROCEDURE(A68_VOID ,A68t43,(A68_VC ),(A68_VC ,void *));
typedef struct A68t43  A68_43 ;    /* PROC(MODE26) VOID */
A_ROW(A68_BOOL ,A68t44,1);
typedef struct A68t44  A68_44 ;    /* [] BOOL */
struct A68t45{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_3)
A68_VC  Sourcefile;
struct A68t42  Nameseed;
A_PAD_ISTRUCT(A68_42 ,PAD_4)
struct A68t41  Nameseedorigin;
struct A68t46 * Used_modules;
A68_VC  Commandline;
struct A68t47 * Environment;
};
typedef struct A68t45  A68_45 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE42,MODE41,REF MODE46,REF MODE26,REF MODE47)  */
struct A68t46{
A68_VC  Modinfo_file;
struct A68t46 * Next;
};
typedef struct A68t46  A68_46 ;    /* STRUCT(REF MODE26,REF MODE46)  */
struct A68t47{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t47 * Next;
};
typedef struct A68t47  A68_47 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE47)  */
struct A68t49 ;
struct A68t50 ;

A_PROCEDURE(struct A68t49 *,A68t48,(A68_VC ,struct A68t50 *,A68_VC *),(A68_VC ,struct A68t50 *,A68_VC *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(MODE26,REF MODE50,REF REF MODE26) REF MODE49 */
struct A68t49{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t49  A68_49 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t50{
A68_VC  Dir;
struct A68t50 * Next;
};
typedef struct A68t50  A68_50 ;    /* STRUCT(REF MODE26,REF MODE50)  */
struct A68t52 ;

A_PROCEDURE(A68_VOID ,A68t51,(struct A68t52 *,A68_BOOL ),(struct A68t52 *,A68_BOOL ,void *));
typedef struct A68t51  A68_51 ;    /* PROC(REF MODE52,BOOL) VOID */
struct A68t54{
A68_INT  Rdenno;
A_PAD_INT(PAD_5)
};
typedef struct A68t54  A68_54 ;    /* STRUCT(INT)  */
struct A68t55{
A68_INT  Idno;
A_PAD_INT(PAD_6)
};
typedef struct A68t55  A68_55 ;    /* STRUCT(INT)  */
struct A68t56{
struct A68t42  Name;
A_PAD_ISTRUCT(A68_42 ,PAD_7)
A68_INT  Mode;
A_PAD_INT(PAD_8)
};
typedef struct A68t56  A68_56 ;    /* STRUCT(MODE42,INT)  */
struct A68t57{
A68_INT  Labno;
A_PAD_INT(PAD_9)
};
typedef struct A68t57  A68_57 ;    /* STRUCT(INT)  */
struct A68t58{
A68_INT  Nse;
A_PAD_INT(PAD_10)
};
typedef struct A68t58  A68_58 ;    /* STRUCT(INT)  */
struct A68t59{
A68_INT  Fn;
A_PAD_INT(PAD_11)
A68_INT  Param;
A_PAD_INT(PAD_12)
struct A68t60 * Operands;
};
typedef struct A68t59  A68_59 ;    /* STRUCT(INT,INT,REF MODE60)  */
struct A68t53 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t54  mode2;
struct A68t55  mode4;
struct A68t56  mode5;
A68_VC  mode6;
struct A68t57  mode7;
struct A68t58  mode8;
struct A68t59  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t53  A68_53 ;    /* UNION(LONG BITS,MODE54,VOID,MODE55,MODE56,MODE26,MODE57,MODE58,MODE59)  */
struct A68t52{
A68_INT  Mode;
A_PAD_INT(PAD_13)
A68_BITS  Info;
A_PAD_BITS(PAD_14)
struct A68t53  Extra;
};
typedef struct A68t52  A68_52 ;    /* STRUCT(INT,BITS,MODE53)  */
struct A68t60{
struct A68t52  Value;
struct A68t60 * Rest;
};
typedef struct A68t60  A68_60 ;    /* STRUCT(MODE52,REF MODE60)  */

A_PROCEDURE(A68_VOID ,A68t61,(struct A68t52 *),(struct A68t52 *,void *));
typedef struct A68t61  A68_61 ;    /* PROC(REF MODE52) VOID */

A_PROCEDURE(A68_VOID ,A68t62,(struct A68t60 **),(struct A68t60 **,void *));
typedef struct A68t62  A68_62 ;    /* PROC(REF REF MODE60) VOID */
struct A68t64 ;

A_PROCEDURE(A68_VOID ,A68t63,(struct A68t64 ,struct A68t52 *,A68_BOOL ),(struct A68t64 ,struct A68t52 *,A68_BOOL ,void *));
typedef struct A68t63  A68_63 ;    /* PROC(MODE64,REF MODE52,BOOL) VOID */
struct A68t65{
A68_VC  Representation;
};
typedef struct A68t65  A68_65 ;    /* STRUCT(REF MODE26)  */
struct A68t66{
A68_INT  Mode;
A_PAD_INT(PAD_15)
A68_VC  Nu;
};
typedef struct A68t66  A68_66 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t67{
A68_INT  Mode;
A_PAD_INT(PAD_16)
A68_VC  String;
};
typedef struct A68t67  A68_67 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t68{
A68_INT  Mode;
A_PAD_INT(PAD_17)
A68_LBITS  Denotation;
A_PAD_LBITS(PAD_18)
};
typedef struct A68t68  A68_68 ;    /* STRUCT(INT,LONG BITS)  */
struct A68t69{
A68_INT  Mode;
A_PAD_INT(PAD_19)
A68_VC  Denotation;
};
typedef struct A68t69  A68_69 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t70{
A68_INT  Fn;
A_PAD_INT(PAD_20)
A68_INT  Mode;
A_PAD_INT(PAD_21)
A68_INT  Param;
A_PAD_INT(PAD_22)
};
typedef struct A68t70  A68_70 ;    /* STRUCT(INT,INT,INT)  */
struct A68t71{
A68_INT  Type;
A_PAD_INT(PAD_23)
A68_VC  Name;
A68_INT  Mode;
A_PAD_INT(PAD_24)
A68_INT  Decno;
A_PAD_INT(PAD_25)
};
typedef struct A68t71  A68_71 ;    /* STRUCT(INT,REF MODE26,INT,INT)  */
struct A68t72{
A68_VC  Name;
A68_BITS  Props;
A_PAD_BITS(PAD_26)
A68_INT  Mode;
A_PAD_INT(PAD_27)
A68_INT  Rdenno;
A_PAD_INT(PAD_28)
A68_INT  Maxname;
A_PAD_INT(PAD_29)
};
typedef struct A68t72  A68_72 ;    /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
struct A68t73{
A68_INT  W;
A_PAD_INT(PAD_30)
};
typedef struct A68t73  A68_73 ;    /* STRUCT(INT)  */
struct A68t74{
A68_VC  Name;
A68_INT  Labno;
A_PAD_INT(PAD_31)
A68_INT  Status;
A_PAD_INT(PAD_32)
A68_BOOL  Notsetting;
A_PAD_BOOL(PAD_33)
};
typedef struct A68t74  A68_74 ;    /* STRUCT(REF MODE26,INT,INT,BOOL)  */
struct A68t75{
A68_INT  Mode;
A_PAD_INT(PAD_34)
A68_BITS  Props;
A_PAD_BITS(PAD_35)
A68_INT  Param;
A_PAD_INT(PAD_36)
};
typedef struct A68t75  A68_75 ;    /* STRUCT(INT,BITS,INT)  */
struct A68t76{
A68_INT  I;
A_PAD_INT(PAD_37)
};
typedef struct A68t76  A68_76 ;    /* STRUCT(INT)  */
struct A68t77{
A68_BOOL  Start;
A_PAD_BOOL(PAD_38)
};
typedef struct A68t77  A68_77 ;    /* STRUCT(BOOL)  */
struct A68t88{
A68_INT  Nochars;
A_PAD_INT(PAD_39)
A68_INT  Nocases;
A_PAD_INT(PAD_40)
A68_INT  W;
A_PAD_INT(PAD_41)
};
typedef struct A68t88  A68_88 ;    /* STRUCT(INT,INT,INT)  */
struct A68t78{
struct A68t88  Info;
A68_VC  Text;
};
typedef struct A68t78  A68_78 ;    /* STRUCT(MODE88,REF MODE26)  */
struct A68t79{
A68_INT  Mode;
A_PAD_INT(PAD_42)
A68_INT  Number;
A_PAD_INT(PAD_43)
A68_VC  Insert;
};
typedef struct A68t79  A68_79 ;    /* STRUCT(INT,INT,REF MODE26)  */
struct A68t80{
A68_INT  Fn;
A_PAD_INT(PAD_44)
A68_INT  Mode;
A_PAD_INT(PAD_45)
A68_BITS  Props;
A_PAD_BITS(PAD_46)
A68_INT  Param;
A_PAD_INT(PAD_47)
};
typedef struct A68t80  A68_80 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t81{
A68_INT  Fn;
A_PAD_INT(PAD_48)
A68_INT  Mode;
A_PAD_INT(PAD_49)
A68_BITS  Props;
A_PAD_BITS(PAD_50)
A68_INT  Resultmode;
A_PAD_INT(PAD_51)
};
typedef struct A68t81  A68_81 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t82{
A68_INT  Fn;
A_PAD_INT(PAD_52)
A68_BITS  Props;
A_PAD_BITS(PAD_53)
};
typedef struct A68t82  A68_82 ;    /* STRUCT(INT,BITS)  */
A_ROW(A68_INT ,A68t87,1);
typedef struct A68t87  A68_87 ;    /* [] INT */
struct A68t83{
A68_INT  Body;
A_PAD_INT(PAD_54)
A68_INT  Moduleno;
A_PAD_INT(PAD_55)
struct A68t87  Actuals;
};
typedef struct A68t83  A68_83 ;    /* STRUCT(INT,INT,REF MODE87)  */
struct A68t84{
A68_INT  Moduleno;
A_PAD_INT(PAD_56)
A68_INT  I;
A_PAD_INT(PAD_57)
A68_INT  J;
A_PAD_INT(PAD_58)
};
typedef struct A68t84  A68_84 ;    /* STRUCT(INT,INT,INT)  */
A_ROW(A68_VC ,A68t86,1);
typedef struct A68t86  A68_86 ;    /* [] REF MODE26 */
struct A68t85{
A68_INT  Moduleno;
A_PAD_INT(PAD_59)
A68_VC  Name;
A68_VC  Uname;
A68_VC  Lname;
A68_VC  Gname;
struct A68t86  Ysnames;
};
typedef struct A68t85  A68_85 ;    /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE86)  */
struct A68t64 { A68_INT mode; union {
struct A68t58  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t65  mode4;
struct A68t57  mode5;
struct A68t66  mode6;
struct A68t67  mode7;
struct A68t68  mode8;
struct A68t69  mode9;
struct A68t70  mode10;
struct A68t71  mode11;
struct A68t72  mode12;
struct A68t73  mode13;
struct A68t74  mode14;
struct A68t75  mode15;
struct A68t76  mode16;
struct A68t77  mode17;
struct A68t78  mode18;
struct A68t79  mode19;
struct A68t80  mode20;
struct A68t81  mode21;
struct A68t82  mode22;
struct A68t83  mode23;
struct A68t84  mode24;
struct A68t85  mode25;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t64  A68_64 ;    /* UNION(MODE58,INT,BOOL,MODE65,MODE57,MODE66,MODE67,MODE68,MODE69,MODE70,MODE71,MODE72,MODE73,MODE74,MODE75,MODE76,MODE77,MODE78,MODE79,MODE80,MODE81,MODE82,MODE83,MODE84,MODE85,VOID)  */
struct A68t90{
A68_INT  Level;
A_PAD_INT(PAD_60)
A68_INT  Block;
A_PAD_INT(PAD_61)
};
typedef struct A68t90  A68_90 ;    /* STRUCT(INT,INT)  */
struct A68t89{
A68_INT  Mode;
A_PAD_INT(PAD_62)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_63)
struct A68t90  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t42  Prefix;
A_PAD_ISTRUCT(A68_42 ,PAD_64)
A68_BITS  Flags;
A_PAD_BITS(PAD_65)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t89  A68_89 ;    /* STRUCT(INT,INT,MODE90,REF MODE26,REF MODE26,MODE42,BITS,REF MODE26,REF MODE26)  */
struct A68t91{
A68_INT  Mode;
A_PAD_INT(PAD_66)
A68_INT  Resultmode;
A_PAD_INT(PAD_67)
A68_INT  Declevel;
A_PAD_INT(PAD_68)
struct A68t90  Environ;
A68_VC  Name;
struct A68t42  Prefix;
A_PAD_ISTRUCT(A68_42 ,PAD_69)
struct A68t42  Fnprefix;
A_PAD_ISTRUCT(A68_42 ,PAD_70)
struct A68t42  Envprefix;
A_PAD_ISTRUCT(A68_42 ,PAD_71)
A68_BITS  Flags;
A_PAD_BITS(PAD_72)
};
typedef struct A68t91  A68_91 ;    /* STRUCT(INT,INT,INT,MODE90,REF MODE26,MODE42,MODE42,MODE42,BITS)  */
struct A68t93{
struct A68t42  Name;
A_PAD_ISTRUCT(A68_42 ,PAD_73)
A68_BOOL  Set;
A_PAD_BOOL(PAD_74)
};
typedef struct A68t93  A68_93 ;    /* STRUCT(MODE42,BOOL)  */
struct A68t92{
struct A68t93  Label;
struct A68t90  Environ;
A68_VC  Name;
struct A68t42  Prefix;
A_PAD_ISTRUCT(A68_42 ,PAD_75)
A68_BITS  Flags;
A_PAD_BITS(PAD_76)
A68_INT  Alias;
A_PAD_INT(PAD_77)
};
typedef struct A68t92  A68_92 ;    /* STRUCT(MODE93,MODE90,REF MODE26,MODE42,BITS,INT)  */

A_PROCEDURE(struct A68t89 *,A68t94,(A68_INT ),(A68_INT ,void *));
typedef struct A68t94  A68_94 ;    /* PROC(INT) REF MODE89 */

A_PROCEDURE(A68_VOID ,A68t95,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t95  A68_95 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t96,(A68_VC ,struct A68t42 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t42 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t96  A68_96 ;    /* PROC(REF MODE26,MODE42,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */
A_ROW(struct A68t89 ,A68t97,1);
typedef struct A68t97  A68_97 ;    /* [] MODE89 */
A_ROW(struct A68t91 ,A68t98,1);
typedef struct A68t98  A68_98 ;    /* [] MODE91 */
A_ROW(struct A68t92 ,A68t99,1);
typedef struct A68t99  A68_99 ;    /* [] MODE92 */

A_PROCEDURE(A68_BOOL ,A68t100,(A68_INT ),(A68_INT ,void *));
typedef struct A68t100  A68_100 ;    /* PROC(INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t101,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t101  A68_101 ;    /* PROC(INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t102,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t87 ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t87 ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(INT,INT,INT,INT,REF MODE87) VOID */

A_PROCEDURE(A68_BOOL ,A68t103,(A68_VC ),(A68_VC ,void *));
typedef struct A68t103  A68_103 ;    /* PROC(MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t104,(A68_INT ,struct A68t90 *),(A68_INT ,struct A68t90 *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(INT) MODE90 */

A_PROCEDURE(A68_VOID ,A68t105,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t105  A68_105 ;    /* PROC(INT,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t106,(struct A68t71 ,struct A68t52 *,A68_INT ),(struct A68t71 ,struct A68t52 *,A68_INT ,void *));
typedef struct A68t106  A68_106 ;    /* PROC(MODE71,REF MODE52,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t107,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t108,(struct A68t71 ,struct A68t60 **),(struct A68t71 ,struct A68t60 **,void *));
typedef struct A68t108  A68_108 ;    /* PROC(MODE71,REF REF MODE60) VOID */

A_PROCEDURE(A68_VOID ,A68t109,(struct A68t71 ),(struct A68t71 ,void *));
typedef struct A68t109  A68_109 ;    /* PROC(MODE71) VOID */

A_PROCEDURE(A68_VOID ,A68t110,(struct A68t74 ),(struct A68t74 ,void *));
typedef struct A68t110  A68_110 ;    /* PROC(MODE74) VOID */

A_PROCEDURE(A68_INT ,A68t111,(A68_INT ),(A68_INT ,void *));
typedef struct A68t111  A68_111 ;    /* PROC(INT) INT */
struct A68t113 ;

A_PROCEDURE(A68_VOID ,A68t112,(A68_VC ,A68_INT ,struct A68t113 ,A68_INT ,A68_INT ,struct A68t90 ,A68_BITS ),(A68_VC ,A68_INT ,struct A68t113 ,A68_INT ,A68_INT ,struct A68t90 ,A68_BITS ,void *));
typedef struct A68t112  A68_112 ;    /* PROC(REF MODE26,INT,REF MODE113,INT,INT,MODE90,BITS) VOID */
A_VECTOR(A68_INT ,A68t113);
typedef struct A68t113  A68_113 ;    /* VECTOR [] INT */
struct A68t114{
A68_INT  Rdenno;
A_PAD_INT(PAD_78)
A68_INT  Mode;
A_PAD_INT(PAD_79)
A68_INT  Nods;
A_PAD_INT(PAD_80)
A68_INT  Deflex;
A_PAD_INT(PAD_81)
};
typedef struct A68t114  A68_114 ;    /* STRUCT(INT,INT,INT,INT)  */
A_ISTRUCT(A68_CHAR ,32,A68t116);
typedef struct A68t116  A68_116 ;    /* STRUCT 32 CHAR */
struct A68t115{
struct A68t116  N;
A_PAD_ISTRUCT(A68_116 ,PAD_82)
struct A68t116  F;
A_PAD_ISTRUCT(A68_116 ,PAD_83)
A68_INT  Level;
A_PAD_INT(PAD_84)
};
typedef struct A68t115  A68_115 ;    /* STRUCT(MODE116,MODE116,INT)  */
struct A68t117{
struct A68t116  Name;
A_PAD_ISTRUCT(A68_116 ,PAD_85)
A68_INT  Decno;
A_PAD_INT(PAD_86)
A68_INT  Level;
A_PAD_INT(PAD_87)
A68_INT  Mode;
A_PAD_INT(PAD_88)
A68_INT  Scope;
A_PAD_INT(PAD_89)
struct A68t117 * Rest;
};
typedef struct A68t117  A68_117 ;    /* STRUCT(MODE116,INT,INT,INT,INT,REF MODE117)  */
struct A68t118{
A68_INT  Rdenno;
A_PAD_INT(PAD_90)
A68_INT  Imode;
A_PAD_INT(PAD_91)
A68_INT  Length;
A_PAD_INT(PAD_92)
A68_INT  Deflex;
A_PAD_INT(PAD_93)
};
typedef struct A68t118  A68_118 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t127{
A68_INT  Mode;
A_PAD_INT(PAD_94)
};
typedef struct A68t127  A68_127 ;    /* STRUCT(INT)  */
struct A68t119 { A68_INT mode; union {
A68_INT  mode1;
struct A68t120 * mode2;
struct A68t121 * mode3;
struct A68t122 * mode4;
struct A68t118 * mode5;
struct A68t123 * mode6;
struct A68t124 * mode7;
struct A68t114 * mode8;
struct A68t125 * mode9;
struct A68t126 * mode10;
struct A68t127  mode11;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t119  A68_119 ;    /* UNION(INT,REF MODE120,REF MODE121,REF MODE122,REF MODE118,REF MODE123,REF MODE124,REF MODE114,REF MODE125,REF MODE126,MODE127)  */
struct A68t120{
A68_INT  Rdenno;
A_PAD_INT(PAD_95)
struct A68t131 * Modelist;
};
typedef struct A68t120  A68_120 ;    /* STRUCT(INT,REF MODE131)  */
struct A68t121{
A68_INT  Deproc;
A_PAD_INT(PAD_96)
struct A68t131 * Pars;
};
typedef struct A68t121  A68_121 ;    /* STRUCT(INT,REF MODE131)  */
struct A68t122{
A68_INT  Rdenno;
A_PAD_INT(PAD_97)
A68_INT  Deflex;
A_PAD_INT(PAD_98)
struct A68t130 * Sels;
};
typedef struct A68t122  A68_122 ;    /* STRUCT(INT,INT,REF MODE130)  */
struct A68t123{
A68_INT  Deproc;
A_PAD_INT(PAD_99)
};
typedef struct A68t123  A68_123 ;    /* STRUCT(INT)  */
struct A68t124{
A68_INT  Rdenno;
A_PAD_INT(PAD_100)
A68_INT  Vecmode;
A_PAD_INT(PAD_101)
A68_INT  Deflex;
A_PAD_INT(PAD_102)
};
typedef struct A68t124  A68_124 ;    /* STRUCT(INT,INT,INT)  */
struct A68t125{
A68_INT  Mode;
A_PAD_INT(PAD_103)
struct A68t129 * Stenlist;
};
typedef struct A68t125  A68_125 ;    /* STRUCT(INT,REF MODE129)  */
struct A68t126{
A68_INT  Mode;
A_PAD_INT(PAD_104)
A68_INT  Modeproc;
A_PAD_INT(PAD_105)
struct A68t128 * El;
};
typedef struct A68t126  A68_126 ;    /* STRUCT(INT,INT,REF MODE128)  */
struct A68t128{
struct A68t126 * Am;
struct A68t128 * Rest;
};
typedef struct A68t128  A68_128 ;    /* STRUCT(REF MODE126,REF MODE128)  */
struct A68t129{
A68_INT  Mode;
A_PAD_INT(PAD_106)
A68_INT  Rdenno;
A_PAD_INT(PAD_107)
struct A68t129 * Rest;
};
typedef struct A68t129  A68_129 ;    /* STRUCT(INT,INT,REF MODE129)  */
struct A68t130{
A68_INT  Mode;
A_PAD_INT(PAD_108)
A68_INT  Fieldno;
A_PAD_INT(PAD_109)
struct A68t116  Name;
A_PAD_ISTRUCT(A68_116 ,PAD_110)
struct A68t130 * Rest;
};
typedef struct A68t130  A68_130 ;    /* STRUCT(INT,INT,MODE116,REF MODE130)  */
struct A68t131{
A68_INT  Mode;
A_PAD_INT(PAD_111)
struct A68t131 * Rest;
};
typedef struct A68t131  A68_131 ;    /* STRUCT(INT,REF MODE131)  */
A_VECTOR(struct A68t135 ,A68t134);
typedef struct A68t134  A68_134 ;    /* VECTOR [] MODE135 */
A_VECTOR(struct A68t115 ,A68t141);
typedef struct A68t141  A68_141 ;    /* VECTOR [] MODE115 */
struct A68t140 { A68_INT mode; union {
A68_VC  mode1;
struct A68t141  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t140  A68_140 ;    /* UNION(REF MODE26,REF MODE141)  */
struct A68t136{
struct A68t116  F;
A_PAD_ISTRUCT(A68_116 ,PAD_112)
A68_INT  No;
A_PAD_INT(PAD_113)
A68_INT  Nl;
A_PAD_INT(PAD_114)
A68_INT  Ng;
A_PAD_INT(PAD_115)
struct A68t140  U;
};
typedef struct A68t136  A68_136 ;    /* STRUCT(MODE116,INT,INT,INT,MODE140)  */
A_VECTOR(struct A68t139 ,A68t137);
typedef struct A68t137  A68_137 ;    /* VECTOR [] MODE139 */
struct A68t139{
struct A68t42  Prefix;
A_PAD_ISTRUCT(A68_42 ,PAD_116)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_117)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_118)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_119)
A68_BOOL  Keptgenproc;
A_PAD_BOOL(PAD_120)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_121)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t139  A68_139 ;    /* STRUCT(MODE42,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26)  */
A_VECTOR(struct A68t42 ,A68t138);
typedef struct A68t138  A68_138 ;    /* VECTOR [] MODE42 */
struct A68t135{
struct A68t136  Xs;
struct A68t42  Ys;
A_PAD_ISTRUCT(A68_42 ,PAD_122)
A68_LINT  Timeoflastchange;
A_PAD_LINT(PAD_123)
struct A68t137  Keptinfo;
struct A68t138  Cnames;
};
typedef struct A68t135  A68_135 ;    /* STRUCT(MODE136,MODE42,LONG INT,REF MODE137,REF MODE138)  */
struct A68t133{
struct A68t42  Uname;
A_PAD_ISTRUCT(A68_42 ,PAD_124)
struct A68t42  Lname;
A_PAD_ISTRUCT(A68_42 ,PAD_125)
struct A68t42  Gname;
A_PAD_ISTRUCT(A68_42 ,PAD_126)
struct A68t134  Specs;
};
typedef struct A68t133  A68_133 ;    /* STRUCT(MODE42,MODE42,MODE42,REF MODE134)  */
struct A68t132{
struct A68t116  Name;
A_PAD_ISTRUCT(A68_116 ,PAD_127)
struct A68t133  Ym;
struct A68t116  Formal;
A_PAD_ISTRUCT(A68_116 ,PAD_128)
struct A68t42  Ys;
A_PAD_ISTRUCT(A68_42 ,PAD_129)
A68_INT  Level;
A_PAD_INT(PAD_130)
A68_INT  Ownlevel;
A_PAD_INT(PAD_131)
};
typedef struct A68t132  A68_132 ;    /* STRUCT(MODE116,MODE133,MODE116,MODE42,INT,INT)  */
struct A68t142{
struct A68t116  Name;
A_PAD_ISTRUCT(A68_116 ,PAD_132)
struct A68t115  L;
struct A68t115  G;
A68_INT  Type;
A_PAD_INT(PAD_133)
};
typedef struct A68t142  A68_142 ;    /* STRUCT(MODE116,MODE115,MODE115,INT)  */
struct A68t143{
A68_INT  Norden;
A_PAD_INT(PAD_134)
A68_INT  Nomodes;
A_PAD_INT(PAD_135)
A68_INT  Nolabs;
A_PAD_INT(PAD_136)
A68_INT  Nodecnos;
A_PAD_INT(PAD_137)
A68_INT  Nomodules;
A_PAD_INT(PAD_138)
A68_INT  Nolibinds;
A_PAD_INT(PAD_139)
};
typedef struct A68t143  A68_143 ;    /* STRUCT(INT,INT,INT,INT,INT,INT)  */
struct A68t144{
A68_INT  Type;
A_PAD_INT(PAD_140)
A68_INT  Moduleno;
A_PAD_INT(PAD_141)
struct A68t116  Name;
A_PAD_ISTRUCT(A68_116 ,PAD_142)
struct A68t133  Ym;
};
typedef struct A68t144  A68_144 ;    /* STRUCT(INT,INT,MODE116,MODE133)  */
struct A68t145{
struct A68t142  Xmi;
struct A68t133  Ym;
};
typedef struct A68t145  A68_145 ;    /* STRUCT(MODE142,MODE133)  */
struct A68t146{
struct A68t136  Xs;
struct A68t42  Ys;
A_PAD_ISTRUCT(A68_42 ,PAD_143)
};
typedef struct A68t146  A68_146 ;    /* STRUCT(MODE136,MODE42)  */
struct A68t147{
struct A68t52 * Value;
struct A68t93 * End;
A68_INT  Type;
A_PAD_INT(PAD_144)
};
typedef struct A68t147  A68_147 ;    /* STRUCT(REF MODE52,REF MODE93,INT)  */
struct A68t148 { A68_INT mode; union {
struct A68t83  mode1;
struct A68t84  mode2;
struct A68t85  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t148  A68_148 ;    /* UNION(MODE83,MODE84,MODE85)  */
struct A68t149 { A68_INT mode; union {
struct A68t58  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t65  mode4;
struct A68t57  mode5;
struct A68t66  mode6;
struct A68t67  mode7;
struct A68t68  mode8;
struct A68t69  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t149  A68_149 ;    /* UNION(MODE58,INT,BOOL,MODE65,MODE57,MODE66,MODE67,MODE68,MODE69)  */
struct A68t150 { A68_INT mode; union {
struct A68t58  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t65  mode4;
struct A68t57  mode5;
struct A68t66  mode6;
struct A68t67  mode7;
struct A68t68  mode8;
struct A68t69  mode9;
struct A68t70  mode10;
struct A68t71  mode11;
struct A68t72  mode12;
struct A68t73  mode13;
struct A68t74  mode14;
struct A68t75  mode15;
struct A68t76  mode16;
struct A68t77  mode17;
struct A68t78  mode18;
struct A68t79  mode19;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t150  A68_150 ;    /* UNION(MODE58,INT,BOOL,MODE65,MODE57,MODE66,MODE67,MODE68,MODE69,MODE70,MODE71,MODE72,MODE73,MODE74,MODE75,MODE76,MODE77,MODE78,MODE79)  */

A_PROCEDURE(A68_VOID ,A68t151,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t151  A68_151 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t152,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t152  A68_152 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t153,(struct A68t32 ),(struct A68t32 ,void *));
typedef struct A68t153  A68_153 ;    /* PROC(MODE32) VOID */

A_PROCEDURE(A68_VOID ,A68t154,(struct A68t43 ),(struct A68t43 ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(MODE43) VOID */

A_PROCEDURE(A68_VOID ,A68t155,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t155  A68_155 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,61,A68t156);
typedef struct A68t156  A68_156 ;    /* STRUCT 61 CHAR */

A_PROCEDURE(A68_VOID ,A68t157,(struct A68t143 *,struct A68t64 *,struct A68t87 ),(struct A68t143 *,struct A68t64 *,struct A68t87 ,void *));
typedef struct A68t157  A68_157 ;    /* PROC(REF MODE143,REF MODE64,REF MODE87) VOID */

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


/* --- Imports from incvalue --- */
/* --- End of imports from incvalue --- */


/* --- Imports from identifiers --- */
extern A68_VOID  KZWACTR_initialiseidentifiers(void);
/* --- End of imports from identifiers --- */


/* --- Imports from idtable --- */
extern A68_VOID  FVKACTR_initialiseids(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t87 );
/* --- End of imports from idtable --- */


/* --- Imports from tracer --- */
extern A68_51  JHVACTR_calltrace;
extern A68_VOID  RBZACTR_trace(struct A68t64 ,struct A68t52 *,A68_BOOL );
/* --- End of imports from tracer --- */


/* --- Imports from evaluator --- */
extern A68_VOID  UMVACTR_initialiseevaluator(void);
/* --- End of imports from evaluator --- */


/* --- Imports from environment --- */
extern A68_VOID  NJJACTR_initialisetrace(void);
/* --- End of imports from environment --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void UAAACTR(void);   /* incimperatives */
extern void GKJACTR(void);   /* incvalue */
extern void YMVACTR(void);   /* identifiers */
extern void PPKACTR(void);   /* idtable */
extern void ZXYACTR(void);   /* tracer */
extern void VGVACTR(void);   /* evaluator */
extern void HPIACTR(void);   /* environment */
/* --- end of DECS initialisation functions --- */
static A68_156   PZZACTR = {"$Id: initialiser.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,QZZACTR,PZZACTR,61)
static A68_64 * RZZACTR_traceimperative A_UNUSED;

A68_VOID  VZZACTR_initialise(A68_143 * Xsizes, A68_64 * Currentimperative, A68_87  Keptdecnos);

A_STATIC A68_VOID  YZZACTR_anonymous(A68_52 * Root, A68_BOOL  Aftereval);

A_STATIC A68_VOID  YZZACTR_anonymous(A68_52 * Root, A68_BOOL  Aftereval)
{ 
 /* line 55: */
(void)(RBZACTR_trace((*A_NILCHECK(RZZACTR_traceimperative)), Root, Aftereval));
return;
} 
#undef NL
 /* line 51: */

A68_VOID  VZZACTR_initialise(A68_143 * Xsizes, A68_64 * Currentimperative, A68_87  Keptdecnos)
{ 
A68_51  ZZZACTR;  /* procedure value */
A_PROC_ENTRY(initialise);
 /* line 52: */
 /* line 53: */
{ 
RZZACTR_traceimperative = Currentimperative;
 /* line 54: */
ZZZACTR.fn.fn_global = YZZACTR_anonymous;
ZZZACTR.nonlocals = A68_NIL;
JHVACTR_calltrace = ZZZACTR;
 /* line 57: */
(void)(NJJACTR_initialisetrace());
 /* line 58: */
(void)(UMVACTR_initialiseevaluator());
 /* line 59: */
 /* line 60: */
 /* line 61: */
 /* line 62: */
 /* line 63: */
 /* line 65: */
(void)(FVKACTR_initialiseids((*A_NILCHECK((&(A_NILCHECK(Xsizes)->Nodecnos)))), (*A_NILCHECK((&(A_NILCHECK(Xsizes)->Nolibinds)))), (*A_NILCHECK((&(A_NILCHECK(Xsizes)->Nolabs)))), (*A_NILCHECK((&(A_NILCHECK(Xsizes)->Norden)))), Keptdecnos));
 /* line 66: */
 /* line 67: */
 /* line 69: */
(void)(KZWACTR_initialiseidentifiers());
} 
A_PROC_EXIT(initialise);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 4: */
void MZZACTR(void)   /* initialise DECS initialiser */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel","-dir",".","initialiser.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/vak/Project/Algol/Algol-68RS-Source/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/vak/Project/Algol/Algol-68RS-Source/a68config/a68config.m","./incimperatives.m","./incvalue.m","./common.m","./identifiers.m","./idtable.m","./tracer.m","./evaluator.m","./environment.m",""};
static A_CONFIG_INFO A_config A_UNUSED;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
UAAACTR();   /* USE incimperatives */
GKJACTR();   /* USE incvalue */
YMVACTR();   /* USE identifiers */
PPKACTR();   /* USE idtable */
ZXYACTR();   /* USE tracer */
VGVACTR();   /* USE evaluator */
HPIACTR();   /* USE environment */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/initialiser.a68";
A_config.translation_time = "Thu Nov  5 21:56:13 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "LZZACTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 21:56:13 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS initialiser);
(void)(UEAALIB_a68config(LGAALIB_configinfo, QZZACTR));
 /* line 48: */
 /* line 50: */
 /* line 71: */
A_PROC_EXIT(DECS initialiser);
} 
#undef NL
/* end of translation of initialiser.a68 */
