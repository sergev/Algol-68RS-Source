/* UNAME:PYWACTR */
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
extern void MMVACTR(void);   /* identifiers */
extern void UAAACTR(void);   /* incimperatives */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_114   TYWACTR = {"$Id: mnemonics.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,UYWACTR,TYWACTR,59)
static A68_116  VYWACTR_anonymous A_UNUSED;
static A68_40   IZWACTR = {"prio"}; 
A_GISVEC(A68_VC ,JZWACTR,IZWACTR,4)
static A68_40   KZWACTR = {"exit"}; 
A_GISVEC(A68_VC ,LZWACTR,KZWACTR,4)
static A68_40   MZWACTR = {"semi"}; 
A_GISVEC(A68_VC ,NZWACTR,MZWACTR,4)
static A68_40   OZWACTR = {"heap"}; 
A_GISVEC(A68_VC ,PZWACTR,OZWACTR,4)
static A68_120   QZWACTR = {"dec"}; 
A_GISVEC(A68_VC ,RZWACTR,QZWACTR,3)
static A68_121   SZWACTR = {"vardec"}; 
A_GISVEC(A68_VC ,TZWACTR,SZWACTR,6)
static A68_93   UZWACTR = {"compgen"}; 
A_GISVEC(A68_VC ,VZWACTR,UZWACTR,7)
static A68_122   WZWACTR = {"elifouse"}; 
A_GISVEC(A68_VC ,XZWACTR,WZWACTR,8)
static A68_120   YZWACTR = {"lab"}; 
A_GISVEC(A68_VC ,ZZWACTR,YZWACTR,3)
static A68_122   AAXACTR = {"dontpull"}; 
A_GISVEC(A68_VC ,BAXACTR,AAXACTR,8)
static A68_121   CAXACTR = {"dyproc"}; 
A_GISVEC(A68_VC ,DAXACTR,CAXACTR,6)
static A68_122   EAXACTR = {"dyvardec"}; 
A_GISVEC(A68_VC ,FAXACTR,EAXACTR,8)
static A68_123   GAXACTR = {"dydec"}; 
A_GISVEC(A68_VC ,HAXACTR,GAXACTR,5)
static A68_93   IAXACTR = {"genproc"}; 
A_GISVEC(A68_VC ,JAXACTR,IAXACTR,7)
static A68_121   KAXACTR = {"locgen"}; 
A_GISVEC(A68_VC ,LAXACTR,KAXACTR,6)
static A68_122   MAXACTR = {"locdydec"}; 
A_GISVEC(A68_VC ,NAXACTR,MAXACTR,8)
static A68_119  PAXACTR_controlbits A_UNUSED;
static A68_125   RAXACTR = {"cc"}; 
A_GISVEC(A68_VC ,SAXACTR,RAXACTR,2)
static A68_122   TAXACTR = {"operator"}; 
A_GISVEC(A68_VC ,UAXACTR,TAXACTR,8)
static A68_120   VAXACTR = {"val"}; 
A_GISVEC(A68_VC ,WAXACTR,VAXACTR,3)
static A68_40   XAXACTR = {"hole"}; 
A_GISVEC(A68_VC ,YAXACTR,XAXACTR,4)
static A68_93   ZAXACTR = {"genproc"}; 
A_GISVEC(A68_VC ,ABXACTR,ZAXACTR,7)
static A68_126   BBXACTR = {"globscope"}; 
A_GISVEC(A68_VC ,CBXACTR,BBXACTR,9)
static A68_119  EBXACTR_routinebits A_UNUSED;
static A68_BITS  FBXACTR_maskgeneral A_UNUSED;
static A68_BITS  GBXACTR_maskdynamica A_UNUSED;
#define HBXACTR_maskdynamicb BDAACTR_dontpullbit
static A68_BITS  IBXACTR_maskdynamicc A_UNUSED;
static A68_BITS  JBXACTR_maskroutine A_UNUSED;
#define KBXACTR_maskspecial ZCAACTR_elifousebit
static A68_BITS  LBXACTR_maskxroutine A_UNUSED;
#define MBXACTR_fieldlength 0
static A68_129   YBXACTR = {""}; 
A_GISVEC(A68_VC ,ZBXACTR,YBXACTR,0)
static A68_129   ICXACTR = {""}; 
A_GISVEC(A68_VC ,JCXACTR,ICXACTR,0)
static A68_129   KCXACTR = {""}; 
A_GISVEC(A68_VC ,MCXACTR,KCXACTR,0)
static A68_126   NCXACTR = {" | bits ("}; 
A_GISVEC(A68_VC ,OCXACTR,NCXACTR,9)
static A68_131   ZCXACTR = {"load:nse                  ("}; 
static A68_122   ADXACTR = {"EMPTY fn"}; 
A_GISVEC(A68_VC ,CDXACTR,ADXACTR,8)
static A68_93   DDXACTR = {"SKIP fn"}; 
A_GISVEC(A68_VC ,EDXACTR,DDXACTR,7)
static A68_121   FDXACTR = {"NIL fn"}; 
A_GISVEC(A68_VC ,GDXACTR,FDXACTR,6)
static A68_132   HDXACTR = {"ERROR: nse="}; 
A_GISVEC(A68_VC ,IDXACTR,HDXACTR,11)
A_GISVEC(A68_VC ,LDXACTR,ZCXACTR,27)
static A68_131   NDXACTR = {"load:int                  ("}; 
static A68_125   ODXACTR = {"=\""}; 
A_GISVEC(A68_VC ,PDXACTR,NDXACTR,27)
A_GISVEC(A68_VC ,RDXACTR,ODXACTR,2)
static A68_131   VDXACTR = {"load:bool                 ("}; 
static A68_40   WDXACTR = {"TRUE"}; 
A_GISVEC(A68_VC ,YDXACTR,WDXACTR,4)
static A68_123   ZDXACTR = {"FALSE"}; 
A_GISVEC(A68_VC ,AEXACTR,ZDXACTR,5)
A_GISVEC(A68_VC ,BEXACTR,VDXACTR,27)
static A68_131   DEXACTR = {"load:char                 ("}; 
A_GISVEC(A68_VC ,EEXACTR,DEXACTR,27)
static A68_131   GEXACTR = {"load:labno                ("}; 
A_GISVEC(A68_VC ,HEXACTR,GEXACTR,27)
static A68_133   KEXACTR = {"load:number               (mode"}; 
static A68_134   LEXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,NEXACTR,LEXACTR,29)
static A68_135   PEXACTR = {" | number="}; 
A_GISVEC(A68_VC ,QEXACTR,KEXACTR,31)
A_GISVEC(A68_VC ,WEXACTR,PEXACTR,10)
static A68_133   YEXACTR = {"load:alienx               (mode"}; 
static A68_134   ZEXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,BFXACTR,ZEXACTR,29)
static A68_136   DFXACTR = {" | string =\""}; 
A_GISVEC(A68_VC ,EFXACTR,YEXACTR,31)
A_GISVEC(A68_VC ,KFXACTR,DFXACTR,12)
static A68_133   NFXACTR = {"load:numeric denotation   (mode"}; 
static A68_134   OFXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,QFXACTR,OFXACTR,29)
static A68_137   SFXACTR = {" | denotation="}; 
A_GISVEC(A68_VC ,TFXACTR,NFXACTR,31)
A_GISVEC(A68_VC ,ZFXACTR,SFXACTR,14)
static A68_133   CGXACTR = {"load:string denotation    (mode"}; 
static A68_134   DGXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,FGXACTR,DGXACTR,29)
static A68_138   HGXACTR = {" | denotation=\""}; 
A_GISVEC(A68_VC ,IGXACTR,CGXACTR,31)
A_GISVEC(A68_VC ,OGXACTR,HGXACTR,15)
static A68_139   QGXACTR = {"ERROR: unknown LOAD imperative"}; 
A_GISVEC(A68_VC ,RGXACTR,QGXACTR,30)
static A68_120   ZGXACTR = {"UPB"}; 
A_GISVEC(A68_VC ,AHXACTR,ZGXACTR,3)
static A68_120   BHXACTR = {"LWB"}; 
A_GISVEC(A68_VC ,CHXACTR,BHXACTR,3)
static A68_123   DHXACTR = {"ANDTH"}; 
A_GISVEC(A68_VC ,EHXACTR,DHXACTR,5)
static A68_40   FHXACTR = {"OREL"}; 
A_GISVEC(A68_VC ,GHXACTR,FHXACTR,4)
static A68_125   JHXACTR = {"<="}; 
A_GISVEC(A68_VC ,KHXACTR,JHXACTR,2)
static A68_125   LHXACTR = {">="}; 
A_GISVEC(A68_VC ,MHXACTR,LHXACTR,2)
static A68_125   OHXACTR = {"/="}; 
A_GISVEC(A68_VC ,PHXACTR,OHXACTR,2)
static A68_40   SHXACTR = {"OVER"}; 
A_GISVEC(A68_VC ,THXACTR,SHXACTR,4)
static A68_120   UHXACTR = {"MOD"}; 
A_GISVEC(A68_VC ,VHXACTR,UHXACTR,3)
static A68_125   WHXACTR = {"**"}; 
A_GISVEC(A68_VC ,XHXACTR,WHXACTR,2)
static A68_120   ZHXACTR = {"SHL"}; 
A_GISVEC(A68_VC ,AIXACTR,ZHXACTR,3)
static A68_120   BIXACTR = {"SHR"}; 
A_GISVEC(A68_VC ,CIXACTR,BIXACTR,3)
static A68_40   DIXACTR = {"ELEM"}; 
A_GISVEC(A68_VC ,EIXACTR,DIXACTR,4)
static A68_121   FIXACTR = {"PLUSAB"}; 
A_GISVEC(A68_VC ,GIXACTR,FIXACTR,6)
static A68_93   HIXACTR = {"MINUSAB"}; 
A_GISVEC(A68_VC ,IIXACTR,HIXACTR,7)
static A68_93   JIXACTR = {"TIMESAB"}; 
A_GISVEC(A68_VC ,KIXACTR,JIXACTR,7)
static A68_121   LIXACTR = {"OVERAB"}; 
A_GISVEC(A68_VC ,MIXACTR,LIXACTR,6)
static A68_123   NIXACTR = {"MODAB"}; 
A_GISVEC(A68_VC ,OIXACTR,NIXACTR,5)
static A68_123   PIXACTR = {"DIVAB"}; 
A_GISVEC(A68_VC ,QIXACTR,PIXACTR,5)
static A68_125   RIXACTR = {"IS"}; 
A_GISVEC(A68_VC ,SIXACTR,RIXACTR,2)
static A68_40   TIXACTR = {"ISNT"}; 
A_GISVEC(A68_VC ,UIXACTR,TIXACTR,4)
static A68_120   VIXACTR = {"AND"}; 
A_GISVEC(A68_VC ,WIXACTR,VIXACTR,3)
static A68_125   XIXACTR = {"OR"}; 
A_GISVEC(A68_VC ,YIXACTR,XIXACTR,2)
static A68_121   ZIXACTR = {"PLUSTO"}; 
A_GISVEC(A68_VC ,AJXACTR,ZIXACTR,6)
static A68_123   BJXACTR = {"CYCLE"}; 
A_GISVEC(A68_VC ,CJXACTR,BJXACTR,5)
static A68_140   DJXACTR = {"not in standard prelude"}; 
A_GISVEC(A68_VC ,EJXACTR,DJXACTR,23)
static A68_134   HJXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,JJXACTR,HJXACTR,29)
static A68_139   RJXACTR = {"oper                      (fn="}; 
static A68_140   SJXACTR = {"statgrab | 1 operand | "}; 
static A68_141   TJXACTR = {"local generation"}; 
A_GISVEC(A68_VC ,VJXACTR,TJXACTR,16)
static A68_138   WJXACTR = {"heap generation"}; 
A_GISVEC(A68_VC ,XJXACTR,WJXACTR,15)
A_GISVEC(A68_VC ,ZJXACTR,SJXACTR,23)
static A68_136   AKXACTR = {"parampack | "}; 
static A68_142   BKXACTR = {" operands | mode of proc"}; 
A_GISVEC(A68_VC ,CKXACTR,AKXACTR,12)
A_GISVEC(A68_VC ,DKXACTR,BKXACTR,24)
static A68_143   EKXACTR = {"select | 1 operand | "}; 
static A68_144   FKXACTR = {"th field | result mode"}; 
A_GISVEC(A68_VC ,GKXACTR,EKXACTR,21)
A_GISVEC(A68_VC ,HKXACTR,FKXACTR,22)
static A68_139   IKXACTR = {"copy | 1 operand | result mode"}; 
A_GISVEC(A68_VC ,JKXACTR,IKXACTR,30)
static A68_93   KKXACTR = {"trim | "}; 
static A68_136   LKXACTR = {" operands | "}; 
static A68_125   PKXACTR = {"a:"}; 
A_GISVEC(A68_VC ,RKXACTR,PKXACTR,2)
static A68_125   SKXACTR = {":b"}; 
A_GISVEC(A68_VC ,TKXACTR,SKXACTR,2)
static A68_120   UKXACTR = {"a:b"}; 
A_GISVEC(A68_VC ,VKXACTR,UKXACTR,3)
static A68_125   WKXACTR = {"@c"}; 
A_GISVEC(A68_VC ,XKXACTR,WKXACTR,2)
static A68_40   YKXACTR = {"a:@c"}; 
A_GISVEC(A68_VC ,ZKXACTR,YKXACTR,4)
static A68_40   ALXACTR = {":b@c"}; 
A_GISVEC(A68_VC ,BLXACTR,ALXACTR,4)
static A68_123   CLXACTR = {"a:b@c"}; 
A_GISVEC(A68_VC ,DLXACTR,CLXACTR,5)
static A68_129   ELXACTR = {""}; 
A_GISVEC(A68_VC ,FLXACTR,ELXACTR,0)
static A68_135   GLXACTR = {" (set LWB)"}; 
A_GISVEC(A68_VC ,ILXACTR,GLXACTR,10)
static A68_129   JLXACTR = {""}; 
A_GISVEC(A68_VC ,KLXACTR,JLXACTR,0)
A_GISVEC(A68_VC ,LLXACTR,KKXACTR,7)
A_GISVEC(A68_VC ,MLXACTR,LKXACTR,12)
static A68_138   NLXACTR = {"simple index | "}; 
static A68_136   OLXACTR = {" operands | "}; 
static A68_145   PLXACTR = {" subscripts | result mode"}; 
A_GISVEC(A68_VC ,QLXACTR,NLXACTR,15)
A_GISVEC(A68_VC ,SLXACTR,OLXACTR,12)
A_GISVEC(A68_VC ,TLXACTR,PLXACTR,25)
static A68_146   ULXACTR = {"trim index | "}; 
static A68_140   VLXACTR = {" operands | result mode"}; 
A_GISVEC(A68_VC ,WLXACTR,ULXACTR,13)
A_GISVEC(A68_VC ,YLXACTR,VLXACTR,23)
static A68_147   ZLXACTR = {"dyngrab | 2 operands | result mode"}; 
A_GISVEC(A68_VC ,AMXACTR,ZLXACTR,34)
static A68_146   BMXACTR = {"bound pack | "}; 
static A68_140   CMXACTR = {" operands | result mode"}; 
A_GISVEC(A68_VC ,DMXACTR,BMXACTR,13)
A_GISVEC(A68_VC ,EMXACTR,CMXACTR,23)
static A68_143   FMXACTR = {"dyadic op | opnumber="}; 
static A68_125   GMXACTR = {"=\""}; 
static A68_136   HMXACTR = {"\" | version="}; 
static A68_137   IMXACTR = {" | result mode"}; 
A_GISVEC(A68_VC ,JMXACTR,FMXACTR,21)
A_GISVEC(A68_VC ,LMXACTR,GMXACTR,2)
A_GISVEC(A68_VC ,NMXACTR,HMXACTR,12)
A_GISVEC(A68_VC ,SMXACTR,IMXACTR,14)
static A68_144   TMXACTR = {"monadic op | opnumber="}; 
static A68_125   UMXACTR = {"=\""}; 
static A68_120   YMXACTR = {"UPB"}; 
A_GISVEC(A68_VC ,ZMXACTR,YMXACTR,3)
static A68_120   ANXACTR = {"LWB"}; 
A_GISVEC(A68_VC ,BNXACTR,ANXACTR,3)
static A68_120   CNXACTR = {"NOT"}; 
A_GISVEC(A68_VC ,DNXACTR,CNXACTR,3)
static A68_120   ENXACTR = {"ABS"}; 
A_GISVEC(A68_VC ,FNXACTR,ENXACTR,3)
static A68_120   GNXACTR = {"BIN"}; 
A_GISVEC(A68_VC ,HNXACTR,GNXACTR,3)
static A68_40   INXACTR = {"REPR"}; 
A_GISVEC(A68_VC ,JNXACTR,INXACTR,4)
static A68_40   KNXACTR = {"LENG"}; 
A_GISVEC(A68_VC ,LNXACTR,KNXACTR,4)
static A68_93   MNXACTR = {"SHORTEN"}; 
A_GISVEC(A68_VC ,NNXACTR,MNXACTR,7)
static A68_120   ONXACTR = {"ODD"}; 
A_GISVEC(A68_VC ,PNXACTR,ONXACTR,3)
static A68_40   QNXACTR = {"SIGN"}; 
A_GISVEC(A68_VC ,RNXACTR,QNXACTR,4)
static A68_123   SNXACTR = {"ROUND"}; 
A_GISVEC(A68_VC ,TNXACTR,SNXACTR,5)
static A68_121   UNXACTR = {"ENTIER"}; 
A_GISVEC(A68_VC ,VNXACTR,UNXACTR,6)
static A68_125   WNXACTR = {"RE"}; 
A_GISVEC(A68_VC ,XNXACTR,WNXACTR,2)
static A68_125   YNXACTR = {"IM"}; 
A_GISVEC(A68_VC ,ZNXACTR,YNXACTR,2)
static A68_120   AOXACTR = {"ARG"}; 
A_GISVEC(A68_VC ,BOXACTR,AOXACTR,3)
static A68_40   COXACTR = {"CONJ"}; 
A_GISVEC(A68_VC ,DOXACTR,COXACTR,4)
static A68_140   EOXACTR = {"not in standard prelude"}; 
A_GISVEC(A68_VC ,FOXACTR,EOXACTR,23)
static A68_136   GOXACTR = {"\" | version="}; 
static A68_137   HOXACTR = {" | result mode"}; 
A_GISVEC(A68_VC ,IOXACTR,TMXACTR,22)
A_GISVEC(A68_VC ,KOXACTR,UMXACTR,2)
A_GISVEC(A68_VC ,LOXACTR,GOXACTR,12)
A_GISVEC(A68_VC ,QOXACTR,HOXACTR,14)
static A68_143   ROXACTR = {"straight | 2 operands"}; 
static A68_148   SOXACTR = {" | mode of original="}; 
static A68_123   TOXACTR = {"UNION"}; 
A_GISVEC(A68_VC ,VOXACTR,TOXACTR,5)
static A68_121   WOXACTR = {"VECTOR"}; 
A_GISVEC(A68_VC ,XOXACTR,WOXACTR,6)
static A68_149   YOXACTR = {"STRUCT or I-STRUCT"}; 
A_GISVEC(A68_VC ,ZOXACTR,YOXACTR,18)
static A68_122   APXACTR = {"ARRY of "}; 
static A68_132   BPXACTR = {" dimensions"}; 
A_GISVEC(A68_VC ,CPXACTR,APXACTR,8)
A_GISVEC(A68_VC ,EPXACTR,BPXACTR,11)
A_GISVEC(A68_VC ,FPXACTR,ROXACTR,21)
A_GISVEC(A68_VC ,GPXACTR,SOXACTR,20)
static A68_150   HPXACTR = {"prestraight | 1 operand | result mode"}; 
A_GISVEC(A68_VC ,IPXACTR,HPXACTR,37)
static A68_151   JPXACTR = {"strindex | 2 operands | result mode"}; 
A_GISVEC(A68_VC ,KPXACTR,JPXACTR,35)
static A68_152   LPXACTR = {"assign | 2 operands | param="}; 
static A68_137   MPXACTR = {" | result mode"}; 
A_GISVEC(A68_VC ,NPXACTR,LPXACTR,28)
A_GISVEC(A68_VC ,OPXACTR,MPXACTR,14)
static A68_153   PPXACTR = {"default bound | no operands | result mode"}; 
A_GISVEC(A68_VC ,QPXACTR,PPXACTR,41)
static A68_154   RPXACTR = {"deref | result mode"}; 
A_GISVEC(A68_VC ,SPXACTR,RPXACTR,19)
static A68_149   TPXACTR = {"call | result mode"}; 
static A68_155   UPXACTR = {" | not operator or generator routine"}; 
A_GISVEC(A68_VC ,WPXACTR,UPXACTR,36)
static A68_156   XPXACTR = {" | invented local space generator"}; 
A_GISVEC(A68_VC ,YPXACTR,XPXACTR,33)
static A68_157   ZPXACTR = {" | invented heap space generator"}; 
A_GISVEC(A68_VC ,AQXACTR,ZPXACTR,32)
static A68_158   BQXACTR = {" | invented space generator within one"}; 
A_GISVEC(A68_VC ,CQXACTR,BQXACTR,38)
static A68_147   DQXACTR = {" | user defined or library routine"}; 
A_GISVEC(A68_VC ,EQXACTR,DQXACTR,34)
static A68_159   FQXACTR = {"ERROR: unknown PARAM field"}; 
A_GISVEC(A68_VC ,GQXACTR,FQXACTR,26)
A_GISVEC(A68_VC ,HQXACTR,TPXACTR,18)
static A68_40   IQXACTR = {"VOID"}; 
A_GISVEC(A68_VC ,JQXACTR,IQXACTR,4)
static A68_93   KQXACTR = {"NIL to "}; 
A_GISVEC(A68_VC ,LQXACTR,KQXACTR,7)
static A68_142   MQXACTR = {"GOTO | procedure to mode"}; 
A_GISVEC(A68_VC ,NQXACTR,MQXACTR,24)
static A68_143   OQXACTR = {"GOTO | coerce to mode"}; 
A_GISVEC(A68_VC ,PQXACTR,OQXACTR,21)
static A68_131   QQXACTR = {"REAL to COMPL | result mode"}; 
A_GISVEC(A68_VC ,RQXACTR,QQXACTR,27)
static A68_145   SQXACTR = {"INT to REAL | result mode"}; 
A_GISVEC(A68_VC ,TQXACTR,SQXACTR,25)
static A68_149   UQXACTR = {"xxib | result mode"}; 
A_GISVEC(A68_VC ,VQXACTR,UQXACTR,18)
static A68_152   WQXACTR = {"ARRAY to ARRAY | result mode"}; 
A_GISVEC(A68_VC ,XQXACTR,WQXACTR,28)
static A68_134   YQXACTR = {"VECTOR to ARRAY | result mode"}; 
A_GISVEC(A68_VC ,ZQXACTR,YQXACTR,29)
static A68_157   ARXACTR = {"I-STRUCT to VECTOR | result mode"}; 
A_GISVEC(A68_VC ,BRXACTR,ARXACTR,32)
static A68_144   CRXACTR = {"1 STRUCT | result mode"}; 
A_GISVEC(A68_VC ,DRXACTR,CRXACTR,22)
static A68_134   ERXACTR = {"unite | non UNION operand to "}; 
static A68_132   FRXACTR = {"th mode of "}; 
A_GISVEC(A68_VC ,GRXACTR,ERXACTR,29)
A_GISVEC(A68_VC ,HRXACTR,FRXACTR,11)
static A68_139   IRXACTR = {"uniteu | UNION operand to mode"}; 
A_GISVEC(A68_VC ,JRXACTR,IRXACTR,30)
static A68_149   KRXACTR = {"isarr | coerce to "}; 
static A68_157   LRXACTR = {" dimensional array | result mode"}; 
A_GISVEC(A68_VC ,MRXACTR,KRXACTR,18)
A_GISVEC(A68_VC ,NRXACTR,LRXACTR,32)
static A68_122   ORXACTR = {"SKIP to "}; 
A_GISVEC(A68_VC ,PRXACTR,ORXACTR,8)
static A68_148   QRXACTR = {"to VEC | result mode"}; 
A_GISVEC(A68_VC ,RRXACTR,QRXACTR,20)
static A68_144   SRXACTR = {"to ARRAY | result mode"}; 
A_GISVEC(A68_VC ,TRXACTR,SRXACTR,22)
static A68_132   URXACTR = {"deunite to "}; 
A_GISVEC(A68_VC ,VRXACTR,URXACTR,11)
static A68_139   WRXACTR = {"BITS to VEC BOOL | result mode"}; 
A_GISVEC(A68_VC ,XRXACTR,WRXACTR,30)
static A68_145   YRXACTR = {"vacuum | coerce EMPTY to "}; 
A_GISVEC(A68_VC ,ZRXACTR,YRXACTR,25)
static A68_135   ASXACTR = {"Y TYPE to "}; 
A_GISVEC(A68_VC ,BSXACTR,ASXACTR,10)
static A68_126   CSXACTR = {"to X TYPE"}; 
A_GISVEC(A68_VC ,DSXACTR,CSXACTR,9)
static A68_141   ESXACTR = {"static generator"}; 
A_GISVEC(A68_VC ,FSXACTR,ESXACTR,16)
static A68_121   GSXACTR = {"format"}; 
A_GISVEC(A68_VC ,HSXACTR,GSXACTR,6)
static A68_123   ISXACTR = {"SPARE"}; 
A_GISVEC(A68_VC ,JSXACTR,ISXACTR,5)
A_GISVEC(A68_VC ,KSXACTR,RJXACTR,30)
static A68_131   MSXACTR = {"transiddec                ("}; 
static A68_148   NSXACTR = {"identity declaration"}; 
A_GISVEC(A68_VC ,PSXACTR,NSXACTR,20)
static A68_148   QSXACTR = {"variable declaration"}; 
A_GISVEC(A68_VC ,RSXACTR,QSXACTR,20)
static A68_141   SSXACTR = {"formal parameter"}; 
A_GISVEC(A68_VC ,TSXACTR,SSXACTR,16)
static A68_132   USXACTR = {"FOR control"}; 
A_GISVEC(A68_VC ,VSXACTR,USXACTR,11)
static A68_148   WSXACTR = {"initialised variable"}; 
A_GISVEC(A68_VC ,XSXACTR,WSXACTR,20)
static A68_152   YSXACTR = {"formal conformity identifier"}; 
A_GISVEC(A68_VC ,ZSXACTR,YSXACTR,28)
static A68_137   ATXACTR = {"FORALL control"}; 
A_GISVEC(A68_VC ,BTXACTR,ATXACTR,14)
static A68_160   CTXACTR = {"dummy declaration"}; 
A_GISVEC(A68_VC ,DTXACTR,CTXACTR,17)
static A68_133   ETXACTR = {"ERROR: unknown TRANSIDDEC type="}; 
A_GISVEC(A68_VC ,FTXACTR,ETXACTR,31)
static A68_126   HTXACTR = {" | name=\""}; 
static A68_122   ITXACTR = {"\" | mode"}; 
static A68_134   JTXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,LTXACTR,JTXACTR,29)
static A68_126   NTXACTR = {" | decno="}; 
A_GISVEC(A68_VC ,OTXACTR,MSXACTR,27)
A_GISVEC(A68_VC ,PTXACTR,HTXACTR,9)
A_GISVEC(A68_VC ,QTXACTR,ITXACTR,8)
A_GISVEC(A68_VC ,WTXACTR,NTXACTR,9)
static A68_156   ZTXACTR = {"routine                   (name=\""}; 
static A68_93   AUXACTR = {" | mode"}; 
static A68_134   BUXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,DUXACTR,BUXACTR,29)
static A68_134   FUXACTR = {" | proc of unlimited lifetime"}; 
A_GISVEC(A68_VC ,HUXACTR,FUXACTR,29)
static A68_161   IUXACTR = {" | only external id is declared in CONTEXT VOID module"}; 
A_GISVEC(A68_VC ,JUXACTR,IUXACTR,54)
static A68_162   KUXACTR = {" | decno of external id with smallest lifetime="}; 
static A68_125   LUXACTR = {"=\""}; 
A_GISVEC(A68_VC ,MUXACTR,KUXACTR,47)
A_GISVEC(A68_VC ,OUXACTR,LUXACTR,2)
static A68_135   RUXACTR = {" | rdenno="}; 
A_GISVEC(A68_VC ,SUXACTR,ZTXACTR,33)
A_GISVEC(A68_VC ,VUXACTR,AUXACTR,7)
A_GISVEC(A68_VC ,BVXACTR,RUXACTR,10)
static A68_131   EVXACTR = {"warn                      ("}; 
static A68_121   FVXACTR = {"assign"}; 
A_GISVEC(A68_VC ,HVXACTR,FVXACTR,6)
static A68_123   IVXACTR = {"ANDTH"}; 
A_GISVEC(A68_VC ,JVXACTR,IVXACTR,5)
static A68_40   KVXACTR = {"OREL"}; 
A_GISVEC(A68_VC ,LVXACTR,KVXACTR,4)
static A68_123   MVXACTR = {"index"}; 
A_GISVEC(A68_VC ,NVXACTR,MVXACTR,5)
static A68_135   OVXACTR = {"PLUSAB etc"}; 
A_GISVEC(A68_VC ,PVXACTR,OVXACTR,10)
static A68_121   QVXACTR = {"FORALL"}; 
A_GISVEC(A68_VC ,RVXACTR,QVXACTR,6)
static A68_40   SVXACTR = {"loop"}; 
A_GISVEC(A68_VC ,TVXACTR,SVXACTR,4)
static A68_145   UVXACTR = {"ERROR: unknown WARN field"}; 
A_GISVEC(A68_VC ,VVXACTR,UVXACTR,25)
A_GISVEC(A68_VC ,WVXACTR,EVXACTR,27)
static A68_156   YVXACTR = {"labdec                    (name=\""}; 
static A68_129   CWXACTR = {""}; 
A_GISVEC(A68_VC ,EWXACTR,CWXACTR,0)
static A68_156   FWXACTR = {" | at start serial clause; labno="}; 
A_GISVEC(A68_VC ,HWXACTR,FWXACTR,33)
static A68_114   JWXACTR = {"at start user written routine; GOTO external label | labno="}; 
A_GISVEC(A68_VC ,KWXACTR,JWXACTR,59)
static A68_126   MWXACTR = {" | labno "}; 
static A68_160   NWXACTR = {" is redefined as "}; 
A_GISVEC(A68_VC ,OWXACTR,MWXACTR,9)
A_GISVEC(A68_VC ,QWXACTR,NWXACTR,17)
static A68_156   SWXACTR = {" | actual label setting of labno="}; 
A_GISVEC(A68_VC ,TWXACTR,SWXACTR,33)
A_GISVEC(A68_VC ,VWXACTR,YVXACTR,33)
static A68_133   YWXACTR = {"uchoice                   (mode"}; 
static A68_134   ZWXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,BXXACTR,ZWXACTR,29)
static A68_126   DXXACTR = {" | param="}; 
A_GISVEC(A68_VC ,EXXACTR,YWXACTR,31)
A_GISVEC(A68_VC ,LXXACTR,DXXACTR,9)
static A68_131   OXXACTR = {"callmodule                ("}; 
A_GISVEC(A68_VC ,PXXACTR,OXXACTR,27)
static A68_156   SXXACTR = {"keeps                     (start="}; 
static A68_40   TXXACTR = {"TRUE"}; 
A_GISVEC(A68_VC ,VXXACTR,TXXACTR,4)
static A68_123   WXXACTR = {"FALSE"}; 
A_GISVEC(A68_VC ,XXXACTR,WXXACTR,5)
A_GISVEC(A68_VC ,YXXACTR,SXXACTR,33)
static A68_159   AYXACTR = {"load:code                 "}; 
static A68_93   BYXACTR = {"( mode="}; 
static A68_137   CYXACTR = {" | parameters="}; 
static A68_125   DYXACTR = {" )"}; 
A_GISVEC(A68_VC ,EYXACTR,AYXACTR,26)
A_GISVEC(A68_VC ,FYXACTR,BYXACTR,7)
A_GISVEC(A68_VC ,HYXACTR,CYXACTR,14)
A_GISVEC(A68_VC ,JYXACTR,DYXACTR,2)
static A68_153   LYXACTR = {"formatx                   (info=(nochars="}; 
static A68_132   MYXACTR = {" | nocases="}; 
static A68_138   NYXACTR = {" | max nesting="}; 
static A68_126   OYXACTR = {") | text="}; 
A_GISVEC(A68_VC ,PYXACTR,LYXACTR,41)
A_GISVEC(A68_VC ,RYXACTR,MYXACTR,11)
A_GISVEC(A68_VC ,TYXACTR,NYXACTR,15)
A_GISVEC(A68_VC ,VYXACTR,OYXACTR,9)
static A68_156   WYXACTR = {"ERROR: unknown PRIMARY imperative"}; 
A_GISVEC(A68_VC ,XYXACTR,WYXACTR,33)
static A68_131   ZYXACTR = {"separator                 ("}; 
static A68_40   AZXACTR = {"THEN"}; 
A_GISVEC(A68_VC ,CZXACTR,AZXACTR,4)
static A68_125   DZXACTR = {"IN"}; 
A_GISVEC(A68_VC ,EZXACTR,DZXACTR,2)
static A68_120   FZXACTR = {"INu"}; 
A_GISVEC(A68_VC ,GZXACTR,FZXACTR,3)
static A68_122   HZXACTR = {"ic comma"}; 
A_GISVEC(A68_VC ,IZXACTR,HZXACTR,8)
static A68_122   JZXACTR = {"cc comma"}; 
A_GISVEC(A68_VC ,KZXACTR,JZXACTR,8)
static A68_40   LZXACTR = {"EXIT"}; 
A_GISVEC(A68_VC ,MZXACTR,LZXACTR,4)
static A68_120   NZXACTR = {"OUT"}; 
A_GISVEC(A68_VC ,OZXACTR,NZXACTR,3)
static A68_40   PZXACTR = {"OUTu"}; 
A_GISVEC(A68_VC ,QZXACTR,PZXACTR,4)
static A68_40   RZXACTR = {"ELSE"}; 
A_GISVEC(A68_VC ,SZXACTR,RZXACTR,4)
static A68_135   TZXACTR = {"coll comma"}; 
A_GISVEC(A68_VC ,UZXACTR,TZXACTR,10)
static A68_40   VZXACTR = {"semi"}; 
A_GISVEC(A68_VC ,WZXACTR,VZXACTR,4)
static A68_125   XZXACTR = {"DO"}; 
A_GISVEC(A68_VC ,YZXACTR,XZXACTR,2)
static A68_123   ZZXACTR = {"WHILE"}; 
A_GISVEC(A68_VC ,AAYACTR,ZZXACTR,5)
static A68_152   BAYACTR = {"ERROR: unknown SEPARATOR fn="}; 
A_GISVEC(A68_VC ,CAYACTR,BAYACTR,28)
static A68_134   EAYACTR = {" | mode & param are undefined"}; 
A_GISVEC(A68_VC ,GAYACTR,EAYACTR,29)
static A68_93   HAYACTR = {" | mode"}; 
static A68_134   IAYACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,KAYACTR,IAYACTR,29)
static A68_126   MAYACTR = {" | param="}; 
A_GISVEC(A68_VC ,NAYACTR,HAYACTR,7)
A_GISVEC(A68_VC ,TAYACTR,MAYACTR,9)
A_GISVEC(A68_VC ,VAYACTR,ZYXACTR,27)
static A68_131   YAYACTR = {"starter                   ("}; 
static A68_93   ZAYACTR = {"routine"}; 
A_GISVEC(A68_VC ,BBYACTR,ZAYACTR,7)
static A68_40   CBYACTR = {"decs"}; 
A_GISVEC(A68_VC ,DBYACTR,CBYACTR,4)
static A68_122   EBYACTR = {"IF/WHILE"}; 
A_GISVEC(A68_VC ,FBYACTR,EBYACTR,8)
static A68_40   GBYACTR = {"CASE"}; 
A_GISVEC(A68_VC ,HBYACTR,GBYACTR,4)
static A68_123   IBYACTR = {"CASEu"}; 
A_GISVEC(A68_VC ,JBYACTR,IBYACTR,5)
static A68_123   KBYACTR = {"BEGIN"}; 
A_GISVEC(A68_VC ,LBYACTR,KBYACTR,5)
static A68_135   MBYACTR = {"coll BEGIN"}; 
A_GISVEC(A68_VC ,NBYACTR,MBYACTR,10)
static A68_120   OBYACTR = {"FOR"}; 
A_GISVEC(A68_VC ,PBYACTR,OBYACTR,3)
static A68_121   QBYACTR = {"FORALL"}; 
A_GISVEC(A68_VC ,RBYACTR,QBYACTR,6)
static A68_159   SBYACTR = {"ERROR: unknown STARTER fn="}; 
A_GISVEC(A68_VC ,TBYACTR,SBYACTR,26)
static A68_93   VBYACTR = {" | mode"}; 
static A68_134   WBYACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,YBYACTR,WBYACTR,29)
static A68_137   ACYACTR = {" | result mode"}; 
static A68_134   BCYACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,DCYACTR,BCYACTR,29)
static A68_126   FCYACTR = {"undefined"}; 
A_GISVEC(A68_VC ,HCYACTR,FCYACTR,9)
A_GISVEC(A68_VC ,NCYACTR,YAYACTR,27)
A_GISVEC(A68_VC ,PCYACTR,VBYACTR,7)
A_GISVEC(A68_VC ,VCYACTR,ACYACTR,14)
static A68_131   XCYACTR = {"terminator                ("}; 
static A68_125   YCYACTR = {"FI"}; 
A_GISVEC(A68_VC ,ADYACTR,YCYACTR,2)
static A68_40   BDYACTR = {"ESAC"}; 
A_GISVEC(A68_VC ,CDYACTR,BDYACTR,4)
static A68_123   DDYACTR = {"ESACu"}; 
A_GISVEC(A68_VC ,EDYACTR,DDYACTR,5)
static A68_120   FDYACTR = {"END"}; 
A_GISVEC(A68_VC ,GDYACTR,FDYACTR,3)
static A68_122   HDYACTR = {"coll END"}; 
A_GISVEC(A68_VC ,IDYACTR,HDYACTR,8)
static A68_125   JDYACTR = {"OD"}; 
A_GISVEC(A68_VC ,KDYACTR,JDYACTR,2)
static A68_132   LDYACTR = {"routine end"}; 
A_GISVEC(A68_VC ,MDYACTR,LDYACTR,11)
static A68_121   NDYACTR = {"FINISH"}; 
A_GISVEC(A68_VC ,ODYACTR,NDYACTR,6)
static A68_122   PDYACTR = {"opt bool"}; 
A_GISVEC(A68_VC ,QDYACTR,PDYACTR,8)
static A68_134   RDYACTR = {"ERROR: unknown TERMINATOR fn="}; 
A_GISVEC(A68_VC ,SDYACTR,RDYACTR,29)
A_GISVEC(A68_VC ,UDYACTR,XCYACTR,27)
static A68_157   ZDYACTR = {"composer:closure          (body="}; 
static A68_136   AEYACTR = {" | moduleno="}; 
A_GISVEC(A68_VC ,BEYACTR,ZDYACTR,32)
A_GISVEC(A68_VC ,DEYACTR,AEYACTR,12)
static A68_155   GEYACTR = {"composer:synthetic module (moduleno="}; 
static A68_123   HEYACTR = {" | i="}; 
static A68_123   IEYACTR = {" | j="}; 
A_GISVEC(A68_VC ,JEYACTR,GEYACTR,36)
A_GISVEC(A68_VC ,LEYACTR,HEYACTR,5)
A_GISVEC(A68_VC ,NEYACTR,IEYACTR,5)
static A68_155   QEYACTR = {"composer:extern module    (moduleno="}; 
static A68_126   REYACTR = {" | name=\""}; 
static A68_132   SEYACTR = {"\" | uname=\""}; 
static A68_132   TEYACTR = {"\" | lname=\""}; 
static A68_132   UEYACTR = {"\" | gname=\""}; 
A_GISVEC(A68_VC ,VEYACTR,QEYACTR,36)
A_GISVEC(A68_VC ,XEYACTR,REYACTR,9)
A_GISVEC(A68_VC ,YEYACTR,SEYACTR,11)
A_GISVEC(A68_VC ,ZEYACTR,TEYACTR,11)
A_GISVEC(A68_VC ,AFYACTR,UEYACTR,11)
static A68_147   CFYACTR = {"ERROR: unknown COMPOSER imperative"}; 
A_GISVEC(A68_VC ,DFYACTR,CFYACTR,34)
static A68_40   EFYACTR = {"VOID"}; 
A_GISVEC(A68_VC ,FFYACTR,EFYACTR,4)
static A68_145   GFYACTR = {"ERROR: unknown imperative"}; 
A_GISVEC(A68_VC ,HFYACTR,GFYACTR,25)
typedef struct   /* env of non-global proc */
{
int dummy;
} TBXACTR_generator;

