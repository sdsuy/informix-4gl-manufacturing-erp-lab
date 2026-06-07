#include "a4gl_incl_4glhdr.h"
extern int a4gl_lib_status;
static char *_module_name="main.4gl";


A4GL_MAIN int main(int argc,char *argv[]);
A4GL_FUNCTION int aclfgl_customer_menu (int n);
A4GL_FUNCTION int aclfgl_product_menu (int n);
A4GL_FUNCTION int aclfgl_inventory_menu (int n);
A4GL_FUNCTION int aclfgl_sales_order_menu (int n);
#define fgldate long
static char const _rcsid[]="$FGLIdent: src/main.4gl Compiler-1.63  Log:Not Set $";
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
   /* CMD : E_CMD_MENU_CMD Line 19 E_MET_MAIN_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,19);
   aclfgli_clr_err_flg();
   {
   void *m_1=0;
   int cmd_no_1= -1; /* n=1 */
      MENU_START_1: ;
      while (cmd_no_1!= -3) {
          if (cmd_no_1==0) {
            A4GL_clr_ignore_error_list();
            /* CMD : E_CMD_CALL_CMD Line 5 E_MET_MAIN_DEFINITION */
            A4GLSTK_setCurrentLine(_module_name,5);
            aclfgli_clr_err_flg();
            /* done print expr */
            {int _retvars;A4GL_set_status(0,0);
            A4GLSTK_setCurrentLine(_module_name,5);
            _retvars=aclfgl_customer_menu(0);
            /* pr 1 */
            CHECK_NO_RETURN;
            }
               ERR_CHK_ERROR  { A4GL_chk_err(5,_module_name); }
            /* FORCE AROUND MENU LOOP AGAIN */ cmd_no_1= -4;goto MENU_START_1;  /* 1 */
         }
          if (cmd_no_1==1) {
            A4GL_clr_ignore_error_list();
            /* CMD : E_CMD_CALL_CMD Line 8 E_MET_MAIN_DEFINITION */
            A4GLSTK_setCurrentLine(_module_name,8);
            aclfgli_clr_err_flg();
            /* done print expr */
            {int _retvars;A4GL_set_status(0,0);
            A4GLSTK_setCurrentLine(_module_name,8);
            _retvars=aclfgl_product_menu(0);
            /* pr 1 */
            CHECK_NO_RETURN;
            }
               ERR_CHK_ERROR  { A4GL_chk_err(8,_module_name); }
            /* FORCE AROUND MENU LOOP AGAIN */ cmd_no_1= -4;goto MENU_START_1;  /* 1 */
         }
          if (cmd_no_1==2) {
            A4GL_clr_ignore_error_list();
            /* CMD : E_CMD_CALL_CMD Line 11 E_MET_MAIN_DEFINITION */
            A4GLSTK_setCurrentLine(_module_name,11);
            aclfgli_clr_err_flg();
            /* done print expr */
            {int _retvars;A4GL_set_status(0,0);
            A4GLSTK_setCurrentLine(_module_name,11);
            _retvars=aclfgl_inventory_menu(0);
            /* pr 1 */
            CHECK_NO_RETURN;
            }
               ERR_CHK_ERROR  { A4GL_chk_err(11,_module_name); }
            /* FORCE AROUND MENU LOOP AGAIN */ cmd_no_1= -4;goto MENU_START_1;  /* 1 */
         }
          if (cmd_no_1==3) {
            A4GL_clr_ignore_error_list();
            /* CMD : E_CMD_CALL_CMD Line 14 E_MET_MAIN_DEFINITION */
            A4GLSTK_setCurrentLine(_module_name,14);
            aclfgli_clr_err_flg();
            /* done print expr */
            {int _retvars;A4GL_set_status(0,0);
            A4GLSTK_setCurrentLine(_module_name,14);
            _retvars=aclfgl_sales_order_menu(0);
            /* pr 1 */
            CHECK_NO_RETURN;
            }
               ERR_CHK_ERROR  { A4GL_chk_err(14,_module_name); }
            /* FORCE AROUND MENU LOOP AGAIN */ cmd_no_1= -4;goto MENU_START_1;  /* 1 */
         }
          if (cmd_no_1==4) {
            A4GL_clr_ignore_error_list();
            /* CMD : E_CMD_EXT_CMD Line 14 E_MET_MAIN_DEFINITION */
            A4GLSTK_setCurrentLine(_module_name,14);
            cmd_no_1= -3;goto MENU_START_1;
            /* FORCE AROUND MENU LOOP AGAIN */ cmd_no_1= -4;goto MENU_START_1;  /* 1 */
         }
          if (cmd_no_1==5) {
            A4GL_clr_ignore_error_list();
            /* CMD : E_CMD_EXT_CMD Line 19 E_MET_MAIN_DEFINITION */
            A4GLSTK_setCurrentLine(_module_name,19);
            cmd_no_1= -3;goto MENU_START_1;
            /* FORCE AROUND MENU LOOP AGAIN */ cmd_no_1= -4;goto MENU_START_1;  /* 1 */
         }
         if (cmd_no_1== -1) {
            char *_mntitle;
            char *_mnoptiontitle;
            /* PRINT EXPR */
            A4GL_push_char("Manufacturing ERP");
            /* END PRINT EXPR */
            _mntitle=A4GL_char_pop(); /* ... */
            m_1=(void *)A4GL_new_menu_create_with_attr(_mntitle,1,1,2,0,"","","","","");
            free(_mntitle);

            A4GL_add_menu_option(m_1, "Customers","EMPTY","",0,0);

            A4GL_add_menu_option(m_1, "Products","EMPTY","",0,0);

            A4GL_add_menu_option(m_1, "Inventory","EMPTY","",0,0);

            A4GL_add_menu_option(m_1, "Sales Orders","EMPTY","",0,0);

            A4GL_add_menu_option(m_1, "Exit","EMPTY","",0,0);
            A4GL_add_menu_action(m_1, "fgl_exit_menu",5);
            A4GL_finish_create_menu(m_1);
            cmd_no_1= -2;
            continue;
         }
         CONTINUE_BLOCK_1: LABEL_USED   ;

         A4GL_ensure_menu_option(0, m_1, "Customers","EMPTY","",0,0);

         A4GL_ensure_menu_option(1, m_1, "Products","EMPTY","",0,0);

         A4GL_ensure_menu_option(2, m_1, "Inventory","EMPTY","",0,0);

         A4GL_ensure_menu_option(3, m_1, "Sales Orders","EMPTY","",0,0);

         A4GL_ensure_menu_option(4, m_1, "Exit","EMPTY","",0,0);
         cmd_no_1=A4GL_menu_loop_v2(m_1,0);
      }
      A4GL_free_menu(m_1);
   }
   END_BLOCK_1: LABEL_USED   ;
      ERR_CHK_ERROR  { A4GL_chk_err(19,_module_name); }
   A4GLSTK_popFunction_nl(0, 21);
   A4GL_fgl_end_4gl_0();
   return 0;
}



