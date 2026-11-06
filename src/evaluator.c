/* UNAME:UGVACTR */
#include <algol68/Asupport.h>
struct A68t32 ;
struct A68t33 ;

A_PROCEDURE(A68_VOID ,A68t31,(struct A68t32 *,struct A68t33 ,struct A68t32 *),(struct A68t32 *,struct A68t33 ,struct A68t32 *,void *));
typedef struct A68t31  A68_31 ;    /* PROC(REF MODE32,MODE33) MODE32 */
struct A68t36{
A68_INT  Rdenno;
A_PAD_INT(PAD_1)
};
typedef struct A68t36  A68_36 ;    /* STRUCT(INT)  */
struct A68t37{
A68_INT  Idno;
A_PAD_INT(PAD_2)
};
typedef struct A68t37  A68_37 ;    /* STRUCT(INT)  */
A_ISTRUCT(A68_CHAR ,7,A68t41);
typedef struct A68t41  A68_41 ;    /* STRUCT 7 CHAR */
struct A68t38{
struct A68t41  Name;
A_PAD_ISTRUCT(A68_41 ,PAD_3)
A68_INT  Mode;
A_PAD_INT(PAD_4)
};
typedef struct A68t38  A68_38 ;    /* STRUCT(MODE41,INT)  */
struct A68t39{
A68_INT  Labno;
A_PAD_INT(PAD_5)
};
typedef struct A68t39  A68_39 ;    /* STRUCT(INT)  */
struct A68t40{
A68_INT  Nse;
A_PAD_INT(PAD_6)
};
typedef struct A68t40  A68_40 ;    /* STRUCT(INT)  */
struct A68t33{
A68_INT  Fn;
A_PAD_INT(PAD_7)
A68_INT  Param;
A_PAD_INT(PAD_8)
struct A68t34 * Operands;
};
typedef struct A68t33  A68_33 ;    /* STRUCT(INT,INT,REF MODE34)  */
struct A68t35 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t36  mode2;
struct A68t37  mode4;
struct A68t38  mode5;
A68_VC  mode6;
struct A68t39  mode7;
struct A68t40  mode8;
struct A68t33  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t35  A68_35 ;    /* UNION(LONG BITS,MODE36,VOID,MODE37,MODE38,MODE26,MODE39,MODE40,MODE33)  */
struct A68t32{
A68_INT  Mode;
A_PAD_INT(PAD_9)
A68_BITS  Info;
A_PAD_BITS(PAD_10)
struct A68t35  Extra;
};
typedef struct A68t32  A68_32 ;    /* STRUCT(INT,BITS,MODE35)  */
struct A68t34{
struct A68t32  Value;
struct A68t34 * Rest;
};
typedef struct A68t34  A68_34 ;    /* STRUCT(MODE32,REF MODE34)  */
struct A68t43{
A68_INT  Level;
A_PAD_INT(PAD_11)
A68_INT  Block;
A_PAD_INT(PAD_12)
};
typedef struct A68t43  A68_43 ;    /* STRUCT(INT,INT)  */
struct A68t42{
A68_INT  Mode;
A_PAD_INT(PAD_13)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_14)
struct A68t43  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t41  Prefix;
A_PAD_ISTRUCT(A68_41 ,PAD_15)
A68_BITS  Flags;
A_PAD_BITS(PAD_16)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t42  A68_42 ;    /* STRUCT(INT,INT,MODE43,REF MODE26,REF MODE26,MODE41,BITS,REF MODE26,REF MODE26)  */
struct A68t44{
A68_INT  Mode;
A_PAD_INT(PAD_17)
A68_INT  Resultmode;
A_PAD_INT(PAD_18)
A68_INT  Declevel;
A_PAD_INT(PAD_19)
struct A68t43  Environ;
A68_VC  Name;
struct A68t41  Prefix;
A_PAD_ISTRUCT(A68_41 ,PAD_20)
struct A68t41  Fnprefix;
A_PAD_ISTRUCT(A68_41 ,PAD_21)
struct A68t41  Envprefix;
A_PAD_ISTRUCT(A68_41 ,PAD_22)
A68_BITS  Flags;
A_PAD_BITS(PAD_23)
};
typedef struct A68t44  A68_44 ;    /* STRUCT(INT,INT,INT,MODE43,REF MODE26,MODE41,MODE41,MODE41,BITS)  */
struct A68t46{
struct A68t41  Name;
A_PAD_ISTRUCT(A68_41 ,PAD_24)
A68_BOOL  Set;
A_PAD_BOOL(PAD_25)
};
typedef struct A68t46  A68_46 ;    /* STRUCT(MODE41,BOOL)  */
struct A68t45{
struct A68t46  Label;
struct A68t43  Environ;
A68_VC  Name;
struct A68t41  Prefix;
A_PAD_ISTRUCT(A68_41 ,PAD_26)
A68_BITS  Flags;
A_PAD_BITS(PAD_27)
A68_INT  Alias;
A_PAD_INT(PAD_28)
};
typedef struct A68t45  A68_45 ;    /* STRUCT(MODE46,MODE43,REF MODE26,MODE41,BITS,INT)  */

A_PROCEDURE(struct A68t42 *,A68t47,(A68_INT ),(A68_INT ,void *));
typedef struct A68t47  A68_47 ;    /* PROC(INT) REF MODE42 */

