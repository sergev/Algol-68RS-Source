/* UNAME:AGYACTR */
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
extern A68_VOID  UZPACTR_getcfragment(struct A68t154 *,A68_VC *);
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
extern A68_VOID  CCWACTR_noteroutineprototype(A68_INT ,A68_VC );
extern A68_VOID  CDWACTR_endroutineprototype(A68_INT );
extern A68_VOID  OQWACTR_completerddec(void);
extern A68_164  WPKACTR_ids;
extern A68_VOID  SRWACTR_rddec(A68_VC ,A68_INT ,struct A68t92 ,A68_INT ,A68_INT ,struct A68t109 ,A68_BITS );
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
static A68_274   EGYACTR = {"$Id: entryandreturn.a68,v 1.2 2003-06-10 14:03:55 sian Exp $"}; 
A_GISVEC(A68_VC ,FGYACTR,EGYACTR,60)
static A68_275   JGYACTR = {"{ "}; 
A_GISVEC(A68_VC ,KGYACTR,JGYACTR,2)
static A68_275   XGYACTR = {"} "}; 
A_GISVEC(A68_VC ,YGYACTR,XGYACTR,2)
static A68_277   CHYACTR = {"#undef NL"}; 
A_GISVEC(A68_VC ,DHYACTR,CHYACTR,9)
static A68_279   QHYACTR = {"A_PROC_ENTRY("}; 
A_GISVEC(A68_VC ,RHYACTR,QHYACTR,13)
static A68_275   VHYACTR = {");"}; 
A_GISVEC(A68_VC ,WHYACTR,VHYACTR,2)
static A68_280   FIYACTR = {"A_PROC_EXIT("}; 
A_GISVEC(A68_VC ,GIYACTR,FIYACTR,12)
static A68_275   KIYACTR = {");"}; 
A_GISVEC(A68_VC ,LIYACTR,KIYACTR,2)
static A68_281   TIYACTR = {"/* --- Configuration information for this module */"}; 
A_GISVEC(A68_VC ,UIYACTR,TIYACTR,51)
static A68_282   YIYACTR = {"static char *A_config_arguments[] = {"}; 
A_GISVEC(A68_VC ,ZIYACTR,YIYACTR,37)
static A68_275   LJYACTR = {"\","}; 
A_GISVEC(A68_VC ,MJYACTR,LJYACTR,2)
static A68_40   RJYACTR = {"\"\"};"}; 
A_GISVEC(A68_VC ,SJYACTR,RJYACTR,4)
static A68_284   WJYACTR = {"static char *A_config_environment[] = {"}; 
A_GISVEC(A68_VC ,XJYACTR,WJYACTR,39)
static A68_275   LKYACTR = {"\","}; 
A_GISVEC(A68_VC ,MKYACTR,LKYACTR,2)
static A68_40   RKYACTR = {"\"\"};"}; 
A_GISVEC(A68_VC ,SKYACTR,RKYACTR,4)
static A68_286   WKYACTR = {"static char *A_config_modinfo_files[] = {"}; 
A_GISVEC(A68_VC ,XKYACTR,WKYACTR,41)
static A68_275   HLYACTR = {"\","}; 
A_GISVEC(A68_VC ,ILYACTR,HLYACTR,2)
static A68_40   NLYACTR = {"\"\"};"}; 
A_GISVEC(A68_VC ,OLYACTR,NLYACTR,4)
static A68_284   SLYACTR = {"static A_CONFIG_INFO A_config A_UNUSED;"}; 
A_GISVEC(A68_VC ,TLYACTR,SLYACTR,39)
static A68_287   XLYACTR = {"/* --- end of configuration information */"}; 
A_GISVEC(A68_VC ,YLYACTR,XLYACTR,42)
static A68_289   EMYACTR = {"/* --- Initialise configuration information */"}; 
A_GISVEC(A68_VC ,FMYACTR,EMYACTR,46)
static A68_290   JMYACTR = {"A_config.source_file = \""}; 
A_GISVEC(A68_VC ,KMYACTR,JMYACTR,24)
static A68_275   RMYACTR = {"\";"}; 
A_GISVEC(A68_VC ,SMYACTR,RMYACTR,2)
static A68_291   WMYACTR = {"A_config.translation_time = \""}; 
A_GISVEC(A68_VC ,XMYACTR,WMYACTR,29)
static A68_275   CNYACTR = {"\";"}; 
A_GISVEC(A68_VC ,DNYACTR,CNYACTR,2)
static A68_292   HNYACTR = {"A_config.ctrans_version = \""}; 
A_GISVEC(A68_VC ,INYACTR,HNYACTR,27)
static A68_275   NNYACTR = {"\";"}; 
A_GISVEC(A68_VC ,ONYACTR,NNYACTR,2)
static A68_293   SNYACTR = {"A_config.name_seed = \""}; 
A_GISVEC(A68_VC ,TNYACTR,SNYACTR,22)
static A68_275   COYACTR = {"\";"}; 
A_GISVEC(A68_VC ,DOYACTR,COYACTR,2)
static A68_291   HOYACTR = {"A_config.spec_change_time = \""}; 
A_GISVEC(A68_VC ,IOYACTR,HOYACTR,29)
static A68_105   LOYACTR = {"no spec"}; 
A_GISVEC(A68_VC ,MOYACTR,LOYACTR,7)
static A68_275   SOYACTR = {"\";"}; 
A_GISVEC(A68_VC ,TOYACTR,SOYACTR,2)
static A68_294   XOYACTR = {"A_config.arguments = A_config_arguments;"}; 
A_GISVEC(A68_VC ,YOYACTR,XOYACTR,40)
static A68_295   CPYACTR = {"A_config.environment = A_config_environment;"}; 
A_GISVEC(A68_VC ,DPYACTR,CPYACTR,44)
static A68_296   HPYACTR = {"A_config.modinfo_files = A_config_modinfo_files;"}; 
A_GISVEC(A68_VC ,IPYACTR,HPYACTR,48)
static A68_105   SQYACTR = {"return;"}; 
A_GISVEC(A68_VC ,TQYACTR,SQYACTR,7)
static A68_303   ZQYACTR = {"*ReturnedValue = ("}; 
A_GISVEC(A68_VC ,ARYACTR,ZQYACTR,18)
static A68_275   FRYACTR = {");"}; 
A_GISVEC(A68_VC ,GRYACTR,FRYACTR,2)
static A68_105   MRYACTR = {"return;"}; 
A_GISVEC(A68_VC ,NRYACTR,MRYACTR,7)
static A68_304   TRYACTR = {"return( "}; 
A_GISVEC(A68_VC ,URYACTR,TRYACTR,8)
static A68_305   ZRYACTR = {" );"}; 
A_GISVEC(A68_VC ,ASYACTR,ZRYACTR,3)
static A68_289   MSYACTR = {"int main(int argc, char *argv[], char *envp[])"}; 
A_GISVEC(A68_VC ,NSYACTR,MSYACTR,46)
static A68_289   SSYACTR = {"int main(int argc, char *argv[], char *envp[])"}; 
A_GISVEC(A68_VC ,TSYACTR,SSYACTR,46)
static A68_307   VSYACTR = {"A_GC_STARTUP(argc);"}; 
A_GISVEC(A68_VC ,WSYACTR,VSYACTR,19)
static A68_308   CTYACTR = {"#ifdef A_prelude"}; 
A_GISVEC(A68_VC ,DTYACTR,CTYACTR,16)
static A68_309   HTYACTR = {"A_prelude(argc,argv,envp);"}; 
A_GISVEC(A68_VC ,ITYACTR,HTYACTR,26)
static A68_310   MTYACTR = {"#endif"}; 
A_GISVEC(A68_VC ,NTYACTR,MTYACTR,6)
static A68_40   STYACTR = {"MAIN"}; 
A_GISVEC(A68_VC ,TTYACTR,STYACTR,4)
static A68_311   AUYACTR = {"void "}; 
A_GISVEC(A68_VC ,BUYACTR,AUYACTR,5)
static A68_312   FUYACTR = {"(void)   /* initialise DECS "}; 
A_GISVEC(A68_VC ,GUYACTR,FUYACTR,28)
static A68_305   KUYACTR = {" */"}; 
A_GISVEC(A68_VC ,LUYACTR,KUYACTR,3)
static A68_311   QUYACTR = {"void "}; 
static A68_310   RUYACTR = {"(void)"}; 
A_GISVEC(A68_VC ,SUYACTR,QUYACTR,5)
A_GISVEC(A68_VC ,TUYACTR,RUYACTR,6)
static A68_313   VUYACTR = {"static A68_BOOL A_invoked = A68_FALSE;"}; 
A_GISVEC(A68_VC ,WUYACTR,VUYACTR,38)
static A68_314   CVYACTR = {"if( A_invoked ) return;"}; 
A_GISVEC(A68_VC ,DVYACTR,CVYACTR,23)
static A68_315   HVYACTR = {"A_invoked = A68_TRUE;"}; 
A_GISVEC(A68_VC ,IVYACTR,HVYACTR,21)
static A68_311   OVYACTR = {"DECS "}; 
A_GISVEC(A68_VC ,PVYACTR,OVYACTR,5)
static A68_40   CWYACTR = {"MAIN"}; 
A_GISVEC(A68_VC ,DWYACTR,CWYACTR,4)
static A68_319   FWYACTR = {"#ifdef A_postlude"}; 
A_GISVEC(A68_VC ,GWYACTR,FWYACTR,17)
static A68_320   KWYACTR = {"A_postlude;"}; 
A_GISVEC(A68_VC ,LWYACTR,KWYACTR,11)
static A68_310   PWYACTR = {"#endif"}; 
A_GISVEC(A68_VC ,QWYACTR,PWYACTR,6)
static A68_321   UWYACTR = {"return(0);"}; 
A_GISVEC(A68_VC ,VWYACTR,UWYACTR,10)
static A68_311   EXYACTR = {"DECS "}; 
A_GISVEC(A68_VC ,FXYACTR,EXYACTR,5)
static A68_325   LXYACTR = {"'complete program' called"}; 
A_GISVEC(A68_VC ,MXYACTR,LXYACTR,25)

