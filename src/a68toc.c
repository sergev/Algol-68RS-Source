/* UNAME:GYBBCTR */
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
A_ISTRUCT(A68_CHAR ,32,A68t107);
typedef struct A68t107  A68_107 ;    /* STRUCT 32 CHAR */
struct A68t108{
A68_INT  Mode;
A_PAD_INT(PAD_19)
struct A68t108 * Rest;
};
typedef struct A68t108  A68_108 ;    /* STRUCT(INT,REF MODE108)  */
struct A68t109{
A68_INT  Deproc;
A_PAD_INT(PAD_20)
};
typedef struct A68t109  A68_109 ;    /* STRUCT(INT)  */
struct A68t110{
A68_INT  Rdenno;
A_PAD_INT(PAD_21)
struct A68t108 * Modelist;
};
typedef struct A68t110  A68_110 ;    /* STRUCT(INT,REF MODE108)  */
struct A68t111{
A68_INT  Deproc;
A_PAD_INT(PAD_22)
struct A68t108 * Pars;
};
typedef struct A68t111  A68_111 ;    /* STRUCT(INT,REF MODE108)  */
struct A68t112{
A68_INT  Mode;
A_PAD_INT(PAD_23)
A68_INT  Fieldno;
A_PAD_INT(PAD_24)
struct A68t107  Name;
A_PAD_ISTRUCT(A68_107 ,PAD_25)
struct A68t112 * Rest;
};
typedef struct A68t112  A68_112 ;    /* STRUCT(INT,INT,MODE107,REF MODE112)  */
struct A68t113{
A68_INT  Rdenno;
A_PAD_INT(PAD_26)
A68_INT  Deflex;
A_PAD_INT(PAD_27)
struct A68t112 * Sels;
};
typedef struct A68t113  A68_113 ;    /* STRUCT(INT,INT,REF MODE112)  */
struct A68t114{
A68_INT  Rdenno;
A_PAD_INT(PAD_28)
A68_INT  Imode;
A_PAD_INT(PAD_29)
A68_INT  Length;
A_PAD_INT(PAD_30)
A68_INT  Deflex;
A_PAD_INT(PAD_31)
};
typedef struct A68t114  A68_114 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t115{
A68_INT  Rdenno;
A_PAD_INT(PAD_32)
A68_INT  Vecmode;
A_PAD_INT(PAD_33)
A68_INT  Deflex;
A_PAD_INT(PAD_34)
};
typedef struct A68t115  A68_115 ;    /* STRUCT(INT,INT,INT)  */
struct A68t116{
A68_INT  Rdenno;
A_PAD_INT(PAD_35)
A68_INT  Mode;
A_PAD_INT(PAD_36)
A68_INT  Nods;
A_PAD_INT(PAD_37)
A68_INT  Deflex;
A_PAD_INT(PAD_38)
};
typedef struct A68t116  A68_116 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t117{
A68_INT  Mode;
A_PAD_INT(PAD_39)
struct A68t118 * Stenlist;
};
typedef struct A68t117  A68_117 ;    /* STRUCT(INT,REF MODE118)  */
struct A68t118{
A68_INT  Mode;
A_PAD_INT(PAD_40)
A68_INT  Rdenno;
A_PAD_INT(PAD_41)
struct A68t118 * Rest;
};
typedef struct A68t118  A68_118 ;    /* STRUCT(INT,INT,REF MODE118)  */
struct A68t119{
A68_INT  Mode;
A_PAD_INT(PAD_42)
};
typedef struct A68t119  A68_119 ;    /* STRUCT(INT)  */
struct A68t120 { A68_INT mode; union {
A68_INT  mode1;
struct A68t110 * mode2;
struct A68t111 * mode3;
struct A68t113 * mode4;
struct A68t114 * mode5;
struct A68t109 * mode6;
struct A68t115 * mode7;
struct A68t116 * mode8;
struct A68t117 * mode9;
struct A68t121 * mode10;
struct A68t119  mode11;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t120  A68_120 ;    /* UNION(INT,REF MODE110,REF MODE111,REF MODE113,REF MODE114,REF MODE109,REF MODE115,REF MODE116,REF MODE117,REF MODE121,MODE119)  */
struct A68t121{
A68_INT  Mode;
A_PAD_INT(PAD_43)
A68_INT  Modeproc;
A_PAD_INT(PAD_44)
struct A68t122 * El;
};
typedef struct A68t121  A68_121 ;    /* STRUCT(INT,INT,REF MODE122)  */
struct A68t122{
struct A68t121 * Am;
struct A68t122 * Rest;
};
typedef struct A68t122  A68_122 ;    /* STRUCT(REF MODE121,REF MODE122)  */
struct A68t123{
struct A68t107  Name;
A_PAD_ISTRUCT(A68_107 ,PAD_45)
A68_INT  Decno;
A_PAD_INT(PAD_46)
A68_INT  Level;
A_PAD_INT(PAD_47)
A68_INT  Mode;
A_PAD_INT(PAD_48)
A68_INT  Scope;
A_PAD_INT(PAD_49)
struct A68t123 * Rest;
};
typedef struct A68t123  A68_123 ;    /* STRUCT(MODE107,INT,INT,INT,INT,REF MODE123)  */
struct A68t124{
struct A68t107  Name;
A_PAD_ISTRUCT(A68_107 ,PAD_50)
A68_BITS  Props;
A_PAD_BITS(PAD_51)
A68_INT  Mode;
A_PAD_INT(PAD_52)
A68_INT  Rdenno;
A_PAD_INT(PAD_53)
A68_INT  Maxname;
A_PAD_INT(PAD_54)
A68_INT  Level;
A_PAD_INT(PAD_55)
struct A68t124 * Rest;
};
typedef struct A68t124  A68_124 ;    /* STRUCT(MODE107,BITS,INT,INT,INT,INT,REF MODE124)  */
struct A68t125{
struct A68t107  Name;
A_PAD_ISTRUCT(A68_107 ,PAD_56)
A68_INT  Labno;
A_PAD_INT(PAD_57)
A68_INT  Status;
A_PAD_INT(PAD_58)
struct A68t125 * Rest;
};
typedef struct A68t125  A68_125 ;    /* STRUCT(MODE107,INT,INT,REF MODE125)  */
A_VECTOR(struct A68t128 ,A68t127);
typedef struct A68t127  A68_127 ;    /* VECTOR [] MODE128 */
A_VECTOR(struct A68t135 ,A68t134);
typedef struct A68t134  A68_134 ;    /* VECTOR [] MODE135 */
struct A68t135{
struct A68t107  N;
A_PAD_ISTRUCT(A68_107 ,PAD_59)
struct A68t107  F;
A_PAD_ISTRUCT(A68_107 ,PAD_60)
A68_INT  Level;
A_PAD_INT(PAD_61)
};
typedef struct A68t135  A68_135 ;    /* STRUCT(MODE107,MODE107,INT)  */
struct A68t133 { A68_INT mode; union {
A68_VC  mode1;
struct A68t134  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t133  A68_133 ;    /* UNION(REF MODE26,REF MODE134)  */
struct A68t129{
struct A68t107  F;
A_PAD_ISTRUCT(A68_107 ,PAD_62)
A68_INT  No;
A_PAD_INT(PAD_63)
A68_INT  Nl;
A_PAD_INT(PAD_64)
A68_INT  Ng;
A_PAD_INT(PAD_65)
struct A68t133  U;
};
typedef struct A68t129  A68_129 ;    /* STRUCT(MODE107,INT,INT,INT,MODE133)  */
A_VECTOR(struct A68t132 ,A68t130);
typedef struct A68t130  A68_130 ;    /* VECTOR [] MODE132 */
struct A68t132{
struct A68t105  Prefix;
A_PAD_ISTRUCT(A68_105 ,PAD_66)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_67)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_68)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_69)
A68_BOOL  Keptgenproc;
A_PAD_BOOL(PAD_70)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_71)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t132  A68_132 ;    /* STRUCT(MODE105,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26)  */
A_VECTOR(struct A68t105 ,A68t131);
typedef struct A68t131  A68_131 ;    /* VECTOR [] MODE105 */
struct A68t128{
struct A68t129  Xs;
struct A68t105  Ys;
A_PAD_ISTRUCT(A68_105 ,PAD_72)
A68_LINT  Timeoflastchange;
A_PAD_LINT(PAD_73)
struct A68t130  Keptinfo;
struct A68t131  Cnames;
};
typedef struct A68t128  A68_128 ;    /* STRUCT(MODE129,MODE105,LONG INT,REF MODE130,REF MODE131)  */
struct A68t126{
struct A68t105  Uname;
A_PAD_ISTRUCT(A68_105 ,PAD_74)
struct A68t105  Lname;
A_PAD_ISTRUCT(A68_105 ,PAD_75)
struct A68t105  Gname;
A_PAD_ISTRUCT(A68_105 ,PAD_76)
struct A68t127  Specs;
};
typedef struct A68t126  A68_126 ;    /* STRUCT(MODE105,MODE105,MODE105,REF MODE127)  */
struct A68t136{
A68_INT  I;
A_PAD_INT(PAD_77)
A68_INT  J;
A_PAD_INT(PAD_78)
};
typedef struct A68t136  A68_136 ;    /* STRUCT(INT,INT)  */
struct A68t137{
A68_INT  I;
A_PAD_INT(PAD_79)
A68_INT  J;
A_PAD_INT(PAD_80)
A68_INT  K;
A_PAD_INT(PAD_81)
};
typedef struct A68t137  A68_137 ;    /* STRUCT(INT,INT,INT)  */
struct A68t138{
A68_INT  Mode;
A_PAD_INT(PAD_82)
A68_BOOL  Loc;
A_PAD_BOOL(PAD_83)
};
typedef struct A68t138  A68_138 ;    /* STRUCT(INT,BOOL)  */
struct A68t139{
A68_INT  Mode;
A_PAD_INT(PAD_84)
A68_INT  Nopars;
A_PAD_INT(PAD_85)
};
typedef struct A68t139  A68_139 ;    /* STRUCT(INT,INT)  */
struct A68t140{
A68_INT  Mode;
A_PAD_INT(PAD_86)
A68_VC  Nu;
};
typedef struct A68t140  A68_140 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t141{
A68_INT  Almode;
A_PAD_INT(PAD_87)
};
typedef struct A68t141  A68_141 ;    /* STRUCT(INT)  */
struct A68t142{
A68_INT  Nochars;
A_PAD_INT(PAD_88)
A68_INT  Base;
A_PAD_INT(PAD_89)
A68_VC  Chars;
};
typedef struct A68t142  A68_142 ;    /* STRUCT(INT,INT,REF MODE26)  */
struct A68t143{
A68_INT  Strmode;
A_PAD_INT(PAD_90)
};
typedef struct A68t143  A68_143 ;    /* STRUCT(INT)  */
struct A68t144{
A68_INT  Nochars;
A_PAD_INT(PAD_91)
A68_INT  Nocases;
A_PAD_INT(PAD_92)
A68_INT  W;
A_PAD_INT(PAD_93)
};
typedef struct A68t144  A68_144 ;    /* STRUCT(INT,INT,INT)  */
struct A68t146{
A68_INT  Nse;
A_PAD_INT(PAD_94)
};
typedef struct A68t146  A68_146 ;    /* STRUCT(INT)  */
struct A68t145 { A68_INT mode; union {
A68_BOOL  mode1;
A68_INT  mode2;
struct A68t125 * mode3;
struct A68t146  mode4;
struct A68t138  mode5;
struct A68t143  mode6;
struct A68t144  mode7;
struct A68t140  mode8;
struct A68t141  mode9;
struct A68t139  mode10;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t145  A68_145 ;    /* UNION(BOOL,INT,REF MODE125,MODE146,MODE138,MODE143,MODE144,MODE140,MODE141,MODE139)  */
struct A68t147{
A68_INT  Type;
A_PAD_INT(PAD_95)
struct A68t123 * Iddec;
};
typedef struct A68t147  A68_147 ;    /* STRUCT(INT,REF MODE123)  */
struct A68t148{
struct A68t125 * Lab;
A68_BOOL  Notsetting;
A_PAD_BOOL(PAD_96)
};
typedef struct A68t148  A68_148 ;    /* STRUCT(REF MODE125,BOOL)  */
struct A68t149 { A68_INT mode; union {
struct A68t147  mode1;
struct A68t148  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t149  A68_149 ;    /* UNION(MODE147,MODE148)  */
struct A68t150{
A68_BOOL  Up;
A_PAD_BOOL(PAD_97)
};
typedef struct A68t150  A68_150 ;    /* STRUCT(BOOL)  */
struct A68t151{
A68_INT  Fn;
A_PAD_INT(PAD_98)
A68_INT  M;
A_PAD_INT(PAD_99)
A68_INT  Param;
A_PAD_INT(PAD_100)
};
typedef struct A68t151  A68_151 ;    /* STRUCT(INT,INT,INT)  */
struct A68t152{
A68_INT  Charpos;
A_PAD_INT(PAD_101)
};
typedef struct A68t152  A68_152 ;    /* STRUCT(INT)  */
struct A68t153{
A68_BOOL  All;
A_PAD_BOOL(PAD_102)
A68_VC  Pr;
};
typedef struct A68t153  A68_153 ;    /* STRUCT(BOOL,REF MODE26)  */
struct A68t154{
A68_INT  W;
A_PAD_INT(PAD_103)
};
typedef struct A68t154  A68_154 ;    /* STRUCT(INT)  */
struct A68t155{
A68_INT  Fn;
A_PAD_INT(PAD_104)
A68_INT  M;
A_PAD_INT(PAD_105)
A68_BITS  Props;
A_PAD_BITS(PAD_106)
A68_INT  Param;
A_PAD_INT(PAD_107)
};
typedef struct A68t155  A68_155 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t156{
A68_INT  Norden;
A_PAD_INT(PAD_108)
A68_INT  Nomodes;
A_PAD_INT(PAD_109)
A68_INT  Nolabs;
A_PAD_INT(PAD_110)
A68_INT  Nodecnos;
A_PAD_INT(PAD_111)
A68_INT  Nomodules;
A_PAD_INT(PAD_112)
A68_INT  Nolibinds;
A_PAD_INT(PAD_113)
};
typedef struct A68t156  A68_156 ;    /* STRUCT(INT,INT,INT,INT,INT,INT)  */
struct A68t157{
struct A68t107  Name;
A_PAD_ISTRUCT(A68_107 ,PAD_114)
struct A68t135  L;
struct A68t135  G;
A68_INT  Type;
A_PAD_INT(PAD_115)
};
typedef struct A68t157  A68_157 ;    /* STRUCT(MODE107,MODE135,MODE135,INT)  */
struct A68t158{
struct A68t157  Xmi;
struct A68t126  Ym;
};
typedef struct A68t158  A68_158 ;    /* STRUCT(MODE157,MODE126)  */
struct A68t159{
struct A68t129  Xs;
struct A68t105  Ys;
A_PAD_ISTRUCT(A68_105 ,PAD_116)
};
typedef struct A68t159  A68_159 ;    /* STRUCT(MODE129,MODE105)  */
struct A68t160{
struct A68t107  Name;
A_PAD_ISTRUCT(A68_107 ,PAD_117)
A68_INT  Maxlevel;
A_PAD_INT(PAD_118)
A68_INT  Nof;
A_PAD_INT(PAD_119)
A68_INT  Moduleno;
A_PAD_INT(PAD_120)
};
typedef struct A68t160  A68_160 ;    /* STRUCT(MODE107,INT,INT,INT)  */
struct A68t161{
A68_INT  Moduleno;
A_PAD_INT(PAD_121)
A68_INT  Nof;
A_PAD_INT(PAD_122)
};
typedef struct A68t161  A68_161 ;    /* STRUCT(INT,INT)  */
struct A68t162{
A68_INT  Type;
A_PAD_INT(PAD_123)
A68_INT  Moduleno;
A_PAD_INT(PAD_124)
struct A68t107  Name;
A_PAD_ISTRUCT(A68_107 ,PAD_125)
struct A68t126  Ym;
};
typedef struct A68t162  A68_162 ;    /* STRUCT(INT,INT,MODE107,MODE126)  */
struct A68t163{
A68_BOOL  Bu;
A_PAD_BOOL(PAD_126)
A68_INT  Level;
A_PAD_INT(PAD_127)
struct A68t123 * Id;
};
typedef struct A68t163  A68_163 ;    /* STRUCT(BOOL,INT,REF MODE123)  */
A_VECTOR(struct A68t137 ,A68t165);
typedef struct A68t165  A68_165 ;    /* VECTOR [] MODE137 */
struct A68t164{
struct A68t136  Body;
struct A68t165  Kset;
struct A68t92  Keeps;
A68_INT  Last;
A_PAD_INT(PAD_128)
};
typedef struct A68t164  A68_164 ;    /* STRUCT(MODE136,REF MODE165,REF MODE92,INT)  */
struct A68t166{
A68_INT  Body;
A_PAD_INT(PAD_129)
struct A68t92  Actuals;
A68_INT  Moduleno;
A_PAD_INT(PAD_130)
};
typedef struct A68t166  A68_166 ;    /* STRUCT(INT,REF MODE92,INT)  */
struct A68t167{
struct A68t107  Name;
A_PAD_ISTRUCT(A68_107 ,PAD_131)
struct A68t126  Ym;
struct A68t107  Formal;
A_PAD_ISTRUCT(A68_107 ,PAD_132)
struct A68t105  Ys;
A_PAD_ISTRUCT(A68_105 ,PAD_133)
A68_INT  Level;
A_PAD_INT(PAD_134)
A68_INT  Ownlevel;
A_PAD_INT(PAD_135)
};
typedef struct A68t167  A68_167 ;    /* STRUCT(MODE107,MODE126,MODE107,MODE105,INT,INT)  */
struct A68t168{
A68_INT  Moduleno;
A_PAD_INT(PAD_136)
A68_INT  Type;
A_PAD_INT(PAD_137)
};
typedef struct A68t168  A68_168 ;    /* STRUCT(INT,INT)  */
struct A68t169{
struct A68t92  Decnos;
struct A68t92  Modes;
};
typedef struct A68t169  A68_169 ;    /* STRUCT(REF MODE92,REF MODE92)  */
struct A68t170{
A68_INT  Moduleno;
A_PAD_INT(PAD_138)
A68_INT  Type;
A_PAD_INT(PAD_139)
A68_INT  Maxmodule;
A_PAD_INT(PAD_140)
};
typedef struct A68t170  A68_170 ;    /* STRUCT(INT,INT,INT)  */
A_VECTOR(struct A68t120 ,A68t172);
typedef struct A68t172  A68_172 ;    /* VECTOR [] MODE120 */
struct A68t171 { A68_INT mode; union {
struct A68t150  mode1;
A68_BOOL  mode2;
A68_INT  mode3;
struct A68t125 * mode4;
struct A68t146  mode5;
struct A68t138  mode6;
struct A68t143  mode7;
struct A68t144  mode8;
struct A68t140  mode9;
struct A68t141  mode10;
struct A68t139  mode11;
struct A68t147  mode12;
struct A68t148  mode13;
struct A68t151  mode14;
struct A68t152  mode15;
struct A68t154  mode16;
struct A68t155  mode17;
struct A68t156  mode18;
struct A68t172  mode19;
struct A68t153  mode20;
struct A68t157  mode21;
struct A68t129  mode22;
struct A68t160  mode23;
struct A68t161  mode24;
struct A68t162  mode25;
struct A68t163  mode26;
struct A68t164  mode27;
struct A68t166  mode28;
struct A68t167  mode29;
struct A68t92  mode30;
struct A68t168  mode31;
struct A68t169  mode32;
struct A68t170  mode33;
struct A68t124 * mode34;
struct A68t142  mode35;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t171  A68_171 ;    /* UNION(MODE150,BOOL,INT,REF MODE125,MODE146,MODE138,MODE143,MODE144,MODE140,MODE141,MODE139,MODE147,MODE148,MODE151,MODE152,MODE154,MODE155,MODE156,REF MODE172,MODE153,MODE157,MODE129,MODE160,MODE161,MODE162,MODE163,MODE164,MODE166,MODE167,REF MODE92,MODE168,MODE169,MODE170,REF MODE124,MODE142)  */
struct A68t174 ;
struct A68t175 ;
struct A68t176 ;
struct A68t177 ;
struct A68t178 ;
struct A68t179 ;
struct A68t180 ;
struct A68t181 ;

A_PROCEDURE(A68_BOOL ,A68t173,(struct A68t174 ,struct A68t175 ,struct A68t176 ,struct A68t177 ,struct A68t178 ,struct A68t179 ,struct A68t180 ,struct A68t181 ),(struct A68t174 ,struct A68t175 ,struct A68t176 ,struct A68t177 ,struct A68t178 ,struct A68t179 ,struct A68t180 ,struct A68t181 ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(MODE174,MODE175,MODE176,MODE177,MODE178,MODE179,MODE180,REF MODE181) BOOL */

A_PROCEDURE(A68_BOOL ,A68t174,(A68_VC ,A68_INT *),(A68_VC ,A68_INT *,void *));
typedef struct A68t174  A68_174 ;    /* PROC(REF MODE26,REF INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t175,(struct A68t171 ,A68_INT ),(struct A68t171 ,A68_INT ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(MODE171,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t176,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t177,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t177  A68_177 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t178,(struct A68t107 ,A68_INT ,A68_BOOL ,struct A68t158 *),(struct A68t107 ,A68_INT ,A68_BOOL ,struct A68t158 *,void *));
typedef struct A68t178  A68_178 ;    /* PROC(MODE107,INT,BOOL) MODE158 */

A_PROCEDURE(A68_VOID ,A68t179,(struct A68t107 ,struct A68t107 ,struct A68t126 ,struct A68t159 *),(struct A68t107 ,struct A68t107 ,struct A68t126 ,struct A68t159 *,void *));
typedef struct A68t179  A68_179 ;    /* PROC(MODE107,MODE107,MODE126) MODE159 */

A_PROCEDURE(A68_INT ,A68t180,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(REF MODE26,BOOL) INT */
A_ROW(struct A68t182 ,A68t181,1);
typedef struct A68t181  A68_181 ;    /* [] MODE182 */
struct A68t182{
A68_INT  Type;
A_PAD_INT(PAD_141)
A68_INT  Value;
A_PAD_INT(PAD_142)
};
typedef struct A68t182  A68_182 ;    /* STRUCT(INT,INT)  */
struct A68t184 ;
struct A68t185 ;

A_PROCEDURE(A68_VOID ,A68t183,(struct A68t184 ,struct A68t156 *,struct A68t185 ),(struct A68t184 ,struct A68t156 *,struct A68t185 ,void *));
typedef struct A68t183  A68_183 ;    /* PROC(MODE184,REF MODE156,REF MODE185) VOID */
struct A68t186 ;

A_PROCEDURE(A68_VOID ,A68t184,(struct A68t186 *),(struct A68t186 *,void *));
typedef struct A68t184  A68_184 ;    /* PROC MODE186 */
A_ROW(A68_INT ,A68t185,1);
typedef struct A68t185  A68_185 ;    /* [] INT */
struct A68t187{
A68_VC  Representation;
};
typedef struct A68t187  A68_187 ;    /* STRUCT(REF MODE26)  */
struct A68t188{
A68_INT  Mode;
A_PAD_INT(PAD_143)
A68_VC  String;
};
typedef struct A68t188  A68_188 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t189{
A68_INT  Mode;
A_PAD_INT(PAD_144)
A68_LBITS  Denotation;
A_PAD_LBITS(PAD_145)
};
typedef struct A68t189  A68_189 ;    /* STRUCT(INT,LONG BITS)  */
struct A68t190{
A68_INT  Mode;
A_PAD_INT(PAD_146)
A68_VC  Denotation;
};
typedef struct A68t190  A68_190 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t191{
A68_INT  Fn;
A_PAD_INT(PAD_147)
A68_INT  Mode;
A_PAD_INT(PAD_148)
A68_INT  Param;
A_PAD_INT(PAD_149)
};
typedef struct A68t191  A68_191 ;    /* STRUCT(INT,INT,INT)  */
struct A68t192{
A68_INT  Type;
A_PAD_INT(PAD_150)
A68_VC  Name;
A68_INT  Mode;
A_PAD_INT(PAD_151)
A68_INT  Decno;
A_PAD_INT(PAD_152)
};
typedef struct A68t192  A68_192 ;    /* STRUCT(INT,REF MODE26,INT,INT)  */
struct A68t193{
A68_VC  Name;
A68_BITS  Props;
A_PAD_BITS(PAD_153)
A68_INT  Mode;
A_PAD_INT(PAD_154)
A68_INT  Rdenno;
A_PAD_INT(PAD_155)
A68_INT  Maxname;
A_PAD_INT(PAD_156)
};
typedef struct A68t193  A68_193 ;    /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
struct A68t194{
A68_VC  Name;
A68_INT  Labno;
A_PAD_INT(PAD_157)
A68_INT  Status;
A_PAD_INT(PAD_158)
A68_BOOL  Notsetting;
A_PAD_BOOL(PAD_159)
};
typedef struct A68t194  A68_194 ;    /* STRUCT(REF MODE26,INT,INT,BOOL)  */
struct A68t195{
A68_INT  Mode;
A_PAD_INT(PAD_160)
A68_BITS  Props;
A_PAD_BITS(PAD_161)
A68_INT  Param;
A_PAD_INT(PAD_162)
};
typedef struct A68t195  A68_195 ;    /* STRUCT(INT,BITS,INT)  */
struct A68t196{
A68_INT  I;
A_PAD_INT(PAD_163)
};
typedef struct A68t196  A68_196 ;    /* STRUCT(INT)  */
struct A68t197{
A68_BOOL  Start;
A_PAD_BOOL(PAD_164)
};
typedef struct A68t197  A68_197 ;    /* STRUCT(BOOL)  */
struct A68t198{
struct A68t144  Info;
A68_VC  Text;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(MODE144,REF MODE26)  */
struct A68t199{
A68_INT  Mode;
A_PAD_INT(PAD_165)
A68_INT  Number;
A_PAD_INT(PAD_166)
A68_VC  Insert;
};
typedef struct A68t199  A68_199 ;    /* STRUCT(INT,INT,REF MODE26)  */
struct A68t200{
A68_INT  Fn;
A_PAD_INT(PAD_167)
A68_INT  Mode;
A_PAD_INT(PAD_168)
A68_BITS  Props;
A_PAD_BITS(PAD_169)
A68_INT  Param;
A_PAD_INT(PAD_170)
};
typedef struct A68t200  A68_200 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t201{
A68_INT  Fn;
A_PAD_INT(PAD_171)
A68_INT  Mode;
A_PAD_INT(PAD_172)
A68_BITS  Props;
A_PAD_BITS(PAD_173)
A68_INT  Resultmode;
A_PAD_INT(PAD_174)
};
typedef struct A68t201  A68_201 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t202{
A68_INT  Fn;
A_PAD_INT(PAD_175)
A68_BITS  Props;
A_PAD_BITS(PAD_176)
};
typedef struct A68t202  A68_202 ;    /* STRUCT(INT,BITS)  */
struct A68t203{
A68_INT  Body;
A_PAD_INT(PAD_177)
A68_INT  Moduleno;
A_PAD_INT(PAD_178)
struct A68t185  Actuals;
};
typedef struct A68t203  A68_203 ;    /* STRUCT(INT,INT,REF MODE185)  */
struct A68t204{
A68_INT  Moduleno;
A_PAD_INT(PAD_179)
A68_INT  I;
A_PAD_INT(PAD_180)
A68_INT  J;
A_PAD_INT(PAD_181)
};
typedef struct A68t204  A68_204 ;    /* STRUCT(INT,INT,INT)  */
A_ROW(A68_VC ,A68t206,1);
typedef struct A68t206  A68_206 ;    /* [] REF MODE26 */
struct A68t205{
A68_INT  Moduleno;
A_PAD_INT(PAD_182)
A68_VC  Name;
A68_VC  Uname;
A68_VC  Lname;
A68_VC  Gname;
struct A68t206  Ysnames;
};
typedef struct A68t205  A68_205 ;    /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE206)  */
struct A68t186 { A68_INT mode; union {
struct A68t146  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t187  mode4;
struct A68t106  mode5;
struct A68t140  mode6;
struct A68t188  mode7;
struct A68t189  mode8;
struct A68t190  mode9;
struct A68t191  mode10;
struct A68t192  mode11;
struct A68t193  mode12;
struct A68t154  mode13;
struct A68t194  mode14;
struct A68t195  mode15;
struct A68t196  mode16;
struct A68t197  mode17;
struct A68t198  mode18;
struct A68t199  mode19;
struct A68t200  mode20;
struct A68t201  mode21;
struct A68t202  mode22;
struct A68t203  mode23;
struct A68t204  mode24;
struct A68t205  mode25;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t186  A68_186 ;    /* UNION(MODE146,INT,BOOL,MODE187,MODE106,MODE140,MODE188,MODE189,MODE190,MODE191,MODE192,MODE193,MODE154,MODE194,MODE195,MODE196,MODE197,MODE198,MODE199,MODE200,MODE201,MODE202,MODE203,MODE204,MODE205,VOID)  */
struct A68t208 ;

A_PROCEDURE(A68_VOID ,A68t207,(struct A68t208 ),(struct A68t208 ,void *));
typedef struct A68t207  A68_207 ;    /* PROC(MODE208) VOID */
A_VECTOR(struct A68t209 ,A68t208);
typedef struct A68t208  A68_208 ;    /* VECTOR [] MODE209 */
struct A68t209 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_SINT  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t209  A68_209 ;    /* UNION(CHAR,MODE26,SHORT INT)  */
struct A68t211 ;

A_PROCEDURE(A68_VOID ,A68t210,(struct A68t211 ,A68_INT ),(struct A68t211 ,A68_INT ,void *));
typedef struct A68t210  A68_210 ;    /* PROC(MODE211,INT) VOID */
A_VECTOR(struct A68t212 ,A68t211);
typedef struct A68t211  A68_211 ;    /* VECTOR [] MODE212 */
struct A68t212 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_INT  mode3;
A68_SINT  mode4;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t212  A68_212 ;    /* UNION(CHAR,MODE26,INT,SHORT INT)  */

A_PROCEDURE(A68_VOID ,A68t213,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t213  A68_213 ;    /* PROC(REF MODE26,INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t214,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t214  A68_214 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t215,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t215  A68_215 ;    /* PROC(REF MODE26) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t216,(A68_INT ),(A68_INT ,void *));
typedef struct A68t216  A68_216 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t217,(A68_INT ),(A68_INT ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(INT) BOOL */
struct A68t218{
A68_INT  Level;
A_PAD_INT(PAD_183)
A68_INT  Block;
A_PAD_INT(PAD_184)
};
typedef struct A68t218  A68_218 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t219,(struct A68t218 *),(struct A68t218 *,void *));
typedef struct A68t219  A68_219 ;    /* PROC MODE218 */

A_PROCEDURE(A68_BOOL ,A68t220,(void),(void *));
typedef struct A68t220  A68_220 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t221,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t222,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t223,(struct A68t218 ,struct A68t218 ),(struct A68t218 ,struct A68t218 ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(MODE218,MODE218) BOOL */

A_PROCEDURE(A68_BOOL ,A68t224,(struct A68t218 ),(struct A68t218 ,void *));
typedef struct A68t224  A68_224 ;    /* PROC(MODE218) BOOL */

A_PROCEDURE(A68_VOID ,A68t225,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t225  A68_225 ;    /* PROC(MODE26,BOOL) VOID */
struct A68t227 ;

A_PROCEDURE(A68_VOID ,A68t226,(A68_INT ,struct A68t227 ),(A68_INT ,struct A68t227 ,void *));
typedef struct A68t226  A68_226 ;    /* PROC(INT,MODE227) VOID */
A_ROW(A68_VC ,A68t227,1);
typedef struct A68t227  A68_227 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t228,(void),(void *));
typedef struct A68t228  A68_228 ;    /* PROC BITS */
struct A68t229{
A68_INT  Cfile;
A_PAD_INT(PAD_185)
};
typedef struct A68t229  A68_229 ;    /* STRUCT(INT)  */
struct A68t230{
A68_INT  Seedfile;
A_PAD_INT(PAD_186)
};
typedef struct A68t230  A68_230 ;    /* STRUCT(INT)  */
struct A68t231 { A68_INT mode; union {
struct A68t229  mode1;
struct A68t230  mode2;
struct A68t105  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t231  A68_231 ;    /* UNION(MODE229,MODE230,MODE105,VOID)  */
A_ROW(A68_BOOL ,A68t232,1);
typedef struct A68t232  A68_232 ;    /* [] BOOL */
struct A68t233{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_187)
A68_VC  Sourcefile;
struct A68t105  Nameseed;
A_PAD_ISTRUCT(A68_105 ,PAD_188)
struct A68t231  Nameseedorigin;
struct A68t234 * Used_modules;
A68_VC  Commandline;
struct A68t235 * Environment;
};
typedef struct A68t233  A68_233 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE105,MODE231,REF MODE234,REF MODE26,REF MODE235)  */
struct A68t234{
A68_VC  Modinfo_file;
struct A68t234 * Next;
};
typedef struct A68t234  A68_234 ;    /* STRUCT(REF MODE26,REF MODE234)  */
struct A68t235{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t235 * Next;
};
typedef struct A68t235  A68_235 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE235)  */
struct A68t237 ;

A_PROCEDURE(struct A68t59 *,A68t236,(A68_VC ,struct A68t237 *,A68_VC *),(A68_VC ,struct A68t237 *,A68_VC *,void *));
typedef struct A68t236  A68_236 ;    /* PROC(MODE26,REF MODE237,REF REF MODE26) REF MODE59 */
struct A68t237{
A68_VC  Dir;
struct A68t237 * Next;
};
typedef struct A68t237  A68_237 ;    /* STRUCT(REF MODE26,REF MODE237)  */
struct A68t238 { A68_INT mode; union {
struct A68t203  mode1;
struct A68t204  mode2;
struct A68t205  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t238  A68_238 ;    /* UNION(MODE203,MODE204,MODE205)  */
struct A68t239 { A68_INT mode; union {
struct A68t146  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t187  mode4;
struct A68t106  mode5;
struct A68t140  mode6;
struct A68t188  mode7;
struct A68t189  mode8;
struct A68t190  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t239  A68_239 ;    /* UNION(MODE146,INT,BOOL,MODE187,MODE106,MODE140,MODE188,MODE189,MODE190)  */
struct A68t240 { A68_INT mode; union {
struct A68t146  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t187  mode4;
struct A68t106  mode5;
struct A68t140  mode6;
struct A68t188  mode7;
struct A68t189  mode8;
struct A68t190  mode9;
struct A68t191  mode10;
struct A68t192  mode11;
struct A68t193  mode12;
struct A68t154  mode13;
struct A68t194  mode14;
struct A68t195  mode15;
struct A68t196  mode16;
struct A68t197  mode17;
struct A68t198  mode18;
struct A68t199  mode19;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t240  A68_240 ;    /* UNION(MODE146,INT,BOOL,MODE187,MODE106,MODE140,MODE188,MODE189,MODE190,MODE191,MODE192,MODE193,MODE154,MODE194,MODE195,MODE196,MODE197,MODE198,MODE199)  */

A_PROCEDURE(A68_VOID ,A68t241,(struct A68t186 ,A68_VC *),(struct A68t186 ,A68_VC *,void *));
typedef struct A68t241  A68_241 ;    /* PROC(MODE186) MODE26 */
struct A68t242{
A68_INT  Parameters;
A_PAD_INT(PAD_189)
A68_INT  Result;
A_PAD_INT(PAD_190)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_191)
};
typedef struct A68t242  A68_242 ;    /* STRUCT(INT,INT,BOOL)  */
struct A68t243{
A68_INT  Mode;
A_PAD_INT(PAD_192)
A68_INT  Offset;
A_PAD_INT(PAD_193)
struct A68t107  Name;
A_PAD_ISTRUCT(A68_107 ,PAD_194)
};
typedef struct A68t243  A68_243 ;    /* STRUCT(INT,INT,MODE107)  */

A_PROCEDURE(A68_VOID ,A68t244,(A68_INT ,struct A68t92 *),(A68_INT ,struct A68t92 *,void *));
typedef struct A68t244  A68_244 ;    /* PROC(INT) REF MODE92 */

A_PROCEDURE(A68_VOID ,A68t245,(struct A68t243 *,A68_VC *),(struct A68t243 *,A68_VC *,void *));
typedef struct A68t245  A68_245 ;    /* PROC(REF MODE243) MODE26 */
struct A68t247 ;

A_PROCEDURE(A68_VOID ,A68t246,(A68_INT ,A68_VC ,struct A68t247 *),(A68_INT ,A68_VC ,struct A68t247 *,void *));
typedef struct A68t246  A68_246 ;    /* PROC(INT,MODE26) MODE247 */
struct A68t247{
struct A68t105  Name;
A_PAD_ISTRUCT(A68_105 ,PAD_195)
A68_INT  Mode;
A_PAD_INT(PAD_196)
};
typedef struct A68t247  A68_247 ;    /* STRUCT(MODE105,INT)  */
struct A68t249 ;

A_PROCEDURE(A68_VOID ,A68t248,(struct A68t249 ,A68_INT ),(struct A68t249 ,A68_INT ,void *));
typedef struct A68t248  A68_248 ;    /* PROC(REF MODE249,INT) VOID */
A_ROW(struct A68t120 ,A68t249,1);
typedef struct A68t249  A68_249 ;    /* [] MODE120 */

A_PROCEDURE(A68_VOID ,A68t250,(A68_INT ,struct A68t242 *),(A68_INT ,struct A68t242 *,void *));
typedef struct A68t250  A68_250 ;    /* PROC(INT) MODE242 */
struct A68t252 ;

A_PROCEDURE(A68_VOID ,A68t251,(A68_INT ,struct A68t252 *),(A68_INT ,struct A68t252 *,void *));
typedef struct A68t251  A68_251 ;    /* PROC(INT) REF MODE252 */
A_VECTOR(struct A68t243 ,A68t252);
typedef struct A68t252  A68_252 ;    /* VECTOR [] MODE243 */

A_PROCEDURE(A68_INT ,A68t253,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t253  A68_253 ;    /* PROC(INT,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t254,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t254  A68_254 ;    /* PROC(INT,INT) MODE26 */
struct A68t255{
struct A68t107  Name;
A_PAD_ISTRUCT(A68_107 ,PAD_197)
struct A68t126  Ym;
struct A68t105  Ys;
A_PAD_ISTRUCT(A68_105 ,PAD_198)
A68_INT  Level;
A_PAD_INT(PAD_199)
struct A68t256 * Ids;
struct A68t257 * Uses;
struct A68t255 * Rest;
};
typedef struct A68t255  A68_255 ;    /* STRUCT(MODE107,MODE126,MODE105,INT,REF MODE256,REF MODE257,REF MODE255)  */
struct A68t256{
struct A68t107  Name;
A_PAD_ISTRUCT(A68_107 ,PAD_200)
struct A68t105  Uname;
A_PAD_ISTRUCT(A68_105 ,PAD_201)
A68_BOOL  Optimised;
A_PAD_BOOL(PAD_202)
A68_BOOL  Iddec;
A_PAD_BOOL(PAD_203)
A68_BOOL  Globalproc;
A_PAD_BOOL(PAD_204)
A68_BOOL  Genproc;
A_PAD_BOOL(PAD_205)
A68_BOOL  Forceuse;
A_PAD_BOOL(PAD_206)
A68_INT  Mode;
A_PAD_INT(PAD_207)
A68_INT  Decno;
A_PAD_INT(PAD_208)
A68_VC  Definition;
A68_VC  Rhs;
struct A68t256 * Rest;
};
typedef struct A68t256  A68_256 ;    /* STRUCT(MODE107,MODE105,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,REF MODE26,REF MODE26,REF MODE256)  */
struct A68t257{
struct A68t107  Name;
A_PAD_ISTRUCT(A68_107 ,PAD_209)
struct A68t105  Uname;
A_PAD_ISTRUCT(A68_105 ,PAD_210)
struct A68t256 * Ids;
struct A68t257 * Rest;
};
typedef struct A68t257  A68_257 ;    /* STRUCT(MODE107,MODE105,REF MODE256,REF MODE257)  */
struct A68t259{
struct A68t105  L;
A_PAD_ISTRUCT(A68_105 ,PAD_211)
struct A68t105  G;
A_PAD_ISTRUCT(A68_105 ,PAD_212)
};
typedef struct A68t259  A68_259 ;    /* STRUCT(MODE105,MODE105)  */
struct A68t258{
struct A68t105  Uname;
A_PAD_ISTRUCT(A68_105 ,PAD_213)
struct A68t157  Xmi;
struct A68t259  Checkinfo;
};
typedef struct A68t258  A68_258 ;    /* STRUCT(MODE105,MODE157,MODE259)  */

A_PROCEDURE(A68_VOID ,A68t260,(struct A68t167 ),(struct A68t167 ,void *));
typedef struct A68t260  A68_260 ;    /* PROC(MODE167) VOID */

A_PROCEDURE(A68_VOID ,A68t261,(struct A68t162 ,A68_INT ),(struct A68t162 ,A68_INT ,void *));
typedef struct A68t261  A68_261 ;    /* PROC(MODE162,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t262,(struct A68t123 ),(struct A68t123 ,void *));
typedef struct A68t262  A68_262 ;    /* PROC(MODE123) VOID */
A_ROW(struct A68t255 *,A68t263,1);
typedef struct A68t263  A68_263 ;    /* [] REF MODE255 */

A_PROCEDURE(A68_VOID ,A68t264,(struct A68t157 ),(struct A68t157 ,void *));
typedef struct A68t264  A68_264 ;    /* PROC(MODE157) VOID */

A_PROCEDURE(A68_VOID ,A68t265,(struct A68t129 ),(struct A68t129 ,void *));
typedef struct A68t265  A68_265 ;    /* PROC(MODE129) VOID */
A_ROW(struct A68t128 ,A68t266,1);
typedef struct A68t266  A68_266 ;    /* [] MODE128 */

A_PROCEDURE(A68_BOOL ,A68t267,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t267  A68_267 ;    /* PROC(INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t268,(struct A68t231 ),(struct A68t231 ,void *));
typedef struct A68t268  A68_268 ;    /* PROC(MODE231) VOID */

A_PROCEDURE(struct A68t105 ,A68t269,(void),(void *));
typedef struct A68t269  A68_269 ;    /* PROC MODE105 */

A_PROCEDURE(A68_VOID ,A68t270,(struct A68t105 ),(struct A68t105 ,void *));
typedef struct A68t270  A68_270 ;    /* PROC(MODE105) VOID */

A_PROCEDURE(A68_VOID ,A68t271,(struct A68t231 ,A68_VC *),(struct A68t231 ,A68_VC *,void *));
typedef struct A68t271  A68_271 ;    /* PROC(MODE231) MODE26 */

A_PROCEDURE(A68_VOID ,A68t272,(struct A68t95 ),(struct A68t95 ,void *));
typedef struct A68t272  A68_272 ;    /* PROC(MODE95) VOID */

A_PROCEDURE(A68_VOID ,A68t273,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t273  A68_273 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,52,A68t274);
typedef struct A68t274  A68_274 ;    /* STRUCT 52 CHAR */
A_VECTOR(A68_VC ,A68t276);
typedef struct A68t276  A68_276 ;    /* VECTOR [] REF MODE26 */
struct A68t275{
A68_VC  Streambuffer;
A68_INT  Streamptr;
A_PAD_INT(PAD_214)
struct A68t276  Buffers;
A68_INT  Currentbuffer;
A_PAD_INT(PAD_215)
};
typedef struct A68t275  A68_275 ;    /* STRUCT(REF MODE26,INT,REF MODE276,INT)  */

A_PROCEDURE(A68_VOID ,A68t277,(A68_BOOL ,struct A68t276 *),(A68_BOOL ,struct A68t276 *,void *));
typedef struct A68t277  A68_277 ;    /* PROC(BOOL) MODE276 */
A_ISTRUCT(struct A68t275 ,20,A68t278);
typedef struct A68t278  A68_278 ;    /* STRUCT 20 MODE275 */
A_ROW(struct A68t275 ,A68t279,1);
typedef struct A68t279  A68_279 ;    /* [] MODE275 */
A_VECTOR(struct A68t275 ,A68t280);
typedef struct A68t280  A68_280 ;    /* VECTOR [] MODE275 */
A_ISTRUCT(A68_CHAR ,11,A68t281);
typedef struct A68t281  A68_281 ;    /* STRUCT 11 CHAR */
#define A68_282  A68_VC 
#define A68t282 A68t26            /* FLEX VECTOR [] CHAR */

A_PROCEDURE(A68_VOID ,A68t283,(A68_BOOL ,struct A68t181 *),(A68_BOOL ,struct A68t181 *,void *));
typedef struct A68t283  A68_283 ;    /* PROC(BOOL) MODE181 */
A_ISTRUCT(struct A68t182 ,128,A68t284);
typedef struct A68t284  A68_284 ;    /* STRUCT 128 MODE182 */
A_ISTRUCT(A68_CHAR ,31,A68t285);
typedef struct A68t285  A68_285 ;    /* STRUCT 31 CHAR */

A_PROCEDURE(A68_VOID ,A68t286,(A68_VC ),(A68_VC ,void *));
typedef struct A68t286  A68_286 ;    /* PROC(REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t287,(A68_INT ,struct A68t185 ),(A68_INT ,struct A68t185 ,void *));
typedef struct A68t287  A68_287 ;    /* PROC(INT,MODE185) VOID */
A_ISTRUCT(A68_INT ,3,A68t288);
typedef struct A68t288  A68_288 ;    /* STRUCT 3 INT */

A_PROCEDURE(A68_VOID ,A68t289,(A68_BOOL ,struct A68t279 *),(A68_BOOL ,struct A68t279 *,void *));
typedef struct A68t289  A68_289 ;    /* PROC(BOOL) MODE279 */
A_ISTRUCT(A68_INT ,2,A68t290);
typedef struct A68t290  A68_290 ;    /* STRUCT 2 INT */
A_ISTRUCT(A68_INT ,4,A68t291);
typedef struct A68t291  A68_291 ;    /* STRUCT 4 INT */

A_PROCEDURE(A68_VOID ,A68t292,(A68_BOOL ,struct A68t185 *),(A68_BOOL ,struct A68t185 *,void *));
typedef struct A68t292  A68_292 ;    /* PROC(BOOL) MODE185 */
A_ISTRUCT(A68_CHAR ,160,A68t293);
typedef struct A68t293  A68_293 ;    /* STRUCT 160 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t294);
typedef struct A68t294  A68_294 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t295);
typedef struct A68t295  A68_295 ;    /* STRUCT 24 CHAR */

A_PROCEDURE(A68_VOID ,A68t296,(A68_VC *),(A68_VC *,void *));
typedef struct A68t296  A68_296 ;    /* PROC REF MODE26 */
A_ISTRUCT(A68_CHAR ,5,A68t297);
typedef struct A68t297  A68_297 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t298);
typedef struct A68t298  A68_298 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t299);
typedef struct A68t299  A68_299 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t300);
typedef struct A68t300  A68_300 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(struct A68t212 ,4,A68t301);
typedef struct A68t301  A68_301 ;    /* STRUCT 4 MODE212 */
A_ISTRUCT(A68_CHAR ,21,A68t302);
typedef struct A68t302  A68_302 ;    /* STRUCT 21 CHAR */

A_PROCEDURE(A68_VOID ,A68t303,(A68_BOOL ,struct A68t206 *),(A68_BOOL ,struct A68t206 *,void *));
typedef struct A68t303  A68_303 ;    /* PROC(BOOL) MODE206 */
A_ISTRUCT(A68_CHAR ,29,A68t304);
typedef struct A68t304  A68_304 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(struct A68t212 ,2,A68t305);
typedef struct A68t305  A68_305 ;    /* STRUCT 2 MODE212 */
A_ISTRUCT(A68_CHAR ,25,A68t306);
typedef struct A68t306  A68_306 ;    /* STRUCT 25 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from uniquenameserver --- */
extern A68_268  SKMACTR_initialiseuniquenameserver;
extern A68_VOID  SMMACTR_closedownuniquenameserver(void);
extern A68_VOID  GKMACTR_write_cfile_uname(struct A68t105 );
/* --- End of imports from uniquenameserver --- */


/* --- Imports from moduletracer --- */
extern A68_INT  ZCHACTR_tracelevel(A68_VC );
/* --- End of imports from moduletracer --- */


/* --- Imports from modules --- */
extern A68_VOID  JEPACTR_adddecsmodule(struct A68t162 ,A68_INT );
extern A68_VOID  OFPACTR_addexternalid(struct A68t123 );
extern A68_BOOL  KOOACTR_composition;
extern A68_VOID  VSPACTR_declareusedids(void);
extern A68_VOID  NBPACTR_givemoduledetails(struct A68t107 ,A68_INT ,A68_BOOL ,A68_158 *);
extern A68_VOID  SOOACTR_givespec(struct A68t107 ,struct A68t107 ,struct A68t126 ,A68_159 *);
extern A68_VOID  TCPACTR_initialisecurrentmodule(struct A68t157 );
extern A68_VOID  BEPACTR_initialisespec(struct A68t129 );
extern A68_185  ICPACTR_keptdecnos;
/* --- End of imports from modules --- */


/* --- Imports from modes --- */
extern A68_VOID  SDOACTR_initialisemodetable(struct A68t249 ,A68_INT );
/* --- End of imports from modes --- */


/* --- Imports from mnemonics --- */
extern A68_VOID  SCXACTR_imperativemnemonic(struct A68t186 ,A68_VC *);
/* --- End of imports from mnemonics --- */


/* --- Imports from lookup --- */
extern A68_INT  SOKACTR_lookup(A68_VC ,A68_BOOL );
extern A68_INT  HPKACTR_optboollookup(A68_VC ,A68_BOOL );
/* --- End of imports from lookup --- */


/* --- Imports from incoperfn --- */
#define LGAACTR_voidfn 19
#define PGAACTR_generatorfn 50
/* --- End of imports from incoperfn --- */


/* --- Imports from incmode --- */
#define UEAACTR_voidmode 5
/* --- End of imports from incmode --- */


/* --- Imports from incinstallation --- */
/* --- End of imports from incinstallation --- */


/* --- Imports from incimperatives --- */
#define ZAAACTR_emptyfn 1
#define BBAACTR_nilfn 3
#define ICAACTR_optboolfn 9
#define WBAACTR_semifn 11
#define ABAACTR_skipfn 2
/* --- End of imports from incimperatives --- */


/* --- Imports from incid --- */
#define HAAACTR_minidno 3
/* --- End of imports from incid --- */


/* --- Imports from environment --- */
extern A68_VOID  WXIACTR_assert(A68_VC ,A68_BOOL );
extern A68_VOID  NTIACTR_abort(void);
extern A68_VC  YQIACTR_basenamesourcefile;
extern A68_BOOL  CQIACTR_dotoption;
extern A68_VOID  PXIACTR_error(A68_INT );
extern A68_VOID  EXIACTR_fault(A68_VC ,A68_INT );
extern A68_VOID  RSIACTR_finishmessage(void);
extern A68_INT  DSIACTR_greatestseverity;
extern A68_INT  XRIACTR_linenumber;
extern A68_VOID  KDHACTR_message(A68_INT ,A68_VC *);
extern A68_BOOL  BQIACTR_lineoption;
extern A68_BOOL  IQIACTR_optbooloption;
extern A68_BOOL  DQIACTR_quoteoption;
extern A68_VOID  JYIACTR_setparams(void);
extern A68_VC  XQIACTR_sourcefilename;
extern A68_BOOL  GQIACTR_streamoption;
extern A68_BOOL  HQIACTR_streamoutoption;
extern A68_VOID  SXIACTR_terminalerror(A68_INT );
extern A68_BOOL  FQIACTR_tildeoption;
extern A68_231  QRIACTR_uname_option;
extern A68_98  MSIACTR_list;
extern A68_VOID  ISIACTR_typelineonterminal(A68_VC );
extern A68_232  KRIACTR_stars;
extern A68_233  IYIACTR_config_info;
/* --- End of imports from environment --- */


/* --- Imports from environ --- */
#define ESLACTR_preamblestream 0
#define GSLACTR_importsstream 2
#define FSLACTR_modesstream 1
#define HSLACTR_externstream 3
extern A68_INT  KSLACTR_nonlocdecstream(A68_INT );
extern A68_INT  NSLACTR_codestream(A68_INT );
extern A68_INT  VRLACTR_currentlevel(void);
extern A68_INT  PPLACTR_highestlevel;
/* --- End of imports from environ --- */


/* --- Imports from denotations --- */
extern A68_VOID  GNJACTR_convertradixstring(A68_VC ,A68_INT ,A68_VC *);
extern A68_VOID  DRJACTR_replacecontrolchars(A68_VC ,A68_VC *);
/* --- End of imports from denotations --- */


/* --- Imports from coutput --- */
extern A68_VOID  NULACTR_initcoutput(A68_VC );
extern A68_VOID  SDMACTR_closecoutput(void);
extern A68_VOID  MDMACTR_writecstream(struct A68t211 ,A68_INT );
extern A68_95  GULACTR_purgeoutputfiles;
/* --- End of imports from coutput --- */


/* --- Imports from compiler --- */
extern A68_VOID  ODBBCTR_translator(struct A68t184 ,struct A68t156 *,struct A68t185 );
/* --- End of imports from compiler --- */


/* --- Imports from rscompiler --- */
extern A68_BOOL  URAACTR_compile(struct A68t174 ,struct A68t175 ,struct A68t176 ,struct A68t177 ,struct A68t178 ,struct A68t179 ,struct A68t180 ,struct A68t181 );
/* --- End of imports from rscompiler --- */


/* --- Imports from centities --- */
extern A68_SINT  EIAACTR_cnewline;
/* --- End of imports from centities --- */


/* --- Imports from osif --- */
#include <errno.h>

#define RCBAOSF_errno errno
extern A68_54  RIBAOSF_ignore_msg;
#define GVBAOSF_newline_char '\012'
extern A68_BOOL  AVBAOSF_(struct A68t60 ,struct A68t60 );
extern A68_60  RUBAOSF_io_eof;
extern A68_60  UUBAOSF_io_error;
extern A68_60  XUBAOSF_io_no_newline;
extern A68_59 * QVBAOSF_open_file(A68_VC ,struct A68t62 ,struct A68t54 );
extern A68_VOID  IWBAOSF_close_file(struct A68t59 *,struct A68t54 );
extern A68_VOID  DXBAOSF_read_line(struct A68t59 *,A68_VC ,A68_INT *,struct A68t54 ,A68_60 *);
extern A68_62  ATBAOSF_read_access;
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
extern A68_INT  PLAAOSF_max(A68_INT ,A68_INT );
extern A68_INT  GOAAOSF_stringvalue(A68_VC );
extern A68_INT  KMAAOSF_truncate(A68_CHAR ,A68_VC );
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void RHMACTR(void);   /* uniquenameserver */
extern void BCHACTR(void);   /* moduletracer */
extern void ANOACTR(void);   /* modules */
extern void DNMACTR(void);   /* modes */
extern void QYWACTR(void);   /* mnemonics */
extern void TTJACTR(void);   /* lookup */
extern void XFAACTR(void);   /* incoperfn */
extern void ZDAACTR(void);   /* incmode */
extern void ODAACTR(void);   /* incinstallation */
extern void UAAACTR(void);   /* incimperatives */
extern void BAAACTR(void);   /* incid */
extern void HPIACTR(void);   /* environment */
extern void BPLACTR(void);   /* environ */
extern void LLJACTR(void);   /* denotations */
extern void PTLACTR(void);   /* coutput */
extern void GDBBCTR(void);   /* compiler */
extern void ZJAACTR(void);   /* rscompiler */
extern void THAACTR(void);   /* centities */
extern void CSCAOSF(void);   /* osif */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_274   JYBBCTR = {"$Id: a68toc.a68,v 1.2 2002-02-04 09:26:51 sian Exp $"}; 
A_GISVEC(A68_VC ,KYBBCTR,JYBBCTR,52)
static A68_156  MYBBCTR_xsizes A_UNUSED;
static A68_275  UYBBCTR_unsetstream A_UNUSED;
static A68_278  VYBBCTR_streams_area A_UNUSED;
static A68_279  WYBBCTR_streams A_UNUSED;
static A68_275  AZBBCTR_current A_UNUSED;
#define BZBBCTR_fixedstreams 1
static A68_275 * CZBBCTR_stream A_UNUSED;
static A68_275 * TZBBCTR_stream A_UNUSED;
static A68_VC * XZBBCTR_streambuffer A_UNUSED;
static A68_INT * YZBBCTR_strptr A_UNUSED;
static A68_INT * ZZBBCTR_currentbuffer A_UNUSED;
static A68_276 * AACBCTR_buffers A_UNUSED;
static A68_275 * BACBCTR_curstradd A_UNUSED;
#define BBCBCTR_separatorbase 16
#define CBCBCTR_terminatorbase 32
#define DBCBCTR_semibase 48
#define EBCBCTR_loadbase 64
#define FBCBCTR_idbase 80
#define GBCBCTR_numberbase 90
#define HBCBCTR_operbase 128
#define IBCBCTR_miscellaneousbase 192
#define JBCBCTR_warnbase 208
#define KBCBCTR_iddecbase 224
#define LBCBCTR_starterbase 240
#define MBCBCTR_rangesize 64
#define NBCBCTR_subrangesize 16
#define OBCBCTR_linetype 10
#define PBCBCTR_maptype 11
#define QBCBCTR_notlastxcharstype 112
#define RBCBCTR_lastxcharstype 113
#define SBCBCTR_xcallmoduletype 200
#define TBCBCTR_xclosuretype 203
#define UBCBCTR_xtmoduletype 204
static A68_59 * VBCBCTR_inputfile A_UNUSED;
static A68_INT  WBCBCTR_line_start A_UNUSED;
static A68_INT  XBCBCTR_line_length A_UNUSED;
static A68_BOOL  YBCBCTR_line_pending A_UNUSED;
static A68_282  DCCBCTR_flexinputline A_UNUSED;
static A68_181  ZCCBCTR_charset A_UNUSED;
static A68_182 * IDCBCTR_c A_UNUSED;
static A68_INT  WDCBCTR_i A_UNUSED;
static A68_285   DECBCTR = {"\0\361\362\363\364\021\022\023\024\025\026\027\030\031!\"#$\365\032\366\035%\367&\033\0'\301\034("}; 
A_GISVEC(A68_VC ,EECBCTR,DECBCTR,31)
static A68_VC  FECBCTR_contval A_UNUSED;
static A68_BOOL  GECBCTR_upped A_UNUSED;
static A68_162  HECBCTR_lastxtmodule A_UNUSED;
static A68_BOOL  IECBCTR_xtmodulepending A_UNUSED;
static A68_BOOL  JECBCTR_timeschecked A_UNUSED;
static A68_INT  KECBCTR_syntheticmoduleno A_UNUSED;
static A68_293  ULCBCTR_wasteline A_UNUSED;
static A68_INT  VLCBCTR_wastesize A_UNUSED;
static A68_BOOL  YLCBCTR_printstream A_UNUSED;
static A68_INT  ZLCBCTR_level A_UNUSED;
static A68_INT  AMCBCTR_s A_UNUSED;
static A68_275 * BMCBCTR_stream A_UNUSED;
static A68_INT * GMCBCTR_streamptr A_UNUSED;
static A68_INT * HMCBCTR_currentbuffer A_UNUSED;
static A68_VC * IMCBCTR_streambuffer A_UNUSED;
static A68_276 * JMCBCTR_buffers A_UNUSED;
static A68_INT  NMCBCTR_bytesused A_UNUSED;
static A68_VC * OMCBCTR_b A_UNUSED;
static A68_294   QMCBCTR = {" bytes used in stream "}; 
A_GISVEC(A68_VC ,SMCBCTR,QMCBCTR,22)
static A68_INT  VMCBCTR_upbstring A_UNUSED;
static A68_VC  WMCBCTR_string A_UNUSED;
static A68_295   YMCBCTR = {"SHELL: incomplete stream"}; 
A_GISVEC(A68_VC ,ZMCBCTR,YMCBCTR,24)
static A68_86  JNCBCTR_next A_UNUSED;
static A68_INT  PNCBCTR_line_start A_UNUSED;
static A68_INT  QNCBCTR_line_length A_UNUSED;
static A68_INT  RNCBCTR_statement_number A_UNUSED;
static A68_INT  SNCBCTR_hundred_counter A_UNUSED;
static A68_297   ZNCBCTR = {"shell"}; 
A_GISVEC(A68_VC ,AOCBCTR,ZNCBCTR,5)
static A68_298   COCBCTR = {"At line "}; 
static A68_299   DOCBCTR = {"..."}; 
A_GISVEC(A68_VC ,EOCBCTR,COCBCTR,8)
A_GISVEC(A68_VC ,GOCBCTR,DOCBCTR,3)
static A68_300   KOCBCTR = {" /* line "}; 
A_GISVEC(A68_VC ,LOCBCTR,KOCBCTR,9)
static A68_40   QOCBCTR = {": */"}; 
A_GISVEC(A68_VC ,ROCBCTR,QOCBCTR,4)
static A68_295   APCBCTR = {"invalid stream directive"}; 
A_GISVEC(A68_VC ,BPCBCTR,APCBCTR,24)
static A68_302   UQCBCTR = {"SHELL: no last xchars"}; 
A_GISVEC(A68_VC ,VQCBCTR,UQCBCTR,21)
static A68_297   ARCBCTR = {"]    "}; 
A_GISVEC(A68_VC ,DRCBCTR,ARCBCTR,5)
static A68_107   PVCBCTR = {"chars should be absorbed by load"}; 
A_GISVEC(A68_VC ,QVCBCTR,PVCBCTR,32)
static A68_304   RYCBCTR = {"#include <algol68/Asupport.h>"}; 
A_GISVEC(A68_VC ,SYCBCTR,RYCBCTR,29)
static A68_306   YYCBCTR = {"/* end of translation of "}; 
A_GISVEC(A68_VC ,ZYCBCTR,YYCBCTR,25)
static A68_299   DZCBCTR = {" */"}; 
A_GISVEC(A68_VC ,EZCBCTR,DZCBCTR,3)
static A68_INT  VZCBCTR_level A_UNUSED;
typedef struct   /* env of non-global proc */
{
A68_INT  GACBCTR_upbbuffers;
A_PAD_INT(PAD_216)
} KACBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  FACBCTR_size;
A_PAD_INT(PAD_217)
} UACBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  Ll;
A_PAD_INT(PAD_218)
} XECBCTR_outprep;
typedef struct   /* env of non-global proc */
{
A68_222  VECBCTR_outprep;
} OFCBCTR_putints;
typedef struct   /* env of non-global proc */
{
A68_222  VECBCTR_outprep;
} EGCBCTR_putint;
typedef struct   /* env of non-global proc */
{
A68_222  VECBCTR_outprep;
} QGCBCTR_putchars;
typedef struct   /* env of non-global proc */
{
A68_222  VECBCTR_outprep;
} XGCBCTR_puttruncatedchars;
typedef struct   /* env of non-global proc */
{
A68_INT  IHCBCTR_upbstreams;
A_PAD_INT(PAD_219)
} MHCBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_169  ZKCBCTR_xbu;
} DLCBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * IPCBCTR_resultsize;
} MPCBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  EQCBCTR_newresultsize;
A_PAD_INT(PAD_220)
} IQCBCTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} MWCBCTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} AXCBCTR_generator;

A_STATIC A68_VOID  QYBBCTR_generator(A68_BOOL  PYBBCTR_anonymous, A68_276  *ReturnedValue);

A_STATIC A68_VOID  HZBBCTR_generator(A68_BOOL  GZBBCTR_anonymous, A68_276  *ReturnedValue);

A_STATIC A68_VOID  DACBCTR_extendcurrent(void);

A_STATIC A68_VOID  JACBCTR_generator(A68_BOOL  HACBCTR_anonymous, A68_276  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  TACBCTR_generator(A68_BOOL  RACBCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ACCBCTR_generator(A68_BOOL  ZBCBCTR_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_BOOL  HCCBCTR_input(A68_VC  Line, A68_INT * Size);

A_STATIC A68_VOID  WCCBCTR_generator(A68_BOOL  VCCBCTR_anonymous, A68_181  *ReturnedValue);

A_STATIC A68_VOID  NECBCTR_output(A68_171  Op, A68_INT  Ll);

A_STATIC A68_VOID  QECBCTR_invert(A68_VC  String);

A_STATIC A68_VOID  WECBCTR_outprep(A68_INT  Size, A68_INT  Type, void *NonLocals);

A_STATIC A68_VOID  NFCBCTR_putints(A68_INT  K, A68_185  A, void *NonLocals);

A_STATIC A68_VOID  DGCBCTR_putint(A68_INT  Type, A68_INT  I, void *NonLocals);

A_STATIC A68_VOID  PGCBCTR_putchars(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  WGCBCTR_puttruncatedchars(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  LHCBCTR_generator(A68_BOOL  JHCBCTR_anonymous, A68_279  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CLCBCTR_generator(A68_BOOL  ALCBCTR_anonymous, A68_185  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XMCBCTR_positioncurrent(void);

A_STATIC A68_INT  ANCBCTR_nextbyte(void);

A_STATIC A68_INT  DNCBCTR_nextint(void);

A_STATIC A68_VOID  LNCBCTR_nextstring(A68_VC  *ReturnedValue);

A_STATIC A68_INT  TNCBCTR_nexttype(void);

A_STATIC A68_VOID  FPCBCTR_nextxchars(A68_INT  Suggestedsize, A68_INT  Insertion, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  LPCBCTR_generator(A68_BOOL  JPCBCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HQCBCTR_generator(A68_BOOL  FQCBCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  YQCBCTR_nextstreamimperative(A68_186  *ReturnedValue);

A_STATIC A68_VOID  LWCBCTR_generator(A68_BOOL  JWCBCTR_anonymous, A68_185  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZWCBCTR_generator(A68_BOOL  XWCBCTR_anonymous, A68_206  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JACBCTR_generator(A68_BOOL  HACBCTR_anonymous, A68_276  *ReturnedValue, void *NonLocals)
#define NL(x) (((KACBCTR_generator *)NonLocals)->x)
{ 
A68_276  LACBCTR;  /* clause result */
A68_276  MACBCTR;  /* OPERATORS - dynamic generator */
{ 
MACBCTR.upb = (NL(GACBCTR_upbbuffers)+1) ;
( HACBCTR_anonymous? A_VLOC(A68_VC ,MACBCTR): A_VHEAP(A68_VC ,MACBCTR) );
LACBCTR = MACBCTR;
} 
*ReturnedValue = (LACBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  TACBCTR_generator(A68_BOOL  RACBCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((UACBCTR_generator *)NonLocals)->x)
{ 
A68_VC  VACBCTR;  /* clause result */
A68_VC  WACBCTR;  /* OPERATORS - dynamic generator */
{ 
WACBCTR.upb = NL(FACBCTR_size) ;
( RACBCTR_anonymous? A_VLOC(A68_CHAR ,WACBCTR): A_VHEAP(A68_CHAR ,WACBCTR) );
VACBCTR = WACBCTR;
} 
*ReturnedValue = (VACBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  QECBCTR_invert(A68_VC  String)
{ 
A68_CHAR * RECBCTR_c A_UNUSED = {0};
A68_INT  SECBCTR;  /* forall loop counter */
A_PROC_ENTRY(invert);
 /* line 270: */
 /* line 271: */
SECBCTR = String.upb -1;
RECBCTR_c = String.data;
for (;SECBCTR-- >= 0;
(RECBCTR_c++
) )
{
 /* line 272: */
 /* line 273: */
if (((*RECBCTR_c)>='a')&((*RECBCTR_c)<='z'))
{ 
 /* line 274: */
(void)((*RECBCTR_c) = (A68_SSBITS)(((A68_INT)(unsigned char)(*RECBCTR_c)-(A68_INT)(unsigned char)'a')+(A68_INT)(unsigned char)'A'));
} 
else
{ 
 /* line 275: */
if (((*RECBCTR_c)>='A')&((*RECBCTR_c)<='Z'))
{ 
 /* line 276: */
 /* line 277: */
(void)((*RECBCTR_c) = (A68_SSBITS)(((A68_INT)(unsigned char)(*RECBCTR_c)-(A68_INT)(unsigned char)'A')+(A68_INT)(unsigned char)'a'));
} 
} 
}
A_PROC_EXIT(invert);
return;
} 
#undef NL

A_STATIC A68_VOID  WECBCTR_outprep(A68_INT  Size, A68_INT  Type, void *NonLocals)
#define NL(x) (((XECBCTR_outprep *)NonLocals)->x)
{ 
A68_VC  YECBCTR;  /* OPERATORS - nil -> mode */
A68_VC  ZECBCTR;  /* == */
A68_VC  AFCBCTR;  /* OPERATORS - trim index */
A68_VC  BFCBCTR;  /* OPERATORS - trim index */
A68_VC * CFCBCTR;  /* YIELD */
A68_VC  DFCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  EFCBCTR;  /* avoid structure result */
A68_VC  FFCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  GFCBCTR;  /* avoid structure result */
A68_VC  HFCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  IFCBCTR;  /* YIELD */
A68_CHAR * JFCBCTR;  /* YIELD */
A_PROC_ENTRY(outprep);
 /* line 288: */
 /* line 289: */
{ 
 /* line 290: */
 /* line 292: */
ZECBCTR = A_VVAC(YECBCTR) ;
if (A_VSTRUCTCOMP((*XZBBCTR_streambuffer),ZECBCTR))
{ 
(void)(DACBCTR_extendcurrent());
} 
else
{ 
 /* line 293: */
 /* line 294: */
if ((Size+(*YZBBCTR_strptr))>(*XZBBCTR_streambuffer).upb)
{ 
 /* line 295: */
AFCBCTR = (*(&A_VINDEX((*AACBCTR_buffers),(*ZZBBCTR_currentbuffer)))) ;
CFCBCTR = (&A_VINDEX((*AACBCTR_buffers),(*ZZBBCTR_currentbuffer))) ;
(void)((*CFCBCTR) = A_VTRIM(BFCBCTR,(AFCBCTR),A_VTSCRIPT(&(BFCBCTR.upb),(AFCBCTR).upb,1,(*YZBBCTR_strptr))));
 /* line 296: */
 /* line 297: */
(void)(DACBCTR_extendcurrent());
} 
} 
 /* line 299: */
 /* line 300: */
 /* line 301: */
if (HQIACTR_streamoutoption)
{ 
 /* line 302: */
ROAAOSF_whole( Type, 0, &EFCBCTR );
ROAAOSF_whole( NL(Ll), 0, &GFCBCTR );
(void)(A_CALLPROC(MSIACTR_list,(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_HVEC(DFCBCTR,'%',A68_CHAR ),EFCBCTR),A_HVEC(FFCBCTR,'(',A68_CHAR )),GFCBCTR),A_HVEC(HFCBCTR,')',A68_CHAR ))),(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_HVEC(DFCBCTR,'%',A68_CHAR ),EFCBCTR),A_HVEC(FFCBCTR,'(',A68_CHAR )),GFCBCTR),A_HVEC(HFCBCTR,')',A68_CHAR )),(MSIACTR_list).nonlocals)));
} 
 /* line 304: */
 /* line 305: */
IFCBCTR = (*YZBBCTR_strptr)+=1 ;
JFCBCTR = (&A_VINDEX((*XZBBCTR_streambuffer),IFCBCTR)) ;
(*JFCBCTR) = (A68_SSBITS)Type;
} 
A_PROC_EXIT(outprep);
return;
} 
#undef NL

A_STATIC A68_VOID  NFCBCTR_putints(A68_INT  K, A68_185  A, void *NonLocals)
#define NL(x) (((OFCBCTR_putints *)NonLocals)->x)
{ 
A68_INT  PFCBCTR_v A_UNUSED = {0};
A68_INT * QFCBCTR;  /* forall control - []x */
A68_INT  RFCBCTR;  /* forall loop counter */
A68_VC  SFCBCTR;  /* OPERATORS - trim index */
A68_VC  TFCBCTR;  /* OPERATORS - trim index */
A68_VC  UFCBCTR;  /* OPERATORS - trim index */
union {  /* BIOP 99 */
A68_INT   source;
A68_40   destination;
} VFCBCTR; 
A68_VC  WFCBCTR;  /* OPERATORS - istruct -> vector */
A68_40  XFCBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  YFCBCTR;  /* YIELD */
A68_VC  ZFCBCTR;  /* OPERATORS - assign op */
A_PROC_ENTRY(putints);
 /* line 321: */
 /* line 322: */
{ 
(void)(A_CALLPROC(NL(VECBCTR_outprep),(((4*A.dim[0].upb)+1), K),(((4*A.dim[0].upb)+1), K,(NL(VECBCTR_outprep)).nonlocals)));
 /* line 323: */
 /* line 324: */
RFCBCTR = A.dim[0].upb - A.dim[0].lwb;
QFCBCTR = A.data;
for (;RFCBCTR-- >= 0;
(QFCBCTR += A.dim[0].stride
) )
{
PFCBCTR_v = *QFCBCTR;
TFCBCTR = A_VTRIM(SFCBCTR,((*XZBBCTR_streambuffer)),A_VTSCRIPT(&(SFCBCTR.upb),((*XZBBCTR_streambuffer)).upb,((*YZBBCTR_strptr)+1),((*XZBBCTR_streambuffer)).upb)) ;
VFCBCTR.source = PFCBCTR_v ;
XFCBCTR = (VFCBCTR.destination) ;
YFCBCTR = A_VTRIM(UFCBCTR,(TFCBCTR),A_VTSCRIPT(&(UFCBCTR.upb),(TFCBCTR).upb,1,4)) ;
ZFCBCTR = A_HISVEC(WFCBCTR,XFCBCTR,4,A68_CHAR ) ;
(void)(A_VASSIGN2(ZFCBCTR,YFCBCTR,A68_CHAR ));
 /* line 325: */
 /* line 326: */
(*YZBBCTR_strptr)+=4;
}
 /* line 327: */
} 
A_PROC_EXIT(putints);
return;
} 
#undef NL

A_STATIC A68_VOID  DGCBCTR_putint(A68_INT  Type, A68_INT  I, void *NonLocals)
#define NL(x) (((EGCBCTR_putint *)NonLocals)->x)
{ 
A68_VC  FGCBCTR;  /* OPERATORS - trim index */
A68_VC  GGCBCTR;  /* OPERATORS - trim index */
A68_VC  HGCBCTR;  /* OPERATORS - trim index */
union {  /* BIOP 99 */
A68_INT   source;
A68_40   destination;
} IGCBCTR; 
A68_VC  JGCBCTR;  /* OPERATORS - istruct -> vector */
A68_40  KGCBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  LGCBCTR;  /* YIELD */
A68_VC  MGCBCTR;  /* OPERATORS - assign op */
A_PROC_ENTRY(putint);
 /* line 330: */
 /* line 331: */
{ 
(void)(A_CALLPROC(NL(VECBCTR_outprep),(5, Type),(5, Type,(NL(VECBCTR_outprep)).nonlocals)));
 /* line 332: */
GGCBCTR = A_VTRIM(FGCBCTR,((*XZBBCTR_streambuffer)),A_VTSCRIPT(&(FGCBCTR.upb),((*XZBBCTR_streambuffer)).upb,((*YZBBCTR_strptr)+1),((*XZBBCTR_streambuffer)).upb)) ;
IGCBCTR.source = I ;
KGCBCTR = (IGCBCTR.destination) ;
LGCBCTR = A_VTRIM(HGCBCTR,(GGCBCTR),A_VTSCRIPT(&(HGCBCTR.upb),(GGCBCTR).upb,1,4)) ;
MGCBCTR = A_HISVEC(JGCBCTR,KGCBCTR,4,A68_CHAR ) ;
(void)(A_VASSIGN2(MGCBCTR,LGCBCTR,A68_CHAR ));
 /* line 333: */
 /* line 334: */
(*YZBBCTR_strptr)+=4;
} 
A_PROC_EXIT(putint);
return;
} 
#undef NL

A_STATIC A68_VOID  PGCBCTR_putchars(A68_VC  S, void *NonLocals)
#define NL(x) (((QGCBCTR_putchars *)NonLocals)->x)
{ 
A68_INT  RGCBCTR_up A_UNUSED = {0};
A68_VC  SGCBCTR;  /* OPERATORS - trim index */
A68_VC  TGCBCTR;  /* YIELD */
A_PROC_ENTRY(putchars);
 /* line 337: */
{ 
RGCBCTR_up = S.upb;
 /* line 338: */
(void)(A_CALLPROC(NL(VECBCTR_outprep),((RGCBCTR_up+1), RGCBCTR_up),((RGCBCTR_up+1), RGCBCTR_up,(NL(VECBCTR_outprep)).nonlocals)));
 /* line 339: */
TGCBCTR = A_VTRIM(SGCBCTR,((*XZBBCTR_streambuffer)),A_VTSCRIPT(&(SGCBCTR.upb),((*XZBBCTR_streambuffer)).upb,((*YZBBCTR_strptr)+1),((*YZBBCTR_strptr)+RGCBCTR_up))) ;
(void)(A_VASSIGN2(S,TGCBCTR,A68_CHAR ));
 /* line 340: */
 /* line 341: */
(*YZBBCTR_strptr)+=RGCBCTR_up;
} 
A_PROC_EXIT(putchars);
return;
} 
#undef NL

A_STATIC A68_VOID  WGCBCTR_puttruncatedchars(A68_VC  S, void *NonLocals)
#define NL(x) (((XGCBCTR_puttruncatedchars *)NonLocals)->x)
{ 
A68_INT  YGCBCTR_up A_UNUSED = {0};
A68_VC  ZGCBCTR;  /* OPERATORS - trim index */
A68_VC  AHCBCTR;  /* OPERATORS - trim index */
A68_VC  BHCBCTR;  /* YIELD */
A68_VC  CHCBCTR;  /* OPERATORS - assign op */
A_PROC_ENTRY(puttruncatedchars);
 /* line 344: */
{ 
YGCBCTR_up = KMAAOSF_truncate(' ', S);
 /* line 345: */
(void)(A_CALLPROC(NL(VECBCTR_outprep),((YGCBCTR_up+1), YGCBCTR_up),((YGCBCTR_up+1), YGCBCTR_up,(NL(VECBCTR_outprep)).nonlocals)));
 /* line 346: */
BHCBCTR = A_VTRIM(ZGCBCTR,((*XZBBCTR_streambuffer)),A_VTSCRIPT(&(ZGCBCTR.upb),((*XZBBCTR_streambuffer)).upb,((*YZBBCTR_strptr)+1),((*YZBBCTR_strptr)+YGCBCTR_up))) ;
CHCBCTR = A_VTRIM(AHCBCTR,(S),A_VTSCRIPT(&(AHCBCTR.upb),(S).upb,1,YGCBCTR_up)) ;
(void)(A_VASSIGN2(CHCBCTR,BHCBCTR,A68_CHAR ));
 /* line 347: */
 /* line 348: */
(*YZBBCTR_strptr)+=YGCBCTR_up;
} 
A_PROC_EXIT(puttruncatedchars);
return;
} 
#undef NL

A_STATIC A68_VOID  LHCBCTR_generator(A68_BOOL  JHCBCTR_anonymous, A68_279  *ReturnedValue, void *NonLocals)
#define NL(x) (((MHCBCTR_generator *)NonLocals)->x)
{ 
A68_279  NHCBCTR;  /* clause result */
A68_279  OHCBCTR;  /* OPERATORS - dynamic generator */
{ 
OHCBCTR.dim[0].upb = (NL(IHCBCTR_upbstreams)+NL(IHCBCTR_upbstreams)) ;
OHCBCTR.dim[0].lwb = 0 ;
(void)A_1INITSTRIDES(OHCBCTR) ;
( JHCBCTR_anonymous? A_R1LOC(A68_275 ,OHCBCTR): A_R1HEAP(A68_275 ,OHCBCTR) );
NHCBCTR = OHCBCTR;
} 
*ReturnedValue = (NHCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  CLCBCTR_generator(A68_BOOL  ALCBCTR_anonymous, A68_185  *ReturnedValue, void *NonLocals)
#define NL(x) (((DLCBCTR_generator *)NonLocals)->x)
{ 
A68_185  ELCBCTR;  /* clause result */
A68_185  FLCBCTR;  /* OPERATORS - dynamic generator */
{ 
FLCBCTR.dim[0].upb = NL(ZKCBCTR_xbu).Decnos.upb ;
FLCBCTR.dim[0].lwb = 1 ;
(void)A_1INITSTRIDES(FLCBCTR) ;
( ALCBCTR_anonymous? A_R1LOC(A68_INT ,FLCBCTR): A_R1HEAP(A68_INT ,FLCBCTR) );
ELCBCTR = FLCBCTR;
} 
*ReturnedValue = (ELCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  LPCBCTR_generator(A68_BOOL  JPCBCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((MPCBCTR_generator *)NonLocals)->x)
{ 
A68_VC  NPCBCTR;  /* clause result */
A68_VC  OPCBCTR;  /* OPERATORS - dynamic generator */
{ 
OPCBCTR.upb = (*NL(IPCBCTR_resultsize)) ;
( JPCBCTR_anonymous? A_VLOC(A68_CHAR ,OPCBCTR): A_VHEAP(A68_CHAR ,OPCBCTR) );
NPCBCTR = OPCBCTR;
} 
*ReturnedValue = (NPCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HQCBCTR_generator(A68_BOOL  FQCBCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((IQCBCTR_generator *)NonLocals)->x)
{ 
A68_VC  JQCBCTR;  /* clause result */
A68_VC  KQCBCTR;  /* OPERATORS - dynamic generator */
{ 
KQCBCTR.upb = NL(EQCBCTR_newresultsize) ;
( FQCBCTR_anonymous? A_VLOC(A68_CHAR ,KQCBCTR): A_VHEAP(A68_CHAR ,KQCBCTR) );
JQCBCTR = KQCBCTR;
} 
*ReturnedValue = (JQCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  LWCBCTR_generator(A68_BOOL  JWCBCTR_anonymous, A68_185  *ReturnedValue, void *NonLocals)
#define NL(x) (((MWCBCTR_generator *)NonLocals)->x)
{ 
A68_185  NWCBCTR;  /* clause result */
A68_185  OWCBCTR;  /* OPERATORS - dynamic generator */
{ 
OWCBCTR.dim[0].upb = A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)) ;
OWCBCTR.dim[0].lwb = 1 ;
(void)A_1INITSTRIDES(OWCBCTR) ;
( JWCBCTR_anonymous? A_R1LOC(A68_INT ,OWCBCTR): A_R1HEAP(A68_INT ,OWCBCTR) );
NWCBCTR = OWCBCTR;
} 
*ReturnedValue = (NWCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ZWCBCTR_generator(A68_BOOL  XWCBCTR_anonymous, A68_206  *ReturnedValue, void *NonLocals)
#define NL(x) (((AXCBCTR_generator *)NonLocals)->x)
{ 
A68_206  BXCBCTR;  /* clause result */
A68_206  CXCBCTR;  /* OPERATORS - dynamic generator */
{ 
CXCBCTR.dim[0].upb = A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)) ;
CXCBCTR.dim[0].lwb = 1 ;
(void)A_1INITSTRIDES(CXCBCTR) ;
( XWCBCTR_anonymous? A_R1LOC(A68_VC ,CXCBCTR): A_R1HEAP(A68_VC ,CXCBCTR) );
BXCBCTR = CXCBCTR;
} 
*ReturnedValue = (BXCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  QYBBCTR_generator(A68_BOOL  PYBBCTR_anonymous, A68_276  *ReturnedValue)
{ 
A68_276  RYBBCTR;  /* clause result */
A68_276  SYBBCTR;  /* OPERATORS - dynamic generator */
{ 
SYBBCTR.upb = 0 ;
( PYBBCTR_anonymous? A_VLOC(A68_VC ,SYBBCTR): A_VHEAP(A68_VC ,SYBBCTR) );
RYBBCTR = SYBBCTR;
} 
*ReturnedValue = (RYBBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HZBBCTR_generator(A68_BOOL  GZBBCTR_anonymous, A68_276  *ReturnedValue)
{ 
A68_276  IZBBCTR;  /* clause result */
A68_276  JZBBCTR;  /* OPERATORS - dynamic generator */
{ 
JZBBCTR.upb = 1 ;
( GZBBCTR_anonymous? A_VLOC(A68_VC ,JZBBCTR): A_VHEAP(A68_VC ,JZBBCTR) );
IZBBCTR = JZBBCTR;
} 
*ReturnedValue = (IZBBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  DACBCTR_extendcurrent(void)
{ 
A68_INT  EACBCTR;  /* clause result */
A68_INT  FACBCTR_size A_UNUSED = {0};
A68_INT  GACBCTR_upbbuffers A_UNUSED = {0};
A68_277  IACBCTR_generator;   /* proc value of non-global proc */
A68_276  NACBCTR;  /* avoid structure result */
A68_276  OACBCTR_new A_UNUSED = {0};
A68_276  PACBCTR;  /* OPERATORS - trim index */
A68_276  QACBCTR;  /* YIELD */
A68_103  SACBCTR_generator;   /* proc value of non-global proc */
A68_INT  XACBCTR;  /* YIELD */
A68_VC  YACBCTR;  /* avoid structure result */
A68_VC * ZACBCTR;  /* YIELD */
A68_276  ABCBCTR;  /* clause result */
A_PROC_ENTRY(extendcurrent);
{ 
if ((*ZZBBCTR_currentbuffer)==0)
{ 
EACBCTR = 1000;
} 
else
{ 
EACBCTR = 10000;
} 
FACBCTR_size = EACBCTR;
 /* line 101: */
 /* line 102: */
{ 
GACBCTR_upbbuffers = (*AACBCTR_buffers).upb;
 /* line 103: */
A_CLOSURE( IACBCTR_generator, JACBCTR_generator, KACBCTR_generator );
(( KACBCTR_generator * ) ( IACBCTR_generator.nonlocals )) -> GACBCTR_upbbuffers = GACBCTR_upbbuffers;
A_CALLPROC(IACBCTR_generator,(A68_FALSE, &NACBCTR),(A68_FALSE, &NACBCTR,(IACBCTR_generator).nonlocals));
OACBCTR_new = NACBCTR;
 /* line 104: */
QACBCTR = A_VTRIM(PACBCTR,(OACBCTR_new),A_VTSCRIPT(&(PACBCTR.upb),(OACBCTR_new).upb,1,GACBCTR_upbbuffers)) ;
(void)(A_VASSIGN2((*AACBCTR_buffers),QACBCTR,A68_VC ));
 /* line 105: */
 /* line 106: */
 /* line 107: */
A_CLOSURE( SACBCTR_generator, TACBCTR_generator, UACBCTR_generator );
(( UACBCTR_generator * ) ( SACBCTR_generator.nonlocals )) -> FACBCTR_size = FACBCTR_size;
XACBCTR = (*ZZBBCTR_currentbuffer) = (GACBCTR_upbbuffers+1) ;
A_CALLPROC(SACBCTR_generator,(A68_FALSE, &YACBCTR),(A68_FALSE, &YACBCTR,(SACBCTR_generator).nonlocals));
ZACBCTR = (&A_VINDEX(OACBCTR_new,XACBCTR)) ;
(*XZBBCTR_streambuffer) = (*ZACBCTR) = YACBCTR;
 /* line 108: */
(*YZBBCTR_strptr) = 0;
 /* line 109: */
 /* line 110: */
 /* line 111: */
ABCBCTR = OACBCTR_new;
} 
(*AACBCTR_buffers) = ABCBCTR;
} 
A_PROC_EXIT(extendcurrent);
return;
} 
#undef NL

A_STATIC A68_VOID  ACCBCTR_generator(A68_BOOL  ZBCBCTR_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  BCCBCTR;  /* clause result */
A68_VC  CCCBCTR;  /* OPERATORS - dynamic generator */
{ 
CCCBCTR.upb = 0 ;
( ZBCBCTR_anonymous? A_VLOC(A68_CHAR ,CCCBCTR): A_VHEAP(A68_CHAR ,CCCBCTR) );
BCCBCTR = CCCBCTR;
} 
*ReturnedValue = (BCCBCTR);
return;
} 
#undef NL

A_STATIC A68_BOOL  HCCBCTR_input(A68_VC  Line, A68_INT * Size)
{ 
A68_60  ICCBCTR;  /* avoid structure result */
A68_60  JCCBCTR_read_status A_UNUSED = {0};
A68_BOOL  KCCBCTR;  /* optbool result */
A68_BOOL  LCCBCTR;  /* clause result */
A68_BOOL  MCCBCTR;  /* clause result */
A68_INT  NCCBCTR;  /* YIELD */
A68_CHAR * OCCBCTR_first A_UNUSED = {0};
A68_BOOL  PCCBCTR;  /* optbool result */
A68_BOOL  QCCBCTR;  /* clause result */
A68_INT  RCCBCTR;  /* YIELD */
A68_CHAR * SCCBCTR_second A_UNUSED = {0};
A68_BOOL  TCCBCTR;  /* clause result */
A68_INT  UCCBCTR;  /* YIELD */
A_PROC_ENTRY(input);
 /* line 159: */
 /* line 160: */
{ 
DXBAOSF_read_line( VBCBCTR_inputfile, Line, Size, RIBAOSF_ignore_msg, &ICCBCTR );
JCCBCTR_read_status = ICCBCTR;
 /* line 161: */
KCCBCTR = AVBAOSF_(JCCBCTR_read_status, UUBAOSF_io_error);
if ( ! KCCBCTR )
{ /* line 162: */
KCCBCTR = AVBAOSF_(JCCBCTR_read_status, RUBAOSF_io_eof);
}
 /* line 163: */
LCCBCTR = KCCBCTR;
if (LCCBCTR)
{ 
 /* line 164: */
 /* line 165: */
MCCBCTR = A68_FALSE;
} 
else
{ 
XRIACTR_linenumber+=1;
 /* line 166: */
 /* line 167: */
 /* line 168: */
 /* line 169: */
if (AVBAOSF_(JCCBCTR_read_status, XUBAOSF_io_no_newline))
{ 
 /* line 170: */
(void)(PXIACTR_error(253));
} 
 /* line 172: */
YBCBCTR_line_pending = A68_TRUE;
 /* line 176: */
 /* line 177: */
 /* line 179: */
if ((*Size)<2)
{ 
 /* line 180: */
/*SKIP*/;
} 
else
{ 
{ 
NCCBCTR = 1 ;
OCCBCTR_first = (&A_VINDEX(Line,NCCBCTR));
 /* line 181: */
PCCBCTR = ((*OCCBCTR_first)!='*');
if ( PCCBCTR )
{ /* line 182: */
PCCBCTR = ((*OCCBCTR_first)!='%');
}
 /* line 184: */
QCCBCTR = PCCBCTR;
if (QCCBCTR)
{ 
 /* line 191: */
/*SKIP*/;
} 
else
{ 
{ 
RCCBCTR = 2 ;
SCCBCTR_second = (&A_VINDEX(Line,RCCBCTR));
 /* line 192: */
 /* line 193: */
 /* line 194: */
UCCBCTR = (A68_INT)(unsigned char)(*SCCBCTR_second) ;
TCCBCTR = ((*(&A_R1INDEX(KRIACTR_stars,UCCBCTR)))==((*OCCBCTR_first)=='*'));
if (TCCBCTR)
{ 
 /* line 195: */
 /* line 196: */
(*OCCBCTR_first) = (*SCCBCTR_second) = ' ';
} 
else
{ 
 /* line 197: */
(*Size) = 0;
} 
} 
} 
} 
} 
 /* line 199: */
 /* line 200: */
MCCBCTR = A68_TRUE;
} 
} 
A_PROC_EXIT(input);
return( MCCBCTR );
} 
#undef NL

A_STATIC A68_VOID  WCCBCTR_generator(A68_BOOL  VCCBCTR_anonymous, A68_181  *ReturnedValue)
{ 
A68_181  XCCBCTR;  /* clause result */
A68_181  YCCBCTR;  /* OPERATORS - dynamic generator */
{ 
YCCBCTR.dim[0].upb = 511 ;
YCCBCTR.dim[0].lwb = 0 ;
(void)A_1INITSTRIDES(YCCBCTR) ;
( VCCBCTR_anonymous? A_R1LOC(A68_182 ,YCCBCTR): A_R1HEAP(A68_182 ,YCCBCTR) );
XCCBCTR = YCCBCTR;
} 
*ReturnedValue = (XCCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  NECBCTR_output(A68_171  Op, A68_INT  Ll)
{ 
A68_222  VECBCTR_outprep;   /* proc value of non-global proc */
A68_287  MFCBCTR_putints;   /* proc value of non-global proc */
A68_222  CGCBCTR_putint;   /* proc value of non-global proc */
A68_98  OGCBCTR_putchars;   /* proc value of non-global proc */
A68_98  VGCBCTR_puttruncatedchars;   /* proc value of non-global proc */
A68_171  DHCBCTR;  /* united object - for case conformity */
A68_155  EHCBCTR_c A_UNUSED = {0};
A68_BOOL  FHCBCTR;  /* clause result */
A68_288  GHCBCTR;  /* collateral clause result */
A68_185  HHCBCTR;  /* OPERATORS - istruct to row */
A68_INT  IHCBCTR_upbstreams A_UNUSED = {0};
A68_289  KHCBCTR_generator;   /* proc value of non-global proc */
A68_279  PHCBCTR;  /* avoid structure result */
A68_279  QHCBCTR_newstreams A_UNUSED = {0};
A68_275 * RHCBCTR_stream A_UNUSED = {0};
A68_279  SHCBCTR;  /* OPERATORS - trim index */
A68_279  THCBCTR;  /* forall yield */
A68_INT  UHCBCTR;  /* forall loop counter */
A68_279  VHCBCTR;  /* OPERATORS - trim index */
A68_279  WHCBCTR;  /* YIELD */
A68_171  XHCBCTR;  /* united object - for case conformity */
A68_150  YHCBCTR_e A_UNUSED = {0};
A68_151  ZHCBCTR_xop A_UNUSED = {0};
A68_290  AICBCTR;  /* collateral clause result */
A68_185  BICBCTR;  /* OPERATORS - istruct to row */
A68_155  CICBCTR_c A_UNUSED = {0};
A68_288  DICBCTR;  /* collateral clause result */
A68_185  EICBCTR;  /* OPERATORS - istruct to row */
A68_INT  FICBCTR;  /* YIELD */
A68_INT  GICBCTR_fnval A_UNUSED = {0};
A68_288  HICBCTR;  /* collateral clause result */
A68_185  IICBCTR;  /* OPERATORS - istruct to row */
A68_INT  JICBCTR_id A_UNUSED = {0};
A68_140  KICBCTR_number A_UNUSED = {0};
A68_INT  LICBCTR_type A_UNUSED = {0};
A68_INT  MICBCTR_exp A_UNUSED = {0};
A68_CHAR * NICBCTR_c A_UNUSED = {0};
A68_VC  OICBCTR;  /* forall yield */
A68_INT  PICBCTR;  /* forall loop counter */
A68_BOOL  QICBCTR;  /* optbool result */
A68_VC  RICBCTR;  /* OPERATORS - trim index */
A68_VC  SICBCTR;  /* OPERATORS - trim index */
A68_VC  TICBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  UICBCTR;  /* OPERATORS - trim index */
A68_VC  VICBCTR;  /* OPERATORS - trim index */
A68_154  WICBCTR_xw A_UNUSED = {0};
A68_147  XICBCTR_idd A_UNUSED = {0};
A68_290  YICBCTR;  /* collateral clause result */
A68_185  ZICBCTR;  /* OPERATORS - istruct to row */
A68_VC  AJCBCTR;  /* OPERATORS - istruct -> vector */
A68_107  BJCBCTR;  /* OPERATORS - istruct -> vector */
A68_142  CJCBCTR_chars A_UNUSED = {0};
A68_INT  DJCBCTR;  /* clause result */
A68_VC  EJCBCTR;  /* clause result */
A68_VC  FJCBCTR;  /* avoid structure result */
A68_VC  GJCBCTR_string A_UNUSED = {0};
A68_143  HJCBCTR_str A_UNUSED = {0};
A68_124 * IJCBCTR_rd A_UNUSED = {0};
A68_291  JJCBCTR;  /* collateral clause result */
A68_185  KJCBCTR;  /* OPERATORS - istruct to row */
A68_VC  LJCBCTR;  /* OPERATORS - istruct -> vector */
A68_107  MJCBCTR;  /* OPERATORS - istruct -> vector */
A68_146  NJCBCTR_nse A_UNUSED = {0};
A68_BOOL  OJCBCTR_b A_UNUSED = {0};
A68_138  PJCBCTR_generator A_UNUSED = {0};
A68_290  QJCBCTR;  /* collateral clause result */
A68_185  RJCBCTR;  /* OPERATORS - istruct to row */
A68_141  SJCBCTR_al A_UNUSED = {0};
A68_139  TJCBCTR_c A_UNUSED = {0};
A68_290  UJCBCTR;  /* collateral clause result */
A68_185  VJCBCTR;  /* OPERATORS - istruct to row */
A68_148  WJCBCTR_xl A_UNUSED = {0};
A68_125 * XJCBCTR_rl A_UNUSED = {0};
A68_VC  YJCBCTR;  /* OPERATORS - istruct -> vector */
A68_107  ZJCBCTR;  /* OPERATORS - istruct -> vector */
A68_290  AKCBCTR;  /* collateral clause result */
A68_185  BKCBCTR;  /* OPERATORS - istruct to row */
A68_125 * CKCBCTR_lb A_UNUSED = {0};
A68_156  DKCBCTR_xs A_UNUSED = {0};
A68_172  EKCBCTR_mdes A_UNUSED = {0};
A68_249  FKCBCTR;  /* OPERATORS - vector -> row */
A68_163  GKCBCTR_xtd A_UNUSED = {0};
A68_162  HKCBCTR_xtm A_UNUSED = {0};
A68_290  IKCBCTR;  /* collateral clause result */
A68_185  JKCBCTR;  /* OPERATORS - istruct to row */
A68_VC  KKCBCTR;  /* OPERATORS - istruct -> vector */
A68_107  LKCBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  MKCBCTR;  /* OPERATORS - istruct -> vector */
A68_105  NKCBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  OKCBCTR;  /* OPERATORS - istruct -> vector */
A68_105  PKCBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  QKCBCTR;  /* OPERATORS - istruct -> vector */
A68_105  RKCBCTR;  /* OPERATORS - istruct -> vector */
A68_128 * SKCBCTR_spec A_UNUSED = {0};
A68_127  TKCBCTR;  /* forall yield */
A68_INT  UKCBCTR;  /* forall loop counter */
A68_VC  VKCBCTR;  /* OPERATORS - istruct -> vector */
A68_105  WKCBCTR;  /* OPERATORS - istruct -> vector */
A68_160  XKCBCTR_open A_UNUSED = {0};
A68_157  YKCBCTR_xm A_UNUSED = {0};
A68_169  ZKCBCTR_xbu A_UNUSED = {0};
A68_292  BLCBCTR_generator;   /* proc value of non-global proc */
A68_185  GLCBCTR;  /* avoid structure result */
A68_92  HLCBCTR;  /* YIELD */
A68_185  ILCBCTR;  /* OPERATORS - vector -> row */
A68_185  JLCBCTR;  /* OPERATORS - assign op */
A68_129  KLCBCTR_s A_UNUSED = {0};
A_PROC_ENTRY(output);
 /* line 263: */
 /* line 264: */
 /* line 266: */
if (DSIACTR_greatestseverity<=2)
{ 
 /* line 279: */
A_CLOSURE( VECBCTR_outprep, WECBCTR_outprep, XECBCTR_outprep );
(( XECBCTR_outprep * ) ( VECBCTR_outprep.nonlocals )) -> Ll = Ll;
 /* line 320: */
A_CLOSURE( MFCBCTR_putints, NFCBCTR_putints, OFCBCTR_putints );
(( OFCBCTR_putints * ) ( MFCBCTR_putints.nonlocals )) -> VECBCTR_outprep = VECBCTR_outprep;
 /* line 329: */
A_CLOSURE( CGCBCTR_putint, DGCBCTR_putint, EGCBCTR_putint );
(( EGCBCTR_putint * ) ( CGCBCTR_putint.nonlocals )) -> VECBCTR_outprep = VECBCTR_outprep;
 /* line 336: */
A_CLOSURE( OGCBCTR_putchars, PGCBCTR_putchars, QGCBCTR_putchars );
(( QGCBCTR_putchars * ) ( OGCBCTR_putchars.nonlocals )) -> VECBCTR_outprep = VECBCTR_outprep;
 /* line 343: */
A_CLOSURE( VGCBCTR_puttruncatedchars, WGCBCTR_puttruncatedchars, XGCBCTR_puttruncatedchars );
(( XGCBCTR_puttruncatedchars * ) ( VGCBCTR_puttruncatedchars.nonlocals )) -> VECBCTR_outprep = VECBCTR_outprep;
 /* line 352: */
 /* line 353: */
 /* line 354: */
if (YBCBCTR_line_pending)
{ 
 /* line 355: */
DHCBCTR = Op ;
switch ( DHCBCTR.mode )
{ 
case 17: /* STRUCT(INT,INT,BITS,INT)  */
EHCBCTR_c = (DHCBCTR.data.mode17);
 /* line 356: */
FHCBCTR = (EHCBCTR_c.Fn!=25);
break;
default: 
 /* line 357: */
 /* line 358: */
 /* line 360: */
FHCBCTR = A68_TRUE;
break;
} 
if (FHCBCTR)
{ 
 /* line 361: */
GHCBCTR.data[0] = XRIACTR_linenumber;
GHCBCTR.data[1] = WBCBCTR_line_start;
 /* line 362: */
GHCBCTR.data[2] = XBCBCTR_line_length;
(void)(A_CALLPROC(MFCBCTR_putints,(OBCBCTR_linetype, A_HIS1ARR(HHCBCTR,GHCBCTR,A68_INT ,3)),(OBCBCTR_linetype, A_HIS1ARR(HHCBCTR,GHCBCTR,A68_INT ,3),(MFCBCTR_putints).nonlocals)));
 /* line 363: */
 /* line 364: */
 /* line 365: */
YBCBCTR_line_pending = A68_FALSE;
} 
} 
 /* line 367: */
 /* line 368: */
if (GECBCTR_upped)
{ 
(void)(A_CALLPROC(VECBCTR_outprep,(1, 2),(1, 2,(VECBCTR_outprep).nonlocals)));
 /* line 369: */
 /* line 370: */
GECBCTR_upped = A68_FALSE;
} 
 /* line 372: */
(*BACBCTR_curstradd) = AZBBCTR_current;
 /* line 374: */
for ( ;; )
{ 
 /* line 375: */
if ( !((Ll>WYBBCTR_streams.dim[0].upb)) ) break;
IHCBCTR_upbstreams = WYBBCTR_streams.dim[0].upb;
 /* line 376: */
A_CLOSURE( KHCBCTR_generator, LHCBCTR_generator, MHCBCTR_generator );
(( MHCBCTR_generator * ) ( KHCBCTR_generator.nonlocals )) -> IHCBCTR_upbstreams = IHCBCTR_upbstreams;
A_CALLPROC(KHCBCTR_generator,(A68_FALSE, &PHCBCTR),(A68_FALSE, &PHCBCTR,(KHCBCTR_generator).nonlocals));
QHCBCTR_newstreams = PHCBCTR;
 /* line 377: */
 /* line 378: */
THCBCTR = A_R1TRIM(SHCBCTR,(QHCBCTR_newstreams),A_RTSCRIPT(&(SHCBCTR.dim[0]),&((QHCBCTR_newstreams).dim[0]),(IHCBCTR_upbstreams+1),(QHCBCTR_newstreams).dim[0].upb,1)) ;
UHCBCTR = THCBCTR.dim[0].upb - THCBCTR.dim[0].lwb;
RHCBCTR_stream = THCBCTR.data;
for (;UHCBCTR-- >= 0;
(RHCBCTR_stream += THCBCTR.dim[0].stride
) )
{
 /* line 379: */
(*RHCBCTR_stream) = UYBBCTR_unsetstream;
}
 /* line 380: */
WHCBCTR = A_R1TRIM(VHCBCTR,(QHCBCTR_newstreams),A_RTSCRIPT(&(VHCBCTR.dim[0]),&((QHCBCTR_newstreams).dim[0]),(QHCBCTR_newstreams).dim[0].lwb,IHCBCTR_upbstreams,0)) ;
(void)(A_R1ASSIGN2(WYBBCTR_streams,WHCBCTR,A68_275 ));
 /* line 381: */
 /* line 382: */
WYBBCTR_streams = QHCBCTR_newstreams;
}
 /* line 383: */
(void)(AZBBCTR_current = (*(BACBCTR_curstradd = (&A_R1INDEX(WYBBCTR_streams,Ll)))));
 /* line 385: */
 /* line 386: */
XHCBCTR = Op ;
switch ( XHCBCTR.mode )
{ 
case 1: /* STRUCT(BOOL)  */
YHCBCTR_e = (XHCBCTR.data.mode1);
 /* line 387: */
 /* line 388: */
if (!(GECBCTR_upped = YHCBCTR_e.Up))
{ 
 /* line 389: */
 /* line 390: */
(void)(A_CALLPROC(VECBCTR_outprep,(1, 1),(1, 1,(VECBCTR_outprep).nonlocals)));
} 
break;
case 14: /* STRUCT(INT,INT,INT)  */
ZHCBCTR_xop = (XHCBCTR.data.mode14);
 /* line 391: */
 /* line 392: */
if (ZHCBCTR_xop.Fn==LGAACTR_voidfn)
{ 
 /* line 393: */
(void)(A_CALLPROC(VECBCTR_outprep,(1, 202),(1, 202,(VECBCTR_outprep).nonlocals)));
} 
else
{ 
AICBCTR.data[0] = ZHCBCTR_xop.M;
AICBCTR.data[1] = ZHCBCTR_xop.Param;
 /* line 394: */
 /* line 395: */
(void)(A_CALLPROC(MFCBCTR_putints,((128+ZHCBCTR_xop.Fn), A_HIS1ARR(BICBCTR,AICBCTR,A68_INT ,2)),((128+ZHCBCTR_xop.Fn), A_HIS1ARR(BICBCTR,AICBCTR,A68_INT ,2),(MFCBCTR_putints).nonlocals)));
} 
break;
case 17: /* STRUCT(INT,INT,BITS,INT)  */
CICBCTR_c = (XHCBCTR.data.mode17);
 /* line 396: */
{ 
 /* line 397: */
if (CICBCTR_c.Fn==25)
{ 
(void)(A_CALLPROC(VECBCTR_outprep,(1, (48+((A68_INT )CICBCTR_c.Props/2048))),(1, (48+((A68_INT )CICBCTR_c.Props/2048)),(VECBCTR_outprep).nonlocals)));
 /* line 398: */
 /* line 399: */
 /* line 400: */
if (YBCBCTR_line_pending)
{ 
 /* line 401: */
DICBCTR.data[0] = XRIACTR_linenumber;
DICBCTR.data[1] = WBCBCTR_line_start;
 /* line 402: */
DICBCTR.data[2] = XBCBCTR_line_length;
(void)(A_CALLPROC(MFCBCTR_putints,(OBCBCTR_linetype, A_HIS1ARR(EICBCTR,DICBCTR,A68_INT ,3)),(OBCBCTR_linetype, A_HIS1ARR(EICBCTR,DICBCTR,A68_INT ,3),(MFCBCTR_putints).nonlocals)));
 /* line 403: */
 /* line 404: */
 /* line 405: */
 /* line 406: */
YBCBCTR_line_pending = A68_FALSE;
} 
} 
else
{ 
FICBCTR = (CICBCTR_c.Fn+1) ;
GICBCTR_fnval = (A68_INT)(unsigned char)A_VINDEX(FECBCTR_contval,FICBCTR);
 /* line 407: */
HICBCTR.data[0] = CICBCTR_c.M;
HICBCTR.data[1] = (A68_INT )CICBCTR_c.Props;
HICBCTR.data[2] = CICBCTR_c.Param;
 /* line 408: */
 /* line 409: */
 /* line 410: */
(void)(A_CALLPROC(MFCBCTR_putints,(GICBCTR_fnval, A_HIS1ARR(IICBCTR,HICBCTR,A68_INT ,3)),(GICBCTR_fnval, A_HIS1ARR(IICBCTR,HICBCTR,A68_INT ,3),(MFCBCTR_putints).nonlocals)));
} 
} 
break;
case 3: /* INT */
JICBCTR_id = (XHCBCTR.data.mode3);
 /* line 411: */
 /* line 412: */
if (JICBCTR_id<0)
{ 
 /* line 413: */
(void)(A_CALLPROC(CGCBCTR_putint,(78, JICBCTR_id),(78, JICBCTR_id,(CGCBCTR_putint).nonlocals)));
} 
else
{ 
 /* line 414: */
 /* line 415: */
(void)(A_CALLPROC(CGCBCTR_putint,(80, JICBCTR_id),(80, JICBCTR_id,(CGCBCTR_putint).nonlocals)));
} 
break;
case 9: /* STRUCT(INT,REF MODE26)  */
KICBCTR_number = (XHCBCTR.data.mode9);
 /* line 416: */
 /* line 417: */
{ 
LICBCTR_type = (KICBCTR_number.Mode+GBCBCTR_numberbase);
 /* line 418: */
(void)(A_CALLPROC(VECBCTR_outprep,(1, LICBCTR_type),(1, LICBCTR_type,(VECBCTR_outprep).nonlocals)));
 /* line 423: */
MICBCTR_exp = (-1);
 /* line 424: */
OICBCTR = KICBCTR_number.Nu ;
PICBCTR = OICBCTR.upb -1;
NICBCTR_c = OICBCTR.data;
for (;PICBCTR-- >= 0;
(NICBCTR_c++
) )
{
 /* line 425: */
if ( !(((MICBCTR_exp-=1)<0)) ) break;
QICBCTR = ((*NICBCTR_c)=='+');
if ( ! QICBCTR )
{QICBCTR = ((*NICBCTR_c)=='-');
}
if (QICBCTR)
{ 
(void)(MICBCTR_exp = (-MICBCTR_exp));
} 
}
 /* line 426: */
 /* line 427: */
 /* line 428: */
if (MICBCTR_exp<0)
{ 
 /* line 429: */
 /* line 430: */
(void)(A_CALLPROC(OGCBCTR_putchars,(KICBCTR_number.Nu),(KICBCTR_number.Nu,(OGCBCTR_putchars).nonlocals)));
} 
else
{ 
 /* line 431: */
 /* line 432: */
 /* line 433: */
 /* line 434: */
RICBCTR = KICBCTR_number.Nu ;
UICBCTR = KICBCTR_number.Nu ;
(void)(A_CALLPROC(OGCBCTR_putchars,(A_VC_PLUS(A_VC_PLUS(A_VTRIM(SICBCTR,(RICBCTR),A_VTSCRIPT(&(SICBCTR.upb),(RICBCTR).upb,1,(MICBCTR_exp-1))),A_HVEC(TICBCTR,'e',A68_CHAR )),A_VTRIM(VICBCTR,(UICBCTR),A_VTSCRIPT(&(VICBCTR.upb),(UICBCTR).upb,MICBCTR_exp,(UICBCTR).upb)))),(A_VC_PLUS(A_VC_PLUS(A_VTRIM(SICBCTR,(RICBCTR),A_VTSCRIPT(&(SICBCTR.upb),(RICBCTR).upb,1,(MICBCTR_exp-1))),A_HVEC(TICBCTR,'e',A68_CHAR )),A_VTRIM(VICBCTR,(UICBCTR),A_VTSCRIPT(&(VICBCTR.upb),(UICBCTR).upb,MICBCTR_exp,(UICBCTR).upb))),(OGCBCTR_putchars).nonlocals)));
} 
} 
break;
case 16: /* STRUCT(INT)  */
WICBCTR_xw = (XHCBCTR.data.mode16);
 /* line 435: */
 /* line 436: */
if (WICBCTR_xw.W<=3)
{ 
 /* line 437: */
 /* line 438: */
(void)(A_CALLPROC(VECBCTR_outprep,(1, (208+WICBCTR_xw.W)),(1, (208+WICBCTR_xw.W),(VECBCTR_outprep).nonlocals)));
} 
break;
case 12: /* STRUCT(INT,REF MODE123)  */
XICBCTR_idd = (XHCBCTR.data.mode12);
 /* line 439: */
 /* line 441: */
{ 
 /* line 442: */
YICBCTR.data[0] = (*(&(XICBCTR_idd.Iddec->Mode)));
 /* line 443: */
YICBCTR.data[1] = (*(&(XICBCTR_idd.Iddec->Decno)));
(void)(A_CALLPROC(MFCBCTR_putints,((KBCBCTR_iddecbase+XICBCTR_idd.Type), A_HIS1ARR(ZICBCTR,YICBCTR,A68_INT ,2)),((KBCBCTR_iddecbase+XICBCTR_idd.Type), A_HIS1ARR(ZICBCTR,YICBCTR,A68_INT ,2),(MFCBCTR_putints).nonlocals)));
 /* line 444: */
 /* line 445: */
 /* line 446: */
BJCBCTR = (*(&(XICBCTR_idd.Iddec->Name))) ;
(void)(A_CALLPROC(VGCBCTR_puttruncatedchars,(A_HISVEC(AJCBCTR,BJCBCTR,32,A68_CHAR )),(A_HISVEC(AJCBCTR,BJCBCTR,32,A68_CHAR ),(VGCBCTR_puttruncatedchars).nonlocals)));
} 
break;
case 35: /* STRUCT(INT,INT,REF MODE26)  */
CJCBCTR_chars = (XHCBCTR.data.mode35);
 /* line 447: */
 /* line 449: */
{ 
 /* line 450: */
 /* line 451: */
 /* line 452: */
if (CJCBCTR_chars.Nochars<0)
{ 
 /* line 453: */
DJCBCTR = QBCBCTR_notlastxcharstype;
} 
else
{ 
 /* line 454: */
DJCBCTR = RBCBCTR_lastxcharstype;
} 
(void)(A_CALLPROC(VECBCTR_outprep,(1, DJCBCTR),(1, DJCBCTR,(VECBCTR_outprep).nonlocals)));
 /* line 455: */
 /* line 456: */
 /* line 457: */
if (CJCBCTR_chars.Base!=0)
{ 
 /* line 458: */
 /* line 459: */
GNJACTR_convertradixstring( CJCBCTR_chars.Chars, CJCBCTR_chars.Base, &FJCBCTR );
EJCBCTR = FJCBCTR;
} 
else
{ 
EJCBCTR = CJCBCTR_chars.Chars;
} 
GJCBCTR_string = EJCBCTR;
 /* line 460: */
 /* line 461: */
 /* line 462: */
(void)(A_CALLPROC(OGCBCTR_putchars,(GJCBCTR_string),(GJCBCTR_string,(OGCBCTR_putchars).nonlocals)));
} 
break;
case 7: /* STRUCT(INT)  */
HJCBCTR_str = (XHCBCTR.data.mode7);
 /* line 463: */
 /* line 464: */
if (HJCBCTR_str.Strmode==8)
{ 
 /* line 465: */
(void)(A_CALLPROC(VECBCTR_outprep,(1, 76),(1, 76,(VECBCTR_outprep).nonlocals)));
} 
else
{ 
 /* line 466: */
 /* line 468: */
(void)(A_CALLPROC(CGCBCTR_putint,(77, HJCBCTR_str.Strmode),(77, HJCBCTR_str.Strmode,(CGCBCTR_putint).nonlocals)));
} 
break;
case 34: /* REF STRUCT(MODE107,BITS,INT,INT,INT,INT,REF MODE124)  */
IJCBCTR_rd = (XHCBCTR.data.mode34);
 /* line 469: */
 /* line 470: */
{ 
 /* line 471: */
 /* line 472: */
JJCBCTR.data[0] = (*(&(IJCBCTR_rd->Rdenno)));
 /* line 473: */
JJCBCTR.data[1] = (*(&(IJCBCTR_rd->Mode)));
 /* line 474: */
JJCBCTR.data[2] = (A68_INT )(*(&(IJCBCTR_rd->Props)));
 /* line 475: */
 /* line 476: */
JJCBCTR.data[3] = PLAAOSF_max((*(&(IJCBCTR_rd->Maxname))), HAAACTR_minidno);
(void)(A_CALLPROC(MFCBCTR_putints,(197, A_HIS1ARR(KJCBCTR,JJCBCTR,A68_INT ,4)),(197, A_HIS1ARR(KJCBCTR,JJCBCTR,A68_INT ,4),(MFCBCTR_putints).nonlocals)));
 /* line 477: */
 /* line 478: */
 /* line 480: */
MJCBCTR = (*(&(IJCBCTR_rd->Name))) ;
(void)(A_CALLPROC(VGCBCTR_puttruncatedchars,(A_HISVEC(LJCBCTR,MJCBCTR,32,A68_CHAR )),(A_HISVEC(LJCBCTR,MJCBCTR,32,A68_CHAR ),(VGCBCTR_puttruncatedchars).nonlocals)));
} 
break;
case 5: /* STRUCT(INT)  */
NJCBCTR_nse = (XHCBCTR.data.mode5);
 /* line 481: */
 /* line 482: */
(void)(A_CALLPROC(VECBCTR_outprep,(1, (66+NJCBCTR_nse.Nse)),(1, (66+NJCBCTR_nse.Nse),(VECBCTR_outprep).nonlocals)));
break;
case 2: /* BOOL */
OJCBCTR_b = (XHCBCTR.data.mode2);
 /* line 483: */
 /* line 484: */
(void)(A_CALLPROC(VECBCTR_outprep,(1, (65+(OJCBCTR_b))),(1, (65+(OJCBCTR_b)),(VECBCTR_outprep).nonlocals)));
break;
case 6: /* STRUCT(INT,BOOL)  */
PJCBCTR_generator = (XHCBCTR.data.mode6);
 /* line 485: */
 /* line 488: */
 /* line 489: */
QJCBCTR.data[0] = PJCBCTR_generator.Mode;
 /* line 490: */
QJCBCTR.data[1] = (PJCBCTR_generator.Loc);
 /* line 491: */
 /* line 492: */
(void)(A_CALLPROC(MFCBCTR_putints,((128+PGAACTR_generatorfn), A_HIS1ARR(RJCBCTR,QJCBCTR,A68_INT ,2)),((128+PGAACTR_generatorfn), A_HIS1ARR(RJCBCTR,QJCBCTR,A68_INT ,2),(MFCBCTR_putints).nonlocals)));
break;
case 8: /* STRUCT(INT,INT,INT)  */
 /* line 493: */
 /* line 494: */
(void)(PXIACTR_error(808));
break;
case 10: /* STRUCT(INT)  */
SJCBCTR_al = (XHCBCTR.data.mode10);
 /* line 495: */
 /* line 496: */
(void)(A_CALLPROC(CGCBCTR_putint,(75, SJCBCTR_al.Almode),(75, SJCBCTR_al.Almode,(CGCBCTR_putint).nonlocals)));
break;
case 11: /* STRUCT(INT,INT)  */
TJCBCTR_c = (XHCBCTR.data.mode11);
 /* line 498: */
UJCBCTR.data[0] = TJCBCTR_c.Mode;
UJCBCTR.data[1] = TJCBCTR_c.Nopars;
 /* line 499: */
(void)(A_CALLPROC(MFCBCTR_putints,(70, A_HIS1ARR(VJCBCTR,UJCBCTR,A68_INT ,2)),(70, A_HIS1ARR(VJCBCTR,UJCBCTR,A68_INT ,2),(MFCBCTR_putints).nonlocals)));
break;
case 13: /* STRUCT(REF MODE125,BOOL)  */
WJCBCTR_xl = (XHCBCTR.data.mode13);
 /* line 500: */
 /* line 501: */
if (WJCBCTR_xl.Notsetting)
{ 
XJCBCTR_rl = WJCBCTR_xl.Lab;
 /* line 502: */
 /* line 503: */
if ((*(&(XJCBCTR_rl->Status)))==0)
{ 
(void)(A_CALLPROC(CGCBCTR_putint,(194, (*(&(XJCBCTR_rl->Labno)))),(194, (*(&(XJCBCTR_rl->Labno))),(CGCBCTR_putint).nonlocals)));
 /* line 504: */
 /* line 505: */
ZJCBCTR = (*(&(XJCBCTR_rl->Name))) ;
(void)(A_CALLPROC(VGCBCTR_puttruncatedchars,(A_HISVEC(YJCBCTR,ZJCBCTR,32,A68_CHAR )),(A_HISVEC(YJCBCTR,ZJCBCTR,32,A68_CHAR ),(VGCBCTR_puttruncatedchars).nonlocals)));
} 
else
{ 
AKCBCTR.data[0] = (*(&(XJCBCTR_rl->Labno)));
AKCBCTR.data[1] = (*(&(XJCBCTR_rl->Status)));
 /* line 506: */
 /* line 507: */
(void)(A_CALLPROC(MFCBCTR_putints,(195, A_HIS1ARR(BKCBCTR,AKCBCTR,A68_INT ,2)),(195, A_HIS1ARR(BKCBCTR,AKCBCTR,A68_INT ,2),(MFCBCTR_putints).nonlocals)));
} 
} 
else
{ 
 /* line 508: */
 /* line 509: */
(void)(A_CALLPROC(CGCBCTR_putint,(196, (*(&(WJCBCTR_xl.Lab->Labno)))),(196, (*(&(WJCBCTR_xl.Lab->Labno))),(CGCBCTR_putint).nonlocals)));
} 
break;
case 4: /* REF STRUCT(MODE107,INT,INT,REF MODE125)  */
CKCBCTR_lb = (XHCBCTR.data.mode4);
 /* line 510: */
(void)(A_CALLPROC(CGCBCTR_putint,(74, (*(&(CKCBCTR_lb->Labno)))),(74, (*(&(CKCBCTR_lb->Labno))),(CGCBCTR_putint).nonlocals)));
break;
case 18: /* STRUCT(INT,INT,INT,INT,INT,INT)  */
DKCBCTR_xs = (XHCBCTR.data.mode18);
 /* line 512: */
MYBBCTR_xsizes = DKCBCTR_xs;
break;
case 19: /* REF VECTOR [] MODE120 */
EKCBCTR_mdes = (XHCBCTR.data.mode19);
 /* line 513: */
{ 
(void)(A_CALLPROC(SKMACTR_initialiseuniquenameserver,(QRIACTR_uname_option),(QRIACTR_uname_option,(SKMACTR_initialiseuniquenameserver).nonlocals)));
 /* line 514: */
 /* line 515: */
 /* line 517: */
(void)(SDOACTR_initialisemodetable(A_VECARR(EKCBCTR_mdes,FKCBCTR), (*(&((&MYBBCTR_xsizes)->Nomodes)))));
} 
break;
case 26: /* STRUCT(BOOL,INT,REF MODE123)  */
GKCBCTR_xtd = (XHCBCTR.data.mode26);
 /* line 518: */
{ 
 /* line 519: */
if (IECBCTR_xtmodulepending)
{ 
IECBCTR_xtmodulepending = A68_FALSE;
 /* line 520: */
 /* line 521: */
(void)(JEPACTR_adddecsmodule(HECBCTR_lastxtmodule, GKCBCTR_xtd.Level));
} 
 /* line 522: */
 /* line 523: */
 /* line 524: */
(void)(OFPACTR_addexternalid((*GKCBCTR_xtd.Id)));
} 
break;
case 25: /* STRUCT(INT,INT,MODE107,MODE126)  */
HKCBCTR_xtm = (XHCBCTR.data.mode25);
 /* line 525: */
 /* line 526: */
if (HKCBCTR_xtm.Type<0)
{ 
HECBCTR_lastxtmodule = HKCBCTR_xtm;
 /* line 527: */
 /* line 529: */
IECBCTR_xtmodulepending = A68_TRUE;
} 
else
{ 
 /* line 530: */
IKCBCTR.data[0] = HKCBCTR_xtm.Moduleno;
 /* line 531: */
IKCBCTR.data[1] = HKCBCTR_xtm.Ym.Specs.upb;
(void)(A_CALLPROC(MFCBCTR_putints,(UBCBCTR_xtmoduletype, A_HIS1ARR(JKCBCTR,IKCBCTR,A68_INT ,2)),(UBCBCTR_xtmoduletype, A_HIS1ARR(JKCBCTR,IKCBCTR,A68_INT ,2),(MFCBCTR_putints).nonlocals)));
 /* line 532: */
LKCBCTR = HKCBCTR_xtm.Name ;
(void)(A_CALLPROC(VGCBCTR_puttruncatedchars,(A_HISVEC(KKCBCTR,LKCBCTR,32,A68_CHAR )),(A_HISVEC(KKCBCTR,LKCBCTR,32,A68_CHAR ),(VGCBCTR_puttruncatedchars).nonlocals)));
 /* line 533: */
NKCBCTR = HKCBCTR_xtm.Ym.Uname ;
(void)(A_CALLPROC(OGCBCTR_putchars,(A_HISVEC(MKCBCTR,NKCBCTR,7,A68_CHAR )),(A_HISVEC(MKCBCTR,NKCBCTR,7,A68_CHAR ),(OGCBCTR_putchars).nonlocals)));
 /* line 534: */
PKCBCTR = HKCBCTR_xtm.Ym.Lname ;
(void)(A_CALLPROC(OGCBCTR_putchars,(A_HISVEC(OKCBCTR,PKCBCTR,7,A68_CHAR )),(A_HISVEC(OKCBCTR,PKCBCTR,7,A68_CHAR ),(OGCBCTR_putchars).nonlocals)));
 /* line 535: */
RKCBCTR = HKCBCTR_xtm.Ym.Gname ;
(void)(A_CALLPROC(OGCBCTR_putchars,(A_HISVEC(QKCBCTR,RKCBCTR,7,A68_CHAR )),(A_HISVEC(QKCBCTR,RKCBCTR,7,A68_CHAR ),(OGCBCTR_putchars).nonlocals)));
 /* line 536: */
 /* line 537: */
TKCBCTR = HKCBCTR_xtm.Ym.Specs ;
UKCBCTR = TKCBCTR.upb -1;
SKCBCTR_spec = TKCBCTR.data;
for (;UKCBCTR-- >= 0;
(SKCBCTR_spec++
) )
{
 /* line 538: */
WKCBCTR = (*(&(SKCBCTR_spec->Ys))) ;
(void)(A_CALLPROC(OGCBCTR_putchars,(A_HISVEC(VKCBCTR,WKCBCTR,7,A68_CHAR )),(A_HISVEC(VKCBCTR,WKCBCTR,7,A68_CHAR ),(OGCBCTR_putchars).nonlocals)));
}
 /* line 539: */
 /* line 540: */
} 
break;
case 29: /* STRUCT(MODE107,MODE126,MODE107,MODE105,INT,INT)  */
 /* line 541: */
 /* line 542: */
(void)(PXIACTR_error(804));
break;
case 28: /* STRUCT(INT,REF MODE92,INT)  */
 /* line 543: */
 /* line 544: */
(void)(PXIACTR_error(805));
break;
case 23: /* STRUCT(MODE107,INT,INT,INT)  */
XKCBCTR_open = (XHCBCTR.data.mode23);
 /* line 545: */
 /* line 546: */
KECBCTR_syntheticmoduleno = XKCBCTR_open.Moduleno;
break;
case 33: /* STRUCT(INT,INT,INT)  */
 /* line 547: */
 /* line 548: */
(void)(PXIACTR_error(806));
break;
case 27: /* STRUCT(MODE136,REF MODE165,REF MODE92,INT)  */
 /* line 549: */
 /* line 550: */
(void)(PXIACTR_error(807));
break;
case 21: /* STRUCT(MODE107,MODE135,MODE135,INT)  */
YKCBCTR_xm = (XHCBCTR.data.mode21);
 /* line 551: */
 /* line 552: */
(void)(TCPACTR_initialisecurrentmodule(YKCBCTR_xm));
break;
case 32: /* STRUCT(REF MODE92,REF MODE92)  */
ZKCBCTR_xbu = (XHCBCTR.data.mode32);
 /* line 553: */
A_CLOSURE( BLCBCTR_generator, CLCBCTR_generator, DLCBCTR_generator );
(( DLCBCTR_generator * ) ( BLCBCTR_generator.nonlocals )) -> ZKCBCTR_xbu = ZKCBCTR_xbu;
 /* line 554: */
A_CALLPROC(BLCBCTR_generator,(A68_FALSE, &GLCBCTR),(A68_FALSE, &GLCBCTR,(BLCBCTR_generator).nonlocals));
HLCBCTR = ZKCBCTR_xbu.Decnos ;
JLCBCTR = A_VECARR(HLCBCTR,ILCBCTR) ;
(void)(A_R1ASSIGN2(JLCBCTR,GLCBCTR,A68_INT )) ;
ICPACTR_keptdecnos = GLCBCTR;
break;
case 22: /* STRUCT(MODE107,INT,INT,INT,MODE133)  */
KLCBCTR_s = (XHCBCTR.data.mode22);
 /* line 555: */
 /* line 556: */
 /* line 557: */
(void)(BEPACTR_initialisespec(KLCBCTR_s));
break;
default: 
 /* line 558: */
 /* line 564: */
/*SKIP*/;
break;
} 
} 
else
{ 
/*SKIP*/;
} 
A_PROC_EXIT(output);
return;
} 
#undef NL

A_STATIC A68_VOID  XMCBCTR_positioncurrent(void)
{ 
A_PROC_ENTRY(positioncurrent);
 /* line 635: */
 /* line 637: */
if ((*YZBBCTR_strptr)<(*XZBBCTR_streambuffer).upb)
{ 
 /* line 638: */
/*SKIP*/;
} 
else
{ 
 /* line 639: */
 /* line 640: */
if (((*ZZBBCTR_currentbuffer)+=1)>(*AACBCTR_buffers).upb)
{ 
 /* line 641: */
 /* line 642: */
(void)(WXIACTR_assert(ZMCBCTR, A68_FALSE));
} 
else
{ 
(void)((*XZBBCTR_streambuffer) = (*(&A_VINDEX((*AACBCTR_buffers),(*ZZBBCTR_currentbuffer)))));
 /* line 643: */
 /* line 644: */
(*YZBBCTR_strptr) = 0;
} 
} 
A_PROC_EXIT(positioncurrent);
return;
} 
#undef NL

A_STATIC A68_INT  ANCBCTR_nextbyte(void)
{ 
A68_INT  BNCBCTR;  /* clause result */
A68_INT  CNCBCTR;  /* YIELD */
A_PROC_ENTRY(nextbyte);
{ 
(void)(XMCBCTR_positioncurrent());
CNCBCTR = (*YZBBCTR_strptr)+=1 ;
BNCBCTR = (A68_INT)(unsigned char)(*(&A_VINDEX((*XZBBCTR_streambuffer),CNCBCTR)));
} 
A_PROC_EXIT(nextbyte);
return( BNCBCTR );
} 
#undef NL

A_STATIC A68_INT  DNCBCTR_nextint(void)
{ 
A68_VC  FNCBCTR;  /* OPERATORS - trim index */
A68_VC  GNCBCTR;  /* OPERATORS - trim index */
A68_VC  HNCBCTR;  /* OPERATORS - trim index */
A68_INT  ENCBCTR_nexti A_UNUSED = {0};
A68_INT  INCBCTR;  /* clause result */
A_PROC_ENTRY(nextint);
{ 
(void)(XMCBCTR_positioncurrent());
 /* line 653: */
GNCBCTR = A_VTRIM(FNCBCTR,((*XZBBCTR_streambuffer)),A_VTSCRIPT(&(FNCBCTR.upb),((*XZBBCTR_streambuffer)).upb,((*YZBBCTR_strptr)+1),((*XZBBCTR_streambuffer)).upb)) ;
ENCBCTR_nexti = GOAAOSF_stringvalue(A_VTRIM(HNCBCTR,(GNCBCTR),A_VTSCRIPT(&(HNCBCTR.upb),(GNCBCTR).upb,1,4)));
 /* line 654: */
(*YZBBCTR_strptr)+=4;
 /* line 655: */
 /* line 656: */
INCBCTR = ENCBCTR_nexti;
} 
A_PROC_EXIT(nextint);
return( INCBCTR );
} 
#undef NL

A_STATIC A68_VOID  LNCBCTR_nextstring(A68_VC  *ReturnedValue)
{ 
A68_INT  MNCBCTR;  /* YIELD */
A68_VC  NNCBCTR;  /* OPERATORS - trim index */
A68_VC  ONCBCTR;  /* clause result */
A_PROC_ENTRY(nextstring);
{ 
(void)(XMCBCTR_positioncurrent());
 /* line 664: */
MNCBCTR = (*YZBBCTR_strptr)+=1 ;
(void)(VMCBCTR_upbstring = (A68_INT)(unsigned char)(*(&A_VINDEX((*XZBBCTR_streambuffer),MNCBCTR))));
 /* line 665: */
(void)(WMCBCTR_string = A_VTRIM(NNCBCTR,((*XZBBCTR_streambuffer)),A_VTSCRIPT(&(NNCBCTR.upb),((*XZBBCTR_streambuffer)).upb,((*YZBBCTR_strptr)+1),((*YZBBCTR_strptr)+VMCBCTR_upbstring))));
 /* line 666: */
(*YZBBCTR_strptr)+=VMCBCTR_upbstring;
 /* line 667: */
 /* line 668: */
ONCBCTR = WMCBCTR_string;
} 
A_PROC_EXIT(nextstring);
*ReturnedValue = (ONCBCTR);
return;
} 
#undef NL

A_STATIC A68_INT  TNCBCTR_nexttype(void)
{ 
A68_INT  UNCBCTR_t A_UNUSED = {0};
A68_INT  VNCBCTR;  /* YIELD */
A68_BOOL  WNCBCTR;  /* clause result */
A68_275 * XNCBCTR;  /* YIELD */
A68_INT  YNCBCTR;  /* YIELD */
A68_BOOL  BOCBCTR;  /* optbool result */
A68_VC  FOCBCTR;  /* avoid structure result */
A68_212  HOCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_211  IOCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_301  JOCBCTR;  /* collateral clause result */
A68_212  MOCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  NOCBCTR;  /* YIELD */
A68_VC  OOCBCTR;  /* avoid structure result */
A68_212  POCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_212  SOCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  TOCBCTR;  /* YIELD */
A68_212  UOCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_211  VOCBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  WOCBCTR;  /* avoid structure result */
A68_VC  XOCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  YOCBCTR;  /* avoid structure result */
A68_VC  ZOCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  CPCBCTR;  /* clause result */
A_PROC_ENTRY(nexttype);
{ 
 /* line 679: */
for ( ;; )
{ 
 /* line 680: */
(void)(XMCBCTR_positioncurrent());
 /* line 681: */
VNCBCTR = (*YZBBCTR_strptr)+=1 ;
(void)(UNCBCTR_t = (A68_INT)(unsigned char)(*(&A_VINDEX((*XZBBCTR_streambuffer),VNCBCTR))));
 /* line 682: */
 /* line 683: */
WNCBCTR = (UNCBCTR_t<BBCBCTR_separatorbase);
if ( !WNCBCTR ) break;
 /* line 684: */
if (UNCBCTR_t<3)
{ 
XNCBCTR = (&A_R1INDEX(WYBBCTR_streams,ZLCBCTR_level)) ;
(*XNCBCTR) = AZBBCTR_current;
 /* line 685: */
 /* line 687: */
YNCBCTR = ZLCBCTR_level+=((3-UNCBCTR_t)-UNCBCTR_t) ;
(void)(AZBBCTR_current = (*(&A_R1INDEX(WYBBCTR_streams,YNCBCTR))));
} 
else
{ 
 /* line 688: */
 /* line 689: */
if (UNCBCTR_t==OBCBCTR_linetype)
{ 
(void)(XRIACTR_linenumber = A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
 /* line 690: */
(void)(PNCBCTR_line_start = A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
 /* line 691: */
(void)(QNCBCTR_line_length = A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
 /* line 692: */
RNCBCTR_statement_number = 0;
 /* line 694: */
 /* line 695: */
BOCBCTR = (ZCHACTR_tracelevel(AOCBCTR)!=0);
if ( BOCBCTR )
{ /* line 696: */
BOCBCTR = ((XRIACTR_linenumber/100)>SNCBCTR_hundred_counter);
}
if (BOCBCTR)
{ 
(void)(SNCBCTR_hundred_counter = (XRIACTR_linenumber/100));
 /* line 697: */
 /* line 698: */
 /* line 699: */
ROAAOSF_whole( XRIACTR_linenumber, 0, &FOCBCTR );
(void)(ISIACTR_typelineonterminal(A_VC_PLUS(A_VC_PLUS(EOCBCTR,FOCBCTR),GOCBCTR)));
} 
 /* line 701: */
 /* line 702: */
 /* line 704: */
if (BQIACTR_lineoption)
{ 
 /* line 705: */
 /* line 706: */
 /* line 707: */
 /* line 709: */
(void)(MDMACTR_writecstream(A_HVEC(IOCBCTR,A_UNITE(HOCBCTR,mode4,4,EIAACTR_cnewline),A68_212 ), NSLACTR_codestream(VRLACTR_currentlevel())));
} 
else
{ 
 /* line 710: */
 /* line 711: */
NOCBCTR = LOCBCTR ;
JOCBCTR.data[0] = A_UNITE(MOCBCTR,mode2,2,NOCBCTR);
 /* line 712: */
ROAAOSF_whole( XRIACTR_linenumber, 0, &OOCBCTR );
JOCBCTR.data[1] = A_UNITE(POCBCTR,mode2,2,OOCBCTR);
 /* line 713: */
TOCBCTR = ROCBCTR ;
JOCBCTR.data[2] = A_UNITE(SOCBCTR,mode2,2,TOCBCTR);
JOCBCTR.data[3] = A_UNITE(UOCBCTR,mode4,4,EIAACTR_cnewline);
 /* line 714: */
 /* line 715: */
(void)(MDMACTR_writecstream(A_HISVEC(VOCBCTR,JOCBCTR,4,A68_212 ), NSLACTR_codestream(VRLACTR_currentlevel())));
} 
 /* line 717: */
 /* line 718: */
if (YLCBCTR_printstream)
{ 
 /* line 719: */
 /* line 720: */
ROAAOSF_whole( XRIACTR_linenumber, 0, &WOCBCTR );
(void)(A_CALLPROC(MSIACTR_list,(A_VC_PLUS(WOCBCTR,A_HVEC(XOCBCTR,':',A68_CHAR ))),(A_VC_PLUS(WOCBCTR,A_HVEC(XOCBCTR,':',A68_CHAR )),(MSIACTR_list).nonlocals)));
} 
} 
else
{ 
 /* line 721: */
 /* line 722: */
if (UNCBCTR_t==PBCBCTR_maptype)
{ 
RNCBCTR_statement_number+=1;
 /* line 723: */
 /* line 724: */
if (YLCBCTR_printstream)
{ 
 /* line 725: */
 /* line 726: */
ROAAOSF_whole( XRIACTR_linenumber, 0, &YOCBCTR );
(void)(A_CALLPROC(MSIACTR_list,(A_VC_PLUS(YOCBCTR,A_HVEC(ZOCBCTR,':',A68_CHAR ))),(A_VC_PLUS(YOCBCTR,A_HVEC(ZOCBCTR,':',A68_CHAR )),(MSIACTR_list).nonlocals)));
} 
} 
else
{ 
 /* line 727: */
 /* line 728: */
(void)(WXIACTR_assert(BPCBCTR, A68_FALSE));
} 
} 
} 
}
 /* line 729: */
 /* line 730: */
CPCBCTR = UNCBCTR_t;
} 
A_PROC_EXIT(nexttype);
return( CPCBCTR );
} 
#undef NL

A_STATIC A68_VOID  FPCBCTR_nextxchars(A68_INT  Suggestedsize, A68_INT  Insertion, A68_VC  *ReturnedValue)
{ 
A68_INT  GPCBCTR_type A_UNUSED = {0};
A68_INT  HPCBCTR_used A_UNUSED = {0};
A68_INT  IPCBCTR_resultsize A_UNUSED = {0};
A68_103  KPCBCTR_generator;   /* proc value of non-global proc */
A68_VC  QPCBCTR;  /* avoid structure result */
A68_VC  PPCBCTR_result A_UNUSED = {0};
A68_VC  RPCBCTR;  /* clause result */
A68_VC  SPCBCTR;  /* avoid structure result */
A68_VC  TPCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  UPCBCTR;  /* avoid structure result */
A68_VC  VPCBCTR;  /* avoid structure result */
A68_VC  WPCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XPCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  YPCBCTR;  /* avoid structure result */
A68_VC  ZPCBCTR;  /* avoid structure result */
A68_VC  AQCBCTR;  /* avoid structure result */
A68_VC  BQCBCTR_string A_UNUSED = {0};
A68_INT  CQCBCTR_size A_UNUSED = {0};
A68_INT  DQCBCTR_newused A_UNUSED = {0};
A68_INT  EQCBCTR_newresultsize A_UNUSED = {0};
A68_103  GQCBCTR_generator;   /* proc value of non-global proc */
A68_VC  LQCBCTR;  /* avoid structure result */
A68_VC  MQCBCTR_newresult A_UNUSED = {0};
A68_VC  NQCBCTR;  /* OPERATORS - trim index */
A68_VC  OQCBCTR;  /* OPERATORS - trim index */
A68_VC  PQCBCTR;  /* YIELD */
A68_VC  QQCBCTR;  /* OPERATORS - assign op */
A68_VC  RQCBCTR;  /* OPERATORS - trim index */
A68_VC  SQCBCTR;  /* YIELD */
A68_BOOL  TQCBCTR;  /* clause result */
A68_VC  WQCBCTR;  /* clause result */
A68_VC  XQCBCTR;  /* OPERATORS - trim index */
A_PROC_ENTRY(nextxchars);
 /* line 746: */
 /* line 747: */
{ 
GPCBCTR_type = TNCBCTR_nexttype();
 /* line 748: */
HPCBCTR_used = 0;
IPCBCTR_resultsize = Suggestedsize;
 /* line 749: */
A_CLOSURE( KPCBCTR_generator, LPCBCTR_generator, MPCBCTR_generator );
(( MPCBCTR_generator * ) ( KPCBCTR_generator.nonlocals )) -> IPCBCTR_resultsize = (&IPCBCTR_resultsize);
A_CALLPROC(KPCBCTR_generator,(A68_FALSE, &QPCBCTR),(A68_FALSE, &QPCBCTR,(KPCBCTR_generator).nonlocals));
PPCBCTR_result = QPCBCTR;
 /* line 751: */
for ( ;; )
{ 
 /* line 753: */
 /* line 754: */
switch ( Insertion )
{ 
case 1: 
 /* line 755: */
LNCBCTR_nextstring(  &SPCBCTR );
RPCBCTR = A_VC_PLUS(SPCBCTR,A_HVEC(TPCBCTR,GVBAOSF_newline_char,A68_CHAR ));
break;
case 2: 
 /* line 756: */
LNCBCTR_nextstring(  &UPCBCTR );
DRJACTR_replacecontrolchars( UPCBCTR, &VPCBCTR );
RPCBCTR = A_VC_PLUS(A_VC_PLUS(VPCBCTR,A_HVEC(WPCBCTR,'\\',A68_CHAR )),A_HVEC(XPCBCTR,GVBAOSF_newline_char,A68_CHAR ));
break;
case 3: 
 /* line 757: */
 /* line 758: */
LNCBCTR_nextstring(  &YPCBCTR );
DRJACTR_replacecontrolchars( YPCBCTR, &ZPCBCTR );
RPCBCTR = ZPCBCTR;
break;
default: 
LNCBCTR_nextstring(  &AQCBCTR );
RPCBCTR = AQCBCTR;
break;
} 
BQCBCTR_string = RPCBCTR;
 /* line 759: */
CQCBCTR_size = BQCBCTR_string.upb;
 /* line 760: */
DQCBCTR_newused = (HPCBCTR_used+CQCBCTR_size);
 /* line 762: */
 /* line 763: */
 /* line 764: */
if (DQCBCTR_newused>IPCBCTR_resultsize)
{ 
EQCBCTR_newresultsize = (2*PLAAOSF_max(DQCBCTR_newused, IPCBCTR_resultsize));
 /* line 765: */
A_CLOSURE( GQCBCTR_generator, HQCBCTR_generator, IQCBCTR_generator );
(( IQCBCTR_generator * ) ( GQCBCTR_generator.nonlocals )) -> EQCBCTR_newresultsize = EQCBCTR_newresultsize;
A_CALLPROC(GQCBCTR_generator,(A68_FALSE, &LQCBCTR),(A68_FALSE, &LQCBCTR,(GQCBCTR_generator).nonlocals));
MQCBCTR_newresult = LQCBCTR;
 /* line 766: */
PQCBCTR = A_VTRIM(NQCBCTR,(MQCBCTR_newresult),A_VTSCRIPT(&(NQCBCTR.upb),(MQCBCTR_newresult).upb,1,HPCBCTR_used)) ;
QQCBCTR = A_VTRIM(OQCBCTR,(PPCBCTR_result),A_VTSCRIPT(&(OQCBCTR.upb),(PPCBCTR_result).upb,1,HPCBCTR_used)) ;
(void)(A_VASSIGN2(QQCBCTR,PQCBCTR,A68_CHAR ));
 /* line 767: */
PPCBCTR_result = MQCBCTR_newresult;
 /* line 768: */
 /* line 769: */
IPCBCTR_resultsize = EQCBCTR_newresultsize;
} 
 /* line 770: */
SQCBCTR = A_VTRIM(RQCBCTR,(PPCBCTR_result),A_VTSCRIPT(&(RQCBCTR.upb),(PPCBCTR_result).upb,(HPCBCTR_used+1),DQCBCTR_newused)) ;
(void)(A_VASSIGN2(BQCBCTR_string,SQCBCTR,A68_CHAR ));
 /* line 771: */
HPCBCTR_used = DQCBCTR_newused;
 /* line 772: */
 /* line 773: */
 /* line 774: */
TQCBCTR = (GPCBCTR_type==QBCBCTR_notlastxcharstype);
if ( !TQCBCTR ) break;
 /* line 775: */
(void)(GPCBCTR_type = TNCBCTR_nexttype());
}
 /* line 776: */
(void)(WXIACTR_assert(VQCBCTR, (GPCBCTR_type==RBCBCTR_lastxcharstype)));
 /* line 777: */
 /* line 778: */
WQCBCTR = A_VTRIM(XQCBCTR,(PPCBCTR_result),A_VTSCRIPT(&(XQCBCTR.upb),(PPCBCTR_result).upb,1,HPCBCTR_used));
} 
A_PROC_EXIT(nextxchars);
*ReturnedValue = (WQCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  YQCBCTR_nextstreamimperative(A68_186  *ReturnedValue)
{ 
A68_INT  ZQCBCTR_type A_UNUSED = {0};
A68_VC  BRCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  CRCBCTR;  /* avoid structure result */
A68_200  ERCBCTR_s A_UNUSED = {0};
A68_INT * FRCBCTR;  /* YIELD */
A68_INT * GRCBCTR;  /* YIELD */
A68_BITS * HRCBCTR;  /* YIELD */
A68_INT * IRCBCTR;  /* YIELD */
A68_186  JRCBCTR;  /* clause result */
A68_186  KRCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_202  LRCBCTR_t A_UNUSED = {0};
A68_INT * MRCBCTR;  /* YIELD */
A68_BITS * NRCBCTR;  /* YIELD */
A68_186  ORCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_200  PRCBCTR_semi A_UNUSED = {0};
A68_INT * QRCBCTR;  /* YIELD */
A68_BITS * RRCBCTR;  /* YIELD */
A68_186  SRCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  TRCBCTR_loadtype A_UNUSED = {0};
A68_INT  URCBCTR;  /* clause result */
A68_186  VRCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_BOOL  WRCBCTR;  /* YIELD */
A68_186  XRCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_BOOL  YRCBCTR;  /* YIELD */
A68_146  ZRCBCTR_e A_UNUSED = {0};
A68_INT * ASCBCTR;  /* YIELD */
A68_186  BSCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_146  CSCBCTR_s A_UNUSED = {0};
A68_INT * DSCBCTR;  /* YIELD */
A68_186  ESCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_146  FSCBCTR_n A_UNUSED = {0};
A68_INT * GSCBCTR;  /* YIELD */
A68_186  HSCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_199  ISCBCTR_c A_UNUSED = {0};
A68_INT * JSCBCTR;  /* YIELD */
A68_INT * KSCBCTR;  /* YIELD */
A68_VC  LSCBCTR;  /* avoid structure result */
A68_VC * MSCBCTR;  /* YIELD */
A68_186  NSCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_186  OSCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_186  PSCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_186  QSCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_106  RSCBCTR_l A_UNUSED = {0};
A68_INT * SSCBCTR;  /* YIELD */
A68_186  TSCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_188  USCBCTR_a A_UNUSED = {0};
A68_INT * VSCBCTR;  /* YIELD */
A68_VC  WSCBCTR;  /* avoid structure result */
A68_VC * XSCBCTR;  /* YIELD */
A68_186  YSCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_187  ZSCBCTR_c A_UNUSED = {0};
A68_VC  ATCBCTR;  /* avoid structure result */
A68_VC * BTCBCTR;  /* YIELD */
A68_186  CTCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_190  DTCBCTR_s A_UNUSED = {0};
A68_INT * ETCBCTR;  /* YIELD */
A68_VC  FTCBCTR;  /* avoid structure result */
A68_VC * GTCBCTR;  /* YIELD */
A68_186  HTCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_186  ITCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  JTCBCTR;  /* YIELD */
A68_186  KTCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_186  LTCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  MTCBCTR;  /* YIELD */
A68_186  NTCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  OTCBCTR_mode A_UNUSED = {0};
A68_140  PTCBCTR;  /* collateral clause result */
A68_VC  QTCBCTR;  /* avoid structure result */
A68_186  RTCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_191  STCBCTR_o A_UNUSED = {0};
A68_INT * TTCBCTR;  /* YIELD */
A68_INT * UTCBCTR;  /* YIELD */
A68_INT * VTCBCTR;  /* YIELD */
A68_INT  WTCBCTR_n A_UNUSED = {0};
A68_BOOL  XTCBCTR;  /* clause result */
A68_BOOL  YTCBCTR;  /* clause result */
A68_INT  ZTCBCTR;  /* ADICOPS - MOD */
A68_INT  AUCBCTR;  /* ADICOPS - MOD */
A68_INT  BUCBCTR;  /* ADICOPS - MOD */
A68_202  CUCBCTR;  /* collateral clause result */
A68_186  DUCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_186  EUCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  FUCBCTR_miscellaneoustype A_UNUSED = {0};
A68_INT  GUCBCTR;  /* clause result */
A68_195  HUCBCTR_u A_UNUSED = {0};
A68_INT * IUCBCTR;  /* YIELD */
A68_BITS * JUCBCTR;  /* YIELD */
A68_INT * KUCBCTR;  /* YIELD */
A68_186  LUCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_194  MUCBCTR_s A_UNUSED = {0};
A68_INT * NUCBCTR;  /* YIELD */
A68_VC  OUCBCTR;  /* avoid structure result */
A68_VC * PUCBCTR;  /* YIELD */
A68_INT * QUCBCTR;  /* YIELD */
A68_BOOL * RUCBCTR;  /* YIELD */
A68_186  SUCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_194  TUCBCTR_e A_UNUSED = {0};
A68_INT * UUCBCTR;  /* YIELD */
A68_VC  VUCBCTR;  /* OPERATORS - nil -> mode */
A68_VC * WUCBCTR;  /* YIELD */
A68_INT * XUCBCTR;  /* YIELD */
A68_BOOL * YUCBCTR;  /* YIELD */
A68_186  ZUCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_194  AVCBCTR_d A_UNUSED = {0};
A68_INT * BVCBCTR;  /* YIELD */
A68_VC  CVCBCTR;  /* OPERATORS - nil -> mode */
A68_VC * DVCBCTR;  /* YIELD */
A68_INT * EVCBCTR;  /* YIELD */
A68_BOOL * FVCBCTR;  /* YIELD */
A68_186  GVCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_193  HVCBCTR_r A_UNUSED = {0};
A68_INT * IVCBCTR;  /* YIELD */
A68_INT * JVCBCTR;  /* YIELD */
A68_BITS * KVCBCTR;  /* YIELD */
A68_INT * LVCBCTR;  /* YIELD */
A68_VC  MVCBCTR;  /* avoid structure result */
A68_VC * NVCBCTR;  /* YIELD */
A68_186  OVCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_186  RVCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_186  SVCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_204  TVCBCTR_s A_UNUSED = {0};
A68_INT * UVCBCTR;  /* YIELD */
A68_INT * VVCBCTR;  /* YIELD */
A68_INT * WVCBCTR;  /* YIELD */
A68_186  XVCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_196  YVCBCTR_c A_UNUSED = {0};
A68_INT * ZVCBCTR;  /* YIELD */
A68_186  AWCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_186  BWCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_191  CWCBCTR_v A_UNUSED = {0};
A68_INT * DWCBCTR;  /* YIELD */
A68_INT * EWCBCTR;  /* YIELD */
A68_186  FWCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_203  GWCBCTR_cl A_UNUSED = {0};
A68_INT * HWCBCTR;  /* YIELD */
A68_INT * IWCBCTR;  /* YIELD */
A68_292  KWCBCTR_generator;   /* proc value of non-global proc */
A68_185  PWCBCTR;  /* avoid structure result */
A68_185 * QWCBCTR;  /* YIELD */
A68_INT * RWCBCTR_actual A_UNUSED = {0};
A68_185  SWCBCTR;  /* forall yield */
A68_INT  TWCBCTR;  /* forall loop counter */
A68_186  UWCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_205  VWCBCTR_x A_UNUSED = {0};
A68_INT * WWCBCTR;  /* YIELD */
A68_303  YWCBCTR_generator;   /* proc value of non-global proc */
A68_206  DXCBCTR;  /* avoid structure result */
A68_206 * EXCBCTR;  /* YIELD */
A68_VC  FXCBCTR;  /* avoid structure result */
A68_VC * GXCBCTR;  /* YIELD */
A68_VC  HXCBCTR;  /* avoid structure result */
A68_VC * IXCBCTR;  /* YIELD */
A68_VC  JXCBCTR;  /* avoid structure result */
A68_VC * KXCBCTR;  /* YIELD */
A68_VC  LXCBCTR;  /* avoid structure result */
A68_VC * MXCBCTR;  /* YIELD */
A68_VC * NXCBCTR_ysname A_UNUSED = {0};
A68_206  OXCBCTR;  /* forall yield */
A68_INT  PXCBCTR;  /* forall loop counter */
A68_VC  QXCBCTR;  /* avoid structure result */
A68_186  RXCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_186  SXCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_154  TXCBCTR_w A_UNUSED = {0};
A68_INT * UXCBCTR;  /* YIELD */
A68_186  VXCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_192  WXCBCTR_i A_UNUSED = {0};
A68_INT * XXCBCTR;  /* YIELD */
A68_INT * YXCBCTR;  /* YIELD */
A68_INT * ZXCBCTR;  /* YIELD */
A68_VC  AYCBCTR;  /* avoid structure result */
A68_VC * BYCBCTR;  /* YIELD */
A68_186  CYCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_201  DYCBCTR_s A_UNUSED = {0};
A68_INT * EYCBCTR;  /* YIELD */
A68_INT * FYCBCTR;  /* YIELD */
A68_BITS * GYCBCTR;  /* YIELD */
A68_INT * HYCBCTR;  /* YIELD */
A68_186  IYCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_186  JYCBCTR_imperative A_UNUSED = {0};
A68_VC  KYCBCTR;  /* avoid structure result */
A68_VC  LYCBCTR_string A_UNUSED = {0};
A68_VC  MYCBCTR;  /* OPERATORS - trim index */
A68_VC  NYCBCTR;  /* OPERATORS - trim index */
A68_186  OYCBCTR;  /* clause result */
A_PROC_ENTRY(nextstreamimperative);
{ 
ZQCBCTR_type = TNCBCTR_nexttype();
 /* line 787: */
 /* line 788: */
if (YLCBCTR_printstream)
{ 
 /* line 789: */
ROAAOSF_whole( ZQCBCTR_type, (-3), &CRCBCTR );
(void)(A_CALLPROC(MSIACTR_list,(A_VC_PLUS(A_VC_PLUS(A_HVEC(BRCBCTR,'[',A68_CHAR ),CRCBCTR),DRCBCTR)),(A_VC_PLUS(A_VC_PLUS(A_HVEC(BRCBCTR,'[',A68_CHAR ),CRCBCTR),DRCBCTR),(MSIACTR_list).nonlocals)));
} 
 /* line 791: */
 /* line 793: */
 /* line 794: */
 /* line 796: */
switch ( ((ZQCBCTR_type/MBCBCTR_rangesize)+1) )
{ 
case 1: 
 /* line 797: */
 /* line 800: */
switch ( (ZQCBCTR_type/NBCBCTR_subrangesize) )
{ 
case 1: 
{ 
FRCBCTR = (&((&ERCBCTR_s)->Fn)) ;
(void)((*FRCBCTR) = (ZQCBCTR_type-BBCBCTR_separatorbase));
 /* line 801: */
GRCBCTR = (&((&ERCBCTR_s)->Mode)) ;
(void)((*GRCBCTR) = A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
HRCBCTR = (&((&ERCBCTR_s)->Props)) ;
(void)((*HRCBCTR) = (A68_BITS )A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
 /* line 802: */
IRCBCTR = (&((&ERCBCTR_s)->Param)) ;
(void)((*IRCBCTR) = A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
 /* line 803: */
 /* line 804: */
 /* line 807: */
JRCBCTR = A_UNITE(KRCBCTR,mode20,20,ERCBCTR_s);
} 
break;
case 2: 
{ 
MRCBCTR = (&((&LRCBCTR_t)->Fn)) ;
(void)((*MRCBCTR) = (ZQCBCTR_type-CBCBCTR_terminatorbase));
 /* line 808: */
(void)(A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
NRCBCTR = (&((&LRCBCTR_t)->Props)) ;
(void)((*NRCBCTR) = (A68_BITS )A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
(void)(A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
 /* line 809: */
 /* line 810: */
 /* line 813: */
JRCBCTR = A_UNITE(ORCBCTR,mode22,22,LRCBCTR_t);
} 
break;
case 3: 
{ 
QRCBCTR = (&((&PRCBCTR_semi)->Fn)) ;
(*QRCBCTR) = WBAACTR_semifn;
 /* line 814: */
RRCBCTR = (&((&PRCBCTR_semi)->Props)) ;
(void)((*RRCBCTR) = (A68_BITS )((ZQCBCTR_type-DBCBCTR_semibase)*2048));
 /* line 815: */
 /* line 816: */
 /* line 817: */
 /* line 820: */
JRCBCTR = A_UNITE(SRCBCTR,mode20,20,PRCBCTR_semi);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
case 2: 
 /* line 821: */
{ 
TRCBCTR_loadtype = (ZQCBCTR_type-EBCBCTR_loadbase);
 /* line 822: */
 /* line 823: */
 /* line 825: */
URCBCTR = ((TRCBCTR_loadtype/NBCBCTR_subrangesize)+1);
switch ( URCBCTR )
{ 
case 1: 
 /* line 826: */
 /* line 827: */
switch ( TRCBCTR_loadtype )
{ 
case 1: 
 /* line 829: */
WRCBCTR = A68_FALSE ;
JRCBCTR = A_UNITE(VRCBCTR,mode3,3,WRCBCTR);
break;
case 2: 
 /* line 831: */
YRCBCTR = A68_TRUE ;
JRCBCTR = A_UNITE(XRCBCTR,mode3,3,YRCBCTR);
break;
case 3: 
{ 
ASCBCTR = (&((&ZRCBCTR_e)->Nse)) ;
(*ASCBCTR) = ZAAACTR_emptyfn;
 /* line 833: */
JRCBCTR = A_UNITE(BSCBCTR,mode1,1,ZRCBCTR_e);
} 
break;
case 4: 
{ 
DSCBCTR = (&((&CSCBCTR_s)->Nse)) ;
(*DSCBCTR) = ABAACTR_skipfn;
 /* line 835: */
JRCBCTR = A_UNITE(ESCBCTR,mode1,1,CSCBCTR_s);
} 
break;
case 5: 
{ 
GSCBCTR = (&((&FSCBCTR_n)->Nse)) ;
(*GSCBCTR) = BBAACTR_nilfn;
 /* line 837: */
JRCBCTR = A_UNITE(HSCBCTR,mode1,1,FSCBCTR_n);
} 
break;
case 6: 
{ 
JSCBCTR = (&((&ISCBCTR_c)->Mode)) ;
(void)((*JSCBCTR) = A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
KSCBCTR = (&((&ISCBCTR_c)->Number)) ;
(void)((*KSCBCTR) = A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
FPCBCTR_nextxchars( 128, 1, &LSCBCTR );
MSCBCTR = (&((&ISCBCTR_c)->Insert)) ;
(*MSCBCTR) = LSCBCTR;
 /* line 839: */
JRCBCTR = A_UNITE(NSCBCTR,mode19,19,ISCBCTR_c);
} 
break;
case 7: 
 /* line 841: */
SXIACTR_terminalerror(600) ;
JRCBCTR = A_EMPTY(OSCBCTR,26);
break;
case 8: 
 /* line 843: */
SXIACTR_terminalerror(600) ;
JRCBCTR = A_EMPTY(PSCBCTR,26);
break;
case 9: 
 /* line 845: */
SXIACTR_terminalerror(600) ;
JRCBCTR = A_EMPTY(QSCBCTR,26);
break;
case 10: 
{ 
SSCBCTR = (&((&RSCBCTR_l)->Labno)) ;
(void)((*SSCBCTR) = A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
 /* line 847: */
JRCBCTR = A_UNITE(TSCBCTR,mode5,5,RSCBCTR_l);
} 
break;
case 11: 
{ 
VSCBCTR = (&((&USCBCTR_a)->Mode)) ;
(void)((*VSCBCTR) = A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
FPCBCTR_nextxchars( 400, 1, &WSCBCTR );
XSCBCTR = (&((&USCBCTR_a)->String)) ;
(*XSCBCTR) = WSCBCTR;
 /* line 849: */
JRCBCTR = A_UNITE(YSCBCTR,mode7,7,USCBCTR_a);
} 
break;
case 12: 
{ 
FPCBCTR_nextxchars( 1, 3, &ATCBCTR );
BTCBCTR = (&((&ZSCBCTR_c)->Representation)) ;
(*BTCBCTR) = ATCBCTR;
 /* line 851: */
JRCBCTR = A_UNITE(CTCBCTR,mode4,4,ZSCBCTR_c);
} 
break;
case 13: 
{ 
ETCBCTR = (&((&DTCBCTR_s)->Mode)) ;
(void)((*ETCBCTR) = A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
FPCBCTR_nextxchars( 160, 0, &FTCBCTR );
GTCBCTR = (&((&DTCBCTR_s)->Denotation)) ;
(*GTCBCTR) = FTCBCTR;
 /* line 854: */
JRCBCTR = A_UNITE(HTCBCTR,mode9,9,DTCBCTR_s);
} 
break;
case 14: 
 /* line 856: */
JTCBCTR = A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)) ;
JRCBCTR = A_UNITE(ITCBCTR,mode2,2,JTCBCTR);
break;
case 15: 
 /* line 857: */
 /* line 860: */
SXIACTR_terminalerror(600) ;
JRCBCTR = A_EMPTY(KTCBCTR,26);
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
case 2: 
 /* line 861: */
 /* line 862: */
 /* line 863: */
if (ZQCBCTR_type==80)
{ 
 /* line 864: */
MTCBCTR = A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)) ;
JRCBCTR = A_UNITE(LTCBCTR,mode2,2,MTCBCTR);
} 
else
{ 
 /* line 865: */
 /* line 868: */
SXIACTR_terminalerror(600) ;
JRCBCTR = A_EMPTY(NTCBCTR,26);
} 
break;
case 3: 
{ 
OTCBCTR_mode = (ZQCBCTR_type-GBCBCTR_numberbase);
PTCBCTR.Mode = OTCBCTR_mode;
LNCBCTR_nextstring(  &QTCBCTR );
PTCBCTR.Nu = QTCBCTR;
 /* line 869: */
 /* line 872: */
JRCBCTR = A_UNITE(RTCBCTR,mode6,6,PTCBCTR);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
break;
case 3: 
 /* line 873: */
{ 
 /* line 874: */
TTCBCTR = (&((&STCBCTR_o)->Fn)) ;
(void)((*TTCBCTR) = (ZQCBCTR_type-HBCBCTR_operbase));
 /* line 875: */
UTCBCTR = (&((&STCBCTR_o)->Mode)) ;
(void)((*UTCBCTR) = A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
 /* line 876: */
VTCBCTR = (&((&STCBCTR_o)->Param)) ;
(void)((*VTCBCTR) = A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
 /* line 877: */
 /* line 878: */
{ 
WTCBCTR_n = ((*(&((&STCBCTR_o)->Param)))/16);
 /* line 879: */
XTCBCTR = ((WTCBCTR_n==4)|(WTCBCTR_n==5));
} 
 /* line 880: */
AUCBCTR = (*(&((&STCBCTR_o)->Param))) ;
BUCBCTR = 16 ;
YTCBCTR = ((((*(&((&STCBCTR_o)->Fn)))==10)&XTCBCTR)&(A_MOD(AUCBCTR,BUCBCTR,ZTCBCTR)==1));
if (YTCBCTR)
{ 
CUCBCTR.Fn = ICAACTR_optboolfn;
 /* line 881: */
CUCBCTR.Props = 0X0U;
 /* line 882: */
JRCBCTR = A_UNITE(DUCBCTR,mode22,22,CUCBCTR);
} 
else
{ 
 /* line 885: */
JRCBCTR = A_UNITE(EUCBCTR,mode10,10,STCBCTR_o);
} 
} 
break;
case 4: 
 /* line 886: */
{ 
FUCBCTR_miscellaneoustype = (ZQCBCTR_type-IBCBCTR_miscellaneousbase);
 /* line 887: */
 /* line 888: */
 /* line 890: */
GUCBCTR = ((FUCBCTR_miscellaneoustype/NBCBCTR_subrangesize)+1);
switch ( GUCBCTR )
{ 
case 1: 
 /* line 891: */
 /* line 893: */
switch ( FUCBCTR_miscellaneoustype )
{ 
case 1: 
{ 
IUCBCTR = (&((&HUCBCTR_u)->Mode)) ;
(void)((*IUCBCTR) = A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
JUCBCTR = (&((&HUCBCTR_u)->Props)) ;
(void)((*JUCBCTR) = (A68_BITS )A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
KUCBCTR = (&((&HUCBCTR_u)->Param)) ;
(void)((*KUCBCTR) = A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
 /* line 896: */
JRCBCTR = A_UNITE(LUCBCTR,mode15,15,HUCBCTR_u);
} 
break;
case 2: 
{ 
NUCBCTR = (&((&MUCBCTR_s)->Labno)) ;
(void)((*NUCBCTR) = A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
LNCBCTR_nextstring(  &OUCBCTR );
PUCBCTR = (&((&MUCBCTR_s)->Name)) ;
(*PUCBCTR) = OUCBCTR;
 /* line 897: */
QUCBCTR = (&((&MUCBCTR_s)->Status)) ;
(*QUCBCTR) = 0;
RUCBCTR = (&((&MUCBCTR_s)->Notsetting)) ;
(*RUCBCTR) = A68_TRUE;
 /* line 898: */
 /* line 899: */
 /* line 902: */
JRCBCTR = A_UNITE(SUCBCTR,mode14,14,MUCBCTR_s);
} 
break;
case 3: 
{ 
UUCBCTR = (&((&TUCBCTR_e)->Labno)) ;
(void)((*UUCBCTR) = A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
WUCBCTR = (&((&TUCBCTR_e)->Name)) ;
(void)((*WUCBCTR) = A_VVAC(VUCBCTR));
 /* line 903: */
XUCBCTR = (&((&TUCBCTR_e)->Status)) ;
(void)((*XUCBCTR) = A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
YUCBCTR = (&((&TUCBCTR_e)->Notsetting)) ;
(*YUCBCTR) = A68_TRUE;
 /* line 904: */
 /* line 905: */
 /* line 908: */
JRCBCTR = A_UNITE(ZUCBCTR,mode14,14,TUCBCTR_e);
} 
break;
case 4: 
{ 
BVCBCTR = (&((&AVCBCTR_d)->Labno)) ;
(void)((*BVCBCTR) = A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
DVCBCTR = (&((&AVCBCTR_d)->Name)) ;
(void)((*DVCBCTR) = A_VVAC(CVCBCTR));
 /* line 909: */
EVCBCTR = (&((&AVCBCTR_d)->Status)) ;
(*EVCBCTR) = 0;
FVCBCTR = (&((&AVCBCTR_d)->Notsetting)) ;
(*FVCBCTR) = A68_FALSE;
 /* line 910: */
 /* line 911: */
 /* line 914: */
JRCBCTR = A_UNITE(GVCBCTR,mode14,14,AVCBCTR_d);
} 
break;
case 5: 
{ 
IVCBCTR = (&((&HVCBCTR_r)->Rdenno)) ;
(void)((*IVCBCTR) = A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
JVCBCTR = (&((&HVCBCTR_r)->Mode)) ;
(void)((*JVCBCTR) = A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
KVCBCTR = (&((&HVCBCTR_r)->Props)) ;
(void)((*KVCBCTR) = (A68_BITS )A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
 /* line 915: */
LVCBCTR = (&((&HVCBCTR_r)->Maxname)) ;
(void)((*LVCBCTR) = A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
LNCBCTR_nextstring(  &MVCBCTR );
NVCBCTR = (&((&HVCBCTR_r)->Name)) ;
(*NVCBCTR) = MVCBCTR;
 /* line 916: */
 /* line 917: */
 /* line 919: */
JRCBCTR = A_UNITE(OVCBCTR,mode12,12,HVCBCTR_r);
} 
break;
case 6: 
 /* line 921: */
WXIACTR_assert(QVCBCTR, A68_FALSE) ;
JRCBCTR = A_EMPTY(RVCBCTR,26);
break;
case 7: 
 /* line 924: */
SXIACTR_terminalerror(600) ;
JRCBCTR = A_EMPTY(SVCBCTR,26);
break;
case 8: 
 /* line 925: */
if (KOOACTR_composition)
{ 
UVCBCTR = (&((&TVCBCTR_s)->Moduleno)) ;
(void)((*UVCBCTR) = A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
VVCBCTR = (&((&TVCBCTR_s)->I)) ;
(void)((*VVCBCTR) = A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
WVCBCTR = (&((&TVCBCTR_s)->J)) ;
(void)((*WVCBCTR) = A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
 /* line 926: */
JRCBCTR = A_UNITE(XVCBCTR,mode24,24,TVCBCTR_s);
} 
else
{ 
(void)(A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
ZVCBCTR = (&((&YVCBCTR_c)->I)) ;
(void)((*ZVCBCTR) = A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
(void)(A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
 /* line 927: */
 /* line 929: */
JRCBCTR = A_UNITE(AWCBCTR,mode16,16,YVCBCTR_c);
} 
break;
case 9: 
 /* line 931: */
SXIACTR_terminalerror(600) ;
JRCBCTR = A_EMPTY(BWCBCTR,26);
break;
case 10: 
{ 
DWCBCTR = (&((&CWCBCTR_v)->Fn)) ;
(*DWCBCTR) = LGAACTR_voidfn;
EWCBCTR = (&((&CWCBCTR_v)->Mode)) ;
(*EWCBCTR) = UEAACTR_voidmode;
 /* line 934: */
JRCBCTR = A_UNITE(FWCBCTR,mode10,10,CWCBCTR_v);
} 
break;
case 11: 
{ 
HWCBCTR = (&((&GWCBCTR_cl)->Body)) ;
(void)((*HWCBCTR) = A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
IWCBCTR = (&((&GWCBCTR_cl)->Moduleno)) ;
(void)((*IWCBCTR) = A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
 /* line 935: */
A_CLOSURE( KWCBCTR_generator, LWCBCTR_generator, MWCBCTR_generator );
A_CALLPROC(KWCBCTR_generator,(A68_FALSE, &PWCBCTR),(A68_FALSE, &PWCBCTR,(KWCBCTR_generator).nonlocals));
QWCBCTR = (&((&GWCBCTR_cl)->Actuals)) ;
(*QWCBCTR) = PWCBCTR;
(void)(TNCBCTR_nexttype());
 /* line 936: */
SWCBCTR = (*(&((&GWCBCTR_cl)->Actuals))) ;
TWCBCTR = SWCBCTR.dim[0].upb - SWCBCTR.dim[0].lwb;
RWCBCTR_actual = SWCBCTR.data;
for (;TWCBCTR-- >= 0;
(RWCBCTR_actual += SWCBCTR.dim[0].stride
) )
{
(void)((*RWCBCTR_actual) = A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
}
 /* line 937: */
 /* line 938: */
 /* line 941: */
JRCBCTR = A_UNITE(UWCBCTR,mode23,23,GWCBCTR_cl);
} 
break;
case 12: 
{ 
WWCBCTR = (&((&VWCBCTR_x)->Moduleno)) ;
(void)((*WWCBCTR) = A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
 /* line 942: */
A_CLOSURE( YWCBCTR_generator, ZWCBCTR_generator, AXCBCTR_generator );
A_CALLPROC(YWCBCTR_generator,(A68_FALSE, &DXCBCTR),(A68_FALSE, &DXCBCTR,(YWCBCTR_generator).nonlocals));
EXCBCTR = (&((&VWCBCTR_x)->Ysnames)) ;
(*EXCBCTR) = DXCBCTR;
LNCBCTR_nextstring(  &FXCBCTR );
GXCBCTR = (&((&VWCBCTR_x)->Name)) ;
(*GXCBCTR) = FXCBCTR;
 /* line 943: */
LNCBCTR_nextstring(  &HXCBCTR );
IXCBCTR = (&((&VWCBCTR_x)->Uname)) ;
(*IXCBCTR) = HXCBCTR;
LNCBCTR_nextstring(  &JXCBCTR );
KXCBCTR = (&((&VWCBCTR_x)->Lname)) ;
(*KXCBCTR) = JXCBCTR;
 /* line 944: */
LNCBCTR_nextstring(  &LXCBCTR );
MXCBCTR = (&((&VWCBCTR_x)->Gname)) ;
(*MXCBCTR) = LXCBCTR;
 /* line 945: */
OXCBCTR = (*(&((&VWCBCTR_x)->Ysnames))) ;
PXCBCTR = OXCBCTR.dim[0].upb - OXCBCTR.dim[0].lwb;
NXCBCTR_ysname = OXCBCTR.data;
for (;PXCBCTR-- >= 0;
(NXCBCTR_ysname += OXCBCTR.dim[0].stride
) )
{
LNCBCTR_nextstring(  &QXCBCTR );
(*NXCBCTR_ysname) = QXCBCTR;
}
 /* line 946: */
 /* line 947: */
 /* line 948: */
 /* line 949: */
JRCBCTR = A_UNITE(RXCBCTR,mode25,25,VWCBCTR_x);
} 
break;
default: 
 /* line 950: */
 /* line 953: */
SXIACTR_terminalerror(601) ;
JRCBCTR = A_EMPTY(SXCBCTR,26);
break;
} 
break;
case 2: 
{ 
UXCBCTR = (&((&TXCBCTR_w)->W)) ;
(void)((*UXCBCTR) = (ZQCBCTR_type-JBCBCTR_warnbase));
 /* line 956: */
JRCBCTR = A_UNITE(VXCBCTR,mode13,13,TXCBCTR_w);
} 
break;
case 3: 
{ 
XXCBCTR = (&((&WXCBCTR_i)->Type)) ;
(void)((*XXCBCTR) = (ZQCBCTR_type-KBCBCTR_iddecbase));
 /* line 957: */
YXCBCTR = (&((&WXCBCTR_i)->Mode)) ;
(void)((*YXCBCTR) = A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
ZXCBCTR = (&((&WXCBCTR_i)->Decno)) ;
(void)((*ZXCBCTR) = A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
 /* line 958: */
LNCBCTR_nextstring(  &AYCBCTR );
BYCBCTR = (&((&WXCBCTR_i)->Name)) ;
(*BYCBCTR) = AYCBCTR;
 /* line 959: */
 /* line 960: */
 /* line 963: */
JRCBCTR = A_UNITE(CYCBCTR,mode11,11,WXCBCTR_i);
} 
break;
case 4: 
{ 
EYCBCTR = (&((&DYCBCTR_s)->Fn)) ;
(void)((*EYCBCTR) = (ZQCBCTR_type-LBCBCTR_starterbase));
 /* line 964: */
FYCBCTR = (&((&DYCBCTR_s)->Mode)) ;
(void)((*FYCBCTR) = A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
GYCBCTR = (&((&DYCBCTR_s)->Props)) ;
(void)((*GYCBCTR) = (A68_BITS )A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
 /* line 965: */
HYCBCTR = (&((&DYCBCTR_s)->Resultmode)) ;
(void)((*HYCBCTR) = A_CALLPROC(JNCBCTR_next,(),((JNCBCTR_next).nonlocals)));
 /* line 966: */
 /* line 967: */
 /* line 968: */
JRCBCTR = A_UNITE(IYCBCTR,mode21,21,DYCBCTR_s);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
JYCBCTR_imperative = JRCBCTR;
 /* line 971: */
 /* line 972: */
 /* line 973: */
if (YLCBCTR_printstream)
{ 
SCXACTR_imperativemnemonic( JYCBCTR_imperative, &KYCBCTR );
LYCBCTR_string = KYCBCTR;
 /* line 975: */
 /* line 969: */
 /* line 976: */
if (LYCBCTR_string.upb<120)
{ 
 /* line 977: */
 /* line 978: */
(void)(A_CALLPROC(MSIACTR_list,(LYCBCTR_string),(LYCBCTR_string,(MSIACTR_list).nonlocals)));
} 
else
{ 
(void)(A_CALLPROC(MSIACTR_list,(A_VTRIM(MYCBCTR,(LYCBCTR_string),A_VTSCRIPT(&(MYCBCTR.upb),(LYCBCTR_string).upb,1,120))),(A_VTRIM(MYCBCTR,(LYCBCTR_string),A_VTSCRIPT(&(MYCBCTR.upb),(LYCBCTR_string).upb,1,120)),(MSIACTR_list).nonlocals)));
 /* line 979: */
 /* line 980: */
 /* line 981: */
(void)(A_CALLPROC(MSIACTR_list,(A_VC_PLUS(A_C_TIMES(' ',35),A_VTRIM(NYCBCTR,(LYCBCTR_string),A_VTSCRIPT(&(NYCBCTR.upb),(LYCBCTR_string).upb,121,(LYCBCTR_string).upb)))),(A_VC_PLUS(A_C_TIMES(' ',35),A_VTRIM(NYCBCTR,(LYCBCTR_string),A_VTSCRIPT(&(NYCBCTR.upb),(LYCBCTR_string).upb,121,(LYCBCTR_string).upb))),(MSIACTR_list).nonlocals)));
} 
} 
 /* line 982: */
 /* line 983: */
OYCBCTR = JYCBCTR_imperative;
} 
A_PROC_EXIT(nextstreamimperative);
*ReturnedValue = (OYCBCTR);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 5: */
 /* line 6: */
 /* line 7: */
 /* line 8: */
 /* line 10: */
int main(int argc, char *argv[], char *envp[])
{ 

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel","-dir",".","a68toc.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/vak/Project/Algol/Algol-68RS-Source/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/vak/Project/Algol/Algol-68RS-Source/a68config/a68config.m","./uniquenameserver.m","./moduletracer.m","./modules.m","./modes.m","./mnemonics.m","./lookup.m","./incoperfn.m","./incmode.m","./incinstallation.m","./incimperatives.m","./incid.m","./environment.m","./environ.m","./denotations.m","./coutput.m","./compiler.m","./rscompiler.m","./centities.m","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel/osif.m","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config A_UNUSED;
/* --- end of configuration information */
A68_156  LYBBCTR;  /* collateral clause result */
A68_275  NYBBCTR;  /* collateral clause result */
A68_VC  OYBBCTR;  /* OPERATORS - nil -> mode */
A68_276  TYBBCTR;  /* avoid structure result */
A68_280  XYBBCTR;  /* OPERATORS - istruct -> vector */
A68_280  YYBBCTR;  /* OPERATORS - trim index */
A68_279  ZYBBCTR;  /* OPERATORS - trim index */
A68_279  DZBBCTR;  /* OPERATORS - trim index */
A68_279  EZBBCTR;  /* forall yield */
A68_INT  FZBBCTR;  /* forall loop counter */
A68_276  KZBBCTR;  /* avoid structure result */
A68_276 * LZBBCTR;  /* YIELD */
A68_276  MZBBCTR;  /* OPERATORS - simple index */
A68_INT * NZBBCTR;  /* YIELD */
A68_INT  OZBBCTR;  /* YIELD */
A68_VC  PZBBCTR;  /* OPERATORS - istruct -> vector */
A68_281 * QZBBCTR;  /* OPERATORS - istruct -> vector */
A68_VC * RZBBCTR;  /* YIELD */
A68_VC * SZBBCTR;  /* YIELD */
A68_279  UZBBCTR;  /* OPERATORS - trim index */
A68_279  VZBBCTR;  /* forall yield */
A68_INT  WZBBCTR;  /* forall loop counter */
A68_INT  CACBCTR;  /* YIELD */
A68_282  ECCBCTR;  /* avoid structure result */
A68_181  ADCBCTR;  /* avoid structure result */
A68_284  BDCBCTR;  /* collateral clause result */
A68_181  CDCBCTR;  /* OPERATORS - trim index */
A68_181  DDCBCTR;  /* OPERATORS - istruct to row */
A68_181  EDCBCTR;  /* OPERATORS - trim index */
A68_181  FDCBCTR;  /* OPERATORS - trim index */
A68_181  GDCBCTR;  /* YIELD */
A68_181  HDCBCTR;  /* OPERATORS - assign op */
A68_181  JDCBCTR;  /* OPERATORS - trim index */
A68_181  KDCBCTR;  /* forall yield */
A68_INT  LDCBCTR;  /* forall loop counter */
A68_182  MDCBCTR;  /* collateral clause result */
A68_182  NDCBCTR;  /* collateral clause result */
A68_INT  ODCBCTR;  /* YIELD */
A68_182 * PDCBCTR;  /* YIELD */
A68_BOOL  QDCBCTR;  /* clause result */
A68_182  RDCBCTR;  /* collateral clause result */
A68_INT  SDCBCTR;  /* YIELD */
A68_182 * TDCBCTR;  /* YIELD */
A68_BOOL  UDCBCTR;  /* clause result */
A68_BOOL  VDCBCTR;  /* clause result */
A68_INT  XDCBCTR;  /* to part of loop */
A68_182  YDCBCTR;  /* collateral clause result */
A68_182 * ZDCBCTR;  /* YIELD */
A68_182  AECBCTR;  /* collateral clause result */
A68_INT  BECBCTR;  /* YIELD */
A68_182 * CECBCTR;  /* YIELD */
A68_180  LLCBCTR;  /* clause result */
A68_180  MLCBCTR;  /* procedure value */
A68_180  NLCBCTR;  /* procedure value */
A68_174  OLCBCTR;  /* procedure value */
A68_175  PLCBCTR;  /* procedure value */
A68_176  QLCBCTR;  /* procedure value */
A68_177  RLCBCTR;  /* procedure value */
A68_178  SLCBCTR;  /* procedure value */
A68_179  TLCBCTR;  /* procedure value */
A68_VC  WLCBCTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  XLCBCTR;  /* clause result */
A68_INT  CMCBCTR;  /* forall loop counter */
A68_VC  DMCBCTR;  /* OPERATORS - nil -> mode */
A68_VC  EMCBCTR;  /* != */
A68_VC  FMCBCTR;  /* != */
A68_VC  KMCBCTR;  /* OPERATORS - trim index */
A68_VC  LMCBCTR;  /* OPERATORS - trim index */
A68_VC * MMCBCTR;  /* YIELD */
A68_INT  PMCBCTR;  /* forall loop counter */
A68_VC  RMCBCTR;  /* avoid structure result */
A68_VC  TMCBCTR;  /* avoid structure result */
A68_INT  UMCBCTR;  /* YIELD */
A68_86  KNCBCTR;  /* procedure value */
A68_184  PYCBCTR;  /* procedure value */
A68_305  QYCBCTR;  /* collateral clause result */
A68_212  TYCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  UYCBCTR;  /* YIELD */
A68_212  VYCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_211  WYCBCTR;  /* OPERATORS - istruct -> vector */
A68_301  XYCBCTR;  /* collateral clause result */
A68_212  AZCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  BZCBCTR;  /* YIELD */
A68_212  CZCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_212  FZCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  GZCBCTR;  /* YIELD */
A68_212  HZCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_211  IZCBCTR;  /* OPERATORS - istruct -> vector */
A68_212  JZCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_211  KZCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_212  LZCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_211  MZCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_212  NZCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  OZCBCTR;  /* YIELD */
A68_211  PZCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_212  QZCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_211  RZCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_212  SZCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  TZCBCTR;  /* YIELD */
A68_211  UZCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  WZCBCTR;  /* to part of loop */
A68_212  XZCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  YZCBCTR;  /* YIELD */
A68_211  ZZCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_212  AADBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  BADBCTR;  /* YIELD */
A68_211  CADBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_GC_STARTUP(argc);
BAAALIB();   /* USE a68config */
RHMACTR();   /* USE uniquenameserver */
BCHACTR();   /* USE moduletracer */
ANOACTR();   /* USE modules */
DNMACTR();   /* USE modes */
QYWACTR();   /* USE mnemonics */
TTJACTR();   /* USE lookup */
XFAACTR();   /* USE incoperfn */
ZDAACTR();   /* USE incmode */
ODAACTR();   /* USE incinstallation */
UAAACTR();   /* USE incimperatives */
BAAACTR();   /* USE incid */
HPIACTR();   /* USE environment */
BPLACTR();   /* USE environ */
LLJACTR();   /* USE denotations */
PTLACTR();   /* USE coutput */
GDBBCTR();   /* USE compiler */
ZJAACTR();   /* USE rscompiler */
THAACTR();   /* USE centities */
CSCAOSF();   /* USE osif */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc.a68";
A_config.translation_time = "Thu Nov  5 21:11:00 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "GYBBCTR (from seed file) ";
A_config.spec_change_time = "no spec";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
#ifdef A_prelude
A_prelude(argc,argv,envp);
#endif
A_PROC_ENTRY(MAIN);
{ 
(void)(UEAALIB_a68config(LGAALIB_configinfo, KYBBCTR));
 /* line 53: */
LYBBCTR.Norden = 0;
LYBBCTR.Nomodes = 0;
LYBBCTR.Nolabs = 0;
LYBBCTR.Nodecnos = HAAACTR_minidno;
LYBBCTR.Nomodules = 0;
LYBBCTR.Nolibinds = 0;
MYBBCTR_xsizes = LYBBCTR;
 /* line 60: */
 /* line 65: */
 /* line 67: */
NYBBCTR.Streambuffer = A_VVAC(OYBBCTR);
NYBBCTR.Streamptr = 0;
QYBBCTR_generator( A68_FALSE, &TYBBCTR );
NYBBCTR.Buffers = TYBBCTR;
NYBBCTR.Currentbuffer = 0;
UYBBCTR_unsetstream = NYBBCTR;
 /* line 69: */
 /* line 70: */
YYBBCTR = A_ISVEC(XYBBCTR,(&VYBBCTR_streams_area),20,A68_275 ) ;
WYBBCTR_streams = A_VTRIM(ZYBBCTR,(YYBBCTR),A_VRTSCRIPT(&(ZYBBCTR.dim[0]),(YYBBCTR).upb,1,(YYBBCTR).upb,0));
 /* line 72: */
 /* line 74: */
 /* line 76: */
 /* line 77: */
EZBBCTR = A_R1TRIM(DZBBCTR,(WYBBCTR_streams),A_RTSCRIPT(&(DZBBCTR.dim[0]),&((WYBBCTR_streams).dim[0]),(WYBBCTR_streams).dim[0].lwb,BZBBCTR_fixedstreams,1)) ;
FZBBCTR = EZBBCTR.dim[0].upb - EZBBCTR.dim[0].lwb;
CZBBCTR_stream = EZBBCTR.data;
for (;FZBBCTR-- >= 0;
(CZBBCTR_stream += EZBBCTR.dim[0].stride
) )
{
 /* line 78: */
 /* line 79: */
 /* line 82: */
HZBBCTR_generator( A68_FALSE, &KZBBCTR );
LZBBCTR = (&(CZBBCTR_stream->Buffers)) ;
MZBBCTR = (*LZBBCTR) = KZBBCTR ;
NZBBCTR = (&(CZBBCTR_stream->Currentbuffer)) ;
OZBBCTR = (*NZBBCTR) = 1 ;
QZBBCTR = A_LOC(A68_281 ) ;
RZBBCTR = (&A_VINDEX(MZBBCTR,OZBBCTR)) ;
SZBBCTR = (&(CZBBCTR_stream->Streambuffer)) ;
(void)((*SZBBCTR) = (*RZBBCTR) = A_ISVEC(PZBBCTR,QZBBCTR,11,A68_CHAR ));
}
 /* line 84: */
VZBBCTR = A_R1TRIM(UZBBCTR,(WYBBCTR_streams),A_RTSCRIPT(&(UZBBCTR.dim[0]),&((WYBBCTR_streams).dim[0]),(BZBBCTR_fixedstreams+1),(WYBBCTR_streams).dim[0].upb,1)) ;
WZBBCTR = VZBBCTR.dim[0].upb - VZBBCTR.dim[0].lwb;
TZBBCTR_stream = VZBBCTR.data;
for (;WZBBCTR-- >= 0;
(TZBBCTR_stream += VZBBCTR.dim[0].stride
) )
{
(*TZBBCTR_stream) = UYBBCTR_unsetstream;
}
 /* line 85: */
AZBBCTR_current = UYBBCTR_unsetstream;
 /* line 87: */
XZBBCTR_streambuffer = (&((&AZBBCTR_current)->Streambuffer));
 /* line 88: */
YZBBCTR_strptr = (&((&AZBBCTR_current)->Streamptr));
 /* line 89: */
ZZBBCTR_currentbuffer = (&((&AZBBCTR_current)->Currentbuffer));
 /* line 90: */
AACBCTR_buffers = (&((&AZBBCTR_current)->Buffers));
 /* line 92: */
CACBCTR = 0 ;
BACBCTR_curstradd = (&A_R1INDEX(WYBBCTR_streams,CACBCTR));
 /* line 94: */
 /* line 98: */
 /* line 99: */
 /* line 115: */
 /* line 116: */
 /* line 117: */
 /* line 118: */
 /* line 119: */
 /* line 120: */
 /* line 121: */
 /* line 122: */
 /* line 123: */
 /* line 124: */
 /* line 125: */
 /* line 127: */
 /* line 128: */
 /* line 129: */
 /* line 130: */
 /* line 131: */
 /* line 132: */
 /* line 133: */
 /* line 134: */
 /* line 135: */
 /* line 136: */
 /* line 138: */
 /* line 139: */
 /* line 143: */
{ 
(void)(JYIACTR_setparams());
 /* line 145: */
VBCBCTR_inputfile = QVBAOSF_open_file(XQIACTR_sourcefilename, ATBAOSF_read_access, RIBAOSF_ignore_msg);
 /* line 147: */
if (VBCBCTR_inputfile==(A68_59 *)A68_NIL)
{ 
(void)(SXIACTR_terminalerror(250));
} 
 /* line 149: */
WBCBCTR_line_start = 1;
 /* line 150: */
XBCBCTR_line_length = 0;
 /* line 152: */
YBCBCTR_line_pending = A68_FALSE;
 /* line 154: */
XRIACTR_linenumber = 0;
 /* line 156: */
ACCBCTR_generator( A68_TRUE, &ECCBCTR );
DCCBCTR_flexinputline = ECCBCTR;
 /* line 158: */
 /* line 212: */
WCCBCTR_generator( A68_TRUE, &ADCBCTR );
ZCCBCTR_charset = ADCBCTR;
 /* line 213: */
 /* line 215: */
BDCBCTR.data[0].Type = 2;
BDCBCTR.data[0].Value = 37;
BDCBCTR.data[1].Type = 1;
BDCBCTR.data[1].Value = 100;
BDCBCTR.data[2].Type = 1;
BDCBCTR.data[2].Value = 100;
BDCBCTR.data[3].Type = 1;
BDCBCTR.data[3].Value = 100;
BDCBCTR.data[4].Type = 1;
BDCBCTR.data[4].Value = 100;
BDCBCTR.data[5].Type = 1;
BDCBCTR.data[5].Value = 100;
BDCBCTR.data[6].Type = 1;
BDCBCTR.data[6].Value = 100;
BDCBCTR.data[7].Type = 1;
 /* line 216: */
BDCBCTR.data[7].Value = 100;
BDCBCTR.data[8].Type = 1;
BDCBCTR.data[8].Value = 100;
BDCBCTR.data[9].Type = 2;
BDCBCTR.data[9].Value = 37;
BDCBCTR.data[10].Type = 2;
BDCBCTR.data[10].Value = 37;
BDCBCTR.data[11].Type = 2;
BDCBCTR.data[11].Value = 37;
BDCBCTR.data[12].Type = 2;
BDCBCTR.data[12].Value = 37;
BDCBCTR.data[13].Type = 1;
BDCBCTR.data[13].Value = 100;
BDCBCTR.data[14].Type = 1;
BDCBCTR.data[14].Value = 100;
BDCBCTR.data[15].Type = 1;
 /* line 217: */
BDCBCTR.data[15].Value = 100;
BDCBCTR.data[16].Type = 1;
BDCBCTR.data[16].Value = 100;
BDCBCTR.data[17].Type = 1;
BDCBCTR.data[17].Value = 100;
BDCBCTR.data[18].Type = 1;
BDCBCTR.data[18].Value = 100;
BDCBCTR.data[19].Type = 1;
BDCBCTR.data[19].Value = 100;
BDCBCTR.data[20].Type = 1;
BDCBCTR.data[20].Value = 100;
BDCBCTR.data[21].Type = 1;
BDCBCTR.data[21].Value = 100;
BDCBCTR.data[22].Type = 1;
BDCBCTR.data[22].Value = 100;
BDCBCTR.data[23].Type = 1;
 /* line 218: */
BDCBCTR.data[23].Value = 100;
BDCBCTR.data[24].Type = 1;
BDCBCTR.data[24].Value = 100;
BDCBCTR.data[25].Type = 1;
BDCBCTR.data[25].Value = 100;
BDCBCTR.data[26].Type = 1;
BDCBCTR.data[26].Value = 100;
BDCBCTR.data[27].Type = 1;
BDCBCTR.data[27].Value = 100;
BDCBCTR.data[28].Type = 1;
BDCBCTR.data[28].Value = 100;
BDCBCTR.data[29].Type = 1;
BDCBCTR.data[29].Value = 100;
BDCBCTR.data[30].Type = 1;
BDCBCTR.data[30].Value = 100;
BDCBCTR.data[31].Type = 1;
 /* line 219: */
BDCBCTR.data[31].Value = 100;
BDCBCTR.data[32].Type = 2;
BDCBCTR.data[32].Value = 37;
BDCBCTR.data[33].Type = 20;
BDCBCTR.data[33].Value = 45;
BDCBCTR.data[34].Type = 5;
BDCBCTR.data[34].Value = 100;
BDCBCTR.data[35].Type = 20;
BDCBCTR.data[35].Value = 62;
BDCBCTR.data[36].Type = 20;
BDCBCTR.data[36].Value = 160;
BDCBCTR.data[37].Type = 21;
BDCBCTR.data[37].Value = 214;
BDCBCTR.data[38].Type = 21;
BDCBCTR.data[38].Value = 229;
BDCBCTR.data[39].Type = 1;
 /* line 220: */
BDCBCTR.data[39].Value = 100;
BDCBCTR.data[40].Type = 20;
BDCBCTR.data[40].Value = 50;
BDCBCTR.data[41].Type = 20;
BDCBCTR.data[41].Value = 54;
BDCBCTR.data[42].Type = 22;
BDCBCTR.data[42].Value = 212;
BDCBCTR.data[43].Type = 21;
BDCBCTR.data[43].Value = 200;
BDCBCTR.data[44].Type = 20;
BDCBCTR.data[44].Value = 128;
BDCBCTR.data[45].Type = 21;
BDCBCTR.data[45].Value = 201;
BDCBCTR.data[46].Type = 20;
BDCBCTR.data[46].Value = 130;
BDCBCTR.data[47].Type = 22;
 /* line 221: */
BDCBCTR.data[47].Value = 213;
BDCBCTR.data[48].Type = 4;
BDCBCTR.data[48].Value = 0;
BDCBCTR.data[49].Type = 4;
BDCBCTR.data[49].Value = 1;
BDCBCTR.data[50].Type = 4;
BDCBCTR.data[50].Value = 2;
BDCBCTR.data[51].Type = 4;
BDCBCTR.data[51].Value = 3;
BDCBCTR.data[52].Type = 4;
BDCBCTR.data[52].Value = 4;
BDCBCTR.data[53].Type = 4;
BDCBCTR.data[53].Value = 5;
BDCBCTR.data[54].Type = 4;
BDCBCTR.data[54].Value = 6;
BDCBCTR.data[55].Type = 4;
 /* line 222: */
BDCBCTR.data[55].Value = 7;
BDCBCTR.data[56].Type = 4;
BDCBCTR.data[56].Value = 8;
BDCBCTR.data[57].Type = 4;
BDCBCTR.data[57].Value = 9;
BDCBCTR.data[58].Type = 22;
BDCBCTR.data[58].Value = 84;
BDCBCTR.data[59].Type = 20;
BDCBCTR.data[59].Value = 111;
BDCBCTR.data[60].Type = 22;
BDCBCTR.data[60].Value = 206;
BDCBCTR.data[61].Type = 22;
BDCBCTR.data[61].Value = 210;
BDCBCTR.data[62].Type = 22;
BDCBCTR.data[62].Value = 207;
BDCBCTR.data[63].Type = 21;
 /* line 223: */
BDCBCTR.data[63].Value = 217;
BDCBCTR.data[64].Type = 20;
BDCBCTR.data[64].Value = 154;
BDCBCTR.data[65].Type = 6;
BDCBCTR.data[65].Value = (-98);
BDCBCTR.data[66].Type = 6;
BDCBCTR.data[66].Value = (-99);
BDCBCTR.data[67].Type = 6;
BDCBCTR.data[67].Value = (-100);
BDCBCTR.data[68].Type = 6;
BDCBCTR.data[68].Value = (-101);
BDCBCTR.data[69].Type = 6;
BDCBCTR.data[69].Value = (-102);
BDCBCTR.data[70].Type = 6;
BDCBCTR.data[70].Value = (-103);
BDCBCTR.data[71].Type = 6;
 /* line 224: */
BDCBCTR.data[71].Value = (-104);
BDCBCTR.data[72].Type = 6;
BDCBCTR.data[72].Value = (-105);
BDCBCTR.data[73].Type = 6;
BDCBCTR.data[73].Value = (-106);
BDCBCTR.data[74].Type = 6;
BDCBCTR.data[74].Value = (-107);
BDCBCTR.data[75].Type = 6;
BDCBCTR.data[75].Value = (-108);
BDCBCTR.data[76].Type = 6;
BDCBCTR.data[76].Value = (-109);
BDCBCTR.data[77].Type = 6;
BDCBCTR.data[77].Value = (-110);
BDCBCTR.data[78].Type = 6;
BDCBCTR.data[78].Value = (-111);
BDCBCTR.data[79].Type = 6;
 /* line 225: */
BDCBCTR.data[79].Value = (-112);
BDCBCTR.data[80].Type = 6;
BDCBCTR.data[80].Value = (-113);
BDCBCTR.data[81].Type = 6;
BDCBCTR.data[81].Value = (-114);
BDCBCTR.data[82].Type = 6;
BDCBCTR.data[82].Value = (-115);
BDCBCTR.data[83].Type = 6;
BDCBCTR.data[83].Value = (-116);
BDCBCTR.data[84].Type = 6;
BDCBCTR.data[84].Value = (-117);
BDCBCTR.data[85].Type = 6;
BDCBCTR.data[85].Value = (-118);
BDCBCTR.data[86].Type = 6;
BDCBCTR.data[86].Value = (-119);
BDCBCTR.data[87].Type = 6;
 /* line 226: */
BDCBCTR.data[87].Value = (-120);
BDCBCTR.data[88].Type = 6;
BDCBCTR.data[88].Value = (-121);
BDCBCTR.data[89].Type = 6;
BDCBCTR.data[89].Value = (-122);
BDCBCTR.data[90].Type = 6;
BDCBCTR.data[90].Value = (-123);
BDCBCTR.data[91].Type = 20;
BDCBCTR.data[91].Value = 159;
BDCBCTR.data[92].Type = 20;
BDCBCTR.data[92].Value = 175;
BDCBCTR.data[93].Type = 20;
BDCBCTR.data[93].Value = 161;
BDCBCTR.data[94].Type = 20;
BDCBCTR.data[94].Value = 233;
BDCBCTR.data[95].Type = 3;
 /* line 227: */
BDCBCTR.data[95].Value = 36;
BDCBCTR.data[96].Type = 1;
BDCBCTR.data[96].Value = 100;
BDCBCTR.data[97].Type = 3;
BDCBCTR.data[97].Value = 10;
BDCBCTR.data[98].Type = 3;
BDCBCTR.data[98].Value = 11;
BDCBCTR.data[99].Type = 3;
BDCBCTR.data[99].Value = 12;
BDCBCTR.data[100].Type = 3;
BDCBCTR.data[100].Value = 13;
BDCBCTR.data[101].Type = 3;
BDCBCTR.data[101].Value = 14;
BDCBCTR.data[102].Type = 3;
BDCBCTR.data[102].Value = 15;
BDCBCTR.data[103].Type = 3;
 /* line 228: */
BDCBCTR.data[103].Value = 16;
BDCBCTR.data[104].Type = 3;
BDCBCTR.data[104].Value = 17;
BDCBCTR.data[105].Type = 3;
BDCBCTR.data[105].Value = 18;
BDCBCTR.data[106].Type = 3;
BDCBCTR.data[106].Value = 19;
BDCBCTR.data[107].Type = 3;
BDCBCTR.data[107].Value = 20;
BDCBCTR.data[108].Type = 3;
BDCBCTR.data[108].Value = 21;
BDCBCTR.data[109].Type = 3;
BDCBCTR.data[109].Value = 22;
BDCBCTR.data[110].Type = 3;
BDCBCTR.data[110].Value = 23;
BDCBCTR.data[111].Type = 3;
 /* line 229: */
BDCBCTR.data[111].Value = 24;
BDCBCTR.data[112].Type = 3;
BDCBCTR.data[112].Value = 25;
BDCBCTR.data[113].Type = 3;
BDCBCTR.data[113].Value = 26;
BDCBCTR.data[114].Type = 3;
BDCBCTR.data[114].Value = 27;
BDCBCTR.data[115].Type = 3;
BDCBCTR.data[115].Value = 28;
BDCBCTR.data[116].Type = 3;
BDCBCTR.data[116].Value = 29;
BDCBCTR.data[117].Type = 3;
BDCBCTR.data[117].Value = 30;
BDCBCTR.data[118].Type = 3;
BDCBCTR.data[118].Value = 31;
BDCBCTR.data[119].Type = 3;
 /* line 230: */
BDCBCTR.data[119].Value = 32;
BDCBCTR.data[120].Type = 3;
BDCBCTR.data[120].Value = 33;
BDCBCTR.data[121].Type = 3;
BDCBCTR.data[121].Value = 34;
BDCBCTR.data[122].Type = 3;
BDCBCTR.data[122].Value = 35;
BDCBCTR.data[123].Type = 20;
BDCBCTR.data[123].Value = 67;
BDCBCTR.data[124].Type = 20;
BDCBCTR.data[124].Value = 45;
BDCBCTR.data[125].Type = 20;
BDCBCTR.data[125].Value = 68;
BDCBCTR.data[126].Type = 1;
BDCBCTR.data[126].Value = 100;
BDCBCTR.data[127].Type = 1;
BDCBCTR.data[127].Value = 100;
EDCBCTR = A_HIS1ARR(DDCBCTR,BDCBCTR,A68_182 ,128) ;
GDCBCTR = A_R1TRIM(CDCBCTR,(ZCCBCTR_charset),A_RTSCRIPT(&(CDCBCTR.dim[0]),&((ZCCBCTR_charset).dim[0]),(ZCCBCTR_charset).dim[0].lwb,127,0)) ;
HDCBCTR = A_R1TRIM(FDCBCTR,(EDCBCTR),A_RTSCRIPT(&(FDCBCTR.dim[0]),&((EDCBCTR).dim[0]),(EDCBCTR).dim[0].lwb,(EDCBCTR).dim[0].upb,0)) ;
(void)(A_R1ASSIGN2(HDCBCTR,GDCBCTR,A68_182 ));
 /* line 232: */
 /* line 233: */
KDCBCTR = A_R1TRIM(JDCBCTR,(ZCCBCTR_charset),A_RTSCRIPT(&(JDCBCTR.dim[0]),&((ZCCBCTR_charset).dim[0]),128,(ZCCBCTR_charset).dim[0].upb,1)) ;
LDCBCTR = KDCBCTR.dim[0].upb - KDCBCTR.dim[0].lwb;
IDCBCTR_c = KDCBCTR.data;
for (;LDCBCTR-- >= 0;
(IDCBCTR_c += KDCBCTR.dim[0].stride
) )
{
 /* line 234: */
MDCBCTR.Type = 1;
 /* line 235: */
MDCBCTR.Value = 100;
(*IDCBCTR_c) = MDCBCTR;
}
 /* line 237: */
if (CQIACTR_dotoption)
{ 
NDCBCTR.Type = 7;
NDCBCTR.Value = 130;
ODCBCTR = (A68_INT)(unsigned char)'.' ;
PDCBCTR = (&A_R1INDEX(ZCCBCTR_charset,ODCBCTR)) ;
(*PDCBCTR) = NDCBCTR;
QDCBCTR = A68_TRUE;
} 
else
{ 
QDCBCTR = A68_FALSE;
} 
if (DQIACTR_quoteoption)
{ 
RDCBCTR.Type = 8;
RDCBCTR.Value = 100;
SDCBCTR = (A68_INT)(unsigned char)'\'' ;
TDCBCTR = (&A_R1INDEX(ZCCBCTR_charset,SDCBCTR)) ;
(*TDCBCTR) = RDCBCTR;
UDCBCTR = A68_TRUE;
} 
else
{ 
UDCBCTR = A68_FALSE;
} 
 /* line 238: */
VDCBCTR = (QDCBCTR|UDCBCTR);
if (VDCBCTR)
{ 
XDCBCTR = (A68_INT)(unsigned char)'Z';
for ( WDCBCTR_i = (A68_INT)(unsigned char)'A';
WDCBCTR_i <= XDCBCTR;
WDCBCTR_i += 1 )
{ 
 /* line 239: */
YDCBCTR.Type = 1;
YDCBCTR.Value = 100;
ZDCBCTR = (&A_R1INDEX(ZCCBCTR_charset,WDCBCTR_i)) ;
(*ZDCBCTR) = YDCBCTR;
}
 /* line 240: */
} 
 /* line 241: */
if (FQIACTR_tildeoption)
{ 
AECBCTR.Type = 3;
AECBCTR.Value = 36;
BECBCTR = (A68_INT)(unsigned char)'~' ;
CECBCTR = (&A_R1INDEX(ZCCBCTR_charset,BECBCTR)) ;
(*CECBCTR) = AECBCTR;
} 
 /* line 250: */
FECBCTR_contval = EECBCTR;
 /* line 252: */
GECBCTR_upped = A68_FALSE;
 /* line 254: */
 /* line 255: */
IECBCTR_xtmodulepending = A68_FALSE;
 /* line 257: */
JECBCTR_timeschecked = A68_FALSE;
 /* line 259: */
 /* line 262: */
 /* line 568: */
(void)(NULACTR_initcoutput(YQIACTR_basenamesourcefile));
 /* line 571: */
 /* line 572: */
if (IQIACTR_optbooloption)
{ 
MLCBCTR.fn.fn_global = HPKACTR_optboollookup;
MLCBCTR.nonlocals = A68_NIL;
LLCBCTR = MLCBCTR;
} 
else
{ 
NLCBCTR.fn.fn_global = SOKACTR_lookup;
NLCBCTR.nonlocals = A68_NIL;
LLCBCTR = NLCBCTR;
} 
OLCBCTR.fn.fn_global = HCCBCTR_input;
OLCBCTR.nonlocals = A68_NIL;
PLCBCTR.fn.fn_global = NECBCTR_output;
PLCBCTR.nonlocals = A68_NIL;
QLCBCTR.fn.fn_global = EXIACTR_fault;
QLCBCTR.nonlocals = A68_NIL;
RLCBCTR.fn.fn_global = KDHACTR_message;
RLCBCTR.nonlocals = A68_NIL;
SLCBCTR.fn.fn_global = NBPACTR_givemoduledetails;
SLCBCTR.nonlocals = A68_NIL;
TLCBCTR.fn.fn_global = SOOACTR_givespec;
TLCBCTR.nonlocals = A68_NIL;
(void)(URAACTR_compile(OLCBCTR, PLCBCTR, QLCBCTR, RLCBCTR, SLCBCTR, TLCBCTR, LLCBCTR, ZCCBCTR_charset));
 /* line 574: */
 /* line 575: */
{ 
 /* line 576: */
 /* line 577: */
 /* line 578: */
(void)(HCCBCTR_input(A_ISVEC(WLCBCTR,(&ULCBCTR_wasteline),160,A68_CHAR ), (&VLCBCTR_wastesize)));
} 
 /* line 580: */
(void)(IWBAOSF_close_file(VBCBCTR_inputfile, RIBAOSF_ignore_msg));
 /* line 582: */
 /* line 583: */
 /* line 584: */
 /* line 588: */
XLCBCTR = (DSIACTR_greatestseverity<=2);
} 
if (XLCBCTR)
{ 
XRIACTR_linenumber = 1;
 /* line 590: */
YLCBCTR_printstream = GQIACTR_streamoption;
 /* line 596: */
(*BACBCTR_curstradd) = AZBBCTR_current;
 /* line 598: */
ZLCBCTR_level = 0;
 /* line 599: */
AMCBCTR_s = 0;
 /* line 601: */
 /* line 602: */
CMCBCTR = WYBBCTR_streams.dim[0].upb - WYBBCTR_streams.dim[0].lwb;
BMCBCTR_stream = WYBBCTR_streams.data;
for (;CMCBCTR-- >= 0;
(BMCBCTR_stream += WYBBCTR_streams.dim[0].stride
) )
{
 /* line 603: */
 /* line 604: */
EMCBCTR = A_VVAC(DMCBCTR) ;
FMCBCTR = (*(&(BMCBCTR_stream->Streambuffer))) ;
if ( !(! A_VSTRUCTCOMP(FMCBCTR,EMCBCTR)) ) break;
GMCBCTR_streamptr = (&(BMCBCTR_stream->Streamptr));
 /* line 605: */
HMCBCTR_currentbuffer = (&(BMCBCTR_stream->Currentbuffer));
 /* line 606: */
IMCBCTR_streambuffer = (&(BMCBCTR_stream->Streambuffer));
 /* line 607: */
JMCBCTR_buffers = (&(BMCBCTR_stream->Buffers));
 /* line 609: */
KMCBCTR = (*(&A_VINDEX((*JMCBCTR_buffers),(*HMCBCTR_currentbuffer)))) ;
MMCBCTR = (&A_VINDEX((*JMCBCTR_buffers),(*HMCBCTR_currentbuffer))) ;
(void)((*MMCBCTR) = A_VTRIM(LMCBCTR,(KMCBCTR),A_VTSCRIPT(&(LMCBCTR.upb),(KMCBCTR).upb,1,(*GMCBCTR_streamptr))));
 /* line 611: */
 /* line 612: */
 /* line 613: */
if (YLCBCTR_printstream)
{ 
NMCBCTR_bytesused = 0;
 /* line 614: */
PMCBCTR = (*JMCBCTR_buffers).upb -1;
OMCBCTR_b = (*JMCBCTR_buffers).data;
for (;PMCBCTR-- >= 0;
(OMCBCTR_b++
) )
{
NMCBCTR_bytesused+=(*OMCBCTR_b).upb;
}
 /* line 615: */
 /* line 616: */
 /* line 617: */
ROAAOSF_whole( NMCBCTR_bytesused, (-7), &RMCBCTR );
ROAAOSF_whole( AMCBCTR_s, 0, &TMCBCTR );
(void)(A_CALLPROC(MSIACTR_list,(A_VC_PLUS(A_VC_PLUS(RMCBCTR,SMCBCTR),TMCBCTR)),(A_VC_PLUS(A_VC_PLUS(RMCBCTR,SMCBCTR),TMCBCTR),(MSIACTR_list).nonlocals)));
} 
 /* line 618: */
UMCBCTR = (*HMCBCTR_currentbuffer) = 1 ;
(void)((*IMCBCTR_streambuffer) = (*(&A_VINDEX((*JMCBCTR_buffers),UMCBCTR))));
 /* line 619: */
(*GMCBCTR_streamptr) = 0;
 /* line 620: */
 /* line 621: */
AMCBCTR_s+=1;
}
 /* line 623: */
(void)(AZBBCTR_current = (*(&A_R1INDEX(WYBBCTR_streams,ZLCBCTR_level))));
 /* line 625: */
 /* line 629: */
 /* line 633: */
 /* line 634: */
 /* line 646: */
 /* line 649: */
 /* line 651: */
 /* line 652: */
 /* line 659: */
KNCBCTR.fn.fn_global = DNCBCTR_nextint;
KNCBCTR.nonlocals = A68_NIL;
JNCBCTR_next = (KNCBCTR);
 /* line 661: */
 /* line 662: */
 /* line 663: */
 /* line 670: */
PNCBCTR_line_start = 0;
 /* line 671: */
QNCBCTR_line_length = 0;
 /* line 672: */
RNCBCTR_statement_number = 0;
 /* line 674: */
SNCBCTR_hundred_counter = (-1);
 /* line 676: */
 /* line 677: */
 /* line 678: */
 /* line 732: */
 /* line 780: */
 /* line 784: */
 /* line 785: */
 /* line 985: */
 /* line 986: */
 /* line 988: */
if (DSIACTR_greatestseverity<=2)
{ 
 /* line 990: */
PYCBCTR.fn.fn_global = YQCBCTR_nextstreamimperative;
PYCBCTR.nonlocals = A68_NIL;
(void)(ODBBCTR_translator(PYCBCTR, (&MYBBCTR_xsizes), ICPACTR_keptdecnos));
} 
 /* line 992: */
 /* line 993: */
 /* line 996: */
if (DSIACTR_greatestseverity<=2)
{ 
(void)(GKMACTR_write_cfile_uname((*(&((&IYIACTR_config_info)->Nameseed)))));
 /* line 1000: */
UYCBCTR = SYCBCTR ;
QYCBCTR.data[0] = A_UNITE(TYCBCTR,mode2,2,UYCBCTR);
QYCBCTR.data[1] = A_UNITE(VYCBCTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(WYCBCTR,QYCBCTR,2,A68_212 ), ESLACTR_preamblestream));
 /* line 1003: */
(void)(VSPACTR_declareusedids());
 /* line 1033: */
BZCBCTR = ZYCBCTR ;
XYCBCTR.data[0] = A_UNITE(AZCBCTR,mode2,2,BZCBCTR);
 /* line 1034: */
XYCBCTR.data[1] = A_UNITE(CZCBCTR,mode2,2,XQIACTR_sourcefilename);
GZCBCTR = EZCBCTR ;
XYCBCTR.data[2] = A_UNITE(FZCBCTR,mode2,2,GZCBCTR);
XYCBCTR.data[3] = A_UNITE(HZCBCTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(IZCBCTR,XYCBCTR,4,A68_212 ), NSLACTR_codestream(0)));
 /* line 1036: */
(void)(MDMACTR_writecstream(A_HVEC(KZCBCTR,A_UNITE(JZCBCTR,mode3,3,FSLACTR_modesstream),A68_212 ), ESLACTR_preamblestream));
 /* line 1037: */
(void)(MDMACTR_writecstream(A_HVEC(MZCBCTR,A_UNITE(LZCBCTR,mode3,3,GSLACTR_importsstream),A68_212 ), FSLACTR_modesstream));
 /* line 1038: */
OZCBCTR = KSLACTR_nonlocdecstream(0) ;
(void)(MDMACTR_writecstream(A_HVEC(PZCBCTR,A_UNITE(NZCBCTR,mode3,3,OZCBCTR),A68_212 ), GSLACTR_importsstream));
 /* line 1039: */
(void)(MDMACTR_writecstream(A_HVEC(RZCBCTR,A_UNITE(QZCBCTR,mode3,3,HSLACTR_externstream),A68_212 ), KSLACTR_nonlocdecstream(PPLACTR_highestlevel)));
 /* line 1040: */
TZCBCTR = NSLACTR_codestream(PPLACTR_highestlevel) ;
(void)(MDMACTR_writecstream(A_HVEC(UZCBCTR,A_UNITE(SZCBCTR,mode3,3,TZCBCTR),A68_212 ), HSLACTR_externstream));
 /* line 1042: */
 /* line 1043: */
 /* line 1044: */
if (PPLACTR_highestlevel>0)
{ 
 /* line 1045: */
WZCBCTR = (PPLACTR_highestlevel-1);
for ( VZCBCTR_level = 0;
VZCBCTR_level <= WZCBCTR;
VZCBCTR_level += 1 )
{ 
 /* line 1046: */
YZCBCTR = KSLACTR_nonlocdecstream((VZCBCTR_level+1)) ;
(void)(MDMACTR_writecstream(A_HVEC(ZZCBCTR,A_UNITE(XZCBCTR,mode3,3,YZCBCTR),A68_212 ), KSLACTR_nonlocdecstream(VZCBCTR_level)));
 /* line 1047: */
 /* line 1048: */
BADBCTR = NSLACTR_codestream(VZCBCTR_level) ;
(void)(MDMACTR_writecstream(A_HVEC(CADBCTR,A_UNITE(AADBCTR,mode3,3,BADBCTR),A68_212 ), NSLACTR_codestream((VZCBCTR_level+1))));
}
 /* line 1049: */
} 
 /* line 1051: */
(void)(SDMACTR_closecoutput());
 /* line 1053: */
 /* line 1054: */
 /* line 1055: */
(void)(SMMACTR_closedownuniquenameserver());
} 
else
{ 
 /* line 1056: */
(void)(A_CALLPROC(GULACTR_purgeoutputfiles,(),((GULACTR_purgeoutputfiles).nonlocals)));
} 
} 
 /* line 1058: */
(void)(RSIACTR_finishmessage());
 /* line 1060: */
 /* line 1061: */
 /* line 1062: */
if (DSIACTR_greatestseverity>2)
{ 
 /* line 1064: */
 /* line 1065: */
(void)(NTIACTR_abort());
} 
} 
A_PROC_EXIT(MAIN);
#ifdef A_postlude
A_postlude;
#endif
return(0);
} 
#undef NL
/* end of translation of a68toc.a68 */
