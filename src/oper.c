/* UNAME:PQQACTR */
#include <algol68/Asupport.h>

A_PROCEDURE(A68_VOID ,A68t31,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t31  A68_31 ;    /* PROC(MODE26,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t32,(void),(void *));
typedef struct A68t32  A68_32 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t33,(A68_INT ),(A68_INT ,void *));
typedef struct A68t33  A68_33 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t34,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t34  A68_34 ;    /* PROC(MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t35,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t35  A68_35 ;    /* PROC(INT) REF MODE26 */
struct A68t37 ;

A_PROCEDURE(A68_VOID ,A68t36,(A68_INT ,struct A68t37 ),(A68_INT ,struct A68t37 ,void *));
typedef struct A68t36  A68_36 ;    /* PROC(INT,MODE37) VOID */
A_ROW(A68_VC ,A68t37,1);
typedef struct A68t37  A68_37 ;    /* [] MODE26 */

A_PROCEDURE(A68_BITS ,A68t38,(void),(void *));
typedef struct A68t38  A68_38 ;    /* PROC BITS */
struct A68t39{
A68_INT  Cfile;
A_PAD_INT(PAD_1)
};
typedef struct A68t39  A68_39 ;    /* STRUCT(INT)  */
struct A68t40{
A68_INT  Seedfile;
A_PAD_INT(PAD_2)
};
typedef struct A68t40  A68_40 ;    /* STRUCT(INT)  */
A_ISTRUCT(A68_CHAR ,7,A68t42);
typedef struct A68t42  A68_42 ;    /* STRUCT 7 CHAR */
struct A68t41 { A68_INT mode; union {
struct A68t39  mode1;
struct A68t40  mode2;
struct A68t42  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t41  A68_41 ;    /* UNION(MODE39,MODE40,MODE42,VOID)  */

A_PROCEDURE(A68_VOID ,A68t43,(A68_VC ),(A68_VC ,void *));
typedef struct A68t43  A68_43 ;    /* PROC(MODE26) VOID */
A_ROW(A68_BOOL ,A68t44,1);
typedef struct A68t44  A68_44 ;    /* [] BOOL */
struct A68t45{
A68_VC  Version;
A68_LINT  Translationtime;
A_PAD_LINT(PAD_3)
A68_VC  Sourcefile;
struct A68t42  Nameseed;
A_PAD_ISTRUCT(A68_42 ,PAD_4)
struct A68t41  Nameseedorigin;
struct A68t46 * Used_modules;
A68_VC  Commandline;
struct A68t47 * Environment;
};
typedef struct A68t45  A68_45 ;    /* STRUCT(REF MODE26,LONG INT,REF MODE26,MODE42,MODE41,REF MODE46,REF MODE26,REF MODE47)  */
struct A68t46{
A68_VC  Modinfo_file;
struct A68t46 * Next;
};
typedef struct A68t46  A68_46 ;    /* STRUCT(REF MODE26,REF MODE46)  */
struct A68t47{
A68_VC  Env_name;
A68_VC  Env_value;
struct A68t47 * Next;
};
typedef struct A68t47  A68_47 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE47)  */
struct A68t49 ;
struct A68t50 ;

A_PROCEDURE(struct A68t49 *,A68t48,(A68_VC ,struct A68t50 *,A68_VC *),(A68_VC ,struct A68t50 *,A68_VC *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(MODE26,REF MODE50,REF REF MODE26) REF MODE49 */
struct A68t49{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t49  A68_49 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t50{
A68_VC  Dir;
struct A68t50 * Next;
};
typedef struct A68t50  A68_50 ;    /* STRUCT(REF MODE26,REF MODE50)  */
struct A68t51{
A68_INT  Mode;
A_PAD_INT(PAD_5)
A68_VC  String;
};
typedef struct A68t51  A68_51 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t52{
A68_INT  I;
A_PAD_INT(PAD_6)
};
typedef struct A68t52  A68_52 ;    /* STRUCT(INT)  */
A_ROW(A68_INT ,A68t54,1);
typedef struct A68t54  A68_54 ;    /* [] INT */
struct A68t53{
A68_INT  Body;
A_PAD_INT(PAD_7)
A68_INT  Moduleno;
A_PAD_INT(PAD_8)
struct A68t54  Actuals;
};
typedef struct A68t53  A68_53 ;    /* STRUCT(INT,INT,REF MODE54)  */
struct A68t55{
A68_INT  Mode;
A_PAD_INT(PAD_9)
A68_INT  Number;
A_PAD_INT(PAD_10)
A68_VC  Insert;
};
typedef struct A68t55  A68_55 ;    /* STRUCT(INT,INT,REF MODE26)  */
struct A68t57{
A68_INT  Moduleno;
A_PAD_INT(PAD_11)
A68_INT  I;
A_PAD_INT(PAD_12)
A68_INT  J;
A_PAD_INT(PAD_13)
};
typedef struct A68t57  A68_57 ;    /* STRUCT(INT,INT,INT)  */
A_ROW(A68_VC ,A68t59,1);
typedef struct A68t59  A68_59 ;    /* [] REF MODE26 */
struct A68t58{
A68_INT  Moduleno;
A_PAD_INT(PAD_14)
A68_VC  Name;
A68_VC  Uname;
A68_VC  Lname;
A68_VC  Gname;
struct A68t59  Ysnames;
};
typedef struct A68t58  A68_58 ;    /* STRUCT(INT,REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE59)  */
struct A68t56 { A68_INT mode; union {
struct A68t53  mode1;
struct A68t57  mode2;
struct A68t58  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t56  A68_56 ;    /* UNION(MODE53,MODE57,MODE58)  */
struct A68t61{
A68_INT  Nochars;
A_PAD_INT(PAD_15)
A68_INT  Nocases;
A_PAD_INT(PAD_16)
A68_INT  W;
A_PAD_INT(PAD_17)
};
typedef struct A68t61  A68_61 ;    /* STRUCT(INT,INT,INT)  */
struct A68t60{
struct A68t61  Info;
A68_VC  Text;
};
typedef struct A68t60  A68_60 ;    /* STRUCT(MODE61,REF MODE26)  */
struct A68t62{
A68_INT  Type;
A_PAD_INT(PAD_18)
A68_VC  Name;
A68_INT  Mode;
A_PAD_INT(PAD_19)
A68_INT  Decno;
A_PAD_INT(PAD_20)
};
typedef struct A68t62  A68_62 ;    /* STRUCT(INT,REF MODE26,INT,INT)  */
struct A68t63{
A68_VC  Representation;
};
typedef struct A68t63  A68_63 ;    /* STRUCT(REF MODE26)  */
struct A68t65{
A68_INT  Nse;
A_PAD_INT(PAD_21)
};
typedef struct A68t65  A68_65 ;    /* STRUCT(INT)  */
struct A68t66{
A68_INT  Labno;
A_PAD_INT(PAD_22)
};
typedef struct A68t66  A68_66 ;    /* STRUCT(INT)  */
struct A68t67{
A68_INT  Mode;
A_PAD_INT(PAD_23)
A68_VC  Nu;
};
typedef struct A68t67  A68_67 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t68{
A68_INT  Mode;
A_PAD_INT(PAD_24)
A68_LBITS  Denotation;
A_PAD_LBITS(PAD_25)
};
typedef struct A68t68  A68_68 ;    /* STRUCT(INT,LONG BITS)  */
struct A68t69{
A68_INT  Mode;
A_PAD_INT(PAD_26)
A68_VC  Denotation;
};
typedef struct A68t69  A68_69 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t70{
A68_INT  Fn;
A_PAD_INT(PAD_27)
A68_INT  Mode;
A_PAD_INT(PAD_28)
A68_INT  Param;
A_PAD_INT(PAD_29)
};
typedef struct A68t70  A68_70 ;    /* STRUCT(INT,INT,INT)  */
struct A68t71{
A68_VC  Name;
A68_BITS  Props;
A_PAD_BITS(PAD_30)
A68_INT  Mode;
A_PAD_INT(PAD_31)
A68_INT  Rdenno;
A_PAD_INT(PAD_32)
A68_INT  Maxname;
A_PAD_INT(PAD_33)
};
typedef struct A68t71  A68_71 ;    /* STRUCT(REF MODE26,BITS,INT,INT,INT)  */
struct A68t72{
A68_INT  W;
A_PAD_INT(PAD_34)
};
typedef struct A68t72  A68_72 ;    /* STRUCT(INT)  */
struct A68t73{
A68_VC  Name;
A68_INT  Labno;
A_PAD_INT(PAD_35)
A68_INT  Status;
A_PAD_INT(PAD_36)
A68_BOOL  Notsetting;
A_PAD_BOOL(PAD_37)
};
typedef struct A68t73  A68_73 ;    /* STRUCT(REF MODE26,INT,INT,BOOL)  */
struct A68t74{
A68_INT  Mode;
A_PAD_INT(PAD_38)
A68_BITS  Props;
A_PAD_BITS(PAD_39)
A68_INT  Param;
A_PAD_INT(PAD_40)
};
typedef struct A68t74  A68_74 ;    /* STRUCT(INT,BITS,INT)  */
struct A68t75{
A68_BOOL  Start;
A_PAD_BOOL(PAD_41)
};
typedef struct A68t75  A68_75 ;    /* STRUCT(BOOL)  */
struct A68t76{
A68_INT  Fn;
A_PAD_INT(PAD_42)
A68_INT  Mode;
A_PAD_INT(PAD_43)
A68_BITS  Props;
A_PAD_BITS(PAD_44)
A68_INT  Param;
A_PAD_INT(PAD_45)
};
typedef struct A68t76  A68_76 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t77{
A68_INT  Fn;
A_PAD_INT(PAD_46)
A68_INT  Mode;
A_PAD_INT(PAD_47)
A68_BITS  Props;
A_PAD_BITS(PAD_48)
A68_INT  Resultmode;
A_PAD_INT(PAD_49)
};
typedef struct A68t77  A68_77 ;    /* STRUCT(INT,INT,BITS,INT)  */
struct A68t78{
A68_INT  Fn;
A_PAD_INT(PAD_50)
A68_BITS  Props;
A_PAD_BITS(PAD_51)
};
typedef struct A68t78  A68_78 ;    /* STRUCT(INT,BITS)  */
struct A68t64 { A68_INT mode; union {
struct A68t65  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t63  mode4;
struct A68t66  mode5;
struct A68t67  mode6;
struct A68t51  mode7;
struct A68t68  mode8;
struct A68t69  mode9;
struct A68t70  mode10;
struct A68t62  mode11;
struct A68t71  mode12;
struct A68t72  mode13;
struct A68t73  mode14;
struct A68t74  mode15;
struct A68t52  mode16;
struct A68t75  mode17;
struct A68t60  mode18;
struct A68t55  mode19;
struct A68t76  mode20;
struct A68t77  mode21;
struct A68t78  mode22;
struct A68t53  mode23;
struct A68t57  mode24;
struct A68t58  mode25;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t64  A68_64 ;    /* UNION(MODE65,INT,BOOL,MODE63,MODE66,MODE67,MODE51,MODE68,MODE69,MODE70,MODE62,MODE71,MODE72,MODE73,MODE74,MODE52,MODE75,MODE60,MODE55,MODE76,MODE77,MODE78,MODE53,MODE57,MODE58,VOID)  */
struct A68t79 { A68_INT mode; union {
struct A68t65  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t63  mode4;
struct A68t66  mode5;
struct A68t67  mode6;
struct A68t51  mode7;
struct A68t68  mode8;
struct A68t69  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t79  A68_79 ;    /* UNION(MODE65,INT,BOOL,MODE63,MODE66,MODE67,MODE51,MODE68,MODE69)  */
struct A68t80 { A68_INT mode; union {
struct A68t65  mode1;
A68_INT  mode2;
A68_BOOL  mode3;
struct A68t63  mode4;
struct A68t66  mode5;
struct A68t67  mode6;
struct A68t51  mode7;
struct A68t68  mode8;
struct A68t69  mode9;
struct A68t70  mode10;
struct A68t62  mode11;
struct A68t71  mode12;
struct A68t72  mode13;
struct A68t73  mode14;
struct A68t74  mode15;
struct A68t52  mode16;
struct A68t75  mode17;
struct A68t60  mode18;
struct A68t55  mode19;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t80  A68_80 ;    /* UNION(MODE65,INT,BOOL,MODE63,MODE66,MODE67,MODE51,MODE68,MODE69,MODE70,MODE62,MODE71,MODE72,MODE73,MODE74,MODE52,MODE75,MODE60,MODE55)  */
struct A68t83{
A68_INT  Rdenno;
A_PAD_INT(PAD_52)
};
typedef struct A68t83  A68_83 ;    /* STRUCT(INT)  */
struct A68t84{
A68_INT  Idno;
A_PAD_INT(PAD_53)
};
typedef struct A68t84  A68_84 ;    /* STRUCT(INT)  */
struct A68t85{
struct A68t42  Name;
A_PAD_ISTRUCT(A68_42 ,PAD_54)
A68_INT  Mode;
A_PAD_INT(PAD_55)
};
typedef struct A68t85  A68_85 ;    /* STRUCT(MODE42,INT)  */
struct A68t86{
A68_INT  Fn;
A_PAD_INT(PAD_56)
A68_INT  Param;
A_PAD_INT(PAD_57)
struct A68t87 * Operands;
};
typedef struct A68t86  A68_86 ;    /* STRUCT(INT,INT,REF MODE87)  */
struct A68t82 { A68_INT mode; union {
A68_LBITS  mode1;
struct A68t83  mode2;
struct A68t84  mode4;
struct A68t85  mode5;
A68_VC  mode6;
struct A68t66  mode7;
struct A68t65  mode8;
struct A68t86  mode9;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t82  A68_82 ;    /* UNION(LONG BITS,MODE83,VOID,MODE84,MODE85,MODE26,MODE66,MODE65,MODE86)  */
struct A68t81{
A68_INT  Mode;
A_PAD_INT(PAD_58)
A68_BITS  Info;
A_PAD_BITS(PAD_59)
struct A68t82  Extra;
};
typedef struct A68t81  A68_81 ;    /* STRUCT(INT,BITS,MODE82)  */
struct A68t87{
struct A68t81  Value;
struct A68t87 * Rest;
};
typedef struct A68t87  A68_87 ;    /* STRUCT(MODE81,REF MODE87)  */

A_PROCEDURE(A68_BOOL ,A68t88,(struct A68t81 *,struct A68t81 *),(struct A68t81 *,struct A68t81 *,void *));
typedef struct A68t88  A68_88 ;    /* PROC(REF MODE81,REF MODE81) BOOL */

A_PROCEDURE(A68_BOOL ,A68t89,(struct A68t81 *),(struct A68t81 *,void *));
typedef struct A68t89  A68_89 ;    /* PROC(REF MODE81) BOOL */

A_PROCEDURE(A68_BOOL ,A68t90,(struct A68t81 *,A68_LBITS ),(struct A68t81 *,A68_LBITS ,void *));
typedef struct A68t90  A68_90 ;    /* PROC(REF MODE81,LONG BITS) BOOL */

A_PROCEDURE(A68_LBITS ,A68t91,(struct A68t81 *),(struct A68t81 *,void *));
typedef struct A68t91  A68_91 ;    /* PROC(REF MODE81) LONG BITS */

A_PROCEDURE(A68_VOID ,A68t92,(struct A68t81 *,A68_VC *),(struct A68t81 *,A68_VC *,void *));
typedef struct A68t92  A68_92 ;    /* PROC(REF MODE81) MODE26 */

A_PROCEDURE(struct A68t81 *,A68t93,(struct A68t81 *,A68_INT ),(struct A68t81 *,A68_INT ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(REF MODE81,INT) REF MODE81 */

A_PROCEDURE(A68_INT ,A68t94,(struct A68t86 ),(struct A68t86 ,void *));
typedef struct A68t94  A68_94 ;    /* PROC(MODE86) INT */
struct A68t95{
struct A68t81 * Value;
struct A68t96 * End;
A68_INT  Type;
A_PAD_INT(PAD_60)
};
typedef struct A68t95  A68_95 ;    /* STRUCT(REF MODE81,REF MODE96,INT)  */
struct A68t96{
struct A68t42  Name;
A_PAD_ISTRUCT(A68_42 ,PAD_61)
A68_BOOL  Set;
A_PAD_BOOL(PAD_62)
};
typedef struct A68t96  A68_96 ;    /* STRUCT(MODE42,BOOL)  */

A_PROCEDURE(A68_BOOL ,A68t97,(struct A68t81 *,A68_BITS ),(struct A68t81 *,A68_BITS ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(REF MODE81,BITS) BOOL */

A_PROCEDURE(struct A68t81 *,A68t98,(struct A68t87 *,A68_INT ),(struct A68t87 *,A68_INT ,void *));
typedef struct A68t98  A68_98 ;    /* PROC(REF MODE87,INT) REF MODE81 */

A_PROCEDURE(A68_INT ,A68t99,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t99  A68_99 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(struct A68t87 *,A68t100,(struct A68t87 *),(struct A68t87 *,void *));
typedef struct A68t100  A68_100 ;    /* PROC(REF MODE87) REF MODE87 */
struct A68t102 ;

A_PROCEDURE(struct A68t81 *,A68t101,(A68_INT ,A68_INT ,A68_BITS ,struct A68t102 ),(A68_INT ,A68_INT ,A68_BITS ,struct A68t102 ,void *));
typedef struct A68t101  A68_101 ;    /* PROC(INT,INT,BITS,MODE102) REF MODE81 */
A_VECTOR(struct A68t81 *,A68t102);
typedef struct A68t102  A68_102 ;    /* VECTOR [] REF MODE81 */

A_PROCEDURE(A68_VOID ,A68t103,(struct A68t81 *),(struct A68t81 *,void *));
typedef struct A68t103  A68_103 ;    /* PROC(REF MODE81) VOID */

A_PROCEDURE(A68_VOID ,A68t104,(struct A68t81 *,A68_BOOL ,A68_VC *),(struct A68t81 *,A68_BOOL ,A68_VC *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(REF MODE81,BOOL) MODE26 */

A_PROCEDURE(A68_LINT ,A68t105,(struct A68t81 ),(struct A68t81 ,void *));
typedef struct A68t105  A68_105 ;    /* PROC(MODE81) LONG INT */

A_PROCEDURE(A68_VOID ,A68t106,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t106  A68_106 ;    /* PROC(MODE26) MODE26 */
struct A68t107 { A68_INT mode; union {
struct A68t81 * mode1;
A68_VC  mode2;
struct A68t85  mode3;
} data __attribute__ ((__aligned__(8))); };
typedef struct A68t107  A68_107 ;    /* UNION(REF MODE81,MODE26,MODE85)  */

A_PROCEDURE(A68_VOID ,A68t108,(struct A68t107 ,A68_VC *),(struct A68t107 ,A68_VC *,void *));
typedef struct A68t108  A68_108 ;    /* PROC(MODE107) MODE26 */
struct A68t110 ;

A_PROCEDURE(A68_VOID ,A68t109,(struct A68t110 ,A68_VC *),(struct A68t110 ,A68_VC *,void *));
typedef struct A68t109  A68_109 ;    /* PROC(MODE110) MODE26 */
A_VECTOR(struct A68t107 ,A68t110);
typedef struct A68t110  A68_110 ;    /* VECTOR [] MODE107 */

A_PROCEDURE(A68_VOID ,A68t111,(A68_VC ,struct A68t110 ,A68_VC *),(A68_VC ,struct A68t110 ,A68_VC *,void *));
typedef struct A68t111  A68_111 ;    /* PROC(MODE26,MODE110) MODE26 */

A_PROCEDURE(A68_VOID ,A68t112,(struct A68t110 ),(struct A68t110 ,void *));
typedef struct A68t112  A68_112 ;    /* PROC(MODE110) VOID */

A_PROCEDURE(A68_VOID ,A68t113,(A68_VC ,A68_INT ,struct A68t110 ,struct A68t85 *),(A68_VC ,A68_INT ,struct A68t110 ,struct A68t85 *,void *));
typedef struct A68t113  A68_113 ;    /* PROC(MODE26,INT,MODE110) MODE85 */

A_PROCEDURE(struct A68t81 *,A68t114,(struct A68t81 *),(struct A68t81 *,void *));
typedef struct A68t114  A68_114 ;    /* PROC(REF MODE81) REF MODE81 */

A_PROCEDURE(struct A68t81 *,A68t115,(A68_VC ,struct A68t81 *),(A68_VC ,struct A68t81 *,void *));
typedef struct A68t115  A68_115 ;    /* PROC(MODE26,REF MODE81) REF MODE81 */

A_PROCEDURE(A68_VOID ,A68t116,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t116  A68_116 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t117,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t117  A68_117 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t118,(struct A68t32 ),(struct A68t32 ,void *));
typedef struct A68t118  A68_118 ;    /* PROC(MODE32) VOID */

A_PROCEDURE(A68_VOID ,A68t119,(struct A68t43 ),(struct A68t43 ,void *));
typedef struct A68t119  A68_119 ;    /* PROC(MODE43) VOID */

A_PROCEDURE(A68_VOID ,A68t120,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t120  A68_120 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,54,A68t121);
typedef struct A68t121  A68_121 ;    /* STRUCT 54 CHAR */
A_ISTRUCT(A68_INT ,51,A68t122);
typedef struct A68t122  A68_122 ;    /* STRUCT 51 INT */
struct A68t123{
A68_INT  Number;
A_PAD_INT(PAD_63)
A68_INT  Procmode;
A_PAD_INT(PAD_64)
struct A68t87 * Parameters;
};
typedef struct A68t123  A68_123 ;    /* STRUCT(INT,INT,REF MODE87)  */

A_PROCEDURE(struct A68t87 *,A68t124,(struct A68t87 *,struct A68t87 *,A68_INT ,struct A68t87 **),(struct A68t87 *,struct A68t87 *,A68_INT ,struct A68t87 **,void *));
typedef struct A68t124  A68_124 ;    /* PROC(REF MODE87,REF MODE87,INT,REF REF MODE87) REF MODE87 */

A_PROCEDURE(A68_VOID ,A68t125,(struct A68t70 ,struct A68t87 **,struct A68t87 *),(struct A68t70 ,struct A68t87 **,struct A68t87 *,void *));
typedef struct A68t125  A68_125 ;    /* PROC(MODE70,REF REF MODE87,REF MODE87) VOID */

A_PROCEDURE(A68_VOID ,A68t126,(A68_INT ,A68_INT ,A68_INT ,struct A68t87 *),(A68_INT ,A68_INT ,A68_INT ,struct A68t87 *,void *));
typedef struct A68t126  A68_126 ;    /* PROC(INT,INT,INT,REF MODE87) VOID */

A_PROCEDURE(struct A68t87 *,A68t127,(struct A68t87 *,struct A68t87 ),(struct A68t87 *,struct A68t87 ,void *));
typedef struct A68t127  A68_127 ;    /* PROC(REF MODE87,MODE87) REF MODE87 */

A_PROCEDURE(struct A68t81 *,A68t128,(struct A68t81 *,struct A68t81 ),(struct A68t81 *,struct A68t81 ,void *));
typedef struct A68t128  A68_128 ;    /* PROC(REF MODE81,MODE81) REF MODE81 */

A_PROCEDURE(struct A68t82 *,A68t129,(struct A68t82 *,struct A68t82 ),(struct A68t82 *,struct A68t82 ,void *));
typedef struct A68t129  A68_129 ;    /* PROC(REF MODE82,MODE82) REF MODE82 */
#define A68_130  A68_VC 
#define A68t130 A68t26            /* FLEX VECTOR [] CHAR */

A_PROCEDURE(A68_VOID ,A68t131,(struct A68t87 **,A68_INT ,A68_INT ,A68_INT ,A68_BITS ,struct A68t87 *),(struct A68t87 **,A68_INT ,A68_INT ,A68_INT ,A68_BITS ,struct A68t87 *,void *));
typedef struct A68t131  A68_131 ;    /* PROC(REF REF MODE87,INT,INT,INT,BITS,REF MODE87) VOID */
A_ISTRUCT(A68_CHAR ,22,A68t132);
typedef struct A68t132  A68_132 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,26,A68t133);
typedef struct A68t133  A68_133 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t134);
typedef struct A68t134  A68_134 ;    /* STRUCT 20 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from values --- */
extern A68_BITS  PKJACTR_defaultinfo;
/* --- End of imports from values --- */


/* --- Imports from incoperfn --- */
#define DGAACTR_trimfn 5
#define EGAACTR_boundpackfn 9
#define KGAACTR_callfn 18
#define WGAACTR_operandsshift 18
extern A68_BITS  ZGAACTR_parammask;
/* --- End of imports from incoperfn --- */


/* --- Imports from incmode --- */
#define VEAACTR_faultmode 6
#define EFAACTR_intmode 15
#define OFAACTR_longlongcomplmode 25
#define PEAACTR_nomode 0
/* --- End of imports from incmode --- */


/* --- Imports from incimperatives --- */
/* --- End of imports from incimperatives --- */


/* --- Imports from environment --- */
extern A68_VOID  WXIACTR_assert(A68_VC ,A68_BOOL );
/* --- End of imports from environment --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void OUPACTR(void);   /* values */
extern void XFAACTR(void);   /* incoperfn */
extern void ZDAACTR(void);   /* incmode */
extern void UAAACTR(void);   /* incimperatives */
extern void HPIACTR(void);   /* environment */
/* --- end of DECS initialisation functions --- */
static A68_121   TQQACTR = {"$Id: oper.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,UQQACTR,TQQACTR,54)
#define VQQACTR_oneop 1
#define WQQACTR_twoop 2
#define XQQACTR_paramop 3
#define YQQACTR_paramplusoneop 4
#define ZQQACTR_defaultbound 5
#define ARQACTR_boundpack 6
#define BRQACTR_trim 7
#define CRQACTR_parameterpack 8
#define DRQACTR_call 9
#define ERQACTR_nullop 10
#define FRQACTR_zeroop 11
#define GRQACTR_formatop 12
static A68_54  JRQACTR_opertype A_UNUSED;
static A68_123  LRQACTR_noparameterinfo A_UNUSED;
static A68_123  MRQACTR_parameters A_UNUSED;
static A68_132   KUQACTR = {"parampack without call"}; 
A_GISVEC(A68_VC ,LUQACTR,KUQACTR,22)
static A68_133   OUQACTR = {"wrong parampack for a call"}; 
A_GISVEC(A68_VC ,PUQACTR,OUQACTR,26)
static A68_134   TUQACTR = {"invalid type in oper"}; 
A_GISVEC(A68_VC ,UUQACTR,TUQACTR,20)
typedef struct   /* env of non-global proc */
{
A68_87 ** Valuestack;
A68_87 * Newspace;
} ISQACTR_newstackitem;
typedef struct   /* env of non-global proc */
{
A68_126  GSQACTR_newstackitem;
} NTQACTR_simpleoper;

A_STATIC A68_87 * RRQACTR_breakvaluelist(A68_87 * List, A68_87 * Newbackoffrontlist, A68_INT  Index, A68_87 ** Backlistpointer);

A68_VOID  ASQACTR_oper(A68_70  Oper, A68_87 ** Valuestack, A68_87 * Newspace);

A_STATIC A68_VOID  HSQACTR_newstackitem(A68_INT  Mode, A68_INT  Fn, A68_INT  Param, A68_87 * Operands, void *NonLocals);

A_STATIC A68_87 * OSQACTR_assignment(A68_87 * MSQACTR_anonymous, A68_87  NSQACTR_anonymous);

A_STATIC A68_81 * RSQACTR_assignment(A68_81 * PSQACTR_anonymous, A68_81  QSQACTR_anonymous);

A_STATIC A68_82 * WSQACTR_assignment(A68_82 * USQACTR_anonymous, A68_82  VSQACTR_anonymous);

A_STATIC A68_VOID  MTQACTR_simpleoper(A68_87 ** Valuestack, A68_INT  Mode, A68_INT  Operfn, A68_INT  Numberoperands, A68_BITS  Param, A68_87 * Newspace, void *NonLocals);

A_STATIC A68_82 * WSQACTR_assignment(A68_82 * USQACTR_anonymous, A68_82  VSQACTR_anonymous)
{ 
A68_82  XSQACTR;  /* united object - for case conformity */
A68_VC  YSQACTR_anonymous A_UNUSED = {0};
A68_VC  ZSQACTR;  /* OPERATORS - copy to flex */
A68_130 * ATQACTR;  /* YIELD */
A68_82 * BTQACTR;  /* clause result */
{ 
(*USQACTR_anonymous) = VSQACTR_anonymous;
XSQACTR = VSQACTR_anonymous ;
switch ( XSQACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
YSQACTR_anonymous = (XSQACTR.data.mode6);
ATQACTR = &(USQACTR_anonymous-> data.mode6) ;
(void)((*ATQACTR) = A_VCOPY(YSQACTR_anonymous,ZSQACTR,A68_CHAR ));
break;
default: 
/*SKIP*/;
break;
} 
BTQACTR = USQACTR_anonymous;
} 
return( BTQACTR );
} 
#undef NL

A_STATIC A68_81 * RSQACTR_assignment(A68_81 * PSQACTR_anonymous, A68_81  QSQACTR_anonymous)
{ 
A68_INT * SSQACTR;  /* YIELD */
A68_BITS * TSQACTR;  /* YIELD */
A68_81 * CTQACTR;  /* clause result */
{ 
SSQACTR = (&(PSQACTR_anonymous->Mode)) ;
(*SSQACTR) = QSQACTR_anonymous.Mode;
TSQACTR = (&(PSQACTR_anonymous->Info)) ;
(*TSQACTR) = QSQACTR_anonymous.Info;
(void)(WSQACTR_assignment((&(PSQACTR_anonymous->Extra)), QSQACTR_anonymous.Extra));
CTQACTR = PSQACTR_anonymous;
} 
return( CTQACTR );
} 
#undef NL

A_STATIC A68_87 * OSQACTR_assignment(A68_87 * MSQACTR_anonymous, A68_87  NSQACTR_anonymous)
{ 
A68_87 ** DTQACTR;  /* YIELD */
A68_87 * ETQACTR;  /* clause result */
{ 
(void)(RSQACTR_assignment((&(MSQACTR_anonymous->Value)), NSQACTR_anonymous.Value));
DTQACTR = (&(MSQACTR_anonymous->Rest)) ;
(*DTQACTR) = NSQACTR_anonymous.Rest;
ETQACTR = MSQACTR_anonymous;
} 
return( ETQACTR );
} 
#undef NL

A_STATIC A68_VOID  HSQACTR_newstackitem(A68_INT  Mode, A68_INT  Fn, A68_INT  Param, A68_87 * Operands, void *NonLocals)
#define NL(x) (((ISQACTR_newstackitem *)NonLocals)->x)
{ 
A68_87  JSQACTR;  /* collateral clause result */
A68_86  KSQACTR;  /* collateral clause result */
A68_82  LSQACTR = {0};  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(newstackitem);
 /* line 171: */
 /* line 172: */
 /* line 173: */
 /* line 174: */
JSQACTR.Value.Mode = Mode;
 /* line 175: */
JSQACTR.Value.Info = PKJACTR_defaultinfo;
KSQACTR.Fn = Fn;
KSQACTR.Param = Param;
 /* line 176: */
KSQACTR.Operands = Operands;
 /* line 178: */
JSQACTR.Value.Extra = A_UNITE(LSQACTR,mode9,9,KSQACTR);
 /* line 179: */
JSQACTR.Rest = (*NL(Valuestack));
(void)((*NL(Valuestack)) = OSQACTR_assignment(NL(Newspace), JSQACTR));
A_PROC_EXIT(newstackitem);
return;
} 
#undef NL
 /* line 183: */
 /* line 184: */
 /* line 186: */

A_STATIC A68_VOID  MTQACTR_simpleoper(A68_87 ** Valuestack, A68_INT  Mode, A68_INT  Operfn, A68_INT  Numberoperands, A68_BITS  Param, A68_87 * Newspace, void *NonLocals)
#define NL(x) (((NTQACTR_simpleoper *)NonLocals)->x)
{ 
A68_87 * OTQACTR_operands A_UNUSED = {0};
A68_87 ** PTQACTR_breakpoint A_UNUSED = {0};
A68_INT  QTQACTR;  /* to part of loop */
A68_INT  RTQACTR;  /* loop control */
A68_BITS  STQACTR;  /* SHL */
A_PROC_ENTRY(simpleoper);
 /* line 191: */
 /* line 193: */
{ 
OTQACTR_operands = (*Valuestack);
 /* line 194: */
PTQACTR_breakpoint = Valuestack;
 /* line 195: */
QTQACTR = Numberoperands;
for ( RTQACTR = 1;
RTQACTR <= QTQACTR;
RTQACTR += 1 )
{ 
(void)(PTQACTR_breakpoint = (&((*PTQACTR_breakpoint)->Rest)));
}
 /* line 196: */
(void)((*Valuestack) = (*PTQACTR_breakpoint));
 /* line 197: */
(*PTQACTR_breakpoint) = (A68_87 *)A68_NIL;
 /* line 199: */
 /* line 200: */
 /* line 201: */
 /* line 202: */
 /* line 204: */
 /* line 205: */
STQACTR = (A68_BITS )Numberoperands ;
(void)(A_CALLPROC(NL(GSQACTR_newstackitem),(Mode, Operfn, (A68_INT )(A68_BITS )(A_SHL(STQACTR,WGAACTR_operandsshift)|Param), OTQACTR_operands),(Mode, Operfn, (A68_INT )(A68_BITS )(A_SHL(STQACTR,WGAACTR_operandsshift)|Param), OTQACTR_operands,(NL(GSQACTR_newstackitem)).nonlocals)));
} 
A_PROC_EXIT(simpleoper);
return;
} 
#undef NL
 /* line 120: */
 /* line 122: */

A_STATIC A68_87 * RRQACTR_breakvaluelist(A68_87 * List, A68_87 * Newbackoffrontlist, A68_INT  Index, A68_87 ** Backlistpointer)
{ 
A68_87 * SRQACTR_front A_UNUSED = {0};
A68_87 ** TRQACTR_breakpoint A_UNUSED = {0};
A68_INT  URQACTR;  /* to part of loop */
A68_INT  VRQACTR;  /* loop control */
A68_87 * WRQACTR;  /* clause result */
A_PROC_ENTRY(breakvaluelist);
 /* line 131: */
 /* line 132: */
{ 
SRQACTR_front = List;
 /* line 133: */
TRQACTR_breakpoint = (&SRQACTR_front);
 /* line 134: */
URQACTR = Index;
for ( VRQACTR = 1;
VRQACTR <= URQACTR;
VRQACTR += 1 )
{ 
(void)(TRQACTR_breakpoint = (&((*TRQACTR_breakpoint)->Rest)));
}
 /* line 135: */
(void)((*Backlistpointer) = (*TRQACTR_breakpoint));
 /* line 136: */
(*TRQACTR_breakpoint) = Newbackoffrontlist;
 /* line 137: */
 /* line 138: */
WRQACTR = SRQACTR_front;
} 
A_PROC_EXIT(breakvaluelist);
return( WRQACTR );
} 
#undef NL
 /* line 142: */
 /* line 144: */

A68_VOID  ASQACTR_oper(A68_70  Oper, A68_87 ** Valuestack, A68_87 * Newspace)
{ 
A68_126  GSQACTR_newstackitem;   /* proc value of non-global proc */
A68_131  LTQACTR_simpleoper;   /* proc value of non-global proc */
A68_BITS  TTQACTR_param A_UNUSED = {0};
A68_INT  UTQACTR_operfn A_UNUSED = {0};
A68_INT  VTQACTR_opermode A_UNUSED = {0};
A68_87 * WTQACTR_operands A_UNUSED = {0};
A68_87 ** XTQACTR;  /* YIELD */
A68_BITS  YTQACTR;  /* SHL */
A68_87 * ZTQACTR_operands A_UNUSED = {0};
A68_87 ** AUQACTR;  /* YIELD */
A68_BITS  BUQACTR;  /* SHL */
A68_87 * CUQACTR_operands A_UNUSED = {0};
A68_87 * DUQACTR_operands A_UNUSED = {0};
A68_BITS  EUQACTR;  /* SHL */
A68_81  FUQACTR;  /* collateral clause result */
A68_82  GUQACTR = {0};  /* OPERATORS - mode -> union mode */
A68_LBITS  HUQACTR;  /* YIELD */
A68_87 * IUQACTR_operands A_UNUSED = {0};
A68_87 * JUQACTR_operands A_UNUSED = {0};
A68_123  MUQACTR;  /* collateral clause result */
A68_INT * NUQACTR_procmode A_UNUSED = {0};
A68_87 * QUQACTR_operands A_UNUSED = {0};
A68_BITS  RUQACTR;  /* SHL */
A68_INT  SUQACTR;  /* clause result */
A_PROC_ENTRY(oper);
 /* line 167: */
 /* line 169: */
{ 
 /* line 170: */
A_CLOSURE( GSQACTR_newstackitem, HSQACTR_newstackitem, ISQACTR_newstackitem );
(( ISQACTR_newstackitem * ) ( GSQACTR_newstackitem.nonlocals )) -> Valuestack = Valuestack;
(( ISQACTR_newstackitem * ) ( GSQACTR_newstackitem.nonlocals )) -> Newspace = Newspace;
 /* line 181: */
 /* line 182: */
A_CLOSURE( LTQACTR_simpleoper, MTQACTR_simpleoper, NTQACTR_simpleoper );
(( NTQACTR_simpleoper * ) ( LTQACTR_simpleoper.nonlocals )) -> GSQACTR_newstackitem = GSQACTR_newstackitem;
 /* line 206: */
TTQACTR_param = (A68_BITS )((A68_BITS )Oper.Param&ZGAACTR_parammask);
 /* line 207: */
UTQACTR_operfn = Oper.Fn;
VTQACTR_opermode = Oper.Mode;
 /* line 208: */
 /* line 209: */
 /* line 211: */
switch ( A_R1INDEX(JRQACTR_opertype,UTQACTR_operfn) )
{ 
case 1: 
 /* line 212: */
{ 
WTQACTR_operands = (*Valuestack);
 /* line 213: */
(void)((*Valuestack) = (*(&((*Valuestack)->Rest))));
 /* line 214: */
XTQACTR = (&(WTQACTR_operands->Rest)) ;
(*XTQACTR) = (A68_87 *)A68_NIL;
 /* line 216: */
 /* line 217: */
 /* line 218: */
 /* line 219: */
 /* line 221: */
 /* line 222: */
 /* line 223: */
 /* line 225: */
YTQACTR = 01U ;
(void)(A_CALLPROC(GSQACTR_newstackitem,(VTQACTR_opermode, UTQACTR_operfn, (A68_INT )(A68_BITS )(A_SHL(YTQACTR,WGAACTR_operandsshift)|TTQACTR_param), WTQACTR_operands),(VTQACTR_opermode, UTQACTR_operfn, (A68_INT )(A68_BITS )(A_SHL(YTQACTR,WGAACTR_operandsshift)|TTQACTR_param), WTQACTR_operands,(GSQACTR_newstackitem).nonlocals)));
} 
break;
case 2: 
 /* line 226: */
{ 
ZTQACTR_operands = (*Valuestack);
 /* line 227: */
(void)((*Valuestack) = (*(&((*(&((*Valuestack)->Rest)))->Rest))));
 /* line 228: */
AUQACTR = (&((*(&(ZTQACTR_operands->Rest)))->Rest)) ;
(*AUQACTR) = (A68_87 *)A68_NIL;
 /* line 229: */
 /* line 230: */
 /* line 231: */
 /* line 232: */
 /* line 234: */
 /* line 235: */
 /* line 236: */
 /* line 238: */
BUQACTR = 02U ;
(void)(A_CALLPROC(GSQACTR_newstackitem,(VTQACTR_opermode, UTQACTR_operfn, (A68_INT )(A68_BITS )(A_SHL(BUQACTR,WGAACTR_operandsshift)|TTQACTR_param), ZTQACTR_operands),(VTQACTR_opermode, UTQACTR_operfn, (A68_INT )(A68_BITS )(A_SHL(BUQACTR,WGAACTR_operandsshift)|TTQACTR_param), ZTQACTR_operands,(GSQACTR_newstackitem).nonlocals)));
} 
break;
case 3: 
 /* line 240: */
{ 
CUQACTR_operands = RRQACTR_breakvaluelist((*Valuestack), (A68_87 *)A68_NIL, (A68_INT )TTQACTR_param, Valuestack);
 /* line 241: */
 /* line 242: */
 /* line 243: */
 /* line 244: */
 /* line 246: */
 /* line 247: */
 /* line 248: */
 /* line 250: */
(void)(A_CALLPROC(GSQACTR_newstackitem,(VTQACTR_opermode, UTQACTR_operfn, (A68_INT )(A68_BITS )(A_SHL(TTQACTR_param,WGAACTR_operandsshift)|TTQACTR_param), CUQACTR_operands),(VTQACTR_opermode, UTQACTR_operfn, (A68_INT )(A68_BITS )(A_SHL(TTQACTR_param,WGAACTR_operandsshift)|TTQACTR_param), CUQACTR_operands,(GSQACTR_newstackitem).nonlocals)));
} 
break;
case 4: 
 /* line 252: */
{ 
DUQACTR_operands = RRQACTR_breakvaluelist((*Valuestack), (A68_87 *)A68_NIL, ((A68_INT )TTQACTR_param+1), Valuestack);
 /* line 253: */
 /* line 254: */
 /* line 255: */
 /* line 256: */
 /* line 258: */
 /* line 259: */
 /* line 260: */
 /* line 262: */
EUQACTR = (A68_BITS )((A68_INT )TTQACTR_param+1) ;
(void)(A_CALLPROC(GSQACTR_newstackitem,(VTQACTR_opermode, UTQACTR_operfn, (A68_INT )(A68_BITS )(A_SHL(EUQACTR,WGAACTR_operandsshift)|TTQACTR_param), DUQACTR_operands),(VTQACTR_opermode, UTQACTR_operfn, (A68_INT )(A68_BITS )(A_SHL(EUQACTR,WGAACTR_operandsshift)|TTQACTR_param), DUQACTR_operands,(GSQACTR_newstackitem).nonlocals)));
} 
break;
case 5: 
 /* line 263: */
{ 
FUQACTR.Mode = EFAACTR_intmode;
FUQACTR.Info = PKJACTR_defaultinfo;
HUQACTR = (A68_LBITS )0X1U ;
FUQACTR.Extra = A_UNITE(GUQACTR,mode1,1,HUQACTR);
(void)(RSQACTR_assignment((&(Newspace->Value)), FUQACTR));
 /* line 264: */
 /* line 265: */
 /* line 266: */
 /* line 268: */
(void)(RRQACTR_breakvaluelist((*Valuestack), Newspace, 1, (&(Newspace->Rest))));
} 
break;
case 6: 
 /* line 270: */
{ 
IUQACTR_operands = RRQACTR_breakvaluelist((*Valuestack), (A68_87 *)A68_NIL, (A68_INT )TTQACTR_param, Valuestack);
 /* line 271: */
 /* line 272: */
 /* line 273: */
 /* line 274: */
 /* line 276: */
 /* line 277: */
 /* line 278: */
 /* line 280: */
(void)(A_CALLPROC(GSQACTR_newstackitem,(VEAACTR_faultmode, EGAACTR_boundpackfn, (A68_INT )(A68_BITS )(A_SHL(TTQACTR_param,WGAACTR_operandsshift)|TTQACTR_param), IUQACTR_operands),(VEAACTR_faultmode, EGAACTR_boundpackfn, (A68_INT )(A68_BITS )(A_SHL(TTQACTR_param,WGAACTR_operandsshift)|TTQACTR_param), IUQACTR_operands,(GSQACTR_newstackitem).nonlocals)));
} 
break;
case 7: 
 /* line 282: */
{ 
JUQACTR_operands = RRQACTR_breakvaluelist((*Valuestack), (A68_87 *)A68_NIL, (A68_INT )TTQACTR_param, Valuestack);
 /* line 283: */
 /* line 284: */
 /* line 285: */
 /* line 286: */
 /* line 288: */
 /* line 289: */
 /* line 290: */
 /* line 292: */
(void)(A_CALLPROC(GSQACTR_newstackitem,(VEAACTR_faultmode, DGAACTR_trimfn, (A68_INT )(A68_BITS )(A_SHL(TTQACTR_param,WGAACTR_operandsshift)|(A68_BITS )VTQACTR_opermode), JUQACTR_operands),(VEAACTR_faultmode, DGAACTR_trimfn, (A68_INT )(A68_BITS )(A_SHL(TTQACTR_param,WGAACTR_operandsshift)|(A68_BITS )VTQACTR_opermode), JUQACTR_operands,(GSQACTR_newstackitem).nonlocals)));
} 
break;
case 8: 
 /* line 294: */
{ 
(void)(WXIACTR_assert(LUQACTR, ((*(&((&MRQACTR_parameters)->Parameters)))==(A68_87 *)A68_NIL)));
 /* line 295: */
 /* line 296: */
 /* line 297: */
MUQACTR.Number = (A68_INT )TTQACTR_param;
 /* line 298: */
MUQACTR.Procmode = VTQACTR_opermode;
 /* line 299: */
 /* line 300: */
MUQACTR.Parameters = RRQACTR_breakvaluelist((*Valuestack), (A68_87 *)A68_NIL, (A68_INT )TTQACTR_param, Valuestack);
 /* line 301: */
 /* line 303: */
MRQACTR_parameters = MUQACTR;
} 
break;
case 9: 
 /* line 304: */
{ 
NUQACTR_procmode = (&((&((*Valuestack)->Value))->Mode));
 /* line 305: */
 /* line 307: */
if ((*NUQACTR_procmode)==OFAACTR_longlongcomplmode)
{ 
 /* line 308: */
(void)((*NUQACTR_procmode) = (*(&((&MRQACTR_parameters)->Procmode))));
} 
else
{ 
 /* line 309: */
 /* line 310: */
 /* line 311: */
 /* line 312: */
 /* line 313: */
 /* line 315: */
(void)(WXIACTR_assert(PUQACTR, ((((((*(&((&MRQACTR_parameters)->Procmode)))==PEAACTR_nomode)|((*(&((&MRQACTR_parameters)->Procmode)))==(*NUQACTR_procmode)))|(TTQACTR_param==01U))|(TTQACTR_param==02U))|(TTQACTR_param==03U))));
} 
 /* line 316: */
QUQACTR_operands = RRQACTR_breakvaluelist((*Valuestack), (*(&((&MRQACTR_parameters)->Parameters))), 1, Valuestack);
 /* line 317: */
 /* line 318: */
 /* line 319: */
 /* line 320: */
 /* line 322: */
RUQACTR = (A68_BITS )((*(&((&MRQACTR_parameters)->Number)))+1) ;
(void)(A_CALLPROC(GSQACTR_newstackitem,(VTQACTR_opermode, KGAACTR_callfn, (A68_INT )(A68_BITS )(A_SHL(RUQACTR,WGAACTR_operandsshift)|TTQACTR_param), QUQACTR_operands),(VTQACTR_opermode, KGAACTR_callfn, (A68_INT )(A68_BITS )(A_SHL(RUQACTR,WGAACTR_operandsshift)|TTQACTR_param), QUQACTR_operands,(GSQACTR_newstackitem).nonlocals)));
 /* line 323: */
 /* line 324: */
 /* line 327: */
MRQACTR_parameters = LRQACTR_noparameterinfo;
} 
break;
case 10: 
 /* line 330: */
/*SKIP*/;
break;
case 11: 
 /* line 331: */
 /* line 332: */
 /* line 334: */
 /* line 338: */
(void)(A_CALLPROC(GSQACTR_newstackitem,(VTQACTR_opermode, UTQACTR_operfn, (A68_INT )TTQACTR_param, (A68_87 *)A68_NIL),(VTQACTR_opermode, UTQACTR_operfn, (A68_INT )TTQACTR_param, (A68_87 *)A68_NIL,(GSQACTR_newstackitem).nonlocals)));
break;
case 12: 
 /* line 339: */
 /* line 340: */
 /* line 341: */
 /* line 342: */
 /* line 343: */
if (TTQACTR_param==0X0U)
{ 
 /* line 344: */
SUQACTR = 2;
} 
else
{ 
SUQACTR = 3;
} 
 /* line 345: */
 /* line 347: */
 /* line 348: */
(void)(A_CALLPROC(LTQACTR_simpleoper,(Valuestack, VTQACTR_opermode, UTQACTR_operfn, SUQACTR, TTQACTR_param, Newspace),(Valuestack, VTQACTR_opermode, UTQACTR_operfn, SUQACTR, TTQACTR_param, Newspace,(LTQACTR_simpleoper).nonlocals)));
break;
default: 
 /* line 349: */
 /* line 351: */
 /* line 353: */
(void)(WXIACTR_assert(UUQACTR, A68_FALSE));
break;
} 
} 
A_PROC_EXIT(oper);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 4: */
void QQQACTR(void)   /* initialise DECS oper */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel","-dir",".","oper.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/vak/Project/Algol/Algol-68RS-Source/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/vak/Project/Algol/Algol-68RS-Source/a68config/a68config.m","./values.m","./incoperfn.m","./incmode.m","./incimperatives.m","./environment.m",""};
static A_CONFIG_INFO A_config A_UNUSED;
/* --- end of configuration information */
A68_122  HRQACTR;  /* collateral clause result */
A68_54  IRQACTR;  /* OPERATORS - istruct to row */
A68_123  KRQACTR;  /* collateral clause result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
OUPACTR();   /* USE values */
XFAACTR();   /* USE incoperfn */
ZDAACTR();   /* USE incmode */
UAAACTR();   /* USE incimperatives */
HPIACTR();   /* USE environment */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/oper.a68";
A_config.translation_time = "Thu Nov  5 21:11:00 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "PQQACTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 21:11:00 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS oper);
(void)(UEAALIB_a68config(LGAALIB_configinfo, UQQACTR));
 /* line 43: */
 /* line 44: */
 /* line 45: */
 /* line 46: */
 /* line 47: */
 /* line 48: */
 /* line 49: */
 /* line 50: */
 /* line 51: */
 /* line 52: */
 /* line 53: */
 /* line 54: */
 /* line 56: */
 /* line 57: */
 /* line 58: */
 /* line 59: */
HRQACTR.data[0] = VQQACTR_oneop;
 /* line 60: */
HRQACTR.data[1] = CRQACTR_parameterpack;
 /* line 61: */
HRQACTR.data[2] = VQQACTR_oneop;
 /* line 62: */
HRQACTR.data[3] = VQQACTR_oneop;
 /* line 63: */
HRQACTR.data[4] = BRQACTR_trim;
 /* line 64: */
HRQACTR.data[5] = YQQACTR_paramplusoneop;
 /* line 65: */
HRQACTR.data[6] = YQQACTR_paramplusoneop;
 /* line 66: */
HRQACTR.data[7] = WQQACTR_twoop;
 /* line 67: */
HRQACTR.data[8] = ARQACTR_boundpack;
 /* line 68: */
HRQACTR.data[9] = WQQACTR_twoop;
 /* line 69: */
HRQACTR.data[10] = VQQACTR_oneop;
 /* line 70: */
HRQACTR.data[11] = WQQACTR_twoop;
 /* line 71: */
HRQACTR.data[12] = ERQACTR_nullop;
 /* line 72: */
HRQACTR.data[13] = WQQACTR_twoop;
 /* line 73: */
HRQACTR.data[14] = WQQACTR_twoop;
 /* line 74: */
HRQACTR.data[15] = ZQQACTR_defaultbound;
 /* line 75: */
HRQACTR.data[16] = VQQACTR_oneop;
 /* line 76: */
HRQACTR.data[17] = DRQACTR_call;
 /* line 77: */
HRQACTR.data[18] = VQQACTR_oneop;
 /* line 78: */
HRQACTR.data[19] = VQQACTR_oneop;
 /* line 79: */
HRQACTR.data[20] = VQQACTR_oneop;
 /* line 80: */
HRQACTR.data[21] = VQQACTR_oneop;
 /* line 81: */
HRQACTR.data[22] = VQQACTR_oneop;
 /* line 82: */
HRQACTR.data[23] = VQQACTR_oneop;
 /* line 83: */
HRQACTR.data[24] = VQQACTR_oneop;
 /* line 84: */
HRQACTR.data[25] = VQQACTR_oneop;
 /* line 85: */
HRQACTR.data[26] = VQQACTR_oneop;
 /* line 86: */
HRQACTR.data[27] = VQQACTR_oneop;
 /* line 87: */
HRQACTR.data[28] = VQQACTR_oneop;
 /* line 88: */
HRQACTR.data[29] = VQQACTR_oneop;
 /* line 89: */
HRQACTR.data[30] = VQQACTR_oneop;
 /* line 90: */
HRQACTR.data[31] = VQQACTR_oneop;
 /* line 91: */
HRQACTR.data[32] = VQQACTR_oneop;
 /* line 92: */
HRQACTR.data[33] = VQQACTR_oneop;
 /* line 93: */
HRQACTR.data[34] = VQQACTR_oneop;
 /* line 94: */
HRQACTR.data[35] = VQQACTR_oneop;
 /* line 95: */
HRQACTR.data[36] = VQQACTR_oneop;
 /* line 96: */
HRQACTR.data[37] = VQQACTR_oneop;
 /* line 97: */
HRQACTR.data[38] = VQQACTR_oneop;
 /* line 98: */
HRQACTR.data[39] = VQQACTR_oneop;
 /* line 99: */
HRQACTR.data[40] = 999;
 /* line 100: */
HRQACTR.data[41] = 999;
 /* line 101: */
HRQACTR.data[42] = 999;
 /* line 102: */
HRQACTR.data[43] = 999;
 /* line 103: */
HRQACTR.data[44] = 999;
 /* line 104: */
HRQACTR.data[45] = 999;
 /* line 105: */
HRQACTR.data[46] = 999;
 /* line 106: */
HRQACTR.data[47] = 999;
 /* line 108: */
HRQACTR.data[48] = 999;
 /* line 110: */
HRQACTR.data[49] = FRQACTR_zeroop;
HRQACTR.data[50] = GRQACTR_formatop;
JRQACTR_opertype = A_HIS1ARR(IRQACTR,HRQACTR,A68_INT ,51);
 /* line 112: */
 /* line 114: */
KRQACTR.Number = 0;
KRQACTR.Procmode = PEAACTR_nomode;
KRQACTR.Parameters = (A68_87 *)A68_NIL;
LRQACTR_noparameterinfo = KRQACTR;
 /* line 116: */
MRQACTR_parameters = LRQACTR_noparameterinfo;
 /* line 118: */
 /* line 119: */
 /* line 140: */
 /* line 141: */
 /* line 355: */
A_PROC_EXIT(DECS oper);
} 
#undef NL
/* end of translation of oper.a68 */