A4GL_FUNCTION int aclfgl_customer_menu (int _nargs){
void *_blobdata=0;(void) _blobdata;
static char *_functionName = "customer_menu";

struct BINDING _fbind[1]={ /* 0 print_param_g */
{NULL,0,0,0,0,0,NULL}
};
char *_paramnames[1]={ /* 0 */ /*print_param_g */
0
};
 void *_objData[]={
NULL};
A4GLSTK_pushFunction_v2(_functionName,_paramnames,_nargs,_module_name,22,_objData);
if (_nargs!=0) {A4GL_set_status(-3002,0);A4GL_pop_args(_nargs);A4GLSTK_popFunction_nl(0,22);return -1;}

   init_module_variables();
   /* Print nullify */
   {int _lstatus=a4gl_status;
   A4GL_pop_params_and_save_blobs(_fbind,0,&_blobdata);
   if (_lstatus!=a4gl_status) { A4GL_chk_err(22,_module_name);  }
   }

   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_DISPLAY_CMD Line 23 E_MET_FUNCTION_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,23);
   aclfgli_clr_err_flg();
   A4GL_push_char("Customer module selected.");
   A4GL_push_int(-1);
   A4GL_push_int(-1);
   A4GL_display_at(1,0xffffffff);
      ERR_CHK_ERROR  { A4GL_chk_err(23,_module_name); }
   A4GLSTK_popFunction_nl(0,25);
   A4GL_copy_back_blobs(_blobdata,0);
   return 0;
}




