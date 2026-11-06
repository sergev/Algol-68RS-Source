/* UNAME:LMOACTR */
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
static A68_194   PMOACTR = {"$Id: modules.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,QMOACTR,PMOACTR,57)
#define RMOACTR_idlength VDAACTR_maxid
#define SMOACTR_unamelength WDAACTR_maxuname
static A68_INT  TMOACTR_checkinfolength;
static A68_109   UMOACTR = {"                                "}; 
A68_109  VMOACTR_nullid;
static A68_109   WMOACTR = {"anonymous                       "}; 
static A68_109  XMOACTR_anonymousid;
static A68_109   YMOACTR = {"a68_stdprelude_                 "}; 
A68_109  ZMOACTR_stdpreludename;
static A68_109   ANOACTR = {"$                               "}; 
static A68_109  BNOACTR_stdpreludeid;
static A68_105   CNOACTR = {"       "}; 
A68_105  DNOACTR_nulluname;
#define ENOACTR_flip 't'
#define FNOACTR_flop 'f'
static A68_105   JNOACTR = {"modules"}; 
A_GISVEC(A68_VC ,KNOACTR,JNOACTR,7)
static A68_200   LNOACTR = {"MODULES("}; 
static A68_201   MNOACTR = {"): "}; 
A_GISVEC(A68_VC ,NNOACTR,LNOACTR,8)
A_GISVEC(A68_VC ,PNOACTR,MNOACTR,3)
#define QNOACTR_currentmodinfoversion 8
static A68_200   RNOACTR = {"mod_info"}; 
static A68_200  SNOACTR_modinfomagic;
static A68_202   TNOACTR = {"-----"}; 
A_GISVEC(A68_VC ,UNOACTR,TNOACTR,5)
static A68_VC  VNOACTR_alien_termination_string;
A68_BOOL  WNOACTR_composition;
static A68_133  YNOACTR_nilspec;
static A68_139  AOOACTR_nullspec;
static A68_VC  ZOOACTR_modinfo_buf;
static A68_207   CQOACTR = {"  f OF xspec is \""}; 
A_GISVEC(A68_VC ,DQOACTR,CQOACTR,17)
static A68_207   HQOACTR = {"  no OF xspec is "}; 
A_GISVEC(A68_VC ,IQOACTR,HQOACTR,17)
static A68_207   KQOACTR = {"  nl OF xspec is "}; 
A_GISVEC(A68_VC ,LQOACTR,KQOACTR,17)
static A68_207   NQOACTR = {"  ng OF xspec is "}; 
A_GISVEC(A68_VC ,OQOACTR,NQOACTR,17)
static A68_208   QQOACTR = {"  spectype is "}; 
A_GISVEC(A68_VC ,RQOACTR,QQOACTR,14)
static A68_211   PROACTR = {"  ubound  is "}; 
A_GISVEC(A68_VC ,QROACTR,PROACTR,13)
static A68_105   TSOACTR = {"modules"}; 
A_GISVEC(A68_VC ,USOACTR,TSOACTR,7)
static A68_207   AVOACTR = {"unpack REF [] CAT"}; 
A_GISVEC(A68_VC ,BVOACTR,AVOACTR,17)
static A68_207   TVOACTR = {"   version no is "}; 
A_GISVEC(A68_VC ,UVOACTR,TVOACTR,17)
static A68_211   WVOACTR = {"   magic is \""}; 
A_GISVEC(A68_VC ,XVOACTR,WVOACTR,13)
static A68_214   HWOACTR = {"   version and magic are ok"}; 
A_GISVEC(A68_VC ,IWOACTR,HWOACTR,27)
static A68_207   JWOACTR = {"   version no is "}; 
A_GISVEC(A68_VC ,KWOACTR,JWOACTR,17)
static A68_211   MWOACTR = {"   magic is \""}; 
A_GISVEC(A68_VC ,NWOACTR,MWOACTR,13)
static A68_215   VWOACTR = {"   uname OF ym is \""}; 
A_GISVEC(A68_VC ,WWOACTR,VWOACTR,19)
static A68_215   CXOACTR = {"   name OF xmi is \""}; 
A_GISVEC(A68_VC ,DXOACTR,CXOACTR,19)
static A68_216   JXOACTR = {"   n OF l OF xmi is \""}; 
A_GISVEC(A68_VC ,KXOACTR,JXOACTR,21)
static A68_216   QXOACTR = {"   f OF l OF xmi is \""}; 
A_GISVEC(A68_VC ,RXOACTR,QXOACTR,21)
static A68_217   VXOACTR = {"   level OF l OF xmi is "}; 
A_GISVEC(A68_VC ,WXOACTR,VXOACTR,24)
static A68_216   AYOACTR = {"   n OF g OF xmi is \""}; 
A_GISVEC(A68_VC ,BYOACTR,AYOACTR,21)
static A68_216   HYOACTR = {"   f OF g OF xmi is \""}; 
A_GISVEC(A68_VC ,IYOACTR,HYOACTR,21)
static A68_217   MYOACTR = {"   level OF g OF xmi is "}; 
A_GISVEC(A68_VC ,NYOACTR,MYOACTR,24)
static A68_218   PYOACTR = {"   type OF xmi is "}; 
A_GISVEC(A68_VC ,QYOACTR,PYOACTR,18)
static A68_215   UYOACTR = {"   lname OF ym is \""}; 
A_GISVEC(A68_VC ,VYOACTR,UYOACTR,19)
static A68_215   BZOACTR = {"   gname OF ym is \""}; 
A_GISVEC(A68_VC ,CZOACTR,BZOACTR,19)
static A68_220   SZOACTR = {"about to unpack spec"}; 
A_GISVEC(A68_VC ,TZOACTR,SZOACTR,20)
static A68_222   BAPACTR = {".m"}; 
A_GISVEC(A68_VC ,EAPACTR,BAPACTR,2)
static A68_223   HAPACTR = {"get modinfo("}; 
A_GISVEC(A68_VC ,IAPACTR,HAPACTR,12)
static A68_138  VAPACTR_lastmoduledetails;
static A68_225   ABPACTR = {"'give module details' called for composition module"}; 
A_GISVEC(A68_VC ,BBPACTR,ABPACTR,51)
static A68_199 * PBPACTR_contextlist;
A68_226  RBPACTR_contexts;
static A68_197 ** SBPACTR_idlist;
static A68_227  TBPACTR_currentkeptinfo;
A68_180  UBPACTR_keptdecnos;
A68_BOOL  WBPACTR_previousversionfound;
A68_BOOL  XBPACTR_rscompatiblewithpreviousversion;
A68_BOOL  YBPACTR_transcompatiblewithpreviousversi;
static A68_BOOL  ZBPACTR_currentmoduleinitialised;
A68_196  ACPACTR_currentmodule;
A68_135 * BCPACTR_currentmodinfo;
static A68_195 * CCPACTR_checkinfo;
A68_228  DCPACTR_specs;
static A68_230   KCPACTR = {"maxlevel > 0 (not context void)"}; 
A_GISVEC(A68_VC ,LCPACTR,KCPACTR,31)
static A68_207   MCPACTR = {"holes not allowed"}; 
A_GISVEC(A68_VC ,OCPACTR,MCPACTR,17)
static A68_218   FDPACTR = {"level <= max level"}; 
A_GISVEC(A68_VC ,GDPACTR,FDPACTR,18)
static A68_234   QDPACTR = {"no <= UPB specs"}; 
A_GISVEC(A68_VC ,RDPACTR,QDPACTR,15)
static A68_214   XEPACTR = {"'add context module' called"}; 
A_GISVEC(A68_VC ,YEPACTR,XEPACTR,27)
static A68_105   CHPACTR = {"context"}; 
A_GISVEC(A68_VC ,DHPACTR,CHPACTR,7)
static A68_200   EHPACTR = {"keeplist"}; 
A_GISVEC(A68_VC ,FHPACTR,EHPACTR,8)
static A68_207   ZHPACTR = {"Previous version:"}; 
A_GISVEC(A68_VC ,AIPACTR,ZHPACTR,17)
static A68_241   DIPACTR = {"no previous version found"}; 
A_GISVEC(A68_VC ,EIPACTR,DIPACTR,25)
static A68_105   NJPACTR = {"modules"}; 
A_GISVEC(A68_VC ,OJPACTR,NJPACTR,7)
static A68_234   PJPACTR = {"Writing spec..."}; 
A_GISVEC(A68_VC ,QJPACTR,PJPACTR,15)
static A68_207   YLPACTR = {"output REF [] CAT"}; 
A_GISVEC(A68_VC ,ZLPACTR,YLPACTR,17)
static A68_248   GOPACTR = {"MODULES: only one spec allowed"}; 
A_GISVEC(A68_VC ,HOPACTR,GOPACTR,30)
static A68_249   GPPACTR = {"kept decno is a library id"}; 
A_GISVEC(A68_VC ,HPPACTR,GPPACTR,26)
static A68_216   JPPACTR = {"kept decno is a label"}; 
A_GISVEC(A68_VC ,KPPACTR,JPPACTR,21)
static A68_252   ZPPACTR = {"/* --- DECS initialisation functions --- */"}; 
A_GISVEC(A68_VC ,AQPACTR,ZPPACTR,43)
static A68_223   NQPACTR = {"extern void "}; 
A_GISVEC(A68_VC ,OQPACTR,NQPACTR,12)
static A68_105   SQPACTR = {"(void);"}; 
A_GISVEC(A68_VC ,TQPACTR,SQPACTR,7)
static A68_254   WQPACTR = {"   /* "}; 
static A68_201   XQPACTR = {" */"}; 
A_GISVEC(A68_VC ,YQPACTR,WQPACTR,6)
A_GISVEC(A68_VC ,ZQPACTR,XQPACTR,3)
static A68_255   CRPACTR = {""}; 
A_GISVEC(A68_VC ,DRPACTR,CRPACTR,0)
static A68_201   KRPACTR = {"();"}; 
A_GISVEC(A68_VC ,LRPACTR,KRPACTR,3)
static A68_257   ORPACTR = {"   /* USE "}; 
static A68_201   PRPACTR = {" */"}; 
A_GISVEC(A68_VC ,QRPACTR,ORPACTR,10)
A_GISVEC(A68_VC ,RRPACTR,PRPACTR,3)
static A68_255   URPACTR = {""}; 
A_GISVEC(A68_VC ,VRPACTR,URPACTR,0)
static A68_259   BSPACTR = {"/* --- end of DECS initialisation functions --- */"}; 
A_GISVEC(A68_VC ,CSPACTR,BSPACTR,50)
static A68_220   VSPACTR = {"/* --- Imports from "}; 
A_GISVEC(A68_VC ,WSPACTR,VSPACTR,20)
static A68_105   ATPACTR = {" --- */"}; 
A_GISVEC(A68_VC ,BTPACTR,ATPACTR,7)
static A68_214   ITPACTR = {"/* --- End of imports from "}; 
A_GISVEC(A68_VC ,JTPACTR,ITPACTR,27)
static A68_105   NTPACTR = {" --- */"}; 
A_GISVEC(A68_VC ,OTPACTR,NTPACTR,7)
static A68_214   YTPACTR = {"processing non-VOID context"}; 
A_GISVEC(A68_VC ,ZTPACTR,YTPACTR,27)
typedef struct   /* env of non-global proc */
{
A68_INT * NROACTR_ubound;
} VROACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * NROACTR_ubound;
} FSOACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * OROACTR_cbound;
} FTOACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_135 * RWOACTR_xmi;
} JZOACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_135  Xmodinfo;
} SCPACTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  JCPACTR_maxlevel;
A_PAD_INT(PAD_122)
} ADPACTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} OOPACTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} ZQOACTR_generator;

A_STATIC A68_VOID  INOACTR_debugmessage(A68_INT  Level, A68_VC  M);

A68_VOID  EOOACTR_givespec(A68_109  N, A68_109  F, A68_126  Ym, A68_139  *ReturnedValue);

