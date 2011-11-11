/* Generated by re2c 0.13.5 */
#line 1 "implicit.re"
#include "yaml.h"

yaml_char_t *
find_implicit_tag(str, len)
  const yaml_char_t *str;
  size_t len;
{
  /* This bit was taken from implicit.re, which is in the Syck library.
   *
   * Copyright (C) 2003 why the lucky stiff */

  const yaml_char_t *cursor, *limit, *marker;
  cursor = str;
  limit = str + len;


#line 20 "<stdout>"
{
	yaml_char_t yych;

	yych = *cursor;
	switch (yych) {
	case 0x00:	goto yy6;
	case '+':	goto yy16;
	case '-':	goto yy17;
	case '.':	goto yy20;
	case '0':	goto yy18;
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy19;
	case '<':	goto yy22;
	case '=':	goto yy21;
	case 'F':	goto yy15;
	case 'N':	goto yy5;
	case 'O':	goto yy13;
	case 'T':	goto yy11;
	case 'Y':	goto yy9;
	case 'f':	goto yy14;
	case 'n':	goto yy4;
	case 'o':	goto yy12;
	case 't':	goto yy10;
	case 'y':	goto yy8;
	case '~':	goto yy2;
	default:	goto yy23;
	}
yy2:
	++cursor;
	if ((yych = *cursor) <= 0x00) goto yy6;
yy3:
#line 94 "implicit.re"
	{   return "str"; }
#line 61 "<stdout>"
yy4:
	yych = *(marker = ++cursor);
	switch (yych) {
	case 'o':	goto yy172;
	case 'u':	goto yy200;
	default:	goto yy3;
	}
yy5:
	yych = *(marker = ++cursor);
	switch (yych) {
	case 'O':
	case 'o':	goto yy172;
	case 'U':	goto yy195;
	case 'u':	goto yy196;
	default:	goto yy3;
	}
yy6:
	++cursor;
#line 56 "implicit.re"
	{   return "null"; }
#line 82 "<stdout>"
yy8:
	yych = *(marker = ++cursor);
	switch (yych) {
	case 'e':	goto yy194;
	default:	goto yy3;
	}
yy9:
	yych = *(marker = ++cursor);
	switch (yych) {
	case 'E':	goto yy192;
	case 'e':	goto yy193;
	default:	goto yy3;
	}
yy10:
	yych = *(marker = ++cursor);
	switch (yych) {
	case 'r':	goto yy190;
	default:	goto yy3;
	}
yy11:
	yych = *(marker = ++cursor);
	switch (yych) {
	case 'R':	goto yy186;
	case 'r':	goto yy187;
	default:	goto yy3;
	}
yy12:
	yych = *(marker = ++cursor);
	switch (yych) {
	case 'f':	goto yy185;
	case 'n':	goto yy182;
	default:	goto yy3;
	}
yy13:
	yych = *(marker = ++cursor);
	switch (yych) {
	case 'F':	goto yy180;
	case 'N':
	case 'n':	goto yy182;
	case 'f':	goto yy181;
	default:	goto yy3;
	}
yy14:
	yych = *(marker = ++cursor);
	switch (yych) {
	case 'a':	goto yy177;
	default:	goto yy3;
	}
yy15:
	yych = *(marker = ++cursor);
	switch (yych) {
	case 'A':	goto yy168;
	case 'a':	goto yy169;
	default:	goto yy3;
	}
yy16:
	yych = *(marker = ++cursor);
	switch (yych) {
	case '.':	goto yy167;
	case '0':	goto yy158;
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy47;
	default:	goto yy3;
	}
yy17:
	yych = *(marker = ++cursor);
	switch (yych) {
	case '.':	goto yy157;
	case '0':	goto yy158;
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy47;
	default:	goto yy3;
	}
yy18:
	yych = *(marker = ++cursor);
	switch (yych) {
	case 0x00:	goto yy52;
	case ',':	goto yy142;
	case '.':	goto yy50;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':	goto yy140;
	case '8':
	case '9':	goto yy141;
	case ':':	goto yy49;
	case 'x':	goto yy144;
	default:	goto yy3;
	}
yy19:
	yych = *(marker = ++cursor);
	switch (yych) {
	case 0x00:	goto yy52;
	case ',':	goto yy47;
	case '.':	goto yy50;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy46;
	case ':':	goto yy49;
	default:	goto yy3;
	}
yy20:
	yych = *(marker = ++cursor);
	switch (yych) {
	case 'I':	goto yy33;
	case 'N':	goto yy31;
	case 'i':	goto yy32;
	case 'n':	goto yy30;
	default:	goto yy3;
	}
yy21:
	yych = *++cursor;
	if (yych <= 0x00) goto yy28;
	goto yy3;
yy22:
	yych = *(marker = ++cursor);
	switch (yych) {
	case '<':	goto yy24;
	default:	goto yy3;
	}
yy23:
	yych = *++cursor;
	goto yy3;
yy24:
	yych = *++cursor;
	if (yych <= 0x00) goto yy26;
yy25:
	cursor = marker;
	goto yy3;
yy26:
	++cursor;
#line 92 "implicit.re"
	{   return "merge"; }
#line 241 "<stdout>"
yy28:
	++cursor;
#line 90 "implicit.re"
	{   return "default"; }
#line 246 "<stdout>"
yy30:
	yych = *++cursor;
	switch (yych) {
	case 'a':	goto yy45;
	default:	goto yy25;
	}
yy31:
	yych = *++cursor;
	switch (yych) {
	case 'A':	goto yy40;
	case 'a':	goto yy41;
	default:	goto yy25;
	}
yy32:
	yych = *++cursor;
	switch (yych) {
	case 'n':	goto yy39;
	default:	goto yy25;
	}
yy33:
	yych = *++cursor;
	switch (yych) {
	case 'N':	goto yy34;
	case 'n':	goto yy35;
	default:	goto yy25;
	}
yy34:
	yych = *++cursor;
	switch (yych) {
	case 'F':	goto yy36;
	default:	goto yy25;
	}
yy35:
	yych = *++cursor;
	switch (yych) {
	case 'f':	goto yy36;
	default:	goto yy25;
	}
yy36:
	yych = *++cursor;
	if (yych >= 0x01) goto yy25;
	++cursor;
#line 76 "implicit.re"
	{   return "float#inf"; }
#line 291 "<stdout>"
yy39:
	yych = *++cursor;
	switch (yych) {
	case 'f':	goto yy36;
	default:	goto yy25;
	}
yy40:
	yych = *++cursor;
	switch (yych) {
	case 'N':	goto yy42;
	default:	goto yy25;
	}
yy41:
	yych = *++cursor;
	switch (yych) {
	case 'N':	goto yy42;
	default:	goto yy25;
	}
yy42:
	yych = *++cursor;
	if (yych >= 0x01) goto yy25;
	++cursor;
#line 80 "implicit.re"
	{   return "float#nan"; }
#line 316 "<stdout>"
yy45:
	yych = *++cursor;
	switch (yych) {
	case 'n':	goto yy42;
	default:	goto yy25;
	}
yy46:
	yych = *++cursor;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy74;
	default:	goto yy48;
	}
yy47:
	++cursor;
	yych = *cursor;
yy48:
	switch (yych) {
	case 0x00:	goto yy52;
	case ',':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy47;
	case '.':	goto yy50;
	case ':':	goto yy49;
	default:	goto yy25;
	}
yy49:
	++cursor;
	yych = *cursor;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':	goto yy66;
	case '6':
	case '7':
	case '8':
	case '9':	goto yy67;
	default:	goto yy25;
	}
