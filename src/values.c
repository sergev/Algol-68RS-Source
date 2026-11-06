/* UNAME:ZTPACTR */
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

A_PROCEDURE(A68_INT ,A68t59,(A68_INT ),(A68_INT ,void *));
typedef struct A68t59  A68_59 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t60,(A68_INT ),(A68_INT ,void *));
typedef struct A68t60  A68_60 ;    /* PROC(INT) BOOL */
struct A68t61{
A68_INT  Level;
A_PAD_INT(PAD_4)
A68_INT  Block;
A_PAD_INT(PAD_5)
};
typedef struct A68t61  A68_61 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t62,(struct A68t61 *),(struct A68t61 *,void *));
typedef struct A68t62  A68_62 ;    /* PROC MODE61 */

A_PROCEDURE(A68_INT ,A68t63,(void),(void *));
typedef struct A68t63  A68_63 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t64,(A68_INT ),(A68_INT ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t65,(void),(void *));
typedef struct A68t65  A68_65 ;    /* PROC VOID */

A_PROCEDURE(A68_BOOL ,A68t66,(void),(void *));
typedef struct A68t66  A68_66 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t67,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t67  A68_67 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t68,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t68  A68_68 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t69,(struct A68t61 ,struct A68t61 ),(struct A68t61 ,struct A68t61 ,void *));
typedef struct A68t69  A68_69 ;    /* PROC(MODE61,MODE61) BOOL */

A_PROCEDURE(A68_BOOL ,A68t70,(struct A68t61 ),(struct A68t61 ,void *));
typedef struct A68t70  A68_70 ;    /* PROC(MODE61) BOOL */

A_PROCEDURE(A68_VOID ,A68t71,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t71  A68_71 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t72,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t72  A68_72 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t73,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t73  A68_73 ;    /* PROC(INT) REF MODE26 */
struct A68t75 ;

A_PROCEDURE(A68_VOID ,A68t74,(A68_INT ,struct A68t75 ),(A68_INT ,struct A68t75 ,void *));
typedef struct A68t74  A68_74 ;    /* PROC(INT,MODE75) VOID */
A_ROW(A68_VC ,A68t75,1);
typedef struct A68t75  A68_75 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t76,(void),(void *));
typedef struct A68t76  A68_76 ;    /* PROC BITS */
struct A68t77{
A68_INT  Cfile;
A_PAD_INT(PAD_6)
};
typedef struct A68t77  A68_77 ;    /* STRUCT(INT)  */
struct A68t78{
A68_INT  Seedfile;
A_PAD_INT(PAD_7)
};
typedef struct A68t78  A68_78 ;    /* STRUCT(INT)  */
struct A68t79 { A68_INT mode; union {
struct A68t77  mode1;
struct A68t78  mode2;
struct A68t56  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t79  A68_79 ;    /* UNION(MODE77,MODE78,MODE56,VOID)  */

A_PROCEDURE(A68_VOID ,A68t80,(A68_VC ),(A68_VC ,void *));
typedef struct A68t80  A68_80 ;    /* PROC(MODE26) VOID */
A_ROW(A68_BOOL ,A68t81,1);
typedef struct A68t81  A68_81 ;    /* [] BOOL */
struct A68t82{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_8)
A68_VC  Sourcefile;
struct A68t56  Nameseed;
A_PAD_ISTRUCT(A68_56 ,PAD_9)
struct A68t79  Nameseedorigin;
struct A68t83 * Used_modules;
A68_VC  Commandline;
struct A68t84 * Environment;
};
typedef struct A68t82  A68_82 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE56,MODE79,REF MODE83,REF MODE26,REF MODE84)  */
struct A68t83{
A68_VC  Modinfo_file;
struct A68t83 * Next;
};
typedef struct A68t83  A68_83 ;    /* STRUCT(REF MODE26,REF MODE83)  */
struct A68t84{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t84 * Next;
};
typedef struct A68t84  A68_84 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE84)  */
struct A68t86 ;
struct A68t87 ;

A_PROCEDURE(struct A68t86 *,A68t85,(A68_VC ,struct A68t87 *,A68_VC *),(A68_VC ,struct A68t87 *,A68_VC *,void *));
typedef struct A68t85  A68_85 ;    /* PROC(MODE26,REF MODE87,REF REF MODE26) REF MODE86 */
struct A68t86{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t86  A68_86 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t87{
A68_VC  Dir;
struct A68t87 * Next;
};
typedef struct A68t87  A68_87 ;    /* STRUCT(REF MODE26,REF MODE87)  */
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
struct A68t94{
A68_INT  Mode;
A_PAD_INT(PAD_10)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_11)
struct A68t61  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_12)
A68_BITS  Flags;
A_PAD_BITS(PAD_13)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t94  A68_94 ;    /* STRUCT(INT,INT,MODE61,REF MODE26,REF MODE26,MODE56,BITS,REF MODE26,REF MODE26)  */
struct A68t95{
A68_INT  Mode;
A_PAD_INT(PAD_14)
A68_INT  Resultmode;
A_PAD_INT(PAD_15)
A68_INT  Declevel;
A_PAD_INT(PAD_16)
struct A68t61  Environ;
A68_VC  Name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_17)
struct A68t56  Fnprefix;
A_PAD_ISTRUCT(A68_56 ,PAD_18)
struct A68t56  Envprefix;
A_PAD_ISTRUCT(A68_56 ,PAD_19)
A68_BITS  Flags;
A_PAD_BITS(PAD_20)
};
typedef struct A68t95  A68_95 ;    /* STRUCT(INT,INT,INT,MODE61,REF MODE26,MODE56,MODE56,MODE56,BITS)  */
struct A68t96{
struct A68t55  Label;
struct A68t61  Environ;
A68_VC  Name;
struct A68t56  Prefix;
A_PAD_ISTRUCT(A68_56 ,PAD_21)
A68_BITS  Flags;
A_PAD_BITS(PAD_22)
A68_INT  Alias;
A_PAD_INT(PAD_23)
};
typedef struct A68t96  A68_96 ;    /* STRUCT(MODE55,MODE61,REF MODE26,MODE56,BITS,INT)  */