A_STATIC A68_VOID  ROOACTR_filter(A68_VC  Name, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  WOOACTR_generator(A68_BOOL  VOOACTR_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  DPOACTR_read_int(A68_59 * F, A68_INT * Ri);

A_STATIC A68_VOID  LPOACTR_read_str(A68_59 * F, A68_VC  Str);

A_STATIC A68_VOID  VPOACTR_unpackspec(A68_59 * F, A68_128 * Ymspec, A68_BOOL  Lib_init);

A_STATIC A68_CHAR  VQOACTR_hexchar(A68_RC  S);

A_STATIC A68_VOID  YQOACTR_generator(A68_BOOL  WQOACTR_anonymous, A68_180  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  UROACTR_generator(A68_BOOL  SROACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ESOACTR_generator(A68_BOOL  CSOACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ETOACTR_generator(A68_BOOL  CTOACTR_anonymous, A68_130  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DVOACTR_nullmodinfo(A68_109  Name, A68_138  *ReturnedValue);

A_STATIC A68_VOID  KVOACTR_unpackmodinfo(A68_109  Name, A68_59 * F, A68_BOOL  Lib_init, A68_138  *ReturnedValue);

A_STATIC A68_VOID  IZOACTR_generator(A68_BOOL  GZOACTR_anonymous, A68_127  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WZOACTR_getmodinfo(A68_109  Name, A68_169 * Dirlist, A68_138  *ReturnedValue);

A68_VOID  ZAPACTR_givemoduledetails(A68_109  Name, A68_INT  Nametype, A68_BOOL  Closure, A68_138  *ReturnedValue);

A68_VOID  FCPACTR_initialisecurrentmodule(A68_135  Xmodinfo);

A_STATIC A68_VOID  RCPACTR_generator(A68_BOOL  PCPACTR_anonymous, A68_228  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZCPACTR_generator(A68_BOOL  XCPACTR_anonymous, A68_226  *ReturnedValue, void *NonLocals);

A68_VOID  NDPACTR_initialisespec(A68_129  Xspec);

A68_VOID  VDPACTR_adddecsmodule(A68_137  Decsmodule, A68_INT  Level);

A68_VOID  WEPACTR_addcontextmodule(A68_125  Context);

A68_VOID  AFPACTR_addexternalid(A68_110  Id);

A68_VOID  IFPACTR_initialiseunames(void);

A_STATIC A68_BOOL  LFPACTR_setspecs(A68_126  Previousym);

A_STATIC A68_BOOL  NHPACTR_matchmodules(A68_138  Previousversion);

A68_VOID  PIPACTR_outputmoduleinformation(void);

A_STATIC A68_VOID  SIPACTR_outputspec(A68_128  Ymspec);

A_STATIC A68_VOID  NOPACTR_generator(A68_BOOL  LOPACTR_anonymous, A68_130  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OPPACTR_declareidlist(A68_197 * Idlist);

A_STATIC A68_VOID  TPPACTR_processuselist(A68_198 * Uselist);

A68_VOID  HSPACTR_declareusedids(void);

A68_VOID  UTPACTR_processcontexts(void);

A_STATIC A68_VOID  YQOACTR_generator(A68_BOOL  WQOACTR_anonymous, A68_180  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZQOACTR_generator *)NonLocals)->x)
{ 
A68_180  AROACTR;  /* clause result */
A68_180  BROACTR;  /* OPERATORS - dynamic generator */
{ 
BROACTR.dim[0].upb = 2 ;
BROACTR.dim[0].lwb = 1 ;
A_1INITSTRIDES(BROACTR) ;
( WQOACTR_anonymous? A_R1LOC(A68_INT ,BROACTR): A_R1HEAP(A68_INT ,BROACTR) );
AROACTR = BROACTR;
} 
*ReturnedValue = (AROACTR);
return;
} 
#undef NL

A_STATIC A68_CHAR  VQOACTR_hexchar(A68_RC  S)
{ 
A68_210  XQOACTR_generator;   /* proc value of non-global proc */
A68_180  DROACTR;  /* avoid structure result */
A68_180  CROACTR_ir;
A68_INT * EROACTR_i;
A68_CHAR  FROACTR_c;
A68_CHAR * GROACTR;  /* forall control - []x */
A68_INT  HROACTR;  /* forall loop counter */
A68_BOOL  IROACTR;  /* optbool result */
A68_BOOL  JROACTR;  /* optbool result */
A68_CHAR  KROACTR;  /* clause result */
A68_INT  LROACTR;  /* YIELD */
A68_INT  MROACTR;  /* YIELD */
A_PROC_ENTRY(hexchar);
 /* line 255: */
{ 
A_CLOSURE( XQOACTR_generator, YQOACTR_generator, ZQOACTR_generator );
A_CALLPROC(XQOACTR_generator,(A68_TRUE, &DROACTR),(A68_TRUE, &DROACTR,(XQOACTR_generator).nonlocals));
CROACTR_ir = DROACTR;
 /* line 256: */
 /* line 257: */
HROACTR = CROACTR_ir.dim[0].upb - CROACTR_ir.dim[0].lwb;
if ( HROACTR != S.dim[0].upb - S.dim[0].lwb )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
EROACTR_i = CROACTR_ir.data;
GROACTR = S.data;
for (;HROACTR-- >= 0;
(EROACTR_i += CROACTR_ir.dim[0].stride
,GROACTR += S.dim[0].stride
) )
{
FROACTR_c = *GROACTR;
 /* line 258: */
IROACTR = ((A68_INT)(unsigned char)FROACTR_c>=(A68_INT)(unsigned char)'0');
if ( IROACTR )
{ /* line 259: */
IROACTR = ((A68_INT)(unsigned char)FROACTR_c<=(A68_INT)(unsigned char)'9');
}
if ( IROACTR )
{ 
 /* line 260: */
(*EROACTR_i) = ((A68_INT)(unsigned char)FROACTR_c-(A68_INT)(unsigned char)'0');
} 
else
{ 
 /* line 261: */
JROACTR = ((A68_INT)(unsigned char)FROACTR_c>=(A68_INT)(unsigned char)'a');
if ( JROACTR )
{ /* line 262: */
JROACTR = ((A68_INT)(unsigned char)FROACTR_c<=(A68_INT)(unsigned char)'f');
}
if ( JROACTR )
{ 
 /* line 263: */
(*EROACTR_i) = (((A68_INT)(unsigned char)FROACTR_c-(A68_INT)(unsigned char)'a')+10);
} 
else
{ 
 /* line 264: */
 /* line 265: */
SXIACTR_terminalerror(261);
} 
} 
}
 /* line 266: */
 /* line 267: */
LROACTR = 1 ;
MROACTR = 2 ;
KROACTR = (A68_SSBITS)((16*(*(&A_R1INDEX(CROACTR_ir,LROACTR))))+(*(&A_R1INDEX(CROACTR_ir,MROACTR))));
} 
A_PROC_EXIT(hexchar);
return( KROACTR );
} 
#undef NL

A_STATIC A68_VOID  UROACTR_generator(A68_BOOL  SROACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((VROACTR_generator *)NonLocals)->x)
{ 
A68_VC  WROACTR;  /* clause result */
A68_VC  XROACTR;  /* OPERATORS - dynamic generator */
{ 
XROACTR.upb = (*NL(NROACTR_ubound)) ;
( SROACTR_anonymous? A_VLOC(A68_CHAR ,XROACTR): A_VHEAP(A68_CHAR ,XROACTR) );
WROACTR = XROACTR;
} 
*ReturnedValue = (WROACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ESOACTR_generator(A68_BOOL  CSOACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((FSOACTR_generator *)NonLocals)->x)
{ 
A68_VC  GSOACTR;  /* clause result */
A68_VC  HSOACTR;  /* OPERATORS - dynamic generator */
{ 
HSOACTR.upb = ((2*(*NL(NROACTR_ubound)))+2) ;
( CSOACTR_anonymous? A_VLOC(A68_CHAR ,HSOACTR): A_VHEAP(A68_CHAR ,HSOACTR) );
GSOACTR = HSOACTR;
} 
*ReturnedValue = (GSOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ETOACTR_generator(A68_BOOL  CTOACTR_anonymous, A68_130  *ReturnedValue, void *NonLocals)
#define NL(x) (((FTOACTR_generator *)NonLocals)->x)
{ 
A68_130  GTOACTR;  /* clause result */
A68_130  HTOACTR;  /* OPERATORS - dynamic generator */
{ 
HTOACTR.upb = (*NL(OROACTR_cbound)) ;
( CTOACTR_anonymous? A_VLOC(A68_132 ,HTOACTR): A_VHEAP(A68_132 ,HTOACTR) );
GTOACTR = HTOACTR;
} 
*ReturnedValue = (GTOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  IZOACTR_generator(A68_BOOL  GZOACTR_anonymous, A68_127  *ReturnedValue, void *NonLocals)
#define NL(x) (((JZOACTR_generator *)NonLocals)->x)
{ 
A68_127  KZOACTR;  /* clause result */
A68_127  LZOACTR;  /* OPERATORS - dynamic generator */
A68_INT  MZOACTR;  /* ADICOPS - ABS INT */
{ 
MZOACTR = (*(&(NL(RWOACTR_xmi)->Type))) ;
LZOACTR.upb = A_ABS(MZOACTR) ;
( GZOACTR_anonymous? A_VLOC(A68_128 ,LZOACTR): A_VHEAP(A68_128 ,LZOACTR) );
KZOACTR = LZOACTR;
} 
*ReturnedValue = (KZOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  RCPACTR_generator(A68_BOOL  PCPACTR_anonymous, A68_228  *ReturnedValue, void *NonLocals)
#define NL(x) (((SCPACTR_generator *)NonLocals)->x)
{ 
A68_228  TCPACTR;  /* clause result */
A68_228  UCPACTR;  /* OPERATORS - dynamic generator */
A68_INT  VCPACTR;  /* ADICOPS - ABS INT */
{ 
VCPACTR = NL(Xmodinfo).Type ;
UCPACTR.dim[0].upb = A_ABS(VCPACTR) ;
UCPACTR.dim[0].lwb = 1 ;
A_1INITSTRIDES(UCPACTR) ;
( PCPACTR_anonymous? A_R1LOC(A68_128 ,UCPACTR): A_R1HEAP(A68_128 ,UCPACTR) );
TCPACTR = UCPACTR;
} 
*ReturnedValue = (TCPACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ZCPACTR_generator(A68_BOOL  XCPACTR_anonymous, A68_226  *ReturnedValue, void *NonLocals)
#define NL(x) (((ADPACTR_generator *)NonLocals)->x)
{ 
A68_226  BDPACTR;  /* clause result */
A68_226  CDPACTR;  /* OPERATORS - dynamic generator */
{ 
CDPACTR.dim[0].upb = NL(JCPACTR_maxlevel) ;
CDPACTR.dim[0].lwb = 0 ;
A_1INITSTRIDES(CDPACTR) ;
( XCPACTR_anonymous? A_R1LOC(A68_199 *,CDPACTR): A_R1HEAP(A68_199 *,CDPACTR) );
BDPACTR = CDPACTR;
} 
*ReturnedValue = (BDPACTR);
return;
} 
#undef NL

A_STATIC A68_BOOL  LFPACTR_setspecs(A68_126  Previousym)
{ 
A68_BOOL  MFPACTR_specsmatch;
A68_BOOL  NFPACTR_outoforder;
A68_BOOL  OFPACTR_previousispartcomperror;
A68_BOOL  PFPACTR_previousiscompilationerror;
A68_128 * QFPACTR_currentspec;
A68_INT  RFPACTR;  /* forall loop counter */
A68_139  SFPACTR;  /* avoid structure result */
A68_139  TFPACTR_previousspec;
A68_BOOL  UFPACTR;  /* clause result */
A68_VC  VFPACTR;  /* OPERATORS - istruct -> vector */
A68_109  WFPACTR;  /* OPERATORS - istruct -> vector */
A68_159  XFPACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_105 * YFPACTR;  /* YIELD */
A68_LINT * ZFPACTR;  /* YIELD */
A68_133  AGPACTR;  /* united object - for case conformity */
A68_VC  BGPACTR_keeps;
A68_133  CGPACTR;  /* united object - for case conformity */
A68_VC  DGPACTR_previouskeeps;
A68_BOOL  EGPACTR;  /* clause result */
A68_VC  FGPACTR;  /* OPERATORS - trim index */
A68_133  GGPACTR;  /* united object - for case conformity */
A68_127  HGPACTR;  /* OPERATORS - simple index */
A68_INT  IGPACTR;  /* YIELD */
A68_131  JGPACTR_previouscnames;
A68_BOOL  KGPACTR;  /* clause result */
A68_BOOL  LGPACTR_cnamesmatch;
A68_105 * MGPACTR_previouscname;
A68_105 * NGPACTR_cname;
A68_131  OGPACTR;  /* forall yield */
A68_INT  PGPACTR;  /* forall loop counter */
A68_VC  QGPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  RGPACTR;  /* OPERATORS - istruct -> vector */
A68_127  SGPACTR;  /* OPERATORS - simple index */
A68_INT  TGPACTR;  /* YIELD */
A68_128 * UGPACTR_previousymspec;
A68_130 * VGPACTR;  /* YIELD */
A68_105 * WGPACTR;  /* YIELD */
A68_LINT * XGPACTR;  /* YIELD */
A68_239  YGPACTR;  /* collateral clause result */
A68_VC  ZGPACTR;  /* OPERATORS - istruct -> vector */
A68_109  AHPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  BHPACTR;  /* avoid structure result */
A68_159  GHPACTR;  /* OPERATORS - istruct to row */
A68_130  HHPACTR;  /* OPERATORS - nil -> mode */
A68_130 * IHPACTR;  /* YIELD */
A68_105 * JHPACTR;  /* YIELD */
A68_LINT * KHPACTR;  /* YIELD */
A68_BOOL  LHPACTR;  /* clause result */
A_PROC_ENTRY(setspecs);
 /* line 679: */
 /* line 681: */
{ 
MFPACTR_specsmatch = A68_TRUE;
 /* line 682: */
NFPACTR_outoforder = A68_FALSE;
 /* line 683: */
OFPACTR_previousispartcomperror = A68_FALSE;
 /* line 684: */
PFPACTR_previousiscompilationerror = A68_FALSE;
 /* line 686: */
 /* line 687: */
RFPACTR = DCPACTR_specs.dim[0].upb - DCPACTR_specs.dim[0].lwb;
QFPACTR_currentspec = DCPACTR_specs.data;
for (;RFPACTR-- >= 0;
(QFPACTR_currentspec += DCPACTR_specs.dim[0].stride
) )
{
 /* line 688: */
 /* line 690: */
{ 
EOOACTR_givespec( (*(&(BCPACTR_currentmodinfo->Name))), (*(&((&(QFPACTR_currentspec->Xs))->F))), Previousym, &SFPACTR );
TFPACTR_previousspec = SFPACTR;
 /* line 691: */
 /* line 692: */
 /* line 693: */
UFPACTR = (TFPACTR_previousspec.Xs.No==(-2));
if ( UFPACTR )
{ 
 /* line 694: */
WFPACTR = (*(&((&(QFPACTR_currentspec->Xs))->F))) ;
NWIACTR_pmessage(323, A_HARR(XFPACTR,A_HISVEC(VFPACTR,WFPACTR,32,A68_CHAR ),A68_VC ));
 /* line 695: */
YFPACTR = (&(QFPACTR_currentspec->Ys)) ;
(*YFPACTR) = QIMACTR_newuniquename();
 /* line 696: */
ZFPACTR = (&(QFPACTR_currentspec->Timeoflastchange)) ;
(*ZFPACTR) = (*(&((&IYIACTR_config_info)->Translationtime)));
 /* line 697: */
 /* line 698: */
 /* line 699: */
MFPACTR_specsmatch = A68_FALSE;
} 
else
{ 
 /* line 700: */
AGPACTR = (*(&((&(QFPACTR_currentspec->Xs))->U))) ;
switch ( AGPACTR.mode )
{ 
case 1: /* REF VECTOR [] CHAR */
BGPACTR_keeps = (AGPACTR.data.mode1);
 /* line 701: */
 /* line 702: */
CGPACTR = TFPACTR_previousspec.Xs.U ;
switch ( CGPACTR.mode )
{ 
case 1: /* REF VECTOR [] CHAR */
DGPACTR_previouskeeps = (CGPACTR.data.mode1);
 /* line 703: */
 /* line 704: */
 /* line 705: */
if ( KQIACTR_keeplistoption )
{ 
 /* line 706: */
if ( (BGPACTR_keeps.upb>DGPACTR_previouskeeps.upb) )
{ 
 /* line 707: */
EGPACTR = A_VC_EQ(A_VTRIM(FGPACTR,(BGPACTR_keeps),A_VTSCRIPT(&(FGPACTR.upb),(BGPACTR_keeps).upb,1,DGPACTR_previouskeeps.upb)),DGPACTR_previouskeeps);
} 
else
{ 
 /* line 708: */
 /* line 709: */
EGPACTR = A_VC_EQ(BGPACTR_keeps,DGPACTR_previouskeeps);
} 
} 
else
{ 
 /* line 710: */
 /* line 712: */
EGPACTR = A_VC_EQ(BGPACTR_keeps,DGPACTR_previouskeeps);
} 
break;
case 2: /* REF VECTOR [] MODE108 */
 /* line 713: */
 /* line 714: */
 /* line 716: */
EGPACTR = !(OFPACTR_previousispartcomperror = A68_TRUE);
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
case 2: /* REF VECTOR [] MODE108 */
 /* line 717: */
 /* line 718: */
GGPACTR = TFPACTR_previousspec.Xs.U ;
switch ( GGPACTR.mode )
{ 
case 2: /* REF VECTOR [] MODE108 */
 /* line 719: */
 /* line 721: */
{ 
HGPACTR = Previousym.Specs ;
IGPACTR = TFPACTR_previousspec.Xs.No ;
JGPACTR_previouscnames = (*(&((&A_VINDEX(HGPACTR,IGPACTR))->Cnames)));
 /* line 722: */
 /* line 723: */
KGPACTR = ((*(&(QFPACTR_currentspec->Cnames))).upb!=JGPACTR_previouscnames.upb);
if ( KGPACTR )
{ 
 /* line 724: */
 /* line 725: */
EGPACTR = A68_FALSE;
} 
else
{ 
LGPACTR_cnamesmatch = A68_TRUE;
 /* line 726: */
 /* line 727: */
OGPACTR = (*(&(QFPACTR_currentspec->Cnames))) ;
PGPACTR = JGPACTR_previouscnames.upb -1;
if ( PGPACTR != OGPACTR.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
MGPACTR_previouscname = JGPACTR_previouscnames.data;
NGPACTR_cname = OGPACTR.data;
for (;PGPACTR-- >= 0;
(MGPACTR_previouscname++
,NGPACTR_cname++
) )
{
 /* line 728: */
 /* line 729: */
if ( !(LGPACTR_cnamesmatch) ) break;
 /* line 730: */
LGPACTR_cnamesmatch = A_VC_EQ(A_HISVEC(QGPACTR,(*NGPACTR_cname),7,A68_CHAR ),A_HISVEC(RGPACTR,(*MGPACTR_previouscname),7,A68_CHAR ));
}
 /* line 731: */
 /* line 732: */
 /* line 734: */
EGPACTR = LGPACTR_cnamesmatch;
} 
} 
break;
case 1: /* REF VECTOR [] CHAR */
 /* line 735: */
 /* line 736: */
 /* line 737: */
 /* line 738: */
 /* line 739: */
EGPACTR = !(PFPACTR_previousiscompilationerror = A68_TRUE);
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
if ( EGPACTR )
{ 
NFPACTR_outoforder = (NFPACTR_outoforder|((*(&((&(QFPACTR_currentspec->Xs))->No)))!=TFPACTR_previousspec.Xs.No));
 /* line 740: */
SGPACTR = Previousym.Specs ;
TGPACTR = 1 ;
UGPACTR_previousymspec = (&A_VINDEX(SGPACTR,TGPACTR));
 /* line 741: */
VGPACTR = (&(QFPACTR_currentspec->Keptinfo)) ;
(*VGPACTR) = (*(&(UGPACTR_previousymspec->Keptinfo)));
 /* line 742: */
WGPACTR = (&(QFPACTR_currentspec->Ys)) ;
(*WGPACTR) = TFPACTR_previousspec.Ys;
 /* line 743: */
 /* line 745: */
 /* line 746: */
XGPACTR = (&(QFPACTR_currentspec->Timeoflastchange)) ;
(*XGPACTR) = (*(&(UGPACTR_previousymspec->Timeoflastchange)));
} 
else
{ 
 /* line 747: */
AHPACTR = (*(&((&(QFPACTR_currentspec->Xs))->F))) ;
BNAAOSF_before( A_HISVEC(ZGPACTR,AHPACTR,32,A68_CHAR ), ' ', &BHPACTR );
YGPACTR.data[0] = BHPACTR;
if ( WNOACTR_composition )
{ 
YGPACTR.data[1] = DHPACTR;
} 
else
{ 
YGPACTR.data[1] = FHPACTR;
} 
VWIACTR_pwarning(324, A_HIS1ARR(GHPACTR,YGPACTR,A68_VC ,2));
 /* line 748: */
IHPACTR = (&(QFPACTR_currentspec->Keptinfo)) ;
(*IHPACTR) = A_VVAC(HHPACTR);
 /* line 749: */
JHPACTR = (&(QFPACTR_currentspec->Ys)) ;
(*JHPACTR) = QIMACTR_newuniquename();
 /* line 750: */
MFPACTR_specsmatch = A68_FALSE;
 /* line 751: */
 /* line 752: */
KHPACTR = (&(QFPACTR_currentspec->Timeoflastchange)) ;
(*KHPACTR) = (*(&((&IYIACTR_config_info)->Translationtime)));
} 
} 
} 
}
 /* line 755: */
 /* line 756: */
if ( OFPACTR_previousispartcomperror )
{ 
 /* line 757: */
 /* line 758: */
JXIACTR_warning(327);
} 
else
{ 
if ( PFPACTR_previousiscompilationerror )
{ 
 /* line 759: */
 /* line 760: */
JXIACTR_warning(345);
} 
else
{ 
if ( NFPACTR_outoforder )
{ 
 /* line 761: */
JXIACTR_warning(328);
} 
} 
} 
 /* line 763: */
 /* line 764: */
LHPACTR = (MFPACTR_specsmatch&!NFPACTR_outoforder);
} 
A_PROC_EXIT(setspecs);
return( LHPACTR );
} 
#undef NL

A_STATIC A68_BOOL  NHPACTR_matchmodules(A68_138  Previousversion)
{ 
A68_VC  OHPACTR;  /* OPERATORS - istruct -> vector */
A68_105  PHPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  QHPACTR;  /* OPERATORS - istruct -> vector */
A68_105  RHPACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  SHPACTR_localcontextsmatch;
A68_VC  THPACTR;  /* OPERATORS - istruct -> vector */
A68_105  UHPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  VHPACTR;  /* OPERATORS - istruct -> vector */
A68_105  WHPACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  XHPACTR_globalcontextsmatch;
A68_BOOL  YHPACTR;  /* clause result */
A_PROC_ENTRY(matchmodules);
 /* line 772: */
 /* line 774: */
{ 
 /* line 753: */
PHPACTR = (*(&(CCPACTR_checkinfo->L))) ;
RHPACTR = Previousversion.Ym.Lname ;
SHPACTR_localcontextsmatch = A_VC_EQ(A_HISVEC(OHPACTR,PHPACTR,7,A68_CHAR ),A_HISVEC(QHPACTR,RHPACTR,7,A68_CHAR ));
 /* line 775: */
 /* line 776: */
UHPACTR = (*(&(CCPACTR_checkinfo->G))) ;
WHPACTR = Previousversion.Ym.Gname ;
XHPACTR_globalcontextsmatch = A_VC_EQ(A_HISVEC(THPACTR,UHPACTR,7,A68_CHAR ),A_HISVEC(VHPACTR,WHPACTR,7,A68_CHAR ));
 /* line 778: */
 /* line 779: */
if ( !SHPACTR_localcontextsmatch )
{ 
 /* line 780: */
JXIACTR_warning(334);
} 
 /* line 782: */
 /* line 783: */
if ( !XHPACTR_globalcontextsmatch )
{ 
 /* line 784: */
JXIACTR_warning(335);
} 
 /* line 786: */
 /* line 787: */
if ( ((*(&(BCPACTR_currentmodinfo->Type)))==Previousversion.Xmi.Type) )
{ 
 /* line 788: */
YHPACTR = (SHPACTR_localcontextsmatch&XHPACTR_globalcontextsmatch);
} 
else
{ 
 /* line 789: */
if ( ((*(&(BCPACTR_currentmodinfo->Type)))==(-1)) )
{ 
 /* line 790: */
JXIACTR_warning(321);
} 
else
{ 
 /* line 791: */
if ( (Previousversion.Xmi.Type==(-1)) )
{ 
 /* line 792: */
JXIACTR_warning(322);
} 
else
{ 
 /* line 793: */
JXIACTR_warning(329);
} 
} 
 /* line 794: */
 /* line 795: */
 /* line 796: */
YHPACTR = A68_FALSE;
} 
} 
A_PROC_EXIT(matchmodules);
return( YHPACTR );
} 
#undef NL

A_STATIC A68_VOID  SIPACTR_outputspec(A68_128  Ymspec)
{ 
A68_129  TIPACTR_xspec;
A68_105  UIPACTR_ys;
A68_243  VIPACTR;  /* collateral clause result */
A68_VC  WIPACTR;  /* OPERATORS - istruct -> vector */
A68_109  XIPACTR;  /* OPERATORS - istruct -> vector */
A68_142  YIPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ZIPACTR;  /* YIELD */
A68_142  AJPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  BJPACTR;  /* avoid structure result */
A68_142  CJPACTR;  /* OPERATORS - mode -> union mode */
A68_142  DJPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  EJPACTR;  /* avoid structure result */
A68_142  FJPACTR;  /* OPERATORS - mode -> union mode */
A68_142  GJPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  HJPACTR;  /* avoid structure result */
A68_142  IJPACTR;  /* OPERATORS - mode -> union mode */
A68_142  JJPACTR;  /* OPERATORS - mode -> union mode */
A68_141  KJPACTR;  /* OPERATORS - istruct -> vector */
A68_133  LJPACTR;  /* united object - for case conformity */
A68_VC  MJPACTR_rc;
A68_186  RJPACTR;  /* procedure value */
A68_244  SJPACTR;  /* collateral clause result */
A68_VC  TJPACTR;  /* avoid structure result */
A68_142  UJPACTR;  /* OPERATORS - mode -> union mode */
A68_142  VJPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  WJPACTR;  /* avoid structure result */
A68_142  XJPACTR;  /* OPERATORS - mode -> union mode */
A68_142  YJPACTR;  /* OPERATORS - mode -> union mode */
A68_141  ZJPACTR;  /* OPERATORS - istruct -> vector */
A68_CHAR * AKPACTR_c;
A68_INT  BKPACTR;  /* forall loop counter */
A68_VC  CKPACTR;  /* avoid structure result */
A68_142  DKPACTR;  /* OPERATORS - mode -> union mode */
A68_141  EKPACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_245  FKPACTR;  /* collateral clause result */
A68_142  GKPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  HKPACTR;  /* OPERATORS - istruct -> vector */
A68_142  IKPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  JKPACTR;  /* YIELD */
A68_142  KKPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  LKPACTR;  /* avoid structure result */
A68_142  MKPACTR;  /* OPERATORS - mode -> union mode */
A68_142  NKPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  OKPACTR;  /* avoid structure result */
A68_142  PKPACTR;  /* OPERATORS - mode -> union mode */
A68_142  QKPACTR;  /* OPERATORS - mode -> union mode */
A68_141  RKPACTR;  /* OPERATORS - istruct -> vector */
A68_132 * SKPACTR_keptitem;
A68_130  TKPACTR;  /* forall yield */
A68_INT  UKPACTR;  /* forall loop counter */
A68_BOOL  VKPACTR_rhspresent;
A68_246  WKPACTR;  /* collateral clause result */
A68_VC  XKPACTR;  /* OPERATORS - istruct -> vector */
A68_105  YKPACTR;  /* OPERATORS - istruct -> vector */
A68_142  ZKPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ALPACTR;  /* YIELD */
A68_142  BLPACTR;  /* OPERATORS - mode -> union mode */
A68_142  CLPACTR;  /* OPERATORS - mode -> union mode */
A68_142  DLPACTR;  /* OPERATORS - mode -> union mode */
A68_142  ELPACTR;  /* OPERATORS - mode -> union mode */
A68_142  FLPACTR;  /* OPERATORS - mode -> union mode */
A68_142  GLPACTR;  /* OPERATORS - mode -> union mode */
A68_142  HLPACTR;  /* OPERATORS - mode -> union mode */
A68_142  ILPACTR;  /* OPERATORS - mode -> union mode */
A68_142  JLPACTR;  /* OPERATORS - mode -> union mode */
A68_142  KLPACTR;  /* OPERATORS - mode -> union mode */
A68_142  LLPACTR;  /* OPERATORS - mode -> union mode */
A68_142  MLPACTR;  /* OPERATORS - mode -> union mode */
A68_142  NLPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  OLPACTR;  /* YIELD */
A68_142  PLPACTR;  /* OPERATORS - mode -> union mode */
A68_141  QLPACTR;  /* OPERATORS - istruct -> vector */
A68_244  RLPACTR;  /* collateral clause result */
A68_142  SLPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  TLPACTR;  /* YIELD */
A68_142  ULPACTR;  /* OPERATORS - mode -> union mode */
A68_142  VLPACTR;  /* OPERATORS - mode -> union mode */
A68_142  WLPACTR;  /* OPERATORS - mode -> union mode */
A68_141  XLPACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(outputspec);
 /* line 835: */
 /* line 836: */
{ 
TIPACTR_xspec = Ymspec.Xs;
 /* line 837: */
UIPACTR_ys = Ymspec.Ys;
 /* line 838: */
XIPACTR = TIPACTR_xspec.F ;
ZIPACTR = A_HISVEC(WIPACTR,XIPACTR,32,A68_CHAR ) ;
VIPACTR.data[0] = A_UNITE(YIPACTR,mode2,2,ZIPACTR);
VIPACTR.data[1] = A_UNITE(AJPACTR,mode3,3,EIAACTR_cnewline);
WRAAOSF_xc( TIPACTR_xspec.No, &BJPACTR );
VIPACTR.data[2] = A_UNITE(CJPACTR,mode2,2,BJPACTR);
 /* line 839: */
VIPACTR.data[3] = A_UNITE(DJPACTR,mode3,3,EIAACTR_cnewline);
WRAAOSF_xc( TIPACTR_xspec.Nl, &EJPACTR );
VIPACTR.data[4] = A_UNITE(FJPACTR,mode2,2,EJPACTR);
VIPACTR.data[5] = A_UNITE(GJPACTR,mode3,3,EIAACTR_cnewline);
WRAAOSF_xc( TIPACTR_xspec.Ng, &HJPACTR );
VIPACTR.data[6] = A_UNITE(IJPACTR,mode2,2,HJPACTR);
VIPACTR.data[7] = A_UNITE(JJPACTR,mode3,3,EIAACTR_cnewline);
AVLACTR_writemodinfo(A_HISVEC(KJPACTR,VIPACTR,8,A68_142 ));
 /* line 841: */
 /* line 842: */
LJPACTR = TIPACTR_xspec.U ;
switch ( LJPACTR.mode )
{ 
case 1: /* REF VECTOR [] CHAR */
MJPACTR_rc = (LJPACTR.data.mode1);
 /* line 843: */
 /* line 844: */
{ 
 /* line 845: */
 /* line 846: */
if ( (ZCHACTR_tracelevel(OJPACTR)!=0) )
{ 
INOACTR_debugmessage(1, QJPACTR);
 /* line 847: */
 /* line 848: */
RJPACTR.fn.fn_global = INOACTR_debugmessage;
RJPACTR.nonlocals = A68_NIL;
QYKACTR_decodespec(MJPACTR_rc, RJPACTR);
} 
 /* line 850: */
WRAAOSF_xc( 1, &TJPACTR );
SJPACTR.data[0] = A_UNITE(UJPACTR,mode2,2,TJPACTR);
SJPACTR.data[1] = A_UNITE(VJPACTR,mode3,3,EIAACTR_cnewline);
WRAAOSF_xc( MJPACTR_rc.upb, &WJPACTR );
SJPACTR.data[2] = A_UNITE(XJPACTR,mode2,2,WJPACTR);
SJPACTR.data[3] = A_UNITE(YJPACTR,mode3,3,EIAACTR_cnewline);
AVLACTR_writemodinfo(A_HISVEC(ZJPACTR,SJPACTR,4,A68_142 ));
 /* line 852: */
BKPACTR = MJPACTR_rc.upb -1;
AKPACTR_c = MJPACTR_rc.data;
for (;BKPACTR-- >= 0;
(AKPACTR_c++
) )
{
BQAAOSF_hex( (A68_LBITS )(A68_BITS )(A68_INT)(unsigned char)(*AKPACTR_c), 2, &CKPACTR );
AVLACTR_writemodinfo(A_HVEC(EKPACTR,A_UNITE(DKPACTR,mode2,2,CKPACTR),A68_142 ));
}
 /* line 854: */
 /* line 855: */
 /* line 856: */
FKPACTR.data[0] = A_UNITE(GKPACTR,mode3,3,EIAACTR_cnewline);
JKPACTR = A_HISVEC(HKPACTR,UIPACTR_ys,7,A68_CHAR ) ;
FKPACTR.data[1] = A_UNITE(IKPACTR,mode2,2,JKPACTR);
 /* line 857: */
FKPACTR.data[2] = A_UNITE(KKPACTR,mode3,3,EIAACTR_cnewline);
JPAAOSF_lwhole( Ymspec.Timeoflastchange, 0, &LKPACTR );
FKPACTR.data[3] = A_UNITE(MKPACTR,mode2,2,LKPACTR);
 /* line 858: */
FKPACTR.data[4] = A_UNITE(NKPACTR,mode3,3,EIAACTR_cnewline);
 /* line 859: */
ROAAOSF_whole( Ymspec.Keptinfo.upb, 0, &OKPACTR );
FKPACTR.data[5] = A_UNITE(PKPACTR,mode2,2,OKPACTR);
FKPACTR.data[6] = A_UNITE(QKPACTR,mode3,3,EIAACTR_cnewline);
AVLACTR_writemodinfo(A_HISVEC(RKPACTR,FKPACTR,7,A68_142 ));
 /* line 861: */
 /* line 862: */
TKPACTR = Ymspec.Keptinfo ;
UKPACTR = TKPACTR.upb -1;
SKPACTR_keptitem = TKPACTR.data;
for (;UKPACTR-- >= 0;
(SKPACTR_keptitem++
) )
{
 /* line 864: */
VKPACTR_rhspresent = ((*(&(SKPACTR_keptitem->Rhs))).upb>0);
 /* line 866: */
 /* line 867: */
 /* line 868: */
YKPACTR = (*(&(SKPACTR_keptitem->Prefix))) ;
ALPACTR = A_HISVEC(XKPACTR,YKPACTR,7,A68_CHAR ) ;
WKPACTR.data[0] = A_UNITE(ZKPACTR,mode2,2,ALPACTR);
if ( (*(&(SKPACTR_keptitem->Optimised))) )
{ 
WKPACTR.data[1] = A_UNITE(BLPACTR,mode1,1,ENOACTR_flip);
} 
else
{ 
 /* line 869: */
WKPACTR.data[1] = A_UNITE(CLPACTR,mode1,1,FNOACTR_flop);
} 
if ( (*(&(SKPACTR_keptitem->Iddec))) )
{ 
WKPACTR.data[2] = A_UNITE(DLPACTR,mode1,1,ENOACTR_flip);
} 
else
{ 
 /* line 870: */
WKPACTR.data[2] = A_UNITE(ELPACTR,mode1,1,FNOACTR_flop);
} 
if ( (*(&(SKPACTR_keptitem->Globalproc))) )
{ 
WKPACTR.data[3] = A_UNITE(FLPACTR,mode1,1,ENOACTR_flip);
} 
else
{ 
 /* line 871: */
WKPACTR.data[3] = A_UNITE(GLPACTR,mode1,1,FNOACTR_flop);
} 
if ( (*(&(SKPACTR_keptitem->Keptgenproc))) )
{ 
WKPACTR.data[4] = A_UNITE(HLPACTR,mode1,1,ENOACTR_flip);
} 
else
{ 
 /* line 872: */
WKPACTR.data[4] = A_UNITE(ILPACTR,mode1,1,FNOACTR_flop);
} 
if ( (*(&(SKPACTR_keptitem->Forceuse))) )
{ 
WKPACTR.data[5] = A_UNITE(JLPACTR,mode1,1,ENOACTR_flip);
} 
else
{ 
 /* line 873: */
WKPACTR.data[5] = A_UNITE(KLPACTR,mode1,1,FNOACTR_flop);
} 
if ( VKPACTR_rhspresent )
{ 
WKPACTR.data[6] = A_UNITE(LLPACTR,mode1,1,ENOACTR_flip);
} 
else
{ 
 /* line 874: */
WKPACTR.data[6] = A_UNITE(MLPACTR,mode1,1,FNOACTR_flop);
} 
 /* line 876: */
OLPACTR = (*(&(SKPACTR_keptitem->Definition))) ;
WKPACTR.data[7] = A_UNITE(NLPACTR,mode2,2,OLPACTR);
WKPACTR.data[8] = A_UNITE(PLPACTR,mode3,3,EIAACTR_cnewline);
AVLACTR_writemodinfo(A_HISVEC(QLPACTR,WKPACTR,9,A68_142 ));
 /* line 878: */
 /* line 879: */
 /* line 880: */
if ( VKPACTR_rhspresent )
{ 
TLPACTR = (*(&(SKPACTR_keptitem->Rhs))) ;
RLPACTR.data[0] = A_UNITE(SLPACTR,mode2,2,TLPACTR);
RLPACTR.data[1] = A_UNITE(ULPACTR,mode3,3,EIAACTR_cnewline);
RLPACTR.data[2] = A_UNITE(VLPACTR,mode2,2,VNOACTR_alien_termination_string);
RLPACTR.data[3] = A_UNITE(WLPACTR,mode3,3,EIAACTR_cnewline);
 /* line 881: */
 /* line 882: */
AVLACTR_writemodinfo(A_HISVEC(XLPACTR,RLPACTR,4,A68_142 ));
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
WXIACTR_assert(ZLPACTR, A68_FALSE);
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

A_STATIC A68_VOID  NOPACTR_generator(A68_BOOL  LOPACTR_anonymous, A68_130  *ReturnedValue, void *NonLocals)
#define NL(x) (((OOPACTR_generator *)NonLocals)->x)
{ 
A68_130  POPACTR;  /* clause result */
A68_130  QOPACTR;  /* OPERATORS - dynamic generator */
{ 
QOPACTR.upb = UBPACTR_keptdecnos.dim[0].upb ;
( LOPACTR_anonymous? A_VLOC(A68_132 ,QOPACTR): A_VHEAP(A68_132 ,QOPACTR) );
POPACTR = QOPACTR;
} 
*ReturnedValue = (POPACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  INOACTR_debugmessage(A68_INT  Level, A68_VC  M)
{ 
A68_VC  ONOACTR;  /* avoid structure result */
A_PROC_ENTRY(debugmessage);
 /* line 113: */
 /* line 114: */
if ( (ZCHACTR_tracelevel(KNOACTR)>=Level) )
{ 
 /* line 115: */
ROAAOSF_whole( Level, 0, &ONOACTR );
A_CALLPROC(MSIACTR_list,(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(NNOACTR,ONOACTR),PNOACTR),M)),(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(NNOACTR,ONOACTR),PNOACTR),M),(MSIACTR_list).nonlocals));
} 
A_PROC_EXIT(debugmessage);
return;
} 
#undef NL

A68_VOID  EOOACTR_givespec(A68_109  N, A68_109  F, A68_126  Ym, A68_139  *ReturnedValue)
{ 
A68_INT  FOOACTR_no;
A68_128 * GOOACTR_spec;
A68_127  HOOACTR;  /* forall yield */
A68_INT  IOOACTR;  /* forall loop counter */
A68_VC  JOOACTR;  /* OPERATORS - istruct -> vector */
A68_109  KOOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  LOOACTR;  /* OPERATORS - istruct -> vector */
A68_139  MOOACTR;  /* clause result */
A68_127  NOOACTR;  /* OPERATORS - simple index */
A68_128 * OOOACTR_spec;
A68_139  POOACTR;  /* collateral clause result */
A_PROC_ENTRY(givespec);
 /* line 135: */
 /* line 136: */
{ 
FOOACTR_no = 1;
 /* line 137: */
 /* line 138: */
HOOACTR = Ym.Specs ;
IOOACTR = HOOACTR.upb -1;
GOOACTR_spec = HOOACTR.data;
for (;IOOACTR-- >= 0;
(GOOACTR_spec++
) )
{
 /* line 139: */
KOOACTR = (*(&((&(GOOACTR_spec->Xs))->F))) ;
if ( !(A_VC_NE(A_HISVEC(JOOACTR,KOOACTR,32,A68_CHAR ),A_HISVEC(LOOACTR,F,32,A68_CHAR ))) ) break;
 /* line 140: */
FOOACTR_no+=1;
}
 /* line 141: */
 /* line 142: */
 /* line 143: */
if ( (FOOACTR_no>Ym.Specs.upb) )
{ 
MOOACTR = AOOACTR_nullspec;
} 
else
{ 
NOOACTR = Ym.Specs ;
OOOACTR_spec = (&A_VINDEX(NOOACTR,FOOACTR_no));
 /* line 144: */
POOACTR.Xs = (*(&(OOOACTR_spec->Xs)));
 /* line 145: */
 /* line 146: */
POOACTR.Ys = (*(&(OOOACTR_spec->Ys)));
MOOACTR = POOACTR;
} 
} 
A_PROC_EXIT(givespec);
*ReturnedValue = (MOOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ROOACTR_filter(A68_VC  Name, A68_VC  *ReturnedValue)
{ 
A68_VC  SOOACTR;  /* clause result */
A68_VC  TOOACTR;  /* OPERATORS - trim index */
A68_VC  UOOACTR;  /* avoid structure result */
A_PROC_ENTRY(filter);
 /* line 149: */
BNAAOSF_before( A_VTRIM(TOOACTR,(Name),A_VTSCRIPT(&(TOOACTR.upb),(Name).upb,1,SRIACTR_filenametruncate)), ' ', &UOOACTR );
SOOACTR = UOOACTR;
A_PROC_EXIT(filter);
*ReturnedValue = (SOOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  WOOACTR_generator(A68_BOOL  VOOACTR_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  XOOACTR;  /* clause result */
A68_VC  YOOACTR;  /* OPERATORS - dynamic generator */
{ 
YOOACTR.upb = 500 ;
( VOOACTR_anonymous? A_VLOC(A68_CHAR ,YOOACTR): A_VHEAP(A68_CHAR ,YOOACTR) );
XOOACTR = YOOACTR;
} 
*ReturnedValue = (XOOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  DPOACTR_read_int(A68_59 * F, A68_INT * Ri)
{ 
A68_INT  EPOACTR_chars_read;
A68_60  FPOACTR;  /* avoid structure result */
A68_BOOL  GPOACTR;  /* optbool result */
A68_VC  HPOACTR;  /* OPERATORS - trim index */
A68_BOOL  IPOACTR;  /* clause result */
A_PROC_ENTRY(read_int);
 /* line 210: */
 /* line 211: */
{ 
 /* line 212: */
 /* line 213: */
DXBAOSF_read_line( F, ZOOACTR_modinfo_buf, (&EPOACTR_chars_read), RIBAOSF_ignore_msg, &FPOACTR );
GPOACTR = EVBAOSF_(FPOACTR, OUBAOSF_io_ok);
if ( ! GPOACTR )
{ /* line 214: */
GPOACTR = !TQAAOSF_vcdectoint(Ri, A_VTRIM(HPOACTR,(ZOOACTR_modinfo_buf),A_VTSCRIPT(&(HPOACTR.upb),(ZOOACTR_modinfo_buf).upb,1,EPOACTR_chars_read)));
}
 /* line 215: */
IPOACTR = GPOACTR;
if ( IPOACTR )
{ 
 /* line 216: */
SXIACTR_terminalerror(261);
} 
} 
A_PROC_EXIT(read_int);
return;
} 
#undef NL

A_STATIC A68_VOID  LPOACTR_read_str(A68_59 * F, A68_VC  Str)
{ 
A68_INT  MPOACTR_chars_read;
A68_60  NPOACTR;  /* avoid structure result */
A68_BOOL  OPOACTR;  /* optbool result */
A68_BOOL  PPOACTR;  /* clause result */
A68_VC  QPOACTR;  /* OPERATORS - trim index */
A68_VC  RPOACTR;  /* OPERATORS - assign op */
A_PROC_ENTRY(read_str);
 /* line 220: */
 /* line 221: */
{ 
 /* line 222: */
 /* line 223: */
DXBAOSF_read_line( F, ZOOACTR_modinfo_buf, (&MPOACTR_chars_read), RIBAOSF_ignore_msg, &NPOACTR );
OPOACTR = EVBAOSF_(NPOACTR, OUBAOSF_io_ok);
if ( ! OPOACTR )
{ /* line 224: */
OPOACTR = (MPOACTR_chars_read!=Str.upb);
}
 /* line 225: */
PPOACTR = OPOACTR;
if ( PPOACTR )
{ 
 /* line 226: */
 /* line 227: */
SXIACTR_terminalerror(261);
} 
else
{ 
 /* line 228: */
RPOACTR = A_VTRIM(QPOACTR,(ZOOACTR_modinfo_buf),A_VTSCRIPT(&(QPOACTR.upb),(ZOOACTR_modinfo_buf).upb,1,MPOACTR_chars_read)) ;
A_VASSIGN2(RPOACTR,Str,A68_CHAR );
} 
} 
A_PROC_EXIT(read_str);
return;
} 
#undef NL

A_STATIC A68_VOID  VPOACTR_unpackspec(A68_59 * F, A68_128 * Ymspec, A68_BOOL  Lib_init)
{ 
A68_129 * WPOACTR_xspec;
A68_105 * XPOACTR_ys;
A68_INT  YPOACTR_spectype;
A68_INT  ZPOACTR_chars_read;
A68_VC  AQOACTR;  /* OPERATORS - istruct -> vector */
A68_109 * BQOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  EQOACTR;  /* OPERATORS - istruct -> vector */
A68_109  FQOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  GQOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  JQOACTR;  /* avoid structure result */
A68_VC  MQOACTR;  /* avoid structure result */
A68_VC  PQOACTR;  /* avoid structure result */
A68_VC  SQOACTR;  /* avoid structure result */
A68_INT  NROACTR_ubound;
A68_INT  OROACTR_cbound;
A68_VC  RROACTR;  /* avoid structure result */
A68_103  TROACTR_generator;   /* proc value of non-global proc */
A68_VC  YROACTR;  /* avoid structure result */
A68_VC  ZROACTR_xs;
A68_133  ASOACTR;  /* OPERATORS - mode -> union mode */
A68_133 * BSOACTR;  /* YIELD */
A68_103  DSOACTR_generator;   /* proc value of non-global proc */
A68_VC  ISOACTR;  /* avoid structure result */
A68_VC  JSOACTR_hex_spec;
A68_60  KSOACTR;  /* avoid structure result */
A68_INT  LSOACTR_i;
A68_INT  MSOACTR;  /* to part of loop */
A68_VC  NSOACTR;  /* OPERATORS - trim index */
A68_VC  OSOACTR;  /* OPERATORS - trim index */
A68_VC  PSOACTR;  /* OPERATORS - trim index */
A68_VC  QSOACTR;  /* YIELD */
A68_RC  RSOACTR;  /* OPERATORS - vector -> row */
A68_CHAR * SSOACTR;  /* YIELD */
A68_133  VSOACTR;  /* united object - for case conformity */
A68_VC  WSOACTR_r;
A68_VC  XSOACTR;  /* clause result */
A68_186  YSOACTR;  /* procedure value */
A68_VC  ZSOACTR;  /* OPERATORS - istruct -> vector */
A68_INT  ATOACTR_i;
A68_LINT * BTOACTR;  /* YIELD */
A68_212  DTOACTR_generator;   /* proc value of non-global proc */
A68_130  ITOACTR;  /* avoid structure result */
A68_130 * JTOACTR;  /* YIELD */
A68_132 * KTOACTR_keptitem;
A68_130  LTOACTR;  /* forall yield */
A68_INT  MTOACTR;  /* forall loop counter */
A68_INT  NTOACTR_chars_read;
A68_60  OTOACTR;  /* avoid structure result */
A68_INT  PTOACTR_i;
A68_VC  QTOACTR;  /* OPERATORS - istruct -> vector */
A68_105 * RTOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  STOACTR;  /* OPERATORS - trim index */
A68_VC  TTOACTR;  /* OPERATORS - trim index */
A68_VC  UTOACTR;  /* OPERATORS - trim index */
A68_VC  VTOACTR;  /* OPERATORS - istruct -> vector */
A68_105  WTOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  XTOACTR;  /* YIELD */
A68_VC  YTOACTR;  /* OPERATORS - assign op */
A68_INT  ZTOACTR;  /* YIELD */
A68_BOOL * AUOACTR;  /* YIELD */
A68_INT  BUOACTR;  /* YIELD */
A68_BOOL * CUOACTR;  /* YIELD */
A68_INT  DUOACTR;  /* YIELD */
A68_BOOL * EUOACTR;  /* YIELD */
A68_INT  FUOACTR;  /* YIELD */
A68_BOOL * GUOACTR;  /* YIELD */
A68_INT  HUOACTR;  /* YIELD */
A68_BOOL * IUOACTR;  /* YIELD */
A68_INT  JUOACTR;  /* YIELD */
A68_BOOL  KUOACTR_rhspresent;
A68_VC  LUOACTR;  /* OPERATORS - trim index */
A68_VC  MUOACTR;  /* avoid structure result */
A68_VC * NUOACTR;  /* YIELD */
A68_60  OUOACTR;  /* avoid structure result */
A68_60  PUOACTR_read_status;
A68_BOOL  QUOACTR;  /* clause result */
A68_VC  RUOACTR;  /* OPERATORS - trim index */
A68_VC  SUOACTR_line;
A68_BOOL  TUOACTR;  /* optbool result */
A68_VC  UUOACTR;  /* OPERATORS - trim index */
A68_BOOL  VUOACTR;  /* clause result */
A68_VC  WUOACTR;  /* avoid structure result */
A68_VC * XUOACTR;  /* YIELD */
A68_VC * YUOACTR_rhs;
A68_VC  ZUOACTR;  /* OPERATORS - trim index */
A_PROC_ENTRY(unpackspec);
 /* line 238: */
 /* line 240: */
{ 
WPOACTR_xspec = (&(Ymspec->Xs));
 /* line 241: */
XPOACTR_ys = (&(Ymspec->Ys));
 /* line 243: */
 /* line 244: */
 /* line 246: */
BQOACTR = (&(WPOACTR_xspec->F)) ;
LPOACTR_read_str(F, A_ISVEC(AQOACTR,BQOACTR,32,A68_CHAR ));
FQOACTR = (*(&(WPOACTR_xspec->F))) ;
INOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(DQOACTR,A_HISVEC(EQOACTR,FQOACTR,32,A68_CHAR )),A_HVEC(GQOACTR,'\"',A68_CHAR )));
 /* line 247: */
DPOACTR_read_int(F, (&(WPOACTR_xspec->No)));
WRAAOSF_xc( (*(&(WPOACTR_xspec->No))), &JQOACTR );
INOACTR_debugmessage(1, A_VC_PLUS(IQOACTR,JQOACTR));
 /* line 248: */
DPOACTR_read_int(F, (&(WPOACTR_xspec->Nl)));
WRAAOSF_xc( (*(&(WPOACTR_xspec->Nl))), &MQOACTR );
INOACTR_debugmessage(1, A_VC_PLUS(LQOACTR,MQOACTR));
 /* line 249: */
DPOACTR_read_int(F, (&(WPOACTR_xspec->Ng)));
WRAAOSF_xc( (*(&(WPOACTR_xspec->Ng))), &PQOACTR );
INOACTR_debugmessage(1, A_VC_PLUS(OQOACTR,PQOACTR));
 /* line 250: */
DPOACTR_read_int(F, (&YPOACTR_spectype));
WRAAOSF_xc( YPOACTR_spectype, &SQOACTR );
INOACTR_debugmessage(1, A_VC_PLUS(RQOACTR,SQOACTR));
 /* line 252: */
 /* line 253: */
switch ( YPOACTR_spectype )
{ 
case 1: 
 /* line 254: */
{ 
 /* line 269: */
 /* line 271: */
DPOACTR_read_int(F, (&NROACTR_ubound));
 /* line 272: */
WRAAOSF_xc( NROACTR_ubound, &RROACTR );
INOACTR_debugmessage(1, A_VC_PLUS(QROACTR,RROACTR));
 /* line 273: */
A_CLOSURE( TROACTR_generator, UROACTR_generator, VROACTR_generator );
(( VROACTR_generator * ) ( TROACTR_generator.nonlocals )) -> NROACTR_ubound = (&NROACTR_ubound);
A_CALLPROC(TROACTR_generator,(A68_FALSE, &YROACTR),(A68_FALSE, &YROACTR,(TROACTR_generator).nonlocals));
ZROACTR_xs = YROACTR;
 /* line 274: */
BSOACTR = (&(WPOACTR_xspec->U)) ;
(*BSOACTR) = A_UNITE(ASOACTR,mode1,1,ZROACTR_xs);
 /* line 275: */
A_CLOSURE( DSOACTR_generator, ESOACTR_generator, FSOACTR_generator );
(( FSOACTR_generator * ) ( DSOACTR_generator.nonlocals )) -> NROACTR_ubound = (&NROACTR_ubound);
A_CALLPROC(DSOACTR_generator,(A68_FALSE, &ISOACTR),(A68_FALSE, &ISOACTR,(DSOACTR_generator).nonlocals));
JSOACTR_hex_spec = ISOACTR;
 /* line 276: */
 /* line 277: */
 /* line 278: */
DXBAOSF_read_line( F, JSOACTR_hex_spec, (&ZPOACTR_chars_read), RIBAOSF_ignore_msg, &KSOACTR );
if ( EVBAOSF_(KSOACTR, OUBAOSF_io_ok) )
{ 
 /* line 279: */
SXIACTR_terminalerror(261);
} 
 /* line 281: */
 /* line 282: */
MSOACTR = ZROACTR_xs.upb;
for ( LSOACTR_i = 1;
LSOACTR_i <= MSOACTR;
LSOACTR_i += 1 )
{ 
 /* line 283: */
 /* line 284: */
OSOACTR = A_VTRIM(NSOACTR,(JSOACTR_hex_spec),A_VTSCRIPT(&(NSOACTR.upb),(JSOACTR_hex_spec).upb,((2*LSOACTR_i)-1),(JSOACTR_hex_spec).upb)) ;
QSOACTR = A_VTRIM(PSOACTR,(OSOACTR),A_VTSCRIPT(&(PSOACTR.upb),(OSOACTR).upb,1,2)) ;
SSOACTR = (&A_VINDEX(ZROACTR_xs,LSOACTR_i)) ;
(*SSOACTR) = VQOACTR_hexchar(A_VECARR(QSOACTR,RSOACTR));
}
 /* line 286: */
 /* line 287: */
 /* line 288: */
if ( !Lib_init )
{ 
 /* line 289: */
 /* line 290: */
if ( (ZCHACTR_tracelevel(USOACTR)>5) )
{ 
VSOACTR = (*(&(WPOACTR_xspec->U))) ;
switch ( VSOACTR.mode )
{ 
case 1: /* REF VECTOR [] CHAR */
WSOACTR_r = (VSOACTR.data.mode1);
XSOACTR = WSOACTR_r;
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 291: */
YSOACTR.fn.fn_global = INOACTR_debugmessage;
YSOACTR.nonlocals = A68_NIL;
QYKACTR_decodespec(XSOACTR, YSOACTR);
} 
 /* line 293: */
LPOACTR_read_str(F, A_ISVEC(ZSOACTR,XPOACTR_ys,7,A68_CHAR ));
 /* line 295: */
 /* line 296: */
DPOACTR_read_int(F, (&ATOACTR_i));
 /* line 297: */
BTOACTR = (&(Ymspec->Timeoflastchange)) ;
(*BTOACTR) = (A68_LINT )ATOACTR_i;
 /* line 299: */
DPOACTR_read_int(F, (&OROACTR_cbound));
 /* line 301: */
A_CLOSURE( DTOACTR_generator, ETOACTR_generator, FTOACTR_generator );
(( FTOACTR_generator * ) ( DTOACTR_generator.nonlocals )) -> OROACTR_cbound = (&OROACTR_cbound);
A_CALLPROC(DTOACTR_generator,(A68_FALSE, &ITOACTR),(A68_FALSE, &ITOACTR,(DTOACTR_generator).nonlocals));
JTOACTR = (&(Ymspec->Keptinfo)) ;
(*JTOACTR) = ITOACTR;
 /* line 302: */
 /* line 303: */
LTOACTR = (*(&(Ymspec->Keptinfo))) ;
MTOACTR = LTOACTR.upb -1;
KTOACTR_keptitem = LTOACTR.data;
for (;MTOACTR-- >= 0;
(KTOACTR_keptitem++
) )
{
 /* line 304: */
 /* line 305: */
 /* line 306: */
 /* line 307: */
DXBAOSF_read_line( F, ZOOACTR_modinfo_buf, (&NTOACTR_chars_read), RIBAOSF_ignore_msg, &OTOACTR );
if ( EVBAOSF_(OTOACTR, OUBAOSF_io_ok) )
{ 
 /* line 308: */
SXIACTR_terminalerror(261);
} 
 /* line 310: */
 /* line 311: */
RTOACTR = (&(KTOACTR_keptitem->Prefix)) ;
TTOACTR = A_VTRIM(STOACTR,(ZOOACTR_modinfo_buf),A_VTSCRIPT(&(STOACTR.upb),(ZOOACTR_modinfo_buf).upb,1,(ZOOACTR_modinfo_buf).upb)) ;
WTOACTR = (*(&(KTOACTR_keptitem->Prefix))) ;
XTOACTR = A_ISVEC(QTOACTR,RTOACTR,7,A68_CHAR ) ;
YTOACTR = A_VTRIM(UTOACTR,(TTOACTR),A_VTSCRIPT(&(UTOACTR.upb),(TTOACTR).upb,1,(PTOACTR_i = A_HISVEC(VTOACTR,WTOACTR,7,A68_CHAR ).upb))) ;
A_VASSIGN2(YTOACTR,XTOACTR,A68_CHAR );
 /* line 312: */
ZTOACTR = PTOACTR_i+=1 ;
AUOACTR = (&(KTOACTR_keptitem->Optimised)) ;
(*AUOACTR) = ((*(&A_VINDEX(ZOOACTR_modinfo_buf,ZTOACTR)))==ENOACTR_flip);
 /* line 313: */
BUOACTR = PTOACTR_i+=1 ;
CUOACTR = (&(KTOACTR_keptitem->Iddec)) ;
(*CUOACTR) = ((*(&A_VINDEX(ZOOACTR_modinfo_buf,BUOACTR)))==ENOACTR_flip);
 /* line 314: */
DUOACTR = PTOACTR_i+=1 ;
EUOACTR = (&(KTOACTR_keptitem->Globalproc)) ;
(*EUOACTR) = ((*(&A_VINDEX(ZOOACTR_modinfo_buf,DUOACTR)))==ENOACTR_flip);
 /* line 315: */
FUOACTR = PTOACTR_i+=1 ;
GUOACTR = (&(KTOACTR_keptitem->Keptgenproc)) ;
(*GUOACTR) = ((*(&A_VINDEX(ZOOACTR_modinfo_buf,FUOACTR)))==ENOACTR_flip);
 /* line 316: */
HUOACTR = PTOACTR_i+=1 ;
IUOACTR = (&(KTOACTR_keptitem->Forceuse)) ;
(*IUOACTR) = ((*(&A_VINDEX(ZOOACTR_modinfo_buf,HUOACTR)))==ENOACTR_flip);
 /* line 318: */
JUOACTR = PTOACTR_i+=1 ;
KUOACTR_rhspresent = ((*(&A_VINDEX(ZOOACTR_modinfo_buf,JUOACTR)))==ENOACTR_flip);
 /* line 319: */
ZCAAOSF_makervc( A_VTRIM(LUOACTR,(ZOOACTR_modinfo_buf),A_VTSCRIPT(&(LUOACTR.upb),(ZOOACTR_modinfo_buf).upb,(PTOACTR_i+=1),NTOACTR_chars_read)), &MUOACTR );
NUOACTR = (&(KTOACTR_keptitem->Definition)) ;
(*NUOACTR) = MUOACTR;
 /* line 321: */
 /* line 322: */
 /* line 323: */
if ( KUOACTR_rhspresent )
{ 
for ( ;; )
{ 
 /* line 324: */
 /* line 325: */
{ 
DXBAOSF_read_line( F, ZOOACTR_modinfo_buf, (&NTOACTR_chars_read), RIBAOSF_ignore_msg, &OUOACTR );
PUOACTR_read_status = OUOACTR;
 /* line 326: */
 /* line 327: */
 /* line 328: */
QUOACTR = AVBAOSF_(PUOACTR_read_status, OUBAOSF_io_ok);
if ( QUOACTR )
{ 
 /* line 329: */
NTOACTR_chars_read+=1;
} 
else
{ 
 /* line 330: */
 /* line 331: */
if ( EVBAOSF_(PUOACTR_read_status, XUBAOSF_io_no_newline) )
{ 
 /* line 332: */
SXIACTR_terminalerror(261);
} 
} 
} 
 /* line 333: */
SUOACTR_line = A_VTRIM(RUOACTR,(ZOOACTR_modinfo_buf),A_VTSCRIPT(&(RUOACTR.upb),(ZOOACTR_modinfo_buf).upb,1,NTOACTR_chars_read));
 /* line 335: */
 /* line 336: */
TUOACTR = (NTOACTR_chars_read!=(VNOACTR_alien_termination_string.upb+1));
if ( ! TUOACTR )
{ /* line 337: */
TUOACTR = A_VC_NE(A_VTRIM(UUOACTR,(SUOACTR_line),A_VTSCRIPT(&(UUOACTR.upb),(SUOACTR_line).upb,1,VNOACTR_alien_termination_string.upb)),VNOACTR_alien_termination_string);
}
 /* line 338: */
VUOACTR = TUOACTR;
if ( !VUOACTR ) break;
 /* line 339: */
ZCAAOSF_makervc( A_VC_PLUS((*(&(KTOACTR_keptitem->Rhs))),SUOACTR_line), &WUOACTR );
XUOACTR = (&(KTOACTR_keptitem->Rhs)) ;
(*XUOACTR) = WUOACTR;
}
 /* line 340: */
} 
 /* line 342: */
YUOACTR_rhs = (&(KTOACTR_keptitem->Rhs));
 /* line 343: */
 /* line 344: */
(*YUOACTR_rhs) = A_VTRIM(ZUOACTR,((*YUOACTR_rhs)),A_VTSCRIPT(&(ZUOACTR.upb),((*YUOACTR_rhs)).upb,1,((*YUOACTR_rhs).upb-1)));
}
 /* line 345: */
 /* line 346: */
 /* line 349: */
} 
} 
break;
case 2: 
 /* line 350: */
WXIACTR_assert(BVOACTR, A68_FALSE);
break;
default: 
 /* line 351: */
 /* line 352: */
SXIACTR_terminalerror(261);
break;
} 
} 
A_PROC_EXIT(unpackspec);
return;
} 
#undef NL

A_STATIC A68_VOID  DVOACTR_nullmodinfo(A68_109  Name, A68_138  *ReturnedValue)
{ 
A68_138  EVOACTR;  /* collateral clause result */
A68_127  FVOACTR;  /* OPERATORS - nil -> mode */
A68_138  GVOACTR;  /* clause result */
A_PROC_ENTRY(nullmodinfo);
 /* line 356: */
EVOACTR.Xmi.Name = Name;
EVOACTR.Xmi.L.N = VMOACTR_nullid;
EVOACTR.Xmi.L.F = VMOACTR_nullid;
EVOACTR.Xmi.L.Level = 0;
EVOACTR.Xmi.G.N = VMOACTR_nullid;
EVOACTR.Xmi.G.F = VMOACTR_nullid;
EVOACTR.Xmi.G.Level = 0;
 /* line 357: */
EVOACTR.Xmi.Type = (-2);
EVOACTR.Ym.Uname = DNOACTR_nulluname;
EVOACTR.Ym.Lname = DNOACTR_nulluname;
EVOACTR.Ym.Gname = DNOACTR_nulluname;
EVOACTR.Ym.Specs = A_VVAC(FVOACTR);
GVOACTR = EVOACTR;
A_PROC_EXIT(nullmodinfo);
*ReturnedValue = (GVOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  KVOACTR_unpackmodinfo(A68_109  Name, A68_59 * F, A68_BOOL  Lib_init, A68_138  *ReturnedValue)
{ 
A68_INT  LVOACTR_version;
A68_BOOL  MVOACTR;  /* optbool result */
A68_200  NVOACTR_magic;
A68_VC  OVOACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  PVOACTR;  /* clause result */
A68_VC  QVOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  RVOACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  SVOACTR;  /* clause result */
A68_VC  VVOACTR;  /* avoid structure result */
A68_VC  YVOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ZVOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  AWOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  BWOACTR;  /* avoid structure result */
A68_159  CWOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_138  DWOACTR;  /* clause result */
A68_138  EWOACTR;  /* avoid structure result */
A68_VC  LWOACTR;  /* avoid structure result */
A68_VC  OWOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  PWOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_138  QWOACTR_ymodinfo;
A68_135 * RWOACTR_xmi;
A68_126 * SWOACTR_ym;
A68_VC  TWOACTR;  /* OPERATORS - istruct -> vector */
A68_105 * UWOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  XWOACTR;  /* OPERATORS - istruct -> vector */
A68_105  YWOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ZWOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  AXOACTR;  /* OPERATORS - istruct -> vector */
A68_109 * BXOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  EXOACTR;  /* OPERATORS - istruct -> vector */
A68_109  FXOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  GXOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  HXOACTR;  /* OPERATORS - istruct -> vector */
A68_109 * IXOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  LXOACTR;  /* OPERATORS - istruct -> vector */
A68_109  MXOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  NXOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  OXOACTR;  /* OPERATORS - istruct -> vector */
A68_109 * PXOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  SXOACTR;  /* OPERATORS - istruct -> vector */
A68_109  TXOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  UXOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XXOACTR;  /* avoid structure result */
A68_VC  YXOACTR;  /* OPERATORS - istruct -> vector */
A68_109 * ZXOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  CYOACTR;  /* OPERATORS - istruct -> vector */
A68_109  DYOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  EYOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  FYOACTR;  /* OPERATORS - istruct -> vector */
A68_109 * GYOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  JYOACTR;  /* OPERATORS - istruct -> vector */
A68_109  KYOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  LYOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  OYOACTR;  /* avoid structure result */
A68_VC  RYOACTR;  /* avoid structure result */
A68_VC  SYOACTR;  /* OPERATORS - istruct -> vector */
A68_105 * TYOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  WYOACTR;  /* OPERATORS - istruct -> vector */
A68_105  XYOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  YYOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ZYOACTR;  /* OPERATORS - istruct -> vector */
A68_105 * AZOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  DZOACTR;  /* OPERATORS - istruct -> vector */
A68_105  EZOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  FZOACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_219  HZOACTR_generator;   /* proc value of non-global proc */
A68_127  NZOACTR;  /* avoid structure result */
A68_127 * OZOACTR;  /* YIELD */
A68_128 * PZOACTR_spec;
A68_127  QZOACTR;  /* forall yield */
A68_INT  RZOACTR;  /* forall loop counter */
A_PROC_ENTRY(unpackmodinfo);
 /* line 363: */
 /* line 364: */
{ 
{ 
DPOACTR_read_int(F, (&LVOACTR_version));
 /* line 365: */
 /* line 366: */
 /* line 367: */
MVOACTR = (LVOACTR_version!=QNOACTR_currentmodinfoversion);
if ( ! MVOACTR )
{{ 
LPOACTR_read_str(F, A_ISVEC(OVOACTR,(&NVOACTR_magic),8,A68_CHAR ));
 /* line 368: */
 /* line 369: */
PVOACTR = A_VC_NE(A_HISVEC(QVOACTR,NVOACTR_magic,8,A68_CHAR ),A_HISVEC(RVOACTR,SNOACTR_modinfomagic,8,A68_CHAR ));
} 
MVOACTR = PVOACTR;
}
 /* line 370: */
SVOACTR = MVOACTR;
if ( SVOACTR )
{ 
WRAAOSF_xc( LVOACTR_version, &VVOACTR );
INOACTR_debugmessage(1, A_VC_PLUS(UVOACTR,VVOACTR));
 /* line 371: */
INOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(XVOACTR,A_HISVEC(YVOACTR,SNOACTR_modinfomagic,8,A68_CHAR )),A_HVEC(ZVOACTR,'\"',A68_CHAR )));
 /* line 373: */
IWBAOSF_close_file(F, RIBAOSF_ignore_msg);
 /* line 374: */
 /* line 375: */
BNAAOSF_before( A_HISVEC(AWOACTR,Name,32,A68_CHAR ), ' ', &BWOACTR );
NWIACTR_pmessage(262, A_HARR(CWOACTR,BWOACTR,A68_VC ));
 /* line 376: */
 /* line 377: */
 /* line 378: */
DVOACTR_nullmodinfo( Name, &EWOACTR );
DWOACTR = EWOACTR;
} 
else
{ 
INOACTR_debugmessage(1, IWOACTR);
 /* line 379: */
WRAAOSF_xc( LVOACTR_version, &LWOACTR );
INOACTR_debugmessage(1, A_VC_PLUS(KWOACTR,LWOACTR));
 /* line 380: */
INOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(NWOACTR,A_HISVEC(OWOACTR,SNOACTR_modinfomagic,8,A68_CHAR )),A_HVEC(PWOACTR,'\"',A68_CHAR )));
 /* line 382: */
 /* line 383: */
RWOACTR_xmi = (&((&QWOACTR_ymodinfo)->Xmi));
 /* line 384: */
SWOACTR_ym = (&((&QWOACTR_ymodinfo)->Ym));
 /* line 386: */
UWOACTR = (&(SWOACTR_ym->Uname)) ;
LPOACTR_read_str(F, A_ISVEC(TWOACTR,UWOACTR,7,A68_CHAR ));
 /* line 387: */
YWOACTR = (*(&(SWOACTR_ym->Uname))) ;
INOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(WWOACTR,A_HISVEC(XWOACTR,YWOACTR,7,A68_CHAR )),A_HVEC(ZWOACTR,'\"',A68_CHAR )));
 /* line 388: */
BXOACTR = (&(RWOACTR_xmi->Name)) ;
LPOACTR_read_str(F, A_ISVEC(AXOACTR,BXOACTR,32,A68_CHAR ));
 /* line 389: */
FXOACTR = (*(&(RWOACTR_xmi->Name))) ;
INOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(DXOACTR,A_HISVEC(EXOACTR,FXOACTR,32,A68_CHAR )),A_HVEC(GXOACTR,'\"',A68_CHAR )));
 /* line 390: */
IXOACTR = (&((&(RWOACTR_xmi->L))->N)) ;
LPOACTR_read_str(F, A_ISVEC(HXOACTR,IXOACTR,32,A68_CHAR ));
 /* line 391: */
 /* line 392: */
MXOACTR = (*(&((&(RWOACTR_xmi->L))->N))) ;
INOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(KXOACTR,A_HISVEC(LXOACTR,MXOACTR,32,A68_CHAR )),A_HVEC(NXOACTR,'\"',A68_CHAR )));
 /* line 393: */
PXOACTR = (&((&(RWOACTR_xmi->L))->F)) ;
LPOACTR_read_str(F, A_ISVEC(OXOACTR,PXOACTR,32,A68_CHAR ));
 /* line 394: */
 /* line 395: */
TXOACTR = (*(&((&(RWOACTR_xmi->L))->F))) ;
INOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(RXOACTR,A_HISVEC(SXOACTR,TXOACTR,32,A68_CHAR )),A_HVEC(UXOACTR,'\"',A68_CHAR )));
 /* line 396: */
DPOACTR_read_int(F, (&((&(RWOACTR_xmi->L))->Level)));
 /* line 397: */
 /* line 398: */
WRAAOSF_xc( (*(&((&(RWOACTR_xmi->L))->Level))), &XXOACTR );
INOACTR_debugmessage(1, A_VC_PLUS(WXOACTR,XXOACTR));
 /* line 399: */
ZXOACTR = (&((&(RWOACTR_xmi->G))->N)) ;
LPOACTR_read_str(F, A_ISVEC(YXOACTR,ZXOACTR,32,A68_CHAR ));
 /* line 400: */
 /* line 401: */
DYOACTR = (*(&((&(RWOACTR_xmi->G))->N))) ;
INOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(BYOACTR,A_HISVEC(CYOACTR,DYOACTR,32,A68_CHAR )),A_HVEC(EYOACTR,'\"',A68_CHAR )));
 /* line 402: */
GYOACTR = (&((&(RWOACTR_xmi->G))->F)) ;
LPOACTR_read_str(F, A_ISVEC(FYOACTR,GYOACTR,32,A68_CHAR ));
 /* line 403: */
 /* line 404: */
KYOACTR = (*(&((&(RWOACTR_xmi->G))->F))) ;
INOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(IYOACTR,A_HISVEC(JYOACTR,KYOACTR,32,A68_CHAR )),A_HVEC(LYOACTR,'\"',A68_CHAR )));
 /* line 405: */
DPOACTR_read_int(F, (&((&(RWOACTR_xmi->G))->Level)));
 /* line 406: */
 /* line 407: */
WRAAOSF_xc( (*(&((&(RWOACTR_xmi->G))->Level))), &OYOACTR );
INOACTR_debugmessage(1, A_VC_PLUS(NYOACTR,OYOACTR));
 /* line 408: */
DPOACTR_read_int(F, (&(RWOACTR_xmi->Type)));
 /* line 409: */
 /* line 410: */
WRAAOSF_xc( (*(&(RWOACTR_xmi->Type))), &RYOACTR );
INOACTR_debugmessage(1, A_VC_PLUS(QYOACTR,RYOACTR));
 /* line 411: */
TYOACTR = (&(SWOACTR_ym->Lname)) ;
LPOACTR_read_str(F, A_ISVEC(SYOACTR,TYOACTR,7,A68_CHAR ));
 /* line 412: */
 /* line 413: */
XYOACTR = (*(&(SWOACTR_ym->Lname))) ;
INOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(VYOACTR,A_HISVEC(WYOACTR,XYOACTR,7,A68_CHAR )),A_HVEC(YYOACTR,'\"',A68_CHAR )));
 /* line 414: */
AZOACTR = (&(SWOACTR_ym->Gname)) ;
LPOACTR_read_str(F, A_ISVEC(ZYOACTR,AZOACTR,7,A68_CHAR ));
 /* line 415: */
 /* line 416: */
EZOACTR = (*(&(SWOACTR_ym->Gname))) ;
INOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(CZOACTR,A_HISVEC(DZOACTR,EZOACTR,7,A68_CHAR )),A_HVEC(FZOACTR,'\"',A68_CHAR )));
 /* line 418: */
A_CLOSURE( HZOACTR_generator, IZOACTR_generator, JZOACTR_generator );
(( JZOACTR_generator * ) ( HZOACTR_generator.nonlocals )) -> RWOACTR_xmi = RWOACTR_xmi;
A_CALLPROC(HZOACTR_generator,(A68_FALSE, &NZOACTR),(A68_FALSE, &NZOACTR,(HZOACTR_generator).nonlocals));
OZOACTR = (&(SWOACTR_ym->Specs)) ;
(*OZOACTR) = NZOACTR;
 /* line 420: */
 /* line 421: */
QZOACTR = (*(&(SWOACTR_ym->Specs))) ;
RZOACTR = QZOACTR.upb -1;
PZOACTR_spec = QZOACTR.data;
for (;RZOACTR-- >= 0;
(PZOACTR_spec++
) )
{
 /* line 422: */
INOACTR_debugmessage(1, TZOACTR);
 /* line 423: */
 /* line 424: */
VPOACTR_unpackspec(F, PZOACTR_spec, Lib_init);
}
 /* line 425: */
GWOACTR_return:
 /* line 426: */
IWBAOSF_close_file(F, RIBAOSF_ignore_msg);
 /* line 427: */
 /* line 428: */
DWOACTR = QWOACTR_ymodinfo;
} 
} 
} 
A_PROC_EXIT(unpackmodinfo);
*ReturnedValue = (DWOACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  WZOACTR_getmodinfo(A68_109  Name, A68_169 * Dirlist, A68_138  *ReturnedValue)
{ 
A68_VC  XZOACTR;  /* OPERATORS - istruct -> vector */
A68_VC  YZOACTR;  /* OPERATORS - istruct -> vector */
A68_138  ZZOACTR;  /* clause result */
A68_138  AAPACTR;  /* OPERATORS - skip to mode */
A68_VC  CAPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  DAPACTR;  /* avoid structure result */
A68_VC  FAPACTR_modinfobasename;
A68_VC  GAPACTR_full_filename;
A68_VC  JAPACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_59 * KAPACTR_modinfofile;
A68_BOOL  LAPACTR;  /* clause result */
A68_138  MAPACTR;  /* avoid structure result */
A68_166  NAPACTR;  /* collateral clause result */
A68_166 * OAPACTR;  /* YIELD */
A68_166 ** PAPACTR;  /* YIELD */
A68_138  QAPACTR;  /* avoid structure result */
A_PROC_ENTRY(getmodinfo);
 /* line 439: */
 /* line 440: */
 /* line 429: */
 /* line 441: */
if ( A_VC_EQ(A_HISVEC(XZOACTR,Name,32,A68_CHAR ),A_HISVEC(YZOACTR,BNOACTR_stdpreludeid,32,A68_CHAR )) )
{ 
SXIACTR_terminalerror(804);
 /* line 442: */
 /* line 443: */
 /* line 444: */
ZZOACTR = AAPACTR;
} 
else
{ 
{ 
ROOACTR_filter( A_HISVEC(CAPACTR,Name,32,A68_CHAR ), &DAPACTR );
FAPACTR_modinfobasename = A_VC_PLUS(DAPACTR,EAPACTR);
 /* line 445: */
 /* line 446: */
INOACTR_debugmessage(1, A_VC_PLUS(A_VC_PLUS(IAPACTR,FAPACTR_modinfobasename),A_HVEC(JAPACTR,')',A68_CHAR )));
 /* line 447: */
KAPACTR_modinfofile = BJJACTR_find_and_open_file(FAPACTR_modinfobasename, Dirlist, (&GAPACTR_full_filename));
 /* line 448: */
 /* line 449: */
 /* line 450: */
LAPACTR = (KAPACTR_modinfofile==SSBAOSF_nil_file);
if ( LAPACTR )
{ 
 /* line 451: */
 /* line 452: */
DVOACTR_nullmodinfo( Name, &MAPACTR );
ZZOACTR = MAPACTR;
} 
else
{ 
NAPACTR.Modinfo_file = GAPACTR_full_filename;
NAPACTR.Next = (*(&((&IYIACTR_config_info)->Used_modules)));
OAPACTR = A_HEAP(A68_166 ) ;
(*OAPACTR) = NAPACTR ;
PAPACTR = (&((&IYIACTR_config_info)->Used_modules)) ;
(*PAPACTR) = OAPACTR;
 /* line 453: */
 /* line 454: */
KVOACTR_unpackmodinfo( Name, KAPACTR_modinfofile, A68_FALSE, &QAPACTR );
ZZOACTR = QAPACTR;
} 
} 
} 
A_PROC_EXIT(getmodinfo);
*ReturnedValue = (ZZOACTR);
return;
} 
#undef NL

A68_VOID  ZAPACTR_givemoduledetails(A68_109  Name, A68_INT  Nametype, A68_BOOL  Closure, A68_138  *ReturnedValue)
{ 
A68_138  CBPACTR;  /* clause result */
A68_138  DBPACTR;  /* OPERATORS - skip to mode */
A68_138  EBPACTR;  /* avoid structure result */
A68_184  FBPACTR;  /* procedure value */
A68_109  GBPACTR_lib_module;
A68_BOOL  HBPACTR;  /* clause result */
A68_VC  IBPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  JBPACTR;  /* OPERATORS - simple index */
A68_INT  KBPACTR;  /* YIELD */
A68_138  LBPACTR;  /* avoid structure result */
A68_138  MBPACTR;  /* avoid structure result */
A_PROC_ENTRY(givemoduledetails);
 /* line 469: */
 /* line 471: */
 /* line 472: */
if ( Closure )
{ 
WXIACTR_assert(BBPACTR, A68_FALSE);
 /* line 473: */
 /* line 474: */
 /* line 475: */
CBPACTR = DBPACTR;
} 
else
{ 
 /* line 476: */
 /* line 477: */
if ( (Nametype==0) )
{ 
 /* line 478: */
 /* line 479: */
WZOACTR_getmodinfo( Name, DRIACTR_modinfo_dirlist, &EBPACTR );
CBPACTR = EBPACTR;
} 
else
{ 
{ 
FBPACTR.fn.fn_global = KVOACTR_unpackmodinfo;
FBPACTR.nonlocals = A68_NIL;
GBPACTR_lib_module = YOLACTR_lookup_library(Name, Nametype, FBPACTR);
 /* line 480: */
 /* line 481: */
 /* line 482: */
JBPACTR = A_HISVEC(IBPACTR,GBPACTR_lib_module,32,A68_CHAR ) ;
KBPACTR = 1 ;
HBPACTR = (A_VINDEX(JBPACTR,KBPACTR)==' ');
if ( HBPACTR )
{ 
 /* line 483: */
 /* line 484: */
DVOACTR_nullmodinfo( Name, &LBPACTR );
CBPACTR = LBPACTR;
} 
else
{ 
 /* line 485: */
WZOACTR_getmodinfo( GBPACTR_lib_module, FRIACTR_library_directory, &MBPACTR );
CBPACTR = MBPACTR;
} 
} 
} 
} 
A_PROC_EXIT(givemoduledetails);
*ReturnedValue = (CBPACTR);
return;
} 
#undef NL

A68_VOID  FCPACTR_initialisecurrentmodule(A68_135  Xmodinfo)
{ 
A68_VC  GCPACTR;  /* OPERATORS - istruct -> vector */
A68_109  HCPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  ICPACTR;  /* avoid structure result */
A68_INT  JCPACTR_maxlevel;
A68_INT  NCPACTR;  /* ADICOPS - ABS INT */
A68_231  QCPACTR_generator;   /* proc value of non-global proc */
A68_228  WCPACTR;  /* avoid structure result */
A68_232  YCPACTR_generator;   /* proc value of non-global proc */
A68_226  DDPACTR;  /* avoid structure result */
A68_INT  EDPACTR_level;
A68_199 ** HDPACTR;  /* YIELD */
A68_BOOL  IDPACTR;  /* clause result */
A68_195  JDPACTR;  /* collateral clause result */
A68_INT  KDPACTR;  /* YIELD */
A68_195 * LDPACTR;  /* YIELD */
A_PROC_ENTRY(initialisecurrentmodule);
 /* line 542: */
 /* line 543: */
{ 
 /* line 544: */
HCPACTR = Xmodinfo.Name ;
ROOACTR_filter( A_HISVEC(GCPACTR,HCPACTR,32,A68_CHAR ), &ICPACTR );
if ( A_VC_NE(ICPACTR,YQIACTR_basenamesourcefile) )
{ 
 /* line 545: */
JXIACTR_warning(337);
} 
 /* line 547: */
JCPACTR_maxlevel = (Xmodinfo.L.Level+Xmodinfo.G.Level);
 /* line 548: */
WXIACTR_assert(LCPACTR, (JCPACTR_maxlevel==0));
 /* line 549: */
(*BCPACTR_currentmodinfo) = Xmodinfo;
 /* line 550: */
NCPACTR = Xmodinfo.Type ;
WXIACTR_assert(OCPACTR, (A_ABS(NCPACTR)<=1));
 /* line 551: */
A_CLOSURE( QCPACTR_generator, RCPACTR_generator, SCPACTR_generator );
(( SCPACTR_generator * ) ( QCPACTR_generator.nonlocals )) -> Xmodinfo = Xmodinfo;
A_CALLPROC(QCPACTR_generator,(A68_FALSE, &WCPACTR),(A68_FALSE, &WCPACTR,(QCPACTR_generator).nonlocals));
DCPACTR_specs = WCPACTR;
 /* line 552: */
 /* line 553: */
 /* line 554: */
if ( !WNOACTR_composition )
{ 
A_CLOSURE( YCPACTR_generator, ZCPACTR_generator, ADPACTR_generator );
(( ADPACTR_generator * ) ( YCPACTR_generator.nonlocals )) -> JCPACTR_maxlevel = JCPACTR_maxlevel;
A_CALLPROC(YCPACTR_generator,(A68_FALSE, &DDPACTR),(A68_FALSE, &DDPACTR,(YCPACTR_generator).nonlocals));
RBPACTR_contexts = DDPACTR;
 /* line 555: */
for ( ;; )
{ 
EDPACTR_level = (*(&(PBPACTR_contextlist->Level)));
 /* line 556: */
WXIACTR_assert(GDPACTR, (EDPACTR_level<=JCPACTR_maxlevel));
 /* line 557: */
HDPACTR = (&A_R1INDEX(RBPACTR_contexts,EDPACTR_level)) ;
(*HDPACTR) = PBPACTR_contextlist;
 /* line 558: */
 /* line 559: */
 /* line 560: */
IDPACTR = (EDPACTR_level!=0);
if ( !IDPACTR ) break;
 /* line 561: */
PBPACTR_contextlist = (*(&(PBPACTR_contextlist->Rest)));
}
 /* line 562: */
 /* line 563: */
 /* line 564: */
JDPACTR.L = (*(&((*(&A_R1INDEX(RBPACTR_contexts,JCPACTR_maxlevel)))->Ys)));
 /* line 565: */
 /* line 566: */
KDPACTR = Xmodinfo.G.Level ;
JDPACTR.G = (*(&((*(&A_R1INDEX(RBPACTR_contexts,KDPACTR)))->Ys)));
LDPACTR = (&((&ACPACTR_currentmodule)->Checkinfo)) ;
(*LDPACTR) = JDPACTR;
} 
 /* line 567: */
 /* line 568: */
ZBPACTR_currentmoduleinitialised = A68_TRUE;
} 
A_PROC_EXIT(initialisecurrentmodule);
return;
} 
#undef NL

A68_VOID  NDPACTR_initialisespec(A68_129  Xspec)
{ 
A68_INT  ODPACTR;  /* clause result */
A68_INT  PDPACTR_no;
A68_129 * SDPACTR;  /* YIELD */
A_PROC_ENTRY(initialisespec);
 /* line 575: */
 /* line 576: */
{ 
if ( (Xspec.No==0) )
{ 
ODPACTR = 1;
} 
else
{ 
ODPACTR = Xspec.No;
} 
PDPACTR_no = ODPACTR;
 /* line 577: */
WXIACTR_assert(RDPACTR, (PDPACTR_no<=DCPACTR_specs.dim[0].upb));
 /* line 578: */
 /* line 579: */
SDPACTR = (&((&A_R1INDEX(DCPACTR_specs,PDPACTR_no))->Xs)) ;
(*SDPACTR) = Xspec;
} 
A_PROC_EXIT(initialisespec);
return;
} 
#undef NL

A68_VOID  VDPACTR_adddecsmodule(A68_137  Decsmodule, A68_INT  Level)
{ 
A68_BOOL  WDPACTR;  /* clause result */
A68_199 * XDPACTR_context;
A68_VC  YDPACTR;  /* OPERATORS - istruct -> vector */
A68_105  ZDPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  AEPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  BEPACTR;  /* clause result */
A68_VC  CEPACTR;  /* OPERATORS - istruct -> vector */
A68_105  DEPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  EEPACTR;  /* OPERATORS - istruct -> vector */
A68_105  FEPACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  GEPACTR;  /* clause result */
A68_VC  HEPACTR;  /* OPERATORS - istruct -> vector */
A68_105  IEPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  JEPACTR;  /* OPERATORS - istruct -> vector */
A68_105  KEPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  LEPACTR;  /* OPERATORS - istruct -> vector */
A68_105  MEPACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  NEPACTR_contextaccessible;
A68_198 ** OEPACTR_uselist;
A68_198  PEPACTR;  /* collateral clause result */
A68_198 * QEPACTR;  /* YIELD */
A68_127  REPACTR;  /* OPERATORS - simple index */
A68_INT  SEPACTR;  /* YIELD */
A68_130  TEPACTR;  /* YIELD */
A68_227  UEPACTR;  /* OPERATORS - vector -> row */
A_PROC_ENTRY(adddecsmodule);
 /* line 590: */
 /* line 592: */
{ 
 /* line 593: */
 /* line 597: */
if ( (Level==0) )
{ 
 /* line 598: */
WDPACTR = ZBPACTR_currentmoduleinitialised;
} 
else
{ 
if ( !ZBPACTR_currentmoduleinitialised )
{ 
 /* line 600: */
WDPACTR = A68_FALSE;
} 
else
{ 
 /* line 601: */
if ( (Level>RBPACTR_contexts.dim[0].upb) )
{ 
PXIACTR_error(341);
 /* line 603: */
WDPACTR = A68_FALSE;
} 
else
{ 
{ 
XDPACTR_context = (*(&A_R1INDEX(RBPACTR_contexts,Level)));
 /* line 604: */
 /* line 605: */
 /* line 606: */
 /* line 607: */
 /* line 608: */
ZDPACTR = (*(&((&(XDPACTR_context->Ym))->Gname))) ;
if ( A_VC_EQ(A_HISVEC(YDPACTR,ZDPACTR,7,A68_CHAR ),A_HISVEC(AEPACTR,DNOACTR_nulluname,7,A68_CHAR )) )
{ 
 /* line 609: */
DEPACTR = (*(&((&(XDPACTR_context->Ym))->Lname))) ;
BEPACTR = A_HISVEC(CEPACTR,DEPACTR,7,A68_CHAR );
} 
else
{ 
 /* line 610: */
FEPACTR = (*(&((&(XDPACTR_context->Ym))->Gname))) ;
BEPACTR = A_HISVEC(EEPACTR,FEPACTR,7,A68_CHAR );
} 
IEPACTR = Decsmodule.Ym.Lname ;
KEPACTR = (*(&((*(&A_R1INDEX(RBPACTR_contexts,Level)))->Ys))) ;
MEPACTR = Decsmodule.Ym.Gname ;
GEPACTR = (A_VC_NE(A_HISVEC(HEPACTR,IEPACTR,7,A68_CHAR ),A_HISVEC(JEPACTR,KEPACTR,7,A68_CHAR ))|A_VC_NE(A_HISVEC(LEPACTR,MEPACTR,7,A68_CHAR ),BEPACTR));
if ( GEPACTR )
{ 
PXIACTR_error(342);
 /* line 611: */
WDPACTR = A68_FALSE;
} 
else
{ 
 /* line 612: */
WDPACTR = A68_TRUE;
} 
} 
} 
} 
} 
NEPACTR_contextaccessible = WDPACTR;
 /* line 614: */
 /* line 615: */
if ( NEPACTR_contextaccessible )
{ 
OEPACTR_uselist = (&((*(&A_R1INDEX(RBPACTR_contexts,Level)))->Uses));
 /* line 616: */
 /* line 617: */
PEPACTR.Name = Decsmodule.Name;
PEPACTR.Uname = Decsmodule.Ym.Uname;
PEPACTR.Ids = (A68_197 *)A68_NIL;
PEPACTR.Rest = (*OEPACTR_uselist);
QEPACTR = A_HEAP(A68_198 ) ;
(*QEPACTR) = PEPACTR ;
(*OEPACTR_uselist) = QEPACTR;
 /* line 618: */
SBPACTR_idlist = (&((*OEPACTR_uselist)->Ids));
 /* line 619: */
 /* line 620: */
 /* line 621: */
REPACTR = Decsmodule.Ym.Specs ;
SEPACTR = 1 ;
TEPACTR = (*(&((&A_VINDEX(REPACTR,SEPACTR))->Keptinfo))) ;
TBPACTR_currentkeptinfo = A_VECARR(TEPACTR,UEPACTR);
} 
else
{ 
 /* line 622: */
 /* line 623: */
SBPACTR_idlist = A_HEAP(A68_197 *);
} 
} 
A_PROC_EXIT(adddecsmodule);
return;
} 
#undef NL

A68_VOID  WEPACTR_addcontextmodule(A68_125  Context)
{ 
A_PROC_ENTRY(addcontextmodule);
 /* line 631: */
 /* line 632: */
{ 
WXIACTR_assert(YEPACTR, A68_FALSE);
 /* line 633: */
/*SKIP*/;
} 
A_PROC_EXIT(addcontextmodule);
return;
} 
#undef NL

A68_VOID  AFPACTR_addexternalid(A68_110  Id)
{ 
A68_INT  BFPACTR;  /* YIELD */
A68_132 * CFPACTR_currentidinfo;
A68_197  DFPACTR;  /* collateral clause result */
A68_197 * EFPACTR;  /* YIELD */
A68_227  FFPACTR;  /* clause result */
A68_227  GFPACTR;  /* OPERATORS - trim index */
A68_227  HFPACTR;  /* OPERATORS - nil -> mode */
A_PROC_ENTRY(addexternalid);
 /* line 640: */
 /* line 641: */
{ 
BFPACTR = 1 ;
CFPACTR_currentidinfo = (&A_R1INDEX(TBPACTR_currentkeptinfo,BFPACTR));
 /* line 643: */
 /* line 644: */
if ( (*(&(CFPACTR_currentidinfo->Keptgenproc))) )
{ 
DFPACTR.Name = XMOACTR_anonymousid;
} 
else
{ 
 /* line 645: */
DFPACTR.Name = Id.Name;
} 
 /* line 646: */
DFPACTR.Uname = (*(&(CFPACTR_currentidinfo->Prefix)));
 /* line 647: */
DFPACTR.Optimised = (*(&(CFPACTR_currentidinfo->Optimised)));
 /* line 648: */
DFPACTR.Iddec = (*(&(CFPACTR_currentidinfo->Iddec)));
 /* line 649: */
DFPACTR.Globalproc = (*(&(CFPACTR_currentidinfo->Globalproc)));
 /* line 650: */
DFPACTR.Genproc = (*(&(CFPACTR_currentidinfo->Keptgenproc)));
 /* line 651: */
DFPACTR.Forceuse = (*(&(CFPACTR_currentidinfo->Forceuse)));
 /* line 652: */
DFPACTR.Mode = Id.Mode;
 /* line 653: */
DFPACTR.Decno = Id.Decno;
 /* line 654: */
DFPACTR.Definition = (*(&(CFPACTR_currentidinfo->Definition)));
 /* line 656: */
DFPACTR.Rhs = (*(&(CFPACTR_currentidinfo->Rhs)));
DFPACTR.Rest = (A68_197 *)A68_NIL;
EFPACTR = A_HEAP(A68_197 ) ;
(*EFPACTR) = DFPACTR ;
(*SBPACTR_idlist) = EFPACTR;
 /* line 657: */
SBPACTR_idlist = (&((*SBPACTR_idlist)->Rest));
 /* line 658: */
 /* line 659: */
if ( (TBPACTR_currentkeptinfo.dim[0].upb>1) )
{ 
FFPACTR = A_R1TRIM(GFPACTR,(TBPACTR_currentkeptinfo),A_RTSCRIPT(&(GFPACTR.dim[0]),&((TBPACTR_currentkeptinfo).dim[0]),2,(TBPACTR_currentkeptinfo).dim[0].upb,1));
} 
else
{ 
 /* line 660: */
FFPACTR = A_R1VAC(HFPACTR);
} 
TBPACTR_currentkeptinfo = FFPACTR;
} 
A_PROC_EXIT(addexternalid);
return;
} 
#undef NL

A68_VOID  IFPACTR_initialiseunames(void)
{ 
A68_138  BIPACTR;  /* avoid structure result */
A68_138  CIPACTR_previousversion;
A68_105 * FIPACTR;  /* YIELD */
A68_128 * GIPACTR_spec;
A68_INT  HIPACTR;  /* forall loop counter */
A68_LINT * IIPACTR;  /* YIELD */
A68_105 * JIPACTR;  /* YIELD */
A68_BOOL  KIPACTR_specsmatch;
A68_BOOL  LIPACTR_modulesmatch;
A68_BOOL  MIPACTR;  /* clause result */
A68_105 * NIPACTR;  /* YIELD */
A68_105 * OIPACTR;  /* YIELD */
A_PROC_ENTRY(initialiseunames);
{ 
 /* line 767: */
 /* line 801: */
INOACTR_debugmessage(1, AIPACTR);
 /* line 803: */
WZOACTR_getmodinfo( (*(&(BCPACTR_currentmodinfo->Name))), DRIACTR_modinfo_dirlist, &BIPACTR );
CIPACTR_previousversion = BIPACTR;
 /* line 805: */
 /* line 806: */
 /* line 808: */
if ( (CIPACTR_previousversion.Xmi.Type==(-2)) )
{ 
INOACTR_debugmessage(1, EIPACTR);
 /* line 810: */
WBPACTR_previousversionfound = A68_FALSE;
 /* line 811: */
FIPACTR = (&((&ACPACTR_currentmodule)->Uname)) ;
(*FIPACTR) = QIMACTR_newuniquename();
 /* line 812: */
 /* line 813: */
HIPACTR = DCPACTR_specs.dim[0].upb - DCPACTR_specs.dim[0].lwb;
GIPACTR_spec = DCPACTR_specs.data;
for (;HIPACTR-- >= 0;
(GIPACTR_spec += DCPACTR_specs.dim[0].stride
) )
{
 /* line 814: */
IIPACTR = (&(GIPACTR_spec->Timeoflastchange)) ;
(*IIPACTR) = (*(&((&IYIACTR_config_info)->Translationtime)));
 /* line 815: */
 /* line 816: */
JIPACTR = (&(GIPACTR_spec->Ys)) ;
(*JIPACTR) = QIMACTR_newuniquename();
}
 /* line 818: */
} 
else
{ 
{ 
KIPACTR_specsmatch = LFPACTR_setspecs(CIPACTR_previousversion.Ym);
 /* line 819: */
WBPACTR_previousversionfound = A68_TRUE;
 /* line 820: */
LIPACTR_modulesmatch = NHPACTR_matchmodules(CIPACTR_previousversion);
 /* line 821: */
 /* line 822: */
 /* line 823: */
MIPACTR = (KIPACTR_specsmatch&LIPACTR_modulesmatch);
if ( MIPACTR )
{ 
XBPACTR_rscompatiblewithpreviousversion = A68_TRUE;
 /* line 824: */
 /* line 825: */
 /* line 826: */
NIPACTR = (&((&ACPACTR_currentmodule)->Uname)) ;
(*NIPACTR) = CIPACTR_previousversion.Ym.Uname;
} 
else
{ 
XBPACTR_rscompatiblewithpreviousversion = A68_FALSE;
 /* line 827: */
 /* line 828: */
OIPACTR = (&((&ACPACTR_currentmodule)->Uname)) ;
(*OIPACTR) = QIMACTR_newuniquename();
} 
} 
} 
} 
A_PROC_EXIT(initialiseunames);
return;
} 
#undef NL

A68_VOID  PIPACTR_outputmoduleinformation(void)
{ 
A68_247  AMPACTR;  /* collateral clause result */
A68_VC  BMPACTR;  /* avoid structure result */
A68_142  CMPACTR;  /* OPERATORS - mode -> union mode */
A68_142  DMPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  EMPACTR;  /* OPERATORS - istruct -> vector */
A68_142  FMPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  GMPACTR;  /* YIELD */
A68_142  HMPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  IMPACTR;  /* OPERATORS - istruct -> vector */
A68_105  JMPACTR;  /* OPERATORS - istruct -> vector */
A68_142  KMPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  LMPACTR;  /* YIELD */
A68_142  MMPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  NMPACTR;  /* OPERATORS - istruct -> vector */
A68_109  OMPACTR;  /* OPERATORS - istruct -> vector */
A68_142  PMPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  QMPACTR;  /* YIELD */
A68_142  RMPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  SMPACTR;  /* OPERATORS - istruct -> vector */
A68_109  TMPACTR;  /* OPERATORS - istruct -> vector */
A68_142  UMPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  VMPACTR;  /* YIELD */
A68_142  WMPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  XMPACTR;  /* OPERATORS - istruct -> vector */
A68_109  YMPACTR;  /* OPERATORS - istruct -> vector */
A68_142  ZMPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ANPACTR;  /* YIELD */
A68_142  BNPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  CNPACTR;  /* avoid structure result */
A68_142  DNPACTR;  /* OPERATORS - mode -> union mode */
A68_142  ENPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  FNPACTR;  /* OPERATORS - istruct -> vector */
A68_109  GNPACTR;  /* OPERATORS - istruct -> vector */
A68_142  HNPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  INPACTR;  /* YIELD */
A68_142  JNPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  KNPACTR;  /* OPERATORS - istruct -> vector */
A68_109  LNPACTR;  /* OPERATORS - istruct -> vector */
A68_142  MNPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  NNPACTR;  /* YIELD */
A68_142  ONPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  PNPACTR;  /* avoid structure result */
A68_142  QNPACTR;  /* OPERATORS - mode -> union mode */
A68_142  RNPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  SNPACTR;  /* avoid structure result */
A68_142  TNPACTR;  /* OPERATORS - mode -> union mode */
A68_142  UNPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  VNPACTR;  /* OPERATORS - istruct -> vector */
A68_105  WNPACTR;  /* OPERATORS - istruct -> vector */
A68_142  XNPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  YNPACTR;  /* YIELD */
A68_142  ZNPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  AOPACTR;  /* OPERATORS - istruct -> vector */
A68_105  BOPACTR;  /* OPERATORS - istruct -> vector */
A68_142  COPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  DOPACTR;  /* YIELD */
A68_142  EOPACTR;  /* OPERATORS - mode -> union mode */
A68_141  FOPACTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  IOPACTR;  /* optbool result */
A68_INT  JOPACTR;  /* YIELD */
A68_130 * KOPACTR_keptinfo;
A68_212  MOPACTR_generator;   /* proc value of non-global proc */
A68_130  ROPACTR;  /* avoid structure result */
A68_INT * SOPACTR_decno;
A68_132 * TOPACTR_item;
A68_INT  UOPACTR;  /* forall loop counter */
A68_170 * VOPACTR_id;
A68_132  WOPACTR;  /* collateral clause result */
A68_BITS  XOPACTR;  /* ADICOPS - >= */
A68_BITS  YOPACTR;  /* ADICOPS - >= */
A68_BITS  ZOPACTR;  /* ADICOPS - >= */
A68_BITS  APPACTR;  /* ADICOPS - >= */
A68_BITS  BPPACTR;  /* ADICOPS - >= */
A68_171 * CPPACTR_rd;
A68_BITS  DPPACTR;  /* ADICOPS - >= */
A68_VC  EPPACTR;  /* OPERATORS - nil -> mode */
A68_VC  FPPACTR;  /* OPERATORS - nil -> mode */
A68_132  IPPACTR;  /* OPERATORS - skip to mode */
A68_132  LPPACTR;  /* OPERATORS - skip to mode */
A68_INT  MPPACTR;  /* YIELD */
A_PROC_ENTRY(outputmoduleinformation);
{ 
 /* line 829: */
 /* line 889: */
 /* line 890: */
ROAAOSF_whole( QNOACTR_currentmodinfoversion, 0, &BMPACTR );
AMPACTR.data[0] = A_UNITE(CMPACTR,mode2,2,BMPACTR);
 /* line 891: */
AMPACTR.data[1] = A_UNITE(DMPACTR,mode3,3,EIAACTR_cnewline);
GMPACTR = A_HISVEC(EMPACTR,SNOACTR_modinfomagic,8,A68_CHAR ) ;
AMPACTR.data[2] = A_UNITE(FMPACTR,mode2,2,GMPACTR);
 /* line 892: */
AMPACTR.data[3] = A_UNITE(HMPACTR,mode3,3,EIAACTR_cnewline);
JMPACTR = (*(&((&ACPACTR_currentmodule)->Uname))) ;
LMPACTR = A_HISVEC(IMPACTR,JMPACTR,7,A68_CHAR ) ;
AMPACTR.data[4] = A_UNITE(KMPACTR,mode2,2,LMPACTR);
 /* line 893: */
AMPACTR.data[5] = A_UNITE(MMPACTR,mode3,3,EIAACTR_cnewline);
OMPACTR = (*(&(BCPACTR_currentmodinfo->Name))) ;
QMPACTR = A_HISVEC(NMPACTR,OMPACTR,32,A68_CHAR ) ;
AMPACTR.data[6] = A_UNITE(PMPACTR,mode2,2,QMPACTR);
 /* line 894: */
AMPACTR.data[7] = A_UNITE(RMPACTR,mode3,3,EIAACTR_cnewline);
TMPACTR = (*(&((&(BCPACTR_currentmodinfo->L))->N))) ;
VMPACTR = A_HISVEC(SMPACTR,TMPACTR,32,A68_CHAR ) ;
AMPACTR.data[8] = A_UNITE(UMPACTR,mode2,2,VMPACTR);
 /* line 895: */
AMPACTR.data[9] = A_UNITE(WMPACTR,mode3,3,EIAACTR_cnewline);
YMPACTR = (*(&((&(BCPACTR_currentmodinfo->L))->F))) ;
ANPACTR = A_HISVEC(XMPACTR,YMPACTR,32,A68_CHAR ) ;
AMPACTR.data[10] = A_UNITE(ZMPACTR,mode2,2,ANPACTR);
 /* line 896: */
AMPACTR.data[11] = A_UNITE(BNPACTR,mode3,3,EIAACTR_cnewline);
ROAAOSF_whole( (*(&((&(BCPACTR_currentmodinfo->L))->Level))), 0, &CNPACTR );
AMPACTR.data[12] = A_UNITE(DNPACTR,mode2,2,CNPACTR);
 /* line 897: */
AMPACTR.data[13] = A_UNITE(ENPACTR,mode3,3,EIAACTR_cnewline);
GNPACTR = (*(&((&(BCPACTR_currentmodinfo->G))->N))) ;
INPACTR = A_HISVEC(FNPACTR,GNPACTR,32,A68_CHAR ) ;
AMPACTR.data[14] = A_UNITE(HNPACTR,mode2,2,INPACTR);
 /* line 898: */
AMPACTR.data[15] = A_UNITE(JNPACTR,mode3,3,EIAACTR_cnewline);
LNPACTR = (*(&((&(BCPACTR_currentmodinfo->G))->F))) ;
NNPACTR = A_HISVEC(KNPACTR,LNPACTR,32,A68_CHAR ) ;
AMPACTR.data[16] = A_UNITE(MNPACTR,mode2,2,NNPACTR);
 /* line 899: */
AMPACTR.data[17] = A_UNITE(ONPACTR,mode3,3,EIAACTR_cnewline);
ROAAOSF_whole( (*(&((&(BCPACTR_currentmodinfo->G))->Level))), 0, &PNPACTR );
AMPACTR.data[18] = A_UNITE(QNPACTR,mode2,2,PNPACTR);
 /* line 900: */
AMPACTR.data[19] = A_UNITE(RNPACTR,mode3,3,EIAACTR_cnewline);
ROAAOSF_whole( (*(&(BCPACTR_currentmodinfo->Type))), 0, &SNPACTR );
AMPACTR.data[20] = A_UNITE(TNPACTR,mode2,2,SNPACTR);
 /* line 901: */
AMPACTR.data[21] = A_UNITE(UNPACTR,mode3,3,EIAACTR_cnewline);
WNPACTR = (*(&(CCPACTR_checkinfo->L))) ;
YNPACTR = A_HISVEC(VNPACTR,WNPACTR,7,A68_CHAR ) ;
AMPACTR.data[22] = A_UNITE(XNPACTR,mode2,2,YNPACTR);
 /* line 902: */
AMPACTR.data[23] = A_UNITE(ZNPACTR,mode3,3,EIAACTR_cnewline);
 /* line 903: */
BOPACTR = (*(&(CCPACTR_checkinfo->G))) ;
DOPACTR = A_HISVEC(AOPACTR,BOPACTR,7,A68_CHAR ) ;
AMPACTR.data[24] = A_UNITE(COPACTR,mode2,2,DOPACTR);
AMPACTR.data[25] = A_UNITE(EOPACTR,mode3,3,EIAACTR_cnewline);
AVLACTR_writemodinfo(A_HISVEC(FOPACTR,AMPACTR,26,A68_142 ));
 /* line 905: */
WXIACTR_assert(HOPACTR, (DCPACTR_specs.dim[0].upb==1));
 /* line 907: */
 /* line 908: */
 /* line 909: */
IOPACTR = !XBPACTR_rscompatiblewithpreviousversion;
if ( ! IOPACTR )
{IOPACTR = !YBPACTR_transcompatiblewithpreviousversi;
}
 /* line 912: */
if ( IOPACTR )
{ 
JOPACTR = 1 ;
KOPACTR_keptinfo = (&((&A_R1INDEX(DCPACTR_specs,JOPACTR))->Keptinfo));
 /* line 913: */
A_CLOSURE( MOPACTR_generator, NOPACTR_generator, OOPACTR_generator );
A_CALLPROC(MOPACTR_generator,(A68_FALSE, &ROPACTR),(A68_FALSE, &ROPACTR,(MOPACTR_generator).nonlocals));
(*KOPACTR_keptinfo) = ROPACTR;
 /* line 914: */
 /* line 915: */
UOPACTR = UBPACTR_keptdecnos.dim[0].upb - UBPACTR_keptdecnos.dim[0].lwb;
if ( UOPACTR != (*KOPACTR_keptinfo).upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
SOPACTR_decno = UBPACTR_keptdecnos.data;
TOPACTR_item = (*KOPACTR_keptinfo).data;
for (;UOPACTR-- >= 0;
(SOPACTR_decno += UBPACTR_keptdecnos.dim[0].stride
,TOPACTR_item++
) )
{
 /* line 916: */
 /* line 917: */
 /* line 918: */
 /* line 919: */
if ( ((*SOPACTR_decno)<=IAAACTR_maxidno) )
{ 
VOPACTR_id = (&A_R1INDEX(WPKACTR_ids,(*SOPACTR_decno)));
 /* line 920: */
 /* line 921: */
WOPACTR.Prefix = (*(&(VOPACTR_id->Prefix)));
 /* line 922: */
XOPACTR = (*(&(VOPACTR_id->Flags))) ;
WOPACTR.Optimised = A_LB_GE(XOPACTR,HQKACTR_idoptimisedflag);
 /* line 923: */
YOPACTR = (*(&(VOPACTR_id->Flags))) ;
WOPACTR.Iddec = A_LB_GE(YOPACTR,BQKACTR_ididentityflag);
 /* line 924: */
ZOPACTR = (*(&(VOPACTR_id->Flags))) ;
WOPACTR.Globalproc = A_LB_GE(ZOPACTR,JQKACTR_idgprocflag);
 /* line 925: */
APPACTR = (*(&(VOPACTR_id->Flags))) ;
WOPACTR.Keptgenproc = A_LB_GE(APPACTR,KQKACTR_idkeptgenprocflag);
 /* line 926: */
BPPACTR = (*(&(VOPACTR_id->Flags))) ;
WOPACTR.Forceuse = A_LB_GE(BPPACTR,MQKACTR_idforceuseflag);
 /* line 928: */
WOPACTR.Definition = (*(&(VOPACTR_id->Definition)));
 /* line 929: */
WOPACTR.Rhs = (*(&(VOPACTR_id->Rhs)));
} 
else
{ 
 /* line 930: */
 /* line 931: */
if ( ((*SOPACTR_decno)<=KAAACTR_maxrdno) )
{ 
CPPACTR_rd = (&A_R1INDEX(XPKACTR_rds,(*SOPACTR_decno)));
 /* line 932: */
 /* line 933: */
WOPACTR.Prefix = (*(&(CPPACTR_rd->Prefix)));
 /* line 934: */
WOPACTR.Optimised = A68_FALSE;
 /* line 935: */
WOPACTR.Iddec = A68_FALSE;
 /* line 936: */
DPPACTR = (*(&(CPPACTR_rd->Flags))) ;
WOPACTR.Globalproc = A_LB_GE(DPPACTR,RQKACTR_rdglobalflag);
 /* line 937: */
WOPACTR.Keptgenproc = A68_FALSE;
 /* line 938: */
WOPACTR.Forceuse = A68_FALSE;
 /* line 940: */
WOPACTR.Definition = A_VVAC(EPPACTR);
 /* line 941: */
WOPACTR.Rhs = A_VVAC(FPPACTR);
} 
else
{ 
 /* line 942: */
if ( ((*SOPACTR_decno)<=MAAACTR_maxlibid) )
{ 
WXIACTR_assert(HPPACTR, A68_FALSE);
 /* line 943: */
WOPACTR = IPPACTR;
} 
else
{ 
WXIACTR_assert(KPPACTR, A68_FALSE);
 /* line 944: */
 /* line 945: */
WOPACTR = LPPACTR;
} 
} 
} 
(*TOPACTR_item) = WOPACTR;
}
 /* line 946: */
} 
 /* line 949: */
 /* line 950: */
MPPACTR = 1 ;
SIPACTR_outputspec((*(&A_R1INDEX(DCPACTR_specs,MPPACTR))));
} 
A_PROC_EXIT(outputmoduleinformation);
return;
} 
#undef NL

A_STATIC A68_VOID  OPPACTR_declareidlist(A68_197 * Idlist)
{ 
A68_197 * PPPACTR_id;
A68_VC  QPPACTR;  /* OPERATORS - istruct -> vector */
A68_109 * RPPACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(declareidlist);
 /* line 961: */
 /* line 962: */
{ 
PPPACTR_id = Idlist;
 /* line 964: */
for ( ;; )
{ 
 /* line 965: */
 /* line 966: */
if ( !((PPPACTR_id!=(A68_197 *)A68_NIL)) ) break;
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
RPPACTR = (&(PPPACTR_id->Name)) ;
A_CALLPROC(LXKACTR_externaldec,(A_ISVEC(QPPACTR,RPPACTR,32,A68_CHAR ), (*(&(PPPACTR_id->Uname))), (*(&(PPPACTR_id->Mode))), (*(&(PPPACTR_id->Decno))), (*(&(PPPACTR_id->Optimised))), (*(&(PPPACTR_id->Iddec))), (*(&(PPPACTR_id->Globalproc))), (*(&(PPPACTR_id->Genproc))), (*(&(PPPACTR_id->Forceuse))), (*(&(PPPACTR_id->Definition))), (*(&(PPPACTR_id->Rhs)))),(A_ISVEC(QPPACTR,RPPACTR,32,A68_CHAR ), (*(&(PPPACTR_id->Uname))), (*(&(PPPACTR_id->Mode))), (*(&(PPPACTR_id->Decno))), (*(&(PPPACTR_id->Optimised))), (*(&(PPPACTR_id->Iddec))), (*(&(PPPACTR_id->Globalproc))), (*(&(PPPACTR_id->Genproc))), (*(&(PPPACTR_id->Forceuse))), (*(&(PPPACTR_id->Definition))), (*(&(PPPACTR_id->Rhs))),(LXKACTR_externaldec).nonlocals));
 /* line 980: */
 /* line 981: */
PPPACTR_id = (*(&(PPPACTR_id->Rest)));
}
 /* line 982: */
} 
A_PROC_EXIT(declareidlist);
return;
} 
#undef NL

A_STATIC A68_VOID  TPPACTR_processuselist(A68_198 * Uselist)
{ 
A68_INT  UPPACTR_codestream;
A68_INT  VPPACTR_nonlocdecstream;
A68_198 * WPPACTR_use;
A68_253  XPPACTR;  /* collateral clause result */
A68_145  YPPACTR;  /* OPERATORS - mode -> union mode */
A68_145  BQPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  CQPACTR;  /* YIELD */
A68_145  DQPACTR;  /* OPERATORS - mode -> union mode */
A68_144  EQPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  FQPACTR;  /* OPERATORS - istruct -> vector */
A68_105  GQPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  HQPACTR_decsinit;
A68_VC  IQPACTR;  /* OPERATORS - istruct -> vector */
A68_109  JQPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  KQPACTR;  /* avoid structure result */
A68_VC  LQPACTR_decsname;
A68_256  MQPACTR;  /* collateral clause result */
A68_145  PQPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  QQPACTR;  /* YIELD */
A68_145  RQPACTR;  /* OPERATORS - mode -> union mode */
A68_145  UQPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  VQPACTR;  /* YIELD */
A68_145  ARPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  BRPACTR;  /* YIELD */
A68_145  ERPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  FRPACTR;  /* YIELD */
A68_145  GRPACTR;  /* OPERATORS - mode -> union mode */
A68_144  HRPACTR;  /* OPERATORS - istruct -> vector */
A68_258  IRPACTR;  /* collateral clause result */
A68_145  JRPACTR;  /* OPERATORS - mode -> union mode */
A68_145  MRPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  NRPACTR;  /* YIELD */
A68_145  SRPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  TRPACTR;  /* YIELD */
A68_145  WRPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  XRPACTR;  /* YIELD */
A68_145  YRPACTR;  /* OPERATORS - mode -> union mode */
A68_144  ZRPACTR;  /* OPERATORS - istruct -> vector */
A68_260  ASPACTR;  /* collateral clause result */
A68_145  DSPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  ESPACTR;  /* YIELD */
A68_145  FSPACTR;  /* OPERATORS - mode -> union mode */
A68_144  GSPACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(processuselist);
 /* line 990: */
 /* line 991: */
{ 
UPPACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 992: */
VPPACTR_nonlocdecstream = KSLACTR_nonlocdecstream(VRLACTR_currentlevel());
 /* line 994: */
WPPACTR_use = Uselist;
 /* line 996: */
 /* line 997: */
 /* line 998: */
if ( AQIACTR_verboseoption )
{ 
 /* line 999: */
XPPACTR.data[0] = A_UNITE(YPPACTR,mode4,4,EIAACTR_cnewline);
CQPACTR = AQPACTR ;
XPPACTR.data[1] = A_UNITE(BQPACTR,mode2,2,CQPACTR);
XPPACTR.data[2] = A_UNITE(DQPACTR,mode4,4,EIAACTR_cnewline);
 /* line 1000: */
 /* line 1001: */
MDMACTR_writecstream(A_HISVEC(EQPACTR,XPPACTR,3,A68_145 ), VPPACTR_nonlocdecstream);
} 
 /* line 1003: */
for ( ;; )
{ 
 /* line 1004: */
 /* line 1005: */
if ( !((WPPACTR_use!=(A68_198 *)A68_NIL)) ) break;
GQPACTR = (*(&(WPPACTR_use->Uname))) ;
HQPACTR_decsinit = A_HISVEC(FQPACTR,GQPACTR,7,A68_CHAR );
 /* line 1006: */
JQPACTR = (*(&(WPPACTR_use->Name))) ;
BNAAOSF_before( A_HISVEC(IQPACTR,JQPACTR,32,A68_CHAR ), ' ', &KQPACTR );
LQPACTR_decsname = KQPACTR;
 /* line 1008: */
 /* line 1009: */
QQPACTR = OQPACTR ;
MQPACTR.data[0] = A_UNITE(PQPACTR,mode2,2,QQPACTR);
MQPACTR.data[1] = A_UNITE(RQPACTR,mode2,2,HQPACTR_decsinit);
 /* line 1010: */
VQPACTR = TQPACTR ;
MQPACTR.data[2] = A_UNITE(UQPACTR,mode2,2,VQPACTR);
if ( AQIACTR_verboseoption )
{ 
BRPACTR = A_VC_PLUS(A_VC_PLUS(YQPACTR,LQPACTR_decsname),ZQPACTR) ;
MQPACTR.data[3] = A_UNITE(ARPACTR,mode2,2,BRPACTR);
} 
else
{ 
 /* line 1012: */
FRPACTR = DRPACTR ;
MQPACTR.data[3] = A_UNITE(ERPACTR,mode2,2,FRPACTR);
} 
MQPACTR.data[4] = A_UNITE(GRPACTR,mode4,4,EIAACTR_cnewline);
 /* line 1013: */
MDMACTR_writecstream(A_HISVEC(HRPACTR,MQPACTR,5,A68_145 ), VPPACTR_nonlocdecstream);
 /* line 1015: */
OPPACTR_declareidlist((*(&(WPPACTR_use->Ids))));
 /* line 1017: */
 /* line 1018: */
IRPACTR.data[0] = A_UNITE(JRPACTR,mode2,2,HQPACTR_decsinit);
 /* line 1019: */
NRPACTR = LRPACTR ;
IRPACTR.data[1] = A_UNITE(MRPACTR,mode2,2,NRPACTR);
if ( AQIACTR_verboseoption )
{ 
TRPACTR = A_VC_PLUS(A_VC_PLUS(QRPACTR,LQPACTR_decsname),RRPACTR) ;
IRPACTR.data[2] = A_UNITE(SRPACTR,mode2,2,TRPACTR);
} 
else
{ 
 /* line 1021: */
XRPACTR = VRPACTR ;
IRPACTR.data[2] = A_UNITE(WRPACTR,mode2,2,XRPACTR);
} 
IRPACTR.data[3] = A_UNITE(YRPACTR,mode4,4,EIAACTR_cnewline);
 /* line 1022: */
MDMACTR_writecstream(A_HISVEC(ZRPACTR,IRPACTR,4,A68_145 ), UPPACTR_codestream);
 /* line 1024: */
 /* line 1025: */
WPPACTR_use = (*(&(WPPACTR_use->Rest)));
}
 /* line 1027: */
 /* line 1028: */
 /* line 1029: */
if ( AQIACTR_verboseoption )
{ 
 /* line 1030: */
ESPACTR = CSPACTR ;
ASPACTR.data[0] = A_UNITE(DSPACTR,mode2,2,ESPACTR);
ASPACTR.data[1] = A_UNITE(FSPACTR,mode4,4,EIAACTR_cnewline);
 /* line 1031: */
 /* line 1032: */
 /* line 1033: */
MDMACTR_writecstream(A_HISVEC(GSPACTR,ASPACTR,2,A68_145 ), VPPACTR_nonlocdecstream);
} 
} 
A_PROC_EXIT(processuselist);
return;
} 
#undef NL

A68_VOID  HSPACTR_declareusedids(void)
{ 
A68_INT  ISPACTR_codestream;
A68_INT  JSPACTR;  /* YIELD */
A68_198 * KSPACTR_uselist;
A68_198 * LSPACTR_use;
A68_VC  MSPACTR;  /* OPERATORS - istruct -> vector */
A68_105  NSPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  OSPACTR_decsinit;
A68_VC  PSPACTR;  /* OPERATORS - istruct -> vector */
A68_109  QSPACTR;  /* OPERATORS - istruct -> vector */
A68_VC  RSPACTR;  /* avoid structure result */
A68_VC  SSPACTR_decsname;
A68_256  TSPACTR;  /* collateral clause result */
A68_145  USPACTR;  /* OPERATORS - mode -> union mode */
A68_145  XSPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  YSPACTR;  /* YIELD */
A68_145  ZSPACTR;  /* OPERATORS - mode -> union mode */
A68_145  CTPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  DTPACTR;  /* YIELD */
A68_145  ETPACTR;  /* OPERATORS - mode -> union mode */
A68_144  FTPACTR;  /* OPERATORS - istruct -> vector */
A68_197 * GTPACTR_id;
A68_256  HTPACTR;  /* collateral clause result */
A68_145  KTPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  LTPACTR;  /* YIELD */
A68_145  MTPACTR;  /* OPERATORS - mode -> union mode */
A68_145  PTPACTR;  /* OPERATORS - mode -> union mode */
A68_VC  QTPACTR;  /* YIELD */
A68_145  RTPACTR;  /* OPERATORS - mode -> union mode */
A68_145  STPACTR;  /* OPERATORS - mode -> union mode */
A68_144  TTPACTR;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(declareusedids);
{ 
ISPACTR_codestream = NSLACTR_codestream(VRLACTR_currentlevel());
 /* line 1043: */
JSPACTR = 0 ;
KSPACTR_uselist = (*(&((*(&A_R1INDEX(RBPACTR_contexts,JSPACTR)))->Uses)));
 /* line 1045: */
LSPACTR_use = KSPACTR_uselist;
 /* line 1048: */
for ( ;; )
{ 
 /* line 1049: */
 /* line 1050: */
if ( !((LSPACTR_use!=(A68_198 *)A68_NIL)) ) break;
NSPACTR = (*(&(LSPACTR_use->Uname))) ;
OSPACTR_decsinit = A_HISVEC(MSPACTR,NSPACTR,7,A68_CHAR );
 /* line 1051: */
QSPACTR = (*(&(LSPACTR_use->Name))) ;
BNAAOSF_before( A_HISVEC(PSPACTR,QSPACTR,32,A68_CHAR ), ' ', &RSPACTR );
SSPACTR_decsname = RSPACTR;
 /* line 1053: */
 /* line 1054: */
 /* line 1055: */
if ( AQIACTR_verboseoption )
{ 
TSPACTR.data[0] = A_UNITE(USPACTR,mode4,4,EIAACTR_cnewline);
YSPACTR = WSPACTR ;
TSPACTR.data[1] = A_UNITE(XSPACTR,mode2,2,YSPACTR);
TSPACTR.data[2] = A_UNITE(ZSPACTR,mode2,2,SSPACTR_decsname);
DTPACTR = BTPACTR ;
TSPACTR.data[3] = A_UNITE(CTPACTR,mode2,2,DTPACTR);
TSPACTR.data[4] = A_UNITE(ETPACTR,mode4,4,EIAACTR_cnewline);
 /* line 1056: */
 /* line 1057: */
MDMACTR_writecstream(A_HISVEC(FTPACTR,TSPACTR,5,A68_145 ), GSLACTR_importsstream);
} 
 /* line 1059: */
GTPACTR_id = (*(&(LSPACTR_use->Ids)));
 /* line 1060: */
for ( ;; )
{ 
 /* line 1061: */
 /* line 1062: */
if ( !((GTPACTR_id!=(A68_197 *)A68_NIL)) ) break;
A_CALLPROC(MXKACTR_externalcdec,((*(&(GTPACTR_id->Decno)))),((*(&(GTPACTR_id->Decno))),(MXKACTR_externalcdec).nonlocals));
 /* line 1063: */
 /* line 1064: */
GTPACTR_id = (*(&(GTPACTR_id->Rest)));
}
 /* line 1066: */
 /* line 1067: */
 /* line 1068: */
if ( AQIACTR_verboseoption )
{ 
LTPACTR = JTPACTR ;
HTPACTR.data[0] = A_UNITE(KTPACTR,mode2,2,LTPACTR);
HTPACTR.data[1] = A_UNITE(MTPACTR,mode2,2,SSPACTR_decsname);
QTPACTR = OTPACTR ;
HTPACTR.data[2] = A_UNITE(PTPACTR,mode2,2,QTPACTR);
HTPACTR.data[3] = A_UNITE(RTPACTR,mode4,4,EIAACTR_cnewline);
HTPACTR.data[4] = A_UNITE(STPACTR,mode4,4,EIAACTR_cnewline);
 /* line 1069: */
 /* line 1070: */
MDMACTR_writecstream(A_HISVEC(TTPACTR,HTPACTR,5,A68_145 ), GSLACTR_importsstream);
} 
 /* line 1072: */
 /* line 1073: */
LSPACTR_use = (*(&(LSPACTR_use->Rest)));
}
 /* line 1074: */
} 
A_PROC_EXIT(declareusedids);
return;
} 
#undef NL

A68_VOID  UTPACTR_processcontexts(void)
{ 
A68_BOOL  VTPACTR_decsmodule;
A68_INT  WTPACTR;  /* YIELD */
A68_198 * XTPACTR_contextvoiduselist;
A_PROC_ENTRY(processcontexts);
{ 
VTPACTR_decsmodule = ((*(&(BCPACTR_currentmodinfo->Type)))==(-1));
 /* line 1082: */
WTPACTR = 0 ;
XTPACTR_contextvoiduselist = (*(&((*(&A_R1INDEX(RBPACTR_contexts,WTPACTR)))->Uses)));
 /* line 1084: */
 /* line 1085: */
 /* line 1086: */
if ( ((*(&((&(BCPACTR_currentmodinfo->L))->Level)))!=0) )
{ 
 /* line 1087: */
WXIACTR_assert(ZTPACTR, A68_FALSE);
} 
 /* line 1089: */
 /* line 1090: */
if ( (XTPACTR_contextvoiduselist!=(A68_198 *)A68_NIL) )
{ 
 /* line 1091: */
 /* line 1092: */
TPPACTR_processuselist(XTPACTR_contextvoiduselist);
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
void MMOACTR(void)   /* initialise DECS modules */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel","-dir",".","modules.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/vak/Project/Algol/Algol-68RS-Source/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/vak/Project/Algol/Algol-68RS-Source/a68config/a68config.m","./uniquenameserver.m","./moduletracer.m","./liblookup.m","./incinstallation.m","./incid.m","./idtable.m","./environment.m","./environ.m","./coutput.m","./common.m","./centities.m","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel/osif.m","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_133  XNOACTR;  /* OPERATORS - skip to mode */
A68_139  ZNOACTR;  /* collateral clause result */
A68_VC  APOACTR;  /* avoid structure result */
A68_138  RAPACTR;  /* collateral clause result */
A68_108  SAPACTR;  /* OPERATORS - skip to mode */
A68_108  TAPACTR;  /* OPERATORS - skip to mode */
A68_126  UAPACTR;  /* OPERATORS - skip to mode */
A68_199  NBPACTR;  /* collateral clause result */
A68_127  OBPACTR;  /* OPERATORS - nil -> mode */
A68_199 * QBPACTR;  /* YIELD */
A68_180  VBPACTR;  /* OPERATORS - nil -> mode */
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
A_config.translation_time = "Thu Nov  5 20:46:57 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "LMOACTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 20:46:57 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS modules);
UEAALIB_a68config(LGAALIB_configinfo, QMOACTR);
 /* line 52: */
 /* line 92: */
 /* line 94: */
 /* line 95: */
 /* line 96: */
TMOACTR_checkinfolength = (2*(SMOACTR_unamelength+1));
 /* line 98: */
VMOACTR_nullid = UMOACTR;
 /* line 99: */
XMOACTR_anonymousid = WMOACTR;
 /* line 100: */
ZMOACTR_stdpreludename = YMOACTR;
 /* line 101: */
BNOACTR_stdpreludeid = ANOACTR;
 /* line 103: */
DNOACTR_nulluname = CNOACTR;
 /* line 105: */
 /* line 109: */
 /* line 119: */
 /* line 120: */
SNOACTR_modinfomagic = RNOACTR;
 /* line 121: */
VNOACTR_alien_termination_string = UNOACTR;
 /* line 123: */
WNOACTR_composition = A68_FALSE;
 /* line 126: */
YNOACTR_nilspec = XNOACTR;
 /* line 127: */
ZNOACTR.Xs.F = VMOACTR_nullid;
ZNOACTR.Xs.No = (-2);
ZNOACTR.Xs.Nl = 0;
ZNOACTR.Xs.Ng = 0;
ZNOACTR.Xs.U = YNOACTR_nilspec;
ZNOACTR.Ys = DNOACTR_nulluname;
AOOACTR_nullspec = ZNOACTR;
 /* line 129: */
 /* line 148: */
 /* line 206: */
WOOACTR_generator( A68_TRUE, &APOACTR );
ZOOACTR_modinfo_buf = APOACTR;
 /* line 208: */
 /* line 218: */
 /* line 231: */
 /* line 355: */
 /* line 359: */
 /* line 432: */
 /* line 456: */
RAPACTR.Xmi.Name = VMOACTR_nullid;
RAPACTR.Xmi.L = SAPACTR;
RAPACTR.Xmi.G = TAPACTR;
RAPACTR.Xmi.Type = (-2);
RAPACTR.Ym = UAPACTR;
VAPACTR_lastmoduledetails = RAPACTR;
 /* line 459: */
 /* line 487: */
 /* line 488: */
NBPACTR.Name = VMOACTR_nullid;
NBPACTR.Ym.Uname = DNOACTR_nulluname;
NBPACTR.Ym.Lname = DNOACTR_nulluname;
NBPACTR.Ym.Gname = DNOACTR_nulluname;
 /* line 489: */
NBPACTR.Ym.Specs = A_VVAC(OBPACTR);
NBPACTR.Ys = DNOACTR_nulluname;
NBPACTR.Level = 0;
NBPACTR.Ids = (A68_197 *)A68_NIL;
NBPACTR.Uses = (A68_198 *)A68_NIL;
NBPACTR.Rest = (A68_199 *)A68_NIL;
QBPACTR = A_LOC(A68_199 ) ;
(*QBPACTR) = NBPACTR ;
PBPACTR_contextlist = QBPACTR;
 /* line 492: */
 /* line 495: */
SBPACTR_idlist = (A68_197 **)A68_NIL;
 /* line 499: */
 /* line 503: */
UBPACTR_keptdecnos = (A_R1VAC(VBPACTR));
 /* line 508: */
WBPACTR_previousversionfound = A68_FALSE;
 /* line 513: */
XBPACTR_rscompatiblewithpreviousversion = A68_FALSE;
 /* line 517: */
YBPACTR_transcompatiblewithpreviousversi = A68_TRUE;
 /* line 522: */
ZBPACTR_currentmoduleinitialised = A68_FALSE;
 /* line 525: */
 /* line 526: */
BCPACTR_currentmodinfo = (&((&ACPACTR_currentmodule)->Xmi));
 /* line 527: */
CCPACTR_checkinfo = (&((&ACPACTR_currentmodule)->Checkinfo));
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
