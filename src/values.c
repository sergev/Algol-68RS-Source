/* UNAME:NUPACTR */
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

A_PROCEDURE(A68_VOID ,A68t162,(A68_INT ,A68_VC ,A68_VC *),(A68_INT ,A68_VC ,A68_VC *,void *));
typedef struct A68t162  A68_162 ;    /* PROC(INT,MODE26) MODE26 */
A_ISTRUCT(A68_CHAR ,12,A68t163);
typedef struct A68t163  A68_163 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,55,A68t164);
typedef struct A68t164  A68_164 ;    /* STRUCT 55 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t165);
typedef struct A68t165  A68_165 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_VC ,3,A68t166);
typedef struct A68t166  A68_166 ;    /* STRUCT 3 MODE26 */

A_PROCEDURE(A68_VOID ,A68t167,(struct A68t108 *,A68_VC *),(struct A68t108 *,A68_VC *,void *));
typedef struct A68t167  A68_167 ;    /* PROC(REF MODE108) MODE26 */

A_PROCEDURE(A68_VOID ,A68t168,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t168  A68_168 ;    /* PROC(MODE26,INT) MODE26 */
A_ISTRUCT(A68_CHAR ,15,A68t169);
typedef struct A68t169  A68_169 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t170);
typedef struct A68t170  A68_170 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t171);
typedef struct A68t171  A68_171 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(struct A68t93 ,8,A68t172);
typedef struct A68t172  A68_172 ;    /* STRUCT 8 MODE93 */
A_ISTRUCT(A68_CHAR ,59,A68t173);
typedef struct A68t173  A68_173 ;    /* STRUCT 59 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t174);
typedef struct A68t174  A68_174 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t175);
typedef struct A68t175  A68_175 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t176);
typedef struct A68t176  A68_176 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t177);
typedef struct A68t177  A68_177 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(A68_CHAR ,34,A68t178);
typedef struct A68t178  A68_178 ;    /* STRUCT 34 CHAR */
A_ISTRUCT(A68_CHAR ,42,A68t179);
typedef struct A68t179  A68_179 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(A68_CHAR ,50,A68t180);
typedef struct A68t180  A68_180 ;    /* STRUCT 50 CHAR */

A_PROCEDURE(struct A68t108 *,A68t181,(struct A68t115 *,A68_INT ),(struct A68t115 *,A68_INT ,void *));
typedef struct A68t181  A68_181 ;    /* PROC(REF MODE115,INT) REF MODE108 */

A_PROCEDURE(struct A68t115 *,A68t182,(struct A68t115 *),(struct A68t115 *,void *));
typedef struct A68t182  A68_182 ;    /* PROC(REF MODE115) REF MODE115 */

A_PROCEDURE(A68_INT ,A68t183,(struct A68t114 ),(struct A68t114 ,void *));
typedef struct A68t183  A68_183 ;    /* PROC(MODE114) INT */

