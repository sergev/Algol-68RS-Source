/* UNAME:SZWACTR */
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
extern void YMVACTR(void);   /* identifiers */
extern void UAAACTR(void);   /* incimperatives */
extern void IKAAOSF(void);   /* usefulops */
/* --- end of DECS initialisation functions --- */
static A68_115   WZWACTR = {"$Id: mnemonics.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,XZWACTR,WZWACTR,59)
static A68_117  YZWACTR_anonymous A_UNUSED;
static A68_40   LAXACTR = {"prio"}; 
A_GISVEC(A68_VC ,MAXACTR,LAXACTR,4)
static A68_40   NAXACTR = {"exit"}; 
A_GISVEC(A68_VC ,OAXACTR,NAXACTR,4)
static A68_40   PAXACTR = {"semi"}; 
A_GISVEC(A68_VC ,QAXACTR,PAXACTR,4)
static A68_40   RAXACTR = {"heap"}; 
A_GISVEC(A68_VC ,SAXACTR,RAXACTR,4)
static A68_121   TAXACTR = {"dec"}; 
A_GISVEC(A68_VC ,UAXACTR,TAXACTR,3)
static A68_122   VAXACTR = {"vardec"}; 
A_GISVEC(A68_VC ,WAXACTR,VAXACTR,6)
static A68_94   XAXACTR = {"compgen"}; 
A_GISVEC(A68_VC ,YAXACTR,XAXACTR,7)
static A68_123   ZAXACTR = {"elifouse"}; 
A_GISVEC(A68_VC ,ABXACTR,ZAXACTR,8)
static A68_121   BBXACTR = {"lab"}; 
A_GISVEC(A68_VC ,CBXACTR,BBXACTR,3)
static A68_123   DBXACTR = {"dontpull"}; 
A_GISVEC(A68_VC ,EBXACTR,DBXACTR,8)
static A68_122   FBXACTR = {"dyproc"}; 
A_GISVEC(A68_VC ,GBXACTR,FBXACTR,6)
static A68_123   HBXACTR = {"dyvardec"}; 
A_GISVEC(A68_VC ,IBXACTR,HBXACTR,8)
static A68_124   JBXACTR = {"dydec"}; 
A_GISVEC(A68_VC ,KBXACTR,JBXACTR,5)
static A68_94   LBXACTR = {"genproc"}; 
A_GISVEC(A68_VC ,MBXACTR,LBXACTR,7)
static A68_122   NBXACTR = {"locgen"}; 
A_GISVEC(A68_VC ,OBXACTR,NBXACTR,6)
static A68_123   PBXACTR = {"locdydec"}; 
A_GISVEC(A68_VC ,QBXACTR,PBXACTR,8)
static A68_120  SBXACTR_controlbits A_UNUSED;
static A68_126   UBXACTR = {"cc"}; 
A_GISVEC(A68_VC ,VBXACTR,UBXACTR,2)
static A68_123   WBXACTR = {"operator"}; 
A_GISVEC(A68_VC ,XBXACTR,WBXACTR,8)
static A68_121   YBXACTR = {"val"}; 
A_GISVEC(A68_VC ,ZBXACTR,YBXACTR,3)
static A68_40   ACXACTR = {"hole"}; 
A_GISVEC(A68_VC ,BCXACTR,ACXACTR,4)
static A68_94   CCXACTR = {"genproc"}; 
A_GISVEC(A68_VC ,DCXACTR,CCXACTR,7)
static A68_127   ECXACTR = {"globscope"}; 
A_GISVEC(A68_VC ,FCXACTR,ECXACTR,9)
static A68_120  HCXACTR_routinebits A_UNUSED;
static A68_BITS  ICXACTR_maskgeneral A_UNUSED;
static A68_BITS  JCXACTR_maskdynamica A_UNUSED;
#define KCXACTR_maskdynamicb BDAACTR_dontpullbit
static A68_BITS  LCXACTR_maskdynamicc A_UNUSED;
static A68_BITS  MCXACTR_maskroutine A_UNUSED;
#define NCXACTR_maskspecial ZCAACTR_elifousebit
static A68_BITS  OCXACTR_maskxroutine A_UNUSED;
#define PCXACTR_fieldlength 0
static A68_130   BDXACTR = {""}; 
A_GISVEC(A68_VC ,CDXACTR,BDXACTR,0)
static A68_130   LDXACTR = {""}; 
A_GISVEC(A68_VC ,MDXACTR,LDXACTR,0)
static A68_130   NDXACTR = {""}; 
A_GISVEC(A68_VC ,PDXACTR,NDXACTR,0)
static A68_127   QDXACTR = {" | bits ("}; 
A_GISVEC(A68_VC ,RDXACTR,QDXACTR,9)
static A68_132   CEXACTR = {"load:nse                  ("}; 
static A68_123   DEXACTR = {"EMPTY fn"}; 
A_GISVEC(A68_VC ,FEXACTR,DEXACTR,8)
static A68_94   GEXACTR = {"SKIP fn"}; 
A_GISVEC(A68_VC ,HEXACTR,GEXACTR,7)
static A68_122   IEXACTR = {"NIL fn"}; 
A_GISVEC(A68_VC ,JEXACTR,IEXACTR,6)
static A68_133   KEXACTR = {"ERROR: nse="}; 
A_GISVEC(A68_VC ,LEXACTR,KEXACTR,11)
A_GISVEC(A68_VC ,OEXACTR,CEXACTR,27)
static A68_132   QEXACTR = {"load:int                  ("}; 
static A68_126   REXACTR = {"=\""}; 
A_GISVEC(A68_VC ,SEXACTR,QEXACTR,27)
A_GISVEC(A68_VC ,UEXACTR,REXACTR,2)
static A68_132   YEXACTR = {"load:bool                 ("}; 
static A68_40   ZEXACTR = {"TRUE"}; 
A_GISVEC(A68_VC ,BFXACTR,ZEXACTR,4)
static A68_124   CFXACTR = {"FALSE"}; 
A_GISVEC(A68_VC ,DFXACTR,CFXACTR,5)
A_GISVEC(A68_VC ,EFXACTR,YEXACTR,27)
static A68_132   GFXACTR = {"load:char                 ("}; 
A_GISVEC(A68_VC ,HFXACTR,GFXACTR,27)
static A68_132   JFXACTR = {"load:labno                ("}; 
A_GISVEC(A68_VC ,KFXACTR,JFXACTR,27)
static A68_134   NFXACTR = {"load:number               (mode"}; 
static A68_135   OFXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,QFXACTR,OFXACTR,29)
static A68_136   SFXACTR = {" | number="}; 
A_GISVEC(A68_VC ,TFXACTR,NFXACTR,31)
A_GISVEC(A68_VC ,ZFXACTR,SFXACTR,10)
static A68_134   BGXACTR = {"load:alienx               (mode"}; 
static A68_135   CGXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,EGXACTR,CGXACTR,29)
static A68_137   GGXACTR = {" | string =\""}; 
A_GISVEC(A68_VC ,HGXACTR,BGXACTR,31)
A_GISVEC(A68_VC ,NGXACTR,GGXACTR,12)
static A68_134   QGXACTR = {"load:numeric denotation   (mode"}; 
static A68_135   RGXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,TGXACTR,RGXACTR,29)
static A68_138   VGXACTR = {" | denotation="}; 
A_GISVEC(A68_VC ,WGXACTR,QGXACTR,31)
A_GISVEC(A68_VC ,CHXACTR,VGXACTR,14)
static A68_134   FHXACTR = {"load:string denotation    (mode"}; 
static A68_135   GHXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,IHXACTR,GHXACTR,29)
static A68_139   KHXACTR = {" | denotation=\""}; 
A_GISVEC(A68_VC ,LHXACTR,FHXACTR,31)
A_GISVEC(A68_VC ,RHXACTR,KHXACTR,15)
static A68_140   THXACTR = {"ERROR: unknown LOAD imperative"}; 
A_GISVEC(A68_VC ,UHXACTR,THXACTR,30)
static A68_121   CIXACTR = {"UPB"}; 
A_GISVEC(A68_VC ,DIXACTR,CIXACTR,3)
static A68_121   EIXACTR = {"LWB"}; 
A_GISVEC(A68_VC ,FIXACTR,EIXACTR,3)
static A68_124   GIXACTR = {"ANDTH"}; 
A_GISVEC(A68_VC ,HIXACTR,GIXACTR,5)
static A68_40   IIXACTR = {"OREL"}; 
A_GISVEC(A68_VC ,JIXACTR,IIXACTR,4)
static A68_126   MIXACTR = {"<="}; 
A_GISVEC(A68_VC ,NIXACTR,MIXACTR,2)
static A68_126   OIXACTR = {">="}; 
A_GISVEC(A68_VC ,PIXACTR,OIXACTR,2)
static A68_126   RIXACTR = {"/="}; 
A_GISVEC(A68_VC ,SIXACTR,RIXACTR,2)
static A68_40   VIXACTR = {"OVER"}; 
A_GISVEC(A68_VC ,WIXACTR,VIXACTR,4)
static A68_121   XIXACTR = {"MOD"}; 
A_GISVEC(A68_VC ,YIXACTR,XIXACTR,3)
static A68_126   ZIXACTR = {"**"}; 
A_GISVEC(A68_VC ,AJXACTR,ZIXACTR,2)
static A68_121   CJXACTR = {"SHL"}; 
A_GISVEC(A68_VC ,DJXACTR,CJXACTR,3)
static A68_121   EJXACTR = {"SHR"}; 
A_GISVEC(A68_VC ,FJXACTR,EJXACTR,3)
static A68_40   GJXACTR = {"ELEM"}; 
A_GISVEC(A68_VC ,HJXACTR,GJXACTR,4)
static A68_122   IJXACTR = {"PLUSAB"}; 
A_GISVEC(A68_VC ,JJXACTR,IJXACTR,6)
static A68_94   KJXACTR = {"MINUSAB"}; 
A_GISVEC(A68_VC ,LJXACTR,KJXACTR,7)
static A68_94   MJXACTR = {"TIMESAB"}; 
A_GISVEC(A68_VC ,NJXACTR,MJXACTR,7)
static A68_122   OJXACTR = {"OVERAB"}; 
A_GISVEC(A68_VC ,PJXACTR,OJXACTR,6)
static A68_124   QJXACTR = {"MODAB"}; 
A_GISVEC(A68_VC ,RJXACTR,QJXACTR,5)
static A68_124   SJXACTR = {"DIVAB"}; 
A_GISVEC(A68_VC ,TJXACTR,SJXACTR,5)
static A68_126   UJXACTR = {"IS"}; 
A_GISVEC(A68_VC ,VJXACTR,UJXACTR,2)
static A68_40   WJXACTR = {"ISNT"}; 
A_GISVEC(A68_VC ,XJXACTR,WJXACTR,4)
static A68_121   YJXACTR = {"AND"}; 
A_GISVEC(A68_VC ,ZJXACTR,YJXACTR,3)
static A68_126   AKXACTR = {"OR"}; 
A_GISVEC(A68_VC ,BKXACTR,AKXACTR,2)
static A68_122   CKXACTR = {"PLUSTO"}; 
A_GISVEC(A68_VC ,DKXACTR,CKXACTR,6)
static A68_124   EKXACTR = {"CYCLE"}; 
A_GISVEC(A68_VC ,FKXACTR,EKXACTR,5)
static A68_141   GKXACTR = {"not in standard prelude"}; 
A_GISVEC(A68_VC ,HKXACTR,GKXACTR,23)
static A68_135   KKXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,MKXACTR,KKXACTR,29)
static A68_140   UKXACTR = {"oper                      (fn="}; 
static A68_141   VKXACTR = {"statgrab | 1 operand | "}; 
static A68_142   WKXACTR = {"local generation"}; 
A_GISVEC(A68_VC ,YKXACTR,WKXACTR,16)
static A68_139   ZKXACTR = {"heap generation"}; 
A_GISVEC(A68_VC ,ALXACTR,ZKXACTR,15)
A_GISVEC(A68_VC ,CLXACTR,VKXACTR,23)
static A68_137   DLXACTR = {"parampack | "}; 
static A68_143   ELXACTR = {" operands | mode of proc"}; 
A_GISVEC(A68_VC ,FLXACTR,DLXACTR,12)
A_GISVEC(A68_VC ,GLXACTR,ELXACTR,24)
static A68_144   HLXACTR = {"select | 1 operand | "}; 
static A68_145   ILXACTR = {"th field | result mode"}; 
A_GISVEC(A68_VC ,JLXACTR,HLXACTR,21)
A_GISVEC(A68_VC ,KLXACTR,ILXACTR,22)
static A68_140   LLXACTR = {"copy | 1 operand | result mode"}; 
A_GISVEC(A68_VC ,MLXACTR,LLXACTR,30)
static A68_94   NLXACTR = {"trim | "}; 
static A68_137   OLXACTR = {" operands | "}; 
static A68_126   SLXACTR = {"a:"}; 
A_GISVEC(A68_VC ,ULXACTR,SLXACTR,2)
static A68_126   VLXACTR = {":b"}; 
A_GISVEC(A68_VC ,WLXACTR,VLXACTR,2)
static A68_121   XLXACTR = {"a:b"}; 
A_GISVEC(A68_VC ,YLXACTR,XLXACTR,3)
static A68_126   ZLXACTR = {"@c"}; 
A_GISVEC(A68_VC ,AMXACTR,ZLXACTR,2)
static A68_40   BMXACTR = {"a:@c"}; 
A_GISVEC(A68_VC ,CMXACTR,BMXACTR,4)
static A68_40   DMXACTR = {":b@c"}; 
A_GISVEC(A68_VC ,EMXACTR,DMXACTR,4)
static A68_124   FMXACTR = {"a:b@c"}; 
A_GISVEC(A68_VC ,GMXACTR,FMXACTR,5)
static A68_130   HMXACTR = {""}; 
A_GISVEC(A68_VC ,IMXACTR,HMXACTR,0)
static A68_136   JMXACTR = {" (set LWB)"}; 
A_GISVEC(A68_VC ,LMXACTR,JMXACTR,10)
static A68_130   MMXACTR = {""}; 
A_GISVEC(A68_VC ,NMXACTR,MMXACTR,0)
A_GISVEC(A68_VC ,OMXACTR,NLXACTR,7)
A_GISVEC(A68_VC ,PMXACTR,OLXACTR,12)
static A68_139   QMXACTR = {"simple index | "}; 
static A68_137   RMXACTR = {" operands | "}; 
static A68_146   SMXACTR = {" subscripts | result mode"}; 
A_GISVEC(A68_VC ,TMXACTR,QMXACTR,15)
A_GISVEC(A68_VC ,VMXACTR,RMXACTR,12)
A_GISVEC(A68_VC ,WMXACTR,SMXACTR,25)
static A68_147   XMXACTR = {"trim index | "}; 
static A68_141   YMXACTR = {" operands | result mode"}; 
A_GISVEC(A68_VC ,ZMXACTR,XMXACTR,13)
A_GISVEC(A68_VC ,BNXACTR,YMXACTR,23)
static A68_148   CNXACTR = {"dyngrab | 2 operands | result mode"}; 
A_GISVEC(A68_VC ,DNXACTR,CNXACTR,34)
static A68_147   ENXACTR = {"bound pack | "}; 
static A68_141   FNXACTR = {" operands | result mode"}; 
A_GISVEC(A68_VC ,GNXACTR,ENXACTR,13)
A_GISVEC(A68_VC ,HNXACTR,FNXACTR,23)
static A68_144   INXACTR = {"dyadic op | opnumber="}; 
static A68_126   JNXACTR = {"=\""}; 
static A68_137   KNXACTR = {"\" | version="}; 
static A68_138   LNXACTR = {" | result mode"}; 
A_GISVEC(A68_VC ,MNXACTR,INXACTR,21)
A_GISVEC(A68_VC ,ONXACTR,JNXACTR,2)
A_GISVEC(A68_VC ,QNXACTR,KNXACTR,12)
A_GISVEC(A68_VC ,VNXACTR,LNXACTR,14)
static A68_145   WNXACTR = {"monadic op | opnumber="}; 
static A68_126   XNXACTR = {"=\""}; 
static A68_121   BOXACTR = {"UPB"}; 
A_GISVEC(A68_VC ,COXACTR,BOXACTR,3)
static A68_121   DOXACTR = {"LWB"}; 
A_GISVEC(A68_VC ,EOXACTR,DOXACTR,3)
static A68_121   FOXACTR = {"NOT"}; 
A_GISVEC(A68_VC ,GOXACTR,FOXACTR,3)
static A68_121   HOXACTR = {"ABS"}; 
A_GISVEC(A68_VC ,IOXACTR,HOXACTR,3)
static A68_121   JOXACTR = {"BIN"}; 
A_GISVEC(A68_VC ,KOXACTR,JOXACTR,3)
static A68_40   LOXACTR = {"REPR"}; 
A_GISVEC(A68_VC ,MOXACTR,LOXACTR,4)
static A68_40   NOXACTR = {"LENG"}; 
A_GISVEC(A68_VC ,OOXACTR,NOXACTR,4)
static A68_94   POXACTR = {"SHORTEN"}; 
A_GISVEC(A68_VC ,QOXACTR,POXACTR,7)
static A68_121   ROXACTR = {"ODD"}; 
A_GISVEC(A68_VC ,SOXACTR,ROXACTR,3)
static A68_40   TOXACTR = {"SIGN"}; 
A_GISVEC(A68_VC ,UOXACTR,TOXACTR,4)
static A68_124   VOXACTR = {"ROUND"}; 
A_GISVEC(A68_VC ,WOXACTR,VOXACTR,5)
static A68_122   XOXACTR = {"ENTIER"}; 
A_GISVEC(A68_VC ,YOXACTR,XOXACTR,6)
static A68_126   ZOXACTR = {"RE"}; 
A_GISVEC(A68_VC ,APXACTR,ZOXACTR,2)
static A68_126   BPXACTR = {"IM"}; 
A_GISVEC(A68_VC ,CPXACTR,BPXACTR,2)
static A68_121   DPXACTR = {"ARG"}; 
A_GISVEC(A68_VC ,EPXACTR,DPXACTR,3)
static A68_40   FPXACTR = {"CONJ"}; 
A_GISVEC(A68_VC ,GPXACTR,FPXACTR,4)
static A68_141   HPXACTR = {"not in standard prelude"}; 
A_GISVEC(A68_VC ,IPXACTR,HPXACTR,23)
static A68_137   JPXACTR = {"\" | version="}; 
static A68_138   KPXACTR = {" | result mode"}; 
A_GISVEC(A68_VC ,LPXACTR,WNXACTR,22)
A_GISVEC(A68_VC ,NPXACTR,XNXACTR,2)
A_GISVEC(A68_VC ,OPXACTR,JPXACTR,12)
A_GISVEC(A68_VC ,TPXACTR,KPXACTR,14)
static A68_144   UPXACTR = {"straight | 2 operands"}; 
static A68_149   VPXACTR = {" | mode of original="}; 
static A68_124   WPXACTR = {"UNION"}; 
A_GISVEC(A68_VC ,YPXACTR,WPXACTR,5)
static A68_122   ZPXACTR = {"VECTOR"}; 
A_GISVEC(A68_VC ,AQXACTR,ZPXACTR,6)
static A68_150   BQXACTR = {"STRUCT or I-STRUCT"}; 
A_GISVEC(A68_VC ,CQXACTR,BQXACTR,18)
static A68_123   DQXACTR = {"ARRY of "}; 
static A68_133   EQXACTR = {" dimensions"}; 
A_GISVEC(A68_VC ,FQXACTR,DQXACTR,8)
A_GISVEC(A68_VC ,HQXACTR,EQXACTR,11)
A_GISVEC(A68_VC ,IQXACTR,UPXACTR,21)
A_GISVEC(A68_VC ,JQXACTR,VPXACTR,20)
static A68_151   KQXACTR = {"prestraight | 1 operand | result mode"}; 
A_GISVEC(A68_VC ,LQXACTR,KQXACTR,37)
static A68_152   MQXACTR = {"strindex | 2 operands | result mode"}; 
A_GISVEC(A68_VC ,NQXACTR,MQXACTR,35)
static A68_153   OQXACTR = {"assign | 2 operands | param="}; 
static A68_138   PQXACTR = {" | result mode"}; 
A_GISVEC(A68_VC ,QQXACTR,OQXACTR,28)
A_GISVEC(A68_VC ,RQXACTR,PQXACTR,14)
static A68_154   SQXACTR = {"default bound | no operands | result mode"}; 
A_GISVEC(A68_VC ,TQXACTR,SQXACTR,41)
static A68_155   UQXACTR = {"deref | result mode"}; 
A_GISVEC(A68_VC ,VQXACTR,UQXACTR,19)
static A68_150   WQXACTR = {"call | result mode"}; 
static A68_156   XQXACTR = {" | not operator or generator routine"}; 
A_GISVEC(A68_VC ,ZQXACTR,XQXACTR,36)
static A68_157   ARXACTR = {" | invented local space generator"}; 
A_GISVEC(A68_VC ,BRXACTR,ARXACTR,33)
static A68_158   CRXACTR = {" | invented heap space generator"}; 
A_GISVEC(A68_VC ,DRXACTR,CRXACTR,32)
static A68_159   ERXACTR = {" | invented space generator within one"}; 
A_GISVEC(A68_VC ,FRXACTR,ERXACTR,38)
static A68_148   GRXACTR = {" | user defined or library routine"}; 
A_GISVEC(A68_VC ,HRXACTR,GRXACTR,34)
static A68_160   IRXACTR = {"ERROR: unknown PARAM field"}; 
A_GISVEC(A68_VC ,JRXACTR,IRXACTR,26)
A_GISVEC(A68_VC ,KRXACTR,WQXACTR,18)
static A68_40   LRXACTR = {"VOID"}; 
A_GISVEC(A68_VC ,MRXACTR,LRXACTR,4)
static A68_94   NRXACTR = {"NIL to "}; 
A_GISVEC(A68_VC ,ORXACTR,NRXACTR,7)
static A68_143   PRXACTR = {"GOTO | procedure to mode"}; 
A_GISVEC(A68_VC ,QRXACTR,PRXACTR,24)
static A68_144   RRXACTR = {"GOTO | coerce to mode"}; 
A_GISVEC(A68_VC ,SRXACTR,RRXACTR,21)
static A68_132   TRXACTR = {"REAL to COMPL | result mode"}; 
A_GISVEC(A68_VC ,URXACTR,TRXACTR,27)
static A68_146   VRXACTR = {"INT to REAL | result mode"}; 
A_GISVEC(A68_VC ,WRXACTR,VRXACTR,25)
static A68_150   XRXACTR = {"xxib | result mode"}; 
A_GISVEC(A68_VC ,YRXACTR,XRXACTR,18)
static A68_153   ZRXACTR = {"ARRAY to ARRAY | result mode"}; 
A_GISVEC(A68_VC ,ASXACTR,ZRXACTR,28)
static A68_135   BSXACTR = {"VECTOR to ARRAY | result mode"}; 
A_GISVEC(A68_VC ,CSXACTR,BSXACTR,29)
static A68_158   DSXACTR = {"I-STRUCT to VECTOR | result mode"}; 
A_GISVEC(A68_VC ,ESXACTR,DSXACTR,32)
static A68_145   FSXACTR = {"1 STRUCT | result mode"}; 
A_GISVEC(A68_VC ,GSXACTR,FSXACTR,22)
static A68_135   HSXACTR = {"unite | non UNION operand to "}; 
static A68_133   ISXACTR = {"th mode of "}; 
A_GISVEC(A68_VC ,JSXACTR,HSXACTR,29)
A_GISVEC(A68_VC ,KSXACTR,ISXACTR,11)
static A68_140   LSXACTR = {"uniteu | UNION operand to mode"}; 
A_GISVEC(A68_VC ,MSXACTR,LSXACTR,30)
static A68_150   NSXACTR = {"isarr | coerce to "}; 
static A68_158   OSXACTR = {" dimensional array | result mode"}; 
A_GISVEC(A68_VC ,PSXACTR,NSXACTR,18)
A_GISVEC(A68_VC ,QSXACTR,OSXACTR,32)
static A68_123   RSXACTR = {"SKIP to "}; 
A_GISVEC(A68_VC ,SSXACTR,RSXACTR,8)
static A68_149   TSXACTR = {"to VEC | result mode"}; 
A_GISVEC(A68_VC ,USXACTR,TSXACTR,20)
static A68_145   VSXACTR = {"to ARRAY | result mode"}; 
A_GISVEC(A68_VC ,WSXACTR,VSXACTR,22)
static A68_133   XSXACTR = {"deunite to "}; 
A_GISVEC(A68_VC ,YSXACTR,XSXACTR,11)
static A68_140   ZSXACTR = {"BITS to VEC BOOL | result mode"}; 
A_GISVEC(A68_VC ,ATXACTR,ZSXACTR,30)
static A68_146   BTXACTR = {"vacuum | coerce EMPTY to "}; 
A_GISVEC(A68_VC ,CTXACTR,BTXACTR,25)
static A68_136   DTXACTR = {"Y TYPE to "}; 
A_GISVEC(A68_VC ,ETXACTR,DTXACTR,10)
static A68_127   FTXACTR = {"to X TYPE"}; 
A_GISVEC(A68_VC ,GTXACTR,FTXACTR,9)
static A68_142   HTXACTR = {"static generator"}; 
A_GISVEC(A68_VC ,ITXACTR,HTXACTR,16)
static A68_122   JTXACTR = {"format"}; 
A_GISVEC(A68_VC ,KTXACTR,JTXACTR,6)
static A68_124   LTXACTR = {"SPARE"}; 
A_GISVEC(A68_VC ,MTXACTR,LTXACTR,5)
A_GISVEC(A68_VC ,NTXACTR,UKXACTR,30)
static A68_132   PTXACTR = {"transiddec                ("}; 
static A68_149   QTXACTR = {"identity declaration"}; 
A_GISVEC(A68_VC ,STXACTR,QTXACTR,20)
static A68_149   TTXACTR = {"variable declaration"}; 
A_GISVEC(A68_VC ,UTXACTR,TTXACTR,20)
static A68_142   VTXACTR = {"formal parameter"}; 
A_GISVEC(A68_VC ,WTXACTR,VTXACTR,16)
static A68_133   XTXACTR = {"FOR control"}; 
A_GISVEC(A68_VC ,YTXACTR,XTXACTR,11)
static A68_149   ZTXACTR = {"initialised variable"}; 
A_GISVEC(A68_VC ,AUXACTR,ZTXACTR,20)
static A68_153   BUXACTR = {"formal conformity identifier"}; 
A_GISVEC(A68_VC ,CUXACTR,BUXACTR,28)
static A68_138   DUXACTR = {"FORALL control"}; 
A_GISVEC(A68_VC ,EUXACTR,DUXACTR,14)
static A68_161   FUXACTR = {"dummy declaration"}; 
A_GISVEC(A68_VC ,GUXACTR,FUXACTR,17)
static A68_134   HUXACTR = {"ERROR: unknown TRANSIDDEC type="}; 
A_GISVEC(A68_VC ,IUXACTR,HUXACTR,31)
static A68_127   KUXACTR = {" | name=\""}; 
static A68_123   LUXACTR = {"\" | mode"}; 
static A68_135   MUXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,OUXACTR,MUXACTR,29)
static A68_127   QUXACTR = {" | decno="}; 
A_GISVEC(A68_VC ,RUXACTR,PTXACTR,27)
A_GISVEC(A68_VC ,SUXACTR,KUXACTR,9)
A_GISVEC(A68_VC ,TUXACTR,LUXACTR,8)
A_GISVEC(A68_VC ,ZUXACTR,QUXACTR,9)
static A68_157   CVXACTR = {"routine                   (name=\""}; 
static A68_94   DVXACTR = {" | mode"}; 
static A68_135   EVXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,GVXACTR,EVXACTR,29)
static A68_135   IVXACTR = {" | proc of unlimited lifetime"}; 
A_GISVEC(A68_VC ,KVXACTR,IVXACTR,29)
static A68_162   LVXACTR = {" | only external id is declared in CONTEXT VOID module"}; 
A_GISVEC(A68_VC ,MVXACTR,LVXACTR,54)
static A68_163   NVXACTR = {" | decno of external id with smallest lifetime="}; 
static A68_126   OVXACTR = {"=\""}; 
A_GISVEC(A68_VC ,PVXACTR,NVXACTR,47)
A_GISVEC(A68_VC ,RVXACTR,OVXACTR,2)
static A68_136   UVXACTR = {" | rdenno="}; 
A_GISVEC(A68_VC ,VVXACTR,CVXACTR,33)
A_GISVEC(A68_VC ,YVXACTR,DVXACTR,7)
A_GISVEC(A68_VC ,EWXACTR,UVXACTR,10)
static A68_132   HWXACTR = {"warn                      ("}; 
static A68_122   IWXACTR = {"assign"}; 
A_GISVEC(A68_VC ,KWXACTR,IWXACTR,6)
static A68_124   LWXACTR = {"ANDTH"}; 
A_GISVEC(A68_VC ,MWXACTR,LWXACTR,5)
static A68_40   NWXACTR = {"OREL"}; 
A_GISVEC(A68_VC ,OWXACTR,NWXACTR,4)
static A68_124   PWXACTR = {"index"}; 
A_GISVEC(A68_VC ,QWXACTR,PWXACTR,5)
static A68_136   RWXACTR = {"PLUSAB etc"}; 
A_GISVEC(A68_VC ,SWXACTR,RWXACTR,10)
static A68_122   TWXACTR = {"FORALL"}; 
A_GISVEC(A68_VC ,UWXACTR,TWXACTR,6)
static A68_40   VWXACTR = {"loop"}; 
A_GISVEC(A68_VC ,WWXACTR,VWXACTR,4)
static A68_146   XWXACTR = {"ERROR: unknown WARN field"}; 
A_GISVEC(A68_VC ,YWXACTR,XWXACTR,25)
A_GISVEC(A68_VC ,ZWXACTR,HWXACTR,27)
static A68_157   BXXACTR = {"labdec                    (name=\""}; 
static A68_130   FXXACTR = {""}; 
A_GISVEC(A68_VC ,HXXACTR,FXXACTR,0)
static A68_157   IXXACTR = {" | at start serial clause; labno="}; 
A_GISVEC(A68_VC ,KXXACTR,IXXACTR,33)
static A68_115   MXXACTR = {"at start user written routine; GOTO external label | labno="}; 
A_GISVEC(A68_VC ,NXXACTR,MXXACTR,59)
static A68_127   PXXACTR = {" | labno "}; 
static A68_161   QXXACTR = {" is redefined as "}; 
A_GISVEC(A68_VC ,RXXACTR,PXXACTR,9)
A_GISVEC(A68_VC ,TXXACTR,QXXACTR,17)
static A68_157   VXXACTR = {" | actual label setting of labno="}; 
A_GISVEC(A68_VC ,WXXACTR,VXXACTR,33)
A_GISVEC(A68_VC ,YXXACTR,BXXACTR,33)
static A68_134   BYXACTR = {"uchoice                   (mode"}; 
static A68_135   CYXACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,EYXACTR,CYXACTR,29)
static A68_127   GYXACTR = {" | param="}; 
A_GISVEC(A68_VC ,HYXACTR,BYXACTR,31)
A_GISVEC(A68_VC ,OYXACTR,GYXACTR,9)
static A68_132   RYXACTR = {"callmodule                ("}; 
A_GISVEC(A68_VC ,SYXACTR,RYXACTR,27)
static A68_157   VYXACTR = {"keeps                     (start="}; 
static A68_40   WYXACTR = {"TRUE"}; 
A_GISVEC(A68_VC ,YYXACTR,WYXACTR,4)
static A68_124   ZYXACTR = {"FALSE"}; 
A_GISVEC(A68_VC ,AZXACTR,ZYXACTR,5)
A_GISVEC(A68_VC ,BZXACTR,VYXACTR,33)
static A68_160   DZXACTR = {"load:code                 "}; 
static A68_94   EZXACTR = {"( mode="}; 
static A68_138   FZXACTR = {" | parameters="}; 
static A68_126   GZXACTR = {" )"}; 
A_GISVEC(A68_VC ,HZXACTR,DZXACTR,26)
A_GISVEC(A68_VC ,IZXACTR,EZXACTR,7)
A_GISVEC(A68_VC ,KZXACTR,FZXACTR,14)
A_GISVEC(A68_VC ,MZXACTR,GZXACTR,2)
static A68_154   OZXACTR = {"formatx                   (info=(nochars="}; 
static A68_133   PZXACTR = {" | nocases="}; 
static A68_139   QZXACTR = {" | max nesting="}; 
static A68_127   RZXACTR = {") | text="}; 
A_GISVEC(A68_VC ,SZXACTR,OZXACTR,41)
A_GISVEC(A68_VC ,UZXACTR,PZXACTR,11)
A_GISVEC(A68_VC ,WZXACTR,QZXACTR,15)
A_GISVEC(A68_VC ,YZXACTR,RZXACTR,9)
static A68_157   ZZXACTR = {"ERROR: unknown PRIMARY imperative"}; 
A_GISVEC(A68_VC ,AAYACTR,ZZXACTR,33)
static A68_132   CAYACTR = {"separator                 ("}; 
static A68_40   DAYACTR = {"THEN"}; 
A_GISVEC(A68_VC ,FAYACTR,DAYACTR,4)
static A68_126   GAYACTR = {"IN"}; 
A_GISVEC(A68_VC ,HAYACTR,GAYACTR,2)
static A68_121   IAYACTR = {"INu"}; 
A_GISVEC(A68_VC ,JAYACTR,IAYACTR,3)
static A68_123   KAYACTR = {"ic comma"}; 
A_GISVEC(A68_VC ,LAYACTR,KAYACTR,8)
static A68_123   MAYACTR = {"cc comma"}; 
A_GISVEC(A68_VC ,NAYACTR,MAYACTR,8)
static A68_40   OAYACTR = {"EXIT"}; 
A_GISVEC(A68_VC ,PAYACTR,OAYACTR,4)
static A68_121   QAYACTR = {"OUT"}; 
A_GISVEC(A68_VC ,RAYACTR,QAYACTR,3)
static A68_40   SAYACTR = {"OUTu"}; 
A_GISVEC(A68_VC ,TAYACTR,SAYACTR,4)
static A68_40   UAYACTR = {"ELSE"}; 
A_GISVEC(A68_VC ,VAYACTR,UAYACTR,4)
static A68_136   WAYACTR = {"coll comma"}; 
A_GISVEC(A68_VC ,XAYACTR,WAYACTR,10)
static A68_40   YAYACTR = {"semi"}; 
A_GISVEC(A68_VC ,ZAYACTR,YAYACTR,4)
static A68_126   ABYACTR = {"DO"}; 
A_GISVEC(A68_VC ,BBYACTR,ABYACTR,2)
static A68_124   CBYACTR = {"WHILE"}; 
A_GISVEC(A68_VC ,DBYACTR,CBYACTR,5)
static A68_153   EBYACTR = {"ERROR: unknown SEPARATOR fn="}; 
A_GISVEC(A68_VC ,FBYACTR,EBYACTR,28)
static A68_135   HBYACTR = {" | mode & param are undefined"}; 
A_GISVEC(A68_VC ,JBYACTR,HBYACTR,29)
static A68_94   KBYACTR = {" | mode"}; 
static A68_135   LBYACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,NBYACTR,LBYACTR,29)
static A68_127   PBYACTR = {" | param="}; 
A_GISVEC(A68_VC ,QBYACTR,KBYACTR,7)
A_GISVEC(A68_VC ,WBYACTR,PBYACTR,9)
A_GISVEC(A68_VC ,YBYACTR,CAYACTR,27)
static A68_132   BCYACTR = {"starter                   ("}; 
static A68_94   CCYACTR = {"routine"}; 
A_GISVEC(A68_VC ,ECYACTR,CCYACTR,7)
static A68_40   FCYACTR = {"decs"}; 
A_GISVEC(A68_VC ,GCYACTR,FCYACTR,4)
static A68_123   HCYACTR = {"IF/WHILE"}; 
A_GISVEC(A68_VC ,ICYACTR,HCYACTR,8)
static A68_40   JCYACTR = {"CASE"}; 
A_GISVEC(A68_VC ,KCYACTR,JCYACTR,4)
static A68_124   LCYACTR = {"CASEu"}; 
A_GISVEC(A68_VC ,MCYACTR,LCYACTR,5)
static A68_124   NCYACTR = {"BEGIN"}; 
A_GISVEC(A68_VC ,OCYACTR,NCYACTR,5)
static A68_136   PCYACTR = {"coll BEGIN"}; 
A_GISVEC(A68_VC ,QCYACTR,PCYACTR,10)
static A68_121   RCYACTR = {"FOR"}; 
A_GISVEC(A68_VC ,SCYACTR,RCYACTR,3)
static A68_122   TCYACTR = {"FORALL"}; 
A_GISVEC(A68_VC ,UCYACTR,TCYACTR,6)
static A68_160   VCYACTR = {"ERROR: unknown STARTER fn="}; 
A_GISVEC(A68_VC ,WCYACTR,VCYACTR,26)
static A68_94   YCYACTR = {" | mode"}; 
static A68_135   ZCYACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,BDYACTR,ZCYACTR,29)
static A68_138   DDYACTR = {" | result mode"}; 
static A68_135   EDYACTR = {" (of surrounding clause too)="}; 
A_GISVEC(A68_VC ,GDYACTR,EDYACTR,29)
static A68_127   IDYACTR = {"undefined"}; 
A_GISVEC(A68_VC ,KDYACTR,IDYACTR,9)
A_GISVEC(A68_VC ,QDYACTR,BCYACTR,27)
A_GISVEC(A68_VC ,SDYACTR,YCYACTR,7)
A_GISVEC(A68_VC ,YDYACTR,DDYACTR,14)
static A68_132   AEYACTR = {"terminator                ("}; 
static A68_126   BEYACTR = {"FI"}; 
A_GISVEC(A68_VC ,DEYACTR,BEYACTR,2)
static A68_40   EEYACTR = {"ESAC"}; 
A_GISVEC(A68_VC ,FEYACTR,EEYACTR,4)
static A68_124   GEYACTR = {"ESACu"}; 
A_GISVEC(A68_VC ,HEYACTR,GEYACTR,5)
static A68_121   IEYACTR = {"END"}; 
A_GISVEC(A68_VC ,JEYACTR,IEYACTR,3)
static A68_123   KEYACTR = {"coll END"}; 
A_GISVEC(A68_VC ,LEYACTR,KEYACTR,8)
static A68_126   MEYACTR = {"OD"}; 
A_GISVEC(A68_VC ,NEYACTR,MEYACTR,2)
static A68_133   OEYACTR = {"routine end"}; 
A_GISVEC(A68_VC ,PEYACTR,OEYACTR,11)
static A68_122   QEYACTR = {"FINISH"}; 
A_GISVEC(A68_VC ,REYACTR,QEYACTR,6)
static A68_123   SEYACTR = {"opt bool"}; 
A_GISVEC(A68_VC ,TEYACTR,SEYACTR,8)
static A68_135   UEYACTR = {"ERROR: unknown TERMINATOR fn="}; 
A_GISVEC(A68_VC ,VEYACTR,UEYACTR,29)
A_GISVEC(A68_VC ,XEYACTR,AEYACTR,27)
static A68_158   CFYACTR = {"composer:closure          (body="}; 
static A68_137   DFYACTR = {" | moduleno="}; 
A_GISVEC(A68_VC ,EFYACTR,CFYACTR,32)
A_GISVEC(A68_VC ,GFYACTR,DFYACTR,12)
static A68_156   JFYACTR = {"composer:synthetic module (moduleno="}; 
static A68_124   KFYACTR = {" | i="}; 
static A68_124   LFYACTR = {" | j="}; 
A_GISVEC(A68_VC ,MFYACTR,JFYACTR,36)
A_GISVEC(A68_VC ,OFYACTR,KFYACTR,5)
A_GISVEC(A68_VC ,QFYACTR,LFYACTR,5)
static A68_156   TFYACTR = {"composer:extern module    (moduleno="}; 
static A68_127   UFYACTR = {" | name=\""}; 
static A68_133   VFYACTR = {"\" | uname=\""}; 
static A68_133   WFYACTR = {"\" | lname=\""}; 
static A68_133   XFYACTR = {"\" | gname=\""}; 
A_GISVEC(A68_VC ,YFYACTR,TFYACTR,36)
A_GISVEC(A68_VC ,AGYACTR,UFYACTR,9)
A_GISVEC(A68_VC ,BGYACTR,VFYACTR,11)
A_GISVEC(A68_VC ,CGYACTR,WFYACTR,11)
A_GISVEC(A68_VC ,DGYACTR,XFYACTR,11)
static A68_148   FGYACTR = {"ERROR: unknown COMPOSER imperative"}; 
A_GISVEC(A68_VC ,GGYACTR,FGYACTR,34)
static A68_40   HGYACTR = {"VOID"}; 
A_GISVEC(A68_VC ,IGYACTR,HGYACTR,4)
static A68_146   JGYACTR = {"ERROR: unknown imperative"}; 
A_GISVEC(A68_VC ,KGYACTR,JGYACTR,25)
typedef struct   /* env of non-global proc */
{
int dummy;
} WCXACTR_generator;

