/* UNAME:HXWACTR */
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
struct A68t54{
A68_INT  Mode;
A_PAD_INT(PAD_1)
A68_VC  String;
};
typedef struct A68t54  A68_54 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t55{
A68_INT  I;
A_PAD_INT(PAD_2)
};
typedef struct A68t55  A68_55 ;    /* STRUCT(INT)  */
A_ROW(A68_INT ,A68t57,1);
typedef struct A68t57  A68_57 ;    /* [] INT */
struct A68t56{
A68_INT  Body;
A_PAD_INT(PAD_3)
A68_INT  Moduleno;
A_PAD_INT(PAD_4)
struct A68t57  Actuals;
};
typedef struct A68t56  A68_56 ;    /* STRUCT(INT,INT,REF MODE57)  */
struct A68t58{
A68_INT  Mode;
A_PAD_INT(PAD_5)
A68_INT  Number;
A_PAD_INT(PAD_6)
A68_VC  Insert;
};
typedef struct A68t58  A68_58 ;    /* STRUCT(INT,INT,REF MODE26)  */
struct A68t60{
A68_INT  Moduleno;
A_PAD_INT(PAD_7)
A68_INT  I;
A_PAD_INT(PAD_8)
A68_INT  J;
A_PAD_INT(PAD_9)
};
typedef struct A68t60  A68_60 ;    /* STRUCT(INT,INT,INT)  */
A_ROW(A68_VC ,A68t62,1);
typedef struct A68t62  A68_62 ;    /* [] REF MODE26 */
struct A68t61{
A68_INT  Moduleno;
A_PAD_INT(PAD_10)
A68_VC  Name;
A68_VC  Uname;
A68_VC  Lname;
A68_VC  Gname;
struct A68t62  Ysnames;
};
typedef struct A68t61  A68_61 ;    /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE62)  */
struct A68t59 { A68_INT mode; union {
struct A68t56  mode1;
struct A68t60  mode2;
struct A68t61  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t59  A68_59 ;    /* UNION(MODE56,MODE60,MODE61)  */
struct A68t64{
A68_INT  Nochars;
A_PAD_INT(PAD_11)
A68_INT  Nocases;
A_PAD_INT(PAD_12)
A68_INT  W;
A_PAD_INT(PAD_13)
};
typedef struct A68t64  A68_64 ;    /* STRUCT(INT,INT,INT)  */
struct A68t63{
struct A68t64  Info;
A68_VC  Text;
};
typedef struct A68t63  A68_63 ;    /* STRUCT(MODE64,REF MODE26)  */
struct A68t65{
A68_INT  Type;
A_PAD_INT(PAD_14)
A68_VC  Name;
A68_INT  Mode;
A_PAD_INT(PAD_15)
A68_INT  Decno;
A_PAD_INT(PAD_16)
};
typedef struct A68t65  A68_65 ;    /* STRUCT(INT,REF MODE26,INT,INT)  */
struct A68t66{
A68_VC  Representation;
};
typedef struct A68t66  A68_66 ;    /* STRUCT(REF MODE26)  */
struct A68t68{
A68_INT  Nse;
A_PAD_INT(PAD_17)
};
typedef struct A68t68  A68_68 ;    /* STRUCT(INT)  */
struct A68t69{
A68_INT  Labno;
A_PAD_INT(PAD_18)
};
typedef struct A68t69  A68_69 ;    /* STRUCT(INT)  */
struct A68t70{
A68_INT  Mode;
A_PAD_INT(PAD_19)
A68_VC  Nu;
};
typedef struct A68t70  A68_70 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t71{
A68_INT  Mode;
A_PAD_INT(PAD_20)
A68_LBITS  Denotation;
A_PAD_LBITS(PAD_21)
};
typedef struct A68t71  A68_71 ;    /* STRUCT(INT,LONG BITS)  */
struct A68t72{
A68_INT  Mode;
A_PAD_INT(PAD_22)
A68_VC  Denotation;
};
typedef struct A68t72  A68_72 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t73{
A68_INT  Fn;
A_PAD_INT(PAD_23)
A68_INT  Mode;
A_PAD_INT(PAD_24)
A68_INT  Param;
A_PAD_INT(PAD_25)
};
typedef struct A68t73  A68_73 ;    /* STRUCT(INT,INT,INT)  */
struct A68t74{
A68_VC  Name;
A68_BITS  Props;
A_PAD_BITS(PAD_26)
A68_INT  Mode;
A_PAD_INT(PAD_27)
A68_INT  Rdenno;
A_PAD_INT(PAD_28)
A68_INT  Maxname;
A_PAD_INT(PAD_29)
};
typedef struct A68t74  A68_74 ;    /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
struct A68t75{
A68_INT  W;
A_PAD_INT(PAD_30)
};
typedef struct A68t75  A68_75 ;    /* STRUCT(INT)  */
struct A68t76{
A68_VC  Name;
A68_INT  Labno;
A_PAD_INT(PAD_31)
A68_INT  Status;
A_PAD_INT(PAD_32)
A68_BOOL  Notsetting;
A_PAD_BOOL(PAD_33)
};
typedef struct A68t76  A68_76 ;    /* STRUCT(REF MODE26,INT,INT,BOOL)  */
struct A68t77{
A68_INT  Mode;
A_PAD_INT(PAD_34)
A68_BITS  Props;
A_PAD_BITS(PAD_35)
A68_INT  Param;
A_PAD_INT(PAD_36)
};
typedef struct A68t77  A68_77 ;    /* STRUCT(INT,BITS,INT)  */
struct A68t78{
A68_BOOL  Start;
A_PAD_BOOL(PAD_37)
};
typedef struct A68t78  A68_78 ;    /* STRUCT(BOOL)  */
struct A68t79{
A68_INT  Fn;
A_PAD_INT(PAD_38)
A68_INT  Mode;
A_PAD_INT(PAD_39)
A68_BITS  Props;
A_PAD_BITS(PAD_40)
A68_INT  Param;
A_PAD_INT(PAD_41)
};
typedef struct A68t79  A68_79 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t80{
A68_INT  Fn;
A_PAD_INT(PAD_42)
A68_INT  Mode;
A_PAD_INT(PAD_43)
A68_BITS  Props;
A_PAD_BITS(PAD_44)
A68_INT  Resultmode;
A_PAD_INT(PAD_45)
};
typedef struct A68t80  A68_80 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t81{
A68_INT  Fn;
A_PAD_INT(PAD_46)
A68_BITS  Props;
A_PAD_BITS(PAD_47)
};
typedef struct A68t81  A68_81 ;    /* STRUCT(INT,BITS)  */
struct A68t67 { A68_INT mode; union {
struct A68t68  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t66  mode4;
struct A68t69  mode5;
struct A68t70  mode6;
struct A68t54  mode7;
struct A68t71  mode8;
struct A68t72  mode9;
struct A68t73  mode10;
struct A68t65  mode11;
struct A68t74  mode12;
struct A68t75  mode13;
struct A68t76  mode14;
struct A68t77  mode15;
struct A68t55  mode16;
struct A68t78  mode17;
struct A68t63  mode18;
struct A68t58  mode19;
struct A68t79  mode20;
struct A68t80  mode21;
struct A68t81  mode22;
struct A68t56  mode23;
struct A68t60  mode24;
struct A68t61  mode25;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t67  A68_67 ;    /* UNION(MODE68,INT,BOOL,MODE66,MODE69,MODE70,MODE54,MODE71,MODE72,MODE73,MODE65,MODE74,MODE75,MODE76,MODE77,MODE55,MODE78,MODE63,MODE58,MODE79,MODE80,MODE81,MODE56,MODE60,MODE61,VOID)  */
struct A68t82 { A68_INT mode; union {
struct A68t68  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t66  mode4;
struct A68t69  mode5;
struct A68t70  mode6;
struct A68t54  mode7;
struct A68t71  mode8;
struct A68t72  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t82  A68_82 ;    /* UNION(MODE68,INT,BOOL,MODE66,MODE69,MODE70,MODE54,MODE71,MODE72)  */
struct A68t83 { A68_INT mode; union {
struct A68t68  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t66  mode4;
struct A68t69  mode5;
struct A68t70  mode6;
struct A68t54  mode7;
struct A68t71  mode8;
struct A68t72  mode9;
struct A68t73  mode10;
struct A68t65  mode11;
struct A68t74  mode12;
struct A68t75  mode13;
struct A68t76  mode14;
struct A68t77  mode15;
struct A68t55  mode16;
struct A68t78  mode17;
struct A68t63  mode18;
struct A68t58  mode19;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t83  A68_83 ;    /* UNION(MODE68,INT,BOOL,MODE66,MODE69,MODE70,MODE54,MODE71,MODE72,MODE73,MODE65,MODE74,MODE75,MODE76,MODE77,MODE55,MODE78,MODE63,MODE58)  */

A_PROCEDURE(A68_VOID ,A68t84,(A68_INT ),(A68_INT ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(INT) VOID */
struct A68t86 ;

A_PROCEDURE(A68_VOID ,A68t85,(struct A68t65 ,struct A68t86 *,A68_INT ),(struct A68t65 ,struct A68t86 *,A68_INT ,void *));
typedef struct A68t85  A68_85 ;    /* PROC(MODE65,REF MODE86,INT) VOID */
struct A68t88{
A68_INT  Rdenno;
A_PAD_INT(PAD_48)
};
typedef struct A68t88  A68_88 ;    /* STRUCT(INT)  */
struct A68t89{
A68_INT  Idno;
A_PAD_INT(PAD_49)
};
typedef struct A68t89  A68_89 ;    /* STRUCT(INT)  */
A_ISTRUCT(A68_CHAR ,7,A68t93);
typedef struct A68t93  A68_93 ;    /* STRUCT 7 CHAR */
struct A68t90{
struct A68t93  Name;
A_PAD_ISTRUCT(A68_93 ,PAD_50)
A68_INT  Mode;
A_PAD_INT(PAD_51)
};
typedef struct A68t90  A68_90 ;    /* STRUCT(MODE93,INT)  */
struct A68t91{
A68_INT  Fn;
A_PAD_INT(PAD_52)
A68_INT  Param;
A_PAD_INT(PAD_53)
struct A68t92 * Operands;
};
typedef struct A68t91  A68_91 ;    /* STRUCT(INT,INT,REF MODE92)  */
struct A68t87 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t88  mode2;
struct A68t89  mode4;
struct A68t90  mode5;
A68_VC  mode6;
struct A68t69  mode7;
struct A68t68  mode8;
struct A68t91  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t87  A68_87 ;    /* UNION(LONG BITS,MODE88,VOID,MODE89,MODE90,MODE26,MODE69,MODE68,MODE91)  */
struct A68t86{
A68_INT  Mode;
A_PAD_INT(PAD_54)
A68_BITS  Info;
A_PAD_BITS(PAD_55)
struct A68t87  Extra;
};
typedef struct A68t86  A68_86 ;    /* STRUCT(INT,BITS,MODE87)  */
struct A68t92{
struct A68t86  Value;
struct A68t92 * Rest;
};
typedef struct A68t92  A68_92 ;    /* STRUCT(MODE86,REF MODE92)  */

A_PROCEDURE(A68_VOID ,A68t94,(void),(void *));
typedef struct A68t94  A68_94 ;    /* PROC VOID */
struct A68t96 ;

A_PROCEDURE(A68_VOID ,A68t95,(A68_INT ,struct A68t96 *),(A68_INT ,struct A68t96 *,void *));
typedef struct A68t95  A68_95 ;    /* PROC(INT) MODE96 */
struct A68t96{
A68_INT  Level;
A_PAD_INT(PAD_56)
A68_INT  Block;
A_PAD_INT(PAD_57)
};
typedef struct A68t96  A68_96 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t97,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t98,(A68_VC ,struct A68t93 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t93 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t98  A68_98 ;    /* PROC(REF MODE26,MODE93,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t99,(struct A68t65 ,struct A68t92 **),(struct A68t65 ,struct A68t92 **,void *));
typedef struct A68t99  A68_99 ;    /* PROC(MODE65,REF REF MODE92) VOID */
A_ROW(struct A68t101 ,A68t100,1);
typedef struct A68t100  A68_100 ;    /* [] MODE101 */
struct A68t101{
A68_INT  Mode;
A_PAD_INT(PAD_58)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_59)
struct A68t96  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t93  Prefix;
A_PAD_ISTRUCT(A68_93 ,PAD_60)
A68_BITS  Flags;
A_PAD_BITS(PAD_61)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t101  A68_101 ;    /* STRUCT(INT,INT,MODE96,REF MODE26,REF MODE26,MODE93,BITS,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t102,(struct A68t65 ),(struct A68t65 ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(MODE65) VOID */

A_PROCEDURE(A68_VOID ,A68t103,(struct A68t76 ),(struct A68t76 ,void *));
typedef struct A68t103  A68_103 ;    /* PROC(MODE76) VOID */

A_PROCEDURE(A68_INT ,A68t104,(A68_INT ),(A68_INT ,void *));
typedef struct A68t104  A68_104 ;    /* PROC(INT) INT */
struct A68t106 ;

A_PROCEDURE(A68_VOID ,A68t105,(A68_VC ,A68_INT ,struct A68t106 ,A68_INT ,A68_INT ,struct A68t96 ,A68_BITS ),(A68_VC ,A68_INT ,struct A68t106 ,A68_INT ,A68_INT ,struct A68t96 ,A68_BITS ,void *));
typedef struct A68t105  A68_105 ;    /* PROC(REF MODE26,INT,REF MODE106,INT,INT,MODE96,BITS) VOID */
A_VECTOR(A68_INT ,A68t106);
typedef struct A68t106  A68_106 ;    /* VECTOR [] INT */
A_ROW(struct A68t108 ,A68t107,1);
typedef struct A68t107  A68_107 ;    /* [] MODE108 */
struct A68t108{
A68_INT  Mode;
A_PAD_INT(PAD_62)
A68_INT  Resultmode;
A_PAD_INT(PAD_63)
A68_INT  Declevel;
A_PAD_INT(PAD_64)
struct A68t96  Environ;
A68_VC  Name;
struct A68t93  Prefix;
A_PAD_ISTRUCT(A68_93 ,PAD_65)
struct A68t93  Fnprefix;
A_PAD_ISTRUCT(A68_93 ,PAD_66)
struct A68t93  Envprefix;
A_PAD_ISTRUCT(A68_93 ,PAD_67)
A68_BITS  Flags;
A_PAD_BITS(PAD_68)
};
typedef struct A68t108  A68_108 ;    /* STRUCT(INT,INT,INT,MODE96,REF MODE26,MODE93,MODE93,MODE93,BITS)  */

A_PROCEDURE(A68_VOID ,A68t109,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t109  A68_109 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t110,(struct A68t94 ),(struct A68t94 ,void *));
typedef struct A68t110  A68_110 ;    /* PROC(MODE94) VOID */

A_PROCEDURE(A68_VOID ,A68t111,(A68_VC ),(A68_VC ,void *));
typedef struct A68t111  A68_111 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t112,(struct A68t111 ),(struct A68t111 ,void *));
typedef struct A68t112  A68_112 ;    /* PROC(MODE111) VOID */

A_PROCEDURE(A68_VOID ,A68t113,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t113  A68_113 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,59,A68t114);
typedef struct A68t114  A68_114 ;    /* STRUCT 59 CHAR */
struct A68t115{
A68_VC  Name;
A68_BITS  Value;
A_PAD_BITS(PAD_69)
};
typedef struct A68t115  A68_115 ;    /* STRUCT(MODE26,BITS)  */

A_PROCEDURE(A68_VOID ,A68t116,(A68_BOOL ,struct A68t115 *),(A68_BOOL ,struct A68t115 *,void *));
typedef struct A68t116  A68_116 ;    /* PROC(BOOL) MODE115 */
#define A68_117  A68_VC 
#define A68t117 A68t26            /* FLEX VECTOR [] CHAR */
#define A68_118  A68_115 
#define A68t118 A68t115            /* STRUCT(MODE117,BITS)  */
A_ROW(struct A68t115 ,A68t119,1);
typedef struct A68t119  A68_119 ;    /* [] MODE115 */
A_ISTRUCT(A68_CHAR ,3,A68t120);
typedef struct A68t120  A68_120 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t121);
typedef struct A68t121  A68_121 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t122);
typedef struct A68t122  A68_122 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t123);
typedef struct A68t123  A68_123 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(struct A68t115 ,16,A68t124);
typedef struct A68t124  A68_124 ;    /* STRUCT 16 MODE115 */
A_ISTRUCT(A68_CHAR ,2,A68t125);
typedef struct A68t125  A68_125 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t126);
typedef struct A68t126  A68_126 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(struct A68t115 ,6,A68t127);
typedef struct A68t127  A68_127 ;    /* STRUCT 6 MODE115 */

A_PROCEDURE(A68_VOID ,A68t128,(A68_BITS ,A68_BOOL ,A68_VC *),(A68_BITS ,A68_BOOL ,A68_VC *,void *));
typedef struct A68t128  A68_128 ;    /* PROC(BITS,BOOL) MODE26 */
A_ISTRUCT(A68_CHAR ,1,A68t129);
typedef struct A68t129  A68_129 ;    /* STRUCT 0 CHAR */

A_PROCEDURE(A68_VOID ,A68t130,(struct A68t67 ,A68_VC *),(struct A68t67 ,A68_VC *,void *));
typedef struct A68t130  A68_130 ;    /* PROC(MODE67) MODE26 */
A_ISTRUCT(A68_CHAR ,27,A68t131);
typedef struct A68t131  A68_131 ;    /* STRUCT 27 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t132);
typedef struct A68t132  A68_132 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t133);
typedef struct A68t133  A68_133 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_CHAR ,29,A68t134);
typedef struct A68t134  A68_134 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t135);
typedef struct A68t135  A68_135 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t136);
typedef struct A68t136  A68_136 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t137);
typedef struct A68t137  A68_137 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t138);
typedef struct A68t138  A68_138 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t139);
typedef struct A68t139  A68_139 ;    /* STRUCT 30 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t140);
typedef struct A68t140  A68_140 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t141);
typedef struct A68t141  A68_141 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t142);
typedef struct A68t142  A68_142 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t143);
typedef struct A68t143  A68_143 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t144);
typedef struct A68t144  A68_144 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,25,A68t145);
typedef struct A68t145  A68_145 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t146);
typedef struct A68t146  A68_146 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,34,A68t147);
typedef struct A68t147  A68_147 ;    /* STRUCT 34 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t148);
typedef struct A68t148  A68_148 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t149);
typedef struct A68t149  A68_149 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,37,A68t150);
typedef struct A68t150  A68_150 ;    /* STRUCT 37 CHAR */
A_ISTRUCT(A68_CHAR ,35,A68t151);
typedef struct A68t151  A68_151 ;    /* STRUCT 35 CHAR */
A_ISTRUCT(A68_CHAR ,28,A68t152);
typedef struct A68t152  A68_152 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(A68_CHAR ,41,A68t153);
typedef struct A68t153  A68_153 ;    /* STRUCT 41 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t154);
typedef struct A68t154  A68_154 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,36,A68t155);
typedef struct A68t155  A68_155 ;    /* STRUCT 36 CHAR */
A_ISTRUCT(A68_CHAR ,33,A68t156);
typedef struct A68t156  A68_156 ;    /* STRUCT 33 CHAR */
A_ISTRUCT(A68_CHAR ,32,A68t157);
typedef struct A68t157  A68_157 ;    /* STRUCT 32 CHAR */
A_ISTRUCT(A68_CHAR ,38,A68t158);
typedef struct A68t158  A68_158 ;    /* STRUCT 38 CHAR */
A_ISTRUCT(A68_CHAR ,26,A68t159);
typedef struct A68t159  A68_159 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,17,A68t160);
typedef struct A68t160  A68_160 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,54,A68t161);
typedef struct A68t161  A68_161 ;    /* STRUCT 54 CHAR */
A_ISTRUCT(A68_CHAR ,47,A68t162);
typedef struct A68t162  A68_162 ;    /* STRUCT 47 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from identifiers --- */
extern A68_VOID  UTKACTR_idfullname(A68_INT ,A68_VC *);
extern A68_VOID  WCNACTR_modename(A68_INT ,A68_VC *);
/* --- End of imports from identifiers --- */


/* --- Imports from incimperatives --- */
#define NCAACTR_ccbit 002U
#define YCAACTR_compgenbit 0000400U
#define WCAACTR_decbit 0000100U
#define BDAACTR_dontpullbit 0004000U
#define EDAACTR_dydecbit 0040000U
#define CDAACTR_dyprocbit 0010000U
#define DDAACTR_dyvardecbit 0020000U
#define ZCAACTR_elifousebit 0001000U
#define TCAACTR_exitbit 0000010U
#define FDAACTR_genprocbit 0100000U
#define RCAACTR_globscopebit 040U
#define VCAACTR_heapbit 0000040U
#define QCAACTR_holebit 020U
#define ADAACTR_labbit 0002000U
#define GDAACTR_locgenbit 0200000U
#define HDAACTR_locdydecbit 0400000U
#define OCAACTR_operatorbit 004U
#define SCAACTR_priobit 0000040U
#define UCAACTR_semibit 0000020U
#define PCAACTR_valbit 010U
#define XCAACTR_vardecbit 0000200U
/* --- End of imports from incimperatives --- */


/* --- Imports from usefulops --- */
extern A68_VOID  ROAAOSF_whole(A68_INT ,A68_INT ,A68_VC *);
extern A68_VOID  JPAAOSF_lwhole(A68_LINT ,A68_INT ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void OLVACTR(void);   /* identifiers */
extern void UAAACTR(void);   /* incimperatives */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_114   LXWACTR = {"$Id: mnemonics.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,MXWACTR,LXWACTR,59)
static A68_116  NXWACTR_anonymous;
static A68_40   AYWACTR = {"prio"}; 
A_GISVEC(A68_VC ,BYWACTR,AYWACTR,4)
static A68_40   CYWACTR = {"exit"}; 
A_GISVEC(A68_VC ,DYWACTR,CYWACTR,4)
static A68_40   EYWACTR = {"semi"}; 
A_GISVEC(A68_VC ,FYWACTR,EYWACTR,4)
static A68_40   GYWACTR = {"heap"}; 
A_GISVEC(A68_VC ,HYWACTR,GYWACTR,4)
static A68_120   IYWACTR = {"dec"}; 
A_GISVEC(A68_VC ,JYWACTR,IYWACTR,3)
static A68_121   KYWACTR = {"vardec"}; 
A_GISVEC(A68_VC ,LYWACTR,KYWACTR,6)
static A68_93   MYWACTR = {"compgen"}; 
A_GISVEC(A68_VC ,NYWACTR,MYWACTR,7)
static A68_122   OYWACTR = {"elifouse"}; 
A_GISVEC(A68_VC ,PYWACTR,OYWACTR,8)
static A68_120   QYWACTR = {"lab"}; 
A_GISVEC(A68_VC ,RYWACTR,QYWACTR,3)
static A68_122   SYWACTR = {"dontpull"}; 
A_GISVEC(A68_VC ,TYWACTR,SYWACTR,8)
static A68_121   UYWACTR = {"dyproc"}; 
A_GISVEC(A68_VC ,VYWACTR,UYWACTR,6)
static A68_122   WYWACTR = {"dyvardec"}; 
A_GISVEC(A68_VC ,XYWACTR,WYWACTR,8)
static A68_123   YYWACTR = {"dydec"}; 
A_GISVEC(A68_VC ,ZYWACTR,YYWACTR,5)
static A68_93   AZWACTR = {"genproc"}; 
A_GISVEC(A68_VC ,BZWACTR,AZWACTR,7)
static A68_121   CZWACTR = {"locgen"}; 
A_GISVEC(A68_VC ,DZWACTR,CZWACTR,6)
static A68_122   EZWACTR = {"locdydec"}; 
A_GISVEC(A68_VC ,FZWACTR,EZWACTR,8)
static A68_119  HZWACTR_controlbits;
static A68_125   JZWACTR = {"cc"}; 
A_GISVEC(A68_VC ,KZWACTR,JZWACTR,2)
static A68_122   LZWACTR = {"operator"}; 
A_GISVEC(A68_VC ,MZWACTR,LZWACTR,8)
static A68_120   NZWACTR = {"val"}; 
A_GISVEC(A68_VC ,OZWACTR,NZWACTR,3)
static A68_40   PZWACTR = {"hole"}; 
A_GISVEC(A68_VC ,QZWACTR,PZWACTR,4)
static A68_93   RZWACTR = {"genproc"}; 
A_GISVEC(A68_VC ,SZWACTR,RZWACTR,7)
static A68_126   TZWACTR = {"globscope"}; 
A_GISVEC(A68_VC ,UZWACTR,TZWACTR,9)
static A68_119  WZWACTR_routinebits;
static A68_BITS  XZWACTR_maskgeneral;
static A68_BITS  YZWACTR_maskdynamica;
#define ZZWACTR_maskdynamicb BDAACTR_dontpullbit
static A68_BITS  AAXACTR_maskdynamicc;
static A68_BITS  BAXACTR_maskroutine;
#define CAXACTR_maskspecial ZCAACTR_elifousebit
static A68_BITS  DAXACTR_maskxroutine;
#define EAXACTR_fieldlength 0
static A68_129   QAXACTR = {""}; 
A_GISVEC(A68_VC ,RAXACTR,QAXACTR,0)
static A68_129   ABXACTR = {""}; 
A_GISVEC(A68_VC ,BBXACTR,ABXACTR,0)
static A68_129   CBXACTR = {""}; 
A_GISVEC(A68_VC ,EBXACTR,CBXACTR,0)
static A68_126   FBXACTR = {" | bits ("}; 
A_GISVEC(A68_VC ,GBXACTR,FBXACTR,9)
static A68_131   RBXACTR = {"load:nse                  ("}; 
static A68_122   SBXACTR = {"EMPTY fn"}; 
A_GISVEC(A68_VC ,UBXACTR,SBXACTR,8)
static A68_93   VBXACTR = {"SKIP fn"}; 
A_GISVEC(A68_VC ,WBXACTR,VBXACTR,7)
static A68_121   XBXACTR = {"NIL fn"}; 
A_GISVEC(A68_VC ,YBXACTR,XBXACTR,6)
static A68_132   ZBXACTR = {"ERROR: nse="}; 
A_GISVEC(A68_VC ,ACXACTR,ZBXACTR,11)
A_GISVEC(A68_VC ,DCXACTR,RBXACTR,27)
static A68_131   FCXACTR = {"load:int                  ("}; 
static A68_125   GCXACTR = {"=\""}; 
A_GISVEC(A68_VC ,HCXACTR,FCXACTR,27)
A_GISVEC(A68_VC ,JCXACTR,GCXACTR,2)
static A68_131   NCXACTR = {"load:bool                 ("}; 
static A68_40   OCXACTR = {"TRUE"}; 
A_GISVEC(A68_VC ,QCXACTR,OCXACTR,4)
static A68_123   RCXACTR = {"FALSE"}; 
A_GISVEC(A68_VC ,SCXACTR,RCXACTR,5)
A_GISVEC(A68_VC ,TCXACTR,NCXACTR,27)
static A68_131   VCXACTR = {"load:char                 ("}; 
A_GISVEC(A68_VC ,WCXACTR,VCXACTR,27)
static A68_131   YCXACTR = {"load:labno                ("}; 
A_GISVEC(A68_VC ,ZCXACTR,YCXACTR,27)
static A68_133   CDXACTR = {"load:number               (mode"}; 
static A68_134   DDXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,FDXACTR,DDXACTR,29)
static A68_135   HDXACTR = {" | number="}; 
A_GISVEC(A68_VC ,IDXACTR,CDXACTR,31)
A_GISVEC(A68_VC ,ODXACTR,HDXACTR,10)
static A68_133   QDXACTR = {"load:alienx               (mode"}; 
static A68_134   RDXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,TDXACTR,RDXACTR,29)
static A68_136   VDXACTR = {" | string =\""}; 
A_GISVEC(A68_VC ,WDXACTR,QDXACTR,31)
A_GISVEC(A68_VC ,CEXACTR,VDXACTR,12)
static A68_133   FEXACTR = {"load:numeric denotation   (mode"}; 
static A68_134   GEXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,IEXACTR,GEXACTR,29)
static A68_137   KEXACTR = {" | denotation="}; 
A_GISVEC(A68_VC ,LEXACTR,FEXACTR,31)
A_GISVEC(A68_VC ,REXACTR,KEXACTR,14)
static A68_133   UEXACTR = {"load:string denotation    (mode"}; 
static A68_134   VEXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,XEXACTR,VEXACTR,29)
static A68_138   ZEXACTR = {" | denotation=\""}; 
A_GISVEC(A68_VC ,AFXACTR,UEXACTR,31)
A_GISVEC(A68_VC ,GFXACTR,ZEXACTR,15)
static A68_139   IFXACTR = {"ERROR: unknown LOAD imperative"}; 
A_GISVEC(A68_VC ,JFXACTR,IFXACTR,30)
static A68_120   RFXACTR = {"UPB"}; 
A_GISVEC(A68_VC ,SFXACTR,RFXACTR,3)
static A68_120   TFXACTR = {"LWB"}; 
A_GISVEC(A68_VC ,UFXACTR,TFXACTR,3)
static A68_123   VFXACTR = {"ANDTH"}; 
A_GISVEC(A68_VC ,WFXACTR,VFXACTR,5)
static A68_40   XFXACTR = {"OREL"}; 
A_GISVEC(A68_VC ,YFXACTR,XFXACTR,4)
static A68_125   BGXACTR = {"<="}; 
A_GISVEC(A68_VC ,CGXACTR,BGXACTR,2)
static A68_125   DGXACTR = {">="}; 
A_GISVEC(A68_VC ,EGXACTR,DGXACTR,2)
static A68_125   GGXACTR = {"/="}; 
A_GISVEC(A68_VC ,HGXACTR,GGXACTR,2)
static A68_40   KGXACTR = {"OVER"}; 
A_GISVEC(A68_VC ,LGXACTR,KGXACTR,4)
static A68_120   MGXACTR = {"MOD"}; 
A_GISVEC(A68_VC ,NGXACTR,MGXACTR,3)
static A68_125   OGXACTR = {"**"}; 
A_GISVEC(A68_VC ,PGXACTR,OGXACTR,2)
static A68_120   RGXACTR = {"SHL"}; 
A_GISVEC(A68_VC ,SGXACTR,RGXACTR,3)
static A68_120   TGXACTR = {"SHR"}; 
A_GISVEC(A68_VC ,UGXACTR,TGXACTR,3)
static A68_40   VGXACTR = {"ELEM"}; 
A_GISVEC(A68_VC ,WGXACTR,VGXACTR,4)
static A68_121   XGXACTR = {"PLUSAB"}; 
A_GISVEC(A68_VC ,YGXACTR,XGXACTR,6)
static A68_93   ZGXACTR = {"MINUSAB"}; 
A_GISVEC(A68_VC ,AHXACTR,ZGXACTR,7)
static A68_93   BHXACTR = {"TIMESAB"}; 
A_GISVEC(A68_VC ,CHXACTR,BHXACTR,7)
static A68_121   DHXACTR = {"OVERAB"}; 
A_GISVEC(A68_VC ,EHXACTR,DHXACTR,6)
static A68_123   FHXACTR = {"MODAB"}; 
A_GISVEC(A68_VC ,GHXACTR,FHXACTR,5)
static A68_123   HHXACTR = {"DIVAB"}; 
A_GISVEC(A68_VC ,IHXACTR,HHXACTR,5)
static A68_125   JHXACTR = {"IS"}; 
A_GISVEC(A68_VC ,KHXACTR,JHXACTR,2)
static A68_40   LHXACTR = {"ISNT"}; 
A_GISVEC(A68_VC ,MHXACTR,LHXACTR,4)
static A68_120   NHXACTR = {"AND"}; 
A_GISVEC(A68_VC ,OHXACTR,NHXACTR,3)
static A68_125   PHXACTR = {"OR"}; 
A_GISVEC(A68_VC ,QHXACTR,PHXACTR,2)
static A68_121   RHXACTR = {"PLUSTO"}; 
A_GISVEC(A68_VC ,SHXACTR,RHXACTR,6)
static A68_123   THXACTR = {"CYCLE"}; 
A_GISVEC(A68_VC ,UHXACTR,THXACTR,5)
static A68_140   VHXACTR = {"not in standard prelude"}; 
A_GISVEC(A68_VC ,WHXACTR,VHXACTR,23)
static A68_134   ZHXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,BIXACTR,ZHXACTR,29)
static A68_139   JIXACTR = {"oper                      (fn="}; 
static A68_140   KIXACTR = {"statgrab | 1 operand | "}; 
static A68_141   LIXACTR = {"local generation"}; 
A_GISVEC(A68_VC ,NIXACTR,LIXACTR,16)
static A68_138   OIXACTR = {"heap generation"}; 
A_GISVEC(A68_VC ,PIXACTR,OIXACTR,15)
A_GISVEC(A68_VC ,RIXACTR,KIXACTR,23)
static A68_136   SIXACTR = {"parampack | "}; 
static A68_142   TIXACTR = {" operands | mode of proc"}; 
A_GISVEC(A68_VC ,UIXACTR,SIXACTR,12)
A_GISVEC(A68_VC ,VIXACTR,TIXACTR,24)
static A68_143   WIXACTR = {"select | 1 operand | "}; 
static A68_144   XIXACTR = {"th field | result mode"}; 
A_GISVEC(A68_VC ,YIXACTR,WIXACTR,21)
A_GISVEC(A68_VC ,ZIXACTR,XIXACTR,22)
static A68_139   AJXACTR = {"copy | 1 operand | result mode"}; 
A_GISVEC(A68_VC ,BJXACTR,AJXACTR,30)
static A68_93   CJXACTR = {"trim | "}; 
static A68_136   DJXACTR = {" operands | "}; 
static A68_125   HJXACTR = {"a:"}; 
A_GISVEC(A68_VC ,JJXACTR,HJXACTR,2)
static A68_125   KJXACTR = {":b"}; 
A_GISVEC(A68_VC ,LJXACTR,KJXACTR,2)
static A68_120   MJXACTR = {"a:b"}; 
A_GISVEC(A68_VC ,NJXACTR,MJXACTR,3)
static A68_125   OJXACTR = {"@c"}; 
A_GISVEC(A68_VC ,PJXACTR,OJXACTR,2)
static A68_40   QJXACTR = {"a:@c"}; 
A_GISVEC(A68_VC ,RJXACTR,QJXACTR,4)
static A68_40   SJXACTR = {":b@c"}; 
A_GISVEC(A68_VC ,TJXACTR,SJXACTR,4)
static A68_123   UJXACTR = {"a:b@c"}; 
A_GISVEC(A68_VC ,VJXACTR,UJXACTR,5)
static A68_129   WJXACTR = {""}; 
A_GISVEC(A68_VC ,XJXACTR,WJXACTR,0)
static A68_135   YJXACTR = {" (set LWB)"}; 
A_GISVEC(A68_VC ,AKXACTR,YJXACTR,10)
static A68_129   BKXACTR = {""}; 
A_GISVEC(A68_VC ,CKXACTR,BKXACTR,0)
A_GISVEC(A68_VC ,DKXACTR,CJXACTR,7)
A_GISVEC(A68_VC ,EKXACTR,DJXACTR,12)
static A68_138   FKXACTR = {"simple index | "}; 
static A68_136   GKXACTR = {" operands | "}; 
static A68_145   HKXACTR = {" subscripts | result mode"}; 
A_GISVEC(A68_VC ,IKXACTR,FKXACTR,15)
A_GISVEC(A68_VC ,KKXACTR,GKXACTR,12)
A_GISVEC(A68_VC ,LKXACTR,HKXACTR,25)
static A68_146   MKXACTR = {"trim index | "}; 
static A68_140   NKXACTR = {" operands | result mode"}; 
A_GISVEC(A68_VC ,OKXACTR,MKXACTR,13)
A_GISVEC(A68_VC ,QKXACTR,NKXACTR,23)
static A68_147   RKXACTR = {"dyngrab | 2 operands | result mode"}; 
A_GISVEC(A68_VC ,SKXACTR,RKXACTR,34)
static A68_146   TKXACTR = {"bound pack | "}; 
static A68_140   UKXACTR = {" operands | result mode"}; 
A_GISVEC(A68_VC ,VKXACTR,TKXACTR,13)
A_GISVEC(A68_VC ,WKXACTR,UKXACTR,23)
static A68_143   XKXACTR = {"dyadic op | opnumber="}; 
static A68_125   YKXACTR = {"=\""}; 
static A68_136   ZKXACTR = {"\" | version="}; 
static A68_137   ALXACTR = {" | result mode"}; 
A_GISVEC(A68_VC ,BLXACTR,XKXACTR,21)
A_GISVEC(A68_VC ,DLXACTR,YKXACTR,2)
A_GISVEC(A68_VC ,FLXACTR,ZKXACTR,12)
A_GISVEC(A68_VC ,KLXACTR,ALXACTR,14)
static A68_144   LLXACTR = {"monadic op | opnumber="}; 
static A68_125   MLXACTR = {"=\""}; 
static A68_120   QLXACTR = {"UPB"}; 
A_GISVEC(A68_VC ,RLXACTR,QLXACTR,3)
static A68_120   SLXACTR = {"LWB"}; 
A_GISVEC(A68_VC ,TLXACTR,SLXACTR,3)
static A68_120   ULXACTR = {"NOT"}; 
A_GISVEC(A68_VC ,VLXACTR,ULXACTR,3)
static A68_120   WLXACTR = {"ABS"}; 
A_GISVEC(A68_VC ,XLXACTR,WLXACTR,3)
static A68_120   YLXACTR = {"BIN"}; 
A_GISVEC(A68_VC ,ZLXACTR,YLXACTR,3)
static A68_40   AMXACTR = {"REPR"}; 
A_GISVEC(A68_VC ,BMXACTR,AMXACTR,4)
static A68_40   CMXACTR = {"LENG"}; 
A_GISVEC(A68_VC ,DMXACTR,CMXACTR,4)
static A68_93   EMXACTR = {"SHORTEN"}; 
A_GISVEC(A68_VC ,FMXACTR,EMXACTR,7)
static A68_120   GMXACTR = {"ODD"}; 
A_GISVEC(A68_VC ,HMXACTR,GMXACTR,3)
static A68_40   IMXACTR = {"SIGN"}; 
A_GISVEC(A68_VC ,JMXACTR,IMXACTR,4)
static A68_123   KMXACTR = {"ROUND"}; 
A_GISVEC(A68_VC ,LMXACTR,KMXACTR,5)
static A68_121   MMXACTR = {"ENTIER"}; 
A_GISVEC(A68_VC ,NMXACTR,MMXACTR,6)
static A68_125   OMXACTR = {"RE"}; 
A_GISVEC(A68_VC ,PMXACTR,OMXACTR,2)
static A68_125   QMXACTR = {"IM"}; 
A_GISVEC(A68_VC ,RMXACTR,QMXACTR,2)
static A68_120   SMXACTR = {"ARG"}; 
A_GISVEC(A68_VC ,TMXACTR,SMXACTR,3)
static A68_40   UMXACTR = {"CONJ"}; 
A_GISVEC(A68_VC ,VMXACTR,UMXACTR,4)
static A68_140   WMXACTR = {"not in standard prelude"}; 
A_GISVEC(A68_VC ,XMXACTR,WMXACTR,23)
static A68_136   YMXACTR = {"\" | version="}; 
static A68_137   ZMXACTR = {" | result mode"}; 
A_GISVEC(A68_VC ,ANXACTR,LLXACTR,22)
A_GISVEC(A68_VC ,CNXACTR,MLXACTR,2)
A_GISVEC(A68_VC ,DNXACTR,YMXACTR,12)
A_GISVEC(A68_VC ,INXACTR,ZMXACTR,14)
static A68_143   JNXACTR = {"straight | 2 operands"}; 
static A68_148   KNXACTR = {" | mode of original="}; 
static A68_123   LNXACTR = {"UNION"}; 
A_GISVEC(A68_VC ,NNXACTR,LNXACTR,5)
static A68_121   ONXACTR = {"VECTOR"}; 
A_GISVEC(A68_VC ,PNXACTR,ONXACTR,6)
static A68_149   QNXACTR = {"STRUCT or I-STRUCT"}; 
A_GISVEC(A68_VC ,RNXACTR,QNXACTR,18)
static A68_122   SNXACTR = {"ARRY of "}; 
static A68_132   TNXACTR = {" dimensions"}; 
A_GISVEC(A68_VC ,UNXACTR,SNXACTR,8)
A_GISVEC(A68_VC ,WNXACTR,TNXACTR,11)
A_GISVEC(A68_VC ,XNXACTR,JNXACTR,21)
A_GISVEC(A68_VC ,YNXACTR,KNXACTR,20)
static A68_150   ZNXACTR = {"prestraight | 1 operand | result mode"}; 
A_GISVEC(A68_VC ,AOXACTR,ZNXACTR,37)
static A68_151   BOXACTR = {"strindex | 2 operands | result mode"}; 
A_GISVEC(A68_VC ,COXACTR,BOXACTR,35)
static A68_152   DOXACTR = {"assign | 2 operands | param="}; 
static A68_137   EOXACTR = {" | result mode"}; 
A_GISVEC(A68_VC ,FOXACTR,DOXACTR,28)
A_GISVEC(A68_VC ,GOXACTR,EOXACTR,14)
static A68_153   HOXACTR = {"default bound | no operands | result mode"}; 
A_GISVEC(A68_VC ,IOXACTR,HOXACTR,41)
static A68_154   JOXACTR = {"deref | result mode"}; 
A_GISVEC(A68_VC ,KOXACTR,JOXACTR,19)
static A68_149   LOXACTR = {"call | result mode"}; 
static A68_155   MOXACTR = {" | not operator or generator routine"}; 
A_GISVEC(A68_VC ,OOXACTR,MOXACTR,36)
static A68_156   POXACTR = {" | invented local space generator"}; 
A_GISVEC(A68_VC ,QOXACTR,POXACTR,33)
static A68_157   ROXACTR = {" | invented heap space generator"}; 
A_GISVEC(A68_VC ,SOXACTR,ROXACTR,32)
static A68_158   TOXACTR = {" | invented space generator within one"}; 
A_GISVEC(A68_VC ,UOXACTR,TOXACTR,38)
static A68_147   VOXACTR = {" | user defined or library routine"}; 
A_GISVEC(A68_VC ,WOXACTR,VOXACTR,34)
static A68_159   XOXACTR = {"ERROR: unknown PARAM field"}; 
A_GISVEC(A68_VC ,YOXACTR,XOXACTR,26)
A_GISVEC(A68_VC ,ZOXACTR,LOXACTR,18)
static A68_40   APXACTR = {"VOID"}; 
A_GISVEC(A68_VC ,BPXACTR,APXACTR,4)
static A68_93   CPXACTR = {"NIL to "}; 
A_GISVEC(A68_VC ,DPXACTR,CPXACTR,7)
static A68_142   EPXACTR = {"GOTO | procedure to mode"}; 
A_GISVEC(A68_VC ,FPXACTR,EPXACTR,24)
static A68_143   GPXACTR = {"GOTO | coerce to mode"}; 
A_GISVEC(A68_VC ,HPXACTR,GPXACTR,21)
static A68_131   IPXACTR = {"REAL to COMPL | result mode"}; 
A_GISVEC(A68_VC ,JPXACTR,IPXACTR,27)
static A68_145   KPXACTR = {"INT to REAL | result mode"}; 
A_GISVEC(A68_VC ,LPXACTR,KPXACTR,25)
static A68_149   MPXACTR = {"xxib | result mode"}; 
A_GISVEC(A68_VC ,NPXACTR,MPXACTR,18)
static A68_152   OPXACTR = {"ARRAY to ARRAY | result mode"}; 
A_GISVEC(A68_VC ,PPXACTR,OPXACTR,28)
static A68_134   QPXACTR = {"VECTOR to ARRAY | result mode"}; 
A_GISVEC(A68_VC ,RPXACTR,QPXACTR,29)
static A68_157   SPXACTR = {"I-STRUCT to VECTOR | result mode"}; 
A_GISVEC(A68_VC ,TPXACTR,SPXACTR,32)
static A68_144   UPXACTR = {"1 STRUCT | result mode"}; 
A_GISVEC(A68_VC ,VPXACTR,UPXACTR,22)
static A68_134   WPXACTR = {"unite | non UNION operand to "}; 
static A68_132   XPXACTR = {"th mode of "}; 
A_GISVEC(A68_VC ,YPXACTR,WPXACTR,29)
A_GISVEC(A68_VC ,ZPXACTR,XPXACTR,11)
static A68_139   AQXACTR = {"uniteu | UNION operand to mode"}; 
A_GISVEC(A68_VC ,BQXACTR,AQXACTR,30)
static A68_149   CQXACTR = {"isarr | coerce to "}; 
static A68_157   DQXACTR = {" dimensional array | result mode"}; 
A_GISVEC(A68_VC ,EQXACTR,CQXACTR,18)
A_GISVEC(A68_VC ,FQXACTR,DQXACTR,32)
static A68_122   GQXACTR = {"SKIP to "}; 
A_GISVEC(A68_VC ,HQXACTR,GQXACTR,8)
static A68_148   IQXACTR = {"to VEC | result mode"}; 
A_GISVEC(A68_VC ,JQXACTR,IQXACTR,20)
static A68_144   KQXACTR = {"to ARRAY | result mode"}; 
A_GISVEC(A68_VC ,LQXACTR,KQXACTR,22)
static A68_132   MQXACTR = {"deunite to "}; 
A_GISVEC(A68_VC ,NQXACTR,MQXACTR,11)
static A68_139   OQXACTR = {"BITS to VEC BOOL | result mode"}; 
A_GISVEC(A68_VC ,PQXACTR,OQXACTR,30)
static A68_145   QQXACTR = {"vacuum | coerce EMPTY to "}; 
A_GISVEC(A68_VC ,RQXACTR,QQXACTR,25)
static A68_135   SQXACTR = {"Y TYPE to "}; 
A_GISVEC(A68_VC ,TQXACTR,SQXACTR,10)
static A68_126   UQXACTR = {"to X TYPE"}; 
A_GISVEC(A68_VC ,VQXACTR,UQXACTR,9)
static A68_141   WQXACTR = {"static generator"}; 
A_GISVEC(A68_VC ,XQXACTR,WQXACTR,16)
static A68_121   YQXACTR = {"format"}; 
A_GISVEC(A68_VC ,ZQXACTR,YQXACTR,6)
static A68_123   ARXACTR = {"SPARE"}; 
A_GISVEC(A68_VC ,BRXACTR,ARXACTR,5)
A_GISVEC(A68_VC ,CRXACTR,JIXACTR,30)
static A68_131   ERXACTR = {"transiddec                ("}; 
static A68_148   FRXACTR = {"identity declaration"}; 
A_GISVEC(A68_VC ,HRXACTR,FRXACTR,20)
static A68_148   IRXACTR = {"variable declaration"}; 
A_GISVEC(A68_VC ,JRXACTR,IRXACTR,20)
static A68_141   KRXACTR = {"formal parameter"}; 
A_GISVEC(A68_VC ,LRXACTR,KRXACTR,16)
static A68_132   MRXACTR = {"FOR control"}; 
A_GISVEC(A68_VC ,NRXACTR,MRXACTR,11)
static A68_148   ORXACTR = {"initialised variable"}; 
A_GISVEC(A68_VC ,PRXACTR,ORXACTR,20)
static A68_152   QRXACTR = {"formal conformity identifier"}; 
A_GISVEC(A68_VC ,RRXACTR,QRXACTR,28)
static A68_137   SRXACTR = {"FORALL control"}; 
A_GISVEC(A68_VC ,TRXACTR,SRXACTR,14)
static A68_160   URXACTR = {"dummy declaration"}; 
A_GISVEC(A68_VC ,VRXACTR,URXACTR,17)
static A68_133   WRXACTR = {"ERROR: unknown TRANSIDDEC type="}; 
A_GISVEC(A68_VC ,XRXACTR,WRXACTR,31)
static A68_126   ZRXACTR = {" | name=\""}; 
static A68_122   ASXACTR = {"\" | mode"}; 
static A68_134   BSXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,DSXACTR,BSXACTR,29)
static A68_126   FSXACTR = {" | decno="}; 
A_GISVEC(A68_VC ,GSXACTR,ERXACTR,27)
A_GISVEC(A68_VC ,HSXACTR,ZRXACTR,9)
A_GISVEC(A68_VC ,ISXACTR,ASXACTR,8)
A_GISVEC(A68_VC ,OSXACTR,FSXACTR,9)
static A68_156   RSXACTR = {"routine                   (name=\""}; 
static A68_93   SSXACTR = {" | mode"}; 
static A68_134   TSXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,VSXACTR,TSXACTR,29)
static A68_134   XSXACTR = {" | proc of unlimited lifetime"}; 
A_GISVEC(A68_VC ,ZSXACTR,XSXACTR,29)
static A68_161   ATXACTR = {" | only external id is declared in CONTEXT VOID module"}; 
A_GISVEC(A68_VC ,BTXACTR,ATXACTR,54)
static A68_162   CTXACTR = {" | decno of external id with smallest lifetime="}; 
static A68_125   DTXACTR = {"=\""}; 
A_GISVEC(A68_VC ,ETXACTR,CTXACTR,47)
A_GISVEC(A68_VC ,GTXACTR,DTXACTR,2)
static A68_135   JTXACTR = {" | rdenno="}; 
A_GISVEC(A68_VC ,KTXACTR,RSXACTR,33)
A_GISVEC(A68_VC ,NTXACTR,SSXACTR,7)
A_GISVEC(A68_VC ,TTXACTR,JTXACTR,10)
static A68_131   WTXACTR = {"warn                      ("}; 
static A68_121   XTXACTR = {"assign"}; 
A_GISVEC(A68_VC ,ZTXACTR,XTXACTR,6)
static A68_123   AUXACTR = {"ANDTH"}; 
A_GISVEC(A68_VC ,BUXACTR,AUXACTR,5)
static A68_40   CUXACTR = {"OREL"}; 
A_GISVEC(A68_VC ,DUXACTR,CUXACTR,4)
static A68_123   EUXACTR = {"index"}; 
A_GISVEC(A68_VC ,FUXACTR,EUXACTR,5)
static A68_135   GUXACTR = {"PLUSAB etc"}; 
A_GISVEC(A68_VC ,HUXACTR,GUXACTR,10)
static A68_121   IUXACTR = {"FORALL"}; 
A_GISVEC(A68_VC ,JUXACTR,IUXACTR,6)
static A68_40   KUXACTR = {"loop"}; 
A_GISVEC(A68_VC ,LUXACTR,KUXACTR,4)
static A68_145   MUXACTR = {"ERROR: unknown WARN field"}; 
A_GISVEC(A68_VC ,NUXACTR,MUXACTR,25)
A_GISVEC(A68_VC ,OUXACTR,WTXACTR,27)
static A68_156   QUXACTR = {"labdec                    (name=\""}; 
static A68_129   UUXACTR = {""}; 
A_GISVEC(A68_VC ,WUXACTR,UUXACTR,0)
static A68_156   XUXACTR = {" | at start serial clause; labno="}; 
A_GISVEC(A68_VC ,ZUXACTR,XUXACTR,33)
static A68_114   BVXACTR = {"at start user written routine; GOTO external label | labno="}; 
A_GISVEC(A68_VC ,CVXACTR,BVXACTR,59)
static A68_126   EVXACTR = {" | labno "}; 
static A68_160   FVXACTR = {" is redefined as "}; 
A_GISVEC(A68_VC ,GVXACTR,EVXACTR,9)
A_GISVEC(A68_VC ,IVXACTR,FVXACTR,17)
static A68_156   KVXACTR = {" | actual label setting of labno="}; 
A_GISVEC(A68_VC ,LVXACTR,KVXACTR,33)
A_GISVEC(A68_VC ,NVXACTR,QUXACTR,33)
static A68_133   QVXACTR = {"uchoice                   (mode"}; 
static A68_134   RVXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,TVXACTR,RVXACTR,29)
static A68_126   VVXACTR = {" | param="}; 
A_GISVEC(A68_VC ,WVXACTR,QVXACTR,31)
A_GISVEC(A68_VC ,DWXACTR,VVXACTR,9)
static A68_131   GWXACTR = {"callmodule                ("}; 
A_GISVEC(A68_VC ,HWXACTR,GWXACTR,27)
static A68_156   KWXACTR = {"keeps                     (start="}; 
static A68_40   LWXACTR = {"TRUE"}; 
A_GISVEC(A68_VC ,NWXACTR,LWXACTR,4)
static A68_123   OWXACTR = {"FALSE"}; 
A_GISVEC(A68_VC ,PWXACTR,OWXACTR,5)
A_GISVEC(A68_VC ,QWXACTR,KWXACTR,33)
static A68_159   SWXACTR = {"load:code                 "}; 
static A68_93   TWXACTR = {"( mode="}; 
static A68_137   UWXACTR = {" | parameters="}; 
static A68_125   VWXACTR = {" )"}; 
A_GISVEC(A68_VC ,WWXACTR,SWXACTR,26)
A_GISVEC(A68_VC ,XWXACTR,TWXACTR,7)
A_GISVEC(A68_VC ,ZWXACTR,UWXACTR,14)
A_GISVEC(A68_VC ,BXXACTR,VWXACTR,2)
static A68_153   DXXACTR = {"formatx                   (info=(nochars="}; 
static A68_132   EXXACTR = {" | nocases="}; 
static A68_138   FXXACTR = {" | max nesting="}; 
static A68_126   GXXACTR = {") | text="}; 
A_GISVEC(A68_VC ,HXXACTR,DXXACTR,41)
A_GISVEC(A68_VC ,JXXACTR,EXXACTR,11)
A_GISVEC(A68_VC ,LXXACTR,FXXACTR,15)
A_GISVEC(A68_VC ,NXXACTR,GXXACTR,9)
static A68_156   OXXACTR = {"ERROR: unknown PRIMARY imperative"}; 
A_GISVEC(A68_VC ,PXXACTR,OXXACTR,33)
static A68_131   RXXACTR = {"separator                 ("}; 
static A68_40   SXXACTR = {"THEN"}; 
A_GISVEC(A68_VC ,UXXACTR,SXXACTR,4)
static A68_125   VXXACTR = {"IN"}; 
A_GISVEC(A68_VC ,WXXACTR,VXXACTR,2)
static A68_120   XXXACTR = {"INu"}; 
A_GISVEC(A68_VC ,YXXACTR,XXXACTR,3)
static A68_122   ZXXACTR = {"ic comma"}; 
A_GISVEC(A68_VC ,AYXACTR,ZXXACTR,8)
static A68_122   BYXACTR = {"cc comma"}; 
A_GISVEC(A68_VC ,CYXACTR,BYXACTR,8)
static A68_40   DYXACTR = {"EXIT"}; 
A_GISVEC(A68_VC ,EYXACTR,DYXACTR,4)
static A68_120   FYXACTR = {"OUT"}; 
A_GISVEC(A68_VC ,GYXACTR,FYXACTR,3)
static A68_40   HYXACTR = {"OUTu"}; 
A_GISVEC(A68_VC ,IYXACTR,HYXACTR,4)
static A68_40   JYXACTR = {"ELSE"}; 
A_GISVEC(A68_VC ,KYXACTR,JYXACTR,4)
static A68_135   LYXACTR = {"coll comma"}; 
A_GISVEC(A68_VC ,MYXACTR,LYXACTR,10)
static A68_40   NYXACTR = {"semi"}; 
A_GISVEC(A68_VC ,OYXACTR,NYXACTR,4)
static A68_125   PYXACTR = {"DO"}; 
A_GISVEC(A68_VC ,QYXACTR,PYXACTR,2)
static A68_123   RYXACTR = {"WHILE"}; 
A_GISVEC(A68_VC ,SYXACTR,RYXACTR,5)
static A68_152   TYXACTR = {"ERROR: unknown SEPARATOR fn="}; 
A_GISVEC(A68_VC ,UYXACTR,TYXACTR,28)
static A68_134   WYXACTR = {" | mode & param are undefined"}; 
A_GISVEC(A68_VC ,YYXACTR,WYXACTR,29)
static A68_93   ZYXACTR = {" | mode"}; 
static A68_134   AZXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,CZXACTR,AZXACTR,29)
static A68_126   EZXACTR = {" | param="}; 
A_GISVEC(A68_VC ,FZXACTR,ZYXACTR,7)
A_GISVEC(A68_VC ,LZXACTR,EZXACTR,9)
A_GISVEC(A68_VC ,NZXACTR,RXXACTR,27)
static A68_131   QZXACTR = {"starter                   ("}; 
static A68_93   RZXACTR = {"routine"}; 
A_GISVEC(A68_VC ,TZXACTR,RZXACTR,7)
static A68_40   UZXACTR = {"decs"}; 
A_GISVEC(A68_VC ,VZXACTR,UZXACTR,4)
static A68_122   WZXACTR = {"IF/WHILE"}; 
A_GISVEC(A68_VC ,XZXACTR,WZXACTR,8)
static A68_40   YZXACTR = {"CASE"}; 
A_GISVEC(A68_VC ,ZZXACTR,YZXACTR,4)
static A68_123   AAYACTR = {"CASEu"}; 
A_GISVEC(A68_VC ,BAYACTR,AAYACTR,5)
static A68_123   CAYACTR = {"BEGIN"}; 
A_GISVEC(A68_VC ,DAYACTR,CAYACTR,5)
static A68_135   EAYACTR = {"coll BEGIN"}; 
A_GISVEC(A68_VC ,FAYACTR,EAYACTR,10)
static A68_120   GAYACTR = {"FOR"}; 
A_GISVEC(A68_VC ,HAYACTR,GAYACTR,3)
static A68_121   IAYACTR = {"FORALL"}; 
A_GISVEC(A68_VC ,JAYACTR,IAYACTR,6)
static A68_159   KAYACTR = {"ERROR: unknown STARTER fn="}; 
A_GISVEC(A68_VC ,LAYACTR,KAYACTR,26)
static A68_93   NAYACTR = {" | mode"}; 
static A68_134   OAYACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,QAYACTR,OAYACTR,29)
static A68_137   SAYACTR = {" | result mode"}; 
static A68_134   TAYACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,VAYACTR,TAYACTR,29)
static A68_126   XAYACTR = {"undefined"}; 
A_GISVEC(A68_VC ,ZAYACTR,XAYACTR,9)
A_GISVEC(A68_VC ,FBYACTR,QZXACTR,27)
A_GISVEC(A68_VC ,HBYACTR,NAYACTR,7)
A_GISVEC(A68_VC ,NBYACTR,SAYACTR,14)
static A68_131   PBYACTR = {"terminator                ("}; 
static A68_125   QBYACTR = {"FI"}; 
A_GISVEC(A68_VC ,SBYACTR,QBYACTR,2)
static A68_40   TBYACTR = {"ESAC"}; 
A_GISVEC(A68_VC ,UBYACTR,TBYACTR,4)
static A68_123   VBYACTR = {"ESACu"}; 
A_GISVEC(A68_VC ,WBYACTR,VBYACTR,5)
static A68_120   XBYACTR = {"END"}; 
A_GISVEC(A68_VC ,YBYACTR,XBYACTR,3)
static A68_122   ZBYACTR = {"coll END"}; 
A_GISVEC(A68_VC ,ACYACTR,ZBYACTR,8)
static A68_125   BCYACTR = {"OD"}; 
A_GISVEC(A68_VC ,CCYACTR,BCYACTR,2)
static A68_132   DCYACTR = {"routine end"}; 
A_GISVEC(A68_VC ,ECYACTR,DCYACTR,11)
static A68_121   FCYACTR = {"FINISH"}; 
A_GISVEC(A68_VC ,GCYACTR,FCYACTR,6)
static A68_122   HCYACTR = {"opt bool"}; 
A_GISVEC(A68_VC ,ICYACTR,HCYACTR,8)
static A68_134   JCYACTR = {"ERROR: unknown TERMINATOR fn="}; 
A_GISVEC(A68_VC ,KCYACTR,JCYACTR,29)
A_GISVEC(A68_VC ,MCYACTR,PBYACTR,27)
static A68_157   RCYACTR = {"composer:closure          (body="}; 
static A68_136   SCYACTR = {" | moduleno="}; 
A_GISVEC(A68_VC ,TCYACTR,RCYACTR,32)
A_GISVEC(A68_VC ,VCYACTR,SCYACTR,12)
static A68_155   YCYACTR = {"composer:synthetic module (moduleno="}; 
static A68_123   ZCYACTR = {" | i="}; 
static A68_123   ADYACTR = {" | j="}; 
A_GISVEC(A68_VC ,BDYACTR,YCYACTR,36)
A_GISVEC(A68_VC ,DDYACTR,ZCYACTR,5)
A_GISVEC(A68_VC ,FDYACTR,ADYACTR,5)
static A68_155   IDYACTR = {"composer:extern module    (moduleno="}; 
static A68_126   JDYACTR = {" | name=\""}; 
static A68_132   KDYACTR = {"\" | uname=\""}; 
static A68_132   LDYACTR = {"\" | lname=\""}; 
static A68_132   MDYACTR = {"\" | gname=\""}; 
A_GISVEC(A68_VC ,NDYACTR,IDYACTR,36)
A_GISVEC(A68_VC ,PDYACTR,JDYACTR,9)
A_GISVEC(A68_VC ,QDYACTR,KDYACTR,11)
A_GISVEC(A68_VC ,RDYACTR,LDYACTR,11)
A_GISVEC(A68_VC ,SDYACTR,MDYACTR,11)
static A68_147   UDYACTR = {"ERROR: unknown COMPOSER imperative"}; 
A_GISVEC(A68_VC ,VDYACTR,UDYACTR,34)
static A68_40   WDYACTR = {"VOID"}; 
A_GISVEC(A68_VC ,XDYACTR,WDYACTR,4)
static A68_145   YDYACTR = {"ERROR: unknown imperative"}; 
A_GISVEC(A68_VC ,ZDYACTR,YDYACTR,25)
typedef struct   /* env of non-global proc */
{
int dummy;
} LAXACTR_generator;