yy50:
	++cursor;
	yych = *cursor;
	switch (yych) {
	case 0x00:	goto yy56;
	case ',':	goto yy54;
	case '.':	goto yy58;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy50;
	case 'E':
	case 'e':	goto yy60;
	default:	goto yy25;
	}
yy52:
	++cursor;
#line 68 "implicit.re"
	{   return "int"; }
#line 400 "<stdout>"
yy54:
	++cursor;
	yych = *cursor;
	switch (yych) {
	case 0x00:	goto yy56;
	case ',':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy54;
	default:	goto yy25;
	}
yy56:
	++cursor;
#line 70 "implicit.re"
	{   return "float#fix"; }
#line 423 "<stdout>"
yy58:
	++cursor;
	yych = *cursor;
	switch (yych) {
	case '.':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy58;
	case 'E':
	case 'e':	goto yy60;
	default:	goto yy25;
	}
yy60:
	yych = *++cursor;
	switch (yych) {
	case '+':
	case '-':	goto yy61;
	default:	goto yy25;
	}
yy61:
	yych = *++cursor;
	if (yych <= 0x00) goto yy25;
	goto yy63;
yy62:
	++cursor;
	yych = *cursor;
yy63:
	switch (yych) {
	case 0x00:	goto yy64;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy62;
	default:	goto yy25;
	}
