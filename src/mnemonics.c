/* UNAME:GZWACTR */
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

A_PROCEDURE(A68_VOID ,A68t85,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t85  A68_85 ;    /* PROC(INT,MODE26) VOID */
struct A68t87 ;

A_PROCEDURE(A68_VOID ,A68t86,(struct A68t65 ,struct A68t87 *,A68_INT ),(struct A68t65 ,struct A68t87 *,A68_INT ,void *));
typedef struct A68t86  A68_86 ;    /* PROC(MODE65,REF MODE87,INT) VOID */
struct A68t89{
A68_INT  Rdenno;
A_PAD_INT(PAD_48)
};
typedef struct A68t89  A68_89 ;    /* STRUCT(INT)  */
struct A68t90{
A68_INT  Idno;
A_PAD_INT(PAD_49)
};
typedef struct A68t90  A68_90 ;    /* STRUCT(INT)  */
A_ISTRUCT(A68_CHAR ,7,A68t94);
typedef struct A68t94  A68_94 ;    /* STRUCT 7 CHAR */
struct A68t91{
struct A68t94  Name;
A_PAD_ISTRUCT(A68_94 ,PAD_50)
A68_INT  Mode;
A_PAD_INT(PAD_51)
};
typedef struct A68t91  A68_91 ;    /* STRUCT(MODE94,INT)  */
struct A68t92{
A68_INT  Fn;
A_PAD_INT(PAD_52)
A68_INT  Param;
A_PAD_INT(PAD_53)
struct A68t93 * Operands;
};
typedef struct A68t92  A68_92 ;    /* STRUCT(INT,INT,REF MODE93)  */
struct A68t88 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t89  mode2;
struct A68t90  mode4;
struct A68t91  mode5;
A68_VC  mode6;
struct A68t69  mode7;
struct A68t68  mode8;
struct A68t92  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t88  A68_88 ;    /* UNION(LONG BITS,MODE89,VOID,MODE90,MODE91,MODE26,MODE69,MODE68,MODE92)  */
struct A68t87{
A68_INT  Mode;
A_PAD_INT(PAD_54)
A68_BITS  Info;
A_PAD_BITS(PAD_55)
struct A68t88  Extra;
};
typedef struct A68t87  A68_87 ;    /* STRUCT(INT,BITS,MODE88)  */
struct A68t93{
struct A68t87  Value;
struct A68t93 * Rest;
};
typedef struct A68t93  A68_93 ;    /* STRUCT(MODE87,REF MODE93)  */

A_PROCEDURE(A68_VOID ,A68t95,(void),(void *));
typedef struct A68t95  A68_95 ;    /* PROC VOID */
struct A68t97 ;

A_PROCEDURE(A68_VOID ,A68t96,(A68_INT ,struct A68t97 *),(A68_INT ,struct A68t97 *,void *));
typedef struct A68t96  A68_96 ;    /* PROC(INT) MODE97 */
struct A68t97{
A68_INT  Level;
A_PAD_INT(PAD_56)
A68_INT  Block;
A_PAD_INT(PAD_57)
};
typedef struct A68t97  A68_97 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t98,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t98  A68_98 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t99,(A68_VC ,struct A68t94 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ),(A68_VC ,struct A68t94 ,A68_INT ,A68_INT ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_VC ,A68_VC ,void *));
typedef struct A68t99  A68_99 ;    /* PROC(REF MODE26,MODE94,INT,INT,BOOL,BOOL,BOOL,BOOL,BOOL,REF MODE26,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t100,(struct A68t65 ,struct A68t93 **),(struct A68t65 ,struct A68t93 **,void *));
typedef struct A68t100  A68_100 ;    /* PROC(MODE65,REF REF MODE93) VOID */
A_ROW(struct A68t102 ,A68t101,1);
typedef struct A68t101  A68_101 ;    /* [] MODE102 */
struct A68t102{
A68_INT  Mode;
A_PAD_INT(PAD_58)
A68_INT  Cvariabletype;
A_PAD_INT(PAD_59)
struct A68t97  Environ;
A68_VC  Name;
A68_VC  C_name;
struct A68t94  Prefix;
A_PAD_ISTRUCT(A68_94 ,PAD_60)
A68_BITS  Flags;
A_PAD_BITS(PAD_61)
A68_VC  Definition;
A68_VC  Rhs;
};
typedef struct A68t102  A68_102 ;    /* STRUCT(INT,INT,MODE97,REF MODE26,REF MODE26,MODE94,BITS,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t103,(struct A68t65 ),(struct A68t65 ,void *));
typedef struct A68t103  A68_103 ;    /* PROC(MODE65) VOID */

A_PROCEDURE(A68_VOID ,A68t104,(struct A68t76 ),(struct A68t76 ,void *));
typedef struct A68t104  A68_104 ;    /* PROC(MODE76) VOID */

A_PROCEDURE(A68_INT ,A68t105,(A68_INT ),(A68_INT ,void *));
typedef struct A68t105  A68_105 ;    /* PROC(INT) INT */
struct A68t107 ;

A_PROCEDURE(A68_VOID ,A68t106,(A68_VC ,A68_INT ,struct A68t107 ,A68_INT ,A68_INT ,struct A68t97 ,A68_BITS ),(A68_VC ,A68_INT ,struct A68t107 ,A68_INT ,A68_INT ,struct A68t97 ,A68_BITS ,void *));
typedef struct A68t106  A68_106 ;    /* PROC(REF MODE26,INT,REF MODE107,INT,INT,MODE97,BITS) VOID */
A_VECTOR(A68_INT ,A68t107);
typedef struct A68t107  A68_107 ;    /* VECTOR [] INT */
A_ROW(struct A68t109 ,A68t108,1);
typedef struct A68t108  A68_108 ;    /* [] MODE109 */
struct A68t109{
A68_INT  Mode;
A_PAD_INT(PAD_62)
A68_INT  Resultmode;
A_PAD_INT(PAD_63)
A68_INT  Declevel;
A_PAD_INT(PAD_64)
struct A68t97  Environ;
A68_VC  Name;
struct A68t94  Prefix;
A_PAD_ISTRUCT(A68_94 ,PAD_65)
struct A68t94  Fnprefix;
A_PAD_ISTRUCT(A68_94 ,PAD_66)
struct A68t94  Envprefix;
A_PAD_ISTRUCT(A68_94 ,PAD_67)
A68_BITS  Flags;
A_PAD_BITS(PAD_68)
};
typedef struct A68t109  A68_109 ;    /* STRUCT(INT,INT,INT,MODE97,REF MODE26,MODE94,MODE94,MODE94,BITS)  */

A_PROCEDURE(A68_VOID ,A68t110,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t111,(struct A68t95 ),(struct A68t95 ,void *));
typedef struct A68t111  A68_111 ;    /* PROC(MODE95) VOID */

A_PROCEDURE(A68_VOID ,A68t112,(A68_VC ),(A68_VC ,void *));
typedef struct A68t112  A68_112 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t113,(struct A68t112 ),(struct A68t112 ,void *));
typedef struct A68t113  A68_113 ;    /* PROC(MODE112) VOID */

A_PROCEDURE(A68_VOID ,A68t114,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,59,A68t115);
typedef struct A68t115  A68_115 ;    /* STRUCT 59 CHAR */
struct A68t116{
A68_VC  Name;
A68_BITS  Value;
A_PAD_BITS(PAD_69)
};
typedef struct A68t116  A68_116 ;    /* STRUCT(MODE26,BITS)  */

A_PROCEDURE(A68_VOID ,A68t117,(A68_BOOL ,struct A68t116 *),(A68_BOOL ,struct A68t116 *,void *));
typedef struct A68t117  A68_117 ;    /* PROC(BOOL) MODE116 */
#define A68_118  A68_VC 
#define A68t118 A68t26            /* FLEX VECTOR [] CHAR */
#define A68_119  A68_116 
#define A68t119 A68t116            /* STRUCT(MODE118,BITS)  */
A_ROW(struct A68t116 ,A68t120,1);
typedef struct A68t120  A68_120 ;    /* [] MODE116 */
A_ISTRUCT(A68_CHAR ,3,A68t121);
typedef struct A68t121  A68_121 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t122);
typedef struct A68t122  A68_122 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t123);
typedef struct A68t123  A68_123 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t124);
typedef struct A68t124  A68_124 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(struct A68t116 ,16,A68t125);
typedef struct A68t125  A68_125 ;    /* STRUCT 16 MODE116 */
A_ISTRUCT(A68_CHAR ,2,A68t126);
typedef struct A68t126  A68_126 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t127);
typedef struct A68t127  A68_127 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(struct A68t116 ,6,A68t128);
typedef struct A68t128  A68_128 ;    /* STRUCT 6 MODE116 */

A_PROCEDURE(A68_VOID ,A68t129,(A68_BITS ,A68_BOOL ,A68_VC *),(A68_BITS ,A68_BOOL ,A68_VC *,void *));
typedef struct A68t129  A68_129 ;    /* PROC(BITS,BOOL) MODE26 */
A_ISTRUCT(A68_CHAR ,1,A68t130);
typedef struct A68t130  A68_130 ;    /* STRUCT 0 CHAR */

