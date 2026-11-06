/* UNAME:MGYACTR */
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
struct A68t55 ;

A_PROCEDURE(A68_VOID ,A68t54,(struct A68t55 ,struct A68t36 ),(struct A68t55 ,struct A68t36 ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(MODE55,MODE36) VOID */
struct A68t55{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t56 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t55  A68_55 ;    /* STRUCT(INT,REF MODE56,BITS)  */
A_VECTOR(struct A68t58 ,A68t57);
typedef struct A68t57  A68_57 ;    /* VECTOR [] MODE58 */
struct A68t58{
struct A68t55  Msgno;
A68_VC  Text;
};
typedef struct A68t58  A68_58 ;    /* STRUCT(MODE55,REF MODE26)  */
struct A68t56{
A68_VC  Name;
struct A68t57  Messages;
};
typedef struct A68t56  A68_56 ;    /* STRUCT(REF MODE26,REF MODE57)  */
struct A68t59{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t59  A68_59 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t60{
A68_INT  Status;
A_PAD_INT(PAD_3)
};
typedef struct A68t60  A68_60 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_BOOL ,A68t61,(struct A68t60 ,struct A68t60 ),(struct A68t60 ,struct A68t60 ,void *));
typedef struct A68t61  A68_61 ;    /* PROC(MODE60,MODE60) BOOL */
struct A68t62{
struct A68t40  Access;
A_PAD_ISTRUCT(A68_40 ,PAD_4)
};
typedef struct A68t62  A68_62 ;    /* STRUCT(MODE40)  */

A_PROCEDURE(A68_VOID ,A68t63,(struct A68t59 *,A68_VC *),(struct A68t59 *,A68_VC *,void *));
typedef struct A68t63  A68_63 ;    /* PROC(REF MODE59) MODE26 */

A_PROCEDURE(struct A68t59 *,A68t64,(A68_VC ,struct A68t62 ,struct A68t54 ),(A68_VC ,struct A68t62 ,struct A68t54 ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(MODE26,MODE62,MODE54) REF MODE59 */

A_PROCEDURE(A68_VOID ,A68t65,(struct A68t59 *,struct A68t54 ),(struct A68t59 *,struct A68t54 ,void *));
typedef struct A68t65  A68_65 ;    /* PROC(REF MODE59,MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t66,(struct A68t59 *,A68_VC ,A68_INT *,struct A68t54 ,struct A68t60 *),(struct A68t59 *,A68_VC ,A68_INT *,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t66  A68_66 ;    /* PROC(REF MODE59,REF MODE26,REF INT,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t67,(struct A68t59 *,A68_VC ,struct A68t54 ,struct A68t60 *),(struct A68t59 *,A68_VC ,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t67  A68_67 ;    /* PROC(REF MODE59,MODE26,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t68,(struct A68t59 *,A68_LINT ,struct A68t54 ,struct A68t60 *),(struct A68t59 *,A68_LINT ,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t68  A68_68 ;    /* PROC(REF MODE59,LONG INT,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t69,(struct A68t59 *,A68_LINT *,struct A68t54 ,struct A68t60 *),(struct A68t59 *,A68_LINT *,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t69  A68_69 ;    /* PROC(REF MODE59,REF LONG INT,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t70,(struct A68t59 *,struct A68t54 ,struct A68t60 *),(struct A68t59 *,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t70  A68_70 ;    /* PROC(REF MODE59,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t71,(A68_VC ,struct A68t54 ,struct A68t60 *),(A68_VC ,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t71  A68_71 ;    /* PROC(MODE26,MODE54) MODE60 */

A_PROCEDURE(A68_VOID ,A68t72,(A68_VC ,A68_VC ,struct A68t54 ,struct A68t60 *),(A68_VC ,A68_VC ,struct A68t54 ,struct A68t60 *,void *));
typedef struct A68t72  A68_72 ;    /* PROC(MODE26,MODE26,MODE54) MODE60 */
struct A68t73{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_5)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_6)
A68_SINT  Device;
A_PAD_SINT(PAD_7)
A68_SINT  Links;
A_PAD_SINT(PAD_8)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_9)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_10)
A68_LINT  Size;
A_PAD_LINT(PAD_11)
A68_LINT  Accessed;
A_PAD_LINT(PAD_12)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_13)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_14)
};
typedef struct A68t73  A68_73 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t75 ;