A_STATIC A68_VOID  XYWACTR_generator(A68_BOOL  WYWACTR_anonymous, A68_115  *ReturnedValue);

A_STATIC A68_VOID  ZYWACTR_generator(A68_BOOL  YYWACTR_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  PBXACTR_bitmnemonic(A68_BITS  Props, A68_BOOL  Whichxbit, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  SBXACTR_generator(A68_BOOL  QBXACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  SCXACTR_imperativemnemonic(A68_67  Imperative, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  VGXACTR_standardpreludeops(A68_INT  Opnumber, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  ZYWACTR_generator(A68_BOOL  YYWACTR_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  AZWACTR;  /* clause result */
A68_VC  BZWACTR;  /* OPERATORS - dynamic generator */
{ 
BZWACTR.upb = 0 ;
( YYWACTR_anonymous? A_VLOC(A68_CHAR ,BZWACTR): A_VHEAP(A68_CHAR ,BZWACTR) );
AZWACTR = BZWACTR;
} 
*ReturnedValue = (AZWACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  SBXACTR_generator(A68_BOOL  QBXACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((TBXACTR_generator *)NonLocals)->x)
{ 
A68_VC  UBXACTR;  /* clause result */
A68_VC  VBXACTR;  /* OPERATORS - dynamic generator */
{ 
VBXACTR.upb = 0 ;
( QBXACTR_anonymous? A_VLOC(A68_CHAR ,VBXACTR): A_VHEAP(A68_CHAR ,VBXACTR) );
UBXACTR = VBXACTR;
} 
*ReturnedValue = (UBXACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  VGXACTR_standardpreludeops(A68_INT  Opnumber, A68_VC  *ReturnedValue)
{ 
A68_VC  WGXACTR;  /* clause result */
A68_VC  XGXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  YGXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  HHXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  IHXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  NHXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  QHXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  RHXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  YHXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(standardpreludeops);
 /* line 244: */
 /* line 245: */
switch ( Opnumber )
{ 
case 1: 
WGXACTR = A_HVEC(XGXACTR,'+',A68_CHAR );
break;
case 2: 
WGXACTR = A_HVEC(YGXACTR,'-',A68_CHAR );
break;
case 3: 
WGXACTR = AHXACTR;
break;
case 4: 
WGXACTR = CHXACTR;
break;
case 5: 
 /* line 246: */
WGXACTR = EHXACTR;
break;
case 6: 
WGXACTR = GHXACTR;
break;
case 7: 
WGXACTR = A_HVEC(HHXACTR,'<',A68_CHAR );
break;
case 8: 
WGXACTR = A_HVEC(IHXACTR,'>',A68_CHAR );
break;
case 9: 
WGXACTR = KHXACTR;
break;
case 10: 
 /* line 247: */
WGXACTR = MHXACTR;
break;
case 11: 
WGXACTR = A_HVEC(NHXACTR,'=',A68_CHAR );
break;
case 12: 
WGXACTR = PHXACTR;
break;
case 13: 
WGXACTR = A_HVEC(QHXACTR,'*',A68_CHAR );
break;
case 14: 
WGXACTR = A_HVEC(RHXACTR,'/',A68_CHAR );
break;
case 15: 
 /* line 248: */
WGXACTR = THXACTR;
break;
case 16: 
WGXACTR = VHXACTR;
break;
case 17: 
WGXACTR = XHXACTR;
break;
case 18: 
WGXACTR = A_HVEC(YHXACTR,'I',A68_CHAR );
break;
case 19: 
WGXACTR = AIXACTR;
break;
case 20: 
 /* line 249: */
WGXACTR = CIXACTR;
break;
case 21: 
WGXACTR = EIXACTR;
break;
case 22: 
WGXACTR = GIXACTR;
break;
case 23: 
WGXACTR = IIXACTR;
break;
case 24: 
WGXACTR = KIXACTR;
break;
case 25: 
 /* line 250: */
WGXACTR = MIXACTR;
break;
case 26: 
WGXACTR = OIXACTR;
break;
case 27: 
WGXACTR = QIXACTR;
break;
case 28: 
WGXACTR = SIXACTR;
break;
case 29: 
WGXACTR = UIXACTR;
break;
case 30: 
 /* line 251: */
WGXACTR = WIXACTR;
break;
case 31: 
WGXACTR = YIXACTR;
break;
case 32: 
 /* line 252: */
WGXACTR = AJXACTR;
break;
case 33: 
 /* line 253: */
WGXACTR = CJXACTR;
break;
default: 
WGXACTR = EJXACTR;
break;
} 
A_PROC_EXIT(standardpreludeops);
*ReturnedValue = (WGXACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  XYWACTR_generator(A68_BOOL  WYWACTR_anonymous, A68_115  *ReturnedValue)
{ 
A68_118  CZWACTR_anonymous A_UNUSED = {0};
A68_VC  DZWACTR;  /* avoid structure result */
A68_117 * EZWACTR;  /* YIELD */
A68_115  FZWACTR;  /* clause result */
{ 
ZYWACTR_generator( WYWACTR_anonymous, &DZWACTR );
EZWACTR = (&((&CZWACTR_anonymous)->Name)) ;
(*EZWACTR) = DZWACTR;
FZWACTR = CZWACTR_anonymous;
} 
*ReturnedValue = (FZWACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  PBXACTR_bitmnemonic(A68_BITS  Props, A68_BOOL  Whichxbit, A68_VC  *ReturnedValue)
{ 
A68_109  RBXACTR_generator;   /* proc value of non-global proc */
A68_117  XBXACTR;  /* avoid structure result */
A68_117  WBXACTR_output A_UNUSED = {0};
A68_VC  ACXACTR;  /* YIELD */
A68_VC  BCXACTR;  /* OPERATORS - copy to flex */
A68_119  CCXACTR;  /* clause result */
A68_119  DCXACTR_whichimperative A_UNUSED = {0};
A68_115  ECXACTR_b A_UNUSED = {0};
A68_115 * FCXACTR;  /* forall control - []x */
A68_INT  GCXACTR;  /* forall loop counter */
A68_VC  HCXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  LCXACTR;  /* clause result */
A68_VC  PCXACTR;  /* OPERATORS - trim index */
A68_VC  QCXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(bitmnemonic);
 /* line 146: */
 /* line 147: */
{ 
A_CLOSURE( RBXACTR_generator, SBXACTR_generator, TBXACTR_generator );
A_CALLPROC(RBXACTR_generator,(A68_TRUE, &XBXACTR),(A68_TRUE, &XBXACTR,(RBXACTR_generator).nonlocals));
WBXACTR_output = XBXACTR;
ACXACTR = ZBXACTR ;
(void)(WBXACTR_output = A_VCOPY(ACXACTR,BCXACTR,A68_CHAR ));
 /* line 148: */
if (Whichxbit)
{ 
CCXACTR = PAXACTR_controlbits;
} 
else
{ 
CCXACTR = EBXACTR_routinebits;
} 
DCXACTR_whichimperative = CCXACTR;
 /* line 150: */
 /* line 151: */
GCXACTR = DCXACTR_whichimperative.dim[0].upb - DCXACTR_whichimperative.dim[0].lwb;
FCXACTR = DCXACTR_whichimperative.data;
for (;GCXACTR-- >= 0;
(FCXACTR += DCXACTR_whichimperative.dim[0].stride
) )
{
ECXACTR_b = *FCXACTR;
 /* line 152: */
 /* line 153: */
if ((A68_BITS )(ECXACTR_b.Value&Props)!=(A68_BITS )0)
{ 
 /* line 154: */
 /* line 155: */
(void)(A_VC_PLUSAB(WBXACTR_output,A_VC_PLUS(ECXACTR_b.Name,A_HVEC(HCXACTR,',',A68_CHAR ))));
} 
}
 /* line 156: */
 /* line 157: */
 /* line 158: */
if (A_VC_EQ(WBXACTR_output,JCXACTR))
{ 
 /* line 159: */
LCXACTR = MCXACTR;
} 
else
{ 
 /* line 160: */
 /* line 161: */
LCXACTR = A_VC_PLUS(A_VC_PLUS(OCXACTR,A_VTRIM(PCXACTR,(*(&WBXACTR_output)),A_VTSCRIPT(&(PCXACTR.upb),(*(&WBXACTR_output)).upb,1,(WBXACTR_output.upb-1)))),A_HVEC(QCXACTR,')',A68_CHAR ));
} 
} 
A_PROC_EXIT(bitmnemonic);
*ReturnedValue = (LCXACTR);
return;
} 
#undef NL

A68_VOID  SCXACTR_imperativemnemonic(A68_67  Imperative, A68_VC  *ReturnedValue)
{ 
A68_67  TCXACTR;  /* united object - for case conformity */
A68_83  UCXACTR_p A_UNUSED = {0};
A68_83  VCXACTR;  /* united object - for case conformity */
A68_82  WCXACTR_l A_UNUSED = {0};
A68_82  XCXACTR;  /* united object - for case conformity */
A68_68  YCXACTR_si A_UNUSED = {0};
A68_VC  BDXACTR;  /* clause result */
A68_VC  JDXACTR;  /* avoid structure result */
A68_VC  KDXACTR;  /* clause result */
A68_INT  MDXACTR_i A_UNUSED = {0};
A68_VC  QDXACTR;  /* avoid structure result */
A68_VC  SDXACTR;  /* avoid structure result */
A68_VC  TDXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  UDXACTR_b A_UNUSED = {0};
A68_VC  XDXACTR;  /* clause result */
A68_66  CEXACTR_c A_UNUSED = {0};
A68_69  FEXACTR_sl A_UNUSED = {0};
A68_VC  IEXACTR;  /* avoid structure result */
A68_70  JEXACTR_n A_UNUSED = {0};
A68_VC  MEXACTR;  /* clause result */
A68_VC  OEXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  REXACTR;  /* ADICOPS - ABS INT */
A68_VC  SEXACTR;  /* avoid structure result */
A68_VC  TEXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  UEXACTR;  /* ADICOPS - ABS INT */
A68_VC  VEXACTR;  /* avoid structure result */
A68_54  XEXACTR_a A_UNUSED = {0};
A68_VC  AFXACTR;  /* clause result */
A68_VC  CFXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  FFXACTR;  /* ADICOPS - ABS INT */
A68_VC  GFXACTR;  /* avoid structure result */
A68_VC  HFXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  IFXACTR;  /* ADICOPS - ABS INT */
A68_VC  JFXACTR;  /* avoid structure result */
A68_VC  LFXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_71  MFXACTR_o A_UNUSED = {0};
A68_VC  PFXACTR;  /* clause result */
A68_VC  RFXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  UFXACTR;  /* ADICOPS - ABS INT */
A68_VC  VFXACTR;  /* avoid structure result */
A68_VC  WFXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  XFXACTR;  /* ADICOPS - ABS INT */
A68_VC  YFXACTR;  /* avoid structure result */
A68_VC  AGXACTR;  /* avoid structure result */
A68_72  BGXACTR_st A_UNUSED = {0};
A68_VC  EGXACTR;  /* clause result */
A68_VC  GGXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  JGXACTR;  /* ADICOPS - ABS INT */
A68_VC  KGXACTR;  /* avoid structure result */
A68_VC  LGXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  MGXACTR;  /* ADICOPS - ABS INT */
A68_VC  NGXACTR;  /* avoid structure result */
A68_VC  PGXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_73  SGXACTR_o A_UNUSED = {0};
A68_VC  FJXACTR;  /* avoid structure result */
A68_VC  GJXACTR_p A_UNUSED = {0};
A68_VC  IJXACTR;  /* clause result */
A68_VC  KJXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  LJXACTR;  /* ADICOPS - ABS INT */
A68_VC  MJXACTR;  /* avoid structure result */
A68_VC  NJXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  OJXACTR;  /* ADICOPS - ABS INT */
A68_VC  PJXACTR;  /* avoid structure result */
A68_VC  QJXACTR_m A_UNUSED = {0};
A68_VC  UJXACTR;  /* clause result */
A68_VC  YJXACTR;  /* clause result */
A68_INT  MKXACTR;  /* ADICOPS - MOD */
A68_INT  NKXACTR;  /* ADICOPS - MOD */
A68_INT  OKXACTR;  /* ADICOPS - MOD */
A68_VC  QKXACTR;  /* clause result */
A68_VC  HLXACTR;  /* clause result */
A68_VC  RLXACTR;  /* avoid structure result */
A68_VC  XLXACTR;  /* avoid structure result */
A68_VC  KMXACTR;  /* avoid structure result */
A68_VC  MMXACTR;  /* avoid structure result */
A68_INT  OMXACTR;  /* ADICOPS - MOD */
A68_INT  PMXACTR;  /* ADICOPS - MOD */
A68_INT  QMXACTR;  /* ADICOPS - MOD */
A68_VC  RMXACTR;  /* avoid structure result */
A68_VC  VMXACTR;  /* clause result */
A68_VC  WMXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XMXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  JOXACTR;  /* avoid structure result */
A68_INT  MOXACTR;  /* ADICOPS - MOD */
A68_INT  NOXACTR;  /* ADICOPS - MOD */
A68_INT  OOXACTR;  /* ADICOPS - MOD */
A68_VC  POXACTR;  /* avoid structure result */
A68_VC  UOXACTR;  /* clause result */
A68_VC  DPXACTR;  /* avoid structure result */
A68_VC  VPXACTR;  /* clause result */
A68_65  LSXACTR_t A_UNUSED = {0};
A68_VC  OSXACTR;  /* clause result */
A68_VC  GTXACTR;  /* avoid structure result */
A68_VC  KTXACTR;  /* clause result */
A68_VC  MTXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  RTXACTR;  /* ADICOPS - ABS INT */
A68_VC  STXACTR;  /* avoid structure result */
A68_VC  TTXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  UTXACTR;  /* ADICOPS - ABS INT */
A68_VC  VTXACTR;  /* avoid structure result */
A68_VC  XTXACTR;  /* avoid structure result */
A68_74  YTXACTR_r A_UNUSED = {0};
A68_VC  CUXACTR;  /* clause result */
A68_VC  EUXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  GUXACTR;  /* clause result */
A68_VC  NUXACTR;  /* avoid structure result */
A68_VC  PUXACTR;  /* avoid structure result */
A68_VC  QUXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  TUXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  UUXACTR;  /* avoid structure result */
A68_INT  WUXACTR;  /* ADICOPS - ABS INT */
A68_VC  XUXACTR;  /* avoid structure result */
A68_VC  YUXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  ZUXACTR;  /* ADICOPS - ABS INT */
A68_VC  AVXACTR;  /* avoid structure result */
A68_VC  CVXACTR;  /* avoid structure result */
A68_75  DVXACTR_w A_UNUSED = {0};
A68_VC  GVXACTR;  /* clause result */
A68_76  XVXACTR_l A_UNUSED = {0};
A68_VC  ZVXACTR;  /* OPERATORS - nil -> mode */
A68_VC  AWXACTR;  /* == */
A68_VC  BWXACTR;  /* == */
A68_VC  DWXACTR;  /* clause result */
A68_VC  GWXACTR;  /* clause result */
A68_VC  IWXACTR;  /* avoid structure result */
A68_VC  LWXACTR;  /* avoid structure result */
A68_VC  PWXACTR;  /* avoid structure result */
A68_VC  RWXACTR;  /* avoid structure result */
A68_VC  UWXACTR;  /* avoid structure result */
A68_VC  WWXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_77  XWXACTR_u A_UNUSED = {0};
A68_VC  AXXACTR;  /* clause result */
A68_VC  CXXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  FXXACTR;  /* ADICOPS - ABS INT */
A68_VC  GXXACTR;  /* avoid structure result */
A68_VC  HXXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  IXXACTR;  /* ADICOPS - ABS INT */
A68_VC  JXXACTR;  /* avoid structure result */
A68_VC  KXXACTR;  /* avoid structure result */
A68_VC  MXXACTR;  /* avoid structure result */
A68_55  NXXACTR_c A_UNUSED = {0};
A68_VC  QXXACTR;  /* avoid structure result */
A68_78  RXXACTR_k A_UNUSED = {0};
A68_VC  UXXACTR;  /* clause result */
A68_58  ZXXACTR_c A_UNUSED = {0};
A68_VC  GYXACTR;  /* avoid structure result */
A68_VC  IYXACTR;  /* avoid structure result */
A68_63  KYXACTR_f A_UNUSED = {0};
A68_VC  QYXACTR;  /* avoid structure result */
A68_VC  SYXACTR;  /* avoid structure result */
A68_VC  UYXACTR;  /* avoid structure result */
A68_79  YYXACTR_s A_UNUSED = {0};
A68_VC  BZXACTR;  /* clause result */
A68_VC  DAYACTR;  /* avoid structure result */
A68_VC  FAYACTR;  /* clause result */
A68_VC  JAYACTR;  /* clause result */
A68_VC  LAYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  OAYACTR;  /* ADICOPS - ABS INT */
A68_VC  PAYACTR;  /* avoid structure result */
A68_VC  QAYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  RAYACTR;  /* ADICOPS - ABS INT */
A68_VC  SAYACTR;  /* avoid structure result */
A68_VC  UAYACTR;  /* avoid structure result */
A68_VC  WAYACTR;  /* avoid structure result */
A68_80  XAYACTR_s A_UNUSED = {0};
A68_VC  ABYACTR;  /* clause result */
A68_VC  UBYACTR;  /* avoid structure result */
A68_VC  XBYACTR;  /* clause result */
A68_VC  ZBYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  CCYACTR;  /* clause result */
A68_VC  ECYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  GCYACTR;  /* clause result */
A68_INT  ICYACTR;  /* ADICOPS - ABS INT */
A68_VC  JCYACTR;  /* avoid structure result */
A68_VC  KCYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  LCYACTR;  /* ADICOPS - ABS INT */
A68_VC  MCYACTR;  /* avoid structure result */
A68_VC  OCYACTR;  /* avoid structure result */
A68_INT  QCYACTR;  /* ADICOPS - ABS INT */
A68_VC  RCYACTR;  /* avoid structure result */
A68_VC  SCYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  TCYACTR;  /* ADICOPS - ABS INT */
A68_VC  UCYACTR;  /* avoid structure result */
A68_81  WCYACTR_t A_UNUSED = {0};
A68_VC  ZCYACTR;  /* clause result */
A68_VC  TDYACTR;  /* avoid structure result */
A68_VC  VDYACTR;  /* avoid structure result */
A68_59  WDYACTR_c A_UNUSED = {0};
A68_59  XDYACTR;  /* united object - for case conformity */
A68_56  YDYACTR_c A_UNUSED = {0};
A68_VC  CEYACTR;  /* avoid structure result */
A68_VC  EEYACTR;  /* avoid structure result */
A68_60  FEYACTR_s A_UNUSED = {0};
A68_VC  KEYACTR;  /* avoid structure result */
A68_VC  MEYACTR;  /* avoid structure result */
A68_VC  OEYACTR;  /* avoid structure result */
A68_61  PEYACTR_e A_UNUSED = {0};
A68_VC  WEYACTR;  /* avoid structure result */
A68_VC  BFYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  IFYACTR;  /* clause result */
A68_VC  JFYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(imperativemnemonic);
 /* line 167: */
 /* line 168: */
TCXACTR = Imperative ;
switch ( TCXACTR.mode )
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
A_UNCPY(UCXACTR_p,TCXACTR);
 /* line 169: */
 /* line 170: */
VCXACTR = UCXACTR_p ;
switch ( VCXACTR.mode )
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
A_UNCPY(WCXACTR_l,VCXACTR);
 /* line 171: */
 /* line 176: */
XCXACTR = WCXACTR_l ;
switch ( XCXACTR.mode )
{ 
case 1: /* STRUCT(INT)  */
YCXACTR_si = (XCXACTR.data.mode1);
 /* line 177: */
 /* line 179: */
switch ( YCXACTR_si.Nse )
{ 
case 1: 
BDXACTR = CDXACTR;
break;
case 2: 
 /* line 180: */
BDXACTR = EDXACTR;
break;
case 3: 
BDXACTR = GDXACTR;
break;
default: 
 /* line 181: */
ROAAOSF_whole( YCXACTR_si.Nse, MBXACTR_fieldlength, &JDXACTR );
BDXACTR = A_VC_PLUS(IDXACTR,JDXACTR);
break;
} 
 /* line 183: */
KDXACTR = A_VC_PLUS(LDXACTR,BDXACTR);
break;
case 2: /* INT */
MDXACTR_i = (XCXACTR.data.mode2);
 /* line 184: */
 /* line 185: */
 /* line 186: */
 /* line 188: */
ROAAOSF_whole( MDXACTR_i, MBXACTR_fieldlength, &QDXACTR );
UTKACTR_idfullname( MDXACTR_i, &SDXACTR );
KDXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(PDXACTR,QDXACTR),RDXACTR),SDXACTR),A_HVEC(TDXACTR,'\"',A68_CHAR ));
break;
case 3: /* BOOL */
UDXACTR_b = (XCXACTR.data.mode3);
 /* line 189: */
 /* line 190: */
if (UDXACTR_b)
{ 
XDXACTR = YDXACTR;
} 
else
{ 
XDXACTR = AEXACTR;
} 
 /* line 192: */
KDXACTR = A_VC_PLUS(BEXACTR,XDXACTR);
break;
case 4: /* STRUCT(REF MODE26)  */
CEXACTR_c = (XCXACTR.data.mode4);
 /* line 193: */
 /* line 195: */
KDXACTR = A_VC_PLUS(EEXACTR,CEXACTR_c.Representation);
break;
case 5: /* STRUCT(INT)  */
FEXACTR_sl = (XCXACTR.data.mode5);
 /* line 196: */
 /* line 197: */
 /* line 199: */
ROAAOSF_whole( FEXACTR_sl.Labno, MBXACTR_fieldlength, &IEXACTR );
KDXACTR = A_VC_PLUS(HEXACTR,IEXACTR);
break;
case 6: /* STRUCT(INT,REF MODE26)  */
JEXACTR_n = (XCXACTR.data.mode6);
 /* line 200: */
 /* line 201: */
 /* line 202: */
 /* line 203: */
if (JEXACTR_n.Mode<0)
{ 
 /* line 204: */
MEXACTR = NEXACTR;
} 
else
{ 
MEXACTR = A_HVEC(OEXACTR,'=',A68_CHAR );
} 
 /* line 205: */
 /* line 206: */
 /* line 207: */
 /* line 209: */
REXACTR = JEXACTR_n.Mode ;
ROAAOSF_whole( A_ABS(REXACTR), MBXACTR_fieldlength, &SEXACTR );
UEXACTR = JEXACTR_n.Mode ;
WCNACTR_modename( A_ABS(UEXACTR), &VEXACTR );
KDXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(QEXACTR,MEXACTR),SEXACTR),A_HVEC(TEXACTR,'=',A68_CHAR )),VEXACTR),WEXACTR),JEXACTR_n.Nu);
break;
case 7: /* STRUCT(INT,REF MODE26)  */
XEXACTR_a = (XCXACTR.data.mode7);
 /* line 210: */
 /* line 211: */
 /* line 212: */
 /* line 213: */
if (XEXACTR_a.Mode<0)
{ 
 /* line 214: */
AFXACTR = BFXACTR;
} 
else
{ 
AFXACTR = A_HVEC(CFXACTR,'=',A68_CHAR );
} 
 /* line 215: */
 /* line 216: */
 /* line 218: */
FFXACTR = XEXACTR_a.Mode ;
ROAAOSF_whole( A_ABS(FFXACTR), MBXACTR_fieldlength, &GFXACTR );
IFXACTR = XEXACTR_a.Mode ;
WCNACTR_modename( A_ABS(IFXACTR), &JFXACTR );
KDXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(EFXACTR,AFXACTR),GFXACTR),A_HVEC(HFXACTR,'=',A68_CHAR )),JFXACTR),KFXACTR),XEXACTR_a.String),A_HVEC(LFXACTR,'\"',A68_CHAR ));
break;
case 8: /* STRUCT(INT,LONG BITS)  */
MFXACTR_o = (XCXACTR.data.mode8);
 /* line 219: */
 /* line 220: */
 /* line 221: */
 /* line 222: */
if (MFXACTR_o.Mode<0)
{ 
 /* line 223: */
PFXACTR = QFXACTR;
} 
else
{ 
PFXACTR = A_HVEC(RFXACTR,'=',A68_CHAR );
} 
 /* line 224: */
 /* line 225: */
 /* line 226: */
 /* line 229: */
UFXACTR = MFXACTR_o.Mode ;
ROAAOSF_whole( A_ABS(UFXACTR), MBXACTR_fieldlength, &VFXACTR );
XFXACTR = MFXACTR_o.Mode ;
WCNACTR_modename( A_ABS(XFXACTR), &YFXACTR );
JPAAOSF_lwhole( (A68_LINT )MFXACTR_o.Denotation, MBXACTR_fieldlength, &AGXACTR );
KDXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(TFXACTR,PFXACTR),VFXACTR),A_HVEC(WFXACTR,'=',A68_CHAR )),YFXACTR),ZFXACTR),AGXACTR);
break;
case 9: /* STRUCT(INT,REF MODE26)  */
BGXACTR_st = (XCXACTR.data.mode9);
 /* line 230: */
 /* line 231: */
 /* line 232: */
 /* line 233: */