A_PROCEDURE(A68_VOID ,A68t131,(struct A68t67 ,A68_VC *),(struct A68t67 ,A68_VC *,void *));
typedef struct A68t131  A68_131 ;    /* PROC(MODE67) MODE26 */
A_ISTRUCT(A68_CHAR ,27,A68t132);
typedef struct A68t132  A68_132 ;    /* STRUCT 27 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t133);
typedef struct A68t133  A68_133 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t134);
typedef struct A68t134  A68_134 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_CHAR ,29,A68t135);
typedef struct A68t135  A68_135 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t136);
typedef struct A68t136  A68_136 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t137);
typedef struct A68t137  A68_137 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t138);
typedef struct A68t138  A68_138 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t139);
typedef struct A68t139  A68_139 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t140);
typedef struct A68t140  A68_140 ;    /* STRUCT 30 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t141);
typedef struct A68t141  A68_141 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t142);
typedef struct A68t142  A68_142 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t143);
typedef struct A68t143  A68_143 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t144);
typedef struct A68t144  A68_144 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t145);
typedef struct A68t145  A68_145 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,25,A68t146);
typedef struct A68t146  A68_146 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t147);
typedef struct A68t147  A68_147 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,34,A68t148);
typedef struct A68t148  A68_148 ;    /* STRUCT 34 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t149);
typedef struct A68t149  A68_149 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t150);
typedef struct A68t150  A68_150 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,37,A68t151);
typedef struct A68t151  A68_151 ;    /* STRUCT 37 CHAR */
A_ISTRUCT(A68_CHAR ,35,A68t152);
typedef struct A68t152  A68_152 ;    /* STRUCT 35 CHAR */
A_ISTRUCT(A68_CHAR ,28,A68t153);
typedef struct A68t153  A68_153 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(A68_CHAR ,41,A68t154);
typedef struct A68t154  A68_154 ;    /* STRUCT 41 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t155);
typedef struct A68t155  A68_155 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,36,A68t156);
typedef struct A68t156  A68_156 ;    /* STRUCT 36 CHAR */
A_ISTRUCT(A68_CHAR ,33,A68t157);
typedef struct A68t157  A68_157 ;    /* STRUCT 33 CHAR */
A_ISTRUCT(A68_CHAR ,32,A68t158);
typedef struct A68t158  A68_158 ;    /* STRUCT 32 CHAR */
A_ISTRUCT(A68_CHAR ,38,A68t159);
typedef struct A68t159  A68_159 ;    /* STRUCT 38 CHAR */
A_ISTRUCT(A68_CHAR ,26,A68t160);
typedef struct A68t160  A68_160 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,17,A68t161);
typedef struct A68t161  A68_161 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,54,A68t162);
typedef struct A68t162  A68_162 ;    /* STRUCT 54 CHAR */
A_ISTRUCT(A68_CHAR ,47,A68t163);
typedef struct A68t163  A68_163 ;    /* STRUCT 47 CHAR */

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
static A68_115   KZWACTR = {"$Id: mnemonics.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,LZWACTR,KZWACTR,59)
static A68_117  MZWACTR_anonymous A_UNUSED;
static A68_40   ZZWACTR = {"prio"}; 
A_GISVEC(A68_VC ,AAXACTR,ZZWACTR,4)
static A68_40   BAXACTR = {"exit"}; 
A_GISVEC(A68_VC ,CAXACTR,BAXACTR,4)
static A68_40   DAXACTR = {"semi"}; 
A_GISVEC(A68_VC ,EAXACTR,DAXACTR,4)
static A68_40   FAXACTR = {"heap"}; 
A_GISVEC(A68_VC ,GAXACTR,FAXACTR,4)
static A68_121   HAXACTR = {"dec"}; 
A_GISVEC(A68_VC ,IAXACTR,HAXACTR,3)
static A68_122   JAXACTR = {"vardec"}; 
A_GISVEC(A68_VC ,KAXACTR,JAXACTR,6)
static A68_94   LAXACTR = {"compgen"}; 
A_GISVEC(A68_VC ,MAXACTR,LAXACTR,7)
static A68_123   NAXACTR = {"elifouse"}; 
A_GISVEC(A68_VC ,OAXACTR,NAXACTR,8)
static A68_121   PAXACTR = {"lab"}; 
A_GISVEC(A68_VC ,QAXACTR,PAXACTR,3)
static A68_123   RAXACTR = {"dontpull"}; 
A_GISVEC(A68_VC ,SAXACTR,RAXACTR,8)
static A68_122   TAXACTR = {"dyproc"}; 
A_GISVEC(A68_VC ,UAXACTR,TAXACTR,6)
static A68_123   VAXACTR = {"dyvardec"}; 
A_GISVEC(A68_VC ,WAXACTR,VAXACTR,8)
static A68_124   XAXACTR = {"dydec"}; 
A_GISVEC(A68_VC ,YAXACTR,XAXACTR,5)
static A68_94   ZAXACTR = {"genproc"}; 
A_GISVEC(A68_VC ,ABXACTR,ZAXACTR,7)
static A68_122   BBXACTR = {"locgen"}; 
A_GISVEC(A68_VC ,CBXACTR,BBXACTR,6)
static A68_123   DBXACTR = {"locdydec"}; 
A_GISVEC(A68_VC ,EBXACTR,DBXACTR,8)
static A68_120  GBXACTR_controlbits A_UNUSED;
static A68_126   IBXACTR = {"cc"}; 
A_GISVEC(A68_VC ,JBXACTR,IBXACTR,2)
static A68_123   KBXACTR = {"operator"}; 
A_GISVEC(A68_VC ,LBXACTR,KBXACTR,8)
static A68_121   MBXACTR = {"val"}; 
A_GISVEC(A68_VC ,NBXACTR,MBXACTR,3)
static A68_40   OBXACTR = {"hole"}; 
A_GISVEC(A68_VC ,PBXACTR,OBXACTR,4)
static A68_94   QBXACTR = {"genproc"}; 
A_GISVEC(A68_VC ,RBXACTR,QBXACTR,7)
static A68_127   SBXACTR = {"globscope"}; 
A_GISVEC(A68_VC ,TBXACTR,SBXACTR,9)
static A68_120  VBXACTR_routinebits A_UNUSED;
static A68_BITS  WBXACTR_maskgeneral A_UNUSED;
static A68_BITS  XBXACTR_maskdynamica A_UNUSED;
#define YBXACTR_maskdynamicb BDAACTR_dontpullbit
static A68_BITS  ZBXACTR_maskdynamicc A_UNUSED;
static A68_BITS  ACXACTR_maskroutine A_UNUSED;
#define BCXACTR_maskspecial ZCAACTR_elifousebit
static A68_BITS  CCXACTR_maskxroutine A_UNUSED;
#define DCXACTR_fieldlength 0
static A68_130   PCXACTR = {""}; 
A_GISVEC(A68_VC ,QCXACTR,PCXACTR,0)
static A68_130   ZCXACTR = {""}; 
A_GISVEC(A68_VC ,ADXACTR,ZCXACTR,0)
static A68_130   BDXACTR = {""}; 
A_GISVEC(A68_VC ,DDXACTR,BDXACTR,0)
static A68_127   EDXACTR = {" | bits ("}; 
A_GISVEC(A68_VC ,FDXACTR,EDXACTR,9)
static A68_132   QDXACTR = {"load:nse                  ("}; 
static A68_123   RDXACTR = {"EMPTY fn"}; 
A_GISVEC(A68_VC ,TDXACTR,RDXACTR,8)
static A68_94   UDXACTR = {"SKIP fn"}; 
A_GISVEC(A68_VC ,VDXACTR,UDXACTR,7)
static A68_122   WDXACTR = {"NIL fn"}; 
A_GISVEC(A68_VC ,XDXACTR,WDXACTR,6)
static A68_133   YDXACTR = {"ERROR: nse="}; 
A_GISVEC(A68_VC ,ZDXACTR,YDXACTR,11)
A_GISVEC(A68_VC ,CEXACTR,QDXACTR,27)
static A68_132   EEXACTR = {"load:int                  ("}; 
static A68_126   FEXACTR = {"=\""}; 
A_GISVEC(A68_VC ,GEXACTR,EEXACTR,27)
A_GISVEC(A68_VC ,IEXACTR,FEXACTR,2)
static A68_132   MEXACTR = {"load:bool                 ("}; 
static A68_40   NEXACTR = {"TRUE"}; 
A_GISVEC(A68_VC ,PEXACTR,NEXACTR,4)
static A68_124   QEXACTR = {"FALSE"}; 
A_GISVEC(A68_VC ,REXACTR,QEXACTR,5)
A_GISVEC(A68_VC ,SEXACTR,MEXACTR,27)
static A68_132   UEXACTR = {"load:char                 ("}; 
A_GISVEC(A68_VC ,VEXACTR,UEXACTR,27)
static A68_132   XEXACTR = {"load:labno                ("}; 
A_GISVEC(A68_VC ,YEXACTR,XEXACTR,27)
static A68_134   BFXACTR = {"load:number               (mode"}; 
static A68_135   CFXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,EFXACTR,CFXACTR,29)
static A68_136   GFXACTR = {" | number="}; 
A_GISVEC(A68_VC ,HFXACTR,BFXACTR,31)
A_GISVEC(A68_VC ,NFXACTR,GFXACTR,10)
static A68_134   PFXACTR = {"load:alienx               (mode"}; 
static A68_135   QFXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,SFXACTR,QFXACTR,29)
static A68_137   UFXACTR = {" | string =\""}; 
A_GISVEC(A68_VC ,VFXACTR,PFXACTR,31)
A_GISVEC(A68_VC ,BGXACTR,UFXACTR,12)
static A68_134   EGXACTR = {"load:numeric denotation   (mode"}; 
static A68_135   FGXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,HGXACTR,FGXACTR,29)
static A68_138   JGXACTR = {" | denotation="}; 
A_GISVEC(A68_VC ,KGXACTR,EGXACTR,31)
A_GISVEC(A68_VC ,QGXACTR,JGXACTR,14)
static A68_134   TGXACTR = {"load:string denotation    (mode"}; 
static A68_135   UGXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,WGXACTR,UGXACTR,29)
static A68_139   YGXACTR = {" | denotation=\""}; 
A_GISVEC(A68_VC ,ZGXACTR,TGXACTR,31)
A_GISVEC(A68_VC ,FHXACTR,YGXACTR,15)
static A68_140   HHXACTR = {"ERROR: unknown LOAD imperative"}; 
A_GISVEC(A68_VC ,IHXACTR,HHXACTR,30)
static A68_121   QHXACTR = {"UPB"}; 
A_GISVEC(A68_VC ,RHXACTR,QHXACTR,3)
static A68_121   SHXACTR = {"LWB"}; 
A_GISVEC(A68_VC ,THXACTR,SHXACTR,3)
static A68_124   UHXACTR = {"ANDTH"}; 
A_GISVEC(A68_VC ,VHXACTR,UHXACTR,5)
static A68_40   WHXACTR = {"OREL"}; 
A_GISVEC(A68_VC ,XHXACTR,WHXACTR,4)
static A68_126   AIXACTR = {"<="}; 
A_GISVEC(A68_VC ,BIXACTR,AIXACTR,2)
static A68_126   CIXACTR = {">="}; 
A_GISVEC(A68_VC ,DIXACTR,CIXACTR,2)
static A68_126   FIXACTR = {"/="}; 
A_GISVEC(A68_VC ,GIXACTR,FIXACTR,2)
static A68_40   JIXACTR = {"OVER"}; 
A_GISVEC(A68_VC ,KIXACTR,JIXACTR,4)
static A68_121   LIXACTR = {"MOD"}; 
A_GISVEC(A68_VC ,MIXACTR,LIXACTR,3)
static A68_126   NIXACTR = {"**"}; 
A_GISVEC(A68_VC ,OIXACTR,NIXACTR,2)
static A68_121   QIXACTR = {"SHL"}; 
A_GISVEC(A68_VC ,RIXACTR,QIXACTR,3)
static A68_121   SIXACTR = {"SHR"}; 
A_GISVEC(A68_VC ,TIXACTR,SIXACTR,3)
static A68_40   UIXACTR = {"ELEM"}; 
A_GISVEC(A68_VC ,VIXACTR,UIXACTR,4)
static A68_122   WIXACTR = {"PLUSAB"}; 
A_GISVEC(A68_VC ,XIXACTR,WIXACTR,6)
static A68_94   YIXACTR = {"MINUSAB"}; 
A_GISVEC(A68_VC ,ZIXACTR,YIXACTR,7)
static A68_94   AJXACTR = {"TIMESAB"}; 
A_GISVEC(A68_VC ,BJXACTR,AJXACTR,7)
static A68_122   CJXACTR = {"OVERAB"}; 
A_GISVEC(A68_VC ,DJXACTR,CJXACTR,6)
static A68_124   EJXACTR = {"MODAB"}; 
A_GISVEC(A68_VC ,FJXACTR,EJXACTR,5)
static A68_124   GJXACTR = {"DIVAB"}; 
A_GISVEC(A68_VC ,HJXACTR,GJXACTR,5)
static A68_126   IJXACTR = {"IS"}; 
A_GISVEC(A68_VC ,JJXACTR,IJXACTR,2)
static A68_40   KJXACTR = {"ISNT"}; 
A_GISVEC(A68_VC ,LJXACTR,KJXACTR,4)
static A68_121   MJXACTR = {"AND"}; 
A_GISVEC(A68_VC ,NJXACTR,MJXACTR,3)
static A68_126   OJXACTR = {"OR"}; 
A_GISVEC(A68_VC ,PJXACTR,OJXACTR,2)
static A68_122   QJXACTR = {"PLUSTO"}; 
A_GISVEC(A68_VC ,RJXACTR,QJXACTR,6)
static A68_124   SJXACTR = {"CYCLE"}; 
A_GISVEC(A68_VC ,TJXACTR,SJXACTR,5)
static A68_141   UJXACTR = {"not in standard prelude"}; 
A_GISVEC(A68_VC ,VJXACTR,UJXACTR,23)
static A68_135   YJXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,AKXACTR,YJXACTR,29)
static A68_140   IKXACTR = {"oper                      (fn="}; 
static A68_141   JKXACTR = {"statgrab | 1 operand | "}; 
static A68_142   KKXACTR = {"local generation"}; 
A_GISVEC(A68_VC ,MKXACTR,KKXACTR,16)
static A68_139   NKXACTR = {"heap generation"}; 
A_GISVEC(A68_VC ,OKXACTR,NKXACTR,15)
A_GISVEC(A68_VC ,QKXACTR,JKXACTR,23)
static A68_137   RKXACTR = {"parampack | "}; 
static A68_143   SKXACTR = {" operands | mode of proc"}; 
A_GISVEC(A68_VC ,TKXACTR,RKXACTR,12)
A_GISVEC(A68_VC ,UKXACTR,SKXACTR,24)
static A68_144   VKXACTR = {"select | 1 operand | "}; 
static A68_145   WKXACTR = {"th field | result mode"}; 
A_GISVEC(A68_VC ,XKXACTR,VKXACTR,21)
A_GISVEC(A68_VC ,YKXACTR,WKXACTR,22)
static A68_140   ZKXACTR = {"copy | 1 operand | result mode"}; 
A_GISVEC(A68_VC ,ALXACTR,ZKXACTR,30)
static A68_94   BLXACTR = {"trim | "}; 
static A68_137   CLXACTR = {" operands | "}; 
static A68_126   GLXACTR = {"a:"}; 
A_GISVEC(A68_VC ,ILXACTR,GLXACTR,2)
static A68_126   JLXACTR = {":b"}; 
A_GISVEC(A68_VC ,KLXACTR,JLXACTR,2)
static A68_121   LLXACTR = {"a:b"}; 
A_GISVEC(A68_VC ,MLXACTR,LLXACTR,3)
static A68_126   NLXACTR = {"@c"}; 
A_GISVEC(A68_VC ,OLXACTR,NLXACTR,2)
static A68_40   PLXACTR = {"a:@c"}; 
A_GISVEC(A68_VC ,QLXACTR,PLXACTR,4)
static A68_40   RLXACTR = {":b@c"}; 
A_GISVEC(A68_VC ,SLXACTR,RLXACTR,4)
static A68_124   TLXACTR = {"a:b@c"}; 
A_GISVEC(A68_VC ,ULXACTR,TLXACTR,5)
static A68_130   VLXACTR = {""}; 
A_GISVEC(A68_VC ,WLXACTR,VLXACTR,0)
static A68_136   XLXACTR = {" (set LWB)"}; 
A_GISVEC(A68_VC ,ZLXACTR,XLXACTR,10)
static A68_130   AMXACTR = {""}; 
A_GISVEC(A68_VC ,BMXACTR,AMXACTR,0)
A_GISVEC(A68_VC ,CMXACTR,BLXACTR,7)
A_GISVEC(A68_VC ,DMXACTR,CLXACTR,12)
static A68_139   EMXACTR = {"simple index | "}; 
static A68_137   FMXACTR = {" operands | "}; 
static A68_146   GMXACTR = {" subscripts | result mode"}; 
A_GISVEC(A68_VC ,HMXACTR,EMXACTR,15)
A_GISVEC(A68_VC ,JMXACTR,FMXACTR,12)
A_GISVEC(A68_VC ,KMXACTR,GMXACTR,25)
static A68_147   LMXACTR = {"trim index | "}; 
static A68_141   MMXACTR = {" operands | result mode"}; 
A_GISVEC(A68_VC ,NMXACTR,LMXACTR,13)
A_GISVEC(A68_VC ,PMXACTR,MMXACTR,23)
static A68_148   QMXACTR = {"dyngrab | 2 operands | result mode"}; 
A_GISVEC(A68_VC ,RMXACTR,QMXACTR,34)
static A68_147   SMXACTR = {"bound pack | "}; 
static A68_141   TMXACTR = {" operands | result mode"}; 
A_GISVEC(A68_VC ,UMXACTR,SMXACTR,13)
A_GISVEC(A68_VC ,VMXACTR,TMXACTR,23)
static A68_144   WMXACTR = {"dyadic op | opnumber="}; 
static A68_126   XMXACTR = {"=\""}; 
static A68_137   YMXACTR = {"\" | version="}; 
static A68_138   ZMXACTR = {" | result mode"}; 
A_GISVEC(A68_VC ,ANXACTR,WMXACTR,21)
A_GISVEC(A68_VC ,CNXACTR,XMXACTR,2)
A_GISVEC(A68_VC ,ENXACTR,YMXACTR,12)
A_GISVEC(A68_VC ,JNXACTR,ZMXACTR,14)
static A68_145   KNXACTR = {"monadic op | opnumber="}; 
static A68_126   LNXACTR = {"=\""}; 
static A68_121   PNXACTR = {"UPB"}; 
A_GISVEC(A68_VC ,QNXACTR,PNXACTR,3)
static A68_121   RNXACTR = {"LWB"}; 
A_GISVEC(A68_VC ,SNXACTR,RNXACTR,3)
static A68_121   TNXACTR = {"NOT"}; 
A_GISVEC(A68_VC ,UNXACTR,TNXACTR,3)
static A68_121   VNXACTR = {"ABS"}; 
A_GISVEC(A68_VC ,WNXACTR,VNXACTR,3)
static A68_121   XNXACTR = {"BIN"}; 
A_GISVEC(A68_VC ,YNXACTR,XNXACTR,3)
static A68_40   ZNXACTR = {"REPR"}; 
A_GISVEC(A68_VC ,AOXACTR,ZNXACTR,4)
static A68_40   BOXACTR = {"LENG"}; 
A_GISVEC(A68_VC ,COXACTR,BOXACTR,4)
static A68_94   DOXACTR = {"SHORTEN"}; 
A_GISVEC(A68_VC ,EOXACTR,DOXACTR,7)
static A68_121   FOXACTR = {"ODD"}; 
A_GISVEC(A68_VC ,GOXACTR,FOXACTR,3)
static A68_40   HOXACTR = {"SIGN"}; 
A_GISVEC(A68_VC ,IOXACTR,HOXACTR,4)
static A68_124   JOXACTR = {"ROUND"}; 
A_GISVEC(A68_VC ,KOXACTR,JOXACTR,5)
static A68_122   LOXACTR = {"ENTIER"}; 
A_GISVEC(A68_VC ,MOXACTR,LOXACTR,6)
static A68_126   NOXACTR = {"RE"}; 
A_GISVEC(A68_VC ,OOXACTR,NOXACTR,2)
static A68_126   POXACTR = {"IM"}; 
A_GISVEC(A68_VC ,QOXACTR,POXACTR,2)
static A68_121   ROXACTR = {"ARG"}; 
A_GISVEC(A68_VC ,SOXACTR,ROXACTR,3)
static A68_40   TOXACTR = {"CONJ"}; 
A_GISVEC(A68_VC ,UOXACTR,TOXACTR,4)
static A68_141   VOXACTR = {"not in standard prelude"}; 
A_GISVEC(A68_VC ,WOXACTR,VOXACTR,23)
static A68_137   XOXACTR = {"\" | version="}; 
static A68_138   YOXACTR = {" | result mode"}; 
A_GISVEC(A68_VC ,ZOXACTR,KNXACTR,22)
A_GISVEC(A68_VC ,BPXACTR,LNXACTR,2)
A_GISVEC(A68_VC ,CPXACTR,XOXACTR,12)
A_GISVEC(A68_VC ,HPXACTR,YOXACTR,14)
static A68_144   IPXACTR = {"straight | 2 operands"}; 
static A68_149   JPXACTR = {" | mode of original="}; 
static A68_124   KPXACTR = {"UNION"}; 
A_GISVEC(A68_VC ,MPXACTR,KPXACTR,5)
static A68_122   NPXACTR = {"VECTOR"}; 
A_GISVEC(A68_VC ,OPXACTR,NPXACTR,6)
static A68_150   PPXACTR = {"STRUCT or I-STRUCT"}; 
A_GISVEC(A68_VC ,QPXACTR,PPXACTR,18)
static A68_123   RPXACTR = {"ARRY of "}; 
static A68_133   SPXACTR = {" dimensions"}; 
A_GISVEC(A68_VC ,TPXACTR,RPXACTR,8)
A_GISVEC(A68_VC ,VPXACTR,SPXACTR,11)
A_GISVEC(A68_VC ,WPXACTR,IPXACTR,21)
A_GISVEC(A68_VC ,XPXACTR,JPXACTR,20)
static A68_151   YPXACTR = {"prestraight | 1 operand | result mode"}; 
A_GISVEC(A68_VC ,ZPXACTR,YPXACTR,37)
static A68_152   AQXACTR = {"strindex | 2 operands | result mode"}; 
A_GISVEC(A68_VC ,BQXACTR,AQXACTR,35)
static A68_153   CQXACTR = {"assign | 2 operands | param="}; 
static A68_138   DQXACTR = {" | result mode"}; 
A_GISVEC(A68_VC ,EQXACTR,CQXACTR,28)
A_GISVEC(A68_VC ,FQXACTR,DQXACTR,14)
static A68_154   GQXACTR = {"default bound | no operands | result mode"}; 
A_GISVEC(A68_VC ,HQXACTR,GQXACTR,41)
static A68_155   IQXACTR = {"deref | result mode"}; 
A_GISVEC(A68_VC ,JQXACTR,IQXACTR,19)
static A68_150   KQXACTR = {"call | result mode"}; 
static A68_156   LQXACTR = {" | not operator or generator routine"}; 
A_GISVEC(A68_VC ,NQXACTR,LQXACTR,36)
static A68_157   OQXACTR = {" | invented local space generator"}; 
A_GISVEC(A68_VC ,PQXACTR,OQXACTR,33)
static A68_158   QQXACTR = {" | invented heap space generator"}; 
A_GISVEC(A68_VC ,RQXACTR,QQXACTR,32)
static A68_159   SQXACTR = {" | invented space generator within one"}; 
A_GISVEC(A68_VC ,TQXACTR,SQXACTR,38)
static A68_148   UQXACTR = {" | user defined or library routine"}; 
A_GISVEC(A68_VC ,VQXACTR,UQXACTR,34)
static A68_160   WQXACTR = {"ERROR: unknown PARAM field"}; 
A_GISVEC(A68_VC ,XQXACTR,WQXACTR,26)
A_GISVEC(A68_VC ,YQXACTR,KQXACTR,18)
static A68_40   ZQXACTR = {"VOID"}; 
A_GISVEC(A68_VC ,ARXACTR,ZQXACTR,4)
static A68_94   BRXACTR = {"NIL to "}; 
A_GISVEC(A68_VC ,CRXACTR,BRXACTR,7)
static A68_143   DRXACTR = {"GOTO | procedure to mode"}; 
A_GISVEC(A68_VC ,ERXACTR,DRXACTR,24)
static A68_144   FRXACTR = {"GOTO | coerce to mode"}; 
A_GISVEC(A68_VC ,GRXACTR,FRXACTR,21)
static A68_132   HRXACTR = {"REAL to COMPL | result mode"}; 
A_GISVEC(A68_VC ,IRXACTR,HRXACTR,27)
static A68_146   JRXACTR = {"INT to REAL | result mode"}; 
A_GISVEC(A68_VC ,KRXACTR,JRXACTR,25)
static A68_150   LRXACTR = {"xxib | result mode"}; 
A_GISVEC(A68_VC ,MRXACTR,LRXACTR,18)
static A68_153   NRXACTR = {"ARRAY to ARRAY | result mode"}; 
A_GISVEC(A68_VC ,ORXACTR,NRXACTR,28)
static A68_135   PRXACTR = {"VECTOR to ARRAY | result mode"}; 
A_GISVEC(A68_VC ,QRXACTR,PRXACTR,29)
static A68_158   RRXACTR = {"I-STRUCT to VECTOR | result mode"}; 
A_GISVEC(A68_VC ,SRXACTR,RRXACTR,32)
static A68_145   TRXACTR = {"1 STRUCT | result mode"}; 
A_GISVEC(A68_VC ,URXACTR,TRXACTR,22)
static A68_135   VRXACTR = {"unite | non UNION operand to "}; 
static A68_133   WRXACTR = {"th mode of "}; 
A_GISVEC(A68_VC ,XRXACTR,VRXACTR,29)
A_GISVEC(A68_VC ,YRXACTR,WRXACTR,11)
static A68_140   ZRXACTR = {"uniteu | UNION operand to mode"}; 
A_GISVEC(A68_VC ,ASXACTR,ZRXACTR,30)
static A68_150   BSXACTR = {"isarr | coerce to "}; 
static A68_158   CSXACTR = {" dimensional array | result mode"}; 
A_GISVEC(A68_VC ,DSXACTR,BSXACTR,18)
A_GISVEC(A68_VC ,ESXACTR,CSXACTR,32)
static A68_123   FSXACTR = {"SKIP to "}; 
A_GISVEC(A68_VC ,GSXACTR,FSXACTR,8)
static A68_149   HSXACTR = {"to VEC | result mode"}; 
A_GISVEC(A68_VC ,ISXACTR,HSXACTR,20)
static A68_145   JSXACTR = {"to ARRAY | result mode"}; 
A_GISVEC(A68_VC ,KSXACTR,JSXACTR,22)
static A68_133   LSXACTR = {"deunite to "}; 
A_GISVEC(A68_VC ,MSXACTR,LSXACTR,11)
static A68_140   NSXACTR = {"BITS to VEC BOOL | result mode"}; 
A_GISVEC(A68_VC ,OSXACTR,NSXACTR,30)
static A68_146   PSXACTR = {"vacuum | coerce EMPTY to "}; 
A_GISVEC(A68_VC ,QSXACTR,PSXACTR,25)
static A68_136   RSXACTR = {"Y TYPE to "}; 
A_GISVEC(A68_VC ,SSXACTR,RSXACTR,10)
static A68_127   TSXACTR = {"to X TYPE"}; 
A_GISVEC(A68_VC ,USXACTR,TSXACTR,9)
static A68_142   VSXACTR = {"static generator"}; 
A_GISVEC(A68_VC ,WSXACTR,VSXACTR,16)
static A68_122   XSXACTR = {"format"}; 
A_GISVEC(A68_VC ,YSXACTR,XSXACTR,6)
static A68_124   ZSXACTR = {"SPARE"}; 
A_GISVEC(A68_VC ,ATXACTR,ZSXACTR,5)
A_GISVEC(A68_VC ,BTXACTR,IKXACTR,30)
static A68_132   DTXACTR = {"transiddec                ("}; 
static A68_149   ETXACTR = {"identity declaration"}; 
A_GISVEC(A68_VC ,GTXACTR,ETXACTR,20)
static A68_149   HTXACTR = {"variable declaration"}; 
A_GISVEC(A68_VC ,ITXACTR,HTXACTR,20)
static A68_142   JTXACTR = {"formal parameter"}; 
A_GISVEC(A68_VC ,KTXACTR,JTXACTR,16)
static A68_133   LTXACTR = {"FOR control"}; 
A_GISVEC(A68_VC ,MTXACTR,LTXACTR,11)
static A68_149   NTXACTR = {"initialised variable"}; 
A_GISVEC(A68_VC ,OTXACTR,NTXACTR,20)
static A68_153   PTXACTR = {"formal conformity identifier"}; 
A_GISVEC(A68_VC ,QTXACTR,PTXACTR,28)
static A68_138   RTXACTR = {"FORALL control"}; 
A_GISVEC(A68_VC ,STXACTR,RTXACTR,14)
static A68_161   TTXACTR = {"dummy declaration"}; 
A_GISVEC(A68_VC ,UTXACTR,TTXACTR,17)
static A68_134   VTXACTR = {"ERROR: unknown TRANSIDDEC type="}; 
A_GISVEC(A68_VC ,WTXACTR,VTXACTR,31)
static A68_127   YTXACTR = {" | name=\""}; 
static A68_123   ZTXACTR = {"\" | mode"}; 
static A68_135   AUXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,CUXACTR,AUXACTR,29)
static A68_127   EUXACTR = {" | decno="}; 
A_GISVEC(A68_VC ,FUXACTR,DTXACTR,27)
A_GISVEC(A68_VC ,GUXACTR,YTXACTR,9)
A_GISVEC(A68_VC ,HUXACTR,ZTXACTR,8)
A_GISVEC(A68_VC ,NUXACTR,EUXACTR,9)
static A68_157   QUXACTR = {"routine                   (name=\""}; 
static A68_94   RUXACTR = {" | mode"}; 
static A68_135   SUXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,UUXACTR,SUXACTR,29)
static A68_135   WUXACTR = {" | proc of unlimited lifetime"}; 
A_GISVEC(A68_VC ,YUXACTR,WUXACTR,29)
static A68_162   ZUXACTR = {" | only external id is declared in CONTEXT VOID module"}; 
A_GISVEC(A68_VC ,AVXACTR,ZUXACTR,54)
static A68_163   BVXACTR = {" | decno of external id with smallest lifetime="}; 
static A68_126   CVXACTR = {"=\""}; 
A_GISVEC(A68_VC ,DVXACTR,BVXACTR,47)
A_GISVEC(A68_VC ,FVXACTR,CVXACTR,2)
static A68_136   IVXACTR = {" | rdenno="}; 
A_GISVEC(A68_VC ,JVXACTR,QUXACTR,33)
A_GISVEC(A68_VC ,MVXACTR,RUXACTR,7)
A_GISVEC(A68_VC ,SVXACTR,IVXACTR,10)
static A68_132   VVXACTR = {"warn                      ("}; 
static A68_122   WVXACTR = {"assign"}; 
A_GISVEC(A68_VC ,YVXACTR,WVXACTR,6)
static A68_124   ZVXACTR = {"ANDTH"}; 
A_GISVEC(A68_VC ,AWXACTR,ZVXACTR,5)
static A68_40   BWXACTR = {"OREL"}; 
A_GISVEC(A68_VC ,CWXACTR,BWXACTR,4)
static A68_124   DWXACTR = {"index"}; 
A_GISVEC(A68_VC ,EWXACTR,DWXACTR,5)
static A68_136   FWXACTR = {"PLUSAB etc"}; 
A_GISVEC(A68_VC ,GWXACTR,FWXACTR,10)
static A68_122   HWXACTR = {"FORALL"}; 
A_GISVEC(A68_VC ,IWXACTR,HWXACTR,6)
static A68_40   JWXACTR = {"loop"}; 
A_GISVEC(A68_VC ,KWXACTR,JWXACTR,4)
static A68_146   LWXACTR = {"ERROR: unknown WARN field"}; 
A_GISVEC(A68_VC ,MWXACTR,LWXACTR,25)
A_GISVEC(A68_VC ,NWXACTR,VVXACTR,27)
static A68_157   PWXACTR = {"labdec                    (name=\""}; 
static A68_130   TWXACTR = {""}; 
A_GISVEC(A68_VC ,VWXACTR,TWXACTR,0)
static A68_157   WWXACTR = {" | at start serial clause; labno="}; 
A_GISVEC(A68_VC ,YWXACTR,WWXACTR,33)
static A68_115   AXXACTR = {"at start user written routine; GOTO external label | labno="}; 
A_GISVEC(A68_VC ,BXXACTR,AXXACTR,59)
static A68_127   DXXACTR = {" | labno "}; 
static A68_161   EXXACTR = {" is redefined as "}; 
A_GISVEC(A68_VC ,FXXACTR,DXXACTR,9)
A_GISVEC(A68_VC ,HXXACTR,EXXACTR,17)
static A68_157   JXXACTR = {" | actual label setting of labno="}; 
A_GISVEC(A68_VC ,KXXACTR,JXXACTR,33)
A_GISVEC(A68_VC ,MXXACTR,PWXACTR,33)
static A68_134   PXXACTR = {"uchoice                   (mode"}; 
static A68_135   QXXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,SXXACTR,QXXACTR,29)
static A68_127   UXXACTR = {" | param="}; 
A_GISVEC(A68_VC ,VXXACTR,PXXACTR,31)
A_GISVEC(A68_VC ,CYXACTR,UXXACTR,9)
static A68_132   FYXACTR = {"callmodule                ("}; 
A_GISVEC(A68_VC ,GYXACTR,FYXACTR,27)
static A68_157   JYXACTR = {"keeps                     (start="}; 
static A68_40   KYXACTR = {"TRUE"}; 
A_GISVEC(A68_VC ,MYXACTR,KYXACTR,4)
static A68_124   NYXACTR = {"FALSE"}; 
A_GISVEC(A68_VC ,OYXACTR,NYXACTR,5)
A_GISVEC(A68_VC ,PYXACTR,JYXACTR,33)
static A68_160   RYXACTR = {"load:code                 "}; 
static A68_94   SYXACTR = {"( mode="}; 
static A68_138   TYXACTR = {" | parameters="}; 
static A68_126   UYXACTR = {" )"}; 
A_GISVEC(A68_VC ,VYXACTR,RYXACTR,26)
A_GISVEC(A68_VC ,WYXACTR,SYXACTR,7)
A_GISVEC(A68_VC ,YYXACTR,TYXACTR,14)
A_GISVEC(A68_VC ,AZXACTR,UYXACTR,2)
static A68_154   CZXACTR = {"formatx                   (info=(nochars="}; 
static A68_133   DZXACTR = {" | nocases="}; 
static A68_139   EZXACTR = {" | max nesting="}; 
static A68_127   FZXACTR = {") | text="}; 
A_GISVEC(A68_VC ,GZXACTR,CZXACTR,41)
A_GISVEC(A68_VC ,IZXACTR,DZXACTR,11)
A_GISVEC(A68_VC ,KZXACTR,EZXACTR,15)
A_GISVEC(A68_VC ,MZXACTR,FZXACTR,9)
static A68_157   NZXACTR = {"ERROR: unknown PRIMARY imperative"}; 
A_GISVEC(A68_VC ,OZXACTR,NZXACTR,33)
static A68_132   QZXACTR = {"separator                 ("}; 
static A68_40   RZXACTR = {"THEN"}; 
A_GISVEC(A68_VC ,TZXACTR,RZXACTR,4)
static A68_126   UZXACTR = {"IN"}; 
A_GISVEC(A68_VC ,VZXACTR,UZXACTR,2)
static A68_121   WZXACTR = {"INu"}; 
A_GISVEC(A68_VC ,XZXACTR,WZXACTR,3)
static A68_123   YZXACTR = {"ic comma"}; 
A_GISVEC(A68_VC ,ZZXACTR,YZXACTR,8)
static A68_123   AAYACTR = {"cc comma"}; 
A_GISVEC(A68_VC ,BAYACTR,AAYACTR,8)
static A68_40   CAYACTR = {"EXIT"}; 
A_GISVEC(A68_VC ,DAYACTR,CAYACTR,4)
static A68_121   EAYACTR = {"OUT"}; 
A_GISVEC(A68_VC ,FAYACTR,EAYACTR,3)
static A68_40   GAYACTR = {"OUTu"}; 
A_GISVEC(A68_VC ,HAYACTR,GAYACTR,4)
static A68_40   IAYACTR = {"ELSE"}; 
A_GISVEC(A68_VC ,JAYACTR,IAYACTR,4)
static A68_136   KAYACTR = {"coll comma"}; 
A_GISVEC(A68_VC ,LAYACTR,KAYACTR,10)
static A68_40   MAYACTR = {"semi"}; 
A_GISVEC(A68_VC ,NAYACTR,MAYACTR,4)
static A68_126   OAYACTR = {"DO"}; 
A_GISVEC(A68_VC ,PAYACTR,OAYACTR,2)
static A68_124   QAYACTR = {"WHILE"}; 
A_GISVEC(A68_VC ,RAYACTR,QAYACTR,5)
static A68_153   SAYACTR = {"ERROR: unknown SEPARATOR fn="}; 
A_GISVEC(A68_VC ,TAYACTR,SAYACTR,28)
static A68_135   VAYACTR = {" | mode & param are undefined"}; 
A_GISVEC(A68_VC ,XAYACTR,VAYACTR,29)
static A68_94   YAYACTR = {" | mode"}; 
static A68_135   ZAYACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,BBYACTR,ZAYACTR,29)
static A68_127   DBYACTR = {" | param="}; 
A_GISVEC(A68_VC ,EBYACTR,YAYACTR,7)
A_GISVEC(A68_VC ,KBYACTR,DBYACTR,9)
A_GISVEC(A68_VC ,MBYACTR,QZXACTR,27)
static A68_132   PBYACTR = {"starter                   ("}; 
static A68_94   QBYACTR = {"routine"}; 
A_GISVEC(A68_VC ,SBYACTR,QBYACTR,7)
static A68_40   TBYACTR = {"decs"}; 
A_GISVEC(A68_VC ,UBYACTR,TBYACTR,4)
static A68_123   VBYACTR = {"IF/WHILE"}; 
A_GISVEC(A68_VC ,WBYACTR,VBYACTR,8)
static A68_40   XBYACTR = {"CASE"}; 
A_GISVEC(A68_VC ,YBYACTR,XBYACTR,4)
static A68_124   ZBYACTR = {"CASEu"}; 
A_GISVEC(A68_VC ,ACYACTR,ZBYACTR,5)
static A68_124   BCYACTR = {"BEGIN"}; 
A_GISVEC(A68_VC ,CCYACTR,BCYACTR,5)
static A68_136   DCYACTR = {"coll BEGIN"}; 
A_GISVEC(A68_VC ,ECYACTR,DCYACTR,10)
static A68_121   FCYACTR = {"FOR"}; 
A_GISVEC(A68_VC ,GCYACTR,FCYACTR,3)
static A68_122   HCYACTR = {"FORALL"}; 
A_GISVEC(A68_VC ,ICYACTR,HCYACTR,6)
static A68_160   JCYACTR = {"ERROR: unknown STARTER fn="}; 
A_GISVEC(A68_VC ,KCYACTR,JCYACTR,26)
static A68_94   MCYACTR = {" | mode"}; 
static A68_135   NCYACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,PCYACTR,NCYACTR,29)
static A68_138   RCYACTR = {" | result mode"}; 
static A68_135   SCYACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,UCYACTR,SCYACTR,29)
static A68_127   WCYACTR = {"undefined"}; 
A_GISVEC(A68_VC ,YCYACTR,WCYACTR,9)
A_GISVEC(A68_VC ,EDYACTR,PBYACTR,27)
A_GISVEC(A68_VC ,GDYACTR,MCYACTR,7)
A_GISVEC(A68_VC ,MDYACTR,RCYACTR,14)
static A68_132   ODYACTR = {"terminator                ("}; 
static A68_126   PDYACTR = {"FI"}; 
A_GISVEC(A68_VC ,RDYACTR,PDYACTR,2)
static A68_40   SDYACTR = {"ESAC"}; 
A_GISVEC(A68_VC ,TDYACTR,SDYACTR,4)
static A68_124   UDYACTR = {"ESACu"}; 
A_GISVEC(A68_VC ,VDYACTR,UDYACTR,5)
static A68_121   WDYACTR = {"END"}; 
A_GISVEC(A68_VC ,XDYACTR,WDYACTR,3)
static A68_123   YDYACTR = {"coll END"}; 
A_GISVEC(A68_VC ,ZDYACTR,YDYACTR,8)
static A68_126   AEYACTR = {"OD"}; 
A_GISVEC(A68_VC ,BEYACTR,AEYACTR,2)
static A68_133   CEYACTR = {"routine end"}; 
A_GISVEC(A68_VC ,DEYACTR,CEYACTR,11)
static A68_122   EEYACTR = {"FINISH"}; 
A_GISVEC(A68_VC ,FEYACTR,EEYACTR,6)
static A68_123   GEYACTR = {"opt bool"}; 
A_GISVEC(A68_VC ,HEYACTR,GEYACTR,8)
static A68_135   IEYACTR = {"ERROR: unknown TERMINATOR fn="}; 
A_GISVEC(A68_VC ,JEYACTR,IEYACTR,29)
A_GISVEC(A68_VC ,LEYACTR,ODYACTR,27)
static A68_158   QEYACTR = {"composer:closure          (body="}; 
static A68_137   REYACTR = {" | moduleno="}; 
A_GISVEC(A68_VC ,SEYACTR,QEYACTR,32)
A_GISVEC(A68_VC ,UEYACTR,REYACTR,12)
static A68_156   XEYACTR = {"composer:synthetic module (moduleno="}; 
static A68_124   YEYACTR = {" | i="}; 
static A68_124   ZEYACTR = {" | j="}; 
A_GISVEC(A68_VC ,AFYACTR,XEYACTR,36)
A_GISVEC(A68_VC ,CFYACTR,YEYACTR,5)
A_GISVEC(A68_VC ,EFYACTR,ZEYACTR,5)
static A68_156   HFYACTR = {"composer:extern module    (moduleno="}; 
static A68_127   IFYACTR = {" | name=\""}; 
static A68_133   JFYACTR = {"\" | uname=\""}; 
static A68_133   KFYACTR = {"\" | lname=\""}; 
static A68_133   LFYACTR = {"\" | gname=\""}; 
A_GISVEC(A68_VC ,MFYACTR,HFYACTR,36)
A_GISVEC(A68_VC ,OFYACTR,IFYACTR,9)
A_GISVEC(A68_VC ,PFYACTR,JFYACTR,11)
A_GISVEC(A68_VC ,QFYACTR,KFYACTR,11)
A_GISVEC(A68_VC ,RFYACTR,LFYACTR,11)
static A68_148   TFYACTR = {"ERROR: unknown COMPOSER imperative"}; 
A_GISVEC(A68_VC ,UFYACTR,TFYACTR,34)
static A68_40   VFYACTR = {"VOID"}; 
A_GISVEC(A68_VC ,WFYACTR,VFYACTR,4)
static A68_146   XFYACTR = {"ERROR: unknown imperative"}; 
A_GISVEC(A68_VC ,YFYACTR,XFYACTR,25)
typedef struct   /* env of non-global proc */
{
int dummy;
} KCXACTR_generator;

