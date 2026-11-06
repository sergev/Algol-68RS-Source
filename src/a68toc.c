/* UNAME:OZBBCTR */
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
extern A68_VOID  VDXACTR_imperativemnemonic(struct A68t186 ,A68_VC *);
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
extern A68_VOID  WEBBCTR_translator(struct A68t184 ,struct A68t156 *,struct A68t185 );
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
extern void TZWACTR(void);   /* mnemonics */
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
extern void OEBBCTR(void);   /* compiler */
extern void ZJAACTR(void);   /* rscompiler */
extern void THAACTR(void);   /* centities */
extern void CSCAOSF(void);   /* osif */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_274   RZBBCTR = {"$Id: a68toc.a68,v 1.2 2002-02-04 09:26:51 sian Exp $"}; 
A_GISVEC(A68_VC ,SZBBCTR,RZBBCTR,52)
static A68_156  UZBBCTR_xsizes A_UNUSED;
static A68_275  CACBCTR_unsetstream A_UNUSED;
static A68_278  DACBCTR_streams_area A_UNUSED;
static A68_279  EACBCTR_streams A_UNUSED;
static A68_275  IACBCTR_current A_UNUSED;
#define JACBCTR_fixedstreams 1
static A68_275 * KACBCTR_stream A_UNUSED;
static A68_275 * BBCBCTR_stream A_UNUSED;
static A68_VC * FBCBCTR_streambuffer A_UNUSED;
static A68_INT * GBCBCTR_strptr A_UNUSED;
static A68_INT * HBCBCTR_currentbuffer A_UNUSED;
static A68_276 * IBCBCTR_buffers A_UNUSED;
static A68_275 * JBCBCTR_curstradd A_UNUSED;
#define JCCBCTR_separatorbase 16
#define KCCBCTR_terminatorbase 32
#define LCCBCTR_semibase 48
#define MCCBCTR_loadbase 64
#define NCCBCTR_idbase 80
#define OCCBCTR_numberbase 90
#define PCCBCTR_operbase 128
#define QCCBCTR_miscellaneousbase 192
#define RCCBCTR_warnbase 208
#define SCCBCTR_iddecbase 224
#define TCCBCTR_starterbase 240
#define UCCBCTR_rangesize 64
#define VCCBCTR_subrangesize 16
#define WCCBCTR_linetype 10
#define XCCBCTR_maptype 11
#define YCCBCTR_notlastxcharstype 112
#define ZCCBCTR_lastxcharstype 113
#define ADCBCTR_xcallmoduletype 200
#define BDCBCTR_xclosuretype 203
#define CDCBCTR_xtmoduletype 204
static A68_59 * DDCBCTR_inputfile A_UNUSED;
static A68_INT  EDCBCTR_line_start A_UNUSED;
static A68_INT  FDCBCTR_line_length A_UNUSED;
static A68_BOOL  GDCBCTR_line_pending A_UNUSED;
static A68_282  LDCBCTR_flexinputline A_UNUSED;
static A68_181  HECBCTR_charset A_UNUSED;
static A68_182 * QECBCTR_c A_UNUSED;
static A68_INT  EFCBCTR_i A_UNUSED;
static A68_285   LFCBCTR = {"\0\361\362\363\364\021\022\023\024\025\026\027\030\031!\"#$\365\032\366\035%\367&\033\0'\301\034("}; 
A_GISVEC(A68_VC ,MFCBCTR,LFCBCTR,31)
static A68_VC  NFCBCTR_contval A_UNUSED;
static A68_BOOL  OFCBCTR_upped A_UNUSED;
static A68_162  PFCBCTR_lastxtmodule A_UNUSED;
static A68_BOOL  QFCBCTR_xtmodulepending A_UNUSED;
static A68_BOOL  RFCBCTR_timeschecked A_UNUSED;
static A68_INT  SFCBCTR_syntheticmoduleno A_UNUSED;
static A68_293  CNCBCTR_wasteline A_UNUSED;
static A68_INT  DNCBCTR_wastesize A_UNUSED;
static A68_BOOL  GNCBCTR_printstream A_UNUSED;
static A68_INT  HNCBCTR_level A_UNUSED;
static A68_INT  INCBCTR_s A_UNUSED;
static A68_275 * JNCBCTR_stream A_UNUSED;
static A68_INT * ONCBCTR_streamptr A_UNUSED;
static A68_INT * PNCBCTR_currentbuffer A_UNUSED;
static A68_VC * QNCBCTR_streambuffer A_UNUSED;
static A68_276 * RNCBCTR_buffers A_UNUSED;
static A68_INT  VNCBCTR_bytesused A_UNUSED;
static A68_VC * WNCBCTR_b A_UNUSED;
static A68_294   YNCBCTR = {" bytes used in stream "}; 
A_GISVEC(A68_VC ,AOCBCTR,YNCBCTR,22)
static A68_INT  DOCBCTR_upbstring A_UNUSED;
static A68_VC  EOCBCTR_string A_UNUSED;
static A68_295   GOCBCTR = {"SHELL: incomplete stream"}; 
A_GISVEC(A68_VC ,HOCBCTR,GOCBCTR,24)
static A68_86  ROCBCTR_next A_UNUSED;
static A68_INT  XOCBCTR_line_start A_UNUSED;
static A68_INT  YOCBCTR_line_length A_UNUSED;
static A68_INT  ZOCBCTR_statement_number A_UNUSED;
static A68_INT  APCBCTR_hundred_counter A_UNUSED;
static A68_297   HPCBCTR = {"shell"}; 
A_GISVEC(A68_VC ,IPCBCTR,HPCBCTR,5)
static A68_298   KPCBCTR = {"At line "}; 
static A68_299   LPCBCTR = {"..."}; 
A_GISVEC(A68_VC ,MPCBCTR,KPCBCTR,8)
A_GISVEC(A68_VC ,OPCBCTR,LPCBCTR,3)
static A68_300   SPCBCTR = {" /* line "}; 
A_GISVEC(A68_VC ,TPCBCTR,SPCBCTR,9)
static A68_40   YPCBCTR = {": */"}; 
A_GISVEC(A68_VC ,ZPCBCTR,YPCBCTR,4)
static A68_295   IQCBCTR = {"invalid stream directive"}; 
A_GISVEC(A68_VC ,JQCBCTR,IQCBCTR,24)
static A68_302   CSCBCTR = {"SHELL: no last xchars"}; 
A_GISVEC(A68_VC ,DSCBCTR,CSCBCTR,21)
static A68_297   ISCBCTR = {"]    "}; 
A_GISVEC(A68_VC ,LSCBCTR,ISCBCTR,5)
static A68_107   XWCBCTR = {"chars should be absorbed by load"}; 
A_GISVEC(A68_VC ,YWCBCTR,XWCBCTR,32)
static A68_304   ZZCBCTR = {"#include <algol68/Asupport.h>"}; 
A_GISVEC(A68_VC ,AADBCTR,ZZCBCTR,29)
static A68_306   GADBCTR = {"/* end of translation of "}; 
A_GISVEC(A68_VC ,HADBCTR,GADBCTR,25)
static A68_299   LADBCTR = {" */"}; 
A_GISVEC(A68_VC ,MADBCTR,LADBCTR,3)
static A68_INT  DBDBCTR_level A_UNUSED;
typedef struct   /* env of non-global proc */
{
A68_INT  OBCBCTR_upbbuffers;
A_PAD_INT(PAD_216)
} SBCBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  NBCBCTR_size;
A_PAD_INT(PAD_217)
} CCCBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  Ll;
A_PAD_INT(PAD_218)
} FGCBCTR_outprep;
typedef struct   /* env of non-global proc */
{
A68_222  DGCBCTR_outprep;
} WGCBCTR_putints;
typedef struct   /* env of non-global proc */
{
A68_222  DGCBCTR_outprep;
} MHCBCTR_putint;
typedef struct   /* env of non-global proc */
{
A68_222  DGCBCTR_outprep;
} YHCBCTR_putchars;
typedef struct   /* env of non-global proc */
{
A68_222  DGCBCTR_outprep;
} FICBCTR_puttruncatedchars;
typedef struct   /* env of non-global proc */
{
A68_INT  QICBCTR_upbstreams;
A_PAD_INT(PAD_219)
} UICBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_169  HMCBCTR_xbu;
} LMCBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * QQCBCTR_resultsize;
} UQCBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  MRCBCTR_newresultsize;
A_PAD_INT(PAD_220)
} QRCBCTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} UXCBCTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} IYCBCTR_generator;

A_STATIC A68_VOID  YZBBCTR_generator(A68_BOOL  XZBBCTR_anonymous, A68_276  *ReturnedValue);

A_STATIC A68_VOID  PACBCTR_generator(A68_BOOL  OACBCTR_anonymous, A68_276  *ReturnedValue);

A_STATIC A68_VOID  LBCBCTR_extendcurrent(void);

