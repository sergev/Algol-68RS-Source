/* UNAME:CZBBCTR */
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
extern A68_VOID  JDXACTR_imperativemnemonic(struct A68t186 ,A68_VC *);
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
extern A68_VOID  KEBBCTR_translator(struct A68t184 ,struct A68t156 *,struct A68t185 );
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
extern void HZWACTR(void);   /* mnemonics */
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
extern void CEBBCTR(void);   /* compiler */
extern void ZJAACTR(void);   /* rscompiler */
extern void THAACTR(void);   /* centities */
extern void CSCAOSF(void);   /* osif */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_274   FZBBCTR = {"$Id: a68toc.a68,v 1.2 2002-02-04 09:26:51 sian Exp $"}; 
A_GISVEC(A68_VC ,GZBBCTR,FZBBCTR,52)
static A68_156  IZBBCTR_xsizes A_UNUSED;
static A68_275  QZBBCTR_unsetstream A_UNUSED;
static A68_278  RZBBCTR_streams_area A_UNUSED;
static A68_279  SZBBCTR_streams A_UNUSED;
static A68_275  WZBBCTR_current A_UNUSED;
#define XZBBCTR_fixedstreams 1
static A68_275 * YZBBCTR_stream A_UNUSED;
static A68_275 * PACBCTR_stream A_UNUSED;
static A68_VC * TACBCTR_streambuffer A_UNUSED;
static A68_INT * UACBCTR_strptr A_UNUSED;
static A68_INT * VACBCTR_currentbuffer A_UNUSED;
static A68_276 * WACBCTR_buffers A_UNUSED;
static A68_275 * XACBCTR_curstradd A_UNUSED;
#define XBCBCTR_separatorbase 16
#define YBCBCTR_terminatorbase 32
#define ZBCBCTR_semibase 48
#define ACCBCTR_loadbase 64
#define BCCBCTR_idbase 80
#define CCCBCTR_numberbase 90
#define DCCBCTR_operbase 128
#define ECCBCTR_miscellaneousbase 192
#define FCCBCTR_warnbase 208
#define GCCBCTR_iddecbase 224
#define HCCBCTR_starterbase 240
#define ICCBCTR_rangesize 64
#define JCCBCTR_subrangesize 16
#define KCCBCTR_linetype 10
#define LCCBCTR_maptype 11
#define MCCBCTR_notlastxcharstype 112
#define NCCBCTR_lastxcharstype 113
#define OCCBCTR_xcallmoduletype 200
#define PCCBCTR_xclosuretype 203
#define QCCBCTR_xtmoduletype 204
static A68_59 * RCCBCTR_inputfile A_UNUSED;
static A68_INT  SCCBCTR_line_start A_UNUSED;
static A68_INT  TCCBCTR_line_length A_UNUSED;
static A68_BOOL  UCCBCTR_line_pending A_UNUSED;
static A68_282  ZCCBCTR_flexinputline A_UNUSED;
static A68_181  VDCBCTR_charset A_UNUSED;
static A68_182 * EECBCTR_c A_UNUSED;
static A68_INT  SECBCTR_i A_UNUSED;
static A68_285   ZECBCTR = {"\0\361\362\363\364\021\022\023\024\025\026\027\030\031!\"#$\365\032\366\035%\367&\033\0'\301\034("}; 
A_GISVEC(A68_VC ,AFCBCTR,ZECBCTR,31)
static A68_VC  BFCBCTR_contval A_UNUSED;
static A68_BOOL  CFCBCTR_upped A_UNUSED;
static A68_162  DFCBCTR_lastxtmodule A_UNUSED;
static A68_BOOL  EFCBCTR_xtmodulepending A_UNUSED;
static A68_BOOL  FFCBCTR_timeschecked A_UNUSED;
static A68_INT  GFCBCTR_syntheticmoduleno A_UNUSED;
static A68_293  QMCBCTR_wasteline A_UNUSED;
static A68_INT  RMCBCTR_wastesize A_UNUSED;
static A68_BOOL  UMCBCTR_printstream A_UNUSED;
static A68_INT  VMCBCTR_level A_UNUSED;
static A68_INT  WMCBCTR_s A_UNUSED;
static A68_275 * XMCBCTR_stream A_UNUSED;
static A68_INT * CNCBCTR_streamptr A_UNUSED;
static A68_INT * DNCBCTR_currentbuffer A_UNUSED;
static A68_VC * ENCBCTR_streambuffer A_UNUSED;
static A68_276 * FNCBCTR_buffers A_UNUSED;
static A68_INT  JNCBCTR_bytesused A_UNUSED;
static A68_VC * KNCBCTR_b A_UNUSED;
static A68_294   MNCBCTR = {" bytes used in stream "}; 
A_GISVEC(A68_VC ,ONCBCTR,MNCBCTR,22)
static A68_INT  RNCBCTR_upbstring A_UNUSED;
static A68_VC  SNCBCTR_string A_UNUSED;
static A68_295   UNCBCTR = {"SHELL: incomplete stream"}; 
A_GISVEC(A68_VC ,VNCBCTR,UNCBCTR,24)
static A68_86  FOCBCTR_next A_UNUSED;
static A68_INT  LOCBCTR_line_start A_UNUSED;
static A68_INT  MOCBCTR_line_length A_UNUSED;
static A68_INT  NOCBCTR_statement_number A_UNUSED;
static A68_INT  OOCBCTR_hundred_counter A_UNUSED;
static A68_297   VOCBCTR = {"shell"}; 
A_GISVEC(A68_VC ,WOCBCTR,VOCBCTR,5)
static A68_298   YOCBCTR = {"At line "}; 
static A68_299   ZOCBCTR = {"..."}; 
A_GISVEC(A68_VC ,APCBCTR,YOCBCTR,8)
A_GISVEC(A68_VC ,CPCBCTR,ZOCBCTR,3)
static A68_300   GPCBCTR = {" /* line "}; 
A_GISVEC(A68_VC ,HPCBCTR,GPCBCTR,9)
static A68_40   MPCBCTR = {": */"}; 
A_GISVEC(A68_VC ,NPCBCTR,MPCBCTR,4)
static A68_295   WPCBCTR = {"invalid stream directive"}; 
A_GISVEC(A68_VC ,XPCBCTR,WPCBCTR,24)
static A68_302   QRCBCTR = {"SHELL: no last xchars"}; 
A_GISVEC(A68_VC ,RRCBCTR,QRCBCTR,21)
static A68_297   WRCBCTR = {"]    "}; 
A_GISVEC(A68_VC ,ZRCBCTR,WRCBCTR,5)
static A68_107   LWCBCTR = {"chars should be absorbed by load"}; 
A_GISVEC(A68_VC ,MWCBCTR,LWCBCTR,32)
static A68_304   NZCBCTR = {"#include <algol68/Asupport.h>"}; 
A_GISVEC(A68_VC ,OZCBCTR,NZCBCTR,29)
static A68_306   UZCBCTR = {"/* end of translation of "}; 
A_GISVEC(A68_VC ,VZCBCTR,UZCBCTR,25)
static A68_299   ZZCBCTR = {" */"}; 
A_GISVEC(A68_VC ,AADBCTR,ZZCBCTR,3)
static A68_INT  RADBCTR_level A_UNUSED;
typedef struct   /* env of non-global proc */
{
A68_INT  CBCBCTR_upbbuffers;
A_PAD_INT(PAD_216)
} GBCBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  BBCBCTR_size;
A_PAD_INT(PAD_217)
} QBCBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  Ll;
A_PAD_INT(PAD_218)
} TFCBCTR_outprep;
typedef struct   /* env of non-global proc */
{
A68_222  RFCBCTR_outprep;
} KGCBCTR_putints;
typedef struct   /* env of non-global proc */
{
A68_222  RFCBCTR_outprep;
} AHCBCTR_putint;
typedef struct   /* env of non-global proc */
{
A68_222  RFCBCTR_outprep;
} MHCBCTR_putchars;
typedef struct   /* env of non-global proc */
{
A68_222  RFCBCTR_outprep;
} THCBCTR_puttruncatedchars;
typedef struct   /* env of non-global proc */
{
A68_INT  EICBCTR_upbstreams;
A_PAD_INT(PAD_219)
} IICBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_169  VLCBCTR_xbu;
} ZLCBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * EQCBCTR_resultsize;
} IQCBCTR_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  ARCBCTR_newresultsize;
A_PAD_INT(PAD_220)
} ERCBCTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} IXCBCTR_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} WXCBCTR_generator;

A_STATIC A68_VOID  MZBBCTR_generator(A68_BOOL  LZBBCTR_anonymous, A68_276  *ReturnedValue);

A_STATIC A68_VOID  DACBCTR_generator(A68_BOOL  CACBCTR_anonymous, A68_276  *ReturnedValue);

A_STATIC A68_VOID  ZACBCTR_extendcurrent(void);

