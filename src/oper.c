/* UNAME:BQQACTR */
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
extern void AUPACTR(void);   /* values */
extern void XFAACTR(void);   /* incoperfn */
extern void ZDAACTR(void);   /* incmode */
extern void UAAACTR(void);   /* incimperatives */
extern void HPIACTR(void);   /* environment */
/* --- end of DECS initialisation functions --- */
static A68_121   FQQACTR = {"$Id: oper.a68,v 1.1.1.1 2001-05-07 10:16:10 sian Exp $"}; 
A_GISVEC(A68_VC ,GQQACTR,FQQACTR,54)
#define HQQACTR_oneop 1
#define IQQACTR_twoop 2
#define JQQACTR_paramop 3
#define KQQACTR_paramplusoneop 4
#define LQQACTR_defaultbound 5
#define MQQACTR_boundpack 6
#define NQQACTR_trim 7
#define OQQACTR_parameterpack 8
#define PQQACTR_call 9
#define QQQACTR_nullop 10
#define RQQACTR_zeroop 11
#define SQQACTR_formatop 12
static A68_54  VQQACTR_opertype;
static A68_123  XQQACTR_noparameterinfo;
static A68_123  YQQACTR_parameters;
static A68_132   WTQACTR = {"parampack without call"}; 
A_GISVEC(A68_VC ,XTQACTR,WTQACTR,22)
static A68_133   AUQACTR = {"wrong parampack for a call"}; 
A_GISVEC(A68_VC ,BUQACTR,AUQACTR,26)
static A68_134   FUQACTR = {"invalid type in oper"}; 
A_GISVEC(A68_VC ,GUQACTR,FUQACTR,20)
typedef struct   /* env of non-global proc */
{
A68_87 ** Valuestack;
A68_87 * Newspace;
} URQACTR_newstackitem;
typedef struct   /* env of non-global proc */
{
A68_126  SRQACTR_newstackitem;
} ZSQACTR_simpleoper;

A_STATIC A68_87 * DRQACTR_breakvaluelist(A68_87 * List, A68_87 * Newbackoffrontlist, A68_INT  Index, A68_87 ** Backlistpointer);

A68_VOID  MRQACTR_oper(A68_70  Oper, A68_87 ** Valuestack, A68_87 * Newspace);

A_STATIC A68_VOID  TRQACTR_newstackitem(A68_INT  Mode, A68_INT  Fn, A68_INT  Param, A68_87 * Operands, void *NonLocals);

A_STATIC A68_87 * ASQACTR_assignment(A68_87 * YRQACTR_anonymous, A68_87  ZRQACTR_anonymous);

A_STATIC A68_81 * DSQACTR_assignment(A68_81 * BSQACTR_anonymous, A68_81  CSQACTR_anonymous);

A_STATIC A68_82 * ISQACTR_assignment(A68_82 * GSQACTR_anonymous, A68_82  HSQACTR_anonymous);

A_STATIC A68_VOID  YSQACTR_simpleoper(A68_87 ** Valuestack, A68_INT  Mode, A68_INT  Operfn, A68_INT  Numberoperands, A68_BITS  Param, A68_87 * Newspace, void *NonLocals);

A_STATIC A68_82 * ISQACTR_assignment(A68_82 * GSQACTR_anonymous, A68_82  HSQACTR_anonymous)
{ 
A68_82  JSQACTR;  /* united object - for case conformity */
A68_VC  KSQACTR_anonymous;
A68_VC  LSQACTR;  /* OPERATORS - copy to flex */
A68_130 * MSQACTR;  /* YIELD */
A68_82 * NSQACTR;  /* clause result */
{ 
(*GSQACTR_anonymous) = HSQACTR_anonymous;
JSQACTR = HSQACTR_anonymous ;
switch ( JSQACTR.mode )
{ 
case 6: /* VECTOR [] CHAR */
KSQACTR_anonymous = (JSQACTR.data.mode6);
MSQACTR = &(GSQACTR_anonymous-> data.mode6) ;
(*MSQACTR) = A_VCOPY(KSQACTR_anonymous,LSQACTR,A68_CHAR );
break;
default: 
/*SKIP*/;
break;
} 
NSQACTR = GSQACTR_anonymous;
} 
return( NSQACTR );
} 
#undef NL