A_PROCEDURE(A68_VOID ,A68t48,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t49,(A68_VC ,struct A68t41 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t41 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t49  A68_49 ;    /* PROC(REF MODE26,MODE41,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t50,(A68_INT ),(A68_INT ,void *));
typedef struct A68t50  A68_50 ;    /* PROC(INT) VOID */
A_ROW(struct A68t42 ,A68t51,1);
typedef struct A68t51  A68_51 ;    /* [] MODE42 */
A_ROW(struct A68t44 ,A68t52,1);
typedef struct A68t52  A68_52 ;    /* [] MODE44 */
A_ROW(struct A68t45 ,A68t53,1);
typedef struct A68t53  A68_53 ;    /* [] MODE45 */

A_PROCEDURE(A68_BOOL ,A68t54,(A68_INT ),(A68_INT ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t55,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t55  A68_55 ;    /* PROC(INT) MODE26 */
struct A68t57 ;

A_PROCEDURE(A68_VOID ,A68t56,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t57 ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t57 ,void *));
typedef struct A68t56  A68_56 ;    /* PROC(INT,INT,INT,INT,REF MODE57) VOID */
A_ROW(A68_INT ,A68t57,1);
typedef struct A68t57  A68_57 ;    /* [] INT */

A_PROCEDURE(A68_BOOL ,A68t58,(A68_VC ),(A68_VC ,void *));
typedef struct A68t58  A68_58 ;    /* PROC(MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t59,(A68_INT ,struct A68t43 *),(A68_INT ,struct A68t43 *,void *));
typedef struct A68t59  A68_59 ;    /* PROC(INT) MODE43 */

A_PROCEDURE(A68_VOID ,A68t60,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t61,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t61  A68_61 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t62,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t62  A68_62 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t63,(void),(void *));
typedef struct A68t63  A68_63 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t64,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t65,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t65  A68_65 ;    /* PROC(INT) REF MODE26 */
struct A68t67 ;

A_PROCEDURE(A68_VOID ,A68t66,(A68_INT ,struct A68t67 ),(A68_INT ,struct A68t67 ,void *));
typedef struct A68t66  A68_66 ;    /* PROC(INT,MODE67) VOID */
A_ROW(A68_VC ,A68t67,1);
typedef struct A68t67  A68_67 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t68,(void),(void *));
typedef struct A68t68  A68_68 ;    /* PROC BITS */
struct A68t69{
A68_INT  Cfile;
A_PAD_INT(PAD_29)
};
typedef struct A68t69  A68_69 ;    /* STRUCT(INT)  */
struct A68t70{
A68_INT  Seedfile;
A_PAD_INT(PAD_30)
};
typedef struct A68t70  A68_70 ;    /* STRUCT(INT)  */
struct A68t71 { A68_INT mode; union {
struct A68t69  mode1;
struct A68t70  mode2;
struct A68t41  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t71  A68_71 ;    /* UNION(MODE69,MODE70,MODE41,VOID)  */

A_PROCEDURE(A68_VOID ,A68t72,(A68_VC ),(A68_VC ,void *));
typedef struct A68t72  A68_72 ;    /* PROC(MODE26) VOID */
A_ROW(A68_BOOL ,A68t73,1);
typedef struct A68t73  A68_73 ;    /* [] BOOL */
struct A68t74{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_31)
A68_VC  Sourcefile;
struct A68t41  Nameseed;
A_PAD_ISTRUCT(A68_41 ,PAD_32)
struct A68t71  Nameseedorigin;
struct A68t75 * Used_modules;
A68_VC  Commandline;
struct A68t76 * Environment;
};
typedef struct A68t74  A68_74 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE41,MODE71,REF MODE75,REF MODE26,REF MODE76)  */
struct A68t75{
A68_VC  Modinfo_file;
struct A68t75 * Next;
};
typedef struct A68t75  A68_75 ;    /* STRUCT(REF MODE26,REF MODE75)  */
struct A68t76{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t76 * Next;
};
typedef struct A68t76  A68_76 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE76)  */
struct A68t78 ;
struct A68t79 ;

A_PROCEDURE(struct A68t78 *,A68t77,(A68_VC ,struct A68t79 *,A68_VC *),(A68_VC ,struct A68t79 *,A68_VC *,void *));
typedef struct A68t77  A68_77 ;    /* PROC(MODE26,REF MODE79,REF REF MODE26) REF MODE78 */
struct A68t78{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t78  A68_78 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t79{
A68_VC  Dir;
struct A68t79 * Next;
};
typedef struct A68t79  A68_79 ;    /* STRUCT(REF MODE26,REF MODE79)  */

A_PROCEDURE(A68_VOID ,A68t80,(struct A68t32 *,struct A68t32 **),(struct A68t32 *,struct A68t32 **,void *));
typedef struct A68t80  A68_80 ;    /* PROC(REF MODE32,REF REF MODE32) VOID */

A_PROCEDURE(A68_VOID ,A68t81,(struct A68t32 *,struct A68t32 **,A68_BITS ),(struct A68t32 *,struct A68t32 **,A68_BITS ,void *));
typedef struct A68t81  A68_81 ;    /* PROC(REF MODE32,REF REF MODE32,BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t82,(struct A68t32 *,struct A68t32 **,struct A68t32 **),(struct A68t32 *,struct A68t32 **,struct A68t32 **,void *));
typedef struct A68t82  A68_82 ;    /* PROC(REF MODE32,REF REF MODE32,REF REF MODE32) VOID */

A_PROCEDURE(A68_VOID ,A68t83,(struct A68t32 *),(struct A68t32 *,void *));
typedef struct A68t83  A68_83 ;    /* PROC(REF MODE32) VOID */
struct A68t85 ;

A_PROCEDURE(A68_VOID ,A68t84,(struct A68t85 ),(struct A68t85 ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(MODE85) VOID */
A_VECTOR(struct A68t86 ,A68t85);
typedef struct A68t85  A68_85 ;    /* VECTOR [] MODE86 */
struct A68t86 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_SINT  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t86  A68_86 ;    /* UNION(CHAR,MODE26,SHORT INT)  */
struct A68t88 ;

A_PROCEDURE(A68_VOID ,A68t87,(struct A68t88 ,A68_INT ),(struct A68t88 ,A68_INT ,void *));
typedef struct A68t87  A68_87 ;    /* PROC(MODE88,INT) VOID */
A_VECTOR(struct A68t89 ,A68t88);
typedef struct A68t88  A68_88 ;    /* VECTOR [] MODE89 */
struct A68t89 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_INT  mode3;
A68_SINT  mode4;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t89  A68_89 ;    /* UNION(CHAR,MODE26,INT,SHORT INT)  */

A_PROCEDURE(A68_VOID ,A68t90,(struct A68t71 ),(struct A68t71 ,void *));
typedef struct A68t90  A68_90 ;    /* PROC(MODE71) VOID */

A_PROCEDURE(struct A68t41 ,A68t91,(void),(void *));
typedef struct A68t91  A68_91 ;    /* PROC MODE41 */

A_PROCEDURE(A68_VOID ,A68t92,(struct A68t41 ),(struct A68t41 ,void *));
typedef struct A68t92  A68_92 ;    /* PROC(MODE41) VOID */

A_PROCEDURE(A68_VOID ,A68t93,(struct A68t71 ,A68_VC *),(struct A68t71 ,A68_VC *,void *));
typedef struct A68t93  A68_93 ;    /* PROC(MODE71) MODE26 */
struct A68t94{
A68_INT  Parameters;
A_PAD_INT(PAD_33)
A68_INT  Result;
A_PAD_INT(PAD_34)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_35)
};
typedef struct A68t94  A68_94 ;    /* STRUCT(INT,INT,BOOL)  */
A_ISTRUCT(A68_CHAR ,32,A68t96);
typedef struct A68t96  A68_96 ;    /* STRUCT 32 CHAR */
struct A68t95{
A68_INT  Mode;
A_PAD_INT(PAD_36)
A68_INT  Offset;
A_PAD_INT(PAD_37)
struct A68t96  Name;
A_PAD_ISTRUCT(A68_96 ,PAD_38)
};
typedef struct A68t95  A68_95 ;    /* STRUCT(INT,INT,MODE96)  */
struct A68t98 ;

A_PROCEDURE(A68_VOID ,A68t97,(A68_INT ,struct A68t98 *),(A68_INT ,struct A68t98 *,void *));
typedef struct A68t97  A68_97 ;    /* PROC(INT) REF MODE98 */
A_VECTOR(A68_INT ,A68t98);
typedef struct A68t98  A68_98 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t99,(struct A68t95 *,A68_VC *),(struct A68t95 *,A68_VC *,void *));
typedef struct A68t99  A68_99 ;    /* PROC(REF MODE95) MODE26 */

A_PROCEDURE(A68_VOID ,A68t100,(A68_INT ,A68_VC ,struct A68t38 *),(A68_INT ,A68_VC ,struct A68t38 *,void *));
typedef struct A68t100  A68_100 ;    /* PROC(INT,MODE26) MODE38 */

A_PROCEDURE(A68_INT ,A68t101,(A68_INT ),(A68_INT ,void *));
typedef struct A68t101  A68_101 ;    /* PROC(INT) INT */
struct A68t103 ;

A_PROCEDURE(A68_VOID ,A68t102,(struct A68t103 ,A68_INT ),(struct A68t103 ,A68_INT ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(REF MODE103,INT) VOID */
A_ROW(struct A68t104 ,A68t103,1);
typedef struct A68t103  A68_103 ;    /* [] MODE104 */
struct A68t114{
A68_INT  Mode;
A_PAD_INT(PAD_39)
};
typedef struct A68t114  A68_114 ;    /* STRUCT(INT)  */
struct A68t104 { A68_INT mode; union {
A68_INT  mode1;
struct A68t105 * mode2;
struct A68t106 * mode3;
struct A68t107 * mode4;
struct A68t108 * mode5;
struct A68t109 * mode6;
struct A68t110 * mode7;
struct A68t111 * mode8;
struct A68t112 * mode9;
struct A68t113 * mode10;
struct A68t114  mode11;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t104  A68_104 ;    /* UNION(INT,REF MODE105,REF MODE106,REF MODE107,REF MODE108,REF MODE109,REF MODE110,REF MODE111,REF MODE112,REF MODE113,MODE114)  */
struct A68t105{
A68_INT  Rdenno;
A_PAD_INT(PAD_40)
struct A68t118 * Modelist;
};
typedef struct A68t105  A68_105 ;    /* STRUCT(INT,REF MODE118)  */
struct A68t106{
A68_INT  Deproc;
A_PAD_INT(PAD_41)
struct A68t118 * Pars;
};
typedef struct A68t106  A68_106 ;    /* STRUCT(INT,REF MODE118)  */
struct A68t107{
A68_INT  Rdenno;
A_PAD_INT(PAD_42)
A68_INT  Deflex;
A_PAD_INT(PAD_43)
struct A68t117 * Sels;
};
typedef struct A68t107  A68_107 ;    /* STRUCT(INT,INT,REF MODE117)  */
struct A68t108{
A68_INT  Rdenno;
A_PAD_INT(PAD_44)
A68_INT  Imode;
A_PAD_INT(PAD_45)
A68_INT  Length;
A_PAD_INT(PAD_46)
A68_INT  Deflex;
A_PAD_INT(PAD_47)
};
typedef struct A68t108  A68_108 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t109{
A68_INT  Deproc;
A_PAD_INT(PAD_48)
};
typedef struct A68t109  A68_109 ;    /* STRUCT(INT)  */
struct A68t110{
A68_INT  Rdenno;
A_PAD_INT(PAD_49)
A68_INT  Vecmode;
A_PAD_INT(PAD_50)
A68_INT  Deflex;
A_PAD_INT(PAD_51)
};
typedef struct A68t110  A68_110 ;    /* STRUCT(INT,INT,INT)  */
struct A68t111{
A68_INT  Rdenno;
A_PAD_INT(PAD_52)
A68_INT  Mode;
A_PAD_INT(PAD_53)
A68_INT  Nods;
A_PAD_INT(PAD_54)
A68_INT  Deflex;
A_PAD_INT(PAD_55)
};
typedef struct A68t111  A68_111 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t112{
A68_INT  Mode;
A_PAD_INT(PAD_56)
struct A68t116 * Stenlist;
};
typedef struct A68t112  A68_112 ;    /* STRUCT(INT,REF MODE116)  */
struct A68t113{
A68_INT  Mode;
A_PAD_INT(PAD_57)
A68_INT  Modeproc;
A_PAD_INT(PAD_58)
struct A68t115 * El;
};
typedef struct A68t113  A68_113 ;    /* STRUCT(INT,INT,REF MODE115)  */
struct A68t115{
struct A68t113 * Am;
struct A68t115 * Rest;
};
typedef struct A68t115  A68_115 ;    /* STRUCT(REF MODE113,REF MODE115)  */
struct A68t116{
A68_INT  Mode;
A_PAD_INT(PAD_59)
A68_INT  Rdenno;
A_PAD_INT(PAD_60)
struct A68t116 * Rest;
};
typedef struct A68t116  A68_116 ;    /* STRUCT(INT,INT,REF MODE116)  */
struct A68t117{
A68_INT  Mode;
A_PAD_INT(PAD_61)
A68_INT  Fieldno;
A_PAD_INT(PAD_62)
struct A68t96  Name;
A_PAD_ISTRUCT(A68_96 ,PAD_63)
struct A68t117 * Rest;
};
typedef struct A68t117  A68_117 ;    /* STRUCT(INT,INT,MODE96,REF MODE117)  */
struct A68t118{
A68_INT  Mode;
A_PAD_INT(PAD_64)
struct A68t118 * Rest;
};
typedef struct A68t118  A68_118 ;    /* STRUCT(INT,REF MODE118)  */

A_PROCEDURE(A68_VOID ,A68t119,(A68_INT ,struct A68t94 *),(A68_INT ,struct A68t94 *,void *));
typedef struct A68t119  A68_119 ;    /* PROC(INT) MODE94 */
struct A68t121 ;

A_PROCEDURE(A68_VOID ,A68t120,(A68_INT ,struct A68t121 *),(A68_INT ,struct A68t121 *,void *));
typedef struct A68t120  A68_120 ;    /* PROC(INT) REF MODE121 */
A_VECTOR(struct A68t95 ,A68t121);
typedef struct A68t121  A68_121 ;    /* VECTOR [] MODE95 */

A_PROCEDURE(A68_INT ,A68t122,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t122  A68_122 ;    /* PROC(INT,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t123,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t123  A68_123 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t124,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(INT,INT) MODE26 */
struct A68t125{
struct A68t32 * Value;
struct A68t46 * End;
A68_INT  Type;
A_PAD_INT(PAD_65)
};
typedef struct A68t125  A68_125 ;    /* STRUCT(REF MODE32,REF MODE46,INT)  */

A_PROCEDURE(A68_BOOL ,A68t126,(struct A68t32 *,struct A68t32 *),(struct A68t32 *,struct A68t32 *,void *));
typedef struct A68t126  A68_126 ;    /* PROC(REF MODE32,REF MODE32) BOOL */

A_PROCEDURE(A68_BOOL ,A68t127,(struct A68t32 *),(struct A68t32 *,void *));
typedef struct A68t127  A68_127 ;    /* PROC(REF MODE32) BOOL */

A_PROCEDURE(A68_BOOL ,A68t128,(struct A68t32 *,A68_LBITS ),(struct A68t32 *,A68_LBITS ,void *));
typedef struct A68t128  A68_128 ;    /* PROC(REF MODE32,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t129,(struct A68t32 *),(struct A68t32 *,void *));
typedef struct A68t129  A68_129 ;    /* PROC(REF MODE32) LONG BITS */

A_PROCEDURE(A68_VOID ,A68t130,(struct A68t32 *,A68_VC *),(struct A68t32 *,A68_VC *,void *));
typedef struct A68t130  A68_130 ;    /* PROC(REF MODE32) MODE26 */

A_PROCEDURE(struct A68t32 *,A68t131,(struct A68t32 *,A68_INT ),(struct A68t32 *,A68_INT ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(REF MODE32,INT) REF MODE32 */

A_PROCEDURE(A68_INT ,A68t132,(struct A68t33 ),(struct A68t33 ,void *));
typedef struct A68t132  A68_132 ;    /* PROC(MODE33) INT */

A_PROCEDURE(A68_BOOL ,A68t133,(struct A68t32 *,A68_BITS ),(struct A68t32 *,A68_BITS ,void *));
typedef struct A68t133  A68_133 ;    /* PROC(REF MODE32,BITS) BOOL */

A_PROCEDURE(struct A68t32 *,A68t134,(struct A68t34 *,A68_INT ),(struct A68t34 *,A68_INT ,void *));
typedef struct A68t134  A68_134 ;    /* PROC(REF MODE34,INT) REF MODE32 */

A_PROCEDURE(A68_INT ,A68t135,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t135  A68_135 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(struct A68t34 *,A68t136,(struct A68t34 *),(struct A68t34 *,void *));
typedef struct A68t136  A68_136 ;    /* PROC(REF MODE34) REF MODE34 */
struct A68t138 ;

A_PROCEDURE(struct A68t32 *,A68t137,(A68_INT ,A68_INT ,A68_BITS ,struct A68t138 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t138 ,void *));
typedef struct A68t137  A68_137 ;    /* PROC(INT,INT,BITS,MODE138) REF MODE32 */
A_VECTOR(struct A68t32 *,A68t138);
typedef struct A68t138  A68_138 ;    /* VECTOR [] REF MODE32 */

A_PROCEDURE(A68_VOID ,A68t139,(struct A68t32 *,A68_BOOL ,A68_VC *),(struct A68t32 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t139  A68_139 ;    /* PROC(REF MODE32,BOOL) MODE26 */

A_PROCEDURE(A68_LINT ,A68t140,(struct A68t32 ),(struct A68t32 ,void *));
typedef struct A68t140  A68_140 ;    /* PROC(MODE32) LONG INT */
struct A68t141 { A68_INT mode; union {
struct A68t32 * mode1;
A68_VC  mode2;
struct A68t38  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t141  A68_141 ;    /* UNION(REF MODE32,MODE26,MODE38)  */

A_PROCEDURE(A68_VOID ,A68t142,(struct A68t141 ,A68_VC *),(struct A68t141 ,A68_VC *,void *));
typedef struct A68t142  A68_142 ;    /* PROC(MODE141) MODE26 */
struct A68t144 ;

A_PROCEDURE(A68_VOID ,A68t143,(struct A68t144 ,A68_VC *),(struct A68t144 ,A68_VC *,void *));
typedef struct A68t143  A68_143 ;    /* PROC(MODE144) MODE26 */
A_VECTOR(struct A68t141 ,A68t144);
typedef struct A68t144  A68_144 ;    /* VECTOR [] MODE141 */

A_PROCEDURE(A68_VOID ,A68t145,(A68_VC ,struct A68t144 ,A68_VC *),(A68_VC ,struct A68t144 ,A68_VC *,void *));
typedef struct A68t145  A68_145 ;    /* PROC(MODE26,MODE144) MODE26 */

A_PROCEDURE(A68_VOID ,A68t146,(struct A68t144 ),(struct A68t144 ,void *));
typedef struct A68t146  A68_146 ;    /* PROC(MODE144) VOID */

A_PROCEDURE(A68_VOID ,A68t147,(A68_VC ,A68_INT ,struct A68t144 ,struct A68t38 *),(A68_VC ,A68_INT ,struct A68t144 ,struct A68t38 *,void *));
typedef struct A68t147  A68_147 ;    /* PROC(MODE26,INT,MODE144) MODE38 */

A_PROCEDURE(struct A68t32 *,A68t148,(struct A68t32 *),(struct A68t32 *,void *));
typedef struct A68t148  A68_148 ;    /* PROC(REF MODE32) REF MODE32 */

A_PROCEDURE(struct A68t32 *,A68t149,(A68_VC ,struct A68t32 *),(A68_VC ,struct A68t32 *,void *));
typedef struct A68t149  A68_149 ;    /* PROC(MODE26,REF MODE32) REF MODE32 */

A_PROCEDURE(A68_INT ,A68t150,(struct A68t98 ,struct A68t98 ),(struct A68t98 ,struct A68t98 ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(REF MODE98,REF MODE98) INT */

A_PROCEDURE(A68_VOID ,A68t151,(A68_INT ,struct A68t98 ,struct A68t57 *),(A68_INT ,struct A68t98 ,struct A68t57 *,void *));
typedef struct A68t151  A68_151 ;    /* PROC(INT,REF MODE98) MODE57 */

A_PROCEDURE(A68_VOID ,A68t152,(struct A68t98 ,struct A68t98 ,A68_VC *),(struct A68t98 ,struct A68t98 ,A68_VC *,void *));
typedef struct A68t152  A68_152 ;    /* PROC(REF MODE98,REF MODE98) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t153,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t153  A68_153 ;    /* PROC(INT,MODE26) BOOL */

A_PROCEDURE(A68_INT ,A68t154,(A68_VC ),(A68_VC ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t155,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t155  A68_155 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t156,(struct A68t63 ),(struct A68t63 ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(MODE63) VOID */

A_PROCEDURE(A68_VOID ,A68t157,(struct A68t72 ),(struct A68t72 ,void *));
typedef struct A68t157  A68_157 ;    /* PROC(MODE72) VOID */

A_PROCEDURE(A68_VOID ,A68t158,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,59,A68t159);
typedef struct A68t159  A68_159 ;    /* STRUCT 59 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t160);
typedef struct A68t160  A68_160 ;    /* STRUCT 24 CHAR */

A_PROCEDURE(A68_VOID ,A68t161,(struct A68t32 *,A68_BOOL ),(struct A68t32 *,A68_BOOL ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(REF MODE32,BOOL) VOID */
A_ISTRUCT(A68_CHAR ,26,A68t162);
typedef struct A68t162  A68_162 ;    /* STRUCT 26 CHAR */
A_ROW(struct A68t31 ,A68t163,1);
typedef struct A68t163  A68_163 ;    /* [] MODE31 */
A_ISTRUCT(A68_CHAR ,40,A68t164);
typedef struct A68t164  A68_164 ;    /* STRUCT 40 CHAR */
A_ISTRUCT(A68_CHAR ,53,A68t165);
typedef struct A68t165  A68_165 ;    /* STRUCT 53 CHAR */
A_ISTRUCT(A68_CHAR ,48,A68t166);
typedef struct A68t166  A68_166 ;    /* STRUCT 48 CHAR */
A_ISTRUCT(A68_CHAR ,44,A68t167);
typedef struct A68t167  A68_167 ;    /* STRUCT 44 CHAR */
A_ISTRUCT(A68_CHAR ,49,A68t168);
typedef struct A68t168  A68_168 ;    /* STRUCT 49 CHAR */
A_ISTRUCT(struct A68t31 ,51,A68t169);
typedef struct A68t169  A68_169 ;    /* STRUCT 51 MODE31 */
A_ISTRUCT(A68_CHAR ,43,A68t170);
typedef struct A68t170  A68_170 ;    /* STRUCT 43 CHAR */

A_PROCEDURE(struct A68t32 *,A68t171,(struct A68t32 *,struct A68t32 ),(struct A68t32 *,struct A68t32 ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(REF MODE32,MODE32) REF MODE32 */

A_PROCEDURE(struct A68t35 *,A68t172,(struct A68t35 *,struct A68t35 ),(struct A68t35 *,struct A68t35 ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(REF MODE35,MODE35) REF MODE35 */
#define A68_173  A68_VC 
#define A68t173 A68t26            /* FLEX VECTOR [] CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t174);
typedef struct A68t174  A68_174 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t175);
typedef struct A68t175  A68_175 ;    /* STRUCT 11 CHAR */

A_PROCEDURE(A68_VOID ,A68t176,(struct A68t34 **),(struct A68t34 **,void *));
typedef struct A68t176  A68_176 ;    /* PROC(REF REF MODE34) VOID */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from moduletracer --- */
/* --- End of imports from moduletracer --- */


/* --- Imports from unionaids --- */
/* --- End of imports from unionaids --- */


/* --- Imports from values --- */
extern A68_BITS  PKJACTR_defaultinfo;
extern A68_34 * MKJACTR_nilvaluelist;
extern A68_34 * WEQACTR_reversevaluelist(struct A68t34 *);
extern A68_32  DLJACTR_skipvalue;
/* --- End of imports from values --- */


/* --- Imports from incvalue --- */
/* --- End of imports from incvalue --- */


/* --- Imports from modes --- */
/* --- End of imports from modes --- */


/* --- Imports from incmode --- */
/* --- End of imports from incmode --- */


/* --- Imports from uniquenameserver --- */
/* --- End of imports from uniquenameserver --- */


/* --- Imports from coutput --- */
/* --- End of imports from coutput --- */


/* --- Imports from evalbase --- */
extern A68_83  JYQACTR_evaluate;
/* --- End of imports from evalbase --- */


/* --- Imports from environment --- */
extern A68_VOID  WXIACTR_assert(A68_VC ,A68_BOOL );
extern A68_BITS  PJJACTR_tracelevelflags(void);
extern A68_BOOL  LJJACTR_traceon;
extern A68_VOID  JXIACTR_warning(A68_INT );
/* --- End of imports from environment --- */


/* --- Imports from centities --- */
/* --- End of imports from centities --- */


/* --- Imports from idtable --- */
/* --- End of imports from idtable --- */


/* --- Imports from operators --- */
extern A68_VOID  FGRACTR_simpleindexop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  DMRACTR_trimindexop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  OTRACTR_straightindexop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  YURACTR_straighten(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  XYRACTR_assignop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  EBSACTR_derefop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  HCSACTR_callop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  RISACTR_voidop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  BKSACTR_niltomodeop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  XNSACTR_rowstorowrows(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  WOSACTR_vectortorow(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_31  QYSACTR_scalartovector;
extern A68_VOID  MPSACTR_modetostruct1mode(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  BQSACTR_unitesimple(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  SRSACTR_uniteunion(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  ZUSACTR_istructtorow(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  HTSACTR_istructtovector(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  UYSACTR_skiptomode(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_31  OYSACTR_scalartorow;
extern A68_VOID  XATACTR_vacuum(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  WBTACTR_staticgenerator(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  WCRACTR_staticpartgenerator(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  UDRACTR_selectop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  UERACTR_copytoflex(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  DRRACTR_dynamicgenerator(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  RKSACTR_gototoproc(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  ELSACTR_gototomode(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  VMSACTR_inttoreal(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  FNSACTR_realtocomplex(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  CZSACTR_deunite(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  RZSACTR_bitstorowbool(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  KBTACTR_ytypetom(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  QBTACTR_mtoxtype(struct A68t32 *,struct A68t33 ,A68_32 *);
/* --- End of imports from operators --- */


/* --- Imports from adicops --- */
extern A68_VOID  HGVACTR_dyadicsem(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  XBUACTR_monadicsem(struct A68t32 *,struct A68t33 ,A68_32 *);
/* --- End of imports from adicops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void BCHACTR(void);   /* moduletracer */
extern void DVQACTR(void);   /* unionaids */
extern void OUPACTR(void);   /* values */
extern void GKJACTR(void);   /* incvalue */
extern void DNMACTR(void);   /* modes */
extern void ZDAACTR(void);   /* incmode */
extern void RHMACTR(void);   /* uniquenameserver */
extern void PTLACTR(void);   /* coutput */
extern void EYQACTR(void);   /* evalbase */
extern void HPIACTR(void);   /* environment */
extern void THAACTR(void);   /* centities */
extern void PPKACTR(void);   /* idtable */
extern void ZZQACTR(void);   /* operators */
extern void BITACTR(void);   /* adicops */
/* --- end of DECS initialisation functions --- */
static A68_159   YGVACTR = {"$Id: evaluator.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,ZGVACTR,YGVACTR,59)
static A68_160   EHVACTR = {"/* UNIMPLEMENTED OPER */"}; 
A_GISVEC(A68_VC ,FHVACTR,EHVACTR,24)
A68_161  JHVACTR_calltrace A_UNUSED;
#define KHVACTR_tracealllevels 0X800000U
static A68_162   OHVACTR = {"EVALUATE - spare op number"}; 
A_GISVEC(A68_VC ,PHVACTR,OHVACTR,26)
static A68_164   ZHVACTR = {"EVALUATE - trim implemented by trimindex"}; 
A_GISVEC(A68_VC ,AIVACTR,ZHVACTR,40)
static A68_165   JIVACTR = {"EVALUATE - boundpack implemented by dynamic generator"}; 
A_GISVEC(A68_VC ,KIVACTR,JIVACTR,53)
static A68_166   UIVACTR = {"EVALUATE - prestraight implemented by straighten"}; 
A_GISVEC(A68_VC ,VIVACTR,UIVACTR,48)
static A68_167   DJVACTR = {"EVALUATE - default bound implemented by load"}; 
A_GISVEC(A68_VC ,EJVACTR,DJVACTR,44)
static A68_168   TJVACTR = {"EVALUATE - 25 68R inttobits no longer implemented"}; 
A_GISVEC(A68_VC ,UJVACTR,TJVACTR,49)
static A68_163  WKVACTR_opersemantics A_UNUSED;
static A68_170   ZKVACTR = {"EVALUATE - evaluator passed a NIL reference"}; 
A_GISVEC(A68_VC ,ALVACTR,ZKVACTR,43)
static A68_41   VLVACTR = {"A68_NIL"}; 
A_GISVEC(A68_VC ,WLVACTR,VLVACTR,7)
static A68_174   ZLVACTR = {"EVALUATE - Unknown NSE"}; 
A_GISVEC(A68_VC ,AMVACTR,ZLVACTR,22)
static A68_175   GMVACTR = {"/* VOID? */"}; 
A_GISVEC(A68_VC ,HMVACTR,GMVACTR,11)
static A68_166   KMVACTR = {"EVALUATE - evaluation not defined for this value"}; 
A_GISVEC(A68_VC ,LMVACTR,KMVACTR,48)

A_STATIC A68_VOID  CHVACTR_unimplementedop(A68_32 * Root, A68_33  Oper, A68_32  *ReturnedValue);

A_STATIC A68_VOID  NHVACTR_spareop(A68_32 * Value, A68_33  Oper, A68_32  *ReturnedValue);

A_STATIC A68_VOID  YHVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue);

A_STATIC A68_VOID  IIVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue);

A_STATIC A68_VOID  TIVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue);

A_STATIC A68_VOID  CJVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue);

A_STATIC A68_VOID  SJVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue);

A_STATIC A68_VOID  YKVACTR_evalnotrace(A68_32 * Root);

A_STATIC A68_32 * FLVACTR_assignment(A68_32 * DLVACTR_anonymous, A68_32  ELVACTR_anonymous);

A_STATIC A68_35 * KLVACTR_assignment(A68_35 * ILVACTR_anonymous, A68_35  JLVACTR_anonymous);

A_STATIC A68_VOID  NMVACTR_evaltrace(A68_32 * Root);

A68_VOID  SMVACTR_evaluatestack(A68_34 ** Valuestack);

A68_VOID  UMVACTR_initialiseevaluator(void);

A_STATIC A68_35 * KLVACTR_assignment(A68_35 * ILVACTR_anonymous, A68_35  JLVACTR_anonymous)
{ 
A68_35  LLVACTR;  /* united object - for case conformity */
A68_VC  MLVACTR_anonymous A_UNUSED = {0};
A68_VC  NLVACTR;  /* OPERATORS - copy to flex */
A68_173 * OLVACTR;  /* YIELD */
A68_35 * PLVACTR;  /* clause result */
{ 
(*A_NILCHECK(ILVACTR_anonymous)) = JLVACTR_anonymous;
LLVACTR = JLVACTR_anonymous ;
switch ( LLVACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
MLVACTR_anonymous = (LLVACTR.data.mode6);
OLVACTR = &(ILVACTR_anonymous-> data.mode6) ;
(void)((*A_NILCHECK(OLVACTR)) = A_VCOPY(MLVACTR_anonymous,NLVACTR,A68_CHAR ));
break;
default: 
/*SKIP*/;
break;
} 
PLVACTR = ILVACTR_anonymous;
} 
return( PLVACTR );
} 
#undef NL

A_STATIC A68_32 * FLVACTR_assignment(A68_32 * DLVACTR_anonymous, A68_32  ELVACTR_anonymous)
{ 
A68_INT * GLVACTR;  /* YIELD */
A68_BITS * HLVACTR;  /* YIELD */
A68_32 * QLVACTR;  /* clause result */
{ 
GLVACTR = (&(A_NILCHECK(DLVACTR_anonymous)->Mode)) ;
(*A_NILCHECK(GLVACTR)) = ELVACTR_anonymous.Mode;
HLVACTR = (&(A_NILCHECK(DLVACTR_anonymous)->Info)) ;
(*A_NILCHECK(HLVACTR)) = ELVACTR_anonymous.Info;
(void)(KLVACTR_assignment((&(A_NILCHECK(DLVACTR_anonymous)->Extra)), ELVACTR_anonymous.Extra));
QLVACTR = DLVACTR_anonymous;
} 
return( QLVACTR );
} 
#undef NL

A_STATIC A68_VOID  CHVACTR_unimplementedop(A68_32 * Root, A68_33  Oper, A68_32  *ReturnedValue)
{ 
A68_32  DHVACTR;  /* collateral clause result */
A68_35  GHVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  HHVACTR;  /* YIELD */
A68_32  IHVACTR;  /* clause result */
A_PROC_ENTRY(unimplementedop);
 /* line 47: */
 /* line 48: */
{ 
DHVACTR.Mode = (*A_NILCHECK((&(A_NILCHECK(Root)->Mode))));
DHVACTR.Info = PKJACTR_defaultinfo;
 /* line 49: */
HHVACTR = FHVACTR ;
DHVACTR.Extra = A_UNITE(GHVACTR,mode6,6,HHVACTR);
IHVACTR = DHVACTR;
} 
A_PROC_EXIT(unimplementedop);
*ReturnedValue = (IHVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  NHVACTR_spareop(A68_32 * Value, A68_33  Oper, A68_32  *ReturnedValue)
{ 
A68_32  QHVACTR;  /* clause result */
A_PROC_ENTRY(spareop);
 /* line 56: */
{ 
(void)(WXIACTR_assert(PHVACTR, A68_FALSE));
QHVACTR = DLJACTR_skipvalue;
} 
A_PROC_EXIT(spareop);
*ReturnedValue = (QHVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  YHVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue)
{ 
A68_32  BIVACTR;  /* clause result */
 /* line 64: */
{ 
(void)(WXIACTR_assert(AIVACTR, A68_FALSE));
BIVACTR = DLJACTR_skipvalue;
} 
*ReturnedValue = (BIVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  IIVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue)
{ 
A68_32  LIVACTR;  /* clause result */
A68_32  MIVACTR = {0};  /* OPERATORS - skip to mode */
 /* line 69: */
{ 
(void)(WXIACTR_assert(KIVACTR, A68_FALSE));
LIVACTR = MIVACTR;
} 
*ReturnedValue = (LIVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  TIVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue)
{ 
A68_32  WIVACTR;  /* clause result */
 /* line 74: */
{ 
(void)(WXIACTR_assert(VIVACTR, A68_FALSE));
WIVACTR = DLJACTR_skipvalue;
} 
*ReturnedValue = (WIVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  CJVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue)
{ 
A68_32  FJVACTR;  /* clause result */
A68_32  GJVACTR = {0};  /* OPERATORS - skip to mode */
 /* line 78: */
{ 
(void)(WXIACTR_assert(EJVACTR, A68_FALSE));
FJVACTR = GJVACTR;
} 
*ReturnedValue = (FJVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  SJVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue)
{ 
A68_32  VJVACTR;  /* clause result */
 /* line 88: */
{ 
(void)(WXIACTR_assert(UJVACTR, A68_FALSE));
VJVACTR = DLJACTR_skipvalue;
} 
*ReturnedValue = (VJVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  YKVACTR_evalnotrace(A68_32 * Root)
{ 
A68_35  BLVACTR;  /* united object - for case conformity */
A68_33  CLVACTR_rator A_UNUSED = {0};
A68_INT  RLVACTR;  /* YIELD */
A68_31  SLVACTR;  /* CALL */
A68_32  TLVACTR;  /* avoid structure result */
A68_40  ULVACTR_nihil A_UNUSED = {0};
A68_35  XLVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  YLVACTR;  /* YIELD */
A68_36  BMVACTR_r A_UNUSED = {0};
A68_37  CMVACTR_id A_UNUSED = {0};
A68_38  DMVACTR_temp A_UNUSED = {0};
A68_39  EMVACTR_label A_UNUSED = {0};
A68_VC  FMVACTR_cf A_UNUSED = {0};
A68_35  IMVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  JMVACTR;  /* YIELD */
A_PROC_ENTRY(evalnotrace);
 /* line 120: */
 /* line 121: */
{ 
(void)(WXIACTR_assert(ALVACTR, (Root!=(A68_32 *)A68_NIL)));
 /* line 122: */
 /* line 123: */
BLVACTR = (*A_NILCHECK((&(A_NILCHECK(Root)->Extra)))) ;
switch ( BLVACTR.mode )
{ 
case 9: /* STRUCT(INT,INT,REF MODE34)  */
CLVACTR_rator = (BLVACTR.data.mode9);
 /* line 124: */
 /* line 126: */
RLVACTR = CLVACTR_rator.Fn ;
SLVACTR = A_R1INDEX(WKVACTR_opersemantics,RLVACTR) ;
A_CALLPROC(SLVACTR,(Root, CLVACTR_rator, &TLVACTR),(Root, CLVACTR_rator, &TLVACTR,(SLVACTR).nonlocals));
(void)(FLVACTR_assignment(Root, TLVACTR));
break;
case 8: /* STRUCT(INT)  */
ULVACTR_nihil = (BLVACTR.data.mode8);
 /* line 127: */
 /* line 128: */
switch ( ULVACTR_nihil.Nse )
{ 
case 1: 
 /* line 129: */
/*SKIP*/;
break;
case 2: 
 /* line 130: */
/*SKIP*/;
break;
case 3: 
 /* line 131: */
YLVACTR = WLVACTR ;
(void)(KLVACTR_assignment((&(A_NILCHECK(Root)->Extra)), A_UNITE(XLVACTR,mode6,6,YLVACTR)));
break;
default: 
(void)(WXIACTR_assert(AMVACTR, A68_FALSE));
 /* line 132: */
 /* line 134: */
/*SKIP*/;
break;
} 
break;
case 1: /* LONG BITS */
 /* line 135: */
 /* line 137: */
/*SKIP*/;
break;
case 2: /* STRUCT(INT)  */
BMVACTR_r = (BLVACTR.data.mode2);
 /* line 138: */
 /* line 140: */
/*SKIP*/;
break;
case 4: /* STRUCT(INT)  */
CMVACTR_id = (BLVACTR.data.mode4);
 /* line 141: */
 /* line 143: */
/*SKIP*/;
break;
case 5: /* STRUCT(MODE41,INT)  */
DMVACTR_temp = (BLVACTR.data.mode5);
 /* line 144: */
 /* line 146: */
/*SKIP*/;
break;
case 7: /* STRUCT(INT)  */
EMVACTR_label = (BLVACTR.data.mode7);
 /* line 147: */
 /* line 149: */
/*SKIP*/;
break;
case 6: /* VECTOR [] CHAR */
FMVACTR_cf = (BLVACTR.data.mode6);
 /* line 150: */
 /* line 152: */
/*SKIP*/;
break;
case 3: /* VOID */
 /* line 153: */
 /* line 155: */
JMVACTR = HMVACTR ;
(void)(KLVACTR_assignment((&(A_NILCHECK(Root)->Extra)), A_UNITE(IMVACTR,mode6,6,JMVACTR)));
break;
default: 
 /* line 156: */
 /* line 157: */
(void)(WXIACTR_assert(LMVACTR, A68_FALSE));
break;
} 
} 
A_PROC_EXIT(evalnotrace);
return;
} 
#undef NL

A_STATIC A68_VOID  NMVACTR_evaltrace(A68_32 * Root)
{ 
A68_BITS  OMVACTR;  /* ADICOPS - >= */
A68_83  PMVACTR;  /* procedure value */
A68_83  QMVACTR;  /* procedure value */
A_PROC_ENTRY(evaltrace);
 /* line 164: */
 /* line 165: */
{ 
(void)(A_CALLPROC(JHVACTR_calltrace,(Root, A68_FALSE),(Root, A68_FALSE,(JHVACTR_calltrace).nonlocals)));
 /* line 166: */
 /* line 167: */
OMVACTR = PJJACTR_tracelevelflags() ;
if (A_LB_GE(OMVACTR,KHVACTR_tracealllevels))
{ 
 /* line 169: */
 /* line 170: */
(void)(YKVACTR_evalnotrace(Root));
} 
else
{ 
PMVACTR.fn.fn_global = YKVACTR_evalnotrace;
PMVACTR.nonlocals = A68_NIL;
JYQACTR_evaluate = PMVACTR;
 /* line 171: */
(void)(YKVACTR_evalnotrace(Root));
 /* line 172: */
 /* line 173: */
QMVACTR.fn.fn_global = NMVACTR_evaltrace;
QMVACTR.nonlocals = A68_NIL;
JYQACTR_evaluate = QMVACTR;
} 
 /* line 174: */
 /* line 175: */
(void)(A_CALLPROC(JHVACTR_calltrace,(Root, A68_TRUE),(Root, A68_TRUE,(JHVACTR_calltrace).nonlocals)));
} 
A_PROC_EXIT(evaltrace);
return;
} 
#undef NL

A68_VOID  SMVACTR_evaluatestack(A68_34 ** Valuestack)
{ 
A68_34 * TMVACTR_kcatseulav A_UNUSED = {0};
A_PROC_ENTRY(evaluatestack);
 /* line 185: */
 /* line 186: */
 /* line 187: */
if ((*A_NILCHECK((&(A_NILCHECK((*A_NILCHECK(Valuestack)))->Rest))))==MKJACTR_nilvaluelist)
{ 
 /* line 188: */
 /* line 189: */
(void)(A_CALLPROC(JYQACTR_evaluate,((&(A_NILCHECK((*A_NILCHECK(Valuestack)))->Value))),((&(A_NILCHECK((*A_NILCHECK(Valuestack)))->Value)),(JYQACTR_evaluate).nonlocals)));
} 
else
{ 
TMVACTR_kcatseulav = WEQACTR_reversevaluelist((*A_NILCHECK(Valuestack)));
 /* line 190: */
for ( ;; )
{ 
 /* line 191: */
 /* line 192: */
if ( !(((*A_NILCHECK((&(A_NILCHECK(TMVACTR_kcatseulav)->Rest))))!=MKJACTR_nilvaluelist)) ) break;
(void)(A_CALLPROC(JYQACTR_evaluate,((&(A_NILCHECK(TMVACTR_kcatseulav)->Value))),((&(A_NILCHECK(TMVACTR_kcatseulav)->Value)),(JYQACTR_evaluate).nonlocals)));
 /* line 193: */
 /* line 194: */
(void)(TMVACTR_kcatseulav = (*A_NILCHECK((&(A_NILCHECK(TMVACTR_kcatseulav)->Rest)))));
}
 /* line 195: */
(void)(JXIACTR_warning(799));
 /* line 197: */
(*A_NILCHECK(Valuestack)) = TMVACTR_kcatseulav;
 /* line 198: */
 /* line 199: */
(void)(A_CALLPROC(JYQACTR_evaluate,((&(A_NILCHECK((*A_NILCHECK(Valuestack)))->Value))),((&(A_NILCHECK((*A_NILCHECK(Valuestack)))->Value)),(JYQACTR_evaluate).nonlocals)));
} 
A_PROC_EXIT(evaluatestack);
return;
} 
#undef NL

A68_VOID  UMVACTR_initialiseevaluator(void)
{ 
A68_83  VMVACTR;  /* clause result */
A68_83  WMVACTR;  /* procedure value */
A68_83  XMVACTR;  /* procedure value */
A_PROC_ENTRY(initialiseevaluator);
if (LJJACTR_traceon)
{ 
WMVACTR.fn.fn_global = NMVACTR_evaltrace;
WMVACTR.nonlocals = A68_NIL;
VMVACTR = WMVACTR;
} 
else
{ 
 /* line 204: */
XMVACTR.fn.fn_global = YKVACTR_evalnotrace;
XMVACTR.nonlocals = A68_NIL;
VMVACTR = XMVACTR;
} 
JYQACTR_evaluate = VMVACTR;
A_PROC_EXIT(initialiseevaluator);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 6: */
void VGVACTR(void)   /* initialise DECS evaluator */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel","-dir",".","evaluator.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/vak/Project/Algol/Algol-68RS-Source/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/vak/Project/Algol/Algol-68RS-Source/a68config/a68config.m","./moduletracer.m","./unionaids.m","./values.m","./incvalue.m","./modes.m","./incmode.m","./uniquenameserver.m","./coutput.m","./evalbase.m","./environment.m","./centities.m","./idtable.m","./operators.m","./adicops.m",""};
static A_CONFIG_INFO A_config A_UNUSED;
/* --- end of configuration information */
A68_169  RHVACTR;  /* collateral clause result */
A68_31  SHVACTR;  /* procedure value */
A68_31  THVACTR;  /* procedure value */
A68_31  UHVACTR;  /* procedure value */
A68_31  VHVACTR;  /* procedure value */
A68_31  CIVACTR;  /* procedure value */
A68_31  DIVACTR;  /* procedure value */
A68_31  EIVACTR;  /* procedure value */
A68_31  FIVACTR;  /* procedure value */
A68_31  NIVACTR;  /* procedure value */
A68_31  OIVACTR;  /* procedure value */
A68_31  PIVACTR;  /* procedure value */
A68_31  QIVACTR;  /* procedure value */
A68_31  XIVACTR;  /* procedure value */
A68_31  YIVACTR;  /* procedure value */
A68_31  ZIVACTR;  /* procedure value */
A68_31  HJVACTR;  /* procedure value */
A68_31  IJVACTR;  /* procedure value */
A68_31  JJVACTR;  /* procedure value */
A68_31  KJVACTR;  /* procedure value */
A68_31  LJVACTR;  /* procedure value */
A68_31  MJVACTR;  /* procedure value */
A68_31  NJVACTR;  /* procedure value */
A68_31  OJVACTR;  /* procedure value */
A68_31  PJVACTR;  /* procedure value */
A68_31  WJVACTR;  /* procedure value */
A68_31  XJVACTR;  /* procedure value */
A68_31  YJVACTR;  /* procedure value */
A68_31  ZJVACTR;  /* procedure value */
A68_31  AKVACTR;  /* procedure value */
A68_31  BKVACTR;  /* procedure value */
A68_31  CKVACTR;  /* procedure value */
A68_31  DKVACTR;  /* procedure value */
A68_31  EKVACTR;  /* procedure value */
A68_31  FKVACTR;  /* procedure value */
A68_31  GKVACTR;  /* procedure value */
A68_31  HKVACTR;  /* procedure value */
A68_31  IKVACTR;  /* procedure value */
A68_31  JKVACTR;  /* procedure value */
A68_31  KKVACTR;  /* procedure value */
A68_31  LKVACTR;  /* procedure value */
A68_31  MKVACTR;  /* procedure value */
A68_31  NKVACTR;  /* procedure value */
A68_31  OKVACTR;  /* procedure value */
A68_31  PKVACTR;  /* procedure value */
A68_31  QKVACTR;  /* procedure value */
A68_31  RKVACTR;  /* procedure value */
A68_31  SKVACTR;  /* procedure value */
A68_31  TKVACTR;  /* procedure value */
A68_31  UKVACTR;  /* procedure value */
A68_163  VKVACTR;  /* OPERATORS - istruct to row */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
BCHACTR();   /* USE moduletracer */
DVQACTR();   /* USE unionaids */
OUPACTR();   /* USE values */
GKJACTR();   /* USE incvalue */
DNMACTR();   /* USE modes */
ZDAACTR();   /* USE incmode */
RHMACTR();   /* USE uniquenameserver */
PTLACTR();   /* USE coutput */
EYQACTR();   /* USE evalbase */
HPIACTR();   /* USE environment */
THAACTR();   /* USE centities */
PPKACTR();   /* USE idtable */
ZZQACTR();   /* USE operators */
BITACTR();   /* USE adicops */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/evaluator.a68";
A_config.translation_time = "Thu Nov  5 21:56:13 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "UGVACTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 21:56:13 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS evaluator);
(void)(UEAALIB_a68config(LGAALIB_configinfo, ZGVACTR));
 /* line 46: */
 /* line 51: */
 /* line 53: */
 /* line 55: */
 /* line 58: */
 /* line 59: */
 /* line 60: */
SHVACTR.fn.fn_global = WCRACTR_staticpartgenerator;
SHVACTR.nonlocals = A68_NIL;
RHVACTR.data[0] = SHVACTR;
 /* line 61: */
THVACTR.fn.fn_global = NHVACTR_spareop;
THVACTR.nonlocals = A68_NIL;
RHVACTR.data[1] = THVACTR;
 /* line 62: */
UHVACTR.fn.fn_global = UDRACTR_selectop;
UHVACTR.nonlocals = A68_NIL;
RHVACTR.data[2] = UHVACTR;
 /* line 63: */
VHVACTR.fn.fn_global = UERACTR_copytoflex;
VHVACTR.nonlocals = A68_NIL;
RHVACTR.data[3] = VHVACTR;
 /* line 65: */
CIVACTR.fn.fn_global = YHVACTR_anonymous;
CIVACTR.nonlocals = A68_NIL;
RHVACTR.data[4] = CIVACTR;
 /* line 66: */
DIVACTR.fn.fn_global = FGRACTR_simpleindexop;
DIVACTR.nonlocals = A68_NIL;
RHVACTR.data[5] = DIVACTR;
 /* line 67: */
EIVACTR.fn.fn_global = DMRACTR_trimindexop;
EIVACTR.nonlocals = A68_NIL;
RHVACTR.data[6] = EIVACTR;
 /* line 68: */
FIVACTR.fn.fn_global = DRRACTR_dynamicgenerator;
FIVACTR.nonlocals = A68_NIL;
RHVACTR.data[7] = FIVACTR;
 /* line 70: */
NIVACTR.fn.fn_global = IIVACTR_anonymous;
NIVACTR.nonlocals = A68_NIL;
RHVACTR.data[8] = NIVACTR;
 /* line 71: */
OIVACTR.fn.fn_global = HGVACTR_dyadicsem;
OIVACTR.nonlocals = A68_NIL;
RHVACTR.data[9] = OIVACTR;
 /* line 72: */
PIVACTR.fn.fn_global = XBUACTR_monadicsem;
PIVACTR.nonlocals = A68_NIL;
RHVACTR.data[10] = PIVACTR;
 /* line 73: */
QIVACTR.fn.fn_global = YURACTR_straighten;
QIVACTR.nonlocals = A68_NIL;
RHVACTR.data[11] = QIVACTR;
 /* line 75: */
XIVACTR.fn.fn_global = TIVACTR_anonymous;
XIVACTR.nonlocals = A68_NIL;
RHVACTR.data[12] = XIVACTR;
 /* line 76: */
YIVACTR.fn.fn_global = OTRACTR_straightindexop;
YIVACTR.nonlocals = A68_NIL;
RHVACTR.data[13] = YIVACTR;
 /* line 77: */
ZIVACTR.fn.fn_global = XYRACTR_assignop;
ZIVACTR.nonlocals = A68_NIL;
RHVACTR.data[14] = ZIVACTR;
 /* line 79: */
HJVACTR.fn.fn_global = CJVACTR_anonymous;
HJVACTR.nonlocals = A68_NIL;
RHVACTR.data[15] = HJVACTR;
 /* line 80: */
IJVACTR.fn.fn_global = EBSACTR_derefop;
IJVACTR.nonlocals = A68_NIL;
RHVACTR.data[16] = IJVACTR;
 /* line 81: */
JJVACTR.fn.fn_global = HCSACTR_callop;
JJVACTR.nonlocals = A68_NIL;
RHVACTR.data[17] = JJVACTR;
 /* line 82: */
KJVACTR.fn.fn_global = RISACTR_voidop;
KJVACTR.nonlocals = A68_NIL;
RHVACTR.data[18] = KJVACTR;
 /* line 83: */
LJVACTR.fn.fn_global = BKSACTR_niltomodeop;
LJVACTR.nonlocals = A68_NIL;
RHVACTR.data[19] = LJVACTR;
 /* line 84: */
MJVACTR.fn.fn_global = RKSACTR_gototoproc;
MJVACTR.nonlocals = A68_NIL;
RHVACTR.data[20] = MJVACTR;
 /* line 85: */
NJVACTR.fn.fn_global = ELSACTR_gototomode;
NJVACTR.nonlocals = A68_NIL;
RHVACTR.data[21] = NJVACTR;
 /* line 86: */
OJVACTR.fn.fn_global = FNSACTR_realtocomplex;
OJVACTR.nonlocals = A68_NIL;
RHVACTR.data[22] = OJVACTR;
 /* line 87: */
PJVACTR.fn.fn_global = VMSACTR_inttoreal;
PJVACTR.nonlocals = A68_NIL;
RHVACTR.data[23] = PJVACTR;
 /* line 89: */
WJVACTR.fn.fn_global = SJVACTR_anonymous;
WJVACTR.nonlocals = A68_NIL;
RHVACTR.data[24] = WJVACTR;
 /* line 90: */
XJVACTR.fn.fn_global = XNSACTR_rowstorowrows;
XJVACTR.nonlocals = A68_NIL;
RHVACTR.data[25] = XJVACTR;
 /* line 91: */
YJVACTR.fn.fn_global = WOSACTR_vectortorow;
YJVACTR.nonlocals = A68_NIL;
RHVACTR.data[26] = YJVACTR;
 /* line 92: */
ZJVACTR.fn.fn_global = HTSACTR_istructtovector;
ZJVACTR.nonlocals = A68_NIL;
RHVACTR.data[27] = ZJVACTR;
 /* line 93: */
AKVACTR.fn.fn_global = MPSACTR_modetostruct1mode;
AKVACTR.nonlocals = A68_NIL;
RHVACTR.data[28] = AKVACTR;
 /* line 94: */
BKVACTR.fn.fn_global = BQSACTR_unitesimple;
BKVACTR.nonlocals = A68_NIL;
RHVACTR.data[29] = BKVACTR;
 /* line 95: */
CKVACTR.fn.fn_global = SRSACTR_uniteunion;
CKVACTR.nonlocals = A68_NIL;
RHVACTR.data[30] = CKVACTR;
 /* line 96: */
DKVACTR.fn.fn_global = ZUSACTR_istructtorow;
DKVACTR.nonlocals = A68_NIL;
RHVACTR.data[31] = DKVACTR;
 /* line 97: */
EKVACTR.fn.fn_global = UYSACTR_skiptomode;
EKVACTR.nonlocals = A68_NIL;
RHVACTR.data[32] = EKVACTR;
 /* line 98: */
RHVACTR.data[33] = QYSACTR_scalartovector;
 /* line 99: */
RHVACTR.data[34] = OYSACTR_scalartorow;
 /* line 100: */
FKVACTR.fn.fn_global = CZSACTR_deunite;
FKVACTR.nonlocals = A68_NIL;
RHVACTR.data[35] = FKVACTR;
 /* line 101: */
GKVACTR.fn.fn_global = RZSACTR_bitstorowbool;
GKVACTR.nonlocals = A68_NIL;
RHVACTR.data[36] = GKVACTR;
 /* line 102: */
HKVACTR.fn.fn_global = XATACTR_vacuum;
HKVACTR.nonlocals = A68_NIL;
RHVACTR.data[37] = HKVACTR;
 /* line 103: */
IKVACTR.fn.fn_global = KBTACTR_ytypetom;
IKVACTR.nonlocals = A68_NIL;
RHVACTR.data[38] = IKVACTR;
 /* line 104: */
JKVACTR.fn.fn_global = QBTACTR_mtoxtype;
JKVACTR.nonlocals = A68_NIL;
RHVACTR.data[39] = JKVACTR;
 /* line 105: */
KKVACTR.fn.fn_global = NHVACTR_spareop;
KKVACTR.nonlocals = A68_NIL;
RHVACTR.data[40] = KKVACTR;
 /* line 106: */
LKVACTR.fn.fn_global = NHVACTR_spareop;
LKVACTR.nonlocals = A68_NIL;
RHVACTR.data[41] = LKVACTR;
 /* line 107: */
MKVACTR.fn.fn_global = NHVACTR_spareop;
MKVACTR.nonlocals = A68_NIL;
RHVACTR.data[42] = MKVACTR;
 /* line 108: */
NKVACTR.fn.fn_global = NHVACTR_spareop;
NKVACTR.nonlocals = A68_NIL;
RHVACTR.data[43] = NKVACTR;
 /* line 109: */
OKVACTR.fn.fn_global = NHVACTR_spareop;
OKVACTR.nonlocals = A68_NIL;
RHVACTR.data[44] = OKVACTR;
 /* line 110: */
PKVACTR.fn.fn_global = NHVACTR_spareop;
PKVACTR.nonlocals = A68_NIL;
RHVACTR.data[45] = PKVACTR;
 /* line 111: */
QKVACTR.fn.fn_global = NHVACTR_spareop;
QKVACTR.nonlocals = A68_NIL;
RHVACTR.data[46] = QKVACTR;
 /* line 112: */
RKVACTR.fn.fn_global = NHVACTR_spareop;
RKVACTR.nonlocals = A68_NIL;
RHVACTR.data[47] = RKVACTR;
 /* line 114: */
SKVACTR.fn.fn_global = NHVACTR_spareop;
SKVACTR.nonlocals = A68_NIL;
RHVACTR.data[48] = SKVACTR;
 /* line 116: */
TKVACTR.fn.fn_global = WBTACTR_staticgenerator;
TKVACTR.nonlocals = A68_NIL;
RHVACTR.data[49] = TKVACTR;
UKVACTR.fn.fn_global = CHVACTR_unimplementedop;
UKVACTR.nonlocals = A68_NIL;
RHVACTR.data[50] = UKVACTR;
WKVACTR_opersemantics = A_HIS1ARR(VKVACTR,RHVACTR,A68_31 ,51);
 /* line 119: */
 /* line 163: */
 /* line 184: */
 /* line 201: */
 /* line 202: */
 /* line 207: */
A_PROC_EXIT(DECS evaluator);
} 
#undef NL
/* end of translation of evaluator.a68 */