A_STATIC A68_VOID  PXWACTR_generator(A68_BOOL  OXWACTR_anonymous, A68_115  *ReturnedValue);

A_STATIC A68_VOID  RXWACTR_generator(A68_BOOL  QXWACTR_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  HAXACTR_bitmnemonic(A68_BITS  Props, A68_BOOL  Whichxbit, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  KAXACTR_generator(A68_BOOL  IAXACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  KBXACTR_imperativemnemonic(A68_67  Imperative, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  NFXACTR_standardpreludeops(A68_INT  Opnumber, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  RXWACTR_generator(A68_BOOL  QXWACTR_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  SXWACTR;  /* clause result */
A68_VC  TXWACTR;  /* OPERATORS - dynamic generator */
{ 
TXWACTR.upb = 0 ;
( QXWACTR_anonymous? A_VLOC(A68_CHAR ,TXWACTR): A_VHEAP(A68_CHAR ,TXWACTR) );
SXWACTR = TXWACTR;
} 
*ReturnedValue = (SXWACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  KAXACTR_generator(A68_BOOL  IAXACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((LAXACTR_generator *)NonLocals)->x)
{ 
A68_VC  MAXACTR;  /* clause result */
A68_VC  NAXACTR;  /* OPERATORS - dynamic generator */
{ 
NAXACTR.upb = 0 ;
( IAXACTR_anonymous? A_VLOC(A68_CHAR ,NAXACTR): A_VHEAP(A68_CHAR ,NAXACTR) );
MAXACTR = NAXACTR;
} 
*ReturnedValue = (MAXACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  NFXACTR_standardpreludeops(A68_INT  Opnumber, A68_VC  *ReturnedValue)
{ 
A68_VC  OFXACTR;  /* clause result */
A68_VC  PFXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  QFXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ZFXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  AGXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  FGXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  IGXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  JGXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  QGXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(standardpreludeops);
 /* line 244: */
 /* line 245: */
switch ( Opnumber )
{ 
case 1: 
OFXACTR = A_HVEC(PFXACTR,'+',A68_CHAR );
break;
case 2: 
OFXACTR = A_HVEC(QFXACTR,'-',A68_CHAR );
break;
case 3: 
OFXACTR = SFXACTR;
break;
case 4: 
OFXACTR = UFXACTR;
break;
case 5: 
 /* line 246: */
OFXACTR = WFXACTR;
break;
case 6: 
OFXACTR = YFXACTR;
break;
case 7: 
OFXACTR = A_HVEC(ZFXACTR,'<',A68_CHAR );
break;
case 8: 
OFXACTR = A_HVEC(AGXACTR,'>',A68_CHAR );
break;
case 9: 
OFXACTR = CGXACTR;
break;
case 10: 
 /* line 247: */
OFXACTR = EGXACTR;
break;
case 11: 
OFXACTR = A_HVEC(FGXACTR,'=',A68_CHAR );
break;
case 12: 
OFXACTR = HGXACTR;
break;
case 13: 
OFXACTR = A_HVEC(IGXACTR,'*',A68_CHAR );
break;
case 14: 
OFXACTR = A_HVEC(JGXACTR,'/',A68_CHAR );
break;
case 15: 
 /* line 248: */
OFXACTR = LGXACTR;
break;
case 16: 
OFXACTR = NGXACTR;
break;
case 17: 
OFXACTR = PGXACTR;
break;
case 18: 
OFXACTR = A_HVEC(QGXACTR,'I',A68_CHAR );
break;
case 19: 
OFXACTR = SGXACTR;
break;
case 20: 
 /* line 249: */
OFXACTR = UGXACTR;
break;
case 21: 
OFXACTR = WGXACTR;
break;
case 22: 
OFXACTR = YGXACTR;
break;
case 23: 
OFXACTR = AHXACTR;
break;
case 24: 
OFXACTR = CHXACTR;
break;
case 25: 
 /* line 250: */
OFXACTR = EHXACTR;
break;
case 26: 
OFXACTR = GHXACTR;
break;
case 27: 
OFXACTR = IHXACTR;
break;
case 28: 
OFXACTR = KHXACTR;
break;
case 29: 
OFXACTR = MHXACTR;
break;
case 30: 
 /* line 251: */
OFXACTR = OHXACTR;
break;
case 31: 
OFXACTR = QHXACTR;
break;
case 32: 
 /* line 252: */
OFXACTR = SHXACTR;
break;
case 33: 
 /* line 253: */
OFXACTR = UHXACTR;
break;
default: 
OFXACTR = WHXACTR;
break;
} 
A_PROC_EXIT(standardpreludeops);
*ReturnedValue = (OFXACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  PXWACTR_generator(A68_BOOL  OXWACTR_anonymous, A68_115  *ReturnedValue)
{ 
A68_118  UXWACTR_anonymous;
A68_VC  VXWACTR;  /* avoid structure result */
A68_117 * WXWACTR;  /* YIELD */
A68_115  XXWACTR;  /* clause result */
{ 
RXWACTR_generator( OXWACTR_anonymous, &VXWACTR );
WXWACTR = (&((&UXWACTR_anonymous)->Name)) ;
(*WXWACTR) = VXWACTR;
XXWACTR = UXWACTR_anonymous;
} 
*ReturnedValue = (XXWACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  HAXACTR_bitmnemonic(A68_BITS  Props, A68_BOOL  Whichxbit, A68_VC  *ReturnedValue)
{ 
A68_109  JAXACTR_generator;   /* proc value of non-global proc */
A68_117  PAXACTR;  /* avoid structure result */
A68_117  OAXACTR_output;
A68_VC  SAXACTR;  /* YIELD */
A68_VC  TAXACTR;  /* OPERATORS - copy to flex */
A68_119  UAXACTR;  /* clause result */
A68_119  VAXACTR_whichimperative;
A68_115  WAXACTR_b;
A68_115 * XAXACTR;  /* forall control - []x */
A68_INT  YAXACTR;  /* forall loop counter */
A68_VC  ZAXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  DBXACTR;  /* clause result */
A68_VC  HBXACTR;  /* OPERATORS - trim index */
A68_VC  IBXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(bitmnemonic);
 /* line 146: */
 /* line 147: */
{ 
A_CLOSURE( JAXACTR_generator, KAXACTR_generator, LAXACTR_generator );
A_CALLPROC(JAXACTR_generator,(A68_TRUE, &PAXACTR),(A68_TRUE, &PAXACTR,(JAXACTR_generator).nonlocals));
OAXACTR_output = PAXACTR;
SAXACTR = RAXACTR ;
OAXACTR_output = A_VCOPY(SAXACTR,TAXACTR,A68_CHAR );
 /* line 148: */
if ( Whichxbit )
{ 
UAXACTR = HZWACTR_controlbits;
} 
else
{ 
UAXACTR = WZWACTR_routinebits;
} 
VAXACTR_whichimperative = UAXACTR;
 /* line 150: */
 /* line 151: */
YAXACTR = VAXACTR_whichimperative.dim[0].upb - VAXACTR_whichimperative.dim[0].lwb;
XAXACTR = VAXACTR_whichimperative.data;
for (;YAXACTR-- >= 0;
(XAXACTR += VAXACTR_whichimperative.dim[0].stride
) )
{
WAXACTR_b = *XAXACTR;
 /* line 152: */
 /* line 153: */
if ( ((A68_BITS )(WAXACTR_b.Value&Props)!=(A68_BITS )0) )
{ 
 /* line 154: */
 /* line 155: */
A_VC_PLUSAB(OAXACTR_output,A_VC_PLUS(WAXACTR_b.Name,A_HVEC(ZAXACTR,',',A68_CHAR )));
} 
}
 /* line 156: */
 /* line 157: */
 /* line 158: */
if ( A_VC_EQ(OAXACTR_output,BBXACTR) )
{ 
 /* line 159: */
DBXACTR = EBXACTR;
} 
else
{ 
 /* line 160: */
 /* line 161: */
DBXACTR = A_VC_PLUS(A_VC_PLUS(GBXACTR,A_VTRIM(HBXACTR,(*(&OAXACTR_output)),A_VTSCRIPT(&(HBXACTR.upb),(*(&OAXACTR_output)).upb,1,(OAXACTR_output.upb-1)))),A_HVEC(IBXACTR,')',A68_CHAR ));
} 
} 
A_PROC_EXIT(bitmnemonic);
*ReturnedValue = (DBXACTR);
return;
} 
#undef NL

A68_VOID  KBXACTR_imperativemnemonic(A68_67  Imperative, A68_VC  *ReturnedValue)
{ 
A68_67  LBXACTR;  /* united object - for case conformity */
A68_83  MBXACTR_p;
A68_83  NBXACTR;  /* united object - for case conformity */
A68_82  OBXACTR_l;
A68_82  PBXACTR;  /* united object - for case conformity */
A68_68  QBXACTR_si;
A68_VC  TBXACTR;  /* clause result */
A68_VC  BCXACTR;  /* avoid structure result */
A68_VC  CCXACTR;  /* clause result */
A68_INT  ECXACTR_i;
A68_VC  ICXACTR;  /* avoid structure result */
A68_VC  KCXACTR;  /* avoid structure result */
A68_VC  LCXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  MCXACTR_b;
A68_VC  PCXACTR;  /* clause result */
A68_66  UCXACTR_c;
A68_69  XCXACTR_sl;
A68_VC  ADXACTR;  /* avoid structure result */
A68_70  BDXACTR_n;
A68_VC  EDXACTR;  /* clause result */
A68_VC  GDXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  JDXACTR;  /* ADICOPS - ABS INT */
A68_VC  KDXACTR;  /* avoid structure result */
A68_VC  LDXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  MDXACTR;  /* ADICOPS - ABS INT */
A68_VC  NDXACTR;  /* avoid structure result */
A68_54  PDXACTR_a;
A68_VC  SDXACTR;  /* clause result */
A68_VC  UDXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  XDXACTR;  /* ADICOPS - ABS INT */
A68_VC  YDXACTR;  /* avoid structure result */
A68_VC  ZDXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  AEXACTR;  /* ADICOPS - ABS INT */
A68_VC  BEXACTR;  /* avoid structure result */
A68_VC  DEXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_71  EEXACTR_o;
A68_VC  HEXACTR;  /* clause result */
A68_VC  JEXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  MEXACTR;  /* ADICOPS - ABS INT */
A68_VC  NEXACTR;  /* avoid structure result */
A68_VC  OEXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  PEXACTR;  /* ADICOPS - ABS INT */
A68_VC  QEXACTR;  /* avoid structure result */
A68_VC  SEXACTR;  /* avoid structure result */
A68_72  TEXACTR_st;
A68_VC  WEXACTR;  /* clause result */
A68_VC  YEXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  BFXACTR;  /* ADICOPS - ABS INT */
A68_VC  CFXACTR;  /* avoid structure result */
A68_VC  DFXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  EFXACTR;  /* ADICOPS - ABS INT */
A68_VC  FFXACTR;  /* avoid structure result */
A68_VC  HFXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_73  KFXACTR_o;
A68_VC  XHXACTR;  /* avoid structure result */
A68_VC  YHXACTR_p;
A68_VC  AIXACTR;  /* clause result */
A68_VC  CIXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  DIXACTR;  /* ADICOPS - ABS INT */
A68_VC  EIXACTR;  /* avoid structure result */
A68_VC  FIXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  GIXACTR;  /* ADICOPS - ABS INT */
A68_VC  HIXACTR;  /* avoid structure result */
A68_VC  IIXACTR_m;
A68_VC  MIXACTR;  /* clause result */
A68_VC  QIXACTR;  /* clause result */
A68_INT  EJXACTR;  /* ADICOPS - MOD */
A68_INT  FJXACTR;  /* ADICOPS - MOD */
A68_INT  GJXACTR;  /* ADICOPS - MOD */
A68_VC  IJXACTR;  /* clause result */
A68_VC  ZJXACTR;  /* clause result */
A68_VC  JKXACTR;  /* avoid structure result */
A68_VC  PKXACTR;  /* avoid structure result */
A68_VC  CLXACTR;  /* avoid structure result */
A68_VC  ELXACTR;  /* avoid structure result */
A68_INT  GLXACTR;  /* ADICOPS - MOD */
A68_INT  HLXACTR;  /* ADICOPS - MOD */
A68_INT  ILXACTR;  /* ADICOPS - MOD */
A68_VC  JLXACTR;  /* avoid structure result */
A68_VC  NLXACTR;  /* clause result */
A68_VC  OLXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  PLXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  BNXACTR;  /* avoid structure result */
A68_INT  ENXACTR;  /* ADICOPS - MOD */
A68_INT  FNXACTR;  /* ADICOPS - MOD */
A68_INT  GNXACTR;  /* ADICOPS - MOD */
A68_VC  HNXACTR;  /* avoid structure result */
A68_VC  MNXACTR;  /* clause result */
A68_VC  VNXACTR;  /* avoid structure result */
A68_VC  NOXACTR;  /* clause result */
A68_65  DRXACTR_t;
A68_VC  GRXACTR;  /* clause result */
A68_VC  YRXACTR;  /* avoid structure result */
A68_VC  CSXACTR;  /* clause result */
A68_VC  ESXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  JSXACTR;  /* ADICOPS - ABS INT */
A68_VC  KSXACTR;  /* avoid structure result */
A68_VC  LSXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  MSXACTR;  /* ADICOPS - ABS INT */
A68_VC  NSXACTR;  /* avoid structure result */
A68_VC  PSXACTR;  /* avoid structure result */
A68_74  QSXACTR_r;
A68_VC  USXACTR;  /* clause result */
A68_VC  WSXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  YSXACTR;  /* clause result */
A68_VC  FTXACTR;  /* avoid structure result */
A68_VC  HTXACTR;  /* avoid structure result */
A68_VC  ITXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  LTXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  MTXACTR;  /* avoid structure result */
A68_INT  OTXACTR;  /* ADICOPS - ABS INT */
A68_VC  PTXACTR;  /* avoid structure result */
A68_VC  QTXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  RTXACTR;  /* ADICOPS - ABS INT */
A68_VC  STXACTR;  /* avoid structure result */
A68_VC  UTXACTR;  /* avoid structure result */
A68_75  VTXACTR_w;
A68_VC  YTXACTR;  /* clause result */
A68_76  PUXACTR_l;
A68_VC  RUXACTR;  /* OPERATORS - nil -> mode */
A68_VC  SUXACTR;  /* == */
A68_VC  TUXACTR;  /* == */
A68_VC  VUXACTR;  /* clause result */
A68_VC  YUXACTR;  /* clause result */
A68_VC  AVXACTR;  /* avoid structure result */
A68_VC  DVXACTR;  /* avoid structure result */
A68_VC  HVXACTR;  /* avoid structure result */
A68_VC  JVXACTR;  /* avoid structure result */
A68_VC  MVXACTR;  /* avoid structure result */
A68_VC  OVXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_77  PVXACTR_u;
A68_VC  SVXACTR;  /* clause result */
A68_VC  UVXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  XVXACTR;  /* ADICOPS - ABS INT */
A68_VC  YVXACTR;  /* avoid structure result */
A68_VC  ZVXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  AWXACTR;  /* ADICOPS - ABS INT */
A68_VC  BWXACTR;  /* avoid structure result */
A68_VC  CWXACTR;  /* avoid structure result */
A68_VC  EWXACTR;  /* avoid structure result */
A68_55  FWXACTR_c;
A68_VC  IWXACTR;  /* avoid structure result */
A68_78  JWXACTR_k;
A68_VC  MWXACTR;  /* clause result */
A68_58  RWXACTR_c;
A68_VC  YWXACTR;  /* avoid structure result */
A68_VC  AXXACTR;  /* avoid structure result */
A68_63  CXXACTR_f;
A68_VC  IXXACTR;  /* avoid structure result */
A68_VC  KXXACTR;  /* avoid structure result */
A68_VC  MXXACTR;  /* avoid structure result */
A68_79  QXXACTR_s;
A68_VC  TXXACTR;  /* clause result */
A68_VC  VYXACTR;  /* avoid structure result */
A68_VC  XYXACTR;  /* clause result */
A68_VC  BZXACTR;  /* clause result */
A68_VC  DZXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  GZXACTR;  /* ADICOPS - ABS INT */
A68_VC  HZXACTR;  /* avoid structure result */
A68_VC  IZXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  JZXACTR;  /* ADICOPS - ABS INT */
A68_VC  KZXACTR;  /* avoid structure result */
A68_VC  MZXACTR;  /* avoid structure result */
A68_VC  OZXACTR;  /* avoid structure result */
A68_80  PZXACTR_s;
A68_VC  SZXACTR;  /* clause result */
A68_VC  MAYACTR;  /* avoid structure result */
A68_VC  PAYACTR;  /* clause result */
A68_VC  RAYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  UAYACTR;  /* clause result */
A68_VC  WAYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  YAYACTR;  /* clause result */
A68_INT  ABYACTR;  /* ADICOPS - ABS INT */
A68_VC  BBYACTR;  /* avoid structure result */
A68_VC  CBYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  DBYACTR;  /* ADICOPS - ABS INT */
A68_VC  EBYACTR;  /* avoid structure result */
A68_VC  GBYACTR;  /* avoid structure result */
A68_INT  IBYACTR;  /* ADICOPS - ABS INT */
A68_VC  JBYACTR;  /* avoid structure result */
A68_VC  KBYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  LBYACTR;  /* ADICOPS - ABS INT */
A68_VC  MBYACTR;  /* avoid structure result */
A68_81  OBYACTR_t;
A68_VC  RBYACTR;  /* clause result */
A68_VC  LCYACTR;  /* avoid structure result */
A68_VC  NCYACTR;  /* avoid structure result */
A68_59  OCYACTR_c;
A68_59  PCYACTR;  /* united object - for case conformity */
A68_56  QCYACTR_c;
A68_VC  UCYACTR;  /* avoid structure result */
A68_VC  WCYACTR;  /* avoid structure result */
A68_60  XCYACTR_s;
A68_VC  CDYACTR;  /* avoid structure result */
A68_VC  EDYACTR;  /* avoid structure result */
A68_VC  GDYACTR;  /* avoid structure result */
A68_61  HDYACTR_e;
A68_VC  ODYACTR;  /* avoid structure result */
A68_VC  TDYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  AEYACTR;  /* clause result */
A68_VC  BEYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(imperativemnemonic);
 /* line 167: */
 /* line 168: */
LBXACTR = Imperative ;
switch ( LBXACTR.mode )
{ 
case 1: /* STRUCT(INT)  */
case 2: /* INT */
case 3: /* BOOL */
case 4: /* STRUCT(REF MODE26)  */
case 5: /* STRUCT(INT)  */
case 6: /* STRUCT(INT,REF MODE26)  */
case 7: /* STRUCT(INT,REF MODE26)  */
case 8: /* STRUCT(INT,LONG BITS)  */
case 9: /* STRUCT(INT,REF MODE26)  */
case 10: /* STRUCT(INT,INT,INT)  */
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
case 13: /* STRUCT(INT)  */
case 14: /* STRUCT(REF MODE26,INT,INT,BOOL)  */
case 15: /* STRUCT(INT,BITS,INT)  */
case 16: /* STRUCT(INT)  */
case 17: /* STRUCT(BOOL)  */
case 18: /* STRUCT(MODE64,REF MODE26)  */
case 19: /* STRUCT(INT,INT,REF MODE26)  */
A_UNCPY(MBXACTR_p,LBXACTR);
 /* line 169: */
 /* line 170: */
NBXACTR = MBXACTR_p ;
switch ( NBXACTR.mode )
{ 
case 1: /* STRUCT(INT)  */
case 2: /* INT */
case 3: /* BOOL */
case 4: /* STRUCT(REF MODE26)  */
case 5: /* STRUCT(INT)  */
case 6: /* STRUCT(INT,REF MODE26)  */
case 7: /* STRUCT(INT,REF MODE26)  */
case 8: /* STRUCT(INT,LONG BITS)  */
case 9: /* STRUCT(INT,REF MODE26)  */
A_UNCPY(OBXACTR_l,NBXACTR);
 /* line 171: */
 /* line 176: */
PBXACTR = OBXACTR_l ;
switch ( PBXACTR.mode )
{ 
case 1: /* STRUCT(INT)  */
QBXACTR_si = (PBXACTR.data.mode1);
 /* line 177: */
 /* line 179: */
switch ( QBXACTR_si.Nse )
{ 
case 1: 
TBXACTR = UBXACTR;
break;
case 2: 
 /* line 180: */
TBXACTR = WBXACTR;
break;
case 3: 
TBXACTR = YBXACTR;
break;
default: 
 /* line 181: */
ROAAOSF_whole( QBXACTR_si.Nse, EAXACTR_fieldlength, &BCXACTR );
TBXACTR = A_VC_PLUS(ACXACTR,BCXACTR);
break;
} 
 /* line 183: */
CCXACTR = A_VC_PLUS(DCXACTR,TBXACTR);
break;
case 2: /* INT */
ECXACTR_i = (PBXACTR.data.mode2);
 /* line 184: */
 /* line 185: */
 /* line 186: */
 /* line 188: */
ROAAOSF_whole( ECXACTR_i, EAXACTR_fieldlength, &ICXACTR );
UTKACTR_idfullname( ECXACTR_i, &KCXACTR );
CCXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(HCXACTR,ICXACTR),JCXACTR),KCXACTR),A_HVEC(LCXACTR,'\"',A68_CHAR ));
break;
case 3: /* BOOL */
MCXACTR_b = (PBXACTR.data.mode3);
 /* line 189: */
 /* line 190: */
if ( MCXACTR_b )
{ 
PCXACTR = QCXACTR;
} 
else
{ 
PCXACTR = SCXACTR;
} 
 /* line 192: */
CCXACTR = A_VC_PLUS(TCXACTR,PCXACTR);
break;
case 4: /* STRUCT(REF MODE26)  */
UCXACTR_c = (PBXACTR.data.mode4);
 /* line 193: */
 /* line 195: */
CCXACTR = A_VC_PLUS(WCXACTR,UCXACTR_c.Representation);
break;
case 5: /* STRUCT(INT)  */
XCXACTR_sl = (PBXACTR.data.mode5);
 /* line 196: */
 /* line 197: */
 /* line 199: */
ROAAOSF_whole( XCXACTR_sl.Labno, EAXACTR_fieldlength, &ADXACTR );
CCXACTR = A_VC_PLUS(ZCXACTR,ADXACTR);
break;
case 6: /* STRUCT(INT,REF MODE26)  */
BDXACTR_n = (PBXACTR.data.mode6);
 /* line 200: */
 /* line 201: */
 /* line 202: */
 /* line 203: */
if ( (BDXACTR_n.Mode<0) )
{ 
 /* line 204: */
EDXACTR = FDXACTR;
} 
else
{ 
EDXACTR = A_HVEC(GDXACTR,'=',A68_CHAR );
} 
 /* line 205: */
 /* line 206: */
 /* line 207: */
 /* line 209: */
JDXACTR = BDXACTR_n.Mode ;
ROAAOSF_whole( A_ABS(JDXACTR), EAXACTR_fieldlength, &KDXACTR );
MDXACTR = BDXACTR_n.Mode ;
WCNACTR_modename( A_ABS(MDXACTR), &NDXACTR );
CCXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(IDXACTR,EDXACTR),KDXACTR),A_HVEC(LDXACTR,'=',A68_CHAR )),NDXACTR),ODXACTR),BDXACTR_n.Nu);
break;
case 7: /* STRUCT(INT,REF MODE26)  */
PDXACTR_a = (PBXACTR.data.mode7);
 /* line 210: */
 /* line 211: */
 /* line 212: */
 /* line 213: */
if ( (PDXACTR_a.Mode<0) )
{ 
 /* line 214: */
SDXACTR = TDXACTR;
} 
else
{ 
SDXACTR = A_HVEC(UDXACTR,'=',A68_CHAR );
} 
 /* line 215: */
 /* line 216: */
 /* line 218: */
XDXACTR = PDXACTR_a.Mode ;
ROAAOSF_whole( A_ABS(XDXACTR), EAXACTR_fieldlength, &YDXACTR );
AEXACTR = PDXACTR_a.Mode ;
WCNACTR_modename( A_ABS(AEXACTR), &BEXACTR );
CCXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(WDXACTR,SDXACTR),YDXACTR),A_HVEC(ZDXACTR,'=',A68_CHAR )),BEXACTR),CEXACTR),PDXACTR_a.String),A_HVEC(DEXACTR,'\"',A68_CHAR ));
break;
case 8: /* STRUCT(INT,LONG BITS)  */
EEXACTR_o = (PBXACTR.data.mode8);
 /* line 219: */
 /* line 220: */
 /* line 221: */
 /* line 222: */
if ( (EEXACTR_o.Mode<0) )
{ 
 /* line 223: */
HEXACTR = IEXACTR;
} 
else
{ 
HEXACTR = A_HVEC(JEXACTR,'=',A68_CHAR );
} 
 /* line 224: */
 /* line 225: */
 /* line 226: */
 /* line 229: */
MEXACTR = EEXACTR_o.Mode ;
ROAAOSF_whole( A_ABS(MEXACTR), EAXACTR_fieldlength, &NEXACTR );
PEXACTR = EEXACTR_o.Mode ;
WCNACTR_modename( A_ABS(PEXACTR), &QEXACTR );
JPAAOSF_lwhole( (A68_LINT )EEXACTR_o.Denotation, EAXACTR_fieldlength, &SEXACTR );
CCXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(LEXACTR,HEXACTR),NEXACTR),A_HVEC(OEXACTR,'=',A68_CHAR )),QEXACTR),REXACTR),SEXACTR);
break;
case 9: /* STRUCT(INT,REF MODE26)  */
TEXACTR_st = (PBXACTR.data.mode9);
 /* line 230: */
 /* line 231: */
 /* line 232: */
 /* line 233: */