A_STATIC A68_VOID  GGYACTR_writeinitialopencurly(void);

A_STATIC A68_VOID  SGYACTR_writeclosingcurly(void);

A_STATIC A68_VOID  NHYACTR_routine_entry_hook(A68_VC  Routinename);

A_STATIC A68_VOID  CIYACTR_routine_exit_hook(A68_VC  Routinename);

A_STATIC A68_VOID  QIYACTR_writeconfiginfo(void);

A68_VOID  SPYACTR_startroutine(A68_204  Routine, A68_109  Environ, A68_92  Paramdecnos, A68_INT  Resultmode, A68_154 * Resultvalue);

A_STATIC A68_154 * XPYACTR_assignment(A68_154 * VPYACTR_anonymous, A68_154  WPYACTR_anonymous);

A_STATIC A68_155 * CQYACTR_assignment(A68_155 * AQYACTR_anonymous, A68_155  BQYACTR_anonymous);

A68_VOID  LQYACTR_endroutine(A68_204  Routine, A68_154 * Result);

A_STATIC A68_VOID  FSYACTR_globalenviron(A68_109  *ReturnedValue);

A68_VOID  JSYACTR_startmodule(A68_VC  Uniquename, A68_VC  Modulename);

A68_VOID  WTYACTR_startdecsmodule(A68_VC  Uniquename, A68_VC  Modulename);

A68_VOID  WVYACTR_startprocmodule(A68_204  Routine, A68_VC  Uniquename, A68_VC  Modulename, A68_154 * Resultvalue);

A68_VOID  AWYACTR_startcompositionmodule(A68_VC  Uniquename, A68_VC  Modulename, A68_BOOL  Partialcomposition);

A68_VOID  BWYACTR_endmodule(void);

A68_VOID  BXYACTR_enddecsmodule(A68_VC  Modulename);

A68_VOID  KXYACTR_completeprogram(A68_VC  Modulename, A68_104 * Autocomplabel);

A_STATIC A68_155 * CQYACTR_assignment(A68_155 * AQYACTR_anonymous, A68_155  BQYACTR_anonymous)
{ 
A68_155  DQYACTR;  /* united object - for case conformity */
A68_VC  EQYACTR_anonymous A_UNUSED = {0};
A68_VC  FQYACTR;  /* OPERATORS - copy to flex */
A68_301 * GQYACTR;  /* YIELD */
A68_155 * HQYACTR;  /* clause result */
{ 
(*AQYACTR_anonymous) = BQYACTR_anonymous;
DQYACTR = BQYACTR_anonymous ;
switch ( DQYACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
EQYACTR_anonymous = (DQYACTR.data.mode6);
GQYACTR = &(AQYACTR_anonymous-> data.mode6) ;
(void)((*GQYACTR) = A_VCOPY(EQYACTR_anonymous,FQYACTR,A68_CHAR ));
break;
default: 
/*SKIP*/;
break;
} 
HQYACTR = AQYACTR_anonymous;
} 
return( HQYACTR );
} 
#undef NL

A_STATIC A68_154 * XPYACTR_assignment(A68_154 * VPYACTR_anonymous, A68_154  WPYACTR_anonymous)
{ 
A68_INT * YPYACTR;  /* YIELD */
A68_BITS * ZPYACTR;  /* YIELD */
A68_154 * IQYACTR;  /* clause result */
{ 
YPYACTR = (&(VPYACTR_anonymous->Mode)) ;
(*YPYACTR) = WPYACTR_anonymous.Mode;
ZPYACTR = (&(VPYACTR_anonymous->Info)) ;
(*ZPYACTR) = WPYACTR_anonymous.Info;
(void)(CQYACTR_assignment((&(VPYACTR_anonymous->Extra)), WPYACTR_anonymous.Extra));
IQYACTR = VPYACTR_anonymous;
} 
return( IQYACTR );
} 
#undef NL