if (BGXACTR_st.Mode<0)
{ 
 /* line 234: */
EGXACTR = FGXACTR;
} 
else
{ 
EGXACTR = A_HVEC(GGXACTR,'=',A68_CHAR );
} 
 /* line 235: */
 /* line 236: */
 /* line 237: */
 /* line 238: */
 /* line 239: */
JGXACTR = BGXACTR_st.Mode ;
ROAAOSF_whole( A_ABS(JGXACTR), MBXACTR_fieldlength, &KGXACTR );
MGXACTR = BGXACTR_st.Mode ;
WCNACTR_modename( A_ABS(MGXACTR), &NGXACTR );
KDXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(IGXACTR,EGXACTR),KGXACTR),A_HVEC(LGXACTR,'=',A68_CHAR )),NGXACTR),OGXACTR),BGXACTR_st.Denotation),A_HVEC(PGXACTR,'\"',A68_CHAR ));
break;
default: 
 /* line 241: */
KDXACTR = RGXACTR;
break;
} 
break;
case 10: /* STRUCT(INT,INT,INT)  */
SGXACTR_o = (VCXACTR.data.mode10);
 /* line 242: */
 /* line 243: */
{ 
 /* line 254: */
ROAAOSF_whole( SGXACTR_o.Param, MBXACTR_fieldlength, &FJXACTR );
GJXACTR_p = FJXACTR;
 /* line 255: */
 /* line 256: */
 /* line 257: */
 /* line 258: */
if (SGXACTR_o.Mode<0)
{ 
 /* line 259: */
IJXACTR = JJXACTR;
} 
else
{ 
 /* line 260: */
IJXACTR = A_HVEC(KJXACTR,'=',A68_CHAR );
} 
 /* line 261: */
LJXACTR = SGXACTR_o.Mode ;
ROAAOSF_whole( A_ABS(LJXACTR), MBXACTR_fieldlength, &MJXACTR );
OJXACTR = SGXACTR_o.Mode ;
WCNACTR_modename( A_ABS(OJXACTR), &PJXACTR );
QJXACTR_m = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(IJXACTR,MJXACTR),A_HVEC(NJXACTR,'=',A68_CHAR )),PJXACTR);
 /* line 263: */
 /* line 264: */
 /* line 265: */