A_STATIC A68_VOID  OZWACTR_generator(A68_BOOL  NZWACTR_anonymous, A68_116  *ReturnedValue);

A_STATIC A68_VOID  QZWACTR_generator(A68_BOOL  PZWACTR_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  GCXACTR_bitmnemonic(A68_BITS  Props, A68_BOOL  Whichxbit, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  JCXACTR_generator(A68_BOOL  HCXACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  JDXACTR_imperativemnemonic(A68_67  Imperative, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  MHXACTR_standardpreludeops(A68_INT  Opnumber, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  QZWACTR_generator(A68_BOOL  PZWACTR_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  RZWACTR;  /* clause result */
A68_VC  SZWACTR;  /* OPERATORS - dynamic generator */
{ 
SZWACTR.upb = 0 ;
( PZWACTR_anonymous? A_VLOC(A68_CHAR ,SZWACTR): A_VHEAP(A68_CHAR ,SZWACTR) );
RZWACTR = SZWACTR;
} 
*ReturnedValue = (RZWACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  JCXACTR_generator(A68_BOOL  HCXACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((KCXACTR_generator *)NonLocals)->x)
{ 
A68_VC  LCXACTR;  /* clause result */
A68_VC  MCXACTR;  /* OPERATORS - dynamic generator */
{ 
MCXACTR.upb = 0 ;
( HCXACTR_anonymous? A_VLOC(A68_CHAR ,MCXACTR): A_VHEAP(A68_CHAR ,MCXACTR) );
LCXACTR = MCXACTR;
} 
*ReturnedValue = (LCXACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  MHXACTR_standardpreludeops(A68_INT  Opnumber, A68_VC  *ReturnedValue)
{ 
A68_VC  NHXACTR;  /* clause result */
A68_VC  OHXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  PHXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  YHXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ZHXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  EIXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  HIXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  IIXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  PIXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(standardpreludeops);
 /* line 244: */
 /* line 245: */
switch ( Opnumber )
{ 
case 1: 
NHXACTR = A_HVEC(OHXACTR,'+',A68_CHAR );
break;
case 2: 
NHXACTR = A_HVEC(PHXACTR,'-',A68_CHAR );
break;
case 3: 
NHXACTR = RHXACTR;
break;
case 4: 
NHXACTR = THXACTR;
break;
case 5: 
 /* line 246: */
NHXACTR = VHXACTR;
break;
case 6: 
NHXACTR = XHXACTR;
break;
case 7: 
NHXACTR = A_HVEC(YHXACTR,'<',A68_CHAR );
break;
case 8: 
NHXACTR = A_HVEC(ZHXACTR,'>',A68_CHAR );
break;
case 9: 
NHXACTR = BIXACTR;
break;
case 10: 
 /* line 247: */
NHXACTR = DIXACTR;
break;
case 11: 
NHXACTR = A_HVEC(EIXACTR,'=',A68_CHAR );
break;
case 12: 
NHXACTR = GIXACTR;
break;
case 13: 
NHXACTR = A_HVEC(HIXACTR,'*',A68_CHAR );
break;
case 14: 
NHXACTR = A_HVEC(IIXACTR,'/',A68_CHAR );
break;
case 15: 
 /* line 248: */
NHXACTR = KIXACTR;
break;
case 16: 
NHXACTR = MIXACTR;
break;
case 17: 
NHXACTR = OIXACTR;
break;
case 18: 
NHXACTR = A_HVEC(PIXACTR,'I',A68_CHAR );
break;
case 19: 
NHXACTR = RIXACTR;
break;
case 20: 
 /* line 249: */
NHXACTR = TIXACTR;
break;
case 21: 
NHXACTR = VIXACTR;
break;
case 22: 
NHXACTR = XIXACTR;
break;
case 23: 
NHXACTR = ZIXACTR;
break;
case 24: 
NHXACTR = BJXACTR;
break;
case 25: 
 /* line 250: */
NHXACTR = DJXACTR;
break;
case 26: 
NHXACTR = FJXACTR;
break;
case 27: 
NHXACTR = HJXACTR;
break;
case 28: 
NHXACTR = JJXACTR;
break;
case 29: 
NHXACTR = LJXACTR;
break;
case 30: 
 /* line 251: */
NHXACTR = NJXACTR;
break;
case 31: 
NHXACTR = PJXACTR;
break;
case 32: 
 /* line 252: */
NHXACTR = RJXACTR;
break;
case 33: 
 /* line 253: */
NHXACTR = TJXACTR;
break;
default: 
NHXACTR = VJXACTR;
break;
} 
A_PROC_EXIT(standardpreludeops);
*ReturnedValue = (NHXACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  OZWACTR_generator(A68_BOOL  NZWACTR_anonymous, A68_116  *ReturnedValue)
{ 
A68_119  TZWACTR_anonymous A_UNUSED = {0};
A68_VC  UZWACTR;  /* avoid structure result */
A68_118 * VZWACTR;  /* YIELD */
A68_116  WZWACTR;  /* clause result */
{ 
QZWACTR_generator( NZWACTR_anonymous, &UZWACTR );
VZWACTR = (&((&TZWACTR_anonymous)->Name)) ;
(*VZWACTR) = UZWACTR;
WZWACTR = TZWACTR_anonymous;
} 
*ReturnedValue = (WZWACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  GCXACTR_bitmnemonic(A68_BITS  Props, A68_BOOL  Whichxbit, A68_VC  *ReturnedValue)
{ 
A68_110  ICXACTR_generator;   /* proc value of non-global proc */
A68_118  OCXACTR;  /* avoid structure result */
A68_118  NCXACTR_output A_UNUSED = {0};
A68_VC  RCXACTR;  /* YIELD */
A68_VC  SCXACTR;  /* OPERATORS - copy to flex */
A68_120  TCXACTR;  /* clause result */
A68_120  UCXACTR_whichimperative A_UNUSED = {0};
A68_116  VCXACTR_b A_UNUSED = {0};
A68_116 * WCXACTR;  /* forall control - []x */
A68_INT  XCXACTR;  /* forall loop counter */
A68_VC  YCXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  CDXACTR;  /* clause result */
A68_VC  GDXACTR;  /* OPERATORS - trim index */
A68_VC  HDXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(bitmnemonic);
 /* line 146: */
 /* line 147: */
{ 
A_CLOSURE( ICXACTR_generator, JCXACTR_generator, KCXACTR_generator );
A_CALLPROC(ICXACTR_generator,(A68_TRUE, &OCXACTR),(A68_TRUE, &OCXACTR,(ICXACTR_generator).nonlocals));
NCXACTR_output = OCXACTR;
RCXACTR = QCXACTR ;
(void)(NCXACTR_output = A_VCOPY(RCXACTR,SCXACTR,A68_CHAR ));
 /* line 148: */
if (Whichxbit)
{ 
TCXACTR = GBXACTR_controlbits;
} 
else
{ 
TCXACTR = VBXACTR_routinebits;
} 
UCXACTR_whichimperative = TCXACTR;
 /* line 150: */
 /* line 151: */
XCXACTR = UCXACTR_whichimperative.dim[0].upb - UCXACTR_whichimperative.dim[0].lwb;
WCXACTR = UCXACTR_whichimperative.data;
for (;XCXACTR-- >= 0;
(WCXACTR += UCXACTR_whichimperative.dim[0].stride
) )
{
VCXACTR_b = *WCXACTR;
 /* line 152: */
 /* line 153: */
if ((A68_BITS )(VCXACTR_b.Value&Props)!=(A68_BITS )0)
{ 
 /* line 154: */
 /* line 155: */
(void)(A_VC_PLUSAB(NCXACTR_output,A_VC_PLUS(VCXACTR_b.Name,A_HVEC(YCXACTR,',',A68_CHAR ))));
} 
}
 /* line 156: */
 /* line 157: */
 /* line 158: */
if (A_VC_EQ(NCXACTR_output,ADXACTR))
{ 
 /* line 159: */
CDXACTR = DDXACTR;
} 
else
{ 
 /* line 160: */
 /* line 161: */
CDXACTR = A_VC_PLUS(A_VC_PLUS(FDXACTR,A_VTRIM(GDXACTR,(*(&NCXACTR_output)),A_VTSCRIPT(&(GDXACTR.upb),(*(&NCXACTR_output)).upb,1,(NCXACTR_output.upb-1)))),A_HVEC(HDXACTR,')',A68_CHAR ));
} 
} 
A_PROC_EXIT(bitmnemonic);
*ReturnedValue = (CDXACTR);
return;
} 
#undef NL

A68_VOID  JDXACTR_imperativemnemonic(A68_67  Imperative, A68_VC  *ReturnedValue)
{ 
A68_67  KDXACTR;  /* united object - for case conformity */
A68_83  LDXACTR_p A_UNUSED = {0};
A68_83  MDXACTR;  /* united object - for case conformity */
A68_82  NDXACTR_l A_UNUSED = {0};
A68_82  ODXACTR;  /* united object - for case conformity */
A68_68  PDXACTR_si A_UNUSED = {0};
A68_VC  SDXACTR;  /* clause result */
A68_VC  AEXACTR;  /* avoid structure result */
A68_VC  BEXACTR;  /* clause result */
A68_INT  DEXACTR_i A_UNUSED = {0};
A68_VC  HEXACTR;  /* avoid structure result */
A68_VC  JEXACTR;  /* avoid structure result */
A68_VC  KEXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  LEXACTR_b A_UNUSED = {0};
A68_VC  OEXACTR;  /* clause result */
A68_66  TEXACTR_c A_UNUSED = {0};
A68_69  WEXACTR_sl A_UNUSED = {0};
A68_VC  ZEXACTR;  /* avoid structure result */
A68_70  AFXACTR_n A_UNUSED = {0};
A68_VC  DFXACTR;  /* clause result */
A68_VC  FFXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  IFXACTR;  /* ADICOPS - ABS INT */
A68_VC  JFXACTR;  /* avoid structure result */
A68_VC  KFXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  LFXACTR;  /* ADICOPS - ABS INT */
A68_VC  MFXACTR;  /* avoid structure result */
A68_54  OFXACTR_a A_UNUSED = {0};
A68_VC  RFXACTR;  /* clause result */
A68_VC  TFXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  WFXACTR;  /* ADICOPS - ABS INT */
A68_VC  XFXACTR;  /* avoid structure result */
A68_VC  YFXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  ZFXACTR;  /* ADICOPS - ABS INT */
A68_VC  AGXACTR;  /* avoid structure result */
A68_VC  CGXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_71  DGXACTR_o A_UNUSED = {0};
A68_VC  GGXACTR;  /* clause result */
A68_VC  IGXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  LGXACTR;  /* ADICOPS - ABS INT */
A68_VC  MGXACTR;  /* avoid structure result */
A68_VC  NGXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  OGXACTR;  /* ADICOPS - ABS INT */
A68_VC  PGXACTR;  /* avoid structure result */
A68_VC  RGXACTR;  /* avoid structure result */
A68_72  SGXACTR_st A_UNUSED = {0};
A68_VC  VGXACTR;  /* clause result */
A68_VC  XGXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  AHXACTR;  /* ADICOPS - ABS INT */
A68_VC  BHXACTR;  /* avoid structure result */
A68_VC  CHXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  DHXACTR;  /* ADICOPS - ABS INT */
A68_VC  EHXACTR;  /* avoid structure result */
A68_VC  GHXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_73  JHXACTR_o A_UNUSED = {0};
A68_VC  WJXACTR;  /* avoid structure result */
A68_VC  XJXACTR_p A_UNUSED = {0};
A68_VC  ZJXACTR;  /* clause result */
A68_VC  BKXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  CKXACTR;  /* ADICOPS - ABS INT */
A68_VC  DKXACTR;  /* avoid structure result */
A68_VC  EKXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  FKXACTR;  /* ADICOPS - ABS INT */
A68_VC  GKXACTR;  /* avoid structure result */
A68_VC  HKXACTR_m A_UNUSED = {0};
A68_VC  LKXACTR;  /* clause result */
A68_VC  PKXACTR;  /* clause result */
A68_INT  DLXACTR;  /* ADICOPS - MOD */
A68_INT  ELXACTR;  /* ADICOPS - MOD */
A68_INT  FLXACTR;  /* ADICOPS - MOD */
A68_VC  HLXACTR;  /* clause result */
A68_VC  YLXACTR;  /* clause result */
A68_VC  IMXACTR;  /* avoid structure result */
A68_VC  OMXACTR;  /* avoid structure result */
A68_VC  BNXACTR;  /* avoid structure result */
A68_VC  DNXACTR;  /* avoid structure result */
A68_INT  FNXACTR;  /* ADICOPS - MOD */
A68_INT  GNXACTR;  /* ADICOPS - MOD */
A68_INT  HNXACTR;  /* ADICOPS - MOD */
A68_VC  INXACTR;  /* avoid structure result */
A68_VC  MNXACTR;  /* clause result */
A68_VC  NNXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ONXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  APXACTR;  /* avoid structure result */
A68_INT  DPXACTR;  /* ADICOPS - MOD */
A68_INT  EPXACTR;  /* ADICOPS - MOD */
A68_INT  FPXACTR;  /* ADICOPS - MOD */
A68_VC  GPXACTR;  /* avoid structure result */
A68_VC  LPXACTR;  /* clause result */
A68_VC  UPXACTR;  /* avoid structure result */
A68_VC  MQXACTR;  /* clause result */
A68_65  CTXACTR_t A_UNUSED = {0};
A68_VC  FTXACTR;  /* clause result */
A68_VC  XTXACTR;  /* avoid structure result */
A68_VC  BUXACTR;  /* clause result */
A68_VC  DUXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  IUXACTR;  /* ADICOPS - ABS INT */
A68_VC  JUXACTR;  /* avoid structure result */
A68_VC  KUXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  LUXACTR;  /* ADICOPS - ABS INT */
A68_VC  MUXACTR;  /* avoid structure result */
A68_VC  OUXACTR;  /* avoid structure result */
A68_74  PUXACTR_r A_UNUSED = {0};
A68_VC  TUXACTR;  /* clause result */
A68_VC  VUXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XUXACTR;  /* clause result */
A68_VC  EVXACTR;  /* avoid structure result */
A68_VC  GVXACTR;  /* avoid structure result */
A68_VC  HVXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  KVXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  LVXACTR;  /* avoid structure result */
A68_INT  NVXACTR;  /* ADICOPS - ABS INT */
A68_VC  OVXACTR;  /* avoid structure result */
A68_VC  PVXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  QVXACTR;  /* ADICOPS - ABS INT */
A68_VC  RVXACTR;  /* avoid structure result */
A68_VC  TVXACTR;  /* avoid structure result */
A68_75  UVXACTR_w A_UNUSED = {0};
A68_VC  XVXACTR;  /* clause result */
A68_76  OWXACTR_l A_UNUSED = {0};
A68_VC  QWXACTR;  /* OPERATORS - nil -> mode */
A68_VC  RWXACTR;  /* == */
A68_VC  SWXACTR;  /* == */
A68_VC  UWXACTR;  /* clause result */
A68_VC  XWXACTR;  /* clause result */
A68_VC  ZWXACTR;  /* avoid structure result */
A68_VC  CXXACTR;  /* avoid structure result */
A68_VC  GXXACTR;  /* avoid structure result */
A68_VC  IXXACTR;  /* avoid structure result */
A68_VC  LXXACTR;  /* avoid structure result */
A68_VC  NXXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_77  OXXACTR_u A_UNUSED = {0};
A68_VC  RXXACTR;  /* clause result */
A68_VC  TXXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  WXXACTR;  /* ADICOPS - ABS INT */
A68_VC  XXXACTR;  /* avoid structure result */
A68_VC  YXXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  ZXXACTR;  /* ADICOPS - ABS INT */
A68_VC  AYXACTR;  /* avoid structure result */
A68_VC  BYXACTR;  /* avoid structure result */
A68_VC  DYXACTR;  /* avoid structure result */
A68_55  EYXACTR_c A_UNUSED = {0};
A68_VC  HYXACTR;  /* avoid structure result */
A68_78  IYXACTR_k A_UNUSED = {0};
A68_VC  LYXACTR;  /* clause result */
A68_58  QYXACTR_c A_UNUSED = {0};
A68_VC  XYXACTR;  /* avoid structure result */
A68_VC  ZYXACTR;  /* avoid structure result */
A68_63  BZXACTR_f A_UNUSED = {0};
A68_VC  HZXACTR;  /* avoid structure result */
A68_VC  JZXACTR;  /* avoid structure result */
A68_VC  LZXACTR;  /* avoid structure result */
A68_79  PZXACTR_s A_UNUSED = {0};
A68_VC  SZXACTR;  /* clause result */
A68_VC  UAYACTR;  /* avoid structure result */
A68_VC  WAYACTR;  /* clause result */
A68_VC  ABYACTR;  /* clause result */
A68_VC  CBYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  FBYACTR;  /* ADICOPS - ABS INT */
A68_VC  GBYACTR;  /* avoid structure result */
A68_VC  HBYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  IBYACTR;  /* ADICOPS - ABS INT */
A68_VC  JBYACTR;  /* avoid structure result */
A68_VC  LBYACTR;  /* avoid structure result */
A68_VC  NBYACTR;  /* avoid structure result */
A68_80  OBYACTR_s A_UNUSED = {0};
A68_VC  RBYACTR;  /* clause result */
A68_VC  LCYACTR;  /* avoid structure result */
A68_VC  OCYACTR;  /* clause result */
A68_VC  QCYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  TCYACTR;  /* clause result */
A68_VC  VCYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XCYACTR;  /* clause result */
A68_INT  ZCYACTR;  /* ADICOPS - ABS INT */
A68_VC  ADYACTR;  /* avoid structure result */
A68_VC  BDYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  CDYACTR;  /* ADICOPS - ABS INT */
A68_VC  DDYACTR;  /* avoid structure result */
A68_VC  FDYACTR;  /* avoid structure result */
A68_INT  HDYACTR;  /* ADICOPS - ABS INT */
A68_VC  IDYACTR;  /* avoid structure result */
A68_VC  JDYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  KDYACTR;  /* ADICOPS - ABS INT */
A68_VC  LDYACTR;  /* avoid structure result */
A68_81  NDYACTR_t A_UNUSED = {0};
A68_VC  QDYACTR;  /* clause result */
A68_VC  KEYACTR;  /* avoid structure result */
A68_VC  MEYACTR;  /* avoid structure result */
A68_59  NEYACTR_c A_UNUSED = {0};
A68_59  OEYACTR;  /* united object - for case conformity */
A68_56  PEYACTR_c A_UNUSED = {0};
A68_VC  TEYACTR;  /* avoid structure result */
A68_VC  VEYACTR;  /* avoid structure result */
A68_60  WEYACTR_s A_UNUSED = {0};
A68_VC  BFYACTR;  /* avoid structure result */
A68_VC  DFYACTR;  /* avoid structure result */
A68_VC  FFYACTR;  /* avoid structure result */
A68_61  GFYACTR_e A_UNUSED = {0};
A68_VC  NFYACTR;  /* avoid structure result */
A68_VC  SFYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ZFYACTR;  /* clause result */
A68_VC  AGYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(imperativemnemonic);
 /* line 167: */
 /* line 168: */
KDXACTR = Imperative ;
switch ( KDXACTR.mode )
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
A_UNCPY(LDXACTR_p,KDXACTR);
 /* line 169: */
 /* line 170: */
MDXACTR = LDXACTR_p ;
switch ( MDXACTR.mode )
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
A_UNCPY(NDXACTR_l,MDXACTR);
 /* line 171: */
 /* line 176: */
ODXACTR = NDXACTR_l ;
switch ( ODXACTR.mode )
{ 
case 1: /* STRUCT(INT)  */
PDXACTR_si = (ODXACTR.data.mode1);
 /* line 177: */
 /* line 179: */
switch ( PDXACTR_si.Nse )
{ 
case 1: 
SDXACTR = TDXACTR;
break;
case 2: 
 /* line 180: */
SDXACTR = VDXACTR;
break;
case 3: 
SDXACTR = XDXACTR;
break;
default: 
 /* line 181: */
ROAAOSF_whole( PDXACTR_si.Nse, DCXACTR_fieldlength, &AEXACTR );
SDXACTR = A_VC_PLUS(ZDXACTR,AEXACTR);
break;
} 
 /* line 183: */
BEXACTR = A_VC_PLUS(CEXACTR,SDXACTR);
break;
case 2: /* INT */
DEXACTR_i = (ODXACTR.data.mode2);
 /* line 184: */
 /* line 185: */
 /* line 186: */
 /* line 188: */
ROAAOSF_whole( DEXACTR_i, DCXACTR_fieldlength, &HEXACTR );
UTKACTR_idfullname( DEXACTR_i, &JEXACTR );
BEXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(GEXACTR,HEXACTR),IEXACTR),JEXACTR),A_HVEC(KEXACTR,'\"',A68_CHAR ));
break;
case 3: /* BOOL */
LEXACTR_b = (ODXACTR.data.mode3);
 /* line 189: */
 /* line 190: */
if (LEXACTR_b)
{ 
OEXACTR = PEXACTR;
} 
else
{ 
OEXACTR = REXACTR;
} 
 /* line 192: */
BEXACTR = A_VC_PLUS(SEXACTR,OEXACTR);
break;
case 4: /* STRUCT(REF MODE26)  */
TEXACTR_c = (ODXACTR.data.mode4);
 /* line 193: */
 /* line 195: */
BEXACTR = A_VC_PLUS(VEXACTR,TEXACTR_c.Representation);
break;
case 5: /* STRUCT(INT)  */
WEXACTR_sl = (ODXACTR.data.mode5);
 /* line 196: */
 /* line 197: */
 /* line 199: */
ROAAOSF_whole( WEXACTR_sl.Labno, DCXACTR_fieldlength, &ZEXACTR );
BEXACTR = A_VC_PLUS(YEXACTR,ZEXACTR);
break;
case 6: /* STRUCT(INT,REF MODE26)  */
AFXACTR_n = (ODXACTR.data.mode6);
 /* line 200: */
 /* line 201: */
 /* line 202: */
 /* line 203: */
if (AFXACTR_n.Mode<0)
{ 
 /* line 204: */
DFXACTR = EFXACTR;
} 
else
{ 
DFXACTR = A_HVEC(FFXACTR,'=',A68_CHAR );
} 
 /* line 205: */
 /* line 206: */
 /* line 207: */
 /* line 209: */
IFXACTR = AFXACTR_n.Mode ;
ROAAOSF_whole( A_ABS(IFXACTR), DCXACTR_fieldlength, &JFXACTR );
LFXACTR = AFXACTR_n.Mode ;
WCNACTR_modename( A_ABS(LFXACTR), &MFXACTR );
BEXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(HFXACTR,DFXACTR),JFXACTR),A_HVEC(KFXACTR,'=',A68_CHAR )),MFXACTR),NFXACTR),AFXACTR_n.Nu);
break;
case 7: /* STRUCT(INT,REF MODE26)  */
OFXACTR_a = (ODXACTR.data.mode7);
 /* line 210: */
 /* line 211: */
 /* line 212: */
 /* line 213: */
if (OFXACTR_a.Mode<0)
{ 
 /* line 214: */
RFXACTR = SFXACTR;
} 
else
{ 
RFXACTR = A_HVEC(TFXACTR,'=',A68_CHAR );
} 
 /* line 215: */
 /* line 216: */
 /* line 218: */
WFXACTR = OFXACTR_a.Mode ;
ROAAOSF_whole( A_ABS(WFXACTR), DCXACTR_fieldlength, &XFXACTR );
ZFXACTR = OFXACTR_a.Mode ;
WCNACTR_modename( A_ABS(ZFXACTR), &AGXACTR );
BEXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(VFXACTR,RFXACTR),XFXACTR),A_HVEC(YFXACTR,'=',A68_CHAR )),AGXACTR),BGXACTR),OFXACTR_a.String),A_HVEC(CGXACTR,'\"',A68_CHAR ));
break;
case 8: /* STRUCT(INT,LONG BITS)  */
DGXACTR_o = (ODXACTR.data.mode8);
 /* line 219: */
 /* line 220: */
 /* line 221: */
 /* line 222: */
if (DGXACTR_o.Mode<0)
{ 
 /* line 223: */
GGXACTR = HGXACTR;
} 
else
{ 
GGXACTR = A_HVEC(IGXACTR,'=',A68_CHAR );
} 
 /* line 224: */
 /* line 225: */
 /* line 226: */
 /* line 229: */
LGXACTR = DGXACTR_o.Mode ;
ROAAOSF_whole( A_ABS(LGXACTR), DCXACTR_fieldlength, &MGXACTR );
OGXACTR = DGXACTR_o.Mode ;
WCNACTR_modename( A_ABS(OGXACTR), &PGXACTR );
JPAAOSF_lwhole( (A68_LINT )DGXACTR_o.Denotation, DCXACTR_fieldlength, &RGXACTR );
BEXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(KGXACTR,GGXACTR),MGXACTR),A_HVEC(NGXACTR,'=',A68_CHAR )),PGXACTR),QGXACTR),RGXACTR);
break;
case 9: /* STRUCT(INT,REF MODE26)  */
SGXACTR_st = (ODXACTR.data.mode9);
 /* line 230: */
 /* line 231: */
 /* line 232: */
 /* line 233: */
