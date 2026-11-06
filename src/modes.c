/* UNAME:CNMACTR */
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
struct A68t54{
A68_INT  Rdenno;
A_PAD_INT(PAD_1)
A68_INT  Mode;
A_PAD_INT(PAD_2)
A68_INT  Nods;
A_PAD_INT(PAD_3)
A68_INT  Deflex;
A_PAD_INT(PAD_4)
};
typedef struct A68t54  A68_54 ;    /* STRUCT(INT,INT,INT,INT)  */
A_ISTRUCT(A68_CHAR ,32,A68t56);
typedef struct A68t56  A68_56 ;    /* STRUCT 32 CHAR */
struct A68t55{
struct A68t56  N;
A_PAD_ISTRUCT(A68_56 ,PAD_5)
struct A68t56  F;
A_PAD_ISTRUCT(A68_56 ,PAD_6)
A68_INT  Level;
A_PAD_INT(PAD_7)
};
typedef struct A68t55  A68_55 ;    /* STRUCT(MODE56,MODE56,INT)  */
struct A68t57{
struct A68t56  Name;
A_PAD_ISTRUCT(A68_56 ,PAD_8)
A68_INT  Decno;
A_PAD_INT(PAD_9)
A68_INT  Level;
A_PAD_INT(PAD_10)
A68_INT  Mode;
A_PAD_INT(PAD_11)
A68_INT  Scope;
A_PAD_INT(PAD_12)
struct A68t57 * Rest;
};
typedef struct A68t57  A68_57 ;    /* STRUCT(MODE56,INT,INT,INT,INT,REF MODE57)  */
struct A68t58{
A68_INT  Rdenno;
A_PAD_INT(PAD_13)
A68_INT  Imode;
A_PAD_INT(PAD_14)
A68_INT  Length;
A_PAD_INT(PAD_15)
A68_INT  Deflex;
A_PAD_INT(PAD_16)
};
typedef struct A68t58  A68_58 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t67{
A68_INT  Mode;
A_PAD_INT(PAD_17)
};
typedef struct A68t67  A68_67 ;    /* STRUCT(INT)  */
struct A68t59 { A68_INT mode; union {
A68_INT  mode1;
struct A68t60 * mode2;
struct A68t61 * mode3;
struct A68t62 * mode4;
struct A68t58 * mode5;
struct A68t63 * mode6;
struct A68t64 * mode7;
struct A68t54 * mode8;
struct A68t65 * mode9;
struct A68t66 * mode10;
struct A68t67  mode11;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t59  A68_59 ;    /* UNION(INT,REF MODE60,REF MODE61,REF MODE62,REF MODE58,REF MODE63,REF MODE64,REF MODE54,REF MODE65,REF MODE66,MODE67)  */
struct A68t60{
A68_INT  Rdenno;
A_PAD_INT(PAD_18)
struct A68t71 * Modelist;
};
typedef struct A68t60  A68_60 ;    /* STRUCT(INT,REF MODE71)  */
struct A68t61{
A68_INT  Deproc;
A_PAD_INT(PAD_19)
struct A68t71 * Pars;
};
typedef struct A68t61  A68_61 ;    /* STRUCT(INT,REF MODE71)  */
struct A68t62{
A68_INT  Rdenno;
A_PAD_INT(PAD_20)
A68_INT  Deflex;
A_PAD_INT(PAD_21)
struct A68t70 * Sels;
};
typedef struct A68t62  A68_62 ;    /* STRUCT(INT,INT,REF MODE70)  */
struct A68t63{
A68_INT  Deproc;
A_PAD_INT(PAD_22)
};
typedef struct A68t63  A68_63 ;    /* STRUCT(INT)  */
struct A68t64{
A68_INT  Rdenno;
A_PAD_INT(PAD_23)
A68_INT  Vecmode;
A_PAD_INT(PAD_24)
A68_INT  Deflex;
A_PAD_INT(PAD_25)
};
typedef struct A68t64  A68_64 ;    /* STRUCT(INT,INT,INT)  */
struct A68t65{
A68_INT  Mode;
A_PAD_INT(PAD_26)
struct A68t69 * Stenlist;
};
typedef struct A68t65  A68_65 ;    /* STRUCT(INT,REF MODE69)  */
struct A68t66{
A68_INT  Mode;
A_PAD_INT(PAD_27)
A68_INT  Modeproc;
A_PAD_INT(PAD_28)
struct A68t68 * El;
};
typedef struct A68t66  A68_66 ;    /* STRUCT(INT,INT,REF MODE68)  */
struct A68t68{
struct A68t66 * Am;
struct A68t68 * Rest;
};
typedef struct A68t68  A68_68 ;    /* STRUCT(REF MODE66,REF MODE68)  */
struct A68t69{
A68_INT  Mode;
A_PAD_INT(PAD_29)
A68_INT  Rdenno;
A_PAD_INT(PAD_30)
struct A68t69 * Rest;
};
typedef struct A68t69  A68_69 ;    /* STRUCT(INT,INT,REF MODE69)  */
struct A68t70{
A68_INT  Mode;
A_PAD_INT(PAD_31)
A68_INT  Fieldno;
A_PAD_INT(PAD_32)
struct A68t56  Name;
A_PAD_ISTRUCT(A68_56 ,PAD_33)
struct A68t70 * Rest;
};
typedef struct A68t70  A68_70 ;    /* STRUCT(INT,INT,MODE56,REF MODE70)  */
struct A68t71{
A68_INT  Mode;
A_PAD_INT(PAD_34)
struct A68t71 * Rest;
};
typedef struct A68t71  A68_71 ;    /* STRUCT(INT,REF MODE71)  */
A_ISTRUCT(A68_CHAR ,7,A68t72);
typedef struct A68t72  A68_72 ;    /* STRUCT 7 CHAR */
A_VECTOR(struct A68t76 ,A68t75);
typedef struct A68t75  A68_75 ;    /* VECTOR [] MODE76 */
A_VECTOR(struct A68t55 ,A68t82);
typedef struct A68t82  A68_82 ;    /* VECTOR [] MODE55 */
struct A68t81 { A68_INT mode; union {
A68_VC  mode1;
struct A68t82  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t81  A68_81 ;    /* UNION(REF MODE26,REF MODE82)  */
struct A68t77{
struct A68t56  F;
A_PAD_ISTRUCT(A68_56 ,PAD_35)
A68_INT  No;
A_PAD_INT(PAD_36)
A68_INT  Nl;
A_PAD_INT(PAD_37)
A68_INT  Ng;
A_PAD_INT(PAD_38)
struct A68t81  U;
};
typedef struct A68t77  A68_77 ;    /* STRUCT(MODE56,INT,INT,INT,MODE81)  */
A_VECTOR(struct A68t80 ,A68t78);
typedef struct A68t78  A68_78 ;    /* VECTOR [] MODE80 */
struct A68t80{
struct A68t72  Prefix;
A_PAD_ISTRUCT(A68_72 ,PAD_39)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_40)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_41)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_42)
A68_BOOL  Keptgenproc;
A_PAD_BOOL(PAD_43)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_44)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t80  A68_80 ;    /* STRUCT(MODE72,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26)  */
A_VECTOR(struct A68t72 ,A68t79);
typedef struct A68t79  A68_79 ;    /* VECTOR [] MODE72 */
struct A68t76{
struct A68t77  Xs;
struct A68t72  Ys;
A_PAD_ISTRUCT(A68_72 ,PAD_45)
A68_LINT  Timeoflastchange;
A_PAD_LINT(PAD_46)
struct A68t78  Keptinfo;
struct A68t79  Cnames;
};
typedef struct A68t76  A68_76 ;    /* STRUCT(MODE77,MODE72,LONG INT,REF MODE78,REF MODE79)  */
struct A68t74{
struct A68t72  Uname;
A_PAD_ISTRUCT(A68_72 ,PAD_47)
struct A68t72  Lname;
A_PAD_ISTRUCT(A68_72 ,PAD_48)
struct A68t72  Gname;
A_PAD_ISTRUCT(A68_72 ,PAD_49)
struct A68t75  Specs;
};
typedef struct A68t74  A68_74 ;    /* STRUCT(MODE72,MODE72,MODE72,REF MODE75)  */
struct A68t73{
struct A68t56  Name;
A_PAD_ISTRUCT(A68_56 ,PAD_50)
struct A68t74  Ym;
struct A68t56  Formal;
A_PAD_ISTRUCT(A68_56 ,PAD_51)
struct A68t72  Ys;
A_PAD_ISTRUCT(A68_72 ,PAD_52)
A68_INT  Level;
A_PAD_INT(PAD_53)
A68_INT  Ownlevel;
A_PAD_INT(PAD_54)
};
typedef struct A68t73  A68_73 ;    /* STRUCT(MODE56,MODE74,MODE56,MODE72,INT,INT)  */
struct A68t83{
struct A68t56  Name;
A_PAD_ISTRUCT(A68_56 ,PAD_55)
struct A68t55  L;
struct A68t55  G;
A68_INT  Type;
A_PAD_INT(PAD_56)
};
typedef struct A68t83  A68_83 ;    /* STRUCT(MODE56,MODE55,MODE55,INT)  */
struct A68t84{
A68_INT  Norden;
A_PAD_INT(PAD_57)
A68_INT  Nomodes;
A_PAD_INT(PAD_58)
A68_INT  Nolabs;
A_PAD_INT(PAD_59)
A68_INT  Nodecnos;
A_PAD_INT(PAD_60)
A68_INT  Nomodules;
A_PAD_INT(PAD_61)
A68_INT  Nolibinds;
A_PAD_INT(PAD_62)
};
typedef struct A68t84  A68_84 ;    /* STRUCT(INT,INT,INT,INT,INT,INT)  */
struct A68t85{
A68_INT  Type;
A_PAD_INT(PAD_63)
A68_INT  Moduleno;
A_PAD_INT(PAD_64)
struct A68t56  Name;
A_PAD_ISTRUCT(A68_56 ,PAD_65)
struct A68t74  Ym;
};
typedef struct A68t85  A68_85 ;    /* STRUCT(INT,INT,MODE56,MODE74)  */
struct A68t86{
struct A68t83  Xmi;
struct A68t74  Ym;
};
typedef struct A68t86  A68_86 ;    /* STRUCT(MODE83,MODE74)  */
struct A68t87{
struct A68t77  Xs;
struct A68t72  Ys;
A_PAD_ISTRUCT(A68_72 ,PAD_66)
};
typedef struct A68t87  A68_87 ;    /* STRUCT(MODE77,MODE72)  */

A_PROCEDURE(A68_INT ,A68t88,(A68_INT ),(A68_INT ,void *));
typedef struct A68t88  A68_88 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t89,(A68_INT ),(A68_INT ,void *));
typedef struct A68t89  A68_89 ;    /* PROC(INT) BOOL */
struct A68t90{
A68_INT  Level;
A_PAD_INT(PAD_67)
A68_INT  Block;
A_PAD_INT(PAD_68)
};
typedef struct A68t90  A68_90 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t91,(struct A68t90 *),(struct A68t90 *,void *));
typedef struct A68t91  A68_91 ;    /* PROC MODE90 */

A_PROCEDURE(A68_INT ,A68t92,(void),(void *));
typedef struct A68t92  A68_92 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t93,(A68_INT ),(A68_INT ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t94,(void),(void *));
typedef struct A68t94  A68_94 ;    /* PROC VOID */

A_PROCEDURE(A68_BOOL ,A68t95,(void),(void *));
typedef struct A68t95  A68_95 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t96,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t96  A68_96 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t97,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t98,(struct A68t90 ,struct A68t90 ),(struct A68t90 ,struct A68t90 ,void *));
typedef struct A68t98  A68_98 ;    /* PROC(MODE90,MODE90) BOOL */

A_PROCEDURE(A68_BOOL ,A68t99,(struct A68t90 ),(struct A68t90 ,void *));
typedef struct A68t99  A68_99 ;    /* PROC(MODE90) BOOL */

A_PROCEDURE(A68_VOID ,A68t100,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t100  A68_100 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t101,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t101  A68_101 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t102,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t102  A68_102 ;    /* PROC(INT) REF MODE26 */
struct A68t104 ;

A_PROCEDURE(A68_VOID ,A68t103,(A68_INT ,struct A68t104 ),(A68_INT ,struct A68t104 ,void *));
typedef struct A68t103  A68_103 ;    /* PROC(INT,MODE104) VOID */
A_ROW(A68_VC ,A68t104,1);
typedef struct A68t104  A68_104 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t105,(void),(void *));
typedef struct A68t105  A68_105 ;    /* PROC BITS */
struct A68t106{
A68_INT  Cfile;
A_PAD_INT(PAD_69)
};
typedef struct A68t106  A68_106 ;    /* STRUCT(INT)  */
struct A68t107{
A68_INT  Seedfile;
A_PAD_INT(PAD_70)
};
typedef struct A68t107  A68_107 ;    /* STRUCT(INT)  */
struct A68t108 { A68_INT mode; union {
struct A68t106  mode1;
struct A68t107  mode2;
struct A68t72  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t108  A68_108 ;    /* UNION(MODE106,MODE107,MODE72,VOID)  */

A_PROCEDURE(A68_VOID ,A68t109,(A68_VC ),(A68_VC ,void *));
typedef struct A68t109  A68_109 ;    /* PROC(MODE26) VOID */
A_ROW(A68_BOOL ,A68t110,1);
typedef struct A68t110  A68_110 ;    /* [] BOOL */
struct A68t111{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_71)
A68_VC  Sourcefile;
struct A68t72  Nameseed;
A_PAD_ISTRUCT(A68_72 ,PAD_72)
struct A68t108  Nameseedorigin;
struct A68t112 * Used_modules;
A68_VC  Commandline;
struct A68t113 * Environment;
};
typedef struct A68t111  A68_111 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE72,MODE108,REF MODE112,REF MODE26,REF MODE113)  */
struct A68t112{
A68_VC  Modinfo_file;
struct A68t112 * Next;
};
typedef struct A68t112  A68_112 ;    /* STRUCT(REF MODE26,REF MODE112)  */
struct A68t113{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t113 * Next;
};
typedef struct A68t113  A68_113 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE113)  */
struct A68t115 ;
struct A68t116 ;