switch ( SGXACTR_o.Fn )
{ 
case 1: 
 /* line 266: */
 /* line 267: */
 /* line 268: */
if (SGXACTR_o.Param==(A68_TRUE))
{ 
 /* line 269: */
UJXACTR = VJXACTR;
} 
else
{ 
UJXACTR = XJXACTR;
} 
 /* line 271: */
YJXACTR = A_VC_PLUS(A_VC_PLUS(ZJXACTR,UJXACTR),QJXACTR_m);
break;
case 2: 
 /* line 273: */
YJXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(CKXACTR,GJXACTR_p),DKXACTR),QJXACTR_m);
break;
case 3: 
 /* line 274: */
 /* line 276: */
YJXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(GKXACTR,GJXACTR_p),HKXACTR),QJXACTR_m);
break;
case 4: 
 /* line 278: */
YJXACTR = A_VC_PLUS(JKXACTR,QJXACTR_m);
break;
case 5: 
 /* line 279: */
 /* line 280: */
NKXACTR = SGXACTR_o.Mode ;
OKXACTR = 8 ;
switch ( A_MOD(NKXACTR,OKXACTR,MKXACTR) )
{ 
case 1: 
QKXACTR = RKXACTR;
break;
case 2: 
QKXACTR = TKXACTR;
break;
case 3: 
 /* line 281: */
QKXACTR = VKXACTR;
break;
case 4: 
QKXACTR = XKXACTR;
break;
case 5: 
QKXACTR = ZKXACTR;
break;
case 6: 
 /* line 283: */
QKXACTR = BLXACTR;
break;
case 7: 
 /* line 284: */
QKXACTR = DLXACTR;
break;
default: 
QKXACTR = FLXACTR;
break;
} 
 /* line 285: */