A_STATIC A68_VOID  GGYACTR_writeinitialopencurly(void)
{ 
A68_INT  HGYACTR_codestream A_UNUSED = {0};
A68_276  IGYACTR;  /* collateral clause result */
A68_121  LGYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  MGYACTR;  /* YIELD */
A68_121  NGYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  OGYACTR;  /* OPERATORS - istruct -> vector */
A68_121  PGYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  QGYACTR;  /* YIELD */
A68_120  RGYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(writeinitialopencurly);
{ 
HGYACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 57: */
MGYACTR = KGYACTR ;
IGYACTR.data[0] = A_UNITE(LGYACTR,mode2,2,MGYACTR);
IGYACTR.data[1] = A_UNITE(NGYACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(OGYACTR,IGYACTR,2,A68_121 ), HGYACTR_codestream));
 /* line 58: */
 /* line 59: */
QGYACTR = QSLACTR_locdecstream(VRLACTR_currentlevel()) ;
(void)(MDMACTR_writecstream(A_HVEC(RGYACTR,A_UNITE(PGYACTR,mode3,3,QGYACTR),A68_121 ), HGYACTR_codestream));
} 
A_PROC_EXIT(writeinitialopencurly);
return;
} 
#undef NL

A_STATIC A68_VOID  SGYACTR_writeclosingcurly(void)
{ 
A68_INT  TGYACTR_codestream A_UNUSED = {0};
A68_INT  UGYACTR_locdecstream A_UNUSED = {0};
A68_INT  VGYACTR_labelstream A_UNUSED = {0};
A68_278  WGYACTR;  /* collateral clause result */
A68_121  ZGYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  AHYACTR;  /* YIELD */
A68_121  BHYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  EHYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  FHYACTR;  /* YIELD */
A68_121  GHYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  HHYACTR;  /* OPERATORS - istruct -> vector */
A68_121  IHYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  JHYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_121  KHYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  LHYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(writeclosingcurly);
{ 
TGYACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 70: */
UGYACTR_locdecstream = QSLACTR_locdecstream(VRLACTR_currentlevel());
 /* line 71: */
VGYACTR_labelstream = TSLACTR_labelstream(VRLACTR_currentlevel());
 /* line 73: */
AHYACTR = YGYACTR ;
WGYACTR.data[0] = A_UNITE(ZGYACTR,mode2,2,AHYACTR);
WGYACTR.data[1] = A_UNITE(BHYACTR,mode4,4,EIAACTR_cnewline);
FHYACTR = DHYACTR ;
WGYACTR.data[2] = A_UNITE(EHYACTR,mode2,2,FHYACTR);
WGYACTR.data[3] = A_UNITE(GHYACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(HHYACTR,WGYACTR,4,A68_121 ), TGYACTR_codestream));
 /* line 74: */
(void)(CDWACTR_endroutineprototype(VRLACTR_currentlevel()));
 /* line 75: */
(void)(MDMACTR_writecstream(A_HVEC(JHYACTR,A_UNITE(IHYACTR,mode3,3,VGYACTR_labelstream),A68_121 ), UGYACTR_locdecstream));
 /* line 76: */
 /* line 77: */
(void)(MDMACTR_writecstream(A_HVEC(LHYACTR,A_UNITE(KHYACTR,mode3,3,TGYACTR_codestream),A68_121 ), VGYACTR_labelstream));
} 
A_PROC_EXIT(writeclosingcurly);
return;
} 
#undef NL

A_STATIC A68_VOID  NHYACTR_routine_entry_hook(A68_VC  Routinename)
{ 
A68_INT  OHYACTR;  /* YIELD */
A68_278  PHYACTR;  /* collateral clause result */
A68_121  SHYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  THYACTR;  /* YIELD */
A68_121  UHYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  XHYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  YHYACTR;  /* YIELD */
A68_121  ZHYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  AIYACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(routine_entry_hook);
 /* line 80: */
 /* line 81: */
 /* line 82: */
OHYACTR = 1 ;
if (A_VINDEX(Routinename,OHYACTR)!='!')
{ 
THYACTR = RHYACTR ;
PHYACTR.data[0] = A_UNITE(SHYACTR,mode2,2,THYACTR);
PHYACTR.data[1] = A_UNITE(UHYACTR,mode2,2,Routinename);
YHYACTR = WHYACTR ;
PHYACTR.data[2] = A_UNITE(XHYACTR,mode2,2,YHYACTR);
PHYACTR.data[3] = A_UNITE(ZHYACTR,mode4,4,EIAACTR_cnewline);
 /* line 83: */
(void)(MDMACTR_writecstream(A_HISVEC(AIYACTR,PHYACTR,4,A68_121 ), NSLACTR_codestream(VRLACTR_currentlevel())));
} 
A_PROC_EXIT(routine_entry_hook);
return;
} 
#undef NL

A_STATIC A68_VOID  CIYACTR_routine_exit_hook(A68_VC  Routinename)
{ 
A68_INT  DIYACTR;  /* YIELD */
A68_278  EIYACTR;  /* collateral clause result */
A68_121  HIYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  IIYACTR;  /* YIELD */
A68_121  JIYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  MIYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  NIYACTR;  /* YIELD */
A68_121  OIYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  PIYACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(routine_exit_hook);
 /* line 86: */
 /* line 87: */
 /* line 88: */
DIYACTR = 1 ;
if (A_VINDEX(Routinename,DIYACTR)!='!')
{ 
IIYACTR = GIYACTR ;
EIYACTR.data[0] = A_UNITE(HIYACTR,mode2,2,IIYACTR);
EIYACTR.data[1] = A_UNITE(JIYACTR,mode2,2,Routinename);
NIYACTR = LIYACTR ;
EIYACTR.data[2] = A_UNITE(MIYACTR,mode2,2,NIYACTR);
EIYACTR.data[3] = A_UNITE(OIYACTR,mode4,4,EIAACTR_cnewline);
 /* line 89: */
(void)(MDMACTR_writecstream(A_HISVEC(PIYACTR,EIYACTR,4,A68_121 ), NSLACTR_codestream(VRLACTR_currentlevel())));
} 
A_PROC_EXIT(routine_exit_hook);
return;
} 
#undef NL