A_PROCEDURE(struct A68t115 *,A68t114,(A68_VC ,struct A68t116 *,A68_VC *),(A68_VC ,struct A68t116 *,A68_VC *,void *));
typedef struct A68t114  A68_114 ;    /* PROC(MODE26,REF MODE116,REF REF MODE26) REF MODE115 */
struct A68t115{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t115  A68_115 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t116{
A68_VC  Dir;
struct A68t116 * Next;
};
typedef struct A68t116  A68_116 ;    /* STRUCT(REF MODE26,REF MODE116)  */

A_PROCEDURE(A68_VOID ,A68t117,(struct A68t108 ),(struct A68t108 ,void *));
typedef struct A68t117  A68_117 ;    /* PROC(MODE108) VOID */

A_PROCEDURE(struct A68t72 ,A68t118,(void),(void *));
typedef struct A68t118  A68_118 ;    /* PROC MODE72 */

A_PROCEDURE(A68_VOID ,A68t119,(struct A68t72 ),(struct A68t72 ,void *));
typedef struct A68t119  A68_119 ;    /* PROC(MODE72) VOID */

A_PROCEDURE(A68_VOID ,A68t120,(struct A68t108 ,A68_VC *),(struct A68t108 ,A68_VC *,void *));
typedef struct A68t120  A68_120 ;    /* PROC(MODE108) MODE26 */
struct A68t121{
struct A68t122 * Value;
struct A68t123 * End;
A68_INT  Type;
A_PAD_INT(PAD_73)
};
typedef struct A68t121  A68_121 ;    /* STRUCT(REF MODE122,REF MODE123,INT)  */
struct A68t125{
A68_INT  Rdenno;
A_PAD_INT(PAD_74)
};
typedef struct A68t125  A68_125 ;    /* STRUCT(INT)  */
struct A68t126{
A68_INT  Idno;
A_PAD_INT(PAD_75)
};
typedef struct A68t126  A68_126 ;    /* STRUCT(INT)  */
struct A68t127{
struct A68t72  Name;
A_PAD_ISTRUCT(A68_72 ,PAD_76)
A68_INT  Mode;
A_PAD_INT(PAD_77)
};
typedef struct A68t127  A68_127 ;    /* STRUCT(MODE72,INT)  */
struct A68t128{
A68_INT  Labno;
A_PAD_INT(PAD_78)
};
typedef struct A68t128  A68_128 ;    /* STRUCT(INT)  */
struct A68t129{
A68_INT  Nse;
A_PAD_INT(PAD_79)
};
typedef struct A68t129  A68_129 ;    /* STRUCT(INT)  */
struct A68t130{
A68_INT  Fn;
A_PAD_INT(PAD_80)
A68_INT  Param;
A_PAD_INT(PAD_81)
struct A68t131 * Operands;
};
typedef struct A68t130  A68_130 ;    /* STRUCT(INT,INT,REF MODE131)  */
struct A68t124 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t125  mode2;
struct A68t126  mode4;
struct A68t127  mode5;
A68_VC  mode6;
struct A68t128  mode7;
struct A68t129  mode8;
struct A68t130  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t124  A68_124 ;    /* UNION(LONG BITS,MODE125,VOID,MODE126,MODE127,MODE26,MODE128,MODE129,MODE130)  */
struct A68t122{
A68_INT  Mode;
A_PAD_INT(PAD_82)
A68_BITS  Info;
A_PAD_BITS(PAD_83)
struct A68t124  Extra;
};
typedef struct A68t122  A68_122 ;    /* STRUCT(INT,BITS,MODE124)  */
struct A68t123{
struct A68t72  Name;
A_PAD_ISTRUCT(A68_72 ,PAD_84)
A68_BOOL  Set;
A_PAD_BOOL(PAD_85)
};
typedef struct A68t123  A68_123 ;    /* STRUCT(MODE72,BOOL)  */
struct A68t131{
struct A68t122  Value;
struct A68t131 * Rest;
};
typedef struct A68t131  A68_131 ;    /* STRUCT(MODE122,REF MODE131)  */
struct A68t133 ;

A_PROCEDURE(A68_VOID ,A68t132,(struct A68t133 ),(struct A68t133 ,void *));
typedef struct A68t132  A68_132 ;    /* PROC(MODE133) VOID */
A_VECTOR(struct A68t134 ,A68t133);
typedef struct A68t133  A68_133 ;    /* VECTOR [] MODE134 */
struct A68t134 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_SINT  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t134  A68_134 ;    /* UNION(CHAR,MODE26,SHORT INT)  */
struct A68t136 ;

A_PROCEDURE(A68_VOID ,A68t135,(struct A68t136 ,A68_INT ),(struct A68t136 ,A68_INT ,void *));
typedef struct A68t135  A68_135 ;    /* PROC(MODE136,INT) VOID */
A_VECTOR(struct A68t137 ,A68t136);
typedef struct A68t136  A68_136 ;    /* VECTOR [] MODE137 */
struct A68t137 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_INT  mode3;
A68_SINT  mode4;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t137  A68_137 ;    /* UNION(CHAR,MODE26,INT,SHORT INT)  */

A_PROCEDURE(A68_BOOL ,A68t138,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t138  A68_138 ;    /* PROC(INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t139,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t139  A68_139 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t140,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t140  A68_140 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t141,(struct A68t94 ),(struct A68t94 ,void *));
typedef struct A68t141  A68_141 ;    /* PROC(MODE94) VOID */

A_PROCEDURE(A68_VOID ,A68t142,(struct A68t109 ),(struct A68t109 ,void *));
typedef struct A68t142  A68_142 ;    /* PROC(MODE109) VOID */

A_PROCEDURE(A68_VOID ,A68t143,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t143  A68_143 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,55,A68t144);
typedef struct A68t144  A68_144 ;    /* STRUCT 55 CHAR */

A_PROCEDURE(A68_VOID ,A68t145,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t145  A68_145 ;    /* PROC(INT,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,5,A68t146);
typedef struct A68t146  A68_146 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t147);
typedef struct A68t147  A68_147 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t148);
typedef struct A68t148  A68_148 ;    /* STRUCT 3 CHAR */
struct A68t149{
A68_INT  Mode;
A_PAD_INT(PAD_86)
A68_INT  Offset;
A_PAD_INT(PAD_87)
struct A68t56  Name;
A_PAD_ISTRUCT(A68_56 ,PAD_88)
};
typedef struct A68t149  A68_149 ;    /* STRUCT(INT,INT,MODE56)  */
A_VECTOR(A68_INT ,A68t151);
typedef struct A68t151  A68_151 ;    /* VECTOR [] INT */
A_VECTOR(struct A68t149 ,A68t152);
typedef struct A68t152  A68_152 ;    /* VECTOR [] MODE149 */
struct A68t150 { A68_INT mode; union {
A68_INT  mode1;
struct A68t151  mode2;
struct A68t152  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t150  A68_150 ;    /* UNION(INT,REF MODE151,REF MODE152,VOID)  */
struct A68t153{
A68_INT  Type;
A_PAD_INT(PAD_89)
A68_INT  Auxmode;
A_PAD_INT(PAD_90)
A68_INT  Deflexedmode;
A_PAD_INT(PAD_91)
A68_BOOL  Finalised;
A_PAD_BOOL(PAD_92)
struct A68t150  Extra;
A68_BITS  Flags;
A_PAD_BITS(PAD_93)
};
typedef struct A68t153  A68_153 ;    /* STRUCT(INT,INT,INT,BOOL,MODE150,BITS)  */
struct A68t154{
A68_INT  Parameters;
A_PAD_INT(PAD_94)
A68_INT  Result;
A_PAD_INT(PAD_95)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_96)
};
typedef struct A68t154  A68_154 ;    /* STRUCT(INT,INT,BOOL)  */
A_ROW(struct A68t153 ,A68t155,1);
typedef struct A68t155  A68_155 ;    /* [] MODE153 */

A_PROCEDURE(A68_BITS ,A68t156,(A68_INT ),(A68_INT ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(INT) BITS */

A_PROCEDURE(A68_VOID ,A68t157,(A68_INT ,struct A68t154 *),(A68_INT ,struct A68t154 *,void *));
typedef struct A68t157  A68_157 ;    /* PROC(INT) MODE154 */
A_ISTRUCT(A68_CHAR ,31,A68t158);
typedef struct A68t158  A68_158 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_CHAR ,45,A68t159);
typedef struct A68t159  A68_159 ;    /* STRUCT 45 CHAR */

A_PROCEDURE(A68_VOID ,A68t160,(A68_INT ,struct A68t151 *),(A68_INT ,struct A68t151 *,void *));
typedef struct A68t160  A68_160 ;    /* PROC(INT) REF MODE151 */
A_ISTRUCT(A68_CHAR ,19,A68t161);
typedef struct A68t161  A68_161 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t162);
typedef struct A68t162  A68_162 ;    /* STRUCT 30 CHAR */

A_PROCEDURE(A68_VOID ,A68t163,(A68_INT ,struct A68t152 *),(A68_INT ,struct A68t152 *,void *));
typedef struct A68t163  A68_163 ;    /* PROC(INT) REF MODE152 */
A_ISTRUCT(A68_CHAR ,42,A68t164);
typedef struct A68t164  A68_164 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(A68_CHAR ,49,A68t165);
typedef struct A68t165  A68_165 ;    /* STRUCT 49 CHAR */
struct A68t166{
A68_INT  Thismode;
A_PAD_INT(PAD_97)
struct A68t151  Auxmode;
A68_INT  Dims;
A_PAD_INT(PAD_98)
struct A68t166 * Next;
};
typedef struct A68t166  A68_166 ;    /* STRUCT(INT,REF MODE151,INT,REF MODE166)  */

A_PROCEDURE(A68_VOID ,A68t167,(A68_INT ,struct A68t151 ,A68_INT ,struct A68t166 **),(A68_INT ,struct A68t151 ,A68_INT ,struct A68t166 **,void *));
typedef struct A68t167  A68_167 ;    /* PROC(INT,MODE151,INT,REF REF MODE166) VOID */

A_PROCEDURE(A68_VOID ,A68t168,(A68_BOOL ,struct A68t151 *),(A68_BOOL ,struct A68t151 *,void *));
typedef struct A68t168  A68_168 ;    /* PROC(BOOL) MODE151 */

A_PROCEDURE(A68_BOOL ,A68t169,(struct A68t151 ,struct A68t151 ),(struct A68t151 ,struct A68t151 ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(MODE151,MODE151) BOOL */

A_PROCEDURE(A68_INT ,A68t170,(A68_INT ,struct A68t151 ,A68_INT ),(A68_INT ,struct A68t151 ,A68_INT ,void *));
typedef struct A68t170  A68_170 ;    /* PROC(INT,MODE151,INT) INT */
A_ISTRUCT(A68_CHAR ,28,A68t171);
typedef struct A68t171  A68_171 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(A68_CHAR ,36,A68t172);
typedef struct A68t172  A68_172 ;    /* STRUCT 36 CHAR */
A_VECTOR(struct A68t56 ,A68t173);
typedef struct A68t173  A68_173 ;    /* VECTOR [] MODE56 */

A_PROCEDURE(A68_VOID ,A68t174,(A68_BOOL ,struct A68t173 *),(A68_BOOL ,struct A68t173 *,void *));
typedef struct A68t174  A68_174 ;    /* PROC(BOOL) MODE173 */
A_ISTRUCT(A68_CHAR ,54,A68t175);
typedef struct A68t175  A68_175 ;    /* STRUCT 54 CHAR */

A_PROCEDURE(A68_INT ,A68t176,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(INT,BOOL) INT */
A_ISTRUCT(A68_CHAR ,46,A68t177);
typedef struct A68t177  A68_177 ;    /* STRUCT 46 CHAR */
A_ISTRUCT(A68_CHAR ,48,A68t178);
typedef struct A68t178  A68_178 ;    /* STRUCT 48 CHAR */
A_ISTRUCT(A68_CHAR ,57,A68t179);
typedef struct A68t179  A68_179 ;    /* STRUCT 57 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t180);
typedef struct A68t180  A68_180 ;    /* STRUCT 0 CHAR */

A_PROCEDURE(A68_VOID ,A68t181,(struct A68t151 ,A68_VC *),(struct A68t151 ,A68_VC *,void *));
typedef struct A68t181  A68_181 ;    /* PROC(MODE151) MODE26 */
#define A68_182  A68_VC 
#define A68t182 A68t26            /* FLEX VECTOR [] CHAR */

A_PROCEDURE(A68_VOID ,A68t183,(struct A68t152 ,A68_VC *),(struct A68t152 ,A68_VC *,void *));
typedef struct A68t183  A68_183 ;    /* PROC(MODE152) MODE26 */

A_PROCEDURE(A68_VOID ,A68t184,(struct A68t149 *,A68_VC *),(struct A68t149 *,A68_VC *,void *));
typedef struct A68t184  A68_184 ;    /* PROC(REF MODE149) MODE26 */

A_PROCEDURE(A68_VOID ,A68t185,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t185  A68_185 ;    /* PROC(INT,INT) MODE26 */
A_ISTRUCT(A68_CHAR ,18,A68t186);
typedef struct A68t186  A68_186 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t187);
typedef struct A68t187  A68_187 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t188);
typedef struct A68t188  A68_188 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t189);
typedef struct A68t189  A68_189 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t190);
typedef struct A68t190  A68_190 ;    /* STRUCT 16 CHAR */

A_PROCEDURE(A68_VOID ,A68t191,(A68_INT ,A68_BOOL ,A68_VC *),(A68_INT ,A68_BOOL ,A68_VC *,void *));
typedef struct A68t191  A68_191 ;    /* PROC(INT,BOOL) MODE26 */
A_ISTRUCT(A68_CHAR ,11,A68t192);
typedef struct A68t192  A68_192 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(struct A68t137 ,6,A68t193);
typedef struct A68t193  A68_193 ;    /* STRUCT 6 MODE137 */
A_ISTRUCT(A68_CHAR ,14,A68t194);
typedef struct A68t194  A68_194 ;    /* STRUCT 14 CHAR */

A_PROCEDURE(A68_VOID ,A68t195,(A68_INT ,A68_INT ,A68_BOOL ),(A68_INT ,A68_INT ,A68_BOOL ,void *));
typedef struct A68t195  A68_195 ;    /* PROC(INT,INT,BOOL) VOID */
A_ISTRUCT(A68_CHAR ,8,A68t196);
typedef struct A68t196  A68_196 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(struct A68t137 ,7,A68t197);
typedef struct A68t197  A68_197 ;    /* STRUCT 7 MODE137 */
A_ISTRUCT(A68_CHAR ,12,A68t198);
typedef struct A68t198  A68_198 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(struct A68t137 ,12,A68t199);
typedef struct A68t199  A68_199 ;    /* STRUCT 12 MODE137 */
A_ISTRUCT(struct A68t137 ,3,A68t200);
typedef struct A68t200  A68_200 ;    /* STRUCT 3 MODE137 */
A_ISTRUCT(struct A68t137 ,2,A68t201);
typedef struct A68t201  A68_201 ;    /* STRUCT 2 MODE137 */
A_ISTRUCT(A68_CHAR ,9,A68t202);
typedef struct A68t202  A68_202 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t203);
typedef struct A68t203  A68_203 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(struct A68t137 ,4,A68t204);
typedef struct A68t204  A68_204 ;    /* STRUCT 4 MODE137 */
A_ISTRUCT(struct A68t137 ,5,A68t205);
typedef struct A68t205  A68_205 ;    /* STRUCT 5 MODE137 */
A_ISTRUCT(A68_CHAR ,43,A68t206);
typedef struct A68t206  A68_206 ;    /* STRUCT 43 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t207);
typedef struct A68t207  A68_207 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t208);
typedef struct A68t208  A68_208 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(struct A68t137 ,10,A68t209);
typedef struct A68t209  A68_209 ;    /* STRUCT 10 MODE137 */
A_ROW(struct A68t59 ,A68t210,1);
typedef struct A68t210  A68_210 ;    /* [] MODE59 */

A_PROCEDURE(A68_VOID ,A68t211,(struct A68t210 ,A68_INT ),(struct A68t210 ,A68_INT ,void *));
typedef struct A68t211  A68_211 ;    /* PROC(REF MODE210,INT) VOID */
A_ISTRUCT(A68_CHAR ,27,A68t212);
typedef struct A68t212  A68_212 ;    /* STRUCT 27 CHAR */

A_PROCEDURE(A68_VOID ,A68t213,(struct A68t71 *,struct A68t151 *),(struct A68t71 *,struct A68t151 *,void *));
typedef struct A68t213  A68_213 ;    /* PROC(REF MODE71) REF MODE151 */

A_PROCEDURE(A68_VOID ,A68t214,(struct A68t70 *,struct A68t152 *),(struct A68t70 *,struct A68t152 *,void *));
typedef struct A68t214  A68_214 ;    /* PROC(REF MODE70) REF MODE152 */

A_PROCEDURE(A68_VOID ,A68t215,(A68_BOOL ,struct A68t152 *),(A68_BOOL ,struct A68t152 *,void *));
typedef struct A68t215  A68_215 ;    /* PROC(BOOL) MODE152 */

A_PROCEDURE(A68_VOID ,A68t216,(A68_BOOL ,struct A68t155 *),(A68_BOOL ,struct A68t155 *,void *));
typedef struct A68t216  A68_216 ;    /* PROC(BOOL) MODE155 */

A_PROCEDURE(A68_VOID ,A68t217,(A68_INT ,A68_VC ,A68_BOOL ,struct A68t127 *),(A68_INT ,A68_VC ,A68_BOOL ,struct A68t127 *,void *));
typedef struct A68t217  A68_217 ;    /* PROC(INT,MODE26,BOOL) MODE127 */

A_PROCEDURE(A68_VOID ,A68t218,(A68_INT ,A68_VC ,struct A68t127 *),(A68_INT ,A68_VC ,struct A68t127 *,void *));
typedef struct A68t218  A68_218 ;    /* PROC(INT,MODE26) MODE127 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from centities --- */
extern A68_SINT  EIAACTR_cnewline;
extern A68_VOID  JIAACTR_bracket(A68_VC ,A68_VC *);
/* --- End of imports from centities --- */


/* --- Imports from moduletracer --- */
extern A68_INT  ZCHACTR_tracelevel(A68_VC );
/* --- End of imports from moduletracer --- */


/* --- Imports from coutput --- */
extern A68_VOID  MDMACTR_writecstream(struct A68t136 ,A68_INT );
/* --- End of imports from coutput --- */


/* --- Imports from incvalue --- */
/* --- End of imports from incvalue --- */


/* --- Imports from uniquenameserver --- */
extern A68_72  QIMACTR_newuniquename(void);
/* --- End of imports from uniquenameserver --- */


/* --- Imports from incmode --- */
#define AFAACTR_bitsmode 11
#define WEAACTR_boolmode 7
#define XEAACTR_charmode 8
#define MFAACTR_complmode 23
#define VEAACTR_faultmode 6
#define UFAACTR_firstnonfixedmode 31
#define MEAACTR_flexrow 9
#define NEAACTR_flexvector 10
#define TEAACTR_gotomode 4
#define EFAACTR_intmode 15
#define JEAACTR_istruct 6
#define BFAACTR_longbitsmode 12
#define NFAACTR_longcomplmode 24
#define FFAACTR_longintmode 16
#define CFAACTR_longlongbitsmode 13
#define OFAACTR_longlongcomplmode 25
#define GFAACTR_longlongintmode 17
#define KFAACTR_longlongrealmode 21
#define JFAACTR_longrealmode 20
#define PEAACTR_nomode 0
#define EEAACTR_primitive 1
#define FEAACTR_proc 2
#define GEAACTR_procp 3
#define IFAACTR_realmode 19
extern A68_INT  WFAACTR_refrefmark;
#define VFAACTR_refmark 1024
#define KEAACTR_row 7
#define ZEAACTR_shortbitsmode 10
#define LFAACTR_shortcomplmode 22
#define DFAACTR_shortintmode 14
#define HFAACTR_shortrealmode 18
#define OEAACTR_straight 11
#define IEAACTR_struct 5
#define HEAACTR_union 4
#define LEAACTR_vector 8
#define PFAACTR_vectorrowofcharmode 26
#define UEAACTR_voidmode 5
#define SFAACTR_xtypemode 29
#define TFAACTR_ytypemode 30
/* --- End of imports from incmode --- */


/* --- Imports from incinstallation --- */
/* --- End of imports from incinstallation --- */


/* --- Imports from environment --- */
extern A68_VOID  WXIACTR_assert(A68_VC ,A68_BOOL );
extern A68_BOOL  MQIACTR_longlongoption;
extern A68_VOID  KDHACTR_message(A68_INT ,A68_VC *);
extern A68_VOID  SXIACTR_terminalerror(A68_INT );
extern A68_BOOL  AQIACTR_verboseoption;
extern A68_BOOL  NQIACTR_nostructresultoption;
extern A68_109  MSIACTR_list;
/* --- End of imports from environment --- */


/* --- Imports from environ --- */
#define FSLACTR_modesstream 1
extern A68_INT  QSLACTR_locdecstream(A68_INT );
extern A68_INT  VRLACTR_currentlevel(void);
/* --- End of imports from environ --- */


/* --- Imports from usefulops --- */
extern A68_VOID  RMAAOSF_scanto(A68_CHAR ,A68_VC ,A68_VC *);
extern A68_VOID  SNAAOSF_capitalised(A68_VC ,A68_VC *);
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void THAACTR(void);   /* centities */
extern void BCHACTR(void);   /* moduletracer */
extern void PTLACTR(void);   /* coutput */
extern void GKJACTR(void);   /* incvalue */
extern void RHMACTR(void);   /* uniquenameserver */
extern void ZDAACTR(void);   /* incmode */
extern void ODAACTR(void);   /* incinstallation */
extern void HPIACTR(void);   /* environment */
extern void BPLACTR(void);   /* environ */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_144   GNMACTR = {"$Id: modes.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,HNMACTR,GNMACTR,55)
static A68_146   LNMACTR = {"modes"}; 
A_GISVEC(A68_VC ,MNMACTR,LNMACTR,5)
static A68_147   NNMACTR = {"MODES("}; 
static A68_148   ONMACTR = {"): "}; 
A_GISVEC(A68_VC ,PNMACTR,NNMACTR,6)
A_GISVEC(A68_VC ,RNMACTR,ONMACTR,3)
static A68_146   TNMACTR = {"modes"}; 
A_GISVEC(A68_VC ,VNMACTR,TNMACTR,5)
static A68_155  WNMACTR_modes A_UNUSED;
#define XNMACTR_dynamicbit 0X4U
#define YNMACTR_needsinitbit 0X8U
#define ZNMACTR_hasdescriptors 0X10U
#define AOMACTR_typedefoutput 0X20U
#define BOMACTR_deflexoutput 0X40U
#define COMACTR_incompletetypeoutput 0X80U
static A68_158   TTMACTR = {"MODES - proc info: non-REF mode"}; 
A_GISVEC(A68_VC ,UTMACTR,TTMACTR,31)
static A68_159   WTMACTR = {"MODES - proc info: mode type is proc or procp"}; 
A_GISVEC(A68_VC ,XTMACTR,WTMACTR,45)
static A68_161   OUMACTR = {"union or procp mode"}; 
A_GISVEC(A68_VC ,PUMACTR,OUMACTR,19)
static A68_162   YUMACTR = {"istruct, row, or flex row mode"}; 
A_GISVEC(A68_VC ,ZUMACTR,YUMACTR,30)
static A68_164   HVMACTR = {"MODES - struct field: mode is not a struct"}; 
A_GISVEC(A68_VC ,IVMACTR,HVMACTR,42)
static A68_165   MVMACTR = {"MODES - struct fields: mode table is inconsistent"}; 
A_GISVEC(A68_VC ,NVMACTR,MVMACTR,49)
A68_88  SVMACTR_deproc A_UNUSED;
A68_88  UVMACTR_elementmode A_UNUSED;
A68_88  WVMACTR_istructlength A_UNUSED;
A68_160  YVMACTR_constituents A_UNUSED;
A68_160  AWMACTR_parameters A_UNUSED;
static A68_166 * CWMACTR_rowlist A_UNUSED;
static A68_166 * DWMACTR_vectorlist A_UNUSED;
static A68_166 * EWMACTR_structlist A_UNUSED;
static A68_166 * FWMACTR_unionlist A_UNUSED;
static A68_171   RXMACTR = {"MODES - lookup: unknown list"}; 
A_GISVEC(A68_VC ,SXMACTR,RXMACTR,28)
static A68_172   ZXMACTR = {"MODES - lookup: struct fields is NIL"}; 
A_GISVEC(A68_VC ,CYMACTR,ZXMACTR,36)
static A68_172   TYMACTR = {"MODES - lookup: struct fields is NIL"}; 
A_GISVEC(A68_VC ,WYMACTR,TYMACTR,36)
static A68_175   GZMACTR = {"MODES - lookup: mode isnt row, vector, struct or union"}; 
A_GISVEC(A68_VC ,HZMACTR,GZMACTR,54)
static A68_177   HANACTR = {"MODES - find deflex mode: struct fields is NIL"}; 
A_GISVEC(A68_VC ,KANACTR,HANACTR,46)
static A68_177   BBNACTR = {"MODES - find deflex mode: struct fields is NIL"}; 
A_GISVEC(A68_VC ,EBNACTR,BBNACTR,46)
static A68_178   PBNACTR = {"MODES - find deflex mode: mode list extra is NIL"}; 
A_GISVEC(A68_VC ,SBNACTR,PBNACTR,48)
static A68_179   CCNACTR = {"MODES - find deflex mode: deflexed mode is undefined for "}; 
A_GISVEC(A68_VC ,DCNACTR,CCNACTR,57)
static A68_180   PCNACTR = {""}; 
A_GISVEC(A68_VC ,QCNACTR,PCNACTR,0)
static A68_40   SCNACTR = {"MODE"}; 
A_GISVEC(A68_VC ,TCNACTR,SCNACTR,4)
static A68_180   BDNACTR = {""}; 
A_GISVEC(A68_VC ,CDNACTR,BDNACTR,0)
static A68_186   GGNACTR = {"cannot map vacmode"}; 
A_GISVEC(A68_VC ,HGNACTR,GGNACTR,18)
static A68_161   KGNACTR = {"cannot map skipmode"}; 
A_GISVEC(A68_VC ,LGNACTR,KGNACTR,19)
static A68_148   NGNACTR = {"NIL"}; 
A_GISVEC(A68_VC ,OGNACTR,NGNACTR,3)
static A68_72   PGNACTR = {"jmp_buf"}; 
A_GISVEC(A68_VC ,QGNACTR,PGNACTR,7)
static A68_40   RGNACTR = {"VOID"}; 
A_GISVEC(A68_VC ,SGNACTR,RGNACTR,4)
static A68_187   TGNACTR = {"cannot map faultmode"}; 
A_GISVEC(A68_VC ,UGNACTR,TGNACTR,20)
static A68_40   WGNACTR = {"BOOL"}; 
A_GISVEC(A68_VC ,XGNACTR,WGNACTR,4)
static A68_40   YGNACTR = {"CHAR"}; 
A_GISVEC(A68_VC ,ZGNACTR,YGNACTR,4)
static A68_187   AHNACTR = {"FORMAT not supported"}; 
A_GISVEC(A68_VC ,BHNACTR,AHNACTR,20)
static A68_146   DHNACTR = {"SBITS"}; 
A_GISVEC(A68_VC ,EHNACTR,DHNACTR,5)
static A68_146   FHNACTR = {"LBITS"}; 
A_GISVEC(A68_VC ,GHNACTR,FHNACTR,5)
static A68_40   HHNACTR = {"BITS"}; 
A_GISVEC(A68_VC ,IHNACTR,HHNACTR,4)
static A68_146   JHNACTR = {"LBITS"}; 
A_GISVEC(A68_VC ,KHNACTR,JHNACTR,5)
static A68_146   LHNACTR = {"SBITS"}; 
A_GISVEC(A68_VC ,MHNACTR,LHNACTR,5)
static A68_147   NHNACTR = {"LLBITS"}; 
A_GISVEC(A68_VC ,OHNACTR,NHNACTR,6)
static A68_147   PHNACTR = {"SSBITS"}; 
A_GISVEC(A68_VC ,QHNACTR,PHNACTR,6)
static A68_40   RHNACTR = {"SINT"}; 
A_GISVEC(A68_VC ,SHNACTR,RHNACTR,4)
static A68_40   THNACTR = {"LINT"}; 
A_GISVEC(A68_VC ,UHNACTR,THNACTR,4)
static A68_148   VHNACTR = {"INT"}; 
A_GISVEC(A68_VC ,WHNACTR,VHNACTR,3)
static A68_40   XHNACTR = {"LINT"}; 
A_GISVEC(A68_VC ,YHNACTR,XHNACTR,4)
static A68_40   ZHNACTR = {"SINT"}; 
A_GISVEC(A68_VC ,AINACTR,ZHNACTR,4)
static A68_146   BINACTR = {"LLINT"}; 
A_GISVEC(A68_VC ,CINACTR,BINACTR,5)
static A68_146   DINACTR = {"SSINT"}; 
A_GISVEC(A68_VC ,EINACTR,DINACTR,5)
static A68_146   FINACTR = {"SREAL"}; 
A_GISVEC(A68_VC ,GINACTR,FINACTR,5)
static A68_146   HINACTR = {"LREAL"}; 
A_GISVEC(A68_VC ,IINACTR,HINACTR,5)
static A68_40   JINACTR = {"REAL"}; 
A_GISVEC(A68_VC ,KINACTR,JINACTR,4)
static A68_146   LINACTR = {"LREAL"}; 
A_GISVEC(A68_VC ,MINACTR,LINACTR,5)
static A68_146   NINACTR = {"SREAL"}; 
A_GISVEC(A68_VC ,OINACTR,NINACTR,5)
static A68_147   PINACTR = {"LLREAL"}; 
A_GISVEC(A68_VC ,QINACTR,PINACTR,6)
static A68_147   RINACTR = {"SSREAL"}; 
A_GISVEC(A68_VC ,SINACTR,RINACTR,6)
static A68_147   TINACTR = {"SCOMPL"}; 
A_GISVEC(A68_VC ,UINACTR,TINACTR,6)
static A68_147   VINACTR = {"LCOMPL"}; 
A_GISVEC(A68_VC ,WINACTR,VINACTR,6)
static A68_146   XINACTR = {"COMPL"}; 
A_GISVEC(A68_VC ,YINACTR,XINACTR,5)
static A68_147   ZINACTR = {"LCOMPL"}; 
A_GISVEC(A68_VC ,AJNACTR,ZINACTR,6)
static A68_147   BJNACTR = {"SCOMPL"}; 
A_GISVEC(A68_VC ,CJNACTR,BJNACTR,6)
static A68_72   DJNACTR = {"LLCOMPL"}; 
A_GISVEC(A68_VC ,EJNACTR,DJNACTR,7)
static A68_72   FJNACTR = {"SSCOMPL"}; 
A_GISVEC(A68_VC ,GJNACTR,FJNACTR,7)
static A68_188   HJNACTR = {"VC"}; 
A_GISVEC(A68_VC ,IJNACTR,HJNACTR,2)
static A68_188   JJNACTR = {"RC"}; 
A_GISVEC(A68_VC ,KJNACTR,JJNACTR,2)
static A68_189   LJNACTR = {"cannot map collatmode"}; 
A_GISVEC(A68_VC ,MJNACTR,LJNACTR,21)
static A68_161   OJNACTR = {"XTYPE not supported"}; 
A_GISVEC(A68_VC ,PJNACTR,OJNACTR,19)
static A68_161   RJNACTR = {"YTYPE not supported"}; 
A_GISVEC(A68_VC ,SJNACTR,RJNACTR,19)
static A68_146   UJNACTR = {"mode "}; 
static A68_190   VJNACTR = {" is not built in"}; 
A_GISVEC(A68_VC ,WJNACTR,UJNACTR,5)
A_GISVEC(A68_VC ,YJNACTR,VJNACTR,16)
static A68_40   FKNACTR = {"A68_"}; 
A_GISVEC(A68_VC ,HKNACTR,FKNACTR,4)
static A68_192   JKNACTR = {"struct A68t"}; 
A_GISVEC(A68_VC ,LKNACTR,JKNACTR,11)
static A68_40   MKNACTR = {"A68_"}; 
A_GISVEC(A68_VC ,NKNACTR,MKNACTR,4)
static A68_146   LLNACTR = {"A_SZ_"}; 
A_GISVEC(A68_VC ,NLNACTR,LLNACTR,5)
static A68_40   RLNACTR = {"A68t"}; 
A_GISVEC(A68_VC ,TLNACTR,RLNACTR,4)
static A68_INT  ZLNACTR_padno A_UNUSED;
static A68_147   EMNACTR = {"A_PAD_"}; 
A_GISVEC(A68_VC ,FMNACTR,EMNACTR,6)
static A68_146   KMNACTR = {"(PAD_"}; 
A_GISVEC(A68_VC ,LMNACTR,KMNACTR,5)
static A68_194   WMNACTR = {"A_PAD_ISTRUCT("}; 
A_GISVEC(A68_VC ,XMNACTR,WMNACTR,14)
static A68_146   CNNACTR = {",PAD_"}; 
A_GISVEC(A68_VC ,DNNACTR,CNNACTR,5)
static A68_190   UNNACTR = {"write c typedef("}; 
A_GISVEC(A68_VC ,VNNACTR,UNNACTR,16)
static A68_196   ZNNACTR = {"typedef "}; 
A_GISVEC(A68_VC ,AONACTR,ZNNACTR,8)
static A68_148   CONACTR = {"/* "}; 
static A68_148   DONACTR = {" */"}; 
A_GISVEC(A68_VC ,FONACTR,CONACTR,3)
A_GISVEC(A68_VC ,HONACTR,DONACTR,3)
static A68_180   IONACTR = {""}; 
A_GISVEC(A68_VC ,JONACTR,IONACTR,0)
static A68_146   ZONACTR = {";    "}; 
A_GISVEC(A68_VC ,APNACTR,ZONACTR,5)
static A68_196   NPNACTR = {"#define "}; 
A_GISVEC(A68_VC ,OPNACTR,NPNACTR,8)
static A68_196   YPNACTR = {"#define "}; 
A_GISVEC(A68_VC ,ZPNACTR,YPNACTR,8)
static A68_198   IQNACTR = {"            "}; 
A_GISVEC(A68_VC ,JQNACTR,IQNACTR,12)
static A68_198   WRNACTR = {"A_PROCEDURE("}; 
A_GISVEC(A68_VC ,XRNACTR,WRNACTR,12)
static A68_188   HSNACTR = {",("}; 
A_GISVEC(A68_VC ,ISNACTR,HSNACTR,2)
static A68_40   NSNACTR = {"void"}; 
A_GISVEC(A68_VC ,OSNACTR,NSNACTR,4)
static A68_180   YSNACTR = {""}; 
A_GISVEC(A68_VC ,ZSNACTR,YSNACTR,0)
static A68_180   ITNACTR = {""}; 
A_GISVEC(A68_VC ,JTNACTR,ITNACTR,0)
static A68_148   RTNACTR = {"),("}; 
A_GISVEC(A68_VC ,STNACTR,RTNACTR,3)
static A68_180   CUNACTR = {""}; 
A_GISVEC(A68_VC ,DUNACTR,CUNACTR,0)
static A68_180   MUNACTR = {""}; 
A_GISVEC(A68_VC ,NUNACTR,MUNACTR,0)
static A68_180   YUNACTR = {""}; 
A_GISVEC(A68_VC ,ZUNACTR,YUNACTR,0)
static A68_202   CVNACTR = {"void *));"}; 
A_GISVEC(A68_VC ,DVNACTR,CVNACTR,9)
static A68_202   PVNACTR = {"A_VECTOR("}; 
A_GISVEC(A68_VC ,QVNACTR,PVNACTR,9)
static A68_188   ZVNACTR = {");"}; 
A_GISVEC(A68_VC ,AWNACTR,ZVNACTR,2)
static A68_147   NWNACTR = {"A_ROW("}; 
A_GISVEC(A68_VC ,OWNACTR,NWNACTR,6)
static A68_188   AXNACTR = {");"}; 
A_GISVEC(A68_VC ,BXNACTR,AXNACTR,2)
static A68_72   OXNACTR = {";      "}; 
A_GISVEC(A68_VC ,PXNACTR,OXNACTR,7)
static A68_72   CYNACTR = {"struct "}; 
A_GISVEC(A68_VC ,DYNACTR,CYNACTR,7)
static A68_203   IYNACTR = {" { A68_INT mode; union {"}; 
A_GISVEC(A68_VC ,JYNACTR,IYNACTR,24)
static A68_146   VYNACTR = {" mode"}; 
A_GISVEC(A68_VC ,WYNACTR,VYNACTR,5)
static A68_206   GZNACTR = {"} data __attribute__ ((__aligned__(8))); };"}; 
A_GISVEC(A68_VC ,HZNACTR,GZNACTR,43)
static A68_72   UZNACTR = {"struct "}; 
A_GISVEC(A68_VC ,VZNACTR,UZNACTR,7)
static A68_188   QAOACTR = {"};"}; 
A_GISVEC(A68_VC ,RAOACTR,QAOACTR,2)
static A68_207   ZAOACTR = {"A_ISTRUCT("}; 
A_GISVEC(A68_VC ,ABOACTR,ZAOACTR,10)
static A68_188   OBOACTR = {");"}; 
A_GISVEC(A68_VC ,PBOACTR,OBOACTR,2)
static A68_192   YBOACTR = {"A_STRAIGHT("}; 
static A68_196   ZBOACTR = {"A68_VOID"}; 
A_GISVEC(A68_VC ,BCOACTR,ZBOACTR,8)
A_GISVEC(A68_VC ,DCOACTR,YBOACTR,11)
static A68_208   MCOACTR = {"(A68_INT,char *"}; 
A_GISVEC(A68_VC ,NCOACTR,MCOACTR,15)
static A68_180   SCOACTR = {""}; 
A_GISVEC(A68_VC ,TCOACTR,SCOACTR,0)
static A68_180   YCOACTR = {""}; 
A_GISVEC(A68_VC ,ZCOACTR,YCOACTR,0)
static A68_180   EDOACTR = {""}; 
A_GISVEC(A68_VC ,FDOACTR,EDOACTR,0)
static A68_148   IDOACTR = {"));"}; 
A_GISVEC(A68_VC ,JDOACTR,IDOACTR,3)
static A68_212   TDOACTR = {"initialise mode table(REF ["}; 
static A68_147   UDOACTR = {"] MDE)"}; 
A_GISVEC(A68_VC ,VDOACTR,TDOACTR,27)
A_GISVEC(A68_VC ,XDOACTR,UDOACTR,6)
static A68_188   QKOACTR = {": "}; 
A_GISVEC(A68_VC ,SKOACTR,QKOACTR,2)
static A68_186   UKOACTR = {"------------------"}; 
A_GISVEC(A68_VC ,VKOACTR,UKOACTR,18)
static A68_188   ZKOACTR = {": "}; 
static A68_194   ALOACTR = {" ---deflex--> "}; 
static A68_188   BLOACTR = {": "}; 
A_GISVEC(A68_VC ,DLOACTR,ZKOACTR,2)
A_GISVEC(A68_VC ,FLOACTR,ALOACTR,14)
A_GISVEC(A68_VC ,HLOACTR,BLOACTR,2)
static A68_72   SLOACTR = {" = {0};"}; 
A_GISVEC(A68_VC ,ULOACTR,SLOACTR,7)
static A68_146   EMOACTR = {"  /* "}; 
static A68_148   FMOACTR = {" */"}; 
A_GISVEC(A68_VC ,GMOACTR,EMOACTR,5)
A_GISVEC(A68_VC ,HMOACTR,FMOACTR,3)
A68_218  TMOACTR_new A_UNUSED;
typedef struct   /* env of non-global proc */
{
A68_151  RWMACTR_xmodes;
} WWMACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_152  YXMACTR_strctfields;
} GYMACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_152  GANACTR_strctfields;
} OANACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_151  GBNACTR_deflexedmodestemp;
} KBNACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  Mode;
A_PAD_INT(PAD_99)
} IDNACTR_rowmodename;
typedef struct   /* env of non-global proc */
{
A68_VC  BONACTR_typedef;
A68_VC  KONACTR_comment;
A68_INT  Stream;
A_PAD_INT(PAD_100)
} QONACTR_emittagtypedef;
typedef struct   /* env of non-global proc */
{
A68_INT  Stream;
A_PAD_INT(PAD_101)
A68_VC  KONACTR_comment;
} KPNACTR_emitdeflextypedef;
typedef struct   /* env of non-global proc */
{
A68_153 * YNNACTR_entry;
A68_INT  QNNACTR_mode;
A_PAD_INT(PAD_102)
A68_INT  Stream;
A_PAD_INT(PAD_103)
} RQNACTR_emitincompletetype;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Pre_declare;
A_PAD_BOOL(PAD_104)
A68_94  PQNACTR_emitincompletetype;
A68_153 * YNNACTR_entry;
A68_INT  QNNACTR_mode;
A_PAD_INT(PAD_105)
A68_INT  Stream;
A_PAD_INT(PAD_106)
A68_93  OONACTR_emittagtypedef;
} DRNACTR_emitproctypedef;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Pre_declare;
A_PAD_BOOL(PAD_107)
A68_94  PQNACTR_emitincompletetype;
A68_INT  QNNACTR_mode;
A_PAD_INT(PAD_108)
A68_INT  Stream;
A_PAD_INT(PAD_109)
A68_93  OONACTR_emittagtypedef;
A68_153 * YNNACTR_entry;
A68_97  IPNACTR_emitdeflextypedef;
} KVNACTR_emitvectortypedef;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Pre_declare;
A_PAD_BOOL(PAD_110)
A68_94  PQNACTR_emitincompletetype;
A68_INT  QNNACTR_mode;
A_PAD_INT(PAD_111)
A68_INT  Stream;
A_PAD_INT(PAD_112)
A68_93  OONACTR_emittagtypedef;
A68_153 * YNNACTR_entry;
A68_97  IPNACTR_emitdeflextypedef;
} IWNACTR_emitarraytypedef;
typedef struct   /* env of non-global proc */
{
A68_INT  YDOACTR_unset;
A_PAD_INT(PAD_113)
A68_210  Mdes;
} BEOACTR_initialisemodes;
typedef struct   /* env of non-global proc */
{
A68_93  LIOACTR_finalisemode;
} NIOACTR_finalisemode;
typedef struct   /* env of non-global proc */
{
A68_INT  Nomodes;
A_PAD_INT(PAD_114)
} BKOACTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} RDNACTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} IENACTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} NRNACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * IFOACTR_i;
} NFOACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * XFOACTR_i;
} CGOACTR_generator;

A_STATIC A68_VOID  KNMACTR_debugmessage(A68_INT  Level, A68_VC  M);

A_STATIC A68_BOOL  SNMACTR_debugging(void);

A68_INT  EOMACTR_deref(A68_INT  Mode);

A68_INT  IOMACTR_modetype(A68_INT  Mode);

A68_BOOL  MOMACTR_hasoneref(A68_INT  M);

A68_BOOL  QOMACTR_isbool(A68_INT  M);

A68_BOOL  TOMACTR_ischar(A68_INT  M);

A68_BOOL  WOMACTR_isint(A68_INT  M);

A68_BOOL  ZOMACTR_islbits(A68_INT  M);

A68_BOOL  DPMACTR_islint(A68_INT  M);

A68_BOOL  HPMACTR_islreal(A68_INT  M);

A68_BOOL  LPMACTR_islcompl(A68_INT  M);

A68_BOOL  PPMACTR_isvec(A68_INT  M);

A68_BOOL  TPMACTR_isrow(A68_INT  M);

A68_BOOL  XPMACTR_isfirmarray(A68_INT  M);

A68_BOOL  BQMACTR_isstraight(A68_INT  M);

A68_BOOL  EQMACTR_isflexvec(A68_INT  M);

A68_BOOL  IQMACTR_isflexrow(A68_INT  M);

A68_BOOL  MQMACTR_isflexarray(A68_INT  M);

A68_BOOL  QQMACTR_isvector(A68_INT  Mode);

A68_BOOL  VQMACTR_isrow(A68_INT  Mode);

A68_BOOL  ARMACTR_isarray(A68_INT  Mode);

A68_BOOL  FRMACTR_isfirmarray(A68_INT  Mode);

A68_BOOL  KRMACTR_isflexarray(A68_INT  Mode);

A68_BOOL  PRMACTR_isstruct(A68_INT  Mode);

A68_BOOL  TRMACTR_isunion(A68_INT  Mode);

A68_BOOL  XRMACTR_isistruct(A68_INT  Mode);

A_STATIC A68_BOOL  BSMACTR_isstraight(A68_INT  Mode);

A68_BOOL  FSMACTR_iscompl(A68_INT  Mode);

A68_BOOL  JSMACTR_isproc(A68_INT  Mode);

A68_BOOL  NSMACTR_isprocp(A68_INT  Mode);

A68_BOOL  RSMACTR_hasrefs(A68_INT  Mode);

A68_BOOL  VSMACTR_iscstruct(A68_INT  Mode);

A68_INT  BTMACTR_derefmode(A68_INT  Mode);

A68_INT  ETMACTR_derefmodeok(A68_INT  Mode);

A_STATIC A68_INT  HTMACTR_auxmode(A68_INT  Mode);

A_STATIC A68_BITS  LTMACTR_flags(A68_INT  Mode);

A68_BOOL  OTMACTR_dynamic(A68_INT  Mode);

A68_VOID  STMACTR_procinfo(A68_INT  Mode, A68_154  *ReturnedValue);

A_STATIC A68_BOOL  GUMACTR_dynamicdescriptor(A68_INT  Mode);

A_STATIC A68_VOID  LUMACTR_modelistextra(A68_INT  Mode, A68_151  *ReturnedValue);

A_STATIC A68_INT  VUMACTR_intextra(A68_INT  Mode);

A68_VOID  EVMACTR_structfields(A68_INT  Mode, A68_152  *ReturnedValue);

A68_INT  QVMACTR_dimensions(A68_INT  Mode);

A_STATIC A68_VOID  KWMACTR_addtolist(A68_INT  Thismode, A68_151  Auxmodes, A68_INT  Dims, A68_166 ** List);

