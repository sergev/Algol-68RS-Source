/* UNAME:OUBBCTR */
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
extern A68_VOID  VDPACTR_adddecsmodule(struct A68t162 ,A68_INT );
extern A68_VOID  AFPACTR_addexternalid(struct A68t123 );
extern A68_BOOL  WNOACTR_composition;
extern A68_VOID  HSPACTR_declareusedids(void);
extern A68_VOID  ZAPACTR_givemoduledetails(struct A68t107 ,A68_INT ,A68_BOOL ,A68_158 *);
extern A68_VOID  EOOACTR_givespec(struct A68t107 ,struct A68t107 ,struct A68t126 ,A68_159 *);
extern A68_VOID  FCPACTR_initialisecurrentmodule(struct A68t157 );
extern A68_VOID  NDPACTR_initialisespec(struct A68t129 );
extern A68_185  UBPACTR_keptdecnos;
/* --- End of imports from modules --- */


/* --- Imports from modes --- */
extern A68_VOID  SDOACTR_initialisemodetable(struct A68t249 ,A68_INT );
/* --- End of imports from modes --- */


/* --- Imports from mnemonics --- */
extern A68_VOID  KBXACTR_imperativemnemonic(struct A68t186 ,A68_VC *);
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
extern A68_VOID  WZABCTR_translator(struct A68t184 ,struct A68t156 *,struct A68t185 );
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
extern void MMOACTR(void);   /* modules */
extern void DNMACTR(void);   /* modes */
extern void IXWACTR(void);   /* mnemonics */
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
extern void OZABCTR(void);   /* compiler */
extern void ZJAACTR(void);   /* rscompiler */
extern void THAACTR(void);   /* centities */
extern void CSCAOSF(void);   /* osif */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_274   RUBBCTR = {"$Id: a68toc.a68,v 1.2 2002-02-04 09:26:51 sian Exp $"}; 
A_GISVEC(A68_VC ,SUBBCTR,RUBBCTR,52)
static A68_156  UUBBCTR_xsizes;
static A68_275  CVBBCTR_unsetstream;
static A68_278  DVBBCTR_streams_area;
static A68_279  EVBBCTR_streams;
static A68_275  IVBBCTR_current;
#define JVBBCTR_fixedstreams 1
static A68_275 * KVBBCTR_stream;
static A68_275 * BWBBCTR_stream;
static A68_VC * FWBBCTR_streambuffer;
static A68_INT * GWBBCTR_strptr;
static A68_INT * HWBBCTR_currentbuffer;
static A68_276 * IWBBCTR_buffers;
static A68_275 * JWBBCTR_curstradd;
#define JXBBCTR_separatorbase 16
#define KXBBCTR_terminatorbase 32
#define LXBBCTR_semibase 48
#define MXBBCTR_loadbase 64
#define NXBBCTR_idbase 80
#define OXBBCTR_numberbase 90
#define PXBBCTR_operbase 128
#define QXBBCTR_miscellaneousbase 192
#define RXBBCTR_warnbase 208
#define SXBBCTR_iddecbase 224
#define TXBBCTR_starterbase 240
#define UXBBCTR_rangesize 64
#define VXBBCTR_subrangesize 16
#define WXBBCTR_linetype 10
#define XXBBCTR_maptype 11
#define YXBBCTR_notlastxcharstype 112
#define ZXBBCTR_lastxcharstype 113
#define AYBBCTR_xcallmoduletype 200
#define BYBBCTR_xclosuretype 203
#define CYBBCTR_xtmoduletype 204
static A68_59 * DYBBCTR_inputfile;
static A68_INT  EYBBCTR_line_start;
static A68_INT  FYBBCTR_line_length;
static A68_BOOL  GYBBCTR_line_pending;
static A68_282  LYBBCTR_flexinputline;
static A68_181  HZBBCTR_charset;
static A68_182 * QZBBCTR_c;
static A68_INT  EACBCTR_i;
static A68_285   LACBCTR = {"\0\361\362\363\364\021\022\023\024\025\026\027\030\031!\"#$\365\032\366\035%\367&\033\0'\301\034("}; 
A_GISVEC(A68_VC ,MACBCTR,LACBCTR,31)
static A68_VC  NACBCTR_contval;
static A68_BOOL  OACBCTR_upped;
static A68_162  PACBCTR_lastxtmodule;
static A68_BOOL  QACBCTR_xtmodulepending;
static A68_BOOL  RACBCTR_timeschecked;
static A68_INT  SACBCTR_syntheticmoduleno;
static A68_293  CICBCTR_wasteline;
static A68_INT  DICBCTR_wastesize;
static A68_BOOL  GICBCTR_printstream;
static A68_INT  HICBCTR_level;
static A68_INT  IICBCTR_s;
static A68_275 * JICBCTR_stream;
static A68_INT * OICBCTR_streamptr;
static A68_INT * PICBCTR_currentbuffer;
static A68_VC * QICBCTR_streambuffer;
static A68_276 * RICBCTR_buffers;
static A68_INT  VICBCTR_bytesused;
static A68_VC * WICBCTR_b;
static A68_294   YICBCTR = {" bytes used in stream "}; 
A_GISVEC(A68_VC ,AJCBCTR,YICBCTR,22)
static A68_INT  DJCBCTR_upbstring;
static A68_VC  EJCBCTR_string;
static A68_295   GJCBCTR = {"SHELL: incomplete stream"}; 
A_GISVEC(A68_VC ,HJCBCTR,GJCBCTR,24)
static A68_86  RJCBCTR_next;
static A68_INT  XJCBCTR_line_start;
static A68_INT  YJCBCTR_line_length;
static A68_INT  ZJCBCTR_statement_number;
static A68_INT  AKCBCTR_hundred_counter;
static A68_297   HKCBCTR = {"shell"}; 
A_GISVEC(A68_VC ,IKCBCTR,HKCBCTR,5)
static A68_298   KKCBCTR = {"At line "}; 
static A68_299   LKCBCTR = {"..."}; 
A_GISVEC(A68_VC ,MKCBCTR,KKCBCTR,8)
A_GISVEC(A68_VC ,OKCBCTR,LKCBCTR,3)
static A68_300   SKCBCTR = {" /* line "}; 
A_GISVEC(A68_VC ,TKCBCTR,SKCBCTR,9)
static A68_40   YKCBCTR = {": */"}; 
A_GISVEC(A68_VC ,ZKCBCTR,YKCBCTR,4)
static A68_295   ILCBCTR = {"invalid stream directive"}; 
A_GISVEC(A68_VC ,JLCBCTR,ILCBCTR,24)
static A68_302   CNCBCTR = {"SHELL: no last xchars"}; 
A_GISVEC(A68_VC ,DNCBCTR,CNCBCTR,21)
static A68_297   INCBCTR = {"]    "}; 
A_GISVEC(A68_VC ,LNCBCTR,INCBCTR,5)
static A68_107   XRCBCTR = {"chars should be absorbed by load"}; 
A_GISVEC(A68_VC ,YRCBCTR,XRCBCTR,32)
static A68_304   ZUCBCTR = {"#include <algol68/Asupport.h>"}; 
A_GISVEC(A68_VC ,AVCBCTR,ZUCBCTR,29)
static A68_306   GVCBCTR = {"/* end of translation of "}; 
A_GISVEC(A68_VC ,HVCBCTR,GVCBCTR,25)
static A68_299   LVCBCTR = {" */"}; 
A_GISVEC(A68_VC ,MVCBCTR,LVCBCTR,3)
static A68_INT  DWCBCTR_level;
typedef struct   /* env of non-global proc */
{
A68_INT  OWBBCTR_upbbuffers;
A_PAD_INT(PAD_216)
} SWBBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  NWBBCTR_size;
A_PAD_INT(PAD_217)
} CXBBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  Ll;
A_PAD_INT(PAD_218)
} FBCBCTR_outprep;
typedef struct   /* env of non-global proc */
{
A68_222  DBCBCTR_outprep;
} WBCBCTR_putints;
typedef struct   /* env of non-global proc */
{
A68_222  DBCBCTR_outprep;
} MCCBCTR_putint;
typedef struct   /* env of non-global proc */
{
A68_222  DBCBCTR_outprep;
} YCCBCTR_putchars;
typedef struct   /* env of non-global proc */
{
A68_222  DBCBCTR_outprep;
} FDCBCTR_puttruncatedchars;
typedef struct   /* env of non-global proc */
{
A68_INT  QDCBCTR_upbstreams;
A_PAD_INT(PAD_219)
} UDCBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_169  HHCBCTR_xbu;
} LHCBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * QLCBCTR_resultsize;
} ULCBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  MMCBCTR_newresultsize;
A_PAD_INT(PAD_220)
} QMCBCTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} USCBCTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} ITCBCTR_generator;

A_STATIC A68_VOID  YUBBCTR_generator(A68_BOOL  XUBBCTR_anonymous, A68_276  *ReturnedValue);

A_STATIC A68_VOID  PVBBCTR_generator(A68_BOOL  OVBBCTR_anonymous, A68_276  *ReturnedValue);

A_STATIC A68_VOID  LWBBCTR_extendcurrent(void);