A_STATIC A68_VOID  QIYACTR_writeconfiginfo(void)
{ 
A68_278  RIYACTR;  /* collateral clause result */
A68_121  SIYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  VIYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  WIYACTR;  /* YIELD */
A68_121  XIYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  AJYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  BJYACTR;  /* YIELD */
A68_120  CJYACTR;  /* OPERATORS - istruct -> vector */
A68_VC  DJYACTR_arg A_UNUSED = {0};
A68_36  EJYACTR;  /* avoid structure result */
A68_VC * FJYACTR;  /* forall control - []x */
A68_INT  GJYACTR;  /* forall loop counter */
A68_283  HJYACTR;  /* collateral clause result */
A68_121  IJYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  JJYACTR;  /* YIELD */
A68_121  KJYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  NJYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  OJYACTR;  /* YIELD */
A68_120  PJYACTR;  /* OPERATORS - istruct -> vector */
A68_283  QJYACTR;  /* collateral clause result */
A68_121  TJYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  UJYACTR;  /* YIELD */
A68_121  VJYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  YJYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ZJYACTR;  /* YIELD */
A68_120  AKYACTR;  /* OPERATORS - istruct -> vector */
A68_184 * BKYACTR_env A_UNUSED = {0};
A68_285  CKYACTR;  /* collateral clause result */
A68_121  DKYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  EKYACTR;  /* YIELD */
A68_121  FKYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  GKYACTR;  /* YIELD */
A68_121  HKYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  IKYACTR;  /* YIELD */
A68_121  JKYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  KKYACTR;  /* YIELD */
A68_121  NKYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  OKYACTR;  /* YIELD */
A68_120  PKYACTR;  /* OPERATORS - istruct -> vector */
A68_283  QKYACTR;  /* collateral clause result */
A68_121  TKYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  UKYACTR;  /* YIELD */
A68_121  VKYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  YKYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ZKYACTR;  /* YIELD */
A68_120  ALYACTR;  /* OPERATORS - istruct -> vector */
A68_183 * BLYACTR_mlist A_UNUSED = {0};
A68_283  CLYACTR;  /* collateral clause result */
A68_121  DLYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  ELYACTR;  /* YIELD */
A68_121  FLYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  GLYACTR;  /* YIELD */
A68_121  JLYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  KLYACTR;  /* YIELD */
A68_120  LLYACTR;  /* OPERATORS - istruct -> vector */
A68_288  MLYACTR;  /* collateral clause result */
A68_121  PLYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  QLYACTR;  /* YIELD */
A68_121  RLYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  ULYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  VLYACTR;  /* YIELD */
A68_121  WLYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  ZLYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  AMYACTR;  /* YIELD */
A68_121  BMYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  CMYACTR;  /* OPERATORS - istruct -> vector */
A68_297  DMYACTR;  /* collateral clause result */
A68_121  GMYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  HMYACTR;  /* YIELD */
A68_121  IMYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  LMYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  MMYACTR;  /* YIELD */
A68_121  NMYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  OMYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_CHAR  PMYACTR;  /* YIELD */
A68_121  QMYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  TMYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  UMYACTR;  /* YIELD */
A68_121  VMYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  YMYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ZMYACTR;  /* YIELD */
A68_VC  ANYACTR;  /* avoid structure result */
A68_121  BNYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  ENYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  FNYACTR;  /* YIELD */
A68_121  GNYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  JNYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  KNYACTR;  /* YIELD */
A68_121  LNYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  MNYACTR;  /* YIELD */
A68_121  PNYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  QNYACTR;  /* YIELD */
A68_121  RNYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  UNYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  VNYACTR;  /* YIELD */
A68_VC  WNYACTR;  /* OPERATORS - istruct -> vector */
A68_105  XNYACTR;  /* OPERATORS - istruct -> vector */
A68_121  YNYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ZNYACTR;  /* YIELD */
A68_VC  AOYACTR;  /* avoid structure result */
A68_121  BOYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  EOYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  FOYACTR;  /* YIELD */
A68_121  GOYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  JOYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  KOYACTR;  /* YIELD */
A68_121  NOYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  OOYACTR;  /* YIELD */
A68_INT  POYACTR;  /* YIELD */
A68_VC  QOYACTR;  /* avoid structure result */
A68_121  ROYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  UOYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  VOYACTR;  /* YIELD */
A68_121  WOYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  ZOYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  APYACTR;  /* YIELD */
A68_121  BPYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  EPYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  FPYACTR;  /* YIELD */
A68_121  GPYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  JPYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  KPYACTR;  /* YIELD */
A68_121  LPYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  MPYACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(writeconfiginfo);
{ 
 /* line 97: */
RIYACTR.data[0] = A_UNITE(SIYACTR,mode4,4,EIAACTR_cnewline);
WIYACTR = UIYACTR ;
RIYACTR.data[1] = A_UNITE(VIYACTR,mode2,2,WIYACTR);
 /* line 99: */
RIYACTR.data[2] = A_UNITE(XIYACTR,mode4,4,EIAACTR_cnewline);
BJYACTR = ZIYACTR ;
RIYACTR.data[3] = A_UNITE(AJYACTR,mode2,2,BJYACTR);
(void)(MDMACTR_writecstream(A_HISVEC(CJYACTR,RIYACTR,4,A68_121 ), QSLACTR_locdecstream(0)));
 /* line 101: */
 /* line 102: */
RHCAOSF_get_args(  &EJYACTR );
GJYACTR = EJYACTR.upb -1;
FJYACTR = EJYACTR.data;
for (;GJYACTR-- >= 0;
(FJYACTR++
) )
{
DJYACTR_arg = *FJYACTR;
 /* line 103: */
JJYACTR = '\"' ;
HJYACTR.data[0] = A_UNITE(IJYACTR,mode1,1,JJYACTR);
HJYACTR.data[1] = A_UNITE(KJYACTR,mode2,2,DJYACTR_arg);
OJYACTR = MJYACTR ;
HJYACTR.data[2] = A_UNITE(NJYACTR,mode2,2,OJYACTR);
 /* line 104: */
(void)(MDMACTR_writecstream(A_HISVEC(PJYACTR,HJYACTR,3,A68_121 ), QSLACTR_locdecstream(0)));
}
 /* line 106: */
 /* line 107: */
UJYACTR = SJYACTR ;
QJYACTR.data[0] = A_UNITE(TJYACTR,mode2,2,UJYACTR);
 /* line 109: */
QJYACTR.data[1] = A_UNITE(VJYACTR,mode4,4,EIAACTR_cnewline);
ZJYACTR = XJYACTR ;
QJYACTR.data[2] = A_UNITE(YJYACTR,mode2,2,ZJYACTR);
(void)(MDMACTR_writecstream(A_HISVEC(AKYACTR,QJYACTR,3,A68_121 ), QSLACTR_locdecstream(0)));
 /* line 111: */
BKYACTR_env = (*(&((&IYIACTR_config_info)->Environment)));
 /* line 112: */
for ( ;; )
{ 
 /* line 113: */
 /* line 114: */
if ( !((BKYACTR_env!=DYIACTR_nil_envinfo)) ) break;
 /* line 115: */
EKYACTR = '\"' ;
CKYACTR.data[0] = A_UNITE(DKYACTR,mode1,1,EKYACTR);
GKYACTR = (*(&(BKYACTR_env->Env_name))) ;
CKYACTR.data[1] = A_UNITE(FKYACTR,mode2,2,GKYACTR);
IKYACTR = '=' ;
CKYACTR.data[2] = A_UNITE(HKYACTR,mode1,1,IKYACTR);
 /* line 116: */
KKYACTR = (*(&(BKYACTR_env->Env_value))) ;
CKYACTR.data[3] = A_UNITE(JKYACTR,mode2,2,KKYACTR);
OKYACTR = MKYACTR ;
CKYACTR.data[4] = A_UNITE(NKYACTR,mode2,2,OKYACTR);
(void)(MDMACTR_writecstream(A_HISVEC(PKYACTR,CKYACTR,5,A68_121 ), QSLACTR_locdecstream(0)));
 /* line 117: */
 /* line 118: */
(void)(BKYACTR_env = (*(&(BKYACTR_env->Next))));
}
 /* line 120: */
 /* line 121: */
UKYACTR = SKYACTR ;
QKYACTR.data[0] = A_UNITE(TKYACTR,mode2,2,UKYACTR);
 /* line 123: */
QKYACTR.data[1] = A_UNITE(VKYACTR,mode4,4,EIAACTR_cnewline);
ZKYACTR = XKYACTR ;
QKYACTR.data[2] = A_UNITE(YKYACTR,mode2,2,ZKYACTR);
(void)(MDMACTR_writecstream(A_HISVEC(ALYACTR,QKYACTR,3,A68_121 ), QSLACTR_locdecstream(0)));
 /* line 125: */
BLYACTR_mlist = (*(&((&IYIACTR_config_info)->Used_modules)));
 /* line 126: */
for ( ;; )
{ 
 /* line 127: */
 /* line 128: */
if ( !((BLYACTR_mlist!=CYIACTR_nil_modinfolist)) ) break;
 /* line 129: */
ELYACTR = '\"' ;
CLYACTR.data[0] = A_UNITE(DLYACTR,mode1,1,ELYACTR);
 /* line 130: */
GLYACTR = (*(&(BLYACTR_mlist->Modinfo_file))) ;
CLYACTR.data[1] = A_UNITE(FLYACTR,mode2,2,GLYACTR);
KLYACTR = ILYACTR ;
CLYACTR.data[2] = A_UNITE(JLYACTR,mode2,2,KLYACTR);
(void)(MDMACTR_writecstream(A_HISVEC(LLYACTR,CLYACTR,3,A68_121 ), QSLACTR_locdecstream(0)));
 /* line 131: */
 /* line 132: */
(void)(BLYACTR_mlist = (*(&(BLYACTR_mlist->Next))));
}
 /* line 134: */
 /* line 135: */
QLYACTR = OLYACTR ;
MLYACTR.data[0] = A_UNITE(PLYACTR,mode2,2,QLYACTR);
 /* line 136: */
MLYACTR.data[1] = A_UNITE(RLYACTR,mode4,4,EIAACTR_cnewline);
VLYACTR = TLYACTR ;
MLYACTR.data[2] = A_UNITE(ULYACTR,mode2,2,VLYACTR);
 /* line 137: */
MLYACTR.data[3] = A_UNITE(WLYACTR,mode4,4,EIAACTR_cnewline);
 /* line 138: */
AMYACTR = YLYACTR ;
MLYACTR.data[4] = A_UNITE(ZLYACTR,mode2,2,AMYACTR);
MLYACTR.data[5] = A_UNITE(BMYACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(CMYACTR,MLYACTR,6,A68_121 ), QSLACTR_locdecstream(0)));
 /* line 140: */
 /* line 141: */
HMYACTR = FMYACTR ;
DMYACTR.data[0] = A_UNITE(GMYACTR,mode2,2,HMYACTR);
 /* line 142: */
DMYACTR.data[1] = A_UNITE(IMYACTR,mode4,4,EIAACTR_cnewline);
MMYACTR = KMYACTR ;
DMYACTR.data[2] = A_UNITE(LMYACTR,mode2,2,MMYACTR);
DMYACTR.data[3] = A_UNITE(NMYACTR,mode2,2,BRIACTR_current_directory);
PMYACTR = '/' ;
DMYACTR.data[4] = A_UNITE(OMYACTR,mode1,1,PMYACTR);
DMYACTR.data[5] = A_UNITE(QMYACTR,mode2,2,XQIACTR_sourcefilename);
UMYACTR = SMYACTR ;
DMYACTR.data[6] = A_UNITE(TMYACTR,mode2,2,UMYACTR);
 /* line 143: */
DMYACTR.data[7] = A_UNITE(VMYACTR,mode4,4,EIAACTR_cnewline);
ZMYACTR = XMYACTR ;
DMYACTR.data[8] = A_UNITE(YMYACTR,mode2,2,ZMYACTR);
YPBAOSF_local_time_str( (*(&((&IYIACTR_config_info)->Translationtime))), &ANYACTR );
DMYACTR.data[9] = A_UNITE(BNYACTR,mode2,2,ANYACTR);
FNYACTR = DNYACTR ;
DMYACTR.data[10] = A_UNITE(ENYACTR,mode2,2,FNYACTR);
 /* line 144: */
DMYACTR.data[11] = A_UNITE(GNYACTR,mode4,4,EIAACTR_cnewline);
KNYACTR = INYACTR ;
DMYACTR.data[12] = A_UNITE(JNYACTR,mode2,2,KNYACTR);
MNYACTR = (*(&((&IYIACTR_config_info)->Version))) ;
DMYACTR.data[13] = A_UNITE(LNYACTR,mode2,2,MNYACTR);
QNYACTR = ONYACTR ;
DMYACTR.data[14] = A_UNITE(PNYACTR,mode2,2,QNYACTR);
 /* line 145: */
DMYACTR.data[15] = A_UNITE(RNYACTR,mode4,4,EIAACTR_cnewline);
VNYACTR = TNYACTR ;
DMYACTR.data[16] = A_UNITE(UNYACTR,mode2,2,VNYACTR);
 /* line 146: */
XNYACTR = (*(&((&IYIACTR_config_info)->Nameseed))) ;
ZNYACTR = A_HISVEC(WNYACTR,XNYACTR,7,A68_CHAR ) ;
DMYACTR.data[17] = A_UNITE(YNYACTR,mode2,2,ZNYACTR);
EMMACTR_nameseedoriginstring( (*(&((&IYIACTR_config_info)->Nameseedorigin))), &AOYACTR );
DMYACTR.data[18] = A_UNITE(BOYACTR,mode2,2,AOYACTR);
FOYACTR = DOYACTR ;
DMYACTR.data[19] = A_UNITE(EOYACTR,mode2,2,FOYACTR);
 /* line 147: */
DMYACTR.data[20] = A_UNITE(GOYACTR,mode4,4,EIAACTR_cnewline);
 /* line 148: */
KOYACTR = IOYACTR ;
DMYACTR.data[21] = A_UNITE(JOYACTR,mode2,2,KOYACTR);
if (RCPACTR_specs.dim[0].upb==0)
{ 
OOYACTR = MOYACTR ;
DMYACTR.data[22] = A_UNITE(NOYACTR,mode2,2,OOYACTR);
} 
else
{ 
POYACTR = 1 ;
YPBAOSF_local_time_str( (*(&((&A_R1INDEX(RCPACTR_specs,POYACTR))->Timeoflastchange))), &QOYACTR );
DMYACTR.data[22] = A_UNITE(ROYACTR,mode2,2,QOYACTR);
} 
VOYACTR = TOYACTR ;
DMYACTR.data[23] = A_UNITE(UOYACTR,mode2,2,VOYACTR);
 /* line 149: */
DMYACTR.data[24] = A_UNITE(WOYACTR,mode4,4,EIAACTR_cnewline);
APYACTR = YOYACTR ;
DMYACTR.data[25] = A_UNITE(ZOYACTR,mode2,2,APYACTR);
 /* line 150: */
DMYACTR.data[26] = A_UNITE(BPYACTR,mode4,4,EIAACTR_cnewline);
FPYACTR = DPYACTR ;
DMYACTR.data[27] = A_UNITE(EPYACTR,mode2,2,FPYACTR);
 /* line 151: */
DMYACTR.data[28] = A_UNITE(GPYACTR,mode4,4,EIAACTR_cnewline);
 /* line 152: */
KPYACTR = IPYACTR ;
DMYACTR.data[29] = A_UNITE(JPYACTR,mode2,2,KPYACTR);
DMYACTR.data[30] = A_UNITE(LPYACTR,mode4,4,EIAACTR_cnewline);
 /* line 153: */
(void)(MDMACTR_writecstream(A_HISVEC(MPYACTR,DMYACTR,31,A68_121 ), NSLACTR_codestream(0)));
} 
A_PROC_EXIT(writeconfiginfo);
return;
} 
#undef NL
 /* line 157: */
 /* line 158: */
 /* line 159: */
 /* line 161: */

