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
static A68_162   GZPACTR = {"IDENTIFIERS - id ref level: ref levels are incompatable"}; 
A_GISVEC(A68_VC ,IZPACTR,GZPACTR,55)
static A68_163   NZPACTR = {"NL("}; 
A_GISVEC(A68_VC ,OZPACTR,NZPACTR,3)
static A68_167   ZZPACTR = {"procedure value"}; 
A_GISVEC(A68_VC ,AAQACTR,ZZPACTR,15)
static A68_168   HAQACTR = {".fn.fn_global = "}; 
A_GISVEC(A68_VC ,IAQACTR,HAQACTR,16)
static A68_169   QAQACTR = {".nonlocals = A68_NIL;"}; 
A_GISVEC(A68_VC ,RAQACTR,QAQACTR,21)
static A68_171   FBQACTR = {"VALUES - GETCFRAGMENT: attempt to take address of temporary"}; 
A_GISVEC(A68_VC ,GBQACTR,FBQACTR,59)
static A68_56   PBQACTR = {"A68_NIL"}; 
A_GISVEC(A68_VC ,QBQACTR,PBQACTR,7)
static A68_172   RBQACTR = {"/*SKIP*/"}; 
A_GISVEC(A68_VC ,SBQACTR,RBQACTR,8)
static A68_173   TBQACTR = {"/*EMPTY*/"}; 
A_GISVEC(A68_VC ,UBQACTR,TBQACTR,9)
static A68_174   VBQACTR = {"/* UNDEFINED NSE */"}; 
A_GISVEC(A68_VC ,WBQACTR,VBQACTR,19)
static A68_175   HCQACTR = {""}; 
A_GISVEC(A68_VC ,ICQACTR,HCQACTR,0)
static A68_176   NCQACTR = {"VALUES: GETCRAGMENT: invalid id no"}; 
A_GISVEC(A68_VC ,QCQACTR,NCQACTR,34)
static A68_177   UCQACTR = {"VALUES: GETCFRAGMENT: non-local used gproc"}; 
A_GISVEC(A68_VC ,VCQACTR,UCQACTR,42)
static A68_175   IDQACTR = {""}; 
A_GISVEC(A68_VC ,JDQACTR,IDQACTR,0)
static A68_171   PDQACTR = {"VALUES - GETCFRAGMENT: attempt to evaluate undeclared label"}; 
A_GISVEC(A68_VC ,QDQACTR,PDQACTR,59)
static A68_178   XDQACTR = {"VALUES - GETCFRAGMENT, value has no such component"}; 
A_GISVEC(A68_VC ,YDQACTR,XDQACTR,50)
static A68_183   IFQACTR = {"OPERAND - VALUE parameter is not a TREEOPER."}; 
A_GISVEC(A68_VC ,JFQACTR,IFQACTR,44)
static A68_185   NFQACTR = {"VALUES - deref value: cannot deref value"}; 
A_GISVEC(A68_VC ,OFQACTR,NFQACTR,40)
static A68_172   VFQACTR = {"SPARE op"}; 
A_GISVEC(A68_VC ,WFQACTR,VFQACTR,8)
static A68_172   ZFQACTR = {"statgrab"}; 
A_GISVEC(A68_VC ,BGQACTR,ZFQACTR,8)
static A68_186   CGQACTR = {"tree generator"}; 
A_GISVEC(A68_VC ,DGQACTR,CGQACTR,14)
static A68_187   EGQACTR = {"select"}; 
A_GISVEC(A68_VC ,FGQACTR,EGQACTR,6)
static A68_40   GGQACTR = {"copy"}; 
A_GISVEC(A68_VC ,HGQACTR,GGQACTR,4)
static A68_40   IGQACTR = {"trim"}; 
A_GISVEC(A68_VC ,JGQACTR,IGQACTR,4)
static A68_188   KGQACTR = {"simpleindex"}; 
A_GISVEC(A68_VC ,LGQACTR,KGQACTR,11)
static A68_173   MGQACTR = {"trimindex"}; 
A_GISVEC(A68_VC ,NGQACTR,MGQACTR,9)
static A68_56   OGQACTR = {"dyngrab"}; 
A_GISVEC(A68_VC ,PGQACTR,OGQACTR,7)
static A68_173   QGQACTR = {"boundpack"}; 
A_GISVEC(A68_VC ,RGQACTR,QGQACTR,9)
static A68_173   SGQACTR = {"dyadic op"}; 
A_GISVEC(A68_VC ,TGQACTR,SGQACTR,9)
static A68_189   UGQACTR = {"monadic op"}; 
A_GISVEC(A68_VC ,VGQACTR,UGQACTR,10)
static A68_172   WGQACTR = {"straight"}; 
A_GISVEC(A68_VC ,XGQACTR,WGQACTR,8)
static A68_188   YGQACTR = {"prestraight"}; 
A_GISVEC(A68_VC ,ZGQACTR,YGQACTR,11)
static A68_172   AHQACTR = {"strindex"}; 
A_GISVEC(A68_VC ,BHQACTR,AHQACTR,8)
static A68_187   CHQACTR = {"assign"}; 
A_GISVEC(A68_VC ,DHQACTR,CHQACTR,6)
static A68_186   EHQACTR = {"!! RS def. bnd"}; 
A_GISVEC(A68_VC ,FHQACTR,EHQACTR,14)
static A68_190   GHQACTR = {"deref"}; 
A_GISVEC(A68_VC ,HHQACTR,GHQACTR,5)
static A68_40   IHQACTR = {"call"}; 
A_GISVEC(A68_VC ,JHQACTR,IHQACTR,4)
static A68_40   KHQACTR = {"void"}; 
A_GISVEC(A68_VC ,LHQACTR,KHQACTR,4)
static A68_187   MHQACTR = {"niltom"}; 
A_GISVEC(A68_VC ,NHQACTR,MHQACTR,6)
static A68_172   OHQACTR = {"gotoproc"}; 
A_GISVEC(A68_VC ,PHQACTR,OHQACTR,8)
static A68_190   QHQACTR = {"gotom"}; 
A_GISVEC(A68_VC ,RHQACTR,QHQACTR,5)
static A68_188   SHQACTR = {"realtocompl"}; 
A_GISVEC(A68_VC ,THQACTR,SHQACTR,11)
static A68_173   UHQACTR = {"inttoreal"}; 
A_GISVEC(A68_VC ,VHQACTR,UHQACTR,9)
static A68_191   WHQACTR = {"68R inttobits"}; 
A_GISVEC(A68_VC ,XHQACTR,WHQACTR,13)
static A68_187   YHQACTR = {"arrarr"}; 
A_GISVEC(A68_VC ,ZHQACTR,YHQACTR,6)
static A68_187   AIQACTR = {"vecarr"}; 
A_GISVEC(A68_VC ,BIQACTR,AIQACTR,6)
static A68_190   CIQACTR = {"isvec"}; 
A_GISVEC(A68_VC ,DIQACTR,CIQACTR,5)
static A68_192   EIQACTR = {"is"}; 
A_GISVEC(A68_VC ,FIQACTR,EIQACTR,2)
static A68_190   GIQACTR = {"unite"}; 
A_GISVEC(A68_VC ,HIQACTR,GIQACTR,5)
static A68_187   IIQACTR = {"uniteu"}; 
A_GISVEC(A68_VC ,JIQACTR,IIQACTR,6)
static A68_190   KIQACTR = {"isarr"}; 
A_GISVEC(A68_VC ,LIQACTR,KIQACTR,5)
static A68_56   MIQACTR = {"skiptom"}; 
A_GISVEC(A68_VC ,NIQACTR,MIQACTR,7)
static A68_163   OIQACTR = {"vec"}; 
A_GISVEC(A68_VC ,PIQACTR,OIQACTR,3)
static A68_163   QIQACTR = {"arr"}; 
A_GISVEC(A68_VC ,RIQACTR,QIQACTR,3)
static A68_56   SIQACTR = {"deunite"}; 
A_GISVEC(A68_VC ,TIQACTR,SIQACTR,7)
static A68_191   UIQACTR = {"bitstov[]bool"}; 
A_GISVEC(A68_VC ,VIQACTR,UIQACTR,13)
static A68_163   WIQACTR = {"vac"}; 
A_GISVEC(A68_VC ,XIQACTR,WIQACTR,3)
static A68_172   YIQACTR = {"ytypetom"}; 
A_GISVEC(A68_VC ,ZIQACTR,YIQACTR,8)
static A68_172   AJQACTR = {"mtoxtype"}; 
A_GISVEC(A68_VC ,BJQACTR,AJQACTR,8)
static A68_168   CJQACTR = {"static generator"}; 
A_GISVEC(A68_VC ,DJQACTR,CJQACTR,16)
static A68_187   EJQACTR = {"format"}; 
A_GISVEC(A68_VC ,FJQACTR,EJQACTR,6)
static A68_192   GJQACTR = {" ?"}; 
A_GISVEC(A68_VC ,IJQACTR,GJQACTR,2)
static A68_163   MJQACTR = {"NIL"}; 
A_GISVEC(A68_VC ,OJQACTR,MJQACTR,3)
static A68_189   RJQACTR = {"SKIP value"}; 
A_GISVEC(A68_VC ,SJQACTR,RJQACTR,10)
static A68_189   TJQACTR = {"skip value"}; 
A_GISVEC(A68_VC ,UJQACTR,TJQACTR,10)
static A68_192   VJQACTR = {"( "}; 
static A68_192   WJQACTR = {", "}; 
static A68_190   YJQACTR = {"EMPTY"}; 
A_GISVEC(A68_VC ,AKQACTR,YJQACTR,5)
static A68_189   CKQACTR = {"constant: "}; 
A_GISVEC(A68_VC ,DKQACTR,CKQACTR,10)
static A68_56   GKQACTR = {"label: "}; 
A_GISVEC(A68_VC ,HKQACTR,GKQACTR,7)
static A68_195   KKQACTR = {"identifier: "}; 
A_GISVEC(A68_VC ,LKQACTR,KKQACTR,12)
static A68_188   OKQACTR = {"temporary: "}; 
A_GISVEC(A68_VC ,PKQACTR,OKQACTR,11)
static A68_188   TKQACTR = {"cfragment: "}; 
A_GISVEC(A68_VC ,UKQACTR,TKQACTR,11)
static A68_195   WKQACTR = {"empty or vac"}; 
A_GISVEC(A68_VC ,XKQACTR,WKQACTR,12)
static A68_40   YKQACTR = {"skip"}; 
A_GISVEC(A68_VC ,ZKQACTR,YKQACTR,4)
static A68_163   ALQACTR = {"nil"}; 
A_GISVEC(A68_VC ,BLQACTR,ALQACTR,3)
static A68_118   CLQACTR = {"TRACER - Unknown nse constituent"}; 
A_GISVEC(A68_VC ,DLQACTR,CLQACTR,32)
static A68_186   FLQACTR = {" routineinfo: "}; 
A_GISVEC(A68_VC ,GLQACTR,FLQACTR,14)
static A68_163   MLQACTR = {" ( "}; 
static A68_172   NLQACTR = {", .... )"}; 
A_GISVEC(A68_VC ,OLQACTR,MLQACTR,3)
A_GISVEC(A68_VC ,QLQACTR,NLQACTR,8)
static A68_163   RLQACTR = {" ( "}; 
static A68_189   SLQACTR = {", no ops: "}; 
static A68_173   TLQACTR = {", param: "}; 
static A68_192   ULQACTR = {" )"}; 
A_GISVEC(A68_VC ,VLQACTR,RLQACTR,3)
A_GISVEC(A68_VC ,XLQACTR,SLQACTR,10)
A_GISVEC(A68_VC ,AMQACTR,TLQACTR,9)
A_GISVEC(A68_VC ,CMQACTR,ULQACTR,2)
static A68_196   DMQACTR = {"TRACER - Unknown EXTRA in value"}; 
A_GISVEC(A68_VC ,EMQACTR,DMQACTR,31)
static A68_192   FMQACTR = {" )"}; 
A_GISVEC(A68_VC ,GMQACTR,VJQACTR,2)
A_GISVEC(A68_VC ,IMQACTR,WJQACTR,2)
A_GISVEC(A68_VC ,JMQACTR,FMQACTR,2)
static A68_199   UMQACTR = {"VALUES - uvalue to cfragment: unknown constituent of union"}; 
A_GISVEC(A68_VC ,VMQACTR,UMQACTR,58)
static A68_202   ZMQACTR = {"VALUES - join uvalue: no parameters"}; 
A_GISVEC(A68_VC ,ANQACTR,ZMQACTR,35)
static A68_203   QNQACTR = {"VALUES - comma separate: no parameters"}; 
A_GISVEC(A68_VC ,RNQACTR,QNQACTR,38)
static A68_163   LPQACTR = {" = "}; 
A_GISVEC(A68_VC ,MPQACTR,LPQACTR,3)
static A68_192   RPQACTR = {" ;"}; 
A_GISVEC(A68_VC ,SPQACTR,RPQACTR,2)
static A68_190   ZPQACTR = {"YIELD"}; 
A_GISVEC(A68_VC ,CQQACTR,ZPQACTR,5)
typedef struct   /* env of non-global proc */
{
int dummy;
} ENQACTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} VNQACTR_generator;

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