if (SGXACTR_st.Mode<0)
{ 
 /* line 234: */
VGXACTR = WGXACTR;
} 
else
{ 
VGXACTR = A_HVEC(XGXACTR,'=',A68_CHAR );
} 
 /* line 235: */
 /* line 236: */
 /* line 237: */
 /* line 238: */
 /* line 239: */
AHXACTR = SGXACTR_st.Mode ;
ROAAOSF_whole( A_ABS(AHXACTR), DCXACTR_fieldlength, &BHXACTR );
DHXACTR = SGXACTR_st.Mode ;
WCNACTR_modename( A_ABS(DHXACTR), &EHXACTR );
BEXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(ZGXACTR,VGXACTR),BHXACTR),A_HVEC(CHXACTR,'=',A68_CHAR )),EHXACTR),FHXACTR),SGXACTR_st.Denotation),A_HVEC(GHXACTR,'\"',A68_CHAR ));
break;
default: 
 /* line 241: */
BEXACTR = IHXACTR;
break;
} 
break;
case 10: /* STRUCT(INT,INT,INT)  */
JHXACTR_o = (MDXACTR.data.mode10);
 /* line 242: */
 /* line 243: */
{ 
 /* line 254: */
ROAAOSF_whole( JHXACTR_o.Param, DCXACTR_fieldlength, &WJXACTR );
XJXACTR_p = WJXACTR;
 /* line 255: */
 /* line 256: */
 /* line 257: */
 /* line 258: */
if (JHXACTR_o.Mode<0)
{ 
 /* line 259: */
ZJXACTR = AKXACTR;
} 
else
{ 
 /* line 260: */
ZJXACTR = A_HVEC(BKXACTR,'=',A68_CHAR );
} 
 /* line 261: */
CKXACTR = JHXACTR_o.Mode ;
ROAAOSF_whole( A_ABS(CKXACTR), DCXACTR_fieldlength, &DKXACTR );
FKXACTR = JHXACTR_o.Mode ;
WCNACTR_modename( A_ABS(FKXACTR), &GKXACTR );
HKXACTR_m = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(ZJXACTR,DKXACTR),A_HVEC(EKXACTR,'=',A68_CHAR )),GKXACTR);
 /* line 263: */
 /* line 264: */
 /* line 265: */