A68_VOID  SPYACTR_startroutine(A68_204  Routine, A68_109  Environ, A68_92  Paramdecnos, A68_INT  Resultmode, A68_154 * Resultvalue)
{ 
A68_154  TPYACTR;  /* collateral clause result */
A68_155  UPYACTR = {0};  /* OPERATORS - mode -> union mode */
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
(void)(SRWACTR_rddec(Routine.Name, Routine.Mode, Paramdecnos, Resultmode, Routine.Rdenno, Environ, Routine.Props));
 /* line 172: */
(void)(GGYACTR_writeinitialopencurly());
 /* line 173: */
(void)(NHYACTR_routine_entry_hook(Routine.Name));
 /* line 175: */
TPYACTR.Mode = Resultmode;
TPYACTR.Info = PKJACTR_defaultinfo;
 /* line 176: */
TPYACTR.Extra = A_EMPTY(UPYACTR,3);
(void)(XPYACTR_assignment(Resultvalue, (*XPYACTR_assignment(A_LOC(A68_154 ), TPYACTR))));
} 
A_PROC_EXIT(startroutine);
return;
} 
#undef NL

A68_VOID  LQYACTR_endroutine(A68_204  Routine, A68_154 * Result)
{ 
A68_BITS  MQYACTR;  /* ADICOPS - >= */
A68_BOOL  NQYACTR_generator A_UNUSED = {0};
A68_INT  OQYACTR_codestream A_UNUSED = {0};
A68_BOOL  PQYACTR;  /* optbool result */
A68_BOOL  QQYACTR_usetempforresult A_UNUSED = {0};
A68_276  RQYACTR;  /* collateral clause result */
A68_121  UQYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  VQYACTR;  /* YIELD */
A68_121  WQYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  XQYACTR;  /* OPERATORS - istruct -> vector */
A68_278  YQYACTR;  /* collateral clause result */
A68_121  BRYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  CRYACTR;  /* YIELD */
A68_VC  DRYACTR;  /* avoid structure result */
A68_121  ERYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  HRYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  IRYACTR;  /* YIELD */
A68_121  JRYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  KRYACTR;  /* OPERATORS - istruct -> vector */
A68_276  LRYACTR;  /* collateral clause result */
A68_121  ORYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  PRYACTR;  /* YIELD */
A68_121  QRYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  RRYACTR;  /* OPERATORS - istruct -> vector */
A68_278  SRYACTR;  /* collateral clause result */
A68_121  VRYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  WRYACTR;  /* YIELD */
A68_VC  XRYACTR;  /* avoid structure result */
A68_121  YRYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  BSYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  CSYACTR;  /* YIELD */
A68_121  DSYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  ESYACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(endroutine);
 /* line 179: */
 /* line 180: */
{ 
MQYACTR = Routine.Props ;
NQYACTR_generator = A_LB_GE(MQYACTR,FDAACTR_genprocbit);
 /* line 181: */
OQYACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 182: */
 /* line 183: */
 /* line 184: */
if (NQYACTR_generator)
{ 
/*SKIP*/;
} 
else
{ 
 /* line 185: */
if (OTMACTR_dynamic((*(&(Result->Mode)))))
{ 
 /* line 186: */
 /* line 187: */
if (ARMACTR_isarray((*(&(Result->Mode)))))
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
(void)(CIYACTR_routine_exit_hook(Routine.Name));
 /* line 195: */
 /* line 196: */
PQYACTR = NQIACTR_nostructresultoption;
if ( PQYACTR )
{PQYACTR = VSMACTR_iscstruct((*(&(Result->Mode))));
}
QQYACTR_usetempforresult = PQYACTR;
 /* line 198: */
 /* line 199: */
if ((*(&(Result->Mode)))==UEAACTR_voidmode)
{ 
VQYACTR = TQYACTR ;
RQYACTR.data[0] = A_UNITE(UQYACTR,mode2,2,VQYACTR);
RQYACTR.data[1] = A_UNITE(WQYACTR,mode4,4,EIAACTR_cnewline);
 /* line 200: */
 /* line 201: */
(void)(MDMACTR_writecstream(A_HISVEC(XQYACTR,RQYACTR,2,A68_121 ), OQYACTR_codestream));
} 
else
{ 
 /* line 202: */
if (QQYACTR_usetempforresult)
{ 
 /* line 203: */
CRYACTR = ARYACTR ;
YQYACTR.data[0] = A_UNITE(BRYACTR,mode2,2,CRYACTR);
 /* line 204: */
UZPACTR_getcfragment( Result, &DRYACTR );
YQYACTR.data[1] = A_UNITE(ERYACTR,mode2,2,DRYACTR);
IRYACTR = GRYACTR ;
YQYACTR.data[2] = A_UNITE(HRYACTR,mode2,2,IRYACTR);
YQYACTR.data[3] = A_UNITE(JRYACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(KRYACTR,YQYACTR,4,A68_121 ), OQYACTR_codestream));
 /* line 205: */
PRYACTR = NRYACTR ;
LRYACTR.data[0] = A_UNITE(ORYACTR,mode2,2,PRYACTR);
LRYACTR.data[1] = A_UNITE(QRYACTR,mode4,4,EIAACTR_cnewline);
 /* line 206: */
 /* line 207: */
(void)(MDMACTR_writecstream(A_HISVEC(RRYACTR,LRYACTR,2,A68_121 ), OQYACTR_codestream));
} 
else
{ 
 /* line 208: */
WRYACTR = URYACTR ;
SRYACTR.data[0] = A_UNITE(VRYACTR,mode2,2,WRYACTR);
 /* line 209: */
UZPACTR_getcfragment( Result, &XRYACTR );
SRYACTR.data[1] = A_UNITE(YRYACTR,mode2,2,XRYACTR);
CSYACTR = ASYACTR ;
SRYACTR.data[2] = A_UNITE(BSYACTR,mode2,2,CSYACTR);
SRYACTR.data[3] = A_UNITE(DSYACTR,mode4,4,EIAACTR_cnewline);
 /* line 210: */
(void)(MDMACTR_writecstream(A_HISVEC(ESYACTR,SRYACTR,4,A68_121 ), OQYACTR_codestream));
} 
} 
 /* line 212: */
(void)(SGYACTR_writeclosingcurly());
 /* line 214: */
 /* line 215: */
(void)(OQWACTR_completerddec());
} 
A_PROC_EXIT(endroutine);
return;
} 
#undef NL

A_STATIC A68_VOID  FSYACTR_globalenviron(A68_109  *ReturnedValue)
{ 
A68_109  GSYACTR;  /* clause result */
A_PROC_ENTRY(globalenviron);
GSYACTR = (*(&((&A_R1INDEX(WPKACTR_ids,GAAACTR_globalidno))->Environ)));
A_PROC_EXIT(globalenviron);
*ReturnedValue = (GSYACTR);
return;
} 
#undef NL

A68_VOID  JSYACTR_startmodule(A68_VC  Uniquename, A68_VC  Modulename)
{ 
A68_INT  KSYACTR_codestream A_UNUSED = {0};
A68_276  LSYACTR;  /* collateral clause result */
A68_121  OSYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  PSYACTR;  /* YIELD */
A68_121  QSYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  RSYACTR;  /* OPERATORS - istruct -> vector */
A68_276  USYACTR;  /* collateral clause result */
A68_121  XSYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  YSYACTR;  /* YIELD */
A68_121  ZSYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  ATYACTR;  /* OPERATORS - istruct -> vector */
A68_288  BTYACTR;  /* collateral clause result */
A68_121  ETYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  FTYACTR;  /* YIELD */
A68_121  GTYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  JTYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  KTYACTR;  /* YIELD */
A68_121  LTYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  OTYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  PTYACTR;  /* YIELD */
A68_121  QTYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  RTYACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(startmodule);
 /* line 223: */
 /* line 224: */
{ 
KSYACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 226: */
 /* line 229: */
 /* line 230: */
PSYACTR = NSYACTR ;
LSYACTR.data[0] = A_UNITE(OSYACTR,mode2,2,PSYACTR);
LSYACTR.data[1] = A_UNITE(QSYACTR,mode4,4,EIAACTR_cnewline);
 /* line 231: */
(void)(MDMACTR_writecstream(A_HISVEC(RSYACTR,LSYACTR,2,A68_121 ), KSYACTR_codestream));
 /* line 232: */
 /* line 233: */
(void)(CCWACTR_noteroutineprototype(VRLACTR_currentlevel(), TSYACTR));
 /* line 235: */
(void)(GGYACTR_writeinitialopencurly());
 /* line 240: */
YSYACTR = WSYACTR ;
USYACTR.data[0] = A_UNITE(XSYACTR,mode2,2,YSYACTR);
USYACTR.data[1] = A_UNITE(ZSYACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(ATYACTR,USYACTR,2,A68_121 ), KSYACTR_codestream));
 /* line 242: */
(void)(IUPACTR_processcontexts());
 /* line 244: */
(void)(QIYACTR_writeconfiginfo());
 /* line 246: */
 /* line 247: */
FTYACTR = DTYACTR ;
BTYACTR.data[0] = A_UNITE(ETYACTR,mode2,2,FTYACTR);
 /* line 250: */
BTYACTR.data[1] = A_UNITE(GTYACTR,mode4,4,EIAACTR_cnewline);
KTYACTR = ITYACTR ;
BTYACTR.data[2] = A_UNITE(JTYACTR,mode2,2,KTYACTR);
 /* line 251: */
BTYACTR.data[3] = A_UNITE(LTYACTR,mode4,4,EIAACTR_cnewline);
 /* line 252: */
PTYACTR = NTYACTR ;
BTYACTR.data[4] = A_UNITE(OTYACTR,mode2,2,PTYACTR);
BTYACTR.data[5] = A_UNITE(QTYACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(RTYACTR,BTYACTR,6,A68_121 ), KSYACTR_codestream));
 /* line 254: */
 /* line 255: */
(void)(NHYACTR_routine_entry_hook(TTYACTR));
} 
A_PROC_EXIT(startmodule);
return;
} 
#undef NL