if (SGXACTR_o.Mode>7)
{ 
HLXACTR = ILXACTR;
} 
else
{ 
HLXACTR = KLXACTR;
} 
 /* line 287: */
YJXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(LLXACTR,GJXACTR_p),MLXACTR),QKXACTR),HLXACTR);
break;
case 6: 
 /* line 288: */
 /* line 290: */
ROAAOSF_whole( (1+SGXACTR_o.Param), 0, &RLXACTR );
YJXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(QLXACTR,RLXACTR),SLXACTR),GJXACTR_p),TLXACTR),QJXACTR_m);
break;
case 7: 
 /* line 291: */
 /* line 293: */
ROAAOSF_whole( (1+SGXACTR_o.Param), 0, &XLXACTR );
YJXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(WLXACTR,XLXACTR),YLXACTR),QJXACTR_m);
break;
case 8: 
 /* line 295: */
YJXACTR = A_VC_PLUS(AMXACTR,QJXACTR_m);
break;
case 9: 
 /* line 297: */
YJXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(DMXACTR,GJXACTR_p),EMXACTR),QJXACTR_m);
break;
case 10: 
 /* line 298: */
 /* line 299: */
 /* line 300: */
 /* line 301: */
 /* line 302: */
 /* line 304: */
ROAAOSF_whole( (SGXACTR_o.Param/16), MBXACTR_fieldlength, &KMXACTR );
VGXACTR_standardpreludeops( ((SGXACTR_o.Param/16)+1), &MMXACTR );
PMXACTR = SGXACTR_o.Param ;
QMXACTR = 16 ;
ROAAOSF_whole( A_MOD(PMXACTR,QMXACTR,OMXACTR), MBXACTR_fieldlength, &RMXACTR );
YJXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(JMXACTR,KMXACTR),LMXACTR),MMXACTR),NMXACTR),RMXACTR),SMXACTR),QJXACTR_m);
break;
case 11: 
 /* line 305: */
 /* line 306: */
 /* line 307: */