A_PROCEDURE(struct A68t73 *,A68t74,(struct A68t75 ,struct A68t54 ),(struct A68t75 ,struct A68t54 ,void *));
typedef struct A68t74  A68_74 ;    /* PROC(MODE75,MODE54) REF MODE73 */
struct A68t75 { A68_INT mode; union {
struct A68t59 * mode1;
A68_VC  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t75  A68_75 ;    /* UNION(REF MODE59,MODE26)  */

A_PROCEDURE(A68_BOOL ,A68t76,(struct A68t59 *),(struct A68t59 *,void *));
typedef struct A68t76  A68_76 ;    /* PROC(REF MODE59) BOOL */

A_PROCEDURE(A68_BITS *,A68t77,(A68_VC ,struct A68t54 ),(A68_VC ,struct A68t54 ,void *));
typedef struct A68t77  A68_77 ;    /* PROC(MODE26,MODE54) REF BITS */

A_PROCEDURE(A68_VOID ,A68t78,(A68_BITS *,struct A68t54 ),(A68_BITS *,struct A68t54 ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(REF BITS,MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t79,(A68_BITS *,struct A68t54 ,A68_VC *),(A68_BITS *,struct A68t54 ,A68_VC *,void *));
typedef struct A68t79  A68_79 ;    /* PROC(REF BITS,MODE54) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t80,(A68_VC *),(A68_VC *,void *));
typedef struct A68t80  A68_80 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t81,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t81  A68_81 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_LINT ,A68t82,(void),(void *));
typedef struct A68t82  A68_82 ;    /* PROC LONG INT */

A_PROCEDURE(A68_VOID ,A68t83,(A68_LINT ,A68_VC *),(A68_LINT ,A68_VC *,void *));
typedef struct A68t83  A68_83 ;    /* PROC(LONG INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t84,(A68_INT ),(A68_INT ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_INT ,A68t85,(A68_VC ,struct A68t54 ),(A68_VC ,struct A68t54 ,void *));
typedef struct A68t85  A68_85 ;    /* PROC(MODE26,MODE54) INT */

A_PROCEDURE(A68_INT ,A68t86,(void),(void *));
typedef struct A68t86  A68_86 ;    /* PROC INT */
struct A68t87{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t87  A68_87 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t88,(A68_VC ,A68_VC ,struct A68t54 ,struct A68t87 *),(A68_VC ,A68_VC ,struct A68t54 ,struct A68t87 *,void *));
typedef struct A68t88  A68_88 ;    /* PROC(MODE26,MODE26,MODE54) MODE87 */

A_PROCEDURE(A68_VOID ,A68t89,(struct A68t36 *),(struct A68t36 *,void *));
typedef struct A68t89  A68_89 ;    /* PROC MODE36 */

A_PROCEDURE(A68_VOID ,A68t90,(A68_VC ,struct A68t54 ,struct A68t36 *),(A68_VC ,struct A68t54 ,struct A68t36 *,void *));
typedef struct A68t90  A68_90 ;    /* PROC(MODE26,MODE54) MODE36 */
struct A68t92 ;

A_PROCEDURE(A68_VOID ,A68t91,(struct A68t92 ,struct A68t54 ,struct A68t54 ),(struct A68t92 ,struct A68t54 ,struct A68t54 ,void *));
typedef struct A68t91  A68_91 ;    /* PROC(MODE92,MODE54,MODE54) VOID */
A_VECTOR(A68_INT ,A68t92);
typedef struct A68t92  A68_92 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t93,(struct A68t92 ,struct A68t54 ),(struct A68t92 ,struct A68t54 ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(MODE92,MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t94,(A68_INT ,struct A68t54 ,struct A68t54 *),(A68_INT ,struct A68t54 ,struct A68t54 *,void *));
typedef struct A68t94  A68_94 ;    /* PROC(INT,MODE54) MODE54 */

A_PROCEDURE(A68_VOID ,A68t95,(void),(void *));
typedef struct A68t95  A68_95 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t96,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t96  A68_96 ;    /* PROC(BITS) VOID */
struct A68t98 ;

A_PROCEDURE(A68_VOID ,A68t97,(struct A68t98 ),(struct A68t98 ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(MODE98) VOID */

A_PROCEDURE(A68_VOID ,A68t98,(A68_VC ),(A68_VC ,void *));
typedef struct A68t98  A68_98 ;    /* PROC(MODE26) VOID */
struct A68t99{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_15)
};
typedef struct A68t99  A68_99 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t100,(A68_BOOL ,struct A68t99 *),(A68_BOOL ,struct A68t99 *,void *));
typedef struct A68t100  A68_100 ;    /* PROC(BOOL) MODE99 */
struct A68t102 ;

A_PROCEDURE(A68_VOID ,A68t101,(struct A68t102 ,struct A68t54 ),(struct A68t102 ,struct A68t54 ,void *));
typedef struct A68t101  A68_101 ;    /* PROC(MODE102,MODE54) VOID */
A_VECTOR(struct A68t99 ,A68t102);
typedef struct A68t102  A68_102 ;    /* VECTOR [] MODE99 */

A_PROCEDURE(A68_VOID ,A68t103,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t103  A68_103 ;    /* PROC(BOOL) MODE26 */
A_ISTRUCT(A68_CHAR ,7,A68t105);
typedef struct A68t105  A68_105 ;    /* STRUCT 7 CHAR */
struct A68t104{
struct A68t105  Name;
A_PAD_ISTRUCT(A68_105 ,PAD_16)
A68_BOOL  Set;
A_PAD_BOOL(PAD_17)
};
typedef struct A68t104  A68_104 ;    /* STRUCT(MODE105,BOOL)  */
struct A68t106{
A68_INT  Labno;
A_PAD_INT(PAD_18)
};
typedef struct A68t106  A68_106 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_INT ,A68t107,(A68_INT ),(A68_INT ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t108,(A68_INT ),(A68_INT ,void *));
typedef struct A68t108  A68_108 ;    /* PROC(INT) BOOL */
struct A68t109{
A68_INT  Level;
A_PAD_INT(PAD_19)
A68_INT  Block;
A_PAD_INT(PAD_20)
};
typedef struct A68t109  A68_109 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t110,(struct A68t109 *),(struct A68t109 *,void *));
typedef struct A68t110  A68_110 ;    /* PROC MODE109 */

A_PROCEDURE(A68_BOOL ,A68t111,(void),(void *));
typedef struct A68t111  A68_111 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t112,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t112  A68_112 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t113,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t113  A68_113 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t114,(struct A68t109 ,struct A68t109 ),(struct A68t109 ,struct A68t109 ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(MODE109,MODE109) BOOL */

A_PROCEDURE(A68_BOOL ,A68t115,(struct A68t109 ),(struct A68t109 ,void *));
typedef struct A68t115  A68_115 ;    /* PROC(MODE109) BOOL */
struct A68t117 ;

A_PROCEDURE(A68_VOID ,A68t116,(struct A68t117 ),(struct A68t117 ,void *));
typedef struct A68t116  A68_116 ;    /* PROC(MODE117) VOID */
A_VECTOR(struct A68t118 ,A68t117);
typedef struct A68t117  A68_117 ;    /* VECTOR [] MODE118 */
struct A68t118 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_SINT  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t118  A68_118 ;    /* UNION(CHAR,MODE26,SHORT INT)  */
struct A68t120 ;

A_PROCEDURE(A68_VOID ,A68t119,(struct A68t120 ,A68_INT ),(struct A68t120 ,A68_INT ,void *));
typedef struct A68t119  A68_119 ;    /* PROC(MODE120,INT) VOID */
A_VECTOR(struct A68t121 ,A68t120);
typedef struct A68t120  A68_120 ;    /* VECTOR [] MODE121 */
struct A68t121 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_INT  mode3;
A68_SINT  mode4;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t121  A68_121 ;    /* UNION(CHAR,MODE26,INT,SHORT INT)  */
struct A68t122{
A68_INT  Parameters;
A_PAD_INT(PAD_21)
A68_INT  Result;
A_PAD_INT(PAD_22)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_23)
};
typedef struct A68t122  A68_122 ;    /* STRUCT(INT,INT,BOOL)  */
A_ISTRUCT(A68_CHAR ,32,A68t124);
typedef struct A68t124  A68_124 ;    /* STRUCT 32 CHAR */
struct A68t123{
A68_INT  Mode;
A_PAD_INT(PAD_24)
A68_INT  Offset;
A_PAD_INT(PAD_25)
struct A68t124  Name;
A_PAD_ISTRUCT(A68_124 ,PAD_26)
};
typedef struct A68t123  A68_123 ;    /* STRUCT(INT,INT,MODE124)  */

A_PROCEDURE(A68_VOID ,A68t125,(A68_INT ,struct A68t92 *),(A68_INT ,struct A68t92 *,void *));
typedef struct A68t125  A68_125 ;    /* PROC(INT) REF MODE92 */

A_PROCEDURE(A68_VOID ,A68t126,(struct A68t123 *,A68_VC *),(struct A68t123 *,A68_VC *,void *));
typedef struct A68t126  A68_126 ;    /* PROC(REF MODE123) MODE26 */
struct A68t128 ;

A_PROCEDURE(A68_VOID ,A68t127,(A68_INT ,A68_VC ,struct A68t128 *),(A68_INT ,A68_VC ,struct A68t128 *,void *));
typedef struct A68t127  A68_127 ;    /* PROC(INT,MODE26) MODE128 */
struct A68t128{
struct A68t105  Name;
A_PAD_ISTRUCT(A68_105 ,PAD_27)
A68_INT  Mode;
A_PAD_INT(PAD_28)
};
typedef struct A68t128  A68_128 ;    /* STRUCT(MODE105,INT)  */
struct A68t130 ;

A_PROCEDURE(A68_VOID ,A68t129,(struct A68t130 ,A68_INT ),(struct A68t130 ,A68_INT ,void *));
typedef struct A68t129  A68_129 ;    /* PROC(REF MODE130,INT) VOID */
A_ROW(struct A68t131 ,A68t130,1);
typedef struct A68t130  A68_130 ;    /* [] MODE131 */
struct A68t141{
A68_INT  Mode;
A_PAD_INT(PAD_29)
};
typedef struct A68t141  A68_141 ;    /* STRUCT(INT)  */
struct A68t131 { A68_INT mode; union {
A68_INT  mode1;
struct A68t132 * mode2;
struct A68t133 * mode3;
struct A68t134 * mode4;
struct A68t135 * mode5;
struct A68t136 * mode6;
struct A68t137 * mode7;
struct A68t138 * mode8;
struct A68t139 * mode9;
struct A68t140 * mode10;
struct A68t141  mode11;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t131  A68_131 ;    /* UNION(INT,REF MODE132,REF MODE133,REF MODE134,REF MODE135,REF MODE136,REF MODE137,REF MODE138,REF MODE139,REF MODE140,MODE141)  */
struct A68t132{
A68_INT  Rdenno;
A_PAD_INT(PAD_30)
struct A68t145 * Modelist;
};
typedef struct A68t132  A68_132 ;    /* STRUCT(INT,REF MODE145)  */
struct A68t133{
A68_INT  Deproc;
A_PAD_INT(PAD_31)
struct A68t145 * Pars;
};
typedef struct A68t133  A68_133 ;    /* STRUCT(INT,REF MODE145)  */
struct A68t134{
A68_INT  Rdenno;
A_PAD_INT(PAD_32)
A68_INT  Deflex;
A_PAD_INT(PAD_33)
struct A68t144 * Sels;
};
typedef struct A68t134  A68_134 ;    /* STRUCT(INT,INT,REF MODE144)  */
struct A68t135{
A68_INT  Rdenno;
A_PAD_INT(PAD_34)
A68_INT  Imode;
A_PAD_INT(PAD_35)
A68_INT  Length;
A_PAD_INT(PAD_36)
A68_INT  Deflex;
A_PAD_INT(PAD_37)
};
typedef struct A68t135  A68_135 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t136{
A68_INT  Deproc;
A_PAD_INT(PAD_38)
};
typedef struct A68t136  A68_136 ;    /* STRUCT(INT)  */
struct A68t137{
A68_INT  Rdenno;
A_PAD_INT(PAD_39)
A68_INT  Vecmode;
A_PAD_INT(PAD_40)
A68_INT  Deflex;
A_PAD_INT(PAD_41)
};
typedef struct A68t137  A68_137 ;    /* STRUCT(INT,INT,INT)  */
struct A68t138{
A68_INT  Rdenno;
A_PAD_INT(PAD_42)
A68_INT  Mode;
A_PAD_INT(PAD_43)
A68_INT  Nods;
A_PAD_INT(PAD_44)
A68_INT  Deflex;
A_PAD_INT(PAD_45)
};
typedef struct A68t138  A68_138 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t139{
A68_INT  Mode;
A_PAD_INT(PAD_46)
struct A68t143 * Stenlist;
};
typedef struct A68t139  A68_139 ;    /* STRUCT(INT,REF MODE143)  */
struct A68t140{
A68_INT  Mode;
A_PAD_INT(PAD_47)
A68_INT  Modeproc;
A_PAD_INT(PAD_48)
struct A68t142 * El;
};
typedef struct A68t140  A68_140 ;    /* STRUCT(INT,INT,REF MODE142)  */
struct A68t142{
struct A68t140 * Am;
struct A68t142 * Rest;
};
typedef struct A68t142  A68_142 ;    /* STRUCT(REF MODE140,REF MODE142)  */
struct A68t143{
A68_INT  Mode;
A_PAD_INT(PAD_49)
A68_INT  Rdenno;
A_PAD_INT(PAD_50)
struct A68t143 * Rest;
};
typedef struct A68t143  A68_143 ;    /* STRUCT(INT,INT,REF MODE143)  */
struct A68t144{
A68_INT  Mode;
A_PAD_INT(PAD_51)
A68_INT  Fieldno;
A_PAD_INT(PAD_52)
struct A68t124  Name;
A_PAD_ISTRUCT(A68_124 ,PAD_53)
struct A68t144 * Rest;
};
typedef struct A68t144  A68_144 ;    /* STRUCT(INT,INT,MODE124,REF MODE144)  */
struct A68t145{
A68_INT  Mode;
A_PAD_INT(PAD_54)
struct A68t145 * Rest;
};
typedef struct A68t145  A68_145 ;    /* STRUCT(INT,REF MODE145)  */

A_PROCEDURE(A68_VOID ,A68t146,(A68_INT ,struct A68t122 *),(A68_INT ,struct A68t122 *,void *));
typedef struct A68t146  A68_146 ;    /* PROC(INT) MODE122 */
struct A68t148 ;

A_PROCEDURE(A68_VOID ,A68t147,(A68_INT ,struct A68t148 *),(A68_INT ,struct A68t148 *,void *));
typedef struct A68t147  A68_147 ;    /* PROC(INT) REF MODE148 */
A_VECTOR(struct A68t123 ,A68t148);
typedef struct A68t148  A68_148 ;    /* VECTOR [] MODE123 */

A_PROCEDURE(A68_INT ,A68t149,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t149  A68_149 ;    /* PROC(INT,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t150,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t150  A68_150 ;    /* PROC(INT,INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t151,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t151  A68_151 ;    /* PROC(INT,MODE26) VOID */
struct A68t153 ;
struct A68t154 ;

A_PROCEDURE(A68_VOID ,A68t152,(struct A68t153 ,struct A68t154 *,A68_INT ),(struct A68t153 ,struct A68t154 *,A68_INT ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(MODE153,REF MODE154,INT) VOID */
struct A68t153{
A68_INT  Type;
A_PAD_INT(PAD_55)
A68_VC  Name;
A68_INT  Mode;
A_PAD_INT(PAD_56)
A68_INT  Decno;
A_PAD_INT(PAD_57)
};
typedef struct A68t153  A68_153 ;    /* STRUCT(INT,REF MODE26,INT,INT)  */
struct A68t156{
A68_INT  Rdenno;
A_PAD_INT(PAD_58)
};
typedef struct A68t156  A68_156 ;    /* STRUCT(INT)  */
struct A68t157{
A68_INT  Idno;
A_PAD_INT(PAD_59)
};
typedef struct A68t157  A68_157 ;    /* STRUCT(INT)  */
struct A68t158{
A68_INT  Nse;
A_PAD_INT(PAD_60)
};
typedef struct A68t158  A68_158 ;    /* STRUCT(INT)  */
struct A68t159{
A68_INT  Fn;
A_PAD_INT(PAD_61)
A68_INT  Param;
A_PAD_INT(PAD_62)
struct A68t160 * Operands;
};
typedef struct A68t159  A68_159 ;    /* STRUCT(INT,INT,REF MODE160)  */
struct A68t155 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t156  mode2;
struct A68t157  mode4;
struct A68t128  mode5;
A68_VC  mode6;
struct A68t106  mode7;
struct A68t158  mode8;
struct A68t159  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t155  A68_155 ;    /* UNION(LONG BITS,MODE156,VOID,MODE157,MODE128,MODE26,MODE106,MODE158,MODE159)  */
struct A68t154{
A68_INT  Mode;
A_PAD_INT(PAD_63)
A68_BITS  Info;
A_PAD_BITS(PAD_64)
struct A68t155  Extra;
};
typedef struct A68t154  A68_154 ;    /* STRUCT(INT,BITS,MODE155)  */
struct A68t160{
struct A68t154  Value;
struct A68t160 * Rest;
};
typedef struct A68t160  A68_160 ;    /* STRUCT(MODE154,REF MODE160)  */

A_PROCEDURE(A68_VOID ,A68t161,(A68_INT ,struct A68t109 *),(A68_INT ,struct A68t109 *,void *));
typedef struct A68t161  A68_161 ;    /* PROC(INT) MODE109 */

A_PROCEDURE(A68_VOID ,A68t162,(A68_VC ,struct A68t105 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t105 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(REF MODE26,MODE105,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t163,(struct A68t153 ,struct A68t160 **),(struct A68t153 ,struct A68t160 **,void *));
typedef struct A68t163  A68_163 ;    /* PROC(MODE153,REF REF MODE160) VOID */
A_ROW(struct A68t165 ,A68t164,1);
typedef struct A68t164  A68_164 ;    /* [] MODE165 */
struct A68t165{
A68_INT  Mode;
A_PAD_INT(PAD_65)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_66)
struct A68t109  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t105  Prefix;
A_PAD_ISTRUCT(A68_105 ,PAD_67)
A68_BITS  Flags;
A_PAD_BITS(PAD_68)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t165  A68_165 ;    /* STRUCT(INT,INT,MODE109,REF MODE26,REF MODE26,MODE105,BITS,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t166,(struct A68t153 ),(struct A68t153 ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(MODE153) VOID */
struct A68t168 ;

A_PROCEDURE(A68_VOID ,A68t167,(struct A68t168 ),(struct A68t168 ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(MODE168) VOID */
struct A68t168{
A68_VC  Name;
A68_INT  Labno;
A_PAD_INT(PAD_69)
A68_INT  Status;
A_PAD_INT(PAD_70)
A68_BOOL  Notsetting;
A_PAD_BOOL(PAD_71)
};
typedef struct A68t168  A68_168 ;    /* STRUCT(REF MODE26,INT,INT,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t169,(A68_VC ,A68_INT ,struct A68t92 ,A68_INT ,A68_INT ,struct A68t109 ,A68_BITS ),(A68_VC ,A68_INT ,struct A68t92 ,A68_INT ,A68_INT ,struct A68t109 ,A68_BITS ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(REF MODE26,INT,REF MODE92,INT,INT,MODE109,BITS) VOID */
A_ROW(struct A68t171 ,A68t170,1);
typedef struct A68t170  A68_170 ;    /* [] MODE171 */
struct A68t171{
A68_INT  Mode;
A_PAD_INT(PAD_72)
A68_INT  Resultmode;
A_PAD_INT(PAD_73)
A68_INT  Declevel;
A_PAD_INT(PAD_74)
struct A68t109  Environ;
A68_VC  Name;
struct A68t105  Prefix;
A_PAD_ISTRUCT(A68_105 ,PAD_75)
struct A68t105  Fnprefix;
A_PAD_ISTRUCT(A68_105 ,PAD_76)
struct A68t105  Envprefix;
A_PAD_ISTRUCT(A68_105 ,PAD_77)
A68_BITS  Flags;
A_PAD_BITS(PAD_78)
};
typedef struct A68t171  A68_171 ;    /* STRUCT(INT,INT,INT,MODE109,REF MODE26,MODE105,MODE105,MODE105,BITS)  */

A_PROCEDURE(A68_VOID ,A68t172,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t173,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t174,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t174  A68_174 ;    /* PROC(INT) REF MODE26 */
struct A68t176 ;

A_PROCEDURE(A68_VOID ,A68t175,(A68_INT ,struct A68t176 ),(A68_INT ,struct A68t176 ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(INT,MODE176) VOID */
A_ROW(A68_VC ,A68t176,1);
typedef struct A68t176  A68_176 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t177,(void),(void *));
typedef struct A68t177  A68_177 ;    /* PROC BITS */
struct A68t178{
A68_INT  Cfile;
A_PAD_INT(PAD_79)
};
typedef struct A68t178  A68_178 ;    /* STRUCT(INT)  */
struct A68t179{
A68_INT  Seedfile;
A_PAD_INT(PAD_80)
};
typedef struct A68t179  A68_179 ;    /* STRUCT(INT)  */
struct A68t180 { A68_INT mode; union {
struct A68t178  mode1;
struct A68t179  mode2;
struct A68t105  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t180  A68_180 ;    /* UNION(MODE178,MODE179,MODE105,VOID)  */
A_ROW(A68_BOOL ,A68t181,1);
typedef struct A68t181  A68_181 ;    /* [] BOOL */
struct A68t182{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_81)
A68_VC  Sourcefile;
struct A68t105  Nameseed;
A_PAD_ISTRUCT(A68_105 ,PAD_82)
struct A68t180  Nameseedorigin;
struct A68t183 * Used_modules;
A68_VC  Commandline;
struct A68t184 * Environment;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE105,MODE180,REF MODE183,REF MODE26,REF MODE184)  */
struct A68t183{
A68_VC  Modinfo_file;
struct A68t183 * Next;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(REF MODE26,REF MODE183)  */
struct A68t184{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t184 * Next;
};
typedef struct A68t184  A68_184 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE184)  */
struct A68t186 ;

A_PROCEDURE(struct A68t59 *,A68t185,(A68_VC ,struct A68t186 *,A68_VC *),(A68_VC ,struct A68t186 *,A68_VC *,void *));
typedef struct A68t185  A68_185 ;    /* PROC(MODE26,REF MODE186,REF REF MODE26) REF MODE59 */
struct A68t186{
A68_VC  Dir;
struct A68t186 * Next;
};
typedef struct A68t186  A68_186 ;    /* STRUCT(REF MODE26,REF MODE186)  */
struct A68t187{
A68_INT  Mode;
A_PAD_INT(PAD_83)
A68_VC  String;
};
typedef struct A68t187  A68_187 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t188{
A68_INT  I;
A_PAD_INT(PAD_84)
};
typedef struct A68t188  A68_188 ;    /* STRUCT(INT)  */
A_ROW(A68_INT ,A68t190,1);
typedef struct A68t190  A68_190 ;    /* [] INT */
struct A68t189{
A68_INT  Body;
A_PAD_INT(PAD_85)
A68_INT  Moduleno;
A_PAD_INT(PAD_86)
struct A68t190  Actuals;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(INT,INT,REF MODE190)  */
struct A68t191{
A68_INT  Mode;
A_PAD_INT(PAD_87)
A68_INT  Number;
A_PAD_INT(PAD_88)
A68_VC  Insert;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(INT,INT,REF MODE26)  */
struct A68t193{
A68_INT  Moduleno;
A_PAD_INT(PAD_89)
A68_INT  I;
A_PAD_INT(PAD_90)
A68_INT  J;
A_PAD_INT(PAD_91)
};
typedef struct A68t193  A68_193 ;    /* STRUCT(INT,INT,INT)  */
A_ROW(A68_VC ,A68t195,1);
typedef struct A68t195  A68_195 ;    /* [] REF MODE26 */
struct A68t194{
A68_INT  Moduleno;
A_PAD_INT(PAD_92)
A68_VC  Name;
A68_VC  Uname;
A68_VC  Lname;
A68_VC  Gname;
struct A68t195  Ysnames;
};
typedef struct A68t194  A68_194 ;    /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE195)  */
struct A68t192 { A68_INT mode; union {
struct A68t189  mode1;
struct A68t193  mode2;
struct A68t194  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t192  A68_192 ;    /* UNION(MODE189,MODE193,MODE194)  */
struct A68t197{
A68_INT  Nochars;
A_PAD_INT(PAD_93)
A68_INT  Nocases;
A_PAD_INT(PAD_94)
A68_INT  W;
A_PAD_INT(PAD_95)
};
typedef struct A68t197  A68_197 ;    /* STRUCT(INT,INT,INT)  */
struct A68t196{
struct A68t197  Info;
A68_VC  Text;
};
typedef struct A68t196  A68_196 ;    /* STRUCT(MODE197,REF MODE26)  */
struct A68t198{
A68_VC  Representation;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(REF MODE26)  */
struct A68t200{
A68_INT  Mode;
A_PAD_INT(PAD_96)
A68_VC  Nu;
};
typedef struct A68t200  A68_200 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t201{
A68_INT  Mode;
A_PAD_INT(PAD_97)
A68_LBITS  Denotation;
A_PAD_LBITS(PAD_98)
};
typedef struct A68t201  A68_201 ;    /* STRUCT(INT,LONG BITS)  */
struct A68t202{
A68_INT  Mode;
A_PAD_INT(PAD_99)
A68_VC  Denotation;
};
typedef struct A68t202  A68_202 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t203{
A68_INT  Fn;
A_PAD_INT(PAD_100)
A68_INT  Mode;
A_PAD_INT(PAD_101)
A68_INT  Param;
A_PAD_INT(PAD_102)
};
typedef struct A68t203  A68_203 ;    /* STRUCT(INT,INT,INT)  */
struct A68t204{
A68_VC  Name;
A68_BITS  Props;
A_PAD_BITS(PAD_103)
A68_INT  Mode;
A_PAD_INT(PAD_104)
A68_INT  Rdenno;
A_PAD_INT(PAD_105)
A68_INT  Maxname;
A_PAD_INT(PAD_106)
};
typedef struct A68t204  A68_204 ;    /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
struct A68t205{
A68_INT  W;
A_PAD_INT(PAD_107)
};
typedef struct A68t205  A68_205 ;    /* STRUCT(INT)  */
struct A68t206{
A68_INT  Mode;
A_PAD_INT(PAD_108)
A68_BITS  Props;
A_PAD_BITS(PAD_109)
A68_INT  Param;
A_PAD_INT(PAD_110)
};
typedef struct A68t206  A68_206 ;    /* STRUCT(INT,BITS,INT)  */
struct A68t207{
A68_BOOL  Start;
A_PAD_BOOL(PAD_111)
};
typedef struct A68t207  A68_207 ;    /* STRUCT(BOOL)  */
struct A68t208{
A68_INT  Fn;
A_PAD_INT(PAD_112)
A68_INT  Mode;
A_PAD_INT(PAD_113)
A68_BITS  Props;
A_PAD_BITS(PAD_114)
A68_INT  Param;
A_PAD_INT(PAD_115)
};
typedef struct A68t208  A68_208 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t209{
A68_INT  Fn;
A_PAD_INT(PAD_116)
A68_INT  Mode;
A_PAD_INT(PAD_117)
A68_BITS  Props;
A_PAD_BITS(PAD_118)
A68_INT  Resultmode;
A_PAD_INT(PAD_119)
};
typedef struct A68t209  A68_209 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t210{
A68_INT  Fn;
A_PAD_INT(PAD_120)
A68_BITS  Props;
A_PAD_BITS(PAD_121)
};
typedef struct A68t210  A68_210 ;    /* STRUCT(INT,BITS)  */
struct A68t199 { A68_INT mode; union {
struct A68t158  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t198  mode4;
struct A68t106  mode5;
struct A68t200  mode6;
struct A68t187  mode7;
struct A68t201  mode8;
struct A68t202  mode9;
struct A68t203  mode10;
struct A68t153  mode11;
struct A68t204  mode12;
struct A68t205  mode13;
struct A68t168  mode14;
struct A68t206  mode15;
struct A68t188  mode16;
struct A68t207  mode17;
struct A68t196  mode18;
struct A68t191  mode19;
struct A68t208  mode20;
struct A68t209  mode21;
struct A68t210  mode22;
struct A68t189  mode23;
struct A68t193  mode24;
struct A68t194  mode25;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t199  A68_199 ;    /* UNION(MODE158,INT,BOOL,MODE198,MODE106,MODE200,MODE187,MODE201,MODE202,MODE203,MODE153,MODE204,MODE205,MODE168,MODE206,MODE188,MODE207,MODE196,MODE191,MODE208,MODE209,MODE210,MODE189,MODE193,MODE194,VOID)  */
struct A68t211 { A68_INT mode; union {
struct A68t158  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t198  mode4;
struct A68t106  mode5;
struct A68t200  mode6;
struct A68t187  mode7;
struct A68t201  mode8;
struct A68t202  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t211  A68_211 ;    /* UNION(MODE158,INT,BOOL,MODE198,MODE106,MODE200,MODE187,MODE201,MODE202)  */
struct A68t212 { A68_INT mode; union {
struct A68t158  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t198  mode4;
struct A68t106  mode5;
struct A68t200  mode6;
struct A68t187  mode7;
struct A68t201  mode8;
struct A68t202  mode9;
struct A68t203  mode10;
struct A68t153  mode11;
struct A68t204  mode12;
struct A68t205  mode13;
struct A68t168  mode14;
struct A68t206  mode15;
struct A68t188  mode16;
struct A68t207  mode17;
struct A68t196  mode18;
struct A68t191  mode19;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t212  A68_212 ;    /* UNION(MODE158,INT,BOOL,MODE198,MODE106,MODE200,MODE187,MODE201,MODE202,MODE203,MODE153,MODE204,MODE205,MODE168,MODE206,MODE188,MODE207,MODE196,MODE191)  */
struct A68t213{
struct A68t154 * Value;
struct A68t104 * End;
A68_INT  Type;
A_PAD_INT(PAD_122)
};
typedef struct A68t213  A68_213 ;    /* STRUCT(REF MODE154,REF MODE104,INT)  */
A_VECTOR(struct A68t219 ,A68t218);
typedef struct A68t218  A68_218 ;    /* VECTOR [] MODE219 */
A_VECTOR(struct A68t226 ,A68t225);
typedef struct A68t225  A68_225 ;    /* VECTOR [] MODE226 */
struct A68t226{
struct A68t124  N;
A_PAD_ISTRUCT(A68_124 ,PAD_123)
struct A68t124  F;
A_PAD_ISTRUCT(A68_124 ,PAD_124)
A68_INT  Level;
A_PAD_INT(PAD_125)
};
typedef struct A68t226  A68_226 ;    /* STRUCT(MODE124,MODE124,INT)  */
struct A68t224 { A68_INT mode; union {
A68_VC  mode1;
struct A68t225  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t224  A68_224 ;    /* UNION(REF MODE26,REF MODE225)  */
struct A68t220{
struct A68t124  F;
A_PAD_ISTRUCT(A68_124 ,PAD_126)
A68_INT  No;
A_PAD_INT(PAD_127)
A68_INT  Nl;
A_PAD_INT(PAD_128)
A68_INT  Ng;
A_PAD_INT(PAD_129)
struct A68t224  U;
};
typedef struct A68t220  A68_220 ;    /* STRUCT(MODE124,INT,INT,INT,MODE224)  */
A_VECTOR(struct A68t223 ,A68t221);
typedef struct A68t221  A68_221 ;    /* VECTOR [] MODE223 */
struct A68t223{
struct A68t105  Prefix;
A_PAD_ISTRUCT(A68_105 ,PAD_130)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_131)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_132)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_133)
A68_BOOL  Keptgenproc;
A_PAD_BOOL(PAD_134)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_135)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t223  A68_223 ;    /* STRUCT(MODE105,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26)  */
A_VECTOR(struct A68t105 ,A68t222);
typedef struct A68t222  A68_222 ;    /* VECTOR [] MODE105 */
struct A68t219{
struct A68t220  Xs;
struct A68t105  Ys;
A_PAD_ISTRUCT(A68_105 ,PAD_136)
A68_LINT  Timeoflastchange;
A_PAD_LINT(PAD_137)
struct A68t221  Keptinfo;
struct A68t222  Cnames;
};
typedef struct A68t219  A68_219 ;    /* STRUCT(MODE220,MODE105,LONG INT,REF MODE221,REF MODE222)  */
struct A68t215{
struct A68t105  Uname;
A_PAD_ISTRUCT(A68_105 ,PAD_138)
struct A68t105  Lname;
A_PAD_ISTRUCT(A68_105 ,PAD_139)
struct A68t105  Gname;
A_PAD_ISTRUCT(A68_105 ,PAD_140)
struct A68t218  Specs;
};
typedef struct A68t215  A68_215 ;    /* STRUCT(MODE105,MODE105,MODE105,REF MODE218)  */
struct A68t214{
struct A68t124  Name;
A_PAD_ISTRUCT(A68_124 ,PAD_141)
struct A68t215  Ym;
struct A68t105  Ys;
A_PAD_ISTRUCT(A68_105 ,PAD_142)
A68_INT  Level;
A_PAD_INT(PAD_143)
struct A68t216 * Ids;
struct A68t217 * Uses;
struct A68t214 * Rest;
};
typedef struct A68t214  A68_214 ;    /* STRUCT(MODE124,MODE215,MODE105,INT,REF MODE216,REF MODE217,REF MODE214)  */
struct A68t216{
struct A68t124  Name;
A_PAD_ISTRUCT(A68_124 ,PAD_144)
struct A68t105  Uname;
A_PAD_ISTRUCT(A68_105 ,PAD_145)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_146)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_147)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_148)
A68_BOOL  Genproc;
A_PAD_BOOL(PAD_149)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_150)
A68_INT  Mode;
A_PAD_INT(PAD_151)
A68_INT  Decno;
A_PAD_INT(PAD_152)
A68_VC  Definition;
A68_VC  Rhs;
struct A68t216 * Rest;
};
typedef struct A68t216  A68_216 ;    /* STRUCT(MODE124,MODE105,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,REF MODE26,REF MODE26,REF MODE216)  */
struct A68t217{
struct A68t124  Name;
A_PAD_ISTRUCT(A68_124 ,PAD_153)
struct A68t105  Uname;
A_PAD_ISTRUCT(A68_105 ,PAD_154)
struct A68t216 * Ids;
struct A68t217 * Rest;
};
typedef struct A68t217  A68_217 ;    /* STRUCT(MODE124,MODE105,REF MODE216,REF MODE217)  */
struct A68t228{
struct A68t124  Name;
A_PAD_ISTRUCT(A68_124 ,PAD_155)
struct A68t226  L;
struct A68t226  G;
A68_INT  Type;
A_PAD_INT(PAD_156)
};
typedef struct A68t228  A68_228 ;    /* STRUCT(MODE124,MODE226,MODE226,INT)  */
struct A68t229{
struct A68t105  L;
A_PAD_ISTRUCT(A68_105 ,PAD_157)
struct A68t105  G;
A_PAD_ISTRUCT(A68_105 ,PAD_158)
};
typedef struct A68t229  A68_229 ;    /* STRUCT(MODE105,MODE105)  */
struct A68t227{
struct A68t105  Uname;
A_PAD_ISTRUCT(A68_105 ,PAD_159)
struct A68t228  Xmi;
struct A68t229  Checkinfo;
};
typedef struct A68t227  A68_227 ;    /* STRUCT(MODE105,MODE228,MODE229)  */
struct A68t231 ;

A_PROCEDURE(A68_VOID ,A68t230,(struct A68t231 ),(struct A68t231 ,void *));
typedef struct A68t230  A68_230 ;    /* PROC(MODE231) VOID */
struct A68t231{
struct A68t124  Name;
A_PAD_ISTRUCT(A68_124 ,PAD_160)
struct A68t215  Ym;
struct A68t124  Formal;
A_PAD_ISTRUCT(A68_124 ,PAD_161)
struct A68t105  Ys;
A_PAD_ISTRUCT(A68_105 ,PAD_162)
A68_INT  Level;
A_PAD_INT(PAD_163)
A68_INT  Ownlevel;
A_PAD_INT(PAD_164)
};
typedef struct A68t231  A68_231 ;    /* STRUCT(MODE124,MODE215,MODE124,MODE105,INT,INT)  */
struct A68t233 ;

A_PROCEDURE(A68_VOID ,A68t232,(struct A68t233 ,A68_INT ),(struct A68t233 ,A68_INT ,void *));
typedef struct A68t232  A68_232 ;    /* PROC(MODE233,INT) VOID */
struct A68t233{
A68_INT  Type;
A_PAD_INT(PAD_165)
A68_INT  Moduleno;
A_PAD_INT(PAD_166)
struct A68t124  Name;
A_PAD_ISTRUCT(A68_124 ,PAD_167)
struct A68t215  Ym;
};
typedef struct A68t233  A68_233 ;    /* STRUCT(INT,INT,MODE124,MODE215)  */
struct A68t235 ;

A_PROCEDURE(A68_VOID ,A68t234,(struct A68t235 ),(struct A68t235 ,void *));
typedef struct A68t234  A68_234 ;    /* PROC(MODE235) VOID */
struct A68t235{
struct A68t124  Name;
A_PAD_ISTRUCT(A68_124 ,PAD_168)
A68_INT  Decno;
A_PAD_INT(PAD_169)
A68_INT  Level;
A_PAD_INT(PAD_170)
A68_INT  Mode;
A_PAD_INT(PAD_171)
A68_INT  Scope;
A_PAD_INT(PAD_172)
struct A68t235 * Rest;
};
typedef struct A68t235  A68_235 ;    /* STRUCT(MODE124,INT,INT,INT,INT,REF MODE235)  */
A_ROW(struct A68t214 *,A68t236,1);
typedef struct A68t236  A68_236 ;    /* [] REF MODE214 */
struct A68t238 ;

A_PROCEDURE(A68_VOID ,A68t237,(struct A68t124 ,A68_INT ,A68_BOOL ,struct A68t238 *),(struct A68t124 ,A68_INT ,A68_BOOL ,struct A68t238 *,void *));
typedef struct A68t237  A68_237 ;    /* PROC(MODE124,INT,BOOL) MODE238 */
struct A68t238{
struct A68t228  Xmi;
struct A68t215  Ym;
};
typedef struct A68t238  A68_238 ;    /* STRUCT(MODE228,MODE215)  */
struct A68t240 ;

A_PROCEDURE(A68_VOID ,A68t239,(struct A68t124 ,struct A68t124 ,struct A68t215 ,struct A68t240 *),(struct A68t124 ,struct A68t124 ,struct A68t215 ,struct A68t240 *,void *));
typedef struct A68t239  A68_239 ;    /* PROC(MODE124,MODE124,MODE215) MODE240 */
struct A68t240{
struct A68t220  Xs;
struct A68t105  Ys;
A_PAD_ISTRUCT(A68_105 ,PAD_173)
};
typedef struct A68t240  A68_240 ;    /* STRUCT(MODE220,MODE105)  */

A_PROCEDURE(A68_VOID ,A68t241,(struct A68t228 ),(struct A68t228 ,void *));
typedef struct A68t241  A68_241 ;    /* PROC(MODE228) VOID */

A_PROCEDURE(A68_VOID ,A68t242,(struct A68t220 ),(struct A68t220 ,void *));
typedef struct A68t242  A68_242 ;    /* PROC(MODE220) VOID */
A_ROW(struct A68t219 ,A68t243,1);
typedef struct A68t243  A68_243 ;    /* [] MODE219 */

A_PROCEDURE(A68_VOID ,A68t244,(struct A68t180 ),(struct A68t180 ,void *));
typedef struct A68t244  A68_244 ;    /* PROC(MODE180) VOID */

A_PROCEDURE(struct A68t105 ,A68t245,(void),(void *));
typedef struct A68t245  A68_245 ;    /* PROC MODE105 */

A_PROCEDURE(A68_VOID ,A68t246,(struct A68t105 ),(struct A68t105 ,void *));
typedef struct A68t246  A68_246 ;    /* PROC(MODE105) VOID */

A_PROCEDURE(A68_VOID ,A68t247,(struct A68t180 ,A68_VC *),(struct A68t180 ,A68_VC *,void *));
typedef struct A68t247  A68_247 ;    /* PROC(MODE180) MODE26 */

A_PROCEDURE(A68_BOOL ,A68t248,(struct A68t154 *,struct A68t154 *),(struct A68t154 *,struct A68t154 *,void *));
typedef struct A68t248  A68_248 ;    /* PROC(REF MODE154,REF MODE154) BOOL */

A_PROCEDURE(A68_BOOL ,A68t249,(struct A68t154 *),(struct A68t154 *,void *));
typedef struct A68t249  A68_249 ;    /* PROC(REF MODE154) BOOL */

A_PROCEDURE(A68_BOOL ,A68t250,(struct A68t154 *,A68_LBITS ),(struct A68t154 *,A68_LBITS ,void *));
typedef struct A68t250  A68_250 ;    /* PROC(REF MODE154,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t251,(struct A68t154 *),(struct A68t154 *,void *));
typedef struct A68t251  A68_251 ;    /* PROC(REF MODE154) LONG BITS */

A_PROCEDURE(A68_VOID ,A68t252,(struct A68t154 *,A68_VC *),(struct A68t154 *,A68_VC *,void *));
typedef struct A68t252  A68_252 ;    /* PROC(REF MODE154) MODE26 */

A_PROCEDURE(struct A68t154 *,A68t253,(struct A68t154 *,A68_INT ),(struct A68t154 *,A68_INT ,void *));
typedef struct A68t253  A68_253 ;    /* PROC(REF MODE154,INT) REF MODE154 */

A_PROCEDURE(A68_INT ,A68t254,(struct A68t159 ),(struct A68t159 ,void *));
typedef struct A68t254  A68_254 ;    /* PROC(MODE159) INT */

A_PROCEDURE(A68_BOOL ,A68t255,(struct A68t154 *,A68_BITS ),(struct A68t154 *,A68_BITS ,void *));
typedef struct A68t255  A68_255 ;    /* PROC(REF MODE154,BITS) BOOL */

A_PROCEDURE(struct A68t154 *,A68t256,(struct A68t160 *,A68_INT ),(struct A68t160 *,A68_INT ,void *));
typedef struct A68t256  A68_256 ;    /* PROC(REF MODE160,INT) REF MODE154 */

A_PROCEDURE(struct A68t160 *,A68t257,(struct A68t160 *),(struct A68t160 *,void *));
typedef struct A68t257  A68_257 ;    /* PROC(REF MODE160) REF MODE160 */
struct A68t259 ;

A_PROCEDURE(struct A68t154 *,A68t258,(A68_INT ,A68_INT ,A68_BITS ,struct A68t259 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t259 ,void *));
typedef struct A68t258  A68_258 ;    /* PROC(INT,INT,BITS,MODE259) REF MODE154 */
A_VECTOR(struct A68t154 *,A68t259);
typedef struct A68t259  A68_259 ;    /* VECTOR [] REF MODE154 */

A_PROCEDURE(A68_VOID ,A68t260,(struct A68t154 *),(struct A68t154 *,void *));
typedef struct A68t260  A68_260 ;    /* PROC(REF MODE154) VOID */

A_PROCEDURE(A68_VOID ,A68t261,(struct A68t154 *,A68_BOOL ,A68_VC *),(struct A68t154 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t261  A68_261 ;    /* PROC(REF MODE154,BOOL) MODE26 */

A_PROCEDURE(A68_LINT ,A68t262,(struct A68t154 ),(struct A68t154 ,void *));
typedef struct A68t262  A68_262 ;    /* PROC(MODE154) LONG INT */
struct A68t263 { A68_INT mode; union {
struct A68t154 * mode1;
A68_VC  mode2;
struct A68t128  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t263  A68_263 ;    /* UNION(REF MODE154,MODE26,MODE128)  */

A_PROCEDURE(A68_VOID ,A68t264,(struct A68t263 ,A68_VC *),(struct A68t263 ,A68_VC *,void *));
typedef struct A68t264  A68_264 ;    /* PROC(MODE263) MODE26 */
struct A68t266 ;

A_PROCEDURE(A68_VOID ,A68t265,(struct A68t266 ,A68_VC *),(struct A68t266 ,A68_VC *,void *));
typedef struct A68t265  A68_265 ;    /* PROC(MODE266) MODE26 */
A_VECTOR(struct A68t263 ,A68t266);
typedef struct A68t266  A68_266 ;    /* VECTOR [] MODE263 */

A_PROCEDURE(A68_VOID ,A68t267,(A68_VC ,struct A68t266 ,A68_VC *),(A68_VC ,struct A68t266 ,A68_VC *,void *));
typedef struct A68t267  A68_267 ;    /* PROC(MODE26,MODE266) MODE26 */

A_PROCEDURE(A68_VOID ,A68t268,(struct A68t266 ),(struct A68t266 ,void *));
typedef struct A68t268  A68_268 ;    /* PROC(MODE266) VOID */

A_PROCEDURE(A68_VOID ,A68t269,(A68_VC ,A68_INT ,struct A68t266 ,struct A68t128 *),(A68_VC ,A68_INT ,struct A68t266 ,struct A68t128 *,void *));
typedef struct A68t269  A68_269 ;    /* PROC(MODE26,INT,MODE266) MODE128 */

A_PROCEDURE(struct A68t154 *,A68t270,(struct A68t154 *),(struct A68t154 *,void *));
typedef struct A68t270  A68_270 ;    /* PROC(REF MODE154) REF MODE154 */

A_PROCEDURE(struct A68t154 *,A68t271,(A68_VC ,struct A68t154 *),(A68_VC ,struct A68t154 *,void *));
typedef struct A68t271  A68_271 ;    /* PROC(MODE26,REF MODE154) REF MODE154 */

A_PROCEDURE(A68_VOID ,A68t272,(struct A68t95 ),(struct A68t95 ,void *));
typedef struct A68t272  A68_272 ;    /* PROC(MODE95) VOID */

A_PROCEDURE(A68_VOID ,A68t273,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t273  A68_273 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,60,A68t274);
typedef struct A68t274  A68_274 ;    /* STRUCT 60 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t275);
typedef struct A68t275  A68_275 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t121 ,2,A68t276);
typedef struct A68t276  A68_276 ;    /* STRUCT 2 MODE121 */
A_ISTRUCT(A68_CHAR ,9,A68t277);
typedef struct A68t277  A68_277 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(struct A68t121 ,4,A68t278);
typedef struct A68t278  A68_278 ;    /* STRUCT 4 MODE121 */
A_ISTRUCT(A68_CHAR ,13,A68t279);
typedef struct A68t279  A68_279 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t280);
typedef struct A68t280  A68_280 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,51,A68t281);
typedef struct A68t281  A68_281 ;    /* STRUCT 51 CHAR */
A_ISTRUCT(A68_CHAR ,37,A68t282);
typedef struct A68t282  A68_282 ;    /* STRUCT 37 CHAR */
A_ISTRUCT(struct A68t121 ,3,A68t283);
typedef struct A68t283  A68_283 ;    /* STRUCT 3 MODE121 */
A_ISTRUCT(A68_CHAR ,39,A68t284);
typedef struct A68t284  A68_284 ;    /* STRUCT 39 CHAR */
A_ISTRUCT(struct A68t121 ,5,A68t285);
typedef struct A68t285  A68_285 ;    /* STRUCT 5 MODE121 */
A_ISTRUCT(A68_CHAR ,41,A68t286);
typedef struct A68t286  A68_286 ;    /* STRUCT 41 CHAR */
A_ISTRUCT(A68_CHAR ,42,A68t287);
typedef struct A68t287  A68_287 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(struct A68t121 ,6,A68t288);
typedef struct A68t288  A68_288 ;    /* STRUCT 6 MODE121 */
A_ISTRUCT(A68_CHAR ,46,A68t289);
typedef struct A68t289  A68_289 ;    /* STRUCT 46 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t290);
typedef struct A68t290  A68_290 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(A68_CHAR ,29,A68t291);
typedef struct A68t291  A68_291 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(A68_CHAR ,27,A68t292);
typedef struct A68t292  A68_292 ;    /* STRUCT 27 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t293);
typedef struct A68t293  A68_293 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,40,A68t294);
typedef struct A68t294  A68_294 ;    /* STRUCT 40 CHAR */
A_ISTRUCT(A68_CHAR ,44,A68t295);
typedef struct A68t295  A68_295 ;    /* STRUCT 44 CHAR */
A_ISTRUCT(A68_CHAR ,48,A68t296);
typedef struct A68t296  A68_296 ;    /* STRUCT 48 CHAR */
A_ISTRUCT(struct A68t121 ,31,A68t297);
typedef struct A68t297  A68_297 ;    /* STRUCT 31 MODE121 */

A_PROCEDURE(A68_VOID ,A68t298,(struct A68t204 ,struct A68t109 ,struct A68t92 ,A68_INT ,struct A68t154 *),(struct A68t204 ,struct A68t109 ,struct A68t92 ,A68_INT ,struct A68t154 *,void *));
typedef struct A68t298  A68_298 ;    /* PROC(MODE204,MODE109,REF MODE92,INT,REF MODE154) VOID */

A_PROCEDURE(struct A68t154 *,A68t299,(struct A68t154 *,struct A68t154 ),(struct A68t154 *,struct A68t154 ,void *));
typedef struct A68t299  A68_299 ;    /* PROC(REF MODE154,MODE154) REF MODE154 */

A_PROCEDURE(struct A68t155 *,A68t300,(struct A68t155 *,struct A68t155 ),(struct A68t155 *,struct A68t155 ,void *));
typedef struct A68t300  A68_300 ;    /* PROC(REF MODE155,MODE155) REF MODE155 */
#define A68_301  A68_VC 
#define A68t301 A68t26            /* FLEX VECTOR [] CHAR */

A_PROCEDURE(A68_VOID ,A68t302,(struct A68t204 ,struct A68t154 *),(struct A68t204 ,struct A68t154 *,void *));
typedef struct A68t302  A68_302 ;    /* PROC(MODE204,REF MODE154) VOID */
A_ISTRUCT(A68_CHAR ,18,A68t303);
typedef struct A68t303  A68_303 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t304);
typedef struct A68t304  A68_304 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t305);
typedef struct A68t305  A68_305 ;    /* STRUCT 3 CHAR */

A_PROCEDURE(A68_VOID ,A68t306,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t306  A68_306 ;    /* PROC(REF MODE26,REF MODE26) VOID */
A_ISTRUCT(A68_CHAR ,19,A68t307);
typedef struct A68t307  A68_307 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t308);
typedef struct A68t308  A68_308 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,26,A68t309);
typedef struct A68t309  A68_309 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t310);
typedef struct A68t310  A68_310 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t311);
typedef struct A68t311  A68_311 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,28,A68t312);
typedef struct A68t312  A68_312 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(A68_CHAR ,38,A68t313);
typedef struct A68t313  A68_313 ;    /* STRUCT 38 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t314);
typedef struct A68t314  A68_314 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t315);
typedef struct A68t315  A68_315 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_VC ,2,A68t316);
typedef struct A68t316  A68_316 ;    /* STRUCT 2 MODE26 */

A_PROCEDURE(A68_VOID ,A68t317,(struct A68t204 ,A68_VC ,A68_VC ,struct A68t154 *),(struct A68t204 ,A68_VC ,A68_VC ,struct A68t154 *,void *));
typedef struct A68t317  A68_317 ;    /* PROC(MODE204,REF MODE26,REF MODE26,REF MODE154) VOID */

A_PROCEDURE(A68_VOID ,A68t318,(A68_VC ,A68_VC ,A68_BOOL ),(A68_VC ,A68_VC ,A68_BOOL ,void *));
typedef struct A68t318  A68_318 ;    /* PROC(REF MODE26,REF MODE26,BOOL) VOID */
A_ISTRUCT(A68_CHAR ,17,A68t319);
typedef struct A68t319  A68_319 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t320);
typedef struct A68t320  A68_320 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t321);
typedef struct A68t321  A68_321 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(struct A68t121 ,8,A68t322);
typedef struct A68t322  A68_322 ;    /* STRUCT 8 MODE121 */

A_PROCEDURE(A68_VOID ,A68t323,(A68_VC ),(A68_VC ,void *));
typedef struct A68t323  A68_323 ;    /* PROC(REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t324,(A68_VC ,struct A68t104 *),(A68_VC ,struct A68t104 *,void *));
typedef struct A68t324  A68_324 ;    /* PROC(REF MODE26,REF MODE104) VOID */
A_ISTRUCT(A68_CHAR ,25,A68t325);
typedef struct A68t325  A68_325 ;    /* STRUCT 25 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from values --- */
extern A68_VOID  DAQACTR_getcfragment(struct A68t154 *,A68_VC *);
extern A68_BITS  PKJACTR_defaultinfo;
/* --- End of imports from values --- */


/* --- Imports from uniquenameserver --- */
extern A68_VOID  EMMACTR_nameseedoriginstring(struct A68t180 ,A68_VC *);
/* --- End of imports from uniquenameserver --- */


/* --- Imports from modules --- */
extern A68_VOID  IUPACTR_processcontexts(void);
extern A68_VOID  DJPACTR_outputmoduleinformation(void);
extern A68_BOOL  LCPACTR_rscompatiblewithpreviousversion;
extern A68_243  RCPACTR_specs;
extern A68_BOOL  MCPACTR_transcompatiblewithpreviousversi;
extern A68_BOOL  KCPACTR_previousversionfound;
/* --- End of imports from modules --- */


/* --- Imports from incmode --- */
#define UEAACTR_voidmode 5
/* --- End of imports from incmode --- */


/* --- Imports from incvalue --- */
/* --- End of imports from incvalue --- */


/* --- Imports from incimperatives --- */
#define FDAACTR_genprocbit 0100000U
/* --- End of imports from incimperatives --- */


/* --- Imports from incid --- */
#define GAAACTR_globalidno 2
/* --- End of imports from incid --- */


/* --- Imports from environment --- */
extern A68_VOID  WXIACTR_assert(A68_VC ,A68_BOOL );
extern A68_VOID  GXIACTR_comment(A68_INT );
extern A68_VC  XQIACTR_sourcefilename;
extern A68_VOID  SXIACTR_terminalerror(A68_INT );
extern A68_VOID  JXIACTR_warning(A68_INT );
extern A68_BOOL  NQIACTR_nostructresultoption;
extern A68_182  IYIACTR_config_info;
extern A68_183 * CYIACTR_nil_modinfolist;
extern A68_184 * DYIACTR_nil_envinfo;
extern A68_VC  BRIACTR_current_directory;
/* --- End of imports from environment --- */


/* --- Imports from identifiers --- */
extern A68_VOID  OCWACTR_noteroutineprototype(A68_INT ,A68_VC );
extern A68_VOID  ODWACTR_endroutineprototype(A68_INT );
extern A68_VOID  ARWACTR_completerddec(void);
extern A68_164  WPKACTR_ids;
extern A68_VOID  ESWACTR_rddec(A68_VC ,A68_INT ,struct A68t92 ,A68_INT ,A68_INT ,struct A68t109 ,A68_BITS );
/* --- End of imports from identifiers --- */


/* --- Imports from modes --- */
extern A68_BOOL  OTMACTR_dynamic(A68_INT );
extern A68_BOOL  ARMACTR_isarray(A68_INT );
extern A68_BOOL  VSMACTR_iscstruct(A68_INT );
/* --- End of imports from modes --- */


/* --- Imports from coutput --- */
extern A68_VOID  MDMACTR_writecstream(struct A68t120 ,A68_INT );
/* --- End of imports from coutput --- */


/* --- Imports from environ --- */
extern A68_INT  NSLACTR_codestream(A68_INT );
extern A68_INT  QSLACTR_locdecstream(A68_INT );
extern A68_INT  TSLACTR_labelstream(A68_INT );
extern A68_INT  VRLACTR_currentlevel(void);
/* --- End of imports from environ --- */


/* --- Imports from centities --- */
extern A68_SINT  EIAACTR_cnewline;
/* --- End of imports from centities --- */


/* --- Imports from osif --- */
#include <errno.h>

#define RCBAOSF_errno errno
extern A68_VOID  YPBAOSF_local_time_str(A68_LINT ,A68_VC *);
#include <unistd.h>
#define EXIT(status) exit(A_INT_int(status))

#define APBAOSF_exit EXIT
extern int A_argc;
extern char **A_argv;
extern char **A_envp;
#define A_prelude(argc,argv,envp) A_argc = argc; A_argv = argv; A_envp = envp

#define DHCAOSF_prelude A_prelude
extern A68_VOID  RHCAOSF_get_args(A68_36 *);
#include <signal.h>

#define WKCAOSF_sighup SIGHUP
/**/

#define XKCAOSF_sigint SIGINT
/**/

#define YKCAOSF_sigquit SIGQUIT
/**/

#define ZKCAOSF_sigill SIGILL
/**/

#define ALCAOSF_sigtrap SIGTRAP
/**/

#define BLCAOSF_sigabrt SIGABRT
/**/

#define CLCAOSF_sigbus SIGBUS
/**/

#define DLCAOSF_sigfpe SIGFPE
/**/

#define ELCAOSF_sigkill SIGKILL
/**/

#define FLCAOSF_sigusr1 SIGUSR1
/**/

#define GLCAOSF_sigsegv SIGSEGV
/**/

#define HLCAOSF_sigusr2 SIGUSR2
/**/

#define ILCAOSF_sigpipe SIGPIPE
/**/

#define JLCAOSF_sigalrm SIGALRM
/**/

#define KLCAOSF_sigterm SIGTERM
#if !defined(SIGSTKFLT)
#define SIGSTKFLT 32
#endif
/**/

#define LLCAOSF_sigstkflt SIGSTKFLT
/**/

#define MLCAOSF_sigchld SIGCHLD
/**/

#define NLCAOSF_sigcont SIGCONT
/**/

#define OLCAOSF_sigstop SIGSTOP
/**/

#define PLCAOSF_sigtstp SIGTSTP
/**/

#define QLCAOSF_sigttin SIGTTIN
/**/

#define RLCAOSF_sigttou SIGTTOU
/**/

#define SLCAOSF_sigurg SIGURG
/**/

#define TLCAOSF_sigxcpu SIGXCPU
/**/

#define ULCAOSF_sigxfsz SIGXFSZ
/**/

#define VLCAOSF_sigvtalrm SIGVTALRM
/**/

#define WLCAOSF_sigprof SIGPROF
/**/

#define XLCAOSF_sigwinch SIGWINCH
/**/

#define YLCAOSF_sigio SIGIO
#if !defined(SIGPWR)
#define SIGPWR 33
#endif
/**/

#define ZLCAOSF_sigpwr SIGPWR
#include <algol68/Alibrary.h>

#define GMBAOSF_garbage_collect Agc_collect
#include <algol68/Alibrary.h>

#define BOBAOSF_alwayscollect A_ALWAYS_COLLECT
#include <algol68/Alibrary.h>

#define COBAOSF_alwaysgrowheap A_ALWAYS_GROW_HEAP
#include <algol68/Alibrary.h>

#define DOBAOSF_defaultpolicy A_DEFAULT_POLICY
/* --- End of imports from osif --- */


/* --- Imports from usefulops --- */
extern A68_VOID  JDAAOSF_concat(struct A68t36 ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void OUPACTR(void);   /* values */
extern void RHMACTR(void);   /* uniquenameserver */
extern void ANOACTR(void);   /* modules */
extern void ZDAACTR(void);   /* incmode */
extern void GKJACTR(void);   /* incvalue */
extern void UAAACTR(void);   /* incimperatives */
extern void BAAACTR(void);   /* incid */
extern void HPIACTR(void);   /* environment */
extern void YMVACTR(void);   /* identifiers */
extern void DNMACTR(void);   /* modes */
extern void PTLACTR(void);   /* coutput */
extern void BPLACTR(void);   /* environ */
extern void THAACTR(void);   /* centities */
extern void CSCAOSF(void);   /* osif */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_274   QGYACTR = {"$Id: entryandreturn.a68,v 1.2 2003-06-10 14:03:55 sian Exp $"}; 
A_GISVEC(A68_VC ,RGYACTR,QGYACTR,60)
static A68_275   VGYACTR = {"{ "}; 
A_GISVEC(A68_VC ,WGYACTR,VGYACTR,2)
static A68_275   JHYACTR = {"} "}; 
A_GISVEC(A68_VC ,KHYACTR,JHYACTR,2)
static A68_277   OHYACTR = {"#undef NL"}; 
A_GISVEC(A68_VC ,PHYACTR,OHYACTR,9)
static A68_279   CIYACTR = {"A_PROC_ENTRY("}; 
A_GISVEC(A68_VC ,DIYACTR,CIYACTR,13)
static A68_275   HIYACTR = {");"}; 
A_GISVEC(A68_VC ,IIYACTR,HIYACTR,2)
static A68_280   RIYACTR = {"A_PROC_EXIT("}; 
A_GISVEC(A68_VC ,SIYACTR,RIYACTR,12)
static A68_275   WIYACTR = {");"}; 
A_GISVEC(A68_VC ,XIYACTR,WIYACTR,2)
static A68_281   FJYACTR = {"/* --- Configuration information for this module */"}; 
A_GISVEC(A68_VC ,GJYACTR,FJYACTR,51)
static A68_282   KJYACTR = {"static char *A_config_arguments[] = {"}; 
A_GISVEC(A68_VC ,LJYACTR,KJYACTR,37)
static A68_275   XJYACTR = {"\","}; 
A_GISVEC(A68_VC ,YJYACTR,XJYACTR,2)
static A68_40   DKYACTR = {"\"\"};"}; 
A_GISVEC(A68_VC ,EKYACTR,DKYACTR,4)
static A68_284   IKYACTR = {"static char *A_config_environment[] = {"}; 
A_GISVEC(A68_VC ,JKYACTR,IKYACTR,39)
static A68_275   XKYACTR = {"\","}; 
A_GISVEC(A68_VC ,YKYACTR,XKYACTR,2)
static A68_40   DLYACTR = {"\"\"};"}; 
A_GISVEC(A68_VC ,ELYACTR,DLYACTR,4)
static A68_286   ILYACTR = {"static char *A_config_modinfo_files[] = {"}; 
A_GISVEC(A68_VC ,JLYACTR,ILYACTR,41)
static A68_275   TLYACTR = {"\","}; 
A_GISVEC(A68_VC ,ULYACTR,TLYACTR,2)
static A68_40   ZLYACTR = {"\"\"};"}; 
A_GISVEC(A68_VC ,AMYACTR,ZLYACTR,4)
static A68_284   EMYACTR = {"static A_CONFIG_INFO A_config A_UNUSED;"}; 
A_GISVEC(A68_VC ,FMYACTR,EMYACTR,39)
static A68_287   JMYACTR = {"/* --- end of configuration information */"}; 
A_GISVEC(A68_VC ,KMYACTR,JMYACTR,42)
static A68_289   QMYACTR = {"/* --- Initialise configuration information */"}; 
A_GISVEC(A68_VC ,RMYACTR,QMYACTR,46)
static A68_290   VMYACTR = {"A_config.source_file = \""}; 
A_GISVEC(A68_VC ,WMYACTR,VMYACTR,24)
static A68_275   DNYACTR = {"\";"}; 
A_GISVEC(A68_VC ,ENYACTR,DNYACTR,2)
static A68_291   INYACTR = {"A_config.translation_time = \""}; 
A_GISVEC(A68_VC ,JNYACTR,INYACTR,29)
static A68_275   ONYACTR = {"\";"}; 
A_GISVEC(A68_VC ,PNYACTR,ONYACTR,2)
static A68_292   TNYACTR = {"A_config.ctrans_version = \""}; 
A_GISVEC(A68_VC ,UNYACTR,TNYACTR,27)
static A68_275   ZNYACTR = {"\";"}; 
A_GISVEC(A68_VC ,AOYACTR,ZNYACTR,2)
static A68_293   EOYACTR = {"A_config.name_seed = \""}; 
A_GISVEC(A68_VC ,FOYACTR,EOYACTR,22)
static A68_275   OOYACTR = {"\";"}; 
A_GISVEC(A68_VC ,POYACTR,OOYACTR,2)
static A68_291   TOYACTR = {"A_config.spec_change_time = \""}; 
A_GISVEC(A68_VC ,UOYACTR,TOYACTR,29)
static A68_105   XOYACTR = {"no spec"}; 
A_GISVEC(A68_VC ,YOYACTR,XOYACTR,7)
static A68_275   EPYACTR = {"\";"}; 
A_GISVEC(A68_VC ,FPYACTR,EPYACTR,2)
static A68_294   JPYACTR = {"A_config.arguments = A_config_arguments;"}; 
A_GISVEC(A68_VC ,KPYACTR,JPYACTR,40)
static A68_295   OPYACTR = {"A_config.environment = A_config_environment;"}; 
A_GISVEC(A68_VC ,PPYACTR,OPYACTR,44)
static A68_296   TPYACTR = {"A_config.modinfo_files = A_config_modinfo_files;"}; 
A_GISVEC(A68_VC ,UPYACTR,TPYACTR,48)
static A68_105   ERYACTR = {"return;"}; 
A_GISVEC(A68_VC ,FRYACTR,ERYACTR,7)
static A68_303   LRYACTR = {"*ReturnedValue = ("}; 
A_GISVEC(A68_VC ,MRYACTR,LRYACTR,18)
static A68_275   RRYACTR = {");"}; 
A_GISVEC(A68_VC ,SRYACTR,RRYACTR,2)
static A68_105   YRYACTR = {"return;"}; 
A_GISVEC(A68_VC ,ZRYACTR,YRYACTR,7)
static A68_304   FSYACTR = {"return( "}; 
A_GISVEC(A68_VC ,GSYACTR,FSYACTR,8)
static A68_305   LSYACTR = {" );"}; 
A_GISVEC(A68_VC ,MSYACTR,LSYACTR,3)
static A68_289   YSYACTR = {"int main(int argc, char *argv[], char *envp[])"}; 
A_GISVEC(A68_VC ,ZSYACTR,YSYACTR,46)
static A68_289   ETYACTR = {"int main(int argc, char *argv[], char *envp[])"}; 
A_GISVEC(A68_VC ,FTYACTR,ETYACTR,46)
static A68_307   HTYACTR = {"A_GC_STARTUP(argc);"}; 
A_GISVEC(A68_VC ,ITYACTR,HTYACTR,19)
static A68_308   OTYACTR = {"#ifdef A_prelude"}; 
A_GISVEC(A68_VC ,PTYACTR,OTYACTR,16)
static A68_309   TTYACTR = {"A_prelude(argc,argv,envp);"}; 
A_GISVEC(A68_VC ,UTYACTR,TTYACTR,26)
static A68_310   YTYACTR = {"#endif"}; 
A_GISVEC(A68_VC ,ZTYACTR,YTYACTR,6)
static A68_40   EUYACTR = {"MAIN"}; 
A_GISVEC(A68_VC ,FUYACTR,EUYACTR,4)
static A68_311   MUYACTR = {"void "}; 
A_GISVEC(A68_VC ,NUYACTR,MUYACTR,5)
static A68_312   RUYACTR = {"(void)   /* initialise DECS "}; 
A_GISVEC(A68_VC ,SUYACTR,RUYACTR,28)
static A68_305   WUYACTR = {" */"}; 
A_GISVEC(A68_VC ,XUYACTR,WUYACTR,3)
static A68_311   CVYACTR = {"void "}; 
static A68_310   DVYACTR = {"(void)"}; 
A_GISVEC(A68_VC ,EVYACTR,CVYACTR,5)
A_GISVEC(A68_VC ,FVYACTR,DVYACTR,6)
static A68_313   HVYACTR = {"static A68_BOOL A_invoked = A68_FALSE;"}; 
A_GISVEC(A68_VC ,IVYACTR,HVYACTR,38)
static A68_314   OVYACTR = {"if( A_invoked ) return;"}; 
A_GISVEC(A68_VC ,PVYACTR,OVYACTR,23)
static A68_315   TVYACTR = {"A_invoked = A68_TRUE;"}; 
A_GISVEC(A68_VC ,UVYACTR,TVYACTR,21)
static A68_311   AWYACTR = {"DECS "}; 
A_GISVEC(A68_VC ,BWYACTR,AWYACTR,5)
static A68_40   OWYACTR = {"MAIN"}; 
A_GISVEC(A68_VC ,PWYACTR,OWYACTR,4)
static A68_319   RWYACTR = {"#ifdef A_postlude"}; 
A_GISVEC(A68_VC ,SWYACTR,RWYACTR,17)
static A68_320   WWYACTR = {"A_postlude;"}; 
A_GISVEC(A68_VC ,XWYACTR,WWYACTR,11)
static A68_310   BXYACTR = {"#endif"}; 
A_GISVEC(A68_VC ,CXYACTR,BXYACTR,6)
static A68_321   GXYACTR = {"return(0);"}; 
A_GISVEC(A68_VC ,HXYACTR,GXYACTR,10)
static A68_311   QXYACTR = {"DECS "}; 
A_GISVEC(A68_VC ,RXYACTR,QXYACTR,5)
static A68_325   XXYACTR = {"'complete program' called"}; 
A_GISVEC(A68_VC ,YXYACTR,XXYACTR,25)

A_STATIC A68_VOID  SGYACTR_writeinitialopencurly(void);

A_STATIC A68_VOID  EHYACTR_writeclosingcurly(void);

A_STATIC A68_VOID  ZHYACTR_routine_entry_hook(A68_VC  Routinename);

A_STATIC A68_VOID  OIYACTR_routine_exit_hook(A68_VC  Routinename);

A_STATIC A68_VOID  CJYACTR_writeconfiginfo(void);

A68_VOID  EQYACTR_startroutine(A68_204  Routine, A68_109  Environ, A68_92  Paramdecnos, A68_INT  Resultmode, A68_154 * Resultvalue);

A_STATIC A68_154 * JQYACTR_assignment(A68_154 * HQYACTR_anonymous, A68_154  IQYACTR_anonymous);

A_STATIC A68_155 * OQYACTR_assignment(A68_155 * MQYACTR_anonymous, A68_155  NQYACTR_anonymous);

A68_VOID  XQYACTR_endroutine(A68_204  Routine, A68_154 * Result);

A_STATIC A68_VOID  RSYACTR_globalenviron(A68_109  *ReturnedValue);

A68_VOID  VSYACTR_startmodule(A68_VC  Uniquename, A68_VC  Modulename);

A68_VOID  IUYACTR_startdecsmodule(A68_VC  Uniquename, A68_VC  Modulename);

A68_VOID  IWYACTR_startprocmodule(A68_204  Routine, A68_VC  Uniquename, A68_VC  Modulename, A68_154 * Resultvalue);

A68_VOID  MWYACTR_startcompositionmodule(A68_VC  Uniquename, A68_VC  Modulename, A68_BOOL  Partialcomposition);

A68_VOID  NWYACTR_endmodule(void);

A68_VOID  NXYACTR_enddecsmodule(A68_VC  Modulename);

A68_VOID  WXYACTR_completeprogram(A68_VC  Modulename, A68_104 * Autocomplabel);

A_STATIC A68_155 * OQYACTR_assignment(A68_155 * MQYACTR_anonymous, A68_155  NQYACTR_anonymous)
{ 
A68_155  PQYACTR;  /* united object - for case conformity */
A68_VC  QQYACTR_anonymous A_UNUSED = {0};
A68_VC  RQYACTR;  /* OPERATORS - copy to flex */
A68_301 * SQYACTR;  /* YIELD */
A68_155 * TQYACTR;  /* clause result */
{ 
(*A_NILCHECK(MQYACTR_anonymous)) = NQYACTR_anonymous;
PQYACTR = NQYACTR_anonymous ;
switch ( PQYACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
QQYACTR_anonymous = (PQYACTR.data.mode6);
SQYACTR = &(MQYACTR_anonymous-> data.mode6) ;
(void)((*A_NILCHECK(SQYACTR)) = A_VCOPY(QQYACTR_anonymous,RQYACTR,A68_CHAR ));
break;
default: 
/*SKIP*/;
break;
} 
TQYACTR = MQYACTR_anonymous;
} 
return( TQYACTR );
} 
#undef NL

A_STATIC A68_154 * JQYACTR_assignment(A68_154 * HQYACTR_anonymous, A68_154  IQYACTR_anonymous)
{ 
A68_INT * KQYACTR;  /* YIELD */
A68_BITS * LQYACTR;  /* YIELD */
A68_154 * UQYACTR;  /* clause result */
{ 
KQYACTR = (&(A_NILCHECK(HQYACTR_anonymous)->Mode)) ;
(*A_NILCHECK(KQYACTR)) = IQYACTR_anonymous.Mode;
LQYACTR = (&(A_NILCHECK(HQYACTR_anonymous)->Info)) ;
(*A_NILCHECK(LQYACTR)) = IQYACTR_anonymous.Info;
(void)(OQYACTR_assignment((&(A_NILCHECK(HQYACTR_anonymous)->Extra)), IQYACTR_anonymous.Extra));
UQYACTR = HQYACTR_anonymous;
} 
return( UQYACTR );
} 
#undef NL

A_STATIC A68_VOID  SGYACTR_writeinitialopencurly(void)
{ 
A68_INT  TGYACTR_codestream A_UNUSED = {0};
A68_276  UGYACTR;  /* collateral clause result */
A68_121  XGYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  YGYACTR;  /* YIELD */
A68_121  ZGYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  AHYACTR;  /* OPERATORS - istruct -> vector */
A68_121  BHYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  CHYACTR;  /* YIELD */
A68_120  DHYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(writeinitialopencurly);
{ 
TGYACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 57: */
YGYACTR = WGYACTR ;
UGYACTR.data[0] = A_UNITE(XGYACTR,mode2,2,YGYACTR);
UGYACTR.data[1] = A_UNITE(ZGYACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(AHYACTR,UGYACTR,2,A68_121 ), TGYACTR_codestream));
 /* line 58: */
 /* line 59: */
CHYACTR = QSLACTR_locdecstream(VRLACTR_currentlevel()) ;
(void)(MDMACTR_writecstream(A_HVEC(DHYACTR,A_UNITE(BHYACTR,mode3,3,CHYACTR),A68_121 ), TGYACTR_codestream));
} 
A_PROC_EXIT(writeinitialopencurly);
return;
} 
#undef NL

A_STATIC A68_VOID  EHYACTR_writeclosingcurly(void)
{ 
A68_INT  FHYACTR_codestream A_UNUSED = {0};
A68_INT  GHYACTR_locdecstream A_UNUSED = {0};
A68_INT  HHYACTR_labelstream A_UNUSED = {0};
A68_278  IHYACTR;  /* collateral clause result */
A68_121  LHYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  MHYACTR;  /* YIELD */
A68_121  NHYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  QHYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  RHYACTR;  /* YIELD */
A68_121  SHYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  THYACTR;  /* OPERATORS - istruct -> vector */
A68_121  UHYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  VHYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_121  WHYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  XHYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(writeclosingcurly);
{ 
FHYACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 70: */
GHYACTR_locdecstream = QSLACTR_locdecstream(VRLACTR_currentlevel());
 /* line 71: */
HHYACTR_labelstream = TSLACTR_labelstream(VRLACTR_currentlevel());
 /* line 73: */
MHYACTR = KHYACTR ;
IHYACTR.data[0] = A_UNITE(LHYACTR,mode2,2,MHYACTR);
IHYACTR.data[1] = A_UNITE(NHYACTR,mode4,4,EIAACTR_cnewline);
RHYACTR = PHYACTR ;
IHYACTR.data[2] = A_UNITE(QHYACTR,mode2,2,RHYACTR);
IHYACTR.data[3] = A_UNITE(SHYACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(THYACTR,IHYACTR,4,A68_121 ), FHYACTR_codestream));
 /* line 74: */
(void)(ODWACTR_endroutineprototype(VRLACTR_currentlevel()));
 /* line 75: */
(void)(MDMACTR_writecstream(A_HVEC(VHYACTR,A_UNITE(UHYACTR,mode3,3,HHYACTR_labelstream),A68_121 ), GHYACTR_locdecstream));
 /* line 76: */
 /* line 77: */
(void)(MDMACTR_writecstream(A_HVEC(XHYACTR,A_UNITE(WHYACTR,mode3,3,FHYACTR_codestream),A68_121 ), HHYACTR_labelstream));
} 
A_PROC_EXIT(writeclosingcurly);
return;
} 
#undef NL

A_STATIC A68_VOID  ZHYACTR_routine_entry_hook(A68_VC  Routinename)
{ 
A68_INT  AIYACTR;  /* YIELD */
A68_278  BIYACTR;  /* collateral clause result */
A68_121  EIYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  FIYACTR;  /* YIELD */
A68_121  GIYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  JIYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  KIYACTR;  /* YIELD */
A68_121  LIYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  MIYACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(routine_entry_hook);
 /* line 80: */
 /* line 81: */
 /* line 82: */
AIYACTR = 1 ;
if (A_VINDEX(Routinename,AIYACTR)!='!')
{ 
FIYACTR = DIYACTR ;
BIYACTR.data[0] = A_UNITE(EIYACTR,mode2,2,FIYACTR);
BIYACTR.data[1] = A_UNITE(GIYACTR,mode2,2,Routinename);
KIYACTR = IIYACTR ;
BIYACTR.data[2] = A_UNITE(JIYACTR,mode2,2,KIYACTR);
BIYACTR.data[3] = A_UNITE(LIYACTR,mode4,4,EIAACTR_cnewline);
 /* line 83: */
(void)(MDMACTR_writecstream(A_HISVEC(MIYACTR,BIYACTR,4,A68_121 ), NSLACTR_codestream(VRLACTR_currentlevel())));
} 
A_PROC_EXIT(routine_entry_hook);
return;
} 
#undef NL

A_STATIC A68_VOID  OIYACTR_routine_exit_hook(A68_VC  Routinename)
{ 
A68_INT  PIYACTR;  /* YIELD */
A68_278  QIYACTR;  /* collateral clause result */
A68_121  TIYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  UIYACTR;  /* YIELD */
A68_121  VIYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  YIYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ZIYACTR;  /* YIELD */
A68_121  AJYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  BJYACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(routine_exit_hook);
 /* line 86: */
 /* line 87: */
 /* line 88: */
PIYACTR = 1 ;
if (A_VINDEX(Routinename,PIYACTR)!='!')
{ 
UIYACTR = SIYACTR ;
QIYACTR.data[0] = A_UNITE(TIYACTR,mode2,2,UIYACTR);
QIYACTR.data[1] = A_UNITE(VIYACTR,mode2,2,Routinename);
ZIYACTR = XIYACTR ;
QIYACTR.data[2] = A_UNITE(YIYACTR,mode2,2,ZIYACTR);
QIYACTR.data[3] = A_UNITE(AJYACTR,mode4,4,EIAACTR_cnewline);
 /* line 89: */
(void)(MDMACTR_writecstream(A_HISVEC(BJYACTR,QIYACTR,4,A68_121 ), NSLACTR_codestream(VRLACTR_currentlevel())));
} 
A_PROC_EXIT(routine_exit_hook);
return;
} 
#undef NL

A_STATIC A68_VOID  CJYACTR_writeconfiginfo(void)
{ 
A68_278  DJYACTR;  /* collateral clause result */
A68_121  EJYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  HJYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  IJYACTR;  /* YIELD */
A68_121  JJYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  MJYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  NJYACTR;  /* YIELD */
A68_120  OJYACTR;  /* OPERATORS - istruct -> vector */
A68_VC  PJYACTR_arg A_UNUSED = {0};
A68_36  QJYACTR;  /* avoid structure result */
A68_VC * RJYACTR;  /* forall control - []x */
A68_INT  SJYACTR;  /* forall loop counter */
A68_283  TJYACTR;  /* collateral clause result */
A68_121  UJYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  VJYACTR;  /* YIELD */
A68_121  WJYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  ZJYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  AKYACTR;  /* YIELD */
A68_120  BKYACTR;  /* OPERATORS - istruct -> vector */
A68_283  CKYACTR;  /* collateral clause result */
A68_121  FKYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  GKYACTR;  /* YIELD */
A68_121  HKYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  KKYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  LKYACTR;  /* YIELD */
A68_120  MKYACTR;  /* OPERATORS - istruct -> vector */
A68_184 * NKYACTR_env A_UNUSED = {0};
A68_285  OKYACTR;  /* collateral clause result */
A68_121  PKYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  QKYACTR;  /* YIELD */
A68_121  RKYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  SKYACTR;  /* YIELD */
A68_121  TKYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  UKYACTR;  /* YIELD */
A68_121  VKYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  WKYACTR;  /* YIELD */
A68_121  ZKYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ALYACTR;  /* YIELD */
A68_120  BLYACTR;  /* OPERATORS - istruct -> vector */
A68_283  CLYACTR;  /* collateral clause result */
A68_121  FLYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  GLYACTR;  /* YIELD */
A68_121  HLYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  KLYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  LLYACTR;  /* YIELD */
A68_120  MLYACTR;  /* OPERATORS - istruct -> vector */
A68_183 * NLYACTR_mlist A_UNUSED = {0};
A68_283  OLYACTR;  /* collateral clause result */
A68_121  PLYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  QLYACTR;  /* YIELD */
A68_121  RLYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  SLYACTR;  /* YIELD */
A68_121  VLYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  WLYACTR;  /* YIELD */
A68_120  XLYACTR;  /* OPERATORS - istruct -> vector */
A68_288  YLYACTR;  /* collateral clause result */
A68_121  BMYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  CMYACTR;  /* YIELD */
A68_121  DMYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  GMYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  HMYACTR;  /* YIELD */
A68_121  IMYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  LMYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  MMYACTR;  /* YIELD */
A68_121  NMYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  OMYACTR;  /* OPERATORS - istruct -> vector */
A68_297  PMYACTR;  /* collateral clause result */
A68_121  SMYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  TMYACTR;  /* YIELD */
A68_121  UMYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  XMYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  YMYACTR;  /* YIELD */
A68_121  ZMYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  ANYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  BNYACTR;  /* YIELD */
A68_121  CNYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  FNYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  GNYACTR;  /* YIELD */
A68_121  HNYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  KNYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  LNYACTR;  /* YIELD */
A68_VC  MNYACTR;  /* avoid structure result */
A68_121  NNYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  QNYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  RNYACTR;  /* YIELD */
A68_121  SNYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  VNYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  WNYACTR;  /* YIELD */
A68_121  XNYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  YNYACTR;  /* YIELD */
A68_121  BOYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  COYACTR;  /* YIELD */
A68_121  DOYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  GOYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  HOYACTR;  /* YIELD */
A68_VC  IOYACTR;  /* OPERATORS - istruct -> vector */
A68_105  JOYACTR;  /* OPERATORS - istruct -> vector */
A68_121  KOYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  LOYACTR;  /* YIELD */
A68_VC  MOYACTR;  /* avoid structure result */
A68_121  NOYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  QOYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ROYACTR;  /* YIELD */
A68_121  SOYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  VOYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  WOYACTR;  /* YIELD */
A68_121  ZOYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  APYACTR;  /* YIELD */
A68_INT  BPYACTR;  /* YIELD */
A68_VC  CPYACTR;  /* avoid structure result */
A68_121  DPYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  GPYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  HPYACTR;  /* YIELD */
A68_121  IPYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  LPYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  MPYACTR;  /* YIELD */
A68_121  NPYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  QPYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  RPYACTR;  /* YIELD */
A68_121  SPYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  VPYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  WPYACTR;  /* YIELD */
A68_121  XPYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  YPYACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(writeconfiginfo);
{ 
 /* line 97: */
DJYACTR.data[0] = A_UNITE(EJYACTR,mode4,4,EIAACTR_cnewline);
IJYACTR = GJYACTR ;
DJYACTR.data[1] = A_UNITE(HJYACTR,mode2,2,IJYACTR);
 /* line 99: */
DJYACTR.data[2] = A_UNITE(JJYACTR,mode4,4,EIAACTR_cnewline);
NJYACTR = LJYACTR ;
DJYACTR.data[3] = A_UNITE(MJYACTR,mode2,2,NJYACTR);
(void)(MDMACTR_writecstream(A_HISVEC(OJYACTR,DJYACTR,4,A68_121 ), QSLACTR_locdecstream(0)));
 /* line 101: */
 /* line 102: */
RHCAOSF_get_args(  &QJYACTR );
SJYACTR = QJYACTR.upb -1;
RJYACTR = QJYACTR.data;
for (;SJYACTR-- >= 0;
(RJYACTR++
) )
{
PJYACTR_arg = *RJYACTR;
 /* line 103: */
VJYACTR = '\"' ;
TJYACTR.data[0] = A_UNITE(UJYACTR,mode1,1,VJYACTR);
TJYACTR.data[1] = A_UNITE(WJYACTR,mode2,2,PJYACTR_arg);
AKYACTR = YJYACTR ;
TJYACTR.data[2] = A_UNITE(ZJYACTR,mode2,2,AKYACTR);
 /* line 104: */
(void)(MDMACTR_writecstream(A_HISVEC(BKYACTR,TJYACTR,3,A68_121 ), QSLACTR_locdecstream(0)));
}
 /* line 106: */
 /* line 107: */
GKYACTR = EKYACTR ;
CKYACTR.data[0] = A_UNITE(FKYACTR,mode2,2,GKYACTR);
 /* line 109: */
CKYACTR.data[1] = A_UNITE(HKYACTR,mode4,4,EIAACTR_cnewline);
LKYACTR = JKYACTR ;
CKYACTR.data[2] = A_UNITE(KKYACTR,mode2,2,LKYACTR);
(void)(MDMACTR_writecstream(A_HISVEC(MKYACTR,CKYACTR,3,A68_121 ), QSLACTR_locdecstream(0)));
 /* line 111: */
NKYACTR_env = (*A_NILCHECK((&(A_NILCHECK((&IYIACTR_config_info))->Environment))));
 /* line 112: */
for ( ;; )
{ 
 /* line 113: */
 /* line 114: */
if ( !((NKYACTR_env!=DYIACTR_nil_envinfo)) ) break;
 /* line 115: */
QKYACTR = '\"' ;
OKYACTR.data[0] = A_UNITE(PKYACTR,mode1,1,QKYACTR);
SKYACTR = (*A_NILCHECK((&(A_NILCHECK(NKYACTR_env)->Env_name)))) ;
OKYACTR.data[1] = A_UNITE(RKYACTR,mode2,2,SKYACTR);
UKYACTR = '=' ;
OKYACTR.data[2] = A_UNITE(TKYACTR,mode1,1,UKYACTR);
 /* line 116: */
WKYACTR = (*A_NILCHECK((&(A_NILCHECK(NKYACTR_env)->Env_value)))) ;
OKYACTR.data[3] = A_UNITE(VKYACTR,mode2,2,WKYACTR);
ALYACTR = YKYACTR ;
OKYACTR.data[4] = A_UNITE(ZKYACTR,mode2,2,ALYACTR);
(void)(MDMACTR_writecstream(A_HISVEC(BLYACTR,OKYACTR,5,A68_121 ), QSLACTR_locdecstream(0)));
 /* line 117: */
 /* line 118: */
(void)(NKYACTR_env = (*A_NILCHECK((&(A_NILCHECK(NKYACTR_env)->Next)))));
}
 /* line 120: */
 /* line 121: */
GLYACTR = ELYACTR ;
CLYACTR.data[0] = A_UNITE(FLYACTR,mode2,2,GLYACTR);
 /* line 123: */
CLYACTR.data[1] = A_UNITE(HLYACTR,mode4,4,EIAACTR_cnewline);
LLYACTR = JLYACTR ;
CLYACTR.data[2] = A_UNITE(KLYACTR,mode2,2,LLYACTR);
(void)(MDMACTR_writecstream(A_HISVEC(MLYACTR,CLYACTR,3,A68_121 ), QSLACTR_locdecstream(0)));
 /* line 125: */
NLYACTR_mlist = (*A_NILCHECK((&(A_NILCHECK((&IYIACTR_config_info))->Used_modules))));
 /* line 126: */
for ( ;; )
{ 
 /* line 127: */
 /* line 128: */
if ( !((NLYACTR_mlist!=CYIACTR_nil_modinfolist)) ) break;
 /* line 129: */
QLYACTR = '\"' ;
OLYACTR.data[0] = A_UNITE(PLYACTR,mode1,1,QLYACTR);
 /* line 130: */
SLYACTR = (*A_NILCHECK((&(A_NILCHECK(NLYACTR_mlist)->Modinfo_file)))) ;
OLYACTR.data[1] = A_UNITE(RLYACTR,mode2,2,SLYACTR);
WLYACTR = ULYACTR ;
OLYACTR.data[2] = A_UNITE(VLYACTR,mode2,2,WLYACTR);
(void)(MDMACTR_writecstream(A_HISVEC(XLYACTR,OLYACTR,3,A68_121 ), QSLACTR_locdecstream(0)));
 /* line 131: */
 /* line 132: */
(void)(NLYACTR_mlist = (*A_NILCHECK((&(A_NILCHECK(NLYACTR_mlist)->Next)))));
}
 /* line 134: */
 /* line 135: */
CMYACTR = AMYACTR ;
YLYACTR.data[0] = A_UNITE(BMYACTR,mode2,2,CMYACTR);
 /* line 136: */
YLYACTR.data[1] = A_UNITE(DMYACTR,mode4,4,EIAACTR_cnewline);
HMYACTR = FMYACTR ;
YLYACTR.data[2] = A_UNITE(GMYACTR,mode2,2,HMYACTR);
 /* line 137: */
YLYACTR.data[3] = A_UNITE(IMYACTR,mode4,4,EIAACTR_cnewline);
 /* line 138: */
MMYACTR = KMYACTR ;
YLYACTR.data[4] = A_UNITE(LMYACTR,mode2,2,MMYACTR);
YLYACTR.data[5] = A_UNITE(NMYACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(OMYACTR,YLYACTR,6,A68_121 ), QSLACTR_locdecstream(0)));
 /* line 140: */
 /* line 141: */
TMYACTR = RMYACTR ;
PMYACTR.data[0] = A_UNITE(SMYACTR,mode2,2,TMYACTR);
 /* line 142: */
PMYACTR.data[1] = A_UNITE(UMYACTR,mode4,4,EIAACTR_cnewline);
YMYACTR = WMYACTR ;
PMYACTR.data[2] = A_UNITE(XMYACTR,mode2,2,YMYACTR);
PMYACTR.data[3] = A_UNITE(ZMYACTR,mode2,2,BRIACTR_current_directory);
BNYACTR = '/' ;
PMYACTR.data[4] = A_UNITE(ANYACTR,mode1,1,BNYACTR);
PMYACTR.data[5] = A_UNITE(CNYACTR,mode2,2,XQIACTR_sourcefilename);
GNYACTR = ENYACTR ;
PMYACTR.data[6] = A_UNITE(FNYACTR,mode2,2,GNYACTR);
 /* line 143: */
PMYACTR.data[7] = A_UNITE(HNYACTR,mode4,4,EIAACTR_cnewline);
LNYACTR = JNYACTR ;
PMYACTR.data[8] = A_UNITE(KNYACTR,mode2,2,LNYACTR);
YPBAOSF_local_time_str( (*A_NILCHECK((&(A_NILCHECK((&IYIACTR_config_info))->Translationtime)))), &MNYACTR );
PMYACTR.data[9] = A_UNITE(NNYACTR,mode2,2,MNYACTR);
RNYACTR = PNYACTR ;
PMYACTR.data[10] = A_UNITE(QNYACTR,mode2,2,RNYACTR);
 /* line 144: */
PMYACTR.data[11] = A_UNITE(SNYACTR,mode4,4,EIAACTR_cnewline);
WNYACTR = UNYACTR ;
PMYACTR.data[12] = A_UNITE(VNYACTR,mode2,2,WNYACTR);
YNYACTR = (*A_NILCHECK((&(A_NILCHECK((&IYIACTR_config_info))->Version)))) ;
PMYACTR.data[13] = A_UNITE(XNYACTR,mode2,2,YNYACTR);
COYACTR = AOYACTR ;
PMYACTR.data[14] = A_UNITE(BOYACTR,mode2,2,COYACTR);
 /* line 145: */
PMYACTR.data[15] = A_UNITE(DOYACTR,mode4,4,EIAACTR_cnewline);
HOYACTR = FOYACTR ;
PMYACTR.data[16] = A_UNITE(GOYACTR,mode2,2,HOYACTR);
 /* line 146: */
JOYACTR = (*A_NILCHECK((&(A_NILCHECK((&IYIACTR_config_info))->Nameseed)))) ;
LOYACTR = A_HISVEC(IOYACTR,JOYACTR,7,A68_CHAR ) ;
PMYACTR.data[17] = A_UNITE(KOYACTR,mode2,2,LOYACTR);
EMMACTR_nameseedoriginstring( (*A_NILCHECK((&(A_NILCHECK((&IYIACTR_config_info))->Nameseedorigin)))), &MOYACTR );
PMYACTR.data[18] = A_UNITE(NOYACTR,mode2,2,MOYACTR);
ROYACTR = POYACTR ;
PMYACTR.data[19] = A_UNITE(QOYACTR,mode2,2,ROYACTR);
 /* line 147: */
PMYACTR.data[20] = A_UNITE(SOYACTR,mode4,4,EIAACTR_cnewline);
 /* line 148: */
WOYACTR = UOYACTR ;
PMYACTR.data[21] = A_UNITE(VOYACTR,mode2,2,WOYACTR);
if (RCPACTR_specs.dim[0].upb==0)
{ 
APYACTR = YOYACTR ;
PMYACTR.data[22] = A_UNITE(ZOYACTR,mode2,2,APYACTR);
} 
else
{ 
BPYACTR = 1 ;
YPBAOSF_local_time_str( (*A_NILCHECK((&(A_NILCHECK((&A_R1INDEX(RCPACTR_specs,BPYACTR)))->Timeoflastchange)))), &CPYACTR );
PMYACTR.data[22] = A_UNITE(DPYACTR,mode2,2,CPYACTR);
} 
HPYACTR = FPYACTR ;
PMYACTR.data[23] = A_UNITE(GPYACTR,mode2,2,HPYACTR);
 /* line 149: */
PMYACTR.data[24] = A_UNITE(IPYACTR,mode4,4,EIAACTR_cnewline);
MPYACTR = KPYACTR ;
PMYACTR.data[25] = A_UNITE(LPYACTR,mode2,2,MPYACTR);
 /* line 150: */
PMYACTR.data[26] = A_UNITE(NPYACTR,mode4,4,EIAACTR_cnewline);
RPYACTR = PPYACTR ;
PMYACTR.data[27] = A_UNITE(QPYACTR,mode2,2,RPYACTR);
 /* line 151: */
PMYACTR.data[28] = A_UNITE(SPYACTR,mode4,4,EIAACTR_cnewline);
 /* line 152: */
WPYACTR = UPYACTR ;
PMYACTR.data[29] = A_UNITE(VPYACTR,mode2,2,WPYACTR);
PMYACTR.data[30] = A_UNITE(XPYACTR,mode4,4,EIAACTR_cnewline);
 /* line 153: */
(void)(MDMACTR_writecstream(A_HISVEC(YPYACTR,PMYACTR,31,A68_121 ), NSLACTR_codestream(0)));
} 
A_PROC_EXIT(writeconfiginfo);
return;
} 
#undef NL
 /* line 157: */
 /* line 158: */
 /* line 159: */
 /* line 161: */

A68_VOID  EQYACTR_startroutine(A68_204  Routine, A68_109  Environ, A68_92  Paramdecnos, A68_INT  Resultmode, A68_154 * Resultvalue)
{ 
A68_154  FQYACTR;  /* collateral clause result */
A68_155  GQYACTR = {0};  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(startroutine);
 /* line 162: */
 /* line 164: */
{ 
 /* line 165: */
 /* line 166: */
 /* line 167: */
 /* line 168: */
 /* line 169: */
 /* line 171: */
(void)(ESWACTR_rddec(Routine.Name, Routine.Mode, Paramdecnos, Resultmode, Routine.Rdenno, Environ, Routine.Props));
 /* line 172: */
(void)(SGYACTR_writeinitialopencurly());
 /* line 173: */
(void)(ZHYACTR_routine_entry_hook(Routine.Name));
 /* line 175: */
FQYACTR.Mode = Resultmode;
FQYACTR.Info = PKJACTR_defaultinfo;
 /* line 176: */
FQYACTR.Extra = A_EMPTY(GQYACTR,3);
(void)(JQYACTR_assignment(Resultvalue, (*A_NILCHECK(JQYACTR_assignment(A_LOC(A68_154 ), FQYACTR)))));
} 
A_PROC_EXIT(startroutine);
return;
} 
#undef NL

A68_VOID  XQYACTR_endroutine(A68_204  Routine, A68_154 * Result)
{ 
A68_BITS  YQYACTR;  /* ADICOPS - >= */
A68_BOOL  ZQYACTR_generator A_UNUSED = {0};
A68_INT  ARYACTR_codestream A_UNUSED = {0};
A68_BOOL  BRYACTR;  /* optbool result */
A68_BOOL  CRYACTR_usetempforresult A_UNUSED = {0};
A68_276  DRYACTR;  /* collateral clause result */
A68_121  GRYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  HRYACTR;  /* YIELD */
A68_121  IRYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  JRYACTR;  /* OPERATORS - istruct -> vector */
A68_278  KRYACTR;  /* collateral clause result */
A68_121  NRYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ORYACTR;  /* YIELD */
A68_VC  PRYACTR;  /* avoid structure result */
A68_121  QRYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  TRYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  URYACTR;  /* YIELD */
A68_121  VRYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  WRYACTR;  /* OPERATORS - istruct -> vector */
A68_276  XRYACTR;  /* collateral clause result */
A68_121  ASYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  BSYACTR;  /* YIELD */
A68_121  CSYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  DSYACTR;  /* OPERATORS - istruct -> vector */
A68_278  ESYACTR;  /* collateral clause result */
A68_121  HSYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ISYACTR;  /* YIELD */
A68_VC  JSYACTR;  /* avoid structure result */
A68_121  KSYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  NSYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  OSYACTR;  /* YIELD */
A68_121  PSYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  QSYACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(endroutine);
 /* line 179: */
 /* line 180: */
{ 
YQYACTR = Routine.Props ;
ZQYACTR_generator = A_LB_GE(YQYACTR,FDAACTR_genprocbit);
 /* line 181: */
ARYACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 182: */
 /* line 183: */
 /* line 184: */
if (ZQYACTR_generator)
{ 
/*SKIP*/;
} 
else
{ 
 /* line 185: */
if (OTMACTR_dynamic((*A_NILCHECK((&(A_NILCHECK(Result)->Mode))))))
{ 
 /* line 186: */
 /* line 187: */
if (ARMACTR_isarray((*A_NILCHECK((&(A_NILCHECK(Result)->Mode))))))
{ 
 /* line 188: */
/*SKIP*/;
} 
else
{ 
 /* line 189: */
 /* line 190: */
/*SKIP*/;
} 
} 
else
{ 
/*SKIP*/;
} 
} 
 /* line 192: */
(void)(OIYACTR_routine_exit_hook(Routine.Name));
 /* line 195: */
 /* line 196: */
BRYACTR = NQIACTR_nostructresultoption;
if ( BRYACTR )
{BRYACTR = VSMACTR_iscstruct((*A_NILCHECK((&(A_NILCHECK(Result)->Mode)))));
}
CRYACTR_usetempforresult = BRYACTR;
 /* line 198: */
 /* line 199: */
if ((*A_NILCHECK((&(A_NILCHECK(Result)->Mode))))==UEAACTR_voidmode)
{ 
HRYACTR = FRYACTR ;
DRYACTR.data[0] = A_UNITE(GRYACTR,mode2,2,HRYACTR);
DRYACTR.data[1] = A_UNITE(IRYACTR,mode4,4,EIAACTR_cnewline);
 /* line 200: */
 /* line 201: */
(void)(MDMACTR_writecstream(A_HISVEC(JRYACTR,DRYACTR,2,A68_121 ), ARYACTR_codestream));
} 
else
{ 
 /* line 202: */
if (CRYACTR_usetempforresult)
{ 
 /* line 203: */
ORYACTR = MRYACTR ;
KRYACTR.data[0] = A_UNITE(NRYACTR,mode2,2,ORYACTR);
 /* line 204: */
DAQACTR_getcfragment( Result, &PRYACTR );
KRYACTR.data[1] = A_UNITE(QRYACTR,mode2,2,PRYACTR);
URYACTR = SRYACTR ;
KRYACTR.data[2] = A_UNITE(TRYACTR,mode2,2,URYACTR);
KRYACTR.data[3] = A_UNITE(VRYACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(WRYACTR,KRYACTR,4,A68_121 ), ARYACTR_codestream));
 /* line 205: */
BSYACTR = ZRYACTR ;
XRYACTR.data[0] = A_UNITE(ASYACTR,mode2,2,BSYACTR);
XRYACTR.data[1] = A_UNITE(CSYACTR,mode4,4,EIAACTR_cnewline);
 /* line 206: */
 /* line 207: */
(void)(MDMACTR_writecstream(A_HISVEC(DSYACTR,XRYACTR,2,A68_121 ), ARYACTR_codestream));
} 
else
{ 
 /* line 208: */
ISYACTR = GSYACTR ;
ESYACTR.data[0] = A_UNITE(HSYACTR,mode2,2,ISYACTR);
 /* line 209: */
DAQACTR_getcfragment( Result, &JSYACTR );
ESYACTR.data[1] = A_UNITE(KSYACTR,mode2,2,JSYACTR);
OSYACTR = MSYACTR ;
ESYACTR.data[2] = A_UNITE(NSYACTR,mode2,2,OSYACTR);
ESYACTR.data[3] = A_UNITE(PSYACTR,mode4,4,EIAACTR_cnewline);
 /* line 210: */
(void)(MDMACTR_writecstream(A_HISVEC(QSYACTR,ESYACTR,4,A68_121 ), ARYACTR_codestream));
} 
} 
 /* line 212: */
(void)(EHYACTR_writeclosingcurly());
 /* line 214: */
 /* line 215: */
(void)(ARWACTR_completerddec());
} 
A_PROC_EXIT(endroutine);
return;
} 
#undef NL

A_STATIC A68_VOID  RSYACTR_globalenviron(A68_109  *ReturnedValue)
{ 
A68_109  SSYACTR;  /* clause result */
A_PROC_ENTRY(globalenviron);
SSYACTR = (*A_NILCHECK((&(A_NILCHECK((&A_R1INDEX(WPKACTR_ids,GAAACTR_globalidno)))->Environ))));
A_PROC_EXIT(globalenviron);
*ReturnedValue = (SSYACTR);
return;
} 
#undef NL

A68_VOID  VSYACTR_startmodule(A68_VC  Uniquename, A68_VC  Modulename)
{ 
A68_INT  WSYACTR_codestream A_UNUSED = {0};
A68_276  XSYACTR;  /* collateral clause result */
A68_121  ATYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  BTYACTR;  /* YIELD */
A68_121  CTYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  DTYACTR;  /* OPERATORS - istruct -> vector */
A68_276  GTYACTR;  /* collateral clause result */
A68_121  JTYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  KTYACTR;  /* YIELD */
A68_121  LTYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  MTYACTR;  /* OPERATORS - istruct -> vector */
A68_288  NTYACTR;  /* collateral clause result */
A68_121  QTYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  RTYACTR;  /* YIELD */
A68_121  STYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  VTYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  WTYACTR;  /* YIELD */
A68_121  XTYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  AUYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  BUYACTR;  /* YIELD */
A68_121  CUYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  DUYACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(startmodule);
 /* line 223: */
 /* line 224: */
{ 
WSYACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 226: */
 /* line 229: */
 /* line 230: */
BTYACTR = ZSYACTR ;
XSYACTR.data[0] = A_UNITE(ATYACTR,mode2,2,BTYACTR);
XSYACTR.data[1] = A_UNITE(CTYACTR,mode4,4,EIAACTR_cnewline);
 /* line 231: */
(void)(MDMACTR_writecstream(A_HISVEC(DTYACTR,XSYACTR,2,A68_121 ), WSYACTR_codestream));
 /* line 232: */
 /* line 233: */
(void)(OCWACTR_noteroutineprototype(VRLACTR_currentlevel(), FTYACTR));
 /* line 235: */
(void)(SGYACTR_writeinitialopencurly());
 /* line 240: */
KTYACTR = ITYACTR ;
GTYACTR.data[0] = A_UNITE(JTYACTR,mode2,2,KTYACTR);
GTYACTR.data[1] = A_UNITE(LTYACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(MTYACTR,GTYACTR,2,A68_121 ), WSYACTR_codestream));
 /* line 242: */
(void)(IUPACTR_processcontexts());
 /* line 244: */
(void)(CJYACTR_writeconfiginfo());
 /* line 246: */
 /* line 247: */
RTYACTR = PTYACTR ;
NTYACTR.data[0] = A_UNITE(QTYACTR,mode2,2,RTYACTR);
 /* line 250: */
NTYACTR.data[1] = A_UNITE(STYACTR,mode4,4,EIAACTR_cnewline);
WTYACTR = UTYACTR ;
NTYACTR.data[2] = A_UNITE(VTYACTR,mode2,2,WTYACTR);
 /* line 251: */
NTYACTR.data[3] = A_UNITE(XTYACTR,mode4,4,EIAACTR_cnewline);
 /* line 252: */
BUYACTR = ZTYACTR ;
NTYACTR.data[4] = A_UNITE(AUYACTR,mode2,2,BUYACTR);
NTYACTR.data[5] = A_UNITE(CUYACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(DUYACTR,NTYACTR,6,A68_121 ), WSYACTR_codestream));
 /* line 254: */
 /* line 255: */
(void)(ZHYACTR_routine_entry_hook(FUYACTR));
} 
A_PROC_EXIT(startmodule);
return;
} 
#undef NL

A68_VOID  IUYACTR_startdecsmodule(A68_VC  Uniquename, A68_VC  Modulename)
{ 
A68_INT  JUYACTR_codestream A_UNUSED = {0};
A68_INT  KUYACTR_locdecstream A_UNUSED = {0};
A68_288  LUYACTR;  /* collateral clause result */
A68_121  OUYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  PUYACTR;  /* YIELD */
A68_121  QUYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  TUYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  UUYACTR;  /* YIELD */
A68_121  VUYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  YUYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ZUYACTR;  /* YIELD */
A68_121  AVYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  BVYACTR;  /* OPERATORS - istruct -> vector */
A68_276  GVYACTR;  /* collateral clause result */
A68_121  JVYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  KVYACTR;  /* YIELD */
A68_121  LVYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  MVYACTR;  /* OPERATORS - istruct -> vector */
A68_278  NVYACTR;  /* collateral clause result */
A68_121  QVYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  RVYACTR;  /* YIELD */
A68_121  SVYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  VVYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  WVYACTR;  /* YIELD */
A68_121  XVYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  YVYACTR;  /* OPERATORS - istruct -> vector */
A68_316  ZVYACTR;  /* collateral clause result */
A68_36  CWYACTR;  /* OPERATORS - istruct -> vector */
A68_VC  DWYACTR;  /* avoid structure result */
A_PROC_ENTRY(startdecsmodule);
 /* line 265: */
 /* line 266: */
{ 
JUYACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 267: */
KUYACTR_locdecstream = QSLACTR_locdecstream(VRLACTR_currentlevel());
 /* line 271: */
 /* line 272: */
PUYACTR = NUYACTR ;
LUYACTR.data[0] = A_UNITE(OUYACTR,mode2,2,PUYACTR);
LUYACTR.data[1] = A_UNITE(QUYACTR,mode2,2,Uniquename);
UUYACTR = SUYACTR ;
LUYACTR.data[2] = A_UNITE(TUYACTR,mode2,2,UUYACTR);
LUYACTR.data[3] = A_UNITE(VUYACTR,mode2,2,Modulename);
 /* line 274: */
ZUYACTR = XUYACTR ;
LUYACTR.data[4] = A_UNITE(YUYACTR,mode2,2,ZUYACTR);
LUYACTR.data[5] = A_UNITE(AVYACTR,mode4,4,EIAACTR_cnewline);
 /* line 275: */
(void)(MDMACTR_writecstream(A_HISVEC(BVYACTR,LUYACTR,6,A68_121 ), JUYACTR_codestream));
 /* line 276: */
(void)(OCWACTR_noteroutineprototype(VRLACTR_currentlevel(), A_VC_PLUS(A_VC_PLUS(EVYACTR,Uniquename),FVYACTR)));
 /* line 278: */
(void)(SGYACTR_writeinitialopencurly());
 /* line 280: */
 /* line 281: */
 /* line 282: */
KVYACTR = IVYACTR ;
GVYACTR.data[0] = A_UNITE(JVYACTR,mode2,2,KVYACTR);
GVYACTR.data[1] = A_UNITE(LVYACTR,mode4,4,EIAACTR_cnewline);
 /* line 283: */
(void)(MDMACTR_writecstream(A_HISVEC(MVYACTR,GVYACTR,2,A68_121 ), KUYACTR_locdecstream));
 /* line 285: */
 /* line 286: */
RVYACTR = PVYACTR ;
NVYACTR.data[0] = A_UNITE(QVYACTR,mode2,2,RVYACTR);
 /* line 287: */
NVYACTR.data[1] = A_UNITE(SVYACTR,mode4,4,EIAACTR_cnewline);
 /* line 288: */
WVYACTR = UVYACTR ;
NVYACTR.data[2] = A_UNITE(VVYACTR,mode2,2,WVYACTR);
NVYACTR.data[3] = A_UNITE(XVYACTR,mode4,4,EIAACTR_cnewline);
 /* line 289: */
(void)(MDMACTR_writecstream(A_HISVEC(YVYACTR,NVYACTR,4,A68_121 ), JUYACTR_codestream));
 /* line 291: */
(void)(IUPACTR_processcontexts());
 /* line 293: */
(void)(CJYACTR_writeconfiginfo());
 /* line 295: */
ZVYACTR.data[0] = BWYACTR;
ZVYACTR.data[1] = Modulename;
 /* line 296: */
JDAAOSF_concat( A_HISVEC(CWYACTR,ZVYACTR,2,A68_VC ), &DWYACTR );
(void)(ZHYACTR_routine_entry_hook(DWYACTR));
} 
A_PROC_EXIT(startdecsmodule);
return;
} 
#undef NL
 /* line 300: */
 /* line 302: */

A68_VOID  IWYACTR_startprocmodule(A68_204  Routine, A68_VC  Uniquename, A68_VC  Modulename, A68_154 * Resultvalue)
{ 
A_PROC_ENTRY(startprocmodule);
 /* line 303: */
 /* line 304: */
 /* line 305: */
(void)(SXIACTR_terminalerror(809));
A_PROC_EXIT(startprocmodule);
return;
} 
#undef NL
 /* line 310: */

A68_VOID  MWYACTR_startcompositionmodule(A68_VC  Uniquename, A68_VC  Modulename, A68_BOOL  Partialcomposition)
{ 
A_PROC_ENTRY(startcompositionmodule);
 /* line 314: */
 /* line 315: */
 /* line 316: */
(void)(SXIACTR_terminalerror(806));
A_PROC_EXIT(startcompositionmodule);
return;
} 
#undef NL

A68_VOID  NWYACTR_endmodule(void)
{ 
A68_322  QWYACTR;  /* collateral clause result */
A68_121  TWYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  UWYACTR;  /* YIELD */
A68_121  VWYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  YWYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ZWYACTR;  /* YIELD */
A68_121  AXYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  DXYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  EXYACTR;  /* YIELD */
A68_121  FXYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  IXYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  JXYACTR;  /* YIELD */
A68_121  KXYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  LXYACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(endmodule);
{ 
(void)(OIYACTR_routine_exit_hook(PWYACTR));
 /* line 321: */
 /* line 322: */
UWYACTR = SWYACTR ;
QWYACTR.data[0] = A_UNITE(TWYACTR,mode2,2,UWYACTR);
 /* line 323: */
QWYACTR.data[1] = A_UNITE(VWYACTR,mode4,4,EIAACTR_cnewline);
ZWYACTR = XWYACTR ;
QWYACTR.data[2] = A_UNITE(YWYACTR,mode2,2,ZWYACTR);
 /* line 324: */
QWYACTR.data[3] = A_UNITE(AXYACTR,mode4,4,EIAACTR_cnewline);
EXYACTR = CXYACTR ;
QWYACTR.data[4] = A_UNITE(DXYACTR,mode2,2,EXYACTR);
 /* line 325: */
QWYACTR.data[5] = A_UNITE(FXYACTR,mode4,4,EIAACTR_cnewline);
 /* line 326: */
JXYACTR = HXYACTR ;
QWYACTR.data[6] = A_UNITE(IXYACTR,mode2,2,JXYACTR);
QWYACTR.data[7] = A_UNITE(KXYACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(LXYACTR,QWYACTR,8,A68_121 ), NSLACTR_codestream(VRLACTR_currentlevel())));
 /* line 327: */
 /* line 328: */
(void)(EHYACTR_writeclosingcurly());
} 
A_PROC_EXIT(endmodule);
return;
} 
#undef NL

A68_VOID  NXYACTR_enddecsmodule(A68_VC  Modulename)
{ 
A68_BOOL  OXYACTR;  /* optbool result */
A68_316  PXYACTR;  /* collateral clause result */
A68_36  SXYACTR;  /* OPERATORS - istruct -> vector */
A68_VC  TXYACTR;  /* avoid structure result */
A_PROC_ENTRY(enddecsmodule);
 /* line 331: */
 /* line 332: */
{ 
 /* line 333: */
if (KCPACTR_previousversionfound)
{ 
 /* line 334: */
 /* line 336: */
OXYACTR = LCPACTR_rscompatiblewithpreviousversion;
if ( OXYACTR )
{OXYACTR = MCPACTR_transcompatiblewithpreviousversi;
}
if (OXYACTR)
{ 
 /* line 337: */
(void)(GXIACTR_comment(319));
} 
else
{ 
 /* line 338: */
 /* line 339: */
(void)(JXIACTR_warning(320));
} 
} 
 /* line 341: */
PXYACTR.data[0] = RXYACTR;
PXYACTR.data[1] = Modulename;
JDAAOSF_concat( A_HISVEC(SXYACTR,PXYACTR,2,A68_VC ), &TXYACTR );
(void)(OIYACTR_routine_exit_hook(TXYACTR));
 /* line 343: */
(void)(EHYACTR_writeclosingcurly());
 /* line 345: */
 /* line 346: */
(void)(DJPACTR_outputmoduleinformation());
} 
A_PROC_EXIT(enddecsmodule);
return;
} 
#undef NL
 /* line 351: */

A68_VOID  WXYACTR_completeprogram(A68_VC  Modulename, A68_104 * Autocomplabel)
{ 
A_PROC_ENTRY(completeprogram);
 /* line 357: */
 /* line 358: */
 /* line 359: */
(void)(WXIACTR_assert(YXYACTR, A68_FALSE));
A_PROC_EXIT(completeprogram);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 6: */
void NGYACTR(void)   /* initialise DECS entryandreturn */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel","-dir",".","entryandreturn.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/vak/Project/Algol/Algol-68RS-Source/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/vak/Project/Algol/Algol-68RS-Source/a68config/a68config.m","./values.m","./uniquenameserver.m","./modules.m","./incmode.m","./incvalue.m","./incimperatives.m","./incid.m","./environment.m","./identifiers.m","./modes.m","./coutput.m","./environ.m","./centities.m","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel/osif.m","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config A_UNUSED;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
OUPACTR();   /* USE values */
RHMACTR();   /* USE uniquenameserver */
ANOACTR();   /* USE modules */
ZDAACTR();   /* USE incmode */
GKJACTR();   /* USE incvalue */
UAAACTR();   /* USE incimperatives */
BAAACTR();   /* USE incid */
HPIACTR();   /* USE environment */
YMVACTR();   /* USE identifiers */
DNMACTR();   /* USE modes */
PTLACTR();   /* USE coutput */
BPLACTR();   /* USE environ */
THAACTR();   /* USE centities */
CSCAOSF();   /* USE osif */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/entryandreturn.a68";
A_config.translation_time = "Thu Nov  5 21:56:13 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "MGYACTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 21:56:13 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS entryandreturn);
(void)(UEAALIB_a68config(LGAALIB_configinfo, RGYACTR));
 /* line 48: */
 /* line 55: */
 /* line 56: */
 /* line 61: */
 /* line 68: */
 /* line 69: */
 /* line 79: */
 /* line 85: */
 /* line 91: */
 /* line 95: */
 /* line 96: */
 /* line 155: */
 /* line 156: */
 /* line 178: */
 /* line 217: */
 /* line 219: */
 /* line 257: */
 /* line 298: */
 /* line 299: */
 /* line 307: */
 /* line 308: */
 /* line 318: */
 /* line 319: */
 /* line 320: */
 /* line 330: */
 /* line 348: */
 /* line 349: */
 /* line 361: */
 /* line 363: */
 /* line 367: */
/*SKIP*/;
A_PROC_EXIT(DECS entryandreturn);
} 
#undef NL
/* end of translation of entryandreturn.a68 */