A_STATIC A68_VOID  AAXACTR_generator(A68_BOOL  ZZWACTR_anonymous, A68_116  *ReturnedValue);

A_STATIC A68_VOID  CAXACTR_generator(A68_BOOL  BAXACTR_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  SCXACTR_bitmnemonic(A68_BITS  Props, A68_BOOL  Whichxbit, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  VCXACTR_generator(A68_BOOL  TCXACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  VDXACTR_imperativemnemonic(A68_67  Imperative, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  YHXACTR_standardpreludeops(A68_INT  Opnumber, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  CAXACTR_generator(A68_BOOL  BAXACTR_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  DAXACTR;  /* clause result */
A68_VC  EAXACTR;  /* OPERATORS - dynamic generator */
{ 
EAXACTR.upb = 0 ;
( BAXACTR_anonymous? A_VLOC(A68_CHAR ,EAXACTR): A_VHEAP(A68_CHAR ,EAXACTR) );
DAXACTR = EAXACTR;
} 
*ReturnedValue = (DAXACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  VCXACTR_generator(A68_BOOL  TCXACTR_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((WCXACTR_generator *)NonLocals)->x)
{ 
A68_VC  XCXACTR;  /* clause result */
A68_VC  YCXACTR;  /* OPERATORS - dynamic generator */
{ 
YCXACTR.upb = 0 ;
( TCXACTR_anonymous? A_VLOC(A68_CHAR ,YCXACTR): A_VHEAP(A68_CHAR ,YCXACTR) );
XCXACTR = YCXACTR;
} 
*ReturnedValue = (XCXACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  YHXACTR_standardpreludeops(A68_INT  Opnumber, A68_VC  *ReturnedValue)
{ 
A68_VC  ZHXACTR;  /* clause result */
A68_VC  AIXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  BIXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  KIXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  LIXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  QIXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  TIXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  UIXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  BJXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(standardpreludeops);
 /* line 244: */
 /* line 245: */
switch ( Opnumber )
{ 
case 1: 
ZHXACTR = A_HVEC(AIXACTR,'+',A68_CHAR );
break;
case 2: 
ZHXACTR = A_HVEC(BIXACTR,'-',A68_CHAR );
break;
case 3: 
ZHXACTR = DIXACTR;
break;
case 4: 
ZHXACTR = FIXACTR;
break;
case 5: 
 /* line 246: */
ZHXACTR = HIXACTR;
break;
case 6: 
ZHXACTR = JIXACTR;
break;
case 7: 
ZHXACTR = A_HVEC(KIXACTR,'<',A68_CHAR );
break;
case 8: 
ZHXACTR = A_HVEC(LIXACTR,'>',A68_CHAR );
break;
case 9: 
ZHXACTR = NIXACTR;
break;
case 10: 
 /* line 247: */
ZHXACTR = PIXACTR;
break;
case 11: 
ZHXACTR = A_HVEC(QIXACTR,'=',A68_CHAR );
break;
case 12: 
ZHXACTR = SIXACTR;
break;
case 13: 
ZHXACTR = A_HVEC(TIXACTR,'*',A68_CHAR );
break;
case 14: 
ZHXACTR = A_HVEC(UIXACTR,'/',A68_CHAR );
break;
case 15: 
 /* line 248: */
ZHXACTR = WIXACTR;
break;
case 16: 
ZHXACTR = YIXACTR;
break;
case 17: 
ZHXACTR = AJXACTR;
break;
case 18: 
ZHXACTR = A_HVEC(BJXACTR,'I',A68_CHAR );
break;
case 19: 
ZHXACTR = DJXACTR;
break;
case 20: 
 /* line 249: */
ZHXACTR = FJXACTR;
break;
case 21: 
ZHXACTR = HJXACTR;
break;
case 22: 
ZHXACTR = JJXACTR;
break;
case 23: 
ZHXACTR = LJXACTR;
break;
case 24: 
ZHXACTR = NJXACTR;
break;
case 25: 
 /* line 250: */
ZHXACTR = PJXACTR;
break;
case 26: 
ZHXACTR = RJXACTR;
break;
case 27: 
ZHXACTR = TJXACTR;
break;
case 28: 
ZHXACTR = VJXACTR;
break;
case 29: 
ZHXACTR = XJXACTR;
break;
case 30: 
 /* line 251: */
ZHXACTR = ZJXACTR;
break;
case 31: 
ZHXACTR = BKXACTR;
break;
case 32: 
 /* line 252: */
ZHXACTR = DKXACTR;
break;
case 33: 
 /* line 253: */
ZHXACTR = FKXACTR;
break;
default: 
ZHXACTR = HKXACTR;
break;
} 
A_PROC_EXIT(standardpreludeops);
*ReturnedValue = (ZHXACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  AAXACTR_generator(A68_BOOL  ZZWACTR_anonymous, A68_116  *ReturnedValue)
{ 
A68_119  FAXACTR_anonymous A_UNUSED = {0};
A68_VC  GAXACTR;  /* avoid structure result */
A68_118 * HAXACTR;  /* YIELD */
A68_116  IAXACTR;  /* clause result */
{ 
CAXACTR_generator( ZZWACTR_anonymous, &GAXACTR );
HAXACTR = (&(A_NILCHECK((&FAXACTR_anonymous))->Name)) ;
(*A_NILCHECK(HAXACTR)) = GAXACTR;
IAXACTR = FAXACTR_anonymous;
} 
*ReturnedValue = (IAXACTR);
return;
} 
#undef NL

A_STATIC A68_VOID  SCXACTR_bitmnemonic(A68_BITS  Props, A68_BOOL  Whichxbit, A68_VC  *ReturnedValue)
{ 
A68_110  UCXACTR_generator;   /* proc value of non-global proc */
A68_118  ADXACTR;  /* avoid structure result */
A68_118  ZCXACTR_output A_UNUSED = {0};
A68_VC  DDXACTR;  /* YIELD */
A68_VC  EDXACTR;  /* OPERATORS - copy to flex */
A68_120  FDXACTR;  /* clause result */
A68_120  GDXACTR_whichimperative A_UNUSED = {0};
A68_116  HDXACTR_b A_UNUSED = {0};
A68_116 * IDXACTR;  /* forall control - []x */
A68_INT  JDXACTR;  /* forall loop counter */
A68_VC  KDXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ODXACTR;  /* clause result */
A68_VC  SDXACTR;  /* OPERATORS - trim index */
A68_VC  TDXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(bitmnemonic);
 /* line 146: */
 /* line 147: */
{ 
A_CLOSURE( UCXACTR_generator, VCXACTR_generator, WCXACTR_generator );
A_CALLPROC(UCXACTR_generator,(A68_TRUE, &ADXACTR),(A68_TRUE, &ADXACTR,(UCXACTR_generator).nonlocals));
ZCXACTR_output = ADXACTR;
DDXACTR = CDXACTR ;
(void)(ZCXACTR_output = A_VCOPY(DDXACTR,EDXACTR,A68_CHAR ));
 /* line 148: */
if (Whichxbit)
{ 
FDXACTR = SBXACTR_controlbits;
} 
else
{ 
FDXACTR = HCXACTR_routinebits;
} 
GDXACTR_whichimperative = FDXACTR;
 /* line 150: */
 /* line 151: */
JDXACTR = GDXACTR_whichimperative.dim[0].upb - GDXACTR_whichimperative.dim[0].lwb;
IDXACTR = GDXACTR_whichimperative.data;
for (;JDXACTR-- >= 0;
(IDXACTR += GDXACTR_whichimperative.dim[0].stride
) )
{
HDXACTR_b = *IDXACTR;
 /* line 152: */
 /* line 153: */
if ((A68_BITS )(HDXACTR_b.Value&Props)!=(A68_BITS )0)
{ 
 /* line 154: */
 /* line 155: */
(void)(A_VC_PLUSAB(ZCXACTR_output,A_VC_PLUS(HDXACTR_b.Name,A_HVEC(KDXACTR,',',A68_CHAR ))));
} 
}
 /* line 156: */
 /* line 157: */
 /* line 158: */
if (A_VC_EQ(ZCXACTR_output,MDXACTR))
{ 
 /* line 159: */
ODXACTR = PDXACTR;
} 
else
{ 
 /* line 160: */
 /* line 161: */
ODXACTR = A_VC_PLUS(A_VC_PLUS(RDXACTR,A_VTRIM(SDXACTR,(*(&ZCXACTR_output)),A_VTSCRIPT(&(SDXACTR.upb),(*(&ZCXACTR_output)).upb,1,(ZCXACTR_output.upb-1)))),A_HVEC(TDXACTR,')',A68_CHAR ));
} 
} 
A_PROC_EXIT(bitmnemonic);
*ReturnedValue = (ODXACTR);
return;
} 
#undef NL

A68_VOID  VDXACTR_imperativemnemonic(A68_67  Imperative, A68_VC  *ReturnedValue)
{ 
A68_67  WDXACTR;  /* united object - for case conformity */
A68_83  XDXACTR_p A_UNUSED = {0};
A68_83  YDXACTR;  /* united object - for case conformity */
A68_82  ZDXACTR_l A_UNUSED = {0};
A68_82  AEXACTR;  /* united object - for case conformity */
A68_68  BEXACTR_si A_UNUSED = {0};
A68_VC  EEXACTR;  /* clause result */
A68_VC  MEXACTR;  /* avoid structure result */
A68_VC  NEXACTR;  /* clause result */
A68_INT  PEXACTR_i A_UNUSED = {0};
A68_VC  TEXACTR;  /* avoid structure result */
A68_VC  VEXACTR;  /* avoid structure result */
A68_VC  WEXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  XEXACTR_b A_UNUSED = {0};
A68_VC  AFXACTR;  /* clause result */
A68_66  FFXACTR_c A_UNUSED = {0};
A68_69  IFXACTR_sl A_UNUSED = {0};
A68_VC  LFXACTR;  /* avoid structure result */
A68_70  MFXACTR_n A_UNUSED = {0};
A68_VC  PFXACTR;  /* clause result */
A68_VC  RFXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  UFXACTR;  /* ADICOPS - ABS INT */
A68_VC  VFXACTR;  /* avoid structure result */
A68_VC  WFXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  XFXACTR;  /* ADICOPS - ABS INT */
A68_VC  YFXACTR;  /* avoid structure result */
A68_54  AGXACTR_a A_UNUSED = {0};
A68_VC  DGXACTR;  /* clause result */
A68_VC  FGXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  IGXACTR;  /* ADICOPS - ABS INT */
A68_VC  JGXACTR;  /* avoid structure result */
A68_VC  KGXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  LGXACTR;  /* ADICOPS - ABS INT */
A68_VC  MGXACTR;  /* avoid structure result */
A68_VC  OGXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_71  PGXACTR_o A_UNUSED = {0};
A68_VC  SGXACTR;  /* clause result */
A68_VC  UGXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  XGXACTR;  /* ADICOPS - ABS INT */
A68_VC  YGXACTR;  /* avoid structure result */
A68_VC  ZGXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  AHXACTR;  /* ADICOPS - ABS INT */
A68_VC  BHXACTR;  /* avoid structure result */
A68_VC  DHXACTR;  /* avoid structure result */
A68_72  EHXACTR_st A_UNUSED = {0};
A68_VC  HHXACTR;  /* clause result */
A68_VC  JHXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  MHXACTR;  /* ADICOPS - ABS INT */
A68_VC  NHXACTR;  /* avoid structure result */
A68_VC  OHXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  PHXACTR;  /* ADICOPS - ABS INT */
A68_VC  QHXACTR;  /* avoid structure result */
A68_VC  SHXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_73  VHXACTR_o A_UNUSED = {0};
A68_VC  IKXACTR;  /* avoid structure result */
A68_VC  JKXACTR_p A_UNUSED = {0};
A68_VC  LKXACTR;  /* clause result */
A68_VC  NKXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  OKXACTR;  /* ADICOPS - ABS INT */
A68_VC  PKXACTR;  /* avoid structure result */
A68_VC  QKXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  RKXACTR;  /* ADICOPS - ABS INT */
A68_VC  SKXACTR;  /* avoid structure result */
A68_VC  TKXACTR_m A_UNUSED = {0};
A68_VC  XKXACTR;  /* clause result */
A68_VC  BLXACTR;  /* clause result */
A68_INT  PLXACTR;  /* ADICOPS - MOD */
A68_INT  QLXACTR;  /* ADICOPS - MOD */
A68_INT  RLXACTR;  /* ADICOPS - MOD */
A68_VC  TLXACTR;  /* clause result */
A68_VC  KMXACTR;  /* clause result */
A68_VC  UMXACTR;  /* avoid structure result */
A68_VC  ANXACTR;  /* avoid structure result */
A68_VC  NNXACTR;  /* avoid structure result */
A68_VC  PNXACTR;  /* avoid structure result */
A68_INT  RNXACTR;  /* ADICOPS - MOD */
A68_INT  SNXACTR;  /* ADICOPS - MOD */
A68_INT  TNXACTR;  /* ADICOPS - MOD */
A68_VC  UNXACTR;  /* avoid structure result */
A68_VC  YNXACTR;  /* clause result */
A68_VC  ZNXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  AOXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  MPXACTR;  /* avoid structure result */
A68_INT  PPXACTR;  /* ADICOPS - MOD */
A68_INT  QPXACTR;  /* ADICOPS - MOD */
A68_INT  RPXACTR;  /* ADICOPS - MOD */
A68_VC  SPXACTR;  /* avoid structure result */
A68_VC  XPXACTR;  /* clause result */
A68_VC  GQXACTR;  /* avoid structure result */
A68_VC  YQXACTR;  /* clause result */
A68_65  OTXACTR_t A_UNUSED = {0};
A68_VC  RTXACTR;  /* clause result */
A68_VC  JUXACTR;  /* avoid structure result */
A68_VC  NUXACTR;  /* clause result */
A68_VC  PUXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  UUXACTR;  /* ADICOPS - ABS INT */
A68_VC  VUXACTR;  /* avoid structure result */
A68_VC  WUXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  XUXACTR;  /* ADICOPS - ABS INT */
A68_VC  YUXACTR;  /* avoid structure result */
A68_VC  AVXACTR;  /* avoid structure result */
A68_74  BVXACTR_r A_UNUSED = {0};
A68_VC  FVXACTR;  /* clause result */
A68_VC  HVXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  JVXACTR;  /* clause result */
A68_VC  QVXACTR;  /* avoid structure result */
A68_VC  SVXACTR;  /* avoid structure result */
A68_VC  TVXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  WVXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XVXACTR;  /* avoid structure result */
A68_INT  ZVXACTR;  /* ADICOPS - ABS INT */
A68_VC  AWXACTR;  /* avoid structure result */
A68_VC  BWXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  CWXACTR;  /* ADICOPS - ABS INT */
A68_VC  DWXACTR;  /* avoid structure result */
A68_VC  FWXACTR;  /* avoid structure result */
A68_75  GWXACTR_w A_UNUSED = {0};
A68_VC  JWXACTR;  /* clause result */
A68_76  AXXACTR_l A_UNUSED = {0};
A68_VC  CXXACTR;  /* OPERATORS - nil -> mode */
A68_VC  DXXACTR;  /* == */
A68_VC  EXXACTR;  /* == */
A68_VC  GXXACTR;  /* clause result */
A68_VC  JXXACTR;  /* clause result */
A68_VC  LXXACTR;  /* avoid structure result */
A68_VC  OXXACTR;  /* avoid structure result */
A68_VC  SXXACTR;  /* avoid structure result */
A68_VC  UXXACTR;  /* avoid structure result */
A68_VC  XXXACTR;  /* avoid structure result */
A68_VC  ZXXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_77  AYXACTR_u A_UNUSED = {0};
A68_VC  DYXACTR;  /* clause result */
A68_VC  FYXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  IYXACTR;  /* ADICOPS - ABS INT */
A68_VC  JYXACTR;  /* avoid structure result */
A68_VC  KYXACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  LYXACTR;  /* ADICOPS - ABS INT */
A68_VC  MYXACTR;  /* avoid structure result */
A68_VC  NYXACTR;  /* avoid structure result */
A68_VC  PYXACTR;  /* avoid structure result */
A68_55  QYXACTR_c A_UNUSED = {0};
A68_VC  TYXACTR;  /* avoid structure result */
A68_78  UYXACTR_k A_UNUSED = {0};
A68_VC  XYXACTR;  /* clause result */
A68_58  CZXACTR_c A_UNUSED = {0};
A68_VC  JZXACTR;  /* avoid structure result */
A68_VC  LZXACTR;  /* avoid structure result */
A68_63  NZXACTR_f A_UNUSED = {0};
A68_VC  TZXACTR;  /* avoid structure result */
A68_VC  VZXACTR;  /* avoid structure result */
A68_VC  XZXACTR;  /* avoid structure result */
A68_79  BAYACTR_s A_UNUSED = {0};
A68_VC  EAYACTR;  /* clause result */
A68_VC  GBYACTR;  /* avoid structure result */
A68_VC  IBYACTR;  /* clause result */
A68_VC  MBYACTR;  /* clause result */
A68_VC  OBYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  RBYACTR;  /* ADICOPS - ABS INT */
A68_VC  SBYACTR;  /* avoid structure result */
A68_VC  TBYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  UBYACTR;  /* ADICOPS - ABS INT */
A68_VC  VBYACTR;  /* avoid structure result */
A68_VC  XBYACTR;  /* avoid structure result */
A68_VC  ZBYACTR;  /* avoid structure result */
A68_80  ACYACTR_s A_UNUSED = {0};
A68_VC  DCYACTR;  /* clause result */
A68_VC  XCYACTR;  /* avoid structure result */
A68_VC  ADYACTR;  /* clause result */
A68_VC  CDYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  FDYACTR;  /* clause result */
A68_VC  HDYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  JDYACTR;  /* clause result */
A68_INT  LDYACTR;  /* ADICOPS - ABS INT */
A68_VC  MDYACTR;  /* avoid structure result */
A68_VC  NDYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  ODYACTR;  /* ADICOPS - ABS INT */
A68_VC  PDYACTR;  /* avoid structure result */
A68_VC  RDYACTR;  /* avoid structure result */
A68_INT  TDYACTR;  /* ADICOPS - ABS INT */
A68_VC  UDYACTR;  /* avoid structure result */
A68_VC  VDYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  WDYACTR;  /* ADICOPS - ABS INT */
A68_VC  XDYACTR;  /* avoid structure result */
A68_81  ZDYACTR_t A_UNUSED = {0};
A68_VC  CEYACTR;  /* clause result */
A68_VC  WEYACTR;  /* avoid structure result */
A68_VC  YEYACTR;  /* avoid structure result */
A68_59  ZEYACTR_c A_UNUSED = {0};
A68_59  AFYACTR;  /* united object - for case conformity */
A68_56  BFYACTR_c A_UNUSED = {0};
A68_VC  FFYACTR;  /* avoid structure result */
A68_VC  HFYACTR;  /* avoid structure result */
A68_60  IFYACTR_s A_UNUSED = {0};
A68_VC  NFYACTR;  /* avoid structure result */
A68_VC  PFYACTR;  /* avoid structure result */
A68_VC  RFYACTR;  /* avoid structure result */
A68_61  SFYACTR_e A_UNUSED = {0};
A68_VC  ZFYACTR;  /* avoid structure result */
A68_VC  EGYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  LGYACTR;  /* clause result */
A68_VC  MGYACTR;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(imperativemnemonic);
 /* line 167: */
 /* line 168: */
WDXACTR = Imperative ;
switch ( WDXACTR.mode )
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
A_UNCPY(XDXACTR_p,WDXACTR);
 /* line 169: */
 /* line 170: */
YDXACTR = XDXACTR_p ;
switch ( YDXACTR.mode )
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
A_UNCPY(ZDXACTR_l,YDXACTR);
 /* line 171: */
 /* line 176: */
AEXACTR = ZDXACTR_l ;
switch ( AEXACTR.mode )
{ 
case 1: /* STRUCT(INT)  */
BEXACTR_si = (AEXACTR.data.mode1);
 /* line 177: */
 /* line 179: */
switch ( BEXACTR_si.Nse )
{ 
case 1: 
EEXACTR = FEXACTR;
break;
case 2: 
 /* line 180: */
EEXACTR = HEXACTR;
break;
case 3: 
EEXACTR = JEXACTR;
break;
default: 
 /* line 181: */
ROAAOSF_whole( BEXACTR_si.Nse, PCXACTR_fieldlength, &MEXACTR );
EEXACTR = A_VC_PLUS(LEXACTR,MEXACTR);
break;
} 
 /* line 183: */
NEXACTR = A_VC_PLUS(OEXACTR,EEXACTR);
break;
case 2: /* INT */
PEXACTR_i = (AEXACTR.data.mode2);
 /* line 184: */
 /* line 185: */
 /* line 186: */
 /* line 188: */
ROAAOSF_whole( PEXACTR_i, PCXACTR_fieldlength, &TEXACTR );
UTKACTR_idfullname( PEXACTR_i, &VEXACTR );
NEXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(SEXACTR,TEXACTR),UEXACTR),VEXACTR),A_HVEC(WEXACTR,'\"',A68_CHAR ));
break;
case 3: /* BOOL */
XEXACTR_b = (AEXACTR.data.mode3);
 /* line 189: */
 /* line 190: */
if (XEXACTR_b)
{ 
AFXACTR = BFXACTR;
} 
else
{ 
AFXACTR = DFXACTR;
} 
 /* line 192: */
NEXACTR = A_VC_PLUS(EFXACTR,AFXACTR);
break;
case 4: /* STRUCT(REF MODE26)  */
FFXACTR_c = (AEXACTR.data.mode4);
 /* line 193: */
 /* line 195: */
NEXACTR = A_VC_PLUS(HFXACTR,FFXACTR_c.Representation);
break;
case 5: /* STRUCT(INT)  */
IFXACTR_sl = (AEXACTR.data.mode5);
 /* line 196: */
 /* line 197: */
 /* line 199: */
ROAAOSF_whole( IFXACTR_sl.Labno, PCXACTR_fieldlength, &LFXACTR );
NEXACTR = A_VC_PLUS(KFXACTR,LFXACTR);
break;
case 6: /* STRUCT(INT,REF MODE26)  */
MFXACTR_n = (AEXACTR.data.mode6);
 /* line 200: */
 /* line 201: */
 /* line 202: */
 /* line 203: */
if (MFXACTR_n.Mode<0)
{ 
 /* line 204: */
PFXACTR = QFXACTR;
} 
else
{ 
PFXACTR = A_HVEC(RFXACTR,'=',A68_CHAR );
} 
 /* line 205: */
 /* line 206: */
 /* line 207: */
 /* line 209: */
UFXACTR = MFXACTR_n.Mode ;
ROAAOSF_whole( A_ABS(UFXACTR), PCXACTR_fieldlength, &VFXACTR );
XFXACTR = MFXACTR_n.Mode ;
WCNACTR_modename( A_ABS(XFXACTR), &YFXACTR );
NEXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(TFXACTR,PFXACTR),VFXACTR),A_HVEC(WFXACTR,'=',A68_CHAR )),YFXACTR),ZFXACTR),MFXACTR_n.Nu);
break;
case 7: /* STRUCT(INT,REF MODE26)  */
AGXACTR_a = (AEXACTR.data.mode7);
 /* line 210: */
 /* line 211: */
 /* line 212: */
 /* line 213: */
if (AGXACTR_a.Mode<0)
{ 
 /* line 214: */
DGXACTR = EGXACTR;
} 
else
{ 
DGXACTR = A_HVEC(FGXACTR,'=',A68_CHAR );
} 
 /* line 215: */
 /* line 216: */
 /* line 218: */
IGXACTR = AGXACTR_a.Mode ;
ROAAOSF_whole( A_ABS(IGXACTR), PCXACTR_fieldlength, &JGXACTR );
LGXACTR = AGXACTR_a.Mode ;
WCNACTR_modename( A_ABS(LGXACTR), &MGXACTR );
NEXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(HGXACTR,DGXACTR),JGXACTR),A_HVEC(KGXACTR,'=',A68_CHAR )),MGXACTR),NGXACTR),AGXACTR_a.String),A_HVEC(OGXACTR,'\"',A68_CHAR ));
break;
case 8: /* STRUCT(INT,LONG BITS)  */
PGXACTR_o = (AEXACTR.data.mode8);
 /* line 219: */
 /* line 220: */
 /* line 221: */
 /* line 222: */