switch ( JHXACTR_o.Fn )
{ 
case 1: 
 /* line 266: */
 /* line 267: */
 /* line 268: */
if (JHXACTR_o.Param==(A68_TRUE))
{ 
 /* line 269: */
LKXACTR = MKXACTR;
} 
else
{ 
LKXACTR = OKXACTR;
} 
 /* line 271: */
PKXACTR = A_VC_PLUS(A_VC_PLUS(QKXACTR,LKXACTR),HKXACTR_m);
break;
case 2: 
 /* line 273: */
PKXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(TKXACTR,XJXACTR_p),UKXACTR),HKXACTR_m);
break;
case 3: 
 /* line 274: */
 /* line 276: */
PKXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(XKXACTR,XJXACTR_p),YKXACTR),HKXACTR_m);
break;
case 4: 
 /* line 278: */
PKXACTR = A_VC_PLUS(ALXACTR,HKXACTR_m);
break;
case 5: 
 /* line 279: */
 /* line 280: */
ELXACTR = JHXACTR_o.Mode ;
FLXACTR = 8 ;
switch ( A_MOD(ELXACTR,FLXACTR,DLXACTR) )
{ 
case 1: 
HLXACTR = ILXACTR;
break;
case 2: 
HLXACTR = KLXACTR;
break;
case 3: 
 /* line 281: */
HLXACTR = MLXACTR;
break;
case 4: 
HLXACTR = OLXACTR;
break;
case 5: 
HLXACTR = QLXACTR;
break;
case 6: 
 /* line 283: */
HLXACTR = SLXACTR;
break;
case 7: 
 /* line 284: */
HLXACTR = ULXACTR;
break;
default: 
HLXACTR = WLXACTR;
break;
} 
 /* line 285: */