if ( (TEXACTR_st.Mode<0) )
{ 
 /* line 234: */
WEXACTR = XEXACTR;
} 
else
{ 
WEXACTR = A_HVEC(YEXACTR,'=',A68_CHAR );
} 
 /* line 235: */
 /* line 236: */
 /* line 237: */
 /* line 238: */
 /* line 239: */
BFXACTR = TEXACTR_st.Mode ;
ROAAOSF_whole( A_ABS(BFXACTR), EAXACTR_fieldlength, &CFXACTR );
EFXACTR = TEXACTR_st.Mode ;
WCNACTR_modename( A_ABS(EFXACTR), &FFXACTR );
CCXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(AFXACTR,WEXACTR),CFXACTR),A_HVEC(DFXACTR,'=',A68_CHAR )),FFXACTR),GFXACTR),TEXACTR_st.Denotation),A_HVEC(HFXACTR,'\"',A68_CHAR ));
break;
default: 
 /* line 241: */
CCXACTR = JFXACTR;
break;
} 
break;
case 10: /* STRUCT(INT,INT,INT)  */
KFXACTR_o = (NBXACTR.data.mode10);
 /* line 242: */
 /* line 243: */
{ 
 /* line 254: */
ROAAOSF_whole( KFXACTR_o.Param, EAXACTR_fieldlength, &XHXACTR );
YHXACTR_p = XHXACTR;
 /* line 255: */
 /* line 256: */
 /* line 257: */
 /* line 258: */
if ( (KFXACTR_o.Mode<0) )
{ 
 /* line 259: */
AIXACTR = BIXACTR;
} 
else
{ 
 /* line 260: */
AIXACTR = A_HVEC(CIXACTR,'=',A68_CHAR );
} 
 /* line 261: */
DIXACTR = KFXACTR_o.Mode ;
ROAAOSF_whole( A_ABS(DIXACTR), EAXACTR_fieldlength, &EIXACTR );
GIXACTR = KFXACTR_o.Mode ;
WCNACTR_modename( A_ABS(GIXACTR), &HIXACTR );
IIXACTR_m = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(AIXACTR,EIXACTR),A_HVEC(FIXACTR,'=',A68_CHAR )),HIXACTR);
 /* line 263: */
 /* line 264: */
 /* line 265: */
