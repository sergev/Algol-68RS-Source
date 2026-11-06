/* UNAME:KFVACTR */
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
extern A68_34 * AEQACTR_reversevaluelist(struct A68t34 *);
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
extern A68_83  NXQACTR_evaluate;
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
extern A68_VOID  HFRACTR_simpleindexop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  FLRACTR_trimindexop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  MSRACTR_straightindexop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  WTRACTR_straighten(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  VXRACTR_assignop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  YZRACTR_derefop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  ZASACTR_callop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  JHSACTR_voidop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  TISACTR_niltomodeop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  PMSACTR_rowstorowrows(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  ONSACTR_vectortorow(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_31  IXSACTR_scalartovector;
extern A68_VOID  EOSACTR_modetostruct1mode(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  TOSACTR_unitesimple(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  KQSACTR_uniteunion(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  RTSACTR_istructtorow(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  ZRSACTR_istructtovector(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  MXSACTR_skiptomode(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_31  GXSACTR_scalartorow;
extern A68_VOID  PZSACTR_vacuum(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  OATACTR_staticgenerator(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  ACRACTR_staticpartgenerator(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  YCRACTR_selectop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  WDRACTR_copytoflex(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  BQRACTR_dynamicgenerator(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  JJSACTR_gototoproc(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  WJSACTR_gototomode(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  NLSACTR_inttoreal(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  XLSACTR_realtocomplex(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  UXSACTR_deunite(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  JYSACTR_bitstorowbool(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  CATACTR_ytypetom(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  IATACTR_mtoxtype(struct A68t32 *,struct A68t33 ,A68_32 *);
/* --- End of imports from operators --- */


/* --- Imports from adicops --- */
extern A68_VOID  XEVACTR_dyadicsem(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  NAUACTR_monadicsem(struct A68t32 *,struct A68t33 ,A68_32 *);
/* --- End of imports from adicops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void BCHACTR(void);   /* moduletracer */
extern void HUQACTR(void);   /* unionaids */
extern void AUPACTR(void);   /* values */
extern void GKJACTR(void);   /* incvalue */
extern void DNMACTR(void);   /* modes */
extern void ZDAACTR(void);   /* incmode */
extern void RHMACTR(void);   /* uniquenameserver */
extern void PTLACTR(void);   /* coutput */
extern void IXQACTR(void);   /* evalbase */
extern void HPIACTR(void);   /* environment */
extern void THAACTR(void);   /* centities */
extern void PPKACTR(void);   /* idtable */
extern void DZQACTR(void);   /* operators */
extern void TGTACTR(void);   /* adicops */
/* --- end of DECS initialisation functions --- */
static A68_159   OFVACTR = {"$Id: evaluator.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,PFVACTR,OFVACTR,59)
static A68_160   UFVACTR = {"/* UNIMPLEMENTED OPER */"}; 
A_GISVEC(A68_VC ,VFVACTR,UFVACTR,24)
A68_161  ZFVACTR_calltrace;
#define AGVACTR_tracealllevels 0X800000U
static A68_162   EGVACTR = {"EVALUATE - spare op number"}; 
A_GISVEC(A68_VC ,FGVACTR,EGVACTR,26)
static A68_164   PGVACTR = {"EVALUATE - trim implemented by trimindex"}; 
A_GISVEC(A68_VC ,QGVACTR,PGVACTR,40)
static A68_165   ZGVACTR = {"EVALUATE - boundpack implemented by dynamic generator"}; 
A_GISVEC(A68_VC ,AHVACTR,ZGVACTR,53)
static A68_166   KHVACTR = {"EVALUATE - prestraight implemented by straighten"}; 
A_GISVEC(A68_VC ,LHVACTR,KHVACTR,48)
static A68_167   THVACTR = {"EVALUATE - default bound implemented by load"}; 
A_GISVEC(A68_VC ,UHVACTR,THVACTR,44)
static A68_168   JIVACTR = {"EVALUATE - 25 68R inttobits no longer implemented"}; 
A_GISVEC(A68_VC ,KIVACTR,JIVACTR,49)
static A68_163  MJVACTR_opersemantics;
static A68_170   PJVACTR = {"EVALUATE - evaluator passed a NIL reference"}; 
A_GISVEC(A68_VC ,QJVACTR,PJVACTR,43)
static A68_41   LKVACTR = {"A68_NIL"}; 
A_GISVEC(A68_VC ,MKVACTR,LKVACTR,7)
static A68_174   PKVACTR = {"EVALUATE - Unknown NSE"}; 
A_GISVEC(A68_VC ,QKVACTR,PKVACTR,22)
static A68_175   WKVACTR = {"/* VOID? */"}; 
A_GISVEC(A68_VC ,XKVACTR,WKVACTR,11)
static A68_166   ALVACTR = {"EVALUATE - evaluation not defined for this value"}; 
A_GISVEC(A68_VC ,BLVACTR,ALVACTR,48)

A_STATIC A68_VOID  SFVACTR_unimplementedop(A68_32 * Root, A68_33  Oper, A68_32  *ReturnedValue);

A_STATIC A68_VOID  DGVACTR_spareop(A68_32 * Value, A68_33  Oper, A68_32  *ReturnedValue);

A_STATIC A68_VOID  OGVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue);

A_STATIC A68_VOID  YGVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue);

A_STATIC A68_VOID  JHVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue);

A_STATIC A68_VOID  SHVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue);

A_STATIC A68_VOID  IIVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue);

A_STATIC A68_VOID  OJVACTR_evalnotrace(A68_32 * Root);

A_STATIC A68_32 * VJVACTR_assignment(A68_32 * TJVACTR_anonymous, A68_32  UJVACTR_anonymous);

A_STATIC A68_35 * AKVACTR_assignment(A68_35 * YJVACTR_anonymous, A68_35  ZJVACTR_anonymous);

A_STATIC A68_VOID  DLVACTR_evaltrace(A68_32 * Root);

A68_VOID  ILVACTR_evaluatestack(A68_34 ** Valuestack);

A68_VOID  KLVACTR_initialiseevaluator(void);

A_STATIC A68_35 * AKVACTR_assignment(A68_35 * YJVACTR_anonymous, A68_35  ZJVACTR_anonymous)
{ 
A68_35  BKVACTR;  /* united object - for case conformity */
A68_VC  CKVACTR_anonymous;
A68_VC  DKVACTR;  /* OPERATORS - copy to flex */
A68_173 * EKVACTR;  /* YIELD */
A68_35 * FKVACTR;  /* clause result */
{ 
(*YJVACTR_anonymous) = ZJVACTR_anonymous;
BKVACTR = ZJVACTR_anonymous ;
switch ( BKVACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
CKVACTR_anonymous = (BKVACTR.data.mode6);
EKVACTR = &(YJVACTR_anonymous-> data.mode6) ;
(*EKVACTR) = A_VCOPY(CKVACTR_anonymous,DKVACTR,A68_CHAR );
break;
default: 
/*SKIP*/;
break;
} 
FKVACTR = YJVACTR_anonymous;
} 
return( FKVACTR );
} 
#undef NL

A_STATIC A68_32 * VJVACTR_assignment(A68_32 * TJVACTR_anonymous, A68_32  UJVACTR_anonymous)
{ 
A68_INT * WJVACTR;  /* YIELD */
A68_BITS * XJVACTR;  /* YIELD */
A68_32 * GKVACTR;  /* clause result */
{ 
WJVACTR = (&(TJVACTR_anonymous->Mode)) ;
(*WJVACTR) = UJVACTR_anonymous.Mode;
XJVACTR = (&(TJVACTR_anonymous->Info)) ;
(*XJVACTR) = UJVACTR_anonymous.Info;
AKVACTR_assignment((&(TJVACTR_anonymous->Extra)), UJVACTR_anonymous.Extra);
GKVACTR = TJVACTR_anonymous;
} 
return( GKVACTR );
} 
#undef NL

A_STATIC A68_VOID  SFVACTR_unimplementedop(A68_32 * Root, A68_33  Oper, A68_32  *ReturnedValue)
{ 
A68_32  TFVACTR;  /* collateral clause result */
A68_35  WFVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  XFVACTR;  /* YIELD */
A68_32  YFVACTR;  /* clause result */
A_PROC_ENTRY(unimplementedop);
 /* line 47: */
 /* line 48: */
{ 
TFVACTR.Mode = (*(&(Root->Mode)));
TFVACTR.Info = PKJACTR_defaultinfo;
 /* line 49: */
XFVACTR = VFVACTR ;
TFVACTR.Extra = A_UNITE(WFVACTR,mode6,6,XFVACTR);
YFVACTR = TFVACTR;
} 
A_PROC_EXIT(unimplementedop);
*ReturnedValue = (YFVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  DGVACTR_spareop(A68_32 * Value, A68_33  Oper, A68_32  *ReturnedValue)
{ 
A68_32  GGVACTR;  /* clause result */
A_PROC_ENTRY(spareop);
 /* line 56: */
{ 
WXIACTR_assert(FGVACTR, A68_FALSE);
GGVACTR = DLJACTR_skipvalue;
} 
A_PROC_EXIT(spareop);
*ReturnedValue = (GGVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  OGVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue)
{ 
A68_32  RGVACTR;  /* clause result */
 /* line 64: */
{ 
WXIACTR_assert(QGVACTR, A68_FALSE);
RGVACTR = DLJACTR_skipvalue;
} 
*ReturnedValue = (RGVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  YGVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue)
{ 
A68_32  BHVACTR;  /* clause result */
A68_32  CHVACTR;  /* OPERATORS - skip to mode */
 /* line 69: */
{ 
WXIACTR_assert(AHVACTR, A68_FALSE);
BHVACTR = CHVACTR;
} 
*ReturnedValue = (BHVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  JHVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue)
{ 
A68_32  MHVACTR;  /* clause result */
 /* line 74: */
{ 
WXIACTR_assert(LHVACTR, A68_FALSE);
MHVACTR = DLJACTR_skipvalue;
} 
*ReturnedValue = (MHVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  SHVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue)
{ 
A68_32  VHVACTR;  /* clause result */
A68_32  WHVACTR;  /* OPERATORS - skip to mode */
 /* line 78: */
{ 
WXIACTR_assert(UHVACTR, A68_FALSE);
VHVACTR = WHVACTR;
} 
*ReturnedValue = (VHVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  IIVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue)
{ 
A68_32  LIVACTR;  /* clause result */
 /* line 88: */
{ 
WXIACTR_assert(KIVACTR, A68_FALSE);
LIVACTR = DLJACTR_skipvalue;
} 
*ReturnedValue = (LIVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  OJVACTR_evalnotrace(A68_32 * Root)
{ 
A68_35  RJVACTR;  /* united object - for case conformity */
A68_33  SJVACTR_rator;
A68_INT  HKVACTR;  /* YIELD */
A68_31  IKVACTR;  /* CALL */
A68_32  JKVACTR;  /* avoid structure result */
A68_40  KKVACTR_nihil;
A68_35  NKVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  OKVACTR;  /* YIELD */
A68_36  RKVACTR_r;
A68_37  SKVACTR_id;
A68_38  TKVACTR_temp;
A68_39  UKVACTR_label;
A68_VC  VKVACTR_cf;
A68_35  YKVACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ZKVACTR;  /* YIELD */
A_PROC_ENTRY(evalnotrace);
 /* line 120: */
 /* line 121: */
{ 
WXIACTR_assert(QJVACTR, (Root!=(A68_32 *)A68_NIL));
 /* line 122: */
 /* line 123: */
RJVACTR = (*(&(Root->Extra))) ;
switch ( RJVACTR.mode )
{ 
case 9: /* STRUCT(INT,INT,REF MODE34)  */
SJVACTR_rator = (RJVACTR.data.mode9);
 /* line 124: */
 /* line 126: */
HKVACTR = SJVACTR_rator.Fn ;
IKVACTR = A_R1INDEX(MJVACTR_opersemantics,HKVACTR) ;
A_CALLPROC(IKVACTR,(Root, SJVACTR_rator, &JKVACTR),(Root, SJVACTR_rator, &JKVACTR,(IKVACTR).nonlocals));
VJVACTR_assignment(Root, JKVACTR);
break;
case 8: /* STRUCT(INT)  */
KKVACTR_nihil = (RJVACTR.data.mode8);
 /* line 127: */
 /* line 128: */
switch ( KKVACTR_nihil.Nse )
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
OKVACTR = MKVACTR ;
AKVACTR_assignment((&(Root->Extra)), A_UNITE(NKVACTR,mode6,6,OKVACTR));
break;
default: 
WXIACTR_assert(QKVACTR, A68_FALSE);
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
RKVACTR_r = (RJVACTR.data.mode2);
 /* line 138: */
 /* line 140: */
/*SKIP*/;
break;
case 4: /* STRUCT(INT)  */
SKVACTR_id = (RJVACTR.data.mode4);
 /* line 141: */
 /* line 143: */
/*SKIP*/;
break;
case 5: /* STRUCT(MODE41,INT)  */
TKVACTR_temp = (RJVACTR.data.mode5);
 /* line 144: */
 /* line 146: */
/*SKIP*/;
break;
case 7: /* STRUCT(INT)  */
UKVACTR_label = (RJVACTR.data.mode7);
 /* line 147: */
 /* line 149: */
/*SKIP*/;
break;
case 6: /* VECTOR [] CHAR */
VKVACTR_cf = (RJVACTR.data.mode6);
 /* line 150: */
 /* line 152: */
/*SKIP*/;
break;
case 3: /* VOID */
 /* line 153: */
 /* line 155: */
ZKVACTR = XKVACTR ;
AKVACTR_assignment((&(Root->Extra)), A_UNITE(YKVACTR,mode6,6,ZKVACTR));
break;
default: 
 /* line 156: */
 /* line 157: */
WXIACTR_assert(BLVACTR, A68_FALSE);
break;
} 
} 
A_PROC_EXIT(evalnotrace);
return;
} 
#undef NL

A_STATIC A68_VOID  DLVACTR_evaltrace(A68_32 * Root)
{ 
A68_BITS  ELVACTR;  /* ADICOPS - >= */
A68_83  FLVACTR;  /* procedure value */
A68_83  GLVACTR;  /* procedure value */
A_PROC_ENTRY(evaltrace);
 /* line 164: */
 /* line 165: */
{ 
A_CALLPROC(ZFVACTR_calltrace,(Root, A68_FALSE),(Root, A68_FALSE,(ZFVACTR_calltrace).nonlocals));
 /* line 166: */
 /* line 167: */
ELVACTR = PJJACTR_tracelevelflags() ;
if ( A_LB_GE(ELVACTR,AGVACTR_tracealllevels) )
{ 
 /* line 169: */
 /* line 170: */
OJVACTR_evalnotrace(Root);
} 
else
{ 
FLVACTR.fn.fn_global = OJVACTR_evalnotrace;
FLVACTR.nonlocals = A68_NIL;
NXQACTR_evaluate = FLVACTR;
 /* line 171: */
OJVACTR_evalnotrace(Root);
 /* line 172: */
 /* line 173: */
GLVACTR.fn.fn_global = DLVACTR_evaltrace;
GLVACTR.nonlocals = A68_NIL;
NXQACTR_evaluate = GLVACTR;
} 
 /* line 174: */
 /* line 175: */
A_CALLPROC(ZFVACTR_calltrace,(Root, A68_TRUE),(Root, A68_TRUE,(ZFVACTR_calltrace).nonlocals));
} 
A_PROC_EXIT(evaltrace);
return;
} 
#undef NL

A68_VOID  ILVACTR_evaluatestack(A68_34 ** Valuestack)
{ 
A68_34 * JLVACTR_kcatseulav;
A_PROC_ENTRY(evaluatestack);
 /* line 185: */
 /* line 186: */
 /* line 187: */
if ( ((*(&((*Valuestack)->Rest)))==MKJACTR_nilvaluelist) )
{ 
 /* line 188: */
 /* line 189: */
A_CALLPROC(NXQACTR_evaluate,((&((*Valuestack)->Value))),((&((*Valuestack)->Value)),(NXQACTR_evaluate).nonlocals));
} 
else
{ 
JLVACTR_kcatseulav = AEQACTR_reversevaluelist((*Valuestack));
 /* line 190: */
for ( ;; )
{ 
 /* line 191: */
 /* line 192: */
if ( !(((*(&(JLVACTR_kcatseulav->Rest)))!=MKJACTR_nilvaluelist)) ) break;
A_CALLPROC(NXQACTR_evaluate,((&(JLVACTR_kcatseulav->Value))),((&(JLVACTR_kcatseulav->Value)),(NXQACTR_evaluate).nonlocals));
 /* line 193: */
 /* line 194: */
JLVACTR_kcatseulav = (*(&(JLVACTR_kcatseulav->Rest)));
}
 /* line 195: */
JXIACTR_warning(799);
 /* line 197: */
(*Valuestack) = JLVACTR_kcatseulav;
 /* line 198: */
 /* line 199: */
A_CALLPROC(NXQACTR_evaluate,((&((*Valuestack)->Value))),((&((*Valuestack)->Value)),(NXQACTR_evaluate).nonlocals));
} 
A_PROC_EXIT(evaluatestack);
return;
} 
#undef NL

A68_VOID  KLVACTR_initialiseevaluator(void)
{ 
A68_83  LLVACTR;  /* clause result */
A68_83  MLVACTR;  /* procedure value */
A68_83  NLVACTR;  /* procedure value */
A_PROC_ENTRY(initialiseevaluator);
if ( LJJACTR_traceon )
{ 
MLVACTR.fn.fn_global = DLVACTR_evaltrace;
MLVACTR.nonlocals = A68_NIL;
LLVACTR = MLVACTR;
} 
else
{ 
 /* line 204: */
NLVACTR.fn.fn_global = OJVACTR_evalnotrace;
NLVACTR.nonlocals = A68_NIL;
LLVACTR = NLVACTR;
} 
NXQACTR_evaluate = LLVACTR;
A_PROC_EXIT(initialiseevaluator);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 6: */
void LFVACTR(void)   /* initialise DECS evaluator */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel","-dir",".","evaluator.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/vak/Project/Algol/Algol-68RS-Source/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/vak/Project/Algol/Algol-68RS-Source/a68config/a68config.m","./moduletracer.m","./unionaids.m","./values.m","./incvalue.m","./modes.m","./incmode.m","./uniquenameserver.m","./coutput.m","./evalbase.m","./environment.m","./centities.m","./idtable.m","./operators.m","./adicops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_169  HGVACTR;  /* collateral clause result */
A68_31  IGVACTR;  /* procedure value */
A68_31  JGVACTR;  /* procedure value */
A68_31  KGVACTR;  /* procedure value */
A68_31  LGVACTR;  /* procedure value */
A68_31  SGVACTR;  /* procedure value */
A68_31  TGVACTR;  /* procedure value */
A68_31  UGVACTR;  /* procedure value */
A68_31  VGVACTR;  /* procedure value */
A68_31  DHVACTR;  /* procedure value */
A68_31  EHVACTR;  /* procedure value */
A68_31  FHVACTR;  /* procedure value */
A68_31  GHVACTR;  /* procedure value */
A68_31  NHVACTR;  /* procedure value */
A68_31  OHVACTR;  /* procedure value */
A68_31  PHVACTR;  /* procedure value */
A68_31  XHVACTR;  /* procedure value */
A68_31  YHVACTR;  /* procedure value */
A68_31  ZHVACTR;  /* procedure value */
A68_31  AIVACTR;  /* procedure value */
A68_31  BIVACTR;  /* procedure value */
A68_31  CIVACTR;  /* procedure value */
A68_31  DIVACTR;  /* procedure value */
A68_31  EIVACTR;  /* procedure value */
A68_31  FIVACTR;  /* procedure value */
A68_31  MIVACTR;  /* procedure value */
A68_31  NIVACTR;  /* procedure value */
A68_31  OIVACTR;  /* procedure value */
A68_31  PIVACTR;  /* procedure value */
A68_31  QIVACTR;  /* procedure value */
A68_31  RIVACTR;  /* procedure value */
A68_31  SIVACTR;  /* procedure value */
A68_31  TIVACTR;  /* procedure value */
A68_31  UIVACTR;  /* procedure value */
A68_31  VIVACTR;  /* procedure value */
A68_31  WIVACTR;  /* procedure value */
A68_31  XIVACTR;  /* procedure value */
A68_31  YIVACTR;  /* procedure value */
A68_31  ZIVACTR;  /* procedure value */
A68_31  AJVACTR;  /* procedure value */
A68_31  BJVACTR;  /* procedure value */
A68_31  CJVACTR;  /* procedure value */
A68_31  DJVACTR;  /* procedure value */
A68_31  EJVACTR;  /* procedure value */
A68_31  FJVACTR;  /* procedure value */
A68_31  GJVACTR;  /* procedure value */
A68_31  HJVACTR;  /* procedure value */
A68_31  IJVACTR;  /* procedure value */
A68_31  JJVACTR;  /* procedure value */
A68_31  KJVACTR;  /* procedure value */
A68_163  LJVACTR;  /* OPERATORS - istruct to row */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
BCHACTR();   /* USE moduletracer */
HUQACTR();   /* USE unionaids */
AUPACTR();   /* USE values */
GKJACTR();   /* USE incvalue */
DNMACTR();   /* USE modes */
ZDAACTR();   /* USE incmode */
RHMACTR();   /* USE uniquenameserver */
PTLACTR();   /* USE coutput */
IXQACTR();   /* USE evalbase */
HPIACTR();   /* USE environment */
THAACTR();   /* USE centities */
PPKACTR();   /* USE idtable */
DZQACTR();   /* USE operators */
TGTACTR();   /* USE adicops */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/evaluator.a68";
A_config.translation_time = "Thu Nov  5 20:30:31 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "KFVACTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 20:30:31 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS evaluator);
UEAALIB_a68config(LGAALIB_configinfo, PFVACTR);
 /* line 46: */
 /* line 51: */
 /* line 53: */
 /* line 55: */
 /* line 58: */
 /* line 59: */
 /* line 60: */
IGVACTR.fn.fn_global = ACRACTR_staticpartgenerator;
IGVACTR.nonlocals = A68_NIL;
HGVACTR.data[0] = IGVACTR;
 /* line 61: */
JGVACTR.fn.fn_global = DGVACTR_spareop;
JGVACTR.nonlocals = A68_NIL;
HGVACTR.data[1] = JGVACTR;
 /* line 62: */
KGVACTR.fn.fn_global = YCRACTR_selectop;
KGVACTR.nonlocals = A68_NIL;
HGVACTR.data[2] = KGVACTR;
 /* line 63: */
LGVACTR.fn.fn_global = WDRACTR_copytoflex;
LGVACTR.nonlocals = A68_NIL;
HGVACTR.data[3] = LGVACTR;
 /* line 65: */
SGVACTR.fn.fn_global = OGVACTR_anonymous;
SGVACTR.nonlocals = A68_NIL;
HGVACTR.data[4] = SGVACTR;
 /* line 66: */
TGVACTR.fn.fn_global = HFRACTR_simpleindexop;
TGVACTR.nonlocals = A68_NIL;
HGVACTR.data[5] = TGVACTR;
 /* line 67: */
UGVACTR.fn.fn_global = FLRACTR_trimindexop;
UGVACTR.nonlocals = A68_NIL;
HGVACTR.data[6] = UGVACTR;
 /* line 68: */
VGVACTR.fn.fn_global = BQRACTR_dynamicgenerator;
VGVACTR.nonlocals = A68_NIL;
HGVACTR.data[7] = VGVACTR;
 /* line 70: */
DHVACTR.fn.fn_global = YGVACTR_anonymous;
DHVACTR.nonlocals = A68_NIL;
HGVACTR.data[8] = DHVACTR;
 /* line 71: */
EHVACTR.fn.fn_global = XEVACTR_dyadicsem;
EHVACTR.nonlocals = A68_NIL;
HGVACTR.data[9] = EHVACTR;
 /* line 72: */
FHVACTR.fn.fn_global = NAUACTR_monadicsem;
FHVACTR.nonlocals = A68_NIL;
HGVACTR.data[10] = FHVACTR;
 /* line 73: */
GHVACTR.fn.fn_global = WTRACTR_straighten;
GHVACTR.nonlocals = A68_NIL;
HGVACTR.data[11] = GHVACTR;
 /* line 75: */
NHVACTR.fn.fn_global = JHVACTR_anonymous;
NHVACTR.nonlocals = A68_NIL;
HGVACTR.data[12] = NHVACTR;
 /* line 76: */
OHVACTR.fn.fn_global = MSRACTR_straightindexop;
OHVACTR.nonlocals = A68_NIL;
HGVACTR.data[13] = OHVACTR;
 /* line 77: */
PHVACTR.fn.fn_global = VXRACTR_assignop;
PHVACTR.nonlocals = A68_NIL;
HGVACTR.data[14] = PHVACTR;
 /* line 79: */
XHVACTR.fn.fn_global = SHVACTR_anonymous;
XHVACTR.nonlocals = A68_NIL;
HGVACTR.data[15] = XHVACTR;
 /* line 80: */
YHVACTR.fn.fn_global = YZRACTR_derefop;
YHVACTR.nonlocals = A68_NIL;
HGVACTR.data[16] = YHVACTR;
 /* line 81: */
ZHVACTR.fn.fn_global = ZASACTR_callop;
ZHVACTR.nonlocals = A68_NIL;
HGVACTR.data[17] = ZHVACTR;
 /* line 82: */
AIVACTR.fn.fn_global = JHSACTR_voidop;
AIVACTR.nonlocals = A68_NIL;
HGVACTR.data[18] = AIVACTR;
 /* line 83: */
BIVACTR.fn.fn_global = TISACTR_niltomodeop;
BIVACTR.nonlocals = A68_NIL;
HGVACTR.data[19] = BIVACTR;
 /* line 84: */
CIVACTR.fn.fn_global = JJSACTR_gototoproc;
CIVACTR.nonlocals = A68_NIL;
HGVACTR.data[20] = CIVACTR;
 /* line 85: */
DIVACTR.fn.fn_global = WJSACTR_gototomode;
DIVACTR.nonlocals = A68_NIL;
HGVACTR.data[21] = DIVACTR;
 /* line 86: */
EIVACTR.fn.fn_global = XLSACTR_realtocomplex;
EIVACTR.nonlocals = A68_NIL;
HGVACTR.data[22] = EIVACTR;
 /* line 87: */
FIVACTR.fn.fn_global = NLSACTR_inttoreal;
FIVACTR.nonlocals = A68_NIL;
HGVACTR.data[23] = FIVACTR;
 /* line 89: */
MIVACTR.fn.fn_global = IIVACTR_anonymous;
MIVACTR.nonlocals = A68_NIL;
HGVACTR.data[24] = MIVACTR;
 /* line 90: */
NIVACTR.fn.fn_global = PMSACTR_rowstorowrows;
NIVACTR.nonlocals = A68_NIL;
HGVACTR.data[25] = NIVACTR;
 /* line 91: */
OIVACTR.fn.fn_global = ONSACTR_vectortorow;
OIVACTR.nonlocals = A68_NIL;
HGVACTR.data[26] = OIVACTR;
 /* line 92: */
PIVACTR.fn.fn_global = ZRSACTR_istructtovector;
PIVACTR.nonlocals = A68_NIL;
HGVACTR.data[27] = PIVACTR;
 /* line 93: */
QIVACTR.fn.fn_global = EOSACTR_modetostruct1mode;
QIVACTR.nonlocals = A68_NIL;
HGVACTR.data[28] = QIVACTR;
 /* line 94: */
RIVACTR.fn.fn_global = TOSACTR_unitesimple;
RIVACTR.nonlocals = A68_NIL;
HGVACTR.data[29] = RIVACTR;
 /* line 95: */
SIVACTR.fn.fn_global = KQSACTR_uniteunion;
SIVACTR.nonlocals = A68_NIL;
HGVACTR.data[30] = SIVACTR;
 /* line 96: */
TIVACTR.fn.fn_global = RTSACTR_istructtorow;
TIVACTR.nonlocals = A68_NIL;
HGVACTR.data[31] = TIVACTR;
 /* line 97: */
UIVACTR.fn.fn_global = MXSACTR_skiptomode;
UIVACTR.nonlocals = A68_NIL;
HGVACTR.data[32] = UIVACTR;
 /* line 98: */
HGVACTR.data[33] = IXSACTR_scalartovector;
 /* line 99: */
HGVACTR.data[34] = GXSACTR_scalartorow;
 /* line 100: */
VIVACTR.fn.fn_global = UXSACTR_deunite;
VIVACTR.nonlocals = A68_NIL;
HGVACTR.data[35] = VIVACTR;
 /* line 101: */
WIVACTR.fn.fn_global = JYSACTR_bitstorowbool;
WIVACTR.nonlocals = A68_NIL;
HGVACTR.data[36] = WIVACTR;
 /* line 102: */
XIVACTR.fn.fn_global = PZSACTR_vacuum;
XIVACTR.nonlocals = A68_NIL;
HGVACTR.data[37] = XIVACTR;
 /* line 103: */
YIVACTR.fn.fn_global = CATACTR_ytypetom;
YIVACTR.nonlocals = A68_NIL;
HGVACTR.data[38] = YIVACTR;
 /* line 104: */
ZIVACTR.fn.fn_global = IATACTR_mtoxtype;
ZIVACTR.nonlocals = A68_NIL;
HGVACTR.data[39] = ZIVACTR;
 /* line 105: */
AJVACTR.fn.fn_global = DGVACTR_spareop;
AJVACTR.nonlocals = A68_NIL;
HGVACTR.data[40] = AJVACTR;
 /* line 106: */
BJVACTR.fn.fn_global = DGVACTR_spareop;
BJVACTR.nonlocals = A68_NIL;
HGVACTR.data[41] = BJVACTR;
 /* line 107: */
CJVACTR.fn.fn_global = DGVACTR_spareop;
CJVACTR.nonlocals = A68_NIL;
HGVACTR.data[42] = CJVACTR;
 /* line 108: */
DJVACTR.fn.fn_global = DGVACTR_spareop;
DJVACTR.nonlocals = A68_NIL;
HGVACTR.data[43] = DJVACTR;
 /* line 109: */
EJVACTR.fn.fn_global = DGVACTR_spareop;
EJVACTR.nonlocals = A68_NIL;
HGVACTR.data[44] = EJVACTR;
 /* line 110: */
FJVACTR.fn.fn_global = DGVACTR_spareop;
FJVACTR.nonlocals = A68_NIL;
HGVACTR.data[45] = FJVACTR;
 /* line 111: */
GJVACTR.fn.fn_global = DGVACTR_spareop;
GJVACTR.nonlocals = A68_NIL;
HGVACTR.data[46] = GJVACTR;
 /* line 112: */
HJVACTR.fn.fn_global = DGVACTR_spareop;
HJVACTR.nonlocals = A68_NIL;
HGVACTR.data[47] = HJVACTR;
 /* line 114: */
IJVACTR.fn.fn_global = DGVACTR_spareop;
IJVACTR.nonlocals = A68_NIL;
HGVACTR.data[48] = IJVACTR;
 /* line 116: */
JJVACTR.fn.fn_global = OATACTR_staticgenerator;
JJVACTR.nonlocals = A68_NIL;
HGVACTR.data[49] = JJVACTR;
KJVACTR.fn.fn_global = SFVACTR_unimplementedop;
KJVACTR.nonlocals = A68_NIL;
HGVACTR.data[50] = KJVACTR;
MJVACTR_opersemantics = A_HIS1ARR(LJVACTR,HGVACTR,A68_31 ,51);
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
