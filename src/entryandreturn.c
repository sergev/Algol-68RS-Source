/* UNAME:JFYACTR */
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
struct A68t152 ;
struct A68t153 ;

A_PROCEDURE(A68_VOID ,A68t151,(struct A68t152 ,struct A68t153 *,A68_INT ),(struct A68t152 ,struct A68t153 *,A68_INT ,void *));
typedef struct A68t151  A68_151 ;    /* PROC(MODE152,REF MODE153,INT) VOID */
struct A68t152{
A68_INT  Type;
A_PAD_INT(PAD_55)
A68_VC  Name;
A68_INT  Mode;
A_PAD_INT(PAD_56)
A68_INT  Decno;
A_PAD_INT(PAD_57)
};
typedef struct A68t152  A68_152 ;    /* STRUCT(INT,REF MODE26,INT,INT)  */
struct A68t155{
A68_INT  Rdenno;
A_PAD_INT(PAD_58)
};
typedef struct A68t155  A68_155 ;    /* STRUCT(INT)  */
struct A68t156{
A68_INT  Idno;
A_PAD_INT(PAD_59)
};
typedef struct A68t156  A68_156 ;    /* STRUCT(INT)  */
struct A68t157{
A68_INT  Nse;
A_PAD_INT(PAD_60)
};
typedef struct A68t157  A68_157 ;    /* STRUCT(INT)  */
struct A68t158{
A68_INT  Fn;
A_PAD_INT(PAD_61)
A68_INT  Param;
A_PAD_INT(PAD_62)
struct A68t159 * Operands;
};
typedef struct A68t158  A68_158 ;    /* STRUCT(INT,INT,REF MODE159)  */
struct A68t154 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t155  mode2;
struct A68t156  mode4;
struct A68t128  mode5;
A68_VC  mode6;
struct A68t106  mode7;
struct A68t157  mode8;
struct A68t158  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t154  A68_154 ;    /* UNION(LONG BITS,MODE155,VOID,MODE156,MODE128,MODE26,MODE106,MODE157,MODE158)  */
struct A68t153{
A68_INT  Mode;
A_PAD_INT(PAD_63)
A68_BITS  Info;
A_PAD_BITS(PAD_64)
struct A68t154  Extra;
};
typedef struct A68t153  A68_153 ;    /* STRUCT(INT,BITS,MODE154)  */
struct A68t159{
struct A68t153  Value;
struct A68t159 * Rest;
};
typedef struct A68t159  A68_159 ;    /* STRUCT(MODE153,REF MODE159)  */

A_PROCEDURE(A68_VOID ,A68t160,(A68_INT ,struct A68t109 *),(A68_INT ,struct A68t109 *,void *));
typedef struct A68t160  A68_160 ;    /* PROC(INT) MODE109 */