if (JHXACTR_o.Mode>7)
{ 
YLXACTR = ZLXACTR;
} 
else
{ 
YLXACTR = BMXACTR;
} 
 /* line 287: */
PKXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(CMXACTR,XJXACTR_p),DMXACTR),HLXACTR),YLXACTR);
break;
case 6: 
 /* line 288: */
 /* line 290: */
ROAAOSF_whole( (1+JHXACTR_o.Param), 0, &IMXACTR );
PKXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(HMXACTR,IMXACTR),JMXACTR),XJXACTR_p),KMXACTR),HKXACTR_m);
break;
case 7: 
 /* line 291: */
 /* line 293: */
ROAAOSF_whole( (1+JHXACTR_o.Param), 0, &OMXACTR );
PKXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(NMXACTR,OMXACTR),PMXACTR),HKXACTR_m);
break;
case 8: 
 /* line 295: */
PKXACTR = A_VC_PLUS(RMXACTR,HKXACTR_m);
break;
case 9: 
 /* line 297: */
PKXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(UMXACTR,XJXACTR_p),VMXACTR),HKXACTR_m);
break;
case 10: 
 /* line 298: */
 /* line 299: */
 /* line 300: */
 /* line 301: */
 /* line 302: */
 /* line 304: */
ROAAOSF_whole( (JHXACTR_o.Param/16), DCXACTR_fieldlength, &BNXACTR );
MHXACTR_standardpreludeops( ((JHXACTR_o.Param/16)+1), &DNXACTR );
GNXACTR = JHXACTR_o.Param ;
HNXACTR = 16 ;
ROAAOSF_whole( A_MOD(GNXACTR,HNXACTR,FNXACTR), DCXACTR_fieldlength, &INXACTR );
PKXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(ANXACTR,BNXACTR),CNXACTR),DNXACTR),ENXACTR),INXACTR),JNXACTR),HKXACTR_m);
break;
case 11: 
 /* line 305: */
 /* line 306: */
 /* line 307: */
switch ( ((JHXACTR_o.Param/16)+1) )
{ 
case 1: 
MNXACTR = A_HVEC(NNXACTR,'+',A68_CHAR );
break;
case 2: 
MNXACTR = A_HVEC(ONXACTR,'-',A68_CHAR );
break;
case 3: 
MNXACTR = QNXACTR;
break;
case 4: 
MNXACTR = SNXACTR;
break;
case 5: 
 /* line 308: */
MNXACTR = UNXACTR;
break;
case 6: 
MNXACTR = WNXACTR;
break;
case 7: 
MNXACTR = YNXACTR;
break;
case 8: 
MNXACTR = AOXACTR;
break;
case 9: 
MNXACTR = COXACTR;
break;
case 10: 
 /* line 309: */
MNXACTR = EOXACTR;
break;
case 11: 
MNXACTR = GOXACTR;
break;
case 12: 
MNXACTR = IOXACTR;
break;
case 13: 
MNXACTR = KOXACTR;
break;
case 14: 
MNXACTR = MOXACTR;
break;
case 15: 
 /* line 310: */
MNXACTR = OOXACTR;
break;
case 16: 
MNXACTR = QOXACTR;
break;
case 17: 
 /* line 311: */
MNXACTR = SOXACTR;
break;
case 18: 
 /* line 312: */
MNXACTR = UOXACTR;
break;
default: 
MNXACTR = WOXACTR;
break;
} 
 /* line 313: */
 /* line 314: */
 /* line 315: */
 /* line 317: */
ROAAOSF_whole( (JHXACTR_o.Param/16), DCXACTR_fieldlength, &APXACTR );
EPXACTR = JHXACTR_o.Param ;
FPXACTR = 16 ;
ROAAOSF_whole( A_MOD(EPXACTR,FPXACTR,DPXACTR), DCXACTR_fieldlength, &GPXACTR );
PKXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(ZOXACTR,APXACTR),BPXACTR),MNXACTR),CPXACTR),GPXACTR),HPXACTR),HKXACTR_m);
break;
case 12: 
 /* line 318: */
 /* line 319: */
if (JHXACTR_o.Param==1)
{ 
LPXACTR = MPXACTR;
} 
else
{ 
 /* line 320: */
if (JHXACTR_o.Param==(-1))
{ 
LPXACTR = OPXACTR;
} 
else
{ 
 /* line 321: */
if (JHXACTR_o.Param>1)
{ 
LPXACTR = QPXACTR;
} 
else
{ 
 /* line 322: */
 /* line 323: */
ROAAOSF_whole( ((-1)-JHXACTR_o.Param), DCXACTR_fieldlength, &UPXACTR );
LPXACTR = A_VC_PLUS(A_VC_PLUS(TPXACTR,UPXACTR),VPXACTR);
} 
} 
} 
 /* line 325: */
PKXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(WPXACTR,HKXACTR_m),XPXACTR),LPXACTR);
break;
case 13: 
 /* line 327: */
PKXACTR = A_VC_PLUS(ZPXACTR,HKXACTR_m);
break;
case 14: 
 /* line 329: */
PKXACTR = A_VC_PLUS(BQXACTR,HKXACTR_m);
break;
case 15: 
 /* line 331: */
PKXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(EQXACTR,XJXACTR_p),FQXACTR),HKXACTR_m);
break;
case 16: 
 /* line 333: */
PKXACTR = A_VC_PLUS(HQXACTR,HKXACTR_m);
break;
case 17: 
 /* line 335: */
PKXACTR = A_VC_PLUS(JQXACTR,HKXACTR_m);
break;
case 18: 
 /* line 336: */
 /* line 337: */
switch ( (JHXACTR_o.Param+1) )
{ 
case 1: 
 /* line 338: */
MQXACTR = NQXACTR;
break;
case 2: 
 /* line 339: */
MQXACTR = PQXACTR;
break;
case 3: 
 /* line 340: */
MQXACTR = RQXACTR;
break;
case 4: 
 /* line 342: */
MQXACTR = TQXACTR;
break;
case 5: 
MQXACTR = VQXACTR;
break;
default: 
 /* line 343: */
MQXACTR = A_VC_PLUS(XQXACTR,XJXACTR_p);
break;
} 
 /* line 345: */
PKXACTR = A_VC_PLUS(A_VC_PLUS(YQXACTR,HKXACTR_m),MQXACTR);
break;
case 19: 
 /* line 347: */
PKXACTR = ARXACTR;
break;
case 20: 
 /* line 349: */
PKXACTR = A_VC_PLUS(CRXACTR,HKXACTR_m);
break;
case 21: 
 /* line 351: */
PKXACTR = A_VC_PLUS(ERXACTR,HKXACTR_m);
break;
case 22: 
 /* line 353: */
PKXACTR = A_VC_PLUS(GRXACTR,HKXACTR_m);
break;
case 23: 
 /* line 355: */
PKXACTR = A_VC_PLUS(IRXACTR,HKXACTR_m);
break;
case 24: 
 /* line 357: */
PKXACTR = A_VC_PLUS(KRXACTR,HKXACTR_m);
break;
case 25: 
 /* line 359: */