if (PGXACTR_o.Mode<0)
{ 
 /* line 223: */
SGXACTR = TGXACTR;
} 
else
{ 
SGXACTR = A_HVEC(UGXACTR,'=',A68_CHAR );
} 
 /* line 224: */
 /* line 225: */
 /* line 226: */
 /* line 229: */
XGXACTR = PGXACTR_o.Mode ;
ROAAOSF_whole( A_ABS(XGXACTR), PCXACTR_fieldlength, &YGXACTR );
AHXACTR = PGXACTR_o.Mode ;
WCNACTR_modename( A_ABS(AHXACTR), &BHXACTR );
JPAAOSF_lwhole( (A68_LINT )PGXACTR_o.Denotation, PCXACTR_fieldlength, &DHXACTR );
NEXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(WGXACTR,SGXACTR),YGXACTR),A_HVEC(ZGXACTR,'=',A68_CHAR )),BHXACTR),CHXACTR),DHXACTR);
break;
case 9: /* STRUCT(INT,REF MODE26)  */
EHXACTR_st = (AEXACTR.data.mode9);
 /* line 230: */
 /* line 231: */
 /* line 232: */
 /* line 233: */
if (EHXACTR_st.Mode<0)
{ 
 /* line 234: */
HHXACTR = IHXACTR;
} 
else
{ 
HHXACTR = A_HVEC(JHXACTR,'=',A68_CHAR );
} 
 /* line 235: */
 /* line 236: */
 /* line 237: */
 /* line 238: */
 /* line 239: */