A_PROCEDURE(struct A68t94 *,A68t97,(A68_INT ),(A68_INT ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(INT) REF MODE94 */

A_PROCEDURE(A68_VOID ,A68t98,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t98  A68_98 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t99,(A68_VC ,struct A68t56 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t56 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t99  A68_99 ;    /* PROC(REF MODE26,MODE56,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */
A_ROW(struct A68t94 ,A68t100,1);
typedef struct A68t100  A68_100 ;    /* [] MODE94 */
A_ROW(struct A68t95 ,A68t101,1);
typedef struct A68t101  A68_101 ;    /* [] MODE95 */
A_ROW(struct A68t96 ,A68t102,1);
typedef struct A68t102  A68_102 ;    /* [] MODE96 */
struct A68t104 ;

A_PROCEDURE(A68_VOID ,A68t103,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t104 ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t104 ,void *));
typedef struct A68t103  A68_103 ;    /* PROC(INT,INT,INT,INT,REF MODE104) VOID */
A_ROW(A68_INT ,A68t104,1);
typedef struct A68t104  A68_104 ;    /* [] INT */

A_PROCEDURE(A68_BOOL ,A68t105,(A68_VC ),(A68_VC ,void *));
typedef struct A68t105  A68_105 ;    /* PROC(MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t106,(A68_INT ,struct A68t61 *),(A68_INT ,struct A68t61 *,void *));
typedef struct A68t106  A68_106 ;    /* PROC(INT) MODE61 */
struct A68t107{
struct A68t108 * Value;
struct A68t55 * End;
A68_INT  Type;
A_PAD_INT(PAD_24)
};
typedef struct A68t107  A68_107 ;    /* STRUCT(REF MODE108,REF MODE55,INT)  */
struct A68t110{
A68_INT  Rdenno;
A_PAD_INT(PAD_25)
};
typedef struct A68t110  A68_110 ;    /* STRUCT(INT)  */
struct A68t111{
A68_INT  Idno;
A_PAD_INT(PAD_26)
};
typedef struct A68t111  A68_111 ;    /* STRUCT(INT)  */
struct A68t112{
struct A68t56  Name;
A_PAD_ISTRUCT(A68_56 ,PAD_27)
A68_INT  Mode;
A_PAD_INT(PAD_28)
};
typedef struct A68t112  A68_112 ;    /* STRUCT(MODE56,INT)  */
struct A68t113{
A68_INT  Nse;
A_PAD_INT(PAD_29)
};
typedef struct A68t113  A68_113 ;    /* STRUCT(INT)  */
struct A68t114{
A68_INT  Fn;
A_PAD_INT(PAD_30)
A68_INT  Param;
A_PAD_INT(PAD_31)
struct A68t115 * Operands;
};
typedef struct A68t114  A68_114 ;    /* STRUCT(INT,INT,REF MODE115)  */
struct A68t109 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t110  mode2;
struct A68t111  mode4;
struct A68t112  mode5;
A68_VC  mode6;
struct A68t57  mode7;
struct A68t113  mode8;
struct A68t114  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t109  A68_109 ;    /* UNION(LONG BITS,MODE110,VOID,MODE111,MODE112,MODE26,MODE57,MODE113,MODE114)  */
struct A68t108{
A68_INT  Mode;
A_PAD_INT(PAD_32)
A68_BITS  Info;
A_PAD_BITS(PAD_33)
struct A68t109  Extra;
};
typedef struct A68t108  A68_108 ;    /* STRUCT(INT,BITS,MODE109)  */
struct A68t115{
struct A68t108  Value;
struct A68t115 * Rest;
};
typedef struct A68t115  A68_115 ;    /* STRUCT(MODE108,REF MODE115)  */
struct A68t116{
A68_INT  Parameters;
A_PAD_INT(PAD_34)
A68_INT  Result;
A_PAD_INT(PAD_35)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_36)
};
typedef struct A68t116  A68_116 ;    /* STRUCT(INT,INT,BOOL)  */
A_ISTRUCT(A68_CHAR ,32,A68t118);
typedef struct A68t118  A68_118 ;    /* STRUCT 32 CHAR */
struct A68t117{
A68_INT  Mode;
A_PAD_INT(PAD_37)
A68_INT  Offset;
A_PAD_INT(PAD_38)
struct A68t118  Name;
A_PAD_ISTRUCT(A68_118 ,PAD_39)
};
typedef struct A68t117  A68_117 ;    /* STRUCT(INT,INT,MODE118)  */
struct A68t120 ;

A_PROCEDURE(A68_VOID ,A68t119,(A68_INT ,struct A68t120 *),(A68_INT ,struct A68t120 *,void *));
typedef struct A68t119  A68_119 ;    /* PROC(INT) REF MODE120 */
A_VECTOR(A68_INT ,A68t120);
typedef struct A68t120  A68_120 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t121,(struct A68t117 *,A68_VC *),(struct A68t117 *,A68_VC *,void *));
typedef struct A68t121  A68_121 ;    /* PROC(REF MODE117) MODE26 */

A_PROCEDURE(A68_VOID ,A68t122,(A68_INT ,A68_VC ,struct A68t112 *),(A68_INT ,A68_VC ,struct A68t112 *,void *));
typedef struct A68t122  A68_122 ;    /* PROC(INT,MODE26) MODE112 */
struct A68t124 ;

A_PROCEDURE(A68_VOID ,A68t123,(struct A68t124 ,A68_INT ),(struct A68t124 ,A68_INT ,void *));
typedef struct A68t123  A68_123 ;    /* PROC(REF MODE124,INT) VOID */
A_ROW(struct A68t125 ,A68t124,1);
typedef struct A68t124  A68_124 ;    /* [] MODE125 */
struct A68t135{
A68_INT  Mode;
A_PAD_INT(PAD_40)
};
typedef struct A68t135  A68_135 ;    /* STRUCT(INT)  */
struct A68t125 { A68_INT mode; union {
A68_INT  mode1;
struct A68t126 * mode2;
struct A68t127 * mode3;
struct A68t128 * mode4;
struct A68t129 * mode5;
struct A68t130 * mode6;
struct A68t131 * mode7;
struct A68t132 * mode8;
struct A68t133 * mode9;
struct A68t134 * mode10;
struct A68t135  mode11;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t125  A68_125 ;    /* UNION(INT,REF MODE126,REF MODE127,REF MODE128,REF MODE129,REF MODE130,REF MODE131,REF MODE132,REF MODE133,REF MODE134,MODE135)  */
struct A68t126{
A68_INT  Rdenno;
A_PAD_INT(PAD_41)
struct A68t139 * Modelist;
};
typedef struct A68t126  A68_126 ;    /* STRUCT(INT,REF MODE139)  */
struct A68t127{
A68_INT  Deproc;
A_PAD_INT(PAD_42)
struct A68t139 * Pars;
};
typedef struct A68t127  A68_127 ;    /* STRUCT(INT,REF MODE139)  */
struct A68t128{
A68_INT  Rdenno;
A_PAD_INT(PAD_43)
A68_INT  Deflex;
A_PAD_INT(PAD_44)
struct A68t138 * Sels;
};
typedef struct A68t128  A68_128 ;    /* STRUCT(INT,INT,REF MODE138)  */
struct A68t129{
A68_INT  Rdenno;
A_PAD_INT(PAD_45)
A68_INT  Imode;
A_PAD_INT(PAD_46)
A68_INT  Length;
A_PAD_INT(PAD_47)
A68_INT  Deflex;
A_PAD_INT(PAD_48)
};
typedef struct A68t129  A68_129 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t130{
A68_INT  Deproc;
A_PAD_INT(PAD_49)
};
typedef struct A68t130  A68_130 ;    /* STRUCT(INT)  */
struct A68t131{
A68_INT  Rdenno;
A_PAD_INT(PAD_50)
A68_INT  Vecmode;
A_PAD_INT(PAD_51)
A68_INT  Deflex;
A_PAD_INT(PAD_52)
};
typedef struct A68t131  A68_131 ;    /* STRUCT(INT,INT,INT)  */
struct A68t132{
A68_INT  Rdenno;
A_PAD_INT(PAD_53)
A68_INT  Mode;
A_PAD_INT(PAD_54)
A68_INT  Nods;
A_PAD_INT(PAD_55)
A68_INT  Deflex;
A_PAD_INT(PAD_56)
};
typedef struct A68t132  A68_132 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t133{
A68_INT  Mode;
A_PAD_INT(PAD_57)
struct A68t137 * Stenlist;
};
typedef struct A68t133  A68_133 ;    /* STRUCT(INT,REF MODE137)  */
struct A68t134{
A68_INT  Mode;
A_PAD_INT(PAD_58)
A68_INT  Modeproc;
A_PAD_INT(PAD_59)
struct A68t136 * El;
};
typedef struct A68t134  A68_134 ;    /* STRUCT(INT,INT,REF MODE136)  */
struct A68t136{
struct A68t134 * Am;
struct A68t136 * Rest;
};
typedef struct A68t136  A68_136 ;    /* STRUCT(REF MODE134,REF MODE136)  */
struct A68t137{
A68_INT  Mode;
A_PAD_INT(PAD_60)
A68_INT  Rdenno;
A_PAD_INT(PAD_61)
struct A68t137 * Rest;
};
typedef struct A68t137  A68_137 ;    /* STRUCT(INT,INT,REF MODE137)  */
struct A68t138{
A68_INT  Mode;
A_PAD_INT(PAD_62)
A68_INT  Fieldno;
A_PAD_INT(PAD_63)
struct A68t118  Name;
A_PAD_ISTRUCT(A68_118 ,PAD_64)
struct A68t138 * Rest;
};
typedef struct A68t138  A68_138 ;    /* STRUCT(INT,INT,MODE118,REF MODE138)  */
struct A68t139{
A68_INT  Mode;
A_PAD_INT(PAD_65)
struct A68t139 * Rest;
};
typedef struct A68t139  A68_139 ;    /* STRUCT(INT,REF MODE139)  */

A_PROCEDURE(A68_VOID ,A68t140,(A68_INT ,struct A68t116 *),(A68_INT ,struct A68t116 *,void *));
typedef struct A68t140  A68_140 ;    /* PROC(INT) MODE116 */
struct A68t142 ;

A_PROCEDURE(A68_VOID ,A68t141,(A68_INT ,struct A68t142 *),(A68_INT ,struct A68t142 *,void *));
typedef struct A68t141  A68_141 ;    /* PROC(INT) REF MODE142 */
A_VECTOR(struct A68t117 ,A68t142);
typedef struct A68t142  A68_142 ;    /* VECTOR [] MODE117 */

A_PROCEDURE(A68_INT ,A68t143,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t143  A68_143 ;    /* PROC(INT,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t144,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t144  A68_144 ;    /* PROC(INT,INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t145,(struct A68t65 ),(struct A68t65 ,void *));
typedef struct A68t145  A68_145 ;    /* PROC(MODE65) VOID */

A_PROCEDURE(A68_VOID ,A68t146,(struct A68t80 ),(struct A68t80 ,void *));
typedef struct A68t146  A68_146 ;    /* PROC(MODE80) VOID */

A_PROCEDURE(A68_VOID ,A68t147,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t147  A68_147 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,56,A68t148);
typedef struct A68t148  A68_148 ;    /* STRUCT 56 CHAR */
A_VECTOR(struct A68t108 *,A68t149);
typedef struct A68t149  A68_149 ;    /* VECTOR [] REF MODE108 */

A_PROCEDURE(struct A68t108 *,A68t150,(A68_INT ,A68_INT ,A68_BITS ,struct A68t149 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t149 ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(INT,INT,BITS,MODE149) REF MODE108 */

A_PROCEDURE(struct A68t115 *,A68t151,(struct A68t115 *,struct A68t115 ),(struct A68t115 *,struct A68t115 ,void *));
typedef struct A68t151  A68_151 ;    /* PROC(REF MODE115,MODE115) REF MODE115 */

A_PROCEDURE(struct A68t108 *,A68t152,(struct A68t108 *,struct A68t108 ),(struct A68t108 *,struct A68t108 ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(REF MODE108,MODE108) REF MODE108 */

A_PROCEDURE(struct A68t109 *,A68t153,(struct A68t109 *,struct A68t109 ),(struct A68t109 *,struct A68t109 ,void *));
typedef struct A68t153  A68_153 ;    /* PROC(REF MODE109,MODE109) REF MODE109 */
#define A68_154  A68_VC 
#define A68t154 A68t26            /* FLEX VECTOR [] CHAR */

A_PROCEDURE(A68_BOOL ,A68t155,(struct A68t108 *,A68_BITS ),(struct A68t108 *,A68_BITS ,void *));
typedef struct A68t155  A68_155 ;    /* PROC(REF MODE108,BITS) BOOL */

A_PROCEDURE(A68_BOOL ,A68t156,(struct A68t108 *,struct A68t108 *),(struct A68t108 *,struct A68t108 *,void *));
typedef struct A68t156  A68_156 ;    /* PROC(REF MODE108,REF MODE108) BOOL */

A_PROCEDURE(A68_BOOL ,A68t157,(struct A68t108 *),(struct A68t108 *,void *));
typedef struct A68t157  A68_157 ;    /* PROC(REF MODE108) BOOL */

A_PROCEDURE(A68_BOOL ,A68t158,(struct A68t108 *,A68_LBITS ),(struct A68t108 *,A68_LBITS ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(REF MODE108,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t159,(struct A68t108 *),(struct A68t108 *,void *));
typedef struct A68t159  A68_159 ;    /* PROC(REF MODE108) LONG BITS */
A_ISTRUCT(A68_CHAR ,49,A68t160);
typedef struct A68t160  A68_160 ;    /* STRUCT 49 CHAR */
A_ISTRUCT(A68_CHAR ,37,A68t161);
typedef struct A68t161  A68_161 ;    /* STRUCT 37 CHAR */
A_ISTRUCT(A68_CHAR ,55,A68t162);
typedef struct A68t162  A68_162 ;    /* STRUCT 55 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t163);
typedef struct A68t163  A68_163 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_VC ,3,A68t164);
typedef struct A68t164  A68_164 ;    /* STRUCT 3 MODE26 */

A_PROCEDURE(A68_VOID ,A68t165,(struct A68t108 *,A68_VC *),(struct A68t108 *,A68_VC *,void *));
typedef struct A68t165  A68_165 ;    /* PROC(REF MODE108) MODE26 */

A_PROCEDURE(A68_VOID ,A68t166,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t166  A68_166 ;    /* PROC(MODE26,INT) MODE26 */
A_ISTRUCT(A68_CHAR ,15,A68t167);
typedef struct A68t167  A68_167 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t168);
typedef struct A68t168  A68_168 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t169);
typedef struct A68t169  A68_169 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(struct A68t93 ,8,A68t170);
typedef struct A68t170  A68_170 ;    /* STRUCT 8 MODE93 */
A_ISTRUCT(A68_CHAR ,59,A68t171);
typedef struct A68t171  A68_171 ;    /* STRUCT 59 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t172);
typedef struct A68t172  A68_172 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t173);
typedef struct A68t173  A68_173 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t174);
typedef struct A68t174  A68_174 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t175);
typedef struct A68t175  A68_175 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(A68_CHAR ,34,A68t176);
typedef struct A68t176  A68_176 ;    /* STRUCT 34 CHAR */
A_ISTRUCT(A68_CHAR ,42,A68t177);
typedef struct A68t177  A68_177 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(A68_CHAR ,50,A68t178);
typedef struct A68t178  A68_178 ;    /* STRUCT 50 CHAR */

A_PROCEDURE(struct A68t108 *,A68t179,(struct A68t115 *,A68_INT ),(struct A68t115 *,A68_INT ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(REF MODE115,INT) REF MODE108 */

A_PROCEDURE(struct A68t115 *,A68t180,(struct A68t115 *),(struct A68t115 *,void *));
typedef struct A68t180  A68_180 ;    /* PROC(REF MODE115) REF MODE115 */

A_PROCEDURE(A68_INT ,A68t181,(struct A68t114 ),(struct A68t114 ,void *));
typedef struct A68t181  A68_181 ;    /* PROC(MODE114) INT */

A_PROCEDURE(struct A68t108 *,A68t182,(struct A68t108 *,A68_INT ),(struct A68t108 *,A68_INT ,void *));
typedef struct A68t182  A68_182 ;    /* PROC(REF MODE108,INT) REF MODE108 */
A_ISTRUCT(A68_CHAR ,44,A68t183);
typedef struct A68t183  A68_183 ;    /* STRUCT 44 CHAR */

A_PROCEDURE(A68_VOID ,A68t184,(struct A68t108 *),(struct A68t108 *,void *));
typedef struct A68t184  A68_184 ;    /* PROC(REF MODE108) VOID */
A_ISTRUCT(A68_CHAR ,40,A68t185);
typedef struct A68t185  A68_185 ;    /* STRUCT 40 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t186);
typedef struct A68t186  A68_186 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t187);
typedef struct A68t187  A68_187 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t188);
typedef struct A68t188  A68_188 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t189);
typedef struct A68t189  A68_189 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t190);
typedef struct A68t190  A68_190 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t191);
typedef struct A68t191  A68_191 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t192);
typedef struct A68t192  A68_192 ;    /* STRUCT 2 CHAR */

A_PROCEDURE(A68_LINT ,A68t193,(struct A68t108 ),(struct A68t108 ,void *));
typedef struct A68t193  A68_193 ;    /* PROC(MODE108) LONG INT */

A_PROCEDURE(A68_VOID ,A68t194,(struct A68t108 *,A68_BOOL ,A68_VC *),(struct A68t108 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t194  A68_194 ;    /* PROC(REF MODE108,BOOL) MODE26 */
A_ISTRUCT(A68_CHAR ,12,A68t195);
typedef struct A68t195  A68_195 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t196);
typedef struct A68t196  A68_196 ;    /* STRUCT 31 CHAR */
struct A68t197 { A68_INT mode; union {
struct A68t108 * mode1;
A68_VC  mode2;
struct A68t112  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t197  A68_197 ;    /* UNION(REF MODE108,MODE26,MODE112)  */

A_PROCEDURE(A68_VOID ,A68t198,(struct A68t197 ,A68_VC *),(struct A68t197 ,A68_VC *,void *));
typedef struct A68t198  A68_198 ;    /* PROC(MODE197) MODE26 */
A_ISTRUCT(A68_CHAR ,58,A68t199);
typedef struct A68t199  A68_199 ;    /* STRUCT 58 CHAR */
A_VECTOR(struct A68t197 ,A68t200);
typedef struct A68t200  A68_200 ;    /* VECTOR [] MODE197 */

A_PROCEDURE(A68_VOID ,A68t201,(struct A68t200 ,A68_VC *),(struct A68t200 ,A68_VC *,void *));
typedef struct A68t201  A68_201 ;    /* PROC(MODE200) MODE26 */
A_ISTRUCT(A68_CHAR ,35,A68t202);
typedef struct A68t202  A68_202 ;    /* STRUCT 35 CHAR */
A_ISTRUCT(A68_CHAR ,38,A68t203);
typedef struct A68t203  A68_203 ;    /* STRUCT 38 CHAR */

A_PROCEDURE(A68_VOID ,A68t204,(A68_VC ,struct A68t200 ,A68_VC *),(A68_VC ,struct A68t200 ,A68_VC *,void *));
typedef struct A68t204  A68_204 ;    /* PROC(MODE26,MODE200) MODE26 */

A_PROCEDURE(A68_VOID ,A68t205,(struct A68t200 ),(struct A68t200 ,void *));
typedef struct A68t205  A68_205 ;    /* PROC(MODE200) VOID */
A_ISTRUCT(struct A68t93 ,2,A68t206);
typedef struct A68t206  A68_206 ;    /* STRUCT 2 MODE93 */

A_PROCEDURE(A68_VOID ,A68t207,(A68_VC ,A68_INT ,struct A68t200 ,struct A68t112 *),(A68_VC ,A68_INT ,struct A68t200 ,struct A68t112 *,void *));
typedef struct A68t207  A68_207 ;    /* PROC(MODE26,INT,MODE200) MODE112 */
A_ISTRUCT(struct A68t197 ,4,A68t208);
typedef struct A68t208  A68_208 ;    /* STRUCT 4 MODE197 */

A_PROCEDURE(struct A68t108 *,A68t209,(struct A68t108 *),(struct A68t108 *,void *));
typedef struct A68t209  A68_209 ;    /* PROC(REF MODE108) REF MODE108 */

A_PROCEDURE(struct A68t108 *,A68t210,(A68_VC ,struct A68t108 *),(A68_VC ,struct A68t108 *,void *));
typedef struct A68t210  A68_210 ;    /* PROC(MODE26,REF MODE108) REF MODE108 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from modes --- */
extern A68_VOID  LLOACTR_declarectemporary(A68_INT ,A68_VC ,A68_112 *);
extern A68_INT  BTMACTR_derefmode(A68_INT );
extern A68_BOOL  RSMACTR_hasrefs(A68_INT );
extern A68_BOOL  FRMACTR_isfirmarray(A68_INT );
extern A68_VOID  WCNACTR_modename(A68_INT ,A68_VC *);
extern A68_122  KMOACTR_new;
extern A68_INT  TKNACTR_givecvariabletype(A68_INT ,A68_BOOL );
/* --- End of imports from modes --- */


/* --- Imports from incvalue --- */
extern A68_115 * MKJACTR_nilvaluelist;
extern A68_108  DLJACTR_skipvalue;
extern A68_BITS  PKJACTR_defaultinfo;
#define QKJACTR_constant 0X1U
#define RKJACTR_atomic 0X2U
#define TKJACTR_nonloc 0X8U
#define VKJACTR_lvalue 0X20U
#define XKJACTR_fxwarn 0X80U
/* --- End of imports from incvalue --- */


/* --- Imports from incid --- */
#define IAAACTR_maxidno 2000
#define MAAACTR_maxlibid 6000
#define KAAACTR_maxrdno 4000
#define OAAACTR_minlab 16384
#define LAAACTR_minlibid 4001
#define JAAACTR_minrdno 2001
/* --- End of imports from incid --- */


/* --- Imports from incoperfn --- */
#define WGAACTR_operandsshift 18
extern A68_BITS  ZGAACTR_parammask;
/* --- End of imports from incoperfn --- */


/* --- Imports from incmode --- */
#define VFAACTR_refmark 1024
/* --- End of imports from incmode --- */


/* --- Imports from idtable --- */
extern A68_94 * YQKACTR_get_idinfo(A68_INT );
extern A68_101  XPKACTR_rds;
extern A68_VOID  WSKACTR_labelfullname(A68_INT ,A68_VC *);
extern A68_VOID  UTKACTR_idfullname(A68_INT ,A68_VC *);
extern A68_VOID  DTKACTR_labelbuffername(A68_INT ,A68_VC *);
#define JQKACTR_idgprocflag 0X100U
#define RQKACTR_rdglobalflag 0X8U
extern A68_VOID  RTKACTR_labelenviron(A68_INT ,A68_61 *);
extern A68_BOOL  NTKACTR_labelisdeclared(A68_INT );
/* --- End of imports from idtable --- */


/* --- Imports from coutput --- */
extern A68_VOID  MDMACTR_writecstream(struct A68t92 ,A68_INT );
/* --- End of imports from coutput --- */


/* --- Imports from environment --- */
extern A68_VOID  WXIACTR_assert(A68_VC ,A68_BOOL );
/* --- End of imports from environment --- */


/* --- Imports from environ --- */
extern A68_INT  NSLACTR_codestream(A68_INT );
extern A68_INT  VRLACTR_currentlevel(void);
/* --- End of imports from environ --- */


/* --- Imports from centities --- */
extern A68_SINT  EIAACTR_cnewline;
extern A68_VOID  JIAACTR_bracket(A68_VC ,A68_VC *);
/* --- End of imports from centities --- */


/* --- Imports from usefulops --- */
extern A68_VOID  JDAAOSF_concat(struct A68t36 ,A68_VC *);
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
extern A68_VOID  JPAAOSF_lwhole(A68_LINT ,A68_INT ,A68_VC *);
extern A68_VOID  BQAAOSF_hex(A68_LBITS ,A68_INT ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void DNMACTR(void);   /* modes */
extern void GKJACTR(void);   /* incvalue */
extern void BAAACTR(void);   /* incid */
extern void XFAACTR(void);   /* incoperfn */
extern void ZDAACTR(void);   /* incmode */
extern void PPKACTR(void);   /* idtable */
extern void PTLACTR(void);   /* coutput */
extern void HPIACTR(void);   /* environment */
extern void BPLACTR(void);   /* environ */
extern void THAACTR(void);   /* centities */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_148   DUPACTR = {"$Id: values.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,EUPACTR,DUPACTR,56)
static A68_160   DYPACTR = {"VALUES - GETCONSTANT, value has no such component"}; 
A_GISVEC(A68_VC ,EYPACTR,DYPACTR,49)
static A68_161   IYPACTR = {"VALUES - ref string: level is invalid"}; 
A_GISVEC(A68_VC ,KYPACTR,IYPACTR,37)
static A68_162   SYPACTR = {"IDENTIFIERS - id ref level: ref levels are incompatable"}; 
A_GISVEC(A68_VC ,UYPACTR,SYPACTR,55)
static A68_163   ZYPACTR = {"NL("}; 
A_GISVEC(A68_VC ,AZPACTR,ZYPACTR,3)
static A68_167   LZPACTR = {"procedure value"}; 
A_GISVEC(A68_VC ,MZPACTR,LZPACTR,15)
static A68_168   TZPACTR = {".fn.fn_global = "}; 
A_GISVEC(A68_VC ,UZPACTR,TZPACTR,16)
static A68_169   CAQACTR = {".nonlocals = A68_NIL;"}; 
A_GISVEC(A68_VC ,DAQACTR,CAQACTR,21)
static A68_171   RAQACTR = {"VALUES - GETCFRAGMENT: attempt to take address of temporary"}; 
A_GISVEC(A68_VC ,SAQACTR,RAQACTR,59)
static A68_56   BBQACTR = {"A68_NIL"}; 
A_GISVEC(A68_VC ,CBQACTR,BBQACTR,7)
static A68_172   DBQACTR = {"/*SKIP*/"}; 
A_GISVEC(A68_VC ,EBQACTR,DBQACTR,8)
static A68_173   FBQACTR = {"/*EMPTY*/"}; 
A_GISVEC(A68_VC ,GBQACTR,FBQACTR,9)
static A68_174   HBQACTR = {"/* UNDEFINED NSE */"}; 
A_GISVEC(A68_VC ,IBQACTR,HBQACTR,19)
static A68_175   TBQACTR = {""}; 
A_GISVEC(A68_VC ,UBQACTR,TBQACTR,0)
static A68_176   ZBQACTR = {"VALUES: GETCRAGMENT: invalid id no"}; 
A_GISVEC(A68_VC ,CCQACTR,ZBQACTR,34)
static A68_177   GCQACTR = {"VALUES: GETCFRAGMENT: non-local used gproc"}; 
A_GISVEC(A68_VC ,HCQACTR,GCQACTR,42)
static A68_175   UCQACTR = {""}; 
A_GISVEC(A68_VC ,VCQACTR,UCQACTR,0)
static A68_171   BDQACTR = {"VALUES - GETCFRAGMENT: attempt to evaluate undeclared label"}; 
A_GISVEC(A68_VC ,CDQACTR,BDQACTR,59)
static A68_178   JDQACTR = {"VALUES - GETCFRAGMENT, value has no such component"}; 
A_GISVEC(A68_VC ,KDQACTR,JDQACTR,50)
static A68_183   UEQACTR = {"OPERAND - VALUE parameter is not a TREEOPER."}; 
A_GISVEC(A68_VC ,VEQACTR,UEQACTR,44)
static A68_185   ZEQACTR = {"VALUES - deref value: cannot deref value"}; 
A_GISVEC(A68_VC ,AFQACTR,ZEQACTR,40)
static A68_172   HFQACTR = {"SPARE op"}; 
A_GISVEC(A68_VC ,IFQACTR,HFQACTR,8)
static A68_172   LFQACTR = {"statgrab"}; 
A_GISVEC(A68_VC ,NFQACTR,LFQACTR,8)
static A68_186   OFQACTR = {"tree generator"}; 
A_GISVEC(A68_VC ,PFQACTR,OFQACTR,14)
static A68_187   QFQACTR = {"select"}; 
A_GISVEC(A68_VC ,RFQACTR,QFQACTR,6)
static A68_40   SFQACTR = {"copy"}; 
A_GISVEC(A68_VC ,TFQACTR,SFQACTR,4)
static A68_40   UFQACTR = {"trim"}; 
A_GISVEC(A68_VC ,VFQACTR,UFQACTR,4)
static A68_188   WFQACTR = {"simpleindex"}; 
A_GISVEC(A68_VC ,XFQACTR,WFQACTR,11)
static A68_173   YFQACTR = {"trimindex"}; 
A_GISVEC(A68_VC ,ZFQACTR,YFQACTR,9)
static A68_56   AGQACTR = {"dyngrab"}; 
A_GISVEC(A68_VC ,BGQACTR,AGQACTR,7)
static A68_173   CGQACTR = {"boundpack"}; 
A_GISVEC(A68_VC ,DGQACTR,CGQACTR,9)
static A68_173   EGQACTR = {"dyadic op"}; 
A_GISVEC(A68_VC ,FGQACTR,EGQACTR,9)
static A68_189   GGQACTR = {"monadic op"}; 
A_GISVEC(A68_VC ,HGQACTR,GGQACTR,10)
static A68_172   IGQACTR = {"straight"}; 
A_GISVEC(A68_VC ,JGQACTR,IGQACTR,8)
static A68_188   KGQACTR = {"prestraight"}; 
A_GISVEC(A68_VC ,LGQACTR,KGQACTR,11)
static A68_172   MGQACTR = {"strindex"}; 
A_GISVEC(A68_VC ,NGQACTR,MGQACTR,8)
static A68_187   OGQACTR = {"assign"}; 
A_GISVEC(A68_VC ,PGQACTR,OGQACTR,6)
static A68_186   QGQACTR = {"!! RS def. bnd"}; 
A_GISVEC(A68_VC ,RGQACTR,QGQACTR,14)
static A68_190   SGQACTR = {"deref"}; 
A_GISVEC(A68_VC ,TGQACTR,SGQACTR,5)
static A68_40   UGQACTR = {"call"}; 
A_GISVEC(A68_VC ,VGQACTR,UGQACTR,4)
static A68_40   WGQACTR = {"void"}; 
A_GISVEC(A68_VC ,XGQACTR,WGQACTR,4)
static A68_187   YGQACTR = {"niltom"}; 
A_GISVEC(A68_VC ,ZGQACTR,YGQACTR,6)
static A68_172   AHQACTR = {"gotoproc"}; 
A_GISVEC(A68_VC ,BHQACTR,AHQACTR,8)
static A68_190   CHQACTR = {"gotom"}; 
A_GISVEC(A68_VC ,DHQACTR,CHQACTR,5)
static A68_188   EHQACTR = {"realtocompl"}; 
A_GISVEC(A68_VC ,FHQACTR,EHQACTR,11)
static A68_173   GHQACTR = {"inttoreal"}; 
A_GISVEC(A68_VC ,HHQACTR,GHQACTR,9)
static A68_191   IHQACTR = {"68R inttobits"}; 
A_GISVEC(A68_VC ,JHQACTR,IHQACTR,13)
static A68_187   KHQACTR = {"arrarr"}; 
A_GISVEC(A68_VC ,LHQACTR,KHQACTR,6)
static A68_187   MHQACTR = {"vecarr"}; 
A_GISVEC(A68_VC ,NHQACTR,MHQACTR,6)
static A68_190   OHQACTR = {"isvec"}; 
A_GISVEC(A68_VC ,PHQACTR,OHQACTR,5)
static A68_192   QHQACTR = {"is"}; 
A_GISVEC(A68_VC ,RHQACTR,QHQACTR,2)
static A68_190   SHQACTR = {"unite"}; 
A_GISVEC(A68_VC ,THQACTR,SHQACTR,5)
static A68_187   UHQACTR = {"uniteu"}; 
A_GISVEC(A68_VC ,VHQACTR,UHQACTR,6)
static A68_190   WHQACTR = {"isarr"}; 
A_GISVEC(A68_VC ,XHQACTR,WHQACTR,5)
static A68_56   YHQACTR = {"skiptom"}; 
A_GISVEC(A68_VC ,ZHQACTR,YHQACTR,7)
static A68_163   AIQACTR = {"vec"}; 
A_GISVEC(A68_VC ,BIQACTR,AIQACTR,3)
static A68_163   CIQACTR = {"arr"}; 
A_GISVEC(A68_VC ,DIQACTR,CIQACTR,3)
static A68_56   EIQACTR = {"deunite"}; 
A_GISVEC(A68_VC ,FIQACTR,EIQACTR,7)
static A68_191   GIQACTR = {"bitstov[]bool"}; 
A_GISVEC(A68_VC ,HIQACTR,GIQACTR,13)
static A68_163   IIQACTR = {"vac"}; 
A_GISVEC(A68_VC ,JIQACTR,IIQACTR,3)
static A68_172   KIQACTR = {"ytypetom"}; 
A_GISVEC(A68_VC ,LIQACTR,KIQACTR,8)
static A68_172   MIQACTR = {"mtoxtype"}; 
A_GISVEC(A68_VC ,NIQACTR,MIQACTR,8)
static A68_168   OIQACTR = {"static generator"}; 
A_GISVEC(A68_VC ,PIQACTR,OIQACTR,16)
static A68_187   QIQACTR = {"format"}; 
A_GISVEC(A68_VC ,RIQACTR,QIQACTR,6)
static A68_192   SIQACTR = {" ?"}; 
A_GISVEC(A68_VC ,UIQACTR,SIQACTR,2)
static A68_163   YIQACTR = {"NIL"}; 
A_GISVEC(A68_VC ,AJQACTR,YIQACTR,3)
static A68_189   DJQACTR = {"SKIP value"}; 
A_GISVEC(A68_VC ,EJQACTR,DJQACTR,10)
static A68_189   FJQACTR = {"skip value"}; 
A_GISVEC(A68_VC ,GJQACTR,FJQACTR,10)
static A68_192   HJQACTR = {"( "}; 
static A68_192   IJQACTR = {", "}; 
static A68_190   KJQACTR = {"EMPTY"}; 
A_GISVEC(A68_VC ,MJQACTR,KJQACTR,5)
static A68_189   OJQACTR = {"constant: "}; 
A_GISVEC(A68_VC ,PJQACTR,OJQACTR,10)
static A68_56   SJQACTR = {"label: "}; 
A_GISVEC(A68_VC ,TJQACTR,SJQACTR,7)
static A68_195   WJQACTR = {"identifier: "}; 
A_GISVEC(A68_VC ,XJQACTR,WJQACTR,12)
static A68_188   AKQACTR = {"temporary: "}; 
A_GISVEC(A68_VC ,BKQACTR,AKQACTR,11)
static A68_188   FKQACTR = {"cfragment: "}; 
A_GISVEC(A68_VC ,GKQACTR,FKQACTR,11)
static A68_195   IKQACTR = {"empty or vac"}; 
A_GISVEC(A68_VC ,JKQACTR,IKQACTR,12)
static A68_40   KKQACTR = {"skip"}; 
A_GISVEC(A68_VC ,LKQACTR,KKQACTR,4)
static A68_163   MKQACTR = {"nil"}; 
A_GISVEC(A68_VC ,NKQACTR,MKQACTR,3)
static A68_118   OKQACTR = {"TRACER - Unknown nse constituent"}; 
A_GISVEC(A68_VC ,PKQACTR,OKQACTR,32)
static A68_186   RKQACTR = {" routineinfo: "}; 
A_GISVEC(A68_VC ,SKQACTR,RKQACTR,14)
static A68_163   YKQACTR = {" ( "}; 
static A68_172   ZKQACTR = {", .... )"}; 
A_GISVEC(A68_VC ,ALQACTR,YKQACTR,3)
A_GISVEC(A68_VC ,CLQACTR,ZKQACTR,8)
static A68_163   DLQACTR = {" ( "}; 
static A68_189   ELQACTR = {", no ops: "}; 
static A68_173   FLQACTR = {", param: "}; 
static A68_192   GLQACTR = {" )"}; 
A_GISVEC(A68_VC ,HLQACTR,DLQACTR,3)
A_GISVEC(A68_VC ,JLQACTR,ELQACTR,10)
A_GISVEC(A68_VC ,MLQACTR,FLQACTR,9)
A_GISVEC(A68_VC ,OLQACTR,GLQACTR,2)
static A68_196   PLQACTR = {"TRACER - Unknown EXTRA in value"}; 
A_GISVEC(A68_VC ,QLQACTR,PLQACTR,31)
static A68_192   RLQACTR = {" )"}; 
A_GISVEC(A68_VC ,SLQACTR,HJQACTR,2)
A_GISVEC(A68_VC ,ULQACTR,IJQACTR,2)
A_GISVEC(A68_VC ,VLQACTR,RLQACTR,2)
static A68_199   GMQACTR = {"VALUES - uvalue to cfragment: unknown constituent of union"}; 
A_GISVEC(A68_VC ,HMQACTR,GMQACTR,58)
static A68_202   LMQACTR = {"VALUES - join uvalue: no parameters"}; 
A_GISVEC(A68_VC ,MMQACTR,LMQACTR,35)
static A68_203   CNQACTR = {"VALUES - comma separate: no parameters"}; 
A_GISVEC(A68_VC ,DNQACTR,CNQACTR,38)
static A68_163   XOQACTR = {" = "}; 
A_GISVEC(A68_VC ,YOQACTR,XOQACTR,3)
static A68_192   DPQACTR = {" ;"}; 
A_GISVEC(A68_VC ,EPQACTR,DPQACTR,2)
static A68_190   LPQACTR = {"YIELD"}; 
A_GISVEC(A68_VC ,OPQACTR,LPQACTR,5)
typedef struct   /* env of non-global proc */
{
int dummy;
} QMQACTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} HNQACTR_generator;

A68_108 * JUPACTR_tree(A68_INT  Mode, A68_INT  Fn, A68_BITS  Param, A68_149  Operands);

A_STATIC A68_115 * SUPACTR_assignment(A68_115 * QUPACTR_anonymous, A68_115  RUPACTR_anonymous);

A_STATIC A68_108 * VUPACTR_assignment(A68_108 * TUPACTR_anonymous, A68_108  UUPACTR_anonymous);

A_STATIC A68_109 * AVPACTR_assignment(A68_109 * YUPACTR_anonymous, A68_109  ZUPACTR_anonymous);

A_STATIC A68_BITS  QVPACTR_xor(A68_BITS  A, A68_BITS  B);

A68_BOOL  UVPACTR_hasattribute(A68_108 * Value, A68_BITS  A);

A68_BOOL  ZVPACTR_(A68_108 * V1, A68_108 * V2);

A68_BOOL  IWPACTR_(A68_108 * V1, A68_108 * V2);

A68_BOOL  LWPACTR_isconstant(A68_108 * Value);

A68_BOOL  QWPACTR_isconstant(A68_108 * Value, A68_LBITS  Const);

A_STATIC A68_BOOL  VWPACTR_isroutineinfo(A68_108 * Value);

A_STATIC A68_BOOL  ZWPACTR_isatomic(A68_108 * Value);

A68_BOOL  EXPACTR_isident(A68_108 * Value);

A68_BOOL  IXPACTR_istemp(A68_108 * Value);

A68_BOOL  MXPACTR_iscfragment(A68_108 * Value);

A68_BOOL  QXPACTR_isskip(A68_108 * Value);

A68_BOOL  VXPACTR_isaname(A68_108 * Op);

A68_LBITS  ZXPACTR_getconstant(A68_108 * Value);

A_STATIC A68_VOID  HYPACTR_refstring(A68_INT  Level, A68_VC  *ReturnedValue);

A68_INT  PYPACTR_idreflevel(A68_INT  Mode, A68_INT  Ctype);

A68_VOID  XYPACTR_nlmacro(A68_VC  Cf, A68_VC  *ReturnedValue);

A68_VOID  GZPACTR_getcfragment(A68_108 * Value, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  KZPACTR_makeprocvalue(A68_VC  Name, A68_INT  Mode, A68_VC  *ReturnedValue);

A68_VOID  NDQACTR_bracketcfragment(A68_108 * Value, A68_VC  *ReturnedValue);

A68_108 * UDQACTR_indexvaluelist(A68_115 * List, A68_INT  Index);

A68_115 * AEQACTR_reversevaluelist(A68_115 * List);

A68_INT  HEQACTR_operandsof(A68_114  Treeoper);

A68_INT  LEQACTR_paramof(A68_114  Treeoper);

A68_108 * PEQACTR_operand(A68_108 * Oper, A68_INT  Rand);

A68_VOID  YEQACTR_derefvalue(A68_108 * Value);

A68_VOID  DFQACTR_enrefvalue(A68_108 * Value);

A_STATIC A68_VOID  GFQACTR_fnname(A68_INT  Fn, A68_VC  *ReturnedValue);

A68_VOID  XIQACTR_valuestring(A68_108 * Value, A68_BOOL  Brief, A68_VC  *ReturnedValue);

A68_VOID  XLQACTR_uvaluetocfragment(A68_197  U, A68_VC  *ReturnedValue);

A68_VOID  KMQACTR_joinuvalue(A68_200  Items, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  PMQACTR_generator(A68_BOOL  NMQACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BNQACTR_commaseparate(A68_200  Items, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  GNQACTR_generator(A68_BOOL  ENQACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  YNQACTR_commalist(A68_200  Items, A68_VC  *ReturnedValue);

A68_VOID  EOQACTR_usemacro(A68_VC  Macro, A68_200  Arguments, A68_VC  *ReturnedValue);

A68_VOID  JOQACTR_emitline(A68_200  Uv);

A68_VOID  SOQACTR_yieldtemporary(A68_VC  Comment, A68_INT  Mode, A68_200  Op, A68_112  *ReturnedValue);

A68_108 * KPQACTR_yield(A68_108 * Op);

A68_108 * VPQACTR_yield(A68_VC  Comment, A68_108 * Op);

A_STATIC A68_109 * AVPACTR_assignment(A68_109 * YUPACTR_anonymous, A68_109  ZUPACTR_anonymous)
{ 
A68_109  BVPACTR;  /* united object - for case conformity */
A68_VC  CVPACTR_anonymous;
A68_VC  DVPACTR;  /* OPERATORS - copy to flex */
A68_154 * EVPACTR;  /* YIELD */
A68_109 * FVPACTR;  /* clause result */
{ 
(*YUPACTR_anonymous) = ZUPACTR_anonymous;
BVPACTR = ZUPACTR_anonymous ;
switch ( BVPACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
CVPACTR_anonymous = (BVPACTR.data.mode6);
EVPACTR = &(YUPACTR_anonymous-> data.mode6) ;
(*EVPACTR) = A_VCOPY(CVPACTR_anonymous,DVPACTR,A68_CHAR );
break;
default: 
/*SKIP*/;
break;
} 
FVPACTR = YUPACTR_anonymous;
} 
return( FVPACTR );
} 
#undef NL

A_STATIC A68_108 * VUPACTR_assignment(A68_108 * TUPACTR_anonymous, A68_108  UUPACTR_anonymous)
{ 
A68_INT * WUPACTR;  /* YIELD */
A68_BITS * XUPACTR;  /* YIELD */
A68_108 * GVPACTR;  /* clause result */
{ 
WUPACTR = (&(TUPACTR_anonymous->Mode)) ;
(*WUPACTR) = UUPACTR_anonymous.Mode;
XUPACTR = (&(TUPACTR_anonymous->Info)) ;
(*XUPACTR) = UUPACTR_anonymous.Info;
AVPACTR_assignment((&(TUPACTR_anonymous->Extra)), UUPACTR_anonymous.Extra);
GVPACTR = TUPACTR_anonymous;
} 
return( GVPACTR );
} 
#undef NL

A_STATIC A68_115 * SUPACTR_assignment(A68_115 * QUPACTR_anonymous, A68_115  RUPACTR_anonymous)
{ 
A68_115 ** HVPACTR;  /* YIELD */
A68_115 * IVPACTR;  /* clause result */
{ 
VUPACTR_assignment((&(QUPACTR_anonymous->Value)), RUPACTR_anonymous.Value);
HVPACTR = (&(QUPACTR_anonymous->Rest)) ;
(*HVPACTR) = RUPACTR_anonymous.Rest;
IVPACTR = QUPACTR_anonymous;
} 
return( IVPACTR );
} 
#undef NL

A_STATIC A68_VOID  KZPACTR_makeprocvalue(A68_VC  Name, A68_INT  Mode, A68_VC  *ReturnedValue)
{ 
A68_112  NZPACTR;  /* avoid structure result */
A68_VC  OZPACTR;  /* OPERATORS - istruct -> vector */
A68_56  PZPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  QZPACTR_tempname;
A68_170  RZPACTR;  /* collateral clause result */
A68_93  SZPACTR;  /* OPERATORS - mode -> union mode */
A68_93  VZPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  WZPACTR;  /* YIELD */
A68_93  XZPACTR;  /* OPERATORS - mode -> union mode */
A68_93  YZPACTR;  /* OPERATORS - mode -> union mode */
A68_CHAR  ZZPACTR;  /* YIELD */
A68_93  AAQACTR;  /* OPERATORS - mode -> union mode */
A68_93  BAQACTR;  /* OPERATORS - mode -> union mode */
A68_93  EAQACTR;  /* OPERATORS - mode -> union mode */
A68_VC  FAQACTR;  /* YIELD */
A68_93  GAQACTR;  /* OPERATORS - mode -> union mode */
A68_92  HAQACTR;  /* OPERATORS - istruct -> vector */
A68_VC  IAQACTR;  /* clause result */
A_PROC_ENTRY(makeprocvalue);
 /* line 189: */
 /* line 190: */
{ 
LLOACTR_declarectemporary( Mode, MZPACTR, &NZPACTR );
PZPACTR = NZPACTR.Name ;
QZPACTR_tempname = A_HISVEC(OZPACTR,PZPACTR,7,A68_CHAR );
 /* line 191: */
 /* line 192: */
RZPACTR.data[0] = A_UNITE(SZPACTR,mode2,2,QZPACTR_tempname);
WZPACTR = UZPACTR ;
RZPACTR.data[1] = A_UNITE(VZPACTR,mode2,2,WZPACTR);
RZPACTR.data[2] = A_UNITE(XZPACTR,mode2,2,Name);
ZZPACTR = ';' ;
RZPACTR.data[3] = A_UNITE(YZPACTR,mode1,1,ZZPACTR);
 /* line 193: */
RZPACTR.data[4] = A_UNITE(AAQACTR,mode4,4,EIAACTR_cnewline);
RZPACTR.data[5] = A_UNITE(BAQACTR,mode2,2,QZPACTR_tempname);
 /* line 194: */
FAQACTR = DAQACTR ;
RZPACTR.data[6] = A_UNITE(EAQACTR,mode2,2,FAQACTR);
RZPACTR.data[7] = A_UNITE(GAQACTR,mode4,4,EIAACTR_cnewline);
 /* line 195: */
MDMACTR_writecstream(A_HISVEC(HAQACTR,RZPACTR,8,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel()));
 /* line 196: */
 /* line 197: */
IAQACTR = QZPACTR_tempname;
} 
A_PROC_EXIT(makeprocvalue);
*ReturnedValue = (IAQACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  PMQACTR_generator(A68_BOOL  NMQACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((QMQACTR_generator *)NonLocals)->x)
{ 
A68_VC  RMQACTR;  /* clause result */
A68_VC  SMQACTR;  /* OPERATORS - dynamic generator */
{ 
SMQACTR.upb = 0 ;
( NMQACTR_anonymous? A_VLOC(A68_CHAR ,SMQACTR): A_VHEAP(A68_CHAR ,SMQACTR) );
RMQACTR = SMQACTR;
} 
*ReturnedValue = (RMQACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  GNQACTR_generator(A68_BOOL  ENQACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((HNQACTR_generator *)NonLocals)->x)
{ 
A68_VC  INQACTR;  /* clause result */
A68_VC  JNQACTR;  /* OPERATORS - dynamic generator */
{ 
JNQACTR.upb = 0 ;
( ENQACTR_anonymous? A_VLOC(A68_CHAR ,JNQACTR): A_VHEAP(A68_CHAR ,JNQACTR) );
INQACTR = JNQACTR;
} 
*ReturnedValue = (INQACTR);
return;
} 
#undef NL

A68_108 * JUPACTR_tree(A68_INT  Mode, A68_INT  Fn, A68_BITS  Param, A68_149  Operands)
{ 
A68_115 * KUPACTR_operandlist;
A68_INT  LUPACTR_upboperands;
A68_108 * MUPACTR_operand;
A68_108 ** NUPACTR;  /* forall control - []x */
A68_INT  OUPACTR;  /* forall loop counter */
A68_115  PUPACTR;  /* collateral clause result */
A68_108  JVPACTR;  /* collateral clause result */
A68_114  KVPACTR;  /* collateral clause result */
A68_BITS  LVPACTR;  /* SHL */
A68_109  MVPACTR;  /* OPERATORS - mode -> union mode */
A68_108 * NVPACTR;  /* clause result */
A_PROC_ENTRY(tree);
 /* line 54: */
 /* line 55: */
{ 
KUPACTR_operandlist = (A68_115 *)A68_NIL;
 /* line 56: */
LUPACTR_upboperands = Operands.upb;
 /* line 58: */
 /* line 59: */
OUPACTR = Operands.upb -1;
NUPACTR = Operands.data;
for (;OUPACTR-- >= 0;
(NUPACTR++
) )
{
MUPACTR_operand = *NUPACTR;
PUPACTR.Value = (*MUPACTR_operand);
 /* line 60: */
PUPACTR.Rest = KUPACTR_operandlist;
KUPACTR_operandlist = SUPACTR_assignment(A_HEAP(A68_115 ), PUPACTR);
}
 /* line 62: */
 /* line 63: */
 /* line 64: */
JVPACTR.Mode = Mode;
 /* line 66: */
JVPACTR.Info = PKJACTR_defaultinfo;
 /* line 67: */
KVPACTR.Fn = Fn;
 /* line 69: */
LVPACTR = (A68_BITS )LUPACTR_upboperands ;
KVPACTR.Param = (A68_INT )(A68_BITS )(A_SHL(LVPACTR,WGAACTR_operandsshift)|(A68_BITS )(Param&ZGAACTR_parammask));
 /* line 70: */
KVPACTR.Operands = KUPACTR_operandlist;
 /* line 71: */
JVPACTR.Extra = A_UNITE(MVPACTR,mode9,9,KVPACTR);
NVPACTR = VUPACTR_assignment(A_HEAP(A68_108 ), JVPACTR);
} 
A_PROC_EXIT(tree);
return( NVPACTR );
} 
#undef NL

A_STATIC A68_BITS  QVPACTR_xor(A68_BITS  A, A68_BITS  B)
{ 
A68_BITS  RVPACTR;  /* clause result */
A_PROC_ENTRY(xor);
RVPACTR = (A68_BITS )((A68_BITS )(A|B)&~(A68_BITS )(A&B));
A_PROC_EXIT(xor);
return( RVPACTR );
} 
#undef NL

A68_BOOL  UVPACTR_hasattribute(A68_108 * Value, A68_BITS  A)
{ 
A68_BOOL  VVPACTR;  /* clause result */
A68_BITS  WVPACTR;  /* ADICOPS - >= */
A_PROC_ENTRY(hasattribute);
 /* line 81: */
WVPACTR = (*(&(Value->Info))) ;
VVPACTR = A_LB_GE(WVPACTR,A);
A_PROC_EXIT(hasattribute);
return( VVPACTR );
} 
#undef NL

A68_BOOL  ZVPACTR_(A68_108 * V1, A68_108 * V2)
{ 
A68_109  AWPACTR;  /* united object - for case conformity */
A68_109  BWPACTR;  /* united object - for case conformity */
A68_BOOL  CWPACTR;  /* clause result */
A68_LBITS  DWPACTR_b1;
A68_109  EWPACTR;  /* united object - for case conformity */
A68_LBITS  FWPACTR_b2;
A_PROC_ENTRY(=);
 /* line 90: */
 /* line 91: */
AWPACTR = (*(&(V1->Extra))) ;
switch ( AWPACTR.mode )
{ 
case 3: /* VOID */
 /* line 92: */
BWPACTR = (*(&(V2->Extra))) ;
switch ( BWPACTR.mode )
{ 
case 3: /* VOID */
 /* line 93: */
CWPACTR = ((*(&(V1->Mode)))==(*(&(V2->Mode))));
break;
default: 
 /* line 94: */
 /* line 95: */
CWPACTR = A68_FALSE;
break;
} 
break;
case 1: /* LONG BITS */
DWPACTR_b1 = (AWPACTR.data.mode1);
EWPACTR = (*(&(V2->Extra))) ;
switch ( EWPACTR.mode )
{ 
case 1: /* LONG BITS */
FWPACTR_b2 = (EWPACTR.data.mode1);
CWPACTR = (DWPACTR_b1==FWPACTR_b2);
break;
default: 
 /* line 96: */
CWPACTR = A68_FALSE;
break;
} 
break;
default: 
 /* line 97: */
CWPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(=);
return( CWPACTR );
} 
#undef NL

A68_BOOL  IWPACTR_(A68_108 * V1, A68_108 * V2)
{ 
A68_BOOL  JWPACTR;  /* clause result */
A_PROC_ENTRY(/=);
JWPACTR = !ZVPACTR_(V1, V2);
A_PROC_EXIT(/=);
return( JWPACTR );
} 
#undef NL

A68_BOOL  LWPACTR_isconstant(A68_108 * Value)
{ 
A68_109  MWPACTR;  /* united object - for case conformity */
A68_BOOL  NWPACTR;  /* clause result */
A_PROC_ENTRY(isconstant);
 /* line 106: */
MWPACTR = (*(&(Value->Extra))) ;
switch ( MWPACTR.mode )
{ 
case 1: /* LONG BITS */
NWPACTR = A68_TRUE;
break;
case 6: /* VECTOR [] CHAR */
NWPACTR = UVPACTR_hasattribute(Value, QKJACTR_constant);
break;
default: 
NWPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(isconstant);
return( NWPACTR );
} 
#undef NL

A68_BOOL  QWPACTR_isconstant(A68_108 * Value, A68_LBITS  Const)
{ 
A68_109  RWPACTR;  /* united object - for case conformity */
A68_LBITS  SWPACTR_b;
A68_BOOL  TWPACTR;  /* clause result */
A_PROC_ENTRY(isconstant);
 /* line 109: */
RWPACTR = (*(&(Value->Extra))) ;
switch ( RWPACTR.mode )
{ 
case 1: /* LONG BITS */
SWPACTR_b = (RWPACTR.data.mode1);
TWPACTR = (SWPACTR_b==Const);
break;
default: 
TWPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(isconstant);
return( TWPACTR );
} 
#undef NL

A_STATIC A68_BOOL  VWPACTR_isroutineinfo(A68_108 * Value)
{ 
A68_109  WWPACTR;  /* united object - for case conformity */
A68_BOOL  XWPACTR;  /* clause result */
A_PROC_ENTRY(isroutineinfo);
 /* line 112: */
WWPACTR = (*(&(Value->Extra))) ;
switch ( WWPACTR.mode )
{ 
case 2: /* STRUCT(INT)  */
XWPACTR = A68_TRUE;
break;
default: 
XWPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(isroutineinfo);
return( XWPACTR );
} 
#undef NL

A_STATIC A68_BOOL  ZWPACTR_isatomic(A68_108 * Value)
{ 
A68_109  AXPACTR;  /* united object - for case conformity */
A68_BOOL  BXPACTR;  /* clause result */
A68_BOOL  CXPACTR;  /* optbool result */
A_PROC_ENTRY(isatomic);
 /* line 115: */
 /* line 116: */
AXPACTR = (*(&(Value->Extra))) ;
switch ( AXPACTR.mode )
{ 
case 1: /* LONG BITS */
 /* line 117: */
BXPACTR = A68_TRUE;
break;
case 5: /* STRUCT(MODE56,INT)  */
 /* line 118: */
BXPACTR = A68_TRUE;
break;
case 4: /* STRUCT(INT)  */
 /* line 119: */
BXPACTR = A68_TRUE;
break;
case 6: /* VECTOR [] CHAR */
CXPACTR = UVPACTR_hasattribute(Value, QKJACTR_constant);
if ( ! CXPACTR )
{ /* line 120: */
CXPACTR = UVPACTR_hasattribute(Value, RKJACTR_atomic);
}
BXPACTR = CXPACTR;
break;
default: 
 /* line 121: */
BXPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(isatomic);
return( BXPACTR );
} 
#undef NL

A68_BOOL  EXPACTR_isident(A68_108 * Value)
{ 
A68_109  FXPACTR;  /* united object - for case conformity */
A68_BOOL  GXPACTR;  /* clause result */
A_PROC_ENTRY(isident);
 /* line 127: */
FXPACTR = (*(&(Value->Extra))) ;
switch ( FXPACTR.mode )
{ 
case 4: /* STRUCT(INT)  */
GXPACTR = A68_TRUE;
break;
default: 
GXPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(isident);
return( GXPACTR );
} 
#undef NL

A68_BOOL  IXPACTR_istemp(A68_108 * Value)
{ 
A68_109  JXPACTR;  /* united object - for case conformity */
A68_BOOL  KXPACTR;  /* clause result */
A_PROC_ENTRY(istemp);
 /* line 130: */
JXPACTR = (*(&(Value->Extra))) ;
switch ( JXPACTR.mode )
{ 
case 5: /* STRUCT(MODE56,INT)  */
KXPACTR = A68_TRUE;
break;
default: 
KXPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(istemp);
return( KXPACTR );
} 
#undef NL

A68_BOOL  MXPACTR_iscfragment(A68_108 * Value)
{ 
A68_109  NXPACTR;  /* united object - for case conformity */
A68_BOOL  OXPACTR;  /* clause result */
A_PROC_ENTRY(iscfragment);
 /* line 133: */
NXPACTR = (*(&(Value->Extra))) ;
switch ( NXPACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
OXPACTR = A68_TRUE;
break;
default: 
OXPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(iscfragment);
return( OXPACTR );
} 
#undef NL

A68_BOOL  QXPACTR_isskip(A68_108 * Value)
{ 
A68_109  RXPACTR;  /* united object - for case conformity */
A68_113  SXPACTR_tn;
A68_BOOL  TXPACTR;  /* clause result */
A_PROC_ENTRY(isskip);
 /* line 136: */
RXPACTR = (*(&(Value->Extra))) ;
switch ( RXPACTR.mode )
{ 
case 8: /* STRUCT(INT)  */
SXPACTR_tn = (RXPACTR.data.mode8);
TXPACTR = (SXPACTR_tn.Nse==2);
break;
default: 
TXPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(isskip);
return( TXPACTR );
} 
#undef NL

A68_BOOL  VXPACTR_isaname(A68_108 * Op)
{ 
A68_109  WXPACTR;  /* united object - for case conformity */
A68_BOOL  XXPACTR;  /* clause result */
A_PROC_ENTRY(isaname);
 /* line 139: */
 /* line 140: */
WXPACTR = (*(&(Op->Extra))) ;
switch ( WXPACTR.mode )
{ 
case 4: /* STRUCT(INT)  */
 /* line 141: */
XXPACTR = A68_TRUE;
break;
case 5: /* STRUCT(MODE56,INT)  */
 /* line 142: */
XXPACTR = A68_TRUE;
break;
default: 
 /* line 143: */
XXPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(isaname);
return( XXPACTR );
} 
#undef NL

A68_LBITS  ZXPACTR_getconstant(A68_108 * Value)
{ 
A68_109  AYPACTR;  /* united object - for case conformity */
A68_LBITS  BYPACTR_b;
A68_LBITS  CYPACTR;  /* clause result */
A68_LBITS  FYPACTR;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(getconstant);
 /* line 146: */
 /* line 147: */
AYPACTR = (*(&(Value->Extra))) ;
switch ( AYPACTR.mode )
{ 
case 1: /* LONG BITS */
BYPACTR_b = (AYPACTR.data.mode1);
 /* line 148: */
CYPACTR = BYPACTR_b;
break;
default: 
WXIACTR_assert(EYPACTR, A68_FALSE);
 /* line 149: */
CYPACTR = FYPACTR;
break;
} 
A_PROC_EXIT(getconstant);
return( CYPACTR );
} 
#undef NL

A_STATIC A68_VOID  HYPACTR_refstring(A68_INT  Level, A68_VC  *ReturnedValue)
{ 
A68_BOOL  JYPACTR;  /* optbool result */
A68_CHAR  LYPACTR;  /* clause result */
A68_VC  MYPACTR;  /* clause result */
A_PROC_ENTRY(refstring);
 /* line 161: */
 /* line 162: */
{ 
JYPACTR = (Level>=(-1));
if ( JYPACTR )
{JYPACTR = (Level<32);
}
WXIACTR_assert(KYPACTR, JYPACTR);
 /* line 163: */
if ( (Level>0) )
{ 
LYPACTR = '*';
} 
else
{ 
 /* line 164: */
LYPACTR = '&';
} 
MYPACTR = A_C_TIMES(LYPACTR,A_ABS(Level));
} 
A_PROC_EXIT(refstring);
*ReturnedValue = (MYPACTR);
return;
} 
#undef NL

A68_INT  PYPACTR_idreflevel(A68_INT  Mode, A68_INT  Ctype)
{ 
A68_BOOL  QYPACTR_firmarray;
A68_INT  RYPACTR_diff;
A68_BOOL  TYPACTR;  /* optbool result */
A68_INT  VYPACTR;  /* clause result */
A_PROC_ENTRY(idreflevel);
 /* line 167: */
 /* line 168: */
{ 
QYPACTR_firmarray = FRMACTR_isfirmarray(Mode);
 /* line 169: */
 /* line 170: */
 /* line 172: */
 /* line 173: */
 /* line 174: */
 /* line 175: */
RYPACTR_diff = (((Ctype/VFAACTR_refmark)+(QYPACTR_firmarray))-((Mode/VFAACTR_refmark)+((QYPACTR_firmarray&!RSMACTR_hasrefs(Mode)))));
 /* line 176: */
 /* line 177: */
TYPACTR = (RYPACTR_diff>=0);
if ( ! TYPACTR )
{TYPACTR = (RYPACTR_diff==(-1));
}
WXIACTR_assert(UYPACTR, TYPACTR);
 /* line 178: */
 /* line 179: */
VYPACTR = RYPACTR_diff;
} 
A_PROC_EXIT(idreflevel);
return( VYPACTR );
} 
#undef NL

A68_VOID  XYPACTR_nlmacro(A68_VC  Cf, A68_VC  *ReturnedValue)
{ 
A68_164  YYPACTR;  /* collateral clause result */
A68_VC  BZPACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  CZPACTR;  /* clause result */
A68_36  DZPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  EZPACTR;  /* avoid structure result */
A_PROC_ENTRY(nlmacro);
YYPACTR.data[0] = AZPACTR;
YYPACTR.data[1] = Cf;
YYPACTR.data[2] = A_HVEC(BZPACTR,')',A68_CHAR );
JDAAOSF_concat( A_HISVEC(DZPACTR,YYPACTR,3,A68_VC ), &EZPACTR );
CZPACTR = EZPACTR;
A_PROC_EXIT(nlmacro);
*ReturnedValue = (CZPACTR);
return;
} 
#undef NL

A68_VOID  GZPACTR_getcfragment(A68_108 * Value, A68_VC  *ReturnedValue)
{ 
A68_109  JAQACTR;  /* united object - for case conformity */
A68_VC  KAQACTR_c;
A68_VC  LAQACTR;  /* clause result */
A68_112  MAQACTR_t;
A68_INT  NAQACTR_vmode;
A68_INT  OAQACTR;  /* clause result */
A68_INT  PAQACTR_rmode;
A68_INT  QAQACTR_diff;
A68_VC  TAQACTR;  /* avoid structure result */
A68_VC  UAQACTR;  /* OPERATORS - istruct -> vector */
A68_56  VAQACTR;  /* OPERATORS - istruct -> vector */
A68_VC  WAQACTR_result;
A68_VC  XAQACTR;  /* avoid structure result */
A68_LBITS  YAQACTR_b;
A68_VC  ZAQACTR;  /* avoid structure result */
A68_113  ABQACTR_nihil;
A68_110  JBQACTR_r;
A68_INT  KBQACTR_rd;
A68_BOOL  LBQACTR;  /* clause result */
A68_95 * MBQACTR_rdinfo;
A68_BITS  NBQACTR;  /* ADICOPS - >= */
A68_VC  OBQACTR;  /* avoid structure result */
A68_VC  PBQACTR;  /* avoid structure result */
A68_VC  QBQACTR;  /* avoid structure result */
A68_VC  RBQACTR;  /* avoid structure result */
A68_VC  SBQACTR;  /* avoid structure result */
A68_111  VBQACTR_i;
A68_BOOL  WBQACTR_bracketsrequired;
A68_BOOL  XBQACTR_nonlocal;
A68_INT  YBQACTR_id;
A68_BOOL  ACQACTR;  /* optbool result */
A68_BOOL  BCQACTR;  /* optbool result */
A68_94 * DCQACTR_idinfo;
A68_BITS  ECQACTR;  /* ADICOPS - >= */
A68_BOOL  FCQACTR_isgproc;
A68_VC  ICQACTR;  /* clause result */
A68_VC  JCQACTR;  /* avoid structure result */
A68_VC  KCQACTR;  /* avoid structure result */
A68_INT  LCQACTR;  /* clause result */
A68_INT  MCQACTR_reqda68mode;
A68_INT  NCQACTR;  /* clause result */
A68_INT  OCQACTR_reqdcmode;
A68_INT  PCQACTR_diff;
A68_VC  QCQACTR;  /* avoid structure result */
A68_VC  RCQACTR;  /* clause result */
A68_VC  SCQACTR;  /* avoid structure result */
A68_VC  TCQACTR;  /* avoid structure result */
A68_VC  WCQACTR;  /* avoid structure result */
A68_VC  XCQACTR_body;
A68_VC  YCQACTR;  /* avoid structure result */
A68_57  ZCQACTR_label;
A68_INT  ADQACTR_l;
A68_VC  DDQACTR;  /* avoid structure result */
A68_61  EDQACTR;  /* avoid structure result */
A68_VC  FDQACTR;  /* avoid structure result */
A68_VC  GDQACTR;  /* avoid structure result */
A68_VC  HDQACTR;  /* avoid structure result */
A68_VC  IDQACTR;  /* avoid structure result */
A68_VC  LDQACTR;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(getcfragment);
 /* line 187: */
 /* line 188: */
{ 
 /* line 199: */
 /* line 201: */
JAQACTR = (*(&(Value->Extra))) ;
switch ( JAQACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
KAQACTR_c = (JAQACTR.data.mode6);
 /* line 203: */
LAQACTR = KAQACTR_c;
break;
case 5: /* STRUCT(MODE56,INT)  */
MAQACTR_t = (JAQACTR.data.mode5);
 /* line 204: */
{ 
NAQACTR_vmode = (*(&(Value->Mode)));
 /* line 205: */
 /* line 206: */
 /* line 207: */
if ( UVPACTR_hasattribute(Value, VKJACTR_lvalue) )
{ 
 /* line 208: */
 /* line 209: */
OAQACTR = BTMACTR_derefmode(NAQACTR_vmode);
} 
else
{ 
OAQACTR = NAQACTR_vmode;
} 
PAQACTR_rmode = OAQACTR;
 /* line 210: */
QAQACTR_diff = PYPACTR_idreflevel(PAQACTR_rmode, MAQACTR_t.Mode);
 /* line 211: */
 /* line 212: */
WXIACTR_assert(SAQACTR, (QAQACTR_diff>=0));
 /* line 213: */
HYPACTR_refstring( QAQACTR_diff, &TAQACTR );
VAQACTR = MAQACTR_t.Name ;
WAQACTR_result = A_VC_PLUS(TAQACTR,A_HISVEC(UAQACTR,VAQACTR,7,A68_CHAR ));
 /* line 214: */
if ( (QAQACTR_diff>0) )
{ 
JIAACTR_bracket( WAQACTR_result, &XAQACTR );
LAQACTR = XAQACTR;
} 
else
{ 
 /* line 215: */
 /* line 217: */
LAQACTR = WAQACTR_result;
} 
} 
break;
case 1: /* LONG BITS */
YAQACTR_b = (JAQACTR.data.mode1);
 /* line 219: */
JPAAOSF_lwhole( (A68_LINT )YAQACTR_b, 0, &ZAQACTR );
LAQACTR = ZAQACTR;
break;
case 8: /* STRUCT(INT)  */
ABQACTR_nihil = (JAQACTR.data.mode8);
 /* line 220: */
 /* line 221: */
switch ( ABQACTR_nihil.Nse )
{ 
case 1: 
LAQACTR = CBQACTR;
break;
case 2: 
 /* line 222: */
LAQACTR = EBQACTR;
break;
case 3: 
 /* line 223: */
LAQACTR = GBQACTR;
break;
default: 
 /* line 225: */
LAQACTR = IBQACTR;
break;
} 
break;
case 2: /* STRUCT(INT)  */
JBQACTR_r = (JAQACTR.data.mode2);
 /* line 226: */
{ 
{ 
KBQACTR_rd = JBQACTR_r.Rdenno;
 /* line 227: */
 /* line 228: */
 /* line 229: */
 /* line 230: */
LBQACTR = ((KBQACTR_rd<=KAAACTR_maxrdno)&(KBQACTR_rd>=JAAACTR_minrdno));
if ( LBQACTR )
{ 
MBQACTR_rdinfo = (&A_R1INDEX(XPKACTR_rds,KBQACTR_rd));
 /* line 231: */
 /* line 232: */
NBQACTR = (*(&(MBQACTR_rdinfo->Flags))) ;
if ( A_LB_GE(NBQACTR,RQKACTR_rdglobalflag) )
{ 
 /* line 233: */
UTKACTR_idfullname( KBQACTR_rd, &OBQACTR );
KZPACTR_makeprocvalue( OBQACTR, (*(&(MBQACTR_rdinfo->Mode))), &PBQACTR );
LAQACTR = PBQACTR;
} 
else
{ 
 /* line 234: */
if ( UVPACTR_hasattribute(Value, TKJACTR_nonloc) )
{ 
 /* line 235: */
UTKACTR_idfullname( KBQACTR_rd, &QBQACTR );
XYPACTR_nlmacro( QBQACTR, &RBQACTR );
LAQACTR = RBQACTR;
} 
else
{ 
 /* line 236: */
 /* line 237: */
 /* line 238: */
UTKACTR_idfullname( KBQACTR_rd, &SBQACTR );
LAQACTR = SBQACTR;
} 
} 
} 
else
{ 
 /* line 241: */
LAQACTR = UBQACTR;
} 
} 
} 
break;
case 4: /* STRUCT(INT)  */
VBQACTR_i = (JAQACTR.data.mode4);
 /* line 242: */
 /* line 243: */
{ 
WBQACTR_bracketsrequired = A68_FALSE;
 /* line 244: */
XBQACTR_nonlocal = UVPACTR_hasattribute(Value, TKJACTR_nonloc);
 /* line 246: */
YBQACTR_id = VBQACTR_i.Idno;
 /* line 247: */
 /* line 248: */
 /* line 239: */
ACQACTR = (YBQACTR_id<=IAAACTR_maxidno);
if ( ! ACQACTR )
{BCQACTR = (YBQACTR_id>=LAAACTR_minlibid);
if ( BCQACTR )
{BCQACTR = (YBQACTR_id<=MAAACTR_maxlibid);
}
ACQACTR = BCQACTR;
}
WXIACTR_assert(CCQACTR, ACQACTR);
 /* line 249: */
DCQACTR_idinfo = YQKACTR_get_idinfo(YBQACTR_id);
 /* line 250: */
ECQACTR = (*(&(DCQACTR_idinfo->Flags))) ;
FCQACTR_isgproc = A_LB_GE(ECQACTR,JQKACTR_idgprocflag);
 /* line 251: */
 /* line 252: */
 /* line 253: */
 /* line 254: */
if ( FCQACTR_isgproc )
{ 
WXIACTR_assert(HCQACTR, !XBQACTR_nonlocal);
 /* line 255: */
 /* line 256: */
 /* line 262: */
UTKACTR_idfullname( YBQACTR_id, &JCQACTR );
KZPACTR_makeprocvalue( JCQACTR, (*(&(DCQACTR_idinfo->Mode))), &KCQACTR );
ICQACTR = KCQACTR;
} 
else
{ 
 /* line 263: */
if ( UVPACTR_hasattribute(Value, VKJACTR_lvalue) )
{ 
 /* line 264: */
 /* line 265: */
LCQACTR = BTMACTR_derefmode((*(&(Value->Mode))));
} 
else
{ 
LCQACTR = (*(&(Value->Mode)));
} 
MCQACTR_reqda68mode = LCQACTR;
 /* line 266: */
 /* line 267: */
 /* line 268: */
if ( XBQACTR_nonlocal )
{ 
 /* line 269: */
NCQACTR = TKNACTR_givecvariabletype((*(&(YQKACTR_get_idinfo(YBQACTR_id)->Mode))), A68_TRUE);
} 
else
{ 
 /* line 270: */
NCQACTR = (*(&(YQKACTR_get_idinfo(YBQACTR_id)->Cvariabletype)));
} 
OCQACTR_reqdcmode = NCQACTR;
 /* line 271: */
PCQACTR_diff = PYPACTR_idreflevel(MCQACTR_reqda68mode, OCQACTR_reqdcmode);
 /* line 272: */
WBQACTR_bracketsrequired = (PCQACTR_diff!=0);
 /* line 273: */
 /* line 274: */
 /* line 276: */
HYPACTR_refstring( PCQACTR_diff, &QCQACTR );
ICQACTR = QCQACTR;
} 
if ( XBQACTR_nonlocal )
{ 
 /* line 277: */
 /* line 278: */
UTKACTR_idfullname( VBQACTR_i.Idno, &SCQACTR );
XYPACTR_nlmacro( SCQACTR, &TCQACTR );
RCQACTR = TCQACTR;
} 
else
{ 
 /* line 279: */
if ( FCQACTR_isgproc )
{ 
RCQACTR = VCQACTR;
} 
else
{ 
 /* line 280: */
UTKACTR_idfullname( VBQACTR_i.Idno, &WCQACTR );
RCQACTR = WCQACTR;
} 
} 
XCQACTR_body = A_VC_PLUS(ICQACTR,RCQACTR);
 /* line 281: */
 /* line 282: */
if ( WBQACTR_bracketsrequired )
{ 
 /* line 283: */
 /* line 284: */
JIAACTR_bracket( XCQACTR_body, &YCQACTR );
LAQACTR = YCQACTR;
} 
else
{ 
 /* line 285: */
 /* line 287: */
LAQACTR = XCQACTR_body;
} 
} 
break;
case 7: /* STRUCT(INT)  */
ZCQACTR_label = (JAQACTR.data.mode7);
 /* line 288: */
 /* line 289: */
{ 
ADQACTR_l = ZCQACTR_label.Labno;
 /* line 290: */
 /* line 291: */
 /* line 292: */
ROAAOSF_whole( ADQACTR_l, 0, &DDQACTR );
WXIACTR_assert(A_VC_PLUS(CDQACTR,DDQACTR), NTKACTR_labelisdeclared(ADQACTR_l));
 /* line 293: */
 /* line 294: */
RTKACTR_labelenviron( ADQACTR_l, &EDQACTR );
if ( (VRLACTR_currentlevel()==EDQACTR.Level) )
{ 
 /* line 295: */
WSKACTR_labelfullname( ADQACTR_l, &FDQACTR );
LAQACTR = FDQACTR;
} 
else
{ 
 /* line 296: */
if ( UVPACTR_hasattribute(Value, TKJACTR_nonloc) )
{ 
 /* line 297: */
DTKACTR_labelbuffername( ADQACTR_l, &GDQACTR );
XYPACTR_nlmacro( GDQACTR, &HDQACTR );
LAQACTR = HDQACTR;
} 
else
{ 
 /* line 298: */
 /* line 299: */
 /* line 300: */
 /* line 302: */
 /* line 303: */
DTKACTR_labelbuffername( ADQACTR_l, &IDQACTR );
LAQACTR = IDQACTR;
} 
} 
} 
break;
default: 
WXIACTR_assert(KDQACTR, A68_FALSE);
 /* line 304: */
 /* line 305: */
LAQACTR = LDQACTR;
break;
} 
} 
A_PROC_EXIT(getcfragment);
*ReturnedValue = (LAQACTR);
return;
} 
#undef NL

A68_VOID  NDQACTR_bracketcfragment(A68_108 * Value, A68_VC  *ReturnedValue)
{ 
A68_VC  ODQACTR;  /* clause result */
A68_VC  PDQACTR;  /* avoid structure result */
A68_VC  QDQACTR;  /* avoid structure result */
A68_VC  RDQACTR;  /* avoid structure result */
A_PROC_ENTRY(bracketcfragment);
 /* line 308: */
 /* line 309: */
{ 
 /* line 310: */
 /* line 311: */
if ( ZWPACTR_isatomic(Value) )
{ 
GZPACTR_getcfragment( Value, &PDQACTR );
ODQACTR = PDQACTR;
} 
else
{ 
 /* line 312: */
 /* line 313: */
GZPACTR_getcfragment( Value, &QDQACTR );
JIAACTR_bracket( QDQACTR, &RDQACTR );
ODQACTR = RDQACTR;
} 
} 
A_PROC_EXIT(bracketcfragment);
*ReturnedValue = (ODQACTR);
return;
} 
#undef NL

A68_108 * UDQACTR_indexvaluelist(A68_115 * List, A68_INT  Index)
{ 
A68_115 * VDQACTR_position;
A68_INT  WDQACTR;  /* to part of loop */
A68_INT  XDQACTR;  /* loop control */
A68_108 * YDQACTR;  /* clause result */
A_PROC_ENTRY(indexvaluelist);
 /* line 321: */
 /* line 322: */
{ 
VDQACTR_position = List;
 /* line 323: */
WDQACTR = (Index-1);
for ( XDQACTR = 1;
XDQACTR <= WDQACTR;
XDQACTR += 1 )
{ 
VDQACTR_position = (*(&(VDQACTR_position->Rest)));
}
 /* line 324: */
 /* line 325: */
YDQACTR = (&(VDQACTR_position->Value));
} 
A_PROC_EXIT(indexvaluelist);
return( YDQACTR );
} 
#undef NL

A68_115 * AEQACTR_reversevaluelist(A68_115 * List)
{ 
A68_115 * BEQACTR_last;
A68_115 * CEQACTR_this;
A68_115 * DEQACTR_next;
A68_115 ** EEQACTR;  /* YIELD */
A68_115 * FEQACTR;  /* clause result */
A_PROC_ENTRY(reversevaluelist);
 /* line 331: */
 /* line 332: */
{ 
BEQACTR_last = (A68_115 *)A68_NIL;
CEQACTR_this = List;
 /* line 333: */
for ( ;; )
{ 
 /* line 334: */
 /* line 335: */
if ( !((CEQACTR_this!=MKJACTR_nilvaluelist)) ) break;
DEQACTR_next = (*(&(CEQACTR_this->Rest)));
 /* line 336: */
EEQACTR = (&(CEQACTR_this->Rest)) ;
(*EEQACTR) = BEQACTR_last;
 /* line 337: */
BEQACTR_last = CEQACTR_this;
 /* line 338: */
 /* line 339: */
CEQACTR_this = DEQACTR_next;
}
 /* line 340: */
 /* line 341: */
FEQACTR = BEQACTR_last;
} 
A_PROC_EXIT(reversevaluelist);
return( FEQACTR );
} 
#undef NL

A68_INT  HEQACTR_operandsof(A68_114  Treeoper)
{ 
A68_INT  IEQACTR;  /* clause result */
A68_BITS  JEQACTR;  /* SHR */
A_PROC_ENTRY(operandsof);
 /* line 349: */
JEQACTR = (A68_BITS )Treeoper.Param ;
IEQACTR = (A68_INT )A_SHR(JEQACTR,WGAACTR_operandsshift);
A_PROC_EXIT(operandsof);
return( IEQACTR );
} 
#undef NL

A68_INT  LEQACTR_paramof(A68_114  Treeoper)
{ 
A68_INT  MEQACTR;  /* clause result */
A_PROC_ENTRY(paramof);
 /* line 356: */
MEQACTR = (A68_INT )(A68_BITS )((A68_BITS )Treeoper.Param&ZGAACTR_parammask);
A_PROC_EXIT(paramof);
return( MEQACTR );
} 
#undef NL

A68_108 * PEQACTR_operand(A68_108 * Oper, A68_INT  Rand)
{ 
A68_109  QEQACTR;  /* united object - for case conformity */
A68_114  REQACTR_rator;
A68_INT  SEQACTR_totalrands;
A68_108 * TEQACTR;  /* clause result */
A68_108 * WEQACTR;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(operand);
 /* line 360: */
 /* line 361: */
QEQACTR = (*(&(Oper->Extra))) ;
switch ( QEQACTR.mode )
{ 
case 9: /* STRUCT(INT,INT,REF MODE115)  */
REQACTR_rator = (QEQACTR.data.mode9);
 /* line 362: */
 /* line 363: */
{ 
SEQACTR_totalrands = HEQACTR_operandsof(REQACTR_rator);
 /* line 364: */
 /* line 365: */
 /* line 366: */
TEQACTR = UDQACTR_indexvaluelist(REQACTR_rator.Operands, ((SEQACTR_totalrands+1)-Rand));
} 
break;
default: 
WXIACTR_assert(VEQACTR, A68_FALSE);
 /* line 367: */
TEQACTR = WEQACTR;
break;
} 
A_PROC_EXIT(operand);
return( TEQACTR );
} 
#undef NL

A68_VOID  YEQACTR_derefvalue(A68_108 * Value)
{ 
A68_INT * BFQACTR;  /* YIELD */
A_PROC_ENTRY(derefvalue);
 /* line 370: */
 /* line 372: */
{ 
WXIACTR_assert(AFQACTR, ((*(&(Value->Mode)))>VFAACTR_refmark));
 /* line 373: */
 /* line 374: */
BFQACTR = (&(Value->Mode)) ;
(*BFQACTR)-=VFAACTR_refmark;
} 
A_PROC_EXIT(derefvalue);
return;
} 
#undef NL

A68_VOID  DFQACTR_enrefvalue(A68_108 * Value)
{ 
A68_INT * EFQACTR;  /* YIELD */
A_PROC_ENTRY(enrefvalue);
 /* line 377: */
 /* line 378: */
 /* line 379: */
EFQACTR = (&(Value->Mode)) ;
(*EFQACTR)+=VFAACTR_refmark;
A_PROC_EXIT(enrefvalue);
return;
} 
#undef NL

A_STATIC A68_VOID  GFQACTR_fnname(A68_INT  Fn, A68_VC  *ReturnedValue)
{ 
A68_VC  JFQACTR_spare;
A68_INT  KFQACTR;  /* clause result */
A68_VC  MFQACTR;  /* clause result */
A68_VC  TIQACTR;  /* avoid structure result */
A_PROC_ENTRY(fnname);
 /* line 382: */
 /* line 383: */
{ 
JFQACTR_spare = IFQACTR;
 /* line 384: */
 /* line 385: */
 /* line 386: */
KFQACTR = Fn;
switch ( KFQACTR )
{ 
case 1: 
 /* line 387: */
MFQACTR = NFQACTR;
break;
case 2: 
 /* line 388: */
MFQACTR = PFQACTR;
break;
case 3: 
 /* line 389: */
MFQACTR = RFQACTR;
break;
case 4: 
 /* line 390: */
MFQACTR = TFQACTR;
break;
case 5: 
 /* line 391: */
MFQACTR = VFQACTR;
break;
case 6: 
 /* line 392: */
MFQACTR = XFQACTR;
break;
case 7: 
 /* line 393: */
MFQACTR = ZFQACTR;
break;
case 8: 
 /* line 394: */
MFQACTR = BGQACTR;
break;
case 9: 
 /* line 395: */
MFQACTR = DGQACTR;
break;
case 10: 
 /* line 396: */
MFQACTR = FGQACTR;
break;
case 11: 
 /* line 397: */
MFQACTR = HGQACTR;
break;
case 12: 
 /* line 398: */
MFQACTR = JGQACTR;
break;
case 13: 
 /* line 399: */
MFQACTR = LGQACTR;
break;
case 14: 
 /* line 400: */
MFQACTR = NGQACTR;
break;
case 15: 
 /* line 401: */
MFQACTR = PGQACTR;
break;
case 16: 
 /* line 402: */
MFQACTR = RGQACTR;
break;
case 17: 
 /* line 403: */
MFQACTR = TGQACTR;
break;
case 18: 
 /* line 404: */
MFQACTR = VGQACTR;
break;
case 19: 
 /* line 405: */
MFQACTR = XGQACTR;
break;
case 20: 
 /* line 406: */
MFQACTR = ZGQACTR;
break;
case 21: 
 /* line 407: */
MFQACTR = BHQACTR;
break;
case 22: 
 /* line 408: */
MFQACTR = DHQACTR;
break;
case 23: 
 /* line 409: */
MFQACTR = FHQACTR;
break;
case 24: 
 /* line 410: */
MFQACTR = HHQACTR;
break;
case 25: 
 /* line 411: */
MFQACTR = JHQACTR;
break;
case 26: 
 /* line 412: */
MFQACTR = LHQACTR;
break;
case 27: 
 /* line 413: */
MFQACTR = NHQACTR;
break;
case 28: 
 /* line 414: */
MFQACTR = PHQACTR;
break;
case 29: 
 /* line 415: */
MFQACTR = RHQACTR;
break;
case 30: 
 /* line 416: */
MFQACTR = THQACTR;
break;
case 31: 
 /* line 417: */
MFQACTR = VHQACTR;
break;
case 32: 
 /* line 418: */
MFQACTR = XHQACTR;
break;
case 33: 
 /* line 419: */
MFQACTR = ZHQACTR;
break;
case 34: 
 /* line 420: */
MFQACTR = BIQACTR;
break;
case 35: 
 /* line 421: */
MFQACTR = DIQACTR;
break;
case 36: 
 /* line 422: */
MFQACTR = FIQACTR;
break;
case 37: 
 /* line 423: */
MFQACTR = HIQACTR;
break;
case 38: 
 /* line 424: */
MFQACTR = JIQACTR;
break;
case 39: 
 /* line 425: */
MFQACTR = LIQACTR;
break;
case 40: 
 /* line 426: */
MFQACTR = NIQACTR;
break;
case 41: 
 /* line 427: */
MFQACTR = JFQACTR_spare;
break;
case 42: 
 /* line 428: */
MFQACTR = JFQACTR_spare;
break;
case 43: 
 /* line 429: */
MFQACTR = JFQACTR_spare;
break;
case 44: 
 /* line 430: */
MFQACTR = JFQACTR_spare;
break;
case 45: 
 /* line 431: */
MFQACTR = JFQACTR_spare;
break;
case 46: 
 /* line 432: */
MFQACTR = JFQACTR_spare;
break;
case 47: 
 /* line 433: */
MFQACTR = JFQACTR_spare;
break;
case 48: 
 /* line 434: */
MFQACTR = JFQACTR_spare;
break;
case 49: 
 /* line 436: */
MFQACTR = JFQACTR_spare;
break;
case 50: 
 /* line 438: */
MFQACTR = PIQACTR;
break;
case 51: 
MFQACTR = RIQACTR;
break;
default: 
 /* line 439: */
ROAAOSF_whole( Fn, 0, &TIQACTR );
MFQACTR = A_VC_PLUS(TIQACTR,UIQACTR);
break;
} 
} 
A_PROC_EXIT(fnname);
*ReturnedValue = (MFQACTR);
return;
} 
#undef NL

A68_VOID  XIQACTR_valuestring(A68_108 * Value, A68_BOOL  Brief, A68_VC  *ReturnedValue)
{ 
A68_VC  ZIQACTR;  /* clause result */
union {  /* BIOP 99 */
A68_108   source;
A68_LINT   destination;
} BJQACTR; 
A68_LINT  CJQACTR;  /* OPERATORS - skip to mode */
A68_109  JJQACTR;  /* united object - for case conformity */
A68_VC  LJQACTR;  /* clause result */
A68_LBITS  NJQACTR_bb;
A68_VC  QJQACTR;  /* avoid structure result */
A68_57  RJQACTR_l;
A68_VC  UJQACTR;  /* avoid structure result */
A68_111  VJQACTR_id;
A68_VC  YJQACTR;  /* avoid structure result */
A68_112  ZJQACTR_tmp;
A68_VC  CKQACTR;  /* OPERATORS - istruct -> vector */
A68_56  DKQACTR;  /* OPERATORS - istruct -> vector */
A68_VC  EKQACTR_c;
A68_113  HKQACTR_s;
A68_110  QKQACTR_r;
A68_VC  TKQACTR;  /* avoid structure result */
A68_VC  UKQACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  VKQACTR;  /* avoid structure result */
A68_VC  WKQACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_114  XKQACTR_o;
A68_VC  BLQACTR;  /* avoid structure result */
A68_VC  ILQACTR;  /* avoid structure result */
A68_BITS  KLQACTR;  /* SHR */
A68_VC  LLQACTR;  /* avoid structure result */
A68_VC  NLQACTR;  /* avoid structure result */
A68_VC  TLQACTR;  /* avoid structure result */
A_PROC_ENTRY(valuestring);
 /* line 444: */
 /* line 445: */
 /* line 446: */
if ( (Value==(A68_108 *)A68_NIL) )
{ 
ZIQACTR = AJQACTR;
} 
else
{ 
 /* line 448: */
 /* line 449: */
BJQACTR.source = (*Value) ;
if ( ((BJQACTR.destination)==CJQACTR) )
{ 
ZIQACTR = EJQACTR;
} 
else
{ 
 /* line 450: */
 /* line 451: */
if ( ZVPACTR_(Value, VUPACTR_assignment(A_LOC(A68_108 ), DLJACTR_skipvalue)) )
{ 
ZIQACTR = GJQACTR;
} 
else
{ 
 /* line 452: */
 /* line 453: */
 /* line 454: */
JJQACTR = (*(&(Value->Extra))) ;
switch ( JJQACTR.mode )
{ 
case 3: /* VOID */
 /* line 455: */
LJQACTR = MJQACTR;
break;
case 1: /* LONG BITS */
NJQACTR_bb = (JJQACTR.data.mode1);
 /* line 456: */
BQAAOSF_hex( NJQACTR_bb, 24, &QJQACTR );
LJQACTR = A_VC_PLUS(PJQACTR,QJQACTR);
break;
case 7: /* STRUCT(INT)  */
RJQACTR_l = (JJQACTR.data.mode7);
 /* line 457: */
UTKACTR_idfullname( (RJQACTR_l.Labno+OAAACTR_minlab), &UJQACTR );
LJQACTR = A_VC_PLUS(TJQACTR,UJQACTR);
break;
case 4: /* STRUCT(INT)  */
VJQACTR_id = (JJQACTR.data.mode4);
 /* line 458: */
UTKACTR_idfullname( VJQACTR_id.Idno, &YJQACTR );
LJQACTR = A_VC_PLUS(XJQACTR,YJQACTR);
break;
case 5: /* STRUCT(MODE56,INT)  */
ZJQACTR_tmp = (JJQACTR.data.mode5);
 /* line 459: */
DKQACTR = ZJQACTR_tmp.Name ;
LJQACTR = A_VC_PLUS(BKQACTR,A_HISVEC(CKQACTR,DKQACTR,7,A68_CHAR ));
break;
case 6: /* VECTOR [] CHAR */
EKQACTR_c = (JJQACTR.data.mode6);
 /* line 460: */
LJQACTR = A_VC_PLUS(GKQACTR,EKQACTR_c);
break;
case 8: /* STRUCT(INT)  */
HKQACTR_s = (JJQACTR.data.mode8);
 /* line 461: */
 /* line 462: */
switch ( HKQACTR_s.Nse )
{ 
case 1: 
LJQACTR = JKQACTR;
break;
case 2: 
 /* line 463: */
LJQACTR = LKQACTR;
break;
case 3: 
 /* line 464: */
LJQACTR = NKQACTR;
break;
default: 
 /* line 465: */
LJQACTR = PKQACTR;
break;
} 
break;
case 2: /* STRUCT(INT)  */
QKQACTR_r = (JJQACTR.data.mode2);
 /* line 466: */
 /* line 467: */
 /* line 468: */
UTKACTR_idfullname( QKQACTR_r.Rdenno, &TKQACTR );
ROAAOSF_whole( QKQACTR_r.Rdenno, 0, &VKQACTR );
LJQACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(SKQACTR,TKQACTR),A_HVEC(UKQACTR,'(',A68_CHAR )),VKQACTR),A_HVEC(WKQACTR,')',A68_CHAR ));
break;
case 9: /* STRUCT(INT,INT,REF MODE115)  */
XKQACTR_o = (JJQACTR.data.mode9);
 /* line 469: */
 /* line 470: */
if ( Brief )
{ 
 /* line 471: */
GFQACTR_fnname( XKQACTR_o.Fn, &BLQACTR );
LJQACTR = A_VC_PLUS(A_VC_PLUS(ALQACTR,BLQACTR),CLQACTR);
} 
else
{ 
 /* line 472: */
 /* line 473: */
 /* line 474: */
 /* line 475: */
 /* line 477: */
 /* line 478: */
 /* line 479: */
GFQACTR_fnname( XKQACTR_o.Fn, &ILQACTR );
KLQACTR = (A68_BITS )XKQACTR_o.Param ;
ROAAOSF_whole( (A68_INT )A_SHR(KLQACTR,WGAACTR_operandsshift), 0, &LLQACTR );
ROAAOSF_whole( (A68_INT )(A68_BITS )((A68_BITS )XKQACTR_o.Param&ZGAACTR_parammask), 0, &NLQACTR );
LJQACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(HLQACTR,ILQACTR),JLQACTR),LLQACTR),MLQACTR),NLQACTR),OLQACTR);
} 
break;
default: 
 /* line 480: */
LJQACTR = QLQACTR;
break;
} 
 /* line 481: */
WCNACTR_modename( (*(&(Value->Mode))), &TLQACTR );
ZIQACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(SLQACTR,TLQACTR),ULQACTR),LJQACTR),VLQACTR);
} 
} 
} 
A_PROC_EXIT(valuestring);
*ReturnedValue = (ZIQACTR);
return;
} 
#undef NL

A68_VOID  XLQACTR_uvaluetocfragment(A68_197  U, A68_VC  *ReturnedValue)
{ 
A68_197  YLQACTR;  /* united object - for case conformity */
A68_108 * ZLQACTR_rv;
A68_VC  AMQACTR;  /* clause result */
A68_VC  BMQACTR;  /* avoid structure result */
A68_VC  CMQACTR_c;
A68_112  DMQACTR_t;
A68_VC  EMQACTR;  /* OPERATORS - istruct -> vector */
A68_56  FMQACTR;  /* OPERATORS - istruct -> vector */
A68_VC  IMQACTR;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(uvaluetocfragment);
 /* line 492: */
 /* line 493: */
YLQACTR = U ;
switch ( YLQACTR.mode )
{ 
case 1: /* REF STRUCT(INT,BITS,MODE109)  */
ZLQACTR_rv = (YLQACTR.data.mode1);
 /* line 494: */
GZPACTR_getcfragment( ZLQACTR_rv, &BMQACTR );
AMQACTR = BMQACTR;
break;
case 2: /* VECTOR [] CHAR */
CMQACTR_c = (YLQACTR.data.mode2);
 /* line 495: */
AMQACTR = CMQACTR_c;
break;
case 3: /* STRUCT(MODE56,INT)  */
DMQACTR_t = (YLQACTR.data.mode3);
 /* line 496: */
 /* line 497: */
FMQACTR = DMQACTR_t.Name ;
AMQACTR = A_HISVEC(EMQACTR,FMQACTR,7,A68_CHAR );
break;
default: 
WXIACTR_assert(HMQACTR, A68_FALSE);
 /* line 498: */
AMQACTR = IMQACTR;
break;
} 
A_PROC_EXIT(uvaluetocfragment);
*ReturnedValue = (AMQACTR);
return;
} 
#undef NL

A68_VOID  KMQACTR_joinuvalue(A68_200  Items, A68_VC  *ReturnedValue)
{ 
A68_54  OMQACTR_generator;   /* proc value of non-global proc */
A68_154  UMQACTR;  /* avoid structure result */
A68_154  TMQACTR_result;
A68_197  VMQACTR_i;
A68_197 * WMQACTR;  /* forall control - []x */
A68_INT  XMQACTR;  /* forall loop counter */
A68_VC  YMQACTR;  /* avoid structure result */
A68_VC  ZMQACTR;  /* clause result */
A_PROC_ENTRY(joinuvalue);
 /* line 501: */
 /* line 502: */
{ 
WXIACTR_assert(MMQACTR, (Items.upb>=1));
 /* line 503: */
A_CLOSURE( OMQACTR_generator, PMQACTR_generator, QMQACTR_generator );
A_CALLPROC(OMQACTR_generator,(A68_TRUE, &UMQACTR),(A68_TRUE, &UMQACTR,(OMQACTR_generator).nonlocals));
TMQACTR_result = UMQACTR;
 /* line 504: */
 /* line 505: */
XMQACTR = Items.upb -1;
WMQACTR = Items.data;
for (;XMQACTR-- >= 0;
(WMQACTR++
) )
{
VMQACTR_i = *WMQACTR;
 /* line 506: */
XLQACTR_uvaluetocfragment( VMQACTR_i, &YMQACTR );
A_VC_PLUSAB(TMQACTR_result,YMQACTR);
}
 /* line 507: */
 /* line 508: */
ZMQACTR = TMQACTR_result;
} 
A_PROC_EXIT(joinuvalue);
*ReturnedValue = (ZMQACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  BNQACTR_commaseparate(A68_200  Items, A68_VC  *ReturnedValue)
{ 
A68_54  FNQACTR_generator;   /* proc value of non-global proc */
A68_154  LNQACTR;  /* avoid structure result */
A68_154  KNQACTR_result;
A68_INT  MNQACTR;  /* YIELD */
A68_VC  NNQACTR;  /* avoid structure result */
A68_VC  ONQACTR;  /* OPERATORS - copy to flex */
A68_197  PNQACTR_i;
A68_200  QNQACTR;  /* OPERATORS - trim index */
A68_200  RNQACTR;  /* forall yield */
A68_197 * SNQACTR;  /* forall control - []x */
A68_INT  TNQACTR;  /* forall loop counter */
A68_VC  UNQACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  VNQACTR;  /* avoid structure result */
A68_VC  WNQACTR;  /* clause result */
A_PROC_ENTRY(commaseparate);
 /* line 511: */
 /* line 512: */
{ 
WXIACTR_assert(DNQACTR, (Items.upb>=1));
 /* line 519: */
A_CLOSURE( FNQACTR_generator, GNQACTR_generator, HNQACTR_generator );
A_CALLPROC(FNQACTR_generator,(A68_TRUE, &LNQACTR),(A68_TRUE, &LNQACTR,(FNQACTR_generator).nonlocals));
KNQACTR_result = LNQACTR;
 /* line 520: */
MNQACTR = 1 ;
XLQACTR_uvaluetocfragment( A_VINDEX(Items,MNQACTR), &NNQACTR );
KNQACTR_result = A_VCOPY(NNQACTR,ONQACTR,A68_CHAR );
 /* line 521: */
 /* line 522: */
if ( (Items.upb>1) )
{ 
 /* line 523: */
RNQACTR = A_VTRIM(QNQACTR,(Items),A_VTSCRIPT(&(QNQACTR.upb),(Items).upb,2,(Items).upb)) ;
TNQACTR = RNQACTR.upb -1;
SNQACTR = RNQACTR.data;
for (;TNQACTR-- >= 0;
(SNQACTR++
) )
{
PNQACTR_i = *SNQACTR;
 /* line 524: */
XLQACTR_uvaluetocfragment( PNQACTR_i, &VNQACTR );
A_VC_PLUSAB(KNQACTR_result,A_VC_PLUS(A_HVEC(UNQACTR,',',A68_CHAR ),VNQACTR));
}
 /* line 525: */
} 
 /* line 526: */
 /* line 527: */
WNQACTR = KNQACTR_result;
} 
A_PROC_EXIT(commaseparate);
*ReturnedValue = (WNQACTR);
return;
} 
#undef NL

A68_VOID  YNQACTR_commalist(A68_200  Items, A68_VC  *ReturnedValue)
{ 
A68_VC  ZNQACTR;  /* clause result */
A68_VC  AOQACTR;  /* avoid structure result */
A68_VC  BOQACTR;  /* avoid structure result */
A_PROC_ENTRY(commalist);
 /* line 530: */
BNQACTR_commaseparate( Items, &AOQACTR );
JIAACTR_bracket( AOQACTR, &BOQACTR );
ZNQACTR = BOQACTR;
A_PROC_EXIT(commalist);
*ReturnedValue = (ZNQACTR);
return;
} 
#undef NL

A68_VOID  EOQACTR_usemacro(A68_VC  Macro, A68_200  Arguments, A68_VC  *ReturnedValue)
{ 
A68_VC  FOQACTR;  /* clause result */
A68_VC  GOQACTR;  /* avoid structure result */
A68_VC  HOQACTR;  /* avoid structure result */
A_PROC_ENTRY(usemacro);
 /* line 533: */
BNQACTR_commaseparate( Arguments, &GOQACTR );
JIAACTR_bracket( GOQACTR, &HOQACTR );
FOQACTR = A_VC_PLUS(Macro,HOQACTR);
A_PROC_EXIT(usemacro);
*ReturnedValue = (FOQACTR);
return;
} 
#undef NL

A68_VOID  JOQACTR_emitline(A68_200  Uv)
{ 
A68_206  KOQACTR;  /* collateral clause result */
A68_VC  LOQACTR;  /* avoid structure result */
A68_93  MOQACTR;  /* OPERATORS - mode -> union mode */
A68_93  NOQACTR;  /* OPERATORS - mode -> union mode */
A68_92  OOQACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(emitline);
 /* line 538: */
KMQACTR_joinuvalue( Uv, &LOQACTR );
KOQACTR.data[0] = A_UNITE(MOQACTR,mode2,2,LOQACTR);
KOQACTR.data[1] = A_UNITE(NOQACTR,mode4,4,EIAACTR_cnewline);
 /* line 540: */
MDMACTR_writecstream(A_HISVEC(OOQACTR,KOQACTR,2,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel()));
A_PROC_EXIT(emitline);
return;
} 
#undef NL
 /* line 544: */
 /* line 546: */

A68_VOID  SOQACTR_yieldtemporary(A68_VC  Comment, A68_INT  Mode, A68_200  Op, A68_112  *ReturnedValue)
{ 
A68_112  TOQACTR;  /* avoid structure result */
A68_112  UOQACTR_t;
A68_208  VOQACTR;  /* collateral clause result */
A68_197  WOQACTR;  /* OPERATORS - mode -> union mode */
A68_197  ZOQACTR;  /* OPERATORS - mode -> union mode */
A68_VC  APQACTR;  /* YIELD */
A68_VC  BPQACTR;  /* avoid structure result */
A68_197  CPQACTR;  /* OPERATORS - mode -> union mode */
A68_197  FPQACTR;  /* OPERATORS - mode -> union mode */
A68_VC  GPQACTR;  /* YIELD */
A68_200  HPQACTR;  /* OPERATORS - istruct -> vector */
A68_112  IPQACTR;  /* clause result */
A_PROC_ENTRY(yieldtemporary);
 /* line 547: */
 /* line 548: */
{ 
A_CALLPROC(KMOACTR_new,(Mode, Comment, &TOQACTR),(Mode, Comment, &TOQACTR,(KMOACTR_new).nonlocals));
UOQACTR_t = TOQACTR;
 /* line 549: */
VOQACTR.data[0] = A_UNITE(WOQACTR,mode3,3,UOQACTR_t);
APQACTR = YOQACTR ;
VOQACTR.data[1] = A_UNITE(ZOQACTR,mode2,2,APQACTR);
KMQACTR_joinuvalue( Op, &BPQACTR );
VOQACTR.data[2] = A_UNITE(CPQACTR,mode2,2,BPQACTR);
GPQACTR = EPQACTR ;
VOQACTR.data[3] = A_UNITE(FPQACTR,mode2,2,GPQACTR);
JOQACTR_emitline(A_HISVEC(HPQACTR,VOQACTR,4,A68_197 ));
 /* line 550: */
 /* line 551: */
IPQACTR = UOQACTR_t;
} 
A_PROC_EXIT(yieldtemporary);
*ReturnedValue = (IPQACTR);
return;
} 
#undef NL

A68_108 * KPQACTR_yield(A68_108 * Op)
{ 
A68_197  MPQACTR;  /* OPERATORS - mode -> union mode */
A68_200  NPQACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_112  PPQACTR;  /* avoid structure result */
A68_109  QPQACTR;  /* OPERATORS - mode -> union mode */
A68_BITS * RPQACTR;  /* YIELD */
A68_108 * SPQACTR;  /* clause result */
A_PROC_ENTRY(yield);
 /* line 554: */
{ 
 /* line 555: */
if ( !VXPACTR_isaname(Op) )
{ 
SOQACTR_yieldtemporary( OPQACTR, (*(&(Op->Mode))), A_HVEC(NPQACTR,A_UNITE(MPQACTR,mode1,1,Op),A68_197 ), &PPQACTR );
AVPACTR_assignment((&(Op->Extra)), A_UNITE(QPQACTR,mode5,5,PPQACTR));
 /* line 556: */
 /* line 557: */
RPQACTR = (&(Op->Info)) ;
(*RPQACTR) = (A68_BITS )((A68_BITS )((*(&(Op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
} 
 /* line 558: */
 /* line 559: */
SPQACTR = Op;
} 
A_PROC_EXIT(yield);
return( SPQACTR );
} 
#undef NL

A68_108 * VPQACTR_yield(A68_VC  Comment, A68_108 * Op)
{ 
A68_197  WPQACTR;  /* OPERATORS - mode -> union mode */
A68_200  XPQACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_112  YPQACTR;  /* avoid structure result */
A68_109  ZPQACTR;  /* OPERATORS - mode -> union mode */
A68_BITS * AQQACTR;  /* YIELD */
A68_108 * BQQACTR;  /* clause result */
A_PROC_ENTRY(yield);
 /* line 562: */
{ 
 /* line 563: */
if ( !VXPACTR_isaname(Op) )
{ 
SOQACTR_yieldtemporary( Comment, (*(&(Op->Mode))), A_HVEC(XPQACTR,A_UNITE(WPQACTR,mode1,1,Op),A68_197 ), &YPQACTR );
AVPACTR_assignment((&(Op->Extra)), A_UNITE(ZPQACTR,mode5,5,YPQACTR));
 /* line 564: */
 /* line 565: */
AQQACTR = (&(Op->Info)) ;
(*AQQACTR) = (A68_BITS )((A68_BITS )((*(&(Op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic);
} 
 /* line 566: */
 /* line 567: */
BQQACTR = Op;
} 
A_PROC_EXIT(yield);
return( BQQACTR );
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 5: */
 /* line 6: */
 /* line 7: */
 /* line 9: */
void AUPACTR(void)   /* initialise DECS values */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel","-dir",".","values.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/vak/Project/Algol/Algol-68RS-Source/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/vak/Project/Algol/Algol-68RS-Source/a68config/a68config.m","./modes.m","./incvalue.m","./incid.m","./incoperfn.m","./incmode.m","./idtable.m","./coutput.m","./environment.m","./environ.m","./centities.m","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
DNMACTR();   /* USE modes */
GKJACTR();   /* USE incvalue */
BAAACTR();   /* USE incid */
XFAACTR();   /* USE incoperfn */
ZDAACTR();   /* USE incmode */
PPKACTR();   /* USE idtable */
PTLACTR();   /* USE coutput */
HPIACTR();   /* USE environment */
BPLACTR();   /* USE environ */
THAACTR();   /* USE centities */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/values.a68";
A_config.translation_time = "Thu Nov  5 20:46:57 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "ZTPACTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 20:46:57 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS values);
UEAALIB_a68config(LGAALIB_configinfo, EUPACTR);
 /* line 48: */
 /* line 77: */
 /* line 79: */
 /* line 89: */
 /* line 99: */
 /* line 103: */
 /* line 105: */
 /* line 108: */
 /* line 111: */
 /* line 114: */
 /* line 126: */
 /* line 129: */
 /* line 132: */
 /* line 135: */
 /* line 138: */
 /* line 145: */
 /* line 155: */
 /* line 166: */
 /* line 184: */
 /* line 186: */
 /* line 307: */
 /* line 317: */
 /* line 327: */
 /* line 345: */
 /* line 352: */
 /* line 358: */
 /* line 359: */
 /* line 369: */
 /* line 376: */
 /* line 381: */
 /* line 441: */
 /* line 443: */
 /* line 489: */
 /* line 491: */
 /* line 500: */
 /* line 510: */
 /* line 529: */
 /* line 532: */
 /* line 535: */
 /* line 542: */
 /* line 543: */
 /* line 553: */
 /* line 561: */
 /* line 569: */
 /* line 571: */
 /* line 607: */
/*SKIP*/;
A_PROC_EXIT(DECS values);
} 
#undef NL
/* end of translation of values.a68 */