PKXACTR = A_VC_PLUS(MRXACTR,HKXACTR_m);
break;
case 26: 
 /* line 361: */
PKXACTR = A_VC_PLUS(ORXACTR,HKXACTR_m);
break;
case 27: 
 /* line 363: */
PKXACTR = A_VC_PLUS(QRXACTR,HKXACTR_m);
break;
case 28: 
 /* line 365: */
PKXACTR = A_VC_PLUS(SRXACTR,HKXACTR_m);
break;
case 29: 
 /* line 367: */
PKXACTR = A_VC_PLUS(URXACTR,HKXACTR_m);
break;
case 30: 
 /* line 369: */
PKXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(XRXACTR,XJXACTR_p),YRXACTR),HKXACTR_m);
break;
case 31: 
 /* line 371: */
PKXACTR = A_VC_PLUS(ASXACTR,HKXACTR_m);
break;
case 32: 
 /* line 372: */
 /* line 374: */
PKXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(DSXACTR,XJXACTR_p),ESXACTR),HKXACTR_m);
break;
case 33: 
 /* line 376: */
PKXACTR = A_VC_PLUS(GSXACTR,HKXACTR_m);
break;
case 34: 
 /* line 378: */
PKXACTR = A_VC_PLUS(ISXACTR,HKXACTR_m);
break;
case 35: 
 /* line 380: */
PKXACTR = A_VC_PLUS(KSXACTR,HKXACTR_m);
break;
case 36: 
 /* line 382: */
PKXACTR = A_VC_PLUS(MSXACTR,HKXACTR_m);
break;
case 37: 
 /* line 384: */
PKXACTR = A_VC_PLUS(OSXACTR,HKXACTR_m);
break;
case 38: 
 /* line 386: */
PKXACTR = A_VC_PLUS(QSXACTR,HKXACTR_m);
break;
case 39: 
 /* line 388: */
PKXACTR = A_VC_PLUS(SSXACTR,HKXACTR_m);
break;
case 40: 
 /* line 390: */
 /* line 391: */
PKXACTR = A_VC_PLUS(HKXACTR_m,USXACTR);
break;
default: 
 /* line 392: */
 /* line 393: */
if (JHXACTR_o.Fn==50)
{ 
PKXACTR = WSXACTR;
} 
else
{ 
 /* line 394: */
 /* line 395: */
if (JHXACTR_o.Fn==51)
{ 
 /* line 396: */
PKXACTR = YSXACTR;
} 
else
{ 
 /* line 397: */
 /* line 398: */
PKXACTR = ATXACTR;
} 
} 
break;
} 
 /* line 400: */
BEXACTR = A_VC_PLUS(BTXACTR,PKXACTR);
} 
break;
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
CTXACTR_t = (MDXACTR.data.mode11);
 /* line 401: */
 /* line 402: */
 /* line 403: */
switch ( CTXACTR_t.Type )
{ 
case 1: 
 /* line 404: */
FTXACTR = GTXACTR;
break;
case 2: 
 /* line 405: */
FTXACTR = ITXACTR;
break;
case 3: 
 /* line 406: */
FTXACTR = KTXACTR;
break;
case 4: 
 /* line 407: */
FTXACTR = MTXACTR;
break;
case 5: 
 /* line 408: */
FTXACTR = OTXACTR;
break;
case 6: 
 /* line 409: */
FTXACTR = QTXACTR;
break;
case 7: 
 /* line 411: */
FTXACTR = STXACTR;
break;
case 8: 
FTXACTR = UTXACTR;
break;
default: 
 /* line 412: */
 /* line 413: */
ROAAOSF_whole( CTXACTR_t.Type, DCXACTR_fieldlength, &XTXACTR );
FTXACTR = A_VC_PLUS(WTXACTR,XTXACTR);
break;
} 
 /* line 414: */
 /* line 415: */
 /* line 416: */
if (CTXACTR_t.Mode<0)
{ 
BUXACTR = CUXACTR;
} 
else
{ 
BUXACTR = A_HVEC(DUXACTR,'=',A68_CHAR );
} 
 /* line 417: */
 /* line 418: */
 /* line 419: */
 /* line 421: */
IUXACTR = CTXACTR_t.Mode ;
ROAAOSF_whole( A_ABS(IUXACTR), DCXACTR_fieldlength, &JUXACTR );
LUXACTR = CTXACTR_t.Mode ;
WCNACTR_modename( A_ABS(LUXACTR), &MUXACTR );
ROAAOSF_whole( CTXACTR_t.Decno, DCXACTR_fieldlength, &OUXACTR );
BEXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(FUXACTR,FTXACTR),GUXACTR),CTXACTR_t.Name),HUXACTR),BUXACTR),JUXACTR),A_HVEC(KUXACTR,'=',A68_CHAR )),MUXACTR),NUXACTR),OUXACTR);
break;
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
PUXACTR_r = (MDXACTR.data.mode12);
 /* line 422: */
 /* line 423: */
 /* line 424: */
 /* line 425: */
if (PUXACTR_r.Mode<0)
{ 
TUXACTR = UUXACTR;
} 
else
{ 
TUXACTR = A_HVEC(VUXACTR,'=',A68_CHAR );
} 
 /* line 426: */
 /* line 427: */
 /* line 430: */
 /* line 431: */
 /* line 432: */
if (PUXACTR_r.Maxname<3)
{ 
XUXACTR = YUXACTR;
} 
else
{ 
 /* line 433: */
 /* line 434: */
if (PUXACTR_r.Maxname==3)
{ 
XUXACTR = AVXACTR;
} 
else
{ 
 /* line 435: */
 /* line 436: */
 /* line 437: */
ROAAOSF_whole( PUXACTR_r.Maxname, DCXACTR_fieldlength, &EVXACTR );
UTKACTR_idfullname( PUXACTR_r.Maxname, &GVXACTR );
XUXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(DVXACTR,EVXACTR),FVXACTR),GVXACTR),A_HVEC(HVXACTR,'\"',A68_CHAR ));
} 
} 
 /* line 438: */
 /* line 440: */
GCXACTR_bitmnemonic( (A68_BITS )(PUXACTR_r.Props&CCXACTR_maskxroutine), A68_FALSE, &LVXACTR );
NVXACTR = PUXACTR_r.Mode ;
ROAAOSF_whole( A_ABS(NVXACTR), DCXACTR_fieldlength, &OVXACTR );
QVXACTR = PUXACTR_r.Mode ;
WCNACTR_modename( A_ABS(QVXACTR), &RVXACTR );
ROAAOSF_whole( PUXACTR_r.Rdenno, DCXACTR_fieldlength, &TVXACTR );
BEXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(JVXACTR,PUXACTR_r.Name),A_HVEC(KVXACTR,'\"',A68_CHAR )),LVXACTR),MVXACTR),TUXACTR),OVXACTR),A_HVEC(PVXACTR,'=',A68_CHAR )),RVXACTR),XUXACTR),SVXACTR),TVXACTR);
break;
case 13: /* STRUCT(INT)  */
UVXACTR_w = (MDXACTR.data.mode13);
 /* line 441: */
 /* line 442: */
 /* line 443: */
switch ( UVXACTR_w.W )
{ 
case 1: 
XVXACTR = YVXACTR;
break;
case 2: 
XVXACTR = AWXACTR;
break;
case 3: 
XVXACTR = CWXACTR;
break;
case 4: 
 /* line 444: */
XVXACTR = EWXACTR;
break;
case 5: 
XVXACTR = GWXACTR;
break;
case 6: 
 /* line 445: */
XVXACTR = IWXACTR;
break;
case 7: 
 /* line 446: */
XVXACTR = KWXACTR;
break;
default: 
XVXACTR = MWXACTR;
break;
} 
 /* line 448: */
BEXACTR = A_VC_PLUS(NWXACTR,XVXACTR);
break;
case 14: /* STRUCT(REF MODE26,INT,INT,BOOL)  */
OWXACTR_l = (MDXACTR.data.mode14);
 /* line 449: */
 /* line 450: */
RWXACTR = A_VVAC(QWXACTR) ;
SWXACTR = OWXACTR_l.Name ;
if (A_VSTRUCTCOMP(SWXACTR,RWXACTR))
{ 
UWXACTR = VWXACTR;
} 
else
{ 
 /* line 451: */
UWXACTR = OWXACTR_l.Name;
} 
 /* line 453: */
if (OWXACTR_l.Notsetting)
{ 
 /* line 455: */
switch ( (OWXACTR_l.Status+1) )
{ 
case 1: 
 /* line 457: */
ROAAOSF_whole( OWXACTR_l.Labno, DCXACTR_fieldlength, &ZWXACTR );
XWXACTR = A_VC_PLUS(YWXACTR,ZWXACTR);
break;
case 2: 
 /* line 458: */
 /* line 459: */
 /* line 460: */
ROAAOSF_whole( OWXACTR_l.Labno, DCXACTR_fieldlength, &CXXACTR );
XWXACTR = A_VC_PLUS(BXXACTR,CXXACTR);
break;
default: 
 /* line 461: */
 /* line 462: */
 /* line 463: */
 /* line 464: */
ROAAOSF_whole( OWXACTR_l.Status, DCXACTR_fieldlength, &GXXACTR );
ROAAOSF_whole( OWXACTR_l.Labno, DCXACTR_fieldlength, &IXXACTR );
XWXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(FXXACTR,GXXACTR),HXXACTR),IXXACTR);
break;
} 
} 
else
{ 
 /* line 465: */
 /* line 466: */
ROAAOSF_whole( OWXACTR_l.Labno, DCXACTR_fieldlength, &LXXACTR );
XWXACTR = A_VC_PLUS(KXXACTR,LXXACTR);
} 
 /* line 468: */
BEXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(MXXACTR,UWXACTR),A_HVEC(NXXACTR,'\"',A68_CHAR )),XWXACTR);
break;
case 15: /* STRUCT(INT,BITS,INT)  */
OXXACTR_u = (MDXACTR.data.mode15);
 /* line 469: */
 /* line 470: */
if (OXXACTR_u.Mode<0)
{ 
RXXACTR = SXXACTR;
} 
else
{ 
RXXACTR = A_HVEC(TXXACTR,'=',A68_CHAR );
} 
 /* line 471: */
 /* line 472: */
 /* line 473: */
 /* line 474: */
 /* line 476: */
WXXACTR = OXXACTR_u.Mode ;
ROAAOSF_whole( A_ABS(WXXACTR), DCXACTR_fieldlength, &XXXACTR );
ZXXACTR = OXXACTR_u.Mode ;
WCNACTR_modename( A_ABS(ZXXACTR), &AYXACTR );
GCXACTR_bitmnemonic( (A68_BITS )(OXXACTR_u.Props&WCAACTR_decbit), A68_TRUE, &BYXACTR );
ROAAOSF_whole( OXXACTR_u.Param, DCXACTR_fieldlength, &DYXACTR );
BEXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(VXXACTR,RXXACTR),XXXACTR),A_HVEC(YXXACTR,'=',A68_CHAR )),AYXACTR),BYXACTR),CYXACTR),DYXACTR);
break;
case 16: /* STRUCT(INT)  */
EYXACTR_c = (MDXACTR.data.mode16);
 /* line 477: */
 /* line 478: */
 /* line 480: */
ROAAOSF_whole( EYXACTR_c.I, DCXACTR_fieldlength, &HYXACTR );
BEXACTR = A_VC_PLUS(GYXACTR,HYXACTR);
break;
case 17: /* STRUCT(BOOL)  */
IYXACTR_k = (MDXACTR.data.mode17);
 /* line 481: */
 /* line 482: */
if (IYXACTR_k.Start)
{ 
LYXACTR = MYXACTR;
} 
else
{ 
LYXACTR = OYXACTR;
} 
 /* line 484: */
BEXACTR = A_VC_PLUS(PYXACTR,LYXACTR);
break;
case 19: /* STRUCT(INT,INT,REF MODE26)  */
QYXACTR_c = (MDXACTR.data.mode19);
 /* line 485: */
 /* line 486: */
 /* line 487: */
 /* line 488: */
 /* line 490: */
ROAAOSF_whole( QYXACTR_c.Mode, 0, &XYXACTR );
ROAAOSF_whole( QYXACTR_c.Number, 0, &ZYXACTR );
BEXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(VYXACTR,WYXACTR),XYXACTR),YYXACTR),ZYXACTR),AZXACTR);
break;
case 18: /* STRUCT(MODE64,REF MODE26)  */
BZXACTR_f = (MDXACTR.data.mode18);
 /* line 491: */
 /* line 492: */
 /* line 493: */
 /* line 494: */
 /* line 495: */
 /* line 496: */
 /* line 497: */
 /* line 498: */
 /* line 499: */
ROAAOSF_whole( BZXACTR_f.Info.Nochars, DCXACTR_fieldlength, &HZXACTR );
ROAAOSF_whole( BZXACTR_f.Info.Nocases, DCXACTR_fieldlength, &JZXACTR );
ROAAOSF_whole( BZXACTR_f.Info.W, DCXACTR_fieldlength, &LZXACTR );
BEXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(GZXACTR,HZXACTR),IZXACTR),JZXACTR),KZXACTR),LZXACTR),MZXACTR),BZXACTR_f.Text);
break;
default: 
 /* line 502: */
BEXACTR = OZXACTR;
break;
} 
break;
case 20: /* STRUCT(INT,INT,BITS,INT)  */
PZXACTR_s = (KDXACTR.data.mode20);
 /* line 503: */
 /* line 504: */
switch ( PZXACTR_s.Fn )
{ 
case 1: 
SZXACTR = TZXACTR;
break;
case 2: 
SZXACTR = VZXACTR;
break;
case 3: 
 /* line 505: */
SZXACTR = XZXACTR;
break;
case 4: 
SZXACTR = ZZXACTR;
break;
case 5: 
SZXACTR = BAYACTR;
break;
case 6: 
 /* line 506: */
SZXACTR = DAYACTR;
break;
case 7: 
SZXACTR = FAYACTR;
break;
case 8: 
SZXACTR = HAYACTR;
break;
case 9: 
 /* line 507: */
SZXACTR = JAYACTR;
break;
case 10: 
SZXACTR = LAYACTR;
break;
case 11: 
SZXACTR = NAYACTR;
break;
case 12: 
 /* line 509: */
SZXACTR = PAYACTR;
break;
case 13: 
 /* line 510: */
SZXACTR = RAYACTR;
break;
default: 
 /* line 511: */
 /* line 512: */
 /* line 513: */
ROAAOSF_whole( PZXACTR_s.Fn, DCXACTR_fieldlength, &UAYACTR );
SZXACTR = A_VC_PLUS(TAYACTR,UAYACTR);
break;
} 
 /* line 514: */
 /* line 515: */
 /* line 516: */
 /* line 518: */