A_STATIC A68_VOID  VWMACTR_generator(A68_BOOL  TWMACTR_anonymous, A68_151  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  DXMACTR_(A68_151  A, A68_151  B);

A_STATIC A68_BOOL  KXMACTR_(A68_151  A, A68_151  B);

A_STATIC A68_INT  PXMACTR_lookup(A68_INT  Mode, A68_151  Auxmode, A68_INT  Dims);

A_STATIC A68_VOID  FYMACTR_generator(A68_BOOL  DYMACTR_anonymous, A68_173  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  LZMACTR_deflexedmode(A68_INT  Mode, A68_BOOL  Toplevel);

A_STATIC A68_INT  SZMACTR_findthedeflexmode(A68_INT  Mode, A68_BOOL  Toplevel);

A_STATIC A68_VOID  NANACTR_generator(A68_BOOL  LANACTR_anonymous, A68_151  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JBNACTR_generator(A68_BOOL  HBNACTR_anonymous, A68_151  *ReturnedValue, void *NonLocals);

A68_INT  HCNACTR_finddeflexmode(A68_INT  Mode);

A_STATIC A68_VOID  KCNACTR_auxmodename(A68_INT  Mode, A68_VC  *ReturnedValue);

A68_VOID  WCNACTR_modename(A68_INT  Mode, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  HDNACTR_rowmodename(A68_VC  Rowtype, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NDNACTR_modelist(A68_151  Modelist, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  QDNACTR_generator(A68_BOOL  ODNACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  EENACTR_fieldlist(A68_152  Fields, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  HENACTR_generator(A68_BOOL  FENACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  RFNACTR_cfieldname(A68_149 * Sf, A68_VC  *ReturnedValue);

A68_VOID  ZFNACTR_select(A68_INT  Mode, A68_INT  Field, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  EGNACTR_builtinmode(A68_INT  Mode, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  CKNACTR_givectype(A68_INT  Mode, A68_BOOL  Tagged, A68_VC  *ReturnedValue);

A68_INT  TKNACTR_givecvariabletype(A68_INT  Mode, A68_BOOL  Identity);

A68_VOID  XKNACTR_ctype(A68_INT  Mode, A68_VC  *ReturnedValue);

A68_VOID  BLNACTR_cvartype(A68_INT  Mode, A68_VC  *ReturnedValue);

A68_VOID  FLNACTR_cast(A68_INT  Mode, A68_VC  *ReturnedValue);

A68_VOID  KLNACTR_csizeof(A68_INT  Mode, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  QLNACTR_ctag(A68_INT  Mode, A68_VC  *ReturnedValue);

A68_VOID  WLNACTR_ctaggedtype(A68_INT  Mode, A68_VC  *ReturnedValue);

A68_VOID  CMNACTR_alignnextstructfield(A68_INT  Fieldmode, A68_INT  Stream);

A_STATIC A68_VOID  PNNACTR_writectypedef(A68_INT  Underefedmode, A68_INT  Stream, A68_BOOL  Pre_declare);

A_STATIC A68_VOID  PONACTR_emittagtypedef(A68_INT  Mode, void *NonLocals);

A_STATIC A68_VOID  JPNACTR_emitdeflextypedef(A68_INT  Mode, A68_INT  Deflexmode, void *NonLocals);

A_STATIC A68_VOID  QQNACTR_emitincompletetype(void *NonLocals);

A_STATIC A68_VOID  CRNACTR_emitproctypedef(void *NonLocals);

A_STATIC A68_VOID  MRNACTR_generator(A68_BOOL  KRNACTR_anonymous, A68_151  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JVNACTR_emitvectortypedef(void *NonLocals);

A_STATIC A68_VOID  HWNACTR_emitarraytypedef(void *NonLocals);

A68_VOID  SDOACTR_initialisemodetable(A68_210  Mdes, A68_INT  Nomodes);

A_STATIC A68_VOID  AEOACTR_initialisemodes(void *NonLocals);

A_STATIC A68_VOID  HFOACTR_reducedmodelist(A68_71 * Modelist, A68_151  *ReturnedValue);

A_STATIC A68_VOID  MFOACTR_generator(A68_BOOL  KFOACTR_anonymous, A68_151  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WFOACTR_reducedselist(A68_70 * Selist, A68_152  *ReturnedValue);

A_STATIC A68_VOID  BGOACTR_generator(A68_BOOL  ZFOACTR_anonymous, A68_152  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MIOACTR_finalisemode(A68_INT  Mode, void *NonLocals);

A_STATIC A68_VOID  AKOACTR_generator(A68_BOOL  YJOACTR_anonymous, A68_155  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MLOACTR_declarectemporaryinit(A68_INT  Mode, A68_VC  Commenttext, A68_BOOL  Zeroed, A68_127  *ReturnedValue);

A68_VOID  QMOACTR_declarectemporary(A68_INT  Mode, A68_VC  Commenttext, A68_127  *ReturnedValue);

A68_VOID  XMOACTR_newzeroed(A68_INT  Mode, A68_VC  Commenttext, A68_127  *ReturnedValue);

A_STATIC A68_VOID  MFOACTR_generator(A68_BOOL  KFOACTR_anonymous, A68_151  *ReturnedValue, void *NonLocals)
#define NL(x) (((NFOACTR_generator *)NonLocals)->x)
{ 
A68_151  OFOACTR;  /* clause result */
A68_151  PFOACTR;  /* OPERATORS - dynamic generator */
{ 
PFOACTR.upb = (*NL(IFOACTR_i)) ;
( KFOACTR_anonymous? A_VLOC(A68_INT ,PFOACTR): A_VHEAP(A68_INT ,PFOACTR) );
OFOACTR = PFOACTR;
} 
*ReturnedValue = (OFOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  BGOACTR_generator(A68_BOOL  ZFOACTR_anonymous, A68_152  *ReturnedValue, void *NonLocals)
#define NL(x) (((CGOACTR_generator *)NonLocals)->x)
{ 
A68_152  DGOACTR;  /* clause result */
A68_152  EGOACTR;  /* OPERATORS - dynamic generator */
{ 
EGOACTR.upb = (*NL(XFOACTR_i)) ;
( ZFOACTR_anonymous? A_VLOC(A68_149 ,EGOACTR): A_VHEAP(A68_149 ,EGOACTR) );
DGOACTR = EGOACTR;
} 
*ReturnedValue = (DGOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  QDNACTR_generator(A68_BOOL  ODNACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((RDNACTR_generator *)NonLocals)->x)
{ 
A68_VC  SDNACTR;  /* clause result */
A68_VC  TDNACTR;  /* OPERATORS - dynamic generator */
{ 
TDNACTR.upb = 0 ;
( ODNACTR_anonymous? A_VLOC(A68_CHAR ,TDNACTR): A_VHEAP(A68_CHAR ,TDNACTR) );
SDNACTR = TDNACTR;
} 
*ReturnedValue = (SDNACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HENACTR_generator(A68_BOOL  FENACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((IENACTR_generator *)NonLocals)->x)
{ 
A68_VC  JENACTR;  /* clause result */
A68_VC  KENACTR;  /* OPERATORS - dynamic generator */
{ 
KENACTR.upb = 0 ;
( FENACTR_anonymous? A_VLOC(A68_CHAR ,KENACTR): A_VHEAP(A68_CHAR ,KENACTR) );
JENACTR = KENACTR;
} 
*ReturnedValue = (JENACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  MRNACTR_generator(A68_BOOL  KRNACTR_anonymous, A68_151  *ReturnedValue, void *NonLocals)
#define NL(x) (((NRNACTR_generator *)NonLocals)->x)
{ 
A68_151  ORNACTR;  /* clause result */
A68_151  PRNACTR;  /* OPERATORS - dynamic generator */
{ 
PRNACTR.upb = 0 ;
( KRNACTR_anonymous? A_VLOC(A68_INT ,PRNACTR): A_VHEAP(A68_INT ,PRNACTR) );
ORNACTR = PRNACTR;
} 
*ReturnedValue = (ORNACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HFOACTR_reducedmodelist(A68_71 * Modelist, A68_151  *ReturnedValue)
{ 
A68_INT  IFOACTR_i A_UNUSED = {0};
A68_71 * JFOACTR_list A_UNUSED = {0};
A68_168  LFOACTR_generator;   /* proc value of non-global proc */
A68_151  QFOACTR;  /* avoid structure result */
A68_151  RFOACTR_extra A_UNUSED = {0};
A68_INT * SFOACTR_mode A_UNUSED = {0};
A68_INT  TFOACTR;  /* forall loop counter */
A68_151  UFOACTR;  /* clause result */
A_PROC_ENTRY(reducedmodelist);
 /* line 1187: */
 /* line 1188: */
{ 
IFOACTR_i = 0;
 /* line 1189: */
JFOACTR_list = Modelist;
 /* line 1191: */
for ( ;; )
{ 
 /* line 1192: */
 /* line 1193: */
if ( !((JFOACTR_list!=(A68_71 *)A68_NIL)) ) break;
(void)(JFOACTR_list = (*(&(JFOACTR_list->Rest))));
 /* line 1194: */
 /* line 1195: */
IFOACTR_i+=1;
}
 /* line 1197: */
A_CLOSURE( LFOACTR_generator, MFOACTR_generator, NFOACTR_generator );
(( NFOACTR_generator * ) ( LFOACTR_generator.nonlocals )) -> IFOACTR_i = (&IFOACTR_i);
A_CALLPROC(LFOACTR_generator,(A68_FALSE, &QFOACTR),(A68_FALSE, &QFOACTR,(LFOACTR_generator).nonlocals));
RFOACTR_extra = QFOACTR;
 /* line 1198: */
JFOACTR_list = Modelist;
 /* line 1200: */
 /* line 1201: */
TFOACTR = RFOACTR_extra.upb -1;
SFOACTR_mode = RFOACTR_extra.data;
for (;TFOACTR-- >= 0;
(SFOACTR_mode++
) )
{
 /* line 1202: */
(void)((*SFOACTR_mode) = (*(&(JFOACTR_list->Mode))));
 /* line 1203: */
 /* line 1204: */
(void)(JFOACTR_list = (*(&(JFOACTR_list->Rest))));
}
 /* line 1206: */
 /* line 1208: */
UFOACTR = RFOACTR_extra;
} 
A_PROC_EXIT(reducedmodelist);
*ReturnedValue = (UFOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  WFOACTR_reducedselist(A68_70 * Selist, A68_152  *ReturnedValue)
{ 
A68_INT  XFOACTR_i A_UNUSED = {0};
A68_70 * YFOACTR_list A_UNUSED = {0};
A68_215  AGOACTR_generator;   /* proc value of non-global proc */
A68_152  FGOACTR;  /* avoid structure result */
A68_152  GGOACTR_fields A_UNUSED = {0};
A68_149 * HGOACTR_field A_UNUSED = {0};
A68_INT  IGOACTR;  /* forall loop counter */
A68_INT * JGOACTR;  /* YIELD */
A68_56 * KGOACTR;  /* YIELD */
A68_152  LGOACTR;  /* clause result */
A_PROC_ENTRY(reducedselist);
 /* line 1214: */
 /* line 1215: */
{ 
XFOACTR_i = 0;
 /* line 1216: */
YFOACTR_list = Selist;
 /* line 1218: */
for ( ;; )
{ 
 /* line 1219: */
 /* line 1220: */
if ( !((YFOACTR_list!=(A68_70 *)A68_NIL)) ) break;
(void)(YFOACTR_list = (*(&(YFOACTR_list->Rest))));
 /* line 1221: */
 /* line 1222: */
XFOACTR_i+=1;
}
 /* line 1224: */
A_CLOSURE( AGOACTR_generator, BGOACTR_generator, CGOACTR_generator );
(( CGOACTR_generator * ) ( AGOACTR_generator.nonlocals )) -> XFOACTR_i = (&XFOACTR_i);
A_CALLPROC(AGOACTR_generator,(A68_FALSE, &FGOACTR),(A68_FALSE, &FGOACTR,(AGOACTR_generator).nonlocals));
GGOACTR_fields = FGOACTR;
 /* line 1225: */
YFOACTR_list = Selist;
 /* line 1227: */
 /* line 1228: */
IGOACTR = GGOACTR_fields.upb -1;
HGOACTR_field = GGOACTR_fields.data;
for (;IGOACTR-- >= 0;
(HGOACTR_field++
) )
{
 /* line 1229: */
JGOACTR = (&(HGOACTR_field->Mode)) ;
(void)((*JGOACTR) = (*(&(YFOACTR_list->Mode))));
 /* line 1230: */
KGOACTR = (&(HGOACTR_field->Name)) ;
(void)((*KGOACTR) = (*(&(YFOACTR_list->Name))));
 /* line 1231: */
 /* line 1232: */
(void)(YFOACTR_list = (*(&(YFOACTR_list->Rest))));
}
 /* line 1234: */
 /* line 1236: */
LGOACTR = GGOACTR_fields;
} 
A_PROC_EXIT(reducedselist);
*ReturnedValue = (LGOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  VWMACTR_generator(A68_BOOL  TWMACTR_anonymous, A68_151  *ReturnedValue, void *NonLocals)
#define NL(x) (((WWMACTR_generator *)NonLocals)->x)
{ 
A68_151  XWMACTR;  /* clause result */
A68_151  YWMACTR;  /* OPERATORS - dynamic generator */
{ 
YWMACTR.upb = NL(RWMACTR_xmodes).upb ;
( TWMACTR_anonymous? A_VLOC(A68_INT ,YWMACTR): A_VHEAP(A68_INT ,YWMACTR) );
XWMACTR = YWMACTR;
} 
*ReturnedValue = (XWMACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  FYMACTR_generator(A68_BOOL  DYMACTR_anonymous, A68_173  *ReturnedValue, void *NonLocals)
#define NL(x) (((GYMACTR_generator *)NonLocals)->x)
{ 
A68_173  HYMACTR;  /* clause result */
A68_173  IYMACTR;  /* OPERATORS - dynamic generator */
{ 
IYMACTR.upb = NL(YXMACTR_strctfields).upb ;
( DYMACTR_anonymous? A_VLOC(A68_56 ,IYMACTR): A_VHEAP(A68_56 ,IYMACTR) );
HYMACTR = IYMACTR;
} 
*ReturnedValue = (HYMACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  NANACTR_generator(A68_BOOL  LANACTR_anonymous, A68_151  *ReturnedValue, void *NonLocals)
#define NL(x) (((OANACTR_generator *)NonLocals)->x)
{ 
A68_151  PANACTR;  /* clause result */
A68_151  QANACTR;  /* OPERATORS - dynamic generator */
{ 
QANACTR.upb = NL(GANACTR_strctfields).upb ;
( LANACTR_anonymous? A_VLOC(A68_INT ,QANACTR): A_VHEAP(A68_INT ,QANACTR) );
PANACTR = QANACTR;
} 
*ReturnedValue = (PANACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  JBNACTR_generator(A68_BOOL  HBNACTR_anonymous, A68_151  *ReturnedValue, void *NonLocals)
#define NL(x) (((KBNACTR_generator *)NonLocals)->x)
{ 
A68_151  LBNACTR;  /* clause result */
A68_151  MBNACTR;  /* OPERATORS - dynamic generator */
{ 
MBNACTR.upb = NL(GBNACTR_deflexedmodestemp).upb ;
( HBNACTR_anonymous? A_VLOC(A68_INT ,MBNACTR): A_VHEAP(A68_INT ,MBNACTR) );
LBNACTR = MBNACTR;
} 
*ReturnedValue = (LBNACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HDNACTR_rowmodename(A68_VC  Rowtype, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((IDNACTR_rowmodename *)NonLocals)->x)
{ 
A68_VC  JDNACTR;  /* clause result */
A68_VC  KDNACTR;  /* avoid structure result */
A68_VC  LDNACTR;  /* avoid structure result */
A_PROC_ENTRY(rowmodename);
 /* line 627: */
 /* line 628: */
 /* line 629: */
 /* line 630: */
KDHACTR_message( 44, &KDNACTR );
KCNACTR_auxmodename( A_CALLPROC(UVMACTR_elementmode,(NL(Mode)),(NL(Mode),(UVMACTR_elementmode).nonlocals)), &LDNACTR );
JDNACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(Rowtype,A_C_TIMES(',',(QVMACTR_dimensions(NL(Mode))-1))),KDNACTR),LDNACTR);
A_PROC_EXIT(rowmodename);
*ReturnedValue = (JDNACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  NDNACTR_modelist(A68_151  Modelist, A68_VC  *ReturnedValue)
{ 
A68_139  PDNACTR_generator;   /* proc value of non-global proc */
A68_182  VDNACTR;  /* avoid structure result */
A68_182  UDNACTR_result A_UNUSED = {0};
A68_INT  WDNACTR_mode A_UNUSED = {0};
A68_INT * XDNACTR;  /* forall control - []x */
A68_INT  YDNACTR;  /* forall loop counter */
A68_VC  ZDNACTR;  /* avoid structure result */
A68_VC  AENACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  BENACTR;  /* clause result */
A68_VC  CENACTR;  /* OPERATORS - trim index */
A_PROC_ENTRY(modelist);
 /* line 633: */
 /* line 634: */
{ 
A_CLOSURE( PDNACTR_generator, QDNACTR_generator, RDNACTR_generator );
A_CALLPROC(PDNACTR_generator,(A68_TRUE, &VDNACTR),(A68_TRUE, &VDNACTR,(PDNACTR_generator).nonlocals));
UDNACTR_result = VDNACTR;
 /* line 635: */
 /* line 636: */
YDNACTR = Modelist.upb -1;
XDNACTR = Modelist.data;
for (;YDNACTR-- >= 0;
(XDNACTR++
) )
{
WDNACTR_mode = *XDNACTR;
 /* line 637: */
 /* line 638: */
KCNACTR_auxmodename( WDNACTR_mode, &ZDNACTR );
(void)(A_VC_PLUSAB(UDNACTR_result,A_VC_PLUS(ZDNACTR,A_HVEC(AENACTR,',',A68_CHAR ))));
}
 /* line 639: */
 /* line 640: */
BENACTR = A_VTRIM(CENACTR,(*(&UDNACTR_result)),A_VTSCRIPT(&(CENACTR.upb),(*(&UDNACTR_result)).upb,1,(UDNACTR_result.upb-1)));
} 
A_PROC_EXIT(modelist);
*ReturnedValue = (BENACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  EENACTR_fieldlist(A68_152  Fields, A68_VC  *ReturnedValue)
{ 
A68_139  GENACTR_generator;   /* proc value of non-global proc */
A68_182  MENACTR;  /* avoid structure result */
A68_182  LENACTR_result A_UNUSED = {0};
A68_149  NENACTR_field A_UNUSED = {0};
A68_149 * OENACTR;  /* forall control - []x */
A68_INT  PENACTR;  /* forall loop counter */
A68_VC  QENACTR;  /* avoid structure result */
A68_VC  RENACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  SENACTR;  /* clause result */
A68_VC  TENACTR;  /* OPERATORS - trim index */
A_PROC_ENTRY(fieldlist);
 /* line 643: */
 /* line 644: */
{ 
A_CLOSURE( GENACTR_generator, HENACTR_generator, IENACTR_generator );
A_CALLPROC(GENACTR_generator,(A68_TRUE, &MENACTR),(A68_TRUE, &MENACTR,(GENACTR_generator).nonlocals));
LENACTR_result = MENACTR;
 /* line 645: */
 /* line 646: */
PENACTR = Fields.upb -1;
OENACTR = Fields.data;
for (;PENACTR-- >= 0;
(OENACTR++
) )
{
NENACTR_field = *OENACTR;
 /* line 647: */
 /* line 648: */
KCNACTR_auxmodename( NENACTR_field.Mode, &QENACTR );
(void)(A_VC_PLUSAB(LENACTR_result,A_VC_PLUS(QENACTR,A_HVEC(RENACTR,',',A68_CHAR ))));
}
 /* line 649: */
 /* line 650: */
SENACTR = A_VTRIM(TENACTR,(*(&LENACTR_result)),A_VTSCRIPT(&(TENACTR.upb),(*(&LENACTR_result)).upb,1,(LENACTR_result.upb-1)));
} 
A_PROC_EXIT(fieldlist);
*ReturnedValue = (SENACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  PONACTR_emittagtypedef(A68_INT  Mode, void *NonLocals)
#define NL(x) (((QONACTR_emittagtypedef *)NonLocals)->x)
{ 
A68_197  RONACTR;  /* collateral clause result */
A68_137  SONACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  TONACTR;  /* avoid structure result */
A68_137  UONACTR = {0};  /* OPERATORS - mode -> union mode */
A68_137  VONACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  WONACTR;  /* YIELD */
A68_VC  XONACTR;  /* avoid structure result */
A68_137  YONACTR = {0};  /* OPERATORS - mode -> union mode */
A68_137  BPNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  CPNACTR;  /* YIELD */
A68_137  DPNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_137  EPNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_136  FPNACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(emittagtypedef);
 /* line 854: */
RONACTR.data[0] = A_UNITE(SONACTR,mode2,2,NL(BONACTR_typedef));
 /* line 855: */
WLNACTR_ctaggedtype( Mode, &TONACTR );
RONACTR.data[1] = A_UNITE(UONACTR,mode2,2,TONACTR);
WONACTR = ' ' ;
RONACTR.data[2] = A_UNITE(VONACTR,mode1,1,WONACTR);
BLNACTR_cvartype( Mode, &XONACTR );
RONACTR.data[3] = A_UNITE(YONACTR,mode2,2,XONACTR);
CPNACTR = APNACTR ;
RONACTR.data[4] = A_UNITE(BPNACTR,mode2,2,CPNACTR);
 /* line 857: */
RONACTR.data[5] = A_UNITE(DPNACTR,mode2,2,NL(KONACTR_comment));
RONACTR.data[6] = A_UNITE(EPNACTR,mode4,4,EIAACTR_cnewline);
 /* line 858: */
(void)(MDMACTR_writecstream(A_HISVEC(FPNACTR,RONACTR,7,A68_137 ), NL(Stream)));
A_PROC_EXIT(emittagtypedef);
return;
} 
#undef NL

A_STATIC A68_VOID  JPNACTR_emitdeflextypedef(A68_INT  Mode, A68_INT  Deflexmode, void *NonLocals)
#define NL(x) (((KPNACTR_emitdeflextypedef *)NonLocals)->x)
{ 
A68_BITS  LPNACTR;  /* ADICOPS - >= */
A68_199  MPNACTR;  /* collateral clause result */
A68_137  PPNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  QPNACTR;  /* YIELD */
A68_VC  RPNACTR;  /* avoid structure result */
A68_137  SPNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_137  TPNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  UPNACTR;  /* YIELD */
A68_VC  VPNACTR;  /* avoid structure result */
A68_137  WPNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_137  XPNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_137  AQNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  BQNACTR;  /* YIELD */
A68_VC  CQNACTR;  /* avoid structure result */
A68_137  DQNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_137  EQNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  FQNACTR;  /* YIELD */
A68_VC  GQNACTR;  /* avoid structure result */
A68_137  HQNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_137  KQNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  LQNACTR;  /* YIELD */
A68_137  MQNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_137  NQNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_136  OQNACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(emitdeflextypedef);
 /* line 861: */
 /* line 862: */
{ 
(void)(PNNACTR_writectypedef(Deflexmode, NL(Stream), A68_FALSE));
 /* line 864: */
 /* line 865: */
 /* line 867: */
LPNACTR = LTMACTR_flags(Mode) ;
if (!A_LB_GE(LPNACTR,AOMACTR_typedefoutput))
{ 
QPNACTR = OPNACTR ;
MPNACTR.data[0] = A_UNITE(PPNACTR,mode2,2,QPNACTR);
BLNACTR_cvartype( Mode, &RPNACTR );
MPNACTR.data[1] = A_UNITE(SPNACTR,mode2,2,RPNACTR);
UPNACTR = ' ' ;
MPNACTR.data[2] = A_UNITE(TPNACTR,mode1,1,UPNACTR);
 /* line 868: */
BLNACTR_cvartype( Deflexmode, &VPNACTR );
MPNACTR.data[3] = A_UNITE(WPNACTR,mode2,2,VPNACTR);
MPNACTR.data[4] = A_UNITE(XPNACTR,mode4,4,EIAACTR_cnewline);
BQNACTR = ZPNACTR ;
MPNACTR.data[5] = A_UNITE(AQNACTR,mode2,2,BQNACTR);
QLNACTR_ctag( Mode, &CQNACTR );
MPNACTR.data[6] = A_UNITE(DQNACTR,mode2,2,CQNACTR);
FQNACTR = ' ' ;
MPNACTR.data[7] = A_UNITE(EQNACTR,mode1,1,FQNACTR);
 /* line 869: */
QLNACTR_ctag( Deflexmode, &GQNACTR );
MPNACTR.data[8] = A_UNITE(HQNACTR,mode2,2,GQNACTR);
LQNACTR = JQNACTR ;
MPNACTR.data[9] = A_UNITE(KQNACTR,mode2,2,LQNACTR);
 /* line 870: */
MPNACTR.data[10] = A_UNITE(MQNACTR,mode2,2,NL(KONACTR_comment));
MPNACTR.data[11] = A_UNITE(NQNACTR,mode4,4,EIAACTR_cnewline);
 /* line 871: */
 /* line 872: */
 /* line 873: */
(void)(MDMACTR_writecstream(A_HISVEC(OQNACTR,MPNACTR,12,A68_137 ), NL(Stream)));
} 
} 
A_PROC_EXIT(emitdeflextypedef);
return;
} 
#undef NL

A_STATIC A68_VOID  QQNACTR_emitincompletetype(void *NonLocals)
#define NL(x) (((RQNACTR_emitincompletetype *)NonLocals)->x)
{ 
A68_BITS  SQNACTR;  /* ADICOPS - >= */
A68_200  TQNACTR;  /* collateral clause result */
A68_VC  UQNACTR;  /* avoid structure result */
A68_137  VQNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_137  WQNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  XQNACTR;  /* YIELD */
A68_137  YQNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_136  ZQNACTR;  /* OPERATORS - istruct -> vector */
A68_BITS * ARNACTR;  /* YIELD */
A_PROC_ENTRY(emitincompletetype);
 /* line 877: */
 /* line 878: */
SQNACTR = (*(&(NL(YNNACTR_entry)->Flags))) ;
if (!A_LB_GE(SQNACTR,COMACTR_incompletetypeoutput))
{ 
WLNACTR_ctaggedtype( NL(QNNACTR_mode), &UQNACTR );
TQNACTR.data[0] = A_UNITE(VQNACTR,mode2,2,UQNACTR);
XQNACTR = ';' ;
TQNACTR.data[1] = A_UNITE(WQNACTR,mode1,1,XQNACTR);
TQNACTR.data[2] = A_UNITE(YQNACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(ZQNACTR,TQNACTR,3,A68_137 ), NL(Stream)));
 /* line 879: */
 /* line 880: */
ARNACTR = (&(NL(YNNACTR_entry)->Flags)) ;
(void)((*ARNACTR) = (A68_BITS )((*(&(NL(YNNACTR_entry)->Flags)))|COMACTR_incompletetypeoutput));
} 
A_PROC_EXIT(emitincompletetype);
return;
} 
#undef NL

A_STATIC A68_VOID  CRNACTR_emitproctypedef(void *NonLocals)
#define NL(x) (((DRNACTR_emitproctypedef *)NonLocals)->x)
{ 
A68_BITS * ERNACTR;  /* YIELD */
A68_INT  FRNACTR_deprocmode A_UNUSED = {0};
A68_BOOL  GRNACTR;  /* optbool result */
A68_BOOL  HRNACTR_needsstructresultparam A_UNUSED = {0};
A68_151  IRNACTR;  /* clause result */
A68_151  JRNACTR;  /* avoid structure result */
A68_168  LRNACTR_generator;   /* proc value of non-global proc */
A68_151  QRNACTR;  /* avoid structure result */
A68_151  RRNACTR_params A_UNUSED = {0};
A68_INT * SRNACTR_p A_UNUSED = {0};
A68_INT  TRNACTR;  /* forall loop counter */
A68_193  URNACTR;  /* collateral clause result */
A68_137  VRNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_137  YRNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ZRNACTR;  /* YIELD */
A68_INT  ASNACTR;  /* clause result */
A68_VC  BSNACTR;  /* avoid structure result */
A68_137  CSNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_137  DSNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  ESNACTR;  /* YIELD */
A68_VC  FSNACTR;  /* avoid structure result */
A68_137  GSNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_137  JSNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  KSNACTR;  /* YIELD */
A68_136  LSNACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  MSNACTR;  /* optbool result */
A68_137  PSNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  QSNACTR;  /* YIELD */
A68_136  RSNACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  SSNACTR_comma A_UNUSED = {0};
A68_INT * TSNACTR_p A_UNUSED = {0};
A68_INT  USNACTR;  /* forall loop counter */
A68_201  VSNACTR;  /* collateral clause result */
A68_137  WSNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  XSNACTR;  /* YIELD */
A68_137  ATNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  BTNACTR;  /* YIELD */
A68_VC  CTNACTR;  /* avoid structure result */
A68_137  DTNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_136  ETNACTR;  /* OPERATORS - istruct -> vector */
A68_200  FTNACTR;  /* collateral clause result */
A68_137  GTNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  HTNACTR;  /* YIELD */
A68_137  KTNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  LTNACTR;  /* YIELD */
A68_VC  MTNACTR;  /* avoid structure result */
A68_137  NTNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_137  OTNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  PTNACTR;  /* YIELD */
A68_136  QTNACTR;  /* OPERATORS - istruct -> vector */
A68_137  TTNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  UTNACTR;  /* YIELD */
A68_136  VTNACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  WTNACTR_comma A_UNUSED = {0};
A68_INT * XTNACTR_p A_UNUSED = {0};
A68_INT  YTNACTR;  /* forall loop counter */
A68_201  ZTNACTR;  /* collateral clause result */
A68_137  AUNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  BUNACTR;  /* YIELD */
A68_137  EUNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  FUNACTR;  /* YIELD */
A68_VC  GUNACTR;  /* avoid structure result */
A68_137  HUNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_136  IUNACTR;  /* OPERATORS - istruct -> vector */
A68_200  JUNACTR;  /* collateral clause result */
A68_137  KUNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  LUNACTR;  /* YIELD */
A68_137  OUNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  PUNACTR;  /* YIELD */
A68_VC  QUNACTR;  /* avoid structure result */
A68_137  RUNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_137  SUNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  TUNACTR;  /* YIELD */
A68_136  UUNACTR;  /* OPERATORS - istruct -> vector */
A68_200  VUNACTR;  /* collateral clause result */
A68_137  WUNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  XUNACTR;  /* YIELD */
A68_137  AVNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  BVNACTR;  /* YIELD */
A68_137  EVNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  FVNACTR;  /* YIELD */
A68_137  GVNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_136  HVNACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(emitproctypedef);
 /* line 887: */
if (NL(Pre_declare))
{ 
 /* line 888: */
(void)(A_CALLPROC(NL(PQNACTR_emitincompletetype),(),((NL(PQNACTR_emitincompletetype)).nonlocals)));
} 
else
{ 
ERNACTR = (&(NL(YNNACTR_entry)->Flags)) ;
(void)((*ERNACTR) = (A68_BITS )((*(&(NL(YNNACTR_entry)->Flags)))|AOMACTR_typedefoutput));
 /* line 890: */
FRNACTR_deprocmode = A_CALLPROC(SVMACTR_deproc,(NL(QNNACTR_mode)),(NL(QNNACTR_mode),(SVMACTR_deproc).nonlocals));
 /* line 891: */
GRNACTR = NQIACTR_nostructresultoption;
if ( GRNACTR )
{GRNACTR = VSMACTR_iscstruct(FRNACTR_deprocmode);
}
HRNACTR_needsstructresultparam = GRNACTR;
 /* line 893: */
if (NSMACTR_isprocp(NL(QNNACTR_mode)))
{ 
A_CALLPROC(AWMACTR_parameters,(NL(QNNACTR_mode), &JRNACTR),(NL(QNNACTR_mode), &JRNACTR,(AWMACTR_parameters).nonlocals));
IRNACTR = JRNACTR;
} 
else
{ 
A_CLOSURE( LRNACTR_generator, MRNACTR_generator, NRNACTR_generator );
A_CALLPROC(LRNACTR_generator,(A68_FALSE, &QRNACTR),(A68_FALSE, &QRNACTR,(LRNACTR_generator).nonlocals));
IRNACTR = QRNACTR;
} 
RRNACTR_params = IRNACTR;
 /* line 897: */
(void)(PNNACTR_writectypedef(EOMACTR_deref(FRNACTR_deprocmode), NL(Stream), A68_TRUE));
 /* line 899: */
 /* line 900: */
TRNACTR = RRNACTR_params.upb -1;
SRNACTR_p = RRNACTR_params.data;
for (;TRNACTR-- >= 0;
(SRNACTR_p++
) )
{
 /* line 901: */
 /* line 902: */
(void)(PNNACTR_writectypedef(EOMACTR_deref((*SRNACTR_p)), NL(Stream), A68_TRUE));
}
 /* line 906: */
 /* line 907: */
 /* line 908: */
URNACTR.data[0] = A_UNITE(VRNACTR,mode4,4,EIAACTR_cnewline);
 /* line 909: */
ZRNACTR = XRNACTR ;
URNACTR.data[1] = A_UNITE(YRNACTR,mode2,2,ZRNACTR);
if (HRNACTR_needsstructresultparam)
{ 
ASNACTR = UEAACTR_voidmode;
} 
else
{ 
ASNACTR = FRNACTR_deprocmode;
} 
WLNACTR_ctaggedtype( ASNACTR, &BSNACTR );
URNACTR.data[2] = A_UNITE(CSNACTR,mode2,2,BSNACTR);
 /* line 910: */
ESNACTR = ',' ;
URNACTR.data[3] = A_UNITE(DSNACTR,mode1,1,ESNACTR);
 /* line 911: */
QLNACTR_ctag( NL(QNNACTR_mode), &FSNACTR );
URNACTR.data[4] = A_UNITE(GSNACTR,mode2,2,FSNACTR);
KSNACTR = ISNACTR ;
URNACTR.data[5] = A_UNITE(JSNACTR,mode2,2,KSNACTR);
(void)(MDMACTR_writecstream(A_HISVEC(LSNACTR,URNACTR,6,A68_137 ), NL(Stream)));
 /* line 913: */
 /* line 914: */
MSNACTR = (RRNACTR_params.upb==0);
if ( MSNACTR )
{MSNACTR = (!HRNACTR_needsstructresultparam);
}
 /* line 915: */
if (MSNACTR)
{ 
 /* line 916: */
 /* line 917: */
QSNACTR = OSNACTR ;
(void)(MDMACTR_writecstream(A_HVEC(RSNACTR,A_UNITE(PSNACTR,mode2,2,QSNACTR),A68_137 ), NL(Stream)));
} 
else
{ 
SSNACTR_comma = A68_FALSE;
 /* line 918: */
 /* line 919: */
USNACTR = RRNACTR_params.upb -1;
TSNACTR_p = RRNACTR_params.data;
for (;USNACTR-- >= 0;
(TSNACTR_p++
) )
{
 /* line 920: */
if (SSNACTR_comma)
{ 
XSNACTR = ',' ;
VSNACTR.data[0] = A_UNITE(WSNACTR,mode1,1,XSNACTR);
} 
else
{ 
BTNACTR = ZSNACTR ;
VSNACTR.data[0] = A_UNITE(ATNACTR,mode2,2,BTNACTR);
} 
WLNACTR_ctaggedtype( (*TSNACTR_p), &CTNACTR );
VSNACTR.data[1] = A_UNITE(DTNACTR,mode2,2,CTNACTR);
(void)(MDMACTR_writecstream(A_HISVEC(ETNACTR,VSNACTR,2,A68_137 ), NL(Stream)));
 /* line 921: */
 /* line 922: */
SSNACTR_comma = A68_TRUE;
}
 /* line 924: */
 /* line 925: */
 /* line 926: */
if (HRNACTR_needsstructresultparam)
{ 
if (SSNACTR_comma)
{ 
HTNACTR = ',' ;
FTNACTR.data[0] = A_UNITE(GTNACTR,mode1,1,HTNACTR);
} 
else
{ 
LTNACTR = JTNACTR ;
FTNACTR.data[0] = A_UNITE(KTNACTR,mode2,2,LTNACTR);
} 
WLNACTR_ctaggedtype( FRNACTR_deprocmode, &MTNACTR );
FTNACTR.data[1] = A_UNITE(NTNACTR,mode2,2,MTNACTR);
PTNACTR = '*' ;
FTNACTR.data[2] = A_UNITE(OTNACTR,mode1,1,PTNACTR);
 /* line 927: */
 /* line 928: */
(void)(MDMACTR_writecstream(A_HISVEC(QTNACTR,FTNACTR,3,A68_137 ), NL(Stream)));
} 
} 
 /* line 930: */
UTNACTR = STNACTR ;
(void)(MDMACTR_writecstream(A_HVEC(VTNACTR,A_UNITE(TTNACTR,mode2,2,UTNACTR),A68_137 ), NL(Stream)));
 /* line 932: */
WTNACTR_comma = A68_FALSE;
 /* line 933: */
 /* line 934: */
YTNACTR = RRNACTR_params.upb -1;
XTNACTR_p = RRNACTR_params.data;
for (;YTNACTR-- >= 0;
(XTNACTR_p++
) )
{
 /* line 935: */
if (WTNACTR_comma)
{ 
BUNACTR = ',' ;
ZTNACTR.data[0] = A_UNITE(AUNACTR,mode1,1,BUNACTR);
} 
else
{ 
FUNACTR = DUNACTR ;
ZTNACTR.data[0] = A_UNITE(EUNACTR,mode2,2,FUNACTR);
} 
WLNACTR_ctaggedtype( (*XTNACTR_p), &GUNACTR );
ZTNACTR.data[1] = A_UNITE(HUNACTR,mode2,2,GUNACTR);
(void)(MDMACTR_writecstream(A_HISVEC(IUNACTR,ZTNACTR,2,A68_137 ), NL(Stream)));
 /* line 936: */
 /* line 937: */
WTNACTR_comma = A68_TRUE;
}
 /* line 939: */
 /* line 940: */
 /* line 941: */
if (HRNACTR_needsstructresultparam)
{ 
if (WTNACTR_comma)
{ 
LUNACTR = ',' ;
JUNACTR.data[0] = A_UNITE(KUNACTR,mode1,1,LUNACTR);
} 
else
{ 
PUNACTR = NUNACTR ;
JUNACTR.data[0] = A_UNITE(OUNACTR,mode2,2,PUNACTR);
} 
WLNACTR_ctaggedtype( FRNACTR_deprocmode, &QUNACTR );
JUNACTR.data[1] = A_UNITE(RUNACTR,mode2,2,QUNACTR);
TUNACTR = '*' ;
JUNACTR.data[2] = A_UNITE(SUNACTR,mode1,1,TUNACTR);
(void)(MDMACTR_writecstream(A_HISVEC(UUNACTR,JUNACTR,3,A68_137 ), NL(Stream)));
 /* line 942: */
 /* line 943: */
WTNACTR_comma = A68_TRUE;
} 
 /* line 945: */
if (WTNACTR_comma)
{ 
XUNACTR = ',' ;
VUNACTR.data[0] = A_UNITE(WUNACTR,mode1,1,XUNACTR);
} 
else
{ 
BVNACTR = ZUNACTR ;
VUNACTR.data[0] = A_UNITE(AVNACTR,mode2,2,BVNACTR);
} 
FVNACTR = DVNACTR ;
VUNACTR.data[1] = A_UNITE(EVNACTR,mode2,2,FVNACTR);
VUNACTR.data[2] = A_UNITE(GVNACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(HVNACTR,VUNACTR,3,A68_137 ), NL(Stream)));
 /* line 947: */
 /* line 949: */
(void)(A_CALLPROC(NL(OONACTR_emittagtypedef),(NL(QNNACTR_mode)),(NL(QNNACTR_mode),(NL(OONACTR_emittagtypedef)).nonlocals)));
} 
A_PROC_EXIT(emitproctypedef);
return;
} 
#undef NL

A_STATIC A68_VOID  JVNACTR_emitvectortypedef(void *NonLocals)
#define NL(x) (((KVNACTR_emitvectortypedef *)NonLocals)->x)
{ 
A68_INT  LVNACTR_deflexmode A_UNUSED = {0};
A68_BOOL  MVNACTR;  /* clause result */
A68_INT  NVNACTR_elemmode A_UNUSED = {0};
A68_193  OVNACTR;  /* collateral clause result */
A68_137  RVNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  SVNACTR;  /* YIELD */
A68_VC  TVNACTR;  /* avoid structure result */
A68_137  UVNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_137  VVNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  WVNACTR;  /* YIELD */
A68_VC  XVNACTR;  /* avoid structure result */
A68_137  YVNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_137  BWNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  CWNACTR;  /* YIELD */
A68_137  DWNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_136  EWNACTR;  /* OPERATORS - istruct -> vector */
A68_BITS * FWNACTR;  /* YIELD */
A_PROC_ENTRY(emitvectortypedef);
 /* line 955: */
if (NL(Pre_declare))
{ 
(void)(A_CALLPROC(NL(PQNACTR_emitincompletetype),(),((NL(PQNACTR_emitincompletetype)).nonlocals)));
} 
else
{ 
{ 
LVNACTR_deflexmode = HCNACTR_finddeflexmode(NL(QNNACTR_mode));
 /* line 956: */
 /* line 958: */
 /* line 960: */
MVNACTR = (LVNACTR_deflexmode==NL(QNNACTR_mode));
if (MVNACTR)
{ 
NVNACTR_elemmode = A_CALLPROC(UVMACTR_elementmode,(NL(QNNACTR_mode)),(NL(QNNACTR_mode),(UVMACTR_elementmode).nonlocals));
 /* line 962: */
 /* line 963: */
SVNACTR = QVNACTR ;
OVNACTR.data[0] = A_UNITE(RVNACTR,mode2,2,SVNACTR);
 /* line 964: */
WLNACTR_ctaggedtype( NVNACTR_elemmode, &TVNACTR );
OVNACTR.data[1] = A_UNITE(UVNACTR,mode2,2,TVNACTR);
WVNACTR = ',' ;
OVNACTR.data[2] = A_UNITE(VVNACTR,mode1,1,WVNACTR);
 /* line 965: */
QLNACTR_ctag( NL(QNNACTR_mode), &XVNACTR );
OVNACTR.data[3] = A_UNITE(YVNACTR,mode2,2,XVNACTR);
 /* line 966: */
CWNACTR = AWNACTR ;
OVNACTR.data[4] = A_UNITE(BWNACTR,mode2,2,CWNACTR);
OVNACTR.data[5] = A_UNITE(DWNACTR,mode4,4,EIAACTR_cnewline);
 /* line 967: */
(void)(MDMACTR_writecstream(A_HISVEC(EWNACTR,OVNACTR,6,A68_137 ), NL(Stream)));
 /* line 968: */
(void)(A_CALLPROC(NL(OONACTR_emittagtypedef),(NL(QNNACTR_mode)),(NL(QNNACTR_mode),(NL(OONACTR_emittagtypedef)).nonlocals)));
 /* line 970: */
FWNACTR = (&(NL(YNNACTR_entry)->Flags)) ;
(void)((*FWNACTR) = (A68_BITS )((*(&(NL(YNNACTR_entry)->Flags)))|AOMACTR_typedefoutput));
 /* line 971: */
 /* line 972: */
 /* line 973: */
(void)(PNNACTR_writectypedef(NVNACTR_elemmode, NL(Stream), A68_FALSE));
} 
else
{ 
 /* line 974: */
(void)(A_CALLPROC(NL(IPNACTR_emitdeflextypedef),(NL(QNNACTR_mode), LVNACTR_deflexmode),(NL(QNNACTR_mode), LVNACTR_deflexmode,(NL(IPNACTR_emitdeflextypedef)).nonlocals)));
} 
} 
} 
A_PROC_EXIT(emitvectortypedef);
return;
} 
#undef NL

A_STATIC A68_VOID  HWNACTR_emitarraytypedef(void *NonLocals)
#define NL(x) (((IWNACTR_emitarraytypedef *)NonLocals)->x)
{ 
A68_INT  JWNACTR_deflexmode A_UNUSED = {0};
A68_BOOL  KWNACTR;  /* clause result */
A68_INT  LWNACTR_elemmode A_UNUSED = {0};
A68_197  MWNACTR;  /* collateral clause result */
A68_VC  PWNACTR;  /* avoid structure result */
A68_137  QWNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  RWNACTR;  /* YIELD */
A68_137  SWNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  TWNACTR;  /* YIELD */
A68_VC  UWNACTR;  /* avoid structure result */
A68_137  VWNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_137  WWNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  XWNACTR;  /* YIELD */
A68_VC  YWNACTR;  /* avoid structure result */
A68_137  ZWNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_137  CXNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  DXNACTR;  /* YIELD */
A68_137  EXNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_136  FXNACTR;  /* OPERATORS - istruct -> vector */
A68_BITS * GXNACTR;  /* YIELD */
A_PROC_ENTRY(emitarraytypedef);
 /* line 980: */
if (NL(Pre_declare))
{ 
(void)(A_CALLPROC(NL(PQNACTR_emitincompletetype),(),((NL(PQNACTR_emitincompletetype)).nonlocals)));
} 
else
{ 
{ 
JWNACTR_deflexmode = HCNACTR_finddeflexmode(NL(QNNACTR_mode));
 /* line 981: */
 /* line 983: */
 /* line 984: */
KWNACTR = (JWNACTR_deflexmode==NL(QNNACTR_mode));
if (KWNACTR)
{ 
LWNACTR_elemmode = A_CALLPROC(UVMACTR_elementmode,(NL(QNNACTR_mode)),(NL(QNNACTR_mode),(UVMACTR_elementmode).nonlocals));
 /* line 986: */
 /* line 987: */
 /* line 988: */
WLNACTR_ctaggedtype( LWNACTR_elemmode, &PWNACTR );
RWNACTR = A_VC_PLUS(OWNACTR,PWNACTR) ;
MWNACTR.data[0] = A_UNITE(QWNACTR,mode2,2,RWNACTR);
TWNACTR = ',' ;
MWNACTR.data[1] = A_UNITE(SWNACTR,mode1,1,TWNACTR);
 /* line 989: */
QLNACTR_ctag( NL(QNNACTR_mode), &UWNACTR );
MWNACTR.data[2] = A_UNITE(VWNACTR,mode2,2,UWNACTR);
XWNACTR = ',' ;
MWNACTR.data[3] = A_UNITE(WWNACTR,mode1,1,XWNACTR);
 /* line 990: */
ROAAOSF_whole( QVMACTR_dimensions(NL(QNNACTR_mode)), 0, &YWNACTR );
MWNACTR.data[4] = A_UNITE(ZWNACTR,mode2,2,YWNACTR);
 /* line 991: */
DXNACTR = BXNACTR ;
MWNACTR.data[5] = A_UNITE(CXNACTR,mode2,2,DXNACTR);
MWNACTR.data[6] = A_UNITE(EXNACTR,mode4,4,EIAACTR_cnewline);
 /* line 992: */
(void)(MDMACTR_writecstream(A_HISVEC(FXNACTR,MWNACTR,7,A68_137 ), NL(Stream)));
 /* line 993: */
(void)(A_CALLPROC(NL(OONACTR_emittagtypedef),(NL(QNNACTR_mode)),(NL(QNNACTR_mode),(NL(OONACTR_emittagtypedef)).nonlocals)));
 /* line 995: */
GXNACTR = (&(NL(YNNACTR_entry)->Flags)) ;
(void)((*GXNACTR) = (A68_BITS )((*(&(NL(YNNACTR_entry)->Flags)))|AOMACTR_typedefoutput));
 /* line 996: */
 /* line 997: */
 /* line 998: */
(void)(PNNACTR_writectypedef(LWNACTR_elemmode, NL(Stream), A68_FALSE));
} 
else
{ 
 /* line 999: */
(void)(A_CALLPROC(NL(IPNACTR_emitdeflextypedef),(NL(QNNACTR_mode), JWNACTR_deflexmode),(NL(QNNACTR_mode), JWNACTR_deflexmode,(NL(IPNACTR_emitdeflextypedef)).nonlocals)));
} 
} 
} 
A_PROC_EXIT(emitarraytypedef);
return;
} 
#undef NL

A_STATIC A68_VOID  AEOACTR_initialisemodes(void *NonLocals)
#define NL(x) (((BEOACTR_initialisemodes *)NonLocals)->x)
{ 
A68_153  CEOACTR;  /* collateral clause result */
A68_150  DEOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_153  EEOACTR_primitiveentry A_UNUSED = {0};
A68_153  FEOACTR;  /* collateral clause result */
A68_150  GEOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_153  HEOACTR_procentry A_UNUSED = {0};
A68_153  IEOACTR;  /* collateral clause result */
A68_150  JEOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_153  KEOACTR_procpentry A_UNUSED = {0};
A68_153  LEOACTR;  /* collateral clause result */
A68_150  MEOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_153  NEOACTR_unionentry A_UNUSED = {0};
A68_153  OEOACTR;  /* collateral clause result */
A68_150  PEOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_153  QEOACTR_structentry A_UNUSED = {0};
A68_153  REOACTR;  /* collateral clause result */
A68_150  SEOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_153  TEOACTR_istructentry A_UNUSED = {0};
A68_153  UEOACTR;  /* collateral clause result */
A68_150  VEOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_153  WEOACTR_vectorentry A_UNUSED = {0};
A68_153  XEOACTR;  /* collateral clause result */
A68_150  YEOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_153  ZEOACTR_rowentry A_UNUSED = {0};
A68_153  AFOACTR;  /* collateral clause result */
A68_150  BFOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_153  CFOACTR_straightentry A_UNUSED = {0};
A68_153  DFOACTR;  /* collateral clause result */
A68_150  EFOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_153  FFOACTR_dummyentry A_UNUSED = {0};
A68_INT  MGOACTR_i A_UNUSED = {0};
A68_59 * NGOACTR_mde A_UNUSED = {0};
A68_153 * OGOACTR_mode A_UNUSED = {0};
A68_210  PGOACTR;  /* OPERATORS - trim index */
A68_210  QGOACTR;  /* forall yield */
A68_155  RGOACTR;  /* OPERATORS - trim index */
A68_155  SGOACTR;  /* forall yield */
A68_INT  TGOACTR;  /* forall loop counter */
A68_59  UGOACTR;  /* united object - for case conformity */
A68_INT  VGOACTR_primitive A_UNUSED = {0};
A68_INT * WGOACTR;  /* YIELD */
A68_153  XGOACTR;  /* clause result */
A68_63 * YGOACTR_proc A_UNUSED = {0};
A68_INT * ZGOACTR;  /* YIELD */
A68_61 * AHOACTR_procp A_UNUSED = {0};
A68_INT * BHOACTR;  /* YIELD */
A68_151  CHOACTR;  /* avoid structure result */
A68_150  DHOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_150 * EHOACTR;  /* YIELD */
A68_60 * FHOACTR_union A_UNUSED = {0};
A68_151  GHOACTR;  /* avoid structure result */
A68_150  HHOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_150 * IHOACTR;  /* YIELD */
A68_62 * JHOACTR_struct A_UNUSED = {0};
A68_152  KHOACTR;  /* avoid structure result */
A68_150  LHOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_150 * MHOACTR;  /* YIELD */
A68_58 * NHOACTR_istruct A_UNUSED = {0};
A68_INT * OHOACTR;  /* YIELD */
A68_150  PHOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  QHOACTR;  /* YIELD */
A68_150 * RHOACTR;  /* YIELD */
A68_54 * SHOACTR_array A_UNUSED = {0};
A68_151  THOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  UHOACTR;  /* clause result */
A68_INT * VHOACTR;  /* YIELD */
A68_INT * WHOACTR;  /* YIELD */
A68_150  XHOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  YHOACTR;  /* YIELD */
A68_150 * ZHOACTR;  /* YIELD */
A68_64 * AIOACTR_vctor A_UNUSED = {0};
A68_151  BIOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  CIOACTR;  /* clause result */
A68_INT * DIOACTR;  /* YIELD */
A68_INT * EIOACTR;  /* YIELD */
A68_65 * FIOACTR_straight A_UNUSED = {0};
A68_INT * GIOACTR;  /* YIELD */
A68_153 * HIOACTR;  /* YIELD */
A68_153 * IIOACTR;  /* YIELD */
A68_153 * JIOACTR;  /* YIELD */
A_PROC_ENTRY(initialisemodes);
{ 
CEOACTR.Type = EEAACTR_primitive;
CEOACTR.Auxmode = NL(YDOACTR_unset);
CEOACTR.Deflexedmode = PEAACTR_nomode;
CEOACTR.Finalised = A68_TRUE;
CEOACTR.Extra = A_EMPTY(DEOACTR,4);
CEOACTR.Flags = 0X0U;
EEOACTR_primitiveentry = CEOACTR;
 /* line 1173: */
FEOACTR.Type = FEAACTR_proc;
FEOACTR.Auxmode = NL(YDOACTR_unset);
FEOACTR.Deflexedmode = PEAACTR_nomode;
FEOACTR.Finalised = A68_FALSE;
FEOACTR.Extra = A_EMPTY(GEOACTR,4);
FEOACTR.Flags = 0X0U;
HEOACTR_procentry = FEOACTR;
 /* line 1174: */
IEOACTR.Type = GEAACTR_procp;
IEOACTR.Auxmode = NL(YDOACTR_unset);
IEOACTR.Deflexedmode = PEAACTR_nomode;
IEOACTR.Finalised = A68_FALSE;
IEOACTR.Extra = A_UNITE(JEOACTR,mode1,1,NL(YDOACTR_unset));
IEOACTR.Flags = 0X0U;
KEOACTR_procpentry = IEOACTR;
 /* line 1175: */
LEOACTR.Type = HEAACTR_union;
LEOACTR.Auxmode = NL(YDOACTR_unset);
LEOACTR.Deflexedmode = PEAACTR_nomode;
LEOACTR.Finalised = A68_FALSE;
LEOACTR.Extra = A_UNITE(MEOACTR,mode1,1,NL(YDOACTR_unset));
LEOACTR.Flags = 0X0U;
NEOACTR_unionentry = LEOACTR;
 /* line 1176: */
OEOACTR.Type = IEAACTR_struct;
OEOACTR.Auxmode = NL(YDOACTR_unset);
OEOACTR.Deflexedmode = PEAACTR_nomode;
OEOACTR.Finalised = A68_FALSE;
OEOACTR.Extra = A_UNITE(PEOACTR,mode1,1,NL(YDOACTR_unset));
OEOACTR.Flags = 0X0U;
QEOACTR_structentry = OEOACTR;
 /* line 1177: */
REOACTR.Type = JEAACTR_istruct;
REOACTR.Auxmode = NL(YDOACTR_unset);
REOACTR.Deflexedmode = PEAACTR_nomode;
REOACTR.Finalised = A68_FALSE;
REOACTR.Extra = A_UNITE(SEOACTR,mode1,1,NL(YDOACTR_unset));
REOACTR.Flags = 0X0U;
TEOACTR_istructentry = REOACTR;
 /* line 1178: */
UEOACTR.Type = NL(YDOACTR_unset);
UEOACTR.Auxmode = NL(YDOACTR_unset);
UEOACTR.Deflexedmode = PEAACTR_nomode;
UEOACTR.Finalised = A68_TRUE;
UEOACTR.Extra = A_EMPTY(VEOACTR,4);
UEOACTR.Flags = XNMACTR_dynamicbit;
WEOACTR_vectorentry = UEOACTR;
 /* line 1179: */
XEOACTR.Type = NL(YDOACTR_unset);
XEOACTR.Auxmode = NL(YDOACTR_unset);
XEOACTR.Deflexedmode = PEAACTR_nomode;
XEOACTR.Finalised = A68_FALSE;
XEOACTR.Extra = A_UNITE(YEOACTR,mode1,1,NL(YDOACTR_unset));
XEOACTR.Flags = XNMACTR_dynamicbit;
ZEOACTR_rowentry = XEOACTR;
 /* line 1180: */
AFOACTR.Type = OEAACTR_straight;
AFOACTR.Auxmode = NL(YDOACTR_unset);
AFOACTR.Deflexedmode = PEAACTR_nomode;
AFOACTR.Finalised = A68_TRUE;
AFOACTR.Extra = A_EMPTY(BFOACTR,4);
AFOACTR.Flags = XNMACTR_dynamicbit;
CFOACTR_straightentry = AFOACTR;
 /* line 1181: */
DFOACTR.Type = NL(YDOACTR_unset);
DFOACTR.Auxmode = NL(YDOACTR_unset);
DFOACTR.Deflexedmode = PEAACTR_nomode;
DFOACTR.Finalised = A68_TRUE;
DFOACTR.Extra = A_UNITE(EFOACTR,mode1,1,NL(YDOACTR_unset));
DFOACTR.Flags = 0X0U;
FFOACTR_dummyentry = DFOACTR;
 /* line 1183: */
 /* line 1210: */
 /* line 1240: */
MGOACTR_i = 1;
 /* line 1242: */
 /* line 1243: */
QGOACTR = A_R1TRIM(PGOACTR,(NL(Mdes)),A_RTSCRIPT(&(PGOACTR.dim[0]),&((NL(Mdes)).dim[0]),MGOACTR_i,(NL(Mdes)).dim[0].upb,1)) ;
SGOACTR = A_R1TRIM(RGOACTR,(WNMACTR_modes),A_RTSCRIPT(&(RGOACTR.dim[0]),&((WNMACTR_modes).dim[0]),MGOACTR_i,(WNMACTR_modes).dim[0].upb,1)) ;
TGOACTR = QGOACTR.dim[0].upb - QGOACTR.dim[0].lwb;
if ( TGOACTR != SGOACTR.dim[0].upb - SGOACTR.dim[0].lwb )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
NGOACTR_mde = QGOACTR.data;
OGOACTR_mode = SGOACTR.data;
for (;TGOACTR-- >= 0;
(NGOACTR_mde += QGOACTR.dim[0].stride
,OGOACTR_mode += SGOACTR.dim[0].stride
) )
{
 /* line 1244: */
 /* line 1246: */
 /* line 1247: */
UGOACTR = (*NGOACTR_mde) ;
switch ( UGOACTR.mode )
{ 
case 1: /* INT */
VGOACTR_primitive = (UGOACTR.data.mode1);
 /* line 1248: */
{ 
WGOACTR = (&((&EEOACTR_primitiveentry)->Auxmode)) ;
(*WGOACTR) = VGOACTR_primitive;
 /* line 1249: */
 /* line 1250: */
 /* line 1252: */
XGOACTR = EEOACTR_primitiveentry;
} 
break;
case 6: /* REF STRUCT(INT)  */
YGOACTR_proc = (UGOACTR.data.mode6);
 /* line 1253: */
{ 
ZGOACTR = (&((&HEOACTR_procentry)->Auxmode)) ;
(void)((*ZGOACTR) = (*(&(YGOACTR_proc->Deproc))));
 /* line 1254: */
 /* line 1255: */
 /* line 1257: */
XGOACTR = HEOACTR_procentry;
} 
break;
case 3: /* REF STRUCT(INT,REF MODE71)  */
AHOACTR_procp = (UGOACTR.data.mode3);
 /* line 1258: */
{ 
BHOACTR = (&((&KEOACTR_procpentry)->Auxmode)) ;
(void)((*BHOACTR) = (*(&(AHOACTR_procp->Deproc))));
 /* line 1259: */
HFOACTR_reducedmodelist( (*(&(AHOACTR_procp->Pars))), &CHOACTR );
EHOACTR = (&((&KEOACTR_procpentry)->Extra)) ;
(void)((*EHOACTR) = A_UNITE(DHOACTR,mode2,2,CHOACTR));
 /* line 1260: */
 /* line 1261: */
 /* line 1263: */
XGOACTR = KEOACTR_procpentry;
} 
break;
case 2: /* REF STRUCT(INT,REF MODE71)  */
FHOACTR_union = (UGOACTR.data.mode2);
 /* line 1264: */
{ 
HFOACTR_reducedmodelist( (*(&(FHOACTR_union->Modelist))), &GHOACTR );
IHOACTR = (&((&NEOACTR_unionentry)->Extra)) ;
(void)((*IHOACTR) = A_UNITE(HHOACTR,mode2,2,GHOACTR));
 /* line 1265: */
 /* line 1266: */
 /* line 1268: */
XGOACTR = NEOACTR_unionentry;
} 
break;
case 4: /* REF STRUCT(INT,INT,REF MODE70)  */
JHOACTR_struct = (UGOACTR.data.mode4);
 /* line 1269: */
{ 
WFOACTR_reducedselist( (*(&(JHOACTR_struct->Sels))), &KHOACTR );
MHOACTR = (&((&QEOACTR_structentry)->Extra)) ;
(void)((*MHOACTR) = A_UNITE(LHOACTR,mode3,3,KHOACTR));
 /* line 1270: */
 /* line 1271: */
 /* line 1273: */
XGOACTR = QEOACTR_structentry;
} 
break;
case 5: /* REF STRUCT(INT,INT,INT,INT)  */
NHOACTR_istruct = (UGOACTR.data.mode5);
 /* line 1274: */
{ 
OHOACTR = (&((&TEOACTR_istructentry)->Auxmode)) ;
(void)((*OHOACTR) = (*(&(NHOACTR_istruct->Imode))));
 /* line 1275: */
QHOACTR = (*(&(NHOACTR_istruct->Length))) ;
RHOACTR = (&((&TEOACTR_istructentry)->Extra)) ;
(void)((*RHOACTR) = A_UNITE(PHOACTR,mode1,1,QHOACTR));
 /* line 1276: */
 /* line 1277: */
 /* line 1279: */
XGOACTR = TEOACTR_istructentry;
} 
break;
case 8: /* REF STRUCT(INT,INT,INT,INT)  */
SHOACTR_array = (UGOACTR.data.mode8);
 /* line 1280: */
{ 
 /* line 1281: */
 /* line 1282: */
if ((*(&(SHOACTR_array->Deflex)))>=0)
{ 
(void)(KWMACTR_addtolist(MGOACTR_i, A_HVEC(THOACTR,(*(&(SHOACTR_array->Mode))),A68_INT ), (*(&(SHOACTR_array->Nods))), (&CWMACTR_rowlist)));
 /* line 1283: */
 /* line 1284: */
 /* line 1285: */
UHOACTR = KEAACTR_row;
} 
else
{ 
UHOACTR = MEAACTR_flexrow;
} 
VHOACTR = (&((&ZEOACTR_rowentry)->Type)) ;
(*VHOACTR) = UHOACTR;
 /* line 1286: */
WHOACTR = (&((&ZEOACTR_rowentry)->Auxmode)) ;
(void)((*WHOACTR) = (*(&(SHOACTR_array->Mode))));
 /* line 1287: */
YHOACTR = (*(&(SHOACTR_array->Nods))) ;
ZHOACTR = (&((&ZEOACTR_rowentry)->Extra)) ;
(void)((*ZHOACTR) = A_UNITE(XHOACTR,mode1,1,YHOACTR));
 /* line 1288: */
 /* line 1289: */
 /* line 1291: */
XGOACTR = ZEOACTR_rowentry;
} 
break;
case 7: /* REF STRUCT(INT,INT,INT)  */
AIOACTR_vctor = (UGOACTR.data.mode7);
 /* line 1292: */
{ 
 /* line 1293: */
 /* line 1294: */
if ((*(&(AIOACTR_vctor->Deflex)))>=0)
{ 
(void)(KWMACTR_addtolist(MGOACTR_i, A_HVEC(BIOACTR,(*(&(AIOACTR_vctor->Vecmode))),A68_INT ), 1, (&DWMACTR_vectorlist)));
 /* line 1295: */
 /* line 1296: */
 /* line 1297: */
CIOACTR = LEAACTR_vector;
} 
else
{ 
CIOACTR = NEAACTR_flexvector;
} 
DIOACTR = (&((&WEOACTR_vectorentry)->Type)) ;
(*DIOACTR) = CIOACTR;
 /* line 1298: */
EIOACTR = (&((&WEOACTR_vectorentry)->Auxmode)) ;
(void)((*EIOACTR) = (*(&(AIOACTR_vctor->Vecmode))));
 /* line 1299: */
 /* line 1300: */
 /* line 1302: */
XGOACTR = WEOACTR_vectorentry;
} 
break;
case 9: /* REF STRUCT(INT,REF MODE69)  */
FIOACTR_straight = (UGOACTR.data.mode9);
 /* line 1303: */
{ 
GIOACTR = (&((&CFOACTR_straightentry)->Auxmode)) ;
(void)((*GIOACTR) = (*(&(FIOACTR_straight->Mode))));
 /* line 1304: */
 /* line 1305: */
 /* line 1307: */
XGOACTR = CFOACTR_straightentry;
} 
break;
case 11: /* STRUCT(INT)  */
 /* line 1309: */
XGOACTR = FFOACTR_dummyentry;
break;
default: 
(void)(SXIACTR_terminalerror(630));
 /* line 1310: */
 /* line 1311: */
XGOACTR = FFOACTR_dummyentry;
break;
} 
(*OGOACTR_mode) = XGOACTR;
 /* line 1312: */
 /* line 1313: */
MGOACTR_i+=1;
}
 /* line 1315: */
HIOACTR = (&A_R1INDEX(WNMACTR_modes,TFAACTR_ytypemode)) ;
IIOACTR = (&A_R1INDEX(WNMACTR_modes,SFAACTR_xtypemode)) ;
(void)((*IIOACTR) = (*HIOACTR) = (*(&A_R1INDEX(WNMACTR_modes,PFAACTR_vectorrowofcharmode))));
 /* line 1316: */
 /* line 1318: */
JIOACTR = (&A_R1INDEX(WNMACTR_modes,PEAACTR_nomode)) ;
(*JIOACTR) = FFOACTR_dummyentry;
} 
A_PROC_EXIT(initialisemodes);
return;
} 
#undef NL

A_STATIC A68_VOID  MIOACTR_finalisemode(A68_INT  Mode, void *NonLocals)
#define NL(x) (((NIOACTR_finalisemode *)NonLocals)->x)
{ 
A68_INT  OIOACTR;  /* YIELD */
A68_153 * PIOACTR_entry A_UNUSED = {0};
A68_BOOL * QIOACTR;  /* YIELD */
A68_INT  RIOACTR;  /* clause result */
A68_INT  SIOACTR;  /* clause result */
A68_INT  TIOACTR;  /* YIELD */
A68_INT  UIOACTR_type A_UNUSED = {0};
A68_BITS * VIOACTR;  /* YIELD */
A68_150  WIOACTR;  /* united object - for case conformity */
A68_151  XIOACTR_params A_UNUSED = {0};
A68_INT  YIOACTR;  /* YIELD */
A68_INT  ZIOACTR_type A_UNUSED = {0};
A68_BITS * AJOACTR;  /* YIELD */
A68_INT * BJOACTR_param A_UNUSED = {0};
A68_INT  CJOACTR;  /* forall loop counter */
A68_BITS  DJOACTR;  /* ADICOPS - >= */
A68_BITS * EJOACTR;  /* YIELD */
A68_150  FJOACTR;  /* united object - for case conformity */
A68_151  GJOACTR_constituents A_UNUSED = {0};
A68_INT * HJOACTR_constituent A_UNUSED = {0};
A68_INT  IJOACTR;  /* forall loop counter */
A68_BITS * JJOACTR;  /* YIELD */
A68_150  KJOACTR;  /* united object - for case conformity */
A68_152  LJOACTR_fields A_UNUSED = {0};
A68_149 * MJOACTR_field A_UNUSED = {0};
A68_INT  NJOACTR;  /* forall loop counter */
A68_INT  OJOACTR_fieldmode A_UNUSED = {0};
A68_BITS * PJOACTR;  /* YIELD */
A68_150  QJOACTR;  /* united object - for case conformity */
A68_INT  RJOACTR_istructlength A_UNUSED = {0};
A68_INT  SJOACTR_imode A_UNUSED = {0};
A68_BITS * TJOACTR;  /* YIELD */
A68_150  UJOACTR;  /* united object - for case conformity */
A68_INT  VJOACTR_nods A_UNUSED = {0};
A68_INT  WJOACTR;  /* YIELD */
A68_INT * XJOACTR;  /* YIELD */
A_PROC_ENTRY(finalisemode);
 /* line 1328: */
 /* line 1330: */
{ 
OIOACTR = EOMACTR_deref(Mode) ;
PIOACTR_entry = (&A_R1INDEX(WNMACTR_modes,OIOACTR));
 /* line 1332: */
 /* line 1333: */
 /* line 1334: */
if (!(*(&(PIOACTR_entry->Finalised))))
{ 
QIOACTR = (&(PIOACTR_entry->Finalised)) ;
(*QIOACTR) = A68_TRUE;
 /* line 1336: */
if ((*(&(PIOACTR_entry->Type)))==MEAACTR_flexrow)
{ 
RIOACTR = 3;
} 
else
{ 
 /* line 1337: */
RIOACTR = 1;
} 
 /* line 1340: */
SIOACTR = ((*(&(PIOACTR_entry->Type)))-RIOACTR);
switch ( SIOACTR )
{ 
case 1: 
{ 
 /* line 1341: */
if ((*(&(PIOACTR_entry->Auxmode)))<VFAACTR_refmark)
{ 
TIOACTR = (*(&(PIOACTR_entry->Auxmode))) ;
UIOACTR_type = (*(&((&A_R1INDEX(WNMACTR_modes,TIOACTR))->Type)));
 /* line 1342: */
 /* line 1343: */
 /* line 1344: */
if ((((UIOACTR_type==KEAACTR_row)|(UIOACTR_type==LEAACTR_vector))|(UIOACTR_type==MEAACTR_flexrow))|(UIOACTR_type==NEAACTR_flexvector))
{ 
 /* line 1345: */
 /* line 1346: */
 /* line 1347: */
 /* line 1350: */
VIOACTR = (&(PIOACTR_entry->Flags)) ;
(void)((*VIOACTR) = (A68_BITS )((*(&(PIOACTR_entry->Flags)))|ZNMACTR_hasdescriptors));
} 
} 
} 
break;
case 2: 
WIOACTR = (*(&(PIOACTR_entry->Extra))) ;
switch ( WIOACTR.mode )
{ 
case 2: /* REF VECTOR [] INT */
XIOACTR_params = (WIOACTR.data.mode2);
 /* line 1351: */
{ 
 /* line 1352: */
if ((*(&(PIOACTR_entry->Auxmode)))<VFAACTR_refmark)
{ 
YIOACTR = (*(&(PIOACTR_entry->Auxmode))) ;
ZIOACTR_type = (*(&((&A_R1INDEX(WNMACTR_modes,YIOACTR))->Type)));
 /* line 1353: */
 /* line 1354: */
 /* line 1355: */
if ((((ZIOACTR_type==KEAACTR_row)|(ZIOACTR_type==LEAACTR_vector))|(ZIOACTR_type==MEAACTR_flexrow))|(ZIOACTR_type==NEAACTR_flexvector))
{ 
 /* line 1356: */
 /* line 1357: */
AJOACTR = (&(PIOACTR_entry->Flags)) ;
(void)((*AJOACTR) = (A68_BITS )((*(&(PIOACTR_entry->Flags)))|ZNMACTR_hasdescriptors));
} 
} 
 /* line 1358: */
 /* line 1359: */
CJOACTR = XIOACTR_params.upb -1;
BJOACTR_param = XIOACTR_params.data;
for (;CJOACTR-- >= 0;
(BJOACTR_param++
) )
{
 /* line 1360: */
 /* line 1361: */
DJOACTR = ~(*(&(PIOACTR_entry->Flags))) ;
if ( !(A_LB_GE(DJOACTR,ZNMACTR_hasdescriptors)) ) break;
 /* line 1362: */
if (GUMACTR_dynamicdescriptor((*BJOACTR_param)))
{ 
 /* line 1363: */
 /* line 1364: */
EJOACTR = (&(PIOACTR_entry->Flags)) ;
(void)((*EJOACTR) = (A68_BITS )((*(&(PIOACTR_entry->Flags)))|ZNMACTR_hasdescriptors));
} 
}
 /* line 1365: */
 /* line 1367: */
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
case 3: 
FJOACTR = (*(&(PIOACTR_entry->Extra))) ;
switch ( FJOACTR.mode )
{ 
case 2: /* REF VECTOR [] INT */
GJOACTR_constituents = (FJOACTR.data.mode2);
 /* line 1369: */
 /* line 1370: */
IJOACTR = GJOACTR_constituents.upb -1;
HJOACTR_constituent = GJOACTR_constituents.data;
for (;IJOACTR-- >= 0;
(HJOACTR_constituent++
) )
{
 /* line 1371: */
(void)(A_CALLPROC(NL(LIOACTR_finalisemode),((*HJOACTR_constituent)),((*HJOACTR_constituent),(NL(LIOACTR_finalisemode)).nonlocals)));
 /* line 1372: */
 /* line 1373: */
JJOACTR = (&(PIOACTR_entry->Flags)) ;
(void)((*JJOACTR) = (A68_BITS )((*(&(PIOACTR_entry->Flags)))|LTMACTR_flags((*HJOACTR_constituent))));
}
 /* line 1374: */
 /* line 1376: */
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
case 4: 
KJOACTR = (*(&(PIOACTR_entry->Extra))) ;
switch ( KJOACTR.mode )
{ 
case 3: /* REF VECTOR [] MODE149 */
LJOACTR_fields = (KJOACTR.data.mode3);
 /* line 1378: */
 /* line 1379: */
NJOACTR = LJOACTR_fields.upb -1;
MJOACTR_field = LJOACTR_fields.data;
for (;NJOACTR-- >= 0;
(MJOACTR_field++
) )
{
 /* line 1380: */
OJOACTR_fieldmode = (*(&(MJOACTR_field->Mode)));
 /* line 1381: */
(void)(A_CALLPROC(NL(LIOACTR_finalisemode),(OJOACTR_fieldmode),(OJOACTR_fieldmode,(NL(LIOACTR_finalisemode)).nonlocals)));
 /* line 1382: */
 /* line 1383: */
PJOACTR = (&(PIOACTR_entry->Flags)) ;
(void)((*PJOACTR) = (A68_BITS )((*(&(PIOACTR_entry->Flags)))|LTMACTR_flags(OJOACTR_fieldmode)));
}
 /* line 1384: */
 /* line 1386: */
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
case 5: 
QJOACTR = (*(&(PIOACTR_entry->Extra))) ;
switch ( QJOACTR.mode )
{ 
case 1: /* INT */
RJOACTR_istructlength = (QJOACTR.data.mode1);
 /* line 1388: */
{ 
SJOACTR_imode = (*(&(PIOACTR_entry->Auxmode)));
 /* line 1389: */
(void)(A_CALLPROC(NL(LIOACTR_finalisemode),(SJOACTR_imode),(SJOACTR_imode,(NL(LIOACTR_finalisemode)).nonlocals)));
 /* line 1390: */
 /* line 1391: */
 /* line 1393: */
TJOACTR = (&(PIOACTR_entry->Flags)) ;
(void)((*TJOACTR) = (A68_BITS )((*(&(PIOACTR_entry->Flags)))|LTMACTR_flags(SJOACTR_imode)));
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
case 6: 
UJOACTR = (*(&(PIOACTR_entry->Extra))) ;
switch ( UJOACTR.mode )
{ 
case 1: /* INT */
VJOACTR_nods = (UJOACTR.data.mode1);
 /* line 1395: */
 /* line 1396: */
{ 
 /* line 1397: */
 /* line 1398: */
if (VJOACTR_nods>1)
{ 
(void)(A_CALLPROC(NL(LIOACTR_finalisemode),((*(&(PIOACTR_entry->Auxmode)))),((*(&(PIOACTR_entry->Auxmode))),(NL(LIOACTR_finalisemode)).nonlocals)));
 /* line 1399: */
 /* line 1400: */
 /* line 1401: */
 /* line 1402: */
WJOACTR = (*(&(PIOACTR_entry->Auxmode))) ;
XJOACTR = (&(PIOACTR_entry->Auxmode)) ;
(void)((*XJOACTR) = (*(&((&A_R1INDEX(WNMACTR_modes,WJOACTR))->Auxmode))));
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
default: 
 /* line 1403: */
 /* line 1404: */
 /* line 1405: */
(void)(SXIACTR_terminalerror(631));
break;
} 
} 
} 
A_PROC_EXIT(finalisemode);
return;
} 
#undef NL

A_STATIC A68_VOID  AKOACTR_generator(A68_BOOL  YJOACTR_anonymous, A68_155  *ReturnedValue, void *NonLocals)
#define NL(x) (((BKOACTR_generator *)NonLocals)->x)
{ 
A68_155  CKOACTR;  /* clause result */
A68_155  DKOACTR;  /* OPERATORS - dynamic generator */
{ 
DKOACTR.dim[0].upb = NL(Nomodes) ;
DKOACTR.dim[0].lwb = PEAACTR_nomode ;
(void)A_1INITSTRIDES(DKOACTR) ;
( YJOACTR_anonymous? A_R1LOC(A68_153 ,DKOACTR): A_R1HEAP(A68_153 ,DKOACTR) );
CKOACTR = DKOACTR;
} 
*ReturnedValue = (CKOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  KNMACTR_debugmessage(A68_INT  Level, A68_VC  M)
{ 
A68_VC  QNMACTR;  /* avoid structure result */
A_PROC_ENTRY(debugmessage);
 /* line 56: */
if (ZCHACTR_tracelevel(MNMACTR)>=Level)
{ 
ROAAOSF_whole( Level, 0, &QNMACTR );
(void)(A_CALLPROC(MSIACTR_list,(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(PNMACTR,QNMACTR),RNMACTR),M)),(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(PNMACTR,QNMACTR),RNMACTR),M),(MSIACTR_list).nonlocals)));
} 
A_PROC_EXIT(debugmessage);
return;
} 
#undef NL

A_STATIC A68_BOOL  SNMACTR_debugging(void)
{ 
A68_BOOL  UNMACTR;  /* clause result */
A_PROC_ENTRY(debugging);
UNMACTR = (ZCHACTR_tracelevel(VNMACTR)>0);
A_PROC_EXIT(debugging);
return( UNMACTR );
} 
#undef NL

A68_INT  EOMACTR_deref(A68_INT  Mode)
{ 
A68_INT  FOMACTR;  /* clause result */
A68_INT  GOMACTR;  /* ADICOPS - MOD */
A_PROC_ENTRY(deref);
 /* line 95: */
if (Mode==PEAACTR_nomode)
{ 
FOMACTR = PEAACTR_nomode;
} 
else
{ 
FOMACTR = A_MOD(Mode,VFAACTR_refmark,GOMACTR);
} 
A_PROC_EXIT(deref);
return( FOMACTR );
} 
#undef NL

A68_INT  IOMACTR_modetype(A68_INT  Mode)
{ 
A68_INT  JOMACTR;  /* clause result */
A68_INT  KOMACTR;  /* YIELD */
A_PROC_ENTRY(modetype);
 /* line 101: */
KOMACTR = EOMACTR_deref(Mode) ;
JOMACTR = (*(&((&A_R1INDEX(WNMACTR_modes,KOMACTR))->Type)));
A_PROC_EXIT(modetype);
return( JOMACTR );
} 
#undef NL

A68_BOOL  MOMACTR_hasoneref(A68_INT  M)
{ 
A68_BOOL  NOMACTR;  /* optbool result */
A68_BOOL  OOMACTR;  /* clause result */
A_PROC_ENTRY(hasoneref);
NOMACTR = (M>=VFAACTR_refmark);
if ( NOMACTR )
{NOMACTR = (M<WFAACTR_refrefmark);
}
OOMACTR = NOMACTR;
A_PROC_EXIT(hasoneref);
return( OOMACTR );
} 
#undef NL

A68_BOOL  QOMACTR_isbool(A68_INT  M)
{ 
A68_BOOL  ROMACTR;  /* clause result */
A_PROC_ENTRY(isbool);
ROMACTR = (M==WEAACTR_boolmode);
A_PROC_EXIT(isbool);
return( ROMACTR );
} 
#undef NL

A68_BOOL  TOMACTR_ischar(A68_INT  M)
{ 
A68_BOOL  UOMACTR;  /* clause result */
A_PROC_ENTRY(ischar);
UOMACTR = (M==XEAACTR_charmode);
A_PROC_EXIT(ischar);
return( UOMACTR );
} 
#undef NL

A68_BOOL  WOMACTR_isint(A68_INT  M)
{ 
A68_BOOL  XOMACTR;  /* clause result */
A_PROC_ENTRY(isint);
XOMACTR = (M==EFAACTR_intmode);
A_PROC_EXIT(isint);
return( XOMACTR );
} 
#undef NL

A68_BOOL  ZOMACTR_islbits(A68_INT  M)
{ 
A68_BOOL  APMACTR;  /* optbool result */
A68_BOOL  BPMACTR;  /* clause result */
A_PROC_ENTRY(islbits);
APMACTR = (M==ZEAACTR_shortbitsmode);
if ( ! APMACTR )
{APMACTR = (M==AFAACTR_bitsmode);
}
 /* line 113: */
if ( ! APMACTR )
{APMACTR = (M==BFAACTR_longbitsmode);
}
if ( ! APMACTR )
{APMACTR = (M==CFAACTR_longlongbitsmode);
}
BPMACTR = APMACTR;
A_PROC_EXIT(islbits);
return( BPMACTR );
} 
#undef NL

A68_BOOL  DPMACTR_islint(A68_INT  M)
{ 
A68_BOOL  EPMACTR;  /* optbool result */
A68_BOOL  FPMACTR;  /* clause result */
A_PROC_ENTRY(islint);
EPMACTR = (M==DFAACTR_shortintmode);
if ( ! EPMACTR )
{EPMACTR = (M==EFAACTR_intmode);
}
 /* line 115: */
if ( ! EPMACTR )
{EPMACTR = (M==FFAACTR_longintmode);
}
if ( ! EPMACTR )
{EPMACTR = (M==GFAACTR_longlongintmode);
}
FPMACTR = EPMACTR;
A_PROC_EXIT(islint);
return( FPMACTR );
} 
#undef NL

A68_BOOL  HPMACTR_islreal(A68_INT  M)
{ 
A68_BOOL  IPMACTR;  /* optbool result */
A68_BOOL  JPMACTR;  /* clause result */
A_PROC_ENTRY(islreal);
IPMACTR = (M==HFAACTR_shortrealmode);
if ( ! IPMACTR )
{IPMACTR = (M==IFAACTR_realmode);
}
 /* line 117: */
if ( ! IPMACTR )
{IPMACTR = (M==JFAACTR_longrealmode);
}
if ( ! IPMACTR )
{IPMACTR = (M==KFAACTR_longlongrealmode);
}
JPMACTR = IPMACTR;
A_PROC_EXIT(islreal);
return( JPMACTR );
} 
#undef NL

A68_BOOL  LPMACTR_islcompl(A68_INT  M)
{ 
A68_BOOL  MPMACTR;  /* optbool result */
A68_BOOL  NPMACTR;  /* clause result */
A_PROC_ENTRY(islcompl);
MPMACTR = (M==LFAACTR_shortcomplmode);
if ( ! MPMACTR )
{MPMACTR = (M==MFAACTR_complmode);
}
 /* line 119: */
if ( ! MPMACTR )
{MPMACTR = (M==NFAACTR_longcomplmode);
}
if ( ! MPMACTR )
{MPMACTR = (M==OFAACTR_longlongcomplmode);
}
NPMACTR = MPMACTR;
A_PROC_EXIT(islcompl);
return( NPMACTR );
} 
#undef NL

A68_BOOL  PPMACTR_isvec(A68_INT  M)
{ 
A68_BOOL  QPMACTR;  /* optbool result */
A68_BOOL  RPMACTR;  /* clause result */
A_PROC_ENTRY(isvec);
QPMACTR = (M<VFAACTR_refmark);
if ( QPMACTR )
{QPMACTR = ((*(&((&A_R1INDEX(WNMACTR_modes,M))->Type)))==LEAACTR_vector);
}
RPMACTR = QPMACTR;
A_PROC_EXIT(isvec);
return( RPMACTR );
} 
#undef NL

A68_BOOL  TPMACTR_isrow(A68_INT  M)
{ 
A68_BOOL  UPMACTR;  /* optbool result */
A68_BOOL  VPMACTR;  /* clause result */
A_PROC_ENTRY(isrow);
UPMACTR = (M<VFAACTR_refmark);
if ( UPMACTR )
{UPMACTR = ((*(&((&A_R1INDEX(WNMACTR_modes,M))->Type)))==KEAACTR_row);
}
VPMACTR = UPMACTR;
A_PROC_EXIT(isrow);
return( VPMACTR );
} 
#undef NL

A68_BOOL  XPMACTR_isfirmarray(A68_INT  M)
{ 
A68_BOOL  YPMACTR;  /* optbool result */
A68_BOOL  ZPMACTR;  /* clause result */
A_PROC_ENTRY(isfirmarray);
YPMACTR = PPMACTR_isvec(M);
if ( ! YPMACTR )
{YPMACTR = TPMACTR_isrow(M);
}
ZPMACTR = YPMACTR;
A_PROC_EXIT(isfirmarray);
return( ZPMACTR );
} 
#undef NL

A68_BOOL  BQMACTR_isstraight(A68_INT  M)
{ 
A68_BOOL  CQMACTR;  /* clause result */
A_PROC_ENTRY(isstraight);
CQMACTR = ((*(&((&A_R1INDEX(WNMACTR_modes,M))->Type)))==OEAACTR_straight);
A_PROC_EXIT(isstraight);
return( CQMACTR );
} 
#undef NL

A68_BOOL  EQMACTR_isflexvec(A68_INT  M)
{ 
A68_BOOL  FQMACTR;  /* optbool result */
A68_BOOL  GQMACTR;  /* clause result */
A_PROC_ENTRY(isflexvec);
FQMACTR = (M>=VFAACTR_refmark);
if ( FQMACTR )
{FQMACTR = (M<WFAACTR_refrefmark);
}
 /* line 133: */
if ( FQMACTR )
{FQMACTR = (IOMACTR_modetype(M)==NEAACTR_flexvector);
}
GQMACTR = FQMACTR;
A_PROC_EXIT(isflexvec);
return( GQMACTR );
} 
#undef NL

A68_BOOL  IQMACTR_isflexrow(A68_INT  M)
{ 
A68_BOOL  JQMACTR;  /* optbool result */
A68_BOOL  KQMACTR;  /* clause result */
A_PROC_ENTRY(isflexrow);
JQMACTR = (M>=VFAACTR_refmark);
if ( JQMACTR )
{JQMACTR = (M<WFAACTR_refrefmark);
}
 /* line 135: */
if ( JQMACTR )
{JQMACTR = (IOMACTR_modetype(M)==MEAACTR_flexrow);
}
KQMACTR = JQMACTR;
A_PROC_EXIT(isflexrow);
return( KQMACTR );
} 
#undef NL

A68_BOOL  MQMACTR_isflexarray(A68_INT  M)
{ 
A68_BOOL  NQMACTR;  /* optbool result */
A68_BOOL  OQMACTR;  /* clause result */
A_PROC_ENTRY(isflexarray);
NQMACTR = EQMACTR_isflexvec(M);
if ( ! NQMACTR )
{NQMACTR = IQMACTR_isflexrow(M);
}
OQMACTR = NQMACTR;
A_PROC_EXIT(isflexarray);
return( OQMACTR );
} 
#undef NL

A68_BOOL  QQMACTR_isvector(A68_INT  Mode)
{ 
A68_INT  RQMACTR_type A_UNUSED = {0};
A68_BOOL  SQMACTR;  /* optbool result */
A68_BOOL  TQMACTR;  /* clause result */
A_PROC_ENTRY(isvector);
 /* line 144: */
 /* line 145: */
{ 
RQMACTR_type = IOMACTR_modetype(Mode);
 /* line 146: */
SQMACTR = (RQMACTR_type==LEAACTR_vector);
if ( ! SQMACTR )
{ /* line 147: */
SQMACTR = (RQMACTR_type==NEAACTR_flexvector);
}
TQMACTR = SQMACTR;
} 
A_PROC_EXIT(isvector);
return( TQMACTR );
} 
#undef NL

A68_BOOL  VQMACTR_isrow(A68_INT  Mode)
{ 
A68_INT  WQMACTR_type A_UNUSED = {0};
A68_BOOL  XQMACTR;  /* optbool result */
A68_BOOL  YQMACTR;  /* clause result */
A_PROC_ENTRY(isrow);
 /* line 154: */
 /* line 155: */
{ 
WQMACTR_type = IOMACTR_modetype(Mode);
 /* line 156: */
XQMACTR = (WQMACTR_type==KEAACTR_row);
if ( ! XQMACTR )
{ /* line 157: */
XQMACTR = (WQMACTR_type==MEAACTR_flexrow);
}
YQMACTR = XQMACTR;
} 
A_PROC_EXIT(isrow);
return( YQMACTR );
} 
#undef NL

A68_BOOL  ARMACTR_isarray(A68_INT  Mode)
{ 
A68_INT  BRMACTR_type A_UNUSED = {0};
A68_BOOL  CRMACTR;  /* optbool result */
A68_BOOL  DRMACTR;  /* clause result */
A_PROC_ENTRY(isarray);
 /* line 165: */
 /* line 166: */
{ 
BRMACTR_type = IOMACTR_modetype(Mode);
 /* line 167: */
CRMACTR = (BRMACTR_type==KEAACTR_row);
if ( ! CRMACTR )
{CRMACTR = (BRMACTR_type==LEAACTR_vector);
}
 /* line 168: */
if ( ! CRMACTR )
{CRMACTR = (BRMACTR_type==MEAACTR_flexrow);
}
if ( ! CRMACTR )
{ /* line 169: */
CRMACTR = (BRMACTR_type==NEAACTR_flexvector);
}
DRMACTR = CRMACTR;
} 
A_PROC_EXIT(isarray);
return( DRMACTR );
} 
#undef NL

A68_BOOL  FRMACTR_isfirmarray(A68_INT  Mode)
{ 
A68_INT  GRMACTR_type A_UNUSED = {0};
A68_BOOL  HRMACTR;  /* optbool result */
A68_BOOL  IRMACTR;  /* clause result */
A_PROC_ENTRY(isfirmarray);
 /* line 176: */
 /* line 177: */
{ 
GRMACTR_type = IOMACTR_modetype(Mode);
 /* line 178: */
HRMACTR = (GRMACTR_type==KEAACTR_row);
if ( ! HRMACTR )
{ /* line 179: */
HRMACTR = (GRMACTR_type==LEAACTR_vector);
}
IRMACTR = HRMACTR;
} 
A_PROC_EXIT(isfirmarray);
return( IRMACTR );
} 
#undef NL

A68_BOOL  KRMACTR_isflexarray(A68_INT  Mode)
{ 
A68_INT  LRMACTR_type A_UNUSED = {0};
A68_BOOL  MRMACTR;  /* optbool result */
A68_BOOL  NRMACTR;  /* clause result */
A_PROC_ENTRY(isflexarray);
 /* line 186: */
 /* line 187: */
{ 
LRMACTR_type = IOMACTR_modetype(Mode);
 /* line 188: */
MRMACTR = (LRMACTR_type==MEAACTR_flexrow);
if ( ! MRMACTR )
{ /* line 189: */
MRMACTR = (LRMACTR_type==NEAACTR_flexvector);
}
NRMACTR = MRMACTR;
} 
A_PROC_EXIT(isflexarray);
return( NRMACTR );
} 
#undef NL

A68_BOOL  PRMACTR_isstruct(A68_INT  Mode)
{ 
A68_INT  QRMACTR_type A_UNUSED = {0};
A68_BOOL  RRMACTR;  /* clause result */
A_PROC_ENTRY(isstruct);
 /* line 196: */
 /* line 197: */
{ 
QRMACTR_type = IOMACTR_modetype(Mode);
 /* line 198: */
 /* line 199: */
RRMACTR = (QRMACTR_type==IEAACTR_struct);
} 
A_PROC_EXIT(isstruct);
return( RRMACTR );
} 
#undef NL

A68_BOOL  TRMACTR_isunion(A68_INT  Mode)
{ 
A68_INT  URMACTR_type A_UNUSED = {0};
A68_BOOL  VRMACTR;  /* clause result */
A_PROC_ENTRY(isunion);
 /* line 206: */
 /* line 207: */
{ 
URMACTR_type = IOMACTR_modetype(Mode);
 /* line 208: */
 /* line 209: */
VRMACTR = (URMACTR_type==HEAACTR_union);
} 
A_PROC_EXIT(isunion);
return( VRMACTR );
} 
#undef NL

A68_BOOL  XRMACTR_isistruct(A68_INT  Mode)
{ 
A68_INT  YRMACTR_type A_UNUSED = {0};
A68_BOOL  ZRMACTR;  /* clause result */
A_PROC_ENTRY(isistruct);
 /* line 216: */
 /* line 217: */
{ 
YRMACTR_type = IOMACTR_modetype(Mode);
 /* line 218: */
 /* line 219: */
ZRMACTR = (YRMACTR_type==JEAACTR_istruct);
} 
A_PROC_EXIT(isistruct);
return( ZRMACTR );
} 
#undef NL

A_STATIC A68_BOOL  BSMACTR_isstraight(A68_INT  Mode)
{ 
A68_INT  CSMACTR_type A_UNUSED = {0};
A68_BOOL  DSMACTR;  /* clause result */
A_PROC_ENTRY(isstraight);
 /* line 226: */
 /* line 227: */
{ 
CSMACTR_type = IOMACTR_modetype(Mode);
 /* line 228: */
 /* line 229: */
DSMACTR = (CSMACTR_type==OEAACTR_straight);
} 
A_PROC_EXIT(isstraight);
return( DSMACTR );
} 
#undef NL

A68_BOOL  FSMACTR_iscompl(A68_INT  Mode)
{ 
A68_INT  GSMACTR_norefmode A_UNUSED = {0};
A68_BOOL  HSMACTR;  /* clause result */
A_PROC_ENTRY(iscompl);
 /* line 236: */
 /* line 237: */
{ 
GSMACTR_norefmode = EOMACTR_deref(Mode);
 /* line 238: */
 /* line 239: */
HSMACTR = ((GSMACTR_norefmode>=LFAACTR_shortcomplmode)&(GSMACTR_norefmode<=OFAACTR_longlongcomplmode));
} 
A_PROC_EXIT(iscompl);
return( HSMACTR );
} 
#undef NL

A68_BOOL  JSMACTR_isproc(A68_INT  Mode)
{ 
A68_INT  KSMACTR_m A_UNUSED = {0};
A68_BOOL  LSMACTR;  /* clause result */
A_PROC_ENTRY(isproc);
 /* line 246: */
 /* line 247: */
{ 
KSMACTR_m = IOMACTR_modetype(Mode);
 /* line 248: */
 /* line 249: */
LSMACTR = (KSMACTR_m==FEAACTR_proc);
} 
A_PROC_EXIT(isproc);
return( LSMACTR );
} 
#undef NL

A68_BOOL  NSMACTR_isprocp(A68_INT  Mode)
{ 
A68_INT  OSMACTR_m A_UNUSED = {0};
A68_BOOL  PSMACTR;  /* clause result */
A_PROC_ENTRY(isprocp);
 /* line 256: */
 /* line 257: */
{ 
OSMACTR_m = IOMACTR_modetype(Mode);
 /* line 258: */
 /* line 259: */
PSMACTR = (OSMACTR_m==GEAACTR_procp);
} 
A_PROC_EXIT(isprocp);
return( PSMACTR );
} 
#undef NL

A68_BOOL  RSMACTR_hasrefs(A68_INT  Mode)
{ 
A68_BOOL  SSMACTR;  /* clause result */
A68_INT  TSMACTR;  /* ADICOPS - MOD */
A_PROC_ENTRY(hasrefs);
 /* line 265: */
SSMACTR = (!(A_MOD(Mode,VFAACTR_refmark,TSMACTR)==Mode));
A_PROC_EXIT(hasrefs);
return( SSMACTR );
} 
#undef NL

A68_BOOL  VSMACTR_iscstruct(A68_INT  Mode)
{ 
A68_BOOL  WSMACTR;  /* optbool result */
A68_BOOL  XSMACTR;  /* optbool result */
A68_BOOL  YSMACTR;  /* optbool result */
A68_BOOL  ZSMACTR;  /* clause result */
A_PROC_ENTRY(iscstruct);
 /* line 277: */
WSMACTR = MOMACTR_hasoneref(Mode);
if ( WSMACTR )
{WSMACTR = FRMACTR_isfirmarray(Mode);
}
 /* line 279: */
if ( ! WSMACTR )
{ /* line 280: */
XSMACTR = (Mode<VFAACTR_refmark);
if ( XSMACTR )
{YSMACTR = ARMACTR_isarray(Mode);
if ( ! YSMACTR )
{YSMACTR = TRMACTR_isunion(Mode);
}
if ( ! YSMACTR )
{ /* line 281: */
YSMACTR = PRMACTR_isstruct(Mode);
}
if ( ! YSMACTR )
{YSMACTR = JSMACTR_isproc(Mode);
}
if ( ! YSMACTR )
{YSMACTR = NSMACTR_isprocp(Mode);
}
XSMACTR = YSMACTR;
}
WSMACTR = XSMACTR;
}
ZSMACTR = WSMACTR;
A_PROC_EXIT(iscstruct);
return( ZSMACTR );
} 
#undef NL

A68_INT  BTMACTR_derefmode(A68_INT  Mode)
{ 
A68_INT  CTMACTR;  /* clause result */
A_PROC_ENTRY(derefmode);
 /* line 287: */
 /* line 288: */
{ 
 /* line 289: */
if (Mode<VFAACTR_refmark)
{ 
 /* line 290: */
(void)(SXIACTR_terminalerror(632));
} 
 /* line 291: */
 /* line 292: */
CTMACTR = (Mode-VFAACTR_refmark);
} 
A_PROC_EXIT(derefmode);
return( CTMACTR );
} 
#undef NL

A68_INT  ETMACTR_derefmodeok(A68_INT  Mode)
{ 
A68_INT  FTMACTR;  /* clause result */
A_PROC_ENTRY(derefmodeok);
 /* line 296: */
if (Mode>VFAACTR_refmark)
{ 
FTMACTR = (Mode-VFAACTR_refmark);
} 
else
{ 
FTMACTR = Mode;
} 
A_PROC_EXIT(derefmodeok);
return( FTMACTR );
} 
#undef NL

A_STATIC A68_INT  HTMACTR_auxmode(A68_INT  Mode)
{ 
A68_INT  ITMACTR;  /* clause result */
A68_INT  JTMACTR;  /* YIELD */
A_PROC_ENTRY(auxmode);
 /* line 302: */
JTMACTR = EOMACTR_deref(Mode) ;
ITMACTR = (*(&((&A_R1INDEX(WNMACTR_modes,JTMACTR))->Auxmode)));
A_PROC_EXIT(auxmode);
return( ITMACTR );
} 
#undef NL

A_STATIC A68_BITS  LTMACTR_flags(A68_INT  Mode)
{ 
A68_BITS  MTMACTR;  /* clause result */
A_PROC_ENTRY(flags);
 /* line 308: */
 /* line 309: */
if (Mode<VFAACTR_refmark)
{ 
 /* line 310: */
 /* line 311: */
MTMACTR = (*(&((&A_R1INDEX(WNMACTR_modes,Mode))->Flags)));
} 
else
{ 
MTMACTR = (A68_BITS )0;
} 
A_PROC_EXIT(flags);
return( MTMACTR );
} 
#undef NL

A68_BOOL  OTMACTR_dynamic(A68_INT  Mode)
{ 
A68_BOOL  PTMACTR;  /* clause result */
A68_BITS  QTMACTR;  /* ADICOPS - >= */
A_PROC_ENTRY(dynamic);
 /* line 319: */
 /* line 320: */
if (Mode<VFAACTR_refmark)
{ 
 /* line 321: */
QTMACTR = (*(&((&A_R1INDEX(WNMACTR_modes,Mode))->Flags))) ;
PTMACTR = A_LB_GE(QTMACTR,XNMACTR_dynamicbit);
} 
else
{ 
 /* line 322: */
PTMACTR = A68_FALSE;
} 
A_PROC_EXIT(dynamic);
return( PTMACTR );
} 
#undef NL

A68_VOID  STMACTR_procinfo(A68_INT  Mode, A68_154  *ReturnedValue)
{ 
A68_153 * VTMACTR_m A_UNUSED = {0};
A68_150  YTMACTR;  /* united object - for case conformity */
A68_151  ZTMACTR_params A_UNUSED = {0};
A68_INT  AUMACTR;  /* clause result */
A68_INT  BUMACTR_parameters A_UNUSED = {0};
A68_154  CUMACTR;  /* collateral clause result */
A68_BITS  DUMACTR;  /* ADICOPS - >= */
A68_154  EUMACTR;  /* clause result */
A_PROC_ENTRY(procinfo);
 /* line 328: */
 /* line 329: */
{ 
(void)(WXIACTR_assert(UTMACTR, (Mode<VFAACTR_refmark)));
 /* line 330: */
VTMACTR_m = (&A_R1INDEX(WNMACTR_modes,Mode));
 /* line 331: */
 /* line 332: */
(void)(WXIACTR_assert(XTMACTR, (((*(&(VTMACTR_m->Type)))==FEAACTR_proc)|((*(&(VTMACTR_m->Type)))==GEAACTR_procp))));
 /* line 334: */
YTMACTR = (*(&(VTMACTR_m->Extra))) ;
switch ( YTMACTR.mode )
{ 
case 2: /* REF VECTOR [] INT */
ZTMACTR_params = (YTMACTR.data.mode2);
AUMACTR = ZTMACTR_params.upb;
break;
default: 
AUMACTR = 0;
break;
} 
BUMACTR_parameters = AUMACTR;
 /* line 336: */
CUMACTR.Parameters = BUMACTR_parameters;
CUMACTR.Result = (*(&(VTMACTR_m->Auxmode)));
 /* line 337: */
DUMACTR = (*(&(VTMACTR_m->Flags))) ;
CUMACTR.Hasdescriptors = A_LB_GE(DUMACTR,ZNMACTR_hasdescriptors);
EUMACTR = CUMACTR;
} 
A_PROC_EXIT(procinfo);
*ReturnedValue = (EUMACTR);
return;
} 
#undef NL

A_STATIC A68_BOOL  GUMACTR_dynamicdescriptor(A68_INT  Mode)
{ 
A68_INT  HUMACTR;  /* YIELD */
A68_INT  IUMACTR_type A_UNUSED = {0};
A68_BOOL  JUMACTR;  /* clause result */
A_PROC_ENTRY(dynamicdescriptor);
 /* line 344: */
 /* line 345: */
if (Mode<WFAACTR_refrefmark)
{ 
HUMACTR = EOMACTR_deref(Mode) ;
IUMACTR_type = (*(&((&A_R1INDEX(WNMACTR_modes,HUMACTR))->Type)));
 /* line 346: */
 /* line 347: */
 /* line 348: */
JUMACTR = (((IUMACTR_type==LEAACTR_vector)|(IUMACTR_type==KEAACTR_row))|((Mode<VFAACTR_refmark)&((IUMACTR_type==NEAACTR_flexvector)|(IUMACTR_type==MEAACTR_flexrow))));
} 
else
{ 
 /* line 349: */
JUMACTR = A68_FALSE;
} 
A_PROC_EXIT(dynamicdescriptor);
return( JUMACTR );
} 
#undef NL

A_STATIC A68_VOID  LUMACTR_modelistextra(A68_INT  Mode, A68_151  *ReturnedValue)
{ 
A68_INT  MUMACTR;  /* YIELD */
A68_153 * NUMACTR_m A_UNUSED = {0};
A68_150  QUMACTR;  /* united object - for case conformity */
A68_151  RUMACTR_modelist A_UNUSED = {0};
A68_151  SUMACTR;  /* clause result */
A68_151  TUMACTR;  /* OPERATORS - nil -> mode */
A_PROC_ENTRY(modelistextra);
 /* line 355: */
 /* line 356: */
{ 
MUMACTR = EOMACTR_deref(Mode) ;
NUMACTR_m = (&A_R1INDEX(WNMACTR_modes,MUMACTR));
 /* line 357: */
(void)(WXIACTR_assert(PUMACTR, (((*(&(NUMACTR_m->Type)))==GEAACTR_procp)|((*(&(NUMACTR_m->Type)))==HEAACTR_union))));
 /* line 359: */
QUMACTR = (*(&(NUMACTR_m->Extra))) ;
switch ( QUMACTR.mode )
{ 
case 2: /* REF VECTOR [] INT */
RUMACTR_modelist = (QUMACTR.data.mode2);
SUMACTR = RUMACTR_modelist;
break;
default: 
 /* line 360: */
SUMACTR = A_VVAC(TUMACTR);
break;
} 
} 
A_PROC_EXIT(modelistextra);
*ReturnedValue = (SUMACTR);
return;
} 
#undef NL

A_STATIC A68_INT  VUMACTR_intextra(A68_INT  Mode)
{ 
A68_INT  WUMACTR;  /* YIELD */
A68_153 * XUMACTR_m A_UNUSED = {0};
A68_150  AVMACTR;  /* united object - for case conformity */
A68_INT  BVMACTR_i A_UNUSED = {0};
A68_INT  CVMACTR;  /* clause result */
A_PROC_ENTRY(intextra);
 /* line 366: */
 /* line 367: */
{ 
WUMACTR = EOMACTR_deref(Mode) ;
XUMACTR_m = (&A_R1INDEX(WNMACTR_modes,WUMACTR));
 /* line 368: */
 /* line 369: */
(void)(WXIACTR_assert(ZUMACTR, ((((*(&(XUMACTR_m->Type)))==JEAACTR_istruct)|((*(&(XUMACTR_m->Type)))==KEAACTR_row))|((*(&(XUMACTR_m->Type)))==MEAACTR_flexrow))));
 /* line 370: */
AVMACTR = (*(&(XUMACTR_m->Extra))) ;
switch ( AVMACTR.mode )
{ 
case 1: /* INT */
BVMACTR_i = (AVMACTR.data.mode1);
CVMACTR = BVMACTR_i;
break;
default: 
 /* line 371: */
CVMACTR = 0;
break;
} 
} 
A_PROC_EXIT(intextra);
return( CVMACTR );
} 
#undef NL

A68_VOID  EVMACTR_structfields(A68_INT  Mode, A68_152  *ReturnedValue)
{ 
A68_INT  FVMACTR;  /* YIELD */
A68_153 * GVMACTR_m A_UNUSED = {0};
A68_150  JVMACTR;  /* united object - for case conformity */
A68_152  KVMACTR_fields A_UNUSED = {0};
A68_152  LVMACTR;  /* clause result */
A68_152  OVMACTR = {0};  /* OPERATORS - skip to mode */
A_PROC_ENTRY(structfields);
 /* line 377: */
 /* line 378: */
{ 
FVMACTR = EOMACTR_deref(Mode) ;
GVMACTR_m = (&A_R1INDEX(WNMACTR_modes,FVMACTR));
 /* line 379: */
(void)(WXIACTR_assert(IVMACTR, ((*(&(GVMACTR_m->Type)))==IEAACTR_struct)));
 /* line 380: */
 /* line 381: */
JVMACTR = (*(&(GVMACTR_m->Extra))) ;
switch ( JVMACTR.mode )
{ 
case 3: /* REF VECTOR [] MODE149 */
KVMACTR_fields = (JVMACTR.data.mode3);
 /* line 382: */
LVMACTR = KVMACTR_fields;
break;
default: 
(void)(WXIACTR_assert(NVMACTR, A68_FALSE));
 /* line 383: */
 /* line 384: */
 /* line 385: */
LVMACTR = OVMACTR;
break;
} 
} 
A_PROC_EXIT(structfields);
*ReturnedValue = (LVMACTR);
return;
} 
#undef NL

A68_INT  QVMACTR_dimensions(A68_INT  Mode)
{ 
A68_INT  RVMACTR;  /* clause result */
A_PROC_ENTRY(dimensions);
 /* line 391: */
if (QQMACTR_isvector(EOMACTR_deref(Mode)))
{ 
RVMACTR = 1;
} 
else
{ 
RVMACTR = VUMACTR_intextra(Mode);
} 
A_PROC_EXIT(dimensions);
return( RVMACTR );
} 
#undef NL
 /* line 406: */

A_STATIC A68_VOID  KWMACTR_addtolist(A68_INT  Thismode, A68_151  Auxmodes, A68_INT  Dims, A68_166 ** List)
{ 
A68_INT  MWMACTR;  /* YIELD */
A68_INT  LWMACTR_xmde A_UNUSED = {0};
A68_INT  NWMACTR;  /* to part of loop */
A68_INT  OWMACTR;  /* loop control */
A68_151  PWMACTR;  /* clause result */
A68_151  QWMACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_151  RWMACTR_xmodes A_UNUSED = {0};
A68_166  SWMACTR;  /* collateral clause result */
A68_168  UWMACTR_generator;   /* proc value of non-global proc */
A68_151  ZWMACTR;  /* avoid structure result */
A68_166 * AXMACTR;  /* YIELD */
A_PROC_ENTRY(addtolist);
 /* line 407: */
 /* line 409: */
{ 
 /* line 410: */
if (List==(&CWMACTR_rowlist))
{ 
MWMACTR = 1 ;
LWMACTR_xmde = A_VINDEX(Auxmodes,MWMACTR);
 /* line 411: */
NWMACTR = (Dims-1);
for ( OWMACTR = 1;
OWMACTR <= NWMACTR;
OWMACTR += 1 )
{ 
(void)(LWMACTR_xmde = HTMACTR_auxmode(LWMACTR_xmde));
}
 /* line 412: */
 /* line 413: */
PWMACTR = A_HVEC(QWMACTR,LWMACTR_xmde,A68_INT );
} 
else
{ 
PWMACTR = Auxmodes;
} 
RWMACTR_xmodes = PWMACTR;
 /* line 415: */
 /* line 416: */
 /* line 417: */
SWMACTR.Thismode = EOMACTR_deref(Thismode);
A_CLOSURE( UWMACTR_generator, VWMACTR_generator, WWMACTR_generator );
(( WWMACTR_generator * ) ( UWMACTR_generator.nonlocals )) -> RWMACTR_xmodes = RWMACTR_xmodes;
 /* line 418: */
A_CALLPROC(UWMACTR_generator,(A68_FALSE, &ZWMACTR),(A68_FALSE, &ZWMACTR,(UWMACTR_generator).nonlocals));
(void)(A_VASSIGN2(RWMACTR_xmodes,ZWMACTR,A68_INT )) ;
SWMACTR.Auxmode = ZWMACTR;
 /* line 419: */
SWMACTR.Dims = Dims;
 /* line 420: */
SWMACTR.Next = (*List);
AXMACTR = A_HEAP(A68_166 ) ;
(void)((*AXMACTR) = SWMACTR) ;
(*List) = AXMACTR;
} 
A_PROC_EXIT(addtolist);
return;
} 
#undef NL

A_STATIC A68_BOOL  DXMACTR_(A68_151  A, A68_151  B)
{ 
A68_BOOL  EXMACTR_eq A_UNUSED = {0};
A68_INT  FXMACTR_i A_UNUSED = {0};
A68_INT  GXMACTR;  /* to part of loop */
A68_BOOL  HXMACTR;  /* clause result */
A_PROC_ENTRY(=);
 /* line 423: */
 /* line 424: */
 /* line 425: */
if (A.upb==B.upb)
{ 
 /* line 426: */
GXMACTR = A.upb;
for ( FXMACTR_i = 1;
FXMACTR_i <= GXMACTR;
FXMACTR_i += 1 )
{ 
 /* line 427: */
if ( !(EXMACTR_eq = (A_VINDEX(A,FXMACTR_i)==A_VINDEX(B,FXMACTR_i))) ) break;
/*SKIP*/;
}
 /* line 428: */
 /* line 429: */
HXMACTR = EXMACTR_eq;
} 
else
{ 
 /* line 430: */
HXMACTR = A68_FALSE;
} 
A_PROC_EXIT(=);
return( HXMACTR );
} 
#undef NL

A_STATIC A68_BOOL  KXMACTR_(A68_151  A, A68_151  B)
{ 
A68_BOOL  LXMACTR;  /* clause result */
A_PROC_ENTRY(/=);
LXMACTR = (!DXMACTR_(A, B));
A_PROC_EXIT(/=);
return( LXMACTR );
} 
#undef NL

A_STATIC A68_INT  PXMACTR_lookup(A68_INT  Mode, A68_151  Auxmode, A68_INT  Dims)
{ 
A68_166 * QXMACTR;  /* clause result */
A68_166 * TXMACTR = {0};  /* OPERATORS - skip to mode */
A68_166 * UXMACTR_current A_UNUSED = {0};
A68_BOOL  VXMACTR;  /* optbool result */
A68_BOOL  WXMACTR;  /* optbool result */
A68_152  XXMACTR;  /* avoid structure result */
A68_152  YXMACTR_strctfields A_UNUSED = {0};
A68_152  AYMACTR;  /* OPERATORS - nil -> mode */
A68_152  BYMACTR;  /* != */
A68_174  EYMACTR_generator;   /* proc value of non-global proc */
A68_173  KYMACTR;  /* avoid structure result */
A68_173  JYMACTR_fieldnames A_UNUSED = {0};
A68_149 * LYMACTR_strctfield A_UNUSED = {0};
A68_56 * MYMACTR_fieldname A_UNUSED = {0};
A68_INT  NYMACTR;  /* forall loop counter */
A68_BOOL  OYMACTR;  /* optbool result */
A68_BOOL  PYMACTR;  /* optbool result */
A68_BOOL  QYMACTR_equal A_UNUSED = {0};
A68_152  RYMACTR;  /* avoid structure result */
A68_152  SYMACTR_strctfields A_UNUSED = {0};
A68_152  UYMACTR;  /* OPERATORS - nil -> mode */
A68_152  VYMACTR;  /* != */
A68_56 * XYMACTR_fieldname A_UNUSED = {0};
A68_149 * YYMACTR_strctfield A_UNUSED = {0};
A68_INT  ZYMACTR;  /* forall loop counter */
A68_VC  AZMACTR;  /* OPERATORS - istruct -> vector */
A68_VC  BZMACTR;  /* OPERATORS - istruct -> vector */
A68_56  CZMACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  DZMACTR;  /* clause result */
A68_BOOL  EZMACTR;  /* optbool result */
A68_BOOL  FZMACTR;  /* optbool result */
A68_INT  IZMACTR;  /* clause result */
A_PROC_ENTRY(lookup);
 /* line 435: */
 /* line 436: */
{ 
 /* line 437: */
if (VQMACTR_isrow(Mode))
{ 
QXMACTR = CWMACTR_rowlist;
} 
else
{ 
 /* line 438: */
if (QQMACTR_isvector(Mode))
{ 
QXMACTR = DWMACTR_vectorlist;
} 
else
{ 
 /* line 439: */
if (PRMACTR_isstruct(Mode))
{ 
QXMACTR = EWMACTR_structlist;
} 
else
{ 
 /* line 440: */
if (TRMACTR_isunion(Mode))
{ 
QXMACTR = FWMACTR_unionlist;
} 
else
{ 
(void)(WXIACTR_assert(SXMACTR, A68_FALSE));
 /* line 441: */
 /* line 442: */
QXMACTR = TXMACTR;
} 
} 
} 
} 
UXMACTR_current = QXMACTR;
 /* line 444: */
 /* line 445: */
 /* line 446: */
if (VQMACTR_isrow(Mode))
{ 
for ( ;; )
{ 
 /* line 447: */
VXMACTR = (UXMACTR_current!=(A68_166 *)A68_NIL);
if ( VXMACTR )
{ /* line 448: */
WXMACTR = KXMACTR_((*(&(UXMACTR_current->Auxmode))), Auxmode);
if ( ! WXMACTR )
{ /* line 449: */
WXMACTR = ((*(&(UXMACTR_current->Dims)))!=Dims);
}
 /* line 450: */
VXMACTR = WXMACTR;
}
 /* line 451: */
if ( !(VXMACTR) ) break;
 /* line 452: */
(void)(UXMACTR_current = (*(&(UXMACTR_current->Next))));
}
 /* line 453: */
} 
else
{ 
 /* line 454: */
 /* line 459: */
if (PRMACTR_isstruct(Mode))
{ 
EVMACTR_structfields( Mode, &XXMACTR );
YXMACTR_strctfields = XXMACTR;
 /* line 460: */
 /* line 461: */
BYMACTR = A_VVAC(AYMACTR) ;
(void)(WXIACTR_assert(CYMACTR, ! A_VSTRUCTCOMP(YXMACTR_strctfields,BYMACTR)));
 /* line 462: */
A_CLOSURE( EYMACTR_generator, FYMACTR_generator, GYMACTR_generator );
(( GYMACTR_generator * ) ( EYMACTR_generator.nonlocals )) -> YXMACTR_strctfields = YXMACTR_strctfields;
A_CALLPROC(EYMACTR_generator,(A68_TRUE, &KYMACTR),(A68_TRUE, &KYMACTR,(EYMACTR_generator).nonlocals));
JYMACTR_fieldnames = KYMACTR;
 /* line 464: */
 /* line 465: */
NYMACTR = YXMACTR_strctfields.upb -1;
if ( NYMACTR != JYMACTR_fieldnames.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
LYMACTR_strctfield = YXMACTR_strctfields.data;
MYMACTR_fieldname = JYMACTR_fieldnames.data;
for (;NYMACTR-- >= 0;
(LYMACTR_strctfield++
,MYMACTR_fieldname++
) )
{
 /* line 466: */
(void)((*MYMACTR_fieldname) = (*(&(LYMACTR_strctfield->Name))));
}
 /* line 468: */
for ( ;; )
{ 
 /* line 469: */
OYMACTR = (UXMACTR_current!=(A68_166 *)A68_NIL);
if ( OYMACTR )
{ /* line 470: */
PYMACTR = DXMACTR_((*(&(UXMACTR_current->Auxmode))), Auxmode);
if ( PYMACTR )
{{ 
 /* line 471: */
 /* line 472: */
EVMACTR_structfields( (*(&(UXMACTR_current->Thismode))), &RYMACTR );
SYMACTR_strctfields = RYMACTR;
 /* line 473: */
 /* line 474: */
VYMACTR = A_VVAC(UYMACTR) ;
(void)(WXIACTR_assert(WYMACTR, ! A_VSTRUCTCOMP(SYMACTR_strctfields,VYMACTR)));
 /* line 476: */
 /* line 477: */
ZYMACTR = JYMACTR_fieldnames.upb -1;
if ( ZYMACTR != SYMACTR_strctfields.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
XYMACTR_fieldname = JYMACTR_fieldnames.data;
YYMACTR_strctfield = SYMACTR_strctfields.data;
for (;ZYMACTR-- >= 0;
(XYMACTR_fieldname++
,YYMACTR_strctfield++
) )
{
 /* line 478: */
 /* line 479: */
CZMACTR = (*(&(YYMACTR_strctfield->Name))) ;
if ( !(QYMACTR_equal = A_VC_EQ(A_HISVEC(AZMACTR,(*XYMACTR_fieldname),32,A68_CHAR ),A_HISVEC(BZMACTR,CZMACTR,32,A68_CHAR ))) ) break;
/*SKIP*/;
}
 /* line 480: */
 /* line 481: */
 /* line 482: */
DZMACTR = QYMACTR_equal;
} 
PYMACTR = DZMACTR;
}
 /* line 483: */
OYMACTR = (!PYMACTR);
}
 /* line 484: */
if ( !(OYMACTR) ) break;
 /* line 485: */
(void)(UXMACTR_current = (*(&(UXMACTR_current->Next))));
}
 /* line 486: */
} 
else
{ 
EZMACTR = QQMACTR_isvector(Mode);
if ( ! EZMACTR )
{ /* line 487: */
EZMACTR = TRMACTR_isunion(Mode);
}
 /* line 488: */
if (EZMACTR)
{ 
for ( ;; )
{ 
 /* line 489: */
FZMACTR = (UXMACTR_current!=(A68_166 *)A68_NIL);
if ( FZMACTR )
{ /* line 490: */
FZMACTR = KXMACTR_((*(&(UXMACTR_current->Auxmode))), Auxmode);
}
 /* line 491: */
if ( !(FZMACTR) ) break;
 /* line 492: */
(void)(UXMACTR_current = (*(&(UXMACTR_current->Next))));
}
 /* line 493: */
} 
else
{ 
 /* line 494: */
(void)(WXIACTR_assert(HZMACTR, A68_FALSE));
} 
} 
} 
 /* line 496: */
 /* line 497: */
 /* line 498: */
if (UXMACTR_current==(A68_166 *)A68_NIL)
{ 
 /* line 499: */
IZMACTR = VEAACTR_faultmode;
} 
else
{ 
 /* line 501: */
IZMACTR = (*(&(UXMACTR_current->Thismode)));
} 
} 
A_PROC_EXIT(lookup);
return( IZMACTR );
} 
#undef NL

A_STATIC A68_INT  LZMACTR_deflexedmode(A68_INT  Mode, A68_BOOL  Toplevel)
{ 
A68_INT  MZMACTR;  /* YIELD */
A68_INT  NZMACTR;  /* clause result */
A68_BOOL  OZMACTR;  /* optbool result */
A68_INT  PZMACTR;  /* YIELD */
A_PROC_ENTRY(deflexedmode);
 /* line 509: */
 /* line 510: */
 /* line 511: */
MZMACTR = EOMACTR_deref(Mode) ;
if ((*(&((&A_R1INDEX(WNMACTR_modes,MZMACTR))->Deflexedmode)))==PEAACTR_nomode)
{ 
NZMACTR = PEAACTR_nomode;
} 
else
{ 
OZMACTR = (!Toplevel);
if ( OZMACTR )
{OZMACTR = KRMACTR_isflexarray(Mode);
}
if ( OZMACTR )
{ /* line 512: */
OZMACTR = (Mode>VFAACTR_refmark);
}
 /* line 514: */
if (OZMACTR)
{ 
NZMACTR = Mode;
} 
else
{ 
 /* line 515: */
PZMACTR = EOMACTR_deref(Mode) ;
NZMACTR = ((*(&((&A_R1INDEX(WNMACTR_modes,PZMACTR))->Deflexedmode)))+((Mode/VFAACTR_refmark)*VFAACTR_refmark));
} 
} 
A_PROC_EXIT(deflexedmode);
return( NZMACTR );
} 
#undef NL

A_STATIC A68_INT  SZMACTR_findthedeflexmode(A68_INT  Mode, A68_BOOL  Toplevel)
{ 
A68_INT  TZMACTR_d A_UNUSED = {0};
A68_BOOL  UZMACTR;  /* clause result */
A68_INT  VZMACTR;  /* clause result */
A68_BITS  WZMACTR;  /* ADICOPS - >= */
A68_INT  XZMACTR_derefedmode A_UNUSED = {0};
A68_INT  YZMACTR_refs A_UNUSED = {0};
A68_BITS * ZZMACTR;  /* YIELD */
A68_BOOL  AANACTR;  /* clause result */
A68_151  BANACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  CANACTR_l A_UNUSED = {0};
A68_INT  DANACTR;  /* clause result */
A68_INT * EANACTR;  /* YIELD */
A68_152  FANACTR;  /* avoid structure result */
A68_152  GANACTR_strctfields A_UNUSED = {0};
A68_152  IANACTR;  /* OPERATORS - nil -> mode */
A68_152  JANACTR;  /* != */
A68_168  MANACTR_generator;   /* proc value of non-global proc */
A68_151  SANACTR;  /* avoid structure result */
A68_151  RANACTR_deflexedmodes A_UNUSED = {0};
A68_INT * TANACTR_thisdeflexedmode A_UNUSED = {0};
A68_149 * UANACTR_strct A_UNUSED = {0};
A68_INT  VANACTR;  /* forall loop counter */
A68_INT  WANACTR_l A_UNUSED = {0};
A68_INT  XANACTR;  /* clause result */
A68_INT * YANACTR;  /* YIELD */
A68_152  ZANACTR;  /* avoid structure result */
A68_152  ABNACTR_deflexedstrctfields A_UNUSED = {0};
A68_152  CBNACTR;  /* OPERATORS - nil -> mode */
A68_152  DBNACTR;  /* != */
A68_151  FBNACTR;  /* avoid structure result */
A68_151  GBNACTR_deflexedmodestemp A_UNUSED = {0};
A68_168  IBNACTR_generator;   /* proc value of non-global proc */
A68_151  OBNACTR;  /* avoid structure result */
A68_151  NBNACTR_deflexedmodes A_UNUSED = {0};
A68_151  QBNACTR;  /* OPERATORS - nil -> mode */
A68_151  RBNACTR;  /* != */
A68_INT * TBNACTR_thisdeflexedmode A_UNUSED = {0};
A68_INT  UBNACTR;  /* forall loop counter */
A68_INT  VBNACTR_l A_UNUSED = {0};
A68_INT  WBNACTR;  /* clause result */
A68_INT * XBNACTR;  /* YIELD */
A68_BOOL  YBNACTR;  /* optbool result */
A68_INT * ZBNACTR;  /* YIELD */
A68_INT * ACNACTR;  /* YIELD */
A68_INT * BCNACTR;  /* YIELD */
A68_VC  ECNACTR;  /* avoid structure result */
A68_INT  FCNACTR = {0};  /* OPERATORS - skip to mode */
A_PROC_ENTRY(findthedeflexmode);
 /* line 518: */
{ 
TZMACTR_d = LZMACTR_deflexedmode(Mode, Toplevel);
 /* line 519: */
 /* line 520: */
 /* line 521: */
UZMACTR = (TZMACTR_d!=PEAACTR_nomode);
if (UZMACTR)
{ 
VZMACTR = TZMACTR_d;
} 
else
{ 
 /* line 522: */
 /* line 529: */
WZMACTR = LTMACTR_flags(EOMACTR_deref(Mode)) ;
if (A_LB_GE(WZMACTR,BOMACTR_deflexoutput))
{ 
VZMACTR = Mode;
} 
else
{ 
{ 
XZMACTR_derefedmode = EOMACTR_deref(Mode);
 /* line 530: */
YZMACTR_refs = ((Mode/VFAACTR_refmark)*VFAACTR_refmark);
 /* line 532: */
ZZMACTR = (&((&A_R1INDEX(WNMACTR_modes,XZMACTR_derefedmode))->Flags)) ;
(void)((*ZZMACTR) = (A68_BITS )((*(&((&A_R1INDEX(WNMACTR_modes,XZMACTR_derefedmode))->Flags)))|BOMACTR_deflexoutput));
 /* line 533: */
 /* line 534: */
 /* line 535: */
AANACTR = ARMACTR_isarray(Mode);
if (AANACTR)
{ 
 /* line 536: */
 /* line 537: */
 /* line 538: */
CANACTR_l = PXMACTR_lookup(Mode, A_HVEC(BANACTR,SZMACTR_findthedeflexmode(A_CALLPROC(UVMACTR_elementmode,(Mode),(Mode,(UVMACTR_elementmode).nonlocals)), A68_FALSE),A68_INT ), QVMACTR_dimensions(Mode));
 /* line 539: */
 /* line 540: */
 /* line 541: */
if (CANACTR_l==VEAACTR_faultmode)
{ 
 /* line 542: */
DANACTR = XZMACTR_derefedmode;
} 
else
{ 
DANACTR = CANACTR_l;
} 
EANACTR = (&((&A_R1INDEX(WNMACTR_modes,XZMACTR_derefedmode))->Deflexedmode)) ;
(*EANACTR) = DANACTR;
 /* line 543: */
 /* line 544: */
VZMACTR = LZMACTR_deflexedmode(Mode, Toplevel);
} 
else
{ 
 /* line 545: */
 /* line 546: */
if (PRMACTR_isstruct(Mode))
{ 
EVMACTR_structfields( Mode, &FANACTR );
GANACTR_strctfields = FANACTR;
 /* line 547: */
 /* line 548: */
JANACTR = A_VVAC(IANACTR) ;
(void)(WXIACTR_assert(KANACTR, ! A_VSTRUCTCOMP(GANACTR_strctfields,JANACTR)));
 /* line 549: */
A_CLOSURE( MANACTR_generator, NANACTR_generator, OANACTR_generator );
(( OANACTR_generator * ) ( MANACTR_generator.nonlocals )) -> GANACTR_strctfields = GANACTR_strctfields;
A_CALLPROC(MANACTR_generator,(A68_TRUE, &SANACTR),(A68_TRUE, &SANACTR,(MANACTR_generator).nonlocals));
RANACTR_deflexedmodes = SANACTR;
 /* line 551: */
 /* line 552: */
VANACTR = RANACTR_deflexedmodes.upb -1;
if ( VANACTR != GANACTR_strctfields.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
TANACTR_thisdeflexedmode = RANACTR_deflexedmodes.data;
UANACTR_strct = GANACTR_strctfields.data;
for (;VANACTR-- >= 0;
(TANACTR_thisdeflexedmode++
,UANACTR_strct++
) )
{
 /* line 553: */
(void)((*TANACTR_thisdeflexedmode) = SZMACTR_findthedeflexmode((*(&(UANACTR_strct->Mode))), A68_FALSE));
}
 /* line 554: */
WANACTR_l = PXMACTR_lookup(Mode, RANACTR_deflexedmodes, 0);
 /* line 555: */
 /* line 556: */
if (WANACTR_l==VEAACTR_faultmode)
{ 
(void)(KWMACTR_addtolist(Mode, RANACTR_deflexedmodes, 0, (&EWMACTR_structlist)));
 /* line 557: */
 /* line 558: */
 /* line 559: */
XANACTR = XZMACTR_derefedmode;
} 
else
{ 
XANACTR = WANACTR_l;
} 
YANACTR = (&((&A_R1INDEX(WNMACTR_modes,XZMACTR_derefedmode))->Deflexedmode)) ;
(*YANACTR) = XANACTR;
 /* line 561: */
 /* line 562: */
 /* line 565: */
if (LZMACTR_deflexedmode(Mode, Toplevel)!=Mode)
{ 
EVMACTR_structfields( LZMACTR_deflexedmode(Mode, Toplevel), &ZANACTR );
ABNACTR_deflexedstrctfields = ZANACTR;
 /* line 566: */
 /* line 567: */
 /* line 568: */
DBNACTR = A_VVAC(CBNACTR) ;
(void)(WXIACTR_assert(EBNACTR, ! A_VSTRUCTCOMP(ABNACTR_deflexedstrctfields,DBNACTR)));
} 
 /* line 570: */
 /* line 571: */
VZMACTR = LZMACTR_deflexedmode(Mode, Toplevel);
} 
else
{ 
 /* line 572: */
 /* line 573: */
if (TRMACTR_isunion(Mode))
{ 
LUMACTR_modelistextra( Mode, &FBNACTR );
GBNACTR_deflexedmodestemp = FBNACTR;
 /* line 574: */
A_CLOSURE( IBNACTR_generator, JBNACTR_generator, KBNACTR_generator );
(( KBNACTR_generator * ) ( IBNACTR_generator.nonlocals )) -> GBNACTR_deflexedmodestemp = GBNACTR_deflexedmodestemp;
A_CALLPROC(IBNACTR_generator,(A68_TRUE, &OBNACTR),(A68_TRUE, &OBNACTR,(IBNACTR_generator).nonlocals));
NBNACTR_deflexedmodes = OBNACTR;
(void)(A_VASSIGN2(GBNACTR_deflexedmodestemp,NBNACTR_deflexedmodes,A68_INT ));
 /* line 575: */
 /* line 576: */
RBNACTR = A_VVAC(QBNACTR) ;
(void)(WXIACTR_assert(SBNACTR, ! A_VSTRUCTCOMP(NBNACTR_deflexedmodes,RBNACTR)));
 /* line 578: */
 /* line 579: */
UBNACTR = NBNACTR_deflexedmodes.upb -1;
TBNACTR_thisdeflexedmode = NBNACTR_deflexedmodes.data;
for (;UBNACTR-- >= 0;
(TBNACTR_thisdeflexedmode++
) )
{
 /* line 580: */
(void)((*TBNACTR_thisdeflexedmode) = SZMACTR_findthedeflexmode((*TBNACTR_thisdeflexedmode), A68_FALSE));
}
 /* line 582: */
VBNACTR_l = PXMACTR_lookup(Mode, NBNACTR_deflexedmodes, 0);
 /* line 583: */
 /* line 584: */
if (VBNACTR_l==VEAACTR_faultmode)
{ 
(void)(KWMACTR_addtolist(Mode, NBNACTR_deflexedmodes, 0, (&FWMACTR_unionlist)));
 /* line 585: */
 /* line 586: */
 /* line 587: */
WBNACTR = XZMACTR_derefedmode;
} 
else
{ 
WBNACTR = VBNACTR_l;
} 
XBNACTR = (&((&A_R1INDEX(WNMACTR_modes,XZMACTR_derefedmode))->Deflexedmode)) ;
(*XBNACTR) = WBNACTR;
 /* line 589: */
 /* line 590: */
VZMACTR = LZMACTR_deflexedmode(Mode, Toplevel);
} 
else
{ 
YBNACTR = JSMACTR_isproc(Mode);
if ( ! YBNACTR )
{ /* line 591: */
YBNACTR = NSMACTR_isprocp(Mode);
}
if (YBNACTR)
{ 
ZBNACTR = (&((&A_R1INDEX(WNMACTR_modes,XZMACTR_derefedmode))->Deflexedmode)) ;
(*ZBNACTR) = XZMACTR_derefedmode;
 /* line 592: */
 /* line 593: */
VZMACTR = Mode;
} 
else
{ 
 /* line 594: */
if (XRMACTR_isistruct(Mode))
{ 
ACNACTR = (&((&A_R1INDEX(WNMACTR_modes,XZMACTR_derefedmode))->Deflexedmode)) ;
(*ACNACTR) = XZMACTR_derefedmode;
 /* line 595: */
 /* line 596: */
VZMACTR = Mode;
} 
else
{ 
 /* line 597: */
if (BSMACTR_isstraight(Mode))
{ 
BCNACTR = (&((&A_R1INDEX(WNMACTR_modes,XZMACTR_derefedmode))->Deflexedmode)) ;
(*BCNACTR) = XZMACTR_derefedmode;
 /* line 598: */
 /* line 599: */
VZMACTR = Mode;
} 
else
{ 
ROAAOSF_whole( Mode, 0, &ECNACTR );
(void)(WXIACTR_assert(A_VC_PLUS(DCNACTR,ECNACTR), A68_FALSE));
 /* line 600: */
 /* line 601: */
VZMACTR = FCNACTR;
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
A_PROC_EXIT(findthedeflexmode);
return( VZMACTR );
} 
#undef NL

A68_INT  HCNACTR_finddeflexmode(A68_INT  Mode)
{ 
A68_INT  ICNACTR;  /* clause result */
A_PROC_ENTRY(finddeflexmode);
 /* line 604: */
ICNACTR = SZMACTR_findthedeflexmode(Mode, A68_TRUE);
A_PROC_EXIT(finddeflexmode);
return( ICNACTR );
} 
#undef NL

A_STATIC A68_VOID  KCNACTR_auxmodename(A68_INT  Mode, A68_VC  *ReturnedValue)
{ 
A68_VC  LCNACTR;  /* clause result */
A68_VC  MCNACTR;  /* avoid structure result */
A68_VC  NCNACTR;  /* avoid structure result */
A68_INT  OCNACTR_type A_UNUSED = {0};
A68_VC  RCNACTR;  /* avoid structure result */
A68_VC  UCNACTR;  /* avoid structure result */
A_PROC_ENTRY(auxmodename);
 /* line 607: */
 /* line 608: */
if (Mode>VFAACTR_refmark)
{ 
 /* line 609: */
KDHACTR_message( 92, &MCNACTR );
KCNACTR_auxmodename( (Mode-VFAACTR_refmark), &NCNACTR );
LCNACTR = A_VC_PLUS(MCNACTR,NCNACTR);
} 
else
{ 
OCNACTR_type = IOMACTR_modetype(Mode);
 /* line 610: */
 /* line 611: */
if ((Mode<=OFAACTR_longlongcomplmode)|(OCNACTR_type==EEAACTR_primitive))
{ 
if (Mode==TEAACTR_gotomode)
{ 
LCNACTR = QCNACTR;
} 
else
{ 
 /* line 612: */
 /* line 613: */
KDHACTR_message( (66+Mode), &RCNACTR );
LCNACTR = RCNACTR;
} 
} 
else
{ 
 /* line 614: */
 /* line 615: */
ROAAOSF_whole( Mode, 0, &UCNACTR );
LCNACTR = A_VC_PLUS(TCNACTR,UCNACTR);
} 
} 
A_PROC_EXIT(auxmodename);
*ReturnedValue = (LCNACTR);
return;
} 
#undef NL

A68_VOID  WCNACTR_modename(A68_INT  Mode, A68_VC  *ReturnedValue)
{ 
A68_VC  XCNACTR;  /* clause result */
A68_VC  YCNACTR;  /* avoid structure result */
A68_VC  ZCNACTR;  /* avoid structure result */
A68_INT  ADNACTR_type A_UNUSED = {0};
A68_VC  DDNACTR;  /* avoid structure result */
A68_140  GDNACTR_rowmodename;   /* proc value of non-global proc */
A68_VC  UENACTR;  /* avoid structure result */
A68_VC  VENACTR_typemess A_UNUSED = {0};
A68_VC  WENACTR;  /* avoid structure result */
A68_151  XENACTR;  /* avoid structure result */
A68_VC  YENACTR;  /* avoid structure result */
A68_VC  ZENACTR;  /* avoid structure result */
A68_VC  AFNACTR;  /* avoid structure result */
A68_151  BFNACTR;  /* avoid structure result */
A68_VC  CFNACTR;  /* avoid structure result */
A68_VC  DFNACTR;  /* avoid structure result */
A68_152  EFNACTR;  /* avoid structure result */
A68_VC  FFNACTR;  /* avoid structure result */
A68_VC  GFNACTR;  /* avoid structure result */
A68_VC  HFNACTR;  /* avoid structure result */
A68_VC  IFNACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  JFNACTR;  /* avoid structure result */
A68_VC  KFNACTR;  /* avoid structure result */
A68_VC  LFNACTR;  /* avoid structure result */
A68_VC  MFNACTR;  /* avoid structure result */
A68_VC  NFNACTR;  /* avoid structure result */
A68_VC  OFNACTR;  /* avoid structure result */
A68_VC  PFNACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(modename);
 /* line 618: */
 /* line 619: */
 /* line 620: */
if (Mode>VFAACTR_refmark)
{ 
 /* line 621: */
 /* line 622: */
KDHACTR_message( 92, &YCNACTR );
WCNACTR_modename( (Mode-VFAACTR_refmark), &ZCNACTR );
XCNACTR = A_VC_PLUS(YCNACTR,ZCNACTR);
} 
else
{ 
ADNACTR_type = IOMACTR_modetype(Mode);
 /* line 623: */
 /* line 624: */
if ((Mode<=OFAACTR_longlongcomplmode)|(ADNACTR_type==EEAACTR_primitive))
{ 
if (Mode==TEAACTR_gotomode)
{ 
XCNACTR = CDNACTR;
} 
else
{ 
 /* line 625: */
 /* line 626: */
KDHACTR_message( (66+Mode), &DDNACTR );
XCNACTR = DDNACTR;
} 
} 
else
{ 
A_CLOSURE( GDNACTR_rowmodename, HDNACTR_rowmodename, IDNACTR_rowmodename );
(( IDNACTR_rowmodename * ) ( GDNACTR_rowmodename.nonlocals )) -> Mode = Mode;
 /* line 632: */
 /* line 642: */
 /* line 652: */
KDHACTR_message( (550+ADNACTR_type), &UENACTR );
VENACTR_typemess = UENACTR;
 /* line 653: */
 /* line 654: */
 /* line 656: */
switch ( (ADNACTR_type-1) )
{ 
case 1: 
 /* line 658: */
KCNACTR_auxmodename( A_CALLPROC(SVMACTR_deproc,(Mode),(Mode,(SVMACTR_deproc).nonlocals)), &WENACTR );
XCNACTR = A_VC_PLUS(VENACTR_typemess,WENACTR);
break;
case 2: 
 /* line 659: */
 /* line 661: */
LUMACTR_modelistextra( Mode, &XENACTR );
NDNACTR_modelist( XENACTR, &YENACTR );
KDHACTR_message( 562, &ZENACTR );
KCNACTR_auxmodename( A_CALLPROC(SVMACTR_deproc,(Mode),(Mode,(SVMACTR_deproc).nonlocals)), &AFNACTR );
XCNACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(VENACTR_typemess,YENACTR),ZENACTR),AFNACTR);
break;
case 3: 
 /* line 663: */
LUMACTR_modelistextra( Mode, &BFNACTR );
NDNACTR_modelist( BFNACTR, &CFNACTR );
KDHACTR_message( 562, &DFNACTR );
XCNACTR = A_VC_PLUS(A_VC_PLUS(VENACTR_typemess,CFNACTR),DFNACTR);
break;
case 4: 
 /* line 665: */
EVMACTR_structfields( Mode, &EFNACTR );
EENACTR_fieldlist( EFNACTR, &FFNACTR );
KDHACTR_message( 562, &GFNACTR );
XCNACTR = A_VC_PLUS(A_VC_PLUS(VENACTR_typemess,FFNACTR),GFNACTR);
break;
case 5: 
 /* line 666: */
 /* line 668: */
ROAAOSF_whole( A_CALLPROC(WVMACTR_istructlength,(Mode),(Mode,(WVMACTR_istructlength).nonlocals)), 0, &HFNACTR );
KCNACTR_auxmodename( A_CALLPROC(UVMACTR_elementmode,(Mode),(Mode,(UVMACTR_elementmode).nonlocals)), &JFNACTR );
XCNACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(VENACTR_typemess,HFNACTR),A_HVEC(IFNACTR,' ',A68_CHAR )),JFNACTR);
break;
case 6: 
 /* line 670: */
A_CALLPROC(GDNACTR_rowmodename,(VENACTR_typemess, &KFNACTR),(VENACTR_typemess, &KFNACTR,(GDNACTR_rowmodename).nonlocals));
XCNACTR = KFNACTR;
break;
case 7: 
 /* line 672: */
A_CALLPROC(GDNACTR_rowmodename,(VENACTR_typemess, &LFNACTR),(VENACTR_typemess, &LFNACTR,(GDNACTR_rowmodename).nonlocals));
XCNACTR = LFNACTR;
break;
case 8: 
 /* line 674: */
A_CALLPROC(GDNACTR_rowmodename,(VENACTR_typemess, &MFNACTR),(VENACTR_typemess, &MFNACTR,(GDNACTR_rowmodename).nonlocals));
XCNACTR = MFNACTR;
break;
case 9: 
 /* line 676: */
A_CALLPROC(GDNACTR_rowmodename,(VENACTR_typemess, &NFNACTR),(VENACTR_typemess, &NFNACTR,(GDNACTR_rowmodename).nonlocals));
XCNACTR = NFNACTR;
break;
case 10: 
 /* line 677: */
 /* line 679: */
KCNACTR_auxmodename( A_CALLPROC(UVMACTR_elementmode,(Mode),(Mode,(UVMACTR_elementmode).nonlocals)), &OFNACTR );
XCNACTR = A_VC_PLUS(VENACTR_typemess,OFNACTR);
break;
default: 
 /* line 680: */
 /* line 681: */
XCNACTR = A_HVEC(PFNACTR,'?',A68_CHAR );
break;
} 
} 
} 
A_PROC_EXIT(modename);
*ReturnedValue = (XCNACTR);
return;
} 
#undef NL

A68_VOID  RFNACTR_cfieldname(A68_149 * Sf, A68_VC  *ReturnedValue)
{ 
A68_VC  SFNACTR;  /* clause result */
A68_VC  TFNACTR;  /* OPERATORS - istruct -> vector */
A68_56 * UFNACTR;  /* OPERATORS - istruct -> vector */
A68_VC  VFNACTR;  /* avoid structure result */
A68_VC  WFNACTR;  /* avoid structure result */
A_PROC_ENTRY(cfieldname);
 /* line 687: */
 /* line 688: */
 /* line 689: */
UFNACTR = (&(Sf->Name)) ;
RMAAOSF_scanto( ' ', A_ISVEC(TFNACTR,UFNACTR,32,A68_CHAR ), &VFNACTR );
SNAAOSF_capitalised( VFNACTR, &WFNACTR );
SFNACTR = WFNACTR;
A_PROC_EXIT(cfieldname);
*ReturnedValue = (SFNACTR);
return;
} 
#undef NL

A68_VOID  ZFNACTR_select(A68_INT  Mode, A68_INT  Field, A68_VC  *ReturnedValue)
{ 
A68_VC  AGNACTR;  /* clause result */
A68_152  BGNACTR;  /* avoid structure result */
A68_VC  CGNACTR;  /* avoid structure result */
A_PROC_ENTRY(select);
 /* line 695: */
 /* line 696: */
 /* line 697: */
EVMACTR_structfields( Mode, &BGNACTR );
RFNACTR_cfieldname( (&A_VINDEX(BGNACTR,Field)), &CGNACTR );
AGNACTR = CGNACTR;
A_PROC_EXIT(select);
*ReturnedValue = (AGNACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  EGNACTR_builtinmode(A68_INT  Mode, A68_VC  *ReturnedValue)
{ 
A68_INT  FGNACTR_m A_UNUSED = {0};
A68_VC  IGNACTR;  /* clause result */
A68_VC  JGNACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  MGNACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  VGNACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  CHNACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  NJNACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  QJNACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  TJNACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  XJNACTR;  /* avoid structure result */
A68_VC  ZJNACTR = {0};  /* OPERATORS - skip to mode */
A_PROC_ENTRY(builtinmode);
 /* line 700: */
 /* line 701: */
{ 
FGNACTR_m = EOMACTR_deref(Mode);
 /* line 702: */
 /* line 703: */
switch ( FGNACTR_m )
{ 
case 1: 
{ 
(void)(WXIACTR_assert(HGNACTR, A68_FALSE));
 /* line 704: */
IGNACTR = JGNACTR;
} 
break;
case 2: 
{ 
(void)(WXIACTR_assert(LGNACTR, A68_FALSE));
 /* line 705: */
IGNACTR = MGNACTR;
} 
break;
case 3: 
 /* line 706: */
IGNACTR = OGNACTR;
break;
case 4: 
 /* line 707: */
IGNACTR = QGNACTR;
break;
case 5: 
 /* line 708: */
IGNACTR = SGNACTR;
break;
case 6: 
{ 
(void)(WXIACTR_assert(UGNACTR, A68_FALSE));
 /* line 709: */
IGNACTR = VGNACTR;
} 
break;
case 7: 
 /* line 710: */
IGNACTR = XGNACTR;
break;
case 8: 
 /* line 711: */
IGNACTR = ZGNACTR;
break;
case 9: 
{ 
(void)(WXIACTR_assert(BHNACTR, A68_FALSE));
 /* line 712: */
IGNACTR = CHNACTR;
} 
break;
case 10: 
if (MQIACTR_longlongoption)
{ 
IGNACTR = EHNACTR;
} 
else
{ 
 /* line 713: */
IGNACTR = GHNACTR;
} 
break;
case 11: 
 /* line 714: */
IGNACTR = IHNACTR;
break;
case 12: 
if (MQIACTR_longlongoption)
{ 
IGNACTR = KHNACTR;
} 
else
{ 
 /* line 715: */
IGNACTR = MHNACTR;
} 
break;
case 13: 
if (MQIACTR_longlongoption)
{ 
IGNACTR = OHNACTR;
} 
else
{ 
 /* line 716: */
IGNACTR = QHNACTR;
} 
break;
case 14: 
if (MQIACTR_longlongoption)
{ 
IGNACTR = SHNACTR;
} 
else
{ 
 /* line 717: */
IGNACTR = UHNACTR;
} 
break;
case 15: 
 /* line 718: */
IGNACTR = WHNACTR;
break;
case 16: 
if (MQIACTR_longlongoption)
{ 
IGNACTR = YHNACTR;
} 
else
{ 
 /* line 719: */
IGNACTR = AINACTR;
} 
break;
case 17: 
if (MQIACTR_longlongoption)
{ 
IGNACTR = CINACTR;
} 
else
{ 
 /* line 720: */
IGNACTR = EINACTR;
} 
break;
case 18: 
if (MQIACTR_longlongoption)
{ 
IGNACTR = GINACTR;
} 
else
{ 
 /* line 721: */
IGNACTR = IINACTR;
} 
break;
case 19: 
 /* line 722: */
IGNACTR = KINACTR;
break;
case 20: 
if (MQIACTR_longlongoption)
{ 
IGNACTR = MINACTR;
} 
else
{ 
 /* line 723: */
IGNACTR = OINACTR;
} 
break;
case 21: 
if (MQIACTR_longlongoption)
{ 
IGNACTR = QINACTR;
} 
else
{ 
 /* line 724: */
IGNACTR = SINACTR;
} 
break;
case 22: 
if (MQIACTR_longlongoption)
{ 
IGNACTR = UINACTR;
} 
else
{ 
 /* line 725: */
IGNACTR = WINACTR;
} 
break;
case 23: 
 /* line 726: */
IGNACTR = YINACTR;
break;
case 24: 
if (MQIACTR_longlongoption)
{ 
IGNACTR = AJNACTR;
} 
else
{ 
 /* line 727: */
IGNACTR = CJNACTR;
} 
break;
case 25: 
if (MQIACTR_longlongoption)
{ 
IGNACTR = EJNACTR;
} 
else
{ 
 /* line 728: */
IGNACTR = GJNACTR;
} 
break;
case 26: 
 /* line 729: */
IGNACTR = IJNACTR;
break;
case 27: 
 /* line 730: */
IGNACTR = KJNACTR;
break;
case 28: 
{ 
(void)(WXIACTR_assert(MJNACTR, A68_FALSE));
 /* line 731: */
IGNACTR = NJNACTR;
} 
break;
case 29: 
{ 
(void)(WXIACTR_assert(PJNACTR, A68_FALSE));
 /* line 732: */
IGNACTR = QJNACTR;
} 
break;
case 30: 
{ 
(void)(WXIACTR_assert(SJNACTR, A68_FALSE));
 /* line 733: */
IGNACTR = TJNACTR;
} 
break;
default: 
ROAAOSF_whole( Mode, 0, &XJNACTR );
(void)(WXIACTR_assert(A_VC_PLUS(A_VC_PLUS(WJNACTR,XJNACTR),YJNACTR), A68_FALSE));
 /* line 734: */
 /* line 735: */
IGNACTR = ZJNACTR;
break;
} 
} 
A_PROC_EXIT(builtinmode);
*ReturnedValue = (IGNACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  CKNACTR_givectype(A68_INT  Mode, A68_BOOL  Tagged, A68_VC  *ReturnedValue)
{ 
A68_INT  DKNACTR_basicmode A_UNUSED = {0};
A68_BOOL  EKNACTR;  /* clause result */
A68_VC  GKNACTR;  /* clause result */
A68_VC  IKNACTR;  /* avoid structure result */
A68_VC  KKNACTR;  /* clause result */
A68_VC  OKNACTR;  /* avoid structure result */
A68_VC  PKNACTR;  /* clause result */
A68_VC  QKNACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(givectype);
 /* line 741: */
 /* line 742: */
 /* line 743: */
{ 
DKNACTR_basicmode = EOMACTR_deref(Mode);
 /* line 744: */
 /* line 745: */
 /* line 746: */
EKNACTR = (DKNACTR_basicmode<UFAACTR_firstnonfixedmode);
if (EKNACTR)
{ 
 /* line 747: */
 /* line 748: */
EGNACTR_builtinmode( DKNACTR_basicmode, &IKNACTR );
GKNACTR = A_VC_PLUS(HKNACTR,IKNACTR);
} 
else
{ 
if (Tagged)
{ 
KKNACTR = LKNACTR;
} 
else
{ 
KKNACTR = NKNACTR;
} 
 /* line 749: */
ROAAOSF_whole( DKNACTR_basicmode, 0, &OKNACTR );
GKNACTR = A_VC_PLUS(KKNACTR,OKNACTR);
} 
} 
 /* line 750: */
 /* line 751: */
PKNACTR = A_VC_PLUS(A_VC_PLUS(GKNACTR,A_HVEC(QKNACTR,' ',A68_CHAR )),A_C_TIMES('*',(Mode/VFAACTR_refmark)));
A_PROC_EXIT(givectype);
*ReturnedValue = (PKNACTR);
return;
} 
#undef NL

A68_INT  TKNACTR_givecvariabletype(A68_INT  Mode, A68_BOOL  Identity)
{ 
A68_INT  UKNACTR;  /* clause result */
A68_INT  VKNACTR;  /* clause result */
A_PROC_ENTRY(givecvariabletype);
 /* line 754: */
 /* line 756: */
 /* line 757: */
if (Identity)
{ 
if (FRMACTR_isfirmarray(Mode))
{ 
UKNACTR = ETMACTR_derefmodeok(Mode);
} 
else
{ 
 /* line 758: */
 /* line 759: */
UKNACTR = Mode;
} 
} 
else
{ 
if (FRMACTR_isfirmarray(Mode))
{ 
VKNACTR = ETMACTR_derefmodeok(Mode);
} 
else
{ 
VKNACTR = Mode;
} 
 /* line 760: */
UKNACTR = ETMACTR_derefmodeok(VKNACTR);
} 
A_PROC_EXIT(givecvariabletype);
return( UKNACTR );
} 
#undef NL

A68_VOID  XKNACTR_ctype(A68_INT  Mode, A68_VC  *ReturnedValue)
{ 
A68_VC  YKNACTR;  /* clause result */
A68_VC  ZKNACTR;  /* avoid structure result */
A_PROC_ENTRY(ctype);
 /* line 763: */
CKNACTR_givectype( TKNACTR_givecvariabletype(Mode, A68_TRUE), A68_FALSE, &ZKNACTR );
YKNACTR = ZKNACTR;
A_PROC_EXIT(ctype);
*ReturnedValue = (YKNACTR);
return;
} 
#undef NL

A68_VOID  BLNACTR_cvartype(A68_INT  Mode, A68_VC  *ReturnedValue)
{ 
A68_VC  CLNACTR;  /* clause result */
A68_VC  DLNACTR;  /* avoid structure result */
A_PROC_ENTRY(cvartype);
 /* line 766: */
CKNACTR_givectype( Mode, A68_FALSE, &DLNACTR );
CLNACTR = DLNACTR;
A_PROC_EXIT(cvartype);
*ReturnedValue = (CLNACTR);
return;
} 
#undef NL

A68_VOID  FLNACTR_cast(A68_INT  Mode, A68_VC  *ReturnedValue)
{ 
A68_VC  GLNACTR;  /* clause result */
A68_VC  HLNACTR;  /* avoid structure result */
A68_VC  ILNACTR;  /* avoid structure result */
A_PROC_ENTRY(cast);
 /* line 769: */
XKNACTR_ctype( Mode, &HLNACTR );
JIAACTR_bracket( HLNACTR, &ILNACTR );
GLNACTR = ILNACTR;
A_PROC_EXIT(cast);
*ReturnedValue = (GLNACTR);
return;
} 
#undef NL

A68_VOID  KLNACTR_csizeof(A68_INT  Mode, A68_VC  *ReturnedValue)
{ 
A68_VC  MLNACTR;  /* clause result */
A68_VC  OLNACTR;  /* avoid structure result */
A_PROC_ENTRY(csizeof);
EGNACTR_builtinmode( Mode, &OLNACTR );
MLNACTR = A_VC_PLUS(NLNACTR,OLNACTR);
A_PROC_EXIT(csizeof);
*ReturnedValue = (MLNACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  QLNACTR_ctag(A68_INT  Mode, A68_VC  *ReturnedValue)
{ 
A68_VC  SLNACTR;  /* clause result */
A68_VC  ULNACTR;  /* avoid structure result */
A_PROC_ENTRY(ctag);
 /* line 774: */
ROAAOSF_whole( Mode, 0, &ULNACTR );
SLNACTR = A_VC_PLUS(TLNACTR,ULNACTR);
A_PROC_EXIT(ctag);
*ReturnedValue = (SLNACTR);
return;
} 
#undef NL

A68_VOID  WLNACTR_ctaggedtype(A68_INT  Mode, A68_VC  *ReturnedValue)
{ 
A68_VC  XLNACTR;  /* clause result */
A68_VC  YLNACTR;  /* avoid structure result */
A_PROC_ENTRY(ctaggedtype);
 /* line 777: */
CKNACTR_givectype( TKNACTR_givecvariabletype(Mode, A68_TRUE), A68_TRUE, &YLNACTR );
XLNACTR = YLNACTR;
A_PROC_EXIT(ctaggedtype);
*ReturnedValue = (XLNACTR);
return;
} 
#undef NL

A68_VOID  CMNACTR_alignnextstructfield(A68_INT  Fieldmode, A68_INT  Stream)
{ 
A68_193  DMNACTR;  /* collateral clause result */
A68_137  GMNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  HMNACTR;  /* YIELD */
A68_VC  IMNACTR;  /* avoid structure result */
A68_137  JMNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_137  MMNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  NMNACTR;  /* YIELD */
A68_VC  OMNACTR;  /* avoid structure result */
A68_137  PMNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_137  QMNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  RMNACTR;  /* YIELD */
A68_137  SMNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_136  TMNACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  UMNACTR;  /* optbool result */
A68_193  VMNACTR;  /* collateral clause result */
A68_137  YMNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ZMNACTR;  /* YIELD */
A68_VC  ANNACTR;  /* avoid structure result */
A68_137  BNNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_137  ENNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  FNNACTR;  /* YIELD */
A68_VC  GNNACTR;  /* avoid structure result */
A68_137  HNNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_137  INNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  JNNACTR;  /* YIELD */
A68_137  KNNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_136  LNNACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(alignnextstructfield);
 /* line 788: */
 /* line 789: */
 /* line 790: */
if (Fieldmode<PFAACTR_vectorrowofcharmode)
{ 
 /* line 791: */
HMNACTR = FMNACTR ;
DMNACTR.data[0] = A_UNITE(GMNACTR,mode2,2,HMNACTR);
EGNACTR_builtinmode( Fieldmode, &IMNACTR );
DMNACTR.data[1] = A_UNITE(JMNACTR,mode2,2,IMNACTR);
 /* line 792: */
NMNACTR = LMNACTR ;
DMNACTR.data[2] = A_UNITE(MMNACTR,mode2,2,NMNACTR);
ROAAOSF_whole( ZLNACTR_padno+=1, 0, &OMNACTR );
DMNACTR.data[3] = A_UNITE(PMNACTR,mode2,2,OMNACTR);
 /* line 793: */
RMNACTR = ')' ;
DMNACTR.data[4] = A_UNITE(QMNACTR,mode1,1,RMNACTR);
DMNACTR.data[5] = A_UNITE(SMNACTR,mode4,4,EIAACTR_cnewline);
 /* line 794: */
(void)(MDMACTR_writecstream(A_HISVEC(TMNACTR,DMNACTR,6,A68_137 ), Stream));
} 
else
{ 
UMNACTR = (Fieldmode<VFAACTR_refmark);
if ( UMNACTR )
{ /* line 795: */
UMNACTR = XRMACTR_isistruct(Fieldmode);
}
 /* line 796: */
if (UMNACTR)
{ 
 /* line 797: */
ZMNACTR = XMNACTR ;
VMNACTR.data[0] = A_UNITE(YMNACTR,mode2,2,ZMNACTR);
CKNACTR_givectype( Fieldmode, A68_FALSE, &ANNACTR );
VMNACTR.data[1] = A_UNITE(BNNACTR,mode2,2,ANNACTR);
 /* line 798: */
FNNACTR = DNNACTR ;
VMNACTR.data[2] = A_UNITE(ENNACTR,mode2,2,FNNACTR);
ROAAOSF_whole( ZLNACTR_padno+=1, 0, &GNNACTR );
VMNACTR.data[3] = A_UNITE(HNNACTR,mode2,2,GNNACTR);
 /* line 799: */
JNNACTR = ')' ;
VMNACTR.data[4] = A_UNITE(INNACTR,mode1,1,JNNACTR);
VMNACTR.data[5] = A_UNITE(KNNACTR,mode4,4,EIAACTR_cnewline);
 /* line 800: */
(void)(MDMACTR_writecstream(A_HISVEC(LNNACTR,VMNACTR,6,A68_137 ), Stream));
} 
} 
A_PROC_EXIT(alignnextstructfield);
return;
} 
#undef NL

A_STATIC A68_VOID  PNNACTR_writectypedef(A68_INT  Underefedmode, A68_INT  Stream, A68_BOOL  Pre_declare)
{ 
A68_INT  QNNACTR_mode A_UNUSED = {0};
A68_BOOL  RNNACTR;  /* optbool result */
A68_BITS  SNNACTR;  /* ADICOPS - >= */
A68_BOOL  TNNACTR;  /* clause result */
A68_VC  WNNACTR;  /* avoid structure result */
A68_VC  XNNACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_153 * YNNACTR_entry A_UNUSED = {0};
A68_VC  BONACTR_typedef A_UNUSED = {0};
A68_VC  EONACTR;  /* clause result */
A68_VC  GONACTR;  /* avoid structure result */
A68_VC  KONACTR_comment A_UNUSED = {0};
A68_VC  LONACTR;  /* avoid structure result */
A68_VC  MONACTR_typedefname A_UNUSED = {0};
A68_93  OONACTR_emittagtypedef;   /* proc value of non-global proc */
A68_97  IPNACTR_emitdeflextypedef;   /* proc value of non-global proc */
A68_94  PQNACTR_emitincompletetype;   /* proc value of non-global proc */
A68_94  BRNACTR_emitproctypedef;   /* proc value of non-global proc */
A68_94  IVNACTR_emitvectortypedef;   /* proc value of non-global proc */
A68_94  GWNACTR_emitarraytypedef;   /* proc value of non-global proc */
A68_193  HXNACTR;  /* collateral clause result */
A68_137  IXNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  JXNACTR;  /* avoid structure result */
A68_137  KXNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_137  LXNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  MXNACTR;  /* YIELD */
A68_137  NXNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_137  QXNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  RXNACTR;  /* YIELD */
A68_137  SXNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_136  TXNACTR;  /* OPERATORS - istruct -> vector */
A68_INT  UXNACTR_deflexmode A_UNUSED = {0};
A68_BOOL  VXNACTR;  /* clause result */
A68_151  WXNACTR;  /* avoid structure result */
A68_151  XXNACTR_umodes A_UNUSED = {0};
A68_INT * YXNACTR_umode A_UNUSED = {0};
A68_INT  ZXNACTR;  /* forall loop counter */
A68_BITS  AYNACTR;  /* ADICOPS - >= */
A68_204  BYNACTR;  /* collateral clause result */
A68_137  EYNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  FYNACTR;  /* YIELD */
A68_VC  GYNACTR;  /* avoid structure result */
A68_137  HYNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_137  KYNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  LYNACTR;  /* YIELD */
A68_137  MYNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_136  NYNACTR;  /* OPERATORS - istruct -> vector */
A68_INT  OYNACTR_i A_UNUSED = {0};
A68_INT  PYNACTR;  /* to part of loop */
A68_INT  QYNACTR_thismode A_UNUSED = {0};
A68_BOOL  RYNACTR;  /* clause result */
A68_205  SYNACTR;  /* collateral clause result */
A68_VC  TYNACTR;  /* avoid structure result */
A68_137  UYNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_137  XYNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  YYNACTR;  /* YIELD */
A68_VC  ZYNACTR;  /* avoid structure result */
A68_137  AZNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_137  BZNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  CZNACTR;  /* YIELD */
A68_137  DZNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_136  EZNACTR;  /* OPERATORS - istruct -> vector */
A68_201  FZNACTR;  /* collateral clause result */
A68_137  IZNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  JZNACTR;  /* YIELD */
A68_137  KZNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_136  LZNACTR;  /* OPERATORS - istruct -> vector */
A68_INT  MZNACTR_deflexmode A_UNUSED = {0};
A68_BOOL  NZNACTR;  /* clause result */
A68_152  OZNACTR;  /* avoid structure result */
A68_152  PZNACTR_fields A_UNUSED = {0};
A68_149 * QZNACTR_field A_UNUSED = {0};
A68_INT  RZNACTR;  /* forall loop counter */
A68_BITS  SZNACTR;  /* ADICOPS - >= */
A68_201  TZNACTR;  /* collateral clause result */
A68_VC  WZNACTR;  /* avoid structure result */
A68_VC  XZNACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_137  YZNACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ZZNACTR;  /* YIELD */
A68_137  AAOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_136  BAOACTR;  /* OPERATORS - istruct -> vector */
A68_149 * CAOACTR_field A_UNUSED = {0};
A68_INT  DAOACTR;  /* forall loop counter */
A68_205  EAOACTR;  /* collateral clause result */
A68_VC  FAOACTR;  /* avoid structure result */
A68_137  GAOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_137  HAOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  IAOACTR;  /* YIELD */
A68_VC  JAOACTR;  /* avoid structure result */
A68_137  KAOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_137  LAOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  MAOACTR;  /* YIELD */
A68_137  NAOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_136  OAOACTR;  /* OPERATORS - istruct -> vector */
A68_201  PAOACTR;  /* collateral clause result */
A68_137  SAOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  TAOACTR;  /* YIELD */
A68_137  UAOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_136  VAOACTR;  /* OPERATORS - istruct -> vector */
A68_INT  WAOACTR_elemmode A_UNUSED = {0};
A68_BITS  XAOACTR;  /* ADICOPS - >= */
A68_197  YAOACTR;  /* collateral clause result */
A68_VC  BBOACTR;  /* avoid structure result */
A68_137  CBOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  DBOACTR;  /* YIELD */
A68_137  EBOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  FBOACTR;  /* YIELD */
A68_137  GBOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  HBOACTR;  /* YIELD */
A68_VC  IBOACTR;  /* avoid structure result */
A68_137  JBOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_137  KBOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  LBOACTR;  /* YIELD */
A68_VC  MBOACTR;  /* avoid structure result */
A68_137  NBOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_137  QBOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  RBOACTR;  /* YIELD */
A68_137  SBOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_136  TBOACTR;  /* OPERATORS - istruct -> vector */
A68_INT  UBOACTR_elemmode A_UNUSED = {0};
A68_BOOL  VBOACTR;  /* optbool result */
A68_BOOL  WBOACTR_rtn A_UNUSED = {0};
A68_209  XBOACTR;  /* collateral clause result */
A68_VC  ACOACTR;  /* clause result */
A68_VC  CCOACTR;  /* avoid structure result */
A68_137  ECOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  FCOACTR;  /* YIELD */
A68_137  GCOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  HCOACTR;  /* YIELD */
A68_VC  ICOACTR;  /* avoid structure result */
A68_137  JCOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_137  KCOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  LCOACTR;  /* YIELD */
A68_137  OCOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  PCOACTR;  /* YIELD */
A68_137  QCOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  RCOACTR;  /* YIELD */
A68_137  UCOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  VCOACTR;  /* YIELD */
A68_VC  WCOACTR;  /* avoid structure result */
A68_137  XCOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_137  ADOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  BDOACTR;  /* YIELD */
A68_137  CDOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  DDOACTR;  /* YIELD */
A68_137  GDOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  HDOACTR;  /* YIELD */
A68_137  KDOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  LDOACTR;  /* YIELD */
A68_137  MDOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_136  NDOACTR;  /* OPERATORS - istruct -> vector */
A68_BITS * ODOACTR;  /* YIELD */
A68_BITS * PDOACTR;  /* YIELD */
A_PROC_ENTRY(writectypedef);
 /* line 830: */
{ 
QNNACTR_mode = EOMACTR_deref(Underefedmode);
 /* line 837: */
 /* line 838: */
RNNACTR = (TKNACTR_givecvariabletype(Underefedmode, A68_TRUE)<VFAACTR_refmark);
if ( RNNACTR )
{ /* line 839: */
RNNACTR = (QNNACTR_mode>=UFAACTR_firstnonfixedmode);
}
if ( RNNACTR )
{ /* line 840: */
SNNACTR = LTMACTR_flags(QNNACTR_mode) ;
RNNACTR = (!A_LB_GE(SNNACTR,AOMACTR_typedefoutput));
}
 /* line 841: */
TNNACTR = RNNACTR;
if (TNNACTR)
{ 
ROAAOSF_whole( QNNACTR_mode, 0, &WNNACTR );
(void)(KNMACTR_debugmessage(5, A_VC_PLUS(A_VC_PLUS(VNNACTR,WNNACTR),A_HVEC(XNNACTR,')',A68_CHAR ))));
 /* line 843: */
YNNACTR_entry = (&A_R1INDEX(WNMACTR_modes,QNNACTR_mode));
 /* line 845: */
BONACTR_typedef = AONACTR;
 /* line 846: */
 /* line 847: */
if (AQIACTR_verboseoption)
{ 
 /* line 848: */
 /* line 849: */
WCNACTR_modename( QNNACTR_mode, &GONACTR );
EONACTR = A_VC_PLUS(A_VC_PLUS(FONACTR,GONACTR),HONACTR);
} 
else
{ 
EONACTR = JONACTR;
} 
KONACTR_comment = EONACTR;
 /* line 850: */
BLNACTR_cvartype( QNNACTR_mode, &LONACTR );
MONACTR_typedefname = LONACTR;
 /* line 852: */
A_CLOSURE( OONACTR_emittagtypedef, PONACTR_emittagtypedef, QONACTR_emittagtypedef );
(( QONACTR_emittagtypedef * ) ( OONACTR_emittagtypedef.nonlocals )) -> BONACTR_typedef = BONACTR_typedef;
(( QONACTR_emittagtypedef * ) ( OONACTR_emittagtypedef.nonlocals )) -> KONACTR_comment = KONACTR_comment;
(( QONACTR_emittagtypedef * ) ( OONACTR_emittagtypedef.nonlocals )) -> Stream = Stream;
 /* line 860: */
A_CLOSURE( IPNACTR_emitdeflextypedef, JPNACTR_emitdeflextypedef, KPNACTR_emitdeflextypedef );
(( KPNACTR_emitdeflextypedef * ) ( IPNACTR_emitdeflextypedef.nonlocals )) -> Stream = Stream;
(( KPNACTR_emitdeflextypedef * ) ( IPNACTR_emitdeflextypedef.nonlocals )) -> KONACTR_comment = KONACTR_comment;
 /* line 875: */
 /* line 876: */
A_CLOSURE( PQNACTR_emitincompletetype, QQNACTR_emitincompletetype, RQNACTR_emitincompletetype );
(( RQNACTR_emitincompletetype * ) ( PQNACTR_emitincompletetype.nonlocals )) -> YNNACTR_entry = YNNACTR_entry;
(( RQNACTR_emitincompletetype * ) ( PQNACTR_emitincompletetype.nonlocals )) -> QNNACTR_mode = QNNACTR_mode;
(( RQNACTR_emitincompletetype * ) ( PQNACTR_emitincompletetype.nonlocals )) -> Stream = Stream;
 /* line 882: */
 /* line 883: */
 /* line 885: */
A_CLOSURE( BRNACTR_emitproctypedef, CRNACTR_emitproctypedef, DRNACTR_emitproctypedef );
(( DRNACTR_emitproctypedef * ) ( BRNACTR_emitproctypedef.nonlocals )) -> Pre_declare = Pre_declare;
(( DRNACTR_emitproctypedef * ) ( BRNACTR_emitproctypedef.nonlocals )) -> PQNACTR_emitincompletetype = PQNACTR_emitincompletetype;
(( DRNACTR_emitproctypedef * ) ( BRNACTR_emitproctypedef.nonlocals )) -> YNNACTR_entry = YNNACTR_entry;
(( DRNACTR_emitproctypedef * ) ( BRNACTR_emitproctypedef.nonlocals )) -> QNNACTR_mode = QNNACTR_mode;
(( DRNACTR_emitproctypedef * ) ( BRNACTR_emitproctypedef.nonlocals )) -> Stream = Stream;
(( DRNACTR_emitproctypedef * ) ( BRNACTR_emitproctypedef.nonlocals )) -> OONACTR_emittagtypedef = OONACTR_emittagtypedef;
 /* line 951: */
 /* line 952: */
 /* line 953: */
A_CLOSURE( IVNACTR_emitvectortypedef, JVNACTR_emitvectortypedef, KVNACTR_emitvectortypedef );
(( KVNACTR_emitvectortypedef * ) ( IVNACTR_emitvectortypedef.nonlocals )) -> Pre_declare = Pre_declare;
(( KVNACTR_emitvectortypedef * ) ( IVNACTR_emitvectortypedef.nonlocals )) -> PQNACTR_emitincompletetype = PQNACTR_emitincompletetype;
(( KVNACTR_emitvectortypedef * ) ( IVNACTR_emitvectortypedef.nonlocals )) -> QNNACTR_mode = QNNACTR_mode;
(( KVNACTR_emitvectortypedef * ) ( IVNACTR_emitvectortypedef.nonlocals )) -> Stream = Stream;
(( KVNACTR_emitvectortypedef * ) ( IVNACTR_emitvectortypedef.nonlocals )) -> OONACTR_emittagtypedef = OONACTR_emittagtypedef;
(( KVNACTR_emitvectortypedef * ) ( IVNACTR_emitvectortypedef.nonlocals )) -> YNNACTR_entry = YNNACTR_entry;
(( KVNACTR_emitvectortypedef * ) ( IVNACTR_emitvectortypedef.nonlocals )) -> IPNACTR_emitdeflextypedef = IPNACTR_emitdeflextypedef;
 /* line 976: */
 /* line 977: */
 /* line 978: */
A_CLOSURE( GWNACTR_emitarraytypedef, HWNACTR_emitarraytypedef, IWNACTR_emitarraytypedef );
(( IWNACTR_emitarraytypedef * ) ( GWNACTR_emitarraytypedef.nonlocals )) -> Pre_declare = Pre_declare;
(( IWNACTR_emitarraytypedef * ) ( GWNACTR_emitarraytypedef.nonlocals )) -> PQNACTR_emitincompletetype = PQNACTR_emitincompletetype;
(( IWNACTR_emitarraytypedef * ) ( GWNACTR_emitarraytypedef.nonlocals )) -> QNNACTR_mode = QNNACTR_mode;
(( IWNACTR_emitarraytypedef * ) ( GWNACTR_emitarraytypedef.nonlocals )) -> Stream = Stream;
(( IWNACTR_emitarraytypedef * ) ( GWNACTR_emitarraytypedef.nonlocals )) -> OONACTR_emittagtypedef = OONACTR_emittagtypedef;
(( IWNACTR_emitarraytypedef * ) ( GWNACTR_emitarraytypedef.nonlocals )) -> YNNACTR_entry = YNNACTR_entry;
(( IWNACTR_emitarraytypedef * ) ( GWNACTR_emitarraytypedef.nonlocals )) -> IPNACTR_emitdeflextypedef = IPNACTR_emitdeflextypedef;
 /* line 1001: */
 /* line 1003: */
switch ( IOMACTR_modetype(QNNACTR_mode) )
{ 
case 1: 
 /* line 1005: */
HXNACTR.data[0] = A_UNITE(IXNACTR,mode2,2,BONACTR_typedef);
XKNACTR_ctype( HTMACTR_auxmode(QNNACTR_mode), &JXNACTR );
HXNACTR.data[1] = A_UNITE(KXNACTR,mode2,2,JXNACTR);
MXNACTR = ' ' ;
HXNACTR.data[2] = A_UNITE(LXNACTR,mode1,1,MXNACTR);
 /* line 1006: */
HXNACTR.data[3] = A_UNITE(NXNACTR,mode2,2,MONACTR_typedefname);
 /* line 1007: */
RXNACTR = A_VC_PLUS(PXNACTR,KONACTR_comment) ;
HXNACTR.data[4] = A_UNITE(QXNACTR,mode2,2,RXNACTR);
HXNACTR.data[5] = A_UNITE(SXNACTR,mode4,4,EIAACTR_cnewline);
 /* line 1008: */
 /* line 1009: */
 /* line 1011: */
(void)(MDMACTR_writecstream(A_HISVEC(TXNACTR,HXNACTR,6,A68_137 ), Stream));
break;
case 2: 
 /* line 1013: */
(void)(A_CALLPROC(BRNACTR_emitproctypedef,(),((BRNACTR_emitproctypedef).nonlocals)));
break;
case 3: 
 /* line 1015: */
(void)(A_CALLPROC(BRNACTR_emitproctypedef,(),((BRNACTR_emitproctypedef).nonlocals)));
break;
case 4: 
 /* line 1016: */
 /* line 1018: */
if (Pre_declare)
{ 
(void)(A_CALLPROC(PQNACTR_emitincompletetype,(),((PQNACTR_emitincompletetype).nonlocals)));
} 
else
{ 
{ 
UXNACTR_deflexmode = HCNACTR_finddeflexmode(QNNACTR_mode);
 /* line 1019: */
 /* line 1020: */
 /* line 1021: */
VXNACTR = (UXNACTR_deflexmode==QNNACTR_mode);
if (VXNACTR)
{ 
LUMACTR_modelistextra( QNNACTR_mode, &WXNACTR );
XXNACTR_umodes = WXNACTR;
 /* line 1023: */
 /* line 1024: */
ZXNACTR = XXNACTR_umodes.upb -1;
YXNACTR_umode = XXNACTR_umodes.data;
for (;ZXNACTR-- >= 0;
(YXNACTR_umode++
) )
{
 /* line 1025: */
(void)(PNNACTR_writectypedef((*YXNACTR_umode), Stream, A68_FALSE));
}
 /* line 1027: */
 /* line 1028: */
 /* line 1030: */
AYNACTR = LTMACTR_flags(QNNACTR_mode) ;
if (!A_LB_GE(AYNACTR,AOMACTR_typedefoutput))
{ 
FYNACTR = DYNACTR ;
BYNACTR.data[0] = A_UNITE(EYNACTR,mode2,2,FYNACTR);
 /* line 1031: */
QLNACTR_ctag( QNNACTR_mode, &GYNACTR );
BYNACTR.data[1] = A_UNITE(HYNACTR,mode2,2,GYNACTR);
 /* line 1033: */
LYNACTR = JYNACTR ;
BYNACTR.data[2] = A_UNITE(KYNACTR,mode2,2,LYNACTR);
BYNACTR.data[3] = A_UNITE(MYNACTR,mode4,4,EIAACTR_cnewline);
 /* line 1034: */
(void)(MDMACTR_writecstream(A_HISVEC(NYNACTR,BYNACTR,4,A68_137 ), Stream));
 /* line 1035: */
 /* line 1036: */
PYNACTR = XXNACTR_umodes.upb;
for ( OYNACTR_i = 1;
OYNACTR_i <= PYNACTR;
OYNACTR_i += 1 )
{ 
 /* line 1037: */
{ 
QYNACTR_thismode = (*(&A_VINDEX(XXNACTR_umodes,OYNACTR_i)));
 /* line 1038: */
 /* line 1039: */
 /* line 1041: */
RYNACTR = (QYNACTR_thismode!=UEAACTR_voidmode);
if (RYNACTR)
{ 
WLNACTR_ctaggedtype( QYNACTR_thismode, &TYNACTR );
SYNACTR.data[0] = A_UNITE(UYNACTR,mode2,2,TYNACTR);
 /* line 1042: */
YYNACTR = WYNACTR ;
SYNACTR.data[1] = A_UNITE(XYNACTR,mode2,2,YYNACTR);
ROAAOSF_whole( OYNACTR_i, 0, &ZYNACTR );
SYNACTR.data[2] = A_UNITE(AZNACTR,mode2,2,ZYNACTR);
 /* line 1044: */
CZNACTR = ';' ;
SYNACTR.data[3] = A_UNITE(BZNACTR,mode1,1,CZNACTR);
SYNACTR.data[4] = A_UNITE(DZNACTR,mode4,4,EIAACTR_cnewline);
 /* line 1045: */
 /* line 1046: */
(void)(MDMACTR_writecstream(A_HISVEC(EZNACTR,SYNACTR,5,A68_137 ), Stream));
} 
} 
}
 /* line 1048: */
 /* line 1047: */
JZNACTR = HZNACTR ;
FZNACTR.data[0] = A_UNITE(IZNACTR,mode2,2,JZNACTR);
FZNACTR.data[1] = A_UNITE(KZNACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(LZNACTR,FZNACTR,2,A68_137 ), Stream));
 /* line 1049: */
 /* line 1050: */
 /* line 1051: */
(void)(A_CALLPROC(OONACTR_emittagtypedef,(QNNACTR_mode),(QNNACTR_mode,(OONACTR_emittagtypedef).nonlocals)));
} 
} 
else
{ 
 /* line 1052: */
 /* line 1054: */
(void)(A_CALLPROC(IPNACTR_emitdeflextypedef,(QNNACTR_mode, UXNACTR_deflexmode),(QNNACTR_mode, UXNACTR_deflexmode,(IPNACTR_emitdeflextypedef).nonlocals)));
} 
} 
} 
break;
case 5: 
 /* line 1055: */
 /* line 1057: */
if (Pre_declare)
{ 
(void)(A_CALLPROC(PQNACTR_emitincompletetype,(),((PQNACTR_emitincompletetype).nonlocals)));
} 
else
{ 
{ 
MZNACTR_deflexmode = HCNACTR_finddeflexmode(QNNACTR_mode);
 /* line 1058: */
 /* line 1059: */
 /* line 1060: */
NZNACTR = (MZNACTR_deflexmode==QNNACTR_mode);
if (NZNACTR)
{ 
EVMACTR_structfields( QNNACTR_mode, &OZNACTR );
PZNACTR_fields = OZNACTR;
 /* line 1062: */
 /* line 1063: */
RZNACTR = PZNACTR_fields.upb -1;
QZNACTR_field = PZNACTR_fields.data;
for (;RZNACTR-- >= 0;
(QZNACTR_field++
) )
{
 /* line 1064: */
 /* line 1065: */
(void)(PNNACTR_writectypedef((*(&(QZNACTR_field->Mode))), Stream, A68_FALSE));
}
 /* line 1067: */
 /* line 1068: */
 /* line 1070: */
SZNACTR = LTMACTR_flags(QNNACTR_mode) ;
if (!A_LB_GE(SZNACTR,AOMACTR_typedefoutput))
{ 
QLNACTR_ctag( QNNACTR_mode, &WZNACTR );
ZZNACTR = A_VC_PLUS(A_VC_PLUS(VZNACTR,WZNACTR),A_HVEC(XZNACTR,'{',A68_CHAR )) ;
TZNACTR.data[0] = A_UNITE(YZNACTR,mode2,2,ZZNACTR);
TZNACTR.data[1] = A_UNITE(AAOACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(BAOACTR,TZNACTR,2,A68_137 ), Stream));
 /* line 1071: */
 /* line 1072: */
DAOACTR = PZNACTR_fields.upb -1;
CAOACTR_field = PZNACTR_fields.data;
for (;DAOACTR-- >= 0;
(CAOACTR_field++
) )
{
 /* line 1074: */
WLNACTR_ctaggedtype( (*(&(CAOACTR_field->Mode))), &FAOACTR );
EAOACTR.data[0] = A_UNITE(GAOACTR,mode2,2,FAOACTR);
 /* line 1075: */
IAOACTR = ' ' ;
EAOACTR.data[1] = A_UNITE(HAOACTR,mode1,1,IAOACTR);
RFNACTR_cfieldname( CAOACTR_field, &JAOACTR );
EAOACTR.data[2] = A_UNITE(KAOACTR,mode2,2,JAOACTR);
 /* line 1076: */
MAOACTR = ';' ;
EAOACTR.data[3] = A_UNITE(LAOACTR,mode1,1,MAOACTR);
EAOACTR.data[4] = A_UNITE(NAOACTR,mode4,4,EIAACTR_cnewline);
 /* line 1077: */
(void)(MDMACTR_writecstream(A_HISVEC(OAOACTR,EAOACTR,5,A68_137 ), Stream));
 /* line 1078: */
 /* line 1079: */
(void)(CMNACTR_alignnextstructfield((*(&(CAOACTR_field->Mode))), Stream));
}
 /* line 1080: */
TAOACTR = RAOACTR ;
PAOACTR.data[0] = A_UNITE(SAOACTR,mode2,2,TAOACTR);
PAOACTR.data[1] = A_UNITE(UAOACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(VAOACTR,PAOACTR,2,A68_137 ), Stream));
 /* line 1081: */
 /* line 1082: */
 /* line 1083: */
(void)(A_CALLPROC(OONACTR_emittagtypedef,(QNNACTR_mode),(QNNACTR_mode,(OONACTR_emittagtypedef).nonlocals)));
} 
} 
else
{ 
 /* line 1084: */
 /* line 1086: */
(void)(A_CALLPROC(IPNACTR_emitdeflextypedef,(QNNACTR_mode, MZNACTR_deflexmode),(QNNACTR_mode, MZNACTR_deflexmode,(IPNACTR_emitdeflextypedef).nonlocals)));
} 
} 
} 
break;
case 6: 
 /* line 1087: */
 /* line 1089: */
if (Pre_declare)
{ 
 /* line 1090: */
(void)(A_CALLPROC(PQNACTR_emitincompletetype,(),((PQNACTR_emitincompletetype).nonlocals)));
} 
else
{ 
WAOACTR_elemmode = A_CALLPROC(UVMACTR_elementmode,(QNNACTR_mode),(QNNACTR_mode,(UVMACTR_elementmode).nonlocals));
 /* line 1091: */
(void)(PNNACTR_writectypedef(WAOACTR_elemmode, Stream, A68_FALSE));
 /* line 1093: */
 /* line 1094: */
 /* line 1096: */
XAOACTR = LTMACTR_flags(QNNACTR_mode) ;
if (!A_LB_GE(XAOACTR,AOMACTR_typedefoutput))
{ 
 /* line 1097: */
WLNACTR_ctaggedtype( WAOACTR_elemmode, &BBOACTR );
DBOACTR = A_VC_PLUS(ABOACTR,BBOACTR) ;
YAOACTR.data[0] = A_UNITE(CBOACTR,mode2,2,DBOACTR);
 /* line 1098: */
FBOACTR = ',' ;
YAOACTR.data[1] = A_UNITE(EBOACTR,mode1,1,FBOACTR);
 /* line 1099: */
 /* line 1100: */
if (VUMACTR_intextra(QNNACTR_mode)==0)
{ 
HBOACTR = '1' ;
YAOACTR.data[2] = A_UNITE(GBOACTR,mode1,1,HBOACTR);
} 
else
{ 
 /* line 1101: */
ROAAOSF_whole( VUMACTR_intextra(QNNACTR_mode), 0, &IBOACTR );
YAOACTR.data[2] = A_UNITE(JBOACTR,mode2,2,IBOACTR);
} 
 /* line 1102: */
LBOACTR = ',' ;
YAOACTR.data[3] = A_UNITE(KBOACTR,mode1,1,LBOACTR);
QLNACTR_ctag( QNNACTR_mode, &MBOACTR );
YAOACTR.data[4] = A_UNITE(NBOACTR,mode2,2,MBOACTR);
 /* line 1104: */
RBOACTR = PBOACTR ;
YAOACTR.data[5] = A_UNITE(QBOACTR,mode2,2,RBOACTR);
YAOACTR.data[6] = A_UNITE(SBOACTR,mode4,4,EIAACTR_cnewline);
 /* line 1105: */
(void)(MDMACTR_writecstream(A_HISVEC(TBOACTR,YAOACTR,7,A68_137 ), Stream));
 /* line 1106: */
 /* line 1107: */
 /* line 1108: */
 /* line 1110: */
(void)(A_CALLPROC(OONACTR_emittagtypedef,(QNNACTR_mode),(QNNACTR_mode,(OONACTR_emittagtypedef).nonlocals)));
} 
} 
break;
case 7: 
 /* line 1112: */
(void)(A_CALLPROC(GWNACTR_emitarraytypedef,(),((GWNACTR_emitarraytypedef).nonlocals)));
break;
case 8: 
 /* line 1114: */
(void)(A_CALLPROC(IVNACTR_emitvectortypedef,(),((IVNACTR_emitvectortypedef).nonlocals)));
break;
case 9: 
 /* line 1116: */
(void)(A_CALLPROC(GWNACTR_emitarraytypedef,(),((GWNACTR_emitarraytypedef).nonlocals)));
break;
case 10: 
 /* line 1118: */
(void)(A_CALLPROC(IVNACTR_emitvectortypedef,(),((IVNACTR_emitvectortypedef).nonlocals)));
break;
case 11: 
 /* line 1119: */
 /* line 1121: */
if (Pre_declare)
{ 
 /* line 1122: */
(void)(A_CALLPROC(PQNACTR_emitincompletetype,(),((PQNACTR_emitincompletetype).nonlocals)));
} 
else
{ 
UBOACTR_elemmode = A_CALLPROC(UVMACTR_elementmode,(QNNACTR_mode),(QNNACTR_mode,(UVMACTR_elementmode).nonlocals));
 /* line 1123: */
VBOACTR = NQIACTR_nostructresultoption;
if ( VBOACTR )
{VBOACTR = VSMACTR_iscstruct(UBOACTR_elemmode);
}
WBOACTR_rtn = VBOACTR;
 /* line 1125: */
(void)(PNNACTR_writectypedef(UBOACTR_elemmode, Stream, A68_TRUE));
 /* line 1127: */
 /* line 1128: */
 /* line 1130: */
if (WBOACTR_rtn)
{ 
ACOACTR = BCOACTR;
} 
else
{ 
WLNACTR_ctaggedtype( UBOACTR_elemmode, &CCOACTR );
ACOACTR = CCOACTR;
} 
FCOACTR = A_VC_PLUS(DCOACTR,ACOACTR) ;
XBOACTR.data[0] = A_UNITE(ECOACTR,mode2,2,FCOACTR);
 /* line 1131: */
HCOACTR = ',' ;
XBOACTR.data[1] = A_UNITE(GCOACTR,mode1,1,HCOACTR);
QLNACTR_ctag( QNNACTR_mode, &ICOACTR );
XBOACTR.data[2] = A_UNITE(JCOACTR,mode2,2,ICOACTR);
 /* line 1132: */
LCOACTR = ',' ;
XBOACTR.data[3] = A_UNITE(KCOACTR,mode1,1,LCOACTR);
 /* line 1133: */
PCOACTR = NCOACTR ;
XBOACTR.data[4] = A_UNITE(OCOACTR,mode2,2,PCOACTR);
if (WBOACTR_rtn)
{ 
RCOACTR = ',' ;
XBOACTR.data[5] = A_UNITE(QCOACTR,mode1,1,RCOACTR);
} 
else
{ 
 /* line 1134: */
VCOACTR = TCOACTR ;
XBOACTR.data[5] = A_UNITE(UCOACTR,mode2,2,VCOACTR);
} 
if (WBOACTR_rtn)
{ 
WLNACTR_ctaggedtype( UBOACTR_elemmode, &WCOACTR );
XBOACTR.data[6] = A_UNITE(XCOACTR,mode2,2,WCOACTR);
} 
else
{ 
 /* line 1135: */
BDOACTR = ZCOACTR ;
XBOACTR.data[6] = A_UNITE(ADOACTR,mode2,2,BDOACTR);
} 
if (WBOACTR_rtn)
{ 
DDOACTR = '*' ;
XBOACTR.data[7] = A_UNITE(CDOACTR,mode1,1,DDOACTR);
} 
else
{ 
HDOACTR = FDOACTR ;
XBOACTR.data[7] = A_UNITE(GDOACTR,mode2,2,HDOACTR);
} 
 /* line 1137: */
LDOACTR = JDOACTR ;
XBOACTR.data[8] = A_UNITE(KDOACTR,mode2,2,LDOACTR);
XBOACTR.data[9] = A_UNITE(MDOACTR,mode4,4,EIAACTR_cnewline);
 /* line 1138: */
(void)(MDMACTR_writecstream(A_HISVEC(NDOACTR,XBOACTR,10,A68_137 ), Stream));
 /* line 1139: */
(void)(A_CALLPROC(OONACTR_emittagtypedef,(QNNACTR_mode),(QNNACTR_mode,(OONACTR_emittagtypedef).nonlocals)));
 /* line 1140: */
ODOACTR = (&(YNNACTR_entry->Flags)) ;
(void)((*ODOACTR) = (A68_BITS )((*(&(YNNACTR_entry->Flags)))|AOMACTR_typedefoutput));
 /* line 1142: */
 /* line 1143: */
 /* line 1144: */
 /* line 1145: */
(void)(PNNACTR_writectypedef(UBOACTR_elemmode, Stream, A68_FALSE));
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 1147: */
 /* line 1148: */
 /* line 1149: */
if (!Pre_declare)
{ 
 /* line 1150: */
 /* line 1151: */
PDOACTR = (&(YNNACTR_entry->Flags)) ;
(void)((*PDOACTR) = (A68_BITS )((*(&(YNNACTR_entry->Flags)))|AOMACTR_typedefoutput));
} 
} 
} 
A_PROC_EXIT(writectypedef);
return;
} 
#undef NL

A68_VOID  SDOACTR_initialisemodetable(A68_210  Mdes, A68_INT  Nomodes)
{ 
A68_VC  WDOACTR;  /* avoid structure result */
A68_INT  YDOACTR_unset A_UNUSED = {0};
A68_94  ZDOACTR_initialisemodes;   /* proc value of non-global proc */
A68_93  LIOACTR_finalisemode;   /* proc value of non-global proc */
A68_216  ZJOACTR_generator;   /* proc value of non-global proc */
A68_155  EKOACTR;  /* avoid structure result */
A68_INT  FKOACTR_i A_UNUSED = {0};
A68_INT  GKOACTR;  /* to part of loop */
A68_INT  HKOACTR_i A_UNUSED = {0};
A68_INT  IKOACTR;  /* to part of loop */
A68_INT * JKOACTR;  /* YIELD */
A68_BITS * KKOACTR;  /* YIELD */
A68_INT  LKOACTR_i A_UNUSED = {0};
A68_INT  MKOACTR;  /* to part of loop */
A68_INT * NKOACTR;  /* YIELD */
A68_INT  OKOACTR_i A_UNUSED = {0};
A68_INT  PKOACTR;  /* to part of loop */
A68_VC  RKOACTR;  /* avoid structure result */
A68_VC  TKOACTR;  /* avoid structure result */
A68_INT  WKOACTR_i A_UNUSED = {0};
A68_INT  XKOACTR;  /* to part of loop */
A68_INT  YKOACTR_deflex A_UNUSED = {0};
A68_VC  CLOACTR;  /* avoid structure result */
A68_VC  ELOACTR;  /* avoid structure result */
A68_VC  GLOACTR;  /* avoid structure result */
A68_VC  ILOACTR;  /* avoid structure result */
A_PROC_ENTRY(initialisemodetable);
 /* line 1162: */
 /* line 1163: */
{ 
ROAAOSF_whole( Mdes.dim[0].upb, 0, &WDOACTR );
(void)(KNMACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(VDOACTR,WDOACTR),XDOACTR)));
 /* line 1165: */
YDOACTR_unset = (-1);
 /* line 1167: */
 /* line 1168: */
 /* line 1172: */
A_CLOSURE( ZDOACTR_initialisemodes, AEOACTR_initialisemodes, BEOACTR_initialisemodes );
(( BEOACTR_initialisemodes * ) ( ZDOACTR_initialisemodes.nonlocals )) -> YDOACTR_unset = YDOACTR_unset;
(( BEOACTR_initialisemodes * ) ( ZDOACTR_initialisemodes.nonlocals )) -> Mdes = Mdes;
 /* line 1320: */
A_CLOSURE( LIOACTR_finalisemode, MIOACTR_finalisemode, NIOACTR_finalisemode );
(( NIOACTR_finalisemode * ) ( LIOACTR_finalisemode.nonlocals )) -> LIOACTR_finalisemode = LIOACTR_finalisemode;
 /* line 1409: */
A_CLOSURE( ZJOACTR_generator, AKOACTR_generator, BKOACTR_generator );
(( BKOACTR_generator * ) ( ZJOACTR_generator.nonlocals )) -> Nomodes = Nomodes;
A_CALLPROC(ZJOACTR_generator,(A68_FALSE, &EKOACTR),(A68_FALSE, &EKOACTR,(ZJOACTR_generator).nonlocals));
WNMACTR_modes = EKOACTR;
 /* line 1410: */
(void)(A_CALLPROC(ZDOACTR_initialisemodes,(),((ZDOACTR_initialisemodes).nonlocals)));
 /* line 1412: */
 /* line 1413: */
GKOACTR = Nomodes;
for ( FKOACTR_i = LFAACTR_shortcomplmode;
FKOACTR_i <= GKOACTR;
FKOACTR_i += 1 )
{ 
 /* line 1414: */
 /* line 1415: */
(void)(A_CALLPROC(LIOACTR_finalisemode,(FKOACTR_i),(FKOACTR_i,(LIOACTR_finalisemode).nonlocals)));
}
 /* line 1422: */
 /* line 1423: */
IKOACTR = (UFAACTR_firstnonfixedmode-1);
for ( HKOACTR_i = PEAACTR_nomode;
HKOACTR_i <= IKOACTR;
HKOACTR_i += 1 )
{ 
JKOACTR = (&((&A_R1INDEX(WNMACTR_modes,HKOACTR_i))->Deflexedmode)) ;
(*JKOACTR) = HKOACTR_i;
 /* line 1424: */
 /* line 1425: */
KKOACTR = (&((&A_R1INDEX(WNMACTR_modes,HKOACTR_i))->Flags)) ;
(void)((*KKOACTR) = (A68_BITS )((*(&((&A_R1INDEX(WNMACTR_modes,HKOACTR_i))->Flags)))|BOMACTR_deflexoutput));
}
 /* line 1426: */
 /* line 1427: */
MKOACTR = Nomodes;
for ( LKOACTR_i = UFAACTR_firstnonfixedmode;
LKOACTR_i <= MKOACTR;
LKOACTR_i += 1 )
{ 
NKOACTR = (&((&A_R1INDEX(WNMACTR_modes,LKOACTR_i))->Deflexedmode)) ;
(*NKOACTR) = PEAACTR_nomode;
}
 /* line 1429: */
 /* line 1430: */
 /* line 1431: */
if (SNMACTR_debugging())
{ 
 /* line 1432: */
PKOACTR = Nomodes;
for ( OKOACTR_i = UFAACTR_firstnonfixedmode;
OKOACTR_i <= PKOACTR;
OKOACTR_i += 1 )
{ 
 /* line 1433: */
 /* line 1434: */
ROAAOSF_whole( OKOACTR_i, 0, &RKOACTR );
WCNACTR_modename( OKOACTR_i, &TKOACTR );
(void)(KNMACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(RKOACTR,SKOACTR),TKOACTR)));
}
 /* line 1435: */
 /* line 1436: */
(void)(KNMACTR_debugmessage(5, VKOACTR));
} 
 /* line 1439: */
 /* line 1440: */
XKOACTR = Nomodes;
for ( WKOACTR_i = UFAACTR_firstnonfixedmode;
WKOACTR_i <= XKOACTR;
WKOACTR_i += 1 )
{ 
 /* line 1441: */
(void)(PNNACTR_writectypedef(WKOACTR_i, FSLACTR_modesstream, A68_FALSE));
 /* line 1442: */
 /* line 1443: */
 /* line 1444: */
if (SNMACTR_debugging())
{ 
YKOACTR_deflex = LZMACTR_deflexedmode(WKOACTR_i, A68_TRUE);
 /* line 1445: */
 /* line 1446: */
 /* line 1447: */
 /* line 1448: */
 /* line 1449: */
 /* line 1450: */
ROAAOSF_whole( WKOACTR_i, 0, &CLOACTR );
WCNACTR_modename( WKOACTR_i, &ELOACTR );
ROAAOSF_whole( YKOACTR_deflex, 0, &GLOACTR );
WCNACTR_modename( YKOACTR_deflex, &ILOACTR );
(void)(KNMACTR_debugmessage(5, A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(CLOACTR,DLOACTR),ELOACTR),FLOACTR),GLOACTR),HLOACTR),ILOACTR)));
} 
}
 /* line 1451: */
} 
A_PROC_EXIT(initialisemodetable);
return;
} 
#undef NL
 /* line 1454: */

A_STATIC A68_VOID  MLOACTR_declarectemporaryinit(A68_INT  Mode, A68_VC  Commenttext, A68_BOOL  Zeroed, A68_127  *ReturnedValue)
{ 
A68_INT  NLOACTR_locdecstream A_UNUSED = {0};
A68_INT  OLOACTR_cvt A_UNUSED = {0};
A68_127  PLOACTR_newtemp A_UNUSED = {0};
A68_72 * QLOACTR;  /* YIELD */
A68_INT * RLOACTR;  /* YIELD */
A68_VC  TLOACTR;  /* clause result */
A68_VC  VLOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  WLOACTR;  /* avoid structure result */
A68_VC  XLOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  YLOACTR;  /* OPERATORS - istruct -> vector */
A68_72  ZLOACTR;  /* OPERATORS - istruct -> vector */
A68_137  AMOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  BMOACTR;  /* YIELD */
A68_136  CMOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  DMOACTR;  /* optbool result */
A68_137  IMOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  JMOACTR;  /* YIELD */
A68_136  KMOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_137  LMOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_136  MMOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_127  NMOACTR;  /* clause result */
A_PROC_ENTRY(declarectemporaryinit);
 /* line 1462: */
 /* line 1463: */
{ 
NLOACTR_locdecstream = QSLACTR_locdecstream(VRLACTR_currentlevel());
 /* line 1464: */
OLOACTR_cvt = TKNACTR_givecvariabletype(Mode, A68_TRUE);
 /* line 1465: */
 /* line 1466: */
QLOACTR = (&((&PLOACTR_newtemp)->Name)) ;
(void)((*QLOACTR) = QIMACTR_newuniquename());
 /* line 1467: */
RLOACTR = (&((&PLOACTR_newtemp)->Mode)) ;
(*RLOACTR) = OLOACTR_cvt;
 /* line 1468: */
 /* line 1469: */
if (Zeroed)
{ 
TLOACTR = ULOACTR;
} 
else
{ 
TLOACTR = A_HVEC(VLOACTR,';',A68_CHAR );
} 
 /* line 1471: */
BLNACTR_cvartype( OLOACTR_cvt, &WLOACTR );
ZLOACTR = (*(&((&PLOACTR_newtemp)->Name))) ;
BMOACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(WLOACTR,A_HVEC(XLOACTR,' ',A68_CHAR )),A_HISVEC(YLOACTR,ZLOACTR,7,A68_CHAR )),TLOACTR) ;
(void)(MDMACTR_writecstream(A_HVEC(CMOACTR,A_UNITE(AMOACTR,mode2,2,BMOACTR),A68_137 ), NLOACTR_locdecstream));
 /* line 1472: */
DMOACTR = AQIACTR_verboseoption;
if ( DMOACTR )
{ /* line 1473: */
DMOACTR = (Commenttext.upb>0);
}
 /* line 1474: */
if (DMOACTR)
{ 
 /* line 1476: */
 /* line 1477: */
JMOACTR = A_VC_PLUS(A_VC_PLUS(GMOACTR,Commenttext),HMOACTR) ;
(void)(MDMACTR_writecstream(A_HVEC(KMOACTR,A_UNITE(IMOACTR,mode2,2,JMOACTR),A68_137 ), NLOACTR_locdecstream));
} 
 /* line 1478: */
(void)(MDMACTR_writecstream(A_HVEC(MMOACTR,A_UNITE(LMOACTR,mode4,4,EIAACTR_cnewline),A68_137 ), NLOACTR_locdecstream));
 /* line 1479: */
 /* line 1480: */
NMOACTR = PLOACTR_newtemp;
} 
A_PROC_EXIT(declarectemporaryinit);
*ReturnedValue = (NMOACTR);
return;
} 
#undef NL

A68_VOID  QMOACTR_declarectemporary(A68_INT  Mode, A68_VC  Commenttext, A68_127  *ReturnedValue)
{ 
A68_127  RMOACTR;  /* clause result */
A68_127  SMOACTR;  /* avoid structure result */
A_PROC_ENTRY(declarectemporary);
 /* line 1483: */
MLOACTR_declarectemporaryinit( Mode, Commenttext, A68_FALSE, &SMOACTR );
RMOACTR = SMOACTR;
A_PROC_EXIT(declarectemporary);
*ReturnedValue = (RMOACTR);
return;
} 
#undef NL

A68_VOID  XMOACTR_newzeroed(A68_INT  Mode, A68_VC  Commenttext, A68_127  *ReturnedValue)
{ 
A68_127  YMOACTR;  /* clause result */
A68_127  ZMOACTR;  /* avoid structure result */
A_PROC_ENTRY(newzeroed);
 /* line 1488: */
MLOACTR_declarectemporaryinit( Mode, Commenttext, A68_TRUE, &ZMOACTR );
YMOACTR = ZMOACTR;
A_PROC_EXIT(newzeroed);
*ReturnedValue = (YMOACTR);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 6: */
void DNMACTR(void)   /* initialise DECS modes */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel","-dir",".","modes.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/vak/Project/Algol/Algol-68RS-Source/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/vak/Project/Algol/Algol-68RS-Source/a68config/a68config.m","./centities.m","./moduletracer.m","./coutput.m","./incvalue.m","./uniquenameserver.m","./incmode.m","./incinstallation.m","./environment.m","./environ.m","./common.m","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config A_UNUSED;
/* --- end of configuration information */
A68_88  TVMACTR;  /* procedure value */
A68_88  VVMACTR;  /* procedure value */
A68_88  XVMACTR;  /* procedure value */
A68_160  ZVMACTR;  /* procedure value */
A68_160  BWMACTR;  /* procedure value */
A68_218  UMOACTR;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
THAACTR();   /* USE centities */
BCHACTR();   /* USE moduletracer */
PTLACTR();   /* USE coutput */
GKJACTR();   /* USE incvalue */
RHMACTR();   /* USE uniquenameserver */
ZDAACTR();   /* USE incmode */
ODAACTR();   /* USE incinstallation */
HPIACTR();   /* USE environment */
BPLACTR();   /* USE environ */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/modes.a68";
A_config.translation_time = "Thu Nov  5 21:38:57 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "CNMACTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 21:38:57 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS modes);
(void)(UEAALIB_a68config(LGAALIB_configinfo, HNMACTR));
 /* line 55: */
 /* line 58: */
 /* line 60: */
 /* line 79: */
 /* line 81: */
 /* line 83: */
 /* line 84: */
 /* line 85: */
 /* line 86: */
 /* line 87: */
 /* line 88: */
 /* line 89: */
 /* line 91: */
 /* line 97: */
 /* line 108: */
 /* line 109: */
 /* line 110: */
 /* line 111: */
 /* line 112: */
 /* line 114: */
 /* line 116: */
 /* line 118: */
 /* line 124: */
 /* line 125: */
 /* line 126: */
 /* line 128: */
 /* line 132: */
 /* line 134: */
 /* line 136: */
 /* line 139: */
 /* line 149: */
 /* line 159: */
 /* line 171: */
 /* line 181: */
 /* line 191: */
 /* line 201: */
 /* line 211: */
 /* line 221: */
 /* line 231: */
 /* line 241: */
 /* line 251: */
 /* line 261: */
 /* line 267: */
 /* line 283: */
 /* line 294: */
 /* line 298: */
 /* line 304: */
 /* line 313: */
 /* line 324: */
 /* line 339: */
 /* line 351: */
 /* line 362: */
 /* line 373: */
 /* line 387: */
 /* line 393: */
TVMACTR.fn.fn_global = HTMACTR_auxmode;
TVMACTR.nonlocals = A68_NIL;
SVMACTR_deproc = (TVMACTR);
 /* line 394: */
VVMACTR.fn.fn_global = HTMACTR_auxmode;
VVMACTR.nonlocals = A68_NIL;
UVMACTR_elementmode = (VVMACTR);
 /* line 395: */
XVMACTR.fn.fn_global = VUMACTR_intextra;
XVMACTR.nonlocals = A68_NIL;
WVMACTR_istructlength = (XVMACTR);
 /* line 397: */
ZVMACTR.fn.fn_global = LUMACTR_modelistextra;
ZVMACTR.nonlocals = A68_NIL;
YVMACTR_constituents = (ZVMACTR);
 /* line 398: */
BWMACTR.fn.fn_global = LUMACTR_modelistextra;
BWMACTR.nonlocals = A68_NIL;
AWMACTR_parameters = (BWMACTR);
 /* line 400: */
 /* line 402: */
CWMACTR_rowlist = (A68_166 *)A68_NIL;
DWMACTR_vectorlist = (A68_166 *)A68_NIL;
 /* line 403: */
EWMACTR_structlist = (A68_166 *)A68_NIL;
FWMACTR_unionlist = (A68_166 *)A68_NIL;
 /* line 405: */
 /* line 422: */
 /* line 432: */
 /* line 434: */
 /* line 503: */
 /* line 517: */
 /* line 603: */
 /* line 606: */
 /* line 617: */
 /* line 683: */
 /* line 691: */
 /* line 699: */
 /* line 737: */
 /* line 753: */
 /* line 762: */
 /* line 765: */
 /* line 768: */
 /* line 771: */
 /* line 773: */
 /* line 776: */
 /* line 779: */
ZLNACTR_padno = 0;
 /* line 781: */
 /* line 802: */
 /* line 1153: */
 /* line 1453: */
 /* line 1482: */
 /* line 1485: */
UMOACTR.fn.fn_global = QMOACTR_declarectemporary;
UMOACTR.nonlocals = A68_NIL;
TMOACTR_new = (UMOACTR);
 /* line 1487: */
 /* line 1490: */
 /* line 1492: */
 /* line 1508: */
/*SKIP*/;
A_PROC_EXIT(DECS modes);
} 
#undef NL
/* end of translation of modes.a68 */