yy64:
	++cursor;
#line 72 "implicit.re"
	{   return "float#exp"; }
#line 476 "<stdout>"
yy66:
	++cursor;
	yych = *cursor;
	switch (yych) {
	case 0x00:	goto yy70;
	case '.':	goto yy68;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy67;
	case ':':	goto yy49;
	default:	goto yy25;
	}
yy67:
	++cursor;
	yych = *cursor;
	switch (yych) {
	case 0x00:	goto yy70;
	case '.':	goto yy68;
	case ':':	goto yy49;
	default:	goto yy25;
	}
yy68:
	++cursor;
	yych = *cursor;
	switch (yych) {
	case 0x00:	goto yy72;
	case ',':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy68;
	default:	goto yy25;
	}
yy70:
	++cursor;
#line 66 "implicit.re"
	{   return "int#base60"; }
#line 527 "<stdout>"
yy72:
	++cursor;
#line 74 "implicit.re"
	{   return "float#base60"; }
#line 532 "<stdout>"
yy74:
	yych = *++cursor;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy75;
	default:	goto yy48;
	}
yy75:
	yych = *++cursor;
	switch (yych) {
	case '-':	goto yy76;
	default:	goto yy48;
	}
yy76:
	yych = *++cursor;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy77;
	default:	goto yy25;
	}
yy77:
	yych = *++cursor;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy78;
	default:	goto yy25;
	}
yy78:
	yych = *++cursor;
	switch (yych) {
	case '-':	goto yy79;
	default:	goto yy25;
	}
yy79:
	yych = *++cursor;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy80;
	default:	goto yy25;
	}
yy80:
	yych = *++cursor;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy81;
	default:	goto yy25;
	}
yy81:
	yych = *++cursor;
	switch (yych) {
	case 0x00:	goto yy82;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy25;
	case 'T':	goto yy84;
	case 't':	goto yy85;
	default:	goto yy87;
	}
yy82:
	++cursor;
#line 82 "implicit.re"
	{   return "timestamp#ymd"; }
#line 642 "<stdout>"
yy84:
	yych = *++cursor;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy126;
	default:	goto yy25;
	}
yy85:
	yych = *++cursor;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy108;
	default:	goto yy25;
	}
yy86:
	++cursor;
	yych = *cursor;
yy87:
	switch (yych) {
	case '\t':
	case ' ':	goto yy86;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy88;
	default:	goto yy25;
	}
yy88:
	yych = *++cursor;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy89;
	default:	goto yy25;
	}
yy89:
	yych = *++cursor;
	switch (yych) {
	case ':':	goto yy90;
	default:	goto yy25;
	}
yy90:
	yych = *++cursor;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy91;
	default:	goto yy25;
	}
yy91:
	yych = *++cursor;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy92;
	default:	goto yy25;
	}
yy92:
	yych = *++cursor;
	switch (yych) {
	case ':':	goto yy93;
	default:	goto yy25;
	}
yy93:
	yych = *++cursor;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy94;
	default:	goto yy25;
	}
yy94:
	yych = *++cursor;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy95;
	default:	goto yy25;
	}