A68_VOID  WTYACTR_startdecsmodule(A68_VC  Uniquename, A68_VC  Modulename)
{ 
A68_INT  XTYACTR_codestream A_UNUSED = {0};
A68_INT  YTYACTR_locdecstream A_UNUSED = {0};
A68_288  ZTYACTR;  /* collateral clause result */
A68_121  CUYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  DUYACTR;  /* YIELD */
A68_121  EUYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  HUYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  IUYACTR;  /* YIELD */
A68_121  JUYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  MUYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  NUYACTR;  /* YIELD */
A68_121  OUYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  PUYACTR;  /* OPERATORS - istruct -> vector */
A68_276  UUYACTR;  /* collateral clause result */
A68_121  XUYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  YUYACTR;  /* YIELD */
A68_121  ZUYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  AVYACTR;  /* OPERATORS - istruct -> vector */
A68_278  BVYACTR;  /* collateral clause result */
A68_121  EVYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  FVYACTR;  /* YIELD */
A68_121  GVYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  JVYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  KVYACTR;  /* YIELD */
A68_121  LVYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  MVYACTR;  /* OPERATORS - istruct -> vector */
A68_316  NVYACTR;  /* collateral clause result */
A68_36  QVYACTR;  /* OPERATORS - istruct -> vector */
A68_VC  RVYACTR;  /* avoid structure result */
A_PROC_ENTRY(startdecsmodule);
 /* line 265: */
 /* line 266: */
{ 
XTYACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 267: */
YTYACTR_locdecstream = QSLACTR_locdecstream(VRLACTR_currentlevel());
 /* line 271: */
 /* line 272: */
DUYACTR = BUYACTR ;
ZTYACTR.data[0] = A_UNITE(CUYACTR,mode2,2,DUYACTR);
ZTYACTR.data[1] = A_UNITE(EUYACTR,mode2,2,Uniquename);
IUYACTR = GUYACTR ;
ZTYACTR.data[2] = A_UNITE(HUYACTR,mode2,2,IUYACTR);
ZTYACTR.data[3] = A_UNITE(JUYACTR,mode2,2,Modulename);
 /* line 274: */
NUYACTR = LUYACTR ;
ZTYACTR.data[4] = A_UNITE(MUYACTR,mode2,2,NUYACTR);
ZTYACTR.data[5] = A_UNITE(OUYACTR,mode4,4,EIAACTR_cnewline);
 /* line 275: */
(void)(MDMACTR_writecstream(A_HISVEC(PUYACTR,ZTYACTR,6,A68_121 ), XTYACTR_codestream));
 /* line 276: */
(void)(CCWACTR_noteroutineprototype(VRLACTR_currentlevel(), A_VC_PLUS(A_VC_PLUS(SUYACTR,Uniquename),TUYACTR)));
 /* line 278: */
(void)(GGYACTR_writeinitialopencurly());
 /* line 280: */
 /* line 281: */
 /* line 282: */
YUYACTR = WUYACTR ;
UUYACTR.data[0] = A_UNITE(XUYACTR,mode2,2,YUYACTR);
UUYACTR.data[1] = A_UNITE(ZUYACTR,mode4,4,EIAACTR_cnewline);
 /* line 283: */
(void)(MDMACTR_writecstream(A_HISVEC(AVYACTR,UUYACTR,2,A68_121 ), YTYACTR_locdecstream));
 /* line 285: */
 /* line 286: */
FVYACTR = DVYACTR ;
BVYACTR.data[0] = A_UNITE(EVYACTR,mode2,2,FVYACTR);
 /* line 287: */
BVYACTR.data[1] = A_UNITE(GVYACTR,mode4,4,EIAACTR_cnewline);
 /* line 288: */
KVYACTR = IVYACTR ;
BVYACTR.data[2] = A_UNITE(JVYACTR,mode2,2,KVYACTR);
BVYACTR.data[3] = A_UNITE(LVYACTR,mode4,4,EIAACTR_cnewline);
 /* line 289: */
(void)(MDMACTR_writecstream(A_HISVEC(MVYACTR,BVYACTR,4,A68_121 ), XTYACTR_codestream));
 /* line 291: */
(void)(IUPACTR_processcontexts());
 /* line 293: */
(void)(QIYACTR_writeconfiginfo());
 /* line 295: */
NVYACTR.data[0] = PVYACTR;
NVYACTR.data[1] = Modulename;
 /* line 296: */
JDAAOSF_concat( A_HISVEC(QVYACTR,NVYACTR,2,A68_VC ), &RVYACTR );
(void)(NHYACTR_routine_entry_hook(RVYACTR));
} 
A_PROC_EXIT(startdecsmodule);
return;
} 
#undef NL
 /* line 300: */
 /* line 302: */