A4GL_FUNCTION int aclfgl_product_menu (int _nargs){
void *_blobdata=0;(void) _blobdata;
static char *_functionName = "product_menu";

struct BINDING _fbind[1]={ /* 0 print_param_g */
{NULL,0,0,0,0,0,NULL}
};
char *_paramnames[1]={ /* 0 */ /*print_param_g */
0
};
 void *_objData[]={
NULL};
A4GLSTK_pushFunction_v2(_functionName,_paramnames,_nargs,_module_name,26,_objData);
if (_nargs!=0) {A4GL_set_status(-3002,0);A4GL_pop_args(_nargs);A4GLSTK_popFunction_nl(0,26);return -1;}

   init_module_variables();
   /* Print nullify */
   {int _lstatus=a4gl_status;
   A4GL_pop_params_and_save_blobs(_fbind,0,&_blobdata);
   if (_lstatus!=a4gl_status) { A4GL_chk_err(26,_module_name);  }
   }

   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_DISPLAY_CMD Line 27 E_MET_FUNCTION_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,27);
   aclfgli_clr_err_flg();
   A4GL_push_char("Product module selected.");
   A4GL_push_int(-1);
   A4GL_push_int(-1);
   A4GL_display_at(1,0xffffffff);
      ERR_CHK_ERROR  { A4GL_chk_err(27,_module_name); }
   A4GLSTK_popFunction_nl(0,29);
   A4GL_copy_back_blobs(_blobdata,0);
   return 0;
}




A4GL_FUNCTION int aclfgl_inventory_menu (int _nargs){
void *_blobdata=0;(void) _blobdata;
static char *_functionName = "inventory_menu";

struct BINDING _fbind[1]={ /* 0 print_param_g */
{NULL,0,0,0,0,0,NULL}
};
char *_paramnames[1]={ /* 0 */ /*print_param_g */
0
};
 void *_objData[]={
NULL};
A4GLSTK_pushFunction_v2(_functionName,_paramnames,_nargs,_module_name,30,_objData);
if (_nargs!=0) {A4GL_set_status(-3002,0);A4GL_pop_args(_nargs);A4GLSTK_popFunction_nl(0,30);return -1;}

   init_module_variables();
   /* Print nullify */
   {int _lstatus=a4gl_status;
   A4GL_pop_params_and_save_blobs(_fbind,0,&_blobdata);
   if (_lstatus!=a4gl_status) { A4GL_chk_err(30,_module_name);  }
   }

   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_DISPLAY_CMD Line 31 E_MET_FUNCTION_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,31);
   aclfgli_clr_err_flg();
   A4GL_push_char("Inventory module selected.");
   A4GL_push_int(-1);
   A4GL_push_int(-1);
   A4GL_display_at(1,0xffffffff);
      ERR_CHK_ERROR  { A4GL_chk_err(31,_module_name); }
   A4GLSTK_popFunction_nl(0,33);
   A4GL_copy_back_blobs(_blobdata,0);
   return 0;
}




A4GL_FUNCTION int aclfgl_sales_order_menu (int _nargs){
void *_blobdata=0;(void) _blobdata;
static char *_functionName = "sales_order_menu";

struct BINDING _fbind[1]={ /* 0 print_param_g */
{NULL,0,0,0,0,0,NULL}
};
char *_paramnames[1]={ /* 0 */ /*print_param_g */
0
};
 void *_objData[]={
NULL};
A4GLSTK_pushFunction_v2(_functionName,_paramnames,_nargs,_module_name,34,_objData);
if (_nargs!=0) {A4GL_set_status(-3002,0);A4GL_pop_args(_nargs);A4GLSTK_popFunction_nl(0,34);return -1;}

   init_module_variables();
   /* Print nullify */
   {int _lstatus=a4gl_status;
   A4GL_pop_params_and_save_blobs(_fbind,0,&_blobdata);
   if (_lstatus!=a4gl_status) { A4GL_chk_err(34,_module_name);  }
   }

   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_DISPLAY_CMD Line 35 E_MET_FUNCTION_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,35);
   aclfgli_clr_err_flg();
   A4GL_push_char("Sales order module selected.");
   A4GL_push_int(-1);
   A4GL_push_int(-1);
   A4GL_display_at(1,0xffffffff);
      ERR_CHK_ERROR  { A4GL_chk_err(35,_module_name); }
   A4GLSTK_popFunction_nl(0,36);
   A4GL_copy_back_blobs(_blobdata,0);
   return 0;
}

/* END OF MODULE */