yy95:
	yych = *++cursor;
	switch (yych) {
	case '\t':
	case ' ':	goto yy98;
	case '.':	goto yy96;
	default:	goto yy25;
	}
yy96:
	++cursor;
	yych = *cursor;
	switch (yych) {
	case '\t':
	case ' ':	goto yy98;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy96;
	default:	goto yy25;
	}
yy98:
	++cursor;
	yych = *cursor;
	switch (yych) {
	case '\t':
	case ' ':	goto yy98;
	case '+':
	case '-':	goto yy101;
	case 'Z':	goto yy100;
	default:	goto yy25;
	}
yy100:
	yych = *++cursor;
	if (yych <= 0x00) goto yy105;
	goto yy25;
yy101:
	yych = *++cursor;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy102;
	default:	goto yy25;
	}
yy102:
	yych = *++cursor;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy103;
	default:	goto yy25;
	}
yy103:
	yych = *++cursor;
	switch (yych) {
	case 0x00:	goto yy105;
	case ':':	goto yy104;
	default:	goto yy25;
	}
yy104:
	yych = *++cursor;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy107;
	default:	goto yy25;
	}
yy105:
	++cursor;
#line 86 "implicit.re"
	{   return "timestamp#spaced"; }
#line 876 "<stdout>"
yy107:
	yych = *++cursor;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy100;
	default:	goto yy25;
	}
yy108:
	yych = *++cursor;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy109;
	default:	goto yy25;
	}
yy109:
	yych = *++cursor;
	switch (yych) {
	case ':':	goto yy110;
	default:	goto yy25;
	}
yy110:
	yych = *++cursor;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy111;
	default:	goto yy25;
	}
yy111:
	yych = *++cursor;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy112;
	default:	goto yy25;
	}
yy112:
	yych = *++cursor;
	switch (yych) {
	case ':':	goto yy113;
	default:	goto yy25;
	}
yy113:
	yych = *++cursor;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy114;
	default:	goto yy25;
	}
yy114:
	yych = *++cursor;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy115;
	default:	goto yy25;
	}
yy115:
	yych = *++cursor;
	switch (yych) {
	case '.':	goto yy116;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy25;
	default:	goto yy117;
	}
yy116:
	++cursor;
	yych = *cursor;
yy117:
	switch (yych) {
	case '+':
	case '-':	goto yy119;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy116;
	case 'Z':	goto yy118;
	default:	goto yy25;
	}
yy118:
	yych = *++cursor;
	if (yych <= 0x00) goto yy123;
	goto yy25;
yy119:
	yych = *++cursor;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy120;
	default:	goto yy25;
	}
yy120:
	yych = *++cursor;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy121;
	default:	goto yy25;
	}
yy121:
	yych = *++cursor;
	switch (yych) {
	case 0x00:	goto yy123;
	case ':':	goto yy122;
	default:	goto yy25;
	}
yy122:
	yych = *++cursor;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy125;
	default:	goto yy25;
	}
yy123:
	++cursor;
yy124:
#line 84 "implicit.re"
	{   return "timestamp#iso8601"; }
#line 1076 "<stdout>"
yy125:
	yych = *++cursor;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy118;
	default:	goto yy25;
	}
yy126:
	yych = *++cursor;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy127;
	default:	goto yy25;
	}
yy127:
	yych = *++cursor;
	switch (yych) {
	case ':':	goto yy128;
	default:	goto yy25;
	}
yy128:
	yych = *++cursor;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy129;
	default:	goto yy25;
	}
yy129:
	yych = *++cursor;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy130;
	default:	goto yy25;
	}
yy130:
	yych = *++cursor;
	switch (yych) {
	case ':':	goto yy131;
	default:	goto yy25;
	}
yy131:
	yych = *++cursor;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy132;
	default:	goto yy25;
	}
yy132:
	yych = *++cursor;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy133;
	default:	goto yy25;
	}
yy133:
	yych = *++cursor;
	switch (yych) {
	case '.':	goto yy134;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy25;
	case 'Z':	goto yy136;
	default:	goto yy135;
	}