MHXACTR = EHXACTR_st.Mode ;
ROAAOSF_whole( A_ABS(MHXACTR), PCXACTR_fieldlength, &NHXACTR );
PHXACTR = EHXACTR_st.Mode ;
WCNACTR_modename( A_ABS(PHXACTR), &QHXACTR );
NEXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(LHXACTR,HHXACTR),NHXACTR),A_HVEC(OHXACTR,'=',A68_CHAR )),QHXACTR),RHXACTR),EHXACTR_st.Denotation),A_HVEC(SHXACTR,'\"',A68_CHAR ));
break;
default: 
 /* line 241: */
NEXACTR = UHXACTR;
break;
} 
break;
case 10: /* STRUCT(INT,INT,INT)  */
VHXACTR_o = (YDXACTR.data.mode10);
 /* line 242: */
 /* line 243: */
{ 
 /* line 254: */
ROAAOSF_whole( VHXACTR_o.Param, PCXACTR_fieldlength, &IKXACTR );
JKXACTR_p = IKXACTR;
 /* line 255: */
 /* line 256: */
 /* line 257: */
 /* line 258: */
if (VHXACTR_o.Mode<0)
{ 
 /* line 259: */
LKXACTR = MKXACTR;
} 
else
{ 
 /* line 260: */
LKXACTR = A_HVEC(NKXACTR,'=',A68_CHAR );
} 
 /* line 261: */
OKXACTR = VHXACTR_o.Mode ;
ROAAOSF_whole( A_ABS(OKXACTR), PCXACTR_fieldlength, &PKXACTR );
RKXACTR = VHXACTR_o.Mode ;
WCNACTR_modename( A_ABS(RKXACTR), &SKXACTR );
TKXACTR_m = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(LKXACTR,PKXACTR),A_HVEC(QKXACTR,'=',A68_CHAR )),SKXACTR);
 /* line 263: */
 /* line 264: */
 /* line 265: */