switch ( KFXACTR_o.Fn )
{ 
case 1: 
 /* line 266: */
 /* line 267: */
 /* line 268: */
if ( (KFXACTR_o.Param==(A68_TRUE)) )
{ 
 /* line 269: */
MIXACTR = NIXACTR;
} 
else
{ 
MIXACTR = PIXACTR;
} 
 /* line 271: */
QIXACTR = A_VC_PLUS(A_VC_PLUS(RIXACTR,MIXACTR),IIXACTR_m);
break;
case 2: 
 /* line 273: */
QIXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(UIXACTR,YHXACTR_p),VIXACTR),IIXACTR_m);
break;
case 3: 
 /* line 274: */
 /* line 276: */
QIXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(YIXACTR,YHXACTR_p),ZIXACTR),IIXACTR_m);
break;
case 4: 
 /* line 278: */
QIXACTR = A_VC_PLUS(BJXACTR,IIXACTR_m);
break;
case 5: 
 /* line 279: */
 /* line 280: */
FJXACTR = KFXACTR_o.Mode ;
GJXACTR = 8 ;
switch ( A_MOD(FJXACTR,GJXACTR,EJXACTR) )
{ 
case 1: 
IJXACTR = JJXACTR;
break;
case 2: 
IJXACTR = LJXACTR;
break;
case 3: 
 /* line 281: */
IJXACTR = NJXACTR;
break;
case 4: 
IJXACTR = PJXACTR;
break;
case 5: 
IJXACTR = RJXACTR;
break;
case 6: 
 /* line 283: */
IJXACTR = TJXACTR;
break;
case 7: 
 /* line 284: */
IJXACTR = VJXACTR;
break;
default: 
IJXACTR = XJXACTR;
break;
} 
 /* line 285: */
