/* UNAME:RYZACTR */
#include <algol68/Asupport.h>
struct A68t32 ;
struct A68t33 ;

A_PROCEDURE(A68_VOID ,A68t31,(struct A68t32 ,struct A68t33 ),(struct A68t32 ,struct A68t33 ,void *));
typedef struct A68t31  A68_31 ;    /* PROC(MODE32,MODE33) VOID */
struct A68t32{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t34 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t32  A68_32 ;    /* STRUCT(INT,REF MODE34,BITS)  */
A_VECTOR(A68_VC ,A68t33);
typedef struct A68t33  A68_33 ;    /* VECTOR [] MODE26 */
A_VECTOR(struct A68t36 ,A68t35);
typedef struct A68t35  A68_35 ;    /* VECTOR [] MODE36 */
struct A68t36{
struct A68t32  Msgno;
A68_VC  Text;
};
typedef struct A68t36  A68_36 ;    /* STRUCT(MODE32,REF MODE26)  */
struct A68t34{
A68_VC  Name;
struct A68t35  Messages;
};
typedef struct A68t34  A68_34 ;    /* STRUCT(REF MODE26,REF MODE35)  */
struct A68t37{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t37  A68_37 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t38{
A68_INT  Status;
A_PAD_INT(PAD_3)
};
typedef struct A68t38  A68_38 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_BOOL ,A68t39,(struct A68t38 ,struct A68t38 ),(struct A68t38 ,struct A68t38 ,void *));
typedef struct A68t39  A68_39 ;    /* PROC(MODE38,MODE38) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t41);
typedef struct A68t41  A68_41 ;    /* STRUCT 4 CHAR */
struct A68t40{
struct A68t41  Access;
A_PAD_ISTRUCT(A68_41 ,PAD_4)
};
typedef struct A68t40  A68_40 ;    /* STRUCT(MODE41)  */

A_PROCEDURE(A68_VOID ,A68t42,(struct A68t37 *,A68_VC *),(struct A68t37 *,A68_VC *,void *));
typedef struct A68t42  A68_42 ;    /* PROC(REF MODE37) MODE26 */

A_PROCEDURE(struct A68t37 *,A68t43,(A68_VC ,struct A68t40 ,struct A68t31 ),(A68_VC ,struct A68t40 ,struct A68t31 ,void *));
typedef struct A68t43  A68_43 ;    /* PROC(MODE26,MODE40,MODE31) REF MODE37 */

A_PROCEDURE(A68_VOID ,A68t44,(struct A68t37 *,struct A68t31 ),(struct A68t37 *,struct A68t31 ,void *));
typedef struct A68t44  A68_44 ;    /* PROC(REF MODE37,MODE31) VOID */

A_PROCEDURE(A68_VOID ,A68t45,(struct A68t37 *,A68_VC ,A68_INT *,struct A68t31 ,struct A68t38 *),(struct A68t37 *,A68_VC ,A68_INT *,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t45  A68_45 ;    /* PROC(REF MODE37,REF MODE26,REF INT,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t46,(struct A68t37 *,A68_VC ,struct A68t31 ,struct A68t38 *),(struct A68t37 *,A68_VC ,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t46  A68_46 ;    /* PROC(REF MODE37,MODE26,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t47,(struct A68t37 *,A68_LINT ,struct A68t31 ,struct A68t38 *),(struct A68t37 *,A68_LINT ,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t47  A68_47 ;    /* PROC(REF MODE37,LONG INT,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t48,(struct A68t37 *,A68_LINT *,struct A68t31 ,struct A68t38 *),(struct A68t37 *,A68_LINT *,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(REF MODE37,REF LONG INT,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t49,(struct A68t37 *,struct A68t31 ,struct A68t38 *),(struct A68t37 *,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t49  A68_49 ;    /* PROC(REF MODE37,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t50,(A68_VC ,struct A68t31 ,struct A68t38 *),(A68_VC ,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t50  A68_50 ;    /* PROC(MODE26,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t51,(A68_VC ,A68_VC ,struct A68t31 ,struct A68t38 *),(A68_VC ,A68_VC ,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t51  A68_51 ;    /* PROC(MODE26,MODE26,MODE31) MODE38 */
struct A68t52{
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
typedef struct A68t52  A68_52 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t54 ;

A_PROCEDURE(struct A68t52 *,A68t53,(struct A68t54 ,struct A68t31 ),(struct A68t54 ,struct A68t31 ,void *));
typedef struct A68t53  A68_53 ;    /* PROC(MODE54,MODE31) REF MODE52 */
struct A68t54 { A68_INT mode; union {
struct A68t37 * mode1;
A68_VC  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t54  A68_54 ;    /* UNION(REF MODE37,MODE26)  */

A_PROCEDURE(A68_BOOL ,A68t55,(struct A68t37 *),(struct A68t37 *,void *));
typedef struct A68t55  A68_55 ;    /* PROC(REF MODE37) BOOL */

A_PROCEDURE(A68_BITS *,A68t56,(A68_VC ,struct A68t31 ),(A68_VC ,struct A68t31 ,void *));
typedef struct A68t56  A68_56 ;    /* PROC(MODE26,MODE31) REF BITS */

A_PROCEDURE(A68_VOID ,A68t57,(A68_BITS *,struct A68t31 ),(A68_BITS *,struct A68t31 ,void *));
typedef struct A68t57  A68_57 ;    /* PROC(REF BITS,MODE31) VOID */

A_PROCEDURE(A68_VOID ,A68t58,(A68_BITS *,struct A68t31 ,A68_VC *),(A68_BITS *,struct A68t31 ,A68_VC *,void *));
typedef struct A68t58  A68_58 ;    /* PROC(REF BITS,MODE31) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t59,(A68_VC *),(A68_VC *,void *));
typedef struct A68t59  A68_59 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t60,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_LINT ,A68t61,(void),(void *));
typedef struct A68t61  A68_61 ;    /* PROC LONG INT */

A_PROCEDURE(A68_VOID ,A68t62,(A68_LINT ,A68_VC *),(A68_LINT ,A68_VC *,void *));
typedef struct A68t62  A68_62 ;    /* PROC(LONG INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t63,(A68_INT ),(A68_INT ,void *));
typedef struct A68t63  A68_63 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_INT ,A68t64,(A68_VC ,struct A68t31 ),(A68_VC ,struct A68t31 ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(MODE26,MODE31) INT */

A_PROCEDURE(A68_INT ,A68t65,(void),(void *));
typedef struct A68t65  A68_65 ;    /* PROC INT */
struct A68t66{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t66  A68_66 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t67,(A68_VC ,A68_VC ,struct A68t31 ,struct A68t66 *),(A68_VC ,A68_VC ,struct A68t31 ,struct A68t66 *,void *));
typedef struct A68t67  A68_67 ;    /* PROC(MODE26,MODE26,MODE31) MODE66 */

A_PROCEDURE(A68_VOID ,A68t68,(struct A68t33 *),(struct A68t33 *,void *));
typedef struct A68t68  A68_68 ;    /* PROC MODE33 */

A_PROCEDURE(A68_VOID ,A68t69,(A68_VC ,struct A68t31 ,struct A68t33 *),(A68_VC ,struct A68t31 ,struct A68t33 *,void *));
typedef struct A68t69  A68_69 ;    /* PROC(MODE26,MODE31) MODE33 */
struct A68t71 ;

A_PROCEDURE(A68_VOID ,A68t70,(struct A68t71 ,struct A68t31 ,struct A68t31 ),(struct A68t71 ,struct A68t31 ,struct A68t31 ,void *));
typedef struct A68t70  A68_70 ;    /* PROC(MODE71,MODE31,MODE31) VOID */
A_VECTOR(A68_INT ,A68t71);
typedef struct A68t71  A68_71 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t72,(struct A68t71 ,struct A68t31 ),(struct A68t71 ,struct A68t31 ,void *));
typedef struct A68t72  A68_72 ;    /* PROC(MODE71,MODE31) VOID */

A_PROCEDURE(A68_VOID ,A68t73,(A68_INT ,struct A68t31 ,struct A68t31 *),(A68_INT ,struct A68t31 ,struct A68t31 *,void *));
typedef struct A68t73  A68_73 ;    /* PROC(INT,MODE31) MODE31 */

A_PROCEDURE(A68_VOID ,A68t74,(void),(void *));
typedef struct A68t74  A68_74 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t75,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t75  A68_75 ;    /* PROC(BITS) VOID */
struct A68t77 ;

A_PROCEDURE(A68_VOID ,A68t76,(struct A68t77 ),(struct A68t77 ,void *));
typedef struct A68t76  A68_76 ;    /* PROC(MODE77) VOID */

A_PROCEDURE(A68_VOID ,A68t77,(A68_VC ),(A68_VC ,void *));
typedef struct A68t77  A68_77 ;    /* PROC(MODE26) VOID */
struct A68t78{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_15)
};
typedef struct A68t78  A68_78 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t79,(A68_BOOL ,struct A68t78 *),(A68_BOOL ,struct A68t78 *,void *));
typedef struct A68t79  A68_79 ;    /* PROC(BOOL) MODE78 */
struct A68t81 ;

A_PROCEDURE(A68_VOID ,A68t80,(struct A68t81 ,struct A68t31 ),(struct A68t81 ,struct A68t31 ,void *));
typedef struct A68t80  A68_80 ;    /* PROC(MODE81,MODE31) VOID */
A_VECTOR(struct A68t78 ,A68t81);
typedef struct A68t81  A68_81 ;    /* VECTOR [] MODE78 */

A_PROCEDURE(A68_VOID ,A68t82,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t82  A68_82 ;    /* PROC(BOOL) MODE26 */
A_ISTRUCT(A68_CHAR ,7,A68t84);
typedef struct A68t84  A68_84 ;    /* STRUCT 7 CHAR */
struct A68t83{
struct A68t84  Name;
A_PAD_ISTRUCT(A68_84 ,PAD_16)
A68_BOOL  Set;
A_PAD_BOOL(PAD_17)
};
typedef struct A68t83  A68_83 ;    /* STRUCT(MODE84,BOOL)  */
struct A68t85{
A68_INT  Labno;
A_PAD_INT(PAD_18)
};
typedef struct A68t85  A68_85 ;    /* STRUCT(INT)  */
struct A68t86{
A68_INT  Rdenno;
A_PAD_INT(PAD_19)
A68_INT  Mode;
A_PAD_INT(PAD_20)
A68_INT  Nods;
A_PAD_INT(PAD_21)
A68_INT  Deflex;
A_PAD_INT(PAD_22)
};
typedef struct A68t86  A68_86 ;    /* STRUCT(INT,INT,INT,INT)  */
A_ISTRUCT(A68_CHAR ,32,A68t88);
typedef struct A68t88  A68_88 ;    /* STRUCT 32 CHAR */
struct A68t87{
struct A68t88  N;
A_PAD_ISTRUCT(A68_88 ,PAD_23)
struct A68t88  F;
A_PAD_ISTRUCT(A68_88 ,PAD_24)
A68_INT  Level;
A_PAD_INT(PAD_25)
};
typedef struct A68t87  A68_87 ;    /* STRUCT(MODE88,MODE88,INT)  */
struct A68t89{
struct A68t88  Name;
A_PAD_ISTRUCT(A68_88 ,PAD_26)
A68_INT  Decno;
A_PAD_INT(PAD_27)
A68_INT  Level;
A_PAD_INT(PAD_28)
A68_INT  Mode;
A_PAD_INT(PAD_29)
A68_INT  Scope;
A_PAD_INT(PAD_30)
struct A68t89 * Rest;
};
typedef struct A68t89  A68_89 ;    /* STRUCT(MODE88,INT,INT,INT,INT,REF MODE89)  */
struct A68t90{
A68_INT  Rdenno;
A_PAD_INT(PAD_31)
A68_INT  Imode;
A_PAD_INT(PAD_32)
A68_INT  Length;
A_PAD_INT(PAD_33)
A68_INT  Deflex;
A_PAD_INT(PAD_34)
};
typedef struct A68t90  A68_90 ;    /* STRUCT(INT,INT,INT,INT)  */
struct A68t99{
A68_INT  Mode;
A_PAD_INT(PAD_35)
};
typedef struct A68t99  A68_99 ;    /* STRUCT(INT)  */
struct A68t91 { A68_INT mode; union {
A68_INT  mode1;
struct A68t92 * mode2;
struct A68t93 * mode3;
struct A68t94 * mode4;
struct A68t90 * mode5;
struct A68t95 * mode6;
struct A68t96 * mode7;
struct A68t86 * mode8;
struct A68t97 * mode9;
struct A68t98 * mode10;
struct A68t99  mode11;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t91  A68_91 ;    /* UNION(INT,REF MODE92,REF MODE93,REF MODE94,REF MODE90,REF MODE95,REF MODE96,REF MODE86,REF MODE97,REF MODE98,MODE99)  */
struct A68t92{
A68_INT  Rdenno;
A_PAD_INT(PAD_36)
struct A68t103 * Modelist;
};
typedef struct A68t92  A68_92 ;    /* STRUCT(INT,REF MODE103)  */
struct A68t93{
A68_INT  Deproc;
A_PAD_INT(PAD_37)
struct A68t103 * Pars;
};
typedef struct A68t93  A68_93 ;    /* STRUCT(INT,REF MODE103)  */
struct A68t94{
A68_INT  Rdenno;
A_PAD_INT(PAD_38)
A68_INT  Deflex;
A_PAD_INT(PAD_39)
struct A68t102 * Sels;
};
typedef struct A68t94  A68_94 ;    /* STRUCT(INT,INT,REF MODE102)  */
struct A68t95{
A68_INT  Deproc;
A_PAD_INT(PAD_40)
};
typedef struct A68t95  A68_95 ;    /* STRUCT(INT)  */
struct A68t96{
A68_INT  Rdenno;
A_PAD_INT(PAD_41)
A68_INT  Vecmode;
A_PAD_INT(PAD_42)
A68_INT  Deflex;
A_PAD_INT(PAD_43)
};
typedef struct A68t96  A68_96 ;    /* STRUCT(INT,INT,INT)  */
struct A68t97{
A68_INT  Mode;
A_PAD_INT(PAD_44)
struct A68t101 * Stenlist;
};
typedef struct A68t97  A68_97 ;    /* STRUCT(INT,REF MODE101)  */
struct A68t98{
A68_INT  Mode;
A_PAD_INT(PAD_45)
A68_INT  Modeproc;
A_PAD_INT(PAD_46)
struct A68t100 * El;
};
typedef struct A68t98  A68_98 ;    /* STRUCT(INT,INT,REF MODE100)  */
struct A68t100{
struct A68t98 * Am;
struct A68t100 * Rest;
};
typedef struct A68t100  A68_100 ;    /* STRUCT(REF MODE98,REF MODE100)  */
struct A68t101{
A68_INT  Mode;
A_PAD_INT(PAD_47)
A68_INT  Rdenno;
A_PAD_INT(PAD_48)
struct A68t101 * Rest;
};
typedef struct A68t101  A68_101 ;    /* STRUCT(INT,INT,REF MODE101)  */
struct A68t102{
A68_INT  Mode;
A_PAD_INT(PAD_49)
A68_INT  Fieldno;
A_PAD_INT(PAD_50)
struct A68t88  Name;
A_PAD_ISTRUCT(A68_88 ,PAD_51)
struct A68t102 * Rest;
};
typedef struct A68t102  A68_102 ;    /* STRUCT(INT,INT,MODE88,REF MODE102)  */
struct A68t103{
A68_INT  Mode;
A_PAD_INT(PAD_52)
struct A68t103 * Rest;
};
typedef struct A68t103  A68_103 ;    /* STRUCT(INT,REF MODE103)  */
A_VECTOR(struct A68t107 ,A68t106);
typedef struct A68t106  A68_106 ;    /* VECTOR [] MODE107 */
A_VECTOR(struct A68t87 ,A68t113);
typedef struct A68t113  A68_113 ;    /* VECTOR [] MODE87 */
struct A68t112 { A68_INT mode; union {
A68_VC  mode1;
struct A68t113  mode2;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t112  A68_112 ;    /* UNION(REF MODE26,REF MODE113)  */
struct A68t108{
struct A68t88  F;
A_PAD_ISTRUCT(A68_88 ,PAD_53)
A68_INT  No;
A_PAD_INT(PAD_54)
A68_INT  Nl;
A_PAD_INT(PAD_55)
A68_INT  Ng;
A_PAD_INT(PAD_56)
struct A68t112  U;
};
typedef struct A68t108  A68_108 ;    /* STRUCT(MODE88,INT,INT,INT,MODE112)  */
A_VECTOR(struct A68t111 ,A68t109);
typedef struct A68t109  A68_109 ;    /* VECTOR [] MODE111 */
struct A68t111{
struct A68t84  Prefix;
A_PAD_ISTRUCT(A68_84 ,PAD_57)
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
typedef struct A68t111  A68_111 ;    /* STRUCT(MODE84,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26)  */
A_VECTOR(struct A68t84 ,A68t110);
typedef struct A68t110  A68_110 ;    /* VECTOR [] MODE84 */
struct A68t107{
struct A68t108  Xs;
struct A68t84  Ys;
A_PAD_ISTRUCT(A68_84 ,PAD_63)
A68_LINT  Timeoflastchange;
A_PAD_LINT(PAD_64)
struct A68t109  Keptinfo;
struct A68t110  Cnames;
};
typedef struct A68t107  A68_107 ;    /* STRUCT(MODE108,MODE84,LONG INT,REF MODE109,REF MODE110)  */
struct A68t105{
struct A68t84  Uname;
A_PAD_ISTRUCT(A68_84 ,PAD_65)
struct A68t84  Lname;
A_PAD_ISTRUCT(A68_84 ,PAD_66)
struct A68t84  Gname;
A_PAD_ISTRUCT(A68_84 ,PAD_67)
struct A68t106  Specs;
};
typedef struct A68t105  A68_105 ;    /* STRUCT(MODE84,MODE84,MODE84,REF MODE106)  */
struct A68t104{
struct A68t88  Name;
A_PAD_ISTRUCT(A68_88 ,PAD_68)
struct A68t105  Ym;
struct A68t88  Formal;
A_PAD_ISTRUCT(A68_88 ,PAD_69)
struct A68t84  Ys;
A_PAD_ISTRUCT(A68_84 ,PAD_70)
A68_INT  Level;
A_PAD_INT(PAD_71)
A68_INT  Ownlevel;
A_PAD_INT(PAD_72)
};
typedef struct A68t104  A68_104 ;    /* STRUCT(MODE88,MODE105,MODE88,MODE84,INT,INT)  */
struct A68t114{
struct A68t88  Name;
A_PAD_ISTRUCT(A68_88 ,PAD_73)
struct A68t87  L;
struct A68t87  G;
A68_INT  Type;
A_PAD_INT(PAD_74)
};
typedef struct A68t114  A68_114 ;    /* STRUCT(MODE88,MODE87,MODE87,INT)  */
struct A68t115{
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
typedef struct A68t115  A68_115 ;    /* STRUCT(INT,INT,INT,INT,INT,INT)  */
struct A68t116{
A68_INT  Type;
A_PAD_INT(PAD_81)
A68_INT  Moduleno;
A_PAD_INT(PAD_82)
struct A68t88  Name;
A_PAD_ISTRUCT(A68_88 ,PAD_83)
struct A68t105  Ym;
};
typedef struct A68t116  A68_116 ;    /* STRUCT(INT,INT,MODE88,MODE105)  */
struct A68t117{
struct A68t114  Xmi;
struct A68t105  Ym;
};
typedef struct A68t117  A68_117 ;    /* STRUCT(MODE114,MODE105)  */
struct A68t118{
struct A68t108  Xs;
struct A68t84  Ys;
A_PAD_ISTRUCT(A68_84 ,PAD_84)
};
typedef struct A68t118  A68_118 ;    /* STRUCT(MODE108,MODE84)  */
struct A68t120 ;

A_PROCEDURE(A68_VOID ,A68t119,(struct A68t120 ),(struct A68t120 ,void *));
typedef struct A68t119  A68_119 ;    /* PROC(MODE120) VOID */
A_VECTOR(struct A68t121 ,A68t120);
typedef struct A68t120  A68_120 ;    /* VECTOR [] MODE121 */
struct A68t121 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_SINT  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t121  A68_121 ;    /* UNION(CHAR,MODE26,SHORT INT)  */
struct A68t123 ;

A_PROCEDURE(A68_VOID ,A68t122,(struct A68t123 ,A68_INT ),(struct A68t123 ,A68_INT ,void *));
typedef struct A68t122  A68_122 ;    /* PROC(MODE123,INT) VOID */
A_VECTOR(struct A68t124 ,A68t123);
typedef struct A68t123  A68_123 ;    /* VECTOR [] MODE124 */
struct A68t124 { A68_INT mode; union {
A68_CHAR  mode1;
A68_VC  mode2;
A68_INT  mode3;
A68_SINT  mode4;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t124  A68_124 ;    /* UNION(CHAR,MODE26,INT,SHORT INT)  */

A_PROCEDURE(A68_INT ,A68t125,(A68_INT ),(A68_INT ,void *));
typedef struct A68t125  A68_125 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_BOOL ,A68t126,(A68_INT ),(A68_INT ,void *));
typedef struct A68t126  A68_126 ;    /* PROC(INT) BOOL */
struct A68t127{
A68_INT  Level;
A_PAD_INT(PAD_85)
A68_INT  Block;
A_PAD_INT(PAD_86)
};
typedef struct A68t127  A68_127 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t128,(struct A68t127 *),(struct A68t127 *,void *));
typedef struct A68t128  A68_128 ;    /* PROC MODE127 */

A_PROCEDURE(A68_BOOL ,A68t129,(void),(void *));
typedef struct A68t129  A68_129 ;    /* PROC BOOL */

A_PROCEDURE(A68_BOOL ,A68t130,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t130  A68_130 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t131,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t132,(struct A68t127 ,struct A68t127 ),(struct A68t127 ,struct A68t127 ,void *));
typedef struct A68t132  A68_132 ;    /* PROC(MODE127,MODE127) BOOL */

A_PROCEDURE(A68_BOOL ,A68t133,(struct A68t127 ),(struct A68t127 ,void *));
typedef struct A68t133  A68_133 ;    /* PROC(MODE127) BOOL */

A_PROCEDURE(A68_VOID ,A68t134,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t134  A68_134 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t135,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t135  A68_135 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t136,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t136  A68_136 ;    /* PROC(INT) REF MODE26 */
struct A68t138 ;

A_PROCEDURE(A68_VOID ,A68t137,(A68_INT ,struct A68t138 ),(A68_INT ,struct A68t138 ,void *));
typedef struct A68t137  A68_137 ;    /* PROC(INT,MODE138) VOID */
A_ROW(A68_VC ,A68t138,1);
typedef struct A68t138  A68_138 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t139,(void),(void *));
typedef struct A68t139  A68_139 ;    /* PROC BITS */
struct A68t140{
A68_INT  Cfile;
A_PAD_INT(PAD_87)
};
typedef struct A68t140  A68_140 ;    /* STRUCT(INT)  */
struct A68t141{
A68_INT  Seedfile;
A_PAD_INT(PAD_88)
};
typedef struct A68t141  A68_141 ;    /* STRUCT(INT)  */
struct A68t142 { A68_INT mode; union {
struct A68t140  mode1;
struct A68t141  mode2;
struct A68t84  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t142  A68_142 ;    /* UNION(MODE140,MODE141,MODE84,VOID)  */
A_ROW(A68_BOOL ,A68t143,1);
typedef struct A68t143  A68_143 ;    /* [] BOOL */
struct A68t144{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_89)
A68_VC  Sourcefile;
struct A68t84  Nameseed;
A_PAD_ISTRUCT(A68_84 ,PAD_90)
struct A68t142  Nameseedorigin;
struct A68t145 * Used_modules;
A68_VC  Commandline;
struct A68t146 * Environment;
};
typedef struct A68t144  A68_144 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE84,MODE142,REF MODE145,REF MODE26,REF MODE146)  */
struct A68t145{
A68_VC  Modinfo_file;
struct A68t145 * Next;
};
typedef struct A68t145  A68_145 ;    /* STRUCT(REF MODE26,REF MODE145)  */
struct A68t146{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t146 * Next;
};
typedef struct A68t146  A68_146 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE146)  */
struct A68t148 ;

A_PROCEDURE(struct A68t37 *,A68t147,(A68_VC ,struct A68t148 *,A68_VC *),(A68_VC ,struct A68t148 *,A68_VC *,void *));
typedef struct A68t147  A68_147 ;    /* PROC(MODE26,REF MODE148,REF REF MODE26) REF MODE37 */
struct A68t148{
A68_VC  Dir;
struct A68t148 * Next;
};
typedef struct A68t148  A68_148 ;    /* STRUCT(REF MODE26,REF MODE148)  */

A_PROCEDURE(A68_VOID ,A68t149,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t149  A68_149 ;    /* PROC(REF MODE26,INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t150,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t150  A68_150 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t151,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t151  A68_151 ;    /* PROC(REF MODE26) REF MODE26 */
struct A68t153 ;
struct A68t154 ;

A_PROCEDURE(A68_VOID ,A68t152,(struct A68t153 ,struct A68t154 *,A68_INT ),(struct A68t153 ,struct A68t154 *,A68_INT ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(MODE153,REF MODE154,INT) VOID */
struct A68t153{
A68_INT  Type;
A_PAD_INT(PAD_91)
A68_VC  Name;
A68_INT  Mode;
A_PAD_INT(PAD_92)
A68_INT  Decno;
A_PAD_INT(PAD_93)
};
typedef struct A68t153  A68_153 ;    /* STRUCT(INT,REF MODE26,INT,INT)  */
struct A68t156{
A68_INT  Rdenno;
A_PAD_INT(PAD_94)
};
typedef struct A68t156  A68_156 ;    /* STRUCT(INT)  */
struct A68t157{
A68_INT  Idno;
A_PAD_INT(PAD_95)
};
typedef struct A68t157  A68_157 ;    /* STRUCT(INT)  */
struct A68t158{
struct A68t84  Name;
A_PAD_ISTRUCT(A68_84 ,PAD_96)
A68_INT  Mode;
A_PAD_INT(PAD_97)
};
typedef struct A68t158  A68_158 ;    /* STRUCT(MODE84,INT)  */
struct A68t159{
A68_INT  Nse;
A_PAD_INT(PAD_98)
};
typedef struct A68t159  A68_159 ;    /* STRUCT(INT)  */
struct A68t160{
A68_INT  Fn;
A_PAD_INT(PAD_99)
A68_INT  Param;
A_PAD_INT(PAD_100)
struct A68t161 * Operands;
};
typedef struct A68t160  A68_160 ;    /* STRUCT(INT,INT,REF MODE161)  */
struct A68t155 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t156  mode2;
struct A68t157  mode4;
struct A68t158  mode5;
A68_VC  mode6;
struct A68t85  mode7;
struct A68t159  mode8;
struct A68t160  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t155  A68_155 ;    /* UNION(LONG BITS,MODE156,VOID,MODE157,MODE158,MODE26,MODE85,MODE159,MODE160)  */
struct A68t154{
A68_INT  Mode;
A_PAD_INT(PAD_101)
A68_BITS  Info;
A_PAD_BITS(PAD_102)
struct A68t155  Extra;
};
typedef struct A68t154  A68_154 ;    /* STRUCT(INT,BITS,MODE155)  */
struct A68t161{
struct A68t154  Value;
struct A68t161 * Rest;
};
typedef struct A68t161  A68_161 ;    /* STRUCT(MODE154,REF MODE161)  */

A_PROCEDURE(A68_VOID ,A68t162,(A68_INT ,struct A68t127 *),(A68_INT ,struct A68t127 *,void *));
typedef struct A68t162  A68_162 ;    /* PROC(INT) MODE127 */

A_PROCEDURE(A68_VOID ,A68t163,(A68_VC ,struct A68t84 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t84 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(REF MODE26,MODE84,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t164,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t164  A68_164 ;    /* PROC(INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t165,(struct A68t153 ,struct A68t161 **),(struct A68t153 ,struct A68t161 **,void *));
typedef struct A68t165  A68_165 ;    /* PROC(MODE153,REF REF MODE161) VOID */
A_ROW(struct A68t167 ,A68t166,1);
typedef struct A68t166  A68_166 ;    /* [] MODE167 */
struct A68t167{
A68_INT  Mode;
A_PAD_INT(PAD_103)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_104)
struct A68t127  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t84  Prefix;
A_PAD_ISTRUCT(A68_84 ,PAD_105)
A68_BITS  Flags;
A_PAD_BITS(PAD_106)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t167  A68_167 ;    /* STRUCT(INT,INT,MODE127,REF MODE26,REF MODE26,MODE84,BITS,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t168,(struct A68t153 ),(struct A68t153 ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(MODE153) VOID */
struct A68t170 ;

A_PROCEDURE(A68_VOID ,A68t169,(struct A68t170 ),(struct A68t170 ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(MODE170) VOID */
struct A68t170{
A68_VC  Name;
A68_INT  Labno;
A_PAD_INT(PAD_107)
A68_INT  Status;
A_PAD_INT(PAD_108)
A68_BOOL  Notsetting;
A_PAD_BOOL(PAD_109)
};
typedef struct A68t170  A68_170 ;    /* STRUCT(REF MODE26,INT,INT,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t171,(A68_VC ,A68_INT ,struct A68t71 ,A68_INT ,A68_INT ,struct A68t127 ,A68_BITS ),(A68_VC ,A68_INT ,struct A68t71 ,A68_INT ,A68_INT ,struct A68t127 ,A68_BITS ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(REF MODE26,INT,REF MODE71,INT,INT,MODE127,BITS) VOID */
A_ROW(struct A68t173 ,A68t172,1);
typedef struct A68t172  A68_172 ;    /* [] MODE173 */
struct A68t173{
A68_INT  Mode;
A_PAD_INT(PAD_110)
A68_INT  Resultmode;
A_PAD_INT(PAD_111)
A68_INT  Declevel;
A_PAD_INT(PAD_112)
struct A68t127  Environ;
A68_VC  Name;
struct A68t84  Prefix;
A_PAD_ISTRUCT(A68_84 ,PAD_113)
struct A68t84  Fnprefix;
A_PAD_ISTRUCT(A68_84 ,PAD_114)
struct A68t84  Envprefix;
A_PAD_ISTRUCT(A68_84 ,PAD_115)
A68_BITS  Flags;
A_PAD_BITS(PAD_116)
};
typedef struct A68t173  A68_173 ;    /* STRUCT(INT,INT,INT,MODE127,REF MODE26,MODE84,MODE84,MODE84,BITS)  */
struct A68t174{
struct A68t83  Label;
struct A68t127  Environ;
A68_VC  Name;
struct A68t84  Prefix;
A_PAD_ISTRUCT(A68_84 ,PAD_117)
A68_BITS  Flags;
A_PAD_BITS(PAD_118)
A68_INT  Alias;
A_PAD_INT(PAD_119)
};
typedef struct A68t174  A68_174 ;    /* STRUCT(MODE83,MODE127,REF MODE26,MODE84,BITS,INT)  */

A_PROCEDURE(struct A68t167 *,A68t175,(A68_INT ),(A68_INT ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(INT) REF MODE167 */
A_ROW(struct A68t174 ,A68t176,1);
typedef struct A68t176  A68_176 ;    /* [] MODE174 */
struct A68t178 ;

A_PROCEDURE(A68_VOID ,A68t177,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t178 ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t178 ,void *));
typedef struct A68t177  A68_177 ;    /* PROC(INT,INT,INT,INT,REF MODE178) VOID */
A_ROW(A68_INT ,A68t178,1);
typedef struct A68t178  A68_178 ;    /* [] INT */

A_PROCEDURE(A68_BOOL ,A68t179,(A68_VC ),(A68_VC ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(MODE26) BOOL */
struct A68t180{
A68_INT  Mode;
A_PAD_INT(PAD_120)
A68_VC  String;
};
typedef struct A68t180  A68_180 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t181{
A68_INT  I;
A_PAD_INT(PAD_121)
};
typedef struct A68t181  A68_181 ;    /* STRUCT(INT)  */
struct A68t182{
A68_INT  Body;
A_PAD_INT(PAD_122)
A68_INT  Moduleno;
A_PAD_INT(PAD_123)
struct A68t178  Actuals;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(INT,INT,REF MODE178)  */
struct A68t183{
A68_INT  Mode;
A_PAD_INT(PAD_124)
A68_INT  Number;
A_PAD_INT(PAD_125)
A68_VC  Insert;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(INT,INT,REF MODE26)  */
struct A68t185{
A68_INT  Moduleno;
A_PAD_INT(PAD_126)
A68_INT  I;
A_PAD_INT(PAD_127)
A68_INT  J;
A_PAD_INT(PAD_128)
};
typedef struct A68t185  A68_185 ;    /* STRUCT(INT,INT,INT)  */
A_ROW(A68_VC ,A68t187,1);
typedef struct A68t187  A68_187 ;    /* [] REF MODE26 */
struct A68t186{
A68_INT  Moduleno;
A_PAD_INT(PAD_129)
A68_VC  Name;
A68_VC  Uname;
A68_VC  Lname;
A68_VC  Gname;
struct A68t187  Ysnames;
};
typedef struct A68t186  A68_186 ;    /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE187)  */
struct A68t184 { A68_INT mode; union {
struct A68t182  mode1;
struct A68t185  mode2;
struct A68t186  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t184  A68_184 ;    /* UNION(MODE182,MODE185,MODE186)  */
struct A68t189{
A68_INT  Nochars;
A_PAD_INT(PAD_130)
A68_INT  Nocases;
A_PAD_INT(PAD_131)
A68_INT  W;
A_PAD_INT(PAD_132)
};
typedef struct A68t189  A68_189 ;    /* STRUCT(INT,INT,INT)  */
struct A68t188{
struct A68t189  Info;
A68_VC  Text;
};
typedef struct A68t188  A68_188 ;    /* STRUCT(MODE189,REF MODE26)  */
struct A68t190{
A68_VC  Representation;
};
typedef struct A68t190  A68_190 ;    /* STRUCT(REF MODE26)  */
struct A68t192{
A68_INT  Mode;
A_PAD_INT(PAD_133)
A68_VC  Nu;
};
typedef struct A68t192  A68_192 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t193{
A68_INT  Mode;
A_PAD_INT(PAD_134)
A68_LBITS  Denotation;
A_PAD_LBITS(PAD_135)
};
typedef struct A68t193  A68_193 ;    /* STRUCT(INT,LONG BITS)  */
struct A68t194{
A68_INT  Mode;
A_PAD_INT(PAD_136)
A68_VC  Denotation;
};
typedef struct A68t194  A68_194 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t195{
A68_INT  Fn;
A_PAD_INT(PAD_137)
A68_INT  Mode;
A_PAD_INT(PAD_138)
A68_INT  Param;
A_PAD_INT(PAD_139)
};
typedef struct A68t195  A68_195 ;    /* STRUCT(INT,INT,INT)  */
struct A68t196{
A68_VC  Name;
A68_BITS  Props;
A_PAD_BITS(PAD_140)
A68_INT  Mode;
A_PAD_INT(PAD_141)
A68_INT  Rdenno;
A_PAD_INT(PAD_142)
A68_INT  Maxname;
A_PAD_INT(PAD_143)
};
typedef struct A68t196  A68_196 ;    /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
struct A68t197{
A68_INT  W;
A_PAD_INT(PAD_144)
};
typedef struct A68t197  A68_197 ;    /* STRUCT(INT)  */
struct A68t198{
A68_INT  Mode;
A_PAD_INT(PAD_145)
A68_BITS  Props;
A_PAD_BITS(PAD_146)
A68_INT  Param;
A_PAD_INT(PAD_147)
};
typedef struct A68t198  A68_198 ;    /* STRUCT(INT,BITS,INT)  */
struct A68t199{
A68_BOOL  Start;
A_PAD_BOOL(PAD_148)
};
typedef struct A68t199  A68_199 ;    /* STRUCT(BOOL)  */
struct A68t200{
A68_INT  Fn;
A_PAD_INT(PAD_149)
A68_INT  Mode;
A_PAD_INT(PAD_150)
A68_BITS  Props;
A_PAD_BITS(PAD_151)
A68_INT  Param;
A_PAD_INT(PAD_152)
};
typedef struct A68t200  A68_200 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t201{
A68_INT  Fn;
A_PAD_INT(PAD_153)
A68_INT  Mode;
A_PAD_INT(PAD_154)
A68_BITS  Props;
A_PAD_BITS(PAD_155)
A68_INT  Resultmode;
A_PAD_INT(PAD_156)
};
typedef struct A68t201  A68_201 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t202{
A68_INT  Fn;
A_PAD_INT(PAD_157)
A68_BITS  Props;
A_PAD_BITS(PAD_158)
};
typedef struct A68t202  A68_202 ;    /* STRUCT(INT,BITS)  */
struct A68t191 { A68_INT mode; union {
struct A68t159  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t190  mode4;
struct A68t85  mode5;
struct A68t192  mode6;
struct A68t180  mode7;
struct A68t193  mode8;
struct A68t194  mode9;
struct A68t195  mode10;
struct A68t153  mode11;
struct A68t196  mode12;
struct A68t197  mode13;
struct A68t170  mode14;
struct A68t198  mode15;
struct A68t181  mode16;
struct A68t199  mode17;
struct A68t188  mode18;
struct A68t183  mode19;
struct A68t200  mode20;
struct A68t201  mode21;
struct A68t202  mode22;
struct A68t182  mode23;
struct A68t185  mode24;
struct A68t186  mode25;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t191  A68_191 ;    /* UNION(MODE159,INT,BOOL,MODE190,MODE85,MODE192,MODE180,MODE193,MODE194,MODE195,MODE153,MODE196,MODE197,MODE170,MODE198,MODE181,MODE199,MODE188,MODE183,MODE200,MODE201,MODE202,MODE182,MODE185,MODE186,VOID)  */
struct A68t203 { A68_INT mode; union {
struct A68t159  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t190  mode4;
struct A68t85  mode5;
struct A68t192  mode6;
struct A68t180  mode7;
struct A68t193  mode8;
struct A68t194  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t203  A68_203 ;    /* UNION(MODE159,INT,BOOL,MODE190,MODE85,MODE192,MODE180,MODE193,MODE194)  */
struct A68t204 { A68_INT mode; union {
struct A68t159  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t190  mode4;
struct A68t85  mode5;
struct A68t192  mode6;
struct A68t180  mode7;
struct A68t193  mode8;
struct A68t194  mode9;
struct A68t195  mode10;
struct A68t153  mode11;
struct A68t196  mode12;
struct A68t197  mode13;
struct A68t170  mode14;
struct A68t198  mode15;
struct A68t181  mode16;
struct A68t199  mode17;
struct A68t188  mode18;
struct A68t183  mode19;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t204  A68_204 ;    /* UNION(MODE159,INT,BOOL,MODE190,MODE85,MODE192,MODE180,MODE193,MODE194,MODE195,MODE153,MODE196,MODE197,MODE170,MODE198,MODE181,MODE199,MODE188,MODE183)  */
struct A68t205{
A68_INT  Parameters;
A_PAD_INT(PAD_159)
A68_INT  Result;
A_PAD_INT(PAD_160)
A68_BOOL  Hasdescriptors;
A_PAD_BOOL(PAD_161)
};
typedef struct A68t205  A68_205 ;    /* STRUCT(INT,INT,BOOL)  */
struct A68t206{
A68_INT  Mode;
A_PAD_INT(PAD_162)
A68_INT  Offset;
A_PAD_INT(PAD_163)
struct A68t88  Name;
A_PAD_ISTRUCT(A68_88 ,PAD_164)
};
typedef struct A68t206  A68_206 ;    /* STRUCT(INT,INT,MODE88)  */

A_PROCEDURE(A68_VOID ,A68t207,(A68_INT ,struct A68t71 *),(A68_INT ,struct A68t71 *,void *));
typedef struct A68t207  A68_207 ;    /* PROC(INT) REF MODE71 */

A_PROCEDURE(A68_VOID ,A68t208,(struct A68t206 *,A68_VC *),(struct A68t206 *,A68_VC *,void *));
typedef struct A68t208  A68_208 ;    /* PROC(REF MODE206) MODE26 */

A_PROCEDURE(A68_VOID ,A68t209,(A68_INT ,A68_VC ,struct A68t158 *),(A68_INT ,A68_VC ,struct A68t158 *,void *));
typedef struct A68t209  A68_209 ;    /* PROC(INT,MODE26) MODE158 */
struct A68t211 ;

A_PROCEDURE(A68_VOID ,A68t210,(struct A68t211 ,A68_INT ),(struct A68t211 ,A68_INT ,void *));
typedef struct A68t210  A68_210 ;    /* PROC(REF MODE211,INT) VOID */
A_ROW(struct A68t91 ,A68t211,1);
typedef struct A68t211  A68_211 ;    /* [] MODE91 */

A_PROCEDURE(A68_VOID ,A68t212,(A68_INT ,struct A68t205 *),(A68_INT ,struct A68t205 *,void *));
typedef struct A68t212  A68_212 ;    /* PROC(INT) MODE205 */
struct A68t214 ;

A_PROCEDURE(A68_VOID ,A68t213,(A68_INT ,struct A68t214 *),(A68_INT ,struct A68t214 *,void *));
typedef struct A68t213  A68_213 ;    /* PROC(INT) REF MODE214 */
A_VECTOR(struct A68t206 ,A68t214);
typedef struct A68t214  A68_214 ;    /* VECTOR [] MODE206 */

A_PROCEDURE(A68_INT ,A68t215,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t215  A68_215 ;    /* PROC(INT,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t216,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t216  A68_216 ;    /* PROC(INT,INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t217,(struct A68t142 ),(struct A68t142 ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(MODE142) VOID */

A_PROCEDURE(struct A68t84 ,A68t218,(void),(void *));
typedef struct A68t218  A68_218 ;    /* PROC MODE84 */

A_PROCEDURE(A68_VOID ,A68t219,(struct A68t84 ),(struct A68t84 ,void *));
typedef struct A68t219  A68_219 ;    /* PROC(MODE84) VOID */

A_PROCEDURE(A68_VOID ,A68t220,(struct A68t142 ,A68_VC *),(struct A68t142 ,A68_VC *,void *));
typedef struct A68t220  A68_220 ;    /* PROC(MODE142) MODE26 */

A_PROCEDURE(A68_BOOL ,A68t221,(struct A68t154 *,struct A68t154 *),(struct A68t154 *,struct A68t154 *,void *));
typedef struct A68t221  A68_221 ;    /* PROC(REF MODE154,REF MODE154) BOOL */

A_PROCEDURE(A68_BOOL ,A68t222,(struct A68t154 *),(struct A68t154 *,void *));
typedef struct A68t222  A68_222 ;    /* PROC(REF MODE154) BOOL */

A_PROCEDURE(A68_BOOL ,A68t223,(struct A68t154 *,A68_LBITS ),(struct A68t154 *,A68_LBITS ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(REF MODE154,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t224,(struct A68t154 *),(struct A68t154 *,void *));
typedef struct A68t224  A68_224 ;    /* PROC(REF MODE154) LONG BITS */

A_PROCEDURE(A68_VOID ,A68t225,(struct A68t154 *,A68_VC *),(struct A68t154 *,A68_VC *,void *));
typedef struct A68t225  A68_225 ;    /* PROC(REF MODE154) MODE26 */

A_PROCEDURE(struct A68t154 *,A68t226,(struct A68t154 *,A68_INT ),(struct A68t154 *,A68_INT ,void *));
typedef struct A68t226  A68_226 ;    /* PROC(REF MODE154,INT) REF MODE154 */

A_PROCEDURE(A68_INT ,A68t227,(struct A68t160 ),(struct A68t160 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(MODE160) INT */
struct A68t228{
struct A68t154 * Value;
struct A68t83 * End;
A68_INT  Type;
A_PAD_INT(PAD_165)
};
typedef struct A68t228  A68_228 ;    /* STRUCT(REF MODE154,REF MODE83,INT)  */

A_PROCEDURE(A68_BOOL ,A68t229,(struct A68t154 *,A68_BITS ),(struct A68t154 *,A68_BITS ,void *));
typedef struct A68t229  A68_229 ;    /* PROC(REF MODE154,BITS) BOOL */

A_PROCEDURE(struct A68t154 *,A68t230,(struct A68t161 *,A68_INT ),(struct A68t161 *,A68_INT ,void *));
typedef struct A68t230  A68_230 ;    /* PROC(REF MODE161,INT) REF MODE154 */

A_PROCEDURE(A68_INT ,A68t231,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t231  A68_231 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(struct A68t161 *,A68t232,(struct A68t161 *),(struct A68t161 *,void *));
typedef struct A68t232  A68_232 ;    /* PROC(REF MODE161) REF MODE161 */
struct A68t234 ;

A_PROCEDURE(struct A68t154 *,A68t233,(A68_INT ,A68_INT ,A68_BITS ,struct A68t234 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t234 ,void *));
typedef struct A68t233  A68_233 ;    /* PROC(INT,INT,BITS,MODE234) REF MODE154 */
A_VECTOR(struct A68t154 *,A68t234);
typedef struct A68t234  A68_234 ;    /* VECTOR [] REF MODE154 */

A_PROCEDURE(A68_VOID ,A68t235,(struct A68t154 *),(struct A68t154 *,void *));
typedef struct A68t235  A68_235 ;    /* PROC(REF MODE154) VOID */

A_PROCEDURE(A68_VOID ,A68t236,(struct A68t154 *,A68_BOOL ,A68_VC *),(struct A68t154 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t236  A68_236 ;    /* PROC(REF MODE154,BOOL) MODE26 */

A_PROCEDURE(A68_LINT ,A68t237,(struct A68t154 ),(struct A68t154 ,void *));
typedef struct A68t237  A68_237 ;    /* PROC(MODE154) LONG INT */
struct A68t238 { A68_INT mode; union {
struct A68t154 * mode1;
A68_VC  mode2;
struct A68t158  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t238  A68_238 ;    /* UNION(REF MODE154,MODE26,MODE158)  */

A_PROCEDURE(A68_VOID ,A68t239,(struct A68t238 ,A68_VC *),(struct A68t238 ,A68_VC *,void *));
typedef struct A68t239  A68_239 ;    /* PROC(MODE238) MODE26 */
struct A68t241 ;

A_PROCEDURE(A68_VOID ,A68t240,(struct A68t241 ,A68_VC *),(struct A68t241 ,A68_VC *,void *));
typedef struct A68t240  A68_240 ;    /* PROC(MODE241) MODE26 */
A_VECTOR(struct A68t238 ,A68t241);
typedef struct A68t241  A68_241 ;    /* VECTOR [] MODE238 */

A_PROCEDURE(A68_VOID ,A68t242,(A68_VC ,struct A68t241 ,A68_VC *),(A68_VC ,struct A68t241 ,A68_VC *,void *));
typedef struct A68t242  A68_242 ;    /* PROC(MODE26,MODE241) MODE26 */

A_PROCEDURE(A68_VOID ,A68t243,(struct A68t241 ),(struct A68t241 ,void *));
typedef struct A68t243  A68_243 ;    /* PROC(MODE241) VOID */

A_PROCEDURE(A68_VOID ,A68t244,(A68_VC ,A68_INT ,struct A68t241 ,struct A68t158 *),(A68_VC ,A68_INT ,struct A68t241 ,struct A68t158 *,void *));
typedef struct A68t244  A68_244 ;    /* PROC(MODE26,INT,MODE241) MODE158 */

A_PROCEDURE(struct A68t154 *,A68t245,(struct A68t154 *),(struct A68t154 *,void *));
typedef struct A68t245  A68_245 ;    /* PROC(REF MODE154) REF MODE154 */

A_PROCEDURE(struct A68t154 *,A68t246,(A68_VC ,struct A68t154 *),(A68_VC ,struct A68t154 *,void *));
typedef struct A68t246  A68_246 ;    /* PROC(MODE26,REF MODE154) REF MODE154 */

A_PROCEDURE(A68_VOID ,A68t247,(struct A68t154 *,A68_BOOL ),(struct A68t154 *,A68_BOOL ,void *));
typedef struct A68t247  A68_247 ;    /* PROC(REF MODE154,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t248,(struct A68t191 ,struct A68t154 *,A68_BOOL ),(struct A68t191 ,struct A68t154 *,A68_BOOL ,void *));
typedef struct A68t248  A68_248 ;    /* PROC(MODE191,REF MODE154,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t249,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t249  A68_249 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t250,(struct A68t74 ),(struct A68t74 ,void *));
typedef struct A68t250  A68_250 ;    /* PROC(MODE74) VOID */

A_PROCEDURE(A68_VOID ,A68t251,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t251  A68_251 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,55,A68t252);
typedef struct A68t252  A68_252 ;    /* STRUCT 55 CHAR */

A_PROCEDURE(A68_VOID ,A68t253,(struct A68t180 ,struct A68t154 *),(struct A68t180 ,struct A68t154 *,void *));
typedef struct A68t253  A68_253 ;    /* PROC(MODE180) MODE154 */

A_PROCEDURE(A68_VOID ,A68t254,(A68_VC ,A68_VC *,A68_VC *),(A68_VC ,A68_VC *,A68_VC *,void *));
typedef struct A68t254  A68_254 ;    /* PROC(REF MODE26,REF REF MODE26,REF REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t255,(struct A68t203 ,struct A68t154 *),(struct A68t203 ,struct A68t154 *,void *));
typedef struct A68t255  A68_255 ;    /* PROC(MODE203) MODE154 */
A_ISTRUCT(A68_CHAR ,18,A68t256);
typedef struct A68t256  A68_256 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t257);
typedef struct A68t257  A68_257 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t258);
typedef struct A68t258  A68_258 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(struct A68t124 ,5,A68t259);
typedef struct A68t259  A68_259 ;    /* STRUCT 5 MODE124 */
A_ISTRUCT(struct A68t124 ,2,A68t260);
typedef struct A68t260  A68_260 ;    /* STRUCT 2 MODE124 */
A_ISTRUCT(A68_CHAR ,31,A68t261);
typedef struct A68t261  A68_261 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t262);
typedef struct A68t262  A68_262 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t263);
typedef struct A68t263  A68_263 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,28,A68t264);
typedef struct A68t264  A68_264 ;    /* STRUCT 28 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from tracer --- */
/* --- End of imports from tracer --- */


/* --- Imports from values --- */
extern A68_BITS  PKJACTR_defaultinfo;
#define QKJACTR_constant 0X1U
#define TKJACTR_nonloc 0X8U
#define WKJACTR_isnil 0X40U
extern A68_154  DLJACTR_skipvalue;
/* --- End of imports from values --- */


/* --- Imports from uniquenameserver --- */
extern A68_84  QIMACTR_newuniquename(void);
/* --- End of imports from uniquenameserver --- */


/* --- Imports from modes --- */
extern A68_VOID  XKNACTR_ctype(A68_INT ,A68_VC *);
extern A68_INT  BTMACTR_derefmode(A68_INT );
extern A68_INT  IOMACTR_modetype(A68_INT );
extern A68_INT  TKNACTR_givecvariabletype(A68_INT ,A68_BOOL );
/* --- End of imports from modes --- */


/* --- Imports from incoperfn --- */
/* --- End of imports from incoperfn --- */


/* --- Imports from incmode --- */
#define WEAACTR_boolmode 7
#define XEAACTR_charmode 8
#define TEAACTR_gotomode 4
#define SEAACTR_nilmode 3
#define FEAACTR_proc 2
#define GEAACTR_procp 3
#define VFAACTR_refmark 1024
#define REAACTR_skipmode 2
#define UEAACTR_voidmode 5
/* --- End of imports from incmode --- */


/* --- Imports from incimperatives --- */
/* --- End of imports from incimperatives --- */


/* --- Imports from idtable --- */
extern A68_INT  VPKACTR_alienidno;
extern A68_167  UPKACTR_alienidinfo;
extern A68_166  WPKACTR_ids;
extern A68_172  XPKACTR_rds;
extern A68_166  YPKACTR_libraryids;
extern A68_176  ZPKACTR_labels;
#define AQKACTR_idnoflags 0X0U
#define HQKACTR_idoptimisedflag 0X40U
#define JQKACTR_idgprocflag 0X100U
#define LQKACTR_idloadedflag 0X400U
#define RQKACTR_rdglobalflag 0X8U
#define TQKACTR_rdloadedflag 0X20U
/* --- End of imports from idtable --- */


/* --- Imports from incid --- */
#define NAAACTR_keptgeneratorproccorrection 6000
#define IAAACTR_maxidno 2000
extern A68_INT  TAAACTR_maxkeptgeneratorproc;
#define MAAACTR_maxlibid 6000
#define KAAACTR_maxrdno 4000
#define HAAACTR_minidno 3
#define OAAACTR_minlab 16384
/* --- End of imports from incid --- */


/* --- Imports from identifiers --- */
extern A68_VOID  NBWACTR_declarenonlocallabel(A68_INT );
extern A68_VOID  ADWACTR_nonlocaldec(A68_INT ,A68_INT );
/* --- End of imports from identifiers --- */


/* --- Imports from denotations --- */
extern A68_VOID  IOJACTR_translatedenotation(A68_VC ,A68_VC *);
extern A68_VOID  DRJACTR_replacecontrolchars(A68_VC ,A68_VC *);
/* --- End of imports from denotations --- */


/* --- Imports from environment --- */
extern A68_VOID  WXIACTR_assert(A68_VC ,A68_BOOL );
extern A68_BOOL  RQIACTR_oldalienoption;
/* --- End of imports from environment --- */


/* --- Imports from environ --- */
extern A68_INT  KSLACTR_nonlocdecstream(A68_INT );
extern A68_127  JPLACTR_nullenviron;
extern A68_INT  VRLACTR_currentlevel(void);
extern A68_BOOL  NQLACTR_nonlocaldeclared(A68_INT ,A68_INT );
extern A68_VOID  ERLACTR_addnonlocal(A68_INT ,A68_INT );
extern A68_BOOL  MRLACTR_islocallevel(struct A68t127 );
extern A68_BOOL  PRLACTR_isgloballevel(struct A68t127 );
/* --- End of imports from environ --- */


/* --- Imports from coutput --- */
extern A68_VOID  MDMACTR_writecstream(struct A68t123 ,A68_INT );
/* --- End of imports from coutput --- */


/* --- Imports from centities --- */
extern A68_SINT  EIAACTR_cnewline;
extern A68_VOID  QJAACTR_singlequote(A68_VC ,A68_VC *);
extern A68_VOID  LJAACTR_doublequote(A68_VC ,A68_VC *);
extern A68_VOID  VJAACTR_curly(A68_VC ,A68_VC *);
/* --- End of imports from centities --- */


/* --- Imports from osif --- */
#include <errno.h>

#define RCBAOSF_errno errno
#define GVBAOSF_newline_char '\012'
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


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void QWYACTR(void);   /* tracer */
extern void OUPACTR(void);   /* values */
extern void RHMACTR(void);   /* uniquenameserver */
extern void DNMACTR(void);   /* modes */
extern void XFAACTR(void);   /* incoperfn */
extern void ZDAACTR(void);   /* incmode */
extern void UAAACTR(void);   /* incimperatives */
extern void PPKACTR(void);   /* idtable */
extern void BAAACTR(void);   /* incid */
extern void MMVACTR(void);   /* identifiers */
extern void LLJACTR(void);   /* denotations */
extern void HPIACTR(void);   /* environment */
extern void BPLACTR(void);   /* environ */
extern void PTLACTR(void);   /* coutput */
extern void THAACTR(void);   /* centities */
extern void CSCAOSF(void);   /* osif */
/* --- end of DECS initialisation functions --- */
static A68_252   VYZACTR = {"$Id: loads.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,WYZACTR,VYZACTR,55)
static A68_256   ACABCTR = {"unknown load of id"}; 
A_GISVEC(A68_VC ,BCABCTR,ACABCTR,18)
static A68_84   QCABCTR = {"static "}; 
A_GISVEC(A68_VC ,RCABCTR,QCABCTR,7)
static A68_257   WCABCTR = {"  "}; 
A_GISVEC(A68_VC ,XCABCTR,WCABCTR,2)
static A68_258   DDABCTR = {" = "}; 
A_GISVEC(A68_VC ,EDABCTR,DDABCTR,3)
static A68_258   PDABCTR = {"{{ "}; 
A_GISVEC(A68_VC ,QDABCTR,PDABCTR,3)
static A68_257   ZDABCTR = {" '"}; 
A_GISVEC(A68_VC ,AEABCTR,ZDABCTR,2)
static A68_257   EEABCTR = {"' "}; 
A_GISVEC(A68_VC ,FEABCTR,EEABCTR,2)
static A68_257   IEABCTR = {"',"}; 
A_GISVEC(A68_VC ,JEABCTR,IEABCTR,2)
static A68_257   REABCTR = {"  "}; 
A_GISVEC(A68_VC ,SEABCTR,REABCTR,2)
static A68_258   YEABCTR = {"}} "}; 
A_GISVEC(A68_VC ,ZEABCTR,YEABCTR,3)
static A68_257   EFABCTR = {"; "}; 
A_GISVEC(A68_VC ,FFABCTR,EFABCTR,2)
static A68_261   PFABCTR = {"LOADS - invalid STRUCT(INT nse)"}; 
A_GISVEC(A68_VC ,QFABCTR,PFABCTR,31)
static A68_262   XFABCTR = {"A68_TRUE"}; 
A_GISVEC(A68_VC ,YFABCTR,XFABCTR,8)
static A68_263   BGABCTR = {"A68_FALSE"}; 
A_GISVEC(A68_VC ,CGABCTR,BGABCTR,9)
static A68_264   RGABCTR = {"LOADS - unknown mode in load"}; 
A_GISVEC(A68_VC ,SGABCTR,RGABCTR,28)

A_STATIC A68_VOID  ZYZACTR_checknonlocaldeclared(A68_INT  Decno, A68_INT  Declevel);

A_STATIC A68_VOID  EZZACTR_alien(A68_180  Alienx, A68_154  *ReturnedValue);

A_STATIC A68_VOID  JZZACTR_parsealienstring(A68_VC  String, A68_VC * Name, A68_VC * Definition);

A68_VOID  RAABCTR_load(A68_203  L, A68_154  *ReturnedValue);

A_STATIC A68_VOID  JZZACTR_parsealienstring(A68_VC  String, A68_VC * Name, A68_VC * Definition)
{ 
A68_INT  KZZACTR_namestart A_UNUSED = {0};
A68_INT  LZZACTR_nameend A_UNUSED = {0};
A68_INT  MZZACTR_defstart A_UNUSED = {0};
A68_INT  NZZACTR;  /* to part of loop */
A68_INT  OZZACTR;  /* loop control */
A68_INT  PZZACTR;  /* to part of loop */
A68_INT  QZZACTR;  /* loop control */
A68_BOOL  RZZACTR;  /* optbool result */
A68_VC  SZZACTR;  /* OPERATORS - trim index */
A68_INT  TZZACTR;  /* to part of loop */
A68_INT  UZZACTR;  /* loop control */
A68_BOOL  VZZACTR;  /* optbool result */
A68_VC  WZZACTR;  /* clause result */
A68_VC  XZZACTR;  /* OPERATORS - nil -> mode */
A68_VC  YZZACTR;  /* OPERATORS - trim index */
A_PROC_ENTRY(parsealienstring);
 /* line 88: */
 /* line 89: */
{ 
 /* line 92: */
 /* line 93: */
NZZACTR = String.upb;
for ( OZZACTR = KZZACTR_namestart = 1;
OZZACTR <= NZZACTR;
OZZACTR += 1 )
{ 
 /* line 94: */
 /* line 95: */
if ( !(((*(&A_VINDEX(String,KZZACTR_namestart)))==' ')) ) break;
 /* line 96: */
KZZACTR_namestart+=1;
}
 /* line 99: */
 /* line 100: */
PZZACTR = String.upb;
for ( QZZACTR = LZZACTR_nameend = KZZACTR_namestart;
QZZACTR <= PZZACTR;
QZZACTR += 1 )
{ 
RZZACTR = (!RQIACTR_oldalienoption);
if ( ! RZZACTR )
{RZZACTR = ((*(&A_VINDEX(String,LZZACTR_nameend)))!=' ');
}
if ( RZZACTR )
{ /* line 101: */
RZZACTR = ((*(&A_VINDEX(String,LZZACTR_nameend)))!=GVBAOSF_newline_char);
}
 /* line 102: */
if ( !(RZZACTR) ) break;
 /* line 103: */
LZZACTR_nameend+=1;
}
 /* line 105: */
(void)((*Name) = A_VTRIM(SZZACTR,(String),A_VTSCRIPT(&(SZZACTR.upb),(String).upb,KZZACTR_namestart,(LZZACTR_nameend-1))));
 /* line 108: */
 /* line 109: */
TZZACTR = String.upb;
for ( UZZACTR = MZZACTR_defstart = LZZACTR_nameend;
UZZACTR <= TZZACTR;
UZZACTR += 1 )
{ 
VZZACTR = ((*(&A_VINDEX(String,MZZACTR_defstart)))==GVBAOSF_newline_char);
if ( ! VZZACTR )
{ /* line 110: */
VZZACTR = ((*(&A_VINDEX(String,MZZACTR_defstart)))==' ');
}
 /* line 111: */
if ( !(VZZACTR) ) break;
 /* line 112: */
MZZACTR_defstart+=1;
}
 /* line 114: */
if (MZZACTR_defstart>String.upb)
{ 
WZZACTR = A_VVAC(XZZACTR);
} 
else
{ 
 /* line 115: */
WZZACTR = A_VTRIM(YZZACTR,(String),A_VTSCRIPT(&(YZZACTR.upb),(String).upb,MZZACTR_defstart,(String).upb));
} 
(*Definition) = WZZACTR;
} 
A_PROC_EXIT(parsealienstring);
return;
} 
#undef NL

A_STATIC A68_VOID  ZYZACTR_checknonlocaldeclared(A68_INT  Decno, A68_INT  Declevel)
{ 
A68_INT  AZZACTR_curlev A_UNUSED = {0};
A68_INT  BZZACTR_i A_UNUSED = {0};
A68_INT  CZZACTR;  /* to part of loop */
A_PROC_ENTRY(checknonlocaldeclared);
 /* line 53: */
 /* line 54: */
{ 
AZZACTR_curlev = VRLACTR_currentlevel();
 /* line 55: */
 /* line 56: */
 /* line 57: */
if (!NQLACTR_nonlocaldeclared(Decno, AZZACTR_curlev))
{ 
(void)(ERLACTR_addnonlocal(Decno, AZZACTR_curlev));
 /* line 58: */
(void)(ADWACTR_nonlocaldec(Decno, AZZACTR_curlev));
 /* line 60: */
 /* line 61: */
CZZACTR = (AZZACTR_curlev-1);
for ( BZZACTR_i = (Declevel+1);
BZZACTR_i <= CZZACTR;
BZZACTR_i += 1 )
{ 
 /* line 62: */
 /* line 63: */
if (!NQLACTR_nonlocaldeclared(Decno, BZZACTR_i))
{ 
(void)(ERLACTR_addnonlocal(Decno, BZZACTR_i));
 /* line 64: */
 /* line 65: */
 /* line 66: */
(void)(ADWACTR_nonlocaldec(Decno, BZZACTR_i));
} 
}
 /* line 67: */
 /* line 69: */
} 
} 
A_PROC_EXIT(checknonlocaldeclared);
return;
} 
#undef NL

A_STATIC A68_VOID  EZZACTR_alien(A68_180  Alienx, A68_154  *ReturnedValue)
{ 
A68_INT  ZZZACTR_alienmode A_UNUSED = {0};
A68_INT  AAABCTR_alienmodetype A_UNUSED = {0};
A68_VC  BAABCTR_alienname A_UNUSED = {0};
A68_VC  CAABCTR_aliendefinition A_UNUSED = {0};
A68_BOOL  DAABCTR;  /* optbool result */
A68_BOOL  EAABCTR;  /* optbool result */
A68_BITS  FAABCTR;  /* clause result */
A68_BITS  GAABCTR_alienflags A_UNUSED = {0};
A68_167  HAABCTR;  /* collateral clause result */
A68_VC  IAABCTR;  /* OPERATORS - nil -> mode */
A68_84  JAABCTR = {0};  /* OPERATORS - skip to mode */
A68_VC  KAABCTR;  /* OPERATORS - nil -> mode */
A68_154  LAABCTR;  /* collateral clause result */
A68_157  MAABCTR_alien A_UNUSED = {0};
A68_INT * NAABCTR;  /* YIELD */
A68_155  OAABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_154  PAABCTR;  /* clause result */
A_PROC_ENTRY(alien);
 /* line 82: */
 /* line 84: */
{ 
 /* line 117: */
ZZZACTR_alienmode = Alienx.Mode;
 /* line 118: */
AAABCTR_alienmodetype = IOMACTR_modetype(ZZZACTR_alienmode);
 /* line 120: */
 /* line 122: */
(void)(JZZACTR_parsealienstring(Alienx.String, (&BAABCTR_alienname), (&CAABCTR_aliendefinition)));
 /* line 124: */
 /* line 125: */
DAABCTR = (ZZZACTR_alienmode<VFAACTR_refmark);
if ( DAABCTR )
{EAABCTR = (AAABCTR_alienmodetype==FEAACTR_proc);
if ( ! EAABCTR )
{EAABCTR = (AAABCTR_alienmodetype==GEAACTR_procp);
}
 /* line 126: */
DAABCTR = EAABCTR;
}
 /* line 127: */
if (DAABCTR)
{ 
 /* line 128: */
FAABCTR = JQKACTR_idgprocflag;
} 
else
{ 
FAABCTR = AQKACTR_idnoflags;
} 
GAABCTR_alienflags = FAABCTR;
 /* line 130: */
 /* line 131: */
 /* line 132: */
HAABCTR.Mode = ZZZACTR_alienmode;
 /* line 133: */
HAABCTR.Cvariabletype = TKNACTR_givecvariabletype(ZZZACTR_alienmode, A68_FALSE);
 /* line 134: */
HAABCTR.Environ = JPLACTR_nullenviron;
 /* line 135: */
HAABCTR.Name = BAABCTR_alienname;
 /* line 136: */
HAABCTR.C_name = A_VVAC(IAABCTR);
 /* line 137: */
HAABCTR.Prefix = JAABCTR;
 /* line 138: */
HAABCTR.Flags = GAABCTR_alienflags;
 /* line 140: */
HAABCTR.Definition = CAABCTR_aliendefinition;
HAABCTR.Rhs = A_VVAC(KAABCTR);
UPKACTR_alienidinfo = HAABCTR;
 /* line 142: */
 /* line 143: */
LAABCTR.Mode = ZZZACTR_alienmode;
 /* line 144: */
LAABCTR.Info = PKJACTR_defaultinfo;
{ 
NAABCTR = (&((&MAABCTR_alien)->Idno)) ;
(*NAABCTR) = VPKACTR_alienidno;
 /* line 145: */
 /* line 146: */
LAABCTR.Extra = A_UNITE(OAABCTR,mode4,4,MAABCTR_alien);
} 
PAABCTR = LAABCTR;
} 
A_PROC_EXIT(alien);
*ReturnedValue = (PAABCTR);
return;
} 
#undef NL

A68_VOID  RAABCTR_load(A68_203  L, A68_154  *ReturnedValue)
{ 
A68_203  SAABCTR;  /* united object - for case conformity */
A68_INT  TAABCTR_i A_UNUSED = {0};
A68_154  UAABCTR;  /* clause result */
A68_167 * VAABCTR_idinfo A_UNUSED = {0};
A68_BITS * WAABCTR;  /* YIELD */
A68_154  XAABCTR;  /* collateral clause result */
A68_127  YAABCTR_env A_UNUSED = {0};
A68_BITS  ZAABCTR;  /* ADICOPS - >= */
A68_BOOL  ABABCTR;  /* optbool result */
A68_157  BBABCTR_id A_UNUSED = {0};
A68_INT * CBABCTR;  /* YIELD */
A68_155  DBABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_173 * EBABCTR_rdinfo A_UNUSED = {0};
A68_BITS * FBABCTR;  /* YIELD */
A68_154  GBABCTR;  /* collateral clause result */
A68_BITS  HBABCTR;  /* ADICOPS - >= */
A68_BOOL  IBABCTR;  /* optbool result */
A68_156  JBABCTR_rd A_UNUSED = {0};
A68_INT * KBABCTR;  /* YIELD */
A68_155  LBABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_167 * MBABCTR_idinfo A_UNUSED = {0};
A68_BITS * NBABCTR;  /* YIELD */
A68_154  OBABCTR;  /* collateral clause result */
A68_127  PBABCTR_env A_UNUSED = {0};
A68_BITS  QBABCTR;  /* ADICOPS - >= */
A68_BOOL  RBABCTR;  /* optbool result */
A68_157  SBABCTR_id A_UNUSED = {0};
A68_INT * TBABCTR;  /* YIELD */
A68_155  UBABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_154  VBABCTR;  /* collateral clause result */
A68_INT  WBABCTR;  /* YIELD */
A68_157  XBABCTR_id A_UNUSED = {0};
A68_INT * YBABCTR;  /* YIELD */
A68_155  ZBABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_154  CCABCTR = {0};  /* OPERATORS - skip to mode */
A68_192  DCABCTR_number A_UNUSED = {0};
A68_154  ECABCTR;  /* collateral clause result */
A68_VC  FCABCTR;  /* avoid structure result */
A68_155  GCABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_193  HCABCTR_numeric A_UNUSED = {0};
A68_154  ICABCTR;  /* collateral clause result */
A68_155  JCABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_LBITS  KCABCTR;  /* YIELD */
A68_194  LCABCTR_s A_UNUSED = {0};
A68_INT  MCABCTR_stream A_UNUSED = {0};
A68_84  NCABCTR_name A_UNUSED = {0};
A68_VC  OCABCTR_string A_UNUSED = {0};
A68_259  PCABCTR;  /* collateral clause result */
A68_124  SCABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  TCABCTR;  /* YIELD */
A68_VC  UCABCTR;  /* avoid structure result */
A68_124  VCABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_124  YCABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  ZCABCTR;  /* YIELD */
A68_VC  ADABCTR;  /* OPERATORS - istruct -> vector */
A68_124  BDABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  CDABCTR;  /* YIELD */
A68_124  FDABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  GDABCTR;  /* YIELD */
A68_123  HDABCTR;  /* OPERATORS - istruct -> vector */
A68_VC  IDABCTR;  /* avoid structure result */
A68_VC  JDABCTR;  /* avoid structure result */
A68_VC  KDABCTR;  /* avoid structure result */
A68_124  LDABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_123  MDABCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_260  NDABCTR;  /* collateral clause result */
A68_124  ODABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_124  RDABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  SDABCTR;  /* YIELD */
A68_123  TDABCTR;  /* OPERATORS - istruct -> vector */
A68_INT  UDABCTR_i A_UNUSED = {0};
A68_INT  VDABCTR;  /* to part of loop */
A68_VC  WDABCTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XDABCTR_rvc A_UNUSED = {0};
A68_260  YDABCTR;  /* collateral clause result */
A68_VC  BEABCTR;  /* avoid structure result */
A68_124  CEABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  DEABCTR;  /* YIELD */
A68_124  GEABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  HEABCTR;  /* YIELD */
A68_124  KEABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  LEABCTR;  /* YIELD */
A68_123  MEABCTR;  /* OPERATORS - istruct -> vector */
A68_INT  NEABCTR;  /* ADICOPS - MOD */
A68_INT  OEABCTR;  /* ADICOPS - MOD */
A68_260  PEABCTR;  /* collateral clause result */
A68_124  QEABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_124  TEABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  UEABCTR;  /* YIELD */
A68_123  VEABCTR;  /* OPERATORS - istruct -> vector */
A68_260  WEABCTR;  /* collateral clause result */
A68_124  XEABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_124  AFABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  BFABCTR;  /* YIELD */
A68_123  CFABCTR;  /* OPERATORS - istruct -> vector */
A68_260  DFABCTR;  /* collateral clause result */
A68_124  GFABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  HFABCTR;  /* YIELD */
A68_124  IFABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_123  JFABCTR;  /* OPERATORS - istruct -> vector */
A68_154  KFABCTR;  /* collateral clause result */
A68_158  LFABCTR;  /* collateral clause result */
A68_155  MFABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_159  NFABCTR_nilskiporempty A_UNUSED = {0};
A68_INT  OFABCTR;  /* clause result */
A68_INT  RFABCTR = {0};  /* OPERATORS - skip to mode */
A68_INT  SFABCTR_mode A_UNUSED = {0};
A68_154  TFABCTR;  /* collateral clause result */
A68_155  UFABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_BOOL  VFABCTR_bool A_UNUSED = {0};
A68_154  WFABCTR;  /* collateral clause result */
A68_155  ZFABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  AGABCTR;  /* YIELD */
A68_155  DGABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_VC  EGABCTR;  /* YIELD */
A68_190  FGABCTR_char A_UNUSED = {0};
A68_154  GGABCTR;  /* collateral clause result */
A68_VC  HGABCTR;  /* avoid structure result */
A68_155  IGABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_180  JGABCTR_alienx A_UNUSED = {0};
A68_154  KGABCTR;  /* avoid structure result */
A68_85  LGABCTR_label A_UNUSED = {0};
A68_INT  MGABCTR;  /* YIELD */
A68_127  NGABCTR_env A_UNUSED = {0};
A68_154  OGABCTR;  /* collateral clause result */
A68_BOOL  PGABCTR;  /* optbool result */
A68_155  QGABCTR = {0};  /* OPERATORS - mode -> union mode */
A68_154  TGABCTR = {0};  /* OPERATORS - skip to mode */
A_PROC_ENTRY(load);
 /* line 152: */
 /* line 153: */
SAABCTR = L ;
switch ( SAABCTR.mode )
{ 
case 2: /* INT */
TAABCTR_i = (SAABCTR.data.mode2);
 /* line 154: */
 /* line 155: */
 /* line 156: */
if (TAABCTR_i<HAAACTR_minidno)
{ 
UAABCTR = DLJACTR_skipvalue;
} 
else
{ 
 /* line 157: */
 /* line 158: */
if (TAABCTR_i<=IAAACTR_maxidno)
{ 
VAABCTR_idinfo = (&A_R1INDEX(WPKACTR_ids,TAABCTR_i));
 /* line 159: */
WAABCTR = (&(VAABCTR_idinfo->Flags)) ;
(void)((*WAABCTR) = (A68_BITS )((*(&(VAABCTR_idinfo->Flags)))|LQKACTR_idloadedflag));
 /* line 160: */
 /* line 161: */
XAABCTR.Mode = (*(&(VAABCTR_idinfo->Mode)));
{ 
YAABCTR_env = (*(&(VAABCTR_idinfo->Environ)));
 /* line 162: */
 /* line 164: */
ZAABCTR = (*(&(VAABCTR_idinfo->Flags))) ;
ABABCTR = A_LB_GE(ZAABCTR,HQKACTR_idoptimisedflag);
if ( ! ABABCTR )
{ABABCTR = PRLACTR_isgloballevel(YAABCTR_env);
}
 /* line 165: */
if ( ! ABABCTR )
{ABABCTR = MRLACTR_islocallevel(YAABCTR_env);
}
 /* line 166: */
if (ABABCTR)
{ 
XAABCTR.Info = PKJACTR_defaultinfo;
} 
else
{ 
(void)(ZYZACTR_checknonlocaldeclared(TAABCTR_i, YAABCTR_env.Level));
 /* line 167: */
 /* line 168: */
 /* line 169: */
 /* line 170: */
XAABCTR.Info = TKJACTR_nonloc;
} 
} 
{ 
CBABCTR = (&((&BBABCTR_id)->Idno)) ;
(*CBABCTR) = TAABCTR_i;
 /* line 171: */
 /* line 172: */
XAABCTR.Extra = A_UNITE(DBABCTR,mode4,4,BBABCTR_id);
} 
UAABCTR = XAABCTR;
} 
else
{ 
 /* line 173: */
 /* line 174: */
if (TAABCTR_i<=KAAACTR_maxrdno)
{ 
EBABCTR_rdinfo = (&A_R1INDEX(XPKACTR_rds,TAABCTR_i));
 /* line 175: */
FBABCTR = (&(EBABCTR_rdinfo->Flags)) ;
(void)((*FBABCTR) = (A68_BITS )((*(&(EBABCTR_rdinfo->Flags)))|TQKACTR_rdloadedflag));
 /* line 176: */
 /* line 177: */
GBABCTR.Mode = (*(&(EBABCTR_rdinfo->Mode)));
 /* line 178: */
HBABCTR = (*(&(EBABCTR_rdinfo->Flags))) ;
IBABCTR = A_LB_GE(HBABCTR,RQKACTR_rdglobalflag);
if ( ! IBABCTR )
{ /* line 179: */
IBABCTR = ((*(&(EBABCTR_rdinfo->Declevel)))==VRLACTR_currentlevel());
}
 /* line 180: */
if (IBABCTR)
{ 
GBABCTR.Info = PKJACTR_defaultinfo;
} 
else
{ 
(void)(ZYZACTR_checknonlocaldeclared(TAABCTR_i, (*(&(EBABCTR_rdinfo->Declevel)))));
 /* line 181: */
 /* line 182: */
 /* line 183: */
GBABCTR.Info = TKJACTR_nonloc;
} 
{ 
KBABCTR = (&((&JBABCTR_rd)->Rdenno)) ;
(*KBABCTR) = TAABCTR_i;
 /* line 184: */
 /* line 185: */
GBABCTR.Extra = A_UNITE(LBABCTR,mode2,2,JBABCTR_rd);
} 
UAABCTR = GBABCTR;
} 
else
{ 
 /* line 186: */
 /* line 187: */
if (TAABCTR_i<=MAAACTR_maxlibid)
{ 
MBABCTR_idinfo = (&A_R1INDEX(YPKACTR_libraryids,TAABCTR_i));
 /* line 188: */
NBABCTR = (&(MBABCTR_idinfo->Flags)) ;
(void)((*NBABCTR) = (A68_BITS )((*(&(MBABCTR_idinfo->Flags)))|LQKACTR_idloadedflag));
 /* line 189: */
 /* line 190: */
OBABCTR.Mode = (*(&(MBABCTR_idinfo->Mode)));
{ 
PBABCTR_env = (*(&(MBABCTR_idinfo->Environ)));
 /* line 191: */
 /* line 193: */
QBABCTR = (*(&(MBABCTR_idinfo->Flags))) ;
RBABCTR = A_LB_GE(QBABCTR,HQKACTR_idoptimisedflag);
if ( ! RBABCTR )
{RBABCTR = PRLACTR_isgloballevel(PBABCTR_env);
}
 /* line 194: */
if ( ! RBABCTR )
{RBABCTR = MRLACTR_islocallevel(PBABCTR_env);
}
 /* line 195: */
if (RBABCTR)
{ 
OBABCTR.Info = PKJACTR_defaultinfo;
} 
else
{ 
(void)(ZYZACTR_checknonlocaldeclared(TAABCTR_i, PBABCTR_env.Level));
 /* line 196: */
 /* line 197: */
 /* line 198: */
 /* line 199: */
OBABCTR.Info = TKJACTR_nonloc;
} 
} 
{ 
TBABCTR = (&((&SBABCTR_id)->Idno)) ;
(*TBABCTR) = TAABCTR_i;
 /* line 200: */
 /* line 201: */
OBABCTR.Extra = A_UNITE(UBABCTR,mode4,4,SBABCTR_id);
} 
UAABCTR = OBABCTR;
} 
else
{ 
 /* line 202: */
 /* line 203: */
if (TAABCTR_i<=TAAACTR_maxkeptgeneratorproc)
{ 
 /* line 204: */
 /* line 205: */
 /* line 206: */
 /* line 207: */
 /* line 208: */
WBABCTR = (TAABCTR_i-NAAACTR_keptgeneratorproccorrection) ;
VBABCTR.Mode = BTMACTR_derefmode(BTMACTR_derefmode((*(&((&A_R1INDEX(WPKACTR_ids,WBABCTR))->Mode)))));
 /* line 209: */
VBABCTR.Info = PKJACTR_defaultinfo;
{ 
YBABCTR = (&((&XBABCTR_id)->Idno)) ;
(*YBABCTR) = TAABCTR_i;
 /* line 210: */
 /* line 211: */
 /* line 212: */
VBABCTR.Extra = A_UNITE(ZBABCTR,mode4,4,XBABCTR_id);
} 
UAABCTR = VBABCTR;
} 
else
{ 
(void)(WXIACTR_assert(BCABCTR, A68_FALSE));
 /* line 213: */
 /* line 215: */
UAABCTR = CCABCTR;
} 
} 
} 
} 
} 
break;
case 6: /* STRUCT(INT,REF MODE26)  */
DCABCTR_number = (SAABCTR.data.mode6);
 /* line 216: */
ECABCTR.Mode = DCABCTR_number.Mode;
ECABCTR.Info = QKJACTR_constant;
 /* line 218: */
IOJACTR_translatedenotation( DCABCTR_number.Nu, &FCABCTR );
ECABCTR.Extra = A_UNITE(GCABCTR,mode6,6,FCABCTR);
UAABCTR = ECABCTR;
break;
case 8: /* STRUCT(INT,LONG BITS)  */
HCABCTR_numeric = (SAABCTR.data.mode8);
 /* line 219: */
ICABCTR.Mode = HCABCTR_numeric.Mode;
ICABCTR.Info = QKJACTR_constant;
 /* line 221: */
KCABCTR = HCABCTR_numeric.Denotation ;
ICABCTR.Extra = A_UNITE(JCABCTR,mode1,1,KCABCTR);
UAABCTR = ICABCTR;
break;
case 9: /* STRUCT(INT,REF MODE26)  */
LCABCTR_s = (SAABCTR.data.mode9);
 /* line 222: */
 /* line 223: */
{ 
MCABCTR_stream = KSLACTR_nonlocdecstream(0);
 /* line 224: */
NCABCTR_name = QIMACTR_newuniquename();
 /* line 225: */
OCABCTR_string = LCABCTR_s.Denotation;
 /* line 226: */
 /* line 227: */
TCABCTR = RCABCTR ;
PCABCTR.data[0] = A_UNITE(SCABCTR,mode2,2,TCABCTR);
XKNACTR_ctype( LCABCTR_s.Mode, &UCABCTR );
PCABCTR.data[1] = A_UNITE(VCABCTR,mode2,2,UCABCTR);
ZCABCTR = XCABCTR ;
PCABCTR.data[2] = A_UNITE(YCABCTR,mode2,2,ZCABCTR);
 /* line 228: */
CDABCTR = A_HISVEC(ADABCTR,NCABCTR_name,7,A68_CHAR ) ;
PCABCTR.data[3] = A_UNITE(BDABCTR,mode2,2,CDABCTR);
GDABCTR = EDABCTR ;
PCABCTR.data[4] = A_UNITE(FDABCTR,mode2,2,GDABCTR);
 /* line 229: */
(void)(MDMACTR_writecstream(A_HISVEC(HDABCTR,PCABCTR,5,A68_124 ), KSLACTR_nonlocdecstream(0)));
 /* line 230: */
 /* line 231: */
 /* line 232: */
if (OCABCTR_string.upb<256)
{ 
 /* line 234: */
 /* line 235: */
DRJACTR_replacecontrolchars( OCABCTR_string, &IDABCTR );
LJAACTR_doublequote( IDABCTR, &JDABCTR );
VJAACTR_curly( JDABCTR, &KDABCTR );
(void)(MDMACTR_writecstream(A_HVEC(MDABCTR,A_UNITE(LDABCTR,mode2,2,KDABCTR),A68_124 ), MCABCTR_stream));
} 
else
{ 
NDABCTR.data[0] = A_UNITE(ODABCTR,mode4,4,EIAACTR_cnewline);
SDABCTR = QDABCTR ;
NDABCTR.data[1] = A_UNITE(RDABCTR,mode2,2,SDABCTR);
(void)(MDMACTR_writecstream(A_HISVEC(TDABCTR,NDABCTR,2,A68_124 ), MCABCTR_stream));
 /* line 236: */
 /* line 237: */
VDABCTR = OCABCTR_string.upb;
for ( UDABCTR_i = 1;
UDABCTR_i <= VDABCTR;
UDABCTR_i += 1 )
{ 
XDABCTR_rvc = A_VEC(WDABCTR,(&A_VINDEX(OCABCTR_string,UDABCTR_i)),A68_CHAR *);
 /* line 238: */
 /* line 239: */
 /* line 240: */
DRJACTR_replacecontrolchars( XDABCTR_rvc, &BEABCTR );
DEABCTR = A_VC_PLUS(AEABCTR,BEABCTR) ;
YDABCTR.data[0] = A_UNITE(CEABCTR,mode2,2,DEABCTR);
if (UDABCTR_i==OCABCTR_string.upb)
{ 
HEABCTR = FEABCTR ;
YDABCTR.data[1] = A_UNITE(GEABCTR,mode2,2,HEABCTR);
} 
else
{ 
 /* line 241: */
LEABCTR = JEABCTR ;
YDABCTR.data[1] = A_UNITE(KEABCTR,mode2,2,LEABCTR);
} 
 /* line 242: */
(void)(MDMACTR_writecstream(A_HISVEC(MEABCTR,YDABCTR,2,A68_124 ), MCABCTR_stream));
 /* line 243: */
 /* line 244: */
OEABCTR = 8 ;
if (A_MOD(UDABCTR_i,OEABCTR,NEABCTR)==0)
{ 
PEABCTR.data[0] = A_UNITE(QEABCTR,mode4,4,EIAACTR_cnewline);
UEABCTR = SEABCTR ;
PEABCTR.data[1] = A_UNITE(TEABCTR,mode2,2,UEABCTR);
 /* line 245: */
 /* line 246: */
(void)(MDMACTR_writecstream(A_HISVEC(VEABCTR,PEABCTR,2,A68_124 ), MCABCTR_stream));
} 
}
 /* line 247: */
WEABCTR.data[0] = A_UNITE(XEABCTR,mode4,4,EIAACTR_cnewline);
BFABCTR = ZEABCTR ;
WEABCTR.data[1] = A_UNITE(AFABCTR,mode2,2,BFABCTR);
 /* line 248: */
(void)(MDMACTR_writecstream(A_HISVEC(CFABCTR,WEABCTR,2,A68_124 ), MCABCTR_stream));
} 
 /* line 249: */
HFABCTR = FFABCTR ;
DFABCTR.data[0] = A_UNITE(GFABCTR,mode2,2,HFABCTR);
DFABCTR.data[1] = A_UNITE(IFABCTR,mode4,4,EIAACTR_cnewline);
(void)(MDMACTR_writecstream(A_HISVEC(JFABCTR,DFABCTR,2,A68_124 ), MCABCTR_stream));
 /* line 250: */
KFABCTR.Mode = LCABCTR_s.Mode;
KFABCTR.Info = QKJACTR_constant;
LFABCTR.Name = NCABCTR_name;
LFABCTR.Mode = LCABCTR_s.Mode;
 /* line 251: */
 /* line 253: */
KFABCTR.Extra = A_UNITE(MFABCTR,mode5,5,LFABCTR);
UAABCTR = KFABCTR;
} 
break;
case 1: /* STRUCT(INT)  */
NFABCTR_nilskiporempty = (SAABCTR.data.mode1);
 /* line 254: */
 /* line 256: */
{ 
 /* line 257: */
switch ( NFABCTR_nilskiporempty.Nse )
{ 
case 1: 
OFABCTR = UEAACTR_voidmode;
break;
case 2: 
 /* line 258: */
OFABCTR = REAACTR_skipmode;
break;
case 3: 
OFABCTR = SEAACTR_nilmode;
break;
default: 
(void)(WXIACTR_assert(QFABCTR, A68_FALSE));
 /* line 259: */
OFABCTR = RFABCTR;
break;
} 
SFABCTR_mode = OFABCTR;
 /* line 260: */
 /* line 261: */
 /* line 262: */
TFABCTR.Mode = SFABCTR_mode;
if (SFABCTR_mode==SEAACTR_nilmode)
{ 
TFABCTR.Info = (A68_BITS )(QKJACTR_constant|WKJACTR_isnil);
} 
else
{ 
 /* line 263: */
TFABCTR.Info = PKJACTR_defaultinfo;
} 
 /* line 264: */
 /* line 265: */
TFABCTR.Extra = A_UNITE(UFABCTR,mode8,8,NFABCTR_nilskiporempty);
 /* line 267: */
UAABCTR = TFABCTR;
} 
break;
case 3: /* BOOL */
VFABCTR_bool = (SAABCTR.data.mode3);
 /* line 268: */
WFABCTR.Mode = WEAACTR_boolmode;
WFABCTR.Info = QKJACTR_constant;
if (VFABCTR_bool)
{ 
AGABCTR = YFABCTR ;
WFABCTR.Extra = A_UNITE(ZFABCTR,mode6,6,AGABCTR);
} 
else
{ 
 /* line 270: */
EGABCTR = CGABCTR ;
WFABCTR.Extra = A_UNITE(DGABCTR,mode6,6,EGABCTR);
} 
UAABCTR = WFABCTR;
break;
case 4: /* STRUCT(REF MODE26)  */
FGABCTR_char = (SAABCTR.data.mode4);
 /* line 271: */
GGABCTR.Mode = XEAACTR_charmode;
GGABCTR.Info = QKJACTR_constant;
 /* line 273: */
QJAACTR_singlequote( FGABCTR_char.Representation, &HGABCTR );
GGABCTR.Extra = A_UNITE(IGABCTR,mode6,6,HGABCTR);
UAABCTR = GGABCTR;
break;
case 7: /* STRUCT(INT,REF MODE26)  */
JGABCTR_alienx = (SAABCTR.data.mode7);
 /* line 275: */
EZZACTR_alien( JGABCTR_alienx, &KGABCTR );
UAABCTR = KGABCTR;
break;
case 5: /* STRUCT(INT)  */
LGABCTR_label = (SAABCTR.data.mode5);
 /* line 276: */
 /* line 277: */
{ 
MGABCTR = LGABCTR_label.Labno ;
NGABCTR_env = (*(&((&A_R1INDEX(ZPKACTR_labels,MGABCTR))->Environ)));
 /* line 278: */
 /* line 279: */
if (NGABCTR_env.Level!=VRLACTR_currentlevel())
{ 
 /* line 280: */
(void)(NBWACTR_declarenonlocallabel(LGABCTR_label.Labno));
} 
 /* line 282: */
 /* line 283: */
 /* line 284: */
OGABCTR.Mode = TEAACTR_gotomode;
 /* line 285: */
PGABCTR = PRLACTR_isgloballevel(NGABCTR_env);
if ( ! PGABCTR )
{PGABCTR = MRLACTR_islocallevel(NGABCTR_env);
}
 /* line 286: */
if (PGABCTR)
{ 
OGABCTR.Info = PKJACTR_defaultinfo;
} 
else
{ 
(void)(ZYZACTR_checknonlocaldeclared((LGABCTR_label.Labno+OAAACTR_minlab), NGABCTR_env.Level));
 /* line 287: */
 /* line 288: */
 /* line 290: */
OGABCTR.Info = TKJACTR_nonloc;
} 
 /* line 291: */
OGABCTR.Extra = A_UNITE(QGABCTR,mode7,7,LGABCTR_label);
 /* line 292: */
UAABCTR = OGABCTR;
} 
break;
default: 
(void)(WXIACTR_assert(SGABCTR, A68_FALSE));
 /* line 293: */
UAABCTR = TGABCTR;
break;
} 
A_PROC_EXIT(load);
*ReturnedValue = (UAABCTR);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 5: */
 /* line 7: */
void SYZACTR(void)   /* initialise DECS loads */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel","-dir",".","loads.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/vak/Project/Algol/Algol-68RS-Source/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/vak/Project/Algol/Algol-68RS-Source/a68config/a68config.m","./tracer.m","./values.m","./uniquenameserver.m","./modes.m","./incoperfn.m","./incmode.m","./incimperatives.m","./idtable.m","./incid.m","./identifiers.m","./denotations.m","./environment.m","./environ.m","./coutput.m","./common.m","./centities.m","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel/osif.m",""};
static A_CONFIG_INFO A_config A_UNUSED;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
QWYACTR();   /* USE tracer */
OUPACTR();   /* USE values */
RHMACTR();   /* USE uniquenameserver */
DNMACTR();   /* USE modes */
XFAACTR();   /* USE incoperfn */
ZDAACTR();   /* USE incmode */
UAAACTR();   /* USE incimperatives */
PPKACTR();   /* USE idtable */
BAAACTR();   /* USE incid */
MMVACTR();   /* USE identifiers */
LLJACTR();   /* USE denotations */
HPIACTR();   /* USE environment */
BPLACTR();   /* USE environ */
PTLACTR();   /* USE coutput */
THAACTR();   /* USE centities */
CSCAOSF();   /* USE osif */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/loads.a68";
A_config.translation_time = "Thu Nov  5 21:11:00 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "RYZACTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 21:11:00 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS loads);
(void)(UEAALIB_a68config(LGAALIB_configinfo, WYZACTR));
 /* line 47: */
 /* line 71: */
 /* line 148: */
 /* line 295: */
 /* line 297: */
 /* line 299: */
/*SKIP*/;
A_PROC_EXIT(DECS loads);
} 
#undef NL
/* end of translation of loads.a68 */