A_PROCEDURE(struct A68t108 *,A68t184,(struct A68t108 *,A68_INT ),(struct A68t108 *,A68_INT ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(REF MODE108,INT) REF MODE108 */
A_ISTRUCT(A68_CHAR ,44,A68t185);
typedef struct A68t185  A68_185 ;    /* STRUCT 44 CHAR */

A_PROCEDURE(A68_VOID ,A68t186,(struct A68t108 *),(struct A68t108 *,void *));
typedef struct A68t186  A68_186 ;    /* PROC(REF MODE108) VOID */
A_ISTRUCT(A68_CHAR ,40,A68t187);
typedef struct A68t187  A68_187 ;    /* STRUCT 40 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t188);
typedef struct A68t188  A68_188 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t189);
typedef struct A68t189  A68_189 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t190);
typedef struct A68t190  A68_190 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t191);
typedef struct A68t191  A68_191 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t192);
typedef struct A68t192  A68_192 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t193);
typedef struct A68t193  A68_193 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t194);
typedef struct A68t194  A68_194 ;    /* STRUCT 2 CHAR */

A_PROCEDURE(A68_LINT ,A68t195,(struct A68t108 ),(struct A68t108 ,void *));
typedef struct A68t195  A68_195 ;    /* PROC(MODE108) LONG INT */

A_PROCEDURE(A68_VOID ,A68t196,(struct A68t108 *,A68_BOOL ,A68_VC *),(struct A68t108 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t196  A68_196 ;    /* PROC(REF MODE108,BOOL) MODE26 */
A_ISTRUCT(A68_CHAR ,31,A68t197);
typedef struct A68t197  A68_197 ;    /* STRUCT 31 CHAR */
struct A68t198 { A68_INT mode; union {
struct A68t108 * mode1;
A68_VC  mode2;
struct A68t112  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t198  A68_198 ;    /* UNION(REF MODE108,MODE26,MODE112)  */

A_PROCEDURE(A68_VOID ,A68t199,(struct A68t198 ,A68_VC *),(struct A68t198 ,A68_VC *,void *));
typedef struct A68t199  A68_199 ;    /* PROC(MODE198) MODE26 */
A_ISTRUCT(A68_CHAR ,58,A68t200);
typedef struct A68t200  A68_200 ;    /* STRUCT 58 CHAR */
A_VECTOR(struct A68t198 ,A68t201);
typedef struct A68t201  A68_201 ;    /* VECTOR [] MODE198 */

A_PROCEDURE(A68_VOID ,A68t202,(struct A68t201 ,A68_VC *),(struct A68t201 ,A68_VC *,void *));
typedef struct A68t202  A68_202 ;    /* PROC(MODE201) MODE26 */
A_ISTRUCT(A68_CHAR ,35,A68t203);
typedef struct A68t203  A68_203 ;    /* STRUCT 35 CHAR */
A_ISTRUCT(A68_CHAR ,38,A68t204);
typedef struct A68t204  A68_204 ;    /* STRUCT 38 CHAR */

A_PROCEDURE(A68_VOID ,A68t205,(A68_VC ,struct A68t201 ,A68_VC *),(A68_VC ,struct A68t201 ,A68_VC *,void *));
typedef struct A68t205  A68_205 ;    /* PROC(MODE26,MODE201) MODE26 */

A_PROCEDURE(A68_VOID ,A68t206,(struct A68t201 ),(struct A68t201 ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(MODE201) VOID */
A_ISTRUCT(struct A68t93 ,2,A68t207);
typedef struct A68t207  A68_207 ;    /* STRUCT 2 MODE93 */

A_PROCEDURE(A68_VOID ,A68t208,(A68_VC ,A68_INT ,struct A68t201 ,struct A68t112 *),(A68_VC ,A68_INT ,struct A68t201 ,struct A68t112 *,void *));
typedef struct A68t208  A68_208 ;    /* PROC(MODE26,INT,MODE201) MODE112 */
A_ISTRUCT(struct A68t198 ,4,A68t209);
typedef struct A68t209  A68_209 ;    /* STRUCT 4 MODE198 */

A_PROCEDURE(struct A68t108 *,A68t210,(struct A68t108 *),(struct A68t108 *,void *));
typedef struct A68t210  A68_210 ;    /* PROC(REF MODE108) REF MODE108 */

A_PROCEDURE(struct A68t108 *,A68t211,(A68_VC ,struct A68t108 *),(A68_VC ,struct A68t108 *,void *));
typedef struct A68t211  A68_211 ;    /* PROC(MODE26,REF MODE108) REF MODE108 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from modes --- */
extern A68_VOID  QMOACTR_declarectemporary(A68_INT ,A68_VC ,A68_112 *);
extern A68_INT  BTMACTR_derefmode(A68_INT );
extern A68_BOOL  RSMACTR_hasrefs(A68_INT );
extern A68_BOOL  FRMACTR_isfirmarray(A68_INT );
extern A68_VOID  WCNACTR_modename(A68_INT ,A68_VC *);
extern A68_122  TMOACTR_new;
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
static A68_148   RUPACTR = {"$Id: values.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,SUPACTR,RUPACTR,56)
static A68_160   RYPACTR = {"VALUES - GETCONSTANT, value has no such component"}; 
A_GISVEC(A68_VC ,SYPACTR,RYPACTR,49)
static A68_161   WYPACTR = {"VALUES - ref string: level is invalid"}; 
A_GISVEC(A68_VC ,YYPACTR,WYPACTR,37)
static A68_163   GZPACTR = {"*A_NILCHECK("}; 
A_GISVEC(A68_VC ,HZPACTR,GZPACTR,12)
static A68_164   PZPACTR = {"IDENTIFIERS - id ref level: ref levels are incompatable"}; 
A_GISVEC(A68_VC ,RZPACTR,PZPACTR,55)
static A68_165   WZPACTR = {"NL("}; 
A_GISVEC(A68_VC ,XZPACTR,WZPACTR,3)
static A68_169   IAQACTR = {"procedure value"}; 
A_GISVEC(A68_VC ,JAQACTR,IAQACTR,15)
static A68_170   QAQACTR = {".fn.fn_global = "}; 
A_GISVEC(A68_VC ,RAQACTR,QAQACTR,16)
static A68_171   ZAQACTR = {".nonlocals = A68_NIL;"}; 
A_GISVEC(A68_VC ,ABQACTR,ZAQACTR,21)
static A68_173   OBQACTR = {"VALUES - GETCFRAGMENT: attempt to take address of temporary"}; 
A_GISVEC(A68_VC ,PBQACTR,OBQACTR,59)
static A68_56   YBQACTR = {"A68_NIL"}; 
A_GISVEC(A68_VC ,ZBQACTR,YBQACTR,7)
static A68_174   ACQACTR = {"/*SKIP*/"}; 
A_GISVEC(A68_VC ,BCQACTR,ACQACTR,8)
static A68_175   CCQACTR = {"/*EMPTY*/"}; 
A_GISVEC(A68_VC ,DCQACTR,CCQACTR,9)
static A68_176   ECQACTR = {"/* UNDEFINED NSE */"}; 
A_GISVEC(A68_VC ,FCQACTR,ECQACTR,19)
static A68_177   QCQACTR = {""}; 
A_GISVEC(A68_VC ,RCQACTR,QCQACTR,0)
static A68_178   WCQACTR = {"VALUES: GETCRAGMENT: invalid id no"}; 
A_GISVEC(A68_VC ,ZCQACTR,WCQACTR,34)
static A68_179   IDQACTR = {"VALUES: GETCFRAGMENT: non-local used gproc"}; 
A_GISVEC(A68_VC ,JDQACTR,IDQACTR,42)
static A68_173   XDQACTR = {"VALUES - GETCFRAGMENT: attempt to evaluate undeclared label"}; 
A_GISVEC(A68_VC ,YDQACTR,XDQACTR,59)
static A68_180   FEQACTR = {"VALUES - GETCFRAGMENT, value has no such component"}; 
A_GISVEC(A68_VC ,GEQACTR,FEQACTR,50)
static A68_185   QFQACTR = {"OPERAND - VALUE parameter is not a TREEOPER."}; 
A_GISVEC(A68_VC ,RFQACTR,QFQACTR,44)
static A68_187   VFQACTR = {"VALUES - deref value: cannot deref value"}; 
A_GISVEC(A68_VC ,WFQACTR,VFQACTR,40)
static A68_174   DGQACTR = {"SPARE op"}; 
A_GISVEC(A68_VC ,EGQACTR,DGQACTR,8)
static A68_174   HGQACTR = {"statgrab"}; 
A_GISVEC(A68_VC ,JGQACTR,HGQACTR,8)
static A68_188   KGQACTR = {"tree generator"}; 
A_GISVEC(A68_VC ,LGQACTR,KGQACTR,14)
static A68_189   MGQACTR = {"select"}; 
A_GISVEC(A68_VC ,NGQACTR,MGQACTR,6)
static A68_40   OGQACTR = {"copy"}; 
A_GISVEC(A68_VC ,PGQACTR,OGQACTR,4)
static A68_40   QGQACTR = {"trim"}; 
A_GISVEC(A68_VC ,RGQACTR,QGQACTR,4)
static A68_190   SGQACTR = {"simpleindex"}; 
A_GISVEC(A68_VC ,TGQACTR,SGQACTR,11)
static A68_175   UGQACTR = {"trimindex"}; 
A_GISVEC(A68_VC ,VGQACTR,UGQACTR,9)
static A68_56   WGQACTR = {"dyngrab"}; 
A_GISVEC(A68_VC ,XGQACTR,WGQACTR,7)
static A68_175   YGQACTR = {"boundpack"}; 
A_GISVEC(A68_VC ,ZGQACTR,YGQACTR,9)
static A68_175   AHQACTR = {"dyadic op"}; 
A_GISVEC(A68_VC ,BHQACTR,AHQACTR,9)
static A68_191   CHQACTR = {"monadic op"}; 
A_GISVEC(A68_VC ,DHQACTR,CHQACTR,10)
static A68_174   EHQACTR = {"straight"}; 
A_GISVEC(A68_VC ,FHQACTR,EHQACTR,8)
static A68_190   GHQACTR = {"prestraight"}; 
A_GISVEC(A68_VC ,HHQACTR,GHQACTR,11)
static A68_174   IHQACTR = {"strindex"}; 
A_GISVEC(A68_VC ,JHQACTR,IHQACTR,8)
static A68_189   KHQACTR = {"assign"}; 
A_GISVEC(A68_VC ,LHQACTR,KHQACTR,6)
static A68_188   MHQACTR = {"!! RS def. bnd"}; 
A_GISVEC(A68_VC ,NHQACTR,MHQACTR,14)
static A68_192   OHQACTR = {"deref"}; 
A_GISVEC(A68_VC ,PHQACTR,OHQACTR,5)
static A68_40   QHQACTR = {"call"}; 
A_GISVEC(A68_VC ,RHQACTR,QHQACTR,4)
static A68_40   SHQACTR = {"void"}; 
A_GISVEC(A68_VC ,THQACTR,SHQACTR,4)
static A68_189   UHQACTR = {"niltom"}; 
A_GISVEC(A68_VC ,VHQACTR,UHQACTR,6)
static A68_174   WHQACTR = {"gotoproc"}; 
A_GISVEC(A68_VC ,XHQACTR,WHQACTR,8)
static A68_192   YHQACTR = {"gotom"}; 
A_GISVEC(A68_VC ,ZHQACTR,YHQACTR,5)
static A68_190   AIQACTR = {"realtocompl"}; 
A_GISVEC(A68_VC ,BIQACTR,AIQACTR,11)
static A68_175   CIQACTR = {"inttoreal"}; 
A_GISVEC(A68_VC ,DIQACTR,CIQACTR,9)
static A68_193   EIQACTR = {"68R inttobits"}; 
A_GISVEC(A68_VC ,FIQACTR,EIQACTR,13)
static A68_189   GIQACTR = {"arrarr"}; 
A_GISVEC(A68_VC ,HIQACTR,GIQACTR,6)
static A68_189   IIQACTR = {"vecarr"}; 
A_GISVEC(A68_VC ,JIQACTR,IIQACTR,6)
static A68_192   KIQACTR = {"isvec"}; 
A_GISVEC(A68_VC ,LIQACTR,KIQACTR,5)
static A68_194   MIQACTR = {"is"}; 
A_GISVEC(A68_VC ,NIQACTR,MIQACTR,2)
static A68_192   OIQACTR = {"unite"}; 
A_GISVEC(A68_VC ,PIQACTR,OIQACTR,5)
static A68_189   QIQACTR = {"uniteu"}; 
A_GISVEC(A68_VC ,RIQACTR,QIQACTR,6)
static A68_192   SIQACTR = {"isarr"}; 
A_GISVEC(A68_VC ,TIQACTR,SIQACTR,5)
static A68_56   UIQACTR = {"skiptom"}; 
A_GISVEC(A68_VC ,VIQACTR,UIQACTR,7)
static A68_165   WIQACTR = {"vec"}; 
A_GISVEC(A68_VC ,XIQACTR,WIQACTR,3)
static A68_165   YIQACTR = {"arr"}; 
A_GISVEC(A68_VC ,ZIQACTR,YIQACTR,3)
static A68_56   AJQACTR = {"deunite"}; 
A_GISVEC(A68_VC ,BJQACTR,AJQACTR,7)
static A68_193   CJQACTR = {"bitstov[]bool"}; 
A_GISVEC(A68_VC ,DJQACTR,CJQACTR,13)
static A68_165   EJQACTR = {"vac"}; 
A_GISVEC(A68_VC ,FJQACTR,EJQACTR,3)
static A68_174   GJQACTR = {"ytypetom"}; 
A_GISVEC(A68_VC ,HJQACTR,GJQACTR,8)
static A68_174   IJQACTR = {"mtoxtype"}; 
A_GISVEC(A68_VC ,JJQACTR,IJQACTR,8)
static A68_170   KJQACTR = {"static generator"}; 
A_GISVEC(A68_VC ,LJQACTR,KJQACTR,16)
static A68_189   MJQACTR = {"format"}; 
A_GISVEC(A68_VC ,NJQACTR,MJQACTR,6)
static A68_194   OJQACTR = {" ?"}; 
A_GISVEC(A68_VC ,QJQACTR,OJQACTR,2)
static A68_165   UJQACTR = {"NIL"}; 
A_GISVEC(A68_VC ,WJQACTR,UJQACTR,3)
static A68_191   ZJQACTR = {"SKIP value"}; 
A_GISVEC(A68_VC ,AKQACTR,ZJQACTR,10)
static A68_191   BKQACTR = {"skip value"}; 
A_GISVEC(A68_VC ,CKQACTR,BKQACTR,10)
static A68_194   DKQACTR = {"( "}; 
static A68_194   EKQACTR = {", "}; 
static A68_192   GKQACTR = {"EMPTY"}; 
A_GISVEC(A68_VC ,IKQACTR,GKQACTR,5)
static A68_191   KKQACTR = {"constant: "}; 
A_GISVEC(A68_VC ,LKQACTR,KKQACTR,10)
static A68_56   OKQACTR = {"label: "}; 
A_GISVEC(A68_VC ,PKQACTR,OKQACTR,7)
static A68_163   SKQACTR = {"identifier: "}; 
A_GISVEC(A68_VC ,TKQACTR,SKQACTR,12)
static A68_190   WKQACTR = {"temporary: "}; 
A_GISVEC(A68_VC ,XKQACTR,WKQACTR,11)
static A68_190   BLQACTR = {"cfragment: "}; 
A_GISVEC(A68_VC ,CLQACTR,BLQACTR,11)
static A68_163   ELQACTR = {"empty or vac"}; 
A_GISVEC(A68_VC ,FLQACTR,ELQACTR,12)
static A68_40   GLQACTR = {"skip"}; 
A_GISVEC(A68_VC ,HLQACTR,GLQACTR,4)
static A68_165   ILQACTR = {"nil"}; 
A_GISVEC(A68_VC ,JLQACTR,ILQACTR,3)
static A68_118   KLQACTR = {"TRACER - Unknown nse constituent"}; 
A_GISVEC(A68_VC ,LLQACTR,KLQACTR,32)
static A68_188   NLQACTR = {" routineinfo: "}; 
A_GISVEC(A68_VC ,OLQACTR,NLQACTR,14)
static A68_165   ULQACTR = {" ( "}; 
static A68_174   VLQACTR = {", .... )"}; 
A_GISVEC(A68_VC ,WLQACTR,ULQACTR,3)
A_GISVEC(A68_VC ,YLQACTR,VLQACTR,8)
static A68_165   ZLQACTR = {" ( "}; 
static A68_191   AMQACTR = {", no ops: "}; 
static A68_175   BMQACTR = {", param: "}; 
static A68_194   CMQACTR = {" )"}; 
A_GISVEC(A68_VC ,DMQACTR,ZLQACTR,3)
A_GISVEC(A68_VC ,FMQACTR,AMQACTR,10)
A_GISVEC(A68_VC ,IMQACTR,BMQACTR,9)
A_GISVEC(A68_VC ,KMQACTR,CMQACTR,2)
static A68_197   LMQACTR = {"TRACER - Unknown EXTRA in value"}; 
A_GISVEC(A68_VC ,MMQACTR,LMQACTR,31)
static A68_194   NMQACTR = {" )"}; 
A_GISVEC(A68_VC ,OMQACTR,DKQACTR,2)
A_GISVEC(A68_VC ,QMQACTR,EKQACTR,2)
A_GISVEC(A68_VC ,RMQACTR,NMQACTR,2)
static A68_200   CNQACTR = {"VALUES - uvalue to cfragment: unknown constituent of union"}; 
A_GISVEC(A68_VC ,DNQACTR,CNQACTR,58)
static A68_203   HNQACTR = {"VALUES - join uvalue: no parameters"}; 
A_GISVEC(A68_VC ,INQACTR,HNQACTR,35)
static A68_204   YNQACTR = {"VALUES - comma separate: no parameters"}; 
A_GISVEC(A68_VC ,ZNQACTR,YNQACTR,38)
static A68_165   TPQACTR = {" = "}; 
A_GISVEC(A68_VC ,UPQACTR,TPQACTR,3)
static A68_194   ZPQACTR = {" ;"}; 
A_GISVEC(A68_VC ,AQQACTR,ZPQACTR,2)
static A68_192   HQQACTR = {"YIELD"}; 
A_GISVEC(A68_VC ,KQQACTR,HQQACTR,5)
typedef struct   /* env of non-global proc */
{
int dummy;
} MNQACTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} DOQACTR_generator;

A68_108 * XUPACTR_tree(A68_INT  Mode, A68_INT  Fn, A68_BITS  Param, A68_149  Operands);

A_STATIC A68_115 * GVPACTR_assignment(A68_115 * EVPACTR_anonymous, A68_115  FVPACTR_anonymous);

A_STATIC A68_108 * JVPACTR_assignment(A68_108 * HVPACTR_anonymous, A68_108  IVPACTR_anonymous);

A_STATIC A68_109 * OVPACTR_assignment(A68_109 * MVPACTR_anonymous, A68_109  NVPACTR_anonymous);

A_STATIC A68_BITS  EWPACTR_xor(A68_BITS  A, A68_BITS  B);

A68_BOOL  IWPACTR_hasattribute(A68_108 * Value, A68_BITS  A);

A68_BOOL  NWPACTR_(A68_108 * V1, A68_108 * V2);

A68_BOOL  WWPACTR_(A68_108 * V1, A68_108 * V2);

A68_BOOL  ZWPACTR_isconstant(A68_108 * Value);

A68_BOOL  EXPACTR_isconstant(A68_108 * Value, A68_LBITS  Const);

A_STATIC A68_BOOL  JXPACTR_isroutineinfo(A68_108 * Value);

A_STATIC A68_BOOL  NXPACTR_isatomic(A68_108 * Value);

A68_BOOL  SXPACTR_isident(A68_108 * Value);

A68_BOOL  WXPACTR_istemp(A68_108 * Value);

A68_BOOL  AYPACTR_iscfragment(A68_108 * Value);

A68_BOOL  EYPACTR_isskip(A68_108 * Value);

A68_BOOL  JYPACTR_isaname(A68_108 * Op);

A68_LBITS  NYPACTR_getconstant(A68_108 * Value);

A_STATIC A68_VOID  VYPACTR_refstring(A68_INT  Level, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  DZPACTR_derefname(A68_INT  Level, A68_VC  Name, A68_VC  *ReturnedValue);

A68_INT  MZPACTR_idreflevel(A68_INT  Mode, A68_INT  Ctype);

A68_VOID  UZPACTR_nlmacro(A68_VC  Cf, A68_VC  *ReturnedValue);

A68_VOID  DAQACTR_getcfragment(A68_108 * Value, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  HAQACTR_makeprocvalue(A68_VC  Name, A68_INT  Mode, A68_VC  *ReturnedValue);

A68_VOID  JEQACTR_bracketcfragment(A68_108 * Value, A68_VC  *ReturnedValue);

A68_108 * QEQACTR_indexvaluelist(A68_115 * List, A68_INT  Index);

A68_115 * WEQACTR_reversevaluelist(A68_115 * List);

A68_INT  DFQACTR_operandsof(A68_114  Treeoper);

A68_INT  HFQACTR_paramof(A68_114  Treeoper);

A68_108 * LFQACTR_operand(A68_108 * Oper, A68_INT  Rand);

A68_VOID  UFQACTR_derefvalue(A68_108 * Value);

A68_VOID  ZFQACTR_enrefvalue(A68_108 * Value);

A_STATIC A68_VOID  CGQACTR_fnname(A68_INT  Fn, A68_VC  *ReturnedValue);

A68_VOID  TJQACTR_valuestring(A68_108 * Value, A68_BOOL  Brief, A68_VC  *ReturnedValue);

A68_VOID  TMQACTR_uvaluetocfragment(A68_198  U, A68_VC  *ReturnedValue);

A68_VOID  GNQACTR_joinuvalue(A68_201  Items, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  LNQACTR_generator(A68_BOOL  JNQACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XNQACTR_commaseparate(A68_201  Items, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  COQACTR_generator(A68_BOOL  AOQACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  UOQACTR_commalist(A68_201  Items, A68_VC  *ReturnedValue);

A68_VOID  APQACTR_usemacro(A68_VC  Macro, A68_201  Arguments, A68_VC  *ReturnedValue);

A68_VOID  FPQACTR_emitline(A68_201  Uv);

A68_VOID  OPQACTR_yieldtemporary(A68_VC  Comment, A68_INT  Mode, A68_201  Op, A68_112  *ReturnedValue);

A68_108 * GQQACTR_yield(A68_108 * Op);

A68_108 * RQQACTR_yield(A68_VC  Comment, A68_108 * Op);

A_STATIC A68_109 * OVPACTR_assignment(A68_109 * MVPACTR_anonymous, A68_109  NVPACTR_anonymous)
{ 
A68_109  PVPACTR;  /* united object - for case conformity */
A68_VC  QVPACTR_anonymous A_UNUSED = {0};
A68_VC  RVPACTR;  /* OPERATORS - copy to flex */
A68_154 * SVPACTR;  /* YIELD */
A68_109 * TVPACTR;  /* clause result */
{ 
(*A_NILCHECK(MVPACTR_anonymous)) = NVPACTR_anonymous;
PVPACTR = NVPACTR_anonymous ;
switch ( PVPACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
QVPACTR_anonymous = (PVPACTR.data.mode6);
SVPACTR = &(MVPACTR_anonymous-> data.mode6) ;
(void)((*A_NILCHECK(SVPACTR)) = A_VCOPY(QVPACTR_anonymous,RVPACTR,A68_CHAR ));
break;
default: 
/*SKIP*/;
break;
} 
TVPACTR = MVPACTR_anonymous;
} 
return( TVPACTR );
} 
#undef NL

A_STATIC A68_108 * JVPACTR_assignment(A68_108 * HVPACTR_anonymous, A68_108  IVPACTR_anonymous)
{ 
A68_INT * KVPACTR;  /* YIELD */
A68_BITS * LVPACTR;  /* YIELD */
A68_108 * UVPACTR;  /* clause result */
{ 
KVPACTR = (&(A_NILCHECK(HVPACTR_anonymous)->Mode)) ;
(*A_NILCHECK(KVPACTR)) = IVPACTR_anonymous.Mode;
LVPACTR = (&(A_NILCHECK(HVPACTR_anonymous)->Info)) ;
(*A_NILCHECK(LVPACTR)) = IVPACTR_anonymous.Info;
(void)(OVPACTR_assignment((&(A_NILCHECK(HVPACTR_anonymous)->Extra)), IVPACTR_anonymous.Extra));
UVPACTR = HVPACTR_anonymous;
} 
return( UVPACTR );
} 
#undef NL

A_STATIC A68_115 * GVPACTR_assignment(A68_115 * EVPACTR_anonymous, A68_115  FVPACTR_anonymous)
{ 
A68_115 ** VVPACTR;  /* YIELD */
A68_115 * WVPACTR;  /* clause result */
{ 
(void)(JVPACTR_assignment((&(A_NILCHECK(EVPACTR_anonymous)->Value)), FVPACTR_anonymous.Value));
VVPACTR = (&(A_NILCHECK(EVPACTR_anonymous)->Rest)) ;
(*A_NILCHECK(VVPACTR)) = FVPACTR_anonymous.Rest;
WVPACTR = EVPACTR_anonymous;
} 
return( WVPACTR );
} 
#undef NL

A_STATIC A68_VOID  HAQACTR_makeprocvalue(A68_VC  Name, A68_INT  Mode, A68_VC  *ReturnedValue)
{ 
A68_112  KAQACTR;  /* avoid structure result */
A68_VC  LAQACTR;  /* OPERATORS - istruct -> vector */
A68_56  MAQACTR;  /* OPERATORS - istruct -> vector */
A68_VC  NAQACTR_tempname A_UNUSED = {0};
A68_172  OAQACTR;  /* collateral clause result */
A68_93  PAQACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  SAQACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  TAQACTR;  /* YIELD */
A68_93  UAQACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  VAQACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  WAQACTR;  /* YIELD */
A68_93  XAQACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  YAQACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  BBQACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  CBQACTR;  /* YIELD */
A68_93  DBQACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  EBQACTR;  /* OPERATORS - istruct -> vector */
A68_VC  FBQACTR;  /* clause result */
A_PROC_ENTRY(makeprocvalue);
 /* line 200: */
 /* line 201: */
{ 
QMOACTR_declarectemporary( Mode, JAQACTR, &KAQACTR );
MAQACTR = KAQACTR.Name ;
NAQACTR_tempname = A_HISVEC(LAQACTR,MAQACTR,7,A68_CHAR );
 /* line 202: */
 /* line 203: */
OAQACTR.data[0] = A_UNITE(PAQACTR,mode2,2,NAQACTR_tempname);
TAQACTR = RAQACTR ;
OAQACTR.data[1] = A_UNITE(SAQACTR,mode2,2,TAQACTR);
OAQACTR.data[2] = A_UNITE(UAQACTR,mode2,2,Name);
WAQACTR = ';' ;
OAQACTR.data[3] = A_UNITE(VAQACTR,mode1,1,WAQACTR);
 /* line 204: */
OAQACTR.data[4] = A_UNITE(XAQACTR,mode4,4,EIAACTR_cnewline);
OAQACTR.data[5] = A_UNITE(YAQACTR,mode2,2,NAQACTR_tempname);
 /* line 205: */
CBQACTR = ABQACTR ;
OAQACTR.data[6] = A_UNITE(BBQACTR,mode2,2,CBQACTR);
OAQACTR.data[7] = A_UNITE(DBQACTR,mode4,4,EIAACTR_cnewline);
 /* line 206: */
(void)(MDMACTR_writecstream(A_HISVEC(EBQACTR,OAQACTR,8,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel())));
 /* line 207: */
 /* line 208: */
FBQACTR = NAQACTR_tempname;
} 
A_PROC_EXIT(makeprocvalue);
*ReturnedValue = (FBQACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  LNQACTR_generator(A68_BOOL  JNQACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((MNQACTR_generator *)NonLocals)->x)
{ 
A68_VC  NNQACTR;  /* clause result */
A68_VC  ONQACTR;  /* OPERATORS - dynamic generator */
{ 
ONQACTR.upb = 0 ;
( JNQACTR_anonymous? A_VLOC(A68_CHAR ,ONQACTR): A_VHEAP(A68_CHAR ,ONQACTR) );
NNQACTR = ONQACTR;
} 
*ReturnedValue = (NNQACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  COQACTR_generator(A68_BOOL  AOQACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((DOQACTR_generator *)NonLocals)->x)
{ 
A68_VC  EOQACTR;  /* clause result */
A68_VC  FOQACTR;  /* OPERATORS - dynamic generator */
{ 
FOQACTR.upb = 0 ;
( AOQACTR_anonymous? A_VLOC(A68_CHAR ,FOQACTR): A_VHEAP(A68_CHAR ,FOQACTR) );
EOQACTR = FOQACTR;
} 
*ReturnedValue = (EOQACTR);
return;
} 
#undef NL

A68_108 * XUPACTR_tree(A68_INT  Mode, A68_INT  Fn, A68_BITS  Param, A68_149  Operands)
{ 
A68_115 * YUPACTR_operandlist A_UNUSED = {0};
A68_INT  ZUPACTR_upboperands A_UNUSED = {0};
A68_108 * AVPACTR_operand A_UNUSED = {0};
A68_108 ** BVPACTR;  /* forall control - []x */
A68_INT  CVPACTR;  /* forall loop counter */
A68_115  DVPACTR;  /* collateral clause result */
A68_108  XVPACTR;  /* collateral clause result */
A68_114  YVPACTR;  /* collateral clause result */
A68_BITS  ZVPACTR;  /* SHL */
A68_109  AWPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_108 * BWPACTR;  /* clause result */
A_PROC_ENTRY(tree);
 /* line 55: */
 /* line 56: */
{ 
YUPACTR_operandlist = (A68_115 *)A68_NIL;
 /* line 57: */
ZUPACTR_upboperands = Operands.upb;
 /* line 59: */
 /* line 60: */
CVPACTR = Operands.upb -1;
BVPACTR = Operands.data;
for (;CVPACTR-- >= 0;
(BVPACTR++
) )
{
AVPACTR_operand = *BVPACTR;
DVPACTR.Value = (*A_NILCHECK(AVPACTR_operand));
 /* line 61: */
DVPACTR.Rest = YUPACTR_operandlist;
(void)(YUPACTR_operandlist = GVPACTR_assignment(A_HEAP(A68_115 ), DVPACTR));
}
 /* line 63: */
 /* line 64: */
 /* line 65: */
XVPACTR.Mode = Mode;
 /* line 67: */
XVPACTR.Info = PKJACTR_defaultinfo;
 /* line 68: */
YVPACTR.Fn = Fn;
 /* line 70: */
ZVPACTR = (A68_BITS )ZUPACTR_upboperands ;
YVPACTR.Param = (A68_INT )(A68_BITS )(A_SHL(ZVPACTR,WGAACTR_operandsshift)|(A68_BITS )(Param&ZGAACTR_parammask));
 /* line 71: */
YVPACTR.Operands = YUPACTR_operandlist;
 /* line 72: */
XVPACTR.Extra = A_UNITE(AWPACTR,mode9,9,YVPACTR);
BWPACTR = JVPACTR_assignment(A_HEAP(A68_108 ), XVPACTR);
} 
A_PROC_EXIT(tree);
return( BWPACTR );
} 
#undef NL

A_STATIC A68_BITS  EWPACTR_xor(A68_BITS  A, A68_BITS  B)
{ 
A68_BITS  FWPACTR;  /* clause result */
A_PROC_ENTRY(xor);
FWPACTR = (A68_BITS )((A68_BITS )(A|B)&~(A68_BITS )(A&B));
A_PROC_EXIT(xor);
return( FWPACTR );
} 
#undef NL

A68_BOOL  IWPACTR_hasattribute(A68_108 * Value, A68_BITS  A)
{ 
A68_BOOL  JWPACTR;  /* clause result */
A68_BITS  KWPACTR;  /* ADICOPS - >= */
A_PROC_ENTRY(hasattribute);
 /* line 82: */
KWPACTR = (*A_NILCHECK((&(A_NILCHECK(Value)->Info)))) ;
JWPACTR = A_LB_GE(KWPACTR,A);
A_PROC_EXIT(hasattribute);
return( JWPACTR );
} 
#undef NL

A68_BOOL  NWPACTR_(A68_108 * V1, A68_108 * V2)
{ 
A68_109  OWPACTR;  /* united object - for case conformity */
A68_109  PWPACTR;  /* united object - for case conformity */
A68_BOOL  QWPACTR;  /* clause result */
A68_LBITS  RWPACTR_b1 A_UNUSED = {0};
A68_109  SWPACTR;  /* united object - for case conformity */
A68_LBITS  TWPACTR_b2 A_UNUSED = {0};
A_PROC_ENTRY(=);
 /* line 91: */
 /* line 92: */
OWPACTR = (*A_NILCHECK((&(A_NILCHECK(V1)->Extra)))) ;
switch ( OWPACTR.mode )
{ 
case 3: /* VOID */
 /* line 93: */
PWPACTR = (*A_NILCHECK((&(A_NILCHECK(V2)->Extra)))) ;
switch ( PWPACTR.mode )
{ 
case 3: /* VOID */
 /* line 94: */
QWPACTR = ((*A_NILCHECK((&(A_NILCHECK(V1)->Mode))))==(*A_NILCHECK((&(A_NILCHECK(V2)->Mode)))));
break;
default: 
 /* line 95: */
 /* line 96: */
QWPACTR = A68_FALSE;
break;
} 
break;
case 1: /* LONG BITS */
RWPACTR_b1 = (OWPACTR.data.mode1);
SWPACTR = (*A_NILCHECK((&(A_NILCHECK(V2)->Extra)))) ;
switch ( SWPACTR.mode )
{ 
case 1: /* LONG BITS */
TWPACTR_b2 = (SWPACTR.data.mode1);
QWPACTR = (RWPACTR_b1==TWPACTR_b2);
break;
default: 
 /* line 97: */
QWPACTR = A68_FALSE;
break;
} 
break;
default: 
 /* line 98: */
QWPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(=);
return( QWPACTR );
} 
#undef NL

A68_BOOL  WWPACTR_(A68_108 * V1, A68_108 * V2)
{ 
A68_BOOL  XWPACTR;  /* clause result */
A_PROC_ENTRY(/=);
XWPACTR = (!NWPACTR_(V1, V2));
A_PROC_EXIT(/=);
return( XWPACTR );
} 
#undef NL

A68_BOOL  ZWPACTR_isconstant(A68_108 * Value)
{ 
A68_109  AXPACTR;  /* united object - for case conformity */
A68_BOOL  BXPACTR;  /* clause result */
A_PROC_ENTRY(isconstant);
 /* line 107: */
AXPACTR = (*A_NILCHECK((&(A_NILCHECK(Value)->Extra)))) ;
switch ( AXPACTR.mode )
{ 
case 1: /* LONG BITS */
BXPACTR = A68_TRUE;
break;
case 6: /* VECTOR [] CHAR */
BXPACTR = IWPACTR_hasattribute(Value, QKJACTR_constant);
break;
default: 
BXPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(isconstant);
return( BXPACTR );
} 
#undef NL

A68_BOOL  EXPACTR_isconstant(A68_108 * Value, A68_LBITS  Const)
{ 
A68_109  FXPACTR;  /* united object - for case conformity */
A68_LBITS  GXPACTR_b A_UNUSED = {0};
A68_BOOL  HXPACTR;  /* clause result */
A_PROC_ENTRY(isconstant);
 /* line 110: */
FXPACTR = (*A_NILCHECK((&(A_NILCHECK(Value)->Extra)))) ;
switch ( FXPACTR.mode )
{ 
case 1: /* LONG BITS */
GXPACTR_b = (FXPACTR.data.mode1);
HXPACTR = (GXPACTR_b==Const);
break;
default: 
HXPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(isconstant);
return( HXPACTR );
} 
#undef NL

A_STATIC A68_BOOL  JXPACTR_isroutineinfo(A68_108 * Value)
{ 
A68_109  KXPACTR;  /* united object - for case conformity */
A68_BOOL  LXPACTR;  /* clause result */
A_PROC_ENTRY(isroutineinfo);
 /* line 113: */
KXPACTR = (*A_NILCHECK((&(A_NILCHECK(Value)->Extra)))) ;
switch ( KXPACTR.mode )
{ 
case 2: /* STRUCT(INT)  */
LXPACTR = A68_TRUE;
break;
default: 
LXPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(isroutineinfo);
return( LXPACTR );
} 
#undef NL

A_STATIC A68_BOOL  NXPACTR_isatomic(A68_108 * Value)
{ 
A68_109  OXPACTR;  /* united object - for case conformity */
A68_BOOL  PXPACTR;  /* clause result */
A68_BOOL  QXPACTR;  /* optbool result */
A_PROC_ENTRY(isatomic);
 /* line 116: */
 /* line 117: */
OXPACTR = (*A_NILCHECK((&(A_NILCHECK(Value)->Extra)))) ;
switch ( OXPACTR.mode )
{ 
case 1: /* LONG BITS */
 /* line 118: */
PXPACTR = A68_TRUE;
break;
case 5: /* STRUCT(MODE56,INT)  */
 /* line 119: */
PXPACTR = A68_TRUE;
break;
case 4: /* STRUCT(INT)  */
 /* line 120: */
PXPACTR = A68_TRUE;
break;
case 6: /* VECTOR [] CHAR */
QXPACTR = IWPACTR_hasattribute(Value, QKJACTR_constant);
if ( ! QXPACTR )
{ /* line 121: */
QXPACTR = IWPACTR_hasattribute(Value, RKJACTR_atomic);
}
PXPACTR = QXPACTR;
break;
default: 
 /* line 122: */
PXPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(isatomic);
return( PXPACTR );
} 
#undef NL

A68_BOOL  SXPACTR_isident(A68_108 * Value)
{ 
A68_109  TXPACTR;  /* united object - for case conformity */
A68_BOOL  UXPACTR;  /* clause result */
A_PROC_ENTRY(isident);
 /* line 128: */
TXPACTR = (*A_NILCHECK((&(A_NILCHECK(Value)->Extra)))) ;
switch ( TXPACTR.mode )
{ 
case 4: /* STRUCT(INT)  */
UXPACTR = A68_TRUE;
break;
default: 
UXPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(isident);
return( UXPACTR );
} 
#undef NL

A68_BOOL  WXPACTR_istemp(A68_108 * Value)
{ 
A68_109  XXPACTR;  /* united object - for case conformity */
A68_BOOL  YXPACTR;  /* clause result */
A_PROC_ENTRY(istemp);
 /* line 131: */
XXPACTR = (*A_NILCHECK((&(A_NILCHECK(Value)->Extra)))) ;
switch ( XXPACTR.mode )
{ 
case 5: /* STRUCT(MODE56,INT)  */
YXPACTR = A68_TRUE;
break;
default: 
YXPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(istemp);
return( YXPACTR );
} 
#undef NL

A68_BOOL  AYPACTR_iscfragment(A68_108 * Value)
{ 
A68_109  BYPACTR;  /* united object - for case conformity */
A68_BOOL  CYPACTR;  /* clause result */
A_PROC_ENTRY(iscfragment);
 /* line 134: */
BYPACTR = (*A_NILCHECK((&(A_NILCHECK(Value)->Extra)))) ;
switch ( BYPACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
CYPACTR = A68_TRUE;
break;
default: 
CYPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(iscfragment);
return( CYPACTR );
} 
#undef NL

A68_BOOL  EYPACTR_isskip(A68_108 * Value)
{ 
A68_109  FYPACTR;  /* united object - for case conformity */
A68_113  GYPACTR_tn A_UNUSED = {0};
A68_BOOL  HYPACTR;  /* clause result */
A_PROC_ENTRY(isskip);
 /* line 137: */
FYPACTR = (*A_NILCHECK((&(A_NILCHECK(Value)->Extra)))) ;
switch ( FYPACTR.mode )
{ 
case 8: /* STRUCT(INT)  */
GYPACTR_tn = (FYPACTR.data.mode8);
HYPACTR = (GYPACTR_tn.Nse==2);
break;
default: 
HYPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(isskip);
return( HYPACTR );
} 
#undef NL

A68_BOOL  JYPACTR_isaname(A68_108 * Op)
{ 
A68_109  KYPACTR;  /* united object - for case conformity */
A68_BOOL  LYPACTR;  /* clause result */
A_PROC_ENTRY(isaname);
 /* line 140: */
 /* line 141: */
KYPACTR = (*A_NILCHECK((&(A_NILCHECK(Op)->Extra)))) ;
switch ( KYPACTR.mode )
{ 
case 4: /* STRUCT(INT)  */
 /* line 142: */
LYPACTR = A68_TRUE;
break;
case 5: /* STRUCT(MODE56,INT)  */
 /* line 143: */
LYPACTR = A68_TRUE;
break;
default: 
 /* line 144: */
LYPACTR = A68_FALSE;
break;
} 
A_PROC_EXIT(isaname);
return( LYPACTR );
} 
#undef NL

A68_LBITS  NYPACTR_getconstant(A68_108 * Value)
{ 
A68_109  OYPACTR;  /* united object - for case conformity */
A68_LBITS  PYPACTR_b A_UNUSED = {0};
A68_LBITS  QYPACTR;  /* clause result */
A68_LBITS  TYPACTR = {0};  /* OPERATORS - skip to mode */
A_PROC_ENTRY(getconstant);
 /* line 147: */
 /* line 148: */
OYPACTR = (*A_NILCHECK((&(A_NILCHECK(Value)->Extra)))) ;
switch ( OYPACTR.mode )
{ 
case 1: /* LONG BITS */
PYPACTR_b = (OYPACTR.data.mode1);
 /* line 149: */
QYPACTR = PYPACTR_b;
break;
default: 
(void)(WXIACTR_assert(SYPACTR, A68_FALSE));
 /* line 150: */
QYPACTR = TYPACTR;
break;
} 
A_PROC_EXIT(getconstant);
return( QYPACTR );
} 
#undef NL

A_STATIC A68_VOID  VYPACTR_refstring(A68_INT  Level, A68_VC  *ReturnedValue)
{ 
A68_BOOL  XYPACTR;  /* optbool result */
A68_CHAR  ZYPACTR;  /* clause result */
A68_VC  AZPACTR;  /* clause result */
A_PROC_ENTRY(refstring);
 /* line 162: */
 /* line 163: */
{ 
XYPACTR = (Level>=(-1));
if ( XYPACTR )
{XYPACTR = (Level<32);
}
(void)(WXIACTR_assert(YYPACTR, XYPACTR));
 /* line 164: */
if (Level>0)
{ 
ZYPACTR = '*';
} 
else
{ 
 /* line 165: */
ZYPACTR = '&';
} 
AZPACTR = A_C_TIMES(ZYPACTR,A_ABS(Level));
} 
A_PROC_EXIT(refstring);
*ReturnedValue = (AZPACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  DZPACTR_derefname(A68_INT  Level, A68_VC  Name, A68_VC  *ReturnedValue)
{ 
A68_VC  EZPACTR;  /* clause result */
A68_VC  FZPACTR;  /* avoid structure result */
A68_VC  IZPACTR;  /* avoid structure result */
A68_VC  JZPACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(derefname);
 /* line 172: */
 /* line 173: */
if (Level<=0)
{ 
 /* line 174: */
VYPACTR_refstring( Level, &FZPACTR );
EZPACTR = A_VC_PLUS(FZPACTR,Name);
} 
else
{ 
 /* line 175: */
DZPACTR_derefname( (Level-1), Name, &IZPACTR );
EZPACTR = A_VC_PLUS(A_VC_PLUS(HZPACTR,IZPACTR),A_HVEC(JZPACTR,')',A68_CHAR ));
} 
A_PROC_EXIT(derefname);
*ReturnedValue = (EZPACTR);
return;
} 
#undef NL

A68_INT  MZPACTR_idreflevel(A68_INT  Mode, A68_INT  Ctype)
{ 
A68_BOOL  NZPACTR_firmarray A_UNUSED = {0};
A68_INT  OZPACTR_diff A_UNUSED = {0};
A68_BOOL  QZPACTR;  /* optbool result */
A68_INT  SZPACTR;  /* clause result */
A_PROC_ENTRY(idreflevel);
 /* line 178: */
 /* line 179: */
{ 
NZPACTR_firmarray = FRMACTR_isfirmarray(Mode);
 /* line 180: */
 /* line 181: */
 /* line 183: */
 /* line 184: */
 /* line 185: */
 /* line 186: */
OZPACTR_diff = (((Ctype/VFAACTR_refmark)+(NZPACTR_firmarray))-((Mode/VFAACTR_refmark)+((NZPACTR_firmarray&(!RSMACTR_hasrefs(Mode))))));
 /* line 187: */
 /* line 188: */
QZPACTR = (OZPACTR_diff>=0);
if ( ! QZPACTR )
{QZPACTR = (OZPACTR_diff==(-1));
}
(void)(WXIACTR_assert(RZPACTR, QZPACTR));
 /* line 189: */
 /* line 190: */
SZPACTR = OZPACTR_diff;
} 
A_PROC_EXIT(idreflevel);
return( SZPACTR );
} 
#undef NL

A68_VOID  UZPACTR_nlmacro(A68_VC  Cf, A68_VC  *ReturnedValue)
{ 
A68_166  VZPACTR;  /* collateral clause result */
A68_VC  YZPACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ZZPACTR;  /* clause result */
A68_36  AAQACTR;  /* OPERATORS - istruct -> vector */
A68_VC  BAQACTR;  /* avoid structure result */
A_PROC_ENTRY(nlmacro);
VZPACTR.data[0] = XZPACTR;
VZPACTR.data[1] = Cf;
VZPACTR.data[2] = A_HVEC(YZPACTR,')',A68_CHAR );
JDAAOSF_concat( A_HISVEC(AAQACTR,VZPACTR,3,A68_VC ), &BAQACTR );
ZZPACTR = BAQACTR;
A_PROC_EXIT(nlmacro);
*ReturnedValue = (ZZPACTR);
return;
} 
#undef NL

A68_VOID  DAQACTR_getcfragment(A68_108 * Value, A68_VC  *ReturnedValue)
{ 
A68_109  GBQACTR;  /* united object - for case conformity */
A68_VC  HBQACTR_c A_UNUSED = {0};
A68_VC  IBQACTR;  /* clause result */
A68_112  JBQACTR_t A_UNUSED = {0};
A68_INT  KBQACTR_vmode A_UNUSED = {0};
A68_INT  LBQACTR;  /* clause result */
A68_INT  MBQACTR_rmode A_UNUSED = {0};
A68_INT  NBQACTR_diff A_UNUSED = {0};
A68_VC  QBQACTR;  /* OPERATORS - istruct -> vector */
A68_56  RBQACTR;  /* OPERATORS - istruct -> vector */
A68_VC  SBQACTR;  /* avoid structure result */
A68_VC  TBQACTR_result A_UNUSED = {0};
A68_VC  UBQACTR;  /* avoid structure result */
A68_LBITS  VBQACTR_b A_UNUSED = {0};
A68_VC  WBQACTR;  /* avoid structure result */
A68_113  XBQACTR_nihil A_UNUSED = {0};
A68_110  GCQACTR_r A_UNUSED = {0};
A68_INT  HCQACTR_rd A_UNUSED = {0};
A68_BOOL  ICQACTR;  /* clause result */
A68_95 * JCQACTR_rdinfo A_UNUSED = {0};
A68_BITS  KCQACTR;  /* ADICOPS - >= */
A68_VC  LCQACTR;  /* avoid structure result */
A68_VC  MCQACTR;  /* avoid structure result */
A68_VC  NCQACTR;  /* avoid structure result */
A68_VC  OCQACTR;  /* avoid structure result */
A68_VC  PCQACTR;  /* avoid structure result */
A68_111  SCQACTR_i A_UNUSED = {0};
A68_BOOL  TCQACTR_bracketsrequired A_UNUSED = {0};
A68_BOOL  UCQACTR_nonlocal A_UNUSED = {0};
A68_INT  VCQACTR_id A_UNUSED = {0};
A68_BOOL  XCQACTR;  /* optbool result */
A68_BOOL  YCQACTR;  /* optbool result */
A68_94 * ADQACTR_idinfo A_UNUSED = {0};
A68_BITS  BDQACTR;  /* ADICOPS - >= */
A68_BOOL  CDQACTR_isgproc A_UNUSED = {0};
A68_VC  DDQACTR;  /* clause result */
A68_VC  EDQACTR;  /* avoid structure result */
A68_VC  FDQACTR;  /* avoid structure result */
A68_VC  GDQACTR;  /* avoid structure result */
A68_VC  HDQACTR_name A_UNUSED = {0};
A68_VC  KDQACTR;  /* clause result */
A68_VC  LDQACTR;  /* avoid structure result */
A68_VC  MDQACTR;  /* avoid structure result */
A68_INT  NDQACTR;  /* clause result */
A68_INT  ODQACTR_reqda68mode A_UNUSED = {0};
A68_INT  PDQACTR;  /* clause result */
A68_INT  QDQACTR_reqdcmode A_UNUSED = {0};
A68_INT  RDQACTR_diff A_UNUSED = {0};
A68_VC  SDQACTR;  /* avoid structure result */
A68_VC  TDQACTR_body A_UNUSED = {0};
A68_VC  UDQACTR;  /* avoid structure result */
A68_57  VDQACTR_label A_UNUSED = {0};
A68_INT  WDQACTR_l A_UNUSED = {0};
A68_VC  ZDQACTR;  /* avoid structure result */
A68_61  AEQACTR;  /* avoid structure result */
A68_VC  BEQACTR;  /* avoid structure result */
A68_VC  CEQACTR;  /* avoid structure result */
A68_VC  DEQACTR;  /* avoid structure result */
A68_VC  EEQACTR;  /* avoid structure result */
A68_VC  HEQACTR = {0};  /* OPERATORS - skip to mode */
A_PROC_ENTRY(getcfragment);
 /* line 198: */
 /* line 199: */
{ 
 /* line 210: */
 /* line 212: */
GBQACTR = (*A_NILCHECK((&(A_NILCHECK(Value)->Extra)))) ;
switch ( GBQACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
HBQACTR_c = (GBQACTR.data.mode6);
 /* line 214: */
IBQACTR = HBQACTR_c;
break;
case 5: /* STRUCT(MODE56,INT)  */
JBQACTR_t = (GBQACTR.data.mode5);
 /* line 215: */
{ 
KBQACTR_vmode = (*A_NILCHECK((&(A_NILCHECK(Value)->Mode))));
 /* line 216: */
 /* line 217: */
 /* line 218: */
if (IWPACTR_hasattribute(Value, VKJACTR_lvalue))
{ 
 /* line 219: */
 /* line 220: */
LBQACTR = BTMACTR_derefmode(KBQACTR_vmode);
} 
else
{ 
LBQACTR = KBQACTR_vmode;
} 
MBQACTR_rmode = LBQACTR;
 /* line 221: */
NBQACTR_diff = MZPACTR_idreflevel(MBQACTR_rmode, JBQACTR_t.Mode);
 /* line 222: */
 /* line 223: */
(void)(WXIACTR_assert(PBQACTR, (NBQACTR_diff>=0)));
 /* line 224: */
RBQACTR = JBQACTR_t.Name ;
DZPACTR_derefname( NBQACTR_diff, A_HISVEC(QBQACTR,RBQACTR,7,A68_CHAR ), &SBQACTR );
TBQACTR_result = SBQACTR;
 /* line 225: */
if (NBQACTR_diff>0)
{ 
JIAACTR_bracket( TBQACTR_result, &UBQACTR );
IBQACTR = UBQACTR;
} 
else
{ 
 /* line 226: */
 /* line 228: */
IBQACTR = TBQACTR_result;
} 
} 
break;
case 1: /* LONG BITS */
VBQACTR_b = (GBQACTR.data.mode1);
 /* line 230: */
JPAAOSF_lwhole( (A68_LINT )VBQACTR_b, 0, &WBQACTR );
IBQACTR = WBQACTR;
break;
case 8: /* STRUCT(INT)  */
XBQACTR_nihil = (GBQACTR.data.mode8);
 /* line 231: */
 /* line 232: */
switch ( XBQACTR_nihil.Nse )
{ 
case 1: 
IBQACTR = ZBQACTR;
break;
case 2: 
 /* line 233: */
IBQACTR = BCQACTR;
break;
case 3: 
 /* line 234: */
IBQACTR = DCQACTR;
break;
default: 
 /* line 236: */
IBQACTR = FCQACTR;
break;
} 
break;
case 2: /* STRUCT(INT)  */
GCQACTR_r = (GBQACTR.data.mode2);
 /* line 237: */
{ 
{ 
HCQACTR_rd = GCQACTR_r.Rdenno;
 /* line 238: */
 /* line 239: */
 /* line 240: */
 /* line 241: */
ICQACTR = ((HCQACTR_rd<=KAAACTR_maxrdno)&(HCQACTR_rd>=JAAACTR_minrdno));
if (ICQACTR)
{ 
JCQACTR_rdinfo = (&A_R1INDEX(XPKACTR_rds,HCQACTR_rd));
 /* line 242: */
 /* line 243: */
KCQACTR = (*A_NILCHECK((&(A_NILCHECK(JCQACTR_rdinfo)->Flags)))) ;
if (A_LB_GE(KCQACTR,RQKACTR_rdglobalflag))
{ 
 /* line 244: */
UTKACTR_idfullname( HCQACTR_rd, &LCQACTR );
HAQACTR_makeprocvalue( LCQACTR, (*A_NILCHECK((&(A_NILCHECK(JCQACTR_rdinfo)->Mode)))), &MCQACTR );
IBQACTR = MCQACTR;
} 
else
{ 
 /* line 245: */
if (IWPACTR_hasattribute(Value, TKJACTR_nonloc))
{ 
 /* line 246: */
UTKACTR_idfullname( HCQACTR_rd, &NCQACTR );
UZPACTR_nlmacro( NCQACTR, &OCQACTR );
IBQACTR = OCQACTR;
} 
else
{ 
 /* line 247: */
 /* line 248: */
 /* line 249: */
UTKACTR_idfullname( HCQACTR_rd, &PCQACTR );
IBQACTR = PCQACTR;
} 
} 
} 
else
{ 
 /* line 252: */
IBQACTR = RCQACTR;
} 
} 
} 
break;
case 4: /* STRUCT(INT)  */
SCQACTR_i = (GBQACTR.data.mode4);
 /* line 253: */
 /* line 254: */
{ 
TCQACTR_bracketsrequired = A68_FALSE;
 /* line 255: */
UCQACTR_nonlocal = IWPACTR_hasattribute(Value, TKJACTR_nonloc);
 /* line 257: */
VCQACTR_id = SCQACTR_i.Idno;
 /* line 258: */
 /* line 259: */
 /* line 250: */
XCQACTR = (VCQACTR_id<=IAAACTR_maxidno);
if ( ! XCQACTR )
{YCQACTR = (VCQACTR_id>=LAAACTR_minlibid);
if ( YCQACTR )
{YCQACTR = (VCQACTR_id<=MAAACTR_maxlibid);
}
XCQACTR = YCQACTR;
}
(void)(WXIACTR_assert(ZCQACTR, XCQACTR));
 /* line 260: */
ADQACTR_idinfo = YQKACTR_get_idinfo(VCQACTR_id);
 /* line 261: */
BDQACTR = (*A_NILCHECK((&(A_NILCHECK(ADQACTR_idinfo)->Flags)))) ;
CDQACTR_isgproc = A_LB_GE(BDQACTR,JQKACTR_idgprocflag);
 /* line 262: */
 /* line 263: */
 /* line 264: */
if (UCQACTR_nonlocal)
{ 
 /* line 265: */
UTKACTR_idfullname( SCQACTR_i.Idno, &EDQACTR );
UZPACTR_nlmacro( EDQACTR, &FDQACTR );
DDQACTR = FDQACTR;
} 
else
{ 
 /* line 266: */
UTKACTR_idfullname( SCQACTR_i.Idno, &GDQACTR );
DDQACTR = GDQACTR;
} 
HDQACTR_name = DDQACTR;
 /* line 267: */
 /* line 268: */
 /* line 269: */
 /* line 270: */
if (CDQACTR_isgproc)
{ 
(void)(WXIACTR_assert(JDQACTR, (!UCQACTR_nonlocal)));
 /* line 271: */
 /* line 272: */
 /* line 278: */
UTKACTR_idfullname( VCQACTR_id, &LDQACTR );
HAQACTR_makeprocvalue( LDQACTR, (*A_NILCHECK((&(A_NILCHECK(ADQACTR_idinfo)->Mode)))), &MDQACTR );
KDQACTR = MDQACTR;
} 
else
{ 
 /* line 279: */
if (IWPACTR_hasattribute(Value, VKJACTR_lvalue))
{ 
 /* line 280: */
 /* line 281: */
NDQACTR = BTMACTR_derefmode((*A_NILCHECK((&(A_NILCHECK(Value)->Mode)))));
} 
else
{ 
NDQACTR = (*A_NILCHECK((&(A_NILCHECK(Value)->Mode))));
} 
ODQACTR_reqda68mode = NDQACTR;
 /* line 282: */
 /* line 283: */
 /* line 284: */
if (UCQACTR_nonlocal)
{ 
 /* line 285: */
PDQACTR = TKNACTR_givecvariabletype((*A_NILCHECK((&(A_NILCHECK(YQKACTR_get_idinfo(VCQACTR_id))->Mode)))), A68_TRUE);
} 
else
{ 
 /* line 286: */
PDQACTR = (*A_NILCHECK((&(A_NILCHECK(YQKACTR_get_idinfo(VCQACTR_id))->Cvariabletype))));
} 
QDQACTR_reqdcmode = PDQACTR;
 /* line 287: */
RDQACTR_diff = MZPACTR_idreflevel(ODQACTR_reqda68mode, QDQACTR_reqdcmode);
 /* line 288: */
(void)(TCQACTR_bracketsrequired = (RDQACTR_diff!=0));
 /* line 289: */
 /* line 290: */
DZPACTR_derefname( RDQACTR_diff, HDQACTR_name, &SDQACTR );
KDQACTR = SDQACTR;
} 
TDQACTR_body = KDQACTR;
 /* line 291: */
 /* line 292: */
if (TCQACTR_bracketsrequired)
{ 
 /* line 293: */
 /* line 294: */
JIAACTR_bracket( TDQACTR_body, &UDQACTR );
IBQACTR = UDQACTR;
} 
else
{ 
 /* line 295: */
 /* line 297: */
IBQACTR = TDQACTR_body;
} 
} 
break;
case 7: /* STRUCT(INT)  */
VDQACTR_label = (GBQACTR.data.mode7);
 /* line 298: */
 /* line 299: */
{ 
WDQACTR_l = VDQACTR_label.Labno;
 /* line 300: */
 /* line 301: */
 /* line 302: */
ROAAOSF_whole( WDQACTR_l, 0, &ZDQACTR );
(void)(WXIACTR_assert(A_VC_PLUS(YDQACTR,ZDQACTR), NTKACTR_labelisdeclared(WDQACTR_l)));
 /* line 303: */
 /* line 304: */
RTKACTR_labelenviron( WDQACTR_l, &AEQACTR );
if (VRLACTR_currentlevel()==AEQACTR.Level)
{ 
 /* line 305: */
WSKACTR_labelfullname( WDQACTR_l, &BEQACTR );
IBQACTR = BEQACTR;
} 
else
{ 
 /* line 306: */
if (IWPACTR_hasattribute(Value, TKJACTR_nonloc))
{ 
 /* line 307: */
DTKACTR_labelbuffername( WDQACTR_l, &CEQACTR );
UZPACTR_nlmacro( CEQACTR, &DEQACTR );
IBQACTR = DEQACTR;
} 
else
{ 
 /* line 308: */
 /* line 309: */
 /* line 310: */
 /* line 312: */
 /* line 313: */
DTKACTR_labelbuffername( WDQACTR_l, &EEQACTR );
IBQACTR = EEQACTR;
} 
} 
} 
break;
default: 
(void)(WXIACTR_assert(GEQACTR, A68_FALSE));
 /* line 314: */
 /* line 315: */
IBQACTR = HEQACTR;
break;
} 
} 
A_PROC_EXIT(getcfragment);
*ReturnedValue = (IBQACTR);
return;
} 
#undef NL

A68_VOID  JEQACTR_bracketcfragment(A68_108 * Value, A68_VC  *ReturnedValue)
{ 
A68_VC  KEQACTR;  /* clause result */
A68_VC  LEQACTR;  /* avoid structure result */
A68_VC  MEQACTR;  /* avoid structure result */
A68_VC  NEQACTR;  /* avoid structure result */
A_PROC_ENTRY(bracketcfragment);
 /* line 318: */
 /* line 319: */
{ 
 /* line 320: */
 /* line 321: */
if (NXPACTR_isatomic(Value))
{ 
DAQACTR_getcfragment( Value, &LEQACTR );
KEQACTR = LEQACTR;
} 
else
{ 
 /* line 322: */
 /* line 323: */
DAQACTR_getcfragment( Value, &MEQACTR );
JIAACTR_bracket( MEQACTR, &NEQACTR );
KEQACTR = NEQACTR;
} 
} 
A_PROC_EXIT(bracketcfragment);
*ReturnedValue = (KEQACTR);
return;
} 
#undef NL

A68_108 * QEQACTR_indexvaluelist(A68_115 * List, A68_INT  Index)
{ 
A68_115 * REQACTR_position A_UNUSED = {0};
A68_INT  SEQACTR;  /* to part of loop */
A68_INT  TEQACTR;  /* loop control */
A68_108 * UEQACTR;  /* clause result */
A_PROC_ENTRY(indexvaluelist);
 /* line 331: */
 /* line 332: */
{ 
REQACTR_position = List;
 /* line 333: */
SEQACTR = (Index-1);
for ( TEQACTR = 1;
TEQACTR <= SEQACTR;
TEQACTR += 1 )
{ 
(void)(REQACTR_position = (*A_NILCHECK((&(A_NILCHECK(REQACTR_position)->Rest)))));
}
 /* line 334: */
 /* line 335: */
UEQACTR = (&(A_NILCHECK(REQACTR_position)->Value));
} 
A_PROC_EXIT(indexvaluelist);
return( UEQACTR );
} 
#undef NL

A68_115 * WEQACTR_reversevaluelist(A68_115 * List)
{ 
A68_115 * XEQACTR_last A_UNUSED = {0};
A68_115 * YEQACTR_this A_UNUSED = {0};
A68_115 * ZEQACTR_next A_UNUSED = {0};
A68_115 ** AFQACTR;  /* YIELD */
A68_115 * BFQACTR;  /* clause result */
A_PROC_ENTRY(reversevaluelist);
 /* line 341: */
 /* line 342: */
{ 
XEQACTR_last = (A68_115 *)A68_NIL;
YEQACTR_this = List;
 /* line 343: */
for ( ;; )
{ 
 /* line 344: */
 /* line 345: */
if ( !((YEQACTR_this!=MKJACTR_nilvaluelist)) ) break;
(void)(ZEQACTR_next = (*A_NILCHECK((&(A_NILCHECK(YEQACTR_this)->Rest)))));
 /* line 346: */
AFQACTR = (&(A_NILCHECK(YEQACTR_this)->Rest)) ;
(*A_NILCHECK(AFQACTR)) = XEQACTR_last;
 /* line 347: */
XEQACTR_last = YEQACTR_this;
 /* line 348: */
 /* line 349: */
YEQACTR_this = ZEQACTR_next;
}
 /* line 350: */
 /* line 351: */
BFQACTR = XEQACTR_last;
} 
A_PROC_EXIT(reversevaluelist);
return( BFQACTR );
} 
#undef NL

A68_INT  DFQACTR_operandsof(A68_114  Treeoper)
{ 
A68_INT  EFQACTR;  /* clause result */
A68_BITS  FFQACTR;  /* SHR */
A_PROC_ENTRY(operandsof);
 /* line 359: */
FFQACTR = (A68_BITS )Treeoper.Param ;
EFQACTR = (A68_INT )A_SHR(FFQACTR,WGAACTR_operandsshift);
A_PROC_EXIT(operandsof);
return( EFQACTR );
} 
#undef NL

A68_INT  HFQACTR_paramof(A68_114  Treeoper)
{ 
A68_INT  IFQACTR;  /* clause result */
A_PROC_ENTRY(paramof);
 /* line 366: */
IFQACTR = (A68_INT )(A68_BITS )((A68_BITS )Treeoper.Param&ZGAACTR_parammask);
A_PROC_EXIT(paramof);
return( IFQACTR );
} 
#undef NL

A68_108 * LFQACTR_operand(A68_108 * Oper, A68_INT  Rand)
{ 
A68_109  MFQACTR;  /* united object - for case conformity */
A68_114  NFQACTR_rator A_UNUSED = {0};
A68_INT  OFQACTR_totalrands A_UNUSED = {0};
A68_108 * PFQACTR;  /* clause result */
A68_108 * SFQACTR = {0};  /* OPERATORS - skip to mode */
A_PROC_ENTRY(operand);
 /* line 370: */
 /* line 371: */
MFQACTR = (*A_NILCHECK((&(A_NILCHECK(Oper)->Extra)))) ;
switch ( MFQACTR.mode )
{ 
case 9: /* STRUCT(INT,INT,REF MODE115)  */
NFQACTR_rator = (MFQACTR.data.mode9);
 /* line 372: */
 /* line 373: */
{ 
OFQACTR_totalrands = DFQACTR_operandsof(NFQACTR_rator);
 /* line 374: */
 /* line 375: */
 /* line 376: */
PFQACTR = QEQACTR_indexvaluelist(NFQACTR_rator.Operands, ((OFQACTR_totalrands+1)-Rand));
} 
break;
default: 
(void)(WXIACTR_assert(RFQACTR, A68_FALSE));
 /* line 377: */
PFQACTR = SFQACTR;
break;
} 
A_PROC_EXIT(operand);
return( PFQACTR );
} 
#undef NL

A68_VOID  UFQACTR_derefvalue(A68_108 * Value)
{ 
A68_INT * XFQACTR;  /* YIELD */
A_PROC_ENTRY(derefvalue);
 /* line 380: */
 /* line 382: */
{ 
(void)(WXIACTR_assert(WFQACTR, ((*A_NILCHECK((&(A_NILCHECK(Value)->Mode))))>VFAACTR_refmark)));
 /* line 383: */
 /* line 384: */
XFQACTR = (&(A_NILCHECK(Value)->Mode)) ;
(*A_NILCHECK(XFQACTR))-=VFAACTR_refmark;
} 
A_PROC_EXIT(derefvalue);
return;
} 
#undef NL

A68_VOID  ZFQACTR_enrefvalue(A68_108 * Value)
{ 
A68_INT * AGQACTR;  /* YIELD */
A_PROC_ENTRY(enrefvalue);
 /* line 387: */
 /* line 388: */
 /* line 389: */
AGQACTR = (&(A_NILCHECK(Value)->Mode)) ;
(*A_NILCHECK(AGQACTR))+=VFAACTR_refmark;
A_PROC_EXIT(enrefvalue);
return;
} 
#undef NL

A_STATIC A68_VOID  CGQACTR_fnname(A68_INT  Fn, A68_VC  *ReturnedValue)
{ 
A68_VC  FGQACTR_spare A_UNUSED = {0};
A68_INT  GGQACTR;  /* clause result */
A68_VC  IGQACTR;  /* clause result */
A68_VC  PJQACTR;  /* avoid structure result */
A_PROC_ENTRY(fnname);
 /* line 392: */
 /* line 393: */
{ 
FGQACTR_spare = EGQACTR;
 /* line 394: */
 /* line 395: */
 /* line 396: */
GGQACTR = Fn;
switch ( GGQACTR )
{ 
case 1: 
 /* line 397: */
IGQACTR = JGQACTR;
break;
case 2: 
 /* line 398: */
IGQACTR = LGQACTR;
break;
case 3: 
 /* line 399: */
IGQACTR = NGQACTR;
break;
case 4: 
 /* line 400: */
IGQACTR = PGQACTR;
break;
case 5: 
 /* line 401: */
IGQACTR = RGQACTR;
break;
case 6: 
 /* line 402: */
IGQACTR = TGQACTR;
break;
case 7: 
 /* line 403: */
IGQACTR = VGQACTR;
break;
case 8: 
 /* line 404: */
IGQACTR = XGQACTR;
break;
case 9: 
 /* line 405: */
IGQACTR = ZGQACTR;
break;
case 10: 
 /* line 406: */
IGQACTR = BHQACTR;
break;
case 11: 
 /* line 407: */
IGQACTR = DHQACTR;
break;
case 12: 
 /* line 408: */
IGQACTR = FHQACTR;
break;
case 13: 
 /* line 409: */
IGQACTR = HHQACTR;
break;
case 14: 
 /* line 410: */
IGQACTR = JHQACTR;
break;
case 15: 
 /* line 411: */
IGQACTR = LHQACTR;
break;
case 16: 
 /* line 412: */
IGQACTR = NHQACTR;
break;
case 17: 
 /* line 413: */
IGQACTR = PHQACTR;
break;
case 18: 
 /* line 414: */
IGQACTR = RHQACTR;
break;
case 19: 
 /* line 415: */
IGQACTR = THQACTR;
break;
case 20: 
 /* line 416: */
IGQACTR = VHQACTR;
break;
case 21: 
 /* line 417: */
IGQACTR = XHQACTR;
break;
case 22: 
 /* line 418: */
IGQACTR = ZHQACTR;
break;
case 23: 
 /* line 419: */
IGQACTR = BIQACTR;
break;
case 24: 
 /* line 420: */
IGQACTR = DIQACTR;
break;
case 25: 
 /* line 421: */
IGQACTR = FIQACTR;
break;
case 26: 
 /* line 422: */
IGQACTR = HIQACTR;
break;
case 27: 
 /* line 423: */
IGQACTR = JIQACTR;
break;
case 28: 
 /* line 424: */
IGQACTR = LIQACTR;
break;
case 29: 
 /* line 425: */
IGQACTR = NIQACTR;
break;
case 30: 
 /* line 426: */
IGQACTR = PIQACTR;
break;
case 31: 
 /* line 427: */
IGQACTR = RIQACTR;
break;
case 32: 
 /* line 428: */
IGQACTR = TIQACTR;
break;
case 33: 
 /* line 429: */
IGQACTR = VIQACTR;
break;
case 34: 
 /* line 430: */
IGQACTR = XIQACTR;
break;
case 35: 
 /* line 431: */
IGQACTR = ZIQACTR;
break;
case 36: 
 /* line 432: */
IGQACTR = BJQACTR;
break;
case 37: 
 /* line 433: */
IGQACTR = DJQACTR;
break;
case 38: 
 /* line 434: */
IGQACTR = FJQACTR;
break;
case 39: 
 /* line 435: */
IGQACTR = HJQACTR;
break;
case 40: 
 /* line 436: */
IGQACTR = JJQACTR;
break;
case 41: 
 /* line 437: */
IGQACTR = FGQACTR_spare;
break;
case 42: 
 /* line 438: */
IGQACTR = FGQACTR_spare;
break;
case 43: 
 /* line 439: */
IGQACTR = FGQACTR_spare;
break;
case 44: 
 /* line 440: */
IGQACTR = FGQACTR_spare;
break;
case 45: 
 /* line 441: */
IGQACTR = FGQACTR_spare;
break;
case 46: 
 /* line 442: */
IGQACTR = FGQACTR_spare;
break;
case 47: 
 /* line 443: */
IGQACTR = FGQACTR_spare;
break;
case 48: 
 /* line 444: */
IGQACTR = FGQACTR_spare;
break;
case 49: 
 /* line 446: */
IGQACTR = FGQACTR_spare;
break;
case 50: 
 /* line 448: */
IGQACTR = LJQACTR;
break;
case 51: 
IGQACTR = NJQACTR;
break;
default: 
 /* line 449: */
ROAAOSF_whole( Fn, 0, &PJQACTR );
IGQACTR = A_VC_PLUS(PJQACTR,QJQACTR);
break;
} 
} 
A_PROC_EXIT(fnname);
*ReturnedValue = (IGQACTR);
return;
} 
#undef NL

A68_VOID  TJQACTR_valuestring(A68_108 * Value, A68_BOOL  Brief, A68_VC  *ReturnedValue)
{ 
A68_VC  VJQACTR;  /* clause result */
union {  /* BIOP 99 */
A68_108   source;
A68_LINT   destination;
} XJQACTR; 
A68_LINT  YJQACTR = {0};  /* OPERATORS - skip to mode */
A68_109  FKQACTR;  /* united object - for case conformity */
A68_VC  HKQACTR;  /* clause result */
A68_LBITS  JKQACTR_bb A_UNUSED = {0};
A68_VC  MKQACTR;  /* avoid structure result */
A68_57  NKQACTR_l A_UNUSED = {0};
A68_VC  QKQACTR;  /* avoid structure result */
A68_111  RKQACTR_id A_UNUSED = {0};
A68_VC  UKQACTR;  /* avoid structure result */
A68_112  VKQACTR_tmp A_UNUSED = {0};
A68_VC  YKQACTR;  /* OPERATORS - istruct -> vector */
A68_56  ZKQACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ALQACTR_c A_UNUSED = {0};
A68_113  DLQACTR_s A_UNUSED = {0};
A68_110  MLQACTR_r A_UNUSED = {0};
A68_VC  PLQACTR;  /* avoid structure result */
A68_VC  QLQACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  RLQACTR;  /* avoid structure result */
A68_VC  SLQACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_114  TLQACTR_o A_UNUSED = {0};
A68_VC  XLQACTR;  /* avoid structure result */
A68_VC  EMQACTR;  /* avoid structure result */
A68_BITS  GMQACTR;  /* SHR */
A68_VC  HMQACTR;  /* avoid structure result */
A68_VC  JMQACTR;  /* avoid structure result */
A68_VC  PMQACTR;  /* avoid structure result */
A_PROC_ENTRY(valuestring);
 /* line 454: */
 /* line 455: */
 /* line 456: */
if (Value==(A68_108 *)A68_NIL)
{ 
VJQACTR = WJQACTR;
} 
else
{ 
 /* line 458: */
 /* line 459: */
XJQACTR.source = (*A_NILCHECK(Value)) ;
if ((XJQACTR.destination)==YJQACTR)
{ 
VJQACTR = AKQACTR;
} 
else
{ 
 /* line 460: */
 /* line 461: */
if (NWPACTR_(Value, JVPACTR_assignment(A_LOC(A68_108 ), DLJACTR_skipvalue)))
{ 
VJQACTR = CKQACTR;
} 
else
{ 
 /* line 462: */
 /* line 463: */
 /* line 464: */
FKQACTR = (*A_NILCHECK((&(A_NILCHECK(Value)->Extra)))) ;
switch ( FKQACTR.mode )
{ 
case 3: /* VOID */
 /* line 465: */
HKQACTR = IKQACTR;
break;
case 1: /* LONG BITS */
JKQACTR_bb = (FKQACTR.data.mode1);
 /* line 466: */
BQAAOSF_hex( JKQACTR_bb, 24, &MKQACTR );
HKQACTR = A_VC_PLUS(LKQACTR,MKQACTR);
break;
case 7: /* STRUCT(INT)  */
NKQACTR_l = (FKQACTR.data.mode7);
 /* line 467: */
UTKACTR_idfullname( (NKQACTR_l.Labno+OAAACTR_minlab), &QKQACTR );
HKQACTR = A_VC_PLUS(PKQACTR,QKQACTR);
break;
case 4: /* STRUCT(INT)  */
RKQACTR_id = (FKQACTR.data.mode4);
 /* line 468: */
UTKACTR_idfullname( RKQACTR_id.Idno, &UKQACTR );
HKQACTR = A_VC_PLUS(TKQACTR,UKQACTR);
break;
case 5: /* STRUCT(MODE56,INT)  */
VKQACTR_tmp = (FKQACTR.data.mode5);
 /* line 469: */
ZKQACTR = VKQACTR_tmp.Name ;
HKQACTR = A_VC_PLUS(XKQACTR,A_HISVEC(YKQACTR,ZKQACTR,7,A68_CHAR ));
break;
case 6: /* VECTOR [] CHAR */
ALQACTR_c = (FKQACTR.data.mode6);
 /* line 470: */
HKQACTR = A_VC_PLUS(CLQACTR,ALQACTR_c);
break;
case 8: /* STRUCT(INT)  */
DLQACTR_s = (FKQACTR.data.mode8);
 /* line 471: */
 /* line 472: */
switch ( DLQACTR_s.Nse )
{ 
case 1: 
HKQACTR = FLQACTR;
break;
case 2: 
 /* line 473: */
HKQACTR = HLQACTR;
break;
case 3: 
 /* line 474: */
HKQACTR = JLQACTR;
break;
default: 
 /* line 475: */
HKQACTR = LLQACTR;
break;
} 
break;
case 2: /* STRUCT(INT)  */
MLQACTR_r = (FKQACTR.data.mode2);
 /* line 476: */
 /* line 477: */
 /* line 478: */
UTKACTR_idfullname( MLQACTR_r.Rdenno, &PLQACTR );
ROAAOSF_whole( MLQACTR_r.Rdenno, 0, &RLQACTR );
HKQACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(OLQACTR,PLQACTR),A_HVEC(QLQACTR,'(',A68_CHAR )),RLQACTR),A_HVEC(SLQACTR,')',A68_CHAR ));
break;
case 9: /* STRUCT(INT,INT,REF MODE115)  */
TLQACTR_o = (FKQACTR.data.mode9);
 /* line 479: */
 /* line 480: */
if (Brief)
{ 
 /* line 481: */
CGQACTR_fnname( TLQACTR_o.Fn, &XLQACTR );
HKQACTR = A_VC_PLUS(A_VC_PLUS(WLQACTR,XLQACTR),YLQACTR);
} 
else
{ 
 /* line 482: */
 /* line 483: */
 /* line 484: */
 /* line 485: */
 /* line 487: */
 /* line 488: */
 /* line 489: */
CGQACTR_fnname( TLQACTR_o.Fn, &EMQACTR );
GMQACTR = (A68_BITS )TLQACTR_o.Param ;
ROAAOSF_whole( (A68_INT )A_SHR(GMQACTR,WGAACTR_operandsshift), 0, &HMQACTR );
ROAAOSF_whole( (A68_INT )(A68_BITS )((A68_BITS )TLQACTR_o.Param&ZGAACTR_parammask), 0, &JMQACTR );
HKQACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(DMQACTR,EMQACTR),FMQACTR),HMQACTR),IMQACTR),JMQACTR),KMQACTR);
} 
break;
default: 
 /* line 490: */
HKQACTR = MMQACTR;
break;
} 
 /* line 491: */
WCNACTR_modename( (*A_NILCHECK((&(A_NILCHECK(Value)->Mode)))), &PMQACTR );
VJQACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(OMQACTR,PMQACTR),QMQACTR),HKQACTR),RMQACTR);
} 
} 
} 
A_PROC_EXIT(valuestring);
*ReturnedValue = (VJQACTR);
return;
} 
#undef NL

A68_VOID  TMQACTR_uvaluetocfragment(A68_198  U, A68_VC  *ReturnedValue)
{ 
A68_198  UMQACTR;  /* united object - for case conformity */
A68_108 * VMQACTR_rv A_UNUSED = {0};
A68_VC  WMQACTR;  /* clause result */
A68_VC  XMQACTR;  /* avoid structure result */
A68_VC  YMQACTR_c A_UNUSED = {0};
A68_112  ZMQACTR_t A_UNUSED = {0};
A68_VC  ANQACTR;  /* OPERATORS - istruct -> vector */
A68_56  BNQACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ENQACTR = {0};  /* OPERATORS - skip to mode */
A_PROC_ENTRY(uvaluetocfragment);
 /* line 502: */
 /* line 503: */
UMQACTR = U ;
switch ( UMQACTR.mode )
{ 
case 1: /* REF STRUCT(INT,BITS,MODE109)  */
VMQACTR_rv = (UMQACTR.data.mode1);
 /* line 504: */
DAQACTR_getcfragment( VMQACTR_rv, &XMQACTR );
WMQACTR = XMQACTR;
break;
case 2: /* VECTOR [] CHAR */
YMQACTR_c = (UMQACTR.data.mode2);
 /* line 505: */
WMQACTR = YMQACTR_c;
break;
case 3: /* STRUCT(MODE56,INT)  */
ZMQACTR_t = (UMQACTR.data.mode3);
 /* line 506: */
 /* line 507: */
BNQACTR = ZMQACTR_t.Name ;
WMQACTR = A_HISVEC(ANQACTR,BNQACTR,7,A68_CHAR );
break;
default: 
(void)(WXIACTR_assert(DNQACTR, A68_FALSE));
 /* line 508: */
WMQACTR = ENQACTR;
break;
} 
A_PROC_EXIT(uvaluetocfragment);
*ReturnedValue = (WMQACTR);
return;
} 
#undef NL

A68_VOID  GNQACTR_joinuvalue(A68_201  Items, A68_VC  *ReturnedValue)
{ 
A68_54  KNQACTR_generator;   /* proc value of non-global proc */
A68_154  QNQACTR;  /* avoid structure result */
A68_154  PNQACTR_result A_UNUSED = {0};
A68_198  RNQACTR_i A_UNUSED = {0};
A68_198 * SNQACTR;  /* forall control - []x */
A68_INT  TNQACTR;  /* forall loop counter */
A68_VC  UNQACTR;  /* avoid structure result */
A68_VC  VNQACTR;  /* clause result */
A_PROC_ENTRY(joinuvalue);
 /* line 511: */
 /* line 512: */
{ 
(void)(WXIACTR_assert(INQACTR, (Items.upb>=1)));
 /* line 513: */
A_CLOSURE( KNQACTR_generator, LNQACTR_generator, MNQACTR_generator );
A_CALLPROC(KNQACTR_generator,(A68_TRUE, &QNQACTR),(A68_TRUE, &QNQACTR,(KNQACTR_generator).nonlocals));
PNQACTR_result = QNQACTR;
 /* line 514: */
 /* line 515: */
TNQACTR = Items.upb -1;
SNQACTR = Items.data;
for (;TNQACTR-- >= 0;
(SNQACTR++
) )
{
RNQACTR_i = *SNQACTR;
 /* line 516: */
TMQACTR_uvaluetocfragment( RNQACTR_i, &UNQACTR );
(void)(A_VC_PLUSAB(PNQACTR_result,UNQACTR));
}
 /* line 517: */
 /* line 518: */
VNQACTR = PNQACTR_result;
} 
A_PROC_EXIT(joinuvalue);
*ReturnedValue = (VNQACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  XNQACTR_commaseparate(A68_201  Items, A68_VC  *ReturnedValue)
{ 
A68_54  BOQACTR_generator;   /* proc value of non-global proc */
A68_154  HOQACTR;  /* avoid structure result */
A68_154  GOQACTR_result A_UNUSED = {0};
A68_INT  IOQACTR;  /* YIELD */
A68_VC  JOQACTR;  /* avoid structure result */
A68_VC  KOQACTR;  /* OPERATORS - copy to flex */
A68_198  LOQACTR_i A_UNUSED = {0};
A68_201  MOQACTR;  /* OPERATORS - trim index */
A68_201  NOQACTR;  /* forall yield */
A68_198 * OOQACTR;  /* forall control - []x */
A68_INT  POQACTR;  /* forall loop counter */
A68_VC  QOQACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ROQACTR;  /* avoid structure result */
A68_VC  SOQACTR;  /* clause result */
A_PROC_ENTRY(commaseparate);
 /* line 521: */
 /* line 522: */
{ 
(void)(WXIACTR_assert(ZNQACTR, (Items.upb>=1)));
 /* line 529: */
A_CLOSURE( BOQACTR_generator, COQACTR_generator, DOQACTR_generator );
A_CALLPROC(BOQACTR_generator,(A68_TRUE, &HOQACTR),(A68_TRUE, &HOQACTR,(BOQACTR_generator).nonlocals));
GOQACTR_result = HOQACTR;
 /* line 530: */
IOQACTR = 1 ;
TMQACTR_uvaluetocfragment( A_VINDEX(Items,IOQACTR), &JOQACTR );
(void)(GOQACTR_result = A_VCOPY(JOQACTR,KOQACTR,A68_CHAR ));
 /* line 531: */
 /* line 532: */
if (Items.upb>1)
{ 
 /* line 533: */
NOQACTR = A_VTRIM(MOQACTR,(Items),A_VTSCRIPT(&(MOQACTR.upb),(Items).upb,2,(Items).upb)) ;
POQACTR = NOQACTR.upb -1;
OOQACTR = NOQACTR.data;
for (;POQACTR-- >= 0;
(OOQACTR++
) )
{
LOQACTR_i = *OOQACTR;
 /* line 534: */
TMQACTR_uvaluetocfragment( LOQACTR_i, &ROQACTR );
(void)(A_VC_PLUSAB(GOQACTR_result,A_VC_PLUS(A_HVEC(QOQACTR,',',A68_CHAR ),ROQACTR)));
}
 /* line 535: */
} 
 /* line 536: */
 /* line 537: */
SOQACTR = GOQACTR_result;
} 
A_PROC_EXIT(commaseparate);
*ReturnedValue = (SOQACTR);
return;
} 
#undef NL

A68_VOID  UOQACTR_commalist(A68_201  Items, A68_VC  *ReturnedValue)
{ 
A68_VC  VOQACTR;  /* clause result */
A68_VC  WOQACTR;  /* avoid structure result */
A68_VC  XOQACTR;  /* avoid structure result */
A_PROC_ENTRY(commalist);
 /* line 540: */
XNQACTR_commaseparate( Items, &WOQACTR );
JIAACTR_bracket( WOQACTR, &XOQACTR );
VOQACTR = XOQACTR;
A_PROC_EXIT(commalist);
*ReturnedValue = (VOQACTR);
return;
} 
#undef NL

A68_VOID  APQACTR_usemacro(A68_VC  Macro, A68_201  Arguments, A68_VC  *ReturnedValue)
{ 
A68_VC  BPQACTR;  /* clause result */
A68_VC  CPQACTR;  /* avoid structure result */
A68_VC  DPQACTR;  /* avoid structure result */
A_PROC_ENTRY(usemacro);
 /* line 543: */
XNQACTR_commaseparate( Arguments, &CPQACTR );
JIAACTR_bracket( CPQACTR, &DPQACTR );
BPQACTR = A_VC_PLUS(Macro,DPQACTR);
A_PROC_EXIT(usemacro);
*ReturnedValue = (BPQACTR);
return;
} 
#undef NL

A68_VOID  FPQACTR_emitline(A68_201  Uv)
{ 
A68_207  GPQACTR;  /* collateral clause result */
A68_VC  HPQACTR;  /* avoid structure result */
A68_93  IPQACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  JPQACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  KPQACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(emitline);
 /* line 548: */
GNQACTR_joinuvalue( Uv, &HPQACTR );
GPQACTR.data[0] = A_UNITE(IPQACTR,mode2,2,HPQACTR);
GPQACTR.data[1] = A_UNITE(JPQACTR,mode4,4,EIAACTR_cnewline);
 /* line 550: */
(void)(MDMACTR_writecstream(A_HISVEC(KPQACTR,GPQACTR,2,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel())));
A_PROC_EXIT(emitline);
return;
} 
#undef NL
 /* line 554: */
 /* line 556: */

A68_VOID  OPQACTR_yieldtemporary(A68_VC  Comment, A68_INT  Mode, A68_201  Op, A68_112  *ReturnedValue)
{ 
A68_112  PPQACTR;  /* avoid structure result */
A68_112  QPQACTR_t A_UNUSED = {0};
A68_209  RPQACTR;  /* collateral clause result */
A68_198  SPQACTR = {0};  /* OPERATORS - mode -> union mode */
A68_198  VPQACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  WPQACTR;  /* YIELD */
A68_VC  XPQACTR;  /* avoid structure result */
A68_198  YPQACTR = {0};  /* OPERATORS - mode -> union mode */
A68_198  BQQACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  CQQACTR;  /* YIELD */
A68_201  DQQACTR;  /* OPERATORS - istruct -> vector */
A68_112  EQQACTR;  /* clause result */
A_PROC_ENTRY(yieldtemporary);
 /* line 557: */
 /* line 558: */
{ 
A_CALLPROC(TMOACTR_new,(Mode, Comment, &PPQACTR),(Mode, Comment, &PPQACTR,(TMOACTR_new).nonlocals));
QPQACTR_t = PPQACTR;
 /* line 559: */
RPQACTR.data[0] = A_UNITE(SPQACTR,mode3,3,QPQACTR_t);
WPQACTR = UPQACTR ;
RPQACTR.data[1] = A_UNITE(VPQACTR,mode2,2,WPQACTR);
GNQACTR_joinuvalue( Op, &XPQACTR );
RPQACTR.data[2] = A_UNITE(YPQACTR,mode2,2,XPQACTR);
CQQACTR = AQQACTR ;
RPQACTR.data[3] = A_UNITE(BQQACTR,mode2,2,CQQACTR);
(void)(FPQACTR_emitline(A_HISVEC(DQQACTR,RPQACTR,4,A68_198 )));
 /* line 560: */
 /* line 561: */
EQQACTR = QPQACTR_t;
} 
A_PROC_EXIT(yieldtemporary);
*ReturnedValue = (EQQACTR);
return;
} 
#undef NL

A68_108 * GQQACTR_yield(A68_108 * Op)
{ 
A68_198  IQQACTR = {0};  /* OPERATORS - mode -> union mode */
A68_201  JQQACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_112  LQQACTR;  /* avoid structure result */
A68_109  MQQACTR = {0};  /* OPERATORS - mode -> union mode */
A68_BITS * NQQACTR;  /* YIELD */
A68_108 * OQQACTR;  /* clause result */
A_PROC_ENTRY(yield);
 /* line 564: */
{ 
 /* line 565: */
if (!JYPACTR_isaname(Op))
{ 
OPQACTR_yieldtemporary( KQQACTR, (*A_NILCHECK((&(A_NILCHECK(Op)->Mode)))), A_HVEC(JQQACTR,A_UNITE(IQQACTR,mode1,1,Op),A68_198 ), &LQQACTR );
(void)(OVPACTR_assignment((&(A_NILCHECK(Op)->Extra)), A_UNITE(MQQACTR,mode5,5,LQQACTR)));
 /* line 566: */
 /* line 567: */
NQQACTR = (&(A_NILCHECK(Op)->Info)) ;
(void)((*A_NILCHECK(NQQACTR)) = (A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(Op)->Info))))&XKJACTR_fxwarn)|RKJACTR_atomic));
} 
 /* line 568: */
 /* line 569: */
OQQACTR = Op;
} 
A_PROC_EXIT(yield);
return( OQQACTR );
} 
#undef NL

A68_108 * RQQACTR_yield(A68_VC  Comment, A68_108 * Op)
{ 
A68_198  SQQACTR = {0};  /* OPERATORS - mode -> union mode */
A68_201  TQQACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_112  UQQACTR;  /* avoid structure result */
A68_109  VQQACTR = {0};  /* OPERATORS - mode -> union mode */
A68_BITS * WQQACTR;  /* YIELD */
A68_108 * XQQACTR;  /* clause result */
A_PROC_ENTRY(yield);
 /* line 572: */
{ 
 /* line 573: */
if (!JYPACTR_isaname(Op))
{ 
OPQACTR_yieldtemporary( Comment, (*A_NILCHECK((&(A_NILCHECK(Op)->Mode)))), A_HVEC(TQQACTR,A_UNITE(SQQACTR,mode1,1,Op),A68_198 ), &UQQACTR );
(void)(OVPACTR_assignment((&(A_NILCHECK(Op)->Extra)), A_UNITE(VQQACTR,mode5,5,UQQACTR)));
 /* line 574: */
 /* line 575: */
WQQACTR = (&(A_NILCHECK(Op)->Info)) ;
(void)((*A_NILCHECK(WQQACTR)) = (A68_BITS )((A68_BITS )((*A_NILCHECK((&(A_NILCHECK(Op)->Info))))&XKJACTR_fxwarn)|RKJACTR_atomic));
} 
 /* line 576: */
 /* line 577: */
XQQACTR = Op;
} 
A_PROC_EXIT(yield);
return( XQQACTR );
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
void OUPACTR(void)   /* initialise DECS values */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel","-dir",".","values.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/vak/Project/Algol/Algol-68RS-Source/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/vak/Project/Algol/Algol-68RS-Source/a68config/a68config.m","./modes.m","./incvalue.m","./incid.m","./incoperfn.m","./incmode.m","./idtable.m","./coutput.m","./environment.m","./environ.m","./centities.m","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config A_UNUSED;
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
A_config.translation_time = "Thu Nov  5 21:56:13 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "NUPACTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 21:56:13 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS values);
(void)(UEAALIB_a68config(LGAALIB_configinfo, SUPACTR));
 /* line 49: */
 /* line 78: */
 /* line 80: */
 /* line 90: */
 /* line 100: */
 /* line 104: */
 /* line 106: */
 /* line 109: */
 /* line 112: */
 /* line 115: */
 /* line 127: */
 /* line 130: */
 /* line 133: */
 /* line 136: */
 /* line 139: */
 /* line 146: */
 /* line 156: */
 /* line 167: */
 /* line 177: */
 /* line 195: */
 /* line 197: */
 /* line 317: */
 /* line 327: */
 /* line 337: */
 /* line 355: */
 /* line 362: */
 /* line 368: */
 /* line 369: */
 /* line 379: */
 /* line 386: */
 /* line 391: */
 /* line 451: */
 /* line 453: */
 /* line 499: */
 /* line 501: */
 /* line 510: */
 /* line 520: */
 /* line 539: */
 /* line 542: */
 /* line 545: */
 /* line 552: */
 /* line 553: */
 /* line 563: */
 /* line 571: */
 /* line 579: */
 /* line 581: */
 /* line 617: */
/*SKIP*/;
A_PROC_EXIT(DECS values);
} 
#undef NL
/* end of translation of values.a68 */