A_STATIC A68_81 * DSQACTR_assignment(A68_81 * BSQACTR_anonymous, A68_81  CSQACTR_anonymous)
{ 
A68_INT * ESQACTR;  /* YIELD */
A68_BITS * FSQACTR;  /* YIELD */
A68_81 * OSQACTR;  /* clause result */
{ 
ESQACTR = (&(BSQACTR_anonymous->Mode)) ;
(*ESQACTR) = CSQACTR_anonymous.Mode;
FSQACTR = (&(BSQACTR_anonymous->Info)) ;
(*FSQACTR) = CSQACTR_anonymous.Info;
ISQACTR_assignment((&(BSQACTR_anonymous->Extra)), CSQACTR_anonymous.Extra);
OSQACTR = BSQACTR_anonymous;
} 
return( OSQACTR );
} 
#undef NL

A_STATIC A68_87 * ASQACTR_assignment(A68_87 * YRQACTR_anonymous, A68_87  ZRQACTR_anonymous)
{ 
A68_87 ** PSQACTR;  /* YIELD */
A68_87 * QSQACTR;  /* clause result */
{ 
DSQACTR_assignment((&(YRQACTR_anonymous->Value)), ZRQACTR_anonymous.Value);
PSQACTR = (&(YRQACTR_anonymous->Rest)) ;
(*PSQACTR) = ZRQACTR_anonymous.Rest;
QSQACTR = YRQACTR_anonymous;
} 
return( QSQACTR );
} 
#undef NL

A_STATIC A68_VOID  TRQACTR_newstackitem(A68_INT  Mode, A68_INT  Fn, A68_INT  Param, A68_87 * Operands, void *NonLocals)
#define NL(x) (((URQACTR_newstackitem *)NonLocals)->x)
{ 
A68_87  VRQACTR;  /* collateral clause result */
A68_86  WRQACTR;  /* collateral clause result */
A68_82  XRQACTR;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(newstackitem);
 /* line 171: */
 /* line 172: */
 /* line 173: */
 /* line 174: */
VRQACTR.Value.Mode = Mode;
 /* line 175: */
VRQACTR.Value.Info = PKJACTR_defaultinfo;
WRQACTR.Fn = Fn;
WRQACTR.Param = Param;
 /* line 176: */
WRQACTR.Operands = Operands;
 /* line 178: */
VRQACTR.Value.Extra = A_UNITE(XRQACTR,mode9,9,WRQACTR);
 /* line 179: */
VRQACTR.Rest = (*NL(Valuestack));
(*NL(Valuestack)) = ASQACTR_assignment(NL(Newspace), VRQACTR);
A_PROC_EXIT(newstackitem);
return;
} 
#undef NL
 /* line 183: */
 /* line 184: */
 /* line 186: */

A_STATIC A68_VOID  YSQACTR_simpleoper(A68_87 ** Valuestack, A68_INT  Mode, A68_INT  Operfn, A68_INT  Numberoperands, A68_BITS  Param, A68_87 * Newspace, void *NonLocals)
#define NL(x) (((ZSQACTR_simpleoper *)NonLocals)->x)
{ 
A68_87 * ATQACTR_operands;
A68_87 ** BTQACTR_breakpoint;
A68_INT  CTQACTR;  /* to part of loop */
A68_INT  DTQACTR;  /* loop control */
A68_BITS  ETQACTR;  /* SHL */
A_PROC_ENTRY(simpleoper);
 /* line 191: */
 /* line 193: */
{ 
ATQACTR_operands = (*Valuestack);
 /* line 194: */
BTQACTR_breakpoint = Valuestack;
 /* line 195: */
CTQACTR = Numberoperands;
for ( DTQACTR = 1;
DTQACTR <= CTQACTR;
DTQACTR += 1 )
{ 
BTQACTR_breakpoint = (&((*BTQACTR_breakpoint)->Rest));
}
 /* line 196: */
(*Valuestack) = (*BTQACTR_breakpoint);
 /* line 197: */
(*BTQACTR_breakpoint) = (A68_87 *)A68_NIL;
 /* line 199: */
 /* line 200: */
 /* line 201: */
 /* line 202: */
 /* line 204: */
 /* line 205: */
ETQACTR = (A68_BITS )Numberoperands ;
A_CALLPROC(NL(SRQACTR_newstackitem),(Mode, Operfn, (A68_INT )(A68_BITS )(A_SHL(ETQACTR,WGAACTR_operandsshift)|Param), ATQACTR_operands),(Mode, Operfn, (A68_INT )(A68_BITS )(A_SHL(ETQACTR,WGAACTR_operandsshift)|Param), ATQACTR_operands,(NL(SRQACTR_newstackitem)).nonlocals));
} 
A_PROC_EXIT(simpleoper);
return;
} 
#undef NL
 /* line 120: */
 /* line 122: */