if ( (KFXACTR_o.Mode>7) )
{ 
ZJXACTR = AKXACTR;
} 
else
{ 
ZJXACTR = CKXACTR;
} 
 /* line 287: */
QIXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(DKXACTR,YHXACTR_p),EKXACTR),IJXACTR),ZJXACTR);
break;
case 6: 
 /* line 288: */
 /* line 290: */
ROAAOSF_whole( (1+KFXACTR_o.Param), 0, &JKXACTR );
QIXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(IKXACTR,JKXACTR),KKXACTR),YHXACTR_p),LKXACTR),IIXACTR_m);
break;
case 7: 
 /* line 291: */
 /* line 293: */
ROAAOSF_whole( (1+KFXACTR_o.Param), 0, &PKXACTR );
QIXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(OKXACTR,PKXACTR),QKXACTR),IIXACTR_m);
break;
case 8: 
 /* line 295: */
QIXACTR = A_VC_PLUS(SKXACTR,IIXACTR_m);
break;
case 9: 
 /* line 297: */
QIXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(VKXACTR,YHXACTR_p),WKXACTR),IIXACTR_m);
break;
case 10: 
 /* line 298: */
 /* line 299: */
 /* line 300: */
 /* line 301: */
 /* line 302: */
 /* line 304: */
ROAAOSF_whole( (KFXACTR_o.Param/16), EAXACTR_fieldlength, &CLXACTR );
NFXACTR_standardpreludeops( ((KFXACTR_o.Param/16)+1), &ELXACTR );
HLXACTR = KFXACTR_o.Param ;
ILXACTR = 16 ;
ROAAOSF_whole( A_MOD(HLXACTR,ILXACTR,GLXACTR), EAXACTR_fieldlength, &JLXACTR );
QIXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(BLXACTR,CLXACTR),DLXACTR),ELXACTR),FLXACTR),JLXACTR),KLXACTR),IIXACTR_m);
break;
case 11: 
 /* line 305: */
 /* line 306: */
 /* line 307: */