A_STATIC A68_VOID  RBCBCTR_generator(A68_BOOL  PBCBCTR_anonymous, A68_276  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BCCBCTR_generator(A68_BOOL  ZBCBCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IDCBCTR_generator(A68_BOOL  HDCBCTR_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_BOOL  PDCBCTR_input(A68_VC  Line, A68_INT * Size);

A_STATIC A68_VOID  EECBCTR_generator(A68_BOOL  DECBCTR_anonymous, A68_181  *ReturnedValue);

A_STATIC A68_VOID  VFCBCTR_output(A68_171  Op, A68_INT  Ll);

A_STATIC A68_VOID  YFCBCTR_invert(A68_VC  String);

A_STATIC A68_VOID  EGCBCTR_outprep(A68_INT  Size, A68_INT  Type, void *NonLocals);

A_STATIC A68_VOID  VGCBCTR_putints(A68_INT  K, A68_185  A, void *NonLocals);

A_STATIC A68_VOID  LHCBCTR_putint(A68_INT  Type, A68_INT  I, void *NonLocals);

A_STATIC A68_VOID  XHCBCTR_putchars(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  EICBCTR_puttruncatedchars(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  TICBCTR_generator(A68_BOOL  RICBCTR_anonymous, A68_279  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KMCBCTR_generator(A68_BOOL  IMCBCTR_anonymous, A68_185  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FOCBCTR_positioncurrent(void);

A_STATIC A68_INT  IOCBCTR_nextbyte(void);

A_STATIC A68_INT  LOCBCTR_nextint(void);

A_STATIC A68_VOID  TOCBCTR_nextstring(A68_VC  *ReturnedValue);

A_STATIC A68_INT  BPCBCTR_nexttype(void);

A_STATIC A68_VOID  NQCBCTR_nextxchars(A68_INT  Suggestedsize, A68_INT  Insertion, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  TQCBCTR_generator(A68_BOOL  RQCBCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PRCBCTR_generator(A68_BOOL  NRCBCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GSCBCTR_nextstreamimperative(A68_186  *ReturnedValue);

A_STATIC A68_VOID  TXCBCTR_generator(A68_BOOL  RXCBCTR_anonymous, A68_185  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HYCBCTR_generator(A68_BOOL  FYCBCTR_anonymous, A68_206  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RBCBCTR_generator(A68_BOOL  PBCBCTR_anonymous, A68_276  *ReturnedValue, void *NonLocals)
#define NL(x) (((SBCBCTR_generator *)NonLocals)->x)
{ 
A68_276  TBCBCTR;  /* clause result */
A68_276  UBCBCTR;  /* OPERATORS - dynamic generator */
{ 
UBCBCTR.upb = (NL(OBCBCTR_upbbuffers)+1) ;
( PBCBCTR_anonymous? A_VLOC(A68_VC ,UBCBCTR): A_VHEAP(A68_VC ,UBCBCTR) );
TBCBCTR = UBCBCTR;
} 
*ReturnedValue = (TBCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  BCCBCTR_generator(A68_BOOL  ZBCBCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((CCCBCTR_generator *)NonLocals)->x)
{ 
A68_VC  DCCBCTR;  /* clause result */
A68_VC  ECCBCTR;  /* OPERATORS - dynamic generator */
{ 
ECCBCTR.upb = NL(NBCBCTR_size) ;
( ZBCBCTR_anonymous? A_VLOC(A68_CHAR ,ECCBCTR): A_VHEAP(A68_CHAR ,ECCBCTR) );
DCCBCTR = ECCBCTR;
} 
*ReturnedValue = (DCCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  YFCBCTR_invert(A68_VC  String)
{ 
A68_CHAR * ZFCBCTR_c A_UNUSED = {0};
A68_INT  AGCBCTR;  /* forall loop counter */
A_PROC_ENTRY(invert);
 /* line 270: */
 /* line 271: */
AGCBCTR = String.upb -1;
ZFCBCTR_c = String.data;
for (;AGCBCTR-- >= 0;
(ZFCBCTR_c++
) )
{
 /* line 272: */
 /* line 273: */
if (((*A_NILCHECK(ZFCBCTR_c))>='a')&((*A_NILCHECK(ZFCBCTR_c))<='z'))
{ 
 /* line 274: */
(void)((*A_NILCHECK(ZFCBCTR_c)) = (A68_SSBITS)(((A68_INT)(unsigned char)(*A_NILCHECK(ZFCBCTR_c))-(A68_INT)(unsigned char)'a')+(A68_INT)(unsigned char)'A'));
} 
else
{ 
 /* line 275: */
if (((*A_NILCHECK(ZFCBCTR_c))>='A')&((*A_NILCHECK(ZFCBCTR_c))<='Z'))
{ 
 /* line 276: */
 /* line 277: */
(void)((*A_NILCHECK(ZFCBCTR_c)) = (A68_SSBITS)(((A68_INT)(unsigned char)(*A_NILCHECK(ZFCBCTR_c))-(A68_INT)(unsigned char)'A')+(A68_INT)(unsigned char)'a'));
} 
} 
}
A_PROC_EXIT(invert);
return;
} 
#undef NL

A_STATIC A68_VOID  EGCBCTR_outprep(A68_INT  Size, A68_INT  Type, void *NonLocals)
#define NL(x) (((FGCBCTR_outprep *)NonLocals)->x)
{ 
A68_VC  GGCBCTR;  /* OPERATORS - nil -> mode */
A68_VC  HGCBCTR;  /* == */
A68_VC  IGCBCTR;  /* OPERATORS - trim index */
A68_VC  JGCBCTR;  /* OPERATORS - trim index */
A68_VC * KGCBCTR;  /* YIELD */
A68_VC  LGCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  MGCBCTR;  /* avoid structure result */
A68_VC  NGCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  OGCBCTR;  /* avoid structure result */
A68_VC  PGCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  QGCBCTR;  /* YIELD */
A68_CHAR * RGCBCTR;  /* YIELD */
A_PROC_ENTRY(outprep);
 /* line 288: */
 /* line 289: */
{ 
 /* line 290: */
 /* line 292: */
HGCBCTR = A_VVAC(GGCBCTR) ;
if (A_VSTRUCTCOMP((*A_NILCHECK(FBCBCTR_streambuffer)),HGCBCTR))
{ 
(void)(LBCBCTR_extendcurrent());
} 
else
{ 
 /* line 293: */
 /* line 294: */
if ((Size+(*A_NILCHECK(GBCBCTR_strptr)))>(*A_NILCHECK(FBCBCTR_streambuffer)).upb)
{ 
 /* line 295: */
IGCBCTR = (*A_NILCHECK((&A_VINDEX((*A_NILCHECK(IBCBCTR_buffers)),(*A_NILCHECK(HBCBCTR_currentbuffer)))))) ;
KGCBCTR = (&A_VINDEX((*A_NILCHECK(IBCBCTR_buffers)),(*A_NILCHECK(HBCBCTR_currentbuffer)))) ;
(void)((*A_NILCHECK(KGCBCTR)) = A_VTRIM(JGCBCTR,(IGCBCTR),A_VTSCRIPT(&(JGCBCTR.upb),(IGCBCTR).upb,1,(*A_NILCHECK(GBCBCTR_strptr)))));
 /* line 296: */
 /* line 297: */
(void)(LBCBCTR_extendcurrent());
} 
} 
 /* line 299: */
 /* line 300: */
 /* line 301: */
if (HQIACTR_streamoutoption)
{ 
 /* line 302: */
ROAAOSF_whole( Type, 0, &MGCBCTR );
ROAAOSF_whole( NL(Ll), 0, &OGCBCTR );
(void)(A_CALLPROC(MSIACTR_list,(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_HVEC(LGCBCTR,'%',A68_CHAR ),MGCBCTR),A_HVEC(NGCBCTR,'(',A68_CHAR )),OGCBCTR),A_HVEC(PGCBCTR,')',A68_CHAR ))),(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_HVEC(LGCBCTR,'%',A68_CHAR ),MGCBCTR),A_HVEC(NGCBCTR,'(',A68_CHAR )),OGCBCTR),A_HVEC(PGCBCTR,')',A68_CHAR )),(MSIACTR_list).nonlocals)));
} 
 /* line 304: */
 /* line 305: */
QGCBCTR = (*A_NILCHECK(GBCBCTR_strptr))+=1 ;
RGCBCTR = (&A_VINDEX((*A_NILCHECK(FBCBCTR_streambuffer)),QGCBCTR)) ;
(*A_NILCHECK(RGCBCTR)) = (A68_SSBITS)Type;
} 
A_PROC_EXIT(outprep);
return;
} 
#undef NL

A_STATIC A68_VOID  VGCBCTR_putints(A68_INT  K, A68_185  A, void *NonLocals)
#define NL(x) (((WGCBCTR_putints *)NonLocals)->x)
{ 
A68_INT  XGCBCTR_v A_UNUSED = {0};
A68_INT * YGCBCTR;  /* forall control - []x */
A68_INT  ZGCBCTR;  /* forall loop counter */
A68_VC  AHCBCTR;  /* OPERATORS - trim index */
A68_VC  BHCBCTR;  /* OPERATORS - trim index */
A68_VC  CHCBCTR;  /* OPERATORS - trim index */
union {  /* BIOP 99 */
A68_INT   source;
A68_40   destination;
} DHCBCTR; 
A68_VC  EHCBCTR;  /* OPERATORS - istruct -> vector */
A68_40  FHCBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  GHCBCTR;  /* YIELD */
A68_VC  HHCBCTR;  /* OPERATORS - assign op */
A_PROC_ENTRY(putints);
 /* line 321: */
 /* line 322: */
{ 
(void)(A_CALLPROC(NL(DGCBCTR_outprep),(((4*A.dim[0].upb)+1), K),(((4*A.dim[0].upb)+1), K,(NL(DGCBCTR_outprep)).nonlocals)));
 /* line 323: */
 /* line 324: */
ZGCBCTR = A.dim[0].upb - A.dim[0].lwb;
YGCBCTR = A.data;
for (;ZGCBCTR-- >= 0;
(YGCBCTR += A.dim[0].stride
) )
{
XGCBCTR_v = *YGCBCTR;
BHCBCTR = A_VTRIM(AHCBCTR,((*A_NILCHECK(FBCBCTR_streambuffer))),A_VTSCRIPT(&(AHCBCTR.upb),((*A_NILCHECK(FBCBCTR_streambuffer))).upb,((*A_NILCHECK(GBCBCTR_strptr))+1),((*A_NILCHECK(FBCBCTR_streambuffer))).upb)) ;
DHCBCTR.source = XGCBCTR_v ;
FHCBCTR = (DHCBCTR.destination) ;
GHCBCTR = A_VTRIM(CHCBCTR,(BHCBCTR),A_VTSCRIPT(&(CHCBCTR.upb),(BHCBCTR).upb,1,4)) ;
HHCBCTR = A_HISVEC(EHCBCTR,FHCBCTR,4,A68_CHAR ) ;
(void)(A_VASSIGN2(HHCBCTR,GHCBCTR,A68_CHAR ));
 /* line 325: */
 /* line 326: */
(*A_NILCHECK(GBCBCTR_strptr))+=4;
}
 /* line 327: */
} 
A_PROC_EXIT(putints);
return;
} 
#undef NL

A_STATIC A68_VOID  LHCBCTR_putint(A68_INT  Type, A68_INT  I, void *NonLocals)
#define NL(x) (((MHCBCTR_putint *)NonLocals)->x)
{ 
A68_VC  NHCBCTR;  /* OPERATORS - trim index */
A68_VC  OHCBCTR;  /* OPERATORS - trim index */
A68_VC  PHCBCTR;  /* OPERATORS - trim index */
union {  /* BIOP 99 */
A68_INT   source;
A68_40   destination;
} QHCBCTR; 
A68_VC  RHCBCTR;  /* OPERATORS - istruct -> vector */
A68_40  SHCBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  THCBCTR;  /* YIELD */
A68_VC  UHCBCTR;  /* OPERATORS - assign op */
A_PROC_ENTRY(putint);
 /* line 330: */
 /* line 331: */
{ 
(void)(A_CALLPROC(NL(DGCBCTR_outprep),(5, Type),(5, Type,(NL(DGCBCTR_outprep)).nonlocals)));
 /* line 332: */
OHCBCTR = A_VTRIM(NHCBCTR,((*A_NILCHECK(FBCBCTR_streambuffer))),A_VTSCRIPT(&(NHCBCTR.upb),((*A_NILCHECK(FBCBCTR_streambuffer))).upb,((*A_NILCHECK(GBCBCTR_strptr))+1),((*A_NILCHECK(FBCBCTR_streambuffer))).upb)) ;
QHCBCTR.source = I ;
SHCBCTR = (QHCBCTR.destination) ;
THCBCTR = A_VTRIM(PHCBCTR,(OHCBCTR),A_VTSCRIPT(&(PHCBCTR.upb),(OHCBCTR).upb,1,4)) ;
UHCBCTR = A_HISVEC(RHCBCTR,SHCBCTR,4,A68_CHAR ) ;
(void)(A_VASSIGN2(UHCBCTR,THCBCTR,A68_CHAR ));
 /* line 333: */
 /* line 334: */
(*A_NILCHECK(GBCBCTR_strptr))+=4;
} 
A_PROC_EXIT(putint);
return;
} 
#undef NL

A_STATIC A68_VOID  XHCBCTR_putchars(A68_VC  S, void *NonLocals)
#define NL(x) (((YHCBCTR_putchars *)NonLocals)->x)
{ 
A68_INT  ZHCBCTR_up A_UNUSED = {0};
A68_VC  AICBCTR;  /* OPERATORS - trim index */
A68_VC  BICBCTR;  /* YIELD */
A_PROC_ENTRY(putchars);
 /* line 337: */
{ 
ZHCBCTR_up = S.upb;
 /* line 338: */
(void)(A_CALLPROC(NL(DGCBCTR_outprep),((ZHCBCTR_up+1), ZHCBCTR_up),((ZHCBCTR_up+1), ZHCBCTR_up,(NL(DGCBCTR_outprep)).nonlocals)));
 /* line 339: */
BICBCTR = A_VTRIM(AICBCTR,((*A_NILCHECK(FBCBCTR_streambuffer))),A_VTSCRIPT(&(AICBCTR.upb),((*A_NILCHECK(FBCBCTR_streambuffer))).upb,((*A_NILCHECK(GBCBCTR_strptr))+1),((*A_NILCHECK(GBCBCTR_strptr))+ZHCBCTR_up))) ;
(void)(A_VASSIGN2(S,BICBCTR,A68_CHAR ));
 /* line 340: */
 /* line 341: */
(*A_NILCHECK(GBCBCTR_strptr))+=ZHCBCTR_up;
} 
A_PROC_EXIT(putchars);
return;
} 
#undef NL

A_STATIC A68_VOID  EICBCTR_puttruncatedchars(A68_VC  S, void *NonLocals)
#define NL(x) (((FICBCTR_puttruncatedchars *)NonLocals)->x)
{ 
A68_INT  GICBCTR_up A_UNUSED = {0};
A68_VC  HICBCTR;  /* OPERATORS - trim index */
A68_VC  IICBCTR;  /* OPERATORS - trim index */
A68_VC  JICBCTR;  /* YIELD */
A68_VC  KICBCTR;  /* OPERATORS - assign op */
A_PROC_ENTRY(puttruncatedchars);
 /* line 344: */
{ 
GICBCTR_up = KMAAOSF_truncate(' ', S);
 /* line 345: */
(void)(A_CALLPROC(NL(DGCBCTR_outprep),((GICBCTR_up+1), GICBCTR_up),((GICBCTR_up+1), GICBCTR_up,(NL(DGCBCTR_outprep)).nonlocals)));
 /* line 346: */
JICBCTR = A_VTRIM(HICBCTR,((*A_NILCHECK(FBCBCTR_streambuffer))),A_VTSCRIPT(&(HICBCTR.upb),((*A_NILCHECK(FBCBCTR_streambuffer))).upb,((*A_NILCHECK(GBCBCTR_strptr))+1),((*A_NILCHECK(GBCBCTR_strptr))+GICBCTR_up))) ;
KICBCTR = A_VTRIM(IICBCTR,(S),A_VTSCRIPT(&(IICBCTR.upb),(S).upb,1,GICBCTR_up)) ;
(void)(A_VASSIGN2(KICBCTR,JICBCTR,A68_CHAR ));
 /* line 347: */
 /* line 348: */
(*A_NILCHECK(GBCBCTR_strptr))+=GICBCTR_up;
} 
A_PROC_EXIT(puttruncatedchars);
return;
} 
#undef NL

A_STATIC A68_VOID  TICBCTR_generator(A68_BOOL  RICBCTR_anonymous, A68_279  *ReturnedValue, void *NonLocals)
#define NL(x) (((UICBCTR_generator *)NonLocals)->x)
{ 
A68_279  VICBCTR;  /* clause result */
A68_279  WICBCTR;  /* OPERATORS - dynamic generator */
{ 
WICBCTR.dim[0].upb = (NL(QICBCTR_upbstreams)+NL(QICBCTR_upbstreams)) ;
WICBCTR.dim[0].lwb = 0 ;
(void)A_1INITSTRIDES(WICBCTR) ;
( RICBCTR_anonymous? A_R1LOC(A68_275 ,WICBCTR): A_R1HEAP(A68_275 ,WICBCTR) );
VICBCTR = WICBCTR;
} 
*ReturnedValue = (VICBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  KMCBCTR_generator(A68_BOOL  IMCBCTR_anonymous, A68_185  *ReturnedValue, void *NonLocals)
#define NL(x) (((LMCBCTR_generator *)NonLocals)->x)
{ 
A68_185  MMCBCTR;  /* clause result */
A68_185  NMCBCTR;  /* OPERATORS - dynamic generator */
{ 
NMCBCTR.dim[0].upb = NL(HMCBCTR_xbu).Decnos.upb ;
NMCBCTR.dim[0].lwb = 1 ;
(void)A_1INITSTRIDES(NMCBCTR) ;
( IMCBCTR_anonymous? A_R1LOC(A68_INT ,NMCBCTR): A_R1HEAP(A68_INT ,NMCBCTR) );
MMCBCTR = NMCBCTR;
} 
*ReturnedValue = (MMCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  TQCBCTR_generator(A68_BOOL  RQCBCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((UQCBCTR_generator *)NonLocals)->x)
{ 
A68_VC  VQCBCTR;  /* clause result */
A68_VC  WQCBCTR;  /* OPERATORS - dynamic generator */
{ 
WQCBCTR.upb = (*A_NILCHECK(NL(QQCBCTR_resultsize))) ;
( RQCBCTR_anonymous? A_VLOC(A68_CHAR ,WQCBCTR): A_VHEAP(A68_CHAR ,WQCBCTR) );
VQCBCTR = WQCBCTR;
} 
*ReturnedValue = (VQCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  PRCBCTR_generator(A68_BOOL  NRCBCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((QRCBCTR_generator *)NonLocals)->x)
{ 
A68_VC  RRCBCTR;  /* clause result */
A68_VC  SRCBCTR;  /* OPERATORS - dynamic generator */
{ 
SRCBCTR.upb = NL(MRCBCTR_newresultsize) ;
( NRCBCTR_anonymous? A_VLOC(A68_CHAR ,SRCBCTR): A_VHEAP(A68_CHAR ,SRCBCTR) );
RRCBCTR = SRCBCTR;
} 
*ReturnedValue = (RRCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  TXCBCTR_generator(A68_BOOL  RXCBCTR_anonymous, A68_185  *ReturnedValue, void *NonLocals)
#define NL(x) (((UXCBCTR_generator *)NonLocals)->x)
{ 
A68_185  VXCBCTR;  /* clause result */
A68_185  WXCBCTR;  /* OPERATORS - dynamic generator */
{ 
WXCBCTR.dim[0].upb = A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)) ;
WXCBCTR.dim[0].lwb = 1 ;
(void)A_1INITSTRIDES(WXCBCTR) ;
( RXCBCTR_anonymous? A_R1LOC(A68_INT ,WXCBCTR): A_R1HEAP(A68_INT ,WXCBCTR) );
VXCBCTR = WXCBCTR;
} 
*ReturnedValue = (VXCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HYCBCTR_generator(A68_BOOL  FYCBCTR_anonymous, A68_206  *ReturnedValue, void *NonLocals)
#define NL(x) (((IYCBCTR_generator *)NonLocals)->x)
{ 
A68_206  JYCBCTR;  /* clause result */
A68_206  KYCBCTR;  /* OPERATORS - dynamic generator */
{ 
KYCBCTR.dim[0].upb = A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)) ;
KYCBCTR.dim[0].lwb = 1 ;
(void)A_1INITSTRIDES(KYCBCTR) ;
( FYCBCTR_anonymous? A_R1LOC(A68_VC ,KYCBCTR): A_R1HEAP(A68_VC ,KYCBCTR) );
JYCBCTR = KYCBCTR;
} 
*ReturnedValue = (JYCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  YZBBCTR_generator(A68_BOOL  XZBBCTR_anonymous, A68_276  *ReturnedValue)
{ 
A68_276  ZZBBCTR;  /* clause result */
A68_276  AACBCTR;  /* OPERATORS - dynamic generator */
{ 
AACBCTR.upb = 0 ;
( XZBBCTR_anonymous? A_VLOC(A68_VC ,AACBCTR): A_VHEAP(A68_VC ,AACBCTR) );
ZZBBCTR = AACBCTR;
} 
*ReturnedValue = (ZZBBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  PACBCTR_generator(A68_BOOL  OACBCTR_anonymous, A68_276  *ReturnedValue)
{ 
A68_276  QACBCTR;  /* clause result */
A68_276  RACBCTR;  /* OPERATORS - dynamic generator */
{ 
RACBCTR.upb = 1 ;
( OACBCTR_anonymous? A_VLOC(A68_VC ,RACBCTR): A_VHEAP(A68_VC ,RACBCTR) );
QACBCTR = RACBCTR;
} 
*ReturnedValue = (QACBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  LBCBCTR_extendcurrent(void)
{ 
A68_INT  MBCBCTR;  /* clause result */
A68_INT  NBCBCTR_size A_UNUSED = {0};
A68_INT  OBCBCTR_upbbuffers A_UNUSED = {0};
A68_277  QBCBCTR_generator;   /* proc value of non-global proc */
A68_276  VBCBCTR;  /* avoid structure result */
A68_276  WBCBCTR_new A_UNUSED = {0};
A68_276  XBCBCTR;  /* OPERATORS - trim index */
A68_276  YBCBCTR;  /* YIELD */
A68_103  ACCBCTR_generator;   /* proc value of non-global proc */
A68_INT  FCCBCTR;  /* YIELD */
A68_VC  GCCBCTR;  /* avoid structure result */
A68_VC * HCCBCTR;  /* YIELD */
A68_276  ICCBCTR;  /* clause result */
A_PROC_ENTRY(extendcurrent);
{ 
if ((*A_NILCHECK(HBCBCTR_currentbuffer))==0)
{ 
MBCBCTR = 1000;
} 
else
{ 
MBCBCTR = 10000;
} 
NBCBCTR_size = MBCBCTR;
 /* line 101: */
 /* line 102: */
{ 
OBCBCTR_upbbuffers = (*A_NILCHECK(IBCBCTR_buffers)).upb;
 /* line 103: */
A_CLOSURE( QBCBCTR_generator, RBCBCTR_generator, SBCBCTR_generator );
(( SBCBCTR_generator * ) ( QBCBCTR_generator.nonlocals )) -> OBCBCTR_upbbuffers = OBCBCTR_upbbuffers;
A_CALLPROC(QBCBCTR_generator,(A68_FALSE, &VBCBCTR),(A68_FALSE, &VBCBCTR,(QBCBCTR_generator).nonlocals));
WBCBCTR_new = VBCBCTR;
 /* line 104: */
YBCBCTR = A_VTRIM(XBCBCTR,(WBCBCTR_new),A_VTSCRIPT(&(XBCBCTR.upb),(WBCBCTR_new).upb,1,OBCBCTR_upbbuffers)) ;
(void)(A_VASSIGN2((*A_NILCHECK(IBCBCTR_buffers)),YBCBCTR,A68_VC ));
 /* line 105: */
 /* line 106: */
 /* line 107: */
A_CLOSURE( ACCBCTR_generator, BCCBCTR_generator, CCCBCTR_generator );
(( CCCBCTR_generator * ) ( ACCBCTR_generator.nonlocals )) -> NBCBCTR_size = NBCBCTR_size;
FCCBCTR = (*A_NILCHECK(HBCBCTR_currentbuffer)) = (OBCBCTR_upbbuffers+1) ;
A_CALLPROC(ACCBCTR_generator,(A68_FALSE, &GCCBCTR),(A68_FALSE, &GCCBCTR,(ACCBCTR_generator).nonlocals));
HCCBCTR = (&A_VINDEX(WBCBCTR_new,FCCBCTR)) ;
(*A_NILCHECK(FBCBCTR_streambuffer)) = (*A_NILCHECK(HCCBCTR)) = GCCBCTR;
 /* line 108: */
(*A_NILCHECK(GBCBCTR_strptr)) = 0;
 /* line 109: */
 /* line 110: */
 /* line 111: */
ICCBCTR = WBCBCTR_new;
} 
(*A_NILCHECK(IBCBCTR_buffers)) = ICCBCTR;
} 
A_PROC_EXIT(extendcurrent);
return;
} 
#undef NL

A_STATIC A68_VOID  IDCBCTR_generator(A68_BOOL  HDCBCTR_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  JDCBCTR;  /* clause result */
A68_VC  KDCBCTR;  /* OPERATORS - dynamic generator */
{ 
KDCBCTR.upb = 0 ;
( HDCBCTR_anonymous? A_VLOC(A68_CHAR ,KDCBCTR): A_VHEAP(A68_CHAR ,KDCBCTR) );
JDCBCTR = KDCBCTR;
} 
*ReturnedValue = (JDCBCTR);
return;
} 
#undef NL

A_STATIC A68_BOOL  PDCBCTR_input(A68_VC  Line, A68_INT * Size)
{ 
A68_60  QDCBCTR;  /* avoid structure result */
A68_60  RDCBCTR_read_status A_UNUSED = {0};
A68_BOOL  SDCBCTR;  /* optbool result */
A68_BOOL  TDCBCTR;  /* clause result */
A68_BOOL  UDCBCTR;  /* clause result */
A68_INT  VDCBCTR;  /* YIELD */
A68_CHAR * WDCBCTR_first A_UNUSED = {0};
A68_BOOL  XDCBCTR;  /* optbool result */
A68_BOOL  YDCBCTR;  /* clause result */
A68_INT  ZDCBCTR;  /* YIELD */
A68_CHAR * AECBCTR_second A_UNUSED = {0};
A68_BOOL  BECBCTR;  /* clause result */
A68_INT  CECBCTR;  /* YIELD */
A_PROC_ENTRY(input);
 /* line 159: */
 /* line 160: */
{ 
DXBAOSF_read_line( DDCBCTR_inputfile, Line, Size, RIBAOSF_ignore_msg, &QDCBCTR );
RDCBCTR_read_status = QDCBCTR;
 /* line 161: */
SDCBCTR = AVBAOSF_(RDCBCTR_read_status, UUBAOSF_io_error);
if ( ! SDCBCTR )
{ /* line 162: */
SDCBCTR = AVBAOSF_(RDCBCTR_read_status, RUBAOSF_io_eof);
}
 /* line 163: */
TDCBCTR = SDCBCTR;
if (TDCBCTR)
{ 
 /* line 164: */
 /* line 165: */
UDCBCTR = A68_FALSE;
} 
else
{ 
XRIACTR_linenumber+=1;
 /* line 166: */
 /* line 167: */
 /* line 168: */
 /* line 169: */
if (AVBAOSF_(RDCBCTR_read_status, XUBAOSF_io_no_newline))
{ 
 /* line 170: */
(void)(PXIACTR_error(253));
} 
 /* line 172: */
GDCBCTR_line_pending = A68_TRUE;
 /* line 176: */
 /* line 177: */
 /* line 179: */
if ((*A_NILCHECK(Size))<2)
{ 
 /* line 180: */
/*SKIP*/;
} 
else
{ 
{ 
VDCBCTR = 1 ;
WDCBCTR_first = (&A_VINDEX(Line,VDCBCTR));
 /* line 181: */
XDCBCTR = ((*A_NILCHECK(WDCBCTR_first))!='*');
if ( XDCBCTR )
{ /* line 182: */
XDCBCTR = ((*A_NILCHECK(WDCBCTR_first))!='%');
}
 /* line 184: */
YDCBCTR = XDCBCTR;
if (YDCBCTR)
{ 
 /* line 191: */
/*SKIP*/;
} 
else
{ 
{ 
ZDCBCTR = 2 ;
AECBCTR_second = (&A_VINDEX(Line,ZDCBCTR));
 /* line 192: */
 /* line 193: */
 /* line 194: */
CECBCTR = (A68_INT)(unsigned char)(*A_NILCHECK(AECBCTR_second)) ;
BECBCTR = ((*A_NILCHECK((&A_R1INDEX(KRIACTR_stars,CECBCTR))))==((*A_NILCHECK(WDCBCTR_first))=='*'));
if (BECBCTR)
{ 
 /* line 195: */
 /* line 196: */
(*A_NILCHECK(WDCBCTR_first)) = (*A_NILCHECK(AECBCTR_second)) = ' ';
} 
else
{ 
 /* line 197: */
(*A_NILCHECK(Size)) = 0;
} 
} 
} 
} 
} 
 /* line 199: */
 /* line 200: */
UDCBCTR = A68_TRUE;
} 
} 
A_PROC_EXIT(input);
return( UDCBCTR );
} 
#undef NL

A_STATIC A68_VOID  EECBCTR_generator(A68_BOOL  DECBCTR_anonymous, A68_181  *ReturnedValue)
{ 
A68_181  FECBCTR;  /* clause result */
A68_181  GECBCTR;  /* OPERATORS - dynamic generator */
{ 
GECBCTR.dim[0].upb = 511 ;
GECBCTR.dim[0].lwb = 0 ;
(void)A_1INITSTRIDES(GECBCTR) ;
( DECBCTR_anonymous? A_R1LOC(A68_182 ,GECBCTR): A_R1HEAP(A68_182 ,GECBCTR) );
FECBCTR = GECBCTR;
} 
*ReturnedValue = (FECBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  VFCBCTR_output(A68_171  Op, A68_INT  Ll)
{ 
A68_222  DGCBCTR_outprep;   /* proc value of non-global proc */
A68_287  UGCBCTR_putints;   /* proc value of non-global proc */
A68_222  KHCBCTR_putint;   /* proc value of non-global proc */
A68_98  WHCBCTR_putchars;   /* proc value of non-global proc */
A68_98  DICBCTR_puttruncatedchars;   /* proc value of non-global proc */
A68_171  LICBCTR;  /* united object - for case conformity */
A68_155  MICBCTR_c A_UNUSED = {0};
A68_BOOL  NICBCTR;  /* clause result */
A68_288  OICBCTR;  /* collateral clause result */
A68_185  PICBCTR;  /* OPERATORS - istruct to row */
A68_INT  QICBCTR_upbstreams A_UNUSED = {0};
A68_289  SICBCTR_generator;   /* proc value of non-global proc */
A68_279  XICBCTR;  /* avoid structure result */
A68_279  YICBCTR_newstreams A_UNUSED = {0};
A68_275 * ZICBCTR_stream A_UNUSED = {0};
A68_279  AJCBCTR;  /* OPERATORS - trim index */
A68_279  BJCBCTR;  /* forall yield */
A68_INT  CJCBCTR;  /* forall loop counter */
A68_279  DJCBCTR;  /* OPERATORS - trim index */
A68_279  EJCBCTR;  /* YIELD */
A68_171  FJCBCTR;  /* united object - for case conformity */
A68_150  GJCBCTR_e A_UNUSED = {0};
A68_151  HJCBCTR_xop A_UNUSED = {0};
A68_290  IJCBCTR;  /* collateral clause result */
A68_185  JJCBCTR;  /* OPERATORS - istruct to row */
A68_155  KJCBCTR_c A_UNUSED = {0};
A68_288  LJCBCTR;  /* collateral clause result */
A68_185  MJCBCTR;  /* OPERATORS - istruct to row */
A68_INT  NJCBCTR;  /* YIELD */
A68_INT  OJCBCTR_fnval A_UNUSED = {0};
A68_288  PJCBCTR;  /* collateral clause result */
A68_185  QJCBCTR;  /* OPERATORS - istruct to row */
A68_INT  RJCBCTR_id A_UNUSED = {0};
A68_140  SJCBCTR_number A_UNUSED = {0};
A68_INT  TJCBCTR_type A_UNUSED = {0};
A68_INT  UJCBCTR_exp A_UNUSED = {0};
A68_CHAR * VJCBCTR_c A_UNUSED = {0};
A68_VC  WJCBCTR;  /* forall yield */
A68_INT  XJCBCTR;  /* forall loop counter */
A68_BOOL  YJCBCTR;  /* optbool result */
A68_VC  ZJCBCTR;  /* OPERATORS - trim index */
A68_VC  AKCBCTR;  /* OPERATORS - trim index */
A68_VC  BKCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  CKCBCTR;  /* OPERATORS - trim index */
A68_VC  DKCBCTR;  /* OPERATORS - trim index */
A68_154  EKCBCTR_xw A_UNUSED = {0};
A68_147  FKCBCTR_idd A_UNUSED = {0};
A68_290  GKCBCTR;  /* collateral clause result */
A68_185  HKCBCTR;  /* OPERATORS - istruct to row */
A68_VC  IKCBCTR;  /* OPERATORS - istruct -> vector */
A68_107  JKCBCTR;  /* OPERATORS - istruct -> vector */
A68_142  KKCBCTR_chars A_UNUSED = {0};
A68_INT  LKCBCTR;  /* clause result */
A68_VC  MKCBCTR;  /* clause result */
A68_VC  NKCBCTR;  /* avoid structure result */
A68_VC  OKCBCTR_string A_UNUSED = {0};
A68_143  PKCBCTR_str A_UNUSED = {0};
A68_124 * QKCBCTR_rd A_UNUSED = {0};
A68_291  RKCBCTR;  /* collateral clause result */
A68_185  SKCBCTR;  /* OPERATORS - istruct to row */
A68_VC  TKCBCTR;  /* OPERATORS - istruct -> vector */
A68_107  UKCBCTR;  /* OPERATORS - istruct -> vector */
A68_146  VKCBCTR_nse A_UNUSED = {0};
A68_BOOL  WKCBCTR_b A_UNUSED = {0};
A68_138  XKCBCTR_generator A_UNUSED = {0};
A68_290  YKCBCTR;  /* collateral clause result */
A68_185  ZKCBCTR;  /* OPERATORS - istruct to row */
A68_141  ALCBCTR_al A_UNUSED = {0};
A68_139  BLCBCTR_c A_UNUSED = {0};
A68_290  CLCBCTR;  /* collateral clause result */
A68_185  DLCBCTR;  /* OPERATORS - istruct to row */
A68_148  ELCBCTR_xl A_UNUSED = {0};
A68_125 * FLCBCTR_rl A_UNUSED = {0};
A68_VC  GLCBCTR;  /* OPERATORS - istruct -> vector */
A68_107  HLCBCTR;  /* OPERATORS - istruct -> vector */
A68_290  ILCBCTR;  /* collateral clause result */
A68_185  JLCBCTR;  /* OPERATORS - istruct to row */
A68_125 * KLCBCTR_lb A_UNUSED = {0};
A68_156  LLCBCTR_xs A_UNUSED = {0};
A68_172  MLCBCTR_mdes A_UNUSED = {0};
A68_249  NLCBCTR;  /* OPERATORS - vector -> row */
A68_163  OLCBCTR_xtd A_UNUSED = {0};
A68_162  PLCBCTR_xtm A_UNUSED = {0};
A68_290  QLCBCTR;  /* collateral clause result */
A68_185  RLCBCTR;  /* OPERATORS - istruct to row */
A68_VC  SLCBCTR;  /* OPERATORS - istruct -> vector */
A68_107  TLCBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  ULCBCTR;  /* OPERATORS - istruct -> vector */
A68_105  VLCBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  WLCBCTR;  /* OPERATORS - istruct -> vector */
A68_105  XLCBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  YLCBCTR;  /* OPERATORS - istruct -> vector */
A68_105  ZLCBCTR;  /* OPERATORS - istruct -> vector */
A68_128 * AMCBCTR_spec A_UNUSED = {0};
A68_127  BMCBCTR;  /* forall yield */
A68_INT  CMCBCTR;  /* forall loop counter */
A68_VC  DMCBCTR;  /* OPERATORS - istruct -> vector */
A68_105  EMCBCTR;  /* OPERATORS - istruct -> vector */
A68_160  FMCBCTR_open A_UNUSED = {0};
A68_157  GMCBCTR_xm A_UNUSED = {0};
A68_169  HMCBCTR_xbu A_UNUSED = {0};
A68_292  JMCBCTR_generator;   /* proc value of non-global proc */
A68_185  OMCBCTR;  /* avoid structure result */
A68_92  PMCBCTR;  /* YIELD */
A68_185  QMCBCTR;  /* OPERATORS - vector -> row */
A68_185  RMCBCTR;  /* OPERATORS - assign op */
A68_129  SMCBCTR_s A_UNUSED = {0};
A_PROC_ENTRY(output);
 /* line 263: */
 /* line 264: */
 /* line 266: */
if (DSIACTR_greatestseverity<=2)
{ 
 /* line 279: */
A_CLOSURE( DGCBCTR_outprep, EGCBCTR_outprep, FGCBCTR_outprep );
(( FGCBCTR_outprep * ) ( DGCBCTR_outprep.nonlocals )) -> Ll = Ll;
 /* line 320: */
A_CLOSURE( UGCBCTR_putints, VGCBCTR_putints, WGCBCTR_putints );
(( WGCBCTR_putints * ) ( UGCBCTR_putints.nonlocals )) -> DGCBCTR_outprep = DGCBCTR_outprep;
 /* line 329: */
A_CLOSURE( KHCBCTR_putint, LHCBCTR_putint, MHCBCTR_putint );
(( MHCBCTR_putint * ) ( KHCBCTR_putint.nonlocals )) -> DGCBCTR_outprep = DGCBCTR_outprep;
 /* line 336: */
A_CLOSURE( WHCBCTR_putchars, XHCBCTR_putchars, YHCBCTR_putchars );
(( YHCBCTR_putchars * ) ( WHCBCTR_putchars.nonlocals )) -> DGCBCTR_outprep = DGCBCTR_outprep;
 /* line 343: */
A_CLOSURE( DICBCTR_puttruncatedchars, EICBCTR_puttruncatedchars, FICBCTR_puttruncatedchars );
(( FICBCTR_puttruncatedchars * ) ( DICBCTR_puttruncatedchars.nonlocals )) -> DGCBCTR_outprep = DGCBCTR_outprep;
 /* line 352: */
 /* line 353: */
 /* line 354: */
if (GDCBCTR_line_pending)
{ 
 /* line 355: */
LICBCTR = Op ;
switch ( LICBCTR.mode )
{ 
case 17: /* STRUCT(INT,INT,BITS,INT)  */
MICBCTR_c = (LICBCTR.data.mode17);
 /* line 356: */
NICBCTR = (MICBCTR_c.Fn!=25);
break;
default: 
 /* line 357: */
 /* line 358: */
 /* line 360: */
NICBCTR = A68_TRUE;
break;
} 
if (NICBCTR)
{ 
 /* line 361: */
OICBCTR.data[0] = XRIACTR_linenumber;
OICBCTR.data[1] = EDCBCTR_line_start;
 /* line 362: */
OICBCTR.data[2] = FDCBCTR_line_length;
(void)(A_CALLPROC(UGCBCTR_putints,(WCCBCTR_linetype, A_HIS1ARR(PICBCTR,OICBCTR,A68_INT ,3)),(WCCBCTR_linetype, A_HIS1ARR(PICBCTR,OICBCTR,A68_INT ,3),(UGCBCTR_putints).nonlocals)));
 /* line 363: */
 /* line 364: */
 /* line 365: */
GDCBCTR_line_pending = A68_FALSE;
} 
} 
 /* line 367: */
 /* line 368: */
if (OFCBCTR_upped)
{ 
(void)(A_CALLPROC(DGCBCTR_outprep,(1, 2),(1, 2,(DGCBCTR_outprep).nonlocals)));
 /* line 369: */
 /* line 370: */
OFCBCTR_upped = A68_FALSE;
} 
 /* line 372: */
(*A_NILCHECK(JBCBCTR_curstradd)) = IACBCTR_current;
 /* line 374: */
for ( ;; )
{ 
 /* line 375: */
if ( !((Ll>EACBCTR_streams.dim[0].upb)) ) break;
QICBCTR_upbstreams = EACBCTR_streams.dim[0].upb;
 /* line 376: */
A_CLOSURE( SICBCTR_generator, TICBCTR_generator, UICBCTR_generator );
(( UICBCTR_generator * ) ( SICBCTR_generator.nonlocals )) -> QICBCTR_upbstreams = QICBCTR_upbstreams;
A_CALLPROC(SICBCTR_generator,(A68_FALSE, &XICBCTR),(A68_FALSE, &XICBCTR,(SICBCTR_generator).nonlocals));
YICBCTR_newstreams = XICBCTR;
 /* line 377: */
 /* line 378: */
BJCBCTR = A_R1TRIM(AJCBCTR,(YICBCTR_newstreams),A_RTSCRIPT(&(AJCBCTR.dim[0]),&((YICBCTR_newstreams).dim[0]),(QICBCTR_upbstreams+1),(YICBCTR_newstreams).dim[0].upb,1)) ;
CJCBCTR = BJCBCTR.dim[0].upb - BJCBCTR.dim[0].lwb;
ZICBCTR_stream = BJCBCTR.data;
for (;CJCBCTR-- >= 0;
(ZICBCTR_stream += BJCBCTR.dim[0].stride
) )
{
 /* line 379: */
(*A_NILCHECK(ZICBCTR_stream)) = CACBCTR_unsetstream;
}
 /* line 380: */
EJCBCTR = A_R1TRIM(DJCBCTR,(YICBCTR_newstreams),A_RTSCRIPT(&(DJCBCTR.dim[0]),&((YICBCTR_newstreams).dim[0]),(YICBCTR_newstreams).dim[0].lwb,QICBCTR_upbstreams,0)) ;
(void)(A_R1ASSIGN2(EACBCTR_streams,EJCBCTR,A68_275 ));
 /* line 381: */
 /* line 382: */
EACBCTR_streams = YICBCTR_newstreams;
}
 /* line 383: */
(void)(IACBCTR_current = (*A_NILCHECK((JBCBCTR_curstradd = (&A_R1INDEX(EACBCTR_streams,Ll))))));
 /* line 385: */
 /* line 386: */
FJCBCTR = Op ;
switch ( FJCBCTR.mode )
{ 
case 1: /* STRUCT(BOOL)  */
GJCBCTR_e = (FJCBCTR.data.mode1);
 /* line 387: */
 /* line 388: */
if (!(OFCBCTR_upped = GJCBCTR_e.Up))
{ 
 /* line 389: */
 /* line 390: */
(void)(A_CALLPROC(DGCBCTR_outprep,(1, 1),(1, 1,(DGCBCTR_outprep).nonlocals)));
} 
break;
case 14: /* STRUCT(INT,INT,INT)  */
HJCBCTR_xop = (FJCBCTR.data.mode14);
 /* line 391: */
 /* line 392: */
if (HJCBCTR_xop.Fn==LGAACTR_voidfn)
{ 
 /* line 393: */
(void)(A_CALLPROC(DGCBCTR_outprep,(1, 202),(1, 202,(DGCBCTR_outprep).nonlocals)));
} 
else
{ 
IJCBCTR.data[0] = HJCBCTR_xop.M;
IJCBCTR.data[1] = HJCBCTR_xop.Param;
 /* line 394: */
 /* line 395: */
(void)(A_CALLPROC(UGCBCTR_putints,((128+HJCBCTR_xop.Fn), A_HIS1ARR(JJCBCTR,IJCBCTR,A68_INT ,2)),((128+HJCBCTR_xop.Fn), A_HIS1ARR(JJCBCTR,IJCBCTR,A68_INT ,2),(UGCBCTR_putints).nonlocals)));
} 
break;
case 17: /* STRUCT(INT,INT,BITS,INT)  */
KJCBCTR_c = (FJCBCTR.data.mode17);
 /* line 396: */
{ 
 /* line 397: */
if (KJCBCTR_c.Fn==25)
{ 
(void)(A_CALLPROC(DGCBCTR_outprep,(1, (48+((A68_INT )KJCBCTR_c.Props/2048))),(1, (48+((A68_INT )KJCBCTR_c.Props/2048)),(DGCBCTR_outprep).nonlocals)));
 /* line 398: */
 /* line 399: */
 /* line 400: */
if (GDCBCTR_line_pending)
{ 
 /* line 401: */
LJCBCTR.data[0] = XRIACTR_linenumber;
LJCBCTR.data[1] = EDCBCTR_line_start;
 /* line 402: */
LJCBCTR.data[2] = FDCBCTR_line_length;
(void)(A_CALLPROC(UGCBCTR_putints,(WCCBCTR_linetype, A_HIS1ARR(MJCBCTR,LJCBCTR,A68_INT ,3)),(WCCBCTR_linetype, A_HIS1ARR(MJCBCTR,LJCBCTR,A68_INT ,3),(UGCBCTR_putints).nonlocals)));
 /* line 403: */
 /* line 404: */
 /* line 405: */
 /* line 406: */
GDCBCTR_line_pending = A68_FALSE;
} 
} 
else
{ 
NJCBCTR = (KJCBCTR_c.Fn+1) ;
OJCBCTR_fnval = (A68_INT)(unsigned char)A_VINDEX(NFCBCTR_contval,NJCBCTR);
 /* line 407: */
PJCBCTR.data[0] = KJCBCTR_c.M;
PJCBCTR.data[1] = (A68_INT )KJCBCTR_c.Props;
PJCBCTR.data[2] = KJCBCTR_c.Param;
 /* line 408: */
 /* line 409: */
 /* line 410: */
(void)(A_CALLPROC(UGCBCTR_putints,(OJCBCTR_fnval, A_HIS1ARR(QJCBCTR,PJCBCTR,A68_INT ,3)),(OJCBCTR_fnval, A_HIS1ARR(QJCBCTR,PJCBCTR,A68_INT ,3),(UGCBCTR_putints).nonlocals)));
} 
} 
break;
case 3: /* INT */
RJCBCTR_id = (FJCBCTR.data.mode3);
 /* line 411: */
 /* line 412: */
if (RJCBCTR_id<0)
{ 
 /* line 413: */
(void)(A_CALLPROC(KHCBCTR_putint,(78, RJCBCTR_id),(78, RJCBCTR_id,(KHCBCTR_putint).nonlocals)));
} 
else
{ 
 /* line 414: */
 /* line 415: */
(void)(A_CALLPROC(KHCBCTR_putint,(80, RJCBCTR_id),(80, RJCBCTR_id,(KHCBCTR_putint).nonlocals)));
} 
break;
case 9: /* STRUCT(INT,REF MODE26)  */
SJCBCTR_number = (FJCBCTR.data.mode9);
 /* line 416: */
 /* line 417: */
{ 
TJCBCTR_type = (SJCBCTR_number.Mode+OCCBCTR_numberbase);
 /* line 418: */
(void)(A_CALLPROC(DGCBCTR_outprep,(1, TJCBCTR_type),(1, TJCBCTR_type,(DGCBCTR_outprep).nonlocals)));
 /* line 423: */
UJCBCTR_exp = (-1);
 /* line 424: */
WJCBCTR = SJCBCTR_number.Nu ;
XJCBCTR = WJCBCTR.upb -1;
VJCBCTR_c = WJCBCTR.data;
for (;XJCBCTR-- >= 0;
(VJCBCTR_c++
) )
{
 /* line 425: */
if ( !(((UJCBCTR_exp-=1)<0)) ) break;
YJCBCTR = ((*A_NILCHECK(VJCBCTR_c))=='+');
if ( ! YJCBCTR )
{YJCBCTR = ((*A_NILCHECK(VJCBCTR_c))=='-');
}
if (YJCBCTR)
{ 
(void)(UJCBCTR_exp = (-UJCBCTR_exp));
} 
}
 /* line 426: */
 /* line 427: */
 /* line 428: */
if (UJCBCTR_exp<0)
{ 
 /* line 429: */
 /* line 430: */
(void)(A_CALLPROC(WHCBCTR_putchars,(SJCBCTR_number.Nu),(SJCBCTR_number.Nu,(WHCBCTR_putchars).nonlocals)));
} 
else
{ 
 /* line 431: */
 /* line 432: */
 /* line 433: */
 /* line 434: */
ZJCBCTR = SJCBCTR_number.Nu ;
CKCBCTR = SJCBCTR_number.Nu ;
(void)(A_CALLPROC(WHCBCTR_putchars,(A_VC_PLUS(A_VC_PLUS(A_VTRIM(AKCBCTR,(ZJCBCTR),A_VTSCRIPT(&(AKCBCTR.upb),(ZJCBCTR).upb,1,(UJCBCTR_exp-1))),A_HVEC(BKCBCTR,'e',A68_CHAR )),A_VTRIM(DKCBCTR,(CKCBCTR),A_VTSCRIPT(&(DKCBCTR.upb),(CKCBCTR).upb,UJCBCTR_exp,(CKCBCTR).upb)))),(A_VC_PLUS(A_VC_PLUS(A_VTRIM(AKCBCTR,(ZJCBCTR),A_VTSCRIPT(&(AKCBCTR.upb),(ZJCBCTR).upb,1,(UJCBCTR_exp-1))),A_HVEC(BKCBCTR,'e',A68_CHAR )),A_VTRIM(DKCBCTR,(CKCBCTR),A_VTSCRIPT(&(DKCBCTR.upb),(CKCBCTR).upb,UJCBCTR_exp,(CKCBCTR).upb))),(WHCBCTR_putchars).nonlocals)));
} 
} 
break;
case 16: /* STRUCT(INT)  */
EKCBCTR_xw = (FJCBCTR.data.mode16);
 /* line 435: */
 /* line 436: */
if (EKCBCTR_xw.W<=3)
{ 
 /* line 437: */
 /* line 438: */
(void)(A_CALLPROC(DGCBCTR_outprep,(1, (208+EKCBCTR_xw.W)),(1, (208+EKCBCTR_xw.W),(DGCBCTR_outprep).nonlocals)));
} 
break;
case 12: /* STRUCT(INT,REF MODE123)  */
FKCBCTR_idd = (FJCBCTR.data.mode12);
 /* line 439: */
 /* line 441: */
{ 
 /* line 442: */
GKCBCTR.data[0] = (*A_NILCHECK((&(A_NILCHECK(FKCBCTR_idd.Iddec)->Mode))));
 /* line 443: */
GKCBCTR.data[1] = (*A_NILCHECK((&(A_NILCHECK(FKCBCTR_idd.Iddec)->Decno))));
(void)(A_CALLPROC(UGCBCTR_putints,((SCCBCTR_iddecbase+FKCBCTR_idd.Type), A_HIS1ARR(HKCBCTR,GKCBCTR,A68_INT ,2)),((SCCBCTR_iddecbase+FKCBCTR_idd.Type), A_HIS1ARR(HKCBCTR,GKCBCTR,A68_INT ,2),(UGCBCTR_putints).nonlocals)));
 /* line 444: */
 /* line 445: */
 /* line 446: */
JKCBCTR = (*A_NILCHECK((&(A_NILCHECK(FKCBCTR_idd.Iddec)->Name)))) ;
(void)(A_CALLPROC(DICBCTR_puttruncatedchars,(A_HISVEC(IKCBCTR,JKCBCTR,32,A68_CHAR )),(A_HISVEC(IKCBCTR,JKCBCTR,32,A68_CHAR ),(DICBCTR_puttruncatedchars).nonlocals)));
} 
break;
case 35: /* STRUCT(INT,INT,REF MODE26)  */
KKCBCTR_chars = (FJCBCTR.data.mode35);
 /* line 447: */
 /* line 449: */
{ 
 /* line 450: */
 /* line 451: */
 /* line 452: */
if (KKCBCTR_chars.Nochars<0)
{ 
 /* line 453: */
LKCBCTR = YCCBCTR_notlastxcharstype;
} 
else
{ 
 /* line 454: */
LKCBCTR = ZCCBCTR_lastxcharstype;
} 
(void)(A_CALLPROC(DGCBCTR_outprep,(1, LKCBCTR),(1, LKCBCTR,(DGCBCTR_outprep).nonlocals)));
 /* line 455: */
 /* line 456: */
 /* line 457: */
if (KKCBCTR_chars.Base!=0)
{ 
 /* line 458: */
 /* line 459: */
GNJACTR_convertradixstring( KKCBCTR_chars.Chars, KKCBCTR_chars.Base, &NKCBCTR );
MKCBCTR = NKCBCTR;
} 
else
{ 
MKCBCTR = KKCBCTR_chars.Chars;
} 
OKCBCTR_string = MKCBCTR;
 /* line 460: */
 /* line 461: */
 /* line 462: */
(void)(A_CALLPROC(WHCBCTR_putchars,(OKCBCTR_string),(OKCBCTR_string,(WHCBCTR_putchars).nonlocals)));
} 
break;
case 7: /* STRUCT(INT)  */
PKCBCTR_str = (FJCBCTR.data.mode7);
 /* line 463: */
 /* line 464: */
if (PKCBCTR_str.Strmode==8)
{ 
 /* line 465: */
(void)(A_CALLPROC(DGCBCTR_outprep,(1, 76),(1, 76,(DGCBCTR_outprep).nonlocals)));
} 
else
{ 
 /* line 466: */
 /* line 468: */
(void)(A_CALLPROC(KHCBCTR_putint,(77, PKCBCTR_str.Strmode),(77, PKCBCTR_str.Strmode,(KHCBCTR_putint).nonlocals)));
} 
break;
case 34: /* REF STRUCT(MODE107,BITS,INT,INT,INT,INT,REF MODE124)  */
QKCBCTR_rd = (FJCBCTR.data.mode34);
 /* line 469: */
 /* line 470: */
{ 
 /* line 471: */
 /* line 472: */
RKCBCTR.data[0] = (*A_NILCHECK((&(A_NILCHECK(QKCBCTR_rd)->Rdenno))));
 /* line 473: */
RKCBCTR.data[1] = (*A_NILCHECK((&(A_NILCHECK(QKCBCTR_rd)->Mode))));
 /* line 474: */
RKCBCTR.data[2] = (A68_INT )(*A_NILCHECK((&(A_NILCHECK(QKCBCTR_rd)->Props))));
 /* line 475: */
 /* line 476: */
RKCBCTR.data[3] = PLAAOSF_max((*A_NILCHECK((&(A_NILCHECK(QKCBCTR_rd)->Maxname)))), HAAACTR_minidno);
(void)(A_CALLPROC(UGCBCTR_putints,(197, A_HIS1ARR(SKCBCTR,RKCBCTR,A68_INT ,4)),(197, A_HIS1ARR(SKCBCTR,RKCBCTR,A68_INT ,4),(UGCBCTR_putints).nonlocals)));
 /* line 477: */
 /* line 478: */
 /* line 480: */
UKCBCTR = (*A_NILCHECK((&(A_NILCHECK(QKCBCTR_rd)->Name)))) ;
(void)(A_CALLPROC(DICBCTR_puttruncatedchars,(A_HISVEC(TKCBCTR,UKCBCTR,32,A68_CHAR )),(A_HISVEC(TKCBCTR,UKCBCTR,32,A68_CHAR ),(DICBCTR_puttruncatedchars).nonlocals)));
} 
break;
case 5: /* STRUCT(INT)  */
VKCBCTR_nse = (FJCBCTR.data.mode5);
 /* line 481: */
 /* line 482: */
(void)(A_CALLPROC(DGCBCTR_outprep,(1, (66+VKCBCTR_nse.Nse)),(1, (66+VKCBCTR_nse.Nse),(DGCBCTR_outprep).nonlocals)));
break;
case 2: /* BOOL */
WKCBCTR_b = (FJCBCTR.data.mode2);
 /* line 483: */
 /* line 484: */
(void)(A_CALLPROC(DGCBCTR_outprep,(1, (65+(WKCBCTR_b))),(1, (65+(WKCBCTR_b)),(DGCBCTR_outprep).nonlocals)));
break;
case 6: /* STRUCT(INT,BOOL)  */
XKCBCTR_generator = (FJCBCTR.data.mode6);
 /* line 485: */
 /* line 488: */
 /* line 489: */
YKCBCTR.data[0] = XKCBCTR_generator.Mode;
 /* line 490: */
YKCBCTR.data[1] = (XKCBCTR_generator.Loc);
 /* line 491: */
 /* line 492: */
(void)(A_CALLPROC(UGCBCTR_putints,((128+PGAACTR_generatorfn), A_HIS1ARR(ZKCBCTR,YKCBCTR,A68_INT ,2)),((128+PGAACTR_generatorfn), A_HIS1ARR(ZKCBCTR,YKCBCTR,A68_INT ,2),(UGCBCTR_putints).nonlocals)));
break;
case 8: /* STRUCT(INT,INT,INT)  */
 /* line 493: */
 /* line 494: */
(void)(PXIACTR_error(808));
break;
case 10: /* STRUCT(INT)  */
ALCBCTR_al = (FJCBCTR.data.mode10);
 /* line 495: */
 /* line 496: */
(void)(A_CALLPROC(KHCBCTR_putint,(75, ALCBCTR_al.Almode),(75, ALCBCTR_al.Almode,(KHCBCTR_putint).nonlocals)));
break;
case 11: /* STRUCT(INT,INT)  */
BLCBCTR_c = (FJCBCTR.data.mode11);
 /* line 498: */
CLCBCTR.data[0] = BLCBCTR_c.Mode;
CLCBCTR.data[1] = BLCBCTR_c.Nopars;
 /* line 499: */
(void)(A_CALLPROC(UGCBCTR_putints,(70, A_HIS1ARR(DLCBCTR,CLCBCTR,A68_INT ,2)),(70, A_HIS1ARR(DLCBCTR,CLCBCTR,A68_INT ,2),(UGCBCTR_putints).nonlocals)));
break;
case 13: /* STRUCT(REF MODE125,BOOL)  */
ELCBCTR_xl = (FJCBCTR.data.mode13);
 /* line 500: */
 /* line 501: */
if (ELCBCTR_xl.Notsetting)
{ 
FLCBCTR_rl = ELCBCTR_xl.Lab;
 /* line 502: */
 /* line 503: */
if ((*A_NILCHECK((&(A_NILCHECK(FLCBCTR_rl)->Status))))==0)
{ 
(void)(A_CALLPROC(KHCBCTR_putint,(194, (*A_NILCHECK((&(A_NILCHECK(FLCBCTR_rl)->Labno))))),(194, (*A_NILCHECK((&(A_NILCHECK(FLCBCTR_rl)->Labno)))),(KHCBCTR_putint).nonlocals)));
 /* line 504: */
 /* line 505: */
HLCBCTR = (*A_NILCHECK((&(A_NILCHECK(FLCBCTR_rl)->Name)))) ;
(void)(A_CALLPROC(DICBCTR_puttruncatedchars,(A_HISVEC(GLCBCTR,HLCBCTR,32,A68_CHAR )),(A_HISVEC(GLCBCTR,HLCBCTR,32,A68_CHAR ),(DICBCTR_puttruncatedchars).nonlocals)));
} 
else
{ 
ILCBCTR.data[0] = (*A_NILCHECK((&(A_NILCHECK(FLCBCTR_rl)->Labno))));
ILCBCTR.data[1] = (*A_NILCHECK((&(A_NILCHECK(FLCBCTR_rl)->Status))));
 /* line 506: */
 /* line 507: */
(void)(A_CALLPROC(UGCBCTR_putints,(195, A_HIS1ARR(JLCBCTR,ILCBCTR,A68_INT ,2)),(195, A_HIS1ARR(JLCBCTR,ILCBCTR,A68_INT ,2),(UGCBCTR_putints).nonlocals)));
} 
} 
else
{ 
 /* line 508: */
 /* line 509: */
(void)(A_CALLPROC(KHCBCTR_putint,(196, (*A_NILCHECK((&(A_NILCHECK(ELCBCTR_xl.Lab)->Labno))))),(196, (*A_NILCHECK((&(A_NILCHECK(ELCBCTR_xl.Lab)->Labno)))),(KHCBCTR_putint).nonlocals)));
} 
break;
case 4: /* REF STRUCT(MODE107,INT,INT,REF MODE125)  */
KLCBCTR_lb = (FJCBCTR.data.mode4);
 /* line 510: */
(void)(A_CALLPROC(KHCBCTR_putint,(74, (*A_NILCHECK((&(A_NILCHECK(KLCBCTR_lb)->Labno))))),(74, (*A_NILCHECK((&(A_NILCHECK(KLCBCTR_lb)->Labno)))),(KHCBCTR_putint).nonlocals)));
break;
case 18: /* STRUCT(INT,INT,INT,INT,INT,INT)  */
LLCBCTR_xs = (FJCBCTR.data.mode18);
 /* line 512: */
UZBBCTR_xsizes = LLCBCTR_xs;
break;
case 19: /* REF VECTOR [] MODE120 */
MLCBCTR_mdes = (FJCBCTR.data.mode19);
 /* line 513: */
{ 
(void)(A_CALLPROC(SKMACTR_initialiseuniquenameserver,(QRIACTR_uname_option),(QRIACTR_uname_option,(SKMACTR_initialiseuniquenameserver).nonlocals)));
 /* line 514: */
 /* line 515: */
 /* line 517: */
(void)(SDOACTR_initialisemodetable(A_VECARR(MLCBCTR_mdes,NLCBCTR), (*A_NILCHECK((&(A_NILCHECK((&UZBBCTR_xsizes))->Nomodes))))));
} 
break;
case 26: /* STRUCT(BOOL,INT,REF MODE123)  */
OLCBCTR_xtd = (FJCBCTR.data.mode26);
 /* line 518: */
{ 
 /* line 519: */
if (QFCBCTR_xtmodulepending)
{ 
QFCBCTR_xtmodulepending = A68_FALSE;
 /* line 520: */
 /* line 521: */
(void)(JEPACTR_adddecsmodule(PFCBCTR_lastxtmodule, OLCBCTR_xtd.Level));
} 
 /* line 522: */
 /* line 523: */
 /* line 524: */
(void)(OFPACTR_addexternalid((*A_NILCHECK(OLCBCTR_xtd.Id))));
} 
break;
case 25: /* STRUCT(INT,INT,MODE107,MODE126)  */
PLCBCTR_xtm = (FJCBCTR.data.mode25);
 /* line 525: */
 /* line 526: */
if (PLCBCTR_xtm.Type<0)
{ 
PFCBCTR_lastxtmodule = PLCBCTR_xtm;
 /* line 527: */
 /* line 529: */
QFCBCTR_xtmodulepending = A68_TRUE;
} 
else
{ 
 /* line 530: */
QLCBCTR.data[0] = PLCBCTR_xtm.Moduleno;
 /* line 531: */
QLCBCTR.data[1] = PLCBCTR_xtm.Ym.Specs.upb;
(void)(A_CALLPROC(UGCBCTR_putints,(CDCBCTR_xtmoduletype, A_HIS1ARR(RLCBCTR,QLCBCTR,A68_INT ,2)),(CDCBCTR_xtmoduletype, A_HIS1ARR(RLCBCTR,QLCBCTR,A68_INT ,2),(UGCBCTR_putints).nonlocals)));
 /* line 532: */
TLCBCTR = PLCBCTR_xtm.Name ;
(void)(A_CALLPROC(DICBCTR_puttruncatedchars,(A_HISVEC(SLCBCTR,TLCBCTR,32,A68_CHAR )),(A_HISVEC(SLCBCTR,TLCBCTR,32,A68_CHAR ),(DICBCTR_puttruncatedchars).nonlocals)));
 /* line 533: */
VLCBCTR = PLCBCTR_xtm.Ym.Uname ;
(void)(A_CALLPROC(WHCBCTR_putchars,(A_HISVEC(ULCBCTR,VLCBCTR,7,A68_CHAR )),(A_HISVEC(ULCBCTR,VLCBCTR,7,A68_CHAR ),(WHCBCTR_putchars).nonlocals)));
 /* line 534: */
XLCBCTR = PLCBCTR_xtm.Ym.Lname ;
(void)(A_CALLPROC(WHCBCTR_putchars,(A_HISVEC(WLCBCTR,XLCBCTR,7,A68_CHAR )),(A_HISVEC(WLCBCTR,XLCBCTR,7,A68_CHAR ),(WHCBCTR_putchars).nonlocals)));
 /* line 535: */
ZLCBCTR = PLCBCTR_xtm.Ym.Gname ;
(void)(A_CALLPROC(WHCBCTR_putchars,(A_HISVEC(YLCBCTR,ZLCBCTR,7,A68_CHAR )),(A_HISVEC(YLCBCTR,ZLCBCTR,7,A68_CHAR ),(WHCBCTR_putchars).nonlocals)));
 /* line 536: */
 /* line 537: */
BMCBCTR = PLCBCTR_xtm.Ym.Specs ;
CMCBCTR = BMCBCTR.upb -1;
AMCBCTR_spec = BMCBCTR.data;
for (;CMCBCTR-- >= 0;
(AMCBCTR_spec++
) )
{
 /* line 538: */
EMCBCTR = (*A_NILCHECK((&(A_NILCHECK(AMCBCTR_spec)->Ys)))) ;
(void)(A_CALLPROC(WHCBCTR_putchars,(A_HISVEC(DMCBCTR,EMCBCTR,7,A68_CHAR )),(A_HISVEC(DMCBCTR,EMCBCTR,7,A68_CHAR ),(WHCBCTR_putchars).nonlocals)));
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
FMCBCTR_open = (FJCBCTR.data.mode23);
 /* line 545: */
 /* line 546: */
SFCBCTR_syntheticmoduleno = FMCBCTR_open.Moduleno;
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
GMCBCTR_xm = (FJCBCTR.data.mode21);
 /* line 551: */
 /* line 552: */
(void)(TCPACTR_initialisecurrentmodule(GMCBCTR_xm));
break;
case 32: /* STRUCT(REF MODE92,REF MODE92)  */
HMCBCTR_xbu = (FJCBCTR.data.mode32);
 /* line 553: */
A_CLOSURE( JMCBCTR_generator, KMCBCTR_generator, LMCBCTR_generator );
(( LMCBCTR_generator * ) ( JMCBCTR_generator.nonlocals )) -> HMCBCTR_xbu = HMCBCTR_xbu;
 /* line 554: */
A_CALLPROC(JMCBCTR_generator,(A68_FALSE, &OMCBCTR),(A68_FALSE, &OMCBCTR,(JMCBCTR_generator).nonlocals));
PMCBCTR = HMCBCTR_xbu.Decnos ;
RMCBCTR = A_VECARR(PMCBCTR,QMCBCTR) ;
(void)(A_R1ASSIGN2(RMCBCTR,OMCBCTR,A68_INT )) ;
ICPACTR_keptdecnos = OMCBCTR;
break;
case 22: /* STRUCT(MODE107,INT,INT,INT,MODE133)  */
SMCBCTR_s = (FJCBCTR.data.mode22);
 /* line 555: */
 /* line 556: */
 /* line 557: */
(void)(BEPACTR_initialisespec(SMCBCTR_s));
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

A_STATIC A68_VOID  FOCBCTR_positioncurrent(void)
{ 
A_PROC_ENTRY(positioncurrent);
 /* line 635: */
 /* line 637: */
if ((*A_NILCHECK(GBCBCTR_strptr))<(*A_NILCHECK(FBCBCTR_streambuffer)).upb)
{ 
 /* line 638: */
/*SKIP*/;
} 
else
{ 
 /* line 639: */
 /* line 640: */
if (((*A_NILCHECK(HBCBCTR_currentbuffer))+=1)>(*A_NILCHECK(IBCBCTR_buffers)).upb)
{ 
 /* line 641: */
 /* line 642: */
(void)(WXIACTR_assert(HOCBCTR, A68_FALSE));
} 
else
{ 
(void)((*A_NILCHECK(FBCBCTR_streambuffer)) = (*A_NILCHECK((&A_VINDEX((*A_NILCHECK(IBCBCTR_buffers)),(*A_NILCHECK(HBCBCTR_currentbuffer)))))));
 /* line 643: */
 /* line 644: */
(*A_NILCHECK(GBCBCTR_strptr)) = 0;
} 
} 
A_PROC_EXIT(positioncurrent);
return;
} 
#undef NL

A_STATIC A68_INT  IOCBCTR_nextbyte(void)
{ 
A68_INT  JOCBCTR;  /* clause result */
A68_INT  KOCBCTR;  /* YIELD */
A_PROC_ENTRY(nextbyte);
{ 
(void)(FOCBCTR_positioncurrent());
KOCBCTR = (*A_NILCHECK(GBCBCTR_strptr))+=1 ;
JOCBCTR = (A68_INT)(unsigned char)(*A_NILCHECK((&A_VINDEX((*A_NILCHECK(FBCBCTR_streambuffer)),KOCBCTR))));
} 
A_PROC_EXIT(nextbyte);
return( JOCBCTR );
} 
#undef NL

A_STATIC A68_INT  LOCBCTR_nextint(void)
{ 
A68_VC  NOCBCTR;  /* OPERATORS - trim index */
A68_VC  OOCBCTR;  /* OPERATORS - trim index */
A68_VC  POCBCTR;  /* OPERATORS - trim index */
A68_INT  MOCBCTR_nexti A_UNUSED = {0};
A68_INT  QOCBCTR;  /* clause result */
A_PROC_ENTRY(nextint);
{ 
(void)(FOCBCTR_positioncurrent());
 /* line 653: */
OOCBCTR = A_VTRIM(NOCBCTR,((*A_NILCHECK(FBCBCTR_streambuffer))),A_VTSCRIPT(&(NOCBCTR.upb),((*A_NILCHECK(FBCBCTR_streambuffer))).upb,((*A_NILCHECK(GBCBCTR_strptr))+1),((*A_NILCHECK(FBCBCTR_streambuffer))).upb)) ;
MOCBCTR_nexti = GOAAOSF_stringvalue(A_VTRIM(POCBCTR,(OOCBCTR),A_VTSCRIPT(&(POCBCTR.upb),(OOCBCTR).upb,1,4)));
 /* line 654: */
(*A_NILCHECK(GBCBCTR_strptr))+=4;
 /* line 655: */
 /* line 656: */
QOCBCTR = MOCBCTR_nexti;
} 
A_PROC_EXIT(nextint);
return( QOCBCTR );
} 
#undef NL

A_STATIC A68_VOID  TOCBCTR_nextstring(A68_VC  *ReturnedValue)
{ 
A68_INT  UOCBCTR;  /* YIELD */
A68_VC  VOCBCTR;  /* OPERATORS - trim index */
A68_VC  WOCBCTR;  /* clause result */
A_PROC_ENTRY(nextstring);
{ 
(void)(FOCBCTR_positioncurrent());
 /* line 664: */
UOCBCTR = (*A_NILCHECK(GBCBCTR_strptr))+=1 ;
(void)(DOCBCTR_upbstring = (A68_INT)(unsigned char)(*A_NILCHECK((&A_VINDEX((*A_NILCHECK(FBCBCTR_streambuffer)),UOCBCTR)))));
 /* line 665: */
(void)(EOCBCTR_string = A_VTRIM(VOCBCTR,((*A_NILCHECK(FBCBCTR_streambuffer))),A_VTSCRIPT(&(VOCBCTR.upb),((*A_NILCHECK(FBCBCTR_streambuffer))).upb,((*A_NILCHECK(GBCBCTR_strptr))+1),((*A_NILCHECK(GBCBCTR_strptr))+DOCBCTR_upbstring))));
 /* line 666: */
(*A_NILCHECK(GBCBCTR_strptr))+=DOCBCTR_upbstring;
 /* line 667: */
 /* line 668: */
WOCBCTR = EOCBCTR_string;
} 
A_PROC_EXIT(nextstring);
*ReturnedValue = (WOCBCTR);
return;
} 
#undef NL

A_STATIC A68_INT  BPCBCTR_nexttype(void)
{ 
A68_INT  CPCBCTR_t A_UNUSED = {0};
A68_INT  DPCBCTR;  /* YIELD */
A68_BOOL  EPCBCTR;  /* clause result */
A68_275 * FPCBCTR;  /* YIELD */
A68_INT  GPCBCTR;  /* YIELD */
A68_BOOL  JPCBCTR;  /* optbool result */
A68_VC  NPCBCTR;  /* avoid structure result */
A68_212  PPCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_211  QPCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_301  RPCBCTR;  /* collateral clause result */
A68_212  UPCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  VPCBCTR;  /* YIELD */
A68_VC  WPCBCTR;  /* avoid structure result */
A68_212  XPCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_212  AQCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  BQCBCTR;  /* YIELD */
A68_212  CQCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_211  DQCBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  EQCBCTR;  /* avoid structure result */
A68_VC  FQCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  GQCBCTR;  /* avoid structure result */
A68_VC  HQCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  KQCBCTR;  /* clause result */
A_PROC_ENTRY(nexttype);
{ 
 /* line 679: */
for ( ;; )
{ 
 /* line 680: */
(void)(FOCBCTR_positioncurrent());
 /* line 681: */
DPCBCTR = (*A_NILCHECK(GBCBCTR_strptr))+=1 ;
(void)(CPCBCTR_t = (A68_INT)(unsigned char)(*A_NILCHECK((&A_VINDEX((*A_NILCHECK(FBCBCTR_streambuffer)),DPCBCTR)))));
 /* line 682: */
 /* line 683: */
EPCBCTR = (CPCBCTR_t<JCCBCTR_separatorbase);
if ( !EPCBCTR ) break;
 /* line 684: */
if (CPCBCTR_t<3)
{ 
FPCBCTR = (&A_R1INDEX(EACBCTR_streams,HNCBCTR_level)) ;
(*A_NILCHECK(FPCBCTR)) = IACBCTR_current;
 /* line 685: */
 /* line 687: */
GPCBCTR = HNCBCTR_level+=((3-CPCBCTR_t)-CPCBCTR_t) ;
(void)(IACBCTR_current = (*A_NILCHECK((&A_R1INDEX(EACBCTR_streams,GPCBCTR)))));
} 
else
{ 
 /* line 688: */
 /* line 689: */
if (CPCBCTR_t==WCCBCTR_linetype)
{ 
(void)(XRIACTR_linenumber = A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
 /* line 690: */
(void)(XOCBCTR_line_start = A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
 /* line 691: */
(void)(YOCBCTR_line_length = A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
 /* line 692: */
ZOCBCTR_statement_number = 0;
 /* line 694: */
 /* line 695: */
JPCBCTR = (ZCHACTR_tracelevel(IPCBCTR)!=0);
if ( JPCBCTR )
{ /* line 696: */
JPCBCTR = ((XRIACTR_linenumber/100)>APCBCTR_hundred_counter);
}
if (JPCBCTR)
{ 
(void)(APCBCTR_hundred_counter = (XRIACTR_linenumber/100));
 /* line 697: */
 /* line 698: */
 /* line 699: */
ROAAOSF_whole( XRIACTR_linenumber, 0, &NPCBCTR );
(void)(ISIACTR_typelineonterminal(A_VC_PLUS(A_VC_PLUS(MPCBCTR,NPCBCTR),OPCBCTR)));
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
(void)(MDMACTR_writecstream(A_HVEC(QPCBCTR,A_UNITE(PPCBCTR,mode4,4,EIAACTR_cnewline),A68_212 ), NSLACTR_codestream(VRLACTR_currentlevel())));
} 
else
{ 
 /* line 710: */
 /* line 711: */
VPCBCTR = TPCBCTR ;
RPCBCTR.data[0] = A_UNITE(UPCBCTR,mode2,2,VPCBCTR);
 /* line 712: */
ROAAOSF_whole( XRIACTR_linenumber, 0, &WPCBCTR );
RPCBCTR.data[1] = A_UNITE(XPCBCTR,mode2,2,WPCBCTR);
 /* line 713: */
BQCBCTR = ZPCBCTR ;
RPCBCTR.data[2] = A_UNITE(AQCBCTR,mode2,2,BQCBCTR);
RPCBCTR.data[3] = A_UNITE(CQCBCTR,mode4,4,EIAACTR_cnewline);
 /* line 714: */
 /* line 715: */
(void)(MDMACTR_writecstream(A_HISVEC(DQCBCTR,RPCBCTR,4,A68_212 ), NSLACTR_codestream(VRLACTR_currentlevel())));
} 
 /* line 717: */
 /* line 718: */
if (GNCBCTR_printstream)
{ 
 /* line 719: */
 /* line 720: */
ROAAOSF_whole( XRIACTR_linenumber, 0, &EQCBCTR );
(void)(A_CALLPROC(MSIACTR_list,(A_VC_PLUS(EQCBCTR,A_HVEC(FQCBCTR,':',A68_CHAR ))),(A_VC_PLUS(EQCBCTR,A_HVEC(FQCBCTR,':',A68_CHAR )),(MSIACTR_list).nonlocals)));
} 
} 
else
{ 
 /* line 721: */
 /* line 722: */
if (CPCBCTR_t==XCCBCTR_maptype)
{ 
ZOCBCTR_statement_number+=1;
 /* line 723: */
 /* line 724: */
if (GNCBCTR_printstream)
{ 
 /* line 725: */
 /* line 726: */
ROAAOSF_whole( XRIACTR_linenumber, 0, &GQCBCTR );
(void)(A_CALLPROC(MSIACTR_list,(A_VC_PLUS(GQCBCTR,A_HVEC(HQCBCTR,':',A68_CHAR ))),(A_VC_PLUS(GQCBCTR,A_HVEC(HQCBCTR,':',A68_CHAR )),(MSIACTR_list).nonlocals)));
} 
} 
else
{ 
 /* line 727: */
 /* line 728: */
(void)(WXIACTR_assert(JQCBCTR, A68_FALSE));
} 
} 
} 
}
 /* line 729: */
 /* line 730: */
KQCBCTR = CPCBCTR_t;
} 
A_PROC_EXIT(nexttype);
return( KQCBCTR );
} 
#undef NL

A_STATIC A68_VOID  NQCBCTR_nextxchars(A68_INT  Suggestedsize, A68_INT  Insertion, A68_VC  *ReturnedValue)
{ 
A68_INT  OQCBCTR_type A_UNUSED = {0};
A68_INT  PQCBCTR_used A_UNUSED = {0};
A68_INT  QQCBCTR_resultsize A_UNUSED = {0};
A68_103  SQCBCTR_generator;   /* proc value of non-global proc */
A68_VC  YQCBCTR;  /* avoid structure result */
A68_VC  XQCBCTR_result A_UNUSED = {0};
A68_VC  ZQCBCTR;  /* clause result */
A68_VC  ARCBCTR;  /* avoid structure result */
A68_VC  BRCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  CRCBCTR;  /* avoid structure result */
A68_VC  DRCBCTR;  /* avoid structure result */
A68_VC  ERCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  FRCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  GRCBCTR;  /* avoid structure result */
A68_VC  HRCBCTR;  /* avoid structure result */
A68_VC  IRCBCTR;  /* avoid structure result */
A68_VC  JRCBCTR_string A_UNUSED = {0};
A68_INT  KRCBCTR_size A_UNUSED = {0};
A68_INT  LRCBCTR_newused A_UNUSED = {0};
A68_INT  MRCBCTR_newresultsize A_UNUSED = {0};
A68_103  ORCBCTR_generator;   /* proc value of non-global proc */
A68_VC  TRCBCTR;  /* avoid structure result */
A68_VC  URCBCTR_newresult A_UNUSED = {0};
A68_VC  VRCBCTR;  /* OPERATORS - trim index */
A68_VC  WRCBCTR;  /* OPERATORS - trim index */
A68_VC  XRCBCTR;  /* YIELD */
A68_VC  YRCBCTR;  /* OPERATORS - assign op */
A68_VC  ZRCBCTR;  /* OPERATORS - trim index */
A68_VC  ASCBCTR;  /* YIELD */
A68_BOOL  BSCBCTR;  /* clause result */
A68_VC  ESCBCTR;  /* clause result */
A68_VC  FSCBCTR;  /* OPERATORS - trim index */
A_PROC_ENTRY(nextxchars);
 /* line 746: */
 /* line 747: */
{ 
OQCBCTR_type = BPCBCTR_nexttype();
 /* line 748: */
PQCBCTR_used = 0;
QQCBCTR_resultsize = Suggestedsize;
 /* line 749: */
A_CLOSURE( SQCBCTR_generator, TQCBCTR_generator, UQCBCTR_generator );
(( UQCBCTR_generator * ) ( SQCBCTR_generator.nonlocals )) -> QQCBCTR_resultsize = (&QQCBCTR_resultsize);
A_CALLPROC(SQCBCTR_generator,(A68_FALSE, &YQCBCTR),(A68_FALSE, &YQCBCTR,(SQCBCTR_generator).nonlocals));
XQCBCTR_result = YQCBCTR;
 /* line 751: */
for ( ;; )
{ 
 /* line 753: */
 /* line 754: */
switch ( Insertion )
{ 
case 1: 
 /* line 755: */
TOCBCTR_nextstring(  &ARCBCTR );
ZQCBCTR = A_VC_PLUS(ARCBCTR,A_HVEC(BRCBCTR,GVBAOSF_newline_char,A68_CHAR ));
break;
case 2: 
 /* line 756: */
TOCBCTR_nextstring(  &CRCBCTR );
DRJACTR_replacecontrolchars( CRCBCTR, &DRCBCTR );
ZQCBCTR = A_VC_PLUS(A_VC_PLUS(DRCBCTR,A_HVEC(ERCBCTR,'\\',A68_CHAR )),A_HVEC(FRCBCTR,GVBAOSF_newline_char,A68_CHAR ));
break;
case 3: 
 /* line 757: */
 /* line 758: */
TOCBCTR_nextstring(  &GRCBCTR );
DRJACTR_replacecontrolchars( GRCBCTR, &HRCBCTR );
ZQCBCTR = HRCBCTR;
break;
default: 
TOCBCTR_nextstring(  &IRCBCTR );
ZQCBCTR = IRCBCTR;
break;
} 
JRCBCTR_string = ZQCBCTR;
 /* line 759: */
KRCBCTR_size = JRCBCTR_string.upb;
 /* line 760: */
LRCBCTR_newused = (PQCBCTR_used+KRCBCTR_size);
 /* line 762: */
 /* line 763: */
 /* line 764: */
if (LRCBCTR_newused>QQCBCTR_resultsize)
{ 
MRCBCTR_newresultsize = (2*PLAAOSF_max(LRCBCTR_newused, QQCBCTR_resultsize));
 /* line 765: */
A_CLOSURE( ORCBCTR_generator, PRCBCTR_generator, QRCBCTR_generator );
(( QRCBCTR_generator * ) ( ORCBCTR_generator.nonlocals )) -> MRCBCTR_newresultsize = MRCBCTR_newresultsize;
A_CALLPROC(ORCBCTR_generator,(A68_FALSE, &TRCBCTR),(A68_FALSE, &TRCBCTR,(ORCBCTR_generator).nonlocals));
URCBCTR_newresult = TRCBCTR;
 /* line 766: */
XRCBCTR = A_VTRIM(VRCBCTR,(URCBCTR_newresult),A_VTSCRIPT(&(VRCBCTR.upb),(URCBCTR_newresult).upb,1,PQCBCTR_used)) ;
YRCBCTR = A_VTRIM(WRCBCTR,(XQCBCTR_result),A_VTSCRIPT(&(WRCBCTR.upb),(XQCBCTR_result).upb,1,PQCBCTR_used)) ;
(void)(A_VASSIGN2(YRCBCTR,XRCBCTR,A68_CHAR ));
 /* line 767: */
XQCBCTR_result = URCBCTR_newresult;
 /* line 768: */
 /* line 769: */
QQCBCTR_resultsize = MRCBCTR_newresultsize;
} 
 /* line 770: */
ASCBCTR = A_VTRIM(ZRCBCTR,(XQCBCTR_result),A_VTSCRIPT(&(ZRCBCTR.upb),(XQCBCTR_result).upb,(PQCBCTR_used+1),LRCBCTR_newused)) ;
(void)(A_VASSIGN2(JRCBCTR_string,ASCBCTR,A68_CHAR ));
 /* line 771: */
PQCBCTR_used = LRCBCTR_newused;
 /* line 772: */
 /* line 773: */
 /* line 774: */
BSCBCTR = (OQCBCTR_type==YCCBCTR_notlastxcharstype);
if ( !BSCBCTR ) break;
 /* line 775: */
(void)(OQCBCTR_type = BPCBCTR_nexttype());
}
 /* line 776: */
(void)(WXIACTR_assert(DSCBCTR, (OQCBCTR_type==ZCCBCTR_lastxcharstype)));
 /* line 777: */
 /* line 778: */
ESCBCTR = A_VTRIM(FSCBCTR,(XQCBCTR_result),A_VTSCRIPT(&(FSCBCTR.upb),(XQCBCTR_result).upb,1,PQCBCTR_used));
} 
A_PROC_EXIT(nextxchars);
*ReturnedValue = (ESCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  GSCBCTR_nextstreamimperative(A68_186  *ReturnedValue)
{ 
A68_INT  HSCBCTR_type A_UNUSED = {0};
A68_VC  JSCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  KSCBCTR;  /* avoid structure result */
A68_200  MSCBCTR_s A_UNUSED = {0};
A68_INT * NSCBCTR;  /* YIELD */
A68_INT * OSCBCTR;  /* YIELD */
A68_BITS * PSCBCTR;  /* YIELD */
A68_INT * QSCBCTR;  /* YIELD */
A68_186  RSCBCTR;  /* clause result */
A68_186  SSCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_202  TSCBCTR_t A_UNUSED = {0};
A68_INT * USCBCTR;  /* YIELD */
A68_BITS * VSCBCTR;  /* YIELD */
A68_186  WSCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_200  XSCBCTR_semi A_UNUSED = {0};
A68_INT * YSCBCTR;  /* YIELD */
A68_BITS * ZSCBCTR;  /* YIELD */
A68_186  ATCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  BTCBCTR_loadtype A_UNUSED = {0};
A68_INT  CTCBCTR;  /* clause result */
A68_186  DTCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_BOOL  ETCBCTR;  /* YIELD */
A68_186  FTCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_BOOL  GTCBCTR;  /* YIELD */
A68_146  HTCBCTR_e A_UNUSED = {0};
A68_INT * ITCBCTR;  /* YIELD */
A68_186  JTCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_146  KTCBCTR_s A_UNUSED = {0};
A68_INT * LTCBCTR;  /* YIELD */
A68_186  MTCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_146  NTCBCTR_n A_UNUSED = {0};
A68_INT * OTCBCTR;  /* YIELD */
A68_186  PTCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_199  QTCBCTR_c A_UNUSED = {0};
A68_INT * RTCBCTR;  /* YIELD */
A68_INT * STCBCTR;  /* YIELD */
A68_VC  TTCBCTR;  /* avoid structure result */
A68_VC * UTCBCTR;  /* YIELD */
A68_186  VTCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_186  WTCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_186  XTCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_186  YTCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_106  ZTCBCTR_l A_UNUSED = {0};
A68_INT * AUCBCTR;  /* YIELD */
A68_186  BUCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_188  CUCBCTR_a A_UNUSED = {0};
A68_INT * DUCBCTR;  /* YIELD */
A68_VC  EUCBCTR;  /* avoid structure result */
A68_VC * FUCBCTR;  /* YIELD */
A68_186  GUCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_187  HUCBCTR_c A_UNUSED = {0};
A68_VC  IUCBCTR;  /* avoid structure result */
A68_VC * JUCBCTR;  /* YIELD */
A68_186  KUCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_190  LUCBCTR_s A_UNUSED = {0};
A68_INT * MUCBCTR;  /* YIELD */
A68_VC  NUCBCTR;  /* avoid structure result */
A68_VC * OUCBCTR;  /* YIELD */
A68_186  PUCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_186  QUCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  RUCBCTR;  /* YIELD */
A68_186  SUCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_186  TUCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  UUCBCTR;  /* YIELD */
A68_186  VUCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  WUCBCTR_mode A_UNUSED = {0};
A68_140  XUCBCTR;  /* collateral clause result */
A68_VC  YUCBCTR;  /* avoid structure result */
A68_186  ZUCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_191  AVCBCTR_o A_UNUSED = {0};
A68_INT * BVCBCTR;  /* YIELD */
A68_INT * CVCBCTR;  /* YIELD */
A68_INT * DVCBCTR;  /* YIELD */
A68_INT  EVCBCTR_n A_UNUSED = {0};
A68_BOOL  FVCBCTR;  /* clause result */
A68_BOOL  GVCBCTR;  /* clause result */
A68_INT  HVCBCTR;  /* ADICOPS - MOD */
A68_INT  IVCBCTR;  /* ADICOPS - MOD */
A68_INT  JVCBCTR;  /* ADICOPS - MOD */
A68_202  KVCBCTR;  /* collateral clause result */
A68_186  LVCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_186  MVCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  NVCBCTR_miscellaneoustype A_UNUSED = {0};
A68_INT  OVCBCTR;  /* clause result */
A68_195  PVCBCTR_u A_UNUSED = {0};
A68_INT * QVCBCTR;  /* YIELD */
A68_BITS * RVCBCTR;  /* YIELD */
A68_INT * SVCBCTR;  /* YIELD */
A68_186  TVCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_194  UVCBCTR_s A_UNUSED = {0};
A68_INT * VVCBCTR;  /* YIELD */
A68_VC  WVCBCTR;  /* avoid structure result */
A68_VC * XVCBCTR;  /* YIELD */
A68_INT * YVCBCTR;  /* YIELD */
A68_BOOL * ZVCBCTR;  /* YIELD */
A68_186  AWCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_194  BWCBCTR_e A_UNUSED = {0};
A68_INT * CWCBCTR;  /* YIELD */
A68_VC  DWCBCTR;  /* OPERATORS - nil -> mode */
A68_VC * EWCBCTR;  /* YIELD */
A68_INT * FWCBCTR;  /* YIELD */
A68_BOOL * GWCBCTR;  /* YIELD */
A68_186  HWCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_194  IWCBCTR_d A_UNUSED = {0};
A68_INT * JWCBCTR;  /* YIELD */
A68_VC  KWCBCTR;  /* OPERATORS - nil -> mode */
A68_VC * LWCBCTR;  /* YIELD */
A68_INT * MWCBCTR;  /* YIELD */
A68_BOOL * NWCBCTR;  /* YIELD */
A68_186  OWCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_193  PWCBCTR_r A_UNUSED = {0};
A68_INT * QWCBCTR;  /* YIELD */
A68_INT * RWCBCTR;  /* YIELD */
A68_BITS * SWCBCTR;  /* YIELD */
A68_INT * TWCBCTR;  /* YIELD */
A68_VC  UWCBCTR;  /* avoid structure result */
A68_VC * VWCBCTR;  /* YIELD */
A68_186  WWCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_186  ZWCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_186  AXCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_204  BXCBCTR_s A_UNUSED = {0};
A68_INT * CXCBCTR;  /* YIELD */
A68_INT * DXCBCTR;  /* YIELD */
A68_INT * EXCBCTR;  /* YIELD */
A68_186  FXCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_196  GXCBCTR_c A_UNUSED = {0};
A68_INT * HXCBCTR;  /* YIELD */
A68_186  IXCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_186  JXCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_191  KXCBCTR_v A_UNUSED = {0};
A68_INT * LXCBCTR;  /* YIELD */
A68_INT * MXCBCTR;  /* YIELD */
A68_186  NXCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_203  OXCBCTR_cl A_UNUSED = {0};
A68_INT * PXCBCTR;  /* YIELD */
A68_INT * QXCBCTR;  /* YIELD */
A68_292  SXCBCTR_generator;   /* proc value of non-global proc */
A68_185  XXCBCTR;  /* avoid structure result */
A68_185 * YXCBCTR;  /* YIELD */
A68_INT * ZXCBCTR_actual A_UNUSED = {0};
A68_185  AYCBCTR;  /* forall yield */
A68_INT  BYCBCTR;  /* forall loop counter */
A68_186  CYCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_205  DYCBCTR_x A_UNUSED = {0};
A68_INT * EYCBCTR;  /* YIELD */
A68_303  GYCBCTR_generator;   /* proc value of non-global proc */
A68_206  LYCBCTR;  /* avoid structure result */
A68_206 * MYCBCTR;  /* YIELD */
A68_VC  NYCBCTR;  /* avoid structure result */
A68_VC * OYCBCTR;  /* YIELD */
A68_VC  PYCBCTR;  /* avoid structure result */
A68_VC * QYCBCTR;  /* YIELD */
A68_VC  RYCBCTR;  /* avoid structure result */
A68_VC * SYCBCTR;  /* YIELD */
A68_VC  TYCBCTR;  /* avoid structure result */
A68_VC * UYCBCTR;  /* YIELD */
A68_VC * VYCBCTR_ysname A_UNUSED = {0};
A68_206  WYCBCTR;  /* forall yield */
A68_INT  XYCBCTR;  /* forall loop counter */
A68_VC  YYCBCTR;  /* avoid structure result */
A68_186  ZYCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_186  AZCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_154  BZCBCTR_w A_UNUSED = {0};
A68_INT * CZCBCTR;  /* YIELD */
A68_186  DZCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_192  EZCBCTR_i A_UNUSED = {0};
A68_INT * FZCBCTR;  /* YIELD */
A68_INT * GZCBCTR;  /* YIELD */
A68_INT * HZCBCTR;  /* YIELD */
A68_VC  IZCBCTR;  /* avoid structure result */
A68_VC * JZCBCTR;  /* YIELD */
A68_186  KZCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_201  LZCBCTR_s A_UNUSED = {0};
A68_INT * MZCBCTR;  /* YIELD */
A68_INT * NZCBCTR;  /* YIELD */
A68_BITS * OZCBCTR;  /* YIELD */
A68_INT * PZCBCTR;  /* YIELD */
A68_186  QZCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_186  RZCBCTR_imperative A_UNUSED = {0};
A68_VC  SZCBCTR;  /* avoid structure result */
A68_VC  TZCBCTR_string A_UNUSED = {0};
A68_VC  UZCBCTR;  /* OPERATORS - trim index */
A68_VC  VZCBCTR;  /* OPERATORS - trim index */
A68_186  WZCBCTR;  /* clause result */
A_PROC_ENTRY(nextstreamimperative);
{ 
HSCBCTR_type = BPCBCTR_nexttype();
 /* line 787: */
 /* line 788: */
if (GNCBCTR_printstream)
{ 
 /* line 789: */
ROAAOSF_whole( HSCBCTR_type, (-3), &KSCBCTR );
(void)(A_CALLPROC(MSIACTR_list,(A_VC_PLUS(A_VC_PLUS(A_HVEC(JSCBCTR,'[',A68_CHAR ),KSCBCTR),LSCBCTR)),(A_VC_PLUS(A_VC_PLUS(A_HVEC(JSCBCTR,'[',A68_CHAR ),KSCBCTR),LSCBCTR),(MSIACTR_list).nonlocals)));
} 
 /* line 791: */
 /* line 793: */
 /* line 794: */
 /* line 796: */
switch ( ((HSCBCTR_type/UCCBCTR_rangesize)+1) )
{ 
case 1: 
 /* line 797: */
 /* line 800: */
switch ( (HSCBCTR_type/VCCBCTR_subrangesize) )
{ 
case 1: 
{ 
NSCBCTR = (&(A_NILCHECK((&MSCBCTR_s))->Fn)) ;
(void)((*A_NILCHECK(NSCBCTR)) = (HSCBCTR_type-JCCBCTR_separatorbase));
 /* line 801: */
OSCBCTR = (&(A_NILCHECK((&MSCBCTR_s))->Mode)) ;
(void)((*A_NILCHECK(OSCBCTR)) = A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
PSCBCTR = (&(A_NILCHECK((&MSCBCTR_s))->Props)) ;
(void)((*A_NILCHECK(PSCBCTR)) = (A68_BITS )A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
 /* line 802: */
QSCBCTR = (&(A_NILCHECK((&MSCBCTR_s))->Param)) ;
(void)((*A_NILCHECK(QSCBCTR)) = A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
 /* line 803: */
 /* line 804: */
 /* line 807: */
RSCBCTR = A_UNITE(SSCBCTR,mode20,20,MSCBCTR_s);
} 
break;
case 2: 
{ 
USCBCTR = (&(A_NILCHECK((&TSCBCTR_t))->Fn)) ;
(void)((*A_NILCHECK(USCBCTR)) = (HSCBCTR_type-KCCBCTR_terminatorbase));
 /* line 808: */
(void)(A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
VSCBCTR = (&(A_NILCHECK((&TSCBCTR_t))->Props)) ;
(void)((*A_NILCHECK(VSCBCTR)) = (A68_BITS )A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
(void)(A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
 /* line 809: */
 /* line 810: */
 /* line 813: */
RSCBCTR = A_UNITE(WSCBCTR,mode22,22,TSCBCTR_t);
} 
break;
case 3: 
{ 
YSCBCTR = (&(A_NILCHECK((&XSCBCTR_semi))->Fn)) ;
(*A_NILCHECK(YSCBCTR)) = WBAACTR_semifn;
 /* line 814: */
ZSCBCTR = (&(A_NILCHECK((&XSCBCTR_semi))->Props)) ;
(void)((*A_NILCHECK(ZSCBCTR)) = (A68_BITS )((HSCBCTR_type-LCCBCTR_semibase)*2048));
 /* line 815: */
 /* line 816: */
 /* line 817: */
 /* line 820: */
RSCBCTR = A_UNITE(ATCBCTR,mode20,20,XSCBCTR_semi);
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
BTCBCTR_loadtype = (HSCBCTR_type-MCCBCTR_loadbase);
 /* line 822: */
 /* line 823: */
 /* line 825: */
CTCBCTR = ((BTCBCTR_loadtype/VCCBCTR_subrangesize)+1);
switch ( CTCBCTR )
{ 
case 1: 
 /* line 826: */
 /* line 827: */
switch ( BTCBCTR_loadtype )
{ 
case 1: 
 /* line 829: */
ETCBCTR = A68_FALSE ;
RSCBCTR = A_UNITE(DTCBCTR,mode3,3,ETCBCTR);
break;
case 2: 
 /* line 831: */
GTCBCTR = A68_TRUE ;
RSCBCTR = A_UNITE(FTCBCTR,mode3,3,GTCBCTR);
break;
case 3: 
{ 
ITCBCTR = (&(A_NILCHECK((&HTCBCTR_e))->Nse)) ;
(*A_NILCHECK(ITCBCTR)) = ZAAACTR_emptyfn;
 /* line 833: */
RSCBCTR = A_UNITE(JTCBCTR,mode1,1,HTCBCTR_e);
} 
break;
case 4: 
{ 
LTCBCTR = (&(A_NILCHECK((&KTCBCTR_s))->Nse)) ;
(*A_NILCHECK(LTCBCTR)) = ABAACTR_skipfn;
 /* line 835: */
RSCBCTR = A_UNITE(MTCBCTR,mode1,1,KTCBCTR_s);
} 
break;
case 5: 
{ 
OTCBCTR = (&(A_NILCHECK((&NTCBCTR_n))->Nse)) ;
(*A_NILCHECK(OTCBCTR)) = BBAACTR_nilfn;
 /* line 837: */
RSCBCTR = A_UNITE(PTCBCTR,mode1,1,NTCBCTR_n);
} 
break;
case 6: 
{ 
RTCBCTR = (&(A_NILCHECK((&QTCBCTR_c))->Mode)) ;
(void)((*A_NILCHECK(RTCBCTR)) = A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
STCBCTR = (&(A_NILCHECK((&QTCBCTR_c))->Number)) ;
(void)((*A_NILCHECK(STCBCTR)) = A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
NQCBCTR_nextxchars( 128, 1, &TTCBCTR );
UTCBCTR = (&(A_NILCHECK((&QTCBCTR_c))->Insert)) ;
(*A_NILCHECK(UTCBCTR)) = TTCBCTR;
 /* line 839: */
RSCBCTR = A_UNITE(VTCBCTR,mode19,19,QTCBCTR_c);
} 
break;
case 7: 
 /* line 841: */
SXIACTR_terminalerror(600) ;
RSCBCTR = A_EMPTY(WTCBCTR,26);
break;
case 8: 
 /* line 843: */
SXIACTR_terminalerror(600) ;
RSCBCTR = A_EMPTY(XTCBCTR,26);
break;
case 9: 
 /* line 845: */
SXIACTR_terminalerror(600) ;
RSCBCTR = A_EMPTY(YTCBCTR,26);
break;
case 10: 
{ 
AUCBCTR = (&(A_NILCHECK((&ZTCBCTR_l))->Labno)) ;
(void)((*A_NILCHECK(AUCBCTR)) = A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
 /* line 847: */
RSCBCTR = A_UNITE(BUCBCTR,mode5,5,ZTCBCTR_l);
} 
break;
case 11: 
{ 
DUCBCTR = (&(A_NILCHECK((&CUCBCTR_a))->Mode)) ;
(void)((*A_NILCHECK(DUCBCTR)) = A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
NQCBCTR_nextxchars( 400, 1, &EUCBCTR );
FUCBCTR = (&(A_NILCHECK((&CUCBCTR_a))->String)) ;
(*A_NILCHECK(FUCBCTR)) = EUCBCTR;
 /* line 849: */
RSCBCTR = A_UNITE(GUCBCTR,mode7,7,CUCBCTR_a);
} 
break;
case 12: 
{ 
NQCBCTR_nextxchars( 1, 3, &IUCBCTR );
JUCBCTR = (&(A_NILCHECK((&HUCBCTR_c))->Representation)) ;
(*A_NILCHECK(JUCBCTR)) = IUCBCTR;
 /* line 851: */
RSCBCTR = A_UNITE(KUCBCTR,mode4,4,HUCBCTR_c);
} 
break;
case 13: 
{ 
MUCBCTR = (&(A_NILCHECK((&LUCBCTR_s))->Mode)) ;
(void)((*A_NILCHECK(MUCBCTR)) = A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
NQCBCTR_nextxchars( 160, 0, &NUCBCTR );
OUCBCTR = (&(A_NILCHECK((&LUCBCTR_s))->Denotation)) ;
(*A_NILCHECK(OUCBCTR)) = NUCBCTR;
 /* line 854: */
RSCBCTR = A_UNITE(PUCBCTR,mode9,9,LUCBCTR_s);
} 
break;
case 14: 
 /* line 856: */
RUCBCTR = A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)) ;
RSCBCTR = A_UNITE(QUCBCTR,mode2,2,RUCBCTR);
break;
case 15: 
 /* line 857: */
 /* line 860: */
SXIACTR_terminalerror(600) ;
RSCBCTR = A_EMPTY(SUCBCTR,26);
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
if (HSCBCTR_type==80)
{ 
 /* line 864: */
UUCBCTR = A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)) ;
RSCBCTR = A_UNITE(TUCBCTR,mode2,2,UUCBCTR);
} 
else
{ 
 /* line 865: */
 /* line 868: */
SXIACTR_terminalerror(600) ;
RSCBCTR = A_EMPTY(VUCBCTR,26);
} 
break;
case 3: 
{ 
WUCBCTR_mode = (HSCBCTR_type-OCCBCTR_numberbase);
XUCBCTR.Mode = WUCBCTR_mode;
TOCBCTR_nextstring(  &YUCBCTR );
XUCBCTR.Nu = YUCBCTR;
 /* line 869: */
 /* line 872: */
RSCBCTR = A_UNITE(ZUCBCTR,mode6,6,XUCBCTR);
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
BVCBCTR = (&(A_NILCHECK((&AVCBCTR_o))->Fn)) ;
(void)((*A_NILCHECK(BVCBCTR)) = (HSCBCTR_type-PCCBCTR_operbase));
 /* line 875: */
CVCBCTR = (&(A_NILCHECK((&AVCBCTR_o))->Mode)) ;
(void)((*A_NILCHECK(CVCBCTR)) = A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
 /* line 876: */
DVCBCTR = (&(A_NILCHECK((&AVCBCTR_o))->Param)) ;
(void)((*A_NILCHECK(DVCBCTR)) = A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
 /* line 877: */
 /* line 878: */
{ 
EVCBCTR_n = ((*A_NILCHECK((&(A_NILCHECK((&AVCBCTR_o))->Param))))/16);
 /* line 879: */
FVCBCTR = ((EVCBCTR_n==4)|(EVCBCTR_n==5));
} 
 /* line 880: */
IVCBCTR = (*A_NILCHECK((&(A_NILCHECK((&AVCBCTR_o))->Param)))) ;
JVCBCTR = 16 ;
GVCBCTR = ((((*A_NILCHECK((&(A_NILCHECK((&AVCBCTR_o))->Fn))))==10)&FVCBCTR)&(A_MOD(IVCBCTR,JVCBCTR,HVCBCTR)==1));
if (GVCBCTR)
{ 
KVCBCTR.Fn = ICAACTR_optboolfn;
 /* line 881: */
KVCBCTR.Props = 0X0U;
 /* line 882: */
RSCBCTR = A_UNITE(LVCBCTR,mode22,22,KVCBCTR);
} 
else
{ 
 /* line 885: */
RSCBCTR = A_UNITE(MVCBCTR,mode10,10,AVCBCTR_o);
} 
} 
break;
case 4: 
 /* line 886: */
{ 
NVCBCTR_miscellaneoustype = (HSCBCTR_type-QCCBCTR_miscellaneousbase);
 /* line 887: */
 /* line 888: */
 /* line 890: */
OVCBCTR = ((NVCBCTR_miscellaneoustype/VCCBCTR_subrangesize)+1);
switch ( OVCBCTR )
{ 
case 1: 
 /* line 891: */
 /* line 893: */
switch ( NVCBCTR_miscellaneoustype )
{ 
case 1: 
{ 
QVCBCTR = (&(A_NILCHECK((&PVCBCTR_u))->Mode)) ;
(void)((*A_NILCHECK(QVCBCTR)) = A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
RVCBCTR = (&(A_NILCHECK((&PVCBCTR_u))->Props)) ;
(void)((*A_NILCHECK(RVCBCTR)) = (A68_BITS )A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
SVCBCTR = (&(A_NILCHECK((&PVCBCTR_u))->Param)) ;
(void)((*A_NILCHECK(SVCBCTR)) = A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
 /* line 896: */
RSCBCTR = A_UNITE(TVCBCTR,mode15,15,PVCBCTR_u);
} 
break;
case 2: 
{ 
VVCBCTR = (&(A_NILCHECK((&UVCBCTR_s))->Labno)) ;
(void)((*A_NILCHECK(VVCBCTR)) = A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
TOCBCTR_nextstring(  &WVCBCTR );
XVCBCTR = (&(A_NILCHECK((&UVCBCTR_s))->Name)) ;
(*A_NILCHECK(XVCBCTR)) = WVCBCTR;
 /* line 897: */
YVCBCTR = (&(A_NILCHECK((&UVCBCTR_s))->Status)) ;
(*A_NILCHECK(YVCBCTR)) = 0;
ZVCBCTR = (&(A_NILCHECK((&UVCBCTR_s))->Notsetting)) ;
(*A_NILCHECK(ZVCBCTR)) = A68_TRUE;
 /* line 898: */
 /* line 899: */
 /* line 902: */
RSCBCTR = A_UNITE(AWCBCTR,mode14,14,UVCBCTR_s);
} 
break;
case 3: 
{ 
CWCBCTR = (&(A_NILCHECK((&BWCBCTR_e))->Labno)) ;
(void)((*A_NILCHECK(CWCBCTR)) = A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
EWCBCTR = (&(A_NILCHECK((&BWCBCTR_e))->Name)) ;
(void)((*A_NILCHECK(EWCBCTR)) = A_VVAC(DWCBCTR));
 /* line 903: */
FWCBCTR = (&(A_NILCHECK((&BWCBCTR_e))->Status)) ;
(void)((*A_NILCHECK(FWCBCTR)) = A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
GWCBCTR = (&(A_NILCHECK((&BWCBCTR_e))->Notsetting)) ;
(*A_NILCHECK(GWCBCTR)) = A68_TRUE;
 /* line 904: */
 /* line 905: */
 /* line 908: */
RSCBCTR = A_UNITE(HWCBCTR,mode14,14,BWCBCTR_e);
} 
break;
case 4: 
{ 
JWCBCTR = (&(A_NILCHECK((&IWCBCTR_d))->Labno)) ;
(void)((*A_NILCHECK(JWCBCTR)) = A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
LWCBCTR = (&(A_NILCHECK((&IWCBCTR_d))->Name)) ;
(void)((*A_NILCHECK(LWCBCTR)) = A_VVAC(KWCBCTR));
 /* line 909: */
MWCBCTR = (&(A_NILCHECK((&IWCBCTR_d))->Status)) ;
(*A_NILCHECK(MWCBCTR)) = 0;
NWCBCTR = (&(A_NILCHECK((&IWCBCTR_d))->Notsetting)) ;
(*A_NILCHECK(NWCBCTR)) = A68_FALSE;
 /* line 910: */
 /* line 911: */
 /* line 914: */
RSCBCTR = A_UNITE(OWCBCTR,mode14,14,IWCBCTR_d);
} 
break;
case 5: 
{ 
QWCBCTR = (&(A_NILCHECK((&PWCBCTR_r))->Rdenno)) ;
(void)((*A_NILCHECK(QWCBCTR)) = A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
RWCBCTR = (&(A_NILCHECK((&PWCBCTR_r))->Mode)) ;
(void)((*A_NILCHECK(RWCBCTR)) = A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
SWCBCTR = (&(A_NILCHECK((&PWCBCTR_r))->Props)) ;
(void)((*A_NILCHECK(SWCBCTR)) = (A68_BITS )A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
 /* line 915: */
TWCBCTR = (&(A_NILCHECK((&PWCBCTR_r))->Maxname)) ;
(void)((*A_NILCHECK(TWCBCTR)) = A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
TOCBCTR_nextstring(  &UWCBCTR );
VWCBCTR = (&(A_NILCHECK((&PWCBCTR_r))->Name)) ;
(*A_NILCHECK(VWCBCTR)) = UWCBCTR;
 /* line 916: */
 /* line 917: */
 /* line 919: */
RSCBCTR = A_UNITE(WWCBCTR,mode12,12,PWCBCTR_r);
} 
break;
case 6: 
 /* line 921: */
WXIACTR_assert(YWCBCTR, A68_FALSE) ;
RSCBCTR = A_EMPTY(ZWCBCTR,26);
break;
case 7: 
 /* line 924: */
SXIACTR_terminalerror(600) ;
RSCBCTR = A_EMPTY(AXCBCTR,26);
break;
case 8: 
 /* line 925: */
if (KOOACTR_composition)
{ 
CXCBCTR = (&(A_NILCHECK((&BXCBCTR_s))->Moduleno)) ;
(void)((*A_NILCHECK(CXCBCTR)) = A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
DXCBCTR = (&(A_NILCHECK((&BXCBCTR_s))->I)) ;
(void)((*A_NILCHECK(DXCBCTR)) = A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
EXCBCTR = (&(A_NILCHECK((&BXCBCTR_s))->J)) ;
(void)((*A_NILCHECK(EXCBCTR)) = A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
 /* line 926: */
RSCBCTR = A_UNITE(FXCBCTR,mode24,24,BXCBCTR_s);
} 
else
{ 
(void)(A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
HXCBCTR = (&(A_NILCHECK((&GXCBCTR_c))->I)) ;
(void)((*A_NILCHECK(HXCBCTR)) = A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
(void)(A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
 /* line 927: */
 /* line 929: */
RSCBCTR = A_UNITE(IXCBCTR,mode16,16,GXCBCTR_c);
} 
break;
case 9: 
 /* line 931: */
SXIACTR_terminalerror(600) ;
RSCBCTR = A_EMPTY(JXCBCTR,26);
break;
case 10: 
{ 
LXCBCTR = (&(A_NILCHECK((&KXCBCTR_v))->Fn)) ;
(*A_NILCHECK(LXCBCTR)) = LGAACTR_voidfn;
MXCBCTR = (&(A_NILCHECK((&KXCBCTR_v))->Mode)) ;
(*A_NILCHECK(MXCBCTR)) = UEAACTR_voidmode;
 /* line 934: */
RSCBCTR = A_UNITE(NXCBCTR,mode10,10,KXCBCTR_v);
} 
break;
case 11: 
{ 
PXCBCTR = (&(A_NILCHECK((&OXCBCTR_cl))->Body)) ;
(void)((*A_NILCHECK(PXCBCTR)) = A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
QXCBCTR = (&(A_NILCHECK((&OXCBCTR_cl))->Moduleno)) ;
(void)((*A_NILCHECK(QXCBCTR)) = A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
 /* line 935: */
A_CLOSURE( SXCBCTR_generator, TXCBCTR_generator, UXCBCTR_generator );
A_CALLPROC(SXCBCTR_generator,(A68_FALSE, &XXCBCTR),(A68_FALSE, &XXCBCTR,(SXCBCTR_generator).nonlocals));
YXCBCTR = (&(A_NILCHECK((&OXCBCTR_cl))->Actuals)) ;
(*A_NILCHECK(YXCBCTR)) = XXCBCTR;
(void)(BPCBCTR_nexttype());
 /* line 936: */
AYCBCTR = (*A_NILCHECK((&(A_NILCHECK((&OXCBCTR_cl))->Actuals)))) ;
BYCBCTR = AYCBCTR.dim[0].upb - AYCBCTR.dim[0].lwb;
ZXCBCTR_actual = AYCBCTR.data;
for (;BYCBCTR-- >= 0;
(ZXCBCTR_actual += AYCBCTR.dim[0].stride
) )
{
(void)((*A_NILCHECK(ZXCBCTR_actual)) = A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
}
 /* line 937: */
 /* line 938: */
 /* line 941: */
RSCBCTR = A_UNITE(CYCBCTR,mode23,23,OXCBCTR_cl);
} 
break;
case 12: 
{ 
EYCBCTR = (&(A_NILCHECK((&DYCBCTR_x))->Moduleno)) ;
(void)((*A_NILCHECK(EYCBCTR)) = A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
 /* line 942: */
A_CLOSURE( GYCBCTR_generator, HYCBCTR_generator, IYCBCTR_generator );
A_CALLPROC(GYCBCTR_generator,(A68_FALSE, &LYCBCTR),(A68_FALSE, &LYCBCTR,(GYCBCTR_generator).nonlocals));
MYCBCTR = (&(A_NILCHECK((&DYCBCTR_x))->Ysnames)) ;
(*A_NILCHECK(MYCBCTR)) = LYCBCTR;
TOCBCTR_nextstring(  &NYCBCTR );
OYCBCTR = (&(A_NILCHECK((&DYCBCTR_x))->Name)) ;
(*A_NILCHECK(OYCBCTR)) = NYCBCTR;
 /* line 943: */
TOCBCTR_nextstring(  &PYCBCTR );
QYCBCTR = (&(A_NILCHECK((&DYCBCTR_x))->Uname)) ;
(*A_NILCHECK(QYCBCTR)) = PYCBCTR;
TOCBCTR_nextstring(  &RYCBCTR );
SYCBCTR = (&(A_NILCHECK((&DYCBCTR_x))->Lname)) ;
(*A_NILCHECK(SYCBCTR)) = RYCBCTR;
 /* line 944: */
TOCBCTR_nextstring(  &TYCBCTR );
UYCBCTR = (&(A_NILCHECK((&DYCBCTR_x))->Gname)) ;
(*A_NILCHECK(UYCBCTR)) = TYCBCTR;
 /* line 945: */
WYCBCTR = (*A_NILCHECK((&(A_NILCHECK((&DYCBCTR_x))->Ysnames)))) ;
XYCBCTR = WYCBCTR.dim[0].upb - WYCBCTR.dim[0].lwb;
VYCBCTR_ysname = WYCBCTR.data;
for (;XYCBCTR-- >= 0;
(VYCBCTR_ysname += WYCBCTR.dim[0].stride
) )
{
TOCBCTR_nextstring(  &YYCBCTR );
(*A_NILCHECK(VYCBCTR_ysname)) = YYCBCTR;
}
 /* line 946: */
 /* line 947: */
 /* line 948: */
 /* line 949: */
RSCBCTR = A_UNITE(ZYCBCTR,mode25,25,DYCBCTR_x);
} 
break;
default: 
 /* line 950: */
 /* line 953: */
SXIACTR_terminalerror(601) ;
RSCBCTR = A_EMPTY(AZCBCTR,26);
break;
} 
break;
case 2: 
{ 
CZCBCTR = (&(A_NILCHECK((&BZCBCTR_w))->W)) ;
(void)((*A_NILCHECK(CZCBCTR)) = (HSCBCTR_type-RCCBCTR_warnbase));
 /* line 956: */
RSCBCTR = A_UNITE(DZCBCTR,mode13,13,BZCBCTR_w);
} 
break;
case 3: 
{ 
FZCBCTR = (&(A_NILCHECK((&EZCBCTR_i))->Type)) ;
(void)((*A_NILCHECK(FZCBCTR)) = (HSCBCTR_type-SCCBCTR_iddecbase));
 /* line 957: */
GZCBCTR = (&(A_NILCHECK((&EZCBCTR_i))->Mode)) ;
(void)((*A_NILCHECK(GZCBCTR)) = A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
HZCBCTR = (&(A_NILCHECK((&EZCBCTR_i))->Decno)) ;
(void)((*A_NILCHECK(HZCBCTR)) = A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
 /* line 958: */
TOCBCTR_nextstring(  &IZCBCTR );
JZCBCTR = (&(A_NILCHECK((&EZCBCTR_i))->Name)) ;
(*A_NILCHECK(JZCBCTR)) = IZCBCTR;
 /* line 959: */
 /* line 960: */
 /* line 963: */
RSCBCTR = A_UNITE(KZCBCTR,mode11,11,EZCBCTR_i);
} 
break;
case 4: 
{ 
MZCBCTR = (&(A_NILCHECK((&LZCBCTR_s))->Fn)) ;
(void)((*A_NILCHECK(MZCBCTR)) = (HSCBCTR_type-TCCBCTR_starterbase));
 /* line 964: */
NZCBCTR = (&(A_NILCHECK((&LZCBCTR_s))->Mode)) ;
(void)((*A_NILCHECK(NZCBCTR)) = A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
OZCBCTR = (&(A_NILCHECK((&LZCBCTR_s))->Props)) ;
(void)((*A_NILCHECK(OZCBCTR)) = (A68_BITS )A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
 /* line 965: */
PZCBCTR = (&(A_NILCHECK((&LZCBCTR_s))->Resultmode)) ;
(void)((*A_NILCHECK(PZCBCTR)) = A_CALLPROC(ROCBCTR_next,(),((ROCBCTR_next).nonlocals)));
 /* line 966: */
 /* line 967: */
 /* line 968: */
RSCBCTR = A_UNITE(QZCBCTR,mode21,21,LZCBCTR_s);
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
RZCBCTR_imperative = RSCBCTR;
 /* line 971: */
 /* line 972: */
 /* line 973: */
if (GNCBCTR_printstream)
{ 
VDXACTR_imperativemnemonic( RZCBCTR_imperative, &SZCBCTR );
TZCBCTR_string = SZCBCTR;
 /* line 975: */
 /* line 969: */
 /* line 976: */
if (TZCBCTR_string.upb<120)
{ 
 /* line 977: */
 /* line 978: */
(void)(A_CALLPROC(MSIACTR_list,(TZCBCTR_string),(TZCBCTR_string,(MSIACTR_list).nonlocals)));
} 
else
{ 
(void)(A_CALLPROC(MSIACTR_list,(A_VTRIM(UZCBCTR,(TZCBCTR_string),A_VTSCRIPT(&(UZCBCTR.upb),(TZCBCTR_string).upb,1,120))),(A_VTRIM(UZCBCTR,(TZCBCTR_string),A_VTSCRIPT(&(UZCBCTR.upb),(TZCBCTR_string).upb,1,120)),(MSIACTR_list).nonlocals)));
 /* line 979: */
 /* line 980: */
 /* line 981: */
(void)(A_CALLPROC(MSIACTR_list,(A_VC_PLUS(A_C_TIMES(' ',35),A_VTRIM(VZCBCTR,(TZCBCTR_string),A_VTSCRIPT(&(VZCBCTR.upb),(TZCBCTR_string).upb,121,(TZCBCTR_string).upb)))),(A_VC_PLUS(A_C_TIMES(' ',35),A_VTRIM(VZCBCTR,(TZCBCTR_string),A_VTSCRIPT(&(VZCBCTR.upb),(TZCBCTR_string).upb,121,(TZCBCTR_string).upb))),(MSIACTR_list).nonlocals)));
} 
} 
 /* line 982: */
 /* line 983: */
WZCBCTR = RZCBCTR_imperative;
} 
A_PROC_EXIT(nextstreamimperative);
*ReturnedValue = (WZCBCTR);
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
A68_156  TZBBCTR;  /* collateral clause result */
A68_275  VZBBCTR;  /* collateral clause result */
A68_VC  WZBBCTR;  /* OPERATORS - nil -> mode */
A68_276  BACBCTR;  /* avoid structure result */
A68_280  FACBCTR;  /* OPERATORS - istruct -> vector */
A68_280  GACBCTR;  /* OPERATORS - trim index */
A68_279  HACBCTR;  /* OPERATORS - trim index */
A68_279  LACBCTR;  /* OPERATORS - trim index */
A68_279  MACBCTR;  /* forall yield */
A68_INT  NACBCTR;  /* forall loop counter */
A68_276  SACBCTR;  /* avoid structure result */
A68_276 * TACBCTR;  /* YIELD */
A68_276  UACBCTR;  /* OPERATORS - simple index */
A68_INT * VACBCTR;  /* YIELD */
A68_INT  WACBCTR;  /* YIELD */
A68_VC  XACBCTR;  /* OPERATORS - istruct -> vector */
A68_281 * YACBCTR;  /* OPERATORS - istruct -> vector */
A68_VC * ZACBCTR;  /* YIELD */
A68_VC * ABCBCTR;  /* YIELD */
A68_279  CBCBCTR;  /* OPERATORS - trim index */
A68_279  DBCBCTR;  /* forall yield */
A68_INT  EBCBCTR;  /* forall loop counter */
A68_INT  KBCBCTR;  /* YIELD */
A68_282  MDCBCTR;  /* avoid structure result */
A68_181  IECBCTR;  /* avoid structure result */
A68_284  JECBCTR;  /* collateral clause result */
A68_181  KECBCTR;  /* OPERATORS - trim index */
A68_181  LECBCTR;  /* OPERATORS - istruct to row */
A68_181  MECBCTR;  /* OPERATORS - trim index */
A68_181  NECBCTR;  /* OPERATORS - trim index */
A68_181  OECBCTR;  /* YIELD */
A68_181  PECBCTR;  /* OPERATORS - assign op */
A68_181  RECBCTR;  /* OPERATORS - trim index */
A68_181  SECBCTR;  /* forall yield */
A68_INT  TECBCTR;  /* forall loop counter */
A68_182  UECBCTR;  /* collateral clause result */
A68_182  VECBCTR;  /* collateral clause result */
A68_INT  WECBCTR;  /* YIELD */
A68_182 * XECBCTR;  /* YIELD */
A68_BOOL  YECBCTR;  /* clause result */
A68_182  ZECBCTR;  /* collateral clause result */
A68_INT  AFCBCTR;  /* YIELD */
A68_182 * BFCBCTR;  /* YIELD */
A68_BOOL  CFCBCTR;  /* clause result */
A68_BOOL  DFCBCTR;  /* clause result */
A68_INT  FFCBCTR;  /* to part of loop */
A68_182  GFCBCTR;  /* collateral clause result */
A68_182 * HFCBCTR;  /* YIELD */
A68_182  IFCBCTR;  /* collateral clause result */
A68_INT  JFCBCTR;  /* YIELD */
A68_182 * KFCBCTR;  /* YIELD */
A68_180  TMCBCTR;  /* clause result */
A68_180  UMCBCTR;  /* procedure value */
A68_180  VMCBCTR;  /* procedure value */
A68_174  WMCBCTR;  /* procedure value */
A68_175  XMCBCTR;  /* procedure value */
A68_176  YMCBCTR;  /* procedure value */
A68_177  ZMCBCTR;  /* procedure value */
A68_178  ANCBCTR;  /* procedure value */
A68_179  BNCBCTR;  /* procedure value */
A68_VC  ENCBCTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  FNCBCTR;  /* clause result */
A68_INT  KNCBCTR;  /* forall loop counter */
A68_VC  LNCBCTR;  /* OPERATORS - nil -> mode */
A68_VC  MNCBCTR;  /* != */
A68_VC  NNCBCTR;  /* != */
A68_VC  SNCBCTR;  /* OPERATORS - trim index */
A68_VC  TNCBCTR;  /* OPERATORS - trim index */
A68_VC * UNCBCTR;  /* YIELD */
A68_INT  XNCBCTR;  /* forall loop counter */
A68_VC  ZNCBCTR;  /* avoid structure result */
A68_VC  BOCBCTR;  /* avoid structure result */
A68_INT  COCBCTR;  /* YIELD */
A68_86  SOCBCTR;  /* procedure value */
A68_184  XZCBCTR;  /* procedure value */
A68_305  YZCBCTR;  /* collateral clause result */
A68_212  BADBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  CADBCTR;  /* YIELD */
A68_212  DADBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_211  EADBCTR;  /* OPERATORS - istruct -> vector */
A68_301  FADBCTR;  /* collateral clause result */
A68_212  IADBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  JADBCTR;  /* YIELD */
A68_212  KADBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_212  NADBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  OADBCTR;  /* YIELD */
A68_212  PADBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_211  QADBCTR;  /* OPERATORS - istruct -> vector */
A68_212  RADBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_211  SADBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_212  TADBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_211  UADBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_212  VADBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  WADBCTR;  /* YIELD */
A68_211  XADBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_212  YADBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_211  ZADBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_212  ABDBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  BBDBCTR;  /* YIELD */
A68_211  CBDBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  EBDBCTR;  /* to part of loop */
A68_212  FBDBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  GBDBCTR;  /* YIELD */
A68_211  HBDBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_212  IBDBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  JBDBCTR;  /* YIELD */
A68_211  KBDBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_GC_STARTUP(argc);
BAAALIB();   /* USE a68config */
RHMACTR();   /* USE uniquenameserver */
BCHACTR();   /* USE moduletracer */
ANOACTR();   /* USE modules */
DNMACTR();   /* USE modes */
TZWACTR();   /* USE mnemonics */
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
OEBBCTR();   /* USE compiler */
ZJAACTR();   /* USE rscompiler */
THAACTR();   /* USE centities */
CSCAOSF();   /* USE osif */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc.a68";
A_config.translation_time = "Thu Nov  5 21:56:13 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "OZBBCTR (from seed file) ";
A_config.spec_change_time = "no spec";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
#ifdef A_prelude
A_prelude(argc,argv,envp);
#endif
A_PROC_ENTRY(MAIN);
{ 
(void)(UEAALIB_a68config(LGAALIB_configinfo, SZBBCTR));
 /* line 53: */
TZBBCTR.Norden = 0;
TZBBCTR.Nomodes = 0;
TZBBCTR.Nolabs = 0;
TZBBCTR.Nodecnos = HAAACTR_minidno;
TZBBCTR.Nomodules = 0;
TZBBCTR.Nolibinds = 0;
UZBBCTR_xsizes = TZBBCTR;
 /* line 60: */
 /* line 65: */
 /* line 67: */
VZBBCTR.Streambuffer = A_VVAC(WZBBCTR);
VZBBCTR.Streamptr = 0;
YZBBCTR_generator( A68_FALSE, &BACBCTR );
VZBBCTR.Buffers = BACBCTR;
VZBBCTR.Currentbuffer = 0;
CACBCTR_unsetstream = VZBBCTR;
 /* line 69: */
 /* line 70: */
GACBCTR = A_ISVEC(FACBCTR,(&DACBCTR_streams_area),20,A68_275 ) ;
EACBCTR_streams = A_VTRIM(HACBCTR,(GACBCTR),A_VRTSCRIPT(&(HACBCTR.dim[0]),(GACBCTR).upb,1,(GACBCTR).upb,0));
 /* line 72: */
 /* line 74: */
 /* line 76: */
 /* line 77: */
MACBCTR = A_R1TRIM(LACBCTR,(EACBCTR_streams),A_RTSCRIPT(&(LACBCTR.dim[0]),&((EACBCTR_streams).dim[0]),(EACBCTR_streams).dim[0].lwb,JACBCTR_fixedstreams,1)) ;
NACBCTR = MACBCTR.dim[0].upb - MACBCTR.dim[0].lwb;
KACBCTR_stream = MACBCTR.data;
for (;NACBCTR-- >= 0;
(KACBCTR_stream += MACBCTR.dim[0].stride
) )
{
 /* line 78: */
 /* line 79: */
 /* line 82: */
PACBCTR_generator( A68_FALSE, &SACBCTR );
TACBCTR = (&(A_NILCHECK(KACBCTR_stream)->Buffers)) ;
UACBCTR = (*A_NILCHECK(TACBCTR)) = SACBCTR ;
VACBCTR = (&(A_NILCHECK(KACBCTR_stream)->Currentbuffer)) ;
WACBCTR = (*A_NILCHECK(VACBCTR)) = 1 ;
YACBCTR = A_LOC(A68_281 ) ;
ZACBCTR = (&A_VINDEX(UACBCTR,WACBCTR)) ;
ABCBCTR = (&(A_NILCHECK(KACBCTR_stream)->Streambuffer)) ;
(void)((*A_NILCHECK(ABCBCTR)) = (*A_NILCHECK(ZACBCTR)) = A_ISVEC(XACBCTR,YACBCTR,11,A68_CHAR ));
}
 /* line 84: */
DBCBCTR = A_R1TRIM(CBCBCTR,(EACBCTR_streams),A_RTSCRIPT(&(CBCBCTR.dim[0]),&((EACBCTR_streams).dim[0]),(JACBCTR_fixedstreams+1),(EACBCTR_streams).dim[0].upb,1)) ;
EBCBCTR = DBCBCTR.dim[0].upb - DBCBCTR.dim[0].lwb;
BBCBCTR_stream = DBCBCTR.data;
for (;EBCBCTR-- >= 0;
(BBCBCTR_stream += DBCBCTR.dim[0].stride
) )
{
(*A_NILCHECK(BBCBCTR_stream)) = CACBCTR_unsetstream;
}
 /* line 85: */
IACBCTR_current = CACBCTR_unsetstream;
 /* line 87: */
FBCBCTR_streambuffer = (&(A_NILCHECK((&IACBCTR_current))->Streambuffer));
 /* line 88: */
GBCBCTR_strptr = (&(A_NILCHECK((&IACBCTR_current))->Streamptr));
 /* line 89: */
HBCBCTR_currentbuffer = (&(A_NILCHECK((&IACBCTR_current))->Currentbuffer));
 /* line 90: */
IBCBCTR_buffers = (&(A_NILCHECK((&IACBCTR_current))->Buffers));
 /* line 92: */
KBCBCTR = 0 ;
JBCBCTR_curstradd = (&A_R1INDEX(EACBCTR_streams,KBCBCTR));
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
DDCBCTR_inputfile = QVBAOSF_open_file(XQIACTR_sourcefilename, ATBAOSF_read_access, RIBAOSF_ignore_msg);
 /* line 147: */
if (DDCBCTR_inputfile==(A68_59 *)A68_NIL)
{ 
(void)(SXIACTR_terminalerror(250));
} 
 /* line 149: */
EDCBCTR_line_start = 1;
 /* line 150: */
FDCBCTR_line_length = 0;
 /* line 152: */
GDCBCTR_line_pending = A68_FALSE;
 /* line 154: */
XRIACTR_linenumber = 0;
 /* line 156: */
IDCBCTR_generator( A68_TRUE, &MDCBCTR );
LDCBCTR_flexinputline = MDCBCTR;
 /* line 158: */
 /* line 212: */
EECBCTR_generator( A68_TRUE, &IECBCTR );
HECBCTR_charset = IECBCTR;
 /* line 213: */
 /* line 215: */
JECBCTR.data[0].Type = 2;
JECBCTR.data[0].Value = 37;
JECBCTR.data[1].Type = 1;
JECBCTR.data[1].Value = 100;
JECBCTR.data[2].Type = 1;
JECBCTR.data[2].Value = 100;
JECBCTR.data[3].Type = 1;
JECBCTR.data[3].Value = 100;
JECBCTR.data[4].Type = 1;
JECBCTR.data[4].Value = 100;
JECBCTR.data[5].Type = 1;
JECBCTR.data[5].Value = 100;
JECBCTR.data[6].Type = 1;
JECBCTR.data[6].Value = 100;
JECBCTR.data[7].Type = 1;
 /* line 216: */
JECBCTR.data[7].Value = 100;
JECBCTR.data[8].Type = 1;
JECBCTR.data[8].Value = 100;
JECBCTR.data[9].Type = 2;
JECBCTR.data[9].Value = 37;
JECBCTR.data[10].Type = 2;
JECBCTR.data[10].Value = 37;
JECBCTR.data[11].Type = 2;
JECBCTR.data[11].Value = 37;
JECBCTR.data[12].Type = 2;
JECBCTR.data[12].Value = 37;
JECBCTR.data[13].Type = 1;
JECBCTR.data[13].Value = 100;
JECBCTR.data[14].Type = 1;
JECBCTR.data[14].Value = 100;
JECBCTR.data[15].Type = 1;
 /* line 217: */
JECBCTR.data[15].Value = 100;
JECBCTR.data[16].Type = 1;
JECBCTR.data[16].Value = 100;
JECBCTR.data[17].Type = 1;
JECBCTR.data[17].Value = 100;
JECBCTR.data[18].Type = 1;
JECBCTR.data[18].Value = 100;
JECBCTR.data[19].Type = 1;
JECBCTR.data[19].Value = 100;
JECBCTR.data[20].Type = 1;
JECBCTR.data[20].Value = 100;
JECBCTR.data[21].Type = 1;
JECBCTR.data[21].Value = 100;
JECBCTR.data[22].Type = 1;
JECBCTR.data[22].Value = 100;
JECBCTR.data[23].Type = 1;
 /* line 218: */
JECBCTR.data[23].Value = 100;
JECBCTR.data[24].Type = 1;
JECBCTR.data[24].Value = 100;
JECBCTR.data[25].Type = 1;
JECBCTR.data[25].Value = 100;
JECBCTR.data[26].Type = 1;
JECBCTR.data[26].Value = 100;
JECBCTR.data[27].Type = 1;
JECBCTR.data[27].Value = 100;
JECBCTR.data[28].Type = 1;
JECBCTR.data[28].Value = 100;
JECBCTR.data[29].Type = 1;
JECBCTR.data[29].Value = 100;
JECBCTR.data[30].Type = 1;
JECBCTR.data[30].Value = 100;
JECBCTR.data[31].Type = 1;
 /* line 219: */
JECBCTR.data[31].Value = 100;
JECBCTR.data[32].Type = 2;
JECBCTR.data[32].Value = 37;
JECBCTR.data[33].Type = 20;
JECBCTR.data[33].Value = 45;
JECBCTR.data[34].Type = 5;
JECBCTR.data[34].Value = 100;
JECBCTR.data[35].Type = 20;
JECBCTR.data[35].Value = 62;
JECBCTR.data[36].Type = 20;
JECBCTR.data[36].Value = 160;
JECBCTR.data[37].Type = 21;
JECBCTR.data[37].Value = 214;
JECBCTR.data[38].Type = 21;
JECBCTR.data[38].Value = 229;
JECBCTR.data[39].Type = 1;
 /* line 220: */
JECBCTR.data[39].Value = 100;
JECBCTR.data[40].Type = 20;
JECBCTR.data[40].Value = 50;
JECBCTR.data[41].Type = 20;
JECBCTR.data[41].Value = 54;
JECBCTR.data[42].Type = 22;
JECBCTR.data[42].Value = 212;
JECBCTR.data[43].Type = 21;
JECBCTR.data[43].Value = 200;
JECBCTR.data[44].Type = 20;
JECBCTR.data[44].Value = 128;
JECBCTR.data[45].Type = 21;
JECBCTR.data[45].Value = 201;
JECBCTR.data[46].Type = 20;
JECBCTR.data[46].Value = 130;
JECBCTR.data[47].Type = 22;
 /* line 221: */
JECBCTR.data[47].Value = 213;
JECBCTR.data[48].Type = 4;
JECBCTR.data[48].Value = 0;
JECBCTR.data[49].Type = 4;
JECBCTR.data[49].Value = 1;
JECBCTR.data[50].Type = 4;
JECBCTR.data[50].Value = 2;
JECBCTR.data[51].Type = 4;
JECBCTR.data[51].Value = 3;
JECBCTR.data[52].Type = 4;
JECBCTR.data[52].Value = 4;
JECBCTR.data[53].Type = 4;
JECBCTR.data[53].Value = 5;
JECBCTR.data[54].Type = 4;
JECBCTR.data[54].Value = 6;
JECBCTR.data[55].Type = 4;
 /* line 222: */
JECBCTR.data[55].Value = 7;
JECBCTR.data[56].Type = 4;
JECBCTR.data[56].Value = 8;
JECBCTR.data[57].Type = 4;
JECBCTR.data[57].Value = 9;
JECBCTR.data[58].Type = 22;
JECBCTR.data[58].Value = 84;
JECBCTR.data[59].Type = 20;
JECBCTR.data[59].Value = 111;
JECBCTR.data[60].Type = 22;
JECBCTR.data[60].Value = 206;
JECBCTR.data[61].Type = 22;
JECBCTR.data[61].Value = 210;
JECBCTR.data[62].Type = 22;
JECBCTR.data[62].Value = 207;
JECBCTR.data[63].Type = 21;
 /* line 223: */
JECBCTR.data[63].Value = 217;
JECBCTR.data[64].Type = 20;
JECBCTR.data[64].Value = 154;
JECBCTR.data[65].Type = 6;
JECBCTR.data[65].Value = (-98);
JECBCTR.data[66].Type = 6;
JECBCTR.data[66].Value = (-99);
JECBCTR.data[67].Type = 6;
JECBCTR.data[67].Value = (-100);
JECBCTR.data[68].Type = 6;
JECBCTR.data[68].Value = (-101);
JECBCTR.data[69].Type = 6;
JECBCTR.data[69].Value = (-102);
JECBCTR.data[70].Type = 6;
JECBCTR.data[70].Value = (-103);
JECBCTR.data[71].Type = 6;
 /* line 224: */
JECBCTR.data[71].Value = (-104);
JECBCTR.data[72].Type = 6;
JECBCTR.data[72].Value = (-105);
JECBCTR.data[73].Type = 6;
JECBCTR.data[73].Value = (-106);
JECBCTR.data[74].Type = 6;
JECBCTR.data[74].Value = (-107);
JECBCTR.data[75].Type = 6;
JECBCTR.data[75].Value = (-108);
JECBCTR.data[76].Type = 6;
JECBCTR.data[76].Value = (-109);
JECBCTR.data[77].Type = 6;
JECBCTR.data[77].Value = (-110);
JECBCTR.data[78].Type = 6;
JECBCTR.data[78].Value = (-111);
JECBCTR.data[79].Type = 6;
 /* line 225: */
JECBCTR.data[79].Value = (-112);
JECBCTR.data[80].Type = 6;
JECBCTR.data[80].Value = (-113);
JECBCTR.data[81].Type = 6;
JECBCTR.data[81].Value = (-114);
JECBCTR.data[82].Type = 6;
JECBCTR.data[82].Value = (-115);
JECBCTR.data[83].Type = 6;
JECBCTR.data[83].Value = (-116);
JECBCTR.data[84].Type = 6;
JECBCTR.data[84].Value = (-117);
JECBCTR.data[85].Type = 6;
JECBCTR.data[85].Value = (-118);
JECBCTR.data[86].Type = 6;
JECBCTR.data[86].Value = (-119);
JECBCTR.data[87].Type = 6;
 /* line 226: */
JECBCTR.data[87].Value = (-120);
JECBCTR.data[88].Type = 6;
JECBCTR.data[88].Value = (-121);
JECBCTR.data[89].Type = 6;
JECBCTR.data[89].Value = (-122);
JECBCTR.data[90].Type = 6;
JECBCTR.data[90].Value = (-123);
JECBCTR.data[91].Type = 20;
JECBCTR.data[91].Value = 159;
JECBCTR.data[92].Type = 20;
JECBCTR.data[92].Value = 175;
JECBCTR.data[93].Type = 20;
JECBCTR.data[93].Value = 161;
JECBCTR.data[94].Type = 20;
JECBCTR.data[94].Value = 233;
JECBCTR.data[95].Type = 3;
 /* line 227: */
JECBCTR.data[95].Value = 36;
JECBCTR.data[96].Type = 1;
JECBCTR.data[96].Value = 100;
JECBCTR.data[97].Type = 3;
JECBCTR.data[97].Value = 10;
JECBCTR.data[98].Type = 3;
JECBCTR.data[98].Value = 11;
JECBCTR.data[99].Type = 3;
JECBCTR.data[99].Value = 12;
JECBCTR.data[100].Type = 3;
JECBCTR.data[100].Value = 13;
JECBCTR.data[101].Type = 3;
JECBCTR.data[101].Value = 14;
JECBCTR.data[102].Type = 3;
JECBCTR.data[102].Value = 15;
JECBCTR.data[103].Type = 3;
 /* line 228: */
JECBCTR.data[103].Value = 16;
JECBCTR.data[104].Type = 3;
JECBCTR.data[104].Value = 17;
JECBCTR.data[105].Type = 3;
JECBCTR.data[105].Value = 18;
JECBCTR.data[106].Type = 3;
JECBCTR.data[106].Value = 19;
JECBCTR.data[107].Type = 3;
JECBCTR.data[107].Value = 20;
JECBCTR.data[108].Type = 3;
JECBCTR.data[108].Value = 21;
JECBCTR.data[109].Type = 3;
JECBCTR.data[109].Value = 22;
JECBCTR.data[110].Type = 3;
JECBCTR.data[110].Value = 23;
JECBCTR.data[111].Type = 3;
 /* line 229: */
JECBCTR.data[111].Value = 24;
JECBCTR.data[112].Type = 3;
JECBCTR.data[112].Value = 25;
JECBCTR.data[113].Type = 3;
JECBCTR.data[113].Value = 26;
JECBCTR.data[114].Type = 3;
JECBCTR.data[114].Value = 27;
JECBCTR.data[115].Type = 3;
JECBCTR.data[115].Value = 28;
JECBCTR.data[116].Type = 3;
JECBCTR.data[116].Value = 29;
JECBCTR.data[117].Type = 3;
JECBCTR.data[117].Value = 30;
JECBCTR.data[118].Type = 3;
JECBCTR.data[118].Value = 31;
JECBCTR.data[119].Type = 3;
 /* line 230: */
JECBCTR.data[119].Value = 32;
JECBCTR.data[120].Type = 3;
JECBCTR.data[120].Value = 33;
JECBCTR.data[121].Type = 3;
JECBCTR.data[121].Value = 34;
JECBCTR.data[122].Type = 3;
JECBCTR.data[122].Value = 35;
JECBCTR.data[123].Type = 20;
JECBCTR.data[123].Value = 67;
JECBCTR.data[124].Type = 20;
JECBCTR.data[124].Value = 45;
JECBCTR.data[125].Type = 20;
JECBCTR.data[125].Value = 68;
JECBCTR.data[126].Type = 1;
JECBCTR.data[126].Value = 100;
JECBCTR.data[127].Type = 1;
JECBCTR.data[127].Value = 100;
MECBCTR = A_HIS1ARR(LECBCTR,JECBCTR,A68_182 ,128) ;
OECBCTR = A_R1TRIM(KECBCTR,(HECBCTR_charset),A_RTSCRIPT(&(KECBCTR.dim[0]),&((HECBCTR_charset).dim[0]),(HECBCTR_charset).dim[0].lwb,127,0)) ;
PECBCTR = A_R1TRIM(NECBCTR,(MECBCTR),A_RTSCRIPT(&(NECBCTR.dim[0]),&((MECBCTR).dim[0]),(MECBCTR).dim[0].lwb,(MECBCTR).dim[0].upb,0)) ;
(void)(A_R1ASSIGN2(PECBCTR,OECBCTR,A68_182 ));
 /* line 232: */
 /* line 233: */
SECBCTR = A_R1TRIM(RECBCTR,(HECBCTR_charset),A_RTSCRIPT(&(RECBCTR.dim[0]),&((HECBCTR_charset).dim[0]),128,(HECBCTR_charset).dim[0].upb,1)) ;
TECBCTR = SECBCTR.dim[0].upb - SECBCTR.dim[0].lwb;
QECBCTR_c = SECBCTR.data;
for (;TECBCTR-- >= 0;
(QECBCTR_c += SECBCTR.dim[0].stride
) )
{
 /* line 234: */
UECBCTR.Type = 1;
 /* line 235: */
UECBCTR.Value = 100;
(*A_NILCHECK(QECBCTR_c)) = UECBCTR;
}
 /* line 237: */
if (CQIACTR_dotoption)
{ 
VECBCTR.Type = 7;
VECBCTR.Value = 130;
WECBCTR = (A68_INT)(unsigned char)'.' ;
XECBCTR = (&A_R1INDEX(HECBCTR_charset,WECBCTR)) ;
(*A_NILCHECK(XECBCTR)) = VECBCTR;
YECBCTR = A68_TRUE;
} 
else
{ 
YECBCTR = A68_FALSE;
} 
if (DQIACTR_quoteoption)
{ 
ZECBCTR.Type = 8;
ZECBCTR.Value = 100;
AFCBCTR = (A68_INT)(unsigned char)'\'' ;
BFCBCTR = (&A_R1INDEX(HECBCTR_charset,AFCBCTR)) ;
(*A_NILCHECK(BFCBCTR)) = ZECBCTR;
CFCBCTR = A68_TRUE;
} 
else
{ 
CFCBCTR = A68_FALSE;
} 
 /* line 238: */
DFCBCTR = (YECBCTR|CFCBCTR);
if (DFCBCTR)
{ 
FFCBCTR = (A68_INT)(unsigned char)'Z';
for ( EFCBCTR_i = (A68_INT)(unsigned char)'A';
EFCBCTR_i <= FFCBCTR;
EFCBCTR_i += 1 )
{ 
 /* line 239: */
GFCBCTR.Type = 1;
GFCBCTR.Value = 100;
HFCBCTR = (&A_R1INDEX(HECBCTR_charset,EFCBCTR_i)) ;
(*A_NILCHECK(HFCBCTR)) = GFCBCTR;
}
 /* line 240: */
} 
 /* line 241: */
if (FQIACTR_tildeoption)
{ 
IFCBCTR.Type = 3;
IFCBCTR.Value = 36;
JFCBCTR = (A68_INT)(unsigned char)'~' ;
KFCBCTR = (&A_R1INDEX(HECBCTR_charset,JFCBCTR)) ;
(*A_NILCHECK(KFCBCTR)) = IFCBCTR;
} 
 /* line 250: */
NFCBCTR_contval = MFCBCTR;
 /* line 252: */
OFCBCTR_upped = A68_FALSE;
 /* line 254: */
 /* line 255: */
QFCBCTR_xtmodulepending = A68_FALSE;
 /* line 257: */
RFCBCTR_timeschecked = A68_FALSE;
 /* line 259: */
 /* line 262: */
 /* line 568: */
(void)(NULACTR_initcoutput(YQIACTR_basenamesourcefile));
 /* line 571: */
 /* line 572: */
if (IQIACTR_optbooloption)
{ 
UMCBCTR.fn.fn_global = HPKACTR_optboollookup;
UMCBCTR.nonlocals = A68_NIL;
TMCBCTR = UMCBCTR;
} 
else
{ 
VMCBCTR.fn.fn_global = SOKACTR_lookup;
VMCBCTR.nonlocals = A68_NIL;
TMCBCTR = VMCBCTR;
} 
WMCBCTR.fn.fn_global = PDCBCTR_input;
WMCBCTR.nonlocals = A68_NIL;
XMCBCTR.fn.fn_global = VFCBCTR_output;
XMCBCTR.nonlocals = A68_NIL;
YMCBCTR.fn.fn_global = EXIACTR_fault;
YMCBCTR.nonlocals = A68_NIL;
ZMCBCTR.fn.fn_global = KDHACTR_message;
ZMCBCTR.nonlocals = A68_NIL;
ANCBCTR.fn.fn_global = NBPACTR_givemoduledetails;
ANCBCTR.nonlocals = A68_NIL;
BNCBCTR.fn.fn_global = SOOACTR_givespec;
BNCBCTR.nonlocals = A68_NIL;
(void)(URAACTR_compile(WMCBCTR, XMCBCTR, YMCBCTR, ZMCBCTR, ANCBCTR, BNCBCTR, TMCBCTR, HECBCTR_charset));
 /* line 574: */
 /* line 575: */
{ 
 /* line 576: */
 /* line 577: */
 /* line 578: */
(void)(PDCBCTR_input(A_ISVEC(ENCBCTR,(&CNCBCTR_wasteline),160,A68_CHAR ), (&DNCBCTR_wastesize)));
} 
 /* line 580: */
(void)(IWBAOSF_close_file(DDCBCTR_inputfile, RIBAOSF_ignore_msg));
 /* line 582: */
 /* line 583: */
 /* line 584: */
 /* line 588: */
FNCBCTR = (DSIACTR_greatestseverity<=2);
} 
if (FNCBCTR)
{ 
XRIACTR_linenumber = 1;
 /* line 590: */
GNCBCTR_printstream = GQIACTR_streamoption;
 /* line 596: */
(*A_NILCHECK(JBCBCTR_curstradd)) = IACBCTR_current;
 /* line 598: */
HNCBCTR_level = 0;
 /* line 599: */
INCBCTR_s = 0;
 /* line 601: */
 /* line 602: */
KNCBCTR = EACBCTR_streams.dim[0].upb - EACBCTR_streams.dim[0].lwb;
JNCBCTR_stream = EACBCTR_streams.data;
for (;KNCBCTR-- >= 0;
(JNCBCTR_stream += EACBCTR_streams.dim[0].stride
) )
{
 /* line 603: */
 /* line 604: */
MNCBCTR = A_VVAC(LNCBCTR) ;
NNCBCTR = (*A_NILCHECK((&(A_NILCHECK(JNCBCTR_stream)->Streambuffer)))) ;
if ( !(! A_VSTRUCTCOMP(NNCBCTR,MNCBCTR)) ) break;
ONCBCTR_streamptr = (&(A_NILCHECK(JNCBCTR_stream)->Streamptr));
 /* line 605: */
PNCBCTR_currentbuffer = (&(A_NILCHECK(JNCBCTR_stream)->Currentbuffer));
 /* line 606: */
QNCBCTR_streambuffer = (&(A_NILCHECK(JNCBCTR_stream)->Streambuffer));
 /* line 607: */
RNCBCTR_buffers = (&(A_NILCHECK(JNCBCTR_stream)->Buffers));
 /* line 609: */
SNCBCTR = (*A_NILCHECK((&A_VINDEX((*A_NILCHECK(RNCBCTR_buffers)),(*A_NILCHECK(PNCBCTR_currentbuffer)))))) ;
UNCBCTR = (&A_VINDEX((*A_NILCHECK(RNCBCTR_buffers)),(*A_NILCHECK(PNCBCTR_currentbuffer)))) ;
(void)((*A_NILCHECK(UNCBCTR)) = A_VTRIM(TNCBCTR,(SNCBCTR),A_VTSCRIPT(&(TNCBCTR.upb),(SNCBCTR).upb,1,(*A_NILCHECK(ONCBCTR_streamptr)))));
 /* line 611: */
 /* line 612: */
 /* line 613: */
if (GNCBCTR_printstream)
{ 
VNCBCTR_bytesused = 0;
 /* line 614: */
XNCBCTR = (*A_NILCHECK(RNCBCTR_buffers)).upb -1;
WNCBCTR_b = (*A_NILCHECK(RNCBCTR_buffers)).data;
for (;XNCBCTR-- >= 0;
(WNCBCTR_b++
) )
{
VNCBCTR_bytesused+=(*A_NILCHECK(WNCBCTR_b)).upb;
}
 /* line 615: */
 /* line 616: */
 /* line 617: */
ROAAOSF_whole( VNCBCTR_bytesused, (-7), &ZNCBCTR );
ROAAOSF_whole( INCBCTR_s, 0, &BOCBCTR );
(void)(A_CALLPROC(MSIACTR_list,(A_VC_PLUS(A_VC_PLUS(ZNCBCTR,AOCBCTR),BOCBCTR)),(A_VC_PLUS(A_VC_PLUS(ZNCBCTR,AOCBCTR),BOCBCTR),(MSIACTR_list).nonlocals)));
} 
 /* line 618: */
COCBCTR = (*A_NILCHECK(PNCBCTR_currentbuffer)) = 1 ;
(void)((*A_NILCHECK(QNCBCTR_streambuffer)) = (*A_NILCHECK((&A_VINDEX((*A_NILCHECK(RNCBCTR_buffers)),COCBCTR)))));
 /* line 619: */
(*A_NILCHECK(ONCBCTR_streamptr)) = 0;
 /* line 620: */
 /* line 621: */
INCBCTR_s+=1;
}
 /* line 623: */
(void)(IACBCTR_current = (*A_NILCHECK((&A_R1INDEX(EACBCTR_streams,HNCBCTR_level)))));
 /* line 625: */
 /* line 629: */
 /* line 633: */
 /* line 634: */
 /* line 646: */
 /* line 649: */
 /* line 651: */
 /* line 652: */
 /* line 659: */
SOCBCTR.fn.fn_global = LOCBCTR_nextint;
SOCBCTR.nonlocals = A68_NIL;
ROCBCTR_next = (SOCBCTR);
 /* line 661: */
 /* line 662: */
 /* line 663: */
 /* line 670: */
XOCBCTR_line_start = 0;
 /* line 671: */
YOCBCTR_line_length = 0;
 /* line 672: */
ZOCBCTR_statement_number = 0;
 /* line 674: */
APCBCTR_hundred_counter = (-1);
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
XZCBCTR.fn.fn_global = GSCBCTR_nextstreamimperative;
XZCBCTR.nonlocals = A68_NIL;
(void)(WEBBCTR_translator(XZCBCTR, (&UZBBCTR_xsizes), ICPACTR_keptdecnos));
} 
 /* line 992: */
 /* line 993: */
 /* line 996: */
if (DSIACTR_greatestseverity<=2)
{ 
(void)(GKMACTR_write_cfile_uname((*A_NILCHECK((&(A_NILCHECK((&IYIACTR_config_info))->Nameseed))))));
 /* line 1000: */
CADBCTR = AADBCTR ;
YZCBCTR.data[0] = A_UNITE(BADBCTR,mode2,2,CADBCTR);
YZCBCTR.data[1] = A_UNITE(DADBCTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(EADBCTR,YZCBCTR,2,A68_212 ), ESLACTR_preamblestream));
 /* line 1003: */
(void)(VSPACTR_declareusedids());
 /* line 1033: */
JADBCTR = HADBCTR ;
FADBCTR.data[0] = A_UNITE(IADBCTR,mode2,2,JADBCTR);
 /* line 1034: */
FADBCTR.data[1] = A_UNITE(KADBCTR,mode2,2,XQIACTR_sourcefilename);
OADBCTR = MADBCTR ;
FADBCTR.data[2] = A_UNITE(NADBCTR,mode2,2,OADBCTR);
FADBCTR.data[3] = A_UNITE(PADBCTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(QADBCTR,FADBCTR,4,A68_212 ), NSLACTR_codestream(0)));
 /* line 1036: */
(void)(MDMACTR_writecstream(A_HVEC(SADBCTR,A_UNITE(RADBCTR,mode3,3,FSLACTR_modesstream),A68_212 ), ESLACTR_preamblestream));
 /* line 1037: */
(void)(MDMACTR_writecstream(A_HVEC(UADBCTR,A_UNITE(TADBCTR,mode3,3,GSLACTR_importsstream),A68_212 ), FSLACTR_modesstream));
 /* line 1038: */
WADBCTR = KSLACTR_nonlocdecstream(0) ;
(void)(MDMACTR_writecstream(A_HVEC(XADBCTR,A_UNITE(VADBCTR,mode3,3,WADBCTR),A68_212 ), GSLACTR_importsstream));
 /* line 1039: */
(void)(MDMACTR_writecstream(A_HVEC(ZADBCTR,A_UNITE(YADBCTR,mode3,3,HSLACTR_externstream),A68_212 ), KSLACTR_nonlocdecstream(PPLACTR_highestlevel)));
 /* line 1040: */
BBDBCTR = NSLACTR_codestream(PPLACTR_highestlevel) ;
(void)(MDMACTR_writecstream(A_HVEC(CBDBCTR,A_UNITE(ABDBCTR,mode3,3,BBDBCTR),A68_212 ), HSLACTR_externstream));
 /* line 1042: */
 /* line 1043: */
 /* line 1044: */
if (PPLACTR_highestlevel>0)
{ 
 /* line 1045: */
EBDBCTR = (PPLACTR_highestlevel-1);
for ( DBDBCTR_level = 0;
DBDBCTR_level <= EBDBCTR;
DBDBCTR_level += 1 )
{ 
 /* line 1046: */
GBDBCTR = KSLACTR_nonlocdecstream((DBDBCTR_level+1)) ;
(void)(MDMACTR_writecstream(A_HVEC(HBDBCTR,A_UNITE(FBDBCTR,mode3,3,GBDBCTR),A68_212 ), KSLACTR_nonlocdecstream(DBDBCTR_level)));
 /* line 1047: */
 /* line 1048: */
JBDBCTR = NSLACTR_codestream(DBDBCTR_level) ;
(void)(MDMACTR_writecstream(A_HVEC(KBDBCTR,A_UNITE(IBDBCTR,mode3,3,JBDBCTR),A68_212 ), NSLACTR_codestream((DBDBCTR_level+1))));
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