A_PROCEDURE(A68_VOID ,A68t161,(A68_VC ,struct A68t105 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t105 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(REF MODE26,MODE105,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t162,(struct A68t152 ,struct A68t159 **),(struct A68t152 ,struct A68t159 **,void *));
typedef struct A68t162  A68_162 ;    /* PROC(MODE152,REF REF MODE159) VOID */
A_ROW(struct A68t164 ,A68t163,1);
typedef struct A68t163  A68_163 ;    /* [] MODE164 */
struct A68t164{
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
typedef struct A68t164  A68_164 ;    /* STRUCT(INT,INT,MODE109,REF MODE26,REF MODE26,MODE105,BITS,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t165,(struct A68t152 ),(struct A68t152 ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(MODE152) VOID */
struct A68t167 ;

A_PROCEDURE(A68_VOID ,A68t166,(struct A68t167 ),(struct A68t167 ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(MODE167) VOID */
struct A68t167{
A68_VC  Name;
A68_INT  Labno;
A_PAD_INT(PAD_69)
A68_INT  Status;
A_PAD_INT(PAD_70)
A68_BOOL  Notsetting;
A_PAD_BOOL(PAD_71)
};
typedef struct A68t167  A68_167 ;    /* STRUCT(REF MODE26,INT,INT,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t168,(A68_VC ,A68_INT ,struct A68t92 ,A68_INT ,A68_INT ,struct A68t109 ,A68_BITS ),(A68_VC ,A68_INT ,struct A68t92 ,A68_INT ,A68_INT ,struct A68t109 ,A68_BITS ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(REF MODE26,INT,REF MODE92,INT,INT,MODE109,BITS) VOID */
A_ROW(struct A68t170 ,A68t169,1);
typedef struct A68t169  A68_169 ;    /* [] MODE170 */
struct A68t170{
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
typedef struct A68t170  A68_170 ;    /* STRUCT(INT,INT,INT,MODE109,REF MODE26,MODE105,MODE105,MODE105,BITS)  */

A_PROCEDURE(A68_VOID ,A68t171,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t172,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t173,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t173  A68_173 ;    /* PROC(INT) REF MODE26 */
struct A68t175 ;

A_PROCEDURE(A68_VOID ,A68t174,(A68_INT ,struct A68t175 ),(A68_INT ,struct A68t175 ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(INT,MODE175) VOID */
A_ROW(A68_VC ,A68t175,1);
typedef struct A68t175  A68_175 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t176,(void),(void *));
typedef struct A68t176  A68_176 ;    /* PROC BITS */
struct A68t177{
A68_INT  Cfile;
A_PAD_INT(PAD_79)
};
typedef struct A68t177  A68_177 ;    /* STRUCT(INT)  */
struct A68t178{
A68_INT  Seedfile;
A_PAD_INT(PAD_80)
};
typedef struct A68t178  A68_178 ;    /* STRUCT(INT)  */
struct A68t179 { A68_INT mode; union {
struct A68t177  mode1;
struct A68t178  mode2;
struct A68t105  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t179  A68_179 ;    /* UNION(MODE177,MODE178,MODE105,VOID)  */
A_ROW(A68_BOOL ,A68t180,1);
typedef struct A68t180  A68_180 ;    /* [] BOOL */
struct A68t181{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_81)
A68_VC  Sourcefile;
struct A68t105  Nameseed;
A_PAD_ISTRUCT(A68_105 ,PAD_82)
struct A68t179  Nameseedorigin;
struct A68t182 * Used_modules;
A68_VC  Commandline;
struct A68t183 * Environment;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE105,MODE179,REF MODE182,REF MODE26,REF MODE183)  */
struct A68t182{
A68_VC  Modinfo_file;
struct A68t182 * Next;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(REF MODE26,REF MODE182)  */
struct A68t183{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t183 * Next;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE183)  */
struct A68t185 ;

A_PROCEDURE(struct A68t59 *,A68t184,(A68_VC ,struct A68t185 *,A68_VC *),(A68_VC ,struct A68t185 *,A68_VC *,void *));
typedef struct A68t184  A68_184 ;    /* PROC(MODE26,REF MODE185,REF REF MODE26) REF MODE59 */
struct A68t185{
A68_VC  Dir;
struct A68t185 * Next;
};
typedef struct A68t185  A68_185 ;    /* STRUCT(REF MODE26,REF MODE185)  */
struct A68t186{
A68_INT  Mode;
A_PAD_INT(PAD_83)
A68_VC  String;
};
typedef struct A68t186  A68_186 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t187{
A68_INT  I;
A_PAD_INT(PAD_84)
};
typedef struct A68t187  A68_187 ;    /* STRUCT(INT)  */
A_ROW(A68_INT ,A68t189,1);
typedef struct A68t189  A68_189 ;    /* [] INT */
struct A68t188{
A68_INT  Body;
A_PAD_INT(PAD_85)
A68_INT  Moduleno;
A_PAD_INT(PAD_86)
struct A68t189  Actuals;
};
typedef struct A68t188  A68_188 ;    /* STRUCT(INT,INT,REF MODE189)  */
struct A68t190{
A68_INT  Mode;
A_PAD_INT(PAD_87)
A68_INT  Number;
A_PAD_INT(PAD_88)
A68_VC  Insert;
};
typedef struct A68t190  A68_190 ;    /* STRUCT(INT,INT,REF MODE26)  */
struct A68t192{
A68_INT  Moduleno;
A_PAD_INT(PAD_89)
A68_INT  I;
A_PAD_INT(PAD_90)
A68_INT  J;
A_PAD_INT(PAD_91)
};
typedef struct A68t192  A68_192 ;    /* STRUCT(INT,INT,INT)  */
A_ROW(A68_VC ,A68t194,1);
typedef struct A68t194  A68_194 ;    /* [] REF MODE26 */
struct A68t193{
A68_INT  Moduleno;
A_PAD_INT(PAD_92)
A68_VC  Name;
A68_VC  Uname;
A68_VC  Lname;
A68_VC  Gname;
struct A68t194  Ysnames;
};
typedef struct A68t193  A68_193 ;    /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE194)  */
struct A68t191 { A68_INT mode; union {
struct A68t188  mode1;
struct A68t192  mode2;
struct A68t193  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t191  A68_191 ;    /* UNION(MODE188,MODE192,MODE193)  */
struct A68t196{
A68_INT  Nochars;
A_PAD_INT(PAD_93)
A68_INT  Nocases;
A_PAD_INT(PAD_94)
A68_INT  W;
A_PAD_INT(PAD_95)
};
typedef struct A68t196  A68_196 ;    /* STRUCT(INT,INT,INT)  */
struct A68t195{
struct A68t196  Info;
A68_VC  Text;
};
typedef struct A68t195  A68_195 ;    /* STRUCT(MODE196,REF MODE26)  */
struct A68t197{
A68_VC  Representation;
};
typedef struct A68t197  A68_197 ;    /* STRUCT(REF MODE26)  */
struct A68t199{
A68_INT  Mode;
A_PAD_INT(PAD_96)
A68_VC  Nu;
};
typedef struct A68t199  A68_199 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t200{
A68_INT  Mode;
A_PAD_INT(PAD_97)
A68_LBITS  Denotation;
A_PAD_LBITS(PAD_98)
};
typedef struct A68t200  A68_200 ;    /* STRUCT(INT,LONG BITS)  */
struct A68t201{
A68_INT  Mode;
A_PAD_INT(PAD_99)
A68_VC  Denotation;
};
typedef struct A68t201  A68_201 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t202{
A68_INT  Fn;
A_PAD_INT(PAD_100)
A68_INT  Mode;
A_PAD_INT(PAD_101)
A68_INT  Param;
A_PAD_INT(PAD_102)
};
typedef struct A68t202  A68_202 ;    /* STRUCT(INT,INT,INT)  */
struct A68t203{
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
typedef struct A68t203  A68_203 ;    /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
struct A68t204{
A68_INT  W;
A_PAD_INT(PAD_107)
};
typedef struct A68t204  A68_204 ;    /* STRUCT(INT)  */
struct A68t205{
A68_INT  Mode;
A_PAD_INT(PAD_108)
A68_BITS  Props;
A_PAD_BITS(PAD_109)
A68_INT  Param;
A_PAD_INT(PAD_110)
};
typedef struct A68t205  A68_205 ;    /* STRUCT(INT,BITS,INT)  */
struct A68t206{
A68_BOOL  Start;
A_PAD_BOOL(PAD_111)
};
typedef struct A68t206  A68_206 ;    /* STRUCT(BOOL)  */
struct A68t207{
A68_INT  Fn;
A_PAD_INT(PAD_112)
A68_INT  Mode;
A_PAD_INT(PAD_113)
A68_BITS  Props;
A_PAD_BITS(PAD_114)
A68_INT  Param;
A_PAD_INT(PAD_115)
};
typedef struct A68t207  A68_207 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t208{
A68_INT  Fn;
A_PAD_INT(PAD_116)
A68_INT  Mode;
A_PAD_INT(PAD_117)
A68_BITS  Props;
A_PAD_BITS(PAD_118)
A68_INT  Resultmode;
A_PAD_INT(PAD_119)
};
typedef struct A68t208  A68_208 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t209{
A68_INT  Fn;
A_PAD_INT(PAD_120)
A68_BITS  Props;
A_PAD_BITS(PAD_121)
};
typedef struct A68t209  A68_209 ;    /* STRUCT(INT,BITS)  */
struct A68t198 { A68_INT mode; union {
struct A68t157  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t197  mode4;
struct A68t106  mode5;
struct A68t199  mode6;
struct A68t186  mode7;
struct A68t200  mode8;
struct A68t201  mode9;
struct A68t202  mode10;
struct A68t152  mode11;
struct A68t203  mode12;
struct A68t204  mode13;
struct A68t167  mode14;
struct A68t205  mode15;
struct A68t187  mode16;
struct A68t206  mode17;
struct A68t195  mode18;
struct A68t190  mode19;
struct A68t207  mode20;
struct A68t208  mode21;
struct A68t209  mode22;
struct A68t188  mode23;
struct A68t192  mode24;
struct A68t193  mode25;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t198  A68_198 ;    /* UNION(MODE157,INT,BOOL,MODE197,MODE106,MODE199,MODE186,MODE200,MODE201,MODE202,MODE152,MODE203,MODE204,MODE167,MODE205,MODE187,MODE206,MODE195,MODE190,MODE207,MODE208,MODE209,MODE188,MODE192,MODE193,VOID)  */
struct A68t210 { A68_INT mode; union {
struct A68t157  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t197  mode4;
struct A68t106  mode5;
struct A68t199  mode6;
struct A68t186  mode7;
struct A68t200  mode8;
struct A68t201  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t210  A68_210 ;    /* UNION(MODE157,INT,BOOL,MODE197,MODE106,MODE199,MODE186,MODE200,MODE201)  */
struct A68t211 { A68_INT mode; union {
struct A68t157  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t197  mode4;
struct A68t106  mode5;
struct A68t199  mode6;
struct A68t186  mode7;
struct A68t200  mode8;
struct A68t201  mode9;
struct A68t202  mode10;
struct A68t152  mode11;
struct A68t203  mode12;
struct A68t204  mode13;
struct A68t167  mode14;
struct A68t205  mode15;
struct A68t187  mode16;
struct A68t206  mode17;
struct A68t195  mode18;
struct A68t190  mode19;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t211  A68_211 ;    /* UNION(MODE157,INT,BOOL,MODE197,MODE106,MODE199,MODE186,MODE200,MODE201,MODE202,MODE152,MODE203,MODE204,MODE167,MODE205,MODE187,MODE206,MODE195,MODE190)  */
struct A68t212{
struct A68t153 * Value;
struct A68t104 * End;
A68_INT  Type;
A_PAD_INT(PAD_122)
};
typedef struct A68t212  A68_212 ;    /* STRUCT(REF MODE153,REF MODE104,INT)  */
A_VECTOR(struct A68t218 ,A68t217);
typedef struct A68t217  A68_217 ;    /* VECTOR [] MODE218 */
A_VECTOR(struct A68t225 ,A68t224);
typedef struct A68t224  A68_224 ;    /* VECTOR [] MODE225 */
struct A68t225{
struct A68t124  N;
A_PAD_ISTRUCT(A68_124 ,PAD_123)
struct A68t124  F;
A_PAD_ISTRUCT(A68_124 ,PAD_124)
A68_INT  Level;
A_PAD_INT(PAD_125)
};
typedef struct A68t225  A68_225 ;    /* STRUCT(MODE124,MODE124,INT)  */
struct A68t223 { A68_INT mode; union {
A68_VC  mode1;
struct A68t224  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t223  A68_223 ;    /* UNION(REF MODE26,REF MODE224)  */
struct A68t219{
struct A68t124  F;
A_PAD_ISTRUCT(A68_124 ,PAD_126)
A68_INT  No;
A_PAD_INT(PAD_127)
A68_INT  Nl;
A_PAD_INT(PAD_128)
A68_INT  Ng;
A_PAD_INT(PAD_129)
struct A68t223  U;
};
typedef struct A68t219  A68_219 ;    /* STRUCT(MODE124,INT,INT,INT,MODE223)  */
A_VECTOR(struct A68t222 ,A68t220);
typedef struct A68t220  A68_220 ;    /* VECTOR [] MODE222 */
struct A68t222{
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
typedef struct A68t222  A68_222 ;    /* STRUCT(MODE105,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26)  */
A_VECTOR(struct A68t105 ,A68t221);
typedef struct A68t221  A68_221 ;    /* VECTOR [] MODE105 */
struct A68t218{
struct A68t219  Xs;
struct A68t105  Ys;
A_PAD_ISTRUCT(A68_105 ,PAD_136)
A68_LINT  Timeoflastchange;
A_PAD_LINT(PAD_137)
struct A68t220  Keptinfo;
struct A68t221  Cnames;
};
typedef struct A68t218  A68_218 ;    /* STRUCT(MODE219,MODE105,LONG INT,REF MODE220,REF MODE221)  */
struct A68t214{
struct A68t105  Uname;
A_PAD_ISTRUCT(A68_105 ,PAD_138)
struct A68t105  Lname;
A_PAD_ISTRUCT(A68_105 ,PAD_139)
struct A68t105  Gname;
A_PAD_ISTRUCT(A68_105 ,PAD_140)
struct A68t217  Specs;
};
typedef struct A68t214  A68_214 ;    /* STRUCT(MODE105,MODE105,MODE105,REF MODE217)  */
struct A68t213{
struct A68t124  Name;
A_PAD_ISTRUCT(A68_124 ,PAD_141)
struct A68t214  Ym;
struct A68t105  Ys;
A_PAD_ISTRUCT(A68_105 ,PAD_142)
A68_INT  Level;
A_PAD_INT(PAD_143)
struct A68t215 * Ids;
struct A68t216 * Uses;
struct A68t213 * Rest;
};
typedef struct A68t213  A68_213 ;    /* STRUCT(MODE124,MODE214,MODE105,INT,REF MODE215,REF MODE216,REF MODE213)  */
struct A68t215{
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
struct A68t215 * Rest;
};
typedef struct A68t215  A68_215 ;    /* STRUCT(MODE124,MODE105,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,REF MODE26,REF MODE26,REF MODE215)  */
struct A68t216{
struct A68t124  Name;
A_PAD_ISTRUCT(A68_124 ,PAD_153)
struct A68t105  Uname;
A_PAD_ISTRUCT(A68_105 ,PAD_154)
struct A68t215 * Ids;
struct A68t216 * Rest;
};
typedef struct A68t216  A68_216 ;    /* STRUCT(MODE124,MODE105,REF MODE215,REF MODE216)  */
struct A68t227{
struct A68t124  Name;
A_PAD_ISTRUCT(A68_124 ,PAD_155)
struct A68t225  L;
struct A68t225  G;
A68_INT  Type;
A_PAD_INT(PAD_156)
};
typedef struct A68t227  A68_227 ;    /* STRUCT(MODE124,MODE225,MODE225,INT)  */
struct A68t228{
struct A68t105  L;
A_PAD_ISTRUCT(A68_105 ,PAD_157)
struct A68t105  G;
A_PAD_ISTRUCT(A68_105 ,PAD_158)
};
typedef struct A68t228  A68_228 ;    /* STRUCT(MODE105,MODE105)  */
struct A68t226{
struct A68t105  Uname;
A_PAD_ISTRUCT(A68_105 ,PAD_159)
struct A68t227  Xmi;
struct A68t228  Checkinfo;
};
typedef struct A68t226  A68_226 ;    /* STRUCT(MODE105,MODE227,MODE228)  */
struct A68t230 ;

A_PROCEDURE(A68_VOID ,A68t229,(struct A68t230 ),(struct A68t230 ,void *));
typedef struct A68t229  A68_229 ;    /* PROC(MODE230) VOID */
struct A68t230{
struct A68t124  Name;
A_PAD_ISTRUCT(A68_124 ,PAD_160)
struct A68t214  Ym;
struct A68t124  Formal;
A_PAD_ISTRUCT(A68_124 ,PAD_161)
struct A68t105  Ys;
A_PAD_ISTRUCT(A68_105 ,PAD_162)
A68_INT  Level;
A_PAD_INT(PAD_163)
A68_INT  Ownlevel;
A_PAD_INT(PAD_164)
};
typedef struct A68t230  A68_230 ;    /* STRUCT(MODE124,MODE214,MODE124,MODE105,INT,INT)  */
struct A68t232 ;

A_PROCEDURE(A68_VOID ,A68t231,(struct A68t232 ,A68_INT ),(struct A68t232 ,A68_INT ,void *));
typedef struct A68t231  A68_231 ;    /* PROC(MODE232,INT) VOID */
struct A68t232{
A68_INT  Type;
A_PAD_INT(PAD_165)
A68_INT  Moduleno;
A_PAD_INT(PAD_166)
struct A68t124  Name;
A_PAD_ISTRUCT(A68_124 ,PAD_167)
struct A68t214  Ym;
};
typedef struct A68t232  A68_232 ;    /* STRUCT(INT,INT,MODE124,MODE214)  */
struct A68t234 ;

A_PROCEDURE(A68_VOID ,A68t233,(struct A68t234 ),(struct A68t234 ,void *));
typedef struct A68t233  A68_233 ;    /* PROC(MODE234) VOID */
struct A68t234{
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
struct A68t234 * Rest;
};
typedef struct A68t234  A68_234 ;    /* STRUCT(MODE124,INT,INT,INT,INT,REF MODE234)  */
A_ROW(struct A68t213 *,A68t235,1);
typedef struct A68t235  A68_235 ;    /* [] REF MODE213 */
struct A68t237 ;

A_PROCEDURE(A68_VOID ,A68t236,(struct A68t124 ,A68_INT ,A68_BOOL ,struct A68t237 *),(struct A68t124 ,A68_INT ,A68_BOOL ,struct A68t237 *,void *));
typedef struct A68t236  A68_236 ;    /* PROC(MODE124,INT,BOOL) MODE237 */
struct A68t237{
struct A68t227  Xmi;
struct A68t214  Ym;
};
typedef struct A68t237  A68_237 ;    /* STRUCT(MODE227,MODE214)  */
struct A68t239 ;

A_PROCEDURE(A68_VOID ,A68t238,(struct A68t124 ,struct A68t124 ,struct A68t214 ,struct A68t239 *),(struct A68t124 ,struct A68t124 ,struct A68t214 ,struct A68t239 *,void *));
typedef struct A68t238  A68_238 ;    /* PROC(MODE124,MODE124,MODE214) MODE239 */
struct A68t239{
struct A68t219  Xs;
struct A68t105  Ys;
A_PAD_ISTRUCT(A68_105 ,PAD_173)
};
typedef struct A68t239  A68_239 ;    /* STRUCT(MODE219,MODE105)  */

A_PROCEDURE(A68_VOID ,A68t240,(struct A68t227 ),(struct A68t227 ,void *));
typedef struct A68t240  A68_240 ;    /* PROC(MODE227) VOID */

A_PROCEDURE(A68_VOID ,A68t241,(struct A68t219 ),(struct A68t219 ,void *));
typedef struct A68t241  A68_241 ;    /* PROC(MODE219) VOID */
A_ROW(struct A68t218 ,A68t242,1);
typedef struct A68t242  A68_242 ;    /* [] MODE218 */

A_PROCEDURE(A68_VOID ,A68t243,(struct A68t179 ),(struct A68t179 ,void *));
typedef struct A68t243  A68_243 ;    /* PROC(MODE179) VOID */

A_PROCEDURE(struct A68t105 ,A68t244,(void),(void *));
typedef struct A68t244  A68_244 ;    /* PROC MODE105 */

A_PROCEDURE(A68_VOID ,A68t245,(struct A68t105 ),(struct A68t105 ,void *));
typedef struct A68t245  A68_245 ;    /* PROC(MODE105) VOID */

A_PROCEDURE(A68_VOID ,A68t246,(struct A68t179 ,A68_VC *),(struct A68t179 ,A68_VC *,void *));
typedef struct A68t246  A68_246 ;    /* PROC(MODE179) MODE26 */

A_PROCEDURE(A68_BOOL ,A68t247,(struct A68t153 *,struct A68t153 *),(struct A68t153 *,struct A68t153 *,void *));
typedef struct A68t247  A68_247 ;    /* PROC(REF MODE153,REF MODE153) BOOL */

A_PROCEDURE(A68_BOOL ,A68t248,(struct A68t153 *),(struct A68t153 *,void *));
typedef struct A68t248  A68_248 ;    /* PROC(REF MODE153) BOOL */

A_PROCEDURE(A68_BOOL ,A68t249,(struct A68t153 *,A68_LBITS ),(struct A68t153 *,A68_LBITS ,void *));
typedef struct A68t249  A68_249 ;    /* PROC(REF MODE153,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t250,(struct A68t153 *),(struct A68t153 *,void *));
typedef struct A68t250  A68_250 ;    /* PROC(REF MODE153) LONG BITS */

A_PROCEDURE(A68_VOID ,A68t251,(struct A68t153 *,A68_VC *),(struct A68t153 *,A68_VC *,void *));
typedef struct A68t251  A68_251 ;    /* PROC(REF MODE153) MODE26 */

A_PROCEDURE(struct A68t153 *,A68t252,(struct A68t153 *,A68_INT ),(struct A68t153 *,A68_INT ,void *));
typedef struct A68t252  A68_252 ;    /* PROC(REF MODE153,INT) REF MODE153 */

A_PROCEDURE(A68_INT ,A68t253,(struct A68t158 ),(struct A68t158 ,void *));
typedef struct A68t253  A68_253 ;    /* PROC(MODE158) INT */

A_PROCEDURE(A68_BOOL ,A68t254,(struct A68t153 *,A68_BITS ),(struct A68t153 *,A68_BITS ,void *));
typedef struct A68t254  A68_254 ;    /* PROC(REF MODE153,BITS) BOOL */

A_PROCEDURE(struct A68t153 *,A68t255,(struct A68t159 *,A68_INT ),(struct A68t159 *,A68_INT ,void *));
typedef struct A68t255  A68_255 ;    /* PROC(REF MODE159,INT) REF MODE153 */

A_PROCEDURE(struct A68t159 *,A68t256,(struct A68t159 *),(struct A68t159 *,void *));
typedef struct A68t256  A68_256 ;    /* PROC(REF MODE159) REF MODE159 */
struct A68t258 ;

A_PROCEDURE(struct A68t153 *,A68t257,(A68_INT ,A68_INT ,A68_BITS ,struct A68t258 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t258 ,void *));
typedef struct A68t257  A68_257 ;    /* PROC(INT,INT,BITS,MODE258) REF MODE153 */
A_VECTOR(struct A68t153 *,A68t258);
typedef struct A68t258  A68_258 ;    /* VECTOR [] REF MODE153 */

A_PROCEDURE(A68_VOID ,A68t259,(struct A68t153 *),(struct A68t153 *,void *));
typedef struct A68t259  A68_259 ;    /* PROC(REF MODE153) VOID */

A_PROCEDURE(A68_VOID ,A68t260,(struct A68t153 *,A68_BOOL ,A68_VC *),(struct A68t153 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t260  A68_260 ;    /* PROC(REF MODE153,BOOL) MODE26 */

A_PROCEDURE(A68_LINT ,A68t261,(struct A68t153 ),(struct A68t153 ,void *));
typedef struct A68t261  A68_261 ;    /* PROC(MODE153) LONG INT */
struct A68t262 { A68_INT mode; union {
struct A68t153 * mode1;
A68_VC  mode2;
struct A68t128  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t262  A68_262 ;    /* UNION(REF MODE153,MODE26,MODE128)  */

A_PROCEDURE(A68_VOID ,A68t263,(struct A68t262 ,A68_VC *),(struct A68t262 ,A68_VC *,void *));
typedef struct A68t263  A68_263 ;    /* PROC(MODE262) MODE26 */
struct A68t265 ;

A_PROCEDURE(A68_VOID ,A68t264,(struct A68t265 ,A68_VC *),(struct A68t265 ,A68_VC *,void *));
typedef struct A68t264  A68_264 ;    /* PROC(MODE265) MODE26 */
A_VECTOR(struct A68t262 ,A68t265);
typedef struct A68t265  A68_265 ;    /* VECTOR [] MODE262 */

A_PROCEDURE(A68_VOID ,A68t266,(A68_VC ,struct A68t265 ,A68_VC *),(A68_VC ,struct A68t265 ,A68_VC *,void *));
typedef struct A68t266  A68_266 ;    /* PROC(MODE26,MODE265) MODE26 */

A_PROCEDURE(A68_VOID ,A68t267,(struct A68t265 ),(struct A68t265 ,void *));
typedef struct A68t267  A68_267 ;    /* PROC(MODE265) VOID */

A_PROCEDURE(A68_VOID ,A68t268,(A68_VC ,A68_INT ,struct A68t265 ,struct A68t128 *),(A68_VC ,A68_INT ,struct A68t265 ,struct A68t128 *,void *));
typedef struct A68t268  A68_268 ;    /* PROC(MODE26,INT,MODE265) MODE128 */

A_PROCEDURE(struct A68t153 *,A68t269,(struct A68t153 *),(struct A68t153 *,void *));
typedef struct A68t269  A68_269 ;    /* PROC(REF MODE153) REF MODE153 */

A_PROCEDURE(struct A68t153 *,A68t270,(A68_VC ,struct A68t153 *),(A68_VC ,struct A68t153 *,void *));
typedef struct A68t270  A68_270 ;    /* PROC(MODE26,REF MODE153) REF MODE153 */

A_PROCEDURE(A68_VOID ,A68t271,(struct A68t95 ),(struct A68t95 ,void *));
typedef struct A68t271  A68_271 ;    /* PROC(MODE95) VOID */

A_PROCEDURE(A68_VOID ,A68t272,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t272  A68_272 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,60,A68t273);
typedef struct A68t273  A68_273 ;    /* STRUCT 60 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t274);
typedef struct A68t274  A68_274 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t121 ,2,A68t275);
typedef struct A68t275  A68_275 ;    /* STRUCT 2 MODE121 */
A_ISTRUCT(A68_CHAR ,9,A68t276);
typedef struct A68t276  A68_276 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(struct A68t121 ,4,A68t277);
typedef struct A68t277  A68_277 ;    /* STRUCT 4 MODE121 */
A_ISTRUCT(A68_CHAR ,13,A68t278);
typedef struct A68t278  A68_278 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t279);
typedef struct A68t279  A68_279 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,51,A68t280);
typedef struct A68t280  A68_280 ;    /* STRUCT 51 CHAR */
A_ISTRUCT(A68_CHAR ,37,A68t281);
typedef struct A68t281  A68_281 ;    /* STRUCT 37 CHAR */
A_ISTRUCT(struct A68t121 ,3,A68t282);
typedef struct A68t282  A68_282 ;    /* STRUCT 3 MODE121 */
A_ISTRUCT(A68_CHAR ,39,A68t283);
typedef struct A68t283  A68_283 ;    /* STRUCT 39 CHAR */
A_ISTRUCT(struct A68t121 ,5,A68t284);
typedef struct A68t284  A68_284 ;    /* STRUCT 5 MODE121 */
A_ISTRUCT(A68_CHAR ,41,A68t285);
typedef struct A68t285  A68_285 ;    /* STRUCT 41 CHAR */
A_ISTRUCT(A68_CHAR ,42,A68t286);
typedef struct A68t286  A68_286 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(struct A68t121 ,6,A68t287);
typedef struct A68t287  A68_287 ;    /* STRUCT 6 MODE121 */
A_ISTRUCT(A68_CHAR ,46,A68t288);
typedef struct A68t288  A68_288 ;    /* STRUCT 46 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t289);
typedef struct A68t289  A68_289 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(A68_CHAR ,29,A68t290);
typedef struct A68t290  A68_290 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(A68_CHAR ,27,A68t291);
typedef struct A68t291  A68_291 ;    /* STRUCT 27 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t292);
typedef struct A68t292  A68_292 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,40,A68t293);
typedef struct A68t293  A68_293 ;    /* STRUCT 40 CHAR */
A_ISTRUCT(A68_CHAR ,44,A68t294);
typedef struct A68t294  A68_294 ;    /* STRUCT 44 CHAR */
A_ISTRUCT(A68_CHAR ,48,A68t295);
typedef struct A68t295  A68_295 ;    /* STRUCT 48 CHAR */
A_ISTRUCT(struct A68t121 ,31,A68t296);
typedef struct A68t296  A68_296 ;    /* STRUCT 31 MODE121 */

A_PROCEDURE(A68_VOID ,A68t297,(struct A68t203 ,struct A68t109 ,struct A68t92 ,A68_INT ,struct A68t153 *),(struct A68t203 ,struct A68t109 ,struct A68t92 ,A68_INT ,struct A68t153 *,void *));
typedef struct A68t297  A68_297 ;    /* PROC(MODE203,MODE109,REF MODE92,INT,REF MODE153) VOID */

A_PROCEDURE(struct A68t153 *,A68t298,(struct A68t153 *,struct A68t153 ),(struct A68t153 *,struct A68t153 ,void *));
typedef struct A68t298  A68_298 ;    /* PROC(REF MODE153,MODE153) REF MODE153 */

A_PROCEDURE(struct A68t154 *,A68t299,(struct A68t154 *,struct A68t154 ),(struct A68t154 *,struct A68t154 ,void *));
typedef struct A68t299  A68_299 ;    /* PROC(REF MODE154,MODE154) REF MODE154 */
#define A68_300  A68_VC 
#define A68t300 A68t26            /* FLEX VECTOR [] CHAR */

A_PROCEDURE(A68_VOID ,A68t301,(struct A68t203 ,struct A68t153 *),(struct A68t203 ,struct A68t153 *,void *));
typedef struct A68t301  A68_301 ;    /* PROC(MODE203,REF MODE153) VOID */
A_ISTRUCT(A68_CHAR ,18,A68t302);
typedef struct A68t302  A68_302 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t303);
typedef struct A68t303  A68_303 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t304);
typedef struct A68t304  A68_304 ;    /* STRUCT 3 CHAR */

A_PROCEDURE(A68_VOID ,A68t305,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t305  A68_305 ;    /* PROC(REF MODE26,REF MODE26) VOID */
A_ISTRUCT(A68_CHAR ,19,A68t306);
typedef struct A68t306  A68_306 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t307);
typedef struct A68t307  A68_307 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,26,A68t308);
typedef struct A68t308  A68_308 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t309);
typedef struct A68t309  A68_309 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t310);
typedef struct A68t310  A68_310 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,28,A68t311);
typedef struct A68t311  A68_311 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(A68_CHAR ,38,A68t312);
typedef struct A68t312  A68_312 ;    /* STRUCT 38 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t313);
typedef struct A68t313  A68_313 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t314);
typedef struct A68t314  A68_314 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_VC ,2,A68t315);
typedef struct A68t315  A68_315 ;    /* STRUCT 2 MODE26 */

A_PROCEDURE(A68_VOID ,A68t316,(struct A68t203 ,A68_VC ,A68_VC ,struct A68t153 *),(struct A68t203 ,A68_VC ,A68_VC ,struct A68t153 *,void *));
typedef struct A68t316  A68_316 ;    /* PROC(MODE203,REF MODE26,REF MODE26,REF MODE153) VOID */

A_PROCEDURE(A68_VOID ,A68t317,(A68_VC ,A68_VC ,A68_BOOL ),(A68_VC ,A68_VC ,A68_BOOL ,void *));
typedef struct A68t317  A68_317 ;    /* PROC(REF MODE26,REF MODE26,BOOL) VOID */
A_ISTRUCT(A68_CHAR ,17,A68t318);
typedef struct A68t318  A68_318 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t319);
typedef struct A68t319  A68_319 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t320);
typedef struct A68t320  A68_320 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(struct A68t121 ,8,A68t321);
typedef struct A68t321  A68_321 ;    /* STRUCT 8 MODE121 */

A_PROCEDURE(A68_VOID ,A68t322,(A68_VC ),(A68_VC ,void *));
typedef struct A68t322  A68_322 ;    /* PROC(REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t323,(A68_VC ,struct A68t104 *),(A68_VC ,struct A68t104 *,void *));
typedef struct A68t323  A68_323 ;    /* PROC(REF MODE26,REF MODE104) VOID */
A_ISTRUCT(A68_CHAR ,25,A68t324);
typedef struct A68t324  A68_324 ;    /* STRUCT 25 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from values --- */
extern A68_VOID  UZPACTR_getcfragment(struct A68t153 *,A68_VC *);
extern A68_BITS  PKJACTR_defaultinfo;
/* --- End of imports from values --- */


/* --- Imports from uniquenameserver --- */
extern A68_VOID  EMMACTR_nameseedoriginstring(struct A68t179 ,A68_VC *);
/* --- End of imports from uniquenameserver --- */


/* --- Imports from modules --- */
extern A68_VOID  IUPACTR_processcontexts(void);
extern A68_VOID  DJPACTR_outputmoduleinformation(void);
extern A68_BOOL  LCPACTR_rscompatiblewithpreviousversion;
extern A68_242  RCPACTR_specs;
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
extern A68_181  IYIACTR_config_info;
extern A68_182 * CYIACTR_nil_modinfolist;
extern A68_183 * DYIACTR_nil_envinfo;
extern A68_VC  BRIACTR_current_directory;
/* --- End of imports from environment --- */


/* --- Imports from identifiers --- */
extern A68_VOID  XPWACTR_completerddec(void);
extern A68_163  WPKACTR_ids;
extern A68_VOID  BRWACTR_rddec(A68_VC ,A68_INT ,struct A68t92 ,A68_INT ,A68_INT ,struct A68t109 ,A68_BITS );
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
extern void MMVACTR(void);   /* identifiers */
extern void DNMACTR(void);   /* modes */
extern void PTLACTR(void);   /* coutput */
extern void BPLACTR(void);   /* environ */
extern void THAACTR(void);   /* centities */
extern void CSCAOSF(void);   /* osif */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_273   NFYACTR = {"$Id: entryandreturn.a68,v 1.2 2003-06-10 14:03:55 sian Exp $"}; 
A_GISVEC(A68_VC ,OFYACTR,NFYACTR,60)
static A68_274   SFYACTR = {"{ "}; 
A_GISVEC(A68_VC ,TFYACTR,SFYACTR,2)
static A68_274   GGYACTR = {"} "}; 
A_GISVEC(A68_VC ,HGYACTR,GGYACTR,2)
static A68_276   LGYACTR = {"#undef NL"}; 
A_GISVEC(A68_VC ,MGYACTR,LGYACTR,9)
static A68_278   ZGYACTR = {"A_PROC_ENTRY("}; 
A_GISVEC(A68_VC ,AHYACTR,ZGYACTR,13)
static A68_274   EHYACTR = {");"}; 
A_GISVEC(A68_VC ,FHYACTR,EHYACTR,2)
static A68_279   OHYACTR = {"A_PROC_EXIT("}; 
A_GISVEC(A68_VC ,PHYACTR,OHYACTR,12)
static A68_274   THYACTR = {");"}; 
A_GISVEC(A68_VC ,UHYACTR,THYACTR,2)
static A68_280   CIYACTR = {"/* --- Configuration information for this module */"}; 
A_GISVEC(A68_VC ,DIYACTR,CIYACTR,51)
static A68_281   HIYACTR = {"static char *A_config_arguments[] = {"}; 
A_GISVEC(A68_VC ,IIYACTR,HIYACTR,37)
static A68_274   UIYACTR = {"\","}; 
A_GISVEC(A68_VC ,VIYACTR,UIYACTR,2)
static A68_40   AJYACTR = {"\"\"};"}; 
A_GISVEC(A68_VC ,BJYACTR,AJYACTR,4)
static A68_283   FJYACTR = {"static char *A_config_environment[] = {"}; 
A_GISVEC(A68_VC ,GJYACTR,FJYACTR,39)
static A68_274   UJYACTR = {"\","}; 
A_GISVEC(A68_VC ,VJYACTR,UJYACTR,2)
static A68_40   AKYACTR = {"\"\"};"}; 
A_GISVEC(A68_VC ,BKYACTR,AKYACTR,4)
static A68_285   FKYACTR = {"static char *A_config_modinfo_files[] = {"}; 
A_GISVEC(A68_VC ,GKYACTR,FKYACTR,41)
static A68_274   QKYACTR = {"\","}; 
A_GISVEC(A68_VC ,RKYACTR,QKYACTR,2)
static A68_40   WKYACTR = {"\"\"};"}; 
A_GISVEC(A68_VC ,XKYACTR,WKYACTR,4)
static A68_283   BLYACTR = {"static A_CONFIG_INFO A_config A_UNUSED;"}; 
A_GISVEC(A68_VC ,CLYACTR,BLYACTR,39)
static A68_286   GLYACTR = {"/* --- end of configuration information */"}; 
A_GISVEC(A68_VC ,HLYACTR,GLYACTR,42)
static A68_288   NLYACTR = {"/* --- Initialise configuration information */"}; 
A_GISVEC(A68_VC ,OLYACTR,NLYACTR,46)
static A68_289   SLYACTR = {"A_config.source_file = \""}; 
A_GISVEC(A68_VC ,TLYACTR,SLYACTR,24)
static A68_274   AMYACTR = {"\";"}; 
A_GISVEC(A68_VC ,BMYACTR,AMYACTR,2)
static A68_290   FMYACTR = {"A_config.translation_time = \""}; 
A_GISVEC(A68_VC ,GMYACTR,FMYACTR,29)
static A68_274   LMYACTR = {"\";"}; 
A_GISVEC(A68_VC ,MMYACTR,LMYACTR,2)
static A68_291   QMYACTR = {"A_config.ctrans_version = \""}; 
A_GISVEC(A68_VC ,RMYACTR,QMYACTR,27)
static A68_274   WMYACTR = {"\";"}; 
A_GISVEC(A68_VC ,XMYACTR,WMYACTR,2)
static A68_292   BNYACTR = {"A_config.name_seed = \""}; 
A_GISVEC(A68_VC ,CNYACTR,BNYACTR,22)
static A68_274   LNYACTR = {"\";"}; 
A_GISVEC(A68_VC ,MNYACTR,LNYACTR,2)
static A68_290   QNYACTR = {"A_config.spec_change_time = \""}; 
A_GISVEC(A68_VC ,RNYACTR,QNYACTR,29)
static A68_105   UNYACTR = {"no spec"}; 
A_GISVEC(A68_VC ,VNYACTR,UNYACTR,7)
static A68_274   BOYACTR = {"\";"}; 
A_GISVEC(A68_VC ,COYACTR,BOYACTR,2)
static A68_293   GOYACTR = {"A_config.arguments = A_config_arguments;"}; 
A_GISVEC(A68_VC ,HOYACTR,GOYACTR,40)
static A68_294   LOYACTR = {"A_config.environment = A_config_environment;"}; 
A_GISVEC(A68_VC ,MOYACTR,LOYACTR,44)
static A68_295   QOYACTR = {"A_config.modinfo_files = A_config_modinfo_files;"}; 
A_GISVEC(A68_VC ,ROYACTR,QOYACTR,48)
static A68_105   BQYACTR = {"return;"}; 
A_GISVEC(A68_VC ,CQYACTR,BQYACTR,7)
static A68_302   IQYACTR = {"*ReturnedValue = ("}; 
A_GISVEC(A68_VC ,JQYACTR,IQYACTR,18)
static A68_274   OQYACTR = {");"}; 
A_GISVEC(A68_VC ,PQYACTR,OQYACTR,2)
static A68_105   VQYACTR = {"return;"}; 
A_GISVEC(A68_VC ,WQYACTR,VQYACTR,7)
static A68_303   CRYACTR = {"return( "}; 
A_GISVEC(A68_VC ,DRYACTR,CRYACTR,8)
static A68_304   IRYACTR = {" );"}; 
A_GISVEC(A68_VC ,JRYACTR,IRYACTR,3)
static A68_288   VRYACTR = {"int main(int argc, char *argv[], char *envp[])"}; 
A_GISVEC(A68_VC ,WRYACTR,VRYACTR,46)
static A68_306   CSYACTR = {"A_GC_STARTUP(argc);"}; 
A_GISVEC(A68_VC ,DSYACTR,CSYACTR,19)
static A68_307   JSYACTR = {"#ifdef A_prelude"}; 
A_GISVEC(A68_VC ,KSYACTR,JSYACTR,16)
static A68_308   OSYACTR = {"A_prelude(argc,argv,envp);"}; 
A_GISVEC(A68_VC ,PSYACTR,OSYACTR,26)
static A68_309   TSYACTR = {"#endif"}; 
A_GISVEC(A68_VC ,USYACTR,TSYACTR,6)
static A68_40   ZSYACTR = {"MAIN"}; 
A_GISVEC(A68_VC ,ATYACTR,ZSYACTR,4)
static A68_310   HTYACTR = {"void "}; 
A_GISVEC(A68_VC ,ITYACTR,HTYACTR,5)
static A68_311   MTYACTR = {"(void)   /* initialise DECS "}; 
A_GISVEC(A68_VC ,NTYACTR,MTYACTR,28)
static A68_304   RTYACTR = {" */"}; 
A_GISVEC(A68_VC ,STYACTR,RTYACTR,3)
static A68_312   YTYACTR = {"static A68_BOOL A_invoked = A68_FALSE;"}; 
A_GISVEC(A68_VC ,ZTYACTR,YTYACTR,38)
static A68_313   FUYACTR = {"if( A_invoked ) return;"}; 
A_GISVEC(A68_VC ,GUYACTR,FUYACTR,23)
static A68_314   KUYACTR = {"A_invoked = A68_TRUE;"}; 
A_GISVEC(A68_VC ,LUYACTR,KUYACTR,21)
static A68_310   RUYACTR = {"DECS "}; 
A_GISVEC(A68_VC ,SUYACTR,RUYACTR,5)
static A68_40   FVYACTR = {"MAIN"}; 
A_GISVEC(A68_VC ,GVYACTR,FVYACTR,4)
static A68_318   IVYACTR = {"#ifdef A_postlude"}; 
A_GISVEC(A68_VC ,JVYACTR,IVYACTR,17)
static A68_319   NVYACTR = {"A_postlude;"}; 
A_GISVEC(A68_VC ,OVYACTR,NVYACTR,11)
static A68_309   SVYACTR = {"#endif"}; 
A_GISVEC(A68_VC ,TVYACTR,SVYACTR,6)
static A68_320   XVYACTR = {"return(0);"}; 
A_GISVEC(A68_VC ,YVYACTR,XVYACTR,10)
static A68_310   HWYACTR = {"DECS "}; 
A_GISVEC(A68_VC ,IWYACTR,HWYACTR,5)
static A68_324   OWYACTR = {"'complete program' called"}; 
A_GISVEC(A68_VC ,PWYACTR,OWYACTR,25)

A_STATIC A68_VOID  PFYACTR_writeinitialopencurly(void);

A_STATIC A68_VOID  BGYACTR_writeclosingcurly(void);

A_STATIC A68_VOID  WGYACTR_routine_entry_hook(A68_VC  Routinename);

A_STATIC A68_VOID  LHYACTR_routine_exit_hook(A68_VC  Routinename);

A_STATIC A68_VOID  ZHYACTR_writeconfiginfo(void);

A68_VOID  BPYACTR_startroutine(A68_203  Routine, A68_109  Environ, A68_92  Paramdecnos, A68_INT  Resultmode, A68_153 * Resultvalue);

A_STATIC A68_153 * GPYACTR_assignment(A68_153 * EPYACTR_anonymous, A68_153  FPYACTR_anonymous);

A_STATIC A68_154 * LPYACTR_assignment(A68_154 * JPYACTR_anonymous, A68_154  KPYACTR_anonymous);

A68_VOID  UPYACTR_endroutine(A68_203  Routine, A68_153 * Result);

A_STATIC A68_VOID  ORYACTR_globalenviron(A68_109  *ReturnedValue);

A68_VOID  SRYACTR_startmodule(A68_VC  Uniquename, A68_VC  Modulename);

A68_VOID  DTYACTR_startdecsmodule(A68_VC  Uniquename, A68_VC  Modulename);

A68_VOID  ZUYACTR_startprocmodule(A68_203  Routine, A68_VC  Uniquename, A68_VC  Modulename, A68_153 * Resultvalue);

A68_VOID  DVYACTR_startcompositionmodule(A68_VC  Uniquename, A68_VC  Modulename, A68_BOOL  Partialcomposition);

A68_VOID  EVYACTR_endmodule(void);

A68_VOID  EWYACTR_enddecsmodule(A68_VC  Modulename);

A68_VOID  NWYACTR_completeprogram(A68_VC  Modulename, A68_104 * Autocomplabel);

A_STATIC A68_154 * LPYACTR_assignment(A68_154 * JPYACTR_anonymous, A68_154  KPYACTR_anonymous)
{ 
A68_154  MPYACTR;  /* united object - for case conformity */
A68_VC  NPYACTR_anonymous A_UNUSED = {0};
A68_VC  OPYACTR;  /* OPERATORS - copy to flex */
A68_300 * PPYACTR;  /* YIELD */
A68_154 * QPYACTR;  /* clause result */
{ 
(*JPYACTR_anonymous) = KPYACTR_anonymous;
MPYACTR = KPYACTR_anonymous ;
switch ( MPYACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
NPYACTR_anonymous = (MPYACTR.data.mode6);
PPYACTR = &(JPYACTR_anonymous-> data.mode6) ;
(void)((*PPYACTR) = A_VCOPY(NPYACTR_anonymous,OPYACTR,A68_CHAR ));
break;
default: 
/*SKIP*/;
break;
} 
QPYACTR = JPYACTR_anonymous;
} 
return( QPYACTR );
} 
#undef NL

A_STATIC A68_153 * GPYACTR_assignment(A68_153 * EPYACTR_anonymous, A68_153  FPYACTR_anonymous)
{ 
A68_INT * HPYACTR;  /* YIELD */
A68_BITS * IPYACTR;  /* YIELD */
A68_153 * RPYACTR;  /* clause result */
{ 
HPYACTR = (&(EPYACTR_anonymous->Mode)) ;
(*HPYACTR) = FPYACTR_anonymous.Mode;
IPYACTR = (&(EPYACTR_anonymous->Info)) ;
(*IPYACTR) = FPYACTR_anonymous.Info;
(void)(LPYACTR_assignment((&(EPYACTR_anonymous->Extra)), FPYACTR_anonymous.Extra));
RPYACTR = EPYACTR_anonymous;
} 
return( RPYACTR );
} 
#undef NL

A_STATIC A68_VOID  PFYACTR_writeinitialopencurly(void)
{ 
A68_INT  QFYACTR_codestream A_UNUSED = {0};
A68_275  RFYACTR;  /* collateral clause result */
A68_121  UFYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  VFYACTR;  /* YIELD */
A68_121  WFYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  XFYACTR;  /* OPERATORS - istruct -> vector */
A68_121  YFYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  ZFYACTR;  /* YIELD */
A68_120  AGYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(writeinitialopencurly);
{ 
QFYACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 56: */
VFYACTR = TFYACTR ;
RFYACTR.data[0] = A_UNITE(UFYACTR,mode2,2,VFYACTR);
RFYACTR.data[1] = A_UNITE(WFYACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(XFYACTR,RFYACTR,2,A68_121 ), QFYACTR_codestream));
 /* line 57: */
 /* line 58: */
ZFYACTR = QSLACTR_locdecstream(VRLACTR_currentlevel()) ;
(void)(MDMACTR_writecstream(A_HVEC(AGYACTR,A_UNITE(YFYACTR,mode3,3,ZFYACTR),A68_121 ), QFYACTR_codestream));
} 
A_PROC_EXIT(writeinitialopencurly);
return;
} 
#undef NL

A_STATIC A68_VOID  BGYACTR_writeclosingcurly(void)
{ 
A68_INT  CGYACTR_codestream A_UNUSED = {0};
A68_INT  DGYACTR_locdecstream A_UNUSED = {0};
A68_INT  EGYACTR_labelstream A_UNUSED = {0};
A68_277  FGYACTR;  /* collateral clause result */
A68_121  IGYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  JGYACTR;  /* YIELD */
A68_121  KGYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  NGYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  OGYACTR;  /* YIELD */
A68_121  PGYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  QGYACTR;  /* OPERATORS - istruct -> vector */
A68_121  RGYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  SGYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_121  TGYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  UGYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(writeclosingcurly);
{ 
CGYACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 69: */
DGYACTR_locdecstream = QSLACTR_locdecstream(VRLACTR_currentlevel());
 /* line 70: */
EGYACTR_labelstream = TSLACTR_labelstream(VRLACTR_currentlevel());
 /* line 72: */
JGYACTR = HGYACTR ;
FGYACTR.data[0] = A_UNITE(IGYACTR,mode2,2,JGYACTR);
FGYACTR.data[1] = A_UNITE(KGYACTR,mode4,4,EIAACTR_cnewline);
OGYACTR = MGYACTR ;
FGYACTR.data[2] = A_UNITE(NGYACTR,mode2,2,OGYACTR);
FGYACTR.data[3] = A_UNITE(PGYACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(QGYACTR,FGYACTR,4,A68_121 ), CGYACTR_codestream));
 /* line 73: */
(void)(MDMACTR_writecstream(A_HVEC(SGYACTR,A_UNITE(RGYACTR,mode3,3,EGYACTR_labelstream),A68_121 ), DGYACTR_locdecstream));
 /* line 74: */
 /* line 75: */
(void)(MDMACTR_writecstream(A_HVEC(UGYACTR,A_UNITE(TGYACTR,mode3,3,CGYACTR_codestream),A68_121 ), EGYACTR_labelstream));
} 
A_PROC_EXIT(writeclosingcurly);
return;
} 
#undef NL

A_STATIC A68_VOID  WGYACTR_routine_entry_hook(A68_VC  Routinename)
{ 
A68_INT  XGYACTR;  /* YIELD */
A68_277  YGYACTR;  /* collateral clause result */
A68_121  BHYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  CHYACTR;  /* YIELD */
A68_121  DHYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  GHYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  HHYACTR;  /* YIELD */
A68_121  IHYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  JHYACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(routine_entry_hook);
 /* line 78: */
 /* line 79: */
 /* line 80: */
XGYACTR = 1 ;
if (A_VINDEX(Routinename,XGYACTR)!='!')
{ 
CHYACTR = AHYACTR ;
YGYACTR.data[0] = A_UNITE(BHYACTR,mode2,2,CHYACTR);
YGYACTR.data[1] = A_UNITE(DHYACTR,mode2,2,Routinename);
HHYACTR = FHYACTR ;
YGYACTR.data[2] = A_UNITE(GHYACTR,mode2,2,HHYACTR);
YGYACTR.data[3] = A_UNITE(IHYACTR,mode4,4,EIAACTR_cnewline);
 /* line 81: */
(void)(MDMACTR_writecstream(A_HISVEC(JHYACTR,YGYACTR,4,A68_121 ), NSLACTR_codestream(VRLACTR_currentlevel())));
} 
A_PROC_EXIT(routine_entry_hook);
return;
} 
#undef NL

A_STATIC A68_VOID  LHYACTR_routine_exit_hook(A68_VC  Routinename)
{ 
A68_INT  MHYACTR;  /* YIELD */
A68_277  NHYACTR;  /* collateral clause result */
A68_121  QHYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  RHYACTR;  /* YIELD */
A68_121  SHYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  VHYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  WHYACTR;  /* YIELD */
A68_121  XHYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  YHYACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(routine_exit_hook);
 /* line 84: */
 /* line 85: */
 /* line 86: */
MHYACTR = 1 ;
if (A_VINDEX(Routinename,MHYACTR)!='!')
{ 
RHYACTR = PHYACTR ;
NHYACTR.data[0] = A_UNITE(QHYACTR,mode2,2,RHYACTR);
NHYACTR.data[1] = A_UNITE(SHYACTR,mode2,2,Routinename);
WHYACTR = UHYACTR ;
NHYACTR.data[2] = A_UNITE(VHYACTR,mode2,2,WHYACTR);
NHYACTR.data[3] = A_UNITE(XHYACTR,mode4,4,EIAACTR_cnewline);
 /* line 87: */
(void)(MDMACTR_writecstream(A_HISVEC(YHYACTR,NHYACTR,4,A68_121 ), NSLACTR_codestream(VRLACTR_currentlevel())));
} 
A_PROC_EXIT(routine_exit_hook);
return;
} 
#undef NL

A_STATIC A68_VOID  ZHYACTR_writeconfiginfo(void)
{ 
A68_277  AIYACTR;  /* collateral clause result */
A68_121  BIYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  EIYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  FIYACTR;  /* YIELD */
A68_121  GIYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  JIYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  KIYACTR;  /* YIELD */
A68_120  LIYACTR;  /* OPERATORS - istruct -> vector */
A68_VC  MIYACTR_arg A_UNUSED = {0};
A68_36  NIYACTR;  /* avoid structure result */
A68_VC * OIYACTR;  /* forall control - []x */
A68_INT  PIYACTR;  /* forall loop counter */
A68_282  QIYACTR;  /* collateral clause result */
A68_121  RIYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  SIYACTR;  /* YIELD */
A68_121  TIYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  WIYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  XIYACTR;  /* YIELD */
A68_120  YIYACTR;  /* OPERATORS - istruct -> vector */
A68_282  ZIYACTR;  /* collateral clause result */
A68_121  CJYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  DJYACTR;  /* YIELD */
A68_121  EJYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  HJYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  IJYACTR;  /* YIELD */
A68_120  JJYACTR;  /* OPERATORS - istruct -> vector */
A68_183 * KJYACTR_env A_UNUSED = {0};
A68_284  LJYACTR;  /* collateral clause result */
A68_121  MJYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  NJYACTR;  /* YIELD */
A68_121  OJYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  PJYACTR;  /* YIELD */
A68_121  QJYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  RJYACTR;  /* YIELD */
A68_121  SJYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  TJYACTR;  /* YIELD */
A68_121  WJYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  XJYACTR;  /* YIELD */
A68_120  YJYACTR;  /* OPERATORS - istruct -> vector */
A68_282  ZJYACTR;  /* collateral clause result */
A68_121  CKYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  DKYACTR;  /* YIELD */
A68_121  EKYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  HKYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  IKYACTR;  /* YIELD */
A68_120  JKYACTR;  /* OPERATORS - istruct -> vector */
A68_182 * KKYACTR_mlist A_UNUSED = {0};
A68_282  LKYACTR;  /* collateral clause result */
A68_121  MKYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  NKYACTR;  /* YIELD */
A68_121  OKYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  PKYACTR;  /* YIELD */
A68_121  SKYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  TKYACTR;  /* YIELD */
A68_120  UKYACTR;  /* OPERATORS - istruct -> vector */
A68_287  VKYACTR;  /* collateral clause result */
A68_121  YKYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ZKYACTR;  /* YIELD */
A68_121  ALYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  DLYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ELYACTR;  /* YIELD */
A68_121  FLYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  ILYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  JLYACTR;  /* YIELD */
A68_121  KLYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  LLYACTR;  /* OPERATORS - istruct -> vector */
A68_296  MLYACTR;  /* collateral clause result */
A68_121  PLYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  QLYACTR;  /* YIELD */
A68_121  RLYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  ULYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  VLYACTR;  /* YIELD */
A68_121  WLYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  XLYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  YLYACTR;  /* YIELD */
A68_121  ZLYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  CMYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  DMYACTR;  /* YIELD */
A68_121  EMYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  HMYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  IMYACTR;  /* YIELD */
A68_VC  JMYACTR;  /* avoid structure result */
A68_121  KMYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  NMYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  OMYACTR;  /* YIELD */
A68_121  PMYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  SMYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  TMYACTR;  /* YIELD */
A68_121  UMYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  VMYACTR;  /* YIELD */
A68_121  YMYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ZMYACTR;  /* YIELD */
A68_121  ANYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  DNYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ENYACTR;  /* YIELD */
A68_VC  FNYACTR;  /* OPERATORS - istruct -> vector */
A68_105  GNYACTR;  /* OPERATORS - istruct -> vector */
A68_121  HNYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  INYACTR;  /* YIELD */
A68_VC  JNYACTR;  /* avoid structure result */
A68_121  KNYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  NNYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ONYACTR;  /* YIELD */
A68_121  PNYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  SNYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  TNYACTR;  /* YIELD */
A68_121  WNYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  XNYACTR;  /* YIELD */
A68_INT  YNYACTR;  /* YIELD */
A68_VC  ZNYACTR;  /* avoid structure result */
A68_121  AOYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  DOYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  EOYACTR;  /* YIELD */
A68_121  FOYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  IOYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  JOYACTR;  /* YIELD */
A68_121  KOYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  NOYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  OOYACTR;  /* YIELD */
A68_121  POYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  SOYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  TOYACTR;  /* YIELD */
A68_121  UOYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  VOYACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(writeconfiginfo);
{ 
 /* line 95: */
AIYACTR.data[0] = A_UNITE(BIYACTR,mode4,4,EIAACTR_cnewline);
FIYACTR = DIYACTR ;
AIYACTR.data[1] = A_UNITE(EIYACTR,mode2,2,FIYACTR);
 /* line 97: */
AIYACTR.data[2] = A_UNITE(GIYACTR,mode4,4,EIAACTR_cnewline);
KIYACTR = IIYACTR ;
AIYACTR.data[3] = A_UNITE(JIYACTR,mode2,2,KIYACTR);
(void)(MDMACTR_writecstream(A_HISVEC(LIYACTR,AIYACTR,4,A68_121 ), QSLACTR_locdecstream(0)));
 /* line 99: */
 /* line 100: */
RHCAOSF_get_args(  &NIYACTR );
PIYACTR = NIYACTR.upb -1;
OIYACTR = NIYACTR.data;
for (;PIYACTR-- >= 0;
(OIYACTR++
) )
{
MIYACTR_arg = *OIYACTR;
 /* line 101: */
SIYACTR = '\"' ;
QIYACTR.data[0] = A_UNITE(RIYACTR,mode1,1,SIYACTR);
QIYACTR.data[1] = A_UNITE(TIYACTR,mode2,2,MIYACTR_arg);
XIYACTR = VIYACTR ;
QIYACTR.data[2] = A_UNITE(WIYACTR,mode2,2,XIYACTR);
 /* line 102: */
(void)(MDMACTR_writecstream(A_HISVEC(YIYACTR,QIYACTR,3,A68_121 ), QSLACTR_locdecstream(0)));
}
 /* line 104: */
 /* line 105: */
DJYACTR = BJYACTR ;
ZIYACTR.data[0] = A_UNITE(CJYACTR,mode2,2,DJYACTR);
 /* line 107: */
ZIYACTR.data[1] = A_UNITE(EJYACTR,mode4,4,EIAACTR_cnewline);
IJYACTR = GJYACTR ;
ZIYACTR.data[2] = A_UNITE(HJYACTR,mode2,2,IJYACTR);
(void)(MDMACTR_writecstream(A_HISVEC(JJYACTR,ZIYACTR,3,A68_121 ), QSLACTR_locdecstream(0)));
 /* line 109: */
KJYACTR_env = (*(&((&IYIACTR_config_info)->Environment)));
 /* line 110: */
for ( ;; )
{ 
 /* line 111: */
 /* line 112: */
if ( !((KJYACTR_env!=DYIACTR_nil_envinfo)) ) break;
 /* line 113: */
NJYACTR = '\"' ;
LJYACTR.data[0] = A_UNITE(MJYACTR,mode1,1,NJYACTR);
PJYACTR = (*(&(KJYACTR_env->Env_name))) ;
LJYACTR.data[1] = A_UNITE(OJYACTR,mode2,2,PJYACTR);
RJYACTR = '=' ;
LJYACTR.data[2] = A_UNITE(QJYACTR,mode1,1,RJYACTR);
 /* line 114: */
TJYACTR = (*(&(KJYACTR_env->Env_value))) ;
LJYACTR.data[3] = A_UNITE(SJYACTR,mode2,2,TJYACTR);
XJYACTR = VJYACTR ;
LJYACTR.data[4] = A_UNITE(WJYACTR,mode2,2,XJYACTR);
(void)(MDMACTR_writecstream(A_HISVEC(YJYACTR,LJYACTR,5,A68_121 ), QSLACTR_locdecstream(0)));
 /* line 115: */
 /* line 116: */
(void)(KJYACTR_env = (*(&(KJYACTR_env->Next))));
}
 /* line 118: */
 /* line 119: */
DKYACTR = BKYACTR ;
ZJYACTR.data[0] = A_UNITE(CKYACTR,mode2,2,DKYACTR);
 /* line 121: */
ZJYACTR.data[1] = A_UNITE(EKYACTR,mode4,4,EIAACTR_cnewline);
IKYACTR = GKYACTR ;
ZJYACTR.data[2] = A_UNITE(HKYACTR,mode2,2,IKYACTR);
(void)(MDMACTR_writecstream(A_HISVEC(JKYACTR,ZJYACTR,3,A68_121 ), QSLACTR_locdecstream(0)));
 /* line 123: */
KKYACTR_mlist = (*(&((&IYIACTR_config_info)->Used_modules)));
 /* line 124: */
for ( ;; )
{ 
 /* line 125: */
 /* line 126: */
if ( !((KKYACTR_mlist!=CYIACTR_nil_modinfolist)) ) break;
 /* line 127: */
NKYACTR = '\"' ;
LKYACTR.data[0] = A_UNITE(MKYACTR,mode1,1,NKYACTR);
 /* line 128: */
PKYACTR = (*(&(KKYACTR_mlist->Modinfo_file))) ;
LKYACTR.data[1] = A_UNITE(OKYACTR,mode2,2,PKYACTR);
TKYACTR = RKYACTR ;
LKYACTR.data[2] = A_UNITE(SKYACTR,mode2,2,TKYACTR);
(void)(MDMACTR_writecstream(A_HISVEC(UKYACTR,LKYACTR,3,A68_121 ), QSLACTR_locdecstream(0)));
 /* line 129: */
 /* line 130: */
(void)(KKYACTR_mlist = (*(&(KKYACTR_mlist->Next))));
}
 /* line 132: */
 /* line 133: */
ZKYACTR = XKYACTR ;
VKYACTR.data[0] = A_UNITE(YKYACTR,mode2,2,ZKYACTR);
 /* line 134: */
VKYACTR.data[1] = A_UNITE(ALYACTR,mode4,4,EIAACTR_cnewline);
ELYACTR = CLYACTR ;
VKYACTR.data[2] = A_UNITE(DLYACTR,mode2,2,ELYACTR);
 /* line 135: */
VKYACTR.data[3] = A_UNITE(FLYACTR,mode4,4,EIAACTR_cnewline);
 /* line 136: */
JLYACTR = HLYACTR ;
VKYACTR.data[4] = A_UNITE(ILYACTR,mode2,2,JLYACTR);
VKYACTR.data[5] = A_UNITE(KLYACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(LLYACTR,VKYACTR,6,A68_121 ), QSLACTR_locdecstream(0)));
 /* line 138: */
 /* line 139: */
QLYACTR = OLYACTR ;
MLYACTR.data[0] = A_UNITE(PLYACTR,mode2,2,QLYACTR);
 /* line 140: */
MLYACTR.data[1] = A_UNITE(RLYACTR,mode4,4,EIAACTR_cnewline);
VLYACTR = TLYACTR ;
MLYACTR.data[2] = A_UNITE(ULYACTR,mode2,2,VLYACTR);
MLYACTR.data[3] = A_UNITE(WLYACTR,mode2,2,BRIACTR_current_directory);
YLYACTR = '/' ;
MLYACTR.data[4] = A_UNITE(XLYACTR,mode1,1,YLYACTR);
MLYACTR.data[5] = A_UNITE(ZLYACTR,mode2,2,XQIACTR_sourcefilename);
DMYACTR = BMYACTR ;
MLYACTR.data[6] = A_UNITE(CMYACTR,mode2,2,DMYACTR);
 /* line 141: */
MLYACTR.data[7] = A_UNITE(EMYACTR,mode4,4,EIAACTR_cnewline);
IMYACTR = GMYACTR ;
MLYACTR.data[8] = A_UNITE(HMYACTR,mode2,2,IMYACTR);
YPBAOSF_local_time_str( (*(&((&IYIACTR_config_info)->Translationtime))), &JMYACTR );
MLYACTR.data[9] = A_UNITE(KMYACTR,mode2,2,JMYACTR);
OMYACTR = MMYACTR ;
MLYACTR.data[10] = A_UNITE(NMYACTR,mode2,2,OMYACTR);
 /* line 142: */
MLYACTR.data[11] = A_UNITE(PMYACTR,mode4,4,EIAACTR_cnewline);
TMYACTR = RMYACTR ;
MLYACTR.data[12] = A_UNITE(SMYACTR,mode2,2,TMYACTR);
VMYACTR = (*(&((&IYIACTR_config_info)->Version))) ;
MLYACTR.data[13] = A_UNITE(UMYACTR,mode2,2,VMYACTR);
ZMYACTR = XMYACTR ;
MLYACTR.data[14] = A_UNITE(YMYACTR,mode2,2,ZMYACTR);
 /* line 143: */
MLYACTR.data[15] = A_UNITE(ANYACTR,mode4,4,EIAACTR_cnewline);
ENYACTR = CNYACTR ;
MLYACTR.data[16] = A_UNITE(DNYACTR,mode2,2,ENYACTR);
 /* line 144: */
GNYACTR = (*(&((&IYIACTR_config_info)->Nameseed))) ;
INYACTR = A_HISVEC(FNYACTR,GNYACTR,7,A68_CHAR ) ;
MLYACTR.data[17] = A_UNITE(HNYACTR,mode2,2,INYACTR);
EMMACTR_nameseedoriginstring( (*(&((&IYIACTR_config_info)->Nameseedorigin))), &JNYACTR );
MLYACTR.data[18] = A_UNITE(KNYACTR,mode2,2,JNYACTR);
ONYACTR = MNYACTR ;
MLYACTR.data[19] = A_UNITE(NNYACTR,mode2,2,ONYACTR);
 /* line 145: */
MLYACTR.data[20] = A_UNITE(PNYACTR,mode4,4,EIAACTR_cnewline);
 /* line 146: */
TNYACTR = RNYACTR ;
MLYACTR.data[21] = A_UNITE(SNYACTR,mode2,2,TNYACTR);
if (RCPACTR_specs.dim[0].upb==0)
{ 
XNYACTR = VNYACTR ;
MLYACTR.data[22] = A_UNITE(WNYACTR,mode2,2,XNYACTR);
} 
else
{ 
YNYACTR = 1 ;
YPBAOSF_local_time_str( (*(&((&A_R1INDEX(RCPACTR_specs,YNYACTR))->Timeoflastchange))), &ZNYACTR );
MLYACTR.data[22] = A_UNITE(AOYACTR,mode2,2,ZNYACTR);
} 
EOYACTR = COYACTR ;
MLYACTR.data[23] = A_UNITE(DOYACTR,mode2,2,EOYACTR);
 /* line 147: */
MLYACTR.data[24] = A_UNITE(FOYACTR,mode4,4,EIAACTR_cnewline);
JOYACTR = HOYACTR ;
MLYACTR.data[25] = A_UNITE(IOYACTR,mode2,2,JOYACTR);
 /* line 148: */
MLYACTR.data[26] = A_UNITE(KOYACTR,mode4,4,EIAACTR_cnewline);
OOYACTR = MOYACTR ;
MLYACTR.data[27] = A_UNITE(NOYACTR,mode2,2,OOYACTR);
 /* line 149: */
MLYACTR.data[28] = A_UNITE(POYACTR,mode4,4,EIAACTR_cnewline);
 /* line 150: */
TOYACTR = ROYACTR ;
MLYACTR.data[29] = A_UNITE(SOYACTR,mode2,2,TOYACTR);
MLYACTR.data[30] = A_UNITE(UOYACTR,mode4,4,EIAACTR_cnewline);
 /* line 151: */
(void)(MDMACTR_writecstream(A_HISVEC(VOYACTR,MLYACTR,31,A68_121 ), NSLACTR_codestream(0)));
} 
A_PROC_EXIT(writeconfiginfo);
return;
} 
#undef NL
 /* line 155: */
 /* line 156: */
 /* line 157: */
 /* line 159: */

A68_VOID  BPYACTR_startroutine(A68_203  Routine, A68_109  Environ, A68_92  Paramdecnos, A68_INT  Resultmode, A68_153 * Resultvalue)
{ 
A68_153  CPYACTR;  /* collateral clause result */
A68_154  DPYACTR = {0};  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(startroutine);
 /* line 160: */
 /* line 162: */
{ 
 /* line 163: */
 /* line 164: */
 /* line 165: */
 /* line 166: */
 /* line 167: */
 /* line 169: */
(void)(BRWACTR_rddec(Routine.Name, Routine.Mode, Paramdecnos, Resultmode, Routine.Rdenno, Environ, Routine.Props));
 /* line 170: */
(void)(PFYACTR_writeinitialopencurly());
 /* line 171: */
(void)(WGYACTR_routine_entry_hook(Routine.Name));
 /* line 173: */
CPYACTR.Mode = Resultmode;
CPYACTR.Info = PKJACTR_defaultinfo;
 /* line 174: */
CPYACTR.Extra = A_EMPTY(DPYACTR,3);
(void)(GPYACTR_assignment(Resultvalue, (*GPYACTR_assignment(A_LOC(A68_153 ), CPYACTR))));
} 
A_PROC_EXIT(startroutine);
return;
} 
#undef NL

A68_VOID  UPYACTR_endroutine(A68_203  Routine, A68_153 * Result)
{ 
A68_BITS  VPYACTR;  /* ADICOPS - >= */
A68_BOOL  WPYACTR_generator A_UNUSED = {0};
A68_INT  XPYACTR_codestream A_UNUSED = {0};
A68_BOOL  YPYACTR;  /* optbool result */
A68_BOOL  ZPYACTR_usetempforresult A_UNUSED = {0};
A68_275  AQYACTR;  /* collateral clause result */
A68_121  DQYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  EQYACTR;  /* YIELD */
A68_121  FQYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  GQYACTR;  /* OPERATORS - istruct -> vector */
A68_277  HQYACTR;  /* collateral clause result */
A68_121  KQYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  LQYACTR;  /* YIELD */
A68_VC  MQYACTR;  /* avoid structure result */
A68_121  NQYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  QQYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  RQYACTR;  /* YIELD */
A68_121  SQYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  TQYACTR;  /* OPERATORS - istruct -> vector */
A68_275  UQYACTR;  /* collateral clause result */
A68_121  XQYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  YQYACTR;  /* YIELD */
A68_121  ZQYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  ARYACTR;  /* OPERATORS - istruct -> vector */
A68_277  BRYACTR;  /* collateral clause result */
A68_121  ERYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  FRYACTR;  /* YIELD */
A68_VC  GRYACTR;  /* avoid structure result */
A68_121  HRYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  KRYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  LRYACTR;  /* YIELD */
A68_121  MRYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  NRYACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(endroutine);
 /* line 177: */
 /* line 178: */
{ 
VPYACTR = Routine.Props ;
WPYACTR_generator = A_LB_GE(VPYACTR,FDAACTR_genprocbit);
 /* line 179: */
XPYACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 180: */
 /* line 181: */
 /* line 182: */
if (WPYACTR_generator)
{ 
/*SKIP*/;
} 
else
{ 
 /* line 183: */
if (OTMACTR_dynamic((*(&(Result->Mode)))))
{ 
 /* line 184: */
 /* line 185: */
if (ARMACTR_isarray((*(&(Result->Mode)))))
{ 
 /* line 186: */
/*SKIP*/;
} 
else
{ 
 /* line 187: */
 /* line 188: */
/*SKIP*/;
} 
} 
else
{ 
/*SKIP*/;
} 
} 
 /* line 190: */
(void)(LHYACTR_routine_exit_hook(Routine.Name));
 /* line 193: */
 /* line 194: */
YPYACTR = NQIACTR_nostructresultoption;
if ( YPYACTR )
{YPYACTR = VSMACTR_iscstruct((*(&(Result->Mode))));
}
ZPYACTR_usetempforresult = YPYACTR;
 /* line 196: */
 /* line 197: */
if ((*(&(Result->Mode)))==UEAACTR_voidmode)
{ 
EQYACTR = CQYACTR ;
AQYACTR.data[0] = A_UNITE(DQYACTR,mode2,2,EQYACTR);
AQYACTR.data[1] = A_UNITE(FQYACTR,mode4,4,EIAACTR_cnewline);
 /* line 198: */
 /* line 199: */
(void)(MDMACTR_writecstream(A_HISVEC(GQYACTR,AQYACTR,2,A68_121 ), XPYACTR_codestream));
} 
else
{ 
 /* line 200: */
if (ZPYACTR_usetempforresult)
{ 
 /* line 201: */
LQYACTR = JQYACTR ;
HQYACTR.data[0] = A_UNITE(KQYACTR,mode2,2,LQYACTR);
 /* line 202: */
UZPACTR_getcfragment( Result, &MQYACTR );
HQYACTR.data[1] = A_UNITE(NQYACTR,mode2,2,MQYACTR);
RQYACTR = PQYACTR ;
HQYACTR.data[2] = A_UNITE(QQYACTR,mode2,2,RQYACTR);
HQYACTR.data[3] = A_UNITE(SQYACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(TQYACTR,HQYACTR,4,A68_121 ), XPYACTR_codestream));
 /* line 203: */
YQYACTR = WQYACTR ;
UQYACTR.data[0] = A_UNITE(XQYACTR,mode2,2,YQYACTR);
UQYACTR.data[1] = A_UNITE(ZQYACTR,mode4,4,EIAACTR_cnewline);
 /* line 204: */
 /* line 205: */
(void)(MDMACTR_writecstream(A_HISVEC(ARYACTR,UQYACTR,2,A68_121 ), XPYACTR_codestream));
} 
else
{ 
 /* line 206: */
FRYACTR = DRYACTR ;
BRYACTR.data[0] = A_UNITE(ERYACTR,mode2,2,FRYACTR);
 /* line 207: */
UZPACTR_getcfragment( Result, &GRYACTR );
BRYACTR.data[1] = A_UNITE(HRYACTR,mode2,2,GRYACTR);
LRYACTR = JRYACTR ;
BRYACTR.data[2] = A_UNITE(KRYACTR,mode2,2,LRYACTR);
BRYACTR.data[3] = A_UNITE(MRYACTR,mode4,4,EIAACTR_cnewline);
 /* line 208: */
(void)(MDMACTR_writecstream(A_HISVEC(NRYACTR,BRYACTR,4,A68_121 ), XPYACTR_codestream));
} 
} 
 /* line 210: */
(void)(BGYACTR_writeclosingcurly());
 /* line 212: */
 /* line 213: */
(void)(XPWACTR_completerddec());
} 
A_PROC_EXIT(endroutine);
return;
} 
#undef NL

A_STATIC A68_VOID  ORYACTR_globalenviron(A68_109  *ReturnedValue)
{ 
A68_109  PRYACTR;  /* clause result */
A_PROC_ENTRY(globalenviron);
PRYACTR = (*(&((&A_R1INDEX(WPKACTR_ids,GAAACTR_globalidno))->Environ)));
A_PROC_EXIT(globalenviron);
*ReturnedValue = (PRYACTR);
return;
} 
#undef NL

A68_VOID  SRYACTR_startmodule(A68_VC  Uniquename, A68_VC  Modulename)
{ 
A68_INT  TRYACTR_codestream A_UNUSED = {0};
A68_275  URYACTR;  /* collateral clause result */
A68_121  XRYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  YRYACTR;  /* YIELD */
A68_121  ZRYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  ASYACTR;  /* OPERATORS - istruct -> vector */
A68_275  BSYACTR;  /* collateral clause result */
A68_121  ESYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  FSYACTR;  /* YIELD */
A68_121  GSYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  HSYACTR;  /* OPERATORS - istruct -> vector */
A68_287  ISYACTR;  /* collateral clause result */
A68_121  LSYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  MSYACTR;  /* YIELD */
A68_121  NSYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  QSYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  RSYACTR;  /* YIELD */
A68_121  SSYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  VSYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  WSYACTR;  /* YIELD */
A68_121  XSYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  YSYACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(startmodule);
 /* line 221: */
 /* line 222: */
{ 
TRYACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 224: */
 /* line 227: */
 /* line 228: */
YRYACTR = WRYACTR ;
URYACTR.data[0] = A_UNITE(XRYACTR,mode2,2,YRYACTR);
URYACTR.data[1] = A_UNITE(ZRYACTR,mode4,4,EIAACTR_cnewline);
 /* line 229: */
(void)(MDMACTR_writecstream(A_HISVEC(ASYACTR,URYACTR,2,A68_121 ), TRYACTR_codestream));
 /* line 231: */
(void)(PFYACTR_writeinitialopencurly());
 /* line 236: */
FSYACTR = DSYACTR ;
BSYACTR.data[0] = A_UNITE(ESYACTR,mode2,2,FSYACTR);
BSYACTR.data[1] = A_UNITE(GSYACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(HSYACTR,BSYACTR,2,A68_121 ), TRYACTR_codestream));
 /* line 238: */
(void)(IUPACTR_processcontexts());
 /* line 240: */
(void)(ZHYACTR_writeconfiginfo());
 /* line 242: */
 /* line 243: */
MSYACTR = KSYACTR ;
ISYACTR.data[0] = A_UNITE(LSYACTR,mode2,2,MSYACTR);
 /* line 246: */
ISYACTR.data[1] = A_UNITE(NSYACTR,mode4,4,EIAACTR_cnewline);
RSYACTR = PSYACTR ;
ISYACTR.data[2] = A_UNITE(QSYACTR,mode2,2,RSYACTR);
 /* line 247: */
ISYACTR.data[3] = A_UNITE(SSYACTR,mode4,4,EIAACTR_cnewline);
 /* line 248: */
WSYACTR = USYACTR ;
ISYACTR.data[4] = A_UNITE(VSYACTR,mode2,2,WSYACTR);
ISYACTR.data[5] = A_UNITE(XSYACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(YSYACTR,ISYACTR,6,A68_121 ), TRYACTR_codestream));
 /* line 250: */
 /* line 251: */
(void)(WGYACTR_routine_entry_hook(ATYACTR));
} 
A_PROC_EXIT(startmodule);
return;
} 
#undef NL

A68_VOID  DTYACTR_startdecsmodule(A68_VC  Uniquename, A68_VC  Modulename)
{ 
A68_INT  ETYACTR_codestream A_UNUSED = {0};
A68_INT  FTYACTR_locdecstream A_UNUSED = {0};
A68_287  GTYACTR;  /* collateral clause result */
A68_121  JTYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  KTYACTR;  /* YIELD */
A68_121  LTYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  OTYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  PTYACTR;  /* YIELD */
A68_121  QTYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  TTYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  UTYACTR;  /* YIELD */
A68_121  VTYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  WTYACTR;  /* OPERATORS - istruct -> vector */
A68_275  XTYACTR;  /* collateral clause result */
A68_121  AUYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  BUYACTR;  /* YIELD */
A68_121  CUYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  DUYACTR;  /* OPERATORS - istruct -> vector */
A68_277  EUYACTR;  /* collateral clause result */
A68_121  HUYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  IUYACTR;  /* YIELD */
A68_121  JUYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  MUYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  NUYACTR;  /* YIELD */
A68_121  OUYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  PUYACTR;  /* OPERATORS - istruct -> vector */
A68_315  QUYACTR;  /* collateral clause result */
A68_36  TUYACTR;  /* OPERATORS - istruct -> vector */
A68_VC  UUYACTR;  /* avoid structure result */
A_PROC_ENTRY(startdecsmodule);
 /* line 261: */
 /* line 262: */
{ 
ETYACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 263: */
FTYACTR_locdecstream = QSLACTR_locdecstream(VRLACTR_currentlevel());
 /* line 267: */
 /* line 268: */
KTYACTR = ITYACTR ;
GTYACTR.data[0] = A_UNITE(JTYACTR,mode2,2,KTYACTR);
GTYACTR.data[1] = A_UNITE(LTYACTR,mode2,2,Uniquename);
PTYACTR = NTYACTR ;
GTYACTR.data[2] = A_UNITE(OTYACTR,mode2,2,PTYACTR);
GTYACTR.data[3] = A_UNITE(QTYACTR,mode2,2,Modulename);
 /* line 270: */
UTYACTR = STYACTR ;
GTYACTR.data[4] = A_UNITE(TTYACTR,mode2,2,UTYACTR);
GTYACTR.data[5] = A_UNITE(VTYACTR,mode4,4,EIAACTR_cnewline);
 /* line 271: */
(void)(MDMACTR_writecstream(A_HISVEC(WTYACTR,GTYACTR,6,A68_121 ), ETYACTR_codestream));
 /* line 273: */
(void)(PFYACTR_writeinitialopencurly());
 /* line 275: */
 /* line 276: */
 /* line 277: */
BUYACTR = ZTYACTR ;
XTYACTR.data[0] = A_UNITE(AUYACTR,mode2,2,BUYACTR);
XTYACTR.data[1] = A_UNITE(CUYACTR,mode4,4,EIAACTR_cnewline);
 /* line 278: */
(void)(MDMACTR_writecstream(A_HISVEC(DUYACTR,XTYACTR,2,A68_121 ), FTYACTR_locdecstream));
 /* line 280: */
 /* line 281: */
IUYACTR = GUYACTR ;
EUYACTR.data[0] = A_UNITE(HUYACTR,mode2,2,IUYACTR);
 /* line 282: */
EUYACTR.data[1] = A_UNITE(JUYACTR,mode4,4,EIAACTR_cnewline);
 /* line 283: */
NUYACTR = LUYACTR ;
EUYACTR.data[2] = A_UNITE(MUYACTR,mode2,2,NUYACTR);
EUYACTR.data[3] = A_UNITE(OUYACTR,mode4,4,EIAACTR_cnewline);
 /* line 284: */
(void)(MDMACTR_writecstream(A_HISVEC(PUYACTR,EUYACTR,4,A68_121 ), ETYACTR_codestream));
 /* line 286: */
(void)(IUPACTR_processcontexts());
 /* line 288: */
(void)(ZHYACTR_writeconfiginfo());
 /* line 290: */
QUYACTR.data[0] = SUYACTR;
QUYACTR.data[1] = Modulename;
 /* line 291: */
JDAAOSF_concat( A_HISVEC(TUYACTR,QUYACTR,2,A68_VC ), &UUYACTR );
(void)(WGYACTR_routine_entry_hook(UUYACTR));
} 
A_PROC_EXIT(startdecsmodule);
return;
} 
#undef NL
 /* line 295: */
 /* line 297: */

A68_VOID  ZUYACTR_startprocmodule(A68_203  Routine, A68_VC  Uniquename, A68_VC  Modulename, A68_153 * Resultvalue)
{ 
A_PROC_ENTRY(startprocmodule);
 /* line 298: */
 /* line 299: */
 /* line 300: */
(void)(SXIACTR_terminalerror(809));
A_PROC_EXIT(startprocmodule);
return;
} 
#undef NL
 /* line 305: */

A68_VOID  DVYACTR_startcompositionmodule(A68_VC  Uniquename, A68_VC  Modulename, A68_BOOL  Partialcomposition)
{ 
A_PROC_ENTRY(startcompositionmodule);
 /* line 309: */
 /* line 310: */
 /* line 311: */
(void)(SXIACTR_terminalerror(806));
A_PROC_EXIT(startcompositionmodule);
return;
} 
#undef NL

A68_VOID  EVYACTR_endmodule(void)
{ 
A68_321  HVYACTR;  /* collateral clause result */
A68_121  KVYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  LVYACTR;  /* YIELD */
A68_121  MVYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  PVYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  QVYACTR;  /* YIELD */
A68_121  RVYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  UVYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  VVYACTR;  /* YIELD */
A68_121  WVYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  ZVYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  AWYACTR;  /* YIELD */
A68_121  BWYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  CWYACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(endmodule);
{ 
(void)(LHYACTR_routine_exit_hook(GVYACTR));
 /* line 316: */
 /* line 317: */
LVYACTR = JVYACTR ;
HVYACTR.data[0] = A_UNITE(KVYACTR,mode2,2,LVYACTR);
 /* line 318: */
HVYACTR.data[1] = A_UNITE(MVYACTR,mode4,4,EIAACTR_cnewline);
QVYACTR = OVYACTR ;
HVYACTR.data[2] = A_UNITE(PVYACTR,mode2,2,QVYACTR);
 /* line 319: */
HVYACTR.data[3] = A_UNITE(RVYACTR,mode4,4,EIAACTR_cnewline);
VVYACTR = TVYACTR ;
HVYACTR.data[4] = A_UNITE(UVYACTR,mode2,2,VVYACTR);
 /* line 320: */
HVYACTR.data[5] = A_UNITE(WVYACTR,mode4,4,EIAACTR_cnewline);
 /* line 321: */
AWYACTR = YVYACTR ;
HVYACTR.data[6] = A_UNITE(ZVYACTR,mode2,2,AWYACTR);
HVYACTR.data[7] = A_UNITE(BWYACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(CWYACTR,HVYACTR,8,A68_121 ), NSLACTR_codestream(VRLACTR_currentlevel())));
 /* line 322: */
 /* line 323: */
(void)(BGYACTR_writeclosingcurly());
} 
A_PROC_EXIT(endmodule);
return;
} 
#undef NL

A68_VOID  EWYACTR_enddecsmodule(A68_VC  Modulename)
{ 
A68_BOOL  FWYACTR;  /* optbool result */
A68_315  GWYACTR;  /* collateral clause result */
A68_36  JWYACTR;  /* OPERATORS - istruct -> vector */
A68_VC  KWYACTR;  /* avoid structure result */
A_PROC_ENTRY(enddecsmodule);
 /* line 326: */
 /* line 327: */
{ 
 /* line 328: */
if (KCPACTR_previousversionfound)
{ 
 /* line 329: */
 /* line 331: */
FWYACTR = LCPACTR_rscompatiblewithpreviousversion;
if ( FWYACTR )
{FWYACTR = MCPACTR_transcompatiblewithpreviousversi;
}
if (FWYACTR)
{ 
 /* line 332: */
(void)(GXIACTR_comment(319));
} 
else
{ 
 /* line 333: */
 /* line 334: */
(void)(JXIACTR_warning(320));
} 
} 
 /* line 336: */
GWYACTR.data[0] = IWYACTR;
GWYACTR.data[1] = Modulename;
JDAAOSF_concat( A_HISVEC(JWYACTR,GWYACTR,2,A68_VC ), &KWYACTR );
(void)(LHYACTR_routine_exit_hook(KWYACTR));
 /* line 338: */
(void)(BGYACTR_writeclosingcurly());
 /* line 340: */
 /* line 341: */
(void)(DJPACTR_outputmoduleinformation());
} 
A_PROC_EXIT(enddecsmodule);
return;
} 
#undef NL
 /* line 346: */

A68_VOID  NWYACTR_completeprogram(A68_VC  Modulename, A68_104 * Autocomplabel)
{ 
A_PROC_ENTRY(completeprogram);
 /* line 352: */
 /* line 353: */
 /* line 354: */
(void)(WXIACTR_assert(PWYACTR, A68_FALSE));
A_PROC_EXIT(completeprogram);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 6: */
void KFYACTR(void)   /* initialise DECS entryandreturn */
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
MMVACTR();   /* USE identifiers */
DNMACTR();   /* USE modes */
PTLACTR();   /* USE coutput */
BPLACTR();   /* USE environ */
THAACTR();   /* USE centities */
CSCAOSF();   /* USE osif */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/entryandreturn.a68";
A_config.translation_time = "Thu Nov  5 21:11:00 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "JFYACTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 21:11:00 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS entryandreturn);
(void)(UEAALIB_a68config(LGAALIB_configinfo, OFYACTR));
 /* line 47: */
 /* line 54: */
 /* line 55: */
 /* line 60: */
 /* line 67: */
 /* line 68: */
 /* line 77: */
 /* line 83: */
 /* line 89: */
 /* line 93: */
 /* line 94: */
 /* line 153: */
 /* line 154: */
 /* line 176: */
 /* line 215: */
 /* line 217: */
 /* line 253: */
 /* line 293: */
 /* line 294: */
 /* line 302: */
 /* line 303: */
 /* line 313: */
 /* line 314: */
 /* line 315: */
 /* line 325: */
 /* line 343: */
 /* line 344: */
 /* line 356: */
 /* line 358: */
 /* line 362: */
/*SKIP*/;
A_PROC_EXIT(DECS entryandreturn);
} 
#undef NL
/* end of translation of entryandreturn.a68 */