switch ( VHXACTR_o.Fn )
{ 
case 1: 
 /* line 266: */
 /* line 267: */
 /* line 268: */
if (VHXACTR_o.Param==(A68_TRUE))
{ 
 /* line 269: */
XKXACTR = YKXACTR;
} 
else
{ 
XKXACTR = ALXACTR;
} 
 /* line 271: */
BLXACTR = A_VC_PLUS(A_VC_PLUS(CLXACTR,XKXACTR),TKXACTR_m);
break;
case 2: 
 /* line 273: */
BLXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(FLXACTR,JKXACTR_p),GLXACTR),TKXACTR_m);
break;
case 3: 
 /* line 274: */
 /* line 276: */
BLXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(JLXACTR,JKXACTR_p),KLXACTR),TKXACTR_m);
break;
case 4: 
 /* line 278: */
BLXACTR = A_VC_PLUS(MLXACTR,TKXACTR_m);
break;
case 5: 
 /* line 279: */
 /* line 280: */
QLXACTR = VHXACTR_o.Mode ;
RLXACTR = 8 ;
switch ( A_MOD(QLXACTR,RLXACTR,PLXACTR) )
{ 
case 1: 
TLXACTR = ULXACTR;
break;
case 2: 
TLXACTR = WLXACTR;
break;
case 3: 
 /* line 281: */
TLXACTR = YLXACTR;
break;
case 4: 
TLXACTR = AMXACTR;
break;
case 5: 
TLXACTR = CMXACTR;
break;
case 6: 
 /* line 283: */
TLXACTR = EMXACTR;
break;
case 7: 
 /* line 284: */
TLXACTR = GMXACTR;
break;
default: 
TLXACTR = IMXACTR;
break;
} 
 /* line 285: */
