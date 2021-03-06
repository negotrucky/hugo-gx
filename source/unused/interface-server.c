/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks-server.h"
#include "interface-server.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_window_main (void)
{
  GtkWidget *window_main;
  GtkWidget *vbox1;
  GtkWidget *hbox1;
  GtkWidget *image1;
  GtkWidget *table1;
  GtkWidget *label3;
  GtkWidget *label4;
  GtkWidget *label5;
  GtkWidget *radiobutton_internet;
  GSList *radiobutton_internet_group = NULL;
  GtkWidget *radiobutton_lan;
  GtkObject *spinbutton_port_adj;
  GtkWidget *spinbutton_port;
  GtkObject *spinbutton_players_adj;
  GtkWidget *spinbutton_players;
  GtkWidget *vbox2;
  GtkWidget *alignment3;
  GtkWidget *button_launch;
  GtkWidget *alignment1;
  GtkWidget *hbox2;
  GtkWidget *image_launch;
  GtkWidget *label_launch;
  GtkWidget *alignment4;
  GtkWidget *vbox3;
  GtkWidget *alignment5;
  GtkWidget *button_stop;
  GtkWidget *alignment2;
  GtkWidget *hbox3;
  GtkWidget *image2;
  GtkWidget *label6;
  GtkWidget *alignment6;
  GtkWidget *label2;
  GtkWidget *scrolledwindow_status;
  GtkWidget *textview_status;
  GtkWidget *hbuttonbox1;
  GtkWidget *button_close;
  GtkWidget *button_help;
  GtkTooltips *tooltips;

  tooltips = gtk_tooltips_new ();

  window_main = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_name (window_main, "window_main");
  gtk_window_set_title (GTK_WINDOW (window_main), "Hu-go! server");

  vbox1 = gtk_vbox_new (FALSE, 0);
  gtk_widget_set_name (vbox1, "vbox1");
  gtk_widget_show (vbox1);
  gtk_container_add (GTK_CONTAINER (window_main), vbox1);

  hbox1 = gtk_hbox_new (FALSE, 0);
  gtk_widget_set_name (hbox1, "hbox1");
  gtk_widget_show (hbox1);
  gtk_box_pack_start (GTK_BOX (vbox1), hbox1, FALSE, FALSE, 0);

  image1 = create_pixmap (window_main, "gnome-fs-network.png");
  gtk_widget_set_name (image1, "image1");
  gtk_widget_show (image1);
  gtk_box_pack_start (GTK_BOX (hbox1), image1, FALSE, TRUE, 2);

  table1 = gtk_table_new (4, 2, FALSE);
  gtk_widget_set_name (table1, "table1");
  gtk_widget_show (table1);
  gtk_box_pack_start (GTK_BOX (hbox1), table1, TRUE, TRUE, 0);

  label3 = gtk_label_new ("Number of players : ");
  gtk_widget_set_name (label3, "label3");
  gtk_widget_show (label3);
  gtk_table_attach (GTK_TABLE (table1), label3, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (label3), 1, 0.5);

  label4 = gtk_label_new ("Game mode : ");
  gtk_widget_set_name (label4, "label4");
  gtk_widget_show (label4);
  gtk_table_attach (GTK_TABLE (table1), label4, 0, 1, 1, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (label4), 1, 0.5);

  label5 = gtk_label_new ("Server port : ");
  gtk_widget_set_name (label5, "label5");
  gtk_widget_show (label5);
  gtk_table_attach (GTK_TABLE (table1), label5, 0, 1, 3, 4,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (label5), 1, 0.5);

  radiobutton_internet = gtk_radio_button_new_with_mnemonic (NULL, "Internet");
  gtk_widget_set_name (radiobutton_internet, "radiobutton_internet");
  gtk_widget_show (radiobutton_internet);
  gtk_table_attach (GTK_TABLE (table1), radiobutton_internet, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_tooltips_set_tip (tooltips, radiobutton_internet, "Use Internet procol for sharing game session", NULL);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobutton_internet), radiobutton_internet_group);
  radiobutton_internet_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobutton_internet));

  radiobutton_lan = gtk_radio_button_new_with_mnemonic (NULL, "LAN");
  gtk_widget_set_name (radiobutton_lan, "radiobutton_lan");
  gtk_widget_show (radiobutton_lan);
  gtk_table_attach (GTK_TABLE (table1), radiobutton_lan, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_tooltips_set_tip (tooltips, radiobutton_lan, "Use LAN protocol for sharing game session", NULL);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobutton_lan), radiobutton_internet_group);
  radiobutton_internet_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobutton_lan));

  spinbutton_port_adj = gtk_adjustment_new (25679, 1, 65536, 1, 10, 10);
  spinbutton_port = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton_port_adj), 1, 0);
  gtk_widget_set_name (spinbutton_port, "spinbutton_port");
  gtk_widget_show (spinbutton_port);
  gtk_table_attach (GTK_TABLE (table1), spinbutton_port, 1, 2, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_tooltips_set_tip (tooltips, spinbutton_port, "UDP Port to use for listening to clients", NULL);

  spinbutton_players_adj = gtk_adjustment_new (2, 1, 5, 1, 10, 10);
  spinbutton_players = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton_players_adj), 1, 0);
  gtk_widget_set_name (spinbutton_players, "spinbutton_players");
  gtk_widget_show (spinbutton_players);
  gtk_table_attach (GTK_TABLE (table1), spinbutton_players, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_tooltips_set_tip (tooltips, spinbutton_players, "Number of open slots", NULL);

  vbox2 = gtk_vbox_new (FALSE, 0);
  gtk_widget_set_name (vbox2, "vbox2");
  gtk_widget_show (vbox2);
  gtk_box_pack_start (GTK_BOX (hbox1), vbox2, FALSE, FALSE, 0);

  alignment3 = gtk_alignment_new (0.5, 0.5, 1, 1);
  gtk_widget_set_name (alignment3, "alignment3");
  gtk_widget_show (alignment3);
  gtk_box_pack_start (GTK_BOX (vbox2), alignment3, TRUE, TRUE, 0);

  button_launch = gtk_button_new ();
  gtk_widget_set_name (button_launch, "button_launch");
  gtk_widget_show (button_launch);
  gtk_box_pack_start (GTK_BOX (vbox2), button_launch, FALSE, FALSE, 0);
  GTK_WIDGET_SET_FLAGS (button_launch, GTK_CAN_DEFAULT);
  gtk_tooltips_set_tip (tooltips, button_launch, "Start the server", NULL);

  alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_set_name (alignment1, "alignment1");
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (button_launch), alignment1);

  hbox2 = gtk_hbox_new (FALSE, 2);
  gtk_widget_set_name (hbox2, "hbox2");
  gtk_widget_show (hbox2);
  gtk_container_add (GTK_CONTAINER (alignment1), hbox2);

  image_launch = create_pixmap (window_main, "gnome-fs-network-24.png");
  gtk_widget_set_name (image_launch, "image_launch");
  gtk_widget_show (image_launch);
  gtk_box_pack_start (GTK_BOX (hbox2), image_launch, FALSE, FALSE, 0);

  label_launch = gtk_label_new_with_mnemonic ("Launch Server");
  gtk_widget_set_name (label_launch, "label_launch");
  gtk_widget_show (label_launch);
  gtk_box_pack_start (GTK_BOX (hbox2), label_launch, FALSE, FALSE, 0);

  alignment4 = gtk_alignment_new (0.5, 0.5, 1, 1);
  gtk_widget_set_name (alignment4, "alignment4");
  gtk_widget_show (alignment4);
  gtk_box_pack_start (GTK_BOX (vbox2), alignment4, TRUE, TRUE, 0);

  vbox3 = gtk_vbox_new (FALSE, 0);
  gtk_widget_set_name (vbox3, "vbox3");
  gtk_widget_show (vbox3);
  gtk_box_pack_start (GTK_BOX (hbox1), vbox3, FALSE, FALSE, 0);

  alignment5 = gtk_alignment_new (0.5, 0.5, 1, 1);
  gtk_widget_set_name (alignment5, "alignment5");
  gtk_widget_show (alignment5);
  gtk_box_pack_start (GTK_BOX (vbox3), alignment5, TRUE, TRUE, 0);

  button_stop = gtk_button_new ();
  gtk_widget_set_name (button_stop, "button_stop");
  gtk_box_pack_start (GTK_BOX (vbox3), button_stop, FALSE, FALSE, 0);

  alignment2 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_set_name (alignment2, "alignment2");
  gtk_widget_show (alignment2);
  gtk_container_add (GTK_CONTAINER (button_stop), alignment2);

  hbox3 = gtk_hbox_new (FALSE, 0);
  gtk_widget_set_name (hbox3, "hbox3");
  gtk_widget_show (hbox3);
  gtk_container_add (GTK_CONTAINER (alignment2), hbox3);

  image2 = gtk_image_new_from_stock ("gtk-stop", GTK_ICON_SIZE_BUTTON);
  gtk_widget_set_name (image2, "image2");
  gtk_widget_show (image2);
  gtk_box_pack_start (GTK_BOX (hbox3), image2, TRUE, TRUE, 0);

  label6 = gtk_label_new ("Stop Server");
  gtk_widget_set_name (label6, "label6");
  gtk_widget_show (label6);
  gtk_box_pack_start (GTK_BOX (hbox3), label6, FALSE, FALSE, 0);

  alignment6 = gtk_alignment_new (0.5, 0.5, 1, 1);
  gtk_widget_set_name (alignment6, "alignment6");
  gtk_widget_show (alignment6);
  gtk_box_pack_start (GTK_BOX (vbox3), alignment6, TRUE, TRUE, 0);

  label2 = gtk_label_new ("Status :");
  gtk_widget_set_name (label2, "label2");
  gtk_widget_show (label2);
  gtk_box_pack_start (GTK_BOX (vbox1), label2, FALSE, FALSE, 0);
  gtk_misc_set_alignment (GTK_MISC (label2), 0, 0.5);

  scrolledwindow_status = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_set_name (scrolledwindow_status, "scrolledwindow_status");
  gtk_widget_show (scrolledwindow_status);
  gtk_box_pack_start (GTK_BOX (vbox1), scrolledwindow_status, TRUE, TRUE, 0);
  gtk_scrolled_window_set_policy (GTK_SCROLLED_WINDOW (scrolledwindow_status), GTK_POLICY_AUTOMATIC, GTK_POLICY_AUTOMATIC);

  textview_status = gtk_text_view_new ();
  gtk_widget_set_name (textview_status, "textview_status");
  gtk_widget_show (textview_status);
  gtk_container_add (GTK_CONTAINER (scrolledwindow_status), textview_status);
  gtk_widget_set_sensitive (textview_status, FALSE);
  GTK_WIDGET_UNSET_FLAGS (textview_status, GTK_CAN_FOCUS);
  gtk_text_view_set_editable (GTK_TEXT_VIEW (textview_status), FALSE);
  gtk_text_view_set_cursor_visible (GTK_TEXT_VIEW (textview_status), FALSE);

  hbuttonbox1 = gtk_hbutton_box_new ();
  gtk_widget_set_name (hbuttonbox1, "hbuttonbox1");
  gtk_widget_show (hbuttonbox1);
  gtk_box_pack_start (GTK_BOX (vbox1), hbuttonbox1, FALSE, FALSE, 0);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (hbuttonbox1), GTK_BUTTONBOX_SPREAD);

  button_close = gtk_button_new_from_stock ("gtk-quit");
  gtk_widget_set_name (button_close, "button_close");
  gtk_widget_show (button_close);
  gtk_container_add (GTK_CONTAINER (hbuttonbox1), button_close);
  GTK_WIDGET_SET_FLAGS (button_close, GTK_CAN_DEFAULT);

  button_help = gtk_button_new_from_stock ("gtk-help");
  gtk_widget_set_name (button_help, "button_help");
  gtk_widget_show (button_help);
  gtk_container_add (GTK_CONTAINER (hbuttonbox1), button_help);
  GTK_WIDGET_SET_FLAGS (button_help, GTK_CAN_DEFAULT);

  g_signal_connect ((gpointer) window_main, "delete_event",
                    G_CALLBACK (gtk_main_quit),
                    NULL);
  g_signal_connect ((gpointer) button_launch, "clicked",
                    G_CALLBACK (on_button_launch_clicked),
                    NULL);
  g_signal_connect ((gpointer) button_stop, "clicked",
                    G_CALLBACK (on_button_stop_clicked),
                    NULL);
  g_signal_connect ((gpointer) button_close, "clicked",
                    G_CALLBACK (gtk_main_quit),
                    NULL);
  g_signal_connect ((gpointer) button_help, "clicked",
                    G_CALLBACK (on_button_help_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window_main, window_main, "window_main");
  GLADE_HOOKUP_OBJECT (window_main, vbox1, "vbox1");
  GLADE_HOOKUP_OBJECT (window_main, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (window_main, image1, "image1");
  GLADE_HOOKUP_OBJECT (window_main, table1, "table1");
  GLADE_HOOKUP_OBJECT (window_main, label3, "label3");
  GLADE_HOOKUP_OBJECT (window_main, label4, "label4");
  GLADE_HOOKUP_OBJECT (window_main, label5, "label5");
  GLADE_HOOKUP_OBJECT (window_main, radiobutton_internet, "radiobutton_internet");
  GLADE_HOOKUP_OBJECT (window_main, radiobutton_lan, "radiobutton_lan");
  GLADE_HOOKUP_OBJECT (window_main, spinbutton_port, "spinbutton_port");
  GLADE_HOOKUP_OBJECT (window_main, spinbutton_players, "spinbutton_players");
  GLADE_HOOKUP_OBJECT (window_main, vbox2, "vbox2");
  GLADE_HOOKUP_OBJECT (window_main, alignment3, "alignment3");
  GLADE_HOOKUP_OBJECT (window_main, button_launch, "button_launch");
  GLADE_HOOKUP_OBJECT (window_main, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (window_main, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (window_main, image_launch, "image_launch");
  GLADE_HOOKUP_OBJECT (window_main, label_launch, "label_launch");
  GLADE_HOOKUP_OBJECT (window_main, alignment4, "alignment4");
  GLADE_HOOKUP_OBJECT (window_main, vbox3, "vbox3");
  GLADE_HOOKUP_OBJECT (window_main, alignment5, "alignment5");
  GLADE_HOOKUP_OBJECT (window_main, button_stop, "button_stop");
  GLADE_HOOKUP_OBJECT (window_main, alignment2, "alignment2");
  GLADE_HOOKUP_OBJECT (window_main, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (window_main, image2, "image2");
  GLADE_HOOKUP_OBJECT (window_main, label6, "label6");
  GLADE_HOOKUP_OBJECT (window_main, alignment6, "alignment6");
  GLADE_HOOKUP_OBJECT (window_main, label2, "label2");
  GLADE_HOOKUP_OBJECT (window_main, scrolledwindow_status, "scrolledwindow_status");
  GLADE_HOOKUP_OBJECT (window_main, textview_status, "textview_status");
  GLADE_HOOKUP_OBJECT (window_main, hbuttonbox1, "hbuttonbox1");
  GLADE_HOOKUP_OBJECT (window_main, button_close, "button_close");
  GLADE_HOOKUP_OBJECT (window_main, button_help, "button_help");
  GLADE_HOOKUP_OBJECT_NO_REF (window_main, tooltips, "tooltips");

  gtk_widget_grab_default (button_launch);
  return window_main;
}

GtkWidget*
create_window_help (void)
{
  GtkWidget *window_help;
  GtkWidget *vbox4;
  GtkWidget *hbox4;
  GtkWidget *image3;
  GtkWidget *label7;
  GtkWidget *label8;
  GtkWidget *hbuttonbox2;
  GtkWidget *button1;

  window_help = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_name (window_help, "window_help");
  gtk_window_set_title (GTK_WINDOW (window_help), "Hu-go! server Help");
  gtk_window_set_destroy_with_parent (GTK_WINDOW (window_help), TRUE);

  vbox4 = gtk_vbox_new (FALSE, 0);
  gtk_widget_set_name (vbox4, "vbox4");
  gtk_widget_show (vbox4);
  gtk_container_add (GTK_CONTAINER (window_help), vbox4);

  hbox4 = gtk_hbox_new (FALSE, 0);
  gtk_widget_set_name (hbox4, "hbox4");
  gtk_widget_show (hbox4);
  gtk_box_pack_start (GTK_BOX (vbox4), hbox4, FALSE, TRUE, 0);

  image3 = create_pixmap (window_help, "gnome-fs-network.png");
  gtk_widget_set_name (image3, "image3");
  gtk_widget_show (image3);
  gtk_box_pack_start (GTK_BOX (hbox4), image3, TRUE, TRUE, 0);
  gtk_misc_set_alignment (GTK_MISC (image3), 0.96, 0.5);

  label7 = gtk_label_new ("Hu-Go Server");
  gtk_widget_set_name (label7, "label7");
  gtk_widget_show (label7);
  gtk_box_pack_end (GTK_BOX (hbox4), label7, TRUE, TRUE, 0);
  gtk_misc_set_alignment (GTK_MISC (label7), 0.03, 0.5);

  label8 = gtk_label_new ("Hu-Go! Server is a required component for the netplay feature of Hu-Go!  It is started with a specified number of slots (customizable with the \"Number of Players\" option), a game will not begin until all specified slots are filled.\n\nEach client exports one or more local players.  The clients need to specify the server (via name or numeric address) and port number to use.  The default port is 25679 (UDP).  Additionally, the protocol\nfor connecting to the server must also be specified.\n\nThe server is started in either LAN or Internet Protocol, according to input named 'Game mode' and the clients are required to use the same protocol.  This isn't yet enforced by the server, but mixing protocols will likely yield unpredictable results.\n\nThe \"LAN Protocol\" is recommended for fast local networks.  It requires a fast ping time, and allows for perfect multi-client coordination.\n\nThe \"Internet Protocol\" works with networks having a higher latency. The drawback is that the game is not as reactive as with the LAN protocol.\n\nOnce all clients are connected, the game begins.  Input from each player is collected at the server and distributed to all participating clients.");
  gtk_widget_set_name (label8, "label8");
  gtk_widget_show (label8);
  gtk_box_pack_start (GTK_BOX (vbox4), label8, TRUE, TRUE, 0);
  gtk_label_set_line_wrap (GTK_LABEL (label8), TRUE);

  hbuttonbox2 = gtk_hbutton_box_new ();
  gtk_widget_set_name (hbuttonbox2, "hbuttonbox2");
  gtk_widget_show (hbuttonbox2);
  gtk_box_pack_start (GTK_BOX (vbox4), hbuttonbox2, FALSE, FALSE, 0);

  button1 = gtk_button_new_from_stock ("gtk-close");
  gtk_widget_set_name (button1, "button1");
  gtk_widget_show (button1);
  gtk_container_add (GTK_CONTAINER (hbuttonbox2), button1);
  GTK_WIDGET_SET_FLAGS (button1, GTK_CAN_DEFAULT);

  g_signal_connect ((gpointer) window_help, "delete_event",
                    G_CALLBACK (on_window_help_delete_event),
                    NULL);
  g_signal_connect ((gpointer) button1, "clicked",
                    G_CALLBACK (on_button_close_help_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window_help, window_help, "window_help");
  GLADE_HOOKUP_OBJECT (window_help, vbox4, "vbox4");
  GLADE_HOOKUP_OBJECT (window_help, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (window_help, image3, "image3");
  GLADE_HOOKUP_OBJECT (window_help, label7, "label7");
  GLADE_HOOKUP_OBJECT (window_help, label8, "label8");
  GLADE_HOOKUP_OBJECT (window_help, hbuttonbox2, "hbuttonbox2");
  GLADE_HOOKUP_OBJECT (window_help, button1, "button1");

  return window_help;
}