if (PZXACTR_s.Fn==11)
{ 
 /* line 519: */
WAYACTR = XAYACTR;
} 
else
{ 
 /* line 520: */
if (PZXACTR_s.Mode<0)
{ 
ABYACTR = BBYACTR;
} 
else
{ 
ABYACTR = A_HVEC(CBYACTR,'=',A68_CHAR );
} 
 /* line 521: */
 /* line 522: */
 /* line 523: */
 /* line 524: */
FBYACTR = PZXACTR_s.Mode ;
ROAAOSF_whole( A_ABS(FBYACTR), DCXACTR_fieldlength, &GBYACTR );
IBYACTR = PZXACTR_s.Mode ;
WCNACTR_modename( A_ABS(IBYACTR), &JBYACTR );
ROAAOSF_whole( PZXACTR_s.Param, DCXACTR_fieldlength, &LBYACTR );
WAYACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(EBYACTR,ABYACTR),GBYACTR),A_HVEC(HBYACTR,'=',A68_CHAR )),JBYACTR),KBYACTR),LBYACTR);
} 
 /* line 528: */
GCXACTR_bitmnemonic( (A68_BITS )(PZXACTR_s.Props&(A68_BITS )((A68_BITS )(WBXACTR_maskgeneral|XBXACTR_maskdynamica)|BCXACTR_maskspecial)), A68_TRUE, &NBYACTR );
BEXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(MBYACTR,SZXACTR),NBYACTR),WAYACTR);
break;
case 21: /* STRUCT(INT,INT,BITS,INT)  */
OBYACTR_s = (KDXACTR.data.mode21);
 /* line 529: */
 /* line 530: */
switch ( (OBYACTR_s.Fn+2) )
{ 
case 1: 
RBYACTR = SBYACTR;
break;
case 2: 
 /* line 531: */
RBYACTR = UBYACTR;
break;
case 3: 
 /* line 532: */
RBYACTR = WBYACTR;
break;
case 4: 
 /* line 533: */
RBYACTR = YBYACTR;
break;
case 5: 
 /* line 534: */
RBYACTR = ACYACTR;
break;
case 6: 
 /* line 535: */
RBYACTR = CCYACTR;
break;
case 7: 
 /* line 536: */
RBYACTR = ECYACTR;
break;
case 8: 
 /* line 538: */
RBYACTR = GCYACTR;
break;
case 9: 
 /* line 539: */
RBYACTR = ICYACTR;
break;
default: 
 /* line 540: */
 /* line 541: */
 /* line 542: */
ROAAOSF_whole( OBYACTR_s.Fn, DCXACTR_fieldlength, &LCYACTR );
RBYACTR = A_VC_PLUS(KCYACTR,LCYACTR);
break;
} 
 /* line 543: */
 /* line 544: */
if (OBYACTR_s.Mode<0)
{ 
OCYACTR = PCYACTR;
} 
else
{ 
OCYACTR = A_HVEC(QCYACTR,'=',A68_CHAR );
} 
 /* line 545: */
 /* line 546: */
 /* line 547: */
if (OBYACTR_s.Resultmode<0)
{ 
TCYACTR = UCYACTR;
} 
else
{ 
TCYACTR = A_HVEC(VCYACTR,'=',A68_CHAR );
} 
 /* line 548: */
 /* line 549: */
 /* line 550: */
if ((OBYACTR_s.Fn==6)|(OBYACTR_s.Fn==7))
{ 
XCYACTR = YCYACTR;
} 
else
{ 
 /* line 551: */
 /* line 552: */
ZCYACTR = OBYACTR_s.Resultmode ;
ROAAOSF_whole( A_ABS(ZCYACTR), DCXACTR_fieldlength, &ADYACTR );
CDYACTR = OBYACTR_s.Resultmode ;
WCNACTR_modename( A_ABS(CDYACTR), &DDYACTR );
XCYACTR = A_VC_PLUS(A_VC_PLUS(ADYACTR,A_HVEC(BDYACTR,'=',A68_CHAR )),DDYACTR);
} 
 /* line 555: */
GCXACTR_bitmnemonic( OBYACTR_s.Props, A68_TRUE, &FDYACTR );
HDYACTR = OBYACTR_s.Mode ;
ROAAOSF_whole( A_ABS(HDYACTR), DCXACTR_fieldlength, &IDYACTR );
KDYACTR = OBYACTR_s.Mode ;
WCNACTR_modename( A_ABS(KDYACTR), &LDYACTR );
BEXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(EDYACTR,RBYACTR),FDYACTR),GDYACTR),OCYACTR),IDYACTR),A_HVEC(JDYACTR,'=',A68_CHAR )),LDYACTR),MDYACTR),TCYACTR),XCYACTR);
break;
case 22: /* STRUCT(INT,BITS)  */
NDYACTR_t = (KDXACTR.data.mode22);
 /* line 556: */
 /* line 557: */
switch ( NDYACTR_t.Fn )
{ 
case 1: 
QDYACTR = RDYACTR;
break;
case 2: 
QDYACTR = TDYACTR;
break;
case 3: 
 /* line 558: */
QDYACTR = VDYACTR;
break;
case 4: 
QDYACTR = XDYACTR;
break;
case 5: 
QDYACTR = ZDYACTR;
break;
case 6: 
 /* line 559: */
QDYACTR = BEYACTR;
break;
case 7: 
QDYACTR = DEYACTR;
break;
case 8: 
 /* line 560: */
QDYACTR = FEYACTR;
break;
case 9: 
 /* line 561: */
QDYACTR = HEYACTR;
break;
default: 
 /* line 562: */
 /* line 563: */
 /* line 564: */
ROAAOSF_whole( NDYACTR_t.Fn, DCXACTR_fieldlength, &KEYACTR );
QDYACTR = A_VC_PLUS(JEYACTR,KEYACTR);
break;
} 
 /* line 568: */
GCXACTR_bitmnemonic( NDYACTR_t.Props, A68_TRUE, &MEYACTR );
BEXACTR = A_VC_PLUS(A_VC_PLUS(LEYACTR,QDYACTR),MEYACTR);
break;
case 23: /* STRUCT(INT,INT,REF MODE57)  */
case 24: /* STRUCT(INT,INT,INT)  */
case 25: /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE62)  */
A_UNCPY(NEYACTR_c,KDXACTR);
NEYACTR_c.mode -= 22;
 /* line 569: */
OEYACTR = NEYACTR_c ;
switch ( OEYACTR.mode )
{ 
case 1: /* STRUCT(INT,INT,REF MODE57)  */
PEYACTR_c = (OEYACTR.data.mode1);
 /* line 570: */
 /* line 571: */
 /* line 572: */
 /* line 574: */
ROAAOSF_whole( PEYACTR_c.Body, DCXACTR_fieldlength, &TEYACTR );
ROAAOSF_whole( PEYACTR_c.Moduleno, DCXACTR_fieldlength, &VEYACTR );
BEXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(SEYACTR,TEYACTR),UEYACTR),VEYACTR);
break;
case 2: /* STRUCT(INT,INT,INT)  */
WEYACTR_s = (OEYACTR.data.mode2);
 /* line 575: */
 /* line 576: */
 /* line 577: */
 /* line 578: */
ROAAOSF_whole( WEYACTR_s.Moduleno, DCXACTR_fieldlength, &BFYACTR );
ROAAOSF_whole( WEYACTR_s.I, DCXACTR_fieldlength, &DFYACTR );
ROAAOSF_whole( WEYACTR_s.J, DCXACTR_fieldlength, &FFYACTR );
BEXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(AFYACTR,BFYACTR),CFYACTR),DFYACTR),EFYACTR),FFYACTR);
break;
case 3: /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE62)  */
GFYACTR_e = (OEYACTR.data.mode3);
 /* line 579: */
 /* line 580: */
 /* line 581: */
 /* line 582: */
 /* line 583: */
 /* line 585: */
 /* line 587: */
ROAAOSF_whole( GFYACTR_e.Moduleno, DCXACTR_fieldlength, &NFYACTR );
BEXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(MFYACTR,NFYACTR),OFYACTR),GFYACTR_e.Name),PFYACTR),GFYACTR_e.Uname),QFYACTR),GFYACTR_e.Lname),RFYACTR),GFYACTR_e.Gname),A_HVEC(SFYACTR,'\"',A68_CHAR ));
break;
default: 
 /* line 591: */
BEXACTR = UFYACTR;
break;
} 
break;
case 26: /* VOID */
 /* line 592: */
 /* line 593: */
BEXACTR = WFYACTR;
break;
default: 
 /* line 598: */
BEXACTR = YFYACTR;
break;
} 
ZFYACTR = A_VC_PLUS(BEXACTR,A_HVEC(AGYACTR,')',A68_CHAR ));
A_PROC_EXIT(imperativemnemonic);
*ReturnedValue = (ZFYACTR);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 5: */
void HZWACTR(void)   /* initialise DECS mnemonics */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel","-dir",".","mnemonics.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/vak/Project/Algol/Algol-68RS-Source/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/vak/Project/Algol/Algol-68RS-Source/a68config/a68config.m","./identifiers.m","./incimperatives.m","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config A_UNUSED;
/* --- end of configuration information */
A68_117  XZWACTR;  /* procedure value */
A68_125  YZWACTR;  /* collateral clause result */
A68_120  FBXACTR;  /* OPERATORS - istruct to row */
A68_128  HBXACTR;  /* collateral clause result */
A68_120  UBXACTR;  /* OPERATORS - istruct to row */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
MMVACTR();   /* USE identifiers */
UAAACTR();   /* USE incimperatives */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/mnemonics.a68";
A_config.translation_time = "Thu Nov  5 21:38:58 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "GZWACTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 21:38:58 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS mnemonics);
(void)(UEAALIB_a68config(LGAALIB_configinfo, LZWACTR));
 /* line 64: */
XZWACTR.fn.fn_global = OZWACTR_generator;
XZWACTR.nonlocals = A68_NIL;
MZWACTR_anonymous = XZWACTR;
 /* line 66: */
 /* line 67: */
 /* line 68: */
YZWACTR.data[0].Name = AAXACTR;
 /* line 69: */
YZWACTR.data[0].Value = SCAACTR_priobit;
YZWACTR.data[1].Name = CAXACTR;
 /* line 70: */
YZWACTR.data[1].Value = TCAACTR_exitbit;
YZWACTR.data[2].Name = EAXACTR;
 /* line 71: */
YZWACTR.data[2].Value = UCAACTR_semibit;
YZWACTR.data[3].Name = GAXACTR;
 /* line 72: */
YZWACTR.data[3].Value = VCAACTR_heapbit;
YZWACTR.data[4].Name = IAXACTR;
 /* line 73: */
YZWACTR.data[4].Value = WCAACTR_decbit;
YZWACTR.data[5].Name = KAXACTR;
 /* line 74: */
YZWACTR.data[5].Value = XCAACTR_vardecbit;
YZWACTR.data[6].Name = MAXACTR;
 /* line 75: */
YZWACTR.data[6].Value = YCAACTR_compgenbit;
YZWACTR.data[7].Name = OAXACTR;
 /* line 76: */
YZWACTR.data[7].Value = ZCAACTR_elifousebit;
YZWACTR.data[8].Name = QAXACTR;
 /* line 77: */
YZWACTR.data[8].Value = ADAACTR_labbit;
YZWACTR.data[9].Name = SAXACTR;
 /* line 78: */
YZWACTR.data[9].Value = BDAACTR_dontpullbit;
YZWACTR.data[10].Name = UAXACTR;
 /* line 79: */
YZWACTR.data[10].Value = CDAACTR_dyprocbit;
YZWACTR.data[11].Name = WAXACTR;
 /* line 80: */
YZWACTR.data[11].Value = DDAACTR_dyvardecbit;
YZWACTR.data[12].Name = YAXACTR;
 /* line 81: */
YZWACTR.data[12].Value = EDAACTR_dydecbit;
YZWACTR.data[13].Name = ABXACTR;
 /* line 82: */
YZWACTR.data[13].Value = FDAACTR_genprocbit;
YZWACTR.data[14].Name = CBXACTR;
 /* line 83: */
YZWACTR.data[14].Value = GDAACTR_locgenbit;
YZWACTR.data[15].Name = EBXACTR;
 /* line 84: */
YZWACTR.data[15].Value = HDAACTR_locdydecbit;
GBXACTR_controlbits = A_HIS1ARR(FBXACTR,YZWACTR,A68_116 ,16);
 /* line 86: */
 /* line 87: */
 /* line 88: */
HBXACTR.data[0].Name = JBXACTR;
 /* line 89: */
HBXACTR.data[0].Value = NCAACTR_ccbit;
HBXACTR.data[1].Name = LBXACTR;
 /* line 90: */
HBXACTR.data[1].Value = OCAACTR_operatorbit;
HBXACTR.data[2].Name = NBXACTR;
 /* line 91: */
HBXACTR.data[2].Value = PCAACTR_valbit;
HBXACTR.data[3].Name = PBXACTR;
 /* line 92: */
HBXACTR.data[3].Value = QCAACTR_holebit;
HBXACTR.data[4].Name = RBXACTR;
 /* line 93: */
HBXACTR.data[4].Value = FDAACTR_genprocbit;
HBXACTR.data[5].Name = TBXACTR;
 /* line 94: */
HBXACTR.data[5].Value = RCAACTR_globscopebit;
VBXACTR_routinebits = A_HIS1ARR(UBXACTR,HBXACTR,A68_116 ,6);
 /* line 108: */
 /* line 109: */
 /* line 110: */
 /* line 111: */
WBXACTR_maskgeneral = (A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )(SCAACTR_priobit|UCAACTR_semibit)|WCAACTR_decbit)|XCAACTR_vardecbit)|ADAACTR_labbit)|TCAACTR_exitbit)|GDAACTR_locgenbit)|HDAACTR_locdydecbit);
 /* line 112: */
 /* line 113: */
XBXACTR_maskdynamica = (A68_BITS )((A68_BITS )(CDAACTR_dyprocbit|DDAACTR_dyvardecbit)|EDAACTR_dydecbit);
 /* line 114: */
 /* line 115: */
 /* line 116: */
ZBXACTR_maskdynamicc = (A68_BITS )((A68_BITS )((A68_BITS )(BDAACTR_dontpullbit|CDAACTR_dyprocbit)|DDAACTR_dyvardecbit)|EDAACTR_dydecbit);
 /* line 117: */
 /* line 118: */
ACXACTR_maskroutine = (A68_BITS )((A68_BITS )(FDAACTR_genprocbit|RCAACTR_globscopebit)|PCAACTR_valbit);
 /* line 119: */
 /* line 120: */
 /* line 121: */
 /* line 122: */
CCXACTR_maskxroutine = (A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )(NCAACTR_ccbit|OCAACTR_operatorbit)|PCAACTR_valbit)|QCAACTR_holebit)|RCAACTR_globscopebit)|FDAACTR_genprocbit);
 /* line 124: */
 /* line 145: */
 /* line 163: */
 /* line 602: */
A_PROC_EXIT(DECS mnemonics);
} 
#undef NL
/* end of translation of mnemonics.a68 */