if (VHXACTR_o.Mode>7)
{ 
KMXACTR = LMXACTR;
} 
else
{ 
KMXACTR = NMXACTR;
} 
 /* line 287: */
BLXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(OMXACTR,JKXACTR_p),PMXACTR),TLXACTR),KMXACTR);
break;
case 6: 
 /* line 288: */
 /* line 290: */
ROAAOSF_whole( (1+VHXACTR_o.Param), 0, &UMXACTR );
BLXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(TMXACTR,UMXACTR),VMXACTR),JKXACTR_p),WMXACTR),TKXACTR_m);
break;
case 7: 
 /* line 291: */
 /* line 293: */
ROAAOSF_whole( (1+VHXACTR_o.Param), 0, &ANXACTR );
BLXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(ZMXACTR,ANXACTR),BNXACTR),TKXACTR_m);
break;
case 8: 
 /* line 295: */
BLXACTR = A_VC_PLUS(DNXACTR,TKXACTR_m);
break;
case 9: 
 /* line 297: */
BLXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(GNXACTR,JKXACTR_p),HNXACTR),TKXACTR_m);
break;
case 10: 
 /* line 298: */
 /* line 299: */
 /* line 300: */
 /* line 301: */
 /* line 302: */
 /* line 304: */
ROAAOSF_whole( (VHXACTR_o.Param/16), PCXACTR_fieldlength, &NNXACTR );
YHXACTR_standardpreludeops( ((VHXACTR_o.Param/16)+1), &PNXACTR );
SNXACTR = VHXACTR_o.Param ;
TNXACTR = 16 ;
ROAAOSF_whole( A_MOD(SNXACTR,TNXACTR,RNXACTR), PCXACTR_fieldlength, &UNXACTR );
BLXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(MNXACTR,NNXACTR),ONXACTR),PNXACTR),QNXACTR),UNXACTR),VNXACTR),TKXACTR_m);
break;
case 11: 
 /* line 305: */
 /* line 306: */
 /* line 307: */
switch ( ((VHXACTR_o.Param/16)+1) )
{ 
case 1: 
YNXACTR = A_HVEC(ZNXACTR,'+',A68_CHAR );
break;
case 2: 
YNXACTR = A_HVEC(AOXACTR,'-',A68_CHAR );
break;
case 3: 
YNXACTR = COXACTR;
break;
case 4: 
YNXACTR = EOXACTR;
break;
case 5: 
 /* line 308: */
YNXACTR = GOXACTR;
break;
case 6: 
YNXACTR = IOXACTR;
break;
case 7: 
YNXACTR = KOXACTR;
break;
case 8: 
YNXACTR = MOXACTR;
break;
case 9: 
YNXACTR = OOXACTR;
break;
case 10: 
 /* line 309: */
YNXACTR = QOXACTR;
break;
case 11: 
YNXACTR = SOXACTR;
break;
case 12: 
YNXACTR = UOXACTR;
break;
case 13: 
YNXACTR = WOXACTR;
break;
case 14: 
YNXACTR = YOXACTR;
break;
case 15: 
 /* line 310: */
YNXACTR = APXACTR;
break;
case 16: 
YNXACTR = CPXACTR;
break;
case 17: 
 /* line 311: */
YNXACTR = EPXACTR;
break;
case 18: 
 /* line 312: */
YNXACTR = GPXACTR;
break;
default: 
YNXACTR = IPXACTR;
break;
} 
 /* line 313: */
 /* line 314: */
 /* line 315: */
 /* line 317: */
ROAAOSF_whole( (VHXACTR_o.Param/16), PCXACTR_fieldlength, &MPXACTR );
QPXACTR = VHXACTR_o.Param ;
RPXACTR = 16 ;
ROAAOSF_whole( A_MOD(QPXACTR,RPXACTR,PPXACTR), PCXACTR_fieldlength, &SPXACTR );
BLXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(LPXACTR,MPXACTR),NPXACTR),YNXACTR),OPXACTR),SPXACTR),TPXACTR),TKXACTR_m);
break;
case 12: 
 /* line 318: */
 /* line 319: */
if (VHXACTR_o.Param==1)
{ 
XPXACTR = YPXACTR;
} 
else
{ 
 /* line 320: */
if (VHXACTR_o.Param==(-1))
{ 
XPXACTR = AQXACTR;
} 
else
{ 
 /* line 321: */
if (VHXACTR_o.Param>1)
{ 
XPXACTR = CQXACTR;
} 
else
{ 
 /* line 322: */
 /* line 323: */
ROAAOSF_whole( ((-1)-VHXACTR_o.Param), PCXACTR_fieldlength, &GQXACTR );
XPXACTR = A_VC_PLUS(A_VC_PLUS(FQXACTR,GQXACTR),HQXACTR);
} 
} 
} 
 /* line 325: */
BLXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(IQXACTR,TKXACTR_m),JQXACTR),XPXACTR);
break;
case 13: 
 /* line 327: */
BLXACTR = A_VC_PLUS(LQXACTR,TKXACTR_m);
break;
case 14: 
 /* line 329: */
BLXACTR = A_VC_PLUS(NQXACTR,TKXACTR_m);
break;
case 15: 
 /* line 331: */
BLXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(QQXACTR,JKXACTR_p),RQXACTR),TKXACTR_m);
break;
case 16: 
 /* line 333: */
BLXACTR = A_VC_PLUS(TQXACTR,TKXACTR_m);
break;
case 17: 
 /* line 335: */
BLXACTR = A_VC_PLUS(VQXACTR,TKXACTR_m);
break;
case 18: 
 /* line 336: */
 /* line 337: */
switch ( (VHXACTR_o.Param+1) )
{ 
case 1: 
 /* line 338: */
YQXACTR = ZQXACTR;
break;
case 2: 
 /* line 339: */
YQXACTR = BRXACTR;
break;
case 3: 
 /* line 340: */
YQXACTR = DRXACTR;
break;
case 4: 
 /* line 342: */
YQXACTR = FRXACTR;
break;
case 5: 
YQXACTR = HRXACTR;
break;
default: 
 /* line 343: */
YQXACTR = A_VC_PLUS(JRXACTR,JKXACTR_p);
break;
} 
 /* line 345: */
BLXACTR = A_VC_PLUS(A_VC_PLUS(KRXACTR,TKXACTR_m),YQXACTR);
break;
case 19: 
 /* line 347: */
BLXACTR = MRXACTR;
break;
case 20: 
 /* line 349: */
BLXACTR = A_VC_PLUS(ORXACTR,TKXACTR_m);
break;
case 21: 
 /* line 351: */
BLXACTR = A_VC_PLUS(QRXACTR,TKXACTR_m);
break;
case 22: 
 /* line 353: */
BLXACTR = A_VC_PLUS(SRXACTR,TKXACTR_m);
break;
case 23: 
 /* line 355: */
BLXACTR = A_VC_PLUS(URXACTR,TKXACTR_m);
break;
case 24: 
 /* line 357: */
BLXACTR = A_VC_PLUS(WRXACTR,TKXACTR_m);
break;
case 25: 
 /* line 359: */
BLXACTR = A_VC_PLUS(YRXACTR,TKXACTR_m);
break;
case 26: 
 /* line 361: */
BLXACTR = A_VC_PLUS(ASXACTR,TKXACTR_m);
break;
case 27: 
 /* line 363: */
BLXACTR = A_VC_PLUS(CSXACTR,TKXACTR_m);
break;
case 28: 
 /* line 365: */
BLXACTR = A_VC_PLUS(ESXACTR,TKXACTR_m);
break;
case 29: 
 /* line 367: */
BLXACTR = A_VC_PLUS(GSXACTR,TKXACTR_m);
break;
case 30: 
 /* line 369: */
BLXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(JSXACTR,JKXACTR_p),KSXACTR),TKXACTR_m);
break;
case 31: 
 /* line 371: */
BLXACTR = A_VC_PLUS(MSXACTR,TKXACTR_m);
break;
case 32: 
 /* line 372: */
 /* line 374: */
BLXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(PSXACTR,JKXACTR_p),QSXACTR),TKXACTR_m);
break;
case 33: 
 /* line 376: */
BLXACTR = A_VC_PLUS(SSXACTR,TKXACTR_m);
break;
case 34: 
 /* line 378: */
BLXACTR = A_VC_PLUS(USXACTR,TKXACTR_m);
break;
case 35: 
 /* line 380: */
BLXACTR = A_VC_PLUS(WSXACTR,TKXACTR_m);
break;
case 36: 
 /* line 382: */
BLXACTR = A_VC_PLUS(YSXACTR,TKXACTR_m);
break;
case 37: 
 /* line 384: */
BLXACTR = A_VC_PLUS(ATXACTR,TKXACTR_m);
break;
case 38: 
 /* line 386: */
BLXACTR = A_VC_PLUS(CTXACTR,TKXACTR_m);
break;
case 39: 
 /* line 388: */
BLXACTR = A_VC_PLUS(ETXACTR,TKXACTR_m);
break;
case 40: 
 /* line 390: */
 /* line 391: */
BLXACTR = A_VC_PLUS(TKXACTR_m,GTXACTR);
break;
default: 
 /* line 392: */
 /* line 393: */
if (VHXACTR_o.Fn==50)
{ 
BLXACTR = ITXACTR;
} 
else
{ 
 /* line 394: */
 /* line 395: */
if (VHXACTR_o.Fn==51)
{ 
 /* line 396: */
BLXACTR = KTXACTR;
} 
else
{ 
 /* line 397: */
 /* line 398: */
BLXACTR = MTXACTR;
} 
} 
break;
} 
 /* line 400: */
NEXACTR = A_VC_PLUS(NTXACTR,BLXACTR);
} 
break;
case 11: /* STRUCT(INT,REF MODE26,INT,INT)  */
OTXACTR_t = (YDXACTR.data.mode11);
 /* line 401: */
 /* line 402: */
 /* line 403: */