A68_VOID  WVYACTR_startprocmodule(A68_204  Routine, A68_VC  Uniquename, A68_VC  Modulename, A68_154 * Resultvalue)
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

A68_VOID  AWYACTR_startcompositionmodule(A68_VC  Uniquename, A68_VC  Modulename, A68_BOOL  Partialcomposition)
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

A68_VOID  BWYACTR_endmodule(void)
{ 
A68_322  EWYACTR;  /* collateral clause result */
A68_121  HWYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  IWYACTR;  /* YIELD */
A68_121  JWYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  MWYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  NWYACTR;  /* YIELD */
A68_121  OWYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  RWYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  SWYACTR;  /* YIELD */
A68_121  TWYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_121  WWYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  XWYACTR;  /* YIELD */
A68_121  YWYACTR = {0};  /* OPERATORS - mode -> union mode */
A68_120  ZWYACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(endmodule);
{ 
(void)(CIYACTR_routine_exit_hook(DWYACTR));
 /* line 321: */
 /* line 322: */
IWYACTR = GWYACTR ;
EWYACTR.data[0] = A_UNITE(HWYACTR,mode2,2,IWYACTR);
 /* line 323: */
EWYACTR.data[1] = A_UNITE(JWYACTR,mode4,4,EIAACTR_cnewline);
NWYACTR = LWYACTR ;
EWYACTR.data[2] = A_UNITE(MWYACTR,mode2,2,NWYACTR);
 /* line 324: */
EWYACTR.data[3] = A_UNITE(OWYACTR,mode4,4,EIAACTR_cnewline);
SWYACTR = QWYACTR ;
EWYACTR.data[4] = A_UNITE(RWYACTR,mode2,2,SWYACTR);
 /* line 325: */
EWYACTR.data[5] = A_UNITE(TWYACTR,mode4,4,EIAACTR_cnewline);
 /* line 326: */
XWYACTR = VWYACTR ;
EWYACTR.data[6] = A_UNITE(WWYACTR,mode2,2,XWYACTR);
EWYACTR.data[7] = A_UNITE(YWYACTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(ZWYACTR,EWYACTR,8,A68_121 ), NSLACTR_codestream(VRLACTR_currentlevel())));
 /* line 327: */
 /* line 328: */
(void)(SGYACTR_writeclosingcurly());
} 
A_PROC_EXIT(endmodule);
return;
} 
#undef NL