switch ( ((KFXACTR_o.Param/16)+1) )
{ 
case 1: 
NLXACTR = A_HVEC(OLXACTR,'+',A68_CHAR );
break;
case 2: 
NLXACTR = A_HVEC(PLXACTR,'-',A68_CHAR );
break;
case 3: 
NLXACTR = RLXACTR;
break;
case 4: 
NLXACTR = TLXACTR;
break;
case 5: 
 /* line 308: */
NLXACTR = VLXACTR;
break;
case 6: 
NLXACTR = XLXACTR;
break;
case 7: 
NLXACTR = ZLXACTR;
break;
case 8: 
NLXACTR = BMXACTR;
break;
case 9: 
NLXACTR = DMXACTR;
break;
case 10: 
 /* line 309: */
NLXACTR = FMXACTR;
break;
case 11: 
NLXACTR = HMXACTR;
break;
case 12: 
NLXACTR = JMXACTR;
break;
case 13: 
NLXACTR = LMXACTR;
break;
case 14: 
NLXACTR = NMXACTR;
break;
case 15: 
 /* line 310: */
NLXACTR = PMXACTR;
break;
case 16: 
NLXACTR = RMXACTR;
break;
case 17: 
 /* line 311: */
NLXACTR = TMXACTR;
break;
case 18: 
 /* line 312: */
NLXACTR = VMXACTR;
break;
default: 
NLXACTR = XMXACTR;
break;
} 
 /* line 313: */
 /* line 314: */
 /* line 315: */
 /* line 317: */
ROAAOSF_whole( (KFXACTR_o.Param/16), EAXACTR_fieldlength, &BNXACTR );
FNXACTR = KFXACTR_o.Param ;
GNXACTR = 16 ;
ROAAOSF_whole( A_MOD(FNXACTR,GNXACTR,ENXACTR), EAXACTR_fieldlength, &HNXACTR );
QIXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(ANXACTR,BNXACTR),CNXACTR),NLXACTR),DNXACTR),HNXACTR),INXACTR),IIXACTR_m);
break;
case 12: 
 /* line 318: */
 /* line 319: */
if ( (KFXACTR_o.Param==1) )
{ 
MNXACTR = NNXACTR;
} 
else
{ 
 /* line 320: */
if ( (KFXACTR_o.Param==(-1)) )
{ 
MNXACTR = PNXACTR;
} 
else
{ 
 /* line 321: */
if ( (KFXACTR_o.Param>1) )
{ 
MNXACTR = RNXACTR;
} 
else
{ 
 /* line 322: */
 /* line 323: */
ROAAOSF_whole( ((-1)-KFXACTR_o.Param), EAXACTR_fieldlength, &VNXACTR );
MNXACTR = A_VC_PLUS(A_VC_PLUS(UNXACTR,VNXACTR),WNXACTR);
} 
} 
} 
 /* line 325: */
QIXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(XNXACTR,IIXACTR_m),YNXACTR),MNXACTR);
break;
case 13: 
 /* line 327: */
QIXACTR = A_VC_PLUS(AOXACTR,IIXACTR_m);
break;
case 14: 
 /* line 329: */
QIXACTR = A_VC_PLUS(COXACTR,IIXACTR_m);
break;
case 15: 
 /* line 331: */
QIXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(FOXACTR,YHXACTR_p),GOXACTR),IIXACTR_m);
break;
case 16: 
 /* line 333: */
QIXACTR = A_VC_PLUS(IOXACTR,IIXACTR_m);
break;
case 17: 
 /* line 335: */
QIXACTR = A_VC_PLUS(KOXACTR,IIXACTR_m);
break;
case 18: 
 /* line 336: */
 /* line 337: */
switch ( (KFXACTR_o.Param+1) )
{ 
case 1: 
 /* line 338: */
NOXACTR = OOXACTR;
break;
case 2: 
 /* line 339: */
NOXACTR = QOXACTR;
break;
case 3: 
 /* line 340: */
NOXACTR = SOXACTR;
break;
case 4: 
 /* line 342: */
NOXACTR = UOXACTR;
break;
case 5: 
NOXACTR = WOXACTR;
break;
default: 
 /* line 343: */
NOXACTR = A_VC_PLUS(YOXACTR,YHXACTR_p);
break;
} 
 /* line 345: */
QIXACTR = A_VC_PLUS(A_VC_PLUS(ZOXACTR,IIXACTR_m),NOXACTR);
break;
case 19: 
 /* line 347: */
QIXACTR = BPXACTR;
break;
case 20: 
 /* line 349: */
QIXACTR = A_VC_PLUS(DPXACTR,IIXACTR_m);
break;
case 21: 
 /* line 351: */
QIXACTR = A_VC_PLUS(FPXACTR,IIXACTR_m);
break;
case 22: 
 /* line 353: */
QIXACTR = A_VC_PLUS(HPXACTR,IIXACTR_m);
break;
case 23: 
 /* line 355: */
QIXACTR = A_VC_PLUS(JPXACTR,IIXACTR_m);
break;
case 24: 
 /* line 357: */
QIXACTR = A_VC_PLUS(LPXACTR,IIXACTR_m);
break;
case 25: 
 /* line 359: */
QIXACTR = A_VC_PLUS(NPXACTR,IIXACTR_m);
break;
case 26: 
 /* line 361: */
QIXACTR = A_VC_PLUS(PPXACTR,IIXACTR_m);
break;
case 27: 
 /* line 363: */
QIXACTR = A_VC_PLUS(RPXACTR,IIXACTR_m);
break;
case 28: 
 /* line 365: */
QIXACTR = A_VC_PLUS(TPXACTR,IIXACTR_m);
break;
case 29: 
 /* line 367: */
QIXACTR = A_VC_PLUS(VPXACTR,IIXACTR_m);
break;
case 30: 
 /* line 369: */
QIXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(YPXACTR,YHXACTR_p),ZPXACTR),IIXACTR_m);
break;
case 31: 
 /* line 371: */
QIXACTR = A_VC_PLUS(BQXACTR,IIXACTR_m);
break;
case 32: 
 /* line 372: */
 /* line 374: */
QIXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(EQXACTR,YHXACTR_p),FQXACTR),IIXACTR_m);
break;
case 33: 
 /* line 376: */
QIXACTR = A_VC_PLUS(HQXACTR,IIXACTR_m);
break;
case 34: 
 /* line 378: */
QIXACTR = A_VC_PLUS(JQXACTR,IIXACTR_m);
break;
case 35: 
 /* line 380: */
QIXACTR = A_VC_PLUS(LQXACTR,IIXACTR_m);
break;
case 36: 
 /* line 382: */
QIXACTR = A_VC_PLUS(NQXACTR,IIXACTR_m);
break;
case 37: 
 /* line 384: */
QIXACTR = A_VC_PLUS(PQXACTR,IIXACTR_m);
break;
case 38: 
 /* line 386: */
QIXACTR = A_VC_PLUS(RQXACTR,IIXACTR_m);
break;
case 39: 
 /* line 388: */
QIXACTR = A_VC_PLUS(TQXACTR,IIXACTR_m);
break;
case 40: 
 /* line 390: */
 /* line 391: */
QIXACTR = A_VC_PLUS(IIXACTR_m,VQXACTR);
break;
default: 
 /* line 392: */
 /* line 393: */
if ( (KFXACTR_o.Fn==50) )
{ 
QIXACTR = XQXACTR;
} 
else
{ 
 /* line 394: */
 /* line 395: */
if ( (KFXACTR_o.Fn==51) )
{ 
 /* line 396: */
QIXACTR = ZQXACTR;
} 
else
{ 
 /* line 397: */
 /* line 398: */
QIXACTR = BRXACTR;
} 
} 
break;
} 
 /* line 400: */
CCXACTR = A_VC_PLUS(CRXACTR,QIXACTR);
} 
break;
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
DRXACTR_t = (NBXACTR.data.mode11);
 /* line 401: */
 /* line 402: */
 /* line 403: */
switch ( DRXACTR_t.Type )
{ 
case 1: 
 /* line 404: */
GRXACTR = HRXACTR;
break;
case 2: 
 /* line 405: */
GRXACTR = JRXACTR;
break;
case 3: 
 /* line 406: */
GRXACTR = LRXACTR;
break;
case 4: 
 /* line 407: */
GRXACTR = NRXACTR;
break;
case 5: 
 /* line 408: */
GRXACTR = PRXACTR;
break;
case 6: 
 /* line 409: */
GRXACTR = RRXACTR;
break;
case 7: 
 /* line 411: */
GRXACTR = TRXACTR;
break;
case 8: 
GRXACTR = VRXACTR;
break;
default: 
 /* line 412: */
 /* line 413: */
ROAAOSF_whole( DRXACTR_t.Type, EAXACTR_fieldlength, &YRXACTR );
GRXACTR = A_VC_PLUS(XRXACTR,YRXACTR);
break;
} 
 /* line 414: */
 /* line 415: */
 /* line 416: */
if ( (DRXACTR_t.Mode<0) )
{ 
CSXACTR = DSXACTR;
} 
else
{ 
CSXACTR = A_HVEC(ESXACTR,'=',A68_CHAR );
} 
 /* line 417: */
 /* line 418: */
 /* line 419: */
 /* line 421: */
JSXACTR = DRXACTR_t.Mode ;
ROAAOSF_whole( A_ABS(JSXACTR), EAXACTR_fieldlength, &KSXACTR );
MSXACTR = DRXACTR_t.Mode ;
WCNACTR_modename( A_ABS(MSXACTR), &NSXACTR );
ROAAOSF_whole( DRXACTR_t.Decno, EAXACTR_fieldlength, &PSXACTR );
CCXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(GSXACTR,GRXACTR),HSXACTR),DRXACTR_t.Name),ISXACTR),CSXACTR),KSXACTR),A_HVEC(LSXACTR,'=',A68_CHAR )),NSXACTR),OSXACTR),PSXACTR);
break;
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
QSXACTR_r = (NBXACTR.data.mode12);
 /* line 422: */
 /* line 423: */
 /* line 424: */
 /* line 425: */
if ( (QSXACTR_r.Mode<0) )
{ 
USXACTR = VSXACTR;
} 
else
{ 
USXACTR = A_HVEC(WSXACTR,'=',A68_CHAR );
} 
 /* line 426: */
 /* line 427: */
 /* line 430: */
 /* line 431: */
 /* line 432: */
if ( (QSXACTR_r.Maxname<3) )
{ 
YSXACTR = ZSXACTR;
} 
else
{ 
 /* line 433: */
 /* line 434: */
if ( (QSXACTR_r.Maxname==3) )
{ 
YSXACTR = BTXACTR;
} 
else
{ 
 /* line 435: */
 /* line 436: */
 /* line 437: */
ROAAOSF_whole( QSXACTR_r.Maxname, EAXACTR_fieldlength, &FTXACTR );
UTKACTR_idfullname( QSXACTR_r.Maxname, &HTXACTR );
YSXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(ETXACTR,FTXACTR),GTXACTR),HTXACTR),A_HVEC(ITXACTR,'\"',A68_CHAR ));
} 
} 
 /* line 438: */
 /* line 440: */
HAXACTR_bitmnemonic( (A68_BITS )(QSXACTR_r.Props&DAXACTR_maskxroutine), A68_FALSE, &MTXACTR );
OTXACTR = QSXACTR_r.Mode ;
ROAAOSF_whole( A_ABS(OTXACTR), EAXACTR_fieldlength, &PTXACTR );
RTXACTR = QSXACTR_r.Mode ;
WCNACTR_modename( A_ABS(RTXACTR), &STXACTR );
ROAAOSF_whole( QSXACTR_r.Rdenno, EAXACTR_fieldlength, &UTXACTR );
CCXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(KTXACTR,QSXACTR_r.Name),A_HVEC(LTXACTR,'\"',A68_CHAR )),MTXACTR),NTXACTR),USXACTR),PTXACTR),A_HVEC(QTXACTR,'=',A68_CHAR )),STXACTR),YSXACTR),TTXACTR),UTXACTR);
break;
case 13: /* STRUCT(INT)  */
VTXACTR_w = (NBXACTR.data.mode13);
 /* line 441: */
 /* line 442: */
 /* line 443: */
switch ( VTXACTR_w.W )
{ 
case 1: 
YTXACTR = ZTXACTR;
break;
case 2: 
YTXACTR = BUXACTR;
break;
case 3: 
YTXACTR = DUXACTR;
break;
case 4: 
 /* line 444: */
YTXACTR = FUXACTR;
break;
case 5: 
YTXACTR = HUXACTR;
break;
case 6: 
 /* line 445: */
YTXACTR = JUXACTR;
break;
case 7: 
 /* line 446: */
YTXACTR = LUXACTR;
break;
default: 
YTXACTR = NUXACTR;
break;
} 
 /* line 448: */
CCXACTR = A_VC_PLUS(OUXACTR,YTXACTR);
break;
case 14: /* STRUCT(REF MODE26,INT,INT,BOOL)  */
PUXACTR_l = (NBXACTR.data.mode14);
 /* line 449: */
 /* line 450: */
SUXACTR = A_VVAC(RUXACTR) ;
TUXACTR = PUXACTR_l.Name ;
if ( A_VSTRUCTCOMP(TUXACTR,SUXACTR) )
{ 
VUXACTR = WUXACTR;
} 
else
{ 
 /* line 451: */
VUXACTR = PUXACTR_l.Name;
} 
 /* line 453: */
if ( PUXACTR_l.Notsetting )
{ 
 /* line 455: */
switch ( (PUXACTR_l.Status+1) )
{ 
case 1: 
 /* line 457: */
ROAAOSF_whole( PUXACTR_l.Labno, EAXACTR_fieldlength, &AVXACTR );
YUXACTR = A_VC_PLUS(ZUXACTR,AVXACTR);
break;
case 2: 
 /* line 458: */
 /* line 459: */
 /* line 460: */
ROAAOSF_whole( PUXACTR_l.Labno, EAXACTR_fieldlength, &DVXACTR );
YUXACTR = A_VC_PLUS(CVXACTR,DVXACTR);
break;
default: 
 /* line 461: */
 /* line 462: */
 /* line 463: */
 /* line 464: */
ROAAOSF_whole( PUXACTR_l.Status, EAXACTR_fieldlength, &HVXACTR );
ROAAOSF_whole( PUXACTR_l.Labno, EAXACTR_fieldlength, &JVXACTR );
YUXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(GVXACTR,HVXACTR),IVXACTR),JVXACTR);
break;
} 
} 
else
{ 
 /* line 465: */
 /* line 466: */
ROAAOSF_whole( PUXACTR_l.Labno, EAXACTR_fieldlength, &MVXACTR );
YUXACTR = A_VC_PLUS(LVXACTR,MVXACTR);
} 
 /* line 468: */
CCXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(NVXACTR,VUXACTR),A_HVEC(OVXACTR,'\"',A68_CHAR )),YUXACTR);
break;
case 15: /* STRUCT(INT,BITS,INT)  */
PVXACTR_u = (NBXACTR.data.mode15);
 /* line 469: */
 /* line 470: */
if ( (PVXACTR_u.Mode<0) )
{ 
SVXACTR = TVXACTR;
} 
else
{ 
SVXACTR = A_HVEC(UVXACTR,'=',A68_CHAR );
} 
 /* line 471: */
 /* line 472: */
 /* line 473: */
 /* line 474: */
 /* line 476: */
XVXACTR = PVXACTR_u.Mode ;
ROAAOSF_whole( A_ABS(XVXACTR), EAXACTR_fieldlength, &YVXACTR );
AWXACTR = PVXACTR_u.Mode ;
WCNACTR_modename( A_ABS(AWXACTR), &BWXACTR );
HAXACTR_bitmnemonic( (A68_BITS )(PVXACTR_u.Props&WCAACTR_decbit), A68_TRUE, &CWXACTR );
ROAAOSF_whole( PVXACTR_u.Param, EAXACTR_fieldlength, &EWXACTR );
CCXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(WVXACTR,SVXACTR),YVXACTR),A_HVEC(ZVXACTR,'=',A68_CHAR )),BWXACTR),CWXACTR),DWXACTR),EWXACTR);
break;
case 16: /* STRUCT(INT)  */
FWXACTR_c = (NBXACTR.data.mode16);
 /* line 477: */
 /* line 478: */
 /* line 480: */
ROAAOSF_whole( FWXACTR_c.I, EAXACTR_fieldlength, &IWXACTR );
CCXACTR = A_VC_PLUS(HWXACTR,IWXACTR);
break;
case 17: /* STRUCT(BOOL)  */
JWXACTR_k = (NBXACTR.data.mode17);
 /* line 481: */
 /* line 482: */
if ( JWXACTR_k.Start )
{ 
MWXACTR = NWXACTR;
} 
else
{ 
MWXACTR = PWXACTR;
} 
 /* line 484: */
CCXACTR = A_VC_PLUS(QWXACTR,MWXACTR);
break;
case 19: /* STRUCT(INT,INT,REF MODE26)  */
RWXACTR_c = (NBXACTR.data.mode19);
 /* line 485: */
 /* line 486: */
 /* line 487: */
 /* line 488: */
 /* line 490: */
ROAAOSF_whole( RWXACTR_c.Mode, 0, &YWXACTR );
ROAAOSF_whole( RWXACTR_c.Number, 0, &AXXACTR );
CCXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(WWXACTR,XWXACTR),YWXACTR),ZWXACTR),AXXACTR),BXXACTR);
break;
case 18: /* STRUCT(MODE64,REF MODE26)  */
CXXACTR_f = (NBXACTR.data.mode18);
 /* line 491: */
 /* line 492: */
 /* line 493: */
 /* line 494: */
 /* line 495: */
 /* line 496: */
 /* line 497: */
 /* line 498: */
 /* line 499: */
ROAAOSF_whole( CXXACTR_f.Info.Nochars, EAXACTR_fieldlength, &IXXACTR );
ROAAOSF_whole( CXXACTR_f.Info.Nocases, EAXACTR_fieldlength, &KXXACTR );
ROAAOSF_whole( CXXACTR_f.Info.W, EAXACTR_fieldlength, &MXXACTR );
CCXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(HXXACTR,IXXACTR),JXXACTR),KXXACTR),LXXACTR),MXXACTR),NXXACTR),CXXACTR_f.Text);
break;
default: 
 /* line 502: */
CCXACTR = PXXACTR;
break;
} 
break;
case 20: /* STRUCT(INT,INT,BITS,INT)  */
QXXACTR_s = (LBXACTR.data.mode20);
 /* line 503: */
 /* line 504: */