A_STATIC A68_87 * DRQACTR_breakvaluelist(A68_87 * List, A68_87 * Newbackoffrontlist, A68_INT  Index, A68_87 ** Backlistpointer)
{ 
A68_87 * ERQACTR_front;
A68_87 ** FRQACTR_breakpoint;
A68_INT  GRQACTR;  /* to part of loop */
A68_INT  HRQACTR;  /* loop control */
A68_87 * IRQACTR;  /* clause result */
A_PROC_ENTRY(breakvaluelist);
 /* line 131: */
 /* line 132: */
{ 
ERQACTR_front = List;
 /* line 133: */
FRQACTR_breakpoint = (&ERQACTR_front);
 /* line 134: */
GRQACTR = Index;
for ( HRQACTR = 1;
HRQACTR <= GRQACTR;
HRQACTR += 1 )
{ 
FRQACTR_breakpoint = (&((*FRQACTR_breakpoint)->Rest));
}
 /* line 135: */
(*Backlistpointer) = (*FRQACTR_breakpoint);
 /* line 136: */
(*FRQACTR_breakpoint) = Newbackoffrontlist;
 /* line 137: */
 /* line 138: */
IRQACTR = ERQACTR_front;
} 
A_PROC_EXIT(breakvaluelist);
return( IRQACTR );
} 
#undef NL
 /* line 142: */
 /* line 144: */

