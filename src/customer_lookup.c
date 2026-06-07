#include "a4gl_incl_4glhdr.h"
extern int a4gl_lib_status;
static char *_module_name="customer_lookup.4gl";


A4GL_MAIN int main(int argc,char *argv[]);
#define fgldate long
static char const _rcsid[]="$FGLIdent: src/customer_lookup.4gl Compiler-1.63  Log:Not Set $";
static void a4gl_show_compiled_version(void) {
printf("Log: Not Set\n");
printf("Aubit4GL Version: 1.6.3\n");
exit(0);
}

static const char *_CompileTimeSQLType="esql";
static const struct sDependantTable _dependantTables[]= {
  {0,0}
};

extern struct {
   long sqlcode ;
   char sqlerrm [72+1];
   char sqlerrp [8+1];
   long sqlerrd[6] ;
   char sqlawarn [8+1];
   char sqlstate [9+1];
} a4gl_sqlca;
extern long a4gl_status ;
extern long aiplib_status ;
extern long curr_form ;
extern long curr_hwnd ;
extern char err_file_name [32+1];
extern long err_line_no ;
extern long err_status ;
extern long int_flag ;
extern long quit_flag ;

static int _done_init_module_variables=1;
A4GL_INTERNAL_FUNCTION static void init_module_variables(void) {
 static void *_objData[]={
NULL};
   if (_done_init_module_variables==0) return;
   _done_init_module_variables=0;
   A4GL_register_module_objects(_module_name, _objData);
   A4GL_check_version(_module_name,"1.6",3);
   A4GL_check_dependant_tables(_module_name, _CompileTimeSQLType, _dependantTables);
   /* Print nullify */
   // Initialise the current global variables
   // No global variables in use
   // Initialise any other global variables
}




A4GL_MAIN int main(int argc,char *argv[]) {
char *_paramnames[1]={""};
void *_blobdata=0;(void) _blobdata;
int _nargs=0;
static char *_functionName = "MAIN";
   char p_customer_code [20+1];
   char v_city [80+1];
   char v_email [120+1];
   char v_name [100+1];
   char v_status [1+1];
    void *_objData[]={
   NULL};
   A4GLSTK_setCurrentLine(0,0);
   if (A4GL_fgl_start(argc,argv)) {a4gl_show_compiled_version();}

   init_module_variables();
   /* Print nullify */
   A4GL_setnull(0,&p_customer_code,0x14); /*1 */
   A4GL_setnull(0,&v_city,0x50); /*1 */
   A4GL_setnull(0,&v_email,0x78); /*1 */
   A4GL_setnull(0,&v_name,0x64); /*1 */
   A4GL_setnull(0,&v_status,0x1); /*1 */
   A4GLSTK_initFunctionCallStack();
   A4GLSTK_pushFunction_v2(_functionName,_paramnames,_nargs,_module_name,1,_objData);

   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_CONNECT_CMD Line 13 E_MET_MAIN_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,13);
   aclfgli_clr_err_flg();
   {
   char *_sqltype=NULL;
   char *_u; char *_p;
   A4GL_push_char("informix");
   _u=A4GL_char_pop();
   A4GL_push_char("in4mix");
   _p=A4GL_char_pop();

   A4GL_init_session_with_sqltype(A4GL_get_ident("src/customer_lookup","session_id","a000session_i07132"),"portfolio_db",_u,_p, _sqltype);
   free(_u); free(_p);
   if (_sqltype) {free(_sqltype);}
   }
      ERR_CHK_SQLERROR  { A4GL_chk_err(13,_module_name); }
      ERR_CHK_ERROR  { A4GL_chk_err(13,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_LET_CMD Line 13 E_MET_MAIN_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,13);
   aclfgli_clr_err_flg();
   A4GL_push_char("CUST-003");

   A4GL_pop_var2(&p_customer_code,0,20);
      ERR_CHK_ERROR  { A4GL_chk_err(13,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_SELECT_CMD Line 15 E_MET_MAIN_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,15);
   aclfgli_clr_err_flg();
   {
   static struct BINDING ibind[1]={

   {NULL,0,20,0,0,0,NULL}
   };
   static struct BINDING obind[4]={

   {NULL,0,100,0,0,0,NULL},
   {NULL,0,120,0,0,0,NULL},
   {NULL,0,80,0,0,0,NULL},
   {NULL,0,1,0,0,0,NULL}
   };

   ibind[0].ptr=&p_customer_code;

   obind[0].ptr= & v_name;

   obind[1].ptr= & v_email;

   obind[2].ptr= & v_city;

   obind[3].ptr= & v_status;
   A4GL_execute_implicit_select(A4GL_prepare_select(ibind,1,obind,4,"SELECT name,   email,   city,   status  FROM customers WHERE customer_code=? ",_module_name,15,0,0),1); /* 0 */
   }
      ERR_CHK_SQLERROR  { A4GL_chk_err(15,_module_name); }
      ERR_CHK_ERROR  { A4GL_chk_err(15,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_DISPLAY_CMD Line 20 E_MET_MAIN_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,20);
   aclfgli_clr_err_flg();
   A4GL_push_char("Customer: ");

   A4GL_push_variable(&v_name,0x640000);
   A4GL_push_int(-1);
   A4GL_push_int(-1);
   A4GL_display_at(2,0xffffffff);
      ERR_CHK_ERROR  { A4GL_chk_err(20,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_DISPLAY_CMD Line 21 E_MET_MAIN_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,21);
   aclfgli_clr_err_flg();
   A4GL_push_char("Email   : ");

   A4GL_push_variable(&v_email,0x780000);
   A4GL_push_int(-1);
   A4GL_push_int(-1);
   A4GL_display_at(2,0xffffffff);
      ERR_CHK_ERROR  { A4GL_chk_err(21,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_DISPLAY_CMD Line 22 E_MET_MAIN_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,22);
   aclfgli_clr_err_flg();
   A4GL_push_char("City    : ");

   A4GL_push_variable(&v_city,0x500000);
   A4GL_push_int(-1);
   A4GL_push_int(-1);
   A4GL_display_at(2,0xffffffff);
      ERR_CHK_ERROR  { A4GL_chk_err(22,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_DISPLAY_CMD Line 23 E_MET_MAIN_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,23);
   aclfgli_clr_err_flg();
   A4GL_push_char("Status  : ");

   A4GL_push_variable(&v_status,0x10000);
   A4GL_push_int(-1);
   A4GL_push_int(-1);
   A4GL_display_at(2,0xffffffff);
      ERR_CHK_ERROR  { A4GL_chk_err(23,_module_name); }
   A4GLSTK_popFunction_nl(0, 24);
   A4GL_fgl_end_4gl_0();
   return 0;
}
/* END OF MODULE */