switch ( OTXACTR_t.Type )
{ 
case 1: 
 /* line 404: */
RTXACTR = STXACTR;
break;
case 2: 
 /* line 405: */
RTXACTR = UTXACTR;
break;
case 3: 
 /* line 406: */
RTXACTR = WTXACTR;
break;
case 4: 
 /* line 407: */
RTXACTR = YTXACTR;
break;
case 5: 
 /* line 408: */
RTXACTR = AUXACTR;
break;
case 6: 
 /* line 409: */
RTXACTR = CUXACTR;
break;
case 7: 
 /* line 411: */
RTXACTR = EUXACTR;
break;
case 8: 
RTXACTR = GUXACTR;
break;
default: 
 /* line 412: */
 /* line 413: */
ROAAOSF_whole( OTXACTR_t.Type, PCXACTR_fieldlength, &JUXACTR );
RTXACTR = A_VC_PLUS(IUXACTR,JUXACTR);
break;
} 
 /* line 414: */
 /* line 415: */
 /* line 416: */
if (OTXACTR_t.Mode<0)
{ 
NUXACTR = OUXACTR;
} 
else
{ 
NUXACTR = A_HVEC(PUXACTR,'=',A68_CHAR );
} 
 /* line 417: */
 /* line 418: */
 /* line 419: */
 /* line 421: */
UUXACTR = OTXACTR_t.Mode ;
ROAAOSF_whole( A_ABS(UUXACTR), PCXACTR_fieldlength, &VUXACTR );
XUXACTR = OTXACTR_t.Mode ;
WCNACTR_modename( A_ABS(XUXACTR), &YUXACTR );
ROAAOSF_whole( OTXACTR_t.Decno, PCXACTR_fieldlength, &AVXACTR );
NEXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(RUXACTR,RTXACTR),SUXACTR),OTXACTR_t.Name),TUXACTR),NUXACTR),VUXACTR),A_HVEC(WUXACTR,'=',A68_CHAR )),YUXACTR),ZUXACTR),AVXACTR);
break;
case 12: /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
BVXACTR_r = (YDXACTR.data.mode12);
 /* line 422: */
 /* line 423: */
 /* line 424: */
 /* line 425: */
if (BVXACTR_r.Mode<0)
{ 
FVXACTR = GVXACTR;
} 
else
{ 
FVXACTR = A_HVEC(HVXACTR,'=',A68_CHAR );
} 
 /* line 426: */
 /* line 427: */
 /* line 430: */
 /* line 431: */
 /* line 432: */
if (BVXACTR_r.Maxname<3)
{ 
JVXACTR = KVXACTR;
} 
else
{ 
 /* line 433: */
 /* line 434: */
if (BVXACTR_r.Maxname==3)
{ 
JVXACTR = MVXACTR;
} 
else
{ 
 /* line 435: */
 /* line 436: */
 /* line 437: */
ROAAOSF_whole( BVXACTR_r.Maxname, PCXACTR_fieldlength, &QVXACTR );
UTKACTR_idfullname( BVXACTR_r.Maxname, &SVXACTR );
JVXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(PVXACTR,QVXACTR),RVXACTR),SVXACTR),A_HVEC(TVXACTR,'\"',A68_CHAR ));
} 
} 
 /* line 438: */
 /* line 440: */
SCXACTR_bitmnemonic( (A68_BITS )(BVXACTR_r.Props&OCXACTR_maskxroutine), A68_FALSE, &XVXACTR );
ZVXACTR = BVXACTR_r.Mode ;
ROAAOSF_whole( A_ABS(ZVXACTR), PCXACTR_fieldlength, &AWXACTR );
CWXACTR = BVXACTR_r.Mode ;
WCNACTR_modename( A_ABS(CWXACTR), &DWXACTR );
ROAAOSF_whole( BVXACTR_r.Rdenno, PCXACTR_fieldlength, &FWXACTR );
NEXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(VVXACTR,BVXACTR_r.Name),A_HVEC(WVXACTR,'\"',A68_CHAR )),XVXACTR),YVXACTR),FVXACTR),AWXACTR),A_HVEC(BWXACTR,'=',A68_CHAR )),DWXACTR),JVXACTR),EWXACTR),FWXACTR);
break;
case 13: /* STRUCT(INT)  */
GWXACTR_w = (YDXACTR.data.mode13);
 /* line 441: */
 /* line 442: */
 /* line 443: */
switch ( GWXACTR_w.W )
{ 
case 1: 
JWXACTR = KWXACTR;
break;
case 2: 
JWXACTR = MWXACTR;
break;
case 3: 
JWXACTR = OWXACTR;
break;
case 4: 
 /* line 444: */
JWXACTR = QWXACTR;
break;
case 5: 
JWXACTR = SWXACTR;
break;
case 6: 
 /* line 445: */
JWXACTR = UWXACTR;
break;
case 7: 
 /* line 446: */
JWXACTR = WWXACTR;
break;
default: 
JWXACTR = YWXACTR;
break;
} 
 /* line 448: */
NEXACTR = A_VC_PLUS(ZWXACTR,JWXACTR);
break;
case 14: /* STRUCT(REF MODE26,INT,INT,BOOL)  */
AXXACTR_l = (YDXACTR.data.mode14);
 /* line 449: */
 /* line 450: */
DXXACTR = A_VVAC(CXXACTR) ;
EXXACTR = AXXACTR_l.Name ;
if (A_VSTRUCTCOMP(EXXACTR,DXXACTR))
{ 
GXXACTR = HXXACTR;
} 
else
{ 
 /* line 451: */
GXXACTR = AXXACTR_l.Name;
} 
 /* line 453: */
if (AXXACTR_l.Notsetting)
{ 
 /* line 455: */
switch ( (AXXACTR_l.Status+1) )
{ 
case 1: 
 /* line 457: */
ROAAOSF_whole( AXXACTR_l.Labno, PCXACTR_fieldlength, &LXXACTR );
JXXACTR = A_VC_PLUS(KXXACTR,LXXACTR);
break;
case 2: 
 /* line 458: */
 /* line 459: */
 /* line 460: */
ROAAOSF_whole( AXXACTR_l.Labno, PCXACTR_fieldlength, &OXXACTR );
JXXACTR = A_VC_PLUS(NXXACTR,OXXACTR);
break;
default: 
 /* line 461: */
 /* line 462: */
 /* line 463: */
 /* line 464: */
ROAAOSF_whole( AXXACTR_l.Status, PCXACTR_fieldlength, &SXXACTR );
ROAAOSF_whole( AXXACTR_l.Labno, PCXACTR_fieldlength, &UXXACTR );
JXXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(RXXACTR,SXXACTR),TXXACTR),UXXACTR);
break;
} 
} 
else
{ 
 /* line 465: */
 /* line 466: */
ROAAOSF_whole( AXXACTR_l.Labno, PCXACTR_fieldlength, &XXXACTR );
JXXACTR = A_VC_PLUS(WXXACTR,XXXACTR);
} 
 /* line 468: */
NEXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(YXXACTR,GXXACTR),A_HVEC(ZXXACTR,'\"',A68_CHAR )),JXXACTR);
break;
case 15: /* STRUCT(INT,BITS,INT)  */
AYXACTR_u = (YDXACTR.data.mode15);
 /* line 469: */
 /* line 470: */
if (AYXACTR_u.Mode<0)
{ 
DYXACTR = EYXACTR;
} 
else
{ 
DYXACTR = A_HVEC(FYXACTR,'=',A68_CHAR );
} 
 /* line 471: */
 /* line 472: */
 /* line 473: */
 /* line 474: */
 /* line 476: */
IYXACTR = AYXACTR_u.Mode ;
ROAAOSF_whole( A_ABS(IYXACTR), PCXACTR_fieldlength, &JYXACTR );
LYXACTR = AYXACTR_u.Mode ;
WCNACTR_modename( A_ABS(LYXACTR), &MYXACTR );
SCXACTR_bitmnemonic( (A68_BITS )(AYXACTR_u.Props&WCAACTR_decbit), A68_TRUE, &NYXACTR );
ROAAOSF_whole( AYXACTR_u.Param, PCXACTR_fieldlength, &PYXACTR );
NEXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(HYXACTR,DYXACTR),JYXACTR),A_HVEC(KYXACTR,'=',A68_CHAR )),MYXACTR),NYXACTR),OYXACTR),PYXACTR);
break;
case 16: /* STRUCT(INT)  */
QYXACTR_c = (YDXACTR.data.mode16);
 /* line 477: */
 /* line 478: */
 /* line 480: */
ROAAOSF_whole( QYXACTR_c.I, PCXACTR_fieldlength, &TYXACTR );
NEXACTR = A_VC_PLUS(SYXACTR,TYXACTR);
break;
case 17: /* STRUCT(BOOL)  */
UYXACTR_k = (YDXACTR.data.mode17);
 /* line 481: */
 /* line 482: */
if (UYXACTR_k.Start)
{ 
XYXACTR = YYXACTR;
} 
else
{ 
XYXACTR = AZXACTR;
} 
 /* line 484: */
NEXACTR = A_VC_PLUS(BZXACTR,XYXACTR);
break;
case 19: /* STRUCT(INT,INT,REF MODE26)  */
CZXACTR_c = (YDXACTR.data.mode19);
 /* line 485: */
 /* line 486: */
 /* line 487: */
 /* line 488: */
 /* line 490: */
ROAAOSF_whole( CZXACTR_c.Mode, 0, &JZXACTR );
ROAAOSF_whole( CZXACTR_c.Number, 0, &LZXACTR );
NEXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(HZXACTR,IZXACTR),JZXACTR),KZXACTR),LZXACTR),MZXACTR);
break;
case 18: /* STRUCT(MODE64,REF MODE26)  */
NZXACTR_f = (YDXACTR.data.mode18);
 /* line 491: */
 /* line 492: */
 /* line 493: */
 /* line 494: */
 /* line 495: */
 /* line 496: */
 /* line 497: */
 /* line 498: */
 /* line 499: */
ROAAOSF_whole( NZXACTR_f.Info.Nochars, PCXACTR_fieldlength, &TZXACTR );
ROAAOSF_whole( NZXACTR_f.Info.Nocases, PCXACTR_fieldlength, &VZXACTR );
ROAAOSF_whole( NZXACTR_f.Info.W, PCXACTR_fieldlength, &XZXACTR );
NEXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(SZXACTR,TZXACTR),UZXACTR),VZXACTR),WZXACTR),XZXACTR),YZXACTR),NZXACTR_f.Text);
break;
default: 
 /* line 502: */
NEXACTR = AAYACTR;
break;
} 
break;
case 20: /* STRUCT(INT,INT,BITS,INT)  */
BAYACTR_s = (WDXACTR.data.mode20);
 /* line 503: */
 /* line 504: */
switch ( BAYACTR_s.Fn )
{ 
case 1: 
EAYACTR = FAYACTR;
break;
case 2: 
EAYACTR = HAYACTR;
break;
case 3: 
 /* line 505: */
EAYACTR = JAYACTR;
break;
case 4: 
EAYACTR = LAYACTR;
break;
case 5: 
EAYACTR = NAYACTR;
break;
case 6: 
 /* line 506: */
EAYACTR = PAYACTR;
break;
case 7: 
EAYACTR = RAYACTR;
break;
case 8: 
EAYACTR = TAYACTR;
break;
case 9: 
 /* line 507: */
EAYACTR = VAYACTR;
break;
case 10: 
EAYACTR = XAYACTR;
break;
case 11: 
EAYACTR = ZAYACTR;
break;
case 12: 
 /* line 509: */
EAYACTR = BBYACTR;
break;
case 13: 
 /* line 510: */
EAYACTR = DBYACTR;
break;
default: 
 /* line 511: */
 /* line 512: */
 /* line 513: */
ROAAOSF_whole( BAYACTR_s.Fn, PCXACTR_fieldlength, &GBYACTR );
EAYACTR = A_VC_PLUS(FBYACTR,GBYACTR);
break;
} 
 /* line 514: */
 /* line 515: */
 /* line 516: */
 /* line 518: */
if (BAYACTR_s.Fn==11)
{ 
 /* line 519: */
IBYACTR = JBYACTR;
} 
else
{ 
 /* line 520: */
if (BAYACTR_s.Mode<0)
{ 
MBYACTR = NBYACTR;
} 
else
{ 
MBYACTR = A_HVEC(OBYACTR,'=',A68_CHAR );
} 
 /* line 521: */
 /* line 522: */
 /* line 523: */
 /* line 524: */
RBYACTR = BAYACTR_s.Mode ;
ROAAOSF_whole( A_ABS(RBYACTR), PCXACTR_fieldlength, &SBYACTR );
UBYACTR = BAYACTR_s.Mode ;
WCNACTR_modename( A_ABS(UBYACTR), &VBYACTR );
ROAAOSF_whole( BAYACTR_s.Param, PCXACTR_fieldlength, &XBYACTR );
IBYACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(QBYACTR,MBYACTR),SBYACTR),A_HVEC(TBYACTR,'=',A68_CHAR )),VBYACTR),WBYACTR),XBYACTR);
} 
 /* line 528: */
SCXACTR_bitmnemonic( (A68_BITS )(BAYACTR_s.Props&(A68_BITS )((A68_BITS )(ICXACTR_maskgeneral|JCXACTR_maskdynamica)|NCXACTR_maskspecial)), A68_TRUE, &ZBYACTR );
NEXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(YBYACTR,EAYACTR),ZBYACTR),IBYACTR);
break;
case 21: /* STRUCT(INT,INT,BITS,INT)  */
ACYACTR_s = (WDXACTR.data.mode21);
 /* line 529: */
 /* line 530: */