A68_VOID  MRQACTR_oper(A68_70  Oper, A68_87 ** Valuestack, A68_87 * Newspace)
{ 
A68_126  SRQACTR_newstackitem;   /* proc value of non-global proc */
A68_131  XSQACTR_simpleoper;   /* proc value of non-global proc */
A68_BITS  FTQACTR_param;
A68_INT  GTQACTR_operfn;
A68_INT  HTQACTR_opermode;
A68_87 * ITQACTR_operands;
A68_87 ** JTQACTR;  /* YIELD */
A68_BITS  KTQACTR;  /* SHL */
A68_87 * LTQACTR_operands;
A68_87 ** MTQACTR;  /* YIELD */
A68_BITS  NTQACTR;  /* SHL */
A68_87 * OTQACTR_operands;
A68_87 * PTQACTR_operands;
A68_BITS  QTQACTR;  /* SHL */
A68_81  RTQACTR;  /* collateral clause result */
A68_82  STQACTR;  /* OPERATORS - mode -> union mode */
A68_LBITS  TTQACTR;  /* YIELD */
A68_87 * UTQACTR_operands;
A68_87 * VTQACTR_operands;
A68_123  YTQACTR;  /* collateral clause result */
A68_INT * ZTQACTR_procmode;
A68_87 * CUQACTR_operands;
A68_BITS  DUQACTR;  /* SHL */
A68_INT  EUQACTR;  /* clause result */
A_PROC_ENTRY(oper);
 /* line 167: */
 /* line 169: */
{ 
 /* line 170: */
A_CLOSURE( SRQACTR_newstackitem, TRQACTR_newstackitem, URQACTR_newstackitem );
(( URQACTR_newstackitem * ) ( SRQACTR_newstackitem.nonlocals )) -> Valuestack = Valuestack;
(( URQACTR_newstackitem * ) ( SRQACTR_newstackitem.nonlocals )) -> Newspace = Newspace;
 /* line 181: */
 /* line 182: */
A_CLOSURE( XSQACTR_simpleoper, YSQACTR_simpleoper, ZSQACTR_simpleoper );
(( ZSQACTR_simpleoper * ) ( XSQACTR_simpleoper.nonlocals )) -> SRQACTR_newstackitem = SRQACTR_newstackitem;
 /* line 206: */
FTQACTR_param = (A68_BITS )((A68_BITS )Oper.Param&ZGAACTR_parammask);
 /* line 207: */
GTQACTR_operfn = Oper.Fn;
HTQACTR_opermode = Oper.Mode;
 /* line 208: */
 /* line 209: */
 /* line 211: */
switch ( A_R1INDEX(VQQACTR_opertype,GTQACTR_operfn) )
{ 
case 1: 
 /* line 212: */
{ 
ITQACTR_operands = (*Valuestack);
 /* line 213: */
(*Valuestack) = (*(&((*Valuestack)->Rest)));
 /* line 214: */
JTQACTR = (&(ITQACTR_operands->Rest)) ;
(*JTQACTR) = (A68_87 *)A68_NIL;
 /* line 216: */
 /* line 217: */
 /* line 218: */
 /* line 219: */
 /* line 221: */
 /* line 222: */
 /* line 223: */
 /* line 225: */
KTQACTR = 01U ;
A_CALLPROC(SRQACTR_newstackitem,(HTQACTR_opermode, GTQACTR_operfn, (A68_INT )(A68_BITS )(A_SHL(KTQACTR,WGAACTR_operandsshift)|FTQACTR_param), ITQACTR_operands),(HTQACTR_opermode, GTQACTR_operfn, (A68_INT )(A68_BITS )(A_SHL(KTQACTR,WGAACTR_operandsshift)|FTQACTR_param), ITQACTR_operands,(SRQACTR_newstackitem).nonlocals));
} 
break;
case 2: 
 /* line 226: */
{ 
LTQACTR_operands = (*Valuestack);
 /* line 227: */
(*Valuestack) = (*(&((*(&((*Valuestack)->Rest)))->Rest)));
 /* line 228: */
MTQACTR = (&((*(&(LTQACTR_operands->Rest)))->Rest)) ;
(*MTQACTR) = (A68_87 *)A68_NIL;
 /* line 229: */
 /* line 230: */
 /* line 231: */
 /* line 232: */
 /* line 234: */
 /* line 235: */
 /* line 236: */
 /* line 238: */
NTQACTR = 02U ;
A_CALLPROC(SRQACTR_newstackitem,(HTQACTR_opermode, GTQACTR_operfn, (A68_INT )(A68_BITS )(A_SHL(NTQACTR,WGAACTR_operandsshift)|FTQACTR_param), LTQACTR_operands),(HTQACTR_opermode, GTQACTR_operfn, (A68_INT )(A68_BITS )(A_SHL(NTQACTR,WGAACTR_operandsshift)|FTQACTR_param), LTQACTR_operands,(SRQACTR_newstackitem).nonlocals));
} 
break;
case 3: 
 /* line 240: */
{ 
OTQACTR_operands = DRQACTR_breakvaluelist((*Valuestack), (A68_87 *)A68_NIL, (A68_INT )FTQACTR_param, Valuestack);
 /* line 241: */
 /* line 242: */
 /* line 243: */
 /* line 244: */
 /* line 246: */
 /* line 247: */
 /* line 248: */
 /* line 250: */
A_CALLPROC(SRQACTR_newstackitem,(HTQACTR_opermode, GTQACTR_operfn, (A68_INT )(A68_BITS )(A_SHL(FTQACTR_param,WGAACTR_operandsshift)|FTQACTR_param), OTQACTR_operands),(HTQACTR_opermode, GTQACTR_operfn, (A68_INT )(A68_BITS )(A_SHL(FTQACTR_param,WGAACTR_operandsshift)|FTQACTR_param), OTQACTR_operands,(SRQACTR_newstackitem).nonlocals));
} 
break;
case 4: 
 /* line 252: */
{ 
PTQACTR_operands = DRQACTR_breakvaluelist((*Valuestack), (A68_87 *)A68_NIL, ((A68_INT )FTQACTR_param+1), Valuestack);
 /* line 253: */
 /* line 254: */
 /* line 255: */
 /* line 256: */
 /* line 258: */
 /* line 259: */
 /* line 260: */
 /* line 262: */
QTQACTR = (A68_BITS )((A68_INT )FTQACTR_param+1) ;
A_CALLPROC(SRQACTR_newstackitem,(HTQACTR_opermode, GTQACTR_operfn, (A68_INT )(A68_BITS )(A_SHL(QTQACTR,WGAACTR_operandsshift)|FTQACTR_param), PTQACTR_operands),(HTQACTR_opermode, GTQACTR_operfn, (A68_INT )(A68_BITS )(A_SHL(QTQACTR,WGAACTR_operandsshift)|FTQACTR_param), PTQACTR_operands,(SRQACTR_newstackitem).nonlocals));
} 
break;
case 5: 
 /* line 263: */
{ 
RTQACTR.Mode = EFAACTR_intmode;
RTQACTR.Info = PKJACTR_defaultinfo;
TTQACTR = (A68_LBITS )0X1U ;
RTQACTR.Extra = A_UNITE(STQACTR,mode1,1,TTQACTR);
DSQACTR_assignment((&(Newspace->Value)), RTQACTR);
 /* line 264: */
 /* line 265: */
 /* line 266: */
 /* line 268: */
DRQACTR_breakvaluelist((*Valuestack), Newspace, 1, (&(Newspace->Rest)));
} 
break;
case 6: 
 /* line 270: */
{ 
UTQACTR_operands = DRQACTR_breakvaluelist((*Valuestack), (A68_87 *)A68_NIL, (A68_INT )FTQACTR_param, Valuestack);
 /* line 271: */
 /* line 272: */
 /* line 273: */
 /* line 274: */
 /* line 276: */
 /* line 277: */
 /* line 278: */
 /* line 280: */
A_CALLPROC(SRQACTR_newstackitem,(VEAACTR_faultmode, EGAACTR_boundpackfn, (A68_INT )(A68_BITS )(A_SHL(FTQACTR_param,WGAACTR_operandsshift)|FTQACTR_param), UTQACTR_operands),(VEAACTR_faultmode, EGAACTR_boundpackfn, (A68_INT )(A68_BITS )(A_SHL(FTQACTR_param,WGAACTR_operandsshift)|FTQACTR_param), UTQACTR_operands,(SRQACTR_newstackitem).nonlocals));
} 
break;
case 7: 
 /* line 282: */
{ 
VTQACTR_operands = DRQACTR_breakvaluelist((*Valuestack), (A68_87 *)A68_NIL, (A68_INT )FTQACTR_param, Valuestack);
 /* line 283: */
 /* line 284: */
 /* line 285: */
 /* line 286: */
 /* line 288: */
 /* line 289: */
 /* line 290: */
 /* line 292: */
A_CALLPROC(SRQACTR_newstackitem,(VEAACTR_faultmode, DGAACTR_trimfn, (A68_INT )(A68_BITS )(A_SHL(FTQACTR_param,WGAACTR_operandsshift)|(A68_BITS )HTQACTR_opermode), VTQACTR_operands),(VEAACTR_faultmode, DGAACTR_trimfn, (A68_INT )(A68_BITS )(A_SHL(FTQACTR_param,WGAACTR_operandsshift)|(A68_BITS )HTQACTR_opermode), VTQACTR_operands,(SRQACTR_newstackitem).nonlocals));
} 
break;
case 8: 
 /* line 294: */
{ 
WXIACTR_assert(XTQACTR, ((*(&((&YQQACTR_parameters)->Parameters)))==(A68_87 *)A68_NIL));
 /* line 295: */
 /* line 296: */
 /* line 297: */
YTQACTR.Number = (A68_INT )FTQACTR_param;
 /* line 298: */
YTQACTR.Procmode = HTQACTR_opermode;
 /* line 299: */
 /* line 300: */
YTQACTR.Parameters = DRQACTR_breakvaluelist((*Valuestack), (A68_87 *)A68_NIL, (A68_INT )FTQACTR_param, Valuestack);
 /* line 301: */
 /* line 303: */
YQQACTR_parameters = YTQACTR;
} 
break;
case 9: 
 /* line 304: */
{ 
ZTQACTR_procmode = (&((&((*Valuestack)->Value))->Mode));
 /* line 305: */
 /* line 307: */
if ( ((*ZTQACTR_procmode)==OFAACTR_longlongcomplmode) )
{ 
 /* line 308: */
(*ZTQACTR_procmode) = (*(&((&YQQACTR_parameters)->Procmode)));
} 
else
{ 
 /* line 309: */
 /* line 310: */
 /* line 311: */
 /* line 312: */
 /* line 313: */
 /* line 315: */
WXIACTR_assert(BUQACTR, ((((((*(&((&YQQACTR_parameters)->Procmode)))==PEAACTR_nomode)|((*(&((&YQQACTR_parameters)->Procmode)))==(*ZTQACTR_procmode)))|(FTQACTR_param==01U))|(FTQACTR_param==02U))|(FTQACTR_param==03U)));
} 
 /* line 316: */
CUQACTR_operands = DRQACTR_breakvaluelist((*Valuestack), (*(&((&YQQACTR_parameters)->Parameters))), 1, Valuestack);
 /* line 317: */
 /* line 318: */
 /* line 319: */
 /* line 320: */
 /* line 322: */
DUQACTR = (A68_BITS )((*(&((&YQQACTR_parameters)->Number)))+1) ;
A_CALLPROC(SRQACTR_newstackitem,(HTQACTR_opermode, KGAACTR_callfn, (A68_INT )(A68_BITS )(A_SHL(DUQACTR,WGAACTR_operandsshift)|FTQACTR_param), CUQACTR_operands),(HTQACTR_opermode, KGAACTR_callfn, (A68_INT )(A68_BITS )(A_SHL(DUQACTR,WGAACTR_operandsshift)|FTQACTR_param), CUQACTR_operands,(SRQACTR_newstackitem).nonlocals));
 /* line 323: */
 /* line 324: */
 /* line 327: */
YQQACTR_parameters = XQQACTR_noparameterinfo;
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
A_CALLPROC(SRQACTR_newstackitem,(HTQACTR_opermode, GTQACTR_operfn, (A68_INT )FTQACTR_param, (A68_87 *)A68_NIL),(HTQACTR_opermode, GTQACTR_operfn, (A68_INT )FTQACTR_param, (A68_87 *)A68_NIL,(SRQACTR_newstackitem).nonlocals));
break;
case 12: 
 /* line 339: */
 /* line 340: */
 /* line 341: */
 /* line 342: */
 /* line 343: */
if ( (FTQACTR_param==0X0U) )
{ 
 /* line 344: */
EUQACTR = 2;
} 
else
{ 
EUQACTR = 3;
} 
 /* line 345: */
 /* line 347: */
 /* line 348: */
A_CALLPROC(XSQACTR_simpleoper,(Valuestack, HTQACTR_opermode, GTQACTR_operfn, EUQACTR, FTQACTR_param, Newspace),(Valuestack, HTQACTR_opermode, GTQACTR_operfn, EUQACTR, FTQACTR_param, Newspace,(XSQACTR_simpleoper).nonlocals));
break;
default: 
 /* line 349: */
 /* line 351: */
 /* line 353: */
WXIACTR_assert(GUQACTR, A68_FALSE);
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
void CQQACTR(void)   /* initialise DECS oper */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/home/vak/Project/Algol/Algol-68RS-Source/src/a68toc","-v","-uname","seedfile","-staredit","59LR","-lib","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/a68config","-dir","/home/vak/Project/Algol/Algol-68RS-Source/liba68prel","-dir",".","oper.a68",""};
static char *A_config_environment[] = {"A68_LIB=/home/vak/Project/Algol/Algol-68RS-Source/a68config","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=nameseed","CTRANS_NAMESEED=",""};
static char *A_config_modinfo_files[] = {"/home/vak/Project/Algol/Algol-68RS-Source/a68config/a68config.m","./values.m","./incoperfn.m","./incmode.m","./incimperatives.m","./environment.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_122  TQQACTR;  /* collateral clause result */
A68_54  UQQACTR;  /* OPERATORS - istruct to row */
A68_123  WQQACTR;  /* collateral clause result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
AUPACTR();   /* USE values */
XFAACTR();   /* USE incoperfn */
ZDAACTR();   /* USE incmode */
UAAACTR();   /* USE incimperatives */
HPIACTR();   /* USE environment */
/* --- Initialise configuration information */
A_config.source_file = "/home/vak/Project/Algol/Algol-68RS-Source/src/oper.a68";
A_config.translation_time = "Thu Nov  5 20:46:57 2026";
A_config.ctrans_version = "Ctrans_34.6";
A_config.name_seed = "BQQACTR (from seed file) ";
A_config.spec_change_time = "Thu Nov  5 20:46:57 2026";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS oper);
UEAALIB_a68config(LGAALIB_configinfo, GQQACTR);
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
TQQACTR.data[0] = HQQACTR_oneop;
 /* line 60: */
TQQACTR.data[1] = OQQACTR_parameterpack;
 /* line 61: */
TQQACTR.data[2] = HQQACTR_oneop;
 /* line 62: */
TQQACTR.data[3] = HQQACTR_oneop;
 /* line 63: */
TQQACTR.data[4] = NQQACTR_trim;
 /* line 64: */
TQQACTR.data[5] = KQQACTR_paramplusoneop;
 /* line 65: */
TQQACTR.data[6] = KQQACTR_paramplusoneop;
 /* line 66: */
TQQACTR.data[7] = IQQACTR_twoop;
 /* line 67: */
TQQACTR.data[8] = MQQACTR_boundpack;
 /* line 68: */
TQQACTR.data[9] = IQQACTR_twoop;
 /* line 69: */
TQQACTR.data[10] = HQQACTR_oneop;
 /* line 70: */
TQQACTR.data[11] = IQQACTR_twoop;
 /* line 71: */
TQQACTR.data[12] = QQQACTR_nullop;
 /* line 72: */
TQQACTR.data[13] = IQQACTR_twoop;
 /* line 73: */
TQQACTR.data[14] = IQQACTR_twoop;
 /* line 74: */
TQQACTR.data[15] = LQQACTR_defaultbound;
 /* line 75: */
TQQACTR.data[16] = HQQACTR_oneop;
 /* line 76: */
TQQACTR.data[17] = PQQACTR_call;
 /* line 77: */
TQQACTR.data[18] = HQQACTR_oneop;
 /* line 78: */
TQQACTR.data[19] = HQQACTR_oneop;
 /* line 79: */
TQQACTR.data[20] = HQQACTR_oneop;
 /* line 80: */
TQQACTR.data[21] = HQQACTR_oneop;
 /* line 81: */
TQQACTR.data[22] = HQQACTR_oneop;
 /* line 82: */
TQQACTR.data[23] = HQQACTR_oneop;
 /* line 83: */
TQQACTR.data[24] = HQQACTR_oneop;
 /* line 84: */
TQQACTR.data[25] = HQQACTR_oneop;
 /* line 85: */
TQQACTR.data[26] = HQQACTR_oneop;
 /* line 86: */
TQQACTR.data[27] = HQQACTR_oneop;
 /* line 87: */
TQQACTR.data[28] = HQQACTR_oneop;
 /* line 88: */
TQQACTR.data[29] = HQQACTR_oneop;
 /* line 89: */
TQQACTR.data[30] = HQQACTR_oneop;
 /* line 90: */
TQQACTR.data[31] = HQQACTR_oneop;
 /* line 91: */
TQQACTR.data[32] = HQQACTR_oneop;
 /* line 92: */
TQQACTR.data[33] = HQQACTR_oneop;
 /* line 93: */
TQQACTR.data[34] = HQQACTR_oneop;
 /* line 94: */
TQQACTR.data[35] = HQQACTR_oneop;
 /* line 95: */
TQQACTR.data[36] = HQQACTR_oneop;
 /* line 96: */
TQQACTR.data[37] = HQQACTR_oneop;
 /* line 97: */
TQQACTR.data[38] = HQQACTR_oneop;
 /* line 98: */
TQQACTR.data[39] = HQQACTR_oneop;
 /* line 99: */
TQQACTR.data[40] = 999;
 /* line 100: */
TQQACTR.data[41] = 999;
 /* line 101: */
TQQACTR.data[42] = 999;
 /* line 102: */
TQQACTR.data[43] = 999;
 /* line 103: */
TQQACTR.data[44] = 999;
 /* line 104: */
TQQACTR.data[45] = 999;
 /* line 105: */
TQQACTR.data[46] = 999;
 /* line 106: */
TQQACTR.data[47] = 999;
 /* line 108: */
TQQACTR.data[48] = 999;
 /* line 110: */
TQQACTR.data[49] = RQQACTR_zeroop;
TQQACTR.data[50] = SQQACTR_formatop;
VQQACTR_opertype = A_HIS1ARR(UQQACTR,TQQACTR,A68_INT ,51);
 /* line 112: */
 /* line 114: */
WQQACTR.Number = 0;
WQQACTR.Procmode = PEAACTR_nomode;
WQQACTR.Parameters = (A68_87 *)A68_NIL;
XQQACTR_noparameterinfo = WQQACTR;
 /* line 116: */
YQQACTR_parameters = XQQACTR_noparameterinfo;
 /* line 118: */
 /* line 119: */
 /* line 140: */
 /* line 141: */
 /* line 355: */
A_PROC_EXIT(DECS oper);
} 
#undef NL
/* end of translation of oper.a68 */