switch ( ((SGXACTR_o.Param/16)+1) )
{ 
case 1: 
VMXACTR = A_HVEC(WMXACTR,'+',A68_CHAR );
break;
case 2: 
VMXACTR = A_HVEC(XMXACTR,'-',A68_CHAR );
break;
case 3: 
VMXACTR = ZMXACTR;
break;
case 4: 
VMXACTR = BNXACTR;
break;
case 5: 
 /* line 308: */
VMXACTR = DNXACTR;
break;
case 6: 
VMXACTR = FNXACTR;
break;
case 7: 
VMXACTR = HNXACTR;
break;
case 8: 
VMXACTR = JNXACTR;
break;
case 9: 
VMXACTR = LNXACTR;
break;
case 10: 
 /* line 309: */
VMXACTR = NNXACTR;
break;
case 11: 
VMXACTR = PNXACTR;
break;
case 12: 
VMXACTR = RNXACTR;
break;
case 13: 
VMXACTR = TNXACTR;
break;
case 14: 
VMXACTR = VNXACTR;
break;
case 15: 
 /* line 310: */
VMXACTR = XNXACTR;
break;
case 16: 
VMXACTR = ZNXACTR;
break;
case 17: 
 /* line 311: */
VMXACTR = BOXACTR;
break;
case 18: 
 /* line 312: */
VMXACTR = DOXACTR;
break;
default: 
VMXACTR = FOXACTR;
break;
} 
 /* line 313: */
 /* line 314: */
 /* line 315: */
 /* line 317: */
ROAAOSF_whole( (SGXACTR_o.Param/16), MBXACTR_fieldlength, &JOXACTR );
NOXACTR = SGXACTR_o.Param ;
OOXACTR = 16 ;
ROAAOSF_whole( A_MOD(NOXACTR,OOXACTR,MOXACTR), MBXACTR_fieldlength, &POXACTR );
YJXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(IOXACTR,JOXACTR),KOXACTR),VMXACTR),LOXACTR),POXACTR),QOXACTR),QJXACTR_m);
break;
case 12: 
 /* line 318: */
 /* line 319: */
if (SGXACTR_o.Param==1)
{ 
UOXACTR = VOXACTR;
} 
else
{ 
 /* line 320: */
if (SGXACTR_o.Param==(-1))
{ 
UOXACTR = XOXACTR;
} 
else
{ 
 /* line 321: */
if (SGXACTR_o.Param>1)
{ 
UOXACTR = ZOXACTR;
} 
else
{ 
 /* line 322: */
 /* line 323: */
ROAAOSF_whole( ((-1)-SGXACTR_o.Param), MBXACTR_fieldlength, &DPXACTR );
UOXACTR = A_VC_PLUS(A_VC_PLUS(CPXACTR,DPXACTR),EPXACTR);
} 
} 
} 
 /* line 325: */
YJXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(FPXACTR,QJXACTR_m),GPXACTR),UOXACTR);
break;
case 13: 
 /* line 327: */
YJXACTR = A_VC_PLUS(IPXACTR,QJXACTR_m);
break;
case 14: 
 /* line 329: */
YJXACTR = A_VC_PLUS(KPXACTR,QJXACTR_m);
break;
case 15: 
 /* line 331: */
YJXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(NPXACTR,GJXACTR_p),OPXACTR),QJXACTR_m);
break;
case 16: 
 /* line 333: */
YJXACTR = A_VC_PLUS(QPXACTR,QJXACTR_m);
break;
case 17: 
 /* line 335: */
YJXACTR = A_VC_PLUS(SPXACTR,QJXACTR_m);
break;
case 18: 
 /* line 336: */
 /* line 337: */
switch ( (SGXACTR_o.Param+1) )
{ 
case 1: 
 /* line 338: */
VPXACTR = WPXACTR;
break;
case 2: 
 /* line 339: */
VPXACTR = YPXACTR;
break;
case 3: 
 /* line 340: */
VPXACTR = AQXACTR;
break;
case 4: 
 /* line 342: */
VPXACTR = CQXACTR;
break;
case 5: 
VPXACTR = EQXACTR;
break;
default: 
 /* line 343: */
VPXACTR = A_VC_PLUS(GQXACTR,GJXACTR_p);
break;
} 
 /* line 345: */
YJXACTR = A_VC_PLUS(A_VC_PLUS(HQXACTR,QJXACTR_m),VPXACTR);
break;
case 19: 
 /* line 347: */
YJXACTR = JQXACTR;
break;
case 20: 
 /* line 349: */
YJXACTR = A_VC_PLUS(LQXACTR,QJXACTR_m);
break;
case 21: 
 /* line 351: */
YJXACTR = A_VC_PLUS(NQXACTR,QJXACTR_m);
break;
case 22: 
 /* line 353: */
YJXACTR = A_VC_PLUS(PQXACTR,QJXACTR_m);
break;
case 23: 
 /* line 355: */
YJXACTR = A_VC_PLUS(RQXACTR,QJXACTR_m);
break;
case 24: 
 /* line 357: */
YJXACTR = A_VC_PLUS(TQXACTR,QJXACTR_m);
break;
case 25: 
 /* line 359: */
YJXACTR = A_VC_PLUS(VQXACTR,QJXACTR_m);
break;
case 26: 
 /* line 361: */
YJXACTR = A_VC_PLUS(XQXACTR,QJXACTR_m);
break;
case 27: 
 /* line 363: */
YJXACTR = A_VC_PLUS(ZQXACTR,QJXACTR_m);
break;
case 28: 
 /* line 365: */
YJXACTR = A_VC_PLUS(BRXACTR,QJXACTR_m);
break;
case 29: 
 /* line 367: */
YJXACTR = A_VC_PLUS(DRXACTR,QJXACTR_m);
break;
case 30: 
 /* line 369: */
YJXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(GRXACTR,GJXACTR_p),HRXACTR),QJXACTR_m);
break;
case 31: 
 /* line 371: */
YJXACTR = A_VC_PLUS(JRXACTR,QJXACTR_m);
break;
case 32: 
 /* line 372: */
 /* line 374: */
YJXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(MRXACTR,GJXACTR_p),NRXACTR),QJXACTR_m);
break;
case 33: 
 /* line 376: */
YJXACTR = A_VC_PLUS(PRXACTR,QJXACTR_m);
break;
case 34: 
 /* line 378: */
YJXACTR = A_VC_PLUS(RRXACTR,QJXACTR_m);
break;
case 35: 
 /* line 380: */
YJXACTR = A_VC_PLUS(TRXACTR,QJXACTR_m);
break;
case 36: 
 /* line 382: */
YJXACTR = A_VC_PLUS(VRXACTR,QJXACTR_m);
break;
case 37: 
 /* line 384: */
YJXACTR = A_VC_PLUS(XRXACTR,QJXACTR_m);
break;
case 38: 
 /* line 386: */
YJXACTR = A_VC_PLUS(ZRXACTR,QJXACTR_m);
break;
case 39: 
 /* line 388: */
YJXACTR = A_VC_PLUS(BSXACTR,QJXACTR_m);
break;
case 40: 
 /* line 390: */
 /* line 391: */
YJXACTR = A_VC_PLUS(QJXACTR_m,DSXACTR);
break;
default: 
 /* line 392: */
 /* line 393: */
if (SGXACTR_o.Fn==50)
{ 
YJXACTR = FSXACTR;
} 
else
{ 
 /* line 394: */
 /* line 395: */
if (SGXACTR_o.Fn==51)
{ 
 /* line 396: */
YJXACTR = HSXACTR;
} 
else
{ 
 /* line 397: */
 /* line 398: */
YJXACTR = JSXACTR;
} 
} 
break;
} 
 /* line 400: */
KDXACTR = A_VC_PLUS(KSXACTR,YJXACTR);
} 
break;
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
LSXACTR_t = (VCXACTR.data.mode11);
 /* line 401: */
 /* line 402: */
 /* line 403: */