switch ( (ACYACTR_s.Fn+2) )
{ 
case 1: 
DCYACTR = ECYACTR;
break;
case 2: 
 /* line 531: */
DCYACTR = GCYACTR;
break;
case 3: 
 /* line 532: */
DCYACTR = ICYACTR;
break;
case 4: 
 /* line 533: */
DCYACTR = KCYACTR;
break;
case 5: 
 /* line 534: */
DCYACTR = MCYACTR;
break;
case 6: 
 /* line 535: */
DCYACTR = OCYACTR;
break;
case 7: 
 /* line 536: */
DCYACTR = QCYACTR;
break;
case 8: 
 /* line 538: */
DCYACTR = SCYACTR;
break;
case 9: 
 /* line 539: */
DCYACTR = UCYACTR;
break;
default: 
 /* line 540: */
 /* line 541: */
 /* line 542: */
ROAAOSF_whole( ACYACTR_s.Fn, PCXACTR_fieldlength, &XCYACTR );
DCYACTR = A_VC_PLUS(WCYACTR,XCYACTR);
break;
} 
 /* line 543: */
 /* line 544: */
if (ACYACTR_s.Mode<0)
{ 
ADYACTR = BDYACTR;
} 
else
{ 
ADYACTR = A_HVEC(CDYACTR,'=',A68_CHAR );
} 
 /* line 545: */
 /* line 546: */
 /* line 547: */
if (ACYACTR_s.Resultmode<0)
{ 
FDYACTR = GDYACTR;
} 
else
{ 
FDYACTR = A_HVEC(HDYACTR,'=',A68_CHAR );
} 
 /* line 548: */
 /* line 549: */
 /* line 550: */
if ((ACYACTR_s.Fn==6)|(ACYACTR_s.Fn==7))
{ 
JDYACTR = KDYACTR;
} 
else
{ 
 /* line 551: */
 /* line 552: */
LDYACTR = ACYACTR_s.Resultmode ;
ROAAOSF_whole( A_ABS(LDYACTR), PCXACTR_fieldlength, &MDYACTR );
ODYACTR = ACYACTR_s.Resultmode ;
WCNACTR_modename( A_ABS(ODYACTR), &PDYACTR );
JDYACTR = A_VC_PLUS(A_VC_PLUS(MDYACTR,A_HVEC(NDYACTR,'=',A68_CHAR )),PDYACTR);
} 
 /* line 555: */
SCXACTR_bitmnemonic( ACYACTR_s.Props, A68_TRUE, &RDYACTR );
TDYACTR = ACYACTR_s.Mode ;
ROAAOSF_whole( A_ABS(TDYACTR), PCXACTR_fieldlength, &UDYACTR );
WDYACTR = ACYACTR_s.Mode ;
WCNACTR_modename( A_ABS(WDYACTR), &XDYACTR );
NEXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(QDYACTR,DCYACTR),RDYACTR),SDYACTR),ADYACTR),UDYACTR),A_HVEC(VDYACTR,'=',A68_CHAR )),XDYACTR),YDYACTR),FDYACTR),JDYACTR);
break;
case 22: /* STRUCT(INT,BITS)  */
ZDYACTR_t = (WDXACTR.data.mode22);
 /* line 556: */
 /* line 557: */
switch ( ZDYACTR_t.Fn )
{ 
case 1: 
CEYACTR = DEYACTR;
break;
case 2: 
CEYACTR = FEYACTR;
break;
case 3: 
 /* line 558: */
CEYACTR = HEYACTR;
break;
case 4: 
CEYACTR = JEYACTR;
break;
case 5: 
CEYACTR = LEYACTR;
break;
case 6: 
 /* line 559: */
CEYACTR = NEYACTR;
break;
case 7: 
CEYACTR = PEYACTR;
break;
case 8: 
 /* line 560: */
CEYACTR = REYACTR;
break;
case 9: 
 /* line 561: */
CEYACTR = TEYACTR;
break;
default: 
 /* line 562: */
 /* line 563: */
 /* line 564: */
ROAAOSF_whole( ZDYACTR_t.Fn, PCXACTR_fieldlength, &WEYACTR );
CEYACTR = A_VC_PLUS(VEYACTR,WEYACTR);
break;
} 
 /* line 568: */
SCXACTR_bitmnemonic( ZDYACTR_t.Props, A68_TRUE, &YEYACTR );
NEXACTR = A_VC_PLUS(A_VC_PLUS(XEYACTR,CEYACTR),YEYACTR);
break;
case 23: /* STRUCT(INT,INT,REF MODE57)  */
case 24: /* STRUCT(INT,INT,INT)  */
case 25: /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE62)  */
A_UNCPY(ZEYACTR_c,WDXACTR);
ZEYACTR_c.mode -= 22;
 /* line 569: */
AFYACTR = ZEYACTR_c ;
switch ( AFYACTR.mode )
{ 
case 1: /* STRUCT(INT,INT,REF MODE57)  */
BFYACTR_c = (AFYACTR.data.mode1);
 /* line 570: */
 /* line 571: */
 /* line 572: */
 /* line 574: */
ROAAOSF_whole( BFYACTR_c.Body, PCXACTR_fieldlength, &FFYACTR );
ROAAOSF_whole( BFYACTR_c.Moduleno, PCXACTR_fieldlength, &HFYACTR );
NEXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(EFYACTR,FFYACTR),GFYACTR),HFYACTR);
break;
case 2: /* STRUCT(INT,INT,INT)  */
IFYACTR_s = (AFYACTR.data.mode2);
 /* line 575: */
 /* line 576: */
 /* line 577: */
 /* line 578: */
ROAAOSF_whole( IFYACTR_s.Moduleno, PCXACTR_fieldlength, &NFYACTR );
ROAAOSF_whole( IFYACTR_s.I, PCXACTR_fieldlength, &PFYACTR );
ROAAOSF_whole( IFYACTR_s.J, PCXACTR_fieldlength, &RFYACTR );
NEXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(MFYACTR,NFYACTR),OFYACTR),PFYACTR),QFYACTR),RFYACTR);
break;
case 3: /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE62)  */
SFYACTR_e = (AFYACTR.data.mode3);
 /* line 579: */
 /* line 580: */
 /* line 581: */
 /* line 582: */
 /* line 583: */
 /* line 585: */
 /* line 587: */
ROAAOSF_whole( SFYACTR_e.Moduleno, PCXACTR_fieldlength, &ZFYACTR );
NEXACTR = A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(YFYACTR,ZFYACTR),AGYACTR),SFYACTR_e.Name),BGYACTR),SFYACTR_e.Uname),CGYACTR),SFYACTR_e.Lname),DGYACTR),SFYACTR_e.Gname),A_HVEC(EGYACTR,'\"',A68_CHAR ));
break;
default: 
 /* line 591: */
NEXACTR = GGYACTR;
break;
} 
break;
case 26: /* VOID */
 /* line 592: */
 /* line 593: */
NEXACTR = IGYACTR;
break;
default: 
 /* line 598: */
NEXACTR = KGYACTR;
break;
} 
LGYACTR = A_VC_PLUS(NEXACTR,A_HVEC(MGYACTR,')',A68_CHAR ));
A_PROC_EXIT(imperativemnemonic);
*ReturnedValue = (LGYACTR);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 5: */
void TZWACTR(void)   /* initialise DECS mnemonics */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel","-dir",".","mnemonics.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/vak/Project/Algol/Algol-68RS-Source/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/vak/Project/Algol/Algol-68RS-Source/a68config/a68config.m","./identifiers.m","./incimperatives.m","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel/usefulops.m",""};
static A_CONFIG_INFO A_config A_UNUSED;
/* --- end of configuration information */
A68_117  JAXACTR;  /* procedure value */
A68_125  KAXACTR;  /* collateral clause result */
A68_120  RBXACTR;  /* OPERATORS - istruct to row */
A68_128  TBXACTR;  /* collateral clause result */
A68_120  GCXACTR;  /* OPERATORS - istruct to row */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
YMVACTR();   /* USE identifiers */
UAAACTR();   /* USE incimperatives */
IKAAOSF();   /* USE usefulops */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/mnemonics.a68";
A_config.translation_time = "Thu Nov  5 21:56:13 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "SZWACTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 21:56:13 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS mnemonics);
(void)(UEAALIB_a68config(LGAALIB_configinfo, XZWACTR));
 /* line 64: */
JAXACTR.fn.fn_global = AAXACTR_generator;
JAXACTR.nonlocals = A68_NIL;
YZWACTR_anonymous = JAXACTR;
 /* line 66: */
 /* line 67: */
 /* line 68: */
KAXACTR.data[0].Name = MAXACTR;
 /* line 69: */
KAXACTR.data[0].Value = SCAACTR_priobit;
KAXACTR.data[1].Name = OAXACTR;
 /* line 70: */
KAXACTR.data[1].Value = TCAACTR_exitbit;
KAXACTR.data[2].Name = QAXACTR;
 /* line 71: */
KAXACTR.data[2].Value = UCAACTR_semibit;
KAXACTR.data[3].Name = SAXACTR;
 /* line 72: */
KAXACTR.data[3].Value = VCAACTR_heapbit;
KAXACTR.data[4].Name = UAXACTR;
 /* line 73: */
KAXACTR.data[4].Value = WCAACTR_decbit;
KAXACTR.data[5].Name = WAXACTR;
 /* line 74: */
KAXACTR.data[5].Value = XCAACTR_vardecbit;
KAXACTR.data[6].Name = YAXACTR;
 /* line 75: */
KAXACTR.data[6].Value = YCAACTR_compgenbit;
KAXACTR.data[7].Name = ABXACTR;
 /* line 76: */
KAXACTR.data[7].Value = ZCAACTR_elifousebit;
KAXACTR.data[8].Name = CBXACTR;
 /* line 77: */
KAXACTR.data[8].Value = ADAACTR_labbit;
KAXACTR.data[9].Name = EBXACTR;
 /* line 78: */
KAXACTR.data[9].Value = BDAACTR_dontpullbit;
KAXACTR.data[10].Name = GBXACTR;
 /* line 79: */
KAXACTR.data[10].Value = CDAACTR_dyprocbit;
KAXACTR.data[11].Name = IBXACTR;
 /* line 80: */
KAXACTR.data[11].Value = DDAACTR_dyvardecbit;
KAXACTR.data[12].Name = KBXACTR;
 /* line 81: */
KAXACTR.data[12].Value = EDAACTR_dydecbit;
KAXACTR.data[13].Name = MBXACTR;
 /* line 82: */
KAXACTR.data[13].Value = FDAACTR_genprocbit;
KAXACTR.data[14].Name = OBXACTR;
 /* line 83: */
KAXACTR.data[14].Value = GDAACTR_locgenbit;
KAXACTR.data[15].Name = QBXACTR;
 /* line 84: */
KAXACTR.data[15].Value = HDAACTR_locdydecbit;
SBXACTR_controlbits = A_HIS1ARR(RBXACTR,KAXACTR,A68_116 ,16);
 /* line 86: */
 /* line 87: */
 /* line 88: */
TBXACTR.data[0].Name = VBXACTR;
 /* line 89: */
TBXACTR.data[0].Value = NCAACTR_ccbit;
TBXACTR.data[1].Name = XBXACTR;
 /* line 90: */
TBXACTR.data[1].Value = OCAACTR_operatorbit;
TBXACTR.data[2].Name = ZBXACTR;
 /* line 91: */
TBXACTR.data[2].Value = PCAACTR_valbit;
TBXACTR.data[3].Name = BCXACTR;
 /* line 92: */
TBXACTR.data[3].Value = QCAACTR_holebit;
TBXACTR.data[4].Name = DCXACTR;
 /* line 93: */
TBXACTR.data[4].Value = FDAACTR_genprocbit;
TBXACTR.data[5].Name = FCXACTR;
 /* line 94: */
TBXACTR.data[5].Value = RCAACTR_globscopebit;
HCXACTR_routinebits = A_HIS1ARR(GCXACTR,TBXACTR,A68_116 ,6);
 /* line 108: */
 /* line 109: */
 /* line 110: */
 /* line 111: */
ICXACTR_maskgeneral = (A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )(SCAACTR_priobit|UCAACTR_semibit)|WCAACTR_decbit)|XCAACTR_vardecbit)|ADAACTR_labbit)|TCAACTR_exitbit)|GDAACTR_locgenbit)|HDAACTR_locdydecbit);
 /* line 112: */
 /* line 113: */
JCXACTR_maskdynamica = (A68_BITS )((A68_BITS )(CDAACTR_dyprocbit|DDAACTR_dyvardecbit)|EDAACTR_dydecbit);
 /* line 114: */
 /* line 115: */
 /* line 116: */
LCXACTR_maskdynamicc = (A68_BITS )((A68_BITS )((A68_BITS )(BDAACTR_dontpullbit|CDAACTR_dyprocbit)|DDAACTR_dyvardecbit)|EDAACTR_dydecbit);
 /* line 117: */
 /* line 118: */
MCXACTR_maskroutine = (A68_BITS )((A68_BITS )(FDAACTR_genprocbit|RCAACTR_globscopebit)|PCAACTR_valbit);
 /* line 119: */
 /* line 120: */
 /* line 121: */
 /* line 122: */
OCXACTR_maskxroutine = (A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )((A68_BITS )(NCAACTR_ccbit|OCAACTR_operatorbit)|PCAACTR_valbit)|QCAACTR_holebit)|RCAACTR_globscopebit)|FDAACTR_genprocbit);
 /* line 124: */
 /* line 145: */
 /* line 163: */
 /* line 602: */
A_PROC_EXIT(DECS mnemonics);
} 
#undef NL
/* end of translation of mnemonics.a68 */
