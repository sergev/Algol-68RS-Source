/* UNAME:UUQACTR */
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
struct A68t51{
A68_INT  Parameters;
A_PAD_INT(PAD_5)
A68_INT  Result;
A_PAD_INT(PAD_6)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_7)
};
typedef struct A68t51  A68_51 ;    /* STRUCT(INT,INT,BOOL)  */
A_ISTRUCT(A68_CHAR ,32,A68t53);
typedef struct A68t53  A68_53 ;    /* STRUCT 32 CHAR */
struct A68t52{
A68_INT  Mode;
A_PAD_INT(PAD_8)
A68_INT  Offset;
A_PAD_INT(PAD_9)
struct A68t53  Name;
A_PAD_ISTRUCT(A68_53 ,PAD_10)
};
typedef struct A68t52  A68_52 ;    /* STRUCT(INT,INT,MODE53)  */
struct A68t55 ;

A_PROCEDURE(A68_VOID ,A68t54,(A68_INT ,struct A68t55 *),(A68_INT ,struct A68t55 *,void *));
typedef struct A68t54  A68_54 ;    /* PROC(INT) REF MODE55 */
A_VECTOR(A68_INT ,A68t55);
typedef struct A68t55  A68_55 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t56,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t56  A68_56 ;    /* PROC(INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t57,(struct A68t52 *,A68_VC *),(struct A68t52 *,A68_VC *,void *));
typedef struct A68t57  A68_57 ;    /* PROC(REF MODE52) MODE26 */
struct A68t59 ;

A_PROCEDURE(A68_VOID ,A68t58,(A68_INT ,A68_VC ,struct A68t59 *),(A68_INT ,A68_VC ,struct A68t59 *,void *));
typedef struct A68t58  A68_58 ;    /* PROC(INT,MODE26) MODE59 */
struct A68t59{
struct A68t42  Name;
A_PAD_ISTRUCT(A68_42 ,PAD_11)
A68_INT  Mode;
A_PAD_INT(PAD_12)
};
typedef struct A68t59  A68_59 ;    /* STRUCT(MODE42,INT)  */

A_PROCEDURE(A68_INT ,A68t60,(A68_INT ),(A68_INT ,void *));
typedef struct A68t60  A68_60 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t61,(A68_INT ),(A68_INT ,void *));
typedef struct A68t61  A68_61 ;    /* PROC(INT) BOOL */
struct A68t63 ;

