/* UNAME:ZMOACTR */
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
struct A68t107{
A68_INT  Rdenno;
A_PAD_INT(PAD_19)
A68_INT  Mode;
A_PAD_INT(PAD_20)
A68_INT  Nods;
A_PAD_INT(PAD_21)
A68_INT  Deflex;
A_PAD_INT(PAD_22)
};
typedef struct A68t107  A68_107 ;    /* STRUCT(INT,INT,INT,INT)  */
A_ISTRUCT(A68_CHAR ,32,A68t109);
typedef struct A68t109  A68_109 ;    /* STRUCT 32 CHAR */
struct A68t108{
struct A68t109  N;
A_PAD_ISTRUCT(A68_109 ,PAD_23)
struct A68t109  F;
A_PAD_ISTRUCT(A68_109 ,PAD_24)
A68_INT  Level;
A_PAD_INT(PAD_25)
};
typedef struct A68t108  A68_108 ;    /* STRUCT(MODE109,MODE109,INT)  */
struct A68t110{
struct A68t109  Name;
A_PAD_ISTRUCT(A68_109 ,PAD_26)
A68_INT  Decno;
A_PAD_INT(PAD_27)
A68_INT  Level;
A_PAD_INT(PAD_28)
A68_INT  Mode;
A_PAD_INT(PAD_29)
A68_INT  Scope;
A_PAD_INT(PAD_30)
struct A68t110 * Rest;
};
typedef struct A68t110  A68_110 ;    /* STRUCT(MODE109,INT,INT,INT,INT,REF MODE110)  */
struct A68t111{
A68_INT  Rdenno;
A_PAD_INT(PAD_31)
A68_INT  Imode;
A_PAD_INT(PAD_32)
A68_INT  Length;
A_PAD_INT(PAD_33)
A68_INT  Deflex;
A_PAD_INT(PAD_34)
};
typedef struct A68t111  A68_111 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t120{
A68_INT  Mode;
A_PAD_INT(PAD_35)
};
typedef struct A68t120  A68_120 ;    /* STRUCT(INT)  */
struct A68t112 { A68_INT mode; union {
A68_INT  mode1;
struct A68t113 * mode2;
struct A68t114 * mode3;
struct A68t115 * mode4;
struct A68t111 * mode5;
struct A68t116 * mode6;
struct A68t117 * mode7;
struct A68t107 * mode8;
struct A68t118 * mode9;
struct A68t119 * mode10;
struct A68t120  mode11;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t112  A68_112 ;    /* UNION(INT,REF MODE113,REF MODE114,REF MODE115,REF MODE111,REF MODE116,REF MODE117,REF MODE107,REF MODE118,REF MODE119,MODE120)  */
struct A68t113{
A68_INT  Rdenno;
A_PAD_INT(PAD_36)
struct A68t124 * Modelist;
};
typedef struct A68t113  A68_113 ;    /* STRUCT(INT,REF MODE124)  */
struct A68t114{
A68_INT  Deproc;
A_PAD_INT(PAD_37)
struct A68t124 * Pars;
};
typedef struct A68t114  A68_114 ;    /* STRUCT(INT,REF MODE124)  */
struct A68t115{
A68_INT  Rdenno;
A_PAD_INT(PAD_38)
A68_INT  Deflex;
A_PAD_INT(PAD_39)
struct A68t123 * Sels;
};
typedef struct A68t115  A68_115 ;    /* STRUCT(INT,INT,REF MODE123)  */
struct A68t116{
A68_INT  Deproc;
A_PAD_INT(PAD_40)
};
typedef struct A68t116  A68_116 ;    /* STRUCT(INT)  */
struct A68t117{
A68_INT  Rdenno;
A_PAD_INT(PAD_41)
A68_INT  Vecmode;
A_PAD_INT(PAD_42)
A68_INT  Deflex;
A_PAD_INT(PAD_43)
};
typedef struct A68t117  A68_117 ;    /* STRUCT(INT,INT,INT)  */
struct A68t118{
A68_INT  Mode;
A_PAD_INT(PAD_44)
struct A68t122 * Stenlist;
};
typedef struct A68t118  A68_118 ;    /* STRUCT(INT,REF MODE122)  */
struct A68t119{
A68_INT  Mode;
A_PAD_INT(PAD_45)
A68_INT  Modeproc;
A_PAD_INT(PAD_46)
struct A68t121 * El;
};
typedef struct A68t119  A68_119 ;    /* STRUCT(INT,INT,REF MODE121)  */
struct A68t121{
struct A68t119 * Am;
struct A68t121 * Rest;
};
typedef struct A68t121  A68_121 ;    /* STRUCT(REF MODE119,REF MODE121)  */
struct A68t122{
A68_INT  Mode;
A_PAD_INT(PAD_47)
A68_INT  Rdenno;
A_PAD_INT(PAD_48)
struct A68t122 * Rest;
};
typedef struct A68t122  A68_122 ;    /* STRUCT(INT,INT,REF MODE122)  */
struct A68t123{
A68_INT  Mode;
A_PAD_INT(PAD_49)
A68_INT  Fieldno;
A_PAD_INT(PAD_50)
struct A68t109  Name;
A_PAD_ISTRUCT(A68_109 ,PAD_51)
struct A68t123 * Rest;
};
typedef struct A68t123  A68_123 ;    /* STRUCT(INT,INT,MODE109,REF MODE123)  */
struct A68t124{
A68_INT  Mode;
A_PAD_INT(PAD_52)
struct A68t124 * Rest;
};
typedef struct A68t124  A68_124 ;    /* STRUCT(INT,REF MODE124)  */
A_VECTOR(struct A68t128 ,A68t127);
typedef struct A68t127  A68_127 ;    /* VECTOR [] MODE128 */
A_VECTOR(struct A68t108 ,A68t134);
typedef struct A68t134  A68_134 ;    /* VECTOR [] MODE108 */
struct A68t133 { A68_INT mode; union {
A68_VC  mode1;
struct A68t134  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t133  A68_133 ;    /* UNION(REF MODE26,REF MODE134)  */
struct A68t129{
struct A68t109  F;
A_PAD_ISTRUCT(A68_109 ,PAD_53)
A68_INT  No;
A_PAD_INT(PAD_54)
A68_INT  Nl;
A_PAD_INT(PAD_55)
A68_INT  Ng;
A_PAD_INT(PAD_56)
struct A68t133  U;
};
typedef struct A68t129  A68_129 ;    /* STRUCT(MODE109,INT,INT,INT,MODE133)  */
A_VECTOR(struct A68t132 ,A68t130);
typedef struct A68t130  A68_130 ;    /* VECTOR [] MODE132 */
struct A68t132{
struct A68t105  Prefix;
A_PAD_ISTRUCT(A68_105 ,PAD_57)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_58)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_59)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_60)
A68_BOOL  Keptgenproc;
A_PAD_BOOL(PAD_61)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_62)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t132  A68_132 ;    /* STRUCT(MODE105,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26)  */
A_VECTOR(struct A68t105 ,A68t131);
typedef struct A68t131  A68_131 ;    /* VECTOR [] MODE105 */
struct A68t128{
struct A68t129  Xs;
struct A68t105  Ys;
A_PAD_ISTRUCT(A68_105 ,PAD_63)
A68_LINT  Timeoflastchange;
A_PAD_LINT(PAD_64)
struct A68t130  Keptinfo;
struct A68t131  Cnames;
};
typedef struct A68t128  A68_128 ;    /* STRUCT(MODE129,MODE105,LONG INT,REF MODE130,REF MODE131)  */
struct A68t126{
struct A68t105  Uname;
A_PAD_ISTRUCT(A68_105 ,PAD_65)
struct A68t105  Lname;
A_PAD_ISTRUCT(A68_105 ,PAD_66)
struct A68t105  Gname;
A_PAD_ISTRUCT(A68_105 ,PAD_67)
struct A68t127  Specs;
};
typedef struct A68t126  A68_126 ;    /* STRUCT(MODE105,MODE105,MODE105,REF MODE127)  */
struct A68t125{
struct A68t109  Name;
A_PAD_ISTRUCT(A68_109 ,PAD_68)
struct A68t126  Ym;
struct A68t109  Formal;
A_PAD_ISTRUCT(A68_109 ,PAD_69)
struct A68t105  Ys;
A_PAD_ISTRUCT(A68_105 ,PAD_70)
A68_INT  Level;
A_PAD_INT(PAD_71)
A68_INT  Ownlevel;
A_PAD_INT(PAD_72)
};
typedef struct A68t125  A68_125 ;    /* STRUCT(MODE109,MODE126,MODE109,MODE105,INT,INT)  */
struct A68t135{
struct A68t109  Name;
A_PAD_ISTRUCT(A68_109 ,PAD_73)
struct A68t108  L;
struct A68t108  G;
A68_INT  Type;
A_PAD_INT(PAD_74)
};
typedef struct A68t135  A68_135 ;    /* STRUCT(MODE109,MODE108,MODE108,INT)  */
struct A68t136{
A68_INT  Norden;
A_PAD_INT(PAD_75)
A68_INT  Nomodes;
A_PAD_INT(PAD_76)
A68_INT  Nolabs;
A_PAD_INT(PAD_77)
A68_INT  Nodecnos;
A_PAD_INT(PAD_78)
A68_INT  Nomodules;
A_PAD_INT(PAD_79)
A68_INT  Nolibinds;
A_PAD_INT(PAD_80)
};
typedef struct A68t136  A68_136 ;    /* STRUCT(INT,INT,INT,INT,INT,INT)  */
struct A68t137{
A68_INT  Type;
A_PAD_INT(PAD_81)
A68_INT  Moduleno;
A_PAD_INT(PAD_82)
struct A68t109  Name;
A_PAD_ISTRUCT(A68_109 ,PAD_83)
struct A68t126  Ym;
};
typedef struct A68t137  A68_137 ;    /* STRUCT(INT,INT,MODE109,MODE126)  */
struct A68t138{
struct A68t135  Xmi;
struct A68t126  Ym;
};
typedef struct A68t138  A68_138 ;    /* STRUCT(MODE135,MODE126)  */
struct A68t139{
struct A68t129  Xs;
struct A68t105  Ys;
A_PAD_ISTRUCT(A68_105 ,PAD_84)
};
typedef struct A68t139  A68_139 ;    /* STRUCT(MODE129,MODE105)  */
struct A68t141 ;

A_PROCEDURE(A68_VOID ,A68t140,(struct A68t141 ),(struct A68t141 ,void *));
typedef struct A68t140  A68_140 ;    /* PROC(MODE141) VOID */
A_VECTOR(struct A68t142 ,A68t141);
typedef struct A68t141  A68_141 ;    /* VECTOR [] MODE142 */
struct A68t142 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_SINT  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t142  A68_142 ;    /* UNION(CHAR,MODE26,SHORT INT)  */
struct A68t144 ;

A_PROCEDURE(A68_VOID ,A68t143,(struct A68t144 ,A68_INT ),(struct A68t144 ,A68_INT ,void *));
typedef struct A68t143  A68_143 ;    /* PROC(MODE144,INT) VOID */
A_VECTOR(struct A68t145 ,A68t144);
typedef struct A68t144  A68_144 ;    /* VECTOR [] MODE145 */
struct A68t145 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_INT  mode3;
A68_SINT  mode4;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t145  A68_145 ;    /* UNION(CHAR,MODE26,INT,SHORT INT)  */

A_PROCEDURE(A68_INT ,A68t146,(A68_INT ),(A68_INT ,void *));
typedef struct A68t146  A68_146 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t147,(A68_INT ),(A68_INT ,void *));
typedef struct A68t147  A68_147 ;    /* PROC(INT) BOOL */
struct A68t148{
A68_INT  Level;
A_PAD_INT(PAD_85)
A68_INT  Block;
A_PAD_INT(PAD_86)
};
typedef struct A68t148  A68_148 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t149,(struct A68t148 *),(struct A68t148 *,void *));
typedef struct A68t149  A68_149 ;    /* PROC MODE148 */

A_PROCEDURE(A68_BOOL ,A68t150,(void),(void *));
typedef struct A68t150  A68_150 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t151,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t151  A68_151 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t152,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t153,(struct A68t148 ,struct A68t148 ),(struct A68t148 ,struct A68t148 ,void *));
typedef struct A68t153  A68_153 ;    /* PROC(MODE148,MODE148) BOOL */

