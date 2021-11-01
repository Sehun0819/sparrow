// agedu-r8642.c: agedu.c:555
// alarms on (*opt) seem to be able to be removed.

static char const   * const  longopts[59]  = 
#line 386
  {      (char const   */* const  */)"scan",      (char const   */* const  */)"web",      (char const   */* const  */)"server",      (char const   */* const  */)"httpd", 
        (char const   */* const  */)"text",      (char const   */* const  */)"remove",      (char const   */* const  */)"delete",      (char const   */* const  */)"unlink", 
        (char const   */* const  */)"dump",      (char const   */* const  */)"load",      (char const   */* const  */)"scan_dump",      (char const   */* const  */)"html", 
        (char const   */* const  */)"file",      (char const   */* const  */)"cross_fs",      (char const   */* const  */)"no_cross_fs",      (char const   */* const  */)"prune", 
        (char const   */* const  */)"prune_path",      (char const   */* const  */)"exclude",      (char const   */* const  */)"exclude_path",      (char const   */* const  */)"include", 
        (char const   */* const  */)"include_path",      (char const   */* const  */)"progress",      (char const   */* const  */)"scan_progress",      (char const   */* const  */)"no_progress", 
        (char const   */* const  */)"no_scan_progress",      (char const   */* const  */)"tty_progress",      (char const   */* const  */)"tty_scan_progress",      (char const   */* const  */)"progress_tty", 
        (char const   */* const  */)"scan_progress_tty",      (char const   */* const  */)"dir_atime",      (char const   */* const  */)"dir_atimes",      (char const   */* const  */)"no_dir_atime", 
        (char const   */* const  */)"no_dir_atimes",      (char const   */* const  */)"mtime",      (char const   */* const  */)"files",      (char const   */* const  */)"age_range", 
        (char const   */* const  */)"range",      (char const   */* const  */)"ages",      (char const   */* const  */)"address",      (char const   */* const  */)"addr", 
        (char const   */* const  */)"server_address",      (char const   */* const  */)"server_addr",      (char const   */* const  */)"auth",      (char const   */* const  */)"http_auth", 
        (char const   */* const  */)"httpd_auth",      (char const   */* const  */)"server_auth",      (char const   */* const  */)"web_auth",      (char const   */* const  */)"auth_file", 
        (char const   */* const  */)"auth_fd",      (char const   */* const  */)"depth",      (char const   */* const  */)"max_depth",      (char const   */* const  */)"maximum_depth", 
        (char const   */* const  */)"age",      (char const   */* const  */)"min_age",      (char const   */* const  */)"minimum_age",      (char const   */* const  */)"help", 
        (char const   */* const  */)"version",      (char const   */* const  */)"licence",      (char const   */* const  */)"license"};

for (i = 0; i < NLONGOPTS; i++) {
    const char *opt = longopts[i], *s = p;
    int match = 1;
    /*
        * The underscores in the option names
        * defined above may be given by the user
        * as underscores or dashes, or omitted
        * entirely.
        */
    while (*opt) {
        if (*opt == '_') {
        if (*s == '-' || *s == '_')
            s++;
        } else {
        if (*opt != *s) {
            match = 0;
            break;
        }
        s++;
        }
        opt++;
    }
    if (match && !*s) {
        optid = longvals[i];
        break;
    }
}