A_PROCEDURE(A68_VOID ,A68t62,(struct A68t63 ,A68_INT ),(struct A68t63 ,A68_INT ,void *));
typedef struct A68t62  A68_62 ;    /* PROC(REF MODE63,INT) VOID */
A_ROW(struct A68t64 ,A68t63,1);
typedef struct A68t63  A68_63 ;    /* [] MODE64 */
struct A68t74{
A68_INT  Mode;
A_PAD_INT(PAD_13)
};
typedef struct A68t74  A68_74 ;    /* STRUCT(INT)  */
struct A68t64 { A68_INT mode; union {
A68_INT  mode1;
struct A68t65 * mode2;
struct A68t66 * mode3;
struct A68t67 * mode4;
struct A68t68 * mode5;
struct A68t69 * mode6;
struct A68t70 * mode7;
struct A68t71 * mode8;
struct A68t72 * mode9;
struct A68t73 * mode10;
struct A68t74  mode11;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t64  A68_64 ;    /* UNION(INT,REF MODE65,REF MODE66,REF MODE67,REF MODE68,REF MODE69,REF MODE70,REF MODE71,REF MODE72,REF MODE73,MODE74)  */
struct A68t65{
A68_INT  Rdenno;
A_PAD_INT(PAD_14)
struct A68t78 * Modelist;
};
typedef struct A68t65  A68_65 ;    /* STRUCT(INT,REF MODE78)  */
struct A68t66{
A68_INT  Deproc;
A_PAD_INT(PAD_15)
struct A68t78 * Pars;
};
typedef struct A68t66  A68_66 ;    /* STRUCT(INT,REF MODE78)  */
struct A68t67{
A68_INT  Rdenno;
A_PAD_INT(PAD_16)
A68_INT  Deflex;
A_PAD_INT(PAD_17)
struct A68t77 * Sels;
};
typedef struct A68t67  A68_67 ;    /* STRUCT(INT,INT,REF MODE77)  */
struct A68t68{
A68_INT  Rdenno;
A_PAD_INT(PAD_18)
A68_INT  Imode;
A_PAD_INT(PAD_19)
A68_INT  Length;
A_PAD_INT(PAD_20)
A68_INT  Deflex;
A_PAD_INT(PAD_21)
};
typedef struct A68t68  A68_68 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t69{
A68_INT  Deproc;
A_PAD_INT(PAD_22)
};
typedef struct A68t69  A68_69 ;    /* STRUCT(INT)  */
struct A68t70{
A68_INT  Rdenno;
A_PAD_INT(PAD_23)
A68_INT  Vecmode;
A_PAD_INT(PAD_24)
A68_INT  Deflex;
A_PAD_INT(PAD_25)
};
typedef struct A68t70  A68_70 ;    /* STRUCT(INT,INT,INT)  */
struct A68t71{
A68_INT  Rdenno;
A_PAD_INT(PAD_26)
A68_INT  Mode;
A_PAD_INT(PAD_27)
A68_INT  Nods;
A_PAD_INT(PAD_28)
A68_INT  Deflex;
A_PAD_INT(PAD_29)
};
typedef struct A68t71  A68_71 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t72{
A68_INT  Mode;
A_PAD_INT(PAD_30)
struct A68t76 * Stenlist;
};
typedef struct A68t72  A68_72 ;    /* STRUCT(INT,REF MODE76)  */
struct A68t73{
A68_INT  Mode;
A_PAD_INT(PAD_31)
A68_INT  Modeproc;
A_PAD_INT(PAD_32)
struct A68t75 * El;
};
typedef struct A68t73  A68_73 ;    /* STRUCT(INT,INT,REF MODE75)  */
struct A68t75{
struct A68t73 * Am;
struct A68t75 * Rest;
};
typedef struct A68t75  A68_75 ;    /* STRUCT(REF MODE73,REF MODE75)  */
struct A68t76{
A68_INT  Mode;
A_PAD_INT(PAD_33)
A68_INT  Rdenno;
A_PAD_INT(PAD_34)
struct A68t76 * Rest;
};
typedef struct A68t76  A68_76 ;    /* STRUCT(INT,INT,REF MODE76)  */
struct A68t77{
A68_INT  Mode;
A_PAD_INT(PAD_35)
A68_INT  Fieldno;
A_PAD_INT(PAD_36)
struct A68t53  Name;
A_PAD_ISTRUCT(A68_53 ,PAD_37)
struct A68t77 * Rest;
};
typedef struct A68t77  A68_77 ;    /* STRUCT(INT,INT,MODE53,REF MODE77)  */
struct A68t78{
A68_INT  Mode;
A_PAD_INT(PAD_38)
struct A68t78 * Rest;
};
typedef struct A68t78  A68_78 ;    /* STRUCT(INT,REF MODE78)  */

A_PROCEDURE(A68_VOID ,A68t79,(A68_INT ,struct A68t51 *),(A68_INT ,struct A68t51 *,void *));
typedef struct A68t79  A68_79 ;    /* PROC(INT) MODE51 */
struct A68t81 ;

A_PROCEDURE(A68_VOID ,A68t80,(A68_INT ,struct A68t81 *),(A68_INT ,struct A68t81 *,void *));
typedef struct A68t80  A68_80 ;    /* PROC(INT) REF MODE81 */
A_VECTOR(struct A68t52 ,A68t81);
typedef struct A68t81  A68_81 ;    /* VECTOR [] MODE52 */

A_PROCEDURE(A68_INT ,A68t82,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t82  A68_82 ;    /* PROC(INT,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t83,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t83  A68_83 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t84,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t84  A68_84 ;    /* PROC(INT,INT) MODE26 */
struct A68t87{
A68_INT  Rdenno;
A_PAD_INT(PAD_39)
};
typedef struct A68t87  A68_87 ;    /* STRUCT(INT)  */
struct A68t88{
A68_INT  Idno;
A_PAD_INT(PAD_40)
};
typedef struct A68t88  A68_88 ;    /* STRUCT(INT)  */
struct A68t89{
A68_INT  Labno;
A_PAD_INT(PAD_41)
};
typedef struct A68t89  A68_89 ;    /* STRUCT(INT)  */
struct A68t90{
A68_INT  Nse;
A_PAD_INT(PAD_42)
};
typedef struct A68t90  A68_90 ;    /* STRUCT(INT)  */
struct A68t91{
A68_INT  Fn;
A_PAD_INT(PAD_43)
A68_INT  Param;
A_PAD_INT(PAD_44)
struct A68t92 * Operands;
};
typedef struct A68t91  A68_91 ;    /* STRUCT(INT,INT,REF MODE92)  */
struct A68t86 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t87  mode2;
struct A68t88  mode4;
struct A68t59  mode5;
A68_VC  mode6;
struct A68t89  mode7;
struct A68t90  mode8;
struct A68t91  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t86  A68_86 ;    /* UNION(LONG BITS,MODE87,VOID,MODE88,MODE59,MODE26,MODE89,MODE90,MODE91)  */
struct A68t85{
A68_INT  Mode;
A_PAD_INT(PAD_45)
A68_BITS  Info;
A_PAD_BITS(PAD_46)
struct A68t86  Extra;
};
typedef struct A68t85  A68_85 ;    /* STRUCT(INT,BITS,MODE86)  */
struct A68t92{
struct A68t85  Value;
struct A68t92 * Rest;
};
typedef struct A68t92  A68_92 ;    /* STRUCT(MODE85,REF MODE92)  */

A_PROCEDURE(A68_BOOL ,A68t93,(struct A68t85 *,struct A68t85 *),(struct A68t85 *,struct A68t85 *,void *));
typedef struct A68t93  A68_93 ;    /* PROC(REF MODE85,REF MODE85) BOOL */

A_PROCEDURE(A68_BOOL ,A68t94,(struct A68t85 *),(struct A68t85 *,void *));
typedef struct A68t94  A68_94 ;    /* PROC(REF MODE85) BOOL */

A_PROCEDURE(A68_BOOL ,A68t95,(struct A68t85 *,A68_LBITS ),(struct A68t85 *,A68_LBITS ,void *));
typedef struct A68t95  A68_95 ;    /* PROC(REF MODE85,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t96,(struct A68t85 *),(struct A68t85 *,void *));
typedef struct A68t96  A68_96 ;    /* PROC(REF MODE85) LONG BITS */

A_PROCEDURE(A68_VOID ,A68t97,(struct A68t85 *,A68_VC *),(struct A68t85 *,A68_VC *,void *));
typedef struct A68t97  A68_97 ;    /* PROC(REF MODE85) MODE26 */

A_PROCEDURE(struct A68t85 *,A68t98,(struct A68t85 *,A68_INT ),(struct A68t85 *,A68_INT ,void *));
typedef struct A68t98  A68_98 ;    /* PROC(REF MODE85,INT) REF MODE85 */

A_PROCEDURE(A68_INT ,A68t99,(struct A68t91 ),(struct A68t91 ,void *));
typedef struct A68t99  A68_99 ;    /* PROC(MODE91) INT */
struct A68t100{
struct A68t85 * Value;
struct A68t101 * End;
A68_INT  Type;
A_PAD_INT(PAD_47)
};
typedef struct A68t100  A68_100 ;    /* STRUCT(REF MODE85,REF MODE101,INT)  */
struct A68t101{
struct A68t42  Name;
A_PAD_ISTRUCT(A68_42 ,PAD_48)
A68_BOOL  Set;
A_PAD_BOOL(PAD_49)
};
typedef struct A68t101  A68_101 ;    /* STRUCT(MODE42,BOOL)  */

A_PROCEDURE(A68_BOOL ,A68t102,(struct A68t85 *,A68_BITS ),(struct A68t85 *,A68_BITS ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(REF MODE85,BITS) BOOL */

A_PROCEDURE(struct A68t85 *,A68t103,(struct A68t92 *,A68_INT ),(struct A68t92 *,A68_INT ,void *));
typedef struct A68t103  A68_103 ;    /* PROC(REF MODE92,INT) REF MODE85 */

A_PROCEDURE(A68_INT ,A68t104,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t104  A68_104 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(struct A68t92 *,A68t105,(struct A68t92 *),(struct A68t92 *,void *));
typedef struct A68t105  A68_105 ;    /* PROC(REF MODE92) REF MODE92 */
struct A68t107 ;

A_PROCEDURE(struct A68t85 *,A68t106,(A68_INT ,A68_INT ,A68_BITS ,struct A68t107 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t107 ,void *));
typedef struct A68t106  A68_106 ;    /* PROC(INT,INT,BITS,MODE107) REF MODE85 */
A_VECTOR(struct A68t85 *,A68t107);
typedef struct A68t107  A68_107 ;    /* VECTOR [] REF MODE85 */

A_PROCEDURE(A68_VOID ,A68t108,(struct A68t85 *),(struct A68t85 *,void *));
typedef struct A68t108  A68_108 ;    /* PROC(REF MODE85) VOID */

A_PROCEDURE(A68_VOID ,A68t109,(struct A68t85 *,A68_BOOL ,A68_VC *),(struct A68t85 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t109  A68_109 ;    /* PROC(REF MODE85,BOOL) MODE26 */

A_PROCEDURE(A68_LINT ,A68t110,(struct A68t85 ),(struct A68t85 ,void *));
typedef struct A68t110  A68_110 ;    /* PROC(MODE85) LONG INT */

A_PROCEDURE(A68_VOID ,A68t111,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t111  A68_111 ;    /* PROC(MODE26) MODE26 */
struct A68t112 { A68_INT mode; union {
struct A68t85 * mode1;
A68_VC  mode2;
struct A68t59  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t112  A68_112 ;    /* UNION(REF MODE85,MODE26,MODE59)  */

A_PROCEDURE(A68_VOID ,A68t113,(struct A68t112 ,A68_VC *),(struct A68t112 ,A68_VC *,void *));
typedef struct A68t113  A68_113 ;    /* PROC(MODE112) MODE26 */
struct A68t115 ;

A_PROCEDURE(A68_VOID ,A68t114,(struct A68t115 ,A68_VC *),(struct A68t115 ,A68_VC *,void *));
typedef struct A68t114  A68_114 ;    /* PROC(MODE115) MODE26 */
A_VECTOR(struct A68t112 ,A68t115);
typedef struct A68t115  A68_115 ;    /* VECTOR [] MODE112 */

A_PROCEDURE(A68_VOID ,A68t116,(A68_VC ,struct A68t115 ,A68_VC *),(A68_VC ,struct A68t115 ,A68_VC *,void *));
typedef struct A68t116  A68_116 ;    /* PROC(MODE26,MODE115) MODE26 */

A_PROCEDURE(A68_VOID ,A68t117,(struct A68t115 ),(struct A68t115 ,void *));
typedef struct A68t117  A68_117 ;    /* PROC(MODE115) VOID */

A_PROCEDURE(A68_VOID ,A68t118,(A68_VC ,A68_INT ,struct A68t115 ,struct A68t59 *),(A68_VC ,A68_INT ,struct A68t115 ,struct A68t59 *,void *));
typedef struct A68t118  A68_118 ;    /* PROC(MODE26,INT,MODE115) MODE59 */

A_PROCEDURE(struct A68t85 *,A68t119,(struct A68t85 *),(struct A68t85 *,void *));
typedef struct A68t119  A68_119 ;    /* PROC(REF MODE85) REF MODE85 */

A_PROCEDURE(struct A68t85 *,A68t120,(A68_VC ,struct A68t85 *),(A68_VC ,struct A68t85 *,void *));
typedef struct A68t120  A68_120 ;    /* PROC(MODE26,REF MODE85) REF MODE85 */

A_PROCEDURE(A68_VOID ,A68t121,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t121  A68_121 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t122,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t122  A68_122 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t123,(struct A68t32 ),(struct A68t32 ,void *));
typedef struct A68t123  A68_123 ;    /* PROC(MODE32) VOID */

A_PROCEDURE(A68_VOID ,A68t124,(struct A68t43 ),(struct A68t43 ,void *));
typedef struct A68t124  A68_124 ;    /* PROC(MODE43) VOID */

A_PROCEDURE(A68_VOID ,A68t125,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t125  A68_125 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,59,A68t126);
typedef struct A68t126  A68_126 ;    /* STRUCT 59 CHAR */
A_ROW(A68_INT ,A68t127,1);
typedef struct A68t127  A68_127 ;    /* [] INT */

A_PROCEDURE(A68_VOID ,A68t128,(A68_INT ,struct A68t55 ,struct A68t127 *),(A68_INT ,struct A68t55 ,struct A68t127 *,void *));
typedef struct A68t128  A68_128 ;    /* PROC(INT,REF MODE55) MODE127 */

A_PROCEDURE(A68_VOID ,A68t129,(A68_BOOL ,struct A68t127 *),(A68_BOOL ,struct A68t127 *,void *));
typedef struct A68t129  A68_129 ;    /* PROC(BOOL) MODE127 */
A_ISTRUCT(A68_CHAR ,39,A68t130);
typedef struct A68t130  A68_130 ;    /* STRUCT 39 CHAR */

A_PROCEDURE(A68_INT ,A68t131,(struct A68t55 ,struct A68t55 ),(struct A68t55 ,struct A68t55 ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(REF MODE55,REF MODE55) INT */

A_PROCEDURE(A68_VOID ,A68t132,(struct A68t55 ,struct A68t55 ,A68_VC *),(struct A68t55 ,struct A68t55 ,A68_VC *,void *));
typedef struct A68t132  A68_132 ;    /* PROC(REF MODE55,REF MODE55) REF MODE26 */
A_ISTRUCT(A68_CHAR ,40,A68t133);
typedef struct A68t133  A68_133 ;    /* STRUCT 40 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from values --- */
/* --- End of imports from values --- */


/* --- Imports from modes --- */
extern A68_54  YVMACTR_constituents;
/* --- End of imports from modes --- */


/* --- Imports from environment --- */
extern A68_VOID  WXIACTR_assert(A68_VC ,A68_BOOL );
/* --- End of imports from environment --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void OUPACTR(void);   /* values */
extern void DNMACTR(void);   /* modes */
extern void HPIACTR(void);   /* environment */
/* --- end of DECS initialisation functions --- */
static A68_126   YUQACTR = {"$Id: unionaids.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,ZUQACTR,YUQACTR,59)
static A68_130   BWQACTR = {"UNIONAIDS - find mode: mode not present"}; 
A_GISVEC(A68_VC ,CWQACTR,BWQACTR,39)
static A68_133   QXQACTR = {"too many modes in union for table change"}; 
A_GISVEC(A68_VC ,RXQACTR,QXQACTR,40)
typedef struct   /* env of non-global proc */
{
A68_55  U;
} GVQACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  XWQACTR_fromlength;
A_PAD_INT(PAD_50)
} CXQACTR_generator;

A68_VOID  CVQACTR_findoccurances(A68_INT  Mode, A68_55  U, A68_127  *ReturnedValue);

A_STATIC A68_VOID  FVQACTR_generator(A68_BOOL  DVQACTR_anonymous, A68_127  *ReturnedValue, void *NonLocals);

A68_INT  UVQACTR_findmode(A68_INT  Find, A68_INT  Inmode);

A68_INT  GWQACTR_findints(A68_55  A, A68_55  B);

A68_VOID  WWQACTR_uniontouniontable(A68_55  From, A68_55  To, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  BXQACTR_generator(A68_BOOL  ZWQACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FVQACTR_generator(A68_BOOL  DVQACTR_anonymous, A68_127  *ReturnedValue, void *NonLocals)
#define NL(x) (((GVQACTR_generator *)NonLocals)->x)
{ 
A68_127  HVQACTR;  /* clause result */
A68_127  IVQACTR;  /* OPERATORS - dynamic generator */
{ 
IVQACTR.dim[0].upb = NL(U).upb ;
IVQACTR.dim[0].lwb = 1 ;
(void)A_1INITSTRIDES(IVQACTR) ;
( DVQACTR_anonymous? A_R1LOC(A68_INT ,IVQACTR): A_R1HEAP(A68_INT ,IVQACTR) );
HVQACTR = IVQACTR;
} 
*ReturnedValue = (HVQACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  BXQACTR_generator(A68_BOOL  ZWQACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((CXQACTR_generator *)NonLocals)->x)
{ 
A68_VC  DXQACTR;  /* clause result */
A68_VC  EXQACTR;  /* OPERATORS - dynamic generator */
{ 
EXQACTR.upb = NL(XWQACTR_fromlength) ;
( ZWQACTR_anonymous? A_VLOC(A68_CHAR ,EXQACTR): A_VHEAP(A68_CHAR ,EXQACTR) );
DXQACTR = EXQACTR;
} 
*ReturnedValue = (DXQACTR);
return;
} 
#undef NL

A68_VOID  CVQACTR_findoccurances(A68_INT  Mode, A68_55  U, A68_127  *ReturnedValue)
{ 
A68_129  EVQACTR_generator;   /* proc value of non-global proc */
A68_127  KVQACTR;  /* avoid structure result */
A68_127  JVQACTR_indicies A_UNUSED = {0};
A68_INT  LVQACTR_numberindicies A_UNUSED = {0};
A68_INT  MVQACTR_i A_UNUSED = {0};
A68_INT  NVQACTR;  /* to part of loop */
A68_INT  OVQACTR;  /* YIELD */
A68_INT * PVQACTR;  /* YIELD */
A68_127  QVQACTR;  /* clause result */
A68_127  RVQACTR;  /* OPERATORS - trim index */
A_PROC_ENTRY(findoccurances);
 /* line 57: */
 /* line 58: */
{ 
A_CLOSURE( EVQACTR_generator, FVQACTR_generator, GVQACTR_generator );
(( GVQACTR_generator * ) ( EVQACTR_generator.nonlocals )) -> U = U;
A_CALLPROC(EVQACTR_generator,(A68_TRUE, &KVQACTR),(A68_TRUE, &KVQACTR,(EVQACTR_generator).nonlocals));
JVQACTR_indicies = KVQACTR;
 /* line 59: */
LVQACTR_numberindicies = 0;
 /* line 60: */
 /* line 61: */
NVQACTR = U.upb;
for ( MVQACTR_i = 1;
MVQACTR_i <= NVQACTR;
MVQACTR_i += 1 )
{ 
 /* line 62: */
 /* line 63: */
if (Mode==(*(&A_VINDEX(U,MVQACTR_i))))
{ 
 /* line 64: */
 /* line 65: */
OVQACTR = LVQACTR_numberindicies+=1 ;
PVQACTR = (&A_R1INDEX(JVQACTR_indicies,OVQACTR)) ;
(*PVQACTR) = MVQACTR_i;
} 
}
 /* line 66: */
 /* line 67: */
QVQACTR = A_R1TRIM(RVQACTR,(JVQACTR_indicies),A_RTSCRIPT(&(RVQACTR.dim[0]),&((JVQACTR_indicies).dim[0]),(JVQACTR_indicies).dim[0].lwb,LVQACTR_numberindicies,1));
} 
A_PROC_EXIT(findoccurances);
*ReturnedValue = (QVQACTR);
return;
} 
#undef NL

A68_INT  UVQACTR_findmode(A68_INT  Find, A68_INT  Inmode)
{ 
A68_55  VVQACTR;  /* avoid structure result */
A68_127  WVQACTR;  /* OPERATORS - vector -> row */
A68_127  XVQACTR_a A_UNUSED = {0};
A68_INT  YVQACTR_pos A_UNUSED = {0};
A68_INT  ZVQACTR_i A_UNUSED = {0};
A68_INT  AWQACTR;  /* to part of loop */
A68_INT  DWQACTR;  /* clause result */
A_PROC_ENTRY(findmode);
 /* line 70: */
 /* line 71: */
{ 
A_CALLPROC(YVMACTR_constituents,(Inmode, &VVQACTR),(Inmode, &VVQACTR,(YVMACTR_constituents).nonlocals));
XVQACTR_a = A_VECARR(VVQACTR,WVQACTR);
 /* line 72: */
YVQACTR_pos = 1;
 /* line 73: */
AWQACTR = XVQACTR_a.dim[0].upb;
for ( ZVQACTR_i = 1;
ZVQACTR_i <= AWQACTR;
ZVQACTR_i += 1 )
{ 
if ( !((A_R1INDEX(XVQACTR_a,ZVQACTR_i)!=Find)) ) break;
YVQACTR_pos+=1;
}
 /* line 74: */
(void)(WXIACTR_assert(CWQACTR, (YVQACTR_pos<=XVQACTR_a.dim[0].upb)));
 /* line 75: */
 /* line 76: */
DWQACTR = YVQACTR_pos;
} 
A_PROC_EXIT(findmode);
return( DWQACTR );
} 
#undef NL

A68_INT  GWQACTR_findints(A68_55  A, A68_55  B)
{ 
A68_INT  HWQACTR_lengtha A_UNUSED = {0};
A68_INT  IWQACTR_lengthb A_UNUSED = {0};
A68_INT  JWQACTR_find A_UNUSED = {0};
A68_INT  KWQACTR_i A_UNUSED = {0};
A68_INT  LWQACTR;  /* to part of loop */
A68_BOOL  MWQACTR_equal A_UNUSED = {0};
A68_INT  NWQACTR_j A_UNUSED = {0};
A68_INT  OWQACTR;  /* to part of loop */
A68_127  PWQACTR;  /* avoid structure result */
A68_INT  QWQACTR;  /* YIELD */
A68_BOOL  RWQACTR;  /* clause result */
A68_BOOL  SWQACTR;  /* clause result */
A68_INT  TWQACTR;  /* clause result */
A_PROC_ENTRY(findints);
 /* line 85: */
 /* line 86: */
{ 
HWQACTR_lengtha = A.upb;
IWQACTR_lengthb = B.upb;
 /* line 87: */
JWQACTR_find = 0;
 /* line 88: */
 /* line 89: */
LWQACTR = ((IWQACTR_lengthb-HWQACTR_lengtha)+1);
for ( KWQACTR_i = 1;
KWQACTR_i <= LWQACTR;
KWQACTR_i += 1 )
{ 
 /* line 90: */
MWQACTR_equal = A68_FALSE;
 /* line 91: */
 /* line 92: */
OWQACTR = HWQACTR_lengtha;
for ( NWQACTR_j = 1;
NWQACTR_j <= OWQACTR;
NWQACTR_j += 1 )
{ 
 /* line 93: */
 /* line 94: */
 /* line 95: */
 /* line 96: */
CVQACTR_findoccurances( (*(&A_VINDEX(A,NWQACTR_j))), B, &PWQACTR );
QWQACTR = 1 ;
if ( !(MWQACTR_equal = (A_R1INDEX(PWQACTR,QWQACTR)==((KWQACTR_i+NWQACTR_j)-1))) ) break;
/*SKIP*/;
}
 /* line 97: */
 /* line 98: */
if (MWQACTR_equal)
{ 
JWQACTR_find = KWQACTR_i;
 /* line 99: */
RWQACTR = A68_FALSE;
} 
else
{ 
 /* line 100: */
 /* line 101: */
RWQACTR = A68_TRUE;
} 
 /* line 102: */
SWQACTR = RWQACTR;
if ( !SWQACTR ) break;
/*SKIP*/;
}
 /* line 103: */
 /* line 104: */
TWQACTR = JWQACTR_find;
} 
A_PROC_EXIT(findints);
return( TWQACTR );
} 
#undef NL

A68_VOID  WWQACTR_uniontouniontable(A68_55  From, A68_55  To, A68_VC  *ReturnedValue)
{ 
A68_INT  XWQACTR_fromlength A_UNUSED = {0};
A68_INT  YWQACTR_tolength A_UNUSED = {0};
A68_121  AXQACTR_generator;   /* proc value of non-global proc */
A68_VC  FXQACTR;  /* avoid structure result */
A68_VC  GXQACTR_table A_UNUSED = {0};
A68_INT  HXQACTR_i A_UNUSED = {0};
A68_INT  IXQACTR;  /* to part of loop */
A68_CHAR * JXQACTR;  /* YIELD */
A68_INT  KXQACTR_fromi A_UNUSED = {0};
A68_INT  LXQACTR;  /* to part of loop */
A68_INT  MXQACTR_frommode A_UNUSED = {0};
A68_INT  NXQACTR_toi A_UNUSED = {0};
A68_INT  OXQACTR;  /* to part of loop */
A68_INT  PXQACTR_tomode A_UNUSED = {0};
A68_CHAR * SXQACTR;  /* YIELD */
A68_BOOL  TXQACTR;  /* clause result */
A68_BOOL  UXQACTR;  /* clause result */
A68_VC  VXQACTR;  /* clause result */
A_PROC_ENTRY(uniontouniontable);
 /* line 119: */
 /* line 120: */
{ 
XWQACTR_fromlength = From.upb;
YWQACTR_tolength = To.upb;
 /* line 121: */
A_CLOSURE( AXQACTR_generator, BXQACTR_generator, CXQACTR_generator );
(( CXQACTR_generator * ) ( AXQACTR_generator.nonlocals )) -> XWQACTR_fromlength = XWQACTR_fromlength;
A_CALLPROC(AXQACTR_generator,(A68_FALSE, &FXQACTR),(A68_FALSE, &FXQACTR,(AXQACTR_generator).nonlocals));
GXQACTR_table = FXQACTR;
 /* line 122: */
 /* line 123: */
IXQACTR = XWQACTR_fromlength;
for ( HXQACTR_i = 1;
HXQACTR_i <= IXQACTR;
HXQACTR_i += 1 )
{ 
 /* line 124: */
JXQACTR = (&A_VINDEX(GXQACTR_table,HXQACTR_i)) ;
(*JXQACTR) = (A68_SSBITS)0;
}
 /* line 125: */
 /* line 126: */
LXQACTR = XWQACTR_fromlength;
for ( KXQACTR_fromi = 1;
KXQACTR_fromi <= LXQACTR;
KXQACTR_fromi += 1 )
{ 
 /* line 127: */
MXQACTR_frommode = (*(&A_VINDEX(From,KXQACTR_fromi)));
 /* line 128: */
 /* line 129: */
OXQACTR = YWQACTR_tolength;
for ( NXQACTR_toi = 1;
NXQACTR_toi <= OXQACTR;
NXQACTR_toi += 1 )
{ 
 /* line 130: */
PXQACTR_tomode = (*(&A_VINDEX(To,NXQACTR_toi)));
 /* line 131: */
 /* line 132: */
 /* line 133: */
if (MXQACTR_frommode==PXQACTR_tomode)
{ 
(void)(WXIACTR_assert(RXQACTR, (NXQACTR_toi<256)));
 /* line 134: */
SXQACTR = (&A_VINDEX(GXQACTR_table,KXQACTR_fromi)) ;
(*SXQACTR) = (A68_SSBITS)NXQACTR_toi;
 /* line 135: */
 /* line 136: */
TXQACTR = A68_FALSE;
} 
else
{ 
 /* line 137: */
 /* line 138: */
TXQACTR = A68_TRUE;
} 
 /* line 139: */
UXQACTR = TXQACTR;
if ( !UXQACTR ) break;
/*SKIP*/;
}
 /* line 140: */
}
 /* line 141: */
 /* line 142: */
VXQACTR = GXQACTR_table;
} 
A_PROC_EXIT(uniontouniontable);
*ReturnedValue = (VXQACTR);
return;
} 
#undef NL
 /* line 1: */
 /* line 3: */
void VUQACTR(void)   /* initialise DECS unionaids */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel","-dir",".","unionaids.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/vak/Project/Algol/Algol-68RS-Source/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/vak/Project/Algol/Algol-68RS-Source/a68config/a68config.m","./values.m","./modes.m","./environment.m",""};
static A_CONFIG_INFO A_config A_UNUSED;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
OUPACTR();   /* USE values */
DNMACTR();   /* USE modes */
HPIACTR();   /* USE environment */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/unionaids.a68";
A_config.translation_time = "Thu Nov  5 21:38:58 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "UUQACTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 21:38:58 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS unionaids);
(void)(UEAALIB_a68config(LGAALIB_configinfo, ZUQACTR));
 /* line 51: */
 /* line 53: */
 /* line 69: */
 /* line 78: */
 /* line 106: */
 /* line 144: */
 /* line 146: */
 /* line 148: */
/*SKIP*/;
A_PROC_EXIT(DECS unionaids);
} 
#undef NL
/* end of translation of unionaids.a68 */