A68_VOID  BXYACTR_enddecsmodule(A68_VC  Modulename)
{ 
A68_BOOL  CXYACTR;  /* optbool result */
A68_316  DXYACTR;  /* collateral clause result */
A68_36  GXYACTR;  /* OPERATORS - istruct -> vector */
A68_VC  HXYACTR;  /* avoid structure result */
A_PROC_ENTRY(enddecsmodule);
 /* line 331: */
 /* line 332: */
{ 
 /* line 333: */
if (KCPACTR_previousversionfound)
{ 
 /* line 334: */
 /* line 336: */
CXYACTR = LCPACTR_rscompatiblewithpreviousversion;
if ( CXYACTR )
{CXYACTR = MCPACTR_transcompatiblewithpreviousversi;
}
if (CXYACTR)
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
DXYACTR.data[0] = FXYACTR;
DXYACTR.data[1] = Modulename;
JDAAOSF_concat( A_HISVEC(GXYACTR,DXYACTR,2,A68_VC ), &HXYACTR );
(void)(CIYACTR_routine_exit_hook(HXYACTR));
 /* line 343: */
(void)(SGYACTR_writeclosingcurly());
 /* line 345: */
 /* line 346: */
(void)(DJPACTR_outputmoduleinformation());
} 
A_PROC_EXIT(enddecsmodule);
return;
} 
#undef NL
 /* line 351: */

A68_VOID  KXYACTR_completeprogram(A68_VC  Modulename, A68_104 * Autocomplabel)
{ 
A_PROC_ENTRY(completeprogram);
 /* line 357: */
 /* line 358: */
 /* line 359: */
(void)(WXIACTR_assert(MXYACTR, A68_FALSE));
A_PROC_EXIT(completeprogram);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 6: */
void BGYACTR(void)   /* initialise DECS entryandreturn */
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
A_config.translation_time = "Thu Nov  5 21:38:58 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "AGYACTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 21:38:58 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS entryandreturn);
(void)(UEAALIB_a68config(LGAALIB_configinfo, FGYACTR));
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