A_STATIC A68_VOID  RWBBCTR_generator(A68_BOOL  PWBBCTR_anonymous, A68_276  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BXBBCTR_generator(A68_BOOL  ZWBBCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IYBBCTR_generator(A68_BOOL  HYBBCTR_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_BOOL  PYBBCTR_input(A68_VC  Line, A68_INT * Size);

A_STATIC A68_VOID  EZBBCTR_generator(A68_BOOL  DZBBCTR_anonymous, A68_181  *ReturnedValue);

A_STATIC A68_VOID  VACBCTR_output(A68_171  Op, A68_INT  Ll);

A_STATIC A68_VOID  YACBCTR_invert(A68_VC  String);

A_STATIC A68_VOID  EBCBCTR_outprep(A68_INT  Size, A68_INT  Type, void *NonLocals);

A_STATIC A68_VOID  VBCBCTR_putints(A68_INT  K, A68_185  A, void *NonLocals);

A_STATIC A68_VOID  LCCBCTR_putint(A68_INT  Type, A68_INT  I, void *NonLocals);

A_STATIC A68_VOID  XCCBCTR_putchars(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  EDCBCTR_puttruncatedchars(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  TDCBCTR_generator(A68_BOOL  RDCBCTR_anonymous, A68_279  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KHCBCTR_generator(A68_BOOL  IHCBCTR_anonymous, A68_185  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FJCBCTR_positioncurrent(void);

A_STATIC A68_INT  IJCBCTR_nextbyte(void);

A_STATIC A68_INT  LJCBCTR_nextint(void);

A_STATIC A68_VOID  TJCBCTR_nextstring(A68_VC  *ReturnedValue);

A_STATIC A68_INT  BKCBCTR_nexttype(void);

A_STATIC A68_VOID  NLCBCTR_nextxchars(A68_INT  Suggestedsize, A68_INT  Insertion, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  TLCBCTR_generator(A68_BOOL  RLCBCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PMCBCTR_generator(A68_BOOL  NMCBCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GNCBCTR_nextstreamimperative(A68_186  *ReturnedValue);

A_STATIC A68_VOID  TSCBCTR_generator(A68_BOOL  RSCBCTR_anonymous, A68_185  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HTCBCTR_generator(A68_BOOL  FTCBCTR_anonymous, A68_206  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RWBBCTR_generator(A68_BOOL  PWBBCTR_anonymous, A68_276  *ReturnedValue, void *NonLocals)
#define NL(x) (((SWBBCTR_generator *)NonLocals)->x)
{ 
A68_276  TWBBCTR;  /* clause result */
A68_276  UWBBCTR;  /* OPERATORS - dynamic generator */
{ 
UWBBCTR.upb = (NL(OWBBCTR_upbbuffers)+1) ;
( PWBBCTR_anonymous? A_VLOC(A68_VC ,UWBBCTR): A_VHEAP(A68_VC ,UWBBCTR) );
TWBBCTR = UWBBCTR;
} 
*ReturnedValue = (TWBBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  BXBBCTR_generator(A68_BOOL  ZWBBCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((CXBBCTR_generator *)NonLocals)->x)
{ 
A68_VC  DXBBCTR;  /* clause result */
A68_VC  EXBBCTR;  /* OPERATORS - dynamic generator */
{ 
EXBBCTR.upb = NL(NWBBCTR_size) ;
( ZWBBCTR_anonymous? A_VLOC(A68_CHAR ,EXBBCTR): A_VHEAP(A68_CHAR ,EXBBCTR) );
DXBBCTR = EXBBCTR;
} 
*ReturnedValue = (DXBBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  YACBCTR_invert(A68_VC  String)
{ 
A68_CHAR * ZACBCTR_c;
A68_INT  ABCBCTR;  /* forall loop counter */
A_PROC_ENTRY(invert);
 /* line 270: */
 /* line 271: */
ABCBCTR = String.upb -1;
ZACBCTR_c = String.data;
for (;ABCBCTR-- >= 0;
(ZACBCTR_c++
) )
{
 /* line 272: */
 /* line 273: */
if ( (((*ZACBCTR_c)>='a')&((*ZACBCTR_c)<='z')) )
{ 
 /* line 274: */
(*ZACBCTR_c) = (A68_SSBITS)(((A68_INT)(unsigned char)(*ZACBCTR_c)-(A68_INT)(unsigned char)'a')+(A68_INT)(unsigned char)'A');
} 
else
{ 
 /* line 275: */
if ( (((*ZACBCTR_c)>='A')&((*ZACBCTR_c)<='Z')) )
{ 
 /* line 276: */
 /* line 277: */
(*ZACBCTR_c) = (A68_SSBITS)(((A68_INT)(unsigned char)(*ZACBCTR_c)-(A68_INT)(unsigned char)'A')+(A68_INT)(unsigned char)'a');
} 
} 
}
A_PROC_EXIT(invert);
return;
} 
#undef NL

A_STATIC A68_VOID  EBCBCTR_outprep(A68_INT  Size, A68_INT  Type, void *NonLocals)
#define NL(x) (((FBCBCTR_outprep *)NonLocals)->x)
{ 
A68_VC  GBCBCTR;  /* OPERATORS - nil -> mode */
A68_VC  HBCBCTR;  /* == */
A68_VC  IBCBCTR;  /* OPERATORS - trim index */
A68_VC  JBCBCTR;  /* OPERATORS - trim index */
A68_VC * KBCBCTR;  /* YIELD */
A68_VC  LBCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  MBCBCTR;  /* avoid structure result */
A68_VC  NBCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  OBCBCTR;  /* avoid structure result */
A68_VC  PBCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  QBCBCTR;  /* YIELD */
A68_CHAR * RBCBCTR;  /* YIELD */
A_PROC_ENTRY(outprep);
 /* line 288: */
 /* line 289: */
{ 
 /* line 290: */
 /* line 292: */
HBCBCTR = A_VVAC(GBCBCTR) ;
if ( A_VSTRUCTCOMP((*FWBBCTR_streambuffer),HBCBCTR) )
{ 
LWBBCTR_extendcurrent();
} 
else
{ 
 /* line 293: */
 /* line 294: */
if ( ((Size+(*GWBBCTR_strptr))>(*FWBBCTR_streambuffer).upb) )
{ 
 /* line 295: */
IBCBCTR = (*(&A_VINDEX((*IWBBCTR_buffers),(*HWBBCTR_currentbuffer)))) ;
KBCBCTR = (&A_VINDEX((*IWBBCTR_buffers),(*HWBBCTR_currentbuffer))) ;
(*KBCBCTR) = A_VTRIM(JBCBCTR,(IBCBCTR),A_VTSCRIPT(&(JBCBCTR.upb),(IBCBCTR).upb,1,(*GWBBCTR_strptr)));
 /* line 296: */
 /* line 297: */
LWBBCTR_extendcurrent();
} 
} 
 /* line 299: */
 /* line 300: */
 /* line 301: */
if ( HQIACTR_streamoutoption )
{ 
 /* line 302: */
ROAAOSF_whole( Type, 0, &MBCBCTR );
ROAAOSF_whole( NL(Ll), 0, &OBCBCTR );
A_CALLPROC(MSIACTR_list,(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_HVEC(LBCBCTR,'%',A68_CHAR ),MBCBCTR),A_HVEC(NBCBCTR,'(',A68_CHAR )),OBCBCTR),A_HVEC(PBCBCTR,')',A68_CHAR ))),(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_HVEC(LBCBCTR,'%',A68_CHAR ),MBCBCTR),A_HVEC(NBCBCTR,'(',A68_CHAR )),OBCBCTR),A_HVEC(PBCBCTR,')',A68_CHAR )),(MSIACTR_list).nonlocals));
} 
 /* line 304: */
 /* line 305: */
QBCBCTR = (*GWBBCTR_strptr)+=1 ;
RBCBCTR = (&A_VINDEX((*FWBBCTR_streambuffer),QBCBCTR)) ;
(*RBCBCTR) = (A68_SSBITS)Type;
} 
A_PROC_EXIT(outprep);
return;
} 
#undef NL

A_STATIC A68_VOID  VBCBCTR_putints(A68_INT  K, A68_185  A, void *NonLocals)
#define NL(x) (((WBCBCTR_putints *)NonLocals)->x)
{ 
A68_INT  XBCBCTR_v;
A68_INT * YBCBCTR;  /* forall control - []x */
A68_INT  ZBCBCTR;  /* forall loop counter */
A68_VC  ACCBCTR;  /* OPERATORS - trim index */
A68_VC  BCCBCTR;  /* OPERATORS - trim index */
A68_VC  CCCBCTR;  /* OPERATORS - trim index */
union {  /* BIOP 99 */
A68_INT   source;
A68_40   destination;
} DCCBCTR; 
A68_VC  ECCBCTR;  /* OPERATORS - istruct -> vector */
A68_40  FCCBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  GCCBCTR;  /* YIELD */
A68_VC  HCCBCTR;  /* OPERATORS - assign op */
A_PROC_ENTRY(putints);
 /* line 321: */
 /* line 322: */
{ 
A_CALLPROC(NL(DBCBCTR_outprep),(((4*A.dim[0].upb)+1), K),(((4*A.dim[0].upb)+1), K,(NL(DBCBCTR_outprep)).nonlocals));
 /* line 323: */
 /* line 324: */
ZBCBCTR = A.dim[0].upb - A.dim[0].lwb;
YBCBCTR = A.data;
for (;ZBCBCTR-- >= 0;
(YBCBCTR += A.dim[0].stride
) )
{
XBCBCTR_v = *YBCBCTR;
BCCBCTR = A_VTRIM(ACCBCTR,((*FWBBCTR_streambuffer)),A_VTSCRIPT(&(ACCBCTR.upb),((*FWBBCTR_streambuffer)).upb,((*GWBBCTR_strptr)+1),((*FWBBCTR_streambuffer)).upb)) ;
DCCBCTR.source = XBCBCTR_v ;
FCCBCTR = (DCCBCTR.destination) ;
GCCBCTR = A_VTRIM(CCCBCTR,(BCCBCTR),A_VTSCRIPT(&(CCCBCTR.upb),(BCCBCTR).upb,1,4)) ;
HCCBCTR = A_HISVEC(ECCBCTR,FCCBCTR,4,A68_CHAR ) ;
A_VASSIGN2(HCCBCTR,GCCBCTR,A68_CHAR );
 /* line 325: */
 /* line 326: */
(*GWBBCTR_strptr)+=4;
}
 /* line 327: */
} 
A_PROC_EXIT(putints);
return;
} 
#undef NL

A_STATIC A68_VOID  LCCBCTR_putint(A68_INT  Type, A68_INT  I, void *NonLocals)
#define NL(x) (((MCCBCTR_putint *)NonLocals)->x)
{ 
A68_VC  NCCBCTR;  /* OPERATORS - trim index */
A68_VC  OCCBCTR;  /* OPERATORS - trim index */
A68_VC  PCCBCTR;  /* OPERATORS - trim index */
union {  /* BIOP 99 */
A68_INT   source;
A68_40   destination;
} QCCBCTR; 
A68_VC  RCCBCTR;  /* OPERATORS - istruct -> vector */
A68_40  SCCBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  TCCBCTR;  /* YIELD */
A68_VC  UCCBCTR;  /* OPERATORS - assign op */
A_PROC_ENTRY(putint);
 /* line 330: */
 /* line 331: */
{ 
A_CALLPROC(NL(DBCBCTR_outprep),(5, Type),(5, Type,(NL(DBCBCTR_outprep)).nonlocals));
 /* line 332: */
OCCBCTR = A_VTRIM(NCCBCTR,((*FWBBCTR_streambuffer)),A_VTSCRIPT(&(NCCBCTR.upb),((*FWBBCTR_streambuffer)).upb,((*GWBBCTR_strptr)+1),((*FWBBCTR_streambuffer)).upb)) ;
QCCBCTR.source = I ;
SCCBCTR = (QCCBCTR.destination) ;
TCCBCTR = A_VTRIM(PCCBCTR,(OCCBCTR),A_VTSCRIPT(&(PCCBCTR.upb),(OCCBCTR).upb,1,4)) ;
UCCBCTR = A_HISVEC(RCCBCTR,SCCBCTR,4,A68_CHAR ) ;
A_VASSIGN2(UCCBCTR,TCCBCTR,A68_CHAR );
 /* line 333: */
 /* line 334: */
(*GWBBCTR_strptr)+=4;
} 
A_PROC_EXIT(putint);
return;
} 
#undef NL

A_STATIC A68_VOID  XCCBCTR_putchars(A68_VC  S, void *NonLocals)
#define NL(x) (((YCCBCTR_putchars *)NonLocals)->x)
{ 
A68_INT  ZCCBCTR_up;
A68_VC  ADCBCTR;  /* OPERATORS - trim index */
A68_VC  BDCBCTR;  /* YIELD */
A_PROC_ENTRY(putchars);
 /* line 337: */
{ 
ZCCBCTR_up = S.upb;
 /* line 338: */
A_CALLPROC(NL(DBCBCTR_outprep),((ZCCBCTR_up+1), ZCCBCTR_up),((ZCCBCTR_up+1), ZCCBCTR_up,(NL(DBCBCTR_outprep)).nonlocals));
 /* line 339: */
BDCBCTR = A_VTRIM(ADCBCTR,((*FWBBCTR_streambuffer)),A_VTSCRIPT(&(ADCBCTR.upb),((*FWBBCTR_streambuffer)).upb,((*GWBBCTR_strptr)+1),((*GWBBCTR_strptr)+ZCCBCTR_up))) ;
A_VASSIGN2(S,BDCBCTR,A68_CHAR );
 /* line 340: */
 /* line 341: */
(*GWBBCTR_strptr)+=ZCCBCTR_up;
} 
A_PROC_EXIT(putchars);
return;
} 
#undef NL

A_STATIC A68_VOID  EDCBCTR_puttruncatedchars(A68_VC  S, void *NonLocals)
#define NL(x) (((FDCBCTR_puttruncatedchars *)NonLocals)->x)
{ 
A68_INT  GDCBCTR_up;
A68_VC  HDCBCTR;  /* OPERATORS - trim index */
A68_VC  IDCBCTR;  /* OPERATORS - trim index */
A68_VC  JDCBCTR;  /* YIELD */
A68_VC  KDCBCTR;  /* OPERATORS - assign op */
A_PROC_ENTRY(puttruncatedchars);
 /* line 344: */
{ 
GDCBCTR_up = KMAAOSF_truncate(' ', S);
 /* line 345: */
A_CALLPROC(NL(DBCBCTR_outprep),((GDCBCTR_up+1), GDCBCTR_up),((GDCBCTR_up+1), GDCBCTR_up,(NL(DBCBCTR_outprep)).nonlocals));
 /* line 346: */
JDCBCTR = A_VTRIM(HDCBCTR,((*FWBBCTR_streambuffer)),A_VTSCRIPT(&(HDCBCTR.upb),((*FWBBCTR_streambuffer)).upb,((*GWBBCTR_strptr)+1),((*GWBBCTR_strptr)+GDCBCTR_up))) ;
KDCBCTR = A_VTRIM(IDCBCTR,(S),A_VTSCRIPT(&(IDCBCTR.upb),(S).upb,1,GDCBCTR_up)) ;
A_VASSIGN2(KDCBCTR,JDCBCTR,A68_CHAR );
 /* line 347: */
 /* line 348: */
(*GWBBCTR_strptr)+=GDCBCTR_up;
} 
A_PROC_EXIT(puttruncatedchars);
return;
} 
#undef NL

A_STATIC A68_VOID  TDCBCTR_generator(A68_BOOL  RDCBCTR_anonymous, A68_279  *ReturnedValue, void *NonLocals)
#define NL(x) (((UDCBCTR_generator *)NonLocals)->x)
{ 
A68_279  VDCBCTR;  /* clause result */
A68_279  WDCBCTR;  /* OPERATORS - dynamic generator */
{ 
WDCBCTR.dim[0].upb = (NL(QDCBCTR_upbstreams)+NL(QDCBCTR_upbstreams)) ;
WDCBCTR.dim[0].lwb = 0 ;
A_1INITSTRIDES(WDCBCTR) ;
( RDCBCTR_anonymous? A_R1LOC(A68_275 ,WDCBCTR): A_R1HEAP(A68_275 ,WDCBCTR) );
VDCBCTR = WDCBCTR;
} 
*ReturnedValue = (VDCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  KHCBCTR_generator(A68_BOOL  IHCBCTR_anonymous, A68_185  *ReturnedValue, void *NonLocals)
#define NL(x) (((LHCBCTR_generator *)NonLocals)->x)
{ 
A68_185  MHCBCTR;  /* clause result */
A68_185  NHCBCTR;  /* OPERATORS - dynamic generator */
{ 
NHCBCTR.dim[0].upb = NL(HHCBCTR_xbu).Decnos.upb ;
NHCBCTR.dim[0].lwb = 1 ;
A_1INITSTRIDES(NHCBCTR) ;
( IHCBCTR_anonymous? A_R1LOC(A68_INT ,NHCBCTR): A_R1HEAP(A68_INT ,NHCBCTR) );
MHCBCTR = NHCBCTR;
} 
*ReturnedValue = (MHCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  TLCBCTR_generator(A68_BOOL  RLCBCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ULCBCTR_generator *)NonLocals)->x)
{ 
A68_VC  VLCBCTR;  /* clause result */
A68_VC  WLCBCTR;  /* OPERATORS - dynamic generator */
{ 
WLCBCTR.upb = (*NL(QLCBCTR_resultsize)) ;
( RLCBCTR_anonymous? A_VLOC(A68_CHAR ,WLCBCTR): A_VHEAP(A68_CHAR ,WLCBCTR) );
VLCBCTR = WLCBCTR;
} 
*ReturnedValue = (VLCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  PMCBCTR_generator(A68_BOOL  NMCBCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((QMCBCTR_generator *)NonLocals)->x)
{ 
A68_VC  RMCBCTR;  /* clause result */
A68_VC  SMCBCTR;  /* OPERATORS - dynamic generator */
{ 
SMCBCTR.upb = NL(MMCBCTR_newresultsize) ;
( NMCBCTR_anonymous? A_VLOC(A68_CHAR ,SMCBCTR): A_VHEAP(A68_CHAR ,SMCBCTR) );
RMCBCTR = SMCBCTR;
} 
*ReturnedValue = (RMCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  TSCBCTR_generator(A68_BOOL  RSCBCTR_anonymous, A68_185  *ReturnedValue, void *NonLocals)
#define NL(x) (((USCBCTR_generator *)NonLocals)->x)
{ 
A68_185  VSCBCTR;  /* clause result */
A68_185  WSCBCTR;  /* OPERATORS - dynamic generator */
{ 
WSCBCTR.dim[0].upb = A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals)) ;
WSCBCTR.dim[0].lwb = 1 ;
A_1INITSTRIDES(WSCBCTR) ;
( RSCBCTR_anonymous? A_R1LOC(A68_INT ,WSCBCTR): A_R1HEAP(A68_INT ,WSCBCTR) );
VSCBCTR = WSCBCTR;
} 
*ReturnedValue = (VSCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HTCBCTR_generator(A68_BOOL  FTCBCTR_anonymous, A68_206  *ReturnedValue, void *NonLocals)
#define NL(x) (((ITCBCTR_generator *)NonLocals)->x)
{ 
A68_206  JTCBCTR;  /* clause result */
A68_206  KTCBCTR;  /* OPERATORS - dynamic generator */
{ 
KTCBCTR.dim[0].upb = A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals)) ;
KTCBCTR.dim[0].lwb = 1 ;
A_1INITSTRIDES(KTCBCTR) ;
( FTCBCTR_anonymous? A_R1LOC(A68_VC ,KTCBCTR): A_R1HEAP(A68_VC ,KTCBCTR) );
JTCBCTR = KTCBCTR;
} 
*ReturnedValue = (JTCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  YUBBCTR_generator(A68_BOOL  XUBBCTR_anonymous, A68_276  *ReturnedValue)
{ 
A68_276  ZUBBCTR;  /* clause result */
A68_276  AVBBCTR;  /* OPERATORS - dynamic generator */
{ 
AVBBCTR.upb = 0 ;
( XUBBCTR_anonymous? A_VLOC(A68_VC ,AVBBCTR): A_VHEAP(A68_VC ,AVBBCTR) );
ZUBBCTR = AVBBCTR;
} 
*ReturnedValue = (ZUBBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  PVBBCTR_generator(A68_BOOL  OVBBCTR_anonymous, A68_276  *ReturnedValue)
{ 
A68_276  QVBBCTR;  /* clause result */
A68_276  RVBBCTR;  /* OPERATORS - dynamic generator */
{ 
RVBBCTR.upb = 1 ;
( OVBBCTR_anonymous? A_VLOC(A68_VC ,RVBBCTR): A_VHEAP(A68_VC ,RVBBCTR) );
QVBBCTR = RVBBCTR;
} 
*ReturnedValue = (QVBBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  LWBBCTR_extendcurrent(void)
{ 
A68_INT  MWBBCTR;  /* clause result */
A68_INT  NWBBCTR_size;
A68_INT  OWBBCTR_upbbuffers;
A68_277  QWBBCTR_generator;   /* proc value of non-global proc */
A68_276  VWBBCTR;  /* avoid structure result */
A68_276  WWBBCTR_new;
A68_276  XWBBCTR;  /* OPERATORS - trim index */
A68_276  YWBBCTR;  /* YIELD */
A68_103  AXBBCTR_generator;   /* proc value of non-global proc */
A68_INT  FXBBCTR;  /* YIELD */
A68_VC  GXBBCTR;  /* avoid structure result */
A68_VC * HXBBCTR;  /* YIELD */
A68_276  IXBBCTR;  /* clause result */
A_PROC_ENTRY(extendcurrent);
{ 
if ( ((*HWBBCTR_currentbuffer)==0) )
{ 
MWBBCTR = 1000;
} 
else
{ 
MWBBCTR = 10000;
} 
NWBBCTR_size = MWBBCTR;
 /* line 101: */
 /* line 102: */
{ 
OWBBCTR_upbbuffers = (*IWBBCTR_buffers).upb;
 /* line 103: */
A_CLOSURE( QWBBCTR_generator, RWBBCTR_generator, SWBBCTR_generator );
(( SWBBCTR_generator * ) ( QWBBCTR_generator.nonlocals )) -> OWBBCTR_upbbuffers = OWBBCTR_upbbuffers;
A_CALLPROC(QWBBCTR_generator,(A68_FALSE, &VWBBCTR),(A68_FALSE, &VWBBCTR,(QWBBCTR_generator).nonlocals));
WWBBCTR_new = VWBBCTR;
 /* line 104: */
YWBBCTR = A_VTRIM(XWBBCTR,(WWBBCTR_new),A_VTSCRIPT(&(XWBBCTR.upb),(WWBBCTR_new).upb,1,OWBBCTR_upbbuffers)) ;
A_VASSIGN2((*IWBBCTR_buffers),YWBBCTR,A68_VC );
 /* line 105: */
 /* line 106: */
 /* line 107: */
A_CLOSURE( AXBBCTR_generator, BXBBCTR_generator, CXBBCTR_generator );
(( CXBBCTR_generator * ) ( AXBBCTR_generator.nonlocals )) -> NWBBCTR_size = NWBBCTR_size;
FXBBCTR = (*HWBBCTR_currentbuffer) = (OWBBCTR_upbbuffers+1) ;
A_CALLPROC(AXBBCTR_generator,(A68_FALSE, &GXBBCTR),(A68_FALSE, &GXBBCTR,(AXBBCTR_generator).nonlocals));
HXBBCTR = (&A_VINDEX(WWBBCTR_new,FXBBCTR)) ;
(*FWBBCTR_streambuffer) = (*HXBBCTR) = GXBBCTR;
 /* line 108: */
(*GWBBCTR_strptr) = 0;
 /* line 109: */
 /* line 110: */
 /* line 111: */
IXBBCTR = WWBBCTR_new;
} 
(*IWBBCTR_buffers) = IXBBCTR;
} 
A_PROC_EXIT(extendcurrent);
return;
} 
#undef NL

A_STATIC A68_VOID  IYBBCTR_generator(A68_BOOL  HYBBCTR_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  JYBBCTR;  /* clause result */
A68_VC  KYBBCTR;  /* OPERATORS - dynamic generator */
{ 
KYBBCTR.upb = 0 ;
( HYBBCTR_anonymous? A_VLOC(A68_CHAR ,KYBBCTR): A_VHEAP(A68_CHAR ,KYBBCTR) );
JYBBCTR = KYBBCTR;
} 
*ReturnedValue = (JYBBCTR);
return;
} 
#undef NL

A_STATIC A68_BOOL  PYBBCTR_input(A68_VC  Line, A68_INT * Size)
{ 
A68_60  QYBBCTR;  /* avoid structure result */
A68_60  RYBBCTR_read_status;
A68_BOOL  SYBBCTR;  /* optbool result */
A68_BOOL  TYBBCTR;  /* clause result */
A68_BOOL  UYBBCTR;  /* clause result */
A68_INT  VYBBCTR;  /* YIELD */
A68_CHAR * WYBBCTR_first;
A68_BOOL  XYBBCTR;  /* optbool result */
A68_BOOL  YYBBCTR;  /* clause result */
A68_INT  ZYBBCTR;  /* YIELD */
A68_CHAR * AZBBCTR_second;
A68_BOOL  BZBBCTR;  /* clause result */
A68_INT  CZBBCTR;  /* YIELD */
A_PROC_ENTRY(input);
 /* line 159: */
 /* line 160: */
{ 
DXBAOSF_read_line( DYBBCTR_inputfile, Line, Size, RIBAOSF_ignore_msg, &QYBBCTR );
RYBBCTR_read_status = QYBBCTR;
 /* line 161: */
SYBBCTR = AVBAOSF_(RYBBCTR_read_status, UUBAOSF_io_error);
if ( ! SYBBCTR )
{ /* line 162: */
SYBBCTR = AVBAOSF_(RYBBCTR_read_status, RUBAOSF_io_eof);
}
 /* line 163: */
TYBBCTR = SYBBCTR;
if ( TYBBCTR )
{ 
 /* line 164: */
 /* line 165: */
UYBBCTR = A68_FALSE;
} 
else
{ 
XRIACTR_linenumber+=1;
 /* line 166: */
 /* line 167: */
 /* line 168: */
 /* line 169: */
if ( AVBAOSF_(RYBBCTR_read_status, XUBAOSF_io_no_newline) )
{ 
 /* line 170: */
PXIACTR_error(253);
} 
 /* line 172: */
GYBBCTR_line_pending = A68_TRUE;
 /* line 176: */
 /* line 177: */
 /* line 179: */
if ( ((*Size)<2) )
{ 
 /* line 180: */
/*SKIP*/;
} 
else
{ 
{ 
VYBBCTR = 1 ;
WYBBCTR_first = (&A_VINDEX(Line,VYBBCTR));
 /* line 181: */
XYBBCTR = ((*WYBBCTR_first)!='*');
if ( XYBBCTR )
{ /* line 182: */
XYBBCTR = ((*WYBBCTR_first)!='%');
}
 /* line 184: */
YYBBCTR = XYBBCTR;
if ( YYBBCTR )
{ 
 /* line 191: */
/*SKIP*/;
} 
else
{ 
{ 
ZYBBCTR = 2 ;
AZBBCTR_second = (&A_VINDEX(Line,ZYBBCTR));
 /* line 192: */
 /* line 193: */
 /* line 194: */
CZBBCTR = (A68_INT)(unsigned char)(*AZBBCTR_second) ;
BZBBCTR = ((*(&A_R1INDEX(KRIACTR_stars,CZBBCTR)))==((*WYBBCTR_first)=='*'));
if ( BZBBCTR )
{ 
 /* line 195: */
 /* line 196: */
(*WYBBCTR_first) = (*AZBBCTR_second) = ' ';
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
UYBBCTR = A68_TRUE;
} 
} 
A_PROC_EXIT(input);
return( UYBBCTR );
} 
#undef NL

A_STATIC A68_VOID  EZBBCTR_generator(A68_BOOL  DZBBCTR_anonymous, A68_181  *ReturnedValue)
{ 
A68_181  FZBBCTR;  /* clause result */
A68_181  GZBBCTR;  /* OPERATORS - dynamic generator */
{ 
GZBBCTR.dim[0].upb = 511 ;
GZBBCTR.dim[0].lwb = 0 ;
A_1INITSTRIDES(GZBBCTR) ;
( DZBBCTR_anonymous? A_R1LOC(A68_182 ,GZBBCTR): A_R1HEAP(A68_182 ,GZBBCTR) );
FZBBCTR = GZBBCTR;
} 
*ReturnedValue = (FZBBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  VACBCTR_output(A68_171  Op, A68_INT  Ll)
{ 
A68_222  DBCBCTR_outprep;   /* proc value of non-global proc */
A68_287  UBCBCTR_putints;   /* proc value of non-global proc */
A68_222  KCCBCTR_putint;   /* proc value of non-global proc */
A68_98  WCCBCTR_putchars;   /* proc value of non-global proc */
A68_98  DDCBCTR_puttruncatedchars;   /* proc value of non-global proc */
A68_171  LDCBCTR;  /* united object - for case conformity */
A68_155  MDCBCTR_c;
A68_BOOL  NDCBCTR;  /* clause result */
A68_288  ODCBCTR;  /* collateral clause result */
A68_185  PDCBCTR;  /* OPERATORS - istruct to row */
A68_INT  QDCBCTR_upbstreams;
A68_289  SDCBCTR_generator;   /* proc value of non-global proc */
A68_279  XDCBCTR;  /* avoid structure result */
A68_279  YDCBCTR_newstreams;
A68_275 * ZDCBCTR_stream;
A68_279  AECBCTR;  /* OPERATORS - trim index */
A68_279  BECBCTR;  /* forall yield */
A68_INT  CECBCTR;  /* forall loop counter */
A68_279  DECBCTR;  /* OPERATORS - trim index */
A68_279  EECBCTR;  /* YIELD */
A68_171  FECBCTR;  /* united object - for case conformity */
A68_150  GECBCTR_e;
A68_151  HECBCTR_xop;
A68_290  IECBCTR;  /* collateral clause result */
A68_185  JECBCTR;  /* OPERATORS - istruct to row */
A68_155  KECBCTR_c;
A68_288  LECBCTR;  /* collateral clause result */
A68_185  MECBCTR;  /* OPERATORS - istruct to row */
A68_INT  NECBCTR;  /* YIELD */
A68_INT  OECBCTR_fnval;
A68_288  PECBCTR;  /* collateral clause result */
A68_185  QECBCTR;  /* OPERATORS - istruct to row */
A68_INT  RECBCTR_id;
A68_140  SECBCTR_number;
A68_INT  TECBCTR_type;
A68_INT  UECBCTR_exp;
A68_CHAR * VECBCTR_c;
A68_VC  WECBCTR;  /* forall yield */
A68_INT  XECBCTR;  /* forall loop counter */
A68_BOOL  YECBCTR;  /* optbool result */
A68_VC  ZECBCTR;  /* OPERATORS - trim index */
A68_VC  AFCBCTR;  /* OPERATORS - trim index */
A68_VC  BFCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  CFCBCTR;  /* OPERATORS - trim index */
A68_VC  DFCBCTR;  /* OPERATORS - trim index */
A68_154  EFCBCTR_xw;
A68_147  FFCBCTR_idd;
A68_290  GFCBCTR;  /* collateral clause result */
A68_185  HFCBCTR;  /* OPERATORS - istruct to row */
A68_VC  IFCBCTR;  /* OPERATORS - istruct -> vector */
A68_107  JFCBCTR;  /* OPERATORS - istruct -> vector */
A68_142  KFCBCTR_chars;
A68_INT  LFCBCTR;  /* clause result */
A68_VC  MFCBCTR;  /* clause result */
A68_VC  NFCBCTR;  /* avoid structure result */
A68_VC  OFCBCTR_string;
A68_143  PFCBCTR_str;
A68_124 * QFCBCTR_rd;
A68_291  RFCBCTR;  /* collateral clause result */
A68_185  SFCBCTR;  /* OPERATORS - istruct to row */
A68_VC  TFCBCTR;  /* OPERATORS - istruct -> vector */
A68_107  UFCBCTR;  /* OPERATORS - istruct -> vector */
A68_146  VFCBCTR_nse;
A68_BOOL  WFCBCTR_b;
A68_138  XFCBCTR_generator;
A68_290  YFCBCTR;  /* collateral clause result */
A68_185  ZFCBCTR;  /* OPERATORS - istruct to row */
A68_141  AGCBCTR_al;
A68_139  BGCBCTR_c;
A68_290  CGCBCTR;  /* collateral clause result */
A68_185  DGCBCTR;  /* OPERATORS - istruct to row */
A68_148  EGCBCTR_xl;
A68_125 * FGCBCTR_rl;
A68_VC  GGCBCTR;  /* OPERATORS - istruct -> vector */
A68_107  HGCBCTR;  /* OPERATORS - istruct -> vector */
A68_290  IGCBCTR;  /* collateral clause result */
A68_185  JGCBCTR;  /* OPERATORS - istruct to row */
A68_125 * KGCBCTR_lb;
A68_156  LGCBCTR_xs;
A68_172  MGCBCTR_mdes;
A68_249  NGCBCTR;  /* OPERATORS - vector -> row */
A68_163  OGCBCTR_xtd;
A68_162  PGCBCTR_xtm;
A68_290  QGCBCTR;  /* collateral clause result */
A68_185  RGCBCTR;  /* OPERATORS - istruct to row */
A68_VC  SGCBCTR;  /* OPERATORS - istruct -> vector */
A68_107  TGCBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  UGCBCTR;  /* OPERATORS - istruct -> vector */
A68_105  VGCBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  WGCBCTR;  /* OPERATORS - istruct -> vector */
A68_105  XGCBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  YGCBCTR;  /* OPERATORS - istruct -> vector */
A68_105  ZGCBCTR;  /* OPERATORS - istruct -> vector */
A68_128 * AHCBCTR_spec;
A68_127  BHCBCTR;  /* forall yield */
A68_INT  CHCBCTR;  /* forall loop counter */
A68_VC  DHCBCTR;  /* OPERATORS - istruct -> vector */
A68_105  EHCBCTR;  /* OPERATORS - istruct -> vector */
A68_160  FHCBCTR_open;
A68_157  GHCBCTR_xm;
A68_169  HHCBCTR_xbu;
A68_292  JHCBCTR_generator;   /* proc value of non-global proc */
A68_185  OHCBCTR;  /* avoid structure result */
A68_92  PHCBCTR;  /* YIELD */
A68_185  QHCBCTR;  /* OPERATORS - vector -> row */
A68_185  RHCBCTR;  /* OPERATORS - assign op */
A68_129  SHCBCTR_s;
A_PROC_ENTRY(output);
 /* line 263: */
 /* line 264: */
 /* line 266: */
if ( (DSIACTR_greatestseverity<=2) )
{ 
 /* line 279: */
A_CLOSURE( DBCBCTR_outprep, EBCBCTR_outprep, FBCBCTR_outprep );
(( FBCBCTR_outprep * ) ( DBCBCTR_outprep.nonlocals )) -> Ll = Ll;
 /* line 320: */
A_CLOSURE( UBCBCTR_putints, VBCBCTR_putints, WBCBCTR_putints );
(( WBCBCTR_putints * ) ( UBCBCTR_putints.nonlocals )) -> DBCBCTR_outprep = DBCBCTR_outprep;
 /* line 329: */
A_CLOSURE( KCCBCTR_putint, LCCBCTR_putint, MCCBCTR_putint );
(( MCCBCTR_putint * ) ( KCCBCTR_putint.nonlocals )) -> DBCBCTR_outprep = DBCBCTR_outprep;
 /* line 336: */
A_CLOSURE( WCCBCTR_putchars, XCCBCTR_putchars, YCCBCTR_putchars );
(( YCCBCTR_putchars * ) ( WCCBCTR_putchars.nonlocals )) -> DBCBCTR_outprep = DBCBCTR_outprep;
 /* line 343: */
A_CLOSURE( DDCBCTR_puttruncatedchars, EDCBCTR_puttruncatedchars, FDCBCTR_puttruncatedchars );
(( FDCBCTR_puttruncatedchars * ) ( DDCBCTR_puttruncatedchars.nonlocals )) -> DBCBCTR_outprep = DBCBCTR_outprep;
 /* line 352: */
 /* line 353: */
 /* line 354: */
if ( GYBBCTR_line_pending )
{ 
 /* line 355: */
LDCBCTR = Op ;
switch ( LDCBCTR.mode )
{ 
case 17: /* STRUCT(INT,INT,BITS,INT)  */
MDCBCTR_c = (LDCBCTR.data.mode17);
 /* line 356: */
NDCBCTR = (MDCBCTR_c.Fn!=25);
break;
default: 
 /* line 357: */
 /* line 358: */
 /* line 360: */
NDCBCTR = A68_TRUE;
break;
} 
if ( NDCBCTR )
{ 
 /* line 361: */
ODCBCTR.data[0] = XRIACTR_linenumber;
ODCBCTR.data[1] = EYBBCTR_line_start;
 /* line 362: */
ODCBCTR.data[2] = FYBBCTR_line_length;
A_CALLPROC(UBCBCTR_putints,(WXBBCTR_linetype, A_HIS1ARR(PDCBCTR,ODCBCTR,A68_INT ,3)),(WXBBCTR_linetype, A_HIS1ARR(PDCBCTR,ODCBCTR,A68_INT ,3),(UBCBCTR_putints).nonlocals));
 /* line 363: */
 /* line 364: */
 /* line 365: */
GYBBCTR_line_pending = A68_FALSE;
} 
} 
 /* line 367: */
 /* line 368: */
if ( OACBCTR_upped )
{ 
A_CALLPROC(DBCBCTR_outprep,(1, 2),(1, 2,(DBCBCTR_outprep).nonlocals));
 /* line 369: */
 /* line 370: */
OACBCTR_upped = A68_FALSE;
} 
 /* line 372: */
(*JWBBCTR_curstradd) = IVBBCTR_current;
 /* line 374: */
for ( ;; )
{ 
 /* line 375: */
if ( !((Ll>EVBBCTR_streams.dim[0].upb)) ) break;
QDCBCTR_upbstreams = EVBBCTR_streams.dim[0].upb;
 /* line 376: */
A_CLOSURE( SDCBCTR_generator, TDCBCTR_generator, UDCBCTR_generator );
(( UDCBCTR_generator * ) ( SDCBCTR_generator.nonlocals )) -> QDCBCTR_upbstreams = QDCBCTR_upbstreams;
A_CALLPROC(SDCBCTR_generator,(A68_FALSE, &XDCBCTR),(A68_FALSE, &XDCBCTR,(SDCBCTR_generator).nonlocals));
YDCBCTR_newstreams = XDCBCTR;
 /* line 377: */
 /* line 378: */
BECBCTR = A_R1TRIM(AECBCTR,(YDCBCTR_newstreams),A_RTSCRIPT(&(AECBCTR.dim[0]),&((YDCBCTR_newstreams).dim[0]),(QDCBCTR_upbstreams+1),(YDCBCTR_newstreams).dim[0].upb,1)) ;
CECBCTR = BECBCTR.dim[0].upb - BECBCTR.dim[0].lwb;
ZDCBCTR_stream = BECBCTR.data;
for (;CECBCTR-- >= 0;
(ZDCBCTR_stream += BECBCTR.dim[0].stride
) )
{
 /* line 379: */
(*ZDCBCTR_stream) = CVBBCTR_unsetstream;
}
 /* line 380: */
EECBCTR = A_R1TRIM(DECBCTR,(YDCBCTR_newstreams),A_RTSCRIPT(&(DECBCTR.dim[0]),&((YDCBCTR_newstreams).dim[0]),(YDCBCTR_newstreams).dim[0].lwb,QDCBCTR_upbstreams,0)) ;
A_R1ASSIGN2(EVBBCTR_streams,EECBCTR,A68_275 );
 /* line 381: */
 /* line 382: */
EVBBCTR_streams = YDCBCTR_newstreams;
}
 /* line 383: */
IVBBCTR_current = (*(JWBBCTR_curstradd = (&A_R1INDEX(EVBBCTR_streams,Ll))));
 /* line 385: */
 /* line 386: */
FECBCTR = Op ;
switch ( FECBCTR.mode )
{ 
case 1: /* STRUCT(BOOL)  */
GECBCTR_e = (FECBCTR.data.mode1);
 /* line 387: */
 /* line 388: */
if ( !(OACBCTR_upped = GECBCTR_e.Up) )
{ 
 /* line 389: */
 /* line 390: */
A_CALLPROC(DBCBCTR_outprep,(1, 1),(1, 1,(DBCBCTR_outprep).nonlocals));
} 
break;
case 14: /* STRUCT(INT,INT,INT)  */
HECBCTR_xop = (FECBCTR.data.mode14);
 /* line 391: */
 /* line 392: */
if ( (HECBCTR_xop.Fn==LGAACTR_voidfn) )
{ 
 /* line 393: */
A_CALLPROC(DBCBCTR_outprep,(1, 202),(1, 202,(DBCBCTR_outprep).nonlocals));
} 
else
{ 
IECBCTR.data[0] = HECBCTR_xop.M;
IECBCTR.data[1] = HECBCTR_xop.Param;
 /* line 394: */
 /* line 395: */
A_CALLPROC(UBCBCTR_putints,((128+HECBCTR_xop.Fn), A_HIS1ARR(JECBCTR,IECBCTR,A68_INT ,2)),((128+HECBCTR_xop.Fn), A_HIS1ARR(JECBCTR,IECBCTR,A68_INT ,2),(UBCBCTR_putints).nonlocals));
} 
break;
case 17: /* STRUCT(INT,INT,BITS,INT)  */
KECBCTR_c = (FECBCTR.data.mode17);
 /* line 396: */
{ 
 /* line 397: */
if ( (KECBCTR_c.Fn==25) )
{ 
A_CALLPROC(DBCBCTR_outprep,(1, (48+((A68_INT )KECBCTR_c.Props/2048))),(1, (48+((A68_INT )KECBCTR_c.Props/2048)),(DBCBCTR_outprep).nonlocals));
 /* line 398: */
 /* line 399: */
 /* line 400: */
if ( GYBBCTR_line_pending )
{ 
 /* line 401: */
LECBCTR.data[0] = XRIACTR_linenumber;
LECBCTR.data[1] = EYBBCTR_line_start;
 /* line 402: */
LECBCTR.data[2] = FYBBCTR_line_length;
A_CALLPROC(UBCBCTR_putints,(WXBBCTR_linetype, A_HIS1ARR(MECBCTR,LECBCTR,A68_INT ,3)),(WXBBCTR_linetype, A_HIS1ARR(MECBCTR,LECBCTR,A68_INT ,3),(UBCBCTR_putints).nonlocals));
 /* line 403: */
 /* line 404: */
 /* line 405: */
 /* line 406: */
GYBBCTR_line_pending = A68_FALSE;
} 
} 
else
{ 
NECBCTR = (KECBCTR_c.Fn+1) ;
OECBCTR_fnval = (A68_INT)(unsigned char)A_VINDEX(NACBCTR_contval,NECBCTR);
 /* line 407: */
PECBCTR.data[0] = KECBCTR_c.M;
PECBCTR.data[1] = (A68_INT )KECBCTR_c.Props;
PECBCTR.data[2] = KECBCTR_c.Param;
 /* line 408: */
 /* line 409: */
 /* line 410: */
A_CALLPROC(UBCBCTR_putints,(OECBCTR_fnval, A_HIS1ARR(QECBCTR,PECBCTR,A68_INT ,3)),(OECBCTR_fnval, A_HIS1ARR(QECBCTR,PECBCTR,A68_INT ,3),(UBCBCTR_putints).nonlocals));
} 
} 
break;
case 3: /* INT */
RECBCTR_id = (FECBCTR.data.mode3);
 /* line 411: */
 /* line 412: */
if ( (RECBCTR_id<0) )
{ 
 /* line 413: */
A_CALLPROC(KCCBCTR_putint,(78, RECBCTR_id),(78, RECBCTR_id,(KCCBCTR_putint).nonlocals));
} 
else
{ 
 /* line 414: */
 /* line 415: */
A_CALLPROC(KCCBCTR_putint,(80, RECBCTR_id),(80, RECBCTR_id,(KCCBCTR_putint).nonlocals));
} 
break;
case 9: /* STRUCT(INT,REF MODE26)  */
SECBCTR_number = (FECBCTR.data.mode9);
 /* line 416: */
 /* line 417: */
{ 
TECBCTR_type = (SECBCTR_number.Mode+OXBBCTR_numberbase);
 /* line 418: */
A_CALLPROC(DBCBCTR_outprep,(1, TECBCTR_type),(1, TECBCTR_type,(DBCBCTR_outprep).nonlocals));
 /* line 423: */
UECBCTR_exp = (-1);
 /* line 424: */
WECBCTR = SECBCTR_number.Nu ;
XECBCTR = WECBCTR.upb -1;
VECBCTR_c = WECBCTR.data;
for (;XECBCTR-- >= 0;
(VECBCTR_c++
) )
{
 /* line 425: */
if ( !(((UECBCTR_exp-=1)<0)) ) break;
YECBCTR = ((*VECBCTR_c)=='+');
if ( ! YECBCTR )
{YECBCTR = ((*VECBCTR_c)=='-');
}
if ( YECBCTR )
{ 
UECBCTR_exp = (-UECBCTR_exp);
} 
}
 /* line 426: */
 /* line 427: */
 /* line 428: */
if ( (UECBCTR_exp<0) )
{ 
 /* line 429: */
 /* line 430: */
A_CALLPROC(WCCBCTR_putchars,(SECBCTR_number.Nu),(SECBCTR_number.Nu,(WCCBCTR_putchars).nonlocals));
} 
else
{ 
 /* line 431: */
 /* line 432: */
 /* line 433: */
 /* line 434: */
ZECBCTR = SECBCTR_number.Nu ;
CFCBCTR = SECBCTR_number.Nu ;
A_CALLPROC(WCCBCTR_putchars,(A_VC_PLUS(A_VC_PLUS(A_VTRIM(AFCBCTR,(ZECBCTR),A_VTSCRIPT(&(AFCBCTR.upb),(ZECBCTR).upb,1,(UECBCTR_exp-1))),A_HVEC(BFCBCTR,'e',A68_CHAR )),A_VTRIM(DFCBCTR,(CFCBCTR),A_VTSCRIPT(&(DFCBCTR.upb),(CFCBCTR).upb,UECBCTR_exp,(CFCBCTR).upb)))),(A_VC_PLUS(A_VC_PLUS(A_VTRIM(AFCBCTR,(ZECBCTR),A_VTSCRIPT(&(AFCBCTR.upb),(ZECBCTR).upb,1,(UECBCTR_exp-1))),A_HVEC(BFCBCTR,'e',A68_CHAR )),A_VTRIM(DFCBCTR,(CFCBCTR),A_VTSCRIPT(&(DFCBCTR.upb),(CFCBCTR).upb,UECBCTR_exp,(CFCBCTR).upb))),(WCCBCTR_putchars).nonlocals));
} 
} 
break;
case 16: /* STRUCT(INT)  */
EFCBCTR_xw = (FECBCTR.data.mode16);
 /* line 435: */
 /* line 436: */
if ( (EFCBCTR_xw.W<=3) )
{ 
 /* line 437: */
 /* line 438: */
A_CALLPROC(DBCBCTR_outprep,(1, (208+EFCBCTR_xw.W)),(1, (208+EFCBCTR_xw.W),(DBCBCTR_outprep).nonlocals));
} 
break;
case 12: /* STRUCT(INT,REF MODE123)  */
FFCBCTR_idd = (FECBCTR.data.mode12);
 /* line 439: */
 /* line 441: */
{ 
 /* line 442: */
GFCBCTR.data[0] = (*(&(FFCBCTR_idd.Iddec->Mode)));
 /* line 443: */
GFCBCTR.data[1] = (*(&(FFCBCTR_idd.Iddec->Decno)));
A_CALLPROC(UBCBCTR_putints,((SXBBCTR_iddecbase+FFCBCTR_idd.Type), A_HIS1ARR(HFCBCTR,GFCBCTR,A68_INT ,2)),((SXBBCTR_iddecbase+FFCBCTR_idd.Type), A_HIS1ARR(HFCBCTR,GFCBCTR,A68_INT ,2),(UBCBCTR_putints).nonlocals));
 /* line 444: */
 /* line 445: */
 /* line 446: */
JFCBCTR = (*(&(FFCBCTR_idd.Iddec->Name))) ;
A_CALLPROC(DDCBCTR_puttruncatedchars,(A_HISVEC(IFCBCTR,JFCBCTR,32,A68_CHAR )),(A_HISVEC(IFCBCTR,JFCBCTR,32,A68_CHAR ),(DDCBCTR_puttruncatedchars).nonlocals));
} 
break;
case 35: /* STRUCT(INT,INT,REF MODE26)  */
KFCBCTR_chars = (FECBCTR.data.mode35);
 /* line 447: */
 /* line 449: */
{ 
 /* line 450: */
 /* line 451: */
 /* line 452: */
if ( (KFCBCTR_chars.Nochars<0) )
{ 
 /* line 453: */
LFCBCTR = YXBBCTR_notlastxcharstype;
} 
else
{ 
 /* line 454: */
LFCBCTR = ZXBBCTR_lastxcharstype;
} 
A_CALLPROC(DBCBCTR_outprep,(1, LFCBCTR),(1, LFCBCTR,(DBCBCTR_outprep).nonlocals));
 /* line 455: */
 /* line 456: */
 /* line 457: */
if ( (KFCBCTR_chars.Base!=0) )
{ 
 /* line 458: */
 /* line 459: */
GNJACTR_convertradixstring( KFCBCTR_chars.Chars, KFCBCTR_chars.Base, &NFCBCTR );
MFCBCTR = NFCBCTR;
} 
else
{ 
MFCBCTR = KFCBCTR_chars.Chars;
} 
OFCBCTR_string = MFCBCTR;
 /* line 460: */
 /* line 461: */
 /* line 462: */
A_CALLPROC(WCCBCTR_putchars,(OFCBCTR_string),(OFCBCTR_string,(WCCBCTR_putchars).nonlocals));
} 
break;
case 7: /* STRUCT(INT)  */
PFCBCTR_str = (FECBCTR.data.mode7);
 /* line 463: */
 /* line 464: */
if ( (PFCBCTR_str.Strmode==8) )
{ 
 /* line 465: */
A_CALLPROC(DBCBCTR_outprep,(1, 76),(1, 76,(DBCBCTR_outprep).nonlocals));
} 
else
{ 
 /* line 466: */
 /* line 468: */
A_CALLPROC(KCCBCTR_putint,(77, PFCBCTR_str.Strmode),(77, PFCBCTR_str.Strmode,(KCCBCTR_putint).nonlocals));
} 
break;
case 34: /* REF STRUCT(MODE107,BITS,INT,INT,INT,INT,REF MODE124)  */
QFCBCTR_rd = (FECBCTR.data.mode34);
 /* line 469: */
 /* line 470: */
{ 
 /* line 471: */
 /* line 472: */
RFCBCTR.data[0] = (*(&(QFCBCTR_rd->Rdenno)));
 /* line 473: */
RFCBCTR.data[1] = (*(&(QFCBCTR_rd->Mode)));
 /* line 474: */
RFCBCTR.data[2] = (A68_INT )(*(&(QFCBCTR_rd->Props)));
 /* line 475: */
 /* line 476: */
RFCBCTR.data[3] = PLAAOSF_max((*(&(QFCBCTR_rd->Maxname))), HAAACTR_minidno);
A_CALLPROC(UBCBCTR_putints,(197, A_HIS1ARR(SFCBCTR,RFCBCTR,A68_INT ,4)),(197, A_HIS1ARR(SFCBCTR,RFCBCTR,A68_INT ,4),(UBCBCTR_putints).nonlocals));
 /* line 477: */
 /* line 478: */
 /* line 480: */
UFCBCTR = (*(&(QFCBCTR_rd->Name))) ;
A_CALLPROC(DDCBCTR_puttruncatedchars,(A_HISVEC(TFCBCTR,UFCBCTR,32,A68_CHAR )),(A_HISVEC(TFCBCTR,UFCBCTR,32,A68_CHAR ),(DDCBCTR_puttruncatedchars).nonlocals));
} 
break;
case 5: /* STRUCT(INT)  */
VFCBCTR_nse = (FECBCTR.data.mode5);
 /* line 481: */
 /* line 482: */
A_CALLPROC(DBCBCTR_outprep,(1, (66+VFCBCTR_nse.Nse)),(1, (66+VFCBCTR_nse.Nse),(DBCBCTR_outprep).nonlocals));
break;
case 2: /* BOOL */
WFCBCTR_b = (FECBCTR.data.mode2);
 /* line 483: */
 /* line 484: */
A_CALLPROC(DBCBCTR_outprep,(1, (65+(WFCBCTR_b))),(1, (65+(WFCBCTR_b)),(DBCBCTR_outprep).nonlocals));
break;
case 6: /* STRUCT(INT,BOOL)  */
XFCBCTR_generator = (FECBCTR.data.mode6);
 /* line 485: */
 /* line 488: */
 /* line 489: */
YFCBCTR.data[0] = XFCBCTR_generator.Mode;
 /* line 490: */
YFCBCTR.data[1] = (XFCBCTR_generator.Loc);
 /* line 491: */
 /* line 492: */
A_CALLPROC(UBCBCTR_putints,((128+PGAACTR_generatorfn), A_HIS1ARR(ZFCBCTR,YFCBCTR,A68_INT ,2)),((128+PGAACTR_generatorfn), A_HIS1ARR(ZFCBCTR,YFCBCTR,A68_INT ,2),(UBCBCTR_putints).nonlocals));
break;
case 8: /* STRUCT(INT,INT,INT)  */
 /* line 493: */
 /* line 494: */
PXIACTR_error(808);
break;
case 10: /* STRUCT(INT)  */
AGCBCTR_al = (FECBCTR.data.mode10);
 /* line 495: */
 /* line 496: */
A_CALLPROC(KCCBCTR_putint,(75, AGCBCTR_al.Almode),(75, AGCBCTR_al.Almode,(KCCBCTR_putint).nonlocals));
break;
case 11: /* STRUCT(INT,INT)  */
BGCBCTR_c = (FECBCTR.data.mode11);
 /* line 498: */
CGCBCTR.data[0] = BGCBCTR_c.Mode;
CGCBCTR.data[1] = BGCBCTR_c.Nopars;
 /* line 499: */
A_CALLPROC(UBCBCTR_putints,(70, A_HIS1ARR(DGCBCTR,CGCBCTR,A68_INT ,2)),(70, A_HIS1ARR(DGCBCTR,CGCBCTR,A68_INT ,2),(UBCBCTR_putints).nonlocals));
break;
case 13: /* STRUCT(REF MODE125,BOOL)  */
EGCBCTR_xl = (FECBCTR.data.mode13);
 /* line 500: */
 /* line 501: */
if ( EGCBCTR_xl.Notsetting )
{ 
FGCBCTR_rl = EGCBCTR_xl.Lab;
 /* line 502: */
 /* line 503: */
if ( ((*(&(FGCBCTR_rl->Status)))==0) )
{ 
A_CALLPROC(KCCBCTR_putint,(194, (*(&(FGCBCTR_rl->Labno)))),(194, (*(&(FGCBCTR_rl->Labno))),(KCCBCTR_putint).nonlocals));
 /* line 504: */
 /* line 505: */
HGCBCTR = (*(&(FGCBCTR_rl->Name))) ;
A_CALLPROC(DDCBCTR_puttruncatedchars,(A_HISVEC(GGCBCTR,HGCBCTR,32,A68_CHAR )),(A_HISVEC(GGCBCTR,HGCBCTR,32,A68_CHAR ),(DDCBCTR_puttruncatedchars).nonlocals));
} 
else
{ 
IGCBCTR.data[0] = (*(&(FGCBCTR_rl->Labno)));
IGCBCTR.data[1] = (*(&(FGCBCTR_rl->Status)));
 /* line 506: */
 /* line 507: */
A_CALLPROC(UBCBCTR_putints,(195, A_HIS1ARR(JGCBCTR,IGCBCTR,A68_INT ,2)),(195, A_HIS1ARR(JGCBCTR,IGCBCTR,A68_INT ,2),(UBCBCTR_putints).nonlocals));
} 
} 
else
{ 
 /* line 508: */
 /* line 509: */
A_CALLPROC(KCCBCTR_putint,(196, (*(&(EGCBCTR_xl.Lab->Labno)))),(196, (*(&(EGCBCTR_xl.Lab->Labno))),(KCCBCTR_putint).nonlocals));
} 
break;
case 4: /* REF STRUCT(MODE107,INT,INT,REF MODE125)  */
KGCBCTR_lb = (FECBCTR.data.mode4);
 /* line 510: */
A_CALLPROC(KCCBCTR_putint,(74, (*(&(KGCBCTR_lb->Labno)))),(74, (*(&(KGCBCTR_lb->Labno))),(KCCBCTR_putint).nonlocals));
break;
case 18: /* STRUCT(INT,INT,INT,INT,INT,INT)  */
LGCBCTR_xs = (FECBCTR.data.mode18);
 /* line 512: */
UUBBCTR_xsizes = LGCBCTR_xs;
break;
case 19: /* REF VECTOR [] MODE120 */
MGCBCTR_mdes = (FECBCTR.data.mode19);
 /* line 513: */
{ 
A_CALLPROC(SKMACTR_initialiseuniquenameserver,(QRIACTR_uname_option),(QRIACTR_uname_option,(SKMACTR_initialiseuniquenameserver).nonlocals));
 /* line 514: */
 /* line 515: */
 /* line 517: */
SDOACTR_initialisemodetable(A_VECARR(MGCBCTR_mdes,NGCBCTR), (*(&((&UUBBCTR_xsizes)->Nomodes))));
} 
break;
case 26: /* STRUCT(BOOL,INT,REF MODE123)  */
OGCBCTR_xtd = (FECBCTR.data.mode26);
 /* line 518: */
{ 
 /* line 519: */
if ( QACBCTR_xtmodulepending )
{ 
QACBCTR_xtmodulepending = A68_FALSE;
 /* line 520: */
 /* line 521: */
VDPACTR_adddecsmodule(PACBCTR_lastxtmodule, OGCBCTR_xtd.Level);
} 
 /* line 522: */
 /* line 523: */
 /* line 524: */
AFPACTR_addexternalid((*OGCBCTR_xtd.Id));
} 
break;
case 25: /* STRUCT(INT,INT,MODE107,MODE126)  */
PGCBCTR_xtm = (FECBCTR.data.mode25);
 /* line 525: */
 /* line 526: */
if ( (PGCBCTR_xtm.Type<0) )
{ 
PACBCTR_lastxtmodule = PGCBCTR_xtm;
 /* line 527: */
 /* line 529: */
QACBCTR_xtmodulepending = A68_TRUE;
} 
else
{ 
 /* line 530: */
QGCBCTR.data[0] = PGCBCTR_xtm.Moduleno;
 /* line 531: */
QGCBCTR.data[1] = PGCBCTR_xtm.Ym.Specs.upb;
A_CALLPROC(UBCBCTR_putints,(CYBBCTR_xtmoduletype, A_HIS1ARR(RGCBCTR,QGCBCTR,A68_INT ,2)),(CYBBCTR_xtmoduletype, A_HIS1ARR(RGCBCTR,QGCBCTR,A68_INT ,2),(UBCBCTR_putints).nonlocals));
 /* line 532: */
TGCBCTR = PGCBCTR_xtm.Name ;
A_CALLPROC(DDCBCTR_puttruncatedchars,(A_HISVEC(SGCBCTR,TGCBCTR,32,A68_CHAR )),(A_HISVEC(SGCBCTR,TGCBCTR,32,A68_CHAR ),(DDCBCTR_puttruncatedchars).nonlocals));
 /* line 533: */
VGCBCTR = PGCBCTR_xtm.Ym.Uname ;
A_CALLPROC(WCCBCTR_putchars,(A_HISVEC(UGCBCTR,VGCBCTR,7,A68_CHAR )),(A_HISVEC(UGCBCTR,VGCBCTR,7,A68_CHAR ),(WCCBCTR_putchars).nonlocals));
 /* line 534: */
XGCBCTR = PGCBCTR_xtm.Ym.Lname ;
A_CALLPROC(WCCBCTR_putchars,(A_HISVEC(WGCBCTR,XGCBCTR,7,A68_CHAR )),(A_HISVEC(WGCBCTR,XGCBCTR,7,A68_CHAR ),(WCCBCTR_putchars).nonlocals));
 /* line 535: */
ZGCBCTR = PGCBCTR_xtm.Ym.Gname ;
A_CALLPROC(WCCBCTR_putchars,(A_HISVEC(YGCBCTR,ZGCBCTR,7,A68_CHAR )),(A_HISVEC(YGCBCTR,ZGCBCTR,7,A68_CHAR ),(WCCBCTR_putchars).nonlocals));
 /* line 536: */
 /* line 537: */
BHCBCTR = PGCBCTR_xtm.Ym.Specs ;
CHCBCTR = BHCBCTR.upb -1;
AHCBCTR_spec = BHCBCTR.data;
for (;CHCBCTR-- >= 0;
(AHCBCTR_spec++
) )
{
 /* line 538: */
EHCBCTR = (*(&(AHCBCTR_spec->Ys))) ;
A_CALLPROC(WCCBCTR_putchars,(A_HISVEC(DHCBCTR,EHCBCTR,7,A68_CHAR )),(A_HISVEC(DHCBCTR,EHCBCTR,7,A68_CHAR ),(WCCBCTR_putchars).nonlocals));
}
 /* line 539: */
 /* line 540: */
} 
break;
case 29: /* STRUCT(MODE107,MODE126,MODE107,MODE105,INT,INT)  */
 /* line 541: */
 /* line 542: */
PXIACTR_error(804);
break;
case 28: /* STRUCT(INT,REF MODE92,INT)  */
 /* line 543: */
 /* line 544: */
PXIACTR_error(805);
break;
case 23: /* STRUCT(MODE107,INT,INT,INT)  */
FHCBCTR_open = (FECBCTR.data.mode23);
 /* line 545: */
 /* line 546: */
SACBCTR_syntheticmoduleno = FHCBCTR_open.Moduleno;
break;
case 33: /* STRUCT(INT,INT,INT)  */
 /* line 547: */
 /* line 548: */
PXIACTR_error(806);
break;
case 27: /* STRUCT(MODE136,REF MODE165,REF MODE92,INT)  */
 /* line 549: */
 /* line 550: */
PXIACTR_error(807);
break;
case 21: /* STRUCT(MODE107,MODE135,MODE135,INT)  */
GHCBCTR_xm = (FECBCTR.data.mode21);
 /* line 551: */
 /* line 552: */
FCPACTR_initialisecurrentmodule(GHCBCTR_xm);
break;
case 32: /* STRUCT(REF MODE92,REF MODE92)  */
HHCBCTR_xbu = (FECBCTR.data.mode32);
 /* line 553: */
A_CLOSURE( JHCBCTR_generator, KHCBCTR_generator, LHCBCTR_generator );
(( LHCBCTR_generator * ) ( JHCBCTR_generator.nonlocals )) -> HHCBCTR_xbu = HHCBCTR_xbu;
 /* line 554: */
A_CALLPROC(JHCBCTR_generator,(A68_FALSE, &OHCBCTR),(A68_FALSE, &OHCBCTR,(JHCBCTR_generator).nonlocals));
PHCBCTR = HHCBCTR_xbu.Decnos ;
RHCBCTR = A_VECARR(PHCBCTR,QHCBCTR) ;
A_R1ASSIGN2(RHCBCTR,OHCBCTR,A68_INT ) ;
UBPACTR_keptdecnos = OHCBCTR;
break;
case 22: /* STRUCT(MODE107,INT,INT,INT,MODE133)  */
SHCBCTR_s = (FECBCTR.data.mode22);
 /* line 555: */
 /* line 556: */
 /* line 557: */
NDPACTR_initialisespec(SHCBCTR_s);
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

A_STATIC A68_VOID  FJCBCTR_positioncurrent(void)
{ 
A_PROC_ENTRY(positioncurrent);
 /* line 635: */
 /* line 637: */
if ( ((*GWBBCTR_strptr)<(*FWBBCTR_streambuffer).upb) )
{ 
 /* line 638: */
/*SKIP*/;
} 
else
{ 
 /* line 639: */
 /* line 640: */
if ( (((*HWBBCTR_currentbuffer)+=1)>(*IWBBCTR_buffers).upb) )
{ 
 /* line 641: */
 /* line 642: */
WXIACTR_assert(HJCBCTR, A68_FALSE);
} 
else
{ 
(*FWBBCTR_streambuffer) = (*(&A_VINDEX((*IWBBCTR_buffers),(*HWBBCTR_currentbuffer))));
 /* line 643: */
 /* line 644: */
(*GWBBCTR_strptr) = 0;
} 
} 
A_PROC_EXIT(positioncurrent);
return;
} 
#undef NL

A_STATIC A68_INT  IJCBCTR_nextbyte(void)
{ 
A68_INT  JJCBCTR;  /* clause result */
A68_INT  KJCBCTR;  /* YIELD */
A_PROC_ENTRY(nextbyte);
{ 
FJCBCTR_positioncurrent();
KJCBCTR = (*GWBBCTR_strptr)+=1 ;
JJCBCTR = (A68_INT)(unsigned char)(*(&A_VINDEX((*FWBBCTR_streambuffer),KJCBCTR)));
} 
A_PROC_EXIT(nextbyte);
return( JJCBCTR );
} 
#undef NL

A_STATIC A68_INT  LJCBCTR_nextint(void)
{ 
A68_VC  NJCBCTR;  /* OPERATORS - trim index */
A68_VC  OJCBCTR;  /* OPERATORS - trim index */
A68_VC  PJCBCTR;  /* OPERATORS - trim index */
A68_INT  MJCBCTR_nexti;
A68_INT  QJCBCTR;  /* clause result */
A_PROC_ENTRY(nextint);
{ 
FJCBCTR_positioncurrent();
 /* line 653: */
OJCBCTR = A_VTRIM(NJCBCTR,((*FWBBCTR_streambuffer)),A_VTSCRIPT(&(NJCBCTR.upb),((*FWBBCTR_streambuffer)).upb,((*GWBBCTR_strptr)+1),((*FWBBCTR_streambuffer)).upb)) ;
MJCBCTR_nexti = GOAAOSF_stringvalue(A_VTRIM(PJCBCTR,(OJCBCTR),A_VTSCRIPT(&(PJCBCTR.upb),(OJCBCTR).upb,1,4)));
 /* line 654: */
(*GWBBCTR_strptr)+=4;
 /* line 655: */
 /* line 656: */
QJCBCTR = MJCBCTR_nexti;
} 
A_PROC_EXIT(nextint);
return( QJCBCTR );
} 
#undef NL

A_STATIC A68_VOID  TJCBCTR_nextstring(A68_VC  *ReturnedValue)
{ 
A68_INT  UJCBCTR;  /* YIELD */
A68_VC  VJCBCTR;  /* OPERATORS - trim index */
A68_VC  WJCBCTR;  /* clause result */
A_PROC_ENTRY(nextstring);
{ 
FJCBCTR_positioncurrent();
 /* line 664: */
UJCBCTR = (*GWBBCTR_strptr)+=1 ;
DJCBCTR_upbstring = (A68_INT)(unsigned char)(*(&A_VINDEX((*FWBBCTR_streambuffer),UJCBCTR)));
 /* line 665: */
EJCBCTR_string = A_VTRIM(VJCBCTR,((*FWBBCTR_streambuffer)),A_VTSCRIPT(&(VJCBCTR.upb),((*FWBBCTR_streambuffer)).upb,((*GWBBCTR_strptr)+1),((*GWBBCTR_strptr)+DJCBCTR_upbstring)));
 /* line 666: */
(*GWBBCTR_strptr)+=DJCBCTR_upbstring;
 /* line 667: */
 /* line 668: */
WJCBCTR = EJCBCTR_string;
} 
A_PROC_EXIT(nextstring);
*ReturnedValue = (WJCBCTR);
return;
} 
#undef NL

A_STATIC A68_INT  BKCBCTR_nexttype(void)
{ 
A68_INT  CKCBCTR_t;
A68_INT  DKCBCTR;  /* YIELD */
A68_BOOL  EKCBCTR;  /* clause result */
A68_275 * FKCBCTR;  /* YIELD */
A68_INT  GKCBCTR;  /* YIELD */
A68_BOOL  JKCBCTR;  /* optbool result */
A68_VC  NKCBCTR;  /* avoid structure result */
A68_212  PKCBCTR;  /* OPERATORS - mode -> union mode */
A68_211  QKCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_301  RKCBCTR;  /* collateral clause result */
A68_212  UKCBCTR;  /* OPERATORS - mode -> union mode */
A68_VC  VKCBCTR;  /* YIELD */
A68_VC  WKCBCTR;  /* avoid structure result */
A68_212  XKCBCTR;  /* OPERATORS - mode -> union mode */
A68_212  ALCBCTR;  /* OPERATORS - mode -> union mode */
A68_VC  BLCBCTR;  /* YIELD */
A68_212  CLCBCTR;  /* OPERATORS - mode -> union mode */
A68_211  DLCBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  ELCBCTR;  /* avoid structure result */
A68_VC  FLCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  GLCBCTR;  /* avoid structure result */
A68_VC  HLCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  KLCBCTR;  /* clause result */
A_PROC_ENTRY(nexttype);
{ 
 /* line 679: */
for ( ;; )
{ 
 /* line 680: */
FJCBCTR_positioncurrent();
 /* line 681: */
DKCBCTR = (*GWBBCTR_strptr)+=1 ;
CKCBCTR_t = (A68_INT)(unsigned char)(*(&A_VINDEX((*FWBBCTR_streambuffer),DKCBCTR)));
 /* line 682: */
 /* line 683: */
EKCBCTR = (CKCBCTR_t<JXBBCTR_separatorbase);
if ( !EKCBCTR ) break;
 /* line 684: */
if ( (CKCBCTR_t<3) )
{ 
FKCBCTR = (&A_R1INDEX(EVBBCTR_streams,HICBCTR_level)) ;
(*FKCBCTR) = IVBBCTR_current;
 /* line 685: */
 /* line 687: */
GKCBCTR = HICBCTR_level+=((3-CKCBCTR_t)-CKCBCTR_t) ;
IVBBCTR_current = (*(&A_R1INDEX(EVBBCTR_streams,GKCBCTR)));
} 
else
{ 
 /* line 688: */
 /* line 689: */
if ( (CKCBCTR_t==WXBBCTR_linetype) )
{ 
XRIACTR_linenumber = A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
 /* line 690: */
XJCBCTR_line_start = A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
 /* line 691: */
YJCBCTR_line_length = A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
 /* line 692: */
ZJCBCTR_statement_number = 0;
 /* line 694: */
 /* line 695: */
JKCBCTR = (ZCHACTR_tracelevel(IKCBCTR)!=0);
if ( JKCBCTR )
{ /* line 696: */
JKCBCTR = ((XRIACTR_linenumber/100)>AKCBCTR_hundred_counter);
}
if ( JKCBCTR )
{ 
AKCBCTR_hundred_counter = (XRIACTR_linenumber/100);
 /* line 697: */
 /* line 698: */
 /* line 699: */
ROAAOSF_whole( XRIACTR_linenumber, 0, &NKCBCTR );
ISIACTR_typelineonterminal(A_VC_PLUS(A_VC_PLUS(MKCBCTR,NKCBCTR),OKCBCTR));
} 
 /* line 701: */
 /* line 702: */
 /* line 704: */
if ( BQIACTR_lineoption )
{ 
 /* line 705: */
 /* line 706: */
 /* line 707: */
 /* line 709: */
MDMACTR_writecstream(A_HVEC(QKCBCTR,A_UNITE(PKCBCTR,mode4,4,EIAACTR_cnewline),A68_212 ), NSLACTR_codestream(VRLACTR_currentlevel()));
} 
else
{ 
 /* line 710: */
 /* line 711: */
VKCBCTR = TKCBCTR ;
RKCBCTR.data[0] = A_UNITE(UKCBCTR,mode2,2,VKCBCTR);
 /* line 712: */
ROAAOSF_whole( XRIACTR_linenumber, 0, &WKCBCTR );
RKCBCTR.data[1] = A_UNITE(XKCBCTR,mode2,2,WKCBCTR);
 /* line 713: */
BLCBCTR = ZKCBCTR ;
RKCBCTR.data[2] = A_UNITE(ALCBCTR,mode2,2,BLCBCTR);
RKCBCTR.data[3] = A_UNITE(CLCBCTR,mode4,4,EIAACTR_cnewline);
 /* line 714: */
 /* line 715: */
MDMACTR_writecstream(A_HISVEC(DLCBCTR,RKCBCTR,4,A68_212 ), NSLACTR_codestream(VRLACTR_currentlevel()));
} 
 /* line 717: */
 /* line 718: */
if ( GICBCTR_printstream )
{ 
 /* line 719: */
 /* line 720: */
ROAAOSF_whole( XRIACTR_linenumber, 0, &ELCBCTR );
A_CALLPROC(MSIACTR_list,(A_VC_PLUS(ELCBCTR,A_HVEC(FLCBCTR,':',A68_CHAR ))),(A_VC_PLUS(ELCBCTR,A_HVEC(FLCBCTR,':',A68_CHAR )),(MSIACTR_list).nonlocals));
} 
} 
else
{ 
 /* line 721: */
 /* line 722: */
if ( (CKCBCTR_t==XXBBCTR_maptype) )
{ 
ZJCBCTR_statement_number+=1;
 /* line 723: */
 /* line 724: */
if ( GICBCTR_printstream )
{ 
 /* line 725: */
 /* line 726: */
ROAAOSF_whole( XRIACTR_linenumber, 0, &GLCBCTR );
A_CALLPROC(MSIACTR_list,(A_VC_PLUS(GLCBCTR,A_HVEC(HLCBCTR,':',A68_CHAR ))),(A_VC_PLUS(GLCBCTR,A_HVEC(HLCBCTR,':',A68_CHAR )),(MSIACTR_list).nonlocals));
} 
} 
else
{ 
 /* line 727: */
 /* line 728: */
WXIACTR_assert(JLCBCTR, A68_FALSE);
} 
} 
} 
}
 /* line 729: */
 /* line 730: */
KLCBCTR = CKCBCTR_t;
} 
A_PROC_EXIT(nexttype);
return( KLCBCTR );
} 
#undef NL

A_STATIC A68_VOID  NLCBCTR_nextxchars(A68_INT  Suggestedsize, A68_INT  Insertion, A68_VC  *ReturnedValue)
{ 
A68_INT  OLCBCTR_type;
A68_INT  PLCBCTR_used;
A68_INT  QLCBCTR_resultsize;
A68_103  SLCBCTR_generator;   /* proc value of non-global proc */
A68_VC  YLCBCTR;  /* avoid structure result */
A68_VC  XLCBCTR_result;
A68_VC  ZLCBCTR;  /* clause result */
A68_VC  AMCBCTR;  /* avoid structure result */
A68_VC  BMCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  CMCBCTR;  /* avoid structure result */
A68_VC  DMCBCTR;  /* avoid structure result */
A68_VC  EMCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  FMCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  GMCBCTR;  /* avoid structure result */
A68_VC  HMCBCTR;  /* avoid structure result */
A68_VC  IMCBCTR;  /* avoid structure result */
A68_VC  JMCBCTR_string;
A68_INT  KMCBCTR_size;
A68_INT  LMCBCTR_newused;
A68_INT  MMCBCTR_newresultsize;
A68_103  OMCBCTR_generator;   /* proc value of non-global proc */
A68_VC  TMCBCTR;  /* avoid structure result */
A68_VC  UMCBCTR_newresult;
A68_VC  VMCBCTR;  /* OPERATORS - trim index */
A68_VC  WMCBCTR;  /* OPERATORS - trim index */
A68_VC  XMCBCTR;  /* YIELD */
A68_VC  YMCBCTR;  /* OPERATORS - assign op */
A68_VC  ZMCBCTR;  /* OPERATORS - trim index */
A68_VC  ANCBCTR;  /* YIELD */
A68_BOOL  BNCBCTR;  /* clause result */
A68_VC  ENCBCTR;  /* clause result */
A68_VC  FNCBCTR;  /* OPERATORS - trim index */
A_PROC_ENTRY(nextxchars);
 /* line 746: */
 /* line 747: */
{ 
OLCBCTR_type = BKCBCTR_nexttype();
 /* line 748: */
PLCBCTR_used = 0;
QLCBCTR_resultsize = Suggestedsize;
 /* line 749: */
A_CLOSURE( SLCBCTR_generator, TLCBCTR_generator, ULCBCTR_generator );
(( ULCBCTR_generator * ) ( SLCBCTR_generator.nonlocals )) -> QLCBCTR_resultsize = (&QLCBCTR_resultsize);
A_CALLPROC(SLCBCTR_generator,(A68_FALSE, &YLCBCTR),(A68_FALSE, &YLCBCTR,(SLCBCTR_generator).nonlocals));
XLCBCTR_result = YLCBCTR;
 /* line 751: */
for ( ;; )
{ 
 /* line 753: */
 /* line 754: */
switch ( Insertion )
{ 
case 1: 
 /* line 755: */
TJCBCTR_nextstring(  &AMCBCTR );
ZLCBCTR = A_VC_PLUS(AMCBCTR,A_HVEC(BMCBCTR,GVBAOSF_newline_char,A68_CHAR ));
break;
case 2: 
 /* line 756: */
TJCBCTR_nextstring(  &CMCBCTR );
DRJACTR_replacecontrolchars( CMCBCTR, &DMCBCTR );
ZLCBCTR = A_VC_PLUS(A_VC_PLUS(DMCBCTR,A_HVEC(EMCBCTR,'\\',A68_CHAR )),A_HVEC(FMCBCTR,GVBAOSF_newline_char,A68_CHAR ));
break;
case 3: 
 /* line 757: */
 /* line 758: */
TJCBCTR_nextstring(  &GMCBCTR );
DRJACTR_replacecontrolchars( GMCBCTR, &HMCBCTR );
ZLCBCTR = HMCBCTR;
break;
default: 
TJCBCTR_nextstring(  &IMCBCTR );
ZLCBCTR = IMCBCTR;
break;
} 
JMCBCTR_string = ZLCBCTR;
 /* line 759: */
KMCBCTR_size = JMCBCTR_string.upb;
 /* line 760: */
LMCBCTR_newused = (PLCBCTR_used+KMCBCTR_size);
 /* line 762: */
 /* line 763: */
 /* line 764: */
if ( (LMCBCTR_newused>QLCBCTR_resultsize) )
{ 
MMCBCTR_newresultsize = (2*PLAAOSF_max(LMCBCTR_newused, QLCBCTR_resultsize));
 /* line 765: */
A_CLOSURE( OMCBCTR_generator, PMCBCTR_generator, QMCBCTR_generator );
(( QMCBCTR_generator * ) ( OMCBCTR_generator.nonlocals )) -> MMCBCTR_newresultsize = MMCBCTR_newresultsize;
A_CALLPROC(OMCBCTR_generator,(A68_FALSE, &TMCBCTR),(A68_FALSE, &TMCBCTR,(OMCBCTR_generator).nonlocals));
UMCBCTR_newresult = TMCBCTR;
 /* line 766: */
XMCBCTR = A_VTRIM(VMCBCTR,(UMCBCTR_newresult),A_VTSCRIPT(&(VMCBCTR.upb),(UMCBCTR_newresult).upb,1,PLCBCTR_used)) ;
YMCBCTR = A_VTRIM(WMCBCTR,(XLCBCTR_result),A_VTSCRIPT(&(WMCBCTR.upb),(XLCBCTR_result).upb,1,PLCBCTR_used)) ;
A_VASSIGN2(YMCBCTR,XMCBCTR,A68_CHAR );
 /* line 767: */
XLCBCTR_result = UMCBCTR_newresult;
 /* line 768: */
 /* line 769: */
QLCBCTR_resultsize = MMCBCTR_newresultsize;
} 
 /* line 770: */
ANCBCTR = A_VTRIM(ZMCBCTR,(XLCBCTR_result),A_VTSCRIPT(&(ZMCBCTR.upb),(XLCBCTR_result).upb,(PLCBCTR_used+1),LMCBCTR_newused)) ;
A_VASSIGN2(JMCBCTR_string,ANCBCTR,A68_CHAR );
 /* line 771: */
PLCBCTR_used = LMCBCTR_newused;
 /* line 772: */
 /* line 773: */
 /* line 774: */
BNCBCTR = (OLCBCTR_type==YXBBCTR_notlastxcharstype);
if ( !BNCBCTR ) break;
 /* line 775: */
OLCBCTR_type = BKCBCTR_nexttype();
}
 /* line 776: */
WXIACTR_assert(DNCBCTR, (OLCBCTR_type==ZXBBCTR_lastxcharstype));
 /* line 777: */
 /* line 778: */
ENCBCTR = A_VTRIM(FNCBCTR,(XLCBCTR_result),A_VTSCRIPT(&(FNCBCTR.upb),(XLCBCTR_result).upb,1,PLCBCTR_used));
} 
A_PROC_EXIT(nextxchars);
*ReturnedValue = (ENCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  GNCBCTR_nextstreamimperative(A68_186  *ReturnedValue)
{ 
A68_INT  HNCBCTR_type;
A68_VC  JNCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  KNCBCTR;  /* avoid structure result */
A68_200  MNCBCTR_s;
A68_INT * NNCBCTR;  /* YIELD */
A68_INT * ONCBCTR;  /* YIELD */
A68_BITS * PNCBCTR;  /* YIELD */
A68_INT * QNCBCTR;  /* YIELD */
A68_186  RNCBCTR;  /* clause result */
A68_186  SNCBCTR;  /* OPERATORS - mode -> union mode */
A68_202  TNCBCTR_t;
A68_INT * UNCBCTR;  /* YIELD */
A68_BITS * VNCBCTR;  /* YIELD */
A68_186  WNCBCTR;  /* OPERATORS - mode -> union mode */
A68_200  XNCBCTR_semi;
A68_INT * YNCBCTR;  /* YIELD */
A68_BITS * ZNCBCTR;  /* YIELD */
A68_186  AOCBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  BOCBCTR_loadtype;
A68_INT  COCBCTR;  /* clause result */
A68_186  DOCBCTR;  /* OPERATORS - mode -> union mode */
A68_BOOL  EOCBCTR;  /* YIELD */
A68_186  FOCBCTR;  /* OPERATORS - mode -> union mode */
A68_BOOL  GOCBCTR;  /* YIELD */
A68_146  HOCBCTR_e;
A68_INT * IOCBCTR;  /* YIELD */
A68_186  JOCBCTR;  /* OPERATORS - mode -> union mode */
A68_146  KOCBCTR_s;
A68_INT * LOCBCTR;  /* YIELD */
A68_186  MOCBCTR;  /* OPERATORS - mode -> union mode */
A68_146  NOCBCTR_n;
A68_INT * OOCBCTR;  /* YIELD */
A68_186  POCBCTR;  /* OPERATORS - mode -> union mode */
A68_199  QOCBCTR_c;
A68_INT * ROCBCTR;  /* YIELD */
A68_INT * SOCBCTR;  /* YIELD */
A68_VC  TOCBCTR;  /* avoid structure result */
A68_VC * UOCBCTR;  /* YIELD */
A68_186  VOCBCTR;  /* OPERATORS - mode -> union mode */
A68_186  WOCBCTR;  /* OPERATORS - mode -> union mode */
A68_186  XOCBCTR;  /* OPERATORS - mode -> union mode */
A68_186  YOCBCTR;  /* OPERATORS - mode -> union mode */
A68_106  ZOCBCTR_l;
A68_INT * APCBCTR;  /* YIELD */
A68_186  BPCBCTR;  /* OPERATORS - mode -> union mode */
A68_188  CPCBCTR_a;
A68_INT * DPCBCTR;  /* YIELD */
A68_VC  EPCBCTR;  /* avoid structure result */
A68_VC * FPCBCTR;  /* YIELD */
A68_186  GPCBCTR;  /* OPERATORS - mode -> union mode */
A68_187  HPCBCTR_c;
A68_VC  IPCBCTR;  /* avoid structure result */
A68_VC * JPCBCTR;  /* YIELD */
A68_186  KPCBCTR;  /* OPERATORS - mode -> union mode */
A68_190  LPCBCTR_s;
A68_INT * MPCBCTR;  /* YIELD */
A68_VC  NPCBCTR;  /* avoid structure result */
A68_VC * OPCBCTR;  /* YIELD */
A68_186  PPCBCTR;  /* OPERATORS - mode -> union mode */
A68_186  QPCBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  RPCBCTR;  /* YIELD */
A68_186  SPCBCTR;  /* OPERATORS - mode -> union mode */
A68_186  TPCBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  UPCBCTR;  /* YIELD */
A68_186  VPCBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  WPCBCTR_mode;
A68_140  XPCBCTR;  /* collateral clause result */
A68_VC  YPCBCTR;  /* avoid structure result */
A68_186  ZPCBCTR;  /* OPERATORS - mode -> union mode */
A68_191  AQCBCTR_o;
A68_INT * BQCBCTR;  /* YIELD */
A68_INT * CQCBCTR;  /* YIELD */
A68_INT * DQCBCTR;  /* YIELD */
A68_INT  EQCBCTR_n;
A68_BOOL  FQCBCTR;  /* clause result */
A68_BOOL  GQCBCTR;  /* clause result */
A68_INT  HQCBCTR;  /* ADICOPS - MOD */
A68_INT  IQCBCTR;  /* ADICOPS - MOD */
A68_INT  JQCBCTR;  /* ADICOPS - MOD */
A68_202  KQCBCTR;  /* collateral clause result */
A68_186  LQCBCTR;  /* OPERATORS - mode -> union mode */
A68_186  MQCBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  NQCBCTR_miscellaneoustype;
A68_INT  OQCBCTR;  /* clause result */
A68_195  PQCBCTR_u;
A68_INT * QQCBCTR;  /* YIELD */
A68_BITS * RQCBCTR;  /* YIELD */
A68_INT * SQCBCTR;  /* YIELD */
A68_186  TQCBCTR;  /* OPERATORS - mode -> union mode */
A68_194  UQCBCTR_s;
A68_INT * VQCBCTR;  /* YIELD */
A68_VC  WQCBCTR;  /* avoid structure result */
A68_VC * XQCBCTR;  /* YIELD */
A68_INT * YQCBCTR;  /* YIELD */
A68_BOOL * ZQCBCTR;  /* YIELD */
A68_186  ARCBCTR;  /* OPERATORS - mode -> union mode */
A68_194  BRCBCTR_e;
A68_INT * CRCBCTR;  /* YIELD */
A68_VC  DRCBCTR;  /* OPERATORS - nil -> mode */
A68_VC * ERCBCTR;  /* YIELD */
A68_INT * FRCBCTR;  /* YIELD */
A68_BOOL * GRCBCTR;  /* YIELD */
A68_186  HRCBCTR;  /* OPERATORS - mode -> union mode */
A68_194  IRCBCTR_d;
A68_INT * JRCBCTR;  /* YIELD */
A68_VC  KRCBCTR;  /* OPERATORS - nil -> mode */
A68_VC * LRCBCTR;  /* YIELD */
A68_INT * MRCBCTR;  /* YIELD */
A68_BOOL * NRCBCTR;  /* YIELD */
A68_186  ORCBCTR;  /* OPERATORS - mode -> union mode */
A68_193  PRCBCTR_r;
A68_INT * QRCBCTR;  /* YIELD */
A68_INT * RRCBCTR;  /* YIELD */
A68_BITS * SRCBCTR;  /* YIELD */
A68_INT * TRCBCTR;  /* YIELD */
A68_VC  URCBCTR;  /* avoid structure result */
A68_VC * VRCBCTR;  /* YIELD */
A68_186  WRCBCTR;  /* OPERATORS - mode -> union mode */
A68_186  ZRCBCTR;  /* OPERATORS - mode -> union mode */
A68_186  ASCBCTR;  /* OPERATORS - mode -> union mode */
A68_204  BSCBCTR_s;
A68_INT * CSCBCTR;  /* YIELD */
A68_INT * DSCBCTR;  /* YIELD */
A68_INT * ESCBCTR;  /* YIELD */
A68_186  FSCBCTR;  /* OPERATORS - mode -> union mode */
A68_196  GSCBCTR_c;
A68_INT * HSCBCTR;  /* YIELD */
A68_186  ISCBCTR;  /* OPERATORS - mode -> union mode */
A68_186  JSCBCTR;  /* OPERATORS - mode -> union mode */
A68_191  KSCBCTR_v;
A68_INT * LSCBCTR;  /* YIELD */
A68_INT * MSCBCTR;  /* YIELD */
A68_186  NSCBCTR;  /* OPERATORS - mode -> union mode */
A68_203  OSCBCTR_cl;
A68_INT * PSCBCTR;  /* YIELD */
A68_INT * QSCBCTR;  /* YIELD */
A68_292  SSCBCTR_generator;   /* proc value of non-global proc */
A68_185  XSCBCTR;  /* avoid structure result */
A68_185 * YSCBCTR;  /* YIELD */
A68_INT * ZSCBCTR_actual;
A68_185  ATCBCTR;  /* forall yield */
A68_INT  BTCBCTR;  /* forall loop counter */
A68_186  CTCBCTR;  /* OPERATORS - mode -> union mode */
A68_205  DTCBCTR_x;
A68_INT * ETCBCTR;  /* YIELD */
A68_303  GTCBCTR_generator;   /* proc value of non-global proc */
A68_206  LTCBCTR;  /* avoid structure result */
A68_206 * MTCBCTR;  /* YIELD */
A68_VC  NTCBCTR;  /* avoid structure result */
A68_VC * OTCBCTR;  /* YIELD */
A68_VC  PTCBCTR;  /* avoid structure result */
A68_VC * QTCBCTR;  /* YIELD */
A68_VC  RTCBCTR;  /* avoid structure result */
A68_VC * STCBCTR;  /* YIELD */
A68_VC  TTCBCTR;  /* avoid structure result */
A68_VC * UTCBCTR;  /* YIELD */
A68_VC * VTCBCTR_ysname;
A68_206  WTCBCTR;  /* forall yield */
A68_INT  XTCBCTR;  /* forall loop counter */
A68_VC  YTCBCTR;  /* avoid structure result */
A68_186  ZTCBCTR;  /* OPERATORS - mode -> union mode */
A68_186  AUCBCTR;  /* OPERATORS - mode -> union mode */
A68_154  BUCBCTR_w;
A68_INT * CUCBCTR;  /* YIELD */
A68_186  DUCBCTR;  /* OPERATORS - mode -> union mode */
A68_192  EUCBCTR_i;
A68_INT * FUCBCTR;  /* YIELD */
A68_INT * GUCBCTR;  /* YIELD */
A68_INT * HUCBCTR;  /* YIELD */
A68_VC  IUCBCTR;  /* avoid structure result */
A68_VC * JUCBCTR;  /* YIELD */
A68_186  KUCBCTR;  /* OPERATORS - mode -> union mode */
A68_201  LUCBCTR_s;
A68_INT * MUCBCTR;  /* YIELD */
A68_INT * NUCBCTR;  /* YIELD */
A68_BITS * OUCBCTR;  /* YIELD */
A68_INT * PUCBCTR;  /* YIELD */
A68_186  QUCBCTR;  /* OPERATORS - mode -> union mode */
A68_186  RUCBCTR_imperative;
A68_VC  SUCBCTR;  /* avoid structure result */
A68_VC  TUCBCTR_string;
A68_VC  UUCBCTR;  /* OPERATORS - trim index */
A68_VC  VUCBCTR;  /* OPERATORS - trim index */
A68_186  WUCBCTR;  /* clause result */
A_PROC_ENTRY(nextstreamimperative);
{ 
HNCBCTR_type = BKCBCTR_nexttype();
 /* line 787: */
 /* line 788: */
if ( GICBCTR_printstream )
{ 
 /* line 789: */
ROAAOSF_whole( HNCBCTR_type, (-3), &KNCBCTR );
A_CALLPROC(MSIACTR_list,(A_VC_PLUS(A_VC_PLUS(A_HVEC(JNCBCTR,'[',A68_CHAR ),KNCBCTR),LNCBCTR)),(A_VC_PLUS(A_VC_PLUS(A_HVEC(JNCBCTR,'[',A68_CHAR ),KNCBCTR),LNCBCTR),(MSIACTR_list).nonlocals));
} 
 /* line 791: */
 /* line 793: */
 /* line 794: */
 /* line 796: */
switch ( ((HNCBCTR_type/UXBBCTR_rangesize)+1) )
{ 
case 1: 
 /* line 797: */
 /* line 800: */
switch ( (HNCBCTR_type/VXBBCTR_subrangesize) )
{ 
case 1: 
{ 
NNCBCTR = (&((&MNCBCTR_s)->Fn)) ;
(*NNCBCTR) = (HNCBCTR_type-JXBBCTR_separatorbase);
 /* line 801: */
ONCBCTR = (&((&MNCBCTR_s)->Mode)) ;
(*ONCBCTR) = A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
PNCBCTR = (&((&MNCBCTR_s)->Props)) ;
(*PNCBCTR) = (A68_BITS )A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
 /* line 802: */
QNCBCTR = (&((&MNCBCTR_s)->Param)) ;
(*QNCBCTR) = A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
 /* line 803: */
 /* line 804: */
 /* line 807: */
RNCBCTR = A_UNITE(SNCBCTR,mode20,20,MNCBCTR_s);
} 
break;
case 2: 
{ 
UNCBCTR = (&((&TNCBCTR_t)->Fn)) ;
(*UNCBCTR) = (HNCBCTR_type-KXBBCTR_terminatorbase);
 /* line 808: */
A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
VNCBCTR = (&((&TNCBCTR_t)->Props)) ;
(*VNCBCTR) = (A68_BITS )A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
 /* line 809: */
 /* line 810: */
 /* line 813: */
RNCBCTR = A_UNITE(WNCBCTR,mode22,22,TNCBCTR_t);
} 
break;
case 3: 
{ 
YNCBCTR = (&((&XNCBCTR_semi)->Fn)) ;
(*YNCBCTR) = WBAACTR_semifn;
 /* line 814: */
ZNCBCTR = (&((&XNCBCTR_semi)->Props)) ;
(*ZNCBCTR) = (A68_BITS )((HNCBCTR_type-LXBBCTR_semibase)*2048);
 /* line 815: */
 /* line 816: */
 /* line 817: */
 /* line 820: */
RNCBCTR = A_UNITE(AOCBCTR,mode20,20,XNCBCTR_semi);
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
BOCBCTR_loadtype = (HNCBCTR_type-MXBBCTR_loadbase);
 /* line 822: */
 /* line 823: */
 /* line 825: */
COCBCTR = ((BOCBCTR_loadtype/VXBBCTR_subrangesize)+1);
switch ( COCBCTR )
{ 
case 1: 
 /* line 826: */
 /* line 827: */
switch ( BOCBCTR_loadtype )
{ 
case 1: 
 /* line 829: */
EOCBCTR = A68_FALSE ;
RNCBCTR = A_UNITE(DOCBCTR,mode3,3,EOCBCTR);
break;
case 2: 
 /* line 831: */
GOCBCTR = A68_TRUE ;
RNCBCTR = A_UNITE(FOCBCTR,mode3,3,GOCBCTR);
break;
case 3: 
{ 
IOCBCTR = (&((&HOCBCTR_e)->Nse)) ;
(*IOCBCTR) = ZAAACTR_emptyfn;
 /* line 833: */
RNCBCTR = A_UNITE(JOCBCTR,mode1,1,HOCBCTR_e);
} 
break;
case 4: 
{ 
LOCBCTR = (&((&KOCBCTR_s)->Nse)) ;
(*LOCBCTR) = ABAACTR_skipfn;
 /* line 835: */
RNCBCTR = A_UNITE(MOCBCTR,mode1,1,KOCBCTR_s);
} 
break;
case 5: 
{ 
OOCBCTR = (&((&NOCBCTR_n)->Nse)) ;
(*OOCBCTR) = BBAACTR_nilfn;
 /* line 837: */
RNCBCTR = A_UNITE(POCBCTR,mode1,1,NOCBCTR_n);
} 
break;
case 6: 
{ 
ROCBCTR = (&((&QOCBCTR_c)->Mode)) ;
(*ROCBCTR) = A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
SOCBCTR = (&((&QOCBCTR_c)->Number)) ;
(*SOCBCTR) = A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
NLCBCTR_nextxchars( 128, 1, &TOCBCTR );
UOCBCTR = (&((&QOCBCTR_c)->Insert)) ;
(*UOCBCTR) = TOCBCTR;
 /* line 839: */
RNCBCTR = A_UNITE(VOCBCTR,mode19,19,QOCBCTR_c);
} 
break;
case 7: 
 /* line 841: */
SXIACTR_terminalerror(600) ;
RNCBCTR = A_EMPTY(WOCBCTR,26);
break;
case 8: 
 /* line 843: */
SXIACTR_terminalerror(600) ;
RNCBCTR = A_EMPTY(XOCBCTR,26);
break;
case 9: 
 /* line 845: */
SXIACTR_terminalerror(600) ;
RNCBCTR = A_EMPTY(YOCBCTR,26);
break;
case 10: 
{ 
APCBCTR = (&((&ZOCBCTR_l)->Labno)) ;
(*APCBCTR) = A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
 /* line 847: */
RNCBCTR = A_UNITE(BPCBCTR,mode5,5,ZOCBCTR_l);
} 
break;
case 11: 
{ 
DPCBCTR = (&((&CPCBCTR_a)->Mode)) ;
(*DPCBCTR) = A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
NLCBCTR_nextxchars( 400, 1, &EPCBCTR );
FPCBCTR = (&((&CPCBCTR_a)->String)) ;
(*FPCBCTR) = EPCBCTR;
 /* line 849: */
RNCBCTR = A_UNITE(GPCBCTR,mode7,7,CPCBCTR_a);
} 
break;
case 12: 
{ 
NLCBCTR_nextxchars( 1, 3, &IPCBCTR );
JPCBCTR = (&((&HPCBCTR_c)->Representation)) ;
(*JPCBCTR) = IPCBCTR;
 /* line 851: */
RNCBCTR = A_UNITE(KPCBCTR,mode4,4,HPCBCTR_c);
} 
break;
case 13: 
{ 
MPCBCTR = (&((&LPCBCTR_s)->Mode)) ;
(*MPCBCTR) = A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
NLCBCTR_nextxchars( 160, 0, &NPCBCTR );
OPCBCTR = (&((&LPCBCTR_s)->Denotation)) ;
(*OPCBCTR) = NPCBCTR;
 /* line 854: */
RNCBCTR = A_UNITE(PPCBCTR,mode9,9,LPCBCTR_s);
} 
break;
case 14: 
 /* line 856: */
RPCBCTR = A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals)) ;
RNCBCTR = A_UNITE(QPCBCTR,mode2,2,RPCBCTR);
break;
case 15: 
 /* line 857: */
 /* line 860: */
SXIACTR_terminalerror(600) ;
RNCBCTR = A_EMPTY(SPCBCTR,26);
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
if ( (HNCBCTR_type==80) )
{ 
 /* line 864: */
UPCBCTR = A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals)) ;
RNCBCTR = A_UNITE(TPCBCTR,mode2,2,UPCBCTR);
} 
else
{ 
 /* line 865: */
 /* line 868: */
SXIACTR_terminalerror(600) ;
RNCBCTR = A_EMPTY(VPCBCTR,26);
} 
break;
case 3: 
{ 
WPCBCTR_mode = (HNCBCTR_type-OXBBCTR_numberbase);
XPCBCTR.Mode = WPCBCTR_mode;
TJCBCTR_nextstring(  &YPCBCTR );
XPCBCTR.Nu = YPCBCTR;
 /* line 869: */
 /* line 872: */
RNCBCTR = A_UNITE(ZPCBCTR,mode6,6,XPCBCTR);
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
BQCBCTR = (&((&AQCBCTR_o)->Fn)) ;
(*BQCBCTR) = (HNCBCTR_type-PXBBCTR_operbase);
 /* line 875: */
CQCBCTR = (&((&AQCBCTR_o)->Mode)) ;
(*CQCBCTR) = A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
 /* line 876: */
DQCBCTR = (&((&AQCBCTR_o)->Param)) ;
(*DQCBCTR) = A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
 /* line 877: */
 /* line 878: */
{ 
EQCBCTR_n = ((*(&((&AQCBCTR_o)->Param)))/16);
 /* line 879: */
FQCBCTR = ((EQCBCTR_n==4)|(EQCBCTR_n==5));
} 
 /* line 880: */
IQCBCTR = (*(&((&AQCBCTR_o)->Param))) ;
JQCBCTR = 16 ;
GQCBCTR = ((((*(&((&AQCBCTR_o)->Fn)))==10)&FQCBCTR)&(A_MOD(IQCBCTR,JQCBCTR,HQCBCTR)==1));
if ( GQCBCTR )
{ 
KQCBCTR.Fn = ICAACTR_optboolfn;
 /* line 881: */
KQCBCTR.Props = 0X0U;
 /* line 882: */
RNCBCTR = A_UNITE(LQCBCTR,mode22,22,KQCBCTR);
} 
else
{ 
 /* line 885: */
RNCBCTR = A_UNITE(MQCBCTR,mode10,10,AQCBCTR_o);
} 
} 
break;
case 4: 
 /* line 886: */
{ 
NQCBCTR_miscellaneoustype = (HNCBCTR_type-QXBBCTR_miscellaneousbase);
 /* line 887: */
 /* line 888: */
 /* line 890: */
OQCBCTR = ((NQCBCTR_miscellaneoustype/VXBBCTR_subrangesize)+1);
switch ( OQCBCTR )
{ 
case 1: 
 /* line 891: */
 /* line 893: */
switch ( NQCBCTR_miscellaneoustype )
{ 
case 1: 
{ 
QQCBCTR = (&((&PQCBCTR_u)->Mode)) ;
(*QQCBCTR) = A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
RQCBCTR = (&((&PQCBCTR_u)->Props)) ;
(*RQCBCTR) = (A68_BITS )A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
SQCBCTR = (&((&PQCBCTR_u)->Param)) ;
(*SQCBCTR) = A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
 /* line 896: */
RNCBCTR = A_UNITE(TQCBCTR,mode15,15,PQCBCTR_u);
} 
break;
case 2: 
{ 
VQCBCTR = (&((&UQCBCTR_s)->Labno)) ;
(*VQCBCTR) = A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
TJCBCTR_nextstring(  &WQCBCTR );
XQCBCTR = (&((&UQCBCTR_s)->Name)) ;
(*XQCBCTR) = WQCBCTR;
 /* line 897: */
YQCBCTR = (&((&UQCBCTR_s)->Status)) ;
(*YQCBCTR) = 0;
ZQCBCTR = (&((&UQCBCTR_s)->Notsetting)) ;
(*ZQCBCTR) = A68_TRUE;
 /* line 898: */
 /* line 899: */
 /* line 902: */
RNCBCTR = A_UNITE(ARCBCTR,mode14,14,UQCBCTR_s);
} 
break;
case 3: 
{ 
CRCBCTR = (&((&BRCBCTR_e)->Labno)) ;
(*CRCBCTR) = A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
ERCBCTR = (&((&BRCBCTR_e)->Name)) ;
(*ERCBCTR) = A_VVAC(DRCBCTR);
 /* line 903: */
FRCBCTR = (&((&BRCBCTR_e)->Status)) ;
(*FRCBCTR) = A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
GRCBCTR = (&((&BRCBCTR_e)->Notsetting)) ;
(*GRCBCTR) = A68_TRUE;
 /* line 904: */
 /* line 905: */
 /* line 908: */
RNCBCTR = A_UNITE(HRCBCTR,mode14,14,BRCBCTR_e);
} 
break;
case 4: 
{ 
JRCBCTR = (&((&IRCBCTR_d)->Labno)) ;
(*JRCBCTR) = A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
LRCBCTR = (&((&IRCBCTR_d)->Name)) ;
(*LRCBCTR) = A_VVAC(KRCBCTR);
 /* line 909: */
MRCBCTR = (&((&IRCBCTR_d)->Status)) ;
(*MRCBCTR) = 0;
NRCBCTR = (&((&IRCBCTR_d)->Notsetting)) ;
(*NRCBCTR) = A68_FALSE;
 /* line 910: */
 /* line 911: */
 /* line 914: */
RNCBCTR = A_UNITE(ORCBCTR,mode14,14,IRCBCTR_d);
} 
break;
case 5: 
{ 
QRCBCTR = (&((&PRCBCTR_r)->Rdenno)) ;
(*QRCBCTR) = A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
RRCBCTR = (&((&PRCBCTR_r)->Mode)) ;
(*RRCBCTR) = A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
SRCBCTR = (&((&PRCBCTR_r)->Props)) ;
(*SRCBCTR) = (A68_BITS )A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
 /* line 915: */
TRCBCTR = (&((&PRCBCTR_r)->Maxname)) ;
(*TRCBCTR) = A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
TJCBCTR_nextstring(  &URCBCTR );
VRCBCTR = (&((&PRCBCTR_r)->Name)) ;
(*VRCBCTR) = URCBCTR;
 /* line 916: */
 /* line 917: */
 /* line 919: */
RNCBCTR = A_UNITE(WRCBCTR,mode12,12,PRCBCTR_r);
} 
break;
case 6: 
 /* line 921: */
WXIACTR_assert(YRCBCTR, A68_FALSE) ;
RNCBCTR = A_EMPTY(ZRCBCTR,26);
break;
case 7: 
 /* line 924: */
SXIACTR_terminalerror(600) ;
RNCBCTR = A_EMPTY(ASCBCTR,26);
break;
case 8: 
 /* line 925: */
if ( WNOACTR_composition )
{ 
CSCBCTR = (&((&BSCBCTR_s)->Moduleno)) ;
(*CSCBCTR) = A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
DSCBCTR = (&((&BSCBCTR_s)->I)) ;
(*DSCBCTR) = A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
ESCBCTR = (&((&BSCBCTR_s)->J)) ;
(*ESCBCTR) = A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
 /* line 926: */
RNCBCTR = A_UNITE(FSCBCTR,mode24,24,BSCBCTR_s);
} 
else
{ 
A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
HSCBCTR = (&((&GSCBCTR_c)->I)) ;
(*HSCBCTR) = A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
 /* line 927: */
 /* line 929: */
RNCBCTR = A_UNITE(ISCBCTR,mode16,16,GSCBCTR_c);
} 
break;
case 9: 
 /* line 931: */
SXIACTR_terminalerror(600) ;
RNCBCTR = A_EMPTY(JSCBCTR,26);
break;
case 10: 
{ 
LSCBCTR = (&((&KSCBCTR_v)->Fn)) ;
(*LSCBCTR) = LGAACTR_voidfn;
MSCBCTR = (&((&KSCBCTR_v)->Mode)) ;
(*MSCBCTR) = UEAACTR_voidmode;
 /* line 934: */
RNCBCTR = A_UNITE(NSCBCTR,mode10,10,KSCBCTR_v);
} 
break;
case 11: 
{ 
PSCBCTR = (&((&OSCBCTR_cl)->Body)) ;
(*PSCBCTR) = A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
QSCBCTR = (&((&OSCBCTR_cl)->Moduleno)) ;
(*QSCBCTR) = A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
 /* line 935: */
A_CLOSURE( SSCBCTR_generator, TSCBCTR_generator, USCBCTR_generator );
A_CALLPROC(SSCBCTR_generator,(A68_FALSE, &XSCBCTR),(A68_FALSE, &XSCBCTR,(SSCBCTR_generator).nonlocals));
YSCBCTR = (&((&OSCBCTR_cl)->Actuals)) ;
(*YSCBCTR) = XSCBCTR;
BKCBCTR_nexttype();
 /* line 936: */
ATCBCTR = (*(&((&OSCBCTR_cl)->Actuals))) ;
BTCBCTR = ATCBCTR.dim[0].upb - ATCBCTR.dim[0].lwb;
ZSCBCTR_actual = ATCBCTR.data;
for (;BTCBCTR-- >= 0;
(ZSCBCTR_actual += ATCBCTR.dim[0].stride
) )
{
(*ZSCBCTR_actual) = A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
}
 /* line 937: */
 /* line 938: */
 /* line 941: */
RNCBCTR = A_UNITE(CTCBCTR,mode23,23,OSCBCTR_cl);
} 
break;
case 12: 
{ 
ETCBCTR = (&((&DTCBCTR_x)->Moduleno)) ;
(*ETCBCTR) = A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
 /* line 942: */
A_CLOSURE( GTCBCTR_generator, HTCBCTR_generator, ITCBCTR_generator );
A_CALLPROC(GTCBCTR_generator,(A68_FALSE, &LTCBCTR),(A68_FALSE, &LTCBCTR,(GTCBCTR_generator).nonlocals));
MTCBCTR = (&((&DTCBCTR_x)->Ysnames)) ;
(*MTCBCTR) = LTCBCTR;
TJCBCTR_nextstring(  &NTCBCTR );
OTCBCTR = (&((&DTCBCTR_x)->Name)) ;
(*OTCBCTR) = NTCBCTR;
 /* line 943: */
TJCBCTR_nextstring(  &PTCBCTR );
QTCBCTR = (&((&DTCBCTR_x)->Uname)) ;
(*QTCBCTR) = PTCBCTR;
TJCBCTR_nextstring(  &RTCBCTR );
STCBCTR = (&((&DTCBCTR_x)->Lname)) ;
(*STCBCTR) = RTCBCTR;
 /* line 944: */
TJCBCTR_nextstring(  &TTCBCTR );
UTCBCTR = (&((&DTCBCTR_x)->Gname)) ;
(*UTCBCTR) = TTCBCTR;
 /* line 945: */
WTCBCTR = (*(&((&DTCBCTR_x)->Ysnames))) ;
XTCBCTR = WTCBCTR.dim[0].upb - WTCBCTR.dim[0].lwb;
VTCBCTR_ysname = WTCBCTR.data;
for (;XTCBCTR-- >= 0;
(VTCBCTR_ysname += WTCBCTR.dim[0].stride
) )
{
TJCBCTR_nextstring(  &YTCBCTR );
(*VTCBCTR_ysname) = YTCBCTR;
}
 /* line 946: */
 /* line 947: */
 /* line 948: */
 /* line 949: */
RNCBCTR = A_UNITE(ZTCBCTR,mode25,25,DTCBCTR_x);
} 
break;
default: 
 /* line 950: */
 /* line 953: */
SXIACTR_terminalerror(601) ;
RNCBCTR = A_EMPTY(AUCBCTR,26);
break;
} 
break;
case 2: 
{ 
CUCBCTR = (&((&BUCBCTR_w)->W)) ;
(*CUCBCTR) = (HNCBCTR_type-RXBBCTR_warnbase);
 /* line 956: */
RNCBCTR = A_UNITE(DUCBCTR,mode13,13,BUCBCTR_w);
} 
break;
case 3: 
{ 
FUCBCTR = (&((&EUCBCTR_i)->Type)) ;
(*FUCBCTR) = (HNCBCTR_type-SXBBCTR_iddecbase);
 /* line 957: */
GUCBCTR = (&((&EUCBCTR_i)->Mode)) ;
(*GUCBCTR) = A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
HUCBCTR = (&((&EUCBCTR_i)->Decno)) ;
(*HUCBCTR) = A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
 /* line 958: */
TJCBCTR_nextstring(  &IUCBCTR );
JUCBCTR = (&((&EUCBCTR_i)->Name)) ;
(*JUCBCTR) = IUCBCTR;
 /* line 959: */
 /* line 960: */
 /* line 963: */
RNCBCTR = A_UNITE(KUCBCTR,mode11,11,EUCBCTR_i);
} 
break;
case 4: 
{ 
MUCBCTR = (&((&LUCBCTR_s)->Fn)) ;
(*MUCBCTR) = (HNCBCTR_type-TXBBCTR_starterbase);
 /* line 964: */
NUCBCTR = (&((&LUCBCTR_s)->Mode)) ;
(*NUCBCTR) = A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
OUCBCTR = (&((&LUCBCTR_s)->Props)) ;
(*OUCBCTR) = (A68_BITS )A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
 /* line 965: */
PUCBCTR = (&((&LUCBCTR_s)->Resultmode)) ;
(*PUCBCTR) = A_CALLPROC(RJCBCTR_next,(),((RJCBCTR_next).nonlocals));
 /* line 966: */
 /* line 967: */
 /* line 968: */
RNCBCTR = A_UNITE(QUCBCTR,mode21,21,LUCBCTR_s);
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
RUCBCTR_imperative = RNCBCTR;
 /* line 971: */
 /* line 972: */
 /* line 973: */
if ( GICBCTR_printstream )
{ 
KBXACTR_imperativemnemonic( RUCBCTR_imperative, &SUCBCTR );
TUCBCTR_string = SUCBCTR;
 /* line 975: */
 /* line 969: */
 /* line 976: */
if ( (TUCBCTR_string.upb<120) )
{ 
 /* line 977: */
 /* line 978: */
A_CALLPROC(MSIACTR_list,(TUCBCTR_string),(TUCBCTR_string,(MSIACTR_list).nonlocals));
} 
else
{ 
A_CALLPROC(MSIACTR_list,(A_VTRIM(UUCBCTR,(TUCBCTR_string),A_VTSCRIPT(&(UUCBCTR.upb),(TUCBCTR_string).upb,1,120))),(A_VTRIM(UUCBCTR,(TUCBCTR_string),A_VTSCRIPT(&(UUCBCTR.upb),(TUCBCTR_string).upb,1,120)),(MSIACTR_list).nonlocals));
 /* line 979: */
 /* line 980: */
 /* line 981: */
A_CALLPROC(MSIACTR_list,(A_VC_PLUS(A_C_TIMES(' ',35),A_VTRIM(VUCBCTR,(TUCBCTR_string),A_VTSCRIPT(&(VUCBCTR.upb),(TUCBCTR_string).upb,121,(TUCBCTR_string).upb)))),(A_VC_PLUS(A_C_TIMES(' ',35),A_VTRIM(VUCBCTR,(TUCBCTR_string),A_VTSCRIPT(&(VUCBCTR.upb),(TUCBCTR_string).upb,121,(TUCBCTR_string).upb))),(MSIACTR_list).nonlocals));
} 
} 
 /* line 982: */
 /* line 983: */
WUCBCTR = RUCBCTR_imperative;
} 
A_PROC_EXIT(nextstreamimperative);
*ReturnedValue = (WUCBCTR);
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
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_156  TUBBCTR;  /* collateral clause result */
A68_275  VUBBCTR;  /* collateral clause result */
A68_VC  WUBBCTR;  /* OPERATORS - nil -> mode */
A68_276  BVBBCTR;  /* avoid structure result */
A68_280  FVBBCTR;  /* OPERATORS - istruct -> vector */
A68_280  GVBBCTR;  /* OPERATORS - trim index */
A68_279  HVBBCTR;  /* OPERATORS - trim index */
A68_279  LVBBCTR;  /* OPERATORS - trim index */
A68_279  MVBBCTR;  /* forall yield */
A68_INT  NVBBCTR;  /* forall loop counter */
A68_276  SVBBCTR;  /* avoid structure result */
A68_276 * TVBBCTR;  /* YIELD */
A68_276  UVBBCTR;  /* OPERATORS - simple index */
A68_INT * VVBBCTR;  /* YIELD */
A68_INT  WVBBCTR;  /* YIELD */
A68_VC  XVBBCTR;  /* OPERATORS - istruct -> vector */
A68_281 * YVBBCTR;  /* OPERATORS - istruct -> vector */
A68_VC * ZVBBCTR;  /* YIELD */
A68_VC * AWBBCTR;  /* YIELD */
A68_279  CWBBCTR;  /* OPERATORS - trim index */
A68_279  DWBBCTR;  /* forall yield */
A68_INT  EWBBCTR;  /* forall loop counter */
A68_INT  KWBBCTR;  /* YIELD */
A68_282  MYBBCTR;  /* avoid structure result */
A68_181  IZBBCTR;  /* avoid structure result */
A68_284  JZBBCTR;  /* collateral clause result */
A68_181  KZBBCTR;  /* OPERATORS - trim index */
A68_181  LZBBCTR;  /* OPERATORS - istruct to row */
A68_181  MZBBCTR;  /* OPERATORS - trim index */
A68_181  NZBBCTR;  /* OPERATORS - trim index */
A68_181  OZBBCTR;  /* YIELD */
A68_181  PZBBCTR;  /* OPERATORS - assign op */
A68_181  RZBBCTR;  /* OPERATORS - trim index */
A68_181  SZBBCTR;  /* forall yield */
A68_INT  TZBBCTR;  /* forall loop counter */
A68_182  UZBBCTR;  /* collateral clause result */
A68_182  VZBBCTR;  /* collateral clause result */
A68_INT  WZBBCTR;  /* YIELD */
A68_182 * XZBBCTR;  /* YIELD */
A68_BOOL  YZBBCTR;  /* clause result */
A68_182  ZZBBCTR;  /* collateral clause result */
A68_INT  AACBCTR;  /* YIELD */
A68_182 * BACBCTR;  /* YIELD */
A68_BOOL  CACBCTR;  /* clause result */
A68_BOOL  DACBCTR;  /* clause result */
A68_INT  FACBCTR;  /* to part of loop */
A68_182  GACBCTR;  /* collateral clause result */
A68_182 * HACBCTR;  /* YIELD */
A68_182  IACBCTR;  /* collateral clause result */
A68_INT  JACBCTR;  /* YIELD */
A68_182 * KACBCTR;  /* YIELD */
A68_180  THCBCTR;  /* clause result */
A68_180  UHCBCTR;  /* procedure value */
A68_180  VHCBCTR;  /* procedure value */
A68_174  WHCBCTR;  /* procedure value */
A68_175  XHCBCTR;  /* procedure value */
A68_176  YHCBCTR;  /* procedure value */
A68_177  ZHCBCTR;  /* procedure value */
A68_178  AICBCTR;  /* procedure value */
A68_179  BICBCTR;  /* procedure value */
A68_VC  EICBCTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  FICBCTR;  /* clause result */
A68_INT  KICBCTR;  /* forall loop counter */
A68_VC  LICBCTR;  /* OPERATORS - nil -> mode */
A68_VC  MICBCTR;  /* != */
A68_VC  NICBCTR;  /* != */
A68_VC  SICBCTR;  /* OPERATORS - trim index */
A68_VC  TICBCTR;  /* OPERATORS - trim index */
A68_VC * UICBCTR;  /* YIELD */
A68_INT  XICBCTR;  /* forall loop counter */
A68_VC  ZICBCTR;  /* avoid structure result */
A68_VC  BJCBCTR;  /* avoid structure result */
A68_INT  CJCBCTR;  /* YIELD */
A68_86  SJCBCTR;  /* procedure value */
A68_184  XUCBCTR;  /* procedure value */
A68_305  YUCBCTR;  /* collateral clause result */
A68_212  BVCBCTR;  /* OPERATORS - mode -> union mode */
A68_VC  CVCBCTR;  /* YIELD */
A68_212  DVCBCTR;  /* OPERATORS - mode -> union mode */
A68_211  EVCBCTR;  /* OPERATORS - istruct -> vector */
A68_301  FVCBCTR;  /* collateral clause result */
A68_212  IVCBCTR;  /* OPERATORS - mode -> union mode */
A68_VC  JVCBCTR;  /* YIELD */
A68_212  KVCBCTR;  /* OPERATORS - mode -> union mode */
A68_212  NVCBCTR;  /* OPERATORS - mode -> union mode */
A68_VC  OVCBCTR;  /* YIELD */
A68_212  PVCBCTR;  /* OPERATORS - mode -> union mode */
A68_211  QVCBCTR;  /* OPERATORS - istruct -> vector */
A68_212  RVCBCTR;  /* OPERATORS - mode -> union mode */
A68_211  SVCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_212  TVCBCTR;  /* OPERATORS - mode -> union mode */
A68_211  UVCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_212  VVCBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  WVCBCTR;  /* YIELD */
A68_211  XVCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_212  YVCBCTR;  /* OPERATORS - mode -> union mode */
A68_211  ZVCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_212  AWCBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  BWCBCTR;  /* YIELD */
A68_211  CWCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  EWCBCTR;  /* to part of loop */
A68_212  FWCBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  GWCBCTR;  /* YIELD */
A68_211  HWCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_212  IWCBCTR;  /* OPERATORS - mode -> union mode */
A68_INT  JWCBCTR;  /* YIELD */
A68_211  KWCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_GC_STARTUP(argc);
BAAALIB();   /* USE a68config */
RHMACTR();   /* USE uniquenameserver */
BCHACTR();   /* USE moduletracer */
MMOACTR();   /* USE modules */
DNMACTR();   /* USE modes */
IXWACTR();   /* USE mnemonics */
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
OZABCTR();   /* USE compiler */
ZJAACTR();   /* USE rscompiler */
THAACTR();   /* USE centities */
CSCAOSF();   /* USE osif */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc.a68";
A_config.translation_time = "Thu Nov  5 20:46:57 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "OUBBCTR (from seed file) ";
A_config.spec_change_time = "no spec";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
#ifdef A_prelude
A_prelude(argc,argv,envp);
#endif
A_PROC_ENTRY(MAIN);
{ 
UEAALIB_a68config(LGAALIB_configinfo, SUBBCTR);
 /* line 53: */
TUBBCTR.Norden = 0;
TUBBCTR.Nomodes = 0;
TUBBCTR.Nolabs = 0;
TUBBCTR.Nodecnos = HAAACTR_minidno;
TUBBCTR.Nomodules = 0;
TUBBCTR.Nolibinds = 0;
UUBBCTR_xsizes = TUBBCTR;
 /* line 60: */
 /* line 65: */
 /* line 67: */
VUBBCTR.Streambuffer = A_VVAC(WUBBCTR);
VUBBCTR.Streamptr = 0;
YUBBCTR_generator( A68_FALSE, &BVBBCTR );
VUBBCTR.Buffers = BVBBCTR;
VUBBCTR.Currentbuffer = 0;
CVBBCTR_unsetstream = VUBBCTR;
 /* line 69: */
 /* line 70: */
GVBBCTR = A_ISVEC(FVBBCTR,(&DVBBCTR_streams_area),20,A68_275 ) ;
EVBBCTR_streams = A_VTRIM(HVBBCTR,(GVBBCTR),A_VRTSCRIPT(&(HVBBCTR.dim[0]),(GVBBCTR).upb,1,(GVBBCTR).upb,0));
 /* line 72: */
 /* line 74: */
 /* line 76: */
 /* line 77: */
MVBBCTR = A_R1TRIM(LVBBCTR,(EVBBCTR_streams),A_RTSCRIPT(&(LVBBCTR.dim[0]),&((EVBBCTR_streams).dim[0]),(EVBBCTR_streams).dim[0].lwb,JVBBCTR_fixedstreams,1)) ;
NVBBCTR = MVBBCTR.dim[0].upb - MVBBCTR.dim[0].lwb;
KVBBCTR_stream = MVBBCTR.data;
for (;NVBBCTR-- >= 0;
(KVBBCTR_stream += MVBBCTR.dim[0].stride
) )
{
 /* line 78: */
 /* line 79: */
 /* line 82: */
PVBBCTR_generator( A68_FALSE, &SVBBCTR );
TVBBCTR = (&(KVBBCTR_stream->Buffers)) ;
UVBBCTR = (*TVBBCTR) = SVBBCTR ;
VVBBCTR = (&(KVBBCTR_stream->Currentbuffer)) ;
WVBBCTR = (*VVBBCTR) = 1 ;
YVBBCTR = A_LOC(A68_281 ) ;
ZVBBCTR = (&A_VINDEX(UVBBCTR,WVBBCTR)) ;
AWBBCTR = (&(KVBBCTR_stream->Streambuffer)) ;
(*AWBBCTR) = (*ZVBBCTR) = A_ISVEC(XVBBCTR,YVBBCTR,11,A68_CHAR );
}
 /* line 84: */
DWBBCTR = A_R1TRIM(CWBBCTR,(EVBBCTR_streams),A_RTSCRIPT(&(CWBBCTR.dim[0]),&((EVBBCTR_streams).dim[0]),(JVBBCTR_fixedstreams+1),(EVBBCTR_streams).dim[0].upb,1)) ;
EWBBCTR = DWBBCTR.dim[0].upb - DWBBCTR.dim[0].lwb;
BWBBCTR_stream = DWBBCTR.data;
for (;EWBBCTR-- >= 0;
(BWBBCTR_stream += DWBBCTR.dim[0].stride
) )
{
(*BWBBCTR_stream) = CVBBCTR_unsetstream;
}
 /* line 85: */
IVBBCTR_current = CVBBCTR_unsetstream;
 /* line 87: */
FWBBCTR_streambuffer = (&((&IVBBCTR_current)->Streambuffer));
 /* line 88: */
GWBBCTR_strptr = (&((&IVBBCTR_current)->Streamptr));
 /* line 89: */
HWBBCTR_currentbuffer = (&((&IVBBCTR_current)->Currentbuffer));
 /* line 90: */
IWBBCTR_buffers = (&((&IVBBCTR_current)->Buffers));
 /* line 92: */
KWBBCTR = 0 ;
JWBBCTR_curstradd = (&A_R1INDEX(EVBBCTR_streams,KWBBCTR));
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
JYIACTR_setparams();
 /* line 145: */
DYBBCTR_inputfile = QVBAOSF_open_file(XQIACTR_sourcefilename, ATBAOSF_read_access, RIBAOSF_ignore_msg);
 /* line 147: */
if ( (DYBBCTR_inputfile==(A68_59 *)A68_NIL) )
{ 
SXIACTR_terminalerror(250);
} 
 /* line 149: */
EYBBCTR_line_start = 1;
 /* line 150: */
FYBBCTR_line_length = 0;
 /* line 152: */
GYBBCTR_line_pending = A68_FALSE;
 /* line 154: */
XRIACTR_linenumber = 0;
 /* line 156: */
IYBBCTR_generator( A68_TRUE, &MYBBCTR );
LYBBCTR_flexinputline = MYBBCTR;
 /* line 158: */
 /* line 212: */
EZBBCTR_generator( A68_TRUE, &IZBBCTR );
HZBBCTR_charset = IZBBCTR;
 /* line 213: */
 /* line 215: */
JZBBCTR.data[0].Type = 2;
JZBBCTR.data[0].Value = 37;
JZBBCTR.data[1].Type = 1;
JZBBCTR.data[1].Value = 100;
JZBBCTR.data[2].Type = 1;
JZBBCTR.data[2].Value = 100;
JZBBCTR.data[3].Type = 1;
JZBBCTR.data[3].Value = 100;
JZBBCTR.data[4].Type = 1;
JZBBCTR.data[4].Value = 100;
JZBBCTR.data[5].Type = 1;
JZBBCTR.data[5].Value = 100;
JZBBCTR.data[6].Type = 1;
JZBBCTR.data[6].Value = 100;
JZBBCTR.data[7].Type = 1;
 /* line 216: */
JZBBCTR.data[7].Value = 100;
JZBBCTR.data[8].Type = 1;
JZBBCTR.data[8].Value = 100;
JZBBCTR.data[9].Type = 2;
JZBBCTR.data[9].Value = 37;
JZBBCTR.data[10].Type = 2;
JZBBCTR.data[10].Value = 37;
JZBBCTR.data[11].Type = 2;
JZBBCTR.data[11].Value = 37;
JZBBCTR.data[12].Type = 2;
JZBBCTR.data[12].Value = 37;
JZBBCTR.data[13].Type = 1;
JZBBCTR.data[13].Value = 100;
JZBBCTR.data[14].Type = 1;
JZBBCTR.data[14].Value = 100;
JZBBCTR.data[15].Type = 1;
 /* line 217: */
JZBBCTR.data[15].Value = 100;
JZBBCTR.data[16].Type = 1;
JZBBCTR.data[16].Value = 100;
JZBBCTR.data[17].Type = 1;
JZBBCTR.data[17].Value = 100;
JZBBCTR.data[18].Type = 1;
JZBBCTR.data[18].Value = 100;
JZBBCTR.data[19].Type = 1;
JZBBCTR.data[19].Value = 100;
JZBBCTR.data[20].Type = 1;
JZBBCTR.data[20].Value = 100;
JZBBCTR.data[21].Type = 1;
JZBBCTR.data[21].Value = 100;
JZBBCTR.data[22].Type = 1;
JZBBCTR.data[22].Value = 100;
JZBBCTR.data[23].Type = 1;
 /* line 218: */
JZBBCTR.data[23].Value = 100;
JZBBCTR.data[24].Type = 1;
JZBBCTR.data[24].Value = 100;
JZBBCTR.data[25].Type = 1;
JZBBCTR.data[25].Value = 100;
JZBBCTR.data[26].Type = 1;
JZBBCTR.data[26].Value = 100;
JZBBCTR.data[27].Type = 1;
JZBBCTR.data[27].Value = 100;
JZBBCTR.data[28].Type = 1;
JZBBCTR.data[28].Value = 100;
JZBBCTR.data[29].Type = 1;
JZBBCTR.data[29].Value = 100;
JZBBCTR.data[30].Type = 1;
JZBBCTR.data[30].Value = 100;
JZBBCTR.data[31].Type = 1;
 /* line 219: */
JZBBCTR.data[31].Value = 100;
JZBBCTR.data[32].Type = 2;
JZBBCTR.data[32].Value = 37;
JZBBCTR.data[33].Type = 20;
JZBBCTR.data[33].Value = 45;
JZBBCTR.data[34].Type = 5;
JZBBCTR.data[34].Value = 100;
JZBBCTR.data[35].Type = 20;
JZBBCTR.data[35].Value = 62;
JZBBCTR.data[36].Type = 20;
JZBBCTR.data[36].Value = 160;
JZBBCTR.data[37].Type = 21;
JZBBCTR.data[37].Value = 214;
JZBBCTR.data[38].Type = 21;
JZBBCTR.data[38].Value = 229;
JZBBCTR.data[39].Type = 1;
 /* line 220: */
JZBBCTR.data[39].Value = 100;
JZBBCTR.data[40].Type = 20;
JZBBCTR.data[40].Value = 50;
JZBBCTR.data[41].Type = 20;
JZBBCTR.data[41].Value = 54;
JZBBCTR.data[42].Type = 22;
JZBBCTR.data[42].Value = 212;
JZBBCTR.data[43].Type = 21;
JZBBCTR.data[43].Value = 200;
JZBBCTR.data[44].Type = 20;
JZBBCTR.data[44].Value = 128;
JZBBCTR.data[45].Type = 21;
JZBBCTR.data[45].Value = 201;
JZBBCTR.data[46].Type = 20;
JZBBCTR.data[46].Value = 130;
JZBBCTR.data[47].Type = 22;
 /* line 221: */
JZBBCTR.data[47].Value = 213;
JZBBCTR.data[48].Type = 4;
JZBBCTR.data[48].Value = 0;
JZBBCTR.data[49].Type = 4;
JZBBCTR.data[49].Value = 1;
JZBBCTR.data[50].Type = 4;
JZBBCTR.data[50].Value = 2;
JZBBCTR.data[51].Type = 4;
JZBBCTR.data[51].Value = 3;
JZBBCTR.data[52].Type = 4;
JZBBCTR.data[52].Value = 4;
JZBBCTR.data[53].Type = 4;
JZBBCTR.data[53].Value = 5;
JZBBCTR.data[54].Type = 4;
JZBBCTR.data[54].Value = 6;
JZBBCTR.data[55].Type = 4;
 /* line 222: */
JZBBCTR.data[55].Value = 7;
JZBBCTR.data[56].Type = 4;
JZBBCTR.data[56].Value = 8;
JZBBCTR.data[57].Type = 4;
JZBBCTR.data[57].Value = 9;
JZBBCTR.data[58].Type = 22;
JZBBCTR.data[58].Value = 84;
JZBBCTR.data[59].Type = 20;
JZBBCTR.data[59].Value = 111;
JZBBCTR.data[60].Type = 22;
JZBBCTR.data[60].Value = 206;
JZBBCTR.data[61].Type = 22;
JZBBCTR.data[61].Value = 210;
JZBBCTR.data[62].Type = 22;
JZBBCTR.data[62].Value = 207;
JZBBCTR.data[63].Type = 21;
 /* line 223: */
JZBBCTR.data[63].Value = 217;
JZBBCTR.data[64].Type = 20;
JZBBCTR.data[64].Value = 154;
JZBBCTR.data[65].Type = 6;
JZBBCTR.data[65].Value = (-98);
JZBBCTR.data[66].Type = 6;
JZBBCTR.data[66].Value = (-99);
JZBBCTR.data[67].Type = 6;
JZBBCTR.data[67].Value = (-100);
JZBBCTR.data[68].Type = 6;
JZBBCTR.data[68].Value = (-101);
JZBBCTR.data[69].Type = 6;
JZBBCTR.data[69].Value = (-102);
JZBBCTR.data[70].Type = 6;
JZBBCTR.data[70].Value = (-103);
JZBBCTR.data[71].Type = 6;
 /* line 224: */
JZBBCTR.data[71].Value = (-104);
JZBBCTR.data[72].Type = 6;
JZBBCTR.data[72].Value = (-105);
JZBBCTR.data[73].Type = 6;
JZBBCTR.data[73].Value = (-106);
JZBBCTR.data[74].Type = 6;
JZBBCTR.data[74].Value = (-107);
JZBBCTR.data[75].Type = 6;
JZBBCTR.data[75].Value = (-108);
JZBBCTR.data[76].Type = 6;
JZBBCTR.data[76].Value = (-109);
JZBBCTR.data[77].Type = 6;
JZBBCTR.data[77].Value = (-110);
JZBBCTR.data[78].Type = 6;
JZBBCTR.data[78].Value = (-111);
JZBBCTR.data[79].Type = 6;
 /* line 225: */
JZBBCTR.data[79].Value = (-112);
JZBBCTR.data[80].Type = 6;
JZBBCTR.data[80].Value = (-113);
JZBBCTR.data[81].Type = 6;
JZBBCTR.data[81].Value = (-114);
JZBBCTR.data[82].Type = 6;
JZBBCTR.data[82].Value = (-115);
JZBBCTR.data[83].Type = 6;
JZBBCTR.data[83].Value = (-116);
JZBBCTR.data[84].Type = 6;
JZBBCTR.data[84].Value = (-117);
JZBBCTR.data[85].Type = 6;
JZBBCTR.data[85].Value = (-118);
JZBBCTR.data[86].Type = 6;
JZBBCTR.data[86].Value = (-119);
JZBBCTR.data[87].Type = 6;
 /* line 226: */
JZBBCTR.data[87].Value = (-120);
JZBBCTR.data[88].Type = 6;
JZBBCTR.data[88].Value = (-121);
JZBBCTR.data[89].Type = 6;
JZBBCTR.data[89].Value = (-122);
JZBBCTR.data[90].Type = 6;
JZBBCTR.data[90].Value = (-123);
JZBBCTR.data[91].Type = 20;
JZBBCTR.data[91].Value = 159;
JZBBCTR.data[92].Type = 20;
JZBBCTR.data[92].Value = 175;
JZBBCTR.data[93].Type = 20;
JZBBCTR.data[93].Value = 161;
JZBBCTR.data[94].Type = 20;
JZBBCTR.data[94].Value = 233;
JZBBCTR.data[95].Type = 3;
 /* line 227: */
JZBBCTR.data[95].Value = 36;
JZBBCTR.data[96].Type = 1;
JZBBCTR.data[96].Value = 100;
JZBBCTR.data[97].Type = 3;
JZBBCTR.data[97].Value = 10;
JZBBCTR.data[98].Type = 3;
JZBBCTR.data[98].Value = 11;
JZBBCTR.data[99].Type = 3;
JZBBCTR.data[99].Value = 12;
JZBBCTR.data[100].Type = 3;
JZBBCTR.data[100].Value = 13;
JZBBCTR.data[101].Type = 3;
JZBBCTR.data[101].Value = 14;
JZBBCTR.data[102].Type = 3;
JZBBCTR.data[102].Value = 15;
JZBBCTR.data[103].Type = 3;
 /* line 228: */
JZBBCTR.data[103].Value = 16;
JZBBCTR.data[104].Type = 3;
JZBBCTR.data[104].Value = 17;
JZBBCTR.data[105].Type = 3;
JZBBCTR.data[105].Value = 18;
JZBBCTR.data[106].Type = 3;
JZBBCTR.data[106].Value = 19;
JZBBCTR.data[107].Type = 3;
JZBBCTR.data[107].Value = 20;
JZBBCTR.data[108].Type = 3;
JZBBCTR.data[108].Value = 21;
JZBBCTR.data[109].Type = 3;
JZBBCTR.data[109].Value = 22;
JZBBCTR.data[110].Type = 3;
JZBBCTR.data[110].Value = 23;
JZBBCTR.data[111].Type = 3;
 /* line 229: */
JZBBCTR.data[111].Value = 24;
JZBBCTR.data[112].Type = 3;
JZBBCTR.data[112].Value = 25;
JZBBCTR.data[113].Type = 3;
JZBBCTR.data[113].Value = 26;
JZBBCTR.data[114].Type = 3;
JZBBCTR.data[114].Value = 27;
JZBBCTR.data[115].Type = 3;
JZBBCTR.data[115].Value = 28;
JZBBCTR.data[116].Type = 3;
JZBBCTR.data[116].Value = 29;
JZBBCTR.data[117].Type = 3;
JZBBCTR.data[117].Value = 30;
JZBBCTR.data[118].Type = 3;
JZBBCTR.data[118].Value = 31;
JZBBCTR.data[119].Type = 3;
 /* line 230: */
JZBBCTR.data[119].Value = 32;
JZBBCTR.data[120].Type = 3;
JZBBCTR.data[120].Value = 33;
JZBBCTR.data[121].Type = 3;
JZBBCTR.data[121].Value = 34;
JZBBCTR.data[122].Type = 3;
JZBBCTR.data[122].Value = 35;
JZBBCTR.data[123].Type = 20;
JZBBCTR.data[123].Value = 67;
JZBBCTR.data[124].Type = 20;
JZBBCTR.data[124].Value = 45;
JZBBCTR.data[125].Type = 20;
JZBBCTR.data[125].Value = 68;
JZBBCTR.data[126].Type = 1;
JZBBCTR.data[126].Value = 100;
JZBBCTR.data[127].Type = 1;
JZBBCTR.data[127].Value = 100;
MZBBCTR = A_HIS1ARR(LZBBCTR,JZBBCTR,A68_182 ,128) ;
OZBBCTR = A_R1TRIM(KZBBCTR,(HZBBCTR_charset),A_RTSCRIPT(&(KZBBCTR.dim[0]),&((HZBBCTR_charset).dim[0]),(HZBBCTR_charset).dim[0].lwb,127,0)) ;
PZBBCTR = A_R1TRIM(NZBBCTR,(MZBBCTR),A_RTSCRIPT(&(NZBBCTR.dim[0]),&((MZBBCTR).dim[0]),(MZBBCTR).dim[0].lwb,(MZBBCTR).dim[0].upb,0)) ;
A_R1ASSIGN2(PZBBCTR,OZBBCTR,A68_182 );
 /* line 232: */
 /* line 233: */
SZBBCTR = A_R1TRIM(RZBBCTR,(HZBBCTR_charset),A_RTSCRIPT(&(RZBBCTR.dim[0]),&((HZBBCTR_charset).dim[0]),128,(HZBBCTR_charset).dim[0].upb,1)) ;
TZBBCTR = SZBBCTR.dim[0].upb - SZBBCTR.dim[0].lwb;
QZBBCTR_c = SZBBCTR.data;
for (;TZBBCTR-- >= 0;
(QZBBCTR_c += SZBBCTR.dim[0].stride
) )
{
 /* line 234: */
UZBBCTR.Type = 1;
 /* line 235: */
UZBBCTR.Value = 100;
(*QZBBCTR_c) = UZBBCTR;
}
 /* line 237: */
if ( CQIACTR_dotoption )
{ 
VZBBCTR.Type = 7;
VZBBCTR.Value = 130;
WZBBCTR = (A68_INT)(unsigned char)'.' ;
XZBBCTR = (&A_R1INDEX(HZBBCTR_charset,WZBBCTR)) ;
(*XZBBCTR) = VZBBCTR;
YZBBCTR = A68_TRUE;
} 
else
{ 
YZBBCTR = A68_FALSE;
} 
if ( DQIACTR_quoteoption )
{ 
ZZBBCTR.Type = 8;
ZZBBCTR.Value = 100;
AACBCTR = (A68_INT)(unsigned char)'\'' ;
BACBCTR = (&A_R1INDEX(HZBBCTR_charset,AACBCTR)) ;
(*BACBCTR) = ZZBBCTR;
CACBCTR = A68_TRUE;
} 
else
{ 
CACBCTR = A68_FALSE;
} 
 /* line 238: */
DACBCTR = (YZBBCTR|CACBCTR);
if ( DACBCTR )
{ 
FACBCTR = (A68_INT)(unsigned char)'Z';
for ( EACBCTR_i = (A68_INT)(unsigned char)'A';
EACBCTR_i <= FACBCTR;
EACBCTR_i += 1 )
{ 
 /* line 239: */
GACBCTR.Type = 1;
GACBCTR.Value = 100;
HACBCTR = (&A_R1INDEX(HZBBCTR_charset,EACBCTR_i)) ;
(*HACBCTR) = GACBCTR;
}
 /* line 240: */
} 
 /* line 241: */
if ( FQIACTR_tildeoption )
{ 
IACBCTR.Type = 3;
IACBCTR.Value = 36;
JACBCTR = (A68_INT)(unsigned char)'~' ;
KACBCTR = (&A_R1INDEX(HZBBCTR_charset,JACBCTR)) ;
(*KACBCTR) = IACBCTR;
} 
 /* line 250: */
NACBCTR_contval = MACBCTR;
 /* line 252: */
OACBCTR_upped = A68_FALSE;
 /* line 254: */
 /* line 255: */
QACBCTR_xtmodulepending = A68_FALSE;
 /* line 257: */
RACBCTR_timeschecked = A68_FALSE;
 /* line 259: */
 /* line 262: */
 /* line 568: */
NULACTR_initcoutput(YQIACTR_basenamesourcefile);
 /* line 571: */
 /* line 572: */
if ( IQIACTR_optbooloption )
{ 
UHCBCTR.fn.fn_global = HPKACTR_optboollookup;
UHCBCTR.nonlocals = A68_NIL;
THCBCTR = UHCBCTR;
} 
else
{ 
VHCBCTR.fn.fn_global = SOKACTR_lookup;
VHCBCTR.nonlocals = A68_NIL;
THCBCTR = VHCBCTR;
} 
WHCBCTR.fn.fn_global = PYBBCTR_input;
WHCBCTR.nonlocals = A68_NIL;
XHCBCTR.fn.fn_global = VACBCTR_output;
XHCBCTR.nonlocals = A68_NIL;
YHCBCTR.fn.fn_global = EXIACTR_fault;
YHCBCTR.nonlocals = A68_NIL;
ZHCBCTR.fn.fn_global = KDHACTR_message;
ZHCBCTR.nonlocals = A68_NIL;
AICBCTR.fn.fn_global = ZAPACTR_givemoduledetails;
AICBCTR.nonlocals = A68_NIL;
BICBCTR.fn.fn_global = EOOACTR_givespec;
BICBCTR.nonlocals = A68_NIL;
URAACTR_compile(WHCBCTR, XHCBCTR, YHCBCTR, ZHCBCTR, AICBCTR, BICBCTR, THCBCTR, HZBBCTR_charset);
 /* line 574: */
 /* line 575: */
{ 
 /* line 576: */
 /* line 577: */
 /* line 578: */
PYBBCTR_input(A_ISVEC(EICBCTR,(&CICBCTR_wasteline),160,A68_CHAR ), (&DICBCTR_wastesize));
} 
 /* line 580: */
IWBAOSF_close_file(DYBBCTR_inputfile, RIBAOSF_ignore_msg);
 /* line 582: */
 /* line 583: */
 /* line 584: */
 /* line 588: */
FICBCTR = (DSIACTR_greatestseverity<=2);
} 
if ( FICBCTR )
{ 
XRIACTR_linenumber = 1;
 /* line 590: */
GICBCTR_printstream = GQIACTR_streamoption;
 /* line 596: */
(*JWBBCTR_curstradd) = IVBBCTR_current;
 /* line 598: */
HICBCTR_level = 0;
 /* line 599: */
IICBCTR_s = 0;
 /* line 601: */
 /* line 602: */
KICBCTR = EVBBCTR_streams.dim[0].upb - EVBBCTR_streams.dim[0].lwb;
JICBCTR_stream = EVBBCTR_streams.data;
for (;KICBCTR-- >= 0;
(JICBCTR_stream += EVBBCTR_streams.dim[0].stride
) )
{
 /* line 603: */
 /* line 604: */
MICBCTR = A_VVAC(LICBCTR) ;
NICBCTR = (*(&(JICBCTR_stream->Streambuffer))) ;
if ( !(! A_VSTRUCTCOMP(NICBCTR,MICBCTR)) ) break;
OICBCTR_streamptr = (&(JICBCTR_stream->Streamptr));
 /* line 605: */
PICBCTR_currentbuffer = (&(JICBCTR_stream->Currentbuffer));
 /* line 606: */
QICBCTR_streambuffer = (&(JICBCTR_stream->Streambuffer));
 /* line 607: */
RICBCTR_buffers = (&(JICBCTR_stream->Buffers));
 /* line 609: */
SICBCTR = (*(&A_VINDEX((*RICBCTR_buffers),(*PICBCTR_currentbuffer)))) ;
UICBCTR = (&A_VINDEX((*RICBCTR_buffers),(*PICBCTR_currentbuffer))) ;
(*UICBCTR) = A_VTRIM(TICBCTR,(SICBCTR),A_VTSCRIPT(&(TICBCTR.upb),(SICBCTR).upb,1,(*OICBCTR_streamptr)));
 /* line 611: */
 /* line 612: */
 /* line 613: */
if ( GICBCTR_printstream )
{ 
VICBCTR_bytesused = 0;
 /* line 614: */
XICBCTR = (*RICBCTR_buffers).upb -1;
WICBCTR_b = (*RICBCTR_buffers).data;
for (;XICBCTR-- >= 0;
(WICBCTR_b++
) )
{
VICBCTR_bytesused+=(*WICBCTR_b).upb;
}
 /* line 615: */
 /* line 616: */
 /* line 617: */
ROAAOSF_whole( VICBCTR_bytesused, (-7), &ZICBCTR );
ROAAOSF_whole( IICBCTR_s, 0, &BJCBCTR );
A_CALLPROC(MSIACTR_list,(A_VC_PLUS(A_VC_PLUS(ZICBCTR,AJCBCTR),BJCBCTR)),(A_VC_PLUS(A_VC_PLUS(ZICBCTR,AJCBCTR),BJCBCTR),(MSIACTR_list).nonlocals));
} 
 /* line 618: */
CJCBCTR = (*PICBCTR_currentbuffer) = 1 ;
(*QICBCTR_streambuffer) = (*(&A_VINDEX((*RICBCTR_buffers),CJCBCTR)));
 /* line 619: */
(*OICBCTR_streamptr) = 0;
 /* line 620: */
 /* line 621: */
IICBCTR_s+=1;
}
 /* line 623: */
IVBBCTR_current = (*(&A_R1INDEX(EVBBCTR_streams,HICBCTR_level)));
 /* line 625: */
 /* line 629: */
 /* line 633: */
 /* line 634: */
 /* line 646: */
 /* line 649: */
 /* line 651: */
 /* line 652: */
 /* line 659: */
SJCBCTR.fn.fn_global = LJCBCTR_nextint;
SJCBCTR.nonlocals = A68_NIL;
RJCBCTR_next = (SJCBCTR);
 /* line 661: */
 /* line 662: */
 /* line 663: */
 /* line 670: */
XJCBCTR_line_start = 0;
 /* line 671: */
YJCBCTR_line_length = 0;
 /* line 672: */
ZJCBCTR_statement_number = 0;
 /* line 674: */
AKCBCTR_hundred_counter = (-1);
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
if ( (DSIACTR_greatestseverity<=2) )
{ 
 /* line 990: */
XUCBCTR.fn.fn_global = GNCBCTR_nextstreamimperative;
XUCBCTR.nonlocals = A68_NIL;
WZABCTR_translator(XUCBCTR, (&UUBBCTR_xsizes), UBPACTR_keptdecnos);
} 
 /* line 992: */
 /* line 993: */
 /* line 996: */
if ( (DSIACTR_greatestseverity<=2) )
{ 
GKMACTR_write_cfile_uname((*(&((&IYIACTR_config_info)->Nameseed))));
 /* line 1000: */
CVCBCTR = AVCBCTR ;
YUCBCTR.data[0] = A_UNITE(BVCBCTR,mode2,2,CVCBCTR);
YUCBCTR.data[1] = A_UNITE(DVCBCTR,mode4,4,EIAACTR_cnewline);
MDMACTR_writecstream(A_HISVEC(EVCBCTR,YUCBCTR,2,A68_212 ), ESLACTR_preamblestream);
 /* line 1003: */
HSPACTR_declareusedids();
 /* line 1033: */
JVCBCTR = HVCBCTR ;
FVCBCTR.data[0] = A_UNITE(IVCBCTR,mode2,2,JVCBCTR);
 /* line 1034: */
FVCBCTR.data[1] = A_UNITE(KVCBCTR,mode2,2,XQIACTR_sourcefilename);
OVCBCTR = MVCBCTR ;
FVCBCTR.data[2] = A_UNITE(NVCBCTR,mode2,2,OVCBCTR);
FVCBCTR.data[3] = A_UNITE(PVCBCTR,mode4,4,EIAACTR_cnewline);
MDMACTR_writecstream(A_HISVEC(QVCBCTR,FVCBCTR,4,A68_212 ), NSLACTR_codestream(0));
 /* line 1036: */
MDMACTR_writecstream(A_HVEC(SVCBCTR,A_UNITE(RVCBCTR,mode3,3,FSLACTR_modesstream),A68_212 ), ESLACTR_preamblestream);
 /* line 1037: */
MDMACTR_writecstream(A_HVEC(UVCBCTR,A_UNITE(TVCBCTR,mode3,3,GSLACTR_importsstream),A68_212 ), FSLACTR_modesstream);
 /* line 1038: */
WVCBCTR = KSLACTR_nonlocdecstream(0) ;
MDMACTR_writecstream(A_HVEC(XVCBCTR,A_UNITE(VVCBCTR,mode3,3,WVCBCTR),A68_212 ), GSLACTR_importsstream);
 /* line 1039: */
MDMACTR_writecstream(A_HVEC(ZVCBCTR,A_UNITE(YVCBCTR,mode3,3,HSLACTR_externstream),A68_212 ), KSLACTR_nonlocdecstream(PPLACTR_highestlevel));
 /* line 1040: */
BWCBCTR = NSLACTR_codestream(PPLACTR_highestlevel) ;
MDMACTR_writecstream(A_HVEC(CWCBCTR,A_UNITE(AWCBCTR,mode3,3,BWCBCTR),A68_212 ), HSLACTR_externstream);
 /* line 1042: */
 /* line 1043: */
 /* line 1044: */
if ( (PPLACTR_highestlevel>0) )
{ 
 /* line 1045: */
EWCBCTR = (PPLACTR_highestlevel-1);
for ( DWCBCTR_level = 0;
DWCBCTR_level <= EWCBCTR;
DWCBCTR_level += 1 )
{ 
 /* line 1046: */
GWCBCTR = KSLACTR_nonlocdecstream((DWCBCTR_level+1)) ;
MDMACTR_writecstream(A_HVEC(HWCBCTR,A_UNITE(FWCBCTR,mode3,3,GWCBCTR),A68_212 ), KSLACTR_nonlocdecstream(DWCBCTR_level));
 /* line 1047: */
 /* line 1048: */
JWCBCTR = NSLACTR_codestream(DWCBCTR_level) ;
MDMACTR_writecstream(A_HVEC(KWCBCTR,A_UNITE(IWCBCTR,mode3,3,JWCBCTR),A68_212 ), NSLACTR_codestream((DWCBCTR_level+1)));
}
 /* line 1049: */
} 
 /* line 1051: */
SDMACTR_closecoutput();
 /* line 1053: */
 /* line 1054: */
 /* line 1055: */
SMMACTR_closedownuniquenameserver();
} 
else
{ 
 /* line 1056: */
A_CALLPROC(GULACTR_purgeoutputfiles,(),((GULACTR_purgeoutputfiles).nonlocals));
} 
} 
 /* line 1058: */
RSIACTR_finishmessage();
 /* line 1060: */
 /* line 1061: */
 /* line 1062: */
if ( (DSIACTR_greatestseverity>2) )
{ 
 /* line 1064: */
 /* line 1065: */
NTIACTR_abort();
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
