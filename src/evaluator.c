/* UNAME:IGVACTR */
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
extern A68_34 * OEQACTR_reversevaluelist(struct A68t34 *);
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
extern A68_83  BYQACTR_evaluate;
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
extern A68_VOID  VFRACTR_simpleindexop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  TLRACTR_trimindexop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  ETRACTR_straightindexop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  OURACTR_straighten(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  NYRACTR_assignop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  UASACTR_derefop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  VBSACTR_callop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  FISACTR_voidop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  PJSACTR_niltomodeop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  LNSACTR_rowstorowrows(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  KOSACTR_vectortorow(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_31  EYSACTR_scalartovector;
extern A68_VOID  APSACTR_modetostruct1mode(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  PPSACTR_unitesimple(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  GRSACTR_uniteunion(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  NUSACTR_istructtorow(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  VSSACTR_istructtovector(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  IYSACTR_skiptomode(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_31  CYSACTR_scalartorow;
extern A68_VOID  LATACTR_vacuum(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  KBTACTR_staticgenerator(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  OCRACTR_staticpartgenerator(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  MDRACTR_selectop(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  KERACTR_copytoflex(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  TQRACTR_dynamicgenerator(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  FKSACTR_gototoproc(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  SKSACTR_gototomode(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  JMSACTR_inttoreal(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  TMSACTR_realtocomplex(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  QYSACTR_deunite(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  FZSACTR_bitstorowbool(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  YATACTR_ytypetom(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  EBTACTR_mtoxtype(struct A68t32 *,struct A68t33 ,A68_32 *);
/* --- End of imports from operators --- */


/* --- Imports from adicops --- */
extern A68_VOID  VFVACTR_dyadicsem(struct A68t32 *,struct A68t33 ,A68_32 *);
extern A68_VOID  LBUACTR_monadicsem(struct A68t32 *,struct A68t33 ,A68_32 *);
/* --- End of imports from adicops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void BCHACTR(void);   /* moduletracer */
extern void VUQACTR(void);   /* unionaids */
extern void OUPACTR(void);   /* values */
extern void GKJACTR(void);   /* incvalue */
extern void DNMACTR(void);   /* modes */
extern void ZDAACTR(void);   /* incmode */
extern void RHMACTR(void);   /* uniquenameserver */
extern void PTLACTR(void);   /* coutput */
extern void WXQACTR(void);   /* evalbase */
extern void HPIACTR(void);   /* environment */
extern void THAACTR(void);   /* centities */
extern void PPKACTR(void);   /* idtable */
extern void RZQACTR(void);   /* operators */
extern void PHTACTR(void);   /* adicops */
/* --- end of DECS initialisation functions --- */
static A68_159   MGVACTR = {"$Id: evaluator.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,NGVACTR,MGVACTR,59)
static A68_160   SGVACTR = {"/* UNIMPLEMENTED OPER */"}; 
A_GISVEC(A68_VC ,TGVACTR,SGVACTR,24)
A68_161  XGVACTR_calltrace A_UNUSED;
#define YGVACTR_tracealllevels 0X800000U
static A68_162   CHVACTR = {"EVALUATE - spare op number"}; 
A_GISVEC(A68_VC ,DHVACTR,CHVACTR,26)
static A68_164   NHVACTR = {"EVALUATE - trim implemented by trimindex"}; 
A_GISVEC(A68_VC ,OHVACTR,NHVACTR,40)
static A68_165   XHVACTR = {"EVALUATE - boundpack implemented by dynamic generator"}; 
A_GISVEC(A68_VC ,YHVACTR,XHVACTR,53)
static A68_166   IIVACTR = {"EVALUATE - prestraight implemented by straighten"}; 
A_GISVEC(A68_VC ,JIVACTR,IIVACTR,48)
static A68_167   RIVACTR = {"EVALUATE - default bound implemented by load"}; 
A_GISVEC(A68_VC ,SIVACTR,RIVACTR,44)
static A68_168   HJVACTR = {"EVALUATE - 25 68R inttobits no longer implemented"}; 
A_GISVEC(A68_VC ,IJVACTR,HJVACTR,49)
static A68_163  KKVACTR_opersemantics A_UNUSED;
static A68_170   NKVACTR = {"EVALUATE - evaluator passed a NIL reference"}; 
A_GISVEC(A68_VC ,OKVACTR,NKVACTR,43)
static A68_41   JLVACTR = {"A68_NIL"}; 
A_GISVEC(A68_VC ,KLVACTR,JLVACTR,7)
static A68_174   NLVACTR = {"EVALUATE - Unknown NSE"}; 
A_GISVEC(A68_VC ,OLVACTR,NLVACTR,22)
static A68_175   ULVACTR = {"/* VOID? */"}; 
A_GISVEC(A68_VC ,VLVACTR,ULVACTR,11)
static A68_166   YLVACTR = {"EVALUATE - evaluation not defined for this value"}; 
A_GISVEC(A68_VC ,ZLVACTR,YLVACTR,48)

A_STATIC A68_VOID  QGVACTR_unimplementedop(A68_32 * Root, A68_33  Oper, A68_32  *ReturnedValue);

A_STATIC A68_VOID  BHVACTR_spareop(A68_32 * Value, A68_33  Oper, A68_32  *ReturnedValue);

A_STATIC A68_VOID  MHVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue);

A_STATIC A68_VOID  WHVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue);

A_STATIC A68_VOID  HIVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue);

A_STATIC A68_VOID  QIVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue);

A_STATIC A68_VOID  GJVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue);

A_STATIC A68_VOID  MKVACTR_evalnotrace(A68_32 * Root);

A_STATIC A68_32 * TKVACTR_assignment(A68_32 * RKVACTR_anonymous, A68_32  SKVACTR_anonymous);

A_STATIC A68_35 * YKVACTR_assignment(A68_35 * WKVACTR_anonymous, A68_35  XKVACTR_anonymous);

A_STATIC A68_VOID  BMVACTR_evaltrace(A68_32 * Root);

A68_VOID  GMVACTR_evaluatestack(A68_34 ** Valuestack);

A68_VOID  IMVACTR_initialiseevaluator(void);

A_STATIC A68_35 * YKVACTR_assignment(A68_35 * WKVACTR_anonymous, A68_35  XKVACTR_anonymous)
{ 
A68_35  ZKVACTR;  /* united object - for case conformity */
A68_VC  ALVACTR_anonymous A_UNUSED = {0};
A68_VC  BLVACTR;  /* OPERATORS - copy to flex */
A68_173 * CLVACTR;  /* YIELD */
A68_35 * DLVACTR;  /* clause result */
{ 
(*WKVACTR_anonymous) = XKVACTR_anonymous;
ZKVACTR = XKVACTR_anonymous ;
switch ( ZKVACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
ALVACTR_anonymous = (ZKVACTR.data.mode6);
CLVACTR = &(WKVACTR_anonymous-> data.mode6) ;
(void)((*CLVACTR) = A_VCOPY(ALVACTR_anonymous,BLVACTR,A68_CHAR ));
break;
default: 
/*SKIP*/;
break;
} 
DLVACTR = WKVACTR_anonymous;
} 
return( DLVACTR );
} 
#undef NL

A_STATIC A68_32 * TKVACTR_assignment(A68_32 * RKVACTR_anonymous, A68_32  SKVACTR_anonymous)
{ 
A68_INT * UKVACTR;  /* YIELD */
A68_BITS * VKVACTR;  /* YIELD */
A68_32 * ELVACTR;  /* clause result */
{ 
UKVACTR = (&(RKVACTR_anonymous->Mode)) ;
(*UKVACTR) = SKVACTR_anonymous.Mode;
VKVACTR = (&(RKVACTR_anonymous->Info)) ;
(*VKVACTR) = SKVACTR_anonymous.Info;
(void)(YKVACTR_assignment((&(RKVACTR_anonymous->Extra)), SKVACTR_anonymous.Extra));
ELVACTR = RKVACTR_anonymous;
} 
return( ELVACTR );
} 
#undef NL

A_STATIC A68_VOID  QGVACTR_unimplementedop(A68_32 * Root, A68_33  Oper, A68_32  *ReturnedValue)
{ 
A68_32  RGVACTR;  /* collateral clause result */
A68_35  UGVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  VGVACTR;  /* YIELD */
A68_32  WGVACTR;  /* clause result */
A_PROC_ENTRY(unimplementedop);
 /* line 47: */
 /* line 48: */
{ 
RGVACTR.Mode = (*(&(Root->Mode)));
RGVACTR.Info = PKJACTR_defaultinfo;
 /* line 49: */
VGVACTR = TGVACTR ;
RGVACTR.Extra = A_UNITE(UGVACTR,mode6,6,VGVACTR);
WGVACTR = RGVACTR;
} 
A_PROC_EXIT(unimplementedop);
*ReturnedValue = (WGVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  BHVACTR_spareop(A68_32 * Value, A68_33  Oper, A68_32  *ReturnedValue)
{ 
A68_32  EHVACTR;  /* clause result */
A_PROC_ENTRY(spareop);
 /* line 56: */
{ 
(void)(WXIACTR_assert(DHVACTR, A68_FALSE));
EHVACTR = DLJACTR_skipvalue;
} 
A_PROC_EXIT(spareop);
*ReturnedValue = (EHVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  MHVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue)
{ 
A68_32  PHVACTR;  /* clause result */
 /* line 64: */
{ 
(void)(WXIACTR_assert(OHVACTR, A68_FALSE));
PHVACTR = DLJACTR_skipvalue;
} 
*ReturnedValue = (PHVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  WHVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue)
{ 
A68_32  ZHVACTR;  /* clause result */
A68_32  AIVACTR = {0};  /* OPERATORS - skip to mode */
 /* line 69: */
{ 
(void)(WXIACTR_assert(YHVACTR, A68_FALSE));
ZHVACTR = AIVACTR;
} 
*ReturnedValue = (ZHVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HIVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue)
{ 
A68_32  KIVACTR;  /* clause result */
 /* line 74: */
{ 
(void)(WXIACTR_assert(JIVACTR, A68_FALSE));
KIVACTR = DLJACTR_skipvalue;
} 
*ReturnedValue = (KIVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  QIVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue)
{ 
A68_32  TIVACTR;  /* clause result */
A68_32  UIVACTR = {0};  /* OPERATORS - skip to mode */
 /* line 78: */
{ 
(void)(WXIACTR_assert(SIVACTR, A68_FALSE));
TIVACTR = UIVACTR;
} 
*ReturnedValue = (TIVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  GJVACTR_anonymous(A68_32 * V, A68_33  Param, A68_32  *ReturnedValue)
{ 
A68_32  JJVACTR;  /* clause result */
 /* line 88: */
{ 
(void)(WXIACTR_assert(IJVACTR, A68_FALSE));
JJVACTR = DLJACTR_skipvalue;
} 
*ReturnedValue = (JJVACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  MKVACTR_evalnotrace(A68_32 * Root)
{ 
A68_35  PKVACTR;  /* united object - for case conformity */
A68_33  QKVACTR_rator A_UNUSED = {0};
A68_INT  FLVACTR;  /* YIELD */
A68_31  GLVACTR;  /* CALL */
A68_32  HLVACTR;  /* avoid structure result */
A68_40  ILVACTR_nihil A_UNUSED = {0};
A68_35  LLVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  MLVACTR;  /* YIELD */
A68_36  PLVACTR_r A_UNUSED = {0};
A68_37  QLVACTR_id A_UNUSED = {0};
A68_38  RLVACTR_temp A_UNUSED = {0};
A68_39  SLVACTR_label A_UNUSED = {0};
A68_VC  TLVACTR_cf A_UNUSED = {0};
A68_35  WLVACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  XLVACTR;  /* YIELD */
A_PROC_ENTRY(evalnotrace);
 /* line 120: */
 /* line 121: */
{ 
(void)(WXIACTR_assert(OKVACTR, (Root!=(A68_32 *)A68_NIL)));
 /* line 122: */
 /* line 123: */
PKVACTR = (*(&(Root->Extra))) ;
switch ( PKVACTR.mode )
{ 
case 9: /* STRUCT(INT,INT,REF MODE34)  */
QKVACTR_rator = (PKVACTR.data.mode9);
 /* line 124: */
 /* line 126: */
FLVACTR = QKVACTR_rator.Fn ;
GLVACTR = A_R1INDEX(KKVACTR_opersemantics,FLVACTR) ;
A_CALLPROC(GLVACTR,(Root, QKVACTR_rator, &HLVACTR),(Root, QKVACTR_rator, &HLVACTR,(GLVACTR).nonlocals));
(void)(TKVACTR_assignment(Root, HLVACTR));
break;
case 8: /* STRUCT(INT)  */
ILVACTR_nihil = (PKVACTR.data.mode8);
 /* line 127: */
 /* line 128: */
switch ( ILVACTR_nihil.Nse )
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
MLVACTR = KLVACTR ;
(void)(YKVACTR_assignment((&(Root->Extra)), A_UNITE(LLVACTR,mode6,6,MLVACTR)));
break;
default: 
(void)(WXIACTR_assert(OLVACTR, A68_FALSE));
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
PLVACTR_r = (PKVACTR.data.mode2);
 /* line 138: */
 /* line 140: */
/*SKIP*/;
break;
case 4: /* STRUCT(INT)  */
QLVACTR_id = (PKVACTR.data.mode4);
 /* line 141: */
 /* line 143: */
/*SKIP*/;
break;
case 5: /* STRUCT(MODE41,INT)  */
RLVACTR_temp = (PKVACTR.data.mode5);
 /* line 144: */
 /* line 146: */
/*SKIP*/;
break;
case 7: /* STRUCT(INT)  */
SLVACTR_label = (PKVACTR.data.mode7);
 /* line 147: */
 /* line 149: */
/*SKIP*/;
break;
case 6: /* VECTOR [] CHAR */
TLVACTR_cf = (PKVACTR.data.mode6);
 /* line 150: */
 /* line 152: */
/*SKIP*/;
break;
case 3: /* VOID */
 /* line 153: */
 /* line 155: */
XLVACTR = VLVACTR ;
(void)(YKVACTR_assignment((&(Root->Extra)), A_UNITE(WLVACTR,mode6,6,XLVACTR)));
break;
default: 
 /* line 156: */
 /* line 157: */
(void)(WXIACTR_assert(ZLVACTR, A68_FALSE));
break;
} 
} 
A_PROC_EXIT(evalnotrace);
return;
} 
#undef NL

A_STATIC A68_VOID  BMVACTR_evaltrace(A68_32 * Root)
{ 
A68_BITS  CMVACTR;  /* ADICOPS - >= */
A68_83  DMVACTR;  /* procedure value */
A68_83  EMVACTR;  /* procedure value */
A_PROC_ENTRY(evaltrace);
 /* line 164: */
 /* line 165: */
{ 
(void)(A_CALLPROC(XGVACTR_calltrace,(Root, A68_FALSE),(Root, A68_FALSE,(XGVACTR_calltrace).nonlocals)));
 /* line 166: */
 /* line 167: */
CMVACTR = PJJACTR_tracelevelflags() ;
if (A_LB_GE(CMVACTR,YGVACTR_tracealllevels))
{ 
 /* line 169: */
 /* line 170: */
(void)(MKVACTR_evalnotrace(Root));
} 
else
{ 
DMVACTR.fn.fn_global = MKVACTR_evalnotrace;
DMVACTR.nonlocals = A68_NIL;
BYQACTR_evaluate = DMVACTR;
 /* line 171: */
(void)(MKVACTR_evalnotrace(Root));
 /* line 172: */
 /* line 173: */
EMVACTR.fn.fn_global = BMVACTR_evaltrace;
EMVACTR.nonlocals = A68_NIL;
BYQACTR_evaluate = EMVACTR;
} 
 /* line 174: */
 /* line 175: */
(void)(A_CALLPROC(XGVACTR_calltrace,(Root, A68_TRUE),(Root, A68_TRUE,(XGVACTR_calltrace).nonlocals)));
} 
A_PROC_EXIT(evaltrace);
return;
} 
#undef NL

A68_VOID  GMVACTR_evaluatestack(A68_34 ** Valuestack)
{ 
A68_34 * HMVACTR_kcatseulav A_UNUSED = {0};
A_PROC_ENTRY(evaluatestack);
 /* line 185: */
 /* line 186: */
 /* line 187: */
if ((*(&((*Valuestack)->Rest)))==MKJACTR_nilvaluelist)
{ 
 /* line 188: */
 /* line 189: */
(void)(A_CALLPROC(BYQACTR_evaluate,((&((*Valuestack)->Value))),((&((*Valuestack)->Value)),(BYQACTR_evaluate).nonlocals)));
} 
else
{ 
HMVACTR_kcatseulav = OEQACTR_reversevaluelist((*Valuestack));
 /* line 190: */
for ( ;; )
{ 
 /* line 191: */
 /* line 192: */
if ( !(((*(&(HMVACTR_kcatseulav->Rest)))!=MKJACTR_nilvaluelist)) ) break;
(void)(A_CALLPROC(BYQACTR_evaluate,((&(HMVACTR_kcatseulav->Value))),((&(HMVACTR_kcatseulav->Value)),(BYQACTR_evaluate).nonlocals)));
 /* line 193: */
 /* line 194: */
(void)(HMVACTR_kcatseulav = (*(&(HMVACTR_kcatseulav->Rest))));
}
 /* line 195: */
(void)(JXIACTR_warning(799));
 /* line 197: */
(*Valuestack) = HMVACTR_kcatseulav;
 /* line 198: */
 /* line 199: */
(void)(A_CALLPROC(BYQACTR_evaluate,((&((*Valuestack)->Value))),((&((*Valuestack)->Value)),(BYQACTR_evaluate).nonlocals)));
} 
A_PROC_EXIT(evaluatestack);
return;
} 
#undef NL

A68_VOID  IMVACTR_initialiseevaluator(void)
{ 
A68_83  JMVACTR;  /* clause result */
A68_83  KMVACTR;  /* procedure value */
A68_83  LMVACTR;  /* procedure value */
A_PROC_ENTRY(initialiseevaluator);
if (LJJACTR_traceon)
{ 
KMVACTR.fn.fn_global = BMVACTR_evaltrace;
KMVACTR.nonlocals = A68_NIL;
JMVACTR = KMVACTR;
} 
else
{ 
 /* line 204: */
LMVACTR.fn.fn_global = MKVACTR_evalnotrace;
LMVACTR.nonlocals = A68_NIL;
JMVACTR = LMVACTR;
} 
BYQACTR_evaluate = JMVACTR;
A_PROC_EXIT(initialiseevaluator);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 6: */
void JGVACTR(void)   /* initialise DECS evaluator */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel","-dir",".","evaluator.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/vak/Project/Algol/Algol-68RS-Source/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/vak/Project/Algol/Algol-68RS-Source/a68config/a68config.m","./moduletracer.m","./unionaids.m","./values.m","./incvalue.m","./modes.m","./incmode.m","./uniquenameserver.m","./coutput.m","./evalbase.m","./environment.m","./centities.m","./idtable.m","./operators.m","./adicops.m",""};
static A_CONFIG_INFO A_config A_UNUSED;
/* --- end of configuration information */
A68_169  FHVACTR;  /* collateral clause result */
A68_31  GHVACTR;  /* procedure value */
A68_31  HHVACTR;  /* procedure value */
A68_31  IHVACTR;  /* procedure value */
A68_31  JHVACTR;  /* procedure value */
A68_31  QHVACTR;  /* procedure value */
A68_31  RHVACTR;  /* procedure value */
A68_31  SHVACTR;  /* procedure value */
A68_31  THVACTR;  /* procedure value */
A68_31  BIVACTR;  /* procedure value */
A68_31  CIVACTR;  /* procedure value */
A68_31  DIVACTR;  /* procedure value */
A68_31  EIVACTR;  /* procedure value */
A68_31  LIVACTR;  /* procedure value */
A68_31  MIVACTR;  /* procedure value */
A68_31  NIVACTR;  /* procedure value */
A68_31  VIVACTR;  /* procedure value */
A68_31  WIVACTR;  /* procedure value */
A68_31  XIVACTR;  /* procedure value */
A68_31  YIVACTR;  /* procedure value */
A68_31  ZIVACTR;  /* procedure value */
A68_31  AJVACTR;  /* procedure value */
A68_31  BJVACTR;  /* procedure value */
A68_31  CJVACTR;  /* procedure value */
A68_31  DJVACTR;  /* procedure value */
A68_31  KJVACTR;  /* procedure value */
A68_31  LJVACTR;  /* procedure value */
A68_31  MJVACTR;  /* procedure value */
A68_31  NJVACTR;  /* procedure value */
A68_31  OJVACTR;  /* procedure value */
A68_31  PJVACTR;  /* procedure value */
A68_31  QJVACTR;  /* procedure value */
A68_31  RJVACTR;  /* procedure value */
A68_31  SJVACTR;  /* procedure value */
A68_31  TJVACTR;  /* procedure value */
A68_31  UJVACTR;  /* procedure value */
A68_31  VJVACTR;  /* procedure value */
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
A68_163  JKVACTR;  /* OPERATORS - istruct to row */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
BCHACTR();   /* USE moduletracer */
VUQACTR();   /* USE unionaids */
OUPACTR();   /* USE values */
GKJACTR();   /* USE incvalue */
DNMACTR();   /* USE modes */
ZDAACTR();   /* USE incmode */
RHMACTR();   /* USE uniquenameserver */
PTLACTR();   /* USE coutput */
WXQACTR();   /* USE evalbase */
HPIACTR();   /* USE environment */
THAACTR();   /* USE centities */
PPKACTR();   /* USE idtable */
RZQACTR();   /* USE operators */
PHTACTR();   /* USE adicops */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/evaluator.a68";
A_config.translation_time = "Thu Nov  5 21:38:58 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "IGVACTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 21:38:58 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS evaluator);
(void)(UEAALIB_a68config(LGAALIB_configinfo, NGVACTR));
 /* line 46: */
 /* line 51: */
 /* line 53: */
 /* line 55: */
 /* line 58: */
 /* line 59: */
 /* line 60: */
GHVACTR.fn.fn_global = OCRACTR_staticpartgenerator;
GHVACTR.nonlocals = A68_NIL;
FHVACTR.data[0] = GHVACTR;
 /* line 61: */
HHVACTR.fn.fn_global = BHVACTR_spareop;
HHVACTR.nonlocals = A68_NIL;
FHVACTR.data[1] = HHVACTR;
 /* line 62: */
IHVACTR.fn.fn_global = MDRACTR_selectop;
IHVACTR.nonlocals = A68_NIL;
FHVACTR.data[2] = IHVACTR;
 /* line 63: */
JHVACTR.fn.fn_global = KERACTR_copytoflex;
JHVACTR.nonlocals = A68_NIL;
FHVACTR.data[3] = JHVACTR;
 /* line 65: */
QHVACTR.fn.fn_global = MHVACTR_anonymous;
QHVACTR.nonlocals = A68_NIL;
FHVACTR.data[4] = QHVACTR;
 /* line 66: */
RHVACTR.fn.fn_global = VFRACTR_simpleindexop;
RHVACTR.nonlocals = A68_NIL;
FHVACTR.data[5] = RHVACTR;
 /* line 67: */
SHVACTR.fn.fn_global = TLRACTR_trimindexop;
SHVACTR.nonlocals = A68_NIL;
FHVACTR.data[6] = SHVACTR;
 /* line 68: */
THVACTR.fn.fn_global = TQRACTR_dynamicgenerator;
THVACTR.nonlocals = A68_NIL;
FHVACTR.data[7] = THVACTR;
 /* line 70: */
BIVACTR.fn.fn_global = WHVACTR_anonymous;
BIVACTR.nonlocals = A68_NIL;
FHVACTR.data[8] = BIVACTR;
 /* line 71: */
CIVACTR.fn.fn_global = VFVACTR_dyadicsem;
CIVACTR.nonlocals = A68_NIL;
FHVACTR.data[9] = CIVACTR;
 /* line 72: */
DIVACTR.fn.fn_global = LBUACTR_monadicsem;
DIVACTR.nonlocals = A68_NIL;
FHVACTR.data[10] = DIVACTR;
 /* line 73: */
EIVACTR.fn.fn_global = OURACTR_straighten;
EIVACTR.nonlocals = A68_NIL;
FHVACTR.data[11] = EIVACTR;
 /* line 75: */
LIVACTR.fn.fn_global = HIVACTR_anonymous;
LIVACTR.nonlocals = A68_NIL;
FHVACTR.data[12] = LIVACTR;
 /* line 76: */
MIVACTR.fn.fn_global = ETRACTR_straightindexop;
MIVACTR.nonlocals = A68_NIL;
FHVACTR.data[13] = MIVACTR;
 /* line 77: */
NIVACTR.fn.fn_global = NYRACTR_assignop;
NIVACTR.nonlocals = A68_NIL;
FHVACTR.data[14] = NIVACTR;
 /* line 79: */
VIVACTR.fn.fn_global = QIVACTR_anonymous;
VIVACTR.nonlocals = A68_NIL;
FHVACTR.data[15] = VIVACTR;
 /* line 80: */
WIVACTR.fn.fn_global = UASACTR_derefop;
WIVACTR.nonlocals = A68_NIL;
FHVACTR.data[16] = WIVACTR;
 /* line 81: */
XIVACTR.fn.fn_global = VBSACTR_callop;
XIVACTR.nonlocals = A68_NIL;
FHVACTR.data[17] = XIVACTR;
 /* line 82: */
YIVACTR.fn.fn_global = FISACTR_voidop;
YIVACTR.nonlocals = A68_NIL;
FHVACTR.data[18] = YIVACTR;
 /* line 83: */
ZIVACTR.fn.fn_global = PJSACTR_niltomodeop;
ZIVACTR.nonlocals = A68_NIL;
FHVACTR.data[19] = ZIVACTR;
 /* line 84: */
AJVACTR.fn.fn_global = FKSACTR_gototoproc;
AJVACTR.nonlocals = A68_NIL;
FHVACTR.data[20] = AJVACTR;
 /* line 85: */
BJVACTR.fn.fn_global = SKSACTR_gototomode;
BJVACTR.nonlocals = A68_NIL;
FHVACTR.data[21] = BJVACTR;
 /* line 86: */
CJVACTR.fn.fn_global = TMSACTR_realtocomplex;
CJVACTR.nonlocals = A68_NIL;
FHVACTR.data[22] = CJVACTR;
 /* line 87: */
DJVACTR.fn.fn_global = JMSACTR_inttoreal;
DJVACTR.nonlocals = A68_NIL;
FHVACTR.data[23] = DJVACTR;
 /* line 89: */
KJVACTR.fn.fn_global = GJVACTR_anonymous;
KJVACTR.nonlocals = A68_NIL;
FHVACTR.data[24] = KJVACTR;
 /* line 90: */
LJVACTR.fn.fn_global = LNSACTR_rowstorowrows;
LJVACTR.nonlocals = A68_NIL;
FHVACTR.data[25] = LJVACTR;
 /* line 91: */
MJVACTR.fn.fn_global = KOSACTR_vectortorow;
MJVACTR.nonlocals = A68_NIL;
FHVACTR.data[26] = MJVACTR;
 /* line 92: */
NJVACTR.fn.fn_global = VSSACTR_istructtovector;
NJVACTR.nonlocals = A68_NIL;
FHVACTR.data[27] = NJVACTR;
 /* line 93: */
OJVACTR.fn.fn_global = APSACTR_modetostruct1mode;
OJVACTR.nonlocals = A68_NIL;
FHVACTR.data[28] = OJVACTR;
 /* line 94: */
PJVACTR.fn.fn_global = PPSACTR_unitesimple;
PJVACTR.nonlocals = A68_NIL;
FHVACTR.data[29] = PJVACTR;
 /* line 95: */
QJVACTR.fn.fn_global = GRSACTR_uniteunion;
QJVACTR.nonlocals = A68_NIL;
FHVACTR.data[30] = QJVACTR;
 /* line 96: */
RJVACTR.fn.fn_global = NUSACTR_istructtorow;
RJVACTR.nonlocals = A68_NIL;
FHVACTR.data[31] = RJVACTR;
 /* line 97: */
SJVACTR.fn.fn_global = IYSACTR_skiptomode;
SJVACTR.nonlocals = A68_NIL;
FHVACTR.data[32] = SJVACTR;
 /* line 98: */
FHVACTR.data[33] = EYSACTR_scalartovector;
 /* line 99: */
FHVACTR.data[34] = CYSACTR_scalartorow;
 /* line 100: */
TJVACTR.fn.fn_global = QYSACTR_deunite;
TJVACTR.nonlocals = A68_NIL;
FHVACTR.data[35] = TJVACTR;
 /* line 101: */
UJVACTR.fn.fn_global = FZSACTR_bitstorowbool;
UJVACTR.nonlocals = A68_NIL;
FHVACTR.data[36] = UJVACTR;
 /* line 102: */
VJVACTR.fn.fn_global = LATACTR_vacuum;
VJVACTR.nonlocals = A68_NIL;
FHVACTR.data[37] = VJVACTR;
 /* line 103: */
WJVACTR.fn.fn_global = YATACTR_ytypetom;
WJVACTR.nonlocals = A68_NIL;
FHVACTR.data[38] = WJVACTR;
 /* line 104: */
XJVACTR.fn.fn_global = EBTACTR_mtoxtype;
XJVACTR.nonlocals = A68_NIL;
FHVACTR.data[39] = XJVACTR;
 /* line 105: */
YJVACTR.fn.fn_global = BHVACTR_spareop;
YJVACTR.nonlocals = A68_NIL;
FHVACTR.data[40] = YJVACTR;
 /* line 106: */
ZJVACTR.fn.fn_global = BHVACTR_spareop;
ZJVACTR.nonlocals = A68_NIL;
FHVACTR.data[41] = ZJVACTR;
 /* line 107: */
AKVACTR.fn.fn_global = BHVACTR_spareop;
AKVACTR.nonlocals = A68_NIL;
FHVACTR.data[42] = AKVACTR;
 /* line 108: */
BKVACTR.fn.fn_global = BHVACTR_spareop;
BKVACTR.nonlocals = A68_NIL;
FHVACTR.data[43] = BKVACTR;
 /* line 109: */
CKVACTR.fn.fn_global = BHVACTR_spareop;
CKVACTR.nonlocals = A68_NIL;
FHVACTR.data[44] = CKVACTR;
 /* line 110: */
DKVACTR.fn.fn_global = BHVACTR_spareop;
DKVACTR.nonlocals = A68_NIL;
FHVACTR.data[45] = DKVACTR;
 /* line 111: */
EKVACTR.fn.fn_global = BHVACTR_spareop;
EKVACTR.nonlocals = A68_NIL;
FHVACTR.data[46] = EKVACTR;
 /* line 112: */
FKVACTR.fn.fn_global = BHVACTR_spareop;
FKVACTR.nonlocals = A68_NIL;
FHVACTR.data[47] = FKVACTR;
 /* line 114: */
GKVACTR.fn.fn_global = BHVACTR_spareop;
GKVACTR.nonlocals = A68_NIL;
FHVACTR.data[48] = GKVACTR;
 /* line 116: */
HKVACTR.fn.fn_global = KBTACTR_staticgenerator;
HKVACTR.nonlocals = A68_NIL;
FHVACTR.data[49] = HKVACTR;
IKVACTR.fn.fn_global = QGVACTR_unimplementedop;
IKVACTR.nonlocals = A68_NIL;
FHVACTR.data[50] = IKVACTR;
KKVACTR_opersemantics = A_HIS1ARR(JKVACTR,FHVACTR,A68_31 ,51);
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