switch ( LSXACTR_t.Type )
{ 
case 1: 
 /* line 404: */
OSXACTR = PSXACTR;
break;
case 2: 
 /* line 405: */
OSXACTR = RSXACTR;
break;
case 3: 
 /* line 406: */
OSXACTR = TSXACTR;
break;
case 4: 
 /* line 407: */
OSXACTR = VSXACTR;
break;
case 5: 
 /* line 408: */
OSXACTR = XSXACTR;
break;
case 6: 
 /* line 409: */
OSXACTR = ZSXACTR;
break;
case 7: 
 /* line 411: */
OSXACTR = BTXACTR;
break;
case 8: 
OSXACTR = DTXACTR;
break;
default: 
 /* line 412: */
 /* line 413: */
ROAAOSF_whole( LSXACTR_t.Type, MBXACTR_fieldlength, &GTXACTR );
OSXACTR = A_VC_PLUS(FTXACTR,GTXACTR);
break;
} 
 /* line 414: */
 /* line 415: */
 /* line 416: */
if (LSXACTR_t.Mode<0)
{ 
KTXACTR = LTXACTR;
} 
else
{ 
KTXACTR = A_HVEC(MTXACTR,'=',A68_CHAR );
} 
 /* line 417: */
 /* line 418: */
 /* line 419: */
 /* line 421: */
RTXACTR = LSXACTR_t.Mode ;
ROAAOSF_whole( A_ABS(RTXACTR), MBXACTR_fieldlength, &STXACTR );
UTXACTR = LSXACTR_t.Mode ;
WCNACTR_modename( A_ABS(UTXACTR), &VTXACTR );
ROAAOSF_whole( LSXACTR_t.Decno, MBXACTR_fieldlength, &XTXACTR );
KDXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(OTXACTR,OSXACTR),PTXACTR),LSXACTR_t.Name),QTXACTR),KTXACTR),STXACTR),A_HVEC(TTXACTR,'=',A68_CHAR )),VTXACTR),WTXACTR),XTXACTR);
break;
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
YTXACTR_r = (VCXACTR.data.mode12);
 /* line 422: */
 /* line 423: */
 /* line 424: */
 /* line 425: */
if (YTXACTR_r.Mode<0)
{ 
CUXACTR = DUXACTR;
} 
else
{ 
CUXACTR = A_HVEC(EUXACTR,'=',A68_CHAR );
} 
 /* line 426: */
 /* line 427: */
 /* line 430: */
 /* line 431: */
 /* line 432: */
if (YTXACTR_r.Maxname<3)
{ 
GUXACTR = HUXACTR;
} 
else
{ 
 /* line 433: */
 /* line 434: */
if (YTXACTR_r.Maxname==3)
{ 
GUXACTR = JUXACTR;
} 
else
{ 
 /* line 435: */
 /* line 436: */
 /* line 437: */
ROAAOSF_whole( YTXACTR_r.Maxname, MBXACTR_fieldlength, &NUXACTR );
UTKACTR_idfullname( YTXACTR_r.Maxname, &PUXACTR );
GUXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(MUXACTR,NUXACTR),OUXACTR),PUXACTR),A_HVEC(QUXACTR,'\"',A68_CHAR ));
} 
} 
 /* line 438: */
 /* line 440: */
PBXACTR_bitmnemonic( (A68_BITS )(YTXACTR_r.Props&LBXACTR_maskxroutine), A68_FALSE, &UUXACTR );
WUXACTR = YTXACTR_r.Mode ;
ROAAOSF_whole( A_ABS(WUXACTR), MBXACTR_fieldlength, &XUXACTR );
ZUXACTR = YTXACTR_r.Mode ;
WCNACTR_modename( A_ABS(ZUXACTR), &AVXACTR );
ROAAOSF_whole( YTXACTR_r.Rdenno, MBXACTR_fieldlength, &CVXACTR );
KDXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(SUXACTR,YTXACTR_r.Name),A_HVEC(TUXACTR,'\"',A68_CHAR )),UUXACTR),VUXACTR),CUXACTR),XUXACTR),A_HVEC(YUXACTR,'=',A68_CHAR )),AVXACTR),GUXACTR),BVXACTR),CVXACTR);
break;
case 13: /* STRUCT(INT)  */
DVXACTR_w = (VCXACTR.data.mode13);
 /* line 441: */
 /* line 442: */
 /* line 443: */
switch ( DVXACTR_w.W )
{ 
case 1: 
GVXACTR = HVXACTR;
break;
case 2: 
GVXACTR = JVXACTR;
break;
case 3: 
GVXACTR = LVXACTR;
break;
case 4: 
 /* line 444: */
GVXACTR = NVXACTR;
break;
case 5: 
GVXACTR = PVXACTR;
break;
case 6: 
 /* line 445: */
GVXACTR = RVXACTR;
break;
case 7: 
 /* line 446: */
GVXACTR = TVXACTR;
break;
default: 
GVXACTR = VVXACTR;
break;
} 
 /* line 448: */
KDXACTR = A_VC_PLUS(WVXACTR,GVXACTR);
break;
case 14: /* STRUCT(REF MODE26,INT,INT,BOOL)  */
XVXACTR_l = (VCXACTR.data.mode14);
 /* line 449: */
 /* line 450: */
AWXACTR = A_VVAC(ZVXACTR) ;
BWXACTR = XVXACTR_l.Name ;
if (A_VSTRUCTCOMP(BWXACTR,AWXACTR))
{ 
DWXACTR = EWXACTR;
} 
else
{ 
 /* line 451: */
DWXACTR = XVXACTR_l.Name;
} 
 /* line 453: */
if (XVXACTR_l.Notsetting)
{ 
 /* line 455: */
switch ( (XVXACTR_l.Status+1) )
{ 
case 1: 
 /* line 457: */
ROAAOSF_whole( XVXACTR_l.Labno, MBXACTR_fieldlength, &IWXACTR );
GWXACTR = A_VC_PLUS(HWXACTR,IWXACTR);
break;
case 2: 
 /* line 458: */
 /* line 459: */
 /* line 460: */
ROAAOSF_whole( XVXACTR_l.Labno, MBXACTR_fieldlength, &LWXACTR );
GWXACTR = A_VC_PLUS(KWXACTR,LWXACTR);
break;
default: 
 /* line 461: */
 /* line 462: */
 /* line 463: */
 /* line 464: */
ROAAOSF_whole( XVXACTR_l.Status, MBXACTR_fieldlength, &PWXACTR );
ROAAOSF_whole( XVXACTR_l.Labno, MBXACTR_fieldlength, &RWXACTR );
GWXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(OWXACTR,PWXACTR),QWXACTR),RWXACTR);
break;
} 
} 
else
{ 
 /* line 465: */
 /* line 466: */
ROAAOSF_whole( XVXACTR_l.Labno, MBXACTR_fieldlength, &UWXACTR );
GWXACTR = A_VC_PLUS(TWXACTR,UWXACTR);
} 
 /* line 468: */
KDXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(VWXACTR,DWXACTR),A_HVEC(WWXACTR,'\"',A68_CHAR )),GWXACTR);
break;
case 15: /* STRUCT(INT,BITS,INT)  */
XWXACTR_u = (VCXACTR.data.mode15);
 /* line 469: */
 /* line 470: */
if (XWXACTR_u.Mode<0)
{ 
AXXACTR = BXXACTR;
} 
else
{ 
AXXACTR = A_HVEC(CXXACTR,'=',A68_CHAR );
} 
 /* line 471: */
 /* line 472: */
 /* line 473: */
 /* line 474: */
 /* line 476: */
FXXACTR = XWXACTR_u.Mode ;
ROAAOSF_whole( A_ABS(FXXACTR), MBXACTR_fieldlength, &GXXACTR );
IXXACTR = XWXACTR_u.Mode ;
WCNACTR_modename( A_ABS(IXXACTR), &JXXACTR );
PBXACTR_bitmnemonic( (A68_BITS )(XWXACTR_u.Props&WCAACTR_decbit), A68_TRUE, &KXXACTR );
ROAAOSF_whole( XWXACTR_u.Param, MBXACTR_fieldlength, &MXXACTR );
KDXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(EXXACTR,AXXACTR),GXXACTR),A_HVEC(HXXACTR,'=',A68_CHAR )),JXXACTR),KXXACTR),LXXACTR),MXXACTR);
break;
case 16: /* STRUCT(INT)  */
NXXACTR_c = (VCXACTR.data.mode16);
 /* line 477: */
 /* line 478: */
 /* line 480: */
ROAAOSF_whole( NXXACTR_c.I, MBXACTR_fieldlength, &QXXACTR );
KDXACTR = A_VC_PLUS(PXXACTR,QXXACTR);
break;
case 17: /* STRUCT(BOOL)  */
RXXACTR_k = (VCXACTR.data.mode17);
 /* line 481: */
 /* line 482: */
if (RXXACTR_k.Start)
{ 
UXXACTR = VXXACTR;
} 
else
{ 
UXXACTR = XXXACTR;
} 
 /* line 484: */
KDXACTR = A_VC_PLUS(YXXACTR,UXXACTR);
break;
case 19: /* STRUCT(INT,INT,REF MODE26)  */
ZXXACTR_c = (VCXACTR.data.mode19);
 /* line 485: */
 /* line 486: */
 /* line 487: */
 /* line 488: */
 /* line 490: */
ROAAOSF_whole( ZXXACTR_c.Mode, 0, &GYXACTR );
ROAAOSF_whole( ZXXACTR_c.Number, 0, &IYXACTR );
KDXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(EYXACTR,FYXACTR),GYXACTR),HYXACTR),IYXACTR),JYXACTR);
break;
case 18: /* STRUCT(MODE64,REF MODE26)  */
KYXACTR_f = (VCXACTR.data.mode18);
 /* line 491: */
 /* line 492: */
 /* line 493: */
 /* line 494: */
 /* line 495: */
 /* line 496: */
 /* line 497: */
 /* line 498: */
 /* line 499: */
ROAAOSF_whole( KYXACTR_f.Info.Nochars, MBXACTR_fieldlength, &QYXACTR );
ROAAOSF_whole( KYXACTR_f.Info.Nocases, MBXACTR_fieldlength, &SYXACTR );
ROAAOSF_whole( KYXACTR_f.Info.W, MBXACTR_fieldlength, &UYXACTR );
KDXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(PYXACTR,QYXACTR),RYXACTR),SYXACTR),TYXACTR),UYXACTR),VYXACTR),KYXACTR_f.Text);
break;
default: 
 /* line 502: */
KDXACTR = XYXACTR;
break;
} 
break;
case 20: /* STRUCT(INT,INT,BITS,INT)  */
YYXACTR_s = (TCXACTR.data.mode20);
 /* line 503: */
 /* line 504: */
switch ( YYXACTR_s.Fn )
{ 
case 1: 
BZXACTR = CZXACTR;
break;
case 2: 
BZXACTR = EZXACTR;
break;
case 3: 
 /* line 505: */
BZXACTR = GZXACTR;
break;
case 4: 
BZXACTR = IZXACTR;
break;
case 5: 
BZXACTR = KZXACTR;
break;
case 6: 
 /* line 506: */
BZXACTR = MZXACTR;
break;
case 7: 
BZXACTR = OZXACTR;
break;
case 8: 
BZXACTR = QZXACTR;
break;
case 9: 
 /* line 507: */
BZXACTR = SZXACTR;
break;
case 10: 
BZXACTR = UZXACTR;
break;
case 11: 
BZXACTR = WZXACTR;
break;
case 12: 
 /* line 509: */
BZXACTR = YZXACTR;
break;
case 13: 
 /* line 510: */
BZXACTR = AAYACTR;
break;
default: 
 /* line 511: */
 /* line 512: */
 /* line 513: */
ROAAOSF_whole( YYXACTR_s.Fn, MBXACTR_fieldlength, &DAYACTR );
BZXACTR = A_VC_PLUS(CAYACTR,DAYACTR);
break;
} 
 /* line 514: */
 /* line 515: */
 /* line 516: */
 /* line 518: */
if (YYXACTR_s.Fn==11)
{ 
 /* line 519: */
FAYACTR = GAYACTR;
} 
else
{ 
 /* line 520: */
if (YYXACTR_s.Mode<0)
{ 
JAYACTR = KAYACTR;
} 
else
{ 
JAYACTR = A_HVEC(LAYACTR,'=',A68_CHAR );
} 
 /* line 521: */
 /* line 522: */
 /* line 523: */
 /* line 524: */
OAYACTR = YYXACTR_s.Mode ;
ROAAOSF_whole( A_ABS(OAYACTR), MBXACTR_fieldlength, &PAYACTR );
RAYACTR = YYXACTR_s.Mode ;
WCNACTR_modename( A_ABS(RAYACTR), &SAYACTR );
ROAAOSF_whole( YYXACTR_s.Param, MBXACTR_fieldlength, &UAYACTR );
FAYACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(NAYACTR,JAYACTR),PAYACTR),A_HVEC(QAYACTR,'=',A68_CHAR )),SAYACTR),TAYACTR),UAYACTR);
} 
 /* line 528: */
PBXACTR_bitmnemonic( (A68_BITS )(YYXACTR_s.Props&(A68_BITS )((A68_BITS )(FBXACTR_maskgeneral|GBXACTR_maskdynamica)|KBXACTR_maskspecial)), A68_TRUE, &WAYACTR );
KDXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(VAYACTR,BZXACTR),WAYACTR),FAYACTR);
break;
case 21: /* STRUCT(INT,INT,BITS,INT)  */
XAYACTR_s = (TCXACTR.data.mode21);
 /* line 529: */
 /* line 530: */
