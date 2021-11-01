// aewan-1.0.01.c: welcomedlg.c:75
//
// in outer for-loop, two ptr variables are inceremted, while only one of them affects termination.
// both outer and inner loop termination rely on an constant 2d array.

static char* logo[] = {
   "79         ",
   "||         ",
   "46799 97979",
   "||43|||||||",
   "311-1231231",
   NULL
};

static int logo_colors[LOGO_HEIGHT] = { 4, 6, 7, 6, 4 };

void show_welcome_dlg(void) {
   int x0, y0, x, y, ch, *clr;
   char **p, *q;
   int acschars[10] = {
      ACS_CKBOARD,      /* 0 */
      ACS_LLCORNER,     /* 1 */
      ACS_BTEE,         /* 2 */ 
      ACS_LRCORNER,     /* 3 */
      ACS_LTEE,         /* 4 */
      ACS_PLUS,         /* 5 */
      ACS_RTEE,         /* 6 */
      ACS_ULCORNER,     /* 7 */
      ACS_TTEE,         /* 8 */
      ACS_URCORNER      /* 9 */
   };

   kurses_color(4, 0);
   draw_centered_window(46, 18, "Welcome to AEWAN", &x0, &y0);
   y = y0 + 1;

   /* draw logo */
   for (p = logo, clr = logo_colors; *p; p++, clr++) {
      kurses_color(*clr, 0);
      kurses_move(x0, y++);
      for (q = *p; *q; q++) {
         if (*q >= '0' && *q <= '9') ch = acschars[*q - '0'];
         else if (*q == '-')         ch = ACS_HLINE;
         else if (*q == '|')         ch = ACS_VLINE;
         else                        ch = ' ';
         addch(ch);
      }
   }
}