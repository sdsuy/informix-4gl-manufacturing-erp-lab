#include "a4gl_incl_4glhdr.h"
extern int a4gl_lib_status;
static char *_module_name="customer_maintenance.4gl";


A4GL_MAIN int main(int argc,char *argv[]);
A4GL_FUNCTION int aclfgl_list_customers (int n);
A4GL_FUNCTION int aclfgl_find_customer (int n);
A4GL_FUNCTION int aclfgl_pause_screen (int n);
#define fgldate long
static char const _rcsid[]="$FGLIdent: src/customer_maintenance.4gl Compiler-1.63  Log:Not Set $";
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
    void *_objData[]={
   NULL};
   A4GLSTK_setCurrentLine(0,0);
   if (A4GL_fgl_start(argc,argv)) {a4gl_show_compiled_version();}

   init_module_variables();
   /* Print nullify */
   A4GLSTK_initFunctionCallStack();
   A4GLSTK_pushFunction_v2(_functionName,_paramnames,_nargs,_module_name,1,_objData);

   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_OPTIONS_CMD Line 2 E_MET_MAIN_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,2);
   aclfgli_clr_err_flg();

   {long _val;A4GL_push_long(20);_val=A4GL_pop_long();A4GL_set_option_value('P',_val);}

   {long _val;A4GL_push_long(21);_val=A4GL_pop_long();A4GL_set_option_value('m',_val);}

   {long _val;A4GL_push_long(22);_val=A4GL_pop_long();A4GL_set_option_value('E',_val);}
      ERR_CHK_ERROR  { A4GL_chk_err(2,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_OPEN_WINDOW_CMD Line 7 E_MET_MAIN_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,7);
   aclfgli_clr_err_flg();
   {
   int _attr=-1;
   char *_style=NULL;

   A4GL_push_long(2);A4GL_push_long(2);A4GL_push_long(20);A4GL_push_long(70);A4GL_cr_window("main_window",1,255,255,255,255,0,255,255,(0xffff),NULL /* STYLE */,0 /* TEXT */,0 /* config */);
   }
      ERR_CHK_ERROR  { A4GL_chk_err(7,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_CONNECT_CMD Line 15 E_MET_MAIN_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,15);
   aclfgli_clr_err_flg();
   {
   char *_sqltype=NULL;
   char *_u; char *_p;
   A4GL_push_char("informix");
   _u=A4GL_char_pop();
   A4GL_push_char("in4mix");
   _p=A4GL_char_pop();

   A4GL_init_session_with_sqltype(A4GL_get_ident("src/customer_maintenance","session_id","a000session_i07263"),"portfolio_db",_u,_p, _sqltype);
   free(_u); free(_p);
   if (_sqltype) {free(_sqltype);}
   }
      ERR_CHK_SQLERROR  { A4GL_chk_err(15,_module_name); }
      ERR_CHK_ERROR  { A4GL_chk_err(15,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_MENU_CMD Line 26 E_MET_MAIN_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,26);
   aclfgli_clr_err_flg();
   {
   void *m_1=0;
   int cmd_no_1= -1; /* n=1 */
      MENU_START_1: ;
      while (cmd_no_1!= -3) {
          if (cmd_no_1==0) {
            A4GL_clr_ignore_error_list();
            /* CMD : E_CMD_CALL_CMD Line 18 E_MET_MAIN_DEFINITION */
            A4GLSTK_setCurrentLine(_module_name,18);
            aclfgli_clr_err_flg();
            /* done print expr */
            {int _retvars;A4GL_set_status(0,0);
            A4GLSTK_setCurrentLine(_module_name,18);
            _retvars=aclfgl_list_customers(0);
            /* pr 1 */
            CHECK_NO_RETURN;
            }
               ERR_CHK_ERROR  { A4GL_chk_err(18,_module_name); }
            /* FORCE AROUND MENU LOOP AGAIN */ cmd_no_1= -4;goto MENU_START_1;  /* 1 */
         }
          if (cmd_no_1==1) {
            A4GL_clr_ignore_error_list();
            /* CMD : E_CMD_CALL_CMD Line 21 E_MET_MAIN_DEFINITION */
            A4GLSTK_setCurrentLine(_module_name,21);
            aclfgli_clr_err_flg();
            /* done print expr */
            {int _retvars;A4GL_set_status(0,0);
            A4GLSTK_setCurrentLine(_module_name,21);
            _retvars=aclfgl_find_customer(0);
            /* pr 1 */
            CHECK_NO_RETURN;
            }
               ERR_CHK_ERROR  { A4GL_chk_err(21,_module_name); }
            /* FORCE AROUND MENU LOOP AGAIN */ cmd_no_1= -4;goto MENU_START_1;  /* 1 */
         }
          if (cmd_no_1==2) {
            A4GL_clr_ignore_error_list();
            /* CMD : E_CMD_EXT_CMD Line 21 E_MET_MAIN_DEFINITION */
            A4GLSTK_setCurrentLine(_module_name,21);
            cmd_no_1= -3;goto MENU_START_1;
            /* FORCE AROUND MENU LOOP AGAIN */ cmd_no_1= -4;goto MENU_START_1;  /* 1 */
         }
          if (cmd_no_1==3) {
            A4GL_clr_ignore_error_list();
            /* CMD : E_CMD_EXT_CMD Line 26 E_MET_MAIN_DEFINITION */
            A4GLSTK_setCurrentLine(_module_name,26);
            cmd_no_1= -3;goto MENU_START_1;
            /* FORCE AROUND MENU LOOP AGAIN */ cmd_no_1= -4;goto MENU_START_1;  /* 1 */
         }
         if (cmd_no_1== -1) {
            char *_mntitle;
            char *_mnoptiontitle;
            /* PRINT EXPR */
            A4GL_push_char("Customer Maintenance");
            /* END PRINT EXPR */
            _mntitle=A4GL_char_pop(); /* ... */
            m_1=(void *)A4GL_new_menu_create_with_attr(_mntitle,1,1,2,0,"","","","","");
            free(_mntitle);

            A4GL_add_menu_option(m_1, "List Customers","EMPTY","",0,0);

            A4GL_add_menu_option(m_1, "Find Customer","EMPTY","",0,0);

            A4GL_add_menu_option(m_1, "Exit","EMPTY","",0,0);
            A4GL_add_menu_action(m_1, "fgl_exit_menu",3);
            A4GL_finish_create_menu(m_1);
            cmd_no_1= -2;
            continue;
         }
         CONTINUE_BLOCK_1: LABEL_USED   ;

         A4GL_ensure_menu_option(0, m_1, "List Customers","EMPTY","",0,0);

         A4GL_ensure_menu_option(1, m_1, "Find Customer","EMPTY","",0,0);

         A4GL_ensure_menu_option(2, m_1, "Exit","EMPTY","",0,0);
         cmd_no_1=A4GL_menu_loop_v2(m_1,0);
      }
      A4GL_free_menu(m_1);
   }
   END_BLOCK_1: LABEL_USED   ;
      ERR_CHK_ERROR  { A4GL_chk_err(26,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_CLOSE_CMD Line 28 E_MET_MAIN_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,28);
   aclfgli_clr_err_flg();

   A4GL_remove_window("main_window");
      ERR_CHK_ERROR  { A4GL_chk_err(28,_module_name); }
   A4GLSTK_popFunction_nl(0, 30);
   A4GL_fgl_end_4gl_0();
   return 0;
}



A4GL_FUNCTION int aclfgl_list_customers (int _nargs){
void *_blobdata=0;(void) _blobdata;
static char *_functionName = "list_customers";
char v_city [80+1];
char v_code [20+1];
long v_count ;
short v_line ;
char v_name [100+1];
char v_status [1+1];

struct BINDING _fbind[1]={ /* 0 print_param_g */
{NULL,0,0,0,0,0,NULL}
};
char *_paramnames[1]={ /* 0 */ /*print_param_g */
0
};
 void *_objData[]={
NULL};
A4GLSTK_pushFunction_v2(_functionName,_paramnames,_nargs,_module_name,32,_objData);
if (_nargs!=0) {A4GL_set_status(-3002,0);A4GL_pop_args(_nargs);A4GLSTK_popFunction_nl(0,32);return -1;}

   init_module_variables();
   /* Print nullify */
   A4GL_setnull(0,&v_city,0x50); /*1 */
   A4GL_setnull(0,&v_code,0x14); /*1 */
   v_count=0;
   v_line=0;
   A4GL_setnull(0,&v_name,0x64); /*1 */
   A4GL_setnull(0,&v_status,0x1); /*1 */
   {int _lstatus=a4gl_status;
   A4GL_pop_params_and_save_blobs(_fbind,0,&_blobdata);
   if (_lstatus!=a4gl_status) { A4GL_chk_err(32,_module_name);  }
   }

   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_CLEAR_CMD Line 40 E_MET_FUNCTION_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,40);
   aclfgli_clr_err_flg();

   A4GL_clr_window("main_window");
      ERR_CHK_ERROR  { A4GL_chk_err(40,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_DISPLAY_CMD Line 42 E_MET_FUNCTION_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,42);
   aclfgli_clr_err_flg();
   A4GL_push_char("CUSTOMER LIST");

   A4GL_push_long(2);

   A4GL_push_long(2);
   A4GL_display_at(1,0xffffffff);
      ERR_CHK_ERROR  { A4GL_chk_err(42,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_DISPLAY_CMD Line 43 E_MET_FUNCTION_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,43);
   aclfgli_clr_err_flg();
   A4GL_push_char("-------------");

   A4GL_push_long(3);

   A4GL_push_long(2);
   A4GL_display_at(1,0xffffffff);
      ERR_CHK_ERROR  { A4GL_chk_err(43,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_DISPLAY_CMD Line 45 E_MET_FUNCTION_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,45);
   aclfgli_clr_err_flg();
   A4GL_push_char("Code");

   A4GL_push_long(5);

   A4GL_push_long(2);
   A4GL_display_at(1,0xffffffff);
      ERR_CHK_ERROR  { A4GL_chk_err(45,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_DISPLAY_CMD Line 46 E_MET_FUNCTION_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,46);
   aclfgli_clr_err_flg();
   A4GL_push_char("Name");

   A4GL_push_long(5);

   A4GL_push_long(14);
   A4GL_display_at(1,0xffffffff);
      ERR_CHK_ERROR  { A4GL_chk_err(46,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_DISPLAY_CMD Line 47 E_MET_FUNCTION_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,47);
   aclfgli_clr_err_flg();
   A4GL_push_char("City");

   A4GL_push_long(5);

   A4GL_push_long(45);
   A4GL_display_at(1,0xffffffff);
      ERR_CHK_ERROR  { A4GL_chk_err(47,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_DISPLAY_CMD Line 48 E_MET_FUNCTION_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,48);
   aclfgli_clr_err_flg();
   A4GL_push_char("S");

   A4GL_push_long(5);

   A4GL_push_long(62);
   A4GL_display_at(1,0xffffffff);
      ERR_CHK_ERROR  { A4GL_chk_err(48,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_DISPLAY_CMD Line 50 E_MET_FUNCTION_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,50);
   aclfgli_clr_err_flg();
   A4GL_push_char("----------");

   A4GL_push_long(6);

   A4GL_push_long(2);
   A4GL_display_at(1,0xffffffff);
      ERR_CHK_ERROR  { A4GL_chk_err(50,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_DISPLAY_CMD Line 51 E_MET_FUNCTION_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,51);
   aclfgli_clr_err_flg();
   A4GL_push_char("------------------------------");

   A4GL_push_long(6);

   A4GL_push_long(14);
   A4GL_display_at(1,0xffffffff);
      ERR_CHK_ERROR  { A4GL_chk_err(51,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_DISPLAY_CMD Line 52 E_MET_FUNCTION_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,52);
   aclfgli_clr_err_flg();
   A4GL_push_char("---------------");

   A4GL_push_long(6);

   A4GL_push_long(45);
   A4GL_display_at(1,0xffffffff);
      ERR_CHK_ERROR  { A4GL_chk_err(52,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_DISPLAY_CMD Line 53 E_MET_FUNCTION_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,53);
   aclfgli_clr_err_flg();
   A4GL_push_char("-");

   A4GL_push_long(6);

   A4GL_push_long(62);
   A4GL_display_at(1,0xffffffff);
      ERR_CHK_ERROR  { A4GL_chk_err(53,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_LET_CMD Line 55 E_MET_FUNCTION_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,55);
   aclfgli_clr_err_flg();
   A4GL_push_long(7);

   A4GL_pop_var2(&v_line,1,0);
      ERR_CHK_ERROR  { A4GL_chk_err(55,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_LET_CMD Line 56 E_MET_FUNCTION_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,56);
   aclfgli_clr_err_flg();

   v_count=0;
      ERR_CHK_ERROR  { A4GL_chk_err(56,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_DECLARE_CMD Line 58 E_MET_FUNCTION_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,58);
   aclfgli_clr_err_flg();
   {
   char *_sql;
   _sql="SELECT customer_code,   name,   city,   status  FROM customers ORDER BY customer_code ASC";
   A4GL_declare_cursor(0,A4GL_prepare_select(NULL,0,NULL,0,_sql,_module_name,58,0,0),0,A4GL_get_ident("src/customer_maintenance","customer_cursor","a001customer_07263"));
   }
      ERR_CHK_SQLERROR  { A4GL_chk_err(58,_module_name); }
      ERR_CHK_ERROR  { A4GL_chk_err(58,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_FOREACH_CMD Line 63 E_MET_FUNCTION_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,63);
   {
      int _cursoropen=0;
      int _fetcherr=0;
      int _fetchstatus=0;
      A4GLSQL_set_sqlca_sqlcode(0);
      aclfgli_clr_err_flg();
      A4GL_open_cursor(A4GL_get_ident("src/customer_maintenance","customer_cursor","a001customer_07263"),0,0);
         ERR_CHK_SQLERROR  { A4GL_chk_err(63,_module_name); }
         ERR_CHK_ERROR  { A4GL_chk_err(63,_module_name); }
      if (a4gl_sqlca.sqlcode!=0) {
      goto END_BLOCK_2;
      }
      _cursoropen=1;
      while (1) {
      int _dobreak=0;
         static struct BINDING obind[4]={

         {NULL,0,20,0,0,0,NULL},
         {NULL,0,100,0,0,0,NULL},
         {NULL,0,80,0,0,0,NULL},
         {NULL,0,1,0,0,0,NULL}
         };

         obind[0].ptr= & v_code;

         obind[1].ptr= & v_name;

         obind[2].ptr= & v_city;

         obind[3].ptr= & v_status;
         A4GL_fetch_cursor(A4GL_get_ident("src/customer_maintenance","customer_cursor","a001customer_07263"),2,1,4,obind); /* Foreach next */
         if (a4gl_sqlca.sqlcode<0||a4gl_sqlca.sqlcode==100) {_dobreak++;}
         if (_dobreak) {
         break;
         }
         A4GL_clr_ignore_error_list();
         /* CMD : E_CMD_LET_CMD Line 64 E_MET_FUNCTION_DEFINITION */
         A4GLSTK_setCurrentLine(_module_name,64);
         aclfgli_clr_err_flg();

         A4GL_push_long(v_count);
         A4GL_push_long(1);
         A4GL_pushop(OP_ADD);

         A4GL_pop_var2(&v_count,2,0);
            ERR_CHK_ERROR  { A4GL_chk_err(64,_module_name); }
         A4GL_clr_ignore_error_list();
         /* CMD : E_CMD_DISPLAY_CMD Line 66 E_MET_FUNCTION_DEFINITION */
         A4GLSTK_setCurrentLine(_module_name,66);
         aclfgli_clr_err_flg();

         A4GL_push_variable(&v_code,0x140000);
         A4GL_pushop(OP_CLIP);

         A4GL_push_int(v_line);

         A4GL_push_long(2);
         A4GL_display_at(1,0xffffffff);
            ERR_CHK_ERROR  { A4GL_chk_err(66,_module_name); }
         A4GL_clr_ignore_error_list();
         /* CMD : E_CMD_DISPLAY_CMD Line 67 E_MET_FUNCTION_DEFINITION */
         A4GLSTK_setCurrentLine(_module_name,67);
         aclfgli_clr_err_flg();

         A4GL_push_variable(&v_name,0x640000);
         A4GL_pushop(OP_CLIP);

         A4GL_push_int(v_line);

         A4GL_push_long(14);
         A4GL_display_at(1,0xffffffff);
            ERR_CHK_ERROR  { A4GL_chk_err(67,_module_name); }
         A4GL_clr_ignore_error_list();
         /* CMD : E_CMD_DISPLAY_CMD Line 68 E_MET_FUNCTION_DEFINITION */
         A4GLSTK_setCurrentLine(_module_name,68);
         aclfgli_clr_err_flg();

         A4GL_push_variable(&v_city,0x500000);
         A4GL_pushop(OP_CLIP);

         A4GL_push_int(v_line);

         A4GL_push_long(45);
         A4GL_display_at(1,0xffffffff);
            ERR_CHK_ERROR  { A4GL_chk_err(68,_module_name); }
         A4GL_clr_ignore_error_list();
         /* CMD : E_CMD_DISPLAY_CMD Line 69 E_MET_FUNCTION_DEFINITION */
         A4GLSTK_setCurrentLine(_module_name,69);
         aclfgli_clr_err_flg();

         A4GL_push_variable(&v_status,0x10000);

         A4GL_push_int(v_line);

         A4GL_push_long(62);
         A4GL_display_at(1,0xffffffff);
            ERR_CHK_ERROR  { A4GL_chk_err(69,_module_name); }
         A4GL_clr_ignore_error_list();
         /* CMD : E_CMD_LET_CMD Line 71 E_MET_FUNCTION_DEFINITION */
         A4GLSTK_setCurrentLine(_module_name,71);
         aclfgli_clr_err_flg();

         A4GL_push_int(v_line);
         A4GL_push_long(1);
         A4GL_pushop(OP_ADD);

         A4GL_pop_var2(&v_line,1,0);
            ERR_CHK_ERROR  { A4GL_chk_err(71,_module_name); }
         A4GL_clr_ignore_error_list();
         /* CMD : E_CMD_IF_CMD Line 73 E_MET_FUNCTION_DEFINITION */
         A4GLSTK_setCurrentLine(_module_name,73);
         aclfgli_clr_err_flg();

         A4GL_push_int(v_line);
         A4GL_push_long(17);
         A4GL_pushop(OP_GREATER_THAN);
         if (A4GL_pop_bool()) {
            A4GL_clr_ignore_error_list();
            /* CMD : E_CMD_CALL_CMD Line 74 E_MET_FUNCTION_DEFINITION */
            A4GLSTK_setCurrentLine(_module_name,74);
            aclfgli_clr_err_flg();
            /* done print expr */
            {int _retvars;A4GL_set_status(0,0);
            A4GLSTK_setCurrentLine(_module_name,74);
            _retvars=aclfgl_pause_screen(0);
            /* pr 1 */
            CHECK_NO_RETURN;
            }
               ERR_CHK_ERROR  { A4GL_chk_err(74,_module_name); }
            A4GL_clr_ignore_error_list();
            /* CMD : E_CMD_CLEAR_CMD Line 75 E_MET_FUNCTION_DEFINITION */
            A4GLSTK_setCurrentLine(_module_name,75);
            aclfgli_clr_err_flg();

            A4GL_clr_window("main_window");
               ERR_CHK_ERROR  { A4GL_chk_err(75,_module_name); }
            A4GL_clr_ignore_error_list();
            /* CMD : E_CMD_DISPLAY_CMD Line 77 E_MET_FUNCTION_DEFINITION */
            A4GLSTK_setCurrentLine(_module_name,77);
            aclfgli_clr_err_flg();
            A4GL_push_char("CUSTOMER LIST - CONTINUED");

            A4GL_push_long(2);

            A4GL_push_long(2);
            A4GL_display_at(1,0xffffffff);
               ERR_CHK_ERROR  { A4GL_chk_err(77,_module_name); }
            A4GL_clr_ignore_error_list();
            /* CMD : E_CMD_DISPLAY_CMD Line 78 E_MET_FUNCTION_DEFINITION */
            A4GLSTK_setCurrentLine(_module_name,78);
            aclfgli_clr_err_flg();
            A4GL_push_char("-------------------------");

            A4GL_push_long(3);

            A4GL_push_long(2);
            A4GL_display_at(1,0xffffffff);
               ERR_CHK_ERROR  { A4GL_chk_err(78,_module_name); }
            A4GL_clr_ignore_error_list();
            /* CMD : E_CMD_DISPLAY_CMD Line 80 E_MET_FUNCTION_DEFINITION */
            A4GLSTK_setCurrentLine(_module_name,80);
            aclfgli_clr_err_flg();
            A4GL_push_char("Code");

            A4GL_push_long(5);

            A4GL_push_long(2);
            A4GL_display_at(1,0xffffffff);
               ERR_CHK_ERROR  { A4GL_chk_err(80,_module_name); }
            A4GL_clr_ignore_error_list();
            /* CMD : E_CMD_DISPLAY_CMD Line 81 E_MET_FUNCTION_DEFINITION */
            A4GLSTK_setCurrentLine(_module_name,81);
            aclfgli_clr_err_flg();
            A4GL_push_char("Name");

            A4GL_push_long(5);

            A4GL_push_long(14);
            A4GL_display_at(1,0xffffffff);
               ERR_CHK_ERROR  { A4GL_chk_err(81,_module_name); }
            A4GL_clr_ignore_error_list();
            /* CMD : E_CMD_DISPLAY_CMD Line 82 E_MET_FUNCTION_DEFINITION */
            A4GLSTK_setCurrentLine(_module_name,82);
            aclfgli_clr_err_flg();
            A4GL_push_char("City");

            A4GL_push_long(5);

            A4GL_push_long(45);
            A4GL_display_at(1,0xffffffff);
               ERR_CHK_ERROR  { A4GL_chk_err(82,_module_name); }
            A4GL_clr_ignore_error_list();
            /* CMD : E_CMD_DISPLAY_CMD Line 83 E_MET_FUNCTION_DEFINITION */
            A4GLSTK_setCurrentLine(_module_name,83);
            aclfgli_clr_err_flg();
            A4GL_push_char("S");

            A4GL_push_long(5);

            A4GL_push_long(62);
            A4GL_display_at(1,0xffffffff);
               ERR_CHK_ERROR  { A4GL_chk_err(83,_module_name); }
            A4GL_clr_ignore_error_list();
            /* CMD : E_CMD_DISPLAY_CMD Line 85 E_MET_FUNCTION_DEFINITION */
            A4GLSTK_setCurrentLine(_module_name,85);
            aclfgli_clr_err_flg();
            A4GL_push_char("----------");

            A4GL_push_long(6);

            A4GL_push_long(2);
            A4GL_display_at(1,0xffffffff);
               ERR_CHK_ERROR  { A4GL_chk_err(85,_module_name); }
            A4GL_clr_ignore_error_list();
            /* CMD : E_CMD_DISPLAY_CMD Line 86 E_MET_FUNCTION_DEFINITION */
            A4GLSTK_setCurrentLine(_module_name,86);
            aclfgli_clr_err_flg();
            A4GL_push_char("------------------------------");

            A4GL_push_long(6);

            A4GL_push_long(14);
            A4GL_display_at(1,0xffffffff);
               ERR_CHK_ERROR  { A4GL_chk_err(86,_module_name); }
            A4GL_clr_ignore_error_list();
            /* CMD : E_CMD_DISPLAY_CMD Line 87 E_MET_FUNCTION_DEFINITION */
            A4GLSTK_setCurrentLine(_module_name,87);
            aclfgli_clr_err_flg();
            A4GL_push_char("---------------");

            A4GL_push_long(6);

            A4GL_push_long(45);
            A4GL_display_at(1,0xffffffff);
               ERR_CHK_ERROR  { A4GL_chk_err(87,_module_name); }
            A4GL_clr_ignore_error_list();
            /* CMD : E_CMD_DISPLAY_CMD Line 88 E_MET_FUNCTION_DEFINITION */
            A4GLSTK_setCurrentLine(_module_name,88);
            aclfgli_clr_err_flg();
            A4GL_push_char("-");

            A4GL_push_long(6);

            A4GL_push_long(62);
            A4GL_display_at(1,0xffffffff);
               ERR_CHK_ERROR  { A4GL_chk_err(88,_module_name); }
            A4GL_clr_ignore_error_list();
            /* CMD : E_CMD_LET_CMD Line 90 E_MET_FUNCTION_DEFINITION */
            A4GLSTK_setCurrentLine(_module_name,90);
            aclfgli_clr_err_flg();
            A4GL_push_long(7);

            A4GL_pop_var2(&v_line,1,0);
               ERR_CHK_ERROR  { A4GL_chk_err(90,_module_name); }
         }
         CONTINUE_BLOCK_2:;
      }
      END_BLOCK_2:;
      if (_cursoropen) {
         A4GL_close_cursor(A4GL_get_ident("src/customer_maintenance","customer_cursor","a001customer_07263"),1);
         if (a4gl_status == 0) { if (_fetcherr) {A4GL_set_status(_fetcherr,1);}}
         if (a4gl_status == 100) { if (_fetcherr) {a4gl_sqlca.sqlcode = a4gl_status=_fetcherr;} else {a4gl_sqlca.sqlcode = a4gl_status = 0; }}
      }
   }
      ERR_CHK_SQLERROR  { A4GL_chk_err(63,_module_name); }
      ERR_CHK_ERROR  { A4GL_chk_err(63,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_IF_CMD Line 94 E_MET_FUNCTION_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,94);
   aclfgli_clr_err_flg();

   A4GL_push_long(v_count);
   A4GL_push_long(0);
   A4GL_pushop(OP_EQUAL);
   if (A4GL_pop_bool()) {
      A4GL_clr_ignore_error_list();
      /* CMD : E_CMD_DISPLAY_CMD Line 95 E_MET_FUNCTION_DEFINITION */
      A4GLSTK_setCurrentLine(_module_name,95);
      aclfgli_clr_err_flg();
      A4GL_push_char("No customers found.");

      A4GL_push_long(8);

      A4GL_push_long(2);
      A4GL_display_at(1,0xffffffff);
         ERR_CHK_ERROR  { A4GL_chk_err(95,_module_name); }
   }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_CALL_CMD Line 98 E_MET_FUNCTION_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,98);
   aclfgli_clr_err_flg();
   /* done print expr */
   {int _retvars;A4GL_set_status(0,0);
   A4GLSTK_setCurrentLine(_module_name,98);
   _retvars=aclfgl_pause_screen(0);
   /* pr 1 */
   CHECK_NO_RETURN;
   }
      ERR_CHK_ERROR  { A4GL_chk_err(98,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_CLEAR_CMD Line 99 E_MET_FUNCTION_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,99);
   aclfgli_clr_err_flg();

   A4GL_clr_window("main_window");
      ERR_CHK_ERROR  { A4GL_chk_err(99,_module_name); }
   A4GLSTK_popFunction_nl(0,101);
   A4GL_copy_back_blobs(_blobdata,0);
   return 0;
}




A4GL_FUNCTION int aclfgl_find_customer (int _nargs){
void *_blobdata=0;(void) _blobdata;
static char *_functionName = "find_customer";
char p_customer_code [20+1];
char v_city [80+1];
char v_email [120+1];
char v_name [100+1];
char v_status [1+1];

struct BINDING _fbind[1]={ /* 0 print_param_g */
{NULL,0,0,0,0,0,NULL}
};
char *_paramnames[1]={ /* 0 */ /*print_param_g */
0
};
 void *_objData[]={
NULL};
A4GLSTK_pushFunction_v2(_functionName,_paramnames,_nargs,_module_name,103,_objData);
if (_nargs!=0) {A4GL_set_status(-3002,0);A4GL_pop_args(_nargs);A4GLSTK_popFunction_nl(0,103);return -1;}

   init_module_variables();
   /* Print nullify */
   A4GL_setnull(0,&p_customer_code,0x14); /*1 */
   A4GL_setnull(0,&v_city,0x50); /*1 */
   A4GL_setnull(0,&v_email,0x78); /*1 */
   A4GL_setnull(0,&v_name,0x64); /*1 */
   A4GL_setnull(0,&v_status,0x1); /*1 */
   {int _lstatus=a4gl_status;
   A4GL_pop_params_and_save_blobs(_fbind,0,&_blobdata);
   if (_lstatus!=a4gl_status) { A4GL_chk_err(103,_module_name);  }
   }

   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_CLEAR_CMD Line 110 E_MET_FUNCTION_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,110);
   aclfgli_clr_err_flg();

   A4GL_clr_window("main_window");
      ERR_CHK_ERROR  { A4GL_chk_err(110,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_DISPLAY_CMD Line 112 E_MET_FUNCTION_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,112);
   aclfgli_clr_err_flg();
   A4GL_push_char("FIND CUSTOMER");

   A4GL_push_long(2);

   A4GL_push_long(2);
   A4GL_display_at(1,0xffffffff);
      ERR_CHK_ERROR  { A4GL_chk_err(112,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_DISPLAY_CMD Line 113 E_MET_FUNCTION_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,113);
   aclfgli_clr_err_flg();
   A4GL_push_char("-------------");

   A4GL_push_long(3);

   A4GL_push_long(2);
   A4GL_display_at(1,0xffffffff);
      ERR_CHK_ERROR  { A4GL_chk_err(113,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_PROMPT_CMD Line 115 E_MET_FUNCTION_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,115);
   aclfgli_clr_err_flg();
   {
      int _attr_prompt=-1;
      int _attr_field=-1;
      char _style[256]="";
      char _sio_2[72];int _fld_dr= -9999;int _exec_block= 0;char *_sio_kw_2="s_prompt";int _acl_prompt_timeout=0;
      static struct aclfgl_event_list _sio_evt[]={
       {0}};
      memset(_sio_2,0,sizeof(_sio_2));
      A4GL_push_char("Customer code: ");
      int _dtype_hint=0;
      _dtype_hint=1310720;
      if (A4GL_start_prompt(&_sio_2,_attr_prompt,0,0,_attr_field,"",_style,_dtype_hint)) {
         while (1) {
            CONTINUE_BLOCK_3:LABEL_USED ;
            if (GET_AS_INT("s_prompt",_sio_2,"mode")==2) break;
            _exec_block=A4GL_prompt_loop_v2(&_sio_2,_acl_prompt_timeout,_sio_evt);
         }

         A4GL_pop_var2(&p_customer_code,0,20);
      }
   }
   END_BLOCK_3: LABEL_USED;
      ERR_CHK_ERROR  { A4GL_chk_err(115,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_SELECT_CMD Line 117 E_MET_FUNCTION_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,117);
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
   A4GL_execute_implicit_select(A4GL_prepare_select(ibind,1,obind,4,"SELECT name,   email,   city,   status  FROM customers WHERE customer_code=? ",_module_name,117,0,0),1); /* 0 */
   }
      ERR_CHK_SQLERROR  { A4GL_chk_err(117,_module_name); }
      ERR_CHK_ERROR  { A4GL_chk_err(117,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_DISPLAY_CMD Line 122 E_MET_FUNCTION_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,122);
   aclfgli_clr_err_flg();
   A4GL_push_char("Customer: ");

   A4GL_push_variable(&v_name,0x640000);
   A4GL_pushop(OP_CLIP);

   A4GL_push_long(7);

   A4GL_push_long(2);
   A4GL_display_at(2,0xffffffff);
      ERR_CHK_ERROR  { A4GL_chk_err(122,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_DISPLAY_CMD Line 123 E_MET_FUNCTION_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,123);
   aclfgli_clr_err_flg();
   A4GL_push_char("Email   : ");

   A4GL_push_variable(&v_email,0x780000);
   A4GL_pushop(OP_CLIP);

   A4GL_push_long(8);

   A4GL_push_long(2);
   A4GL_display_at(2,0xffffffff);
      ERR_CHK_ERROR  { A4GL_chk_err(123,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_DISPLAY_CMD Line 124 E_MET_FUNCTION_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,124);
   aclfgli_clr_err_flg();
   A4GL_push_char("City    : ");

   A4GL_push_variable(&v_city,0x500000);
   A4GL_pushop(OP_CLIP);

   A4GL_push_long(9);

   A4GL_push_long(2);
   A4GL_display_at(2,0xffffffff);
      ERR_CHK_ERROR  { A4GL_chk_err(124,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_DISPLAY_CMD Line 125 E_MET_FUNCTION_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,125);
   aclfgli_clr_err_flg();
   A4GL_push_char("Status  : ");

   A4GL_push_variable(&v_status,0x10000);

   A4GL_push_long(10);

   A4GL_push_long(2);
   A4GL_display_at(2,0xffffffff);
      ERR_CHK_ERROR  { A4GL_chk_err(125,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_CALL_CMD Line 127 E_MET_FUNCTION_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,127);
   aclfgli_clr_err_flg();
   /* done print expr */
   {int _retvars;A4GL_set_status(0,0);
   A4GLSTK_setCurrentLine(_module_name,127);
   _retvars=aclfgl_pause_screen(0);
   /* pr 1 */
   CHECK_NO_RETURN;
   }
      ERR_CHK_ERROR  { A4GL_chk_err(127,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_CLEAR_CMD Line 128 E_MET_FUNCTION_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,128);
   aclfgli_clr_err_flg();

   A4GL_clr_window("main_window");
      ERR_CHK_ERROR  { A4GL_chk_err(128,_module_name); }
   A4GLSTK_popFunction_nl(0,130);
   A4GL_copy_back_blobs(_blobdata,0);
   return 0;
}




A4GL_FUNCTION int aclfgl_pause_screen (int _nargs){
void *_blobdata=0;(void) _blobdata;
static char *_functionName = "pause_screen";
char dummy [1+1];

struct BINDING _fbind[1]={ /* 0 print_param_g */
{NULL,0,0,0,0,0,NULL}
};
char *_paramnames[1]={ /* 0 */ /*print_param_g */
0
};
 void *_objData[]={
NULL};
A4GLSTK_pushFunction_v2(_functionName,_paramnames,_nargs,_module_name,132,_objData);
if (_nargs!=0) {A4GL_set_status(-3002,0);A4GL_pop_args(_nargs);A4GLSTK_popFunction_nl(0,132);return -1;}

   init_module_variables();
   /* Print nullify */
   A4GL_setnull(0,&dummy,0x1); /*1 */
   {int _lstatus=a4gl_status;
   A4GL_pop_params_and_save_blobs(_fbind,0,&_blobdata);
   if (_lstatus!=a4gl_status) { A4GL_chk_err(132,_module_name);  }
   }

   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_PROMPT_CMD Line 135 E_MET_FUNCTION_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,135);
   aclfgli_clr_err_flg();
   {
      int _attr_prompt=-1;
      int _attr_field=-1;
      char _style[256]="";
      char _sio_2[72];int _fld_dr= -9999;int _exec_block= 0;char *_sio_kw_2="s_prompt";int _acl_prompt_timeout=0;
      static struct aclfgl_event_list _sio_evt[]={
       {0}};
      memset(_sio_2,0,sizeof(_sio_2));
      A4GL_push_char("Press ENTER to continue...");
      int _dtype_hint=0;
      _dtype_hint=65536;
      if (A4GL_start_prompt(&_sio_2,_attr_prompt,0,0,_attr_field,"",_style,_dtype_hint)) {
         while (1) {
            CONTINUE_BLOCK_4:LABEL_USED ;
            if (GET_AS_INT("s_prompt",_sio_2,"mode")==2) break;
            _exec_block=A4GL_prompt_loop_v2(&_sio_2,_acl_prompt_timeout,_sio_evt);
         }

         A4GL_pop_var2(&dummy,0,1);
      }
   }
   END_BLOCK_4: LABEL_USED;
      ERR_CHK_ERROR  { A4GL_chk_err(135,_module_name); }
   A4GLSTK_popFunction_nl(0,137);
   A4GL_copy_back_blobs(_blobdata,0);
   return 0;
}

/* END OF MODULE */