A_PROCEDURE(A68_BOOL ,A68t154,(struct A68t148 ),(struct A68t148 ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(MODE148) BOOL */

A_PROCEDURE(A68_VOID ,A68t155,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t155  A68_155 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t156,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t157,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t157  A68_157 ;    /* PROC(INT) REF MODE26 */
struct A68t159 ;

A_PROCEDURE(A68_VOID ,A68t158,(A68_INT ,struct A68t159 ),(A68_INT ,struct A68t159 ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(INT,MODE159) VOID */
A_ROW(A68_VC ,A68t159,1);
typedef struct A68t159  A68_159 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t160,(void),(void *));
typedef struct A68t160  A68_160 ;    /* PROC BITS */
struct A68t161{
A68_INT  Cfile;
A_PAD_INT(PAD_87)
};
typedef struct A68t161  A68_161 ;    /* STRUCT(INT)  */
struct A68t162{
A68_INT  Seedfile;
A_PAD_INT(PAD_88)
};
typedef struct A68t162  A68_162 ;    /* STRUCT(INT)  */
struct A68t163 { A68_INT mode; union {
struct A68t161  mode1;
struct A68t162  mode2;
struct A68t105  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t163  A68_163 ;    /* UNION(MODE161,MODE162,MODE105,VOID)  */
A_ROW(A68_BOOL ,A68t164,1);
typedef struct A68t164  A68_164 ;    /* [] BOOL */
struct A68t165{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_89)
A68_VC  Sourcefile;
struct A68t105  Nameseed;
A_PAD_ISTRUCT(A68_105 ,PAD_90)
struct A68t163  Nameseedorigin;
struct A68t166 * Used_modules;
A68_VC  Commandline;
struct A68t167 * Environment;
};
typedef struct A68t165  A68_165 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE105,MODE163,REF MODE166,REF MODE26,REF MODE167)  */
struct A68t166{
A68_VC  Modinfo_file;
struct A68t166 * Next;
};
typedef struct A68t166  A68_166 ;    /* STRUCT(REF MODE26,REF MODE166)  */
struct A68t167{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t167 * Next;
};
typedef struct A68t167  A68_167 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE167)  */
struct A68t169 ;

A_PROCEDURE(struct A68t59 *,A68t168,(A68_VC ,struct A68t169 *,A68_VC *),(A68_VC ,struct A68t169 *,A68_VC *,void *));
typedef struct A68t168  A68_168 ;    /* PROC(MODE26,REF MODE169,REF REF MODE26) REF MODE59 */
struct A68t169{
A68_VC  Dir;
struct A68t169 * Next;
};
typedef struct A68t169  A68_169 ;    /* STRUCT(REF MODE26,REF MODE169)  */
struct A68t170{
A68_INT  Mode;
A_PAD_INT(PAD_91)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_92)
struct A68t148  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t105  Prefix;
A_PAD_ISTRUCT(A68_105 ,PAD_93)
A68_BITS  Flags;
A_PAD_BITS(PAD_94)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t170  A68_170 ;    /* STRUCT(INT,INT,MODE148,REF MODE26,REF MODE26,MODE105,BITS,REF MODE26,REF MODE26)  */
struct A68t171{
A68_INT  Mode;
A_PAD_INT(PAD_95)
A68_INT  Resultmode;
A_PAD_INT(PAD_96)
A68_INT  Declevel;
A_PAD_INT(PAD_97)
struct A68t148  Environ;
A68_VC  Name;
struct A68t105  Prefix;
A_PAD_ISTRUCT(A68_105 ,PAD_98)
struct A68t105  Fnprefix;
A_PAD_ISTRUCT(A68_105 ,PAD_99)
struct A68t105  Envprefix;
A_PAD_ISTRUCT(A68_105 ,PAD_100)
A68_BITS  Flags;
A_PAD_BITS(PAD_101)
};
typedef struct A68t171  A68_171 ;    /* STRUCT(INT,INT,INT,MODE148,REF MODE26,MODE105,MODE105,MODE105,BITS)  */
struct A68t172{
struct A68t104  Label;
struct A68t148  Environ;
A68_VC  Name;
struct A68t105  Prefix;
A_PAD_ISTRUCT(A68_105 ,PAD_102)
A68_BITS  Flags;
A_PAD_BITS(PAD_103)
A68_INT  Alias;
A_PAD_INT(PAD_104)
};
typedef struct A68t172  A68_172 ;    /* STRUCT(MODE104,MODE148,REF MODE26,MODE105,BITS,INT)  */

A_PROCEDURE(struct A68t170 *,A68t173,(A68_INT ),(A68_INT ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(INT) REF MODE170 */

A_PROCEDURE(A68_VOID ,A68t174,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t174  A68_174 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t175,(A68_VC ,struct A68t105 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t105 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(REF MODE26,MODE105,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */
A_ROW(struct A68t170 ,A68t176,1);
typedef struct A68t176  A68_176 ;    /* [] MODE170 */
A_ROW(struct A68t171 ,A68t177,1);
typedef struct A68t177  A68_177 ;    /* [] MODE171 */
A_ROW(struct A68t172 ,A68t178,1);
typedef struct A68t178  A68_178 ;    /* [] MODE172 */
struct A68t180 ;

A_PROCEDURE(A68_VOID ,A68t179,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t180 ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t180 ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(INT,INT,INT,INT,REF MODE180) VOID */
A_ROW(A68_INT ,A68t180,1);
typedef struct A68t180  A68_180 ;    /* [] INT */

A_PROCEDURE(A68_BOOL ,A68t181,(A68_VC ),(A68_VC ,void *));
typedef struct A68t181  A68_181 ;    /* PROC(MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t182,(A68_INT ,struct A68t148 *),(A68_INT ,struct A68t148 *,void *));
typedef struct A68t182  A68_182 ;    /* PROC(INT) MODE148 */
struct A68t184 ;

A_PROCEDURE(struct A68t109 ,A68t183,(struct A68t109 ,A68_INT ,struct A68t184 ),(struct A68t109 ,A68_INT ,struct A68t184 ,void *));
typedef struct A68t183  A68_183 ;    /* PROC(MODE109,INT,MODE184) MODE109 */

A_PROCEDURE(A68_VOID ,A68t184,(struct A68t109 ,struct A68t59 *,A68_BOOL ,struct A68t138 *),(struct A68t109 ,struct A68t59 *,A68_BOOL ,struct A68t138 *,void *));
typedef struct A68t184  A68_184 ;    /* PROC(MODE109,REF MODE59,BOOL) MODE138 */
struct A68t186 ;

A_PROCEDURE(A68_VOID ,A68t185,(A68_VC ,struct A68t186 ),(A68_VC ,struct A68t186 ,void *));
typedef struct A68t185  A68_185 ;    /* PROC(MODE26,MODE186) VOID */

A_PROCEDURE(A68_VOID ,A68t186,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t186  A68_186 ;    /* PROC(INT,MODE26) VOID */

A_PROCEDURE(A68_BOOL ,A68t187,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t187  A68_187 ;    /* PROC(INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t188,(struct A68t163 ),(struct A68t163 ,void *));
typedef struct A68t188  A68_188 ;    /* PROC(MODE163) VOID */

A_PROCEDURE(struct A68t105 ,A68t189,(void),(void *));
typedef struct A68t189  A68_189 ;    /* PROC MODE105 */

A_PROCEDURE(A68_VOID ,A68t190,(struct A68t105 ),(struct A68t105 ,void *));
typedef struct A68t190  A68_190 ;    /* PROC(MODE105) VOID */

A_PROCEDURE(A68_VOID ,A68t191,(struct A68t163 ,A68_VC *),(struct A68t163 ,A68_VC *,void *));
typedef struct A68t191  A68_191 ;    /* PROC(MODE163) MODE26 */

A_PROCEDURE(A68_VOID ,A68t192,(struct A68t95 ),(struct A68t95 ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(MODE95) VOID */

A_PROCEDURE(A68_VOID ,A68t193,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t193  A68_193 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,57,A68t194);
typedef struct A68t194  A68_194 ;    /* STRUCT 57 CHAR */
struct A68t195{
struct A68t105  L;
A_PAD_ISTRUCT(A68_105 ,PAD_105)
struct A68t105  G;
A_PAD_ISTRUCT(A68_105 ,PAD_106)
};
typedef struct A68t195  A68_195 ;    /* STRUCT(MODE105,MODE105)  */
struct A68t196{
struct A68t105  Uname;
A_PAD_ISTRUCT(A68_105 ,PAD_107)
struct A68t135  Xmi;
struct A68t195  Checkinfo;
};
typedef struct A68t196  A68_196 ;    /* STRUCT(MODE105,MODE135,MODE195)  */
struct A68t197{
struct A68t109  Name;
A_PAD_ISTRUCT(A68_109 ,PAD_108)
struct A68t105  Uname;
A_PAD_ISTRUCT(A68_105 ,PAD_109)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_110)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_111)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_112)
A68_BOOL  Genproc;
A_PAD_BOOL(PAD_113)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_114)
A68_INT  Mode;
A_PAD_INT(PAD_115)
A68_INT  Decno;
A_PAD_INT(PAD_116)
A68_VC  Definition;
A68_VC  Rhs;
struct A68t197 * Rest;
};
typedef struct A68t197  A68_197 ;    /* STRUCT(MODE109,MODE105,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,REF MODE26,REF MODE26,REF MODE197)  */
struct A68t198{
struct A68t109  Name;
A_PAD_ISTRUCT(A68_109 ,PAD_117)
struct A68t105  Uname;
A_PAD_ISTRUCT(A68_105 ,PAD_118)
struct A68t197 * Ids;
struct A68t198 * Rest;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(MODE109,MODE105,REF MODE197,REF MODE198)  */
struct A68t199{
struct A68t109  Name;
A_PAD_ISTRUCT(A68_109 ,PAD_119)
struct A68t126  Ym;
struct A68t105  Ys;
A_PAD_ISTRUCT(A68_105 ,PAD_120)
A68_INT  Level;
A_PAD_INT(PAD_121)
struct A68t197 * Ids;
struct A68t198 * Uses;
struct A68t199 * Rest;
};
typedef struct A68t199  A68_199 ;    /* STRUCT(MODE109,MODE126,MODE105,INT,REF MODE197,REF MODE198,REF MODE199)  */
A_ISTRUCT(A68_CHAR ,8,A68t200);
typedef struct A68t200  A68_200 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t201);
typedef struct A68t201  A68_201 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t202);
typedef struct A68t202  A68_202 ;    /* STRUCT 5 CHAR */

A_PROCEDURE(A68_VOID ,A68t203,(struct A68t109 ,struct A68t109 ,struct A68t126 ,struct A68t139 *),(struct A68t109 ,struct A68t109 ,struct A68t126 ,struct A68t139 *,void *));
typedef struct A68t203  A68_203 ;    /* PROC(MODE109,MODE109,MODE126) MODE139 */

A_PROCEDURE(A68_VOID ,A68t204,(struct A68t59 *,A68_INT *),(struct A68t59 *,A68_INT *,void *));
typedef struct A68t204  A68_204 ;    /* PROC(REF MODE59,REF INT) VOID */

A_PROCEDURE(A68_VOID ,A68t205,(struct A68t59 *,A68_VC ),(struct A68t59 *,A68_VC ,void *));
typedef struct A68t205  A68_205 ;    /* PROC(REF MODE59,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t206,(struct A68t59 *,struct A68t128 *,A68_BOOL ),(struct A68t59 *,struct A68t128 *,A68_BOOL ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(REF MODE59,REF MODE128,BOOL) VOID */
A_ISTRUCT(A68_CHAR ,17,A68t207);
typedef struct A68t207  A68_207 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t208);
typedef struct A68t208  A68_208 ;    /* STRUCT 14 CHAR */

A_PROCEDURE(A68_CHAR ,A68t209,(A68_RC ),(A68_RC ,void *));
typedef struct A68t209  A68_209 ;    /* PROC(MODE27) CHAR */

A_PROCEDURE(A68_VOID ,A68t210,(A68_BOOL ,struct A68t180 *),(A68_BOOL ,struct A68t180 *,void *));
typedef struct A68t210  A68_210 ;    /* PROC(BOOL) MODE180 */
A_ISTRUCT(A68_CHAR ,13,A68t211);
typedef struct A68t211  A68_211 ;    /* STRUCT 13 CHAR */

A_PROCEDURE(A68_VOID ,A68t212,(A68_BOOL ,struct A68t130 *),(A68_BOOL ,struct A68t130 *,void *));
typedef struct A68t212  A68_212 ;    /* PROC(BOOL) MODE130 */

A_PROCEDURE(A68_VOID ,A68t213,(struct A68t109 ,struct A68t138 *),(struct A68t109 ,struct A68t138 *,void *));
typedef struct A68t213  A68_213 ;    /* PROC(MODE109) MODE138 */
A_ISTRUCT(A68_CHAR ,27,A68t214);
typedef struct A68t214  A68_214 ;    /* STRUCT 27 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t215);
typedef struct A68t215  A68_215 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t216);
typedef struct A68t216  A68_216 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t217);
typedef struct A68t217  A68_217 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t218);
typedef struct A68t218  A68_218 ;    /* STRUCT 18 CHAR */

A_PROCEDURE(A68_VOID ,A68t219,(A68_BOOL ,struct A68t127 *),(A68_BOOL ,struct A68t127 *,void *));
typedef struct A68t219  A68_219 ;    /* PROC(BOOL) MODE127 */
A_ISTRUCT(A68_CHAR ,20,A68t220);
typedef struct A68t220  A68_220 ;    /* STRUCT 20 CHAR */

A_PROCEDURE(A68_VOID ,A68t221,(struct A68t109 ,struct A68t169 *,struct A68t138 *),(struct A68t109 ,struct A68t169 *,struct A68t138 *,void *));
typedef struct A68t221  A68_221 ;    /* PROC(MODE109,REF MODE169) MODE138 */
A_ISTRUCT(A68_CHAR ,2,A68t222);
typedef struct A68t222  A68_222 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t223);
typedef struct A68t223  A68_223 ;    /* STRUCT 12 CHAR */

A_PROCEDURE(A68_VOID ,A68t224,(struct A68t109 ,A68_INT ,A68_BOOL ,struct A68t138 *),(struct A68t109 ,A68_INT ,A68_BOOL ,struct A68t138 *,void *));
typedef struct A68t224  A68_224 ;    /* PROC(MODE109,INT,BOOL) MODE138 */
A_ISTRUCT(A68_CHAR ,51,A68t225);
typedef struct A68t225  A68_225 ;    /* STRUCT 51 CHAR */
A_ROW(struct A68t199 *,A68t226,1);
typedef struct A68t226  A68_226 ;    /* [] REF MODE199 */
A_ROW(struct A68t132 ,A68t227,1);
typedef struct A68t227  A68_227 ;    /* [] MODE132 */
A_ROW(struct A68t128 ,A68t228,1);
typedef struct A68t228  A68_228 ;    /* [] MODE128 */

A_PROCEDURE(A68_VOID ,A68t229,(struct A68t135 ),(struct A68t135 ,void *));
typedef struct A68t229  A68_229 ;    /* PROC(MODE135) VOID */
A_ISTRUCT(A68_CHAR ,31,A68t230);
typedef struct A68t230  A68_230 ;    /* STRUCT 31 CHAR */

A_PROCEDURE(A68_VOID ,A68t231,(A68_BOOL ,struct A68t228 *),(A68_BOOL ,struct A68t228 *,void *));
typedef struct A68t231  A68_231 ;    /* PROC(BOOL) MODE228 */

A_PROCEDURE(A68_VOID ,A68t232,(A68_BOOL ,struct A68t226 *),(A68_BOOL ,struct A68t226 *,void *));
typedef struct A68t232  A68_232 ;    /* PROC(BOOL) MODE226 */

A_PROCEDURE(A68_VOID ,A68t233,(struct A68t129 ),(struct A68t129 ,void *));
typedef struct A68t233  A68_233 ;    /* PROC(MODE129) VOID */
A_ISTRUCT(A68_CHAR ,15,A68t234);
typedef struct A68t234  A68_234 ;    /* STRUCT 15 CHAR */

A_PROCEDURE(A68_VOID ,A68t235,(struct A68t137 ,A68_INT ),(struct A68t137 ,A68_INT ,void *));
typedef struct A68t235  A68_235 ;    /* PROC(MODE137,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t236,(struct A68t125 ),(struct A68t125 ,void *));
typedef struct A68t236  A68_236 ;    /* PROC(MODE125) VOID */

A_PROCEDURE(A68_VOID ,A68t237,(struct A68t110 ),(struct A68t110 ,void *));
typedef struct A68t237  A68_237 ;    /* PROC(MODE110) VOID */

A_PROCEDURE(A68_BOOL ,A68t238,(struct A68t126 ),(struct A68t126 ,void *));
typedef struct A68t238  A68_238 ;    /* PROC(MODE126) BOOL */
A_ISTRUCT(A68_VC ,2,A68t239);
typedef struct A68t239  A68_239 ;    /* STRUCT 2 MODE26 */

A_PROCEDURE(A68_BOOL ,A68t240,(struct A68t138 ),(struct A68t138 ,void *));
typedef struct A68t240  A68_240 ;    /* PROC(MODE138) BOOL */
A_ISTRUCT(A68_CHAR ,25,A68t241);
typedef struct A68t241  A68_241 ;    /* STRUCT 25 CHAR */

A_PROCEDURE(A68_VOID ,A68t242,(struct A68t128 ),(struct A68t128 ,void *));
typedef struct A68t242  A68_242 ;    /* PROC(MODE128) VOID */
A_ISTRUCT(struct A68t142 ,8,A68t243);
typedef struct A68t243  A68_243 ;    /* STRUCT 8 MODE142 */
A_ISTRUCT(struct A68t142 ,4,A68t244);
typedef struct A68t244  A68_244 ;    /* STRUCT 4 MODE142 */
A_ISTRUCT(struct A68t142 ,7,A68t245);
typedef struct A68t245  A68_245 ;    /* STRUCT 7 MODE142 */
A_ISTRUCT(struct A68t142 ,9,A68t246);
typedef struct A68t246  A68_246 ;    /* STRUCT 9 MODE142 */
A_ISTRUCT(struct A68t142 ,26,A68t247);
typedef struct A68t247  A68_247 ;    /* STRUCT 26 MODE142 */
A_ISTRUCT(A68_CHAR ,30,A68t248);
typedef struct A68t248  A68_248 ;    /* STRUCT 30 CHAR */
A_ISTRUCT(A68_CHAR ,26,A68t249);
typedef struct A68t249  A68_249 ;    /* STRUCT 26 CHAR */

A_PROCEDURE(A68_VOID ,A68t250,(struct A68t197 *),(struct A68t197 *,void *));
typedef struct A68t250  A68_250 ;    /* PROC(REF MODE197) VOID */

A_PROCEDURE(A68_VOID ,A68t251,(struct A68t198 *),(struct A68t198 *,void *));
typedef struct A68t251  A68_251 ;    /* PROC(REF MODE198) VOID */
A_ISTRUCT(A68_CHAR ,43,A68t252);
typedef struct A68t252  A68_252 ;    /* STRUCT 43 CHAR */
A_ISTRUCT(struct A68t145 ,3,A68t253);
typedef struct A68t253  A68_253 ;    /* STRUCT 3 MODE145 */
A_ISTRUCT(A68_CHAR ,6,A68t254);
typedef struct A68t254  A68_254 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t255);
typedef struct A68t255  A68_255 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(struct A68t145 ,5,A68t256);
typedef struct A68t256  A68_256 ;    /* STRUCT 5 MODE145 */
A_ISTRUCT(A68_CHAR ,10,A68t257);
typedef struct A68t257  A68_257 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(struct A68t145 ,4,A68t258);
typedef struct A68t258  A68_258 ;    /* STRUCT 4 MODE145 */
A_ISTRUCT(A68_CHAR ,50,A68t259);
typedef struct A68t259  A68_259 ;    /* STRUCT 50 CHAR */
A_ISTRUCT(struct A68t145 ,2,A68t260);
typedef struct A68t260  A68_260 ;    /* STRUCT 2 MODE145 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from uniquenameserver --- */
extern A68_105  QIMACTR_newuniquename(void);
/* --- End of imports from uniquenameserver --- */


/* --- Imports from moduletracer --- */
extern A68_INT  ZCHACTR_tracelevel(A68_VC );
/* --- End of imports from moduletracer --- */


/* --- Imports from liblookup --- */
extern A68_109  YOLACTR_lookup_library(struct A68t109 ,A68_INT ,struct A68t184 );
extern A68_VOID  QYKACTR_decodespec(A68_VC ,struct A68t186 );
/* --- End of imports from liblookup --- */


/* --- Imports from incinstallation --- */
#define VDAACTR_maxid 32
#define WDAACTR_maxuname 7
/* --- End of imports from incinstallation --- */


/* --- Imports from incid --- */
#define IAAACTR_maxidno 2000
#define MAAACTR_maxlibid 6000
#define KAAACTR_maxrdno 4000
/* --- End of imports from incid --- */


/* --- Imports from idtable --- */
extern A68_175  LXKACTR_externaldec;
extern A68_84  MXKACTR_externalcdec;
extern A68_176  WPKACTR_ids;
extern A68_177  XPKACTR_rds;
#define BQKACTR_ididentityflag 0X1U
#define HQKACTR_idoptimisedflag 0X40U
#define JQKACTR_idgprocflag 0X100U
#define KQKACTR_idkeptgenprocflag 0X200U
#define MQKACTR_idforceuseflag 0X800U
#define RQKACTR_rdglobalflag 0X8U
/* --- End of imports from idtable --- */


/* --- Imports from environment --- */
extern A68_VOID  WXIACTR_assert(A68_VC ,A68_BOOL );
extern A68_VC  YQIACTR_basenamesourcefile;
extern A68_VOID  PXIACTR_error(A68_INT );
extern A68_BOOL  KQIACTR_keeplistoption;
extern A68_VOID  NWIACTR_pmessage(A68_INT ,struct A68t159 );
extern A68_VOID  VWIACTR_pwarning(A68_INT ,struct A68t159 );
extern A68_VOID  SXIACTR_terminalerror(A68_INT );
extern A68_INT  SRIACTR_filenametruncate;
extern A68_BOOL  AQIACTR_verboseoption;
extern A68_VOID  JXIACTR_warning(A68_INT );
extern A68_98  MSIACTR_list;
extern A68_165  IYIACTR_config_info;
extern A68_59 * BJJACTR_find_and_open_file(A68_VC ,struct A68t169 *,A68_VC *);
extern A68_169 * DRIACTR_modinfo_dirlist;
extern A68_169 * FRIACTR_library_directory;
/* --- End of imports from environment --- */


/* --- Imports from environ --- */
#define GSLACTR_importsstream 2
extern A68_INT  KSLACTR_nonlocdecstream(A68_INT );
extern A68_INT  NSLACTR_codestream(A68_INT );
extern A68_INT  VRLACTR_currentlevel(void);
/* --- End of imports from environ --- */


/* --- Imports from coutput --- */
extern A68_VOID  AVLACTR_writemodinfo(struct A68t141 );
extern A68_VOID  MDMACTR_writecstream(struct A68t144 ,A68_INT );
/* --- End of imports from coutput --- */


/* --- Imports from centities --- */
extern A68_SINT  EIAACTR_cnewline;
/* --- End of imports from centities --- */


/* --- Imports from osif --- */
#include <errno.h>

#define RCBAOSF_errno errno
extern A68_54  RIBAOSF_ignore_msg;
extern A68_59 * SSBAOSF_nil_file;
extern A68_BOOL  AVBAOSF_(struct A68t60 ,struct A68t60 );
extern A68_BOOL  EVBAOSF_(struct A68t60 ,struct A68t60 );
extern A68_60  OUBAOSF_io_ok;
extern A68_60  XUBAOSF_io_no_newline;
extern A68_VOID  IWBAOSF_close_file(struct A68t59 *,struct A68t54 );
extern A68_VOID  DXBAOSF_read_line(struct A68t59 *,A68_VC ,A68_INT *,struct A68t54 ,A68_60 *);
#include <unistd.h>
#define EXIT(status) exit(A_INT_int(status))

#define APBAOSF_exit EXIT
extern int A_argc;
extern char **A_argv;
extern char **A_envp;
#define A_prelude(argc,argv,envp) A_argc = argc; A_argv = argv; A_envp = envp

#define DHCAOSF_prelude A_prelude
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
extern A68_VOID  BNAAOSF_before(A68_VC ,A68_CHAR ,A68_VC *);
extern A68_VOID  ZCAAOSF_makervc(A68_VC ,A68_VC *);
extern A68_VOID  WRAAOSF_xc(A68_INT ,A68_VC *);
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
extern A68_VOID  JPAAOSF_lwhole(A68_LINT ,A68_INT ,A68_VC *);
extern A68_VOID  BQAAOSF_hex(A68_LBITS ,A68_INT ,A68_VC *);
extern A68_BOOL  TQAAOSF_vcdectoint(A68_INT *,A68_VC );
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void RHMACTR(void);   /* uniquenameserver */
extern void BCHACTR(void);   /* moduletracer */
extern void NXKACTR(void);   /* liblookup */
extern void ODAACTR(void);   /* incinstallation */
extern void BAAACTR(void);   /* incid */
extern void PPKACTR(void);   /* idtable */
extern void HPIACTR(void);   /* environment */
extern void BPLACTR(void);   /* environ */
extern void PTLACTR(void);   /* coutput */
extern void THAACTR(void);   /* centities */
extern void CSCAOSF(void);   /* osif */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_194   DNOACTR = {"$Id: modules.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,ENOACTR,DNOACTR,57)
#define FNOACTR_idlength VDAACTR_maxid
#define GNOACTR_unamelength WDAACTR_maxuname
static A68_INT  HNOACTR_checkinfolength A_UNUSED;
static A68_109   INOACTR = {"                                "}; 
A68_109  JNOACTR_nullid A_UNUSED;
static A68_109   KNOACTR = {"anonymous                       "}; 
static A68_109  LNOACTR_anonymousid A_UNUSED;
static A68_109   MNOACTR = {"a68_stdprelude_                 "}; 
A68_109  NNOACTR_stdpreludename A_UNUSED;
static A68_109   ONOACTR = {"$                               "}; 
static A68_109  PNOACTR_stdpreludeid A_UNUSED;
static A68_105   QNOACTR = {"       "}; 
A68_105  RNOACTR_nulluname A_UNUSED;
#define SNOACTR_flip 't'
#define TNOACTR_flop 'f'
static A68_105   XNOACTR = {"modules"}; 
A_GISVEC(A68_VC ,YNOACTR,XNOACTR,7)
static A68_200   ZNOACTR = {"MODULES("}; 
static A68_201   AOOACTR = {"): "}; 
A_GISVEC(A68_VC ,BOOACTR,ZNOACTR,8)
A_GISVEC(A68_VC ,DOOACTR,AOOACTR,3)
#define EOOACTR_currentmodinfoversion 8
static A68_200   FOOACTR = {"mod_info"}; 
static A68_200  GOOACTR_modinfomagic A_UNUSED;
static A68_202   HOOACTR = {"-----"}; 
A_GISVEC(A68_VC ,IOOACTR,HOOACTR,5)
static A68_VC  JOOACTR_alien_termination_string A_UNUSED;
A68_BOOL  KOOACTR_composition A_UNUSED;
static A68_133  MOOACTR_nilspec A_UNUSED;
static A68_139  OOOACTR_nullspec A_UNUSED;
static A68_VC  NPOACTR_modinfo_buf A_UNUSED;
static A68_207   QQOACTR = {"  f OF xspec is \""}; 
A_GISVEC(A68_VC ,RQOACTR,QQOACTR,17)
static A68_207   VQOACTR = {"  no OF xspec is "}; 
A_GISVEC(A68_VC ,WQOACTR,VQOACTR,17)
static A68_207   YQOACTR = {"  nl OF xspec is "}; 
A_GISVEC(A68_VC ,ZQOACTR,YQOACTR,17)
static A68_207   BROACTR = {"  ng OF xspec is "}; 
A_GISVEC(A68_VC ,CROACTR,BROACTR,17)
static A68_208   EROACTR = {"  spectype is "}; 
A_GISVEC(A68_VC ,FROACTR,EROACTR,14)
static A68_211   DSOACTR = {"  ubound  is "}; 
A_GISVEC(A68_VC ,ESOACTR,DSOACTR,13)
static A68_105   HTOACTR = {"modules"}; 
A_GISVEC(A68_VC ,ITOACTR,HTOACTR,7)
static A68_207   OVOACTR = {"unpack REF [] CAT"}; 
A_GISVEC(A68_VC ,PVOACTR,OVOACTR,17)
static A68_207   HWOACTR = {"   version no is "}; 
A_GISVEC(A68_VC ,IWOACTR,HWOACTR,17)
static A68_211   KWOACTR = {"   magic is \""}; 
A_GISVEC(A68_VC ,LWOACTR,KWOACTR,13)
static A68_214   VWOACTR = {"   version and magic are ok"}; 
A_GISVEC(A68_VC ,WWOACTR,VWOACTR,27)
static A68_207   XWOACTR = {"   version no is "}; 
A_GISVEC(A68_VC ,YWOACTR,XWOACTR,17)
static A68_211   AXOACTR = {"   magic is \""}; 
A_GISVEC(A68_VC ,BXOACTR,AXOACTR,13)
static A68_215   JXOACTR = {"   uname OF ym is \""}; 
A_GISVEC(A68_VC ,KXOACTR,JXOACTR,19)
static A68_215   QXOACTR = {"   name OF xmi is \""}; 
A_GISVEC(A68_VC ,RXOACTR,QXOACTR,19)
static A68_216   XXOACTR = {"   n OF l OF xmi is \""}; 
A_GISVEC(A68_VC ,YXOACTR,XXOACTR,21)
static A68_216   EYOACTR = {"   f OF l OF xmi is \""}; 
A_GISVEC(A68_VC ,FYOACTR,EYOACTR,21)
static A68_217   JYOACTR = {"   level OF l OF xmi is "}; 
A_GISVEC(A68_VC ,KYOACTR,JYOACTR,24)
static A68_216   OYOACTR = {"   n OF g OF xmi is \""}; 
A_GISVEC(A68_VC ,PYOACTR,OYOACTR,21)
static A68_216   VYOACTR = {"   f OF g OF xmi is \""}; 
A_GISVEC(A68_VC ,WYOACTR,VYOACTR,21)
static A68_217   AZOACTR = {"   level OF g OF xmi is "}; 
A_GISVEC(A68_VC ,BZOACTR,AZOACTR,24)
static A68_218   DZOACTR = {"   type OF xmi is "}; 
A_GISVEC(A68_VC ,EZOACTR,DZOACTR,18)
static A68_215   IZOACTR = {"   lname OF ym is \""}; 
A_GISVEC(A68_VC ,JZOACTR,IZOACTR,19)
static A68_215   PZOACTR = {"   gname OF ym is \""}; 
A_GISVEC(A68_VC ,QZOACTR,PZOACTR,19)
static A68_220   GAPACTR = {"about to unpack spec"}; 
A_GISVEC(A68_VC ,HAPACTR,GAPACTR,20)
static A68_222   PAPACTR = {".m"}; 
A_GISVEC(A68_VC ,SAPACTR,PAPACTR,2)
static A68_223   VAPACTR = {"get modinfo("}; 
A_GISVEC(A68_VC ,WAPACTR,VAPACTR,12)
static A68_138  JBPACTR_lastmoduledetails A_UNUSED;
static A68_225   OBPACTR = {"'give module details' called for composition module"}; 
A_GISVEC(A68_VC ,PBPACTR,OBPACTR,51)
static A68_199 * DCPACTR_contextlist A_UNUSED;
A68_226  FCPACTR_contexts A_UNUSED;
static A68_197 ** GCPACTR_idlist A_UNUSED;
static A68_227  HCPACTR_currentkeptinfo A_UNUSED;
A68_180  ICPACTR_keptdecnos A_UNUSED;
A68_BOOL  KCPACTR_previousversionfound A_UNUSED;
A68_BOOL  LCPACTR_rscompatiblewithpreviousversion A_UNUSED;
A68_BOOL  MCPACTR_transcompatiblewithpreviousversi A_UNUSED;
static A68_BOOL  NCPACTR_currentmoduleinitialised A_UNUSED;
A68_196  OCPACTR_currentmodule A_UNUSED;
A68_135 * PCPACTR_currentmodinfo A_UNUSED;
static A68_195 * QCPACTR_checkinfo A_UNUSED;
A68_228  RCPACTR_specs A_UNUSED;
static A68_230   YCPACTR = {"maxlevel > 0 (not context void)"}; 
A_GISVEC(A68_VC ,ZCPACTR,YCPACTR,31)
static A68_207   ADPACTR = {"holes not allowed"}; 
A_GISVEC(A68_VC ,CDPACTR,ADPACTR,17)
static A68_218   TDPACTR = {"level <= max level"}; 
A_GISVEC(A68_VC ,UDPACTR,TDPACTR,18)
static A68_234   EEPACTR = {"no <= UPB specs"}; 
A_GISVEC(A68_VC ,FEPACTR,EEPACTR,15)
static A68_214   LFPACTR = {"'add context module' called"}; 
A_GISVEC(A68_VC ,MFPACTR,LFPACTR,27)
static A68_105   QHPACTR = {"context"}; 
A_GISVEC(A68_VC ,RHPACTR,QHPACTR,7)
static A68_200   SHPACTR = {"keeplist"}; 
A_GISVEC(A68_VC ,THPACTR,SHPACTR,8)
static A68_207   NIPACTR = {"Previous version:"}; 
A_GISVEC(A68_VC ,OIPACTR,NIPACTR,17)
static A68_241   RIPACTR = {"no previous version found"}; 
A_GISVEC(A68_VC ,SIPACTR,RIPACTR,25)
static A68_105   BKPACTR = {"modules"}; 
A_GISVEC(A68_VC ,CKPACTR,BKPACTR,7)
static A68_234   DKPACTR = {"Writing spec..."}; 
A_GISVEC(A68_VC ,EKPACTR,DKPACTR,15)
static A68_207   MMPACTR = {"output REF [] CAT"}; 
A_GISVEC(A68_VC ,NMPACTR,MMPACTR,17)
static A68_248   UOPACTR = {"MODULES: only one spec allowed"}; 
A_GISVEC(A68_VC ,VOPACTR,UOPACTR,30)
static A68_249   UPPACTR = {"kept decno is a library id"}; 
A_GISVEC(A68_VC ,VPPACTR,UPPACTR,26)
static A68_216   XPPACTR = {"kept decno is a label"}; 
A_GISVEC(A68_VC ,YPPACTR,XPPACTR,21)
static A68_252   NQPACTR = {"/* --- DECS initialisation functions --- */"}; 
A_GISVEC(A68_VC ,OQPACTR,NQPACTR,43)
static A68_223   BRPACTR = {"extern void "}; 
A_GISVEC(A68_VC ,CRPACTR,BRPACTR,12)
static A68_105   GRPACTR = {"(void);"}; 
A_GISVEC(A68_VC ,HRPACTR,GRPACTR,7)
static A68_254   KRPACTR = {"   /* "}; 
static A68_201   LRPACTR = {" */"}; 
A_GISVEC(A68_VC ,MRPACTR,KRPACTR,6)
A_GISVEC(A68_VC ,NRPACTR,LRPACTR,3)
static A68_255   QRPACTR = {""}; 
A_GISVEC(A68_VC ,RRPACTR,QRPACTR,0)
static A68_201   YRPACTR = {"();"}; 
A_GISVEC(A68_VC ,ZRPACTR,YRPACTR,3)
static A68_257   CSPACTR = {"   /* USE "}; 
static A68_201   DSPACTR = {" */"}; 
A_GISVEC(A68_VC ,ESPACTR,CSPACTR,10)
A_GISVEC(A68_VC ,FSPACTR,DSPACTR,3)
static A68_255   ISPACTR = {""}; 
A_GISVEC(A68_VC ,JSPACTR,ISPACTR,0)
static A68_259   PSPACTR = {"/* --- end of DECS initialisation functions --- */"}; 
A_GISVEC(A68_VC ,QSPACTR,PSPACTR,50)
static A68_220   JTPACTR = {"/* --- Imports from "}; 
A_GISVEC(A68_VC ,KTPACTR,JTPACTR,20)
static A68_105   OTPACTR = {" --- */"}; 
A_GISVEC(A68_VC ,PTPACTR,OTPACTR,7)
static A68_214   WTPACTR = {"/* --- End of imports from "}; 
A_GISVEC(A68_VC ,XTPACTR,WTPACTR,27)
static A68_105   BUPACTR = {" --- */"}; 
A_GISVEC(A68_VC ,CUPACTR,BUPACTR,7)
static A68_214   MUPACTR = {"processing non-VOID context"}; 
A_GISVEC(A68_VC ,NUPACTR,MUPACTR,27)
typedef struct   /* env of non-global proc */
{
A68_INT * BSOACTR_ubound;
} JSOACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * BSOACTR_ubound;
} TSOACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * CSOACTR_cbound;
} TTOACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_135 * FXOACTR_xmi;
} XZOACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_135  Xmodinfo;
} GDPACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  XCPACTR_maxlevel;
A_PAD_INT(PAD_122)
} ODPACTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} CPPACTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} NROACTR_generator;