yy134:
	++cursor;
	yych = *cursor;
yy135:
	switch (yych) {
	case '+':
	case '-':	goto yy119;
	case '0':	goto yy134;
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy138;
	case 'Z':	goto yy118;
	default:	goto yy25;
	}
yy136:
	yych = *++cursor;
	if (yych >= 0x01) goto yy25;
	yych = *++cursor;
	goto yy124;
yy138:
	++cursor;
	yych = *cursor;
	switch (yych) {
	case '+':
	case '-':	goto yy119;
	case '0':	goto yy134;
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy138;
	case 'Z':	goto yy136;
	default:	goto yy25;
	}
yy140:
	yych = *++cursor;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':	goto yy155;
	case '8':
	case '9':	goto yy153;
	default:	goto yy143;
	}
yy141:
	yych = *++cursor;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy153;
	default:	goto yy152;
	}
yy142:
	++cursor;
	yych = *cursor;
yy143:
	switch (yych) {
	case 0x00:	goto yy149;
	case ',':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':	goto yy142;
	case '.':	goto yy50;
	case '8':
	case '9':	goto yy151;
	case ':':	goto yy49;
	default:	goto yy25;
	}
yy144:
	yych = *++cursor;
	if (yych <= 0x00) goto yy25;
	goto yy146;
yy145:
	++cursor;
	yych = *cursor;
yy146:
	switch (yych) {
	case 0x00:	goto yy147;
	case ',':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':	goto yy145;
	default:	goto yy25;
	}
yy147:
	++cursor;
#line 62 "implicit.re"
	{   return "int#hex"; }
#line 1330 "<stdout>"
yy149:
	++cursor;
#line 64 "implicit.re"
	{   return "int#oct"; }
#line 1335 "<stdout>"
yy151:
	++cursor;
	yych = *cursor;
yy152:
	switch (yych) {
	case ',':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy151;
	case '.':	goto yy50;
	case ':':	goto yy49;
	default:	goto yy25;
	}
yy153:
	yych = *++cursor;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy154;
	default:	goto yy152;
	}
yy154:
	yych = *++cursor;
	switch (yych) {
	case '-':	goto yy76;
	default:	goto yy152;
	}
yy155:
	yych = *++cursor;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':	goto yy156;
	case '8':
	case '9':	goto yy154;
	default:	goto yy143;
	}
yy156:
	yych = *++cursor;
	switch (yych) {
	case '-':	goto yy76;
	default:	goto yy143;
	}
yy157:
	yych = *++cursor;
	switch (yych) {
	case 'I':	goto yy160;
	case 'i':	goto yy159;
	default:	goto yy25;
	}
yy158:
	yych = *++cursor;
	switch (yych) {
	case 0x00:	goto yy52;
	case 'x':	goto yy144;
	default:	goto yy143;
	}
yy159:
	yych = *++cursor;
	switch (yych) {
	case 'n':	goto yy166;
	default:	goto yy25;
	}
yy160:
	yych = *++cursor;
	switch (yych) {
	case 'N':	goto yy161;
	case 'n':	goto yy162;
	default:	goto yy25;
	}
yy161:
	yych = *++cursor;
	switch (yych) {
	case 'F':	goto yy163;
	default:	goto yy25;
	}
yy162:
	yych = *++cursor;
	switch (yych) {
	case 'f':	goto yy163;
	default:	goto yy25;
	}
yy163:
	yych = *++cursor;
	if (yych >= 0x01) goto yy25;
	++cursor;
#line 78 "implicit.re"
	{   return "float#neginf"; }
#line 1443 "<stdout>"
yy166:
	yych = *++cursor;
	switch (yych) {
	case 'f':	goto yy163;
	default:	goto yy25;
	}
yy167:
	yych = *++cursor;
	switch (yych) {
	case 'I':	goto yy33;
	case 'i':	goto yy32;
	default:	goto yy25;
	}
yy168:
	yych = *++cursor;
	switch (yych) {
	case 'L':	goto yy175;
	default:	goto yy25;
	}