switch ( (XAYACTR_s.Fn+2) )
{ 
case 1: 
ABYACTR = BBYACTR;
break;
case 2: 
 /* line 531: */
ABYACTR = DBYACTR;
break;
case 3: 
 /* line 532: */
ABYACTR = FBYACTR;
break;
case 4: 
 /* line 533: */
ABYACTR = HBYACTR;
break;
case 5: 
 /* line 534: */
ABYACTR = JBYACTR;
break;
case 6: 
 /* line 535: */
ABYACTR = LBYACTR;
break;
case 7: 
 /* line 536: */
ABYACTR = NBYACTR;
break;
case 8: 
 /* line 538: */
ABYACTR = PBYACTR;
break;
case 9: 
 /* line 539: */
ABYACTR = RBYACTR;
break;
default: 
 /* line 540: */
 /* line 541: */
 /* line 542: */
ROAAOSF_whole( XAYACTR_s.Fn, MBXACTR_fieldlength, &UBYACTR );
ABYACTR = A_VC_PLUS(TBYACTR,UBYACTR);
break;
} 
 /* line 543: */
 /* line 544: */
if (XAYACTR_s.Mode<0)
{ 
XBYACTR = YBYACTR;
} 
else
{ 
XBYACTR = A_HVEC(ZBYACTR,'=',A68_CHAR );
} 
 /* line 545: */
 /* line 546: */
 /* line 547: */
if (XAYACTR_s.Resultmode<0)
{ 
CCYACTR = DCYACTR;
} 
else
{ 
CCYACTR = A_HVEC(ECYACTR,'=',A68_CHAR );
} 
 /* line 548: */
 /* line 549: */
 /* line 550: */
if ((XAYACTR_s.Fn==6)|(XAYACTR_s.Fn==7))
{ 
GCYACTR = HCYACTR;
} 
else
{ 
 /* line 551: */
 /* line 552: */
ICYACTR = XAYACTR_s.Resultmode ;
ROAAOSF_whole( A_ABS(ICYACTR), MBXACTR_fieldlength, &JCYACTR );
LCYACTR = XAYACTR_s.Resultmode ;
WCNACTR_modename( A_ABS(LCYACTR), &MCYACTR );
GCYACTR = A_VC_PLUS(A_VC_PLUS(JCYACTR,A_HVEC(KCYACTR,'=',A68_CHAR )),MCYACTR);
} 
 /* line 555: */
PBXACTR_bitmnemonic( XAYACTR_s.Props, A68_TRUE, &OCYACTR );
QCYACTR = XAYACTR_s.Mode ;
ROAAOSF_whole( A_ABS(QCYACTR), MBXACTR_fieldlength, &RCYACTR );
TCYACTR = XAYACTR_s.Mode ;
WCNACTR_modename( A_ABS(TCYACTR), &UCYACTR );
KDXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(NCYACTR,ABYACTR),OCYACTR),PCYACTR),XBYACTR),RCYACTR),A_HVEC(SCYACTR,'=',A68_CHAR )),UCYACTR),VCYACTR),CCYACTR),GCYACTR);
break;
case 22: /* STRUCT(INT,BITS)  */
WCYACTR_t = (TCXACTR.data.mode22);
 /* line 556: */
 /* line 557: */
switch ( WCYACTR_t.Fn )
{ 
case 1: 
ZCYACTR = ADYACTR;
break;
case 2: 
ZCYACTR = CDYACTR;
break;
case 3: 
 /* line 558: */
ZCYACTR = EDYACTR;
break;
case 4: 
ZCYACTR = GDYACTR;
break;
case 5: 
ZCYACTR = IDYACTR;
break;
case 6: 
 /* line 559: */
ZCYACTR = KDYACTR;
break;
case 7: 
ZCYACTR = MDYACTR;
break;
case 8: 
 /* line 560: */
ZCYACTR = ODYACTR;
break;
case 9: 
 /* line 561: */
ZCYACTR = QDYACTR;
break;
default: 
 /* line 562: */
 /* line 563: */
 /* line 564: */
ROAAOSF_whole( WCYACTR_t.Fn, MBXACTR_fieldlength, &TDYACTR );
ZCYACTR = A_VC_PLUS(SDYACTR,TDYACTR);
break;
} 
 /* line 568: */
PBXACTR_bitmnemonic( WCYACTR_t.Props, A68_TRUE, &VDYACTR );
KDXACTR = A_VC_PLUS(A_VC_PLUS(UDYACTR,ZCYACTR),VDYACTR);
break;
case 23: /* STRUCT(INT,INT,REF MODE57)  */
case 24: /* STRUCT(INT,INT,INT)  */
case 25: /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE62)  */
A_UNCPY(WDYACTR_c,TCXACTR);
WDYACTR_c.mode -= 22;
 /* line 569: */
XDYACTR = WDYACTR_c ;
switch ( XDYACTR.mode )
{ 
case 1: /* STRUCT(INT,INT,REF MODE57)  */
YDYACTR_c = (XDYACTR.data.mode1);
 /* line 570: */
 /* line 571: */
 /* line 572: */
 /* line 574: */
ROAAOSF_whole( YDYACTR_c.Body, MBXACTR_fieldlength, &CEYACTR );
ROAAOSF_whole( YDYACTR_c.Moduleno, MBXACTR_fieldlength, &EEYACTR );
KDXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(BEYACTR,CEYACTR),DEYACTR),EEYACTR);
break;
case 2: /* STRUCT(INT,INT,INT)  */
FEYACTR_s = (XDYACTR.data.mode2);
 /* line 575: */
 /* line 576: */
 /* line 577: */
 /* line 578: */
ROAAOSF_whole( FEYACTR_s.Moduleno, MBXACTR_fieldlength, &KEYACTR );
ROAAOSF_whole( FEYACTR_s.I, MBXACTR_fieldlength, &MEYACTR );
ROAAOSF_whole( FEYACTR_s.J, MBXACTR_fieldlength, &OEYACTR );
KDXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(JEYACTR,KEYACTR),LEYACTR),MEYACTR),NEYACTR),OEYACTR);
break;
case 3: /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE62)  */
PEYACTR_e = (XDYACTR.data.mode3);
 /* line 579: */
 /* line 580: */
 /* line 581: */
 /* line 582: */
 /* line 583: */
 /* line 585: */
 /* line 587: */
ROAAOSF_whole( PEYACTR_e.Moduleno, MBXACTR_fieldlength, &WEYACTR );
KDXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(VEYACTR,WEYACTR),XEYACTR),PEYACTR_e.Name),YEYACTR),PEYACTR_e.Uname),ZEYACTR),PEYACTR_e.Lname),AFYACTR),PEYACTR_e.Gname),A_HVEC(BFYACTR,'\"',A68_CHAR ));
break;
default: 
 /* line 591: */
KDXACTR = DFYACTR;
break;
} 
break;
case 26: /* VOID */
 /* line 592: */
 /* line 593: */
KDXACTR = FFYACTR;
break;
default: 
 /* line 598: */
KDXACTR = HFYACTR;
break;
} 
IFYACTR = A_VC_PLUS(KDXACTR,A_HVEC(JFYACTR,')',A68_CHAR ));
A_PROC_EXIT(imperativemnemonic);
*ReturnedValue = (IFYACTR);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 5: */
void QYWACTR(void)   /* initialise DECS mnemonics */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel","-dir",".","mnemonics.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/vak/Project/Algol/Algol-68RS-Source/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/vak/Project/Algol/Algol-68RS-Source/a68config/a68config.m","./identifiers.m","./incimperatives.m","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config A_UNUSED;
/* --- end of configuration information */
A68_116  GZWACTR;  /* procedure value */
A68_124  HZWACTR;  /* collateral clause result */
A68_119  OAXACTR;  /* OPERATORS - istruct to row */
A68_127  QAXACTR;  /* collateral clause result */
A68_119  DBXACTR;  /* OPERATORS - istruct to row */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
MMVACTR();   /* USE identifiers */
UAAACTR();   /* USE incimperatives */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/mnemonics.a68";
A_config.translation_time = "Thu Nov  5 21:11:00 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "PYWACTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 21:11:00 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS mnemonics);
(void)(UEAALIB_a68config(LGAALIB_configinfo, UYWACTR));
 /* line 64: */
GZWACTR.fn.fn_global = XYWACTR_generator;
GZWACTR.nonlocals = A68_NIL;
VYWACTR_anonymous = GZWACTR;
 /* line 66: */
 /* line 67: */
 /* line 68: */
HZWACTR.data[0].Name = JZWACTR;
 /* line 69: */
HZWACTR.data[0].Value = SCAACTR_priobit;
HZWACTR.data[1].Name = LZWACTR;
 /* line 70: */
HZWACTR.data[1].Value = TCAACTR_exitbit;
HZWACTR.data[2].Name = NZWACTR;
 /* line 71: */
HZWACTR.data[2].Value = UCAACTR_semibit;
HZWACTR.data[3].Name = PZWACTR;
 /* line 72: */
HZWACTR.data[3].Value = VCAACTR_heapbit;
HZWACTR.data[4].Name = RZWACTR;
 /* line 73: */
HZWACTR.data[4].Value = WCAACTR_decbit;
HZWACTR.data[5].Name = TZWACTR;
 /* line 74: */
HZWACTR.data[5].Value = XCAACTR_vardecbit;
HZWACTR.data[6].Name = VZWACTR;
 /* line 75: */
HZWACTR.data[6].Value = YCAACTR_compgenbit;
HZWACTR.data[7].Name = XZWACTR;
 /* line 76: */
HZWACTR.data[7].Value = ZCAACTR_elifousebit;
HZWACTR.data[8].Name = ZZWACTR;
 /* line 77: */
HZWACTR.data[8].Value = ADAACTR_labbit;
HZWACTR.data[9].Name = BAXACTR;
 /* line 78: */
HZWACTR.data[9].Value = BDAACTR_dontpullbit;
HZWACTR.data[10].Name = DAXACTR;
 /* line 79: */
HZWACTR.data[10].Value = CDAACTR_dyprocbit;
HZWACTR.data[11].Name = FAXACTR;
 /* line 80: */
HZWACTR.data[11].Value = DDAACTR_dyvardecbit;
HZWACTR.data[12].Name = HAXACTR;
 /* line 81: */
HZWACTR.data[12].Value = EDAACTR_dydecbit;
HZWACTR.data[13].Name = JAXACTR;
 /* line 82: */
HZWACTR.data[13].Value = FDAACTR_genprocbit;
HZWACTR.data[14].Name = LAXACTR;
 /* line 83: */
HZWACTR.data[14].Value = GDAACTR_locgenbit;
HZWACTR.data[15].Name = NAXACTR;
 /* line 84: */
HZWACTR.data[15].Value = HDAACTR_locdydecbit;
PAXACTR_controlbits = A_HIS1ARR(OAXACTR,HZWACTR,A68_115 ,16);
 /* line 86: */
 /* line 87: */
 /* line 88: */
QAXACTR.data[0].Name = SAXACTR;
 /* line 89: */
QAXACTR.data[0].Value = NCAACTR_ccbit;
QAXACTR.data[1].Name = UAXACTR;
 /* line 90: */
QAXACTR.data[1].Value = OCAACTR_operatorbit;
QAXACTR.data[2].Name = WAXACTR;
 /* line 91: */
QAXACTR.data[2].Value = PCAACTR_valbit;
QAXACTR.data[3].Name = YAXACTR;
 /* line 92: */
QAXACTR.data[3].Value = QCAACTR_holebit;
QAXACTR.data[4].Name = ABXACTR;
 /* line 93: */
QAXACTR.data[4].Value = FDAACTR_genprocbit;
QAXACTR.data[5].Name = CBXACTR;
 /* line 94: */
QAXACTR.data[5].Value = RCAACTR_globscopebit;
EBXACTR_routinebits = A_HIS1ARR(DBXACTR,QAXACTR,A68_115 ,6);
 /* line 108: */
 /* line 109: */
 /* line 110: */
 /* line 111: */
FBXACTR_maskgeneral = (A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )(SCAACTR_priobit|UCAACTR_semibit)|WCAACTR_decbit)|XCAACTR_vardecbit)|ADAACTR_labbit)|TCAACTR_exitbit)|GDAACTR_locgenbit)|HDAACTR_locdydecbit);
 /* line 112: */
 /* line 113: */
GBXACTR_maskdynamica = (A68_BITS )((A68_BITS )(CDAACTR_dyprocbit|DDAACTR_dyvardecbit)|EDAACTR_dydecbit);
 /* line 114: */
 /* line 115: */
 /* line 116: */
IBXACTR_maskdynamicc = (A68_BITS )((A68_BITS )((A68_BITS )(BDAACTR_dontpullbit|CDAACTR_dyprocbit)|DDAACTR_dyvardecbit)|EDAACTR_dydecbit);
 /* line 117: */
 /* line 118: */
JBXACTR_maskroutine = (A68_BITS )((A68_BITS )(FDAACTR_genprocbit|RCAACTR_globscopebit)|PCAACTR_valbit);
 /* line 119: */
 /* line 120: */
 /* line 121: */
 /* line 122: */
LBXACTR_maskxroutine = (A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )(NCAACTR_ccbit|OCAACTR_operatorbit)|PCAACTR_valbit)|QCAACTR_holebit)|RCAACTR_globscopebit)|FDAACTR_genprocbit);
 /* line 124: */
 /* line 145: */
 /* line 163: */
 /* line 602: */
A_PROC_EXIT(DECS mnemonics);
} 
#undef NL
/* end of translation of mnemonics.a68 */