A68_INT  DZPACTR_idreflevel(A68_INT  Mode, A68_INT  Ctype);

A68_VOID  LZPACTR_nlmacro(A68_VC  Cf, A68_VC  *ReturnedValue);

A68_VOID  UZPACTR_getcfragment(A68_108 * Value, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  YZPACTR_makeprocvalue(A68_VC  Name, A68_INT  Mode, A68_VC  *ReturnedValue);

A68_VOID  BEQACTR_bracketcfragment(A68_108 * Value, A68_VC  *ReturnedValue);

A68_108 * IEQACTR_indexvaluelist(A68_115 * List, A68_INT  Index);

A68_115 * OEQACTR_reversevaluelist(A68_115 * List);

A68_INT  VEQACTR_operandsof(A68_114  Treeoper);

A68_INT  ZEQACTR_paramof(A68_114  Treeoper);

A68_108 * DFQACTR_operand(A68_108 * Oper, A68_INT  Rand);

A68_VOID  MFQACTR_derefvalue(A68_108 * Value);

A68_VOID  RFQACTR_enrefvalue(A68_108 * Value);

A_STATIC A68_VOID  UFQACTR_fnname(A68_INT  Fn, A68_VC  *ReturnedValue);

A68_VOID  LJQACTR_valuestring(A68_108 * Value, A68_BOOL  Brief, A68_VC  *ReturnedValue);

A68_VOID  LMQACTR_uvaluetocfragment(A68_197  U, A68_VC  *ReturnedValue);

A68_VOID  YMQACTR_joinuvalue(A68_200  Items, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  DNQACTR_generator(A68_BOOL  BNQACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PNQACTR_commaseparate(A68_200  Items, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  UNQACTR_generator(A68_BOOL  SNQACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  MOQACTR_commalist(A68_200  Items, A68_VC  *ReturnedValue);

A68_VOID  SOQACTR_usemacro(A68_VC  Macro, A68_200  Arguments, A68_VC  *ReturnedValue);

A68_VOID  XOQACTR_emitline(A68_200  Uv);

A68_VOID  GPQACTR_yieldtemporary(A68_VC  Comment, A68_INT  Mode, A68_200  Op, A68_112  *ReturnedValue);

A68_108 * YPQACTR_yield(A68_108 * Op);

A68_108 * JQQACTR_yield(A68_VC  Comment, A68_108 * Op);

A_STATIC A68_109 * OVPACTR_assignment(A68_109 * MVPACTR_anonymous, A68_109  NVPACTR_anonymous)
{ 
A68_109  PVPACTR;  /* united object - for case conformity */
A68_VC  QVPACTR_anonymous A_UNUSED = {0};
A68_VC  RVPACTR;  /* OPERATORS - copy to flex */
A68_154 * SVPACTR;  /* YIELD */
A68_109 * TVPACTR;  /* clause result */
{ 
(*MVPACTR_anonymous) = NVPACTR_anonymous;
PVPACTR = NVPACTR_anonymous ;
switch ( PVPACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
QVPACTR_anonymous = (PVPACTR.data.mode6);
SVPACTR = &(MVPACTR_anonymous-> data.mode6) ;
(void)((*SVPACTR) = A_VCOPY(QVPACTR_anonymous,RVPACTR,A68_CHAR ));
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
KVPACTR = (&(HVPACTR_anonymous->Mode)) ;
(*KVPACTR) = IVPACTR_anonymous.Mode;
LVPACTR = (&(HVPACTR_anonymous->Info)) ;
(*LVPACTR) = IVPACTR_anonymous.Info;
(void)(OVPACTR_assignment((&(HVPACTR_anonymous->Extra)), IVPACTR_anonymous.Extra));
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
(void)(JVPACTR_assignment((&(EVPACTR_anonymous->Value)), FVPACTR_anonymous.Value));
VVPACTR = (&(EVPACTR_anonymous->Rest)) ;
(*VVPACTR) = FVPACTR_anonymous.Rest;
WVPACTR = EVPACTR_anonymous;
} 
return( WVPACTR );
} 
#undef NL

A_STATIC A68_VOID  YZPACTR_makeprocvalue(A68_VC  Name, A68_INT  Mode, A68_VC  *ReturnedValue)
{ 
A68_112  BAQACTR;  /* avoid structure result */
A68_VC  CAQACTR;  /* OPERATORS - istruct -> vector */
A68_56  DAQACTR;  /* OPERATORS - istruct -> vector */
A68_VC  EAQACTR_tempname A_UNUSED = {0};
A68_170  FAQACTR;  /* collateral clause result */
A68_93  GAQACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  JAQACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  KAQACTR;  /* YIELD */
A68_93  LAQACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  MAQACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  NAQACTR;  /* YIELD */
A68_93  OAQACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  PAQACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  SAQACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  TAQACTR;  /* YIELD */
A68_93  UAQACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  VAQACTR;  /* OPERATORS - istruct -> vector */
A68_VC  WAQACTR;  /* clause result */
A_PROC_ENTRY(makeprocvalue);
 /* line 189: */
 /* line 190: */
{ 
QMOACTR_declarectemporary( Mode, AAQACTR, &BAQACTR );
DAQACTR = BAQACTR.Name ;
EAQACTR_tempname = A_HISVEC(CAQACTR,DAQACTR,7,A68_CHAR );
 /* line 191: */
 /* line 192: */
FAQACTR.data[0] = A_UNITE(GAQACTR,mode2,2,EAQACTR_tempname);
KAQACTR = IAQACTR ;
FAQACTR.data[1] = A_UNITE(JAQACTR,mode2,2,KAQACTR);
FAQACTR.data[2] = A_UNITE(LAQACTR,mode2,2,Name);
NAQACTR = ';' ;
FAQACTR.data[3] = A_UNITE(MAQACTR,mode1,1,NAQACTR);
 /* line 193: */
FAQACTR.data[4] = A_UNITE(OAQACTR,mode4,4,EIAACTR_cnewline);
FAQACTR.data[5] = A_UNITE(PAQACTR,mode2,2,EAQACTR_tempname);
 /* line 194: */
TAQACTR = RAQACTR ;
FAQACTR.data[6] = A_UNITE(SAQACTR,mode2,2,TAQACTR);
FAQACTR.data[7] = A_UNITE(UAQACTR,mode4,4,EIAACTR_cnewline);
 /* line 195: */
(void)(MDMACTR_writecstream(A_HISVEC(VAQACTR,FAQACTR,8,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel())));
 /* line 196: */
 /* line 197: */
WAQACTR = EAQACTR_tempname;
} 
A_PROC_EXIT(makeprocvalue);
*ReturnedValue = (WAQACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  DNQACTR_generator(A68_BOOL  BNQACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ENQACTR_generator *)NonLocals)->x)
{ 
A68_VC  FNQACTR;  /* clause result */
A68_VC  GNQACTR;  /* OPERATORS - dynamic generator */
{ 
GNQACTR.upb = 0 ;
( BNQACTR_anonymous? A_VLOC(A68_CHAR ,GNQACTR): A_VHEAP(A68_CHAR ,GNQACTR) );
FNQACTR = GNQACTR;
} 
*ReturnedValue = (FNQACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  UNQACTR_generator(A68_BOOL  SNQACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((VNQACTR_generator *)NonLocals)->x)
{ 
A68_VC  WNQACTR;  /* clause result */
A68_VC  XNQACTR;  /* OPERATORS - dynamic generator */
{ 
XNQACTR.upb = 0 ;
( SNQACTR_anonymous? A_VLOC(A68_CHAR ,XNQACTR): A_VHEAP(A68_CHAR ,XNQACTR) );
WNQACTR = XNQACTR;
} 
*ReturnedValue = (WNQACTR);
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
 /* line 54: */
 /* line 55: */
{ 
YUPACTR_operandlist = (A68_115 *)A68_NIL;
 /* line 56: */
ZUPACTR_upboperands = Operands.upb;
 /* line 58: */
 /* line 59: */
CVPACTR = Operands.upb -1;
BVPACTR = Operands.data;
for (;CVPACTR-- >= 0;
(BVPACTR++
) )
{
AVPACTR_operand = *BVPACTR;
DVPACTR.Value = (*AVPACTR_operand);
 /* line 60: */
DVPACTR.Rest = YUPACTR_operandlist;
(void)(YUPACTR_operandlist = GVPACTR_assignment(A_HEAP(A68_115 ), DVPACTR));
}
 /* line 62: */
 /* line 63: */
 /* line 64: */
XVPACTR.Mode = Mode;
 /* line 66: */
XVPACTR.Info = PKJACTR_defaultinfo;
 /* line 67: */
YVPACTR.Fn = Fn;
 /* line 69: */
ZVPACTR = (A68_BITS )ZUPACTR_upboperands ;
YVPACTR.Param = (A68_INT )(A68_BITS )(A_SHL(ZVPACTR,WGAACTR_operandsshift)|(A68_BITS )(Param&ZGAACTR_parammask));
 /* line 70: */
YVPACTR.Operands = YUPACTR_operandlist;
 /* line 71: */
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
 /* line 81: */
KWPACTR = (*(&(Value->Info))) ;
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
 /* line 90: */
 /* line 91: */
OWPACTR = (*(&(V1->Extra))) ;
switch ( OWPACTR.mode )
{ 
case 3: /* VOID */
 /* line 92: */
PWPACTR = (*(&(V2->Extra))) ;
switch ( PWPACTR.mode )
{ 
case 3: /* VOID */
 /* line 93: */
QWPACTR = ((*(&(V1->Mode)))==(*(&(V2->Mode))));
break;
default: 
 /* line 94: */
 /* line 95: */
QWPACTR = A68_FALSE;
break;
} 
break;
case 1: /* LONG BITS */
RWPACTR_b1 = (OWPACTR.data.mode1);
SWPACTR = (*(&(V2->Extra))) ;
switch ( SWPACTR.mode )
{ 
case 1: /* LONG BITS */
TWPACTR_b2 = (SWPACTR.data.mode1);
QWPACTR = (RWPACTR_b1==TWPACTR_b2);
break;
default: 
 /* line 96: */
QWPACTR = A68_FALSE;
break;
} 
break;
default: 
 /* line 97: */
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
 /* line 106: */
AXPACTR = (*(&(Value->Extra))) ;
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
 /* line 109: */
FXPACTR = (*(&(Value->Extra))) ;
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
 /* line 112: */
KXPACTR = (*(&(Value->Extra))) ;
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
 /* line 115: */
 /* line 116: */
OXPACTR = (*(&(Value->Extra))) ;
switch ( OXPACTR.mode )
{ 
case 1: /* LONG BITS */
 /* line 117: */
PXPACTR = A68_TRUE;
break;
case 5: /* STRUCT(MODE56,INT)  */
 /* line 118: */
PXPACTR = A68_TRUE;
break;
case 4: /* STRUCT(INT)  */
 /* line 119: */
PXPACTR = A68_TRUE;
break;
case 6: /* VECTOR [] CHAR */
QXPACTR = IWPACTR_hasattribute(Value, QKJACTR_constant);
if ( ! QXPACTR )
{ /* line 120: */
QXPACTR = IWPACTR_hasattribute(Value, RKJACTR_atomic);
}
PXPACTR = QXPACTR;
break;
default: 
 /* line 121: */
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
 /* line 127: */
TXPACTR = (*(&(Value->Extra))) ;
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
 /* line 130: */
XXPACTR = (*(&(Value->Extra))) ;
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
 /* line 133: */
BYPACTR = (*(&(Value->Extra))) ;
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
 /* line 136: */
FYPACTR = (*(&(Value->Extra))) ;
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
 /* line 139: */
 /* line 140: */
KYPACTR = (*(&(Op->Extra))) ;
switch ( KYPACTR.mode )
{ 
case 4: /* STRUCT(INT)  */
 /* line 141: */
LYPACTR = A68_TRUE;
break;
case 5: /* STRUCT(MODE56,INT)  */
 /* line 142: */
LYPACTR = A68_TRUE;
break;
default: 
 /* line 143: */
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
 /* line 146: */
 /* line 147: */
OYPACTR = (*(&(Value->Extra))) ;
switch ( OYPACTR.mode )
{ 
case 1: /* LONG BITS */
PYPACTR_b = (OYPACTR.data.mode1);
 /* line 148: */
QYPACTR = PYPACTR_b;
break;
default: 
(void)(WXIACTR_assert(SYPACTR, A68_FALSE));
 /* line 149: */
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
 /* line 161: */
 /* line 162: */
{ 
XYPACTR = (Level>=(-1));
if ( XYPACTR )
{XYPACTR = (Level<32);
}
(void)(WXIACTR_assert(YYPACTR, XYPACTR));
 /* line 163: */
if (Level>0)
{ 
ZYPACTR = '*';
} 
else
{ 
 /* line 164: */
ZYPACTR = '&';
} 
AZPACTR = A_C_TIMES(ZYPACTR,A_ABS(Level));
} 
A_PROC_EXIT(refstring);
*ReturnedValue = (AZPACTR);
return;
} 
#undef NL

A68_INT  DZPACTR_idreflevel(A68_INT  Mode, A68_INT  Ctype)
{ 
A68_BOOL  EZPACTR_firmarray A_UNUSED = {0};
A68_INT  FZPACTR_diff A_UNUSED = {0};
A68_BOOL  HZPACTR;  /* optbool result */
A68_INT  JZPACTR;  /* clause result */
A_PROC_ENTRY(idreflevel);
 /* line 167: */
 /* line 168: */
{ 
EZPACTR_firmarray = FRMACTR_isfirmarray(Mode);
 /* line 169: */
 /* line 170: */
 /* line 172: */
 /* line 173: */
 /* line 174: */
 /* line 175: */
FZPACTR_diff = (((Ctype/VFAACTR_refmark)+(EZPACTR_firmarray))-((Mode/VFAACTR_refmark)+((EZPACTR_firmarray&(!RSMACTR_hasrefs(Mode))))));
 /* line 176: */
 /* line 177: */
HZPACTR = (FZPACTR_diff>=0);
if ( ! HZPACTR )
{HZPACTR = (FZPACTR_diff==(-1));
}
(void)(WXIACTR_assert(IZPACTR, HZPACTR));
 /* line 178: */
 /* line 179: */
JZPACTR = FZPACTR_diff;
} 
A_PROC_EXIT(idreflevel);
return( JZPACTR );
} 
#undef NL

A68_VOID  LZPACTR_nlmacro(A68_VC  Cf, A68_VC  *ReturnedValue)
{ 
A68_164  MZPACTR;  /* collateral clause result */
A68_VC  PZPACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  QZPACTR;  /* clause result */
A68_36  RZPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  SZPACTR;  /* avoid structure result */
A_PROC_ENTRY(nlmacro);
MZPACTR.data[0] = OZPACTR;
MZPACTR.data[1] = Cf;
MZPACTR.data[2] = A_HVEC(PZPACTR,')',A68_CHAR );
JDAAOSF_concat( A_HISVEC(RZPACTR,MZPACTR,3,A68_VC ), &SZPACTR );
QZPACTR = SZPACTR;
A_PROC_EXIT(nlmacro);
*ReturnedValue = (QZPACTR);
return;
} 
#undef NL

A68_VOID  UZPACTR_getcfragment(A68_108 * Value, A68_VC  *ReturnedValue)
{ 
A68_109  XAQACTR;  /* united object - for case conformity */
A68_VC  YAQACTR_c A_UNUSED = {0};
A68_VC  ZAQACTR;  /* clause result */
A68_112  ABQACTR_t A_UNUSED = {0};
A68_INT  BBQACTR_vmode A_UNUSED = {0};
A68_INT  CBQACTR;  /* clause result */
A68_INT  DBQACTR_rmode A_UNUSED = {0};
A68_INT  EBQACTR_diff A_UNUSED = {0};
A68_VC  HBQACTR;  /* avoid structure result */
A68_VC  IBQACTR;  /* OPERATORS - istruct -> vector */
A68_56  JBQACTR;  /* OPERATORS - istruct -> vector */
A68_VC  KBQACTR_result A_UNUSED = {0};
A68_VC  LBQACTR;  /* avoid structure result */
A68_LBITS  MBQACTR_b A_UNUSED = {0};
A68_VC  NBQACTR;  /* avoid structure result */
A68_113  OBQACTR_nihil A_UNUSED = {0};
A68_110  XBQACTR_r A_UNUSED = {0};
A68_INT  YBQACTR_rd A_UNUSED = {0};
A68_BOOL  ZBQACTR;  /* clause result */
A68_95 * ACQACTR_rdinfo A_UNUSED = {0};
A68_BITS  BCQACTR;  /* ADICOPS - >= */
A68_VC  CCQACTR;  /* avoid structure result */
A68_VC  DCQACTR;  /* avoid structure result */
A68_VC  ECQACTR;  /* avoid structure result */
A68_VC  FCQACTR;  /* avoid structure result */
A68_VC  GCQACTR;  /* avoid structure result */
A68_111  JCQACTR_i A_UNUSED = {0};
A68_BOOL  KCQACTR_bracketsrequired A_UNUSED = {0};
A68_BOOL  LCQACTR_nonlocal A_UNUSED = {0};
A68_INT  MCQACTR_id A_UNUSED = {0};
A68_BOOL  OCQACTR;  /* optbool result */
A68_BOOL  PCQACTR;  /* optbool result */
A68_94 * RCQACTR_idinfo A_UNUSED = {0};
A68_BITS  SCQACTR;  /* ADICOPS - >= */
A68_BOOL  TCQACTR_isgproc A_UNUSED = {0};
A68_VC  WCQACTR;  /* clause result */
A68_VC  XCQACTR;  /* avoid structure result */
A68_VC  YCQACTR;  /* avoid structure result */
A68_INT  ZCQACTR;  /* clause result */
A68_INT  ADQACTR_reqda68mode A_UNUSED = {0};
A68_INT  BDQACTR;  /* clause result */
A68_INT  CDQACTR_reqdcmode A_UNUSED = {0};
A68_INT  DDQACTR_diff A_UNUSED = {0};
A68_VC  EDQACTR;  /* avoid structure result */
A68_VC  FDQACTR;  /* clause result */
A68_VC  GDQACTR;  /* avoid structure result */
A68_VC  HDQACTR;  /* avoid structure result */
A68_VC  KDQACTR;  /* avoid structure result */
A68_VC  LDQACTR_body A_UNUSED = {0};
A68_VC  MDQACTR;  /* avoid structure result */
A68_57  NDQACTR_label A_UNUSED = {0};
A68_INT  ODQACTR_l A_UNUSED = {0};
A68_VC  RDQACTR;  /* avoid structure result */
A68_61  SDQACTR;  /* avoid structure result */
A68_VC  TDQACTR;  /* avoid structure result */
A68_VC  UDQACTR;  /* avoid structure result */
A68_VC  VDQACTR;  /* avoid structure result */
A68_VC  WDQACTR;  /* avoid structure result */
A68_VC  ZDQACTR = {0};  /* OPERATORS - skip to mode */
A_PROC_ENTRY(getcfragment);
 /* line 187: */
 /* line 188: */
{ 
 /* line 199: */
 /* line 201: */
XAQACTR = (*(&(Value->Extra))) ;
switch ( XAQACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
YAQACTR_c = (XAQACTR.data.mode6);
 /* line 203: */
ZAQACTR = YAQACTR_c;
break;
case 5: /* STRUCT(MODE56,INT)  */
ABQACTR_t = (XAQACTR.data.mode5);
 /* line 204: */
{ 
BBQACTR_vmode = (*(&(Value->Mode)));
 /* line 205: */
 /* line 206: */
 /* line 207: */
if (IWPACTR_hasattribute(Value, VKJACTR_lvalue))
{ 
 /* line 208: */
 /* line 209: */
CBQACTR = BTMACTR_derefmode(BBQACTR_vmode);
} 
else
{ 
CBQACTR = BBQACTR_vmode;
} 
DBQACTR_rmode = CBQACTR;
 /* line 210: */
EBQACTR_diff = DZPACTR_idreflevel(DBQACTR_rmode, ABQACTR_t.Mode);
 /* line 211: */
 /* line 212: */
(void)(WXIACTR_assert(GBQACTR, (EBQACTR_diff>=0)));
 /* line 213: */
VYPACTR_refstring( EBQACTR_diff, &HBQACTR );
JBQACTR = ABQACTR_t.Name ;
KBQACTR_result = A_VC_PLUS(HBQACTR,A_HISVEC(IBQACTR,JBQACTR,7,A68_CHAR ));
 /* line 214: */
if (EBQACTR_diff>0)
{ 
JIAACTR_bracket( KBQACTR_result, &LBQACTR );
ZAQACTR = LBQACTR;
} 
else
{ 
 /* line 215: */
 /* line 217: */
ZAQACTR = KBQACTR_result;
} 
} 
break;
case 1: /* LONG BITS */
MBQACTR_b = (XAQACTR.data.mode1);
 /* line 219: */
JPAAOSF_lwhole( (A68_LINT )MBQACTR_b, 0, &NBQACTR );
ZAQACTR = NBQACTR;
break;
case 8: /* STRUCT(INT)  */
OBQACTR_nihil = (XAQACTR.data.mode8);
 /* line 220: */
 /* line 221: */
switch ( OBQACTR_nihil.Nse )
{ 
case 1: 
ZAQACTR = QBQACTR;
break;
case 2: 
 /* line 222: */
ZAQACTR = SBQACTR;
break;
case 3: 
 /* line 223: */
ZAQACTR = UBQACTR;
break;
default: 
 /* line 225: */
ZAQACTR = WBQACTR;
break;
} 
break;
case 2: /* STRUCT(INT)  */
XBQACTR_r = (XAQACTR.data.mode2);
 /* line 226: */
{ 
{ 
YBQACTR_rd = XBQACTR_r.Rdenno;
 /* line 227: */
 /* line 228: */
 /* line 229: */
 /* line 230: */
ZBQACTR = ((YBQACTR_rd<=KAAACTR_maxrdno)&(YBQACTR_rd>=JAAACTR_minrdno));
if (ZBQACTR)
{ 
ACQACTR_rdinfo = (&A_R1INDEX(XPKACTR_rds,YBQACTR_rd));
 /* line 231: */
 /* line 232: */
BCQACTR = (*(&(ACQACTR_rdinfo->Flags))) ;
if (A_LB_GE(BCQACTR,RQKACTR_rdglobalflag))
{ 
 /* line 233: */
UTKACTR_idfullname( YBQACTR_rd, &CCQACTR );
YZPACTR_makeprocvalue( CCQACTR, (*(&(ACQACTR_rdinfo->Mode))), &DCQACTR );
ZAQACTR = DCQACTR;
} 
else
{ 
 /* line 234: */
if (IWPACTR_hasattribute(Value, TKJACTR_nonloc))
{ 
 /* line 235: */
UTKACTR_idfullname( YBQACTR_rd, &ECQACTR );
LZPACTR_nlmacro( ECQACTR, &FCQACTR );
ZAQACTR = FCQACTR;
} 
else
{ 
 /* line 236: */
 /* line 237: */
 /* line 238: */
UTKACTR_idfullname( YBQACTR_rd, &GCQACTR );
ZAQACTR = GCQACTR;
} 
} 
} 
else
{ 
 /* line 241: */
ZAQACTR = ICQACTR;
} 
} 
} 
break;
case 4: /* STRUCT(INT)  */
JCQACTR_i = (XAQACTR.data.mode4);
 /* line 242: */
 /* line 243: */
{ 
KCQACTR_bracketsrequired = A68_FALSE;
 /* line 244: */
LCQACTR_nonlocal = IWPACTR_hasattribute(Value, TKJACTR_nonloc);
 /* line 246: */
MCQACTR_id = JCQACTR_i.Idno;
 /* line 247: */
 /* line 248: */
 /* line 239: */
OCQACTR = (MCQACTR_id<=IAAACTR_maxidno);
if ( ! OCQACTR )
{PCQACTR = (MCQACTR_id>=LAAACTR_minlibid);
if ( PCQACTR )
{PCQACTR = (MCQACTR_id<=MAAACTR_maxlibid);
}
OCQACTR = PCQACTR;
}
(void)(WXIACTR_assert(QCQACTR, OCQACTR));
 /* line 249: */
RCQACTR_idinfo = YQKACTR_get_idinfo(MCQACTR_id);
 /* line 250: */
SCQACTR = (*(&(RCQACTR_idinfo->Flags))) ;
TCQACTR_isgproc = A_LB_GE(SCQACTR,JQKACTR_idgprocflag);
 /* line 251: */
 /* line 252: */
 /* line 253: */
 /* line 254: */
if (TCQACTR_isgproc)
{ 
(void)(WXIACTR_assert(VCQACTR, (!LCQACTR_nonlocal)));
 /* line 255: */
 /* line 256: */
 /* line 262: */
UTKACTR_idfullname( MCQACTR_id, &XCQACTR );
YZPACTR_makeprocvalue( XCQACTR, (*(&(RCQACTR_idinfo->Mode))), &YCQACTR );
WCQACTR = YCQACTR;
} 
else
{ 
 /* line 263: */
if (IWPACTR_hasattribute(Value, VKJACTR_lvalue))
{ 
 /* line 264: */
 /* line 265: */
ZCQACTR = BTMACTR_derefmode((*(&(Value->Mode))));
} 
else
{ 
ZCQACTR = (*(&(Value->Mode)));
} 
ADQACTR_reqda68mode = ZCQACTR;
 /* line 266: */
 /* line 267: */
 /* line 268: */
if (LCQACTR_nonlocal)
{ 
 /* line 269: */
BDQACTR = TKNACTR_givecvariabletype((*(&(YQKACTR_get_idinfo(MCQACTR_id)->Mode))), A68_TRUE);
} 
else
{ 
 /* line 270: */
BDQACTR = (*(&(YQKACTR_get_idinfo(MCQACTR_id)->Cvariabletype)));
} 
CDQACTR_reqdcmode = BDQACTR;
 /* line 271: */
DDQACTR_diff = DZPACTR_idreflevel(ADQACTR_reqda68mode, CDQACTR_reqdcmode);
 /* line 272: */
(void)(KCQACTR_bracketsrequired = (DDQACTR_diff!=0));
 /* line 273: */
 /* line 274: */
 /* line 276: */
VYPACTR_refstring( DDQACTR_diff, &EDQACTR );
WCQACTR = EDQACTR;
} 
if (LCQACTR_nonlocal)
{ 
 /* line 277: */
 /* line 278: */
UTKACTR_idfullname( JCQACTR_i.Idno, &GDQACTR );
LZPACTR_nlmacro( GDQACTR, &HDQACTR );
FDQACTR = HDQACTR;
} 
else
{ 
 /* line 279: */
if (TCQACTR_isgproc)
{ 
FDQACTR = JDQACTR;
} 
else
{ 
 /* line 280: */
UTKACTR_idfullname( JCQACTR_i.Idno, &KDQACTR );
FDQACTR = KDQACTR;
} 
} 
LDQACTR_body = A_VC_PLUS(WCQACTR,FDQACTR);
 /* line 281: */
 /* line 282: */
if (KCQACTR_bracketsrequired)
{ 
 /* line 283: */
 /* line 284: */
JIAACTR_bracket( LDQACTR_body, &MDQACTR );
ZAQACTR = MDQACTR;
} 
else
{ 
 /* line 285: */
 /* line 287: */
ZAQACTR = LDQACTR_body;
} 
} 
break;
case 7: /* STRUCT(INT)  */
NDQACTR_label = (XAQACTR.data.mode7);
 /* line 288: */
 /* line 289: */
{ 
ODQACTR_l = NDQACTR_label.Labno;
 /* line 290: */
 /* line 291: */
 /* line 292: */
ROAAOSF_whole( ODQACTR_l, 0, &RDQACTR );
(void)(WXIACTR_assert(A_VC_PLUS(QDQACTR,RDQACTR), NTKACTR_labelisdeclared(ODQACTR_l)));
 /* line 293: */
 /* line 294: */
RTKACTR_labelenviron( ODQACTR_l, &SDQACTR );
if (VRLACTR_currentlevel()==SDQACTR.Level)
{ 
 /* line 295: */
WSKACTR_labelfullname( ODQACTR_l, &TDQACTR );
ZAQACTR = TDQACTR;
} 
else
{ 
 /* line 296: */
if (IWPACTR_hasattribute(Value, TKJACTR_nonloc))
{ 
 /* line 297: */
DTKACTR_labelbuffername( ODQACTR_l, &UDQACTR );
LZPACTR_nlmacro( UDQACTR, &VDQACTR );
ZAQACTR = VDQACTR;
} 
else
{ 
 /* line 298: */
 /* line 299: */
 /* line 300: */
 /* line 302: */
 /* line 303: */
DTKACTR_labelbuffername( ODQACTR_l, &WDQACTR );
ZAQACTR = WDQACTR;
} 
} 
} 
break;
default: 
(void)(WXIACTR_assert(YDQACTR, A68_FALSE));
 /* line 304: */
 /* line 305: */
ZAQACTR = ZDQACTR;
break;
} 
} 
A_PROC_EXIT(getcfragment);
*ReturnedValue = (ZAQACTR);
return;
} 
#undef NL

A68_VOID  BEQACTR_bracketcfragment(A68_108 * Value, A68_VC  *ReturnedValue)
{ 
A68_VC  CEQACTR;  /* clause result */
A68_VC  DEQACTR;  /* avoid structure result */
A68_VC  EEQACTR;  /* avoid structure result */
A68_VC  FEQACTR;  /* avoid structure result */
A_PROC_ENTRY(bracketcfragment);
 /* line 308: */
 /* line 309: */
{ 
 /* line 310: */
 /* line 311: */
if (NXPACTR_isatomic(Value))
{ 
UZPACTR_getcfragment( Value, &DEQACTR );
CEQACTR = DEQACTR;
} 
else
{ 
 /* line 312: */
 /* line 313: */
UZPACTR_getcfragment( Value, &EEQACTR );
JIAACTR_bracket( EEQACTR, &FEQACTR );
CEQACTR = FEQACTR;
} 
} 
A_PROC_EXIT(bracketcfragment);
*ReturnedValue = (CEQACTR);
return;
} 
#undef NL

A68_108 * IEQACTR_indexvaluelist(A68_115 * List, A68_INT  Index)
{ 
A68_115 * JEQACTR_position A_UNUSED = {0};
A68_INT  KEQACTR;  /* to part of loop */
A68_INT  LEQACTR;  /* loop control */
A68_108 * MEQACTR;  /* clause result */
A_PROC_ENTRY(indexvaluelist);
 /* line 321: */
 /* line 322: */
{ 
JEQACTR_position = List;
 /* line 323: */
KEQACTR = (Index-1);
for ( LEQACTR = 1;
LEQACTR <= KEQACTR;
LEQACTR += 1 )
{ 
(void)(JEQACTR_position = (*(&(JEQACTR_position->Rest))));
}
 /* line 324: */
 /* line 325: */
MEQACTR = (&(JEQACTR_position->Value));
} 
A_PROC_EXIT(indexvaluelist);
return( MEQACTR );
} 
#undef NL

A68_115 * OEQACTR_reversevaluelist(A68_115 * List)
{ 
A68_115 * PEQACTR_last A_UNUSED = {0};
A68_115 * QEQACTR_this A_UNUSED = {0};
A68_115 * REQACTR_next A_UNUSED = {0};
A68_115 ** SEQACTR;  /* YIELD */
A68_115 * TEQACTR;  /* clause result */
A_PROC_ENTRY(reversevaluelist);
 /* line 331: */
 /* line 332: */
{ 
PEQACTR_last = (A68_115 *)A68_NIL;
QEQACTR_this = List;
 /* line 333: */
for ( ;; )
{ 
 /* line 334: */
 /* line 335: */
if ( !((QEQACTR_this!=MKJACTR_nilvaluelist)) ) break;
(void)(REQACTR_next = (*(&(QEQACTR_this->Rest))));
 /* line 336: */
SEQACTR = (&(QEQACTR_this->Rest)) ;
(*SEQACTR) = PEQACTR_last;
 /* line 337: */
PEQACTR_last = QEQACTR_this;
 /* line 338: */
 /* line 339: */
QEQACTR_this = REQACTR_next;
}
 /* line 340: */
 /* line 341: */
TEQACTR = PEQACTR_last;
} 
A_PROC_EXIT(reversevaluelist);
return( TEQACTR );
} 
#undef NL

A68_INT  VEQACTR_operandsof(A68_114  Treeoper)
{ 
A68_INT  WEQACTR;  /* clause result */
A68_BITS  XEQACTR;  /* SHR */
A_PROC_ENTRY(operandsof);
 /* line 349: */
XEQACTR = (A68_BITS )Treeoper.Param ;
WEQACTR = (A68_INT )A_SHR(XEQACTR,WGAACTR_operandsshift);
A_PROC_EXIT(operandsof);
return( WEQACTR );
} 
#undef NL

A68_INT  ZEQACTR_paramof(A68_114  Treeoper)
{ 
A68_INT  AFQACTR;  /* clause result */
A_PROC_ENTRY(paramof);
 /* line 356: */
AFQACTR = (A68_INT )(A68_BITS )((A68_BITS )Treeoper.Param&ZGAACTR_parammask);
A_PROC_EXIT(paramof);
return( AFQACTR );
} 
#undef NL

A68_108 * DFQACTR_operand(A68_108 * Oper, A68_INT  Rand)
{ 
A68_109  EFQACTR;  /* united object - for case conformity */
A68_114  FFQACTR_rator A_UNUSED = {0};
A68_INT  GFQACTR_totalrands A_UNUSED = {0};
A68_108 * HFQACTR;  /* clause result */
A68_108 * KFQACTR = {0};  /* OPERATORS - skip to mode */
A_PROC_ENTRY(operand);
 /* line 360: */
 /* line 361: */
EFQACTR = (*(&(Oper->Extra))) ;
switch ( EFQACTR.mode )
{ 
case 9: /* STRUCT(INT,INT,REF MODE115)  */
FFQACTR_rator = (EFQACTR.data.mode9);
 /* line 362: */
 /* line 363: */
{ 
GFQACTR_totalrands = VEQACTR_operandsof(FFQACTR_rator);
 /* line 364: */
 /* line 365: */
 /* line 366: */
HFQACTR = IEQACTR_indexvaluelist(FFQACTR_rator.Operands, ((GFQACTR_totalrands+1)-Rand));
} 
break;
default: 
(void)(WXIACTR_assert(JFQACTR, A68_FALSE));
 /* line 367: */
HFQACTR = KFQACTR;
break;
} 
A_PROC_EXIT(operand);
return( HFQACTR );
} 
#undef NL

A68_VOID  MFQACTR_derefvalue(A68_108 * Value)
{ 
A68_INT * PFQACTR;  /* YIELD */
A_PROC_ENTRY(derefvalue);
 /* line 370: */
 /* line 372: */
{ 
(void)(WXIACTR_assert(OFQACTR, ((*(&(Value->Mode)))>VFAACTR_refmark)));
 /* line 373: */
 /* line 374: */
PFQACTR = (&(Value->Mode)) ;
(*PFQACTR)-=VFAACTR_refmark;
} 
A_PROC_EXIT(derefvalue);
return;
} 
#undef NL

A68_VOID  RFQACTR_enrefvalue(A68_108 * Value)
{ 
A68_INT * SFQACTR;  /* YIELD */
A_PROC_ENTRY(enrefvalue);
 /* line 377: */
 /* line 378: */
 /* line 379: */
SFQACTR = (&(Value->Mode)) ;
(*SFQACTR)+=VFAACTR_refmark;
A_PROC_EXIT(enrefvalue);
return;
} 
#undef NL

A_STATIC A68_VOID  UFQACTR_fnname(A68_INT  Fn, A68_VC  *ReturnedValue)
{ 
A68_VC  XFQACTR_spare A_UNUSED = {0};
A68_INT  YFQACTR;  /* clause result */
A68_VC  AGQACTR;  /* clause result */
A68_VC  HJQACTR;  /* avoid structure result */
A_PROC_ENTRY(fnname);
 /* line 382: */
 /* line 383: */
{ 
XFQACTR_spare = WFQACTR;
 /* line 384: */
 /* line 385: */
 /* line 386: */
YFQACTR = Fn;
switch ( YFQACTR )
{ 
case 1: 
 /* line 387: */
AGQACTR = BGQACTR;
break;
case 2: 
 /* line 388: */
AGQACTR = DGQACTR;
break;
case 3: 
 /* line 389: */
AGQACTR = FGQACTR;
break;
case 4: 
 /* line 390: */
AGQACTR = HGQACTR;
break;
case 5: 
 /* line 391: */
AGQACTR = JGQACTR;
break;
case 6: 
 /* line 392: */
AGQACTR = LGQACTR;
break;
case 7: 
 /* line 393: */
AGQACTR = NGQACTR;
break;
case 8: 
 /* line 394: */
AGQACTR = PGQACTR;
break;
case 9: 
 /* line 395: */
AGQACTR = RGQACTR;
break;
case 10: 
 /* line 396: */
AGQACTR = TGQACTR;
break;
case 11: 
 /* line 397: */
AGQACTR = VGQACTR;
break;
case 12: 
 /* line 398: */
AGQACTR = XGQACTR;
break;
case 13: 
 /* line 399: */
AGQACTR = ZGQACTR;
break;
case 14: 
 /* line 400: */
AGQACTR = BHQACTR;
break;
case 15: 
 /* line 401: */
AGQACTR = DHQACTR;
break;
case 16: 
 /* line 402: */
AGQACTR = FHQACTR;
break;
case 17: 
 /* line 403: */
AGQACTR = HHQACTR;
break;
case 18: 
 /* line 404: */
AGQACTR = JHQACTR;
break;
case 19: 
 /* line 405: */
AGQACTR = LHQACTR;
break;
case 20: 
 /* line 406: */
AGQACTR = NHQACTR;
break;
case 21: 
 /* line 407: */
AGQACTR = PHQACTR;
break;
case 22: 
 /* line 408: */
AGQACTR = RHQACTR;
break;
case 23: 
 /* line 409: */
AGQACTR = THQACTR;
break;
case 24: 
 /* line 410: */
AGQACTR = VHQACTR;
break;
case 25: 
 /* line 411: */
AGQACTR = XHQACTR;
break;
case 26: 
 /* line 412: */
AGQACTR = ZHQACTR;
break;
case 27: 
 /* line 413: */
AGQACTR = BIQACTR;
break;
case 28: 
 /* line 414: */
AGQACTR = DIQACTR;
break;
case 29: 
 /* line 415: */
AGQACTR = FIQACTR;
break;
case 30: 
 /* line 416: */
AGQACTR = HIQACTR;
break;
case 31: 
 /* line 417: */
AGQACTR = JIQACTR;
break;
case 32: 
 /* line 418: */
AGQACTR = LIQACTR;
break;
case 33: 
 /* line 419: */
AGQACTR = NIQACTR;
break;
case 34: 
 /* line 420: */
AGQACTR = PIQACTR;
break;
case 35: 
 /* line 421: */
AGQACTR = RIQACTR;
break;
case 36: 
 /* line 422: */
AGQACTR = TIQACTR;
break;
case 37: 
 /* line 423: */
AGQACTR = VIQACTR;
break;
case 38: 
 /* line 424: */
AGQACTR = XIQACTR;
break;
case 39: 
 /* line 425: */
AGQACTR = ZIQACTR;
break;
case 40: 
 /* line 426: */
AGQACTR = BJQACTR;
break;
case 41: 
 /* line 427: */
AGQACTR = XFQACTR_spare;
break;
case 42: 
 /* line 428: */
AGQACTR = XFQACTR_spare;
break;
case 43: 
 /* line 429: */
AGQACTR = XFQACTR_spare;
break;
case 44: 
 /* line 430: */
AGQACTR = XFQACTR_spare;
break;
case 45: 
 /* line 431: */
AGQACTR = XFQACTR_spare;
break;
case 46: 
 /* line 432: */
AGQACTR = XFQACTR_spare;
break;
case 47: 
 /* line 433: */
AGQACTR = XFQACTR_spare;
break;
case 48: 
 /* line 434: */
AGQACTR = XFQACTR_spare;
break;
case 49: 
 /* line 436: */
AGQACTR = XFQACTR_spare;
break;
case 50: 
 /* line 438: */
AGQACTR = DJQACTR;
break;
case 51: 
AGQACTR = FJQACTR;
break;
default: 
 /* line 439: */
ROAAOSF_whole( Fn, 0, &HJQACTR );
AGQACTR = A_VC_PLUS(HJQACTR,IJQACTR);
break;
} 
} 
A_PROC_EXIT(fnname);
*ReturnedValue = (AGQACTR);
return;
} 
#undef NL

A68_VOID  LJQACTR_valuestring(A68_108 * Value, A68_BOOL  Brief, A68_VC  *ReturnedValue)
{ 
A68_VC  NJQACTR;  /* clause result */
union {  /* BIOP 99 */
A68_108   source;
A68_LINT   destination;
} PJQACTR; 
A68_LINT  QJQACTR = {0};  /* OPERATORS - skip to mode */
A68_109  XJQACTR;  /* united object - for case conformity */
A68_VC  ZJQACTR;  /* clause result */
A68_LBITS  BKQACTR_bb A_UNUSED = {0};
A68_VC  EKQACTR;  /* avoid structure result */
A68_57  FKQACTR_l A_UNUSED = {0};
A68_VC  IKQACTR;  /* avoid structure result */
A68_111  JKQACTR_id A_UNUSED = {0};
A68_VC  MKQACTR;  /* avoid structure result */
A68_112  NKQACTR_tmp A_UNUSED = {0};
A68_VC  QKQACTR;  /* OPERATORS - istruct -> vector */
A68_56  RKQACTR;  /* OPERATORS - istruct -> vector */
A68_VC  SKQACTR_c A_UNUSED = {0};
A68_113  VKQACTR_s A_UNUSED = {0};
A68_110  ELQACTR_r A_UNUSED = {0};
A68_VC  HLQACTR;  /* avoid structure result */
A68_VC  ILQACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  JLQACTR;  /* avoid structure result */
A68_VC  KLQACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_114  LLQACTR_o A_UNUSED = {0};
A68_VC  PLQACTR;  /* avoid structure result */
A68_VC  WLQACTR;  /* avoid structure result */
A68_BITS  YLQACTR;  /* SHR */
A68_VC  ZLQACTR;  /* avoid structure result */
A68_VC  BMQACTR;  /* avoid structure result */
A68_VC  HMQACTR;  /* avoid structure result */
A_PROC_ENTRY(valuestring);
 /* line 444: */
 /* line 445: */
 /* line 446: */
if (Value==(A68_108 *)A68_NIL)
{ 
NJQACTR = OJQACTR;
} 
else
{ 
 /* line 448: */
 /* line 449: */
PJQACTR.source = (*Value) ;
if ((PJQACTR.destination)==QJQACTR)
{ 
NJQACTR = SJQACTR;
} 
else
{ 
 /* line 450: */
 /* line 451: */
if (NWPACTR_(Value, JVPACTR_assignment(A_LOC(A68_108 ), DLJACTR_skipvalue)))
{ 
NJQACTR = UJQACTR;
} 
else
{ 
 /* line 452: */
 /* line 453: */
 /* line 454: */
XJQACTR = (*(&(Value->Extra))) ;
switch ( XJQACTR.mode )
{ 
case 3: /* VOID */
 /* line 455: */
ZJQACTR = AKQACTR;
break;
case 1: /* LONG BITS */
BKQACTR_bb = (XJQACTR.data.mode1);
 /* line 456: */
BQAAOSF_hex( BKQACTR_bb, 24, &EKQACTR );
ZJQACTR = A_VC_PLUS(DKQACTR,EKQACTR);
break;
case 7: /* STRUCT(INT)  */
FKQACTR_l = (XJQACTR.data.mode7);
 /* line 457: */
UTKACTR_idfullname( (FKQACTR_l.Labno+OAAACTR_minlab), &IKQACTR );
ZJQACTR = A_VC_PLUS(HKQACTR,IKQACTR);
break;
case 4: /* STRUCT(INT)  */
JKQACTR_id = (XJQACTR.data.mode4);
 /* line 458: */
UTKACTR_idfullname( JKQACTR_id.Idno, &MKQACTR );
ZJQACTR = A_VC_PLUS(LKQACTR,MKQACTR);
break;
case 5: /* STRUCT(MODE56,INT)  */
NKQACTR_tmp = (XJQACTR.data.mode5);
 /* line 459: */
RKQACTR = NKQACTR_tmp.Name ;
ZJQACTR = A_VC_PLUS(PKQACTR,A_HISVEC(QKQACTR,RKQACTR,7,A68_CHAR ));
break;
case 6: /* VECTOR [] CHAR */
SKQACTR_c = (XJQACTR.data.mode6);
 /* line 460: */
ZJQACTR = A_VC_PLUS(UKQACTR,SKQACTR_c);
break;
case 8: /* STRUCT(INT)  */
VKQACTR_s = (XJQACTR.data.mode8);
 /* line 461: */
 /* line 462: */
switch ( VKQACTR_s.Nse )
{ 
case 1: 
ZJQACTR = XKQACTR;
break;
case 2: 
 /* line 463: */
ZJQACTR = ZKQACTR;
break;
case 3: 
 /* line 464: */
ZJQACTR = BLQACTR;
break;
default: 
 /* line 465: */
ZJQACTR = DLQACTR;
break;
} 
break;
case 2: /* STRUCT(INT)  */
ELQACTR_r = (XJQACTR.data.mode2);
 /* line 466: */
 /* line 467: */
 /* line 468: */
UTKACTR_idfullname( ELQACTR_r.Rdenno, &HLQACTR );
ROAAOSF_whole( ELQACTR_r.Rdenno, 0, &JLQACTR );
ZJQACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(GLQACTR,HLQACTR),A_HVEC(ILQACTR,'(',A68_CHAR )),JLQACTR),A_HVEC(KLQACTR,')',A68_CHAR ));
break;
case 9: /* STRUCT(INT,INT,REF MODE115)  */
LLQACTR_o = (XJQACTR.data.mode9);
 /* line 469: */
 /* line 470: */
if (Brief)
{ 
 /* line 471: */
UFQACTR_fnname( LLQACTR_o.Fn, &PLQACTR );
ZJQACTR = A_VC_PLUS(A_VC_PLUS(OLQACTR,PLQACTR),QLQACTR);
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
UFQACTR_fnname( LLQACTR_o.Fn, &WLQACTR );
YLQACTR = (A68_BITS )LLQACTR_o.Param ;
ROAAOSF_whole( (A68_INT )A_SHR(YLQACTR,WGAACTR_operandsshift), 0, &ZLQACTR );
ROAAOSF_whole( (A68_INT )(A68_BITS )((A68_BITS )LLQACTR_o.Param&ZGAACTR_parammask), 0, &BMQACTR );
ZJQACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(VLQACTR,WLQACTR),XLQACTR),ZLQACTR),AMQACTR),BMQACTR),CMQACTR);
} 
break;
default: 
 /* line 480: */
ZJQACTR = EMQACTR;
break;
} 
 /* line 481: */
WCNACTR_modename( (*(&(Value->Mode))), &HMQACTR );
NJQACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(GMQACTR,HMQACTR),IMQACTR),ZJQACTR),JMQACTR);
} 
} 
} 
A_PROC_EXIT(valuestring);
*ReturnedValue = (NJQACTR);
return;
} 
#undef NL

A68_VOID  LMQACTR_uvaluetocfragment(A68_197  U, A68_VC  *ReturnedValue)
{ 
A68_197  MMQACTR;  /* united object - for case conformity */
A68_108 * NMQACTR_rv A_UNUSED = {0};
A68_VC  OMQACTR;  /* clause result */
A68_VC  PMQACTR;  /* avoid structure result */
A68_VC  QMQACTR_c A_UNUSED = {0};
A68_112  RMQACTR_t A_UNUSED = {0};
A68_VC  SMQACTR;  /* OPERATORS - istruct -> vector */
A68_56  TMQACTR;  /* OPERATORS - istruct -> vector */
A68_VC  WMQACTR = {0};  /* OPERATORS - skip to mode */
A_PROC_ENTRY(uvaluetocfragment);
 /* line 492: */
 /* line 493: */
MMQACTR = U ;
switch ( MMQACTR.mode )
{ 
case 1: /* REF STRUCT(INT,BITS,MODE109)  */
NMQACTR_rv = (MMQACTR.data.mode1);
 /* line 494: */
UZPACTR_getcfragment( NMQACTR_rv, &PMQACTR );
OMQACTR = PMQACTR;
break;
case 2: /* VECTOR [] CHAR */
QMQACTR_c = (MMQACTR.data.mode2);
 /* line 495: */
OMQACTR = QMQACTR_c;
break;
case 3: /* STRUCT(MODE56,INT)  */
RMQACTR_t = (MMQACTR.data.mode3);
 /* line 496: */
 /* line 497: */
TMQACTR = RMQACTR_t.Name ;
OMQACTR = A_HISVEC(SMQACTR,TMQACTR,7,A68_CHAR );
break;
default: 
(void)(WXIACTR_assert(VMQACTR, A68_FALSE));
 /* line 498: */
OMQACTR = WMQACTR;
break;
} 
A_PROC_EXIT(uvaluetocfragment);
*ReturnedValue = (OMQACTR);
return;
} 
#undef NL

A68_VOID  YMQACTR_joinuvalue(A68_200  Items, A68_VC  *ReturnedValue)
{ 
A68_54  CNQACTR_generator;   /* proc value of non-global proc */
A68_154  INQACTR;  /* avoid structure result */
A68_154  HNQACTR_result A_UNUSED = {0};
A68_197  JNQACTR_i A_UNUSED = {0};
A68_197 * KNQACTR;  /* forall control - []x */
A68_INT  LNQACTR;  /* forall loop counter */
A68_VC  MNQACTR;  /* avoid structure result */
A68_VC  NNQACTR;  /* clause result */
A_PROC_ENTRY(joinuvalue);
 /* line 501: */
 /* line 502: */
{ 
(void)(WXIACTR_assert(ANQACTR, (Items.upb>=1)));
 /* line 503: */
A_CLOSURE( CNQACTR_generator, DNQACTR_generator, ENQACTR_generator );
A_CALLPROC(CNQACTR_generator,(A68_TRUE, &INQACTR),(A68_TRUE, &INQACTR,(CNQACTR_generator).nonlocals));
HNQACTR_result = INQACTR;
 /* line 504: */
 /* line 505: */
LNQACTR = Items.upb -1;
KNQACTR = Items.data;
for (;LNQACTR-- >= 0;
(KNQACTR++
) )
{
JNQACTR_i = *KNQACTR;
 /* line 506: */
LMQACTR_uvaluetocfragment( JNQACTR_i, &MNQACTR );
(void)(A_VC_PLUSAB(HNQACTR_result,MNQACTR));
}
 /* line 507: */
 /* line 508: */
NNQACTR = HNQACTR_result;
} 
A_PROC_EXIT(joinuvalue);
*ReturnedValue = (NNQACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  PNQACTR_commaseparate(A68_200  Items, A68_VC  *ReturnedValue)
{ 
A68_54  TNQACTR_generator;   /* proc value of non-global proc */
A68_154  ZNQACTR;  /* avoid structure result */
A68_154  YNQACTR_result A_UNUSED = {0};
A68_INT  AOQACTR;  /* YIELD */
A68_VC  BOQACTR;  /* avoid structure result */
A68_VC  COQACTR;  /* OPERATORS - copy to flex */
A68_197  DOQACTR_i A_UNUSED = {0};
A68_200  EOQACTR;  /* OPERATORS - trim index */
A68_200  FOQACTR;  /* forall yield */
A68_197 * GOQACTR;  /* forall control - []x */
A68_INT  HOQACTR;  /* forall loop counter */
A68_VC  IOQACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  JOQACTR;  /* avoid structure result */
A68_VC  KOQACTR;  /* clause result */
A_PROC_ENTRY(commaseparate);
 /* line 511: */
 /* line 512: */
{ 
(void)(WXIACTR_assert(RNQACTR, (Items.upb>=1)));
 /* line 519: */
A_CLOSURE( TNQACTR_generator, UNQACTR_generator, VNQACTR_generator );
A_CALLPROC(TNQACTR_generator,(A68_TRUE, &ZNQACTR),(A68_TRUE, &ZNQACTR,(TNQACTR_generator).nonlocals));
YNQACTR_result = ZNQACTR;
 /* line 520: */
AOQACTR = 1 ;
LMQACTR_uvaluetocfragment( A_VINDEX(Items,AOQACTR), &BOQACTR );
(void)(YNQACTR_result = A_VCOPY(BOQACTR,COQACTR,A68_CHAR ));
 /* line 521: */
 /* line 522: */
if (Items.upb>1)
{ 
 /* line 523: */
FOQACTR = A_VTRIM(EOQACTR,(Items),A_VTSCRIPT(&(EOQACTR.upb),(Items).upb,2,(Items).upb)) ;
HOQACTR = FOQACTR.upb -1;
GOQACTR = FOQACTR.data;
for (;HOQACTR-- >= 0;
(GOQACTR++
) )
{
DOQACTR_i = *GOQACTR;
 /* line 524: */
LMQACTR_uvaluetocfragment( DOQACTR_i, &JOQACTR );
(void)(A_VC_PLUSAB(YNQACTR_result,A_VC_PLUS(A_HVEC(IOQACTR,',',A68_CHAR ),JOQACTR)));
}
 /* line 525: */
} 
 /* line 526: */
 /* line 527: */
KOQACTR = YNQACTR_result;
} 
A_PROC_EXIT(commaseparate);
*ReturnedValue = (KOQACTR);
return;
} 
#undef NL

A68_VOID  MOQACTR_commalist(A68_200  Items, A68_VC  *ReturnedValue)
{ 
A68_VC  NOQACTR;  /* clause result */
A68_VC  OOQACTR;  /* avoid structure result */
A68_VC  POQACTR;  /* avoid structure result */
A_PROC_ENTRY(commalist);
 /* line 530: */
PNQACTR_commaseparate( Items, &OOQACTR );
JIAACTR_bracket( OOQACTR, &POQACTR );
NOQACTR = POQACTR;
A_PROC_EXIT(commalist);
*ReturnedValue = (NOQACTR);
return;
} 
#undef NL

A68_VOID  SOQACTR_usemacro(A68_VC  Macro, A68_200  Arguments, A68_VC  *ReturnedValue)
{ 
A68_VC  TOQACTR;  /* clause result */
A68_VC  UOQACTR;  /* avoid structure result */
A68_VC  VOQACTR;  /* avoid structure result */
A_PROC_ENTRY(usemacro);
 /* line 533: */
PNQACTR_commaseparate( Arguments, &UOQACTR );
JIAACTR_bracket( UOQACTR, &VOQACTR );
TOQACTR = A_VC_PLUS(Macro,VOQACTR);
A_PROC_EXIT(usemacro);
*ReturnedValue = (TOQACTR);
return;
} 
#undef NL

A68_VOID  XOQACTR_emitline(A68_200  Uv)
{ 
A68_206  YOQACTR;  /* collateral clause result */
A68_VC  ZOQACTR;  /* avoid structure result */
A68_93  APQACTR = {0};  /* OPERATORS - mode -> union mode */
A68_93  BPQACTR = {0};  /* OPERATORS - mode -> union mode */
A68_92  CPQACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(emitline);
 /* line 538: */
YMQACTR_joinuvalue( Uv, &ZOQACTR );
YOQACTR.data[0] = A_UNITE(APQACTR,mode2,2,ZOQACTR);
YOQACTR.data[1] = A_UNITE(BPQACTR,mode4,4,EIAACTR_cnewline);
 /* line 540: */
(void)(MDMACTR_writecstream(A_HISVEC(CPQACTR,YOQACTR,2,A68_93 ), NSLACTR_codestream(VRLACTR_currentlevel())));
A_PROC_EXIT(emitline);
return;
} 
#undef NL
 /* line 544: */
 /* line 546: */

A68_VOID  GPQACTR_yieldtemporary(A68_VC  Comment, A68_INT  Mode, A68_200  Op, A68_112  *ReturnedValue)
{ 
A68_112  HPQACTR;  /* avoid structure result */
A68_112  IPQACTR_t A_UNUSED = {0};
A68_208  JPQACTR;  /* collateral clause result */
A68_197  KPQACTR = {0};  /* OPERATORS - mode -> union mode */
A68_197  NPQACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  OPQACTR;  /* YIELD */
A68_VC  PPQACTR;  /* avoid structure result */
A68_197  QPQACTR = {0};  /* OPERATORS - mode -> union mode */
A68_197  TPQACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  UPQACTR;  /* YIELD */
A68_200  VPQACTR;  /* OPERATORS - istruct -> vector */
A68_112  WPQACTR;  /* clause result */
A_PROC_ENTRY(yieldtemporary);
 /* line 547: */
 /* line 548: */
{ 
A_CALLPROC(TMOACTR_new,(Mode, Comment, &HPQACTR),(Mode, Comment, &HPQACTR,(TMOACTR_new).nonlocals));
IPQACTR_t = HPQACTR;
 /* line 549: */
JPQACTR.data[0] = A_UNITE(KPQACTR,mode3,3,IPQACTR_t);
OPQACTR = MPQACTR ;
JPQACTR.data[1] = A_UNITE(NPQACTR,mode2,2,OPQACTR);
YMQACTR_joinuvalue( Op, &PPQACTR );
JPQACTR.data[2] = A_UNITE(QPQACTR,mode2,2,PPQACTR);
UPQACTR = SPQACTR ;
JPQACTR.data[3] = A_UNITE(TPQACTR,mode2,2,UPQACTR);
(void)(XOQACTR_emitline(A_HISVEC(VPQACTR,JPQACTR,4,A68_197 )));
 /* line 550: */
 /* line 551: */
WPQACTR = IPQACTR_t;
} 
A_PROC_EXIT(yieldtemporary);
*ReturnedValue = (WPQACTR);
return;
} 
#undef NL

A68_108 * YPQACTR_yield(A68_108 * Op)
{ 
A68_197  AQQACTR = {0};  /* OPERATORS - mode -> union mode */
A68_200  BQQACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_112  DQQACTR;  /* avoid structure result */
A68_109  EQQACTR = {0};  /* OPERATORS - mode -> union mode */
A68_BITS * FQQACTR;  /* YIELD */
A68_108 * GQQACTR;  /* clause result */
A_PROC_ENTRY(yield);
 /* line 554: */
{ 
 /* line 555: */
if (!JYPACTR_isaname(Op))
{ 
GPQACTR_yieldtemporary( CQQACTR, (*(&(Op->Mode))), A_HVEC(BQQACTR,A_UNITE(AQQACTR,mode1,1,Op),A68_197 ), &DQQACTR );
(void)(OVPACTR_assignment((&(Op->Extra)), A_UNITE(EQQACTR,mode5,5,DQQACTR)));
 /* line 556: */
 /* line 557: */
FQQACTR = (&(Op->Info)) ;
(void)((*FQQACTR) = (A68_BITS )((A68_BITS )((*(&(Op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic));
} 
 /* line 558: */
 /* line 559: */
GQQACTR = Op;
} 
A_PROC_EXIT(yield);
return( GQQACTR );
} 
#undef NL

A68_108 * JQQACTR_yield(A68_VC  Comment, A68_108 * Op)
{ 
A68_197  KQQACTR = {0};  /* OPERATORS - mode -> union mode */
A68_200  LQQACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_112  MQQACTR;  /* avoid structure result */
A68_109  NQQACTR = {0};  /* OPERATORS - mode -> union mode */
A68_BITS * OQQACTR;  /* YIELD */
A68_108 * PQQACTR;  /* clause result */
A_PROC_ENTRY(yield);
 /* line 562: */
{ 
 /* line 563: */
if (!JYPACTR_isaname(Op))
{ 
GPQACTR_yieldtemporary( Comment, (*(&(Op->Mode))), A_HVEC(LQQACTR,A_UNITE(KQQACTR,mode1,1,Op),A68_197 ), &MQQACTR );
(void)(OVPACTR_assignment((&(Op->Extra)), A_UNITE(NQQACTR,mode5,5,MQQACTR)));
 /* line 564: */
 /* line 565: */
OQQACTR = (&(Op->Info)) ;
(void)((*OQQACTR) = (A68_BITS )((A68_BITS )((*(&(Op->Info)))&XKJACTR_fxwarn)|RKJACTR_atomic));
} 
 /* line 566: */
 /* line 567: */
PQQACTR = Op;
} 
A_PROC_EXIT(yield);
return( PQQACTR );
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
A_config.translation_time = "Thu Nov  5 21:11:00 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "NUPACTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 21:11:00 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS values);
(void)(UEAALIB_a68config(LGAALIB_configinfo, SUPACTR));
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