yy169:
	yych = *++cursor;
	switch (yych) {
	case 'l':	goto yy170;
	default:	goto yy25;
	}
yy170:
	yych = *++cursor;
	switch (yych) {
	case 's':	goto yy171;
	default:	goto yy25;
	}
yy171:
	yych = *++cursor;
	switch (yych) {
	case 'e':	goto yy172;
	default:	goto yy25;
	}
yy172:
	yych = *++cursor;
	if (yych >= 0x01) goto yy25;
	++cursor;
#line 60 "implicit.re"
	{   return "bool#no"; }
#line 1487 "<stdout>"
yy175:
	yych = *++cursor;
	switch (yych) {
	case 'S':	goto yy176;
	default:	goto yy25;
	}
yy176:
	yych = *++cursor;
	switch (yych) {
	case 'E':	goto yy172;
	default:	goto yy25;
	}
yy177:
	yych = *++cursor;
	switch (yych) {
	case 'l':	goto yy178;
	default:	goto yy25;
	}
yy178:
	yych = *++cursor;
	switch (yych) {
	case 's':	goto yy179;
	default:	goto yy25;
	}
yy179:
	yych = *++cursor;
	switch (yych) {
	case 'e':	goto yy172;
	default:	goto yy25;
	}
yy180:
	yych = *++cursor;
	switch (yych) {
	case 'F':	goto yy172;
	default:	goto yy25;
	}
yy181:
	yych = *++cursor;
	switch (yych) {
	case 'f':	goto yy172;
	default:	goto yy25;
	}
yy182:
	yych = *++cursor;
	if (yych >= 0x01) goto yy25;
	++cursor;
#line 58 "implicit.re"
	{   return "bool#yes"; }
#line 1536 "<stdout>"
yy185:
	yych = *++cursor;
	switch (yych) {
	case 'f':	goto yy172;
	default:	goto yy25;
	}
yy186:
	yych = *++cursor;
	switch (yych) {
	case 'U':	goto yy189;
	default:	goto yy25;
	}
yy187:
	yych = *++cursor;
	switch (yych) {
	case 'u':	goto yy188;
	default:	goto yy25;
	}
yy188:
	yych = *++cursor;
	switch (yych) {
	case 'e':	goto yy182;
	default:	goto yy25;
	}
yy189:
	yych = *++cursor;
	switch (yych) {
	case 'E':	goto yy182;
	default:	goto yy25;
	}
yy190:
	yych = *++cursor;
	switch (yych) {
	case 'u':	goto yy191;
	default:	goto yy25;
	}
yy191:
	yych = *++cursor;
	switch (yych) {
	case 'e':	goto yy182;
	default:	goto yy25;
	}
yy192:
	yych = *++cursor;
	switch (yych) {
	case 'S':	goto yy182;
	default:	goto yy25;
	}
yy193:
	yych = *++cursor;
	switch (yych) {
	case 's':	goto yy182;
	default:	goto yy25;
	}
yy194:
	yych = *++cursor;
	switch (yych) {
	case 's':	goto yy182;
	default:	goto yy25;
	}
yy195:
	yych = *++cursor;
	switch (yych) {
	case 'L':	goto yy199;
	default:	goto yy25;
	}
yy196:
	yych = *++cursor;
	switch (yych) {
	case 'l':	goto yy197;
	default:	goto yy25;
	}
yy197:
	yych = *++cursor;
	switch (yych) {
	case 'l':	goto yy198;
	default:	goto yy25;
	}
yy198:
	yych = *++cursor;
	if (yych <= 0x00) goto yy6;
	goto yy25;
yy199:
	yych = *++cursor;
	switch (yych) {
	case 'L':	goto yy198;
	default:	goto yy25;
	}
yy200:
	yych = *++cursor;
	switch (yych) {
	case 'l':	goto yy201;
	default:	goto yy25;
	}
yy201:
	++cursor;
	switch ((yych = *cursor)) {
	case 'l':	goto yy198;
	default:	goto yy25;
	}
}
#line 96 "implicit.re"


}