A_STATIC A68_VOID  WNOACTR_debugmessage(A68_INT  Level, A68_VC  M);

A68_VOID  SOOACTR_givespec(A68_109  N, A68_109  F, A68_126  Ym, A68_139  *ReturnedValue);

A_STATIC A68_VOID  FPOACTR_filter(A68_VC  Name, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  KPOACTR_generator(A68_BOOL  JPOACTR_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  RPOACTR_read_int(A68_59 * F, A68_INT * Ri);

A_STATIC A68_VOID  ZPOACTR_read_str(A68_59 * F, A68_VC  Str);

A_STATIC A68_VOID  JQOACTR_unpackspec(A68_59 * F, A68_128 * Ymspec, A68_BOOL  Lib_init);

A_STATIC A68_CHAR  JROACTR_hexchar(A68_RC  S);

A_STATIC A68_VOID  MROACTR_generator(A68_BOOL  KROACTR_anonymous, A68_180  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ISOACTR_generator(A68_BOOL  GSOACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SSOACTR_generator(A68_BOOL  QSOACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  STOACTR_generator(A68_BOOL  QTOACTR_anonymous, A68_130  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RVOACTR_nullmodinfo(A68_109  Name, A68_138  *ReturnedValue);

A_STATIC A68_VOID  YVOACTR_unpackmodinfo(A68_109  Name, A68_59 * F, A68_BOOL  Lib_init, A68_138  *ReturnedValue);

A_STATIC A68_VOID  WZOACTR_generator(A68_BOOL  UZOACTR_anonymous, A68_127  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KAPACTR_getmodinfo(A68_109  Name, A68_169 * Dirlist, A68_138  *ReturnedValue);

A68_VOID  NBPACTR_givemoduledetails(A68_109  Name, A68_INT  Nametype, A68_BOOL  Closure, A68_138  *ReturnedValue);

A68_VOID  TCPACTR_initialisecurrentmodule(A68_135  Xmodinfo);

A_STATIC A68_VOID  FDPACTR_generator(A68_BOOL  DDPACTR_anonymous, A68_228  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NDPACTR_generator(A68_BOOL  LDPACTR_anonymous, A68_226  *ReturnedValue, void *NonLocals);

A68_VOID  BEPACTR_initialisespec(A68_129  Xspec);

A68_VOID  JEPACTR_adddecsmodule(A68_137  Decsmodule, A68_INT  Level);

A68_VOID  KFPACTR_addcontextmodule(A68_125  Context);

A68_VOID  OFPACTR_addexternalid(A68_110  Id);

A68_VOID  WFPACTR_initialiseunames(void);

A_STATIC A68_BOOL  ZFPACTR_setspecs(A68_126  Previousym);

A_STATIC A68_BOOL  BIPACTR_matchmodules(A68_138  Previousversion);

A68_VOID  DJPACTR_outputmoduleinformation(void);

A_STATIC A68_VOID  GJPACTR_outputspec(A68_128  Ymspec);

A_STATIC A68_VOID  BPPACTR_generator(A68_BOOL  ZOPACTR_anonymous, A68_130  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CQPACTR_declareidlist(A68_197 * Idlist);

A_STATIC A68_VOID  HQPACTR_processuselist(A68_198 * Uselist);

A68_VOID  VSPACTR_declareusedids(void);

A68_VOID  IUPACTR_processcontexts(void);

A_STATIC A68_VOID  MROACTR_generator(A68_BOOL  KROACTR_anonymous, A68_180  *ReturnedValue, void *NonLocals)
#define NL(x) (((NROACTR_generator *)NonLocals)->x)
{ 
A68_180  OROACTR;  /* clause result */
A68_180  PROACTR;  /* OPERATORS - dynamic generator */
{ 
PROACTR.dim[0].upb = 2 ;
PROACTR.dim[0].lwb = 1 ;
(void)A_1INITSTRIDES(PROACTR) ;
( KROACTR_anonymous? A_R1LOC(A68_INT ,PROACTR): A_R1HEAP(A68_INT ,PROACTR) );
OROACTR = PROACTR;
} 
*ReturnedValue = (OROACTR);
return;
} 
#undef NL

A_STATIC A68_CHAR  JROACTR_hexchar(A68_RC  S)
{ 
A68_210  LROACTR_generator;   /* proc value of non-global proc */
A68_180  RROACTR;  /* avoid structure result */
A68_180  QROACTR_ir A_UNUSED = {0};
A68_INT * SROACTR_i A_UNUSED = {0};
A68_CHAR  TROACTR_c A_UNUSED = {0};
A68_CHAR * UROACTR;  /* forall control - []x */
A68_INT  VROACTR;  /* forall loop counter */
A68_BOOL  WROACTR;  /* optbool result */
A68_BOOL  XROACTR;  /* optbool result */
A68_CHAR  YROACTR;  /* clause result */
A68_INT  ZROACTR;  /* YIELD */
A68_INT  ASOACTR;  /* YIELD */
A_PROC_ENTRY(hexchar);
 /* line 255: */
{ 
A_CLOSURE( LROACTR_generator, MROACTR_generator, NROACTR_generator );
A_CALLPROC(LROACTR_generator,(A68_TRUE, &RROACTR),(A68_TRUE, &RROACTR,(LROACTR_generator).nonlocals));
QROACTR_ir = RROACTR;
 /* line 256: */
 /* line 257: */
VROACTR = QROACTR_ir.dim[0].upb - QROACTR_ir.dim[0].lwb;
if ( VROACTR != S.dim[0].upb - S.dim[0].lwb )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
SROACTR_i = QROACTR_ir.data;
UROACTR = S.data;
for (;VROACTR-- >= 0;
(SROACTR_i += QROACTR_ir.dim[0].stride
,UROACTR += S.dim[0].stride
) )
{
TROACTR_c = *UROACTR;
 /* line 258: */
WROACTR = ((A68_INT)(unsigned char)TROACTR_c>=(A68_INT)(unsigned char)'0');
if ( WROACTR )
{ /* line 259: */
WROACTR = ((A68_INT)(unsigned char)TROACTR_c<=(A68_INT)(unsigned char)'9');
}
if (WROACTR)
{ 
 /* line 260: */
(void)((*SROACTR_i) = ((A68_INT)(unsigned char)TROACTR_c-(A68_INT)(unsigned char)'0'));
} 
else
{ 
 /* line 261: */
XROACTR = ((A68_INT)(unsigned char)TROACTR_c>=(A68_INT)(unsigned char)'a');
if ( XROACTR )
{ /* line 262: */
XROACTR = ((A68_INT)(unsigned char)TROACTR_c<=(A68_INT)(unsigned char)'f');
}
if (XROACTR)
{ 
 /* line 263: */
(void)((*SROACTR_i) = (((A68_INT)(unsigned char)TROACTR_c-(A68_INT)(unsigned char)'a')+10));
} 
else
{ 
 /* line 264: */
 /* line 265: */
(void)(SXIACTR_terminalerror(261));
} 
} 
}
 /* line 266: */
 /* line 267: */
ZROACTR = 1 ;
ASOACTR = 2 ;
YROACTR = (A68_SSBITS)((16*(*(&A_R1INDEX(QROACTR_ir,ZROACTR))))+(*(&A_R1INDEX(QROACTR_ir,ASOACTR))));
} 
A_PROC_EXIT(hexchar);
return( YROACTR );
} 
#undef NL

A_STATIC A68_VOID  ISOACTR_generator(A68_BOOL  GSOACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((JSOACTR_generator *)NonLocals)->x)
{ 
A68_VC  KSOACTR;  /* clause result */
A68_VC  LSOACTR;  /* OPERATORS - dynamic generator */
{ 
LSOACTR.upb = (*NL(BSOACTR_ubound)) ;
( GSOACTR_anonymous? A_VLOC(A68_CHAR ,LSOACTR): A_VHEAP(A68_CHAR ,LSOACTR) );
KSOACTR = LSOACTR;
} 
*ReturnedValue = (KSOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  SSOACTR_generator(A68_BOOL  QSOACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((TSOACTR_generator *)NonLocals)->x)
{ 
A68_VC  USOACTR;  /* clause result */
A68_VC  VSOACTR;  /* OPERATORS - dynamic generator */
{ 
VSOACTR.upb = ((2*(*NL(BSOACTR_ubound)))+2) ;
( QSOACTR_anonymous? A_VLOC(A68_CHAR ,VSOACTR): A_VHEAP(A68_CHAR ,VSOACTR) );
USOACTR = VSOACTR;
} 
*ReturnedValue = (USOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  STOACTR_generator(A68_BOOL  QTOACTR_anonymous, A68_130  *ReturnedValue, void *NonLocals)
#define NL(x) (((TTOACTR_generator *)NonLocals)->x)
{ 
A68_130  UTOACTR;  /* clause result */
A68_130  VTOACTR;  /* OPERATORS - dynamic generator */
{ 
VTOACTR.upb = (*NL(CSOACTR_cbound)) ;
( QTOACTR_anonymous? A_VLOC(A68_132 ,VTOACTR): A_VHEAP(A68_132 ,VTOACTR) );
UTOACTR = VTOACTR;
} 
*ReturnedValue = (UTOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  WZOACTR_generator(A68_BOOL  UZOACTR_anonymous, A68_127  *ReturnedValue, void *NonLocals)
#define NL(x) (((XZOACTR_generator *)NonLocals)->x)
{ 
A68_127  YZOACTR;  /* clause result */
A68_127  ZZOACTR;  /* OPERATORS - dynamic generator */
A68_INT  AAPACTR;  /* ADICOPS - ABS INT */
{ 
AAPACTR = (*(&(NL(FXOACTR_xmi)->Type))) ;
ZZOACTR.upb = A_ABS(AAPACTR) ;
( UZOACTR_anonymous? A_VLOC(A68_128 ,ZZOACTR): A_VHEAP(A68_128 ,ZZOACTR) );
YZOACTR = ZZOACTR;
} 
*ReturnedValue = (YZOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  FDPACTR_generator(A68_BOOL  DDPACTR_anonymous, A68_228  *ReturnedValue, void *NonLocals)
#define NL(x) (((GDPACTR_generator *)NonLocals)->x)
{ 
A68_228  HDPACTR;  /* clause result */
A68_228  IDPACTR;  /* OPERATORS - dynamic generator */
A68_INT  JDPACTR;  /* ADICOPS - ABS INT */
{ 
JDPACTR = NL(Xmodinfo).Type ;
IDPACTR.dim[0].upb = A_ABS(JDPACTR) ;
IDPACTR.dim[0].lwb = 1 ;
(void)A_1INITSTRIDES(IDPACTR) ;
( DDPACTR_anonymous? A_R1LOC(A68_128 ,IDPACTR): A_R1HEAP(A68_128 ,IDPACTR) );
HDPACTR = IDPACTR;
} 
*ReturnedValue = (HDPACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  NDPACTR_generator(A68_BOOL  LDPACTR_anonymous, A68_226  *ReturnedValue, void *NonLocals)
#define NL(x) (((ODPACTR_generator *)NonLocals)->x)
{ 
A68_226  PDPACTR;  /* clause result */
A68_226  QDPACTR;  /* OPERATORS - dynamic generator */
{ 
QDPACTR.dim[0].upb = NL(XCPACTR_maxlevel) ;
QDPACTR.dim[0].lwb = 0 ;
(void)A_1INITSTRIDES(QDPACTR) ;
( LDPACTR_anonymous? A_R1LOC(A68_199 *,QDPACTR): A_R1HEAP(A68_199 *,QDPACTR) );
PDPACTR = QDPACTR;
} 
*ReturnedValue = (PDPACTR);
return;
} 
#undef NL

A_STATIC A68_BOOL  ZFPACTR_setspecs(A68_126  Previousym)
{ 
A68_BOOL  AGPACTR_specsmatch A_UNUSED = {0};
A68_BOOL  BGPACTR_outoforder A_UNUSED = {0};
A68_BOOL  CGPACTR_previousispartcomperror A_UNUSED = {0};
A68_BOOL  DGPACTR_previousiscompilationerror A_UNUSED = {0};
A68_128 * EGPACTR_currentspec A_UNUSED = {0};
A68_INT  FGPACTR;  /* forall loop counter */
A68_139  GGPACTR;  /* avoid structure result */
A68_139  HGPACTR_previousspec A_UNUSED = {0};
A68_BOOL  IGPACTR;  /* clause result */
A68_VC  JGPACTR;  /* OPERATORS - istruct -> vector */
A68_109  KGPACTR;  /* OPERATORS - istruct -> vector */
A68_159  LGPACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_105 * MGPACTR;  /* YIELD */
A68_LINT * NGPACTR;  /* YIELD */
A68_133  OGPACTR;  /* united object - for case conformity */
A68_VC  PGPACTR_keeps A_UNUSED = {0};
A68_133  QGPACTR;  /* united object - for case conformity */
A68_VC  RGPACTR_previouskeeps A_UNUSED = {0};
A68_BOOL  SGPACTR;  /* clause result */
A68_VC  TGPACTR;  /* OPERATORS - trim index */
A68_133  UGPACTR;  /* united object - for case conformity */
A68_127  VGPACTR;  /* OPERATORS - simple index */
A68_INT  WGPACTR;  /* YIELD */
A68_131  XGPACTR_previouscnames A_UNUSED = {0};
A68_BOOL  YGPACTR;  /* clause result */
A68_BOOL  ZGPACTR_cnamesmatch A_UNUSED = {0};
A68_105 * AHPACTR_previouscname A_UNUSED = {0};
A68_105 * BHPACTR_cname A_UNUSED = {0};
A68_131  CHPACTR;  /* forall yield */
A68_INT  DHPACTR;  /* forall loop counter */
A68_VC  EHPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  FHPACTR;  /* OPERATORS - istruct -> vector */
A68_127  GHPACTR;  /* OPERATORS - simple index */
A68_INT  HHPACTR;  /* YIELD */
A68_128 * IHPACTR_previousymspec A_UNUSED = {0};
A68_130 * JHPACTR;  /* YIELD */
A68_105 * KHPACTR;  /* YIELD */
A68_LINT * LHPACTR;  /* YIELD */
A68_239  MHPACTR;  /* collateral clause result */
A68_VC  NHPACTR;  /* OPERATORS - istruct -> vector */
A68_109  OHPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  PHPACTR;  /* avoid structure result */
A68_159  UHPACTR;  /* OPERATORS - istruct to row */
A68_130  VHPACTR;  /* OPERATORS - nil -> mode */
A68_130 * WHPACTR;  /* YIELD */
A68_105 * XHPACTR;  /* YIELD */
A68_LINT * YHPACTR;  /* YIELD */
A68_BOOL  ZHPACTR;  /* clause result */
A_PROC_ENTRY(setspecs);
 /* line 679: */
 /* line 681: */
{ 
AGPACTR_specsmatch = A68_TRUE;
 /* line 682: */
BGPACTR_outoforder = A68_FALSE;
 /* line 683: */
CGPACTR_previousispartcomperror = A68_FALSE;
 /* line 684: */
DGPACTR_previousiscompilationerror = A68_FALSE;
 /* line 686: */
 /* line 687: */
FGPACTR = RCPACTR_specs.dim[0].upb - RCPACTR_specs.dim[0].lwb;
EGPACTR_currentspec = RCPACTR_specs.data;
for (;FGPACTR-- >= 0;
(EGPACTR_currentspec += RCPACTR_specs.dim[0].stride
) )
{
 /* line 688: */
 /* line 690: */
{ 
SOOACTR_givespec( (*(&(PCPACTR_currentmodinfo->Name))), (*(&((&(EGPACTR_currentspec->Xs))->F))), Previousym, &GGPACTR );
HGPACTR_previousspec = GGPACTR;
 /* line 691: */
 /* line 692: */
 /* line 693: */
IGPACTR = (HGPACTR_previousspec.Xs.No==(-2));
if (IGPACTR)
{ 
 /* line 694: */
KGPACTR = (*(&((&(EGPACTR_currentspec->Xs))->F))) ;
(void)(NWIACTR_pmessage(323, A_HARR(LGPACTR,A_HISVEC(JGPACTR,KGPACTR,32,A68_CHAR ),A68_VC )));
 /* line 695: */
MGPACTR = (&(EGPACTR_currentspec->Ys)) ;
(void)((*MGPACTR) = QIMACTR_newuniquename());
 /* line 696: */
NGPACTR = (&(EGPACTR_currentspec->Timeoflastchange)) ;
(void)((*NGPACTR) = (*(&((&IYIACTR_config_info)->Translationtime))));
 /* line 697: */
 /* line 698: */
 /* line 699: */
AGPACTR_specsmatch = A68_FALSE;
} 
else
{ 
 /* line 700: */
OGPACTR = (*(&((&(EGPACTR_currentspec->Xs))->U))) ;
switch ( OGPACTR.mode )
{ 
case 1: /* REF VECTOR [] CHAR */
PGPACTR_keeps = (OGPACTR.data.mode1);
 /* line 701: */
 /* line 702: */
QGPACTR = HGPACTR_previousspec.Xs.U ;
switch ( QGPACTR.mode )
{ 
case 1: /* REF VECTOR [] CHAR */
RGPACTR_previouskeeps = (QGPACTR.data.mode1);
 /* line 703: */
 /* line 704: */
 /* line 705: */
if (KQIACTR_keeplistoption)
{ 
 /* line 706: */
if (PGPACTR_keeps.upb>RGPACTR_previouskeeps.upb)
{ 
 /* line 707: */
SGPACTR = A_VC_EQ(A_VTRIM(TGPACTR,(PGPACTR_keeps),A_VTSCRIPT(&(TGPACTR.upb),(PGPACTR_keeps).upb,1,RGPACTR_previouskeeps.upb)),RGPACTR_previouskeeps);
} 
else
{ 
 /* line 708: */
 /* line 709: */
SGPACTR = A_VC_EQ(PGPACTR_keeps,RGPACTR_previouskeeps);
} 
} 
else
{ 
 /* line 710: */
 /* line 712: */
SGPACTR = A_VC_EQ(PGPACTR_keeps,RGPACTR_previouskeeps);
} 
break;
case 2: /* REF VECTOR [] MODE108 */
 /* line 713: */
 /* line 714: */
 /* line 716: */
SGPACTR = (!(CGPACTR_previousispartcomperror = A68_TRUE));
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
case 2: /* REF VECTOR [] MODE108 */
 /* line 717: */
 /* line 718: */
UGPACTR = HGPACTR_previousspec.Xs.U ;
switch ( UGPACTR.mode )
{ 
case 2: /* REF VECTOR [] MODE108 */
 /* line 719: */
 /* line 721: */
{ 
VGPACTR = Previousym.Specs ;
WGPACTR = HGPACTR_previousspec.Xs.No ;
XGPACTR_previouscnames = (*(&((&A_VINDEX(VGPACTR,WGPACTR))->Cnames)));
 /* line 722: */
 /* line 723: */
YGPACTR = ((*(&(EGPACTR_currentspec->Cnames))).upb!=XGPACTR_previouscnames.upb);
if (YGPACTR)
{ 
 /* line 724: */
 /* line 725: */
SGPACTR = A68_FALSE;
} 
else
{ 
ZGPACTR_cnamesmatch = A68_TRUE;
 /* line 726: */
 /* line 727: */
CHPACTR = (*(&(EGPACTR_currentspec->Cnames))) ;
DHPACTR = XGPACTR_previouscnames.upb -1;
if ( DHPACTR != CHPACTR.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
AHPACTR_previouscname = XGPACTR_previouscnames.data;
BHPACTR_cname = CHPACTR.data;
for (;DHPACTR-- >= 0;
(AHPACTR_previouscname++
,BHPACTR_cname++
) )
{
 /* line 728: */
 /* line 729: */
if ( !(ZGPACTR_cnamesmatch) ) break;
 /* line 730: */
(void)(ZGPACTR_cnamesmatch = A_VC_EQ(A_HISVEC(EHPACTR,(*BHPACTR_cname),7,A68_CHAR ),A_HISVEC(FHPACTR,(*AHPACTR_previouscname),7,A68_CHAR )));
}
 /* line 731: */
 /* line 732: */
 /* line 734: */
SGPACTR = ZGPACTR_cnamesmatch;
} 
} 
break;
case 1: /* REF VECTOR [] CHAR */
 /* line 735: */
 /* line 736: */
 /* line 737: */
 /* line 738: */
 /* line 739: */
SGPACTR = (!(DGPACTR_previousiscompilationerror = A68_TRUE));
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
if (SGPACTR)
{ 
(void)(BGPACTR_outoforder = (BGPACTR_outoforder|((*(&((&(EGPACTR_currentspec->Xs))->No)))!=HGPACTR_previousspec.Xs.No)));
 /* line 740: */
GHPACTR = Previousym.Specs ;
HHPACTR = 1 ;
IHPACTR_previousymspec = (&A_VINDEX(GHPACTR,HHPACTR));
 /* line 741: */
JHPACTR = (&(EGPACTR_currentspec->Keptinfo)) ;
(void)((*JHPACTR) = (*(&(IHPACTR_previousymspec->Keptinfo))));
 /* line 742: */
KHPACTR = (&(EGPACTR_currentspec->Ys)) ;
(*KHPACTR) = HGPACTR_previousspec.Ys;
 /* line 743: */
 /* line 745: */
 /* line 746: */
LHPACTR = (&(EGPACTR_currentspec->Timeoflastchange)) ;
(void)((*LHPACTR) = (*(&(IHPACTR_previousymspec->Timeoflastchange))));
} 
else
{ 
 /* line 747: */
OHPACTR = (*(&((&(EGPACTR_currentspec->Xs))->F))) ;
BNAAOSF_before( A_HISVEC(NHPACTR,OHPACTR,32,A68_CHAR ), ' ', &PHPACTR );
MHPACTR.data[0] = PHPACTR;
if (KOOACTR_composition)
{ 
MHPACTR.data[1] = RHPACTR;
} 
else
{ 
MHPACTR.data[1] = THPACTR;
} 
(void)(VWIACTR_pwarning(324, A_HIS1ARR(UHPACTR,MHPACTR,A68_VC ,2)));
 /* line 748: */
WHPACTR = (&(EGPACTR_currentspec->Keptinfo)) ;
(void)((*WHPACTR) = A_VVAC(VHPACTR));
 /* line 749: */
XHPACTR = (&(EGPACTR_currentspec->Ys)) ;
(void)((*XHPACTR) = QIMACTR_newuniquename());
 /* line 750: */
AGPACTR_specsmatch = A68_FALSE;
 /* line 751: */
 /* line 752: */
YHPACTR = (&(EGPACTR_currentspec->Timeoflastchange)) ;
(void)((*YHPACTR) = (*(&((&IYIACTR_config_info)->Translationtime))));
} 
} 
} 
}
 /* line 755: */
 /* line 756: */
if (CGPACTR_previousispartcomperror)
{ 
 /* line 757: */
 /* line 758: */
(void)(JXIACTR_warning(327));
} 
else
{ 
if (DGPACTR_previousiscompilationerror)
{ 
 /* line 759: */
 /* line 760: */
(void)(JXIACTR_warning(345));
} 
else
{ 
if (BGPACTR_outoforder)
{ 
 /* line 761: */
(void)(JXIACTR_warning(328));
} 
} 
} 
 /* line 763: */
 /* line 764: */
ZHPACTR = (AGPACTR_specsmatch&(!BGPACTR_outoforder));
} 
A_PROC_EXIT(setspecs);
return( ZHPACTR );
} 
#undef NL

A_STATIC A68_BOOL  BIPACTR_matchmodules(A68_138  Previousversion)
{ 
A68_VC  CIPACTR;  /* OPERATORS - istruct -> vector */
A68_105  DIPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  EIPACTR;  /* OPERATORS - istruct -> vector */
A68_105  FIPACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  GIPACTR_localcontextsmatch A_UNUSED = {0};
A68_VC  HIPACTR;  /* OPERATORS - istruct -> vector */
A68_105  IIPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  JIPACTR;  /* OPERATORS - istruct -> vector */
A68_105  KIPACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  LIPACTR_globalcontextsmatch A_UNUSED = {0};
A68_BOOL  MIPACTR;  /* clause result */
A_PROC_ENTRY(matchmodules);
 /* line 772: */
 /* line 774: */
{ 
 /* line 753: */
DIPACTR = (*(&(QCPACTR_checkinfo->L))) ;
FIPACTR = Previousversion.Ym.Lname ;
GIPACTR_localcontextsmatch = A_VC_EQ(A_HISVEC(CIPACTR,DIPACTR,7,A68_CHAR ),A_HISVEC(EIPACTR,FIPACTR,7,A68_CHAR ));
 /* line 775: */
 /* line 776: */
IIPACTR = (*(&(QCPACTR_checkinfo->G))) ;
KIPACTR = Previousversion.Ym.Gname ;
LIPACTR_globalcontextsmatch = A_VC_EQ(A_HISVEC(HIPACTR,IIPACTR,7,A68_CHAR ),A_HISVEC(JIPACTR,KIPACTR,7,A68_CHAR ));
 /* line 778: */
 /* line 779: */
if (!GIPACTR_localcontextsmatch)
{ 
 /* line 780: */
(void)(JXIACTR_warning(334));
} 
 /* line 782: */
 /* line 783: */
if (!LIPACTR_globalcontextsmatch)
{ 
 /* line 784: */
(void)(JXIACTR_warning(335));
} 
 /* line 786: */
 /* line 787: */
if ((*(&(PCPACTR_currentmodinfo->Type)))==Previousversion.Xmi.Type)
{ 
 /* line 788: */
MIPACTR = (GIPACTR_localcontextsmatch&LIPACTR_globalcontextsmatch);
} 
else
{ 
 /* line 789: */
if ((*(&(PCPACTR_currentmodinfo->Type)))==(-1))
{ 
 /* line 790: */
(void)(JXIACTR_warning(321));
} 
else
{ 
 /* line 791: */
if (Previousversion.Xmi.Type==(-1))
{ 
 /* line 792: */
(void)(JXIACTR_warning(322));
} 
else
{ 
 /* line 793: */
(void)(JXIACTR_warning(329));
} 
} 
 /* line 794: */
 /* line 795: */
 /* line 796: */
MIPACTR = A68_FALSE;
} 
} 
A_PROC_EXIT(matchmodules);
return( MIPACTR );
} 
#undef NL

A_STATIC A68_VOID  GJPACTR_outputspec(A68_128  Ymspec)
{ 
A68_129  HJPACTR_xspec A_UNUSED = {0};
A68_105  IJPACTR_ys A_UNUSED = {0};
A68_243  JJPACTR;  /* collateral clause result */
A68_VC  KJPACTR;  /* OPERATORS - istruct -> vector */
A68_109  LJPACTR;  /* OPERATORS - istruct -> vector */
A68_142  MJPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  NJPACTR;  /* YIELD */
A68_142  OJPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  PJPACTR;  /* avoid structure result */
A68_142  QJPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_142  RJPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  SJPACTR;  /* avoid structure result */
A68_142  TJPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_142  UJPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  VJPACTR;  /* avoid structure result */
A68_142  WJPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_142  XJPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_141  YJPACTR;  /* OPERATORS - istruct -> vector */
A68_133  ZJPACTR;  /* united object - for case conformity */
A68_VC  AKPACTR_rc A_UNUSED = {0};
A68_186  FKPACTR;  /* procedure value */
A68_244  GKPACTR;  /* collateral clause result */
A68_VC  HKPACTR;  /* avoid structure result */
A68_142  IKPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_142  JKPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  KKPACTR;  /* avoid structure result */
A68_142  LKPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_142  MKPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_141  NKPACTR;  /* OPERATORS - istruct -> vector */
A68_CHAR * OKPACTR_c A_UNUSED = {0};
A68_INT  PKPACTR;  /* forall loop counter */
A68_VC  QKPACTR;  /* avoid structure result */
A68_142  RKPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_141  SKPACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_245  TKPACTR;  /* collateral clause result */
A68_142  UKPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  VKPACTR;  /* OPERATORS - istruct -> vector */
A68_142  WKPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  XKPACTR;  /* YIELD */
A68_142  YKPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ZKPACTR;  /* avoid structure result */
A68_142  ALPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_142  BLPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  CLPACTR;  /* avoid structure result */
A68_142  DLPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_142  ELPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_141  FLPACTR;  /* OPERATORS - istruct -> vector */
A68_132 * GLPACTR_keptitem A_UNUSED = {0};
A68_130  HLPACTR;  /* forall yield */
A68_INT  ILPACTR;  /* forall loop counter */
A68_BOOL  JLPACTR_rhspresent A_UNUSED = {0};
A68_246  KLPACTR;  /* collateral clause result */
A68_VC  LLPACTR;  /* OPERATORS - istruct -> vector */
A68_105  MLPACTR;  /* OPERATORS - istruct -> vector */
A68_142  NLPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  OLPACTR;  /* YIELD */
A68_142  PLPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_142  QLPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_142  RLPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_142  SLPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_142  TLPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_142  ULPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_142  VLPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_142  WLPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_142  XLPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_142  YLPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_142  ZLPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_142  AMPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_142  BMPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  CMPACTR;  /* YIELD */
A68_142  DMPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_141  EMPACTR;  /* OPERATORS - istruct -> vector */
A68_244  FMPACTR;  /* collateral clause result */
A68_142  GMPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  HMPACTR;  /* YIELD */
A68_142  IMPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_142  JMPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_142  KMPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_141  LMPACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(outputspec);
 /* line 835: */
 /* line 836: */
{ 
HJPACTR_xspec = Ymspec.Xs;
 /* line 837: */
IJPACTR_ys = Ymspec.Ys;
 /* line 838: */
LJPACTR = HJPACTR_xspec.F ;
NJPACTR = A_HISVEC(KJPACTR,LJPACTR,32,A68_CHAR ) ;
JJPACTR.data[0] = A_UNITE(MJPACTR,mode2,2,NJPACTR);
JJPACTR.data[1] = A_UNITE(OJPACTR,mode3,3,EIAACTR_cnewline);
WRAAOSF_xc( HJPACTR_xspec.No, &PJPACTR );
JJPACTR.data[2] = A_UNITE(QJPACTR,mode2,2,PJPACTR);
 /* line 839: */
JJPACTR.data[3] = A_UNITE(RJPACTR,mode3,3,EIAACTR_cnewline);
WRAAOSF_xc( HJPACTR_xspec.Nl, &SJPACTR );
JJPACTR.data[4] = A_UNITE(TJPACTR,mode2,2,SJPACTR);
JJPACTR.data[5] = A_UNITE(UJPACTR,mode3,3,EIAACTR_cnewline);
WRAAOSF_xc( HJPACTR_xspec.Ng, &VJPACTR );
JJPACTR.data[6] = A_UNITE(WJPACTR,mode2,2,VJPACTR);
JJPACTR.data[7] = A_UNITE(XJPACTR,mode3,3,EIAACTR_cnewline);
(void)(AVLACTR_writemodinfo(A_HISVEC(YJPACTR,JJPACTR,8,A68_142 )));
 /* line 841: */
 /* line 842: */
ZJPACTR = HJPACTR_xspec.U ;
switch ( ZJPACTR.mode )
{ 
case 1: /* REF VECTOR [] CHAR */
AKPACTR_rc = (ZJPACTR.data.mode1);
 /* line 843: */
 /* line 844: */
{ 
 /* line 845: */
 /* line 846: */
if (ZCHACTR_tracelevel(CKPACTR)!=0)
{ 
(void)(WNOACTR_debugmessage(1, EKPACTR));
 /* line 847: */
 /* line 848: */
FKPACTR.fn.fn_global = WNOACTR_debugmessage;
FKPACTR.nonlocals = A68_NIL;
(void)(QYKACTR_decodespec(AKPACTR_rc, FKPACTR));
} 
 /* line 850: */
WRAAOSF_xc( 1, &HKPACTR );
GKPACTR.data[0] = A_UNITE(IKPACTR,mode2,2,HKPACTR);
GKPACTR.data[1] = A_UNITE(JKPACTR,mode3,3,EIAACTR_cnewline);
WRAAOSF_xc( AKPACTR_rc.upb, &KKPACTR );
GKPACTR.data[2] = A_UNITE(LKPACTR,mode2,2,KKPACTR);
GKPACTR.data[3] = A_UNITE(MKPACTR,mode3,3,EIAACTR_cnewline);
(void)(AVLACTR_writemodinfo(A_HISVEC(NKPACTR,GKPACTR,4,A68_142 )));
 /* line 852: */
PKPACTR = AKPACTR_rc.upb -1;
OKPACTR_c = AKPACTR_rc.data;
for (;PKPACTR-- >= 0;
(OKPACTR_c++
) )
{
BQAAOSF_hex( (A68_LBITS )(A68_BITS )(A68_INT)(unsigned char)(*OKPACTR_c), 2, &QKPACTR );
(void)(AVLACTR_writemodinfo(A_HVEC(SKPACTR,A_UNITE(RKPACTR,mode2,2,QKPACTR),A68_142 )));
}
 /* line 854: */
 /* line 855: */
 /* line 856: */
TKPACTR.data[0] = A_UNITE(UKPACTR,mode3,3,EIAACTR_cnewline);
XKPACTR = A_HISVEC(VKPACTR,IJPACTR_ys,7,A68_CHAR ) ;
TKPACTR.data[1] = A_UNITE(WKPACTR,mode2,2,XKPACTR);
 /* line 857: */
TKPACTR.data[2] = A_UNITE(YKPACTR,mode3,3,EIAACTR_cnewline);
JPAAOSF_lwhole( Ymspec.Timeoflastchange, 0, &ZKPACTR );
TKPACTR.data[3] = A_UNITE(ALPACTR,mode2,2,ZKPACTR);
 /* line 858: */
TKPACTR.data[4] = A_UNITE(BLPACTR,mode3,3,EIAACTR_cnewline);
 /* line 859: */
ROAAOSF_whole( Ymspec.Keptinfo.upb, 0, &CLPACTR );
TKPACTR.data[5] = A_UNITE(DLPACTR,mode2,2,CLPACTR);
TKPACTR.data[6] = A_UNITE(ELPACTR,mode3,3,EIAACTR_cnewline);
(void)(AVLACTR_writemodinfo(A_HISVEC(FLPACTR,TKPACTR,7,A68_142 )));
 /* line 861: */
 /* line 862: */
HLPACTR = Ymspec.Keptinfo ;
ILPACTR = HLPACTR.upb -1;
GLPACTR_keptitem = HLPACTR.data;
for (;ILPACTR-- >= 0;
(GLPACTR_keptitem++
) )
{
 /* line 864: */
JLPACTR_rhspresent = ((*(&(GLPACTR_keptitem->Rhs))).upb>0);
 /* line 866: */
 /* line 867: */
 /* line 868: */
MLPACTR = (*(&(GLPACTR_keptitem->Prefix))) ;
OLPACTR = A_HISVEC(LLPACTR,MLPACTR,7,A68_CHAR ) ;
KLPACTR.data[0] = A_UNITE(NLPACTR,mode2,2,OLPACTR);
if (*(&(GLPACTR_keptitem->Optimised)))
{ 
KLPACTR.data[1] = A_UNITE(PLPACTR,mode1,1,SNOACTR_flip);
} 
else
{ 
 /* line 869: */
KLPACTR.data[1] = A_UNITE(QLPACTR,mode1,1,TNOACTR_flop);
} 
if (*(&(GLPACTR_keptitem->Iddec)))
{ 
KLPACTR.data[2] = A_UNITE(RLPACTR,mode1,1,SNOACTR_flip);
} 
else
{ 
 /* line 870: */
KLPACTR.data[2] = A_UNITE(SLPACTR,mode1,1,TNOACTR_flop);
} 
if (*(&(GLPACTR_keptitem->Globalproc)))
{ 
KLPACTR.data[3] = A_UNITE(TLPACTR,mode1,1,SNOACTR_flip);
} 
else
{ 
 /* line 871: */
KLPACTR.data[3] = A_UNITE(ULPACTR,mode1,1,TNOACTR_flop);
} 
if (*(&(GLPACTR_keptitem->Keptgenproc)))
{ 
KLPACTR.data[4] = A_UNITE(VLPACTR,mode1,1,SNOACTR_flip);
} 
else
{ 
 /* line 872: */
KLPACTR.data[4] = A_UNITE(WLPACTR,mode1,1,TNOACTR_flop);
} 
if (*(&(GLPACTR_keptitem->Forceuse)))
{ 
KLPACTR.data[5] = A_UNITE(XLPACTR,mode1,1,SNOACTR_flip);
} 
else
{ 
 /* line 873: */
KLPACTR.data[5] = A_UNITE(YLPACTR,mode1,1,TNOACTR_flop);
} 
if (JLPACTR_rhspresent)
{ 
KLPACTR.data[6] = A_UNITE(ZLPACTR,mode1,1,SNOACTR_flip);
} 
else
{ 
 /* line 874: */
KLPACTR.data[6] = A_UNITE(AMPACTR,mode1,1,TNOACTR_flop);
} 
 /* line 876: */
CMPACTR = (*(&(GLPACTR_keptitem->Definition))) ;
KLPACTR.data[7] = A_UNITE(BMPACTR,mode2,2,CMPACTR);
KLPACTR.data[8] = A_UNITE(DMPACTR,mode3,3,EIAACTR_cnewline);
(void)(AVLACTR_writemodinfo(A_HISVEC(EMPACTR,KLPACTR,9,A68_142 )));
 /* line 878: */
 /* line 879: */
 /* line 880: */
if (JLPACTR_rhspresent)
{ 
HMPACTR = (*(&(GLPACTR_keptitem->Rhs))) ;
FMPACTR.data[0] = A_UNITE(GMPACTR,mode2,2,HMPACTR);
FMPACTR.data[1] = A_UNITE(IMPACTR,mode3,3,EIAACTR_cnewline);
FMPACTR.data[2] = A_UNITE(JMPACTR,mode2,2,JOOACTR_alien_termination_string);
FMPACTR.data[3] = A_UNITE(KMPACTR,mode3,3,EIAACTR_cnewline);
 /* line 881: */
 /* line 882: */
(void)(AVLACTR_writemodinfo(A_HISVEC(LMPACTR,FMPACTR,4,A68_142 )));
} 
}
 /* line 883: */
 /* line 884: */
} 
break;
case 2: /* REF VECTOR [] MODE108 */
 /* line 885: */
 /* line 886: */
 /* line 887: */
(void)(WXIACTR_assert(NMPACTR, A68_FALSE));
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(outputspec);
return;
} 
#undef NL

A_STATIC A68_VOID  BPPACTR_generator(A68_BOOL  ZOPACTR_anonymous, A68_130  *ReturnedValue, void *NonLocals)
#define NL(x) (((CPPACTR_generator *)NonLocals)->x)
{ 
A68_130  DPPACTR;  /* clause result */
A68_130  EPPACTR;  /* OPERATORS - dynamic generator */
{ 
EPPACTR.upb = ICPACTR_keptdecnos.dim[0].upb ;
( ZOPACTR_anonymous? A_VLOC(A68_132 ,EPPACTR): A_VHEAP(A68_132 ,EPPACTR) );
DPPACTR = EPPACTR;
} 
*ReturnedValue = (DPPACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  WNOACTR_debugmessage(A68_INT  Level, A68_VC  M)
{ 
A68_VC  COOACTR;  /* avoid structure result */
A_PROC_ENTRY(debugmessage);
 /* line 113: */
 /* line 114: */
if (ZCHACTR_tracelevel(YNOACTR)>=Level)
{ 
 /* line 115: */
ROAAOSF_whole( Level, 0, &COOACTR );
(void)(A_CALLPROC(MSIACTR_list,(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(BOOACTR,COOACTR),DOOACTR),M)),(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(BOOACTR,COOACTR),DOOACTR),M),(MSIACTR_list).nonlocals)));
} 
A_PROC_EXIT(debugmessage);
return;
} 
#undef NL

A68_VOID  SOOACTR_givespec(A68_109  N, A68_109  F, A68_126  Ym, A68_139  *ReturnedValue)
{ 
A68_INT  TOOACTR_no A_UNUSED = {0};
A68_128 * UOOACTR_spec A_UNUSED = {0};
A68_127  VOOACTR;  /* forall yield */
A68_INT  WOOACTR;  /* forall loop counter */
A68_VC  XOOACTR;  /* OPERATORS - istruct -> vector */
A68_109  YOOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ZOOACTR;  /* OPERATORS - istruct -> vector */
A68_139  APOACTR;  /* clause result */
A68_127  BPOACTR;  /* OPERATORS - simple index */
A68_128 * CPOACTR_spec A_UNUSED = {0};
A68_139  DPOACTR;  /* collateral clause result */
A_PROC_ENTRY(givespec);
 /* line 135: */
 /* line 136: */
{ 
TOOACTR_no = 1;
 /* line 137: */
 /* line 138: */
VOOACTR = Ym.Specs ;
WOOACTR = VOOACTR.upb -1;
UOOACTR_spec = VOOACTR.data;
for (;WOOACTR-- >= 0;
(UOOACTR_spec++
) )
{
 /* line 139: */
YOOACTR = (*(&((&(UOOACTR_spec->Xs))->F))) ;
if ( !(A_VC_NE(A_HISVEC(XOOACTR,YOOACTR,32,A68_CHAR ),A_HISVEC(ZOOACTR,F,32,A68_CHAR ))) ) break;
 /* line 140: */
TOOACTR_no+=1;
}
 /* line 141: */
 /* line 142: */
 /* line 143: */
if (TOOACTR_no>Ym.Specs.upb)
{ 
APOACTR = OOOACTR_nullspec;
} 
else
{ 
BPOACTR = Ym.Specs ;
CPOACTR_spec = (&A_VINDEX(BPOACTR,TOOACTR_no));
 /* line 144: */
DPOACTR.Xs = (*(&(CPOACTR_spec->Xs)));
 /* line 145: */
 /* line 146: */
DPOACTR.Ys = (*(&(CPOACTR_spec->Ys)));
APOACTR = DPOACTR;
} 
} 
A_PROC_EXIT(givespec);
*ReturnedValue = (APOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  FPOACTR_filter(A68_VC  Name, A68_VC  *ReturnedValue)
{ 
A68_VC  GPOACTR;  /* clause result */
A68_VC  HPOACTR;  /* OPERATORS - trim index */
A68_VC  IPOACTR;  /* avoid structure result */
A_PROC_ENTRY(filter);
 /* line 149: */
BNAAOSF_before( A_VTRIM(HPOACTR,(Name),A_VTSCRIPT(&(HPOACTR.upb),(Name).upb,1,SRIACTR_filenametruncate)), ' ', &IPOACTR );
GPOACTR = IPOACTR;
A_PROC_EXIT(filter);
*ReturnedValue = (GPOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  KPOACTR_generator(A68_BOOL  JPOACTR_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  LPOACTR;  /* clause result */
A68_VC  MPOACTR;  /* OPERATORS - dynamic generator */
{ 
MPOACTR.upb = 500 ;
( JPOACTR_anonymous? A_VLOC(A68_CHAR ,MPOACTR): A_VHEAP(A68_CHAR ,MPOACTR) );
LPOACTR = MPOACTR;
} 
*ReturnedValue = (LPOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  RPOACTR_read_int(A68_59 * F, A68_INT * Ri)
{ 
A68_INT  SPOACTR_chars_read A_UNUSED = {0};
A68_60  TPOACTR;  /* avoid structure result */
A68_BOOL  UPOACTR;  /* optbool result */
A68_VC  VPOACTR;  /* OPERATORS - trim index */
A68_BOOL  WPOACTR;  /* clause result */
A_PROC_ENTRY(read_int);
 /* line 210: */
 /* line 211: */
{ 
 /* line 212: */
 /* line 213: */
DXBAOSF_read_line( F, NPOACTR_modinfo_buf, (&SPOACTR_chars_read), RIBAOSF_ignore_msg, &TPOACTR );
UPOACTR = EVBAOSF_(TPOACTR, OUBAOSF_io_ok);
if ( ! UPOACTR )
{ /* line 214: */
UPOACTR = (!TQAAOSF_vcdectoint(Ri, A_VTRIM(VPOACTR,(NPOACTR_modinfo_buf),A_VTSCRIPT(&(VPOACTR.upb),(NPOACTR_modinfo_buf).upb,1,SPOACTR_chars_read))));
}
 /* line 215: */
WPOACTR = UPOACTR;
if (WPOACTR)
{ 
 /* line 216: */
(void)(SXIACTR_terminalerror(261));
} 
} 
A_PROC_EXIT(read_int);
return;
} 
#undef NL

A_STATIC A68_VOID  ZPOACTR_read_str(A68_59 * F, A68_VC  Str)
{ 
A68_INT  AQOACTR_chars_read A_UNUSED = {0};
A68_60  BQOACTR;  /* avoid structure result */
A68_BOOL  CQOACTR;  /* optbool result */
A68_BOOL  DQOACTR;  /* clause result */
A68_VC  EQOACTR;  /* OPERATORS - trim index */
A68_VC  FQOACTR;  /* OPERATORS - assign op */
A_PROC_ENTRY(read_str);
 /* line 220: */
 /* line 221: */
{ 
 /* line 222: */
 /* line 223: */
DXBAOSF_read_line( F, NPOACTR_modinfo_buf, (&AQOACTR_chars_read), RIBAOSF_ignore_msg, &BQOACTR );
CQOACTR = EVBAOSF_(BQOACTR, OUBAOSF_io_ok);
if ( ! CQOACTR )
{ /* line 224: */
CQOACTR = (AQOACTR_chars_read!=Str.upb);
}
 /* line 225: */
DQOACTR = CQOACTR;
if (DQOACTR)
{ 
 /* line 226: */
 /* line 227: */
(void)(SXIACTR_terminalerror(261));
} 
else
{ 
 /* line 228: */
FQOACTR = A_VTRIM(EQOACTR,(NPOACTR_modinfo_buf),A_VTSCRIPT(&(EQOACTR.upb),(NPOACTR_modinfo_buf).upb,1,AQOACTR_chars_read)) ;
(void)(A_VASSIGN2(FQOACTR,Str,A68_CHAR ));
} 
} 
A_PROC_EXIT(read_str);
return;
} 
#undef NL

A_STATIC A68_VOID  JQOACTR_unpackspec(A68_59 * F, A68_128 * Ymspec, A68_BOOL  Lib_init)
{ 
A68_129 * KQOACTR_xspec A_UNUSED = {0};
A68_105 * LQOACTR_ys A_UNUSED = {0};
A68_INT  MQOACTR_spectype A_UNUSED = {0};
A68_INT  NQOACTR_chars_read A_UNUSED = {0};
A68_VC  OQOACTR;  /* OPERATORS - istruct -> vector */
A68_109 * PQOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  SQOACTR;  /* OPERATORS - istruct -> vector */
A68_109  TQOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  UQOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XQOACTR;  /* avoid structure result */
A68_VC  AROACTR;  /* avoid structure result */
A68_VC  DROACTR;  /* avoid structure result */
A68_VC  GROACTR;  /* avoid structure result */
A68_INT  BSOACTR_ubound A_UNUSED = {0};
A68_INT  CSOACTR_cbound A_UNUSED = {0};
A68_VC  FSOACTR;  /* avoid structure result */
A68_103  HSOACTR_generator;   /* proc value of non-global proc */
A68_VC  MSOACTR;  /* avoid structure result */
A68_VC  NSOACTR_xs A_UNUSED = {0};
A68_133  OSOACTR = {0};  /* OPERATORS - mode -> union mode */
A68_133 * PSOACTR;  /* YIELD */
A68_103  RSOACTR_generator;   /* proc value of non-global proc */
A68_VC  WSOACTR;  /* avoid structure result */
A68_VC  XSOACTR_hex_spec A_UNUSED = {0};
A68_60  YSOACTR;  /* avoid structure result */
A68_INT  ZSOACTR_i A_UNUSED = {0};
A68_INT  ATOACTR;  /* to part of loop */
A68_VC  BTOACTR;  /* OPERATORS - trim index */
A68_VC  CTOACTR;  /* OPERATORS - trim index */
A68_VC  DTOACTR;  /* OPERATORS - trim index */
A68_VC  ETOACTR;  /* YIELD */
A68_RC  FTOACTR;  /* OPERATORS - vector -> row */
A68_CHAR * GTOACTR;  /* YIELD */
A68_133  JTOACTR;  /* united object - for case conformity */
A68_VC  KTOACTR_r A_UNUSED = {0};
A68_VC  LTOACTR;  /* clause result */
A68_186  MTOACTR;  /* procedure value */
A68_VC  NTOACTR;  /* OPERATORS - istruct -> vector */
A68_INT  OTOACTR_i A_UNUSED = {0};
A68_LINT * PTOACTR;  /* YIELD */
A68_212  RTOACTR_generator;   /* proc value of non-global proc */
A68_130  WTOACTR;  /* avoid structure result */
A68_130 * XTOACTR;  /* YIELD */
A68_132 * YTOACTR_keptitem A_UNUSED = {0};
A68_130  ZTOACTR;  /* forall yield */
A68_INT  AUOACTR;  /* forall loop counter */
A68_INT  BUOACTR_chars_read A_UNUSED = {0};
A68_60  CUOACTR;  /* avoid structure result */
A68_INT  DUOACTR_i A_UNUSED = {0};
A68_VC  EUOACTR;  /* OPERATORS - istruct -> vector */
A68_105 * FUOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  GUOACTR;  /* OPERATORS - trim index */
A68_VC  HUOACTR;  /* OPERATORS - trim index */
A68_VC  IUOACTR;  /* OPERATORS - trim index */
A68_VC  JUOACTR;  /* OPERATORS - istruct -> vector */
A68_105  KUOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  LUOACTR;  /* YIELD */
A68_VC  MUOACTR;  /* OPERATORS - assign op */
A68_INT  NUOACTR;  /* YIELD */
A68_BOOL * OUOACTR;  /* YIELD */
A68_INT  PUOACTR;  /* YIELD */
A68_BOOL * QUOACTR;  /* YIELD */
A68_INT  RUOACTR;  /* YIELD */
A68_BOOL * SUOACTR;  /* YIELD */
A68_INT  TUOACTR;  /* YIELD */
A68_BOOL * UUOACTR;  /* YIELD */
A68_INT  VUOACTR;  /* YIELD */
A68_BOOL * WUOACTR;  /* YIELD */
A68_INT  XUOACTR;  /* YIELD */
A68_BOOL  YUOACTR_rhspresent A_UNUSED = {0};
A68_VC  ZUOACTR;  /* OPERATORS - trim index */
A68_VC  AVOACTR;  /* avoid structure result */
A68_VC * BVOACTR;  /* YIELD */
A68_60  CVOACTR;  /* avoid structure result */
A68_60  DVOACTR_read_status A_UNUSED = {0};
A68_BOOL  EVOACTR;  /* clause result */
A68_VC  FVOACTR;  /* OPERATORS - trim index */
A68_VC  GVOACTR_line A_UNUSED = {0};
A68_BOOL  HVOACTR;  /* optbool result */
A68_VC  IVOACTR;  /* OPERATORS - trim index */
A68_BOOL  JVOACTR;  /* clause result */
A68_VC  KVOACTR;  /* avoid structure result */
A68_VC * LVOACTR;  /* YIELD */
A68_VC * MVOACTR_rhs A_UNUSED = {0};
A68_VC  NVOACTR;  /* OPERATORS - trim index */
A_PROC_ENTRY(unpackspec);
 /* line 238: */
 /* line 240: */
{ 
KQOACTR_xspec = (&(Ymspec->Xs));
 /* line 241: */
LQOACTR_ys = (&(Ymspec->Ys));
 /* line 243: */
 /* line 244: */
 /* line 246: */
PQOACTR = (&(KQOACTR_xspec->F)) ;
(void)(ZPOACTR_read_str(F, A_ISVEC(OQOACTR,PQOACTR,32,A68_CHAR )));
TQOACTR = (*(&(KQOACTR_xspec->F))) ;
(void)(WNOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(RQOACTR,A_HISVEC(SQOACTR,TQOACTR,32,A68_CHAR )),A_HVEC(UQOACTR,'\"',A68_CHAR ))));
 /* line 247: */
(void)(RPOACTR_read_int(F, (&(KQOACTR_xspec->No))));
WRAAOSF_xc( (*(&(KQOACTR_xspec->No))), &XQOACTR );
(void)(WNOACTR_debugmessage(1, A_VC_PLUS(WQOACTR,XQOACTR)));
 /* line 248: */
(void)(RPOACTR_read_int(F, (&(KQOACTR_xspec->Nl))));
WRAAOSF_xc( (*(&(KQOACTR_xspec->Nl))), &AROACTR );
(void)(WNOACTR_debugmessage(1, A_VC_PLUS(ZQOACTR,AROACTR)));
 /* line 249: */
(void)(RPOACTR_read_int(F, (&(KQOACTR_xspec->Ng))));
WRAAOSF_xc( (*(&(KQOACTR_xspec->Ng))), &DROACTR );
(void)(WNOACTR_debugmessage(1, A_VC_PLUS(CROACTR,DROACTR)));
 /* line 250: */
(void)(RPOACTR_read_int(F, (&MQOACTR_spectype)));
WRAAOSF_xc( MQOACTR_spectype, &GROACTR );
(void)(WNOACTR_debugmessage(1, A_VC_PLUS(FROACTR,GROACTR)));
 /* line 252: */
 /* line 253: */
switch ( MQOACTR_spectype )
{ 
case 1: 
 /* line 254: */
{ 
 /* line 269: */
 /* line 271: */
(void)(RPOACTR_read_int(F, (&BSOACTR_ubound)));
 /* line 272: */
WRAAOSF_xc( BSOACTR_ubound, &FSOACTR );
(void)(WNOACTR_debugmessage(1, A_VC_PLUS(ESOACTR,FSOACTR)));
 /* line 273: */
A_CLOSURE( HSOACTR_generator, ISOACTR_generator, JSOACTR_generator );
(( JSOACTR_generator * ) ( HSOACTR_generator.nonlocals )) -> BSOACTR_ubound = (&BSOACTR_ubound);
A_CALLPROC(HSOACTR_generator,(A68_FALSE, &MSOACTR),(A68_FALSE, &MSOACTR,(HSOACTR_generator).nonlocals));
NSOACTR_xs = MSOACTR;
 /* line 274: */
PSOACTR = (&(KQOACTR_xspec->U)) ;
(void)((*PSOACTR) = A_UNITE(OSOACTR,mode1,1,NSOACTR_xs));
 /* line 275: */
A_CLOSURE( RSOACTR_generator, SSOACTR_generator, TSOACTR_generator );
(( TSOACTR_generator * ) ( RSOACTR_generator.nonlocals )) -> BSOACTR_ubound = (&BSOACTR_ubound);
A_CALLPROC(RSOACTR_generator,(A68_FALSE, &WSOACTR),(A68_FALSE, &WSOACTR,(RSOACTR_generator).nonlocals));
XSOACTR_hex_spec = WSOACTR;
 /* line 276: */
 /* line 277: */
 /* line 278: */
DXBAOSF_read_line( F, XSOACTR_hex_spec, (&NQOACTR_chars_read), RIBAOSF_ignore_msg, &YSOACTR );
if (EVBAOSF_(YSOACTR, OUBAOSF_io_ok))
{ 
 /* line 279: */
(void)(SXIACTR_terminalerror(261));
} 
 /* line 281: */
 /* line 282: */
ATOACTR = NSOACTR_xs.upb;
for ( ZSOACTR_i = 1;
ZSOACTR_i <= ATOACTR;
ZSOACTR_i += 1 )
{ 
 /* line 283: */
 /* line 284: */
CTOACTR = A_VTRIM(BTOACTR,(XSOACTR_hex_spec),A_VTSCRIPT(&(BTOACTR.upb),(XSOACTR_hex_spec).upb,((2*ZSOACTR_i)-1),(XSOACTR_hex_spec).upb)) ;
ETOACTR = A_VTRIM(DTOACTR,(CTOACTR),A_VTSCRIPT(&(DTOACTR.upb),(CTOACTR).upb,1,2)) ;
GTOACTR = (&A_VINDEX(NSOACTR_xs,ZSOACTR_i)) ;
(void)((*GTOACTR) = JROACTR_hexchar(A_VECARR(ETOACTR,FTOACTR)));
}
 /* line 286: */
 /* line 287: */
 /* line 288: */
if (!Lib_init)
{ 
 /* line 289: */
 /* line 290: */
if (ZCHACTR_tracelevel(ITOACTR)>5)
{ 
JTOACTR = (*(&(KQOACTR_xspec->U))) ;
switch ( JTOACTR.mode )
{ 
case 1: /* REF VECTOR [] CHAR */
KTOACTR_r = (JTOACTR.data.mode1);
LTOACTR = KTOACTR_r;
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 291: */
MTOACTR.fn.fn_global = WNOACTR_debugmessage;
MTOACTR.nonlocals = A68_NIL;
(void)(QYKACTR_decodespec(LTOACTR, MTOACTR));
} 
 /* line 293: */
(void)(ZPOACTR_read_str(F, A_ISVEC(NTOACTR,LQOACTR_ys,7,A68_CHAR )));
 /* line 295: */
 /* line 296: */
(void)(RPOACTR_read_int(F, (&OTOACTR_i)));
 /* line 297: */
PTOACTR = (&(Ymspec->Timeoflastchange)) ;
(*PTOACTR) = (A68_LINT )OTOACTR_i;
 /* line 299: */
(void)(RPOACTR_read_int(F, (&CSOACTR_cbound)));
 /* line 301: */
A_CLOSURE( RTOACTR_generator, STOACTR_generator, TTOACTR_generator );
(( TTOACTR_generator * ) ( RTOACTR_generator.nonlocals )) -> CSOACTR_cbound = (&CSOACTR_cbound);
A_CALLPROC(RTOACTR_generator,(A68_FALSE, &WTOACTR),(A68_FALSE, &WTOACTR,(RTOACTR_generator).nonlocals));
XTOACTR = (&(Ymspec->Keptinfo)) ;
(*XTOACTR) = WTOACTR;
 /* line 302: */
 /* line 303: */
ZTOACTR = (*(&(Ymspec->Keptinfo))) ;
AUOACTR = ZTOACTR.upb -1;
YTOACTR_keptitem = ZTOACTR.data;
for (;AUOACTR-- >= 0;
(YTOACTR_keptitem++
) )
{
 /* line 304: */
 /* line 305: */
 /* line 306: */
 /* line 307: */
DXBAOSF_read_line( F, NPOACTR_modinfo_buf, (&BUOACTR_chars_read), RIBAOSF_ignore_msg, &CUOACTR );
if (EVBAOSF_(CUOACTR, OUBAOSF_io_ok))
{ 
 /* line 308: */
(void)(SXIACTR_terminalerror(261));
} 
 /* line 310: */
 /* line 311: */
FUOACTR = (&(YTOACTR_keptitem->Prefix)) ;
HUOACTR = A_VTRIM(GUOACTR,(NPOACTR_modinfo_buf),A_VTSCRIPT(&(GUOACTR.upb),(NPOACTR_modinfo_buf).upb,1,(NPOACTR_modinfo_buf).upb)) ;
KUOACTR = (*(&(YTOACTR_keptitem->Prefix))) ;
LUOACTR = A_ISVEC(EUOACTR,FUOACTR,7,A68_CHAR ) ;
MUOACTR = A_VTRIM(IUOACTR,(HUOACTR),A_VTSCRIPT(&(IUOACTR.upb),(HUOACTR).upb,1,(DUOACTR_i = A_HISVEC(JUOACTR,KUOACTR,7,A68_CHAR ).upb))) ;
(void)(A_VASSIGN2(MUOACTR,LUOACTR,A68_CHAR ));
 /* line 312: */
NUOACTR = DUOACTR_i+=1 ;
OUOACTR = (&(YTOACTR_keptitem->Optimised)) ;
(void)((*OUOACTR) = ((*(&A_VINDEX(NPOACTR_modinfo_buf,NUOACTR)))==SNOACTR_flip));
 /* line 313: */
PUOACTR = DUOACTR_i+=1 ;
QUOACTR = (&(YTOACTR_keptitem->Iddec)) ;
(void)((*QUOACTR) = ((*(&A_VINDEX(NPOACTR_modinfo_buf,PUOACTR)))==SNOACTR_flip));
 /* line 314: */
RUOACTR = DUOACTR_i+=1 ;
SUOACTR = (&(YTOACTR_keptitem->Globalproc)) ;
(void)((*SUOACTR) = ((*(&A_VINDEX(NPOACTR_modinfo_buf,RUOACTR)))==SNOACTR_flip));
 /* line 315: */
TUOACTR = DUOACTR_i+=1 ;
UUOACTR = (&(YTOACTR_keptitem->Keptgenproc)) ;
(void)((*UUOACTR) = ((*(&A_VINDEX(NPOACTR_modinfo_buf,TUOACTR)))==SNOACTR_flip));
 /* line 316: */
VUOACTR = DUOACTR_i+=1 ;
WUOACTR = (&(YTOACTR_keptitem->Forceuse)) ;
(void)((*WUOACTR) = ((*(&A_VINDEX(NPOACTR_modinfo_buf,VUOACTR)))==SNOACTR_flip));
 /* line 318: */
XUOACTR = DUOACTR_i+=1 ;
YUOACTR_rhspresent = ((*(&A_VINDEX(NPOACTR_modinfo_buf,XUOACTR)))==SNOACTR_flip);
 /* line 319: */
ZCAAOSF_makervc( A_VTRIM(ZUOACTR,(NPOACTR_modinfo_buf),A_VTSCRIPT(&(ZUOACTR.upb),(NPOACTR_modinfo_buf).upb,(DUOACTR_i+=1),BUOACTR_chars_read)), &AVOACTR );
BVOACTR = (&(YTOACTR_keptitem->Definition)) ;
(*BVOACTR) = AVOACTR;
 /* line 321: */
 /* line 322: */
 /* line 323: */
if (YUOACTR_rhspresent)
{ 
for ( ;; )
{ 
 /* line 324: */
 /* line 325: */
{ 
DXBAOSF_read_line( F, NPOACTR_modinfo_buf, (&BUOACTR_chars_read), RIBAOSF_ignore_msg, &CVOACTR );
DVOACTR_read_status = CVOACTR;
 /* line 326: */
 /* line 327: */
 /* line 328: */
EVOACTR = AVBAOSF_(DVOACTR_read_status, OUBAOSF_io_ok);
if (EVOACTR)
{ 
 /* line 329: */
BUOACTR_chars_read+=1;
} 
else
{ 
 /* line 330: */
 /* line 331: */
if (EVBAOSF_(DVOACTR_read_status, XUBAOSF_io_no_newline))
{ 
 /* line 332: */
(void)(SXIACTR_terminalerror(261));
} 
} 
} 
 /* line 333: */
GVOACTR_line = A_VTRIM(FVOACTR,(NPOACTR_modinfo_buf),A_VTSCRIPT(&(FVOACTR.upb),(NPOACTR_modinfo_buf).upb,1,BUOACTR_chars_read));
 /* line 335: */
 /* line 336: */
HVOACTR = (BUOACTR_chars_read!=(JOOACTR_alien_termination_string.upb+1));
if ( ! HVOACTR )
{ /* line 337: */
HVOACTR = A_VC_NE(A_VTRIM(IVOACTR,(GVOACTR_line),A_VTSCRIPT(&(IVOACTR.upb),(GVOACTR_line).upb,1,JOOACTR_alien_termination_string.upb)),JOOACTR_alien_termination_string);
}
 /* line 338: */
JVOACTR = HVOACTR;
if ( !JVOACTR ) break;
 /* line 339: */
ZCAAOSF_makervc( A_VC_PLUS((*(&(YTOACTR_keptitem->Rhs))),GVOACTR_line), &KVOACTR );
LVOACTR = (&(YTOACTR_keptitem->Rhs)) ;
(*LVOACTR) = KVOACTR;
}
 /* line 340: */
} 
 /* line 342: */
MVOACTR_rhs = (&(YTOACTR_keptitem->Rhs));
 /* line 343: */
 /* line 344: */
(void)((*MVOACTR_rhs) = A_VTRIM(NVOACTR,((*MVOACTR_rhs)),A_VTSCRIPT(&(NVOACTR.upb),((*MVOACTR_rhs)).upb,1,((*MVOACTR_rhs).upb-1))));
}
 /* line 345: */
 /* line 346: */
 /* line 349: */
} 
} 
break;
case 2: 
 /* line 350: */
(void)(WXIACTR_assert(PVOACTR, A68_FALSE));
break;
default: 
 /* line 351: */
 /* line 352: */
(void)(SXIACTR_terminalerror(261));
break;
} 
} 
A_PROC_EXIT(unpackspec);
return;
} 
#undef NL

A_STATIC A68_VOID  RVOACTR_nullmodinfo(A68_109  Name, A68_138  *ReturnedValue)
{ 
A68_138  SVOACTR;  /* collateral clause result */
A68_127  TVOACTR;  /* OPERATORS - nil -> mode */
A68_138  UVOACTR;  /* clause result */
A_PROC_ENTRY(nullmodinfo);
 /* line 356: */
SVOACTR.Xmi.Name = Name;
SVOACTR.Xmi.L.N = JNOACTR_nullid;
SVOACTR.Xmi.L.F = JNOACTR_nullid;
SVOACTR.Xmi.L.Level = 0;
SVOACTR.Xmi.G.N = JNOACTR_nullid;
SVOACTR.Xmi.G.F = JNOACTR_nullid;
SVOACTR.Xmi.G.Level = 0;
 /* line 357: */
SVOACTR.Xmi.Type = (-2);
SVOACTR.Ym.Uname = RNOACTR_nulluname;
SVOACTR.Ym.Lname = RNOACTR_nulluname;
SVOACTR.Ym.Gname = RNOACTR_nulluname;
SVOACTR.Ym.Specs = A_VVAC(TVOACTR);
UVOACTR = SVOACTR;
A_PROC_EXIT(nullmodinfo);
*ReturnedValue = (UVOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  YVOACTR_unpackmodinfo(A68_109  Name, A68_59 * F, A68_BOOL  Lib_init, A68_138  *ReturnedValue)
{ 
A68_INT  ZVOACTR_version A_UNUSED = {0};
A68_BOOL  AWOACTR;  /* optbool result */
A68_200  BWOACTR_magic A_UNUSED = {0};
A68_VC  CWOACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  DWOACTR;  /* clause result */
A68_VC  EWOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  FWOACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  GWOACTR;  /* clause result */
A68_VC  JWOACTR;  /* avoid structure result */
A68_VC  MWOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  NWOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  OWOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  PWOACTR;  /* avoid structure result */
A68_159  QWOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_138  RWOACTR;  /* clause result */
A68_138  SWOACTR;  /* avoid structure result */
A68_VC  ZWOACTR;  /* avoid structure result */
A68_VC  CXOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  DXOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_138  EXOACTR_ymodinfo A_UNUSED = {0};
A68_135 * FXOACTR_xmi A_UNUSED = {0};
A68_126 * GXOACTR_ym A_UNUSED = {0};
A68_VC  HXOACTR;  /* OPERATORS - istruct -> vector */
A68_105 * IXOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  LXOACTR;  /* OPERATORS - istruct -> vector */
A68_105  MXOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  NXOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  OXOACTR;  /* OPERATORS - istruct -> vector */
A68_109 * PXOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  SXOACTR;  /* OPERATORS - istruct -> vector */
A68_109  TXOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  UXOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  VXOACTR;  /* OPERATORS - istruct -> vector */
A68_109 * WXOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ZXOACTR;  /* OPERATORS - istruct -> vector */
A68_109  AYOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  BYOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  CYOACTR;  /* OPERATORS - istruct -> vector */
A68_109 * DYOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  GYOACTR;  /* OPERATORS - istruct -> vector */
A68_109  HYOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  IYOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  LYOACTR;  /* avoid structure result */
A68_VC  MYOACTR;  /* OPERATORS - istruct -> vector */
A68_109 * NYOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  QYOACTR;  /* OPERATORS - istruct -> vector */
A68_109  RYOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  SYOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  TYOACTR;  /* OPERATORS - istruct -> vector */
A68_109 * UYOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  XYOACTR;  /* OPERATORS - istruct -> vector */
A68_109  YYOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ZYOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  CZOACTR;  /* avoid structure result */
A68_VC  FZOACTR;  /* avoid structure result */
A68_VC  GZOACTR;  /* OPERATORS - istruct -> vector */
A68_105 * HZOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  KZOACTR;  /* OPERATORS - istruct -> vector */
A68_105  LZOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  MZOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  NZOACTR;  /* OPERATORS - istruct -> vector */
A68_105 * OZOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  RZOACTR;  /* OPERATORS - istruct -> vector */
A68_105  SZOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  TZOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_219  VZOACTR_generator;   /* proc value of non-global proc */
A68_127  BAPACTR;  /* avoid structure result */
A68_127 * CAPACTR;  /* YIELD */
A68_128 * DAPACTR_spec A_UNUSED = {0};
A68_127  EAPACTR;  /* forall yield */
A68_INT  FAPACTR;  /* forall loop counter */
A_PROC_ENTRY(unpackmodinfo);
 /* line 363: */
 /* line 364: */
{ 
{ 
(void)(RPOACTR_read_int(F, (&ZVOACTR_version)));
 /* line 365: */
 /* line 366: */
 /* line 367: */
AWOACTR = (ZVOACTR_version!=EOOACTR_currentmodinfoversion);
if ( ! AWOACTR )
{{ 
(void)(ZPOACTR_read_str(F, A_ISVEC(CWOACTR,(&BWOACTR_magic),8,A68_CHAR )));
 /* line 368: */
 /* line 369: */
DWOACTR = A_VC_NE(A_HISVEC(EWOACTR,BWOACTR_magic,8,A68_CHAR ),A_HISVEC(FWOACTR,GOOACTR_modinfomagic,8,A68_CHAR ));
} 
AWOACTR = DWOACTR;
}
 /* line 370: */
GWOACTR = AWOACTR;
if (GWOACTR)
{ 
WRAAOSF_xc( ZVOACTR_version, &JWOACTR );
(void)(WNOACTR_debugmessage(1, A_VC_PLUS(IWOACTR,JWOACTR)));
 /* line 371: */
(void)(WNOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(LWOACTR,A_HISVEC(MWOACTR,GOOACTR_modinfomagic,8,A68_CHAR )),A_HVEC(NWOACTR,'\"',A68_CHAR ))));
 /* line 373: */
(void)(IWBAOSF_close_file(F, RIBAOSF_ignore_msg));
 /* line 374: */
 /* line 375: */
BNAAOSF_before( A_HISVEC(OWOACTR,Name,32,A68_CHAR ), ' ', &PWOACTR );
(void)(NWIACTR_pmessage(262, A_HARR(QWOACTR,PWOACTR,A68_VC )));
 /* line 376: */
 /* line 377: */
 /* line 378: */
RVOACTR_nullmodinfo( Name, &SWOACTR );
RWOACTR = SWOACTR;
} 
else
{ 
(void)(WNOACTR_debugmessage(1, WWOACTR));
 /* line 379: */
WRAAOSF_xc( ZVOACTR_version, &ZWOACTR );
(void)(WNOACTR_debugmessage(1, A_VC_PLUS(YWOACTR,ZWOACTR)));
 /* line 380: */
(void)(WNOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(BXOACTR,A_HISVEC(CXOACTR,GOOACTR_modinfomagic,8,A68_CHAR )),A_HVEC(DXOACTR,'\"',A68_CHAR ))));
 /* line 382: */
 /* line 383: */
FXOACTR_xmi = (&((&EXOACTR_ymodinfo)->Xmi));
 /* line 384: */
GXOACTR_ym = (&((&EXOACTR_ymodinfo)->Ym));
 /* line 386: */
IXOACTR = (&(GXOACTR_ym->Uname)) ;
(void)(ZPOACTR_read_str(F, A_ISVEC(HXOACTR,IXOACTR,7,A68_CHAR )));
 /* line 387: */
MXOACTR = (*(&(GXOACTR_ym->Uname))) ;
(void)(WNOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(KXOACTR,A_HISVEC(LXOACTR,MXOACTR,7,A68_CHAR )),A_HVEC(NXOACTR,'\"',A68_CHAR ))));
 /* line 388: */
PXOACTR = (&(FXOACTR_xmi->Name)) ;
(void)(ZPOACTR_read_str(F, A_ISVEC(OXOACTR,PXOACTR,32,A68_CHAR )));
 /* line 389: */
TXOACTR = (*(&(FXOACTR_xmi->Name))) ;
(void)(WNOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(RXOACTR,A_HISVEC(SXOACTR,TXOACTR,32,A68_CHAR )),A_HVEC(UXOACTR,'\"',A68_CHAR ))));
 /* line 390: */
WXOACTR = (&((&(FXOACTR_xmi->L))->N)) ;
(void)(ZPOACTR_read_str(F, A_ISVEC(VXOACTR,WXOACTR,32,A68_CHAR )));
 /* line 391: */
 /* line 392: */
AYOACTR = (*(&((&(FXOACTR_xmi->L))->N))) ;
(void)(WNOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(YXOACTR,A_HISVEC(ZXOACTR,AYOACTR,32,A68_CHAR )),A_HVEC(BYOACTR,'\"',A68_CHAR ))));
 /* line 393: */
DYOACTR = (&((&(FXOACTR_xmi->L))->F)) ;
(void)(ZPOACTR_read_str(F, A_ISVEC(CYOACTR,DYOACTR,32,A68_CHAR )));
 /* line 394: */
 /* line 395: */
HYOACTR = (*(&((&(FXOACTR_xmi->L))->F))) ;
(void)(WNOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(FYOACTR,A_HISVEC(GYOACTR,HYOACTR,32,A68_CHAR )),A_HVEC(IYOACTR,'\"',A68_CHAR ))));
 /* line 396: */
(void)(RPOACTR_read_int(F, (&((&(FXOACTR_xmi->L))->Level))));
 /* line 397: */
 /* line 398: */
WRAAOSF_xc( (*(&((&(FXOACTR_xmi->L))->Level))), &LYOACTR );
(void)(WNOACTR_debugmessage(1, A_VC_PLUS(KYOACTR,LYOACTR)));
 /* line 399: */
NYOACTR = (&((&(FXOACTR_xmi->G))->N)) ;
(void)(ZPOACTR_read_str(F, A_ISVEC(MYOACTR,NYOACTR,32,A68_CHAR )));
 /* line 400: */
 /* line 401: */
RYOACTR = (*(&((&(FXOACTR_xmi->G))->N))) ;
(void)(WNOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(PYOACTR,A_HISVEC(QYOACTR,RYOACTR,32,A68_CHAR )),A_HVEC(SYOACTR,'\"',A68_CHAR ))));
 /* line 402: */
UYOACTR = (&((&(FXOACTR_xmi->G))->F)) ;
(void)(ZPOACTR_read_str(F, A_ISVEC(TYOACTR,UYOACTR,32,A68_CHAR )));
 /* line 403: */
 /* line 404: */
YYOACTR = (*(&((&(FXOACTR_xmi->G))->F))) ;
(void)(WNOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(WYOACTR,A_HISVEC(XYOACTR,YYOACTR,32,A68_CHAR )),A_HVEC(ZYOACTR,'\"',A68_CHAR ))));
 /* line 405: */
(void)(RPOACTR_read_int(F, (&((&(FXOACTR_xmi->G))->Level))));
 /* line 406: */
 /* line 407: */
WRAAOSF_xc( (*(&((&(FXOACTR_xmi->G))->Level))), &CZOACTR );
(void)(WNOACTR_debugmessage(1, A_VC_PLUS(BZOACTR,CZOACTR)));
 /* line 408: */
(void)(RPOACTR_read_int(F, (&(FXOACTR_xmi->Type))));
 /* line 409: */
 /* line 410: */
WRAAOSF_xc( (*(&(FXOACTR_xmi->Type))), &FZOACTR );
(void)(WNOACTR_debugmessage(1, A_VC_PLUS(EZOACTR,FZOACTR)));
 /* line 411: */
HZOACTR = (&(GXOACTR_ym->Lname)) ;
(void)(ZPOACTR_read_str(F, A_ISVEC(GZOACTR,HZOACTR,7,A68_CHAR )));
 /* line 412: */
 /* line 413: */
LZOACTR = (*(&(GXOACTR_ym->Lname))) ;
(void)(WNOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(JZOACTR,A_HISVEC(KZOACTR,LZOACTR,7,A68_CHAR )),A_HVEC(MZOACTR,'\"',A68_CHAR ))));
 /* line 414: */
OZOACTR = (&(GXOACTR_ym->Gname)) ;
(void)(ZPOACTR_read_str(F, A_ISVEC(NZOACTR,OZOACTR,7,A68_CHAR )));
 /* line 415: */
 /* line 416: */
SZOACTR = (*(&(GXOACTR_ym->Gname))) ;
(void)(WNOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(QZOACTR,A_HISVEC(RZOACTR,SZOACTR,7,A68_CHAR )),A_HVEC(TZOACTR,'\"',A68_CHAR ))));
 /* line 418: */
A_CLOSURE( VZOACTR_generator, WZOACTR_generator, XZOACTR_generator );
(( XZOACTR_generator * ) ( VZOACTR_generator.nonlocals )) -> FXOACTR_xmi = FXOACTR_xmi;
A_CALLPROC(VZOACTR_generator,(A68_FALSE, &BAPACTR),(A68_FALSE, &BAPACTR,(VZOACTR_generator).nonlocals));
CAPACTR = (&(GXOACTR_ym->Specs)) ;
(*CAPACTR) = BAPACTR;
 /* line 420: */
 /* line 421: */
EAPACTR = (*(&(GXOACTR_ym->Specs))) ;
FAPACTR = EAPACTR.upb -1;
DAPACTR_spec = EAPACTR.data;
for (;FAPACTR-- >= 0;
(DAPACTR_spec++
) )
{
 /* line 422: */
(void)(WNOACTR_debugmessage(1, HAPACTR));
 /* line 423: */
 /* line 424: */
(void)(JQOACTR_unpackspec(F, DAPACTR_spec, Lib_init));
}
 /* line 425: */
UWOACTR_return: A_UNUSED;
 /* line 426: */
(void)(IWBAOSF_close_file(F, RIBAOSF_ignore_msg));
 /* line 427: */
 /* line 428: */
RWOACTR = EXOACTR_ymodinfo;
} 
} 
} 
A_PROC_EXIT(unpackmodinfo);
*ReturnedValue = (RWOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  KAPACTR_getmodinfo(A68_109  Name, A68_169 * Dirlist, A68_138  *ReturnedValue)
{ 
A68_VC  LAPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  MAPACTR;  /* OPERATORS - istruct -> vector */
A68_138  NAPACTR;  /* clause result */
A68_138  OAPACTR = {0};  /* OPERATORS - skip to mode */
A68_VC  QAPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  RAPACTR;  /* avoid structure result */
A68_VC  TAPACTR_modinfobasename A_UNUSED = {0};
A68_VC  UAPACTR_full_filename A_UNUSED = {0};
A68_VC  XAPACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_59 * YAPACTR_modinfofile A_UNUSED = {0};
A68_BOOL  ZAPACTR;  /* clause result */
A68_138  ABPACTR;  /* avoid structure result */
A68_166  BBPACTR;  /* collateral clause result */
A68_166 * CBPACTR;  /* YIELD */
A68_166 ** DBPACTR;  /* YIELD */
A68_138  EBPACTR;  /* avoid structure result */
A_PROC_ENTRY(getmodinfo);
 /* line 439: */
 /* line 440: */
 /* line 429: */
 /* line 441: */
if (A_VC_EQ(A_HISVEC(LAPACTR,Name,32,A68_CHAR ),A_HISVEC(MAPACTR,PNOACTR_stdpreludeid,32,A68_CHAR )))
{ 
(void)(SXIACTR_terminalerror(804));
 /* line 442: */
 /* line 443: */
 /* line 444: */
NAPACTR = OAPACTR;
} 
else
{ 
{ 
FPOACTR_filter( A_HISVEC(QAPACTR,Name,32,A68_CHAR ), &RAPACTR );
TAPACTR_modinfobasename = A_VC_PLUS(RAPACTR,SAPACTR);
 /* line 445: */
 /* line 446: */
(void)(WNOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(WAPACTR,TAPACTR_modinfobasename),A_HVEC(XAPACTR,')',A68_CHAR ))));
 /* line 447: */
YAPACTR_modinfofile = BJJACTR_find_and_open_file(TAPACTR_modinfobasename, Dirlist, (&UAPACTR_full_filename));
 /* line 448: */
 /* line 449: */
 /* line 450: */
ZAPACTR = (YAPACTR_modinfofile==SSBAOSF_nil_file);
if (ZAPACTR)
{ 
 /* line 451: */
 /* line 452: */
RVOACTR_nullmodinfo( Name, &ABPACTR );
NAPACTR = ABPACTR;
} 
else
{ 
BBPACTR.Modinfo_file = UAPACTR_full_filename;
BBPACTR.Next = (*(&((&IYIACTR_config_info)->Used_modules)));
CBPACTR = A_HEAP(A68_166 ) ;
(void)((*CBPACTR) = BBPACTR) ;
DBPACTR = (&((&IYIACTR_config_info)->Used_modules)) ;
(*DBPACTR) = CBPACTR;
 /* line 453: */
 /* line 454: */
YVOACTR_unpackmodinfo( Name, YAPACTR_modinfofile, A68_FALSE, &EBPACTR );
NAPACTR = EBPACTR;
} 
} 
} 
A_PROC_EXIT(getmodinfo);
*ReturnedValue = (NAPACTR);
return;
} 
#undef NL

A68_VOID  NBPACTR_givemoduledetails(A68_109  Name, A68_INT  Nametype, A68_BOOL  Closure, A68_138  *ReturnedValue)
{ 
A68_138  QBPACTR;  /* clause result */
A68_138  RBPACTR = {0};  /* OPERATORS - skip to mode */
A68_138  SBPACTR;  /* avoid structure result */
A68_184  TBPACTR;  /* procedure value */
A68_109  UBPACTR_lib_module A_UNUSED = {0};
A68_BOOL  VBPACTR;  /* clause result */
A68_VC  WBPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  XBPACTR;  /* OPERATORS - simple index */
A68_INT  YBPACTR;  /* YIELD */
A68_138  ZBPACTR;  /* avoid structure result */
A68_138  ACPACTR;  /* avoid structure result */
A_PROC_ENTRY(givemoduledetails);
 /* line 469: */
 /* line 471: */
 /* line 472: */
if (Closure)
{ 
(void)(WXIACTR_assert(PBPACTR, A68_FALSE));
 /* line 473: */
 /* line 474: */
 /* line 475: */
QBPACTR = RBPACTR;
} 
else
{ 
 /* line 476: */
 /* line 477: */
if (Nametype==0)
{ 
 /* line 478: */
 /* line 479: */
KAPACTR_getmodinfo( Name, DRIACTR_modinfo_dirlist, &SBPACTR );
QBPACTR = SBPACTR;
} 
else
{ 
{ 
TBPACTR.fn.fn_global = YVOACTR_unpackmodinfo;
TBPACTR.nonlocals = A68_NIL;
UBPACTR_lib_module = YOLACTR_lookup_library(Name, Nametype, TBPACTR);
 /* line 480: */
 /* line 481: */
 /* line 482: */
XBPACTR = A_HISVEC(WBPACTR,UBPACTR_lib_module,32,A68_CHAR ) ;
YBPACTR = 1 ;
VBPACTR = (A_VINDEX(XBPACTR,YBPACTR)==' ');
if (VBPACTR)
{ 
 /* line 483: */
 /* line 484: */
RVOACTR_nullmodinfo( Name, &ZBPACTR );
QBPACTR = ZBPACTR;
} 
else
{ 
 /* line 485: */
KAPACTR_getmodinfo( UBPACTR_lib_module, FRIACTR_library_directory, &ACPACTR );
QBPACTR = ACPACTR;
} 
} 
} 
} 
A_PROC_EXIT(givemoduledetails);
*ReturnedValue = (QBPACTR);
return;
} 
#undef NL

A68_VOID  TCPACTR_initialisecurrentmodule(A68_135  Xmodinfo)
{ 
A68_VC  UCPACTR;  /* OPERATORS - istruct -> vector */
A68_109  VCPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  WCPACTR;  /* avoid structure result */
A68_INT  XCPACTR_maxlevel A_UNUSED = {0};
A68_INT  BDPACTR;  /* ADICOPS - ABS INT */
A68_231  EDPACTR_generator;   /* proc value of non-global proc */
A68_228  KDPACTR;  /* avoid structure result */
A68_232  MDPACTR_generator;   /* proc value of non-global proc */
A68_226  RDPACTR;  /* avoid structure result */
A68_INT  SDPACTR_level A_UNUSED = {0};
A68_199 ** VDPACTR;  /* YIELD */
A68_BOOL  WDPACTR;  /* clause result */
A68_195  XDPACTR;  /* collateral clause result */
A68_INT  YDPACTR;  /* YIELD */
A68_195 * ZDPACTR;  /* YIELD */
A_PROC_ENTRY(initialisecurrentmodule);
 /* line 542: */
 /* line 543: */
{ 
 /* line 544: */
VCPACTR = Xmodinfo.Name ;
FPOACTR_filter( A_HISVEC(UCPACTR,VCPACTR,32,A68_CHAR ), &WCPACTR );
if (A_VC_NE(WCPACTR,YQIACTR_basenamesourcefile))
{ 
 /* line 545: */
(void)(JXIACTR_warning(337));
} 
 /* line 547: */
XCPACTR_maxlevel = (Xmodinfo.L.Level+Xmodinfo.G.Level);
 /* line 548: */
(void)(WXIACTR_assert(ZCPACTR, (XCPACTR_maxlevel==0)));
 /* line 549: */
(*PCPACTR_currentmodinfo) = Xmodinfo;
 /* line 550: */
BDPACTR = Xmodinfo.Type ;
(void)(WXIACTR_assert(CDPACTR, (A_ABS(BDPACTR)<=1)));
 /* line 551: */
A_CLOSURE( EDPACTR_generator, FDPACTR_generator, GDPACTR_generator );
(( GDPACTR_generator * ) ( EDPACTR_generator.nonlocals )) -> Xmodinfo = Xmodinfo;
A_CALLPROC(EDPACTR_generator,(A68_FALSE, &KDPACTR),(A68_FALSE, &KDPACTR,(EDPACTR_generator).nonlocals));
RCPACTR_specs = KDPACTR;
 /* line 552: */
 /* line 553: */
 /* line 554: */
if (!KOOACTR_composition)
{ 
A_CLOSURE( MDPACTR_generator, NDPACTR_generator, ODPACTR_generator );
(( ODPACTR_generator * ) ( MDPACTR_generator.nonlocals )) -> XCPACTR_maxlevel = XCPACTR_maxlevel;
A_CALLPROC(MDPACTR_generator,(A68_FALSE, &RDPACTR),(A68_FALSE, &RDPACTR,(MDPACTR_generator).nonlocals));
FCPACTR_contexts = RDPACTR;
 /* line 555: */
for ( ;; )
{ 
SDPACTR_level = (*(&(DCPACTR_contextlist->Level)));
 /* line 556: */
(void)(WXIACTR_assert(UDPACTR, (SDPACTR_level<=XCPACTR_maxlevel)));
 /* line 557: */
VDPACTR = (&A_R1INDEX(FCPACTR_contexts,SDPACTR_level)) ;
(*VDPACTR) = DCPACTR_contextlist;
 /* line 558: */
 /* line 559: */
 /* line 560: */
WDPACTR = (SDPACTR_level!=0);
if ( !WDPACTR ) break;
 /* line 561: */
(void)(DCPACTR_contextlist = (*(&(DCPACTR_contextlist->Rest))));
}
 /* line 562: */
 /* line 563: */
 /* line 564: */
XDPACTR.L = (*(&((*(&A_R1INDEX(FCPACTR_contexts,XCPACTR_maxlevel)))->Ys)));
 /* line 565: */
 /* line 566: */
YDPACTR = Xmodinfo.G.Level ;
XDPACTR.G = (*(&((*(&A_R1INDEX(FCPACTR_contexts,YDPACTR)))->Ys)));
ZDPACTR = (&((&OCPACTR_currentmodule)->Checkinfo)) ;
(*ZDPACTR) = XDPACTR;
} 
 /* line 567: */
 /* line 568: */
NCPACTR_currentmoduleinitialised = A68_TRUE;
} 
A_PROC_EXIT(initialisecurrentmodule);
return;
} 
#undef NL

A68_VOID  BEPACTR_initialisespec(A68_129  Xspec)
{ 
A68_INT  CEPACTR;  /* clause result */
A68_INT  DEPACTR_no A_UNUSED = {0};
A68_129 * GEPACTR;  /* YIELD */
A_PROC_ENTRY(initialisespec);
 /* line 575: */
 /* line 576: */
{ 
if (Xspec.No==0)
{ 
CEPACTR = 1;
} 
else
{ 
CEPACTR = Xspec.No;
} 
DEPACTR_no = CEPACTR;
 /* line 577: */
(void)(WXIACTR_assert(FEPACTR, (DEPACTR_no<=RCPACTR_specs.dim[0].upb)));
 /* line 578: */
 /* line 579: */
GEPACTR = (&((&A_R1INDEX(RCPACTR_specs,DEPACTR_no))->Xs)) ;
(*GEPACTR) = Xspec;
} 
A_PROC_EXIT(initialisespec);
return;
} 
#undef NL

A68_VOID  JEPACTR_adddecsmodule(A68_137  Decsmodule, A68_INT  Level)
{ 
A68_BOOL  KEPACTR;  /* clause result */
A68_199 * LEPACTR_context A_UNUSED = {0};
A68_VC  MEPACTR;  /* OPERATORS - istruct -> vector */
A68_105  NEPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  OEPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  PEPACTR;  /* clause result */
A68_VC  QEPACTR;  /* OPERATORS - istruct -> vector */
A68_105  REPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  SEPACTR;  /* OPERATORS - istruct -> vector */
A68_105  TEPACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  UEPACTR;  /* clause result */
A68_VC  VEPACTR;  /* OPERATORS - istruct -> vector */
A68_105  WEPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  XEPACTR;  /* OPERATORS - istruct -> vector */
A68_105  YEPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ZEPACTR;  /* OPERATORS - istruct -> vector */
A68_105  AFPACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  BFPACTR_contextaccessible A_UNUSED = {0};
A68_198 ** CFPACTR_uselist A_UNUSED = {0};
A68_198  DFPACTR;  /* collateral clause result */
A68_198 * EFPACTR;  /* YIELD */
A68_127  FFPACTR;  /* OPERATORS - simple index */
A68_INT  GFPACTR;  /* YIELD */
A68_130  HFPACTR;  /* YIELD */
A68_227  IFPACTR;  /* OPERATORS - vector -> row */
A_PROC_ENTRY(adddecsmodule);
 /* line 590: */
 /* line 592: */
{ 
 /* line 593: */
 /* line 597: */
if (Level==0)
{ 
 /* line 598: */
KEPACTR = NCPACTR_currentmoduleinitialised;
} 
else
{ 
if (!NCPACTR_currentmoduleinitialised)
{ 
 /* line 600: */
KEPACTR = A68_FALSE;
} 
else
{ 
 /* line 601: */
if (Level>FCPACTR_contexts.dim[0].upb)
{ 
(void)(PXIACTR_error(341));
 /* line 603: */
KEPACTR = A68_FALSE;
} 
else
{ 
{ 
LEPACTR_context = (*(&A_R1INDEX(FCPACTR_contexts,Level)));
 /* line 604: */
 /* line 605: */
 /* line 606: */
 /* line 607: */
 /* line 608: */
NEPACTR = (*(&((&(LEPACTR_context->Ym))->Gname))) ;
if (A_VC_EQ(A_HISVEC(MEPACTR,NEPACTR,7,A68_CHAR ),A_HISVEC(OEPACTR,RNOACTR_nulluname,7,A68_CHAR )))
{ 
 /* line 609: */
REPACTR = (*(&((&(LEPACTR_context->Ym))->Lname))) ;
PEPACTR = A_HISVEC(QEPACTR,REPACTR,7,A68_CHAR );
} 
else
{ 
 /* line 610: */
TEPACTR = (*(&((&(LEPACTR_context->Ym))->Gname))) ;
PEPACTR = A_HISVEC(SEPACTR,TEPACTR,7,A68_CHAR );
} 
WEPACTR = Decsmodule.Ym.Lname ;
YEPACTR = (*(&((*(&A_R1INDEX(FCPACTR_contexts,Level)))->Ys))) ;
AFPACTR = Decsmodule.Ym.Gname ;
UEPACTR = (A_VC_NE(A_HISVEC(VEPACTR,WEPACTR,7,A68_CHAR ),A_HISVEC(XEPACTR,YEPACTR,7,A68_CHAR ))|A_VC_NE(A_HISVEC(ZEPACTR,AFPACTR,7,A68_CHAR ),PEPACTR));
if (UEPACTR)
{ 
(void)(PXIACTR_error(342));
 /* line 611: */
KEPACTR = A68_FALSE;
} 
else
{ 
 /* line 612: */
KEPACTR = A68_TRUE;
} 
} 
} 
} 
} 
BFPACTR_contextaccessible = KEPACTR;
 /* line 614: */
 /* line 615: */
if (BFPACTR_contextaccessible)
{ 
CFPACTR_uselist = (&((*(&A_R1INDEX(FCPACTR_contexts,Level)))->Uses));
 /* line 616: */
 /* line 617: */
DFPACTR.Name = Decsmodule.Name;
DFPACTR.Uname = Decsmodule.Ym.Uname;
DFPACTR.Ids = (A68_197 *)A68_NIL;
DFPACTR.Rest = (*CFPACTR_uselist);
EFPACTR = A_HEAP(A68_198 ) ;
(void)((*EFPACTR) = DFPACTR) ;
(*CFPACTR_uselist) = EFPACTR;
 /* line 618: */
(void)(GCPACTR_idlist = (&((*CFPACTR_uselist)->Ids)));
 /* line 619: */
 /* line 620: */
 /* line 621: */
FFPACTR = Decsmodule.Ym.Specs ;
GFPACTR = 1 ;
HFPACTR = (*(&((&A_VINDEX(FFPACTR,GFPACTR))->Keptinfo))) ;
(void)(HCPACTR_currentkeptinfo = A_VECARR(HFPACTR,IFPACTR));
} 
else
{ 
 /* line 622: */
 /* line 623: */
(void)(GCPACTR_idlist = A_HEAP(A68_197 *));
} 
} 
A_PROC_EXIT(adddecsmodule);
return;
} 
#undef NL

A68_VOID  KFPACTR_addcontextmodule(A68_125  Context)
{ 
A_PROC_ENTRY(addcontextmodule);
 /* line 631: */
 /* line 632: */
{ 
(void)(WXIACTR_assert(MFPACTR, A68_FALSE));
 /* line 633: */
/*SKIP*/;
} 
A_PROC_EXIT(addcontextmodule);
return;
} 
#undef NL

A68_VOID  OFPACTR_addexternalid(A68_110  Id)
{ 
A68_INT  PFPACTR;  /* YIELD */
A68_132 * QFPACTR_currentidinfo A_UNUSED = {0};
A68_197  RFPACTR;  /* collateral clause result */
A68_197 * SFPACTR;  /* YIELD */
A68_227  TFPACTR;  /* clause result */
A68_227  UFPACTR;  /* OPERATORS - trim index */
A68_227  VFPACTR;  /* OPERATORS - nil -> mode */
A_PROC_ENTRY(addexternalid);
 /* line 640: */
 /* line 641: */
{ 
PFPACTR = 1 ;
QFPACTR_currentidinfo = (&A_R1INDEX(HCPACTR_currentkeptinfo,PFPACTR));
 /* line 643: */
 /* line 644: */
if (*(&(QFPACTR_currentidinfo->Keptgenproc)))
{ 
RFPACTR.Name = LNOACTR_anonymousid;
} 
else
{ 
 /* line 645: */
RFPACTR.Name = Id.Name;
} 
 /* line 646: */
RFPACTR.Uname = (*(&(QFPACTR_currentidinfo->Prefix)));
 /* line 647: */
RFPACTR.Optimised = (*(&(QFPACTR_currentidinfo->Optimised)));
 /* line 648: */
RFPACTR.Iddec = (*(&(QFPACTR_currentidinfo->Iddec)));
 /* line 649: */
RFPACTR.Globalproc = (*(&(QFPACTR_currentidinfo->Globalproc)));
 /* line 650: */
RFPACTR.Genproc = (*(&(QFPACTR_currentidinfo->Keptgenproc)));
 /* line 651: */
RFPACTR.Forceuse = (*(&(QFPACTR_currentidinfo->Forceuse)));
 /* line 652: */
RFPACTR.Mode = Id.Mode;
 /* line 653: */
RFPACTR.Decno = Id.Decno;
 /* line 654: */
RFPACTR.Definition = (*(&(QFPACTR_currentidinfo->Definition)));
 /* line 656: */
RFPACTR.Rhs = (*(&(QFPACTR_currentidinfo->Rhs)));
RFPACTR.Rest = (A68_197 *)A68_NIL;
SFPACTR = A_HEAP(A68_197 ) ;
(void)((*SFPACTR) = RFPACTR) ;
(*GCPACTR_idlist) = SFPACTR;
 /* line 657: */
(void)(GCPACTR_idlist = (&((*GCPACTR_idlist)->Rest)));
 /* line 658: */
 /* line 659: */
if (HCPACTR_currentkeptinfo.dim[0].upb>1)
{ 
TFPACTR = A_R1TRIM(UFPACTR,(HCPACTR_currentkeptinfo),A_RTSCRIPT(&(UFPACTR.dim[0]),&((HCPACTR_currentkeptinfo).dim[0]),2,(HCPACTR_currentkeptinfo).dim[0].upb,1));
} 
else
{ 
 /* line 660: */
TFPACTR = A_R1VAC(VFPACTR);
} 
HCPACTR_currentkeptinfo = TFPACTR;
} 
A_PROC_EXIT(addexternalid);
return;
} 
#undef NL

A68_VOID  WFPACTR_initialiseunames(void)
{ 
A68_138  PIPACTR;  /* avoid structure result */
A68_138  QIPACTR_previousversion A_UNUSED = {0};
A68_105 * TIPACTR;  /* YIELD */
A68_128 * UIPACTR_spec A_UNUSED = {0};
A68_INT  VIPACTR;  /* forall loop counter */
A68_LINT * WIPACTR;  /* YIELD */
A68_105 * XIPACTR;  /* YIELD */
A68_BOOL  YIPACTR_specsmatch A_UNUSED = {0};
A68_BOOL  ZIPACTR_modulesmatch A_UNUSED = {0};
A68_BOOL  AJPACTR;  /* clause result */
A68_105 * BJPACTR;  /* YIELD */
A68_105 * CJPACTR;  /* YIELD */
A_PROC_ENTRY(initialiseunames);
{ 
 /* line 767: */
 /* line 801: */
(void)(WNOACTR_debugmessage(1, OIPACTR));
 /* line 803: */
KAPACTR_getmodinfo( (*(&(PCPACTR_currentmodinfo->Name))), DRIACTR_modinfo_dirlist, &PIPACTR );
QIPACTR_previousversion = PIPACTR;
 /* line 805: */
 /* line 806: */
 /* line 808: */
if (QIPACTR_previousversion.Xmi.Type==(-2))
{ 
(void)(WNOACTR_debugmessage(1, SIPACTR));
 /* line 810: */
KCPACTR_previousversionfound = A68_FALSE;
 /* line 811: */
TIPACTR = (&((&OCPACTR_currentmodule)->Uname)) ;
(void)((*TIPACTR) = QIMACTR_newuniquename());
 /* line 812: */
 /* line 813: */
VIPACTR = RCPACTR_specs.dim[0].upb - RCPACTR_specs.dim[0].lwb;
UIPACTR_spec = RCPACTR_specs.data;
for (;VIPACTR-- >= 0;
(UIPACTR_spec += RCPACTR_specs.dim[0].stride
) )
{
 /* line 814: */
WIPACTR = (&(UIPACTR_spec->Timeoflastchange)) ;
(void)((*WIPACTR) = (*(&((&IYIACTR_config_info)->Translationtime))));
 /* line 815: */
 /* line 816: */
XIPACTR = (&(UIPACTR_spec->Ys)) ;
(void)((*XIPACTR) = QIMACTR_newuniquename());
}
 /* line 818: */
} 
else
{ 
{ 
YIPACTR_specsmatch = ZFPACTR_setspecs(QIPACTR_previousversion.Ym);
 /* line 819: */
KCPACTR_previousversionfound = A68_TRUE;
 /* line 820: */
ZIPACTR_modulesmatch = BIPACTR_matchmodules(QIPACTR_previousversion);
 /* line 821: */
 /* line 822: */
 /* line 823: */
AJPACTR = (YIPACTR_specsmatch&ZIPACTR_modulesmatch);
if (AJPACTR)
{ 
LCPACTR_rscompatiblewithpreviousversion = A68_TRUE;
 /* line 824: */
 /* line 825: */
 /* line 826: */
BJPACTR = (&((&OCPACTR_currentmodule)->Uname)) ;
(*BJPACTR) = QIPACTR_previousversion.Ym.Uname;
} 
else
{ 
LCPACTR_rscompatiblewithpreviousversion = A68_FALSE;
 /* line 827: */
 /* line 828: */
CJPACTR = (&((&OCPACTR_currentmodule)->Uname)) ;
(void)((*CJPACTR) = QIMACTR_newuniquename());
} 
} 
} 
} 
A_PROC_EXIT(initialiseunames);
return;
} 
#undef NL

A68_VOID  DJPACTR_outputmoduleinformation(void)
{ 
A68_247  OMPACTR;  /* collateral clause result */
A68_VC  PMPACTR;  /* avoid structure result */
A68_142  QMPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_142  RMPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  SMPACTR;  /* OPERATORS - istruct -> vector */
A68_142  TMPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  UMPACTR;  /* YIELD */
A68_142  VMPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  WMPACTR;  /* OPERATORS - istruct -> vector */
A68_105  XMPACTR;  /* OPERATORS - istruct -> vector */
A68_142  YMPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ZMPACTR;  /* YIELD */
A68_142  ANPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  BNPACTR;  /* OPERATORS - istruct -> vector */
A68_109  CNPACTR;  /* OPERATORS - istruct -> vector */
A68_142  DNPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ENPACTR;  /* YIELD */
A68_142  FNPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  GNPACTR;  /* OPERATORS - istruct -> vector */
A68_109  HNPACTR;  /* OPERATORS - istruct -> vector */
A68_142  INPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  JNPACTR;  /* YIELD */
A68_142  KNPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  LNPACTR;  /* OPERATORS - istruct -> vector */
A68_109  MNPACTR;  /* OPERATORS - istruct -> vector */
A68_142  NNPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ONPACTR;  /* YIELD */
A68_142  PNPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  QNPACTR;  /* avoid structure result */
A68_142  RNPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_142  SNPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  TNPACTR;  /* OPERATORS - istruct -> vector */
A68_109  UNPACTR;  /* OPERATORS - istruct -> vector */
A68_142  VNPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  WNPACTR;  /* YIELD */
A68_142  XNPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  YNPACTR;  /* OPERATORS - istruct -> vector */
A68_109  ZNPACTR;  /* OPERATORS - istruct -> vector */
A68_142  AOPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  BOPACTR;  /* YIELD */
A68_142  COPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  DOPACTR;  /* avoid structure result */
A68_142  EOPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_142  FOPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  GOPACTR;  /* avoid structure result */
A68_142  HOPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_142  IOPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  JOPACTR;  /* OPERATORS - istruct -> vector */
A68_105  KOPACTR;  /* OPERATORS - istruct -> vector */
A68_142  LOPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  MOPACTR;  /* YIELD */
A68_142  NOPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  OOPACTR;  /* OPERATORS - istruct -> vector */
A68_105  POPACTR;  /* OPERATORS - istruct -> vector */
A68_142  QOPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ROPACTR;  /* YIELD */
A68_142  SOPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_141  TOPACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  WOPACTR;  /* optbool result */
A68_INT  XOPACTR;  /* YIELD */
A68_130 * YOPACTR_keptinfo A_UNUSED = {0};
A68_212  APPACTR_generator;   /* proc value of non-global proc */
A68_130  FPPACTR;  /* avoid structure result */
A68_INT * GPPACTR_decno A_UNUSED = {0};
A68_132 * HPPACTR_item A_UNUSED = {0};
A68_INT  IPPACTR;  /* forall loop counter */
A68_170 * JPPACTR_id A_UNUSED = {0};
A68_132  KPPACTR;  /* collateral clause result */
A68_BITS  LPPACTR;  /* ADICOPS - >= */
A68_BITS  MPPACTR;  /* ADICOPS - >= */
A68_BITS  NPPACTR;  /* ADICOPS - >= */
A68_BITS  OPPACTR;  /* ADICOPS - >= */
A68_BITS  PPPACTR;  /* ADICOPS - >= */
A68_171 * QPPACTR_rd A_UNUSED = {0};
A68_BITS  RPPACTR;  /* ADICOPS - >= */
A68_VC  SPPACTR;  /* OPERATORS - nil -> mode */
A68_VC  TPPACTR;  /* OPERATORS - nil -> mode */
A68_132  WPPACTR = {0};  /* OPERATORS - skip to mode */
A68_132  ZPPACTR = {0};  /* OPERATORS - skip to mode */
A68_INT  AQPACTR;  /* YIELD */
A_PROC_ENTRY(outputmoduleinformation);
{ 
 /* line 829: */
 /* line 889: */
 /* line 890: */
ROAAOSF_whole( EOOACTR_currentmodinfoversion, 0, &PMPACTR );
OMPACTR.data[0] = A_UNITE(QMPACTR,mode2,2,PMPACTR);
 /* line 891: */
OMPACTR.data[1] = A_UNITE(RMPACTR,mode3,3,EIAACTR_cnewline);
UMPACTR = A_HISVEC(SMPACTR,GOOACTR_modinfomagic,8,A68_CHAR ) ;
OMPACTR.data[2] = A_UNITE(TMPACTR,mode2,2,UMPACTR);
 /* line 892: */
OMPACTR.data[3] = A_UNITE(VMPACTR,mode3,3,EIAACTR_cnewline);
XMPACTR = (*(&((&OCPACTR_currentmodule)->Uname))) ;
ZMPACTR = A_HISVEC(WMPACTR,XMPACTR,7,A68_CHAR ) ;
OMPACTR.data[4] = A_UNITE(YMPACTR,mode2,2,ZMPACTR);
 /* line 893: */
OMPACTR.data[5] = A_UNITE(ANPACTR,mode3,3,EIAACTR_cnewline);
CNPACTR = (*(&(PCPACTR_currentmodinfo->Name))) ;
ENPACTR = A_HISVEC(BNPACTR,CNPACTR,32,A68_CHAR ) ;
OMPACTR.data[6] = A_UNITE(DNPACTR,mode2,2,ENPACTR);
 /* line 894: */
OMPACTR.data[7] = A_UNITE(FNPACTR,mode3,3,EIAACTR_cnewline);
HNPACTR = (*(&((&(PCPACTR_currentmodinfo->L))->N))) ;
JNPACTR = A_HISVEC(GNPACTR,HNPACTR,32,A68_CHAR ) ;
OMPACTR.data[8] = A_UNITE(INPACTR,mode2,2,JNPACTR);
 /* line 895: */
OMPACTR.data[9] = A_UNITE(KNPACTR,mode3,3,EIAACTR_cnewline);
MNPACTR = (*(&((&(PCPACTR_currentmodinfo->L))->F))) ;
ONPACTR = A_HISVEC(LNPACTR,MNPACTR,32,A68_CHAR ) ;
OMPACTR.data[10] = A_UNITE(NNPACTR,mode2,2,ONPACTR);
 /* line 896: */
OMPACTR.data[11] = A_UNITE(PNPACTR,mode3,3,EIAACTR_cnewline);
ROAAOSF_whole( (*(&((&(PCPACTR_currentmodinfo->L))->Level))), 0, &QNPACTR );
OMPACTR.data[12] = A_UNITE(RNPACTR,mode2,2,QNPACTR);
 /* line 897: */
OMPACTR.data[13] = A_UNITE(SNPACTR,mode3,3,EIAACTR_cnewline);
UNPACTR = (*(&((&(PCPACTR_currentmodinfo->G))->N))) ;
WNPACTR = A_HISVEC(TNPACTR,UNPACTR,32,A68_CHAR ) ;
OMPACTR.data[14] = A_UNITE(VNPACTR,mode2,2,WNPACTR);
 /* line 898: */
OMPACTR.data[15] = A_UNITE(XNPACTR,mode3,3,EIAACTR_cnewline);
ZNPACTR = (*(&((&(PCPACTR_currentmodinfo->G))->F))) ;
BOPACTR = A_HISVEC(YNPACTR,ZNPACTR,32,A68_CHAR ) ;
OMPACTR.data[16] = A_UNITE(AOPACTR,mode2,2,BOPACTR);
 /* line 899: */
OMPACTR.data[17] = A_UNITE(COPACTR,mode3,3,EIAACTR_cnewline);
ROAAOSF_whole( (*(&((&(PCPACTR_currentmodinfo->G))->Level))), 0, &DOPACTR );
OMPACTR.data[18] = A_UNITE(EOPACTR,mode2,2,DOPACTR);
 /* line 900: */
OMPACTR.data[19] = A_UNITE(FOPACTR,mode3,3,EIAACTR_cnewline);
ROAAOSF_whole( (*(&(PCPACTR_currentmodinfo->Type))), 0, &GOPACTR );
OMPACTR.data[20] = A_UNITE(HOPACTR,mode2,2,GOPACTR);
 /* line 901: */
OMPACTR.data[21] = A_UNITE(IOPACTR,mode3,3,EIAACTR_cnewline);
KOPACTR = (*(&(QCPACTR_checkinfo->L))) ;
MOPACTR = A_HISVEC(JOPACTR,KOPACTR,7,A68_CHAR ) ;
OMPACTR.data[22] = A_UNITE(LOPACTR,mode2,2,MOPACTR);
 /* line 902: */
OMPACTR.data[23] = A_UNITE(NOPACTR,mode3,3,EIAACTR_cnewline);
 /* line 903: */
POPACTR = (*(&(QCPACTR_checkinfo->G))) ;
ROPACTR = A_HISVEC(OOPACTR,POPACTR,7,A68_CHAR ) ;
OMPACTR.data[24] = A_UNITE(QOPACTR,mode2,2,ROPACTR);
OMPACTR.data[25] = A_UNITE(SOPACTR,mode3,3,EIAACTR_cnewline);
(void)(AVLACTR_writemodinfo(A_HISVEC(TOPACTR,OMPACTR,26,A68_142 )));
 /* line 905: */
(void)(WXIACTR_assert(VOPACTR, (RCPACTR_specs.dim[0].upb==1)));
 /* line 907: */
 /* line 908: */
 /* line 909: */
WOPACTR = (!LCPACTR_rscompatiblewithpreviousversion);
if ( ! WOPACTR )
{WOPACTR = (!MCPACTR_transcompatiblewithpreviousversi);
}
 /* line 912: */
if (WOPACTR)
{ 
XOPACTR = 1 ;
YOPACTR_keptinfo = (&((&A_R1INDEX(RCPACTR_specs,XOPACTR))->Keptinfo));
 /* line 913: */
A_CLOSURE( APPACTR_generator, BPPACTR_generator, CPPACTR_generator );
A_CALLPROC(APPACTR_generator,(A68_FALSE, &FPPACTR),(A68_FALSE, &FPPACTR,(APPACTR_generator).nonlocals));
(*YOPACTR_keptinfo) = FPPACTR;
 /* line 914: */
 /* line 915: */
IPPACTR = ICPACTR_keptdecnos.dim[0].upb - ICPACTR_keptdecnos.dim[0].lwb;
if ( IPPACTR != (*YOPACTR_keptinfo).upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
GPPACTR_decno = ICPACTR_keptdecnos.data;
HPPACTR_item = (*YOPACTR_keptinfo).data;
for (;IPPACTR-- >= 0;
(GPPACTR_decno += ICPACTR_keptdecnos.dim[0].stride
,HPPACTR_item++
) )
{
 /* line 916: */
 /* line 917: */
 /* line 918: */
 /* line 919: */
if ((*GPPACTR_decno)<=IAAACTR_maxidno)
{ 
JPPACTR_id = (&A_R1INDEX(WPKACTR_ids,(*GPPACTR_decno)));
 /* line 920: */
 /* line 921: */
KPPACTR.Prefix = (*(&(JPPACTR_id->Prefix)));
 /* line 922: */
LPPACTR = (*(&(JPPACTR_id->Flags))) ;
KPPACTR.Optimised = A_LB_GE(LPPACTR,HQKACTR_idoptimisedflag);
 /* line 923: */
MPPACTR = (*(&(JPPACTR_id->Flags))) ;
KPPACTR.Iddec = A_LB_GE(MPPACTR,BQKACTR_ididentityflag);
 /* line 924: */
NPPACTR = (*(&(JPPACTR_id->Flags))) ;
KPPACTR.Globalproc = A_LB_GE(NPPACTR,JQKACTR_idgprocflag);
 /* line 925: */
OPPACTR = (*(&(JPPACTR_id->Flags))) ;
KPPACTR.Keptgenproc = A_LB_GE(OPPACTR,KQKACTR_idkeptgenprocflag);
 /* line 926: */
PPPACTR = (*(&(JPPACTR_id->Flags))) ;
KPPACTR.Forceuse = A_LB_GE(PPPACTR,MQKACTR_idforceuseflag);
 /* line 928: */
KPPACTR.Definition = (*(&(JPPACTR_id->Definition)));
 /* line 929: */
KPPACTR.Rhs = (*(&(JPPACTR_id->Rhs)));
} 
else
{ 
 /* line 930: */
 /* line 931: */
if ((*GPPACTR_decno)<=KAAACTR_maxrdno)
{ 
QPPACTR_rd = (&A_R1INDEX(XPKACTR_rds,(*GPPACTR_decno)));
 /* line 932: */
 /* line 933: */
KPPACTR.Prefix = (*(&(QPPACTR_rd->Prefix)));
 /* line 934: */
KPPACTR.Optimised = A68_FALSE;
 /* line 935: */
KPPACTR.Iddec = A68_FALSE;
 /* line 936: */
RPPACTR = (*(&(QPPACTR_rd->Flags))) ;
KPPACTR.Globalproc = A_LB_GE(RPPACTR,RQKACTR_rdglobalflag);
 /* line 937: */
KPPACTR.Keptgenproc = A68_FALSE;
 /* line 938: */
KPPACTR.Forceuse = A68_FALSE;
 /* line 940: */
KPPACTR.Definition = A_VVAC(SPPACTR);
 /* line 941: */
KPPACTR.Rhs = A_VVAC(TPPACTR);
} 
else
{ 
 /* line 942: */
if ((*GPPACTR_decno)<=MAAACTR_maxlibid)
{ 
(void)(WXIACTR_assert(VPPACTR, A68_FALSE));
 /* line 943: */
KPPACTR = WPPACTR;
} 
else
{ 
(void)(WXIACTR_assert(YPPACTR, A68_FALSE));
 /* line 944: */
 /* line 945: */
KPPACTR = ZPPACTR;
} 
} 
} 
(*HPPACTR_item) = KPPACTR;
}
 /* line 946: */
} 
 /* line 949: */
 /* line 950: */
AQPACTR = 1 ;
(void)(GJPACTR_outputspec((*(&A_R1INDEX(RCPACTR_specs,AQPACTR)))));
} 
A_PROC_EXIT(outputmoduleinformation);
return;
} 
#undef NL

A_STATIC A68_VOID  CQPACTR_declareidlist(A68_197 * Idlist)
{ 
A68_197 * DQPACTR_id A_UNUSED = {0};
A68_VC  EQPACTR;  /* OPERATORS - istruct -> vector */
A68_109 * FQPACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(declareidlist);
 /* line 961: */
 /* line 962: */
{ 
DQPACTR_id = Idlist;
 /* line 964: */
for ( ;; )
{ 
 /* line 965: */
 /* line 966: */
if ( !((DQPACTR_id!=(A68_197 *)A68_NIL)) ) break;
 /* line 967: */
 /* line 968: */
 /* line 969: */
 /* line 970: */
 /* line 971: */
 /* line 972: */
 /* line 973: */
 /* line 974: */
 /* line 975: */
 /* line 976: */
 /* line 978: */
FQPACTR = (&(DQPACTR_id->Name)) ;
(void)(A_CALLPROC(LXKACTR_externaldec,(A_ISVEC(EQPACTR,FQPACTR,32,A68_CHAR ), (*(&(DQPACTR_id->Uname))), (*(&(DQPACTR_id->Mode))), (*(&(DQPACTR_id->Decno))), (*(&(DQPACTR_id->Optimised))), (*(&(DQPACTR_id->Iddec))), (*(&(DQPACTR_id->Globalproc))), (*(&(DQPACTR_id->Genproc))), (*(&(DQPACTR_id->Forceuse))), (*(&(DQPACTR_id->Definition))), (*(&(DQPACTR_id->Rhs)))),(A_ISVEC(EQPACTR,FQPACTR,32,A68_CHAR ), (*(&(DQPACTR_id->Uname))), (*(&(DQPACTR_id->Mode))), (*(&(DQPACTR_id->Decno))), (*(&(DQPACTR_id->Optimised))), (*(&(DQPACTR_id->Iddec))), (*(&(DQPACTR_id->Globalproc))), (*(&(DQPACTR_id->Genproc))), (*(&(DQPACTR_id->Forceuse))), (*(&(DQPACTR_id->Definition))), (*(&(DQPACTR_id->Rhs))),(LXKACTR_externaldec).nonlocals)));
 /* line 980: */
 /* line 981: */
(void)(DQPACTR_id = (*(&(DQPACTR_id->Rest))));
}
 /* line 982: */
} 
A_PROC_EXIT(declareidlist);
return;
} 
#undef NL

A_STATIC A68_VOID  HQPACTR_processuselist(A68_198 * Uselist)
{ 
A68_INT  IQPACTR_codestream A_UNUSED = {0};
A68_INT  JQPACTR_nonlocdecstream A_UNUSED = {0};
A68_198 * KQPACTR_use A_UNUSED = {0};
A68_253  LQPACTR;  /* collateral clause result */
A68_145  MQPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_145  PQPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  QQPACTR;  /* YIELD */
A68_145  RQPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_144  SQPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  TQPACTR;  /* OPERATORS - istruct -> vector */
A68_105  UQPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  VQPACTR_decsinit A_UNUSED = {0};
A68_VC  WQPACTR;  /* OPERATORS - istruct -> vector */
A68_109  XQPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  YQPACTR;  /* avoid structure result */
A68_VC  ZQPACTR_decsname A_UNUSED = {0};
A68_256  ARPACTR;  /* collateral clause result */
A68_145  DRPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ERPACTR;  /* YIELD */
A68_145  FRPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_145  IRPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  JRPACTR;  /* YIELD */
A68_145  ORPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  PRPACTR;  /* YIELD */
A68_145  SRPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  TRPACTR;  /* YIELD */
A68_145  URPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_144  VRPACTR;  /* OPERATORS - istruct -> vector */
A68_258  WRPACTR;  /* collateral clause result */
A68_145  XRPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_145  ASPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  BSPACTR;  /* YIELD */
A68_145  GSPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  HSPACTR;  /* YIELD */
A68_145  KSPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  LSPACTR;  /* YIELD */
A68_145  MSPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_144  NSPACTR;  /* OPERATORS - istruct -> vector */
A68_260  OSPACTR;  /* collateral clause result */
A68_145  RSPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  SSPACTR;  /* YIELD */
A68_145  TSPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_144  USPACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(processuselist);
 /* line 990: */
 /* line 991: */
{ 
IQPACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 992: */
JQPACTR_nonlocdecstream = KSLACTR_nonlocdecstream(VRLACTR_currentlevel());
 /* line 994: */
KQPACTR_use = Uselist;
 /* line 996: */
 /* line 997: */
 /* line 998: */
if (AQIACTR_verboseoption)
{ 
 /* line 999: */
LQPACTR.data[0] = A_UNITE(MQPACTR,mode4,4,EIAACTR_cnewline);
QQPACTR = OQPACTR ;
LQPACTR.data[1] = A_UNITE(PQPACTR,mode2,2,QQPACTR);
LQPACTR.data[2] = A_UNITE(RQPACTR,mode4,4,EIAACTR_cnewline);
 /* line 1000: */
 /* line 1001: */
(void)(MDMACTR_writecstream(A_HISVEC(SQPACTR,LQPACTR,3,A68_145 ), JQPACTR_nonlocdecstream));
} 
 /* line 1003: */
for ( ;; )
{ 
 /* line 1004: */
 /* line 1005: */
if ( !((KQPACTR_use!=(A68_198 *)A68_NIL)) ) break;
UQPACTR = (*(&(KQPACTR_use->Uname))) ;
VQPACTR_decsinit = A_HISVEC(TQPACTR,UQPACTR,7,A68_CHAR );
 /* line 1006: */
XQPACTR = (*(&(KQPACTR_use->Name))) ;
BNAAOSF_before( A_HISVEC(WQPACTR,XQPACTR,32,A68_CHAR ), ' ', &YQPACTR );
ZQPACTR_decsname = YQPACTR;
 /* line 1008: */
 /* line 1009: */
ERPACTR = CRPACTR ;
ARPACTR.data[0] = A_UNITE(DRPACTR,mode2,2,ERPACTR);
ARPACTR.data[1] = A_UNITE(FRPACTR,mode2,2,VQPACTR_decsinit);
 /* line 1010: */
JRPACTR = HRPACTR ;
ARPACTR.data[2] = A_UNITE(IRPACTR,mode2,2,JRPACTR);
if (AQIACTR_verboseoption)
{ 
PRPACTR = A_VC_PLUS(A_VC_PLUS(MRPACTR,ZQPACTR_decsname),NRPACTR) ;
ARPACTR.data[3] = A_UNITE(ORPACTR,mode2,2,PRPACTR);
} 
else
{ 
 /* line 1012: */
TRPACTR = RRPACTR ;
ARPACTR.data[3] = A_UNITE(SRPACTR,mode2,2,TRPACTR);
} 
ARPACTR.data[4] = A_UNITE(URPACTR,mode4,4,EIAACTR_cnewline);
 /* line 1013: */
(void)(MDMACTR_writecstream(A_HISVEC(VRPACTR,ARPACTR,5,A68_145 ), JQPACTR_nonlocdecstream));
 /* line 1015: */
(void)(CQPACTR_declareidlist((*(&(KQPACTR_use->Ids)))));
 /* line 1017: */
 /* line 1018: */
WRPACTR.data[0] = A_UNITE(XRPACTR,mode2,2,VQPACTR_decsinit);
 /* line 1019: */
BSPACTR = ZRPACTR ;
WRPACTR.data[1] = A_UNITE(ASPACTR,mode2,2,BSPACTR);
if (AQIACTR_verboseoption)
{ 
HSPACTR = A_VC_PLUS(A_VC_PLUS(ESPACTR,ZQPACTR_decsname),FSPACTR) ;
WRPACTR.data[2] = A_UNITE(GSPACTR,mode2,2,HSPACTR);
} 
else
{ 
 /* line 1021: */
LSPACTR = JSPACTR ;
WRPACTR.data[2] = A_UNITE(KSPACTR,mode2,2,LSPACTR);
} 
WRPACTR.data[3] = A_UNITE(MSPACTR,mode4,4,EIAACTR_cnewline);
 /* line 1022: */
(void)(MDMACTR_writecstream(A_HISVEC(NSPACTR,WRPACTR,4,A68_145 ), IQPACTR_codestream));
 /* line 1024: */
 /* line 1025: */
(void)(KQPACTR_use = (*(&(KQPACTR_use->Rest))));
}
 /* line 1027: */
 /* line 1028: */
 /* line 1029: */
if (AQIACTR_verboseoption)
{ 
 /* line 1030: */
SSPACTR = QSPACTR ;
OSPACTR.data[0] = A_UNITE(RSPACTR,mode2,2,SSPACTR);
OSPACTR.data[1] = A_UNITE(TSPACTR,mode4,4,EIAACTR_cnewline);
 /* line 1031: */
 /* line 1032: */
 /* line 1033: */
(void)(MDMACTR_writecstream(A_HISVEC(USPACTR,OSPACTR,2,A68_145 ), JQPACTR_nonlocdecstream));
} 
} 
A_PROC_EXIT(processuselist);
return;
} 
#undef NL

A68_VOID  VSPACTR_declareusedids(void)
{ 
A68_INT  WSPACTR_codestream A_UNUSED = {0};
A68_INT  XSPACTR;  /* YIELD */
A68_198 * YSPACTR_uselist A_UNUSED = {0};
A68_198 * ZSPACTR_use A_UNUSED = {0};
A68_VC  ATPACTR;  /* OPERATORS - istruct -> vector */
A68_105  BTPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  CTPACTR_decsinit A_UNUSED = {0};
A68_VC  DTPACTR;  /* OPERATORS - istruct -> vector */
A68_109  ETPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  FTPACTR;  /* avoid structure result */
A68_VC  GTPACTR_decsname A_UNUSED = {0};
A68_256  HTPACTR;  /* collateral clause result */
A68_145  ITPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_145  LTPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  MTPACTR;  /* YIELD */
A68_145  NTPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_145  QTPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  RTPACTR;  /* YIELD */
A68_145  STPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_144  TTPACTR;  /* OPERATORS - istruct -> vector */
A68_197 * UTPACTR_id A_UNUSED = {0};
A68_256  VTPACTR;  /* collateral clause result */
A68_145  YTPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ZTPACTR;  /* YIELD */
A68_145  AUPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_145  DUPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  EUPACTR;  /* YIELD */
A68_145  FUPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_145  GUPACTR = {0};  /* OPERATORS - mode -> union mode */
A68_144  HUPACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(declareusedids);
{ 
WSPACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 1043: */
XSPACTR = 0 ;
YSPACTR_uselist = (*(&((*(&A_R1INDEX(FCPACTR_contexts,XSPACTR)))->Uses)));
 /* line 1045: */
ZSPACTR_use = YSPACTR_uselist;
 /* line 1048: */
for ( ;; )
{ 
 /* line 1049: */
 /* line 1050: */
if ( !((ZSPACTR_use!=(A68_198 *)A68_NIL)) ) break;
BTPACTR = (*(&(ZSPACTR_use->Uname))) ;
CTPACTR_decsinit = A_HISVEC(ATPACTR,BTPACTR,7,A68_CHAR );
 /* line 1051: */
ETPACTR = (*(&(ZSPACTR_use->Name))) ;
BNAAOSF_before( A_HISVEC(DTPACTR,ETPACTR,32,A68_CHAR ), ' ', &FTPACTR );
GTPACTR_decsname = FTPACTR;
 /* line 1053: */
 /* line 1054: */
 /* line 1055: */
if (AQIACTR_verboseoption)
{ 
HTPACTR.data[0] = A_UNITE(ITPACTR,mode4,4,EIAACTR_cnewline);
MTPACTR = KTPACTR ;
HTPACTR.data[1] = A_UNITE(LTPACTR,mode2,2,MTPACTR);
HTPACTR.data[2] = A_UNITE(NTPACTR,mode2,2,GTPACTR_decsname);
RTPACTR = PTPACTR ;
HTPACTR.data[3] = A_UNITE(QTPACTR,mode2,2,RTPACTR);
HTPACTR.data[4] = A_UNITE(STPACTR,mode4,4,EIAACTR_cnewline);
 /* line 1056: */
 /* line 1057: */
(void)(MDMACTR_writecstream(A_HISVEC(TTPACTR,HTPACTR,5,A68_145 ), GSLACTR_importsstream));
} 
 /* line 1059: */
UTPACTR_id = (*(&(ZSPACTR_use->Ids)));
 /* line 1060: */
for ( ;; )
{ 
 /* line 1061: */
 /* line 1062: */
if ( !((UTPACTR_id!=(A68_197 *)A68_NIL)) ) break;
(void)(A_CALLPROC(MXKACTR_externalcdec,((*(&(UTPACTR_id->Decno)))),((*(&(UTPACTR_id->Decno))),(MXKACTR_externalcdec).nonlocals)));
 /* line 1063: */
 /* line 1064: */
(void)(UTPACTR_id = (*(&(UTPACTR_id->Rest))));
}
 /* line 1066: */
 /* line 1067: */
 /* line 1068: */
if (AQIACTR_verboseoption)
{ 
ZTPACTR = XTPACTR ;
VTPACTR.data[0] = A_UNITE(YTPACTR,mode2,2,ZTPACTR);
VTPACTR.data[1] = A_UNITE(AUPACTR,mode2,2,GTPACTR_decsname);
EUPACTR = CUPACTR ;
VTPACTR.data[2] = A_UNITE(DUPACTR,mode2,2,EUPACTR);
VTPACTR.data[3] = A_UNITE(FUPACTR,mode4,4,EIAACTR_cnewline);
VTPACTR.data[4] = A_UNITE(GUPACTR,mode4,4,EIAACTR_cnewline);
 /* line 1069: */
 /* line 1070: */
(void)(MDMACTR_writecstream(A_HISVEC(HUPACTR,VTPACTR,5,A68_145 ), GSLACTR_importsstream));
} 
 /* line 1072: */
 /* line 1073: */
(void)(ZSPACTR_use = (*(&(ZSPACTR_use->Rest))));
}
 /* line 1074: */
} 
A_PROC_EXIT(declareusedids);
return;
} 
#undef NL

A68_VOID  IUPACTR_processcontexts(void)
{ 
A68_BOOL  JUPACTR_decsmodule A_UNUSED = {0};
A68_INT  KUPACTR;  /* YIELD */
A68_198 * LUPACTR_contextvoiduselist A_UNUSED = {0};
A_PROC_ENTRY(processcontexts);
{ 
JUPACTR_decsmodule = ((*(&(PCPACTR_currentmodinfo->Type)))==(-1));
 /* line 1082: */
KUPACTR = 0 ;
LUPACTR_contextvoiduselist = (*(&((*(&A_R1INDEX(FCPACTR_contexts,KUPACTR)))->Uses)));
 /* line 1084: */
 /* line 1085: */
 /* line 1086: */
if ((*(&((&(PCPACTR_currentmodinfo->L))->Level)))!=0)
{ 
 /* line 1087: */
(void)(WXIACTR_assert(NUPACTR, A68_FALSE));
} 
 /* line 1089: */
 /* line 1090: */
if (LUPACTR_contextvoiduselist!=(A68_198 *)A68_NIL)
{ 
 /* line 1091: */
 /* line 1092: */
(void)(HQPACTR_processuselist(LUPACTR_contextvoiduselist));
} 
} 
A_PROC_EXIT(processcontexts);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 6: */
void ANOACTR(void)   /* initialise DECS modules */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel","-dir",".","modules.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/vak/Project/Algol/Algol-68RS-Source/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/vak/Project/Algol/Algol-68RS-Source/a68config/a68config.m","./uniquenameserver.m","./moduletracer.m","./liblookup.m","./incinstallation.m","./incid.m","./idtable.m","./environment.m","./environ.m","./coutput.m","./common.m","./centities.m","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel/osif.m","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config A_UNUSED;
/* --- end of configuration information */
A68_133  LOOACTR = {0};  /* OPERATORS - skip to mode */
A68_139  NOOACTR;  /* collateral clause result */
A68_VC  OPOACTR;  /* avoid structure result */
A68_138  FBPACTR;  /* collateral clause result */
A68_108  GBPACTR = {0};  /* OPERATORS - skip to mode */
A68_108  HBPACTR = {0};  /* OPERATORS - skip to mode */
A68_126  IBPACTR = {0};  /* OPERATORS - skip to mode */
A68_199  BCPACTR;  /* collateral clause result */
A68_127  CCPACTR;  /* OPERATORS - nil -> mode */
A68_199 * ECPACTR;  /* YIELD */
A68_180  JCPACTR;  /* OPERATORS - nil -> mode */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
RHMACTR();   /* USE uniquenameserver */
BCHACTR();   /* USE moduletracer */
NXKACTR();   /* USE liblookup */
ODAACTR();   /* USE incinstallation */
BAAACTR();   /* USE incid */
PPKACTR();   /* USE idtable */
HPIACTR();   /* USE environment */
BPLACTR();   /* USE environ */
PTLACTR();   /* USE coutput */
THAACTR();   /* USE centities */
CSCAOSF();   /* USE osif */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/modules.a68";
A_config.translation_time = "Thu Nov  5 21:38:58 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "ZMOACTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 21:38:58 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS modules);
(void)(UEAALIB_a68config(LGAALIB_configinfo, ENOACTR));
 /* line 52: */
 /* line 92: */
 /* line 94: */
 /* line 95: */
 /* line 96: */
HNOACTR_checkinfolength = (2*(GNOACTR_unamelength+1));
 /* line 98: */
JNOACTR_nullid = INOACTR;
 /* line 99: */
LNOACTR_anonymousid = KNOACTR;
 /* line 100: */
NNOACTR_stdpreludename = MNOACTR;
 /* line 101: */
PNOACTR_stdpreludeid = ONOACTR;
 /* line 103: */
RNOACTR_nulluname = QNOACTR;
 /* line 105: */
 /* line 109: */
 /* line 119: */
 /* line 120: */
GOOACTR_modinfomagic = FOOACTR;
 /* line 121: */
JOOACTR_alien_termination_string = IOOACTR;
 /* line 123: */
KOOACTR_composition = A68_FALSE;
 /* line 126: */
MOOACTR_nilspec = LOOACTR;
 /* line 127: */
NOOACTR.Xs.F = JNOACTR_nullid;
NOOACTR.Xs.No = (-2);
NOOACTR.Xs.Nl = 0;
NOOACTR.Xs.Ng = 0;
NOOACTR.Xs.U = MOOACTR_nilspec;
NOOACTR.Ys = RNOACTR_nulluname;
OOOACTR_nullspec = NOOACTR;
 /* line 129: */
 /* line 148: */
 /* line 206: */
KPOACTR_generator( A68_TRUE, &OPOACTR );
NPOACTR_modinfo_buf = OPOACTR;
 /* line 208: */
 /* line 218: */
 /* line 231: */
 /* line 355: */
 /* line 359: */
 /* line 432: */
 /* line 456: */
FBPACTR.Xmi.Name = JNOACTR_nullid;
FBPACTR.Xmi.L = GBPACTR;
FBPACTR.Xmi.G = HBPACTR;
FBPACTR.Xmi.Type = (-2);
FBPACTR.Ym = IBPACTR;
JBPACTR_lastmoduledetails = FBPACTR;
 /* line 459: */
 /* line 487: */
 /* line 488: */
BCPACTR.Name = JNOACTR_nullid;
BCPACTR.Ym.Uname = RNOACTR_nulluname;
BCPACTR.Ym.Lname = RNOACTR_nulluname;
BCPACTR.Ym.Gname = RNOACTR_nulluname;
 /* line 489: */
BCPACTR.Ym.Specs = A_VVAC(CCPACTR);
BCPACTR.Ys = RNOACTR_nulluname;
BCPACTR.Level = 0;
BCPACTR.Ids = (A68_197 *)A68_NIL;
BCPACTR.Uses = (A68_198 *)A68_NIL;
BCPACTR.Rest = (A68_199 *)A68_NIL;
ECPACTR = A_LOC(A68_199 ) ;
(void)((*ECPACTR) = BCPACTR) ;
DCPACTR_contextlist = ECPACTR;
 /* line 492: */
 /* line 495: */
GCPACTR_idlist = (A68_197 **)A68_NIL;
 /* line 499: */
 /* line 503: */
ICPACTR_keptdecnos = (A_R1VAC(JCPACTR));
 /* line 508: */
KCPACTR_previousversionfound = A68_FALSE;
 /* line 513: */
LCPACTR_rscompatiblewithpreviousversion = A68_FALSE;
 /* line 517: */
MCPACTR_transcompatiblewithpreviousversi = A68_TRUE;
 /* line 522: */
NCPACTR_currentmoduleinitialised = A68_FALSE;
 /* line 525: */
 /* line 526: */
PCPACTR_currentmodinfo = (&((&OCPACTR_currentmodule)->Xmi));
 /* line 527: */
QCPACTR_checkinfo = (&((&OCPACTR_currentmodule)->Checkinfo));
 /* line 528: */
 /* line 531: */
 /* line 571: */
 /* line 582: */
 /* line 626: */
 /* line 636: */
 /* line 662: */
 /* line 668: */
 /* line 670: */
 /* line 831: */
 /* line 832: */
 /* line 834: */
 /* line 957: */
 /* line 984: */
 /* line 1035: */
 /* line 1040: */
 /* line 1041: */
 /* line 1076: */
 /* line 1080: */
 /* line 1081: */
 /* line 1094: */
 /* line 1096: */
 /* line 1106: */
/*SKIP*/;
A_PROC_EXIT(DECS modules);
} 
#undef NL
/* end of translation of modules.a68 */