switch ( QXXACTR_s.Fn )
{ 
case 1: 
TXXACTR = UXXACTR;
break;
case 2: 
TXXACTR = WXXACTR;
break;
case 3: 
 /* line 505: */
TXXACTR = YXXACTR;
break;
case 4: 
TXXACTR = AYXACTR;
break;
case 5: 
TXXACTR = CYXACTR;
break;
case 6: 
 /* line 506: */
TXXACTR = EYXACTR;
break;
case 7: 
TXXACTR = GYXACTR;
break;
case 8: 
TXXACTR = IYXACTR;
break;
case 9: 
 /* line 507: */
TXXACTR = KYXACTR;
break;
case 10: 
TXXACTR = MYXACTR;
break;
case 11: 
TXXACTR = OYXACTR;
break;
case 12: 
 /* line 509: */
TXXACTR = QYXACTR;
break;
case 13: 
 /* line 510: */
TXXACTR = SYXACTR;
break;
default: 
 /* line 511: */
 /* line 512: */
 /* line 513: */
ROAAOSF_whole( QXXACTR_s.Fn, EAXACTR_fieldlength, &VYXACTR );
TXXACTR = A_VC_PLUS(UYXACTR,VYXACTR);
break;
} 
 /* line 514: */
 /* line 515: */
 /* line 516: */
 /* line 518: */
if ( (QXXACTR_s.Fn==11) )
{ 
 /* line 519: */
XYXACTR = YYXACTR;
} 
else
{ 
 /* line 520: */
if ( (QXXACTR_s.Mode<0) )
{ 
BZXACTR = CZXACTR;
} 
else
{ 
BZXACTR = A_HVEC(DZXACTR,'=',A68_CHAR );
} 
 /* line 521: */
 /* line 522: */
 /* line 523: */
 /* line 524: */
GZXACTR = QXXACTR_s.Mode ;
ROAAOSF_whole( A_ABS(GZXACTR), EAXACTR_fieldlength, &HZXACTR );
JZXACTR = QXXACTR_s.Mode ;
WCNACTR_modename( A_ABS(JZXACTR), &KZXACTR );
ROAAOSF_whole( QXXACTR_s.Param, EAXACTR_fieldlength, &MZXACTR );
XYXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(FZXACTR,BZXACTR),HZXACTR),A_HVEC(IZXACTR,'=',A68_CHAR )),KZXACTR),LZXACTR),MZXACTR);
} 
 /* line 528: */
HAXACTR_bitmnemonic( (A68_BITS )(QXXACTR_s.Props&(A68_BITS )((A68_BITS )(XZWACTR_maskgeneral|YZWACTR_maskdynamica)|CAXACTR_maskspecial)), A68_TRUE, &OZXACTR );
CCXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(NZXACTR,TXXACTR),OZXACTR),XYXACTR);
break;
case 21: /* STRUCT(INT,INT,BITS,INT)  */
PZXACTR_s = (LBXACTR.data.mode21);
 /* line 529: */
 /* line 530: */
switch ( (PZXACTR_s.Fn+2) )
{ 
case 1: 
SZXACTR = TZXACTR;
break;
case 2: 
 /* line 531: */
SZXACTR = VZXACTR;
break;
case 3: 
 /* line 532: */
SZXACTR = XZXACTR;
break;
case 4: 
 /* line 533: */
SZXACTR = ZZXACTR;
break;
case 5: 
 /* line 534: */
SZXACTR = BAYACTR;
break;
case 6: 
 /* line 535: */
SZXACTR = DAYACTR;
break;
case 7: 
 /* line 536: */
SZXACTR = FAYACTR;
break;
case 8: 
 /* line 538: */
SZXACTR = HAYACTR;
break;
case 9: 
 /* line 539: */
SZXACTR = JAYACTR;
break;
default: 
 /* line 540: */
 /* line 541: */
 /* line 542: */
ROAAOSF_whole( PZXACTR_s.Fn, EAXACTR_fieldlength, &MAYACTR );
SZXACTR = A_VC_PLUS(LAYACTR,MAYACTR);
break;
} 
 /* line 543: */
 /* line 544: */
if ( (PZXACTR_s.Mode<0) )
{ 
PAYACTR = QAYACTR;
} 
else
{ 
PAYACTR = A_HVEC(RAYACTR,'=',A68_CHAR );
} 
 /* line 545: */
 /* line 546: */
 /* line 547: */
if ( (PZXACTR_s.Resultmode<0) )
{ 
UAYACTR = VAYACTR;
} 
else
{ 
UAYACTR = A_HVEC(WAYACTR,'=',A68_CHAR );
} 
 /* line 548: */
 /* line 549: */
 /* line 550: */
if ( ((PZXACTR_s.Fn==6)|(PZXACTR_s.Fn==7)) )
{ 
YAYACTR = ZAYACTR;
} 
else
{ 
 /* line 551: */
 /* line 552: */
ABYACTR = PZXACTR_s.Resultmode ;
ROAAOSF_whole( A_ABS(ABYACTR), EAXACTR_fieldlength, &BBYACTR );
DBYACTR = PZXACTR_s.Resultmode ;
WCNACTR_modename( A_ABS(DBYACTR), &EBYACTR );
YAYACTR = A_VC_PLUS(A_VC_PLUS(BBYACTR,A_HVEC(CBYACTR,'=',A68_CHAR )),EBYACTR);
} 
 /* line 555: */
HAXACTR_bitmnemonic( PZXACTR_s.Props, A68_TRUE, &GBYACTR );
IBYACTR = PZXACTR_s.Mode ;
ROAAOSF_whole( A_ABS(IBYACTR), EAXACTR_fieldlength, &JBYACTR );
LBYACTR = PZXACTR_s.Mode ;
WCNACTR_modename( A_ABS(LBYACTR), &MBYACTR );
CCXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(FBYACTR,SZXACTR),GBYACTR),HBYACTR),PAYACTR),JBYACTR),A_HVEC(KBYACTR,'=',A68_CHAR )),MBYACTR),NBYACTR),UAYACTR),YAYACTR);
break;
case 22: /* STRUCT(INT,BITS)  */
OBYACTR_t = (LBXACTR.data.mode22);
 /* line 556: */
 /* line 557: */
switch ( OBYACTR_t.Fn )
{ 
case 1: 
RBYACTR = SBYACTR;
break;
case 2: 
RBYACTR = UBYACTR;
break;
case 3: 
 /* line 558: */
RBYACTR = WBYACTR;
break;
case 4: 
RBYACTR = YBYACTR;
break;
case 5: 
RBYACTR = ACYACTR;
break;
case 6: 
 /* line 559: */
RBYACTR = CCYACTR;
break;
case 7: 
RBYACTR = ECYACTR;
break;
case 8: 
 /* line 560: */
RBYACTR = GCYACTR;
break;
case 9: 
 /* line 561: */
RBYACTR = ICYACTR;
break;
default: 
 /* line 562: */
 /* line 563: */
 /* line 564: */
ROAAOSF_whole( OBYACTR_t.Fn, EAXACTR_fieldlength, &LCYACTR );
RBYACTR = A_VC_PLUS(KCYACTR,LCYACTR);
break;
} 
 /* line 568: */
HAXACTR_bitmnemonic( OBYACTR_t.Props, A68_TRUE, &NCYACTR );
CCXACTR = A_VC_PLUS(A_VC_PLUS(MCYACTR,RBYACTR),NCYACTR);
break;
case 23: /* STRUCT(INT,INT,REF MODE57)  */
case 24: /* STRUCT(INT,INT,INT)  */
case 25: /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE62)  */
A_UNCPY(OCYACTR_c,LBXACTR);
OCYACTR_c.mode -= 22;
 /* line 569: */
PCYACTR = OCYACTR_c ;
switch ( PCYACTR.mode )
{ 
case 1: /* STRUCT(INT,INT,REF MODE57)  */
QCYACTR_c = (PCYACTR.data.mode1);
 /* line 570: */
 /* line 571: */
 /* line 572: */
 /* line 574: */
ROAAOSF_whole( QCYACTR_c.Body, EAXACTR_fieldlength, &UCYACTR );
ROAAOSF_whole( QCYACTR_c.Moduleno, EAXACTR_fieldlength, &WCYACTR );
CCXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(TCYACTR,UCYACTR),VCYACTR),WCYACTR);
break;
case 2: /* STRUCT(INT,INT,INT)  */
XCYACTR_s = (PCYACTR.data.mode2);
 /* line 575: */
 /* line 576: */
 /* line 577: */
 /* line 578: */
ROAAOSF_whole( XCYACTR_s.Moduleno, EAXACTR_fieldlength, &CDYACTR );
ROAAOSF_whole( XCYACTR_s.I, EAXACTR_fieldlength, &EDYACTR );
ROAAOSF_whole( XCYACTR_s.J, EAXACTR_fieldlength, &GDYACTR );
CCXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(BDYACTR,CDYACTR),DDYACTR),EDYACTR),FDYACTR),GDYACTR);
break;
case 3: /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE62)  */
HDYACTR_e = (PCYACTR.data.mode3);
 /* line 579: */
 /* line 580: */
 /* line 581: */
 /* line 582: */
 /* line 583: */
 /* line 585: */
 /* line 587: */
ROAAOSF_whole( HDYACTR_e.Moduleno, EAXACTR_fieldlength, &ODYACTR );
CCXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(NDYACTR,ODYACTR),PDYACTR),HDYACTR_e.Name),QDYACTR),HDYACTR_e.Uname),RDYACTR),HDYACTR_e.Lname),SDYACTR),HDYACTR_e.Gname),A_HVEC(TDYACTR,'\"',A68_CHAR ));
break;
default: 
 /* line 591: */
CCXACTR = VDYACTR;
break;
} 
break;
case 26: /* VOID */
 /* line 592: */
 /* line 593: */
CCXACTR = XDYACTR;
break;
default: 
 /* line 598: */
CCXACTR = ZDYACTR;
break;
} 
AEYACTR = A_VC_PLUS(CCXACTR,A_HVEC(BEYACTR,')',A68_CHAR ));
A_PROC_EXIT(imperativemnemonic);
*ReturnedValue = (AEYACTR);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 5: */
void IXWACTR(void)   /* initialise DECS mnemonics */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel","-dir",".","mnemonics.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/vak/Project/Algol/Algol-68RS-Source/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/vak/Project/Algol/Algol-68RS-Source/a68config/a68config.m","./identifiers.m","./incimperatives.m","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_116  YXWACTR;  /* procedure value */
A68_124  ZXWACTR;  /* collateral clause result */
A68_119  GZWACTR;  /* OPERATORS - istruct to row */
A68_127  IZWACTR;  /* collateral clause result */
A68_119  VZWACTR;  /* OPERATORS - istruct to row */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
OLVACTR();   /* USE identifiers */
UAAACTR();   /* USE incimperatives */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/mnemonics.a68";
A_config.translation_time = "Thu Nov  5 20:46:57 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "HXWACTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 20:46:57 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS mnemonics);
UEAALIB_a68config(LGAALIB_configinfo, MXWACTR);
 /* line 64: */
YXWACTR.fn.fn_global = PXWACTR_generator;
YXWACTR.nonlocals = A68_NIL;
NXWACTR_anonymous = YXWACTR;
 /* line 66: */
 /* line 67: */
 /* line 68: */
ZXWACTR.data[0].Name = BYWACTR;
 /* line 69: */
ZXWACTR.data[0].Value = SCAACTR_priobit;
ZXWACTR.data[1].Name = DYWACTR;
 /* line 70: */
ZXWACTR.data[1].Value = TCAACTR_exitbit;
ZXWACTR.data[2].Name = FYWACTR;
 /* line 71: */
ZXWACTR.data[2].Value = UCAACTR_semibit;
ZXWACTR.data[3].Name = HYWACTR;
 /* line 72: */
ZXWACTR.data[3].Value = VCAACTR_heapbit;
ZXWACTR.data[4].Name = JYWACTR;
 /* line 73: */
ZXWACTR.data[4].Value = WCAACTR_decbit;
ZXWACTR.data[5].Name = LYWACTR;
 /* line 74: */
ZXWACTR.data[5].Value = XCAACTR_vardecbit;
ZXWACTR.data[6].Name = NYWACTR;
 /* line 75: */
ZXWACTR.data[6].Value = YCAACTR_compgenbit;
ZXWACTR.data[7].Name = PYWACTR;
 /* line 76: */
ZXWACTR.data[7].Value = ZCAACTR_elifousebit;
ZXWACTR.data[8].Name = RYWACTR;
 /* line 77: */
ZXWACTR.data[8].Value = ADAACTR_labbit;
ZXWACTR.data[9].Name = TYWACTR;
 /* line 78: */
ZXWACTR.data[9].Value = BDAACTR_dontpullbit;
ZXWACTR.data[10].Name = VYWACTR;
 /* line 79: */
ZXWACTR.data[10].Value = CDAACTR_dyprocbit;
ZXWACTR.data[11].Name = XYWACTR;
 /* line 80: */
ZXWACTR.data[11].Value = DDAACTR_dyvardecbit;
ZXWACTR.data[12].Name = ZYWACTR;
 /* line 81: */
ZXWACTR.data[12].Value = EDAACTR_dydecbit;
ZXWACTR.data[13].Name = BZWACTR;
 /* line 82: */
ZXWACTR.data[13].Value = FDAACTR_genprocbit;
ZXWACTR.data[14].Name = DZWACTR;
 /* line 83: */
ZXWACTR.data[14].Value = GDAACTR_locgenbit;
ZXWACTR.data[15].Name = FZWACTR;
 /* line 84: */
ZXWACTR.data[15].Value = HDAACTR_locdydecbit;
HZWACTR_controlbits = A_HIS1ARR(GZWACTR,ZXWACTR,A68_115 ,16);
 /* line 86: */
 /* line 87: */
 /* line 88: */
IZWACTR.data[0].Name = KZWACTR;
 /* line 89: */
IZWACTR.data[0].Value = NCAACTR_ccbit;
IZWACTR.data[1].Name = MZWACTR;
 /* line 90: */
IZWACTR.data[1].Value = OCAACTR_operatorbit;
IZWACTR.data[2].Name = OZWACTR;
 /* line 91: */
IZWACTR.data[2].Value = PCAACTR_valbit;
IZWACTR.data[3].Name = QZWACTR;
 /* line 92: */
IZWACTR.data[3].Value = QCAACTR_holebit;
IZWACTR.data[4].Name = SZWACTR;
 /* line 93: */
IZWACTR.data[4].Value = FDAACTR_genprocbit;
IZWACTR.data[5].Name = UZWACTR;
 /* line 94: */
IZWACTR.data[5].Value = RCAACTR_globscopebit;
WZWACTR_routinebits = A_HIS1ARR(VZWACTR,IZWACTR,A68_115 ,6);
 /* line 108: */
 /* line 109: */
 /* line 110: */
 /* line 111: */
XZWACTR_maskgeneral = (A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )(SCAACTR_priobit|UCAACTR_semibit)|WCAACTR_decbit)|XCAACTR_vardecbit)|ADAACTR_labbit)|TCAACTR_exitbit)|GDAACTR_locgenbit)|HDAACTR_locdydecbit);
 /* line 112: */
 /* line 113: */
YZWACTR_maskdynamica = (A68_BITS )((A68_BITS )(CDAACTR_dyprocbit|DDAACTR_dyvardecbit)|EDAACTR_dydecbit);
 /* line 114: */
 /* line 115: */
 /* line 116: */
AAXACTR_maskdynamicc = (A68_BITS )((A68_BITS )((A68_BITS )(BDAACTR_dontpullbit|CDAACTR_dyprocbit)|DDAACTR_dyvardecbit)|EDAACTR_dydecbit);
 /* line 117: */
 /* line 118: */
BAXACTR_maskroutine = (A68_BITS )((A68_BITS )(FDAACTR_genprocbit|RCAACTR_globscopebit)|PCAACTR_valbit);
 /* line 119: */
 /* line 120: */
 /* line 121: */
 /* line 122: */
DAXACTR_maskxroutine = (A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )(NCAACTR_ccbit|OCAACTR_operatorbit)|PCAACTR_valbit)|QCAACTR_holebit)|RCAACTR_globscopebit)|FDAACTR_genprocbit);
 /* line 124: */
 /* line 145: */
 /* line 163: */
 /* line 602: */
A_PROC_EXIT(DECS mnemonics);
} 
#undef NL
/* end of translation of mnemonics.a68 */