A_STATIC A68_VOID  FBCBCTR_generator(A68_BOOL  DBCBCTR_anonymous, A68_276  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PBCBCTR_generator(A68_BOOL  NBCBCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WCCBCTR_generator(A68_BOOL  VCCBCTR_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_BOOL  DDCBCTR_input(A68_VC  Line, A68_INT * Size);

A_STATIC A68_VOID  SDCBCTR_generator(A68_BOOL  RDCBCTR_anonymous, A68_181  *ReturnedValue);

A_STATIC A68_VOID  JFCBCTR_output(A68_171  Op, A68_INT  Ll);

A_STATIC A68_VOID  MFCBCTR_invert(A68_VC  String);

A_STATIC A68_VOID  SFCBCTR_outprep(A68_INT  Size, A68_INT  Type, void *NonLocals);

A_STATIC A68_VOID  JGCBCTR_putints(A68_INT  K, A68_185  A, void *NonLocals);

A_STATIC A68_VOID  ZGCBCTR_putint(A68_INT  Type, A68_INT  I, void *NonLocals);

A_STATIC A68_VOID  LHCBCTR_putchars(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  SHCBCTR_puttruncatedchars(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  HICBCTR_generator(A68_BOOL  FICBCTR_anonymous, A68_279  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  YLCBCTR_generator(A68_BOOL  WLCBCTR_anonymous, A68_185  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  TNCBCTR_positioncurrent(void);

A_STATIC A68_INT  WNCBCTR_nextbyte(void);

A_STATIC A68_INT  ZNCBCTR_nextint(void);

A_STATIC A68_VOID  HOCBCTR_nextstring(A68_VC  *ReturnedValue);

A_STATIC A68_INT  POCBCTR_nexttype(void);

A_STATIC A68_VOID  BQCBCTR_nextxchars(A68_INT  Suggestedsize, A68_INT  Insertion, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  HQCBCTR_generator(A68_BOOL  FQCBCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DRCBCTR_generator(A68_BOOL  BRCBCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  URCBCTR_nextstreamimperative(A68_186  *ReturnedValue);

A_STATIC A68_VOID  HXCBCTR_generator(A68_BOOL  FXCBCTR_anonymous, A68_185  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VXCBCTR_generator(A68_BOOL  TXCBCTR_anonymous, A68_206  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FBCBCTR_generator(A68_BOOL  DBCBCTR_anonymous, A68_276  *ReturnedValue, void *NonLocals)
#define NL(x) (((GBCBCTR_generator *)NonLocals)->x)
{ 
A68_276  HBCBCTR;  /* clause result */
A68_276  IBCBCTR;  /* OPERATORS - dynamic generator */
{ 
IBCBCTR.upb = (NL(CBCBCTR_upbbuffers)+1) ;
( DBCBCTR_anonymous? A_VLOC(A68_VC ,IBCBCTR): A_VHEAP(A68_VC ,IBCBCTR) );
HBCBCTR = IBCBCTR;
} 
*ReturnedValue = (HBCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  PBCBCTR_generator(A68_BOOL  NBCBCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((QBCBCTR_generator *)NonLocals)->x)
{ 
A68_VC  RBCBCTR;  /* clause result */
A68_VC  SBCBCTR;  /* OPERATORS - dynamic generator */
{ 
SBCBCTR.upb = NL(BBCBCTR_size) ;
( NBCBCTR_anonymous? A_VLOC(A68_CHAR ,SBCBCTR): A_VHEAP(A68_CHAR ,SBCBCTR) );
RBCBCTR = SBCBCTR;
} 
*ReturnedValue = (RBCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  MFCBCTR_invert(A68_VC  String)
{ 
A68_CHAR * NFCBCTR_c A_UNUSED = {0};
A68_INT  OFCBCTR;  /* forall loop counter */
A_PROC_ENTRY(invert);
 /* line 270: */
 /* line 271: */
OFCBCTR = String.upb -1;
NFCBCTR_c = String.data;
for (;OFCBCTR-- >= 0;
(NFCBCTR_c++
) )
{
 /* line 272: */
 /* line 273: */
if (((*NFCBCTR_c)>='a')&((*NFCBCTR_c)<='z'))
{ 
 /* line 274: */
(void)((*NFCBCTR_c) = (A68_SSBITS)(((A68_INT)(unsigned char)(*NFCBCTR_c)-(A68_INT)(unsigned char)'a')+(A68_INT)(unsigned char)'A'));
} 
else
{ 
 /* line 275: */
if (((*NFCBCTR_c)>='A')&((*NFCBCTR_c)<='Z'))
{ 
 /* line 276: */
 /* line 277: */
(void)((*NFCBCTR_c) = (A68_SSBITS)(((A68_INT)(unsigned char)(*NFCBCTR_c)-(A68_INT)(unsigned char)'A')+(A68_INT)(unsigned char)'a'));
} 
} 
}
A_PROC_EXIT(invert);
return;
} 
#undef NL

A_STATIC A68_VOID  SFCBCTR_outprep(A68_INT  Size, A68_INT  Type, void *NonLocals)
#define NL(x) (((TFCBCTR_outprep *)NonLocals)->x)
{ 
A68_VC  UFCBCTR;  /* OPERATORS - nil -> mode */
A68_VC  VFCBCTR;  /* == */
A68_VC  WFCBCTR;  /* OPERATORS - trim index */
A68_VC  XFCBCTR;  /* OPERATORS - trim index */
A68_VC * YFCBCTR;  /* YIELD */
A68_VC  ZFCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  AGCBCTR;  /* avoid structure result */
A68_VC  BGCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  CGCBCTR;  /* avoid structure result */
A68_VC  DGCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  EGCBCTR;  /* YIELD */
A68_CHAR * FGCBCTR;  /* YIELD */
A_PROC_ENTRY(outprep);
 /* line 288: */
 /* line 289: */
{ 
 /* line 290: */
 /* line 292: */
VFCBCTR = A_VVAC(UFCBCTR) ;
if (A_VSTRUCTCOMP((*TACBCTR_streambuffer),VFCBCTR))
{ 
(void)(ZACBCTR_extendcurrent());
} 
else
{ 
 /* line 293: */
 /* line 294: */
if ((Size+(*UACBCTR_strptr))>(*TACBCTR_streambuffer).upb)
{ 
 /* line 295: */
WFCBCTR = (*(&A_VINDEX((*WACBCTR_buffers),(*VACBCTR_currentbuffer)))) ;
YFCBCTR = (&A_VINDEX((*WACBCTR_buffers),(*VACBCTR_currentbuffer))) ;
(void)((*YFCBCTR) = A_VTRIM(XFCBCTR,(WFCBCTR),A_VTSCRIPT(&(XFCBCTR.upb),(WFCBCTR).upb,1,(*UACBCTR_strptr))));
 /* line 296: */
 /* line 297: */
(void)(ZACBCTR_extendcurrent());
} 
} 
 /* line 299: */
 /* line 300: */
 /* line 301: */
if (HQIACTR_streamoutoption)
{ 
 /* line 302: */
ROAAOSF_whole( Type, 0, &AGCBCTR );
ROAAOSF_whole( NL(Ll), 0, &CGCBCTR );
(void)(A_CALLPROC(MSIACTR_list,(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_HVEC(ZFCBCTR,'%',A68_CHAR ),AGCBCTR),A_HVEC(BGCBCTR,'(',A68_CHAR )),CGCBCTR),A_HVEC(DGCBCTR,')',A68_CHAR ))),(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_HVEC(ZFCBCTR,'%',A68_CHAR ),AGCBCTR),A_HVEC(BGCBCTR,'(',A68_CHAR )),CGCBCTR),A_HVEC(DGCBCTR,')',A68_CHAR )),(MSIACTR_list).nonlocals)));
} 
 /* line 304: */
 /* line 305: */
EGCBCTR = (*UACBCTR_strptr)+=1 ;
FGCBCTR = (&A_VINDEX((*TACBCTR_streambuffer),EGCBCTR)) ;
(*FGCBCTR) = (A68_SSBITS)Type;
} 
A_PROC_EXIT(outprep);
return;
} 
#undef NL

A_STATIC A68_VOID  JGCBCTR_putints(A68_INT  K, A68_185  A, void *NonLocals)
#define NL(x) (((KGCBCTR_putints *)NonLocals)->x)
{ 
A68_INT  LGCBCTR_v A_UNUSED = {0};
A68_INT * MGCBCTR;  /* forall control - []x */
A68_INT  NGCBCTR;  /* forall loop counter */
A68_VC  OGCBCTR;  /* OPERATORS - trim index */
A68_VC  PGCBCTR;  /* OPERATORS - trim index */
A68_VC  QGCBCTR;  /* OPERATORS - trim index */
union {  /* BIOP 99 */
A68_INT   source;
A68_40   destination;
} RGCBCTR; 
A68_VC  SGCBCTR;  /* OPERATORS - istruct -> vector */
A68_40  TGCBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  UGCBCTR;  /* YIELD */
A68_VC  VGCBCTR;  /* OPERATORS - assign op */
A_PROC_ENTRY(putints);
 /* line 321: */
 /* line 322: */
{ 
(void)(A_CALLPROC(NL(RFCBCTR_outprep),(((4*A.dim[0].upb)+1), K),(((4*A.dim[0].upb)+1), K,(NL(RFCBCTR_outprep)).nonlocals)));
 /* line 323: */
 /* line 324: */
NGCBCTR = A.dim[0].upb - A.dim[0].lwb;
MGCBCTR = A.data;
for (;NGCBCTR-- >= 0;
(MGCBCTR += A.dim[0].stride
) )
{
LGCBCTR_v = *MGCBCTR;
PGCBCTR = A_VTRIM(OGCBCTR,((*TACBCTR_streambuffer)),A_VTSCRIPT(&(OGCBCTR.upb),((*TACBCTR_streambuffer)).upb,((*UACBCTR_strptr)+1),((*TACBCTR_streambuffer)).upb)) ;
RGCBCTR.source = LGCBCTR_v ;
TGCBCTR = (RGCBCTR.destination) ;
UGCBCTR = A_VTRIM(QGCBCTR,(PGCBCTR),A_VTSCRIPT(&(QGCBCTR.upb),(PGCBCTR).upb,1,4)) ;
VGCBCTR = A_HISVEC(SGCBCTR,TGCBCTR,4,A68_CHAR ) ;
(void)(A_VASSIGN2(VGCBCTR,UGCBCTR,A68_CHAR ));
 /* line 325: */
 /* line 326: */
(*UACBCTR_strptr)+=4;
}
 /* line 327: */
} 
A_PROC_EXIT(putints);
return;
} 
#undef NL

A_STATIC A68_VOID  ZGCBCTR_putint(A68_INT  Type, A68_INT  I, void *NonLocals)
#define NL(x) (((AHCBCTR_putint *)NonLocals)->x)
{ 
A68_VC  BHCBCTR;  /* OPERATORS - trim index */
A68_VC  CHCBCTR;  /* OPERATORS - trim index */
A68_VC  DHCBCTR;  /* OPERATORS - trim index */
union {  /* BIOP 99 */
A68_INT   source;
A68_40   destination;
} EHCBCTR; 
A68_VC  FHCBCTR;  /* OPERATORS - istruct -> vector */
A68_40  GHCBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  HHCBCTR;  /* YIELD */
A68_VC  IHCBCTR;  /* OPERATORS - assign op */
A_PROC_ENTRY(putint);
 /* line 330: */
 /* line 331: */
{ 
(void)(A_CALLPROC(NL(RFCBCTR_outprep),(5, Type),(5, Type,(NL(RFCBCTR_outprep)).nonlocals)));
 /* line 332: */
CHCBCTR = A_VTRIM(BHCBCTR,((*TACBCTR_streambuffer)),A_VTSCRIPT(&(BHCBCTR.upb),((*TACBCTR_streambuffer)).upb,((*UACBCTR_strptr)+1),((*TACBCTR_streambuffer)).upb)) ;
EHCBCTR.source = I ;
GHCBCTR = (EHCBCTR.destination) ;
HHCBCTR = A_VTRIM(DHCBCTR,(CHCBCTR),A_VTSCRIPT(&(DHCBCTR.upb),(CHCBCTR).upb,1,4)) ;
IHCBCTR = A_HISVEC(FHCBCTR,GHCBCTR,4,A68_CHAR ) ;
(void)(A_VASSIGN2(IHCBCTR,HHCBCTR,A68_CHAR ));
 /* line 333: */
 /* line 334: */
(*UACBCTR_strptr)+=4;
} 
A_PROC_EXIT(putint);
return;
} 
#undef NL

A_STATIC A68_VOID  LHCBCTR_putchars(A68_VC  S, void *NonLocals)
#define NL(x) (((MHCBCTR_putchars *)NonLocals)->x)
{ 
A68_INT  NHCBCTR_up A_UNUSED = {0};
A68_VC  OHCBCTR;  /* OPERATORS - trim index */
A68_VC  PHCBCTR;  /* YIELD */
A_PROC_ENTRY(putchars);
 /* line 337: */
{ 
NHCBCTR_up = S.upb;
 /* line 338: */
(void)(A_CALLPROC(NL(RFCBCTR_outprep),((NHCBCTR_up+1), NHCBCTR_up),((NHCBCTR_up+1), NHCBCTR_up,(NL(RFCBCTR_outprep)).nonlocals)));
 /* line 339: */
PHCBCTR = A_VTRIM(OHCBCTR,((*TACBCTR_streambuffer)),A_VTSCRIPT(&(OHCBCTR.upb),((*TACBCTR_streambuffer)).upb,((*UACBCTR_strptr)+1),((*UACBCTR_strptr)+NHCBCTR_up))) ;
(void)(A_VASSIGN2(S,PHCBCTR,A68_CHAR ));
 /* line 340: */
 /* line 341: */
(*UACBCTR_strptr)+=NHCBCTR_up;
} 
A_PROC_EXIT(putchars);
return;
} 
#undef NL

A_STATIC A68_VOID  SHCBCTR_puttruncatedchars(A68_VC  S, void *NonLocals)
#define NL(x) (((THCBCTR_puttruncatedchars *)NonLocals)->x)
{ 
A68_INT  UHCBCTR_up A_UNUSED = {0};
A68_VC  VHCBCTR;  /* OPERATORS - trim index */
A68_VC  WHCBCTR;  /* OPERATORS - trim index */
A68_VC  XHCBCTR;  /* YIELD */
A68_VC  YHCBCTR;  /* OPERATORS - assign op */
A_PROC_ENTRY(puttruncatedchars);
 /* line 344: */
{ 
UHCBCTR_up = KMAAOSF_truncate(' ', S);
 /* line 345: */
(void)(A_CALLPROC(NL(RFCBCTR_outprep),((UHCBCTR_up+1), UHCBCTR_up),((UHCBCTR_up+1), UHCBCTR_up,(NL(RFCBCTR_outprep)).nonlocals)));
 /* line 346: */
XHCBCTR = A_VTRIM(VHCBCTR,((*TACBCTR_streambuffer)),A_VTSCRIPT(&(VHCBCTR.upb),((*TACBCTR_streambuffer)).upb,((*UACBCTR_strptr)+1),((*UACBCTR_strptr)+UHCBCTR_up))) ;
YHCBCTR = A_VTRIM(WHCBCTR,(S),A_VTSCRIPT(&(WHCBCTR.upb),(S).upb,1,UHCBCTR_up)) ;
(void)(A_VASSIGN2(YHCBCTR,XHCBCTR,A68_CHAR ));
 /* line 347: */
 /* line 348: */
(*UACBCTR_strptr)+=UHCBCTR_up;
} 
A_PROC_EXIT(puttruncatedchars);
return;
} 
#undef NL

A_STATIC A68_VOID  HICBCTR_generator(A68_BOOL  FICBCTR_anonymous, A68_279  *ReturnedValue, void *NonLocals)
#define NL(x) (((IICBCTR_generator *)NonLocals)->x)
{ 
A68_279  JICBCTR;  /* clause result */
A68_279  KICBCTR;  /* OPERATORS - dynamic generator */
{ 
KICBCTR.dim[0].upb = (NL(EICBCTR_upbstreams)+NL(EICBCTR_upbstreams)) ;
KICBCTR.dim[0].lwb = 0 ;
(void)A_1INITSTRIDES(KICBCTR) ;
( FICBCTR_anonymous? A_R1LOC(A68_275 ,KICBCTR): A_R1HEAP(A68_275 ,KICBCTR) );
JICBCTR = KICBCTR;
} 
*ReturnedValue = (JICBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  YLCBCTR_generator(A68_BOOL  WLCBCTR_anonymous, A68_185  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZLCBCTR_generator *)NonLocals)->x)
{ 
A68_185  AMCBCTR;  /* clause result */
A68_185  BMCBCTR;  /* OPERATORS - dynamic generator */
{ 
BMCBCTR.dim[0].upb = NL(VLCBCTR_xbu).Decnos.upb ;
BMCBCTR.dim[0].lwb = 1 ;
(void)A_1INITSTRIDES(BMCBCTR) ;
( WLCBCTR_anonymous? A_R1LOC(A68_INT ,BMCBCTR): A_R1HEAP(A68_INT ,BMCBCTR) );
AMCBCTR = BMCBCTR;
} 
*ReturnedValue = (AMCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HQCBCTR_generator(A68_BOOL  FQCBCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((IQCBCTR_generator *)NonLocals)->x)
{ 
A68_VC  JQCBCTR;  /* clause result */
A68_VC  KQCBCTR;  /* OPERATORS - dynamic generator */
{ 
KQCBCTR.upb = (*NL(EQCBCTR_resultsize)) ;
( FQCBCTR_anonymous? A_VLOC(A68_CHAR ,KQCBCTR): A_VHEAP(A68_CHAR ,KQCBCTR) );
JQCBCTR = KQCBCTR;
} 
*ReturnedValue = (JQCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  DRCBCTR_generator(A68_BOOL  BRCBCTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ERCBCTR_generator *)NonLocals)->x)
{ 
A68_VC  FRCBCTR;  /* clause result */
A68_VC  GRCBCTR;  /* OPERATORS - dynamic generator */
{ 
GRCBCTR.upb = NL(ARCBCTR_newresultsize) ;
( BRCBCTR_anonymous? A_VLOC(A68_CHAR ,GRCBCTR): A_VHEAP(A68_CHAR ,GRCBCTR) );
FRCBCTR = GRCBCTR;
} 
*ReturnedValue = (FRCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HXCBCTR_generator(A68_BOOL  FXCBCTR_anonymous, A68_185  *ReturnedValue, void *NonLocals)
#define NL(x) (((IXCBCTR_generator *)NonLocals)->x)
{ 
A68_185  JXCBCTR;  /* clause result */
A68_185  KXCBCTR;  /* OPERATORS - dynamic generator */
{ 
KXCBCTR.dim[0].upb = A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)) ;
KXCBCTR.dim[0].lwb = 1 ;
(void)A_1INITSTRIDES(KXCBCTR) ;
( FXCBCTR_anonymous? A_R1LOC(A68_INT ,KXCBCTR): A_R1HEAP(A68_INT ,KXCBCTR) );
JXCBCTR = KXCBCTR;
} 
*ReturnedValue = (JXCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  VXCBCTR_generator(A68_BOOL  TXCBCTR_anonymous, A68_206  *ReturnedValue, void *NonLocals)
#define NL(x) (((WXCBCTR_generator *)NonLocals)->x)
{ 
A68_206  XXCBCTR;  /* clause result */
A68_206  YXCBCTR;  /* OPERATORS - dynamic generator */
{ 
YXCBCTR.dim[0].upb = A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)) ;
YXCBCTR.dim[0].lwb = 1 ;
(void)A_1INITSTRIDES(YXCBCTR) ;
( TXCBCTR_anonymous? A_R1LOC(A68_VC ,YXCBCTR): A_R1HEAP(A68_VC ,YXCBCTR) );
XXCBCTR = YXCBCTR;
} 
*ReturnedValue = (XXCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  MZBBCTR_generator(A68_BOOL  LZBBCTR_anonymous, A68_276  *ReturnedValue)
{ 
A68_276  NZBBCTR;  /* clause result */
A68_276  OZBBCTR;  /* OPERATORS - dynamic generator */
{ 
OZBBCTR.upb = 0 ;
( LZBBCTR_anonymous? A_VLOC(A68_VC ,OZBBCTR): A_VHEAP(A68_VC ,OZBBCTR) );
NZBBCTR = OZBBCTR;
} 
*ReturnedValue = (NZBBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  DACBCTR_generator(A68_BOOL  CACBCTR_anonymous, A68_276  *ReturnedValue)
{ 
A68_276  EACBCTR;  /* clause result */
A68_276  FACBCTR;  /* OPERATORS - dynamic generator */
{ 
FACBCTR.upb = 1 ;
( CACBCTR_anonymous? A_VLOC(A68_VC ,FACBCTR): A_VHEAP(A68_VC ,FACBCTR) );
EACBCTR = FACBCTR;
} 
*ReturnedValue = (EACBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  ZACBCTR_extendcurrent(void)
{ 
A68_INT  ABCBCTR;  /* clause result */
A68_INT  BBCBCTR_size A_UNUSED = {0};
A68_INT  CBCBCTR_upbbuffers A_UNUSED = {0};
A68_277  EBCBCTR_generator;   /* proc value of non-global proc */
A68_276  JBCBCTR;  /* avoid structure result */
A68_276  KBCBCTR_new A_UNUSED = {0};
A68_276  LBCBCTR;  /* OPERATORS - trim index */
A68_276  MBCBCTR;  /* YIELD */
A68_103  OBCBCTR_generator;   /* proc value of non-global proc */
A68_INT  TBCBCTR;  /* YIELD */
A68_VC  UBCBCTR;  /* avoid structure result */
A68_VC * VBCBCTR;  /* YIELD */
A68_276  WBCBCTR;  /* clause result */
A_PROC_ENTRY(extendcurrent);
{ 
if ((*VACBCTR_currentbuffer)==0)
{ 
ABCBCTR = 1000;
} 
else
{ 
ABCBCTR = 10000;
} 
BBCBCTR_size = ABCBCTR;
 /* line 101: */
 /* line 102: */
{ 
CBCBCTR_upbbuffers = (*WACBCTR_buffers).upb;
 /* line 103: */
A_CLOSURE( EBCBCTR_generator, FBCBCTR_generator, GBCBCTR_generator );
(( GBCBCTR_generator * ) ( EBCBCTR_generator.nonlocals )) -> CBCBCTR_upbbuffers = CBCBCTR_upbbuffers;
A_CALLPROC(EBCBCTR_generator,(A68_FALSE, &JBCBCTR),(A68_FALSE, &JBCBCTR,(EBCBCTR_generator).nonlocals));
KBCBCTR_new = JBCBCTR;
 /* line 104: */
MBCBCTR = A_VTRIM(LBCBCTR,(KBCBCTR_new),A_VTSCRIPT(&(LBCBCTR.upb),(KBCBCTR_new).upb,1,CBCBCTR_upbbuffers)) ;
(void)(A_VASSIGN2((*WACBCTR_buffers),MBCBCTR,A68_VC ));
 /* line 105: */
 /* line 106: */
 /* line 107: */
A_CLOSURE( OBCBCTR_generator, PBCBCTR_generator, QBCBCTR_generator );
(( QBCBCTR_generator * ) ( OBCBCTR_generator.nonlocals )) -> BBCBCTR_size = BBCBCTR_size;
TBCBCTR = (*VACBCTR_currentbuffer) = (CBCBCTR_upbbuffers+1) ;
A_CALLPROC(OBCBCTR_generator,(A68_FALSE, &UBCBCTR),(A68_FALSE, &UBCBCTR,(OBCBCTR_generator).nonlocals));
VBCBCTR = (&A_VINDEX(KBCBCTR_new,TBCBCTR)) ;
(*TACBCTR_streambuffer) = (*VBCBCTR) = UBCBCTR;
 /* line 108: */
(*UACBCTR_strptr) = 0;
 /* line 109: */
 /* line 110: */
 /* line 111: */
WBCBCTR = KBCBCTR_new;
} 
(*WACBCTR_buffers) = WBCBCTR;
} 
A_PROC_EXIT(extendcurrent);
return;
} 
#undef NL

A_STATIC A68_VOID  WCCBCTR_generator(A68_BOOL  VCCBCTR_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  XCCBCTR;  /* clause result */
A68_VC  YCCBCTR;  /* OPERATORS - dynamic generator */
{ 
YCCBCTR.upb = 0 ;
( VCCBCTR_anonymous? A_VLOC(A68_CHAR ,YCCBCTR): A_VHEAP(A68_CHAR ,YCCBCTR) );
XCCBCTR = YCCBCTR;
} 
*ReturnedValue = (XCCBCTR);
return;
} 
#undef NL

A_STATIC A68_BOOL  DDCBCTR_input(A68_VC  Line, A68_INT * Size)
{ 
A68_60  EDCBCTR;  /* avoid structure result */
A68_60  FDCBCTR_read_status A_UNUSED = {0};
A68_BOOL  GDCBCTR;  /* optbool result */
A68_BOOL  HDCBCTR;  /* clause result */
A68_BOOL  IDCBCTR;  /* clause result */
A68_INT  JDCBCTR;  /* YIELD */
A68_CHAR * KDCBCTR_first A_UNUSED = {0};
A68_BOOL  LDCBCTR;  /* optbool result */
A68_BOOL  MDCBCTR;  /* clause result */
A68_INT  NDCBCTR;  /* YIELD */
A68_CHAR * ODCBCTR_second A_UNUSED = {0};
A68_BOOL  PDCBCTR;  /* clause result */
A68_INT  QDCBCTR;  /* YIELD */
A_PROC_ENTRY(input);
 /* line 159: */
 /* line 160: */
{ 
DXBAOSF_read_line( RCCBCTR_inputfile, Line, Size, RIBAOSF_ignore_msg, &EDCBCTR );
FDCBCTR_read_status = EDCBCTR;
 /* line 161: */
GDCBCTR = AVBAOSF_(FDCBCTR_read_status, UUBAOSF_io_error);
if ( ! GDCBCTR )
{ /* line 162: */
GDCBCTR = AVBAOSF_(FDCBCTR_read_status, RUBAOSF_io_eof);
}
 /* line 163: */
HDCBCTR = GDCBCTR;
if (HDCBCTR)
{ 
 /* line 164: */
 /* line 165: */
IDCBCTR = A68_FALSE;
} 
else
{ 
XRIACTR_linenumber+=1;
 /* line 166: */
 /* line 167: */
 /* line 168: */
 /* line 169: */
if (AVBAOSF_(FDCBCTR_read_status, XUBAOSF_io_no_newline))
{ 
 /* line 170: */
(void)(PXIACTR_error(253));
} 
 /* line 172: */
UCCBCTR_line_pending = A68_TRUE;
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
JDCBCTR = 1 ;
KDCBCTR_first = (&A_VINDEX(Line,JDCBCTR));
 /* line 181: */
LDCBCTR = ((*KDCBCTR_first)!='*');
if ( LDCBCTR )
{ /* line 182: */
LDCBCTR = ((*KDCBCTR_first)!='%');
}
 /* line 184: */
MDCBCTR = LDCBCTR;
if (MDCBCTR)
{ 
 /* line 191: */
/*SKIP*/;
} 
else
{ 
{ 
NDCBCTR = 2 ;
ODCBCTR_second = (&A_VINDEX(Line,NDCBCTR));
 /* line 192: */
 /* line 193: */
 /* line 194: */
QDCBCTR = (A68_INT)(unsigned char)(*ODCBCTR_second) ;
PDCBCTR = ((*(&A_R1INDEX(KRIACTR_stars,QDCBCTR)))==((*KDCBCTR_first)=='*'));
if (PDCBCTR)
{ 
 /* line 195: */
 /* line 196: */
(*KDCBCTR_first) = (*ODCBCTR_second) = ' ';
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
IDCBCTR = A68_TRUE;
} 
} 
A_PROC_EXIT(input);
return( IDCBCTR );
} 
#undef NL

A_STATIC A68_VOID  SDCBCTR_generator(A68_BOOL  RDCBCTR_anonymous, A68_181  *ReturnedValue)
{ 
A68_181  TDCBCTR;  /* clause result */
A68_181  UDCBCTR;  /* OPERATORS - dynamic generator */
{ 
UDCBCTR.dim[0].upb = 511 ;
UDCBCTR.dim[0].lwb = 0 ;
(void)A_1INITSTRIDES(UDCBCTR) ;
( RDCBCTR_anonymous? A_R1LOC(A68_182 ,UDCBCTR): A_R1HEAP(A68_182 ,UDCBCTR) );
TDCBCTR = UDCBCTR;
} 
*ReturnedValue = (TDCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  JFCBCTR_output(A68_171  Op, A68_INT  Ll)
{ 
A68_222  RFCBCTR_outprep;   /* proc value of non-global proc */
A68_287  IGCBCTR_putints;   /* proc value of non-global proc */
A68_222  YGCBCTR_putint;   /* proc value of non-global proc */
A68_98  KHCBCTR_putchars;   /* proc value of non-global proc */
A68_98  RHCBCTR_puttruncatedchars;   /* proc value of non-global proc */
A68_171  ZHCBCTR;  /* united object - for case conformity */
A68_155  AICBCTR_c A_UNUSED = {0};
A68_BOOL  BICBCTR;  /* clause result */
A68_288  CICBCTR;  /* collateral clause result */
A68_185  DICBCTR;  /* OPERATORS - istruct to row */
A68_INT  EICBCTR_upbstreams A_UNUSED = {0};
A68_289  GICBCTR_generator;   /* proc value of non-global proc */
A68_279  LICBCTR;  /* avoid structure result */
A68_279  MICBCTR_newstreams A_UNUSED = {0};
A68_275 * NICBCTR_stream A_UNUSED = {0};
A68_279  OICBCTR;  /* OPERATORS - trim index */
A68_279  PICBCTR;  /* forall yield */
A68_INT  QICBCTR;  /* forall loop counter */
A68_279  RICBCTR;  /* OPERATORS - trim index */
A68_279  SICBCTR;  /* YIELD */
A68_171  TICBCTR;  /* united object - for case conformity */
A68_150  UICBCTR_e A_UNUSED = {0};
A68_151  VICBCTR_xop A_UNUSED = {0};
A68_290  WICBCTR;  /* collateral clause result */
A68_185  XICBCTR;  /* OPERATORS - istruct to row */
A68_155  YICBCTR_c A_UNUSED = {0};
A68_288  ZICBCTR;  /* collateral clause result */
A68_185  AJCBCTR;  /* OPERATORS - istruct to row */
A68_INT  BJCBCTR;  /* YIELD */
A68_INT  CJCBCTR_fnval A_UNUSED = {0};
A68_288  DJCBCTR;  /* collateral clause result */
A68_185  EJCBCTR;  /* OPERATORS - istruct to row */
A68_INT  FJCBCTR_id A_UNUSED = {0};
A68_140  GJCBCTR_number A_UNUSED = {0};
A68_INT  HJCBCTR_type A_UNUSED = {0};
A68_INT  IJCBCTR_exp A_UNUSED = {0};
A68_CHAR * JJCBCTR_c A_UNUSED = {0};
A68_VC  KJCBCTR;  /* forall yield */
A68_INT  LJCBCTR;  /* forall loop counter */
A68_BOOL  MJCBCTR;  /* optbool result */
A68_VC  NJCBCTR;  /* OPERATORS - trim index */
A68_VC  OJCBCTR;  /* OPERATORS - trim index */
A68_VC  PJCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  QJCBCTR;  /* OPERATORS - trim index */
A68_VC  RJCBCTR;  /* OPERATORS - trim index */
A68_154  SJCBCTR_xw A_UNUSED = {0};
A68_147  TJCBCTR_idd A_UNUSED = {0};
A68_290  UJCBCTR;  /* collateral clause result */
A68_185  VJCBCTR;  /* OPERATORS - istruct to row */
A68_VC  WJCBCTR;  /* OPERATORS - istruct -> vector */
A68_107  XJCBCTR;  /* OPERATORS - istruct -> vector */
A68_142  YJCBCTR_chars A_UNUSED = {0};
A68_INT  ZJCBCTR;  /* clause result */
A68_VC  AKCBCTR;  /* clause result */
A68_VC  BKCBCTR;  /* avoid structure result */
A68_VC  CKCBCTR_string A_UNUSED = {0};
A68_143  DKCBCTR_str A_UNUSED = {0};
A68_124 * EKCBCTR_rd A_UNUSED = {0};
A68_291  FKCBCTR;  /* collateral clause result */
A68_185  GKCBCTR;  /* OPERATORS - istruct to row */
A68_VC  HKCBCTR;  /* OPERATORS - istruct -> vector */
A68_107  IKCBCTR;  /* OPERATORS - istruct -> vector */
A68_146  JKCBCTR_nse A_UNUSED = {0};
A68_BOOL  KKCBCTR_b A_UNUSED = {0};
A68_138  LKCBCTR_generator A_UNUSED = {0};
A68_290  MKCBCTR;  /* collateral clause result */
A68_185  NKCBCTR;  /* OPERATORS - istruct to row */
A68_141  OKCBCTR_al A_UNUSED = {0};
A68_139  PKCBCTR_c A_UNUSED = {0};
A68_290  QKCBCTR;  /* collateral clause result */
A68_185  RKCBCTR;  /* OPERATORS - istruct to row */
A68_148  SKCBCTR_xl A_UNUSED = {0};
A68_125 * TKCBCTR_rl A_UNUSED = {0};
A68_VC  UKCBCTR;  /* OPERATORS - istruct -> vector */
A68_107  VKCBCTR;  /* OPERATORS - istruct -> vector */
A68_290  WKCBCTR;  /* collateral clause result */
A68_185  XKCBCTR;  /* OPERATORS - istruct to row */
A68_125 * YKCBCTR_lb A_UNUSED = {0};
A68_156  ZKCBCTR_xs A_UNUSED = {0};
A68_172  ALCBCTR_mdes A_UNUSED = {0};
A68_249  BLCBCTR;  /* OPERATORS - vector -> row */
A68_163  CLCBCTR_xtd A_UNUSED = {0};
A68_162  DLCBCTR_xtm A_UNUSED = {0};
A68_290  ELCBCTR;  /* collateral clause result */
A68_185  FLCBCTR;  /* OPERATORS - istruct to row */
A68_VC  GLCBCTR;  /* OPERATORS - istruct -> vector */
A68_107  HLCBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  ILCBCTR;  /* OPERATORS - istruct -> vector */
A68_105  JLCBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  KLCBCTR;  /* OPERATORS - istruct -> vector */
A68_105  LLCBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  MLCBCTR;  /* OPERATORS - istruct -> vector */
A68_105  NLCBCTR;  /* OPERATORS - istruct -> vector */
A68_128 * OLCBCTR_spec A_UNUSED = {0};
A68_127  PLCBCTR;  /* forall yield */
A68_INT  QLCBCTR;  /* forall loop counter */
A68_VC  RLCBCTR;  /* OPERATORS - istruct -> vector */
A68_105  SLCBCTR;  /* OPERATORS - istruct -> vector */
A68_160  TLCBCTR_open A_UNUSED = {0};
A68_157  ULCBCTR_xm A_UNUSED = {0};
A68_169  VLCBCTR_xbu A_UNUSED = {0};
A68_292  XLCBCTR_generator;   /* proc value of non-global proc */
A68_185  CMCBCTR;  /* avoid structure result */
A68_92  DMCBCTR;  /* YIELD */
A68_185  EMCBCTR;  /* OPERATORS - vector -> row */
A68_185  FMCBCTR;  /* OPERATORS - assign op */
A68_129  GMCBCTR_s A_UNUSED = {0};
A_PROC_ENTRY(output);
 /* line 263: */
 /* line 264: */
 /* line 266: */
if (DSIACTR_greatestseverity<=2)
{ 
 /* line 279: */
A_CLOSURE( RFCBCTR_outprep, SFCBCTR_outprep, TFCBCTR_outprep );
(( TFCBCTR_outprep * ) ( RFCBCTR_outprep.nonlocals )) -> Ll = Ll;
 /* line 320: */
A_CLOSURE( IGCBCTR_putints, JGCBCTR_putints, KGCBCTR_putints );
(( KGCBCTR_putints * ) ( IGCBCTR_putints.nonlocals )) -> RFCBCTR_outprep = RFCBCTR_outprep;
 /* line 329: */
A_CLOSURE( YGCBCTR_putint, ZGCBCTR_putint, AHCBCTR_putint );
(( AHCBCTR_putint * ) ( YGCBCTR_putint.nonlocals )) -> RFCBCTR_outprep = RFCBCTR_outprep;
 /* line 336: */
A_CLOSURE( KHCBCTR_putchars, LHCBCTR_putchars, MHCBCTR_putchars );
(( MHCBCTR_putchars * ) ( KHCBCTR_putchars.nonlocals )) -> RFCBCTR_outprep = RFCBCTR_outprep;
 /* line 343: */
A_CLOSURE( RHCBCTR_puttruncatedchars, SHCBCTR_puttruncatedchars, THCBCTR_puttruncatedchars );
(( THCBCTR_puttruncatedchars * ) ( RHCBCTR_puttruncatedchars.nonlocals )) -> RFCBCTR_outprep = RFCBCTR_outprep;
 /* line 352: */
 /* line 353: */
 /* line 354: */
if (UCCBCTR_line_pending)
{ 
 /* line 355: */
ZHCBCTR = Op ;
switch ( ZHCBCTR.mode )
{ 
case 17: /* STRUCT(INT,INT,BITS,INT)  */
AICBCTR_c = (ZHCBCTR.data.mode17);
 /* line 356: */
BICBCTR = (AICBCTR_c.Fn!=25);
break;
default: 
 /* line 357: */
 /* line 358: */
 /* line 360: */
BICBCTR = A68_TRUE;
break;
} 
if (BICBCTR)
{ 
 /* line 361: */
CICBCTR.data[0] = XRIACTR_linenumber;
CICBCTR.data[1] = SCCBCTR_line_start;
 /* line 362: */
CICBCTR.data[2] = TCCBCTR_line_length;
(void)(A_CALLPROC(IGCBCTR_putints,(KCCBCTR_linetype, A_HIS1ARR(DICBCTR,CICBCTR,A68_INT ,3)),(KCCBCTR_linetype, A_HIS1ARR(DICBCTR,CICBCTR,A68_INT ,3),(IGCBCTR_putints).nonlocals)));
 /* line 363: */
 /* line 364: */
 /* line 365: */
UCCBCTR_line_pending = A68_FALSE;
} 
} 
 /* line 367: */
 /* line 368: */
if (CFCBCTR_upped)
{ 
(void)(A_CALLPROC(RFCBCTR_outprep,(1, 2),(1, 2,(RFCBCTR_outprep).nonlocals)));
 /* line 369: */
 /* line 370: */
CFCBCTR_upped = A68_FALSE;
} 
 /* line 372: */
(*XACBCTR_curstradd) = WZBBCTR_current;
 /* line 374: */
for ( ;; )
{ 
 /* line 375: */
if ( !((Ll>SZBBCTR_streams.dim[0].upb)) ) break;
EICBCTR_upbstreams = SZBBCTR_streams.dim[0].upb;
 /* line 376: */
A_CLOSURE( GICBCTR_generator, HICBCTR_generator, IICBCTR_generator );
(( IICBCTR_generator * ) ( GICBCTR_generator.nonlocals )) -> EICBCTR_upbstreams = EICBCTR_upbstreams;
A_CALLPROC(GICBCTR_generator,(A68_FALSE, &LICBCTR),(A68_FALSE, &LICBCTR,(GICBCTR_generator).nonlocals));
MICBCTR_newstreams = LICBCTR;
 /* line 377: */
 /* line 378: */
PICBCTR = A_R1TRIM(OICBCTR,(MICBCTR_newstreams),A_RTSCRIPT(&(OICBCTR.dim[0]),&((MICBCTR_newstreams).dim[0]),(EICBCTR_upbstreams+1),(MICBCTR_newstreams).dim[0].upb,1)) ;
QICBCTR = PICBCTR.dim[0].upb - PICBCTR.dim[0].lwb;
NICBCTR_stream = PICBCTR.data;
for (;QICBCTR-- >= 0;
(NICBCTR_stream += PICBCTR.dim[0].stride
) )
{
 /* line 379: */
(*NICBCTR_stream) = QZBBCTR_unsetstream;
}
 /* line 380: */
SICBCTR = A_R1TRIM(RICBCTR,(MICBCTR_newstreams),A_RTSCRIPT(&(RICBCTR.dim[0]),&((MICBCTR_newstreams).dim[0]),(MICBCTR_newstreams).dim[0].lwb,EICBCTR_upbstreams,0)) ;
(void)(A_R1ASSIGN2(SZBBCTR_streams,SICBCTR,A68_275 ));
 /* line 381: */
 /* line 382: */
SZBBCTR_streams = MICBCTR_newstreams;
}
 /* line 383: */
(void)(WZBBCTR_current = (*(XACBCTR_curstradd = (&A_R1INDEX(SZBBCTR_streams,Ll)))));
 /* line 385: */
 /* line 386: */
TICBCTR = Op ;
switch ( TICBCTR.mode )
{ 
case 1: /* STRUCT(BOOL)  */
UICBCTR_e = (TICBCTR.data.mode1);
 /* line 387: */
 /* line 388: */
if (!(CFCBCTR_upped = UICBCTR_e.Up))
{ 
 /* line 389: */
 /* line 390: */
(void)(A_CALLPROC(RFCBCTR_outprep,(1, 1),(1, 1,(RFCBCTR_outprep).nonlocals)));
} 
break;
case 14: /* STRUCT(INT,INT,INT)  */
VICBCTR_xop = (TICBCTR.data.mode14);
 /* line 391: */
 /* line 392: */
if (VICBCTR_xop.Fn==LGAACTR_voidfn)
{ 
 /* line 393: */
(void)(A_CALLPROC(RFCBCTR_outprep,(1, 202),(1, 202,(RFCBCTR_outprep).nonlocals)));
} 
else
{ 
WICBCTR.data[0] = VICBCTR_xop.M;
WICBCTR.data[1] = VICBCTR_xop.Param;
 /* line 394: */
 /* line 395: */
(void)(A_CALLPROC(IGCBCTR_putints,((128+VICBCTR_xop.Fn), A_HIS1ARR(XICBCTR,WICBCTR,A68_INT ,2)),((128+VICBCTR_xop.Fn), A_HIS1ARR(XICBCTR,WICBCTR,A68_INT ,2),(IGCBCTR_putints).nonlocals)));
} 
break;
case 17: /* STRUCT(INT,INT,BITS,INT)  */
YICBCTR_c = (TICBCTR.data.mode17);
 /* line 396: */
{ 
 /* line 397: */
if (YICBCTR_c.Fn==25)
{ 
(void)(A_CALLPROC(RFCBCTR_outprep,(1, (48+((A68_INT )YICBCTR_c.Props/2048))),(1, (48+((A68_INT )YICBCTR_c.Props/2048)),(RFCBCTR_outprep).nonlocals)));
 /* line 398: */
 /* line 399: */
 /* line 400: */
if (UCCBCTR_line_pending)
{ 
 /* line 401: */
ZICBCTR.data[0] = XRIACTR_linenumber;
ZICBCTR.data[1] = SCCBCTR_line_start;
 /* line 402: */
ZICBCTR.data[2] = TCCBCTR_line_length;
(void)(A_CALLPROC(IGCBCTR_putints,(KCCBCTR_linetype, A_HIS1ARR(AJCBCTR,ZICBCTR,A68_INT ,3)),(KCCBCTR_linetype, A_HIS1ARR(AJCBCTR,ZICBCTR,A68_INT ,3),(IGCBCTR_putints).nonlocals)));
 /* line 403: */
 /* line 404: */
 /* line 405: */
 /* line 406: */
UCCBCTR_line_pending = A68_FALSE;
} 
} 
else
{ 
BJCBCTR = (YICBCTR_c.Fn+1) ;
CJCBCTR_fnval = (A68_INT)(unsigned char)A_VINDEX(BFCBCTR_contval,BJCBCTR);
 /* line 407: */
DJCBCTR.data[0] = YICBCTR_c.M;
DJCBCTR.data[1] = (A68_INT )YICBCTR_c.Props;
DJCBCTR.data[2] = YICBCTR_c.Param;
 /* line 408: */
 /* line 409: */
 /* line 410: */
(void)(A_CALLPROC(IGCBCTR_putints,(CJCBCTR_fnval, A_HIS1ARR(EJCBCTR,DJCBCTR,A68_INT ,3)),(CJCBCTR_fnval, A_HIS1ARR(EJCBCTR,DJCBCTR,A68_INT ,3),(IGCBCTR_putints).nonlocals)));
} 
} 
break;
case 3: /* INT */
FJCBCTR_id = (TICBCTR.data.mode3);
 /* line 411: */
 /* line 412: */
if (FJCBCTR_id<0)
{ 
 /* line 413: */
(void)(A_CALLPROC(YGCBCTR_putint,(78, FJCBCTR_id),(78, FJCBCTR_id,(YGCBCTR_putint).nonlocals)));
} 
else
{ 
 /* line 414: */
 /* line 415: */
(void)(A_CALLPROC(YGCBCTR_putint,(80, FJCBCTR_id),(80, FJCBCTR_id,(YGCBCTR_putint).nonlocals)));
} 
break;
case 9: /* STRUCT(INT,REF MODE26)  */
GJCBCTR_number = (TICBCTR.data.mode9);
 /* line 416: */
 /* line 417: */
{ 
HJCBCTR_type = (GJCBCTR_number.Mode+CCCBCTR_numberbase);
 /* line 418: */
(void)(A_CALLPROC(RFCBCTR_outprep,(1, HJCBCTR_type),(1, HJCBCTR_type,(RFCBCTR_outprep).nonlocals)));
 /* line 423: */
IJCBCTR_exp = (-1);
 /* line 424: */
KJCBCTR = GJCBCTR_number.Nu ;
LJCBCTR = KJCBCTR.upb -1;
JJCBCTR_c = KJCBCTR.data;
for (;LJCBCTR-- >= 0;
(JJCBCTR_c++
) )
{
 /* line 425: */
if ( !(((IJCBCTR_exp-=1)<0)) ) break;
MJCBCTR = ((*JJCBCTR_c)=='+');
if ( ! MJCBCTR )
{MJCBCTR = ((*JJCBCTR_c)=='-');
}
if (MJCBCTR)
{ 
(void)(IJCBCTR_exp = (-IJCBCTR_exp));
} 
}
 /* line 426: */
 /* line 427: */
 /* line 428: */
if (IJCBCTR_exp<0)
{ 
 /* line 429: */
 /* line 430: */
(void)(A_CALLPROC(KHCBCTR_putchars,(GJCBCTR_number.Nu),(GJCBCTR_number.Nu,(KHCBCTR_putchars).nonlocals)));
} 
else
{ 
 /* line 431: */
 /* line 432: */
 /* line 433: */
 /* line 434: */
NJCBCTR = GJCBCTR_number.Nu ;
QJCBCTR = GJCBCTR_number.Nu ;
(void)(A_CALLPROC(KHCBCTR_putchars,(A_VC_PLUS(A_VC_PLUS(A_VTRIM(OJCBCTR,(NJCBCTR),A_VTSCRIPT(&(OJCBCTR.upb),(NJCBCTR).upb,1,(IJCBCTR_exp-1))),A_HVEC(PJCBCTR,'e',A68_CHAR )),A_VTRIM(RJCBCTR,(QJCBCTR),A_VTSCRIPT(&(RJCBCTR.upb),(QJCBCTR).upb,IJCBCTR_exp,(QJCBCTR).upb)))),(A_VC_PLUS(A_VC_PLUS(A_VTRIM(OJCBCTR,(NJCBCTR),A_VTSCRIPT(&(OJCBCTR.upb),(NJCBCTR).upb,1,(IJCBCTR_exp-1))),A_HVEC(PJCBCTR,'e',A68_CHAR )),A_VTRIM(RJCBCTR,(QJCBCTR),A_VTSCRIPT(&(RJCBCTR.upb),(QJCBCTR).upb,IJCBCTR_exp,(QJCBCTR).upb))),(KHCBCTR_putchars).nonlocals)));
} 
} 
break;
case 16: /* STRUCT(INT)  */
SJCBCTR_xw = (TICBCTR.data.mode16);
 /* line 435: */
 /* line 436: */
if (SJCBCTR_xw.W<=3)
{ 
 /* line 437: */
 /* line 438: */
(void)(A_CALLPROC(RFCBCTR_outprep,(1, (208+SJCBCTR_xw.W)),(1, (208+SJCBCTR_xw.W),(RFCBCTR_outprep).nonlocals)));
} 
break;
case 12: /* STRUCT(INT,REF MODE123)  */
TJCBCTR_idd = (TICBCTR.data.mode12);
 /* line 439: */
 /* line 441: */
{ 
 /* line 442: */
UJCBCTR.data[0] = (*(&(TJCBCTR_idd.Iddec->Mode)));
 /* line 443: */
UJCBCTR.data[1] = (*(&(TJCBCTR_idd.Iddec->Decno)));
(void)(A_CALLPROC(IGCBCTR_putints,((GCCBCTR_iddecbase+TJCBCTR_idd.Type), A_HIS1ARR(VJCBCTR,UJCBCTR,A68_INT ,2)),((GCCBCTR_iddecbase+TJCBCTR_idd.Type), A_HIS1ARR(VJCBCTR,UJCBCTR,A68_INT ,2),(IGCBCTR_putints).nonlocals)));
 /* line 444: */
 /* line 445: */
 /* line 446: */
XJCBCTR = (*(&(TJCBCTR_idd.Iddec->Name))) ;
(void)(A_CALLPROC(RHCBCTR_puttruncatedchars,(A_HISVEC(WJCBCTR,XJCBCTR,32,A68_CHAR )),(A_HISVEC(WJCBCTR,XJCBCTR,32,A68_CHAR ),(RHCBCTR_puttruncatedchars).nonlocals)));
} 
break;
case 35: /* STRUCT(INT,INT,REF MODE26)  */
YJCBCTR_chars = (TICBCTR.data.mode35);
 /* line 447: */
 /* line 449: */
{ 
 /* line 450: */
 /* line 451: */
 /* line 452: */
if (YJCBCTR_chars.Nochars<0)
{ 
 /* line 453: */
ZJCBCTR = MCCBCTR_notlastxcharstype;
} 
else
{ 
 /* line 454: */
ZJCBCTR = NCCBCTR_lastxcharstype;
} 
(void)(A_CALLPROC(RFCBCTR_outprep,(1, ZJCBCTR),(1, ZJCBCTR,(RFCBCTR_outprep).nonlocals)));
 /* line 455: */
 /* line 456: */
 /* line 457: */
if (YJCBCTR_chars.Base!=0)
{ 
 /* line 458: */
 /* line 459: */
GNJACTR_convertradixstring( YJCBCTR_chars.Chars, YJCBCTR_chars.Base, &BKCBCTR );
AKCBCTR = BKCBCTR;
} 
else
{ 
AKCBCTR = YJCBCTR_chars.Chars;
} 
CKCBCTR_string = AKCBCTR;
 /* line 460: */
 /* line 461: */
 /* line 462: */
(void)(A_CALLPROC(KHCBCTR_putchars,(CKCBCTR_string),(CKCBCTR_string,(KHCBCTR_putchars).nonlocals)));
} 
break;
case 7: /* STRUCT(INT)  */
DKCBCTR_str = (TICBCTR.data.mode7);
 /* line 463: */
 /* line 464: */
if (DKCBCTR_str.Strmode==8)
{ 
 /* line 465: */
(void)(A_CALLPROC(RFCBCTR_outprep,(1, 76),(1, 76,(RFCBCTR_outprep).nonlocals)));
} 
else
{ 
 /* line 466: */
 /* line 468: */
(void)(A_CALLPROC(YGCBCTR_putint,(77, DKCBCTR_str.Strmode),(77, DKCBCTR_str.Strmode,(YGCBCTR_putint).nonlocals)));
} 
break;
case 34: /* REF STRUCT(MODE107,BITS,INT,INT,INT,INT,REF MODE124)  */
EKCBCTR_rd = (TICBCTR.data.mode34);
 /* line 469: */
 /* line 470: */
{ 
 /* line 471: */
 /* line 472: */
FKCBCTR.data[0] = (*(&(EKCBCTR_rd->Rdenno)));
 /* line 473: */
FKCBCTR.data[1] = (*(&(EKCBCTR_rd->Mode)));
 /* line 474: */
FKCBCTR.data[2] = (A68_INT )(*(&(EKCBCTR_rd->Props)));
 /* line 475: */
 /* line 476: */
FKCBCTR.data[3] = PLAAOSF_max((*(&(EKCBCTR_rd->Maxname))), HAAACTR_minidno);
(void)(A_CALLPROC(IGCBCTR_putints,(197, A_HIS1ARR(GKCBCTR,FKCBCTR,A68_INT ,4)),(197, A_HIS1ARR(GKCBCTR,FKCBCTR,A68_INT ,4),(IGCBCTR_putints).nonlocals)));
 /* line 477: */
 /* line 478: */
 /* line 480: */
IKCBCTR = (*(&(EKCBCTR_rd->Name))) ;
(void)(A_CALLPROC(RHCBCTR_puttruncatedchars,(A_HISVEC(HKCBCTR,IKCBCTR,32,A68_CHAR )),(A_HISVEC(HKCBCTR,IKCBCTR,32,A68_CHAR ),(RHCBCTR_puttruncatedchars).nonlocals)));
} 
break;
case 5: /* STRUCT(INT)  */
JKCBCTR_nse = (TICBCTR.data.mode5);
 /* line 481: */
 /* line 482: */
(void)(A_CALLPROC(RFCBCTR_outprep,(1, (66+JKCBCTR_nse.Nse)),(1, (66+JKCBCTR_nse.Nse),(RFCBCTR_outprep).nonlocals)));
break;
case 2: /* BOOL */
KKCBCTR_b = (TICBCTR.data.mode2);
 /* line 483: */
 /* line 484: */
(void)(A_CALLPROC(RFCBCTR_outprep,(1, (65+(KKCBCTR_b))),(1, (65+(KKCBCTR_b)),(RFCBCTR_outprep).nonlocals)));
break;
case 6: /* STRUCT(INT,BOOL)  */
LKCBCTR_generator = (TICBCTR.data.mode6);
 /* line 485: */
 /* line 488: */
 /* line 489: */
MKCBCTR.data[0] = LKCBCTR_generator.Mode;
 /* line 490: */
MKCBCTR.data[1] = (LKCBCTR_generator.Loc);
 /* line 491: */
 /* line 492: */
(void)(A_CALLPROC(IGCBCTR_putints,((128+PGAACTR_generatorfn), A_HIS1ARR(NKCBCTR,MKCBCTR,A68_INT ,2)),((128+PGAACTR_generatorfn), A_HIS1ARR(NKCBCTR,MKCBCTR,A68_INT ,2),(IGCBCTR_putints).nonlocals)));
break;
case 8: /* STRUCT(INT,INT,INT)  */
 /* line 493: */
 /* line 494: */
(void)(PXIACTR_error(808));
break;
case 10: /* STRUCT(INT)  */
OKCBCTR_al = (TICBCTR.data.mode10);
 /* line 495: */
 /* line 496: */
(void)(A_CALLPROC(YGCBCTR_putint,(75, OKCBCTR_al.Almode),(75, OKCBCTR_al.Almode,(YGCBCTR_putint).nonlocals)));
break;
case 11: /* STRUCT(INT,INT)  */
PKCBCTR_c = (TICBCTR.data.mode11);
 /* line 498: */
QKCBCTR.data[0] = PKCBCTR_c.Mode;
QKCBCTR.data[1] = PKCBCTR_c.Nopars;
 /* line 499: */
(void)(A_CALLPROC(IGCBCTR_putints,(70, A_HIS1ARR(RKCBCTR,QKCBCTR,A68_INT ,2)),(70, A_HIS1ARR(RKCBCTR,QKCBCTR,A68_INT ,2),(IGCBCTR_putints).nonlocals)));
break;
case 13: /* STRUCT(REF MODE125,BOOL)  */
SKCBCTR_xl = (TICBCTR.data.mode13);
 /* line 500: */
 /* line 501: */
if (SKCBCTR_xl.Notsetting)
{ 
TKCBCTR_rl = SKCBCTR_xl.Lab;
 /* line 502: */
 /* line 503: */
if ((*(&(TKCBCTR_rl->Status)))==0)
{ 
(void)(A_CALLPROC(YGCBCTR_putint,(194, (*(&(TKCBCTR_rl->Labno)))),(194, (*(&(TKCBCTR_rl->Labno))),(YGCBCTR_putint).nonlocals)));
 /* line 504: */
 /* line 505: */
VKCBCTR = (*(&(TKCBCTR_rl->Name))) ;
(void)(A_CALLPROC(RHCBCTR_puttruncatedchars,(A_HISVEC(UKCBCTR,VKCBCTR,32,A68_CHAR )),(A_HISVEC(UKCBCTR,VKCBCTR,32,A68_CHAR ),(RHCBCTR_puttruncatedchars).nonlocals)));
} 
else
{ 
WKCBCTR.data[0] = (*(&(TKCBCTR_rl->Labno)));
WKCBCTR.data[1] = (*(&(TKCBCTR_rl->Status)));
 /* line 506: */
 /* line 507: */
(void)(A_CALLPROC(IGCBCTR_putints,(195, A_HIS1ARR(XKCBCTR,WKCBCTR,A68_INT ,2)),(195, A_HIS1ARR(XKCBCTR,WKCBCTR,A68_INT ,2),(IGCBCTR_putints).nonlocals)));
} 
} 
else
{ 
 /* line 508: */
 /* line 509: */
(void)(A_CALLPROC(YGCBCTR_putint,(196, (*(&(SKCBCTR_xl.Lab->Labno)))),(196, (*(&(SKCBCTR_xl.Lab->Labno))),(YGCBCTR_putint).nonlocals)));
} 
break;
case 4: /* REF STRUCT(MODE107,INT,INT,REF MODE125)  */
YKCBCTR_lb = (TICBCTR.data.mode4);
 /* line 510: */
(void)(A_CALLPROC(YGCBCTR_putint,(74, (*(&(YKCBCTR_lb->Labno)))),(74, (*(&(YKCBCTR_lb->Labno))),(YGCBCTR_putint).nonlocals)));
break;
case 18: /* STRUCT(INT,INT,INT,INT,INT,INT)  */
ZKCBCTR_xs = (TICBCTR.data.mode18);
 /* line 512: */
IZBBCTR_xsizes = ZKCBCTR_xs;
break;
case 19: /* REF VECTOR [] MODE120 */
ALCBCTR_mdes = (TICBCTR.data.mode19);
 /* line 513: */
{ 
(void)(A_CALLPROC(SKMACTR_initialiseuniquenameserver,(QRIACTR_uname_option),(QRIACTR_uname_option,(SKMACTR_initialiseuniquenameserver).nonlocals)));
 /* line 514: */
 /* line 515: */
 /* line 517: */
(void)(SDOACTR_initialisemodetable(A_VECARR(ALCBCTR_mdes,BLCBCTR), (*(&((&IZBBCTR_xsizes)->Nomodes)))));
} 
break;
case 26: /* STRUCT(BOOL,INT,REF MODE123)  */
CLCBCTR_xtd = (TICBCTR.data.mode26);
 /* line 518: */
{ 
 /* line 519: */
if (EFCBCTR_xtmodulepending)
{ 
EFCBCTR_xtmodulepending = A68_FALSE;
 /* line 520: */
 /* line 521: */
(void)(JEPACTR_adddecsmodule(DFCBCTR_lastxtmodule, CLCBCTR_xtd.Level));
} 
 /* line 522: */
 /* line 523: */
 /* line 524: */
(void)(OFPACTR_addexternalid((*CLCBCTR_xtd.Id)));
} 
break;
case 25: /* STRUCT(INT,INT,MODE107,MODE126)  */
DLCBCTR_xtm = (TICBCTR.data.mode25);
 /* line 525: */
 /* line 526: */
if (DLCBCTR_xtm.Type<0)
{ 
DFCBCTR_lastxtmodule = DLCBCTR_xtm;
 /* line 527: */
 /* line 529: */
EFCBCTR_xtmodulepending = A68_TRUE;
} 
else
{ 
 /* line 530: */
ELCBCTR.data[0] = DLCBCTR_xtm.Moduleno;
 /* line 531: */
ELCBCTR.data[1] = DLCBCTR_xtm.Ym.Specs.upb;
(void)(A_CALLPROC(IGCBCTR_putints,(QCCBCTR_xtmoduletype, A_HIS1ARR(FLCBCTR,ELCBCTR,A68_INT ,2)),(QCCBCTR_xtmoduletype, A_HIS1ARR(FLCBCTR,ELCBCTR,A68_INT ,2),(IGCBCTR_putints).nonlocals)));
 /* line 532: */
HLCBCTR = DLCBCTR_xtm.Name ;
(void)(A_CALLPROC(RHCBCTR_puttruncatedchars,(A_HISVEC(GLCBCTR,HLCBCTR,32,A68_CHAR )),(A_HISVEC(GLCBCTR,HLCBCTR,32,A68_CHAR ),(RHCBCTR_puttruncatedchars).nonlocals)));
 /* line 533: */
JLCBCTR = DLCBCTR_xtm.Ym.Uname ;
(void)(A_CALLPROC(KHCBCTR_putchars,(A_HISVEC(ILCBCTR,JLCBCTR,7,A68_CHAR )),(A_HISVEC(ILCBCTR,JLCBCTR,7,A68_CHAR ),(KHCBCTR_putchars).nonlocals)));
 /* line 534: */
LLCBCTR = DLCBCTR_xtm.Ym.Lname ;
(void)(A_CALLPROC(KHCBCTR_putchars,(A_HISVEC(KLCBCTR,LLCBCTR,7,A68_CHAR )),(A_HISVEC(KLCBCTR,LLCBCTR,7,A68_CHAR ),(KHCBCTR_putchars).nonlocals)));
 /* line 535: */
NLCBCTR = DLCBCTR_xtm.Ym.Gname ;
(void)(A_CALLPROC(KHCBCTR_putchars,(A_HISVEC(MLCBCTR,NLCBCTR,7,A68_CHAR )),(A_HISVEC(MLCBCTR,NLCBCTR,7,A68_CHAR ),(KHCBCTR_putchars).nonlocals)));
 /* line 536: */
 /* line 537: */
PLCBCTR = DLCBCTR_xtm.Ym.Specs ;
QLCBCTR = PLCBCTR.upb -1;
OLCBCTR_spec = PLCBCTR.data;
for (;QLCBCTR-- >= 0;
(OLCBCTR_spec++
) )
{
 /* line 538: */
SLCBCTR = (*(&(OLCBCTR_spec->Ys))) ;
(void)(A_CALLPROC(KHCBCTR_putchars,(A_HISVEC(RLCBCTR,SLCBCTR,7,A68_CHAR )),(A_HISVEC(RLCBCTR,SLCBCTR,7,A68_CHAR ),(KHCBCTR_putchars).nonlocals)));
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
TLCBCTR_open = (TICBCTR.data.mode23);
 /* line 545: */
 /* line 546: */
GFCBCTR_syntheticmoduleno = TLCBCTR_open.Moduleno;
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
ULCBCTR_xm = (TICBCTR.data.mode21);
 /* line 551: */
 /* line 552: */
(void)(TCPACTR_initialisecurrentmodule(ULCBCTR_xm));
break;
case 32: /* STRUCT(REF MODE92,REF MODE92)  */
VLCBCTR_xbu = (TICBCTR.data.mode32);
 /* line 553: */
A_CLOSURE( XLCBCTR_generator, YLCBCTR_generator, ZLCBCTR_generator );
(( ZLCBCTR_generator * ) ( XLCBCTR_generator.nonlocals )) -> VLCBCTR_xbu = VLCBCTR_xbu;
 /* line 554: */
A_CALLPROC(XLCBCTR_generator,(A68_FALSE, &CMCBCTR),(A68_FALSE, &CMCBCTR,(XLCBCTR_generator).nonlocals));
DMCBCTR = VLCBCTR_xbu.Decnos ;
FMCBCTR = A_VECARR(DMCBCTR,EMCBCTR) ;
(void)(A_R1ASSIGN2(FMCBCTR,CMCBCTR,A68_INT )) ;
ICPACTR_keptdecnos = CMCBCTR;
break;
case 22: /* STRUCT(MODE107,INT,INT,INT,MODE133)  */
GMCBCTR_s = (TICBCTR.data.mode22);
 /* line 555: */
 /* line 556: */
 /* line 557: */
(void)(BEPACTR_initialisespec(GMCBCTR_s));
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

A_STATIC A68_VOID  TNCBCTR_positioncurrent(void)
{ 
A_PROC_ENTRY(positioncurrent);
 /* line 635: */
 /* line 637: */
if ((*UACBCTR_strptr)<(*TACBCTR_streambuffer).upb)
{ 
 /* line 638: */
/*SKIP*/;
} 
else
{ 
 /* line 639: */
 /* line 640: */
if (((*VACBCTR_currentbuffer)+=1)>(*WACBCTR_buffers).upb)
{ 
 /* line 641: */
 /* line 642: */
(void)(WXIACTR_assert(VNCBCTR, A68_FALSE));
} 
else
{ 
(void)((*TACBCTR_streambuffer) = (*(&A_VINDEX((*WACBCTR_buffers),(*VACBCTR_currentbuffer)))));
 /* line 643: */
 /* line 644: */
(*UACBCTR_strptr) = 0;
} 
} 
A_PROC_EXIT(positioncurrent);
return;
} 
#undef NL

A_STATIC A68_INT  WNCBCTR_nextbyte(void)
{ 
A68_INT  XNCBCTR;  /* clause result */
A68_INT  YNCBCTR;  /* YIELD */
A_PROC_ENTRY(nextbyte);
{ 
(void)(TNCBCTR_positioncurrent());
YNCBCTR = (*UACBCTR_strptr)+=1 ;
XNCBCTR = (A68_INT)(unsigned char)(*(&A_VINDEX((*TACBCTR_streambuffer),YNCBCTR)));
} 
A_PROC_EXIT(nextbyte);
return( XNCBCTR );
} 
#undef NL

A_STATIC A68_INT  ZNCBCTR_nextint(void)
{ 
A68_VC  BOCBCTR;  /* OPERATORS - trim index */
A68_VC  COCBCTR;  /* OPERATORS - trim index */
A68_VC  DOCBCTR;  /* OPERATORS - trim index */
A68_INT  AOCBCTR_nexti A_UNUSED = {0};
A68_INT  EOCBCTR;  /* clause result */
A_PROC_ENTRY(nextint);
{ 
(void)(TNCBCTR_positioncurrent());
 /* line 653: */
COCBCTR = A_VTRIM(BOCBCTR,((*TACBCTR_streambuffer)),A_VTSCRIPT(&(BOCBCTR.upb),((*TACBCTR_streambuffer)).upb,((*UACBCTR_strptr)+1),((*TACBCTR_streambuffer)).upb)) ;
AOCBCTR_nexti = GOAAOSF_stringvalue(A_VTRIM(DOCBCTR,(COCBCTR),A_VTSCRIPT(&(DOCBCTR.upb),(COCBCTR).upb,1,4)));
 /* line 654: */
(*UACBCTR_strptr)+=4;
 /* line 655: */
 /* line 656: */
EOCBCTR = AOCBCTR_nexti;
} 
A_PROC_EXIT(nextint);
return( EOCBCTR );
} 
#undef NL

A_STATIC A68_VOID  HOCBCTR_nextstring(A68_VC  *ReturnedValue)
{ 
A68_INT  IOCBCTR;  /* YIELD */
A68_VC  JOCBCTR;  /* OPERATORS - trim index */
A68_VC  KOCBCTR;  /* clause result */
A_PROC_ENTRY(nextstring);
{ 
(void)(TNCBCTR_positioncurrent());
 /* line 664: */
IOCBCTR = (*UACBCTR_strptr)+=1 ;
(void)(RNCBCTR_upbstring = (A68_INT)(unsigned char)(*(&A_VINDEX((*TACBCTR_streambuffer),IOCBCTR))));
 /* line 665: */
(void)(SNCBCTR_string = A_VTRIM(JOCBCTR,((*TACBCTR_streambuffer)),A_VTSCRIPT(&(JOCBCTR.upb),((*TACBCTR_streambuffer)).upb,((*UACBCTR_strptr)+1),((*UACBCTR_strptr)+RNCBCTR_upbstring))));
 /* line 666: */
(*UACBCTR_strptr)+=RNCBCTR_upbstring;
 /* line 667: */
 /* line 668: */
KOCBCTR = SNCBCTR_string;
} 
A_PROC_EXIT(nextstring);
*ReturnedValue = (KOCBCTR);
return;
} 
#undef NL

A_STATIC A68_INT  POCBCTR_nexttype(void)
{ 
A68_INT  QOCBCTR_t A_UNUSED = {0};
A68_INT  ROCBCTR;  /* YIELD */
A68_BOOL  SOCBCTR;  /* clause result */
A68_275 * TOCBCTR;  /* YIELD */
A68_INT  UOCBCTR;  /* YIELD */
A68_BOOL  XOCBCTR;  /* optbool result */
A68_VC  BPCBCTR;  /* avoid structure result */
A68_212  DPCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_211  EPCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_301  FPCBCTR;  /* collateral clause result */
A68_212  IPCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  JPCBCTR;  /* YIELD */
A68_VC  KPCBCTR;  /* avoid structure result */
A68_212  LPCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_212  OPCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  PPCBCTR;  /* YIELD */
A68_212  QPCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_211  RPCBCTR;  /* OPERATORS - istruct -> vector */
A68_VC  SPCBCTR;  /* avoid structure result */
A68_VC  TPCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  UPCBCTR;  /* avoid structure result */
A68_VC  VPCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  YPCBCTR;  /* clause result */
A_PROC_ENTRY(nexttype);
{ 
 /* line 679: */
for ( ;; )
{ 
 /* line 680: */
(void)(TNCBCTR_positioncurrent());
 /* line 681: */
ROCBCTR = (*UACBCTR_strptr)+=1 ;
(void)(QOCBCTR_t = (A68_INT)(unsigned char)(*(&A_VINDEX((*TACBCTR_streambuffer),ROCBCTR))));
 /* line 682: */
 /* line 683: */
SOCBCTR = (QOCBCTR_t<XBCBCTR_separatorbase);
if ( !SOCBCTR ) break;
 /* line 684: */
if (QOCBCTR_t<3)
{ 
TOCBCTR = (&A_R1INDEX(SZBBCTR_streams,VMCBCTR_level)) ;
(*TOCBCTR) = WZBBCTR_current;
 /* line 685: */
 /* line 687: */
UOCBCTR = VMCBCTR_level+=((3-QOCBCTR_t)-QOCBCTR_t) ;
(void)(WZBBCTR_current = (*(&A_R1INDEX(SZBBCTR_streams,UOCBCTR))));
} 
else
{ 
 /* line 688: */
 /* line 689: */
if (QOCBCTR_t==KCCBCTR_linetype)
{ 
(void)(XRIACTR_linenumber = A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
 /* line 690: */
(void)(LOCBCTR_line_start = A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
 /* line 691: */
(void)(MOCBCTR_line_length = A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
 /* line 692: */
NOCBCTR_statement_number = 0;
 /* line 694: */
 /* line 695: */
XOCBCTR = (ZCHACTR_tracelevel(WOCBCTR)!=0);
if ( XOCBCTR )
{ /* line 696: */
XOCBCTR = ((XRIACTR_linenumber/100)>OOCBCTR_hundred_counter);
}
if (XOCBCTR)
{ 
(void)(OOCBCTR_hundred_counter = (XRIACTR_linenumber/100));
 /* line 697: */
 /* line 698: */
 /* line 699: */
ROAAOSF_whole( XRIACTR_linenumber, 0, &BPCBCTR );
(void)(ISIACTR_typelineonterminal(A_VC_PLUS(A_VC_PLUS(APCBCTR,BPCBCTR),CPCBCTR)));
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
(void)(MDMACTR_writecstream(A_HVEC(EPCBCTR,A_UNITE(DPCBCTR,mode4,4,EIAACTR_cnewline),A68_212 ), NSLACTR_codestream(VRLACTR_currentlevel())));
} 
else
{ 
 /* line 710: */
 /* line 711: */
JPCBCTR = HPCBCTR ;
FPCBCTR.data[0] = A_UNITE(IPCBCTR,mode2,2,JPCBCTR);
 /* line 712: */
ROAAOSF_whole( XRIACTR_linenumber, 0, &KPCBCTR );
FPCBCTR.data[1] = A_UNITE(LPCBCTR,mode2,2,KPCBCTR);
 /* line 713: */
PPCBCTR = NPCBCTR ;
FPCBCTR.data[2] = A_UNITE(OPCBCTR,mode2,2,PPCBCTR);
FPCBCTR.data[3] = A_UNITE(QPCBCTR,mode4,4,EIAACTR_cnewline);
 /* line 714: */
 /* line 715: */
(void)(MDMACTR_writecstream(A_HISVEC(RPCBCTR,FPCBCTR,4,A68_212 ), NSLACTR_codestream(VRLACTR_currentlevel())));
} 
 /* line 717: */
 /* line 718: */
if (UMCBCTR_printstream)
{ 
 /* line 719: */
 /* line 720: */
ROAAOSF_whole( XRIACTR_linenumber, 0, &SPCBCTR );
(void)(A_CALLPROC(MSIACTR_list,(A_VC_PLUS(SPCBCTR,A_HVEC(TPCBCTR,':',A68_CHAR ))),(A_VC_PLUS(SPCBCTR,A_HVEC(TPCBCTR,':',A68_CHAR )),(MSIACTR_list).nonlocals)));
} 
} 
else
{ 
 /* line 721: */
 /* line 722: */
if (QOCBCTR_t==LCCBCTR_maptype)
{ 
NOCBCTR_statement_number+=1;
 /* line 723: */
 /* line 724: */
if (UMCBCTR_printstream)
{ 
 /* line 725: */
 /* line 726: */
ROAAOSF_whole( XRIACTR_linenumber, 0, &UPCBCTR );
(void)(A_CALLPROC(MSIACTR_list,(A_VC_PLUS(UPCBCTR,A_HVEC(VPCBCTR,':',A68_CHAR ))),(A_VC_PLUS(UPCBCTR,A_HVEC(VPCBCTR,':',A68_CHAR )),(MSIACTR_list).nonlocals)));
} 
} 
else
{ 
 /* line 727: */
 /* line 728: */
(void)(WXIACTR_assert(XPCBCTR, A68_FALSE));
} 
} 
} 
}
 /* line 729: */
 /* line 730: */
YPCBCTR = QOCBCTR_t;
} 
A_PROC_EXIT(nexttype);
return( YPCBCTR );
} 
#undef NL

A_STATIC A68_VOID  BQCBCTR_nextxchars(A68_INT  Suggestedsize, A68_INT  Insertion, A68_VC  *ReturnedValue)
{ 
A68_INT  CQCBCTR_type A_UNUSED = {0};
A68_INT  DQCBCTR_used A_UNUSED = {0};
A68_INT  EQCBCTR_resultsize A_UNUSED = {0};
A68_103  GQCBCTR_generator;   /* proc value of non-global proc */
A68_VC  MQCBCTR;  /* avoid structure result */
A68_VC  LQCBCTR_result A_UNUSED = {0};
A68_VC  NQCBCTR;  /* clause result */
A68_VC  OQCBCTR;  /* avoid structure result */
A68_VC  PQCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  QQCBCTR;  /* avoid structure result */
A68_VC  RQCBCTR;  /* avoid structure result */
A68_VC  SQCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  TQCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  UQCBCTR;  /* avoid structure result */
A68_VC  VQCBCTR;  /* avoid structure result */
A68_VC  WQCBCTR;  /* avoid structure result */
A68_VC  XQCBCTR_string A_UNUSED = {0};
A68_INT  YQCBCTR_size A_UNUSED = {0};
A68_INT  ZQCBCTR_newused A_UNUSED = {0};
A68_INT  ARCBCTR_newresultsize A_UNUSED = {0};
A68_103  CRCBCTR_generator;   /* proc value of non-global proc */
A68_VC  HRCBCTR;  /* avoid structure result */
A68_VC  IRCBCTR_newresult A_UNUSED = {0};
A68_VC  JRCBCTR;  /* OPERATORS - trim index */
A68_VC  KRCBCTR;  /* OPERATORS - trim index */
A68_VC  LRCBCTR;  /* YIELD */
A68_VC  MRCBCTR;  /* OPERATORS - assign op */
A68_VC  NRCBCTR;  /* OPERATORS - trim index */
A68_VC  ORCBCTR;  /* YIELD */
A68_BOOL  PRCBCTR;  /* clause result */
A68_VC  SRCBCTR;  /* clause result */
A68_VC  TRCBCTR;  /* OPERATORS - trim index */
A_PROC_ENTRY(nextxchars);
 /* line 746: */
 /* line 747: */
{ 
CQCBCTR_type = POCBCTR_nexttype();
 /* line 748: */
DQCBCTR_used = 0;
EQCBCTR_resultsize = Suggestedsize;
 /* line 749: */
A_CLOSURE( GQCBCTR_generator, HQCBCTR_generator, IQCBCTR_generator );
(( IQCBCTR_generator * ) ( GQCBCTR_generator.nonlocals )) -> EQCBCTR_resultsize = (&EQCBCTR_resultsize);
A_CALLPROC(GQCBCTR_generator,(A68_FALSE, &MQCBCTR),(A68_FALSE, &MQCBCTR,(GQCBCTR_generator).nonlocals));
LQCBCTR_result = MQCBCTR;
 /* line 751: */
for ( ;; )
{ 
 /* line 753: */
 /* line 754: */
switch ( Insertion )
{ 
case 1: 
 /* line 755: */
HOCBCTR_nextstring(  &OQCBCTR );
NQCBCTR = A_VC_PLUS(OQCBCTR,A_HVEC(PQCBCTR,GVBAOSF_newline_char,A68_CHAR ));
break;
case 2: 
 /* line 756: */
HOCBCTR_nextstring(  &QQCBCTR );
DRJACTR_replacecontrolchars( QQCBCTR, &RQCBCTR );
NQCBCTR = A_VC_PLUS(A_VC_PLUS(RQCBCTR,A_HVEC(SQCBCTR,'\\',A68_CHAR )),A_HVEC(TQCBCTR,GVBAOSF_newline_char,A68_CHAR ));
break;
case 3: 
 /* line 757: */
 /* line 758: */
HOCBCTR_nextstring(  &UQCBCTR );
DRJACTR_replacecontrolchars( UQCBCTR, &VQCBCTR );
NQCBCTR = VQCBCTR;
break;
default: 
HOCBCTR_nextstring(  &WQCBCTR );
NQCBCTR = WQCBCTR;
break;
} 
XQCBCTR_string = NQCBCTR;
 /* line 759: */
YQCBCTR_size = XQCBCTR_string.upb;
 /* line 760: */
ZQCBCTR_newused = (DQCBCTR_used+YQCBCTR_size);
 /* line 762: */
 /* line 763: */
 /* line 764: */
if (ZQCBCTR_newused>EQCBCTR_resultsize)
{ 
ARCBCTR_newresultsize = (2*PLAAOSF_max(ZQCBCTR_newused, EQCBCTR_resultsize));
 /* line 765: */
A_CLOSURE( CRCBCTR_generator, DRCBCTR_generator, ERCBCTR_generator );
(( ERCBCTR_generator * ) ( CRCBCTR_generator.nonlocals )) -> ARCBCTR_newresultsize = ARCBCTR_newresultsize;
A_CALLPROC(CRCBCTR_generator,(A68_FALSE, &HRCBCTR),(A68_FALSE, &HRCBCTR,(CRCBCTR_generator).nonlocals));
IRCBCTR_newresult = HRCBCTR;
 /* line 766: */
LRCBCTR = A_VTRIM(JRCBCTR,(IRCBCTR_newresult),A_VTSCRIPT(&(JRCBCTR.upb),(IRCBCTR_newresult).upb,1,DQCBCTR_used)) ;
MRCBCTR = A_VTRIM(KRCBCTR,(LQCBCTR_result),A_VTSCRIPT(&(KRCBCTR.upb),(LQCBCTR_result).upb,1,DQCBCTR_used)) ;
(void)(A_VASSIGN2(MRCBCTR,LRCBCTR,A68_CHAR ));
 /* line 767: */
LQCBCTR_result = IRCBCTR_newresult;
 /* line 768: */
 /* line 769: */
EQCBCTR_resultsize = ARCBCTR_newresultsize;
} 
 /* line 770: */
ORCBCTR = A_VTRIM(NRCBCTR,(LQCBCTR_result),A_VTSCRIPT(&(NRCBCTR.upb),(LQCBCTR_result).upb,(DQCBCTR_used+1),ZQCBCTR_newused)) ;
(void)(A_VASSIGN2(XQCBCTR_string,ORCBCTR,A68_CHAR ));
 /* line 771: */
DQCBCTR_used = ZQCBCTR_newused;
 /* line 772: */
 /* line 773: */
 /* line 774: */
PRCBCTR = (CQCBCTR_type==MCCBCTR_notlastxcharstype);
if ( !PRCBCTR ) break;
 /* line 775: */
(void)(CQCBCTR_type = POCBCTR_nexttype());
}
 /* line 776: */
(void)(WXIACTR_assert(RRCBCTR, (CQCBCTR_type==NCCBCTR_lastxcharstype)));
 /* line 777: */
 /* line 778: */
SRCBCTR = A_VTRIM(TRCBCTR,(LQCBCTR_result),A_VTSCRIPT(&(TRCBCTR.upb),(LQCBCTR_result).upb,1,DQCBCTR_used));
} 
A_PROC_EXIT(nextxchars);
*ReturnedValue = (SRCBCTR);
return;
} 
#undef NL

A_STATIC A68_VOID  URCBCTR_nextstreamimperative(A68_186  *ReturnedValue)
{ 
A68_INT  VRCBCTR_type A_UNUSED = {0};
A68_VC  XRCBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  YRCBCTR;  /* avoid structure result */
A68_200  ASCBCTR_s A_UNUSED = {0};
A68_INT * BSCBCTR;  /* YIELD */
A68_INT * CSCBCTR;  /* YIELD */
A68_BITS * DSCBCTR;  /* YIELD */
A68_INT * ESCBCTR;  /* YIELD */
A68_186  FSCBCTR;  /* clause result */
A68_186  GSCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_202  HSCBCTR_t A_UNUSED = {0};
A68_INT * ISCBCTR;  /* YIELD */
A68_BITS * JSCBCTR;  /* YIELD */
A68_186  KSCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_200  LSCBCTR_semi A_UNUSED = {0};
A68_INT * MSCBCTR;  /* YIELD */
A68_BITS * NSCBCTR;  /* YIELD */
A68_186  OSCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  PSCBCTR_loadtype A_UNUSED = {0};
A68_INT  QSCBCTR;  /* clause result */
A68_186  RSCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_BOOL  SSCBCTR;  /* YIELD */
A68_186  TSCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_BOOL  USCBCTR;  /* YIELD */
A68_146  VSCBCTR_e A_UNUSED = {0};
A68_INT * WSCBCTR;  /* YIELD */
A68_186  XSCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_146  YSCBCTR_s A_UNUSED = {0};
A68_INT * ZSCBCTR;  /* YIELD */
A68_186  ATCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_146  BTCBCTR_n A_UNUSED = {0};
A68_INT * CTCBCTR;  /* YIELD */
A68_186  DTCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_199  ETCBCTR_c A_UNUSED = {0};
A68_INT * FTCBCTR;  /* YIELD */
A68_INT * GTCBCTR;  /* YIELD */
A68_VC  HTCBCTR;  /* avoid structure result */
A68_VC * ITCBCTR;  /* YIELD */
A68_186  JTCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_186  KTCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_186  LTCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_186  MTCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_106  NTCBCTR_l A_UNUSED = {0};
A68_INT * OTCBCTR;  /* YIELD */
A68_186  PTCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_188  QTCBCTR_a A_UNUSED = {0};
A68_INT * RTCBCTR;  /* YIELD */
A68_VC  STCBCTR;  /* avoid structure result */
A68_VC * TTCBCTR;  /* YIELD */
A68_186  UTCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_187  VTCBCTR_c A_UNUSED = {0};
A68_VC  WTCBCTR;  /* avoid structure result */
A68_VC * XTCBCTR;  /* YIELD */
A68_186  YTCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_190  ZTCBCTR_s A_UNUSED = {0};
A68_INT * AUCBCTR;  /* YIELD */
A68_VC  BUCBCTR;  /* avoid structure result */
A68_VC * CUCBCTR;  /* YIELD */
A68_186  DUCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_186  EUCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  FUCBCTR;  /* YIELD */
A68_186  GUCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_186  HUCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  IUCBCTR;  /* YIELD */
A68_186  JUCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  KUCBCTR_mode A_UNUSED = {0};
A68_140  LUCBCTR;  /* collateral clause result */
A68_VC  MUCBCTR;  /* avoid structure result */
A68_186  NUCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_191  OUCBCTR_o A_UNUSED = {0};
A68_INT * PUCBCTR;  /* YIELD */
A68_INT * QUCBCTR;  /* YIELD */
A68_INT * RUCBCTR;  /* YIELD */
A68_INT  SUCBCTR_n A_UNUSED = {0};
A68_BOOL  TUCBCTR;  /* clause result */
A68_BOOL  UUCBCTR;  /* clause result */
A68_INT  VUCBCTR;  /* ADICOPS - MOD */
A68_INT  WUCBCTR;  /* ADICOPS - MOD */
A68_INT  XUCBCTR;  /* ADICOPS - MOD */
A68_202  YUCBCTR;  /* collateral clause result */
A68_186  ZUCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_186  AVCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  BVCBCTR_miscellaneoustype A_UNUSED = {0};
A68_INT  CVCBCTR;  /* clause result */
A68_195  DVCBCTR_u A_UNUSED = {0};
A68_INT * EVCBCTR;  /* YIELD */
A68_BITS * FVCBCTR;  /* YIELD */
A68_INT * GVCBCTR;  /* YIELD */
A68_186  HVCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_194  IVCBCTR_s A_UNUSED = {0};
A68_INT * JVCBCTR;  /* YIELD */
A68_VC  KVCBCTR;  /* avoid structure result */
A68_VC * LVCBCTR;  /* YIELD */
A68_INT * MVCBCTR;  /* YIELD */
A68_BOOL * NVCBCTR;  /* YIELD */
A68_186  OVCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_194  PVCBCTR_e A_UNUSED = {0};
A68_INT * QVCBCTR;  /* YIELD */
A68_VC  RVCBCTR;  /* OPERATORS - nil -> mode */
A68_VC * SVCBCTR;  /* YIELD */
A68_INT * TVCBCTR;  /* YIELD */
A68_BOOL * UVCBCTR;  /* YIELD */
A68_186  VVCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_194  WVCBCTR_d A_UNUSED = {0};
A68_INT * XVCBCTR;  /* YIELD */
A68_VC  YVCBCTR;  /* OPERATORS - nil -> mode */
A68_VC * ZVCBCTR;  /* YIELD */
A68_INT * AWCBCTR;  /* YIELD */
A68_BOOL * BWCBCTR;  /* YIELD */
A68_186  CWCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_193  DWCBCTR_r A_UNUSED = {0};
A68_INT * EWCBCTR;  /* YIELD */
A68_INT * FWCBCTR;  /* YIELD */
A68_BITS * GWCBCTR;  /* YIELD */
A68_INT * HWCBCTR;  /* YIELD */
A68_VC  IWCBCTR;  /* avoid structure result */
A68_VC * JWCBCTR;  /* YIELD */
A68_186  KWCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_186  NWCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_186  OWCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_204  PWCBCTR_s A_UNUSED = {0};
A68_INT * QWCBCTR;  /* YIELD */
A68_INT * RWCBCTR;  /* YIELD */
A68_INT * SWCBCTR;  /* YIELD */
A68_186  TWCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_196  UWCBCTR_c A_UNUSED = {0};
A68_INT * VWCBCTR;  /* YIELD */
A68_186  WWCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_186  XWCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_191  YWCBCTR_v A_UNUSED = {0};
A68_INT * ZWCBCTR;  /* YIELD */
A68_INT * AXCBCTR;  /* YIELD */
A68_186  BXCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_203  CXCBCTR_cl A_UNUSED = {0};
A68_INT * DXCBCTR;  /* YIELD */
A68_INT * EXCBCTR;  /* YIELD */
A68_292  GXCBCTR_generator;   /* proc value of non-global proc */
A68_185  LXCBCTR;  /* avoid structure result */
A68_185 * MXCBCTR;  /* YIELD */
A68_INT * NXCBCTR_actual A_UNUSED = {0};
A68_185  OXCBCTR;  /* forall yield */
A68_INT  PXCBCTR;  /* forall loop counter */
A68_186  QXCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_205  RXCBCTR_x A_UNUSED = {0};
A68_INT * SXCBCTR;  /* YIELD */
A68_303  UXCBCTR_generator;   /* proc value of non-global proc */
A68_206  ZXCBCTR;  /* avoid structure result */
A68_206 * AYCBCTR;  /* YIELD */
A68_VC  BYCBCTR;  /* avoid structure result */
A68_VC * CYCBCTR;  /* YIELD */
A68_VC  DYCBCTR;  /* avoid structure result */
A68_VC * EYCBCTR;  /* YIELD */
A68_VC  FYCBCTR;  /* avoid structure result */
A68_VC * GYCBCTR;  /* YIELD */
A68_VC  HYCBCTR;  /* avoid structure result */
A68_VC * IYCBCTR;  /* YIELD */
A68_VC * JYCBCTR_ysname A_UNUSED = {0};
A68_206  KYCBCTR;  /* forall yield */
A68_INT  LYCBCTR;  /* forall loop counter */
A68_VC  MYCBCTR;  /* avoid structure result */
A68_186  NYCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_186  OYCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_154  PYCBCTR_w A_UNUSED = {0};
A68_INT * QYCBCTR;  /* YIELD */
A68_186  RYCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_192  SYCBCTR_i A_UNUSED = {0};
A68_INT * TYCBCTR;  /* YIELD */
A68_INT * UYCBCTR;  /* YIELD */
A68_INT * VYCBCTR;  /* YIELD */
A68_VC  WYCBCTR;  /* avoid structure result */
A68_VC * XYCBCTR;  /* YIELD */
A68_186  YYCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_201  ZYCBCTR_s A_UNUSED = {0};
A68_INT * AZCBCTR;  /* YIELD */
A68_INT * BZCBCTR;  /* YIELD */
A68_BITS * CZCBCTR;  /* YIELD */
A68_INT * DZCBCTR;  /* YIELD */
A68_186  EZCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_186  FZCBCTR_imperative A_UNUSED = {0};
A68_VC  GZCBCTR;  /* avoid structure result */
A68_VC  HZCBCTR_string A_UNUSED = {0};
A68_VC  IZCBCTR;  /* OPERATORS - trim index */
A68_VC  JZCBCTR;  /* OPERATORS - trim index */
A68_186  KZCBCTR;  /* clause result */
A_PROC_ENTRY(nextstreamimperative);
{ 
VRCBCTR_type = POCBCTR_nexttype();
 /* line 787: */
 /* line 788: */
if (UMCBCTR_printstream)
{ 
 /* line 789: */
ROAAOSF_whole( VRCBCTR_type, (-3), &YRCBCTR );
(void)(A_CALLPROC(MSIACTR_list,(A_VC_PLUS(A_VC_PLUS(A_HVEC(XRCBCTR,'[',A68_CHAR ),YRCBCTR),ZRCBCTR)),(A_VC_PLUS(A_VC_PLUS(A_HVEC(XRCBCTR,'[',A68_CHAR ),YRCBCTR),ZRCBCTR),(MSIACTR_list).nonlocals)));
} 
 /* line 791: */
 /* line 793: */
 /* line 794: */
 /* line 796: */
switch ( ((VRCBCTR_type/ICCBCTR_rangesize)+1) )
{ 
case 1: 
 /* line 797: */
 /* line 800: */
switch ( (VRCBCTR_type/JCCBCTR_subrangesize) )
{ 
case 1: 
{ 
BSCBCTR = (&((&ASCBCTR_s)->Fn)) ;
(void)((*BSCBCTR) = (VRCBCTR_type-XBCBCTR_separatorbase));
 /* line 801: */
CSCBCTR = (&((&ASCBCTR_s)->Mode)) ;
(void)((*CSCBCTR) = A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
DSCBCTR = (&((&ASCBCTR_s)->Props)) ;
(void)((*DSCBCTR) = (A68_BITS )A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
 /* line 802: */
ESCBCTR = (&((&ASCBCTR_s)->Param)) ;
(void)((*ESCBCTR) = A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
 /* line 803: */
 /* line 804: */
 /* line 807: */
FSCBCTR = A_UNITE(GSCBCTR,mode20,20,ASCBCTR_s);
} 
break;
case 2: 
{ 
ISCBCTR = (&((&HSCBCTR_t)->Fn)) ;
(void)((*ISCBCTR) = (VRCBCTR_type-YBCBCTR_terminatorbase));
 /* line 808: */
(void)(A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
JSCBCTR = (&((&HSCBCTR_t)->Props)) ;
(void)((*JSCBCTR) = (A68_BITS )A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
(void)(A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
 /* line 809: */
 /* line 810: */
 /* line 813: */
FSCBCTR = A_UNITE(KSCBCTR,mode22,22,HSCBCTR_t);
} 
break;
case 3: 
{ 
MSCBCTR = (&((&LSCBCTR_semi)->Fn)) ;
(*MSCBCTR) = WBAACTR_semifn;
 /* line 814: */
NSCBCTR = (&((&LSCBCTR_semi)->Props)) ;
(void)((*NSCBCTR) = (A68_BITS )((VRCBCTR_type-ZBCBCTR_semibase)*2048));
 /* line 815: */
 /* line 816: */
 /* line 817: */
 /* line 820: */
FSCBCTR = A_UNITE(OSCBCTR,mode20,20,LSCBCTR_semi);
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
PSCBCTR_loadtype = (VRCBCTR_type-ACCBCTR_loadbase);
 /* line 822: */
 /* line 823: */
 /* line 825: */
QSCBCTR = ((PSCBCTR_loadtype/JCCBCTR_subrangesize)+1);
switch ( QSCBCTR )
{ 
case 1: 
 /* line 826: */
 /* line 827: */
switch ( PSCBCTR_loadtype )
{ 
case 1: 
 /* line 829: */
SSCBCTR = A68_FALSE ;
FSCBCTR = A_UNITE(RSCBCTR,mode3,3,SSCBCTR);
break;
case 2: 
 /* line 831: */
USCBCTR = A68_TRUE ;
FSCBCTR = A_UNITE(TSCBCTR,mode3,3,USCBCTR);
break;
case 3: 
{ 
WSCBCTR = (&((&VSCBCTR_e)->Nse)) ;
(*WSCBCTR) = ZAAACTR_emptyfn;
 /* line 833: */
FSCBCTR = A_UNITE(XSCBCTR,mode1,1,VSCBCTR_e);
} 
break;
case 4: 
{ 
ZSCBCTR = (&((&YSCBCTR_s)->Nse)) ;
(*ZSCBCTR) = ABAACTR_skipfn;
 /* line 835: */
FSCBCTR = A_UNITE(ATCBCTR,mode1,1,YSCBCTR_s);
} 
break;
case 5: 
{ 
CTCBCTR = (&((&BTCBCTR_n)->Nse)) ;
(*CTCBCTR) = BBAACTR_nilfn;
 /* line 837: */
FSCBCTR = A_UNITE(DTCBCTR,mode1,1,BTCBCTR_n);
} 
break;
case 6: 
{ 
FTCBCTR = (&((&ETCBCTR_c)->Mode)) ;
(void)((*FTCBCTR) = A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
GTCBCTR = (&((&ETCBCTR_c)->Number)) ;
(void)((*GTCBCTR) = A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
BQCBCTR_nextxchars( 128, 1, &HTCBCTR );
ITCBCTR = (&((&ETCBCTR_c)->Insert)) ;
(*ITCBCTR) = HTCBCTR;
 /* line 839: */
FSCBCTR = A_UNITE(JTCBCTR,mode19,19,ETCBCTR_c);
} 
break;
case 7: 
 /* line 841: */
SXIACTR_terminalerror(600) ;
FSCBCTR = A_EMPTY(KTCBCTR,26);
break;
case 8: 
 /* line 843: */
SXIACTR_terminalerror(600) ;
FSCBCTR = A_EMPTY(LTCBCTR,26);
break;
case 9: 
 /* line 845: */
SXIACTR_terminalerror(600) ;
FSCBCTR = A_EMPTY(MTCBCTR,26);
break;
case 10: 
{ 
OTCBCTR = (&((&NTCBCTR_l)->Labno)) ;
(void)((*OTCBCTR) = A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
 /* line 847: */
FSCBCTR = A_UNITE(PTCBCTR,mode5,5,NTCBCTR_l);
} 
break;
case 11: 
{ 
RTCBCTR = (&((&QTCBCTR_a)->Mode)) ;
(void)((*RTCBCTR) = A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
BQCBCTR_nextxchars( 400, 1, &STCBCTR );
TTCBCTR = (&((&QTCBCTR_a)->String)) ;
(*TTCBCTR) = STCBCTR;
 /* line 849: */
FSCBCTR = A_UNITE(UTCBCTR,mode7,7,QTCBCTR_a);
} 
break;
case 12: 
{ 
BQCBCTR_nextxchars( 1, 3, &WTCBCTR );
XTCBCTR = (&((&VTCBCTR_c)->Representation)) ;
(*XTCBCTR) = WTCBCTR;
 /* line 851: */
FSCBCTR = A_UNITE(YTCBCTR,mode4,4,VTCBCTR_c);
} 
break;
case 13: 
{ 
AUCBCTR = (&((&ZTCBCTR_s)->Mode)) ;
(void)((*AUCBCTR) = A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
BQCBCTR_nextxchars( 160, 0, &BUCBCTR );
CUCBCTR = (&((&ZTCBCTR_s)->Denotation)) ;
(*CUCBCTR) = BUCBCTR;
 /* line 854: */
FSCBCTR = A_UNITE(DUCBCTR,mode9,9,ZTCBCTR_s);
} 
break;
case 14: 
 /* line 856: */
FUCBCTR = A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)) ;
FSCBCTR = A_UNITE(EUCBCTR,mode2,2,FUCBCTR);
break;
case 15: 
 /* line 857: */
 /* line 860: */
SXIACTR_terminalerror(600) ;
FSCBCTR = A_EMPTY(GUCBCTR,26);
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
if (VRCBCTR_type==80)
{ 
 /* line 864: */
IUCBCTR = A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)) ;
FSCBCTR = A_UNITE(HUCBCTR,mode2,2,IUCBCTR);
} 
else
{ 
 /* line 865: */
 /* line 868: */
SXIACTR_terminalerror(600) ;
FSCBCTR = A_EMPTY(JUCBCTR,26);
} 
break;
case 3: 
{ 
KUCBCTR_mode = (VRCBCTR_type-CCCBCTR_numberbase);
LUCBCTR.Mode = KUCBCTR_mode;
HOCBCTR_nextstring(  &MUCBCTR );
LUCBCTR.Nu = MUCBCTR;
 /* line 869: */
 /* line 872: */
FSCBCTR = A_UNITE(NUCBCTR,mode6,6,LUCBCTR);
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
PUCBCTR = (&((&OUCBCTR_o)->Fn)) ;
(void)((*PUCBCTR) = (VRCBCTR_type-DCCBCTR_operbase));
 /* line 875: */
QUCBCTR = (&((&OUCBCTR_o)->Mode)) ;
(void)((*QUCBCTR) = A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
 /* line 876: */
RUCBCTR = (&((&OUCBCTR_o)->Param)) ;
(void)((*RUCBCTR) = A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
 /* line 877: */
 /* line 878: */
{ 
SUCBCTR_n = ((*(&((&OUCBCTR_o)->Param)))/16);
 /* line 879: */
TUCBCTR = ((SUCBCTR_n==4)|(SUCBCTR_n==5));
} 
 /* line 880: */
WUCBCTR = (*(&((&OUCBCTR_o)->Param))) ;
XUCBCTR = 16 ;
UUCBCTR = ((((*(&((&OUCBCTR_o)->Fn)))==10)&TUCBCTR)&(A_MOD(WUCBCTR,XUCBCTR,VUCBCTR)==1));
if (UUCBCTR)
{ 
YUCBCTR.Fn = ICAACTR_optboolfn;
 /* line 881: */
YUCBCTR.Props = 0X0U;
 /* line 882: */
FSCBCTR = A_UNITE(ZUCBCTR,mode22,22,YUCBCTR);
} 
else
{ 
 /* line 885: */
FSCBCTR = A_UNITE(AVCBCTR,mode10,10,OUCBCTR_o);
} 
} 
break;
case 4: 
 /* line 886: */
{ 
BVCBCTR_miscellaneoustype = (VRCBCTR_type-ECCBCTR_miscellaneousbase);
 /* line 887: */
 /* line 888: */
 /* line 890: */
CVCBCTR = ((BVCBCTR_miscellaneoustype/JCCBCTR_subrangesize)+1);
switch ( CVCBCTR )
{ 
case 1: 
 /* line 891: */
 /* line 893: */
switch ( BVCBCTR_miscellaneoustype )
{ 
case 1: 
{ 
EVCBCTR = (&((&DVCBCTR_u)->Mode)) ;
(void)((*EVCBCTR) = A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
FVCBCTR = (&((&DVCBCTR_u)->Props)) ;
(void)((*FVCBCTR) = (A68_BITS )A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
GVCBCTR = (&((&DVCBCTR_u)->Param)) ;
(void)((*GVCBCTR) = A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
 /* line 896: */
FSCBCTR = A_UNITE(HVCBCTR,mode15,15,DVCBCTR_u);
} 
break;
case 2: 
{ 
JVCBCTR = (&((&IVCBCTR_s)->Labno)) ;
(void)((*JVCBCTR) = A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
HOCBCTR_nextstring(  &KVCBCTR );
LVCBCTR = (&((&IVCBCTR_s)->Name)) ;
(*LVCBCTR) = KVCBCTR;
 /* line 897: */
MVCBCTR = (&((&IVCBCTR_s)->Status)) ;
(*MVCBCTR) = 0;
NVCBCTR = (&((&IVCBCTR_s)->Notsetting)) ;
(*NVCBCTR) = A68_TRUE;
 /* line 898: */
 /* line 899: */
 /* line 902: */
FSCBCTR = A_UNITE(OVCBCTR,mode14,14,IVCBCTR_s);
} 
break;
case 3: 
{ 
QVCBCTR = (&((&PVCBCTR_e)->Labno)) ;
(void)((*QVCBCTR) = A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
SVCBCTR = (&((&PVCBCTR_e)->Name)) ;
(void)((*SVCBCTR) = A_VVAC(RVCBCTR));
 /* line 903: */
TVCBCTR = (&((&PVCBCTR_e)->Status)) ;
(void)((*TVCBCTR) = A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
UVCBCTR = (&((&PVCBCTR_e)->Notsetting)) ;
(*UVCBCTR) = A68_TRUE;
 /* line 904: */
 /* line 905: */
 /* line 908: */
FSCBCTR = A_UNITE(VVCBCTR,mode14,14,PVCBCTR_e);
} 
break;
case 4: 
{ 
XVCBCTR = (&((&WVCBCTR_d)->Labno)) ;
(void)((*XVCBCTR) = A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
ZVCBCTR = (&((&WVCBCTR_d)->Name)) ;
(void)((*ZVCBCTR) = A_VVAC(YVCBCTR));
 /* line 909: */
AWCBCTR = (&((&WVCBCTR_d)->Status)) ;
(*AWCBCTR) = 0;
BWCBCTR = (&((&WVCBCTR_d)->Notsetting)) ;
(*BWCBCTR) = A68_FALSE;
 /* line 910: */
 /* line 911: */
 /* line 914: */
FSCBCTR = A_UNITE(CWCBCTR,mode14,14,WVCBCTR_d);
} 
break;
case 5: 
{ 
EWCBCTR = (&((&DWCBCTR_r)->Rdenno)) ;
(void)((*EWCBCTR) = A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
FWCBCTR = (&((&DWCBCTR_r)->Mode)) ;
(void)((*FWCBCTR) = A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
GWCBCTR = (&((&DWCBCTR_r)->Props)) ;
(void)((*GWCBCTR) = (A68_BITS )A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
 /* line 915: */
HWCBCTR = (&((&DWCBCTR_r)->Maxname)) ;
(void)((*HWCBCTR) = A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
HOCBCTR_nextstring(  &IWCBCTR );
JWCBCTR = (&((&DWCBCTR_r)->Name)) ;
(*JWCBCTR) = IWCBCTR;
 /* line 916: */
 /* line 917: */
 /* line 919: */
FSCBCTR = A_UNITE(KWCBCTR,mode12,12,DWCBCTR_r);
} 
break;
case 6: 
 /* line 921: */
WXIACTR_assert(MWCBCTR, A68_FALSE) ;
FSCBCTR = A_EMPTY(NWCBCTR,26);
break;
case 7: 
 /* line 924: */
SXIACTR_terminalerror(600) ;
FSCBCTR = A_EMPTY(OWCBCTR,26);
break;
case 8: 
 /* line 925: */
if (KOOACTR_composition)
{ 
QWCBCTR = (&((&PWCBCTR_s)->Moduleno)) ;
(void)((*QWCBCTR) = A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
RWCBCTR = (&((&PWCBCTR_s)->I)) ;
(void)((*RWCBCTR) = A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
SWCBCTR = (&((&PWCBCTR_s)->J)) ;
(void)((*SWCBCTR) = A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
 /* line 926: */
FSCBCTR = A_UNITE(TWCBCTR,mode24,24,PWCBCTR_s);
} 
else
{ 
(void)(A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
VWCBCTR = (&((&UWCBCTR_c)->I)) ;
(void)((*VWCBCTR) = A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
(void)(A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
 /* line 927: */
 /* line 929: */
FSCBCTR = A_UNITE(WWCBCTR,mode16,16,UWCBCTR_c);
} 
break;
case 9: 
 /* line 931: */
SXIACTR_terminalerror(600) ;
FSCBCTR = A_EMPTY(XWCBCTR,26);
break;
case 10: 
{ 
ZWCBCTR = (&((&YWCBCTR_v)->Fn)) ;
(*ZWCBCTR) = LGAACTR_voidfn;
AXCBCTR = (&((&YWCBCTR_v)->Mode)) ;
(*AXCBCTR) = UEAACTR_voidmode;
 /* line 934: */
FSCBCTR = A_UNITE(BXCBCTR,mode10,10,YWCBCTR_v);
} 
break;
case 11: 
{ 
DXCBCTR = (&((&CXCBCTR_cl)->Body)) ;
(void)((*DXCBCTR) = A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
EXCBCTR = (&((&CXCBCTR_cl)->Moduleno)) ;
(void)((*EXCBCTR) = A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
 /* line 935: */
A_CLOSURE( GXCBCTR_generator, HXCBCTR_generator, IXCBCTR_generator );
A_CALLPROC(GXCBCTR_generator,(A68_FALSE, &LXCBCTR),(A68_FALSE, &LXCBCTR,(GXCBCTR_generator).nonlocals));
MXCBCTR = (&((&CXCBCTR_cl)->Actuals)) ;
(*MXCBCTR) = LXCBCTR;
(void)(POCBCTR_nexttype());
 /* line 936: */
OXCBCTR = (*(&((&CXCBCTR_cl)->Actuals))) ;
PXCBCTR = OXCBCTR.dim[0].upb - OXCBCTR.dim[0].lwb;
NXCBCTR_actual = OXCBCTR.data;
for (;PXCBCTR-- >= 0;
(NXCBCTR_actual += OXCBCTR.dim[0].stride
) )
{
(void)((*NXCBCTR_actual) = A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
}
 /* line 937: */
 /* line 938: */
 /* line 941: */
FSCBCTR = A_UNITE(QXCBCTR,mode23,23,CXCBCTR_cl);
} 
break;
case 12: 
{ 
SXCBCTR = (&((&RXCBCTR_x)->Moduleno)) ;
(void)((*SXCBCTR) = A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
 /* line 942: */
A_CLOSURE( UXCBCTR_generator, VXCBCTR_generator, WXCBCTR_generator );
A_CALLPROC(UXCBCTR_generator,(A68_FALSE, &ZXCBCTR),(A68_FALSE, &ZXCBCTR,(UXCBCTR_generator).nonlocals));
AYCBCTR = (&((&RXCBCTR_x)->Ysnames)) ;
(*AYCBCTR) = ZXCBCTR;
HOCBCTR_nextstring(  &BYCBCTR );
CYCBCTR = (&((&RXCBCTR_x)->Name)) ;
(*CYCBCTR) = BYCBCTR;
 /* line 943: */
HOCBCTR_nextstring(  &DYCBCTR );
EYCBCTR = (&((&RXCBCTR_x)->Uname)) ;
(*EYCBCTR) = DYCBCTR;
HOCBCTR_nextstring(  &FYCBCTR );
GYCBCTR = (&((&RXCBCTR_x)->Lname)) ;
(*GYCBCTR) = FYCBCTR;
 /* line 944: */
HOCBCTR_nextstring(  &HYCBCTR );
IYCBCTR = (&((&RXCBCTR_x)->Gname)) ;
(*IYCBCTR) = HYCBCTR;
 /* line 945: */
KYCBCTR = (*(&((&RXCBCTR_x)->Ysnames))) ;
LYCBCTR = KYCBCTR.dim[0].upb - KYCBCTR.dim[0].lwb;
JYCBCTR_ysname = KYCBCTR.data;
for (;LYCBCTR-- >= 0;
(JYCBCTR_ysname += KYCBCTR.dim[0].stride
) )
{
HOCBCTR_nextstring(  &MYCBCTR );
(*JYCBCTR_ysname) = MYCBCTR;
}
 /* line 946: */
 /* line 947: */
 /* line 948: */
 /* line 949: */
FSCBCTR = A_UNITE(NYCBCTR,mode25,25,RXCBCTR_x);
} 
break;
default: 
 /* line 950: */
 /* line 953: */
SXIACTR_terminalerror(601) ;
FSCBCTR = A_EMPTY(OYCBCTR,26);
break;
} 
break;
case 2: 
{ 
QYCBCTR = (&((&PYCBCTR_w)->W)) ;
(void)((*QYCBCTR) = (VRCBCTR_type-FCCBCTR_warnbase));
 /* line 956: */
FSCBCTR = A_UNITE(RYCBCTR,mode13,13,PYCBCTR_w);
} 
break;
case 3: 
{ 
TYCBCTR = (&((&SYCBCTR_i)->Type)) ;
(void)((*TYCBCTR) = (VRCBCTR_type-GCCBCTR_iddecbase));
 /* line 957: */
UYCBCTR = (&((&SYCBCTR_i)->Mode)) ;
(void)((*UYCBCTR) = A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
VYCBCTR = (&((&SYCBCTR_i)->Decno)) ;
(void)((*VYCBCTR) = A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
 /* line 958: */
HOCBCTR_nextstring(  &WYCBCTR );
XYCBCTR = (&((&SYCBCTR_i)->Name)) ;
(*XYCBCTR) = WYCBCTR;
 /* line 959: */
 /* line 960: */
 /* line 963: */
FSCBCTR = A_UNITE(YYCBCTR,mode11,11,SYCBCTR_i);
} 
break;
case 4: 
{ 
AZCBCTR = (&((&ZYCBCTR_s)->Fn)) ;
(void)((*AZCBCTR) = (VRCBCTR_type-HCCBCTR_starterbase));
 /* line 964: */
BZCBCTR = (&((&ZYCBCTR_s)->Mode)) ;
(void)((*BZCBCTR) = A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
CZCBCTR = (&((&ZYCBCTR_s)->Props)) ;
(void)((*CZCBCTR) = (A68_BITS )A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
 /* line 965: */
DZCBCTR = (&((&ZYCBCTR_s)->Resultmode)) ;
(void)((*DZCBCTR) = A_CALLPROC(FOCBCTR_next,(),((FOCBCTR_next).nonlocals)));
 /* line 966: */
 /* line 967: */
 /* line 968: */
FSCBCTR = A_UNITE(EZCBCTR,mode21,21,ZYCBCTR_s);
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
FZCBCTR_imperative = FSCBCTR;
 /* line 971: */
 /* line 972: */
 /* line 973: */
if (UMCBCTR_printstream)
{ 
JDXACTR_imperativemnemonic( FZCBCTR_imperative, &GZCBCTR );
HZCBCTR_string = GZCBCTR;
 /* line 975: */
 /* line 969: */
 /* line 976: */
if (HZCBCTR_string.upb<120)
{ 
 /* line 977: */
 /* line 978: */
(void)(A_CALLPROC(MSIACTR_list,(HZCBCTR_string),(HZCBCTR_string,(MSIACTR_list).nonlocals)));
} 
else
{ 
(void)(A_CALLPROC(MSIACTR_list,(A_VTRIM(IZCBCTR,(HZCBCTR_string),A_VTSCRIPT(&(IZCBCTR.upb),(HZCBCTR_string).upb,1,120))),(A_VTRIM(IZCBCTR,(HZCBCTR_string),A_VTSCRIPT(&(IZCBCTR.upb),(HZCBCTR_string).upb,1,120)),(MSIACTR_list).nonlocals)));
 /* line 979: */
 /* line 980: */
 /* line 981: */
(void)(A_CALLPROC(MSIACTR_list,(A_VC_PLUS(A_C_TIMES(' ',35),A_VTRIM(JZCBCTR,(HZCBCTR_string),A_VTSCRIPT(&(JZCBCTR.upb),(HZCBCTR_string).upb,121,(HZCBCTR_string).upb)))),(A_VC_PLUS(A_C_TIMES(' ',35),A_VTRIM(JZCBCTR,(HZCBCTR_string),A_VTSCRIPT(&(JZCBCTR.upb),(HZCBCTR_string).upb,121,(HZCBCTR_string).upb))),(MSIACTR_list).nonlocals)));
} 
} 
 /* line 982: */
 /* line 983: */
KZCBCTR = FZCBCTR_imperative;
} 
A_PROC_EXIT(nextstreamimperative);
*ReturnedValue = (KZCBCTR);
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
A68_156  HZBBCTR;  /* collateral clause result */
A68_275  JZBBCTR;  /* collateral clause result */
A68_VC  KZBBCTR;  /* OPERATORS - nil -> mode */
A68_276  PZBBCTR;  /* avoid structure result */
A68_280  TZBBCTR;  /* OPERATORS - istruct -> vector */
A68_280  UZBBCTR;  /* OPERATORS - trim index */
A68_279  VZBBCTR;  /* OPERATORS - trim index */
A68_279  ZZBBCTR;  /* OPERATORS - trim index */
A68_279  AACBCTR;  /* forall yield */
A68_INT  BACBCTR;  /* forall loop counter */
A68_276  GACBCTR;  /* avoid structure result */
A68_276 * HACBCTR;  /* YIELD */
A68_276  IACBCTR;  /* OPERATORS - simple index */
A68_INT * JACBCTR;  /* YIELD */
A68_INT  KACBCTR;  /* YIELD */
A68_VC  LACBCTR;  /* OPERATORS - istruct -> vector */
A68_281 * MACBCTR;  /* OPERATORS - istruct -> vector */
A68_VC * NACBCTR;  /* YIELD */
A68_VC * OACBCTR;  /* YIELD */
A68_279  QACBCTR;  /* OPERATORS - trim index */
A68_279  RACBCTR;  /* forall yield */
A68_INT  SACBCTR;  /* forall loop counter */
A68_INT  YACBCTR;  /* YIELD */
A68_282  ADCBCTR;  /* avoid structure result */
A68_181  WDCBCTR;  /* avoid structure result */
A68_284  XDCBCTR;  /* collateral clause result */
A68_181  YDCBCTR;  /* OPERATORS - trim index */
A68_181  ZDCBCTR;  /* OPERATORS - istruct to row */
A68_181  AECBCTR;  /* OPERATORS - trim index */
A68_181  BECBCTR;  /* OPERATORS - trim index */
A68_181  CECBCTR;  /* YIELD */
A68_181  DECBCTR;  /* OPERATORS - assign op */
A68_181  FECBCTR;  /* OPERATORS - trim index */
A68_181  GECBCTR;  /* forall yield */
A68_INT  HECBCTR;  /* forall loop counter */
A68_182  IECBCTR;  /* collateral clause result */
A68_182  JECBCTR;  /* collateral clause result */
A68_INT  KECBCTR;  /* YIELD */
A68_182 * LECBCTR;  /* YIELD */
A68_BOOL  MECBCTR;  /* clause result */
A68_182  NECBCTR;  /* collateral clause result */
A68_INT  OECBCTR;  /* YIELD */
A68_182 * PECBCTR;  /* YIELD */
A68_BOOL  QECBCTR;  /* clause result */
A68_BOOL  RECBCTR;  /* clause result */
A68_INT  TECBCTR;  /* to part of loop */
A68_182  UECBCTR;  /* collateral clause result */
A68_182 * VECBCTR;  /* YIELD */
A68_182  WECBCTR;  /* collateral clause result */
A68_INT  XECBCTR;  /* YIELD */
A68_182 * YECBCTR;  /* YIELD */
A68_180  HMCBCTR;  /* clause result */
A68_180  IMCBCTR;  /* procedure value */
A68_180  JMCBCTR;  /* procedure value */
A68_174  KMCBCTR;  /* procedure value */
A68_175  LMCBCTR;  /* procedure value */
A68_176  MMCBCTR;  /* procedure value */
A68_177  NMCBCTR;  /* procedure value */
A68_178  OMCBCTR;  /* procedure value */
A68_179  PMCBCTR;  /* procedure value */
A68_VC  SMCBCTR;  /* OPERATORS - istruct -> vector */
A68_BOOL  TMCBCTR;  /* clause result */
A68_INT  YMCBCTR;  /* forall loop counter */
A68_VC  ZMCBCTR;  /* OPERATORS - nil -> mode */
A68_VC  ANCBCTR;  /* != */
A68_VC  BNCBCTR;  /* != */
A68_VC  GNCBCTR;  /* OPERATORS - trim index */
A68_VC  HNCBCTR;  /* OPERATORS - trim index */
A68_VC * INCBCTR;  /* YIELD */
A68_INT  LNCBCTR;  /* forall loop counter */
A68_VC  NNCBCTR;  /* avoid structure result */
A68_VC  PNCBCTR;  /* avoid structure result */
A68_INT  QNCBCTR;  /* YIELD */
A68_86  GOCBCTR;  /* procedure value */
A68_184  LZCBCTR;  /* procedure value */
A68_305  MZCBCTR;  /* collateral clause result */
A68_212  PZCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  QZCBCTR;  /* YIELD */
A68_212  RZCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_211  SZCBCTR;  /* OPERATORS - istruct -> vector */
A68_301  TZCBCTR;  /* collateral clause result */
A68_212  WZCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  XZCBCTR;  /* YIELD */
A68_212  YZCBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_212  BADBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  CADBCTR;  /* YIELD */
A68_212  DADBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_211  EADBCTR;  /* OPERATORS - istruct -> vector */
A68_212  FADBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_211  GADBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_212  HADBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_211  IADBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_212  JADBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  KADBCTR;  /* YIELD */
A68_211  LADBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_212  MADBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_211  NADBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_212  OADBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  PADBCTR;  /* YIELD */
A68_211  QADBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  SADBCTR;  /* to part of loop */
A68_212  TADBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  UADBCTR;  /* YIELD */
A68_211  VADBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_212  WADBCTR = {0};  /* OPERATORS - mode -> union mode */
A68_INT  XADBCTR;  /* YIELD */
A68_211  YADBCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_GC_STARTUP(argc);
BAAALIB();   /* USE a68config */
RHMACTR();   /* USE uniquenameserver */
BCHACTR();   /* USE moduletracer */
ANOACTR();   /* USE modules */
DNMACTR();   /* USE modes */
HZWACTR();   /* USE mnemonics */
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
CEBBCTR();   /* USE compiler */
ZJAACTR();   /* USE rscompiler */
THAACTR();   /* USE centities */
CSCAOSF();   /* USE osif */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc.a68";
A_config.translation_time = "Thu Nov  5 21:38:58 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "CZBBCTR (from seed file) ";
A_config.spec_change_time = "no spec";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
#ifdef A_prelude
A_prelude(argc,argv,envp);
#endif
A_PROC_ENTRY(MAIN);
{ 
(void)(UEAALIB_a68config(LGAALIB_configinfo, GZBBCTR));
 /* line 53: */
HZBBCTR.Norden = 0;
HZBBCTR.Nomodes = 0;
HZBBCTR.Nolabs = 0;
HZBBCTR.Nodecnos = HAAACTR_minidno;
HZBBCTR.Nomodules = 0;
HZBBCTR.Nolibinds = 0;
IZBBCTR_xsizes = HZBBCTR;
 /* line 60: */
 /* line 65: */
 /* line 67: */
JZBBCTR.Streambuffer = A_VVAC(KZBBCTR);
JZBBCTR.Streamptr = 0;
MZBBCTR_generator( A68_FALSE, &PZBBCTR );
JZBBCTR.Buffers = PZBBCTR;
JZBBCTR.Currentbuffer = 0;
QZBBCTR_unsetstream = JZBBCTR;
 /* line 69: */
 /* line 70: */
UZBBCTR = A_ISVEC(TZBBCTR,(&RZBBCTR_streams_area),20,A68_275 ) ;
SZBBCTR_streams = A_VTRIM(VZBBCTR,(UZBBCTR),A_VRTSCRIPT(&(VZBBCTR.dim[0]),(UZBBCTR).upb,1,(UZBBCTR).upb,0));
 /* line 72: */
 /* line 74: */
 /* line 76: */
 /* line 77: */
AACBCTR = A_R1TRIM(ZZBBCTR,(SZBBCTR_streams),A_RTSCRIPT(&(ZZBBCTR.dim[0]),&((SZBBCTR_streams).dim[0]),(SZBBCTR_streams).dim[0].lwb,XZBBCTR_fixedstreams,1)) ;
BACBCTR = AACBCTR.dim[0].upb - AACBCTR.dim[0].lwb;
YZBBCTR_stream = AACBCTR.data;
for (;BACBCTR-- >= 0;
(YZBBCTR_stream += AACBCTR.dim[0].stride
) )
{
 /* line 78: */
 /* line 79: */
 /* line 82: */
DACBCTR_generator( A68_FALSE, &GACBCTR );
HACBCTR = (&(YZBBCTR_stream->Buffers)) ;
IACBCTR = (*HACBCTR) = GACBCTR ;
JACBCTR = (&(YZBBCTR_stream->Currentbuffer)) ;
KACBCTR = (*JACBCTR) = 1 ;
MACBCTR = A_LOC(A68_281 ) ;
NACBCTR = (&A_VINDEX(IACBCTR,KACBCTR)) ;
OACBCTR = (&(YZBBCTR_stream->Streambuffer)) ;
(void)((*OACBCTR) = (*NACBCTR) = A_ISVEC(LACBCTR,MACBCTR,11,A68_CHAR ));
}
 /* line 84: */
RACBCTR = A_R1TRIM(QACBCTR,(SZBBCTR_streams),A_RTSCRIPT(&(QACBCTR.dim[0]),&((SZBBCTR_streams).dim[0]),(XZBBCTR_fixedstreams+1),(SZBBCTR_streams).dim[0].upb,1)) ;
SACBCTR = RACBCTR.dim[0].upb - RACBCTR.dim[0].lwb;
PACBCTR_stream = RACBCTR.data;
for (;SACBCTR-- >= 0;
(PACBCTR_stream += RACBCTR.dim[0].stride
) )
{
(*PACBCTR_stream) = QZBBCTR_unsetstream;
}
 /* line 85: */
WZBBCTR_current = QZBBCTR_unsetstream;
 /* line 87: */
TACBCTR_streambuffer = (&((&WZBBCTR_current)->Streambuffer));
 /* line 88: */
UACBCTR_strptr = (&((&WZBBCTR_current)->Streamptr));
 /* line 89: */
VACBCTR_currentbuffer = (&((&WZBBCTR_current)->Currentbuffer));
 /* line 90: */
WACBCTR_buffers = (&((&WZBBCTR_current)->Buffers));
 /* line 92: */
YACBCTR = 0 ;
XACBCTR_curstradd = (&A_R1INDEX(SZBBCTR_streams,YACBCTR));
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
RCCBCTR_inputfile = QVBAOSF_open_file(XQIACTR_sourcefilename, ATBAOSF_read_access, RIBAOSF_ignore_msg);
 /* line 147: */
if (RCCBCTR_inputfile==(A68_59 *)A68_NIL)
{ 
(void)(SXIACTR_terminalerror(250));
} 
 /* line 149: */
SCCBCTR_line_start = 1;
 /* line 150: */
TCCBCTR_line_length = 0;
 /* line 152: */
UCCBCTR_line_pending = A68_FALSE;
 /* line 154: */
XRIACTR_linenumber = 0;
 /* line 156: */
WCCBCTR_generator( A68_TRUE, &ADCBCTR );
ZCCBCTR_flexinputline = ADCBCTR;
 /* line 158: */
 /* line 212: */
SDCBCTR_generator( A68_TRUE, &WDCBCTR );
VDCBCTR_charset = WDCBCTR;
 /* line 213: */
 /* line 215: */
XDCBCTR.data[0].Type = 2;
XDCBCTR.data[0].Value = 37;
XDCBCTR.data[1].Type = 1;
XDCBCTR.data[1].Value = 100;
XDCBCTR.data[2].Type = 1;
XDCBCTR.data[2].Value = 100;
XDCBCTR.data[3].Type = 1;
XDCBCTR.data[3].Value = 100;
XDCBCTR.data[4].Type = 1;
XDCBCTR.data[4].Value = 100;
XDCBCTR.data[5].Type = 1;
XDCBCTR.data[5].Value = 100;
XDCBCTR.data[6].Type = 1;
XDCBCTR.data[6].Value = 100;
XDCBCTR.data[7].Type = 1;
 /* line 216: */
XDCBCTR.data[7].Value = 100;
XDCBCTR.data[8].Type = 1;
XDCBCTR.data[8].Value = 100;
XDCBCTR.data[9].Type = 2;
XDCBCTR.data[9].Value = 37;
XDCBCTR.data[10].Type = 2;
XDCBCTR.data[10].Value = 37;
XDCBCTR.data[11].Type = 2;
XDCBCTR.data[11].Value = 37;
XDCBCTR.data[12].Type = 2;
XDCBCTR.data[12].Value = 37;
XDCBCTR.data[13].Type = 1;
XDCBCTR.data[13].Value = 100;
XDCBCTR.data[14].Type = 1;
XDCBCTR.data[14].Value = 100;
XDCBCTR.data[15].Type = 1;
 /* line 217: */
XDCBCTR.data[15].Value = 100;
XDCBCTR.data[16].Type = 1;
XDCBCTR.data[16].Value = 100;
XDCBCTR.data[17].Type = 1;
XDCBCTR.data[17].Value = 100;
XDCBCTR.data[18].Type = 1;
XDCBCTR.data[18].Value = 100;
XDCBCTR.data[19].Type = 1;
XDCBCTR.data[19].Value = 100;
XDCBCTR.data[20].Type = 1;
XDCBCTR.data[20].Value = 100;
XDCBCTR.data[21].Type = 1;
XDCBCTR.data[21].Value = 100;
XDCBCTR.data[22].Type = 1;
XDCBCTR.data[22].Value = 100;
XDCBCTR.data[23].Type = 1;
 /* line 218: */
XDCBCTR.data[23].Value = 100;
XDCBCTR.data[24].Type = 1;
XDCBCTR.data[24].Value = 100;
XDCBCTR.data[25].Type = 1;
XDCBCTR.data[25].Value = 100;
XDCBCTR.data[26].Type = 1;
XDCBCTR.data[26].Value = 100;
XDCBCTR.data[27].Type = 1;
XDCBCTR.data[27].Value = 100;
XDCBCTR.data[28].Type = 1;
XDCBCTR.data[28].Value = 100;
XDCBCTR.data[29].Type = 1;
XDCBCTR.data[29].Value = 100;
XDCBCTR.data[30].Type = 1;
XDCBCTR.data[30].Value = 100;
XDCBCTR.data[31].Type = 1;
 /* line 219: */
XDCBCTR.data[31].Value = 100;
XDCBCTR.data[32].Type = 2;
XDCBCTR.data[32].Value = 37;
XDCBCTR.data[33].Type = 20;
XDCBCTR.data[33].Value = 45;
XDCBCTR.data[34].Type = 5;
XDCBCTR.data[34].Value = 100;
XDCBCTR.data[35].Type = 20;
XDCBCTR.data[35].Value = 62;
XDCBCTR.data[36].Type = 20;
XDCBCTR.data[36].Value = 160;
XDCBCTR.data[37].Type = 21;
XDCBCTR.data[37].Value = 214;
XDCBCTR.data[38].Type = 21;
XDCBCTR.data[38].Value = 229;
XDCBCTR.data[39].Type = 1;
 /* line 220: */
XDCBCTR.data[39].Value = 100;
XDCBCTR.data[40].Type = 20;
XDCBCTR.data[40].Value = 50;
XDCBCTR.data[41].Type = 20;
XDCBCTR.data[41].Value = 54;
XDCBCTR.data[42].Type = 22;
XDCBCTR.data[42].Value = 212;
XDCBCTR.data[43].Type = 21;
XDCBCTR.data[43].Value = 200;
XDCBCTR.data[44].Type = 20;
XDCBCTR.data[44].Value = 128;
XDCBCTR.data[45].Type = 21;
XDCBCTR.data[45].Value = 201;
XDCBCTR.data[46].Type = 20;
XDCBCTR.data[46].Value = 130;
XDCBCTR.data[47].Type = 22;
 /* line 221: */
XDCBCTR.data[47].Value = 213;
XDCBCTR.data[48].Type = 4;
XDCBCTR.data[48].Value = 0;
XDCBCTR.data[49].Type = 4;
XDCBCTR.data[49].Value = 1;
XDCBCTR.data[50].Type = 4;
XDCBCTR.data[50].Value = 2;
XDCBCTR.data[51].Type = 4;
XDCBCTR.data[51].Value = 3;
XDCBCTR.data[52].Type = 4;
XDCBCTR.data[52].Value = 4;
XDCBCTR.data[53].Type = 4;
XDCBCTR.data[53].Value = 5;
XDCBCTR.data[54].Type = 4;
XDCBCTR.data[54].Value = 6;
XDCBCTR.data[55].Type = 4;
 /* line 222: */
XDCBCTR.data[55].Value = 7;
XDCBCTR.data[56].Type = 4;
XDCBCTR.data[56].Value = 8;
XDCBCTR.data[57].Type = 4;
XDCBCTR.data[57].Value = 9;
XDCBCTR.data[58].Type = 22;
XDCBCTR.data[58].Value = 84;
XDCBCTR.data[59].Type = 20;
XDCBCTR.data[59].Value = 111;
XDCBCTR.data[60].Type = 22;
XDCBCTR.data[60].Value = 206;
XDCBCTR.data[61].Type = 22;
XDCBCTR.data[61].Value = 210;
XDCBCTR.data[62].Type = 22;
XDCBCTR.data[62].Value = 207;
XDCBCTR.data[63].Type = 21;
 /* line 223: */
XDCBCTR.data[63].Value = 217;
XDCBCTR.data[64].Type = 20;
XDCBCTR.data[64].Value = 154;
XDCBCTR.data[65].Type = 6;
XDCBCTR.data[65].Value = (-98);
XDCBCTR.data[66].Type = 6;
XDCBCTR.data[66].Value = (-99);
XDCBCTR.data[67].Type = 6;
XDCBCTR.data[67].Value = (-100);
XDCBCTR.data[68].Type = 6;
XDCBCTR.data[68].Value = (-101);
XDCBCTR.data[69].Type = 6;
XDCBCTR.data[69].Value = (-102);
XDCBCTR.data[70].Type = 6;
XDCBCTR.data[70].Value = (-103);
XDCBCTR.data[71].Type = 6;
 /* line 224: */
XDCBCTR.data[71].Value = (-104);
XDCBCTR.data[72].Type = 6;
XDCBCTR.data[72].Value = (-105);
XDCBCTR.data[73].Type = 6;
XDCBCTR.data[73].Value = (-106);
XDCBCTR.data[74].Type = 6;
XDCBCTR.data[74].Value = (-107);
XDCBCTR.data[75].Type = 6;
XDCBCTR.data[75].Value = (-108);
XDCBCTR.data[76].Type = 6;
XDCBCTR.data[76].Value = (-109);
XDCBCTR.data[77].Type = 6;
XDCBCTR.data[77].Value = (-110);
XDCBCTR.data[78].Type = 6;
XDCBCTR.data[78].Value = (-111);
XDCBCTR.data[79].Type = 6;
 /* line 225: */
XDCBCTR.data[79].Value = (-112);
XDCBCTR.data[80].Type = 6;
XDCBCTR.data[80].Value = (-113);
XDCBCTR.data[81].Type = 6;
XDCBCTR.data[81].Value = (-114);
XDCBCTR.data[82].Type = 6;
XDCBCTR.data[82].Value = (-115);
XDCBCTR.data[83].Type = 6;
XDCBCTR.data[83].Value = (-116);
XDCBCTR.data[84].Type = 6;
XDCBCTR.data[84].Value = (-117);
XDCBCTR.data[85].Type = 6;
XDCBCTR.data[85].Value = (-118);
XDCBCTR.data[86].Type = 6;
XDCBCTR.data[86].Value = (-119);
XDCBCTR.data[87].Type = 6;
 /* line 226: */
XDCBCTR.data[87].Value = (-120);
XDCBCTR.data[88].Type = 6;
XDCBCTR.data[88].Value = (-121);
XDCBCTR.data[89].Type = 6;
XDCBCTR.data[89].Value = (-122);
XDCBCTR.data[90].Type = 6;
XDCBCTR.data[90].Value = (-123);
XDCBCTR.data[91].Type = 20;
XDCBCTR.data[91].Value = 159;
XDCBCTR.data[92].Type = 20;
XDCBCTR.data[92].Value = 175;
XDCBCTR.data[93].Type = 20;
XDCBCTR.data[93].Value = 161;
XDCBCTR.data[94].Type = 20;
XDCBCTR.data[94].Value = 233;
XDCBCTR.data[95].Type = 3;
 /* line 227: */
XDCBCTR.data[95].Value = 36;
XDCBCTR.data[96].Type = 1;
XDCBCTR.data[96].Value = 100;
XDCBCTR.data[97].Type = 3;
XDCBCTR.data[97].Value = 10;
XDCBCTR.data[98].Type = 3;
XDCBCTR.data[98].Value = 11;
XDCBCTR.data[99].Type = 3;
XDCBCTR.data[99].Value = 12;
XDCBCTR.data[100].Type = 3;
XDCBCTR.data[100].Value = 13;
XDCBCTR.data[101].Type = 3;
XDCBCTR.data[101].Value = 14;
XDCBCTR.data[102].Type = 3;
XDCBCTR.data[102].Value = 15;
XDCBCTR.data[103].Type = 3;
 /* line 228: */
XDCBCTR.data[103].Value = 16;
XDCBCTR.data[104].Type = 3;
XDCBCTR.data[104].Value = 17;
XDCBCTR.data[105].Type = 3;
XDCBCTR.data[105].Value = 18;
XDCBCTR.data[106].Type = 3;
XDCBCTR.data[106].Value = 19;
XDCBCTR.data[107].Type = 3;
XDCBCTR.data[107].Value = 20;
XDCBCTR.data[108].Type = 3;
XDCBCTR.data[108].Value = 21;
XDCBCTR.data[109].Type = 3;
XDCBCTR.data[109].Value = 22;
XDCBCTR.data[110].Type = 3;
XDCBCTR.data[110].Value = 23;
XDCBCTR.data[111].Type = 3;
 /* line 229: */
XDCBCTR.data[111].Value = 24;
XDCBCTR.data[112].Type = 3;
XDCBCTR.data[112].Value = 25;
XDCBCTR.data[113].Type = 3;
XDCBCTR.data[113].Value = 26;
XDCBCTR.data[114].Type = 3;
XDCBCTR.data[114].Value = 27;
XDCBCTR.data[115].Type = 3;
XDCBCTR.data[115].Value = 28;
XDCBCTR.data[116].Type = 3;
XDCBCTR.data[116].Value = 29;
XDCBCTR.data[117].Type = 3;
XDCBCTR.data[117].Value = 30;
XDCBCTR.data[118].Type = 3;
XDCBCTR.data[118].Value = 31;
XDCBCTR.data[119].Type = 3;
 /* line 230: */
XDCBCTR.data[119].Value = 32;
XDCBCTR.data[120].Type = 3;
XDCBCTR.data[120].Value = 33;
XDCBCTR.data[121].Type = 3;
XDCBCTR.data[121].Value = 34;
XDCBCTR.data[122].Type = 3;
XDCBCTR.data[122].Value = 35;
XDCBCTR.data[123].Type = 20;
XDCBCTR.data[123].Value = 67;
XDCBCTR.data[124].Type = 20;
XDCBCTR.data[124].Value = 45;
XDCBCTR.data[125].Type = 20;
XDCBCTR.data[125].Value = 68;
XDCBCTR.data[126].Type = 1;
XDCBCTR.data[126].Value = 100;
XDCBCTR.data[127].Type = 1;
XDCBCTR.data[127].Value = 100;
AECBCTR = A_HIS1ARR(ZDCBCTR,XDCBCTR,A68_182 ,128) ;
CECBCTR = A_R1TRIM(YDCBCTR,(VDCBCTR_charset),A_RTSCRIPT(&(YDCBCTR.dim[0]),&((VDCBCTR_charset).dim[0]),(VDCBCTR_charset).dim[0].lwb,127,0)) ;
DECBCTR = A_R1TRIM(BECBCTR,(AECBCTR),A_RTSCRIPT(&(BECBCTR.dim[0]),&((AECBCTR).dim[0]),(AECBCTR).dim[0].lwb,(AECBCTR).dim[0].upb,0)) ;
(void)(A_R1ASSIGN2(DECBCTR,CECBCTR,A68_182 ));
 /* line 232: */
 /* line 233: */
GECBCTR = A_R1TRIM(FECBCTR,(VDCBCTR_charset),A_RTSCRIPT(&(FECBCTR.dim[0]),&((VDCBCTR_charset).dim[0]),128,(VDCBCTR_charset).dim[0].upb,1)) ;
HECBCTR = GECBCTR.dim[0].upb - GECBCTR.dim[0].lwb;
EECBCTR_c = GECBCTR.data;
for (;HECBCTR-- >= 0;
(EECBCTR_c += GECBCTR.dim[0].stride
) )
{
 /* line 234: */
IECBCTR.Type = 1;
 /* line 235: */
IECBCTR.Value = 100;
(*EECBCTR_c) = IECBCTR;
}
 /* line 237: */
if (CQIACTR_dotoption)
{ 
JECBCTR.Type = 7;
JECBCTR.Value = 130;
KECBCTR = (A68_INT)(unsigned char)'.' ;
LECBCTR = (&A_R1INDEX(VDCBCTR_charset,KECBCTR)) ;
(*LECBCTR) = JECBCTR;
MECBCTR = A68_TRUE;
} 
else
{ 
MECBCTR = A68_FALSE;
} 
if (DQIACTR_quoteoption)
{ 
NECBCTR.Type = 8;
NECBCTR.Value = 100;
OECBCTR = (A68_INT)(unsigned char)'\'' ;
PECBCTR = (&A_R1INDEX(VDCBCTR_charset,OECBCTR)) ;
(*PECBCTR) = NECBCTR;
QECBCTR = A68_TRUE;
} 
else
{ 
QECBCTR = A68_FALSE;
} 
 /* line 238: */
RECBCTR = (MECBCTR|QECBCTR);
if (RECBCTR)
{ 
TECBCTR = (A68_INT)(unsigned char)'Z';
for ( SECBCTR_i = (A68_INT)(unsigned char)'A';
SECBCTR_i <= TECBCTR;
SECBCTR_i += 1 )
{ 
 /* line 239: */
UECBCTR.Type = 1;
UECBCTR.Value = 100;
VECBCTR = (&A_R1INDEX(VDCBCTR_charset,SECBCTR_i)) ;
(*VECBCTR) = UECBCTR;
}
 /* line 240: */
} 
 /* line 241: */
if (FQIACTR_tildeoption)
{ 
WECBCTR.Type = 3;
WECBCTR.Value = 36;
XECBCTR = (A68_INT)(unsigned char)'~' ;
YECBCTR = (&A_R1INDEX(VDCBCTR_charset,XECBCTR)) ;
(*YECBCTR) = WECBCTR;
} 
 /* line 250: */
BFCBCTR_contval = AFCBCTR;
 /* line 252: */
CFCBCTR_upped = A68_FALSE;
 /* line 254: */
 /* line 255: */
EFCBCTR_xtmodulepending = A68_FALSE;
 /* line 257: */
FFCBCTR_timeschecked = A68_FALSE;
 /* line 259: */
 /* line 262: */
 /* line 568: */
(void)(NULACTR_initcoutput(YQIACTR_basenamesourcefile));
 /* line 571: */
 /* line 572: */
if (IQIACTR_optbooloption)
{ 
IMCBCTR.fn.fn_global = HPKACTR_optboollookup;
IMCBCTR.nonlocals = A68_NIL;
HMCBCTR = IMCBCTR;
} 
else
{ 
JMCBCTR.fn.fn_global = SOKACTR_lookup;
JMCBCTR.nonlocals = A68_NIL;
HMCBCTR = JMCBCTR;
} 
KMCBCTR.fn.fn_global = DDCBCTR_input;
KMCBCTR.nonlocals = A68_NIL;
LMCBCTR.fn.fn_global = JFCBCTR_output;
LMCBCTR.nonlocals = A68_NIL;
MMCBCTR.fn.fn_global = EXIACTR_fault;
MMCBCTR.nonlocals = A68_NIL;
NMCBCTR.fn.fn_global = KDHACTR_message;
NMCBCTR.nonlocals = A68_NIL;
OMCBCTR.fn.fn_global = NBPACTR_givemoduledetails;
OMCBCTR.nonlocals = A68_NIL;
PMCBCTR.fn.fn_global = SOOACTR_givespec;
PMCBCTR.nonlocals = A68_NIL;
(void)(URAACTR_compile(KMCBCTR, LMCBCTR, MMCBCTR, NMCBCTR, OMCBCTR, PMCBCTR, HMCBCTR, VDCBCTR_charset));
 /* line 574: */
 /* line 575: */
{ 
 /* line 576: */
 /* line 577: */
 /* line 578: */
(void)(DDCBCTR_input(A_ISVEC(SMCBCTR,(&QMCBCTR_wasteline),160,A68_CHAR ), (&RMCBCTR_wastesize)));
} 
 /* line 580: */
(void)(IWBAOSF_close_file(RCCBCTR_inputfile, RIBAOSF_ignore_msg));
 /* line 582: */
 /* line 583: */
 /* line 584: */
 /* line 588: */
TMCBCTR = (DSIACTR_greatestseverity<=2);
} 
if (TMCBCTR)
{ 
XRIACTR_linenumber = 1;
 /* line 590: */
UMCBCTR_printstream = GQIACTR_streamoption;
 /* line 596: */
(*XACBCTR_curstradd) = WZBBCTR_current;
 /* line 598: */
VMCBCTR_level = 0;
 /* line 599: */
WMCBCTR_s = 0;
 /* line 601: */
 /* line 602: */
YMCBCTR = SZBBCTR_streams.dim[0].upb - SZBBCTR_streams.dim[0].lwb;
XMCBCTR_stream = SZBBCTR_streams.data;
for (;YMCBCTR-- >= 0;
(XMCBCTR_stream += SZBBCTR_streams.dim[0].stride
) )
{
 /* line 603: */
 /* line 604: */
ANCBCTR = A_VVAC(ZMCBCTR) ;
BNCBCTR = (*(&(XMCBCTR_stream->Streambuffer))) ;
if ( !(! A_VSTRUCTCOMP(BNCBCTR,ANCBCTR)) ) break;
CNCBCTR_streamptr = (&(XMCBCTR_stream->Streamptr));
 /* line 605: */
DNCBCTR_currentbuffer = (&(XMCBCTR_stream->Currentbuffer));
 /* line 606: */
ENCBCTR_streambuffer = (&(XMCBCTR_stream->Streambuffer));
 /* line 607: */
FNCBCTR_buffers = (&(XMCBCTR_stream->Buffers));
 /* line 609: */
GNCBCTR = (*(&A_VINDEX((*FNCBCTR_buffers),(*DNCBCTR_currentbuffer)))) ;
INCBCTR = (&A_VINDEX((*FNCBCTR_buffers),(*DNCBCTR_currentbuffer))) ;
(void)((*INCBCTR) = A_VTRIM(HNCBCTR,(GNCBCTR),A_VTSCRIPT(&(HNCBCTR.upb),(GNCBCTR).upb,1,(*CNCBCTR_streamptr))));
 /* line 611: */
 /* line 612: */
 /* line 613: */
if (UMCBCTR_printstream)
{ 
JNCBCTR_bytesused = 0;
 /* line 614: */
LNCBCTR = (*FNCBCTR_buffers).upb -1;
KNCBCTR_b = (*FNCBCTR_buffers).data;
for (;LNCBCTR-- >= 0;
(KNCBCTR_b++
) )
{
JNCBCTR_bytesused+=(*KNCBCTR_b).upb;
}
 /* line 615: */
 /* line 616: */
 /* line 617: */
ROAAOSF_whole( JNCBCTR_bytesused, (-7), &NNCBCTR );
ROAAOSF_whole( WMCBCTR_s, 0, &PNCBCTR );
(void)(A_CALLPROC(MSIACTR_list,(A_VC_PLUS(A_VC_PLUS(NNCBCTR,ONCBCTR),PNCBCTR)),(A_VC_PLUS(A_VC_PLUS(NNCBCTR,ONCBCTR),PNCBCTR),(MSIACTR_list).nonlocals)));
} 
 /* line 618: */
QNCBCTR = (*DNCBCTR_currentbuffer) = 1 ;
(void)((*ENCBCTR_streambuffer) = (*(&A_VINDEX((*FNCBCTR_buffers),QNCBCTR))));
 /* line 619: */
(*CNCBCTR_streamptr) = 0;
 /* line 620: */
 /* line 621: */
WMCBCTR_s+=1;
}
 /* line 623: */
(void)(WZBBCTR_current = (*(&A_R1INDEX(SZBBCTR_streams,VMCBCTR_level))));
 /* line 625: */
 /* line 629: */
 /* line 633: */
 /* line 634: */
 /* line 646: */
 /* line 649: */
 /* line 651: */
 /* line 652: */
 /* line 659: */
GOCBCTR.fn.fn_global = ZNCBCTR_nextint;
GOCBCTR.nonlocals = A68_NIL;
FOCBCTR_next = (GOCBCTR);
 /* line 661: */
 /* line 662: */
 /* line 663: */
 /* line 670: */
LOCBCTR_line_start = 0;
 /* line 671: */
MOCBCTR_line_length = 0;
 /* line 672: */
NOCBCTR_statement_number = 0;
 /* line 674: */
OOCBCTR_hundred_counter = (-1);
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
LZCBCTR.fn.fn_global = URCBCTR_nextstreamimperative;
LZCBCTR.nonlocals = A68_NIL;
(void)(KEBBCTR_translator(LZCBCTR, (&IZBBCTR_xsizes), ICPACTR_keptdecnos));
} 
 /* line 992: */
 /* line 993: */
 /* line 996: */
if (DSIACTR_greatestseverity<=2)
{ 
(void)(GKMACTR_write_cfile_uname((*(&((&IYIACTR_config_info)->Nameseed)))));
 /* line 1000: */
QZCBCTR = OZCBCTR ;
MZCBCTR.data[0] = A_UNITE(PZCBCTR,mode2,2,QZCBCTR);
MZCBCTR.data[1] = A_UNITE(RZCBCTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(SZCBCTR,MZCBCTR,2,A68_212 ), ESLACTR_preamblestream));
 /* line 1003: */
(void)(VSPACTR_declareusedids());
 /* line 1033: */
XZCBCTR = VZCBCTR ;
TZCBCTR.data[0] = A_UNITE(WZCBCTR,mode2,2,XZCBCTR);
 /* line 1034: */
TZCBCTR.data[1] = A_UNITE(YZCBCTR,mode2,2,XQIACTR_sourcefilename);
CADBCTR = AADBCTR ;
TZCBCTR.data[2] = A_UNITE(BADBCTR,mode2,2,CADBCTR);
TZCBCTR.data[3] = A_UNITE(DADBCTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(EADBCTR,TZCBCTR,4,A68_212 ), NSLACTR_codestream(0)));
 /* line 1036: */
(void)(MDMACTR_writecstream(A_HVEC(GADBCTR,A_UNITE(FADBCTR,mode3,3,FSLACTR_modesstream),A68_212 ), ESLACTR_preamblestream));
 /* line 1037: */
(void)(MDMACTR_writecstream(A_HVEC(IADBCTR,A_UNITE(HADBCTR,mode3,3,GSLACTR_importsstream),A68_212 ), FSLACTR_modesstream));
 /* line 1038: */
KADBCTR = KSLACTR_nonlocdecstream(0) ;
(void)(MDMACTR_writecstream(A_HVEC(LADBCTR,A_UNITE(JADBCTR,mode3,3,KADBCTR),A68_212 ), GSLACTR_importsstream));
 /* line 1039: */
(void)(MDMACTR_writecstream(A_HVEC(NADBCTR,A_UNITE(MADBCTR,mode3,3,HSLACTR_externstream),A68_212 ), KSLACTR_nonlocdecstream(PPLACTR_highestlevel)));
 /* line 1040: */
PADBCTR = NSLACTR_codestream(PPLACTR_highestlevel) ;
(void)(MDMACTR_writecstream(A_HVEC(QADBCTR,A_UNITE(OADBCTR,mode3,3,PADBCTR),A68_212 ), HSLACTR_externstream));
 /* line 1042: */
 /* line 1043: */
 /* line 1044: */
if (PPLACTR_highestlevel>0)
{ 
 /* line 1045: */
SADBCTR = (PPLACTR_highestlevel-1);
for ( RADBCTR_level = 0;
RADBCTR_level <= SADBCTR;
RADBCTR_level += 1 )
{ 
 /* line 1046: */
UADBCTR = KSLACTR_nonlocdecstream((RADBCTR_level+1)) ;
(void)(MDMACTR_writecstream(A_HVEC(VADBCTR,A_UNITE(TADBCTR,mode3,3,UADBCTR),A68_212 ), KSLACTR_nonlocdecstream(RADBCTR_level)));
 /* line 1047: */
 /* line 1048: */
XADBCTR = NSLACTR_codestream(RADBCTR_level) ;
(void)(MDMACTR_writecstream(A_HVEC(YADBCTR,A_UNITE(WADBCTR,mode3,3,XADBCTR),A68_212 ), NSLACTR_codestream((RADBCTR_level+1))));
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
